// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vadd_sub_4__Syms.h"


VL_ATTR_COLD void Vadd_sub_4___024root__trace_init_sub__TOP__0(Vadd_sub_4___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vadd_sub_4__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vadd_sub_4___024root__trace_init_sub__TOP__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+1,"a", false,-1, 3,0);
    tracep->declBus(c+2,"b", false,-1, 3,0);
    tracep->declBit(c+3,"cin", false,-1);
    tracep->declBus(c+4,"out_s", false,-1, 3,0);
    tracep->declBit(c+5,"out_c", false,-1);
    tracep->declBit(c+6,"zero", false,-1);
    tracep->declBit(c+7,"overflow", false,-1);
    tracep->pushNamePrefix("add_sub_4 ");
    tracep->declBus(c+1,"a", false,-1, 3,0);
    tracep->declBus(c+2,"b", false,-1, 3,0);
    tracep->declBit(c+3,"cin", false,-1);
    tracep->declBus(c+4,"out_s", false,-1, 3,0);
    tracep->declBit(c+5,"out_c", false,-1);
    tracep->declBit(c+6,"zero", false,-1);
    tracep->declBit(c+7,"overflow", false,-1);
    tracep->declBus(c+8,"t_add_cin", false,-1, 3,0);
    tracep->popNamePrefix(1);
}

VL_ATTR_COLD void Vadd_sub_4___024root__trace_init_top(Vadd_sub_4___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vadd_sub_4__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vadd_sub_4___024root__trace_init_top\n"); );
    // Body
    Vadd_sub_4___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void Vadd_sub_4___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vadd_sub_4___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vadd_sub_4___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void Vadd_sub_4___024root__trace_register(Vadd_sub_4___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vadd_sub_4__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vadd_sub_4___024root__trace_register\n"); );
    // Body
    tracep->addFullCb(&Vadd_sub_4___024root__trace_full_top_0, vlSelf);
    tracep->addChgCb(&Vadd_sub_4___024root__trace_chg_top_0, vlSelf);
    tracep->addCleanupCb(&Vadd_sub_4___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void Vadd_sub_4___024root__trace_full_sub_0(Vadd_sub_4___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vadd_sub_4___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vadd_sub_4___024root__trace_full_top_0\n"); );
    // Init
    Vadd_sub_4___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vadd_sub_4___024root*>(voidSelf);
    Vadd_sub_4__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vadd_sub_4___024root__trace_full_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vadd_sub_4___024root__trace_full_sub_0(Vadd_sub_4___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vadd_sub_4__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vadd_sub_4___024root__trace_full_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullCData(oldp+1,(vlSelf->a),4);
    bufp->fullCData(oldp+2,(vlSelf->b),4);
    bufp->fullBit(oldp+3,(vlSelf->cin));
    bufp->fullCData(oldp+4,(vlSelf->out_s),4);
    bufp->fullBit(oldp+5,(vlSelf->out_c));
    bufp->fullBit(oldp+6,(vlSelf->zero));
    bufp->fullBit(oldp+7,(vlSelf->overflow));
    bufp->fullCData(oldp+8,(vlSelf->add_sub_4__DOT__t_add_cin),4);
}
