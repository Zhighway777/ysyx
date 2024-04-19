// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vfast_fadd4.h for the primary calling header

#include "verilated.h"

#include "Vfast_fadd4__Syms.h"
#include "Vfast_fadd4___024root.h"

#ifdef VL_DEBUG
VL_ATTR_COLD void Vfast_fadd4___024root___dump_triggers__stl(Vfast_fadd4___024root* vlSelf);
#endif  // VL_DEBUG

VL_ATTR_COLD void Vfast_fadd4___024root___eval_triggers__stl(Vfast_fadd4___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vfast_fadd4__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfast_fadd4___024root___eval_triggers__stl\n"); );
    // Body
    vlSelf->__VstlTriggered.at(0U) = (0U == vlSelf->__VstlIterCount);
    vlSelf->__VstlTriggered.at(1U) = ((IData)(vlSelf->fast_fadd4__DOT__c) 
                                      != (IData)(vlSelf->__Vtrigrprev__TOP__fast_fadd4__DOT__c));
    vlSelf->__Vtrigrprev__TOP__fast_fadd4__DOT__c = vlSelf->fast_fadd4__DOT__c;
    if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->__VstlDidInit))))) {
        vlSelf->__VstlDidInit = 1U;
        vlSelf->__VstlTriggered.at(1U) = 1U;
    }
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vfast_fadd4___024root___dump_triggers__stl(vlSelf);
    }
#endif
}
