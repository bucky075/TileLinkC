// simple Verilator harness for tb/tb_tl_stress.sv
#include "Vtb_tl_stress.h"
#include "verilated.h"
#include <iostream>
#include <csignal>

int main(int argc, char **argv) {
    Verilated::commandArgs(argc, argv);

    Vtb_tl_stress* top = new Vtb_tl_stress;

    // clock/reset parameters
    const uint64_t MAX_CYCLES = 200000; // adjust for longer/shorter stress runs
    const int CLK_HALF_PERIOD_PS = 5000; // 5 ns half period -> 10 ns full period (100 MHz)
    uint64_t cycles = 0;

    // initialize
    top->clk = 0;
    top->rst_n = 0;
    top->eval();

    // assert reset for a few cycles (drive a few clocks)
    for (int i = 0; i < 10; ++i) {
        top->clk = !top->clk;
        top->eval();
    }
    // deassert reset
    top->rst_n = 1;
    top->eval();

    // main simulation loop: toggle clock and eval
    while (!Verilated::gotFinish() && cycles < MAX_CYCLES) {
        // posedge
        top->clk = 1;
        top->eval();

        // optional: print progress every 1k cycles
        if ((cycles & 0x3FF) == 0) {
            std::cout << "run_tb_tl_stress: cycle " << cycles << std::endl;
        }

        // negedge
        top->clk = 0;
        top->eval();

        cycles++;
    }

    std::cout << "Simulation completed at cycle " << cycles << std::endl;

    // cleanup
    top->final();
    delete top;
    return 0;
}