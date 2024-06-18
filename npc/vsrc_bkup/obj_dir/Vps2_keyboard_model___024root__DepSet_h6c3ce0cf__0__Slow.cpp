// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vps2_keyboard_model.h for the primary calling header

#include "verilated.h"

#include "Vps2_keyboard_model___024root.h"

VL_ATTR_COLD void Vps2_keyboard_model___024root___eval_static(Vps2_keyboard_model___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vps2_keyboard_model__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vps2_keyboard_model___024root___eval_static\n"); );
}

VL_ATTR_COLD void Vps2_keyboard_model___024root___eval_initial__TOP(Vps2_keyboard_model___024root* vlSelf);

VL_ATTR_COLD void Vps2_keyboard_model___024root___eval_initial(Vps2_keyboard_model___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vps2_keyboard_model__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vps2_keyboard_model___024root___eval_initial\n"); );
    // Body
    Vps2_keyboard_model___024root___eval_initial__TOP(vlSelf);
}

VL_ATTR_COLD void Vps2_keyboard_model___024root___eval_initial__TOP(Vps2_keyboard_model___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vps2_keyboard_model__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vps2_keyboard_model___024root___eval_initial__TOP\n"); );
    // Body
    vlSelf->ps2_clk = 1U;
}

VL_ATTR_COLD void Vps2_keyboard_model___024root___eval_final(Vps2_keyboard_model___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vps2_keyboard_model__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vps2_keyboard_model___024root___eval_final\n"); );
}

VL_ATTR_COLD void Vps2_keyboard_model___024root___eval_settle(Vps2_keyboard_model___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vps2_keyboard_model__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vps2_keyboard_model___024root___eval_settle\n"); );
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vps2_keyboard_model___024root___dump_triggers__act(Vps2_keyboard_model___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vps2_keyboard_model__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vps2_keyboard_model___024root___dump_triggers__act\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VactTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vps2_keyboard_model___024root___dump_triggers__nba(Vps2_keyboard_model___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vps2_keyboard_model__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vps2_keyboard_model___024root___dump_triggers__nba\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VnbaTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vps2_keyboard_model___024root___ctor_var_reset(Vps2_keyboard_model___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vps2_keyboard_model__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vps2_keyboard_model___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->ps2_clk = VL_RAND_RESET_I(1);
    vlSelf->ps2_data = VL_RAND_RESET_I(1);
    vlSelf->code = VL_RAND_RESET_I(8);
    vlSelf->ps2_keyboard_model__DOT__kbd_sendcode__Vstatic__i = VL_RAND_RESET_I(32);
    vlSelf->ps2_keyboard_model__DOT__kbd_sendcode__Vstatic__send_buffer = VL_RAND_RESET_I(11);
}
