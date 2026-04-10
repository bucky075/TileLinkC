#include "Vtb_tl_multibeat_stress.h"
#include "verilated.h"

static vluint64_t main_time = 0;
double sc_time_stamp() { return main_time; }

int main(int argc, char** argv) {

    Verilated::commandArgs(argc, argv);
    Vtb_tl_multibeat_stress* top = new Vtb_tl_multibeat_stress;

    top->clk = 0;
    top->rst_n = 0;
    top->eval();

    // reset for 10 cycles
    for (int i = 0; i < 10; i++) {
        top->clk = 1; top->eval(); main_time++;
        top->clk = 0; top->eval(); main_time++;
    }

    top->rst_n = 1;

    for (int i = 0; i < 200; i++) {
        top->clk = 1; top->eval(); main_time++;
        top->clk = 0; top->eval(); main_time++;
    }

    delete top;
    return 0;
}