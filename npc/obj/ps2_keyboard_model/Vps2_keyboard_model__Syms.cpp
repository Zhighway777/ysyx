// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table implementation internals

#include "Vps2_keyboard_model__Syms.h"
#include "Vps2_keyboard_model.h"
#include "Vps2_keyboard_model___024root.h"

// FUNCTIONS
Vps2_keyboard_model__Syms::~Vps2_keyboard_model__Syms()
{
}

Vps2_keyboard_model__Syms::Vps2_keyboard_model__Syms(VerilatedContext* contextp, const char* namep, Vps2_keyboard_model* modelp)
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
