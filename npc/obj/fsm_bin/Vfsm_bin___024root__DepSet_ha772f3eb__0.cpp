// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vfsm_bin.h for the primary calling header

#include "verilated.h"

#include "Vfsm_bin__Syms.h"
#include "Vfsm_bin___024root.h"

#ifdef VL_DEBUG
VL_ATTR_COLD void Vfsm_bin___024root___dump_triggers__ico(Vfsm_bin___024root* vlSelf);
#endif  // VL_DEBUG

void Vfsm_bin___024root___eval_triggers__ico(Vfsm_bin___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vfsm_bin__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfsm_bin___024root___eval_triggers__ico\n"); );
    // Body
    vlSelf->__VicoTriggered.at(0U) = (0U == vlSelf->__VicoIterCount);
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vfsm_bin___024root___dump_triggers__ico(vlSelf);
    }
#endif
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vfsm_bin___024root___dump_triggers__act(Vfsm_bin___024root* vlSelf);
#endif  // VL_DEBUG

void Vfsm_bin___024root___eval_triggers__act(Vfsm_bin___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vfsm_bin__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfsm_bin___024root___eval_triggers__act\n"); );
    // Body
    vlSelf->__VactTriggered.at(0U) = (((IData)(vlSelf->clk) 
                                       & (~ (IData)(vlSelf->__Vtrigrprev__TOP__clk))) 
                                      | ((IData)(vlSelf->rst) 
                                         & (~ (IData)(vlSelf->__Vtrigrprev__TOP__rst))));
    vlSelf->__Vtrigrprev__TOP__clk = vlSelf->clk;
    vlSelf->__Vtrigrprev__TOP__rst = vlSelf->rst;
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vfsm_bin___024root___dump_triggers__act(vlSelf);
    }
#endif
}
