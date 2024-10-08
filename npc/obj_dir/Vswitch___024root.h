// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vswitch.h for the primary calling header

#ifndef VERILATED_VSWITCH___024ROOT_H_
#define VERILATED_VSWITCH___024ROOT_H_  // guard

#include "verilated.h"

class Vswitch__Syms;

class Vswitch___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(a,0,0);
    VL_IN8(b,0,0);
    VL_OUT8(f,0,0);
    CData/*0:0*/ __VactContinue;
    IData/*31:0*/ __VstlIterCount;
    IData/*31:0*/ __VicoIterCount;
    IData/*31:0*/ __VactIterCount;
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<1> __VicoTriggered;
    VlTriggerVec<0> __VactTriggered;
    VlTriggerVec<0> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vswitch__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vswitch___024root(Vswitch__Syms* symsp, const char* v__name);
    ~Vswitch___024root();
    VL_UNCOPYABLE(Vswitch___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);


#endif  // guard
