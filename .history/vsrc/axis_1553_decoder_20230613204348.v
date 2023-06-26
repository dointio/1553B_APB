// ***************************************************************************
// ***************************************************************************
// @FILE    util_axis_1553_decoder.v
// @AUTHOR  JAY CONVERTINO
// @DATE    2021.05.24
// @BRIEF   AXIS MIL-STD-1553 DECODER
// @DETAILS This core is a MIL-STD-1553 to AXI streaming decoder.
//          It uses the postive edge of a clock to sample data. 
//          This restricts the core to 2 Mhz and above for a sample clock.
//          It also features a bit_slice_offset that can be
//          used to change what bit is sampled for the data reduction.
//          TDATA will contain the 16 bit data payload. TUSER is a 8 bit 
//          status register that tells what type of data it is (command or 
//          data) and if the parity was good (1 good, 0 bad).
//          TUSER = {TYY,NA,D,I,P} (7 downto 0)
//          TYY = TYPE OF DATA
//                * 000 N/A
//                * 001 REG (NOT IMPLIMENTED)
//                * 010 DATA
//                * 100 CMD/STATUS
//          NA  = RESERVED FOR FUTURE USE.
//          D   = DELAY BEFORE DATA
//                * 1 = Delay of 4us or more before data
//                * 0 = No delay between data
//          P   = PARITY
//                * 1 = GOOD
//                * 0 = BAD
//
// @LICENSE MIT
//  Copyright 2021 Jay Convertino
//
//  Permission is hereby granted, free of charge, to any person obtaining a copy
//  of this software and associated documentation files (the "Software"), to 
//  deal in the Software without restriction, including without limitation the
//  rights to use, copy, modify, merge, publish, distribute, sublicense, and/or 
//  sell copies of the Software, and to permit persons to whom the Software is 
//  furnished to do so, subject to the following conditions:
//
//  The above copyright notice and this permission notice shall be included in 
//  all copies or substantial portions of the Software.
//
//  THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR 
//  IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY, 
//  FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
//  AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER 
//  LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING 
//  FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS
//  IN THE SOFTWARE.
// ***************************************************************************
// ***************************************************************************

