`timescale 1ns/100ps
module tb_1553_apb ();

localparam DATAWIDTH = 32;
localparam APB_STRB_WIDTH = 8;
localparam REGSNUM = 8;
localparam REGS_ADDRWIDTH = 3;

localparam clk_cycle = 20;

reg writeStart;
reg readStart;
reg [31:0] writeData;
reg [31:0] addr;


task writeData_t;
  input [DATAWIDTH-1:0] addr_i;
  input [DATAWIDTH-1:0] data_i;
begin
  writeData = data_i;
  addr = addr_i;
  writeStart = 1;
  #clk_cycle
  writeStart = 0;
end
endtask

task readData_t;
  input [DATAWIDTH-1:0] addr_i;
begin
  readStart = 1;
  addr = addr_i;
  #clk_cycle
  readStart = 0;
end
endtask

initial begin
    writeStart = 0;
    readStart = 0;
    writeData = 0;
    addr = 0;
    #(clk_cycle*30);
    writeData_t((3<<2),32'h0010ab);
    #900
    writeData_t((3<<2),32'h00aaaa);
    #900
    writeData_t((3<<2),32'h00ddad);
end



/* APB_Slave */
reg                             APB_CLK;
reg                             APB_RESETn;
wire  [DATAWIDTH-1 : 0]         APB_RDATA;
wire                            APB_READY;
wire                            APB_SLVERR;
reg   [APB_STRB_WIDTH-1 : 0]    APB_STRB;
reg   [2 : 0]                   APB_PROT;
reg                             APB_ENABLE;
reg                             APB_WRITE;
reg   [DATAWIDTH-1 : 0]         APB_WDATA;
reg   [DATAWIDTH-1 : 0]         APB_ADDR;
reg                             APB_SEL;

initial begin
    APB_CLK = 1;
    forever begin
        #(clk_cycle/2) APB_CLK = ~APB_CLK;
    end
end

initial begin
    APB_RESETn = 0;
    #200
    APB_RESETn = 1;
end

reg waitRdy;
always@(posedge APB_CLK or negedge APB_RESETn)
begin
    if(!APB_RESETn) begin
        APB_ENABLE <= 0;
        APB_SEL <= 0;
        APB_ADDR <= 0;
        APB_WRITE <= 0;
        APB_WDATA <= 0;
        APB_STRB <= 0;
        APB_PROT <= 0;
        waitRdy <= 0;
    end
    else begin
        if(waitRdy) begin
            if(APB_READY) begin
                APB_SEL <= 0;
                APB_ENABLE <= 0;
                waitRdy <= 0;
            end
        end
        else if(writeStart) begin
            APB_SEL <= 1'b1;
            APB_ENABLE <= 1'b1;
            APB_ADDR <= addr;
            APB_WRITE <= 1'b1;
            APB_WDATA <= writeData;
            APB_STRB <= -1;
            APB_PROT <= 0;
            waitRdy <= 1;
        end
        else if(readStart) begin
            APB_SEL <= 1'b1;
            APB_ENABLE <= 1'b1;
            APB_ADDR <= addr;
            APB_WRITE <= 1'b0;
            APB_WDATA <= 0;
            APB_STRB <= -1;
            APB_PROT <= 0;
            waitRdy <= 1;
        end
        else begin
            APB_ENABLE <= 0;
            APB_SEL <= 0;
            APB_ADDR <= 0;
            APB_WRITE <= 0;
            APB_WDATA <= 0;
            APB_STRB <= 0;
            APB_PROT <= 0;
            waitRdy <= 0;
        end
    end
end

wire [1:0] rx0_1553;
wire [1:0] tx0_1553;
wire tx0_en;
wire [1:0] rx1_1553;
wire [1:0] tx1_1553;
wire tx1_en;

Top_1553B_APB top_inst
(
  .APB_CLK(APB_CLK),
  .APB_RESETn(APB_RESETn),
  .APB_RDATA(APB_RDATA),
  .APB_READY(APB_READY),
  .APB_SLVERR(APB_SLVERR),
  .APB_STRB(APB_STRB),
  .APB_PROT(APB_PROT), 
  .APB_ADDR   (APB_ADDR),
  .APB_ENABLE (APB_ENABLE),
  .APB_WRITE  (APB_WRITE),

  .APB_WDATA(APB_WDATA),
  .APB_SEL  (APB_SEL),

  .rx0_1553 (rx0_1553),
  .tx0_1553 (tx0_1553),
  .tx0_en   (tx0_en),
  .rx1_1553 (rx1_1553),
  .tx1_1553 (tx1_1553),
  .tx1_en   (tx1_en)
);

endmodule
