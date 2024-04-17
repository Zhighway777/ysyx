// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vmux41_t.h for the primary calling header

#include "verilated.h"

#include "Vmux41_t___024root.h"

VL_INLINE_OPT void Vmux41_t___024root___ico_sequent__TOP__0(Vmux41_t___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmux41_t__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmux41_t___024root___ico_sequent__TOP__0\n"); );
    // Body
    vlSelf->f = ((2U & (IData)(vlSelf->y)) ? ((1U & (IData)(vlSelf->y))
                                               ? (IData)(vlSelf->x3)
                                               : (IData)(vlSelf->x2))
                  : ((1U & (IData)(vlSelf->y)) ? (IData)(vlSelf->x1)
                      : (IData)(vlSelf->x0)));
}

void Vmux41_t___024root___eval_ico(Vmux41_t___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmux41_t__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmux41_t___024root___eval_ico\n"); );
    // Body
    if (vlSelf->__VicoTriggered.at(0U)) {
        Vmux41_t___024root___ico_sequent__TOP__0(vlSelf);
    }
}

void Vmux41_t___024root___eval_act(Vmux41_t___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmux41_t__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmux41_t___024root___eval_act\n"); );
}

void Vmux41_t___024root___eval_nba(Vmux41_t___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmux41_t__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmux41_t___024root___eval_nba\n"); );
}

void Vmux41_t___024root___eval_triggers__ico(Vmux41_t___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void Vmux41_t___024root___dump_triggers__ico(Vmux41_t___024root* vlSelf);
#endif  // VL_DEBUG
void Vmux41_t___024root___eval_triggers__act(Vmux41_t___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void Vmux41_t___024root___dump_triggers__act(Vmux41_t___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vmux41_t___024root___dump_triggers__nba(Vmux41_t___024root* vlSelf);
#endif  // VL_DEBUG

void Vmux41_t___024root___eval(Vmux41_t___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmux41_t__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmux41_t___024root___eval\n"); );
    // Init
    CData/*0:0*/ __VicoContinue;
    VlTriggerVec<0> __VpreTriggered;
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    vlSelf->__VicoIterCount = 0U;
    __VicoContinue = 1U;
    while (__VicoContinue) {
        __VicoContinue = 0U;
        Vmux41_t___024root___eval_triggers__ico(vlSelf);
        if (vlSelf->__VicoTriggered.any()) {
            __VicoContinue = 1U;
            if (VL_UNLIKELY((0x64U < vlSelf->__VicoIterCount))) {
#ifdef VL_DEBUG
                Vmux41_t___024root___dump_triggers__ico(vlSelf);
#endif
                VL_FATAL_MT("vsrc/mux41_t.v", 1, "", "Input combinational region did not converge.");
            }
            vlSelf->__VicoIterCount = ((IData)(1U) 
                                       + vlSelf->__VicoIterCount);
            Vmux41_t___024root___eval_ico(vlSelf);
        }
    }
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        __VnbaContinue = 0U;
        vlSelf->__VnbaTriggered.clear();
        vlSelf->__VactIterCount = 0U;
        vlSelf->__VactContinue = 1U;
        while (vlSelf->__VactContinue) {
            vlSelf->__VactContinue = 0U;
            Vmux41_t___024root___eval_triggers__act(vlSelf);
            if (vlSelf->__VactTriggered.any()) {
                vlSelf->__VactContinue = 1U;
                if (VL_UNLIKELY((0x64U < vlSelf->__VactIterCount))) {
#ifdef VL_DEBUG
                    Vmux41_t___024root___dump_triggers__act(vlSelf);
#endif
                    VL_FATAL_MT("vsrc/mux41_t.v", 1, "", "Active region did not converge.");
                }
                vlSelf->__VactIterCount = ((IData)(1U) 
                                           + vlSelf->__VactIterCount);
                __VpreTriggered.andNot(vlSelf->__VactTriggered, vlSelf->__VnbaTriggered);
                vlSelf->__VnbaTriggered.set(vlSelf->__VactTriggered);
                Vmux41_t___024root___eval_act(vlSelf);
            }
        }
        if (vlSelf->__VnbaTriggered.any()) {
            __VnbaContinue = 1U;
            if (VL_UNLIKELY((0x64U < __VnbaIterCount))) {
#ifdef VL_DEBUG
                Vmux41_t___024root___dump_triggers__nba(vlSelf);
#endif
                VL_FATAL_MT("vsrc/mux41_t.v", 1, "", "NBA region did not converge.");
            }
            __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
            Vmux41_t___024root___eval_nba(vlSelf);
        }
    }
}

#ifdef VL_DEBUG
void Vmux41_t___024root___eval_debug_assertions(Vmux41_t___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmux41_t__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmux41_t___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->x0 & 0xfcU))) {
        Verilated::overWidthError("x0");}
    if (VL_UNLIKELY((vlSelf->x1 & 0xfcU))) {
        Verilated::overWidthError("x1");}
    if (VL_UNLIKELY((vlSelf->x2 & 0xfcU))) {
        Verilated::overWidthError("x2");}
    if (VL_UNLIKELY((vlSelf->x3 & 0xfcU))) {
        Verilated::overWidthError("x3");}
    if (VL_UNLIKELY((vlSelf->y & 0xfcU))) {
        Verilated::overWidthError("y");}
}
#endif  // VL_DEBUG
