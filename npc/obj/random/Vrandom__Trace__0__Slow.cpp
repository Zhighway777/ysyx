// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vrandom__Syms.h"


VL_ATTR_COLD void Vrandom___024root__trace_init_sub__TOP__0(Vrandom___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vrandom__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vrandom___024root__trace_init_sub__TOP__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+1,"clk", false,-1);
    tracep->declBus(c+2,"rand_num", false,-1, 7,0);
    tracep->pushNamePrefix("random ");
    tracep->declBit(c+1,"clk", false,-1);
    tracep->declBus(c+2,"rand_num", false,-1, 7,0);
    tracep->declBit(c+3,"left_in", false,-1);
    tracep->declBus(c+4,"Q", false,-1, 7,0);
    tracep->popNamePrefix(1);
}

VL_ATTR_COLD void Vrandom___024root__trace_init_top(Vrandom___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vrandom__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vrandom___024root__trace_init_top\n"); );
    // Body
    Vrandom___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void Vrandom___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vrandom___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vrandom___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void Vrandom___024root__trace_register(Vrandom___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vrandom__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vrandom___024root__trace_register\n"); );
    // Body
    tracep->addFullCb(&Vrandom___024root__trace_full_top_0, vlSelf);
    tracep->addChgCb(&Vrandom___024root__trace_chg_top_0, vlSelf);
    tracep->addCleanupCb(&Vrandom___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void Vrandom___024root__trace_full_sub_0(Vrandom___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vrandom___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vrandom___024root__trace_full_top_0\n"); );
    // Init
    Vrandom___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vrandom___024root*>(voidSelf);
    Vrandom__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vrandom___024root__trace_full_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vrandom___024root__trace_full_sub_0(Vrandom___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vrandom__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vrandom___024root__trace_full_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullBit(oldp+1,(vlSelf->clk));
    bufp->fullCData(oldp+2,(vlSelf->rand_num),8);
    bufp->fullBit(oldp+3,(vlSelf->random__DOT__left_in));
    bufp->fullCData(oldp+4,(vlSelf->random__DOT__Q),8);
}
