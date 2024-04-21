// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vfsm_bin.h for the primary calling header

#include "verilated.h"

#include "Vfsm_bin__Syms.h"
#include "Vfsm_bin___024root.h"

void Vfsm_bin___024root___ctor_var_reset(Vfsm_bin___024root* vlSelf);

Vfsm_bin___024root::Vfsm_bin___024root(Vfsm_bin__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vfsm_bin___024root___ctor_var_reset(this);
}

void Vfsm_bin___024root::__Vconfigure(bool first) {
    if (false && first) {}  // Prevent unused
}

Vfsm_bin___024root::~Vfsm_bin___024root() {
}
