// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vkeyboard_sim.h for the primary calling header

#include "verilated.h"

#include "Vkeyboard_sim__Syms.h"
#include "Vkeyboard_sim___024root.h"

void Vkeyboard_sim___024root___ctor_var_reset(Vkeyboard_sim___024root* vlSelf);

Vkeyboard_sim___024root::Vkeyboard_sim___024root(Vkeyboard_sim__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vkeyboard_sim___024root___ctor_var_reset(this);
}

void Vkeyboard_sim___024root::__Vconfigure(bool first) {
    if (false && first) {}  // Prevent unused
}

Vkeyboard_sim___024root::~Vkeyboard_sim___024root() {
}
