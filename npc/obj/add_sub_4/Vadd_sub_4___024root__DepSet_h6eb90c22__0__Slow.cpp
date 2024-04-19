// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vadd_sub_4.h for the primary calling header

#include "verilated.h"

#include "Vadd_sub_4___024root.h"

VL_ATTR_COLD void Vadd_sub_4___024root___eval_static(Vadd_sub_4___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vadd_sub_4__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vadd_sub_4___024root___eval_static\n"); );
}

VL_ATTR_COLD void Vadd_sub_4___024root___eval_initial(Vadd_sub_4___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vadd_sub_4__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vadd_sub_4___024root___eval_initial\n"); );
}

VL_ATTR_COLD void Vadd_sub_4___024root___eval_final(Vadd_sub_4___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vadd_sub_4__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vadd_sub_4___024root___eval_final\n"); );
}

VL_ATTR_COLD void Vadd_sub_4___024root___eval_triggers__stl(Vadd_sub_4___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void Vadd_sub_4___024root___dump_triggers__stl(Vadd_sub_4___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD void Vadd_sub_4___024root___eval_stl(Vadd_sub_4___024root* vlSelf);

VL_ATTR_COLD void Vadd_sub_4___024root___eval_settle(Vadd_sub_4___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vadd_sub_4__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vadd_sub_4___024root___eval_settle\n"); );
    // Init
    CData/*0:0*/ __VstlContinue;
    // Body
    vlSelf->__VstlIterCount = 0U;
    __VstlContinue = 1U;
    while (__VstlContinue) {
        __VstlContinue = 0U;
        Vadd_sub_4___024root___eval_triggers__stl(vlSelf);
        if (vlSelf->__VstlTriggered.any()) {
            __VstlContinue = 1U;
            if (VL_UNLIKELY((0x64U < vlSelf->__VstlIterCount))) {
#ifdef VL_DEBUG
                Vadd_sub_4___024root___dump_triggers__stl(vlSelf);
#endif
                VL_FATAL_MT("vsrc/add_sub_4.v", 1, "", "Settle region did not converge.");
            }
            vlSelf->__VstlIterCount = ((IData)(1U) 
                                       + vlSelf->__VstlIterCount);
            Vadd_sub_4___024root___eval_stl(vlSelf);
        }
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vadd_sub_4___024root___dump_triggers__stl(Vadd_sub_4___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vadd_sub_4__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vadd_sub_4___024root___dump_triggers__stl\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VstlTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if (vlSelf->__VstlTriggered.at(0U)) {
        VL_DBG_MSGF("         'stl' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

void Vadd_sub_4___024root___ico_sequent__TOP__0(Vadd_sub_4___024root* vlSelf);

VL_ATTR_COLD void Vadd_sub_4___024root___eval_stl(Vadd_sub_4___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vadd_sub_4__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vadd_sub_4___024root___eval_stl\n"); );
    // Body
    if (vlSelf->__VstlTriggered.at(0U)) {
        Vadd_sub_4___024root___ico_sequent__TOP__0(vlSelf);
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vadd_sub_4___024root___dump_triggers__ico(Vadd_sub_4___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vadd_sub_4__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vadd_sub_4___024root___dump_triggers__ico\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VicoTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if (vlSelf->__VicoTriggered.at(0U)) {
        VL_DBG_MSGF("         'ico' region trigger index 0 is active: Internal 'ico' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vadd_sub_4___024root___dump_triggers__act(Vadd_sub_4___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vadd_sub_4__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vadd_sub_4___024root___dump_triggers__act\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VactTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vadd_sub_4___024root___dump_triggers__nba(Vadd_sub_4___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vadd_sub_4__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vadd_sub_4___024root___dump_triggers__nba\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VnbaTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vadd_sub_4___024root___ctor_var_reset(Vadd_sub_4___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vadd_sub_4__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vadd_sub_4___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->a = VL_RAND_RESET_I(4);
    vlSelf->b = VL_RAND_RESET_I(4);
    vlSelf->cin = VL_RAND_RESET_I(1);
    vlSelf->out_s = VL_RAND_RESET_I(4);
    vlSelf->out_c = VL_RAND_RESET_I(1);
    vlSelf->zero = VL_RAND_RESET_I(1);
    vlSelf->overflow = VL_RAND_RESET_I(1);
    vlSelf->add_sub_4__DOT__t_add_cin = VL_RAND_RESET_I(4);
}
