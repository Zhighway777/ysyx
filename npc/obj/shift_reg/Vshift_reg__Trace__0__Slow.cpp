// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vshift_reg__Syms.h"


VL_ATTR_COLD void Vshift_reg___024root__trace_init_sub__TOP__0(Vshift_reg___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vshift_reg__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vshift_reg___024root__trace_init_sub__TOP__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+1,"contrl", false,-1, 2,0);
    tracep->declBit(c+2,"datain", false,-1);
    tracep->declBus(c+3,"setdata", false,-1, 7,0);
    tracep->declBit(c+4,"clk", false,-1);
    tracep->declBus(c+5,"out", false,-1, 7,0);
    tracep->pushNamePrefix("shift_reg ");
    tracep->declBus(c+1,"contrl", false,-1, 2,0);
    tracep->declBit(c+2,"datain", false,-1);
    tracep->declBus(c+3,"setdata", false,-1, 7,0);
    tracep->declBit(c+4,"clk", false,-1);
    tracep->declBus(c+5,"out", false,-1, 7,0);
    tracep->declBus(c+6,"Q", false,-1, 7,0);
    tracep->popNamePrefix(1);
}

VL_ATTR_COLD void Vshift_reg___024root__trace_init_top(Vshift_reg___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vshift_reg__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vshift_reg___024root__trace_init_top\n"); );
    // Body
    Vshift_reg___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void Vshift_reg___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vshift_reg___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vshift_reg___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void Vshift_reg___024root__trace_register(Vshift_reg___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vshift_reg__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vshift_reg___024root__trace_register\n"); );
    // Body
    tracep->addFullCb(&Vshift_reg___024root__trace_full_top_0, vlSelf);
    tracep->addChgCb(&Vshift_reg___024root__trace_chg_top_0, vlSelf);
    tracep->addCleanupCb(&Vshift_reg___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void Vshift_reg___024root__trace_full_sub_0(Vshift_reg___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vshift_reg___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vshift_reg___024root__trace_full_top_0\n"); );
    // Init
    Vshift_reg___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vshift_reg___024root*>(voidSelf);
    Vshift_reg__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vshift_reg___024root__trace_full_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vshift_reg___024root__trace_full_sub_0(Vshift_reg___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vshift_reg__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vshift_reg___024root__trace_full_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullCData(oldp+1,(vlSelf->contrl),3);
    bufp->fullBit(oldp+2,(vlSelf->datain));
    bufp->fullCData(oldp+3,(vlSelf->setdata),8);
    bufp->fullBit(oldp+4,(vlSelf->clk));
    bufp->fullCData(oldp+5,(vlSelf->out),8);
    bufp->fullCData(oldp+6,(vlSelf->shift_reg__DOT__Q),8);
}
