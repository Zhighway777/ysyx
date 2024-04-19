// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vfast_fadd4.h for the primary calling header

#include "verilated.h"

#include "Vfast_fadd4___024root.h"

VL_ATTR_COLD void Vfast_fadd4___024root___eval_static(Vfast_fadd4___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vfast_fadd4__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfast_fadd4___024root___eval_static\n"); );
}

VL_ATTR_COLD void Vfast_fadd4___024root___eval_initial(Vfast_fadd4___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vfast_fadd4__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfast_fadd4___024root___eval_initial\n"); );
    // Body
    vlSelf->__Vtrigrprev__TOP__fast_fadd4__DOT__c = vlSelf->fast_fadd4__DOT__c;
}

VL_ATTR_COLD void Vfast_fadd4___024root___eval_final(Vfast_fadd4___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vfast_fadd4__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfast_fadd4___024root___eval_final\n"); );
}

VL_ATTR_COLD void Vfast_fadd4___024root___eval_triggers__stl(Vfast_fadd4___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void Vfast_fadd4___024root___dump_triggers__stl(Vfast_fadd4___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD void Vfast_fadd4___024root___eval_stl(Vfast_fadd4___024root* vlSelf);

VL_ATTR_COLD void Vfast_fadd4___024root___eval_settle(Vfast_fadd4___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vfast_fadd4__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfast_fadd4___024root___eval_settle\n"); );
    // Init
    CData/*0:0*/ __VstlContinue;
    // Body
    vlSelf->__VstlIterCount = 0U;
    __VstlContinue = 1U;
    while (__VstlContinue) {
        __VstlContinue = 0U;
        Vfast_fadd4___024root___eval_triggers__stl(vlSelf);
        if (vlSelf->__VstlTriggered.any()) {
            __VstlContinue = 1U;
            if (VL_UNLIKELY((0x64U < vlSelf->__VstlIterCount))) {
#ifdef VL_DEBUG
                Vfast_fadd4___024root___dump_triggers__stl(vlSelf);
#endif
                VL_FATAL_MT("vsrc/fast_fadd4.v", 1, "", "Settle region did not converge.");
            }
            vlSelf->__VstlIterCount = ((IData)(1U) 
                                       + vlSelf->__VstlIterCount);
            Vfast_fadd4___024root___eval_stl(vlSelf);
        }
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vfast_fadd4___024root___dump_triggers__stl(Vfast_fadd4___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vfast_fadd4__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfast_fadd4___024root___dump_triggers__stl\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VstlTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if (vlSelf->__VstlTriggered.at(0U)) {
        VL_DBG_MSGF("         'stl' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
    if (vlSelf->__VstlTriggered.at(1U)) {
        VL_DBG_MSGF("         'stl' region trigger index 1 is active: @([hybrid] fast_fadd4.c)\n");
    }
}
#endif  // VL_DEBUG

void Vfast_fadd4___024root___ico_sequent__TOP__0(Vfast_fadd4___024root* vlSelf);
void Vfast_fadd4___024root___ico_comb__TOP__0(Vfast_fadd4___024root* vlSelf);

VL_ATTR_COLD void Vfast_fadd4___024root___eval_stl(Vfast_fadd4___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vfast_fadd4__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfast_fadd4___024root___eval_stl\n"); );
    // Body
    if (vlSelf->__VstlTriggered.at(0U)) {
        Vfast_fadd4___024root___ico_sequent__TOP__0(vlSelf);
    }
    if ((vlSelf->__VstlTriggered.at(0U) | vlSelf->__VstlTriggered.at(1U))) {
        Vfast_fadd4___024root___ico_comb__TOP__0(vlSelf);
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vfast_fadd4___024root___dump_triggers__ico(Vfast_fadd4___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vfast_fadd4__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfast_fadd4___024root___dump_triggers__ico\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VicoTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if (vlSelf->__VicoTriggered.at(0U)) {
        VL_DBG_MSGF("         'ico' region trigger index 0 is active: Internal 'ico' trigger - first iteration\n");
    }
    if (vlSelf->__VicoTriggered.at(1U)) {
        VL_DBG_MSGF("         'ico' region trigger index 1 is active: @([hybrid] fast_fadd4.c)\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vfast_fadd4___024root___dump_triggers__act(Vfast_fadd4___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vfast_fadd4__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfast_fadd4___024root___dump_triggers__act\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VactTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if (vlSelf->__VactTriggered.at(0U)) {
        VL_DBG_MSGF("         'act' region trigger index 0 is active: @([hybrid] fast_fadd4.c)\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vfast_fadd4___024root___dump_triggers__nba(Vfast_fadd4___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vfast_fadd4__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfast_fadd4___024root___dump_triggers__nba\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VnbaTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if (vlSelf->__VnbaTriggered.at(0U)) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @([hybrid] fast_fadd4.c)\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vfast_fadd4___024root___ctor_var_reset(Vfast_fadd4___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vfast_fadd4__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfast_fadd4___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->a = VL_RAND_RESET_I(4);
    vlSelf->b = VL_RAND_RESET_I(4);
    vlSelf->cin = VL_RAND_RESET_I(1);
    vlSelf->cout = VL_RAND_RESET_I(1);
    vlSelf->sum = VL_RAND_RESET_I(4);
    vlSelf->fast_fadd4__DOT__g = VL_RAND_RESET_I(4);
    vlSelf->fast_fadd4__DOT__p = VL_RAND_RESET_I(4);
    vlSelf->fast_fadd4__DOT__c = VL_RAND_RESET_I(5);
    vlSelf->__Vtrigrprev__TOP__fast_fadd4__DOT__c = VL_RAND_RESET_I(5);
    vlSelf->__VstlDidInit = 0;
    vlSelf->__VicoDidInit = 0;
    vlSelf->__VactDidInit = 0;
}
