// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vkeyboard_sim__Syms.h"


void Vkeyboard_sim___024root__trace_chg_sub_0(Vkeyboard_sim___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void Vkeyboard_sim___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vkeyboard_sim___024root__trace_chg_top_0\n"); );
    // Init
    Vkeyboard_sim___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vkeyboard_sim___024root*>(voidSelf);
    Vkeyboard_sim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    Vkeyboard_sim___024root__trace_chg_sub_0((&vlSymsp->TOP), bufp);
}

void Vkeyboard_sim___024root__trace_chg_sub_0(Vkeyboard_sim___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vkeyboard_sim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vkeyboard_sim___024root__trace_chg_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[1U])) {
        bufp->chgCData(oldp+0,(vlSelf->keyboard_sim__DOT__inst__DOT__fifo
                               [vlSelf->keyboard_sim__DOT__inst__DOT__r_ptr]),8);
        bufp->chgBit(oldp+1,(vlSelf->keyboard_sim__DOT__ready));
        bufp->chgBit(oldp+2,(vlSelf->keyboard_sim__DOT__overflow));
        bufp->chgSData(oldp+3,(vlSelf->keyboard_sim__DOT__inst__DOT__buffer),10);
        bufp->chgCData(oldp+4,(vlSelf->keyboard_sim__DOT__inst__DOT__fifo[0]),8);
        bufp->chgCData(oldp+5,(vlSelf->keyboard_sim__DOT__inst__DOT__fifo[1]),8);
        bufp->chgCData(oldp+6,(vlSelf->keyboard_sim__DOT__inst__DOT__fifo[2]),8);
        bufp->chgCData(oldp+7,(vlSelf->keyboard_sim__DOT__inst__DOT__fifo[3]),8);
        bufp->chgCData(oldp+8,(vlSelf->keyboard_sim__DOT__inst__DOT__fifo[4]),8);
        bufp->chgCData(oldp+9,(vlSelf->keyboard_sim__DOT__inst__DOT__fifo[5]),8);
        bufp->chgCData(oldp+10,(vlSelf->keyboard_sim__DOT__inst__DOT__fifo[6]),8);
        bufp->chgCData(oldp+11,(vlSelf->keyboard_sim__DOT__inst__DOT__fifo[7]),8);
        bufp->chgCData(oldp+12,(vlSelf->keyboard_sim__DOT__inst__DOT__w_ptr),3);
        bufp->chgCData(oldp+13,(vlSelf->keyboard_sim__DOT__inst__DOT__r_ptr),3);
        bufp->chgCData(oldp+14,(vlSelf->keyboard_sim__DOT__inst__DOT__count),4);
        bufp->chgCData(oldp+15,(vlSelf->keyboard_sim__DOT__inst__DOT__ps2_clk_sync),3);
        bufp->chgBit(oldp+16,((IData)((4U == (6U & (IData)(vlSelf->keyboard_sim__DOT__inst__DOT__ps2_clk_sync))))));
    }
    bufp->chgBit(oldp+17,(vlSelf->clk));
    bufp->chgBit(oldp+18,(vlSelf->clrn));
    bufp->chgBit(oldp+19,(vlSelf->nextdata_n));
    bufp->chgCData(oldp+20,(vlSelf->code),8);
}

void Vkeyboard_sim___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vkeyboard_sim___024root__trace_cleanup\n"); );
    // Init
    Vkeyboard_sim___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vkeyboard_sim___024root*>(voidSelf);
    Vkeyboard_sim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
}
