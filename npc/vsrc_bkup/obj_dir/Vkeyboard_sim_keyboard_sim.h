// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vkeyboard_sim.h for the primary calling header

#ifndef VERILATED_VKEYBOARD_SIM_KEYBOARD_SIM_H_
#define VERILATED_VKEYBOARD_SIM_KEYBOARD_SIM_H_  // guard

#include "verilated.h"

class Vkeyboard_sim__Syms;

class Vkeyboard_sim_keyboard_sim final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(clk,0,0);
    VL_IN8(clrn,0,0);
    VL_IN8(nextdata_n,0,0);
    VL_IN8(code,7,0);
    CData/*0:0*/ __PVT__ready;
    CData/*0:0*/ __PVT__overflow;
    CData/*0:0*/ __PVT__kbd_data;
    CData/*2:0*/ __PVT__inst__DOT__w_ptr;
    CData/*2:0*/ __PVT__inst__DOT__r_ptr;
    CData/*3:0*/ __PVT__inst__DOT__count;
    CData/*2:0*/ __PVT__inst__DOT__ps2_clk_sync;
    CData/*0:0*/ inst__DOT____Vlvbound_h1a91ade8__0;
    SData/*10:0*/ __PVT__model__DOT__kbd_sendcode__Vstatic__send_buffer;
    SData/*9:0*/ __PVT__inst__DOT__buffer;
    IData/*31:0*/ __PVT__model__DOT__kbd_sendcode__Vstatic__i;
    VlUnpacked<CData/*7:0*/, 8> __PVT__inst__DOT__fifo;

    // INTERNAL VARIABLES
    Vkeyboard_sim__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vkeyboard_sim_keyboard_sim(Vkeyboard_sim__Syms* symsp, const char* v__name);
    ~Vkeyboard_sim_keyboard_sim();
    VL_UNCOPYABLE(Vkeyboard_sim_keyboard_sim);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);


#endif  // guard
