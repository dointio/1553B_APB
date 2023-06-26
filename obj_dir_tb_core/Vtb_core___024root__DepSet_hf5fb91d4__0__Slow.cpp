// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_core.h for the primary calling header

#include "verilated.h"

#include "Vtb_core__Syms.h"
#include "Vtb_core___024root.h"

VL_ATTR_COLD void Vtb_core___024root___eval_initial__TOP(Vtb_core___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_core___024root___eval_initial__TOP\n"); );
    // Init
    VlWide<5>/*159:0*/ __Vtemp_hfdab1eb7__0;
    // Body
    __Vtemp_hfdab1eb7__0[0U] = 0x2e766364U;
    __Vtemp_hfdab1eb7__0[1U] = 0x636f7265U;
    __Vtemp_hfdab1eb7__0[2U] = 0x2f74625fU;
    __Vtemp_hfdab1eb7__0[3U] = 0x77617665U;
    __Vtemp_hfdab1eb7__0[4U] = 0x2e2e2fU;
    vlSymsp->_vm_contextp__->dumpfile(VL_CVT_PACK_STR_NW(5, __Vtemp_hfdab1eb7__0));
    vlSymsp->_traceDumpOpen();
    vlSelf->tb_core__DOT__dut__DOT__decoder_fifo__DOT__axis_fifo__DOT__control__DOT__r_data_count = 0U;
    vlSelf->tb_core__DOT__dut__DOT__encoder_fifo__DOT__axis_fifo__DOT__control__DOT__r_data_count = 0U;
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_core___024root___dump_triggers__stl(Vtb_core___024root* vlSelf);
#endif  // VL_DEBUG

VL_ATTR_COLD void Vtb_core___024root___eval_triggers__stl(Vtb_core___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_core___024root___eval_triggers__stl\n"); );
    // Body
    vlSelf->__VstlTriggered.at(0U) = (0U == vlSelf->__VstlIterCount);
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vtb_core___024root___dump_triggers__stl(vlSelf);
    }
#endif
}
