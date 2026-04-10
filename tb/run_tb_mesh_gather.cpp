#include "verilated.h"
#include "verilated_vcd_c.h"
#include "Vtb_mesh_gather_stress.h"

int main(int argc, char **argv)
{
    Verilated::commandArgs(argc, argv);
    Vtb_mesh_gather_stress* top = new Vtb_mesh_gather_stress;

    Verilated::traceEverOn(true);
    VerilatedVcdC* tfp = new VerilatedVcdC;
    top->trace(tfp, 99);
    tfp->open("waves/gather.vcd");

    top->clk = 0;
    top->rst_n = 0;

    for (int i=0; i<10; i++) {
        top->clk = 0; top->eval(); tfp->dump(i*2);
        top->clk = 1; top->eval(); tfp->dump(i*2+1);
    }

    top->rst_n = 1;

    while (!Verilated::gotFinish()) {
        top->clk = 0; top->eval();
        top->clk = 1; top->eval();
    }

    tfp->close();
    delete top;
    return 0;
}