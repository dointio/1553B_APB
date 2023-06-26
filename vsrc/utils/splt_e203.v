module splt_e203 # (
  parameter AW = 32,
  parameter DW = 64,
  // The number of outstanding supported
  parameter FIFO_OUTS_NUM = 8,
  parameter FIFO_CUT_READY = 0,
  // SPLT_NUM=4 ports, so 2 bits for port id
  parameter SPLT_NUM = 4,
  parameter SPLT_PTR_1HOT = 1,// Currently we always use 1HOT (i.e., this is configured as 1)
                                // do not try to configure it as 0, becuase we never use it and verify it
  parameter SPLT_PTR_W = 4,
  parameter ALLOW_DIFF = 1,
  parameter ALLOW_0CYCL_RSP = 1,
  parameter VLD_MSK_PAYLOAD = 0,
  parameter USR_W = 1 
) (
  input  [SPLT_NUM-1:0] i_icb_splt_indic,        

  input  i_icb_cmd_valid, 
  output i_icb_cmd_ready, 
  input  [1-1:0]    i_icb_cmd_read, 
  input  [AW-1:0]   i_icb_cmd_addr, 
  input  [DW-1:0]   i_icb_cmd_wdata, 
  input  [DW/8-1:0] i_icb_cmd_wmask,
  input  [1:0]      i_icb_cmd_burst,
  input  [1:0]      i_icb_cmd_beat,
  input             i_icb_cmd_lock,
  input             i_icb_cmd_excl,
  input  [1:0]      i_icb_cmd_size,
  input  [USR_W-1:0]i_icb_cmd_usr,

  output i_icb_rsp_valid, 
  input  i_icb_rsp_ready, 
  output i_icb_rsp_err,
  output i_icb_rsp_excl_ok,
  output [DW-1:0] i_icb_rsp_rdata, 
  output [USR_W-1:0] i_icb_rsp_usr, 
  
  input  [SPLT_NUM*1-1:0]    o_bus_icb_cmd_ready, 
  output [SPLT_NUM*1-1:0]    o_bus_icb_cmd_valid, 
  output [SPLT_NUM*1-1:0]    o_bus_icb_cmd_read, 
  output [SPLT_NUM*AW-1:0]   o_bus_icb_cmd_addr, 
  output [SPLT_NUM*DW-1:0]   o_bus_icb_cmd_wdata, 
  output [SPLT_NUM*DW/8-1:0] o_bus_icb_cmd_wmask,
  output [SPLT_NUM*2-1:0]    o_bus_icb_cmd_burst,
  output [SPLT_NUM*2-1:0]    o_bus_icb_cmd_beat,
  output [SPLT_NUM*1-1:0]    o_bus_icb_cmd_lock,
  output [SPLT_NUM*1-1:0]    o_bus_icb_cmd_excl,
  output [SPLT_NUM*2-1:0]    o_bus_icb_cmd_size,
  output [SPLT_NUM*USR_W-1:0]o_bus_icb_cmd_usr,

  input  [SPLT_NUM*1-1:0]  o_bus_icb_rsp_valid, 
  output [SPLT_NUM*1-1:0]  o_bus_icb_rsp_ready, 
  input  [SPLT_NUM*1-1:0]  o_bus_icb_rsp_err,
  input  [SPLT_NUM*1-1:0]  o_bus_icb_rsp_excl_ok,
  input  [SPLT_NUM*DW-1:0] o_bus_icb_rsp_rdata, 
  input  [SPLT_NUM*USR_W-1:0] o_bus_icb_rsp_usr, 

  input  clk,  
  input  rst_n
  );


integer j;

wire [SPLT_NUM-1:0] o_icb_cmd_valid; 
wire [SPLT_NUM-1:0] o_icb_cmd_ready; 

wire [1-1:0]    o_icb_cmd_read [SPLT_NUM-1:0]; 
wire [AW-1:0]   o_icb_cmd_addr [SPLT_NUM-1:0]; 
wire [DW-1:0]   o_icb_cmd_wdata[SPLT_NUM-1:0]; 
wire [DW/8-1:0] o_icb_cmd_wmask[SPLT_NUM-1:0];
wire [1:0]      o_icb_cmd_burst[SPLT_NUM-1:0];
wire [1:0]      o_icb_cmd_beat [SPLT_NUM-1:0];
wire            o_icb_cmd_lock [SPLT_NUM-1:0];
wire            o_icb_cmd_excl [SPLT_NUM-1:0];
wire [1:0]      o_icb_cmd_size [SPLT_NUM-1:0];
wire [USR_W-1:0]o_icb_cmd_usr  [SPLT_NUM-1:0];

