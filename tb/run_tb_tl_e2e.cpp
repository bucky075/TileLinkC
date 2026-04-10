#include "Vtb_tl_end_to_end.h"
#include "verilated.h"
#include "verilated_vcd_c.h"

static vluint64_t main_time = 0;

double sc_time_stamp() {
    return main_time;
}

int main(int argc, char** argv) {

    Verilated::commandArgs(argc, argv);

    Vtb_tl_end_to_end* top = new Vtb_tl_end_to_end;

    // Optional waveform dump
    Verilated::traceEverOn(true);
    VerilatedVcdC* tfp = new VerilatedVcdC;
    top->trace(tfp, 99);
    tfp->open("tl_e2e.vcd");

    // Initial values
    top->clk = 0;
    top->rst_n = 0;

    // Apply reset for 10 cycles
    for (int i = 0; i < 10; i++) {
        top->clk = 0;
        top->eval();
        tfp->dump(main_time++);
        top->clk = 1;
        top->eval();
        tfp->dump(main_time++);
    }

    top->rst_n = 1;

    // Run simulation
    for (int i = 0; i < 200; i++) {

        top->clk = 0;
        top->eval();
        tfp->dump(main_time++);

        top->clk = 1;
        top->eval();
        tfp->dump(main_time++);

        if (Verilated::gotFinish())
            break;
    }

    tfp->close();
    delete top;
    return 0;
}