// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vfast_fadd4.h for the primary calling header

#include "verilated.h"

#include "Vfast_fadd4__Syms.h"
#include "Vfast_fadd4___024root.h"

#ifdef VL_DEBUG
VL_ATTR_COLD void Vfast_fadd4___024root___dump_triggers__ico(Vfast_fadd4___024root* vlSelf);
#endif  // VL_DEBUG

void Vfast_fadd4___024root___eval_triggers__ico(Vfast_fadd4___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vfast_fadd4__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfast_fadd4___024root___eval_triggers__ico\n"); );
    // Body
    vlSelf->__VicoTriggered.at(0U) = (0U == vlSelf->__VicoIterCount);
    vlSelf->__VicoTriggered.at(1U) = ((IData)(vlSelf->fast_fadd4__DOT__c) 
                                      != (IData)(vlSelf->__Vtrigrprev__TOP__fast_fadd4__DOT__c));
    vlSelf->__Vtrigrprev__TOP__fast_fadd4__DOT__c = vlSelf->fast_fadd4__DOT__c;
    if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->__VicoDidInit))))) {
        vlSelf->__VicoDidInit = 1U;
        vlSelf->__VicoTriggered.at(1U) = 1U;
    }
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vfast_fadd4___024root___dump_triggers__ico(vlSelf);
    }
#endif
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vfast_fadd4___024root___dump_triggers__act(Vfast_fadd4___024root* vlSelf);
#endif  // VL_DEBUG

void Vfast_fadd4___024root___eval_triggers__act(Vfast_fadd4___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vfast_fadd4__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfast_fadd4___024root___eval_triggers__act\n"); );
    // Body
    vlSelf->__VactTriggered.at(0U) = ((IData)(vlSelf->fast_fadd4__DOT__c) 
                                      != (IData)(vlSelf->__Vtrigrprev__TOP__fast_fadd4__DOT__c));
    vlSelf->__Vtrigrprev__TOP__fast_fadd4__DOT__c = vlSelf->fast_fadd4__DOT__c;
    if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->__VactDidInit))))) {
        vlSelf->__VactDidInit = 1U;
        vlSelf->__VactTriggered.at(0U) = 1U;
    }
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vfast_fadd4___024root___dump_triggers__act(vlSelf);
    }
#endif
}
