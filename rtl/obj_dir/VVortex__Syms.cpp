// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table implementation internals

#include "VVortex__Syms.h"
#include "VVortex.h"
#include "VVortex___024unit.h"
#include "VVortex_VX_inst_meta_inter.h"
#include "VVortex_VX_frE_to_bckE_req_inter.h"
#include "VVortex_VX_mem_req_inter.h"
#include "VVortex_VX_inst_mem_wb_inter.h"
#include "VVortex_VX_warp_ctl_inter.h"
#include "VVortex_VX_wb_inter.h"
#include "VVortex_VX_context_slave.h"

// FUNCTIONS
VVortex__Syms::VVortex__Syms(VVortex* topp, const char* namep)
	// Setup locals
	: __Vm_namep(namep)
	, __Vm_didInit(false)
	// Setup submodule names
	, TOP__Vortex__DOT__VX_exe_mem_req (Verilated::catName(topp->name(),"Vortex.VX_exe_mem_req"))
	, TOP__Vortex__DOT__VX_frE_to_bckE_req (Verilated::catName(topp->name(),"Vortex.VX_frE_to_bckE_req"))
	, TOP__Vortex__DOT__VX_mem_wb    (Verilated::catName(topp->name(),"Vortex.VX_mem_wb"))
	, TOP__Vortex__DOT__VX_warp_ctl  (Verilated::catName(topp->name(),"Vortex.VX_warp_ctl"))
	, TOP__Vortex__DOT__VX_writeback_inter (Verilated::catName(topp->name(),"Vortex.VX_writeback_inter"))
	, TOP__Vortex__DOT__fe_inst_meta_fd (Verilated::catName(topp->name(),"Vortex.fe_inst_meta_fd"))
	, TOP__Vortex__DOT__vx_decode__DOT__genblk2__BRA__1__KET____DOT__VX_Context_one (Verilated::catName(topp->name(),"Vortex.vx_decode.genblk2[1].VX_Context_one"))
	, TOP__Vortex__DOT__vx_decode__DOT__genblk2__BRA__2__KET____DOT__VX_Context_one (Verilated::catName(topp->name(),"Vortex.vx_decode.genblk2[2].VX_Context_one"))
	, TOP__Vortex__DOT__vx_decode__DOT__genblk2__BRA__3__KET____DOT__VX_Context_one (Verilated::catName(topp->name(),"Vortex.vx_decode.genblk2[3].VX_Context_one"))
	, TOP__Vortex__DOT__vx_decode__DOT__genblk2__BRA__4__KET____DOT__VX_Context_one (Verilated::catName(topp->name(),"Vortex.vx_decode.genblk2[4].VX_Context_one"))
	, TOP__Vortex__DOT__vx_decode__DOT__genblk2__BRA__5__KET____DOT__VX_Context_one (Verilated::catName(topp->name(),"Vortex.vx_decode.genblk2[5].VX_Context_one"))
	, TOP__Vortex__DOT__vx_decode__DOT__genblk2__BRA__6__KET____DOT__VX_Context_one (Verilated::catName(topp->name(),"Vortex.vx_decode.genblk2[6].VX_Context_one"))
	, TOP__Vortex__DOT__vx_decode__DOT__genblk2__BRA__7__KET____DOT__VX_Context_one (Verilated::catName(topp->name(),"Vortex.vx_decode.genblk2[7].VX_Context_one"))
{
    // Pointer to top level
    TOPp = topp;
    // Setup each module's pointers to their submodules
    TOPp->__PVT__Vortex__DOT__VX_exe_mem_req  = &TOP__Vortex__DOT__VX_exe_mem_req;
    TOPp->__PVT__Vortex__DOT__VX_frE_to_bckE_req  = &TOP__Vortex__DOT__VX_frE_to_bckE_req;
    TOPp->__PVT__Vortex__DOT__VX_mem_wb  = &TOP__Vortex__DOT__VX_mem_wb;
    TOPp->__PVT__Vortex__DOT__VX_warp_ctl  = &TOP__Vortex__DOT__VX_warp_ctl;
    TOPp->__PVT__Vortex__DOT__VX_writeback_inter  = &TOP__Vortex__DOT__VX_writeback_inter;
    TOPp->__PVT__Vortex__DOT__fe_inst_meta_fd  = &TOP__Vortex__DOT__fe_inst_meta_fd;
    TOPp->__PVT__Vortex__DOT__vx_decode__DOT__genblk2__BRA__1__KET____DOT__VX_Context_one  = &TOP__Vortex__DOT__vx_decode__DOT__genblk2__BRA__1__KET____DOT__VX_Context_one;
    TOPp->__PVT__Vortex__DOT__vx_decode__DOT__genblk2__BRA__2__KET____DOT__VX_Context_one  = &TOP__Vortex__DOT__vx_decode__DOT__genblk2__BRA__2__KET____DOT__VX_Context_one;
    TOPp->__PVT__Vortex__DOT__vx_decode__DOT__genblk2__BRA__3__KET____DOT__VX_Context_one  = &TOP__Vortex__DOT__vx_decode__DOT__genblk2__BRA__3__KET____DOT__VX_Context_one;
    TOPp->__PVT__Vortex__DOT__vx_decode__DOT__genblk2__BRA__4__KET____DOT__VX_Context_one  = &TOP__Vortex__DOT__vx_decode__DOT__genblk2__BRA__4__KET____DOT__VX_Context_one;
    TOPp->__PVT__Vortex__DOT__vx_decode__DOT__genblk2__BRA__5__KET____DOT__VX_Context_one  = &TOP__Vortex__DOT__vx_decode__DOT__genblk2__BRA__5__KET____DOT__VX_Context_one;
    TOPp->__PVT__Vortex__DOT__vx_decode__DOT__genblk2__BRA__6__KET____DOT__VX_Context_one  = &TOP__Vortex__DOT__vx_decode__DOT__genblk2__BRA__6__KET____DOT__VX_Context_one;
    TOPp->__PVT__Vortex__DOT__vx_decode__DOT__genblk2__BRA__7__KET____DOT__VX_Context_one  = &TOP__Vortex__DOT__vx_decode__DOT__genblk2__BRA__7__KET____DOT__VX_Context_one;
    // Setup each module's pointer back to symbol table (for public functions)
    TOPp->__Vconfigure(this, true);
    TOP__Vortex__DOT__VX_exe_mem_req.__Vconfigure(this, true);
    TOP__Vortex__DOT__VX_frE_to_bckE_req.__Vconfigure(this, true);
    TOP__Vortex__DOT__VX_mem_wb.__Vconfigure(this, true);
    TOP__Vortex__DOT__VX_warp_ctl.__Vconfigure(this, true);
    TOP__Vortex__DOT__VX_writeback_inter.__Vconfigure(this, true);
    TOP__Vortex__DOT__fe_inst_meta_fd.__Vconfigure(this, true);
    TOP__Vortex__DOT__vx_decode__DOT__genblk2__BRA__1__KET____DOT__VX_Context_one.__Vconfigure(this, true);
    TOP__Vortex__DOT__vx_decode__DOT__genblk2__BRA__2__KET____DOT__VX_Context_one.__Vconfigure(this, false);
    TOP__Vortex__DOT__vx_decode__DOT__genblk2__BRA__3__KET____DOT__VX_Context_one.__Vconfigure(this, false);
    TOP__Vortex__DOT__vx_decode__DOT__genblk2__BRA__4__KET____DOT__VX_Context_one.__Vconfigure(this, false);
    TOP__Vortex__DOT__vx_decode__DOT__genblk2__BRA__5__KET____DOT__VX_Context_one.__Vconfigure(this, false);
    TOP__Vortex__DOT__vx_decode__DOT__genblk2__BRA__6__KET____DOT__VX_Context_one.__Vconfigure(this, false);
    TOP__Vortex__DOT__vx_decode__DOT__genblk2__BRA__7__KET____DOT__VX_Context_one.__Vconfigure(this, false);
}
