VERILATOR = verilator
CXXFLAGS  = -O2 -std=c++17

RTL_PARAMS = rtl/params/noc_params.sv rtl/params/tlc_types.sv
RTL_MESH   = rtl/mesh/noc_flit.sv rtl/mesh/noc_fifo.sv rtl/mesh/noc_link_reg.sv \
             rtl/mesh/noc_wrr_arbiter.sv rtl/mesh/noc_adaptive_route.sv \
             rtl/mesh/noc_router_xy_vc.sv rtl/mesh/noc_mesh_xy.sv

RESULTS_DIR = results
WAVES_DIR   = waves

.PHONY: fifo router gather clean

# ---------------- FIFO ----------------
fifo:
	mkdir -p build_fifo $(RESULTS_DIR) $(WAVES_DIR)
	$(VERILATOR) -Wno-fatal --cc --sv --trace --build \
	  --top-module tb_noc_fifo \
	  $(RTL_PARAMS) rtl/mesh/noc_fifo.sv \
	  tb/tb_noc_fifo.sv \
	  --exe tb/run_tb_fifo.cpp \
	  -Mdir build_fifo
	./build_fifo/Vtb_noc_fifo

# ---------------- ROUTER ----------------
router:
	mkdir -p build_router $(RESULTS_DIR) $(WAVES_DIR)
	$(VERILATOR) -Wno-fatal --cc --sv --trace --build \
	  --top-module tb_noc_router \
	  $(RTL_PARAMS) $(RTL_MESH) \
	  tb/tb_noc_router.sv \
	  --exe tb/run_tb_router.cpp \
	  -Mdir build_router
	./build_router/Vtb_noc_router

# -------------------------------
# Gather Stress Test
# -------------------------------

gather:
	mkdir -p build_gather results waves
	verilator -Wno-fatal --cc --trace --sv --build \
	  --top-module tb_mesh_gather_stress \
	  rtl/params/noc_params.sv rtl/params/tlc_types.sv \
	  rtl/mesh/noc_flit.sv rtl/mesh/noc_fifo.sv rtl/mesh/noc_link_reg.sv \
	  rtl/mesh/noc_wrr_arbiter.sv rtl/mesh/noc_adaptive_route.sv \
	  rtl/mesh/noc_router_xy_vc.sv rtl/mesh/noc_mesh_xy.sv \
	  tb/tb_mesh_gather_stress.sv \
	  --exe tb/run_tb_mesh_gather.cpp \
	  -Mdir build_gather && \
	./build_gather/Vtb_mesh_gather_stress 2>&1 | tee results/gather_run.log



router_hold:
	mkdir -p build_router_hold
	verilator -Wno-fatal --cc --trace --sv --build \
	  --top-module tb_router_multibeat_hold \
	  rtl/params/noc_params.sv rtl/params/tlc_types.sv \
	  rtl/mesh/noc_flit.sv rtl/mesh/noc_fifo.sv rtl/mesh/noc_link_reg.sv \
	  rtl/mesh/noc_wrr_arbiter.sv rtl/mesh/noc_adaptive_route.sv \
	  rtl/mesh/noc_router_xy_vc.sv \
	  tb/tb_router_multibeat_hold.sv \
	  --exe tb/run_tb_router_multibeat.cpp \
	  -Mdir build_router_hold
	./build_router_hold/Vtb_router_multibeat_hold

tl_e2e3:
	mkdir -p build_tl_e2e
	verilator -Wno-fatal --cc --trace --sv --build \
	  --top-module tb_tl_end_to_end \
	  rtl/params/noc_params.sv rtl/params/tlc_types.sv \
	  rtl/mesh/noc_flit.sv rtl/mesh/noc_fifo.sv rtl/mesh/noc_link_reg.sv \
	  rtl/mesh/noc_wrr_arbiter.sv rtl/mesh/noc_adaptive_route.sv \
	  rtl/mesh/noc_router_xy_vc.sv \
	  rtl/adapter/tl_client_adapter.sv \
	  rtl/adapter/tl_manager_adapter.sv \
	  tb/tb_tl_end_to_end.sv \
	  --exe tb/run_tb_tl_e2e.cpp \
	  -Mdir build_tl_e2e
	./build_tl_e2e/Vtb_tl_end_to_end


