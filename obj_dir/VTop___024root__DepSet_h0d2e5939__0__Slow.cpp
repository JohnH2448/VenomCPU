// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VTop.h for the primary calling header

#include "VTop__pch.h"
#include "VTop___024root.h"

VL_ATTR_COLD void VTop___024root___eval_static__TOP(VTop___024root* vlSelf);

VL_ATTR_COLD void VTop___024root___eval_static(VTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTop___024root___eval_static\n"); );
    // Body
    VTop___024root___eval_static__TOP(vlSelf);
}

VL_ATTR_COLD void VTop___024root___eval_static__TOP(VTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTop___024root___eval_static__TOP\n"); );
    // Body
    vlSelf->Top__DOT__execute__DOT__redirectAsserted = 0U;
}

VL_ATTR_COLD void VTop___024root___eval_initial__TOP(VTop___024root* vlSelf);

VL_ATTR_COLD void VTop___024root___eval_initial(VTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTop___024root___eval_initial\n"); );
    // Body
    VTop___024root___eval_initial__TOP(vlSelf);
    vlSelf->__Vtrigprevexpr___TOP__Top__DOT__memoryWritebackControl__0 
        = vlSelf->Top__DOT__memoryWritebackControl;
    vlSelf->__Vtrigprevexpr___TOP__Top__DOT__memoryWritebackControl__1 
        = vlSelf->Top__DOT__memoryWritebackControl;
    vlSelf->__Vtrigprevexpr___TOP__Top__DOT__memoryWritebackControl__2 
        = vlSelf->Top__DOT__memoryWritebackControl;
    vlSelf->__Vtrigprevexpr___TOP__clock__0 = vlSelf->clock;
}

VL_ATTR_COLD void VTop___024root___eval_initial__TOP(VTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTop___024root___eval_initial__TOP\n"); );
    // Init
    IData/*31:0*/ Top__DOT__dmem_inst__DOT__unnamedblk1__DOT__i;
    Top__DOT__dmem_inst__DOT__unnamedblk1__DOT__i = 0;
    // Body
    vlSelf->Top__DOT__registerFile__DOT__registers[0U] = 0U;
    VL_WRITEF("IMEM: loading imem.hex\n");
    VL_READMEM_N(true, 32, 1024, 0, std::string{"imem.hex"}
                 ,  &(vlSelf->Top__DOT__imem_inst__DOT__mem)
                 , 0, ~0ULL);
    Top__DOT__dmem_inst__DOT__unnamedblk1__DOT__i = 0U;
    while (VL_GTS_III(32, 0x400U, Top__DOT__dmem_inst__DOT__unnamedblk1__DOT__i)) {
        vlSelf->Top__DOT__dmem_inst__DOT__mem[(0x3ffU 
                                               & Top__DOT__dmem_inst__DOT__unnamedblk1__DOT__i)] = 0U;
        Top__DOT__dmem_inst__DOT__unnamedblk1__DOT__i 
            = ((IData)(1U) + Top__DOT__dmem_inst__DOT__unnamedblk1__DOT__i);
    }
}

