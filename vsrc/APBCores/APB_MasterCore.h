#ifndef __APB_MASTERCORE_H__
#define __APB_MASTERCORE_H__

#include "systemc.h"
#include "../BaseModules/myMessagePrintf.h"
#include "../BaseModules/ClockDomain.h"

#define APB_MASTER_PORT(width, aligment) \
sc_in<bool> APB_CLK; \
sc_in<bool> APB_RESETn; \
sc_in<sc_uint<width>> APB_RDATA; \
sc_in<bool> APB_READY; \
sc_in<bool> APB_SLVERR; \
sc_out<sc_uint<aligment>> APB_STRB; \
sc_out<sc_uint<3>> APB_PROT; \
sc_out<sc_uint<width>> APB_ADDR; \
sc_out<bool> APB_ENABLE; \
sc_out<bool> APB_WRITE; \
sc_out<sc_uint<width>> APB_WDATA;\
sc_out<bool> APB_SEL

#define APB_CHANNEL(width, aligment) \
sc_signal<bool> APB_RESETn_Signal("APB_RESETn_Signal"); \
sc_signal<sc_uint<width>> APB_RDATA_Signal("APB_RDATA_Signal"); \
sc_signal<bool> APB_READY_Signal("APB_READY_Signal"); \
sc_signal<bool> APB_SLVERR_Signal("APB_SLVERR_Signal"); \
sc_signal<sc_uint<aligment>> APB_STRB_Signal("APB_STRB_Signal"); \
sc_signal<sc_uint<3>> APB_PROT_Signal("APB_PROT_Signal"); \
sc_signal<sc_uint<width>> APB_ADDR_Signal("APB_ADDR_Signal");\
sc_signal<bool> APB_ENABLE_Signal("APB_ENABLE_Signal"); \
sc_signal<bool> APB_WRITE_Signal("APB_WRITE_Signal"); \
sc_signal<sc_uint<width>> APB_WDATA_Signal("APB_WDATA_Signal");\
sc_signal<bool> APB_SEL_Signal("APB_SEL_Signal")

#define APB_CHANNEL_withoutName(width, aligment) \
sc_signal<bool> APB_RESETn_Signal; \
sc_signal<sc_uint<width>> APB_RDATA_Signal; \
sc_signal<bool> APB_READY_Signal; \
sc_signal<bool> APB_SLVERR_Signal; \
sc_signal<sc_uint<aligment>> APB_STRB_Signal; \
sc_signal<sc_uint<3>> APB_PROT_Signal; \
sc_signal<sc_uint<width>> APB_ADDR_Signal;\
sc_signal<bool> APB_ENABLE_Signal; \
sc_signal<bool> APB_WRITE_Signal; \
sc_signal<sc_uint<width>> APB_WDATA_Signal;\
sc_signal<bool> APB_SEL_Signal

#define APB_CHANNEL_NAME_INIT \
APB_RESETn_Signal("APB_RESETn_Signal"), \
APB_RDATA_Signal("APB_RDATA_Signal"), \
APB_READY_Signal("APB_READY_Signal"), \
APB_SLVERR_Signal("APB_SLVERR_Signal"), \
APB_STRB_Signal("APB_STRB_Signal"), \
APB_PROT_Signal("APB_PROT_Signal"), \
APB_ADDR_Signal("APB_ADDR_Signal"),\
APB_ENABLE_Signal("APB_ENABLE_Signal"), \
APB_WRITE_Signal("APB_WRITE_Signal"), \
APB_WDATA_Signal("APB_WDATA_Signal"),\
APB_SEL_Signal("APB_SEL_Signal")

#define APB_EXPORT_PORT(subname) \
subname.APB_CLK(APB_CLK); \
subname.APB_RESETn(APB_RESETn); \
subname.APB_RDATA(APB_RDATA); \
subname.APB_READY(APB_READY); \
subname.APB_SLVERR(APB_SLVERR); \
subname.APB_STRB(APB_STRB); \
subname.APB_PROT(APB_PROT); \
subname.APB_ADDR(APB_ADDR); \
subname.APB_ENABLE(APB_ENABLE); \
subname.APB_WRITE(APB_WRITE); \
subname.APB_WDATA(APB_WDATA);\
subname.APB_SEL(APB_SEL)

#define APB_CONNECT_CHANNEL(component, clkname) \
component.APB_CLK(clkname); \
component.APB_RESETn(APB_RESETn_Signal); \
component.APB_RDATA(APB_RDATA_Signal); \
component.APB_READY(APB_READY_Signal); \
component.APB_SLVERR(APB_SLVERR_Signal); \
component.APB_STRB(APB_STRB_Signal); \
component.APB_PROT(APB_PROT_Signal); \
component.APB_ADDR(APB_ADDR_Signal); \
component.APB_ENABLE(APB_ENABLE_Signal); \
component.APB_WRITE(APB_WRITE_Signal); \
component.APB_WDATA(APB_WDATA_Signal);\
component.APB_SEL(APB_SEL_Signal)

#define APB_CONNECT_CHANNEL_Slave(component, clkname, PSEL, rdata, ready, slverr) \
component.APB_CLK(clkname); \
component.APB_RESETn(APB_RESETn_Signal); \
component.APB_RDATA(rdata); \
component.APB_READY(ready); \
component.APB_SLVERR(slverr); \
component.APB_STRB(APB_STRB_Signal); \
component.APB_PROT(APB_PROT_Signal); \
component.APB_ADDR(APB_ADDR_Signal); \
component.APB_ENABLE(APB_ENABLE_Signal); \
component.APB_WRITE(APB_WRITE_Signal); \
component.APB_WDATA(APB_WDATA_Signal);\
component.APB_SEL(PSEL)

#endif