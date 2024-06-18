// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vkeyboard_sim.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vkeyboard_sim_keyboard_sim.h"

VL_ATTR_COLD void Vkeyboard_sim_keyboard_sim___ctor_var_reset(Vkeyboard_sim_keyboard_sim* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vkeyboard_sim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vkeyboard_sim_keyboard_sim___ctor_var_reset\n"); );
    // Body
    vlSelf->clk = VL_RAND_RESET_I(1);
    vlSelf->clrn = VL_RAND_RESET_I(1);
    vlSelf->nextdata_n = VL_RAND_RESET_I(1);
    vlSelf->code = VL_RAND_RESET_I(8);
    vlSelf->__PVT__ready = VL_RAND_RESET_I(1);
    vlSelf->__PVT__overflow = VL_RAND_RESET_I(1);
    vlSelf->__PVT__kbd_data = VL_RAND_RESET_I(1);
    vlSelf->__PVT__model__DOT__kbd_sendcode__Vstatic__i = VL_RAND_RESET_I(32);
    vlSelf->__PVT__model__DOT__kbd_sendcode__Vstatic__send_buffer = VL_RAND_RESET_I(11);
    vlSelf->__PVT__inst__DOT__buffer = VL_RAND_RESET_I(10);
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->__PVT__inst__DOT__fifo[__Vi0] = VL_RAND_RESET_I(8);
    }
    vlSelf->__PVT__inst__DOT__w_ptr = VL_RAND_RESET_I(3);
    vlSelf->__PVT__inst__DOT__r_ptr = VL_RAND_RESET_I(3);
    vlSelf->__PVT__inst__DOT__count = VL_RAND_RESET_I(4);
    vlSelf->__PVT__inst__DOT__ps2_clk_sync = VL_RAND_RESET_I(3);
    vlSelf->inst__DOT____Vlvbound_h1a91ade8__0 = VL_RAND_RESET_I(1);
}
