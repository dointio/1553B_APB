// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtb_1553_encoder.h for the primary calling header

#ifndef VERILATED_VTB_1553_ENCODER___024ROOT_H_
#define VERILATED_VTB_1553_ENCODER___024ROOT_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"

class Vtb_1553_encoder__Syms;

class Vtb_1553_encoder___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ tb_1553_encoder__DOT__tb_data_clk;
    CData/*0:0*/ tb_1553_encoder__DOT__tb_rst;
    CData/*1:0*/ tb_1553_encoder__DOT__tb_dout;
    CData/*0:0*/ tb_1553_encoder__DOT__tb_en_dout;
    CData/*0:0*/ tb_1553_encoder__DOT__tb_tvalid;
    CData/*7:0*/ tb_1553_encoder__DOT__tb_tuser;
    CData/*0:0*/ tb_1553_encoder__DOT__dut__DOT__parity_bit;
    CData/*2:0*/ tb_1553_encoder__DOT__dut__DOT__state;
    CData/*7:0*/ tb_1553_encoder__DOT__dut__DOT__cmd;
    CData/*4:0*/ tb_1553_encoder__DOT__dut__DOT__skip_counter;
    CData/*6:0*/ tb_1553_encoder__DOT__dut__DOT__pause_counter;
    CData/*5:0*/ tb_1553_encoder__DOT__dut__DOT__trans_counter;
    CData/*5:0*/ tb_1553_encoder__DOT__dut__DOT__prev_trans_counter;
    CData/*0:0*/ tb_1553_encoder__DOT__dut__DOT____Vlvbound_h6a4c94f2__0;
    CData/*0:0*/ __Vdlyvval__tb_1553_encoder__DOT__tb_data_clk__v0;
    CData/*0:0*/ __Vdlyvset__tb_1553_encoder__DOT__tb_data_clk__v0;
    CData/*6:0*/ __Vdly__tb_1553_encoder__DOT__dut__DOT__pause_counter;
    CData/*7:0*/ __Vdly__tb_1553_encoder__DOT__dut__DOT__cmd;
    CData/*2:0*/ __Vdly__tb_1553_encoder__DOT__dut__DOT__state;
    CData/*0:0*/ __Vdly__tb_1553_encoder__DOT__dut__DOT__parity_bit;
    CData/*5:0*/ __Vdly__tb_1553_encoder__DOT__dut__DOT__trans_counter;
    CData/*4:0*/ __Vdly__tb_1553_encoder__DOT__dut__DOT__skip_counter;
    CData/*0:0*/ __Vtrigrprev__TOP__tb_1553_encoder__DOT__tb_data_clk;
    CData/*0:0*/ __VactContinue;
    SData/*15:0*/ tb_1553_encoder__DOT__tb_tdata;
    SData/*15:0*/ tb_1553_encoder__DOT__dut__DOT__data;
    SData/*15:0*/ tb_1553_encoder__DOT__dut__DOT__r_data;
    SData/*15:0*/ __Vdly__tb_1553_encoder__DOT__tb_tdata;
    SData/*15:0*/ __Vdly__tb_1553_encoder__DOT__dut__DOT__data;
    SData/*15:0*/ __Vdly__tb_1553_encoder__DOT__dut__DOT__r_data;
    IData/*31:0*/ tb_1553_encoder__DOT__dut__DOT__xor_index;
    IData/*31:0*/ tb_1553_encoder__DOT__dut__DOT__cycle_index;
    IData/*31:0*/ __VactIterCount;
    QData/*39:0*/ tb_1553_encoder__DOT__dut__DOT__reg_data;
    QData/*39:0*/ __Vdly__tb_1553_encoder__DOT__dut__DOT__reg_data;
    VlUnpacked<CData/*0:0*/, 2> __Vm_traceActivity;
    VlDelayScheduler __VdlySched;
    VlTriggerVec<2> __VactTriggered;
    VlTriggerVec<2> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vtb_1553_encoder__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vtb_1553_encoder___024root(Vtb_1553_encoder__Syms* symsp, const char* v__name);
    ~Vtb_1553_encoder___024root();
    VL_UNCOPYABLE(Vtb_1553_encoder___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);


#endif  // guard
