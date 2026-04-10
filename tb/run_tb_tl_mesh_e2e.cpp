#include "Vtb_tl_mesh_e2e.h"
#include "verilated.h"

static vluint64_t main_time = 0;
double sc_time_stamp() { return main_time; }

int main(int argc, char** argv) {

    Verilated::commandArgs(argc, argv);
    Vtb_tl_mesh_e2e* top = new Vtb_tl_mesh_e2e;

    // Reset
    top->clk = 0;
    top->rst_n = 0;
    top->eval();

    for (int i = 0; i < 10; i++) {
        top->clk = 1; top->eval(); main_time++;
        top->clk = 0; top->eval(); main_time++;
    }

    top->rst_n = 1;

    // Run fixed number of cycles
    for (int i = 0; i < 200; i++) {
        top->clk = 1; top->eval(); main_time++;
        if (Verilated::gotFinish()) break;
        top->clk = 0; top->eval(); main_time++;
        if (Verilated::gotFinish()) break;
    }

    delete top;
    return 0;
}