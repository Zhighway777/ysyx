// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vfast_fadd4.h for the primary calling header

#include "verilated.h"

#include "Vfast_fadd4___024root.h"

VL_INLINE_OPT void Vfast_fadd4___024root___ico_sequent__TOP__0(Vfast_fadd4___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vfast_fadd4__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfast_fadd4___024root___ico_sequent__TOP__0\n"); );
    // Body
    vlSelf->fast_fadd4__DOT__g = ((IData)(vlSelf->a) 
                                  & (IData)(vlSelf->b));
    vlSelf->fast_fadd4__DOT__p = ((IData)(vlSelf->a) 
                                  ^ (IData)(vlSelf->b));
}

VL_INLINE_OPT void Vfast_fadd4___024root___ico_comb__TOP__0(Vfast_fadd4___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vfast_fadd4__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfast_fadd4___024root___ico_comb__TOP__0\n"); );
    // Init
    CData/*31:0*/ __Vtemp_h029976b6__0;
    // Body
    __Vtemp_h029976b6__0 = ((0x10U & (((IData)(vlSelf->fast_fadd4__DOT__g) 
                                       << 1U) | (((IData)(vlSelf->fast_fadd4__DOT__p) 
                                                  << 1U) 
                                                 & (((IData)(vlSelf->fast_fadd4__DOT__g) 
                                                     << 2U) 
                                                    | (((IData)(vlSelf->fast_fadd4__DOT__p) 
                                                        << 2U) 
                                                       & (((IData)(vlSelf->fast_fadd4__DOT__g) 
                                                           << 3U) 
                                                          | (((IData)(vlSelf->fast_fadd4__DOT__p) 
                                                              << 3U) 
                                                             & (((IData)(vlSelf->fast_fadd4__DOT__g) 
                                                                 | ((IData)(vlSelf->fast_fadd4__DOT__p) 
                                                                    & (IData)(vlSelf->fast_fadd4__DOT__c))) 
                                                                << 4U)))))))) 
                            | ((8U & (((IData)(vlSelf->fast_fadd4__DOT__g) 
                                       << 1U) | (((IData)(vlSelf->fast_fadd4__DOT__p) 
                                                  << 1U) 
                                                 & (((IData)(vlSelf->fast_fadd4__DOT__g) 
                                                     << 2U) 
                                                    | (((IData)(vlSelf->fast_fadd4__DOT__p) 
                                                        << 2U) 
                                                       & (((IData)(vlSelf->fast_fadd4__DOT__g) 
                                                           | ((IData)(vlSelf->fast_fadd4__DOT__p) 
                                                              & (IData)(vlSelf->fast_fadd4__DOT__c))) 
                                                          << 3U)))))) 
                               | ((4U & (((IData)(vlSelf->fast_fadd4__DOT__g) 
                                          << 1U) | 
                                         (((IData)(vlSelf->fast_fadd4__DOT__p) 
                                           << 1U) & 
                                          (((IData)(vlSelf->fast_fadd4__DOT__g) 
                                            | ((IData)(vlSelf->fast_fadd4__DOT__p) 
                                               & (IData)(vlSelf->fast_fadd4__DOT__c))) 
                                           << 2U)))) 
                                  | ((2U & (((IData)(vlSelf->fast_fadd4__DOT__g) 
                                             | ((IData)(vlSelf->fast_fadd4__DOT__p) 
                                                & (IData)(vlSelf->fast_fadd4__DOT__c))) 
                                            << 1U)) 
                                     | (IData)(vlSelf->cin)))));
    vlSelf->fast_fadd4__DOT__c = __Vtemp_h029976b6__0;
    vlSelf->cout = (1U & ((IData)(vlSelf->fast_fadd4__DOT__c) 
                          >> 4U));
    vlSelf->sum = (0xfU & ((IData)(vlSelf->fast_fadd4__DOT__p) 
                           ^ (IData)(vlSelf->fast_fadd4__DOT__c)));
}

void Vfast_fadd4___024root___eval_ico(Vfast_fadd4___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vfast_fadd4__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfast_fadd4___024root___eval_ico\n"); );
    // Body
    if (vlSelf->__VicoTriggered.at(0U)) {
        Vfast_fadd4___024root___ico_sequent__TOP__0(vlSelf);
    }
    if ((vlSelf->__VicoTriggered.at(0U) | vlSelf->__VicoTriggered.at(1U))) {
        Vfast_fadd4___024root___ico_comb__TOP__0(vlSelf);
    }
}