wire [SPLT_NUM-1:0] o_icb_rsp_valid; 
wire [SPLT_NUM-1:0] o_icb_rsp_ready; 
wire [SPLT_NUM-1:0] o_icb_rsp_err  ;
wire [SPLT_NUM-1:0] o_icb_rsp_excl_ok  ;
wire [DW-1:0] o_icb_rsp_rdata  [SPLT_NUM-1:0];
wire [USR_W-1:0] o_icb_rsp_usr [SPLT_NUM-1:0];

reg sel_o_apb_cmd_ready;

wire rspid_fifo_bypass;
wire rspid_fifo_wen;
wire rspid_fifo_ren;

wire [SPLT_PTR_W-1:0] o_icb_rsp_port_id;

wire rspid_fifo_i_valid;
wire rspid_fifo_o_valid;
wire rspid_fifo_i_ready;
wire rspid_fifo_o_ready;
wire [SPLT_PTR_W-1:0] rspid_fifo_rdat;
wire [SPLT_PTR_W-1:0] rspid_fifo_wdat;

wire rspid_fifo_full;       
wire rspid_fifo_empty;       
reg [SPLT_PTR_W-1:0] i_splt_indic_id;

wire i_icb_cmd_ready_pre;
wire i_icb_cmd_valid_pre;
    
wire i_icb_rsp_ready_pre; 
wire i_icb_rsp_valid_pre;


