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
    vlSelf->Top__DOT__instructionDataValid = (1U & 
                                              (~ (IData)(vlSelf->reset)));
    vlSelf->dbg_fd_pc = ((vlSelf->Top__DOT__fetchDecodePayload[2U] 
                          << 0x1fU) | (vlSelf->Top__DOT__fetchDecodePayload[1U] 
                                       >> 1U));
    vlSelf->dbg_fd_instr = ((vlSelf->Top__DOT__fetchDecodePayload[3U] 
                             << 0x1fU) | (vlSelf->Top__DOT__fetchDecodePayload[2U] 
                                          >> 1U));
    vlSelf->dbg_fd_valid = (1U & vlSelf->Top__DOT__fetchDecodePayload[0U]);
    vlSelf->Top__DOT__storeData = (((vlSelf->Top__DOT__executeMemoryPayload[1U] 
                                     << 0x1bU) | (vlSelf->Top__DOT__executeMemoryPayload[0U] 
                                                  >> 5U)) 
                                   << (0x18U & (vlSelf->Top__DOT__executeMemoryPayload[1U] 
                                                >> 2U)));
    vlSelf->Top__DOT__controlReset = 0U;
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((IData)((3U == (3U & vlSelf->Top__DOT__decodeExecutePayload[0U])))) {
            vlSelf->Top__DOT__controlReset = 1U;
        } else if ((IData)((3U == (3U & vlSelf->Top__DOT__memoryWritebackPayload[0U])))) {
            vlSelf->Top__DOT__controlReset = 1U;
        }
        vlSelf->dbg_instructionAddress = vlSelf->Top__DOT__fetch__DOT__programCounter;
        Top__DOT__readAddress2 = 0U;
        Top__DOT__readAddress1 = 0U;
        vlSelf->Top__DOT__loadDataValid = 1U;
    } else {
        vlSelf->dbg_instructionAddress = vlSelf->Top__DOT__fetch__DOT__programCounter;
        Top__DOT__readAddress2 = 0U;
        Top__DOT__readAddress1 = 0U;
        vlSelf->Top__DOT__loadDataValid = 0U;
    }
    vlSelf->Top__DOT__instructionData = ((IData)(vlSelf->reset)
                                          ? 0x13U : 
                                         vlSelf->Top__DOT__imem_inst__DOT__mem
                                         [(0x3ffU & 
                                           (vlSelf->dbg_instructionAddress 
                                            >> 2U))]);
    vlSelf->Top__DOT__decode__DOT__decodeExecuteCandidate[0U] = 0U;
    vlSelf->Top__DOT__decode__DOT__decodeExecuteCandidate[1U] = 0U;
    vlSelf->Top__DOT__decode__DOT__decodeExecuteCandidate[2U] = 0U;
    vlSelf->Top__DOT__decode__DOT__decodeExecuteCandidate[3U] = 0U;
    vlSelf->Top__DOT__decode__DOT__decodeExecuteCandidate[4U] = 0U;
    vlSelf->Top__DOT__decode__DOT__decodeExecuteCandidate[5U] = 0U;
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
                    }
                }
            }
        }
    }
    vlSelf->Top__DOT__decode__DOT__decodeExecuteCandidate[1U] 
        = ((0x3ffffffU & vlSelf->Top__DOT__decode__DOT__decodeExecuteCandidate[1U]) 
           | (((0U == (IData)(Top__DOT__readAddress2))
                ? 0U : vlSelf->Top__DOT__registerFile__DOT__registers
               [Top__DOT__readAddress2]) << 0x1aU));
    if ((0x80U & vlSelf->Top__DOT__fetchDecodePayload[2U])) {
        if ((0x40U & vlSelf->Top__DOT__fetchDecodePayload[2U])) {
            if ((1U & (~ (vlSelf->Top__DOT__fetchDecodePayload[2U] 
                          >> 5U)))) {
                if ((1U & (~ (vlSelf->Top__DOT__fetchDecodePayload[2U] 
                              >> 4U)))) {
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
    vlSelf->Top__DOT__decode__DOT__decodeExecuteCandidate[2U] 
        = ((((0U == (IData)(Top__DOT__readAddress2))
              ? 0U : vlSelf->Top__DOT__registerFile__DOT__registers
             [Top__DOT__readAddress2]) >> 6U) | (((0U 
                                                   == (IData)(Top__DOT__readAddress1))
                                                   ? 0U
                                                   : 
                                                  vlSelf->Top__DOT__registerFile__DOT__registers
                                                  [Top__DOT__readAddress1]) 
                                                 << 0x1aU));
    vlSelf->Top__DOT__decode__DOT__decodeExecuteCandidate[3U] 
        = ((((0U == (IData)(Top__DOT__readAddress1))
              ? 0U : vlSelf->Top__DOT__registerFile__DOT__registers
             [Top__DOT__readAddress1]) >> 6U) | ((IData)(
                                                         (((QData)((IData)(
                                                                           vlSelf->Top__DOT__fetchDecodePayload[2U])) 
                                                           << 0x3fU) 
                                                          | (((QData)((IData)(
                                                                              vlSelf->Top__DOT__fetchDecodePayload[1U])) 
                                                              << 0x1fU) 
                                                             | ((QData)((IData)(
                                                                                vlSelf->Top__DOT__fetchDecodePayload[0U])) 
                                                                >> 1U)))) 
                                                 << 0x1aU));
    vlSelf->Top__DOT__decode__DOT__decodeExecuteCandidate[4U] 
        = (((IData)((((QData)((IData)(vlSelf->Top__DOT__fetchDecodePayload[2U])) 
                      << 0x3fU) | (((QData)((IData)(
                                                    vlSelf->Top__DOT__fetchDecodePayload[1U])) 
                                    << 0x1fU) | ((QData)((IData)(
                                                                 vlSelf->Top__DOT__fetchDecodePayload[0U])) 
                                                 >> 1U)))) 
            >> 6U) | ((IData)(((((QData)((IData)(vlSelf->Top__DOT__fetchDecodePayload[2U])) 
                                 << 0x3fU) | (((QData)((IData)(
                                                               vlSelf->Top__DOT__fetchDecodePayload[1U])) 
                                               << 0x1fU) 
                                              | ((QData)((IData)(
                                                                 vlSelf->Top__DOT__fetchDecodePayload[0U])) 
                                                 >> 1U))) 
                               >> 0x20U)) << 0x1aU));
    vlSelf->Top__DOT__decode__DOT__decodeExecuteCandidate[5U] 
        = ((IData)(((((QData)((IData)(vlSelf->Top__DOT__fetchDecodePayload[2U])) 
                      << 0x3fU) | (((QData)((IData)(
                                                    vlSelf->Top__DOT__fetchDecodePayload[1U])) 
                                    << 0x1fU) | ((QData)((IData)(
                                                                 vlSelf->Top__DOT__fetchDecodePayload[0U])) 
                                                 >> 1U))) 
                    >> 0x20U)) >> 6U);
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
    vlSelf->dbg_instructionAddress = VL_RAND_RESET_I(32);
    vlSelf->dbg_fd_pc = VL_RAND_RESET_I(32);
    vlSelf->dbg_fd_instr = VL_RAND_RESET_I(32);
    vlSelf->dbg_fd_valid = VL_RAND_RESET_I(1);
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
    VL_RAND_RESET_W(186, vlSelf->Top__DOT__decodeExecutePayload);
    vlSelf->Top__DOT__branchValid = VL_RAND_RESET_I(1);
    vlSelf->Top__DOT__branchData = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(143, vlSelf->Top__DOT__executeMemoryPayload);
    VL_RAND_RESET_W(72, vlSelf->Top__DOT__memoryWritebackPayload);
    vlSelf->Top__DOT__storeData = VL_RAND_RESET_I(32);
    vlSelf->Top__DOT__realStoreByteEnable = VL_RAND_RESET_I(4);
    vlSelf->Top__DOT__storeValid = VL_RAND_RESET_I(1);
    vlSelf->Top__DOT__fetch__DOT__programCounter = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(186, vlSelf->Top__DOT__decode__DOT__decodeExecuteCandidate);
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
