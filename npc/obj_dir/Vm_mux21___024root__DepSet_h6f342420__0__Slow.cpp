// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vm_mux21.h for the primary calling header

#include "verilated.h"

#include "Vm_mux21__Syms.h"
#include "Vm_mux21___024root.h"

#ifdef VL_DEBUG
VL_ATTR_COLD void Vm_mux21___024root___dump_triggers__stl(Vm_mux21___024root* vlSelf);
#endif  // VL_DEBUG

VL_ATTR_COLD void Vm_mux21___024root___eval_triggers__stl(Vm_mux21___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vm_mux21__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vm_mux21___024root___eval_triggers__stl\n"); );
    // Body
    vlSelf->__VstlTriggered.at(0U) = (0U == vlSelf->__VstlIterCount);
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vm_mux21___024root___dump_triggers__stl(vlSelf);
    }
#endif
}
