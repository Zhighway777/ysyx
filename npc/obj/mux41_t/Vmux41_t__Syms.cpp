// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table implementation internals

#include "Vmux41_t__Syms.h"
#include "Vmux41_t.h"
#include "Vmux41_t___024root.h"

// FUNCTIONS
Vmux41_t__Syms::~Vmux41_t__Syms()
{
}

Vmux41_t__Syms::Vmux41_t__Syms(VerilatedContext* contextp, const char* namep, Vmux41_t* modelp)
    : VerilatedSyms{contextp}
    // Setup internal state of the Syms class
    , __Vm_modelp{modelp}
    // Setup module instances
    , TOP{this, namep}
{
    // Configure time unit / time precision
    _vm_contextp__->timeunit(-12);
    _vm_contextp__->timeprecision(-12);
    // Setup each module's pointers to their submodules
    // Setup each module's pointer back to symbol table (for public functions)
    TOP.__Vconfigure(true);
}
