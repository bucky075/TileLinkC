#include "Vtb_noc_fifo.h"
#include "verilated.h"
#include "verilated_vcd_c.h"

int main(int argc, char** argv) {
    Verilated::commandArgs(argc, argv);
    Vtb_noc_fifo* top = new Vtb_noc_fifo;

    Verilated::traceEverOn(true);
    VerilatedVcdC* tfp = new VerilatedVcdC;
    top->trace(tfp, 99);
    tfp->open("waves/fifo.vcd");

    vluint64_t t = 0;
    top->clk = 0;

    while (!Verilated::gotFinish()) {
        top->clk = !top->clk;
        top->eval();
        tfp->dump(t++);
    }

    tfp->close();
    delete tfp;
    delete top;
    return 0;
}