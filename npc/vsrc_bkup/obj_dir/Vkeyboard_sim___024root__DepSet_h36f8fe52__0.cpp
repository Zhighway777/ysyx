// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vkeyboard_sim.h for the primary calling header

#include "verilated.h"

#include "Vkeyboard_sim__Syms.h"
#include "Vkeyboard_sim___024root.h"

#ifdef VL_DEBUG
VL_ATTR_COLD void Vkeyboard_sim___024root___dump_triggers__act(Vkeyboard_sim___024root* vlSelf);
#endif  // VL_DEBUG

void Vkeyboard_sim___024root___eval_triggers__act(Vkeyboard_sim___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vkeyboard_sim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vkeyboard_sim___024root___eval_triggers__act\n"); );
    // Body
    vlSelf->__VactTriggered.at(0U) = ((IData)(vlSelf->clk) 
                                      & (~ (IData)(vlSelf->__Vtrigrprev__TOP__clk)));
    vlSelf->__Vtrigrprev__TOP__clk = vlSelf->clk;
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vkeyboard_sim___024root___dump_triggers__act(vlSelf);
    }
#endif
}
