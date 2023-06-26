module fifo_async_c #(
    parameter integer DW_W = 64,
    parameter integer DW_R = 32,
    parameter integer SIZE = 256*8 //r: unit:byte
)
(
    clk_w,
    clk_r,
    rst_n,

    w_req,
    data_i,
    full,

    r_req,
    data_o,
    empty,

    w_cnt,
    r_cnt
);
`include "mydefines.v"
// `include "myfuncs.v"
function integer myclog2;
    input integer n;
begin
    myclog2 = 0;
    for(n=n-1; n>0; n = n>>1) begin
        myclog2 = myclog2 + 1;
    end
end
endfunction

localparam integer DW_W_BYTE = (DW_W+7)/8;
localparam integer DW_R_BYTE = (DW_R+7)/8;
localparam integer WCNT_W = myclog2((SIZE+DW_W_BYTE-1)/DW_W_BYTE);
localparam integer RCNT_W = myclog2((SIZE+DW_W_BYTE-1)/DW_R_BYTE);

input clk_w;
input clk_r;
input rst_n;

input w_req;
input [DW_W-1:0] data_i;
output full;

input r_req;
output [DW_R-1:0] data_o;
output empty;

output [WCNT_W-1:0] w_cnt;
output [RCNT_W-1:0] r_cnt;

import "DPI-C" function void writeDataAsyncFifo(
    input bit[31:0] inputW, input bit[31:0] outputW, 
    input bit[31:0] deep,
    inout bit[7:0] data_r[0 : SIZE-1], 
    inout bit [31:0] w_cnt_ptr, inout bit [31:0] r_cnt_ptr,
    input bit [DW_W-1:0] data_i, 
    output bit [DW_R-1:0] data_o,
    output bit[31:0]wcnt, 
    output bit[31:0]rcnt, 
    output bit full, output bit empty);
import "DPI-C" function void readDataAsyncFifo(
    input bit[31:0] inputW, input bit[31:0] outputW, 
    input bit[31:0] deep,
    inout bit[7:0] data_r[0 : SIZE-1], 
    inout bit [31:0] w_cnt_ptr, inout bit [31:0] r_cnt_ptr,
    output bit [DW_R-1:0] data_o, 
    output bit[31:0]wcnt, 
    output bit[31:0]rcnt, 
    output bit full, output bit empty);

bit empty_b;
bit full_b;
bit [31:0] w_cnt_b;
bit [31:0] r_cnt_b;
bit [DW_W-1:0] data_i_b;
bit [DW_R-1:0] data_o_b;

assign empty = empty_b;
assign full = full_b;
assign w_cnt = w_cnt_b[WCNT_W-1:0];
assign r_cnt = r_cnt_b[RCNT_W-1:0];
assign data_i_b = data_i;
assign data_o = data_o_b;

bit [7:0] data_r [0 : SIZE-1];
bit [31:0] w_cnt_p;
bit [31:0] r_cnt_p;


always@(posedge clk_w) begin
    if(~rst_n) begin
        full_b = 0;
        w_cnt_b = 0;
        w_cnt_p = 0;
    end
    else if(w_req) begin
        writeDataAsyncFifo(DW_W_BYTE, DW_R_BYTE, SIZE, data_r, w_cnt_p, r_cnt_p, 
            data_i_b, data_o_b, w_cnt_b, r_cnt_b, full_b, empty_b);
    end
end

always@(posedge clk_r) begin
    if(~rst_n) begin
        empty_b = 1;
        r_cnt_b = 0;
        r_cnt_p = 0;
    end
    else if(r_req) begin
        readDataAsyncFifo(DW_W_BYTE, DW_R_BYTE, SIZE, data_r, w_cnt_p, r_cnt_p, 
            data_o_b, w_cnt_b, r_cnt_b, full_b, empty_b);
    end
end

endmodule

