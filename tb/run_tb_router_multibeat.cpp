#include "Vtb_router_multibeat_hold.h"
#include "verilated.h"

int main(int argc, char** argv) {
    Verilated::commandArgs(argc, argv);
    Vtb_router_multibeat_hold* top = new Vtb_router_multibeat_hold;

    top->clk = 0;
    top->rst_n = 0;

    for (int i=0;i<5;i++){
        top->clk = !top->clk; top->eval();
    }

    top->rst_n = 1;

    while (!Verilated::gotFinish()) {
        top->clk = !top->clk;
        top->eval();
    }

    delete top;
    return 0;
}