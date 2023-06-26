    `include "mydefines.v"

    module st_pipe_stage # (
    // When the depth is 1, the ready signal may relevant to next stage's ready, hence become logic
    // chains. Use CUT_READY to control it
    parameter CUT_READY = 0,
    parameter DP = 1,
    parameter DW = 32
    ) (
    input           i_vld, 
    output          i_rdy, 
    input  [DW-1:0] data_i,
    output          o_vld, 
    input           o_rdy, 
    output [DW-1:0] data_o,

    input           clk,
    input           rst
    ); //超级标准的流水线单元，cut_ready时，必须等输出被接收一个周期后才能接受收入，也就是一顿一顿的。而cut_ready==0时，则是真正的标准流水单元。

    genvar i;
    generate //{

    if(DP == 0) begin: dp_eq_0//{ pass through

        assign o_vld = i_vld;
        assign i_rdy = o_rdy;
        assign data_o = data_i;

    end//}
    else begin: dp_gt_0//{

        wire vld_set;
        wire vld_clr;
        wire vld_ena;
        wire vld_r;
        wire vld_nxt;

        // The valid will be set when input handshaked
        assign vld_set = i_vld & i_rdy;
        // The valid will be clr when output handshaked
        assign vld_clr = o_vld & o_rdy;

        assign vld_ena = vld_set | vld_clr;
        assign vld_nxt = vld_set | (~vld_clr);

        // sirv_gnrl_dfflr #(1) vld_dfflr (vld_ena, vld_nxt, vld_r, clk, rst);
        reg_enrs #(1, 0, "vld_dfflr") vld_dfflr (clk, rst, vld_ena, vld_nxt, vld_r);
        

        assign o_vld = vld_r;

        // sirv_gnrl_dffl #(DW) dat_dfflr (vld_set, data_i, data_o, clk);
        reg_enrs #(DW, 0, "dat_dfflr") dat_dfflr (clk, rst, vld_set, data_i, data_o);

        if(CUT_READY == 1) begin:cut_ready//{
            // If cut ready, then only accept when stage is not full
            assign i_rdy = (~vld_r);
        end//}
        else begin:no_cut_ready//{
            // If not cut ready, then can accept when stage is not full or it is popping 
            assign i_rdy = (~vld_r) | vld_clr;
        end//}
    end//}
    endgenerate//}


    endmodule

