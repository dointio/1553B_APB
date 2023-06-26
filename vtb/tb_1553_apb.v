module tb_1553_apb ();

reg writeStart;
reg readStart;
reg [31:0] writeData;
reg [31:0] addr;

initial begin
    writeStart = 0;
    readStart = 0;
    writeData = 0;
    addr = 0;
    #400
    writeData = 32'h114;
    addr = 32'h26;
    writeStart = 1;
    #20
    writeStart = 0;
    #200
    writeData = 32'h124;
    addr = 32'h12a;
    writeStart = 1;
    #20
    writeStart = 0;
    #200
    writeData = 32'h134;
    addr = 32'h216;
    writeStart = 1;
    #20
    writeStart = 0;
    #200
    writeData = 32'h154;
    addr = 32'h420;
    writeStart = 1;
    #20
    writeStart = 0;
    #200
    writeData = 32'h164;
    addr = 32'h520;
    writeStart = 1;
    #20
    writeStart = 0;
    #200
    writeData = 32'h174;
    addr = 32'h620;
    writeStart = 1;
    #20
    writeStart = 0;
    #200
    writeData = 32'h184;
    addr = 32'h720;
    writeStart = 1;
    #20
    writeStart = 0;

    #200
    addr = 32'h26;
    readStart = 1;
    #20
    readStart = 0;
    #200
    addr = 32'h12a;
    readStart = 1;
    #20
    readStart = 0;
    #200
    addr = 32'h216;
    readStart = 1;
    #20
    readStart = 0;
    #200
    addr = 32'h420;
    readStart = 1;
    #20
    readStart = 0;
    #200
    addr = 32'h520;
    readStart = 1;
    #20
    readStart = 0;
    #200
    addr = 32'h620;
    readStart = 1;
    #20
    readStart = 0;
    #200
    addr = 32'h720;
    readStart = 1;
    #20
    readStart = 0;
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
        #20 APB_CLK = ~APB_CLK;
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

endmodule
