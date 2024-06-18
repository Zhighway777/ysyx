// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vps2_keyboard_model__Syms.h"


VL_ATTR_COLD void Vps2_keyboard_model___024root__trace_init_sub__TOP__0(Vps2_keyboard_model___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vps2_keyboard_model__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vps2_keyboard_model___024root__trace_init_sub__TOP__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+1,"ps2_clk", false,-1);
    tracep->declBit(c+2,"ps2_data", false,-1);
    tracep->declBus(c+3,"code", false,-1, 7,0);
    tracep->pushNamePrefix("ps2_keyboard_model ");
    tracep->declBit(c+1,"ps2_clk", false,-1);
    tracep->declBit(c+2,"ps2_data", false,-1);
    tracep->declBus(c+3,"code", false,-1, 7,0);
    tracep->declBus(c+4,"kbd_clk_period", false,-1, 31,0);
    tracep->declBus(c+5,"kbd_sendcode__Vstatic__i", false,-1, 31,0);
    tracep->declBus(c+6,"kbd_sendcode__Vstatic__send_buffer", false,-1, 10,0);
    tracep->popNamePrefix(1);
}

VL_ATTR_COLD void Vps2_keyboard_model___024root__trace_init_top(Vps2_keyboard_model___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vps2_keyboard_model__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vps2_keyboard_model___024root__trace_init_top\n"); );
    // Body
    Vps2_keyboard_model___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void Vps2_keyboard_model___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vps2_keyboard_model___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vps2_keyboard_model___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void Vps2_keyboard_model___024root__trace_register(Vps2_keyboard_model___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vps2_keyboard_model__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vps2_keyboard_model___024root__trace_register\n"); );
    // Body
    tracep->addFullCb(&Vps2_keyboard_model___024root__trace_full_top_0, vlSelf);
    tracep->addChgCb(&Vps2_keyboard_model___024root__trace_chg_top_0, vlSelf);
    tracep->addCleanupCb(&Vps2_keyboard_model___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void Vps2_keyboard_model___024root__trace_full_sub_0(Vps2_keyboard_model___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vps2_keyboard_model___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vps2_keyboard_model___024root__trace_full_top_0\n"); );
    // Init
    Vps2_keyboard_model___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vps2_keyboard_model___024root*>(voidSelf);
    Vps2_keyboard_model__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vps2_keyboard_model___024root__trace_full_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vps2_keyboard_model___024root__trace_full_sub_0(Vps2_keyboard_model___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vps2_keyboard_model__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vps2_keyboard_model___024root__trace_full_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullBit(oldp+1,(vlSelf->ps2_clk));
    bufp->fullBit(oldp+2,(vlSelf->ps2_data));
    bufp->fullCData(oldp+3,(vlSelf->code),8);
    bufp->fullIData(oldp+4,(0x3cU),32);
    bufp->fullIData(oldp+5,(vlSelf->ps2_keyboard_model__DOT__kbd_sendcode__Vstatic__i),32);
    bufp->fullSData(oldp+6,(vlSelf->ps2_keyboard_model__DOT__kbd_sendcode__Vstatic__send_buffer),11);
}