tl_mesh_e2e2:
	mkdir -p build_tl_mesh_e2e
	verilator -Wno-fatal --cc --trace --sv --build \
	  --top-module tb_tl_mesh_e2e \
	  rtl/params/noc_params.sv rtl/params/tlc_types.sv \
	  rtl/mesh/noc_flit.sv rtl/mesh/noc_fifo.sv rtl/mesh/noc_link_reg.sv \
	  rtl/mesh/noc_wrr_arbiter.sv rtl/mesh/noc_adaptive_route.sv \
	  rtl/mesh/noc_router_xy_vc.sv \
	  rtl/adapter/tl_client_adapter.sv \
	  rtl/adapter/tl_manager_adapter.sv \
	  rtl/system/tl_mesh_system.sv \
	  tb/tb_tl_mesh_e2e.sv \
	  --exe tb/run_tb_tl_mesh_e2e.cpp \
	  -Mdir build_tl_mesh_e2e
	./build_tl_mesh_e2e/Vtb_tl_mesh_e2e


tl_multibeat:
	mkdir -p build_multibeat
	verilator -Wno-fatal --cc --sv --build \
	  --top-module tb_tl_multibeat_stress \
	  rtl/params/noc_params.sv rtl/params/tlc_types.sv \
	  rtl/mesh/noc_flit.sv \
	  rtl/adapter/tluh_master_node.sv\
	  rtl/adapter/tl_trans_table.sv \
	  rtl/adapter/tl_client_adapter.sv \
	  tb/tb_tl_multibeat_stress.sv \
	  --exe tb/run_tb_tl_multibeat_stress.cpp \
	  -Mdir build_multibeat
	./build_multibeat/Vtb_tl_multibeat_stress

# ================================
# Common RTL Files
# ================================

RTL_COMMON = \
  rtl/params/noc_params.sv \
  rtl/params/tlc_types.sv \
  rtl/mesh/noc_flit.sv \
  rtl/mesh/noc_fifo.sv \
  rtl/mesh/noc_link_reg.sv \
  rtl/mesh/noc_wrr_arbiter.sv \
  rtl/mesh/noc_router_xy_vc.sv \
  rtl/stub/tilelink_uh_master_top_fixed.sv \
  rtl/adapter/tluh_master_node.sv \
  rtl/adapter/tl_client_adapter.sv \
  rtl/adapter/tl_manager_adapter.sv \
  rtl/monitor/tl_monitor.sv \
  rtl/system/tl_mesh_system.sv


# ================================
# TL Mesh End-to-End Build
# ================================

.PHONY: tl_mesh_e2e
tl_mesh_e2e:
	mkdir -p build_tl_mesh_e2e
	verilator -Wno-fatal --cc --sv --build \
	  --top-module tb_tl_mesh_e2e \
	  $(RTL_COMMON) \
	  tb/tb_tl_mesh_e2e.sv \
	  --exe tb/run_tb_tl_mesh_e2e.cpp \
	  -Mdir build_tl_mesh_e2e
	./build_tl_mesh_e2e/Vtb_tl_mesh_e2e


# ================================
# TL Stress Build
# ================================

.PHONY: tl_stress
tl_stress:
	mkdir -p build_tl_stress
	verilator -Wno-fatal --cc --sv --build \
	  --top-module tb_tl_stress \
	  $(RTL_COMMON) \
	  tb/tb_tl_stress.sv \
	  --exe tb/run_tb_tl_stress.cpp \
	  -Mdir build_tl_stress
	./build_tl_stress/Vtb_tl_stress


# ================================
# Clean
# ================================

.PHONY: clean
clean:
	rm -rf build_tl_mesh_e2e build_tl_stress



.PHONY: tlc_adapter
tlc_adapter:
	mkdir -p build_tlc_adapter
	verilator -Wno-fatal --cc --sv --build \
	  --top-module tb_tlc_noc_adapter \
	  rtl/params/noc_params.sv \
	  rtl/params/tlc_types.sv \
	  rtl/mesh/noc_flit.sv \
	  rtl/adapter/tl_client_adapter.sv \
	  rtl/adapter/tl_manager_adapter.sv \
	  tb/tb_tlc_noc_adapter.sv \
	  --exe tb/run_tb_tlc_noc_adapter.cpp \
	  -Mdir build_tlc_adapter
	./build_tlc_adapter/Vtb_tlc_noc_adapter