`timescale 1ns/100ps

//mil-std-1553 decoder capable of any clock rate at or above 2 MHz
module axis_1553_decoder #(
    parameter clock_speed = 20000000,
    parameter sample_rate = 2000000,
    parameter bit_slice_offset = 0,
    parameter invert_data = 0,
    parameter sample_select = 0
  ) 
  (
    //clock and reset
    input aclk,
    input arstn,
    //master output
    output  reg[15:0] m_axis_tdata,
    output  reg       m_axis_tvalid,
    output  reg[7:0]  m_axis_tuser,
    input             m_axis_tready,
    //diff input
    input  [1:0] diff
  );
  
  //1553 base clock rate
  localparam integer base_1553_clock_rate = 1000000;
  //sample rate to caputre transmission bits at
  localparam integer samples_per_mhz = sample_rate / base_1553_clock_rate;
  //calculate the number of cycles the clock changes per period
  localparam integer cycles_per_mhz = clock_speed / base_1553_clock_rate;
  //delay time, 4 is for 4 us (min 1553 time)
  localparam integer delay_time = cycles_per_mhz * 4;
  //calculate the number of samples to skip
  localparam integer samples_to_skip = ((cycles_per_mhz > samples_per_mhz) ? cycles_per_mhz / samples_per_mhz : 0);
  //sample_select rounded
  localparam integer round_sample_select = ((sample_select == 0) ? samples_to_skip/2 : sample_select % samples_to_skip);
  //bit rate per mhz
  localparam integer bit_rate_per_mhz = samples_per_mhz;
  // pick the middle of the samples generated by default
  localparam integer round_bit_slice_offset = ((cycles_per_mhz > samples_per_mhz) ? ((bit_slice_offset == 0) ? bit_rate_per_mhz/4 : bit_slice_offset % bit_rate_per_mhz) : 0);
  //sync pulse length
  localparam integer sync_pulse_len = bit_rate_per_mhz * 3;
  //bits per transmission
  localparam integer bits_per_trans = 20;
  //sync bits per trans
  localparam integer synth_bits_per_trans = (bits_per_trans*bit_rate_per_mhz);
  // states in grey code form
  // wait for diff        
  localparam diff_wait    = 5'h01;
  // data capture
  localparam data_cap     = 5'h03;
  // reduce data
  localparam data_reduce  = 5'h07;
  // parity generator
  localparam parity_gen   = 5'h0F;
  // transmit data
  localparam trans        = 5'h1F;
  // someone made a whoops
  localparam error        = 5'h00;
  //sync pulse
  localparam [sync_pulse_len-1:0]sync_cmd_stat = {{sync_pulse_len/2{1'b0}}, {sync_pulse_len/2{1'b1}}};
  localparam [sync_pulse_len-1:0]sync_data     = {{sync_pulse_len/2{1'b1}}, {sync_pulse_len/2{1'b0}}};
  //command tuser encode
  localparam cmd_data = 3'b010;
  localparam cmd_cmnd = 3'b100;
  //create the bit pattern. This is based on outputing data on the negative and
  //positive. This allows the encoder to run down to 1 mhz.
  localparam [(bit_rate_per_mhz)-1:0]bit_pattern = {{bit_rate_per_mhz/2{1'b1}}, {bit_rate_per_mhz/2{1'b0}}};
  //synth clock is the clock constructed by the repeating the bit pattern. 
  //this is intended to be a representation of the clock. Captured at a bit_rate_per_mhz of a 1mhz clock.
  localparam [synth_bits_per_trans-1:0]synth_clk = {bits_per_trans{bit_pattern}};
  
  //for loop indexs
  integer bit_slice_index;
  //data reg
  reg [synth_bits_per_trans-1:0] reg_data;
  //parity bit storage
  reg parity_bit;
  //delay detection bit storage
  reg delay_bit;
  //state machine
  reg [4:0]  state = error;
  //data to transmit
  reg [15:0] data;
  //cmd data
  reg [7:0]  cmd;
  //previous diff for edge detection
  reg [1:0]  p_diff;
  //counters
  reg [clogb2(samples_to_skip):0]        skip_counter;
  reg [clogb2(delay_time)-1:0]           pause_counter;
  reg [clogb2(synth_bits_per_trans)-1:0] trans_counter;
  
  //pause_counter(must be 4us or more between transmit)
  always @(posedge aclk) begin
    if(arstn == 1'b0) begin
      pause_counter <= delay_time-1;
    end else begin
      case (state)
        data_cap, diff_wait: begin
          pause_counter <= delay_time-1;
          
          if(diff[0] == diff[1]) begin
            pause_counter <= pause_counter - 1;
            
            if(pause_counter == 0) begin
              pause_counter <= 0;
            end
          end
        end
        default:
          pause_counter <= delay_time-1;
      endcase
    end
  end
  
  //axis data output
  always @(posedge aclk) begin
    if(arstn == 1'b0) begin
      m_axis_tdata  <= 0;
      m_axis_tvalid <= 0;
      m_axis_tuser  <= 0;
    end else begin
      m_axis_tdata <= m_axis_tdata;
      m_axis_tvalid<= m_axis_tvalid;
      m_axis_tuser <= m_axis_tuser;
      case (state)
        //once the state machine is in transmisson state, begin data output
        trans: begin
          m_axis_tdata  <= data;
          m_axis_tuser  <= cmd;
          m_axis_tvalid <= 1'b1;
        end
        //are we ready kids???? EYYY EYYY CAPTIAN....OHHHHH WHO LIVES IN A PINEAPPLE UNDER THE SEA.
        //...*cough* if we are ready, the data was captured. 0 it out to avoid duplicates.
        default: begin
          if(m_axis_tready == 1'b1) begin
            m_axis_tdata  <= 0;
            m_axis_tvalid <= 0;
            m_axis_tuser  <= 0;
          end
        end
        endcase
    end
  end
            
  //data processing
  always @(posedge aclk) begin
    if(arstn == 1'b0) begin
      state           <= error;
      data            <= 0;
      cmd             <= 0;
      parity_bit      <= 0;
      delay_bit       <= 0;
      bit_slice_index <= 0;
    end else begin
      case (state)
        diff_wait: begin
          state <= diff_wait;
          
          cmd           <= 0;
          data          <= 0;
          parity_bit    <= 0;
          delay_bit     <= 0;
          
          if(pause_counter == 0) begin
            delay_bit <= 1'b1;
          end
          
          if((diff[0] ^ diff[1]) && (skip_counter == 0)) begin
            state <= data_cap;
          end
        end
        //capture data from diff interface (in diff input above)
        data_cap: begin
          state <= data_cap;
          
          //once we have the sync, goto data reduce state wait till 0 to check...
          //needed, not really (0 check).
          if(trans_counter == 0) begin
            if(reg_data[synth_bits_per_trans-1:synth_bits_per_trans-sync_pulse_len] == sync_cmd_stat) begin
              state <= data_reduce;
              cmd[7:5] <= cmd_cmnd;
            end
            
            if(reg_data[synth_bits_per_trans-1:synth_bits_per_trans-sync_pulse_len] == sync_data) begin
              state <= data_reduce;
              cmd[7:5] <= cmd_data;
            end
          end
          
          //go back to wait if timed out
          if(pause_counter == 0) begin
            state <= diff_wait;
            cmd   <= 0;
          end
        end
        //reduce data samples down to 16 bit vector
        data_reduce: begin
          state <= parity_gen;
          
          //get the 16 data bits from reg_data... from 0th to 15th bit in data (one bit up from parity bit).
          for(bit_slice_index = 0; bit_slice_index < 16; bit_slice_index = bit_slice_index + 1) begin
            data[bit_slice_index] <= (invert_data > 0 ? ~reg_data[bit_rate_per_mhz*(bit_slice_index+1)+round_bit_slice_offset] : reg_data[bit_rate_per_mhz*(bit_slice_index+1)+round_bit_slice_offset]);
          end
          
          //get the parity bit
          parity_bit <= (invert_data > 0 ? ~reg_data[round_bit_slice_offset] : reg_data[round_bit_slice_offset]);
          
          //insert if data is inverted by core (synth time option).
          cmd[1] <= (invert_data > 0 ? 1'b1 : 1'b0);
          
          //insert if delay is detected
          cmd[2] <= delay_bit;
        end
        //compare to parity bit of incomming data and store in command
        parity_gen: begin
          state <= trans;
          
          //same? 1 good parity, 0 bad parity. XNOR, same good diff bad.
          cmd[0] <= ~(~(^data) ^ parity_bit);
        end
        //transmit data, actually done in data output process below.
        trans:
          state <= diff_wait;
        //error state, goto diff_wait
        default:
          state <= diff_wait;
      endcase
    end
  end
  
  //skip counter with detection between edges, for alignment
  always @(posedge aclk) begin
    if(arstn == 1'b0) begin
      p_diff        <= 2'b11;
      skip_counter  <= 0;
    end else begin
      p_diff <= diff;

      case (state)
        diff_wait, data_cap: begin
          skip_counter <= (samples_to_skip == 0 ? 0 : (skip_counter + 1) % samples_to_skip);//r: ?
          if((state == diff_wait) && (diff[0] == diff[1])) begin
            skip_counter <= skip_counter;
          end
          
          if((pause_counter == 0) && (diff[0] == diff[1])) begin
            skip_counter <= 0;
          end
          
          if((p_diff[0] == 0) && (diff[0] == 1)) begin
            skip_counter <= 0;
          end
                
          if((p_diff[1] == 0) && (diff[1] == 1)) begin
            skip_counter <= 0;
          end
        end
        error: begin
          p_diff        <= 2'b11;
          skip_counter  <= 0;
        end
        default: begin
          skip_counter <= (samples_to_skip == 0 ? 0 : (skip_counter + 1) % samples_to_skip);
        end
      endcase
    end
  end

  //differential data input posedge
  always @(posedge aclk) begin
    if(arstn == 1'b0) begin
      reg_data      <= synth_clk;
      trans_counter <= synth_bits_per_trans-1;
    end else begin
      case (state)
        //once the state machine is in data caputre state, begin data capture when a diff in the line is sampled.
        data_cap: begin
          if(skip_counter == round_sample_select) begin
            reg_data <= {reg_data[synth_bits_per_trans-2:0], p_diff[0]};
            trans_counter <= trans_counter - 1;
          end
          
          if((pause_counter == 0) && (diff[0] == diff[1])) begin
            reg_data <= synth_clk;
          end
          
          if(trans_counter == 0) begin
            trans_counter <= 0;
          end
        end
        trans: begin
          reg_data      <= synth_clk;
          trans_counter <= synth_bits_per_trans-1;
        end
        error: begin
          reg_data      <= synth_clk;
          trans_counter <= synth_bits_per_trans-1;
        end
        default: begin
          trans_counter <= synth_bits_per_trans-1;
        end
      endcase
    end
  end
  
  //copied from the IEEE 1364-2001 Standard
  function integer clogb2;
    input [31:0] value;
    begin
        value = value - 1;
        for (clogb2 = 0; value > 0; clogb2 = clogb2 + 1) begin
            value = value >> 1;
        end
    end
  endfunction
endmodule
