// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vkeyboard_sim.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vkeyboard_sim__Syms.h"
#include "Vkeyboard_sim_keyboard_sim.h"

void Vkeyboard_sim_keyboard_sim___ctor_var_reset(Vkeyboard_sim_keyboard_sim* vlSelf);

Vkeyboard_sim_keyboard_sim::Vkeyboard_sim_keyboard_sim(Vkeyboard_sim__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vkeyboard_sim_keyboard_sim___ctor_var_reset(this);
}

void Vkeyboard_sim_keyboard_sim::__Vconfigure(bool first) {
    if (false && first) {}  // Prevent unused
}

Vkeyboard_sim_keyboard_sim::~Vkeyboard_sim_keyboard_sim() {
}
