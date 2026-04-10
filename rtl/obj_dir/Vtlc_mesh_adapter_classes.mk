# Verilated -*- Makefile -*-
# DESCRIPTION: Verilator output: Make include file with class lists
#
# This file lists generated Verilated files, for including in higher level makefiles.
# See Vtlc_mesh_adapter.mk for the caller.

### Switches...
# C11 constructs required?  0/1 (from --threads, --trace-threads or use of classes)
VM_C11 = 0
# Coverage output mode?  0/1 (from --coverage)
VM_COVERAGE = 0
# Parallel builds?  0/1 (from --output-split)
VM_PARALLEL_BUILDS = 1
# Threaded output mode?  0/1/N threads (from --threads)
VM_THREADS = 0
# Tracing output mode?  0/1 (from --trace/--trace-fst)
VM_TRACE = 1
# Tracing threaded output mode?  0/1/N threads (from --trace-thread)
VM_TRACE_THREADS = 0
# Separate FST writer thread? 0/1 (from --trace-fst with --trace-thread > 0)
VM_TRACE_FST_WRITER_THREAD = 0

### Object file lists...
# Generated module classes, fast-path, compile with highest optimization
VM_CLASSES_FAST += \
	Vtlc_mesh_adapter \
	Vtlc_mesh_adapter__1 \
	Vtlc_mesh_adapter__2 \
	Vtlc_mesh_adapter__3 \
	Vtlc_mesh_adapter__4 \
	Vtlc_mesh_adapter__5 \

# Generated module classes, non-fast-path, compile with low/medium optimization
VM_CLASSES_SLOW += \
	Vtlc_mesh_adapter__Slow \
	Vtlc_mesh_adapter__1__Slow \
	Vtlc_mesh_adapter__2__Slow \
	Vtlc_mesh_adapter__3__Slow \

# Generated support classes, fast-path, compile with highest optimization
VM_SUPPORT_FAST += \
	Vtlc_mesh_adapter__Trace \
	Vtlc_mesh_adapter__Trace__1 \

# Generated support classes, non-fast-path, compile with low/medium optimization
VM_SUPPORT_SLOW += \
	Vtlc_mesh_adapter__Syms \
	Vtlc_mesh_adapter__Trace__Slow \

# Global classes, need linked once per executable, fast-path, compile with highest optimization
VM_GLOBAL_FAST += \
	verilated \
	verilated_vcd_c \

# Global classes, need linked once per executable, non-fast-path, compile with low/medium optimization
VM_GLOBAL_SLOW += \


# Verilated -*- Makefile -*-
