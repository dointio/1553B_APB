module APB_Slave_Interface#(
    parameter DATAWIDTH = 32,
    parameter REGSNUM = 8,   
    parameter VIRDELAY = 0,
    parameter ALL_DIRECT = 0,
    parameter INITIAL_FILE = "blank",
    parameter FaultInjectFile = "blank"
)(
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

    RegsDataOut,
    RegsDataIn,
    beWrdOut,
    beReadOut,
    RegsAddrOut
);
`include "basefunctions.v"
localparam REGS_ADDRWIDTH = clogb2(REGSNUM-1);
//for 32bit -- 2
//for 64bit -- 3
parameter ADDR_LSB = (DATAWIDTH/32) + 1;
localparam APB_STRB_WIDTH = (DATAWIDTH<=32) ? 4 : 8; 

input                               APB_CLK;
input                               APB_RESETn;
output       [DATAWIDTH-1 : 0]      APB_RDATA;
output                              APB_READY;
output                              APB_SLVERR;
input wire  [APB_STRB_WIDTH-1 : 0]  APB_STRB;
input wire  [2 : 0]                 APB_PROT;
input wire                          APB_ENABLE;
input wire                          APB_WRITE;
input wire  [DATAWIDTH-1 : 0]       APB_WDATA;
input wire  [DATAWIDTH-1 : 0]       APB_ADDR;
input wire                          APB_SEL;

output wire [DATAWIDTH*REGSNUM-1 : 0]  RegsDataOut;
input wire  [DATAWIDTH*REGSNUM-1 : 0]  RegsDataIn;
output reg                              beWrdOut;
output reg                              beReadOut;
output reg  [REGS_ADDRWIDTH-1 : 0]      RegsAddrOut;

wire        [REGS_ADDRWIDTH-1 : 0]      regsAddr;
assign regsAddr = APB_ADDR[REGS_ADDRWIDTH+ADDR_LSB-1 : ADDR_LSB];

reg [DATAWIDTH-1 : 0] APB_RDATA_R;
reg APB_READY_R;
reg APB_SLVERR_R;

if(VIRDELAY == 0) begin
    assign APB_RDATA = APB_RDATA_R;
    assign APB_READY = APB_READY_R;
    assign APB_SLVERR = APB_SLVERR_R;
end      
if(VIRDELAY > 0) begin
    wire [DATAWIDTH+1: 0]data_in_w;
    assign data_in_w = {APB_RDATA_R[DATAWIDTH-1:0], APB_READY_R, APB_SLVERR_R};
    DelayBuffer
    #(
        .DATA_WIDTH (DATAWIDTH+2),
        .DELAY_CYCLE (VIRDELAY)
    )delaybuffer_inst
    (
        .clk        (APB_CLK),
        .rst_n      (APB_RESETn),
        .data_in    (data_in_w),
        .data_out   ({APB_RDATA[DATAWIDTH-1:0], APB_READY, APB_SLVERR})
    );
end

reg [DATAWIDTH-1 : 0] DeviceRegs [REGSNUM-1 : 0];
reg [DATAWIDTH-1 : 0] DeviceRegsClampH [REGSNUM-1 : 0];
reg [DATAWIDTH-1 : 0] DeviceRegsClampL [REGSNUM-1 : 0];
reg [DATAWIDTH-1 : 0] DeviceRegs_initialData [REGSNUM-1 : 0];
wire [DATAWIDTH-1:0] DeviceRegs_r [REGSNUM-1 : 0];
genvar i;
generate
    for(i=0; i<REGSNUM; i = i+1) begin: link_regs
        assign RegsDataOut[(i+1)*DATAWIDTH-1 : i*DATAWIDTH] = DeviceRegs[i];
        if(ALL_DIRECT>0) begin
            assign DeviceRegs_r[i] = DeviceRegs[i];
        end
        else begin
            assign DeviceRegs_r[i] = RegsDataIn[(i+1)*DATAWIDTH-1 : i*DATAWIDTH];
        end
    end
endgenerate

reg [DATAWIDTH-1 : 0] DeviceRegsReadData [REGSNUM-1 : 0];
generate
    for(i=0; i<REGSNUM; i=i+1) begin
        always@(*) begin
            DeviceRegsReadData[i] <= (DeviceRegs_r[i] | DeviceRegsClampH[i]) & (~DeviceRegsClampL[i]);
        end
    end
endgenerate

reg [31:0] initialAddr;
reg [31:0] initialData;
if(INITIAL_FILE == "blank") begin
    initial begin :initial_default
        integer i;
        for(i=0;i<REGSNUM;i=i+1) begin:ram_init
            DeviceRegs[i] = 0;
            DeviceRegs_initialData[i] = 0;
            DeviceRegsClampH[i] = 0;
            DeviceRegsClampL[i] = 0;
        end
    end
end
else begin
    initial begin : intiial_byfile
        integer i;
        integer fileptr;
        integer cnt_file;
        integer max;
        integer rt;

        for(i=0;i<REGSNUM;i=i+1) begin
            DeviceRegs[i] = 0;
            DeviceRegs_initialData[i] = 0;
            DeviceRegsClampH[i] = 0;
            DeviceRegsClampL[i] = 0;
        end
        cnt_file = 0;
        fileptr = $fopen(INITIAL_FILE, "r");
        $display("Open File:");
        $display(INITIAL_FILE);
        $fseek(fileptr, cnt_file, 0);
        rt = $fscanf(fileptr, "%h", max);
        if(rt == 0) begin
            $display("Error!!! read data error!!!!!!!");
        end
        for(i=0;i<max;i=i+1) begin
            cnt_file = cnt_file + 11;
            $fseek(fileptr, cnt_file, 0);
            rt = $fscanf(fileptr, "%h", initialAddr);
            cnt_file = cnt_file + 11; 
            $fseek(fileptr, cnt_file, 0);
            rt = $fscanf(fileptr, "%h", initialData);
            $display("The addr %h is: %h\n", initialAddr, initialData);
            DeviceRegs[initialAddr] = initialData;
            DeviceRegs_initialData[initialAddr] = initialData;
        end
        $fclose(fileptr);
    end
end


task getFaultInjectFormation;
    input [8*40-1 : 0] inputStr;
    output reg [63:0] ftime;
    output reg [31:0] regID;
    output reg [7:0] type;
    output reg [31:0] mask; 
    integer i;
    begin
        i = 0;
        ftime = 0;
        mask = 0;
        regID = 0;
        while (inputStr[8*i+7 -: 8] != 8'd32) begin
            regID = regID*10;
            regID = regID+(inputStr[8*i+7 -: 8]-48);
            i = i+1;
        end
        i = i+1;
        type = inputStr[8*i+7 -: 8];
        i = i+2;
        while (inputStr[8*i+7 -: 8] != 8'd32) begin
            ftime = ftime*10;
            ftime = ftime+(inputStr[8*i+7 -: 8]-48);
            i = i+1;
        end
        i = i+1;
        while (inputStr[8*i+7 -: 8] != 8'd59) begin
            mask = mask << 4;
            if((inputStr[8*i+7 -: 8]>=8'd48) && (inputStr[8*i+7 -: 8]<=57))begin
                mask = mask + inputStr[8*i+7 -: 8] - 48;
            end
            else if((inputStr[8*i+7 -: 8]>=65) && (inputStr[8*i+7 -: 8]<=70)) begin
                mask = mask + inputStr[8*i+7 -: 8] - 65 + 10;
            end
            else if((inputStr[8*i+7 -: 8]>=97) && (inputStr[8*i+7 -: 8]<=102)) begin
                mask = mask + inputStr[8*i+7 -: 8] - 97 + 10;
            end
            i = i+1;
        end
        $display("FaultInjectInformation:\nlocal:%d, time:%d, type:%c, mask:%x", regID[31:0], ftime[63:0], type[7:0], mask[31:0]);
    end
endtask

task FaultInjectTask;
    input [7:0] type;
    input [31:0] regID;
    input [31:0] mask;
    begin
        case (type)
            8'd48://to 0
            begin
                DeviceRegs[regID] = ((DeviceRegs[regID] & (~mask)) | DeviceRegsClampH[regID]) & (~DeviceRegsClampL[regID]); 
                DeviceRegsReadData[regID] = ((DeviceRegsReadData[regID] & (~mask)) | DeviceRegsClampH[regID]) & (~DeviceRegsClampL[regID]); 
            end
            8'd49://to 1
            begin
                DeviceRegs[regID] = ((DeviceRegs[regID] | mask) | DeviceRegsClampH[regID]) & (~DeviceRegsClampL[regID]);
                DeviceRegsReadData[regID] = ((DeviceRegsReadData[regID] | mask) | DeviceRegsClampH[regID]) & (~DeviceRegsClampL[regID]);
            end
            8'd120: //x, flip
            begin
                DeviceRegs[regID] = ((DeviceRegs[regID] ^ mask) | DeviceRegsClampH[regID]) & (~DeviceRegsClampL[regID]);
                DeviceRegsReadData[regID] = ((DeviceRegsReadData[regID] ^ mask) | DeviceRegsClampH[regID]) & (~DeviceRegsClampL[regID]);
            end
            8'd97: //a, clamp to 0
            begin
                DeviceRegs[regID] = DeviceRegs[regID] & (~mask); 
                DeviceRegsReadData[regID] = DeviceRegsReadData[regID] & (~mask); 
                DeviceRegsClampL[regID] = DeviceRegsClampL[regID] | mask;
                DeviceRegsClampH[regID] = DeviceRegsClampH[regID] & (~mask);
            end
            8'd98: //b, clamp to 1
            begin
                DeviceRegs[regID] = DeviceRegs[regID] | mask;
                DeviceRegsReadData[regID] = DeviceRegsReadData[regID] | mask;
                DeviceRegsClampH[regID] = DeviceRegsClampH[regID] | mask;
                DeviceRegsClampL[regID] = DeviceRegsClampL[regID] & (~mask);
            end
            8'd99: //c, cancel clamp
            begin
                DeviceRegsClampH[regID] = DeviceRegsClampH[regID] & (~mask);
                DeviceRegsClampL[regID] = DeviceRegsClampL[regID] & (~mask);
            end
            default:;
        endcase
        $display("FaultInject!Time:", $time);
    end
endtask

integer fptr;
reg enInject=0;

reg [63:0] ftime=0;
reg [31:0] regID=0;
reg [7:0] type=0;
reg [31:0] mask=0; 
reg [8*40-1 : 0] inputStr=0;
initial begin:readFile
    integer i;
    if(FaultInjectFile != "blank")
    begin
        fptr = $fopen(FaultInjectFile, "r");
        inputStr[7 : 0] = $fgetc(fptr);
        for(i=1;inputStr[i*8-1 -: 8] != 8'd10;i=i+1) begin
            inputStr[i*8+7 -: 8] = $fgetc(fptr);
        end
        inputStr[7 : 0] = $fgetc(fptr);
        for(i=1;inputStr[i*8-1 -: 8] != 8'd10;i=i+1) begin
            inputStr[i*8+7 -: 8] = $fgetc(fptr);
        end
        if(inputStr[7:0] == 8'd255) begin
            enInject = 0;
            $display("The file is empty or dont exist!");
        end
        else begin
            getFaultInjectFormation(inputStr, ftime, regID, type, mask);
            enInject = 1;
        end
    end
end

`define First 0
`define Second 1
`define Third 2
reg [1 : 0] APBState;
reg bk = 0;
always @(posedge APB_CLK or negedge APB_RESETn ) 
begin
begin:hh
    integer i;
    if (!APB_RESETn) begin
        APBState <= `First;
        APB_RDATA_R <= 0;
        APB_READY_R <= 0;
        APB_SLVERR_R <= 0;
        RegsAddrOut <= 0;
        beWrdOut <= 0;
        beReadOut <= 0;
        for(i=0; i<REGSNUM; i=i+1)begin
            DeviceRegs[i] <= (DeviceRegs_initialData[i] | DeviceRegsClampH[i]) & ~DeviceRegsClampL[i];
        end
    end
    else begin
        case(APBState)
            `First: begin
                if(APB_SEL && (regsAddr < REGSNUM)) begin
                    RegsAddrOut <= regsAddr;
                    APBState <= `Second;
                end
            end
            `Second: begin
                if(APB_ENABLE) begin
                    // for(i=0; i<APB_STRB_WIDTH; i=i+1) begin
                    //     if(APB_WRITE && APB_STRB[i]) begin
                    //         DeviceRegs[regsAddr][(i+1)*8-1 : i*8] <= APB_WDATA[(i+1)*8-1 : i*8];
                    //     end
                    //     else if(APB_STRB[i]) begin
                    //         APB_RDATA_R[(i+1)*8-1 : i*8] <= DeviceRegs_r[regsAddr][(i+1)*8-1 : i*8];
                    //     end
                    // end
                    if(APB_WRITE) begin
                        beWrdOut <= 1;
                        DeviceRegs[regsAddr] <= (APB_WDATA | DeviceRegsClampH[regsAddr]) & ~DeviceRegsClampL[regsAddr];
                    end
                    else begin
                        beReadOut <= 1;
                        // APB_RDATA_R <= DeviceRegs_r[regsAddr];
                        // APB_RDATA_R <= (DeviceRegsReadData[RegsAddrOut] | DeviceRegsClampH[RegsAddrOut]) & ~DeviceRegsClampL[regsAddr];
                        APB_RDATA_R <= DeviceRegsReadData[RegsAddrOut];
                    end
                    APB_READY_R <= 1;
                    APB_SLVERR_R <= 0;
                    APBState <= `Third;
                end
                
            end
            `Third: begin
                APB_READY_R <= 0;
                APB_SLVERR_R <= 0;
                beWrdOut <= 0;
                beReadOut <= 0;
                APBState <= `First;
            end
            default: APBState <= `First;
        endcase    
    end
end
begin:inject
    integer i;
    if(enInject) begin
        if(ftime <= $time) begin
            FaultInjectTask(type, regID, mask);
            for(;bk==0;)begin
                inputStr[7 : 0] = $fgetc(fptr);
                if(inputStr[7:0] == 8'd255) begin
                    enInject = 0;
                    bk = 1;
                end
                else begin
                    for(i=1;inputStr[i*8-1 -: 8] != 8'd10;i=i+1) begin
                        inputStr[i*8+7 -: 8] = $fgetc(fptr);
                    end
                    getFaultInjectFormation(inputStr, ftime, regID, type, mask);
                    if(ftime <= $time) begin
                        FaultInjectTask(type, regID, mask);
                    end
                    else begin
                        bk = 1;
                    end
                end
            end
            bk = 0;
        end
    end
end
end

endmodule