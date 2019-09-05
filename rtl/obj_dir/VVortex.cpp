// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VVortex.h for the primary calling header

#include "VVortex.h"
#include "VVortex__Syms.h"


//--------------------
// STATIC VARIABLES

// Begin mtask footprint  all: 
VL_ST_SIG8(VVortex::__Vtable1_Vortex__DOT__vx_decode__DOT__mul_alu[8],4,0);

//--------------------

VL_CTOR_IMP(VVortex) {
    VVortex__Syms* __restrict vlSymsp = __VlSymsp = new VVortex__Syms(this, name());
    VVortex* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    VL_CELL(__PVT__Vortex__DOT__fe_inst_meta_fd, VVortex_VX_inst_meta_inter);
    VL_CELL(__PVT__Vortex__DOT__fd_inst_meta_de, VVortex_VX_inst_meta_inter);
    VL_CELL(__PVT__Vortex__DOT__VX_frE_to_bckE_req, VVortex_VX_frE_to_bckE_req_inter);
    VL_CELL(__PVT__Vortex__DOT__VX_bckE_req, VVortex_VX_frE_to_bckE_req_inter);
    VL_CELL(__PVT__Vortex__DOT__VX_exe_mem_req, VVortex_VX_mem_req_inter);
    VL_CELL(__PVT__Vortex__DOT__VX_mem_req, VVortex_VX_mem_req_inter);
    VL_CELL(__PVT__Vortex__DOT__VX_mem_wb, VVortex_VX_inst_mem_wb_inter);
    VL_CELL(__PVT__Vortex__DOT__VX_warp_ctl, VVortex_VX_warp_ctl_inter);
    VL_CELL(__PVT__Vortex__DOT__VX_writeback_inter, VVortex_VX_wb_inter);
    VL_CELL(__PVT__Vortex__DOT__vx_decode__DOT__genblk2__BRA__1__KET____DOT__VX_Context_one, VVortex_VX_context_slave);
    VL_CELL(__PVT__Vortex__DOT__vx_decode__DOT__genblk2__BRA__2__KET____DOT__VX_Context_one, VVortex_VX_context_slave);
    VL_CELL(__PVT__Vortex__DOT__vx_decode__DOT__genblk2__BRA__3__KET____DOT__VX_Context_one, VVortex_VX_context_slave);
    VL_CELL(__PVT__Vortex__DOT__vx_decode__DOT__genblk2__BRA__4__KET____DOT__VX_Context_one, VVortex_VX_context_slave);
    VL_CELL(__PVT__Vortex__DOT__vx_decode__DOT__genblk2__BRA__5__KET____DOT__VX_Context_one, VVortex_VX_context_slave);
    VL_CELL(__PVT__Vortex__DOT__vx_decode__DOT__genblk2__BRA__6__KET____DOT__VX_Context_one, VVortex_VX_context_slave);
    VL_CELL(__PVT__Vortex__DOT__vx_decode__DOT__genblk2__BRA__7__KET____DOT__VX_Context_one, VVortex_VX_context_slave);
    // Reset internal values
    
    // Reset structure values
    _ctor_var_reset();
}

void VVortex::__Vconfigure(VVortex__Syms* vlSymsp, bool first) {
    if (0 && first) {}  // Prevent unused
    this->__VlSymsp = vlSymsp;
}

VVortex::~VVortex() {
    delete __VlSymsp; __VlSymsp=NULL;
}

//--------------------


void VVortex::eval() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate VVortex::eval\n"); );
    VVortex__Syms* __restrict vlSymsp = this->__VlSymsp;  // Setup global symbol table
    VVortex* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
#ifdef VL_DEBUG
    // Debug assertions
    _eval_debug_assertions();
#endif  // VL_DEBUG
    // Initialize
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) _eval_initial_loop(vlSymsp);
    // Evaluate till stable
    int __VclockLoop = 0;
    QData __Vchange = 1;
    do {
	VL_DEBUG_IF(VL_DBG_MSGF("+ Clock loop\n"););
	_eval(vlSymsp);
	if (VL_UNLIKELY(++__VclockLoop > 100)) {
	    // About to fail, so enable debug to see what's not settling.
	    // Note you must run make with OPT=-DVL_DEBUG for debug prints.
	    int __Vsaved_debug = Verilated::debug();
	    Verilated::debug(1);
	    __Vchange = _change_request(vlSymsp);
	    Verilated::debug(__Vsaved_debug);
	    VL_FATAL_MT(__FILE__,__LINE__,__FILE__,"Verilated model didn't converge");
	} else {
	    __Vchange = _change_request(vlSymsp);
	}
    } while (VL_UNLIKELY(__Vchange));
}

void VVortex::_eval_initial_loop(VVortex__Syms* __restrict vlSymsp) {
    vlSymsp->__Vm_didInit = true;
    _eval_initial(vlSymsp);
    // Evaluate till stable
    int __VclockLoop = 0;
    QData __Vchange = 1;
    do {
	_eval_settle(vlSymsp);
	_eval(vlSymsp);
	if (VL_UNLIKELY(++__VclockLoop > 100)) {
	    // About to fail, so enable debug to see what's not settling.
	    // Note you must run make with OPT=-DVL_DEBUG for debug prints.
	    int __Vsaved_debug = Verilated::debug();
	    Verilated::debug(1);
	    __Vchange = _change_request(vlSymsp);
	    Verilated::debug(__Vsaved_debug);
	    VL_FATAL_MT(__FILE__,__LINE__,__FILE__,"Verilated model didn't DC converge");
	} else {
	    __Vchange = _change_request(vlSymsp);
	}
    } while (VL_UNLIKELY(__Vchange));
}

//--------------------
// Internal Methods

void VVortex::_initial__TOP__1(VVortex__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VVortex::_initial__TOP__1\n"); );
    VVortex* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // INITIAL at VX_warp.v:30
    vlTOPp->Vortex__DOT__vx_fetch__DOT__genblk2__BRA__0__KET____DOT__VX_Warp__DOT__real_PC = 0U;
    vlTOPp->Vortex__DOT__vx_fetch__DOT__genblk2__BRA__0__KET____DOT__VX_Warp__DOT__valid[1U] = 0U;
    vlTOPp->Vortex__DOT__vx_fetch__DOT__genblk2__BRA__0__KET____DOT__VX_Warp__DOT__valid_zero[1U] = 0U;
    vlTOPp->Vortex__DOT__vx_fetch__DOT__genblk2__BRA__0__KET____DOT__VX_Warp__DOT__valid[2U] = 0U;
    vlTOPp->Vortex__DOT__vx_fetch__DOT__genblk2__BRA__0__KET____DOT__VX_Warp__DOT__valid_zero[2U] = 0U;
    vlTOPp->Vortex__DOT__vx_fetch__DOT__genblk2__BRA__0__KET____DOT__VX_Warp__DOT__valid[3U] = 0U;
    vlTOPp->Vortex__DOT__vx_fetch__DOT__genblk2__BRA__0__KET____DOT__VX_Warp__DOT__valid_zero[3U] = 0U;
    vlTOPp->Vortex__DOT__vx_fetch__DOT__genblk2__BRA__0__KET____DOT__VX_Warp__DOT__valid[0U] = 1U;
    vlTOPp->Vortex__DOT__vx_fetch__DOT__genblk2__BRA__0__KET____DOT__VX_Warp__DOT__valid_zero[0U] = 0U;
    // INITIAL at VX_warp.v:30
    vlTOPp->Vortex__DOT__vx_fetch__DOT__genblk2__BRA__1__KET____DOT__VX_Warp__DOT__real_PC = 0U;
    vlTOPp->Vortex__DOT__vx_fetch__DOT__genblk2__BRA__1__KET____DOT__VX_Warp__DOT__valid[1U] = 0U;
    vlTOPp->Vortex__DOT__vx_fetch__DOT__genblk2__BRA__1__KET____DOT__VX_Warp__DOT__valid_zero[1U] = 0U;
    vlTOPp->Vortex__DOT__vx_fetch__DOT__genblk2__BRA__1__KET____DOT__VX_Warp__DOT__valid[2U] = 0U;
    vlTOPp->Vortex__DOT__vx_fetch__DOT__genblk2__BRA__1__KET____DOT__VX_Warp__DOT__valid_zero[2U] = 0U;
    vlTOPp->Vortex__DOT__vx_fetch__DOT__genblk2__BRA__1__KET____DOT__VX_Warp__DOT__valid[3U] = 0U;
    vlTOPp->Vortex__DOT__vx_fetch__DOT__genblk2__BRA__1__KET____DOT__VX_Warp__DOT__valid_zero[3U] = 0U;
    vlTOPp->Vortex__DOT__vx_fetch__DOT__genblk2__BRA__1__KET____DOT__VX_Warp__DOT__valid[0U] = 1U;
    vlTOPp->Vortex__DOT__vx_fetch__DOT__genblk2__BRA__1__KET____DOT__VX_Warp__DOT__valid_zero[0U] = 0U;
    // INITIAL at VX_warp.v:30
    vlTOPp->Vortex__DOT__vx_fetch__DOT__genblk2__BRA__2__KET____DOT__VX_Warp__DOT__real_PC = 0U;
    vlTOPp->Vortex__DOT__vx_fetch__DOT__genblk2__BRA__2__KET____DOT__VX_Warp__DOT__valid[1U] = 0U;
    vlTOPp->Vortex__DOT__vx_fetch__DOT__genblk2__BRA__2__KET____DOT__VX_Warp__DOT__valid_zero[1U] = 0U;
    vlTOPp->Vortex__DOT__vx_fetch__DOT__genblk2__BRA__2__KET____DOT__VX_Warp__DOT__valid[2U] = 0U;
    vlTOPp->Vortex__DOT__vx_fetch__DOT__genblk2__BRA__2__KET____DOT__VX_Warp__DOT__valid_zero[2U] = 0U;
    vlTOPp->Vortex__DOT__vx_fetch__DOT__genblk2__BRA__2__KET____DOT__VX_Warp__DOT__valid[3U] = 0U;
    vlTOPp->Vortex__DOT__vx_fetch__DOT__genblk2__BRA__2__KET____DOT__VX_Warp__DOT__valid_zero[3U] = 0U;
    vlTOPp->Vortex__DOT__vx_fetch__DOT__genblk2__BRA__2__KET____DOT__VX_Warp__DOT__valid[0U] = 1U;
    vlTOPp->Vortex__DOT__vx_fetch__DOT__genblk2__BRA__2__KET____DOT__VX_Warp__DOT__valid_zero[0U] = 0U;
    // INITIAL at VX_warp.v:30
    vlTOPp->Vortex__DOT__vx_fetch__DOT__genblk2__BRA__3__KET____DOT__VX_Warp__DOT__real_PC = 0U;
    vlTOPp->Vortex__DOT__vx_fetch__DOT__genblk2__BRA__3__KET____DOT__VX_Warp__DOT__valid[1U] = 0U;
    vlTOPp->Vortex__DOT__vx_fetch__DOT__genblk2__BRA__3__KET____DOT__VX_Warp__DOT__valid_zero[1U] = 0U;
    vlTOPp->Vortex__DOT__vx_fetch__DOT__genblk2__BRA__3__KET____DOT__VX_Warp__DOT__valid[2U] = 0U;
    vlTOPp->Vortex__DOT__vx_fetch__DOT__genblk2__BRA__3__KET____DOT__VX_Warp__DOT__valid_zero[2U] = 0U;
    vlTOPp->Vortex__DOT__vx_fetch__DOT__genblk2__BRA__3__KET____DOT__VX_Warp__DOT__valid[3U] = 0U;
    vlTOPp->Vortex__DOT__vx_fetch__DOT__genblk2__BRA__3__KET____DOT__VX_Warp__DOT__valid_zero[3U] = 0U;
    vlTOPp->Vortex__DOT__vx_fetch__DOT__genblk2__BRA__3__KET____DOT__VX_Warp__DOT__valid[0U] = 1U;
    vlTOPp->Vortex__DOT__vx_fetch__DOT__genblk2__BRA__3__KET____DOT__VX_Warp__DOT__valid_zero[0U] = 0U;
    // INITIAL at VX_warp.v:30
    vlTOPp->Vortex__DOT__vx_fetch__DOT__genblk2__BRA__4__KET____DOT__VX_Warp__DOT__real_PC = 0U;
    vlTOPp->Vortex__DOT__vx_fetch__DOT__genblk2__BRA__4__KET____DOT__VX_Warp__DOT__valid[1U] = 0U;
    vlTOPp->Vortex__DOT__vx_fetch__DOT__genblk2__BRA__4__KET____DOT__VX_Warp__DOT__valid_zero[1U] = 0U;
    vlTOPp->Vortex__DOT__vx_fetch__DOT__genblk2__BRA__4__KET____DOT__VX_Warp__DOT__valid[2U] = 0U;
    vlTOPp->Vortex__DOT__vx_fetch__DOT__genblk2__BRA__4__KET____DOT__VX_Warp__DOT__valid_zero[2U] = 0U;
    vlTOPp->Vortex__DOT__vx_fetch__DOT__genblk2__BRA__4__KET____DOT__VX_Warp__DOT__valid[3U] = 0U;
    vlTOPp->Vortex__DOT__vx_fetch__DOT__genblk2__BRA__4__KET____DOT__VX_Warp__DOT__valid_zero[3U] = 0U;
    vlTOPp->Vortex__DOT__vx_fetch__DOT__genblk2__BRA__4__KET____DOT__VX_Warp__DOT__valid[0U] = 1U;
    vlTOPp->Vortex__DOT__vx_fetch__DOT__genblk2__BRA__4__KET____DOT__VX_Warp__DOT__valid_zero[0U] = 0U;
    // INITIAL at VX_warp.v:30
    vlTOPp->Vortex__DOT__vx_fetch__DOT__genblk2__BRA__5__KET____DOT__VX_Warp__DOT__real_PC = 0U;
    vlTOPp->Vortex__DOT__vx_fetch__DOT__genblk2__BRA__5__KET____DOT__VX_Warp__DOT__valid[1U] = 0U;
    vlTOPp->Vortex__DOT__vx_fetch__DOT__genblk2__BRA__5__KET____DOT__VX_Warp__DOT__valid_zero[1U] = 0U;
    vlTOPp->Vortex__DOT__vx_fetch__DOT__genblk2__BRA__5__KET____DOT__VX_Warp__DOT__valid[2U] = 0U;
    vlTOPp->Vortex__DOT__vx_fetch__DOT__genblk2__BRA__5__KET____DOT__VX_Warp__DOT__valid_zero[2U] = 0U;
    vlTOPp->Vortex__DOT__vx_fetch__DOT__genblk2__BRA__5__KET____DOT__VX_Warp__DOT__valid[3U] = 0U;
    vlTOPp->Vortex__DOT__vx_fetch__DOT__genblk2__BRA__5__KET____DOT__VX_Warp__DOT__valid_zero[3U] = 0U;
    vlTOPp->Vortex__DOT__vx_fetch__DOT__genblk2__BRA__5__KET____DOT__VX_Warp__DOT__valid[0U] = 1U;
    vlTOPp->Vortex__DOT__vx_fetch__DOT__genblk2__BRA__5__KET____DOT__VX_Warp__DOT__valid_zero[0U] = 0U;
    // INITIAL at VX_warp.v:30
    vlTOPp->Vortex__DOT__vx_fetch__DOT__genblk2__BRA__6__KET____DOT__VX_Warp__DOT__real_PC = 0U;
    vlTOPp->Vortex__DOT__vx_fetch__DOT__genblk2__BRA__6__KET____DOT__VX_Warp__DOT__valid[1U] = 0U;
    vlTOPp->Vortex__DOT__vx_fetch__DOT__genblk2__BRA__6__KET____DOT__VX_Warp__DOT__valid_zero[1U] = 0U;
    vlTOPp->Vortex__DOT__vx_fetch__DOT__genblk2__BRA__6__KET____DOT__VX_Warp__DOT__valid[2U] = 0U;
    vlTOPp->Vortex__DOT__vx_fetch__DOT__genblk2__BRA__6__KET____DOT__VX_Warp__DOT__valid_zero[2U] = 0U;
    vlTOPp->Vortex__DOT__vx_fetch__DOT__genblk2__BRA__6__KET____DOT__VX_Warp__DOT__valid[3U] = 0U;
    vlTOPp->Vortex__DOT__vx_fetch__DOT__genblk2__BRA__6__KET____DOT__VX_Warp__DOT__valid_zero[3U] = 0U;
    vlTOPp->Vortex__DOT__vx_fetch__DOT__genblk2__BRA__6__KET____DOT__VX_Warp__DOT__valid[0U] = 1U;
    vlTOPp->Vortex__DOT__vx_fetch__DOT__genblk2__BRA__6__KET____DOT__VX_Warp__DOT__valid_zero[0U] = 0U;
    // INITIAL at VX_warp.v:30
    vlTOPp->Vortex__DOT__vx_fetch__DOT__genblk2__BRA__7__KET____DOT__VX_Warp__DOT__real_PC = 0U;
    vlTOPp->Vortex__DOT__vx_fetch__DOT__genblk2__BRA__7__KET____DOT__VX_Warp__DOT__valid[1U] = 0U;
    vlTOPp->Vortex__DOT__vx_fetch__DOT__genblk2__BRA__7__KET____DOT__VX_Warp__DOT__valid_zero[1U] = 0U;
    vlTOPp->Vortex__DOT__vx_fetch__DOT__genblk2__BRA__7__KET____DOT__VX_Warp__DOT__valid[2U] = 0U;
    vlTOPp->Vortex__DOT__vx_fetch__DOT__genblk2__BRA__7__KET____DOT__VX_Warp__DOT__valid_zero[2U] = 0U;
    vlTOPp->Vortex__DOT__vx_fetch__DOT__genblk2__BRA__7__KET____DOT__VX_Warp__DOT__valid[3U] = 0U;
    vlTOPp->Vortex__DOT__vx_fetch__DOT__genblk2__BRA__7__KET____DOT__VX_Warp__DOT__valid_zero[3U] = 0U;
    vlTOPp->Vortex__DOT__vx_fetch__DOT__genblk2__BRA__7__KET____DOT__VX_Warp__DOT__valid[0U] = 1U;
    vlTOPp->Vortex__DOT__vx_fetch__DOT__genblk2__BRA__7__KET____DOT__VX_Warp__DOT__valid_zero[0U] = 0U;
    // INITIAL at VX_csr_handler.v:29
    vlTOPp->Vortex__DOT__vx_csr_handler__DOT__cycle = VL_ULL(0);
    vlTOPp->Vortex__DOT__vx_csr_handler__DOT__instret = VL_ULL(0);
    vlTOPp->Vortex__DOT__vx_csr_handler__DOT__decode_csr_address = 0U;
    // INITIAL at VX_context.v:31
    vlTOPp->Vortex__DOT__vx_decode__DOT__VX_Context_zero__DOT__state_stall = 0U;
    // INITIAL at VX_fetch.v:52
    vlTOPp->Vortex__DOT__vx_fetch__DOT__warp_num = 0U;
    vlTOPp->Vortex__DOT__vx_fetch__DOT__warp_state = 0U;
    vlTOPp->Vortex__DOT__vx_fetch__DOT__warp_count = 1U;
}

void VVortex::_settle__TOP__2(VVortex__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VVortex::_settle__TOP__2\n"); );
    VVortex* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    // Begin mtask footprint  all: 
    VL_SIGW(__Vtemp19,479,0,15);
    VL_SIGW(__Vtemp28,735,0,23);
    VL_SIGW(__Vtemp43,127,0,4);
    VL_SIGW(__Vtemp59,127,0,4);
    // Body
    vlTOPp->Vortex__DOT__vx_decode__DOT__jalrs_thread_mask 
	= (1U | (IData)(vlTOPp->Vortex__DOT__vx_decode__DOT__jalrs_thread_mask));
    vlTOPp->Vortex__DOT__vx_decode__DOT__jmprt_thread_mask 
	= (1U | (IData)(vlTOPp->Vortex__DOT__vx_decode__DOT__jmprt_thread_mask));
    vlTOPp->Vortex__DOT__vx_decode__DOT__jmprt_thread_mask 
	= (0xdU & (IData)(vlTOPp->Vortex__DOT__vx_decode__DOT__jmprt_thread_mask));
    vlTOPp->Vortex__DOT__vx_decode__DOT__jmprt_thread_mask 
	= (0xbU & (IData)(vlTOPp->Vortex__DOT__vx_decode__DOT__jmprt_thread_mask));
    vlTOPp->Vortex__DOT__vx_decode__DOT__jmprt_thread_mask 
	= (7U & (IData)(vlTOPp->Vortex__DOT__vx_decode__DOT__jmprt_thread_mask));
    vlTOPp->Vortex__DOT____Vcellinp__vx_memory__in_cache_driver_out_data[3U] 
	= vlTOPp->in_cache_driver_out_data[3U];
    vlTOPp->Vortex__DOT____Vcellinp__vx_memory__in_cache_driver_out_data[2U] 
	= vlTOPp->in_cache_driver_out_data[2U];
    vlTOPp->Vortex__DOT____Vcellinp__vx_memory__in_cache_driver_out_data[1U] 
	= vlTOPp->in_cache_driver_out_data[1U];
    vlTOPp->Vortex__DOT____Vcellinp__vx_memory__in_cache_driver_out_data[0U] 
	= vlTOPp->in_cache_driver_out_data[0U];
    vlTOPp->Vortex__DOT____Vcellout__vx_execute__out_a_reg_data[0U] 
	= ((vlTOPp->Vortex__DOT__vx_d_e_reg__DOT__d_e_reg__DOT__value[0xaU] 
	    << 0x12U) | (vlTOPp->Vortex__DOT__vx_d_e_reg__DOT__d_e_reg__DOT__value[9U] 
			 >> 0xeU));
    vlTOPp->Vortex__DOT____Vcellout__vx_execute__out_b_reg_data[0U] 
	= ((vlTOPp->Vortex__DOT__vx_d_e_reg__DOT__d_e_reg__DOT__value[6U] 
	    << 0x12U) | (vlTOPp->Vortex__DOT__vx_d_e_reg__DOT__d_e_reg__DOT__value[5U] 
			 >> 0xeU));
    vlTOPp->Vortex__DOT____Vcellout__vx_execute__out_a_reg_data[1U] 
	= ((vlTOPp->Vortex__DOT__vx_d_e_reg__DOT__d_e_reg__DOT__value[0xbU] 
	    << 0x12U) | (vlTOPp->Vortex__DOT__vx_d_e_reg__DOT__d_e_reg__DOT__value[0xaU] 
			 >> 0xeU));
    vlTOPp->Vortex__DOT____Vcellout__vx_execute__out_b_reg_data[1U] 
	= ((vlTOPp->Vortex__DOT__vx_d_e_reg__DOT__d_e_reg__DOT__value[7U] 
	    << 0x12U) | (vlTOPp->Vortex__DOT__vx_d_e_reg__DOT__d_e_reg__DOT__value[6U] 
			 >> 0xeU));
    vlTOPp->Vortex__DOT____Vcellout__vx_execute__out_a_reg_data[2U] 
	= ((vlTOPp->Vortex__DOT__vx_d_e_reg__DOT__d_e_reg__DOT__value[0xcU] 
	    << 0x12U) | (vlTOPp->Vortex__DOT__vx_d_e_reg__DOT__d_e_reg__DOT__value[0xbU] 
			 >> 0xeU));
    vlTOPp->Vortex__DOT____Vcellout__vx_execute__out_b_reg_data[2U] 
	= ((vlTOPp->Vortex__DOT__vx_d_e_reg__DOT__d_e_reg__DOT__value[8U] 
	    << 0x12U) | (vlTOPp->Vortex__DOT__vx_d_e_reg__DOT__d_e_reg__DOT__value[7U] 
			 >> 0xeU));
    vlTOPp->Vortex__DOT____Vcellout__vx_execute__out_a_reg_data[3U] 
	= ((vlTOPp->Vortex__DOT__vx_d_e_reg__DOT__d_e_reg__DOT__value[0xdU] 
	    << 0x12U) | (vlTOPp->Vortex__DOT__vx_d_e_reg__DOT__d_e_reg__DOT__value[0xcU] 
			 >> 0xeU));
    vlTOPp->Vortex__DOT____Vcellout__vx_execute__out_b_reg_data[3U] 
	= ((vlTOPp->Vortex__DOT__vx_d_e_reg__DOT__d_e_reg__DOT__value[9U] 
	    << 0x12U) | (vlTOPp->Vortex__DOT__vx_d_e_reg__DOT__d_e_reg__DOT__value[8U] 
			 >> 0xeU));
    vlTOPp->Vortex__DOT__execute_branch_stall = (1U 
						 & ((0U 
						     != 
						     (7U 
						      & ((vlTOPp->Vortex__DOT__vx_d_e_reg__DOT__d_e_reg__DOT__value[4U] 
							  << 3U) 
							 | (vlTOPp->Vortex__DOT__vx_d_e_reg__DOT__d_e_reg__DOT__value[3U] 
							    >> 0x1dU)))) 
						    | (vlTOPp->Vortex__DOT__vx_d_e_reg__DOT__d_e_reg__DOT__value[2U] 
						       >> 8U)));
    vlTOPp->Vortex__DOT__vx_decode__DOT__VX_Context_zero__DOT__rd2_register[0U] 
	= vlTOPp->Vortex__DOT__vx_decode__DOT__VX_Context_zero__DOT____Vcellout__vx_register_file_master__out_src2_data;
    vlTOPp->Vortex__DOT__vx_decode__DOT__VX_Context_zero__DOT__rd2_register[1U] 
	= vlTOPp->Vortex__DOT__vx_decode__DOT__VX_Context_zero__DOT____Vcellout__gen_code_label__BRA__1__KET____DOT__vx_register_file_slave__out_src2_data;
    vlTOPp->Vortex__DOT__vx_decode__DOT__VX_Context_zero__DOT__rd2_register[2U] 
	= vlTOPp->Vortex__DOT__vx_decode__DOT__VX_Context_zero__DOT____Vcellout__gen_code_label__BRA__2__KET____DOT__vx_register_file_slave__out_src2_data;
    vlTOPp->Vortex__DOT__vx_decode__DOT__VX_Context_zero__DOT__rd2_register[3U] 
	= vlTOPp->Vortex__DOT__vx_decode__DOT__VX_Context_zero__DOT____Vcellout__gen_code_label__BRA__3__KET____DOT__vx_register_file_slave__out_src2_data;
    vlTOPp->Vortex__DOT__vx_forwarding__DOT__use_execute_PC_next[0U] 
	= ((vlTOPp->Vortex__DOT__vx_d_e_reg__DOT__d_e_reg__DOT__value[1U] 
	    << 0x18U) | (vlTOPp->Vortex__DOT__vx_d_e_reg__DOT__d_e_reg__DOT__value[0U] 
			 >> 8U));
    vlTOPp->Vortex__DOT__vx_forwarding__DOT__use_execute_PC_next[1U] 
	= ((vlTOPp->Vortex__DOT__vx_d_e_reg__DOT__d_e_reg__DOT__value[1U] 
	    << 0x18U) | (vlTOPp->Vortex__DOT__vx_d_e_reg__DOT__d_e_reg__DOT__value[0U] 
			 >> 8U));
    vlTOPp->Vortex__DOT__vx_forwarding__DOT__use_execute_PC_next[2U] 
	= ((vlTOPp->Vortex__DOT__vx_d_e_reg__DOT__d_e_reg__DOT__value[1U] 
	    << 0x18U) | (vlTOPp->Vortex__DOT__vx_d_e_reg__DOT__d_e_reg__DOT__value[0U] 
			 >> 8U));
    vlTOPp->Vortex__DOT__vx_forwarding__DOT__use_execute_PC_next[3U] 
	= ((vlTOPp->Vortex__DOT__vx_d_e_reg__DOT__d_e_reg__DOT__value[1U] 
	    << 0x18U) | (vlTOPp->Vortex__DOT__vx_d_e_reg__DOT__d_e_reg__DOT__value[0U] 
			 >> 8U));
    vlTOPp->Vortex__DOT__vx_execute__DOT__genblk1__BRA__0__KET____DOT__vx_alu__DOT__ALU_in2 
	= ((0x40U & vlTOPp->Vortex__DOT__vx_d_e_reg__DOT__d_e_reg__DOT__value[5U])
	    ? ((vlTOPp->Vortex__DOT__vx_d_e_reg__DOT__d_e_reg__DOT__value[5U] 
		<< 0x1aU) | (vlTOPp->Vortex__DOT__vx_d_e_reg__DOT__d_e_reg__DOT__value[4U] 
			     >> 6U)) : ((vlTOPp->Vortex__DOT__vx_d_e_reg__DOT__d_e_reg__DOT__value[6U] 
					 << 0x12U) 
					| (vlTOPp->Vortex__DOT__vx_d_e_reg__DOT__d_e_reg__DOT__value[5U] 
					   >> 0xeU)));
    vlTOPp->Vortex__DOT__vx_execute__DOT__genblk1__BRA__1__KET____DOT__vx_alu__DOT__ALU_in2 
	= ((0x40U & vlTOPp->Vortex__DOT__vx_d_e_reg__DOT__d_e_reg__DOT__value[5U])
	    ? ((vlTOPp->Vortex__DOT__vx_d_e_reg__DOT__d_e_reg__DOT__value[5U] 
		<< 0x1aU) | (vlTOPp->Vortex__DOT__vx_d_e_reg__DOT__d_e_reg__DOT__value[4U] 
			     >> 6U)) : ((vlTOPp->Vortex__DOT__vx_d_e_reg__DOT__d_e_reg__DOT__value[7U] 
					 << 0x12U) 
					| (vlTOPp->Vortex__DOT__vx_d_e_reg__DOT__d_e_reg__DOT__value[6U] 
					   >> 0xeU)));
    vlTOPp->Vortex__DOT__vx_execute__DOT__genblk1__BRA__2__KET____DOT__vx_alu__DOT__ALU_in2 
	= ((0x40U & vlTOPp->Vortex__DOT__vx_d_e_reg__DOT__d_e_reg__DOT__value[5U])
	    ? ((vlTOPp->Vortex__DOT__vx_d_e_reg__DOT__d_e_reg__DOT__value[5U] 
		<< 0x1aU) | (vlTOPp->Vortex__DOT__vx_d_e_reg__DOT__d_e_reg__DOT__value[4U] 
			     >> 6U)) : ((vlTOPp->Vortex__DOT__vx_d_e_reg__DOT__d_e_reg__DOT__value[8U] 
					 << 0x12U) 
					| (vlTOPp->Vortex__DOT__vx_d_e_reg__DOT__d_e_reg__DOT__value[7U] 
					   >> 0xeU)));
    vlTOPp->Vortex__DOT__vx_execute__DOT__genblk1__BRA__3__KET____DOT__vx_alu__DOT__ALU_in2 
	= ((0x40U & vlTOPp->Vortex__DOT__vx_d_e_reg__DOT__d_e_reg__DOT__value[5U])
	    ? ((vlTOPp->Vortex__DOT__vx_d_e_reg__DOT__d_e_reg__DOT__value[5U] 
		<< 0x1aU) | (vlTOPp->Vortex__DOT__vx_d_e_reg__DOT__d_e_reg__DOT__value[4U] 
			     >> 6U)) : ((vlTOPp->Vortex__DOT__vx_d_e_reg__DOT__d_e_reg__DOT__value[9U] 
					 << 0x12U) 
					| (vlTOPp->Vortex__DOT__vx_d_e_reg__DOT__d_e_reg__DOT__value[8U] 
					   >> 0xeU)));
    vlSymsp->TOP__Vortex__DOT__VX_exe_mem_req.wb = 
	(3U & ((vlTOPp->Vortex__DOT__vx_d_e_reg__DOT__d_e_reg__DOT__value[6U] 
		<< 0x19U) | (vlTOPp->Vortex__DOT__vx_d_e_reg__DOT__d_e_reg__DOT__value[5U] 
			     >> 7U)));
    vlTOPp->Vortex__DOT__vx_decode__DOT__VX_Context_zero__DOT__rd1_register[0U] 
	= vlTOPp->Vortex__DOT__vx_decode__DOT__VX_Context_zero__DOT____Vcellout__vx_register_file_master__out_src1_data;
    vlTOPp->Vortex__DOT__vx_decode__DOT__VX_Context_zero__DOT__rd1_register[1U] 
	= vlTOPp->Vortex__DOT__vx_decode__DOT__VX_Context_zero__DOT____Vcellout__gen_code_label__BRA__1__KET____DOT__vx_register_file_slave__out_src1_data;
    vlTOPp->Vortex__DOT__vx_decode__DOT__VX_Context_zero__DOT__rd1_register[2U] 
	= vlTOPp->Vortex__DOT__vx_decode__DOT__VX_Context_zero__DOT____Vcellout__gen_code_label__BRA__2__KET____DOT__vx_register_file_slave__out_src1_data;
    vlTOPp->Vortex__DOT__vx_decode__DOT__VX_Context_zero__DOT__rd1_register[3U] 
	= vlTOPp->Vortex__DOT__vx_decode__DOT__VX_Context_zero__DOT____Vcellout__gen_code_label__BRA__3__KET____DOT__vx_register_file_slave__out_src1_data;
    vlTOPp->Vortex__DOT__vx_decode__DOT__is_itype = 
	((0x13U == (0x7fU & ((vlTOPp->Vortex__DOT__vx_f_d_reg__DOT__f_d_reg__DOT__value[2U] 
			      << 0x18U) | (vlTOPp->Vortex__DOT__vx_f_d_reg__DOT__f_d_reg__DOT__value[1U] 
					   >> 8U)))) 
	 | (3U == (0x7fU & ((vlTOPp->Vortex__DOT__vx_f_d_reg__DOT__f_d_reg__DOT__value[2U] 
			     << 0x18U) | (vlTOPp->Vortex__DOT__vx_f_d_reg__DOT__f_d_reg__DOT__value[1U] 
					  >> 8U)))));
    vlSymsp->TOP__Vortex__DOT__VX_frE_to_bckE_req.csr_address 
	= (0xfffU & (((0U != (7U & ((vlTOPp->Vortex__DOT__vx_f_d_reg__DOT__f_d_reg__DOT__value[2U] 
				     << 0xcU) | (vlTOPp->Vortex__DOT__vx_f_d_reg__DOT__f_d_reg__DOT__value[1U] 
						 >> 0x14U)))) 
		      & (2U <= (0xfffU & ((vlTOPp->Vortex__DOT__vx_f_d_reg__DOT__f_d_reg__DOT__value[2U] 
					   << 4U) | 
					  (vlTOPp->Vortex__DOT__vx_f_d_reg__DOT__f_d_reg__DOT__value[1U] 
					   >> 0x1cU)))))
		      ? ((vlTOPp->Vortex__DOT__vx_f_d_reg__DOT__f_d_reg__DOT__value[2U] 
			  << 4U) | (vlTOPp->Vortex__DOT__vx_f_d_reg__DOT__f_d_reg__DOT__value[1U] 
				    >> 0x1cU)) : 0x55U));
    // ALWAYS at VX_decode.v:572
    vlTOPp->__Vtableidx1 = (7U & ((vlTOPp->Vortex__DOT__vx_f_d_reg__DOT__f_d_reg__DOT__value[2U] 
				   << 0xcU) | (vlTOPp->Vortex__DOT__vx_f_d_reg__DOT__f_d_reg__DOT__value[1U] 
					       >> 0x14U)));
    vlTOPp->Vortex__DOT__vx_decode__DOT__mul_alu = 
	vlTOPp->__Vtable1_Vortex__DOT__vx_decode__DOT__mul_alu
	[vlTOPp->__Vtableidx1];
    vlTOPp->Vortex__DOT__vx_decode__DOT__alu_tempp 
	= (0xfffU & (((1U == (7U & ((vlTOPp->Vortex__DOT__vx_f_d_reg__DOT__f_d_reg__DOT__value[2U] 
				     << 0xcU) | (vlTOPp->Vortex__DOT__vx_f_d_reg__DOT__f_d_reg__DOT__value[1U] 
						 >> 0x14U)))) 
		      | (5U == (7U & ((vlTOPp->Vortex__DOT__vx_f_d_reg__DOT__f_d_reg__DOT__value[2U] 
				       << 0xcU) | (
						   vlTOPp->Vortex__DOT__vx_f_d_reg__DOT__f_d_reg__DOT__value[1U] 
						   >> 0x14U)))))
		      ? (0x1fU & ((vlTOPp->Vortex__DOT__vx_f_d_reg__DOT__f_d_reg__DOT__value[2U] 
				   << 4U) | (vlTOPp->Vortex__DOT__vx_f_d_reg__DOT__f_d_reg__DOT__value[1U] 
					     >> 0x1cU)))
		      : ((vlTOPp->Vortex__DOT__vx_f_d_reg__DOT__f_d_reg__DOT__value[2U] 
			  << 4U) | (vlTOPp->Vortex__DOT__vx_f_d_reg__DOT__f_d_reg__DOT__value[1U] 
				    >> 0x1cU))));
    vlTOPp->Vortex__DOT__vx_decode__DOT__is_csr = (
						   (0x73U 
						    == 
						    (0x7fU 
						     & ((vlTOPp->Vortex__DOT__vx_f_d_reg__DOT__f_d_reg__DOT__value[2U] 
							 << 0x18U) 
							| (vlTOPp->Vortex__DOT__vx_f_d_reg__DOT__f_d_reg__DOT__value[1U] 
							   >> 8U)))) 
						   & (0U 
						      != 
						      (7U 
						       & ((vlTOPp->Vortex__DOT__vx_f_d_reg__DOT__f_d_reg__DOT__value[2U] 
							   << 0xcU) 
							  | (vlTOPp->Vortex__DOT__vx_f_d_reg__DOT__f_d_reg__DOT__value[1U] 
							     >> 0x14U)))));
    vlTOPp->Vortex__DOT__vx_decode__DOT__jal_sys_jal 
	= ((0U == (7U & ((vlTOPp->Vortex__DOT__vx_f_d_reg__DOT__f_d_reg__DOT__value[2U] 
			  << 0xcU) | (vlTOPp->Vortex__DOT__vx_f_d_reg__DOT__f_d_reg__DOT__value[1U] 
				      >> 0x14U)))) 
	   & (2U > (0xfffU & ((vlTOPp->Vortex__DOT__vx_f_d_reg__DOT__f_d_reg__DOT__value[2U] 
			       << 4U) | (vlTOPp->Vortex__DOT__vx_f_d_reg__DOT__f_d_reg__DOT__value[1U] 
					 >> 0x1cU)))));
    vlTOPp->Vortex__DOT__vx_decode__DOT__in_valid[0U] 
	= (1U & vlTOPp->Vortex__DOT__vx_f_d_reg__DOT__f_d_reg__DOT__value[0U]);
    vlTOPp->Vortex__DOT__vx_decode__DOT__in_valid[1U] 
	= (1U & (vlTOPp->Vortex__DOT__vx_f_d_reg__DOT__f_d_reg__DOT__value[0U] 
		 >> 1U));
    vlTOPp->Vortex__DOT__vx_decode__DOT__in_valid[2U] 
	= (1U & (vlTOPp->Vortex__DOT__vx_f_d_reg__DOT__f_d_reg__DOT__value[0U] 
		 >> 2U));
    vlTOPp->Vortex__DOT__vx_decode__DOT__in_valid[3U] 
	= (1U & (vlTOPp->Vortex__DOT__vx_f_d_reg__DOT__f_d_reg__DOT__value[0U] 
		 >> 3U));
    vlTOPp->Vortex__DOT__vx_decode__DOT__is_jmprt = 
	((0x6bU == (0x7fU & ((vlTOPp->Vortex__DOT__vx_f_d_reg__DOT__f_d_reg__DOT__value[2U] 
			      << 0x18U) | (vlTOPp->Vortex__DOT__vx_f_d_reg__DOT__f_d_reg__DOT__value[1U] 
					   >> 8U)))) 
	 & (4U == (7U & ((vlTOPp->Vortex__DOT__vx_f_d_reg__DOT__f_d_reg__DOT__value[2U] 
			  << 0xcU) | (vlTOPp->Vortex__DOT__vx_f_d_reg__DOT__f_d_reg__DOT__value[1U] 
				      >> 0x14U)))));
    vlTOPp->Vortex__DOT__vx_decode__DOT__is_jalrs = 
	((0x6bU == (0x7fU & ((vlTOPp->Vortex__DOT__vx_f_d_reg__DOT__f_d_reg__DOT__value[2U] 
			      << 0x18U) | (vlTOPp->Vortex__DOT__vx_f_d_reg__DOT__f_d_reg__DOT__value[1U] 
					   >> 8U)))) 
	 & (6U == (7U & ((vlTOPp->Vortex__DOT__vx_f_d_reg__DOT__f_d_reg__DOT__value[2U] 
			  << 0xcU) | (vlTOPp->Vortex__DOT__vx_f_d_reg__DOT__f_d_reg__DOT__value[1U] 
				      >> 0x14U)))));
    vlTOPp->Vortex__DOT__vx_decode__DOT__is_wspawn 
	= ((0x6bU == (0x7fU & ((vlTOPp->Vortex__DOT__vx_f_d_reg__DOT__f_d_reg__DOT__value[2U] 
				<< 0x18U) | (vlTOPp->Vortex__DOT__vx_f_d_reg__DOT__f_d_reg__DOT__value[1U] 
					     >> 8U)))) 
	   & (0U == (7U & ((vlTOPp->Vortex__DOT__vx_f_d_reg__DOT__f_d_reg__DOT__value[2U] 
			    << 0xcU) | (vlTOPp->Vortex__DOT__vx_f_d_reg__DOT__f_d_reg__DOT__value[1U] 
					>> 0x14U)))));
    vlTOPp->Vortex__DOT__vx_decode__DOT__is_clone = 
	((0x6bU == (0x7fU & ((vlTOPp->Vortex__DOT__vx_f_d_reg__DOT__f_d_reg__DOT__value[2U] 
			      << 0x18U) | (vlTOPp->Vortex__DOT__vx_f_d_reg__DOT__f_d_reg__DOT__value[1U] 
					   >> 8U)))) 
	 & (5U == (7U & ((vlTOPp->Vortex__DOT__vx_f_d_reg__DOT__f_d_reg__DOT__value[2U] 
			  << 0xcU) | (vlTOPp->Vortex__DOT__vx_f_d_reg__DOT__f_d_reg__DOT__value[1U] 
				      >> 0x14U)))));
    vlTOPp->Vortex__DOT__vx_writeback__DOT__out_pc_data[0U] 
	= ((vlTOPp->Vortex__DOT__vx_m_w_reg__DOT__m_w_reg__DOT__value[1U] 
	    << 0x18U) | (vlTOPp->Vortex__DOT__vx_m_w_reg__DOT__m_w_reg__DOT__value[0U] 
			 >> 8U));
    vlTOPp->Vortex__DOT__vx_writeback__DOT__out_pc_data[1U] 
	= ((vlTOPp->Vortex__DOT__vx_m_w_reg__DOT__m_w_reg__DOT__value[1U] 
	    << 0x18U) | (vlTOPp->Vortex__DOT__vx_m_w_reg__DOT__m_w_reg__DOT__value[0U] 
			 >> 8U));
    vlTOPp->Vortex__DOT__vx_writeback__DOT__out_pc_data[2U] 
	= ((vlTOPp->Vortex__DOT__vx_m_w_reg__DOT__m_w_reg__DOT__value[1U] 
	    << 0x18U) | (vlTOPp->Vortex__DOT__vx_m_w_reg__DOT__m_w_reg__DOT__value[0U] 
			 >> 8U));
    vlTOPp->Vortex__DOT__vx_writeback__DOT__out_pc_data[3U] 
	= ((vlTOPp->Vortex__DOT__vx_m_w_reg__DOT__m_w_reg__DOT__value[1U] 
	    << 0x18U) | (vlTOPp->Vortex__DOT__vx_m_w_reg__DOT__m_w_reg__DOT__value[0U] 
			 >> 8U));
    vlTOPp->Vortex__DOT__vx_forwarding__DOT__use_writeback_PC_next[0U] 
	= ((vlTOPp->Vortex__DOT__vx_m_w_reg__DOT__m_w_reg__DOT__value[1U] 
	    << 0x18U) | (vlTOPp->Vortex__DOT__vx_m_w_reg__DOT__m_w_reg__DOT__value[0U] 
			 >> 8U));
    vlTOPp->Vortex__DOT__vx_forwarding__DOT__use_writeback_PC_next[1U] 
	= ((vlTOPp->Vortex__DOT__vx_m_w_reg__DOT__m_w_reg__DOT__value[1U] 
	    << 0x18U) | (vlTOPp->Vortex__DOT__vx_m_w_reg__DOT__m_w_reg__DOT__value[0U] 
			 >> 8U));
    vlTOPp->Vortex__DOT__vx_forwarding__DOT__use_writeback_PC_next[2U] 
	= ((vlTOPp->Vortex__DOT__vx_m_w_reg__DOT__m_w_reg__DOT__value[1U] 
	    << 0x18U) | (vlTOPp->Vortex__DOT__vx_m_w_reg__DOT__m_w_reg__DOT__value[0U] 
			 >> 8U));
    vlTOPp->Vortex__DOT__vx_forwarding__DOT__use_writeback_PC_next[3U] 
	= ((vlTOPp->Vortex__DOT__vx_m_w_reg__DOT__m_w_reg__DOT__value[1U] 
	    << 0x18U) | (vlTOPp->Vortex__DOT__vx_m_w_reg__DOT__m_w_reg__DOT__value[0U] 
			 >> 8U));
    vlTOPp->out_cache_driver_in_mem_read = (7U & ((
						   vlTOPp->Vortex__DOT__vx_e_m_reg__DOT__f_d_reg__DOT__value[8U] 
						   << 1U) 
						  | (vlTOPp->Vortex__DOT__vx_e_m_reg__DOT__f_d_reg__DOT__value[7U] 
						     >> 0x1fU)));
    vlTOPp->out_cache_driver_in_mem_write = (7U & (
						   (vlTOPp->Vortex__DOT__vx_e_m_reg__DOT__f_d_reg__DOT__value[8U] 
						    << 4U) 
						   | (vlTOPp->Vortex__DOT__vx_e_m_reg__DOT__f_d_reg__DOT__value[7U] 
						      >> 0x1cU)));
    vlTOPp->Vortex__DOT____Vcellout__vx_memory__out_cache_driver_in_address[0U] 
	= ((vlTOPp->Vortex__DOT__vx_e_m_reg__DOT__f_d_reg__DOT__value[9U] 
	    << 0x1eU) | (vlTOPp->Vortex__DOT__vx_e_m_reg__DOT__f_d_reg__DOT__value[8U] 
			 >> 2U));
    vlTOPp->Vortex__DOT____Vcellout__vx_memory__out_cache_driver_in_data[0U] 
	= ((vlTOPp->Vortex__DOT__vx_e_m_reg__DOT__f_d_reg__DOT__value[4U] 
	    << 0x15U) | (vlTOPp->Vortex__DOT__vx_e_m_reg__DOT__f_d_reg__DOT__value[3U] 
			 >> 0xbU));
    vlTOPp->Vortex__DOT____Vcellout__vx_memory__out_cache_driver_in_valid[0U] 
	= (1U & (vlTOPp->Vortex__DOT__vx_e_m_reg__DOT__f_d_reg__DOT__value[0U] 
		 >> 4U));
    vlTOPp->Vortex__DOT____Vcellout__vx_memory__out_cache_driver_in_address[1U] 
	= ((vlTOPp->Vortex__DOT__vx_e_m_reg__DOT__f_d_reg__DOT__value[0xaU] 
	    << 0x1eU) | (vlTOPp->Vortex__DOT__vx_e_m_reg__DOT__f_d_reg__DOT__value[9U] 
			 >> 2U));
    vlTOPp->Vortex__DOT____Vcellout__vx_memory__out_cache_driver_in_data[1U] 
	= ((vlTOPp->Vortex__DOT__vx_e_m_reg__DOT__f_d_reg__DOT__value[5U] 
	    << 0x15U) | (vlTOPp->Vortex__DOT__vx_e_m_reg__DOT__f_d_reg__DOT__value[4U] 
			 >> 0xbU));
    vlTOPp->Vortex__DOT____Vcellout__vx_memory__out_cache_driver_in_valid[1U] 
	= (1U & (vlTOPp->Vortex__DOT__vx_e_m_reg__DOT__f_d_reg__DOT__value[0U] 
		 >> 5U));
    vlTOPp->Vortex__DOT____Vcellout__vx_memory__out_cache_driver_in_address[2U] 
	= ((vlTOPp->Vortex__DOT__vx_e_m_reg__DOT__f_d_reg__DOT__value[0xbU] 
	    << 0x1eU) | (vlTOPp->Vortex__DOT__vx_e_m_reg__DOT__f_d_reg__DOT__value[0xaU] 
			 >> 2U));
    vlTOPp->Vortex__DOT____Vcellout__vx_memory__out_cache_driver_in_data[2U] 
	= ((vlTOPp->Vortex__DOT__vx_e_m_reg__DOT__f_d_reg__DOT__value[6U] 
	    << 0x15U) | (vlTOPp->Vortex__DOT__vx_e_m_reg__DOT__f_d_reg__DOT__value[5U] 
			 >> 0xbU));
    vlTOPp->Vortex__DOT____Vcellout__vx_memory__out_cache_driver_in_valid[2U] 
	= (1U & (vlTOPp->Vortex__DOT__vx_e_m_reg__DOT__f_d_reg__DOT__value[0U] 
		 >> 6U));
    vlTOPp->Vortex__DOT____Vcellout__vx_memory__out_cache_driver_in_address[3U] 
	= ((vlTOPp->Vortex__DOT__vx_e_m_reg__DOT__f_d_reg__DOT__value[0xcU] 
	    << 0x1eU) | (vlTOPp->Vortex__DOT__vx_e_m_reg__DOT__f_d_reg__DOT__value[0xbU] 
			 >> 2U));
    vlTOPp->Vortex__DOT____Vcellout__vx_memory__out_cache_driver_in_data[3U] 
	= ((vlTOPp->Vortex__DOT__vx_e_m_reg__DOT__f_d_reg__DOT__value[7U] 
	    << 0x15U) | (vlTOPp->Vortex__DOT__vx_e_m_reg__DOT__f_d_reg__DOT__value[6U] 
			 >> 0xbU));
    vlTOPp->Vortex__DOT____Vcellout__vx_memory__out_cache_driver_in_valid[3U] 
	= (1U & (vlTOPp->Vortex__DOT__vx_e_m_reg__DOT__f_d_reg__DOT__value[0U] 
		 >> 7U));
    vlTOPp->Vortex__DOT__memory_branch_dest = (((vlTOPp->Vortex__DOT__vx_e_m_reg__DOT__f_d_reg__DOT__value[2U] 
						 << 0x15U) 
						| (vlTOPp->Vortex__DOT__vx_e_m_reg__DOT__f_d_reg__DOT__value[1U] 
						   >> 0xbU)) 
					       + ((
						   vlTOPp->Vortex__DOT__vx_e_m_reg__DOT__f_d_reg__DOT__value[1U] 
						   << 0x16U) 
						  | (0x3ffffeU 
						     & (vlTOPp->Vortex__DOT__vx_e_m_reg__DOT__f_d_reg__DOT__value[0U] 
							>> 0xaU))));
    // ALWAYS at VX_memory.v:56
    vlTOPp->Vortex__DOT__vx_memory__DOT__temp_branch_dir 
	= (1U & ((0x400U & vlTOPp->Vortex__DOT__vx_e_m_reg__DOT__f_d_reg__DOT__value[0U])
		  ? ((0x200U & vlTOPp->Vortex__DOT__vx_e_m_reg__DOT__f_d_reg__DOT__value[0U])
		      ? ((~ (vlTOPp->Vortex__DOT__vx_e_m_reg__DOT__f_d_reg__DOT__value[0U] 
			     >> 8U)) & (~ (vlTOPp->Vortex__DOT__vx_e_m_reg__DOT__f_d_reg__DOT__value[9U] 
					   >> 1U)))
		      : ((0x100U & vlTOPp->Vortex__DOT__vx_e_m_reg__DOT__f_d_reg__DOT__value[0U])
			  ? (vlTOPp->Vortex__DOT__vx_e_m_reg__DOT__f_d_reg__DOT__value[9U] 
			     >> 1U) : (~ (vlTOPp->Vortex__DOT__vx_e_m_reg__DOT__f_d_reg__DOT__value[9U] 
					  >> 1U))))
		  : ((0x200U & vlTOPp->Vortex__DOT__vx_e_m_reg__DOT__f_d_reg__DOT__value[0U])
		      ? ((0x100U & vlTOPp->Vortex__DOT__vx_e_m_reg__DOT__f_d_reg__DOT__value[0U])
			  ? (vlTOPp->Vortex__DOT__vx_e_m_reg__DOT__f_d_reg__DOT__value[9U] 
			     >> 1U) : (0U != ((vlTOPp->Vortex__DOT__vx_e_m_reg__DOT__f_d_reg__DOT__value[9U] 
					       << 0x1eU) 
					      | (vlTOPp->Vortex__DOT__vx_e_m_reg__DOT__f_d_reg__DOT__value[8U] 
						 >> 2U))))
		      : ((vlTOPp->Vortex__DOT__vx_e_m_reg__DOT__f_d_reg__DOT__value[0U] 
			  >> 8U) & (0U == ((vlTOPp->Vortex__DOT__vx_e_m_reg__DOT__f_d_reg__DOT__value[9U] 
					    << 0x1eU) 
					   | (vlTOPp->Vortex__DOT__vx_e_m_reg__DOT__f_d_reg__DOT__value[8U] 
					      >> 2U)))))));
    vlTOPp->Vortex__DOT__vx_forwarding__DOT__use_memory_PC_next[0U] 
	= ((vlTOPp->Vortex__DOT__vx_e_m_reg__DOT__f_d_reg__DOT__value[3U] 
	    << 0x15U) | (vlTOPp->Vortex__DOT__vx_e_m_reg__DOT__f_d_reg__DOT__value[2U] 
			 >> 0xbU));
    vlTOPp->Vortex__DOT__vx_forwarding__DOT__use_memory_PC_next[1U] 
	= ((vlTOPp->Vortex__DOT__vx_e_m_reg__DOT__f_d_reg__DOT__value[3U] 
	    << 0x15U) | (vlTOPp->Vortex__DOT__vx_e_m_reg__DOT__f_d_reg__DOT__value[2U] 
			 >> 0xbU));
    vlTOPp->Vortex__DOT__vx_forwarding__DOT__use_memory_PC_next[2U] 
	= ((vlTOPp->Vortex__DOT__vx_e_m_reg__DOT__f_d_reg__DOT__value[3U] 
	    << 0x15U) | (vlTOPp->Vortex__DOT__vx_e_m_reg__DOT__f_d_reg__DOT__value[2U] 
			 >> 0xbU));
    vlTOPp->Vortex__DOT__vx_forwarding__DOT__use_memory_PC_next[3U] 
	= ((vlTOPp->Vortex__DOT__vx_e_m_reg__DOT__f_d_reg__DOT__value[3U] 
	    << 0x15U) | (vlTOPp->Vortex__DOT__vx_e_m_reg__DOT__f_d_reg__DOT__value[2U] 
			 >> 0xbU));
    vlTOPp->Vortex__DOT__csr_decode_csr_data = ((0xc00U 
						 == (IData)(vlTOPp->Vortex__DOT__vx_csr_handler__DOT__decode_csr_address))
						 ? (IData)(vlTOPp->Vortex__DOT__vx_csr_handler__DOT__cycle)
						 : 
						((0xc80U 
						  == (IData)(vlTOPp->Vortex__DOT__vx_csr_handler__DOT__decode_csr_address))
						  ? (IData)(
							    (vlTOPp->Vortex__DOT__vx_csr_handler__DOT__cycle 
							     >> 0x20U))
						  : 
						 ((0xc02U 
						   == (IData)(vlTOPp->Vortex__DOT__vx_csr_handler__DOT__decode_csr_address))
						   ? (IData)(vlTOPp->Vortex__DOT__vx_csr_handler__DOT__instret)
						   : 
						  ((0xc82U 
						    == (IData)(vlTOPp->Vortex__DOT__vx_csr_handler__DOT__decode_csr_address))
						    ? (IData)(
							      (vlTOPp->Vortex__DOT__vx_csr_handler__DOT__instret 
							       >> 0x20U))
						    : 
						   ((0x400U 
						     >= 
						     (0x7ffU 
						      & (IData)(vlTOPp->Vortex__DOT__vx_csr_handler__DOT__decode_csr_address)))
						     ? 
						    vlTOPp->Vortex__DOT__vx_csr_handler__DOT__csr
						    [
						    (0x7ffU 
						     & (IData)(vlTOPp->Vortex__DOT__vx_csr_handler__DOT__decode_csr_address))]
						     : 0U)))));
    vlSymsp->TOP__Vortex__DOT__VX_mem_wb.mem_result[0U] 
	= vlTOPp->Vortex__DOT____Vcellinp__vx_memory__in_cache_driver_out_data
	[0U];
    vlSymsp->TOP__Vortex__DOT__VX_mem_wb.mem_result[1U] 
	= vlTOPp->Vortex__DOT____Vcellinp__vx_memory__in_cache_driver_out_data
	[1U];
    vlSymsp->TOP__Vortex__DOT__VX_mem_wb.mem_result[2U] 
	= vlTOPp->Vortex__DOT____Vcellinp__vx_memory__in_cache_driver_out_data
	[2U];
    vlSymsp->TOP__Vortex__DOT__VX_mem_wb.mem_result[3U] 
	= vlTOPp->Vortex__DOT____Vcellinp__vx_memory__in_cache_driver_out_data
	[3U];
    vlTOPp->Vortex__DOT__vx_execute__DOT__genblk1__BRA__0__KET____DOT__vx_alu__DOT__mult_signed_result 
	= VL_MULS_QQQ(64,64,64, VL_EXTENDS_QI(64,32, 
					      ((vlTOPp->Vortex__DOT__vx_d_e_reg__DOT__d_e_reg__DOT__value[0xaU] 
						<< 0x12U) 
					       | (vlTOPp->Vortex__DOT__vx_d_e_reg__DOT__d_e_reg__DOT__value[9U] 
						  >> 0xeU))), 
		      VL_EXTENDS_QI(64,32, vlTOPp->Vortex__DOT__vx_execute__DOT__genblk1__BRA__0__KET____DOT__vx_alu__DOT__ALU_in2));
    vlTOPp->Vortex__DOT__vx_execute__DOT__genblk1__BRA__1__KET____DOT__vx_alu__DOT__mult_signed_result 
	= VL_MULS_QQQ(64,64,64, VL_EXTENDS_QI(64,32, 
					      ((vlTOPp->Vortex__DOT__vx_d_e_reg__DOT__d_e_reg__DOT__value[0xbU] 
						<< 0x12U) 
					       | (vlTOPp->Vortex__DOT__vx_d_e_reg__DOT__d_e_reg__DOT__value[0xaU] 
						  >> 0xeU))), 
		      VL_EXTENDS_QI(64,32, vlTOPp->Vortex__DOT__vx_execute__DOT__genblk1__BRA__1__KET____DOT__vx_alu__DOT__ALU_in2));
    vlTOPp->Vortex__DOT__vx_execute__DOT__genblk1__BRA__2__KET____DOT__vx_alu__DOT__mult_signed_result 
	= VL_MULS_QQQ(64,64,64, VL_EXTENDS_QI(64,32, 
					      ((vlTOPp->Vortex__DOT__vx_d_e_reg__DOT__d_e_reg__DOT__value[0xcU] 
						<< 0x12U) 
					       | (vlTOPp->Vortex__DOT__vx_d_e_reg__DOT__d_e_reg__DOT__value[0xbU] 
						  >> 0xeU))), 
		      VL_EXTENDS_QI(64,32, vlTOPp->Vortex__DOT__vx_execute__DOT__genblk1__BRA__2__KET____DOT__vx_alu__DOT__ALU_in2));
    vlTOPp->Vortex__DOT__vx_execute__DOT__genblk1__BRA__3__KET____DOT__vx_alu__DOT__mult_signed_result 
	= VL_MULS_QQQ(64,64,64, VL_EXTENDS_QI(64,32, 
					      ((vlTOPp->Vortex__DOT__vx_d_e_reg__DOT__d_e_reg__DOT__value[0xdU] 
						<< 0x12U) 
					       | (vlTOPp->Vortex__DOT__vx_d_e_reg__DOT__d_e_reg__DOT__value[0xcU] 
						  >> 0xeU))), 
		      VL_EXTENDS_QI(64,32, vlTOPp->Vortex__DOT__vx_execute__DOT__genblk1__BRA__3__KET____DOT__vx_alu__DOT__ALU_in2));
    vlTOPp->Vortex__DOT__vx_forwarding__DOT__src1_exe_fwd 
	= (((((0x1fU & ((vlTOPp->Vortex__DOT__vx_f_d_reg__DOT__f_d_reg__DOT__value[2U] 
			 << 9U) | (vlTOPp->Vortex__DOT__vx_f_d_reg__DOT__f_d_reg__DOT__value[1U] 
				   >> 0x17U))) == (0x1fU 
						   & ((vlTOPp->Vortex__DOT__vx_d_e_reg__DOT__d_e_reg__DOT__value[0xeU] 
						       << 8U) 
						      | (vlTOPp->Vortex__DOT__vx_d_e_reg__DOT__d_e_reg__DOT__value[0xdU] 
							 >> 0x18U)))) 
	     & (0U != (0x1fU & ((vlTOPp->Vortex__DOT__vx_f_d_reg__DOT__f_d_reg__DOT__value[2U] 
				 << 9U) | (vlTOPp->Vortex__DOT__vx_f_d_reg__DOT__f_d_reg__DOT__value[1U] 
					   >> 0x17U))))) 
	    & (0U != (IData)(vlSymsp->TOP__Vortex__DOT__VX_exe_mem_req.wb))) 
	   & ((0xfU & ((vlTOPp->Vortex__DOT__vx_f_d_reg__DOT__f_d_reg__DOT__value[1U] 
			<< 0x1cU) | (vlTOPp->Vortex__DOT__vx_f_d_reg__DOT__f_d_reg__DOT__value[0U] 
				     >> 4U))) == (0xfU 
						  & vlTOPp->Vortex__DOT__vx_d_e_reg__DOT__d_e_reg__DOT__value[0U])));
    vlTOPp->Vortex__DOT__vx_forwarding__DOT__src2_exe_fwd 
	= (((((0x1fU & ((vlTOPp->Vortex__DOT__vx_f_d_reg__DOT__f_d_reg__DOT__value[2U] 
			 << 4U) | (vlTOPp->Vortex__DOT__vx_f_d_reg__DOT__f_d_reg__DOT__value[1U] 
				   >> 0x1cU))) == (0x1fU 
						   & ((vlTOPp->Vortex__DOT__vx_d_e_reg__DOT__d_e_reg__DOT__value[0xeU] 
						       << 8U) 
						      | (vlTOPp->Vortex__DOT__vx_d_e_reg__DOT__d_e_reg__DOT__value[0xdU] 
							 >> 0x18U)))) 
	     & (0U != (0x1fU & ((vlTOPp->Vortex__DOT__vx_f_d_reg__DOT__f_d_reg__DOT__value[2U] 
				 << 4U) | (vlTOPp->Vortex__DOT__vx_f_d_reg__DOT__f_d_reg__DOT__value[1U] 
					   >> 0x1cU))))) 
	    & (0U != (IData)(vlSymsp->TOP__Vortex__DOT__VX_exe_mem_req.wb))) 
	   & ((0xfU & ((vlTOPp->Vortex__DOT__vx_f_d_reg__DOT__f_d_reg__DOT__value[1U] 
			<< 0x1cU) | (vlTOPp->Vortex__DOT__vx_f_d_reg__DOT__f_d_reg__DOT__value[0U] 
				     >> 4U))) == (0xfU 
						  & vlTOPp->Vortex__DOT__vx_d_e_reg__DOT__d_e_reg__DOT__value[0U])));
    // ALWAYS at VX_decode.v:503
    vlSymsp->TOP__Vortex__DOT__VX_frE_to_bckE_req.itype_immed 
	= ((0x4000U & vlTOPp->Vortex__DOT__vx_f_d_reg__DOT__f_d_reg__DOT__value[1U])
	    ? ((0x2000U & vlTOPp->Vortex__DOT__vx_f_d_reg__DOT__f_d_reg__DOT__value[1U])
	        ? ((0x1000U & vlTOPp->Vortex__DOT__vx_f_d_reg__DOT__f_d_reg__DOT__value[1U])
		    ? 0xdeadbeefU : ((0x800U & vlTOPp->Vortex__DOT__vx_f_d_reg__DOT__f_d_reg__DOT__value[1U])
				      ? 0xdeadbeefU
				      : ((0x400U & 
					  vlTOPp->Vortex__DOT__vx_f_d_reg__DOT__f_d_reg__DOT__value[1U])
					  ? 0xdeadbeefU
					  : ((0x200U 
					      & vlTOPp->Vortex__DOT__vx_f_d_reg__DOT__f_d_reg__DOT__value[1U])
					      ? ((0x100U 
						  & vlTOPp->Vortex__DOT__vx_f_d_reg__DOT__f_d_reg__DOT__value[1U])
						  ? 
						 ((0xfffff000U 
						   & (VL_NEGATE_I((IData)(
									  (1U 
									   & (vlTOPp->Vortex__DOT__vx_f_d_reg__DOT__f_d_reg__DOT__value[2U] 
									      >> 7U)))) 
						      << 0xcU)) 
						  | ((0x800U 
						      & (vlTOPp->Vortex__DOT__vx_f_d_reg__DOT__f_d_reg__DOT__value[2U] 
							 << 4U)) 
						     | ((0x400U 
							 & (vlTOPp->Vortex__DOT__vx_f_d_reg__DOT__f_d_reg__DOT__value[1U] 
							    >> 5U)) 
							| ((0x3f0U 
							    & (vlTOPp->Vortex__DOT__vx_f_d_reg__DOT__f_d_reg__DOT__value[2U] 
							       << 3U)) 
							   | (0xfU 
							      & ((vlTOPp->Vortex__DOT__vx_f_d_reg__DOT__f_d_reg__DOT__value[2U] 
								  << 0x10U) 
								 | (vlTOPp->Vortex__DOT__vx_f_d_reg__DOT__f_d_reg__DOT__value[1U] 
								    >> 0x10U)))))))
						  : 0xdeadbeefU)
					      : 0xdeadbeefU))))
	        : 0xdeadbeefU) : ((0x2000U & vlTOPp->Vortex__DOT__vx_f_d_reg__DOT__f_d_reg__DOT__value[1U])
				   ? ((0x1000U & vlTOPp->Vortex__DOT__vx_f_d_reg__DOT__f_d_reg__DOT__value[1U])
				       ? 0xdeadbeefU
				       : ((0x800U & 
					   vlTOPp->Vortex__DOT__vx_f_d_reg__DOT__f_d_reg__DOT__value[1U])
					   ? 0xdeadbeefU
					   : ((0x400U 
					       & vlTOPp->Vortex__DOT__vx_f_d_reg__DOT__f_d_reg__DOT__value[1U])
					       ? 0xdeadbeefU
					       : ((0x200U 
						   & vlTOPp->Vortex__DOT__vx_f_d_reg__DOT__f_d_reg__DOT__value[1U])
						   ? 
						  ((0x100U 
						    & vlTOPp->Vortex__DOT__vx_f_d_reg__DOT__f_d_reg__DOT__value[1U])
						    ? 
						   ((0xfffff000U 
						     & (VL_NEGATE_I((IData)(
									    (1U 
									     & (vlTOPp->Vortex__DOT__vx_f_d_reg__DOT__f_d_reg__DOT__value[2U] 
										>> 7U)))) 
							<< 0xcU)) 
						    | ((0xfe0U 
							& (vlTOPp->Vortex__DOT__vx_f_d_reg__DOT__f_d_reg__DOT__value[2U] 
							   << 4U)) 
						       | (0x1fU 
							  & ((vlTOPp->Vortex__DOT__vx_f_d_reg__DOT__f_d_reg__DOT__value[2U] 
							      << 0x11U) 
							     | (vlTOPp->Vortex__DOT__vx_f_d_reg__DOT__f_d_reg__DOT__value[1U] 
								>> 0xfU)))))
						    : 0xdeadbeefU)
						   : 0xdeadbeefU))))
				   : ((0x1000U & vlTOPp->Vortex__DOT__vx_f_d_reg__DOT__f_d_reg__DOT__value[1U])
				       ? ((0x800U & 
					   vlTOPp->Vortex__DOT__vx_f_d_reg__DOT__f_d_reg__DOT__value[1U])
					   ? 0xdeadbeefU
					   : ((0x400U 
					       & vlTOPp->Vortex__DOT__vx_f_d_reg__DOT__f_d_reg__DOT__value[1U])
					       ? 0xdeadbeefU
					       : ((0x200U 
						   & vlTOPp->Vortex__DOT__vx_f_d_reg__DOT__f_d_reg__DOT__value[1U])
						   ? 
						  ((0x100U 
						    & vlTOPp->Vortex__DOT__vx_f_d_reg__DOT__f_d_reg__DOT__value[1U])
						    ? 
						   ((0xfffff000U 
						     & (VL_NEGATE_I((IData)(
									    (1U 
									     & ((IData)(vlTOPp->Vortex__DOT__vx_decode__DOT__alu_tempp) 
										>> 0xbU)))) 
							<< 0xcU)) 
						    | (IData)(vlTOPp->Vortex__DOT__vx_decode__DOT__alu_tempp))
						    : 0xdeadbeefU)
						   : 0xdeadbeefU)))
				       : ((0x800U & 
					   vlTOPp->Vortex__DOT__vx_f_d_reg__DOT__f_d_reg__DOT__value[1U])
					   ? 0xdeadbeefU
					   : ((0x400U 
					       & vlTOPp->Vortex__DOT__vx_f_d_reg__DOT__f_d_reg__DOT__value[1U])
					       ? 0xdeadbeefU
					       : ((0x200U 
						   & vlTOPp->Vortex__DOT__vx_f_d_reg__DOT__f_d_reg__DOT__value[1U])
						   ? 
						  ((0x100U 
						    & vlTOPp->Vortex__DOT__vx_f_d_reg__DOT__f_d_reg__DOT__value[1U])
						    ? 
						   ((0xfffff000U 
						     & (VL_NEGATE_I((IData)(
									    (1U 
									     & (vlTOPp->Vortex__DOT__vx_f_d_reg__DOT__f_d_reg__DOT__value[2U] 
										>> 7U)))) 
							<< 0xcU)) 
						    | (0xfffU 
						       & ((vlTOPp->Vortex__DOT__vx_f_d_reg__DOT__f_d_reg__DOT__value[2U] 
							   << 4U) 
							  | (vlTOPp->Vortex__DOT__vx_f_d_reg__DOT__f_d_reg__DOT__value[1U] 
							     >> 0x1cU))))
						    : 0xdeadbeefU)
						   : 0xdeadbeefU))))));
    vlTOPp->Vortex__DOT__vx_decode__DOT__is_ebreak 
	= ((0x73U == (0x7fU & ((vlTOPp->Vortex__DOT__vx_f_d_reg__DOT__f_d_reg__DOT__value[2U] 
				<< 0x18U) | (vlTOPp->Vortex__DOT__vx_f_d_reg__DOT__f_d_reg__DOT__value[1U] 
					     >> 8U)))) 
	   & ((IData)(vlTOPp->Vortex__DOT__vx_decode__DOT__jal_sys_jal) 
	      & vlTOPp->Vortex__DOT__vx_decode__DOT__in_valid
	      [0U]));
    // ALWAYS at VX_decode.v:447
    if ((0x4000U & vlTOPp->Vortex__DOT__vx_f_d_reg__DOT__f_d_reg__DOT__value[1U])) {
	if ((0x2000U & vlTOPp->Vortex__DOT__vx_f_d_reg__DOT__f_d_reg__DOT__value[1U])) {
	    if ((0x1000U & vlTOPp->Vortex__DOT__vx_f_d_reg__DOT__f_d_reg__DOT__value[1U])) {
		vlSymsp->TOP__Vortex__DOT__VX_frE_to_bckE_req.jal_offset 
		    = ((0x800U & vlTOPp->Vortex__DOT__vx_f_d_reg__DOT__f_d_reg__DOT__value[1U])
		        ? 0xdeadbeefU : ((0x400U & 
					  vlTOPp->Vortex__DOT__vx_f_d_reg__DOT__f_d_reg__DOT__value[1U])
					  ? 0xdeadbeefU
					  : ((0x200U 
					      & vlTOPp->Vortex__DOT__vx_f_d_reg__DOT__f_d_reg__DOT__value[1U])
					      ? ((0x100U 
						  & vlTOPp->Vortex__DOT__vx_f_d_reg__DOT__f_d_reg__DOT__value[1U])
						  ? 
						 (((0U 
						    == 
						    (7U 
						     & ((vlTOPp->Vortex__DOT__vx_f_d_reg__DOT__f_d_reg__DOT__value[2U] 
							 << 0xcU) 
							| (vlTOPp->Vortex__DOT__vx_f_d_reg__DOT__f_d_reg__DOT__value[1U] 
							   >> 0x14U)))) 
						   & (2U 
						      > 
						      (0xfffU 
						       & ((vlTOPp->Vortex__DOT__vx_f_d_reg__DOT__f_d_reg__DOT__value[2U] 
							   << 4U) 
							  | (vlTOPp->Vortex__DOT__vx_f_d_reg__DOT__f_d_reg__DOT__value[1U] 
							     >> 0x1cU)))))
						   ? 0xb0000000U
						   : 0xdeadbeefU)
						  : 0xdeadbeefU)
					      : 0xdeadbeefU)));
	    } else {
		if ((0x800U & vlTOPp->Vortex__DOT__vx_f_d_reg__DOT__f_d_reg__DOT__value[1U])) {
		    if ((0x400U & vlTOPp->Vortex__DOT__vx_f_d_reg__DOT__f_d_reg__DOT__value[1U])) {
			vlSymsp->TOP__Vortex__DOT__VX_frE_to_bckE_req.jal_offset 
			    = ((0x200U & vlTOPp->Vortex__DOT__vx_f_d_reg__DOT__f_d_reg__DOT__value[1U])
			        ? ((0x100U & vlTOPp->Vortex__DOT__vx_f_d_reg__DOT__f_d_reg__DOT__value[1U])
				    ? ((0xffe00000U 
					& (VL_NEGATE_I((IData)(
							       (1U 
								& (vlTOPp->Vortex__DOT__vx_f_d_reg__DOT__f_d_reg__DOT__value[2U] 
								   >> 7U)))) 
					   << 0x15U)) 
				       | ((0x100000U 
					   & (vlTOPp->Vortex__DOT__vx_f_d_reg__DOT__f_d_reg__DOT__value[2U] 
					      << 0xdU)) 
					  | ((0xff000U 
					      & ((vlTOPp->Vortex__DOT__vx_f_d_reg__DOT__f_d_reg__DOT__value[2U] 
						  << 0x18U) 
						 | (0xfff000U 
						    & (vlTOPp->Vortex__DOT__vx_f_d_reg__DOT__f_d_reg__DOT__value[1U] 
						       >> 8U)))) 
					     | ((0x800U 
						 & (vlTOPp->Vortex__DOT__vx_f_d_reg__DOT__f_d_reg__DOT__value[1U] 
						    >> 0x11U)) 
						| (0x7feU 
						   & ((vlTOPp->Vortex__DOT__vx_f_d_reg__DOT__f_d_reg__DOT__value[2U] 
						       << 4U) 
						      | (0xeU 
							 & (vlTOPp->Vortex__DOT__vx_f_d_reg__DOT__f_d_reg__DOT__value[1U] 
							    >> 0x1cU))))))))
				    : 0xdeadbeefU) : 0xdeadbeefU);
		    } else {
			if ((0x200U & vlTOPp->Vortex__DOT__vx_f_d_reg__DOT__f_d_reg__DOT__value[1U])) {
			    if ((0x100U & vlTOPp->Vortex__DOT__vx_f_d_reg__DOT__f_d_reg__DOT__value[1U])) {
				if (((IData)(vlTOPp->Vortex__DOT__vx_decode__DOT__is_jalrs) 
				     | (IData)(vlTOPp->Vortex__DOT__vx_decode__DOT__is_jmprt))) {
				    vlSymsp->TOP__Vortex__DOT__VX_frE_to_bckE_req.jal_offset = 0U;
				}
			    } else {
				vlSymsp->TOP__Vortex__DOT__VX_frE_to_bckE_req.jal_offset = 0xdeadbeefU;
			    }
			} else {
			    vlSymsp->TOP__Vortex__DOT__VX_frE_to_bckE_req.jal_offset = 0xdeadbeefU;
			}
		    }
		} else {
		    vlSymsp->TOP__Vortex__DOT__VX_frE_to_bckE_req.jal_offset 
			= ((0x400U & vlTOPp->Vortex__DOT__vx_f_d_reg__DOT__f_d_reg__DOT__value[1U])
			    ? ((0x200U & vlTOPp->Vortex__DOT__vx_f_d_reg__DOT__f_d_reg__DOT__value[1U])
			        ? ((0x100U & vlTOPp->Vortex__DOT__vx_f_d_reg__DOT__f_d_reg__DOT__value[1U])
				    ? ((0xfffff000U 
					& (VL_NEGATE_I((IData)(
							       (1U 
								& (vlTOPp->Vortex__DOT__vx_f_d_reg__DOT__f_d_reg__DOT__value[2U] 
								   >> 7U)))) 
					   << 0xcU)) 
				       | (0xfffU & 
					  ((vlTOPp->Vortex__DOT__vx_f_d_reg__DOT__f_d_reg__DOT__value[2U] 
					    << 4U) 
					   | (vlTOPp->Vortex__DOT__vx_f_d_reg__DOT__f_d_reg__DOT__value[1U] 
					      >> 0x1cU))))
				    : 0xdeadbeefU) : 0xdeadbeefU)
			    : 0xdeadbeefU);
		}
	    }
	} else {
	    vlSymsp->TOP__Vortex__DOT__VX_frE_to_bckE_req.jal_offset = 0xdeadbeefU;
	}
    } else {
	vlSymsp->TOP__Vortex__DOT__VX_frE_to_bckE_req.jal_offset = 0xdeadbeefU;
    }
    // ALWAYS at VX_decode.v:447
    if ((0x4000U & vlTOPp->Vortex__DOT__vx_f_d_reg__DOT__f_d_reg__DOT__value[1U])) {
	if ((0x2000U & vlTOPp->Vortex__DOT__vx_f_d_reg__DOT__f_d_reg__DOT__value[1U])) {
	    if ((0x1000U & vlTOPp->Vortex__DOT__vx_f_d_reg__DOT__f_d_reg__DOT__value[1U])) {
		vlSymsp->TOP__Vortex__DOT__VX_frE_to_bckE_req.jal 
		    = ((~ (vlTOPp->Vortex__DOT__vx_f_d_reg__DOT__f_d_reg__DOT__value[1U] 
			   >> 0xbU)) & ((~ (vlTOPp->Vortex__DOT__vx_f_d_reg__DOT__f_d_reg__DOT__value[1U] 
					    >> 0xaU)) 
					& ((vlTOPp->Vortex__DOT__vx_f_d_reg__DOT__f_d_reg__DOT__value[1U] 
					    >> 9U) 
					   & ((vlTOPp->Vortex__DOT__vx_f_d_reg__DOT__f_d_reg__DOT__value[1U] 
					       >> 8U) 
					      & ((IData)(vlTOPp->Vortex__DOT__vx_decode__DOT__jal_sys_jal) 
						 & vlTOPp->Vortex__DOT__vx_decode__DOT__in_valid
						 [0U])))));
	    } else {
		if ((0x800U & vlTOPp->Vortex__DOT__vx_f_d_reg__DOT__f_d_reg__DOT__value[1U])) {
		    if ((0x400U & vlTOPp->Vortex__DOT__vx_f_d_reg__DOT__f_d_reg__DOT__value[1U])) {
			vlSymsp->TOP__Vortex__DOT__VX_frE_to_bckE_req.jal 
			    = ((vlTOPp->Vortex__DOT__vx_f_d_reg__DOT__f_d_reg__DOT__value[1U] 
				>> 9U) & ((vlTOPp->Vortex__DOT__vx_f_d_reg__DOT__f_d_reg__DOT__value[1U] 
					   >> 8U) & 
					  vlTOPp->Vortex__DOT__vx_decode__DOT__in_valid
					  [0U]));
		    } else {
			if ((0x200U & vlTOPp->Vortex__DOT__vx_f_d_reg__DOT__f_d_reg__DOT__value[1U])) {
			    if ((0x100U & vlTOPp->Vortex__DOT__vx_f_d_reg__DOT__f_d_reg__DOT__value[1U])) {
				if (((IData)(vlTOPp->Vortex__DOT__vx_decode__DOT__is_jalrs) 
				     | (IData)(vlTOPp->Vortex__DOT__vx_decode__DOT__is_jmprt))) {
				    vlSymsp->TOP__Vortex__DOT__VX_frE_to_bckE_req.jal 
					= vlTOPp->Vortex__DOT__vx_decode__DOT__in_valid
					[0U];
				}
			    } else {
				vlSymsp->TOP__Vortex__DOT__VX_frE_to_bckE_req.jal = 0U;
			    }
			} else {
			    vlSymsp->TOP__Vortex__DOT__VX_frE_to_bckE_req.jal = 0U;
			}
		    }
		} else {
		    vlSymsp->TOP__Vortex__DOT__VX_frE_to_bckE_req.jal 
			= ((vlTOPp->Vortex__DOT__vx_f_d_reg__DOT__f_d_reg__DOT__value[1U] 
			    >> 0xaU) & ((vlTOPp->Vortex__DOT__vx_f_d_reg__DOT__f_d_reg__DOT__value[1U] 
					 >> 9U) & (
						   (vlTOPp->Vortex__DOT__vx_f_d_reg__DOT__f_d_reg__DOT__value[1U] 
						    >> 8U) 
						   & vlTOPp->Vortex__DOT__vx_decode__DOT__in_valid
						   [0U])));
		}
	    }
	} else {
	    vlSymsp->TOP__Vortex__DOT__VX_frE_to_bckE_req.jal = 0U;
	}
    } else {
	vlSymsp->TOP__Vortex__DOT__VX_frE_to_bckE_req.jal = 0U;
    }
    // ALWAYS at VX_decode.v:514
    if ((0x4000U & vlTOPp->Vortex__DOT__vx_f_d_reg__DOT__f_d_reg__DOT__value[1U])) {
	if ((0x2000U & vlTOPp->Vortex__DOT__vx_f_d_reg__DOT__f_d_reg__DOT__value[1U])) {
	    if ((0x1000U & vlTOPp->Vortex__DOT__vx_f_d_reg__DOT__f_d_reg__DOT__value[1U])) {
		vlSymsp->TOP__Vortex__DOT__VX_frE_to_bckE_req.branch_type = 0U;
	    } else {
		if ((0x800U & vlTOPp->Vortex__DOT__vx_f_d_reg__DOT__f_d_reg__DOT__value[1U])) {
		    if ((0x400U & vlTOPp->Vortex__DOT__vx_f_d_reg__DOT__f_d_reg__DOT__value[1U])) {
			vlSymsp->TOP__Vortex__DOT__VX_frE_to_bckE_req.branch_type = 0U;
		    } else {
			if ((0x200U & vlTOPp->Vortex__DOT__vx_f_d_reg__DOT__f_d_reg__DOT__value[1U])) {
			    if ((0x100U & vlTOPp->Vortex__DOT__vx_f_d_reg__DOT__f_d_reg__DOT__value[1U])) {
				if (((IData)(vlTOPp->Vortex__DOT__vx_decode__DOT__is_jalrs) 
				     | (IData)(vlTOPp->Vortex__DOT__vx_decode__DOT__is_jmprt))) {
				    vlSymsp->TOP__Vortex__DOT__VX_frE_to_bckE_req.branch_type = 0U;
				}
			    } else {
				vlSymsp->TOP__Vortex__DOT__VX_frE_to_bckE_req.branch_type = 0U;
			    }
			} else {
			    vlSymsp->TOP__Vortex__DOT__VX_frE_to_bckE_req.branch_type = 0U;
			}
		    }
		} else {
		    vlSymsp->TOP__Vortex__DOT__VX_frE_to_bckE_req.branch_type 
			= ((0x400U & vlTOPp->Vortex__DOT__vx_f_d_reg__DOT__f_d_reg__DOT__value[1U])
			    ? 0U : ((0x200U & vlTOPp->Vortex__DOT__vx_f_d_reg__DOT__f_d_reg__DOT__value[1U])
				     ? ((0x100U & vlTOPp->Vortex__DOT__vx_f_d_reg__DOT__f_d_reg__DOT__value[1U])
					 ? ((0x400000U 
					     & vlTOPp->Vortex__DOT__vx_f_d_reg__DOT__f_d_reg__DOT__value[1U])
					     ? ((0x200000U 
						 & vlTOPp->Vortex__DOT__vx_f_d_reg__DOT__f_d_reg__DOT__value[1U])
						 ? 
						((0x100000U 
						  & vlTOPp->Vortex__DOT__vx_f_d_reg__DOT__f_d_reg__DOT__value[1U])
						  ? 6U
						  : 5U)
						 : 
						((0x100000U 
						  & vlTOPp->Vortex__DOT__vx_f_d_reg__DOT__f_d_reg__DOT__value[1U])
						  ? 4U
						  : 3U))
					     : ((0x200000U 
						 & vlTOPp->Vortex__DOT__vx_f_d_reg__DOT__f_d_reg__DOT__value[1U])
						 ? 0U
						 : 
						((0x100000U 
						  & vlTOPp->Vortex__DOT__vx_f_d_reg__DOT__f_d_reg__DOT__value[1U])
						  ? 2U
						  : 1U)))
					 : 0U) : 0U));
		}
	    }
	} else {
	    vlSymsp->TOP__Vortex__DOT__VX_frE_to_bckE_req.branch_type = 0U;
	}
    } else {
	vlSymsp->TOP__Vortex__DOT__VX_frE_to_bckE_req.branch_type = 0U;
    }
    // ALWAYS at VX_decode.v:514
    if ((0x4000U & vlTOPp->Vortex__DOT__vx_f_d_reg__DOT__f_d_reg__DOT__value[1U])) {
	if ((0x2000U & vlTOPp->Vortex__DOT__vx_f_d_reg__DOT__f_d_reg__DOT__value[1U])) {
	    if ((0x1000U & vlTOPp->Vortex__DOT__vx_f_d_reg__DOT__f_d_reg__DOT__value[1U])) {
		vlTOPp->Vortex__DOT__decode_branch_stall = 0U;
	    } else {
		if ((0x800U & vlTOPp->Vortex__DOT__vx_f_d_reg__DOT__f_d_reg__DOT__value[1U])) {
		    if ((0x400U & vlTOPp->Vortex__DOT__vx_f_d_reg__DOT__f_d_reg__DOT__value[1U])) {
			vlTOPp->Vortex__DOT__decode_branch_stall 
			    = ((vlTOPp->Vortex__DOT__vx_f_d_reg__DOT__f_d_reg__DOT__value[1U] 
				>> 9U) & ((vlTOPp->Vortex__DOT__vx_f_d_reg__DOT__f_d_reg__DOT__value[1U] 
					   >> 8U) & 
					  vlTOPp->Vortex__DOT__vx_decode__DOT__in_valid
					  [0U]));
		    } else {
			if ((0x200U & vlTOPp->Vortex__DOT__vx_f_d_reg__DOT__f_d_reg__DOT__value[1U])) {
			    if ((0x100U & vlTOPp->Vortex__DOT__vx_f_d_reg__DOT__f_d_reg__DOT__value[1U])) {
				if (((IData)(vlTOPp->Vortex__DOT__vx_decode__DOT__is_jalrs) 
				     | (IData)(vlTOPp->Vortex__DOT__vx_decode__DOT__is_jmprt))) {
				    vlTOPp->Vortex__DOT__decode_branch_stall 
					= vlTOPp->Vortex__DOT__vx_decode__DOT__in_valid
					[0U];
				}
			    } else {
				vlTOPp->Vortex__DOT__decode_branch_stall = 0U;
			    }
			} else {
			    vlTOPp->Vortex__DOT__decode_branch_stall = 0U;
			}
		    }
		} else {
		    vlTOPp->Vortex__DOT__decode_branch_stall 
			= ((0x400U & vlTOPp->Vortex__DOT__vx_f_d_reg__DOT__f_d_reg__DOT__value[1U])
			    ? ((vlTOPp->Vortex__DOT__vx_f_d_reg__DOT__f_d_reg__DOT__value[1U] 
				>> 9U) & ((vlTOPp->Vortex__DOT__vx_f_d_reg__DOT__f_d_reg__DOT__value[1U] 
					   >> 8U) & 
					  vlTOPp->Vortex__DOT__vx_decode__DOT__in_valid
					  [0U])) : 
			   ((vlTOPp->Vortex__DOT__vx_f_d_reg__DOT__f_d_reg__DOT__value[1U] 
			     >> 9U) & ((vlTOPp->Vortex__DOT__vx_f_d_reg__DOT__f_d_reg__DOT__value[1U] 
					>> 8U) & vlTOPp->Vortex__DOT__vx_decode__DOT__in_valid
				       [0U])));
		}
	    }
	} else {
	    vlTOPp->Vortex__DOT__decode_branch_stall = 0U;
	}
    } else {
	vlTOPp->Vortex__DOT__decode_branch_stall = 0U;
    }
    vlSymsp->TOP__Vortex__DOT__VX_warp_ctl.change_mask 
	= ((IData)(vlTOPp->Vortex__DOT__vx_decode__DOT__is_jalrs) 
	   | (IData)(vlTOPp->Vortex__DOT__vx_decode__DOT__is_jmprt));
    vlTOPp->Vortex__DOT__vx_decode__DOT__genblk2__BRA__1__KET____DOT__real_wspawn 
	= ((IData)(vlTOPp->Vortex__DOT__vx_decode__DOT__is_wspawn) 
	   & (1U == (0xfU & ((IData)(1U) + (IData)(vlTOPp->Vortex__DOT__vx_fetch__DOT__warp_state)))));
    vlTOPp->Vortex__DOT__vx_decode__DOT__genblk2__BRA__2__KET____DOT__real_wspawn 
	= ((IData)(vlTOPp->Vortex__DOT__vx_decode__DOT__is_wspawn) 
	   & (2U == (0xfU & ((IData)(1U) + (IData)(vlTOPp->Vortex__DOT__vx_fetch__DOT__warp_state)))));
    vlTOPp->Vortex__DOT__vx_decode__DOT__genblk2__BRA__3__KET____DOT__real_wspawn 
	= ((IData)(vlTOPp->Vortex__DOT__vx_decode__DOT__is_wspawn) 
	   & (3U == (0xfU & ((IData)(1U) + (IData)(vlTOPp->Vortex__DOT__vx_fetch__DOT__warp_state)))));
    vlTOPp->Vortex__DOT__vx_decode__DOT__genblk2__BRA__4__KET____DOT__real_wspawn 
	= ((IData)(vlTOPp->Vortex__DOT__vx_decode__DOT__is_wspawn) 
	   & (4U == (0xfU & ((IData)(1U) + (IData)(vlTOPp->Vortex__DOT__vx_fetch__DOT__warp_state)))));
    vlTOPp->Vortex__DOT__vx_decode__DOT__genblk2__BRA__5__KET____DOT__real_wspawn 
	= ((IData)(vlTOPp->Vortex__DOT__vx_decode__DOT__is_wspawn) 
	   & (5U == (0xfU & ((IData)(1U) + (IData)(vlTOPp->Vortex__DOT__vx_fetch__DOT__warp_state)))));
    vlTOPp->Vortex__DOT__vx_decode__DOT__genblk2__BRA__6__KET____DOT__real_wspawn 
	= ((IData)(vlTOPp->Vortex__DOT__vx_decode__DOT__is_wspawn) 
	   & (6U == (0xfU & ((IData)(1U) + (IData)(vlTOPp->Vortex__DOT__vx_fetch__DOT__warp_state)))));
    vlTOPp->Vortex__DOT__vx_decode__DOT__genblk2__BRA__7__KET____DOT__real_wspawn 
	= ((IData)(vlTOPp->Vortex__DOT__vx_decode__DOT__is_wspawn) 
	   & (7U == (0xfU & ((IData)(1U) + (IData)(vlTOPp->Vortex__DOT__vx_fetch__DOT__warp_state)))));
    vlTOPp->Vortex__DOT__vx_decode__DOT__real_zero_isclone 
	= ((IData)(vlTOPp->Vortex__DOT__vx_decode__DOT__is_clone) 
	   & (0U == (0xfU & ((vlTOPp->Vortex__DOT__vx_f_d_reg__DOT__f_d_reg__DOT__value[1U] 
			      << 0x1cU) | (vlTOPp->Vortex__DOT__vx_f_d_reg__DOT__f_d_reg__DOT__value[0U] 
					   >> 4U)))));
    vlTOPp->Vortex__DOT__vx_decode__DOT__genblk2__BRA__1__KET____DOT__real_isclone 
	= ((IData)(vlTOPp->Vortex__DOT__vx_decode__DOT__is_clone) 
	   & (1U == (0xfU & ((vlTOPp->Vortex__DOT__vx_f_d_reg__DOT__f_d_reg__DOT__value[1U] 
			      << 0x1cU) | (vlTOPp->Vortex__DOT__vx_f_d_reg__DOT__f_d_reg__DOT__value[0U] 
					   >> 4U)))));
    vlTOPp->Vortex__DOT__vx_decode__DOT__genblk2__BRA__2__KET____DOT__real_isclone 
	= ((IData)(vlTOPp->Vortex__DOT__vx_decode__DOT__is_clone) 
	   & (2U == (0xfU & ((vlTOPp->Vortex__DOT__vx_f_d_reg__DOT__f_d_reg__DOT__value[1U] 
			      << 0x1cU) | (vlTOPp->Vortex__DOT__vx_f_d_reg__DOT__f_d_reg__DOT__value[0U] 
					   >> 4U)))));
    vlTOPp->Vortex__DOT__vx_decode__DOT__genblk2__BRA__3__KET____DOT__real_isclone 
	= ((IData)(vlTOPp->Vortex__DOT__vx_decode__DOT__is_clone) 
	   & (3U == (0xfU & ((vlTOPp->Vortex__DOT__vx_f_d_reg__DOT__f_d_reg__DOT__value[1U] 
			      << 0x1cU) | (vlTOPp->Vortex__DOT__vx_f_d_reg__DOT__f_d_reg__DOT__value[0U] 
					   >> 4U)))));
    vlTOPp->Vortex__DOT__vx_decode__DOT__genblk2__BRA__4__KET____DOT__real_isclone 
	= ((IData)(vlTOPp->Vortex__DOT__vx_decode__DOT__is_clone) 
	   & (4U == (0xfU & ((vlTOPp->Vortex__DOT__vx_f_d_reg__DOT__f_d_reg__DOT__value[1U] 
			      << 0x1cU) | (vlTOPp->Vortex__DOT__vx_f_d_reg__DOT__f_d_reg__DOT__value[0U] 
					   >> 4U)))));
    vlTOPp->Vortex__DOT__vx_decode__DOT__genblk2__BRA__5__KET____DOT__real_isclone 
	= ((IData)(vlTOPp->Vortex__DOT__vx_decode__DOT__is_clone) 
	   & (5U == (0xfU & ((vlTOPp->Vortex__DOT__vx_f_d_reg__DOT__f_d_reg__DOT__value[1U] 
			      << 0x1cU) | (vlTOPp->Vortex__DOT__vx_f_d_reg__DOT__f_d_reg__DOT__value[0U] 
					   >> 4U)))));
    vlTOPp->Vortex__DOT__vx_decode__DOT__genblk2__BRA__6__KET____DOT__real_isclone 
	= ((IData)(vlTOPp->Vortex__DOT__vx_decode__DOT__is_clone) 
	   & (6U == (0xfU & ((vlTOPp->Vortex__DOT__vx_f_d_reg__DOT__f_d_reg__DOT__value[1U] 
			      << 0x1cU) | (vlTOPp->Vortex__DOT__vx_f_d_reg__DOT__f_d_reg__DOT__value[0U] 
					   >> 4U)))));
    vlTOPp->Vortex__DOT__vx_decode__DOT__genblk2__BRA__7__KET____DOT__real_isclone 
	= ((IData)(vlTOPp->Vortex__DOT__vx_decode__DOT__is_clone) 
	   & (7U == (0xfU & ((vlTOPp->Vortex__DOT__vx_f_d_reg__DOT__f_d_reg__DOT__value[1U] 
			      << 0x1cU) | (vlTOPp->Vortex__DOT__vx_f_d_reg__DOT__f_d_reg__DOT__value[0U] 
					   >> 4U)))));
    vlSymsp->TOP__Vortex__DOT__VX_writeback_inter.write_data[0U] 
	= ((3U == (3U & ((vlTOPp->Vortex__DOT__vx_m_w_reg__DOT__m_w_reg__DOT__value[2U] 
			  << 0xeU) | (vlTOPp->Vortex__DOT__vx_m_w_reg__DOT__m_w_reg__DOT__value[1U] 
				      >> 0x12U)))) ? 
	   vlTOPp->Vortex__DOT__vx_writeback__DOT__out_pc_data[0U]
	    : ((1U == (3U & ((vlTOPp->Vortex__DOT__vx_m_w_reg__DOT__m_w_reg__DOT__value[2U] 
			      << 0xeU) | (vlTOPp->Vortex__DOT__vx_m_w_reg__DOT__m_w_reg__DOT__value[1U] 
					  >> 0x12U))))
	        ? ((vlTOPp->Vortex__DOT__vx_m_w_reg__DOT__m_w_reg__DOT__value[6U] 
		    << 7U) | (vlTOPp->Vortex__DOT__vx_m_w_reg__DOT__m_w_reg__DOT__value[5U] 
			      >> 0x19U)) : ((vlTOPp->Vortex__DOT__vx_m_w_reg__DOT__m_w_reg__DOT__value[2U] 
					     << 7U) 
					    | (vlTOPp->Vortex__DOT__vx_m_w_reg__DOT__m_w_reg__DOT__value[1U] 
					       >> 0x19U))));
    vlSymsp->TOP__Vortex__DOT__VX_writeback_inter.write_data[1U] 
	= ((3U == (3U & ((vlTOPp->Vortex__DOT__vx_m_w_reg__DOT__m_w_reg__DOT__value[2U] 
			  << 0xeU) | (vlTOPp->Vortex__DOT__vx_m_w_reg__DOT__m_w_reg__DOT__value[1U] 
				      >> 0x12U)))) ? 
	   vlTOPp->Vortex__DOT__vx_writeback__DOT__out_pc_data[1U]
	    : ((1U == (3U & ((vlTOPp->Vortex__DOT__vx_m_w_reg__DOT__m_w_reg__DOT__value[2U] 
			      << 0xeU) | (vlTOPp->Vortex__DOT__vx_m_w_reg__DOT__m_w_reg__DOT__value[1U] 
					  >> 0x12U))))
	        ? ((vlTOPp->Vortex__DOT__vx_m_w_reg__DOT__m_w_reg__DOT__value[7U] 
		    << 7U) | (vlTOPp->Vortex__DOT__vx_m_w_reg__DOT__m_w_reg__DOT__value[6U] 
			      >> 0x19U)) : ((vlTOPp->Vortex__DOT__vx_m_w_reg__DOT__m_w_reg__DOT__value[3U] 
					     << 7U) 
					    | (vlTOPp->Vortex__DOT__vx_m_w_reg__DOT__m_w_reg__DOT__value[2U] 
					       >> 0x19U))));
    vlSymsp->TOP__Vortex__DOT__VX_writeback_inter.write_data[2U] 
	= ((3U == (3U & ((vlTOPp->Vortex__DOT__vx_m_w_reg__DOT__m_w_reg__DOT__value[2U] 
			  << 0xeU) | (vlTOPp->Vortex__DOT__vx_m_w_reg__DOT__m_w_reg__DOT__value[1U] 
				      >> 0x12U)))) ? 
	   vlTOPp->Vortex__DOT__vx_writeback__DOT__out_pc_data[2U]
	    : ((1U == (3U & ((vlTOPp->Vortex__DOT__vx_m_w_reg__DOT__m_w_reg__DOT__value[2U] 
			      << 0xeU) | (vlTOPp->Vortex__DOT__vx_m_w_reg__DOT__m_w_reg__DOT__value[1U] 
					  >> 0x12U))))
	        ? ((vlTOPp->Vortex__DOT__vx_m_w_reg__DOT__m_w_reg__DOT__value[8U] 
		    << 7U) | (vlTOPp->Vortex__DOT__vx_m_w_reg__DOT__m_w_reg__DOT__value[7U] 
			      >> 0x19U)) : ((vlTOPp->Vortex__DOT__vx_m_w_reg__DOT__m_w_reg__DOT__value[4U] 
					     << 7U) 
					    | (vlTOPp->Vortex__DOT__vx_m_w_reg__DOT__m_w_reg__DOT__value[3U] 
					       >> 0x19U))));
    vlSymsp->TOP__Vortex__DOT__VX_writeback_inter.write_data[3U] 
	= ((3U == (3U & ((vlTOPp->Vortex__DOT__vx_m_w_reg__DOT__m_w_reg__DOT__value[2U] 
			  << 0xeU) | (vlTOPp->Vortex__DOT__vx_m_w_reg__DOT__m_w_reg__DOT__value[1U] 
				      >> 0x12U)))) ? 
	   vlTOPp->Vortex__DOT__vx_writeback__DOT__out_pc_data[3U]
	    : ((1U == (3U & ((vlTOPp->Vortex__DOT__vx_m_w_reg__DOT__m_w_reg__DOT__value[2U] 
			      << 0xeU) | (vlTOPp->Vortex__DOT__vx_m_w_reg__DOT__m_w_reg__DOT__value[1U] 
					  >> 0x12U))))
	        ? ((vlTOPp->Vortex__DOT__vx_m_w_reg__DOT__m_w_reg__DOT__value[9U] 
		    << 7U) | (vlTOPp->Vortex__DOT__vx_m_w_reg__DOT__m_w_reg__DOT__value[8U] 
			      >> 0x19U)) : ((vlTOPp->Vortex__DOT__vx_m_w_reg__DOT__m_w_reg__DOT__value[5U] 
					     << 7U) 
					    | (vlTOPp->Vortex__DOT__vx_m_w_reg__DOT__m_w_reg__DOT__value[4U] 
					       >> 0x19U))));
    vlTOPp->out_cache_driver_in_address[3U] = vlTOPp->Vortex__DOT____Vcellout__vx_memory__out_cache_driver_in_address
	[3U];
    vlTOPp->out_cache_driver_in_address[2U] = vlTOPp->Vortex__DOT____Vcellout__vx_memory__out_cache_driver_in_address
	[2U];
    vlTOPp->out_cache_driver_in_address[1U] = vlTOPp->Vortex__DOT____Vcellout__vx_memory__out_cache_driver_in_address
	[1U];
    vlTOPp->out_cache_driver_in_address[0U] = vlTOPp->Vortex__DOT____Vcellout__vx_memory__out_cache_driver_in_address
	[0U];
    vlTOPp->out_cache_driver_in_data[3U] = vlTOPp->Vortex__DOT____Vcellout__vx_memory__out_cache_driver_in_data
	[3U];
    vlTOPp->out_cache_driver_in_data[2U] = vlTOPp->Vortex__DOT____Vcellout__vx_memory__out_cache_driver_in_data
	[2U];
    vlTOPp->out_cache_driver_in_data[1U] = vlTOPp->Vortex__DOT____Vcellout__vx_memory__out_cache_driver_in_data
	[1U];
    vlTOPp->out_cache_driver_in_data[0U] = vlTOPp->Vortex__DOT____Vcellout__vx_memory__out_cache_driver_in_data
	[0U];
    vlTOPp->out_cache_driver_in_valid[3U] = vlTOPp->Vortex__DOT____Vcellout__vx_memory__out_cache_driver_in_valid
	[3U];
    vlTOPp->out_cache_driver_in_valid[2U] = vlTOPp->Vortex__DOT____Vcellout__vx_memory__out_cache_driver_in_valid
	[2U];
    vlTOPp->out_cache_driver_in_valid[1U] = vlTOPp->Vortex__DOT____Vcellout__vx_memory__out_cache_driver_in_valid
	[1U];
    vlTOPp->out_cache_driver_in_valid[0U] = vlTOPp->Vortex__DOT____Vcellout__vx_memory__out_cache_driver_in_valid
	[0U];
    // ALWAYS at VX_warp.v:57
    vlTOPp->Vortex__DOT__vx_fetch__DOT__genblk2__BRA__0__KET____DOT__VX_Warp__DOT__temp_PC 
	= (((vlTOPp->Vortex__DOT__vx_e_m_reg__DOT__f_d_reg__DOT__value[0x15U] 
	     >> 2U) & (0U == (0xfU & vlTOPp->Vortex__DOT__vx_e_m_reg__DOT__f_d_reg__DOT__value[0U])))
	    ? ((vlTOPp->Vortex__DOT__vx_e_m_reg__DOT__f_d_reg__DOT__value[0x15U] 
		<< 0x1eU) | (vlTOPp->Vortex__DOT__vx_e_m_reg__DOT__f_d_reg__DOT__value[0x14U] 
			     >> 2U)) : (((IData)(vlTOPp->Vortex__DOT__vx_memory__DOT__temp_branch_dir) 
					 & (0U == (0xfU 
						   & vlTOPp->Vortex__DOT__vx_e_m_reg__DOT__f_d_reg__DOT__value[0U])))
					 ? vlTOPp->Vortex__DOT__memory_branch_dest
					 : vlTOPp->Vortex__DOT__vx_fetch__DOT__genblk2__BRA__0__KET____DOT__VX_Warp__DOT__real_PC));
    // ALWAYS at VX_warp.v:57
    vlTOPp->Vortex__DOT__vx_fetch__DOT__genblk2__BRA__1__KET____DOT__VX_Warp__DOT__temp_PC 
	= (((vlTOPp->Vortex__DOT__vx_e_m_reg__DOT__f_d_reg__DOT__value[0x15U] 
	     >> 2U) & (1U == (0xfU & vlTOPp->Vortex__DOT__vx_e_m_reg__DOT__f_d_reg__DOT__value[0U])))
	    ? ((vlTOPp->Vortex__DOT__vx_e_m_reg__DOT__f_d_reg__DOT__value[0x15U] 
		<< 0x1eU) | (vlTOPp->Vortex__DOT__vx_e_m_reg__DOT__f_d_reg__DOT__value[0x14U] 
			     >> 2U)) : (((IData)(vlTOPp->Vortex__DOT__vx_memory__DOT__temp_branch_dir) 
					 & (1U == (0xfU 
						   & vlTOPp->Vortex__DOT__vx_e_m_reg__DOT__f_d_reg__DOT__value[0U])))
					 ? vlTOPp->Vortex__DOT__memory_branch_dest
					 : vlTOPp->Vortex__DOT__vx_fetch__DOT__genblk2__BRA__1__KET____DOT__VX_Warp__DOT__real_PC));
    // ALWAYS at VX_warp.v:57
    vlTOPp->Vortex__DOT__vx_fetch__DOT__genblk2__BRA__2__KET____DOT__VX_Warp__DOT__temp_PC 
	= (((vlTOPp->Vortex__DOT__vx_e_m_reg__DOT__f_d_reg__DOT__value[0x15U] 
	     >> 2U) & (2U == (0xfU & vlTOPp->Vortex__DOT__vx_e_m_reg__DOT__f_d_reg__DOT__value[0U])))
	    ? ((vlTOPp->Vortex__DOT__vx_e_m_reg__DOT__f_d_reg__DOT__value[0x15U] 
		<< 0x1eU) | (vlTOPp->Vortex__DOT__vx_e_m_reg__DOT__f_d_reg__DOT__value[0x14U] 
			     >> 2U)) : (((IData)(vlTOPp->Vortex__DOT__vx_memory__DOT__temp_branch_dir) 
					 & (2U == (0xfU 
						   & vlTOPp->Vortex__DOT__vx_e_m_reg__DOT__f_d_reg__DOT__value[0U])))
					 ? vlTOPp->Vortex__DOT__memory_branch_dest
					 : vlTOPp->Vortex__DOT__vx_fetch__DOT__genblk2__BRA__2__KET____DOT__VX_Warp__DOT__real_PC));
    // ALWAYS at VX_warp.v:57
    vlTOPp->Vortex__DOT__vx_fetch__DOT__genblk2__BRA__3__KET____DOT__VX_Warp__DOT__temp_PC 
	= (((vlTOPp->Vortex__DOT__vx_e_m_reg__DOT__f_d_reg__DOT__value[0x15U] 
	     >> 2U) & (3U == (0xfU & vlTOPp->Vortex__DOT__vx_e_m_reg__DOT__f_d_reg__DOT__value[0U])))
	    ? ((vlTOPp->Vortex__DOT__vx_e_m_reg__DOT__f_d_reg__DOT__value[0x15U] 
		<< 0x1eU) | (vlTOPp->Vortex__DOT__vx_e_m_reg__DOT__f_d_reg__DOT__value[0x14U] 
			     >> 2U)) : (((IData)(vlTOPp->Vortex__DOT__vx_memory__DOT__temp_branch_dir) 
					 & (3U == (0xfU 
						   & vlTOPp->Vortex__DOT__vx_e_m_reg__DOT__f_d_reg__DOT__value[0U])))
					 ? vlTOPp->Vortex__DOT__memory_branch_dest
					 : vlTOPp->Vortex__DOT__vx_fetch__DOT__genblk2__BRA__3__KET____DOT__VX_Warp__DOT__real_PC));
    // ALWAYS at VX_warp.v:57
    vlTOPp->Vortex__DOT__vx_fetch__DOT__genblk2__BRA__4__KET____DOT__VX_Warp__DOT__temp_PC 
	= (((vlTOPp->Vortex__DOT__vx_e_m_reg__DOT__f_d_reg__DOT__value[0x15U] 
	     >> 2U) & (4U == (0xfU & vlTOPp->Vortex__DOT__vx_e_m_reg__DOT__f_d_reg__DOT__value[0U])))
	    ? ((vlTOPp->Vortex__DOT__vx_e_m_reg__DOT__f_d_reg__DOT__value[0x15U] 
		<< 0x1eU) | (vlTOPp->Vortex__DOT__vx_e_m_reg__DOT__f_d_reg__DOT__value[0x14U] 
			     >> 2U)) : (((IData)(vlTOPp->Vortex__DOT__vx_memory__DOT__temp_branch_dir) 
					 & (4U == (0xfU 
						   & vlTOPp->Vortex__DOT__vx_e_m_reg__DOT__f_d_reg__DOT__value[0U])))
					 ? vlTOPp->Vortex__DOT__memory_branch_dest
					 : vlTOPp->Vortex__DOT__vx_fetch__DOT__genblk2__BRA__4__KET____DOT__VX_Warp__DOT__real_PC));
    // ALWAYS at VX_warp.v:57
    vlTOPp->Vortex__DOT__vx_fetch__DOT__genblk2__BRA__5__KET____DOT__VX_Warp__DOT__temp_PC 
	= (((vlTOPp->Vortex__DOT__vx_e_m_reg__DOT__f_d_reg__DOT__value[0x15U] 
	     >> 2U) & (5U == (0xfU & vlTOPp->Vortex__DOT__vx_e_m_reg__DOT__f_d_reg__DOT__value[0U])))
	    ? ((vlTOPp->Vortex__DOT__vx_e_m_reg__DOT__f_d_reg__DOT__value[0x15U] 
		<< 0x1eU) | (vlTOPp->Vortex__DOT__vx_e_m_reg__DOT__f_d_reg__DOT__value[0x14U] 
			     >> 2U)) : (((IData)(vlTOPp->Vortex__DOT__vx_memory__DOT__temp_branch_dir) 
					 & (5U == (0xfU 
						   & vlTOPp->Vortex__DOT__vx_e_m_reg__DOT__f_d_reg__DOT__value[0U])))
					 ? vlTOPp->Vortex__DOT__memory_branch_dest
					 : vlTOPp->Vortex__DOT__vx_fetch__DOT__genblk2__BRA__5__KET____DOT__VX_Warp__DOT__real_PC));
    // ALWAYS at VX_warp.v:57
    vlTOPp->Vortex__DOT__vx_fetch__DOT__genblk2__BRA__6__KET____DOT__VX_Warp__DOT__temp_PC 
	= (((vlTOPp->Vortex__DOT__vx_e_m_reg__DOT__f_d_reg__DOT__value[0x15U] 
	     >> 2U) & (6U == (0xfU & vlTOPp->Vortex__DOT__vx_e_m_reg__DOT__f_d_reg__DOT__value[0U])))
	    ? ((vlTOPp->Vortex__DOT__vx_e_m_reg__DOT__f_d_reg__DOT__value[0x15U] 
		<< 0x1eU) | (vlTOPp->Vortex__DOT__vx_e_m_reg__DOT__f_d_reg__DOT__value[0x14U] 
			     >> 2U)) : (((IData)(vlTOPp->Vortex__DOT__vx_memory__DOT__temp_branch_dir) 
					 & (6U == (0xfU 
						   & vlTOPp->Vortex__DOT__vx_e_m_reg__DOT__f_d_reg__DOT__value[0U])))
					 ? vlTOPp->Vortex__DOT__memory_branch_dest
					 : vlTOPp->Vortex__DOT__vx_fetch__DOT__genblk2__BRA__6__KET____DOT__VX_Warp__DOT__real_PC));
    // ALWAYS at VX_warp.v:57
    vlTOPp->Vortex__DOT__vx_fetch__DOT__genblk2__BRA__7__KET____DOT__VX_Warp__DOT__temp_PC 
	= (((vlTOPp->Vortex__DOT__vx_e_m_reg__DOT__f_d_reg__DOT__value[0x15U] 
	     >> 2U) & (7U == (0xfU & vlTOPp->Vortex__DOT__vx_e_m_reg__DOT__f_d_reg__DOT__value[0U])))
	    ? ((vlTOPp->Vortex__DOT__vx_e_m_reg__DOT__f_d_reg__DOT__value[0x15U] 
		<< 0x1eU) | (vlTOPp->Vortex__DOT__vx_e_m_reg__DOT__f_d_reg__DOT__value[0x14U] 
			     >> 2U)) : (((IData)(vlTOPp->Vortex__DOT__vx_memory__DOT__temp_branch_dir) 
					 & (7U == (0xfU 
						   & vlTOPp->Vortex__DOT__vx_e_m_reg__DOT__f_d_reg__DOT__value[0U])))
					 ? vlTOPp->Vortex__DOT__memory_branch_dest
					 : vlTOPp->Vortex__DOT__vx_fetch__DOT__genblk2__BRA__7__KET____DOT__VX_Warp__DOT__real_PC));
    // ALWAYS at VX_alu.v:48
    vlTOPp->Vortex__DOT__vx_execute__DOT____Vcellout__genblk1__BRA__0__KET____DOT__vx_alu__out_alu_result 
	= ((0x2000U & vlTOPp->Vortex__DOT__vx_d_e_reg__DOT__d_e_reg__DOT__value[5U])
	    ? ((0x1000U & vlTOPp->Vortex__DOT__vx_d_e_reg__DOT__d_e_reg__DOT__value[5U])
	        ? 0U : ((0x800U & vlTOPp->Vortex__DOT__vx_d_e_reg__DOT__d_e_reg__DOT__value[5U])
			 ? ((0x400U & vlTOPp->Vortex__DOT__vx_d_e_reg__DOT__d_e_reg__DOT__value[5U])
			     ? ((0x200U & vlTOPp->Vortex__DOT__vx_d_e_reg__DOT__d_e_reg__DOT__value[5U])
				 ? ((0U == vlTOPp->Vortex__DOT__vx_execute__DOT__genblk1__BRA__0__KET____DOT__vx_alu__DOT__ALU_in2)
				     ? ((vlTOPp->Vortex__DOT__vx_d_e_reg__DOT__d_e_reg__DOT__value[0xaU] 
					 << 0x12U) 
					| (vlTOPp->Vortex__DOT__vx_d_e_reg__DOT__d_e_reg__DOT__value[9U] 
					   >> 0xeU))
				     : VL_MODDIV_III(32, 
						     ((vlTOPp->Vortex__DOT__vx_d_e_reg__DOT__d_e_reg__DOT__value[0xaU] 
						       << 0x12U) 
						      | (vlTOPp->Vortex__DOT__vx_d_e_reg__DOT__d_e_reg__DOT__value[9U] 
							 >> 0xeU)), vlTOPp->Vortex__DOT__vx_execute__DOT__genblk1__BRA__0__KET____DOT__vx_alu__DOT__ALU_in2))
				 : ((0U == vlTOPp->Vortex__DOT__vx_execute__DOT__genblk1__BRA__0__KET____DOT__vx_alu__DOT__ALU_in2)
				     ? ((vlTOPp->Vortex__DOT__vx_d_e_reg__DOT__d_e_reg__DOT__value[0xaU] 
					 << 0x12U) 
					| (vlTOPp->Vortex__DOT__vx_d_e_reg__DOT__d_e_reg__DOT__value[9U] 
					   >> 0xeU))
				     : VL_MODDIVS_III(32, 
						      ((vlTOPp->Vortex__DOT__vx_d_e_reg__DOT__d_e_reg__DOT__value[0xaU] 
							<< 0x12U) 
						       | (vlTOPp->Vortex__DOT__vx_d_e_reg__DOT__d_e_reg__DOT__value[9U] 
							  >> 0xeU)), vlTOPp->Vortex__DOT__vx_execute__DOT__genblk1__BRA__0__KET____DOT__vx_alu__DOT__ALU_in2)))
			     : ((0x200U & vlTOPp->Vortex__DOT__vx_d_e_reg__DOT__d_e_reg__DOT__value[5U])
				 ? ((0U == vlTOPp->Vortex__DOT__vx_execute__DOT__genblk1__BRA__0__KET____DOT__vx_alu__DOT__ALU_in2)
				     ? 0xffffffffU : 
				    VL_DIV_III(32, 
					       ((vlTOPp->Vortex__DOT__vx_d_e_reg__DOT__d_e_reg__DOT__value[0xaU] 
						 << 0x12U) 
						| (vlTOPp->Vortex__DOT__vx_d_e_reg__DOT__d_e_reg__DOT__value[9U] 
						   >> 0xeU)), vlTOPp->Vortex__DOT__vx_execute__DOT__genblk1__BRA__0__KET____DOT__vx_alu__DOT__ALU_in2))
				 : ((0U == vlTOPp->Vortex__DOT__vx_execute__DOT__genblk1__BRA__0__KET____DOT__vx_alu__DOT__ALU_in2)
				     ? 0xffffffffU : 
				    VL_DIVS_III(32, 
						((vlTOPp->Vortex__DOT__vx_d_e_reg__DOT__d_e_reg__DOT__value[0xaU] 
						  << 0x12U) 
						 | (vlTOPp->Vortex__DOT__vx_d_e_reg__DOT__d_e_reg__DOT__value[9U] 
						    >> 0xeU)), vlTOPp->Vortex__DOT__vx_execute__DOT__genblk1__BRA__0__KET____DOT__vx_alu__DOT__ALU_in2))))
			 : ((0x400U & vlTOPp->Vortex__DOT__vx_d_e_reg__DOT__d_e_reg__DOT__value[5U])
			     ? ((0x200U & vlTOPp->Vortex__DOT__vx_d_e_reg__DOT__d_e_reg__DOT__value[5U])
				 ? (IData)((((QData)((IData)(
							     ((vlTOPp->Vortex__DOT__vx_d_e_reg__DOT__d_e_reg__DOT__value[0xaU] 
							       << 0x12U) 
							      | (vlTOPp->Vortex__DOT__vx_d_e_reg__DOT__d_e_reg__DOT__value[9U] 
								 >> 0xeU)))) 
					     * (QData)((IData)(vlTOPp->Vortex__DOT__vx_execute__DOT__genblk1__BRA__0__KET____DOT__vx_alu__DOT__ALU_in2))) 
					    >> 0x20U))
				 : (IData)((((((QData)((IData)(
							       VL_NEGATE_I((IData)(
										(1U 
										& (vlTOPp->Vortex__DOT__vx_d_e_reg__DOT__d_e_reg__DOT__value[0xaU] 
										>> 0xdU)))))) 
					       << 0x20U) 
					      | (QData)((IData)(
								((vlTOPp->Vortex__DOT__vx_d_e_reg__DOT__d_e_reg__DOT__value[0xaU] 
								  << 0x12U) 
								 | (vlTOPp->Vortex__DOT__vx_d_e_reg__DOT__d_e_reg__DOT__value[9U] 
								    >> 0xeU))))) 
					     * (QData)((IData)(vlTOPp->Vortex__DOT__vx_execute__DOT__genblk1__BRA__0__KET____DOT__vx_alu__DOT__ALU_in2))) 
					    >> 0x20U)))
			     : ((0x200U & vlTOPp->Vortex__DOT__vx_d_e_reg__DOT__d_e_reg__DOT__value[5U])
				 ? (IData)((vlTOPp->Vortex__DOT__vx_execute__DOT__genblk1__BRA__0__KET____DOT__vx_alu__DOT__mult_signed_result 
					    >> 0x20U))
				 : (IData)(vlTOPp->Vortex__DOT__vx_execute__DOT__genblk1__BRA__0__KET____DOT__vx_alu__DOT__mult_signed_result)))))
	    : ((0x1000U & vlTOPp->Vortex__DOT__vx_d_e_reg__DOT__d_e_reg__DOT__value[5U])
	        ? ((0x800U & vlTOPp->Vortex__DOT__vx_d_e_reg__DOT__d_e_reg__DOT__value[5U])
		    ? ((0x400U & vlTOPp->Vortex__DOT__vx_d_e_reg__DOT__d_e_reg__DOT__value[5U])
		        ? vlTOPp->Vortex__DOT__csr_decode_csr_data
		        : ((0x200U & vlTOPp->Vortex__DOT__vx_d_e_reg__DOT__d_e_reg__DOT__value[5U])
			    ? vlTOPp->Vortex__DOT__csr_decode_csr_data
			    : (((vlTOPp->Vortex__DOT__vx_d_e_reg__DOT__d_e_reg__DOT__value[3U] 
				 << 0x17U) | (vlTOPp->Vortex__DOT__vx_d_e_reg__DOT__d_e_reg__DOT__value[2U] 
					      >> 9U)) 
			       + (0xfffff000U & (vlTOPp->Vortex__DOT__vx_d_e_reg__DOT__d_e_reg__DOT__value[3U] 
						 << 3U)))))
		    : ((0x400U & vlTOPp->Vortex__DOT__vx_d_e_reg__DOT__d_e_reg__DOT__value[5U])
		        ? ((0x200U & vlTOPp->Vortex__DOT__vx_d_e_reg__DOT__d_e_reg__DOT__value[5U])
			    ? (0xfffff000U & (vlTOPp->Vortex__DOT__vx_d_e_reg__DOT__d_e_reg__DOT__value[3U] 
					      << 3U))
			    : ((((vlTOPp->Vortex__DOT__vx_d_e_reg__DOT__d_e_reg__DOT__value[0xaU] 
				  << 0x12U) | (vlTOPp->Vortex__DOT__vx_d_e_reg__DOT__d_e_reg__DOT__value[9U] 
					       >> 0xeU)) 
				>= vlTOPp->Vortex__DOT__vx_execute__DOT__genblk1__BRA__0__KET____DOT__vx_alu__DOT__ALU_in2)
			        ? 0U : 0xffffffffU))
		        : ((0x200U & vlTOPp->Vortex__DOT__vx_d_e_reg__DOT__d_e_reg__DOT__value[5U])
			    ? (vlTOPp->Vortex__DOT__vx_execute__DOT__genblk1__BRA__0__KET____DOT__vx_alu__DOT__ALU_in2 
			       & ((vlTOPp->Vortex__DOT__vx_d_e_reg__DOT__d_e_reg__DOT__value[0xaU] 
				   << 0x12U) | (vlTOPp->Vortex__DOT__vx_d_e_reg__DOT__d_e_reg__DOT__value[9U] 
						>> 0xeU)))
			    : (((vlTOPp->Vortex__DOT__vx_d_e_reg__DOT__d_e_reg__DOT__value[0xaU] 
				 << 0x12U) | (vlTOPp->Vortex__DOT__vx_d_e_reg__DOT__d_e_reg__DOT__value[9U] 
					      >> 0xeU)) 
			       | vlTOPp->Vortex__DOT__vx_execute__DOT__genblk1__BRA__0__KET____DOT__vx_alu__DOT__ALU_in2))))
	        : ((0x800U & vlTOPp->Vortex__DOT__vx_d_e_reg__DOT__d_e_reg__DOT__value[5U])
		    ? ((0x400U & vlTOPp->Vortex__DOT__vx_d_e_reg__DOT__d_e_reg__DOT__value[5U])
		        ? ((0x200U & vlTOPp->Vortex__DOT__vx_d_e_reg__DOT__d_e_reg__DOT__value[5U])
			    ? VL_SHIFTRS_III(32,32,5, 
					     ((vlTOPp->Vortex__DOT__vx_d_e_reg__DOT__d_e_reg__DOT__value[0xaU] 
					       << 0x12U) 
					      | (vlTOPp->Vortex__DOT__vx_d_e_reg__DOT__d_e_reg__DOT__value[9U] 
						 >> 0xeU)), 
					     (0x1fU 
					      & vlTOPp->Vortex__DOT__vx_execute__DOT__genblk1__BRA__0__KET____DOT__vx_alu__DOT__ALU_in2))
			    : (((vlTOPp->Vortex__DOT__vx_d_e_reg__DOT__d_e_reg__DOT__value[0xaU] 
				 << 0x12U) | (vlTOPp->Vortex__DOT__vx_d_e_reg__DOT__d_e_reg__DOT__value[9U] 
					      >> 0xeU)) 
			       >> (0x1fU & vlTOPp->Vortex__DOT__vx_execute__DOT__genblk1__BRA__0__KET____DOT__vx_alu__DOT__ALU_in2)))
		        : ((0x200U & vlTOPp->Vortex__DOT__vx_d_e_reg__DOT__d_e_reg__DOT__value[5U])
			    ? (((vlTOPp->Vortex__DOT__vx_d_e_reg__DOT__d_e_reg__DOT__value[0xaU] 
				 << 0x12U) | (vlTOPp->Vortex__DOT__vx_d_e_reg__DOT__d_e_reg__DOT__value[9U] 
					      >> 0xeU)) 
			       ^ vlTOPp->Vortex__DOT__vx_execute__DOT__genblk1__BRA__0__KET____DOT__vx_alu__DOT__ALU_in2)
			    : ((((vlTOPp->Vortex__DOT__vx_d_e_reg__DOT__d_e_reg__DOT__value[0xaU] 
				  << 0x12U) | (vlTOPp->Vortex__DOT__vx_d_e_reg__DOT__d_e_reg__DOT__value[9U] 
					       >> 0xeU)) 
				< vlTOPp->Vortex__DOT__vx_execute__DOT__genblk1__BRA__0__KET____DOT__vx_alu__DOT__ALU_in2)
			        ? 1U : 0U))) : ((0x400U 
						 & vlTOPp->Vortex__DOT__vx_d_e_reg__DOT__d_e_reg__DOT__value[5U])
						 ? 
						((0x200U 
						  & vlTOPp->Vortex__DOT__vx_d_e_reg__DOT__d_e_reg__DOT__value[5U])
						  ? 
						 (VL_LTS_III(1,32,32, 
							     ((vlTOPp->Vortex__DOT__vx_d_e_reg__DOT__d_e_reg__DOT__value[0xaU] 
							       << 0x12U) 
							      | (vlTOPp->Vortex__DOT__vx_d_e_reg__DOT__d_e_reg__DOT__value[9U] 
								 >> 0xeU)), vlTOPp->Vortex__DOT__vx_execute__DOT__genblk1__BRA__0__KET____DOT__vx_alu__DOT__ALU_in2)
						   ? 1U
						   : 0U)
						  : 
						 (((vlTOPp->Vortex__DOT__vx_d_e_reg__DOT__d_e_reg__DOT__value[0xaU] 
						    << 0x12U) 
						   | (vlTOPp->Vortex__DOT__vx_d_e_reg__DOT__d_e_reg__DOT__value[9U] 
						      >> 0xeU)) 
						  << 
						  (0x1fU 
						   & vlTOPp->Vortex__DOT__vx_execute__DOT__genblk1__BRA__0__KET____DOT__vx_alu__DOT__ALU_in2)))
						 : 
						((0x200U 
						  & vlTOPp->Vortex__DOT__vx_d_e_reg__DOT__d_e_reg__DOT__value[5U])
						  ? 
						 (((vlTOPp->Vortex__DOT__vx_d_e_reg__DOT__d_e_reg__DOT__value[0xaU] 
						    << 0x12U) 
						   | (vlTOPp->Vortex__DOT__vx_d_e_reg__DOT__d_e_reg__DOT__value[9U] 
						      >> 0xeU)) 
						  - vlTOPp->Vortex__DOT__vx_execute__DOT__genblk1__BRA__0__KET____DOT__vx_alu__DOT__ALU_in2)
						  : 
						 (((vlTOPp->Vortex__DOT__vx_d_e_reg__DOT__d_e_reg__DOT__value[0xaU] 
						    << 0x12U) 
						   | (vlTOPp->Vortex__DOT__vx_d_e_reg__DOT__d_e_reg__DOT__value[9U] 
						      >> 0xeU)) 
						  + vlTOPp->Vortex__DOT__vx_execute__DOT__genblk1__BRA__0__KET____DOT__vx_alu__DOT__ALU_in2))))));
    // ALWAYS at VX_alu.v:48
    vlTOPp->Vortex__DOT__vx_execute__DOT____Vcellout__genblk1__BRA__1__KET____DOT__vx_alu__out_alu_result 
	= ((0x2000U & vlTOPp->Vortex__DOT__vx_d_e_reg__DOT__d_e_reg__DOT__value[5U])
	    ? ((0x1000U & vlTOPp->Vortex__DOT__vx_d_e_reg__DOT__d_e_reg__DOT__value[5U])
	        ? 0U : ((0x800U & vlTOPp->Vortex__DOT__vx_d_e_reg__DOT__d_e_reg__DOT__value[5U])
			 ? ((0x400U & vlTOPp->Vortex__DOT__vx_d_e_reg__DOT__d_e_reg__DOT__value[5U])
			     ? ((0x200U & vlTOPp->Vortex__DOT__vx_d_e_reg__DOT__d_e_reg__DOT__value[5U])
				 ? ((0U == vlTOPp->Vortex__DOT__vx_execute__DOT__genblk1__BRA__1__KET____DOT__vx_alu__DOT__ALU_in2)
				     ? ((vlTOPp->Vortex__DOT__vx_d_e_reg__DOT__d_e_reg__DOT__value[0xbU] 
					 << 0x12U) 
					| (vlTOPp->Vortex__DOT__vx_d_e_reg__DOT__d_e_reg__DOT__value[0xaU] 
					   >> 0xeU))
				     : VL_MODDIV_III(32, 
						     ((vlTOPp->Vortex__DOT__vx_d_e_reg__DOT__d_e_reg__DOT__value[0xbU] 
						       << 0x12U) 
						      | (vlTOPp->Vortex__DOT__vx_d_e_reg__DOT__d_e_reg__DOT__value[0xaU] 
							 >> 0xeU)), vlTOPp->Vortex__DOT__vx_execute__DOT__genblk1__BRA__1__KET____DOT__vx_alu__DOT__ALU_in2))
				 : ((0U == vlTOPp->Vortex__DOT__vx_execute__DOT__genblk1__BRA__1__KET____DOT__vx_alu__DOT__ALU_in2)
				     ? ((vlTOPp->Vortex__DOT__vx_d_e_reg__DOT__d_e_reg__DOT__value[0xbU] 
					 << 0x12U) 
					| (vlTOPp->Vortex__DOT__vx_d_e_reg__DOT__d_e_reg__DOT__value[0xaU] 
					   >> 0xeU))
				     : VL_MODDIVS_III(32, 
						      ((vlTOPp->Vortex__DOT__vx_d_e_reg__DOT__d_e_reg__DOT__value[0xbU] 
							<< 0x12U) 
						       | (vlTOPp->Vortex__DOT__vx_d_e_reg__DOT__d_e_reg__DOT__value[0xaU] 
							  >> 0xeU)), vlTOPp->Vortex__DOT__vx_execute__DOT__genblk1__BRA__1__KET____DOT__vx_alu__DOT__ALU_in2)))
			     : ((0x200U & vlTOPp->Vortex__DOT__vx_d_e_reg__DOT__d_e_reg__DOT__value[5U])
				 ? ((0U == vlTOPp->Vortex__DOT__vx_execute__DOT__genblk1__BRA__1__KET____DOT__vx_alu__DOT__ALU_in2)
				     ? 0xffffffffU : 
				    VL_DIV_III(32, 
					       ((vlTOPp->Vortex__DOT__vx_d_e_reg__DOT__d_e_reg__DOT__value[0xbU] 
						 << 0x12U) 
						| (vlTOPp->Vortex__DOT__vx_d_e_reg__DOT__d_e_reg__DOT__value[0xaU] 
						   >> 0xeU)), vlTOPp->Vortex__DOT__vx_execute__DOT__genblk1__BRA__1__KET____DOT__vx_alu__DOT__ALU_in2))
				 : ((0U == vlTOPp->Vortex__DOT__vx_execute__DOT__genblk1__BRA__1__KET____DOT__vx_alu__DOT__ALU_in2)
				     ? 0xffffffffU : 
				    VL_DIVS_III(32, 
						((vlTOPp->Vortex__DOT__vx_d_e_reg__DOT__d_e_reg__DOT__value[0xbU] 
						  << 0x12U) 
						 | (vlTOPp->Vortex__DOT__vx_d_e_reg__DOT__d_e_reg__DOT__value[0xaU] 
						    >> 0xeU)), vlTOPp->Vortex__DOT__vx_execute__DOT__genblk1__BRA__1__KET____DOT__vx_alu__DOT__ALU_in2))))
			 : ((0x400U & vlTOPp->Vortex__DOT__vx_d_e_reg__DOT__d_e_reg__DOT__value[5U])
			     ? ((0x200U & vlTOPp->Vortex__DOT__vx_d_e_reg__DOT__d_e_reg__DOT__value[5U])
				 ? (IData)((((QData)((IData)(
							     ((vlTOPp->Vortex__DOT__vx_d_e_reg__DOT__d_e_reg__DOT__value[0xbU] 
							       << 0x12U) 
							      | (vlTOPp->Vortex__DOT__vx_d_e_reg__DOT__d_e_reg__DOT__value[0xaU] 
								 >> 0xeU)))) 
					     * (QData)((IData)(vlTOPp->Vortex__DOT__vx_execute__DOT__genblk1__BRA__1__KET____DOT__vx_alu__DOT__ALU_in2))) 
					    >> 0x20U))
				 : (IData)((((((QData)((IData)(
							       VL_NEGATE_I((IData)(
										(1U 
										& (vlTOPp->Vortex__DOT__vx_d_e_reg__DOT__d_e_reg__DOT__value[0xbU] 
										>> 0xdU)))))) 
					       << 0x20U) 
					      | (QData)((IData)(
								((vlTOPp->Vortex__DOT__vx_d_e_reg__DOT__d_e_reg__DOT__value[0xbU] 
								  << 0x12U) 
								 | (vlTOPp->Vortex__DOT__vx_d_e_reg__DOT__d_e_reg__DOT__value[0xaU] 
								    >> 0xeU))))) 
					     * (QData)((IData)(vlTOPp->Vortex__DOT__vx_execute__DOT__genblk1__BRA__1__KET____DOT__vx_alu__DOT__ALU_in2))) 
					    >> 0x20U)))
			     : ((0x200U & vlTOPp->Vortex__DOT__vx_d_e_reg__DOT__d_e_reg__DOT__value[5U])
				 ? (IData)((vlTOPp->Vortex__DOT__vx_execute__DOT__genblk1__BRA__1__KET____DOT__vx_alu__DOT__mult_signed_result 
					    >> 0x20U))
				 : (IData)(vlTOPp->Vortex__DOT__vx_execute__DOT__genblk1__BRA__1__KET____DOT__vx_alu__DOT__mult_signed_result)))))
	    : ((0x1000U & vlTOPp->Vortex__DOT__vx_d_e_reg__DOT__d_e_reg__DOT__value[5U])
	        ? ((0x800U & vlTOPp->Vortex__DOT__vx_d_e_reg__DOT__d_e_reg__DOT__value[5U])
		    ? ((0x400U & vlTOPp->Vortex__DOT__vx_d_e_reg__DOT__d_e_reg__DOT__value[5U])
		        ? vlTOPp->Vortex__DOT__csr_decode_csr_data
		        : ((0x200U & vlTOPp->Vortex__DOT__vx_d_e_reg__DOT__d_e_reg__DOT__value[5U])
			    ? vlTOPp->Vortex__DOT__csr_decode_csr_data
			    : (((vlTOPp->Vortex__DOT__vx_d_e_reg__DOT__d_e_reg__DOT__value[3U] 
				 << 0x17U) | (vlTOPp->Vortex__DOT__vx_d_e_reg__DOT__d_e_reg__DOT__value[2U] 
					      >> 9U)) 
			       + (0xfffff000U & (vlTOPp->Vortex__DOT__vx_d_e_reg__DOT__d_e_reg__DOT__value[3U] 
						 << 3U)))))
		    : ((0x400U & vlTOPp->Vortex__DOT__vx_d_e_reg__DOT__d_e_reg__DOT__value[5U])
		        ? ((0x200U & vlTOPp->Vortex__DOT__vx_d_e_reg__DOT__d_e_reg__DOT__value[5U])
			    ? (0xfffff000U & (vlTOPp->Vortex__DOT__vx_d_e_reg__DOT__d_e_reg__DOT__value[3U] 
					      << 3U))
			    : ((((vlTOPp->Vortex__DOT__vx_d_e_reg__DOT__d_e_reg__DOT__value[0xbU] 
				  << 0x12U) | (vlTOPp->Vortex__DOT__vx_d_e_reg__DOT__d_e_reg__DOT__value[0xaU] 
					       >> 0xeU)) 
				>= vlTOPp->Vortex__DOT__vx_execute__DOT__genblk1__BRA__1__KET____DOT__vx_alu__DOT__ALU_in2)
			        ? 0U : 0xffffffffU))
		        : ((0x200U & vlTOPp->Vortex__DOT__vx_d_e_reg__DOT__d_e_reg__DOT__value[5U])
			    ? (vlTOPp->Vortex__DOT__vx_execute__DOT__genblk1__BRA__1__KET____DOT__vx_alu__DOT__ALU_in2 
			       & ((vlTOPp->Vortex__DOT__vx_d_e_reg__DOT__d_e_reg__DOT__value[0xbU] 
				   << 0x12U) | (vlTOPp->Vortex__DOT__vx_d_e_reg__DOT__d_e_reg__DOT__value[0xaU] 
						>> 0xeU)))
			    : (((vlTOPp->Vortex__DOT__vx_d_e_reg__DOT__d_e_reg__DOT__value[0xbU] 
				 << 0x12U) | (vlTOPp->Vortex__DOT__vx_d_e_reg__DOT__d_e_reg__DOT__value[0xaU] 
					      >> 0xeU)) 
			       | vlTOPp->Vortex__DOT__vx_execute__DOT__genblk1__BRA__1__KET____DOT__vx_alu__DOT__ALU_in2))))
	        : ((0x800U & vlTOPp->Vortex__DOT__vx_d_e_reg__DOT__d_e_reg__DOT__value[5U])
		    ? ((0x400U & vlTOPp->Vortex__DOT__vx_d_e_reg__DOT__d_e_reg__DOT__value[5U])
		        ? ((0x200U & vlTOPp->Vortex__DOT__vx_d_e_reg__DOT__d_e_reg__DOT__value[5U])
			    ? VL_SHIFTRS_III(32,32,5, 
					     ((vlTOPp->Vortex__DOT__vx_d_e_reg__DOT__d_e_reg__DOT__value[0xbU] 
					       << 0x12U) 
					      | (vlTOPp->Vortex__DOT__vx_d_e_reg__DOT__d_e_reg__DOT__value[0xaU] 
						 >> 0xeU)), 
					     (0x1fU 
					      & vlTOPp->Vortex__DOT__vx_execute__DOT__genblk1__BRA__1__KET____DOT__vx_alu__DOT__ALU_in2))
			    : (((vlTOPp->Vortex__DOT__vx_d_e_reg__DOT__d_e_reg__DOT__value[0xbU] 
				 << 0x12U) | (vlTOPp->Vortex__DOT__vx_d_e_reg__DOT__d_e_reg__DOT__value[0xaU] 
					      >> 0xeU)) 
			       >> (0x1fU & vlTOPp->Vortex__DOT__vx_execute__DOT__genblk1__BRA__1__KET____DOT__vx_alu__DOT__ALU_in2)))
		        : ((0x200U & vlTOPp->Vortex__DOT__vx_d_e_reg__DOT__d_e_reg__DOT__value[5U])
			    ? (((vlTOPp->Vortex__DOT__vx_d_e_reg__DOT__d_e_reg__DOT__value[0xbU] 
				 << 0x12U) | (vlTOPp->Vortex__DOT__vx_d_e_reg__DOT__d_e_reg__DOT__value[0xaU] 
					      >> 0xeU)) 
			       ^ vlTOPp->Vortex__DOT__vx_execute__DOT__genblk1__BRA__1__KET____DOT__vx_alu__DOT__ALU_in2)
			    : ((((vlTOPp->Vortex__DOT__vx_d_e_reg__DOT__d_e_reg__DOT__value[0xbU] 
				  << 0x12U) | (vlTOPp->Vortex__DOT__vx_d_e_reg__DOT__d_e_reg__DOT__value[0xaU] 
					       >> 0xeU)) 
				< vlTOPp->Vortex__DOT__vx_execute__DOT__genblk1__BRA__1__KET____DOT__vx_alu__DOT__ALU_in2)
			        ? 1U : 0U))) : ((0x400U 
						 & vlTOPp->Vortex__DOT__vx_d_e_reg__DOT__d_e_reg__DOT__value[5U])
						 ? 
						((0x200U 
						  & vlTOPp->Vortex__DOT__vx_d_e_reg__DOT__d_e_reg__DOT__value[5U])
						  ? 
						 (VL_LTS_III(1,32,32, 
							     ((vlTOPp->Vortex__DOT__vx_d_e_reg__DOT__d_e_reg__DOT__value[0xbU] 
							       << 0x12U) 
							      | (vlTOPp->Vortex__DOT__vx_d_e_reg__DOT__d_e_reg__DOT__value[0xaU] 
								 >> 0xeU)), vlTOPp->Vortex__DOT__vx_execute__DOT__genblk1__BRA__1__KET____DOT__vx_alu__DOT__ALU_in2)
						   ? 1U
						   : 0U)
						  : 
						 (((vlTOPp->Vortex__DOT__vx_d_e_reg__DOT__d_e_reg__DOT__value[0xbU] 
						    << 0x12U) 
						   | (vlTOPp->Vortex__DOT__vx_d_e_reg__DOT__d_e_reg__DOT__value[0xaU] 
						      >> 0xeU)) 
						  << 
						  (0x1fU 
						   & vlTOPp->Vortex__DOT__vx_execute__DOT__genblk1__BRA__1__KET____DOT__vx_alu__DOT__ALU_in2)))
						 : 
						((0x200U 
						  & vlTOPp->Vortex__DOT__vx_d_e_reg__DOT__d_e_reg__DOT__value[5U])
						  ? 
						 (((vlTOPp->Vortex__DOT__vx_d_e_reg__DOT__d_e_reg__DOT__value[0xbU] 
						    << 0x12U) 
						   | (vlTOPp->Vortex__DOT__vx_d_e_reg__DOT__d_e_reg__DOT__value[0xaU] 
						      >> 0xeU)) 
						  - vlTOPp->Vortex__DOT__vx_execute__DOT__genblk1__BRA__1__KET____DOT__vx_alu__DOT__ALU_in2)
						  : 
						 (((vlTOPp->Vortex__DOT__vx_d_e_reg__DOT__d_e_reg__DOT__value[0xbU] 
						    << 0x12U) 
						   | (vlTOPp->Vortex__DOT__vx_d_e_reg__DOT__d_e_reg__DOT__value[0xaU] 
						      >> 0xeU)) 
						  + vlTOPp->Vortex__DOT__vx_execute__DOT__genblk1__BRA__1__KET____DOT__vx_alu__DOT__ALU_in2))))));
    // ALWAYS at VX_alu.v:48
    vlTOPp->Vortex__DOT__vx_execute__DOT____Vcellout__genblk1__BRA__2__KET____DOT__vx_alu__out_alu_result 
	= ((0x2000U & vlTOPp->Vortex__DOT__vx_d_e_reg__DOT__d_e_reg__DOT__value[5U])
	    ? ((0x1000U & vlTOPp->Vortex__DOT__vx_d_e_reg__DOT__d_e_reg__DOT__value[5U])
	        ? 0U : ((0x800U & vlTOPp->Vortex__DOT__vx_d_e_reg__DOT__d_e_reg__DOT__value[5U])
			 ? ((0x400U & vlTOPp->Vortex__DOT__vx_d_e_reg__DOT__d_e_reg__DOT__value[5U])
			     ? ((0x200U & vlTOPp->Vortex__DOT__vx_d_e_reg__DOT__d_e_reg__DOT__value[5U])
				 ? ((0U == vlTOPp->Vortex__DOT__vx_execute__DOT__genblk1__BRA__2__KET____DOT__vx_alu__DOT__ALU_in2)
				     ? ((vlTOPp->Vortex__DOT__vx_d_e_reg__DOT__d_e_reg__DOT__value[0xcU] 
					 << 0x12U) 
					| (vlTOPp->Vortex__DOT__vx_d_e_reg__DOT__d_e_reg__DOT__value[0xbU] 
					   >> 0xeU))
				     : VL_MODDIV_III(32, 
						     ((vlTOPp->Vortex__DOT__vx_d_e_reg__DOT__d_e_reg__DOT__value[0xcU] 
						       << 0x12U) 
						      | (vlTOPp->Vortex__DOT__vx_d_e_reg__DOT__d_e_reg__DOT__value[0xbU] 
							 >> 0xeU)), vlTOPp->Vortex__DOT__vx_execute__DOT__genblk1__BRA__2__KET____DOT__vx_alu__DOT__ALU_in2))
				 : ((0U == vlTOPp->Vortex__DOT__vx_execute__DOT__genblk1__BRA__2__KET____DOT__vx_alu__DOT__ALU_in2)
				     ? ((vlTOPp->Vortex__DOT__vx_d_e_reg__DOT__d_e_reg__DOT__value[0xcU] 
					 << 0x12U) 
					| (vlTOPp->Vortex__DOT__vx_d_e_reg__DOT__d_e_reg__DOT__value[0xbU] 
					   >> 0xeU))
				     : VL_MODDIVS_III(32, 
						      ((vlTOPp->Vortex__DOT__vx_d_e_reg__DOT__d_e_reg__DOT__value[0xcU] 
							<< 0x12U) 
						       | (vlTOPp->Vortex__DOT__vx_d_e_reg__DOT__d_e_reg__DOT__value[0xbU] 
							  >> 0xeU)), vlTOPp->Vortex__DOT__vx_execute__DOT__genblk1__BRA__2__KET____DOT__vx_alu__DOT__ALU_in2)))
			     : ((0x200U & vlTOPp->Vortex__DOT__vx_d_e_reg__DOT__d_e_reg__DOT__value[5U])
				 ? ((0U == vlTOPp->Vortex__DOT__vx_execute__DOT__genblk1__BRA__2__KET____DOT__vx_alu__DOT__ALU_in2)
				     ? 0xffffffffU : 
				    VL_DIV_III(32, 
					       ((vlTOPp->Vortex__DOT__vx_d_e_reg__DOT__d_e_reg__DOT__value[0xcU] 
						 << 0x12U) 
						| (vlTOPp->Vortex__DOT__vx_d_e_reg__DOT__d_e_reg__DOT__value[0xbU] 
						   >> 0xeU)), vlTOPp->Vortex__DOT__vx_execute__DOT__genblk1__BRA__2__KET____DOT__vx_alu__DOT__ALU_in2))
				 : ((0U == vlTOPp->Vortex__DOT__vx_execute__DOT__genblk1__BRA__2__KET____DOT__vx_alu__DOT__ALU_in2)
				     ? 0xffffffffU : 
				    VL_DIVS_III(32, 
						((vlTOPp->Vortex__DOT__vx_d_e_reg__DOT__d_e_reg__DOT__value[0xcU] 
						  << 0x12U) 
						 | (vlTOPp->Vortex__DOT__vx_d_e_reg__DOT__d_e_reg__DOT__value[0xbU] 
						    >> 0xeU)), vlTOPp->Vortex__DOT__vx_execute__DOT__genblk1__BRA__2__KET____DOT__vx_alu__DOT__ALU_in2))))
			 : ((0x400U & vlTOPp->Vortex__DOT__vx_d_e_reg__DOT__d_e_reg__DOT__value[5U])
			     ? ((0x200U & vlTOPp->Vortex__DOT__vx_d_e_reg__DOT__d_e_reg__DOT__value[5U])
				 ? (IData)((((QData)((IData)(
							     ((vlTOPp->Vortex__DOT__vx_d_e_reg__DOT__d_e_reg__DOT__value[0xcU] 
							       << 0x12U) 
							      | (vlTOPp->Vortex__DOT__vx_d_e_reg__DOT__d_e_reg__DOT__value[0xbU] 
								 >> 0xeU)))) 
					     * (QData)((IData)(vlTOPp->Vortex__DOT__vx_execute__DOT__genblk1__BRA__2__KET____DOT__vx_alu__DOT__ALU_in2))) 
					    >> 0x20U))
				 : (IData)((((((QData)((IData)(
							       VL_NEGATE_I((IData)(
										(1U 
										& (vlTOPp->Vortex__DOT__vx_d_e_reg__DOT__d_e_reg__DOT__value[0xcU] 
										>> 0xdU)))))) 
					       << 0x20U) 
					      | (QData)((IData)(
								((vlTOPp->Vortex__DOT__vx_d_e_reg__DOT__d_e_reg__DOT__value[0xcU] 
								  << 0x12U) 
								 | (vlTOPp->Vortex__DOT__vx_d_e_reg__DOT__d_e_reg__DOT__value[0xbU] 
								    >> 0xeU))))) 
					     * (QData)((IData)(vlTOPp->Vortex__DOT__vx_execute__DOT__genblk1__BRA__2__KET____DOT__vx_alu__DOT__ALU_in2))) 
					    >> 0x20U)))
			     : ((0x200U & vlTOPp->Vortex__DOT__vx_d_e_reg__DOT__d_e_reg__DOT__value[5U])
				 ? (IData)((vlTOPp->Vortex__DOT__vx_execute__DOT__genblk1__BRA__2__KET____DOT__vx_alu__DOT__mult_signed_result 
					    >> 0x20U))
				 : (IData)(vlTOPp->Vortex__DOT__vx_execute__DOT__genblk1__BRA__2__KET____DOT__vx_alu__DOT__mult_signed_result)))))
	    : ((0x1000U & vlTOPp->Vortex__DOT__vx_d_e_reg__DOT__d_e_reg__DOT__value[5U])
	        ? ((0x800U & vlTOPp->Vortex__DOT__vx_d_e_reg__DOT__d_e_reg__DOT__value[5U])
		    ? ((0x400U & vlTOPp->Vortex__DOT__vx_d_e_reg__DOT__d_e_reg__DOT__value[5U])
		        ? vlTOPp->Vortex__DOT__csr_decode_csr_data
		        : ((0x200U & vlTOPp->Vortex__DOT__vx_d_e_reg__DOT__d_e_reg__DOT__value[5U])
			    ? vlTOPp->Vortex__DOT__csr_decode_csr_data
			    : (((vlTOPp->Vortex__DOT__vx_d_e_reg__DOT__d_e_reg__DOT__value[3U] 
				 << 0x17U) | (vlTOPp->Vortex__DOT__vx_d_e_reg__DOT__d_e_reg__DOT__value[2U] 
					      >> 9U)) 
			       + (0xfffff000U & (vlTOPp->Vortex__DOT__vx_d_e_reg__DOT__d_e_reg__DOT__value[3U] 
						 << 3U)))))
		    : ((0x400U & vlTOPp->Vortex__DOT__vx_d_e_reg__DOT__d_e_reg__DOT__value[5U])
		        ? ((0x200U & vlTOPp->Vortex__DOT__vx_d_e_reg__DOT__d_e_reg__DOT__value[5U])
			    ? (0xfffff000U & (vlTOPp->Vortex__DOT__vx_d_e_reg__DOT__d_e_reg__DOT__value[3U] 
					      << 3U))
			    : ((((vlTOPp->Vortex__DOT__vx_d_e_reg__DOT__d_e_reg__DOT__value[0xcU] 
				  << 0x12U) | (vlTOPp->Vortex__DOT__vx_d_e_reg__DOT__d_e_reg__DOT__value[0xbU] 
					       >> 0xeU)) 
				>= vlTOPp->Vortex__DOT__vx_execute__DOT__genblk1__BRA__2__KET____DOT__vx_alu__DOT__ALU_in2)
			        ? 0U : 0xffffffffU))
		        : ((0x200U & vlTOPp->Vortex__DOT__vx_d_e_reg__DOT__d_e_reg__DOT__value[5U])
			    ? (vlTOPp->Vortex__DOT__vx_execute__DOT__genblk1__BRA__2__KET____DOT__vx_alu__DOT__ALU_in2 
			       & ((vlTOPp->Vortex__DOT__vx_d_e_reg__DOT__d_e_reg__DOT__value[0xcU] 
				   << 0x12U) | (vlTOPp->Vortex__DOT__vx_d_e_reg__DOT__d_e_reg__DOT__value[0xbU] 
						>> 0xeU)))
			    : (((vlTOPp->Vortex__DOT__vx_d_e_reg__DOT__d_e_reg__DOT__value[0xcU] 
				 << 0x12U) | (vlTOPp->Vortex__DOT__vx_d_e_reg__DOT__d_e_reg__DOT__value[0xbU] 
					      >> 0xeU)) 
			       | vlTOPp->Vortex__DOT__vx_execute__DOT__genblk1__BRA__2__KET____DOT__vx_alu__DOT__ALU_in2))))
	        : ((0x800U & vlTOPp->Vortex__DOT__vx_d_e_reg__DOT__d_e_reg__DOT__value[5U])
		    ? ((0x400U & vlTOPp->Vortex__DOT__vx_d_e_reg__DOT__d_e_reg__DOT__value[5U])
		        ? ((0x200U & vlTOPp->Vortex__DOT__vx_d_e_reg__DOT__d_e_reg__DOT__value[5U])
			    ? VL_SHIFTRS_III(32,32,5, 
					     ((vlTOPp->Vortex__DOT__vx_d_e_reg__DOT__d_e_reg__DOT__value[0xcU] 
					       << 0x12U) 
					      | (vlTOPp->Vortex__DOT__vx_d_e_reg__DOT__d_e_reg__DOT__value[0xbU] 
						 >> 0xeU)), 
					     (0x1fU 
					      & vlTOPp->Vortex__DOT__vx_execute__DOT__genblk1__BRA__2__KET____DOT__vx_alu__DOT__ALU_in2))
			    : (((vlTOPp->Vortex__DOT__vx_d_e_reg__DOT__d_e_reg__DOT__value[0xcU] 
				 << 0x12U) | (vlTOPp->Vortex__DOT__vx_d_e_reg__DOT__d_e_reg__DOT__value[0xbU] 
					      >> 0xeU)) 
			       >> (0x1fU & vlTOPp->Vortex__DOT__vx_execute__DOT__genblk1__BRA__2__KET____DOT__vx_alu__DOT__ALU_in2)))
		        : ((0x200U & vlTOPp->Vortex__DOT__vx_d_e_reg__DOT__d_e_reg__DOT__value[5U])
			    ? (((vlTOPp->Vortex__DOT__vx_d_e_reg__DOT__d_e_reg__DOT__value[0xcU] 
				 << 0x12U) | (vlTOPp->Vortex__DOT__vx_d_e_reg__DOT__d_e_reg__DOT__value[0xbU] 
					      >> 0xeU)) 
			       ^ vlTOPp->Vortex__DOT__vx_execute__DOT__genblk1__BRA__2__KET____DOT__vx_alu__DOT__ALU_in2)
			    : ((((vlTOPp->Vortex__DOT__vx_d_e_reg__DOT__d_e_reg__DOT__value[0xcU] 
				  << 0x12U) | (vlTOPp->Vortex__DOT__vx_d_e_reg__DOT__d_e_reg__DOT__value[0xbU] 
					       >> 0xeU)) 
				< vlTOPp->Vortex__DOT__vx_execute__DOT__genblk1__BRA__2__KET____DOT__vx_alu__DOT__ALU_in2)
			        ? 1U : 0U))) : ((0x400U 
						 & vlTOPp->Vortex__DOT__vx_d_e_reg__DOT__d_e_reg__DOT__value[5U])
						 ? 
						((0x200U 
						  & vlTOPp->Vortex__DOT__vx_d_e_reg__DOT__d_e_reg__DOT__value[5U])
						  ? 
						 (VL_LTS_III(1,32,32, 
							     ((vlTOPp->Vortex__DOT__vx_d_e_reg__DOT__d_e_reg__DOT__value[0xcU] 
							       << 0x12U) 
							      | (vlTOPp->Vortex__DOT__vx_d_e_reg__DOT__d_e_reg__DOT__value[0xbU] 
								 >> 0xeU)), vlTOPp->Vortex__DOT__vx_execute__DOT__genblk1__BRA__2__KET____DOT__vx_alu__DOT__ALU_in2)
						   ? 1U
						   : 0U)
						  : 
						 (((vlTOPp->Vortex__DOT__vx_d_e_reg__DOT__d_e_reg__DOT__value[0xcU] 
						    << 0x12U) 
						   | (vlTOPp->Vortex__DOT__vx_d_e_reg__DOT__d_e_reg__DOT__value[0xbU] 
						      >> 0xeU)) 
						  << 
						  (0x1fU 
						   & vlTOPp->Vortex__DOT__vx_execute__DOT__genblk1__BRA__2__KET____DOT__vx_alu__DOT__ALU_in2)))
						 : 
						((0x200U 
						  & vlTOPp->Vortex__DOT__vx_d_e_reg__DOT__d_e_reg__DOT__value[5U])
						  ? 
						 (((vlTOPp->Vortex__DOT__vx_d_e_reg__DOT__d_e_reg__DOT__value[0xcU] 
						    << 0x12U) 
						   | (vlTOPp->Vortex__DOT__vx_d_e_reg__DOT__d_e_reg__DOT__value[0xbU] 
						      >> 0xeU)) 
						  - vlTOPp->Vortex__DOT__vx_execute__DOT__genblk1__BRA__2__KET____DOT__vx_alu__DOT__ALU_in2)
						  : 
						 (((vlTOPp->Vortex__DOT__vx_d_e_reg__DOT__d_e_reg__DOT__value[0xcU] 
						    << 0x12U) 
						   | (vlTOPp->Vortex__DOT__vx_d_e_reg__DOT__d_e_reg__DOT__value[0xbU] 
						      >> 0xeU)) 
						  + vlTOPp->Vortex__DOT__vx_execute__DOT__genblk1__BRA__2__KET____DOT__vx_alu__DOT__ALU_in2))))));
    // ALWAYS at VX_alu.v:48
    vlTOPp->Vortex__DOT__vx_execute__DOT____Vcellout__genblk1__BRA__3__KET____DOT__vx_alu__out_alu_result 
	= ((0x2000U & vlTOPp->Vortex__DOT__vx_d_e_reg__DOT__d_e_reg__DOT__value[5U])
	    ? ((0x1000U & vlTOPp->Vortex__DOT__vx_d_e_reg__DOT__d_e_reg__DOT__value[5U])
	        ? 0U : ((0x800U & vlTOPp->Vortex__DOT__vx_d_e_reg__DOT__d_e_reg__DOT__value[5U])
			 ? ((0x400U & vlTOPp->Vortex__DOT__vx_d_e_reg__DOT__d_e_reg__DOT__value[5U])
			     ? ((0x200U & vlTOPp->Vortex__DOT__vx_d_e_reg__DOT__d_e_reg__DOT__value[5U])
				 ? ((0U == vlTOPp->Vortex__DOT__vx_execute__DOT__genblk1__BRA__3__KET____DOT__vx_alu__DOT__ALU_in2)
				     ? ((vlTOPp->Vortex__DOT__vx_d_e_reg__DOT__d_e_reg__DOT__value[0xdU] 
					 << 0x12U) 
					| (vlTOPp->Vortex__DOT__vx_d_e_reg__DOT__d_e_reg__DOT__value[0xcU] 
					   >> 0xeU))
				     : VL_MODDIV_III(32, 
						     ((vlTOPp->Vortex__DOT__vx_d_e_reg__DOT__d_e_reg__DOT__value[0xdU] 
						       << 0x12U) 
						      | (vlTOPp->Vortex__DOT__vx_d_e_reg__DOT__d_e_reg__DOT__value[0xcU] 
							 >> 0xeU)), vlTOPp->Vortex__DOT__vx_execute__DOT__genblk1__BRA__3__KET____DOT__vx_alu__DOT__ALU_in2))
				 : ((0U == vlTOPp->Vortex__DOT__vx_execute__DOT__genblk1__BRA__3__KET____DOT__vx_alu__DOT__ALU_in2)
				     ? ((vlTOPp->Vortex__DOT__vx_d_e_reg__DOT__d_e_reg__DOT__value[0xdU] 
					 << 0x12U) 
					| (vlTOPp->Vortex__DOT__vx_d_e_reg__DOT__d_e_reg__DOT__value[0xcU] 
					   >> 0xeU))
				     : VL_MODDIVS_III(32, 
						      ((vlTOPp->Vortex__DOT__vx_d_e_reg__DOT__d_e_reg__DOT__value[0xdU] 
							<< 0x12U) 
						       | (vlTOPp->Vortex__DOT__vx_d_e_reg__DOT__d_e_reg__DOT__value[0xcU] 
							  >> 0xeU)), vlTOPp->Vortex__DOT__vx_execute__DOT__genblk1__BRA__3__KET____DOT__vx_alu__DOT__ALU_in2)))
			     : ((0x200U & vlTOPp->Vortex__DOT__vx_d_e_reg__DOT__d_e_reg__DOT__value[5U])
				 ? ((0U == vlTOPp->Vortex__DOT__vx_execute__DOT__genblk1__BRA__3__KET____DOT__vx_alu__DOT__ALU_in2)
				     ? 0xffffffffU : 
				    VL_DIV_III(32, 
					       ((vlTOPp->Vortex__DOT__vx_d_e_reg__DOT__d_e_reg__DOT__value[0xdU] 
						 << 0x12U) 
						| (vlTOPp->Vortex__DOT__vx_d_e_reg__DOT__d_e_reg__DOT__value[0xcU] 
						   >> 0xeU)), vlTOPp->Vortex__DOT__vx_execute__DOT__genblk1__BRA__3__KET____DOT__vx_alu__DOT__ALU_in2))
				 : ((0U == vlTOPp->Vortex__DOT__vx_execute__DOT__genblk1__BRA__3__KET____DOT__vx_alu__DOT__ALU_in2)
				     ? 0xffffffffU : 
				    VL_DIVS_III(32, 
						((vlTOPp->Vortex__DOT__vx_d_e_reg__DOT__d_e_reg__DOT__value[0xdU] 
						  << 0x12U) 
						 | (vlTOPp->Vortex__DOT__vx_d_e_reg__DOT__d_e_reg__DOT__value[0xcU] 
						    >> 0xeU)), vlTOPp->Vortex__DOT__vx_execute__DOT__genblk1__BRA__3__KET____DOT__vx_alu__DOT__ALU_in2))))
			 : ((0x400U & vlTOPp->Vortex__DOT__vx_d_e_reg__DOT__d_e_reg__DOT__value[5U])
			     ? ((0x200U & vlTOPp->Vortex__DOT__vx_d_e_reg__DOT__d_e_reg__DOT__value[5U])
				 ? (IData)((((QData)((IData)(
							     ((vlTOPp->Vortex__DOT__vx_d_e_reg__DOT__d_e_reg__DOT__value[0xdU] 
							       << 0x12U) 
							      | (vlTOPp->Vortex__DOT__vx_d_e_reg__DOT__d_e_reg__DOT__value[0xcU] 
								 >> 0xeU)))) 
					     * (QData)((IData)(vlTOPp->Vortex__DOT__vx_execute__DOT__genblk1__BRA__3__KET____DOT__vx_alu__DOT__ALU_in2))) 
					    >> 0x20U))
				 : (IData)((((((QData)((IData)(
							       VL_NEGATE_I((IData)(
										(1U 
										& (vlTOPp->Vortex__DOT__vx_d_e_reg__DOT__d_e_reg__DOT__value[0xdU] 
										>> 0xdU)))))) 
					       << 0x20U) 
					      | (QData)((IData)(
								((vlTOPp->Vortex__DOT__vx_d_e_reg__DOT__d_e_reg__DOT__value[0xdU] 
								  << 0x12U) 
								 | (vlTOPp->Vortex__DOT__vx_d_e_reg__DOT__d_e_reg__DOT__value[0xcU] 
								    >> 0xeU))))) 
					     * (QData)((IData)(vlTOPp->Vortex__DOT__vx_execute__DOT__genblk1__BRA__3__KET____DOT__vx_alu__DOT__ALU_in2))) 
					    >> 0x20U)))
			     : ((0x200U & vlTOPp->Vortex__DOT__vx_d_e_reg__DOT__d_e_reg__DOT__value[5U])
				 ? (IData)((vlTOPp->Vortex__DOT__vx_execute__DOT__genblk1__BRA__3__KET____DOT__vx_alu__DOT__mult_signed_result 
					    >> 0x20U))
				 : (IData)(vlTOPp->Vortex__DOT__vx_execute__DOT__genblk1__BRA__3__KET____DOT__vx_alu__DOT__mult_signed_result)))))
	    : ((0x1000U & vlTOPp->Vortex__DOT__vx_d_e_reg__DOT__d_e_reg__DOT__value[5U])
	        ? ((0x800U & vlTOPp->Vortex__DOT__vx_d_e_reg__DOT__d_e_reg__DOT__value[5U])
		    ? ((0x400U & vlTOPp->Vortex__DOT__vx_d_e_reg__DOT__d_e_reg__DOT__value[5U])
		        ? vlTOPp->Vortex__DOT__csr_decode_csr_data
		        : ((0x200U & vlTOPp->Vortex__DOT__vx_d_e_reg__DOT__d_e_reg__DOT__value[5U])
			    ? vlTOPp->Vortex__DOT__csr_decode_csr_data
			    : (((vlTOPp->Vortex__DOT__vx_d_e_reg__DOT__d_e_reg__DOT__value[3U] 
				 << 0x17U) | (vlTOPp->Vortex__DOT__vx_d_e_reg__DOT__d_e_reg__DOT__value[2U] 
					      >> 9U)) 
			       + (0xfffff000U & (vlTOPp->Vortex__DOT__vx_d_e_reg__DOT__d_e_reg__DOT__value[3U] 
						 << 3U)))))
		    : ((0x400U & vlTOPp->Vortex__DOT__vx_d_e_reg__DOT__d_e_reg__DOT__value[5U])
		        ? ((0x200U & vlTOPp->Vortex__DOT__vx_d_e_reg__DOT__d_e_reg__DOT__value[5U])
			    ? (0xfffff000U & (vlTOPp->Vortex__DOT__vx_d_e_reg__DOT__d_e_reg__DOT__value[3U] 
					      << 3U))
			    : ((((vlTOPp->Vortex__DOT__vx_d_e_reg__DOT__d_e_reg__DOT__value[0xdU] 
				  << 0x12U) | (vlTOPp->Vortex__DOT__vx_d_e_reg__DOT__d_e_reg__DOT__value[0xcU] 
					       >> 0xeU)) 
				>= vlTOPp->Vortex__DOT__vx_execute__DOT__genblk1__BRA__3__KET____DOT__vx_alu__DOT__ALU_in2)
			        ? 0U : 0xffffffffU))
		        : ((0x200U & vlTOPp->Vortex__DOT__vx_d_e_reg__DOT__d_e_reg__DOT__value[5U])
			    ? (vlTOPp->Vortex__DOT__vx_execute__DOT__genblk1__BRA__3__KET____DOT__vx_alu__DOT__ALU_in2 
			       & ((vlTOPp->Vortex__DOT__vx_d_e_reg__DOT__d_e_reg__DOT__value[0xdU] 
				   << 0x12U) | (vlTOPp->Vortex__DOT__vx_d_e_reg__DOT__d_e_reg__DOT__value[0xcU] 
						>> 0xeU)))
			    : (((vlTOPp->Vortex__DOT__vx_d_e_reg__DOT__d_e_reg__DOT__value[0xdU] 
				 << 0x12U) | (vlTOPp->Vortex__DOT__vx_d_e_reg__DOT__d_e_reg__DOT__value[0xcU] 
					      >> 0xeU)) 
			       | vlTOPp->Vortex__DOT__vx_execute__DOT__genblk1__BRA__3__KET____DOT__vx_alu__DOT__ALU_in2))))
	        : ((0x800U & vlTOPp->Vortex__DOT__vx_d_e_reg__DOT__d_e_reg__DOT__value[5U])
		    ? ((0x400U & vlTOPp->Vortex__DOT__vx_d_e_reg__DOT__d_e_reg__DOT__value[5U])
		        ? ((0x200U & vlTOPp->Vortex__DOT__vx_d_e_reg__DOT__d_e_reg__DOT__value[5U])
			    ? VL_SHIFTRS_III(32,32,5, 
					     ((vlTOPp->Vortex__DOT__vx_d_e_reg__DOT__d_e_reg__DOT__value[0xdU] 
					       << 0x12U) 
					      | (vlTOPp->Vortex__DOT__vx_d_e_reg__DOT__d_e_reg__DOT__value[0xcU] 
						 >> 0xeU)), 
					     (0x1fU 
					      & vlTOPp->Vortex__DOT__vx_execute__DOT__genblk1__BRA__3__KET____DOT__vx_alu__DOT__ALU_in2))
			    : (((vlTOPp->Vortex__DOT__vx_d_e_reg__DOT__d_e_reg__DOT__value[0xdU] 
				 << 0x12U) | (vlTOPp->Vortex__DOT__vx_d_e_reg__DOT__d_e_reg__DOT__value[0xcU] 
					      >> 0xeU)) 
			       >> (0x1fU & vlTOPp->Vortex__DOT__vx_execute__DOT__genblk1__BRA__3__KET____DOT__vx_alu__DOT__ALU_in2)))
		        : ((0x200U & vlTOPp->Vortex__DOT__vx_d_e_reg__DOT__d_e_reg__DOT__value[5U])
			    ? (((vlTOPp->Vortex__DOT__vx_d_e_reg__DOT__d_e_reg__DOT__value[0xdU] 
				 << 0x12U) | (vlTOPp->Vortex__DOT__vx_d_e_reg__DOT__d_e_reg__DOT__value[0xcU] 
					      >> 0xeU)) 
			       ^ vlTOPp->Vortex__DOT__vx_execute__DOT__genblk1__BRA__3__KET____DOT__vx_alu__DOT__ALU_in2)
			    : ((((vlTOPp->Vortex__DOT__vx_d_e_reg__DOT__d_e_reg__DOT__value[0xdU] 
				  << 0x12U) | (vlTOPp->Vortex__DOT__vx_d_e_reg__DOT__d_e_reg__DOT__value[0xcU] 
					       >> 0xeU)) 
				< vlTOPp->Vortex__DOT__vx_execute__DOT__genblk1__BRA__3__KET____DOT__vx_alu__DOT__ALU_in2)
			        ? 1U : 0U))) : ((0x400U 
						 & vlTOPp->Vortex__DOT__vx_d_e_reg__DOT__d_e_reg__DOT__value[5U])
						 ? 
						((0x200U 
						  & vlTOPp->Vortex__DOT__vx_d_e_reg__DOT__d_e_reg__DOT__value[5U])
						  ? 
						 (VL_LTS_III(1,32,32, 
							     ((vlTOPp->Vortex__DOT__vx_d_e_reg__DOT__d_e_reg__DOT__value[0xdU] 
							       << 0x12U) 
							      | (vlTOPp->Vortex__DOT__vx_d_e_reg__DOT__d_e_reg__DOT__value[0xcU] 
								 >> 0xeU)), vlTOPp->Vortex__DOT__vx_execute__DOT__genblk1__BRA__3__KET____DOT__vx_alu__DOT__ALU_in2)
						   ? 1U
						   : 0U)
						  : 
						 (((vlTOPp->Vortex__DOT__vx_d_e_reg__DOT__d_e_reg__DOT__value[0xdU] 
						    << 0x12U) 
						   | (vlTOPp->Vortex__DOT__vx_d_e_reg__DOT__d_e_reg__DOT__value[0xcU] 
						      >> 0xeU)) 
						  << 
						  (0x1fU 
						   & vlTOPp->Vortex__DOT__vx_execute__DOT__genblk1__BRA__3__KET____DOT__vx_alu__DOT__ALU_in2)))
						 : 
						((0x200U 
						  & vlTOPp->Vortex__DOT__vx_d_e_reg__DOT__d_e_reg__DOT__value[5U])
						  ? 
						 (((vlTOPp->Vortex__DOT__vx_d_e_reg__DOT__d_e_reg__DOT__value[0xdU] 
						    << 0x12U) 
						   | (vlTOPp->Vortex__DOT__vx_d_e_reg__DOT__d_e_reg__DOT__value[0xcU] 
						      >> 0xeU)) 
						  - vlTOPp->Vortex__DOT__vx_execute__DOT__genblk1__BRA__3__KET____DOT__vx_alu__DOT__ALU_in2)
						  : 
						 (((vlTOPp->Vortex__DOT__vx_d_e_reg__DOT__d_e_reg__DOT__value[0xdU] 
						    << 0x12U) 
						   | (vlTOPp->Vortex__DOT__vx_d_e_reg__DOT__d_e_reg__DOT__value[0xcU] 
						      >> 0xeU)) 
						  + vlTOPp->Vortex__DOT__vx_execute__DOT__genblk1__BRA__3__KET____DOT__vx_alu__DOT__ALU_in2))))));
    vlTOPp->Vortex__DOT__vx_forwarding__DOT__src1_mem_fwd 
	= ((((((0x1fU & ((vlTOPp->Vortex__DOT__vx_f_d_reg__DOT__f_d_reg__DOT__value[2U] 
			  << 9U) | (vlTOPp->Vortex__DOT__vx_f_d_reg__DOT__f_d_reg__DOT__value[1U] 
				    >> 0x17U))) == 
	       (0x1fU & ((vlTOPp->Vortex__DOT__vx_e_m_reg__DOT__f_d_reg__DOT__value[8U] 
			  << 9U) | (vlTOPp->Vortex__DOT__vx_e_m_reg__DOT__f_d_reg__DOT__value[7U] 
				    >> 0x17U)))) & 
	      (0U != (0x1fU & ((vlTOPp->Vortex__DOT__vx_f_d_reg__DOT__f_d_reg__DOT__value[2U] 
				<< 9U) | (vlTOPp->Vortex__DOT__vx_f_d_reg__DOT__f_d_reg__DOT__value[1U] 
					  >> 0x17U))))) 
	     & (0U != (3U & ((vlTOPp->Vortex__DOT__vx_e_m_reg__DOT__f_d_reg__DOT__value[8U] 
			      << 0xbU) | (vlTOPp->Vortex__DOT__vx_e_m_reg__DOT__f_d_reg__DOT__value[7U] 
					  >> 0x15U))))) 
	    & (~ (IData)(vlTOPp->Vortex__DOT__vx_forwarding__DOT__src1_exe_fwd))) 
	   & ((0xfU & ((vlTOPp->Vortex__DOT__vx_f_d_reg__DOT__f_d_reg__DOT__value[1U] 
			<< 0x1cU) | (vlTOPp->Vortex__DOT__vx_f_d_reg__DOT__f_d_reg__DOT__value[0U] 
				     >> 4U))) == (0xfU 
						  & vlTOPp->Vortex__DOT__vx_e_m_reg__DOT__f_d_reg__DOT__value[0U])));
    vlTOPp->Vortex__DOT__vx_forwarding__DOT__src2_mem_fwd 
	= ((((((0x1fU & ((vlTOPp->Vortex__DOT__vx_f_d_reg__DOT__f_d_reg__DOT__value[2U] 
			  << 4U) | (vlTOPp->Vortex__DOT__vx_f_d_reg__DOT__f_d_reg__DOT__value[1U] 
				    >> 0x1cU))) == 
	       (0x1fU & ((vlTOPp->Vortex__DOT__vx_e_m_reg__DOT__f_d_reg__DOT__value[8U] 
			  << 9U) | (vlTOPp->Vortex__DOT__vx_e_m_reg__DOT__f_d_reg__DOT__value[7U] 
				    >> 0x17U)))) & 
	      (0U != (0x1fU & ((vlTOPp->Vortex__DOT__vx_f_d_reg__DOT__f_d_reg__DOT__value[2U] 
				<< 4U) | (vlTOPp->Vortex__DOT__vx_f_d_reg__DOT__f_d_reg__DOT__value[1U] 
					  >> 0x1cU))))) 
	     & (0U != (3U & ((vlTOPp->Vortex__DOT__vx_e_m_reg__DOT__f_d_reg__DOT__value[8U] 
			      << 0xbU) | (vlTOPp->Vortex__DOT__vx_e_m_reg__DOT__f_d_reg__DOT__value[7U] 
					  >> 0x15U))))) 
	    & (~ (IData)(vlTOPp->Vortex__DOT__vx_forwarding__DOT__src2_exe_fwd))) 
	   & ((0xfU & ((vlTOPp->Vortex__DOT__vx_f_d_reg__DOT__f_d_reg__DOT__value[1U] 
			<< 0x1cU) | (vlTOPp->Vortex__DOT__vx_f_d_reg__DOT__f_d_reg__DOT__value[0U] 
				     >> 4U))) == (0xfU 
						  & vlTOPp->Vortex__DOT__vx_e_m_reg__DOT__f_d_reg__DOT__value[0U])));
    vlTOPp->out_ebreak = ((0U == (0xfU & ((vlTOPp->Vortex__DOT__vx_f_d_reg__DOT__f_d_reg__DOT__value[1U] 
					   << 0x1cU) 
					  | (vlTOPp->Vortex__DOT__vx_f_d_reg__DOT__f_d_reg__DOT__value[0U] 
					     >> 4U)))) 
			  & (IData)(vlTOPp->Vortex__DOT__vx_decode__DOT__is_ebreak));
    vlTOPp->Vortex__DOT__vx_decode__DOT__temp_final_alu 
	= ((0x63U == (0x7fU & ((vlTOPp->Vortex__DOT__vx_f_d_reg__DOT__f_d_reg__DOT__value[2U] 
				<< 0x18U) | (vlTOPp->Vortex__DOT__vx_f_d_reg__DOT__f_d_reg__DOT__value[1U] 
					     >> 8U))))
	    ? ((5U > (IData)(vlSymsp->TOP__Vortex__DOT__VX_frE_to_bckE_req.branch_type))
	        ? 1U : 0xaU) : ((0x37U == (0x7fU & 
					   ((vlTOPp->Vortex__DOT__vx_f_d_reg__DOT__f_d_reg__DOT__value[2U] 
					     << 0x18U) 
					    | (vlTOPp->Vortex__DOT__vx_f_d_reg__DOT__f_d_reg__DOT__value[1U] 
					       >> 8U))))
				 ? 0xbU : ((0x17U == 
					    (0x7fU 
					     & ((vlTOPp->Vortex__DOT__vx_f_d_reg__DOT__f_d_reg__DOT__value[2U] 
						 << 0x18U) 
						| (vlTOPp->Vortex__DOT__vx_f_d_reg__DOT__f_d_reg__DOT__value[1U] 
						   >> 8U))))
					    ? 0xcU : 
					   ((IData)(vlTOPp->Vortex__DOT__vx_decode__DOT__is_csr)
					     ? ((1U 
						 == 
						 (3U 
						  & ((vlTOPp->Vortex__DOT__vx_f_d_reg__DOT__f_d_reg__DOT__value[2U] 
						      << 0xcU) 
						     | (vlTOPp->Vortex__DOT__vx_f_d_reg__DOT__f_d_reg__DOT__value[1U] 
							>> 0x14U))))
						 ? 0xdU
						 : 
						((2U 
						  == 
						  (3U 
						   & ((vlTOPp->Vortex__DOT__vx_f_d_reg__DOT__f_d_reg__DOT__value[2U] 
						       << 0xcU) 
						      | (vlTOPp->Vortex__DOT__vx_f_d_reg__DOT__f_d_reg__DOT__value[1U] 
							 >> 0x14U))))
						  ? 0xeU
						  : 0xfU))
					     : (((0x23U 
						  == 
						  (0x7fU 
						   & ((vlTOPp->Vortex__DOT__vx_f_d_reg__DOT__f_d_reg__DOT__value[2U] 
						       << 0x18U) 
						      | (vlTOPp->Vortex__DOT__vx_f_d_reg__DOT__f_d_reg__DOT__value[1U] 
							 >> 8U)))) 
						 | (3U 
						    == 
						    (0x7fU 
						     & ((vlTOPp->Vortex__DOT__vx_f_d_reg__DOT__f_d_reg__DOT__value[2U] 
							 << 0x18U) 
							| (vlTOPp->Vortex__DOT__vx_f_d_reg__DOT__f_d_reg__DOT__value[1U] 
							   >> 8U)))))
						 ? 0U
						 : 
						((0x400000U 
						  & vlTOPp->Vortex__DOT__vx_f_d_reg__DOT__f_d_reg__DOT__value[1U])
						  ? 
						 ((0x200000U 
						   & vlTOPp->Vortex__DOT__vx_f_d_reg__DOT__f_d_reg__DOT__value[1U])
						   ? 
						  ((0x100000U 
						    & vlTOPp->Vortex__DOT__vx_f_d_reg__DOT__f_d_reg__DOT__value[1U])
						    ? 9U
						    : 8U)
						   : 
						  ((0x100000U 
						    & vlTOPp->Vortex__DOT__vx_f_d_reg__DOT__f_d_reg__DOT__value[1U])
						    ? 
						   ((0U 
						     == 
						     (0x7fU 
						      & (vlTOPp->Vortex__DOT__vx_f_d_reg__DOT__f_d_reg__DOT__value[2U] 
							 >> 1U)))
						     ? 6U
						     : 7U)
						    : 5U))
						  : 
						 ((0x200000U 
						   & vlTOPp->Vortex__DOT__vx_f_d_reg__DOT__f_d_reg__DOT__value[1U])
						   ? 
						  ((0x100000U 
						    & vlTOPp->Vortex__DOT__vx_f_d_reg__DOT__f_d_reg__DOT__value[1U])
						    ? 4U
						    : 3U)
						   : 
						  ((0x100000U 
						    & vlTOPp->Vortex__DOT__vx_f_d_reg__DOT__f_d_reg__DOT__value[1U])
						    ? 2U
						    : 
						   ((0x13U 
						     == 
						     (0x7fU 
						      & ((vlTOPp->Vortex__DOT__vx_f_d_reg__DOT__f_d_reg__DOT__value[2U] 
							  << 0x18U) 
							 | (vlTOPp->Vortex__DOT__vx_f_d_reg__DOT__f_d_reg__DOT__value[1U] 
							    >> 8U))))
						     ? 0U
						     : 
						    ((0U 
						      == 
						      (0x7fU 
						       & (vlTOPp->Vortex__DOT__vx_f_d_reg__DOT__f_d_reg__DOT__value[2U] 
							  >> 1U)))
						      ? 0U
						      : 1U))))))))));
    vlTOPp->Vortex__DOT__vx_fetch__DOT__genblk2__BRA__0__KET____DOT__warp_zero_change_mask 
	= ((IData)(vlSymsp->TOP__Vortex__DOT__VX_warp_ctl.change_mask) 
	   & (0U == (0xfU & ((vlTOPp->Vortex__DOT__vx_f_d_reg__DOT__f_d_reg__DOT__value[1U] 
			      << 0x1cU) | (vlTOPp->Vortex__DOT__vx_f_d_reg__DOT__f_d_reg__DOT__value[0U] 
					   >> 4U)))));
    vlTOPp->Vortex__DOT__vx_fetch__DOT__genblk2__BRA__1__KET____DOT__warp_zero_change_mask 
	= ((IData)(vlSymsp->TOP__Vortex__DOT__VX_warp_ctl.change_mask) 
	   & (1U == (0xfU & ((vlTOPp->Vortex__DOT__vx_f_d_reg__DOT__f_d_reg__DOT__value[1U] 
			      << 0x1cU) | (vlTOPp->Vortex__DOT__vx_f_d_reg__DOT__f_d_reg__DOT__value[0U] 
					   >> 4U)))));
    vlTOPp->Vortex__DOT__vx_fetch__DOT__genblk2__BRA__2__KET____DOT__warp_zero_change_mask 
	= ((IData)(vlSymsp->TOP__Vortex__DOT__VX_warp_ctl.change_mask) 
	   & (2U == (0xfU & ((vlTOPp->Vortex__DOT__vx_f_d_reg__DOT__f_d_reg__DOT__value[1U] 
			      << 0x1cU) | (vlTOPp->Vortex__DOT__vx_f_d_reg__DOT__f_d_reg__DOT__value[0U] 
					   >> 4U)))));
    vlTOPp->Vortex__DOT__vx_fetch__DOT__genblk2__BRA__3__KET____DOT__warp_zero_change_mask 
	= ((IData)(vlSymsp->TOP__Vortex__DOT__VX_warp_ctl.change_mask) 
	   & (3U == (0xfU & ((vlTOPp->Vortex__DOT__vx_f_d_reg__DOT__f_d_reg__DOT__value[1U] 
			      << 0x1cU) | (vlTOPp->Vortex__DOT__vx_f_d_reg__DOT__f_d_reg__DOT__value[0U] 
					   >> 4U)))));
    vlTOPp->Vortex__DOT__vx_fetch__DOT__genblk2__BRA__4__KET____DOT__warp_zero_change_mask 
	= ((IData)(vlSymsp->TOP__Vortex__DOT__VX_warp_ctl.change_mask) 
	   & (4U == (0xfU & ((vlTOPp->Vortex__DOT__vx_f_d_reg__DOT__f_d_reg__DOT__value[1U] 
			      << 0x1cU) | (vlTOPp->Vortex__DOT__vx_f_d_reg__DOT__f_d_reg__DOT__value[0U] 
					   >> 4U)))));
    vlTOPp->Vortex__DOT__vx_fetch__DOT__genblk2__BRA__5__KET____DOT__warp_zero_change_mask 
	= ((IData)(vlSymsp->TOP__Vortex__DOT__VX_warp_ctl.change_mask) 
	   & (5U == (0xfU & ((vlTOPp->Vortex__DOT__vx_f_d_reg__DOT__f_d_reg__DOT__value[1U] 
			      << 0x1cU) | (vlTOPp->Vortex__DOT__vx_f_d_reg__DOT__f_d_reg__DOT__value[0U] 
					   >> 4U)))));
    vlTOPp->Vortex__DOT__vx_fetch__DOT__genblk2__BRA__6__KET____DOT__warp_zero_change_mask 
	= ((IData)(vlSymsp->TOP__Vortex__DOT__VX_warp_ctl.change_mask) 
	   & (6U == (0xfU & ((vlTOPp->Vortex__DOT__vx_f_d_reg__DOT__f_d_reg__DOT__value[1U] 
			      << 0x1cU) | (vlTOPp->Vortex__DOT__vx_f_d_reg__DOT__f_d_reg__DOT__value[0U] 
					   >> 4U)))));
    vlTOPp->Vortex__DOT__vx_fetch__DOT__genblk2__BRA__7__KET____DOT__warp_zero_change_mask 
	= ((IData)(vlSymsp->TOP__Vortex__DOT__VX_warp_ctl.change_mask) 
	   & (7U == (0xfU & ((vlTOPp->Vortex__DOT__vx_f_d_reg__DOT__f_d_reg__DOT__value[1U] 
			      << 0x1cU) | (vlTOPp->Vortex__DOT__vx_f_d_reg__DOT__f_d_reg__DOT__value[0U] 
					   >> 4U)))));
    vlTOPp->Vortex__DOT__vx_decode__DOT__glob_clone_stall 
	= ((0xfeU & (IData)(vlTOPp->Vortex__DOT__vx_decode__DOT__glob_clone_stall)) 
	   | (((0U == (IData)(vlTOPp->Vortex__DOT__vx_decode__DOT__VX_Context_zero__DOT__state_stall)) 
	       | (1U != (IData)(vlTOPp->Vortex__DOT__vx_decode__DOT__VX_Context_zero__DOT__state_stall))) 
	      & (IData)(vlTOPp->Vortex__DOT__vx_decode__DOT__real_zero_isclone)));
    vlTOPp->Vortex__DOT__vx_decode__DOT__glob_clone_stall 
	= ((0xfdU & (IData)(vlTOPp->Vortex__DOT__vx_decode__DOT__glob_clone_stall)) 
	   | (((((0U == (IData)(vlSymsp->TOP__Vortex__DOT__vx_decode__DOT__genblk2__BRA__1__KET____DOT__VX_Context_one.__PVT__clone_state_stall)) 
		 | (1U != (IData)(vlSymsp->TOP__Vortex__DOT__vx_decode__DOT__genblk2__BRA__1__KET____DOT__VX_Context_one.__PVT__clone_state_stall))) 
		& (IData)(vlTOPp->Vortex__DOT__vx_decode__DOT__genblk2__BRA__1__KET____DOT__real_isclone)) 
	       | (((0U == (IData)(vlSymsp->TOP__Vortex__DOT__vx_decode__DOT__genblk2__BRA__1__KET____DOT__VX_Context_one.__PVT__wspawn_state_stall)) 
		   & (IData)(vlTOPp->Vortex__DOT__vx_decode__DOT__genblk2__BRA__1__KET____DOT__real_wspawn)) 
		  | (1U < (IData)(vlSymsp->TOP__Vortex__DOT__vx_decode__DOT__genblk2__BRA__1__KET____DOT__VX_Context_one.__PVT__wspawn_state_stall)))) 
	      << 1U));
    vlTOPp->Vortex__DOT__vx_decode__DOT__glob_clone_stall 
	= ((0xfbU & (IData)(vlTOPp->Vortex__DOT__vx_decode__DOT__glob_clone_stall)) 
	   | (((((0U == (IData)(vlSymsp->TOP__Vortex__DOT__vx_decode__DOT__genblk2__BRA__2__KET____DOT__VX_Context_one.__PVT__clone_state_stall)) 
		 | (1U != (IData)(vlSymsp->TOP__Vortex__DOT__vx_decode__DOT__genblk2__BRA__2__KET____DOT__VX_Context_one.__PVT__clone_state_stall))) 
		& (IData)(vlTOPp->Vortex__DOT__vx_decode__DOT__genblk2__BRA__2__KET____DOT__real_isclone)) 
	       | (((0U == (IData)(vlSymsp->TOP__Vortex__DOT__vx_decode__DOT__genblk2__BRA__2__KET____DOT__VX_Context_one.__PVT__wspawn_state_stall)) 
		   & (IData)(vlTOPp->Vortex__DOT__vx_decode__DOT__genblk2__BRA__2__KET____DOT__real_wspawn)) 
		  | (1U < (IData)(vlSymsp->TOP__Vortex__DOT__vx_decode__DOT__genblk2__BRA__2__KET____DOT__VX_Context_one.__PVT__wspawn_state_stall)))) 
	      << 2U));
    vlTOPp->Vortex__DOT__vx_decode__DOT__glob_clone_stall 
	= ((0xf7U & (IData)(vlTOPp->Vortex__DOT__vx_decode__DOT__glob_clone_stall)) 
	   | (((((0U == (IData)(vlSymsp->TOP__Vortex__DOT__vx_decode__DOT__genblk2__BRA__3__KET____DOT__VX_Context_one.__PVT__clone_state_stall)) 
		 | (1U != (IData)(vlSymsp->TOP__Vortex__DOT__vx_decode__DOT__genblk2__BRA__3__KET____DOT__VX_Context_one.__PVT__clone_state_stall))) 
		& (IData)(vlTOPp->Vortex__DOT__vx_decode__DOT__genblk2__BRA__3__KET____DOT__real_isclone)) 
	       | (((0U == (IData)(vlSymsp->TOP__Vortex__DOT__vx_decode__DOT__genblk2__BRA__3__KET____DOT__VX_Context_one.__PVT__wspawn_state_stall)) 
		   & (IData)(vlTOPp->Vortex__DOT__vx_decode__DOT__genblk2__BRA__3__KET____DOT__real_wspawn)) 
		  | (1U < (IData)(vlSymsp->TOP__Vortex__DOT__vx_decode__DOT__genblk2__BRA__3__KET____DOT__VX_Context_one.__PVT__wspawn_state_stall)))) 
	      << 3U));
    vlTOPp->Vortex__DOT__vx_decode__DOT__glob_clone_stall 
	= ((0xefU & (IData)(vlTOPp->Vortex__DOT__vx_decode__DOT__glob_clone_stall)) 
	   | (((((0U == (IData)(vlSymsp->TOP__Vortex__DOT__vx_decode__DOT__genblk2__BRA__4__KET____DOT__VX_Context_one.__PVT__clone_state_stall)) 
		 | (1U != (IData)(vlSymsp->TOP__Vortex__DOT__vx_decode__DOT__genblk2__BRA__4__KET____DOT__VX_Context_one.__PVT__clone_state_stall))) 
		& (IData)(vlTOPp->Vortex__DOT__vx_decode__DOT__genblk2__BRA__4__KET____DOT__real_isclone)) 
	       | (((0U == (IData)(vlSymsp->TOP__Vortex__DOT__vx_decode__DOT__genblk2__BRA__4__KET____DOT__VX_Context_one.__PVT__wspawn_state_stall)) 
		   & (IData)(vlTOPp->Vortex__DOT__vx_decode__DOT__genblk2__BRA__4__KET____DOT__real_wspawn)) 
		  | (1U < (IData)(vlSymsp->TOP__Vortex__DOT__vx_decode__DOT__genblk2__BRA__4__KET____DOT__VX_Context_one.__PVT__wspawn_state_stall)))) 
	      << 4U));
    vlTOPp->Vortex__DOT__vx_decode__DOT__glob_clone_stall 
	= ((0xdfU & (IData)(vlTOPp->Vortex__DOT__vx_decode__DOT__glob_clone_stall)) 
	   | (((((0U == (IData)(vlSymsp->TOP__Vortex__DOT__vx_decode__DOT__genblk2__BRA__5__KET____DOT__VX_Context_one.__PVT__clone_state_stall)) 
		 | (1U != (IData)(vlSymsp->TOP__Vortex__DOT__vx_decode__DOT__genblk2__BRA__5__KET____DOT__VX_Context_one.__PVT__clone_state_stall))) 
		& (IData)(vlTOPp->Vortex__DOT__vx_decode__DOT__genblk2__BRA__5__KET____DOT__real_isclone)) 
	       | (((0U == (IData)(vlSymsp->TOP__Vortex__DOT__vx_decode__DOT__genblk2__BRA__5__KET____DOT__VX_Context_one.__PVT__wspawn_state_stall)) 
		   & (IData)(vlTOPp->Vortex__DOT__vx_decode__DOT__genblk2__BRA__5__KET____DOT__real_wspawn)) 
		  | (1U < (IData)(vlSymsp->TOP__Vortex__DOT__vx_decode__DOT__genblk2__BRA__5__KET____DOT__VX_Context_one.__PVT__wspawn_state_stall)))) 
	      << 5U));
    vlTOPp->Vortex__DOT__vx_decode__DOT__glob_clone_stall 
	= ((0xbfU & (IData)(vlTOPp->Vortex__DOT__vx_decode__DOT__glob_clone_stall)) 
	   | (((((0U == (IData)(vlSymsp->TOP__Vortex__DOT__vx_decode__DOT__genblk2__BRA__6__KET____DOT__VX_Context_one.__PVT__clone_state_stall)) 
		 | (1U != (IData)(vlSymsp->TOP__Vortex__DOT__vx_decode__DOT__genblk2__BRA__6__KET____DOT__VX_Context_one.__PVT__clone_state_stall))) 
		& (IData)(vlTOPp->Vortex__DOT__vx_decode__DOT__genblk2__BRA__6__KET____DOT__real_isclone)) 
	       | (((0U == (IData)(vlSymsp->TOP__Vortex__DOT__vx_decode__DOT__genblk2__BRA__6__KET____DOT__VX_Context_one.__PVT__wspawn_state_stall)) 
		   & (IData)(vlTOPp->Vortex__DOT__vx_decode__DOT__genblk2__BRA__6__KET____DOT__real_wspawn)) 
		  | (1U < (IData)(vlSymsp->TOP__Vortex__DOT__vx_decode__DOT__genblk2__BRA__6__KET____DOT__VX_Context_one.__PVT__wspawn_state_stall)))) 
	      << 6U));
    vlTOPp->Vortex__DOT__vx_decode__DOT__glob_clone_stall 
	= ((0x7fU & (IData)(vlTOPp->Vortex__DOT__vx_decode__DOT__glob_clone_stall)) 
	   | (((((0U == (IData)(vlSymsp->TOP__Vortex__DOT__vx_decode__DOT__genblk2__BRA__7__KET____DOT__VX_Context_one.__PVT__clone_state_stall)) 
		 | (1U != (IData)(vlSymsp->TOP__Vortex__DOT__vx_decode__DOT__genblk2__BRA__7__KET____DOT__VX_Context_one.__PVT__clone_state_stall))) 
		& (IData)(vlTOPp->Vortex__DOT__vx_decode__DOT__genblk2__BRA__7__KET____DOT__real_isclone)) 
	       | (((0U == (IData)(vlSymsp->TOP__Vortex__DOT__vx_decode__DOT__genblk2__BRA__7__KET____DOT__VX_Context_one.__PVT__wspawn_state_stall)) 
		   & (IData)(vlTOPp->Vortex__DOT__vx_decode__DOT__genblk2__BRA__7__KET____DOT__real_wspawn)) 
		  | (1U < (IData)(vlSymsp->TOP__Vortex__DOT__vx_decode__DOT__genblk2__BRA__7__KET____DOT__VX_Context_one.__PVT__wspawn_state_stall)))) 
	      << 7U));
    vlTOPp->Vortex__DOT__vx_fetch__DOT__warp_glob_pc[0U] 
	= vlTOPp->Vortex__DOT__vx_fetch__DOT__genblk2__BRA__0__KET____DOT__VX_Warp__DOT__temp_PC;
    vlTOPp->Vortex__DOT__vx_fetch__DOT__warp_glob_pc[1U] 
	= vlTOPp->Vortex__DOT__vx_fetch__DOT__genblk2__BRA__1__KET____DOT__VX_Warp__DOT__temp_PC;
    vlTOPp->Vortex__DOT__vx_fetch__DOT__warp_glob_pc[2U] 
	= vlTOPp->Vortex__DOT__vx_fetch__DOT__genblk2__BRA__2__KET____DOT__VX_Warp__DOT__temp_PC;
    vlTOPp->Vortex__DOT__vx_fetch__DOT__warp_glob_pc[3U] 
	= vlTOPp->Vortex__DOT__vx_fetch__DOT__genblk2__BRA__3__KET____DOT__VX_Warp__DOT__temp_PC;
    vlTOPp->Vortex__DOT__vx_fetch__DOT__warp_glob_pc[4U] 
	= vlTOPp->Vortex__DOT__vx_fetch__DOT__genblk2__BRA__4__KET____DOT__VX_Warp__DOT__temp_PC;
    vlTOPp->Vortex__DOT__vx_fetch__DOT__warp_glob_pc[5U] 
	= vlTOPp->Vortex__DOT__vx_fetch__DOT__genblk2__BRA__5__KET____DOT__VX_Warp__DOT__temp_PC;
    vlTOPp->Vortex__DOT__vx_fetch__DOT__warp_glob_pc[6U] 
	= vlTOPp->Vortex__DOT__vx_fetch__DOT__genblk2__BRA__6__KET____DOT__VX_Warp__DOT__temp_PC;
    vlTOPp->Vortex__DOT__vx_fetch__DOT__warp_glob_pc[7U] 
	= vlTOPp->Vortex__DOT__vx_fetch__DOT__genblk2__BRA__7__KET____DOT__VX_Warp__DOT__temp_PC;
    vlSymsp->TOP__Vortex__DOT__VX_exe_mem_req.alu_result[0U] 
	= vlTOPp->Vortex__DOT__vx_execute__DOT____Vcellout__genblk1__BRA__0__KET____DOT__vx_alu__out_alu_result;
    vlSymsp->TOP__Vortex__DOT__VX_exe_mem_req.alu_result[1U] 
	= vlTOPp->Vortex__DOT__vx_execute__DOT____Vcellout__genblk1__BRA__1__KET____DOT__vx_alu__out_alu_result;
    vlSymsp->TOP__Vortex__DOT__VX_exe_mem_req.alu_result[2U] 
	= vlTOPp->Vortex__DOT__vx_execute__DOT____Vcellout__genblk1__BRA__2__KET____DOT__vx_alu__out_alu_result;
    vlSymsp->TOP__Vortex__DOT__VX_exe_mem_req.alu_result[3U] 
	= vlTOPp->Vortex__DOT__vx_execute__DOT____Vcellout__genblk1__BRA__3__KET____DOT__vx_alu__out_alu_result;
    vlTOPp->Vortex__DOT__vx_forwarding__DOT__src1_wb_fwd 
	= (((((((0x1fU & ((vlTOPp->Vortex__DOT__vx_f_d_reg__DOT__f_d_reg__DOT__value[2U] 
			   << 9U) | (vlTOPp->Vortex__DOT__vx_f_d_reg__DOT__f_d_reg__DOT__value[1U] 
				     >> 0x17U))) == 
		(0x1fU & ((vlTOPp->Vortex__DOT__vx_m_w_reg__DOT__m_w_reg__DOT__value[2U] 
			   << 0xcU) | (vlTOPp->Vortex__DOT__vx_m_w_reg__DOT__m_w_reg__DOT__value[1U] 
				       >> 0x14U)))) 
	       & (0U != (0x1fU & ((vlTOPp->Vortex__DOT__vx_f_d_reg__DOT__f_d_reg__DOT__value[2U] 
				   << 9U) | (vlTOPp->Vortex__DOT__vx_f_d_reg__DOT__f_d_reg__DOT__value[1U] 
					     >> 0x17U))))) 
	      & (0U != (3U & ((vlTOPp->Vortex__DOT__vx_m_w_reg__DOT__m_w_reg__DOT__value[2U] 
			       << 0xeU) | (vlTOPp->Vortex__DOT__vx_m_w_reg__DOT__m_w_reg__DOT__value[1U] 
					   >> 0x12U))))) 
	     & ((0xfU & vlTOPp->Vortex__DOT__vx_m_w_reg__DOT__m_w_reg__DOT__value[0U]) 
		== (0xfU & ((vlTOPp->Vortex__DOT__vx_f_d_reg__DOT__f_d_reg__DOT__value[1U] 
			     << 0x1cU) | (vlTOPp->Vortex__DOT__vx_f_d_reg__DOT__f_d_reg__DOT__value[0U] 
					  >> 4U))))) 
	    & (~ (IData)(vlTOPp->Vortex__DOT__vx_forwarding__DOT__src1_exe_fwd))) 
	   & (~ (IData)(vlTOPp->Vortex__DOT__vx_forwarding__DOT__src1_mem_fwd)));
    vlTOPp->Vortex__DOT__forwarding_fwd_stall = ((((IData)(vlTOPp->Vortex__DOT__vx_forwarding__DOT__src1_exe_fwd) 
						   | (IData)(vlTOPp->Vortex__DOT__vx_forwarding__DOT__src2_exe_fwd)) 
						  & (2U 
						     == (IData)(vlSymsp->TOP__Vortex__DOT__VX_exe_mem_req.wb))) 
						 | (((IData)(vlTOPp->Vortex__DOT__vx_forwarding__DOT__src1_mem_fwd) 
						     | (IData)(vlTOPp->Vortex__DOT__vx_forwarding__DOT__src2_mem_fwd)) 
						    & (2U 
						       == 
						       (3U 
							& ((vlTOPp->Vortex__DOT__vx_e_m_reg__DOT__f_d_reg__DOT__value[8U] 
							    << 0xbU) 
							   | (vlTOPp->Vortex__DOT__vx_e_m_reg__DOT__f_d_reg__DOT__value[7U] 
							      >> 0x15U))))));
    vlTOPp->Vortex__DOT__vx_forwarding__DOT__src2_wb_fwd 
	= (((((((0x1fU & ((vlTOPp->Vortex__DOT__vx_f_d_reg__DOT__f_d_reg__DOT__value[2U] 
			   << 4U) | (vlTOPp->Vortex__DOT__vx_f_d_reg__DOT__f_d_reg__DOT__value[1U] 
				     >> 0x1cU))) == 
		(0x1fU & ((vlTOPp->Vortex__DOT__vx_m_w_reg__DOT__m_w_reg__DOT__value[2U] 
			   << 0xcU) | (vlTOPp->Vortex__DOT__vx_m_w_reg__DOT__m_w_reg__DOT__value[1U] 
				       >> 0x14U)))) 
	       & (0U != (0x1fU & ((vlTOPp->Vortex__DOT__vx_f_d_reg__DOT__f_d_reg__DOT__value[2U] 
				   << 4U) | (vlTOPp->Vortex__DOT__vx_f_d_reg__DOT__f_d_reg__DOT__value[1U] 
					     >> 0x1cU))))) 
	      & (0U != (3U & ((vlTOPp->Vortex__DOT__vx_m_w_reg__DOT__m_w_reg__DOT__value[2U] 
			       << 0xeU) | (vlTOPp->Vortex__DOT__vx_m_w_reg__DOT__m_w_reg__DOT__value[1U] 
					   >> 0x12U))))) 
	     & (~ (IData)(vlTOPp->Vortex__DOT__vx_forwarding__DOT__src2_exe_fwd))) 
	    & (~ (IData)(vlTOPp->Vortex__DOT__vx_forwarding__DOT__src2_mem_fwd))) 
	   & ((0xfU & vlTOPp->Vortex__DOT__vx_m_w_reg__DOT__m_w_reg__DOT__value[0U]) 
	      == (0xfU & ((vlTOPp->Vortex__DOT__vx_f_d_reg__DOT__f_d_reg__DOT__value[1U] 
			   << 0x1cU) | (vlTOPp->Vortex__DOT__vx_f_d_reg__DOT__f_d_reg__DOT__value[0U] 
					>> 4U)))));
    // ALWAYS at VX_decode.v:271
    vlTOPp->Vortex__DOT__vx_decode__DOT__temp_out_clone_stall 
	= (1U & (IData)(vlTOPp->Vortex__DOT__vx_decode__DOT__glob_clone_stall));
    vlTOPp->Vortex__DOT__vx_decode__DOT__temp_out_clone_stall 
	= (1U & ((IData)(vlTOPp->Vortex__DOT__vx_decode__DOT__temp_out_clone_stall) 
		 | ((IData)(vlTOPp->Vortex__DOT__vx_decode__DOT__glob_clone_stall) 
		    >> 1U)));
    vlTOPp->Vortex__DOT__vx_decode__DOT__temp_out_clone_stall 
	= (1U & ((IData)(vlTOPp->Vortex__DOT__vx_decode__DOT__temp_out_clone_stall) 
		 | ((IData)(vlTOPp->Vortex__DOT__vx_decode__DOT__glob_clone_stall) 
		    >> 2U)));
    vlTOPp->Vortex__DOT__vx_decode__DOT__temp_out_clone_stall 
	= (1U & ((IData)(vlTOPp->Vortex__DOT__vx_decode__DOT__temp_out_clone_stall) 
		 | ((IData)(vlTOPp->Vortex__DOT__vx_decode__DOT__glob_clone_stall) 
		    >> 3U)));
    vlTOPp->Vortex__DOT__vx_decode__DOT__temp_out_clone_stall 
	= (1U & ((IData)(vlTOPp->Vortex__DOT__vx_decode__DOT__temp_out_clone_stall) 
		 | ((IData)(vlTOPp->Vortex__DOT__vx_decode__DOT__glob_clone_stall) 
		    >> 4U)));
    vlTOPp->Vortex__DOT__vx_decode__DOT__temp_out_clone_stall 
	= (1U & ((IData)(vlTOPp->Vortex__DOT__vx_decode__DOT__temp_out_clone_stall) 
		 | ((IData)(vlTOPp->Vortex__DOT__vx_decode__DOT__glob_clone_stall) 
		    >> 5U)));
    vlTOPp->Vortex__DOT__vx_decode__DOT__temp_out_clone_stall 
	= (1U & ((IData)(vlTOPp->Vortex__DOT__vx_decode__DOT__temp_out_clone_stall) 
		 | ((IData)(vlTOPp->Vortex__DOT__vx_decode__DOT__glob_clone_stall) 
		    >> 6U)));
    vlTOPp->Vortex__DOT__vx_decode__DOT__temp_out_clone_stall 
	= (1U & ((IData)(vlTOPp->Vortex__DOT__vx_decode__DOT__temp_out_clone_stall) 
		 | ((IData)(vlTOPp->Vortex__DOT__vx_decode__DOT__glob_clone_stall) 
		    >> 7U)));
    // ALWAYS at VX_fetch.v:177
    if ((0U == (IData)(vlTOPp->Vortex__DOT__vx_fetch__DOT__warp_num))) {
	vlTOPp->Vortex__DOT__vx_fetch__DOT__out_PC_var 
	    = vlTOPp->Vortex__DOT__vx_fetch__DOT__warp_glob_pc
	    [0U];
    }
    if ((1U == (IData)(vlTOPp->Vortex__DOT__vx_fetch__DOT__warp_num))) {
	vlTOPp->Vortex__DOT__vx_fetch__DOT__out_PC_var 
	    = vlTOPp->Vortex__DOT__vx_fetch__DOT__warp_glob_pc
	    [1U];
    }
    if ((2U == (IData)(vlTOPp->Vortex__DOT__vx_fetch__DOT__warp_num))) {
	vlTOPp->Vortex__DOT__vx_fetch__DOT__out_PC_var 
	    = vlTOPp->Vortex__DOT__vx_fetch__DOT__warp_glob_pc
	    [2U];
    }
    if ((3U == (IData)(vlTOPp->Vortex__DOT__vx_fetch__DOT__warp_num))) {
	vlTOPp->Vortex__DOT__vx_fetch__DOT__out_PC_var 
	    = vlTOPp->Vortex__DOT__vx_fetch__DOT__warp_glob_pc
	    [3U];
    }
    if ((4U == (IData)(vlTOPp->Vortex__DOT__vx_fetch__DOT__warp_num))) {
	vlTOPp->Vortex__DOT__vx_fetch__DOT__out_PC_var 
	    = vlTOPp->Vortex__DOT__vx_fetch__DOT__warp_glob_pc
	    [4U];
    }
    if ((5U == (IData)(vlTOPp->Vortex__DOT__vx_fetch__DOT__warp_num))) {
	vlTOPp->Vortex__DOT__vx_fetch__DOT__out_PC_var 
	    = vlTOPp->Vortex__DOT__vx_fetch__DOT__warp_glob_pc
	    [5U];
    }
    if ((6U == (IData)(vlTOPp->Vortex__DOT__vx_fetch__DOT__warp_num))) {
	vlTOPp->Vortex__DOT__vx_fetch__DOT__out_PC_var 
	    = vlTOPp->Vortex__DOT__vx_fetch__DOT__warp_glob_pc
	    [6U];
    }
    if ((7U == (IData)(vlTOPp->Vortex__DOT__vx_fetch__DOT__warp_num))) {
	vlTOPp->Vortex__DOT__vx_fetch__DOT__out_PC_var 
	    = vlTOPp->Vortex__DOT__vx_fetch__DOT__warp_glob_pc
	    [7U];
    }
    __Vtemp19[0xdU] = ((0xfff80000U & (((0xdU == (0x1fU 
						  & ((vlTOPp->Vortex__DOT__vx_d_e_reg__DOT__d_e_reg__DOT__value[6U] 
						      << 0x17U) 
						     | (vlTOPp->Vortex__DOT__vx_d_e_reg__DOT__d_e_reg__DOT__value[5U] 
							>> 9U))))
					 ? ((vlTOPp->Vortex__DOT__vx_d_e_reg__DOT__d_e_reg__DOT__value[0xeU] 
					     << 3U) 
					    | (vlTOPp->Vortex__DOT__vx_d_e_reg__DOT__d_e_reg__DOT__value[0xdU] 
					       >> 0x1dU))
					 : ((0xeU == 
					     (0x1fU 
					      & ((vlTOPp->Vortex__DOT__vx_d_e_reg__DOT__d_e_reg__DOT__value[6U] 
						  << 0x17U) 
						 | (vlTOPp->Vortex__DOT__vx_d_e_reg__DOT__d_e_reg__DOT__value[5U] 
						    >> 9U))))
					     ? (vlTOPp->Vortex__DOT__csr_decode_csr_data 
						| ((vlTOPp->Vortex__DOT__vx_d_e_reg__DOT__d_e_reg__DOT__value[0xeU] 
						    << 3U) 
						   | (vlTOPp->Vortex__DOT__vx_d_e_reg__DOT__d_e_reg__DOT__value[0xdU] 
						      >> 0x1dU)))
					     : ((0xfU 
						 == 
						 (0x1fU 
						  & ((vlTOPp->Vortex__DOT__vx_d_e_reg__DOT__d_e_reg__DOT__value[6U] 
						      << 0x17U) 
						     | (vlTOPp->Vortex__DOT__vx_d_e_reg__DOT__d_e_reg__DOT__value[5U] 
							>> 9U))))
						 ? 
						(vlTOPp->Vortex__DOT__csr_decode_csr_data 
						 & ((IData)(0xffffffffU) 
						    - 
						    ((vlTOPp->Vortex__DOT__vx_d_e_reg__DOT__d_e_reg__DOT__value[0xeU] 
						      << 3U) 
						     | (vlTOPp->Vortex__DOT__vx_d_e_reg__DOT__d_e_reg__DOT__value[0xdU] 
							>> 0x1dU))))
						 : 0xdeadbeefU))) 
				       << 0x13U)) | 
		       ((0x40000U & (vlTOPp->Vortex__DOT__vx_d_e_reg__DOT__d_e_reg__DOT__value[2U] 
				     << 0xaU)) | (0x3ffffU 
						  & ((((vlTOPp->Vortex__DOT__vx_d_e_reg__DOT__d_e_reg__DOT__value[0xaU] 
							<< 0x12U) 
						       | (vlTOPp->Vortex__DOT__vx_d_e_reg__DOT__d_e_reg__DOT__value[9U] 
							  >> 0xeU)) 
						      + 
						      ((vlTOPp->Vortex__DOT__vx_d_e_reg__DOT__d_e_reg__DOT__value[2U] 
							<< 0x18U) 
						       | (vlTOPp->Vortex__DOT__vx_d_e_reg__DOT__d_e_reg__DOT__value[1U] 
							  >> 8U))) 
						     >> 0xeU))));
    __Vtemp19[0xeU] = (0x7ffffU & (((0xdU == (0x1fU 
					      & ((vlTOPp->Vortex__DOT__vx_d_e_reg__DOT__d_e_reg__DOT__value[6U] 
						  << 0x17U) 
						 | (vlTOPp->Vortex__DOT__vx_d_e_reg__DOT__d_e_reg__DOT__value[5U] 
						    >> 9U))))
				     ? ((vlTOPp->Vortex__DOT__vx_d_e_reg__DOT__d_e_reg__DOT__value[0xeU] 
					 << 3U) | (
						   vlTOPp->Vortex__DOT__vx_d_e_reg__DOT__d_e_reg__DOT__value[0xdU] 
						   >> 0x1dU))
				     : ((0xeU == (0x1fU 
						  & ((vlTOPp->Vortex__DOT__vx_d_e_reg__DOT__d_e_reg__DOT__value[6U] 
						      << 0x17U) 
						     | (vlTOPp->Vortex__DOT__vx_d_e_reg__DOT__d_e_reg__DOT__value[5U] 
							>> 9U))))
					 ? (vlTOPp->Vortex__DOT__csr_decode_csr_data 
					    | ((vlTOPp->Vortex__DOT__vx_d_e_reg__DOT__d_e_reg__DOT__value[0xeU] 
						<< 3U) 
					       | (vlTOPp->Vortex__DOT__vx_d_e_reg__DOT__d_e_reg__DOT__value[0xdU] 
						  >> 0x1dU)))
					 : ((0xfU == 
					     (0x1fU 
					      & ((vlTOPp->Vortex__DOT__vx_d_e_reg__DOT__d_e_reg__DOT__value[6U] 
						  << 0x17U) 
						 | (vlTOPp->Vortex__DOT__vx_d_e_reg__DOT__d_e_reg__DOT__value[5U] 
						    >> 9U))))
					     ? (vlTOPp->Vortex__DOT__csr_decode_csr_data 
						& ((IData)(0xffffffffU) 
						   - 
						   ((vlTOPp->Vortex__DOT__vx_d_e_reg__DOT__d_e_reg__DOT__value[0xeU] 
						     << 3U) 
						    | (vlTOPp->Vortex__DOT__vx_d_e_reg__DOT__d_e_reg__DOT__value[0xdU] 
						       >> 0x1dU))))
					     : 0xdeadbeefU))) 
				   >> 0xdU));
    __Vtemp28[7U] = ((0xffff0000U & ((0x80000000U & 
				      (vlTOPp->Vortex__DOT__vx_d_e_reg__DOT__d_e_reg__DOT__value[4U] 
				       << 0x1cU)) | 
				     ((0x70000000U 
				       & (vlTOPp->Vortex__DOT__vx_d_e_reg__DOT__d_e_reg__DOT__value[4U] 
					  << 0x1cU)) 
				      | ((0xf800000U 
					  & ((vlTOPp->Vortex__DOT__vx_d_e_reg__DOT__d_e_reg__DOT__value[0xeU] 
					      << 0x1fU) 
					     | (0x7f800000U 
						& (vlTOPp->Vortex__DOT__vx_d_e_reg__DOT__d_e_reg__DOT__value[0xdU] 
						   >> 1U)))) 
					 | (((IData)(vlSymsp->TOP__Vortex__DOT__VX_exe_mem_req.wb) 
					     << 0x15U) 
					    | (0x1f0000U 
					       & ((vlTOPp->Vortex__DOT__vx_d_e_reg__DOT__d_e_reg__DOT__value[0xeU] 
						   << 0x1dU) 
						  | (0x1fff0000U 
						     & (vlTOPp->Vortex__DOT__vx_d_e_reg__DOT__d_e_reg__DOT__value[0xdU] 
							>> 3U))))))))) 
		     | ((0xf800U & ((vlTOPp->Vortex__DOT__vx_d_e_reg__DOT__d_e_reg__DOT__value[0xeU] 
				     << 0x1dU) | (0x1ffff800U 
						  & (vlTOPp->Vortex__DOT__vx_d_e_reg__DOT__d_e_reg__DOT__value[0xdU] 
						     >> 3U)))) 
			| (0x7ffU & (vlTOPp->Vortex__DOT__vx_d_e_reg__DOT__d_e_reg__DOT__value[9U] 
				     >> 3U))));
    __Vtemp28[8U] = ((0xffffU & ((0xfffcU & (vlSymsp->TOP__Vortex__DOT__VX_exe_mem_req.alu_result[0U] 
					     << 2U)) 
				 | ((3U & (vlTOPp->Vortex__DOT__vx_d_e_reg__DOT__d_e_reg__DOT__value[4U] 
					   >> 4U)) 
				    | (0xffffU & ((IData)(vlSymsp->TOP__Vortex__DOT__VX_exe_mem_req.wb) 
						  >> 0xbU))))) 
		     | (0xffff0000U & (vlSymsp->TOP__Vortex__DOT__VX_exe_mem_req.alu_result[0U] 
				       << 2U)));
    vlTOPp->Vortex__DOT__vx_e_m_reg__DOT____Vcellinp__f_d_reg__in[0U] 
	= ((0xfffff800U & (vlTOPp->Vortex__DOT__vx_d_e_reg__DOT__d_e_reg__DOT__value[4U] 
			   << 5U)) | ((0x700U & ((vlTOPp->Vortex__DOT__vx_d_e_reg__DOT__d_e_reg__DOT__value[4U] 
						  << 0xbU) 
						 | (0x700U 
						    & (vlTOPp->Vortex__DOT__vx_d_e_reg__DOT__d_e_reg__DOT__value[3U] 
						       >> 0x15U)))) 
				      | (0xffU & vlTOPp->Vortex__DOT__vx_d_e_reg__DOT__d_e_reg__DOT__value[0U])));
    vlTOPp->Vortex__DOT__vx_e_m_reg__DOT____Vcellinp__f_d_reg__in[1U] 
	= ((0x7ffU & ((0x7e0U & (vlTOPp->Vortex__DOT__vx_d_e_reg__DOT__d_e_reg__DOT__value[5U] 
				 << 5U)) | (vlTOPp->Vortex__DOT__vx_d_e_reg__DOT__d_e_reg__DOT__value[4U] 
					    >> 0x1bU))) 
	   | (0xfffff800U & (vlTOPp->Vortex__DOT__vx_d_e_reg__DOT__d_e_reg__DOT__value[2U] 
			     << 2U)));
    vlTOPp->Vortex__DOT__vx_e_m_reg__DOT____Vcellinp__f_d_reg__in[2U] 
	= ((0x7ffU & ((0x7fcU & (vlTOPp->Vortex__DOT__vx_d_e_reg__DOT__d_e_reg__DOT__value[3U] 
				 << 2U)) | (vlTOPp->Vortex__DOT__vx_d_e_reg__DOT__d_e_reg__DOT__value[2U] 
					    >> 0x1eU))) 
	   | (0xfffff800U & (vlTOPp->Vortex__DOT__vx_d_e_reg__DOT__d_e_reg__DOT__value[0U] 
			     << 3U)));
    vlTOPp->Vortex__DOT__vx_e_m_reg__DOT____Vcellinp__f_d_reg__in[3U] 
	= ((0x7ffU & ((0x7f8U & (vlTOPp->Vortex__DOT__vx_d_e_reg__DOT__d_e_reg__DOT__value[1U] 
				 << 3U)) | (vlTOPp->Vortex__DOT__vx_d_e_reg__DOT__d_e_reg__DOT__value[0U] 
					    >> 0x1dU))) 
	   | (0xfffff800U & ((vlTOPp->Vortex__DOT__vx_d_e_reg__DOT__d_e_reg__DOT__value[6U] 
			      << 0x1dU) | (0x1ffff800U 
					   & (vlTOPp->Vortex__DOT__vx_d_e_reg__DOT__d_e_reg__DOT__value[5U] 
					      >> 3U)))));
    vlTOPp->Vortex__DOT__vx_e_m_reg__DOT____Vcellinp__f_d_reg__in[4U] 
	= ((0x7ffU & (vlTOPp->Vortex__DOT__vx_d_e_reg__DOT__d_e_reg__DOT__value[6U] 
		      >> 3U)) | (0xfffff800U & ((vlTOPp->Vortex__DOT__vx_d_e_reg__DOT__d_e_reg__DOT__value[7U] 
						 << 0x1dU) 
						| (0x1ffff800U 
						   & (vlTOPp->Vortex__DOT__vx_d_e_reg__DOT__d_e_reg__DOT__value[6U] 
						      >> 3U)))));
    vlTOPp->Vortex__DOT__vx_e_m_reg__DOT____Vcellinp__f_d_reg__in[5U] 
	= ((0x7ffU & (vlTOPp->Vortex__DOT__vx_d_e_reg__DOT__d_e_reg__DOT__value[7U] 
		      >> 3U)) | (0xfffff800U & ((vlTOPp->Vortex__DOT__vx_d_e_reg__DOT__d_e_reg__DOT__value[8U] 
						 << 0x1dU) 
						| (0x1ffff800U 
						   & (vlTOPp->Vortex__DOT__vx_d_e_reg__DOT__d_e_reg__DOT__value[7U] 
						      >> 3U)))));
    vlTOPp->Vortex__DOT__vx_e_m_reg__DOT____Vcellinp__f_d_reg__in[6U] 
	= ((0x7ffU & (vlTOPp->Vortex__DOT__vx_d_e_reg__DOT__d_e_reg__DOT__value[8U] 
		      >> 3U)) | (0xfffff800U & ((vlTOPp->Vortex__DOT__vx_d_e_reg__DOT__d_e_reg__DOT__value[9U] 
						 << 0x1dU) 
						| (0x1ffff800U 
						   & (vlTOPp->Vortex__DOT__vx_d_e_reg__DOT__d_e_reg__DOT__value[8U] 
						      >> 3U)))));
    vlTOPp->Vortex__DOT__vx_e_m_reg__DOT____Vcellinp__f_d_reg__in[7U] 
	= __Vtemp28[7U];
    vlTOPp->Vortex__DOT__vx_e_m_reg__DOT____Vcellinp__f_d_reg__in[8U] 
	= __Vtemp28[8U];
    vlTOPp->Vortex__DOT__vx_e_m_reg__DOT____Vcellinp__f_d_reg__in[9U] 
	= ((0xffffU & ((3U & (vlSymsp->TOP__Vortex__DOT__VX_exe_mem_req.alu_result[0U] 
			      >> 0x1eU)) | (0xfffcU 
					    & (vlSymsp->TOP__Vortex__DOT__VX_exe_mem_req.alu_result[1U] 
					       << 2U)))) 
	   | (0xffff0000U & (vlSymsp->TOP__Vortex__DOT__VX_exe_mem_req.alu_result[1U] 
			     << 2U)));
    vlTOPp->Vortex__DOT__vx_e_m_reg__DOT____Vcellinp__f_d_reg__in[0xaU] 
	= ((0xffffU & ((3U & (vlSymsp->TOP__Vortex__DOT__VX_exe_mem_req.alu_result[1U] 
			      >> 0x1eU)) | (0xfffcU 
					    & (vlSymsp->TOP__Vortex__DOT__VX_exe_mem_req.alu_result[2U] 
					       << 2U)))) 
	   | (0xffff0000U & (vlSymsp->TOP__Vortex__DOT__VX_exe_mem_req.alu_result[2U] 
			     << 2U)));
    vlTOPp->Vortex__DOT__vx_e_m_reg__DOT____Vcellinp__f_d_reg__in[0xbU] 
	= ((0xffffU & ((3U & (vlSymsp->TOP__Vortex__DOT__VX_exe_mem_req.alu_result[2U] 
			      >> 0x1eU)) | (0xfffcU 
					    & (vlSymsp->TOP__Vortex__DOT__VX_exe_mem_req.alu_result[3U] 
					       << 2U)))) 
	   | (0xffff0000U & (vlSymsp->TOP__Vortex__DOT__VX_exe_mem_req.alu_result[3U] 
			     << 2U)));
    vlTOPp->Vortex__DOT__vx_e_m_reg__DOT____Vcellinp__f_d_reg__in[0xcU] 
	= ((0xffffU & ((3U & (vlSymsp->TOP__Vortex__DOT__VX_exe_mem_req.alu_result[3U] 
			      >> 0x1eU)) | (0xfffcU 
					    & (vlTOPp->Vortex__DOT____Vcellout__vx_execute__out_b_reg_data[0U] 
					       << 2U)))) 
	   | (0xffff0000U & (vlTOPp->Vortex__DOT____Vcellout__vx_execute__out_b_reg_data[0U] 
			     << 2U)));
    vlTOPp->Vortex__DOT__vx_e_m_reg__DOT____Vcellinp__f_d_reg__in[0xdU] 
	= ((0xffffU & ((3U & (vlTOPp->Vortex__DOT____Vcellout__vx_execute__out_b_reg_data[0U] 
			      >> 0x1eU)) | (0xfffcU 
					    & (vlTOPp->Vortex__DOT____Vcellout__vx_execute__out_b_reg_data[1U] 
					       << 2U)))) 
	   | (0xffff0000U & (vlTOPp->Vortex__DOT____Vcellout__vx_execute__out_b_reg_data[1U] 
			     << 2U)));
    vlTOPp->Vortex__DOT__vx_e_m_reg__DOT____Vcellinp__f_d_reg__in[0xeU] 
	= ((0xffffU & ((3U & (vlTOPp->Vortex__DOT____Vcellout__vx_execute__out_b_reg_data[1U] 
			      >> 0x1eU)) | (0xfffcU 
					    & (vlTOPp->Vortex__DOT____Vcellout__vx_execute__out_b_reg_data[2U] 
					       << 2U)))) 
	   | (0xffff0000U & (vlTOPp->Vortex__DOT____Vcellout__vx_execute__out_b_reg_data[2U] 
			     << 2U)));
    vlTOPp->Vortex__DOT__vx_e_m_reg__DOT____Vcellinp__f_d_reg__in[0xfU] 
	= ((0xffffU & ((3U & (vlTOPp->Vortex__DOT____Vcellout__vx_execute__out_b_reg_data[2U] 
			      >> 0x1eU)) | (0xfffcU 
					    & (vlTOPp->Vortex__DOT____Vcellout__vx_execute__out_b_reg_data[3U] 
					       << 2U)))) 
	   | (0xffff0000U & (vlTOPp->Vortex__DOT____Vcellout__vx_execute__out_b_reg_data[3U] 
			     << 2U)));
    vlTOPp->Vortex__DOT__vx_e_m_reg__DOT____Vcellinp__f_d_reg__in[0x10U] 
	= ((0xffffU & ((3U & (vlTOPp->Vortex__DOT____Vcellout__vx_execute__out_b_reg_data[3U] 
			      >> 0x1eU)) | (0xfffcU 
					    & (vlTOPp->Vortex__DOT____Vcellout__vx_execute__out_a_reg_data[0U] 
					       << 2U)))) 
	   | (0xffff0000U & (vlTOPp->Vortex__DOT____Vcellout__vx_execute__out_a_reg_data[0U] 
			     << 2U)));
    vlTOPp->Vortex__DOT__vx_e_m_reg__DOT____Vcellinp__f_d_reg__in[0x11U] 
	= ((0xffffU & ((3U & (vlTOPp->Vortex__DOT____Vcellout__vx_execute__out_a_reg_data[0U] 
			      >> 0x1eU)) | (0xfffcU 
					    & (vlTOPp->Vortex__DOT____Vcellout__vx_execute__out_a_reg_data[1U] 
					       << 2U)))) 
	   | (0xffff0000U & (vlTOPp->Vortex__DOT____Vcellout__vx_execute__out_a_reg_data[1U] 
			     << 2U)));
    vlTOPp->Vortex__DOT__vx_e_m_reg__DOT____Vcellinp__f_d_reg__in[0x12U] 
	= ((0xffffU & ((3U & (vlTOPp->Vortex__DOT____Vcellout__vx_execute__out_a_reg_data[1U] 
			      >> 0x1eU)) | (0xfffcU 
					    & (vlTOPp->Vortex__DOT____Vcellout__vx_execute__out_a_reg_data[2U] 
					       << 2U)))) 
	   | (0xffff0000U & (vlTOPp->Vortex__DOT____Vcellout__vx_execute__out_a_reg_data[2U] 
			     << 2U)));
    vlTOPp->Vortex__DOT__vx_e_m_reg__DOT____Vcellinp__f_d_reg__in[0x13U] 
	= ((0xffffU & ((3U & (vlTOPp->Vortex__DOT____Vcellout__vx_execute__out_a_reg_data[2U] 
			      >> 0x1eU)) | (0xfffcU 
					    & (vlTOPp->Vortex__DOT____Vcellout__vx_execute__out_a_reg_data[3U] 
					       << 2U)))) 
	   | (0xffff0000U & (vlTOPp->Vortex__DOT____Vcellout__vx_execute__out_a_reg_data[3U] 
			     << 2U)));
    vlTOPp->Vortex__DOT__vx_e_m_reg__DOT____Vcellinp__f_d_reg__in[0x14U] 
	= ((0xffffU & ((3U & (vlTOPp->Vortex__DOT____Vcellout__vx_execute__out_a_reg_data[3U] 
			      >> 0x1eU)) | (0xfffcU 
					    & ((((vlTOPp->Vortex__DOT__vx_d_e_reg__DOT__d_e_reg__DOT__value[0xaU] 
						  << 0x12U) 
						 | (vlTOPp->Vortex__DOT__vx_d_e_reg__DOT__d_e_reg__DOT__value[9U] 
						    >> 0xeU)) 
						+ (
						   (vlTOPp->Vortex__DOT__vx_d_e_reg__DOT__d_e_reg__DOT__value[2U] 
						    << 0x18U) 
						   | (vlTOPp->Vortex__DOT__vx_d_e_reg__DOT__d_e_reg__DOT__value[1U] 
						      >> 8U))) 
					       << 2U)))) 
	   | (0xffff0000U & (__Vtemp19[0xdU] << 0x10U)));
    vlTOPp->Vortex__DOT__vx_e_m_reg__DOT____Vcellinp__f_d_reg__in[0x15U] 
	= ((0xffffU & (__Vtemp19[0xdU] >> 0x10U)) | 
	   (0xffff0000U & (__Vtemp19[0xeU] << 0x10U)));
    vlTOPp->Vortex__DOT__vx_e_m_reg__DOT____Vcellinp__f_d_reg__in[0x16U] 
	= (0xffffU & ((0xfff0U & ((0xffc0U & (vlTOPp->Vortex__DOT__vx_d_e_reg__DOT__d_e_reg__DOT__value[0xfU] 
					      << 6U)) 
				  | (0x30U & (vlTOPp->Vortex__DOT__vx_d_e_reg__DOT__d_e_reg__DOT__value[0xeU] 
					      >> 0x1aU)))) 
		      | ((8U & (vlTOPp->Vortex__DOT__vx_d_e_reg__DOT__d_e_reg__DOT__value[0xeU] 
				>> 0x1aU)) | (__Vtemp19[0xeU] 
					      >> 0x10U))));
    vlTOPp->Vortex__DOT__forwarding_src1_fwd = (((IData)(vlTOPp->Vortex__DOT__vx_forwarding__DOT__src1_exe_fwd) 
						 | (IData)(vlTOPp->Vortex__DOT__vx_forwarding__DOT__src1_mem_fwd)) 
						| (IData)(vlTOPp->Vortex__DOT__vx_forwarding__DOT__src1_wb_fwd));
    __Vtemp43[0U] = ((IData)(vlTOPp->Vortex__DOT__vx_forwarding__DOT__src1_mem_fwd)
		      ? ((3U == (3U & ((vlTOPp->Vortex__DOT__vx_e_m_reg__DOT__f_d_reg__DOT__value[8U] 
					<< 0xbU) | 
				       (vlTOPp->Vortex__DOT__vx_e_m_reg__DOT__f_d_reg__DOT__value[7U] 
					>> 0x15U))))
			  ? vlTOPp->Vortex__DOT__vx_forwarding__DOT__use_memory_PC_next[0U]
			  : ((2U == (3U & ((vlTOPp->Vortex__DOT__vx_e_m_reg__DOT__f_d_reg__DOT__value[8U] 
					    << 0xbU) 
					   | (vlTOPp->Vortex__DOT__vx_e_m_reg__DOT__f_d_reg__DOT__value[7U] 
					      >> 0x15U))))
			      ? vlSymsp->TOP__Vortex__DOT__VX_mem_wb.mem_result[0U]
			      : ((vlTOPp->Vortex__DOT__vx_e_m_reg__DOT__f_d_reg__DOT__value[9U] 
				  << 0x1eU) | (vlTOPp->Vortex__DOT__vx_e_m_reg__DOT__f_d_reg__DOT__value[8U] 
					       >> 2U))))
		      : ((IData)(vlTOPp->Vortex__DOT__vx_forwarding__DOT__src1_wb_fwd)
			  ? ((3U == (3U & ((vlTOPp->Vortex__DOT__vx_m_w_reg__DOT__m_w_reg__DOT__value[2U] 
					    << 0xeU) 
					   | (vlTOPp->Vortex__DOT__vx_m_w_reg__DOT__m_w_reg__DOT__value[1U] 
					      >> 0x12U))))
			      ? vlTOPp->Vortex__DOT__vx_forwarding__DOT__use_writeback_PC_next[0U]
			      : ((2U == (3U & ((vlTOPp->Vortex__DOT__vx_m_w_reg__DOT__m_w_reg__DOT__value[2U] 
						<< 0xeU) 
					       | (vlTOPp->Vortex__DOT__vx_m_w_reg__DOT__m_w_reg__DOT__value[1U] 
						  >> 0x12U))))
				  ? ((vlTOPp->Vortex__DOT__vx_m_w_reg__DOT__m_w_reg__DOT__value[2U] 
				      << 7U) | (vlTOPp->Vortex__DOT__vx_m_w_reg__DOT__m_w_reg__DOT__value[1U] 
						>> 0x19U))
				  : ((vlTOPp->Vortex__DOT__vx_m_w_reg__DOT__m_w_reg__DOT__value[6U] 
				      << 7U) | (vlTOPp->Vortex__DOT__vx_m_w_reg__DOT__m_w_reg__DOT__value[5U] 
						>> 0x19U))))
			  : vlSymsp->TOP__Vortex__DOT__VX_exe_mem_req.alu_result[0U]));
    __Vtemp43[1U] = ((IData)(vlTOPp->Vortex__DOT__vx_forwarding__DOT__src1_mem_fwd)
		      ? ((3U == (3U & ((vlTOPp->Vortex__DOT__vx_e_m_reg__DOT__f_d_reg__DOT__value[8U] 
					<< 0xbU) | 
				       (vlTOPp->Vortex__DOT__vx_e_m_reg__DOT__f_d_reg__DOT__value[7U] 
					>> 0x15U))))
			  ? vlTOPp->Vortex__DOT__vx_forwarding__DOT__use_memory_PC_next[1U]
			  : ((2U == (3U & ((vlTOPp->Vortex__DOT__vx_e_m_reg__DOT__f_d_reg__DOT__value[8U] 
					    << 0xbU) 
					   | (vlTOPp->Vortex__DOT__vx_e_m_reg__DOT__f_d_reg__DOT__value[7U] 
					      >> 0x15U))))
			      ? vlSymsp->TOP__Vortex__DOT__VX_mem_wb.mem_result[1U]
			      : ((vlTOPp->Vortex__DOT__vx_e_m_reg__DOT__f_d_reg__DOT__value[0xaU] 
				  << 0x1eU) | (vlTOPp->Vortex__DOT__vx_e_m_reg__DOT__f_d_reg__DOT__value[9U] 
					       >> 2U))))
		      : ((IData)(vlTOPp->Vortex__DOT__vx_forwarding__DOT__src1_wb_fwd)
			  ? ((3U == (3U & ((vlTOPp->Vortex__DOT__vx_m_w_reg__DOT__m_w_reg__DOT__value[2U] 
					    << 0xeU) 
					   | (vlTOPp->Vortex__DOT__vx_m_w_reg__DOT__m_w_reg__DOT__value[1U] 
					      >> 0x12U))))
			      ? vlTOPp->Vortex__DOT__vx_forwarding__DOT__use_writeback_PC_next[1U]
			      : ((2U == (3U & ((vlTOPp->Vortex__DOT__vx_m_w_reg__DOT__m_w_reg__DOT__value[2U] 
						<< 0xeU) 
					       | (vlTOPp->Vortex__DOT__vx_m_w_reg__DOT__m_w_reg__DOT__value[1U] 
						  >> 0x12U))))
				  ? ((vlTOPp->Vortex__DOT__vx_m_w_reg__DOT__m_w_reg__DOT__value[3U] 
				      << 7U) | (vlTOPp->Vortex__DOT__vx_m_w_reg__DOT__m_w_reg__DOT__value[2U] 
						>> 0x19U))
				  : ((vlTOPp->Vortex__DOT__vx_m_w_reg__DOT__m_w_reg__DOT__value[7U] 
				      << 7U) | (vlTOPp->Vortex__DOT__vx_m_w_reg__DOT__m_w_reg__DOT__value[6U] 
						>> 0x19U))))
			  : vlSymsp->TOP__Vortex__DOT__VX_exe_mem_req.alu_result[1U]));
    __Vtemp43[2U] = ((IData)(vlTOPp->Vortex__DOT__vx_forwarding__DOT__src1_mem_fwd)
		      ? ((3U == (3U & ((vlTOPp->Vortex__DOT__vx_e_m_reg__DOT__f_d_reg__DOT__value[8U] 
					<< 0xbU) | 
				       (vlTOPp->Vortex__DOT__vx_e_m_reg__DOT__f_d_reg__DOT__value[7U] 
					>> 0x15U))))
			  ? vlTOPp->Vortex__DOT__vx_forwarding__DOT__use_memory_PC_next[2U]
			  : ((2U == (3U & ((vlTOPp->Vortex__DOT__vx_e_m_reg__DOT__f_d_reg__DOT__value[8U] 
					    << 0xbU) 
					   | (vlTOPp->Vortex__DOT__vx_e_m_reg__DOT__f_d_reg__DOT__value[7U] 
					      >> 0x15U))))
			      ? vlSymsp->TOP__Vortex__DOT__VX_mem_wb.mem_result[2U]
			      : ((vlTOPp->Vortex__DOT__vx_e_m_reg__DOT__f_d_reg__DOT__value[0xbU] 
				  << 0x1eU) | (vlTOPp->Vortex__DOT__vx_e_m_reg__DOT__f_d_reg__DOT__value[0xaU] 
					       >> 2U))))
		      : ((IData)(vlTOPp->Vortex__DOT__vx_forwarding__DOT__src1_wb_fwd)
			  ? ((3U == (3U & ((vlTOPp->Vortex__DOT__vx_m_w_reg__DOT__m_w_reg__DOT__value[2U] 
					    << 0xeU) 
					   | (vlTOPp->Vortex__DOT__vx_m_w_reg__DOT__m_w_reg__DOT__value[1U] 
					      >> 0x12U))))
			      ? vlTOPp->Vortex__DOT__vx_forwarding__DOT__use_writeback_PC_next[2U]
			      : ((2U == (3U & ((vlTOPp->Vortex__DOT__vx_m_w_reg__DOT__m_w_reg__DOT__value[2U] 
						<< 0xeU) 
					       | (vlTOPp->Vortex__DOT__vx_m_w_reg__DOT__m_w_reg__DOT__value[1U] 
						  >> 0x12U))))
				  ? ((vlTOPp->Vortex__DOT__vx_m_w_reg__DOT__m_w_reg__DOT__value[4U] 
				      << 7U) | (vlTOPp->Vortex__DOT__vx_m_w_reg__DOT__m_w_reg__DOT__value[3U] 
						>> 0x19U))
				  : ((vlTOPp->Vortex__DOT__vx_m_w_reg__DOT__m_w_reg__DOT__value[8U] 
				      << 7U) | (vlTOPp->Vortex__DOT__vx_m_w_reg__DOT__m_w_reg__DOT__value[7U] 
						>> 0x19U))))
			  : vlSymsp->TOP__Vortex__DOT__VX_exe_mem_req.alu_result[2U]));
    __Vtemp43[3U] = ((IData)(vlTOPp->Vortex__DOT__vx_forwarding__DOT__src1_mem_fwd)
		      ? ((3U == (3U & ((vlTOPp->Vortex__DOT__vx_e_m_reg__DOT__f_d_reg__DOT__value[8U] 
					<< 0xbU) | 
				       (vlTOPp->Vortex__DOT__vx_e_m_reg__DOT__f_d_reg__DOT__value[7U] 
					>> 0x15U))))
			  ? vlTOPp->Vortex__DOT__vx_forwarding__DOT__use_memory_PC_next[3U]
			  : ((2U == (3U & ((vlTOPp->Vortex__DOT__vx_e_m_reg__DOT__f_d_reg__DOT__value[8U] 
					    << 0xbU) 
					   | (vlTOPp->Vortex__DOT__vx_e_m_reg__DOT__f_d_reg__DOT__value[7U] 
					      >> 0x15U))))
			      ? vlSymsp->TOP__Vortex__DOT__VX_mem_wb.mem_result[3U]
			      : ((vlTOPp->Vortex__DOT__vx_e_m_reg__DOT__f_d_reg__DOT__value[0xcU] 
				  << 0x1eU) | (vlTOPp->Vortex__DOT__vx_e_m_reg__DOT__f_d_reg__DOT__value[0xbU] 
					       >> 2U))))
		      : ((IData)(vlTOPp->Vortex__DOT__vx_forwarding__DOT__src1_wb_fwd)
			  ? ((3U == (3U & ((vlTOPp->Vortex__DOT__vx_m_w_reg__DOT__m_w_reg__DOT__value[2U] 
					    << 0xeU) 
					   | (vlTOPp->Vortex__DOT__vx_m_w_reg__DOT__m_w_reg__DOT__value[1U] 
					      >> 0x12U))))
			      ? vlTOPp->Vortex__DOT__vx_forwarding__DOT__use_writeback_PC_next[3U]
			      : ((2U == (3U & ((vlTOPp->Vortex__DOT__vx_m_w_reg__DOT__m_w_reg__DOT__value[2U] 
						<< 0xeU) 
					       | (vlTOPp->Vortex__DOT__vx_m_w_reg__DOT__m_w_reg__DOT__value[1U] 
						  >> 0x12U))))
				  ? ((vlTOPp->Vortex__DOT__vx_m_w_reg__DOT__m_w_reg__DOT__value[5U] 
				      << 7U) | (vlTOPp->Vortex__DOT__vx_m_w_reg__DOT__m_w_reg__DOT__value[4U] 
						>> 0x19U))
				  : ((vlTOPp->Vortex__DOT__vx_m_w_reg__DOT__m_w_reg__DOT__value[9U] 
				      << 7U) | (vlTOPp->Vortex__DOT__vx_m_w_reg__DOT__m_w_reg__DOT__value[8U] 
						>> 0x19U))))
			  : vlSymsp->TOP__Vortex__DOT__VX_exe_mem_req.alu_result[3U]));
    vlTOPp->Vortex__DOT____Vcellout__vx_forwarding__out_src1_fwd_data[0U] 
	= ((IData)(vlTOPp->Vortex__DOT__vx_forwarding__DOT__src1_exe_fwd)
	    ? ((3U == (IData)(vlSymsp->TOP__Vortex__DOT__VX_exe_mem_req.wb))
	        ? vlTOPp->Vortex__DOT__vx_forwarding__DOT__use_execute_PC_next[0U]
	        : vlSymsp->TOP__Vortex__DOT__VX_exe_mem_req.alu_result[0U])
	    : __Vtemp43[0U]);
    vlTOPp->Vortex__DOT____Vcellout__vx_forwarding__out_src1_fwd_data[1U] 
	= ((IData)(vlTOPp->Vortex__DOT__vx_forwarding__DOT__src1_exe_fwd)
	    ? ((3U == (IData)(vlSymsp->TOP__Vortex__DOT__VX_exe_mem_req.wb))
	        ? vlTOPp->Vortex__DOT__vx_forwarding__DOT__use_execute_PC_next[1U]
	        : vlSymsp->TOP__Vortex__DOT__VX_exe_mem_req.alu_result[1U])
	    : __Vtemp43[1U]);
    vlTOPp->Vortex__DOT____Vcellout__vx_forwarding__out_src1_fwd_data[2U] 
	= ((IData)(vlTOPp->Vortex__DOT__vx_forwarding__DOT__src1_exe_fwd)
	    ? ((3U == (IData)(vlSymsp->TOP__Vortex__DOT__VX_exe_mem_req.wb))
	        ? vlTOPp->Vortex__DOT__vx_forwarding__DOT__use_execute_PC_next[2U]
	        : vlSymsp->TOP__Vortex__DOT__VX_exe_mem_req.alu_result[2U])
	    : __Vtemp43[2U]);
    vlTOPp->Vortex__DOT____Vcellout__vx_forwarding__out_src1_fwd_data[3U] 
	= ((IData)(vlTOPp->Vortex__DOT__vx_forwarding__DOT__src1_exe_fwd)
	    ? ((3U == (IData)(vlSymsp->TOP__Vortex__DOT__VX_exe_mem_req.wb))
	        ? vlTOPp->Vortex__DOT__vx_forwarding__DOT__use_execute_PC_next[3U]
	        : vlSymsp->TOP__Vortex__DOT__VX_exe_mem_req.alu_result[3U])
	    : __Vtemp43[3U]);
    vlTOPp->Vortex__DOT__forwarding_src2_fwd = (((IData)(vlTOPp->Vortex__DOT__vx_forwarding__DOT__src2_exe_fwd) 
						 | (IData)(vlTOPp->Vortex__DOT__vx_forwarding__DOT__src2_mem_fwd)) 
						| (IData)(vlTOPp->Vortex__DOT__vx_forwarding__DOT__src2_wb_fwd));
    __Vtemp59[0U] = ((IData)(vlTOPp->Vortex__DOT__vx_forwarding__DOT__src2_mem_fwd)
		      ? ((3U == (3U & ((vlTOPp->Vortex__DOT__vx_e_m_reg__DOT__f_d_reg__DOT__value[8U] 
					<< 0xbU) | 
				       (vlTOPp->Vortex__DOT__vx_e_m_reg__DOT__f_d_reg__DOT__value[7U] 
					>> 0x15U))))
			  ? vlTOPp->Vortex__DOT__vx_forwarding__DOT__use_memory_PC_next[0U]
			  : ((2U == (3U & ((vlTOPp->Vortex__DOT__vx_e_m_reg__DOT__f_d_reg__DOT__value[8U] 
					    << 0xbU) 
					   | (vlTOPp->Vortex__DOT__vx_e_m_reg__DOT__f_d_reg__DOT__value[7U] 
					      >> 0x15U))))
			      ? vlSymsp->TOP__Vortex__DOT__VX_mem_wb.mem_result[0U]
			      : ((vlTOPp->Vortex__DOT__vx_e_m_reg__DOT__f_d_reg__DOT__value[9U] 
				  << 0x1eU) | (vlTOPp->Vortex__DOT__vx_e_m_reg__DOT__f_d_reg__DOT__value[8U] 
					       >> 2U))))
		      : ((IData)(vlTOPp->Vortex__DOT__vx_forwarding__DOT__src2_wb_fwd)
			  ? ((3U == (3U & ((vlTOPp->Vortex__DOT__vx_m_w_reg__DOT__m_w_reg__DOT__value[2U] 
					    << 0xeU) 
					   | (vlTOPp->Vortex__DOT__vx_m_w_reg__DOT__m_w_reg__DOT__value[1U] 
					      >> 0x12U))))
			      ? vlTOPp->Vortex__DOT__vx_forwarding__DOT__use_writeback_PC_next[0U]
			      : ((2U == (3U & ((vlTOPp->Vortex__DOT__vx_m_w_reg__DOT__m_w_reg__DOT__value[2U] 
						<< 0xeU) 
					       | (vlTOPp->Vortex__DOT__vx_m_w_reg__DOT__m_w_reg__DOT__value[1U] 
						  >> 0x12U))))
				  ? ((vlTOPp->Vortex__DOT__vx_m_w_reg__DOT__m_w_reg__DOT__value[2U] 
				      << 7U) | (vlTOPp->Vortex__DOT__vx_m_w_reg__DOT__m_w_reg__DOT__value[1U] 
						>> 0x19U))
				  : ((vlTOPp->Vortex__DOT__vx_m_w_reg__DOT__m_w_reg__DOT__value[6U] 
				      << 7U) | (vlTOPp->Vortex__DOT__vx_m_w_reg__DOT__m_w_reg__DOT__value[5U] 
						>> 0x19U))))
			  : vlSymsp->TOP__Vortex__DOT__VX_exe_mem_req.alu_result[0U]));
    __Vtemp59[1U] = ((IData)(vlTOPp->Vortex__DOT__vx_forwarding__DOT__src2_mem_fwd)
		      ? ((3U == (3U & ((vlTOPp->Vortex__DOT__vx_e_m_reg__DOT__f_d_reg__DOT__value[8U] 
					<< 0xbU) | 
				       (vlTOPp->Vortex__DOT__vx_e_m_reg__DOT__f_d_reg__DOT__value[7U] 
					>> 0x15U))))
			  ? vlTOPp->Vortex__DOT__vx_forwarding__DOT__use_memory_PC_next[1U]
			  : ((2U == (3U & ((vlTOPp->Vortex__DOT__vx_e_m_reg__DOT__f_d_reg__DOT__value[8U] 
					    << 0xbU) 
					   | (vlTOPp->Vortex__DOT__vx_e_m_reg__DOT__f_d_reg__DOT__value[7U] 
					      >> 0x15U))))
			      ? vlSymsp->TOP__Vortex__DOT__VX_mem_wb.mem_result[1U]
			      : ((vlTOPp->Vortex__DOT__vx_e_m_reg__DOT__f_d_reg__DOT__value[0xaU] 
				  << 0x1eU) | (vlTOPp->Vortex__DOT__vx_e_m_reg__DOT__f_d_reg__DOT__value[9U] 
					       >> 2U))))
		      : ((IData)(vlTOPp->Vortex__DOT__vx_forwarding__DOT__src2_wb_fwd)
			  ? ((3U == (3U & ((vlTOPp->Vortex__DOT__vx_m_w_reg__DOT__m_w_reg__DOT__value[2U] 
					    << 0xeU) 
					   | (vlTOPp->Vortex__DOT__vx_m_w_reg__DOT__m_w_reg__DOT__value[1U] 
					      >> 0x12U))))
			      ? vlTOPp->Vortex__DOT__vx_forwarding__DOT__use_writeback_PC_next[1U]
			      : ((2U == (3U & ((vlTOPp->Vortex__DOT__vx_m_w_reg__DOT__m_w_reg__DOT__value[2U] 
						<< 0xeU) 
					       | (vlTOPp->Vortex__DOT__vx_m_w_reg__DOT__m_w_reg__DOT__value[1U] 
						  >> 0x12U))))
				  ? ((vlTOPp->Vortex__DOT__vx_m_w_reg__DOT__m_w_reg__DOT__value[3U] 
				      << 7U) | (vlTOPp->Vortex__DOT__vx_m_w_reg__DOT__m_w_reg__DOT__value[2U] 
						>> 0x19U))
				  : ((vlTOPp->Vortex__DOT__vx_m_w_reg__DOT__m_w_reg__DOT__value[7U] 
				      << 7U) | (vlTOPp->Vortex__DOT__vx_m_w_reg__DOT__m_w_reg__DOT__value[6U] 
						>> 0x19U))))
			  : vlSymsp->TOP__Vortex__DOT__VX_exe_mem_req.alu_result[1U]));
    __Vtemp59[2U] = ((IData)(vlTOPp->Vortex__DOT__vx_forwarding__DOT__src2_mem_fwd)
		      ? ((3U == (3U & ((vlTOPp->Vortex__DOT__vx_e_m_reg__DOT__f_d_reg__DOT__value[8U] 
					<< 0xbU) | 
				       (vlTOPp->Vortex__DOT__vx_e_m_reg__DOT__f_d_reg__DOT__value[7U] 
					>> 0x15U))))
			  ? vlTOPp->Vortex__DOT__vx_forwarding__DOT__use_memory_PC_next[2U]
			  : ((2U == (3U & ((vlTOPp->Vortex__DOT__vx_e_m_reg__DOT__f_d_reg__DOT__value[8U] 
					    << 0xbU) 
					   | (vlTOPp->Vortex__DOT__vx_e_m_reg__DOT__f_d_reg__DOT__value[7U] 
					      >> 0x15U))))
			      ? vlSymsp->TOP__Vortex__DOT__VX_mem_wb.mem_result[2U]
			      : ((vlTOPp->Vortex__DOT__vx_e_m_reg__DOT__f_d_reg__DOT__value[0xbU] 
				  << 0x1eU) | (vlTOPp->Vortex__DOT__vx_e_m_reg__DOT__f_d_reg__DOT__value[0xaU] 
					       >> 2U))))
		      : ((IData)(vlTOPp->Vortex__DOT__vx_forwarding__DOT__src2_wb_fwd)
			  ? ((3U == (3U & ((vlTOPp->Vortex__DOT__vx_m_w_reg__DOT__m_w_reg__DOT__value[2U] 
					    << 0xeU) 
					   | (vlTOPp->Vortex__DOT__vx_m_w_reg__DOT__m_w_reg__DOT__value[1U] 
					      >> 0x12U))))
			      ? vlTOPp->Vortex__DOT__vx_forwarding__DOT__use_writeback_PC_next[2U]
			      : ((2U == (3U & ((vlTOPp->Vortex__DOT__vx_m_w_reg__DOT__m_w_reg__DOT__value[2U] 
						<< 0xeU) 
					       | (vlTOPp->Vortex__DOT__vx_m_w_reg__DOT__m_w_reg__DOT__value[1U] 
						  >> 0x12U))))
				  ? ((vlTOPp->Vortex__DOT__vx_m_w_reg__DOT__m_w_reg__DOT__value[4U] 
				      << 7U) | (vlTOPp->Vortex__DOT__vx_m_w_reg__DOT__m_w_reg__DOT__value[3U] 
						>> 0x19U))
				  : ((vlTOPp->Vortex__DOT__vx_m_w_reg__DOT__m_w_reg__DOT__value[8U] 
				      << 7U) | (vlTOPp->Vortex__DOT__vx_m_w_reg__DOT__m_w_reg__DOT__value[7U] 
						>> 0x19U))))
			  : vlSymsp->TOP__Vortex__DOT__VX_exe_mem_req.alu_result[2U]));
    __Vtemp59[3U] = ((IData)(vlTOPp->Vortex__DOT__vx_forwarding__DOT__src2_mem_fwd)
		      ? ((3U == (3U & ((vlTOPp->Vortex__DOT__vx_e_m_reg__DOT__f_d_reg__DOT__value[8U] 
					<< 0xbU) | 
				       (vlTOPp->Vortex__DOT__vx_e_m_reg__DOT__f_d_reg__DOT__value[7U] 
					>> 0x15U))))
			  ? vlTOPp->Vortex__DOT__vx_forwarding__DOT__use_memory_PC_next[3U]
			  : ((2U == (3U & ((vlTOPp->Vortex__DOT__vx_e_m_reg__DOT__f_d_reg__DOT__value[8U] 
					    << 0xbU) 
					   | (vlTOPp->Vortex__DOT__vx_e_m_reg__DOT__f_d_reg__DOT__value[7U] 
					      >> 0x15U))))
			      ? vlSymsp->TOP__Vortex__DOT__VX_mem_wb.mem_result[3U]
			      : ((vlTOPp->Vortex__DOT__vx_e_m_reg__DOT__f_d_reg__DOT__value[0xcU] 
				  << 0x1eU) | (vlTOPp->Vortex__DOT__vx_e_m_reg__DOT__f_d_reg__DOT__value[0xbU] 
					       >> 2U))))
		      : ((IData)(vlTOPp->Vortex__DOT__vx_forwarding__DOT__src2_wb_fwd)
			  ? ((3U == (3U & ((vlTOPp->Vortex__DOT__vx_m_w_reg__DOT__m_w_reg__DOT__value[2U] 
					    << 0xeU) 
					   | (vlTOPp->Vortex__DOT__vx_m_w_reg__DOT__m_w_reg__DOT__value[1U] 
					      >> 0x12U))))
			      ? vlTOPp->Vortex__DOT__vx_forwarding__DOT__use_writeback_PC_next[3U]
			      : ((2U == (3U & ((vlTOPp->Vortex__DOT__vx_m_w_reg__DOT__m_w_reg__DOT__value[2U] 
						<< 0xeU) 
					       | (vlTOPp->Vortex__DOT__vx_m_w_reg__DOT__m_w_reg__DOT__value[1U] 
						  >> 0x12U))))
				  ? ((vlTOPp->Vortex__DOT__vx_m_w_reg__DOT__m_w_reg__DOT__value[5U] 
				      << 7U) | (vlTOPp->Vortex__DOT__vx_m_w_reg__DOT__m_w_reg__DOT__value[4U] 
						>> 0x19U))
				  : ((vlTOPp->Vortex__DOT__vx_m_w_reg__DOT__m_w_reg__DOT__value[9U] 
				      << 7U) | (vlTOPp->Vortex__DOT__vx_m_w_reg__DOT__m_w_reg__DOT__value[8U] 
						>> 0x19U))))
			  : vlSymsp->TOP__Vortex__DOT__VX_exe_mem_req.alu_result[3U]));
    vlTOPp->Vortex__DOT____Vcellout__vx_forwarding__out_src2_fwd_data[0U] 
	= ((IData)(vlTOPp->Vortex__DOT__vx_forwarding__DOT__src2_exe_fwd)
	    ? ((3U == (IData)(vlSymsp->TOP__Vortex__DOT__VX_exe_mem_req.wb))
	        ? vlTOPp->Vortex__DOT__vx_forwarding__DOT__use_execute_PC_next[0U]
	        : vlSymsp->TOP__Vortex__DOT__VX_exe_mem_req.alu_result[0U])
	    : __Vtemp59[0U]);
    vlTOPp->Vortex__DOT____Vcellout__vx_forwarding__out_src2_fwd_data[1U] 
	= ((IData)(vlTOPp->Vortex__DOT__vx_forwarding__DOT__src2_exe_fwd)
	    ? ((3U == (IData)(vlSymsp->TOP__Vortex__DOT__VX_exe_mem_req.wb))
	        ? vlTOPp->Vortex__DOT__vx_forwarding__DOT__use_execute_PC_next[1U]
	        : vlSymsp->TOP__Vortex__DOT__VX_exe_mem_req.alu_result[1U])
	    : __Vtemp59[1U]);
    vlTOPp->Vortex__DOT____Vcellout__vx_forwarding__out_src2_fwd_data[2U] 
	= ((IData)(vlTOPp->Vortex__DOT__vx_forwarding__DOT__src2_exe_fwd)
	    ? ((3U == (IData)(vlSymsp->TOP__Vortex__DOT__VX_exe_mem_req.wb))
	        ? vlTOPp->Vortex__DOT__vx_forwarding__DOT__use_execute_PC_next[2U]
	        : vlSymsp->TOP__Vortex__DOT__VX_exe_mem_req.alu_result[2U])
	    : __Vtemp59[2U]);
    vlTOPp->Vortex__DOT____Vcellout__vx_forwarding__out_src2_fwd_data[3U] 
	= ((IData)(vlTOPp->Vortex__DOT__vx_forwarding__DOT__src2_exe_fwd)
	    ? ((3U == (IData)(vlSymsp->TOP__Vortex__DOT__VX_exe_mem_req.wb))
	        ? vlTOPp->Vortex__DOT__vx_forwarding__DOT__use_execute_PC_next[3U]
	        : vlSymsp->TOP__Vortex__DOT__VX_exe_mem_req.alu_result[3U])
	    : __Vtemp59[3U]);
    vlTOPp->Vortex__DOT__vx_fetch__DOT__add_warp = 
	(((IData)(vlTOPp->Vortex__DOT__vx_decode__DOT__is_wspawn) 
	  & (~ (IData)(vlTOPp->Vortex__DOT__vx_decode__DOT__is_ebreak))) 
	 & (~ (IData)(vlTOPp->Vortex__DOT__vx_decode__DOT__temp_out_clone_stall)));
    vlTOPp->Vortex__DOT__vx_fetch__DOT__remove_warp 
	= (((IData)(vlTOPp->Vortex__DOT__vx_decode__DOT__is_ebreak) 
	    & (~ (IData)(vlTOPp->Vortex__DOT__vx_decode__DOT__is_wspawn))) 
	   & (~ (IData)(vlTOPp->Vortex__DOT__vx_decode__DOT__temp_out_clone_stall)));
    vlTOPp->Vortex__DOT__vx_fetch__DOT__stall = ((((IData)(vlTOPp->Vortex__DOT__vx_decode__DOT__temp_out_clone_stall) 
						   | (IData)(vlTOPp->Vortex__DOT__decode_branch_stall)) 
						  | (IData)(vlTOPp->Vortex__DOT__forwarding_fwd_stall)) 
						 | (IData)(vlTOPp->Vortex__DOT__execute_branch_stall));
    vlTOPp->icache_request_pc_address = vlTOPp->Vortex__DOT__vx_fetch__DOT__out_PC_var;
    vlTOPp->Vortex__DOT__vx_decode__DOT____Vcellout__VX_Context_zero__out_a_reg_data[0U] 
	= ((0x6fU == (0x7fU & ((vlTOPp->Vortex__DOT__vx_f_d_reg__DOT__f_d_reg__DOT__value[2U] 
				<< 0x18U) | (vlTOPp->Vortex__DOT__vx_f_d_reg__DOT__f_d_reg__DOT__value[1U] 
					     >> 8U))))
	    ? ((vlTOPp->Vortex__DOT__vx_f_d_reg__DOT__f_d_reg__DOT__value[1U] 
		<< 0x18U) | (vlTOPp->Vortex__DOT__vx_f_d_reg__DOT__f_d_reg__DOT__value[0U] 
			     >> 8U)) : ((IData)(vlTOPp->Vortex__DOT__forwarding_src1_fwd)
					 ? vlTOPp->Vortex__DOT____Vcellout__vx_forwarding__out_src1_fwd_data[0U]
					 : vlTOPp->Vortex__DOT__vx_decode__DOT__VX_Context_zero__DOT__rd1_register[0U]));
    vlTOPp->Vortex__DOT__vx_decode__DOT____Vcellout__VX_Context_zero__out_a_reg_data[1U] 
	= ((0x6fU == (0x7fU & ((vlTOPp->Vortex__DOT__vx_f_d_reg__DOT__f_d_reg__DOT__value[2U] 
				<< 0x18U) | (vlTOPp->Vortex__DOT__vx_f_d_reg__DOT__f_d_reg__DOT__value[1U] 
					     >> 8U))))
	    ? ((vlTOPp->Vortex__DOT__vx_f_d_reg__DOT__f_d_reg__DOT__value[1U] 
		<< 0x18U) | (vlTOPp->Vortex__DOT__vx_f_d_reg__DOT__f_d_reg__DOT__value[0U] 
			     >> 8U)) : ((IData)(vlTOPp->Vortex__DOT__forwarding_src1_fwd)
					 ? vlTOPp->Vortex__DOT____Vcellout__vx_forwarding__out_src1_fwd_data[1U]
					 : vlTOPp->Vortex__DOT__vx_decode__DOT__VX_Context_zero__DOT__rd1_register[1U]));
    vlTOPp->Vortex__DOT__vx_decode__DOT____Vcellout__VX_Context_zero__out_a_reg_data[2U] 
	= ((0x6fU == (0x7fU & ((vlTOPp->Vortex__DOT__vx_f_d_reg__DOT__f_d_reg__DOT__value[2U] 
				<< 0x18U) | (vlTOPp->Vortex__DOT__vx_f_d_reg__DOT__f_d_reg__DOT__value[1U] 
					     >> 8U))))
	    ? ((vlTOPp->Vortex__DOT__vx_f_d_reg__DOT__f_d_reg__DOT__value[1U] 
		<< 0x18U) | (vlTOPp->Vortex__DOT__vx_f_d_reg__DOT__f_d_reg__DOT__value[0U] 
			     >> 8U)) : ((IData)(vlTOPp->Vortex__DOT__forwarding_src1_fwd)
					 ? vlTOPp->Vortex__DOT____Vcellout__vx_forwarding__out_src1_fwd_data[2U]
					 : vlTOPp->Vortex__DOT__vx_decode__DOT__VX_Context_zero__DOT__rd1_register[2U]));
    vlTOPp->Vortex__DOT__vx_decode__DOT____Vcellout__VX_Context_zero__out_a_reg_data[3U] 
	= ((0x6fU == (0x7fU & ((vlTOPp->Vortex__DOT__vx_f_d_reg__DOT__f_d_reg__DOT__value[2U] 
				<< 0x18U) | (vlTOPp->Vortex__DOT__vx_f_d_reg__DOT__f_d_reg__DOT__value[1U] 
					     >> 8U))))
	    ? ((vlTOPp->Vortex__DOT__vx_f_d_reg__DOT__f_d_reg__DOT__value[1U] 
		<< 0x18U) | (vlTOPp->Vortex__DOT__vx_f_d_reg__DOT__f_d_reg__DOT__value[0U] 
			     >> 8U)) : ((IData)(vlTOPp->Vortex__DOT__forwarding_src1_fwd)
					 ? vlTOPp->Vortex__DOT____Vcellout__vx_forwarding__out_src1_fwd_data[3U]
					 : vlTOPp->Vortex__DOT__vx_decode__DOT__VX_Context_zero__DOT__rd1_register[3U]));
    vlTOPp->Vortex__DOT__vx_decode__DOT____Vcellout__VX_Context_zero__out_b_reg_data[0U] 
	= ((IData)(vlTOPp->Vortex__DOT__forwarding_src2_fwd)
	    ? vlTOPp->Vortex__DOT____Vcellout__vx_forwarding__out_src2_fwd_data[0U]
	    : vlTOPp->Vortex__DOT__vx_decode__DOT__VX_Context_zero__DOT__rd2_register[0U]);
    vlTOPp->Vortex__DOT__vx_decode__DOT____Vcellout__VX_Context_zero__out_b_reg_data[1U] 
	= ((IData)(vlTOPp->Vortex__DOT__forwarding_src2_fwd)
	    ? vlTOPp->Vortex__DOT____Vcellout__vx_forwarding__out_src2_fwd_data[1U]
	    : vlTOPp->Vortex__DOT__vx_decode__DOT__VX_Context_zero__DOT__rd2_register[1U]);
    vlTOPp->Vortex__DOT__vx_decode__DOT____Vcellout__VX_Context_zero__out_b_reg_data[2U] 
	= ((IData)(vlTOPp->Vortex__DOT__forwarding_src2_fwd)
	    ? vlTOPp->Vortex__DOT____Vcellout__vx_forwarding__out_src2_fwd_data[2U]
	    : vlTOPp->Vortex__DOT__vx_decode__DOT__VX_Context_zero__DOT__rd2_register[2U]);
    vlTOPp->Vortex__DOT__vx_decode__DOT____Vcellout__VX_Context_zero__out_b_reg_data[3U] 
	= ((IData)(vlTOPp->Vortex__DOT__forwarding_src2_fwd)
	    ? vlTOPp->Vortex__DOT____Vcellout__vx_forwarding__out_src2_fwd_data[3U]
	    : vlTOPp->Vortex__DOT__vx_decode__DOT__VX_Context_zero__DOT__rd2_register[3U]);
    vlTOPp->Vortex__DOT__vx_fetch__DOT__genblk2__BRA__0__KET____DOT__warp_zero_stall 
	= ((IData)(vlTOPp->Vortex__DOT__vx_fetch__DOT__stall) 
	   | (0U != (IData)(vlTOPp->Vortex__DOT__vx_fetch__DOT__warp_num)));
    vlTOPp->Vortex__DOT__vx_fetch__DOT__genblk2__BRA__1__KET____DOT__warp_zero_stall 
	= ((IData)(vlTOPp->Vortex__DOT__vx_fetch__DOT__stall) 
	   | (1U != (IData)(vlTOPp->Vortex__DOT__vx_fetch__DOT__warp_num)));
    vlTOPp->Vortex__DOT__vx_fetch__DOT__genblk2__BRA__2__KET____DOT__warp_zero_stall 
	= ((IData)(vlTOPp->Vortex__DOT__vx_fetch__DOT__stall) 
	   | (2U != (IData)(vlTOPp->Vortex__DOT__vx_fetch__DOT__warp_num)));
    vlTOPp->Vortex__DOT__vx_fetch__DOT__genblk2__BRA__3__KET____DOT__warp_zero_stall 
	= ((IData)(vlTOPp->Vortex__DOT__vx_fetch__DOT__stall) 
	   | (3U != (IData)(vlTOPp->Vortex__DOT__vx_fetch__DOT__warp_num)));
    vlTOPp->Vortex__DOT__vx_fetch__DOT__genblk2__BRA__4__KET____DOT__warp_zero_stall 
	= ((IData)(vlTOPp->Vortex__DOT__vx_fetch__DOT__stall) 
	   | (4U != (IData)(vlTOPp->Vortex__DOT__vx_fetch__DOT__warp_num)));
    vlTOPp->Vortex__DOT__vx_fetch__DOT__genblk2__BRA__5__KET____DOT__warp_zero_stall 
	= ((IData)(vlTOPp->Vortex__DOT__vx_fetch__DOT__stall) 
	   | (5U != (IData)(vlTOPp->Vortex__DOT__vx_fetch__DOT__warp_num)));
    vlTOPp->Vortex__DOT__vx_fetch__DOT__genblk2__BRA__6__KET____DOT__warp_zero_stall 
	= ((IData)(vlTOPp->Vortex__DOT__vx_fetch__DOT__stall) 
	   | (6U != (IData)(vlTOPp->Vortex__DOT__vx_fetch__DOT__warp_num)));
    vlTOPp->Vortex__DOT__vx_fetch__DOT__genblk2__BRA__7__KET____DOT__warp_zero_stall 
	= ((IData)(vlTOPp->Vortex__DOT__vx_fetch__DOT__stall) 
	   | (7U != (IData)(vlTOPp->Vortex__DOT__vx_fetch__DOT__warp_num)));
    vlTOPp->Vortex__DOT__vx_decode__DOT__glob_a_reg_data[0U] 
	= vlTOPp->Vortex__DOT__vx_decode__DOT____Vcellout__VX_Context_zero__out_a_reg_data[0U];
    vlTOPp->Vortex__DOT__vx_decode__DOT__glob_a_reg_data[1U] 
	= vlTOPp->Vortex__DOT__vx_decode__DOT____Vcellout__VX_Context_zero__out_a_reg_data[1U];
    vlTOPp->Vortex__DOT__vx_decode__DOT__glob_a_reg_data[2U] 
	= vlTOPp->Vortex__DOT__vx_decode__DOT____Vcellout__VX_Context_zero__out_a_reg_data[2U];
    vlTOPp->Vortex__DOT__vx_decode__DOT__glob_a_reg_data[3U] 
	= vlTOPp->Vortex__DOT__vx_decode__DOT____Vcellout__VX_Context_zero__out_a_reg_data[3U];
    vlTOPp->Vortex__DOT__vx_decode__DOT__glob_b_reg_data[0U] 
	= vlTOPp->Vortex__DOT__vx_decode__DOT____Vcellout__VX_Context_zero__out_b_reg_data[0U];
    vlTOPp->Vortex__DOT__vx_decode__DOT__glob_b_reg_data[1U] 
	= vlTOPp->Vortex__DOT__vx_decode__DOT____Vcellout__VX_Context_zero__out_b_reg_data[1U];
    vlTOPp->Vortex__DOT__vx_decode__DOT__glob_b_reg_data[2U] 
	= vlTOPp->Vortex__DOT__vx_decode__DOT____Vcellout__VX_Context_zero__out_b_reg_data[2U];
    vlTOPp->Vortex__DOT__vx_decode__DOT__glob_b_reg_data[3U] 
	= vlTOPp->Vortex__DOT__vx_decode__DOT____Vcellout__VX_Context_zero__out_b_reg_data[3U];
}

void VVortex::_settle__TOP__3(VVortex__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VVortex::_settle__TOP__3\n"); );
    VVortex* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    // Begin mtask footprint  all: 
    VL_SIGW(__Vtemp78,319,0,10);
    // Body
    vlTOPp->Vortex__DOT__vx_decode__DOT__glob_b_reg_data[4U] 
	= vlSymsp->TOP__Vortex__DOT__vx_decode__DOT__genblk2__BRA__1__KET____DOT__VX_Context_one.out_b_reg_data[0U];
    vlTOPp->Vortex__DOT__vx_decode__DOT__glob_b_reg_data[5U] 
	= vlSymsp->TOP__Vortex__DOT__vx_decode__DOT__genblk2__BRA__1__KET____DOT__VX_Context_one.out_b_reg_data[1U];
    vlTOPp->Vortex__DOT__vx_decode__DOT__glob_b_reg_data[6U] 
	= vlSymsp->TOP__Vortex__DOT__vx_decode__DOT__genblk2__BRA__1__KET____DOT__VX_Context_one.out_b_reg_data[2U];
    vlTOPp->Vortex__DOT__vx_decode__DOT__glob_b_reg_data[7U] 
	= vlSymsp->TOP__Vortex__DOT__vx_decode__DOT__genblk2__BRA__1__KET____DOT__VX_Context_one.out_b_reg_data[3U];
    vlTOPp->Vortex__DOT__vx_decode__DOT__glob_a_reg_data[4U] 
	= vlSymsp->TOP__Vortex__DOT__vx_decode__DOT__genblk2__BRA__1__KET____DOT__VX_Context_one.out_a_reg_data[0U];
    vlTOPp->Vortex__DOT__vx_decode__DOT__glob_a_reg_data[5U] 
	= vlSymsp->TOP__Vortex__DOT__vx_decode__DOT__genblk2__BRA__1__KET____DOT__VX_Context_one.out_a_reg_data[1U];
    vlTOPp->Vortex__DOT__vx_decode__DOT__glob_a_reg_data[6U] 
	= vlSymsp->TOP__Vortex__DOT__vx_decode__DOT__genblk2__BRA__1__KET____DOT__VX_Context_one.out_a_reg_data[2U];
    vlTOPp->Vortex__DOT__vx_decode__DOT__glob_a_reg_data[7U] 
	= vlSymsp->TOP__Vortex__DOT__vx_decode__DOT__genblk2__BRA__1__KET____DOT__VX_Context_one.out_a_reg_data[3U];
    vlTOPp->Vortex__DOT__vx_decode__DOT__glob_b_reg_data[8U] 
	= vlSymsp->TOP__Vortex__DOT__vx_decode__DOT__genblk2__BRA__2__KET____DOT__VX_Context_one.out_b_reg_data[0U];
    vlTOPp->Vortex__DOT__vx_decode__DOT__glob_b_reg_data[9U] 
	= vlSymsp->TOP__Vortex__DOT__vx_decode__DOT__genblk2__BRA__2__KET____DOT__VX_Context_one.out_b_reg_data[1U];
    vlTOPp->Vortex__DOT__vx_decode__DOT__glob_b_reg_data[0xaU] 
	= vlSymsp->TOP__Vortex__DOT__vx_decode__DOT__genblk2__BRA__2__KET____DOT__VX_Context_one.out_b_reg_data[2U];
    vlTOPp->Vortex__DOT__vx_decode__DOT__glob_b_reg_data[0xbU] 
	= vlSymsp->TOP__Vortex__DOT__vx_decode__DOT__genblk2__BRA__2__KET____DOT__VX_Context_one.out_b_reg_data[3U];
    vlTOPp->Vortex__DOT__vx_decode__DOT__glob_a_reg_data[8U] 
	= vlSymsp->TOP__Vortex__DOT__vx_decode__DOT__genblk2__BRA__2__KET____DOT__VX_Context_one.out_a_reg_data[0U];
    vlTOPp->Vortex__DOT__vx_decode__DOT__glob_a_reg_data[9U] 
	= vlSymsp->TOP__Vortex__DOT__vx_decode__DOT__genblk2__BRA__2__KET____DOT__VX_Context_one.out_a_reg_data[1U];
    vlTOPp->Vortex__DOT__vx_decode__DOT__glob_a_reg_data[0xaU] 
	= vlSymsp->TOP__Vortex__DOT__vx_decode__DOT__genblk2__BRA__2__KET____DOT__VX_Context_one.out_a_reg_data[2U];
    vlTOPp->Vortex__DOT__vx_decode__DOT__glob_a_reg_data[0xbU] 
	= vlSymsp->TOP__Vortex__DOT__vx_decode__DOT__genblk2__BRA__2__KET____DOT__VX_Context_one.out_a_reg_data[3U];
    vlTOPp->Vortex__DOT__vx_decode__DOT__glob_b_reg_data[0xcU] 
	= vlSymsp->TOP__Vortex__DOT__vx_decode__DOT__genblk2__BRA__3__KET____DOT__VX_Context_one.out_b_reg_data[0U];
    vlTOPp->Vortex__DOT__vx_decode__DOT__glob_b_reg_data[0xdU] 
	= vlSymsp->TOP__Vortex__DOT__vx_decode__DOT__genblk2__BRA__3__KET____DOT__VX_Context_one.out_b_reg_data[1U];
    vlTOPp->Vortex__DOT__vx_decode__DOT__glob_b_reg_data[0xeU] 
	= vlSymsp->TOP__Vortex__DOT__vx_decode__DOT__genblk2__BRA__3__KET____DOT__VX_Context_one.out_b_reg_data[2U];
    vlTOPp->Vortex__DOT__vx_decode__DOT__glob_b_reg_data[0xfU] 
	= vlSymsp->TOP__Vortex__DOT__vx_decode__DOT__genblk2__BRA__3__KET____DOT__VX_Context_one.out_b_reg_data[3U];
    vlTOPp->Vortex__DOT__vx_decode__DOT__glob_a_reg_data[0xcU] 
	= vlSymsp->TOP__Vortex__DOT__vx_decode__DOT__genblk2__BRA__3__KET____DOT__VX_Context_one.out_a_reg_data[0U];
    vlTOPp->Vortex__DOT__vx_decode__DOT__glob_a_reg_data[0xdU] 
	= vlSymsp->TOP__Vortex__DOT__vx_decode__DOT__genblk2__BRA__3__KET____DOT__VX_Context_one.out_a_reg_data[1U];
    vlTOPp->Vortex__DOT__vx_decode__DOT__glob_a_reg_data[0xeU] 
	= vlSymsp->TOP__Vortex__DOT__vx_decode__DOT__genblk2__BRA__3__KET____DOT__VX_Context_one.out_a_reg_data[2U];
    vlTOPp->Vortex__DOT__vx_decode__DOT__glob_a_reg_data[0xfU] 
	= vlSymsp->TOP__Vortex__DOT__vx_decode__DOT__genblk2__BRA__3__KET____DOT__VX_Context_one.out_a_reg_data[3U];
    vlTOPp->Vortex__DOT__vx_decode__DOT__glob_b_reg_data[0x10U] 
	= vlSymsp->TOP__Vortex__DOT__vx_decode__DOT__genblk2__BRA__4__KET____DOT__VX_Context_one.out_b_reg_data[0U];
    vlTOPp->Vortex__DOT__vx_decode__DOT__glob_b_reg_data[0x11U] 
	= vlSymsp->TOP__Vortex__DOT__vx_decode__DOT__genblk2__BRA__4__KET____DOT__VX_Context_one.out_b_reg_data[1U];
    vlTOPp->Vortex__DOT__vx_decode__DOT__glob_b_reg_data[0x12U] 
	= vlSymsp->TOP__Vortex__DOT__vx_decode__DOT__genblk2__BRA__4__KET____DOT__VX_Context_one.out_b_reg_data[2U];
    vlTOPp->Vortex__DOT__vx_decode__DOT__glob_b_reg_data[0x13U] 
	= vlSymsp->TOP__Vortex__DOT__vx_decode__DOT__genblk2__BRA__4__KET____DOT__VX_Context_one.out_b_reg_data[3U];
    vlTOPp->Vortex__DOT__vx_decode__DOT__glob_a_reg_data[0x10U] 
	= vlSymsp->TOP__Vortex__DOT__vx_decode__DOT__genblk2__BRA__4__KET____DOT__VX_Context_one.out_a_reg_data[0U];
    vlTOPp->Vortex__DOT__vx_decode__DOT__glob_a_reg_data[0x11U] 
	= vlSymsp->TOP__Vortex__DOT__vx_decode__DOT__genblk2__BRA__4__KET____DOT__VX_Context_one.out_a_reg_data[1U];
    vlTOPp->Vortex__DOT__vx_decode__DOT__glob_a_reg_data[0x12U] 
	= vlSymsp->TOP__Vortex__DOT__vx_decode__DOT__genblk2__BRA__4__KET____DOT__VX_Context_one.out_a_reg_data[2U];
    vlTOPp->Vortex__DOT__vx_decode__DOT__glob_a_reg_data[0x13U] 
	= vlSymsp->TOP__Vortex__DOT__vx_decode__DOT__genblk2__BRA__4__KET____DOT__VX_Context_one.out_a_reg_data[3U];
    vlTOPp->Vortex__DOT__vx_decode__DOT__glob_b_reg_data[0x14U] 
	= vlSymsp->TOP__Vortex__DOT__vx_decode__DOT__genblk2__BRA__5__KET____DOT__VX_Context_one.out_b_reg_data[0U];
    vlTOPp->Vortex__DOT__vx_decode__DOT__glob_b_reg_data[0x15U] 
	= vlSymsp->TOP__Vortex__DOT__vx_decode__DOT__genblk2__BRA__5__KET____DOT__VX_Context_one.out_b_reg_data[1U];
    vlTOPp->Vortex__DOT__vx_decode__DOT__glob_b_reg_data[0x16U] 
	= vlSymsp->TOP__Vortex__DOT__vx_decode__DOT__genblk2__BRA__5__KET____DOT__VX_Context_one.out_b_reg_data[2U];
    vlTOPp->Vortex__DOT__vx_decode__DOT__glob_b_reg_data[0x17U] 
	= vlSymsp->TOP__Vortex__DOT__vx_decode__DOT__genblk2__BRA__5__KET____DOT__VX_Context_one.out_b_reg_data[3U];
    vlTOPp->Vortex__DOT__vx_decode__DOT__glob_a_reg_data[0x14U] 
	= vlSymsp->TOP__Vortex__DOT__vx_decode__DOT__genblk2__BRA__5__KET____DOT__VX_Context_one.out_a_reg_data[0U];
    vlTOPp->Vortex__DOT__vx_decode__DOT__glob_a_reg_data[0x15U] 
	= vlSymsp->TOP__Vortex__DOT__vx_decode__DOT__genblk2__BRA__5__KET____DOT__VX_Context_one.out_a_reg_data[1U];
    vlTOPp->Vortex__DOT__vx_decode__DOT__glob_a_reg_data[0x16U] 
	= vlSymsp->TOP__Vortex__DOT__vx_decode__DOT__genblk2__BRA__5__KET____DOT__VX_Context_one.out_a_reg_data[2U];
    vlTOPp->Vortex__DOT__vx_decode__DOT__glob_a_reg_data[0x17U] 
	= vlSymsp->TOP__Vortex__DOT__vx_decode__DOT__genblk2__BRA__5__KET____DOT__VX_Context_one.out_a_reg_data[3U];
    vlTOPp->Vortex__DOT__vx_decode__DOT__glob_b_reg_data[0x18U] 
	= vlSymsp->TOP__Vortex__DOT__vx_decode__DOT__genblk2__BRA__6__KET____DOT__VX_Context_one.out_b_reg_data[0U];
    vlTOPp->Vortex__DOT__vx_decode__DOT__glob_b_reg_data[0x19U] 
	= vlSymsp->TOP__Vortex__DOT__vx_decode__DOT__genblk2__BRA__6__KET____DOT__VX_Context_one.out_b_reg_data[1U];
    vlTOPp->Vortex__DOT__vx_decode__DOT__glob_b_reg_data[0x1aU] 
	= vlSymsp->TOP__Vortex__DOT__vx_decode__DOT__genblk2__BRA__6__KET____DOT__VX_Context_one.out_b_reg_data[2U];
    vlTOPp->Vortex__DOT__vx_decode__DOT__glob_b_reg_data[0x1bU] 
	= vlSymsp->TOP__Vortex__DOT__vx_decode__DOT__genblk2__BRA__6__KET____DOT__VX_Context_one.out_b_reg_data[3U];
    vlTOPp->Vortex__DOT__vx_decode__DOT__glob_a_reg_data[0x18U] 
	= vlSymsp->TOP__Vortex__DOT__vx_decode__DOT__genblk2__BRA__6__KET____DOT__VX_Context_one.out_a_reg_data[0U];
    vlTOPp->Vortex__DOT__vx_decode__DOT__glob_a_reg_data[0x19U] 
	= vlSymsp->TOP__Vortex__DOT__vx_decode__DOT__genblk2__BRA__6__KET____DOT__VX_Context_one.out_a_reg_data[1U];
    vlTOPp->Vortex__DOT__vx_decode__DOT__glob_a_reg_data[0x1aU] 
	= vlSymsp->TOP__Vortex__DOT__vx_decode__DOT__genblk2__BRA__6__KET____DOT__VX_Context_one.out_a_reg_data[2U];
    vlTOPp->Vortex__DOT__vx_decode__DOT__glob_a_reg_data[0x1bU] 
	= vlSymsp->TOP__Vortex__DOT__vx_decode__DOT__genblk2__BRA__6__KET____DOT__VX_Context_one.out_a_reg_data[3U];
    vlTOPp->Vortex__DOT__vx_decode__DOT__glob_b_reg_data[0x1cU] 
	= vlSymsp->TOP__Vortex__DOT__vx_decode__DOT__genblk2__BRA__7__KET____DOT__VX_Context_one.out_b_reg_data[0U];
    vlTOPp->Vortex__DOT__vx_decode__DOT__glob_b_reg_data[0x1dU] 
	= vlSymsp->TOP__Vortex__DOT__vx_decode__DOT__genblk2__BRA__7__KET____DOT__VX_Context_one.out_b_reg_data[1U];
    vlTOPp->Vortex__DOT__vx_decode__DOT__glob_b_reg_data[0x1eU] 
	= vlSymsp->TOP__Vortex__DOT__vx_decode__DOT__genblk2__BRA__7__KET____DOT__VX_Context_one.out_b_reg_data[2U];
    vlTOPp->Vortex__DOT__vx_decode__DOT__glob_b_reg_data[0x1fU] 
	= vlSymsp->TOP__Vortex__DOT__vx_decode__DOT__genblk2__BRA__7__KET____DOT__VX_Context_one.out_b_reg_data[3U];
    vlTOPp->Vortex__DOT__vx_decode__DOT__glob_a_reg_data[0x1cU] 
	= vlSymsp->TOP__Vortex__DOT__vx_decode__DOT__genblk2__BRA__7__KET____DOT__VX_Context_one.out_a_reg_data[0U];
    vlTOPp->Vortex__DOT__vx_decode__DOT__glob_a_reg_data[0x1dU] 
	= vlSymsp->TOP__Vortex__DOT__vx_decode__DOT__genblk2__BRA__7__KET____DOT__VX_Context_one.out_a_reg_data[1U];
    vlTOPp->Vortex__DOT__vx_decode__DOT__glob_a_reg_data[0x1eU] 
	= vlSymsp->TOP__Vortex__DOT__vx_decode__DOT__genblk2__BRA__7__KET____DOT__VX_Context_one.out_a_reg_data[2U];
    vlTOPp->Vortex__DOT__vx_decode__DOT__glob_a_reg_data[0x1fU] 
	= vlSymsp->TOP__Vortex__DOT__vx_decode__DOT__genblk2__BRA__7__KET____DOT__VX_Context_one.out_a_reg_data[3U];
    // ALWAYS at VX_decode.v:238
    if ((0U == (0xfU & ((vlTOPp->Vortex__DOT__vx_f_d_reg__DOT__f_d_reg__DOT__value[1U] 
			 << 0x1cU) | (vlTOPp->Vortex__DOT__vx_f_d_reg__DOT__f_d_reg__DOT__value[0U] 
				      >> 4U))))) {
	vlTOPp->Vortex__DOT__vx_decode__DOT__temp_out_b_reg_data[0U] 
	    = vlTOPp->Vortex__DOT__vx_decode__DOT__glob_b_reg_data[0U];
	vlTOPp->Vortex__DOT__vx_decode__DOT__temp_out_b_reg_data[1U] 
	    = vlTOPp->Vortex__DOT__vx_decode__DOT__glob_b_reg_data[1U];
	vlTOPp->Vortex__DOT__vx_decode__DOT__temp_out_b_reg_data[2U] 
	    = vlTOPp->Vortex__DOT__vx_decode__DOT__glob_b_reg_data[2U];
	vlTOPp->Vortex__DOT__vx_decode__DOT__temp_out_b_reg_data[3U] 
	    = vlTOPp->Vortex__DOT__vx_decode__DOT__glob_b_reg_data[3U];
    }
    if ((1U == (0xfU & ((vlTOPp->Vortex__DOT__vx_f_d_reg__DOT__f_d_reg__DOT__value[1U] 
			 << 0x1cU) | (vlTOPp->Vortex__DOT__vx_f_d_reg__DOT__f_d_reg__DOT__value[0U] 
				      >> 4U))))) {
	vlTOPp->Vortex__DOT__vx_decode__DOT__temp_out_b_reg_data[0U] 
	    = vlTOPp->Vortex__DOT__vx_decode__DOT__glob_b_reg_data[4U];
	vlTOPp->Vortex__DOT__vx_decode__DOT__temp_out_b_reg_data[1U] 
	    = vlTOPp->Vortex__DOT__vx_decode__DOT__glob_b_reg_data[5U];
	vlTOPp->Vortex__DOT__vx_decode__DOT__temp_out_b_reg_data[2U] 
	    = vlTOPp->Vortex__DOT__vx_decode__DOT__glob_b_reg_data[6U];
	vlTOPp->Vortex__DOT__vx_decode__DOT__temp_out_b_reg_data[3U] 
	    = vlTOPp->Vortex__DOT__vx_decode__DOT__glob_b_reg_data[7U];
    }
    if ((2U == (0xfU & ((vlTOPp->Vortex__DOT__vx_f_d_reg__DOT__f_d_reg__DOT__value[1U] 
			 << 0x1cU) | (vlTOPp->Vortex__DOT__vx_f_d_reg__DOT__f_d_reg__DOT__value[0U] 
				      >> 4U))))) {
	vlTOPp->Vortex__DOT__vx_decode__DOT__temp_out_b_reg_data[0U] 
	    = vlTOPp->Vortex__DOT__vx_decode__DOT__glob_b_reg_data[8U];
	vlTOPp->Vortex__DOT__vx_decode__DOT__temp_out_b_reg_data[1U] 
	    = vlTOPp->Vortex__DOT__vx_decode__DOT__glob_b_reg_data[9U];
	vlTOPp->Vortex__DOT__vx_decode__DOT__temp_out_b_reg_data[2U] 
	    = vlTOPp->Vortex__DOT__vx_decode__DOT__glob_b_reg_data[0xaU];
	vlTOPp->Vortex__DOT__vx_decode__DOT__temp_out_b_reg_data[3U] 
	    = vlTOPp->Vortex__DOT__vx_decode__DOT__glob_b_reg_data[0xbU];
    }
    if ((3U == (0xfU & ((vlTOPp->Vortex__DOT__vx_f_d_reg__DOT__f_d_reg__DOT__value[1U] 
			 << 0x1cU) | (vlTOPp->Vortex__DOT__vx_f_d_reg__DOT__f_d_reg__DOT__value[0U] 
				      >> 4U))))) {
	vlTOPp->Vortex__DOT__vx_decode__DOT__temp_out_b_reg_data[0U] 
	    = vlTOPp->Vortex__DOT__vx_decode__DOT__glob_b_reg_data[0xcU];
	vlTOPp->Vortex__DOT__vx_decode__DOT__temp_out_b_reg_data[1U] 
	    = vlTOPp->Vortex__DOT__vx_decode__DOT__glob_b_reg_data[0xdU];
	vlTOPp->Vortex__DOT__vx_decode__DOT__temp_out_b_reg_data[2U] 
	    = vlTOPp->Vortex__DOT__vx_decode__DOT__glob_b_reg_data[0xeU];
	vlTOPp->Vortex__DOT__vx_decode__DOT__temp_out_b_reg_data[3U] 
	    = vlTOPp->Vortex__DOT__vx_decode__DOT__glob_b_reg_data[0xfU];
    }
    if ((4U == (0xfU & ((vlTOPp->Vortex__DOT__vx_f_d_reg__DOT__f_d_reg__DOT__value[1U] 
			 << 0x1cU) | (vlTOPp->Vortex__DOT__vx_f_d_reg__DOT__f_d_reg__DOT__value[0U] 
				      >> 4U))))) {
	vlTOPp->Vortex__DOT__vx_decode__DOT__temp_out_b_reg_data[0U] 
	    = vlTOPp->Vortex__DOT__vx_decode__DOT__glob_b_reg_data[0x10U];
	vlTOPp->Vortex__DOT__vx_decode__DOT__temp_out_b_reg_data[1U] 
	    = vlTOPp->Vortex__DOT__vx_decode__DOT__glob_b_reg_data[0x11U];
	vlTOPp->Vortex__DOT__vx_decode__DOT__temp_out_b_reg_data[2U] 
	    = vlTOPp->Vortex__DOT__vx_decode__DOT__glob_b_reg_data[0x12U];
	vlTOPp->Vortex__DOT__vx_decode__DOT__temp_out_b_reg_data[3U] 
	    = vlTOPp->Vortex__DOT__vx_decode__DOT__glob_b_reg_data[0x13U];
    }
    if ((5U == (0xfU & ((vlTOPp->Vortex__DOT__vx_f_d_reg__DOT__f_d_reg__DOT__value[1U] 
			 << 0x1cU) | (vlTOPp->Vortex__DOT__vx_f_d_reg__DOT__f_d_reg__DOT__value[0U] 
				      >> 4U))))) {
	vlTOPp->Vortex__DOT__vx_decode__DOT__temp_out_b_reg_data[0U] 
	    = vlTOPp->Vortex__DOT__vx_decode__DOT__glob_b_reg_data[0x14U];
	vlTOPp->Vortex__DOT__vx_decode__DOT__temp_out_b_reg_data[1U] 
	    = vlTOPp->Vortex__DOT__vx_decode__DOT__glob_b_reg_data[0x15U];
	vlTOPp->Vortex__DOT__vx_decode__DOT__temp_out_b_reg_data[2U] 
	    = vlTOPp->Vortex__DOT__vx_decode__DOT__glob_b_reg_data[0x16U];
	vlTOPp->Vortex__DOT__vx_decode__DOT__temp_out_b_reg_data[3U] 
	    = vlTOPp->Vortex__DOT__vx_decode__DOT__glob_b_reg_data[0x17U];
    }
    if ((6U == (0xfU & ((vlTOPp->Vortex__DOT__vx_f_d_reg__DOT__f_d_reg__DOT__value[1U] 
			 << 0x1cU) | (vlTOPp->Vortex__DOT__vx_f_d_reg__DOT__f_d_reg__DOT__value[0U] 
				      >> 4U))))) {
	vlTOPp->Vortex__DOT__vx_decode__DOT__temp_out_b_reg_data[0U] 
	    = vlTOPp->Vortex__DOT__vx_decode__DOT__glob_b_reg_data[0x18U];
	vlTOPp->Vortex__DOT__vx_decode__DOT__temp_out_b_reg_data[1U] 
	    = vlTOPp->Vortex__DOT__vx_decode__DOT__glob_b_reg_data[0x19U];
	vlTOPp->Vortex__DOT__vx_decode__DOT__temp_out_b_reg_data[2U] 
	    = vlTOPp->Vortex__DOT__vx_decode__DOT__glob_b_reg_data[0x1aU];
	vlTOPp->Vortex__DOT__vx_decode__DOT__temp_out_b_reg_data[3U] 
	    = vlTOPp->Vortex__DOT__vx_decode__DOT__glob_b_reg_data[0x1bU];
    }
    if ((7U == (0xfU & ((vlTOPp->Vortex__DOT__vx_f_d_reg__DOT__f_d_reg__DOT__value[1U] 
			 << 0x1cU) | (vlTOPp->Vortex__DOT__vx_f_d_reg__DOT__f_d_reg__DOT__value[0U] 
				      >> 4U))))) {
	vlTOPp->Vortex__DOT__vx_decode__DOT__temp_out_b_reg_data[0U] 
	    = vlTOPp->Vortex__DOT__vx_decode__DOT__glob_b_reg_data[0x1cU];
	vlTOPp->Vortex__DOT__vx_decode__DOT__temp_out_b_reg_data[1U] 
	    = vlTOPp->Vortex__DOT__vx_decode__DOT__glob_b_reg_data[0x1dU];
	vlTOPp->Vortex__DOT__vx_decode__DOT__temp_out_b_reg_data[2U] 
	    = vlTOPp->Vortex__DOT__vx_decode__DOT__glob_b_reg_data[0x1eU];
	vlTOPp->Vortex__DOT__vx_decode__DOT__temp_out_b_reg_data[3U] 
	    = vlTOPp->Vortex__DOT__vx_decode__DOT__glob_b_reg_data[0x1fU];
    }
    // ALWAYS at VX_decode.v:238
    if ((0U == (0xfU & ((vlTOPp->Vortex__DOT__vx_f_d_reg__DOT__f_d_reg__DOT__value[1U] 
			 << 0x1cU) | (vlTOPp->Vortex__DOT__vx_f_d_reg__DOT__f_d_reg__DOT__value[0U] 
				      >> 4U))))) {
	vlTOPp->Vortex__DOT__vx_decode__DOT__temp_out_a_reg_data[0U] 
	    = vlTOPp->Vortex__DOT__vx_decode__DOT__glob_a_reg_data[0U];
	vlTOPp->Vortex__DOT__vx_decode__DOT__temp_out_a_reg_data[1U] 
	    = vlTOPp->Vortex__DOT__vx_decode__DOT__glob_a_reg_data[1U];
	vlTOPp->Vortex__DOT__vx_decode__DOT__temp_out_a_reg_data[2U] 
	    = vlTOPp->Vortex__DOT__vx_decode__DOT__glob_a_reg_data[2U];
	vlTOPp->Vortex__DOT__vx_decode__DOT__temp_out_a_reg_data[3U] 
	    = vlTOPp->Vortex__DOT__vx_decode__DOT__glob_a_reg_data[3U];
    }
    if ((1U == (0xfU & ((vlTOPp->Vortex__DOT__vx_f_d_reg__DOT__f_d_reg__DOT__value[1U] 
			 << 0x1cU) | (vlTOPp->Vortex__DOT__vx_f_d_reg__DOT__f_d_reg__DOT__value[0U] 
				      >> 4U))))) {
	vlTOPp->Vortex__DOT__vx_decode__DOT__temp_out_a_reg_data[0U] 
	    = vlTOPp->Vortex__DOT__vx_decode__DOT__glob_a_reg_data[4U];
	vlTOPp->Vortex__DOT__vx_decode__DOT__temp_out_a_reg_data[1U] 
	    = vlTOPp->Vortex__DOT__vx_decode__DOT__glob_a_reg_data[5U];
	vlTOPp->Vortex__DOT__vx_decode__DOT__temp_out_a_reg_data[2U] 
	    = vlTOPp->Vortex__DOT__vx_decode__DOT__glob_a_reg_data[6U];
	vlTOPp->Vortex__DOT__vx_decode__DOT__temp_out_a_reg_data[3U] 
	    = vlTOPp->Vortex__DOT__vx_decode__DOT__glob_a_reg_data[7U];
    }
    if ((2U == (0xfU & ((vlTOPp->Vortex__DOT__vx_f_d_reg__DOT__f_d_reg__DOT__value[1U] 
			 << 0x1cU) | (vlTOPp->Vortex__DOT__vx_f_d_reg__DOT__f_d_reg__DOT__value[0U] 
				      >> 4U))))) {
	vlTOPp->Vortex__DOT__vx_decode__DOT__temp_out_a_reg_data[0U] 
	    = vlTOPp->Vortex__DOT__vx_decode__DOT__glob_a_reg_data[8U];
	vlTOPp->Vortex__DOT__vx_decode__DOT__temp_out_a_reg_data[1U] 
	    = vlTOPp->Vortex__DOT__vx_decode__DOT__glob_a_reg_data[9U];
	vlTOPp->Vortex__DOT__vx_decode__DOT__temp_out_a_reg_data[2U] 
	    = vlTOPp->Vortex__DOT__vx_decode__DOT__glob_a_reg_data[0xaU];
	vlTOPp->Vortex__DOT__vx_decode__DOT__temp_out_a_reg_data[3U] 
	    = vlTOPp->Vortex__DOT__vx_decode__DOT__glob_a_reg_data[0xbU];
    }
    if ((3U == (0xfU & ((vlTOPp->Vortex__DOT__vx_f_d_reg__DOT__f_d_reg__DOT__value[1U] 
			 << 0x1cU) | (vlTOPp->Vortex__DOT__vx_f_d_reg__DOT__f_d_reg__DOT__value[0U] 
				      >> 4U))))) {
	vlTOPp->Vortex__DOT__vx_decode__DOT__temp_out_a_reg_data[0U] 
	    = vlTOPp->Vortex__DOT__vx_decode__DOT__glob_a_reg_data[0xcU];
	vlTOPp->Vortex__DOT__vx_decode__DOT__temp_out_a_reg_data[1U] 
	    = vlTOPp->Vortex__DOT__vx_decode__DOT__glob_a_reg_data[0xdU];
	vlTOPp->Vortex__DOT__vx_decode__DOT__temp_out_a_reg_data[2U] 
	    = vlTOPp->Vortex__DOT__vx_decode__DOT__glob_a_reg_data[0xeU];
	vlTOPp->Vortex__DOT__vx_decode__DOT__temp_out_a_reg_data[3U] 
	    = vlTOPp->Vortex__DOT__vx_decode__DOT__glob_a_reg_data[0xfU];
    }
    if ((4U == (0xfU & ((vlTOPp->Vortex__DOT__vx_f_d_reg__DOT__f_d_reg__DOT__value[1U] 
			 << 0x1cU) | (vlTOPp->Vortex__DOT__vx_f_d_reg__DOT__f_d_reg__DOT__value[0U] 
				      >> 4U))))) {
	vlTOPp->Vortex__DOT__vx_decode__DOT__temp_out_a_reg_data[0U] 
	    = vlTOPp->Vortex__DOT__vx_decode__DOT__glob_a_reg_data[0x10U];
	vlTOPp->Vortex__DOT__vx_decode__DOT__temp_out_a_reg_data[1U] 
	    = vlTOPp->Vortex__DOT__vx_decode__DOT__glob_a_reg_data[0x11U];
	vlTOPp->Vortex__DOT__vx_decode__DOT__temp_out_a_reg_data[2U] 
	    = vlTOPp->Vortex__DOT__vx_decode__DOT__glob_a_reg_data[0x12U];
	vlTOPp->Vortex__DOT__vx_decode__DOT__temp_out_a_reg_data[3U] 
	    = vlTOPp->Vortex__DOT__vx_decode__DOT__glob_a_reg_data[0x13U];
    }
    if ((5U == (0xfU & ((vlTOPp->Vortex__DOT__vx_f_d_reg__DOT__f_d_reg__DOT__value[1U] 
			 << 0x1cU) | (vlTOPp->Vortex__DOT__vx_f_d_reg__DOT__f_d_reg__DOT__value[0U] 
				      >> 4U))))) {
	vlTOPp->Vortex__DOT__vx_decode__DOT__temp_out_a_reg_data[0U] 
	    = vlTOPp->Vortex__DOT__vx_decode__DOT__glob_a_reg_data[0x14U];
	vlTOPp->Vortex__DOT__vx_decode__DOT__temp_out_a_reg_data[1U] 
	    = vlTOPp->Vortex__DOT__vx_decode__DOT__glob_a_reg_data[0x15U];
	vlTOPp->Vortex__DOT__vx_decode__DOT__temp_out_a_reg_data[2U] 
	    = vlTOPp->Vortex__DOT__vx_decode__DOT__glob_a_reg_data[0x16U];
	vlTOPp->Vortex__DOT__vx_decode__DOT__temp_out_a_reg_data[3U] 
	    = vlTOPp->Vortex__DOT__vx_decode__DOT__glob_a_reg_data[0x17U];
    }
    if ((6U == (0xfU & ((vlTOPp->Vortex__DOT__vx_f_d_reg__DOT__f_d_reg__DOT__value[1U] 
			 << 0x1cU) | (vlTOPp->Vortex__DOT__vx_f_d_reg__DOT__f_d_reg__DOT__value[0U] 
				      >> 4U))))) {
	vlTOPp->Vortex__DOT__vx_decode__DOT__temp_out_a_reg_data[0U] 
	    = vlTOPp->Vortex__DOT__vx_decode__DOT__glob_a_reg_data[0x18U];
	vlTOPp->Vortex__DOT__vx_decode__DOT__temp_out_a_reg_data[1U] 
	    = vlTOPp->Vortex__DOT__vx_decode__DOT__glob_a_reg_data[0x19U];
	vlTOPp->Vortex__DOT__vx_decode__DOT__temp_out_a_reg_data[2U] 
	    = vlTOPp->Vortex__DOT__vx_decode__DOT__glob_a_reg_data[0x1aU];
	vlTOPp->Vortex__DOT__vx_decode__DOT__temp_out_a_reg_data[3U] 
	    = vlTOPp->Vortex__DOT__vx_decode__DOT__glob_a_reg_data[0x1bU];
    }
    if ((7U == (0xfU & ((vlTOPp->Vortex__DOT__vx_f_d_reg__DOT__f_d_reg__DOT__value[1U] 
			 << 0x1cU) | (vlTOPp->Vortex__DOT__vx_f_d_reg__DOT__f_d_reg__DOT__value[0U] 
				      >> 4U))))) {
	vlTOPp->Vortex__DOT__vx_decode__DOT__temp_out_a_reg_data[0U] 
	    = vlTOPp->Vortex__DOT__vx_decode__DOT__glob_a_reg_data[0x1cU];
	vlTOPp->Vortex__DOT__vx_decode__DOT__temp_out_a_reg_data[1U] 
	    = vlTOPp->Vortex__DOT__vx_decode__DOT__glob_a_reg_data[0x1dU];
	vlTOPp->Vortex__DOT__vx_decode__DOT__temp_out_a_reg_data[2U] 
	    = vlTOPp->Vortex__DOT__vx_decode__DOT__glob_a_reg_data[0x1eU];
	vlTOPp->Vortex__DOT__vx_decode__DOT__temp_out_a_reg_data[3U] 
	    = vlTOPp->Vortex__DOT__vx_decode__DOT__glob_a_reg_data[0x1fU];
    }
    vlSymsp->TOP__Vortex__DOT__VX_frE_to_bckE_req.b_reg_data[0U] 
	= vlTOPp->Vortex__DOT__vx_decode__DOT__temp_out_b_reg_data[0U];
    vlSymsp->TOP__Vortex__DOT__VX_frE_to_bckE_req.b_reg_data[1U] 
	= vlTOPp->Vortex__DOT__vx_decode__DOT__temp_out_b_reg_data[1U];
    vlSymsp->TOP__Vortex__DOT__VX_frE_to_bckE_req.b_reg_data[2U] 
	= vlTOPp->Vortex__DOT__vx_decode__DOT__temp_out_b_reg_data[2U];
    vlSymsp->TOP__Vortex__DOT__VX_frE_to_bckE_req.b_reg_data[3U] 
	= vlTOPp->Vortex__DOT__vx_decode__DOT__temp_out_b_reg_data[3U];
    vlSymsp->TOP__Vortex__DOT__VX_frE_to_bckE_req.a_reg_data[0U] 
	= vlTOPp->Vortex__DOT__vx_decode__DOT__temp_out_a_reg_data[0U];
    vlSymsp->TOP__Vortex__DOT__VX_frE_to_bckE_req.a_reg_data[1U] 
	= vlTOPp->Vortex__DOT__vx_decode__DOT__temp_out_a_reg_data[1U];
    vlSymsp->TOP__Vortex__DOT__VX_frE_to_bckE_req.a_reg_data[2U] 
	= vlTOPp->Vortex__DOT__vx_decode__DOT__temp_out_a_reg_data[2U];
    vlSymsp->TOP__Vortex__DOT__VX_frE_to_bckE_req.a_reg_data[3U] 
	= vlTOPp->Vortex__DOT__vx_decode__DOT__temp_out_a_reg_data[3U];
    vlTOPp->Vortex__DOT__vx_decode__DOT__jalrs_thread_mask 
	= ((0xdU & (IData)(vlTOPp->Vortex__DOT__vx_decode__DOT__jalrs_thread_mask)) 
	   | ((1U <= vlSymsp->TOP__Vortex__DOT__VX_frE_to_bckE_req.b_reg_data[0U]) 
	      << 1U));
    vlTOPp->Vortex__DOT__vx_decode__DOT__jalrs_thread_mask 
	= ((0xbU & (IData)(vlTOPp->Vortex__DOT__vx_decode__DOT__jalrs_thread_mask)) 
	   | ((2U <= vlSymsp->TOP__Vortex__DOT__VX_frE_to_bckE_req.b_reg_data[0U]) 
	      << 2U));
    vlTOPp->Vortex__DOT__vx_decode__DOT__jalrs_thread_mask 
	= ((7U & (IData)(vlTOPp->Vortex__DOT__vx_decode__DOT__jalrs_thread_mask)) 
	   | ((3U <= vlSymsp->TOP__Vortex__DOT__VX_frE_to_bckE_req.b_reg_data[0U]) 
	      << 3U));
    __Vtemp78[0U] = (IData)((((QData)((IData)((((vlTOPp->Vortex__DOT__vx_f_d_reg__DOT__f_d_reg__DOT__value[2U] 
						 >> 1U) 
						& (0x33U 
						   == 
						   (0x7fU 
						    & ((vlTOPp->Vortex__DOT__vx_f_d_reg__DOT__f_d_reg__DOT__value[2U] 
							<< 0x18U) 
						       | (vlTOPp->Vortex__DOT__vx_f_d_reg__DOT__f_d_reg__DOT__value[1U] 
							  >> 8U)))))
					        ? (IData)(vlTOPp->Vortex__DOT__vx_decode__DOT__mul_alu)
					        : (IData)(vlTOPp->Vortex__DOT__vx_decode__DOT__temp_final_alu)))) 
			      << 0x2cU) | (((QData)((IData)(
							    (((((0x6fU 
								 == 
								 (0x7fU 
								  & ((vlTOPp->Vortex__DOT__vx_f_d_reg__DOT__f_d_reg__DOT__value[2U] 
								      << 0x18U) 
								     | (vlTOPp->Vortex__DOT__vx_f_d_reg__DOT__f_d_reg__DOT__value[1U] 
									>> 8U)))) 
								| (0x67U 
								   == 
								   (0x7fU 
								    & ((vlTOPp->Vortex__DOT__vx_f_d_reg__DOT__f_d_reg__DOT__value[2U] 
									<< 0x18U) 
								       | (vlTOPp->Vortex__DOT__vx_f_d_reg__DOT__f_d_reg__DOT__value[1U] 
									  >> 8U))))) 
							       | (IData)(vlTOPp->Vortex__DOT__vx_decode__DOT__is_jalrs)) 
							      | ((0x73U 
								  == 
								  (0x7fU 
								   & ((vlTOPp->Vortex__DOT__vx_f_d_reg__DOT__f_d_reg__DOT__value[2U] 
								       << 0x18U) 
								      | (vlTOPp->Vortex__DOT__vx_f_d_reg__DOT__f_d_reg__DOT__value[1U] 
									 >> 8U)))) 
								 & (0U 
								    == 
								    (7U 
								     & ((vlTOPp->Vortex__DOT__vx_f_d_reg__DOT__f_d_reg__DOT__value[2U] 
									 << 0xcU) 
									| (vlTOPp->Vortex__DOT__vx_f_d_reg__DOT__f_d_reg__DOT__value[1U] 
									   >> 0x14U))))))
							      ? 3U
							      : 
							     ((3U 
							       == 
							       (0x7fU 
								& ((vlTOPp->Vortex__DOT__vx_f_d_reg__DOT__f_d_reg__DOT__value[2U] 
								    << 0x18U) 
								   | (vlTOPp->Vortex__DOT__vx_f_d_reg__DOT__f_d_reg__DOT__value[1U] 
								      >> 8U))))
							       ? 2U
							       : 
							      ((((((IData)(vlTOPp->Vortex__DOT__vx_decode__DOT__is_itype) 
								   | (0x33U 
								      == 
								      (0x7fU 
								       & ((vlTOPp->Vortex__DOT__vx_f_d_reg__DOT__f_d_reg__DOT__value[2U] 
									   << 0x18U) 
									  | (vlTOPp->Vortex__DOT__vx_f_d_reg__DOT__f_d_reg__DOT__value[1U] 
									     >> 8U))))) 
								  | (0x37U 
								     == 
								     (0x7fU 
								      & ((vlTOPp->Vortex__DOT__vx_f_d_reg__DOT__f_d_reg__DOT__value[2U] 
									  << 0x18U) 
									 | (vlTOPp->Vortex__DOT__vx_f_d_reg__DOT__f_d_reg__DOT__value[1U] 
									    >> 8U))))) 
								 | (0x17U 
								    == 
								    (0x7fU 
								     & ((vlTOPp->Vortex__DOT__vx_f_d_reg__DOT__f_d_reg__DOT__value[2U] 
									 << 0x18U) 
									| (vlTOPp->Vortex__DOT__vx_f_d_reg__DOT__f_d_reg__DOT__value[1U] 
									   >> 8U))))) 
								| (IData)(vlTOPp->Vortex__DOT__vx_decode__DOT__is_csr))
							        ? 1U
							        : 0U))))) 
					    << 0x2aU) 
					   | (((QData)((IData)(
							       (1U 
								& (((IData)(vlTOPp->Vortex__DOT__vx_decode__DOT__is_itype) 
								    | (0x23U 
								       == 
								       (0x7fU 
									& ((vlTOPp->Vortex__DOT__vx_f_d_reg__DOT__f_d_reg__DOT__value[2U] 
									    << 0x18U) 
									   | (vlTOPp->Vortex__DOT__vx_f_d_reg__DOT__f_d_reg__DOT__value[1U] 
									      >> 8U)))))
								    ? 1U
								    : 0U)))) 
					       << 0x29U) 
					      | (((QData)((IData)(vlSymsp->TOP__Vortex__DOT__VX_frE_to_bckE_req.itype_immed)) 
						  << 9U) 
						 | (QData)((IData)(
								   ((0x1c0U 
								     & (((3U 
									  == 
									  (0x7fU 
									   & ((vlTOPp->Vortex__DOT__vx_f_d_reg__DOT__f_d_reg__DOT__value[2U] 
									       << 0x18U) 
									      | (vlTOPp->Vortex__DOT__vx_f_d_reg__DOT__f_d_reg__DOT__value[1U] 
										>> 8U))))
									  ? 
									 ((vlTOPp->Vortex__DOT__vx_f_d_reg__DOT__f_d_reg__DOT__value[2U] 
									   << 0xcU) 
									  | (vlTOPp->Vortex__DOT__vx_f_d_reg__DOT__f_d_reg__DOT__value[1U] 
									     >> 0x14U))
									  : 7U) 
									<< 6U)) 
								    | ((0x38U 
									& (((0x23U 
									     == 
									     (0x7fU 
									      & ((vlTOPp->Vortex__DOT__vx_f_d_reg__DOT__f_d_reg__DOT__value[2U] 
										<< 0x18U) 
										| (vlTOPp->Vortex__DOT__vx_f_d_reg__DOT__f_d_reg__DOT__value[1U] 
										>> 8U))))
									     ? 
									    ((vlTOPp->Vortex__DOT__vx_f_d_reg__DOT__f_d_reg__DOT__value[2U] 
									      << 0xcU) 
									     | (vlTOPp->Vortex__DOT__vx_f_d_reg__DOT__f_d_reg__DOT__value[1U] 
										>> 0x14U))
									     : 7U) 
									   << 3U)) 
								       | (IData)(vlSymsp->TOP__Vortex__DOT__VX_frE_to_bckE_req.branch_type))))))))));
    __Vtemp78[1U] = ((0xfffe0000U & (vlSymsp->TOP__Vortex__DOT__VX_frE_to_bckE_req.b_reg_data[0U] 
				     << 0x11U)) | (IData)(
							  ((((QData)((IData)(
									     (((vlTOPp->Vortex__DOT__vx_f_d_reg__DOT__f_d_reg__DOT__value[2U] 
										>> 1U) 
									       & (0x33U 
										== 
										(0x7fU 
										& ((vlTOPp->Vortex__DOT__vx_f_d_reg__DOT__f_d_reg__DOT__value[2U] 
										<< 0x18U) 
										| (vlTOPp->Vortex__DOT__vx_f_d_reg__DOT__f_d_reg__DOT__value[1U] 
										>> 8U)))))
									       ? (IData)(vlTOPp->Vortex__DOT__vx_decode__DOT__mul_alu)
									       : (IData)(vlTOPp->Vortex__DOT__vx_decode__DOT__temp_final_alu)))) 
							     << 0x2cU) 
							    | (((QData)((IData)(
										(((((0x6fU 
										== 
										(0x7fU 
										& ((vlTOPp->Vortex__DOT__vx_f_d_reg__DOT__f_d_reg__DOT__value[2U] 
										<< 0x18U) 
										| (vlTOPp->Vortex__DOT__vx_f_d_reg__DOT__f_d_reg__DOT__value[1U] 
										>> 8U)))) 
										| (0x67U 
										== 
										(0x7fU 
										& ((vlTOPp->Vortex__DOT__vx_f_d_reg__DOT__f_d_reg__DOT__value[2U] 
										<< 0x18U) 
										| (vlTOPp->Vortex__DOT__vx_f_d_reg__DOT__f_d_reg__DOT__value[1U] 
										>> 8U))))) 
										| (IData)(vlTOPp->Vortex__DOT__vx_decode__DOT__is_jalrs)) 
										| ((0x73U 
										== 
										(0x7fU 
										& ((vlTOPp->Vortex__DOT__vx_f_d_reg__DOT__f_d_reg__DOT__value[2U] 
										<< 0x18U) 
										| (vlTOPp->Vortex__DOT__vx_f_d_reg__DOT__f_d_reg__DOT__value[1U] 
										>> 8U)))) 
										& (0U 
										== 
										(7U 
										& ((vlTOPp->Vortex__DOT__vx_f_d_reg__DOT__f_d_reg__DOT__value[2U] 
										<< 0xcU) 
										| (vlTOPp->Vortex__DOT__vx_f_d_reg__DOT__f_d_reg__DOT__value[1U] 
										>> 0x14U))))))
										 ? 3U
										 : 
										((3U 
										== 
										(0x7fU 
										& ((vlTOPp->Vortex__DOT__vx_f_d_reg__DOT__f_d_reg__DOT__value[2U] 
										<< 0x18U) 
										| (vlTOPp->Vortex__DOT__vx_f_d_reg__DOT__f_d_reg__DOT__value[1U] 
										>> 8U))))
										 ? 2U
										 : 
										((((((IData)(vlTOPp->Vortex__DOT__vx_decode__DOT__is_itype) 
										| (0x33U 
										== 
										(0x7fU 
										& ((vlTOPp->Vortex__DOT__vx_f_d_reg__DOT__f_d_reg__DOT__value[2U] 
										<< 0x18U) 
										| (vlTOPp->Vortex__DOT__vx_f_d_reg__DOT__f_d_reg__DOT__value[1U] 
										>> 8U))))) 
										| (0x37U 
										== 
										(0x7fU 
										& ((vlTOPp->Vortex__DOT__vx_f_d_reg__DOT__f_d_reg__DOT__value[2U] 
										<< 0x18U) 
										| (vlTOPp->Vortex__DOT__vx_f_d_reg__DOT__f_d_reg__DOT__value[1U] 
										>> 8U))))) 
										| (0x17U 
										== 
										(0x7fU 
										& ((vlTOPp->Vortex__DOT__vx_f_d_reg__DOT__f_d_reg__DOT__value[2U] 
										<< 0x18U) 
										| (vlTOPp->Vortex__DOT__vx_f_d_reg__DOT__f_d_reg__DOT__value[1U] 
										>> 8U))))) 
										| (IData)(vlTOPp->Vortex__DOT__vx_decode__DOT__is_csr))
										 ? 1U
										 : 0U))))) 
								<< 0x2aU) 
							       | (((QData)((IData)(
										(1U 
										& (((IData)(vlTOPp->Vortex__DOT__vx_decode__DOT__is_itype) 
										| (0x23U 
										== 
										(0x7fU 
										& ((vlTOPp->Vortex__DOT__vx_f_d_reg__DOT__f_d_reg__DOT__value[2U] 
										<< 0x18U) 
										| (vlTOPp->Vortex__DOT__vx_f_d_reg__DOT__f_d_reg__DOT__value[1U] 
										>> 8U)))))
										 ? 1U
										 : 0U)))) 
								   << 0x29U) 
								  | (((QData)((IData)(vlSymsp->TOP__Vortex__DOT__VX_frE_to_bckE_req.itype_immed)) 
								      << 9U) 
								     | (QData)((IData)(
										((0x1c0U 
										& (((3U 
										== 
										(0x7fU 
										& ((vlTOPp->Vortex__DOT__vx_f_d_reg__DOT__f_d_reg__DOT__value[2U] 
										<< 0x18U) 
										| (vlTOPp->Vortex__DOT__vx_f_d_reg__DOT__f_d_reg__DOT__value[1U] 
										>> 8U))))
										 ? 
										((vlTOPp->Vortex__DOT__vx_f_d_reg__DOT__f_d_reg__DOT__value[2U] 
										<< 0xcU) 
										| (vlTOPp->Vortex__DOT__vx_f_d_reg__DOT__f_d_reg__DOT__value[1U] 
										>> 0x14U))
										 : 7U) 
										<< 6U)) 
										| ((0x38U 
										& (((0x23U 
										== 
										(0x7fU 
										& ((vlTOPp->Vortex__DOT__vx_f_d_reg__DOT__f_d_reg__DOT__value[2U] 
										<< 0x18U) 
										| (vlTOPp->Vortex__DOT__vx_f_d_reg__DOT__f_d_reg__DOT__value[1U] 
										>> 8U))))
										 ? 
										((vlTOPp->Vortex__DOT__vx_f_d_reg__DOT__f_d_reg__DOT__value[2U] 
										<< 0xcU) 
										| (vlTOPp->Vortex__DOT__vx_f_d_reg__DOT__f_d_reg__DOT__value[1U] 
										>> 0x14U))
										 : 7U) 
										<< 3U)) 
										| (IData)(vlSymsp->TOP__Vortex__DOT__VX_frE_to_bckE_req.branch_type))))))))) 
							   >> 0x20U)));
    vlTOPp->Vortex__DOT__vx_d_e_reg__DOT____Vcellinp__d_e_reg__in[0U] 
	= ((0xffffff00U & ((IData)((((QData)((IData)(vlSymsp->TOP__Vortex__DOT__VX_frE_to_bckE_req.jal_offset)) 
				     << 0x20U) | (QData)((IData)(
								 ((IData)(4U) 
								  + 
								  ((vlTOPp->Vortex__DOT__vx_f_d_reg__DOT__f_d_reg__DOT__value[1U] 
								    << 0x18U) 
								   | (vlTOPp->Vortex__DOT__vx_f_d_reg__DOT__f_d_reg__DOT__value[0U] 
								      >> 8U))))))) 
			   << 8U)) | ((0xf0U & (vlTOPp->Vortex__DOT__vx_f_d_reg__DOT__f_d_reg__DOT__value[0U] 
						<< 4U)) 
				      | (0xfU & ((vlTOPp->Vortex__DOT__vx_f_d_reg__DOT__f_d_reg__DOT__value[1U] 
						  << 0x1cU) 
						 | (vlTOPp->Vortex__DOT__vx_f_d_reg__DOT__f_d_reg__DOT__value[0U] 
						    >> 4U)))));
    vlTOPp->Vortex__DOT__vx_d_e_reg__DOT____Vcellinp__d_e_reg__in[1U] 
	= ((0xffU & ((IData)((((QData)((IData)(vlSymsp->TOP__Vortex__DOT__VX_frE_to_bckE_req.jal_offset)) 
			       << 0x20U) | (QData)((IData)(
							   ((IData)(4U) 
							    + 
							    ((vlTOPp->Vortex__DOT__vx_f_d_reg__DOT__f_d_reg__DOT__value[1U] 
							      << 0x18U) 
							     | (vlTOPp->Vortex__DOT__vx_f_d_reg__DOT__f_d_reg__DOT__value[0U] 
								>> 8U))))))) 
		     >> 0x18U)) | (0xffffff00U & ((IData)(
							  ((((QData)((IData)(vlSymsp->TOP__Vortex__DOT__VX_frE_to_bckE_req.jal_offset)) 
							     << 0x20U) 
							    | (QData)((IData)(
									      ((IData)(4U) 
									       + 
									       ((vlTOPp->Vortex__DOT__vx_f_d_reg__DOT__f_d_reg__DOT__value[1U] 
										<< 0x18U) 
										| (vlTOPp->Vortex__DOT__vx_f_d_reg__DOT__f_d_reg__DOT__value[0U] 
										>> 8U)))))) 
							   >> 0x20U)) 
						  << 8U)));
    vlTOPp->Vortex__DOT__vx_d_e_reg__DOT____Vcellinp__d_e_reg__in[2U] 
	= ((0xfffffe00U & (vlTOPp->Vortex__DOT__vx_f_d_reg__DOT__f_d_reg__DOT__value[0U] 
			   << 1U)) | ((0xffffff00U 
				       & ((IData)(vlSymsp->TOP__Vortex__DOT__VX_frE_to_bckE_req.jal) 
					  << 8U)) | 
				      (0xffU & ((IData)(
							((((QData)((IData)(vlSymsp->TOP__Vortex__DOT__VX_frE_to_bckE_req.jal_offset)) 
							   << 0x20U) 
							  | (QData)((IData)(
									    ((IData)(4U) 
									     + 
									     ((vlTOPp->Vortex__DOT__vx_f_d_reg__DOT__f_d_reg__DOT__value[1U] 
									       << 0x18U) 
									      | (vlTOPp->Vortex__DOT__vx_f_d_reg__DOT__f_d_reg__DOT__value[0U] 
										>> 8U)))))) 
							 >> 0x20U)) 
						>> 0x18U))));
    vlTOPp->Vortex__DOT__vx_d_e_reg__DOT____Vcellinp__d_e_reg__in[3U] 
	= ((0xe0000000U & (__Vtemp78[0U] << 0x1dU)) 
	   | ((0x1ffffe00U & (((0x37U == (0x7fU & (
						   (vlTOPp->Vortex__DOT__vx_f_d_reg__DOT__f_d_reg__DOT__value[2U] 
						    << 0x18U) 
						   | (vlTOPp->Vortex__DOT__vx_f_d_reg__DOT__f_d_reg__DOT__value[1U] 
						      >> 8U))))
			        ? ((vlTOPp->Vortex__DOT__vx_f_d_reg__DOT__f_d_reg__DOT__value[2U] 
				    << 0xcU) | (vlTOPp->Vortex__DOT__vx_f_d_reg__DOT__f_d_reg__DOT__value[1U] 
						>> 0x14U))
			        : ((0x17U == (0x7fU 
					      & ((vlTOPp->Vortex__DOT__vx_f_d_reg__DOT__f_d_reg__DOT__value[2U] 
						  << 0x18U) 
						 | (vlTOPp->Vortex__DOT__vx_f_d_reg__DOT__f_d_reg__DOT__value[1U] 
						    >> 8U))))
				    ? ((vlTOPp->Vortex__DOT__vx_f_d_reg__DOT__f_d_reg__DOT__value[2U] 
					<< 0xcU) | 
				       (vlTOPp->Vortex__DOT__vx_f_d_reg__DOT__f_d_reg__DOT__value[1U] 
					>> 0x14U)) : 0U)) 
			      << 9U)) | (0x1ffU & (
						   (0x1feU 
						    & (vlTOPp->Vortex__DOT__vx_f_d_reg__DOT__f_d_reg__DOT__value[1U] 
						       << 1U)) 
						   | (vlTOPp->Vortex__DOT__vx_f_d_reg__DOT__f_d_reg__DOT__value[0U] 
						      >> 0x1fU)))));
    vlTOPp->Vortex__DOT__vx_d_e_reg__DOT____Vcellinp__d_e_reg__in[4U] 
	= ((0x1fffffffU & (__Vtemp78[0U] >> 3U)) | 
	   (0xe0000000U & (__Vtemp78[1U] << 0x1dU)));
    vlTOPp->Vortex__DOT__vx_d_e_reg__DOT____Vcellinp__d_e_reg__in[5U] 
	= ((0x1fffffffU & (__Vtemp78[1U] >> 3U)) | 
	   (0xe0000000U & (vlSymsp->TOP__Vortex__DOT__VX_frE_to_bckE_req.b_reg_data[0U] 
			   << 0xeU)));
    vlTOPp->Vortex__DOT__vx_d_e_reg__DOT____Vcellinp__d_e_reg__in[6U] 
	= ((0x1fffffffU & ((0x3fffU & (vlSymsp->TOP__Vortex__DOT__VX_frE_to_bckE_req.b_reg_data[0U] 
				       >> 0x12U)) | 
			   (0x1fffc000U & (vlSymsp->TOP__Vortex__DOT__VX_frE_to_bckE_req.b_reg_data[1U] 
					   << 0xeU)))) 
	   | (0xe0000000U & (vlSymsp->TOP__Vortex__DOT__VX_frE_to_bckE_req.b_reg_data[1U] 
			     << 0xeU)));
    vlTOPp->Vortex__DOT__vx_d_e_reg__DOT____Vcellinp__d_e_reg__in[7U] 
	= ((0x1fffffffU & ((0x3fffU & (vlSymsp->TOP__Vortex__DOT__VX_frE_to_bckE_req.b_reg_data[1U] 
				       >> 0x12U)) | 
			   (0x1fffc000U & (vlSymsp->TOP__Vortex__DOT__VX_frE_to_bckE_req.b_reg_data[2U] 
					   << 0xeU)))) 
	   | (0xe0000000U & (vlSymsp->TOP__Vortex__DOT__VX_frE_to_bckE_req.b_reg_data[2U] 
			     << 0xeU)));
    vlTOPp->Vortex__DOT__vx_d_e_reg__DOT____Vcellinp__d_e_reg__in[8U] 
	= ((0x1fffffffU & ((0x3fffU & (vlSymsp->TOP__Vortex__DOT__VX_frE_to_bckE_req.b_reg_data[2U] 
				       >> 0x12U)) | 
			   (0x1fffc000U & (vlSymsp->TOP__Vortex__DOT__VX_frE_to_bckE_req.b_reg_data[3U] 
					   << 0xeU)))) 
	   | (0xe0000000U & (vlSymsp->TOP__Vortex__DOT__VX_frE_to_bckE_req.b_reg_data[3U] 
			     << 0xeU)));
    vlTOPp->Vortex__DOT__vx_d_e_reg__DOT____Vcellinp__d_e_reg__in[9U] 
	= ((0x1fffffffU & ((0x3fffU & (vlSymsp->TOP__Vortex__DOT__VX_frE_to_bckE_req.b_reg_data[3U] 
				       >> 0x12U)) | 
			   (0x1fffc000U & (vlSymsp->TOP__Vortex__DOT__VX_frE_to_bckE_req.a_reg_data[0U] 
					   << 0xeU)))) 
	   | (0xe0000000U & (vlSymsp->TOP__Vortex__DOT__VX_frE_to_bckE_req.a_reg_data[0U] 
			     << 0xeU)));
    vlTOPp->Vortex__DOT__vx_d_e_reg__DOT____Vcellinp__d_e_reg__in[0xaU] 
	= ((0x1fffffffU & ((0x3fffU & (vlSymsp->TOP__Vortex__DOT__VX_frE_to_bckE_req.a_reg_data[0U] 
				       >> 0x12U)) | 
			   (0x1fffc000U & (vlSymsp->TOP__Vortex__DOT__VX_frE_to_bckE_req.a_reg_data[1U] 
					   << 0xeU)))) 
	   | (0xe0000000U & (vlSymsp->TOP__Vortex__DOT__VX_frE_to_bckE_req.a_reg_data[1U] 
			     << 0xeU)));
    vlTOPp->Vortex__DOT__vx_d_e_reg__DOT____Vcellinp__d_e_reg__in[0xbU] 
	= ((0x1fffffffU & ((0x3fffU & (vlSymsp->TOP__Vortex__DOT__VX_frE_to_bckE_req.a_reg_data[1U] 
				       >> 0x12U)) | 
			   (0x1fffc000U & (vlSymsp->TOP__Vortex__DOT__VX_frE_to_bckE_req.a_reg_data[2U] 
					   << 0xeU)))) 
	   | (0xe0000000U & (vlSymsp->TOP__Vortex__DOT__VX_frE_to_bckE_req.a_reg_data[2U] 
			     << 0xeU)));
    vlTOPp->Vortex__DOT__vx_d_e_reg__DOT____Vcellinp__d_e_reg__in[0xcU] 
	= ((0x1fffffffU & ((0x3fffU & (vlSymsp->TOP__Vortex__DOT__VX_frE_to_bckE_req.a_reg_data[2U] 
				       >> 0x12U)) | 
			   (0x1fffc000U & (vlSymsp->TOP__Vortex__DOT__VX_frE_to_bckE_req.a_reg_data[3U] 
					   << 0xeU)))) 
	   | (0xe0000000U & (vlSymsp->TOP__Vortex__DOT__VX_frE_to_bckE_req.a_reg_data[3U] 
			     << 0xeU)));
    vlTOPp->Vortex__DOT__vx_d_e_reg__DOT____Vcellinp__d_e_reg__in[0xdU] 
	= ((0x1fffffffU & ((0x1f000000U & (vlTOPp->Vortex__DOT__vx_f_d_reg__DOT__f_d_reg__DOT__value[1U] 
					   << 9U)) 
			   | ((0xf80000U & ((0x10000000U 
					     & (vlTOPp->Vortex__DOT__vx_f_d_reg__DOT__f_d_reg__DOT__value[2U] 
						<< 0x1cU)) 
					    | (0xff80000U 
					       & (vlTOPp->Vortex__DOT__vx_f_d_reg__DOT__f_d_reg__DOT__value[1U] 
						  >> 4U)))) 
			      | ((0x7c000U & ((0x1ffc0000U 
					       & (vlTOPp->Vortex__DOT__vx_f_d_reg__DOT__f_d_reg__DOT__value[2U] 
						  << 0x12U)) 
					      | (0x3c000U 
						 & (vlTOPp->Vortex__DOT__vx_f_d_reg__DOT__f_d_reg__DOT__value[1U] 
						    >> 0xeU)))) 
				 | (0x3fffU & (vlSymsp->TOP__Vortex__DOT__VX_frE_to_bckE_req.a_reg_data[3U] 
					       >> 0x12U)))))) 
	   | (0xe0000000U & ((((IData)(vlTOPp->Vortex__DOT__vx_decode__DOT__is_csr) 
			       & (vlTOPp->Vortex__DOT__vx_f_d_reg__DOT__f_d_reg__DOT__value[1U] 
				  >> 0x16U)) ? (0x1fU 
						& ((vlTOPp->Vortex__DOT__vx_f_d_reg__DOT__f_d_reg__DOT__value[2U] 
						    << 9U) 
						   | (vlTOPp->Vortex__DOT__vx_f_d_reg__DOT__f_d_reg__DOT__value[1U] 
						      >> 0x17U)))
			       : vlSymsp->TOP__Vortex__DOT__VX_frE_to_bckE_req.a_reg_data[0U]) 
			     << 0x1dU)));
    vlTOPp->Vortex__DOT__vx_d_e_reg__DOT____Vcellinp__d_e_reg__in[0xeU] 
	= ((0xc0000000U & ((IData)(vlSymsp->TOP__Vortex__DOT__VX_frE_to_bckE_req.csr_address) 
			   << 0x1eU)) | ((0xe0000000U 
					  & ((IData)(vlTOPp->Vortex__DOT__vx_decode__DOT__is_csr) 
					     << 0x1dU)) 
					 | (0x1fffffffU 
					    & ((((IData)(vlTOPp->Vortex__DOT__vx_decode__DOT__is_csr) 
						 & (vlTOPp->Vortex__DOT__vx_f_d_reg__DOT__f_d_reg__DOT__value[1U] 
						    >> 0x16U))
						 ? 
						(0x1fU 
						 & ((vlTOPp->Vortex__DOT__vx_f_d_reg__DOT__f_d_reg__DOT__value[2U] 
						     << 9U) 
						    | (vlTOPp->Vortex__DOT__vx_f_d_reg__DOT__f_d_reg__DOT__value[1U] 
						       >> 0x17U)))
						 : 
						vlSymsp->TOP__Vortex__DOT__VX_frE_to_bckE_req.a_reg_data[0U]) 
					       >> 3U))));
    vlTOPp->Vortex__DOT__vx_d_e_reg__DOT____Vcellinp__d_e_reg__in[0xfU] 
	= (0x3fffffffU & ((IData)(vlSymsp->TOP__Vortex__DOT__VX_frE_to_bckE_req.csr_address) 
			  >> 2U));
    vlSymsp->TOP__Vortex__DOT__VX_warp_ctl.thread_mask 
	= ((IData)(vlTOPp->Vortex__DOT__vx_decode__DOT__is_jalrs)
	    ? (IData)(vlTOPp->Vortex__DOT__vx_decode__DOT__jalrs_thread_mask)
	    : (IData)(vlTOPp->Vortex__DOT__vx_decode__DOT__jmprt_thread_mask));
    vlTOPp->Vortex__DOT__vx_fetch__DOT__in_thread_mask[0U] 
	= (1U & (IData)(vlSymsp->TOP__Vortex__DOT__VX_warp_ctl.thread_mask));
    vlTOPp->Vortex__DOT__vx_fetch__DOT__in_thread_mask[1U] 
	= (1U & ((IData)(vlSymsp->TOP__Vortex__DOT__VX_warp_ctl.thread_mask) 
		 >> 1U));
    vlTOPp->Vortex__DOT__vx_fetch__DOT__in_thread_mask[2U] 
	= (1U & ((IData)(vlSymsp->TOP__Vortex__DOT__VX_warp_ctl.thread_mask) 
		 >> 2U));
    vlTOPp->Vortex__DOT__vx_fetch__DOT__in_thread_mask[3U] 
	= (1U & ((IData)(vlSymsp->TOP__Vortex__DOT__VX_warp_ctl.thread_mask) 
		 >> 3U));
    vlTOPp->Vortex__DOT__vx_fetch__DOT____Vcellinp__genblk2__BRA__0__KET____DOT__VX_Warp__in_thread_mask[3U] 
	= vlTOPp->Vortex__DOT__vx_fetch__DOT__in_thread_mask
	[3U];
    vlTOPp->Vortex__DOT__vx_fetch__DOT____Vcellinp__genblk2__BRA__0__KET____DOT__VX_Warp__in_thread_mask[2U] 
	= vlTOPp->Vortex__DOT__vx_fetch__DOT__in_thread_mask
	[2U];
    vlTOPp->Vortex__DOT__vx_fetch__DOT____Vcellinp__genblk2__BRA__0__KET____DOT__VX_Warp__in_thread_mask[1U] 
	= vlTOPp->Vortex__DOT__vx_fetch__DOT__in_thread_mask
	[1U];
    vlTOPp->Vortex__DOT__vx_fetch__DOT____Vcellinp__genblk2__BRA__0__KET____DOT__VX_Warp__in_thread_mask[0U] 
	= vlTOPp->Vortex__DOT__vx_fetch__DOT__in_thread_mask
	[0U];
    vlTOPp->Vortex__DOT__vx_fetch__DOT____Vcellinp__genblk2__BRA__1__KET____DOT__VX_Warp__in_thread_mask[3U] 
	= vlTOPp->Vortex__DOT__vx_fetch__DOT__in_thread_mask
	[3U];
    vlTOPp->Vortex__DOT__vx_fetch__DOT____Vcellinp__genblk2__BRA__1__KET____DOT__VX_Warp__in_thread_mask[2U] 
	= vlTOPp->Vortex__DOT__vx_fetch__DOT__in_thread_mask
	[2U];
    vlTOPp->Vortex__DOT__vx_fetch__DOT____Vcellinp__genblk2__BRA__1__KET____DOT__VX_Warp__in_thread_mask[1U] 
	= vlTOPp->Vortex__DOT__vx_fetch__DOT__in_thread_mask
	[1U];
    vlTOPp->Vortex__DOT__vx_fetch__DOT____Vcellinp__genblk2__BRA__1__KET____DOT__VX_Warp__in_thread_mask[0U] 
	= vlTOPp->Vortex__DOT__vx_fetch__DOT__in_thread_mask
	[0U];
    vlTOPp->Vortex__DOT__vx_fetch__DOT____Vcellinp__genblk2__BRA__2__KET____DOT__VX_Warp__in_thread_mask[3U] 
	= vlTOPp->Vortex__DOT__vx_fetch__DOT__in_thread_mask
	[3U];
    vlTOPp->Vortex__DOT__vx_fetch__DOT____Vcellinp__genblk2__BRA__2__KET____DOT__VX_Warp__in_thread_mask[2U] 
	= vlTOPp->Vortex__DOT__vx_fetch__DOT__in_thread_mask
	[2U];
    vlTOPp->Vortex__DOT__vx_fetch__DOT____Vcellinp__genblk2__BRA__2__KET____DOT__VX_Warp__in_thread_mask[1U] 
	= vlTOPp->Vortex__DOT__vx_fetch__DOT__in_thread_mask
	[1U];
    vlTOPp->Vortex__DOT__vx_fetch__DOT____Vcellinp__genblk2__BRA__2__KET____DOT__VX_Warp__in_thread_mask[0U] 
	= vlTOPp->Vortex__DOT__vx_fetch__DOT__in_thread_mask
	[0U];
    vlTOPp->Vortex__DOT__vx_fetch__DOT____Vcellinp__genblk2__BRA__3__KET____DOT__VX_Warp__in_thread_mask[3U] 
	= vlTOPp->Vortex__DOT__vx_fetch__DOT__in_thread_mask
	[3U];
    vlTOPp->Vortex__DOT__vx_fetch__DOT____Vcellinp__genblk2__BRA__3__KET____DOT__VX_Warp__in_thread_mask[2U] 
	= vlTOPp->Vortex__DOT__vx_fetch__DOT__in_thread_mask
	[2U];
    vlTOPp->Vortex__DOT__vx_fetch__DOT____Vcellinp__genblk2__BRA__3__KET____DOT__VX_Warp__in_thread_mask[1U] 
	= vlTOPp->Vortex__DOT__vx_fetch__DOT__in_thread_mask
	[1U];
    vlTOPp->Vortex__DOT__vx_fetch__DOT____Vcellinp__genblk2__BRA__3__KET____DOT__VX_Warp__in_thread_mask[0U] 
	= vlTOPp->Vortex__DOT__vx_fetch__DOT__in_thread_mask
	[0U];
    vlTOPp->Vortex__DOT__vx_fetch__DOT____Vcellinp__genblk2__BRA__4__KET____DOT__VX_Warp__in_thread_mask[3U] 
	= vlTOPp->Vortex__DOT__vx_fetch__DOT__in_thread_mask
	[3U];
    vlTOPp->Vortex__DOT__vx_fetch__DOT____Vcellinp__genblk2__BRA__4__KET____DOT__VX_Warp__in_thread_mask[2U] 
	= vlTOPp->Vortex__DOT__vx_fetch__DOT__in_thread_mask
	[2U];
    vlTOPp->Vortex__DOT__vx_fetch__DOT____Vcellinp__genblk2__BRA__4__KET____DOT__VX_Warp__in_thread_mask[1U] 
	= vlTOPp->Vortex__DOT__vx_fetch__DOT__in_thread_mask
	[1U];
    vlTOPp->Vortex__DOT__vx_fetch__DOT____Vcellinp__genblk2__BRA__4__KET____DOT__VX_Warp__in_thread_mask[0U] 
	= vlTOPp->Vortex__DOT__vx_fetch__DOT__in_thread_mask
	[0U];
    vlTOPp->Vortex__DOT__vx_fetch__DOT____Vcellinp__genblk2__BRA__5__KET____DOT__VX_Warp__in_thread_mask[3U] 
	= vlTOPp->Vortex__DOT__vx_fetch__DOT__in_thread_mask
	[3U];
    vlTOPp->Vortex__DOT__vx_fetch__DOT____Vcellinp__genblk2__BRA__5__KET____DOT__VX_Warp__in_thread_mask[2U] 
	= vlTOPp->Vortex__DOT__vx_fetch__DOT__in_thread_mask
	[2U];
    vlTOPp->Vortex__DOT__vx_fetch__DOT____Vcellinp__genblk2__BRA__5__KET____DOT__VX_Warp__in_thread_mask[1U] 
	= vlTOPp->Vortex__DOT__vx_fetch__DOT__in_thread_mask
	[1U];
    vlTOPp->Vortex__DOT__vx_fetch__DOT____Vcellinp__genblk2__BRA__5__KET____DOT__VX_Warp__in_thread_mask[0U] 
	= vlTOPp->Vortex__DOT__vx_fetch__DOT__in_thread_mask
	[0U];
    vlTOPp->Vortex__DOT__vx_fetch__DOT____Vcellinp__genblk2__BRA__6__KET____DOT__VX_Warp__in_thread_mask[3U] 
	= vlTOPp->Vortex__DOT__vx_fetch__DOT__in_thread_mask
	[3U];
    vlTOPp->Vortex__DOT__vx_fetch__DOT____Vcellinp__genblk2__BRA__6__KET____DOT__VX_Warp__in_thread_mask[2U] 
	= vlTOPp->Vortex__DOT__vx_fetch__DOT__in_thread_mask
	[2U];
    vlTOPp->Vortex__DOT__vx_fetch__DOT____Vcellinp__genblk2__BRA__6__KET____DOT__VX_Warp__in_thread_mask[1U] 
	= vlTOPp->Vortex__DOT__vx_fetch__DOT__in_thread_mask
	[1U];
    vlTOPp->Vortex__DOT__vx_fetch__DOT____Vcellinp__genblk2__BRA__6__KET____DOT__VX_Warp__in_thread_mask[0U] 
	= vlTOPp->Vortex__DOT__vx_fetch__DOT__in_thread_mask
	[0U];
    vlTOPp->Vortex__DOT__vx_fetch__DOT____Vcellinp__genblk2__BRA__7__KET____DOT__VX_Warp__in_thread_mask[3U] 
	= vlTOPp->Vortex__DOT__vx_fetch__DOT__in_thread_mask
	[3U];
    vlTOPp->Vortex__DOT__vx_fetch__DOT____Vcellinp__genblk2__BRA__7__KET____DOT__VX_Warp__in_thread_mask[2U] 
	= vlTOPp->Vortex__DOT__vx_fetch__DOT__in_thread_mask
	[2U];
    vlTOPp->Vortex__DOT__vx_fetch__DOT____Vcellinp__genblk2__BRA__7__KET____DOT__VX_Warp__in_thread_mask[1U] 
	= vlTOPp->Vortex__DOT__vx_fetch__DOT__in_thread_mask
	[1U];
    vlTOPp->Vortex__DOT__vx_fetch__DOT____Vcellinp__genblk2__BRA__7__KET____DOT__VX_Warp__in_thread_mask[0U] 
	= vlTOPp->Vortex__DOT__vx_fetch__DOT__in_thread_mask
	[0U];
    // ALWAYS at VX_warp.v:41
    if (((IData)(vlTOPp->Vortex__DOT__vx_fetch__DOT__remove_warp) 
	 & (0U == (0xfU & ((vlTOPp->Vortex__DOT__vx_f_d_reg__DOT__f_d_reg__DOT__value[1U] 
			    << 0x1cU) | (vlTOPp->Vortex__DOT__vx_f_d_reg__DOT__f_d_reg__DOT__value[0U] 
					 >> 4U)))))) {
	vlTOPp->Vortex__DOT__vx_fetch__DOT__genblk2__BRA__0__KET____DOT__VX_Warp__DOT__valid[3U] 
	    = vlTOPp->Vortex__DOT__vx_fetch__DOT__genblk2__BRA__0__KET____DOT__VX_Warp__DOT__valid_zero
	    [3U];
	vlTOPp->Vortex__DOT__vx_fetch__DOT__genblk2__BRA__0__KET____DOT__VX_Warp__DOT__valid[2U] 
	    = vlTOPp->Vortex__DOT__vx_fetch__DOT__genblk2__BRA__0__KET____DOT__VX_Warp__DOT__valid_zero
	    [2U];
	vlTOPp->Vortex__DOT__vx_fetch__DOT__genblk2__BRA__0__KET____DOT__VX_Warp__DOT__valid[1U] 
	    = vlTOPp->Vortex__DOT__vx_fetch__DOT__genblk2__BRA__0__KET____DOT__VX_Warp__DOT__valid_zero
	    [1U];
	vlTOPp->Vortex__DOT__vx_fetch__DOT__genblk2__BRA__0__KET____DOT__VX_Warp__DOT__valid[0U] 
	    = vlTOPp->Vortex__DOT__vx_fetch__DOT__genblk2__BRA__0__KET____DOT__VX_Warp__DOT__valid_zero
	    [0U];
    } else {
	if (vlTOPp->Vortex__DOT__vx_fetch__DOT__genblk2__BRA__0__KET____DOT__warp_zero_change_mask) {
	    vlTOPp->Vortex__DOT__vx_fetch__DOT__genblk2__BRA__0__KET____DOT__VX_Warp__DOT__valid[3U] 
		= vlTOPp->Vortex__DOT__vx_fetch__DOT____Vcellinp__genblk2__BRA__0__KET____DOT__VX_Warp__in_thread_mask
		[3U];
	    vlTOPp->Vortex__DOT__vx_fetch__DOT__genblk2__BRA__0__KET____DOT__VX_Warp__DOT__valid[2U] 
		= vlTOPp->Vortex__DOT__vx_fetch__DOT____Vcellinp__genblk2__BRA__0__KET____DOT__VX_Warp__in_thread_mask
		[2U];
	    vlTOPp->Vortex__DOT__vx_fetch__DOT__genblk2__BRA__0__KET____DOT__VX_Warp__DOT__valid[1U] 
		= vlTOPp->Vortex__DOT__vx_fetch__DOT____Vcellinp__genblk2__BRA__0__KET____DOT__VX_Warp__in_thread_mask
		[1U];
	    vlTOPp->Vortex__DOT__vx_fetch__DOT__genblk2__BRA__0__KET____DOT__VX_Warp__DOT__valid[0U] 
		= vlTOPp->Vortex__DOT__vx_fetch__DOT____Vcellinp__genblk2__BRA__0__KET____DOT__VX_Warp__in_thread_mask
		[0U];
	}
    }
    // ALWAYS at VX_warp.v:41
    if (((IData)(vlTOPp->Vortex__DOT__vx_fetch__DOT__remove_warp) 
	 & (1U == (0xfU & ((vlTOPp->Vortex__DOT__vx_f_d_reg__DOT__f_d_reg__DOT__value[1U] 
			    << 0x1cU) | (vlTOPp->Vortex__DOT__vx_f_d_reg__DOT__f_d_reg__DOT__value[0U] 
					 >> 4U)))))) {
	vlTOPp->Vortex__DOT__vx_fetch__DOT__genblk2__BRA__1__KET____DOT__VX_Warp__DOT__valid[3U] 
	    = vlTOPp->Vortex__DOT__vx_fetch__DOT__genblk2__BRA__1__KET____DOT__VX_Warp__DOT__valid_zero
	    [3U];
	vlTOPp->Vortex__DOT__vx_fetch__DOT__genblk2__BRA__1__KET____DOT__VX_Warp__DOT__valid[2U] 
	    = vlTOPp->Vortex__DOT__vx_fetch__DOT__genblk2__BRA__1__KET____DOT__VX_Warp__DOT__valid_zero
	    [2U];
	vlTOPp->Vortex__DOT__vx_fetch__DOT__genblk2__BRA__1__KET____DOT__VX_Warp__DOT__valid[1U] 
	    = vlTOPp->Vortex__DOT__vx_fetch__DOT__genblk2__BRA__1__KET____DOT__VX_Warp__DOT__valid_zero
	    [1U];
	vlTOPp->Vortex__DOT__vx_fetch__DOT__genblk2__BRA__1__KET____DOT__VX_Warp__DOT__valid[0U] 
	    = vlTOPp->Vortex__DOT__vx_fetch__DOT__genblk2__BRA__1__KET____DOT__VX_Warp__DOT__valid_zero
	    [0U];
    } else {
	if (vlTOPp->Vortex__DOT__vx_fetch__DOT__genblk2__BRA__1__KET____DOT__warp_zero_change_mask) {
	    vlTOPp->Vortex__DOT__vx_fetch__DOT__genblk2__BRA__1__KET____DOT__VX_Warp__DOT__valid[3U] 
		= vlTOPp->Vortex__DOT__vx_fetch__DOT____Vcellinp__genblk2__BRA__1__KET____DOT__VX_Warp__in_thread_mask
		[3U];
	    vlTOPp->Vortex__DOT__vx_fetch__DOT__genblk2__BRA__1__KET____DOT__VX_Warp__DOT__valid[2U] 
		= vlTOPp->Vortex__DOT__vx_fetch__DOT____Vcellinp__genblk2__BRA__1__KET____DOT__VX_Warp__in_thread_mask
		[2U];
	    vlTOPp->Vortex__DOT__vx_fetch__DOT__genblk2__BRA__1__KET____DOT__VX_Warp__DOT__valid[1U] 
		= vlTOPp->Vortex__DOT__vx_fetch__DOT____Vcellinp__genblk2__BRA__1__KET____DOT__VX_Warp__in_thread_mask
		[1U];
	    vlTOPp->Vortex__DOT__vx_fetch__DOT__genblk2__BRA__1__KET____DOT__VX_Warp__DOT__valid[0U] 
		= vlTOPp->Vortex__DOT__vx_fetch__DOT____Vcellinp__genblk2__BRA__1__KET____DOT__VX_Warp__in_thread_mask
		[0U];
	}
    }
    // ALWAYS at VX_warp.v:41
    if (((IData)(vlTOPp->Vortex__DOT__vx_fetch__DOT__remove_warp) 
	 & (2U == (0xfU & ((vlTOPp->Vortex__DOT__vx_f_d_reg__DOT__f_d_reg__DOT__value[1U] 
			    << 0x1cU) | (vlTOPp->Vortex__DOT__vx_f_d_reg__DOT__f_d_reg__DOT__value[0U] 
					 >> 4U)))))) {
	vlTOPp->Vortex__DOT__vx_fetch__DOT__genblk2__BRA__2__KET____DOT__VX_Warp__DOT__valid[3U] 
	    = vlTOPp->Vortex__DOT__vx_fetch__DOT__genblk2__BRA__2__KET____DOT__VX_Warp__DOT__valid_zero
	    [3U];
	vlTOPp->Vortex__DOT__vx_fetch__DOT__genblk2__BRA__2__KET____DOT__VX_Warp__DOT__valid[2U] 
	    = vlTOPp->Vortex__DOT__vx_fetch__DOT__genblk2__BRA__2__KET____DOT__VX_Warp__DOT__valid_zero
	    [2U];
	vlTOPp->Vortex__DOT__vx_fetch__DOT__genblk2__BRA__2__KET____DOT__VX_Warp__DOT__valid[1U] 
	    = vlTOPp->Vortex__DOT__vx_fetch__DOT__genblk2__BRA__2__KET____DOT__VX_Warp__DOT__valid_zero
	    [1U];
	vlTOPp->Vortex__DOT__vx_fetch__DOT__genblk2__BRA__2__KET____DOT__VX_Warp__DOT__valid[0U] 
	    = vlTOPp->Vortex__DOT__vx_fetch__DOT__genblk2__BRA__2__KET____DOT__VX_Warp__DOT__valid_zero
	    [0U];
    } else {
	if (vlTOPp->Vortex__DOT__vx_fetch__DOT__genblk2__BRA__2__KET____DOT__warp_zero_change_mask) {
	    vlTOPp->Vortex__DOT__vx_fetch__DOT__genblk2__BRA__2__KET____DOT__VX_Warp__DOT__valid[3U] 
		= vlTOPp->Vortex__DOT__vx_fetch__DOT____Vcellinp__genblk2__BRA__2__KET____DOT__VX_Warp__in_thread_mask
		[3U];
	    vlTOPp->Vortex__DOT__vx_fetch__DOT__genblk2__BRA__2__KET____DOT__VX_Warp__DOT__valid[2U] 
		= vlTOPp->Vortex__DOT__vx_fetch__DOT____Vcellinp__genblk2__BRA__2__KET____DOT__VX_Warp__in_thread_mask
		[2U];
	    vlTOPp->Vortex__DOT__vx_fetch__DOT__genblk2__BRA__2__KET____DOT__VX_Warp__DOT__valid[1U] 
		= vlTOPp->Vortex__DOT__vx_fetch__DOT____Vcellinp__genblk2__BRA__2__KET____DOT__VX_Warp__in_thread_mask
		[1U];
	    vlTOPp->Vortex__DOT__vx_fetch__DOT__genblk2__BRA__2__KET____DOT__VX_Warp__DOT__valid[0U] 
		= vlTOPp->Vortex__DOT__vx_fetch__DOT____Vcellinp__genblk2__BRA__2__KET____DOT__VX_Warp__in_thread_mask
		[0U];
	}
    }
    // ALWAYS at VX_warp.v:41
    if (((IData)(vlTOPp->Vortex__DOT__vx_fetch__DOT__remove_warp) 
	 & (3U == (0xfU & ((vlTOPp->Vortex__DOT__vx_f_d_reg__DOT__f_d_reg__DOT__value[1U] 
			    << 0x1cU) | (vlTOPp->Vortex__DOT__vx_f_d_reg__DOT__f_d_reg__DOT__value[0U] 
					 >> 4U)))))) {
	vlTOPp->Vortex__DOT__vx_fetch__DOT__genblk2__BRA__3__KET____DOT__VX_Warp__DOT__valid[3U] 
	    = vlTOPp->Vortex__DOT__vx_fetch__DOT__genblk2__BRA__3__KET____DOT__VX_Warp__DOT__valid_zero
	    [3U];
	vlTOPp->Vortex__DOT__vx_fetch__DOT__genblk2__BRA__3__KET____DOT__VX_Warp__DOT__valid[2U] 
	    = vlTOPp->Vortex__DOT__vx_fetch__DOT__genblk2__BRA__3__KET____DOT__VX_Warp__DOT__valid_zero
	    [2U];
	vlTOPp->Vortex__DOT__vx_fetch__DOT__genblk2__BRA__3__KET____DOT__VX_Warp__DOT__valid[1U] 
	    = vlTOPp->Vortex__DOT__vx_fetch__DOT__genblk2__BRA__3__KET____DOT__VX_Warp__DOT__valid_zero
	    [1U];
	vlTOPp->Vortex__DOT__vx_fetch__DOT__genblk2__BRA__3__KET____DOT__VX_Warp__DOT__valid[0U] 
	    = vlTOPp->Vortex__DOT__vx_fetch__DOT__genblk2__BRA__3__KET____DOT__VX_Warp__DOT__valid_zero
	    [0U];
    } else {
	if (vlTOPp->Vortex__DOT__vx_fetch__DOT__genblk2__BRA__3__KET____DOT__warp_zero_change_mask) {
	    vlTOPp->Vortex__DOT__vx_fetch__DOT__genblk2__BRA__3__KET____DOT__VX_Warp__DOT__valid[3U] 
		= vlTOPp->Vortex__DOT__vx_fetch__DOT____Vcellinp__genblk2__BRA__3__KET____DOT__VX_Warp__in_thread_mask
		[3U];
	    vlTOPp->Vortex__DOT__vx_fetch__DOT__genblk2__BRA__3__KET____DOT__VX_Warp__DOT__valid[2U] 
		= vlTOPp->Vortex__DOT__vx_fetch__DOT____Vcellinp__genblk2__BRA__3__KET____DOT__VX_Warp__in_thread_mask
		[2U];
	    vlTOPp->Vortex__DOT__vx_fetch__DOT__genblk2__BRA__3__KET____DOT__VX_Warp__DOT__valid[1U] 
		= vlTOPp->Vortex__DOT__vx_fetch__DOT____Vcellinp__genblk2__BRA__3__KET____DOT__VX_Warp__in_thread_mask
		[1U];
	    vlTOPp->Vortex__DOT__vx_fetch__DOT__genblk2__BRA__3__KET____DOT__VX_Warp__DOT__valid[0U] 
		= vlTOPp->Vortex__DOT__vx_fetch__DOT____Vcellinp__genblk2__BRA__3__KET____DOT__VX_Warp__in_thread_mask
		[0U];
	}
    }
    // ALWAYS at VX_warp.v:41
    if (((IData)(vlTOPp->Vortex__DOT__vx_fetch__DOT__remove_warp) 
	 & (4U == (0xfU & ((vlTOPp->Vortex__DOT__vx_f_d_reg__DOT__f_d_reg__DOT__value[1U] 
			    << 0x1cU) | (vlTOPp->Vortex__DOT__vx_f_d_reg__DOT__f_d_reg__DOT__value[0U] 
					 >> 4U)))))) {
	vlTOPp->Vortex__DOT__vx_fetch__DOT__genblk2__BRA__4__KET____DOT__VX_Warp__DOT__valid[3U] 
	    = vlTOPp->Vortex__DOT__vx_fetch__DOT__genblk2__BRA__4__KET____DOT__VX_Warp__DOT__valid_zero
	    [3U];
	vlTOPp->Vortex__DOT__vx_fetch__DOT__genblk2__BRA__4__KET____DOT__VX_Warp__DOT__valid[2U] 
	    = vlTOPp->Vortex__DOT__vx_fetch__DOT__genblk2__BRA__4__KET____DOT__VX_Warp__DOT__valid_zero
	    [2U];
	vlTOPp->Vortex__DOT__vx_fetch__DOT__genblk2__BRA__4__KET____DOT__VX_Warp__DOT__valid[1U] 
	    = vlTOPp->Vortex__DOT__vx_fetch__DOT__genblk2__BRA__4__KET____DOT__VX_Warp__DOT__valid_zero
	    [1U];
	vlTOPp->Vortex__DOT__vx_fetch__DOT__genblk2__BRA__4__KET____DOT__VX_Warp__DOT__valid[0U] 
	    = vlTOPp->Vortex__DOT__vx_fetch__DOT__genblk2__BRA__4__KET____DOT__VX_Warp__DOT__valid_zero
	    [0U];
    } else {
	if (vlTOPp->Vortex__DOT__vx_fetch__DOT__genblk2__BRA__4__KET____DOT__warp_zero_change_mask) {
	    vlTOPp->Vortex__DOT__vx_fetch__DOT__genblk2__BRA__4__KET____DOT__VX_Warp__DOT__valid[3U] 
		= vlTOPp->Vortex__DOT__vx_fetch__DOT____Vcellinp__genblk2__BRA__4__KET____DOT__VX_Warp__in_thread_mask
		[3U];
	    vlTOPp->Vortex__DOT__vx_fetch__DOT__genblk2__BRA__4__KET____DOT__VX_Warp__DOT__valid[2U] 
		= vlTOPp->Vortex__DOT__vx_fetch__DOT____Vcellinp__genblk2__BRA__4__KET____DOT__VX_Warp__in_thread_mask
		[2U];
	    vlTOPp->Vortex__DOT__vx_fetch__DOT__genblk2__BRA__4__KET____DOT__VX_Warp__DOT__valid[1U] 
		= vlTOPp->Vortex__DOT__vx_fetch__DOT____Vcellinp__genblk2__BRA__4__KET____DOT__VX_Warp__in_thread_mask
		[1U];
	    vlTOPp->Vortex__DOT__vx_fetch__DOT__genblk2__BRA__4__KET____DOT__VX_Warp__DOT__valid[0U] 
		= vlTOPp->Vortex__DOT__vx_fetch__DOT____Vcellinp__genblk2__BRA__4__KET____DOT__VX_Warp__in_thread_mask
		[0U];
	}
    }
    // ALWAYS at VX_warp.v:41
    if (((IData)(vlTOPp->Vortex__DOT__vx_fetch__DOT__remove_warp) 
	 & (5U == (0xfU & ((vlTOPp->Vortex__DOT__vx_f_d_reg__DOT__f_d_reg__DOT__value[1U] 
			    << 0x1cU) | (vlTOPp->Vortex__DOT__vx_f_d_reg__DOT__f_d_reg__DOT__value[0U] 
					 >> 4U)))))) {
	vlTOPp->Vortex__DOT__vx_fetch__DOT__genblk2__BRA__5__KET____DOT__VX_Warp__DOT__valid[3U] 
	    = vlTOPp->Vortex__DOT__vx_fetch__DOT__genblk2__BRA__5__KET____DOT__VX_Warp__DOT__valid_zero
	    [3U];
	vlTOPp->Vortex__DOT__vx_fetch__DOT__genblk2__BRA__5__KET____DOT__VX_Warp__DOT__valid[2U] 
	    = vlTOPp->Vortex__DOT__vx_fetch__DOT__genblk2__BRA__5__KET____DOT__VX_Warp__DOT__valid_zero
	    [2U];
	vlTOPp->Vortex__DOT__vx_fetch__DOT__genblk2__BRA__5__KET____DOT__VX_Warp__DOT__valid[1U] 
	    = vlTOPp->Vortex__DOT__vx_fetch__DOT__genblk2__BRA__5__KET____DOT__VX_Warp__DOT__valid_zero
	    [1U];
	vlTOPp->Vortex__DOT__vx_fetch__DOT__genblk2__BRA__5__KET____DOT__VX_Warp__DOT__valid[0U] 
	    = vlTOPp->Vortex__DOT__vx_fetch__DOT__genblk2__BRA__5__KET____DOT__VX_Warp__DOT__valid_zero
	    [0U];
    } else {
	if (vlTOPp->Vortex__DOT__vx_fetch__DOT__genblk2__BRA__5__KET____DOT__warp_zero_change_mask) {
	    vlTOPp->Vortex__DOT__vx_fetch__DOT__genblk2__BRA__5__KET____DOT__VX_Warp__DOT__valid[3U] 
		= vlTOPp->Vortex__DOT__vx_fetch__DOT____Vcellinp__genblk2__BRA__5__KET____DOT__VX_Warp__in_thread_mask
		[3U];
	    vlTOPp->Vortex__DOT__vx_fetch__DOT__genblk2__BRA__5__KET____DOT__VX_Warp__DOT__valid[2U] 
		= vlTOPp->Vortex__DOT__vx_fetch__DOT____Vcellinp__genblk2__BRA__5__KET____DOT__VX_Warp__in_thread_mask
		[2U];
	    vlTOPp->Vortex__DOT__vx_fetch__DOT__genblk2__BRA__5__KET____DOT__VX_Warp__DOT__valid[1U] 
		= vlTOPp->Vortex__DOT__vx_fetch__DOT____Vcellinp__genblk2__BRA__5__KET____DOT__VX_Warp__in_thread_mask
		[1U];
	    vlTOPp->Vortex__DOT__vx_fetch__DOT__genblk2__BRA__5__KET____DOT__VX_Warp__DOT__valid[0U] 
		= vlTOPp->Vortex__DOT__vx_fetch__DOT____Vcellinp__genblk2__BRA__5__KET____DOT__VX_Warp__in_thread_mask
		[0U];
	}
    }
    // ALWAYS at VX_warp.v:41
    if (((IData)(vlTOPp->Vortex__DOT__vx_fetch__DOT__remove_warp) 
	 & (6U == (0xfU & ((vlTOPp->Vortex__DOT__vx_f_d_reg__DOT__f_d_reg__DOT__value[1U] 
			    << 0x1cU) | (vlTOPp->Vortex__DOT__vx_f_d_reg__DOT__f_d_reg__DOT__value[0U] 
					 >> 4U)))))) {
	vlTOPp->Vortex__DOT__vx_fetch__DOT__genblk2__BRA__6__KET____DOT__VX_Warp__DOT__valid[3U] 
	    = vlTOPp->Vortex__DOT__vx_fetch__DOT__genblk2__BRA__6__KET____DOT__VX_Warp__DOT__valid_zero
	    [3U];
	vlTOPp->Vortex__DOT__vx_fetch__DOT__genblk2__BRA__6__KET____DOT__VX_Warp__DOT__valid[2U] 
	    = vlTOPp->Vortex__DOT__vx_fetch__DOT__genblk2__BRA__6__KET____DOT__VX_Warp__DOT__valid_zero
	    [2U];
	vlTOPp->Vortex__DOT__vx_fetch__DOT__genblk2__BRA__6__KET____DOT__VX_Warp__DOT__valid[1U] 
	    = vlTOPp->Vortex__DOT__vx_fetch__DOT__genblk2__BRA__6__KET____DOT__VX_Warp__DOT__valid_zero
	    [1U];
	vlTOPp->Vortex__DOT__vx_fetch__DOT__genblk2__BRA__6__KET____DOT__VX_Warp__DOT__valid[0U] 
	    = vlTOPp->Vortex__DOT__vx_fetch__DOT__genblk2__BRA__6__KET____DOT__VX_Warp__DOT__valid_zero
	    [0U];
    } else {
	if (vlTOPp->Vortex__DOT__vx_fetch__DOT__genblk2__BRA__6__KET____DOT__warp_zero_change_mask) {
	    vlTOPp->Vortex__DOT__vx_fetch__DOT__genblk2__BRA__6__KET____DOT__VX_Warp__DOT__valid[3U] 
		= vlTOPp->Vortex__DOT__vx_fetch__DOT____Vcellinp__genblk2__BRA__6__KET____DOT__VX_Warp__in_thread_mask
		[3U];
	    vlTOPp->Vortex__DOT__vx_fetch__DOT__genblk2__BRA__6__KET____DOT__VX_Warp__DOT__valid[2U] 
		= vlTOPp->Vortex__DOT__vx_fetch__DOT____Vcellinp__genblk2__BRA__6__KET____DOT__VX_Warp__in_thread_mask
		[2U];
	    vlTOPp->Vortex__DOT__vx_fetch__DOT__genblk2__BRA__6__KET____DOT__VX_Warp__DOT__valid[1U] 
		= vlTOPp->Vortex__DOT__vx_fetch__DOT____Vcellinp__genblk2__BRA__6__KET____DOT__VX_Warp__in_thread_mask
		[1U];
	    vlTOPp->Vortex__DOT__vx_fetch__DOT__genblk2__BRA__6__KET____DOT__VX_Warp__DOT__valid[0U] 
		= vlTOPp->Vortex__DOT__vx_fetch__DOT____Vcellinp__genblk2__BRA__6__KET____DOT__VX_Warp__in_thread_mask
		[0U];
	}
    }
    // ALWAYS at VX_warp.v:41
    if (((IData)(vlTOPp->Vortex__DOT__vx_fetch__DOT__remove_warp) 
	 & (7U == (0xfU & ((vlTOPp->Vortex__DOT__vx_f_d_reg__DOT__f_d_reg__DOT__value[1U] 
			    << 0x1cU) | (vlTOPp->Vortex__DOT__vx_f_d_reg__DOT__f_d_reg__DOT__value[0U] 
					 >> 4U)))))) {
	vlTOPp->Vortex__DOT__vx_fetch__DOT__genblk2__BRA__7__KET____DOT__VX_Warp__DOT__valid[3U] 
	    = vlTOPp->Vortex__DOT__vx_fetch__DOT__genblk2__BRA__7__KET____DOT__VX_Warp__DOT__valid_zero
	    [3U];
	vlTOPp->Vortex__DOT__vx_fetch__DOT__genblk2__BRA__7__KET____DOT__VX_Warp__DOT__valid[2U] 
	    = vlTOPp->Vortex__DOT__vx_fetch__DOT__genblk2__BRA__7__KET____DOT__VX_Warp__DOT__valid_zero
	    [2U];
	vlTOPp->Vortex__DOT__vx_fetch__DOT__genblk2__BRA__7__KET____DOT__VX_Warp__DOT__valid[1U] 
	    = vlTOPp->Vortex__DOT__vx_fetch__DOT__genblk2__BRA__7__KET____DOT__VX_Warp__DOT__valid_zero
	    [1U];
	vlTOPp->Vortex__DOT__vx_fetch__DOT__genblk2__BRA__7__KET____DOT__VX_Warp__DOT__valid[0U] 
	    = vlTOPp->Vortex__DOT__vx_fetch__DOT__genblk2__BRA__7__KET____DOT__VX_Warp__DOT__valid_zero
	    [0U];
    } else {
	if (vlTOPp->Vortex__DOT__vx_fetch__DOT__genblk2__BRA__7__KET____DOT__warp_zero_change_mask) {
	    vlTOPp->Vortex__DOT__vx_fetch__DOT__genblk2__BRA__7__KET____DOT__VX_Warp__DOT__valid[3U] 
		= vlTOPp->Vortex__DOT__vx_fetch__DOT____Vcellinp__genblk2__BRA__7__KET____DOT__VX_Warp__in_thread_mask
		[3U];
	    vlTOPp->Vortex__DOT__vx_fetch__DOT__genblk2__BRA__7__KET____DOT__VX_Warp__DOT__valid[2U] 
		= vlTOPp->Vortex__DOT__vx_fetch__DOT____Vcellinp__genblk2__BRA__7__KET____DOT__VX_Warp__in_thread_mask
		[2U];
	    vlTOPp->Vortex__DOT__vx_fetch__DOT__genblk2__BRA__7__KET____DOT__VX_Warp__DOT__valid[1U] 
		= vlTOPp->Vortex__DOT__vx_fetch__DOT____Vcellinp__genblk2__BRA__7__KET____DOT__VX_Warp__in_thread_mask
		[1U];
	    vlTOPp->Vortex__DOT__vx_fetch__DOT__genblk2__BRA__7__KET____DOT__VX_Warp__DOT__valid[0U] 
		= vlTOPp->Vortex__DOT__vx_fetch__DOT____Vcellinp__genblk2__BRA__7__KET____DOT__VX_Warp__in_thread_mask
		[0U];
	}
    }
    vlTOPp->Vortex__DOT__vx_fetch__DOT____Vcellout__genblk2__BRA__0__KET____DOT__VX_Warp__out_valid[0U] 
	= ((IData)(vlTOPp->Vortex__DOT__vx_fetch__DOT__genblk2__BRA__0__KET____DOT__warp_zero_change_mask)
	    ? vlTOPp->Vortex__DOT__vx_fetch__DOT____Vcellinp__genblk2__BRA__0__KET____DOT__VX_Warp__in_thread_mask
	   [0U] : ((~ (IData)(vlTOPp->Vortex__DOT__vx_fetch__DOT__genblk2__BRA__0__KET____DOT__warp_zero_stall)) 
		   & vlTOPp->Vortex__DOT__vx_fetch__DOT__genblk2__BRA__0__KET____DOT__VX_Warp__DOT__valid
		   [0U]));
    vlTOPp->Vortex__DOT__vx_fetch__DOT____Vcellout__genblk2__BRA__0__KET____DOT__VX_Warp__out_valid[1U] 
	= ((IData)(vlTOPp->Vortex__DOT__vx_fetch__DOT__genblk2__BRA__0__KET____DOT__warp_zero_change_mask)
	    ? vlTOPp->Vortex__DOT__vx_fetch__DOT____Vcellinp__genblk2__BRA__0__KET____DOT__VX_Warp__in_thread_mask
	   [1U] : ((~ (IData)(vlTOPp->Vortex__DOT__vx_fetch__DOT__genblk2__BRA__0__KET____DOT__warp_zero_stall)) 
		   & vlTOPp->Vortex__DOT__vx_fetch__DOT__genblk2__BRA__0__KET____DOT__VX_Warp__DOT__valid
		   [1U]));
    vlTOPp->Vortex__DOT__vx_fetch__DOT____Vcellout__genblk2__BRA__0__KET____DOT__VX_Warp__out_valid[2U] 
	= ((IData)(vlTOPp->Vortex__DOT__vx_fetch__DOT__genblk2__BRA__0__KET____DOT__warp_zero_change_mask)
	    ? vlTOPp->Vortex__DOT__vx_fetch__DOT____Vcellinp__genblk2__BRA__0__KET____DOT__VX_Warp__in_thread_mask
	   [2U] : ((~ (IData)(vlTOPp->Vortex__DOT__vx_fetch__DOT__genblk2__BRA__0__KET____DOT__warp_zero_stall)) 
		   & vlTOPp->Vortex__DOT__vx_fetch__DOT__genblk2__BRA__0__KET____DOT__VX_Warp__DOT__valid
		   [2U]));
    vlTOPp->Vortex__DOT__vx_fetch__DOT____Vcellout__genblk2__BRA__0__KET____DOT__VX_Warp__out_valid[3U] 
	= ((IData)(vlTOPp->Vortex__DOT__vx_fetch__DOT__genblk2__BRA__0__KET____DOT__warp_zero_change_mask)
	    ? vlTOPp->Vortex__DOT__vx_fetch__DOT____Vcellinp__genblk2__BRA__0__KET____DOT__VX_Warp__in_thread_mask
	   [3U] : ((~ (IData)(vlTOPp->Vortex__DOT__vx_fetch__DOT__genblk2__BRA__0__KET____DOT__warp_zero_stall)) 
		   & vlTOPp->Vortex__DOT__vx_fetch__DOT__genblk2__BRA__0__KET____DOT__VX_Warp__DOT__valid
		   [3U]));
    vlTOPp->Vortex__DOT__vx_fetch__DOT____Vcellout__genblk2__BRA__1__KET____DOT__VX_Warp__out_valid[0U] 
	= ((IData)(vlTOPp->Vortex__DOT__vx_fetch__DOT__genblk2__BRA__1__KET____DOT__warp_zero_change_mask)
	    ? vlTOPp->Vortex__DOT__vx_fetch__DOT____Vcellinp__genblk2__BRA__1__KET____DOT__VX_Warp__in_thread_mask
	   [0U] : ((~ (IData)(vlTOPp->Vortex__DOT__vx_fetch__DOT__genblk2__BRA__1__KET____DOT__warp_zero_stall)) 
		   & vlTOPp->Vortex__DOT__vx_fetch__DOT__genblk2__BRA__1__KET____DOT__VX_Warp__DOT__valid
		   [0U]));
    vlTOPp->Vortex__DOT__vx_fetch__DOT____Vcellout__genblk2__BRA__1__KET____DOT__VX_Warp__out_valid[1U] 
	= ((IData)(vlTOPp->Vortex__DOT__vx_fetch__DOT__genblk2__BRA__1__KET____DOT__warp_zero_change_mask)
	    ? vlTOPp->Vortex__DOT__vx_fetch__DOT____Vcellinp__genblk2__BRA__1__KET____DOT__VX_Warp__in_thread_mask
	   [1U] : ((~ (IData)(vlTOPp->Vortex__DOT__vx_fetch__DOT__genblk2__BRA__1__KET____DOT__warp_zero_stall)) 
		   & vlTOPp->Vortex__DOT__vx_fetch__DOT__genblk2__BRA__1__KET____DOT__VX_Warp__DOT__valid
		   [1U]));
    vlTOPp->Vortex__DOT__vx_fetch__DOT____Vcellout__genblk2__BRA__1__KET____DOT__VX_Warp__out_valid[2U] 
	= ((IData)(vlTOPp->Vortex__DOT__vx_fetch__DOT__genblk2__BRA__1__KET____DOT__warp_zero_change_mask)
	    ? vlTOPp->Vortex__DOT__vx_fetch__DOT____Vcellinp__genblk2__BRA__1__KET____DOT__VX_Warp__in_thread_mask
	   [2U] : ((~ (IData)(vlTOPp->Vortex__DOT__vx_fetch__DOT__genblk2__BRA__1__KET____DOT__warp_zero_stall)) 
		   & vlTOPp->Vortex__DOT__vx_fetch__DOT__genblk2__BRA__1__KET____DOT__VX_Warp__DOT__valid
		   [2U]));
    vlTOPp->Vortex__DOT__vx_fetch__DOT____Vcellout__genblk2__BRA__1__KET____DOT__VX_Warp__out_valid[3U] 
	= ((IData)(vlTOPp->Vortex__DOT__vx_fetch__DOT__genblk2__BRA__1__KET____DOT__warp_zero_change_mask)
	    ? vlTOPp->Vortex__DOT__vx_fetch__DOT____Vcellinp__genblk2__BRA__1__KET____DOT__VX_Warp__in_thread_mask
	   [3U] : ((~ (IData)(vlTOPp->Vortex__DOT__vx_fetch__DOT__genblk2__BRA__1__KET____DOT__warp_zero_stall)) 
		   & vlTOPp->Vortex__DOT__vx_fetch__DOT__genblk2__BRA__1__KET____DOT__VX_Warp__DOT__valid
		   [3U]));
    vlTOPp->Vortex__DOT__vx_fetch__DOT____Vcellout__genblk2__BRA__2__KET____DOT__VX_Warp__out_valid[0U] 
	= ((IData)(vlTOPp->Vortex__DOT__vx_fetch__DOT__genblk2__BRA__2__KET____DOT__warp_zero_change_mask)
	    ? vlTOPp->Vortex__DOT__vx_fetch__DOT____Vcellinp__genblk2__BRA__2__KET____DOT__VX_Warp__in_thread_mask
	   [0U] : ((~ (IData)(vlTOPp->Vortex__DOT__vx_fetch__DOT__genblk2__BRA__2__KET____DOT__warp_zero_stall)) 
		   & vlTOPp->Vortex__DOT__vx_fetch__DOT__genblk2__BRA__2__KET____DOT__VX_Warp__DOT__valid
		   [0U]));
    vlTOPp->Vortex__DOT__vx_fetch__DOT____Vcellout__genblk2__BRA__2__KET____DOT__VX_Warp__out_valid[1U] 
	= ((IData)(vlTOPp->Vortex__DOT__vx_fetch__DOT__genblk2__BRA__2__KET____DOT__warp_zero_change_mask)
	    ? vlTOPp->Vortex__DOT__vx_fetch__DOT____Vcellinp__genblk2__BRA__2__KET____DOT__VX_Warp__in_thread_mask
	   [1U] : ((~ (IData)(vlTOPp->Vortex__DOT__vx_fetch__DOT__genblk2__BRA__2__KET____DOT__warp_zero_stall)) 
		   & vlTOPp->Vortex__DOT__vx_fetch__DOT__genblk2__BRA__2__KET____DOT__VX_Warp__DOT__valid
		   [1U]));
    vlTOPp->Vortex__DOT__vx_fetch__DOT____Vcellout__genblk2__BRA__2__KET____DOT__VX_Warp__out_valid[2U] 
	= ((IData)(vlTOPp->Vortex__DOT__vx_fetch__DOT__genblk2__BRA__2__KET____DOT__warp_zero_change_mask)
	    ? vlTOPp->Vortex__DOT__vx_fetch__DOT____Vcellinp__genblk2__BRA__2__KET____DOT__VX_Warp__in_thread_mask
	   [2U] : ((~ (IData)(vlTOPp->Vortex__DOT__vx_fetch__DOT__genblk2__BRA__2__KET____DOT__warp_zero_stall)) 
		   & vlTOPp->Vortex__DOT__vx_fetch__DOT__genblk2__BRA__2__KET____DOT__VX_Warp__DOT__valid
		   [2U]));
    vlTOPp->Vortex__DOT__vx_fetch__DOT____Vcellout__genblk2__BRA__2__KET____DOT__VX_Warp__out_valid[3U] 
	= ((IData)(vlTOPp->Vortex__DOT__vx_fetch__DOT__genblk2__BRA__2__KET____DOT__warp_zero_change_mask)
	    ? vlTOPp->Vortex__DOT__vx_fetch__DOT____Vcellinp__genblk2__BRA__2__KET____DOT__VX_Warp__in_thread_mask
	   [3U] : ((~ (IData)(vlTOPp->Vortex__DOT__vx_fetch__DOT__genblk2__BRA__2__KET____DOT__warp_zero_stall)) 
		   & vlTOPp->Vortex__DOT__vx_fetch__DOT__genblk2__BRA__2__KET____DOT__VX_Warp__DOT__valid
		   [3U]));
    vlTOPp->Vortex__DOT__vx_fetch__DOT____Vcellout__genblk2__BRA__3__KET____DOT__VX_Warp__out_valid[0U] 
	= ((IData)(vlTOPp->Vortex__DOT__vx_fetch__DOT__genblk2__BRA__3__KET____DOT__warp_zero_change_mask)
	    ? vlTOPp->Vortex__DOT__vx_fetch__DOT____Vcellinp__genblk2__BRA__3__KET____DOT__VX_Warp__in_thread_mask
	   [0U] : ((~ (IData)(vlTOPp->Vortex__DOT__vx_fetch__DOT__genblk2__BRA__3__KET____DOT__warp_zero_stall)) 
		   & vlTOPp->Vortex__DOT__vx_fetch__DOT__genblk2__BRA__3__KET____DOT__VX_Warp__DOT__valid
		   [0U]));
    vlTOPp->Vortex__DOT__vx_fetch__DOT____Vcellout__genblk2__BRA__3__KET____DOT__VX_Warp__out_valid[1U] 
	= ((IData)(vlTOPp->Vortex__DOT__vx_fetch__DOT__genblk2__BRA__3__KET____DOT__warp_zero_change_mask)
	    ? vlTOPp->Vortex__DOT__vx_fetch__DOT____Vcellinp__genblk2__BRA__3__KET____DOT__VX_Warp__in_thread_mask
	   [1U] : ((~ (IData)(vlTOPp->Vortex__DOT__vx_fetch__DOT__genblk2__BRA__3__KET____DOT__warp_zero_stall)) 
		   & vlTOPp->Vortex__DOT__vx_fetch__DOT__genblk2__BRA__3__KET____DOT__VX_Warp__DOT__valid
		   [1U]));
    vlTOPp->Vortex__DOT__vx_fetch__DOT____Vcellout__genblk2__BRA__3__KET____DOT__VX_Warp__out_valid[2U] 
	= ((IData)(vlTOPp->Vortex__DOT__vx_fetch__DOT__genblk2__BRA__3__KET____DOT__warp_zero_change_mask)
	    ? vlTOPp->Vortex__DOT__vx_fetch__DOT____Vcellinp__genblk2__BRA__3__KET____DOT__VX_Warp__in_thread_mask
	   [2U] : ((~ (IData)(vlTOPp->Vortex__DOT__vx_fetch__DOT__genblk2__BRA__3__KET____DOT__warp_zero_stall)) 
		   & vlTOPp->Vortex__DOT__vx_fetch__DOT__genblk2__BRA__3__KET____DOT__VX_Warp__DOT__valid
		   [2U]));
    vlTOPp->Vortex__DOT__vx_fetch__DOT____Vcellout__genblk2__BRA__3__KET____DOT__VX_Warp__out_valid[3U] 
	= ((IData)(vlTOPp->Vortex__DOT__vx_fetch__DOT__genblk2__BRA__3__KET____DOT__warp_zero_change_mask)
	    ? vlTOPp->Vortex__DOT__vx_fetch__DOT____Vcellinp__genblk2__BRA__3__KET____DOT__VX_Warp__in_thread_mask
	   [3U] : ((~ (IData)(vlTOPp->Vortex__DOT__vx_fetch__DOT__genblk2__BRA__3__KET____DOT__warp_zero_stall)) 
		   & vlTOPp->Vortex__DOT__vx_fetch__DOT__genblk2__BRA__3__KET____DOT__VX_Warp__DOT__valid
		   [3U]));
    vlTOPp->Vortex__DOT__vx_fetch__DOT____Vcellout__genblk2__BRA__4__KET____DOT__VX_Warp__out_valid[0U] 
	= ((IData)(vlTOPp->Vortex__DOT__vx_fetch__DOT__genblk2__BRA__4__KET____DOT__warp_zero_change_mask)
	    ? vlTOPp->Vortex__DOT__vx_fetch__DOT____Vcellinp__genblk2__BRA__4__KET____DOT__VX_Warp__in_thread_mask
	   [0U] : ((~ (IData)(vlTOPp->Vortex__DOT__vx_fetch__DOT__genblk2__BRA__4__KET____DOT__warp_zero_stall)) 
		   & vlTOPp->Vortex__DOT__vx_fetch__DOT__genblk2__BRA__4__KET____DOT__VX_Warp__DOT__valid
		   [0U]));
    vlTOPp->Vortex__DOT__vx_fetch__DOT____Vcellout__genblk2__BRA__4__KET____DOT__VX_Warp__out_valid[1U] 
	= ((IData)(vlTOPp->Vortex__DOT__vx_fetch__DOT__genblk2__BRA__4__KET____DOT__warp_zero_change_mask)
	    ? vlTOPp->Vortex__DOT__vx_fetch__DOT____Vcellinp__genblk2__BRA__4__KET____DOT__VX_Warp__in_thread_mask
	   [1U] : ((~ (IData)(vlTOPp->Vortex__DOT__vx_fetch__DOT__genblk2__BRA__4__KET____DOT__warp_zero_stall)) 
		   & vlTOPp->Vortex__DOT__vx_fetch__DOT__genblk2__BRA__4__KET____DOT__VX_Warp__DOT__valid
		   [1U]));
    vlTOPp->Vortex__DOT__vx_fetch__DOT____Vcellout__genblk2__BRA__4__KET____DOT__VX_Warp__out_valid[2U] 
	= ((IData)(vlTOPp->Vortex__DOT__vx_fetch__DOT__genblk2__BRA__4__KET____DOT__warp_zero_change_mask)
	    ? vlTOPp->Vortex__DOT__vx_fetch__DOT____Vcellinp__genblk2__BRA__4__KET____DOT__VX_Warp__in_thread_mask
	   [2U] : ((~ (IData)(vlTOPp->Vortex__DOT__vx_fetch__DOT__genblk2__BRA__4__KET____DOT__warp_zero_stall)) 
		   & vlTOPp->Vortex__DOT__vx_fetch__DOT__genblk2__BRA__4__KET____DOT__VX_Warp__DOT__valid
		   [2U]));
    vlTOPp->Vortex__DOT__vx_fetch__DOT____Vcellout__genblk2__BRA__4__KET____DOT__VX_Warp__out_valid[3U] 
	= ((IData)(vlTOPp->Vortex__DOT__vx_fetch__DOT__genblk2__BRA__4__KET____DOT__warp_zero_change_mask)
	    ? vlTOPp->Vortex__DOT__vx_fetch__DOT____Vcellinp__genblk2__BRA__4__KET____DOT__VX_Warp__in_thread_mask
	   [3U] : ((~ (IData)(vlTOPp->Vortex__DOT__vx_fetch__DOT__genblk2__BRA__4__KET____DOT__warp_zero_stall)) 
		   & vlTOPp->Vortex__DOT__vx_fetch__DOT__genblk2__BRA__4__KET____DOT__VX_Warp__DOT__valid
		   [3U]));
    vlTOPp->Vortex__DOT__vx_fetch__DOT____Vcellout__genblk2__BRA__5__KET____DOT__VX_Warp__out_valid[0U] 
	= ((IData)(vlTOPp->Vortex__DOT__vx_fetch__DOT__genblk2__BRA__5__KET____DOT__warp_zero_change_mask)
	    ? vlTOPp->Vortex__DOT__vx_fetch__DOT____Vcellinp__genblk2__BRA__5__KET____DOT__VX_Warp__in_thread_mask
	   [0U] : ((~ (IData)(vlTOPp->Vortex__DOT__vx_fetch__DOT__genblk2__BRA__5__KET____DOT__warp_zero_stall)) 
		   & vlTOPp->Vortex__DOT__vx_fetch__DOT__genblk2__BRA__5__KET____DOT__VX_Warp__DOT__valid
		   [0U]));
    vlTOPp->Vortex__DOT__vx_fetch__DOT____Vcellout__genblk2__BRA__5__KET____DOT__VX_Warp__out_valid[1U] 
	= ((IData)(vlTOPp->Vortex__DOT__vx_fetch__DOT__genblk2__BRA__5__KET____DOT__warp_zero_change_mask)
	    ? vlTOPp->Vortex__DOT__vx_fetch__DOT____Vcellinp__genblk2__BRA__5__KET____DOT__VX_Warp__in_thread_mask
	   [1U] : ((~ (IData)(vlTOPp->Vortex__DOT__vx_fetch__DOT__genblk2__BRA__5__KET____DOT__warp_zero_stall)) 
		   & vlTOPp->Vortex__DOT__vx_fetch__DOT__genblk2__BRA__5__KET____DOT__VX_Warp__DOT__valid
		   [1U]));
    vlTOPp->Vortex__DOT__vx_fetch__DOT____Vcellout__genblk2__BRA__5__KET____DOT__VX_Warp__out_valid[2U] 
	= ((IData)(vlTOPp->Vortex__DOT__vx_fetch__DOT__genblk2__BRA__5__KET____DOT__warp_zero_change_mask)
	    ? vlTOPp->Vortex__DOT__vx_fetch__DOT____Vcellinp__genblk2__BRA__5__KET____DOT__VX_Warp__in_thread_mask
	   [2U] : ((~ (IData)(vlTOPp->Vortex__DOT__vx_fetch__DOT__genblk2__BRA__5__KET____DOT__warp_zero_stall)) 
		   & vlTOPp->Vortex__DOT__vx_fetch__DOT__genblk2__BRA__5__KET____DOT__VX_Warp__DOT__valid
		   [2U]));
    vlTOPp->Vortex__DOT__vx_fetch__DOT____Vcellout__genblk2__BRA__5__KET____DOT__VX_Warp__out_valid[3U] 
	= ((IData)(vlTOPp->Vortex__DOT__vx_fetch__DOT__genblk2__BRA__5__KET____DOT__warp_zero_change_mask)
	    ? vlTOPp->Vortex__DOT__vx_fetch__DOT____Vcellinp__genblk2__BRA__5__KET____DOT__VX_Warp__in_thread_mask
	   [3U] : ((~ (IData)(vlTOPp->Vortex__DOT__vx_fetch__DOT__genblk2__BRA__5__KET____DOT__warp_zero_stall)) 
		   & vlTOPp->Vortex__DOT__vx_fetch__DOT__genblk2__BRA__5__KET____DOT__VX_Warp__DOT__valid
		   [3U]));
    vlTOPp->Vortex__DOT__vx_fetch__DOT____Vcellout__genblk2__BRA__6__KET____DOT__VX_Warp__out_valid[0U] 
	= ((IData)(vlTOPp->Vortex__DOT__vx_fetch__DOT__genblk2__BRA__6__KET____DOT__warp_zero_change_mask)
	    ? vlTOPp->Vortex__DOT__vx_fetch__DOT____Vcellinp__genblk2__BRA__6__KET____DOT__VX_Warp__in_thread_mask
	   [0U] : ((~ (IData)(vlTOPp->Vortex__DOT__vx_fetch__DOT__genblk2__BRA__6__KET____DOT__warp_zero_stall)) 
		   & vlTOPp->Vortex__DOT__vx_fetch__DOT__genblk2__BRA__6__KET____DOT__VX_Warp__DOT__valid
		   [0U]));
    vlTOPp->Vortex__DOT__vx_fetch__DOT____Vcellout__genblk2__BRA__6__KET____DOT__VX_Warp__out_valid[1U] 
	= ((IData)(vlTOPp->Vortex__DOT__vx_fetch__DOT__genblk2__BRA__6__KET____DOT__warp_zero_change_mask)
	    ? vlTOPp->Vortex__DOT__vx_fetch__DOT____Vcellinp__genblk2__BRA__6__KET____DOT__VX_Warp__in_thread_mask
	   [1U] : ((~ (IData)(vlTOPp->Vortex__DOT__vx_fetch__DOT__genblk2__BRA__6__KET____DOT__warp_zero_stall)) 
		   & vlTOPp->Vortex__DOT__vx_fetch__DOT__genblk2__BRA__6__KET____DOT__VX_Warp__DOT__valid
		   [1U]));
    vlTOPp->Vortex__DOT__vx_fetch__DOT____Vcellout__genblk2__BRA__6__KET____DOT__VX_Warp__out_valid[2U] 
	= ((IData)(vlTOPp->Vortex__DOT__vx_fetch__DOT__genblk2__BRA__6__KET____DOT__warp_zero_change_mask)
	    ? vlTOPp->Vortex__DOT__vx_fetch__DOT____Vcellinp__genblk2__BRA__6__KET____DOT__VX_Warp__in_thread_mask
	   [2U] : ((~ (IData)(vlTOPp->Vortex__DOT__vx_fetch__DOT__genblk2__BRA__6__KET____DOT__warp_zero_stall)) 
		   & vlTOPp->Vortex__DOT__vx_fetch__DOT__genblk2__BRA__6__KET____DOT__VX_Warp__DOT__valid
		   [2U]));
    vlTOPp->Vortex__DOT__vx_fetch__DOT____Vcellout__genblk2__BRA__6__KET____DOT__VX_Warp__out_valid[3U] 
	= ((IData)(vlTOPp->Vortex__DOT__vx_fetch__DOT__genblk2__BRA__6__KET____DOT__warp_zero_change_mask)
	    ? vlTOPp->Vortex__DOT__vx_fetch__DOT____Vcellinp__genblk2__BRA__6__KET____DOT__VX_Warp__in_thread_mask
	   [3U] : ((~ (IData)(vlTOPp->Vortex__DOT__vx_fetch__DOT__genblk2__BRA__6__KET____DOT__warp_zero_stall)) 
		   & vlTOPp->Vortex__DOT__vx_fetch__DOT__genblk2__BRA__6__KET____DOT__VX_Warp__DOT__valid
		   [3U]));
    vlTOPp->Vortex__DOT__vx_fetch__DOT____Vcellout__genblk2__BRA__7__KET____DOT__VX_Warp__out_valid[0U] 
	= ((IData)(vlTOPp->Vortex__DOT__vx_fetch__DOT__genblk2__BRA__7__KET____DOT__warp_zero_change_mask)
	    ? vlTOPp->Vortex__DOT__vx_fetch__DOT____Vcellinp__genblk2__BRA__7__KET____DOT__VX_Warp__in_thread_mask
	   [0U] : ((~ (IData)(vlTOPp->Vortex__DOT__vx_fetch__DOT__genblk2__BRA__7__KET____DOT__warp_zero_stall)) 
		   & vlTOPp->Vortex__DOT__vx_fetch__DOT__genblk2__BRA__7__KET____DOT__VX_Warp__DOT__valid
		   [0U]));
    vlTOPp->Vortex__DOT__vx_fetch__DOT____Vcellout__genblk2__BRA__7__KET____DOT__VX_Warp__out_valid[1U] 
	= ((IData)(vlTOPp->Vortex__DOT__vx_fetch__DOT__genblk2__BRA__7__KET____DOT__warp_zero_change_mask)
	    ? vlTOPp->Vortex__DOT__vx_fetch__DOT____Vcellinp__genblk2__BRA__7__KET____DOT__VX_Warp__in_thread_mask
	   [1U] : ((~ (IData)(vlTOPp->Vortex__DOT__vx_fetch__DOT__genblk2__BRA__7__KET____DOT__warp_zero_stall)) 
		   & vlTOPp->Vortex__DOT__vx_fetch__DOT__genblk2__BRA__7__KET____DOT__VX_Warp__DOT__valid
		   [1U]));
    vlTOPp->Vortex__DOT__vx_fetch__DOT____Vcellout__genblk2__BRA__7__KET____DOT__VX_Warp__out_valid[2U] 
	= ((IData)(vlTOPp->Vortex__DOT__vx_fetch__DOT__genblk2__BRA__7__KET____DOT__warp_zero_change_mask)
	    ? vlTOPp->Vortex__DOT__vx_fetch__DOT____Vcellinp__genblk2__BRA__7__KET____DOT__VX_Warp__in_thread_mask
	   [2U] : ((~ (IData)(vlTOPp->Vortex__DOT__vx_fetch__DOT__genblk2__BRA__7__KET____DOT__warp_zero_stall)) 
		   & vlTOPp->Vortex__DOT__vx_fetch__DOT__genblk2__BRA__7__KET____DOT__VX_Warp__DOT__valid
		   [2U]));
    vlTOPp->Vortex__DOT__vx_fetch__DOT____Vcellout__genblk2__BRA__7__KET____DOT__VX_Warp__out_valid[3U] 
	= ((IData)(vlTOPp->Vortex__DOT__vx_fetch__DOT__genblk2__BRA__7__KET____DOT__warp_zero_change_mask)
	    ? vlTOPp->Vortex__DOT__vx_fetch__DOT____Vcellinp__genblk2__BRA__7__KET____DOT__VX_Warp__in_thread_mask
	   [3U] : ((~ (IData)(vlTOPp->Vortex__DOT__vx_fetch__DOT__genblk2__BRA__7__KET____DOT__warp_zero_stall)) 
		   & vlTOPp->Vortex__DOT__vx_fetch__DOT__genblk2__BRA__7__KET____DOT__VX_Warp__DOT__valid
		   [3U]));
    vlTOPp->Vortex__DOT__vx_fetch__DOT__warp_glob_valid[0U][3U] 
	= vlTOPp->Vortex__DOT__vx_fetch__DOT____Vcellout__genblk2__BRA__0__KET____DOT__VX_Warp__out_valid
	[3U];
    vlTOPp->Vortex__DOT__vx_fetch__DOT__warp_glob_valid[0U][2U] 
	= vlTOPp->Vortex__DOT__vx_fetch__DOT____Vcellout__genblk2__BRA__0__KET____DOT__VX_Warp__out_valid
	[2U];
    vlTOPp->Vortex__DOT__vx_fetch__DOT__warp_glob_valid[0U][1U] 
	= vlTOPp->Vortex__DOT__vx_fetch__DOT____Vcellout__genblk2__BRA__0__KET____DOT__VX_Warp__out_valid
	[1U];
    vlTOPp->Vortex__DOT__vx_fetch__DOT__warp_glob_valid[0U][0U] 
	= vlTOPp->Vortex__DOT__vx_fetch__DOT____Vcellout__genblk2__BRA__0__KET____DOT__VX_Warp__out_valid
	[0U];
    vlTOPp->Vortex__DOT__vx_fetch__DOT__warp_glob_valid[1U][3U] 
	= vlTOPp->Vortex__DOT__vx_fetch__DOT____Vcellout__genblk2__BRA__1__KET____DOT__VX_Warp__out_valid
	[3U];
    vlTOPp->Vortex__DOT__vx_fetch__DOT__warp_glob_valid[1U][2U] 
	= vlTOPp->Vortex__DOT__vx_fetch__DOT____Vcellout__genblk2__BRA__1__KET____DOT__VX_Warp__out_valid
	[2U];
    vlTOPp->Vortex__DOT__vx_fetch__DOT__warp_glob_valid[1U][1U] 
	= vlTOPp->Vortex__DOT__vx_fetch__DOT____Vcellout__genblk2__BRA__1__KET____DOT__VX_Warp__out_valid
	[1U];
    vlTOPp->Vortex__DOT__vx_fetch__DOT__warp_glob_valid[1U][0U] 
	= vlTOPp->Vortex__DOT__vx_fetch__DOT____Vcellout__genblk2__BRA__1__KET____DOT__VX_Warp__out_valid
	[0U];
    vlTOPp->Vortex__DOT__vx_fetch__DOT__warp_glob_valid[2U][3U] 
	= vlTOPp->Vortex__DOT__vx_fetch__DOT____Vcellout__genblk2__BRA__2__KET____DOT__VX_Warp__out_valid
	[3U];
    vlTOPp->Vortex__DOT__vx_fetch__DOT__warp_glob_valid[2U][2U] 
	= vlTOPp->Vortex__DOT__vx_fetch__DOT____Vcellout__genblk2__BRA__2__KET____DOT__VX_Warp__out_valid
	[2U];
    vlTOPp->Vortex__DOT__vx_fetch__DOT__warp_glob_valid[2U][1U] 
	= vlTOPp->Vortex__DOT__vx_fetch__DOT____Vcellout__genblk2__BRA__2__KET____DOT__VX_Warp__out_valid
	[1U];
    vlTOPp->Vortex__DOT__vx_fetch__DOT__warp_glob_valid[2U][0U] 
	= vlTOPp->Vortex__DOT__vx_fetch__DOT____Vcellout__genblk2__BRA__2__KET____DOT__VX_Warp__out_valid
	[0U];
    vlTOPp->Vortex__DOT__vx_fetch__DOT__warp_glob_valid[3U][3U] 
	= vlTOPp->Vortex__DOT__vx_fetch__DOT____Vcellout__genblk2__BRA__3__KET____DOT__VX_Warp__out_valid
	[3U];
    vlTOPp->Vortex__DOT__vx_fetch__DOT__warp_glob_valid[3U][2U] 
	= vlTOPp->Vortex__DOT__vx_fetch__DOT____Vcellout__genblk2__BRA__3__KET____DOT__VX_Warp__out_valid
	[2U];
    vlTOPp->Vortex__DOT__vx_fetch__DOT__warp_glob_valid[3U][1U] 
	= vlTOPp->Vortex__DOT__vx_fetch__DOT____Vcellout__genblk2__BRA__3__KET____DOT__VX_Warp__out_valid
	[1U];
    vlTOPp->Vortex__DOT__vx_fetch__DOT__warp_glob_valid[3U][0U] 
	= vlTOPp->Vortex__DOT__vx_fetch__DOT____Vcellout__genblk2__BRA__3__KET____DOT__VX_Warp__out_valid
	[0U];
    vlTOPp->Vortex__DOT__vx_fetch__DOT__warp_glob_valid[4U][3U] 
	= vlTOPp->Vortex__DOT__vx_fetch__DOT____Vcellout__genblk2__BRA__4__KET____DOT__VX_Warp__out_valid
	[3U];
    vlTOPp->Vortex__DOT__vx_fetch__DOT__warp_glob_valid[4U][2U] 
	= vlTOPp->Vortex__DOT__vx_fetch__DOT____Vcellout__genblk2__BRA__4__KET____DOT__VX_Warp__out_valid
	[2U];
    vlTOPp->Vortex__DOT__vx_fetch__DOT__warp_glob_valid[4U][1U] 
	= vlTOPp->Vortex__DOT__vx_fetch__DOT____Vcellout__genblk2__BRA__4__KET____DOT__VX_Warp__out_valid
	[1U];
    vlTOPp->Vortex__DOT__vx_fetch__DOT__warp_glob_valid[4U][0U] 
	= vlTOPp->Vortex__DOT__vx_fetch__DOT____Vcellout__genblk2__BRA__4__KET____DOT__VX_Warp__out_valid
	[0U];
    vlTOPp->Vortex__DOT__vx_fetch__DOT__warp_glob_valid[5U][3U] 
	= vlTOPp->Vortex__DOT__vx_fetch__DOT____Vcellout__genblk2__BRA__5__KET____DOT__VX_Warp__out_valid
	[3U];
    vlTOPp->Vortex__DOT__vx_fetch__DOT__warp_glob_valid[5U][2U] 
	= vlTOPp->Vortex__DOT__vx_fetch__DOT____Vcellout__genblk2__BRA__5__KET____DOT__VX_Warp__out_valid
	[2U];
    vlTOPp->Vortex__DOT__vx_fetch__DOT__warp_glob_valid[5U][1U] 
	= vlTOPp->Vortex__DOT__vx_fetch__DOT____Vcellout__genblk2__BRA__5__KET____DOT__VX_Warp__out_valid
	[1U];
    vlTOPp->Vortex__DOT__vx_fetch__DOT__warp_glob_valid[5U][0U] 
	= vlTOPp->Vortex__DOT__vx_fetch__DOT____Vcellout__genblk2__BRA__5__KET____DOT__VX_Warp__out_valid
	[0U];
    vlTOPp->Vortex__DOT__vx_fetch__DOT__warp_glob_valid[6U][3U] 
	= vlTOPp->Vortex__DOT__vx_fetch__DOT____Vcellout__genblk2__BRA__6__KET____DOT__VX_Warp__out_valid
	[3U];
    vlTOPp->Vortex__DOT__vx_fetch__DOT__warp_glob_valid[6U][2U] 
	= vlTOPp->Vortex__DOT__vx_fetch__DOT____Vcellout__genblk2__BRA__6__KET____DOT__VX_Warp__out_valid
	[2U];
    vlTOPp->Vortex__DOT__vx_fetch__DOT__warp_glob_valid[6U][1U] 
	= vlTOPp->Vortex__DOT__vx_fetch__DOT____Vcellout__genblk2__BRA__6__KET____DOT__VX_Warp__out_valid
	[1U];
    vlTOPp->Vortex__DOT__vx_fetch__DOT__warp_glob_valid[6U][0U] 
	= vlTOPp->Vortex__DOT__vx_fetch__DOT____Vcellout__genblk2__BRA__6__KET____DOT__VX_Warp__out_valid
	[0U];
    vlTOPp->Vortex__DOT__vx_fetch__DOT__warp_glob_valid[7U][3U] 
	= vlTOPp->Vortex__DOT__vx_fetch__DOT____Vcellout__genblk2__BRA__7__KET____DOT__VX_Warp__out_valid
	[3U];
    vlTOPp->Vortex__DOT__vx_fetch__DOT__warp_glob_valid[7U][2U] 
	= vlTOPp->Vortex__DOT__vx_fetch__DOT____Vcellout__genblk2__BRA__7__KET____DOT__VX_Warp__out_valid
	[2U];
    vlTOPp->Vortex__DOT__vx_fetch__DOT__warp_glob_valid[7U][1U] 
	= vlTOPp->Vortex__DOT__vx_fetch__DOT____Vcellout__genblk2__BRA__7__KET____DOT__VX_Warp__out_valid
	[1U];
    vlTOPp->Vortex__DOT__vx_fetch__DOT__warp_glob_valid[7U][0U] 
	= vlTOPp->Vortex__DOT__vx_fetch__DOT____Vcellout__genblk2__BRA__7__KET____DOT__VX_Warp__out_valid
	[0U];
    // ALWAYS at VX_fetch.v:177
    if ((0U == (IData)(vlTOPp->Vortex__DOT__vx_fetch__DOT__warp_num))) {
	vlTOPp->Vortex__DOT__vx_fetch__DOT__out_valid_var[0U] 
	    = vlTOPp->Vortex__DOT__vx_fetch__DOT__warp_glob_valid
	    [0U][0U];
	vlTOPp->Vortex__DOT__vx_fetch__DOT__out_valid_var[1U] 
	    = vlTOPp->Vortex__DOT__vx_fetch__DOT__warp_glob_valid
	    [0U][1U];
	vlTOPp->Vortex__DOT__vx_fetch__DOT__out_valid_var[2U] 
	    = vlTOPp->Vortex__DOT__vx_fetch__DOT__warp_glob_valid
	    [0U][2U];
	vlTOPp->Vortex__DOT__vx_fetch__DOT__out_valid_var[3U] 
	    = vlTOPp->Vortex__DOT__vx_fetch__DOT__warp_glob_valid
	    [0U][3U];
    }
    if ((1U == (IData)(vlTOPp->Vortex__DOT__vx_fetch__DOT__warp_num))) {
	vlTOPp->Vortex__DOT__vx_fetch__DOT__out_valid_var[0U] 
	    = vlTOPp->Vortex__DOT__vx_fetch__DOT__warp_glob_valid
	    [1U][0U];
	vlTOPp->Vortex__DOT__vx_fetch__DOT__out_valid_var[1U] 
	    = vlTOPp->Vortex__DOT__vx_fetch__DOT__warp_glob_valid
	    [1U][1U];
	vlTOPp->Vortex__DOT__vx_fetch__DOT__out_valid_var[2U] 
	    = vlTOPp->Vortex__DOT__vx_fetch__DOT__warp_glob_valid
	    [1U][2U];
	vlTOPp->Vortex__DOT__vx_fetch__DOT__out_valid_var[3U] 
	    = vlTOPp->Vortex__DOT__vx_fetch__DOT__warp_glob_valid
	    [1U][3U];
    }
    if ((2U == (IData)(vlTOPp->Vortex__DOT__vx_fetch__DOT__warp_num))) {
	vlTOPp->Vortex__DOT__vx_fetch__DOT__out_valid_var[0U] 
	    = vlTOPp->Vortex__DOT__vx_fetch__DOT__warp_glob_valid
	    [2U][0U];
	vlTOPp->Vortex__DOT__vx_fetch__DOT__out_valid_var[1U] 
	    = vlTOPp->Vortex__DOT__vx_fetch__DOT__warp_glob_valid
	    [2U][1U];
	vlTOPp->Vortex__DOT__vx_fetch__DOT__out_valid_var[2U] 
	    = vlTOPp->Vortex__DOT__vx_fetch__DOT__warp_glob_valid
	    [2U][2U];
	vlTOPp->Vortex__DOT__vx_fetch__DOT__out_valid_var[3U] 
	    = vlTOPp->Vortex__DOT__vx_fetch__DOT__warp_glob_valid
	    [2U][3U];
    }
    if ((3U == (IData)(vlTOPp->Vortex__DOT__vx_fetch__DOT__warp_num))) {
	vlTOPp->Vortex__DOT__vx_fetch__DOT__out_valid_var[0U] 
	    = vlTOPp->Vortex__DOT__vx_fetch__DOT__warp_glob_valid
	    [3U][0U];
	vlTOPp->Vortex__DOT__vx_fetch__DOT__out_valid_var[1U] 
	    = vlTOPp->Vortex__DOT__vx_fetch__DOT__warp_glob_valid
	    [3U][1U];
	vlTOPp->Vortex__DOT__vx_fetch__DOT__out_valid_var[2U] 
	    = vlTOPp->Vortex__DOT__vx_fetch__DOT__warp_glob_valid
	    [3U][2U];
	vlTOPp->Vortex__DOT__vx_fetch__DOT__out_valid_var[3U] 
	    = vlTOPp->Vortex__DOT__vx_fetch__DOT__warp_glob_valid
	    [3U][3U];
    }
    if ((4U == (IData)(vlTOPp->Vortex__DOT__vx_fetch__DOT__warp_num))) {
	vlTOPp->Vortex__DOT__vx_fetch__DOT__out_valid_var[0U] 
	    = vlTOPp->Vortex__DOT__vx_fetch__DOT__warp_glob_valid
	    [4U][0U];
	vlTOPp->Vortex__DOT__vx_fetch__DOT__out_valid_var[1U] 
	    = vlTOPp->Vortex__DOT__vx_fetch__DOT__warp_glob_valid
	    [4U][1U];
	vlTOPp->Vortex__DOT__vx_fetch__DOT__out_valid_var[2U] 
	    = vlTOPp->Vortex__DOT__vx_fetch__DOT__warp_glob_valid
	    [4U][2U];
	vlTOPp->Vortex__DOT__vx_fetch__DOT__out_valid_var[3U] 
	    = vlTOPp->Vortex__DOT__vx_fetch__DOT__warp_glob_valid
	    [4U][3U];
    }
    if ((5U == (IData)(vlTOPp->Vortex__DOT__vx_fetch__DOT__warp_num))) {
	vlTOPp->Vortex__DOT__vx_fetch__DOT__out_valid_var[0U] 
	    = vlTOPp->Vortex__DOT__vx_fetch__DOT__warp_glob_valid
	    [5U][0U];
	vlTOPp->Vortex__DOT__vx_fetch__DOT__out_valid_var[1U] 
	    = vlTOPp->Vortex__DOT__vx_fetch__DOT__warp_glob_valid
	    [5U][1U];
	vlTOPp->Vortex__DOT__vx_fetch__DOT__out_valid_var[2U] 
	    = vlTOPp->Vortex__DOT__vx_fetch__DOT__warp_glob_valid
	    [5U][2U];
	vlTOPp->Vortex__DOT__vx_fetch__DOT__out_valid_var[3U] 
	    = vlTOPp->Vortex__DOT__vx_fetch__DOT__warp_glob_valid
	    [5U][3U];
    }
    if ((6U == (IData)(vlTOPp->Vortex__DOT__vx_fetch__DOT__warp_num))) {
	vlTOPp->Vortex__DOT__vx_fetch__DOT__out_valid_var[0U] 
	    = vlTOPp->Vortex__DOT__vx_fetch__DOT__warp_glob_valid
	    [6U][0U];
	vlTOPp->Vortex__DOT__vx_fetch__DOT__out_valid_var[1U] 
	    = vlTOPp->Vortex__DOT__vx_fetch__DOT__warp_glob_valid
	    [6U][1U];
	vlTOPp->Vortex__DOT__vx_fetch__DOT__out_valid_var[2U] 
	    = vlTOPp->Vortex__DOT__vx_fetch__DOT__warp_glob_valid
	    [6U][2U];
	vlTOPp->Vortex__DOT__vx_fetch__DOT__out_valid_var[3U] 
	    = vlTOPp->Vortex__DOT__vx_fetch__DOT__warp_glob_valid
	    [6U][3U];
    }
    if ((7U == (IData)(vlTOPp->Vortex__DOT__vx_fetch__DOT__warp_num))) {
	vlTOPp->Vortex__DOT__vx_fetch__DOT__out_valid_var[0U] 
	    = vlTOPp->Vortex__DOT__vx_fetch__DOT__warp_glob_valid
	    [7U][0U];
	vlTOPp->Vortex__DOT__vx_fetch__DOT__out_valid_var[1U] 
	    = vlTOPp->Vortex__DOT__vx_fetch__DOT__warp_glob_valid
	    [7U][1U];
	vlTOPp->Vortex__DOT__vx_fetch__DOT__out_valid_var[2U] 
	    = vlTOPp->Vortex__DOT__vx_fetch__DOT__warp_glob_valid
	    [7U][2U];
	vlTOPp->Vortex__DOT__vx_fetch__DOT__out_valid_var[3U] 
	    = vlTOPp->Vortex__DOT__vx_fetch__DOT__warp_glob_valid
	    [7U][3U];
    }
    vlSymsp->TOP__Vortex__DOT__fe_inst_meta_fd.valid 
	= ((0xeU & (IData)(vlSymsp->TOP__Vortex__DOT__fe_inst_meta_fd.valid)) 
	   | vlTOPp->Vortex__DOT__vx_fetch__DOT__out_valid_var
	   [0U]);
    vlSymsp->TOP__Vortex__DOT__fe_inst_meta_fd.valid 
	= ((0xdU & (IData)(vlSymsp->TOP__Vortex__DOT__fe_inst_meta_fd.valid)) 
	   | (vlTOPp->Vortex__DOT__vx_fetch__DOT__out_valid_var
	      [1U] << 1U));
    vlSymsp->TOP__Vortex__DOT__fe_inst_meta_fd.valid 
	= ((0xbU & (IData)(vlSymsp->TOP__Vortex__DOT__fe_inst_meta_fd.valid)) 
	   | (vlTOPp->Vortex__DOT__vx_fetch__DOT__out_valid_var
	      [2U] << 2U));
    vlSymsp->TOP__Vortex__DOT__fe_inst_meta_fd.valid 
	= ((7U & (IData)(vlSymsp->TOP__Vortex__DOT__fe_inst_meta_fd.valid)) 
	   | (vlTOPp->Vortex__DOT__vx_fetch__DOT__out_valid_var
	      [3U] << 3U));
}

VL_INLINE_OPT void VVortex::_sequent__TOP__4(VVortex__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VVortex::_sequent__TOP__4\n"); );
    VVortex* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    // Begin mtask footprint  all: 
    VL_SIG8(__Vdly__Vortex__DOT__vx_fetch__DOT__warp_count,3,0);
    // Body
    __Vdly__Vortex__DOT__vx_fetch__DOT__warp_count 
	= vlTOPp->Vortex__DOT__vx_fetch__DOT__warp_count;
    vlTOPp->__Vdly__Vortex__DOT__vx_fetch__DOT__warp_num 
	= vlTOPp->Vortex__DOT__vx_fetch__DOT__warp_num;
    // ALWAYS at VX_warp.v:71
    vlTOPp->Vortex__DOT__vx_fetch__DOT__genblk2__BRA__0__KET____DOT__VX_Warp__DOT__real_PC 
	= ((IData)(vlTOPp->reset) ? 0U : ((IData)(vlTOPp->Vortex__DOT__vx_fetch__DOT__genblk2__BRA__0__KET____DOT__warp_zero_stall)
					   ? vlTOPp->Vortex__DOT__vx_fetch__DOT__genblk2__BRA__0__KET____DOT__VX_Warp__DOT__temp_PC
					   : ((IData)(4U) 
					      + vlTOPp->Vortex__DOT__vx_fetch__DOT__genblk2__BRA__0__KET____DOT__VX_Warp__DOT__temp_PC)));
    // ALWAYS at VX_warp.v:71
    vlTOPp->Vortex__DOT__vx_fetch__DOT__genblk2__BRA__7__KET____DOT__VX_Warp__DOT__real_PC 
	= ((IData)(vlTOPp->reset) ? 0U : (((IData)(vlTOPp->Vortex__DOT__vx_decode__DOT__is_wspawn) 
					   & (7U == 
					      ((IData)(1U) 
					       + (IData)(vlTOPp->Vortex__DOT__vx_fetch__DOT__warp_state))))
					   ? vlSymsp->TOP__Vortex__DOT__VX_frE_to_bckE_req.a_reg_data[0U]
					   : ((IData)(vlTOPp->Vortex__DOT__vx_fetch__DOT__genblk2__BRA__7__KET____DOT__warp_zero_stall)
					       ? vlTOPp->Vortex__DOT__vx_fetch__DOT__genblk2__BRA__7__KET____DOT__VX_Warp__DOT__temp_PC
					       : ((IData)(4U) 
						  + vlTOPp->Vortex__DOT__vx_fetch__DOT__genblk2__BRA__7__KET____DOT__VX_Warp__DOT__temp_PC))));
    // ALWAYS at VX_warp.v:71
    vlTOPp->Vortex__DOT__vx_fetch__DOT__genblk2__BRA__6__KET____DOT__VX_Warp__DOT__real_PC 
	= ((IData)(vlTOPp->reset) ? 0U : (((IData)(vlTOPp->Vortex__DOT__vx_decode__DOT__is_wspawn) 
					   & (6U == 
					      ((IData)(1U) 
					       + (IData)(vlTOPp->Vortex__DOT__vx_fetch__DOT__warp_state))))
					   ? vlSymsp->TOP__Vortex__DOT__VX_frE_to_bckE_req.a_reg_data[0U]
					   : ((IData)(vlTOPp->Vortex__DOT__vx_fetch__DOT__genblk2__BRA__6__KET____DOT__warp_zero_stall)
					       ? vlTOPp->Vortex__DOT__vx_fetch__DOT__genblk2__BRA__6__KET____DOT__VX_Warp__DOT__temp_PC
					       : ((IData)(4U) 
						  + vlTOPp->Vortex__DOT__vx_fetch__DOT__genblk2__BRA__6__KET____DOT__VX_Warp__DOT__temp_PC))));
    // ALWAYS at VX_warp.v:71
    vlTOPp->Vortex__DOT__vx_fetch__DOT__genblk2__BRA__5__KET____DOT__VX_Warp__DOT__real_PC 
	= ((IData)(vlTOPp->reset) ? 0U : (((IData)(vlTOPp->Vortex__DOT__vx_decode__DOT__is_wspawn) 
					   & (5U == 
					      ((IData)(1U) 
					       + (IData)(vlTOPp->Vortex__DOT__vx_fetch__DOT__warp_state))))
					   ? vlSymsp->TOP__Vortex__DOT__VX_frE_to_bckE_req.a_reg_data[0U]
					   : ((IData)(vlTOPp->Vortex__DOT__vx_fetch__DOT__genblk2__BRA__5__KET____DOT__warp_zero_stall)
					       ? vlTOPp->Vortex__DOT__vx_fetch__DOT__genblk2__BRA__5__KET____DOT__VX_Warp__DOT__temp_PC
					       : ((IData)(4U) 
						  + vlTOPp->Vortex__DOT__vx_fetch__DOT__genblk2__BRA__5__KET____DOT__VX_Warp__DOT__temp_PC))));
    // ALWAYS at VX_warp.v:71
    vlTOPp->Vortex__DOT__vx_fetch__DOT__genblk2__BRA__4__KET____DOT__VX_Warp__DOT__real_PC 
	= ((IData)(vlTOPp->reset) ? 0U : (((IData)(vlTOPp->Vortex__DOT__vx_decode__DOT__is_wspawn) 
					   & (4U == 
					      ((IData)(1U) 
					       + (IData)(vlTOPp->Vortex__DOT__vx_fetch__DOT__warp_state))))
					   ? vlSymsp->TOP__Vortex__DOT__VX_frE_to_bckE_req.a_reg_data[0U]
					   : ((IData)(vlTOPp->Vortex__DOT__vx_fetch__DOT__genblk2__BRA__4__KET____DOT__warp_zero_stall)
					       ? vlTOPp->Vortex__DOT__vx_fetch__DOT__genblk2__BRA__4__KET____DOT__VX_Warp__DOT__temp_PC
					       : ((IData)(4U) 
						  + vlTOPp->Vortex__DOT__vx_fetch__DOT__genblk2__BRA__4__KET____DOT__VX_Warp__DOT__temp_PC))));
    // ALWAYS at VX_warp.v:71
    vlTOPp->Vortex__DOT__vx_fetch__DOT__genblk2__BRA__3__KET____DOT__VX_Warp__DOT__real_PC 
	= ((IData)(vlTOPp->reset) ? 0U : (((IData)(vlTOPp->Vortex__DOT__vx_decode__DOT__is_wspawn) 
					   & (3U == 
					      ((IData)(1U) 
					       + (IData)(vlTOPp->Vortex__DOT__vx_fetch__DOT__warp_state))))
					   ? vlSymsp->TOP__Vortex__DOT__VX_frE_to_bckE_req.a_reg_data[0U]
					   : ((IData)(vlTOPp->Vortex__DOT__vx_fetch__DOT__genblk2__BRA__3__KET____DOT__warp_zero_stall)
					       ? vlTOPp->Vortex__DOT__vx_fetch__DOT__genblk2__BRA__3__KET____DOT__VX_Warp__DOT__temp_PC
					       : ((IData)(4U) 
						  + vlTOPp->Vortex__DOT__vx_fetch__DOT__genblk2__BRA__3__KET____DOT__VX_Warp__DOT__temp_PC))));
    // ALWAYS at VX_warp.v:71
    vlTOPp->Vortex__DOT__vx_fetch__DOT__genblk2__BRA__2__KET____DOT__VX_Warp__DOT__real_PC 
	= ((IData)(vlTOPp->reset) ? 0U : (((IData)(vlTOPp->Vortex__DOT__vx_decode__DOT__is_wspawn) 
					   & (2U == 
					      ((IData)(1U) 
					       + (IData)(vlTOPp->Vortex__DOT__vx_fetch__DOT__warp_state))))
					   ? vlSymsp->TOP__Vortex__DOT__VX_frE_to_bckE_req.a_reg_data[0U]
					   : ((IData)(vlTOPp->Vortex__DOT__vx_fetch__DOT__genblk2__BRA__2__KET____DOT__warp_zero_stall)
					       ? vlTOPp->Vortex__DOT__vx_fetch__DOT__genblk2__BRA__2__KET____DOT__VX_Warp__DOT__temp_PC
					       : ((IData)(4U) 
						  + vlTOPp->Vortex__DOT__vx_fetch__DOT__genblk2__BRA__2__KET____DOT__VX_Warp__DOT__temp_PC))));
    // ALWAYS at VX_warp.v:71
    vlTOPp->Vortex__DOT__vx_fetch__DOT__genblk2__BRA__1__KET____DOT__VX_Warp__DOT__real_PC 
	= ((IData)(vlTOPp->reset) ? 0U : (((IData)(vlTOPp->Vortex__DOT__vx_decode__DOT__is_wspawn) 
					   & (1U == 
					      ((IData)(1U) 
					       + (IData)(vlTOPp->Vortex__DOT__vx_fetch__DOT__warp_state))))
					   ? vlSymsp->TOP__Vortex__DOT__VX_frE_to_bckE_req.a_reg_data[0U]
					   : ((IData)(vlTOPp->Vortex__DOT__vx_fetch__DOT__genblk2__BRA__1__KET____DOT__warp_zero_stall)
					       ? vlTOPp->Vortex__DOT__vx_fetch__DOT__genblk2__BRA__1__KET____DOT__VX_Warp__DOT__temp_PC
					       : ((IData)(4U) 
						  + vlTOPp->Vortex__DOT__vx_fetch__DOT__genblk2__BRA__1__KET____DOT__VX_Warp__DOT__temp_PC))));
    // ALWAYS at VX_fetch.v:70
    vlTOPp->__Vdly__Vortex__DOT__vx_fetch__DOT__warp_num 
	= (0xfU & (((((IData)(vlTOPp->reset) | ((IData)(vlTOPp->Vortex__DOT__vx_fetch__DOT__warp_num) 
						>= (IData)(vlTOPp->Vortex__DOT__vx_fetch__DOT__warp_state))) 
		     | (IData)(vlTOPp->Vortex__DOT__vx_fetch__DOT__remove_warp)) 
		    | (IData)(vlTOPp->Vortex__DOT__vx_fetch__DOT__add_warp))
		    ? 0U : (vlTOPp->Vortex__DOT__vx_fetch__DOT__warp_glob_valid
			    [(7U & ((IData)(1U) + (IData)(vlTOPp->Vortex__DOT__vx_fetch__DOT__warp_num)))]
			     ? ((IData)(1U) + (IData)(vlTOPp->Vortex__DOT__vx_fetch__DOT__warp_num))
			     : ((IData)(2U) + (IData)(vlTOPp->Vortex__DOT__vx_fetch__DOT__warp_num)))));
    if (vlTOPp->Vortex__DOT__vx_fetch__DOT__add_warp) {
	vlTOPp->Vortex__DOT__vx_fetch__DOT__warp_state 
	    = (0xfU & ((IData)(1U) + (IData)(vlTOPp->Vortex__DOT__vx_fetch__DOT__warp_state)));
	__Vdly__Vortex__DOT__vx_fetch__DOT__warp_count 
	    = (0xfU & ((IData)(1U) + (IData)(vlTOPp->Vortex__DOT__vx_fetch__DOT__warp_count)));
    } else {
	if (vlTOPp->Vortex__DOT__vx_fetch__DOT__remove_warp) {
	    __Vdly__Vortex__DOT__vx_fetch__DOT__warp_count 
		= (0xfU & ((IData)(vlTOPp->Vortex__DOT__vx_fetch__DOT__warp_count) 
			   - (IData)(1U)));
	    if ((2U == (IData)(vlTOPp->Vortex__DOT__vx_fetch__DOT__warp_count))) {
		vlTOPp->Vortex__DOT__vx_fetch__DOT__warp_state = 0U;
	    }
	}
    }
    // ALWAYS at VX_generic_register.v:20
    vlTOPp->Vortex__DOT__vx_d_e_reg__DOT__d_e_reg__DOT__value[0U] 
	= (((IData)(vlTOPp->reset) | (((IData)(vlTOPp->Vortex__DOT__forwarding_fwd_stall) 
				       | (IData)(vlTOPp->Vortex__DOT__execute_branch_stall)) 
				      | (IData)(vlTOPp->Vortex__DOT__vx_decode__DOT__temp_out_clone_stall)))
	    ? 0U : vlTOPp->Vortex__DOT__vx_d_e_reg__DOT____Vcellinp__d_e_reg__in[0U]);
    vlTOPp->Vortex__DOT__vx_d_e_reg__DOT__d_e_reg__DOT__value[1U] 
	= (((IData)(vlTOPp->reset) | (((IData)(vlTOPp->Vortex__DOT__forwarding_fwd_stall) 
				       | (IData)(vlTOPp->Vortex__DOT__execute_branch_stall)) 
				      | (IData)(vlTOPp->Vortex__DOT__vx_decode__DOT__temp_out_clone_stall)))
	    ? 0U : vlTOPp->Vortex__DOT__vx_d_e_reg__DOT____Vcellinp__d_e_reg__in[1U]);
    vlTOPp->Vortex__DOT__vx_d_e_reg__DOT__d_e_reg__DOT__value[2U] 
	= (((IData)(vlTOPp->reset) | (((IData)(vlTOPp->Vortex__DOT__forwarding_fwd_stall) 
				       | (IData)(vlTOPp->Vortex__DOT__execute_branch_stall)) 
				      | (IData)(vlTOPp->Vortex__DOT__vx_decode__DOT__temp_out_clone_stall)))
	    ? 0U : vlTOPp->Vortex__DOT__vx_d_e_reg__DOT____Vcellinp__d_e_reg__in[2U]);
    vlTOPp->Vortex__DOT__vx_d_e_reg__DOT__d_e_reg__DOT__value[3U] 
	= (((IData)(vlTOPp->reset) | (((IData)(vlTOPp->Vortex__DOT__forwarding_fwd_stall) 
				       | (IData)(vlTOPp->Vortex__DOT__execute_branch_stall)) 
				      | (IData)(vlTOPp->Vortex__DOT__vx_decode__DOT__temp_out_clone_stall)))
	    ? 0U : vlTOPp->Vortex__DOT__vx_d_e_reg__DOT____Vcellinp__d_e_reg__in[3U]);
    vlTOPp->Vortex__DOT__vx_d_e_reg__DOT__d_e_reg__DOT__value[4U] 
	= (((IData)(vlTOPp->reset) | (((IData)(vlTOPp->Vortex__DOT__forwarding_fwd_stall) 
				       | (IData)(vlTOPp->Vortex__DOT__execute_branch_stall)) 
				      | (IData)(vlTOPp->Vortex__DOT__vx_decode__DOT__temp_out_clone_stall)))
	    ? 0U : vlTOPp->Vortex__DOT__vx_d_e_reg__DOT____Vcellinp__d_e_reg__in[4U]);
    vlTOPp->Vortex__DOT__vx_d_e_reg__DOT__d_e_reg__DOT__value[5U] 
	= (((IData)(vlTOPp->reset) | (((IData)(vlTOPp->Vortex__DOT__forwarding_fwd_stall) 
				       | (IData)(vlTOPp->Vortex__DOT__execute_branch_stall)) 
				      | (IData)(vlTOPp->Vortex__DOT__vx_decode__DOT__temp_out_clone_stall)))
	    ? 0U : vlTOPp->Vortex__DOT__vx_d_e_reg__DOT____Vcellinp__d_e_reg__in[5U]);
    vlTOPp->Vortex__DOT__vx_d_e_reg__DOT__d_e_reg__DOT__value[6U] 
	= (((IData)(vlTOPp->reset) | (((IData)(vlTOPp->Vortex__DOT__forwarding_fwd_stall) 
				       | (IData)(vlTOPp->Vortex__DOT__execute_branch_stall)) 
				      | (IData)(vlTOPp->Vortex__DOT__vx_decode__DOT__temp_out_clone_stall)))
	    ? 0U : vlTOPp->Vortex__DOT__vx_d_e_reg__DOT____Vcellinp__d_e_reg__in[6U]);
    vlTOPp->Vortex__DOT__vx_d_e_reg__DOT__d_e_reg__DOT__value[7U] 
	= (((IData)(vlTOPp->reset) | (((IData)(vlTOPp->Vortex__DOT__forwarding_fwd_stall) 
				       | (IData)(vlTOPp->Vortex__DOT__execute_branch_stall)) 
				      | (IData)(vlTOPp->Vortex__DOT__vx_decode__DOT__temp_out_clone_stall)))
	    ? 0U : vlTOPp->Vortex__DOT__vx_d_e_reg__DOT____Vcellinp__d_e_reg__in[7U]);
    vlTOPp->Vortex__DOT__vx_d_e_reg__DOT__d_e_reg__DOT__value[8U] 
	= (((IData)(vlTOPp->reset) | (((IData)(vlTOPp->Vortex__DOT__forwarding_fwd_stall) 
				       | (IData)(vlTOPp->Vortex__DOT__execute_branch_stall)) 
				      | (IData)(vlTOPp->Vortex__DOT__vx_decode__DOT__temp_out_clone_stall)))
	    ? 0U : vlTOPp->Vortex__DOT__vx_d_e_reg__DOT____Vcellinp__d_e_reg__in[8U]);
    vlTOPp->Vortex__DOT__vx_d_e_reg__DOT__d_e_reg__DOT__value[9U] 
	= (((IData)(vlTOPp->reset) | (((IData)(vlTOPp->Vortex__DOT__forwarding_fwd_stall) 
				       | (IData)(vlTOPp->Vortex__DOT__execute_branch_stall)) 
				      | (IData)(vlTOPp->Vortex__DOT__vx_decode__DOT__temp_out_clone_stall)))
	    ? 0U : vlTOPp->Vortex__DOT__vx_d_e_reg__DOT____Vcellinp__d_e_reg__in[9U]);
    vlTOPp->Vortex__DOT__vx_d_e_reg__DOT__d_e_reg__DOT__value[0xaU] 
	= (((IData)(vlTOPp->reset) | (((IData)(vlTOPp->Vortex__DOT__forwarding_fwd_stall) 
				       | (IData)(vlTOPp->Vortex__DOT__execute_branch_stall)) 
				      | (IData)(vlTOPp->Vortex__DOT__vx_decode__DOT__temp_out_clone_stall)))
	    ? 0U : vlTOPp->Vortex__DOT__vx_d_e_reg__DOT____Vcellinp__d_e_reg__in[0xaU]);
    vlTOPp->Vortex__DOT__vx_d_e_reg__DOT__d_e_reg__DOT__value[0xbU] 
	= (((IData)(vlTOPp->reset) | (((IData)(vlTOPp->Vortex__DOT__forwarding_fwd_stall) 
				       | (IData)(vlTOPp->Vortex__DOT__execute_branch_stall)) 
				      | (IData)(vlTOPp->Vortex__DOT__vx_decode__DOT__temp_out_clone_stall)))
	    ? 0U : vlTOPp->Vortex__DOT__vx_d_e_reg__DOT____Vcellinp__d_e_reg__in[0xbU]);
    vlTOPp->Vortex__DOT__vx_d_e_reg__DOT__d_e_reg__DOT__value[0xcU] 
	= (((IData)(vlTOPp->reset) | (((IData)(vlTOPp->Vortex__DOT__forwarding_fwd_stall) 
				       | (IData)(vlTOPp->Vortex__DOT__execute_branch_stall)) 
				      | (IData)(vlTOPp->Vortex__DOT__vx_decode__DOT__temp_out_clone_stall)))
	    ? 0U : vlTOPp->Vortex__DOT__vx_d_e_reg__DOT____Vcellinp__d_e_reg__in[0xcU]);
    vlTOPp->Vortex__DOT__vx_d_e_reg__DOT__d_e_reg__DOT__value[0xdU] 
	= (((IData)(vlTOPp->reset) | (((IData)(vlTOPp->Vortex__DOT__forwarding_fwd_stall) 
				       | (IData)(vlTOPp->Vortex__DOT__execute_branch_stall)) 
				      | (IData)(vlTOPp->Vortex__DOT__vx_decode__DOT__temp_out_clone_stall)))
	    ? 0U : vlTOPp->Vortex__DOT__vx_d_e_reg__DOT____Vcellinp__d_e_reg__in[0xdU]);
    vlTOPp->Vortex__DOT__vx_d_e_reg__DOT__d_e_reg__DOT__value[0xeU] 
	= (((IData)(vlTOPp->reset) | (((IData)(vlTOPp->Vortex__DOT__forwarding_fwd_stall) 
				       | (IData)(vlTOPp->Vortex__DOT__execute_branch_stall)) 
				      | (IData)(vlTOPp->Vortex__DOT__vx_decode__DOT__temp_out_clone_stall)))
	    ? 0U : vlTOPp->Vortex__DOT__vx_d_e_reg__DOT____Vcellinp__d_e_reg__in[0xeU]);
    vlTOPp->Vortex__DOT__vx_d_e_reg__DOT__d_e_reg__DOT__value[0xfU] 
	= (((IData)(vlTOPp->reset) | (((IData)(vlTOPp->Vortex__DOT__forwarding_fwd_stall) 
				       | (IData)(vlTOPp->Vortex__DOT__execute_branch_stall)) 
				      | (IData)(vlTOPp->Vortex__DOT__vx_decode__DOT__temp_out_clone_stall)))
	    ? 0U : vlTOPp->Vortex__DOT__vx_d_e_reg__DOT____Vcellinp__d_e_reg__in[0xfU]);
    vlTOPp->Vortex__DOT__vx_fetch__DOT__warp_count 
	= __Vdly__Vortex__DOT__vx_fetch__DOT__warp_count;
    vlTOPp->Vortex__DOT____Vcellout__vx_execute__out_a_reg_data[0U] 
	= ((vlTOPp->Vortex__DOT__vx_d_e_reg__DOT__d_e_reg__DOT__value[0xaU] 
	    << 0x12U) | (vlTOPp->Vortex__DOT__vx_d_e_reg__DOT__d_e_reg__DOT__value[9U] 
			 >> 0xeU));
    vlTOPp->Vortex__DOT____Vcellout__vx_execute__out_b_reg_data[0U] 
	= ((vlTOPp->Vortex__DOT__vx_d_e_reg__DOT__d_e_reg__DOT__value[6U] 
	    << 0x12U) | (vlTOPp->Vortex__DOT__vx_d_e_reg__DOT__d_e_reg__DOT__value[5U] 
			 >> 0xeU));
    vlTOPp->Vortex__DOT____Vcellout__vx_execute__out_a_reg_data[1U] 
	= ((vlTOPp->Vortex__DOT__vx_d_e_reg__DOT__d_e_reg__DOT__value[0xbU] 
	    << 0x12U) | (vlTOPp->Vortex__DOT__vx_d_e_reg__DOT__d_e_reg__DOT__value[0xaU] 
			 >> 0xeU));
    vlTOPp->Vortex__DOT____Vcellout__vx_execute__out_b_reg_data[1U] 
	= ((vlTOPp->Vortex__DOT__vx_d_e_reg__DOT__d_e_reg__DOT__value[7U] 
	    << 0x12U) | (vlTOPp->Vortex__DOT__vx_d_e_reg__DOT__d_e_reg__DOT__value[6U] 
			 >> 0xeU));
    vlTOPp->Vortex__DOT____Vcellout__vx_execute__out_a_reg_data[2U] 
	= ((vlTOPp->Vortex__DOT__vx_d_e_reg__DOT__d_e_reg__DOT__value[0xcU] 
	    << 0x12U) | (vlTOPp->Vortex__DOT__vx_d_e_reg__DOT__d_e_reg__DOT__value[0xbU] 
			 >> 0xeU));
    vlTOPp->Vortex__DOT____Vcellout__vx_execute__out_b_reg_data[2U] 
	= ((vlTOPp->Vortex__DOT__vx_d_e_reg__DOT__d_e_reg__DOT__value[8U] 
	    << 0x12U) | (vlTOPp->Vortex__DOT__vx_d_e_reg__DOT__d_e_reg__DOT__value[7U] 
			 >> 0xeU));
    vlTOPp->Vortex__DOT____Vcellout__vx_execute__out_a_reg_data[3U] 
	= ((vlTOPp->Vortex__DOT__vx_d_e_reg__DOT__d_e_reg__DOT__value[0xdU] 
	    << 0x12U) | (vlTOPp->Vortex__DOT__vx_d_e_reg__DOT__d_e_reg__DOT__value[0xcU] 
			 >> 0xeU));
    vlTOPp->Vortex__DOT____Vcellout__vx_execute__out_b_reg_data[3U] 
	= ((vlTOPp->Vortex__DOT__vx_d_e_reg__DOT__d_e_reg__DOT__value[9U] 
	    << 0x12U) | (vlTOPp->Vortex__DOT__vx_d_e_reg__DOT__d_e_reg__DOT__value[8U] 
			 >> 0xeU));
    vlTOPp->Vortex__DOT__execute_branch_stall = (1U 
						 & ((0U 
						     != 
						     (7U 
						      & ((vlTOPp->Vortex__DOT__vx_d_e_reg__DOT__d_e_reg__DOT__value[4U] 
							  << 3U) 
							 | (vlTOPp->Vortex__DOT__vx_d_e_reg__DOT__d_e_reg__DOT__value[3U] 
							    >> 0x1dU)))) 
						    | (vlTOPp->Vortex__DOT__vx_d_e_reg__DOT__d_e_reg__DOT__value[2U] 
						       >> 8U)));
    vlTOPp->Vortex__DOT__vx_forwarding__DOT__use_execute_PC_next[0U] 
	= ((vlTOPp->Vortex__DOT__vx_d_e_reg__DOT__d_e_reg__DOT__value[1U] 
	    << 0x18U) | (vlTOPp->Vortex__DOT__vx_d_e_reg__DOT__d_e_reg__DOT__value[0U] 
			 >> 8U));
    vlTOPp->Vortex__DOT__vx_forwarding__DOT__use_execute_PC_next[1U] 
	= ((vlTOPp->Vortex__DOT__vx_d_e_reg__DOT__d_e_reg__DOT__value[1U] 
	    << 0x18U) | (vlTOPp->Vortex__DOT__vx_d_e_reg__DOT__d_e_reg__DOT__value[0U] 
			 >> 8U));
    vlTOPp->Vortex__DOT__vx_forwarding__DOT__use_execute_PC_next[2U] 
	= ((vlTOPp->Vortex__DOT__vx_d_e_reg__DOT__d_e_reg__DOT__value[1U] 
	    << 0x18U) | (vlTOPp->Vortex__DOT__vx_d_e_reg__DOT__d_e_reg__DOT__value[0U] 
			 >> 8U));
    vlTOPp->Vortex__DOT__vx_forwarding__DOT__use_execute_PC_next[3U] 
	= ((vlTOPp->Vortex__DOT__vx_d_e_reg__DOT__d_e_reg__DOT__value[1U] 
	    << 0x18U) | (vlTOPp->Vortex__DOT__vx_d_e_reg__DOT__d_e_reg__DOT__value[0U] 
			 >> 8U));
    vlTOPp->Vortex__DOT__vx_execute__DOT__genblk1__BRA__0__KET____DOT__vx_alu__DOT__ALU_in2 
	= ((0x40U & vlTOPp->Vortex__DOT__vx_d_e_reg__DOT__d_e_reg__DOT__value[5U])
	    ? ((vlTOPp->Vortex__DOT__vx_d_e_reg__DOT__d_e_reg__DOT__value[5U] 
		<< 0x1aU) | (vlTOPp->Vortex__DOT__vx_d_e_reg__DOT__d_e_reg__DOT__value[4U] 
			     >> 6U)) : ((vlTOPp->Vortex__DOT__vx_d_e_reg__DOT__d_e_reg__DOT__value[6U] 
					 << 0x12U) 
					| (vlTOPp->Vortex__DOT__vx_d_e_reg__DOT__d_e_reg__DOT__value[5U] 
					   >> 0xeU)));
    vlTOPp->Vortex__DOT__vx_execute__DOT__genblk1__BRA__1__KET____DOT__vx_alu__DOT__ALU_in2 
	= ((0x40U & vlTOPp->Vortex__DOT__vx_d_e_reg__DOT__d_e_reg__DOT__value[5U])
	    ? ((vlTOPp->Vortex__DOT__vx_d_e_reg__DOT__d_e_reg__DOT__value[5U] 
		<< 0x1aU) | (vlTOPp->Vortex__DOT__vx_d_e_reg__DOT__d_e_reg__DOT__value[4U] 
			     >> 6U)) : ((vlTOPp->Vortex__DOT__vx_d_e_reg__DOT__d_e_reg__DOT__value[7U] 
					 << 0x12U) 
					| (vlTOPp->Vortex__DOT__vx_d_e_reg__DOT__d_e_reg__DOT__value[6U] 
					   >> 0xeU)));
    vlTOPp->Vortex__DOT__vx_execute__DOT__genblk1__BRA__2__KET____DOT__vx_alu__DOT__ALU_in2 
	= ((0x40U & vlTOPp->Vortex__DOT__vx_d_e_reg__DOT__d_e_reg__DOT__value[5U])
	    ? ((vlTOPp->Vortex__DOT__vx_d_e_reg__DOT__d_e_reg__DOT__value[5U] 
		<< 0x1aU) | (vlTOPp->Vortex__DOT__vx_d_e_reg__DOT__d_e_reg__DOT__value[4U] 
			     >> 6U)) : ((vlTOPp->Vortex__DOT__vx_d_e_reg__DOT__d_e_reg__DOT__value[8U] 
					 << 0x12U) 
					| (vlTOPp->Vortex__DOT__vx_d_e_reg__DOT__d_e_reg__DOT__value[7U] 
					   >> 0xeU)));
    vlTOPp->Vortex__DOT__vx_execute__DOT__genblk1__BRA__3__KET____DOT__vx_alu__DOT__ALU_in2 
	= ((0x40U & vlTOPp->Vortex__DOT__vx_d_e_reg__DOT__d_e_reg__DOT__value[5U])
	    ? ((vlTOPp->Vortex__DOT__vx_d_e_reg__DOT__d_e_reg__DOT__value[5U] 
		<< 0x1aU) | (vlTOPp->Vortex__DOT__vx_d_e_reg__DOT__d_e_reg__DOT__value[4U] 
			     >> 6U)) : ((vlTOPp->Vortex__DOT__vx_d_e_reg__DOT__d_e_reg__DOT__value[9U] 
					 << 0x12U) 
					| (vlTOPp->Vortex__DOT__vx_d_e_reg__DOT__d_e_reg__DOT__value[8U] 
					   >> 0xeU)));
    vlSymsp->TOP__Vortex__DOT__VX_exe_mem_req.wb = 
	(3U & ((vlTOPp->Vortex__DOT__vx_d_e_reg__DOT__d_e_reg__DOT__value[6U] 
		<< 0x19U) | (vlTOPp->Vortex__DOT__vx_d_e_reg__DOT__d_e_reg__DOT__value[5U] 
			     >> 7U)));
    vlTOPp->Vortex__DOT__vx_execute__DOT__genblk1__BRA__0__KET____DOT__vx_alu__DOT__mult_signed_result 
	= VL_MULS_QQQ(64,64,64, VL_EXTENDS_QI(64,32, 
					      ((vlTOPp->Vortex__DOT__vx_d_e_reg__DOT__d_e_reg__DOT__value[0xaU] 
						<< 0x12U) 
					       | (vlTOPp->Vortex__DOT__vx_d_e_reg__DOT__d_e_reg__DOT__value[9U] 
						  >> 0xeU))), 
		      VL_EXTENDS_QI(64,32, vlTOPp->Vortex__DOT__vx_execute__DOT__genblk1__BRA__0__KET____DOT__vx_alu__DOT__ALU_in2));
    vlTOPp->Vortex__DOT__vx_execute__DOT__genblk1__BRA__1__KET____DOT__vx_alu__DOT__mult_signed_result 
	= VL_MULS_QQQ(64,64,64, VL_EXTENDS_QI(64,32, 
					      ((vlTOPp->Vortex__DOT__vx_d_e_reg__DOT__d_e_reg__DOT__value[0xbU] 
						<< 0x12U) 
					       | (vlTOPp->Vortex__DOT__vx_d_e_reg__DOT__d_e_reg__DOT__value[0xaU] 
						  >> 0xeU))), 
		      VL_EXTENDS_QI(64,32, vlTOPp->Vortex__DOT__vx_execute__DOT__genblk1__BRA__1__KET____DOT__vx_alu__DOT__ALU_in2));
    vlTOPp->Vortex__DOT__vx_execute__DOT__genblk1__BRA__2__KET____DOT__vx_alu__DOT__mult_signed_result 
	= VL_MULS_QQQ(64,64,64, VL_EXTENDS_QI(64,32, 
					      ((vlTOPp->Vortex__DOT__vx_d_e_reg__DOT__d_e_reg__DOT__value[0xcU] 
						<< 0x12U) 
					       | (vlTOPp->Vortex__DOT__vx_d_e_reg__DOT__d_e_reg__DOT__value[0xbU] 
						  >> 0xeU))), 
		      VL_EXTENDS_QI(64,32, vlTOPp->Vortex__DOT__vx_execute__DOT__genblk1__BRA__2__KET____DOT__vx_alu__DOT__ALU_in2));
    vlTOPp->Vortex__DOT__vx_execute__DOT__genblk1__BRA__3__KET____DOT__vx_alu__DOT__mult_signed_result 
	= VL_MULS_QQQ(64,64,64, VL_EXTENDS_QI(64,32, 
					      ((vlTOPp->Vortex__DOT__vx_d_e_reg__DOT__d_e_reg__DOT__value[0xdU] 
						<< 0x12U) 
					       | (vlTOPp->Vortex__DOT__vx_d_e_reg__DOT__d_e_reg__DOT__value[0xcU] 
						  >> 0xeU))), 
		      VL_EXTENDS_QI(64,32, vlTOPp->Vortex__DOT__vx_execute__DOT__genblk1__BRA__3__KET____DOT__vx_alu__DOT__ALU_in2));
}

VL_INLINE_OPT void VVortex::_sequent__TOP__5(VVortex__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VVortex::_sequent__TOP__5\n"); );
    VVortex* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    // Begin mtask footprint  all: 
    VL_SIG8(__Vdly__Vortex__DOT__vx_decode__DOT__VX_Context_zero__DOT__state_stall,5,0);
    VL_SIG8(__Vdlyvset__Vortex__DOT__vx_csr_handler__DOT__csr__v0,0,0);
    VL_SIG16(__Vdlyvdim0__Vortex__DOT__vx_csr_handler__DOT__csr__v0,10,0);
    VL_SIG16(__Vdlyvval__Vortex__DOT__vx_csr_handler__DOT__csr__v0,11,0);
    // Body
    __Vdly__Vortex__DOT__vx_decode__DOT__VX_Context_zero__DOT__state_stall 
	= vlTOPp->Vortex__DOT__vx_decode__DOT__VX_Context_zero__DOT__state_stall;
    __Vdlyvset__Vortex__DOT__vx_csr_handler__DOT__csr__v0 = 0U;
    // ALWAYS at VX_context.v:83
    if (((IData)(vlTOPp->Vortex__DOT__vx_decode__DOT__real_zero_isclone) 
	 & (0U == (IData)(vlTOPp->Vortex__DOT__vx_decode__DOT__VX_Context_zero__DOT__state_stall)))) {
	__Vdly__Vortex__DOT__vx_decode__DOT__VX_Context_zero__DOT__state_stall = 0xaU;
    } else {
	if ((1U == (IData)(vlTOPp->Vortex__DOT__vx_decode__DOT__VX_Context_zero__DOT__state_stall))) {
	    __Vdly__Vortex__DOT__vx_decode__DOT__VX_Context_zero__DOT__state_stall = 0U;
	} else {
	    if ((0U < (IData)(vlTOPp->Vortex__DOT__vx_decode__DOT__VX_Context_zero__DOT__state_stall))) {
		__Vdly__Vortex__DOT__vx_decode__DOT__VX_Context_zero__DOT__state_stall 
		    = (0x3fU & ((IData)(vlTOPp->Vortex__DOT__vx_decode__DOT__VX_Context_zero__DOT__state_stall) 
				- (IData)(1U)));
	    }
	}
    }
    // ALWAYS at VX_csr_handler.v:36
    vlTOPp->Vortex__DOT__vx_csr_handler__DOT__decode_csr_address 
	= vlSymsp->TOP__Vortex__DOT__VX_frE_to_bckE_req.csr_address;
    // ALWAYS at VX_csr_handler.v:45
    if ((8U & vlTOPp->Vortex__DOT__vx_e_m_reg__DOT__f_d_reg__DOT__value[0x16U])) {
	vlTOPp->Vortex__DOT__vx_csr_handler__DOT____Vlvbound1 
	    = (0xfffU & ((vlTOPp->Vortex__DOT__vx_e_m_reg__DOT__f_d_reg__DOT__value[0x16U] 
			  << 0x1dU) | (vlTOPp->Vortex__DOT__vx_e_m_reg__DOT__f_d_reg__DOT__value[0x15U] 
				       >> 3U)));
	if (VL_LIKELY((0x400U >= (0x7ffU & (vlTOPp->Vortex__DOT__vx_e_m_reg__DOT__f_d_reg__DOT__value[0x16U] 
					    >> 4U))))) {
	    __Vdlyvval__Vortex__DOT__vx_csr_handler__DOT__csr__v0 
		= vlTOPp->Vortex__DOT__vx_csr_handler__DOT____Vlvbound1;
	    __Vdlyvset__Vortex__DOT__vx_csr_handler__DOT__csr__v0 = 1U;
	    __Vdlyvdim0__Vortex__DOT__vx_csr_handler__DOT__csr__v0 
		= (0x7ffU & (vlTOPp->Vortex__DOT__vx_e_m_reg__DOT__f_d_reg__DOT__value[0x16U] 
			     >> 4U));
	}
    }
    // ALWAYS at VX_csr_handler.v:36
    vlTOPp->Vortex__DOT__vx_csr_handler__DOT__cycle 
	= (VL_ULL(1) + vlTOPp->Vortex__DOT__vx_csr_handler__DOT__cycle);
    // ALWAYS at VX_csr_handler.v:36
    if ((0x10U & vlTOPp->Vortex__DOT__vx_m_w_reg__DOT__m_w_reg__DOT__value[0U])) {
	vlTOPp->Vortex__DOT__vx_csr_handler__DOT__instret 
	    = (VL_ULL(1) + vlTOPp->Vortex__DOT__vx_csr_handler__DOT__instret);
    }
    // ALWAYS at VX_register_file_slave.v:53
    if ((((((0U != (3U & ((vlTOPp->Vortex__DOT__vx_m_w_reg__DOT__m_w_reg__DOT__value[2U] 
			   << 0xeU) | (vlTOPp->Vortex__DOT__vx_m_w_reg__DOT__m_w_reg__DOT__value[1U] 
				       >> 0x12U)))) 
	    & (0U != (0x1fU & ((vlTOPp->Vortex__DOT__vx_m_w_reg__DOT__m_w_reg__DOT__value[2U] 
				<< 0xcU) | (vlTOPp->Vortex__DOT__vx_m_w_reg__DOT__m_w_reg__DOT__value[1U] 
					    >> 0x14U))))) 
	   & (vlTOPp->Vortex__DOT__vx_m_w_reg__DOT__m_w_reg__DOT__value[0U] 
	      >> 7U)) & (0U == (0xfU & vlTOPp->Vortex__DOT__vx_m_w_reg__DOT__m_w_reg__DOT__value[0U]))) 
	 & (~ (IData)(vlTOPp->Vortex__DOT__vx_decode__DOT__real_zero_isclone)))) {
	VL_ASSIGNSEL_WIII(32,(0x3e0U & ((vlTOPp->Vortex__DOT__vx_m_w_reg__DOT__m_w_reg__DOT__value[2U] 
					 << 0x11U) 
					| (0x1ffe0U 
					   & (vlTOPp->Vortex__DOT__vx_m_w_reg__DOT__m_w_reg__DOT__value[1U] 
					      >> 0xfU)))), vlTOPp->Vortex__DOT__vx_decode__DOT__VX_Context_zero__DOT__gen_code_label__BRA__3__KET____DOT__vx_register_file_slave__DOT__registers, 
			  vlSymsp->TOP__Vortex__DOT__VX_writeback_inter.write_data[3U]);
    } else {
	if ((((IData)(vlTOPp->Vortex__DOT__vx_decode__DOT__real_zero_isclone) 
	      & ((3U == vlTOPp->Vortex__DOT__vx_decode__DOT__VX_Context_zero__DOT__rd1_register[0U]) 
		 & (1U == (IData)(vlTOPp->Vortex__DOT__vx_decode__DOT__VX_Context_zero__DOT__state_stall)))) 
	     & (0U == (0xfU & ((vlTOPp->Vortex__DOT__vx_f_d_reg__DOT__f_d_reg__DOT__value[1U] 
				<< 0x1cU) | (vlTOPp->Vortex__DOT__vx_f_d_reg__DOT__f_d_reg__DOT__value[0U] 
					     >> 4U)))))) {
	    vlTOPp->Vortex__DOT__vx_decode__DOT__VX_Context_zero__DOT__gen_code_label__BRA__3__KET____DOT__vx_register_file_slave__DOT__registers[0U] 
		= vlTOPp->Vortex__DOT__vx_decode__DOT__VX_Context_zero__DOT__vx_register_file_master__DOT__registers[0U];
	    vlTOPp->Vortex__DOT__vx_decode__DOT__VX_Context_zero__DOT__gen_code_label__BRA__3__KET____DOT__vx_register_file_slave__DOT__registers[1U] 
		= vlTOPp->Vortex__DOT__vx_decode__DOT__VX_Context_zero__DOT__vx_register_file_master__DOT__registers[1U];
	    vlTOPp->Vortex__DOT__vx_decode__DOT__VX_Context_zero__DOT__gen_code_label__BRA__3__KET____DOT__vx_register_file_slave__DOT__registers[2U] 
		= vlTOPp->Vortex__DOT__vx_decode__DOT__VX_Context_zero__DOT__vx_register_file_master__DOT__registers[2U];
	    vlTOPp->Vortex__DOT__vx_decode__DOT__VX_Context_zero__DOT__gen_code_label__BRA__3__KET____DOT__vx_register_file_slave__DOT__registers[3U] 
		= vlTOPp->Vortex__DOT__vx_decode__DOT__VX_Context_zero__DOT__vx_register_file_master__DOT__registers[3U];
	    vlTOPp->Vortex__DOT__vx_decode__DOT__VX_Context_zero__DOT__gen_code_label__BRA__3__KET____DOT__vx_register_file_slave__DOT__registers[4U] 
		= vlTOPp->Vortex__DOT__vx_decode__DOT__VX_Context_zero__DOT__vx_register_file_master__DOT__registers[4U];
	    vlTOPp->Vortex__DOT__vx_decode__DOT__VX_Context_zero__DOT__gen_code_label__BRA__3__KET____DOT__vx_register_file_slave__DOT__registers[5U] 
		= vlTOPp->Vortex__DOT__vx_decode__DOT__VX_Context_zero__DOT__vx_register_file_master__DOT__registers[5U];
	    vlTOPp->Vortex__DOT__vx_decode__DOT__VX_Context_zero__DOT__gen_code_label__BRA__3__KET____DOT__vx_register_file_slave__DOT__registers[6U] 
		= vlTOPp->Vortex__DOT__vx_decode__DOT__VX_Context_zero__DOT__vx_register_file_master__DOT__registers[6U];
	    vlTOPp->Vortex__DOT__vx_decode__DOT__VX_Context_zero__DOT__gen_code_label__BRA__3__KET____DOT__vx_register_file_slave__DOT__registers[7U] 
		= vlTOPp->Vortex__DOT__vx_decode__DOT__VX_Context_zero__DOT__vx_register_file_master__DOT__registers[7U];
	    vlTOPp->Vortex__DOT__vx_decode__DOT__VX_Context_zero__DOT__gen_code_label__BRA__3__KET____DOT__vx_register_file_slave__DOT__registers[8U] 
		= vlTOPp->Vortex__DOT__vx_decode__DOT__VX_Context_zero__DOT__vx_register_file_master__DOT__registers[8U];
	    vlTOPp->Vortex__DOT__vx_decode__DOT__VX_Context_zero__DOT__gen_code_label__BRA__3__KET____DOT__vx_register_file_slave__DOT__registers[9U] 
		= vlTOPp->Vortex__DOT__vx_decode__DOT__VX_Context_zero__DOT__vx_register_file_master__DOT__registers[9U];
	    vlTOPp->Vortex__DOT__vx_decode__DOT__VX_Context_zero__DOT__gen_code_label__BRA__3__KET____DOT__vx_register_file_slave__DOT__registers[0xaU] 
		= vlTOPp->Vortex__DOT__vx_decode__DOT__VX_Context_zero__DOT__vx_register_file_master__DOT__registers[0xaU];
	    vlTOPp->Vortex__DOT__vx_decode__DOT__VX_Context_zero__DOT__gen_code_label__BRA__3__KET____DOT__vx_register_file_slave__DOT__registers[0xbU] 
		= vlTOPp->Vortex__DOT__vx_decode__DOT__VX_Context_zero__DOT__vx_register_file_master__DOT__registers[0xbU];
	    vlTOPp->Vortex__DOT__vx_decode__DOT__VX_Context_zero__DOT__gen_code_label__BRA__3__KET____DOT__vx_register_file_slave__DOT__registers[0xcU] 
		= vlTOPp->Vortex__DOT__vx_decode__DOT__VX_Context_zero__DOT__vx_register_file_master__DOT__registers[0xcU];
	    vlTOPp->Vortex__DOT__vx_decode__DOT__VX_Context_zero__DOT__gen_code_label__BRA__3__KET____DOT__vx_register_file_slave__DOT__registers[0xdU] 
		= vlTOPp->Vortex__DOT__vx_decode__DOT__VX_Context_zero__DOT__vx_register_file_master__DOT__registers[0xdU];
	    vlTOPp->Vortex__DOT__vx_decode__DOT__VX_Context_zero__DOT__gen_code_label__BRA__3__KET____DOT__vx_register_file_slave__DOT__registers[0xeU] 
		= vlTOPp->Vortex__DOT__vx_decode__DOT__VX_Context_zero__DOT__vx_register_file_master__DOT__registers[0xeU];
	    vlTOPp->Vortex__DOT__vx_decode__DOT__VX_Context_zero__DOT__gen_code_label__BRA__3__KET____DOT__vx_register_file_slave__DOT__registers[0xfU] 
		= vlTOPp->Vortex__DOT__vx_decode__DOT__VX_Context_zero__DOT__vx_register_file_master__DOT__registers[0xfU];
	    vlTOPp->Vortex__DOT__vx_decode__DOT__VX_Context_zero__DOT__gen_code_label__BRA__3__KET____DOT__vx_register_file_slave__DOT__registers[0x10U] 
		= vlTOPp->Vortex__DOT__vx_decode__DOT__VX_Context_zero__DOT__vx_register_file_master__DOT__registers[0x10U];
	    vlTOPp->Vortex__DOT__vx_decode__DOT__VX_Context_zero__DOT__gen_code_label__BRA__3__KET____DOT__vx_register_file_slave__DOT__registers[0x11U] 
		= vlTOPp->Vortex__DOT__vx_decode__DOT__VX_Context_zero__DOT__vx_register_file_master__DOT__registers[0x11U];
	    vlTOPp->Vortex__DOT__vx_decode__DOT__VX_Context_zero__DOT__gen_code_label__BRA__3__KET____DOT__vx_register_file_slave__DOT__registers[0x12U] 
		= vlTOPp->Vortex__DOT__vx_decode__DOT__VX_Context_zero__DOT__vx_register_file_master__DOT__registers[0x12U];
	    vlTOPp->Vortex__DOT__vx_decode__DOT__VX_Context_zero__DOT__gen_code_label__BRA__3__KET____DOT__vx_register_file_slave__DOT__registers[0x13U] 
		= vlTOPp->Vortex__DOT__vx_decode__DOT__VX_Context_zero__DOT__vx_register_file_master__DOT__registers[0x13U];
	    vlTOPp->Vortex__DOT__vx_decode__DOT__VX_Context_zero__DOT__gen_code_label__BRA__3__KET____DOT__vx_register_file_slave__DOT__registers[0x14U] 
		= vlTOPp->Vortex__DOT__vx_decode__DOT__VX_Context_zero__DOT__vx_register_file_master__DOT__registers[0x14U];
	    vlTOPp->Vortex__DOT__vx_decode__DOT__VX_Context_zero__DOT__gen_code_label__BRA__3__KET____DOT__vx_register_file_slave__DOT__registers[0x15U] 
		= vlTOPp->Vortex__DOT__vx_decode__DOT__VX_Context_zero__DOT__vx_register_file_master__DOT__registers[0x15U];
	    vlTOPp->Vortex__DOT__vx_decode__DOT__VX_Context_zero__DOT__gen_code_label__BRA__3__KET____DOT__vx_register_file_slave__DOT__registers[0x16U] 
		= vlTOPp->Vortex__DOT__vx_decode__DOT__VX_Context_zero__DOT__vx_register_file_master__DOT__registers[0x16U];
	    vlTOPp->Vortex__DOT__vx_decode__DOT__VX_Context_zero__DOT__gen_code_label__BRA__3__KET____DOT__vx_register_file_slave__DOT__registers[0x17U] 
		= vlTOPp->Vortex__DOT__vx_decode__DOT__VX_Context_zero__DOT__vx_register_file_master__DOT__registers[0x17U];
	    vlTOPp->Vortex__DOT__vx_decode__DOT__VX_Context_zero__DOT__gen_code_label__BRA__3__KET____DOT__vx_register_file_slave__DOT__registers[0x18U] 
		= vlTOPp->Vortex__DOT__vx_decode__DOT__VX_Context_zero__DOT__vx_register_file_master__DOT__registers[0x18U];
	    vlTOPp->Vortex__DOT__vx_decode__DOT__VX_Context_zero__DOT__gen_code_label__BRA__3__KET____DOT__vx_register_file_slave__DOT__registers[0x19U] 
		= vlTOPp->Vortex__DOT__vx_decode__DOT__VX_Context_zero__DOT__vx_register_file_master__DOT__registers[0x19U];
	    vlTOPp->Vortex__DOT__vx_decode__DOT__VX_Context_zero__DOT__gen_code_label__BRA__3__KET____DOT__vx_register_file_slave__DOT__registers[0x1aU] 
		= vlTOPp->Vortex__DOT__vx_decode__DOT__VX_Context_zero__DOT__vx_register_file_master__DOT__registers[0x1aU];
	    vlTOPp->Vortex__DOT__vx_decode__DOT__VX_Context_zero__DOT__gen_code_label__BRA__3__KET____DOT__vx_register_file_slave__DOT__registers[0x1bU] 
		= vlTOPp->Vortex__DOT__vx_decode__DOT__VX_Context_zero__DOT__vx_register_file_master__DOT__registers[0x1bU];
	    vlTOPp->Vortex__DOT__vx_decode__DOT__VX_Context_zero__DOT__gen_code_label__BRA__3__KET____DOT__vx_register_file_slave__DOT__registers[0x1cU] 
		= vlTOPp->Vortex__DOT__vx_decode__DOT__VX_Context_zero__DOT__vx_register_file_master__DOT__registers[0x1cU];
	    vlTOPp->Vortex__DOT__vx_decode__DOT__VX_Context_zero__DOT__gen_code_label__BRA__3__KET____DOT__vx_register_file_slave__DOT__registers[0x1dU] 
		= vlTOPp->Vortex__DOT__vx_decode__DOT__VX_Context_zero__DOT__vx_register_file_master__DOT__registers[0x1dU];
	    vlTOPp->Vortex__DOT__vx_decode__DOT__VX_Context_zero__DOT__gen_code_label__BRA__3__KET____DOT__vx_register_file_slave__DOT__registers[0x1eU] 
		= vlTOPp->Vortex__DOT__vx_decode__DOT__VX_Context_zero__DOT__vx_register_file_master__DOT__registers[0x1eU];
	    vlTOPp->Vortex__DOT__vx_decode__DOT__VX_Context_zero__DOT__gen_code_label__BRA__3__KET____DOT__vx_register_file_slave__DOT__registers[0x1fU] 
		= vlTOPp->Vortex__DOT__vx_decode__DOT__VX_Context_zero__DOT__vx_register_file_master__DOT__registers[0x1fU];
	}
    }
    // ALWAYS at VX_register_file_slave.v:53
    if ((((((0U != (3U & ((vlTOPp->Vortex__DOT__vx_m_w_reg__DOT__m_w_reg__DOT__value[2U] 
			   << 0xeU) | (vlTOPp->Vortex__DOT__vx_m_w_reg__DOT__m_w_reg__DOT__value[1U] 
				       >> 0x12U)))) 
	    & (0U != (0x1fU & ((vlTOPp->Vortex__DOT__vx_m_w_reg__DOT__m_w_reg__DOT__value[2U] 
				<< 0xcU) | (vlTOPp->Vortex__DOT__vx_m_w_reg__DOT__m_w_reg__DOT__value[1U] 
					    >> 0x14U))))) 
	   & (vlTOPp->Vortex__DOT__vx_m_w_reg__DOT__m_w_reg__DOT__value[0U] 
	      >> 6U)) & (0U == (0xfU & vlTOPp->Vortex__DOT__vx_m_w_reg__DOT__m_w_reg__DOT__value[0U]))) 
	 & (~ (IData)(vlTOPp->Vortex__DOT__vx_decode__DOT__real_zero_isclone)))) {
	VL_ASSIGNSEL_WIII(32,(0x3e0U & ((vlTOPp->Vortex__DOT__vx_m_w_reg__DOT__m_w_reg__DOT__value[2U] 
					 << 0x11U) 
					| (0x1ffe0U 
					   & (vlTOPp->Vortex__DOT__vx_m_w_reg__DOT__m_w_reg__DOT__value[1U] 
					      >> 0xfU)))), vlTOPp->Vortex__DOT__vx_decode__DOT__VX_Context_zero__DOT__gen_code_label__BRA__2__KET____DOT__vx_register_file_slave__DOT__registers, 
			  vlSymsp->TOP__Vortex__DOT__VX_writeback_inter.write_data[2U]);
    } else {
	if ((((IData)(vlTOPp->Vortex__DOT__vx_decode__DOT__real_zero_isclone) 
	      & ((2U == vlTOPp->Vortex__DOT__vx_decode__DOT__VX_Context_zero__DOT__rd1_register[0U]) 
		 & (1U == (IData)(vlTOPp->Vortex__DOT__vx_decode__DOT__VX_Context_zero__DOT__state_stall)))) 
	     & (0U == (0xfU & ((vlTOPp->Vortex__DOT__vx_f_d_reg__DOT__f_d_reg__DOT__value[1U] 
				<< 0x1cU) | (vlTOPp->Vortex__DOT__vx_f_d_reg__DOT__f_d_reg__DOT__value[0U] 
					     >> 4U)))))) {
	    vlTOPp->Vortex__DOT__vx_decode__DOT__VX_Context_zero__DOT__gen_code_label__BRA__2__KET____DOT__vx_register_file_slave__DOT__registers[0U] 
		= vlTOPp->Vortex__DOT__vx_decode__DOT__VX_Context_zero__DOT__vx_register_file_master__DOT__registers[0U];
	    vlTOPp->Vortex__DOT__vx_decode__DOT__VX_Context_zero__DOT__gen_code_label__BRA__2__KET____DOT__vx_register_file_slave__DOT__registers[1U] 
		= vlTOPp->Vortex__DOT__vx_decode__DOT__VX_Context_zero__DOT__vx_register_file_master__DOT__registers[1U];
	    vlTOPp->Vortex__DOT__vx_decode__DOT__VX_Context_zero__DOT__gen_code_label__BRA__2__KET____DOT__vx_register_file_slave__DOT__registers[2U] 
		= vlTOPp->Vortex__DOT__vx_decode__DOT__VX_Context_zero__DOT__vx_register_file_master__DOT__registers[2U];
	    vlTOPp->Vortex__DOT__vx_decode__DOT__VX_Context_zero__DOT__gen_code_label__BRA__2__KET____DOT__vx_register_file_slave__DOT__registers[3U] 
		= vlTOPp->Vortex__DOT__vx_decode__DOT__VX_Context_zero__DOT__vx_register_file_master__DOT__registers[3U];
	    vlTOPp->Vortex__DOT__vx_decode__DOT__VX_Context_zero__DOT__gen_code_label__BRA__2__KET____DOT__vx_register_file_slave__DOT__registers[4U] 
		= vlTOPp->Vortex__DOT__vx_decode__DOT__VX_Context_zero__DOT__vx_register_file_master__DOT__registers[4U];
	    vlTOPp->Vortex__DOT__vx_decode__DOT__VX_Context_zero__DOT__gen_code_label__BRA__2__KET____DOT__vx_register_file_slave__DOT__registers[5U] 
		= vlTOPp->Vortex__DOT__vx_decode__DOT__VX_Context_zero__DOT__vx_register_file_master__DOT__registers[5U];
	    vlTOPp->Vortex__DOT__vx_decode__DOT__VX_Context_zero__DOT__gen_code_label__BRA__2__KET____DOT__vx_register_file_slave__DOT__registers[6U] 
		= vlTOPp->Vortex__DOT__vx_decode__DOT__VX_Context_zero__DOT__vx_register_file_master__DOT__registers[6U];
	    vlTOPp->Vortex__DOT__vx_decode__DOT__VX_Context_zero__DOT__gen_code_label__BRA__2__KET____DOT__vx_register_file_slave__DOT__registers[7U] 
		= vlTOPp->Vortex__DOT__vx_decode__DOT__VX_Context_zero__DOT__vx_register_file_master__DOT__registers[7U];
	    vlTOPp->Vortex__DOT__vx_decode__DOT__VX_Context_zero__DOT__gen_code_label__BRA__2__KET____DOT__vx_register_file_slave__DOT__registers[8U] 
		= vlTOPp->Vortex__DOT__vx_decode__DOT__VX_Context_zero__DOT__vx_register_file_master__DOT__registers[8U];
	    vlTOPp->Vortex__DOT__vx_decode__DOT__VX_Context_zero__DOT__gen_code_label__BRA__2__KET____DOT__vx_register_file_slave__DOT__registers[9U] 
		= vlTOPp->Vortex__DOT__vx_decode__DOT__VX_Context_zero__DOT__vx_register_file_master__DOT__registers[9U];
	    vlTOPp->Vortex__DOT__vx_decode__DOT__VX_Context_zero__DOT__gen_code_label__BRA__2__KET____DOT__vx_register_file_slave__DOT__registers[0xaU] 
		= vlTOPp->Vortex__DOT__vx_decode__DOT__VX_Context_zero__DOT__vx_register_file_master__DOT__registers[0xaU];
	    vlTOPp->Vortex__DOT__vx_decode__DOT__VX_Context_zero__DOT__gen_code_label__BRA__2__KET____DOT__vx_register_file_slave__DOT__registers[0xbU] 
		= vlTOPp->Vortex__DOT__vx_decode__DOT__VX_Context_zero__DOT__vx_register_file_master__DOT__registers[0xbU];
	    vlTOPp->Vortex__DOT__vx_decode__DOT__VX_Context_zero__DOT__gen_code_label__BRA__2__KET____DOT__vx_register_file_slave__DOT__registers[0xcU] 
		= vlTOPp->Vortex__DOT__vx_decode__DOT__VX_Context_zero__DOT__vx_register_file_master__DOT__registers[0xcU];
	    vlTOPp->Vortex__DOT__vx_decode__DOT__VX_Context_zero__DOT__gen_code_label__BRA__2__KET____DOT__vx_register_file_slave__DOT__registers[0xdU] 
		= vlTOPp->Vortex__DOT__vx_decode__DOT__VX_Context_zero__DOT__vx_register_file_master__DOT__registers[0xdU];
	    vlTOPp->Vortex__DOT__vx_decode__DOT__VX_Context_zero__DOT__gen_code_label__BRA__2__KET____DOT__vx_register_file_slave__DOT__registers[0xeU] 
		= vlTOPp->Vortex__DOT__vx_decode__DOT__VX_Context_zero__DOT__vx_register_file_master__DOT__registers[0xeU];
	    vlTOPp->Vortex__DOT__vx_decode__DOT__VX_Context_zero__DOT__gen_code_label__BRA__2__KET____DOT__vx_register_file_slave__DOT__registers[0xfU] 
		= vlTOPp->Vortex__DOT__vx_decode__DOT__VX_Context_zero__DOT__vx_register_file_master__DOT__registers[0xfU];
	    vlTOPp->Vortex__DOT__vx_decode__DOT__VX_Context_zero__DOT__gen_code_label__BRA__2__KET____DOT__vx_register_file_slave__DOT__registers[0x10U] 
		= vlTOPp->Vortex__DOT__vx_decode__DOT__VX_Context_zero__DOT__vx_register_file_master__DOT__registers[0x10U];
	    vlTOPp->Vortex__DOT__vx_decode__DOT__VX_Context_zero__DOT__gen_code_label__BRA__2__KET____DOT__vx_register_file_slave__DOT__registers[0x11U] 
		= vlTOPp->Vortex__DOT__vx_decode__DOT__VX_Context_zero__DOT__vx_register_file_master__DOT__registers[0x11U];
	    vlTOPp->Vortex__DOT__vx_decode__DOT__VX_Context_zero__DOT__gen_code_label__BRA__2__KET____DOT__vx_register_file_slave__DOT__registers[0x12U] 
		= vlTOPp->Vortex__DOT__vx_decode__DOT__VX_Context_zero__DOT__vx_register_file_master__DOT__registers[0x12U];
	    vlTOPp->Vortex__DOT__vx_decode__DOT__VX_Context_zero__DOT__gen_code_label__BRA__2__KET____DOT__vx_register_file_slave__DOT__registers[0x13U] 
		= vlTOPp->Vortex__DOT__vx_decode__DOT__VX_Context_zero__DOT__vx_register_file_master__DOT__registers[0x13U];
	    vlTOPp->Vortex__DOT__vx_decode__DOT__VX_Context_zero__DOT__gen_code_label__BRA__2__KET____DOT__vx_register_file_slave__DOT__registers[0x14U] 
		= vlTOPp->Vortex__DOT__vx_decode__DOT__VX_Context_zero__DOT__vx_register_file_master__DOT__registers[0x14U];
	    vlTOPp->Vortex__DOT__vx_decode__DOT__VX_Context_zero__DOT__gen_code_label__BRA__2__KET____DOT__vx_register_file_slave__DOT__registers[0x15U] 
		= vlTOPp->Vortex__DOT__vx_decode__DOT__VX_Context_zero__DOT__vx_register_file_master__DOT__registers[0x15U];
	    vlTOPp->Vortex__DOT__vx_decode__DOT__VX_Context_zero__DOT__gen_code_label__BRA__2__KET____DOT__vx_register_file_slave__DOT__registers[0x16U] 
		= vlTOPp->Vortex__DOT__vx_decode__DOT__VX_Context_zero__DOT__vx_register_file_master__DOT__registers[0x16U];
	    vlTOPp->Vortex__DOT__vx_decode__DOT__VX_Context_zero__DOT__gen_code_label__BRA__2__KET____DOT__vx_register_file_slave__DOT__registers[0x17U] 
		= vlTOPp->Vortex__DOT__vx_decode__DOT__VX_Context_zero__DOT__vx_register_file_master__DOT__registers[0x17U];
	    vlTOPp->Vortex__DOT__vx_decode__DOT__VX_Context_zero__DOT__gen_code_label__BRA__2__KET____DOT__vx_register_file_slave__DOT__registers[0x18U] 
		= vlTOPp->Vortex__DOT__vx_decode__DOT__VX_Context_zero__DOT__vx_register_file_master__DOT__registers[0x18U];
	    vlTOPp->Vortex__DOT__vx_decode__DOT__VX_Context_zero__DOT__gen_code_label__BRA__2__KET____DOT__vx_register_file_slave__DOT__registers[0x19U] 
		= vlTOPp->Vortex__DOT__vx_decode__DOT__VX_Context_zero__DOT__vx_register_file_master__DOT__registers[0x19U];
	    vlTOPp->Vortex__DOT__vx_decode__DOT__VX_Context_zero__DOT__gen_code_label__BRA__2__KET____DOT__vx_register_file_slave__DOT__registers[0x1aU] 
		= vlTOPp->Vortex__DOT__vx_decode__DOT__VX_Context_zero__DOT__vx_register_file_master__DOT__registers[0x1aU];
	    vlTOPp->Vortex__DOT__vx_decode__DOT__VX_Context_zero__DOT__gen_code_label__BRA__2__KET____DOT__vx_register_file_slave__DOT__registers[0x1bU] 
		= vlTOPp->Vortex__DOT__vx_decode__DOT__VX_Context_zero__DOT__vx_register_file_master__DOT__registers[0x1bU];
	    vlTOPp->Vortex__DOT__vx_decode__DOT__VX_Context_zero__DOT__gen_code_label__BRA__2__KET____DOT__vx_register_file_slave__DOT__registers[0x1cU] 
		= vlTOPp->Vortex__DOT__vx_decode__DOT__VX_Context_zero__DOT__vx_register_file_master__DOT__registers[0x1cU];
	    vlTOPp->Vortex__DOT__vx_decode__DOT__VX_Context_zero__DOT__gen_code_label__BRA__2__KET____DOT__vx_register_file_slave__DOT__registers[0x1dU] 
		= vlTOPp->Vortex__DOT__vx_decode__DOT__VX_Context_zero__DOT__vx_register_file_master__DOT__registers[0x1dU];
	    vlTOPp->Vortex__DOT__vx_decode__DOT__VX_Context_zero__DOT__gen_code_label__BRA__2__KET____DOT__vx_register_file_slave__DOT__registers[0x1eU] 
		= vlTOPp->Vortex__DOT__vx_decode__DOT__VX_Context_zero__DOT__vx_register_file_master__DOT__registers[0x1eU];
	    vlTOPp->Vortex__DOT__vx_decode__DOT__VX_Context_zero__DOT__gen_code_label__BRA__2__KET____DOT__vx_register_file_slave__DOT__registers[0x1fU] 
		= vlTOPp->Vortex__DOT__vx_decode__DOT__VX_Context_zero__DOT__vx_register_file_master__DOT__registers[0x1fU];
	}
    }
    // ALWAYS at VX_register_file_slave.v:53
    if ((((((0U != (3U & ((vlTOPp->Vortex__DOT__vx_m_w_reg__DOT__m_w_reg__DOT__value[2U] 
			   << 0xeU) | (vlTOPp->Vortex__DOT__vx_m_w_reg__DOT__m_w_reg__DOT__value[1U] 
				       >> 0x12U)))) 
	    & (0U != (0x1fU & ((vlTOPp->Vortex__DOT__vx_m_w_reg__DOT__m_w_reg__DOT__value[2U] 
				<< 0xcU) | (vlTOPp->Vortex__DOT__vx_m_w_reg__DOT__m_w_reg__DOT__value[1U] 
					    >> 0x14U))))) 
	   & (vlTOPp->Vortex__DOT__vx_m_w_reg__DOT__m_w_reg__DOT__value[0U] 
	      >> 5U)) & (0U == (0xfU & vlTOPp->Vortex__DOT__vx_m_w_reg__DOT__m_w_reg__DOT__value[0U]))) 
	 & (~ (IData)(vlTOPp->Vortex__DOT__vx_decode__DOT__real_zero_isclone)))) {
	VL_ASSIGNSEL_WIII(32,(0x3e0U & ((vlTOPp->Vortex__DOT__vx_m_w_reg__DOT__m_w_reg__DOT__value[2U] 
					 << 0x11U) 
					| (0x1ffe0U 
					   & (vlTOPp->Vortex__DOT__vx_m_w_reg__DOT__m_w_reg__DOT__value[1U] 
					      >> 0xfU)))), vlTOPp->Vortex__DOT__vx_decode__DOT__VX_Context_zero__DOT__gen_code_label__BRA__1__KET____DOT__vx_register_file_slave__DOT__registers, 
			  vlSymsp->TOP__Vortex__DOT__VX_writeback_inter.write_data[1U]);
    } else {
	if ((((IData)(vlTOPp->Vortex__DOT__vx_decode__DOT__real_zero_isclone) 
	      & ((1U == vlTOPp->Vortex__DOT__vx_decode__DOT__VX_Context_zero__DOT__rd1_register[0U]) 
		 & (1U == (IData)(vlTOPp->Vortex__DOT__vx_decode__DOT__VX_Context_zero__DOT__state_stall)))) 
	     & (0U == (0xfU & ((vlTOPp->Vortex__DOT__vx_f_d_reg__DOT__f_d_reg__DOT__value[1U] 
				<< 0x1cU) | (vlTOPp->Vortex__DOT__vx_f_d_reg__DOT__f_d_reg__DOT__value[0U] 
					     >> 4U)))))) {
	    vlTOPp->Vortex__DOT__vx_decode__DOT__VX_Context_zero__DOT__gen_code_label__BRA__1__KET____DOT__vx_register_file_slave__DOT__registers[0U] 
		= vlTOPp->Vortex__DOT__vx_decode__DOT__VX_Context_zero__DOT__vx_register_file_master__DOT__registers[0U];
	    vlTOPp->Vortex__DOT__vx_decode__DOT__VX_Context_zero__DOT__gen_code_label__BRA__1__KET____DOT__vx_register_file_slave__DOT__registers[1U] 
		= vlTOPp->Vortex__DOT__vx_decode__DOT__VX_Context_zero__DOT__vx_register_file_master__DOT__registers[1U];
	    vlTOPp->Vortex__DOT__vx_decode__DOT__VX_Context_zero__DOT__gen_code_label__BRA__1__KET____DOT__vx_register_file_slave__DOT__registers[2U] 
		= vlTOPp->Vortex__DOT__vx_decode__DOT__VX_Context_zero__DOT__vx_register_file_master__DOT__registers[2U];
	    vlTOPp->Vortex__DOT__vx_decode__DOT__VX_Context_zero__DOT__gen_code_label__BRA__1__KET____DOT__vx_register_file_slave__DOT__registers[3U] 
		= vlTOPp->Vortex__DOT__vx_decode__DOT__VX_Context_zero__DOT__vx_register_file_master__DOT__registers[3U];
	    vlTOPp->Vortex__DOT__vx_decode__DOT__VX_Context_zero__DOT__gen_code_label__BRA__1__KET____DOT__vx_register_file_slave__DOT__registers[4U] 
		= vlTOPp->Vortex__DOT__vx_decode__DOT__VX_Context_zero__DOT__vx_register_file_master__DOT__registers[4U];
	    vlTOPp->Vortex__DOT__vx_decode__DOT__VX_Context_zero__DOT__gen_code_label__BRA__1__KET____DOT__vx_register_file_slave__DOT__registers[5U] 
		= vlTOPp->Vortex__DOT__vx_decode__DOT__VX_Context_zero__DOT__vx_register_file_master__DOT__registers[5U];
	    vlTOPp->Vortex__DOT__vx_decode__DOT__VX_Context_zero__DOT__gen_code_label__BRA__1__KET____DOT__vx_register_file_slave__DOT__registers[6U] 
		= vlTOPp->Vortex__DOT__vx_decode__DOT__VX_Context_zero__DOT__vx_register_file_master__DOT__registers[6U];
	    vlTOPp->Vortex__DOT__vx_decode__DOT__VX_Context_zero__DOT__gen_code_label__BRA__1__KET____DOT__vx_register_file_slave__DOT__registers[7U] 
		= vlTOPp->Vortex__DOT__vx_decode__DOT__VX_Context_zero__DOT__vx_register_file_master__DOT__registers[7U];
	    vlTOPp->Vortex__DOT__vx_decode__DOT__VX_Context_zero__DOT__gen_code_label__BRA__1__KET____DOT__vx_register_file_slave__DOT__registers[8U] 
		= vlTOPp->Vortex__DOT__vx_decode__DOT__VX_Context_zero__DOT__vx_register_file_master__DOT__registers[8U];
	    vlTOPp->Vortex__DOT__vx_decode__DOT__VX_Context_zero__DOT__gen_code_label__BRA__1__KET____DOT__vx_register_file_slave__DOT__registers[9U] 
		= vlTOPp->Vortex__DOT__vx_decode__DOT__VX_Context_zero__DOT__vx_register_file_master__DOT__registers[9U];
	    vlTOPp->Vortex__DOT__vx_decode__DOT__VX_Context_zero__DOT__gen_code_label__BRA__1__KET____DOT__vx_register_file_slave__DOT__registers[0xaU] 
		= vlTOPp->Vortex__DOT__vx_decode__DOT__VX_Context_zero__DOT__vx_register_file_master__DOT__registers[0xaU];
	    vlTOPp->Vortex__DOT__vx_decode__DOT__VX_Context_zero__DOT__gen_code_label__BRA__1__KET____DOT__vx_register_file_slave__DOT__registers[0xbU] 
		= vlTOPp->Vortex__DOT__vx_decode__DOT__VX_Context_zero__DOT__vx_register_file_master__DOT__registers[0xbU];
	    vlTOPp->Vortex__DOT__vx_decode__DOT__VX_Context_zero__DOT__gen_code_label__BRA__1__KET____DOT__vx_register_file_slave__DOT__registers[0xcU] 
		= vlTOPp->Vortex__DOT__vx_decode__DOT__VX_Context_zero__DOT__vx_register_file_master__DOT__registers[0xcU];
	    vlTOPp->Vortex__DOT__vx_decode__DOT__VX_Context_zero__DOT__gen_code_label__BRA__1__KET____DOT__vx_register_file_slave__DOT__registers[0xdU] 
		= vlTOPp->Vortex__DOT__vx_decode__DOT__VX_Context_zero__DOT__vx_register_file_master__DOT__registers[0xdU];
	    vlTOPp->Vortex__DOT__vx_decode__DOT__VX_Context_zero__DOT__gen_code_label__BRA__1__KET____DOT__vx_register_file_slave__DOT__registers[0xeU] 
		= vlTOPp->Vortex__DOT__vx_decode__DOT__VX_Context_zero__DOT__vx_register_file_master__DOT__registers[0xeU];
	    vlTOPp->Vortex__DOT__vx_decode__DOT__VX_Context_zero__DOT__gen_code_label__BRA__1__KET____DOT__vx_register_file_slave__DOT__registers[0xfU] 
		= vlTOPp->Vortex__DOT__vx_decode__DOT__VX_Context_zero__DOT__vx_register_file_master__DOT__registers[0xfU];
	    vlTOPp->Vortex__DOT__vx_decode__DOT__VX_Context_zero__DOT__gen_code_label__BRA__1__KET____DOT__vx_register_file_slave__DOT__registers[0x10U] 
		= vlTOPp->Vortex__DOT__vx_decode__DOT__VX_Context_zero__DOT__vx_register_file_master__DOT__registers[0x10U];
	    vlTOPp->Vortex__DOT__vx_decode__DOT__VX_Context_zero__DOT__gen_code_label__BRA__1__KET____DOT__vx_register_file_slave__DOT__registers[0x11U] 
		= vlTOPp->Vortex__DOT__vx_decode__DOT__VX_Context_zero__DOT__vx_register_file_master__DOT__registers[0x11U];
	    vlTOPp->Vortex__DOT__vx_decode__DOT__VX_Context_zero__DOT__gen_code_label__BRA__1__KET____DOT__vx_register_file_slave__DOT__registers[0x12U] 
		= vlTOPp->Vortex__DOT__vx_decode__DOT__VX_Context_zero__DOT__vx_register_file_master__DOT__registers[0x12U];
	    vlTOPp->Vortex__DOT__vx_decode__DOT__VX_Context_zero__DOT__gen_code_label__BRA__1__KET____DOT__vx_register_file_slave__DOT__registers[0x13U] 
		= vlTOPp->Vortex__DOT__vx_decode__DOT__VX_Context_zero__DOT__vx_register_file_master__DOT__registers[0x13U];
	    vlTOPp->Vortex__DOT__vx_decode__DOT__VX_Context_zero__DOT__gen_code_label__BRA__1__KET____DOT__vx_register_file_slave__DOT__registers[0x14U] 
		= vlTOPp->Vortex__DOT__vx_decode__DOT__VX_Context_zero__DOT__vx_register_file_master__DOT__registers[0x14U];
	    vlTOPp->Vortex__DOT__vx_decode__DOT__VX_Context_zero__DOT__gen_code_label__BRA__1__KET____DOT__vx_register_file_slave__DOT__registers[0x15U] 
		= vlTOPp->Vortex__DOT__vx_decode__DOT__VX_Context_zero__DOT__vx_register_file_master__DOT__registers[0x15U];
	    vlTOPp->Vortex__DOT__vx_decode__DOT__VX_Context_zero__DOT__gen_code_label__BRA__1__KET____DOT__vx_register_file_slave__DOT__registers[0x16U] 
		= vlTOPp->Vortex__DOT__vx_decode__DOT__VX_Context_zero__DOT__vx_register_file_master__DOT__registers[0x16U];
	    vlTOPp->Vortex__DOT__vx_decode__DOT__VX_Context_zero__DOT__gen_code_label__BRA__1__KET____DOT__vx_register_file_slave__DOT__registers[0x17U] 
		= vlTOPp->Vortex__DOT__vx_decode__DOT__VX_Context_zero__DOT__vx_register_file_master__DOT__registers[0x17U];
	    vlTOPp->Vortex__DOT__vx_decode__DOT__VX_Context_zero__DOT__gen_code_label__BRA__1__KET____DOT__vx_register_file_slave__DOT__registers[0x18U] 
		= vlTOPp->Vortex__DOT__vx_decode__DOT__VX_Context_zero__DOT__vx_register_file_master__DOT__registers[0x18U];
	    vlTOPp->Vortex__DOT__vx_decode__DOT__VX_Context_zero__DOT__gen_code_label__BRA__1__KET____DOT__vx_register_file_slave__DOT__registers[0x19U] 
		= vlTOPp->Vortex__DOT__vx_decode__DOT__VX_Context_zero__DOT__vx_register_file_master__DOT__registers[0x19U];
	    vlTOPp->Vortex__DOT__vx_decode__DOT__VX_Context_zero__DOT__gen_code_label__BRA__1__KET____DOT__vx_register_file_slave__DOT__registers[0x1aU] 
		= vlTOPp->Vortex__DOT__vx_decode__DOT__VX_Context_zero__DOT__vx_register_file_master__DOT__registers[0x1aU];
	    vlTOPp->Vortex__DOT__vx_decode__DOT__VX_Context_zero__DOT__gen_code_label__BRA__1__KET____DOT__vx_register_file_slave__DOT__registers[0x1bU] 
		= vlTOPp->Vortex__DOT__vx_decode__DOT__VX_Context_zero__DOT__vx_register_file_master__DOT__registers[0x1bU];
	    vlTOPp->Vortex__DOT__vx_decode__DOT__VX_Context_zero__DOT__gen_code_label__BRA__1__KET____DOT__vx_register_file_slave__DOT__registers[0x1cU] 
		= vlTOPp->Vortex__DOT__vx_decode__DOT__VX_Context_zero__DOT__vx_register_file_master__DOT__registers[0x1cU];
	    vlTOPp->Vortex__DOT__vx_decode__DOT__VX_Context_zero__DOT__gen_code_label__BRA__1__KET____DOT__vx_register_file_slave__DOT__registers[0x1dU] 
		= vlTOPp->Vortex__DOT__vx_decode__DOT__VX_Context_zero__DOT__vx_register_file_master__DOT__registers[0x1dU];
	    vlTOPp->Vortex__DOT__vx_decode__DOT__VX_Context_zero__DOT__gen_code_label__BRA__1__KET____DOT__vx_register_file_slave__DOT__registers[0x1eU] 
		= vlTOPp->Vortex__DOT__vx_decode__DOT__VX_Context_zero__DOT__vx_register_file_master__DOT__registers[0x1eU];
	    vlTOPp->Vortex__DOT__vx_decode__DOT__VX_Context_zero__DOT__gen_code_label__BRA__1__KET____DOT__vx_register_file_slave__DOT__registers[0x1fU] 
		= vlTOPp->Vortex__DOT__vx_decode__DOT__VX_Context_zero__DOT__vx_register_file_master__DOT__registers[0x1fU];
	}
    }
    // ALWAYSPOST at VX_csr_handler.v:48
    if (__Vdlyvset__Vortex__DOT__vx_csr_handler__DOT__csr__v0) {
	vlTOPp->Vortex__DOT__vx_csr_handler__DOT__csr[__Vdlyvdim0__Vortex__DOT__vx_csr_handler__DOT__csr__v0] 
	    = __Vdlyvval__Vortex__DOT__vx_csr_handler__DOT__csr__v0;
    }
    vlTOPp->Vortex__DOT__vx_decode__DOT__VX_Context_zero__DOT__state_stall 
	= __Vdly__Vortex__DOT__vx_decode__DOT__VX_Context_zero__DOT__state_stall;
    vlTOPp->Vortex__DOT__csr_decode_csr_data = ((0xc00U 
						 == (IData)(vlTOPp->Vortex__DOT__vx_csr_handler__DOT__decode_csr_address))
						 ? (IData)(vlTOPp->Vortex__DOT__vx_csr_handler__DOT__cycle)
						 : 
						((0xc80U 
						  == (IData)(vlTOPp->Vortex__DOT__vx_csr_handler__DOT__decode_csr_address))
						  ? (IData)(
							    (vlTOPp->Vortex__DOT__vx_csr_handler__DOT__cycle 
							     >> 0x20U))
						  : 
						 ((0xc02U 
						   == (IData)(vlTOPp->Vortex__DOT__vx_csr_handler__DOT__decode_csr_address))
						   ? (IData)(vlTOPp->Vortex__DOT__vx_csr_handler__DOT__instret)
						   : 
						  ((0xc82U 
						    == (IData)(vlTOPp->Vortex__DOT__vx_csr_handler__DOT__decode_csr_address))
						    ? (IData)(
							      (vlTOPp->Vortex__DOT__vx_csr_handler__DOT__instret 
							       >> 0x20U))
						    : 
						   ((0x400U 
						     >= 
						     (0x7ffU 
						      & (IData)(vlTOPp->Vortex__DOT__vx_csr_handler__DOT__decode_csr_address)))
						     ? 
						    vlTOPp->Vortex__DOT__vx_csr_handler__DOT__csr
						    [
						    (0x7ffU 
						     & (IData)(vlTOPp->Vortex__DOT__vx_csr_handler__DOT__decode_csr_address))]
						     : 0U)))));
}

VL_INLINE_OPT void VVortex::_sequent__TOP__6(VVortex__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VVortex::_sequent__TOP__6\n"); );
    VVortex* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // ALWAYS at VX_register_file.v:45
    if (((((0U != (3U & ((vlTOPp->Vortex__DOT__vx_m_w_reg__DOT__m_w_reg__DOT__value[2U] 
			  << 0xeU) | (vlTOPp->Vortex__DOT__vx_m_w_reg__DOT__m_w_reg__DOT__value[1U] 
				      >> 0x12U)))) 
	   & (0U != (0x1fU & ((vlTOPp->Vortex__DOT__vx_m_w_reg__DOT__m_w_reg__DOT__value[2U] 
			       << 0xcU) | (vlTOPp->Vortex__DOT__vx_m_w_reg__DOT__m_w_reg__DOT__value[1U] 
					   >> 0x14U))))) 
	  & (vlTOPp->Vortex__DOT__vx_m_w_reg__DOT__m_w_reg__DOT__value[0U] 
	     >> 4U)) & (0U == (0xfU & vlTOPp->Vortex__DOT__vx_m_w_reg__DOT__m_w_reg__DOT__value[0U])))) {
	VL_ASSIGNSEL_WIII(32,(0x3e0U & ((vlTOPp->Vortex__DOT__vx_m_w_reg__DOT__m_w_reg__DOT__value[2U] 
					 << 0x11U) 
					| (0x1ffe0U 
					   & (vlTOPp->Vortex__DOT__vx_m_w_reg__DOT__m_w_reg__DOT__value[1U] 
					      >> 0xfU)))), vlTOPp->Vortex__DOT__vx_decode__DOT__VX_Context_zero__DOT__vx_register_file_master__DOT__registers, 
			  vlSymsp->TOP__Vortex__DOT__VX_writeback_inter.write_data[0U]);
    }
}

VL_INLINE_OPT void VVortex::_combo__TOP__7(VVortex__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VVortex::_combo__TOP__7\n"); );
    VVortex* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->Vortex__DOT____Vcellinp__vx_memory__in_cache_driver_out_data[3U] 
	= vlTOPp->in_cache_driver_out_data[3U];
    vlTOPp->Vortex__DOT____Vcellinp__vx_memory__in_cache_driver_out_data[2U] 
	= vlTOPp->in_cache_driver_out_data[2U];
    vlTOPp->Vortex__DOT____Vcellinp__vx_memory__in_cache_driver_out_data[1U] 
	= vlTOPp->in_cache_driver_out_data[1U];
    vlTOPp->Vortex__DOT____Vcellinp__vx_memory__in_cache_driver_out_data[0U] 
	= vlTOPp->in_cache_driver_out_data[0U];
}

VL_INLINE_OPT void VVortex::_sequent__TOP__8(VVortex__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VVortex::_sequent__TOP__8\n"); );
    VVortex* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // ALWAYS at VX_register_file.v:52
    vlTOPp->Vortex__DOT__vx_decode__DOT__VX_Context_zero__DOT____Vcellout__vx_register_file_master__out_src1_data 
	= vlTOPp->Vortex__DOT__vx_decode__DOT__VX_Context_zero__DOT__vx_register_file_master__DOT__registers[
	(0x1fU & ((0x7fffe00U & (vlTOPp->Vortex__DOT__vx_f_d_reg__DOT__f_d_reg__DOT__value[2U] 
				 << 9U)) | (0x1ffU 
					    & (vlTOPp->Vortex__DOT__vx_f_d_reg__DOT__f_d_reg__DOT__value[1U] 
					       >> 0x17U))))];
    // ALWAYS at VX_register_file.v:52
    vlTOPp->Vortex__DOT__vx_decode__DOT__VX_Context_zero__DOT____Vcellout__vx_register_file_master__out_src2_data 
	= vlTOPp->Vortex__DOT__vx_decode__DOT__VX_Context_zero__DOT__vx_register_file_master__DOT__registers[
	(0x1fU & ((0x7fffff0U & (vlTOPp->Vortex__DOT__vx_f_d_reg__DOT__f_d_reg__DOT__value[2U] 
				 << 4U)) | (0xfU & 
					    (vlTOPp->Vortex__DOT__vx_f_d_reg__DOT__f_d_reg__DOT__value[1U] 
					     >> 0x1cU))))];
    // ALWAYS at VX_register_file_slave.v:68
    vlTOPp->Vortex__DOT__vx_decode__DOT__VX_Context_zero__DOT____Vcellout__gen_code_label__BRA__3__KET____DOT__vx_register_file_slave__out_src1_data 
	= vlTOPp->Vortex__DOT__vx_decode__DOT__VX_Context_zero__DOT__gen_code_label__BRA__3__KET____DOT__vx_register_file_slave__DOT__registers[
	(0x1fU & ((0x7fffe00U & (vlTOPp->Vortex__DOT__vx_f_d_reg__DOT__f_d_reg__DOT__value[2U] 
				 << 9U)) | (0x1ffU 
					    & (vlTOPp->Vortex__DOT__vx_f_d_reg__DOT__f_d_reg__DOT__value[1U] 
					       >> 0x17U))))];
    // ALWAYS at VX_register_file_slave.v:68
    vlTOPp->Vortex__DOT__vx_decode__DOT__VX_Context_zero__DOT____Vcellout__gen_code_label__BRA__2__KET____DOT__vx_register_file_slave__out_src1_data 
	= vlTOPp->Vortex__DOT__vx_decode__DOT__VX_Context_zero__DOT__gen_code_label__BRA__2__KET____DOT__vx_register_file_slave__DOT__registers[
	(0x1fU & ((0x7fffe00U & (vlTOPp->Vortex__DOT__vx_f_d_reg__DOT__f_d_reg__DOT__value[2U] 
				 << 9U)) | (0x1ffU 
					    & (vlTOPp->Vortex__DOT__vx_f_d_reg__DOT__f_d_reg__DOT__value[1U] 
					       >> 0x17U))))];
    // ALWAYS at VX_register_file_slave.v:68
    vlTOPp->Vortex__DOT__vx_decode__DOT__VX_Context_zero__DOT____Vcellout__gen_code_label__BRA__1__KET____DOT__vx_register_file_slave__out_src1_data 
	= vlTOPp->Vortex__DOT__vx_decode__DOT__VX_Context_zero__DOT__gen_code_label__BRA__1__KET____DOT__vx_register_file_slave__DOT__registers[
	(0x1fU & ((0x7fffe00U & (vlTOPp->Vortex__DOT__vx_f_d_reg__DOT__f_d_reg__DOT__value[2U] 
				 << 9U)) | (0x1ffU 
					    & (vlTOPp->Vortex__DOT__vx_f_d_reg__DOT__f_d_reg__DOT__value[1U] 
					       >> 0x17U))))];
    // ALWAYS at VX_register_file_slave.v:68
    vlTOPp->Vortex__DOT__vx_decode__DOT__VX_Context_zero__DOT____Vcellout__gen_code_label__BRA__3__KET____DOT__vx_register_file_slave__out_src2_data 
	= vlTOPp->Vortex__DOT__vx_decode__DOT__VX_Context_zero__DOT__gen_code_label__BRA__3__KET____DOT__vx_register_file_slave__DOT__registers[
	(0x1fU & ((0x7fffff0U & (vlTOPp->Vortex__DOT__vx_f_d_reg__DOT__f_d_reg__DOT__value[2U] 
				 << 4U)) | (0xfU & 
					    (vlTOPp->Vortex__DOT__vx_f_d_reg__DOT__f_d_reg__DOT__value[1U] 
					     >> 0x1cU))))];
    // ALWAYS at VX_register_file_slave.v:68
    vlTOPp->Vortex__DOT__vx_decode__DOT__VX_Context_zero__DOT____Vcellout__gen_code_label__BRA__2__KET____DOT__vx_register_file_slave__out_src2_data 
	= vlTOPp->Vortex__DOT__vx_decode__DOT__VX_Context_zero__DOT__gen_code_label__BRA__2__KET____DOT__vx_register_file_slave__DOT__registers[
	(0x1fU & ((0x7fffff0U & (vlTOPp->Vortex__DOT__vx_f_d_reg__DOT__f_d_reg__DOT__value[2U] 
				 << 4U)) | (0xfU & 
					    (vlTOPp->Vortex__DOT__vx_f_d_reg__DOT__f_d_reg__DOT__value[1U] 
					     >> 0x1cU))))];
    // ALWAYS at VX_register_file_slave.v:68
    vlTOPp->Vortex__DOT__vx_decode__DOT__VX_Context_zero__DOT____Vcellout__gen_code_label__BRA__1__KET____DOT__vx_register_file_slave__out_src2_data 
	= vlTOPp->Vortex__DOT__vx_decode__DOT__VX_Context_zero__DOT__gen_code_label__BRA__1__KET____DOT__vx_register_file_slave__DOT__registers[
	(0x1fU & ((0x7fffff0U & (vlTOPp->Vortex__DOT__vx_f_d_reg__DOT__f_d_reg__DOT__value[2U] 
				 << 4U)) | (0xfU & 
					    (vlTOPp->Vortex__DOT__vx_f_d_reg__DOT__f_d_reg__DOT__value[1U] 
					     >> 0x1cU))))];
    vlTOPp->Vortex__DOT__vx_decode__DOT__VX_Context_zero__DOT__rd1_register[0U] 
	= vlTOPp->Vortex__DOT__vx_decode__DOT__VX_Context_zero__DOT____Vcellout__vx_register_file_master__out_src1_data;
    vlTOPp->Vortex__DOT__vx_decode__DOT__VX_Context_zero__DOT__rd2_register[0U] 
	= vlTOPp->Vortex__DOT__vx_decode__DOT__VX_Context_zero__DOT____Vcellout__vx_register_file_master__out_src2_data;
    vlTOPp->Vortex__DOT__vx_decode__DOT__VX_Context_zero__DOT__rd1_register[3U] 
	= vlTOPp->Vortex__DOT__vx_decode__DOT__VX_Context_zero__DOT____Vcellout__gen_code_label__BRA__3__KET____DOT__vx_register_file_slave__out_src1_data;
    vlTOPp->Vortex__DOT__vx_decode__DOT__VX_Context_zero__DOT__rd1_register[2U] 
	= vlTOPp->Vortex__DOT__vx_decode__DOT__VX_Context_zero__DOT____Vcellout__gen_code_label__BRA__2__KET____DOT__vx_register_file_slave__out_src1_data;
    vlTOPp->Vortex__DOT__vx_decode__DOT__VX_Context_zero__DOT__rd1_register[1U] 
	= vlTOPp->Vortex__DOT__vx_decode__DOT__VX_Context_zero__DOT____Vcellout__gen_code_label__BRA__1__KET____DOT__vx_register_file_slave__out_src1_data;
    vlTOPp->Vortex__DOT__vx_decode__DOT__VX_Context_zero__DOT__rd2_register[3U] 
	= vlTOPp->Vortex__DOT__vx_decode__DOT__VX_Context_zero__DOT____Vcellout__gen_code_label__BRA__3__KET____DOT__vx_register_file_slave__out_src2_data;
    vlTOPp->Vortex__DOT__vx_decode__DOT__VX_Context_zero__DOT__rd2_register[2U] 
	= vlTOPp->Vortex__DOT__vx_decode__DOT__VX_Context_zero__DOT____Vcellout__gen_code_label__BRA__2__KET____DOT__vx_register_file_slave__out_src2_data;
    vlTOPp->Vortex__DOT__vx_decode__DOT__VX_Context_zero__DOT__rd2_register[1U] 
	= vlTOPp->Vortex__DOT__vx_decode__DOT__VX_Context_zero__DOT____Vcellout__gen_code_label__BRA__1__KET____DOT__vx_register_file_slave__out_src2_data;
}

VL_INLINE_OPT void VVortex::_sequent__TOP__9(VVortex__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VVortex::_sequent__TOP__9\n"); );
    VVortex* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    // Begin mtask footprint  all: 
    VL_SIGW(__Vtemp99,319,0,10);
    VL_SIGW(__Vtemp115,479,0,15);
    VL_SIGW(__Vtemp124,735,0,23);
    // Body
    // ALWAYS at VX_alu.v:48
    vlTOPp->Vortex__DOT__vx_execute__DOT____Vcellout__genblk1__BRA__0__KET____DOT__vx_alu__out_alu_result 
	= ((0x2000U & vlTOPp->Vortex__DOT__vx_d_e_reg__DOT__d_e_reg__DOT__value[5U])
	    ? ((0x1000U & vlTOPp->Vortex__DOT__vx_d_e_reg__DOT__d_e_reg__DOT__value[5U])
	        ? 0U : ((0x800U & vlTOPp->Vortex__DOT__vx_d_e_reg__DOT__d_e_reg__DOT__value[5U])
			 ? ((0x400U & vlTOPp->Vortex__DOT__vx_d_e_reg__DOT__d_e_reg__DOT__value[5U])
			     ? ((0x200U & vlTOPp->Vortex__DOT__vx_d_e_reg__DOT__d_e_reg__DOT__value[5U])
				 ? ((0U == vlTOPp->Vortex__DOT__vx_execute__DOT__genblk1__BRA__0__KET____DOT__vx_alu__DOT__ALU_in2)
				     ? ((vlTOPp->Vortex__DOT__vx_d_e_reg__DOT__d_e_reg__DOT__value[0xaU] 
					 << 0x12U) 
					| (vlTOPp->Vortex__DOT__vx_d_e_reg__DOT__d_e_reg__DOT__value[9U] 
					   >> 0xeU))
				     : VL_MODDIV_III(32, 
						     ((vlTOPp->Vortex__DOT__vx_d_e_reg__DOT__d_e_reg__DOT__value[0xaU] 
						       << 0x12U) 
						      | (vlTOPp->Vortex__DOT__vx_d_e_reg__DOT__d_e_reg__DOT__value[9U] 
							 >> 0xeU)), vlTOPp->Vortex__DOT__vx_execute__DOT__genblk1__BRA__0__KET____DOT__vx_alu__DOT__ALU_in2))
				 : ((0U == vlTOPp->Vortex__DOT__vx_execute__DOT__genblk1__BRA__0__KET____DOT__vx_alu__DOT__ALU_in2)
				     ? ((vlTOPp->Vortex__DOT__vx_d_e_reg__DOT__d_e_reg__DOT__value[0xaU] 
					 << 0x12U) 
					| (vlTOPp->Vortex__DOT__vx_d_e_reg__DOT__d_e_reg__DOT__value[9U] 
					   >> 0xeU))
				     : VL_MODDIVS_III(32, 
						      ((vlTOPp->Vortex__DOT__vx_d_e_reg__DOT__d_e_reg__DOT__value[0xaU] 
							<< 0x12U) 
						       | (vlTOPp->Vortex__DOT__vx_d_e_reg__DOT__d_e_reg__DOT__value[9U] 
							  >> 0xeU)), vlTOPp->Vortex__DOT__vx_execute__DOT__genblk1__BRA__0__KET____DOT__vx_alu__DOT__ALU_in2)))
			     : ((0x200U & vlTOPp->Vortex__DOT__vx_d_e_reg__DOT__d_e_reg__DOT__value[5U])
				 ? ((0U == vlTOPp->Vortex__DOT__vx_execute__DOT__genblk1__BRA__0__KET____DOT__vx_alu__DOT__ALU_in2)
				     ? 0xffffffffU : 
				    VL_DIV_III(32, 
					       ((vlTOPp->Vortex__DOT__vx_d_e_reg__DOT__d_e_reg__DOT__value[0xaU] 
						 << 0x12U) 
						| (vlTOPp->Vortex__DOT__vx_d_e_reg__DOT__d_e_reg__DOT__value[9U] 
						   >> 0xeU)), vlTOPp->Vortex__DOT__vx_execute__DOT__genblk1__BRA__0__KET____DOT__vx_alu__DOT__ALU_in2))
				 : ((0U == vlTOPp->Vortex__DOT__vx_execute__DOT__genblk1__BRA__0__KET____DOT__vx_alu__DOT__ALU_in2)
				     ? 0xffffffffU : 
				    VL_DIVS_III(32, 
						((vlTOPp->Vortex__DOT__vx_d_e_reg__DOT__d_e_reg__DOT__value[0xaU] 
						  << 0x12U) 
						 | (vlTOPp->Vortex__DOT__vx_d_e_reg__DOT__d_e_reg__DOT__value[9U] 
						    >> 0xeU)), vlTOPp->Vortex__DOT__vx_execute__DOT__genblk1__BRA__0__KET____DOT__vx_alu__DOT__ALU_in2))))
			 : ((0x400U & vlTOPp->Vortex__DOT__vx_d_e_reg__DOT__d_e_reg__DOT__value[5U])
			     ? ((0x200U & vlTOPp->Vortex__DOT__vx_d_e_reg__DOT__d_e_reg__DOT__value[5U])
				 ? (IData)((((QData)((IData)(
							     ((vlTOPp->Vortex__DOT__vx_d_e_reg__DOT__d_e_reg__DOT__value[0xaU] 
							       << 0x12U) 
							      | (vlTOPp->Vortex__DOT__vx_d_e_reg__DOT__d_e_reg__DOT__value[9U] 
								 >> 0xeU)))) 
					     * (QData)((IData)(vlTOPp->Vortex__DOT__vx_execute__DOT__genblk1__BRA__0__KET____DOT__vx_alu__DOT__ALU_in2))) 
					    >> 0x20U))
				 : (IData)((((((QData)((IData)(
							       VL_NEGATE_I((IData)(
										(1U 
										& (vlTOPp->Vortex__DOT__vx_d_e_reg__DOT__d_e_reg__DOT__value[0xaU] 
										>> 0xdU)))))) 
					       << 0x20U) 
					      | (QData)((IData)(
								((vlTOPp->Vortex__DOT__vx_d_e_reg__DOT__d_e_reg__DOT__value[0xaU] 
								  << 0x12U) 
								 | (vlTOPp->Vortex__DOT__vx_d_e_reg__DOT__d_e_reg__DOT__value[9U] 
								    >> 0xeU))))) 
					     * (QData)((IData)(vlTOPp->Vortex__DOT__vx_execute__DOT__genblk1__BRA__0__KET____DOT__vx_alu__DOT__ALU_in2))) 
					    >> 0x20U)))
			     : ((0x200U & vlTOPp->Vortex__DOT__vx_d_e_reg__DOT__d_e_reg__DOT__value[5U])
				 ? (IData)((vlTOPp->Vortex__DOT__vx_execute__DOT__genblk1__BRA__0__KET____DOT__vx_alu__DOT__mult_signed_result 
					    >> 0x20U))
				 : (IData)(vlTOPp->Vortex__DOT__vx_execute__DOT__genblk1__BRA__0__KET____DOT__vx_alu__DOT__mult_signed_result)))))
	    : ((0x1000U & vlTOPp->Vortex__DOT__vx_d_e_reg__DOT__d_e_reg__DOT__value[5U])
	        ? ((0x800U & vlTOPp->Vortex__DOT__vx_d_e_reg__DOT__d_e_reg__DOT__value[5U])
		    ? ((0x400U & vlTOPp->Vortex__DOT__vx_d_e_reg__DOT__d_e_reg__DOT__value[5U])
		        ? vlTOPp->Vortex__DOT__csr_decode_csr_data
		        : ((0x200U & vlTOPp->Vortex__DOT__vx_d_e_reg__DOT__d_e_reg__DOT__value[5U])
			    ? vlTOPp->Vortex__DOT__csr_decode_csr_data
			    : (((vlTOPp->Vortex__DOT__vx_d_e_reg__DOT__d_e_reg__DOT__value[3U] 
				 << 0x17U) | (vlTOPp->Vortex__DOT__vx_d_e_reg__DOT__d_e_reg__DOT__value[2U] 
					      >> 9U)) 
			       + (0xfffff000U & (vlTOPp->Vortex__DOT__vx_d_e_reg__DOT__d_e_reg__DOT__value[3U] 
						 << 3U)))))
		    : ((0x400U & vlTOPp->Vortex__DOT__vx_d_e_reg__DOT__d_e_reg__DOT__value[5U])
		        ? ((0x200U & vlTOPp->Vortex__DOT__vx_d_e_reg__DOT__d_e_reg__DOT__value[5U])
			    ? (0xfffff000U & (vlTOPp->Vortex__DOT__vx_d_e_reg__DOT__d_e_reg__DOT__value[3U] 
					      << 3U))
			    : ((((vlTOPp->Vortex__DOT__vx_d_e_reg__DOT__d_e_reg__DOT__value[0xaU] 
				  << 0x12U) | (vlTOPp->Vortex__DOT__vx_d_e_reg__DOT__d_e_reg__DOT__value[9U] 
					       >> 0xeU)) 
				>= vlTOPp->Vortex__DOT__vx_execute__DOT__genblk1__BRA__0__KET____DOT__vx_alu__DOT__ALU_in2)
			        ? 0U : 0xffffffffU))
		        : ((0x200U & vlTOPp->Vortex__DOT__vx_d_e_reg__DOT__d_e_reg__DOT__value[5U])
			    ? (vlTOPp->Vortex__DOT__vx_execute__DOT__genblk1__BRA__0__KET____DOT__vx_alu__DOT__ALU_in2 
			       & ((vlTOPp->Vortex__DOT__vx_d_e_reg__DOT__d_e_reg__DOT__value[0xaU] 
				   << 0x12U) | (vlTOPp->Vortex__DOT__vx_d_e_reg__DOT__d_e_reg__DOT__value[9U] 
						>> 0xeU)))
			    : (((vlTOPp->Vortex__DOT__vx_d_e_reg__DOT__d_e_reg__DOT__value[0xaU] 
				 << 0x12U) | (vlTOPp->Vortex__DOT__vx_d_e_reg__DOT__d_e_reg__DOT__value[9U] 
					      >> 0xeU)) 
			       | vlTOPp->Vortex__DOT__vx_execute__DOT__genblk1__BRA__0__KET____DOT__vx_alu__DOT__ALU_in2))))
	        : ((0x800U & vlTOPp->Vortex__DOT__vx_d_e_reg__DOT__d_e_reg__DOT__value[5U])
		    ? ((0x400U & vlTOPp->Vortex__DOT__vx_d_e_reg__DOT__d_e_reg__DOT__value[5U])
		        ? ((0x200U & vlTOPp->Vortex__DOT__vx_d_e_reg__DOT__d_e_reg__DOT__value[5U])
			    ? VL_SHIFTRS_III(32,32,5, 
					     ((vlTOPp->Vortex__DOT__vx_d_e_reg__DOT__d_e_reg__DOT__value[0xaU] 
					       << 0x12U) 
					      | (vlTOPp->Vortex__DOT__vx_d_e_reg__DOT__d_e_reg__DOT__value[9U] 
						 >> 0xeU)), 
					     (0x1fU 
					      & vlTOPp->Vortex__DOT__vx_execute__DOT__genblk1__BRA__0__KET____DOT__vx_alu__DOT__ALU_in2))
			    : (((vlTOPp->Vortex__DOT__vx_d_e_reg__DOT__d_e_reg__DOT__value[0xaU] 
				 << 0x12U) | (vlTOPp->Vortex__DOT__vx_d_e_reg__DOT__d_e_reg__DOT__value[9U] 
					      >> 0xeU)) 
			       >> (0x1fU & vlTOPp->Vortex__DOT__vx_execute__DOT__genblk1__BRA__0__KET____DOT__vx_alu__DOT__ALU_in2)))
		        : ((0x200U & vlTOPp->Vortex__DOT__vx_d_e_reg__DOT__d_e_reg__DOT__value[5U])
			    ? (((vlTOPp->Vortex__DOT__vx_d_e_reg__DOT__d_e_reg__DOT__value[0xaU] 
				 << 0x12U) | (vlTOPp->Vortex__DOT__vx_d_e_reg__DOT__d_e_reg__DOT__value[9U] 
					      >> 0xeU)) 
			       ^ vlTOPp->Vortex__DOT__vx_execute__DOT__genblk1__BRA__0__KET____DOT__vx_alu__DOT__ALU_in2)
			    : ((((vlTOPp->Vortex__DOT__vx_d_e_reg__DOT__d_e_reg__DOT__value[0xaU] 
				  << 0x12U) | (vlTOPp->Vortex__DOT__vx_d_e_reg__DOT__d_e_reg__DOT__value[9U] 
					       >> 0xeU)) 
				< vlTOPp->Vortex__DOT__vx_execute__DOT__genblk1__BRA__0__KET____DOT__vx_alu__DOT__ALU_in2)
			        ? 1U : 0U))) : ((0x400U 
						 & vlTOPp->Vortex__DOT__vx_d_e_reg__DOT__d_e_reg__DOT__value[5U])
						 ? 
						((0x200U 
						  & vlTOPp->Vortex__DOT__vx_d_e_reg__DOT__d_e_reg__DOT__value[5U])
						  ? 
						 (VL_LTS_III(1,32,32, 
							     ((vlTOPp->Vortex__DOT__vx_d_e_reg__DOT__d_e_reg__DOT__value[0xaU] 
							       << 0x12U) 
							      | (vlTOPp->Vortex__DOT__vx_d_e_reg__DOT__d_e_reg__DOT__value[9U] 
								 >> 0xeU)), vlTOPp->Vortex__DOT__vx_execute__DOT__genblk1__BRA__0__KET____DOT__vx_alu__DOT__ALU_in2)
						   ? 1U
						   : 0U)
						  : 
						 (((vlTOPp->Vortex__DOT__vx_d_e_reg__DOT__d_e_reg__DOT__value[0xaU] 
						    << 0x12U) 
						   | (vlTOPp->Vortex__DOT__vx_d_e_reg__DOT__d_e_reg__DOT__value[9U] 
						      >> 0xeU)) 
						  << 
						  (0x1fU 
						   & vlTOPp->Vortex__DOT__vx_execute__DOT__genblk1__BRA__0__KET____DOT__vx_alu__DOT__ALU_in2)))
						 : 
						((0x200U 
						  & vlTOPp->Vortex__DOT__vx_d_e_reg__DOT__d_e_reg__DOT__value[5U])
						  ? 
						 (((vlTOPp->Vortex__DOT__vx_d_e_reg__DOT__d_e_reg__DOT__value[0xaU] 
						    << 0x12U) 
						   | (vlTOPp->Vortex__DOT__vx_d_e_reg__DOT__d_e_reg__DOT__value[9U] 
						      >> 0xeU)) 
						  - vlTOPp->Vortex__DOT__vx_execute__DOT__genblk1__BRA__0__KET____DOT__vx_alu__DOT__ALU_in2)
						  : 
						 (((vlTOPp->Vortex__DOT__vx_d_e_reg__DOT__d_e_reg__DOT__value[0xaU] 
						    << 0x12U) 
						   | (vlTOPp->Vortex__DOT__vx_d_e_reg__DOT__d_e_reg__DOT__value[9U] 
						      >> 0xeU)) 
						  + vlTOPp->Vortex__DOT__vx_execute__DOT__genblk1__BRA__0__KET____DOT__vx_alu__DOT__ALU_in2))))));
    // ALWAYS at VX_alu.v:48
    vlTOPp->Vortex__DOT__vx_execute__DOT____Vcellout__genblk1__BRA__1__KET____DOT__vx_alu__out_alu_result 
	= ((0x2000U & vlTOPp->Vortex__DOT__vx_d_e_reg__DOT__d_e_reg__DOT__value[5U])
	    ? ((0x1000U & vlTOPp->Vortex__DOT__vx_d_e_reg__DOT__d_e_reg__DOT__value[5U])
	        ? 0U : ((0x800U & vlTOPp->Vortex__DOT__vx_d_e_reg__DOT__d_e_reg__DOT__value[5U])
			 ? ((0x400U & vlTOPp->Vortex__DOT__vx_d_e_reg__DOT__d_e_reg__DOT__value[5U])
			     ? ((0x200U & vlTOPp->Vortex__DOT__vx_d_e_reg__DOT__d_e_reg__DOT__value[5U])
				 ? ((0U == vlTOPp->Vortex__DOT__vx_execute__DOT__genblk1__BRA__1__KET____DOT__vx_alu__DOT__ALU_in2)
				     ? ((vlTOPp->Vortex__DOT__vx_d_e_reg__DOT__d_e_reg__DOT__value[0xbU] 
					 << 0x12U) 
					| (vlTOPp->Vortex__DOT__vx_d_e_reg__DOT__d_e_reg__DOT__value[0xaU] 
					   >> 0xeU))
				     : VL_MODDIV_III(32, 
						     ((vlTOPp->Vortex__DOT__vx_d_e_reg__DOT__d_e_reg__DOT__value[0xbU] 
						       << 0x12U) 
						      | (vlTOPp->Vortex__DOT__vx_d_e_reg__DOT__d_e_reg__DOT__value[0xaU] 
							 >> 0xeU)), vlTOPp->Vortex__DOT__vx_execute__DOT__genblk1__BRA__1__KET____DOT__vx_alu__DOT__ALU_in2))
				 : ((0U == vlTOPp->Vortex__DOT__vx_execute__DOT__genblk1__BRA__1__KET____DOT__vx_alu__DOT__ALU_in2)
				     ? ((vlTOPp->Vortex__DOT__vx_d_e_reg__DOT__d_e_reg__DOT__value[0xbU] 
					 << 0x12U) 
					| (vlTOPp->Vortex__DOT__vx_d_e_reg__DOT__d_e_reg__DOT__value[0xaU] 
					   >> 0xeU))
				     : VL_MODDIVS_III(32, 
						      ((vlTOPp->Vortex__DOT__vx_d_e_reg__DOT__d_e_reg__DOT__value[0xbU] 
							<< 0x12U) 
						       | (vlTOPp->Vortex__DOT__vx_d_e_reg__DOT__d_e_reg__DOT__value[0xaU] 
							  >> 0xeU)), vlTOPp->Vortex__DOT__vx_execute__DOT__genblk1__BRA__1__KET____DOT__vx_alu__DOT__ALU_in2)))
			     : ((0x200U & vlTOPp->Vortex__DOT__vx_d_e_reg__DOT__d_e_reg__DOT__value[5U])
				 ? ((0U == vlTOPp->Vortex__DOT__vx_execute__DOT__genblk1__BRA__1__KET____DOT__vx_alu__DOT__ALU_in2)
				     ? 0xffffffffU : 
				    VL_DIV_III(32, 
					       ((vlTOPp->Vortex__DOT__vx_d_e_reg__DOT__d_e_reg__DOT__value[0xbU] 
						 << 0x12U) 
						| (vlTOPp->Vortex__DOT__vx_d_e_reg__DOT__d_e_reg__DOT__value[0xaU] 
						   >> 0xeU)), vlTOPp->Vortex__DOT__vx_execute__DOT__genblk1__BRA__1__KET____DOT__vx_alu__DOT__ALU_in2))
				 : ((0U == vlTOPp->Vortex__DOT__vx_execute__DOT__genblk1__BRA__1__KET____DOT__vx_alu__DOT__ALU_in2)
				     ? 0xffffffffU : 
				    VL_DIVS_III(32, 
						((vlTOPp->Vortex__DOT__vx_d_e_reg__DOT__d_e_reg__DOT__value[0xbU] 
						  << 0x12U) 
						 | (vlTOPp->Vortex__DOT__vx_d_e_reg__DOT__d_e_reg__DOT__value[0xaU] 
						    >> 0xeU)), vlTOPp->Vortex__DOT__vx_execute__DOT__genblk1__BRA__1__KET____DOT__vx_alu__DOT__ALU_in2))))
			 : ((0x400U & vlTOPp->Vortex__DOT__vx_d_e_reg__DOT__d_e_reg__DOT__value[5U])
			     ? ((0x200U & vlTOPp->Vortex__DOT__vx_d_e_reg__DOT__d_e_reg__DOT__value[5U])
				 ? (IData)((((QData)((IData)(
							     ((vlTOPp->Vortex__DOT__vx_d_e_reg__DOT__d_e_reg__DOT__value[0xbU] 
							       << 0x12U) 
							      | (vlTOPp->Vortex__DOT__vx_d_e_reg__DOT__d_e_reg__DOT__value[0xaU] 
								 >> 0xeU)))) 
					     * (QData)((IData)(vlTOPp->Vortex__DOT__vx_execute__DOT__genblk1__BRA__1__KET____DOT__vx_alu__DOT__ALU_in2))) 
					    >> 0x20U))
				 : (IData)((((((QData)((IData)(
							       VL_NEGATE_I((IData)(
										(1U 
										& (vlTOPp->Vortex__DOT__vx_d_e_reg__DOT__d_e_reg__DOT__value[0xbU] 
										>> 0xdU)))))) 
					       << 0x20U) 
					      | (QData)((IData)(
								((vlTOPp->Vortex__DOT__vx_d_e_reg__DOT__d_e_reg__DOT__value[0xbU] 
								  << 0x12U) 
								 | (vlTOPp->Vortex__DOT__vx_d_e_reg__DOT__d_e_reg__DOT__value[0xaU] 
								    >> 0xeU))))) 
					     * (QData)((IData)(vlTOPp->Vortex__DOT__vx_execute__DOT__genblk1__BRA__1__KET____DOT__vx_alu__DOT__ALU_in2))) 
					    >> 0x20U)))
			     : ((0x200U & vlTOPp->Vortex__DOT__vx_d_e_reg__DOT__d_e_reg__DOT__value[5U])
				 ? (IData)((vlTOPp->Vortex__DOT__vx_execute__DOT__genblk1__BRA__1__KET____DOT__vx_alu__DOT__mult_signed_result 
					    >> 0x20U))
				 : (IData)(vlTOPp->Vortex__DOT__vx_execute__DOT__genblk1__BRA__1__KET____DOT__vx_alu__DOT__mult_signed_result)))))
	    : ((0x1000U & vlTOPp->Vortex__DOT__vx_d_e_reg__DOT__d_e_reg__DOT__value[5U])
	        ? ((0x800U & vlTOPp->Vortex__DOT__vx_d_e_reg__DOT__d_e_reg__DOT__value[5U])
		    ? ((0x400U & vlTOPp->Vortex__DOT__vx_d_e_reg__DOT__d_e_reg__DOT__value[5U])
		        ? vlTOPp->Vortex__DOT__csr_decode_csr_data
		        : ((0x200U & vlTOPp->Vortex__DOT__vx_d_e_reg__DOT__d_e_reg__DOT__value[5U])
			    ? vlTOPp->Vortex__DOT__csr_decode_csr_data
			    : (((vlTOPp->Vortex__DOT__vx_d_e_reg__DOT__d_e_reg__DOT__value[3U] 
				 << 0x17U) | (vlTOPp->Vortex__DOT__vx_d_e_reg__DOT__d_e_reg__DOT__value[2U] 
					      >> 9U)) 
			       + (0xfffff000U & (vlTOPp->Vortex__DOT__vx_d_e_reg__DOT__d_e_reg__DOT__value[3U] 
						 << 3U)))))
		    : ((0x400U & vlTOPp->Vortex__DOT__vx_d_e_reg__DOT__d_e_reg__DOT__value[5U])
		        ? ((0x200U & vlTOPp->Vortex__DOT__vx_d_e_reg__DOT__d_e_reg__DOT__value[5U])
			    ? (0xfffff000U & (vlTOPp->Vortex__DOT__vx_d_e_reg__DOT__d_e_reg__DOT__value[3U] 
					      << 3U))
			    : ((((vlTOPp->Vortex__DOT__vx_d_e_reg__DOT__d_e_reg__DOT__value[0xbU] 
				  << 0x12U) | (vlTOPp->Vortex__DOT__vx_d_e_reg__DOT__d_e_reg__DOT__value[0xaU] 
					       >> 0xeU)) 
				>= vlTOPp->Vortex__DOT__vx_execute__DOT__genblk1__BRA__1__KET____DOT__vx_alu__DOT__ALU_in2)
			        ? 0U : 0xffffffffU))
		        : ((0x200U & vlTOPp->Vortex__DOT__vx_d_e_reg__DOT__d_e_reg__DOT__value[5U])
			    ? (vlTOPp->Vortex__DOT__vx_execute__DOT__genblk1__BRA__1__KET____DOT__vx_alu__DOT__ALU_in2 
			       & ((vlTOPp->Vortex__DOT__vx_d_e_reg__DOT__d_e_reg__DOT__value[0xbU] 
				   << 0x12U) | (vlTOPp->Vortex__DOT__vx_d_e_reg__DOT__d_e_reg__DOT__value[0xaU] 
						>> 0xeU)))
			    : (((vlTOPp->Vortex__DOT__vx_d_e_reg__DOT__d_e_reg__DOT__value[0xbU] 
				 << 0x12U) | (vlTOPp->Vortex__DOT__vx_d_e_reg__DOT__d_e_reg__DOT__value[0xaU] 
					      >> 0xeU)) 
			       | vlTOPp->Vortex__DOT__vx_execute__DOT__genblk1__BRA__1__KET____DOT__vx_alu__DOT__ALU_in2))))
	        : ((0x800U & vlTOPp->Vortex__DOT__vx_d_e_reg__DOT__d_e_reg__DOT__value[5U])
		    ? ((0x400U & vlTOPp->Vortex__DOT__vx_d_e_reg__DOT__d_e_reg__DOT__value[5U])
		        ? ((0x200U & vlTOPp->Vortex__DOT__vx_d_e_reg__DOT__d_e_reg__DOT__value[5U])
			    ? VL_SHIFTRS_III(32,32,5, 
					     ((vlTOPp->Vortex__DOT__vx_d_e_reg__DOT__d_e_reg__DOT__value[0xbU] 
					       << 0x12U) 
					      | (vlTOPp->Vortex__DOT__vx_d_e_reg__DOT__d_e_reg__DOT__value[0xaU] 
						 >> 0xeU)), 
					     (0x1fU 
					      & vlTOPp->Vortex__DOT__vx_execute__DOT__genblk1__BRA__1__KET____DOT__vx_alu__DOT__ALU_in2))
			    : (((vlTOPp->Vortex__DOT__vx_d_e_reg__DOT__d_e_reg__DOT__value[0xbU] 
				 << 0x12U) | (vlTOPp->Vortex__DOT__vx_d_e_reg__DOT__d_e_reg__DOT__value[0xaU] 
					      >> 0xeU)) 
			       >> (0x1fU & vlTOPp->Vortex__DOT__vx_execute__DOT__genblk1__BRA__1__KET____DOT__vx_alu__DOT__ALU_in2)))
		        : ((0x200U & vlTOPp->Vortex__DOT__vx_d_e_reg__DOT__d_e_reg__DOT__value[5U])
			    ? (((vlTOPp->Vortex__DOT__vx_d_e_reg__DOT__d_e_reg__DOT__value[0xbU] 
				 << 0x12U) | (vlTOPp->Vortex__DOT__vx_d_e_reg__DOT__d_e_reg__DOT__value[0xaU] 
					      >> 0xeU)) 
			       ^ vlTOPp->Vortex__DOT__vx_execute__DOT__genblk1__BRA__1__KET____DOT__vx_alu__DOT__ALU_in2)
			    : ((((vlTOPp->Vortex__DOT__vx_d_e_reg__DOT__d_e_reg__DOT__value[0xbU] 
				  << 0x12U) | (vlTOPp->Vortex__DOT__vx_d_e_reg__DOT__d_e_reg__DOT__value[0xaU] 
					       >> 0xeU)) 
				< vlTOPp->Vortex__DOT__vx_execute__DOT__genblk1__BRA__1__KET____DOT__vx_alu__DOT__ALU_in2)
			        ? 1U : 0U))) : ((0x400U 
						 & vlTOPp->Vortex__DOT__vx_d_e_reg__DOT__d_e_reg__DOT__value[5U])
						 ? 
						((0x200U 
						  & vlTOPp->Vortex__DOT__vx_d_e_reg__DOT__d_e_reg__DOT__value[5U])
						  ? 
						 (VL_LTS_III(1,32,32, 
							     ((vlTOPp->Vortex__DOT__vx_d_e_reg__DOT__d_e_reg__DOT__value[0xbU] 
							       << 0x12U) 
							      | (vlTOPp->Vortex__DOT__vx_d_e_reg__DOT__d_e_reg__DOT__value[0xaU] 
								 >> 0xeU)), vlTOPp->Vortex__DOT__vx_execute__DOT__genblk1__BRA__1__KET____DOT__vx_alu__DOT__ALU_in2)
						   ? 1U
						   : 0U)
						  : 
						 (((vlTOPp->Vortex__DOT__vx_d_e_reg__DOT__d_e_reg__DOT__value[0xbU] 
						    << 0x12U) 
						   | (vlTOPp->Vortex__DOT__vx_d_e_reg__DOT__d_e_reg__DOT__value[0xaU] 
						      >> 0xeU)) 
						  << 
						  (0x1fU 
						   & vlTOPp->Vortex__DOT__vx_execute__DOT__genblk1__BRA__1__KET____DOT__vx_alu__DOT__ALU_in2)))
						 : 
						((0x200U 
						  & vlTOPp->Vortex__DOT__vx_d_e_reg__DOT__d_e_reg__DOT__value[5U])
						  ? 
						 (((vlTOPp->Vortex__DOT__vx_d_e_reg__DOT__d_e_reg__DOT__value[0xbU] 
						    << 0x12U) 
						   | (vlTOPp->Vortex__DOT__vx_d_e_reg__DOT__d_e_reg__DOT__value[0xaU] 
						      >> 0xeU)) 
						  - vlTOPp->Vortex__DOT__vx_execute__DOT__genblk1__BRA__1__KET____DOT__vx_alu__DOT__ALU_in2)
						  : 
						 (((vlTOPp->Vortex__DOT__vx_d_e_reg__DOT__d_e_reg__DOT__value[0xbU] 
						    << 0x12U) 
						   | (vlTOPp->Vortex__DOT__vx_d_e_reg__DOT__d_e_reg__DOT__value[0xaU] 
						      >> 0xeU)) 
						  + vlTOPp->Vortex__DOT__vx_execute__DOT__genblk1__BRA__1__KET____DOT__vx_alu__DOT__ALU_in2))))));
    // ALWAYS at VX_alu.v:48
    vlTOPp->Vortex__DOT__vx_execute__DOT____Vcellout__genblk1__BRA__2__KET____DOT__vx_alu__out_alu_result 
	= ((0x2000U & vlTOPp->Vortex__DOT__vx_d_e_reg__DOT__d_e_reg__DOT__value[5U])
	    ? ((0x1000U & vlTOPp->Vortex__DOT__vx_d_e_reg__DOT__d_e_reg__DOT__value[5U])
	        ? 0U : ((0x800U & vlTOPp->Vortex__DOT__vx_d_e_reg__DOT__d_e_reg__DOT__value[5U])
			 ? ((0x400U & vlTOPp->Vortex__DOT__vx_d_e_reg__DOT__d_e_reg__DOT__value[5U])
			     ? ((0x200U & vlTOPp->Vortex__DOT__vx_d_e_reg__DOT__d_e_reg__DOT__value[5U])
				 ? ((0U == vlTOPp->Vortex__DOT__vx_execute__DOT__genblk1__BRA__2__KET____DOT__vx_alu__DOT__ALU_in2)
				     ? ((vlTOPp->Vortex__DOT__vx_d_e_reg__DOT__d_e_reg__DOT__value[0xcU] 
					 << 0x12U) 
					| (vlTOPp->Vortex__DOT__vx_d_e_reg__DOT__d_e_reg__DOT__value[0xbU] 
					   >> 0xeU))
				     : VL_MODDIV_III(32, 
						     ((vlTOPp->Vortex__DOT__vx_d_e_reg__DOT__d_e_reg__DOT__value[0xcU] 
						       << 0x12U) 
						      | (vlTOPp->Vortex__DOT__vx_d_e_reg__DOT__d_e_reg__DOT__value[0xbU] 
							 >> 0xeU)), vlTOPp->Vortex__DOT__vx_execute__DOT__genblk1__BRA__2__KET____DOT__vx_alu__DOT__ALU_in2))
				 : ((0U == vlTOPp->Vortex__DOT__vx_execute__DOT__genblk1__BRA__2__KET____DOT__vx_alu__DOT__ALU_in2)
				     ? ((vlTOPp->Vortex__DOT__vx_d_e_reg__DOT__d_e_reg__DOT__value[0xcU] 
					 << 0x12U) 
					| (vlTOPp->Vortex__DOT__vx_d_e_reg__DOT__d_e_reg__DOT__value[0xbU] 
					   >> 0xeU))
				     : VL_MODDIVS_III(32, 
						      ((vlTOPp->Vortex__DOT__vx_d_e_reg__DOT__d_e_reg__DOT__value[0xcU] 
							<< 0x12U) 
						       | (vlTOPp->Vortex__DOT__vx_d_e_reg__DOT__d_e_reg__DOT__value[0xbU] 
							  >> 0xeU)), vlTOPp->Vortex__DOT__vx_execute__DOT__genblk1__BRA__2__KET____DOT__vx_alu__DOT__ALU_in2)))
			     : ((0x200U & vlTOPp->Vortex__DOT__vx_d_e_reg__DOT__d_e_reg__DOT__value[5U])
				 ? ((0U == vlTOPp->Vortex__DOT__vx_execute__DOT__genblk1__BRA__2__KET____DOT__vx_alu__DOT__ALU_in2)
				     ? 0xffffffffU : 
				    VL_DIV_III(32, 
					       ((vlTOPp->Vortex__DOT__vx_d_e_reg__DOT__d_e_reg__DOT__value[0xcU] 
						 << 0x12U) 
						| (vlTOPp->Vortex__DOT__vx_d_e_reg__DOT__d_e_reg__DOT__value[0xbU] 
						   >> 0xeU)), vlTOPp->Vortex__DOT__vx_execute__DOT__genblk1__BRA__2__KET____DOT__vx_alu__DOT__ALU_in2))
				 : ((0U == vlTOPp->Vortex__DOT__vx_execute__DOT__genblk1__BRA__2__KET____DOT__vx_alu__DOT__ALU_in2)
				     ? 0xffffffffU : 
				    VL_DIVS_III(32, 
						((vlTOPp->Vortex__DOT__vx_d_e_reg__DOT__d_e_reg__DOT__value[0xcU] 
						  << 0x12U) 
						 | (vlTOPp->Vortex__DOT__vx_d_e_reg__DOT__d_e_reg__DOT__value[0xbU] 
						    >> 0xeU)), vlTOPp->Vortex__DOT__vx_execute__DOT__genblk1__BRA__2__KET____DOT__vx_alu__DOT__ALU_in2))))
			 : ((0x400U & vlTOPp->Vortex__DOT__vx_d_e_reg__DOT__d_e_reg__DOT__value[5U])
			     ? ((0x200U & vlTOPp->Vortex__DOT__vx_d_e_reg__DOT__d_e_reg__DOT__value[5U])
				 ? (IData)((((QData)((IData)(
							     ((vlTOPp->Vortex__DOT__vx_d_e_reg__DOT__d_e_reg__DOT__value[0xcU] 
							       << 0x12U) 
							      | (vlTOPp->Vortex__DOT__vx_d_e_reg__DOT__d_e_reg__DOT__value[0xbU] 
								 >> 0xeU)))) 
					     * (QData)((IData)(vlTOPp->Vortex__DOT__vx_execute__DOT__genblk1__BRA__2__KET____DOT__vx_alu__DOT__ALU_in2))) 
					    >> 0x20U))
				 : (IData)((((((QData)((IData)(
							       VL_NEGATE_I((IData)(
										(1U 
										& (vlTOPp->Vortex__DOT__vx_d_e_reg__DOT__d_e_reg__DOT__value[0xcU] 
										>> 0xdU)))))) 
					       << 0x20U) 
					      | (QData)((IData)(
								((vlTOPp->Vortex__DOT__vx_d_e_reg__DOT__d_e_reg__DOT__value[0xcU] 
								  << 0x12U) 
								 | (vlTOPp->Vortex__DOT__vx_d_e_reg__DOT__d_e_reg__DOT__value[0xbU] 
								    >> 0xeU))))) 
					     * (QData)((IData)(vlTOPp->Vortex__DOT__vx_execute__DOT__genblk1__BRA__2__KET____DOT__vx_alu__DOT__ALU_in2))) 
					    >> 0x20U)))
			     : ((0x200U & vlTOPp->Vortex__DOT__vx_d_e_reg__DOT__d_e_reg__DOT__value[5U])
				 ? (IData)((vlTOPp->Vortex__DOT__vx_execute__DOT__genblk1__BRA__2__KET____DOT__vx_alu__DOT__mult_signed_result 
					    >> 0x20U))
				 : (IData)(vlTOPp->Vortex__DOT__vx_execute__DOT__genblk1__BRA__2__KET____DOT__vx_alu__DOT__mult_signed_result)))))
	    : ((0x1000U & vlTOPp->Vortex__DOT__vx_d_e_reg__DOT__d_e_reg__DOT__value[5U])
	        ? ((0x800U & vlTOPp->Vortex__DOT__vx_d_e_reg__DOT__d_e_reg__DOT__value[5U])
		    ? ((0x400U & vlTOPp->Vortex__DOT__vx_d_e_reg__DOT__d_e_reg__DOT__value[5U])
		        ? vlTOPp->Vortex__DOT__csr_decode_csr_data
		        : ((0x200U & vlTOPp->Vortex__DOT__vx_d_e_reg__DOT__d_e_reg__DOT__value[5U])
			    ? vlTOPp->Vortex__DOT__csr_decode_csr_data
			    : (((vlTOPp->Vortex__DOT__vx_d_e_reg__DOT__d_e_reg__DOT__value[3U] 
				 << 0x17U) | (vlTOPp->Vortex__DOT__vx_d_e_reg__DOT__d_e_reg__DOT__value[2U] 
					      >> 9U)) 
			       + (0xfffff000U & (vlTOPp->Vortex__DOT__vx_d_e_reg__DOT__d_e_reg__DOT__value[3U] 
						 << 3U)))))
		    : ((0x400U & vlTOPp->Vortex__DOT__vx_d_e_reg__DOT__d_e_reg__DOT__value[5U])
		        ? ((0x200U & vlTOPp->Vortex__DOT__vx_d_e_reg__DOT__d_e_reg__DOT__value[5U])
			    ? (0xfffff000U & (vlTOPp->Vortex__DOT__vx_d_e_reg__DOT__d_e_reg__DOT__value[3U] 
					      << 3U))
			    : ((((vlTOPp->Vortex__DOT__vx_d_e_reg__DOT__d_e_reg__DOT__value[0xcU] 
				  << 0x12U) | (vlTOPp->Vortex__DOT__vx_d_e_reg__DOT__d_e_reg__DOT__value[0xbU] 
					       >> 0xeU)) 
				>= vlTOPp->Vortex__DOT__vx_execute__DOT__genblk1__BRA__2__KET____DOT__vx_alu__DOT__ALU_in2)
			        ? 0U : 0xffffffffU))
		        : ((0x200U & vlTOPp->Vortex__DOT__vx_d_e_reg__DOT__d_e_reg__DOT__value[5U])
			    ? (vlTOPp->Vortex__DOT__vx_execute__DOT__genblk1__BRA__2__KET____DOT__vx_alu__DOT__ALU_in2 
			       & ((vlTOPp->Vortex__DOT__vx_d_e_reg__DOT__d_e_reg__DOT__value[0xcU] 
				   << 0x12U) | (vlTOPp->Vortex__DOT__vx_d_e_reg__DOT__d_e_reg__DOT__value[0xbU] 
						>> 0xeU)))
			    : (((vlTOPp->Vortex__DOT__vx_d_e_reg__DOT__d_e_reg__DOT__value[0xcU] 
				 << 0x12U) | (vlTOPp->Vortex__DOT__vx_d_e_reg__DOT__d_e_reg__DOT__value[0xbU] 
					      >> 0xeU)) 
			       | vlTOPp->Vortex__DOT__vx_execute__DOT__genblk1__BRA__2__KET____DOT__vx_alu__DOT__ALU_in2))))
	        : ((0x800U & vlTOPp->Vortex__DOT__vx_d_e_reg__DOT__d_e_reg__DOT__value[5U])
		    ? ((0x400U & vlTOPp->Vortex__DOT__vx_d_e_reg__DOT__d_e_reg__DOT__value[5U])
		        ? ((0x200U & vlTOPp->Vortex__DOT__vx_d_e_reg__DOT__d_e_reg__DOT__value[5U])
			    ? VL_SHIFTRS_III(32,32,5, 
					     ((vlTOPp->Vortex__DOT__vx_d_e_reg__DOT__d_e_reg__DOT__value[0xcU] 
					       << 0x12U) 
					      | (vlTOPp->Vortex__DOT__vx_d_e_reg__DOT__d_e_reg__DOT__value[0xbU] 
						 >> 0xeU)), 
					     (0x1fU 
					      & vlTOPp->Vortex__DOT__vx_execute__DOT__genblk1__BRA__2__KET____DOT__vx_alu__DOT__ALU_in2))
			    : (((vlTOPp->Vortex__DOT__vx_d_e_reg__DOT__d_e_reg__DOT__value[0xcU] 
				 << 0x12U) | (vlTOPp->Vortex__DOT__vx_d_e_reg__DOT__d_e_reg__DOT__value[0xbU] 
					      >> 0xeU)) 
			       >> (0x1fU & vlTOPp->Vortex__DOT__vx_execute__DOT__genblk1__BRA__2__KET____DOT__vx_alu__DOT__ALU_in2)))
		        : ((0x200U & vlTOPp->Vortex__DOT__vx_d_e_reg__DOT__d_e_reg__DOT__value[5U])
			    ? (((vlTOPp->Vortex__DOT__vx_d_e_reg__DOT__d_e_reg__DOT__value[0xcU] 
				 << 0x12U) | (vlTOPp->Vortex__DOT__vx_d_e_reg__DOT__d_e_reg__DOT__value[0xbU] 
					      >> 0xeU)) 
			       ^ vlTOPp->Vortex__DOT__vx_execute__DOT__genblk1__BRA__2__KET____DOT__vx_alu__DOT__ALU_in2)
			    : ((((vlTOPp->Vortex__DOT__vx_d_e_reg__DOT__d_e_reg__DOT__value[0xcU] 
				  << 0x12U) | (vlTOPp->Vortex__DOT__vx_d_e_reg__DOT__d_e_reg__DOT__value[0xbU] 
					       >> 0xeU)) 
				< vlTOPp->Vortex__DOT__vx_execute__DOT__genblk1__BRA__2__KET____DOT__vx_alu__DOT__ALU_in2)
			        ? 1U : 0U))) : ((0x400U 
						 & vlTOPp->Vortex__DOT__vx_d_e_reg__DOT__d_e_reg__DOT__value[5U])
						 ? 
						((0x200U 
						  & vlTOPp->Vortex__DOT__vx_d_e_reg__DOT__d_e_reg__DOT__value[5U])
						  ? 
						 (VL_LTS_III(1,32,32, 
							     ((vlTOPp->Vortex__DOT__vx_d_e_reg__DOT__d_e_reg__DOT__value[0xcU] 
							       << 0x12U) 
							      | (vlTOPp->Vortex__DOT__vx_d_e_reg__DOT__d_e_reg__DOT__value[0xbU] 
								 >> 0xeU)), vlTOPp->Vortex__DOT__vx_execute__DOT__genblk1__BRA__2__KET____DOT__vx_alu__DOT__ALU_in2)
						   ? 1U
						   : 0U)
						  : 
						 (((vlTOPp->Vortex__DOT__vx_d_e_reg__DOT__d_e_reg__DOT__value[0xcU] 
						    << 0x12U) 
						   | (vlTOPp->Vortex__DOT__vx_d_e_reg__DOT__d_e_reg__DOT__value[0xbU] 
						      >> 0xeU)) 
						  << 
						  (0x1fU 
						   & vlTOPp->Vortex__DOT__vx_execute__DOT__genblk1__BRA__2__KET____DOT__vx_alu__DOT__ALU_in2)))
						 : 
						((0x200U 
						  & vlTOPp->Vortex__DOT__vx_d_e_reg__DOT__d_e_reg__DOT__value[5U])
						  ? 
						 (((vlTOPp->Vortex__DOT__vx_d_e_reg__DOT__d_e_reg__DOT__value[0xcU] 
						    << 0x12U) 
						   | (vlTOPp->Vortex__DOT__vx_d_e_reg__DOT__d_e_reg__DOT__value[0xbU] 
						      >> 0xeU)) 
						  - vlTOPp->Vortex__DOT__vx_execute__DOT__genblk1__BRA__2__KET____DOT__vx_alu__DOT__ALU_in2)
						  : 
						 (((vlTOPp->Vortex__DOT__vx_d_e_reg__DOT__d_e_reg__DOT__value[0xcU] 
						    << 0x12U) 
						   | (vlTOPp->Vortex__DOT__vx_d_e_reg__DOT__d_e_reg__DOT__value[0xbU] 
						      >> 0xeU)) 
						  + vlTOPp->Vortex__DOT__vx_execute__DOT__genblk1__BRA__2__KET____DOT__vx_alu__DOT__ALU_in2))))));
    // ALWAYS at VX_alu.v:48
    vlTOPp->Vortex__DOT__vx_execute__DOT____Vcellout__genblk1__BRA__3__KET____DOT__vx_alu__out_alu_result 
	= ((0x2000U & vlTOPp->Vortex__DOT__vx_d_e_reg__DOT__d_e_reg__DOT__value[5U])
	    ? ((0x1000U & vlTOPp->Vortex__DOT__vx_d_e_reg__DOT__d_e_reg__DOT__value[5U])
	        ? 0U : ((0x800U & vlTOPp->Vortex__DOT__vx_d_e_reg__DOT__d_e_reg__DOT__value[5U])
			 ? ((0x400U & vlTOPp->Vortex__DOT__vx_d_e_reg__DOT__d_e_reg__DOT__value[5U])
			     ? ((0x200U & vlTOPp->Vortex__DOT__vx_d_e_reg__DOT__d_e_reg__DOT__value[5U])
				 ? ((0U == vlTOPp->Vortex__DOT__vx_execute__DOT__genblk1__BRA__3__KET____DOT__vx_alu__DOT__ALU_in2)
				     ? ((vlTOPp->Vortex__DOT__vx_d_e_reg__DOT__d_e_reg__DOT__value[0xdU] 
					 << 0x12U) 
					| (vlTOPp->Vortex__DOT__vx_d_e_reg__DOT__d_e_reg__DOT__value[0xcU] 
					   >> 0xeU))
				     : VL_MODDIV_III(32, 
						     ((vlTOPp->Vortex__DOT__vx_d_e_reg__DOT__d_e_reg__DOT__value[0xdU] 
						       << 0x12U) 
						      | (vlTOPp->Vortex__DOT__vx_d_e_reg__DOT__d_e_reg__DOT__value[0xcU] 
							 >> 0xeU)), vlTOPp->Vortex__DOT__vx_execute__DOT__genblk1__BRA__3__KET____DOT__vx_alu__DOT__ALU_in2))
				 : ((0U == vlTOPp->Vortex__DOT__vx_execute__DOT__genblk1__BRA__3__KET____DOT__vx_alu__DOT__ALU_in2)
				     ? ((vlTOPp->Vortex__DOT__vx_d_e_reg__DOT__d_e_reg__DOT__value[0xdU] 
					 << 0x12U) 
					| (vlTOPp->Vortex__DOT__vx_d_e_reg__DOT__d_e_reg__DOT__value[0xcU] 
					   >> 0xeU))
				     : VL_MODDIVS_III(32, 
						      ((vlTOPp->Vortex__DOT__vx_d_e_reg__DOT__d_e_reg__DOT__value[0xdU] 
							<< 0x12U) 
						       | (vlTOPp->Vortex__DOT__vx_d_e_reg__DOT__d_e_reg__DOT__value[0xcU] 
							  >> 0xeU)), vlTOPp->Vortex__DOT__vx_execute__DOT__genblk1__BRA__3__KET____DOT__vx_alu__DOT__ALU_in2)))
			     : ((0x200U & vlTOPp->Vortex__DOT__vx_d_e_reg__DOT__d_e_reg__DOT__value[5U])
				 ? ((0U == vlTOPp->Vortex__DOT__vx_execute__DOT__genblk1__BRA__3__KET____DOT__vx_alu__DOT__ALU_in2)
				     ? 0xffffffffU : 
				    VL_DIV_III(32, 
					       ((vlTOPp->Vortex__DOT__vx_d_e_reg__DOT__d_e_reg__DOT__value[0xdU] 
						 << 0x12U) 
						| (vlTOPp->Vortex__DOT__vx_d_e_reg__DOT__d_e_reg__DOT__value[0xcU] 
						   >> 0xeU)), vlTOPp->Vortex__DOT__vx_execute__DOT__genblk1__BRA__3__KET____DOT__vx_alu__DOT__ALU_in2))
				 : ((0U == vlTOPp->Vortex__DOT__vx_execute__DOT__genblk1__BRA__3__KET____DOT__vx_alu__DOT__ALU_in2)
				     ? 0xffffffffU : 
				    VL_DIVS_III(32, 
						((vlTOPp->Vortex__DOT__vx_d_e_reg__DOT__d_e_reg__DOT__value[0xdU] 
						  << 0x12U) 
						 | (vlTOPp->Vortex__DOT__vx_d_e_reg__DOT__d_e_reg__DOT__value[0xcU] 
						    >> 0xeU)), vlTOPp->Vortex__DOT__vx_execute__DOT__genblk1__BRA__3__KET____DOT__vx_alu__DOT__ALU_in2))))
			 : ((0x400U & vlTOPp->Vortex__DOT__vx_d_e_reg__DOT__d_e_reg__DOT__value[5U])
			     ? ((0x200U & vlTOPp->Vortex__DOT__vx_d_e_reg__DOT__d_e_reg__DOT__value[5U])
				 ? (IData)((((QData)((IData)(
							     ((vlTOPp->Vortex__DOT__vx_d_e_reg__DOT__d_e_reg__DOT__value[0xdU] 
							       << 0x12U) 
							      | (vlTOPp->Vortex__DOT__vx_d_e_reg__DOT__d_e_reg__DOT__value[0xcU] 
								 >> 0xeU)))) 
					     * (QData)((IData)(vlTOPp->Vortex__DOT__vx_execute__DOT__genblk1__BRA__3__KET____DOT__vx_alu__DOT__ALU_in2))) 
					    >> 0x20U))
				 : (IData)((((((QData)((IData)(
							       VL_NEGATE_I((IData)(
										(1U 
										& (vlTOPp->Vortex__DOT__vx_d_e_reg__DOT__d_e_reg__DOT__value[0xdU] 
										>> 0xdU)))))) 
					       << 0x20U) 
					      | (QData)((IData)(
								((vlTOPp->Vortex__DOT__vx_d_e_reg__DOT__d_e_reg__DOT__value[0xdU] 
								  << 0x12U) 
								 | (vlTOPp->Vortex__DOT__vx_d_e_reg__DOT__d_e_reg__DOT__value[0xcU] 
								    >> 0xeU))))) 
					     * (QData)((IData)(vlTOPp->Vortex__DOT__vx_execute__DOT__genblk1__BRA__3__KET____DOT__vx_alu__DOT__ALU_in2))) 
					    >> 0x20U)))
			     : ((0x200U & vlTOPp->Vortex__DOT__vx_d_e_reg__DOT__d_e_reg__DOT__value[5U])
				 ? (IData)((vlTOPp->Vortex__DOT__vx_execute__DOT__genblk1__BRA__3__KET____DOT__vx_alu__DOT__mult_signed_result 
					    >> 0x20U))
				 : (IData)(vlTOPp->Vortex__DOT__vx_execute__DOT__genblk1__BRA__3__KET____DOT__vx_alu__DOT__mult_signed_result)))))
	    : ((0x1000U & vlTOPp->Vortex__DOT__vx_d_e_reg__DOT__d_e_reg__DOT__value[5U])
	        ? ((0x800U & vlTOPp->Vortex__DOT__vx_d_e_reg__DOT__d_e_reg__DOT__value[5U])
		    ? ((0x400U & vlTOPp->Vortex__DOT__vx_d_e_reg__DOT__d_e_reg__DOT__value[5U])
		        ? vlTOPp->Vortex__DOT__csr_decode_csr_data
		        : ((0x200U & vlTOPp->Vortex__DOT__vx_d_e_reg__DOT__d_e_reg__DOT__value[5U])
			    ? vlTOPp->Vortex__DOT__csr_decode_csr_data
			    : (((vlTOPp->Vortex__DOT__vx_d_e_reg__DOT__d_e_reg__DOT__value[3U] 
				 << 0x17U) | (vlTOPp->Vortex__DOT__vx_d_e_reg__DOT__d_e_reg__DOT__value[2U] 
					      >> 9U)) 
			       + (0xfffff000U & (vlTOPp->Vortex__DOT__vx_d_e_reg__DOT__d_e_reg__DOT__value[3U] 
						 << 3U)))))
		    : ((0x400U & vlTOPp->Vortex__DOT__vx_d_e_reg__DOT__d_e_reg__DOT__value[5U])
		        ? ((0x200U & vlTOPp->Vortex__DOT__vx_d_e_reg__DOT__d_e_reg__DOT__value[5U])
			    ? (0xfffff000U & (vlTOPp->Vortex__DOT__vx_d_e_reg__DOT__d_e_reg__DOT__value[3U] 
					      << 3U))
			    : ((((vlTOPp->Vortex__DOT__vx_d_e_reg__DOT__d_e_reg__DOT__value[0xdU] 
				  << 0x12U) | (vlTOPp->Vortex__DOT__vx_d_e_reg__DOT__d_e_reg__DOT__value[0xcU] 
					       >> 0xeU)) 
				>= vlTOPp->Vortex__DOT__vx_execute__DOT__genblk1__BRA__3__KET____DOT__vx_alu__DOT__ALU_in2)
			        ? 0U : 0xffffffffU))
		        : ((0x200U & vlTOPp->Vortex__DOT__vx_d_e_reg__DOT__d_e_reg__DOT__value[5U])
			    ? (vlTOPp->Vortex__DOT__vx_execute__DOT__genblk1__BRA__3__KET____DOT__vx_alu__DOT__ALU_in2 
			       & ((vlTOPp->Vortex__DOT__vx_d_e_reg__DOT__d_e_reg__DOT__value[0xdU] 
				   << 0x12U) | (vlTOPp->Vortex__DOT__vx_d_e_reg__DOT__d_e_reg__DOT__value[0xcU] 
						>> 0xeU)))
			    : (((vlTOPp->Vortex__DOT__vx_d_e_reg__DOT__d_e_reg__DOT__value[0xdU] 
				 << 0x12U) | (vlTOPp->Vortex__DOT__vx_d_e_reg__DOT__d_e_reg__DOT__value[0xcU] 
					      >> 0xeU)) 
			       | vlTOPp->Vortex__DOT__vx_execute__DOT__genblk1__BRA__3__KET____DOT__vx_alu__DOT__ALU_in2))))
	        : ((0x800U & vlTOPp->Vortex__DOT__vx_d_e_reg__DOT__d_e_reg__DOT__value[5U])
		    ? ((0x400U & vlTOPp->Vortex__DOT__vx_d_e_reg__DOT__d_e_reg__DOT__value[5U])
		        ? ((0x200U & vlTOPp->Vortex__DOT__vx_d_e_reg__DOT__d_e_reg__DOT__value[5U])
			    ? VL_SHIFTRS_III(32,32,5, 
					     ((vlTOPp->Vortex__DOT__vx_d_e_reg__DOT__d_e_reg__DOT__value[0xdU] 
					       << 0x12U) 
					      | (vlTOPp->Vortex__DOT__vx_d_e_reg__DOT__d_e_reg__DOT__value[0xcU] 
						 >> 0xeU)), 
					     (0x1fU 
					      & vlTOPp->Vortex__DOT__vx_execute__DOT__genblk1__BRA__3__KET____DOT__vx_alu__DOT__ALU_in2))
			    : (((vlTOPp->Vortex__DOT__vx_d_e_reg__DOT__d_e_reg__DOT__value[0xdU] 
				 << 0x12U) | (vlTOPp->Vortex__DOT__vx_d_e_reg__DOT__d_e_reg__DOT__value[0xcU] 
					      >> 0xeU)) 
			       >> (0x1fU & vlTOPp->Vortex__DOT__vx_execute__DOT__genblk1__BRA__3__KET____DOT__vx_alu__DOT__ALU_in2)))
		        : ((0x200U & vlTOPp->Vortex__DOT__vx_d_e_reg__DOT__d_e_reg__DOT__value[5U])
			    ? (((vlTOPp->Vortex__DOT__vx_d_e_reg__DOT__d_e_reg__DOT__value[0xdU] 
				 << 0x12U) | (vlTOPp->Vortex__DOT__vx_d_e_reg__DOT__d_e_reg__DOT__value[0xcU] 
					      >> 0xeU)) 
			       ^ vlTOPp->Vortex__DOT__vx_execute__DOT__genblk1__BRA__3__KET____DOT__vx_alu__DOT__ALU_in2)
			    : ((((vlTOPp->Vortex__DOT__vx_d_e_reg__DOT__d_e_reg__DOT__value[0xdU] 
				  << 0x12U) | (vlTOPp->Vortex__DOT__vx_d_e_reg__DOT__d_e_reg__DOT__value[0xcU] 
					       >> 0xeU)) 
				< vlTOPp->Vortex__DOT__vx_execute__DOT__genblk1__BRA__3__KET____DOT__vx_alu__DOT__ALU_in2)
			        ? 1U : 0U))) : ((0x400U 
						 & vlTOPp->Vortex__DOT__vx_d_e_reg__DOT__d_e_reg__DOT__value[5U])
						 ? 
						((0x200U 
						  & vlTOPp->Vortex__DOT__vx_d_e_reg__DOT__d_e_reg__DOT__value[5U])
						  ? 
						 (VL_LTS_III(1,32,32, 
							     ((vlTOPp->Vortex__DOT__vx_d_e_reg__DOT__d_e_reg__DOT__value[0xdU] 
							       << 0x12U) 
							      | (vlTOPp->Vortex__DOT__vx_d_e_reg__DOT__d_e_reg__DOT__value[0xcU] 
								 >> 0xeU)), vlTOPp->Vortex__DOT__vx_execute__DOT__genblk1__BRA__3__KET____DOT__vx_alu__DOT__ALU_in2)
						   ? 1U
						   : 0U)
						  : 
						 (((vlTOPp->Vortex__DOT__vx_d_e_reg__DOT__d_e_reg__DOT__value[0xdU] 
						    << 0x12U) 
						   | (vlTOPp->Vortex__DOT__vx_d_e_reg__DOT__d_e_reg__DOT__value[0xcU] 
						      >> 0xeU)) 
						  << 
						  (0x1fU 
						   & vlTOPp->Vortex__DOT__vx_execute__DOT__genblk1__BRA__3__KET____DOT__vx_alu__DOT__ALU_in2)))
						 : 
						((0x200U 
						  & vlTOPp->Vortex__DOT__vx_d_e_reg__DOT__d_e_reg__DOT__value[5U])
						  ? 
						 (((vlTOPp->Vortex__DOT__vx_d_e_reg__DOT__d_e_reg__DOT__value[0xdU] 
						    << 0x12U) 
						   | (vlTOPp->Vortex__DOT__vx_d_e_reg__DOT__d_e_reg__DOT__value[0xcU] 
						      >> 0xeU)) 
						  - vlTOPp->Vortex__DOT__vx_execute__DOT__genblk1__BRA__3__KET____DOT__vx_alu__DOT__ALU_in2)
						  : 
						 (((vlTOPp->Vortex__DOT__vx_d_e_reg__DOT__d_e_reg__DOT__value[0xdU] 
						    << 0x12U) 
						   | (vlTOPp->Vortex__DOT__vx_d_e_reg__DOT__d_e_reg__DOT__value[0xcU] 
						      >> 0xeU)) 
						  + vlTOPp->Vortex__DOT__vx_execute__DOT__genblk1__BRA__3__KET____DOT__vx_alu__DOT__ALU_in2))))));
    vlSymsp->TOP__Vortex__DOT__VX_exe_mem_req.alu_result[0U] 
	= vlTOPp->Vortex__DOT__vx_execute__DOT____Vcellout__genblk1__BRA__0__KET____DOT__vx_alu__out_alu_result;
    vlSymsp->TOP__Vortex__DOT__VX_exe_mem_req.alu_result[1U] 
	= vlTOPp->Vortex__DOT__vx_execute__DOT____Vcellout__genblk1__BRA__1__KET____DOT__vx_alu__out_alu_result;
    vlSymsp->TOP__Vortex__DOT__VX_exe_mem_req.alu_result[2U] 
	= vlTOPp->Vortex__DOT__vx_execute__DOT____Vcellout__genblk1__BRA__2__KET____DOT__vx_alu__out_alu_result;
    vlSymsp->TOP__Vortex__DOT__VX_exe_mem_req.alu_result[3U] 
	= vlTOPp->Vortex__DOT__vx_execute__DOT____Vcellout__genblk1__BRA__3__KET____DOT__vx_alu__out_alu_result;
    // ALWAYS at VX_generic_register.v:20
    __Vtemp99[0U] = (IData)((((QData)((IData)((0x1fU 
					       & ((vlTOPp->Vortex__DOT__vx_e_m_reg__DOT__f_d_reg__DOT__value[8U] 
						   << 9U) 
						  | (vlTOPp->Vortex__DOT__vx_e_m_reg__DOT__f_d_reg__DOT__value[7U] 
						     >> 0x17U))))) 
			      << 0x34U) | (((QData)((IData)(
							    (3U 
							     & ((vlTOPp->Vortex__DOT__vx_e_m_reg__DOT__f_d_reg__DOT__value[8U] 
								 << 0xbU) 
								| (vlTOPp->Vortex__DOT__vx_e_m_reg__DOT__f_d_reg__DOT__value[7U] 
								   >> 0x15U))))) 
					    << 0x32U) 
					   | (((QData)((IData)(
							       (0x1fU 
								& ((vlTOPp->Vortex__DOT__vx_e_m_reg__DOT__f_d_reg__DOT__value[8U] 
								    << 0x10U) 
								   | (vlTOPp->Vortex__DOT__vx_e_m_reg__DOT__f_d_reg__DOT__value[7U] 
								      >> 0x10U))))) 
					       << 0x2dU) 
					      | (((QData)((IData)(
								  (0x1fU 
								   & ((vlTOPp->Vortex__DOT__vx_e_m_reg__DOT__f_d_reg__DOT__value[8U] 
								       << 0x15U) 
								      | (vlTOPp->Vortex__DOT__vx_e_m_reg__DOT__f_d_reg__DOT__value[7U] 
									 >> 0xbU))))) 
						  << 0x28U) 
						 | (((QData)((IData)(
								     ((vlTOPp->Vortex__DOT__vx_e_m_reg__DOT__f_d_reg__DOT__value[3U] 
								       << 0x15U) 
								      | (vlTOPp->Vortex__DOT__vx_e_m_reg__DOT__f_d_reg__DOT__value[2U] 
									 >> 0xbU)))) 
						     << 8U) 
						    | (QData)((IData)(
								      (0xffU 
								       & vlTOPp->Vortex__DOT__vx_e_m_reg__DOT__f_d_reg__DOT__value[0U])))))))));
    __Vtemp99[1U] = ((0xfe000000U & (vlSymsp->TOP__Vortex__DOT__VX_mem_wb.mem_result[0U] 
				     << 0x19U)) | (IData)(
							  ((((QData)((IData)(
									     (0x1fU 
									      & ((vlTOPp->Vortex__DOT__vx_e_m_reg__DOT__f_d_reg__DOT__value[8U] 
										<< 9U) 
										| (vlTOPp->Vortex__DOT__vx_e_m_reg__DOT__f_d_reg__DOT__value[7U] 
										>> 0x17U))))) 
							     << 0x34U) 
							    | (((QData)((IData)(
										(3U 
										& ((vlTOPp->Vortex__DOT__vx_e_m_reg__DOT__f_d_reg__DOT__value[8U] 
										<< 0xbU) 
										| (vlTOPp->Vortex__DOT__vx_e_m_reg__DOT__f_d_reg__DOT__value[7U] 
										>> 0x15U))))) 
								<< 0x32U) 
							       | (((QData)((IData)(
										(0x1fU 
										& ((vlTOPp->Vortex__DOT__vx_e_m_reg__DOT__f_d_reg__DOT__value[8U] 
										<< 0x10U) 
										| (vlTOPp->Vortex__DOT__vx_e_m_reg__DOT__f_d_reg__DOT__value[7U] 
										>> 0x10U))))) 
								   << 0x2dU) 
								  | (((QData)((IData)(
										(0x1fU 
										& ((vlTOPp->Vortex__DOT__vx_e_m_reg__DOT__f_d_reg__DOT__value[8U] 
										<< 0x15U) 
										| (vlTOPp->Vortex__DOT__vx_e_m_reg__DOT__f_d_reg__DOT__value[7U] 
										>> 0xbU))))) 
								      << 0x28U) 
								     | (((QData)((IData)(
										((vlTOPp->Vortex__DOT__vx_e_m_reg__DOT__f_d_reg__DOT__value[3U] 
										<< 0x15U) 
										| (vlTOPp->Vortex__DOT__vx_e_m_reg__DOT__f_d_reg__DOT__value[2U] 
										>> 0xbU)))) 
									 << 8U) 
									| (QData)((IData)(
										(0xffU 
										& vlTOPp->Vortex__DOT__vx_e_m_reg__DOT__f_d_reg__DOT__value[0U])))))))) 
							   >> 0x20U)));
    vlTOPp->Vortex__DOT__vx_m_w_reg__DOT__m_w_reg__DOT__value[0U] 
	= ((IData)(vlTOPp->reset) ? 0U : __Vtemp99[0U]);
    vlTOPp->Vortex__DOT__vx_m_w_reg__DOT__m_w_reg__DOT__value[1U] 
	= ((IData)(vlTOPp->reset) ? 0U : __Vtemp99[1U]);
    vlTOPp->Vortex__DOT__vx_m_w_reg__DOT__m_w_reg__DOT__value[2U] 
	= ((IData)(vlTOPp->reset) ? 0U : ((0x1ffffffU 
					   & (vlSymsp->TOP__Vortex__DOT__VX_mem_wb.mem_result[0U] 
					      >> 7U)) 
					  | (0xfe000000U 
					     & (vlSymsp->TOP__Vortex__DOT__VX_mem_wb.mem_result[1U] 
						<< 0x19U))));
    vlTOPp->Vortex__DOT__vx_m_w_reg__DOT__m_w_reg__DOT__value[3U] 
	= ((IData)(vlTOPp->reset) ? 0U : ((0x1ffffffU 
					   & (vlSymsp->TOP__Vortex__DOT__VX_mem_wb.mem_result[1U] 
					      >> 7U)) 
					  | (0xfe000000U 
					     & (vlSymsp->TOP__Vortex__DOT__VX_mem_wb.mem_result[2U] 
						<< 0x19U))));
    vlTOPp->Vortex__DOT__vx_m_w_reg__DOT__m_w_reg__DOT__value[4U] 
	= ((IData)(vlTOPp->reset) ? 0U : ((0x1ffffffU 
					   & (vlSymsp->TOP__Vortex__DOT__VX_mem_wb.mem_result[2U] 
					      >> 7U)) 
					  | (0xfe000000U 
					     & (vlSymsp->TOP__Vortex__DOT__VX_mem_wb.mem_result[3U] 
						<< 0x19U))));
    vlTOPp->Vortex__DOT__vx_m_w_reg__DOT__m_w_reg__DOT__value[5U] 
	= ((IData)(vlTOPp->reset) ? 0U : ((0x1ffffffU 
					   & (vlSymsp->TOP__Vortex__DOT__VX_mem_wb.mem_result[3U] 
					      >> 7U)) 
					  | (0xfe000000U 
					     & (vlTOPp->Vortex__DOT__vx_e_m_reg__DOT__f_d_reg__DOT__value[8U] 
						<< 0x17U))));
    vlTOPp->Vortex__DOT__vx_m_w_reg__DOT__m_w_reg__DOT__value[6U] 
	= ((IData)(vlTOPp->reset) ? 0U : ((0x1ffffffU 
					   & ((0x1800000U 
					       & (vlTOPp->Vortex__DOT__vx_e_m_reg__DOT__f_d_reg__DOT__value[9U] 
						  << 0x17U)) 
					      | (vlTOPp->Vortex__DOT__vx_e_m_reg__DOT__f_d_reg__DOT__value[8U] 
						 >> 9U))) 
					  | (0xfe000000U 
					     & (vlTOPp->Vortex__DOT__vx_e_m_reg__DOT__f_d_reg__DOT__value[9U] 
						<< 0x17U))));
    vlTOPp->Vortex__DOT__vx_m_w_reg__DOT__m_w_reg__DOT__value[7U] 
	= ((IData)(vlTOPp->reset) ? 0U : ((0x1ffffffU 
					   & ((0x1800000U 
					       & (vlTOPp->Vortex__DOT__vx_e_m_reg__DOT__f_d_reg__DOT__value[0xaU] 
						  << 0x17U)) 
					      | (vlTOPp->Vortex__DOT__vx_e_m_reg__DOT__f_d_reg__DOT__value[9U] 
						 >> 9U))) 
					  | (0xfe000000U 
					     & (vlTOPp->Vortex__DOT__vx_e_m_reg__DOT__f_d_reg__DOT__value[0xaU] 
						<< 0x17U))));
    vlTOPp->Vortex__DOT__vx_m_w_reg__DOT__m_w_reg__DOT__value[8U] 
	= ((IData)(vlTOPp->reset) ? 0U : ((0x1ffffffU 
					   & ((0x1800000U 
					       & (vlTOPp->Vortex__DOT__vx_e_m_reg__DOT__f_d_reg__DOT__value[0xbU] 
						  << 0x17U)) 
					      | (vlTOPp->Vortex__DOT__vx_e_m_reg__DOT__f_d_reg__DOT__value[0xaU] 
						 >> 9U))) 
					  | (0xfe000000U 
					     & (vlTOPp->Vortex__DOT__vx_e_m_reg__DOT__f_d_reg__DOT__value[0xbU] 
						<< 0x17U))));
    vlTOPp->Vortex__DOT__vx_m_w_reg__DOT__m_w_reg__DOT__value[9U] 
	= ((IData)(vlTOPp->reset) ? 0U : (0x1ffffffU 
					  & ((0x1800000U 
					      & (vlTOPp->Vortex__DOT__vx_e_m_reg__DOT__f_d_reg__DOT__value[0xcU] 
						 << 0x17U)) 
					     | (vlTOPp->Vortex__DOT__vx_e_m_reg__DOT__f_d_reg__DOT__value[0xbU] 
						>> 9U))));
    // ALWAYS at VX_generic_register.v:20
    if (vlTOPp->reset) {
	vlTOPp->Vortex__DOT__vx_f_d_reg__DOT__f_d_reg__DOT__value[0U] = 0U;
	vlTOPp->Vortex__DOT__vx_f_d_reg__DOT__f_d_reg__DOT__value[1U] = 0U;
	vlTOPp->Vortex__DOT__vx_f_d_reg__DOT__f_d_reg__DOT__value[2U] = 0U;
    } else {
	if ((1U & (~ ((IData)(vlTOPp->Vortex__DOT__forwarding_fwd_stall) 
		      | (IData)(vlTOPp->Vortex__DOT__vx_decode__DOT__temp_out_clone_stall))))) {
	    vlTOPp->Vortex__DOT__vx_f_d_reg__DOT__f_d_reg__DOT__value[0U] 
		= ((0xffffff00U & ((IData)((((QData)((IData)(
							     ((IData)(vlTOPp->Vortex__DOT__vx_fetch__DOT__stall)
							       ? 0U
							       : vlTOPp->icache_response_instruction))) 
					     << 0x20U) 
					    | (QData)((IData)(vlTOPp->Vortex__DOT__vx_fetch__DOT__out_PC_var)))) 
				   << 8U)) | (((IData)(vlTOPp->Vortex__DOT__vx_fetch__DOT__warp_num) 
					       << 4U) 
					      | (IData)(vlSymsp->TOP__Vortex__DOT__fe_inst_meta_fd.valid)));
	    vlTOPp->Vortex__DOT__vx_f_d_reg__DOT__f_d_reg__DOT__value[1U] 
		= ((0xffU & ((IData)((((QData)((IData)(
						       ((IData)(vlTOPp->Vortex__DOT__vx_fetch__DOT__stall)
							 ? 0U
							 : vlTOPp->icache_response_instruction))) 
				       << 0x20U) | (QData)((IData)(vlTOPp->Vortex__DOT__vx_fetch__DOT__out_PC_var)))) 
			     >> 0x18U)) | (0xffffff00U 
					   & ((IData)(
						      ((((QData)((IData)(
									 ((IData)(vlTOPp->Vortex__DOT__vx_fetch__DOT__stall)
									   ? 0U
									   : vlTOPp->icache_response_instruction))) 
							 << 0x20U) 
							| (QData)((IData)(vlTOPp->Vortex__DOT__vx_fetch__DOT__out_PC_var))) 
						       >> 0x20U)) 
					      << 8U)));
	    vlTOPp->Vortex__DOT__vx_f_d_reg__DOT__f_d_reg__DOT__value[2U] 
		= (0xffU & ((IData)(((((QData)((IData)(
						       ((IData)(vlTOPp->Vortex__DOT__vx_fetch__DOT__stall)
							 ? 0U
							 : vlTOPp->icache_response_instruction))) 
				       << 0x20U) | (QData)((IData)(vlTOPp->Vortex__DOT__vx_fetch__DOT__out_PC_var))) 
				     >> 0x20U)) >> 0x18U));
	}
    }
    vlTOPp->Vortex__DOT__vx_fetch__DOT__warp_num = vlTOPp->__Vdly__Vortex__DOT__vx_fetch__DOT__warp_num;
    vlTOPp->Vortex__DOT__vx_writeback__DOT__out_pc_data[0U] 
	= ((vlTOPp->Vortex__DOT__vx_m_w_reg__DOT__m_w_reg__DOT__value[1U] 
	    << 0x18U) | (vlTOPp->Vortex__DOT__vx_m_w_reg__DOT__m_w_reg__DOT__value[0U] 
			 >> 8U));
    vlTOPp->Vortex__DOT__vx_writeback__DOT__out_pc_data[1U] 
	= ((vlTOPp->Vortex__DOT__vx_m_w_reg__DOT__m_w_reg__DOT__value[1U] 
	    << 0x18U) | (vlTOPp->Vortex__DOT__vx_m_w_reg__DOT__m_w_reg__DOT__value[0U] 
			 >> 8U));
    vlTOPp->Vortex__DOT__vx_writeback__DOT__out_pc_data[2U] 
	= ((vlTOPp->Vortex__DOT__vx_m_w_reg__DOT__m_w_reg__DOT__value[1U] 
	    << 0x18U) | (vlTOPp->Vortex__DOT__vx_m_w_reg__DOT__m_w_reg__DOT__value[0U] 
			 >> 8U));
    vlTOPp->Vortex__DOT__vx_writeback__DOT__out_pc_data[3U] 
	= ((vlTOPp->Vortex__DOT__vx_m_w_reg__DOT__m_w_reg__DOT__value[1U] 
	    << 0x18U) | (vlTOPp->Vortex__DOT__vx_m_w_reg__DOT__m_w_reg__DOT__value[0U] 
			 >> 8U));
    vlTOPp->Vortex__DOT__vx_forwarding__DOT__use_writeback_PC_next[0U] 
	= ((vlTOPp->Vortex__DOT__vx_m_w_reg__DOT__m_w_reg__DOT__value[1U] 
	    << 0x18U) | (vlTOPp->Vortex__DOT__vx_m_w_reg__DOT__m_w_reg__DOT__value[0U] 
			 >> 8U));
    vlTOPp->Vortex__DOT__vx_forwarding__DOT__use_writeback_PC_next[1U] 
	= ((vlTOPp->Vortex__DOT__vx_m_w_reg__DOT__m_w_reg__DOT__value[1U] 
	    << 0x18U) | (vlTOPp->Vortex__DOT__vx_m_w_reg__DOT__m_w_reg__DOT__value[0U] 
			 >> 8U));
    vlTOPp->Vortex__DOT__vx_forwarding__DOT__use_writeback_PC_next[2U] 
	= ((vlTOPp->Vortex__DOT__vx_m_w_reg__DOT__m_w_reg__DOT__value[1U] 
	    << 0x18U) | (vlTOPp->Vortex__DOT__vx_m_w_reg__DOT__m_w_reg__DOT__value[0U] 
			 >> 8U));
    vlTOPp->Vortex__DOT__vx_forwarding__DOT__use_writeback_PC_next[3U] 
	= ((vlTOPp->Vortex__DOT__vx_m_w_reg__DOT__m_w_reg__DOT__value[1U] 
	    << 0x18U) | (vlTOPp->Vortex__DOT__vx_m_w_reg__DOT__m_w_reg__DOT__value[0U] 
			 >> 8U));
    // ALWAYS at VX_generic_register.v:20
    vlTOPp->Vortex__DOT__vx_e_m_reg__DOT__f_d_reg__DOT__value[0U] 
	= ((IData)(vlTOPp->reset) ? 0U : vlTOPp->Vortex__DOT__vx_e_m_reg__DOT____Vcellinp__f_d_reg__in[0U]);
    vlTOPp->Vortex__DOT__vx_e_m_reg__DOT__f_d_reg__DOT__value[1U] 
	= ((IData)(vlTOPp->reset) ? 0U : vlTOPp->Vortex__DOT__vx_e_m_reg__DOT____Vcellinp__f_d_reg__in[1U]);
    vlTOPp->Vortex__DOT__vx_e_m_reg__DOT__f_d_reg__DOT__value[2U] 
	= ((IData)(vlTOPp->reset) ? 0U : vlTOPp->Vortex__DOT__vx_e_m_reg__DOT____Vcellinp__f_d_reg__in[2U]);
    vlTOPp->Vortex__DOT__vx_e_m_reg__DOT__f_d_reg__DOT__value[3U] 
	= ((IData)(vlTOPp->reset) ? 0U : vlTOPp->Vortex__DOT__vx_e_m_reg__DOT____Vcellinp__f_d_reg__in[3U]);
    vlTOPp->Vortex__DOT__vx_e_m_reg__DOT__f_d_reg__DOT__value[4U] 
	= ((IData)(vlTOPp->reset) ? 0U : vlTOPp->Vortex__DOT__vx_e_m_reg__DOT____Vcellinp__f_d_reg__in[4U]);
    vlTOPp->Vortex__DOT__vx_e_m_reg__DOT__f_d_reg__DOT__value[5U] 
	= ((IData)(vlTOPp->reset) ? 0U : vlTOPp->Vortex__DOT__vx_e_m_reg__DOT____Vcellinp__f_d_reg__in[5U]);
    vlTOPp->Vortex__DOT__vx_e_m_reg__DOT__f_d_reg__DOT__value[6U] 
	= ((IData)(vlTOPp->reset) ? 0U : vlTOPp->Vortex__DOT__vx_e_m_reg__DOT____Vcellinp__f_d_reg__in[6U]);
    vlTOPp->Vortex__DOT__vx_e_m_reg__DOT__f_d_reg__DOT__value[7U] 
	= ((IData)(vlTOPp->reset) ? 0U : vlTOPp->Vortex__DOT__vx_e_m_reg__DOT____Vcellinp__f_d_reg__in[7U]);
    vlTOPp->Vortex__DOT__vx_e_m_reg__DOT__f_d_reg__DOT__value[8U] 
	= ((IData)(vlTOPp->reset) ? 0U : vlTOPp->Vortex__DOT__vx_e_m_reg__DOT____Vcellinp__f_d_reg__in[8U]);
    vlTOPp->Vortex__DOT__vx_e_m_reg__DOT__f_d_reg__DOT__value[9U] 
	= ((IData)(vlTOPp->reset) ? 0U : vlTOPp->Vortex__DOT__vx_e_m_reg__DOT____Vcellinp__f_d_reg__in[9U]);
    vlTOPp->Vortex__DOT__vx_e_m_reg__DOT__f_d_reg__DOT__value[0xaU] 
	= ((IData)(vlTOPp->reset) ? 0U : vlTOPp->Vortex__DOT__vx_e_m_reg__DOT____Vcellinp__f_d_reg__in[0xaU]);
    vlTOPp->Vortex__DOT__vx_e_m_reg__DOT__f_d_reg__DOT__value[0xbU] 
	= ((IData)(vlTOPp->reset) ? 0U : vlTOPp->Vortex__DOT__vx_e_m_reg__DOT____Vcellinp__f_d_reg__in[0xbU]);
    vlTOPp->Vortex__DOT__vx_e_m_reg__DOT__f_d_reg__DOT__value[0xcU] 
	= ((IData)(vlTOPp->reset) ? 0U : vlTOPp->Vortex__DOT__vx_e_m_reg__DOT____Vcellinp__f_d_reg__in[0xcU]);
    vlTOPp->Vortex__DOT__vx_e_m_reg__DOT__f_d_reg__DOT__value[0xdU] 
	= ((IData)(vlTOPp->reset) ? 0U : vlTOPp->Vortex__DOT__vx_e_m_reg__DOT____Vcellinp__f_d_reg__in[0xdU]);
    vlTOPp->Vortex__DOT__vx_e_m_reg__DOT__f_d_reg__DOT__value[0xeU] 
	= ((IData)(vlTOPp->reset) ? 0U : vlTOPp->Vortex__DOT__vx_e_m_reg__DOT____Vcellinp__f_d_reg__in[0xeU]);
    vlTOPp->Vortex__DOT__vx_e_m_reg__DOT__f_d_reg__DOT__value[0xfU] 
	= ((IData)(vlTOPp->reset) ? 0U : vlTOPp->Vortex__DOT__vx_e_m_reg__DOT____Vcellinp__f_d_reg__in[0xfU]);
    vlTOPp->Vortex__DOT__vx_e_m_reg__DOT__f_d_reg__DOT__value[0x10U] 
	= ((IData)(vlTOPp->reset) ? 0U : vlTOPp->Vortex__DOT__vx_e_m_reg__DOT____Vcellinp__f_d_reg__in[0x10U]);
    vlTOPp->Vortex__DOT__vx_e_m_reg__DOT__f_d_reg__DOT__value[0x11U] 
	= ((IData)(vlTOPp->reset) ? 0U : vlTOPp->Vortex__DOT__vx_e_m_reg__DOT____Vcellinp__f_d_reg__in[0x11U]);
    vlTOPp->Vortex__DOT__vx_e_m_reg__DOT__f_d_reg__DOT__value[0x12U] 
	= ((IData)(vlTOPp->reset) ? 0U : vlTOPp->Vortex__DOT__vx_e_m_reg__DOT____Vcellinp__f_d_reg__in[0x12U]);
    vlTOPp->Vortex__DOT__vx_e_m_reg__DOT__f_d_reg__DOT__value[0x13U] 
	= ((IData)(vlTOPp->reset) ? 0U : vlTOPp->Vortex__DOT__vx_e_m_reg__DOT____Vcellinp__f_d_reg__in[0x13U]);
    vlTOPp->Vortex__DOT__vx_e_m_reg__DOT__f_d_reg__DOT__value[0x14U] 
	= ((IData)(vlTOPp->reset) ? 0U : vlTOPp->Vortex__DOT__vx_e_m_reg__DOT____Vcellinp__f_d_reg__in[0x14U]);
    vlTOPp->Vortex__DOT__vx_e_m_reg__DOT__f_d_reg__DOT__value[0x15U] 
	= ((IData)(vlTOPp->reset) ? 0U : vlTOPp->Vortex__DOT__vx_e_m_reg__DOT____Vcellinp__f_d_reg__in[0x15U]);
    vlTOPp->Vortex__DOT__vx_e_m_reg__DOT__f_d_reg__DOT__value[0x16U] 
	= ((IData)(vlTOPp->reset) ? 0U : vlTOPp->Vortex__DOT__vx_e_m_reg__DOT____Vcellinp__f_d_reg__in[0x16U]);
    vlTOPp->Vortex__DOT__vx_decode__DOT__is_itype = 
	((0x13U == (0x7fU & ((vlTOPp->Vortex__DOT__vx_f_d_reg__DOT__f_d_reg__DOT__value[2U] 
			      << 0x18U) | (vlTOPp->Vortex__DOT__vx_f_d_reg__DOT__f_d_reg__DOT__value[1U] 
					   >> 8U)))) 
	 | (3U == (0x7fU & ((vlTOPp->Vortex__DOT__vx_f_d_reg__DOT__f_d_reg__DOT__value[2U] 
			     << 0x18U) | (vlTOPp->Vortex__DOT__vx_f_d_reg__DOT__f_d_reg__DOT__value[1U] 
					  >> 8U)))));
    vlSymsp->TOP__Vortex__DOT__VX_frE_to_bckE_req.csr_address 
	= (0xfffU & (((0U != (7U & ((vlTOPp->Vortex__DOT__vx_f_d_reg__DOT__f_d_reg__DOT__value[2U] 
				     << 0xcU) | (vlTOPp->Vortex__DOT__vx_f_d_reg__DOT__f_d_reg__DOT__value[1U] 
						 >> 0x14U)))) 
		      & (2U <= (0xfffU & ((vlTOPp->Vortex__DOT__vx_f_d_reg__DOT__f_d_reg__DOT__value[2U] 
					   << 4U) | 
					  (vlTOPp->Vortex__DOT__vx_f_d_reg__DOT__f_d_reg__DOT__value[1U] 
					   >> 0x1cU)))))
		      ? ((vlTOPp->Vortex__DOT__vx_f_d_reg__DOT__f_d_reg__DOT__value[2U] 
			  << 4U) | (vlTOPp->Vortex__DOT__vx_f_d_reg__DOT__f_d_reg__DOT__value[1U] 
				    >> 0x1cU)) : 0x55U));
    // ALWAYS at VX_decode.v:572
    vlTOPp->__Vtableidx1 = (7U & ((vlTOPp->Vortex__DOT__vx_f_d_reg__DOT__f_d_reg__DOT__value[2U] 
				   << 0xcU) | (vlTOPp->Vortex__DOT__vx_f_d_reg__DOT__f_d_reg__DOT__value[1U] 
					       >> 0x14U)));
    vlTOPp->Vortex__DOT__vx_decode__DOT__mul_alu = 
	vlTOPp->__Vtable1_Vortex__DOT__vx_decode__DOT__mul_alu
	[vlTOPp->__Vtableidx1];
    vlTOPp->Vortex__DOT__vx_decode__DOT__alu_tempp 
	= (0xfffU & (((1U == (7U & ((vlTOPp->Vortex__DOT__vx_f_d_reg__DOT__f_d_reg__DOT__value[2U] 
				     << 0xcU) | (vlTOPp->Vortex__DOT__vx_f_d_reg__DOT__f_d_reg__DOT__value[1U] 
						 >> 0x14U)))) 
		      | (5U == (7U & ((vlTOPp->Vortex__DOT__vx_f_d_reg__DOT__f_d_reg__DOT__value[2U] 
				       << 0xcU) | (
						   vlTOPp->Vortex__DOT__vx_f_d_reg__DOT__f_d_reg__DOT__value[1U] 
						   >> 0x14U)))))
		      ? (0x1fU & ((vlTOPp->Vortex__DOT__vx_f_d_reg__DOT__f_d_reg__DOT__value[2U] 
				   << 4U) | (vlTOPp->Vortex__DOT__vx_f_d_reg__DOT__f_d_reg__DOT__value[1U] 
					     >> 0x1cU)))
		      : ((vlTOPp->Vortex__DOT__vx_f_d_reg__DOT__f_d_reg__DOT__value[2U] 
			  << 4U) | (vlTOPp->Vortex__DOT__vx_f_d_reg__DOT__f_d_reg__DOT__value[1U] 
				    >> 0x1cU))));
    vlTOPp->Vortex__DOT__vx_decode__DOT__is_csr = (
						   (0x73U 
						    == 
						    (0x7fU 
						     & ((vlTOPp->Vortex__DOT__vx_f_d_reg__DOT__f_d_reg__DOT__value[2U] 
							 << 0x18U) 
							| (vlTOPp->Vortex__DOT__vx_f_d_reg__DOT__f_d_reg__DOT__value[1U] 
							   >> 8U)))) 
						   & (0U 
						      != 
						      (7U 
						       & ((vlTOPp->Vortex__DOT__vx_f_d_reg__DOT__f_d_reg__DOT__value[2U] 
							   << 0xcU) 
							  | (vlTOPp->Vortex__DOT__vx_f_d_reg__DOT__f_d_reg__DOT__value[1U] 
							     >> 0x14U)))));
    vlTOPp->Vortex__DOT__vx_decode__DOT__jal_sys_jal 
	= ((0U == (7U & ((vlTOPp->Vortex__DOT__vx_f_d_reg__DOT__f_d_reg__DOT__value[2U] 
			  << 0xcU) | (vlTOPp->Vortex__DOT__vx_f_d_reg__DOT__f_d_reg__DOT__value[1U] 
				      >> 0x14U)))) 
	   & (2U > (0xfffU & ((vlTOPp->Vortex__DOT__vx_f_d_reg__DOT__f_d_reg__DOT__value[2U] 
			       << 4U) | (vlTOPp->Vortex__DOT__vx_f_d_reg__DOT__f_d_reg__DOT__value[1U] 
					 >> 0x1cU)))));
    vlTOPp->Vortex__DOT__vx_decode__DOT__in_valid[0U] 
	= (1U & vlTOPp->Vortex__DOT__vx_f_d_reg__DOT__f_d_reg__DOT__value[0U]);
    vlTOPp->Vortex__DOT__vx_decode__DOT__in_valid[1U] 
	= (1U & (vlTOPp->Vortex__DOT__vx_f_d_reg__DOT__f_d_reg__DOT__value[0U] 
		 >> 1U));
    vlTOPp->Vortex__DOT__vx_decode__DOT__in_valid[2U] 
	= (1U & (vlTOPp->Vortex__DOT__vx_f_d_reg__DOT__f_d_reg__DOT__value[0U] 
		 >> 2U));
    vlTOPp->Vortex__DOT__vx_decode__DOT__in_valid[3U] 
	= (1U & (vlTOPp->Vortex__DOT__vx_f_d_reg__DOT__f_d_reg__DOT__value[0U] 
		 >> 3U));
    vlTOPp->Vortex__DOT__vx_decode__DOT__is_jmprt = 
	((0x6bU == (0x7fU & ((vlTOPp->Vortex__DOT__vx_f_d_reg__DOT__f_d_reg__DOT__value[2U] 
			      << 0x18U) | (vlTOPp->Vortex__DOT__vx_f_d_reg__DOT__f_d_reg__DOT__value[1U] 
					   >> 8U)))) 
	 & (4U == (7U & ((vlTOPp->Vortex__DOT__vx_f_d_reg__DOT__f_d_reg__DOT__value[2U] 
			  << 0xcU) | (vlTOPp->Vortex__DOT__vx_f_d_reg__DOT__f_d_reg__DOT__value[1U] 
				      >> 0x14U)))));
    vlTOPp->Vortex__DOT__vx_forwarding__DOT__src1_exe_fwd 
	= (((((0x1fU & ((vlTOPp->Vortex__DOT__vx_f_d_reg__DOT__f_d_reg__DOT__value[2U] 
			 << 9U) | (vlTOPp->Vortex__DOT__vx_f_d_reg__DOT__f_d_reg__DOT__value[1U] 
				   >> 0x17U))) == (0x1fU 
						   & ((vlTOPp->Vortex__DOT__vx_d_e_reg__DOT__d_e_reg__DOT__value[0xeU] 
						       << 8U) 
						      | (vlTOPp->Vortex__DOT__vx_d_e_reg__DOT__d_e_reg__DOT__value[0xdU] 
							 >> 0x18U)))) 
	     & (0U != (0x1fU & ((vlTOPp->Vortex__DOT__vx_f_d_reg__DOT__f_d_reg__DOT__value[2U] 
				 << 9U) | (vlTOPp->Vortex__DOT__vx_f_d_reg__DOT__f_d_reg__DOT__value[1U] 
					   >> 0x17U))))) 
	    & (0U != (IData)(vlSymsp->TOP__Vortex__DOT__VX_exe_mem_req.wb))) 
	   & ((0xfU & ((vlTOPp->Vortex__DOT__vx_f_d_reg__DOT__f_d_reg__DOT__value[1U] 
			<< 0x1cU) | (vlTOPp->Vortex__DOT__vx_f_d_reg__DOT__f_d_reg__DOT__value[0U] 
				     >> 4U))) == (0xfU 
						  & vlTOPp->Vortex__DOT__vx_d_e_reg__DOT__d_e_reg__DOT__value[0U])));
    vlTOPp->Vortex__DOT__vx_decode__DOT__is_jalrs = 
	((0x6bU == (0x7fU & ((vlTOPp->Vortex__DOT__vx_f_d_reg__DOT__f_d_reg__DOT__value[2U] 
			      << 0x18U) | (vlTOPp->Vortex__DOT__vx_f_d_reg__DOT__f_d_reg__DOT__value[1U] 
					   >> 8U)))) 
	 & (6U == (7U & ((vlTOPp->Vortex__DOT__vx_f_d_reg__DOT__f_d_reg__DOT__value[2U] 
			  << 0xcU) | (vlTOPp->Vortex__DOT__vx_f_d_reg__DOT__f_d_reg__DOT__value[1U] 
				      >> 0x14U)))));
    vlTOPp->Vortex__DOT__vx_decode__DOT__is_wspawn 
	= ((0x6bU == (0x7fU & ((vlTOPp->Vortex__DOT__vx_f_d_reg__DOT__f_d_reg__DOT__value[2U] 
				<< 0x18U) | (vlTOPp->Vortex__DOT__vx_f_d_reg__DOT__f_d_reg__DOT__value[1U] 
					     >> 8U)))) 
	   & (0U == (7U & ((vlTOPp->Vortex__DOT__vx_f_d_reg__DOT__f_d_reg__DOT__value[2U] 
			    << 0xcU) | (vlTOPp->Vortex__DOT__vx_f_d_reg__DOT__f_d_reg__DOT__value[1U] 
					>> 0x14U)))));
    vlTOPp->Vortex__DOT__vx_decode__DOT__is_clone = 
	((0x6bU == (0x7fU & ((vlTOPp->Vortex__DOT__vx_f_d_reg__DOT__f_d_reg__DOT__value[2U] 
			      << 0x18U) | (vlTOPp->Vortex__DOT__vx_f_d_reg__DOT__f_d_reg__DOT__value[1U] 
					   >> 8U)))) 
	 & (5U == (7U & ((vlTOPp->Vortex__DOT__vx_f_d_reg__DOT__f_d_reg__DOT__value[2U] 
			  << 0xcU) | (vlTOPp->Vortex__DOT__vx_f_d_reg__DOT__f_d_reg__DOT__value[1U] 
				      >> 0x14U)))));
    vlTOPp->Vortex__DOT__vx_forwarding__DOT__src2_exe_fwd 
	= (((((0x1fU & ((vlTOPp->Vortex__DOT__vx_f_d_reg__DOT__f_d_reg__DOT__value[2U] 
			 << 4U) | (vlTOPp->Vortex__DOT__vx_f_d_reg__DOT__f_d_reg__DOT__value[1U] 
				   >> 0x1cU))) == (0x1fU 
						   & ((vlTOPp->Vortex__DOT__vx_d_e_reg__DOT__d_e_reg__DOT__value[0xeU] 
						       << 8U) 
						      | (vlTOPp->Vortex__DOT__vx_d_e_reg__DOT__d_e_reg__DOT__value[0xdU] 
							 >> 0x18U)))) 
	     & (0U != (0x1fU & ((vlTOPp->Vortex__DOT__vx_f_d_reg__DOT__f_d_reg__DOT__value[2U] 
				 << 4U) | (vlTOPp->Vortex__DOT__vx_f_d_reg__DOT__f_d_reg__DOT__value[1U] 
					   >> 0x1cU))))) 
	    & (0U != (IData)(vlSymsp->TOP__Vortex__DOT__VX_exe_mem_req.wb))) 
	   & ((0xfU & ((vlTOPp->Vortex__DOT__vx_f_d_reg__DOT__f_d_reg__DOT__value[1U] 
			<< 0x1cU) | (vlTOPp->Vortex__DOT__vx_f_d_reg__DOT__f_d_reg__DOT__value[0U] 
				     >> 4U))) == (0xfU 
						  & vlTOPp->Vortex__DOT__vx_d_e_reg__DOT__d_e_reg__DOT__value[0U])));
    vlSymsp->TOP__Vortex__DOT__VX_writeback_inter.write_data[0U] 
	= ((3U == (3U & ((vlTOPp->Vortex__DOT__vx_m_w_reg__DOT__m_w_reg__DOT__value[2U] 
			  << 0xeU) | (vlTOPp->Vortex__DOT__vx_m_w_reg__DOT__m_w_reg__DOT__value[1U] 
				      >> 0x12U)))) ? 
	   vlTOPp->Vortex__DOT__vx_writeback__DOT__out_pc_data[0U]
	    : ((1U == (3U & ((vlTOPp->Vortex__DOT__vx_m_w_reg__DOT__m_w_reg__DOT__value[2U] 
			      << 0xeU) | (vlTOPp->Vortex__DOT__vx_m_w_reg__DOT__m_w_reg__DOT__value[1U] 
					  >> 0x12U))))
	        ? ((vlTOPp->Vortex__DOT__vx_m_w_reg__DOT__m_w_reg__DOT__value[6U] 
		    << 7U) | (vlTOPp->Vortex__DOT__vx_m_w_reg__DOT__m_w_reg__DOT__value[5U] 
			      >> 0x19U)) : ((vlTOPp->Vortex__DOT__vx_m_w_reg__DOT__m_w_reg__DOT__value[2U] 
					     << 7U) 
					    | (vlTOPp->Vortex__DOT__vx_m_w_reg__DOT__m_w_reg__DOT__value[1U] 
					       >> 0x19U))));
    vlSymsp->TOP__Vortex__DOT__VX_writeback_inter.write_data[1U] 
	= ((3U == (3U & ((vlTOPp->Vortex__DOT__vx_m_w_reg__DOT__m_w_reg__DOT__value[2U] 
			  << 0xeU) | (vlTOPp->Vortex__DOT__vx_m_w_reg__DOT__m_w_reg__DOT__value[1U] 
				      >> 0x12U)))) ? 
	   vlTOPp->Vortex__DOT__vx_writeback__DOT__out_pc_data[1U]
	    : ((1U == (3U & ((vlTOPp->Vortex__DOT__vx_m_w_reg__DOT__m_w_reg__DOT__value[2U] 
			      << 0xeU) | (vlTOPp->Vortex__DOT__vx_m_w_reg__DOT__m_w_reg__DOT__value[1U] 
					  >> 0x12U))))
	        ? ((vlTOPp->Vortex__DOT__vx_m_w_reg__DOT__m_w_reg__DOT__value[7U] 
		    << 7U) | (vlTOPp->Vortex__DOT__vx_m_w_reg__DOT__m_w_reg__DOT__value[6U] 
			      >> 0x19U)) : ((vlTOPp->Vortex__DOT__vx_m_w_reg__DOT__m_w_reg__DOT__value[3U] 
					     << 7U) 
					    | (vlTOPp->Vortex__DOT__vx_m_w_reg__DOT__m_w_reg__DOT__value[2U] 
					       >> 0x19U))));
    vlSymsp->TOP__Vortex__DOT__VX_writeback_inter.write_data[2U] 
	= ((3U == (3U & ((vlTOPp->Vortex__DOT__vx_m_w_reg__DOT__m_w_reg__DOT__value[2U] 
			  << 0xeU) | (vlTOPp->Vortex__DOT__vx_m_w_reg__DOT__m_w_reg__DOT__value[1U] 
				      >> 0x12U)))) ? 
	   vlTOPp->Vortex__DOT__vx_writeback__DOT__out_pc_data[2U]
	    : ((1U == (3U & ((vlTOPp->Vortex__DOT__vx_m_w_reg__DOT__m_w_reg__DOT__value[2U] 
			      << 0xeU) | (vlTOPp->Vortex__DOT__vx_m_w_reg__DOT__m_w_reg__DOT__value[1U] 
					  >> 0x12U))))
	        ? ((vlTOPp->Vortex__DOT__vx_m_w_reg__DOT__m_w_reg__DOT__value[8U] 
		    << 7U) | (vlTOPp->Vortex__DOT__vx_m_w_reg__DOT__m_w_reg__DOT__value[7U] 
			      >> 0x19U)) : ((vlTOPp->Vortex__DOT__vx_m_w_reg__DOT__m_w_reg__DOT__value[4U] 
					     << 7U) 
					    | (vlTOPp->Vortex__DOT__vx_m_w_reg__DOT__m_w_reg__DOT__value[3U] 
					       >> 0x19U))));
    vlSymsp->TOP__Vortex__DOT__VX_writeback_inter.write_data[3U] 
	= ((3U == (3U & ((vlTOPp->Vortex__DOT__vx_m_w_reg__DOT__m_w_reg__DOT__value[2U] 
			  << 0xeU) | (vlTOPp->Vortex__DOT__vx_m_w_reg__DOT__m_w_reg__DOT__value[1U] 
				      >> 0x12U)))) ? 
	   vlTOPp->Vortex__DOT__vx_writeback__DOT__out_pc_data[3U]
	    : ((1U == (3U & ((vlTOPp->Vortex__DOT__vx_m_w_reg__DOT__m_w_reg__DOT__value[2U] 
			      << 0xeU) | (vlTOPp->Vortex__DOT__vx_m_w_reg__DOT__m_w_reg__DOT__value[1U] 
					  >> 0x12U))))
	        ? ((vlTOPp->Vortex__DOT__vx_m_w_reg__DOT__m_w_reg__DOT__value[9U] 
		    << 7U) | (vlTOPp->Vortex__DOT__vx_m_w_reg__DOT__m_w_reg__DOT__value[8U] 
			      >> 0x19U)) : ((vlTOPp->Vortex__DOT__vx_m_w_reg__DOT__m_w_reg__DOT__value[5U] 
					     << 7U) 
					    | (vlTOPp->Vortex__DOT__vx_m_w_reg__DOT__m_w_reg__DOT__value[4U] 
					       >> 0x19U))));
    __Vtemp115[0xdU] = ((0xfff80000U & (((0xdU == (0x1fU 
						   & ((vlTOPp->Vortex__DOT__vx_d_e_reg__DOT__d_e_reg__DOT__value[6U] 
						       << 0x17U) 
						      | (vlTOPp->Vortex__DOT__vx_d_e_reg__DOT__d_e_reg__DOT__value[5U] 
							 >> 9U))))
					  ? ((vlTOPp->Vortex__DOT__vx_d_e_reg__DOT__d_e_reg__DOT__value[0xeU] 
					      << 3U) 
					     | (vlTOPp->Vortex__DOT__vx_d_e_reg__DOT__d_e_reg__DOT__value[0xdU] 
						>> 0x1dU))
					  : ((0xeU 
					      == (0x1fU 
						  & ((vlTOPp->Vortex__DOT__vx_d_e_reg__DOT__d_e_reg__DOT__value[6U] 
						      << 0x17U) 
						     | (vlTOPp->Vortex__DOT__vx_d_e_reg__DOT__d_e_reg__DOT__value[5U] 
							>> 9U))))
					      ? (vlTOPp->Vortex__DOT__csr_decode_csr_data 
						 | ((vlTOPp->Vortex__DOT__vx_d_e_reg__DOT__d_e_reg__DOT__value[0xeU] 
						     << 3U) 
						    | (vlTOPp->Vortex__DOT__vx_d_e_reg__DOT__d_e_reg__DOT__value[0xdU] 
						       >> 0x1dU)))
					      : ((0xfU 
						  == 
						  (0x1fU 
						   & ((vlTOPp->Vortex__DOT__vx_d_e_reg__DOT__d_e_reg__DOT__value[6U] 
						       << 0x17U) 
						      | (vlTOPp->Vortex__DOT__vx_d_e_reg__DOT__d_e_reg__DOT__value[5U] 
							 >> 9U))))
						  ? 
						 (vlTOPp->Vortex__DOT__csr_decode_csr_data 
						  & ((IData)(0xffffffffU) 
						     - 
						     ((vlTOPp->Vortex__DOT__vx_d_e_reg__DOT__d_e_reg__DOT__value[0xeU] 
						       << 3U) 
						      | (vlTOPp->Vortex__DOT__vx_d_e_reg__DOT__d_e_reg__DOT__value[0xdU] 
							 >> 0x1dU))))
						  : 0xdeadbeefU))) 
					<< 0x13U)) 
			| ((0x40000U & (vlTOPp->Vortex__DOT__vx_d_e_reg__DOT__d_e_reg__DOT__value[2U] 
					<< 0xaU)) | 
			   (0x3ffffU & ((((vlTOPp->Vortex__DOT__vx_d_e_reg__DOT__d_e_reg__DOT__value[0xaU] 
					   << 0x12U) 
					  | (vlTOPp->Vortex__DOT__vx_d_e_reg__DOT__d_e_reg__DOT__value[9U] 
					     >> 0xeU)) 
					 + ((vlTOPp->Vortex__DOT__vx_d_e_reg__DOT__d_e_reg__DOT__value[2U] 
					     << 0x18U) 
					    | (vlTOPp->Vortex__DOT__vx_d_e_reg__DOT__d_e_reg__DOT__value[1U] 
					       >> 8U))) 
					>> 0xeU))));
    __Vtemp115[0xeU] = (0x7ffffU & (((0xdU == (0x1fU 
					       & ((vlTOPp->Vortex__DOT__vx_d_e_reg__DOT__d_e_reg__DOT__value[6U] 
						   << 0x17U) 
						  | (vlTOPp->Vortex__DOT__vx_d_e_reg__DOT__d_e_reg__DOT__value[5U] 
						     >> 9U))))
				      ? ((vlTOPp->Vortex__DOT__vx_d_e_reg__DOT__d_e_reg__DOT__value[0xeU] 
					  << 3U) | 
					 (vlTOPp->Vortex__DOT__vx_d_e_reg__DOT__d_e_reg__DOT__value[0xdU] 
					  >> 0x1dU))
				      : ((0xeU == (0x1fU 
						   & ((vlTOPp->Vortex__DOT__vx_d_e_reg__DOT__d_e_reg__DOT__value[6U] 
						       << 0x17U) 
						      | (vlTOPp->Vortex__DOT__vx_d_e_reg__DOT__d_e_reg__DOT__value[5U] 
							 >> 9U))))
					  ? (vlTOPp->Vortex__DOT__csr_decode_csr_data 
					     | ((vlTOPp->Vortex__DOT__vx_d_e_reg__DOT__d_e_reg__DOT__value[0xeU] 
						 << 3U) 
						| (vlTOPp->Vortex__DOT__vx_d_e_reg__DOT__d_e_reg__DOT__value[0xdU] 
						   >> 0x1dU)))
					  : ((0xfU 
					      == (0x1fU 
						  & ((vlTOPp->Vortex__DOT__vx_d_e_reg__DOT__d_e_reg__DOT__value[6U] 
						      << 0x17U) 
						     | (vlTOPp->Vortex__DOT__vx_d_e_reg__DOT__d_e_reg__DOT__value[5U] 
							>> 9U))))
					      ? (vlTOPp->Vortex__DOT__csr_decode_csr_data 
						 & ((IData)(0xffffffffU) 
						    - 
						    ((vlTOPp->Vortex__DOT__vx_d_e_reg__DOT__d_e_reg__DOT__value[0xeU] 
						      << 3U) 
						     | (vlTOPp->Vortex__DOT__vx_d_e_reg__DOT__d_e_reg__DOT__value[0xdU] 
							>> 0x1dU))))
					      : 0xdeadbeefU))) 
				    >> 0xdU));
    __Vtemp124[7U] = ((0xffff0000U & ((0x80000000U 
				       & (vlTOPp->Vortex__DOT__vx_d_e_reg__DOT__d_e_reg__DOT__value[4U] 
					  << 0x1cU)) 
				      | ((0x70000000U 
					  & (vlTOPp->Vortex__DOT__vx_d_e_reg__DOT__d_e_reg__DOT__value[4U] 
					     << 0x1cU)) 
					 | ((0xf800000U 
					     & ((vlTOPp->Vortex__DOT__vx_d_e_reg__DOT__d_e_reg__DOT__value[0xeU] 
						 << 0x1fU) 
						| (0x7f800000U 
						   & (vlTOPp->Vortex__DOT__vx_d_e_reg__DOT__d_e_reg__DOT__value[0xdU] 
						      >> 1U)))) 
					    | (((IData)(vlSymsp->TOP__Vortex__DOT__VX_exe_mem_req.wb) 
						<< 0x15U) 
					       | (0x1f0000U 
						  & ((vlTOPp->Vortex__DOT__vx_d_e_reg__DOT__d_e_reg__DOT__value[0xeU] 
						      << 0x1dU) 
						     | (0x1fff0000U 
							& (vlTOPp->Vortex__DOT__vx_d_e_reg__DOT__d_e_reg__DOT__value[0xdU] 
							   >> 3U))))))))) 
		      | ((0xf800U & ((vlTOPp->Vortex__DOT__vx_d_e_reg__DOT__d_e_reg__DOT__value[0xeU] 
				      << 0x1dU) | (0x1ffff800U 
						   & (vlTOPp->Vortex__DOT__vx_d_e_reg__DOT__d_e_reg__DOT__value[0xdU] 
						      >> 3U)))) 
			 | (0x7ffU & (vlTOPp->Vortex__DOT__vx_d_e_reg__DOT__d_e_reg__DOT__value[9U] 
				      >> 3U))));
    __Vtemp124[8U] = ((0xffffU & ((0xfffcU & (vlSymsp->TOP__Vortex__DOT__VX_exe_mem_req.alu_result[0U] 
					      << 2U)) 
				  | ((3U & (vlTOPp->Vortex__DOT__vx_d_e_reg__DOT__d_e_reg__DOT__value[4U] 
					    >> 4U)) 
				     | (0xffffU & ((IData)(vlSymsp->TOP__Vortex__DOT__VX_exe_mem_req.wb) 
						   >> 0xbU))))) 
		      | (0xffff0000U & (vlSymsp->TOP__Vortex__DOT__VX_exe_mem_req.alu_result[0U] 
					<< 2U)));
    vlTOPp->Vortex__DOT__vx_e_m_reg__DOT____Vcellinp__f_d_reg__in[0U] 
	= ((0xfffff800U & (vlTOPp->Vortex__DOT__vx_d_e_reg__DOT__d_e_reg__DOT__value[4U] 
			   << 5U)) | ((0x700U & ((vlTOPp->Vortex__DOT__vx_d_e_reg__DOT__d_e_reg__DOT__value[4U] 
						  << 0xbU) 
						 | (0x700U 
						    & (vlTOPp->Vortex__DOT__vx_d_e_reg__DOT__d_e_reg__DOT__value[3U] 
						       >> 0x15U)))) 
				      | (0xffU & vlTOPp->Vortex__DOT__vx_d_e_reg__DOT__d_e_reg__DOT__value[0U])));
    vlTOPp->Vortex__DOT__vx_e_m_reg__DOT____Vcellinp__f_d_reg__in[1U] 
	= ((0x7ffU & ((0x7e0U & (vlTOPp->Vortex__DOT__vx_d_e_reg__DOT__d_e_reg__DOT__value[5U] 
				 << 5U)) | (vlTOPp->Vortex__DOT__vx_d_e_reg__DOT__d_e_reg__DOT__value[4U] 
					    >> 0x1bU))) 
	   | (0xfffff800U & (vlTOPp->Vortex__DOT__vx_d_e_reg__DOT__d_e_reg__DOT__value[2U] 
			     << 2U)));
    vlTOPp->Vortex__DOT__vx_e_m_reg__DOT____Vcellinp__f_d_reg__in[2U] 
	= ((0x7ffU & ((0x7fcU & (vlTOPp->Vortex__DOT__vx_d_e_reg__DOT__d_e_reg__DOT__value[3U] 
				 << 2U)) | (vlTOPp->Vortex__DOT__vx_d_e_reg__DOT__d_e_reg__DOT__value[2U] 
					    >> 0x1eU))) 
	   | (0xfffff800U & (vlTOPp->Vortex__DOT__vx_d_e_reg__DOT__d_e_reg__DOT__value[0U] 
			     << 3U)));
    vlTOPp->Vortex__DOT__vx_e_m_reg__DOT____Vcellinp__f_d_reg__in[3U] 
	= ((0x7ffU & ((0x7f8U & (vlTOPp->Vortex__DOT__vx_d_e_reg__DOT__d_e_reg__DOT__value[1U] 
				 << 3U)) | (vlTOPp->Vortex__DOT__vx_d_e_reg__DOT__d_e_reg__DOT__value[0U] 
					    >> 0x1dU))) 
	   | (0xfffff800U & ((vlTOPp->Vortex__DOT__vx_d_e_reg__DOT__d_e_reg__DOT__value[6U] 
			      << 0x1dU) | (0x1ffff800U 
					   & (vlTOPp->Vortex__DOT__vx_d_e_reg__DOT__d_e_reg__DOT__value[5U] 
					      >> 3U)))));
    vlTOPp->Vortex__DOT__vx_e_m_reg__DOT____Vcellinp__f_d_reg__in[4U] 
	= ((0x7ffU & (vlTOPp->Vortex__DOT__vx_d_e_reg__DOT__d_e_reg__DOT__value[6U] 
		      >> 3U)) | (0xfffff800U & ((vlTOPp->Vortex__DOT__vx_d_e_reg__DOT__d_e_reg__DOT__value[7U] 
						 << 0x1dU) 
						| (0x1ffff800U 
						   & (vlTOPp->Vortex__DOT__vx_d_e_reg__DOT__d_e_reg__DOT__value[6U] 
						      >> 3U)))));
    vlTOPp->Vortex__DOT__vx_e_m_reg__DOT____Vcellinp__f_d_reg__in[5U] 
	= ((0x7ffU & (vlTOPp->Vortex__DOT__vx_d_e_reg__DOT__d_e_reg__DOT__value[7U] 
		      >> 3U)) | (0xfffff800U & ((vlTOPp->Vortex__DOT__vx_d_e_reg__DOT__d_e_reg__DOT__value[8U] 
						 << 0x1dU) 
						| (0x1ffff800U 
						   & (vlTOPp->Vortex__DOT__vx_d_e_reg__DOT__d_e_reg__DOT__value[7U] 
						      >> 3U)))));
    vlTOPp->Vortex__DOT__vx_e_m_reg__DOT____Vcellinp__f_d_reg__in[6U] 
	= ((0x7ffU & (vlTOPp->Vortex__DOT__vx_d_e_reg__DOT__d_e_reg__DOT__value[8U] 
		      >> 3U)) | (0xfffff800U & ((vlTOPp->Vortex__DOT__vx_d_e_reg__DOT__d_e_reg__DOT__value[9U] 
						 << 0x1dU) 
						| (0x1ffff800U 
						   & (vlTOPp->Vortex__DOT__vx_d_e_reg__DOT__d_e_reg__DOT__value[8U] 
						      >> 3U)))));
    vlTOPp->Vortex__DOT__vx_e_m_reg__DOT____Vcellinp__f_d_reg__in[7U] 
	= __Vtemp124[7U];
    vlTOPp->Vortex__DOT__vx_e_m_reg__DOT____Vcellinp__f_d_reg__in[8U] 
	= __Vtemp124[8U];
    vlTOPp->Vortex__DOT__vx_e_m_reg__DOT____Vcellinp__f_d_reg__in[9U] 
	= ((0xffffU & ((3U & (vlSymsp->TOP__Vortex__DOT__VX_exe_mem_req.alu_result[0U] 
			      >> 0x1eU)) | (0xfffcU 
					    & (vlSymsp->TOP__Vortex__DOT__VX_exe_mem_req.alu_result[1U] 
					       << 2U)))) 
	   | (0xffff0000U & (vlSymsp->TOP__Vortex__DOT__VX_exe_mem_req.alu_result[1U] 
			     << 2U)));
    vlTOPp->Vortex__DOT__vx_e_m_reg__DOT____Vcellinp__f_d_reg__in[0xaU] 
	= ((0xffffU & ((3U & (vlSymsp->TOP__Vortex__DOT__VX_exe_mem_req.alu_result[1U] 
			      >> 0x1eU)) | (0xfffcU 
					    & (vlSymsp->TOP__Vortex__DOT__VX_exe_mem_req.alu_result[2U] 
					       << 2U)))) 
	   | (0xffff0000U & (vlSymsp->TOP__Vortex__DOT__VX_exe_mem_req.alu_result[2U] 
			     << 2U)));
    vlTOPp->Vortex__DOT__vx_e_m_reg__DOT____Vcellinp__f_d_reg__in[0xbU] 
	= ((0xffffU & ((3U & (vlSymsp->TOP__Vortex__DOT__VX_exe_mem_req.alu_result[2U] 
			      >> 0x1eU)) | (0xfffcU 
					    & (vlSymsp->TOP__Vortex__DOT__VX_exe_mem_req.alu_result[3U] 
					       << 2U)))) 
	   | (0xffff0000U & (vlSymsp->TOP__Vortex__DOT__VX_exe_mem_req.alu_result[3U] 
			     << 2U)));
    vlTOPp->Vortex__DOT__vx_e_m_reg__DOT____Vcellinp__f_d_reg__in[0xcU] 
	= ((0xffffU & ((3U & (vlSymsp->TOP__Vortex__DOT__VX_exe_mem_req.alu_result[3U] 
			      >> 0x1eU)) | (0xfffcU 
					    & (vlTOPp->Vortex__DOT____Vcellout__vx_execute__out_b_reg_data[0U] 
					       << 2U)))) 
	   | (0xffff0000U & (vlTOPp->Vortex__DOT____Vcellout__vx_execute__out_b_reg_data[0U] 
			     << 2U)));
    vlTOPp->Vortex__DOT__vx_e_m_reg__DOT____Vcellinp__f_d_reg__in[0xdU] 
	= ((0xffffU & ((3U & (vlTOPp->Vortex__DOT____Vcellout__vx_execute__out_b_reg_data[0U] 
			      >> 0x1eU)) | (0xfffcU 
					    & (vlTOPp->Vortex__DOT____Vcellout__vx_execute__out_b_reg_data[1U] 
					       << 2U)))) 
	   | (0xffff0000U & (vlTOPp->Vortex__DOT____Vcellout__vx_execute__out_b_reg_data[1U] 
			     << 2U)));
    vlTOPp->Vortex__DOT__vx_e_m_reg__DOT____Vcellinp__f_d_reg__in[0xeU] 
	= ((0xffffU & ((3U & (vlTOPp->Vortex__DOT____Vcellout__vx_execute__out_b_reg_data[1U] 
			      >> 0x1eU)) | (0xfffcU 
					    & (vlTOPp->Vortex__DOT____Vcellout__vx_execute__out_b_reg_data[2U] 
					       << 2U)))) 
	   | (0xffff0000U & (vlTOPp->Vortex__DOT____Vcellout__vx_execute__out_b_reg_data[2U] 
			     << 2U)));
    vlTOPp->Vortex__DOT__vx_e_m_reg__DOT____Vcellinp__f_d_reg__in[0xfU] 
	= ((0xffffU & ((3U & (vlTOPp->Vortex__DOT____Vcellout__vx_execute__out_b_reg_data[2U] 
			      >> 0x1eU)) | (0xfffcU 
					    & (vlTOPp->Vortex__DOT____Vcellout__vx_execute__out_b_reg_data[3U] 
					       << 2U)))) 
	   | (0xffff0000U & (vlTOPp->Vortex__DOT____Vcellout__vx_execute__out_b_reg_data[3U] 
			     << 2U)));
    vlTOPp->Vortex__DOT__vx_e_m_reg__DOT____Vcellinp__f_d_reg__in[0x10U] 
	= ((0xffffU & ((3U & (vlTOPp->Vortex__DOT____Vcellout__vx_execute__out_b_reg_data[3U] 
			      >> 0x1eU)) | (0xfffcU 
					    & (vlTOPp->Vortex__DOT____Vcellout__vx_execute__out_a_reg_data[0U] 
					       << 2U)))) 
	   | (0xffff0000U & (vlTOPp->Vortex__DOT____Vcellout__vx_execute__out_a_reg_data[0U] 
			     << 2U)));
    vlTOPp->Vortex__DOT__vx_e_m_reg__DOT____Vcellinp__f_d_reg__in[0x11U] 
	= ((0xffffU & ((3U & (vlTOPp->Vortex__DOT____Vcellout__vx_execute__out_a_reg_data[0U] 
			      >> 0x1eU)) | (0xfffcU 
					    & (vlTOPp->Vortex__DOT____Vcellout__vx_execute__out_a_reg_data[1U] 
					       << 2U)))) 
	   | (0xffff0000U & (vlTOPp->Vortex__DOT____Vcellout__vx_execute__out_a_reg_data[1U] 
			     << 2U)));
    vlTOPp->Vortex__DOT__vx_e_m_reg__DOT____Vcellinp__f_d_reg__in[0x12U] 
	= ((0xffffU & ((3U & (vlTOPp->Vortex__DOT____Vcellout__vx_execute__out_a_reg_data[1U] 
			      >> 0x1eU)) | (0xfffcU 
					    & (vlTOPp->Vortex__DOT____Vcellout__vx_execute__out_a_reg_data[2U] 
					       << 2U)))) 
	   | (0xffff0000U & (vlTOPp->Vortex__DOT____Vcellout__vx_execute__out_a_reg_data[2U] 
			     << 2U)));
    vlTOPp->Vortex__DOT__vx_e_m_reg__DOT____Vcellinp__f_d_reg__in[0x13U] 
	= ((0xffffU & ((3U & (vlTOPp->Vortex__DOT____Vcellout__vx_execute__out_a_reg_data[2U] 
			      >> 0x1eU)) | (0xfffcU 
					    & (vlTOPp->Vortex__DOT____Vcellout__vx_execute__out_a_reg_data[3U] 
					       << 2U)))) 
	   | (0xffff0000U & (vlTOPp->Vortex__DOT____Vcellout__vx_execute__out_a_reg_data[3U] 
			     << 2U)));
    vlTOPp->Vortex__DOT__vx_e_m_reg__DOT____Vcellinp__f_d_reg__in[0x14U] 
	= ((0xffffU & ((3U & (vlTOPp->Vortex__DOT____Vcellout__vx_execute__out_a_reg_data[3U] 
			      >> 0x1eU)) | (0xfffcU 
					    & ((((vlTOPp->Vortex__DOT__vx_d_e_reg__DOT__d_e_reg__DOT__value[0xaU] 
						  << 0x12U) 
						 | (vlTOPp->Vortex__DOT__vx_d_e_reg__DOT__d_e_reg__DOT__value[9U] 
						    >> 0xeU)) 
						+ (
						   (vlTOPp->Vortex__DOT__vx_d_e_reg__DOT__d_e_reg__DOT__value[2U] 
						    << 0x18U) 
						   | (vlTOPp->Vortex__DOT__vx_d_e_reg__DOT__d_e_reg__DOT__value[1U] 
						      >> 8U))) 
					       << 2U)))) 
	   | (0xffff0000U & (__Vtemp115[0xdU] << 0x10U)));
    vlTOPp->Vortex__DOT__vx_e_m_reg__DOT____Vcellinp__f_d_reg__in[0x15U] 
	= ((0xffffU & (__Vtemp115[0xdU] >> 0x10U)) 
	   | (0xffff0000U & (__Vtemp115[0xeU] << 0x10U)));
    vlTOPp->Vortex__DOT__vx_e_m_reg__DOT____Vcellinp__f_d_reg__in[0x16U] 
	= (0xffffU & ((0xfff0U & ((0xffc0U & (vlTOPp->Vortex__DOT__vx_d_e_reg__DOT__d_e_reg__DOT__value[0xfU] 
					      << 6U)) 
				  | (0x30U & (vlTOPp->Vortex__DOT__vx_d_e_reg__DOT__d_e_reg__DOT__value[0xeU] 
					      >> 0x1aU)))) 
		      | ((8U & (vlTOPp->Vortex__DOT__vx_d_e_reg__DOT__d_e_reg__DOT__value[0xeU] 
				>> 0x1aU)) | (__Vtemp115[0xeU] 
					      >> 0x10U))));
    // ALWAYS at VX_decode.v:503
    vlSymsp->TOP__Vortex__DOT__VX_frE_to_bckE_req.itype_immed 
	= ((0x4000U & vlTOPp->Vortex__DOT__vx_f_d_reg__DOT__f_d_reg__DOT__value[1U])
	    ? ((0x2000U & vlTOPp->Vortex__DOT__vx_f_d_reg__DOT__f_d_reg__DOT__value[1U])
	        ? ((0x1000U & vlTOPp->Vortex__DOT__vx_f_d_reg__DOT__f_d_reg__DOT__value[1U])
		    ? 0xdeadbeefU : ((0x800U & vlTOPp->Vortex__DOT__vx_f_d_reg__DOT__f_d_reg__DOT__value[1U])
				      ? 0xdeadbeefU
				      : ((0x400U & 
					  vlTOPp->Vortex__DOT__vx_f_d_reg__DOT__f_d_reg__DOT__value[1U])
					  ? 0xdeadbeefU
					  : ((0x200U 
					      & vlTOPp->Vortex__DOT__vx_f_d_reg__DOT__f_d_reg__DOT__value[1U])
					      ? ((0x100U 
						  & vlTOPp->Vortex__DOT__vx_f_d_reg__DOT__f_d_reg__DOT__value[1U])
						  ? 
						 ((0xfffff000U 
						   & (VL_NEGATE_I((IData)(
									  (1U 
									   & (vlTOPp->Vortex__DOT__vx_f_d_reg__DOT__f_d_reg__DOT__value[2U] 
									      >> 7U)))) 
						      << 0xcU)) 
						  | ((0x800U 
						      & (vlTOPp->Vortex__DOT__vx_f_d_reg__DOT__f_d_reg__DOT__value[2U] 
							 << 4U)) 
						     | ((0x400U 
							 & (vlTOPp->Vortex__DOT__vx_f_d_reg__DOT__f_d_reg__DOT__value[1U] 
							    >> 5U)) 
							| ((0x3f0U 
							    & (vlTOPp->Vortex__DOT__vx_f_d_reg__DOT__f_d_reg__DOT__value[2U] 
							       << 3U)) 
							   | (0xfU 
							      & ((vlTOPp->Vortex__DOT__vx_f_d_reg__DOT__f_d_reg__DOT__value[2U] 
								  << 0x10U) 
								 | (vlTOPp->Vortex__DOT__vx_f_d_reg__DOT__f_d_reg__DOT__value[1U] 
								    >> 0x10U)))))))
						  : 0xdeadbeefU)
					      : 0xdeadbeefU))))
	        : 0xdeadbeefU) : ((0x2000U & vlTOPp->Vortex__DOT__vx_f_d_reg__DOT__f_d_reg__DOT__value[1U])
				   ? ((0x1000U & vlTOPp->Vortex__DOT__vx_f_d_reg__DOT__f_d_reg__DOT__value[1U])
				       ? 0xdeadbeefU
				       : ((0x800U & 
					   vlTOPp->Vortex__DOT__vx_f_d_reg__DOT__f_d_reg__DOT__value[1U])
					   ? 0xdeadbeefU
					   : ((0x400U 
					       & vlTOPp->Vortex__DOT__vx_f_d_reg__DOT__f_d_reg__DOT__value[1U])
					       ? 0xdeadbeefU
					       : ((0x200U 
						   & vlTOPp->Vortex__DOT__vx_f_d_reg__DOT__f_d_reg__DOT__value[1U])
						   ? 
						  ((0x100U 
						    & vlTOPp->Vortex__DOT__vx_f_d_reg__DOT__f_d_reg__DOT__value[1U])
						    ? 
						   ((0xfffff000U 
						     & (VL_NEGATE_I((IData)(
									    (1U 
									     & (vlTOPp->Vortex__DOT__vx_f_d_reg__DOT__f_d_reg__DOT__value[2U] 
										>> 7U)))) 
							<< 0xcU)) 
						    | ((0xfe0U 
							& (vlTOPp->Vortex__DOT__vx_f_d_reg__DOT__f_d_reg__DOT__value[2U] 
							   << 4U)) 
						       | (0x1fU 
							  & ((vlTOPp->Vortex__DOT__vx_f_d_reg__DOT__f_d_reg__DOT__value[2U] 
							      << 0x11U) 
							     | (vlTOPp->Vortex__DOT__vx_f_d_reg__DOT__f_d_reg__DOT__value[1U] 
								>> 0xfU)))))
						    : 0xdeadbeefU)
						   : 0xdeadbeefU))))
				   : ((0x1000U & vlTOPp->Vortex__DOT__vx_f_d_reg__DOT__f_d_reg__DOT__value[1U])
				       ? ((0x800U & 
					   vlTOPp->Vortex__DOT__vx_f_d_reg__DOT__f_d_reg__DOT__value[1U])
					   ? 0xdeadbeefU
					   : ((0x400U 
					       & vlTOPp->Vortex__DOT__vx_f_d_reg__DOT__f_d_reg__DOT__value[1U])
					       ? 0xdeadbeefU
					       : ((0x200U 
						   & vlTOPp->Vortex__DOT__vx_f_d_reg__DOT__f_d_reg__DOT__value[1U])
						   ? 
						  ((0x100U 
						    & vlTOPp->Vortex__DOT__vx_f_d_reg__DOT__f_d_reg__DOT__value[1U])
						    ? 
						   ((0xfffff000U 
						     & (VL_NEGATE_I((IData)(
									    (1U 
									     & ((IData)(vlTOPp->Vortex__DOT__vx_decode__DOT__alu_tempp) 
										>> 0xbU)))) 
							<< 0xcU)) 
						    | (IData)(vlTOPp->Vortex__DOT__vx_decode__DOT__alu_tempp))
						    : 0xdeadbeefU)
						   : 0xdeadbeefU)))
				       : ((0x800U & 
					   vlTOPp->Vortex__DOT__vx_f_d_reg__DOT__f_d_reg__DOT__value[1U])
					   ? 0xdeadbeefU
					   : ((0x400U 
					       & vlTOPp->Vortex__DOT__vx_f_d_reg__DOT__f_d_reg__DOT__value[1U])
					       ? 0xdeadbeefU
					       : ((0x200U 
						   & vlTOPp->Vortex__DOT__vx_f_d_reg__DOT__f_d_reg__DOT__value[1U])
						   ? 
						  ((0x100U 
						    & vlTOPp->Vortex__DOT__vx_f_d_reg__DOT__f_d_reg__DOT__value[1U])
						    ? 
						   ((0xfffff000U 
						     & (VL_NEGATE_I((IData)(
									    (1U 
									     & (vlTOPp->Vortex__DOT__vx_f_d_reg__DOT__f_d_reg__DOT__value[2U] 
										>> 7U)))) 
							<< 0xcU)) 
						    | (0xfffU 
						       & ((vlTOPp->Vortex__DOT__vx_f_d_reg__DOT__f_d_reg__DOT__value[2U] 
							   << 4U) 
							  | (vlTOPp->Vortex__DOT__vx_f_d_reg__DOT__f_d_reg__DOT__value[1U] 
							     >> 0x1cU))))
						    : 0xdeadbeefU)
						   : 0xdeadbeefU))))));
    vlTOPp->Vortex__DOT__vx_decode__DOT__is_ebreak 
	= ((0x73U == (0x7fU & ((vlTOPp->Vortex__DOT__vx_f_d_reg__DOT__f_d_reg__DOT__value[2U] 
				<< 0x18U) | (vlTOPp->Vortex__DOT__vx_f_d_reg__DOT__f_d_reg__DOT__value[1U] 
					     >> 8U)))) 
	   & ((IData)(vlTOPp->Vortex__DOT__vx_decode__DOT__jal_sys_jal) 
	      & vlTOPp->Vortex__DOT__vx_decode__DOT__in_valid
	      [0U]));
    // ALWAYS at VX_decode.v:447
    if ((0x4000U & vlTOPp->Vortex__DOT__vx_f_d_reg__DOT__f_d_reg__DOT__value[1U])) {
	if ((0x2000U & vlTOPp->Vortex__DOT__vx_f_d_reg__DOT__f_d_reg__DOT__value[1U])) {
	    if ((0x1000U & vlTOPp->Vortex__DOT__vx_f_d_reg__DOT__f_d_reg__DOT__value[1U])) {
		vlSymsp->TOP__Vortex__DOT__VX_frE_to_bckE_req.jal_offset 
		    = ((0x800U & vlTOPp->Vortex__DOT__vx_f_d_reg__DOT__f_d_reg__DOT__value[1U])
		        ? 0xdeadbeefU : ((0x400U & 
					  vlTOPp->Vortex__DOT__vx_f_d_reg__DOT__f_d_reg__DOT__value[1U])
					  ? 0xdeadbeefU
					  : ((0x200U 
					      & vlTOPp->Vortex__DOT__vx_f_d_reg__DOT__f_d_reg__DOT__value[1U])
					      ? ((0x100U 
						  & vlTOPp->Vortex__DOT__vx_f_d_reg__DOT__f_d_reg__DOT__value[1U])
						  ? 
						 (((0U 
						    == 
						    (7U 
						     & ((vlTOPp->Vortex__DOT__vx_f_d_reg__DOT__f_d_reg__DOT__value[2U] 
							 << 0xcU) 
							| (vlTOPp->Vortex__DOT__vx_f_d_reg__DOT__f_d_reg__DOT__value[1U] 
							   >> 0x14U)))) 
						   & (2U 
						      > 
						      (0xfffU 
						       & ((vlTOPp->Vortex__DOT__vx_f_d_reg__DOT__f_d_reg__DOT__value[2U] 
							   << 4U) 
							  | (vlTOPp->Vortex__DOT__vx_f_d_reg__DOT__f_d_reg__DOT__value[1U] 
							     >> 0x1cU)))))
						   ? 0xb0000000U
						   : 0xdeadbeefU)
						  : 0xdeadbeefU)
					      : 0xdeadbeefU)));
	    } else {
		if ((0x800U & vlTOPp->Vortex__DOT__vx_f_d_reg__DOT__f_d_reg__DOT__value[1U])) {
		    if ((0x400U & vlTOPp->Vortex__DOT__vx_f_d_reg__DOT__f_d_reg__DOT__value[1U])) {
			vlSymsp->TOP__Vortex__DOT__VX_frE_to_bckE_req.jal_offset 
			    = ((0x200U & vlTOPp->Vortex__DOT__vx_f_d_reg__DOT__f_d_reg__DOT__value[1U])
			        ? ((0x100U & vlTOPp->Vortex__DOT__vx_f_d_reg__DOT__f_d_reg__DOT__value[1U])
				    ? ((0xffe00000U 
					& (VL_NEGATE_I((IData)(
							       (1U 
								& (vlTOPp->Vortex__DOT__vx_f_d_reg__DOT__f_d_reg__DOT__value[2U] 
								   >> 7U)))) 
					   << 0x15U)) 
				       | ((0x100000U 
					   & (vlTOPp->Vortex__DOT__vx_f_d_reg__DOT__f_d_reg__DOT__value[2U] 
					      << 0xdU)) 
					  | ((0xff000U 
					      & ((vlTOPp->Vortex__DOT__vx_f_d_reg__DOT__f_d_reg__DOT__value[2U] 
						  << 0x18U) 
						 | (0xfff000U 
						    & (vlTOPp->Vortex__DOT__vx_f_d_reg__DOT__f_d_reg__DOT__value[1U] 
						       >> 8U)))) 
					     | ((0x800U 
						 & (vlTOPp->Vortex__DOT__vx_f_d_reg__DOT__f_d_reg__DOT__value[1U] 
						    >> 0x11U)) 
						| (0x7feU 
						   & ((vlTOPp->Vortex__DOT__vx_f_d_reg__DOT__f_d_reg__DOT__value[2U] 
						       << 4U) 
						      | (0xeU 
							 & (vlTOPp->Vortex__DOT__vx_f_d_reg__DOT__f_d_reg__DOT__value[1U] 
							    >> 0x1cU))))))))
				    : 0xdeadbeefU) : 0xdeadbeefU);
		    } else {
			if ((0x200U & vlTOPp->Vortex__DOT__vx_f_d_reg__DOT__f_d_reg__DOT__value[1U])) {
			    if ((0x100U & vlTOPp->Vortex__DOT__vx_f_d_reg__DOT__f_d_reg__DOT__value[1U])) {
				if (((IData)(vlTOPp->Vortex__DOT__vx_decode__DOT__is_jalrs) 
				     | (IData)(vlTOPp->Vortex__DOT__vx_decode__DOT__is_jmprt))) {
				    vlSymsp->TOP__Vortex__DOT__VX_frE_to_bckE_req.jal_offset = 0U;
				}
			    } else {
				vlSymsp->TOP__Vortex__DOT__VX_frE_to_bckE_req.jal_offset = 0xdeadbeefU;
			    }
			} else {
			    vlSymsp->TOP__Vortex__DOT__VX_frE_to_bckE_req.jal_offset = 0xdeadbeefU;
			}
		    }
		} else {
		    vlSymsp->TOP__Vortex__DOT__VX_frE_to_bckE_req.jal_offset 
			= ((0x400U & vlTOPp->Vortex__DOT__vx_f_d_reg__DOT__f_d_reg__DOT__value[1U])
			    ? ((0x200U & vlTOPp->Vortex__DOT__vx_f_d_reg__DOT__f_d_reg__DOT__value[1U])
			        ? ((0x100U & vlTOPp->Vortex__DOT__vx_f_d_reg__DOT__f_d_reg__DOT__value[1U])
				    ? ((0xfffff000U 
					& (VL_NEGATE_I((IData)(
							       (1U 
								& (vlTOPp->Vortex__DOT__vx_f_d_reg__DOT__f_d_reg__DOT__value[2U] 
								   >> 7U)))) 
					   << 0xcU)) 
				       | (0xfffU & 
					  ((vlTOPp->Vortex__DOT__vx_f_d_reg__DOT__f_d_reg__DOT__value[2U] 
					    << 4U) 
					   | (vlTOPp->Vortex__DOT__vx_f_d_reg__DOT__f_d_reg__DOT__value[1U] 
					      >> 0x1cU))))
				    : 0xdeadbeefU) : 0xdeadbeefU)
			    : 0xdeadbeefU);
		}
	    }
	} else {
	    vlSymsp->TOP__Vortex__DOT__VX_frE_to_bckE_req.jal_offset = 0xdeadbeefU;
	}
    } else {
	vlSymsp->TOP__Vortex__DOT__VX_frE_to_bckE_req.jal_offset = 0xdeadbeefU;
    }
    // ALWAYS at VX_decode.v:447
    if ((0x4000U & vlTOPp->Vortex__DOT__vx_f_d_reg__DOT__f_d_reg__DOT__value[1U])) {
	if ((0x2000U & vlTOPp->Vortex__DOT__vx_f_d_reg__DOT__f_d_reg__DOT__value[1U])) {
	    if ((0x1000U & vlTOPp->Vortex__DOT__vx_f_d_reg__DOT__f_d_reg__DOT__value[1U])) {
		vlSymsp->TOP__Vortex__DOT__VX_frE_to_bckE_req.jal 
		    = ((~ (vlTOPp->Vortex__DOT__vx_f_d_reg__DOT__f_d_reg__DOT__value[1U] 
			   >> 0xbU)) & ((~ (vlTOPp->Vortex__DOT__vx_f_d_reg__DOT__f_d_reg__DOT__value[1U] 
					    >> 0xaU)) 
					& ((vlTOPp->Vortex__DOT__vx_f_d_reg__DOT__f_d_reg__DOT__value[1U] 
					    >> 9U) 
					   & ((vlTOPp->Vortex__DOT__vx_f_d_reg__DOT__f_d_reg__DOT__value[1U] 
					       >> 8U) 
					      & ((IData)(vlTOPp->Vortex__DOT__vx_decode__DOT__jal_sys_jal) 
						 & vlTOPp->Vortex__DOT__vx_decode__DOT__in_valid
						 [0U])))));
	    } else {
		if ((0x800U & vlTOPp->Vortex__DOT__vx_f_d_reg__DOT__f_d_reg__DOT__value[1U])) {
		    if ((0x400U & vlTOPp->Vortex__DOT__vx_f_d_reg__DOT__f_d_reg__DOT__value[1U])) {
			vlSymsp->TOP__Vortex__DOT__VX_frE_to_bckE_req.jal 
			    = ((vlTOPp->Vortex__DOT__vx_f_d_reg__DOT__f_d_reg__DOT__value[1U] 
				>> 9U) & ((vlTOPp->Vortex__DOT__vx_f_d_reg__DOT__f_d_reg__DOT__value[1U] 
					   >> 8U) & 
					  vlTOPp->Vortex__DOT__vx_decode__DOT__in_valid
					  [0U]));
		    } else {
			if ((0x200U & vlTOPp->Vortex__DOT__vx_f_d_reg__DOT__f_d_reg__DOT__value[1U])) {
			    if ((0x100U & vlTOPp->Vortex__DOT__vx_f_d_reg__DOT__f_d_reg__DOT__value[1U])) {
				if (((IData)(vlTOPp->Vortex__DOT__vx_decode__DOT__is_jalrs) 
				     | (IData)(vlTOPp->Vortex__DOT__vx_decode__DOT__is_jmprt))) {
				    vlSymsp->TOP__Vortex__DOT__VX_frE_to_bckE_req.jal 
					= vlTOPp->Vortex__DOT__vx_decode__DOT__in_valid
					[0U];
				}
			    } else {
				vlSymsp->TOP__Vortex__DOT__VX_frE_to_bckE_req.jal = 0U;
			    }
			} else {
			    vlSymsp->TOP__Vortex__DOT__VX_frE_to_bckE_req.jal = 0U;
			}
		    }
		} else {
		    vlSymsp->TOP__Vortex__DOT__VX_frE_to_bckE_req.jal 
			= ((vlTOPp->Vortex__DOT__vx_f_d_reg__DOT__f_d_reg__DOT__value[1U] 
			    >> 0xaU) & ((vlTOPp->Vortex__DOT__vx_f_d_reg__DOT__f_d_reg__DOT__value[1U] 
					 >> 9U) & (
						   (vlTOPp->Vortex__DOT__vx_f_d_reg__DOT__f_d_reg__DOT__value[1U] 
						    >> 8U) 
						   & vlTOPp->Vortex__DOT__vx_decode__DOT__in_valid
						   [0U])));
		}
	    }
	} else {
	    vlSymsp->TOP__Vortex__DOT__VX_frE_to_bckE_req.jal = 0U;
	}
    } else {
	vlSymsp->TOP__Vortex__DOT__VX_frE_to_bckE_req.jal = 0U;
    }
    // ALWAYS at VX_decode.v:514
    if ((0x4000U & vlTOPp->Vortex__DOT__vx_f_d_reg__DOT__f_d_reg__DOT__value[1U])) {
	if ((0x2000U & vlTOPp->Vortex__DOT__vx_f_d_reg__DOT__f_d_reg__DOT__value[1U])) {
	    if ((0x1000U & vlTOPp->Vortex__DOT__vx_f_d_reg__DOT__f_d_reg__DOT__value[1U])) {
		vlSymsp->TOP__Vortex__DOT__VX_frE_to_bckE_req.branch_type = 0U;
	    } else {
		if ((0x800U & vlTOPp->Vortex__DOT__vx_f_d_reg__DOT__f_d_reg__DOT__value[1U])) {
		    if ((0x400U & vlTOPp->Vortex__DOT__vx_f_d_reg__DOT__f_d_reg__DOT__value[1U])) {
			vlSymsp->TOP__Vortex__DOT__VX_frE_to_bckE_req.branch_type = 0U;
		    } else {
			if ((0x200U & vlTOPp->Vortex__DOT__vx_f_d_reg__DOT__f_d_reg__DOT__value[1U])) {
			    if ((0x100U & vlTOPp->Vortex__DOT__vx_f_d_reg__DOT__f_d_reg__DOT__value[1U])) {
				if (((IData)(vlTOPp->Vortex__DOT__vx_decode__DOT__is_jalrs) 
				     | (IData)(vlTOPp->Vortex__DOT__vx_decode__DOT__is_jmprt))) {
				    vlSymsp->TOP__Vortex__DOT__VX_frE_to_bckE_req.branch_type = 0U;
				}
			    } else {
				vlSymsp->TOP__Vortex__DOT__VX_frE_to_bckE_req.branch_type = 0U;
			    }
			} else {
			    vlSymsp->TOP__Vortex__DOT__VX_frE_to_bckE_req.branch_type = 0U;
			}
		    }
		} else {
		    vlSymsp->TOP__Vortex__DOT__VX_frE_to_bckE_req.branch_type 
			= ((0x400U & vlTOPp->Vortex__DOT__vx_f_d_reg__DOT__f_d_reg__DOT__value[1U])
			    ? 0U : ((0x200U & vlTOPp->Vortex__DOT__vx_f_d_reg__DOT__f_d_reg__DOT__value[1U])
				     ? ((0x100U & vlTOPp->Vortex__DOT__vx_f_d_reg__DOT__f_d_reg__DOT__value[1U])
					 ? ((0x400000U 
					     & vlTOPp->Vortex__DOT__vx_f_d_reg__DOT__f_d_reg__DOT__value[1U])
					     ? ((0x200000U 
						 & vlTOPp->Vortex__DOT__vx_f_d_reg__DOT__f_d_reg__DOT__value[1U])
						 ? 
						((0x100000U 
						  & vlTOPp->Vortex__DOT__vx_f_d_reg__DOT__f_d_reg__DOT__value[1U])
						  ? 6U
						  : 5U)
						 : 
						((0x100000U 
						  & vlTOPp->Vortex__DOT__vx_f_d_reg__DOT__f_d_reg__DOT__value[1U])
						  ? 4U
						  : 3U))
					     : ((0x200000U 
						 & vlTOPp->Vortex__DOT__vx_f_d_reg__DOT__f_d_reg__DOT__value[1U])
						 ? 0U
						 : 
						((0x100000U 
						  & vlTOPp->Vortex__DOT__vx_f_d_reg__DOT__f_d_reg__DOT__value[1U])
						  ? 2U
						  : 1U)))
					 : 0U) : 0U));
		}
	    }
	} else {
	    vlSymsp->TOP__Vortex__DOT__VX_frE_to_bckE_req.branch_type = 0U;
	}
    } else {
	vlSymsp->TOP__Vortex__DOT__VX_frE_to_bckE_req.branch_type = 0U;
    }
    // ALWAYS at VX_decode.v:514
    if ((0x4000U & vlTOPp->Vortex__DOT__vx_f_d_reg__DOT__f_d_reg__DOT__value[1U])) {
	if ((0x2000U & vlTOPp->Vortex__DOT__vx_f_d_reg__DOT__f_d_reg__DOT__value[1U])) {
	    if ((0x1000U & vlTOPp->Vortex__DOT__vx_f_d_reg__DOT__f_d_reg__DOT__value[1U])) {
		vlTOPp->Vortex__DOT__decode_branch_stall = 0U;
	    } else {
		if ((0x800U & vlTOPp->Vortex__DOT__vx_f_d_reg__DOT__f_d_reg__DOT__value[1U])) {
		    if ((0x400U & vlTOPp->Vortex__DOT__vx_f_d_reg__DOT__f_d_reg__DOT__value[1U])) {
			vlTOPp->Vortex__DOT__decode_branch_stall 
			    = ((vlTOPp->Vortex__DOT__vx_f_d_reg__DOT__f_d_reg__DOT__value[1U] 
				>> 9U) & ((vlTOPp->Vortex__DOT__vx_f_d_reg__DOT__f_d_reg__DOT__value[1U] 
					   >> 8U) & 
					  vlTOPp->Vortex__DOT__vx_decode__DOT__in_valid
					  [0U]));
		    } else {
			if ((0x200U & vlTOPp->Vortex__DOT__vx_f_d_reg__DOT__f_d_reg__DOT__value[1U])) {
			    if ((0x100U & vlTOPp->Vortex__DOT__vx_f_d_reg__DOT__f_d_reg__DOT__value[1U])) {
				if (((IData)(vlTOPp->Vortex__DOT__vx_decode__DOT__is_jalrs) 
				     | (IData)(vlTOPp->Vortex__DOT__vx_decode__DOT__is_jmprt))) {
				    vlTOPp->Vortex__DOT__decode_branch_stall 
					= vlTOPp->Vortex__DOT__vx_decode__DOT__in_valid
					[0U];
				}
			    } else {
				vlTOPp->Vortex__DOT__decode_branch_stall = 0U;
			    }
			} else {
			    vlTOPp->Vortex__DOT__decode_branch_stall = 0U;
			}
		    }
		} else {
		    vlTOPp->Vortex__DOT__decode_branch_stall 
			= ((0x400U & vlTOPp->Vortex__DOT__vx_f_d_reg__DOT__f_d_reg__DOT__value[1U])
			    ? ((vlTOPp->Vortex__DOT__vx_f_d_reg__DOT__f_d_reg__DOT__value[1U] 
				>> 9U) & ((vlTOPp->Vortex__DOT__vx_f_d_reg__DOT__f_d_reg__DOT__value[1U] 
					   >> 8U) & 
					  vlTOPp->Vortex__DOT__vx_decode__DOT__in_valid
					  [0U])) : 
			   ((vlTOPp->Vortex__DOT__vx_f_d_reg__DOT__f_d_reg__DOT__value[1U] 
			     >> 9U) & ((vlTOPp->Vortex__DOT__vx_f_d_reg__DOT__f_d_reg__DOT__value[1U] 
					>> 8U) & vlTOPp->Vortex__DOT__vx_decode__DOT__in_valid
				       [0U])));
		}
	    }
	} else {
	    vlTOPp->Vortex__DOT__decode_branch_stall = 0U;
	}
    } else {
	vlTOPp->Vortex__DOT__decode_branch_stall = 0U;
    }
    vlSymsp->TOP__Vortex__DOT__VX_warp_ctl.change_mask 
	= ((IData)(vlTOPp->Vortex__DOT__vx_decode__DOT__is_jalrs) 
	   | (IData)(vlTOPp->Vortex__DOT__vx_decode__DOT__is_jmprt));
    vlTOPp->Vortex__DOT__vx_decode__DOT__genblk2__BRA__1__KET____DOT__real_wspawn 
	= ((IData)(vlTOPp->Vortex__DOT__vx_decode__DOT__is_wspawn) 
	   & (1U == (0xfU & ((IData)(1U) + (IData)(vlTOPp->Vortex__DOT__vx_fetch__DOT__warp_state)))));
    vlTOPp->Vortex__DOT__vx_decode__DOT__genblk2__BRA__2__KET____DOT__real_wspawn 
	= ((IData)(vlTOPp->Vortex__DOT__vx_decode__DOT__is_wspawn) 
	   & (2U == (0xfU & ((IData)(1U) + (IData)(vlTOPp->Vortex__DOT__vx_fetch__DOT__warp_state)))));
    vlTOPp->Vortex__DOT__vx_decode__DOT__genblk2__BRA__3__KET____DOT__real_wspawn 
	= ((IData)(vlTOPp->Vortex__DOT__vx_decode__DOT__is_wspawn) 
	   & (3U == (0xfU & ((IData)(1U) + (IData)(vlTOPp->Vortex__DOT__vx_fetch__DOT__warp_state)))));
    vlTOPp->Vortex__DOT__vx_decode__DOT__genblk2__BRA__4__KET____DOT__real_wspawn 
	= ((IData)(vlTOPp->Vortex__DOT__vx_decode__DOT__is_wspawn) 
	   & (4U == (0xfU & ((IData)(1U) + (IData)(vlTOPp->Vortex__DOT__vx_fetch__DOT__warp_state)))));
    vlTOPp->Vortex__DOT__vx_decode__DOT__genblk2__BRA__5__KET____DOT__real_wspawn 
	= ((IData)(vlTOPp->Vortex__DOT__vx_decode__DOT__is_wspawn) 
	   & (5U == (0xfU & ((IData)(1U) + (IData)(vlTOPp->Vortex__DOT__vx_fetch__DOT__warp_state)))));
    vlTOPp->Vortex__DOT__vx_decode__DOT__genblk2__BRA__6__KET____DOT__real_wspawn 
	= ((IData)(vlTOPp->Vortex__DOT__vx_decode__DOT__is_wspawn) 
	   & (6U == (0xfU & ((IData)(1U) + (IData)(vlTOPp->Vortex__DOT__vx_fetch__DOT__warp_state)))));
    vlTOPp->Vortex__DOT__vx_decode__DOT__genblk2__BRA__7__KET____DOT__real_wspawn 
	= ((IData)(vlTOPp->Vortex__DOT__vx_decode__DOT__is_wspawn) 
	   & (7U == (0xfU & ((IData)(1U) + (IData)(vlTOPp->Vortex__DOT__vx_fetch__DOT__warp_state)))));
    vlTOPp->Vortex__DOT__vx_decode__DOT__real_zero_isclone 
	= ((IData)(vlTOPp->Vortex__DOT__vx_decode__DOT__is_clone) 
	   & (0U == (0xfU & ((vlTOPp->Vortex__DOT__vx_f_d_reg__DOT__f_d_reg__DOT__value[1U] 
			      << 0x1cU) | (vlTOPp->Vortex__DOT__vx_f_d_reg__DOT__f_d_reg__DOT__value[0U] 
					   >> 4U)))));
    vlTOPp->Vortex__DOT__vx_decode__DOT__genblk2__BRA__1__KET____DOT__real_isclone 
	= ((IData)(vlTOPp->Vortex__DOT__vx_decode__DOT__is_clone) 
	   & (1U == (0xfU & ((vlTOPp->Vortex__DOT__vx_f_d_reg__DOT__f_d_reg__DOT__value[1U] 
			      << 0x1cU) | (vlTOPp->Vortex__DOT__vx_f_d_reg__DOT__f_d_reg__DOT__value[0U] 
					   >> 4U)))));
    vlTOPp->Vortex__DOT__vx_decode__DOT__genblk2__BRA__2__KET____DOT__real_isclone 
	= ((IData)(vlTOPp->Vortex__DOT__vx_decode__DOT__is_clone) 
	   & (2U == (0xfU & ((vlTOPp->Vortex__DOT__vx_f_d_reg__DOT__f_d_reg__DOT__value[1U] 
			      << 0x1cU) | (vlTOPp->Vortex__DOT__vx_f_d_reg__DOT__f_d_reg__DOT__value[0U] 
					   >> 4U)))));
    vlTOPp->Vortex__DOT__vx_decode__DOT__genblk2__BRA__3__KET____DOT__real_isclone 
	= ((IData)(vlTOPp->Vortex__DOT__vx_decode__DOT__is_clone) 
	   & (3U == (0xfU & ((vlTOPp->Vortex__DOT__vx_f_d_reg__DOT__f_d_reg__DOT__value[1U] 
			      << 0x1cU) | (vlTOPp->Vortex__DOT__vx_f_d_reg__DOT__f_d_reg__DOT__value[0U] 
					   >> 4U)))));
    vlTOPp->Vortex__DOT__vx_decode__DOT__genblk2__BRA__4__KET____DOT__real_isclone 
	= ((IData)(vlTOPp->Vortex__DOT__vx_decode__DOT__is_clone) 
	   & (4U == (0xfU & ((vlTOPp->Vortex__DOT__vx_f_d_reg__DOT__f_d_reg__DOT__value[1U] 
			      << 0x1cU) | (vlTOPp->Vortex__DOT__vx_f_d_reg__DOT__f_d_reg__DOT__value[0U] 
					   >> 4U)))));
    vlTOPp->Vortex__DOT__vx_decode__DOT__genblk2__BRA__5__KET____DOT__real_isclone 
	= ((IData)(vlTOPp->Vortex__DOT__vx_decode__DOT__is_clone) 
	   & (5U == (0xfU & ((vlTOPp->Vortex__DOT__vx_f_d_reg__DOT__f_d_reg__DOT__value[1U] 
			      << 0x1cU) | (vlTOPp->Vortex__DOT__vx_f_d_reg__DOT__f_d_reg__DOT__value[0U] 
					   >> 4U)))));
    vlTOPp->Vortex__DOT__vx_decode__DOT__genblk2__BRA__6__KET____DOT__real_isclone 
	= ((IData)(vlTOPp->Vortex__DOT__vx_decode__DOT__is_clone) 
	   & (6U == (0xfU & ((vlTOPp->Vortex__DOT__vx_f_d_reg__DOT__f_d_reg__DOT__value[1U] 
			      << 0x1cU) | (vlTOPp->Vortex__DOT__vx_f_d_reg__DOT__f_d_reg__DOT__value[0U] 
					   >> 4U)))));
    vlTOPp->Vortex__DOT__vx_decode__DOT__genblk2__BRA__7__KET____DOT__real_isclone 
	= ((IData)(vlTOPp->Vortex__DOT__vx_decode__DOT__is_clone) 
	   & (7U == (0xfU & ((vlTOPp->Vortex__DOT__vx_f_d_reg__DOT__f_d_reg__DOT__value[1U] 
			      << 0x1cU) | (vlTOPp->Vortex__DOT__vx_f_d_reg__DOT__f_d_reg__DOT__value[0U] 
					   >> 4U)))));
    vlTOPp->out_cache_driver_in_mem_read = (7U & ((
						   vlTOPp->Vortex__DOT__vx_e_m_reg__DOT__f_d_reg__DOT__value[8U] 
						   << 1U) 
						  | (vlTOPp->Vortex__DOT__vx_e_m_reg__DOT__f_d_reg__DOT__value[7U] 
						     >> 0x1fU)));
    vlTOPp->out_cache_driver_in_mem_write = (7U & (
						   (vlTOPp->Vortex__DOT__vx_e_m_reg__DOT__f_d_reg__DOT__value[8U] 
						    << 4U) 
						   | (vlTOPp->Vortex__DOT__vx_e_m_reg__DOT__f_d_reg__DOT__value[7U] 
						      >> 0x1cU)));
    vlTOPp->Vortex__DOT____Vcellout__vx_memory__out_cache_driver_in_address[0U] 
	= ((vlTOPp->Vortex__DOT__vx_e_m_reg__DOT__f_d_reg__DOT__value[9U] 
	    << 0x1eU) | (vlTOPp->Vortex__DOT__vx_e_m_reg__DOT__f_d_reg__DOT__value[8U] 
			 >> 2U));
    vlTOPp->Vortex__DOT____Vcellout__vx_memory__out_cache_driver_in_data[0U] 
	= ((vlTOPp->Vortex__DOT__vx_e_m_reg__DOT__f_d_reg__DOT__value[4U] 
	    << 0x15U) | (vlTOPp->Vortex__DOT__vx_e_m_reg__DOT__f_d_reg__DOT__value[3U] 
			 >> 0xbU));
    vlTOPp->Vortex__DOT____Vcellout__vx_memory__out_cache_driver_in_valid[0U] 
	= (1U & (vlTOPp->Vortex__DOT__vx_e_m_reg__DOT__f_d_reg__DOT__value[0U] 
		 >> 4U));
    vlTOPp->Vortex__DOT____Vcellout__vx_memory__out_cache_driver_in_address[1U] 
	= ((vlTOPp->Vortex__DOT__vx_e_m_reg__DOT__f_d_reg__DOT__value[0xaU] 
	    << 0x1eU) | (vlTOPp->Vortex__DOT__vx_e_m_reg__DOT__f_d_reg__DOT__value[9U] 
			 >> 2U));
    vlTOPp->Vortex__DOT____Vcellout__vx_memory__out_cache_driver_in_data[1U] 
	= ((vlTOPp->Vortex__DOT__vx_e_m_reg__DOT__f_d_reg__DOT__value[5U] 
	    << 0x15U) | (vlTOPp->Vortex__DOT__vx_e_m_reg__DOT__f_d_reg__DOT__value[4U] 
			 >> 0xbU));
    vlTOPp->Vortex__DOT____Vcellout__vx_memory__out_cache_driver_in_valid[1U] 
	= (1U & (vlTOPp->Vortex__DOT__vx_e_m_reg__DOT__f_d_reg__DOT__value[0U] 
		 >> 5U));
    vlTOPp->Vortex__DOT____Vcellout__vx_memory__out_cache_driver_in_address[2U] 
	= ((vlTOPp->Vortex__DOT__vx_e_m_reg__DOT__f_d_reg__DOT__value[0xbU] 
	    << 0x1eU) | (vlTOPp->Vortex__DOT__vx_e_m_reg__DOT__f_d_reg__DOT__value[0xaU] 
			 >> 2U));
    vlTOPp->Vortex__DOT____Vcellout__vx_memory__out_cache_driver_in_data[2U] 
	= ((vlTOPp->Vortex__DOT__vx_e_m_reg__DOT__f_d_reg__DOT__value[6U] 
	    << 0x15U) | (vlTOPp->Vortex__DOT__vx_e_m_reg__DOT__f_d_reg__DOT__value[5U] 
			 >> 0xbU));
    vlTOPp->Vortex__DOT____Vcellout__vx_memory__out_cache_driver_in_valid[2U] 
	= (1U & (vlTOPp->Vortex__DOT__vx_e_m_reg__DOT__f_d_reg__DOT__value[0U] 
		 >> 6U));
    vlTOPp->Vortex__DOT____Vcellout__vx_memory__out_cache_driver_in_address[3U] 
	= ((vlTOPp->Vortex__DOT__vx_e_m_reg__DOT__f_d_reg__DOT__value[0xcU] 
	    << 0x1eU) | (vlTOPp->Vortex__DOT__vx_e_m_reg__DOT__f_d_reg__DOT__value[0xbU] 
			 >> 2U));
    vlTOPp->Vortex__DOT____Vcellout__vx_memory__out_cache_driver_in_data[3U] 
	= ((vlTOPp->Vortex__DOT__vx_e_m_reg__DOT__f_d_reg__DOT__value[7U] 
	    << 0x15U) | (vlTOPp->Vortex__DOT__vx_e_m_reg__DOT__f_d_reg__DOT__value[6U] 
			 >> 0xbU));
    vlTOPp->Vortex__DOT____Vcellout__vx_memory__out_cache_driver_in_valid[3U] 
	= (1U & (vlTOPp->Vortex__DOT__vx_e_m_reg__DOT__f_d_reg__DOT__value[0U] 
		 >> 7U));
    vlTOPp->Vortex__DOT__memory_branch_dest = (((vlTOPp->Vortex__DOT__vx_e_m_reg__DOT__f_d_reg__DOT__value[2U] 
						 << 0x15U) 
						| (vlTOPp->Vortex__DOT__vx_e_m_reg__DOT__f_d_reg__DOT__value[1U] 
						   >> 0xbU)) 
					       + ((
						   vlTOPp->Vortex__DOT__vx_e_m_reg__DOT__f_d_reg__DOT__value[1U] 
						   << 0x16U) 
						  | (0x3ffffeU 
						     & (vlTOPp->Vortex__DOT__vx_e_m_reg__DOT__f_d_reg__DOT__value[0U] 
							>> 0xaU))));
    // ALWAYS at VX_memory.v:56
    vlTOPp->Vortex__DOT__vx_memory__DOT__temp_branch_dir 
	= (1U & ((0x400U & vlTOPp->Vortex__DOT__vx_e_m_reg__DOT__f_d_reg__DOT__value[0U])
		  ? ((0x200U & vlTOPp->Vortex__DOT__vx_e_m_reg__DOT__f_d_reg__DOT__value[0U])
		      ? ((~ (vlTOPp->Vortex__DOT__vx_e_m_reg__DOT__f_d_reg__DOT__value[0U] 
			     >> 8U)) & (~ (vlTOPp->Vortex__DOT__vx_e_m_reg__DOT__f_d_reg__DOT__value[9U] 
					   >> 1U)))
		      : ((0x100U & vlTOPp->Vortex__DOT__vx_e_m_reg__DOT__f_d_reg__DOT__value[0U])
			  ? (vlTOPp->Vortex__DOT__vx_e_m_reg__DOT__f_d_reg__DOT__value[9U] 
			     >> 1U) : (~ (vlTOPp->Vortex__DOT__vx_e_m_reg__DOT__f_d_reg__DOT__value[9U] 
					  >> 1U))))
		  : ((0x200U & vlTOPp->Vortex__DOT__vx_e_m_reg__DOT__f_d_reg__DOT__value[0U])
		      ? ((0x100U & vlTOPp->Vortex__DOT__vx_e_m_reg__DOT__f_d_reg__DOT__value[0U])
			  ? (vlTOPp->Vortex__DOT__vx_e_m_reg__DOT__f_d_reg__DOT__value[9U] 
			     >> 1U) : (0U != ((vlTOPp->Vortex__DOT__vx_e_m_reg__DOT__f_d_reg__DOT__value[9U] 
					       << 0x1eU) 
					      | (vlTOPp->Vortex__DOT__vx_e_m_reg__DOT__f_d_reg__DOT__value[8U] 
						 >> 2U))))
		      : ((vlTOPp->Vortex__DOT__vx_e_m_reg__DOT__f_d_reg__DOT__value[0U] 
			  >> 8U) & (0U == ((vlTOPp->Vortex__DOT__vx_e_m_reg__DOT__f_d_reg__DOT__value[9U] 
					    << 0x1eU) 
					   | (vlTOPp->Vortex__DOT__vx_e_m_reg__DOT__f_d_reg__DOT__value[8U] 
					      >> 2U)))))));
    vlTOPp->Vortex__DOT__vx_forwarding__DOT__src1_mem_fwd 
	= ((((((0x1fU & ((vlTOPp->Vortex__DOT__vx_f_d_reg__DOT__f_d_reg__DOT__value[2U] 
			  << 9U) | (vlTOPp->Vortex__DOT__vx_f_d_reg__DOT__f_d_reg__DOT__value[1U] 
				    >> 0x17U))) == 
	       (0x1fU & ((vlTOPp->Vortex__DOT__vx_e_m_reg__DOT__f_d_reg__DOT__value[8U] 
			  << 9U) | (vlTOPp->Vortex__DOT__vx_e_m_reg__DOT__f_d_reg__DOT__value[7U] 
				    >> 0x17U)))) & 
	      (0U != (0x1fU & ((vlTOPp->Vortex__DOT__vx_f_d_reg__DOT__f_d_reg__DOT__value[2U] 
				<< 9U) | (vlTOPp->Vortex__DOT__vx_f_d_reg__DOT__f_d_reg__DOT__value[1U] 
					  >> 0x17U))))) 
	     & (0U != (3U & ((vlTOPp->Vortex__DOT__vx_e_m_reg__DOT__f_d_reg__DOT__value[8U] 
			      << 0xbU) | (vlTOPp->Vortex__DOT__vx_e_m_reg__DOT__f_d_reg__DOT__value[7U] 
					  >> 0x15U))))) 
	    & (~ (IData)(vlTOPp->Vortex__DOT__vx_forwarding__DOT__src1_exe_fwd))) 
	   & ((0xfU & ((vlTOPp->Vortex__DOT__vx_f_d_reg__DOT__f_d_reg__DOT__value[1U] 
			<< 0x1cU) | (vlTOPp->Vortex__DOT__vx_f_d_reg__DOT__f_d_reg__DOT__value[0U] 
				     >> 4U))) == (0xfU 
						  & vlTOPp->Vortex__DOT__vx_e_m_reg__DOT__f_d_reg__DOT__value[0U])));
    vlTOPp->Vortex__DOT__vx_forwarding__DOT__use_memory_PC_next[0U] 
	= ((vlTOPp->Vortex__DOT__vx_e_m_reg__DOT__f_d_reg__DOT__value[3U] 
	    << 0x15U) | (vlTOPp->Vortex__DOT__vx_e_m_reg__DOT__f_d_reg__DOT__value[2U] 
			 >> 0xbU));
    vlTOPp->Vortex__DOT__vx_forwarding__DOT__use_memory_PC_next[1U] 
	= ((vlTOPp->Vortex__DOT__vx_e_m_reg__DOT__f_d_reg__DOT__value[3U] 
	    << 0x15U) | (vlTOPp->Vortex__DOT__vx_e_m_reg__DOT__f_d_reg__DOT__value[2U] 
			 >> 0xbU));
    vlTOPp->Vortex__DOT__vx_forwarding__DOT__use_memory_PC_next[2U] 
	= ((vlTOPp->Vortex__DOT__vx_e_m_reg__DOT__f_d_reg__DOT__value[3U] 
	    << 0x15U) | (vlTOPp->Vortex__DOT__vx_e_m_reg__DOT__f_d_reg__DOT__value[2U] 
			 >> 0xbU));
    vlTOPp->Vortex__DOT__vx_forwarding__DOT__use_memory_PC_next[3U] 
	= ((vlTOPp->Vortex__DOT__vx_e_m_reg__DOT__f_d_reg__DOT__value[3U] 
	    << 0x15U) | (vlTOPp->Vortex__DOT__vx_e_m_reg__DOT__f_d_reg__DOT__value[2U] 
			 >> 0xbU));
    vlTOPp->Vortex__DOT__vx_forwarding__DOT__src2_mem_fwd 
	= ((((((0x1fU & ((vlTOPp->Vortex__DOT__vx_f_d_reg__DOT__f_d_reg__DOT__value[2U] 
			  << 4U) | (vlTOPp->Vortex__DOT__vx_f_d_reg__DOT__f_d_reg__DOT__value[1U] 
				    >> 0x1cU))) == 
	       (0x1fU & ((vlTOPp->Vortex__DOT__vx_e_m_reg__DOT__f_d_reg__DOT__value[8U] 
			  << 9U) | (vlTOPp->Vortex__DOT__vx_e_m_reg__DOT__f_d_reg__DOT__value[7U] 
				    >> 0x17U)))) & 
	      (0U != (0x1fU & ((vlTOPp->Vortex__DOT__vx_f_d_reg__DOT__f_d_reg__DOT__value[2U] 
				<< 4U) | (vlTOPp->Vortex__DOT__vx_f_d_reg__DOT__f_d_reg__DOT__value[1U] 
					  >> 0x1cU))))) 
	     & (0U != (3U & ((vlTOPp->Vortex__DOT__vx_e_m_reg__DOT__f_d_reg__DOT__value[8U] 
			      << 0xbU) | (vlTOPp->Vortex__DOT__vx_e_m_reg__DOT__f_d_reg__DOT__value[7U] 
					  >> 0x15U))))) 
	    & (~ (IData)(vlTOPp->Vortex__DOT__vx_forwarding__DOT__src2_exe_fwd))) 
	   & ((0xfU & ((vlTOPp->Vortex__DOT__vx_f_d_reg__DOT__f_d_reg__DOT__value[1U] 
			<< 0x1cU) | (vlTOPp->Vortex__DOT__vx_f_d_reg__DOT__f_d_reg__DOT__value[0U] 
				     >> 4U))) == (0xfU 
						  & vlTOPp->Vortex__DOT__vx_e_m_reg__DOT__f_d_reg__DOT__value[0U])));
    vlTOPp->out_ebreak = ((0U == (0xfU & ((vlTOPp->Vortex__DOT__vx_f_d_reg__DOT__f_d_reg__DOT__value[1U] 
					   << 0x1cU) 
					  | (vlTOPp->Vortex__DOT__vx_f_d_reg__DOT__f_d_reg__DOT__value[0U] 
					     >> 4U)))) 
			  & (IData)(vlTOPp->Vortex__DOT__vx_decode__DOT__is_ebreak));
    vlTOPp->Vortex__DOT__vx_decode__DOT__temp_final_alu 
	= ((0x63U == (0x7fU & ((vlTOPp->Vortex__DOT__vx_f_d_reg__DOT__f_d_reg__DOT__value[2U] 
				<< 0x18U) | (vlTOPp->Vortex__DOT__vx_f_d_reg__DOT__f_d_reg__DOT__value[1U] 
					     >> 8U))))
	    ? ((5U > (IData)(vlSymsp->TOP__Vortex__DOT__VX_frE_to_bckE_req.branch_type))
	        ? 1U : 0xaU) : ((0x37U == (0x7fU & 
					   ((vlTOPp->Vortex__DOT__vx_f_d_reg__DOT__f_d_reg__DOT__value[2U] 
					     << 0x18U) 
					    | (vlTOPp->Vortex__DOT__vx_f_d_reg__DOT__f_d_reg__DOT__value[1U] 
					       >> 8U))))
				 ? 0xbU : ((0x17U == 
					    (0x7fU 
					     & ((vlTOPp->Vortex__DOT__vx_f_d_reg__DOT__f_d_reg__DOT__value[2U] 
						 << 0x18U) 
						| (vlTOPp->Vortex__DOT__vx_f_d_reg__DOT__f_d_reg__DOT__value[1U] 
						   >> 8U))))
					    ? 0xcU : 
					   ((IData)(vlTOPp->Vortex__DOT__vx_decode__DOT__is_csr)
					     ? ((1U 
						 == 
						 (3U 
						  & ((vlTOPp->Vortex__DOT__vx_f_d_reg__DOT__f_d_reg__DOT__value[2U] 
						      << 0xcU) 
						     | (vlTOPp->Vortex__DOT__vx_f_d_reg__DOT__f_d_reg__DOT__value[1U] 
							>> 0x14U))))
						 ? 0xdU
						 : 
						((2U 
						  == 
						  (3U 
						   & ((vlTOPp->Vortex__DOT__vx_f_d_reg__DOT__f_d_reg__DOT__value[2U] 
						       << 0xcU) 
						      | (vlTOPp->Vortex__DOT__vx_f_d_reg__DOT__f_d_reg__DOT__value[1U] 
							 >> 0x14U))))
						  ? 0xeU
						  : 0xfU))
					     : (((0x23U 
						  == 
						  (0x7fU 
						   & ((vlTOPp->Vortex__DOT__vx_f_d_reg__DOT__f_d_reg__DOT__value[2U] 
						       << 0x18U) 
						      | (vlTOPp->Vortex__DOT__vx_f_d_reg__DOT__f_d_reg__DOT__value[1U] 
							 >> 8U)))) 
						 | (3U 
						    == 
						    (0x7fU 
						     & ((vlTOPp->Vortex__DOT__vx_f_d_reg__DOT__f_d_reg__DOT__value[2U] 
							 << 0x18U) 
							| (vlTOPp->Vortex__DOT__vx_f_d_reg__DOT__f_d_reg__DOT__value[1U] 
							   >> 8U)))))
						 ? 0U
						 : 
						((0x400000U 
						  & vlTOPp->Vortex__DOT__vx_f_d_reg__DOT__f_d_reg__DOT__value[1U])
						  ? 
						 ((0x200000U 
						   & vlTOPp->Vortex__DOT__vx_f_d_reg__DOT__f_d_reg__DOT__value[1U])
						   ? 
						  ((0x100000U 
						    & vlTOPp->Vortex__DOT__vx_f_d_reg__DOT__f_d_reg__DOT__value[1U])
						    ? 9U
						    : 8U)
						   : 
						  ((0x100000U 
						    & vlTOPp->Vortex__DOT__vx_f_d_reg__DOT__f_d_reg__DOT__value[1U])
						    ? 
						   ((0U 
						     == 
						     (0x7fU 
						      & (vlTOPp->Vortex__DOT__vx_f_d_reg__DOT__f_d_reg__DOT__value[2U] 
							 >> 1U)))
						     ? 6U
						     : 7U)
						    : 5U))
						  : 
						 ((0x200000U 
						   & vlTOPp->Vortex__DOT__vx_f_d_reg__DOT__f_d_reg__DOT__value[1U])
						   ? 
						  ((0x100000U 
						    & vlTOPp->Vortex__DOT__vx_f_d_reg__DOT__f_d_reg__DOT__value[1U])
						    ? 4U
						    : 3U)
						   : 
						  ((0x100000U 
						    & vlTOPp->Vortex__DOT__vx_f_d_reg__DOT__f_d_reg__DOT__value[1U])
						    ? 2U
						    : 
						   ((0x13U 
						     == 
						     (0x7fU 
						      & ((vlTOPp->Vortex__DOT__vx_f_d_reg__DOT__f_d_reg__DOT__value[2U] 
							  << 0x18U) 
							 | (vlTOPp->Vortex__DOT__vx_f_d_reg__DOT__f_d_reg__DOT__value[1U] 
							    >> 8U))))
						     ? 0U
						     : 
						    ((0U 
						      == 
						      (0x7fU 
						       & (vlTOPp->Vortex__DOT__vx_f_d_reg__DOT__f_d_reg__DOT__value[2U] 
							  >> 1U)))
						      ? 0U
						      : 1U))))))))));
    vlTOPp->Vortex__DOT__vx_fetch__DOT__genblk2__BRA__0__KET____DOT__warp_zero_change_mask 
	= ((IData)(vlSymsp->TOP__Vortex__DOT__VX_warp_ctl.change_mask) 
	   & (0U == (0xfU & ((vlTOPp->Vortex__DOT__vx_f_d_reg__DOT__f_d_reg__DOT__value[1U] 
			      << 0x1cU) | (vlTOPp->Vortex__DOT__vx_f_d_reg__DOT__f_d_reg__DOT__value[0U] 
					   >> 4U)))));
    vlTOPp->Vortex__DOT__vx_fetch__DOT__genblk2__BRA__1__KET____DOT__warp_zero_change_mask 
	= ((IData)(vlSymsp->TOP__Vortex__DOT__VX_warp_ctl.change_mask) 
	   & (1U == (0xfU & ((vlTOPp->Vortex__DOT__vx_f_d_reg__DOT__f_d_reg__DOT__value[1U] 
			      << 0x1cU) | (vlTOPp->Vortex__DOT__vx_f_d_reg__DOT__f_d_reg__DOT__value[0U] 
					   >> 4U)))));
    vlTOPp->Vortex__DOT__vx_fetch__DOT__genblk2__BRA__2__KET____DOT__warp_zero_change_mask 
	= ((IData)(vlSymsp->TOP__Vortex__DOT__VX_warp_ctl.change_mask) 
	   & (2U == (0xfU & ((vlTOPp->Vortex__DOT__vx_f_d_reg__DOT__f_d_reg__DOT__value[1U] 
			      << 0x1cU) | (vlTOPp->Vortex__DOT__vx_f_d_reg__DOT__f_d_reg__DOT__value[0U] 
					   >> 4U)))));
    vlTOPp->Vortex__DOT__vx_fetch__DOT__genblk2__BRA__3__KET____DOT__warp_zero_change_mask 
	= ((IData)(vlSymsp->TOP__Vortex__DOT__VX_warp_ctl.change_mask) 
	   & (3U == (0xfU & ((vlTOPp->Vortex__DOT__vx_f_d_reg__DOT__f_d_reg__DOT__value[1U] 
			      << 0x1cU) | (vlTOPp->Vortex__DOT__vx_f_d_reg__DOT__f_d_reg__DOT__value[0U] 
					   >> 4U)))));
    vlTOPp->Vortex__DOT__vx_fetch__DOT__genblk2__BRA__4__KET____DOT__warp_zero_change_mask 
	= ((IData)(vlSymsp->TOP__Vortex__DOT__VX_warp_ctl.change_mask) 
	   & (4U == (0xfU & ((vlTOPp->Vortex__DOT__vx_f_d_reg__DOT__f_d_reg__DOT__value[1U] 
			      << 0x1cU) | (vlTOPp->Vortex__DOT__vx_f_d_reg__DOT__f_d_reg__DOT__value[0U] 
					   >> 4U)))));
    vlTOPp->Vortex__DOT__vx_fetch__DOT__genblk2__BRA__5__KET____DOT__warp_zero_change_mask 
	= ((IData)(vlSymsp->TOP__Vortex__DOT__VX_warp_ctl.change_mask) 
	   & (5U == (0xfU & ((vlTOPp->Vortex__DOT__vx_f_d_reg__DOT__f_d_reg__DOT__value[1U] 
			      << 0x1cU) | (vlTOPp->Vortex__DOT__vx_f_d_reg__DOT__f_d_reg__DOT__value[0U] 
					   >> 4U)))));
    vlTOPp->Vortex__DOT__vx_fetch__DOT__genblk2__BRA__6__KET____DOT__warp_zero_change_mask 
	= ((IData)(vlSymsp->TOP__Vortex__DOT__VX_warp_ctl.change_mask) 
	   & (6U == (0xfU & ((vlTOPp->Vortex__DOT__vx_f_d_reg__DOT__f_d_reg__DOT__value[1U] 
			      << 0x1cU) | (vlTOPp->Vortex__DOT__vx_f_d_reg__DOT__f_d_reg__DOT__value[0U] 
					   >> 4U)))));
    vlTOPp->Vortex__DOT__vx_fetch__DOT__genblk2__BRA__7__KET____DOT__warp_zero_change_mask 
	= ((IData)(vlSymsp->TOP__Vortex__DOT__VX_warp_ctl.change_mask) 
	   & (7U == (0xfU & ((vlTOPp->Vortex__DOT__vx_f_d_reg__DOT__f_d_reg__DOT__value[1U] 
			      << 0x1cU) | (vlTOPp->Vortex__DOT__vx_f_d_reg__DOT__f_d_reg__DOT__value[0U] 
					   >> 4U)))));
    vlTOPp->Vortex__DOT__vx_decode__DOT__glob_clone_stall 
	= ((0xfeU & (IData)(vlTOPp->Vortex__DOT__vx_decode__DOT__glob_clone_stall)) 
	   | (((0U == (IData)(vlTOPp->Vortex__DOT__vx_decode__DOT__VX_Context_zero__DOT__state_stall)) 
	       | (1U != (IData)(vlTOPp->Vortex__DOT__vx_decode__DOT__VX_Context_zero__DOT__state_stall))) 
	      & (IData)(vlTOPp->Vortex__DOT__vx_decode__DOT__real_zero_isclone)));
    vlTOPp->Vortex__DOT__vx_decode__DOT__glob_clone_stall 
	= ((0xfdU & (IData)(vlTOPp->Vortex__DOT__vx_decode__DOT__glob_clone_stall)) 
	   | (((((0U == (IData)(vlSymsp->TOP__Vortex__DOT__vx_decode__DOT__genblk2__BRA__1__KET____DOT__VX_Context_one.__PVT__clone_state_stall)) 
		 | (1U != (IData)(vlSymsp->TOP__Vortex__DOT__vx_decode__DOT__genblk2__BRA__1__KET____DOT__VX_Context_one.__PVT__clone_state_stall))) 
		& (IData)(vlTOPp->Vortex__DOT__vx_decode__DOT__genblk2__BRA__1__KET____DOT__real_isclone)) 
	       | (((0U == (IData)(vlSymsp->TOP__Vortex__DOT__vx_decode__DOT__genblk2__BRA__1__KET____DOT__VX_Context_one.__PVT__wspawn_state_stall)) 
		   & (IData)(vlTOPp->Vortex__DOT__vx_decode__DOT__genblk2__BRA__1__KET____DOT__real_wspawn)) 
		  | (1U < (IData)(vlSymsp->TOP__Vortex__DOT__vx_decode__DOT__genblk2__BRA__1__KET____DOT__VX_Context_one.__PVT__wspawn_state_stall)))) 
	      << 1U));
    vlTOPp->Vortex__DOT__vx_decode__DOT__glob_clone_stall 
	= ((0xfbU & (IData)(vlTOPp->Vortex__DOT__vx_decode__DOT__glob_clone_stall)) 
	   | (((((0U == (IData)(vlSymsp->TOP__Vortex__DOT__vx_decode__DOT__genblk2__BRA__2__KET____DOT__VX_Context_one.__PVT__clone_state_stall)) 
		 | (1U != (IData)(vlSymsp->TOP__Vortex__DOT__vx_decode__DOT__genblk2__BRA__2__KET____DOT__VX_Context_one.__PVT__clone_state_stall))) 
		& (IData)(vlTOPp->Vortex__DOT__vx_decode__DOT__genblk2__BRA__2__KET____DOT__real_isclone)) 
	       | (((0U == (IData)(vlSymsp->TOP__Vortex__DOT__vx_decode__DOT__genblk2__BRA__2__KET____DOT__VX_Context_one.__PVT__wspawn_state_stall)) 
		   & (IData)(vlTOPp->Vortex__DOT__vx_decode__DOT__genblk2__BRA__2__KET____DOT__real_wspawn)) 
		  | (1U < (IData)(vlSymsp->TOP__Vortex__DOT__vx_decode__DOT__genblk2__BRA__2__KET____DOT__VX_Context_one.__PVT__wspawn_state_stall)))) 
	      << 2U));
    vlTOPp->Vortex__DOT__vx_decode__DOT__glob_clone_stall 
	= ((0xf7U & (IData)(vlTOPp->Vortex__DOT__vx_decode__DOT__glob_clone_stall)) 
	   | (((((0U == (IData)(vlSymsp->TOP__Vortex__DOT__vx_decode__DOT__genblk2__BRA__3__KET____DOT__VX_Context_one.__PVT__clone_state_stall)) 
		 | (1U != (IData)(vlSymsp->TOP__Vortex__DOT__vx_decode__DOT__genblk2__BRA__3__KET____DOT__VX_Context_one.__PVT__clone_state_stall))) 
		& (IData)(vlTOPp->Vortex__DOT__vx_decode__DOT__genblk2__BRA__3__KET____DOT__real_isclone)) 
	       | (((0U == (IData)(vlSymsp->TOP__Vortex__DOT__vx_decode__DOT__genblk2__BRA__3__KET____DOT__VX_Context_one.__PVT__wspawn_state_stall)) 
		   & (IData)(vlTOPp->Vortex__DOT__vx_decode__DOT__genblk2__BRA__3__KET____DOT__real_wspawn)) 
		  | (1U < (IData)(vlSymsp->TOP__Vortex__DOT__vx_decode__DOT__genblk2__BRA__3__KET____DOT__VX_Context_one.__PVT__wspawn_state_stall)))) 
	      << 3U));
    vlTOPp->Vortex__DOT__vx_decode__DOT__glob_clone_stall 
	= ((0xefU & (IData)(vlTOPp->Vortex__DOT__vx_decode__DOT__glob_clone_stall)) 
	   | (((((0U == (IData)(vlSymsp->TOP__Vortex__DOT__vx_decode__DOT__genblk2__BRA__4__KET____DOT__VX_Context_one.__PVT__clone_state_stall)) 
		 | (1U != (IData)(vlSymsp->TOP__Vortex__DOT__vx_decode__DOT__genblk2__BRA__4__KET____DOT__VX_Context_one.__PVT__clone_state_stall))) 
		& (IData)(vlTOPp->Vortex__DOT__vx_decode__DOT__genblk2__BRA__4__KET____DOT__real_isclone)) 
	       | (((0U == (IData)(vlSymsp->TOP__Vortex__DOT__vx_decode__DOT__genblk2__BRA__4__KET____DOT__VX_Context_one.__PVT__wspawn_state_stall)) 
		   & (IData)(vlTOPp->Vortex__DOT__vx_decode__DOT__genblk2__BRA__4__KET____DOT__real_wspawn)) 
		  | (1U < (IData)(vlSymsp->TOP__Vortex__DOT__vx_decode__DOT__genblk2__BRA__4__KET____DOT__VX_Context_one.__PVT__wspawn_state_stall)))) 
	      << 4U));
    vlTOPp->Vortex__DOT__vx_decode__DOT__glob_clone_stall 
	= ((0xdfU & (IData)(vlTOPp->Vortex__DOT__vx_decode__DOT__glob_clone_stall)) 
	   | (((((0U == (IData)(vlSymsp->TOP__Vortex__DOT__vx_decode__DOT__genblk2__BRA__5__KET____DOT__VX_Context_one.__PVT__clone_state_stall)) 
		 | (1U != (IData)(vlSymsp->TOP__Vortex__DOT__vx_decode__DOT__genblk2__BRA__5__KET____DOT__VX_Context_one.__PVT__clone_state_stall))) 
		& (IData)(vlTOPp->Vortex__DOT__vx_decode__DOT__genblk2__BRA__5__KET____DOT__real_isclone)) 
	       | (((0U == (IData)(vlSymsp->TOP__Vortex__DOT__vx_decode__DOT__genblk2__BRA__5__KET____DOT__VX_Context_one.__PVT__wspawn_state_stall)) 
		   & (IData)(vlTOPp->Vortex__DOT__vx_decode__DOT__genblk2__BRA__5__KET____DOT__real_wspawn)) 
		  | (1U < (IData)(vlSymsp->TOP__Vortex__DOT__vx_decode__DOT__genblk2__BRA__5__KET____DOT__VX_Context_one.__PVT__wspawn_state_stall)))) 
	      << 5U));
    vlTOPp->Vortex__DOT__vx_decode__DOT__glob_clone_stall 
	= ((0xbfU & (IData)(vlTOPp->Vortex__DOT__vx_decode__DOT__glob_clone_stall)) 
	   | (((((0U == (IData)(vlSymsp->TOP__Vortex__DOT__vx_decode__DOT__genblk2__BRA__6__KET____DOT__VX_Context_one.__PVT__clone_state_stall)) 
		 | (1U != (IData)(vlSymsp->TOP__Vortex__DOT__vx_decode__DOT__genblk2__BRA__6__KET____DOT__VX_Context_one.__PVT__clone_state_stall))) 
		& (IData)(vlTOPp->Vortex__DOT__vx_decode__DOT__genblk2__BRA__6__KET____DOT__real_isclone)) 
	       | (((0U == (IData)(vlSymsp->TOP__Vortex__DOT__vx_decode__DOT__genblk2__BRA__6__KET____DOT__VX_Context_one.__PVT__wspawn_state_stall)) 
		   & (IData)(vlTOPp->Vortex__DOT__vx_decode__DOT__genblk2__BRA__6__KET____DOT__real_wspawn)) 
		  | (1U < (IData)(vlSymsp->TOP__Vortex__DOT__vx_decode__DOT__genblk2__BRA__6__KET____DOT__VX_Context_one.__PVT__wspawn_state_stall)))) 
	      << 6U));
    vlTOPp->Vortex__DOT__vx_decode__DOT__glob_clone_stall 
	= ((0x7fU & (IData)(vlTOPp->Vortex__DOT__vx_decode__DOT__glob_clone_stall)) 
	   | (((((0U == (IData)(vlSymsp->TOP__Vortex__DOT__vx_decode__DOT__genblk2__BRA__7__KET____DOT__VX_Context_one.__PVT__clone_state_stall)) 
		 | (1U != (IData)(vlSymsp->TOP__Vortex__DOT__vx_decode__DOT__genblk2__BRA__7__KET____DOT__VX_Context_one.__PVT__clone_state_stall))) 
		& (IData)(vlTOPp->Vortex__DOT__vx_decode__DOT__genblk2__BRA__7__KET____DOT__real_isclone)) 
	       | (((0U == (IData)(vlSymsp->TOP__Vortex__DOT__vx_decode__DOT__genblk2__BRA__7__KET____DOT__VX_Context_one.__PVT__wspawn_state_stall)) 
		   & (IData)(vlTOPp->Vortex__DOT__vx_decode__DOT__genblk2__BRA__7__KET____DOT__real_wspawn)) 
		  | (1U < (IData)(vlSymsp->TOP__Vortex__DOT__vx_decode__DOT__genblk2__BRA__7__KET____DOT__VX_Context_one.__PVT__wspawn_state_stall)))) 
	      << 7U));
    vlTOPp->out_cache_driver_in_address[3U] = vlTOPp->Vortex__DOT____Vcellout__vx_memory__out_cache_driver_in_address
	[3U];
    vlTOPp->out_cache_driver_in_address[2U] = vlTOPp->Vortex__DOT____Vcellout__vx_memory__out_cache_driver_in_address
	[2U];
    vlTOPp->out_cache_driver_in_address[1U] = vlTOPp->Vortex__DOT____Vcellout__vx_memory__out_cache_driver_in_address
	[1U];
    vlTOPp->out_cache_driver_in_address[0U] = vlTOPp->Vortex__DOT____Vcellout__vx_memory__out_cache_driver_in_address
	[0U];
    vlTOPp->out_cache_driver_in_data[3U] = vlTOPp->Vortex__DOT____Vcellout__vx_memory__out_cache_driver_in_data
	[3U];
    vlTOPp->out_cache_driver_in_data[2U] = vlTOPp->Vortex__DOT____Vcellout__vx_memory__out_cache_driver_in_data
	[2U];
    vlTOPp->out_cache_driver_in_data[1U] = vlTOPp->Vortex__DOT____Vcellout__vx_memory__out_cache_driver_in_data
	[1U];
    vlTOPp->out_cache_driver_in_data[0U] = vlTOPp->Vortex__DOT____Vcellout__vx_memory__out_cache_driver_in_data
	[0U];
    vlTOPp->out_cache_driver_in_valid[3U] = vlTOPp->Vortex__DOT____Vcellout__vx_memory__out_cache_driver_in_valid
	[3U];
    vlTOPp->out_cache_driver_in_valid[2U] = vlTOPp->Vortex__DOT____Vcellout__vx_memory__out_cache_driver_in_valid
	[2U];
    vlTOPp->out_cache_driver_in_valid[1U] = vlTOPp->Vortex__DOT____Vcellout__vx_memory__out_cache_driver_in_valid
	[1U];
    vlTOPp->out_cache_driver_in_valid[0U] = vlTOPp->Vortex__DOT____Vcellout__vx_memory__out_cache_driver_in_valid
	[0U];
    // ALWAYS at VX_warp.v:57
    vlTOPp->Vortex__DOT__vx_fetch__DOT__genblk2__BRA__0__KET____DOT__VX_Warp__DOT__temp_PC 
	= (((vlTOPp->Vortex__DOT__vx_e_m_reg__DOT__f_d_reg__DOT__value[0x15U] 
	     >> 2U) & (0U == (0xfU & vlTOPp->Vortex__DOT__vx_e_m_reg__DOT__f_d_reg__DOT__value[0U])))
	    ? ((vlTOPp->Vortex__DOT__vx_e_m_reg__DOT__f_d_reg__DOT__value[0x15U] 
		<< 0x1eU) | (vlTOPp->Vortex__DOT__vx_e_m_reg__DOT__f_d_reg__DOT__value[0x14U] 
			     >> 2U)) : (((IData)(vlTOPp->Vortex__DOT__vx_memory__DOT__temp_branch_dir) 
					 & (0U == (0xfU 
						   & vlTOPp->Vortex__DOT__vx_e_m_reg__DOT__f_d_reg__DOT__value[0U])))
					 ? vlTOPp->Vortex__DOT__memory_branch_dest
					 : vlTOPp->Vortex__DOT__vx_fetch__DOT__genblk2__BRA__0__KET____DOT__VX_Warp__DOT__real_PC));
    // ALWAYS at VX_warp.v:57
    vlTOPp->Vortex__DOT__vx_fetch__DOT__genblk2__BRA__1__KET____DOT__VX_Warp__DOT__temp_PC 
	= (((vlTOPp->Vortex__DOT__vx_e_m_reg__DOT__f_d_reg__DOT__value[0x15U] 
	     >> 2U) & (1U == (0xfU & vlTOPp->Vortex__DOT__vx_e_m_reg__DOT__f_d_reg__DOT__value[0U])))
	    ? ((vlTOPp->Vortex__DOT__vx_e_m_reg__DOT__f_d_reg__DOT__value[0x15U] 
		<< 0x1eU) | (vlTOPp->Vortex__DOT__vx_e_m_reg__DOT__f_d_reg__DOT__value[0x14U] 
			     >> 2U)) : (((IData)(vlTOPp->Vortex__DOT__vx_memory__DOT__temp_branch_dir) 
					 & (1U == (0xfU 
						   & vlTOPp->Vortex__DOT__vx_e_m_reg__DOT__f_d_reg__DOT__value[0U])))
					 ? vlTOPp->Vortex__DOT__memory_branch_dest
					 : vlTOPp->Vortex__DOT__vx_fetch__DOT__genblk2__BRA__1__KET____DOT__VX_Warp__DOT__real_PC));
    // ALWAYS at VX_warp.v:57
    vlTOPp->Vortex__DOT__vx_fetch__DOT__genblk2__BRA__2__KET____DOT__VX_Warp__DOT__temp_PC 
	= (((vlTOPp->Vortex__DOT__vx_e_m_reg__DOT__f_d_reg__DOT__value[0x15U] 
	     >> 2U) & (2U == (0xfU & vlTOPp->Vortex__DOT__vx_e_m_reg__DOT__f_d_reg__DOT__value[0U])))
	    ? ((vlTOPp->Vortex__DOT__vx_e_m_reg__DOT__f_d_reg__DOT__value[0x15U] 
		<< 0x1eU) | (vlTOPp->Vortex__DOT__vx_e_m_reg__DOT__f_d_reg__DOT__value[0x14U] 
			     >> 2U)) : (((IData)(vlTOPp->Vortex__DOT__vx_memory__DOT__temp_branch_dir) 
					 & (2U == (0xfU 
						   & vlTOPp->Vortex__DOT__vx_e_m_reg__DOT__f_d_reg__DOT__value[0U])))
					 ? vlTOPp->Vortex__DOT__memory_branch_dest
					 : vlTOPp->Vortex__DOT__vx_fetch__DOT__genblk2__BRA__2__KET____DOT__VX_Warp__DOT__real_PC));
    // ALWAYS at VX_warp.v:57
    vlTOPp->Vortex__DOT__vx_fetch__DOT__genblk2__BRA__3__KET____DOT__VX_Warp__DOT__temp_PC 
	= (((vlTOPp->Vortex__DOT__vx_e_m_reg__DOT__f_d_reg__DOT__value[0x15U] 
	     >> 2U) & (3U == (0xfU & vlTOPp->Vortex__DOT__vx_e_m_reg__DOT__f_d_reg__DOT__value[0U])))
	    ? ((vlTOPp->Vortex__DOT__vx_e_m_reg__DOT__f_d_reg__DOT__value[0x15U] 
		<< 0x1eU) | (vlTOPp->Vortex__DOT__vx_e_m_reg__DOT__f_d_reg__DOT__value[0x14U] 
			     >> 2U)) : (((IData)(vlTOPp->Vortex__DOT__vx_memory__DOT__temp_branch_dir) 
					 & (3U == (0xfU 
						   & vlTOPp->Vortex__DOT__vx_e_m_reg__DOT__f_d_reg__DOT__value[0U])))
					 ? vlTOPp->Vortex__DOT__memory_branch_dest
					 : vlTOPp->Vortex__DOT__vx_fetch__DOT__genblk2__BRA__3__KET____DOT__VX_Warp__DOT__real_PC));
    // ALWAYS at VX_warp.v:57
    vlTOPp->Vortex__DOT__vx_fetch__DOT__genblk2__BRA__4__KET____DOT__VX_Warp__DOT__temp_PC 
	= (((vlTOPp->Vortex__DOT__vx_e_m_reg__DOT__f_d_reg__DOT__value[0x15U] 
	     >> 2U) & (4U == (0xfU & vlTOPp->Vortex__DOT__vx_e_m_reg__DOT__f_d_reg__DOT__value[0U])))
	    ? ((vlTOPp->Vortex__DOT__vx_e_m_reg__DOT__f_d_reg__DOT__value[0x15U] 
		<< 0x1eU) | (vlTOPp->Vortex__DOT__vx_e_m_reg__DOT__f_d_reg__DOT__value[0x14U] 
			     >> 2U)) : (((IData)(vlTOPp->Vortex__DOT__vx_memory__DOT__temp_branch_dir) 
					 & (4U == (0xfU 
						   & vlTOPp->Vortex__DOT__vx_e_m_reg__DOT__f_d_reg__DOT__value[0U])))
					 ? vlTOPp->Vortex__DOT__memory_branch_dest
					 : vlTOPp->Vortex__DOT__vx_fetch__DOT__genblk2__BRA__4__KET____DOT__VX_Warp__DOT__real_PC));
    // ALWAYS at VX_warp.v:57
    vlTOPp->Vortex__DOT__vx_fetch__DOT__genblk2__BRA__5__KET____DOT__VX_Warp__DOT__temp_PC 
	= (((vlTOPp->Vortex__DOT__vx_e_m_reg__DOT__f_d_reg__DOT__value[0x15U] 
	     >> 2U) & (5U == (0xfU & vlTOPp->Vortex__DOT__vx_e_m_reg__DOT__f_d_reg__DOT__value[0U])))
	    ? ((vlTOPp->Vortex__DOT__vx_e_m_reg__DOT__f_d_reg__DOT__value[0x15U] 
		<< 0x1eU) | (vlTOPp->Vortex__DOT__vx_e_m_reg__DOT__f_d_reg__DOT__value[0x14U] 
			     >> 2U)) : (((IData)(vlTOPp->Vortex__DOT__vx_memory__DOT__temp_branch_dir) 
					 & (5U == (0xfU 
						   & vlTOPp->Vortex__DOT__vx_e_m_reg__DOT__f_d_reg__DOT__value[0U])))
					 ? vlTOPp->Vortex__DOT__memory_branch_dest
					 : vlTOPp->Vortex__DOT__vx_fetch__DOT__genblk2__BRA__5__KET____DOT__VX_Warp__DOT__real_PC));
    // ALWAYS at VX_warp.v:57
    vlTOPp->Vortex__DOT__vx_fetch__DOT__genblk2__BRA__6__KET____DOT__VX_Warp__DOT__temp_PC 
	= (((vlTOPp->Vortex__DOT__vx_e_m_reg__DOT__f_d_reg__DOT__value[0x15U] 
	     >> 2U) & (6U == (0xfU & vlTOPp->Vortex__DOT__vx_e_m_reg__DOT__f_d_reg__DOT__value[0U])))
	    ? ((vlTOPp->Vortex__DOT__vx_e_m_reg__DOT__f_d_reg__DOT__value[0x15U] 
		<< 0x1eU) | (vlTOPp->Vortex__DOT__vx_e_m_reg__DOT__f_d_reg__DOT__value[0x14U] 
			     >> 2U)) : (((IData)(vlTOPp->Vortex__DOT__vx_memory__DOT__temp_branch_dir) 
					 & (6U == (0xfU 
						   & vlTOPp->Vortex__DOT__vx_e_m_reg__DOT__f_d_reg__DOT__value[0U])))
					 ? vlTOPp->Vortex__DOT__memory_branch_dest
					 : vlTOPp->Vortex__DOT__vx_fetch__DOT__genblk2__BRA__6__KET____DOT__VX_Warp__DOT__real_PC));
    // ALWAYS at VX_warp.v:57
    vlTOPp->Vortex__DOT__vx_fetch__DOT__genblk2__BRA__7__KET____DOT__VX_Warp__DOT__temp_PC 
	= (((vlTOPp->Vortex__DOT__vx_e_m_reg__DOT__f_d_reg__DOT__value[0x15U] 
	     >> 2U) & (7U == (0xfU & vlTOPp->Vortex__DOT__vx_e_m_reg__DOT__f_d_reg__DOT__value[0U])))
	    ? ((vlTOPp->Vortex__DOT__vx_e_m_reg__DOT__f_d_reg__DOT__value[0x15U] 
		<< 0x1eU) | (vlTOPp->Vortex__DOT__vx_e_m_reg__DOT__f_d_reg__DOT__value[0x14U] 
			     >> 2U)) : (((IData)(vlTOPp->Vortex__DOT__vx_memory__DOT__temp_branch_dir) 
					 & (7U == (0xfU 
						   & vlTOPp->Vortex__DOT__vx_e_m_reg__DOT__f_d_reg__DOT__value[0U])))
					 ? vlTOPp->Vortex__DOT__memory_branch_dest
					 : vlTOPp->Vortex__DOT__vx_fetch__DOT__genblk2__BRA__7__KET____DOT__VX_Warp__DOT__real_PC));
    vlTOPp->Vortex__DOT__vx_forwarding__DOT__src1_wb_fwd 
	= (((((((0x1fU & ((vlTOPp->Vortex__DOT__vx_f_d_reg__DOT__f_d_reg__DOT__value[2U] 
			   << 9U) | (vlTOPp->Vortex__DOT__vx_f_d_reg__DOT__f_d_reg__DOT__value[1U] 
				     >> 0x17U))) == 
		(0x1fU & ((vlTOPp->Vortex__DOT__vx_m_w_reg__DOT__m_w_reg__DOT__value[2U] 
			   << 0xcU) | (vlTOPp->Vortex__DOT__vx_m_w_reg__DOT__m_w_reg__DOT__value[1U] 
				       >> 0x14U)))) 
	       & (0U != (0x1fU & ((vlTOPp->Vortex__DOT__vx_f_d_reg__DOT__f_d_reg__DOT__value[2U] 
				   << 9U) | (vlTOPp->Vortex__DOT__vx_f_d_reg__DOT__f_d_reg__DOT__value[1U] 
					     >> 0x17U))))) 
	      & (0U != (3U & ((vlTOPp->Vortex__DOT__vx_m_w_reg__DOT__m_w_reg__DOT__value[2U] 
			       << 0xeU) | (vlTOPp->Vortex__DOT__vx_m_w_reg__DOT__m_w_reg__DOT__value[1U] 
					   >> 0x12U))))) 
	     & ((0xfU & vlTOPp->Vortex__DOT__vx_m_w_reg__DOT__m_w_reg__DOT__value[0U]) 
		== (0xfU & ((vlTOPp->Vortex__DOT__vx_f_d_reg__DOT__f_d_reg__DOT__value[1U] 
			     << 0x1cU) | (vlTOPp->Vortex__DOT__vx_f_d_reg__DOT__f_d_reg__DOT__value[0U] 
					  >> 4U))))) 
	    & (~ (IData)(vlTOPp->Vortex__DOT__vx_forwarding__DOT__src1_exe_fwd))) 
	   & (~ (IData)(vlTOPp->Vortex__DOT__vx_forwarding__DOT__src1_mem_fwd)));
    vlTOPp->Vortex__DOT__forwarding_fwd_stall = ((((IData)(vlTOPp->Vortex__DOT__vx_forwarding__DOT__src1_exe_fwd) 
						   | (IData)(vlTOPp->Vortex__DOT__vx_forwarding__DOT__src2_exe_fwd)) 
						  & (2U 
						     == (IData)(vlSymsp->TOP__Vortex__DOT__VX_exe_mem_req.wb))) 
						 | (((IData)(vlTOPp->Vortex__DOT__vx_forwarding__DOT__src1_mem_fwd) 
						     | (IData)(vlTOPp->Vortex__DOT__vx_forwarding__DOT__src2_mem_fwd)) 
						    & (2U 
						       == 
						       (3U 
							& ((vlTOPp->Vortex__DOT__vx_e_m_reg__DOT__f_d_reg__DOT__value[8U] 
							    << 0xbU) 
							   | (vlTOPp->Vortex__DOT__vx_e_m_reg__DOT__f_d_reg__DOT__value[7U] 
							      >> 0x15U))))));
    vlTOPp->Vortex__DOT__vx_forwarding__DOT__src2_wb_fwd 
	= (((((((0x1fU & ((vlTOPp->Vortex__DOT__vx_f_d_reg__DOT__f_d_reg__DOT__value[2U] 
			   << 4U) | (vlTOPp->Vortex__DOT__vx_f_d_reg__DOT__f_d_reg__DOT__value[1U] 
				     >> 0x1cU))) == 
		(0x1fU & ((vlTOPp->Vortex__DOT__vx_m_w_reg__DOT__m_w_reg__DOT__value[2U] 
			   << 0xcU) | (vlTOPp->Vortex__DOT__vx_m_w_reg__DOT__m_w_reg__DOT__value[1U] 
				       >> 0x14U)))) 
	       & (0U != (0x1fU & ((vlTOPp->Vortex__DOT__vx_f_d_reg__DOT__f_d_reg__DOT__value[2U] 
				   << 4U) | (vlTOPp->Vortex__DOT__vx_f_d_reg__DOT__f_d_reg__DOT__value[1U] 
					     >> 0x1cU))))) 
	      & (0U != (3U & ((vlTOPp->Vortex__DOT__vx_m_w_reg__DOT__m_w_reg__DOT__value[2U] 
			       << 0xeU) | (vlTOPp->Vortex__DOT__vx_m_w_reg__DOT__m_w_reg__DOT__value[1U] 
					   >> 0x12U))))) 
	     & (~ (IData)(vlTOPp->Vortex__DOT__vx_forwarding__DOT__src2_exe_fwd))) 
	    & (~ (IData)(vlTOPp->Vortex__DOT__vx_forwarding__DOT__src2_mem_fwd))) 
	   & ((0xfU & vlTOPp->Vortex__DOT__vx_m_w_reg__DOT__m_w_reg__DOT__value[0U]) 
	      == (0xfU & ((vlTOPp->Vortex__DOT__vx_f_d_reg__DOT__f_d_reg__DOT__value[1U] 
			   << 0x1cU) | (vlTOPp->Vortex__DOT__vx_f_d_reg__DOT__f_d_reg__DOT__value[0U] 
					>> 4U)))));
    // ALWAYS at VX_decode.v:271
    vlTOPp->Vortex__DOT__vx_decode__DOT__temp_out_clone_stall 
	= (1U & (IData)(vlTOPp->Vortex__DOT__vx_decode__DOT__glob_clone_stall));
    vlTOPp->Vortex__DOT__vx_decode__DOT__temp_out_clone_stall 
	= (1U & ((IData)(vlTOPp->Vortex__DOT__vx_decode__DOT__temp_out_clone_stall) 
		 | ((IData)(vlTOPp->Vortex__DOT__vx_decode__DOT__glob_clone_stall) 
		    >> 1U)));
    vlTOPp->Vortex__DOT__vx_decode__DOT__temp_out_clone_stall 
	= (1U & ((IData)(vlTOPp->Vortex__DOT__vx_decode__DOT__temp_out_clone_stall) 
		 | ((IData)(vlTOPp->Vortex__DOT__vx_decode__DOT__glob_clone_stall) 
		    >> 2U)));
    vlTOPp->Vortex__DOT__vx_decode__DOT__temp_out_clone_stall 
	= (1U & ((IData)(vlTOPp->Vortex__DOT__vx_decode__DOT__temp_out_clone_stall) 
		 | ((IData)(vlTOPp->Vortex__DOT__vx_decode__DOT__glob_clone_stall) 
		    >> 3U)));
    vlTOPp->Vortex__DOT__vx_decode__DOT__temp_out_clone_stall 
	= (1U & ((IData)(vlTOPp->Vortex__DOT__vx_decode__DOT__temp_out_clone_stall) 
		 | ((IData)(vlTOPp->Vortex__DOT__vx_decode__DOT__glob_clone_stall) 
		    >> 4U)));
    vlTOPp->Vortex__DOT__vx_decode__DOT__temp_out_clone_stall 
	= (1U & ((IData)(vlTOPp->Vortex__DOT__vx_decode__DOT__temp_out_clone_stall) 
		 | ((IData)(vlTOPp->Vortex__DOT__vx_decode__DOT__glob_clone_stall) 
		    >> 5U)));
    vlTOPp->Vortex__DOT__vx_decode__DOT__temp_out_clone_stall 
	= (1U & ((IData)(vlTOPp->Vortex__DOT__vx_decode__DOT__temp_out_clone_stall) 
		 | ((IData)(vlTOPp->Vortex__DOT__vx_decode__DOT__glob_clone_stall) 
		    >> 6U)));
    vlTOPp->Vortex__DOT__vx_decode__DOT__temp_out_clone_stall 
	= (1U & ((IData)(vlTOPp->Vortex__DOT__vx_decode__DOT__temp_out_clone_stall) 
		 | ((IData)(vlTOPp->Vortex__DOT__vx_decode__DOT__glob_clone_stall) 
		    >> 7U)));
    vlTOPp->Vortex__DOT__vx_fetch__DOT__warp_glob_pc[0U] 
	= vlTOPp->Vortex__DOT__vx_fetch__DOT__genblk2__BRA__0__KET____DOT__VX_Warp__DOT__temp_PC;
    vlTOPp->Vortex__DOT__vx_fetch__DOT__warp_glob_pc[1U] 
	= vlTOPp->Vortex__DOT__vx_fetch__DOT__genblk2__BRA__1__KET____DOT__VX_Warp__DOT__temp_PC;
    vlTOPp->Vortex__DOT__vx_fetch__DOT__warp_glob_pc[2U] 
	= vlTOPp->Vortex__DOT__vx_fetch__DOT__genblk2__BRA__2__KET____DOT__VX_Warp__DOT__temp_PC;
    vlTOPp->Vortex__DOT__vx_fetch__DOT__warp_glob_pc[3U] 
	= vlTOPp->Vortex__DOT__vx_fetch__DOT__genblk2__BRA__3__KET____DOT__VX_Warp__DOT__temp_PC;
    vlTOPp->Vortex__DOT__vx_fetch__DOT__warp_glob_pc[4U] 
	= vlTOPp->Vortex__DOT__vx_fetch__DOT__genblk2__BRA__4__KET____DOT__VX_Warp__DOT__temp_PC;
    vlTOPp->Vortex__DOT__vx_fetch__DOT__warp_glob_pc[5U] 
	= vlTOPp->Vortex__DOT__vx_fetch__DOT__genblk2__BRA__5__KET____DOT__VX_Warp__DOT__temp_PC;
    vlTOPp->Vortex__DOT__vx_fetch__DOT__warp_glob_pc[6U] 
	= vlTOPp->Vortex__DOT__vx_fetch__DOT__genblk2__BRA__6__KET____DOT__VX_Warp__DOT__temp_PC;
    vlTOPp->Vortex__DOT__vx_fetch__DOT__warp_glob_pc[7U] 
	= vlTOPp->Vortex__DOT__vx_fetch__DOT__genblk2__BRA__7__KET____DOT__VX_Warp__DOT__temp_PC;
    vlTOPp->Vortex__DOT__forwarding_src1_fwd = (((IData)(vlTOPp->Vortex__DOT__vx_forwarding__DOT__src1_exe_fwd) 
						 | (IData)(vlTOPp->Vortex__DOT__vx_forwarding__DOT__src1_mem_fwd)) 
						| (IData)(vlTOPp->Vortex__DOT__vx_forwarding__DOT__src1_wb_fwd));
    vlTOPp->Vortex__DOT__forwarding_src2_fwd = (((IData)(vlTOPp->Vortex__DOT__vx_forwarding__DOT__src2_exe_fwd) 
						 | (IData)(vlTOPp->Vortex__DOT__vx_forwarding__DOT__src2_mem_fwd)) 
						| (IData)(vlTOPp->Vortex__DOT__vx_forwarding__DOT__src2_wb_fwd));
    vlTOPp->Vortex__DOT__vx_fetch__DOT__add_warp = 
	(((IData)(vlTOPp->Vortex__DOT__vx_decode__DOT__is_wspawn) 
	  & (~ (IData)(vlTOPp->Vortex__DOT__vx_decode__DOT__is_ebreak))) 
	 & (~ (IData)(vlTOPp->Vortex__DOT__vx_decode__DOT__temp_out_clone_stall)));
    vlTOPp->Vortex__DOT__vx_fetch__DOT__remove_warp 
	= (((IData)(vlTOPp->Vortex__DOT__vx_decode__DOT__is_ebreak) 
	    & (~ (IData)(vlTOPp->Vortex__DOT__vx_decode__DOT__is_wspawn))) 
	   & (~ (IData)(vlTOPp->Vortex__DOT__vx_decode__DOT__temp_out_clone_stall)));
    vlTOPp->Vortex__DOT__vx_fetch__DOT__stall = ((((IData)(vlTOPp->Vortex__DOT__vx_decode__DOT__temp_out_clone_stall) 
						   | (IData)(vlTOPp->Vortex__DOT__decode_branch_stall)) 
						  | (IData)(vlTOPp->Vortex__DOT__forwarding_fwd_stall)) 
						 | (IData)(vlTOPp->Vortex__DOT__execute_branch_stall));
    // ALWAYS at VX_fetch.v:177
    if ((0U == (IData)(vlTOPp->Vortex__DOT__vx_fetch__DOT__warp_num))) {
	vlTOPp->Vortex__DOT__vx_fetch__DOT__out_PC_var 
	    = vlTOPp->Vortex__DOT__vx_fetch__DOT__warp_glob_pc
	    [0U];
    }
    if ((1U == (IData)(vlTOPp->Vortex__DOT__vx_fetch__DOT__warp_num))) {
	vlTOPp->Vortex__DOT__vx_fetch__DOT__out_PC_var 
	    = vlTOPp->Vortex__DOT__vx_fetch__DOT__warp_glob_pc
	    [1U];
    }
    if ((2U == (IData)(vlTOPp->Vortex__DOT__vx_fetch__DOT__warp_num))) {
	vlTOPp->Vortex__DOT__vx_fetch__DOT__out_PC_var 
	    = vlTOPp->Vortex__DOT__vx_fetch__DOT__warp_glob_pc
	    [2U];
    }
    if ((3U == (IData)(vlTOPp->Vortex__DOT__vx_fetch__DOT__warp_num))) {
	vlTOPp->Vortex__DOT__vx_fetch__DOT__out_PC_var 
	    = vlTOPp->Vortex__DOT__vx_fetch__DOT__warp_glob_pc
	    [3U];
    }
    if ((4U == (IData)(vlTOPp->Vortex__DOT__vx_fetch__DOT__warp_num))) {
	vlTOPp->Vortex__DOT__vx_fetch__DOT__out_PC_var 
	    = vlTOPp->Vortex__DOT__vx_fetch__DOT__warp_glob_pc
	    [4U];
    }
    if ((5U == (IData)(vlTOPp->Vortex__DOT__vx_fetch__DOT__warp_num))) {
	vlTOPp->Vortex__DOT__vx_fetch__DOT__out_PC_var 
	    = vlTOPp->Vortex__DOT__vx_fetch__DOT__warp_glob_pc
	    [5U];
    }
    if ((6U == (IData)(vlTOPp->Vortex__DOT__vx_fetch__DOT__warp_num))) {
	vlTOPp->Vortex__DOT__vx_fetch__DOT__out_PC_var 
	    = vlTOPp->Vortex__DOT__vx_fetch__DOT__warp_glob_pc
	    [6U];
    }
    if ((7U == (IData)(vlTOPp->Vortex__DOT__vx_fetch__DOT__warp_num))) {
	vlTOPp->Vortex__DOT__vx_fetch__DOT__out_PC_var 
	    = vlTOPp->Vortex__DOT__vx_fetch__DOT__warp_glob_pc
	    [7U];
    }
    vlTOPp->Vortex__DOT__vx_fetch__DOT__genblk2__BRA__0__KET____DOT__warp_zero_stall 
	= ((IData)(vlTOPp->Vortex__DOT__vx_fetch__DOT__stall) 
	   | (0U != (IData)(vlTOPp->Vortex__DOT__vx_fetch__DOT__warp_num)));
    vlTOPp->Vortex__DOT__vx_fetch__DOT__genblk2__BRA__1__KET____DOT__warp_zero_stall 
	= ((IData)(vlTOPp->Vortex__DOT__vx_fetch__DOT__stall) 
	   | (1U != (IData)(vlTOPp->Vortex__DOT__vx_fetch__DOT__warp_num)));
    vlTOPp->Vortex__DOT__vx_fetch__DOT__genblk2__BRA__2__KET____DOT__warp_zero_stall 
	= ((IData)(vlTOPp->Vortex__DOT__vx_fetch__DOT__stall) 
	   | (2U != (IData)(vlTOPp->Vortex__DOT__vx_fetch__DOT__warp_num)));
    vlTOPp->Vortex__DOT__vx_fetch__DOT__genblk2__BRA__3__KET____DOT__warp_zero_stall 
	= ((IData)(vlTOPp->Vortex__DOT__vx_fetch__DOT__stall) 
	   | (3U != (IData)(vlTOPp->Vortex__DOT__vx_fetch__DOT__warp_num)));
    vlTOPp->Vortex__DOT__vx_fetch__DOT__genblk2__BRA__4__KET____DOT__warp_zero_stall 
	= ((IData)(vlTOPp->Vortex__DOT__vx_fetch__DOT__stall) 
	   | (4U != (IData)(vlTOPp->Vortex__DOT__vx_fetch__DOT__warp_num)));
    vlTOPp->Vortex__DOT__vx_fetch__DOT__genblk2__BRA__5__KET____DOT__warp_zero_stall 
	= ((IData)(vlTOPp->Vortex__DOT__vx_fetch__DOT__stall) 
	   | (5U != (IData)(vlTOPp->Vortex__DOT__vx_fetch__DOT__warp_num)));
    vlTOPp->Vortex__DOT__vx_fetch__DOT__genblk2__BRA__6__KET____DOT__warp_zero_stall 
	= ((IData)(vlTOPp->Vortex__DOT__vx_fetch__DOT__stall) 
	   | (6U != (IData)(vlTOPp->Vortex__DOT__vx_fetch__DOT__warp_num)));
    vlTOPp->Vortex__DOT__vx_fetch__DOT__genblk2__BRA__7__KET____DOT__warp_zero_stall 
	= ((IData)(vlTOPp->Vortex__DOT__vx_fetch__DOT__stall) 
	   | (7U != (IData)(vlTOPp->Vortex__DOT__vx_fetch__DOT__warp_num)));
    vlTOPp->icache_request_pc_address = vlTOPp->Vortex__DOT__vx_fetch__DOT__out_PC_var;
}

VL_INLINE_OPT void VVortex::_combo__TOP__10(VVortex__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VVortex::_combo__TOP__10\n"); );
    VVortex* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    // Begin mtask footprint  all: 
    VL_SIGW(__Vtemp146,127,0,4);
    VL_SIGW(__Vtemp162,127,0,4);
    // Body
    vlSymsp->TOP__Vortex__DOT__VX_mem_wb.mem_result[0U] 
	= vlTOPp->Vortex__DOT____Vcellinp__vx_memory__in_cache_driver_out_data
	[0U];
    vlSymsp->TOP__Vortex__DOT__VX_mem_wb.mem_result[1U] 
	= vlTOPp->Vortex__DOT____Vcellinp__vx_memory__in_cache_driver_out_data
	[1U];
    vlSymsp->TOP__Vortex__DOT__VX_mem_wb.mem_result[2U] 
	= vlTOPp->Vortex__DOT____Vcellinp__vx_memory__in_cache_driver_out_data
	[2U];
    vlSymsp->TOP__Vortex__DOT__VX_mem_wb.mem_result[3U] 
	= vlTOPp->Vortex__DOT____Vcellinp__vx_memory__in_cache_driver_out_data
	[3U];
    __Vtemp146[0U] = ((IData)(vlTOPp->Vortex__DOT__vx_forwarding__DOT__src1_mem_fwd)
		       ? ((3U == (3U & ((vlTOPp->Vortex__DOT__vx_e_m_reg__DOT__f_d_reg__DOT__value[8U] 
					 << 0xbU) | 
					(vlTOPp->Vortex__DOT__vx_e_m_reg__DOT__f_d_reg__DOT__value[7U] 
					 >> 0x15U))))
			   ? vlTOPp->Vortex__DOT__vx_forwarding__DOT__use_memory_PC_next[0U]
			   : ((2U == (3U & ((vlTOPp->Vortex__DOT__vx_e_m_reg__DOT__f_d_reg__DOT__value[8U] 
					     << 0xbU) 
					    | (vlTOPp->Vortex__DOT__vx_e_m_reg__DOT__f_d_reg__DOT__value[7U] 
					       >> 0x15U))))
			       ? vlSymsp->TOP__Vortex__DOT__VX_mem_wb.mem_result[0U]
			       : ((vlTOPp->Vortex__DOT__vx_e_m_reg__DOT__f_d_reg__DOT__value[9U] 
				   << 0x1eU) | (vlTOPp->Vortex__DOT__vx_e_m_reg__DOT__f_d_reg__DOT__value[8U] 
						>> 2U))))
		       : ((IData)(vlTOPp->Vortex__DOT__vx_forwarding__DOT__src1_wb_fwd)
			   ? ((3U == (3U & ((vlTOPp->Vortex__DOT__vx_m_w_reg__DOT__m_w_reg__DOT__value[2U] 
					     << 0xeU) 
					    | (vlTOPp->Vortex__DOT__vx_m_w_reg__DOT__m_w_reg__DOT__value[1U] 
					       >> 0x12U))))
			       ? vlTOPp->Vortex__DOT__vx_forwarding__DOT__use_writeback_PC_next[0U]
			       : ((2U == (3U & ((vlTOPp->Vortex__DOT__vx_m_w_reg__DOT__m_w_reg__DOT__value[2U] 
						 << 0xeU) 
						| (vlTOPp->Vortex__DOT__vx_m_w_reg__DOT__m_w_reg__DOT__value[1U] 
						   >> 0x12U))))
				   ? ((vlTOPp->Vortex__DOT__vx_m_w_reg__DOT__m_w_reg__DOT__value[2U] 
				       << 7U) | (vlTOPp->Vortex__DOT__vx_m_w_reg__DOT__m_w_reg__DOT__value[1U] 
						 >> 0x19U))
				   : ((vlTOPp->Vortex__DOT__vx_m_w_reg__DOT__m_w_reg__DOT__value[6U] 
				       << 7U) | (vlTOPp->Vortex__DOT__vx_m_w_reg__DOT__m_w_reg__DOT__value[5U] 
						 >> 0x19U))))
			   : vlSymsp->TOP__Vortex__DOT__VX_exe_mem_req.alu_result[0U]));
    __Vtemp146[1U] = ((IData)(vlTOPp->Vortex__DOT__vx_forwarding__DOT__src1_mem_fwd)
		       ? ((3U == (3U & ((vlTOPp->Vortex__DOT__vx_e_m_reg__DOT__f_d_reg__DOT__value[8U] 
					 << 0xbU) | 
					(vlTOPp->Vortex__DOT__vx_e_m_reg__DOT__f_d_reg__DOT__value[7U] 
					 >> 0x15U))))
			   ? vlTOPp->Vortex__DOT__vx_forwarding__DOT__use_memory_PC_next[1U]
			   : ((2U == (3U & ((vlTOPp->Vortex__DOT__vx_e_m_reg__DOT__f_d_reg__DOT__value[8U] 
					     << 0xbU) 
					    | (vlTOPp->Vortex__DOT__vx_e_m_reg__DOT__f_d_reg__DOT__value[7U] 
					       >> 0x15U))))
			       ? vlSymsp->TOP__Vortex__DOT__VX_mem_wb.mem_result[1U]
			       : ((vlTOPp->Vortex__DOT__vx_e_m_reg__DOT__f_d_reg__DOT__value[0xaU] 
				   << 0x1eU) | (vlTOPp->Vortex__DOT__vx_e_m_reg__DOT__f_d_reg__DOT__value[9U] 
						>> 2U))))
		       : ((IData)(vlTOPp->Vortex__DOT__vx_forwarding__DOT__src1_wb_fwd)
			   ? ((3U == (3U & ((vlTOPp->Vortex__DOT__vx_m_w_reg__DOT__m_w_reg__DOT__value[2U] 
					     << 0xeU) 
					    | (vlTOPp->Vortex__DOT__vx_m_w_reg__DOT__m_w_reg__DOT__value[1U] 
					       >> 0x12U))))
			       ? vlTOPp->Vortex__DOT__vx_forwarding__DOT__use_writeback_PC_next[1U]
			       : ((2U == (3U & ((vlTOPp->Vortex__DOT__vx_m_w_reg__DOT__m_w_reg__DOT__value[2U] 
						 << 0xeU) 
						| (vlTOPp->Vortex__DOT__vx_m_w_reg__DOT__m_w_reg__DOT__value[1U] 
						   >> 0x12U))))
				   ? ((vlTOPp->Vortex__DOT__vx_m_w_reg__DOT__m_w_reg__DOT__value[3U] 
				       << 7U) | (vlTOPp->Vortex__DOT__vx_m_w_reg__DOT__m_w_reg__DOT__value[2U] 
						 >> 0x19U))
				   : ((vlTOPp->Vortex__DOT__vx_m_w_reg__DOT__m_w_reg__DOT__value[7U] 
				       << 7U) | (vlTOPp->Vortex__DOT__vx_m_w_reg__DOT__m_w_reg__DOT__value[6U] 
						 >> 0x19U))))
			   : vlSymsp->TOP__Vortex__DOT__VX_exe_mem_req.alu_result[1U]));
    __Vtemp146[2U] = ((IData)(vlTOPp->Vortex__DOT__vx_forwarding__DOT__src1_mem_fwd)
		       ? ((3U == (3U & ((vlTOPp->Vortex__DOT__vx_e_m_reg__DOT__f_d_reg__DOT__value[8U] 
					 << 0xbU) | 
					(vlTOPp->Vortex__DOT__vx_e_m_reg__DOT__f_d_reg__DOT__value[7U] 
					 >> 0x15U))))
			   ? vlTOPp->Vortex__DOT__vx_forwarding__DOT__use_memory_PC_next[2U]
			   : ((2U == (3U & ((vlTOPp->Vortex__DOT__vx_e_m_reg__DOT__f_d_reg__DOT__value[8U] 
					     << 0xbU) 
					    | (vlTOPp->Vortex__DOT__vx_e_m_reg__DOT__f_d_reg__DOT__value[7U] 
					       >> 0x15U))))
			       ? vlSymsp->TOP__Vortex__DOT__VX_mem_wb.mem_result[2U]
			       : ((vlTOPp->Vortex__DOT__vx_e_m_reg__DOT__f_d_reg__DOT__value[0xbU] 
				   << 0x1eU) | (vlTOPp->Vortex__DOT__vx_e_m_reg__DOT__f_d_reg__DOT__value[0xaU] 
						>> 2U))))
		       : ((IData)(vlTOPp->Vortex__DOT__vx_forwarding__DOT__src1_wb_fwd)
			   ? ((3U == (3U & ((vlTOPp->Vortex__DOT__vx_m_w_reg__DOT__m_w_reg__DOT__value[2U] 
					     << 0xeU) 
					    | (vlTOPp->Vortex__DOT__vx_m_w_reg__DOT__m_w_reg__DOT__value[1U] 
					       >> 0x12U))))
			       ? vlTOPp->Vortex__DOT__vx_forwarding__DOT__use_writeback_PC_next[2U]
			       : ((2U == (3U & ((vlTOPp->Vortex__DOT__vx_m_w_reg__DOT__m_w_reg__DOT__value[2U] 
						 << 0xeU) 
						| (vlTOPp->Vortex__DOT__vx_m_w_reg__DOT__m_w_reg__DOT__value[1U] 
						   >> 0x12U))))
				   ? ((vlTOPp->Vortex__DOT__vx_m_w_reg__DOT__m_w_reg__DOT__value[4U] 
				       << 7U) | (vlTOPp->Vortex__DOT__vx_m_w_reg__DOT__m_w_reg__DOT__value[3U] 
						 >> 0x19U))
				   : ((vlTOPp->Vortex__DOT__vx_m_w_reg__DOT__m_w_reg__DOT__value[8U] 
				       << 7U) | (vlTOPp->Vortex__DOT__vx_m_w_reg__DOT__m_w_reg__DOT__value[7U] 
						 >> 0x19U))))
			   : vlSymsp->TOP__Vortex__DOT__VX_exe_mem_req.alu_result[2U]));
    __Vtemp146[3U] = ((IData)(vlTOPp->Vortex__DOT__vx_forwarding__DOT__src1_mem_fwd)
		       ? ((3U == (3U & ((vlTOPp->Vortex__DOT__vx_e_m_reg__DOT__f_d_reg__DOT__value[8U] 
					 << 0xbU) | 
					(vlTOPp->Vortex__DOT__vx_e_m_reg__DOT__f_d_reg__DOT__value[7U] 
					 >> 0x15U))))
			   ? vlTOPp->Vortex__DOT__vx_forwarding__DOT__use_memory_PC_next[3U]
			   : ((2U == (3U & ((vlTOPp->Vortex__DOT__vx_e_m_reg__DOT__f_d_reg__DOT__value[8U] 
					     << 0xbU) 
					    | (vlTOPp->Vortex__DOT__vx_e_m_reg__DOT__f_d_reg__DOT__value[7U] 
					       >> 0x15U))))
			       ? vlSymsp->TOP__Vortex__DOT__VX_mem_wb.mem_result[3U]
			       : ((vlTOPp->Vortex__DOT__vx_e_m_reg__DOT__f_d_reg__DOT__value[0xcU] 
				   << 0x1eU) | (vlTOPp->Vortex__DOT__vx_e_m_reg__DOT__f_d_reg__DOT__value[0xbU] 
						>> 2U))))
		       : ((IData)(vlTOPp->Vortex__DOT__vx_forwarding__DOT__src1_wb_fwd)
			   ? ((3U == (3U & ((vlTOPp->Vortex__DOT__vx_m_w_reg__DOT__m_w_reg__DOT__value[2U] 
					     << 0xeU) 
					    | (vlTOPp->Vortex__DOT__vx_m_w_reg__DOT__m_w_reg__DOT__value[1U] 
					       >> 0x12U))))
			       ? vlTOPp->Vortex__DOT__vx_forwarding__DOT__use_writeback_PC_next[3U]
			       : ((2U == (3U & ((vlTOPp->Vortex__DOT__vx_m_w_reg__DOT__m_w_reg__DOT__value[2U] 
						 << 0xeU) 
						| (vlTOPp->Vortex__DOT__vx_m_w_reg__DOT__m_w_reg__DOT__value[1U] 
						   >> 0x12U))))
				   ? ((vlTOPp->Vortex__DOT__vx_m_w_reg__DOT__m_w_reg__DOT__value[5U] 
				       << 7U) | (vlTOPp->Vortex__DOT__vx_m_w_reg__DOT__m_w_reg__DOT__value[4U] 
						 >> 0x19U))
				   : ((vlTOPp->Vortex__DOT__vx_m_w_reg__DOT__m_w_reg__DOT__value[9U] 
				       << 7U) | (vlTOPp->Vortex__DOT__vx_m_w_reg__DOT__m_w_reg__DOT__value[8U] 
						 >> 0x19U))))
			   : vlSymsp->TOP__Vortex__DOT__VX_exe_mem_req.alu_result[3U]));
    vlTOPp->Vortex__DOT____Vcellout__vx_forwarding__out_src1_fwd_data[0U] 
	= ((IData)(vlTOPp->Vortex__DOT__vx_forwarding__DOT__src1_exe_fwd)
	    ? ((3U == (IData)(vlSymsp->TOP__Vortex__DOT__VX_exe_mem_req.wb))
	        ? vlTOPp->Vortex__DOT__vx_forwarding__DOT__use_execute_PC_next[0U]
	        : vlSymsp->TOP__Vortex__DOT__VX_exe_mem_req.alu_result[0U])
	    : __Vtemp146[0U]);
    vlTOPp->Vortex__DOT____Vcellout__vx_forwarding__out_src1_fwd_data[1U] 
	= ((IData)(vlTOPp->Vortex__DOT__vx_forwarding__DOT__src1_exe_fwd)
	    ? ((3U == (IData)(vlSymsp->TOP__Vortex__DOT__VX_exe_mem_req.wb))
	        ? vlTOPp->Vortex__DOT__vx_forwarding__DOT__use_execute_PC_next[1U]
	        : vlSymsp->TOP__Vortex__DOT__VX_exe_mem_req.alu_result[1U])
	    : __Vtemp146[1U]);
    vlTOPp->Vortex__DOT____Vcellout__vx_forwarding__out_src1_fwd_data[2U] 
	= ((IData)(vlTOPp->Vortex__DOT__vx_forwarding__DOT__src1_exe_fwd)
	    ? ((3U == (IData)(vlSymsp->TOP__Vortex__DOT__VX_exe_mem_req.wb))
	        ? vlTOPp->Vortex__DOT__vx_forwarding__DOT__use_execute_PC_next[2U]
	        : vlSymsp->TOP__Vortex__DOT__VX_exe_mem_req.alu_result[2U])
	    : __Vtemp146[2U]);
    vlTOPp->Vortex__DOT____Vcellout__vx_forwarding__out_src1_fwd_data[3U] 
	= ((IData)(vlTOPp->Vortex__DOT__vx_forwarding__DOT__src1_exe_fwd)
	    ? ((3U == (IData)(vlSymsp->TOP__Vortex__DOT__VX_exe_mem_req.wb))
	        ? vlTOPp->Vortex__DOT__vx_forwarding__DOT__use_execute_PC_next[3U]
	        : vlSymsp->TOP__Vortex__DOT__VX_exe_mem_req.alu_result[3U])
	    : __Vtemp146[3U]);
    __Vtemp162[0U] = ((IData)(vlTOPp->Vortex__DOT__vx_forwarding__DOT__src2_mem_fwd)
		       ? ((3U == (3U & ((vlTOPp->Vortex__DOT__vx_e_m_reg__DOT__f_d_reg__DOT__value[8U] 
					 << 0xbU) | 
					(vlTOPp->Vortex__DOT__vx_e_m_reg__DOT__f_d_reg__DOT__value[7U] 
					 >> 0x15U))))
			   ? vlTOPp->Vortex__DOT__vx_forwarding__DOT__use_memory_PC_next[0U]
			   : ((2U == (3U & ((vlTOPp->Vortex__DOT__vx_e_m_reg__DOT__f_d_reg__DOT__value[8U] 
					     << 0xbU) 
					    | (vlTOPp->Vortex__DOT__vx_e_m_reg__DOT__f_d_reg__DOT__value[7U] 
					       >> 0x15U))))
			       ? vlSymsp->TOP__Vortex__DOT__VX_mem_wb.mem_result[0U]
			       : ((vlTOPp->Vortex__DOT__vx_e_m_reg__DOT__f_d_reg__DOT__value[9U] 
				   << 0x1eU) | (vlTOPp->Vortex__DOT__vx_e_m_reg__DOT__f_d_reg__DOT__value[8U] 
						>> 2U))))
		       : ((IData)(vlTOPp->Vortex__DOT__vx_forwarding__DOT__src2_wb_fwd)
			   ? ((3U == (3U & ((vlTOPp->Vortex__DOT__vx_m_w_reg__DOT__m_w_reg__DOT__value[2U] 
					     << 0xeU) 
					    | (vlTOPp->Vortex__DOT__vx_m_w_reg__DOT__m_w_reg__DOT__value[1U] 
					       >> 0x12U))))
			       ? vlTOPp->Vortex__DOT__vx_forwarding__DOT__use_writeback_PC_next[0U]
			       : ((2U == (3U & ((vlTOPp->Vortex__DOT__vx_m_w_reg__DOT__m_w_reg__DOT__value[2U] 
						 << 0xeU) 
						| (vlTOPp->Vortex__DOT__vx_m_w_reg__DOT__m_w_reg__DOT__value[1U] 
						   >> 0x12U))))
				   ? ((vlTOPp->Vortex__DOT__vx_m_w_reg__DOT__m_w_reg__DOT__value[2U] 
				       << 7U) | (vlTOPp->Vortex__DOT__vx_m_w_reg__DOT__m_w_reg__DOT__value[1U] 
						 >> 0x19U))
				   : ((vlTOPp->Vortex__DOT__vx_m_w_reg__DOT__m_w_reg__DOT__value[6U] 
				       << 7U) | (vlTOPp->Vortex__DOT__vx_m_w_reg__DOT__m_w_reg__DOT__value[5U] 
						 >> 0x19U))))
			   : vlSymsp->TOP__Vortex__DOT__VX_exe_mem_req.alu_result[0U]));
    __Vtemp162[1U] = ((IData)(vlTOPp->Vortex__DOT__vx_forwarding__DOT__src2_mem_fwd)
		       ? ((3U == (3U & ((vlTOPp->Vortex__DOT__vx_e_m_reg__DOT__f_d_reg__DOT__value[8U] 
					 << 0xbU) | 
					(vlTOPp->Vortex__DOT__vx_e_m_reg__DOT__f_d_reg__DOT__value[7U] 
					 >> 0x15U))))
			   ? vlTOPp->Vortex__DOT__vx_forwarding__DOT__use_memory_PC_next[1U]
			   : ((2U == (3U & ((vlTOPp->Vortex__DOT__vx_e_m_reg__DOT__f_d_reg__DOT__value[8U] 
					     << 0xbU) 
					    | (vlTOPp->Vortex__DOT__vx_e_m_reg__DOT__f_d_reg__DOT__value[7U] 
					       >> 0x15U))))
			       ? vlSymsp->TOP__Vortex__DOT__VX_mem_wb.mem_result[1U]
			       : ((vlTOPp->Vortex__DOT__vx_e_m_reg__DOT__f_d_reg__DOT__value[0xaU] 
				   << 0x1eU) | (vlTOPp->Vortex__DOT__vx_e_m_reg__DOT__f_d_reg__DOT__value[9U] 
						>> 2U))))
		       : ((IData)(vlTOPp->Vortex__DOT__vx_forwarding__DOT__src2_wb_fwd)
			   ? ((3U == (3U & ((vlTOPp->Vortex__DOT__vx_m_w_reg__DOT__m_w_reg__DOT__value[2U] 
					     << 0xeU) 
					    | (vlTOPp->Vortex__DOT__vx_m_w_reg__DOT__m_w_reg__DOT__value[1U] 
					       >> 0x12U))))
			       ? vlTOPp->Vortex__DOT__vx_forwarding__DOT__use_writeback_PC_next[1U]
			       : ((2U == (3U & ((vlTOPp->Vortex__DOT__vx_m_w_reg__DOT__m_w_reg__DOT__value[2U] 
						 << 0xeU) 
						| (vlTOPp->Vortex__DOT__vx_m_w_reg__DOT__m_w_reg__DOT__value[1U] 
						   >> 0x12U))))
				   ? ((vlTOPp->Vortex__DOT__vx_m_w_reg__DOT__m_w_reg__DOT__value[3U] 
				       << 7U) | (vlTOPp->Vortex__DOT__vx_m_w_reg__DOT__m_w_reg__DOT__value[2U] 
						 >> 0x19U))
				   : ((vlTOPp->Vortex__DOT__vx_m_w_reg__DOT__m_w_reg__DOT__value[7U] 
				       << 7U) | (vlTOPp->Vortex__DOT__vx_m_w_reg__DOT__m_w_reg__DOT__value[6U] 
						 >> 0x19U))))
			   : vlSymsp->TOP__Vortex__DOT__VX_exe_mem_req.alu_result[1U]));
    __Vtemp162[2U] = ((IData)(vlTOPp->Vortex__DOT__vx_forwarding__DOT__src2_mem_fwd)
		       ? ((3U == (3U & ((vlTOPp->Vortex__DOT__vx_e_m_reg__DOT__f_d_reg__DOT__value[8U] 
					 << 0xbU) | 
					(vlTOPp->Vortex__DOT__vx_e_m_reg__DOT__f_d_reg__DOT__value[7U] 
					 >> 0x15U))))
			   ? vlTOPp->Vortex__DOT__vx_forwarding__DOT__use_memory_PC_next[2U]
			   : ((2U == (3U & ((vlTOPp->Vortex__DOT__vx_e_m_reg__DOT__f_d_reg__DOT__value[8U] 
					     << 0xbU) 
					    | (vlTOPp->Vortex__DOT__vx_e_m_reg__DOT__f_d_reg__DOT__value[7U] 
					       >> 0x15U))))
			       ? vlSymsp->TOP__Vortex__DOT__VX_mem_wb.mem_result[2U]
			       : ((vlTOPp->Vortex__DOT__vx_e_m_reg__DOT__f_d_reg__DOT__value[0xbU] 
				   << 0x1eU) | (vlTOPp->Vortex__DOT__vx_e_m_reg__DOT__f_d_reg__DOT__value[0xaU] 
						>> 2U))))
		       : ((IData)(vlTOPp->Vortex__DOT__vx_forwarding__DOT__src2_wb_fwd)
			   ? ((3U == (3U & ((vlTOPp->Vortex__DOT__vx_m_w_reg__DOT__m_w_reg__DOT__value[2U] 
					     << 0xeU) 
					    | (vlTOPp->Vortex__DOT__vx_m_w_reg__DOT__m_w_reg__DOT__value[1U] 
					       >> 0x12U))))
			       ? vlTOPp->Vortex__DOT__vx_forwarding__DOT__use_writeback_PC_next[2U]
			       : ((2U == (3U & ((vlTOPp->Vortex__DOT__vx_m_w_reg__DOT__m_w_reg__DOT__value[2U] 
						 << 0xeU) 
						| (vlTOPp->Vortex__DOT__vx_m_w_reg__DOT__m_w_reg__DOT__value[1U] 
						   >> 0x12U))))
				   ? ((vlTOPp->Vortex__DOT__vx_m_w_reg__DOT__m_w_reg__DOT__value[4U] 
				       << 7U) | (vlTOPp->Vortex__DOT__vx_m_w_reg__DOT__m_w_reg__DOT__value[3U] 
						 >> 0x19U))
				   : ((vlTOPp->Vortex__DOT__vx_m_w_reg__DOT__m_w_reg__DOT__value[8U] 
				       << 7U) | (vlTOPp->Vortex__DOT__vx_m_w_reg__DOT__m_w_reg__DOT__value[7U] 
						 >> 0x19U))))
			   : vlSymsp->TOP__Vortex__DOT__VX_exe_mem_req.alu_result[2U]));
    __Vtemp162[3U] = ((IData)(vlTOPp->Vortex__DOT__vx_forwarding__DOT__src2_mem_fwd)
		       ? ((3U == (3U & ((vlTOPp->Vortex__DOT__vx_e_m_reg__DOT__f_d_reg__DOT__value[8U] 
					 << 0xbU) | 
					(vlTOPp->Vortex__DOT__vx_e_m_reg__DOT__f_d_reg__DOT__value[7U] 
					 >> 0x15U))))
			   ? vlTOPp->Vortex__DOT__vx_forwarding__DOT__use_memory_PC_next[3U]
			   : ((2U == (3U & ((vlTOPp->Vortex__DOT__vx_e_m_reg__DOT__f_d_reg__DOT__value[8U] 
					     << 0xbU) 
					    | (vlTOPp->Vortex__DOT__vx_e_m_reg__DOT__f_d_reg__DOT__value[7U] 
					       >> 0x15U))))
			       ? vlSymsp->TOP__Vortex__DOT__VX_mem_wb.mem_result[3U]
			       : ((vlTOPp->Vortex__DOT__vx_e_m_reg__DOT__f_d_reg__DOT__value[0xcU] 
				   << 0x1eU) | (vlTOPp->Vortex__DOT__vx_e_m_reg__DOT__f_d_reg__DOT__value[0xbU] 
						>> 2U))))
		       : ((IData)(vlTOPp->Vortex__DOT__vx_forwarding__DOT__src2_wb_fwd)
			   ? ((3U == (3U & ((vlTOPp->Vortex__DOT__vx_m_w_reg__DOT__m_w_reg__DOT__value[2U] 
					     << 0xeU) 
					    | (vlTOPp->Vortex__DOT__vx_m_w_reg__DOT__m_w_reg__DOT__value[1U] 
					       >> 0x12U))))
			       ? vlTOPp->Vortex__DOT__vx_forwarding__DOT__use_writeback_PC_next[3U]
			       : ((2U == (3U & ((vlTOPp->Vortex__DOT__vx_m_w_reg__DOT__m_w_reg__DOT__value[2U] 
						 << 0xeU) 
						| (vlTOPp->Vortex__DOT__vx_m_w_reg__DOT__m_w_reg__DOT__value[1U] 
						   >> 0x12U))))
				   ? ((vlTOPp->Vortex__DOT__vx_m_w_reg__DOT__m_w_reg__DOT__value[5U] 
				       << 7U) | (vlTOPp->Vortex__DOT__vx_m_w_reg__DOT__m_w_reg__DOT__value[4U] 
						 >> 0x19U))
				   : ((vlTOPp->Vortex__DOT__vx_m_w_reg__DOT__m_w_reg__DOT__value[9U] 
				       << 7U) | (vlTOPp->Vortex__DOT__vx_m_w_reg__DOT__m_w_reg__DOT__value[8U] 
						 >> 0x19U))))
			   : vlSymsp->TOP__Vortex__DOT__VX_exe_mem_req.alu_result[3U]));
    vlTOPp->Vortex__DOT____Vcellout__vx_forwarding__out_src2_fwd_data[0U] 
	= ((IData)(vlTOPp->Vortex__DOT__vx_forwarding__DOT__src2_exe_fwd)
	    ? ((3U == (IData)(vlSymsp->TOP__Vortex__DOT__VX_exe_mem_req.wb))
	        ? vlTOPp->Vortex__DOT__vx_forwarding__DOT__use_execute_PC_next[0U]
	        : vlSymsp->TOP__Vortex__DOT__VX_exe_mem_req.alu_result[0U])
	    : __Vtemp162[0U]);
    vlTOPp->Vortex__DOT____Vcellout__vx_forwarding__out_src2_fwd_data[1U] 
	= ((IData)(vlTOPp->Vortex__DOT__vx_forwarding__DOT__src2_exe_fwd)
	    ? ((3U == (IData)(vlSymsp->TOP__Vortex__DOT__VX_exe_mem_req.wb))
	        ? vlTOPp->Vortex__DOT__vx_forwarding__DOT__use_execute_PC_next[1U]
	        : vlSymsp->TOP__Vortex__DOT__VX_exe_mem_req.alu_result[1U])
	    : __Vtemp162[1U]);
    vlTOPp->Vortex__DOT____Vcellout__vx_forwarding__out_src2_fwd_data[2U] 
	= ((IData)(vlTOPp->Vortex__DOT__vx_forwarding__DOT__src2_exe_fwd)
	    ? ((3U == (IData)(vlSymsp->TOP__Vortex__DOT__VX_exe_mem_req.wb))
	        ? vlTOPp->Vortex__DOT__vx_forwarding__DOT__use_execute_PC_next[2U]
	        : vlSymsp->TOP__Vortex__DOT__VX_exe_mem_req.alu_result[2U])
	    : __Vtemp162[2U]);
    vlTOPp->Vortex__DOT____Vcellout__vx_forwarding__out_src2_fwd_data[3U] 
	= ((IData)(vlTOPp->Vortex__DOT__vx_forwarding__DOT__src2_exe_fwd)
	    ? ((3U == (IData)(vlSymsp->TOP__Vortex__DOT__VX_exe_mem_req.wb))
	        ? vlTOPp->Vortex__DOT__vx_forwarding__DOT__use_execute_PC_next[3U]
	        : vlSymsp->TOP__Vortex__DOT__VX_exe_mem_req.alu_result[3U])
	    : __Vtemp162[3U]);
    vlTOPp->Vortex__DOT__vx_decode__DOT____Vcellout__VX_Context_zero__out_a_reg_data[0U] 
	= ((0x6fU == (0x7fU & ((vlTOPp->Vortex__DOT__vx_f_d_reg__DOT__f_d_reg__DOT__value[2U] 
				<< 0x18U) | (vlTOPp->Vortex__DOT__vx_f_d_reg__DOT__f_d_reg__DOT__value[1U] 
					     >> 8U))))
	    ? ((vlTOPp->Vortex__DOT__vx_f_d_reg__DOT__f_d_reg__DOT__value[1U] 
		<< 0x18U) | (vlTOPp->Vortex__DOT__vx_f_d_reg__DOT__f_d_reg__DOT__value[0U] 
			     >> 8U)) : ((IData)(vlTOPp->Vortex__DOT__forwarding_src1_fwd)
					 ? vlTOPp->Vortex__DOT____Vcellout__vx_forwarding__out_src1_fwd_data[0U]
					 : vlTOPp->Vortex__DOT__vx_decode__DOT__VX_Context_zero__DOT__rd1_register[0U]));
    vlTOPp->Vortex__DOT__vx_decode__DOT____Vcellout__VX_Context_zero__out_a_reg_data[1U] 
	= ((0x6fU == (0x7fU & ((vlTOPp->Vortex__DOT__vx_f_d_reg__DOT__f_d_reg__DOT__value[2U] 
				<< 0x18U) | (vlTOPp->Vortex__DOT__vx_f_d_reg__DOT__f_d_reg__DOT__value[1U] 
					     >> 8U))))
	    ? ((vlTOPp->Vortex__DOT__vx_f_d_reg__DOT__f_d_reg__DOT__value[1U] 
		<< 0x18U) | (vlTOPp->Vortex__DOT__vx_f_d_reg__DOT__f_d_reg__DOT__value[0U] 
			     >> 8U)) : ((IData)(vlTOPp->Vortex__DOT__forwarding_src1_fwd)
					 ? vlTOPp->Vortex__DOT____Vcellout__vx_forwarding__out_src1_fwd_data[1U]
					 : vlTOPp->Vortex__DOT__vx_decode__DOT__VX_Context_zero__DOT__rd1_register[1U]));
    vlTOPp->Vortex__DOT__vx_decode__DOT____Vcellout__VX_Context_zero__out_a_reg_data[2U] 
	= ((0x6fU == (0x7fU & ((vlTOPp->Vortex__DOT__vx_f_d_reg__DOT__f_d_reg__DOT__value[2U] 
				<< 0x18U) | (vlTOPp->Vortex__DOT__vx_f_d_reg__DOT__f_d_reg__DOT__value[1U] 
					     >> 8U))))
	    ? ((vlTOPp->Vortex__DOT__vx_f_d_reg__DOT__f_d_reg__DOT__value[1U] 
		<< 0x18U) | (vlTOPp->Vortex__DOT__vx_f_d_reg__DOT__f_d_reg__DOT__value[0U] 
			     >> 8U)) : ((IData)(vlTOPp->Vortex__DOT__forwarding_src1_fwd)
					 ? vlTOPp->Vortex__DOT____Vcellout__vx_forwarding__out_src1_fwd_data[2U]
					 : vlTOPp->Vortex__DOT__vx_decode__DOT__VX_Context_zero__DOT__rd1_register[2U]));
    vlTOPp->Vortex__DOT__vx_decode__DOT____Vcellout__VX_Context_zero__out_a_reg_data[3U] 
	= ((0x6fU == (0x7fU & ((vlTOPp->Vortex__DOT__vx_f_d_reg__DOT__f_d_reg__DOT__value[2U] 
				<< 0x18U) | (vlTOPp->Vortex__DOT__vx_f_d_reg__DOT__f_d_reg__DOT__value[1U] 
					     >> 8U))))
	    ? ((vlTOPp->Vortex__DOT__vx_f_d_reg__DOT__f_d_reg__DOT__value[1U] 
		<< 0x18U) | (vlTOPp->Vortex__DOT__vx_f_d_reg__DOT__f_d_reg__DOT__value[0U] 
			     >> 8U)) : ((IData)(vlTOPp->Vortex__DOT__forwarding_src1_fwd)
					 ? vlTOPp->Vortex__DOT____Vcellout__vx_forwarding__out_src1_fwd_data[3U]
					 : vlTOPp->Vortex__DOT__vx_decode__DOT__VX_Context_zero__DOT__rd1_register[3U]));
    vlTOPp->Vortex__DOT__vx_decode__DOT____Vcellout__VX_Context_zero__out_b_reg_data[0U] 
	= ((IData)(vlTOPp->Vortex__DOT__forwarding_src2_fwd)
	    ? vlTOPp->Vortex__DOT____Vcellout__vx_forwarding__out_src2_fwd_data[0U]
	    : vlTOPp->Vortex__DOT__vx_decode__DOT__VX_Context_zero__DOT__rd2_register[0U]);
    vlTOPp->Vortex__DOT__vx_decode__DOT____Vcellout__VX_Context_zero__out_b_reg_data[1U] 
	= ((IData)(vlTOPp->Vortex__DOT__forwarding_src2_fwd)
	    ? vlTOPp->Vortex__DOT____Vcellout__vx_forwarding__out_src2_fwd_data[1U]
	    : vlTOPp->Vortex__DOT__vx_decode__DOT__VX_Context_zero__DOT__rd2_register[1U]);
    vlTOPp->Vortex__DOT__vx_decode__DOT____Vcellout__VX_Context_zero__out_b_reg_data[2U] 
	= ((IData)(vlTOPp->Vortex__DOT__forwarding_src2_fwd)
	    ? vlTOPp->Vortex__DOT____Vcellout__vx_forwarding__out_src2_fwd_data[2U]
	    : vlTOPp->Vortex__DOT__vx_decode__DOT__VX_Context_zero__DOT__rd2_register[2U]);
    vlTOPp->Vortex__DOT__vx_decode__DOT____Vcellout__VX_Context_zero__out_b_reg_data[3U] 
	= ((IData)(vlTOPp->Vortex__DOT__forwarding_src2_fwd)
	    ? vlTOPp->Vortex__DOT____Vcellout__vx_forwarding__out_src2_fwd_data[3U]
	    : vlTOPp->Vortex__DOT__vx_decode__DOT__VX_Context_zero__DOT__rd2_register[3U]);
    vlTOPp->Vortex__DOT__vx_decode__DOT__glob_a_reg_data[0U] 
	= vlTOPp->Vortex__DOT__vx_decode__DOT____Vcellout__VX_Context_zero__out_a_reg_data[0U];
    vlTOPp->Vortex__DOT__vx_decode__DOT__glob_a_reg_data[1U] 
	= vlTOPp->Vortex__DOT__vx_decode__DOT____Vcellout__VX_Context_zero__out_a_reg_data[1U];
    vlTOPp->Vortex__DOT__vx_decode__DOT__glob_a_reg_data[2U] 
	= vlTOPp->Vortex__DOT__vx_decode__DOT____Vcellout__VX_Context_zero__out_a_reg_data[2U];
    vlTOPp->Vortex__DOT__vx_decode__DOT__glob_a_reg_data[3U] 
	= vlTOPp->Vortex__DOT__vx_decode__DOT____Vcellout__VX_Context_zero__out_a_reg_data[3U];
    vlTOPp->Vortex__DOT__vx_decode__DOT__glob_b_reg_data[0U] 
	= vlTOPp->Vortex__DOT__vx_decode__DOT____Vcellout__VX_Context_zero__out_b_reg_data[0U];
    vlTOPp->Vortex__DOT__vx_decode__DOT__glob_b_reg_data[1U] 
	= vlTOPp->Vortex__DOT__vx_decode__DOT____Vcellout__VX_Context_zero__out_b_reg_data[1U];
    vlTOPp->Vortex__DOT__vx_decode__DOT__glob_b_reg_data[2U] 
	= vlTOPp->Vortex__DOT__vx_decode__DOT____Vcellout__VX_Context_zero__out_b_reg_data[2U];
    vlTOPp->Vortex__DOT__vx_decode__DOT__glob_b_reg_data[3U] 
	= vlTOPp->Vortex__DOT__vx_decode__DOT____Vcellout__VX_Context_zero__out_b_reg_data[3U];
}

VL_INLINE_OPT void VVortex::_combo__TOP__11(VVortex__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VVortex::_combo__TOP__11\n"); );
    VVortex* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    // Begin mtask footprint  all: 
    VL_SIGW(__Vtemp181,319,0,10);
    // Body
    vlTOPp->Vortex__DOT__vx_decode__DOT__glob_a_reg_data[4U] 
	= vlSymsp->TOP__Vortex__DOT__vx_decode__DOT__genblk2__BRA__1__KET____DOT__VX_Context_one.out_a_reg_data[0U];
    vlTOPp->Vortex__DOT__vx_decode__DOT__glob_a_reg_data[5U] 
	= vlSymsp->TOP__Vortex__DOT__vx_decode__DOT__genblk2__BRA__1__KET____DOT__VX_Context_one.out_a_reg_data[1U];
    vlTOPp->Vortex__DOT__vx_decode__DOT__glob_a_reg_data[6U] 
	= vlSymsp->TOP__Vortex__DOT__vx_decode__DOT__genblk2__BRA__1__KET____DOT__VX_Context_one.out_a_reg_data[2U];
    vlTOPp->Vortex__DOT__vx_decode__DOT__glob_a_reg_data[7U] 
	= vlSymsp->TOP__Vortex__DOT__vx_decode__DOT__genblk2__BRA__1__KET____DOT__VX_Context_one.out_a_reg_data[3U];
    vlTOPp->Vortex__DOT__vx_decode__DOT__glob_b_reg_data[4U] 
	= vlSymsp->TOP__Vortex__DOT__vx_decode__DOT__genblk2__BRA__1__KET____DOT__VX_Context_one.out_b_reg_data[0U];
    vlTOPp->Vortex__DOT__vx_decode__DOT__glob_b_reg_data[5U] 
	= vlSymsp->TOP__Vortex__DOT__vx_decode__DOT__genblk2__BRA__1__KET____DOT__VX_Context_one.out_b_reg_data[1U];
    vlTOPp->Vortex__DOT__vx_decode__DOT__glob_b_reg_data[6U] 
	= vlSymsp->TOP__Vortex__DOT__vx_decode__DOT__genblk2__BRA__1__KET____DOT__VX_Context_one.out_b_reg_data[2U];
    vlTOPp->Vortex__DOT__vx_decode__DOT__glob_b_reg_data[7U] 
	= vlSymsp->TOP__Vortex__DOT__vx_decode__DOT__genblk2__BRA__1__KET____DOT__VX_Context_one.out_b_reg_data[3U];
    vlTOPp->Vortex__DOT__vx_decode__DOT__glob_a_reg_data[8U] 
	= vlSymsp->TOP__Vortex__DOT__vx_decode__DOT__genblk2__BRA__2__KET____DOT__VX_Context_one.out_a_reg_data[0U];
    vlTOPp->Vortex__DOT__vx_decode__DOT__glob_a_reg_data[9U] 
	= vlSymsp->TOP__Vortex__DOT__vx_decode__DOT__genblk2__BRA__2__KET____DOT__VX_Context_one.out_a_reg_data[1U];
    vlTOPp->Vortex__DOT__vx_decode__DOT__glob_a_reg_data[0xaU] 
	= vlSymsp->TOP__Vortex__DOT__vx_decode__DOT__genblk2__BRA__2__KET____DOT__VX_Context_one.out_a_reg_data[2U];
    vlTOPp->Vortex__DOT__vx_decode__DOT__glob_a_reg_data[0xbU] 
	= vlSymsp->TOP__Vortex__DOT__vx_decode__DOT__genblk2__BRA__2__KET____DOT__VX_Context_one.out_a_reg_data[3U];
    vlTOPp->Vortex__DOT__vx_decode__DOT__glob_b_reg_data[8U] 
	= vlSymsp->TOP__Vortex__DOT__vx_decode__DOT__genblk2__BRA__2__KET____DOT__VX_Context_one.out_b_reg_data[0U];
    vlTOPp->Vortex__DOT__vx_decode__DOT__glob_b_reg_data[9U] 
	= vlSymsp->TOP__Vortex__DOT__vx_decode__DOT__genblk2__BRA__2__KET____DOT__VX_Context_one.out_b_reg_data[1U];
    vlTOPp->Vortex__DOT__vx_decode__DOT__glob_b_reg_data[0xaU] 
	= vlSymsp->TOP__Vortex__DOT__vx_decode__DOT__genblk2__BRA__2__KET____DOT__VX_Context_one.out_b_reg_data[2U];
    vlTOPp->Vortex__DOT__vx_decode__DOT__glob_b_reg_data[0xbU] 
	= vlSymsp->TOP__Vortex__DOT__vx_decode__DOT__genblk2__BRA__2__KET____DOT__VX_Context_one.out_b_reg_data[3U];
    vlTOPp->Vortex__DOT__vx_decode__DOT__glob_a_reg_data[0xcU] 
	= vlSymsp->TOP__Vortex__DOT__vx_decode__DOT__genblk2__BRA__3__KET____DOT__VX_Context_one.out_a_reg_data[0U];
    vlTOPp->Vortex__DOT__vx_decode__DOT__glob_a_reg_data[0xdU] 
	= vlSymsp->TOP__Vortex__DOT__vx_decode__DOT__genblk2__BRA__3__KET____DOT__VX_Context_one.out_a_reg_data[1U];
    vlTOPp->Vortex__DOT__vx_decode__DOT__glob_a_reg_data[0xeU] 
	= vlSymsp->TOP__Vortex__DOT__vx_decode__DOT__genblk2__BRA__3__KET____DOT__VX_Context_one.out_a_reg_data[2U];
    vlTOPp->Vortex__DOT__vx_decode__DOT__glob_a_reg_data[0xfU] 
	= vlSymsp->TOP__Vortex__DOT__vx_decode__DOT__genblk2__BRA__3__KET____DOT__VX_Context_one.out_a_reg_data[3U];
    vlTOPp->Vortex__DOT__vx_decode__DOT__glob_b_reg_data[0xcU] 
	= vlSymsp->TOP__Vortex__DOT__vx_decode__DOT__genblk2__BRA__3__KET____DOT__VX_Context_one.out_b_reg_data[0U];
    vlTOPp->Vortex__DOT__vx_decode__DOT__glob_b_reg_data[0xdU] 
	= vlSymsp->TOP__Vortex__DOT__vx_decode__DOT__genblk2__BRA__3__KET____DOT__VX_Context_one.out_b_reg_data[1U];
    vlTOPp->Vortex__DOT__vx_decode__DOT__glob_b_reg_data[0xeU] 
	= vlSymsp->TOP__Vortex__DOT__vx_decode__DOT__genblk2__BRA__3__KET____DOT__VX_Context_one.out_b_reg_data[2U];
    vlTOPp->Vortex__DOT__vx_decode__DOT__glob_b_reg_data[0xfU] 
	= vlSymsp->TOP__Vortex__DOT__vx_decode__DOT__genblk2__BRA__3__KET____DOT__VX_Context_one.out_b_reg_data[3U];
    vlTOPp->Vortex__DOT__vx_decode__DOT__glob_a_reg_data[0x10U] 
	= vlSymsp->TOP__Vortex__DOT__vx_decode__DOT__genblk2__BRA__4__KET____DOT__VX_Context_one.out_a_reg_data[0U];
    vlTOPp->Vortex__DOT__vx_decode__DOT__glob_a_reg_data[0x11U] 
	= vlSymsp->TOP__Vortex__DOT__vx_decode__DOT__genblk2__BRA__4__KET____DOT__VX_Context_one.out_a_reg_data[1U];
    vlTOPp->Vortex__DOT__vx_decode__DOT__glob_a_reg_data[0x12U] 
	= vlSymsp->TOP__Vortex__DOT__vx_decode__DOT__genblk2__BRA__4__KET____DOT__VX_Context_one.out_a_reg_data[2U];
    vlTOPp->Vortex__DOT__vx_decode__DOT__glob_a_reg_data[0x13U] 
	= vlSymsp->TOP__Vortex__DOT__vx_decode__DOT__genblk2__BRA__4__KET____DOT__VX_Context_one.out_a_reg_data[3U];
    vlTOPp->Vortex__DOT__vx_decode__DOT__glob_b_reg_data[0x10U] 
	= vlSymsp->TOP__Vortex__DOT__vx_decode__DOT__genblk2__BRA__4__KET____DOT__VX_Context_one.out_b_reg_data[0U];
    vlTOPp->Vortex__DOT__vx_decode__DOT__glob_b_reg_data[0x11U] 
	= vlSymsp->TOP__Vortex__DOT__vx_decode__DOT__genblk2__BRA__4__KET____DOT__VX_Context_one.out_b_reg_data[1U];
    vlTOPp->Vortex__DOT__vx_decode__DOT__glob_b_reg_data[0x12U] 
	= vlSymsp->TOP__Vortex__DOT__vx_decode__DOT__genblk2__BRA__4__KET____DOT__VX_Context_one.out_b_reg_data[2U];
    vlTOPp->Vortex__DOT__vx_decode__DOT__glob_b_reg_data[0x13U] 
	= vlSymsp->TOP__Vortex__DOT__vx_decode__DOT__genblk2__BRA__4__KET____DOT__VX_Context_one.out_b_reg_data[3U];
    vlTOPp->Vortex__DOT__vx_decode__DOT__glob_a_reg_data[0x14U] 
	= vlSymsp->TOP__Vortex__DOT__vx_decode__DOT__genblk2__BRA__5__KET____DOT__VX_Context_one.out_a_reg_data[0U];
    vlTOPp->Vortex__DOT__vx_decode__DOT__glob_a_reg_data[0x15U] 
	= vlSymsp->TOP__Vortex__DOT__vx_decode__DOT__genblk2__BRA__5__KET____DOT__VX_Context_one.out_a_reg_data[1U];
    vlTOPp->Vortex__DOT__vx_decode__DOT__glob_a_reg_data[0x16U] 
	= vlSymsp->TOP__Vortex__DOT__vx_decode__DOT__genblk2__BRA__5__KET____DOT__VX_Context_one.out_a_reg_data[2U];
    vlTOPp->Vortex__DOT__vx_decode__DOT__glob_a_reg_data[0x17U] 
	= vlSymsp->TOP__Vortex__DOT__vx_decode__DOT__genblk2__BRA__5__KET____DOT__VX_Context_one.out_a_reg_data[3U];
    vlTOPp->Vortex__DOT__vx_decode__DOT__glob_b_reg_data[0x14U] 
	= vlSymsp->TOP__Vortex__DOT__vx_decode__DOT__genblk2__BRA__5__KET____DOT__VX_Context_one.out_b_reg_data[0U];
    vlTOPp->Vortex__DOT__vx_decode__DOT__glob_b_reg_data[0x15U] 
	= vlSymsp->TOP__Vortex__DOT__vx_decode__DOT__genblk2__BRA__5__KET____DOT__VX_Context_one.out_b_reg_data[1U];
    vlTOPp->Vortex__DOT__vx_decode__DOT__glob_b_reg_data[0x16U] 
	= vlSymsp->TOP__Vortex__DOT__vx_decode__DOT__genblk2__BRA__5__KET____DOT__VX_Context_one.out_b_reg_data[2U];
    vlTOPp->Vortex__DOT__vx_decode__DOT__glob_b_reg_data[0x17U] 
	= vlSymsp->TOP__Vortex__DOT__vx_decode__DOT__genblk2__BRA__5__KET____DOT__VX_Context_one.out_b_reg_data[3U];
    vlTOPp->Vortex__DOT__vx_decode__DOT__glob_a_reg_data[0x18U] 
	= vlSymsp->TOP__Vortex__DOT__vx_decode__DOT__genblk2__BRA__6__KET____DOT__VX_Context_one.out_a_reg_data[0U];
    vlTOPp->Vortex__DOT__vx_decode__DOT__glob_a_reg_data[0x19U] 
	= vlSymsp->TOP__Vortex__DOT__vx_decode__DOT__genblk2__BRA__6__KET____DOT__VX_Context_one.out_a_reg_data[1U];
    vlTOPp->Vortex__DOT__vx_decode__DOT__glob_a_reg_data[0x1aU] 
	= vlSymsp->TOP__Vortex__DOT__vx_decode__DOT__genblk2__BRA__6__KET____DOT__VX_Context_one.out_a_reg_data[2U];
    vlTOPp->Vortex__DOT__vx_decode__DOT__glob_a_reg_data[0x1bU] 
	= vlSymsp->TOP__Vortex__DOT__vx_decode__DOT__genblk2__BRA__6__KET____DOT__VX_Context_one.out_a_reg_data[3U];
    vlTOPp->Vortex__DOT__vx_decode__DOT__glob_b_reg_data[0x18U] 
	= vlSymsp->TOP__Vortex__DOT__vx_decode__DOT__genblk2__BRA__6__KET____DOT__VX_Context_one.out_b_reg_data[0U];
    vlTOPp->Vortex__DOT__vx_decode__DOT__glob_b_reg_data[0x19U] 
	= vlSymsp->TOP__Vortex__DOT__vx_decode__DOT__genblk2__BRA__6__KET____DOT__VX_Context_one.out_b_reg_data[1U];
    vlTOPp->Vortex__DOT__vx_decode__DOT__glob_b_reg_data[0x1aU] 
	= vlSymsp->TOP__Vortex__DOT__vx_decode__DOT__genblk2__BRA__6__KET____DOT__VX_Context_one.out_b_reg_data[2U];
    vlTOPp->Vortex__DOT__vx_decode__DOT__glob_b_reg_data[0x1bU] 
	= vlSymsp->TOP__Vortex__DOT__vx_decode__DOT__genblk2__BRA__6__KET____DOT__VX_Context_one.out_b_reg_data[3U];
    vlTOPp->Vortex__DOT__vx_decode__DOT__glob_a_reg_data[0x1cU] 
	= vlSymsp->TOP__Vortex__DOT__vx_decode__DOT__genblk2__BRA__7__KET____DOT__VX_Context_one.out_a_reg_data[0U];
    vlTOPp->Vortex__DOT__vx_decode__DOT__glob_a_reg_data[0x1dU] 
	= vlSymsp->TOP__Vortex__DOT__vx_decode__DOT__genblk2__BRA__7__KET____DOT__VX_Context_one.out_a_reg_data[1U];
    vlTOPp->Vortex__DOT__vx_decode__DOT__glob_a_reg_data[0x1eU] 
	= vlSymsp->TOP__Vortex__DOT__vx_decode__DOT__genblk2__BRA__7__KET____DOT__VX_Context_one.out_a_reg_data[2U];
    vlTOPp->Vortex__DOT__vx_decode__DOT__glob_a_reg_data[0x1fU] 
	= vlSymsp->TOP__Vortex__DOT__vx_decode__DOT__genblk2__BRA__7__KET____DOT__VX_Context_one.out_a_reg_data[3U];
    vlTOPp->Vortex__DOT__vx_decode__DOT__glob_b_reg_data[0x1cU] 
	= vlSymsp->TOP__Vortex__DOT__vx_decode__DOT__genblk2__BRA__7__KET____DOT__VX_Context_one.out_b_reg_data[0U];
    vlTOPp->Vortex__DOT__vx_decode__DOT__glob_b_reg_data[0x1dU] 
	= vlSymsp->TOP__Vortex__DOT__vx_decode__DOT__genblk2__BRA__7__KET____DOT__VX_Context_one.out_b_reg_data[1U];
    vlTOPp->Vortex__DOT__vx_decode__DOT__glob_b_reg_data[0x1eU] 
	= vlSymsp->TOP__Vortex__DOT__vx_decode__DOT__genblk2__BRA__7__KET____DOT__VX_Context_one.out_b_reg_data[2U];
    vlTOPp->Vortex__DOT__vx_decode__DOT__glob_b_reg_data[0x1fU] 
	= vlSymsp->TOP__Vortex__DOT__vx_decode__DOT__genblk2__BRA__7__KET____DOT__VX_Context_one.out_b_reg_data[3U];
    // ALWAYS at VX_decode.v:238
    if ((0U == (0xfU & ((vlTOPp->Vortex__DOT__vx_f_d_reg__DOT__f_d_reg__DOT__value[1U] 
			 << 0x1cU) | (vlTOPp->Vortex__DOT__vx_f_d_reg__DOT__f_d_reg__DOT__value[0U] 
				      >> 4U))))) {
	vlTOPp->Vortex__DOT__vx_decode__DOT__temp_out_a_reg_data[0U] 
	    = vlTOPp->Vortex__DOT__vx_decode__DOT__glob_a_reg_data[0U];
	vlTOPp->Vortex__DOT__vx_decode__DOT__temp_out_a_reg_data[1U] 
	    = vlTOPp->Vortex__DOT__vx_decode__DOT__glob_a_reg_data[1U];
	vlTOPp->Vortex__DOT__vx_decode__DOT__temp_out_a_reg_data[2U] 
	    = vlTOPp->Vortex__DOT__vx_decode__DOT__glob_a_reg_data[2U];
	vlTOPp->Vortex__DOT__vx_decode__DOT__temp_out_a_reg_data[3U] 
	    = vlTOPp->Vortex__DOT__vx_decode__DOT__glob_a_reg_data[3U];
    }
    if ((1U == (0xfU & ((vlTOPp->Vortex__DOT__vx_f_d_reg__DOT__f_d_reg__DOT__value[1U] 
			 << 0x1cU) | (vlTOPp->Vortex__DOT__vx_f_d_reg__DOT__f_d_reg__DOT__value[0U] 
				      >> 4U))))) {
	vlTOPp->Vortex__DOT__vx_decode__DOT__temp_out_a_reg_data[0U] 
	    = vlTOPp->Vortex__DOT__vx_decode__DOT__glob_a_reg_data[4U];
	vlTOPp->Vortex__DOT__vx_decode__DOT__temp_out_a_reg_data[1U] 
	    = vlTOPp->Vortex__DOT__vx_decode__DOT__glob_a_reg_data[5U];
	vlTOPp->Vortex__DOT__vx_decode__DOT__temp_out_a_reg_data[2U] 
	    = vlTOPp->Vortex__DOT__vx_decode__DOT__glob_a_reg_data[6U];
	vlTOPp->Vortex__DOT__vx_decode__DOT__temp_out_a_reg_data[3U] 
	    = vlTOPp->Vortex__DOT__vx_decode__DOT__glob_a_reg_data[7U];
    }
    if ((2U == (0xfU & ((vlTOPp->Vortex__DOT__vx_f_d_reg__DOT__f_d_reg__DOT__value[1U] 
			 << 0x1cU) | (vlTOPp->Vortex__DOT__vx_f_d_reg__DOT__f_d_reg__DOT__value[0U] 
				      >> 4U))))) {
	vlTOPp->Vortex__DOT__vx_decode__DOT__temp_out_a_reg_data[0U] 
	    = vlTOPp->Vortex__DOT__vx_decode__DOT__glob_a_reg_data[8U];
	vlTOPp->Vortex__DOT__vx_decode__DOT__temp_out_a_reg_data[1U] 
	    = vlTOPp->Vortex__DOT__vx_decode__DOT__glob_a_reg_data[9U];
	vlTOPp->Vortex__DOT__vx_decode__DOT__temp_out_a_reg_data[2U] 
	    = vlTOPp->Vortex__DOT__vx_decode__DOT__glob_a_reg_data[0xaU];
	vlTOPp->Vortex__DOT__vx_decode__DOT__temp_out_a_reg_data[3U] 
	    = vlTOPp->Vortex__DOT__vx_decode__DOT__glob_a_reg_data[0xbU];
    }
    if ((3U == (0xfU & ((vlTOPp->Vortex__DOT__vx_f_d_reg__DOT__f_d_reg__DOT__value[1U] 
			 << 0x1cU) | (vlTOPp->Vortex__DOT__vx_f_d_reg__DOT__f_d_reg__DOT__value[0U] 
				      >> 4U))))) {
	vlTOPp->Vortex__DOT__vx_decode__DOT__temp_out_a_reg_data[0U] 
	    = vlTOPp->Vortex__DOT__vx_decode__DOT__glob_a_reg_data[0xcU];
	vlTOPp->Vortex__DOT__vx_decode__DOT__temp_out_a_reg_data[1U] 
	    = vlTOPp->Vortex__DOT__vx_decode__DOT__glob_a_reg_data[0xdU];
	vlTOPp->Vortex__DOT__vx_decode__DOT__temp_out_a_reg_data[2U] 
	    = vlTOPp->Vortex__DOT__vx_decode__DOT__glob_a_reg_data[0xeU];
	vlTOPp->Vortex__DOT__vx_decode__DOT__temp_out_a_reg_data[3U] 
	    = vlTOPp->Vortex__DOT__vx_decode__DOT__glob_a_reg_data[0xfU];
    }
    if ((4U == (0xfU & ((vlTOPp->Vortex__DOT__vx_f_d_reg__DOT__f_d_reg__DOT__value[1U] 
			 << 0x1cU) | (vlTOPp->Vortex__DOT__vx_f_d_reg__DOT__f_d_reg__DOT__value[0U] 
				      >> 4U))))) {
	vlTOPp->Vortex__DOT__vx_decode__DOT__temp_out_a_reg_data[0U] 
	    = vlTOPp->Vortex__DOT__vx_decode__DOT__glob_a_reg_data[0x10U];
	vlTOPp->Vortex__DOT__vx_decode__DOT__temp_out_a_reg_data[1U] 
	    = vlTOPp->Vortex__DOT__vx_decode__DOT__glob_a_reg_data[0x11U];
	vlTOPp->Vortex__DOT__vx_decode__DOT__temp_out_a_reg_data[2U] 
	    = vlTOPp->Vortex__DOT__vx_decode__DOT__glob_a_reg_data[0x12U];
	vlTOPp->Vortex__DOT__vx_decode__DOT__temp_out_a_reg_data[3U] 
	    = vlTOPp->Vortex__DOT__vx_decode__DOT__glob_a_reg_data[0x13U];
    }
    if ((5U == (0xfU & ((vlTOPp->Vortex__DOT__vx_f_d_reg__DOT__f_d_reg__DOT__value[1U] 
			 << 0x1cU) | (vlTOPp->Vortex__DOT__vx_f_d_reg__DOT__f_d_reg__DOT__value[0U] 
				      >> 4U))))) {
	vlTOPp->Vortex__DOT__vx_decode__DOT__temp_out_a_reg_data[0U] 
	    = vlTOPp->Vortex__DOT__vx_decode__DOT__glob_a_reg_data[0x14U];
	vlTOPp->Vortex__DOT__vx_decode__DOT__temp_out_a_reg_data[1U] 
	    = vlTOPp->Vortex__DOT__vx_decode__DOT__glob_a_reg_data[0x15U];
	vlTOPp->Vortex__DOT__vx_decode__DOT__temp_out_a_reg_data[2U] 
	    = vlTOPp->Vortex__DOT__vx_decode__DOT__glob_a_reg_data[0x16U];
	vlTOPp->Vortex__DOT__vx_decode__DOT__temp_out_a_reg_data[3U] 
	    = vlTOPp->Vortex__DOT__vx_decode__DOT__glob_a_reg_data[0x17U];
    }
    if ((6U == (0xfU & ((vlTOPp->Vortex__DOT__vx_f_d_reg__DOT__f_d_reg__DOT__value[1U] 
			 << 0x1cU) | (vlTOPp->Vortex__DOT__vx_f_d_reg__DOT__f_d_reg__DOT__value[0U] 
				      >> 4U))))) {
	vlTOPp->Vortex__DOT__vx_decode__DOT__temp_out_a_reg_data[0U] 
	    = vlTOPp->Vortex__DOT__vx_decode__DOT__glob_a_reg_data[0x18U];
	vlTOPp->Vortex__DOT__vx_decode__DOT__temp_out_a_reg_data[1U] 
	    = vlTOPp->Vortex__DOT__vx_decode__DOT__glob_a_reg_data[0x19U];
	vlTOPp->Vortex__DOT__vx_decode__DOT__temp_out_a_reg_data[2U] 
	    = vlTOPp->Vortex__DOT__vx_decode__DOT__glob_a_reg_data[0x1aU];
	vlTOPp->Vortex__DOT__vx_decode__DOT__temp_out_a_reg_data[3U] 
	    = vlTOPp->Vortex__DOT__vx_decode__DOT__glob_a_reg_data[0x1bU];
    }
    if ((7U == (0xfU & ((vlTOPp->Vortex__DOT__vx_f_d_reg__DOT__f_d_reg__DOT__value[1U] 
			 << 0x1cU) | (vlTOPp->Vortex__DOT__vx_f_d_reg__DOT__f_d_reg__DOT__value[0U] 
				      >> 4U))))) {
	vlTOPp->Vortex__DOT__vx_decode__DOT__temp_out_a_reg_data[0U] 
	    = vlTOPp->Vortex__DOT__vx_decode__DOT__glob_a_reg_data[0x1cU];
	vlTOPp->Vortex__DOT__vx_decode__DOT__temp_out_a_reg_data[1U] 
	    = vlTOPp->Vortex__DOT__vx_decode__DOT__glob_a_reg_data[0x1dU];
	vlTOPp->Vortex__DOT__vx_decode__DOT__temp_out_a_reg_data[2U] 
	    = vlTOPp->Vortex__DOT__vx_decode__DOT__glob_a_reg_data[0x1eU];
	vlTOPp->Vortex__DOT__vx_decode__DOT__temp_out_a_reg_data[3U] 
	    = vlTOPp->Vortex__DOT__vx_decode__DOT__glob_a_reg_data[0x1fU];
    }
    // ALWAYS at VX_decode.v:238
    if ((0U == (0xfU & ((vlTOPp->Vortex__DOT__vx_f_d_reg__DOT__f_d_reg__DOT__value[1U] 
			 << 0x1cU) | (vlTOPp->Vortex__DOT__vx_f_d_reg__DOT__f_d_reg__DOT__value[0U] 
				      >> 4U))))) {
	vlTOPp->Vortex__DOT__vx_decode__DOT__temp_out_b_reg_data[0U] 
	    = vlTOPp->Vortex__DOT__vx_decode__DOT__glob_b_reg_data[0U];
	vlTOPp->Vortex__DOT__vx_decode__DOT__temp_out_b_reg_data[1U] 
	    = vlTOPp->Vortex__DOT__vx_decode__DOT__glob_b_reg_data[1U];
	vlTOPp->Vortex__DOT__vx_decode__DOT__temp_out_b_reg_data[2U] 
	    = vlTOPp->Vortex__DOT__vx_decode__DOT__glob_b_reg_data[2U];
	vlTOPp->Vortex__DOT__vx_decode__DOT__temp_out_b_reg_data[3U] 
	    = vlTOPp->Vortex__DOT__vx_decode__DOT__glob_b_reg_data[3U];
    }
    if ((1U == (0xfU & ((vlTOPp->Vortex__DOT__vx_f_d_reg__DOT__f_d_reg__DOT__value[1U] 
			 << 0x1cU) | (vlTOPp->Vortex__DOT__vx_f_d_reg__DOT__f_d_reg__DOT__value[0U] 
				      >> 4U))))) {
	vlTOPp->Vortex__DOT__vx_decode__DOT__temp_out_b_reg_data[0U] 
	    = vlTOPp->Vortex__DOT__vx_decode__DOT__glob_b_reg_data[4U];
	vlTOPp->Vortex__DOT__vx_decode__DOT__temp_out_b_reg_data[1U] 
	    = vlTOPp->Vortex__DOT__vx_decode__DOT__glob_b_reg_data[5U];
	vlTOPp->Vortex__DOT__vx_decode__DOT__temp_out_b_reg_data[2U] 
	    = vlTOPp->Vortex__DOT__vx_decode__DOT__glob_b_reg_data[6U];
	vlTOPp->Vortex__DOT__vx_decode__DOT__temp_out_b_reg_data[3U] 
	    = vlTOPp->Vortex__DOT__vx_decode__DOT__glob_b_reg_data[7U];
    }
    if ((2U == (0xfU & ((vlTOPp->Vortex__DOT__vx_f_d_reg__DOT__f_d_reg__DOT__value[1U] 
			 << 0x1cU) | (vlTOPp->Vortex__DOT__vx_f_d_reg__DOT__f_d_reg__DOT__value[0U] 
				      >> 4U))))) {
	vlTOPp->Vortex__DOT__vx_decode__DOT__temp_out_b_reg_data[0U] 
	    = vlTOPp->Vortex__DOT__vx_decode__DOT__glob_b_reg_data[8U];
	vlTOPp->Vortex__DOT__vx_decode__DOT__temp_out_b_reg_data[1U] 
	    = vlTOPp->Vortex__DOT__vx_decode__DOT__glob_b_reg_data[9U];
	vlTOPp->Vortex__DOT__vx_decode__DOT__temp_out_b_reg_data[2U] 
	    = vlTOPp->Vortex__DOT__vx_decode__DOT__glob_b_reg_data[0xaU];
	vlTOPp->Vortex__DOT__vx_decode__DOT__temp_out_b_reg_data[3U] 
	    = vlTOPp->Vortex__DOT__vx_decode__DOT__glob_b_reg_data[0xbU];
    }
    if ((3U == (0xfU & ((vlTOPp->Vortex__DOT__vx_f_d_reg__DOT__f_d_reg__DOT__value[1U] 
			 << 0x1cU) | (vlTOPp->Vortex__DOT__vx_f_d_reg__DOT__f_d_reg__DOT__value[0U] 
				      >> 4U))))) {
	vlTOPp->Vortex__DOT__vx_decode__DOT__temp_out_b_reg_data[0U] 
	    = vlTOPp->Vortex__DOT__vx_decode__DOT__glob_b_reg_data[0xcU];
	vlTOPp->Vortex__DOT__vx_decode__DOT__temp_out_b_reg_data[1U] 
	    = vlTOPp->Vortex__DOT__vx_decode__DOT__glob_b_reg_data[0xdU];
	vlTOPp->Vortex__DOT__vx_decode__DOT__temp_out_b_reg_data[2U] 
	    = vlTOPp->Vortex__DOT__vx_decode__DOT__glob_b_reg_data[0xeU];
	vlTOPp->Vortex__DOT__vx_decode__DOT__temp_out_b_reg_data[3U] 
	    = vlTOPp->Vortex__DOT__vx_decode__DOT__glob_b_reg_data[0xfU];
    }
    if ((4U == (0xfU & ((vlTOPp->Vortex__DOT__vx_f_d_reg__DOT__f_d_reg__DOT__value[1U] 
			 << 0x1cU) | (vlTOPp->Vortex__DOT__vx_f_d_reg__DOT__f_d_reg__DOT__value[0U] 
				      >> 4U))))) {
	vlTOPp->Vortex__DOT__vx_decode__DOT__temp_out_b_reg_data[0U] 
	    = vlTOPp->Vortex__DOT__vx_decode__DOT__glob_b_reg_data[0x10U];
	vlTOPp->Vortex__DOT__vx_decode__DOT__temp_out_b_reg_data[1U] 
	    = vlTOPp->Vortex__DOT__vx_decode__DOT__glob_b_reg_data[0x11U];
	vlTOPp->Vortex__DOT__vx_decode__DOT__temp_out_b_reg_data[2U] 
	    = vlTOPp->Vortex__DOT__vx_decode__DOT__glob_b_reg_data[0x12U];
	vlTOPp->Vortex__DOT__vx_decode__DOT__temp_out_b_reg_data[3U] 
	    = vlTOPp->Vortex__DOT__vx_decode__DOT__glob_b_reg_data[0x13U];
    }
    if ((5U == (0xfU & ((vlTOPp->Vortex__DOT__vx_f_d_reg__DOT__f_d_reg__DOT__value[1U] 
			 << 0x1cU) | (vlTOPp->Vortex__DOT__vx_f_d_reg__DOT__f_d_reg__DOT__value[0U] 
				      >> 4U))))) {
	vlTOPp->Vortex__DOT__vx_decode__DOT__temp_out_b_reg_data[0U] 
	    = vlTOPp->Vortex__DOT__vx_decode__DOT__glob_b_reg_data[0x14U];
	vlTOPp->Vortex__DOT__vx_decode__DOT__temp_out_b_reg_data[1U] 
	    = vlTOPp->Vortex__DOT__vx_decode__DOT__glob_b_reg_data[0x15U];
	vlTOPp->Vortex__DOT__vx_decode__DOT__temp_out_b_reg_data[2U] 
	    = vlTOPp->Vortex__DOT__vx_decode__DOT__glob_b_reg_data[0x16U];
	vlTOPp->Vortex__DOT__vx_decode__DOT__temp_out_b_reg_data[3U] 
	    = vlTOPp->Vortex__DOT__vx_decode__DOT__glob_b_reg_data[0x17U];
    }
    if ((6U == (0xfU & ((vlTOPp->Vortex__DOT__vx_f_d_reg__DOT__f_d_reg__DOT__value[1U] 
			 << 0x1cU) | (vlTOPp->Vortex__DOT__vx_f_d_reg__DOT__f_d_reg__DOT__value[0U] 
				      >> 4U))))) {
	vlTOPp->Vortex__DOT__vx_decode__DOT__temp_out_b_reg_data[0U] 
	    = vlTOPp->Vortex__DOT__vx_decode__DOT__glob_b_reg_data[0x18U];
	vlTOPp->Vortex__DOT__vx_decode__DOT__temp_out_b_reg_data[1U] 
	    = vlTOPp->Vortex__DOT__vx_decode__DOT__glob_b_reg_data[0x19U];
	vlTOPp->Vortex__DOT__vx_decode__DOT__temp_out_b_reg_data[2U] 
	    = vlTOPp->Vortex__DOT__vx_decode__DOT__glob_b_reg_data[0x1aU];
	vlTOPp->Vortex__DOT__vx_decode__DOT__temp_out_b_reg_data[3U] 
	    = vlTOPp->Vortex__DOT__vx_decode__DOT__glob_b_reg_data[0x1bU];
    }
    if ((7U == (0xfU & ((vlTOPp->Vortex__DOT__vx_f_d_reg__DOT__f_d_reg__DOT__value[1U] 
			 << 0x1cU) | (vlTOPp->Vortex__DOT__vx_f_d_reg__DOT__f_d_reg__DOT__value[0U] 
				      >> 4U))))) {
	vlTOPp->Vortex__DOT__vx_decode__DOT__temp_out_b_reg_data[0U] 
	    = vlTOPp->Vortex__DOT__vx_decode__DOT__glob_b_reg_data[0x1cU];
	vlTOPp->Vortex__DOT__vx_decode__DOT__temp_out_b_reg_data[1U] 
	    = vlTOPp->Vortex__DOT__vx_decode__DOT__glob_b_reg_data[0x1dU];
	vlTOPp->Vortex__DOT__vx_decode__DOT__temp_out_b_reg_data[2U] 
	    = vlTOPp->Vortex__DOT__vx_decode__DOT__glob_b_reg_data[0x1eU];
	vlTOPp->Vortex__DOT__vx_decode__DOT__temp_out_b_reg_data[3U] 
	    = vlTOPp->Vortex__DOT__vx_decode__DOT__glob_b_reg_data[0x1fU];
    }
    vlSymsp->TOP__Vortex__DOT__VX_frE_to_bckE_req.a_reg_data[0U] 
	= vlTOPp->Vortex__DOT__vx_decode__DOT__temp_out_a_reg_data[0U];
    vlSymsp->TOP__Vortex__DOT__VX_frE_to_bckE_req.a_reg_data[1U] 
	= vlTOPp->Vortex__DOT__vx_decode__DOT__temp_out_a_reg_data[1U];
    vlSymsp->TOP__Vortex__DOT__VX_frE_to_bckE_req.a_reg_data[2U] 
	= vlTOPp->Vortex__DOT__vx_decode__DOT__temp_out_a_reg_data[2U];
    vlSymsp->TOP__Vortex__DOT__VX_frE_to_bckE_req.a_reg_data[3U] 
	= vlTOPp->Vortex__DOT__vx_decode__DOT__temp_out_a_reg_data[3U];
    vlSymsp->TOP__Vortex__DOT__VX_frE_to_bckE_req.b_reg_data[0U] 
	= vlTOPp->Vortex__DOT__vx_decode__DOT__temp_out_b_reg_data[0U];
    vlSymsp->TOP__Vortex__DOT__VX_frE_to_bckE_req.b_reg_data[1U] 
	= vlTOPp->Vortex__DOT__vx_decode__DOT__temp_out_b_reg_data[1U];
    vlSymsp->TOP__Vortex__DOT__VX_frE_to_bckE_req.b_reg_data[2U] 
	= vlTOPp->Vortex__DOT__vx_decode__DOT__temp_out_b_reg_data[2U];
    vlSymsp->TOP__Vortex__DOT__VX_frE_to_bckE_req.b_reg_data[3U] 
	= vlTOPp->Vortex__DOT__vx_decode__DOT__temp_out_b_reg_data[3U];
    __Vtemp181[0U] = (IData)((((QData)((IData)((((vlTOPp->Vortex__DOT__vx_f_d_reg__DOT__f_d_reg__DOT__value[2U] 
						  >> 1U) 
						 & (0x33U 
						    == 
						    (0x7fU 
						     & ((vlTOPp->Vortex__DOT__vx_f_d_reg__DOT__f_d_reg__DOT__value[2U] 
							 << 0x18U) 
							| (vlTOPp->Vortex__DOT__vx_f_d_reg__DOT__f_d_reg__DOT__value[1U] 
							   >> 8U)))))
						 ? (IData)(vlTOPp->Vortex__DOT__vx_decode__DOT__mul_alu)
						 : (IData)(vlTOPp->Vortex__DOT__vx_decode__DOT__temp_final_alu)))) 
			       << 0x2cU) | (((QData)((IData)(
							     (((((0x6fU 
								  == 
								  (0x7fU 
								   & ((vlTOPp->Vortex__DOT__vx_f_d_reg__DOT__f_d_reg__DOT__value[2U] 
								       << 0x18U) 
								      | (vlTOPp->Vortex__DOT__vx_f_d_reg__DOT__f_d_reg__DOT__value[1U] 
									 >> 8U)))) 
								 | (0x67U 
								    == 
								    (0x7fU 
								     & ((vlTOPp->Vortex__DOT__vx_f_d_reg__DOT__f_d_reg__DOT__value[2U] 
									 << 0x18U) 
									| (vlTOPp->Vortex__DOT__vx_f_d_reg__DOT__f_d_reg__DOT__value[1U] 
									   >> 8U))))) 
								| (IData)(vlTOPp->Vortex__DOT__vx_decode__DOT__is_jalrs)) 
							       | ((0x73U 
								   == 
								   (0x7fU 
								    & ((vlTOPp->Vortex__DOT__vx_f_d_reg__DOT__f_d_reg__DOT__value[2U] 
									<< 0x18U) 
								       | (vlTOPp->Vortex__DOT__vx_f_d_reg__DOT__f_d_reg__DOT__value[1U] 
									  >> 8U)))) 
								  & (0U 
								     == 
								     (7U 
								      & ((vlTOPp->Vortex__DOT__vx_f_d_reg__DOT__f_d_reg__DOT__value[2U] 
									  << 0xcU) 
									 | (vlTOPp->Vortex__DOT__vx_f_d_reg__DOT__f_d_reg__DOT__value[1U] 
									    >> 0x14U))))))
							       ? 3U
							       : 
							      ((3U 
								== 
								(0x7fU 
								 & ((vlTOPp->Vortex__DOT__vx_f_d_reg__DOT__f_d_reg__DOT__value[2U] 
								     << 0x18U) 
								    | (vlTOPp->Vortex__DOT__vx_f_d_reg__DOT__f_d_reg__DOT__value[1U] 
								       >> 8U))))
							        ? 2U
							        : 
							       ((((((IData)(vlTOPp->Vortex__DOT__vx_decode__DOT__is_itype) 
								    | (0x33U 
								       == 
								       (0x7fU 
									& ((vlTOPp->Vortex__DOT__vx_f_d_reg__DOT__f_d_reg__DOT__value[2U] 
									    << 0x18U) 
									   | (vlTOPp->Vortex__DOT__vx_f_d_reg__DOT__f_d_reg__DOT__value[1U] 
									      >> 8U))))) 
								   | (0x37U 
								      == 
								      (0x7fU 
								       & ((vlTOPp->Vortex__DOT__vx_f_d_reg__DOT__f_d_reg__DOT__value[2U] 
									   << 0x18U) 
									  | (vlTOPp->Vortex__DOT__vx_f_d_reg__DOT__f_d_reg__DOT__value[1U] 
									     >> 8U))))) 
								  | (0x17U 
								     == 
								     (0x7fU 
								      & ((vlTOPp->Vortex__DOT__vx_f_d_reg__DOT__f_d_reg__DOT__value[2U] 
									  << 0x18U) 
									 | (vlTOPp->Vortex__DOT__vx_f_d_reg__DOT__f_d_reg__DOT__value[1U] 
									    >> 8U))))) 
								 | (IData)(vlTOPp->Vortex__DOT__vx_decode__DOT__is_csr))
								 ? 1U
								 : 0U))))) 
					     << 0x2aU) 
					    | (((QData)((IData)(
								(1U 
								 & (((IData)(vlTOPp->Vortex__DOT__vx_decode__DOT__is_itype) 
								     | (0x23U 
									== 
									(0x7fU 
									 & ((vlTOPp->Vortex__DOT__vx_f_d_reg__DOT__f_d_reg__DOT__value[2U] 
									     << 0x18U) 
									    | (vlTOPp->Vortex__DOT__vx_f_d_reg__DOT__f_d_reg__DOT__value[1U] 
									       >> 8U)))))
								     ? 1U
								     : 0U)))) 
						<< 0x29U) 
					       | (((QData)((IData)(vlSymsp->TOP__Vortex__DOT__VX_frE_to_bckE_req.itype_immed)) 
						   << 9U) 
						  | (QData)((IData)(
								    ((0x1c0U 
								      & (((3U 
									   == 
									   (0x7fU 
									    & ((vlTOPp->Vortex__DOT__vx_f_d_reg__DOT__f_d_reg__DOT__value[2U] 
										<< 0x18U) 
									       | (vlTOPp->Vortex__DOT__vx_f_d_reg__DOT__f_d_reg__DOT__value[1U] 
										>> 8U))))
									   ? 
									  ((vlTOPp->Vortex__DOT__vx_f_d_reg__DOT__f_d_reg__DOT__value[2U] 
									    << 0xcU) 
									   | (vlTOPp->Vortex__DOT__vx_f_d_reg__DOT__f_d_reg__DOT__value[1U] 
									      >> 0x14U))
									   : 7U) 
									 << 6U)) 
								     | ((0x38U 
									 & (((0x23U 
									      == 
									      (0x7fU 
									       & ((vlTOPp->Vortex__DOT__vx_f_d_reg__DOT__f_d_reg__DOT__value[2U] 
										<< 0x18U) 
										| (vlTOPp->Vortex__DOT__vx_f_d_reg__DOT__f_d_reg__DOT__value[1U] 
										>> 8U))))
									      ? 
									     ((vlTOPp->Vortex__DOT__vx_f_d_reg__DOT__f_d_reg__DOT__value[2U] 
									       << 0xcU) 
									      | (vlTOPp->Vortex__DOT__vx_f_d_reg__DOT__f_d_reg__DOT__value[1U] 
										>> 0x14U))
									      : 7U) 
									    << 3U)) 
									| (IData)(vlSymsp->TOP__Vortex__DOT__VX_frE_to_bckE_req.branch_type))))))))));
    __Vtemp181[1U] = ((0xfffe0000U & (vlSymsp->TOP__Vortex__DOT__VX_frE_to_bckE_req.b_reg_data[0U] 
				      << 0x11U)) | (IData)(
							   ((((QData)((IData)(
									      (((vlTOPp->Vortex__DOT__vx_f_d_reg__DOT__f_d_reg__DOT__value[2U] 
										>> 1U) 
										& (0x33U 
										== 
										(0x7fU 
										& ((vlTOPp->Vortex__DOT__vx_f_d_reg__DOT__f_d_reg__DOT__value[2U] 
										<< 0x18U) 
										| (vlTOPp->Vortex__DOT__vx_f_d_reg__DOT__f_d_reg__DOT__value[1U] 
										>> 8U)))))
									        ? (IData)(vlTOPp->Vortex__DOT__vx_decode__DOT__mul_alu)
									        : (IData)(vlTOPp->Vortex__DOT__vx_decode__DOT__temp_final_alu)))) 
							      << 0x2cU) 
							     | (((QData)((IData)(
										(((((0x6fU 
										== 
										(0x7fU 
										& ((vlTOPp->Vortex__DOT__vx_f_d_reg__DOT__f_d_reg__DOT__value[2U] 
										<< 0x18U) 
										| (vlTOPp->Vortex__DOT__vx_f_d_reg__DOT__f_d_reg__DOT__value[1U] 
										>> 8U)))) 
										| (0x67U 
										== 
										(0x7fU 
										& ((vlTOPp->Vortex__DOT__vx_f_d_reg__DOT__f_d_reg__DOT__value[2U] 
										<< 0x18U) 
										| (vlTOPp->Vortex__DOT__vx_f_d_reg__DOT__f_d_reg__DOT__value[1U] 
										>> 8U))))) 
										| (IData)(vlTOPp->Vortex__DOT__vx_decode__DOT__is_jalrs)) 
										| ((0x73U 
										== 
										(0x7fU 
										& ((vlTOPp->Vortex__DOT__vx_f_d_reg__DOT__f_d_reg__DOT__value[2U] 
										<< 0x18U) 
										| (vlTOPp->Vortex__DOT__vx_f_d_reg__DOT__f_d_reg__DOT__value[1U] 
										>> 8U)))) 
										& (0U 
										== 
										(7U 
										& ((vlTOPp->Vortex__DOT__vx_f_d_reg__DOT__f_d_reg__DOT__value[2U] 
										<< 0xcU) 
										| (vlTOPp->Vortex__DOT__vx_f_d_reg__DOT__f_d_reg__DOT__value[1U] 
										>> 0x14U))))))
										 ? 3U
										 : 
										((3U 
										== 
										(0x7fU 
										& ((vlTOPp->Vortex__DOT__vx_f_d_reg__DOT__f_d_reg__DOT__value[2U] 
										<< 0x18U) 
										| (vlTOPp->Vortex__DOT__vx_f_d_reg__DOT__f_d_reg__DOT__value[1U] 
										>> 8U))))
										 ? 2U
										 : 
										((((((IData)(vlTOPp->Vortex__DOT__vx_decode__DOT__is_itype) 
										| (0x33U 
										== 
										(0x7fU 
										& ((vlTOPp->Vortex__DOT__vx_f_d_reg__DOT__f_d_reg__DOT__value[2U] 
										<< 0x18U) 
										| (vlTOPp->Vortex__DOT__vx_f_d_reg__DOT__f_d_reg__DOT__value[1U] 
										>> 8U))))) 
										| (0x37U 
										== 
										(0x7fU 
										& ((vlTOPp->Vortex__DOT__vx_f_d_reg__DOT__f_d_reg__DOT__value[2U] 
										<< 0x18U) 
										| (vlTOPp->Vortex__DOT__vx_f_d_reg__DOT__f_d_reg__DOT__value[1U] 
										>> 8U))))) 
										| (0x17U 
										== 
										(0x7fU 
										& ((vlTOPp->Vortex__DOT__vx_f_d_reg__DOT__f_d_reg__DOT__value[2U] 
										<< 0x18U) 
										| (vlTOPp->Vortex__DOT__vx_f_d_reg__DOT__f_d_reg__DOT__value[1U] 
										>> 8U))))) 
										| (IData)(vlTOPp->Vortex__DOT__vx_decode__DOT__is_csr))
										 ? 1U
										 : 0U))))) 
								 << 0x2aU) 
								| (((QData)((IData)(
										(1U 
										& (((IData)(vlTOPp->Vortex__DOT__vx_decode__DOT__is_itype) 
										| (0x23U 
										== 
										(0x7fU 
										& ((vlTOPp->Vortex__DOT__vx_f_d_reg__DOT__f_d_reg__DOT__value[2U] 
										<< 0x18U) 
										| (vlTOPp->Vortex__DOT__vx_f_d_reg__DOT__f_d_reg__DOT__value[1U] 
										>> 8U)))))
										 ? 1U
										 : 0U)))) 
								    << 0x29U) 
								   | (((QData)((IData)(vlSymsp->TOP__Vortex__DOT__VX_frE_to_bckE_req.itype_immed)) 
								       << 9U) 
								      | (QData)((IData)(
										((0x1c0U 
										& (((3U 
										== 
										(0x7fU 
										& ((vlTOPp->Vortex__DOT__vx_f_d_reg__DOT__f_d_reg__DOT__value[2U] 
										<< 0x18U) 
										| (vlTOPp->Vortex__DOT__vx_f_d_reg__DOT__f_d_reg__DOT__value[1U] 
										>> 8U))))
										 ? 
										((vlTOPp->Vortex__DOT__vx_f_d_reg__DOT__f_d_reg__DOT__value[2U] 
										<< 0xcU) 
										| (vlTOPp->Vortex__DOT__vx_f_d_reg__DOT__f_d_reg__DOT__value[1U] 
										>> 0x14U))
										 : 7U) 
										<< 6U)) 
										| ((0x38U 
										& (((0x23U 
										== 
										(0x7fU 
										& ((vlTOPp->Vortex__DOT__vx_f_d_reg__DOT__f_d_reg__DOT__value[2U] 
										<< 0x18U) 
										| (vlTOPp->Vortex__DOT__vx_f_d_reg__DOT__f_d_reg__DOT__value[1U] 
										>> 8U))))
										 ? 
										((vlTOPp->Vortex__DOT__vx_f_d_reg__DOT__f_d_reg__DOT__value[2U] 
										<< 0xcU) 
										| (vlTOPp->Vortex__DOT__vx_f_d_reg__DOT__f_d_reg__DOT__value[1U] 
										>> 0x14U))
										 : 7U) 
										<< 3U)) 
										| (IData)(vlSymsp->TOP__Vortex__DOT__VX_frE_to_bckE_req.branch_type))))))))) 
							    >> 0x20U)));
    vlTOPp->Vortex__DOT__vx_d_e_reg__DOT____Vcellinp__d_e_reg__in[0U] 
	= ((0xffffff00U & ((IData)((((QData)((IData)(vlSymsp->TOP__Vortex__DOT__VX_frE_to_bckE_req.jal_offset)) 
				     << 0x20U) | (QData)((IData)(
								 ((IData)(4U) 
								  + 
								  ((vlTOPp->Vortex__DOT__vx_f_d_reg__DOT__f_d_reg__DOT__value[1U] 
								    << 0x18U) 
								   | (vlTOPp->Vortex__DOT__vx_f_d_reg__DOT__f_d_reg__DOT__value[0U] 
								      >> 8U))))))) 
			   << 8U)) | ((0xf0U & (vlTOPp->Vortex__DOT__vx_f_d_reg__DOT__f_d_reg__DOT__value[0U] 
						<< 4U)) 
				      | (0xfU & ((vlTOPp->Vortex__DOT__vx_f_d_reg__DOT__f_d_reg__DOT__value[1U] 
						  << 0x1cU) 
						 | (vlTOPp->Vortex__DOT__vx_f_d_reg__DOT__f_d_reg__DOT__value[0U] 
						    >> 4U)))));
    vlTOPp->Vortex__DOT__vx_d_e_reg__DOT____Vcellinp__d_e_reg__in[1U] 
	= ((0xffU & ((IData)((((QData)((IData)(vlSymsp->TOP__Vortex__DOT__VX_frE_to_bckE_req.jal_offset)) 
			       << 0x20U) | (QData)((IData)(
							   ((IData)(4U) 
							    + 
							    ((vlTOPp->Vortex__DOT__vx_f_d_reg__DOT__f_d_reg__DOT__value[1U] 
							      << 0x18U) 
							     | (vlTOPp->Vortex__DOT__vx_f_d_reg__DOT__f_d_reg__DOT__value[0U] 
								>> 8U))))))) 
		     >> 0x18U)) | (0xffffff00U & ((IData)(
							  ((((QData)((IData)(vlSymsp->TOP__Vortex__DOT__VX_frE_to_bckE_req.jal_offset)) 
							     << 0x20U) 
							    | (QData)((IData)(
									      ((IData)(4U) 
									       + 
									       ((vlTOPp->Vortex__DOT__vx_f_d_reg__DOT__f_d_reg__DOT__value[1U] 
										<< 0x18U) 
										| (vlTOPp->Vortex__DOT__vx_f_d_reg__DOT__f_d_reg__DOT__value[0U] 
										>> 8U)))))) 
							   >> 0x20U)) 
						  << 8U)));
    vlTOPp->Vortex__DOT__vx_d_e_reg__DOT____Vcellinp__d_e_reg__in[2U] 
	= ((0xfffffe00U & (vlTOPp->Vortex__DOT__vx_f_d_reg__DOT__f_d_reg__DOT__value[0U] 
			   << 1U)) | ((0xffffff00U 
				       & ((IData)(vlSymsp->TOP__Vortex__DOT__VX_frE_to_bckE_req.jal) 
					  << 8U)) | 
				      (0xffU & ((IData)(
							((((QData)((IData)(vlSymsp->TOP__Vortex__DOT__VX_frE_to_bckE_req.jal_offset)) 
							   << 0x20U) 
							  | (QData)((IData)(
									    ((IData)(4U) 
									     + 
									     ((vlTOPp->Vortex__DOT__vx_f_d_reg__DOT__f_d_reg__DOT__value[1U] 
									       << 0x18U) 
									      | (vlTOPp->Vortex__DOT__vx_f_d_reg__DOT__f_d_reg__DOT__value[0U] 
										>> 8U)))))) 
							 >> 0x20U)) 
						>> 0x18U))));
    vlTOPp->Vortex__DOT__vx_d_e_reg__DOT____Vcellinp__d_e_reg__in[3U] 
	= ((0xe0000000U & (__Vtemp181[0U] << 0x1dU)) 
	   | ((0x1ffffe00U & (((0x37U == (0x7fU & (
						   (vlTOPp->Vortex__DOT__vx_f_d_reg__DOT__f_d_reg__DOT__value[2U] 
						    << 0x18U) 
						   | (vlTOPp->Vortex__DOT__vx_f_d_reg__DOT__f_d_reg__DOT__value[1U] 
						      >> 8U))))
			        ? ((vlTOPp->Vortex__DOT__vx_f_d_reg__DOT__f_d_reg__DOT__value[2U] 
				    << 0xcU) | (vlTOPp->Vortex__DOT__vx_f_d_reg__DOT__f_d_reg__DOT__value[1U] 
						>> 0x14U))
			        : ((0x17U == (0x7fU 
					      & ((vlTOPp->Vortex__DOT__vx_f_d_reg__DOT__f_d_reg__DOT__value[2U] 
						  << 0x18U) 
						 | (vlTOPp->Vortex__DOT__vx_f_d_reg__DOT__f_d_reg__DOT__value[1U] 
						    >> 8U))))
				    ? ((vlTOPp->Vortex__DOT__vx_f_d_reg__DOT__f_d_reg__DOT__value[2U] 
					<< 0xcU) | 
				       (vlTOPp->Vortex__DOT__vx_f_d_reg__DOT__f_d_reg__DOT__value[1U] 
					>> 0x14U)) : 0U)) 
			      << 9U)) | (0x1ffU & (
						   (0x1feU 
						    & (vlTOPp->Vortex__DOT__vx_f_d_reg__DOT__f_d_reg__DOT__value[1U] 
						       << 1U)) 
						   | (vlTOPp->Vortex__DOT__vx_f_d_reg__DOT__f_d_reg__DOT__value[0U] 
						      >> 0x1fU)))));
    vlTOPp->Vortex__DOT__vx_d_e_reg__DOT____Vcellinp__d_e_reg__in[4U] 
	= ((0x1fffffffU & (__Vtemp181[0U] >> 3U)) | 
	   (0xe0000000U & (__Vtemp181[1U] << 0x1dU)));
    vlTOPp->Vortex__DOT__vx_d_e_reg__DOT____Vcellinp__d_e_reg__in[5U] 
	= ((0x1fffffffU & (__Vtemp181[1U] >> 3U)) | 
	   (0xe0000000U & (vlSymsp->TOP__Vortex__DOT__VX_frE_to_bckE_req.b_reg_data[0U] 
			   << 0xeU)));
    vlTOPp->Vortex__DOT__vx_d_e_reg__DOT____Vcellinp__d_e_reg__in[6U] 
	= ((0x1fffffffU & ((0x3fffU & (vlSymsp->TOP__Vortex__DOT__VX_frE_to_bckE_req.b_reg_data[0U] 
				       >> 0x12U)) | 
			   (0x1fffc000U & (vlSymsp->TOP__Vortex__DOT__VX_frE_to_bckE_req.b_reg_data[1U] 
					   << 0xeU)))) 
	   | (0xe0000000U & (vlSymsp->TOP__Vortex__DOT__VX_frE_to_bckE_req.b_reg_data[1U] 
			     << 0xeU)));
    vlTOPp->Vortex__DOT__vx_d_e_reg__DOT____Vcellinp__d_e_reg__in[7U] 
	= ((0x1fffffffU & ((0x3fffU & (vlSymsp->TOP__Vortex__DOT__VX_frE_to_bckE_req.b_reg_data[1U] 
				       >> 0x12U)) | 
			   (0x1fffc000U & (vlSymsp->TOP__Vortex__DOT__VX_frE_to_bckE_req.b_reg_data[2U] 
					   << 0xeU)))) 
	   | (0xe0000000U & (vlSymsp->TOP__Vortex__DOT__VX_frE_to_bckE_req.b_reg_data[2U] 
			     << 0xeU)));
    vlTOPp->Vortex__DOT__vx_d_e_reg__DOT____Vcellinp__d_e_reg__in[8U] 
	= ((0x1fffffffU & ((0x3fffU & (vlSymsp->TOP__Vortex__DOT__VX_frE_to_bckE_req.b_reg_data[2U] 
				       >> 0x12U)) | 
			   (0x1fffc000U & (vlSymsp->TOP__Vortex__DOT__VX_frE_to_bckE_req.b_reg_data[3U] 
					   << 0xeU)))) 
	   | (0xe0000000U & (vlSymsp->TOP__Vortex__DOT__VX_frE_to_bckE_req.b_reg_data[3U] 
			     << 0xeU)));
    vlTOPp->Vortex__DOT__vx_d_e_reg__DOT____Vcellinp__d_e_reg__in[9U] 
	= ((0x1fffffffU & ((0x3fffU & (vlSymsp->TOP__Vortex__DOT__VX_frE_to_bckE_req.b_reg_data[3U] 
				       >> 0x12U)) | 
			   (0x1fffc000U & (vlSymsp->TOP__Vortex__DOT__VX_frE_to_bckE_req.a_reg_data[0U] 
					   << 0xeU)))) 
	   | (0xe0000000U & (vlSymsp->TOP__Vortex__DOT__VX_frE_to_bckE_req.a_reg_data[0U] 
			     << 0xeU)));
    vlTOPp->Vortex__DOT__vx_d_e_reg__DOT____Vcellinp__d_e_reg__in[0xaU] 
	= ((0x1fffffffU & ((0x3fffU & (vlSymsp->TOP__Vortex__DOT__VX_frE_to_bckE_req.a_reg_data[0U] 
				       >> 0x12U)) | 
			   (0x1fffc000U & (vlSymsp->TOP__Vortex__DOT__VX_frE_to_bckE_req.a_reg_data[1U] 
					   << 0xeU)))) 
	   | (0xe0000000U & (vlSymsp->TOP__Vortex__DOT__VX_frE_to_bckE_req.a_reg_data[1U] 
			     << 0xeU)));
    vlTOPp->Vortex__DOT__vx_d_e_reg__DOT____Vcellinp__d_e_reg__in[0xbU] 
	= ((0x1fffffffU & ((0x3fffU & (vlSymsp->TOP__Vortex__DOT__VX_frE_to_bckE_req.a_reg_data[1U] 
				       >> 0x12U)) | 
			   (0x1fffc000U & (vlSymsp->TOP__Vortex__DOT__VX_frE_to_bckE_req.a_reg_data[2U] 
					   << 0xeU)))) 
	   | (0xe0000000U & (vlSymsp->TOP__Vortex__DOT__VX_frE_to_bckE_req.a_reg_data[2U] 
			     << 0xeU)));
    vlTOPp->Vortex__DOT__vx_d_e_reg__DOT____Vcellinp__d_e_reg__in[0xcU] 
	= ((0x1fffffffU & ((0x3fffU & (vlSymsp->TOP__Vortex__DOT__VX_frE_to_bckE_req.a_reg_data[2U] 
				       >> 0x12U)) | 
			   (0x1fffc000U & (vlSymsp->TOP__Vortex__DOT__VX_frE_to_bckE_req.a_reg_data[3U] 
					   << 0xeU)))) 
	   | (0xe0000000U & (vlSymsp->TOP__Vortex__DOT__VX_frE_to_bckE_req.a_reg_data[3U] 
			     << 0xeU)));
    vlTOPp->Vortex__DOT__vx_d_e_reg__DOT____Vcellinp__d_e_reg__in[0xdU] 
	= ((0x1fffffffU & ((0x1f000000U & (vlTOPp->Vortex__DOT__vx_f_d_reg__DOT__f_d_reg__DOT__value[1U] 
					   << 9U)) 
			   | ((0xf80000U & ((0x10000000U 
					     & (vlTOPp->Vortex__DOT__vx_f_d_reg__DOT__f_d_reg__DOT__value[2U] 
						<< 0x1cU)) 
					    | (0xff80000U 
					       & (vlTOPp->Vortex__DOT__vx_f_d_reg__DOT__f_d_reg__DOT__value[1U] 
						  >> 4U)))) 
			      | ((0x7c000U & ((0x1ffc0000U 
					       & (vlTOPp->Vortex__DOT__vx_f_d_reg__DOT__f_d_reg__DOT__value[2U] 
						  << 0x12U)) 
					      | (0x3c000U 
						 & (vlTOPp->Vortex__DOT__vx_f_d_reg__DOT__f_d_reg__DOT__value[1U] 
						    >> 0xeU)))) 
				 | (0x3fffU & (vlSymsp->TOP__Vortex__DOT__VX_frE_to_bckE_req.a_reg_data[3U] 
					       >> 0x12U)))))) 
	   | (0xe0000000U & ((((IData)(vlTOPp->Vortex__DOT__vx_decode__DOT__is_csr) 
			       & (vlTOPp->Vortex__DOT__vx_f_d_reg__DOT__f_d_reg__DOT__value[1U] 
				  >> 0x16U)) ? (0x1fU 
						& ((vlTOPp->Vortex__DOT__vx_f_d_reg__DOT__f_d_reg__DOT__value[2U] 
						    << 9U) 
						   | (vlTOPp->Vortex__DOT__vx_f_d_reg__DOT__f_d_reg__DOT__value[1U] 
						      >> 0x17U)))
			       : vlSymsp->TOP__Vortex__DOT__VX_frE_to_bckE_req.a_reg_data[0U]) 
			     << 0x1dU)));
    vlTOPp->Vortex__DOT__vx_d_e_reg__DOT____Vcellinp__d_e_reg__in[0xeU] 
	= ((0xc0000000U & ((IData)(vlSymsp->TOP__Vortex__DOT__VX_frE_to_bckE_req.csr_address) 
			   << 0x1eU)) | ((0xe0000000U 
					  & ((IData)(vlTOPp->Vortex__DOT__vx_decode__DOT__is_csr) 
					     << 0x1dU)) 
					 | (0x1fffffffU 
					    & ((((IData)(vlTOPp->Vortex__DOT__vx_decode__DOT__is_csr) 
						 & (vlTOPp->Vortex__DOT__vx_f_d_reg__DOT__f_d_reg__DOT__value[1U] 
						    >> 0x16U))
						 ? 
						(0x1fU 
						 & ((vlTOPp->Vortex__DOT__vx_f_d_reg__DOT__f_d_reg__DOT__value[2U] 
						     << 9U) 
						    | (vlTOPp->Vortex__DOT__vx_f_d_reg__DOT__f_d_reg__DOT__value[1U] 
						       >> 0x17U)))
						 : 
						vlSymsp->TOP__Vortex__DOT__VX_frE_to_bckE_req.a_reg_data[0U]) 
					       >> 3U))));
    vlTOPp->Vortex__DOT__vx_d_e_reg__DOT____Vcellinp__d_e_reg__in[0xfU] 
	= (0x3fffffffU & ((IData)(vlSymsp->TOP__Vortex__DOT__VX_frE_to_bckE_req.csr_address) 
			  >> 2U));
    vlTOPp->Vortex__DOT__vx_decode__DOT__jalrs_thread_mask 
	= ((0xdU & (IData)(vlTOPp->Vortex__DOT__vx_decode__DOT__jalrs_thread_mask)) 
	   | ((1U <= vlSymsp->TOP__Vortex__DOT__VX_frE_to_bckE_req.b_reg_data[0U]) 
	      << 1U));
    vlTOPp->Vortex__DOT__vx_decode__DOT__jalrs_thread_mask 
	= ((0xbU & (IData)(vlTOPp->Vortex__DOT__vx_decode__DOT__jalrs_thread_mask)) 
	   | ((2U <= vlSymsp->TOP__Vortex__DOT__VX_frE_to_bckE_req.b_reg_data[0U]) 
	      << 2U));
    vlTOPp->Vortex__DOT__vx_decode__DOT__jalrs_thread_mask 
	= ((7U & (IData)(vlTOPp->Vortex__DOT__vx_decode__DOT__jalrs_thread_mask)) 
	   | ((3U <= vlSymsp->TOP__Vortex__DOT__VX_frE_to_bckE_req.b_reg_data[0U]) 
	      << 3U));
    vlSymsp->TOP__Vortex__DOT__VX_warp_ctl.thread_mask 
	= ((IData)(vlTOPp->Vortex__DOT__vx_decode__DOT__is_jalrs)
	    ? (IData)(vlTOPp->Vortex__DOT__vx_decode__DOT__jalrs_thread_mask)
	    : (IData)(vlTOPp->Vortex__DOT__vx_decode__DOT__jmprt_thread_mask));
    vlTOPp->Vortex__DOT__vx_fetch__DOT__in_thread_mask[0U] 
	= (1U & (IData)(vlSymsp->TOP__Vortex__DOT__VX_warp_ctl.thread_mask));
    vlTOPp->Vortex__DOT__vx_fetch__DOT__in_thread_mask[1U] 
	= (1U & ((IData)(vlSymsp->TOP__Vortex__DOT__VX_warp_ctl.thread_mask) 
		 >> 1U));
    vlTOPp->Vortex__DOT__vx_fetch__DOT__in_thread_mask[2U] 
	= (1U & ((IData)(vlSymsp->TOP__Vortex__DOT__VX_warp_ctl.thread_mask) 
		 >> 2U));
    vlTOPp->Vortex__DOT__vx_fetch__DOT__in_thread_mask[3U] 
	= (1U & ((IData)(vlSymsp->TOP__Vortex__DOT__VX_warp_ctl.thread_mask) 
		 >> 3U));
    vlTOPp->Vortex__DOT__vx_fetch__DOT____Vcellinp__genblk2__BRA__0__KET____DOT__VX_Warp__in_thread_mask[3U] 
	= vlTOPp->Vortex__DOT__vx_fetch__DOT__in_thread_mask
	[3U];
    vlTOPp->Vortex__DOT__vx_fetch__DOT____Vcellinp__genblk2__BRA__0__KET____DOT__VX_Warp__in_thread_mask[2U] 
	= vlTOPp->Vortex__DOT__vx_fetch__DOT__in_thread_mask
	[2U];
    vlTOPp->Vortex__DOT__vx_fetch__DOT____Vcellinp__genblk2__BRA__0__KET____DOT__VX_Warp__in_thread_mask[1U] 
	= vlTOPp->Vortex__DOT__vx_fetch__DOT__in_thread_mask
	[1U];
    vlTOPp->Vortex__DOT__vx_fetch__DOT____Vcellinp__genblk2__BRA__0__KET____DOT__VX_Warp__in_thread_mask[0U] 
	= vlTOPp->Vortex__DOT__vx_fetch__DOT__in_thread_mask
	[0U];
    vlTOPp->Vortex__DOT__vx_fetch__DOT____Vcellinp__genblk2__BRA__1__KET____DOT__VX_Warp__in_thread_mask[3U] 
	= vlTOPp->Vortex__DOT__vx_fetch__DOT__in_thread_mask
	[3U];
    vlTOPp->Vortex__DOT__vx_fetch__DOT____Vcellinp__genblk2__BRA__1__KET____DOT__VX_Warp__in_thread_mask[2U] 
	= vlTOPp->Vortex__DOT__vx_fetch__DOT__in_thread_mask
	[2U];
    vlTOPp->Vortex__DOT__vx_fetch__DOT____Vcellinp__genblk2__BRA__1__KET____DOT__VX_Warp__in_thread_mask[1U] 
	= vlTOPp->Vortex__DOT__vx_fetch__DOT__in_thread_mask
	[1U];
    vlTOPp->Vortex__DOT__vx_fetch__DOT____Vcellinp__genblk2__BRA__1__KET____DOT__VX_Warp__in_thread_mask[0U] 
	= vlTOPp->Vortex__DOT__vx_fetch__DOT__in_thread_mask
	[0U];
    vlTOPp->Vortex__DOT__vx_fetch__DOT____Vcellinp__genblk2__BRA__2__KET____DOT__VX_Warp__in_thread_mask[3U] 
	= vlTOPp->Vortex__DOT__vx_fetch__DOT__in_thread_mask
	[3U];
    vlTOPp->Vortex__DOT__vx_fetch__DOT____Vcellinp__genblk2__BRA__2__KET____DOT__VX_Warp__in_thread_mask[2U] 
	= vlTOPp->Vortex__DOT__vx_fetch__DOT__in_thread_mask
	[2U];
    vlTOPp->Vortex__DOT__vx_fetch__DOT____Vcellinp__genblk2__BRA__2__KET____DOT__VX_Warp__in_thread_mask[1U] 
	= vlTOPp->Vortex__DOT__vx_fetch__DOT__in_thread_mask
	[1U];
    vlTOPp->Vortex__DOT__vx_fetch__DOT____Vcellinp__genblk2__BRA__2__KET____DOT__VX_Warp__in_thread_mask[0U] 
	= vlTOPp->Vortex__DOT__vx_fetch__DOT__in_thread_mask
	[0U];
    vlTOPp->Vortex__DOT__vx_fetch__DOT____Vcellinp__genblk2__BRA__3__KET____DOT__VX_Warp__in_thread_mask[3U] 
	= vlTOPp->Vortex__DOT__vx_fetch__DOT__in_thread_mask
	[3U];
    vlTOPp->Vortex__DOT__vx_fetch__DOT____Vcellinp__genblk2__BRA__3__KET____DOT__VX_Warp__in_thread_mask[2U] 
	= vlTOPp->Vortex__DOT__vx_fetch__DOT__in_thread_mask
	[2U];
    vlTOPp->Vortex__DOT__vx_fetch__DOT____Vcellinp__genblk2__BRA__3__KET____DOT__VX_Warp__in_thread_mask[1U] 
	= vlTOPp->Vortex__DOT__vx_fetch__DOT__in_thread_mask
	[1U];
    vlTOPp->Vortex__DOT__vx_fetch__DOT____Vcellinp__genblk2__BRA__3__KET____DOT__VX_Warp__in_thread_mask[0U] 
	= vlTOPp->Vortex__DOT__vx_fetch__DOT__in_thread_mask
	[0U];
    vlTOPp->Vortex__DOT__vx_fetch__DOT____Vcellinp__genblk2__BRA__4__KET____DOT__VX_Warp__in_thread_mask[3U] 
	= vlTOPp->Vortex__DOT__vx_fetch__DOT__in_thread_mask
	[3U];
    vlTOPp->Vortex__DOT__vx_fetch__DOT____Vcellinp__genblk2__BRA__4__KET____DOT__VX_Warp__in_thread_mask[2U] 
	= vlTOPp->Vortex__DOT__vx_fetch__DOT__in_thread_mask
	[2U];
    vlTOPp->Vortex__DOT__vx_fetch__DOT____Vcellinp__genblk2__BRA__4__KET____DOT__VX_Warp__in_thread_mask[1U] 
	= vlTOPp->Vortex__DOT__vx_fetch__DOT__in_thread_mask
	[1U];
    vlTOPp->Vortex__DOT__vx_fetch__DOT____Vcellinp__genblk2__BRA__4__KET____DOT__VX_Warp__in_thread_mask[0U] 
	= vlTOPp->Vortex__DOT__vx_fetch__DOT__in_thread_mask
	[0U];
    vlTOPp->Vortex__DOT__vx_fetch__DOT____Vcellinp__genblk2__BRA__5__KET____DOT__VX_Warp__in_thread_mask[3U] 
	= vlTOPp->Vortex__DOT__vx_fetch__DOT__in_thread_mask
	[3U];
    vlTOPp->Vortex__DOT__vx_fetch__DOT____Vcellinp__genblk2__BRA__5__KET____DOT__VX_Warp__in_thread_mask[2U] 
	= vlTOPp->Vortex__DOT__vx_fetch__DOT__in_thread_mask
	[2U];
    vlTOPp->Vortex__DOT__vx_fetch__DOT____Vcellinp__genblk2__BRA__5__KET____DOT__VX_Warp__in_thread_mask[1U] 
	= vlTOPp->Vortex__DOT__vx_fetch__DOT__in_thread_mask
	[1U];
    vlTOPp->Vortex__DOT__vx_fetch__DOT____Vcellinp__genblk2__BRA__5__KET____DOT__VX_Warp__in_thread_mask[0U] 
	= vlTOPp->Vortex__DOT__vx_fetch__DOT__in_thread_mask
	[0U];
    vlTOPp->Vortex__DOT__vx_fetch__DOT____Vcellinp__genblk2__BRA__6__KET____DOT__VX_Warp__in_thread_mask[3U] 
	= vlTOPp->Vortex__DOT__vx_fetch__DOT__in_thread_mask
	[3U];
    vlTOPp->Vortex__DOT__vx_fetch__DOT____Vcellinp__genblk2__BRA__6__KET____DOT__VX_Warp__in_thread_mask[2U] 
	= vlTOPp->Vortex__DOT__vx_fetch__DOT__in_thread_mask
	[2U];
    vlTOPp->Vortex__DOT__vx_fetch__DOT____Vcellinp__genblk2__BRA__6__KET____DOT__VX_Warp__in_thread_mask[1U] 
	= vlTOPp->Vortex__DOT__vx_fetch__DOT__in_thread_mask
	[1U];
    vlTOPp->Vortex__DOT__vx_fetch__DOT____Vcellinp__genblk2__BRA__6__KET____DOT__VX_Warp__in_thread_mask[0U] 
	= vlTOPp->Vortex__DOT__vx_fetch__DOT__in_thread_mask
	[0U];
    vlTOPp->Vortex__DOT__vx_fetch__DOT____Vcellinp__genblk2__BRA__7__KET____DOT__VX_Warp__in_thread_mask[3U] 
	= vlTOPp->Vortex__DOT__vx_fetch__DOT__in_thread_mask
	[3U];
    vlTOPp->Vortex__DOT__vx_fetch__DOT____Vcellinp__genblk2__BRA__7__KET____DOT__VX_Warp__in_thread_mask[2U] 
	= vlTOPp->Vortex__DOT__vx_fetch__DOT__in_thread_mask
	[2U];
    vlTOPp->Vortex__DOT__vx_fetch__DOT____Vcellinp__genblk2__BRA__7__KET____DOT__VX_Warp__in_thread_mask[1U] 
	= vlTOPp->Vortex__DOT__vx_fetch__DOT__in_thread_mask
	[1U];
    vlTOPp->Vortex__DOT__vx_fetch__DOT____Vcellinp__genblk2__BRA__7__KET____DOT__VX_Warp__in_thread_mask[0U] 
	= vlTOPp->Vortex__DOT__vx_fetch__DOT__in_thread_mask
	[0U];
    // ALWAYS at VX_warp.v:41
    if (((IData)(vlTOPp->Vortex__DOT__vx_fetch__DOT__remove_warp) 
	 & (0U == (0xfU & ((vlTOPp->Vortex__DOT__vx_f_d_reg__DOT__f_d_reg__DOT__value[1U] 
			    << 0x1cU) | (vlTOPp->Vortex__DOT__vx_f_d_reg__DOT__f_d_reg__DOT__value[0U] 
					 >> 4U)))))) {
	vlTOPp->Vortex__DOT__vx_fetch__DOT__genblk2__BRA__0__KET____DOT__VX_Warp__DOT__valid[3U] 
	    = vlTOPp->Vortex__DOT__vx_fetch__DOT__genblk2__BRA__0__KET____DOT__VX_Warp__DOT__valid_zero
	    [3U];
	vlTOPp->Vortex__DOT__vx_fetch__DOT__genblk2__BRA__0__KET____DOT__VX_Warp__DOT__valid[2U] 
	    = vlTOPp->Vortex__DOT__vx_fetch__DOT__genblk2__BRA__0__KET____DOT__VX_Warp__DOT__valid_zero
	    [2U];
	vlTOPp->Vortex__DOT__vx_fetch__DOT__genblk2__BRA__0__KET____DOT__VX_Warp__DOT__valid[1U] 
	    = vlTOPp->Vortex__DOT__vx_fetch__DOT__genblk2__BRA__0__KET____DOT__VX_Warp__DOT__valid_zero
	    [1U];
	vlTOPp->Vortex__DOT__vx_fetch__DOT__genblk2__BRA__0__KET____DOT__VX_Warp__DOT__valid[0U] 
	    = vlTOPp->Vortex__DOT__vx_fetch__DOT__genblk2__BRA__0__KET____DOT__VX_Warp__DOT__valid_zero
	    [0U];
    } else {
	if (vlTOPp->Vortex__DOT__vx_fetch__DOT__genblk2__BRA__0__KET____DOT__warp_zero_change_mask) {
	    vlTOPp->Vortex__DOT__vx_fetch__DOT__genblk2__BRA__0__KET____DOT__VX_Warp__DOT__valid[3U] 
		= vlTOPp->Vortex__DOT__vx_fetch__DOT____Vcellinp__genblk2__BRA__0__KET____DOT__VX_Warp__in_thread_mask
		[3U];
	    vlTOPp->Vortex__DOT__vx_fetch__DOT__genblk2__BRA__0__KET____DOT__VX_Warp__DOT__valid[2U] 
		= vlTOPp->Vortex__DOT__vx_fetch__DOT____Vcellinp__genblk2__BRA__0__KET____DOT__VX_Warp__in_thread_mask
		[2U];
	    vlTOPp->Vortex__DOT__vx_fetch__DOT__genblk2__BRA__0__KET____DOT__VX_Warp__DOT__valid[1U] 
		= vlTOPp->Vortex__DOT__vx_fetch__DOT____Vcellinp__genblk2__BRA__0__KET____DOT__VX_Warp__in_thread_mask
		[1U];
	    vlTOPp->Vortex__DOT__vx_fetch__DOT__genblk2__BRA__0__KET____DOT__VX_Warp__DOT__valid[0U] 
		= vlTOPp->Vortex__DOT__vx_fetch__DOT____Vcellinp__genblk2__BRA__0__KET____DOT__VX_Warp__in_thread_mask
		[0U];
	}
    }
    // ALWAYS at VX_warp.v:41
    if (((IData)(vlTOPp->Vortex__DOT__vx_fetch__DOT__remove_warp) 
	 & (1U == (0xfU & ((vlTOPp->Vortex__DOT__vx_f_d_reg__DOT__f_d_reg__DOT__value[1U] 
			    << 0x1cU) | (vlTOPp->Vortex__DOT__vx_f_d_reg__DOT__f_d_reg__DOT__value[0U] 
					 >> 4U)))))) {
	vlTOPp->Vortex__DOT__vx_fetch__DOT__genblk2__BRA__1__KET____DOT__VX_Warp__DOT__valid[3U] 
	    = vlTOPp->Vortex__DOT__vx_fetch__DOT__genblk2__BRA__1__KET____DOT__VX_Warp__DOT__valid_zero
	    [3U];
	vlTOPp->Vortex__DOT__vx_fetch__DOT__genblk2__BRA__1__KET____DOT__VX_Warp__DOT__valid[2U] 
	    = vlTOPp->Vortex__DOT__vx_fetch__DOT__genblk2__BRA__1__KET____DOT__VX_Warp__DOT__valid_zero
	    [2U];
	vlTOPp->Vortex__DOT__vx_fetch__DOT__genblk2__BRA__1__KET____DOT__VX_Warp__DOT__valid[1U] 
	    = vlTOPp->Vortex__DOT__vx_fetch__DOT__genblk2__BRA__1__KET____DOT__VX_Warp__DOT__valid_zero
	    [1U];
	vlTOPp->Vortex__DOT__vx_fetch__DOT__genblk2__BRA__1__KET____DOT__VX_Warp__DOT__valid[0U] 
	    = vlTOPp->Vortex__DOT__vx_fetch__DOT__genblk2__BRA__1__KET____DOT__VX_Warp__DOT__valid_zero
	    [0U];
    } else {
	if (vlTOPp->Vortex__DOT__vx_fetch__DOT__genblk2__BRA__1__KET____DOT__warp_zero_change_mask) {
	    vlTOPp->Vortex__DOT__vx_fetch__DOT__genblk2__BRA__1__KET____DOT__VX_Warp__DOT__valid[3U] 
		= vlTOPp->Vortex__DOT__vx_fetch__DOT____Vcellinp__genblk2__BRA__1__KET____DOT__VX_Warp__in_thread_mask
		[3U];
	    vlTOPp->Vortex__DOT__vx_fetch__DOT__genblk2__BRA__1__KET____DOT__VX_Warp__DOT__valid[2U] 
		= vlTOPp->Vortex__DOT__vx_fetch__DOT____Vcellinp__genblk2__BRA__1__KET____DOT__VX_Warp__in_thread_mask
		[2U];
	    vlTOPp->Vortex__DOT__vx_fetch__DOT__genblk2__BRA__1__KET____DOT__VX_Warp__DOT__valid[1U] 
		= vlTOPp->Vortex__DOT__vx_fetch__DOT____Vcellinp__genblk2__BRA__1__KET____DOT__VX_Warp__in_thread_mask
		[1U];
	    vlTOPp->Vortex__DOT__vx_fetch__DOT__genblk2__BRA__1__KET____DOT__VX_Warp__DOT__valid[0U] 
		= vlTOPp->Vortex__DOT__vx_fetch__DOT____Vcellinp__genblk2__BRA__1__KET____DOT__VX_Warp__in_thread_mask
		[0U];
	}
    }
    // ALWAYS at VX_warp.v:41
    if (((IData)(vlTOPp->Vortex__DOT__vx_fetch__DOT__remove_warp) 
	 & (2U == (0xfU & ((vlTOPp->Vortex__DOT__vx_f_d_reg__DOT__f_d_reg__DOT__value[1U] 
			    << 0x1cU) | (vlTOPp->Vortex__DOT__vx_f_d_reg__DOT__f_d_reg__DOT__value[0U] 
					 >> 4U)))))) {
	vlTOPp->Vortex__DOT__vx_fetch__DOT__genblk2__BRA__2__KET____DOT__VX_Warp__DOT__valid[3U] 
	    = vlTOPp->Vortex__DOT__vx_fetch__DOT__genblk2__BRA__2__KET____DOT__VX_Warp__DOT__valid_zero
	    [3U];
	vlTOPp->Vortex__DOT__vx_fetch__DOT__genblk2__BRA__2__KET____DOT__VX_Warp__DOT__valid[2U] 
	    = vlTOPp->Vortex__DOT__vx_fetch__DOT__genblk2__BRA__2__KET____DOT__VX_Warp__DOT__valid_zero
	    [2U];
	vlTOPp->Vortex__DOT__vx_fetch__DOT__genblk2__BRA__2__KET____DOT__VX_Warp__DOT__valid[1U] 
	    = vlTOPp->Vortex__DOT__vx_fetch__DOT__genblk2__BRA__2__KET____DOT__VX_Warp__DOT__valid_zero
	    [1U];
	vlTOPp->Vortex__DOT__vx_fetch__DOT__genblk2__BRA__2__KET____DOT__VX_Warp__DOT__valid[0U] 
	    = vlTOPp->Vortex__DOT__vx_fetch__DOT__genblk2__BRA__2__KET____DOT__VX_Warp__DOT__valid_zero
	    [0U];
    } else {
	if (vlTOPp->Vortex__DOT__vx_fetch__DOT__genblk2__BRA__2__KET____DOT__warp_zero_change_mask) {
	    vlTOPp->Vortex__DOT__vx_fetch__DOT__genblk2__BRA__2__KET____DOT__VX_Warp__DOT__valid[3U] 
		= vlTOPp->Vortex__DOT__vx_fetch__DOT____Vcellinp__genblk2__BRA__2__KET____DOT__VX_Warp__in_thread_mask
		[3U];
	    vlTOPp->Vortex__DOT__vx_fetch__DOT__genblk2__BRA__2__KET____DOT__VX_Warp__DOT__valid[2U] 
		= vlTOPp->Vortex__DOT__vx_fetch__DOT____Vcellinp__genblk2__BRA__2__KET____DOT__VX_Warp__in_thread_mask
		[2U];
	    vlTOPp->Vortex__DOT__vx_fetch__DOT__genblk2__BRA__2__KET____DOT__VX_Warp__DOT__valid[1U] 
		= vlTOPp->Vortex__DOT__vx_fetch__DOT____Vcellinp__genblk2__BRA__2__KET____DOT__VX_Warp__in_thread_mask
		[1U];
	    vlTOPp->Vortex__DOT__vx_fetch__DOT__genblk2__BRA__2__KET____DOT__VX_Warp__DOT__valid[0U] 
		= vlTOPp->Vortex__DOT__vx_fetch__DOT____Vcellinp__genblk2__BRA__2__KET____DOT__VX_Warp__in_thread_mask
		[0U];
	}
    }
    // ALWAYS at VX_warp.v:41
    if (((IData)(vlTOPp->Vortex__DOT__vx_fetch__DOT__remove_warp) 
	 & (3U == (0xfU & ((vlTOPp->Vortex__DOT__vx_f_d_reg__DOT__f_d_reg__DOT__value[1U] 
			    << 0x1cU) | (vlTOPp->Vortex__DOT__vx_f_d_reg__DOT__f_d_reg__DOT__value[0U] 
					 >> 4U)))))) {
	vlTOPp->Vortex__DOT__vx_fetch__DOT__genblk2__BRA__3__KET____DOT__VX_Warp__DOT__valid[3U] 
	    = vlTOPp->Vortex__DOT__vx_fetch__DOT__genblk2__BRA__3__KET____DOT__VX_Warp__DOT__valid_zero
	    [3U];
	vlTOPp->Vortex__DOT__vx_fetch__DOT__genblk2__BRA__3__KET____DOT__VX_Warp__DOT__valid[2U] 
	    = vlTOPp->Vortex__DOT__vx_fetch__DOT__genblk2__BRA__3__KET____DOT__VX_Warp__DOT__valid_zero
	    [2U];
	vlTOPp->Vortex__DOT__vx_fetch__DOT__genblk2__BRA__3__KET____DOT__VX_Warp__DOT__valid[1U] 
	    = vlTOPp->Vortex__DOT__vx_fetch__DOT__genblk2__BRA__3__KET____DOT__VX_Warp__DOT__valid_zero
	    [1U];
	vlTOPp->Vortex__DOT__vx_fetch__DOT__genblk2__BRA__3__KET____DOT__VX_Warp__DOT__valid[0U] 
	    = vlTOPp->Vortex__DOT__vx_fetch__DOT__genblk2__BRA__3__KET____DOT__VX_Warp__DOT__valid_zero
	    [0U];
    } else {
	if (vlTOPp->Vortex__DOT__vx_fetch__DOT__genblk2__BRA__3__KET____DOT__warp_zero_change_mask) {
	    vlTOPp->Vortex__DOT__vx_fetch__DOT__genblk2__BRA__3__KET____DOT__VX_Warp__DOT__valid[3U] 
		= vlTOPp->Vortex__DOT__vx_fetch__DOT____Vcellinp__genblk2__BRA__3__KET____DOT__VX_Warp__in_thread_mask
		[3U];
	    vlTOPp->Vortex__DOT__vx_fetch__DOT__genblk2__BRA__3__KET____DOT__VX_Warp__DOT__valid[2U] 
		= vlTOPp->Vortex__DOT__vx_fetch__DOT____Vcellinp__genblk2__BRA__3__KET____DOT__VX_Warp__in_thread_mask
		[2U];
	    vlTOPp->Vortex__DOT__vx_fetch__DOT__genblk2__BRA__3__KET____DOT__VX_Warp__DOT__valid[1U] 
		= vlTOPp->Vortex__DOT__vx_fetch__DOT____Vcellinp__genblk2__BRA__3__KET____DOT__VX_Warp__in_thread_mask
		[1U];
	    vlTOPp->Vortex__DOT__vx_fetch__DOT__genblk2__BRA__3__KET____DOT__VX_Warp__DOT__valid[0U] 
		= vlTOPp->Vortex__DOT__vx_fetch__DOT____Vcellinp__genblk2__BRA__3__KET____DOT__VX_Warp__in_thread_mask
		[0U];
	}
    }
    // ALWAYS at VX_warp.v:41
    if (((IData)(vlTOPp->Vortex__DOT__vx_fetch__DOT__remove_warp) 
	 & (4U == (0xfU & ((vlTOPp->Vortex__DOT__vx_f_d_reg__DOT__f_d_reg__DOT__value[1U] 
			    << 0x1cU) | (vlTOPp->Vortex__DOT__vx_f_d_reg__DOT__f_d_reg__DOT__value[0U] 
					 >> 4U)))))) {
	vlTOPp->Vortex__DOT__vx_fetch__DOT__genblk2__BRA__4__KET____DOT__VX_Warp__DOT__valid[3U] 
	    = vlTOPp->Vortex__DOT__vx_fetch__DOT__genblk2__BRA__4__KET____DOT__VX_Warp__DOT__valid_zero
	    [3U];
	vlTOPp->Vortex__DOT__vx_fetch__DOT__genblk2__BRA__4__KET____DOT__VX_Warp__DOT__valid[2U] 
	    = vlTOPp->Vortex__DOT__vx_fetch__DOT__genblk2__BRA__4__KET____DOT__VX_Warp__DOT__valid_zero
	    [2U];
	vlTOPp->Vortex__DOT__vx_fetch__DOT__genblk2__BRA__4__KET____DOT__VX_Warp__DOT__valid[1U] 
	    = vlTOPp->Vortex__DOT__vx_fetch__DOT__genblk2__BRA__4__KET____DOT__VX_Warp__DOT__valid_zero
	    [1U];
	vlTOPp->Vortex__DOT__vx_fetch__DOT__genblk2__BRA__4__KET____DOT__VX_Warp__DOT__valid[0U] 
	    = vlTOPp->Vortex__DOT__vx_fetch__DOT__genblk2__BRA__4__KET____DOT__VX_Warp__DOT__valid_zero
	    [0U];
    } else {
	if (vlTOPp->Vortex__DOT__vx_fetch__DOT__genblk2__BRA__4__KET____DOT__warp_zero_change_mask) {
	    vlTOPp->Vortex__DOT__vx_fetch__DOT__genblk2__BRA__4__KET____DOT__VX_Warp__DOT__valid[3U] 
		= vlTOPp->Vortex__DOT__vx_fetch__DOT____Vcellinp__genblk2__BRA__4__KET____DOT__VX_Warp__in_thread_mask
		[3U];
	    vlTOPp->Vortex__DOT__vx_fetch__DOT__genblk2__BRA__4__KET____DOT__VX_Warp__DOT__valid[2U] 
		= vlTOPp->Vortex__DOT__vx_fetch__DOT____Vcellinp__genblk2__BRA__4__KET____DOT__VX_Warp__in_thread_mask
		[2U];
	    vlTOPp->Vortex__DOT__vx_fetch__DOT__genblk2__BRA__4__KET____DOT__VX_Warp__DOT__valid[1U] 
		= vlTOPp->Vortex__DOT__vx_fetch__DOT____Vcellinp__genblk2__BRA__4__KET____DOT__VX_Warp__in_thread_mask
		[1U];
	    vlTOPp->Vortex__DOT__vx_fetch__DOT__genblk2__BRA__4__KET____DOT__VX_Warp__DOT__valid[0U] 
		= vlTOPp->Vortex__DOT__vx_fetch__DOT____Vcellinp__genblk2__BRA__4__KET____DOT__VX_Warp__in_thread_mask
		[0U];
	}
    }
    // ALWAYS at VX_warp.v:41
    if (((IData)(vlTOPp->Vortex__DOT__vx_fetch__DOT__remove_warp) 
	 & (5U == (0xfU & ((vlTOPp->Vortex__DOT__vx_f_d_reg__DOT__f_d_reg__DOT__value[1U] 
			    << 0x1cU) | (vlTOPp->Vortex__DOT__vx_f_d_reg__DOT__f_d_reg__DOT__value[0U] 
					 >> 4U)))))) {
	vlTOPp->Vortex__DOT__vx_fetch__DOT__genblk2__BRA__5__KET____DOT__VX_Warp__DOT__valid[3U] 
	    = vlTOPp->Vortex__DOT__vx_fetch__DOT__genblk2__BRA__5__KET____DOT__VX_Warp__DOT__valid_zero
	    [3U];
	vlTOPp->Vortex__DOT__vx_fetch__DOT__genblk2__BRA__5__KET____DOT__VX_Warp__DOT__valid[2U] 
	    = vlTOPp->Vortex__DOT__vx_fetch__DOT__genblk2__BRA__5__KET____DOT__VX_Warp__DOT__valid_zero
	    [2U];
	vlTOPp->Vortex__DOT__vx_fetch__DOT__genblk2__BRA__5__KET____DOT__VX_Warp__DOT__valid[1U] 
	    = vlTOPp->Vortex__DOT__vx_fetch__DOT__genblk2__BRA__5__KET____DOT__VX_Warp__DOT__valid_zero
	    [1U];
	vlTOPp->Vortex__DOT__vx_fetch__DOT__genblk2__BRA__5__KET____DOT__VX_Warp__DOT__valid[0U] 
	    = vlTOPp->Vortex__DOT__vx_fetch__DOT__genblk2__BRA__5__KET____DOT__VX_Warp__DOT__valid_zero
	    [0U];
    } else {
	if (vlTOPp->Vortex__DOT__vx_fetch__DOT__genblk2__BRA__5__KET____DOT__warp_zero_change_mask) {
	    vlTOPp->Vortex__DOT__vx_fetch__DOT__genblk2__BRA__5__KET____DOT__VX_Warp__DOT__valid[3U] 
		= vlTOPp->Vortex__DOT__vx_fetch__DOT____Vcellinp__genblk2__BRA__5__KET____DOT__VX_Warp__in_thread_mask
		[3U];
	    vlTOPp->Vortex__DOT__vx_fetch__DOT__genblk2__BRA__5__KET____DOT__VX_Warp__DOT__valid[2U] 
		= vlTOPp->Vortex__DOT__vx_fetch__DOT____Vcellinp__genblk2__BRA__5__KET____DOT__VX_Warp__in_thread_mask
		[2U];
	    vlTOPp->Vortex__DOT__vx_fetch__DOT__genblk2__BRA__5__KET____DOT__VX_Warp__DOT__valid[1U] 
		= vlTOPp->Vortex__DOT__vx_fetch__DOT____Vcellinp__genblk2__BRA__5__KET____DOT__VX_Warp__in_thread_mask
		[1U];
	    vlTOPp->Vortex__DOT__vx_fetch__DOT__genblk2__BRA__5__KET____DOT__VX_Warp__DOT__valid[0U] 
		= vlTOPp->Vortex__DOT__vx_fetch__DOT____Vcellinp__genblk2__BRA__5__KET____DOT__VX_Warp__in_thread_mask
		[0U];
	}
    }
    // ALWAYS at VX_warp.v:41
    if (((IData)(vlTOPp->Vortex__DOT__vx_fetch__DOT__remove_warp) 
	 & (6U == (0xfU & ((vlTOPp->Vortex__DOT__vx_f_d_reg__DOT__f_d_reg__DOT__value[1U] 
			    << 0x1cU) | (vlTOPp->Vortex__DOT__vx_f_d_reg__DOT__f_d_reg__DOT__value[0U] 
					 >> 4U)))))) {
	vlTOPp->Vortex__DOT__vx_fetch__DOT__genblk2__BRA__6__KET____DOT__VX_Warp__DOT__valid[3U] 
	    = vlTOPp->Vortex__DOT__vx_fetch__DOT__genblk2__BRA__6__KET____DOT__VX_Warp__DOT__valid_zero
	    [3U];
	vlTOPp->Vortex__DOT__vx_fetch__DOT__genblk2__BRA__6__KET____DOT__VX_Warp__DOT__valid[2U] 
	    = vlTOPp->Vortex__DOT__vx_fetch__DOT__genblk2__BRA__6__KET____DOT__VX_Warp__DOT__valid_zero
	    [2U];
	vlTOPp->Vortex__DOT__vx_fetch__DOT__genblk2__BRA__6__KET____DOT__VX_Warp__DOT__valid[1U] 
	    = vlTOPp->Vortex__DOT__vx_fetch__DOT__genblk2__BRA__6__KET____DOT__VX_Warp__DOT__valid_zero
	    [1U];
	vlTOPp->Vortex__DOT__vx_fetch__DOT__genblk2__BRA__6__KET____DOT__VX_Warp__DOT__valid[0U] 
	    = vlTOPp->Vortex__DOT__vx_fetch__DOT__genblk2__BRA__6__KET____DOT__VX_Warp__DOT__valid_zero
	    [0U];
    } else {
	if (vlTOPp->Vortex__DOT__vx_fetch__DOT__genblk2__BRA__6__KET____DOT__warp_zero_change_mask) {
	    vlTOPp->Vortex__DOT__vx_fetch__DOT__genblk2__BRA__6__KET____DOT__VX_Warp__DOT__valid[3U] 
		= vlTOPp->Vortex__DOT__vx_fetch__DOT____Vcellinp__genblk2__BRA__6__KET____DOT__VX_Warp__in_thread_mask
		[3U];
	    vlTOPp->Vortex__DOT__vx_fetch__DOT__genblk2__BRA__6__KET____DOT__VX_Warp__DOT__valid[2U] 
		= vlTOPp->Vortex__DOT__vx_fetch__DOT____Vcellinp__genblk2__BRA__6__KET____DOT__VX_Warp__in_thread_mask
		[2U];
	    vlTOPp->Vortex__DOT__vx_fetch__DOT__genblk2__BRA__6__KET____DOT__VX_Warp__DOT__valid[1U] 
		= vlTOPp->Vortex__DOT__vx_fetch__DOT____Vcellinp__genblk2__BRA__6__KET____DOT__VX_Warp__in_thread_mask
		[1U];
	    vlTOPp->Vortex__DOT__vx_fetch__DOT__genblk2__BRA__6__KET____DOT__VX_Warp__DOT__valid[0U] 
		= vlTOPp->Vortex__DOT__vx_fetch__DOT____Vcellinp__genblk2__BRA__6__KET____DOT__VX_Warp__in_thread_mask
		[0U];
	}
    }
    // ALWAYS at VX_warp.v:41
    if (((IData)(vlTOPp->Vortex__DOT__vx_fetch__DOT__remove_warp) 
	 & (7U == (0xfU & ((vlTOPp->Vortex__DOT__vx_f_d_reg__DOT__f_d_reg__DOT__value[1U] 
			    << 0x1cU) | (vlTOPp->Vortex__DOT__vx_f_d_reg__DOT__f_d_reg__DOT__value[0U] 
					 >> 4U)))))) {
	vlTOPp->Vortex__DOT__vx_fetch__DOT__genblk2__BRA__7__KET____DOT__VX_Warp__DOT__valid[3U] 
	    = vlTOPp->Vortex__DOT__vx_fetch__DOT__genblk2__BRA__7__KET____DOT__VX_Warp__DOT__valid_zero
	    [3U];
	vlTOPp->Vortex__DOT__vx_fetch__DOT__genblk2__BRA__7__KET____DOT__VX_Warp__DOT__valid[2U] 
	    = vlTOPp->Vortex__DOT__vx_fetch__DOT__genblk2__BRA__7__KET____DOT__VX_Warp__DOT__valid_zero
	    [2U];
	vlTOPp->Vortex__DOT__vx_fetch__DOT__genblk2__BRA__7__KET____DOT__VX_Warp__DOT__valid[1U] 
	    = vlTOPp->Vortex__DOT__vx_fetch__DOT__genblk2__BRA__7__KET____DOT__VX_Warp__DOT__valid_zero
	    [1U];
	vlTOPp->Vortex__DOT__vx_fetch__DOT__genblk2__BRA__7__KET____DOT__VX_Warp__DOT__valid[0U] 
	    = vlTOPp->Vortex__DOT__vx_fetch__DOT__genblk2__BRA__7__KET____DOT__VX_Warp__DOT__valid_zero
	    [0U];
    } else {
	if (vlTOPp->Vortex__DOT__vx_fetch__DOT__genblk2__BRA__7__KET____DOT__warp_zero_change_mask) {
	    vlTOPp->Vortex__DOT__vx_fetch__DOT__genblk2__BRA__7__KET____DOT__VX_Warp__DOT__valid[3U] 
		= vlTOPp->Vortex__DOT__vx_fetch__DOT____Vcellinp__genblk2__BRA__7__KET____DOT__VX_Warp__in_thread_mask
		[3U];
	    vlTOPp->Vortex__DOT__vx_fetch__DOT__genblk2__BRA__7__KET____DOT__VX_Warp__DOT__valid[2U] 
		= vlTOPp->Vortex__DOT__vx_fetch__DOT____Vcellinp__genblk2__BRA__7__KET____DOT__VX_Warp__in_thread_mask
		[2U];
	    vlTOPp->Vortex__DOT__vx_fetch__DOT__genblk2__BRA__7__KET____DOT__VX_Warp__DOT__valid[1U] 
		= vlTOPp->Vortex__DOT__vx_fetch__DOT____Vcellinp__genblk2__BRA__7__KET____DOT__VX_Warp__in_thread_mask
		[1U];
	    vlTOPp->Vortex__DOT__vx_fetch__DOT__genblk2__BRA__7__KET____DOT__VX_Warp__DOT__valid[0U] 
		= vlTOPp->Vortex__DOT__vx_fetch__DOT____Vcellinp__genblk2__BRA__7__KET____DOT__VX_Warp__in_thread_mask
		[0U];
	}
    }
    vlTOPp->Vortex__DOT__vx_fetch__DOT____Vcellout__genblk2__BRA__0__KET____DOT__VX_Warp__out_valid[0U] 
	= ((IData)(vlTOPp->Vortex__DOT__vx_fetch__DOT__genblk2__BRA__0__KET____DOT__warp_zero_change_mask)
	    ? vlTOPp->Vortex__DOT__vx_fetch__DOT____Vcellinp__genblk2__BRA__0__KET____DOT__VX_Warp__in_thread_mask
	   [0U] : ((~ (IData)(vlTOPp->Vortex__DOT__vx_fetch__DOT__genblk2__BRA__0__KET____DOT__warp_zero_stall)) 
		   & vlTOPp->Vortex__DOT__vx_fetch__DOT__genblk2__BRA__0__KET____DOT__VX_Warp__DOT__valid
		   [0U]));
    vlTOPp->Vortex__DOT__vx_fetch__DOT____Vcellout__genblk2__BRA__0__KET____DOT__VX_Warp__out_valid[1U] 
	= ((IData)(vlTOPp->Vortex__DOT__vx_fetch__DOT__genblk2__BRA__0__KET____DOT__warp_zero_change_mask)
	    ? vlTOPp->Vortex__DOT__vx_fetch__DOT____Vcellinp__genblk2__BRA__0__KET____DOT__VX_Warp__in_thread_mask
	   [1U] : ((~ (IData)(vlTOPp->Vortex__DOT__vx_fetch__DOT__genblk2__BRA__0__KET____DOT__warp_zero_stall)) 
		   & vlTOPp->Vortex__DOT__vx_fetch__DOT__genblk2__BRA__0__KET____DOT__VX_Warp__DOT__valid
		   [1U]));
    vlTOPp->Vortex__DOT__vx_fetch__DOT____Vcellout__genblk2__BRA__0__KET____DOT__VX_Warp__out_valid[2U] 
	= ((IData)(vlTOPp->Vortex__DOT__vx_fetch__DOT__genblk2__BRA__0__KET____DOT__warp_zero_change_mask)
	    ? vlTOPp->Vortex__DOT__vx_fetch__DOT____Vcellinp__genblk2__BRA__0__KET____DOT__VX_Warp__in_thread_mask
	   [2U] : ((~ (IData)(vlTOPp->Vortex__DOT__vx_fetch__DOT__genblk2__BRA__0__KET____DOT__warp_zero_stall)) 
		   & vlTOPp->Vortex__DOT__vx_fetch__DOT__genblk2__BRA__0__KET____DOT__VX_Warp__DOT__valid
		   [2U]));
    vlTOPp->Vortex__DOT__vx_fetch__DOT____Vcellout__genblk2__BRA__0__KET____DOT__VX_Warp__out_valid[3U] 
	= ((IData)(vlTOPp->Vortex__DOT__vx_fetch__DOT__genblk2__BRA__0__KET____DOT__warp_zero_change_mask)
	    ? vlTOPp->Vortex__DOT__vx_fetch__DOT____Vcellinp__genblk2__BRA__0__KET____DOT__VX_Warp__in_thread_mask
	   [3U] : ((~ (IData)(vlTOPp->Vortex__DOT__vx_fetch__DOT__genblk2__BRA__0__KET____DOT__warp_zero_stall)) 
		   & vlTOPp->Vortex__DOT__vx_fetch__DOT__genblk2__BRA__0__KET____DOT__VX_Warp__DOT__valid
		   [3U]));
    vlTOPp->Vortex__DOT__vx_fetch__DOT____Vcellout__genblk2__BRA__1__KET____DOT__VX_Warp__out_valid[0U] 
	= ((IData)(vlTOPp->Vortex__DOT__vx_fetch__DOT__genblk2__BRA__1__KET____DOT__warp_zero_change_mask)
	    ? vlTOPp->Vortex__DOT__vx_fetch__DOT____Vcellinp__genblk2__BRA__1__KET____DOT__VX_Warp__in_thread_mask
	   [0U] : ((~ (IData)(vlTOPp->Vortex__DOT__vx_fetch__DOT__genblk2__BRA__1__KET____DOT__warp_zero_stall)) 
		   & vlTOPp->Vortex__DOT__vx_fetch__DOT__genblk2__BRA__1__KET____DOT__VX_Warp__DOT__valid
		   [0U]));
    vlTOPp->Vortex__DOT__vx_fetch__DOT____Vcellout__genblk2__BRA__1__KET____DOT__VX_Warp__out_valid[1U] 
	= ((IData)(vlTOPp->Vortex__DOT__vx_fetch__DOT__genblk2__BRA__1__KET____DOT__warp_zero_change_mask)
	    ? vlTOPp->Vortex__DOT__vx_fetch__DOT____Vcellinp__genblk2__BRA__1__KET____DOT__VX_Warp__in_thread_mask
	   [1U] : ((~ (IData)(vlTOPp->Vortex__DOT__vx_fetch__DOT__genblk2__BRA__1__KET____DOT__warp_zero_stall)) 
		   & vlTOPp->Vortex__DOT__vx_fetch__DOT__genblk2__BRA__1__KET____DOT__VX_Warp__DOT__valid
		   [1U]));
    vlTOPp->Vortex__DOT__vx_fetch__DOT____Vcellout__genblk2__BRA__1__KET____DOT__VX_Warp__out_valid[2U] 
	= ((IData)(vlTOPp->Vortex__DOT__vx_fetch__DOT__genblk2__BRA__1__KET____DOT__warp_zero_change_mask)
	    ? vlTOPp->Vortex__DOT__vx_fetch__DOT____Vcellinp__genblk2__BRA__1__KET____DOT__VX_Warp__in_thread_mask
	   [2U] : ((~ (IData)(vlTOPp->Vortex__DOT__vx_fetch__DOT__genblk2__BRA__1__KET____DOT__warp_zero_stall)) 
		   & vlTOPp->Vortex__DOT__vx_fetch__DOT__genblk2__BRA__1__KET____DOT__VX_Warp__DOT__valid
		   [2U]));
    vlTOPp->Vortex__DOT__vx_fetch__DOT____Vcellout__genblk2__BRA__1__KET____DOT__VX_Warp__out_valid[3U] 
	= ((IData)(vlTOPp->Vortex__DOT__vx_fetch__DOT__genblk2__BRA__1__KET____DOT__warp_zero_change_mask)
	    ? vlTOPp->Vortex__DOT__vx_fetch__DOT____Vcellinp__genblk2__BRA__1__KET____DOT__VX_Warp__in_thread_mask
	   [3U] : ((~ (IData)(vlTOPp->Vortex__DOT__vx_fetch__DOT__genblk2__BRA__1__KET____DOT__warp_zero_stall)) 
		   & vlTOPp->Vortex__DOT__vx_fetch__DOT__genblk2__BRA__1__KET____DOT__VX_Warp__DOT__valid
		   [3U]));
    vlTOPp->Vortex__DOT__vx_fetch__DOT____Vcellout__genblk2__BRA__2__KET____DOT__VX_Warp__out_valid[0U] 
	= ((IData)(vlTOPp->Vortex__DOT__vx_fetch__DOT__genblk2__BRA__2__KET____DOT__warp_zero_change_mask)
	    ? vlTOPp->Vortex__DOT__vx_fetch__DOT____Vcellinp__genblk2__BRA__2__KET____DOT__VX_Warp__in_thread_mask
	   [0U] : ((~ (IData)(vlTOPp->Vortex__DOT__vx_fetch__DOT__genblk2__BRA__2__KET____DOT__warp_zero_stall)) 
		   & vlTOPp->Vortex__DOT__vx_fetch__DOT__genblk2__BRA__2__KET____DOT__VX_Warp__DOT__valid
		   [0U]));
    vlTOPp->Vortex__DOT__vx_fetch__DOT____Vcellout__genblk2__BRA__2__KET____DOT__VX_Warp__out_valid[1U] 
	= ((IData)(vlTOPp->Vortex__DOT__vx_fetch__DOT__genblk2__BRA__2__KET____DOT__warp_zero_change_mask)
	    ? vlTOPp->Vortex__DOT__vx_fetch__DOT____Vcellinp__genblk2__BRA__2__KET____DOT__VX_Warp__in_thread_mask
	   [1U] : ((~ (IData)(vlTOPp->Vortex__DOT__vx_fetch__DOT__genblk2__BRA__2__KET____DOT__warp_zero_stall)) 
		   & vlTOPp->Vortex__DOT__vx_fetch__DOT__genblk2__BRA__2__KET____DOT__VX_Warp__DOT__valid
		   [1U]));
    vlTOPp->Vortex__DOT__vx_fetch__DOT____Vcellout__genblk2__BRA__2__KET____DOT__VX_Warp__out_valid[2U] 
	= ((IData)(vlTOPp->Vortex__DOT__vx_fetch__DOT__genblk2__BRA__2__KET____DOT__warp_zero_change_mask)
	    ? vlTOPp->Vortex__DOT__vx_fetch__DOT____Vcellinp__genblk2__BRA__2__KET____DOT__VX_Warp__in_thread_mask
	   [2U] : ((~ (IData)(vlTOPp->Vortex__DOT__vx_fetch__DOT__genblk2__BRA__2__KET____DOT__warp_zero_stall)) 
		   & vlTOPp->Vortex__DOT__vx_fetch__DOT__genblk2__BRA__2__KET____DOT__VX_Warp__DOT__valid
		   [2U]));
    vlTOPp->Vortex__DOT__vx_fetch__DOT____Vcellout__genblk2__BRA__2__KET____DOT__VX_Warp__out_valid[3U] 
	= ((IData)(vlTOPp->Vortex__DOT__vx_fetch__DOT__genblk2__BRA__2__KET____DOT__warp_zero_change_mask)
	    ? vlTOPp->Vortex__DOT__vx_fetch__DOT____Vcellinp__genblk2__BRA__2__KET____DOT__VX_Warp__in_thread_mask
	   [3U] : ((~ (IData)(vlTOPp->Vortex__DOT__vx_fetch__DOT__genblk2__BRA__2__KET____DOT__warp_zero_stall)) 
		   & vlTOPp->Vortex__DOT__vx_fetch__DOT__genblk2__BRA__2__KET____DOT__VX_Warp__DOT__valid
		   [3U]));
    vlTOPp->Vortex__DOT__vx_fetch__DOT____Vcellout__genblk2__BRA__3__KET____DOT__VX_Warp__out_valid[0U] 
	= ((IData)(vlTOPp->Vortex__DOT__vx_fetch__DOT__genblk2__BRA__3__KET____DOT__warp_zero_change_mask)
	    ? vlTOPp->Vortex__DOT__vx_fetch__DOT____Vcellinp__genblk2__BRA__3__KET____DOT__VX_Warp__in_thread_mask
	   [0U] : ((~ (IData)(vlTOPp->Vortex__DOT__vx_fetch__DOT__genblk2__BRA__3__KET____DOT__warp_zero_stall)) 
		   & vlTOPp->Vortex__DOT__vx_fetch__DOT__genblk2__BRA__3__KET____DOT__VX_Warp__DOT__valid
		   [0U]));
    vlTOPp->Vortex__DOT__vx_fetch__DOT____Vcellout__genblk2__BRA__3__KET____DOT__VX_Warp__out_valid[1U] 
	= ((IData)(vlTOPp->Vortex__DOT__vx_fetch__DOT__genblk2__BRA__3__KET____DOT__warp_zero_change_mask)
	    ? vlTOPp->Vortex__DOT__vx_fetch__DOT____Vcellinp__genblk2__BRA__3__KET____DOT__VX_Warp__in_thread_mask
	   [1U] : ((~ (IData)(vlTOPp->Vortex__DOT__vx_fetch__DOT__genblk2__BRA__3__KET____DOT__warp_zero_stall)) 
		   & vlTOPp->Vortex__DOT__vx_fetch__DOT__genblk2__BRA__3__KET____DOT__VX_Warp__DOT__valid
		   [1U]));
    vlTOPp->Vortex__DOT__vx_fetch__DOT____Vcellout__genblk2__BRA__3__KET____DOT__VX_Warp__out_valid[2U] 
	= ((IData)(vlTOPp->Vortex__DOT__vx_fetch__DOT__genblk2__BRA__3__KET____DOT__warp_zero_change_mask)
	    ? vlTOPp->Vortex__DOT__vx_fetch__DOT____Vcellinp__genblk2__BRA__3__KET____DOT__VX_Warp__in_thread_mask
	   [2U] : ((~ (IData)(vlTOPp->Vortex__DOT__vx_fetch__DOT__genblk2__BRA__3__KET____DOT__warp_zero_stall)) 
		   & vlTOPp->Vortex__DOT__vx_fetch__DOT__genblk2__BRA__3__KET____DOT__VX_Warp__DOT__valid
		   [2U]));
    vlTOPp->Vortex__DOT__vx_fetch__DOT____Vcellout__genblk2__BRA__3__KET____DOT__VX_Warp__out_valid[3U] 
	= ((IData)(vlTOPp->Vortex__DOT__vx_fetch__DOT__genblk2__BRA__3__KET____DOT__warp_zero_change_mask)
	    ? vlTOPp->Vortex__DOT__vx_fetch__DOT____Vcellinp__genblk2__BRA__3__KET____DOT__VX_Warp__in_thread_mask
	   [3U] : ((~ (IData)(vlTOPp->Vortex__DOT__vx_fetch__DOT__genblk2__BRA__3__KET____DOT__warp_zero_stall)) 
		   & vlTOPp->Vortex__DOT__vx_fetch__DOT__genblk2__BRA__3__KET____DOT__VX_Warp__DOT__valid
		   [3U]));
    vlTOPp->Vortex__DOT__vx_fetch__DOT____Vcellout__genblk2__BRA__4__KET____DOT__VX_Warp__out_valid[0U] 
	= ((IData)(vlTOPp->Vortex__DOT__vx_fetch__DOT__genblk2__BRA__4__KET____DOT__warp_zero_change_mask)
	    ? vlTOPp->Vortex__DOT__vx_fetch__DOT____Vcellinp__genblk2__BRA__4__KET____DOT__VX_Warp__in_thread_mask
	   [0U] : ((~ (IData)(vlTOPp->Vortex__DOT__vx_fetch__DOT__genblk2__BRA__4__KET____DOT__warp_zero_stall)) 
		   & vlTOPp->Vortex__DOT__vx_fetch__DOT__genblk2__BRA__4__KET____DOT__VX_Warp__DOT__valid
		   [0U]));
    vlTOPp->Vortex__DOT__vx_fetch__DOT____Vcellout__genblk2__BRA__4__KET____DOT__VX_Warp__out_valid[1U] 
	= ((IData)(vlTOPp->Vortex__DOT__vx_fetch__DOT__genblk2__BRA__4__KET____DOT__warp_zero_change_mask)
	    ? vlTOPp->Vortex__DOT__vx_fetch__DOT____Vcellinp__genblk2__BRA__4__KET____DOT__VX_Warp__in_thread_mask
	   [1U] : ((~ (IData)(vlTOPp->Vortex__DOT__vx_fetch__DOT__genblk2__BRA__4__KET____DOT__warp_zero_stall)) 
		   & vlTOPp->Vortex__DOT__vx_fetch__DOT__genblk2__BRA__4__KET____DOT__VX_Warp__DOT__valid
		   [1U]));
    vlTOPp->Vortex__DOT__vx_fetch__DOT____Vcellout__genblk2__BRA__4__KET____DOT__VX_Warp__out_valid[2U] 
	= ((IData)(vlTOPp->Vortex__DOT__vx_fetch__DOT__genblk2__BRA__4__KET____DOT__warp_zero_change_mask)
	    ? vlTOPp->Vortex__DOT__vx_fetch__DOT____Vcellinp__genblk2__BRA__4__KET____DOT__VX_Warp__in_thread_mask
	   [2U] : ((~ (IData)(vlTOPp->Vortex__DOT__vx_fetch__DOT__genblk2__BRA__4__KET____DOT__warp_zero_stall)) 
		   & vlTOPp->Vortex__DOT__vx_fetch__DOT__genblk2__BRA__4__KET____DOT__VX_Warp__DOT__valid
		   [2U]));
    vlTOPp->Vortex__DOT__vx_fetch__DOT____Vcellout__genblk2__BRA__4__KET____DOT__VX_Warp__out_valid[3U] 
	= ((IData)(vlTOPp->Vortex__DOT__vx_fetch__DOT__genblk2__BRA__4__KET____DOT__warp_zero_change_mask)
	    ? vlTOPp->Vortex__DOT__vx_fetch__DOT____Vcellinp__genblk2__BRA__4__KET____DOT__VX_Warp__in_thread_mask
	   [3U] : ((~ (IData)(vlTOPp->Vortex__DOT__vx_fetch__DOT__genblk2__BRA__4__KET____DOT__warp_zero_stall)) 
		   & vlTOPp->Vortex__DOT__vx_fetch__DOT__genblk2__BRA__4__KET____DOT__VX_Warp__DOT__valid
		   [3U]));
    vlTOPp->Vortex__DOT__vx_fetch__DOT____Vcellout__genblk2__BRA__5__KET____DOT__VX_Warp__out_valid[0U] 
	= ((IData)(vlTOPp->Vortex__DOT__vx_fetch__DOT__genblk2__BRA__5__KET____DOT__warp_zero_change_mask)
	    ? vlTOPp->Vortex__DOT__vx_fetch__DOT____Vcellinp__genblk2__BRA__5__KET____DOT__VX_Warp__in_thread_mask
	   [0U] : ((~ (IData)(vlTOPp->Vortex__DOT__vx_fetch__DOT__genblk2__BRA__5__KET____DOT__warp_zero_stall)) 
		   & vlTOPp->Vortex__DOT__vx_fetch__DOT__genblk2__BRA__5__KET____DOT__VX_Warp__DOT__valid
		   [0U]));
    vlTOPp->Vortex__DOT__vx_fetch__DOT____Vcellout__genblk2__BRA__5__KET____DOT__VX_Warp__out_valid[1U] 
	= ((IData)(vlTOPp->Vortex__DOT__vx_fetch__DOT__genblk2__BRA__5__KET____DOT__warp_zero_change_mask)
	    ? vlTOPp->Vortex__DOT__vx_fetch__DOT____Vcellinp__genblk2__BRA__5__KET____DOT__VX_Warp__in_thread_mask
	   [1U] : ((~ (IData)(vlTOPp->Vortex__DOT__vx_fetch__DOT__genblk2__BRA__5__KET____DOT__warp_zero_stall)) 
		   & vlTOPp->Vortex__DOT__vx_fetch__DOT__genblk2__BRA__5__KET____DOT__VX_Warp__DOT__valid
		   [1U]));
    vlTOPp->Vortex__DOT__vx_fetch__DOT____Vcellout__genblk2__BRA__5__KET____DOT__VX_Warp__out_valid[2U] 
	= ((IData)(vlTOPp->Vortex__DOT__vx_fetch__DOT__genblk2__BRA__5__KET____DOT__warp_zero_change_mask)
	    ? vlTOPp->Vortex__DOT__vx_fetch__DOT____Vcellinp__genblk2__BRA__5__KET____DOT__VX_Warp__in_thread_mask
	   [2U] : ((~ (IData)(vlTOPp->Vortex__DOT__vx_fetch__DOT__genblk2__BRA__5__KET____DOT__warp_zero_stall)) 
		   & vlTOPp->Vortex__DOT__vx_fetch__DOT__genblk2__BRA__5__KET____DOT__VX_Warp__DOT__valid
		   [2U]));
    vlTOPp->Vortex__DOT__vx_fetch__DOT____Vcellout__genblk2__BRA__5__KET____DOT__VX_Warp__out_valid[3U] 
	= ((IData)(vlTOPp->Vortex__DOT__vx_fetch__DOT__genblk2__BRA__5__KET____DOT__warp_zero_change_mask)
	    ? vlTOPp->Vortex__DOT__vx_fetch__DOT____Vcellinp__genblk2__BRA__5__KET____DOT__VX_Warp__in_thread_mask
	   [3U] : ((~ (IData)(vlTOPp->Vortex__DOT__vx_fetch__DOT__genblk2__BRA__5__KET____DOT__warp_zero_stall)) 
		   & vlTOPp->Vortex__DOT__vx_fetch__DOT__genblk2__BRA__5__KET____DOT__VX_Warp__DOT__valid
		   [3U]));
    vlTOPp->Vortex__DOT__vx_fetch__DOT____Vcellout__genblk2__BRA__6__KET____DOT__VX_Warp__out_valid[0U] 
	= ((IData)(vlTOPp->Vortex__DOT__vx_fetch__DOT__genblk2__BRA__6__KET____DOT__warp_zero_change_mask)
	    ? vlTOPp->Vortex__DOT__vx_fetch__DOT____Vcellinp__genblk2__BRA__6__KET____DOT__VX_Warp__in_thread_mask
	   [0U] : ((~ (IData)(vlTOPp->Vortex__DOT__vx_fetch__DOT__genblk2__BRA__6__KET____DOT__warp_zero_stall)) 
		   & vlTOPp->Vortex__DOT__vx_fetch__DOT__genblk2__BRA__6__KET____DOT__VX_Warp__DOT__valid
		   [0U]));
    vlTOPp->Vortex__DOT__vx_fetch__DOT____Vcellout__genblk2__BRA__6__KET____DOT__VX_Warp__out_valid[1U] 
	= ((IData)(vlTOPp->Vortex__DOT__vx_fetch__DOT__genblk2__BRA__6__KET____DOT__warp_zero_change_mask)
	    ? vlTOPp->Vortex__DOT__vx_fetch__DOT____Vcellinp__genblk2__BRA__6__KET____DOT__VX_Warp__in_thread_mask
	   [1U] : ((~ (IData)(vlTOPp->Vortex__DOT__vx_fetch__DOT__genblk2__BRA__6__KET____DOT__warp_zero_stall)) 
		   & vlTOPp->Vortex__DOT__vx_fetch__DOT__genblk2__BRA__6__KET____DOT__VX_Warp__DOT__valid
		   [1U]));
    vlTOPp->Vortex__DOT__vx_fetch__DOT____Vcellout__genblk2__BRA__6__KET____DOT__VX_Warp__out_valid[2U] 
	= ((IData)(vlTOPp->Vortex__DOT__vx_fetch__DOT__genblk2__BRA__6__KET____DOT__warp_zero_change_mask)
	    ? vlTOPp->Vortex__DOT__vx_fetch__DOT____Vcellinp__genblk2__BRA__6__KET____DOT__VX_Warp__in_thread_mask
	   [2U] : ((~ (IData)(vlTOPp->Vortex__DOT__vx_fetch__DOT__genblk2__BRA__6__KET____DOT__warp_zero_stall)) 
		   & vlTOPp->Vortex__DOT__vx_fetch__DOT__genblk2__BRA__6__KET____DOT__VX_Warp__DOT__valid
		   [2U]));
    vlTOPp->Vortex__DOT__vx_fetch__DOT____Vcellout__genblk2__BRA__6__KET____DOT__VX_Warp__out_valid[3U] 
	= ((IData)(vlTOPp->Vortex__DOT__vx_fetch__DOT__genblk2__BRA__6__KET____DOT__warp_zero_change_mask)
	    ? vlTOPp->Vortex__DOT__vx_fetch__DOT____Vcellinp__genblk2__BRA__6__KET____DOT__VX_Warp__in_thread_mask
	   [3U] : ((~ (IData)(vlTOPp->Vortex__DOT__vx_fetch__DOT__genblk2__BRA__6__KET____DOT__warp_zero_stall)) 
		   & vlTOPp->Vortex__DOT__vx_fetch__DOT__genblk2__BRA__6__KET____DOT__VX_Warp__DOT__valid
		   [3U]));
    vlTOPp->Vortex__DOT__vx_fetch__DOT____Vcellout__genblk2__BRA__7__KET____DOT__VX_Warp__out_valid[0U] 
	= ((IData)(vlTOPp->Vortex__DOT__vx_fetch__DOT__genblk2__BRA__7__KET____DOT__warp_zero_change_mask)
	    ? vlTOPp->Vortex__DOT__vx_fetch__DOT____Vcellinp__genblk2__BRA__7__KET____DOT__VX_Warp__in_thread_mask
	   [0U] : ((~ (IData)(vlTOPp->Vortex__DOT__vx_fetch__DOT__genblk2__BRA__7__KET____DOT__warp_zero_stall)) 
		   & vlTOPp->Vortex__DOT__vx_fetch__DOT__genblk2__BRA__7__KET____DOT__VX_Warp__DOT__valid
		   [0U]));
    vlTOPp->Vortex__DOT__vx_fetch__DOT____Vcellout__genblk2__BRA__7__KET____DOT__VX_Warp__out_valid[1U] 
	= ((IData)(vlTOPp->Vortex__DOT__vx_fetch__DOT__genblk2__BRA__7__KET____DOT__warp_zero_change_mask)
	    ? vlTOPp->Vortex__DOT__vx_fetch__DOT____Vcellinp__genblk2__BRA__7__KET____DOT__VX_Warp__in_thread_mask
	   [1U] : ((~ (IData)(vlTOPp->Vortex__DOT__vx_fetch__DOT__genblk2__BRA__7__KET____DOT__warp_zero_stall)) 
		   & vlTOPp->Vortex__DOT__vx_fetch__DOT__genblk2__BRA__7__KET____DOT__VX_Warp__DOT__valid
		   [1U]));
    vlTOPp->Vortex__DOT__vx_fetch__DOT____Vcellout__genblk2__BRA__7__KET____DOT__VX_Warp__out_valid[2U] 
	= ((IData)(vlTOPp->Vortex__DOT__vx_fetch__DOT__genblk2__BRA__7__KET____DOT__warp_zero_change_mask)
	    ? vlTOPp->Vortex__DOT__vx_fetch__DOT____Vcellinp__genblk2__BRA__7__KET____DOT__VX_Warp__in_thread_mask
	   [2U] : ((~ (IData)(vlTOPp->Vortex__DOT__vx_fetch__DOT__genblk2__BRA__7__KET____DOT__warp_zero_stall)) 
		   & vlTOPp->Vortex__DOT__vx_fetch__DOT__genblk2__BRA__7__KET____DOT__VX_Warp__DOT__valid
		   [2U]));
    vlTOPp->Vortex__DOT__vx_fetch__DOT____Vcellout__genblk2__BRA__7__KET____DOT__VX_Warp__out_valid[3U] 
	= ((IData)(vlTOPp->Vortex__DOT__vx_fetch__DOT__genblk2__BRA__7__KET____DOT__warp_zero_change_mask)
	    ? vlTOPp->Vortex__DOT__vx_fetch__DOT____Vcellinp__genblk2__BRA__7__KET____DOT__VX_Warp__in_thread_mask
	   [3U] : ((~ (IData)(vlTOPp->Vortex__DOT__vx_fetch__DOT__genblk2__BRA__7__KET____DOT__warp_zero_stall)) 
		   & vlTOPp->Vortex__DOT__vx_fetch__DOT__genblk2__BRA__7__KET____DOT__VX_Warp__DOT__valid
		   [3U]));
    vlTOPp->Vortex__DOT__vx_fetch__DOT__warp_glob_valid[0U][3U] 
	= vlTOPp->Vortex__DOT__vx_fetch__DOT____Vcellout__genblk2__BRA__0__KET____DOT__VX_Warp__out_valid
	[3U];
    vlTOPp->Vortex__DOT__vx_fetch__DOT__warp_glob_valid[0U][2U] 
	= vlTOPp->Vortex__DOT__vx_fetch__DOT____Vcellout__genblk2__BRA__0__KET____DOT__VX_Warp__out_valid
	[2U];
    vlTOPp->Vortex__DOT__vx_fetch__DOT__warp_glob_valid[0U][1U] 
	= vlTOPp->Vortex__DOT__vx_fetch__DOT____Vcellout__genblk2__BRA__0__KET____DOT__VX_Warp__out_valid
	[1U];
    vlTOPp->Vortex__DOT__vx_fetch__DOT__warp_glob_valid[0U][0U] 
	= vlTOPp->Vortex__DOT__vx_fetch__DOT____Vcellout__genblk2__BRA__0__KET____DOT__VX_Warp__out_valid
	[0U];
    vlTOPp->Vortex__DOT__vx_fetch__DOT__warp_glob_valid[1U][3U] 
	= vlTOPp->Vortex__DOT__vx_fetch__DOT____Vcellout__genblk2__BRA__1__KET____DOT__VX_Warp__out_valid
	[3U];
    vlTOPp->Vortex__DOT__vx_fetch__DOT__warp_glob_valid[1U][2U] 
	= vlTOPp->Vortex__DOT__vx_fetch__DOT____Vcellout__genblk2__BRA__1__KET____DOT__VX_Warp__out_valid
	[2U];
    vlTOPp->Vortex__DOT__vx_fetch__DOT__warp_glob_valid[1U][1U] 
	= vlTOPp->Vortex__DOT__vx_fetch__DOT____Vcellout__genblk2__BRA__1__KET____DOT__VX_Warp__out_valid
	[1U];
    vlTOPp->Vortex__DOT__vx_fetch__DOT__warp_glob_valid[1U][0U] 
	= vlTOPp->Vortex__DOT__vx_fetch__DOT____Vcellout__genblk2__BRA__1__KET____DOT__VX_Warp__out_valid
	[0U];
    vlTOPp->Vortex__DOT__vx_fetch__DOT__warp_glob_valid[2U][3U] 
	= vlTOPp->Vortex__DOT__vx_fetch__DOT____Vcellout__genblk2__BRA__2__KET____DOT__VX_Warp__out_valid
	[3U];
    vlTOPp->Vortex__DOT__vx_fetch__DOT__warp_glob_valid[2U][2U] 
	= vlTOPp->Vortex__DOT__vx_fetch__DOT____Vcellout__genblk2__BRA__2__KET____DOT__VX_Warp__out_valid
	[2U];
    vlTOPp->Vortex__DOT__vx_fetch__DOT__warp_glob_valid[2U][1U] 
	= vlTOPp->Vortex__DOT__vx_fetch__DOT____Vcellout__genblk2__BRA__2__KET____DOT__VX_Warp__out_valid
	[1U];
    vlTOPp->Vortex__DOT__vx_fetch__DOT__warp_glob_valid[2U][0U] 
	= vlTOPp->Vortex__DOT__vx_fetch__DOT____Vcellout__genblk2__BRA__2__KET____DOT__VX_Warp__out_valid
	[0U];
    vlTOPp->Vortex__DOT__vx_fetch__DOT__warp_glob_valid[3U][3U] 
	= vlTOPp->Vortex__DOT__vx_fetch__DOT____Vcellout__genblk2__BRA__3__KET____DOT__VX_Warp__out_valid
	[3U];
    vlTOPp->Vortex__DOT__vx_fetch__DOT__warp_glob_valid[3U][2U] 
	= vlTOPp->Vortex__DOT__vx_fetch__DOT____Vcellout__genblk2__BRA__3__KET____DOT__VX_Warp__out_valid
	[2U];
    vlTOPp->Vortex__DOT__vx_fetch__DOT__warp_glob_valid[3U][1U] 
	= vlTOPp->Vortex__DOT__vx_fetch__DOT____Vcellout__genblk2__BRA__3__KET____DOT__VX_Warp__out_valid
	[1U];
    vlTOPp->Vortex__DOT__vx_fetch__DOT__warp_glob_valid[3U][0U] 
	= vlTOPp->Vortex__DOT__vx_fetch__DOT____Vcellout__genblk2__BRA__3__KET____DOT__VX_Warp__out_valid
	[0U];
    vlTOPp->Vortex__DOT__vx_fetch__DOT__warp_glob_valid[4U][3U] 
	= vlTOPp->Vortex__DOT__vx_fetch__DOT____Vcellout__genblk2__BRA__4__KET____DOT__VX_Warp__out_valid
	[3U];
    vlTOPp->Vortex__DOT__vx_fetch__DOT__warp_glob_valid[4U][2U] 
	= vlTOPp->Vortex__DOT__vx_fetch__DOT____Vcellout__genblk2__BRA__4__KET____DOT__VX_Warp__out_valid
	[2U];
    vlTOPp->Vortex__DOT__vx_fetch__DOT__warp_glob_valid[4U][1U] 
	= vlTOPp->Vortex__DOT__vx_fetch__DOT____Vcellout__genblk2__BRA__4__KET____DOT__VX_Warp__out_valid
	[1U];
    vlTOPp->Vortex__DOT__vx_fetch__DOT__warp_glob_valid[4U][0U] 
	= vlTOPp->Vortex__DOT__vx_fetch__DOT____Vcellout__genblk2__BRA__4__KET____DOT__VX_Warp__out_valid
	[0U];
    vlTOPp->Vortex__DOT__vx_fetch__DOT__warp_glob_valid[5U][3U] 
	= vlTOPp->Vortex__DOT__vx_fetch__DOT____Vcellout__genblk2__BRA__5__KET____DOT__VX_Warp__out_valid
	[3U];
    vlTOPp->Vortex__DOT__vx_fetch__DOT__warp_glob_valid[5U][2U] 
	= vlTOPp->Vortex__DOT__vx_fetch__DOT____Vcellout__genblk2__BRA__5__KET____DOT__VX_Warp__out_valid
	[2U];
    vlTOPp->Vortex__DOT__vx_fetch__DOT__warp_glob_valid[5U][1U] 
	= vlTOPp->Vortex__DOT__vx_fetch__DOT____Vcellout__genblk2__BRA__5__KET____DOT__VX_Warp__out_valid
	[1U];
    vlTOPp->Vortex__DOT__vx_fetch__DOT__warp_glob_valid[5U][0U] 
	= vlTOPp->Vortex__DOT__vx_fetch__DOT____Vcellout__genblk2__BRA__5__KET____DOT__VX_Warp__out_valid
	[0U];
    vlTOPp->Vortex__DOT__vx_fetch__DOT__warp_glob_valid[6U][3U] 
	= vlTOPp->Vortex__DOT__vx_fetch__DOT____Vcellout__genblk2__BRA__6__KET____DOT__VX_Warp__out_valid
	[3U];
    vlTOPp->Vortex__DOT__vx_fetch__DOT__warp_glob_valid[6U][2U] 
	= vlTOPp->Vortex__DOT__vx_fetch__DOT____Vcellout__genblk2__BRA__6__KET____DOT__VX_Warp__out_valid
	[2U];
    vlTOPp->Vortex__DOT__vx_fetch__DOT__warp_glob_valid[6U][1U] 
	= vlTOPp->Vortex__DOT__vx_fetch__DOT____Vcellout__genblk2__BRA__6__KET____DOT__VX_Warp__out_valid
	[1U];
    vlTOPp->Vortex__DOT__vx_fetch__DOT__warp_glob_valid[6U][0U] 
	= vlTOPp->Vortex__DOT__vx_fetch__DOT____Vcellout__genblk2__BRA__6__KET____DOT__VX_Warp__out_valid
	[0U];
    vlTOPp->Vortex__DOT__vx_fetch__DOT__warp_glob_valid[7U][3U] 
	= vlTOPp->Vortex__DOT__vx_fetch__DOT____Vcellout__genblk2__BRA__7__KET____DOT__VX_Warp__out_valid
	[3U];
    vlTOPp->Vortex__DOT__vx_fetch__DOT__warp_glob_valid[7U][2U] 
	= vlTOPp->Vortex__DOT__vx_fetch__DOT____Vcellout__genblk2__BRA__7__KET____DOT__VX_Warp__out_valid
	[2U];
    vlTOPp->Vortex__DOT__vx_fetch__DOT__warp_glob_valid[7U][1U] 
	= vlTOPp->Vortex__DOT__vx_fetch__DOT____Vcellout__genblk2__BRA__7__KET____DOT__VX_Warp__out_valid
	[1U];
    vlTOPp->Vortex__DOT__vx_fetch__DOT__warp_glob_valid[7U][0U] 
	= vlTOPp->Vortex__DOT__vx_fetch__DOT____Vcellout__genblk2__BRA__7__KET____DOT__VX_Warp__out_valid
	[0U];
    // ALWAYS at VX_fetch.v:177
    if ((0U == (IData)(vlTOPp->Vortex__DOT__vx_fetch__DOT__warp_num))) {
	vlTOPp->Vortex__DOT__vx_fetch__DOT__out_valid_var[0U] 
	    = vlTOPp->Vortex__DOT__vx_fetch__DOT__warp_glob_valid
	    [0U][0U];
	vlTOPp->Vortex__DOT__vx_fetch__DOT__out_valid_var[1U] 
	    = vlTOPp->Vortex__DOT__vx_fetch__DOT__warp_glob_valid
	    [0U][1U];
	vlTOPp->Vortex__DOT__vx_fetch__DOT__out_valid_var[2U] 
	    = vlTOPp->Vortex__DOT__vx_fetch__DOT__warp_glob_valid
	    [0U][2U];
	vlTOPp->Vortex__DOT__vx_fetch__DOT__out_valid_var[3U] 
	    = vlTOPp->Vortex__DOT__vx_fetch__DOT__warp_glob_valid
	    [0U][3U];
    }
    if ((1U == (IData)(vlTOPp->Vortex__DOT__vx_fetch__DOT__warp_num))) {
	vlTOPp->Vortex__DOT__vx_fetch__DOT__out_valid_var[0U] 
	    = vlTOPp->Vortex__DOT__vx_fetch__DOT__warp_glob_valid
	    [1U][0U];
	vlTOPp->Vortex__DOT__vx_fetch__DOT__out_valid_var[1U] 
	    = vlTOPp->Vortex__DOT__vx_fetch__DOT__warp_glob_valid
	    [1U][1U];
	vlTOPp->Vortex__DOT__vx_fetch__DOT__out_valid_var[2U] 
	    = vlTOPp->Vortex__DOT__vx_fetch__DOT__warp_glob_valid
	    [1U][2U];
	vlTOPp->Vortex__DOT__vx_fetch__DOT__out_valid_var[3U] 
	    = vlTOPp->Vortex__DOT__vx_fetch__DOT__warp_glob_valid
	    [1U][3U];
    }
    if ((2U == (IData)(vlTOPp->Vortex__DOT__vx_fetch__DOT__warp_num))) {
	vlTOPp->Vortex__DOT__vx_fetch__DOT__out_valid_var[0U] 
	    = vlTOPp->Vortex__DOT__vx_fetch__DOT__warp_glob_valid
	    [2U][0U];
	vlTOPp->Vortex__DOT__vx_fetch__DOT__out_valid_var[1U] 
	    = vlTOPp->Vortex__DOT__vx_fetch__DOT__warp_glob_valid
	    [2U][1U];
	vlTOPp->Vortex__DOT__vx_fetch__DOT__out_valid_var[2U] 
	    = vlTOPp->Vortex__DOT__vx_fetch__DOT__warp_glob_valid
	    [2U][2U];
	vlTOPp->Vortex__DOT__vx_fetch__DOT__out_valid_var[3U] 
	    = vlTOPp->Vortex__DOT__vx_fetch__DOT__warp_glob_valid
	    [2U][3U];
    }
    if ((3U == (IData)(vlTOPp->Vortex__DOT__vx_fetch__DOT__warp_num))) {
	vlTOPp->Vortex__DOT__vx_fetch__DOT__out_valid_var[0U] 
	    = vlTOPp->Vortex__DOT__vx_fetch__DOT__warp_glob_valid
	    [3U][0U];
	vlTOPp->Vortex__DOT__vx_fetch__DOT__out_valid_var[1U] 
	    = vlTOPp->Vortex__DOT__vx_fetch__DOT__warp_glob_valid
	    [3U][1U];
	vlTOPp->Vortex__DOT__vx_fetch__DOT__out_valid_var[2U] 
	    = vlTOPp->Vortex__DOT__vx_fetch__DOT__warp_glob_valid
	    [3U][2U];
	vlTOPp->Vortex__DOT__vx_fetch__DOT__out_valid_var[3U] 
	    = vlTOPp->Vortex__DOT__vx_fetch__DOT__warp_glob_valid
	    [3U][3U];
    }
    if ((4U == (IData)(vlTOPp->Vortex__DOT__vx_fetch__DOT__warp_num))) {
	vlTOPp->Vortex__DOT__vx_fetch__DOT__out_valid_var[0U] 
	    = vlTOPp->Vortex__DOT__vx_fetch__DOT__warp_glob_valid
	    [4U][0U];
	vlTOPp->Vortex__DOT__vx_fetch__DOT__out_valid_var[1U] 
	    = vlTOPp->Vortex__DOT__vx_fetch__DOT__warp_glob_valid
	    [4U][1U];
	vlTOPp->Vortex__DOT__vx_fetch__DOT__out_valid_var[2U] 
	    = vlTOPp->Vortex__DOT__vx_fetch__DOT__warp_glob_valid
	    [4U][2U];
	vlTOPp->Vortex__DOT__vx_fetch__DOT__out_valid_var[3U] 
	    = vlTOPp->Vortex__DOT__vx_fetch__DOT__warp_glob_valid
	    [4U][3U];
    }
    if ((5U == (IData)(vlTOPp->Vortex__DOT__vx_fetch__DOT__warp_num))) {
	vlTOPp->Vortex__DOT__vx_fetch__DOT__out_valid_var[0U] 
	    = vlTOPp->Vortex__DOT__vx_fetch__DOT__warp_glob_valid
	    [5U][0U];
	vlTOPp->Vortex__DOT__vx_fetch__DOT__out_valid_var[1U] 
	    = vlTOPp->Vortex__DOT__vx_fetch__DOT__warp_glob_valid
	    [5U][1U];
	vlTOPp->Vortex__DOT__vx_fetch__DOT__out_valid_var[2U] 
	    = vlTOPp->Vortex__DOT__vx_fetch__DOT__warp_glob_valid
	    [5U][2U];
	vlTOPp->Vortex__DOT__vx_fetch__DOT__out_valid_var[3U] 
	    = vlTOPp->Vortex__DOT__vx_fetch__DOT__warp_glob_valid
	    [5U][3U];
    }
    if ((6U == (IData)(vlTOPp->Vortex__DOT__vx_fetch__DOT__warp_num))) {
	vlTOPp->Vortex__DOT__vx_fetch__DOT__out_valid_var[0U] 
	    = vlTOPp->Vortex__DOT__vx_fetch__DOT__warp_glob_valid
	    [6U][0U];
	vlTOPp->Vortex__DOT__vx_fetch__DOT__out_valid_var[1U] 
	    = vlTOPp->Vortex__DOT__vx_fetch__DOT__warp_glob_valid
	    [6U][1U];
	vlTOPp->Vortex__DOT__vx_fetch__DOT__out_valid_var[2U] 
	    = vlTOPp->Vortex__DOT__vx_fetch__DOT__warp_glob_valid
	    [6U][2U];
	vlTOPp->Vortex__DOT__vx_fetch__DOT__out_valid_var[3U] 
	    = vlTOPp->Vortex__DOT__vx_fetch__DOT__warp_glob_valid
	    [6U][3U];
    }
    if ((7U == (IData)(vlTOPp->Vortex__DOT__vx_fetch__DOT__warp_num))) {
	vlTOPp->Vortex__DOT__vx_fetch__DOT__out_valid_var[0U] 
	    = vlTOPp->Vortex__DOT__vx_fetch__DOT__warp_glob_valid
	    [7U][0U];
	vlTOPp->Vortex__DOT__vx_fetch__DOT__out_valid_var[1U] 
	    = vlTOPp->Vortex__DOT__vx_fetch__DOT__warp_glob_valid
	    [7U][1U];
	vlTOPp->Vortex__DOT__vx_fetch__DOT__out_valid_var[2U] 
	    = vlTOPp->Vortex__DOT__vx_fetch__DOT__warp_glob_valid
	    [7U][2U];
	vlTOPp->Vortex__DOT__vx_fetch__DOT__out_valid_var[3U] 
	    = vlTOPp->Vortex__DOT__vx_fetch__DOT__warp_glob_valid
	    [7U][3U];
    }
    vlSymsp->TOP__Vortex__DOT__fe_inst_meta_fd.valid 
	= ((0xeU & (IData)(vlSymsp->TOP__Vortex__DOT__fe_inst_meta_fd.valid)) 
	   | vlTOPp->Vortex__DOT__vx_fetch__DOT__out_valid_var
	   [0U]);
    vlSymsp->TOP__Vortex__DOT__fe_inst_meta_fd.valid 
	= ((0xdU & (IData)(vlSymsp->TOP__Vortex__DOT__fe_inst_meta_fd.valid)) 
	   | (vlTOPp->Vortex__DOT__vx_fetch__DOT__out_valid_var
	      [1U] << 1U));
    vlSymsp->TOP__Vortex__DOT__fe_inst_meta_fd.valid 
	= ((0xbU & (IData)(vlSymsp->TOP__Vortex__DOT__fe_inst_meta_fd.valid)) 
	   | (vlTOPp->Vortex__DOT__vx_fetch__DOT__out_valid_var
	      [2U] << 2U));
    vlSymsp->TOP__Vortex__DOT__fe_inst_meta_fd.valid 
	= ((7U & (IData)(vlSymsp->TOP__Vortex__DOT__fe_inst_meta_fd.valid)) 
	   | (vlTOPp->Vortex__DOT__vx_fetch__DOT__out_valid_var
	      [3U] << 3U));
}

void VVortex::_eval(VVortex__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VVortex::_eval\n"); );
    VVortex* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if ((((IData)(vlTOPp->clk) & (~ (IData)(vlTOPp->__Vclklast__TOP__clk))) 
	 | ((IData)(vlTOPp->reset) & (~ (IData)(vlTOPp->__Vclklast__TOP__reset))))) {
	vlTOPp->_sequent__TOP__4(vlSymsp);
    }
    if (((IData)(vlTOPp->clk) & (~ (IData)(vlTOPp->__Vclklast__TOP__clk)))) {
	vlTOPp->_sequent__TOP__5(vlSymsp);
	vlSymsp->TOP__Vortex__DOT__vx_decode__DOT__genblk2__BRA__1__KET____DOT__VX_Context_one._sequent__TOP__Vortex__DOT__vx_decode__DOT__genblk2__BRA__1__KET____DOT__VX_Context_one__15(vlSymsp);
	vlSymsp->TOP__Vortex__DOT__vx_decode__DOT__genblk2__BRA__2__KET____DOT__VX_Context_one._sequent__TOP__Vortex__DOT__vx_decode__DOT__genblk2__BRA__2__KET____DOT__VX_Context_one__16(vlSymsp);
	vlSymsp->TOP__Vortex__DOT__vx_decode__DOT__genblk2__BRA__3__KET____DOT__VX_Context_one._sequent__TOP__Vortex__DOT__vx_decode__DOT__genblk2__BRA__3__KET____DOT__VX_Context_one__17(vlSymsp);
	vlSymsp->TOP__Vortex__DOT__vx_decode__DOT__genblk2__BRA__4__KET____DOT__VX_Context_one._sequent__TOP__Vortex__DOT__vx_decode__DOT__genblk2__BRA__4__KET____DOT__VX_Context_one__18(vlSymsp);
	vlSymsp->TOP__Vortex__DOT__vx_decode__DOT__genblk2__BRA__5__KET____DOT__VX_Context_one._sequent__TOP__Vortex__DOT__vx_decode__DOT__genblk2__BRA__5__KET____DOT__VX_Context_one__19(vlSymsp);
	vlSymsp->TOP__Vortex__DOT__vx_decode__DOT__genblk2__BRA__6__KET____DOT__VX_Context_one._sequent__TOP__Vortex__DOT__vx_decode__DOT__genblk2__BRA__6__KET____DOT__VX_Context_one__20(vlSymsp);
	vlSymsp->TOP__Vortex__DOT__vx_decode__DOT__genblk2__BRA__7__KET____DOT__VX_Context_one._sequent__TOP__Vortex__DOT__vx_decode__DOT__genblk2__BRA__7__KET____DOT__VX_Context_one__21(vlSymsp);
	vlTOPp->_sequent__TOP__6(vlSymsp);
    }
    vlTOPp->_combo__TOP__7(vlSymsp);
    if (((~ (IData)(vlTOPp->clk)) & (IData)(vlTOPp->__Vclklast__TOP__clk))) {
	vlTOPp->_sequent__TOP__8(vlSymsp);
	vlSymsp->TOP__Vortex__DOT__vx_decode__DOT__genblk2__BRA__1__KET____DOT__VX_Context_one._sequent__TOP__Vortex__DOT__vx_decode__DOT__genblk2__BRA__1__KET____DOT__VX_Context_one__22(vlSymsp);
	vlSymsp->TOP__Vortex__DOT__vx_decode__DOT__genblk2__BRA__2__KET____DOT__VX_Context_one._sequent__TOP__Vortex__DOT__vx_decode__DOT__genblk2__BRA__1__KET____DOT__VX_Context_one__22(vlSymsp);
	vlSymsp->TOP__Vortex__DOT__vx_decode__DOT__genblk2__BRA__3__KET____DOT__VX_Context_one._sequent__TOP__Vortex__DOT__vx_decode__DOT__genblk2__BRA__1__KET____DOT__VX_Context_one__22(vlSymsp);
	vlSymsp->TOP__Vortex__DOT__vx_decode__DOT__genblk2__BRA__4__KET____DOT__VX_Context_one._sequent__TOP__Vortex__DOT__vx_decode__DOT__genblk2__BRA__1__KET____DOT__VX_Context_one__22(vlSymsp);
	vlSymsp->TOP__Vortex__DOT__vx_decode__DOT__genblk2__BRA__5__KET____DOT__VX_Context_one._sequent__TOP__Vortex__DOT__vx_decode__DOT__genblk2__BRA__1__KET____DOT__VX_Context_one__22(vlSymsp);
	vlSymsp->TOP__Vortex__DOT__vx_decode__DOT__genblk2__BRA__6__KET____DOT__VX_Context_one._sequent__TOP__Vortex__DOT__vx_decode__DOT__genblk2__BRA__1__KET____DOT__VX_Context_one__22(vlSymsp);
	vlSymsp->TOP__Vortex__DOT__vx_decode__DOT__genblk2__BRA__7__KET____DOT__VX_Context_one._sequent__TOP__Vortex__DOT__vx_decode__DOT__genblk2__BRA__1__KET____DOT__VX_Context_one__22(vlSymsp);
    }
    if ((((IData)(vlTOPp->clk) & (~ (IData)(vlTOPp->__Vclklast__TOP__clk))) 
	 | ((IData)(vlTOPp->reset) & (~ (IData)(vlTOPp->__Vclklast__TOP__reset))))) {
	vlTOPp->_sequent__TOP__9(vlSymsp);
    }
    vlTOPp->_combo__TOP__10(vlSymsp);
    vlSymsp->TOP__Vortex__DOT__vx_decode__DOT__genblk2__BRA__1__KET____DOT__VX_Context_one._combo__TOP__Vortex__DOT__vx_decode__DOT__genblk2__BRA__1__KET____DOT__VX_Context_one__29(vlSymsp);
    vlSymsp->TOP__Vortex__DOT__vx_decode__DOT__genblk2__BRA__2__KET____DOT__VX_Context_one._combo__TOP__Vortex__DOT__vx_decode__DOT__genblk2__BRA__1__KET____DOT__VX_Context_one__29(vlSymsp);
    vlSymsp->TOP__Vortex__DOT__vx_decode__DOT__genblk2__BRA__3__KET____DOT__VX_Context_one._combo__TOP__Vortex__DOT__vx_decode__DOT__genblk2__BRA__1__KET____DOT__VX_Context_one__29(vlSymsp);
    vlSymsp->TOP__Vortex__DOT__vx_decode__DOT__genblk2__BRA__4__KET____DOT__VX_Context_one._combo__TOP__Vortex__DOT__vx_decode__DOT__genblk2__BRA__1__KET____DOT__VX_Context_one__29(vlSymsp);
    vlSymsp->TOP__Vortex__DOT__vx_decode__DOT__genblk2__BRA__5__KET____DOT__VX_Context_one._combo__TOP__Vortex__DOT__vx_decode__DOT__genblk2__BRA__1__KET____DOT__VX_Context_one__29(vlSymsp);
    vlSymsp->TOP__Vortex__DOT__vx_decode__DOT__genblk2__BRA__6__KET____DOT__VX_Context_one._combo__TOP__Vortex__DOT__vx_decode__DOT__genblk2__BRA__1__KET____DOT__VX_Context_one__29(vlSymsp);
    vlSymsp->TOP__Vortex__DOT__vx_decode__DOT__genblk2__BRA__7__KET____DOT__VX_Context_one._combo__TOP__Vortex__DOT__vx_decode__DOT__genblk2__BRA__1__KET____DOT__VX_Context_one__29(vlSymsp);
    vlTOPp->_combo__TOP__11(vlSymsp);
    // Final
    vlTOPp->__Vclklast__TOP__clk = vlTOPp->clk;
    vlTOPp->__Vclklast__TOP__reset = vlTOPp->reset;
}

void VVortex::_eval_initial(VVortex__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VVortex::_eval_initial\n"); );
    VVortex* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->_initial__TOP__1(vlSymsp);
    vlSymsp->TOP__Vortex__DOT__vx_decode__DOT__genblk2__BRA__1__KET____DOT__VX_Context_one._initial__TOP__Vortex__DOT__vx_decode__DOT__genblk2__BRA__1__KET____DOT__VX_Context_one__1(vlSymsp);
    vlSymsp->TOP__Vortex__DOT__vx_decode__DOT__genblk2__BRA__2__KET____DOT__VX_Context_one._initial__TOP__Vortex__DOT__vx_decode__DOT__genblk2__BRA__1__KET____DOT__VX_Context_one__1(vlSymsp);
    vlSymsp->TOP__Vortex__DOT__vx_decode__DOT__genblk2__BRA__3__KET____DOT__VX_Context_one._initial__TOP__Vortex__DOT__vx_decode__DOT__genblk2__BRA__1__KET____DOT__VX_Context_one__1(vlSymsp);
    vlSymsp->TOP__Vortex__DOT__vx_decode__DOT__genblk2__BRA__4__KET____DOT__VX_Context_one._initial__TOP__Vortex__DOT__vx_decode__DOT__genblk2__BRA__1__KET____DOT__VX_Context_one__1(vlSymsp);
    vlSymsp->TOP__Vortex__DOT__vx_decode__DOT__genblk2__BRA__5__KET____DOT__VX_Context_one._initial__TOP__Vortex__DOT__vx_decode__DOT__genblk2__BRA__1__KET____DOT__VX_Context_one__1(vlSymsp);
    vlSymsp->TOP__Vortex__DOT__vx_decode__DOT__genblk2__BRA__6__KET____DOT__VX_Context_one._initial__TOP__Vortex__DOT__vx_decode__DOT__genblk2__BRA__1__KET____DOT__VX_Context_one__1(vlSymsp);
    vlSymsp->TOP__Vortex__DOT__vx_decode__DOT__genblk2__BRA__7__KET____DOT__VX_Context_one._initial__TOP__Vortex__DOT__vx_decode__DOT__genblk2__BRA__1__KET____DOT__VX_Context_one__1(vlSymsp);
    vlTOPp->__Vclklast__TOP__clk = vlTOPp->clk;
    vlTOPp->__Vclklast__TOP__reset = vlTOPp->reset;
}

void VVortex::final() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VVortex::final\n"); );
    // Variables
    VVortex__Syms* __restrict vlSymsp = this->__VlSymsp;
    VVortex* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

void VVortex::_eval_settle(VVortex__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VVortex::_eval_settle\n"); );
    VVortex* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->_settle__TOP__2(vlSymsp);
    vlSymsp->TOP__Vortex__DOT__vx_decode__DOT__genblk2__BRA__1__KET____DOT__VX_Context_one._settle__TOP__Vortex__DOT__vx_decode__DOT__genblk2__BRA__1__KET____DOT__VX_Context_one__8(vlSymsp);
    vlSymsp->TOP__Vortex__DOT__vx_decode__DOT__genblk2__BRA__2__KET____DOT__VX_Context_one._settle__TOP__Vortex__DOT__vx_decode__DOT__genblk2__BRA__1__KET____DOT__VX_Context_one__8(vlSymsp);
    vlSymsp->TOP__Vortex__DOT__vx_decode__DOT__genblk2__BRA__3__KET____DOT__VX_Context_one._settle__TOP__Vortex__DOT__vx_decode__DOT__genblk2__BRA__1__KET____DOT__VX_Context_one__8(vlSymsp);
    vlSymsp->TOP__Vortex__DOT__vx_decode__DOT__genblk2__BRA__4__KET____DOT__VX_Context_one._settle__TOP__Vortex__DOT__vx_decode__DOT__genblk2__BRA__1__KET____DOT__VX_Context_one__8(vlSymsp);
    vlSymsp->TOP__Vortex__DOT__vx_decode__DOT__genblk2__BRA__5__KET____DOT__VX_Context_one._settle__TOP__Vortex__DOT__vx_decode__DOT__genblk2__BRA__1__KET____DOT__VX_Context_one__8(vlSymsp);
    vlSymsp->TOP__Vortex__DOT__vx_decode__DOT__genblk2__BRA__6__KET____DOT__VX_Context_one._settle__TOP__Vortex__DOT__vx_decode__DOT__genblk2__BRA__1__KET____DOT__VX_Context_one__8(vlSymsp);
    vlSymsp->TOP__Vortex__DOT__vx_decode__DOT__genblk2__BRA__7__KET____DOT__VX_Context_one._settle__TOP__Vortex__DOT__vx_decode__DOT__genblk2__BRA__1__KET____DOT__VX_Context_one__8(vlSymsp);
    vlTOPp->_settle__TOP__3(vlSymsp);
}

VL_INLINE_OPT QData VVortex::_change_request(VVortex__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VVortex::_change_request\n"); );
    VVortex* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // Change detection
    QData __req = false;  // Logically a bool
    return __req;
}

#ifdef VL_DEBUG
void VVortex::_eval_debug_assertions() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VVortex::_eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((clk & 0xfeU))) {
	Verilated::overWidthError("clk");}
    if (VL_UNLIKELY((reset & 0xfeU))) {
	Verilated::overWidthError("reset");}
}
#endif // VL_DEBUG

void VVortex::_ctor_var_reset() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VVortex::_ctor_var_reset\n"); );
    // Body
    clk = VL_RAND_RESET_I(1);
    reset = VL_RAND_RESET_I(1);
    icache_response_instruction = VL_RAND_RESET_I(32);
    icache_request_pc_address = VL_RAND_RESET_I(32);
    { int __Vi0=0; for (; __Vi0<4; ++__Vi0) {
	    in_cache_driver_out_data[__Vi0] = VL_RAND_RESET_I(32);
    }}
    { int __Vi0=0; for (; __Vi0<4; ++__Vi0) {
	    out_cache_driver_in_address[__Vi0] = VL_RAND_RESET_I(32);
    }}
    out_cache_driver_in_mem_read = VL_RAND_RESET_I(3);
    out_cache_driver_in_mem_write = VL_RAND_RESET_I(3);
    { int __Vi0=0; for (; __Vi0<4; ++__Vi0) {
	    out_cache_driver_in_valid[__Vi0] = VL_RAND_RESET_I(1);
    }}
    { int __Vi0=0; for (; __Vi0<4; ++__Vi0) {
	    out_cache_driver_in_data[__Vi0] = VL_RAND_RESET_I(32);
    }}
    out_ebreak = VL_RAND_RESET_I(1);
    Vortex__DOT__decode_branch_stall = VL_RAND_RESET_I(1);
    Vortex__DOT__execute_branch_stall = VL_RAND_RESET_I(1);
    Vortex__DOT__memory_branch_dest = VL_RAND_RESET_I(32);
    Vortex__DOT__csr_decode_csr_data = VL_RAND_RESET_I(32);
    Vortex__DOT__forwarding_fwd_stall = VL_RAND_RESET_I(1);
    Vortex__DOT__forwarding_src1_fwd = VL_RAND_RESET_I(1);
    Vortex__DOT__forwarding_src2_fwd = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(128,Vortex__DOT____Vcellout__vx_execute__out_b_reg_data);
    VL_RAND_RESET_W(128,Vortex__DOT____Vcellout__vx_execute__out_a_reg_data);
    { int __Vi0=0; for (; __Vi0<4; ++__Vi0) {
	    Vortex__DOT____Vcellout__vx_memory__out_cache_driver_in_valid[__Vi0] = VL_RAND_RESET_I(1);
    }}
    { int __Vi0=0; for (; __Vi0<4; ++__Vi0) {
	    Vortex__DOT____Vcellout__vx_memory__out_cache_driver_in_data[__Vi0] = VL_RAND_RESET_I(32);
    }}
    { int __Vi0=0; for (; __Vi0<4; ++__Vi0) {
	    Vortex__DOT____Vcellout__vx_memory__out_cache_driver_in_address[__Vi0] = VL_RAND_RESET_I(32);
    }}
    { int __Vi0=0; for (; __Vi0<4; ++__Vi0) {
	    Vortex__DOT____Vcellinp__vx_memory__in_cache_driver_out_data[__Vi0] = VL_RAND_RESET_I(32);
    }}
    VL_RAND_RESET_W(128,Vortex__DOT____Vcellout__vx_forwarding__out_src2_fwd_data);
    VL_RAND_RESET_W(128,Vortex__DOT____Vcellout__vx_forwarding__out_src1_fwd_data);
    { int __Vi0=0; for (; __Vi0<4; ++__Vi0) {
	    Vortex__DOT__vx_fetch__DOT__in_thread_mask[__Vi0] = VL_RAND_RESET_I(1);
    }}
    Vortex__DOT__vx_fetch__DOT__stall = VL_RAND_RESET_I(1);
    Vortex__DOT__vx_fetch__DOT__warp_num = VL_RAND_RESET_I(4);
    Vortex__DOT__vx_fetch__DOT__warp_state = VL_RAND_RESET_I(4);
    Vortex__DOT__vx_fetch__DOT__warp_count = VL_RAND_RESET_I(4);
    Vortex__DOT__vx_fetch__DOT__add_warp = VL_RAND_RESET_I(1);
    Vortex__DOT__vx_fetch__DOT__remove_warp = VL_RAND_RESET_I(1);
    { int __Vi0=0; for (; __Vi0<8; ++__Vi0) {
	    Vortex__DOT__vx_fetch__DOT__warp_glob_pc[__Vi0] = VL_RAND_RESET_I(32);
    }}
    { int __Vi0=0; for (; __Vi0<8; ++__Vi0) {
	    { int __Vi1=0; for (; __Vi1<4; ++__Vi1) {
		    Vortex__DOT__vx_fetch__DOT__warp_glob_valid[__Vi0][__Vi1] = VL_RAND_RESET_I(1);
	    }}
    }}
    Vortex__DOT__vx_fetch__DOT__out_PC_var = VL_RAND_RESET_I(32);
    { int __Vi0=0; for (; __Vi0<4; ++__Vi0) {
	    Vortex__DOT__vx_fetch__DOT__out_valid_var[__Vi0] = VL_RAND_RESET_I(1);
    }}
    Vortex__DOT__vx_fetch__DOT__genblk2__BRA__0__KET____DOT__warp_zero_change_mask = VL_RAND_RESET_I(1);
    Vortex__DOT__vx_fetch__DOT__genblk2__BRA__0__KET____DOT__warp_zero_stall = VL_RAND_RESET_I(1);
    { int __Vi0=0; for (; __Vi0<4; ++__Vi0) {
	    Vortex__DOT__vx_fetch__DOT____Vcellout__genblk2__BRA__0__KET____DOT__VX_Warp__out_valid[__Vi0] = VL_RAND_RESET_I(1);
    }}
    { int __Vi0=0; for (; __Vi0<4; ++__Vi0) {
	    Vortex__DOT__vx_fetch__DOT____Vcellinp__genblk2__BRA__0__KET____DOT__VX_Warp__in_thread_mask[__Vi0] = VL_RAND_RESET_I(1);
    }}
    Vortex__DOT__vx_fetch__DOT__genblk2__BRA__1__KET____DOT__warp_zero_change_mask = VL_RAND_RESET_I(1);
    Vortex__DOT__vx_fetch__DOT__genblk2__BRA__1__KET____DOT__warp_zero_stall = VL_RAND_RESET_I(1);
    { int __Vi0=0; for (; __Vi0<4; ++__Vi0) {
	    Vortex__DOT__vx_fetch__DOT____Vcellout__genblk2__BRA__1__KET____DOT__VX_Warp__out_valid[__Vi0] = VL_RAND_RESET_I(1);
    }}
    { int __Vi0=0; for (; __Vi0<4; ++__Vi0) {
	    Vortex__DOT__vx_fetch__DOT____Vcellinp__genblk2__BRA__1__KET____DOT__VX_Warp__in_thread_mask[__Vi0] = VL_RAND_RESET_I(1);
    }}
    Vortex__DOT__vx_fetch__DOT__genblk2__BRA__2__KET____DOT__warp_zero_change_mask = VL_RAND_RESET_I(1);
    Vortex__DOT__vx_fetch__DOT__genblk2__BRA__2__KET____DOT__warp_zero_stall = VL_RAND_RESET_I(1);
    { int __Vi0=0; for (; __Vi0<4; ++__Vi0) {
	    Vortex__DOT__vx_fetch__DOT____Vcellout__genblk2__BRA__2__KET____DOT__VX_Warp__out_valid[__Vi0] = VL_RAND_RESET_I(1);
    }}
    { int __Vi0=0; for (; __Vi0<4; ++__Vi0) {
	    Vortex__DOT__vx_fetch__DOT____Vcellinp__genblk2__BRA__2__KET____DOT__VX_Warp__in_thread_mask[__Vi0] = VL_RAND_RESET_I(1);
    }}
    Vortex__DOT__vx_fetch__DOT__genblk2__BRA__3__KET____DOT__warp_zero_change_mask = VL_RAND_RESET_I(1);
    Vortex__DOT__vx_fetch__DOT__genblk2__BRA__3__KET____DOT__warp_zero_stall = VL_RAND_RESET_I(1);
    { int __Vi0=0; for (; __Vi0<4; ++__Vi0) {
	    Vortex__DOT__vx_fetch__DOT____Vcellout__genblk2__BRA__3__KET____DOT__VX_Warp__out_valid[__Vi0] = VL_RAND_RESET_I(1);
    }}
    { int __Vi0=0; for (; __Vi0<4; ++__Vi0) {
	    Vortex__DOT__vx_fetch__DOT____Vcellinp__genblk2__BRA__3__KET____DOT__VX_Warp__in_thread_mask[__Vi0] = VL_RAND_RESET_I(1);
    }}
    Vortex__DOT__vx_fetch__DOT__genblk2__BRA__4__KET____DOT__warp_zero_change_mask = VL_RAND_RESET_I(1);
    Vortex__DOT__vx_fetch__DOT__genblk2__BRA__4__KET____DOT__warp_zero_stall = VL_RAND_RESET_I(1);
    { int __Vi0=0; for (; __Vi0<4; ++__Vi0) {
	    Vortex__DOT__vx_fetch__DOT____Vcellout__genblk2__BRA__4__KET____DOT__VX_Warp__out_valid[__Vi0] = VL_RAND_RESET_I(1);
    }}
    { int __Vi0=0; for (; __Vi0<4; ++__Vi0) {
	    Vortex__DOT__vx_fetch__DOT____Vcellinp__genblk2__BRA__4__KET____DOT__VX_Warp__in_thread_mask[__Vi0] = VL_RAND_RESET_I(1);
    }}
    Vortex__DOT__vx_fetch__DOT__genblk2__BRA__5__KET____DOT__warp_zero_change_mask = VL_RAND_RESET_I(1);
    Vortex__DOT__vx_fetch__DOT__genblk2__BRA__5__KET____DOT__warp_zero_stall = VL_RAND_RESET_I(1);
    { int __Vi0=0; for (; __Vi0<4; ++__Vi0) {
	    Vortex__DOT__vx_fetch__DOT____Vcellout__genblk2__BRA__5__KET____DOT__VX_Warp__out_valid[__Vi0] = VL_RAND_RESET_I(1);
    }}
    { int __Vi0=0; for (; __Vi0<4; ++__Vi0) {
	    Vortex__DOT__vx_fetch__DOT____Vcellinp__genblk2__BRA__5__KET____DOT__VX_Warp__in_thread_mask[__Vi0] = VL_RAND_RESET_I(1);
    }}
    Vortex__DOT__vx_fetch__DOT__genblk2__BRA__6__KET____DOT__warp_zero_change_mask = VL_RAND_RESET_I(1);
    Vortex__DOT__vx_fetch__DOT__genblk2__BRA__6__KET____DOT__warp_zero_stall = VL_RAND_RESET_I(1);
    { int __Vi0=0; for (; __Vi0<4; ++__Vi0) {
	    Vortex__DOT__vx_fetch__DOT____Vcellout__genblk2__BRA__6__KET____DOT__VX_Warp__out_valid[__Vi0] = VL_RAND_RESET_I(1);
    }}
    { int __Vi0=0; for (; __Vi0<4; ++__Vi0) {
	    Vortex__DOT__vx_fetch__DOT____Vcellinp__genblk2__BRA__6__KET____DOT__VX_Warp__in_thread_mask[__Vi0] = VL_RAND_RESET_I(1);
    }}
    Vortex__DOT__vx_fetch__DOT__genblk2__BRA__7__KET____DOT__warp_zero_change_mask = VL_RAND_RESET_I(1);
    Vortex__DOT__vx_fetch__DOT__genblk2__BRA__7__KET____DOT__warp_zero_stall = VL_RAND_RESET_I(1);
    { int __Vi0=0; for (; __Vi0<4; ++__Vi0) {
	    Vortex__DOT__vx_fetch__DOT____Vcellout__genblk2__BRA__7__KET____DOT__VX_Warp__out_valid[__Vi0] = VL_RAND_RESET_I(1);
    }}
    { int __Vi0=0; for (; __Vi0<4; ++__Vi0) {
	    Vortex__DOT__vx_fetch__DOT____Vcellinp__genblk2__BRA__7__KET____DOT__VX_Warp__in_thread_mask[__Vi0] = VL_RAND_RESET_I(1);
    }}
    Vortex__DOT__vx_fetch__DOT__genblk2__BRA__0__KET____DOT__VX_Warp__DOT__real_PC = VL_RAND_RESET_I(32);
    Vortex__DOT__vx_fetch__DOT__genblk2__BRA__0__KET____DOT__VX_Warp__DOT__temp_PC = VL_RAND_RESET_I(32);
    { int __Vi0=0; for (; __Vi0<4; ++__Vi0) {
	    Vortex__DOT__vx_fetch__DOT__genblk2__BRA__0__KET____DOT__VX_Warp__DOT__valid[__Vi0] = VL_RAND_RESET_I(1);
    }}
    { int __Vi0=0; for (; __Vi0<4; ++__Vi0) {
	    Vortex__DOT__vx_fetch__DOT__genblk2__BRA__0__KET____DOT__VX_Warp__DOT__valid_zero[__Vi0] = VL_RAND_RESET_I(1);
    }}
    Vortex__DOT__vx_fetch__DOT__genblk2__BRA__1__KET____DOT__VX_Warp__DOT__real_PC = VL_RAND_RESET_I(32);
    Vortex__DOT__vx_fetch__DOT__genblk2__BRA__1__KET____DOT__VX_Warp__DOT__temp_PC = VL_RAND_RESET_I(32);
    { int __Vi0=0; for (; __Vi0<4; ++__Vi0) {
	    Vortex__DOT__vx_fetch__DOT__genblk2__BRA__1__KET____DOT__VX_Warp__DOT__valid[__Vi0] = VL_RAND_RESET_I(1);
    }}
    { int __Vi0=0; for (; __Vi0<4; ++__Vi0) {
	    Vortex__DOT__vx_fetch__DOT__genblk2__BRA__1__KET____DOT__VX_Warp__DOT__valid_zero[__Vi0] = VL_RAND_RESET_I(1);
    }}
    Vortex__DOT__vx_fetch__DOT__genblk2__BRA__2__KET____DOT__VX_Warp__DOT__real_PC = VL_RAND_RESET_I(32);
    Vortex__DOT__vx_fetch__DOT__genblk2__BRA__2__KET____DOT__VX_Warp__DOT__temp_PC = VL_RAND_RESET_I(32);
    { int __Vi0=0; for (; __Vi0<4; ++__Vi0) {
	    Vortex__DOT__vx_fetch__DOT__genblk2__BRA__2__KET____DOT__VX_Warp__DOT__valid[__Vi0] = VL_RAND_RESET_I(1);
    }}
    { int __Vi0=0; for (; __Vi0<4; ++__Vi0) {
	    Vortex__DOT__vx_fetch__DOT__genblk2__BRA__2__KET____DOT__VX_Warp__DOT__valid_zero[__Vi0] = VL_RAND_RESET_I(1);
    }}
    Vortex__DOT__vx_fetch__DOT__genblk2__BRA__3__KET____DOT__VX_Warp__DOT__real_PC = VL_RAND_RESET_I(32);
    Vortex__DOT__vx_fetch__DOT__genblk2__BRA__3__KET____DOT__VX_Warp__DOT__temp_PC = VL_RAND_RESET_I(32);
    { int __Vi0=0; for (; __Vi0<4; ++__Vi0) {
	    Vortex__DOT__vx_fetch__DOT__genblk2__BRA__3__KET____DOT__VX_Warp__DOT__valid[__Vi0] = VL_RAND_RESET_I(1);
    }}
    { int __Vi0=0; for (; __Vi0<4; ++__Vi0) {
	    Vortex__DOT__vx_fetch__DOT__genblk2__BRA__3__KET____DOT__VX_Warp__DOT__valid_zero[__Vi0] = VL_RAND_RESET_I(1);
    }}
    Vortex__DOT__vx_fetch__DOT__genblk2__BRA__4__KET____DOT__VX_Warp__DOT__real_PC = VL_RAND_RESET_I(32);
    Vortex__DOT__vx_fetch__DOT__genblk2__BRA__4__KET____DOT__VX_Warp__DOT__temp_PC = VL_RAND_RESET_I(32);
    { int __Vi0=0; for (; __Vi0<4; ++__Vi0) {
	    Vortex__DOT__vx_fetch__DOT__genblk2__BRA__4__KET____DOT__VX_Warp__DOT__valid[__Vi0] = VL_RAND_RESET_I(1);
    }}
    { int __Vi0=0; for (; __Vi0<4; ++__Vi0) {
	    Vortex__DOT__vx_fetch__DOT__genblk2__BRA__4__KET____DOT__VX_Warp__DOT__valid_zero[__Vi0] = VL_RAND_RESET_I(1);
    }}
    Vortex__DOT__vx_fetch__DOT__genblk2__BRA__5__KET____DOT__VX_Warp__DOT__real_PC = VL_RAND_RESET_I(32);
    Vortex__DOT__vx_fetch__DOT__genblk2__BRA__5__KET____DOT__VX_Warp__DOT__temp_PC = VL_RAND_RESET_I(32);
    { int __Vi0=0; for (; __Vi0<4; ++__Vi0) {
	    Vortex__DOT__vx_fetch__DOT__genblk2__BRA__5__KET____DOT__VX_Warp__DOT__valid[__Vi0] = VL_RAND_RESET_I(1);
    }}
    { int __Vi0=0; for (; __Vi0<4; ++__Vi0) {
	    Vortex__DOT__vx_fetch__DOT__genblk2__BRA__5__KET____DOT__VX_Warp__DOT__valid_zero[__Vi0] = VL_RAND_RESET_I(1);
    }}
    Vortex__DOT__vx_fetch__DOT__genblk2__BRA__6__KET____DOT__VX_Warp__DOT__real_PC = VL_RAND_RESET_I(32);
    Vortex__DOT__vx_fetch__DOT__genblk2__BRA__6__KET____DOT__VX_Warp__DOT__temp_PC = VL_RAND_RESET_I(32);
    { int __Vi0=0; for (; __Vi0<4; ++__Vi0) {
	    Vortex__DOT__vx_fetch__DOT__genblk2__BRA__6__KET____DOT__VX_Warp__DOT__valid[__Vi0] = VL_RAND_RESET_I(1);
    }}
    { int __Vi0=0; for (; __Vi0<4; ++__Vi0) {
	    Vortex__DOT__vx_fetch__DOT__genblk2__BRA__6__KET____DOT__VX_Warp__DOT__valid_zero[__Vi0] = VL_RAND_RESET_I(1);
    }}
    Vortex__DOT__vx_fetch__DOT__genblk2__BRA__7__KET____DOT__VX_Warp__DOT__real_PC = VL_RAND_RESET_I(32);
    Vortex__DOT__vx_fetch__DOT__genblk2__BRA__7__KET____DOT__VX_Warp__DOT__temp_PC = VL_RAND_RESET_I(32);
    { int __Vi0=0; for (; __Vi0<4; ++__Vi0) {
	    Vortex__DOT__vx_fetch__DOT__genblk2__BRA__7__KET____DOT__VX_Warp__DOT__valid[__Vi0] = VL_RAND_RESET_I(1);
    }}
    { int __Vi0=0; for (; __Vi0<4; ++__Vi0) {
	    Vortex__DOT__vx_fetch__DOT__genblk2__BRA__7__KET____DOT__VX_Warp__DOT__valid_zero[__Vi0] = VL_RAND_RESET_I(1);
    }}
    VL_RAND_RESET_W(72,Vortex__DOT__vx_f_d_reg__DOT__f_d_reg__DOT__value);
    { int __Vi0=0; for (; __Vi0<4; ++__Vi0) {
	    Vortex__DOT__vx_decode__DOT__in_valid[__Vi0] = VL_RAND_RESET_I(1);
    }}
    Vortex__DOT__vx_decode__DOT__is_itype = VL_RAND_RESET_I(1);
    Vortex__DOT__vx_decode__DOT__is_csr = VL_RAND_RESET_I(1);
    Vortex__DOT__vx_decode__DOT__is_clone = VL_RAND_RESET_I(1);
    Vortex__DOT__vx_decode__DOT__is_jalrs = VL_RAND_RESET_I(1);
    Vortex__DOT__vx_decode__DOT__is_jmprt = VL_RAND_RESET_I(1);
    Vortex__DOT__vx_decode__DOT__is_wspawn = VL_RAND_RESET_I(1);
    Vortex__DOT__vx_decode__DOT__jal_sys_jal = VL_RAND_RESET_I(1);
    Vortex__DOT__vx_decode__DOT__alu_tempp = VL_RAND_RESET_I(12);
    Vortex__DOT__vx_decode__DOT__mul_alu = VL_RAND_RESET_I(5);
    VL_RAND_RESET_W(1024,Vortex__DOT__vx_decode__DOT__glob_a_reg_data);
    VL_RAND_RESET_W(1024,Vortex__DOT__vx_decode__DOT__glob_b_reg_data);
    Vortex__DOT__vx_decode__DOT__glob_clone_stall = VL_RAND_RESET_I(8);
    Vortex__DOT__vx_decode__DOT__real_zero_isclone = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(128,Vortex__DOT__vx_decode__DOT____Vcellout__VX_Context_zero__out_b_reg_data);
    VL_RAND_RESET_W(128,Vortex__DOT__vx_decode__DOT____Vcellout__VX_Context_zero__out_a_reg_data);
    VL_RAND_RESET_W(128,Vortex__DOT__vx_decode__DOT__temp_out_a_reg_data);
    VL_RAND_RESET_W(128,Vortex__DOT__vx_decode__DOT__temp_out_b_reg_data);
    Vortex__DOT__vx_decode__DOT__temp_out_clone_stall = VL_RAND_RESET_I(1);
    Vortex__DOT__vx_decode__DOT__jalrs_thread_mask = VL_RAND_RESET_I(4);
    Vortex__DOT__vx_decode__DOT__jmprt_thread_mask = VL_RAND_RESET_I(4);
    Vortex__DOT__vx_decode__DOT__is_ebreak = VL_RAND_RESET_I(1);
    Vortex__DOT__vx_decode__DOT__temp_final_alu = VL_RAND_RESET_I(5);
    Vortex__DOT__vx_decode__DOT__genblk2__BRA__1__KET____DOT__real_wspawn = VL_RAND_RESET_I(1);
    Vortex__DOT__vx_decode__DOT__genblk2__BRA__1__KET____DOT__real_isclone = VL_RAND_RESET_I(1);
    Vortex__DOT__vx_decode__DOT__genblk2__BRA__2__KET____DOT__real_wspawn = VL_RAND_RESET_I(1);
    Vortex__DOT__vx_decode__DOT__genblk2__BRA__2__KET____DOT__real_isclone = VL_RAND_RESET_I(1);
    Vortex__DOT__vx_decode__DOT__genblk2__BRA__3__KET____DOT__real_wspawn = VL_RAND_RESET_I(1);
    Vortex__DOT__vx_decode__DOT__genblk2__BRA__3__KET____DOT__real_isclone = VL_RAND_RESET_I(1);
    Vortex__DOT__vx_decode__DOT__genblk2__BRA__4__KET____DOT__real_wspawn = VL_RAND_RESET_I(1);
    Vortex__DOT__vx_decode__DOT__genblk2__BRA__4__KET____DOT__real_isclone = VL_RAND_RESET_I(1);
    Vortex__DOT__vx_decode__DOT__genblk2__BRA__5__KET____DOT__real_wspawn = VL_RAND_RESET_I(1);
    Vortex__DOT__vx_decode__DOT__genblk2__BRA__5__KET____DOT__real_isclone = VL_RAND_RESET_I(1);
    Vortex__DOT__vx_decode__DOT__genblk2__BRA__6__KET____DOT__real_wspawn = VL_RAND_RESET_I(1);
    Vortex__DOT__vx_decode__DOT__genblk2__BRA__6__KET____DOT__real_isclone = VL_RAND_RESET_I(1);
    Vortex__DOT__vx_decode__DOT__genblk2__BRA__7__KET____DOT__real_wspawn = VL_RAND_RESET_I(1);
    Vortex__DOT__vx_decode__DOT__genblk2__BRA__7__KET____DOT__real_isclone = VL_RAND_RESET_I(1);
    Vortex__DOT__vx_decode__DOT__VX_Context_zero__DOT__state_stall = VL_RAND_RESET_I(6);
    VL_RAND_RESET_W(128,Vortex__DOT__vx_decode__DOT__VX_Context_zero__DOT__rd1_register);
    VL_RAND_RESET_W(128,Vortex__DOT__vx_decode__DOT__VX_Context_zero__DOT__rd2_register);
    Vortex__DOT__vx_decode__DOT__VX_Context_zero__DOT____Vcellout__vx_register_file_master__out_src2_data = VL_RAND_RESET_I(32);
    Vortex__DOT__vx_decode__DOT__VX_Context_zero__DOT____Vcellout__vx_register_file_master__out_src1_data = VL_RAND_RESET_I(32);
    Vortex__DOT__vx_decode__DOT__VX_Context_zero__DOT____Vcellout__gen_code_label__BRA__1__KET____DOT__vx_register_file_slave__out_src2_data = VL_RAND_RESET_I(32);
    Vortex__DOT__vx_decode__DOT__VX_Context_zero__DOT____Vcellout__gen_code_label__BRA__1__KET____DOT__vx_register_file_slave__out_src1_data = VL_RAND_RESET_I(32);
    Vortex__DOT__vx_decode__DOT__VX_Context_zero__DOT____Vcellout__gen_code_label__BRA__2__KET____DOT__vx_register_file_slave__out_src2_data = VL_RAND_RESET_I(32);
    Vortex__DOT__vx_decode__DOT__VX_Context_zero__DOT____Vcellout__gen_code_label__BRA__2__KET____DOT__vx_register_file_slave__out_src1_data = VL_RAND_RESET_I(32);
    Vortex__DOT__vx_decode__DOT__VX_Context_zero__DOT____Vcellout__gen_code_label__BRA__3__KET____DOT__vx_register_file_slave__out_src2_data = VL_RAND_RESET_I(32);
    Vortex__DOT__vx_decode__DOT__VX_Context_zero__DOT____Vcellout__gen_code_label__BRA__3__KET____DOT__vx_register_file_slave__out_src1_data = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(1024,Vortex__DOT__vx_decode__DOT__VX_Context_zero__DOT__vx_register_file_master__DOT__registers);
    VL_RAND_RESET_W(1024,Vortex__DOT__vx_decode__DOT__VX_Context_zero__DOT__gen_code_label__BRA__1__KET____DOT__vx_register_file_slave__DOT__registers);
    VL_RAND_RESET_W(1024,Vortex__DOT__vx_decode__DOT__VX_Context_zero__DOT__gen_code_label__BRA__2__KET____DOT__vx_register_file_slave__DOT__registers);
    VL_RAND_RESET_W(1024,Vortex__DOT__vx_decode__DOT__VX_Context_zero__DOT__gen_code_label__BRA__3__KET____DOT__vx_register_file_slave__DOT__registers);
    VL_RAND_RESET_W(490,Vortex__DOT__vx_d_e_reg__DOT____Vcellinp__d_e_reg__in);
    VL_RAND_RESET_W(490,Vortex__DOT__vx_d_e_reg__DOT__d_e_reg__DOT__value);
    Vortex__DOT__vx_execute__DOT____Vcellout__genblk1__BRA__0__KET____DOT__vx_alu__out_alu_result = VL_RAND_RESET_I(32);
    Vortex__DOT__vx_execute__DOT____Vcellout__genblk1__BRA__1__KET____DOT__vx_alu__out_alu_result = VL_RAND_RESET_I(32);
    Vortex__DOT__vx_execute__DOT____Vcellout__genblk1__BRA__2__KET____DOT__vx_alu__out_alu_result = VL_RAND_RESET_I(32);
    Vortex__DOT__vx_execute__DOT____Vcellout__genblk1__BRA__3__KET____DOT__vx_alu__out_alu_result = VL_RAND_RESET_I(32);
    Vortex__DOT__vx_execute__DOT__genblk1__BRA__0__KET____DOT__vx_alu__DOT__ALU_in2 = VL_RAND_RESET_I(32);
    Vortex__DOT__vx_execute__DOT__genblk1__BRA__0__KET____DOT__vx_alu__DOT__mult_signed_result = VL_RAND_RESET_Q(64);
    Vortex__DOT__vx_execute__DOT__genblk1__BRA__1__KET____DOT__vx_alu__DOT__ALU_in2 = VL_RAND_RESET_I(32);
    Vortex__DOT__vx_execute__DOT__genblk1__BRA__1__KET____DOT__vx_alu__DOT__mult_signed_result = VL_RAND_RESET_Q(64);
    Vortex__DOT__vx_execute__DOT__genblk1__BRA__2__KET____DOT__vx_alu__DOT__ALU_in2 = VL_RAND_RESET_I(32);
    Vortex__DOT__vx_execute__DOT__genblk1__BRA__2__KET____DOT__vx_alu__DOT__mult_signed_result = VL_RAND_RESET_Q(64);
    Vortex__DOT__vx_execute__DOT__genblk1__BRA__3__KET____DOT__vx_alu__DOT__ALU_in2 = VL_RAND_RESET_I(32);
    Vortex__DOT__vx_execute__DOT__genblk1__BRA__3__KET____DOT__vx_alu__DOT__mult_signed_result = VL_RAND_RESET_Q(64);
    VL_RAND_RESET_W(720,Vortex__DOT__vx_e_m_reg__DOT____Vcellinp__f_d_reg__in);
    VL_RAND_RESET_W(720,Vortex__DOT__vx_e_m_reg__DOT__f_d_reg__DOT__value);
    Vortex__DOT__vx_memory__DOT__temp_branch_dir = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(313,Vortex__DOT__vx_m_w_reg__DOT__m_w_reg__DOT__value);
    VL_RAND_RESET_W(128,Vortex__DOT__vx_writeback__DOT__out_pc_data);
    Vortex__DOT__vx_forwarding__DOT__src1_exe_fwd = VL_RAND_RESET_I(1);
    Vortex__DOT__vx_forwarding__DOT__src1_mem_fwd = VL_RAND_RESET_I(1);
    Vortex__DOT__vx_forwarding__DOT__src1_wb_fwd = VL_RAND_RESET_I(1);
    Vortex__DOT__vx_forwarding__DOT__src2_exe_fwd = VL_RAND_RESET_I(1);
    Vortex__DOT__vx_forwarding__DOT__src2_mem_fwd = VL_RAND_RESET_I(1);
    Vortex__DOT__vx_forwarding__DOT__src2_wb_fwd = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(128,Vortex__DOT__vx_forwarding__DOT__use_execute_PC_next);
    VL_RAND_RESET_W(128,Vortex__DOT__vx_forwarding__DOT__use_memory_PC_next);
    VL_RAND_RESET_W(128,Vortex__DOT__vx_forwarding__DOT__use_writeback_PC_next);
    { int __Vi0=0; for (; __Vi0<1025; ++__Vi0) {
	    Vortex__DOT__vx_csr_handler__DOT__csr[__Vi0] = VL_RAND_RESET_I(12);
    }}
    Vortex__DOT__vx_csr_handler__DOT__cycle = VL_RAND_RESET_Q(64);
    Vortex__DOT__vx_csr_handler__DOT__instret = VL_RAND_RESET_Q(64);
    Vortex__DOT__vx_csr_handler__DOT__decode_csr_address = VL_RAND_RESET_I(12);
    Vortex__DOT__vx_csr_handler__DOT____Vlvbound1 = VL_RAND_RESET_I(12);
    __Vtableidx1 = VL_RAND_RESET_I(3);
    __Vtable1_Vortex__DOT__vx_decode__DOT__mul_alu[0] = 0x10U;
    __Vtable1_Vortex__DOT__vx_decode__DOT__mul_alu[1] = 0x11U;
    __Vtable1_Vortex__DOT__vx_decode__DOT__mul_alu[2] = 0x12U;
    __Vtable1_Vortex__DOT__vx_decode__DOT__mul_alu[3] = 0x13U;
    __Vtable1_Vortex__DOT__vx_decode__DOT__mul_alu[4] = 0x14U;
    __Vtable1_Vortex__DOT__vx_decode__DOT__mul_alu[5] = 0x15U;
    __Vtable1_Vortex__DOT__vx_decode__DOT__mul_alu[6] = 0x16U;
    __Vtable1_Vortex__DOT__vx_decode__DOT__mul_alu[7] = 0x17U;
    __Vdly__Vortex__DOT__vx_fetch__DOT__warp_num = VL_RAND_RESET_I(4);
}
