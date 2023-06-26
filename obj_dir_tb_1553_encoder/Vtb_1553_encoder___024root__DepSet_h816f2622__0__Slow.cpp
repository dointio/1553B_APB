// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_1553_encoder.h for the primary calling header

#include "verilated.h"

#include "Vtb_1553_encoder__Syms.h"
#include "Vtb_1553_encoder___024root.h"

VL_ATTR_COLD void Vtb_1553_encoder___024root___eval_initial__TOP(Vtb_1553_encoder___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_1553_encoder__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_1553_encoder___024root___eval_initial__TOP\n"); );
    // Init
    VlWide<6>/*191:0*/ __Vtemp_h7465a275__0;
    // Body
    __Vtemp_h7465a275__0[0U] = 0x2e766364U;
    __Vtemp_h7465a275__0[1U] = 0x5f656e63U;
    __Vtemp_h7465a275__0[2U] = 0x31353533U;
    __Vtemp_h7465a275__0[3U] = 0x2f74625fU;
    __Vtemp_h7465a275__0[4U] = 0x77617665U;
    __Vtemp_h7465a275__0[5U] = 0x2e2e2fU;
    vlSymsp->_vm_contextp__->dumpfile(VL_CVT_PACK_STR_NW(6, __Vtemp_h7465a275__0));
    vlSymsp->_traceDumpOpen();
}
