// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vrandom.h for the primary calling header

#include "verilated.h"

#include "Vrandom___024root.h"

void Vrandom___024root___eval_act(Vrandom___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrandom__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vrandom___024root___eval_act\n"); );
}

extern const VlUnpacked<CData/*1:0*/, 512> Vrandom__ConstPool__TABLE_h941dcede_0;
extern const VlUnpacked<CData/*0:0*/, 512> Vrandom__ConstPool__TABLE_h01c6ca4c_0;
extern const VlUnpacked<CData/*7:0*/, 512> Vrandom__ConstPool__TABLE_he746c2aa_0;

VL_INLINE_OPT void Vrandom___024root___nba_sequent__TOP__0(Vrandom___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrandom__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vrandom___024root___nba_sequent__TOP__0\n"); );
    // Init
    SData/*8:0*/ __Vtableidx1;
    __Vtableidx1 = 0;
    // Body
    __Vtableidx1 = (((IData)(vlSelf->random__DOT__left_in) 
                     << 8U) | (IData)(vlSelf->random__DOT__Q));
    if ((1U & Vrandom__ConstPool__TABLE_h941dcede_0
         [__Vtableidx1])) {
        vlSelf->random__DOT__left_in = Vrandom__ConstPool__TABLE_h01c6ca4c_0
            [__Vtableidx1];
    }
    vlSelf->random__DOT__Q = Vrandom__ConstPool__TABLE_he746c2aa_0
        [__Vtableidx1];
    vlSelf->rand_num = vlSelf->random__DOT__Q;
}

void Vrandom___024root___eval_nba(Vrandom___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrandom__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vrandom___024root___eval_nba\n"); );
    // Body
    if (vlSelf->__VnbaTriggered.at(0U)) {
        Vrandom___024root___nba_sequent__TOP__0(vlSelf);
    }
}

void Vrandom___024root___eval_triggers__act(Vrandom___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void Vrandom___024root___dump_triggers__act(Vrandom___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vrandom___024root___dump_triggers__nba(Vrandom___024root* vlSelf);
#endif  // VL_DEBUG

void Vrandom___024root___eval(Vrandom___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrandom__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vrandom___024root___eval\n"); );
    // Init
    VlTriggerVec<1> __VpreTriggered;
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
            Vrandom___024root___eval_triggers__act(vlSelf);
            if (vlSelf->__VactTriggered.any()) {
                vlSelf->__VactContinue = 1U;
                if (VL_UNLIKELY((0x64U < vlSelf->__VactIterCount))) {
#ifdef VL_DEBUG
                    Vrandom___024root___dump_triggers__act(vlSelf);
#endif
                    VL_FATAL_MT("vsrc/random.v", 1, "", "Active region did not converge.");
                }
                vlSelf->__VactIterCount = ((IData)(1U) 
                                           + vlSelf->__VactIterCount);
                __VpreTriggered.andNot(vlSelf->__VactTriggered, vlSelf->__VnbaTriggered);
                vlSelf->__VnbaTriggered.set(vlSelf->__VactTriggered);
                Vrandom___024root___eval_act(vlSelf);
            }
        }
        if (vlSelf->__VnbaTriggered.any()) {
            __VnbaContinue = 1U;
            if (VL_UNLIKELY((0x64U < __VnbaIterCount))) {
#ifdef VL_DEBUG
                Vrandom___024root___dump_triggers__nba(vlSelf);
#endif
                VL_FATAL_MT("vsrc/random.v", 1, "", "NBA region did not converge.");
            }
            __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
            Vrandom___024root___eval_nba(vlSelf);
        }
    }
}

#ifdef VL_DEBUG
void Vrandom___024root___eval_debug_assertions(Vrandom___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrandom__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vrandom___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->clk & 0xfeU))) {
        Verilated::overWidthError("clk");}
}
#endif  // VL_DEBUG
