// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vps2_keyboard_model.h for the primary calling header

#include "verilated.h"

#include "Vps2_keyboard_model___024root.h"

void Vps2_keyboard_model___024root___eval_act(Vps2_keyboard_model___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vps2_keyboard_model__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vps2_keyboard_model___024root___eval_act\n"); );
}

void Vps2_keyboard_model___024root___eval_nba(Vps2_keyboard_model___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vps2_keyboard_model__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vps2_keyboard_model___024root___eval_nba\n"); );
}

void Vps2_keyboard_model___024root___eval_triggers__act(Vps2_keyboard_model___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void Vps2_keyboard_model___024root___dump_triggers__act(Vps2_keyboard_model___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vps2_keyboard_model___024root___dump_triggers__nba(Vps2_keyboard_model___024root* vlSelf);
#endif  // VL_DEBUG

void Vps2_keyboard_model___024root___eval(Vps2_keyboard_model___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vps2_keyboard_model__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vps2_keyboard_model___024root___eval\n"); );
    // Init
    VlTriggerVec<0> __VpreTriggered;
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        __VnbaContinue = 0U;
        vlSelf->__VnbaTriggered.clear();
        vlSelf->__VactIterCount = 0U;
        vlSelf->__VactContinue = 1U;
        while (vlSelf->__VactContinue) {
            vlSelf->__VactContinue = 0U;
            Vps2_keyboard_model___024root___eval_triggers__act(vlSelf);
            if (vlSelf->__VactTriggered.any()) {
                vlSelf->__VactContinue = 1U;
                if (VL_UNLIKELY((0x64U < vlSelf->__VactIterCount))) {
#ifdef VL_DEBUG
                    Vps2_keyboard_model___024root___dump_triggers__act(vlSelf);
#endif
                    VL_FATAL_MT("vsrc/ps2_keyboard_model.v", 2, "", "Active region did not converge.");
                }
                vlSelf->__VactIterCount = ((IData)(1U) 
                                           + vlSelf->__VactIterCount);
                __VpreTriggered.andNot(vlSelf->__VactTriggered, vlSelf->__VnbaTriggered);
                vlSelf->__VnbaTriggered.set(vlSelf->__VactTriggered);
                Vps2_keyboard_model___024root___eval_act(vlSelf);
            }
        }
        if (vlSelf->__VnbaTriggered.any()) {
            __VnbaContinue = 1U;
            if (VL_UNLIKELY((0x64U < __VnbaIterCount))) {
#ifdef VL_DEBUG
                Vps2_keyboard_model___024root___dump_triggers__nba(vlSelf);
#endif
                VL_FATAL_MT("vsrc/ps2_keyboard_model.v", 2, "", "NBA region did not converge.");
            }
            __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
            Vps2_keyboard_model___024root___eval_nba(vlSelf);
        }
    }
}

#ifdef VL_DEBUG
void Vps2_keyboard_model___024root___eval_debug_assertions(Vps2_keyboard_model___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vps2_keyboard_model__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vps2_keyboard_model___024root___eval_debug_assertions\n"); );
}
#endif  // VL_DEBUG
