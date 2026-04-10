#include "Vtb_noc_wrr_arbiter.h"
#include "verilated.h"
#include "verilated_vcd_c.h"

double sc_time_stamp() { return 0; }

int main(int argc, char** argv) {
    Verilated::commandArgs(argc, argv);

    Vtb_noc_wrr_arbiter* top = new Vtb_noc_wrr_arbiter;

    Verilated::traceEverOn(true);
    VerilatedVcdC* tfp = new VerilatedVcdC;
    top->trace(tfp, 99);
    tfp->open("waves/arb_waves.vcd");

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