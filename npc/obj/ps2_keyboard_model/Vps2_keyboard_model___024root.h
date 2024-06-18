// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vps2_keyboard_model.h for the primary calling header

#ifndef VERILATED_VPS2_KEYBOARD_MODEL___024ROOT_H_
#define VERILATED_VPS2_KEYBOARD_MODEL___024ROOT_H_  // guard

#include "verilated.h"

class Vps2_keyboard_model__Syms;

class Vps2_keyboard_model___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_OUT8(ps2_clk,0,0);
    VL_OUT8(ps2_data,0,0);
    VL_IN8(code,7,0);
    CData/*0:0*/ __VactContinue;
    SData/*10:0*/ ps2_keyboard_model__DOT__kbd_sendcode__Vstatic__send_buffer;
    IData/*31:0*/ ps2_keyboard_model__DOT__kbd_sendcode__Vstatic__i;
    IData/*31:0*/ __VactIterCount;
    VlTriggerVec<0> __VactTriggered;
    VlTriggerVec<0> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vps2_keyboard_model__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vps2_keyboard_model___024root(Vps2_keyboard_model__Syms* symsp, const char* v__name);
    ~Vps2_keyboard_model___024root();
    VL_UNCOPYABLE(Vps2_keyboard_model___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);


#endif  // guard
