// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vfast_fadd4__Syms.h"


void Vfast_fadd4___024root__trace_chg_sub_0(Vfast_fadd4___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void Vfast_fadd4___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfast_fadd4___024root__trace_chg_top_0\n"); );
    // Init
    Vfast_fadd4___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vfast_fadd4___024root*>(voidSelf);
    Vfast_fadd4__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    Vfast_fadd4___024root__trace_chg_sub_0((&vlSymsp->TOP), bufp);
}

void Vfast_fadd4___024root__trace_chg_sub_0(Vfast_fadd4___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vfast_fadd4__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfast_fadd4___024root__trace_chg_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    bufp->chgCData(oldp+0,(vlSelf->a),4);
    bufp->chgCData(oldp+1,(vlSelf->b),4);
    bufp->chgBit(oldp+2,(vlSelf->cin));
    bufp->chgBit(oldp+3,(vlSelf->cout));
    bufp->chgCData(oldp+4,(vlSelf->sum),4);
    bufp->chgCData(oldp+5,(vlSelf->fast_fadd4__DOT__g),4);
    bufp->chgCData(oldp+6,(vlSelf->fast_fadd4__DOT__p),4);
    bufp->chgCData(oldp+7,(vlSelf->fast_fadd4__DOT__c),5);
}

void Vfast_fadd4___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfast_fadd4___024root__trace_cleanup\n"); );
    // Init
    Vfast_fadd4___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vfast_fadd4___024root*>(voidSelf);
    Vfast_fadd4__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VlUnpacked<CData/*0:0*/, 1> __Vm_traceActivity;
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        __Vm_traceActivity[__Vi0] = 0;
    }
    // Body
    vlSymsp->__Vm_activity = false;
    __Vm_traceActivity[0U] = 0U;
}
