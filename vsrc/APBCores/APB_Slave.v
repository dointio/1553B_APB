module APB_Slave#(
    parameter DATAWIDTH = 32,
    parameter ADDRWIDTH = 8
    // parameter ADDRBASE = 2 
)(
    APB_SEL,
    APB_ENABLE,
    APB_ADDR,
    APB_WRITE,
    APB_RESETn,
    APB_CLK,
    APB_WDATA,
    APB_RDATA,
    APB_READY
);

//for 32bit -- 2
//for 64bit -- 3
localparam integer ADDR_LSB = (DATAWIDTH/32) + 1;


input                       APB_SEL;          //从设备选择
input                       APB_ENABLE;            //使能
input                       APB_WRITE;         //0为读，1为写
input                       APB_RESETn;           //Reset,0为复位
input                       APB_CLK;           //时钟，为HCLK的二分频
input      [DATAWIDTH-1:0]  APB_ADDR;          //地址
input      [DATAWIDTH-1:0]  APB_WDATA;         //写数据
output reg [DATAWIDTH-1:0]  APB_RDATA;         //读数据   
output reg                  APB_READY;

reg [DATAWIDTH-1:0] Slave_reg [63:0];       //定义32位寄存器组,64个，对应8-2位宽地址
/* 从设备的地址
S0:  0x0000_0000 ~ 0x0000_00ff;
S1:  0x0000_0100 ~ 0x0000_01ff;
S2:  0x0000_0200 ~ 0x0000_02ff;
S3:  0x0000_0300 ~ 0x0000_03ff;
*/
wire [(ADDRWIDTH-ADDR_LSB-1):0] num;
assign num = APB_ADDR[(ADDRWIDTH-1):ADDR_LSB];  //寄存器号

always @(posedge APB_CLK or negedge APB_RESETn ) begin
    if (!APB_RESETn) begin
        APB_RDATA <= 32'h0000_0000;
        APB_READY <= 0;
    end        
    else begin
        if (APB_SEL & APB_ENABLE) begin
            if (APB_WRITE)   Slave_reg[num] <= APB_WDATA;  
            APB_READY <= 0;   
        end
        else if (APB_SEL & (~APB_ENABLE)) begin  //为了让信号提前传输
            if (!APB_WRITE)  APB_RDATA <= Slave_reg[num];
            APB_READY <= 1;
        end
        else begin
            APB_READY <= 0;
        end    
    end
end

endmodule
