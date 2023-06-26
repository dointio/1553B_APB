/* verilator lint_off MULTITOP*/
/* verilator lint_off DECLFILENAME*/
module fifo_simple # (
  //r:ptr is one-hot code, so don't use it as big fifo!
  // When the depth is 1, the ready signal may relevant to next stage's ready, hence become logic
  // chains. Use CUT_READY to control it
  // When fifo depth is 1, the fifo is a signle stage
       // if CUT_READY is set, then the back-pressure ready signal will be cut
       //      off, and it can only pass 1 data every 2 cycles
  // When fifo depth is > 1, then it is actually a really fifo
       //      The CUT_READY parameter have no impact to any logics
  parameter CUT_READY   = 0,
  parameter ZEROOUT_WHENEMPTY = 0,// Mask out the data with valid or not
  parameter DP          = 8,// FIFO depth
  parameter DW          = 32// FIFO width
) (
  input           clk,
  input           rst_n,

  output  [DP:0] vec_o_debug,

  input           w_req, 
  output          unfull, 
  input  [DW-1:0] data_i,
  input           r_req, 
  output          unempty, 
  output [DW-1:0] data_o
);

genvar i;
generate //{

  if(DP == 0) begin: dp_eq1//{ pass through when it is 0 entries
     assign unempty = w_req;
     assign unfull = r_req;
     assign data_o = data_i;
  end//}
  else begin: dp_gt0//{

    // FIFO registers
    wire [DW-1:0] fifo_rf_r [DP-1:0];
    wire [DP-1:0] fifo_rf_en;

    // read/write enable
    wire wen = w_req & unfull;
    wire ren = unempty & r_req;
    
    // Read-Pointer and Write-Pointer
    wire [DP-1:0] rptr_vec_nxt; 
    wire [DP-1:0] rptr_vec_r;
    wire [DP-1:0] wptr_vec_nxt; 
    wire [DP-1:0] wptr_vec_r;

    if(DP == 1) begin:rptr_dp_1
      assign rptr_vec_nxt = 1'b1; 
    end
    else begin:rptr_dp_not_1
      assign rptr_vec_nxt = 
          rptr_vec_r[DP-1] ? {{DP-1{1'b0}}, 1'b1} :
                          (rptr_vec_r << 1);
    end

    if(DP == 1) begin:wptr_dp_1
      assign wptr_vec_nxt = 1'b1; 
    end
    else begin:wptr_dp_not_1
      assign wptr_vec_nxt =
          wptr_vec_r[DP-1] ? {{DP-1{1'b0}}, 1'b1} :
                          (wptr_vec_r << 1);
    end

    reg_enrs #(DP, 1, "simplefifo_rptr") rptr_vec_dfflrs  (clk, rst_n, ren, rptr_vec_nxt, rptr_vec_r);
    reg_enrs #(DP, 1, "simplefifo_wptr") wptr_vec_dfflrs  (clk, rst_n, wen, wptr_vec_nxt, wptr_vec_r);
    // reg_enrs #(1, 1)    rptr_vec_0_dfflrs  (ren, rptr_vec_nxt[0]     , rptr_vec_r[0]     , clk, rst_n);
    // reg_enrs #(1, 1)    wptr_vec_0_dfflrs  (wen, wptr_vec_nxt[0]     , wptr_vec_r[0]     , clk, rst_n);
    // if(DP > 1) begin:dp_gt1
    // sirv_gnrl_dfflr  #(DP-1) rptr_vec_31_dfflr  (ren, rptr_vec_nxt[DP-1:1], rptr_vec_r[DP-1:1], clk, rst_n);
    // sirv_gnrl_dfflr  #(DP-1) wptr_vec_31_dfflr  (wen, wptr_vec_nxt[DP-1:1], wptr_vec_r[DP-1:1], clk, rst_n);
    // end

    ////////////////
    ///////// Vec register to easy full and empty and the unempty generation with flop-clean
    // wire [DP:0] i_vec;
    // wire [DP:0] o_vec;
    wire [DP:0] vec_nxt;
    wire [DP:0] vec_r;

    wire vec_en = (ren ^ wen );
    assign vec_nxt = wen ? {vec_r[DP-1:0], 1'b1} : (vec_r >> 1);  
    
    // sirv_gnrl_dfflrs #(1)  vec_0_dfflrs     (vec_en, vec_nxt[0]     , vec_r[0]     ,     clk, rst_n);
    // sirv_gnrl_dfflr  #(DP) vec_31_dfflr     (vec_en, vec_nxt[DP:1], vec_r[DP:1],     clk, rst_n);
    reg_enrs #(DP+1, 1, "simplefifo_cnt") vec_dff (clk, rst_n, vec_en, vec_nxt, vec_r);
    // assign i_vec = {1'b0,vec_r[DP:1]};
    // assign o_vec = {1'b0,vec_r[DP:1]};


    if(CUT_READY != 0) begin:cut_ready//{
        // If cut ready, then only accept when fifo is not full
        // assign unfull = (~i_vec[DP-1]);
        assign unfull = ~vec_r[DP];
    end//}
    else begin:no_cut_ready//{
        // If not cut ready, then can accept when fifo is not full or it is popping 
        // assign unfull = (~i_vec[DP-1]) | ren;
        assign unfull = (~vec_r[DP]) | ren;
    end//}



    ///////// write fifo
    for (i=0; i<DP; i=i+1) begin:fifo_rf//{
      assign fifo_rf_en[i] = wen & wptr_vec_r[i];
      // Write the FIFO registers
      // sirv_gnrl_dffl  #(DW) fifo_rf_dffl (fifo_rf_en[i], data_i, fifo_rf_r[i], clk);
      reg_en  #(DW, "SimpleFIFODataReg") fifo_rf_dffl (clk, fifo_rf_en[i], data_i, fifo_rf_r[i]);
    end//}

    //One-Hot Mux as the read path
    integer j;
    reg [DW-1:0] mux_rdat;
    always @*
    begin : rd_port_PROC//{
      mux_rdat = {DW{1'b0}};
      for(j=0; j<DP; j=j+1) begin
        mux_rdat = mux_rdat | ({DW{rptr_vec_r[j]}} & fifo_rf_r[j]);
      end
    end//}
    
    if(ZEROOUT_WHENEMPTY == 1) begin:mask_output//{
        // Mask the data with valid since the FIFO register is not reset and as X 
        assign data_o = {DW{unempty}} & mux_rdat;
    end//}
    else begin:no_mask_output//{
        // Not Mask the data with valid since no care with X for datapth
        assign data_o = mux_rdat;
    end//}
    
    // unempty as flop-clean
    // assign unempty = (o_vec[0]);
    assign unempty = (vec_r[1]);
    assign vec_o_debug = vec_r;
  end//}
endgenerate//}

endmodule 

/* verilator lint_on MULTITOP*/
/* verilator lint_on DECLFILENAME*/
