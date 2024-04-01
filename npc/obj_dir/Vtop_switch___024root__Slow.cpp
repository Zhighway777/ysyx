// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop_switch.h for the primary calling header

#include "verilated.h"

#include "Vtop_switch__Syms.h"
#include "Vtop_switch___024root.h"

void Vtop_switch___024root___ctor_var_reset(Vtop_switch___024root* vlSelf);

Vtop_switch___024root::Vtop_switch___024root(Vtop_switch__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vtop_switch___024root___ctor_var_reset(this);
}

void Vtop_switch___024root::__Vconfigure(bool first) {
    if (false && first) {}  // Prevent unused
}

Vtop_switch___024root::~Vtop_switch___024root() {
}
