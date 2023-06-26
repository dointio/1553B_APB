// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtb_1553_decoder.h for the primary calling header

#ifndef VERILATED_VTB_1553_DECODER___024ROOT_H_
#define VERILATED_VTB_1553_DECODER___024ROOT_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"

class Vtb_1553_decoder__Syms;

class Vtb_1553_decoder___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ tb_1553_decoder__DOT__tb_data_clk;
    CData/*0:0*/ tb_1553_decoder__DOT__tb_rst;
    CData/*1:0*/ tb_1553_decoder__DOT__tb_din;
    CData/*0:0*/ tb_1553_decoder__DOT__tb_tvalid;
    CData/*7:0*/ tb_1553_decoder__DOT__tb_tuser;
    CData/*0:0*/ tb_1553_decoder__DOT__tb_tready;
    CData/*0:0*/ tb_1553_decoder__DOT__parity_gen;
    CData/*0:0*/ tb_1553_decoder__DOT____Vlvbound_h302cbcd7__0;
    CData/*0:0*/ tb_1553_decoder__DOT__dut__DOT__parity_bit;
    CData/*0:0*/ tb_1553_decoder__DOT__dut__DOT__delay_bit;
    CData/*4:0*/ tb_1553_decoder__DOT__dut__DOT__state;
    CData/*7:0*/ tb_1553_decoder__DOT__dut__DOT__cmd;
    CData/*1:0*/ tb_1553_decoder__DOT__dut__DOT__p_diff;
    CData/*6:0*/ tb_1553_decoder__DOT__dut__DOT__skip_counter;
    CData/*5:0*/ tb_1553_decoder__DOT__dut__DOT__trans_counter;
    CData/*0:0*/ __Vdlyvval__tb_1553_decoder__DOT__tb_data_clk__v0;
    CData/*0:0*/ __Vdlyvset__tb_1553_decoder__DOT__tb_data_clk__v0;
    CData/*0:0*/ __Vdly__tb_1553_decoder__DOT__parity_gen;
    CData/*0:0*/ __Vdly__tb_1553_decoder__DOT__tb_tvalid;
    CData/*7:0*/ __Vdly__tb_1553_decoder__DOT__tb_tuser;
    CData/*4:0*/ __Vdly__tb_1553_decoder__DOT__dut__DOT__state;
    CData/*0:0*/ __Vdly__tb_1553_decoder__DOT__dut__DOT__parity_bit;
    CData/*0:0*/ __Vdly__tb_1553_decoder__DOT__dut__DOT__delay_bit;
    CData/*6:0*/ __Vdly__tb_1553_decoder__DOT__dut__DOT__skip_counter;
    CData/*5:0*/ __Vdly__tb_1553_decoder__DOT__dut__DOT__trans_counter;
    CData/*0:0*/ __Vtrigrprev__TOP__tb_1553_decoder__DOT__tb_data_clk;
    CData/*0:0*/ __VactContinue;
    SData/*15:0*/ tb_1553_decoder__DOT__tb_tdata;
    SData/*15:0*/ tb_1553_decoder__DOT__data;
    SData/*15:0*/ tb_1553_decoder__DOT__dut__DOT__data;
    SData/*8:0*/ tb_1553_decoder__DOT__dut__DOT__pause_counter;
    SData/*15:0*/ __Vdly__tb_1553_decoder__DOT__data;
    SData/*8:0*/ __Vdly__tb_1553_decoder__DOT__dut__DOT__pause_counter;
    SData/*15:0*/ __Vdly__tb_1553_decoder__DOT__tb_tdata;
    SData/*15:0*/ __Vdly__tb_1553_decoder__DOT__dut__DOT__data;
    VlWide<50>/*1599:0*/ tb_1553_decoder__DOT__data_expand;
    VlWide<63>/*1999:0*/ tb_1553_decoder__DOT__reg_data;
    IData/*31:0*/ tb_1553_decoder__DOT__xor_index;
    IData/*31:0*/ tb_1553_decoder__DOT__cycle_index;
    IData/*31:0*/ tb_1553_decoder__DOT__pos_counter;
    IData/*31:0*/ tb_1553_decoder__DOT__delay_counter;
    IData/*31:0*/ tb_1553_decoder__DOT__dut__DOT__bit_slice_index;
    IData/*31:0*/ __Vdly__tb_1553_decoder__DOT__pos_counter;
    IData/*31:0*/ __Vdly__tb_1553_decoder__DOT__delay_counter;
    VlWide<50>/*1599:0*/ __Vdly__tb_1553_decoder__DOT__data_expand;
    VlWide<63>/*1999:0*/ __Vdly__tb_1553_decoder__DOT__reg_data;
    IData/*31:0*/ __VactIterCount;
    QData/*39:0*/ tb_1553_decoder__DOT__dut__DOT__reg_data;
    QData/*39:0*/ __Vdly__tb_1553_decoder__DOT__dut__DOT__reg_data;
    VlUnpacked<CData/*0:0*/, 2> __Vm_traceActivity;
    VlDelayScheduler __VdlySched;
    VlTriggerVec<2> __VactTriggered;
    VlTriggerVec<2> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vtb_1553_decoder__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vtb_1553_decoder___024root(Vtb_1553_decoder__Syms* symsp, const char* v__name);
    ~Vtb_1553_decoder___024root();
    VL_UNCOPYABLE(Vtb_1553_decoder___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);


#endif  // guard
