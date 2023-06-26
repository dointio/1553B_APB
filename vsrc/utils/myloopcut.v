module myloopcut #(
    parameter DW = 32,
    parameter NAME = "myloopcut"
)(
    input clk,
    input rst,

    input  i_vld,
    output i_rdy,
    input [DW-1 : 0] data_i,

    output o_vld,
    input  o_rdy,
    output [DW-1 : 0] data_o
);


reg_rs #(1, 0) rdy_inst (clk, rst, o_rdy, i_rdy);

wire vld_r;
wire [DW-1 : 0] data_r;
wire open_buf = ~o_rdy & i_rdy;
wire clr_buf  =  o_rdy & ~i_rdy;
reg_enrs #(DW+1, 0, NAME) payload_buf (clk, rst, open_buf, {i_vld, data_i}, {vld_r, data_r});


wire recovery;
reg_enrs #(1, 0, NAME)  cnt_inst  (clk, rst, open_buf | clr_buf, (open_buf ? 1'b1 : 1'b0), recovery);

assign o_vld  = recovery ? vld_r  : i_vld;
assign data_o = recovery ? data_r : data_i;


endmodule

