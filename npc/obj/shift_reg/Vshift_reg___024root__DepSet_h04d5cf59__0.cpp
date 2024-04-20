// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vshift_reg.h for the primary calling header

#include "verilated.h"

#include "Vshift_reg___024root.h"

void Vshift_reg___024root___eval_act(Vshift_reg___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vshift_reg__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vshift_reg___024root___eval_act\n"); );
}

VL_INLINE_OPT void Vshift_reg___024root___nba_sequent__TOP__0(Vshift_reg___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vshift_reg__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vshift_reg___024root___nba_sequent__TOP__0\n"); );
    // Init
    CData/*7:0*/ __Vdly__shift_reg__DOT__Q;
    __Vdly__shift_reg__DOT__Q = 0;
    // Body
    __Vdly__shift_reg__DOT__Q = vlSelf->shift_reg__DOT__Q;
    if ((4U & (IData)(vlSelf->contrl))) {
        if ((2U & (IData)(vlSelf->contrl))) {
            __Vdly__shift_reg__DOT__Q = ((1U & (IData)(vlSelf->contrl))
                                          ? ((0xfeU 
                                              & ((IData)(vlSelf->shift_reg__DOT__Q) 
                                                 << 1U)) 
                                             | (1U 
                                                & ((IData)(vlSelf->shift_reg__DOT__Q) 
                                                   >> 7U)))
                                          : ((0x80U 
                                              & ((IData)(vlSelf->shift_reg__DOT__Q) 
                                                 << 7U)) 
                                             | (0x7fU 
                                                & ((IData)(vlSelf->shift_reg__DOT__Q) 
                                                   >> 1U))));
        } else if ((1U & (IData)(vlSelf->contrl))) {
            vlSelf->out = vlSelf->shift_reg__DOT__Q;
            __Vdly__shift_reg__DOT__Q = ((0xfeU & (IData)(__Vdly__shift_reg__DOT__Q)) 
                                         | (IData)(vlSelf->datain));
        } else {
            __Vdly__shift_reg__DOT__Q = ((0x80U & (IData)(vlSelf->shift_reg__DOT__Q)) 
                                         | (0x7fU & 
                                            ((IData)(vlSelf->shift_reg__DOT__Q) 
                                             >> 1U)));
        }
    } else {
        __Vdly__shift_reg__DOT__Q = ((2U & (IData)(vlSelf->contrl))
                                      ? ((1U & (IData)(vlSelf->contrl))
                                          ? (0xfeU 
                                             & ((IData)(vlSelf->shift_reg__DOT__Q) 
                                                << 1U))
                                          : (0x7fU 
                                             & ((IData)(vlSelf->shift_reg__DOT__Q) 
                                                >> 1U)))
                                      : ((1U & (IData)(vlSelf->contrl))
                                          ? (IData)(vlSelf->setdata)
                                          : 0U));
    }
    vlSelf->shift_reg__DOT__Q = __Vdly__shift_reg__DOT__Q;
}

void Vshift_reg___024root___eval_nba(Vshift_reg___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vshift_reg__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vshift_reg___024root___eval_nba\n"); );
    // Body
    if (vlSelf->__VnbaTriggered.at(0U)) {
        Vshift_reg___024root___nba_sequent__TOP__0(vlSelf);
    }
}

void Vshift_reg___024root___eval_triggers__act(Vshift_reg___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void Vshift_reg___024root___dump_triggers__act(Vshift_reg___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vshift_reg___024root___dump_triggers__nba(Vshift_reg___024root* vlSelf);
#endif  // VL_DEBUG

void Vshift_reg___024root___eval(Vshift_reg___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vshift_reg__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vshift_reg___024root___eval\n"); );
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
            Vshift_reg___024root___eval_triggers__act(vlSelf);
            if (vlSelf->__VactTriggered.any()) {
                vlSelf->__VactContinue = 1U;
                if (VL_UNLIKELY((0x64U < vlSelf->__VactIterCount))) {
#ifdef VL_DEBUG
                    Vshift_reg___024root___dump_triggers__act(vlSelf);
#endif
                    VL_FATAL_MT("vsrc/shift_reg.v", 1, "", "Active region did not converge.");
                }
                vlSelf->__VactIterCount = ((IData)(1U) 
                                           + vlSelf->__VactIterCount);
                __VpreTriggered.andNot(vlSelf->__VactTriggered, vlSelf->__VnbaTriggered);
                vlSelf->__VnbaTriggered.set(vlSelf->__VactTriggered);
                Vshift_reg___024root___eval_act(vlSelf);
            }
        }
        if (vlSelf->__VnbaTriggered.any()) {
            __VnbaContinue = 1U;
            if (VL_UNLIKELY((0x64U < __VnbaIterCount))) {
#ifdef VL_DEBUG
                Vshift_reg___024root___dump_triggers__nba(vlSelf);
#endif
                VL_FATAL_MT("vsrc/shift_reg.v", 1, "", "NBA region did not converge.");
            }
            __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
            Vshift_reg___024root___eval_nba(vlSelf);
        }
    }
}

#ifdef VL_DEBUG
void Vshift_reg___024root___eval_debug_assertions(Vshift_reg___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vshift_reg__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vshift_reg___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->contrl & 0xf8U))) {
        Verilated::overWidthError("contrl");}
    if (VL_UNLIKELY((vlSelf->datain & 0xfeU))) {
        Verilated::overWidthError("datain");}
    if (VL_UNLIKELY((vlSelf->clk & 0xfeU))) {
        Verilated::overWidthError("clk");}
}
#endif  // VL_DEBUG
