// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Valu__Syms.h"


VL_ATTR_COLD void Valu___024root__trace_init_sub__TOP__0(Valu___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Valu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Valu___024root__trace_init_sub__TOP__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+4,"data_a", false,-1, 3,0);
    tracep->declBus(c+5,"data_b", false,-1, 3,0);
    tracep->declBus(c+6,"sel", false,-1, 2,0);
    tracep->declBus(c+7,"data_out", false,-1, 3,0);
    tracep->declBit(c+8,"zero", false,-1);
    tracep->declBit(c+9,"overflow", false,-1);
    tracep->declBit(c+10,"carry", false,-1);
    tracep->pushNamePrefix("alu ");
    tracep->declBus(c+4,"data_a", false,-1, 3,0);
    tracep->declBus(c+5,"data_b", false,-1, 3,0);
    tracep->declBus(c+6,"sel", false,-1, 2,0);
    tracep->declBus(c+7,"data_out", false,-1, 3,0);
    tracep->declBit(c+8,"zero", false,-1);
    tracep->declBit(c+9,"overflow", false,-1);
    tracep->declBit(c+10,"carry", false,-1);
    tracep->declBus(c+1,"add_out", false,-1, 3,0);
    tracep->declBit(c+2,"add_sub_sel", false,-1);
    tracep->pushNamePrefix("my_addsub ");
    tracep->declBus(c+4,"a", false,-1, 3,0);
    tracep->declBus(c+5,"b", false,-1, 3,0);
    tracep->declBit(c+2,"cin", false,-1);
    tracep->declBus(c+1,"out_s", false,-1, 3,0);
    tracep->declBit(c+10,"out_c", false,-1);
    tracep->declBit(c+8,"zero", false,-1);
    tracep->declBit(c+9,"overflow", false,-1);
    tracep->declBus(c+3,"t_add_cin", false,-1, 3,0);
    tracep->popNamePrefix(2);
}

VL_ATTR_COLD void Valu___024root__trace_init_top(Valu___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Valu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Valu___024root__trace_init_top\n"); );
    // Body
    Valu___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void Valu___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Valu___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Valu___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void Valu___024root__trace_register(Valu___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Valu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Valu___024root__trace_register\n"); );
    // Body
    tracep->addFullCb(&Valu___024root__trace_full_top_0, vlSelf);
    tracep->addChgCb(&Valu___024root__trace_chg_top_0, vlSelf);
    tracep->addCleanupCb(&Valu___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void Valu___024root__trace_full_sub_0(Valu___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Valu___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Valu___024root__trace_full_top_0\n"); );
    // Init
    Valu___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Valu___024root*>(voidSelf);
    Valu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Valu___024root__trace_full_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Valu___024root__trace_full_sub_0(Valu___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Valu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Valu___024root__trace_full_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullCData(oldp+1,(vlSelf->alu__DOT__add_out),4);
    bufp->fullBit(oldp+2,(vlSelf->alu__DOT__add_sub_sel));
    bufp->fullCData(oldp+3,(vlSelf->alu__DOT__my_addsub__DOT__t_add_cin),4);
    bufp->fullCData(oldp+4,(vlSelf->data_a),4);
    bufp->fullCData(oldp+5,(vlSelf->data_b),4);
    bufp->fullCData(oldp+6,(vlSelf->sel),3);
    bufp->fullCData(oldp+7,(vlSelf->data_out),4);
    bufp->fullBit(oldp+8,(vlSelf->zero));
    bufp->fullBit(oldp+9,(vlSelf->overflow));
    bufp->fullBit(oldp+10,(vlSelf->carry));
}
