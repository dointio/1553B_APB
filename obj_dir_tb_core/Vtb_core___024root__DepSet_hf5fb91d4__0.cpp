// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_core.h for the primary calling header

#include "verilated.h"

#include "Vtb_core__Syms.h"
#include "Vtb_core___024root.h"

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_core___024root___dump_triggers__act(Vtb_core___024root* vlSelf);
#endif  // VL_DEBUG

void Vtb_core___024root___eval_triggers__act(Vtb_core___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_core___024root___eval_triggers__act\n"); );
    // Body
    vlSelf->__VactTriggered.at(0U) = ((IData)(vlSelf->tb_core__DOT__tb_data_clk) 
                                      & (~ (IData)(vlSelf->__Vtrigrprev__TOP__tb_core__DOT__tb_data_clk)));
    vlSelf->__VactTriggered.at(1U) = vlSelf->__VdlySched.awaitingCurrentTime();
    vlSelf->__Vtrigrprev__TOP__tb_core__DOT__tb_data_clk 
        = vlSelf->tb_core__DOT__tb_data_clk;
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vtb_core___024root___dump_triggers__act(vlSelf);
    }
#endif
}