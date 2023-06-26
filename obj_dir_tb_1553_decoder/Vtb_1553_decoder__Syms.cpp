// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table implementation internals

#include "Vtb_1553_decoder__Syms.h"
#include "Vtb_1553_decoder.h"
#include "Vtb_1553_decoder___024root.h"

// FUNCTIONS
Vtb_1553_decoder__Syms::~Vtb_1553_decoder__Syms()
{
#ifdef VM_TRACE
    if (__Vm_dumping) _traceDumpClose();
#endif  // VM_TRACE
}

void Vtb_1553_decoder__Syms::_traceDump() {
    const VerilatedLockGuard lock(__Vm_dumperMutex);
    __Vm_dumperp->dump(VL_TIME_Q());
}

void Vtb_1553_decoder__Syms::_traceDumpOpen() {
    const VerilatedLockGuard lock(__Vm_dumperMutex);
    if (VL_UNLIKELY(!__Vm_dumperp)) {
        __Vm_dumperp = new VerilatedVcdC();
        __Vm_modelp->trace(__Vm_dumperp, 0, 0);
        std::string dumpfile = _vm_contextp__->dumpfileCheck();
        __Vm_dumperp->open(dumpfile.c_str());
        __Vm_dumping = true;
    }
}

void Vtb_1553_decoder__Syms::_traceDumpClose() {
    const VerilatedLockGuard lock(__Vm_dumperMutex);
    __Vm_dumping = false;
    VL_DO_CLEAR(delete __Vm_dumperp, __Vm_dumperp = nullptr);
}

Vtb_1553_decoder__Syms::Vtb_1553_decoder__Syms(VerilatedContext* contextp, const char* namep, Vtb_1553_decoder* modelp)
    : VerilatedSyms{contextp}
    // Setup internal state of the Syms class
    , __Vm_modelp{modelp}
    // Setup module instances
    , TOP{this, namep}
{
    // Configure time unit / time precision
    _vm_contextp__->timeunit(-9);
    _vm_contextp__->timeprecision(-12);
    // Setup each module's pointers to their submodules
    // Setup each module's pointer back to symbol table (for public functions)
    TOP.__Vconfigure(true);
}