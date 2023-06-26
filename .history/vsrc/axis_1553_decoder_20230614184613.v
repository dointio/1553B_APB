
`timescale 1ns/100ps

module axis_1553_decoder #(
    parameter clock_speed = 20000000,
    parameter sample_rate = 2000000,
    parameter bit_slice_offset = 0,
    parameter invert_data = 0,
    parameter sample_select = 0
  ) 
  (
        input aclk,
    input arstn,
        output  reg[15:0] m_axis_tdata,
    output  reg       m_axis_tvalid,
    output  reg[7:0]  m_axis_tuser,
    input             m_axis_tready,
        input  [1:0] diff
  );
  
    localparam integer base_1553_clock_rate = 1000000;
    localparam integer samples_per_mhz = sample_rate / base_1553_clock_rate;
    localparam integer cycles_per_mhz = clock_speed / base_1553_clock_rate;
    localparam integer delay_time = cycles_per_mhz * 4;
    localparam integer samples_to_skip = ((cycles_per_mhz > samples_per_mhz) ? cycles_per_mhz / samples_per_mhz : 0);
    localparam integer round_sample_select = ((sample_select == 0) ? samples_to_skip/2 : sample_select % samples_to_skip);
    localparam integer bit_rate_per_mhz = samples_per_mhz;
    localparam integer round_bit_slice_offset = ((cycles_per_mhz > samples_per_mhz) ? ((bit_slice_offset == 0) ? bit_rate_per_mhz/4 : bit_slice_offset % bit_rate_per_mhz) : 0);
    localparam integer sync_pulse_len = bit_rate_per_mhz * 3;
    localparam integer bits_per_trans = 20;
    localparam integer synth_bits_per_trans = (bits_per_trans*bit_rate_per_mhz);
    localparam diff_wait    = 5'h01;
    localparam data_cap     = 5'h03;
    localparam data_reduce  = 5'h07;
    localparam parity_gen   = 5'h0F;
    localparam trans        = 5'h1F;
    localparam error        = 5'h00;
    localparam [sync_pulse_len-1:0]sync_cmd_stat = {{sync_pulse_len/2{1'b0}}, {sync_pulse_len/2{1'b1}}};
    localparam [sync_pulse_len-1:0]sync_data     = {{sync_pulse_len/2{1'b1}}, {sync_pulse_len/2{1'b0}}};
    localparam cmd_data = 3'b010;
    localparam cmd_cmnd = 3'b100;
    localparam [(bit_rate_per_mhz)-1:0]bit_pattern = {{bit_rate_per_mhz/2{1'b1}}, {bit_rate_per_mhz/2{1'b0}}};
    localparam [synth_bits_per_trans-1:0]synth_clk = {bits_per_trans{bit_pattern}};
  
    integer bit_slice_index;
    reg [synth_bits_per_trans-1:0] reg_data;
    reg parity_bit;
    reg delay_bit;
    reg [4:0]  state = error;
    reg [15:0] data;
    reg [7:0]  cmd;
    reg [1:0]  p_diff;
    reg [clogb2(samples_to_skip):0]        skip_counter;
    reg [clogb2(delay_time)-1:0]           pause_counter;
    reg [clogb2(synth_bits_per_trans)-1:0] trans_counter;
  
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
                  trans: begin
            m_axis_tdata  <= data;
            m_axis_tuser  <= cmd;
            m_axis_tvalid <= 1'b1;
          end
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
            
    always @(posedge aclk) begin
      if(arstn == 1'b0) begin
        state           <= error;
        data            <= 0;
        cmd             <= 0;
        parity_bit      <= 0;
        delay_bit       <= 0;
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
                  data_cap: begin
            state <= data_cap;
            
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
            
                      if(pause_counter == 0) begin
              state <= diff_wait;
              cmd   <= 0;
            end
          end
                  data_reduce: begin
            state <= parity_gen;
            
                      for(bit_slice_index = 0; bit_slice_index < 16; bit_slice_index = bit_slice_index + 1) begin
              data[bit_slice_index] <= (invert_data > 0 ? ~reg_data[bit_rate_per_mhz*(bit_slice_index+1)+round_bit_slice_offset] : reg_data[bit_rate_per_mhz*(bit_slice_index+1)+round_bit_slice_offset]);
            end
            
                      parity_bit <= (invert_data > 0 ? ~reg_data[round_bit_slice_offset] : reg_data[round_bit_slice_offset]);
            
                      cmd[1] <= (invert_data > 0 ? 1'b1 : 1'b0);
            
                      cmd[2] <= delay_bit;
          end
                  parity_gen: begin
            state <= trans;
            
                      cmd[0] <= ~(~(^data) ^ parity_bit);
          end
                  trans:
            state <= diff_wait;
                  default:
            state <= diff_wait;
        endcase
      end
    end
  
    always @(posedge aclk) begin
      if(arstn == 1'b0) begin
        p_diff        <= 2'b11;
        skip_counter  <= 0;
      end else begin
        p_diff <= diff;

        case (state)
          diff_wait, data_cap: begin
            skip_counter <= (samples_to_skip == 0 ? 0 : (skip_counter + 1) % samples_to_skip);          if((state == diff_wait) && (diff[0] == diff[1])) begin
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

      always @(posedge aclk) begin
      if(arstn == 1'b0) begin
        reg_data      <= synth_clk;
        trans_counter <= synth_bits_per_trans-1;
      end else begin
        case (state)
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
