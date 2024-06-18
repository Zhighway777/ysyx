// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table implementation internals

#include "Vkeyboard_sim__Syms.h"
#include "Vkeyboard_sim.h"
#include "Vkeyboard_sim___024root.h"

// FUNCTIONS
Vkeyboard_sim__Syms::~Vkeyboard_sim__Syms()
{
}

Vkeyboard_sim__Syms::Vkeyboard_sim__Syms(VerilatedContext* contextp, const char* namep, Vkeyboard_sim* modelp)
    : VerilatedSyms{contextp}
    // Setup internal state of the Syms class
    , __Vm_modelp{modelp}
    // Setup module instances
    , TOP{this, namep}
{
    // Configure time unit / time precision
    _vm_contextp__->timeunit(0);
    _vm_contextp__->timeprecision(-3);
    // Setup each module's pointers to their submodules
    // Setup each module's pointer back to symbol table (for public functions)
    TOP.__Vconfigure(true);
}