genvar i;
generate //{
  if(SPLT_NUM == 1) begin:splt_num_eq_1_gen// {
    assign i_icb_cmd_ready     = o_bus_icb_cmd_ready; 
    assign o_bus_icb_cmd_valid = i_icb_cmd_valid; 
    assign o_bus_icb_cmd_read  = i_icb_cmd_read ; 
    assign o_bus_icb_cmd_addr  = i_icb_cmd_addr ; 
    assign o_bus_icb_cmd_wdata = i_icb_cmd_wdata; 
    assign o_bus_icb_cmd_wmask = i_icb_cmd_wmask;
    assign o_bus_icb_cmd_burst = i_icb_cmd_burst;
    assign o_bus_icb_cmd_beat  = i_icb_cmd_beat ;
    assign o_bus_icb_cmd_lock  = i_icb_cmd_lock ;
    assign o_bus_icb_cmd_excl  = i_icb_cmd_excl ;
    assign o_bus_icb_cmd_size  = i_icb_cmd_size ;
    assign o_bus_icb_cmd_usr   = i_icb_cmd_usr  ;

    assign o_bus_icb_rsp_ready = i_icb_rsp_ready; 
    assign i_icb_rsp_valid     = o_bus_icb_rsp_valid; 
    assign i_icb_rsp_err       = o_bus_icb_rsp_err  ;
    assign i_icb_rsp_excl_ok   = o_bus_icb_rsp_excl_ok  ;
    assign i_icb_rsp_rdata     = o_bus_icb_rsp_rdata;
    assign i_icb_rsp_usr       = o_bus_icb_rsp_usr;

  end//}
  else begin:splt_num_gt_1_gen//{

    for(i = 0; i < SPLT_NUM; i = i+1)//{
    begin:icb_distract_gen
      assign o_icb_cmd_ready[i]                             = o_bus_icb_cmd_ready[(i+1)*1     -1 : (i)*1     ]; 
      assign o_bus_icb_cmd_valid[(i+1)*1     -1 : i*1     ] = o_icb_cmd_valid[i];
      assign o_bus_icb_cmd_read [(i+1)*1     -1 : i*1     ] = o_icb_cmd_read [i];
      assign o_bus_icb_cmd_addr [(i+1)*AW    -1 : i*AW    ] = o_icb_cmd_addr [i];
      assign o_bus_icb_cmd_wdata[(i+1)*DW    -1 : i*DW    ] = o_icb_cmd_wdata[i];
      assign o_bus_icb_cmd_wmask[(i+1)*(DW/8)-1 : i*(DW/8)] = o_icb_cmd_wmask[i];
      assign o_bus_icb_cmd_burst[(i+1)*2     -1 : i*2     ] = o_icb_cmd_burst[i];
      assign o_bus_icb_cmd_beat [(i+1)*2     -1 : i*2     ] = o_icb_cmd_beat [i];
      assign o_bus_icb_cmd_lock [(i+1)*1     -1 : i*1     ] = o_icb_cmd_lock [i];
      assign o_bus_icb_cmd_excl [(i+1)*1     -1 : i*1     ] = o_icb_cmd_excl [i];
      assign o_bus_icb_cmd_size [(i+1)*2     -1 : i*2     ] = o_icb_cmd_size [i];
      assign o_bus_icb_cmd_usr  [(i+1)*USR_W -1 : i*USR_W ] = o_icb_cmd_usr  [i];

      assign o_bus_icb_rsp_ready[(i+1)*1-1 :i*1 ] = o_icb_rsp_ready[i]; 
      assign o_icb_rsp_valid[i]                   = o_bus_icb_rsp_valid[(i+1)*1-1 :i*1 ]; 
      assign o_icb_rsp_err  [i]                   = o_bus_icb_rsp_err  [(i+1)*1-1 :i*1 ];
      assign o_icb_rsp_excl_ok  [i]               = o_bus_icb_rsp_excl_ok  [(i+1)*1-1 :i*1 ];
      assign o_icb_rsp_rdata[i]                   = o_bus_icb_rsp_rdata[(i+1)*DW-1:i*DW];
      assign o_icb_rsp_usr  [i]                   = o_bus_icb_rsp_usr  [(i+1)*USR_W-1:i*USR_W];
    end//}

    ///////////////////////
    // Input ICB will be accepted when
    // (*) The targeted icb have "ready" asserted
    // (*) The FIFO is not full
    
    always @ (*) begin : sel_o_apb_cmd_ready_PROC
      sel_o_apb_cmd_ready = 1'b0;
      for(j = 0; j < SPLT_NUM; j = j+1) begin//{
        sel_o_apb_cmd_ready = sel_o_apb_cmd_ready | (i_icb_splt_indic[j] & o_icb_cmd_ready[j]);
      end//}
    end

    assign i_icb_cmd_ready_pre = sel_o_apb_cmd_ready;

    if(ALLOW_DIFF == 1) begin:allow_diff// {
       assign i_icb_cmd_valid_pre = i_icb_cmd_valid     & (~rspid_fifo_full);
       assign i_icb_cmd_ready     = i_icb_cmd_ready_pre & (~rspid_fifo_full);
    end
    else begin:not_allow_diff
       // The next transaction can only be issued if there is no any outstanding 
       //   transactions to different targets
       wire cmd_diff_branch = (~rspid_fifo_empty) & (~(rspid_fifo_wdat == rspid_fifo_rdat));
       assign i_icb_cmd_valid_pre = i_icb_cmd_valid     & (~cmd_diff_branch) & (~rspid_fifo_full);
       assign i_icb_cmd_ready     = i_icb_cmd_ready_pre & (~cmd_diff_branch) & (~rspid_fifo_full);
    end
    
    if(SPLT_PTR_1HOT == 1) begin:ptr_1hot// {
       always @ (*) begin : i_splt_indic_id_PROC
         i_splt_indic_id = i_icb_splt_indic;
       end
    end
    else begin:ptr_not_1hot//}{
       always @ (*) begin : i_splt_indic_id_PROC
         i_splt_indic_id = {SPLT_PTR_W{1'b0}};
         for(j = 0; j < SPLT_NUM; j = j+1) begin//{
           i_splt_indic_id = i_splt_indic_id | ({SPLT_PTR_W{i_icb_splt_indic[j]}} & $unsigned(j));
         end//}
       end
    end//}
        
    assign rspid_fifo_wen = i_icb_cmd_valid & i_icb_cmd_ready;
    assign rspid_fifo_ren = i_icb_rsp_valid & i_icb_rsp_ready;

    if(ALLOW_0CYCL_RSP == 1) begin: allow_0rsp
        assign rspid_fifo_bypass = rspid_fifo_empty & rspid_fifo_wen & rspid_fifo_ren;
        assign o_icb_rsp_port_id = rspid_fifo_empty ? rspid_fifo_wdat : rspid_fifo_rdat;
        // We dont need this empty qualifications because we allow the 0 cyle response
        assign i_icb_rsp_valid     = i_icb_rsp_valid_pre;
        assign i_icb_rsp_ready_pre = i_icb_rsp_ready;
    end
    else begin: no_allow_0rsp
        assign rspid_fifo_bypass = 1'b0;
        assign o_icb_rsp_port_id = rspid_fifo_empty ? {SPLT_PTR_W{1'b0}} : rspid_fifo_rdat;
        assign i_icb_rsp_valid     = (~rspid_fifo_empty) & i_icb_rsp_valid_pre;
        assign i_icb_rsp_ready_pre = (~rspid_fifo_empty) & i_icb_rsp_ready;
    end

    assign rspid_fifo_i_valid = rspid_fifo_wen & (~rspid_fifo_bypass);
    assign rspid_fifo_full    = (~rspid_fifo_i_ready);
    assign rspid_fifo_o_ready = rspid_fifo_ren & (~rspid_fifo_bypass);
    assign rspid_fifo_empty   = (~rspid_fifo_o_valid);

    assign rspid_fifo_wdat   = i_splt_indic_id;
 
    if(FIFO_OUTS_NUM == 1) begin:fifo_dp_1//{
      sirv_gnrl_pipe_stage # (
        .CUT_READY (FIFO_CUT_READY),
        .DP  (1),
        .DW  (SPLT_PTR_W)
      ) u_sirv_gnrl_rspid_fifo (
        .i_vld(rspid_fifo_i_valid),
        .i_rdy(rspid_fifo_i_ready),
        .i_dat(rspid_fifo_wdat ),
        .o_vld(rspid_fifo_o_valid), 
        .o_rdy(rspid_fifo_o_ready),  
        .o_dat(rspid_fifo_rdat ),  
      
        .clk  (clk),
        .rst_n(rst_n)
      );

    end//}
    else begin: fifo_dp_gt_1//{
      // sirv_gnrl_fifo # (
      sirv_gnrl_fifo #(
        .CUT_READY (FIFO_CUT_READY),
        .MSKO      (0),
        .DP  (FIFO_OUTS_NUM),
        .DW  (SPLT_PTR_W)
      ) u_sirv_gnrl_rspid_fifo (
        .i_vld(rspid_fifo_i_valid),
        .i_rdy(rspid_fifo_i_ready),
        .i_dat(rspid_fifo_wdat ),
        .o_vld(rspid_fifo_o_valid),
        .o_rdy(rspid_fifo_o_ready),  
        .o_dat(rspid_fifo_rdat ),  
      
        .clk  (clk),
        .rst_n(rst_n)
      );
    end//}

    ///////////////////////
    // 
    for(i = 0; i < SPLT_NUM; i = i+1)//{
    begin:o_icb_cmd_valid_gen
      assign o_icb_cmd_valid[i] = i_icb_splt_indic[i] & i_icb_cmd_valid_pre;         
      if(VLD_MSK_PAYLOAD == 0) begin: no_vld_msk_payload
          assign o_icb_cmd_read [i] = i_icb_cmd_read ;
          assign o_icb_cmd_addr [i] = i_icb_cmd_addr ;
          assign o_icb_cmd_wdata[i] = i_icb_cmd_wdata;
          assign o_icb_cmd_wmask[i] = i_icb_cmd_wmask;
          assign o_icb_cmd_burst[i] = i_icb_cmd_burst;
          assign o_icb_cmd_beat [i] = i_icb_cmd_beat ;
          assign o_icb_cmd_lock [i] = i_icb_cmd_lock ;
          assign o_icb_cmd_excl [i] = i_icb_cmd_excl ;
          assign o_icb_cmd_size [i] = i_icb_cmd_size ;
          assign o_icb_cmd_usr  [i] = i_icb_cmd_usr  ;
      end
      else begin: vld_msk_payload
          assign o_icb_cmd_read [i] = {1    {o_icb_cmd_valid[i]}} & i_icb_cmd_read ;
          assign o_icb_cmd_addr [i] = {AW   {o_icb_cmd_valid[i]}} & i_icb_cmd_addr ;
          assign o_icb_cmd_wdata[i] = {DW   {o_icb_cmd_valid[i]}} & i_icb_cmd_wdata;
          assign o_icb_cmd_wmask[i] = {DW/8 {o_icb_cmd_valid[i]}} & i_icb_cmd_wmask;
          assign o_icb_cmd_burst[i] = {2    {o_icb_cmd_valid[i]}} & i_icb_cmd_burst;
          assign o_icb_cmd_beat [i] = {2    {o_icb_cmd_valid[i]}} & i_icb_cmd_beat ;
          assign o_icb_cmd_lock [i] = {1    {o_icb_cmd_valid[i]}} & i_icb_cmd_lock ;
          assign o_icb_cmd_excl [i] = {1    {o_icb_cmd_valid[i]}} & i_icb_cmd_excl ;
          assign o_icb_cmd_size [i] = {2    {o_icb_cmd_valid[i]}} & i_icb_cmd_size ;
          assign o_icb_cmd_usr  [i] = {USR_W{o_icb_cmd_valid[i]}} & i_icb_cmd_usr  ;
      end
    end//}
    //
    
    ///////////////////////
    // 
    //
    if(SPLT_PTR_1HOT == 1) begin:ptr_1hot_rsp// {

        for(i = 0; i < SPLT_NUM; i = i+1)//{
        begin:o_icb_rsp_ready_gen
          assign o_icb_rsp_ready[i] = (o_icb_rsp_port_id[i] & i_icb_rsp_ready_pre);
        end//}
        //
        assign i_icb_rsp_valid_pre = |(o_icb_rsp_valid & o_icb_rsp_port_id);


        reg sel_i_icb_rsp_err;
        reg sel_i_icb_rsp_excl_ok;
        reg [DW-1:0] sel_i_icb_rsp_rdata; 
        reg [USR_W-1:0] sel_i_icb_rsp_usr; 

        always @ (*) begin : sel_icb_rsp_PROC
          sel_i_icb_rsp_err   = 1'b0;
          sel_i_icb_rsp_excl_ok   = 1'b0;
          sel_i_icb_rsp_rdata = {DW   {1'b0}};
          sel_i_icb_rsp_usr   = {USR_W{1'b0}};
          for(j = 0; j < SPLT_NUM; j = j+1) begin//{
            sel_i_icb_rsp_err     = sel_i_icb_rsp_err     | (       o_icb_rsp_port_id[j]   & o_icb_rsp_err[j]);
            sel_i_icb_rsp_excl_ok = sel_i_icb_rsp_excl_ok | (       o_icb_rsp_port_id[j]   & o_icb_rsp_excl_ok[j]);
            sel_i_icb_rsp_rdata   = sel_i_icb_rsp_rdata   | ({DW   {o_icb_rsp_port_id[j]}} & o_icb_rsp_rdata[j]);
            sel_i_icb_rsp_usr     = sel_i_icb_rsp_usr     | ({USR_W{o_icb_rsp_port_id[j]}} & o_icb_rsp_usr[j]);
          end//}
        end

        assign i_icb_rsp_err   = sel_i_icb_rsp_err  ;
        assign i_icb_rsp_excl_ok   = sel_i_icb_rsp_excl_ok  ;
        assign i_icb_rsp_rdata = sel_i_icb_rsp_rdata;
        assign i_icb_rsp_usr   = sel_i_icb_rsp_usr  ;

    end
    else begin:ptr_not_1hot_rsp//}{

        for(i = 0; i < SPLT_NUM; i = i+1)//{
        begin:o_icb_rsp_ready_gen
          assign o_icb_rsp_ready[i] = (o_icb_rsp_port_id == i) & i_icb_rsp_ready_pre;
        end//}
        //
        assign i_icb_rsp_valid_pre = o_icb_rsp_valid[o_icb_rsp_port_id]; 


        assign i_icb_rsp_err     = o_icb_rsp_err    [o_icb_rsp_port_id]; 
        assign i_icb_rsp_excl_ok = o_icb_rsp_excl_ok[o_icb_rsp_port_id]; 
        assign i_icb_rsp_rdata   = o_icb_rsp_rdata  [o_icb_rsp_port_id]; 
        assign i_icb_rsp_usr     = o_icb_rsp_usr    [o_icb_rsp_port_id]; 
    end//}
    
  end//}
  endgenerate //}

endmodule
