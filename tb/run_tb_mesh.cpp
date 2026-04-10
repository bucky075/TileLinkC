#include "Vtb_noc_mesh.h"
#include "verilated.h"

int main(int argc, char** argv) {
    Verilated::commandArgs(argc, argv);
    Vtb_noc_mesh* top = new Vtb_noc_mesh;

    top->clk = 0;

    while (!Verilated::gotFinish()) {
        top->clk = !top->clk;
        top->eval();
    }

    delete top;
    return 0;
}