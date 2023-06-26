
`timescale 1ns/100ps

module axis_1553_encoder #(
    parameter clock_speed = 2000000,
    parameter sample_rate = 2000000
) 
(
    input aclk,
    input arstn,
    input   [15:0]  s_axis_tdata,
    input           s_axis_tvalid,
    input   [7:0]   s_axis_tuser,
    output          s_axis_tready,
    output  reg [1:0]   diff,
    output  reg         en_diff
);
  
    localparam integer base_1553_clock_rate = 1000000;
    localparam integer samples_per_mhz = sample_rate / base_1553_clock_rate;
    localparam integer cycles_per_mhz = clock_speed / base_1553_clock_rate;
    localparam integer samples_to_skip = ((cycles_per_mhz > samples_per_mhz) ? cycles_per_mhz / samples_per_mhz - 1 : 0); 
    localparam integer bit_rate_per_mhz = samples_per_mhz;
    localparam integer delay_time = cycles_per_mhz * 4;
    localparam integer sync_pulse_len = bit_rate_per_mhz * 3;
    localparam integer bits_per_trans = 20;
    localparam integer synth_bits_per_trans = (bits_per_trans*bit_rate_per_mhz);
    localparam [(bit_rate_per_mhz)-1:0]bit_pattern = {{bit_rate_per_mhz/2{1'b1}}, {bit_rate_per_mhz/2{1'b0}}};
    localparam [synth_bits_per_trans-1:0]synth_clk = {bits_per_trans{bit_pattern}};
    localparam data_cap     = 3'd1;
    localparam data_invert  = 3'd2;
    localparam parity_gen   = 3'd3;
    localparam process_data = 4;
    localparam pause_ck     = 3'd5;
    localparam trans        = 3'd6;
    localparam error        = 3'd0;
    localparam [sync_pulse_len-1:0]sync_cmd_stat = {{sync_pulse_len/2{1'b0}}, {sync_pulse_len/2{1'b1}}};
    localparam [sync_pulse_len-1:0]sync_data     = {{sync_pulse_len/2{1'b1}}, {sync_pulse_len/2{1'b0}}};
    localparam cmd_data = 3'b010;
    localparam cmd_cmnd = 3'b100;
    localparam enable_diff_output = 1'b1;
  
    integer xor_index;
    integer cycle_index;
    reg [synth_bits_per_trans-1:0]reg_data;
    reg parity_bit;
    reg [2:0]  state = error;
    reg [15:0] data;
    reg [15:0] r_data;
    reg [7:0]  cmd;
    reg [clogb2(samples_to_skip):0]         skip_counter;
    reg [clogb2(delay_time)-1:0]            pause_counter;
    reg [clogb2(synth_bits_per_trans)-1:0]  trans_counter;
    reg [clogb2(synth_bits_per_trans)-1:0]  prev_trans_counter;
  
    assign s_axis_tready = (state == data_cap ? arstn : 0);

    always @(posedge aclk) begin
      if(arstn == 1'b0) begin
        pause_counter <= delay_time-1;
      end else begin
        case (state)
          trans:
            pause_counter <= delay_time-1;
          default: begin
            pause_counter <= pause_counter - 1;
            
            if(pause_counter == 0) begin
              pause_counter <= 0;
            end
          end
        endcase
      end
    end
  
    always @(posedge aclk) begin
      if(arstn == 1'b0) begin
        data        <= 0;
        cmd         <= 0;
      end else begin
        case (state)
          data_cap: begin
            if(s_axis_tvalid == 1'b1) begin
              data <= s_axis_tdata;
              cmd  <= s_axis_tuser;
            end
          end
          trans: begin
            data <= 0;
            cmd  <= 0;
          end
          default:begin
            data <= data;
            cmd  <= cmd;
          end
        endcase
      end
    end
  
    always @(posedge aclk) begin
      if(arstn == 1'b0) begin
        state       <= error;
        parity_bit  <= 0;
        // xor_index   <= 0;
        // cycle_index <= 0;
        reg_data    <= synth_clk;
      end else begin
        case (state)
          data_cap: begin
            state <= data_cap;
            reg_data <= synth_clk;
            parity_bit <= 0;
            r_data     <= 0;
              
            if(s_axis_tvalid == 1'b1) begin
              state <= data_invert;
            end
          end
          data_invert: begin
            state <= parity_gen;
            
            r_data <= data;
            
            if(cmd[1] == 1'b1) begin
              r_data <= ~data;
            end
          end
          parity_gen: begin
            state <= process_data;
            
            parity_bit <= ^r_data;
              
          end
          process_data: begin
            state <= pause_ck;
            
            if(cmd[2] == 1'b0) begin
                state <= trans;
            end
              
            case (cmd[7:5])
              cmd_data:
                reg_data[synth_bits_per_trans-1:synth_bits_per_trans-sync_pulse_len] <= sync_data;
              cmd_cmnd:
                reg_data[synth_bits_per_trans-1:synth_bits_per_trans-sync_pulse_len] <= sync_cmd_stat;
              default:
                reg_data[synth_bits_per_trans-1:synth_bits_per_trans-sync_pulse_len] <= 0;
            endcase
              
            reg_data[bit_rate_per_mhz-1:0] <= reg_data[bit_rate_per_mhz-1:0] ^ {bit_rate_per_mhz{parity_bit}} ^ {bit_rate_per_mhz{cmd[0]}};
              
            for(xor_index = 0; xor_index < 16; xor_index = xor_index + 1) begin
              for(cycle_index = (bit_rate_per_mhz*xor_index)+(bit_rate_per_mhz); cycle_index < (bit_rate_per_mhz*xor_index)+(bit_rate_per_mhz*2); cycle_index = cycle_index + 1)
                reg_data[cycle_index] <= reg_data[cycle_index] ^ r_data[xor_index];
            end
          end
          pause_ck: begin
            state <= pause_ck;
            
            if(pause_counter == 0) begin
              state <= trans;
            end
          end
          trans: begin
            state <= trans;
            
            if((trans_counter == 0) && (prev_trans_counter == 0) && (skip_counter == samples_to_skip)) begin
              state <= data_cap;
            end
          end
          default:
            state <= data_cap;
        endcase
      end
    end
    
    always @(posedge aclk) begin
      if(arstn == 1'b0) begin
        diff                <= 0;
        en_diff             <= ~enable_diff_output;
        trans_counter       <= synth_bits_per_trans-1;
        prev_trans_counter  <= synth_bits_per_trans-1;
      end 
      else begin
        prev_trans_counter <= trans_counter;
        
        case (state)
          trans: begin
            skip_counter <= skip_counter + 1;
            
            en_diff <= enable_diff_output;
            
            diff[0] <= reg_data[trans_counter];
            diff[1] <= ~reg_data[trans_counter];
            
            if(skip_counter == samples_to_skip) begin
              
              trans_counter <= trans_counter - 1;
              
              skip_counter <= 0;
            end
            
                      if(trans_counter == 0) begin
              trans_counter <= 0;
            end
          end
          default: begin
                      diff                <= 0;
            skip_counter        <= 0;
            en_diff             <= ~enable_diff_output;
            trans_counter       <= synth_bits_per_trans-1;
            prev_trans_counter  <= synth_bits_per_trans-1;
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