void Vfast_fadd4___024root___eval_act(Vfast_fadd4___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vfast_fadd4__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfast_fadd4___024root___eval_act\n"); );
    // Body
    if (vlSelf->__VactTriggered.at(0U)) {
        Vfast_fadd4___024root___ico_comb__TOP__0(vlSelf);
    }
}

void Vfast_fadd4___024root___eval_nba(Vfast_fadd4___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vfast_fadd4__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfast_fadd4___024root___eval_nba\n"); );
}

void Vfast_fadd4___024root___eval_triggers__ico(Vfast_fadd4___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void Vfast_fadd4___024root___dump_triggers__ico(Vfast_fadd4___024root* vlSelf);
#endif  // VL_DEBUG
void Vfast_fadd4___024root___eval_triggers__act(Vfast_fadd4___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void Vfast_fadd4___024root___dump_triggers__act(Vfast_fadd4___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vfast_fadd4___024root___dump_triggers__nba(Vfast_fadd4___024root* vlSelf);
#endif  // VL_DEBUG

void Vfast_fadd4___024root___eval(Vfast_fadd4___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vfast_fadd4__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfast_fadd4___024root___eval\n"); );
    // Init
    CData/*0:0*/ __VicoContinue;
    VlTriggerVec<1> __VpreTriggered;
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    vlSelf->__VicoIterCount = 0U;
    __VicoContinue = 1U;
    while (__VicoContinue) {
        __VicoContinue = 0U;
        Vfast_fadd4___024root___eval_triggers__ico(vlSelf);
        if (vlSelf->__VicoTriggered.any()) {
            __VicoContinue = 1U;
            if (VL_UNLIKELY((0x64U < vlSelf->__VicoIterCount))) {
#ifdef VL_DEBUG
                Vfast_fadd4___024root___dump_triggers__ico(vlSelf);
#endif
                VL_FATAL_MT("vsrc/fast_fadd4.v", 1, "", "Input combinational region did not converge.");
            }
            vlSelf->__VicoIterCount = ((IData)(1U) 
                                       + vlSelf->__VicoIterCount);
            Vfast_fadd4___024root___eval_ico(vlSelf);
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
            Vfast_fadd4___024root___eval_triggers__act(vlSelf);
            if (vlSelf->__VactTriggered.any()) {
                vlSelf->__VactContinue = 1U;
                if (VL_UNLIKELY((0x64U < vlSelf->__VactIterCount))) {
#ifdef VL_DEBUG
                    Vfast_fadd4___024root___dump_triggers__act(vlSelf);
#endif
                    VL_FATAL_MT("vsrc/fast_fadd4.v", 1, "", "Active region did not converge.");
                }
                vlSelf->__VactIterCount = ((IData)(1U) 
                                           + vlSelf->__VactIterCount);
                __VpreTriggered.andNot(vlSelf->__VactTriggered, vlSelf->__VnbaTriggered);
                vlSelf->__VnbaTriggered.set(vlSelf->__VactTriggered);
                Vfast_fadd4___024root___eval_act(vlSelf);
            }
        }
        if (vlSelf->__VnbaTriggered.any()) {
            __VnbaContinue = 1U;
            if (VL_UNLIKELY((0x64U < __VnbaIterCount))) {
#ifdef VL_DEBUG
                Vfast_fadd4___024root___dump_triggers__nba(vlSelf);
#endif
                VL_FATAL_MT("vsrc/fast_fadd4.v", 1, "", "NBA region did not converge.");
            }
            __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
            Vfast_fadd4___024root___eval_nba(vlSelf);
        }
    }
}

#ifdef VL_DEBUG
void Vfast_fadd4___024root___eval_debug_assertions(Vfast_fadd4___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vfast_fadd4__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfast_fadd4___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->a & 0xf0U))) {
        Verilated::overWidthError("a");}
    if (VL_UNLIKELY((vlSelf->b & 0xf0U))) {
        Verilated::overWidthError("b");}
    if (VL_UNLIKELY((vlSelf->cin & 0xfeU))) {
        Verilated::overWidthError("cin");}
}
#endif  // VL_DEBUG
