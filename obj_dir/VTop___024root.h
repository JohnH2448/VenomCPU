// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VTop.h for the primary calling header

#ifndef VERILATED_VTOP___024ROOT_H_
#define VERILATED_VTOP___024ROOT_H_  // guard

#include "verilated.h"


class VTop__Syms;

class alignas(VL_CACHE_LINE_BYTES) VTop___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(clock,0,0);
    VL_IN8(reset,0,0);
    VL_IN8(__SYM__interrupt,0,0);
    VL_OUT8(dbg_fd_valid,0,0);
    CData/*0:0*/ Top__DOT__instructionDataValid;
    CData/*0:0*/ Top__DOT__loadDataValid;
    CData/*0:0*/ Top__DOT__storeComplete;
    CData/*1:0*/ Top__DOT__fetchDecodeControl;
    CData/*1:0*/ Top__DOT__decodeExecuteControl;
    CData/*1:0*/ Top__DOT__executeMemoryControl;
    CData/*1:0*/ Top__DOT__memoryWritebackControl;
    CData/*0:0*/ Top__DOT__controlReset;
    CData/*0:0*/ Top__DOT__branchValid;
    CData/*3:0*/ Top__DOT__realStoreByteEnable;
    CData/*0:0*/ Top__DOT__storeValid;
    CData/*0:0*/ Top__DOT__execute__DOT__redirectAsserted;
    CData/*0:0*/ Top__DOT__memory__DOT__illegal;
    CData/*0:0*/ Top__DOT__memory__DOT__storeReq;
    CData/*7:0*/ Top__DOT__memory__DOT__unnamedblk1__DOT__b;
    CData/*0:0*/ Top__DOT__dmem_inst__DOT__storeValid_q;
    CData/*1:0*/ __Vtrigprevexpr___TOP__Top__DOT__memoryWritebackControl__0;
    CData/*0:0*/ __VstlDidInit;
    CData/*0:0*/ __VstlFirstIteration;
    CData/*1:0*/ __Vtrigprevexpr___TOP__Top__DOT__memoryWritebackControl__1;
    CData/*0:0*/ __VicoDidInit;
    CData/*0:0*/ __VicoFirstIteration;
    CData/*1:0*/ __Vtrigprevexpr___TOP__Top__DOT__memoryWritebackControl__2;
    CData/*0:0*/ __Vtrigprevexpr___TOP__clock__0;
    CData/*0:0*/ __VactDidInit;
    CData/*0:0*/ __VactContinue;
    SData/*15:0*/ Top__DOT__memory__DOT__unnamedblk1__DOT__h;
    VL_OUT(dbg_instructionAddress,31,0);
    VL_OUT(dbg_fd_pc,31,0);
    VL_OUT(dbg_fd_instr,31,0);
    IData/*31:0*/ Top__DOT__instructionData;
    IData/*31:0*/ Top__DOT__branchData;
    IData/*31:0*/ Top__DOT__storeData;
    IData/*31:0*/ Top__DOT__fetch__DOT__programCounter;
    IData/*31:0*/ Top__DOT__execute__DOT__result;
    IData/*31:0*/ Top__DOT__memory__DOT__unnamedblk1__DOT__word;
    IData/*31:0*/ Top__DOT__dmem_inst__DOT__unnamedblk2__DOT__idx;
    IData/*31:0*/ Top__DOT__dmem_inst__DOT__unnamedblk2__DOT__word;
    IData/*31:0*/ __VactIterCount;
    VlWide<4>/*96:0*/ Top__DOT__fetchDecodePayload;
    VlWide<6>/*185:0*/ Top__DOT__decodeExecutePayload;
    VlWide<5>/*142:0*/ Top__DOT__executeMemoryPayload;
    VlWide<3>/*71:0*/ Top__DOT__memoryWritebackPayload;
    VlWide<6>/*185:0*/ Top__DOT__decode__DOT__decodeExecuteCandidate;
    VlUnpacked<IData/*31:0*/, 32> Top__DOT__registerFile__DOT__registers;
    VlUnpacked<IData/*31:0*/, 1024> Top__DOT__imem_inst__DOT__mem;
    VlUnpacked<IData/*31:0*/, 1024> Top__DOT__dmem_inst__DOT__mem;
    VlTriggerVec<2> __VstlTriggered;
    VlTriggerVec<2> __VicoTriggered;
    VlTriggerVec<2> __VactTriggered;
    VlTriggerVec<2> __VnbaTriggered;

    // INTERNAL VARIABLES
    VTop__Syms* const vlSymsp;

    // CONSTRUCTORS
    VTop___024root(VTop__Syms* symsp, const char* v__name);
    ~VTop___024root();
    VL_UNCOPYABLE(VTop___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
