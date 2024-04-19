// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vfast_fadd4__Syms.h"


VL_ATTR_COLD void Vfast_fadd4___024root__trace_init_sub__TOP__0(Vfast_fadd4___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vfast_fadd4__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfast_fadd4___024root__trace_init_sub__TOP__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+1,"a", false,-1, 3,0);
    tracep->declBus(c+2,"b", false,-1, 3,0);
    tracep->declBit(c+3,"cin", false,-1);
    tracep->declBit(c+4,"cout", false,-1);
    tracep->declBus(c+5,"sum", false,-1, 3,0);
    tracep->pushNamePrefix("fast_fadd4 ");
    tracep->declBus(c+1,"a", false,-1, 3,0);
    tracep->declBus(c+2,"b", false,-1, 3,0);
    tracep->declBit(c+3,"cin", false,-1);
    tracep->declBit(c+4,"cout", false,-1);
    tracep->declBus(c+5,"sum", false,-1, 3,0);
    tracep->declBus(c+6,"g", false,-1, 3,0);
    tracep->declBus(c+7,"p", false,-1, 3,0);
    tracep->declBus(c+8,"c", false,-1, 4,0);
    tracep->popNamePrefix(1);
}

VL_ATTR_COLD void Vfast_fadd4___024root__trace_init_top(Vfast_fadd4___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vfast_fadd4__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfast_fadd4___024root__trace_init_top\n"); );
    // Body
    Vfast_fadd4___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void Vfast_fadd4___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vfast_fadd4___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vfast_fadd4___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void Vfast_fadd4___024root__trace_register(Vfast_fadd4___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vfast_fadd4__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfast_fadd4___024root__trace_register\n"); );
    // Body
    tracep->addFullCb(&Vfast_fadd4___024root__trace_full_top_0, vlSelf);
    tracep->addChgCb(&Vfast_fadd4___024root__trace_chg_top_0, vlSelf);
    tracep->addCleanupCb(&Vfast_fadd4___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void Vfast_fadd4___024root__trace_full_sub_0(Vfast_fadd4___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vfast_fadd4___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfast_fadd4___024root__trace_full_top_0\n"); );
    // Init
    Vfast_fadd4___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vfast_fadd4___024root*>(voidSelf);
    Vfast_fadd4__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vfast_fadd4___024root__trace_full_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vfast_fadd4___024root__trace_full_sub_0(Vfast_fadd4___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vfast_fadd4__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfast_fadd4___024root__trace_full_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullCData(oldp+1,(vlSelf->a),4);
    bufp->fullCData(oldp+2,(vlSelf->b),4);
    bufp->fullBit(oldp+3,(vlSelf->cin));
    bufp->fullBit(oldp+4,(vlSelf->cout));
    bufp->fullCData(oldp+5,(vlSelf->sum),4);
    bufp->fullCData(oldp+6,(vlSelf->fast_fadd4__DOT__g),4);
    bufp->fullCData(oldp+7,(vlSelf->fast_fadd4__DOT__p),4);
    bufp->fullCData(oldp+8,(vlSelf->fast_fadd4__DOT__c),5);
}
