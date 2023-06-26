// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_1553_decoder.h for the primary calling header

#include "verilated.h"

#include "Vtb_1553_decoder__Syms.h"
#include "Vtb_1553_decoder___024root.h"

void Vtb_1553_decoder___024root___ctor_var_reset(Vtb_1553_decoder___024root* vlSelf);

Vtb_1553_decoder___024root::Vtb_1553_decoder___024root(Vtb_1553_decoder__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , __VdlySched{*symsp->_vm_contextp__}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vtb_1553_decoder___024root___ctor_var_reset(this);
}

void Vtb_1553_decoder___024root::__Vconfigure(bool first) {
    if (false && first) {}  // Prevent unused
}

Vtb_1553_decoder___024root::~Vtb_1553_decoder___024root() {
}