VL_ATTR_COLD void VTop___024root___eval_final(VTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTop___024root___eval_final\n"); );
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VTop___024root___dump_triggers__stl(VTop___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD bool VTop___024root___eval_phase__stl(VTop___024root* vlSelf);

VL_ATTR_COLD void VTop___024root___eval_settle(VTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTop___024root___eval_settle\n"); );
    // Init
    IData/*31:0*/ __VstlIterCount;
    CData/*0:0*/ __VstlContinue;
    // Body
    __VstlIterCount = 0U;
    vlSelf->__VstlFirstIteration = 1U;
    __VstlContinue = 1U;
    while (__VstlContinue) {
        if (VL_UNLIKELY((0x64U < __VstlIterCount))) {
#ifdef VL_DEBUG
            VTop___024root___dump_triggers__stl(vlSelf);
#endif
            VL_FATAL_MT("Top.sv", 3, "", "Settle region did not converge.");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
        __VstlContinue = 0U;
        if (VTop___024root___eval_phase__stl(vlSelf)) {
            __VstlContinue = 1U;
        }
        vlSelf->__VstlFirstIteration = 0U;
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VTop___024root___dump_triggers__stl(VTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTop___024root___dump_triggers__stl\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VstlTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
    if ((2ULL & vlSelf->__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 1 is active: @([hybrid] Top.memoryWritebackControl)\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void VTop___024root___stl_sequent__TOP__0(VTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTop___024root___stl_sequent__TOP__0\n"); );
    // Init
    CData/*4:0*/ Top__DOT__readAddress1;
    Top__DOT__readAddress1 = 0;
    CData/*4:0*/ Top__DOT__readAddress2;
    Top__DOT__readAddress2 = 0;
    // Body
    vlSelf->dbg_IF_ID_Valid = (1U & vlSelf->Top__DOT__fetchDecodePayload[0U]);
    vlSelf->dbg_IF_ID_programCounter = ((vlSelf->Top__DOT__fetchDecodePayload[2U] 
                                         << 0x1fU) 
                                        | (vlSelf->Top__DOT__fetchDecodePayload[1U] 
                                           >> 1U));
    vlSelf->dbg_IF_ID_instruction = ((vlSelf->Top__DOT__fetchDecodePayload[3U] 
                                      << 0x1fU) | (
                                                   vlSelf->Top__DOT__fetchDecodePayload[2U] 
                                                   >> 1U));
    vlSelf->dbg_ID_EX_programCounter = ((vlSelf->Top__DOT__decodeExecutePayload[6U] 
                                         << 0x1cU) 
                                        | (vlSelf->Top__DOT__decodeExecutePayload[5U] 
                                           >> 4U));
    vlSelf->dbg_EX_MEM_programCounter = ((vlSelf->Top__DOT__executeMemoryPayload[4U] 
                                          << 0x11U) 
                                         | (vlSelf->Top__DOT__executeMemoryPayload[3U] 
                                            >> 0xfU));
    vlSelf->Top__DOT__storeData = (((vlSelf->Top__DOT__executeMemoryPayload[1U] 
                                     << 0x1bU) | (vlSelf->Top__DOT__executeMemoryPayload[0U] 
                                                  >> 5U)) 
                                   << (0x18U & (vlSelf->Top__DOT__executeMemoryPayload[1U] 
                                                >> 2U)));
    vlSelf->dbg_MEM_WB_programCounter = ((vlSelf->Top__DOT__memoryWritebackPayload[2U] 
                                          << 0x18U) 
                                         | (vlSelf->Top__DOT__memoryWritebackPayload[1U] 
                                            >> 8U));
    vlSelf->Top__DOT__debug_regs_flat[0U] = vlSelf->Top__DOT__registerFile__DOT__registers
        [0U];
    vlSelf->Top__DOT__debug_regs_flat[1U] = (IData)(
                                                    (((QData)((IData)(
                                                                      vlSelf->Top__DOT__registerFile__DOT__registers
                                                                      [2U])) 
                                                      << 0x20U) 
                                                     | (QData)((IData)(
                                                                       vlSelf->Top__DOT__registerFile__DOT__registers
                                                                       [1U]))));
    vlSelf->Top__DOT__debug_regs_flat[2U] = (IData)(
                                                    ((((QData)((IData)(
                                                                       vlSelf->Top__DOT__registerFile__DOT__registers
                                                                       [2U])) 
                                                       << 0x20U) 
                                                      | (QData)((IData)(
                                                                        vlSelf->Top__DOT__registerFile__DOT__registers
                                                                        [1U]))) 
                                                     >> 0x20U));
    vlSelf->Top__DOT__debug_regs_flat[3U] = vlSelf->Top__DOT__registerFile__DOT__registers
        [3U];
    vlSelf->Top__DOT__debug_regs_flat[4U] = (IData)(
                                                    (((QData)((IData)(
                                                                      vlSelf->Top__DOT__registerFile__DOT__registers
                                                                      [5U])) 
                                                      << 0x20U) 
                                                     | (QData)((IData)(
                                                                       vlSelf->Top__DOT__registerFile__DOT__registers
                                                                       [4U]))));
    vlSelf->Top__DOT__debug_regs_flat[5U] = (IData)(
                                                    ((((QData)((IData)(
                                                                       vlSelf->Top__DOT__registerFile__DOT__registers
                                                                       [5U])) 
                                                       << 0x20U) 
                                                      | (QData)((IData)(
                                                                        vlSelf->Top__DOT__registerFile__DOT__registers
                                                                        [4U]))) 
                                                     >> 0x20U));
    vlSelf->Top__DOT__debug_regs_flat[6U] = vlSelf->Top__DOT__registerFile__DOT__registers
        [6U];
    vlSelf->Top__DOT__debug_regs_flat[7U] = (IData)(
                                                    (((QData)((IData)(
                                                                      vlSelf->Top__DOT__registerFile__DOT__registers
                                                                      [8U])) 
                                                      << 0x20U) 
                                                     | (QData)((IData)(
                                                                       vlSelf->Top__DOT__registerFile__DOT__registers
                                                                       [7U]))));
    vlSelf->Top__DOT__debug_regs_flat[8U] = (IData)(
                                                    ((((QData)((IData)(
                                                                       vlSelf->Top__DOT__registerFile__DOT__registers
                                                                       [8U])) 
                                                       << 0x20U) 
                                                      | (QData)((IData)(
                                                                        vlSelf->Top__DOT__registerFile__DOT__registers
                                                                        [7U]))) 
                                                     >> 0x20U));
    vlSelf->Top__DOT__debug_regs_flat[9U] = vlSelf->Top__DOT__registerFile__DOT__registers
        [9U];
    vlSelf->Top__DOT__debug_regs_flat[0xaU] = (IData)(
                                                      (((QData)((IData)(
                                                                        vlSelf->Top__DOT__registerFile__DOT__registers
                                                                        [0xbU])) 
                                                        << 0x20U) 
                                                       | (QData)((IData)(
                                                                         vlSelf->Top__DOT__registerFile__DOT__registers
                                                                         [0xaU]))));
    vlSelf->Top__DOT__debug_regs_flat[0xbU] = (IData)(
                                                      ((((QData)((IData)(
                                                                         vlSelf->Top__DOT__registerFile__DOT__registers
                                                                         [0xbU])) 
                                                         << 0x20U) 
                                                        | (QData)((IData)(
                                                                          vlSelf->Top__DOT__registerFile__DOT__registers
                                                                          [0xaU]))) 
                                                       >> 0x20U));
    vlSelf->Top__DOT__debug_regs_flat[0xcU] = vlSelf->Top__DOT__registerFile__DOT__registers
        [0xcU];
    vlSelf->Top__DOT__debug_regs_flat[0xdU] = (IData)(
                                                      (((QData)((IData)(
                                                                        vlSelf->Top__DOT__registerFile__DOT__registers
                                                                        [0xeU])) 
                                                        << 0x20U) 
                                                       | (QData)((IData)(
                                                                         vlSelf->Top__DOT__registerFile__DOT__registers
                                                                         [0xdU]))));
    vlSelf->Top__DOT__debug_regs_flat[0xeU] = (IData)(
                                                      ((((QData)((IData)(
                                                                         vlSelf->Top__DOT__registerFile__DOT__registers
                                                                         [0xeU])) 
                                                         << 0x20U) 
                                                        | (QData)((IData)(
                                                                          vlSelf->Top__DOT__registerFile__DOT__registers
                                                                          [0xdU]))) 
                                                       >> 0x20U));
    vlSelf->Top__DOT__debug_regs_flat[0xfU] = vlSelf->Top__DOT__registerFile__DOT__registers
        [0xfU];
    vlSelf->Top__DOT__debug_regs_flat[0x10U] = (IData)(
                                                       (((QData)((IData)(
                                                                         vlSelf->Top__DOT__registerFile__DOT__registers
                                                                         [0x11U])) 
                                                         << 0x20U) 
                                                        | (QData)((IData)(
                                                                          vlSelf->Top__DOT__registerFile__DOT__registers
                                                                          [0x10U]))));
    vlSelf->Top__DOT__debug_regs_flat[0x11U] = (IData)(
                                                       ((((QData)((IData)(
                                                                          vlSelf->Top__DOT__registerFile__DOT__registers
                                                                          [0x11U])) 
                                                          << 0x20U) 
                                                         | (QData)((IData)(
                                                                           vlSelf->Top__DOT__registerFile__DOT__registers
                                                                           [0x10U]))) 
                                                        >> 0x20U));
    vlSelf->Top__DOT__debug_regs_flat[0x12U] = vlSelf->Top__DOT__registerFile__DOT__registers
        [0x12U];
    vlSelf->Top__DOT__debug_regs_flat[0x13U] = (IData)(
                                                       (((QData)((IData)(
                                                                         vlSelf->Top__DOT__registerFile__DOT__registers
                                                                         [0x14U])) 
                                                         << 0x20U) 
                                                        | (QData)((IData)(
                                                                          vlSelf->Top__DOT__registerFile__DOT__registers
                                                                          [0x13U]))));
    vlSelf->Top__DOT__debug_regs_flat[0x14U] = (IData)(
                                                       ((((QData)((IData)(
                                                                          vlSelf->Top__DOT__registerFile__DOT__registers
                                                                          [0x14U])) 
                                                          << 0x20U) 
                                                         | (QData)((IData)(
                                                                           vlSelf->Top__DOT__registerFile__DOT__registers
                                                                           [0x13U]))) 
                                                        >> 0x20U));
    vlSelf->Top__DOT__debug_regs_flat[0x15U] = vlSelf->Top__DOT__registerFile__DOT__registers
        [0x15U];
    vlSelf->Top__DOT__debug_regs_flat[0x16U] = (IData)(
                                                       (((QData)((IData)(
                                                                         vlSelf->Top__DOT__registerFile__DOT__registers
                                                                         [0x17U])) 
                                                         << 0x20U) 
                                                        | (QData)((IData)(
                                                                          vlSelf->Top__DOT__registerFile__DOT__registers
                                                                          [0x16U]))));
    vlSelf->Top__DOT__debug_regs_flat[0x17U] = (IData)(
                                                       ((((QData)((IData)(
                                                                          vlSelf->Top__DOT__registerFile__DOT__registers
                                                                          [0x17U])) 
                                                          << 0x20U) 
                                                         | (QData)((IData)(
                                                                           vlSelf->Top__DOT__registerFile__DOT__registers
                                                                           [0x16U]))) 
                                                        >> 0x20U));
    vlSelf->Top__DOT__debug_regs_flat[0x18U] = vlSelf->Top__DOT__registerFile__DOT__registers
        [0x18U];
    vlSelf->Top__DOT__debug_regs_flat[0x19U] = (IData)(
                                                       (((QData)((IData)(
                                                                         vlSelf->Top__DOT__registerFile__DOT__registers
                                                                         [0x1aU])) 
                                                         << 0x20U) 
                                                        | (QData)((IData)(
                                                                          vlSelf->Top__DOT__registerFile__DOT__registers
                                                                          [0x19U]))));
    vlSelf->Top__DOT__debug_regs_flat[0x1aU] = (IData)(
                                                       ((((QData)((IData)(
                                                                          vlSelf->Top__DOT__registerFile__DOT__registers
                                                                          [0x1aU])) 
                                                          << 0x20U) 
                                                         | (QData)((IData)(
                                                                           vlSelf->Top__DOT__registerFile__DOT__registers
                                                                           [0x19U]))) 
                                                        >> 0x20U));
    vlSelf->Top__DOT__debug_regs_flat[0x1bU] = vlSelf->Top__DOT__registerFile__DOT__registers
        [0x1bU];
    vlSelf->Top__DOT__debug_regs_flat[0x1cU] = (IData)(
                                                       (((QData)((IData)(
                                                                         vlSelf->Top__DOT__registerFile__DOT__registers
                                                                         [0x1dU])) 
                                                         << 0x20U) 
                                                        | (QData)((IData)(
                                                                          vlSelf->Top__DOT__registerFile__DOT__registers
                                                                          [0x1cU]))));
    vlSelf->Top__DOT__debug_regs_flat[0x1dU] = (IData)(
                                                       ((((QData)((IData)(
                                                                          vlSelf->Top__DOT__registerFile__DOT__registers
                                                                          [0x1dU])) 
                                                          << 0x20U) 
                                                         | (QData)((IData)(
                                                                           vlSelf->Top__DOT__registerFile__DOT__registers
                                                                           [0x1cU]))) 
                                                        >> 0x20U));
    vlSelf->Top__DOT__debug_regs_flat[0x1eU] = (IData)(
                                                       (((QData)((IData)(
                                                                         vlSelf->Top__DOT__registerFile__DOT__registers
                                                                         [0x1fU])) 
                                                         << 0x20U) 
                                                        | (QData)((IData)(
                                                                          vlSelf->Top__DOT__registerFile__DOT__registers
                                                                          [0x1eU]))));
    vlSelf->Top__DOT__debug_regs_flat[0x1fU] = (IData)(
                                                       ((((QData)((IData)(
                                                                          vlSelf->Top__DOT__registerFile__DOT__registers
                                                                          [0x1fU])) 
                                                          << 0x20U) 
                                                         | (QData)((IData)(
                                                                           vlSelf->Top__DOT__registerFile__DOT__registers
                                                                           [0x1eU]))) 
                                                        >> 0x20U));
    vlSelf->Top__DOT__instructionDataValid = (1U & 
                                              (~ (IData)(vlSelf->reset)));
    vlSelf->dbg_pc = vlSelf->Top__DOT__fetch__DOT__programCounter;
    Top__DOT__readAddress2 = 0U;
    Top__DOT__readAddress1 = 0U;
    vlSelf->Top__DOT__loadDataValid = (1U & (~ (IData)(vlSelf->reset)));
    vlSelf->dbg_ID_EX_Valid = (1U & vlSelf->Top__DOT__decodeExecutePayload[0U]);
    vlSelf->dbg_EX_MEM_Valid = (1U & vlSelf->Top__DOT__executeMemoryPayload[0U]);
    vlSelf->dbg_MEM_WB_Valid = (1U & vlSelf->Top__DOT__memoryWritebackPayload[0U]);
    vlSelf->dbg_registers[0U] = vlSelf->Top__DOT__debug_regs_flat[0U];
    vlSelf->dbg_registers[1U] = vlSelf->Top__DOT__debug_regs_flat[1U];
    vlSelf->dbg_registers[2U] = vlSelf->Top__DOT__debug_regs_flat[2U];
    vlSelf->dbg_registers[3U] = vlSelf->Top__DOT__debug_regs_flat[3U];
    vlSelf->dbg_registers[4U] = vlSelf->Top__DOT__debug_regs_flat[4U];
    vlSelf->dbg_registers[5U] = vlSelf->Top__DOT__debug_regs_flat[5U];
    vlSelf->dbg_registers[6U] = vlSelf->Top__DOT__debug_regs_flat[6U];
    vlSelf->dbg_registers[7U] = vlSelf->Top__DOT__debug_regs_flat[7U];
    vlSelf->dbg_registers[8U] = vlSelf->Top__DOT__debug_regs_flat[8U];
    vlSelf->dbg_registers[9U] = vlSelf->Top__DOT__debug_regs_flat[9U];
    vlSelf->dbg_registers[0xaU] = vlSelf->Top__DOT__debug_regs_flat[0xaU];
    vlSelf->dbg_registers[0xbU] = vlSelf->Top__DOT__debug_regs_flat[0xbU];
    vlSelf->dbg_registers[0xcU] = vlSelf->Top__DOT__debug_regs_flat[0xcU];
    vlSelf->dbg_registers[0xdU] = vlSelf->Top__DOT__debug_regs_flat[0xdU];
    vlSelf->dbg_registers[0xeU] = vlSelf->Top__DOT__debug_regs_flat[0xeU];
    vlSelf->dbg_registers[0xfU] = vlSelf->Top__DOT__debug_regs_flat[0xfU];
    vlSelf->dbg_registers[0x10U] = vlSelf->Top__DOT__debug_regs_flat[0x10U];
    vlSelf->dbg_registers[0x11U] = vlSelf->Top__DOT__debug_regs_flat[0x11U];
    vlSelf->dbg_registers[0x12U] = vlSelf->Top__DOT__debug_regs_flat[0x12U];
    vlSelf->dbg_registers[0x13U] = vlSelf->Top__DOT__debug_regs_flat[0x13U];
    vlSelf->dbg_registers[0x14U] = vlSelf->Top__DOT__debug_regs_flat[0x14U];
    vlSelf->dbg_registers[0x15U] = vlSelf->Top__DOT__debug_regs_flat[0x15U];
    vlSelf->dbg_registers[0x16U] = vlSelf->Top__DOT__debug_regs_flat[0x16U];
    vlSelf->dbg_registers[0x17U] = vlSelf->Top__DOT__debug_regs_flat[0x17U];
    vlSelf->dbg_registers[0x18U] = vlSelf->Top__DOT__debug_regs_flat[0x18U];
    vlSelf->dbg_registers[0x19U] = vlSelf->Top__DOT__debug_regs_flat[0x19U];
    vlSelf->dbg_registers[0x1aU] = vlSelf->Top__DOT__debug_regs_flat[0x1aU];
    vlSelf->dbg_registers[0x1bU] = vlSelf->Top__DOT__debug_regs_flat[0x1bU];
    vlSelf->dbg_registers[0x1cU] = vlSelf->Top__DOT__debug_regs_flat[0x1cU];
    vlSelf->dbg_registers[0x1dU] = vlSelf->Top__DOT__debug_regs_flat[0x1dU];
    vlSelf->dbg_registers[0x1eU] = vlSelf->Top__DOT__debug_regs_flat[0x1eU];
    vlSelf->dbg_registers[0x1fU] = vlSelf->Top__DOT__debug_regs_flat[0x1fU];
    vlSelf->dbg_IMEM_valid = vlSelf->Top__DOT__instructionDataValid;
    vlSelf->Top__DOT__instructionData = ((IData)(vlSelf->reset)
                                          ? 0x13U : 
                                         vlSelf->Top__DOT__imem_inst__DOT__mem
                                         [(0x3ffU & 
                                           (vlSelf->dbg_pc 
                                            >> 2U))]);
    if ((0x80U & vlSelf->Top__DOT__fetchDecodePayload[2U])) {
        if ((0x40U & vlSelf->Top__DOT__fetchDecodePayload[2U])) {
            if ((1U & (~ (vlSelf->Top__DOT__fetchDecodePayload[2U] 
                          >> 5U)))) {
                if ((1U & (~ (vlSelf->Top__DOT__fetchDecodePayload[2U] 
                              >> 4U)))) {
                    if ((1U & (~ (vlSelf->Top__DOT__fetchDecodePayload[2U] 
                                  >> 3U)))) {
                        if ((4U & vlSelf->Top__DOT__fetchDecodePayload[2U])) {
                            if ((2U & vlSelf->Top__DOT__fetchDecodePayload[2U])) {
                                Top__DOT__readAddress2 
                                    = (0x1fU & (vlSelf->Top__DOT__fetchDecodePayload[2U] 
                                                >> 0x15U));
                            }
                        }
                    }
                    if ((8U & vlSelf->Top__DOT__fetchDecodePayload[2U])) {
                        if ((4U & vlSelf->Top__DOT__fetchDecodePayload[2U])) {
                            if ((2U & vlSelf->Top__DOT__fetchDecodePayload[2U])) {
                                Top__DOT__readAddress1 
                                    = (0x1fU & (vlSelf->Top__DOT__fetchDecodePayload[2U] 
                                                >> 0x10U));
                            }
                        }
                    } else if ((4U & vlSelf->Top__DOT__fetchDecodePayload[2U])) {
                        if ((2U & vlSelf->Top__DOT__fetchDecodePayload[2U])) {
                            Top__DOT__readAddress1 
                                = (0x1fU & (vlSelf->Top__DOT__fetchDecodePayload[2U] 
                                            >> 0x10U));
                        }
                    }
                }
            }
        }
    } else if ((0x40U & vlSelf->Top__DOT__fetchDecodePayload[2U])) {
        if ((0x20U & vlSelf->Top__DOT__fetchDecodePayload[2U])) {
            if ((1U & (~ (vlSelf->Top__DOT__fetchDecodePayload[2U] 
                          >> 4U)))) {
                if ((1U & (~ (vlSelf->Top__DOT__fetchDecodePayload[2U] 
                              >> 3U)))) {
                    if ((4U & vlSelf->Top__DOT__fetchDecodePayload[2U])) {
                        if ((2U & vlSelf->Top__DOT__fetchDecodePayload[2U])) {
                            Top__DOT__readAddress2 
                                = (0x1fU & (vlSelf->Top__DOT__fetchDecodePayload[2U] 
                                            >> 0x15U));
                            Top__DOT__readAddress1 
                                = (0x1fU & (vlSelf->Top__DOT__fetchDecodePayload[2U] 
                                            >> 0x10U));
                        }
                    }
                }
            }
        } else if ((1U & (~ (vlSelf->Top__DOT__fetchDecodePayload[2U] 
                             >> 4U)))) {
            if ((1U & (~ (vlSelf->Top__DOT__fetchDecodePayload[2U] 
                          >> 3U)))) {
                if ((4U & vlSelf->Top__DOT__fetchDecodePayload[2U])) {
                    if ((2U & vlSelf->Top__DOT__fetchDecodePayload[2U])) {
                        Top__DOT__readAddress2 = (0x1fU 
                                                  & (vlSelf->Top__DOT__fetchDecodePayload[2U] 
                                                     >> 0x15U));
                        Top__DOT__readAddress1 = (0x1fU 
                                                  & (vlSelf->Top__DOT__fetchDecodePayload[2U] 
                                                     >> 0x10U));
                    }
                }
            }
        }
    } else if ((0x20U & vlSelf->Top__DOT__fetchDecodePayload[2U])) {
        if ((1U & (~ (vlSelf->Top__DOT__fetchDecodePayload[2U] 
                      >> 4U)))) {
            if ((1U & (~ (vlSelf->Top__DOT__fetchDecodePayload[2U] 
                          >> 3U)))) {
                if ((4U & vlSelf->Top__DOT__fetchDecodePayload[2U])) {
                    if ((2U & vlSelf->Top__DOT__fetchDecodePayload[2U])) {
                        Top__DOT__readAddress1 = (0x1fU 
                                                  & (vlSelf->Top__DOT__fetchDecodePayload[2U] 
                                                     >> 0x10U));
                    }
                }
            }
        }
    } else if ((1U & (~ (vlSelf->Top__DOT__fetchDecodePayload[2U] 
                         >> 4U)))) {
        if ((1U & (~ (vlSelf->Top__DOT__fetchDecodePayload[2U] 
                      >> 3U)))) {
            if ((4U & vlSelf->Top__DOT__fetchDecodePayload[2U])) {
                if ((2U & vlSelf->Top__DOT__fetchDecodePayload[2U])) {
                    Top__DOT__readAddress1 = (0x1fU 
                                              & (vlSelf->Top__DOT__fetchDecodePayload[2U] 
                                                 >> 0x10U));
                }
            }
        }
    }
    vlSelf->Top__DOT__decode__DOT__decodeExecuteCandidate[1U] 
        = ((0x3ffffffU & vlSelf->Top__DOT__decode__DOT__decodeExecuteCandidate[1U]) 
           | (0xfc000000U & (((IData)(Top__DOT__readAddress1) 
                              << 0x1fU) | ((IData)(Top__DOT__readAddress2) 
                                           << 0x1aU))));
    vlSelf->Top__DOT__decode__DOT__decodeExecuteCandidate[2U] 
        = ((0xfffffff0U & vlSelf->Top__DOT__decode__DOT__decodeExecuteCandidate[2U]) 
           | (0x3ffffffU & ((0x3ffffffU & ((IData)(Top__DOT__readAddress1) 
                                           >> 1U)) 
                            | ((IData)(Top__DOT__readAddress2) 
                               >> 6U))));
    vlSelf->Top__DOT__decode__DOT__decodeExecuteCandidate[0U] = 0U;
    vlSelf->Top__DOT__decode__DOT__decodeExecuteCandidate[1U] = 0U;
    vlSelf->Top__DOT__decode__DOT__decodeExecuteCandidate[2U] = 0U;
    vlSelf->Top__DOT__decode__DOT__decodeExecuteCandidate[3U] = 0U;
    vlSelf->Top__DOT__decode__DOT__decodeExecuteCandidate[4U] = 0U;
    vlSelf->Top__DOT__decode__DOT__decodeExecuteCandidate[5U] = 0U;
    vlSelf->Top__DOT__decode__DOT__decodeExecuteCandidate[6U] = 0U;
    vlSelf->Top__DOT__decode__DOT__decodeExecuteCandidate[2U] 
        = ((0xfU & vlSelf->Top__DOT__decode__DOT__decodeExecuteCandidate[2U]) 
           | (((0U == (IData)(Top__DOT__readAddress2))
                ? 0U : vlSelf->Top__DOT__registerFile__DOT__registers
               [Top__DOT__readAddress2]) << 4U));
    vlSelf->Top__DOT__decode__DOT__decodeExecuteCandidate[3U] 
        = ((((0U == (IData)(Top__DOT__readAddress2))
              ? 0U : vlSelf->Top__DOT__registerFile__DOT__registers
             [Top__DOT__readAddress2]) >> 0x1cU) | 
           (((0U == (IData)(Top__DOT__readAddress1))
              ? 0U : vlSelf->Top__DOT__registerFile__DOT__registers
             [Top__DOT__readAddress1]) << 4U));
    vlSelf->Top__DOT__decode__DOT__decodeExecuteCandidate[4U] 
        = ((((0U == (IData)(Top__DOT__readAddress1))
              ? 0U : vlSelf->Top__DOT__registerFile__DOT__registers
             [Top__DOT__readAddress1]) >> 0x1cU) | 
           ((IData)((((QData)((IData)(vlSelf->Top__DOT__fetchDecodePayload[2U])) 
                      << 0x3fU) | (((QData)((IData)(
                                                    vlSelf->Top__DOT__fetchDecodePayload[1U])) 
                                    << 0x1fU) | ((QData)((IData)(
                                                                 vlSelf->Top__DOT__fetchDecodePayload[0U])) 
                                                 >> 1U)))) 
            << 4U));
    vlSelf->Top__DOT__decode__DOT__decodeExecuteCandidate[5U] 
        = (((IData)((((QData)((IData)(vlSelf->Top__DOT__fetchDecodePayload[2U])) 
                      << 0x3fU) | (((QData)((IData)(
                                                    vlSelf->Top__DOT__fetchDecodePayload[1U])) 
                                    << 0x1fU) | ((QData)((IData)(
                                                                 vlSelf->Top__DOT__fetchDecodePayload[0U])) 
                                                 >> 1U)))) 
            >> 0x1cU) | ((IData)(((((QData)((IData)(
                                                    vlSelf->Top__DOT__fetchDecodePayload[2U])) 
                                    << 0x3fU) | (((QData)((IData)(
                                                                  vlSelf->Top__DOT__fetchDecodePayload[1U])) 
                                                  << 0x1fU) 
                                                 | ((QData)((IData)(
                                                                    vlSelf->Top__DOT__fetchDecodePayload[0U])) 
                                                    >> 1U))) 
                                  >> 0x20U)) << 4U));
    vlSelf->Top__DOT__decode__DOT__decodeExecuteCandidate[6U] 
        = ((IData)(((((QData)((IData)(vlSelf->Top__DOT__fetchDecodePayload[2U])) 
                      << 0x3fU) | (((QData)((IData)(
                                                    vlSelf->Top__DOT__fetchDecodePayload[1U])) 
                                    << 0x1fU) | ((QData)((IData)(
                                                                 vlSelf->Top__DOT__fetchDecodePayload[0U])) 
                                                 >> 1U))) 
                    >> 0x20U)) >> 0x1cU);
    if ((0x80U & vlSelf->Top__DOT__fetchDecodePayload[2U])) {
        if ((0x40U & vlSelf->Top__DOT__fetchDecodePayload[2U])) {
            if ((0x20U & vlSelf->Top__DOT__fetchDecodePayload[2U])) {
                vlSelf->Top__DOT__decode__DOT__decodeExecuteCandidate[0U] 
                    = (2U | vlSelf->Top__DOT__decode__DOT__decodeExecuteCandidate[0U]);
            } else if ((0x10U & vlSelf->Top__DOT__fetchDecodePayload[2U])) {
                if ((8U & vlSelf->Top__DOT__fetchDecodePayload[2U])) {
                    if ((4U & vlSelf->Top__DOT__fetchDecodePayload[2U])) {
                        if ((2U & vlSelf->Top__DOT__fetchDecodePayload[2U])) {
                            vlSelf->Top__DOT__decode__DOT__decodeExecuteCandidate[1U] 
                                = ((0xfc1fffffU & vlSelf->Top__DOT__decode__DOT__decodeExecuteCandidate[1U]) 
                                   | (0x3e00000U & 
                                      (vlSelf->Top__DOT__fetchDecodePayload[2U] 
                                       << 0xdU)));
                            vlSelf->Top__DOT__decode__DOT__decodeExecuteCandidate[0U] 
                                = (0x100000U | (0xffe7ffffU 
                                                & vlSelf->Top__DOT__decode__DOT__decodeExecuteCandidate[0U]));
                            vlSelf->Top__DOT__decode__DOT__decodeExecuteCandidate[0U] 
                                = (0x2cU | (0xffffff83U 
                                            & vlSelf->Top__DOT__decode__DOT__decodeExecuteCandidate[0U]));
                            vlSelf->Top__DOT__decode__DOT__decodeExecuteCandidate[0U] 
                                = ((0x1fffffU & vlSelf->Top__DOT__decode__DOT__decodeExecuteCandidate[0U]) 
                                   | (0xffc00000U & 
                                      vlSelf->Top__DOT__fetchDecodePayload[2U]));
                            vlSelf->Top__DOT__decode__DOT__decodeExecuteCandidate[1U] 
                                = ((0xffe00000U & vlSelf->Top__DOT__decode__DOT__decodeExecuteCandidate[1U]) 
                                   | (0x1fffffU & (
                                                   (0x1ffc00U 
                                                    & ((- (IData)(
                                                                  (1U 
                                                                   & vlSelf->Top__DOT__fetchDecodePayload[3U]))) 
                                                       << 0xaU)) 
                                                   | ((0x200U 
                                                       & (vlSelf->Top__DOT__fetchDecodePayload[3U] 
                                                          << 9U)) 
                                                      | ((0x1feU 
                                                          & (vlSelf->Top__DOT__fetchDecodePayload[2U] 
                                                             >> 0xcU)) 
                                                         | (1U 
                                                            & (vlSelf->Top__DOT__fetchDecodePayload[2U] 
                                                               >> 0x15U)))))));
                        } else {
                            vlSelf->Top__DOT__decode__DOT__decodeExecuteCandidate[0U] 
                                = (2U | vlSelf->Top__DOT__decode__DOT__decodeExecuteCandidate[0U]);
                        }
                    } else {
                        vlSelf->Top__DOT__decode__DOT__decodeExecuteCandidate[0U] 
                            = (2U | vlSelf->Top__DOT__decode__DOT__decodeExecuteCandidate[0U]);
                    }
                } else {
                    vlSelf->Top__DOT__decode__DOT__decodeExecuteCandidate[0U] 
                        = (2U | vlSelf->Top__DOT__decode__DOT__decodeExecuteCandidate[0U]);
                }
            } else if ((8U & vlSelf->Top__DOT__fetchDecodePayload[2U])) {
                if ((4U & vlSelf->Top__DOT__fetchDecodePayload[2U])) {
                    if ((2U & vlSelf->Top__DOT__fetchDecodePayload[2U])) {
                        vlSelf->Top__DOT__decode__DOT__decodeExecuteCandidate[1U] 
                            = ((0xfc1fffffU & vlSelf->Top__DOT__decode__DOT__decodeExecuteCandidate[1U]) 
                               | (0x3e00000U & (vlSelf->Top__DOT__fetchDecodePayload[2U] 
                                                << 0xdU)));
                        vlSelf->Top__DOT__decode__DOT__decodeExecuteCandidate[0U] 
                            = (0x80000U | (0xffe7ffffU 
                                           & vlSelf->Top__DOT__decode__DOT__decodeExecuteCandidate[0U]));
                        vlSelf->Top__DOT__decode__DOT__decodeExecuteCandidate[0U] 
                            = (0x4cU | (0xffffff83U 
                                        & vlSelf->Top__DOT__decode__DOT__decodeExecuteCandidate[0U]));
                        vlSelf->Top__DOT__decode__DOT__decodeExecuteCandidate[0U] 
                            = ((0x1fffffU & vlSelf->Top__DOT__decode__DOT__decodeExecuteCandidate[0U]) 
                               | (0xffe00000U & vlSelf->Top__DOT__fetchDecodePayload[2U]));
                        vlSelf->Top__DOT__decode__DOT__decodeExecuteCandidate[1U] 
                            = ((0xffe00000U & vlSelf->Top__DOT__decode__DOT__decodeExecuteCandidate[1U]) 
                               | (0x1fffffU & ((0x1ffffeU 
                                                & ((- (IData)(
                                                              (1U 
                                                               & vlSelf->Top__DOT__fetchDecodePayload[3U]))) 
                                                   << 1U)) 
                                               | (1U 
                                                  & vlSelf->Top__DOT__fetchDecodePayload[3U]))));
                        if ((0U != (7U & (vlSelf->Top__DOT__fetchDecodePayload[2U] 
                                          >> 0xdU)))) {
                            vlSelf->Top__DOT__decode__DOT__decodeExecuteCandidate[0U] 
                                = (2U | vlSelf->Top__DOT__decode__DOT__decodeExecuteCandidate[0U]);
                        }
                    } else {
                        vlSelf->Top__DOT__decode__DOT__decodeExecuteCandidate[0U] 
                            = (2U | vlSelf->Top__DOT__decode__DOT__decodeExecuteCandidate[0U]);
                    }
                } else {
                    vlSelf->Top__DOT__decode__DOT__decodeExecuteCandidate[0U] 
                        = (2U | vlSelf->Top__DOT__decode__DOT__decodeExecuteCandidate[0U]);
                }
            } else if ((4U & vlSelf->Top__DOT__fetchDecodePayload[2U])) {
                if ((2U & vlSelf->Top__DOT__fetchDecodePayload[2U])) {
                    vlSelf->Top__DOT__decode__DOT__decodeExecuteCandidate[0U] 
                        = (0x100000U | (0xffe7ffffU 
                                        & vlSelf->Top__DOT__decode__DOT__decodeExecuteCandidate[0U]));
                    vlSelf->Top__DOT__decode__DOT__decodeExecuteCandidate[0U] 
                        = ((0x1fffffU & vlSelf->Top__DOT__decode__DOT__decodeExecuteCandidate[0U]) 
                           | (0xffe00000U & ((0xfc000000U 
                                              & vlSelf->Top__DOT__fetchDecodePayload[2U]) 
                                             | (0x3c00000U 
                                                & (vlSelf->Top__DOT__fetchDecodePayload[2U] 
                                                   << 0xdU)))));
                    vlSelf->Top__DOT__decode__DOT__decodeExecuteCandidate[1U] 
                        = ((0xffe00000U & vlSelf->Top__DOT__decode__DOT__decodeExecuteCandidate[1U]) 
                           | (0x1fffffU & ((0x1ffffcU 
                                            & ((- (IData)(
                                                          (1U 
                                                           & vlSelf->Top__DOT__fetchDecodePayload[3U]))) 
                                               << 2U)) 
                                           | ((2U & 
                                               (vlSelf->Top__DOT__fetchDecodePayload[3U] 
                                                << 1U)) 
                                              | (1U 
                                                 & (vlSelf->Top__DOT__fetchDecodePayload[2U] 
                                                    >> 8U))))));
                    vlSelf->Top__DOT__decode__DOT__decodeExecuteCandidate[0U] 
                        = ((0x8000U & vlSelf->Top__DOT__fetchDecodePayload[2U])
                            ? ((0xffffc7ffU & vlSelf->Top__DOT__decode__DOT__decodeExecuteCandidate[0U]) 
                               | (((0x4000U & vlSelf->Top__DOT__fetchDecodePayload[2U])
                                    ? ((0x2000U & vlSelf->Top__DOT__fetchDecodePayload[2U])
                                        ? 6U : 5U) : 
                                   ((0x2000U & vlSelf->Top__DOT__fetchDecodePayload[2U])
                                     ? 4U : 3U)) << 0xbU))
                            : ((0x4000U & vlSelf->Top__DOT__fetchDecodePayload[2U])
                                ? (2U | vlSelf->Top__DOT__decode__DOT__decodeExecuteCandidate[0U])
                                : ((0xffffc7ffU & vlSelf->Top__DOT__decode__DOT__decodeExecuteCandidate[0U]) 
                                   | (((0x2000U & vlSelf->Top__DOT__fetchDecodePayload[2U])
                                        ? 2U : 1U) 
                                      << 0xbU))));
                } else {
                    vlSelf->Top__DOT__decode__DOT__decodeExecuteCandidate[0U] 
                        = (2U | vlSelf->Top__DOT__decode__DOT__decodeExecuteCandidate[0U]);
                }
            } else {
                vlSelf->Top__DOT__decode__DOT__decodeExecuteCandidate[0U] 
                    = (2U | vlSelf->Top__DOT__decode__DOT__decodeExecuteCandidate[0U]);
            }
        } else {
            vlSelf->Top__DOT__decode__DOT__decodeExecuteCandidate[0U] 
                = (2U | vlSelf->Top__DOT__decode__DOT__decodeExecuteCandidate[0U]);
        }
    } else if ((0x40U & vlSelf->Top__DOT__fetchDecodePayload[2U])) {
        if ((0x20U & vlSelf->Top__DOT__fetchDecodePayload[2U])) {
            if ((0x10U & vlSelf->Top__DOT__fetchDecodePayload[2U])) {
                vlSelf->Top__DOT__decode__DOT__decodeExecuteCandidate[0U] 
                    = (2U | vlSelf->Top__DOT__decode__DOT__decodeExecuteCandidate[0U]);
            } else if ((8U & vlSelf->Top__DOT__fetchDecodePayload[2U])) {
                if ((4U & vlSelf->Top__DOT__fetchDecodePayload[2U])) {
                    if ((2U & vlSelf->Top__DOT__fetchDecodePayload[2U])) {
                        vlSelf->Top__DOT__decode__DOT__decodeExecuteCandidate[1U] 
                            = ((0xfc1fffffU & vlSelf->Top__DOT__decode__DOT__decodeExecuteCandidate[1U]) 
                               | (0x3e00000U & (vlSelf->Top__DOT__fetchDecodePayload[2U] 
                                                << 0xdU)));
                        vlSelf->Top__DOT__decode__DOT__decodeExecuteCandidate[0U] 
                            = (0x180000U | vlSelf->Top__DOT__decode__DOT__decodeExecuteCandidate[0U]);
                        vlSelf->Top__DOT__decode__DOT__decodeExecuteCandidate[0U] 
                            = (4U | (0xffffffe3U & 
                                     vlSelf->Top__DOT__decode__DOT__decodeExecuteCandidate[0U]));
                        vlSelf->Top__DOT__decode__DOT__decodeExecuteCandidate[0U] 
                            = (0x1fffffU & vlSelf->Top__DOT__decode__DOT__decodeExecuteCandidate[0U]);
                        vlSelf->Top__DOT__decode__DOT__decodeExecuteCandidate[1U] 
                            = ((0xffe00000U & vlSelf->Top__DOT__decode__DOT__decodeExecuteCandidate[1U]) 
                               | (0x1ffffeU & ((0x100000U 
                                                & (vlSelf->Top__DOT__fetchDecodePayload[3U] 
                                                   << 0x14U)) 
                                               | (0xffffeU 
                                                  & (vlSelf->Top__DOT__fetchDecodePayload[2U] 
                                                     >> 0xcU)))));
                    } else {
                        vlSelf->Top__DOT__decode__DOT__decodeExecuteCandidate[0U] 
                            = (2U | vlSelf->Top__DOT__decode__DOT__decodeExecuteCandidate[0U]);
                    }
                } else {
                    vlSelf->Top__DOT__decode__DOT__decodeExecuteCandidate[0U] 
                        = (2U | vlSelf->Top__DOT__decode__DOT__decodeExecuteCandidate[0U]);
                }
            } else if ((4U & vlSelf->Top__DOT__fetchDecodePayload[2U])) {
                if ((2U & vlSelf->Top__DOT__fetchDecodePayload[2U])) {
                    vlSelf->Top__DOT__decode__DOT__decodeExecuteCandidate[1U] 
                        = ((0xfc1fffffU & vlSelf->Top__DOT__decode__DOT__decodeExecuteCandidate[1U]) 
                           | (0x3e00000U & (vlSelf->Top__DOT__fetchDecodePayload[2U] 
                                            << 0xdU)));
                    vlSelf->Top__DOT__decode__DOT__decodeExecuteCandidate[0U] 
                        = (0xffe7ffffU & vlSelf->Top__DOT__decode__DOT__decodeExecuteCandidate[0U]);
                    vlSelf->Top__DOT__decode__DOT__decodeExecuteCandidate[0U] 
                        = (4U | (0xffffffe3U & vlSelf->Top__DOT__decode__DOT__decodeExecuteCandidate[0U]));
                    vlSelf->Top__DOT__decode__DOT__decodeExecuteCandidate[0U] 
                        = (((((((((0U == ((0x3f8U & 
                                           ((vlSelf->Top__DOT__fetchDecodePayload[3U] 
                                             << 9U) 
                                            | (0x1f8U 
                                               & (vlSelf->Top__DOT__fetchDecodePayload[2U] 
                                                  >> 0x17U)))) 
                                          | (7U & (
                                                   vlSelf->Top__DOT__fetchDecodePayload[2U] 
                                                   >> 0xdU)))) 
                                  | (0x100U == ((0x3f8U 
                                                 & ((vlSelf->Top__DOT__fetchDecodePayload[3U] 
                                                     << 9U) 
                                                    | (0x1f8U 
                                                       & (vlSelf->Top__DOT__fetchDecodePayload[2U] 
                                                          >> 0x17U)))) 
                                                | (7U 
                                                   & (vlSelf->Top__DOT__fetchDecodePayload[2U] 
                                                      >> 0xdU))))) 
                                 | (7U == ((0x3f8U 
                                            & ((vlSelf->Top__DOT__fetchDecodePayload[3U] 
                                                << 9U) 
                                               | (0x1f8U 
                                                  & (vlSelf->Top__DOT__fetchDecodePayload[2U] 
                                                     >> 0x17U)))) 
                                           | (7U & 
                                              (vlSelf->Top__DOT__fetchDecodePayload[2U] 
                                               >> 0xdU))))) 
                                | (6U == ((0x3f8U & 
                                           ((vlSelf->Top__DOT__fetchDecodePayload[3U] 
                                             << 9U) 
                                            | (0x1f8U 
                                               & (vlSelf->Top__DOT__fetchDecodePayload[2U] 
                                                  >> 0x17U)))) 
                                          | (7U & (
                                                   vlSelf->Top__DOT__fetchDecodePayload[2U] 
                                                   >> 0xdU))))) 
                               | (4U == ((0x3f8U & 
                                          ((vlSelf->Top__DOT__fetchDecodePayload[3U] 
                                            << 9U) 
                                           | (0x1f8U 
                                              & (vlSelf->Top__DOT__fetchDecodePayload[2U] 
                                                 >> 0x17U)))) 
                                         | (7U & (vlSelf->Top__DOT__fetchDecodePayload[2U] 
                                                  >> 0xdU))))) 
                              | (1U == ((0x3f8U & (
                                                   (vlSelf->Top__DOT__fetchDecodePayload[3U] 
                                                    << 9U) 
                                                   | (0x1f8U 
                                                      & (vlSelf->Top__DOT__fetchDecodePayload[2U] 
                                                         >> 0x17U)))) 
                                        | (7U & (vlSelf->Top__DOT__fetchDecodePayload[2U] 
                                                 >> 0xdU))))) 
                             | (5U == ((0x3f8U & ((
                                                   vlSelf->Top__DOT__fetchDecodePayload[3U] 
                                                   << 9U) 
                                                  | (0x1f8U 
                                                     & (vlSelf->Top__DOT__fetchDecodePayload[2U] 
                                                        >> 0x17U)))) 
                                       | (7U & (vlSelf->Top__DOT__fetchDecodePayload[2U] 
                                                >> 0xdU))))) 
                            | (0x105U == ((0x3f8U & 
                                           ((vlSelf->Top__DOT__fetchDecodePayload[3U] 
                                             << 9U) 
                                            | (0x1f8U 
                                               & (vlSelf->Top__DOT__fetchDecodePayload[2U] 
                                                  >> 0x17U)))) 
                                          | (7U & (
                                                   vlSelf->Top__DOT__fetchDecodePayload[2U] 
                                                   >> 0xdU)))))
                            ? ((0xfffff87fU & vlSelf->Top__DOT__decode__DOT__decodeExecuteCandidate[0U]) 
                               | (((0U == ((0x3f8U 
                                            & ((vlSelf->Top__DOT__fetchDecodePayload[3U] 
                                                << 9U) 
                                               | (0x1f8U 
                                                  & (vlSelf->Top__DOT__fetchDecodePayload[2U] 
                                                     >> 0x17U)))) 
                                           | (7U & 
                                              (vlSelf->Top__DOT__fetchDecodePayload[2U] 
                                               >> 0xdU))))
                                    ? 0U : ((0x100U 
                                             == ((0x3f8U 
                                                  & ((vlSelf->Top__DOT__fetchDecodePayload[3U] 
                                                      << 9U) 
                                                     | (0x1f8U 
                                                        & (vlSelf->Top__DOT__fetchDecodePayload[2U] 
                                                           >> 0x17U)))) 
                                                 | (7U 
                                                    & (vlSelf->Top__DOT__fetchDecodePayload[2U] 
                                                       >> 0xdU))))
                                             ? 1U : 
                                            ((7U == 
                                              ((0x3f8U 
                                                & ((vlSelf->Top__DOT__fetchDecodePayload[3U] 
                                                    << 9U) 
                                                   | (0x1f8U 
                                                      & (vlSelf->Top__DOT__fetchDecodePayload[2U] 
                                                         >> 0x17U)))) 
                                               | (7U 
                                                  & (vlSelf->Top__DOT__fetchDecodePayload[2U] 
                                                     >> 0xdU))))
                                              ? 2U : 
                                             ((6U == 
                                               ((0x3f8U 
                                                 & ((vlSelf->Top__DOT__fetchDecodePayload[3U] 
                                                     << 9U) 
                                                    | (0x1f8U 
                                                       & (vlSelf->Top__DOT__fetchDecodePayload[2U] 
                                                          >> 0x17U)))) 
                                                | (7U 
                                                   & (vlSelf->Top__DOT__fetchDecodePayload[2U] 
                                                      >> 0xdU))))
                                               ? 3U
                                               : ((4U 
                                                   == 
                                                   ((0x3f8U 
                                                     & ((vlSelf->Top__DOT__fetchDecodePayload[3U] 
                                                         << 9U) 
                                                        | (0x1f8U 
                                                           & (vlSelf->Top__DOT__fetchDecodePayload[2U] 
                                                              >> 0x17U)))) 
                                                    | (7U 
                                                       & (vlSelf->Top__DOT__fetchDecodePayload[2U] 
                                                          >> 0xdU))))
                                                   ? 4U
                                                   : 
                                                  ((1U 
                                                    == 
                                                    ((0x3f8U 
                                                      & ((vlSelf->Top__DOT__fetchDecodePayload[3U] 
                                                          << 9U) 
                                                         | (0x1f8U 
                                                            & (vlSelf->Top__DOT__fetchDecodePayload[2U] 
                                                               >> 0x17U)))) 
                                                     | (7U 
                                                        & (vlSelf->Top__DOT__fetchDecodePayload[2U] 
                                                           >> 0xdU))))
                                                    ? 5U
                                                    : 
                                                   ((5U 
                                                     == 
                                                     ((0x3f8U 
                                                       & ((vlSelf->Top__DOT__fetchDecodePayload[3U] 
                                                           << 9U) 
                                                          | (0x1f8U 
                                                             & (vlSelf->Top__DOT__fetchDecodePayload[2U] 
                                                                >> 0x17U)))) 
                                                      | (7U 
                                                         & (vlSelf->Top__DOT__fetchDecodePayload[2U] 
                                                            >> 0xdU))))
                                                     ? 6U
                                                     : 7U))))))) 
                                  << 7U)) : ((2U == 
                                              ((0x3f8U 
                                                & ((vlSelf->Top__DOT__fetchDecodePayload[3U] 
                                                    << 9U) 
                                                   | (0x1f8U 
                                                      & (vlSelf->Top__DOT__fetchDecodePayload[2U] 
                                                         >> 0x17U)))) 
                                               | (7U 
                                                  & (vlSelf->Top__DOT__fetchDecodePayload[2U] 
                                                     >> 0xdU))))
                                              ? (0x400U 
                                                 | (0xfffff87fU 
                                                    & vlSelf->Top__DOT__decode__DOT__decodeExecuteCandidate[0U]))
                                              : ((3U 
                                                  == 
                                                  ((0x3f8U 
                                                    & ((vlSelf->Top__DOT__fetchDecodePayload[3U] 
                                                        << 9U) 
                                                       | (0x1f8U 
                                                          & (vlSelf->Top__DOT__fetchDecodePayload[2U] 
                                                             >> 0x17U)))) 
                                                   | (7U 
                                                      & (vlSelf->Top__DOT__fetchDecodePayload[2U] 
                                                         >> 0xdU))))
                                                  ? 
                                                 (0x480U 
                                                  | (0xfffff87fU 
                                                     & vlSelf->Top__DOT__decode__DOT__decodeExecuteCandidate[0U]))
                                                  : 
                                                 (2U 
                                                  | vlSelf->Top__DOT__decode__DOT__decodeExecuteCandidate[0U]))));
                } else {
                    vlSelf->Top__DOT__decode__DOT__decodeExecuteCandidate[0U] 
                        = (2U | vlSelf->Top__DOT__decode__DOT__decodeExecuteCandidate[0U]);
                }
            } else {
                vlSelf->Top__DOT__decode__DOT__decodeExecuteCandidate[0U] 
                    = (2U | vlSelf->Top__DOT__decode__DOT__decodeExecuteCandidate[0U]);
            }
        } else if ((0x10U & vlSelf->Top__DOT__fetchDecodePayload[2U])) {
            vlSelf->Top__DOT__decode__DOT__decodeExecuteCandidate[0U] 
                = (2U | vlSelf->Top__DOT__decode__DOT__decodeExecuteCandidate[0U]);
        } else if ((8U & vlSelf->Top__DOT__fetchDecodePayload[2U])) {
            vlSelf->Top__DOT__decode__DOT__decodeExecuteCandidate[0U] 
                = (2U | vlSelf->Top__DOT__decode__DOT__decodeExecuteCandidate[0U]);
        } else if ((4U & vlSelf->Top__DOT__fetchDecodePayload[2U])) {
            if ((2U & vlSelf->Top__DOT__fetchDecodePayload[2U])) {
                vlSelf->Top__DOT__decode__DOT__decodeExecuteCandidate[0U] 
                    = (0x80000U | (0xffe7ffffU & vlSelf->Top__DOT__decode__DOT__decodeExecuteCandidate[0U]));
                vlSelf->Top__DOT__decode__DOT__decodeExecuteCandidate[0U] 
                    = ((0x1fffffU & vlSelf->Top__DOT__decode__DOT__decodeExecuteCandidate[0U]) 
                       | (0xffe00000U & ((0xfc000000U 
                                          & vlSelf->Top__DOT__fetchDecodePayload[2U]) 
                                         | (0x3e00000U 
                                            & (vlSelf->Top__DOT__fetchDecodePayload[2U] 
                                               << 0xdU)))));
                vlSelf->Top__DOT__decode__DOT__decodeExecuteCandidate[1U] 
                    = ((0xffe00000U & vlSelf->Top__DOT__decode__DOT__decodeExecuteCandidate[1U]) 
                       | (0x1fffffU & ((0x1ffffeU & 
                                        ((- (IData)(
                                                    (1U 
                                                     & vlSelf->Top__DOT__fetchDecodePayload[3U]))) 
                                         << 1U)) | 
                                       (1U & vlSelf->Top__DOT__fetchDecodePayload[3U]))));
                vlSelf->Top__DOT__decode__DOT__decodeExecuteCandidate[0U] 
                    = (0x20000U | vlSelf->Top__DOT__decode__DOT__decodeExecuteCandidate[0U]);
                vlSelf->Top__DOT__decode__DOT__decodeExecuteCandidate[0U] 
                    = ((0U == (7U & (vlSelf->Top__DOT__fetchDecodePayload[2U] 
                                     >> 0xdU))) ? (0xfffe7fffU 
                                                   & vlSelf->Top__DOT__decode__DOT__decodeExecuteCandidate[0U])
                        : ((1U == (7U & (vlSelf->Top__DOT__fetchDecodePayload[2U] 
                                         >> 0xdU)))
                            ? (0x8000U | (0xfffe7fffU 
                                          & vlSelf->Top__DOT__decode__DOT__decodeExecuteCandidate[0U]))
                            : ((2U == (7U & (vlSelf->Top__DOT__fetchDecodePayload[2U] 
                                             >> 0xdU)))
                                ? (0x18000U | vlSelf->Top__DOT__decode__DOT__decodeExecuteCandidate[0U])
                                : (2U | vlSelf->Top__DOT__decode__DOT__decodeExecuteCandidate[0U]))));
            } else {
                vlSelf->Top__DOT__decode__DOT__decodeExecuteCandidate[0U] 
                    = (2U | vlSelf->Top__DOT__decode__DOT__decodeExecuteCandidate[0U]);
            }
        } else {
            vlSelf->Top__DOT__decode__DOT__decodeExecuteCandidate[0U] 
                = (2U | vlSelf->Top__DOT__decode__DOT__decodeExecuteCandidate[0U]);
        }
    } else if ((0x20U & vlSelf->Top__DOT__fetchDecodePayload[2U])) {
        if ((0x10U & vlSelf->Top__DOT__fetchDecodePayload[2U])) {
            vlSelf->Top__DOT__decode__DOT__decodeExecuteCandidate[0U] 
                = (2U | vlSelf->Top__DOT__decode__DOT__decodeExecuteCandidate[0U]);
        } else if ((8U & vlSelf->Top__DOT__fetchDecodePayload[2U])) {
            if ((4U & vlSelf->Top__DOT__fetchDecodePayload[2U])) {
                if ((2U & vlSelf->Top__DOT__fetchDecodePayload[2U])) {
                    vlSelf->Top__DOT__decode__DOT__decodeExecuteCandidate[1U] 
                        = ((0xfc1fffffU & vlSelf->Top__DOT__decode__DOT__decodeExecuteCandidate[1U]) 
                           | (0x3e00000U & (vlSelf->Top__DOT__fetchDecodePayload[2U] 
                                            << 0xdU)));
                    vlSelf->Top__DOT__decode__DOT__decodeExecuteCandidate[0U] 
                        = (0x100000U | (0xffe7ffffU 
                                        & vlSelf->Top__DOT__decode__DOT__decodeExecuteCandidate[0U]));
                    vlSelf->Top__DOT__decode__DOT__decodeExecuteCandidate[0U] 
                        = (4U | (0xffffffe3U & vlSelf->Top__DOT__decode__DOT__decodeExecuteCandidate[0U]));
                    vlSelf->Top__DOT__decode__DOT__decodeExecuteCandidate[0U] 
                        = (0x1fffffU & vlSelf->Top__DOT__decode__DOT__decodeExecuteCandidate[0U]);
                    vlSelf->Top__DOT__decode__DOT__decodeExecuteCandidate[1U] 
                        = ((0xffe00000U & vlSelf->Top__DOT__decode__DOT__decodeExecuteCandidate[1U]) 
                           | (0x1ffffeU & ((0x100000U 
                                            & (vlSelf->Top__DOT__fetchDecodePayload[3U] 
                                               << 0x14U)) 
                                           | (0xffffeU 
                                              & (vlSelf->Top__DOT__fetchDecodePayload[2U] 
                                                 >> 0xcU)))));
                } else {
                    vlSelf->Top__DOT__decode__DOT__decodeExecuteCandidate[0U] 
                        = (2U | vlSelf->Top__DOT__decode__DOT__decodeExecuteCandidate[0U]);
                }
            } else {
                vlSelf->Top__DOT__decode__DOT__decodeExecuteCandidate[0U] 
                    = (2U | vlSelf->Top__DOT__decode__DOT__decodeExecuteCandidate[0U]);
            }
        } else if ((4U & vlSelf->Top__DOT__fetchDecodePayload[2U])) {
            if ((2U & vlSelf->Top__DOT__fetchDecodePayload[2U])) {
                vlSelf->Top__DOT__decode__DOT__decodeExecuteCandidate[1U] 
                    = ((0xfc1fffffU & vlSelf->Top__DOT__decode__DOT__decodeExecuteCandidate[1U]) 
                       | (0x3e00000U & (vlSelf->Top__DOT__fetchDecodePayload[2U] 
                                        << 0xdU)));
                vlSelf->Top__DOT__decode__DOT__decodeExecuteCandidate[0U] 
                    = (0x80000U | (0xffe7ffffU & vlSelf->Top__DOT__decode__DOT__decodeExecuteCandidate[0U]));
                vlSelf->Top__DOT__decode__DOT__decodeExecuteCandidate[0U] 
                    = (4U | (0xffffffe3U & vlSelf->Top__DOT__decode__DOT__decodeExecuteCandidate[0U]));
                vlSelf->Top__DOT__decode__DOT__decodeExecuteCandidate[0U] 
                    = ((0x1fffffU & vlSelf->Top__DOT__decode__DOT__decodeExecuteCandidate[0U]) 
                       | (0xffe00000U & vlSelf->Top__DOT__fetchDecodePayload[2U]));
                vlSelf->Top__DOT__decode__DOT__decodeExecuteCandidate[1U] 
                    = ((0xffe00000U & vlSelf->Top__DOT__decode__DOT__decodeExecuteCandidate[1U]) 
                       | (0x1fffffU & ((0x1ffffeU & 
                                        ((- (IData)(
                                                    (1U 
                                                     & vlSelf->Top__DOT__fetchDecodePayload[3U]))) 
                                         << 1U)) | 
                                       (1U & vlSelf->Top__DOT__fetchDecodePayload[3U]))));
                vlSelf->Top__DOT__decode__DOT__decodeExecuteCandidate[0U] 
                    = ((0x8000U & vlSelf->Top__DOT__fetchDecodePayload[2U])
                        ? ((0x4000U & vlSelf->Top__DOT__fetchDecodePayload[2U])
                            ? ((0xfffff87fU & vlSelf->Top__DOT__decode__DOT__decodeExecuteCandidate[0U]) 
                               | (((0x2000U & vlSelf->Top__DOT__fetchDecodePayload[2U])
                                    ? 2U : 3U) << 7U))
                            : ((0x2000U & vlSelf->Top__DOT__fetchDecodePayload[2U])
                                ? ((0U == (0x7fU & 
                                           ((vlSelf->Top__DOT__fetchDecodePayload[3U] 
                                             << 6U) 
                                            | (vlSelf->Top__DOT__fetchDecodePayload[2U] 
                                               >> 0x1aU))))
                                    ? (0x300U | (0xfffff87fU 
                                                 & vlSelf->Top__DOT__decode__DOT__decodeExecuteCandidate[0U]))
                                    : ((0x20U == (0x7fU 
                                                  & ((vlSelf->Top__DOT__fetchDecodePayload[3U] 
                                                      << 6U) 
                                                     | (vlSelf->Top__DOT__fetchDecodePayload[2U] 
                                                        >> 0x1aU))))
                                        ? (0x380U | 
                                           (0xfffff87fU 
                                            & vlSelf->Top__DOT__decode__DOT__decodeExecuteCandidate[0U]))
                                        : (2U | vlSelf->Top__DOT__decode__DOT__decodeExecuteCandidate[0U])))
                                : (0x200U | (0xfffff87fU 
                                             & vlSelf->Top__DOT__decode__DOT__decodeExecuteCandidate[0U]))))
                        : ((0x4000U & vlSelf->Top__DOT__fetchDecodePayload[2U])
                            ? ((0xfffff87fU & vlSelf->Top__DOT__decode__DOT__decodeExecuteCandidate[0U]) 
                               | (((0x2000U & vlSelf->Top__DOT__fetchDecodePayload[2U])
                                    ? 9U : 8U) << 7U))
                            : ((0x2000U & vlSelf->Top__DOT__fetchDecodePayload[2U])
                                ? ((0U == (0x7fU & 
                                           ((vlSelf->Top__DOT__fetchDecodePayload[3U] 
                                             << 6U) 
                                            | (vlSelf->Top__DOT__fetchDecodePayload[2U] 
                                               >> 0x1aU))))
                                    ? (0x280U | (0xfffff87fU 
                                                 & vlSelf->Top__DOT__decode__DOT__decodeExecuteCandidate[0U]))
                                    : (2U | vlSelf->Top__DOT__decode__DOT__decodeExecuteCandidate[0U]))
                                : (0xfffff87fU & vlSelf->Top__DOT__decode__DOT__decodeExecuteCandidate[0U]))));
            } else {
                vlSelf->Top__DOT__decode__DOT__decodeExecuteCandidate[0U] 
                    = (2U | vlSelf->Top__DOT__decode__DOT__decodeExecuteCandidate[0U]);
            }
        } else {
            vlSelf->Top__DOT__decode__DOT__decodeExecuteCandidate[0U] 
                = (2U | vlSelf->Top__DOT__decode__DOT__decodeExecuteCandidate[0U]);
        }
    } else if ((0x10U & vlSelf->Top__DOT__fetchDecodePayload[2U])) {
        if ((8U & vlSelf->Top__DOT__fetchDecodePayload[2U])) {
            if ((4U & vlSelf->Top__DOT__fetchDecodePayload[2U])) {
                if ((1U & (~ (vlSelf->Top__DOT__fetchDecodePayload[2U] 
                              >> 1U)))) {
                    vlSelf->Top__DOT__decode__DOT__decodeExecuteCandidate[0U] 
                        = (2U | vlSelf->Top__DOT__decode__DOT__decodeExecuteCandidate[0U]);
                }
            } else {
                vlSelf->Top__DOT__decode__DOT__decodeExecuteCandidate[0U] 
                    = (2U | vlSelf->Top__DOT__decode__DOT__decodeExecuteCandidate[0U]);
            }
        } else {
            vlSelf->Top__DOT__decode__DOT__decodeExecuteCandidate[0U] 
                = (2U | vlSelf->Top__DOT__decode__DOT__decodeExecuteCandidate[0U]);
        }
    } else if ((8U & vlSelf->Top__DOT__fetchDecodePayload[2U])) {
        vlSelf->Top__DOT__decode__DOT__decodeExecuteCandidate[0U] 
            = (2U | vlSelf->Top__DOT__decode__DOT__decodeExecuteCandidate[0U]);
    } else if ((4U & vlSelf->Top__DOT__fetchDecodePayload[2U])) {
        if ((2U & vlSelf->Top__DOT__fetchDecodePayload[2U])) {
            vlSelf->Top__DOT__decode__DOT__decodeExecuteCandidate[1U] 
                = ((0xfc1fffffU & vlSelf->Top__DOT__decode__DOT__decodeExecuteCandidate[1U]) 
                   | (0x3e00000U & (vlSelf->Top__DOT__fetchDecodePayload[2U] 
                                    << 0xdU)));
            vlSelf->Top__DOT__decode__DOT__decodeExecuteCandidate[0U] 
                = (0x80000U | (0xffe7ffffU & vlSelf->Top__DOT__decode__DOT__decodeExecuteCandidate[0U]));
            vlSelf->Top__DOT__decode__DOT__decodeExecuteCandidate[0U] 
                = (8U | (0xffffffe3U & vlSelf->Top__DOT__decode__DOT__decodeExecuteCandidate[0U]));
            vlSelf->Top__DOT__decode__DOT__decodeExecuteCandidate[0U] 
                = ((0x1fffffU & vlSelf->Top__DOT__decode__DOT__decodeExecuteCandidate[0U]) 
                   | (0xffe00000U & vlSelf->Top__DOT__fetchDecodePayload[2U]));
            vlSelf->Top__DOT__decode__DOT__decodeExecuteCandidate[1U] 
                = ((0xffe00000U & vlSelf->Top__DOT__decode__DOT__decodeExecuteCandidate[1U]) 
                   | (0x1fffffU & ((0x1ffffeU & ((- (IData)(
                                                            (1U 
                                                             & vlSelf->Top__DOT__fetchDecodePayload[3U]))) 
                                                 << 1U)) 
                                   | (1U & vlSelf->Top__DOT__fetchDecodePayload[3U]))));
            vlSelf->Top__DOT__decode__DOT__decodeExecuteCandidate[0U] 
                = (0x40000U | vlSelf->Top__DOT__decode__DOT__decodeExecuteCandidate[0U]);
            vlSelf->Top__DOT__decode__DOT__decodeExecuteCandidate[0U] 
                = ((0x8000U & vlSelf->Top__DOT__fetchDecodePayload[2U])
                    ? ((0x4000U & vlSelf->Top__DOT__fetchDecodePayload[2U])
                        ? (2U | vlSelf->Top__DOT__decode__DOT__decodeExecuteCandidate[0U])
                        : ((0xfffe3fffU & vlSelf->Top__DOT__decode__DOT__decodeExecuteCandidate[0U]) 
                           | (((0x2000U & vlSelf->Top__DOT__fetchDecodePayload[2U])
                                ? 2U : 0U) << 0xeU)))
                    : ((0x4000U & vlSelf->Top__DOT__fetchDecodePayload[2U])
                        ? ((0x2000U & vlSelf->Top__DOT__fetchDecodePayload[2U])
                            ? (2U | vlSelf->Top__DOT__decode__DOT__decodeExecuteCandidate[0U])
                            : (0x1c000U | vlSelf->Top__DOT__decode__DOT__decodeExecuteCandidate[0U]))
                        : ((0xfffe3fffU & vlSelf->Top__DOT__decode__DOT__decodeExecuteCandidate[0U]) 
                           | (((0x2000U & vlSelf->Top__DOT__fetchDecodePayload[2U])
                                ? 3U : 1U) << 0xeU))));
        } else {
            vlSelf->Top__DOT__decode__DOT__decodeExecuteCandidate[0U] 
                = (2U | vlSelf->Top__DOT__decode__DOT__decodeExecuteCandidate[0U]);
        }
    } else {
        vlSelf->Top__DOT__decode__DOT__decodeExecuteCandidate[0U] 
            = (2U | vlSelf->Top__DOT__decode__DOT__decodeExecuteCandidate[0U]);
    }
    vlSelf->Top__DOT__destinationEnable = ((IData)(vlSelf->dbg_MEM_WB_Valid) 
                                           & (IData)(
                                                     (4U 
                                                      == 
                                                      (6U 
                                                       & vlSelf->Top__DOT__memoryWritebackPayload[0U]))));
    vlSelf->Top__DOT__controlReset = 0U;
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((IData)(vlSelf->dbg_ID_EX_Valid) & (vlSelf->Top__DOT__decodeExecutePayload[0U] 
                                                 >> 1U))) {
            vlSelf->Top__DOT__controlReset = 1U;
        } else if (((IData)(vlSelf->dbg_MEM_WB_Valid) 
                    & (vlSelf->Top__DOT__memoryWritebackPayload[0U] 
                       >> 1U))) {
            vlSelf->Top__DOT__controlReset = 1U;
        }
    }
    vlSelf->Top__DOT__forwardEnable1 = 0U;
    vlSelf->Top__DOT__forwardEnable2 = 0U;
    vlSelf->Top__DOT__forwardData1 = 0U;
    if ((0U != (0x1fU & ((vlSelf->Top__DOT__decodeExecutePayload[2U] 
                          << 1U) | (vlSelf->Top__DOT__decodeExecutePayload[1U] 
                                    >> 0x1fU))))) {
        if (((((IData)(vlSelf->dbg_EX_MEM_Valid) & 
               ((0U != (7U & (vlSelf->Top__DOT__executeMemoryPayload[0U] 
                              >> 2U))) & (2U != (7U 
                                                 & (vlSelf->Top__DOT__executeMemoryPayload[0U] 
                                                    >> 2U))))) 
              & (0U != (0x1fU & (vlSelf->Top__DOT__executeMemoryPayload[2U] 
                                 >> 0xaU)))) & ((0x1fU 
                                                 & ((vlSelf->Top__DOT__decodeExecutePayload[2U] 
                                                     << 1U) 
                                                    | (vlSelf->Top__DOT__decodeExecutePayload[1U] 
                                                       >> 0x1fU))) 
                                                == 
                                                (0x1fU 
                                                 & (vlSelf->Top__DOT__executeMemoryPayload[2U] 
                                                    >> 0xaU))))) {
            vlSelf->Top__DOT__forwardEnable1 = 1U;
            vlSelf->Top__DOT__forwardData1 = ((1U == 
                                               (7U 
                                                & (vlSelf->Top__DOT__executeMemoryPayload[0U] 
                                                   >> 2U)))
                                               ? ((
                                                   vlSelf->Top__DOT__executeMemoryPayload[2U] 
                                                   << 0x1bU) 
                                                  | (vlSelf->Top__DOT__executeMemoryPayload[1U] 
                                                     >> 5U))
                                               : ((3U 
                                                   == 
                                                   (7U 
                                                    & (vlSelf->Top__DOT__executeMemoryPayload[0U] 
                                                       >> 2U)))
                                                   ? 
                                                  ((vlSelf->Top__DOT__executeMemoryPayload[3U] 
                                                    << 0x11U) 
                                                   | (vlSelf->Top__DOT__executeMemoryPayload[2U] 
                                                      >> 0xfU))
                                                   : 0U));
        } else if (((((IData)(vlSelf->dbg_MEM_WB_Valid) 
                      & (vlSelf->Top__DOT__memoryWritebackPayload[0U] 
                         >> 2U)) & (0U != (0x1fU & 
                                           (vlSelf->Top__DOT__memoryWritebackPayload[1U] 
                                            >> 3U)))) 
                    & ((0x1fU & ((vlSelf->Top__DOT__decodeExecutePayload[2U] 
                                  << 1U) | (vlSelf->Top__DOT__decodeExecutePayload[1U] 
                                            >> 0x1fU))) 
                       == (0x1fU & (vlSelf->Top__DOT__memoryWritebackPayload[1U] 
                                    >> 3U))))) {
            vlSelf->Top__DOT__forwardEnable1 = 1U;
            vlSelf->Top__DOT__forwardData1 = ((vlSelf->Top__DOT__memoryWritebackPayload[1U] 
                                               << 0x1dU) 
                                              | (vlSelf->Top__DOT__memoryWritebackPayload[0U] 
                                                 >> 3U));
        }
    }
    vlSelf->Top__DOT__forwardData2 = 0U;
    if ((0U != (0x1fU & (vlSelf->Top__DOT__decodeExecutePayload[1U] 
                         >> 0x1aU)))) {
        if (((((IData)(vlSelf->dbg_EX_MEM_Valid) & 
               ((0U != (7U & (vlSelf->Top__DOT__executeMemoryPayload[0U] 
                              >> 2U))) & (2U != (7U 
                                                 & (vlSelf->Top__DOT__executeMemoryPayload[0U] 
                                                    >> 2U))))) 
              & (0U != (0x1fU & (vlSelf->Top__DOT__executeMemoryPayload[2U] 
                                 >> 0xaU)))) & ((0x1fU 
                                                 & (vlSelf->Top__DOT__decodeExecutePayload[1U] 
                                                    >> 0x1aU)) 
                                                == 
                                                (0x1fU 
                                                 & (vlSelf->Top__DOT__executeMemoryPayload[2U] 
                                                    >> 0xaU))))) {
            vlSelf->Top__DOT__forwardEnable2 = 1U;
            vlSelf->Top__DOT__forwardData2 = ((1U == 
                                               (7U 
                                                & (vlSelf->Top__DOT__executeMemoryPayload[0U] 
                                                   >> 2U)))
                                               ? ((
                                                   vlSelf->Top__DOT__executeMemoryPayload[2U] 
                                                   << 0x1bU) 
                                                  | (vlSelf->Top__DOT__executeMemoryPayload[1U] 
                                                     >> 5U))
                                               : ((3U 
                                                   == 
                                                   (7U 
                                                    & (vlSelf->Top__DOT__executeMemoryPayload[0U] 
                                                       >> 2U)))
                                                   ? 
                                                  ((vlSelf->Top__DOT__executeMemoryPayload[3U] 
                                                    << 0x11U) 
                                                   | (vlSelf->Top__DOT__executeMemoryPayload[2U] 
                                                      >> 0xfU))
                                                   : 0U));
        } else if (((((IData)(vlSelf->dbg_MEM_WB_Valid) 
                      & (vlSelf->Top__DOT__memoryWritebackPayload[0U] 
                         >> 2U)) & (0U != (0x1fU & 
                                           (vlSelf->Top__DOT__memoryWritebackPayload[1U] 
                                            >> 3U)))) 
                    & ((0x1fU & (vlSelf->Top__DOT__decodeExecutePayload[1U] 
                                 >> 0x1aU)) == (0x1fU 
                                                & (vlSelf->Top__DOT__memoryWritebackPayload[1U] 
                                                   >> 3U))))) {
            vlSelf->Top__DOT__forwardEnable2 = 1U;
            vlSelf->Top__DOT__forwardData2 = ((vlSelf->Top__DOT__memoryWritebackPayload[1U] 
                                               << 0x1dU) 
                                              | (vlSelf->Top__DOT__memoryWritebackPayload[0U] 
                                                 >> 3U));
        }
    }
    vlSelf->dbg_IMEM_data = vlSelf->Top__DOT__instructionData;
    vlSelf->dbg_wb_value = ((IData)(vlSelf->Top__DOT__destinationEnable)
                             ? ((vlSelf->Top__DOT__memoryWritebackPayload[1U] 
                                 << 0x1dU) | (vlSelf->Top__DOT__memoryWritebackPayload[0U] 
                                              >> 3U))
                             : 0U);
    vlSelf->dbg_trap = vlSelf->Top__DOT__controlReset;
}

void VTop___024root___act_sequent__TOP__0(VTop___024root* vlSelf);

VL_ATTR_COLD void VTop___024root___eval_stl(VTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTop___024root___eval_stl\n"); );
    // Body
    if ((1ULL & vlSelf->__VstlTriggered.word(0U))) {
        VTop___024root___stl_sequent__TOP__0(vlSelf);
    }
    if ((3ULL & vlSelf->__VstlTriggered.word(0U))) {
        VTop___024root___act_sequent__TOP__0(vlSelf);
    }
}

VL_ATTR_COLD void VTop___024root___eval_triggers__stl(VTop___024root* vlSelf);

VL_ATTR_COLD bool VTop___024root___eval_phase__stl(VTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTop___024root___eval_phase__stl\n"); );
    // Init
    CData/*0:0*/ __VstlExecute;
    // Body
    VTop___024root___eval_triggers__stl(vlSelf);
    __VstlExecute = vlSelf->__VstlTriggered.any();
    if (__VstlExecute) {
        VTop___024root___eval_stl(vlSelf);
    }
    return (__VstlExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VTop___024root___dump_triggers__ico(VTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTop___024root___dump_triggers__ico\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VicoTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VicoTriggered.word(0U))) {
        VL_DBG_MSGF("         'ico' region trigger index 0 is active: Internal 'ico' trigger - first iteration\n");
    }
    if ((2ULL & vlSelf->__VicoTriggered.word(0U))) {
        VL_DBG_MSGF("         'ico' region trigger index 1 is active: @([hybrid] Top.memoryWritebackControl)\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void VTop___024root___dump_triggers__act(VTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTop___024root___dump_triggers__act\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VactTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 0 is active: @([hybrid] Top.memoryWritebackControl)\n");
    }
    if ((2ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 1 is active: @(posedge clock)\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void VTop___024root___dump_triggers__nba(VTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTop___024root___dump_triggers__nba\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VnbaTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @([hybrid] Top.memoryWritebackControl)\n");
    }
    if ((2ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 1 is active: @(posedge clock)\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void VTop___024root___ctor_var_reset(VTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTop___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->clock = VL_RAND_RESET_I(1);
    vlSelf->reset = VL_RAND_RESET_I(1);
    vlSelf->__SYM__interrupt = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(1024, vlSelf->dbg_registers);
    vlSelf->dbg_IF_ID_Valid = VL_RAND_RESET_I(1);
    vlSelf->dbg_ID_EX_Valid = VL_RAND_RESET_I(1);
    vlSelf->dbg_EX_MEM_Valid = VL_RAND_RESET_I(1);
    vlSelf->dbg_MEM_WB_Valid = VL_RAND_RESET_I(1);
    vlSelf->dbg_IF_ID_programCounter = VL_RAND_RESET_I(32);
    vlSelf->dbg_IF_ID_instruction = VL_RAND_RESET_I(32);
    vlSelf->dbg_ID_EX_programCounter = VL_RAND_RESET_I(32);
    vlSelf->dbg_EX_MEM_programCounter = VL_RAND_RESET_I(32);
    vlSelf->dbg_MEM_WB_programCounter = VL_RAND_RESET_I(32);
    vlSelf->dbg_trap = VL_RAND_RESET_I(1);
    vlSelf->dbg_IMEM_data = VL_RAND_RESET_I(32);
    vlSelf->dbg_IMEM_valid = VL_RAND_RESET_I(1);
    vlSelf->dbg_pc = VL_RAND_RESET_I(32);
    vlSelf->dbg_wb_value = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(1024, vlSelf->Top__DOT__debug_regs_flat);
    vlSelf->Top__DOT__instructionDataValid = VL_RAND_RESET_I(1);
    vlSelf->Top__DOT__instructionData = VL_RAND_RESET_I(32);
    vlSelf->Top__DOT__loadDataValid = VL_RAND_RESET_I(1);
    vlSelf->Top__DOT__storeComplete = VL_RAND_RESET_I(1);
    vlSelf->Top__DOT__fetchDecodeControl = VL_RAND_RESET_I(2);
    vlSelf->Top__DOT__decodeExecuteControl = VL_RAND_RESET_I(2);
    vlSelf->Top__DOT__executeMemoryControl = VL_RAND_RESET_I(2);
    vlSelf->Top__DOT__memoryWritebackControl = VL_RAND_RESET_I(2);
    vlSelf->Top__DOT__controlReset = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(97, vlSelf->Top__DOT__fetchDecodePayload);
    VL_RAND_RESET_W(196, vlSelf->Top__DOT__decodeExecutePayload);
    vlSelf->Top__DOT__branchValid = VL_RAND_RESET_I(1);
    vlSelf->Top__DOT__branchData = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(143, vlSelf->Top__DOT__executeMemoryPayload);
    VL_RAND_RESET_W(72, vlSelf->Top__DOT__memoryWritebackPayload);
    vlSelf->Top__DOT__storeData = VL_RAND_RESET_I(32);
    vlSelf->Top__DOT__realStoreByteEnable = VL_RAND_RESET_I(4);
    vlSelf->Top__DOT__storeValid = VL_RAND_RESET_I(1);
    vlSelf->Top__DOT__destinationEnable = VL_RAND_RESET_I(1);
    vlSelf->Top__DOT__forwardEnable1 = VL_RAND_RESET_I(1);
    vlSelf->Top__DOT__forwardEnable2 = VL_RAND_RESET_I(1);
    vlSelf->Top__DOT__forwardData1 = VL_RAND_RESET_I(32);
    vlSelf->Top__DOT__forwardData2 = VL_RAND_RESET_I(32);
    vlSelf->Top__DOT__fetch__DOT__programCounter = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(196, vlSelf->Top__DOT__decode__DOT__decodeExecuteCandidate);
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        vlSelf->Top__DOT__registerFile__DOT__registers[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->Top__DOT__execute__DOT__result = VL_RAND_RESET_I(32);
    vlSelf->Top__DOT__execute__DOT__redirectAsserted = VL_RAND_RESET_I(1);
    vlSelf->Top__DOT__memory__DOT__illegal = VL_RAND_RESET_I(1);
    vlSelf->Top__DOT__memory__DOT__storeReq = VL_RAND_RESET_I(1);
    vlSelf->Top__DOT__memory__DOT__unnamedblk1__DOT__word = VL_RAND_RESET_I(32);
    vlSelf->Top__DOT__memory__DOT__unnamedblk1__DOT__b = VL_RAND_RESET_I(8);
    vlSelf->Top__DOT__memory__DOT__unnamedblk1__DOT__h = VL_RAND_RESET_I(16);
    for (int __Vi0 = 0; __Vi0 < 1024; ++__Vi0) {
        vlSelf->Top__DOT__imem_inst__DOT__mem[__Vi0] = VL_RAND_RESET_I(32);
    }
    for (int __Vi0 = 0; __Vi0 < 1024; ++__Vi0) {
        vlSelf->Top__DOT__dmem_inst__DOT__mem[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->Top__DOT__dmem_inst__DOT__storeValid_q = VL_RAND_RESET_I(1);
    vlSelf->Top__DOT__dmem_inst__DOT__unnamedblk2__DOT__idx = 0;
    vlSelf->Top__DOT__dmem_inst__DOT__unnamedblk2__DOT__word = VL_RAND_RESET_I(32);
    vlSelf->__Vtrigprevexpr___TOP__Top__DOT__memoryWritebackControl__0 = VL_RAND_RESET_I(2);
    vlSelf->__VstlDidInit = 0;
    vlSelf->__Vtrigprevexpr___TOP__Top__DOT__memoryWritebackControl__1 = VL_RAND_RESET_I(2);
    vlSelf->__VicoDidInit = 0;
    vlSelf->__Vtrigprevexpr___TOP__Top__DOT__memoryWritebackControl__2 = VL_RAND_RESET_I(2);
    vlSelf->__Vtrigprevexpr___TOP__clock__0 = VL_RAND_RESET_I(1);
    vlSelf->__VactDidInit = 0;
}
