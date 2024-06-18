// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vkeyboard_sim__Syms.h"


VL_ATTR_COLD void Vkeyboard_sim___024root__trace_init_sub__TOP__0(Vkeyboard_sim___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vkeyboard_sim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vkeyboard_sim___024root__trace_init_sub__TOP__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+18,"clk", false,-1);
    tracep->declBit(c+19,"clrn", false,-1);
    tracep->declBit(c+20,"nextdata_n", false,-1);
    tracep->declBus(c+21,"code", false,-1, 7,0);
    tracep->pushNamePrefix("keyboard_sim ");
    tracep->declBit(c+18,"clk", false,-1);
    tracep->declBit(c+19,"clrn", false,-1);
    tracep->declBit(c+20,"nextdata_n", false,-1);
    tracep->declBus(c+21,"code", false,-1, 7,0);
    tracep->declBus(c+1,"data", false,-1, 7,0);
    tracep->declBit(c+2,"ready", false,-1);
    tracep->declBit(c+3,"overflow", false,-1);
    tracep->declBit(c+22,"kbd_clk", false,-1);
    tracep->declBit(c+23,"kbd_data", false,-1);
    tracep->pushNamePrefix("inst ");
    tracep->declBit(c+18,"clk", false,-1);
    tracep->declBit(c+19,"clrn", false,-1);
    tracep->declBit(c+22,"ps2_clk", false,-1);
    tracep->declBit(c+23,"ps2_data", false,-1);
    tracep->declBit(c+20,"nextdata_n", false,-1);
    tracep->declBus(c+1,"data", false,-1, 7,0);
    tracep->declBit(c+2,"ready", false,-1);
    tracep->declBit(c+3,"overflow", false,-1);
    tracep->declBus(c+4,"buffer", false,-1, 9,0);
    for (int i = 0; i < 8; ++i) {
        tracep->declBus(c+5+i*1,"fifo", true,(i+0), 7,0);
    }
    tracep->declBus(c+13,"w_ptr", false,-1, 2,0);
    tracep->declBus(c+14,"r_ptr", false,-1, 2,0);
    tracep->declBus(c+15,"count", false,-1, 3,0);
    tracep->declBus(c+16,"ps2_clk_sync", false,-1, 2,0);
    tracep->declBit(c+17,"sampling", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("model ");
    tracep->declBit(c+22,"ps2_clk", false,-1);
    tracep->declBit(c+23,"ps2_data", false,-1);
    tracep->declBus(c+21,"code", false,-1, 7,0);
    tracep->declBus(c+24,"kbd_clk_period", false,-1, 31,0);
    tracep->declBus(c+25,"kbd_sendcode__Vstatic__i", false,-1, 31,0);
    tracep->declBus(c+26,"kbd_sendcode__Vstatic__send_buffer", false,-1, 10,0);
    tracep->popNamePrefix(2);
}

VL_ATTR_COLD void Vkeyboard_sim___024root__trace_init_top(Vkeyboard_sim___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vkeyboard_sim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vkeyboard_sim___024root__trace_init_top\n"); );
    // Body
    Vkeyboard_sim___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void Vkeyboard_sim___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vkeyboard_sim___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vkeyboard_sim___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void Vkeyboard_sim___024root__trace_register(Vkeyboard_sim___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vkeyboard_sim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vkeyboard_sim___024root__trace_register\n"); );
    // Body
    tracep->addFullCb(&Vkeyboard_sim___024root__trace_full_top_0, vlSelf);
    tracep->addChgCb(&Vkeyboard_sim___024root__trace_chg_top_0, vlSelf);
    tracep->addCleanupCb(&Vkeyboard_sim___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void Vkeyboard_sim___024root__trace_full_sub_0(Vkeyboard_sim___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vkeyboard_sim___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vkeyboard_sim___024root__trace_full_top_0\n"); );
    // Init
    Vkeyboard_sim___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vkeyboard_sim___024root*>(voidSelf);
    Vkeyboard_sim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vkeyboard_sim___024root__trace_full_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vkeyboard_sim___024root__trace_full_sub_0(Vkeyboard_sim___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vkeyboard_sim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vkeyboard_sim___024root__trace_full_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullCData(oldp+1,(vlSelf->keyboard_sim__DOT__inst__DOT__fifo
                            [vlSelf->keyboard_sim__DOT__inst__DOT__r_ptr]),8);
    bufp->fullBit(oldp+2,(vlSelf->keyboard_sim__DOT__ready));
    bufp->fullBit(oldp+3,(vlSelf->keyboard_sim__DOT__overflow));
    bufp->fullSData(oldp+4,(vlSelf->keyboard_sim__DOT__inst__DOT__buffer),10);
    bufp->fullCData(oldp+5,(vlSelf->keyboard_sim__DOT__inst__DOT__fifo[0]),8);
    bufp->fullCData(oldp+6,(vlSelf->keyboard_sim__DOT__inst__DOT__fifo[1]),8);
    bufp->fullCData(oldp+7,(vlSelf->keyboard_sim__DOT__inst__DOT__fifo[2]),8);
    bufp->fullCData(oldp+8,(vlSelf->keyboard_sim__DOT__inst__DOT__fifo[3]),8);
    bufp->fullCData(oldp+9,(vlSelf->keyboard_sim__DOT__inst__DOT__fifo[4]),8);
    bufp->fullCData(oldp+10,(vlSelf->keyboard_sim__DOT__inst__DOT__fifo[5]),8);
    bufp->fullCData(oldp+11,(vlSelf->keyboard_sim__DOT__inst__DOT__fifo[6]),8);
    bufp->fullCData(oldp+12,(vlSelf->keyboard_sim__DOT__inst__DOT__fifo[7]),8);
    bufp->fullCData(oldp+13,(vlSelf->keyboard_sim__DOT__inst__DOT__w_ptr),3);
    bufp->fullCData(oldp+14,(vlSelf->keyboard_sim__DOT__inst__DOT__r_ptr),3);
    bufp->fullCData(oldp+15,(vlSelf->keyboard_sim__DOT__inst__DOT__count),4);
    bufp->fullCData(oldp+16,(vlSelf->keyboard_sim__DOT__inst__DOT__ps2_clk_sync),3);
    bufp->fullBit(oldp+17,((IData)((4U == (6U & (IData)(vlSelf->keyboard_sim__DOT__inst__DOT__ps2_clk_sync))))));
    bufp->fullBit(oldp+18,(vlSelf->clk));
    bufp->fullBit(oldp+19,(vlSelf->clrn));
    bufp->fullBit(oldp+20,(vlSelf->nextdata_n));
    bufp->fullCData(oldp+21,(vlSelf->code),8);
    bufp->fullBit(oldp+22,(1U));
    bufp->fullBit(oldp+23,(vlSelf->keyboard_sim__DOT__kbd_data));
    bufp->fullIData(oldp+24,(0x3cU),32);
    bufp->fullIData(oldp+25,(vlSelf->keyboard_sim__DOT__model__DOT__kbd_sendcode__Vstatic__i),32);
    bufp->fullSData(oldp+26,(vlSelf->keyboard_sim__DOT__model__DOT__kbd_sendcode__Vstatic__send_buffer),11);
}
