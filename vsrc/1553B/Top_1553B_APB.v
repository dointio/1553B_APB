module Top_1553B_APB
(
  APB_CLK,
  APB_RESETn,
  APB_RDATA,
  APB_READY,
  APB_SLVERR,
  APB_STRB,
  APB_PROT, 
  APB_ADDR,
  APB_ENABLE,
  APB_WRITE,

  APB_WDATA,
  APB_SEL,

  rx0_1553,
  tx0_1553,
  tx0_en,
  rx1_1553,
  tx1_1553,
  tx1_en
);

localparam DATAWIDTH = 32;
localparam APB_STRB_WIDTH = 8;
localparam REGSNUM = 8;
localparam REGS_ADDRWIDTH = 3;

input                               APB_CLK;
input                               APB_RESETn;
output [DATAWIDTH-1 : 0]            APB_RDATA;
output                              APB_READY;
output                              APB_SLVERR;
input  [APB_STRB_WIDTH-1 : 0]       APB_STRB;
input  [2 : 0]                      APB_PROT;
input  [DATAWIDTH-1 : 0]            APB_ADDR;
input                               APB_ENABLE;
input                               APB_WRITE;
input  [DATAWIDTH-1 : 0]            APB_WDATA;
input                               APB_SEL;

input     rx0_1553;
output    tx0_1553;
output    tx0_en;
input     rx1_1553;
output    tx1_1553;
output    tx1_en;

wire [DATAWIDTH*REGSNUM-1 : 0]    RegsDataOut;
wire [DATAWIDTH*REGSNUM-1 : 0]    RegsDataIn;
wire                              beWrdOut;
wire                              beReadOut;
wire [REGS_ADDRWIDTH-1 : 0]       RegsAddrOut;

//r: 
//reg0: freq_set
//reg1: parity
//reg2: rx reg1
//reg3: tx reg1, when read, ret 0 mean fifo full, ret 1 mean fifo ready!!!
//reg4: rx reg2
//reg5: tx reg2, when read, ret 0 mean fifo full, ret 1 mean fifo ready!!!
APB_Slave_Interface#(
    // parameter DATAWIDTH = 32,
    // parameter REGSNUM = 8,   
    // parameter VIRDELAY = 0,
    // parameter ALL_DIRECT = 0,
    // parameter INITIAL_FILE = "blank",
    // parameter FaultInjectFile = "blank"
    .DATAWIDTH  (DATAWIDTH),
    .REGSNUM    (REGSNUM),
)APB_Inter_inst(
    .APB_CLK(APB_CLK),
    .APB_RESETn(APB_RESETn),
    .APB_RDATA(APB_RDATA),
    .APB_READY(APB_READY),
    .APB_SLVERR(APB_SLVERR),
    .APB_STRB(APB_STRB),
    .APB_PROT(APB_PROT), 
    .APB_ADDR(APB_ADDR),
    .APB_ENABLE(APB_ENABLE),
    .APB_WRITE(APB_WRITE),

    .APB_WDATA(APB_WDATA),
    .APB_SEL(APB_SEL),

    .RegsDataOut (RegsDataOut),
    .RegsDataIn  (RegsDataIn),
    .beWrdOut    (beWrdOut),
    .beReadOut   (beReadOut),
    .RegsAddrOut (RegsAddrOut)
);


wire [DATAWIDTH-1:0] rxreg_one_read;
assign RegsDataIn[3*DATAWIDTH-1 : 2*DATAWIDTH]= rxreg_one_read;
wire rxreg_one_read_sel = beReadOut & (RegsAddrOut == 2);
assign rxreg_one_read[30:24] = 0;

wire [DATAWIDTH-1:0] txreg_one_write = RegsDataOut[4*DATAWIDTH-1 : 3*DATAWIDTH];
wire txreg_one_write_sel = beWrdOut & (RegsAddrOut == 3);

wire [DATAWIDTH-1:0] txreg_one_read;
assign RegsDataIn[4*DATAWIDTH-1 : 3*DATAWIDTH] = txreg_one_read;
assign txreg_one_read[31:1] = 0;

Core_1553B CoreOne_inst
(
  .clk              (APB_CLK),
  .rst_n            (APB_RESETn),

  .parity_set       (1'b0),

  .r_fifo_rd        (rxreg_one_read_sel),
  .r_fifo_unempty   (rxreg_one_read[31]),
  .r_fifo_data      (rxreg_one_read[23:0]),

  .w_fifo_wd        (txreg_one_write_sel),
  .w_fifo_unfull    (txreg_one_read[0]),
  .w_fifo_data      (txreg_one_write[23:0]),

  .rx_1553          (rx0_1553),
  .tx_1553          (tx0_1553),
  .en_tx_1553       (tx0_en)
);

endmodule
