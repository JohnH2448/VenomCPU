#include "obj_dir/VTop.h"
#include "verilated.h"

int main(int argc, char **argv) {
    Verilated::commandArgs(argc, argv);

    VTop top;

    top.__SYM__interrupt = 0;

    // reset
    top.reset = 1;
    for (int i = 0; i < 5; i++) {
        top.clock = 0; top.eval();
        top.clock = 1; top.eval();
    }
    top.reset = 0;
    printf("SIM: starting execution\n");

    // run
    for (int i = 0; i < 50; i++) {
        top.clock = 0; top.eval();
        top.clock = 1; top.eval();
        printf("PC=%08x FD.pc=%08x FD.instr=%08x v=%d\n",
            top.dbg_instructionAddress,
            top.dbg_fd_pc,
            top.dbg_fd_instr,
            top.dbg_fd_valid);
    }
}
