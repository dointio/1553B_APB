module arbt_me # (
  parameter AW = 32,
  parameter DW = 64,
  parameter USR_W = 1,
  // parameter ARBT_SCHEME = 0,//0: priority based; 1: rrobin
  // The number of outstanding transactions supported
  parameter FIFO_DP = 1,
  parameter FIFO_CUT_READY = 1,
  parameter ALLOW_0CYCL_RSP = 1,
  //r: CUT_READY=0 and 0CYCLE=1 is confict, all open will lead to logicl loop!!!
  //r: in my option, 0CYCLE=1 is more important!
  // ARBT_NUM=4 ICB ports, so 2 bits for port id
  parameter ARBT_NUM = 4
) (
  output             o_icb_cmd_vld, 
  input              o_icb_cmd_rdy, 
  output [1-1:0]     o_icb_cmd_read, 
  output [AW-1:0]    o_icb_cmd_addr, 
  output [DW-1:0]    o_icb_cmd_wdata, 
  output [DW/8-1:0]  o_icb_cmd_wmask,
  // output [2-1:0]     o_icb_cmd_burst, 
  // output [2-1:0]     o_icb_cmd_beat, 
  // output             o_icb_cmd_lock,
  // output             o_icb_cmd_excl,
  // output [1:0]       o_icb_cmd_size,
  output [USR_W-1:0] o_icb_cmd_usr,

  input              o_icb_rsp_vld, 
  output             o_icb_rsp_rdy, 
  input              o_icb_rsp_err,
  // input              o_icb_rsp_excl_ok,
  input  [DW-1:0]    o_icb_rsp_rdata, 
  input  [USR_W-1:0] o_icb_rsp_usr, 
  
  output [ARBT_NUM*1-1:0]     i_bus_icb_cmd_rdy, 
  input  [ARBT_NUM*1-1:0]     i_bus_icb_cmd_vld, 
  input  [ARBT_NUM*1-1:0]     i_bus_icb_cmd_read, 
  input  [ARBT_NUM*AW-1:0]    i_bus_icb_cmd_addr, 
  input  [ARBT_NUM*DW-1:0]    i_bus_icb_cmd_wdata, 
  input  [ARBT_NUM*DW/8-1:0]  i_bus_icb_cmd_wmask,
  // input  [ARBT_NUM*2-1:0]     i_bus_icb_cmd_burst,
  // input  [ARBT_NUM*2-1:0]     i_bus_icb_cmd_beat ,
  // input  [ARBT_NUM*1-1:0]     i_bus_icb_cmd_lock ,
  // input  [ARBT_NUM*1-1:0]     i_bus_icb_cmd_excl ,
  // input  [ARBT_NUM*2-1:0]     i_bus_icb_cmd_size ,
  input  [ARBT_NUM*USR_W-1:0] i_bus_icb_cmd_usr  ,

  output [ARBT_NUM*1-1:0]     i_bus_icb_rsp_vld, 
  input  [ARBT_NUM*1-1:0]     i_bus_icb_rsp_rdy, 
  output [ARBT_NUM*1-1:0]     i_bus_icb_rsp_err,
  // output [ARBT_NUM*1-1:0]     i_bus_icb_rsp_excl_ok,
  output [ARBT_NUM*DW-1:0]    i_bus_icb_rsp_rdata, 
  output [ARBT_NUM*USR_W-1:0] i_bus_icb_rsp_usr, 

  input  clk,  
  input  rst
);
`include "mydefines.v"

localparam TRUE_CUT_READY = (ALLOW_0CYCL_RSP != 0) ? 1 : FIFO_CUT_READY;

generate
  if(ARBT_NUM == 1)  begin : one_chal
    assign i_bus_icb_cmd_rdy   = o_icb_cmd_rdy    ;
    assign o_icb_cmd_vld       = i_bus_icb_cmd_vld;
    assign o_icb_cmd_read      = i_bus_icb_cmd_read ;
    assign o_icb_cmd_addr      = i_bus_icb_cmd_addr ;
    assign o_icb_cmd_wdata     = i_bus_icb_cmd_wdata;
    assign o_icb_cmd_wmask     = i_bus_icb_cmd_wmask;
    // assign o_icb_cmd_burst     = i_bus_icb_cmd_burst;
    // assign o_icb_cmd_beat      = i_bus_icb_cmd_beat ;
    // assign o_icb_cmd_lock      = i_bus_icb_cmd_lock ;
    // assign o_icb_cmd_excl      = i_bus_icb_cmd_excl ;
    // assign o_icb_cmd_size      = i_bus_icb_cmd_size ;
    assign o_icb_cmd_usr       = i_bus_icb_cmd_usr  ;
                               
    assign o_icb_rsp_rdy          = i_bus_icb_rsp_rdy;
    assign i_bus_icb_rsp_vld      = o_icb_rsp_vld    ;
    assign i_bus_icb_rsp_err      = o_icb_rsp_err      ;
    // assign i_bus_icb_rsp_excl_ok  = o_icb_rsp_excl_ok      ;
    assign i_bus_icb_rsp_rdata    = o_icb_rsp_rdata    ;
    assign i_bus_icb_rsp_usr      = o_icb_rsp_usr      ;
  end
  else begin : more_chal
    wire [ARBT_NUM-1:0] cmd_pre_selet;
    wire [ARBT_NUM-1:0] cmd_selet;
    wire [ARBT_NUM-1:0] rsp_selet;

    wire cmd_vld_mid; //after selet, to check unfull, then to out port
    wire cmd_rdy_mid; //from out port, to check unfull, then to select
    wire rsp_vld_mid;
    wire rsp_rdy_mid;

    //r: bus to arry
    wire [ARBT_NUM-1:0]    i_icb_cmd_vld;
    wire [ARBT_NUM-1:0]    i_icb_cmd_rdy;
    wire [ARBT_NUM-1:0]    i_icb_cmd_read; 
    wire [AW-1:0]   i_icb_cmd_addr [ARBT_NUM-1:0]; 
    wire [DW-1:0]   i_icb_cmd_wdata[ARBT_NUM-1:0]; 
    wire [DW/8-1:0] i_icb_cmd_wmask[ARBT_NUM-1:0];
    // wire [2-1:0]    i_icb_cmd_burst[ARBT_NUM-1:0];
    // wire [2-1:0]    i_icb_cmd_beat [ARBT_NUM-1:0];
    // wire [1-1:0]    i_icb_cmd_lock [ARBT_NUM-1:0];
    // wire [1-1:0]    i_icb_cmd_excl [ARBT_NUM-1:0];
    // wire [2-1:0]    i_icb_cmd_size [ARBT_NUM-1:0];
    wire [USR_W-1:0]i_icb_cmd_usr  [ARBT_NUM-1:0];

    wire fifo_unfull;
    wire fifo_unempty;
    wire fifo_bypass;

    genvar i;
    for(i = 0; i < ARBT_NUM; i = i+1)//{
    begin:icb_distract_gen
      assign i_icb_cmd_vld  [i] = i_bus_icb_cmd_vld  [(i+1)*1     -1 : i*1     ];
      assign i_bus_icb_cmd_rdy[(i+1)*1 -1 : i*1] = i_icb_cmd_rdy[i];
      assign i_icb_cmd_read [i] = i_bus_icb_cmd_read [(i+1)*1     -1 : i*1     ];
      assign i_icb_cmd_addr [i] = i_bus_icb_cmd_addr [(i+1)*AW    -1 : i*AW    ];
      assign i_icb_cmd_wdata[i] = i_bus_icb_cmd_wdata[(i+1)*DW    -1 : i*DW    ];
      assign i_icb_cmd_wmask[i] = i_bus_icb_cmd_wmask[(i+1)*(DW/8)-1 : i*(DW/8)];
      // assign i_icb_cmd_burst[i] = i_bus_icb_cmd_burst[(i+1)*2     -1 : i*2     ];
      // assign i_icb_cmd_beat [i] = i_bus_icb_cmd_beat [(i+1)*2     -1 : i*2     ];
      // assign i_icb_cmd_lock [i] = i_bus_icb_cmd_lock [(i+1)*1     -1 : i*1     ];
      // assign i_icb_cmd_excl [i] = i_bus_icb_cmd_excl [(i+1)*1     -1 : i*1     ];
      // assign i_icb_cmd_size [i] = i_bus_icb_cmd_size [(i+1)*2     -1 : i*2     ];
      assign i_icb_cmd_usr  [i] = i_bus_icb_cmd_usr  [(i+1)*USR_W -1 : i*USR_W ];
    end//}

    for(i=0; i<ARBT_NUM; i=i+1) begin : cmd_selsig
      if(i==0) begin
        assign cmd_pre_selet[i] = 0;
      end
      else begin
        assign cmd_pre_selet[i] = (|i_icb_cmd_vld[i-1:0]);
      end
      assign cmd_selet[i] = ~cmd_pre_selet[i] & i_icb_cmd_vld[i];
    end

    // always@(*) begin
    //   cmd_selet_id = {ARBT_PTR_W{1'b0}};
    //   for(i=0; i<ARBT_NUM; i=i+1) begin
    //     cmd_selet_id = cmd_selet_id | ({ARBT_PTR_W{cmd_selet[i]}} & ($unsigned(i)));
    //   end
    // end

    assign cmd_vld_mid = |(cmd_selet); //r: === assign cmd_vld_mid = |(i_icb_cmd_vld & cmd_selet);
    for(i = 0; i < ARBT_NUM; i = i+1) begin: cmd_
      assign i_icb_cmd_rdy[i] = cmd_rdy_mid & cmd_selet[i];
    end
    assign o_icb_cmd_vld = cmd_vld_mid & fifo_unfull;
    assign cmd_rdy_mid = o_icb_cmd_rdy & fifo_unfull;


    reg [1-1:0]    sel_o_icb_cmd_read; 
    reg [AW-1:0]   sel_o_icb_cmd_addr; 
    reg [DW-1:0]   sel_o_icb_cmd_wdata; 
    reg [DW/8-1:0] sel_o_icb_cmd_wmask;
    // reg [2-1:0]    sel_o_icb_cmd_burst;
    // reg [2-1:0]    sel_o_icb_cmd_beat ;
    // reg [1-1:0]    sel_o_icb_cmd_lock ;
    // reg [1-1:0]    sel_o_icb_cmd_excl ;
    // reg [2-1:0]    sel_o_icb_cmd_size ;
    reg [USR_W-1:0]sel_o_icb_cmd_usr  ;


    always@(*)begin : sel_cmd_o
      integer j;
      sel_o_icb_cmd_read  = {1   {1'b0}};
      sel_o_icb_cmd_addr  = {AW  {1'b0}};
      sel_o_icb_cmd_wdata = {DW  {1'b0}};
      sel_o_icb_cmd_wmask = {DW/8{1'b0}};
      // sel_o_icb_cmd_burst = {2   {1'b0}};
      // sel_o_icb_cmd_beat  = {2   {1'b0}};
      // sel_o_icb_cmd_lock  = {1   {1'b0}};
      // sel_o_icb_cmd_excl  = {1   {1'b0}};
      // sel_o_icb_cmd_size  = {2   {1'b0}};
      sel_o_icb_cmd_usr   = {USR_W{1'b0}};
      for(j = 0; j < ARBT_NUM; j = j+1) begin//{
        sel_o_icb_cmd_read  = sel_o_icb_cmd_read  | ({1    {cmd_selet[j]}} & i_icb_cmd_read [j]);
        sel_o_icb_cmd_addr  = sel_o_icb_cmd_addr  | ({AW   {cmd_selet[j]}} & i_icb_cmd_addr [j]);
        sel_o_icb_cmd_wdata = sel_o_icb_cmd_wdata | ({DW   {cmd_selet[j]}} & i_icb_cmd_wdata[j]);
        sel_o_icb_cmd_wmask = sel_o_icb_cmd_wmask | ({DW/8 {cmd_selet[j]}} & i_icb_cmd_wmask[j]);
        // sel_o_icb_cmd_burst = sel_o_icb_cmd_burst | ({2    {cmd_selet[j]}} & i_icb_cmd_burst[j]);
        // sel_o_icb_cmd_beat  = sel_o_icb_cmd_beat  | ({2    {cmd_selet[j]}} & i_icb_cmd_beat [j]);
        // sel_o_icb_cmd_lock  = sel_o_icb_cmd_lock  | ({1    {cmd_selet[j]}} & i_icb_cmd_lock [j]);
        // sel_o_icb_cmd_excl  = sel_o_icb_cmd_excl  | ({1    {cmd_selet[j]}} & i_icb_cmd_excl [j]);
        // sel_o_icb_cmd_size  = sel_o_icb_cmd_size  | ({2    {cmd_selet[j]}} & i_icb_cmd_size [j]);
        sel_o_icb_cmd_usr   = sel_o_icb_cmd_usr   | ({USR_W{cmd_selet[j]}} & i_icb_cmd_usr  [j]);
      end//}
    end


    assign o_icb_cmd_read  = sel_o_icb_cmd_read ; 
    assign o_icb_cmd_addr  = sel_o_icb_cmd_addr ; 
    assign o_icb_cmd_wdata = sel_o_icb_cmd_wdata; 
    assign o_icb_cmd_wmask = sel_o_icb_cmd_wmask;
    // assign o_icb_cmd_burst = sel_o_icb_cmd_burst;
    // assign o_icb_cmd_beat  = sel_o_icb_cmd_beat ;
    // assign o_icb_cmd_lock  = sel_o_icb_cmd_lock ;
    // assign o_icb_cmd_excl  = sel_o_icb_cmd_excl ;
    // assign o_icb_cmd_size  = sel_o_icb_cmd_size ;
    assign o_icb_cmd_usr   = sel_o_icb_cmd_usr;

    wire req_handshake = o_icb_cmd_vld & o_icb_cmd_rdy;
    wire rsp_handshake = o_icb_rsp_vld & o_icb_rsp_rdy;
    wire [ARBT_NUM-1 : 0] fifo_data_i = cmd_selet; 
    wire [ARBT_NUM-1 : 0] fifo_data_o;

    if(ALLOW_0CYCL_RSP != 0) begin : allow_0rsp
      assign fifo_bypass = ~fifo_unempty & req_handshake & rsp_handshake;
      assign rsp_selet = fifo_unempty ? fifo_data_o : cmd_selet;
      assign rsp_vld_mid = o_icb_rsp_vld;
      assign o_icb_rsp_rdy = rsp_rdy_mid;
    end
    else begin : no_allow_0rsp
      assign fifo_bypass = 1'b0;
      assign rsp_selet = fifo_unempty ? fifo_data_o : {ARBT_NUM{1'b0}};
      assign rsp_vld_mid = o_icb_rsp_vld & fifo_unempty;
      assign o_icb_rsp_rdy = rsp_rdy_mid & fifo_unempty;
    end

    fifo_simple #(
      .CUT_READY    (TRUE_CUT_READY),
      .ZEROOUT_WHENEMPTY  (0),
      .DP           (FIFO_DP),
      .DW           (ARBT_NUM)
    )fifo_inst(
      .clk          (clk),
      .rst          (rst),

      .w_req        (req_handshake & ~fifo_bypass),
      .unfull       (fifo_unfull),
      .data_i       (fifo_data_i),
      .r_req        (rsp_handshake & ~fifo_bypass),
      .unempty      (fifo_unempty),
      .data_o       (fifo_data_o)
    );

    assign rsp_rdy_mid = |(i_bus_icb_rsp_rdy & rsp_selet);
    for(i = 0; i < ARBT_NUM; i = i+1) begin: selet_rsp
      assign i_bus_icb_rsp_vld[i] = rsp_vld_mid & rsp_selet[i];
    end

    assign i_bus_icb_rsp_err     = {ARBT_NUM{o_icb_rsp_err  }};  
    // assign i_bus_icb_rsp_excl_ok = {ARBT_NUM{o_icb_rsp_excl_ok}};  
    assign i_bus_icb_rsp_rdata   = {ARBT_NUM{o_icb_rsp_rdata}}; 
    assign i_bus_icb_rsp_usr     = {ARBT_NUM{o_icb_rsp_usr}}; 
  end
endgenerate

endmodule
