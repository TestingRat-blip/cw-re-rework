// Creature (entity) -- cube. 3 functions. Bodies = Ghidra pseudo-C.
// Attribution: see ../attribution.tsv. Toolchain of the original: MSVC 11.0 (VS2012).
#include "Creature.h"

/* cube::Creature::Creature @ 0043b690  kind=game  attributed-by=rtti  size=1385 */

Creature * __thiscall cube::Creature::Creature(Creature *this,undefined4 *param_1)

{
  uint uVar1;
  undefined4 uVar2;
  Creature_vftable *pCVar3;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006e2bb0;
  local_10 = ExceptionList;
  uVar1 = DAT_0076aa78 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  this->vftablePtr = &vftable;
  (this->Creature_data).offset_0x4 = *param_1;
  (this->Creature_data).offset_0x8 = param_1[1];
  FUN_0043c100(uVar1);
  this[0x117].Creature_data.offset_0x4 = 0;
  this[0x117].Creature_data.offset_0x8 = 0;
  uVar2 = FUN_00439600(0,0);
  this[0x117].Creature_data.offset_0x4 = uVar2;
  this[0x118].vftablePtr = (Creature_vftable *)0x0;
  *(undefined4 *)&this[0x118].Creature_data = 0;
  this[0x118].Creature_data.offset_0x4 = 0;
  this[0x118].Creature_data.offset_0x8 = 0;
  this[0x119].vftablePtr = (Creature_vftable *)0x0;
  *(undefined4 *)&this[0x119].Creature_data = 0x3f800000;
  this[0x119].Creature_data.offset_0x4 = 0x3f800000;
  this[0x119].Creature_data.offset_0x8 = 0;
  local_8 = 0;
  this[0x11a].Creature_data.offset_0x8 = 0;
  this[0x11b].vftablePtr = (Creature_vftable *)0x0;
  uVar2 = FUN_0043c870();
  this[0x11a].Creature_data.offset_0x8 = uVar2;
  local_8._0_1_ = 1;
  *(undefined4 *)&this[0x11b].Creature_data = 0;
  this[0x11b].Creature_data.offset_0x4 = 0;
  uVar2 = FUN_0043c870();
  *(undefined4 *)&this[0x11b].Creature_data = uVar2;
  this[0x11c].vftablePtr = (Creature_vftable *)0x0;
  *(undefined4 *)&this[0x11c].Creature_data = 0;
  this[0x11c].Creature_data.offset_0x4 = 0;
  this[0x11c].Creature_data.offset_0x8 = 0;
  this[0x11d].vftablePtr = (Creature_vftable *)0x0;
  *(undefined4 *)&this[0x11d].Creature_data = 0;
  this[0x11d].Creature_data.offset_0x4 = 0;
  FUN_0043c020();
  local_8._0_1_ = 3;
  this[0x130].Creature_data.offset_0x8 = 0;
  this[0x131].vftablePtr = (Creature_vftable *)0x0;
  uVar2 = FUN_0043c8a0(0,0);
  this[0x130].Creature_data.offset_0x8 = uVar2;
  *(undefined4 *)&this[0x131].Creature_data = 0;
  this[0x131].Creature_data.offset_0x4 = 0;
  this[0x135].vftablePtr = (Creature_vftable *)0x0;
  *(undefined4 *)&this[0x135].Creature_data = 0;
  this[0x135].Creature_data.offset_0x4 = 0;
  this[0x135].Creature_data.offset_0x8 = 0;
  this[0x136].vftablePtr = (Creature_vftable *)0x0;
  *(undefined4 *)&this[0x136].Creature_data = 0;
  *(undefined4 *)&this[0x137].Creature_data = 0;
  this[0x137].Creature_data.offset_0x4 = 0;
  this[0x137].Creature_data.offset_0x8 = 0;
  this[0x139].Creature_data.offset_0x4 = 0;
  local_8._0_1_ = 4;
  this[0x139].Creature_data.offset_0x8 = 0;
  this[0x13a].vftablePtr = (Creature_vftable *)0x0;
  uVar2 = FUN_0043c870();
  this[0x139].Creature_data.offset_0x8 = uVar2;
  local_8._0_1_ = 5;
  *(undefined4 *)&this[0x13a].Creature_data = 0;
  this[0x13a].Creature_data.offset_0x4 = 0;
  uVar2 = FUN_0065ae80();
  *(undefined4 *)&this[0x13a].Creature_data = uVar2;
  local_8._0_1_ = 6;
  this[0x13a].Creature_data.offset_0x8 = 0;
  this[0x13b].vftablePtr = (Creature_vftable *)0x0;
  uVar2 = FUN_0065ae80();
  this[0x13a].Creature_data.offset_0x8 = uVar2;
  *(undefined4 *)&this[0x13b].Creature_data = 0;
  *(undefined1 *)&this[0x13b].Creature_data.offset_0x4 = 0;
  this[0x13b].Creature_data.offset_0x8 = 0;
  *(undefined1 *)&this[0x13c].vftablePtr = 0;
  *(undefined4 *)&this[0x13c].Creature_data = 0;
  this[0x13c].Creature_data.offset_0x4 = 0;
  this[0x13c].Creature_data.offset_0x8 = 0;
  this[0x13d].vftablePtr = (Creature_vftable *)0x0;
  *(undefined4 *)&this[0x13d].Creature_data = 0;
  this[0x13d].Creature_data.offset_0x4 = 0x3f800000;
  this[0x13d].Creature_data.offset_0x8 = 0;
  this[0x13e].vftablePtr = (Creature_vftable *)0x0;
  *(undefined4 *)&this[0x13e].Creature_data = 0;
  this[0x13e].Creature_data.offset_0x4 = 0;
  this[0x13e].Creature_data.offset_0x8 = 0;
  this[0x13f].vftablePtr = (Creature_vftable *)0x0;
  *(undefined4 *)&this[0x13f].Creature_data = 1;
  this[0x13f].Creature_data.offset_0x4 = 0;
  this[0x13f].Creature_data.offset_0x8 = 0;
  this[0x140].vftablePtr = (Creature_vftable *)0x0;
  *(undefined4 *)&this[0x140].Creature_data = 0;
  this[0x140].Creature_data.offset_0x4 = 0;
  local_8._0_1_ = 9;
  this[0x140].Creature_data.offset_0x8 = 0;
  this[0x141].vftablePtr = (Creature_vftable *)0x0;
  uVar2 = FUN_006391e0();
  this[0x140].Creature_data.offset_0x8 = uVar2;
  local_8._0_1_ = 10;
  *(undefined4 *)&this[0x141].Creature_data = 0;
  this[0x141].Creature_data.offset_0x4 = 0;
  uVar2 = FUN_0046d4b0();
  *(undefined4 *)&this[0x141].Creature_data = uVar2;
  this[0x141].Creature_data.offset_0x8 = 0xffffffff;
  this[0x142].vftablePtr = (Creature_vftable *)0xffffffff;
  *(undefined4 *)&this[0x142].Creature_data = 0xffffffff;
  this[0x145].Creature_data.offset_0x4 = 0;
  this[0x145].Creature_data.offset_0x8 = 0;
  local_8._0_1_ = 0xb;
  this[0x146].vftablePtr = (Creature_vftable *)0x0;
  *(undefined4 *)&this[0x146].Creature_data = 0;
  pCVar3 = (Creature_vftable *)FUN_0043c8e0(0,0);
  this[0x146].vftablePtr = pCVar3;
  local_8._0_1_ = 0xc;
  this[0x146].Creature_data.offset_0x4 = 0;
  this[0x146].Creature_data.offset_0x8 = 0;
  uVar2 = FUN_00678520();
  this[0x146].Creature_data.offset_0x4 = uVar2;
  local_8._0_1_ = 0xd;
  this[0x147].vftablePtr = (Creature_vftable *)0x0;
  *(undefined4 *)&this[0x147].Creature_data = 0;
  pCVar3 = (Creature_vftable *)FUN_0043c8e0(0,0);
  this[0x147].vftablePtr = pCVar3;
  this[0x147].Creature_data.offset_0x4 = 0xffffffff;
  this[0x147].Creature_data.offset_0x8 = 0xffffffff;
  this[0x148].vftablePtr = (Creature_vftable *)0x0;
  *(undefined4 *)&this[0x148].Creature_data = 0;
  this[0x148].Creature_data.offset_0x4 = 0;
  this[0x148].Creature_data.offset_0x8 = 0;
  this[0x149].vftablePtr = (Creature_vftable *)0x0;
  *(undefined4 *)&this[0x149].Creature_data = 0;
  local_8 = CONCAT31(local_8._1_3_,0xf);
  FUN_00411e50(this);
  this[0x1d2].Creature_data.offset_0x4 = 0;
  this[0x1d2].Creature_data.offset_0x8 = 0x43480000;
  *(undefined1 *)&this[0x1d3].Creature_data.offset_0x4 = 0;
  this[0x1d3].Creature_data.offset_0x8 = 1;
  this[0x1d4].vftablePtr = (Creature_vftable *)0x0;
  *(undefined4 *)&this[0x1d4].Creature_data = 0;
  *(undefined2 *)&this[0x1d5].Creature_data.offset_0x4 = 1;
  *(undefined2 *)&this[0x1d4].Creature_data.offset_0x4 = 0;
  this[0x1d4].Creature_data.offset_0x8 = 0;
  this[0x1d5].vftablePtr = (Creature_vftable *)0x0;
  *(undefined2 *)&this[0x1d5].Creature_data = 0;
  this[0x1d5].Creature_data.field_0x2 = 0;
  this[0x1e5].Creature_data.offset_0x8 = 0;
  memset(&this[0x1d5].Creature_data.offset_0x8,0,0x100);
  ExceptionList = local_10;
  return this;
}


/* cube::Creature::~Creature @ 0043c410  kind=game  attributed-by=rtti  size=127 */

void __thiscall cube::Creature::~Creature(Creature *this)

{
  void *pvVar1;
  Creature_vftable CVar2;
  Creature_vftable CVar3;
  
  pvVar1 = *(void **)&this[0x13e].Creature_data;
  this->vftablePtr = &vftable;
  if (pvVar1 != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    operator_delete(pvVar1);
  }
  pvVar1 = (void *)this[0x1d2].Creature_data.offset_0x4;
  if (pvVar1 != (void *)0x0) {
    FUN_0043c790();
                    /* WARNING: Subroutine does not return */
    operator_delete(pvVar1);
  }
  pvVar1 = (void *)this[0x148].Creature_data.offset_0x8;
  if (pvVar1 != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    operator_delete(pvVar1);
  }
  CVar2.deleting_destructor = (deleting_destructor *)this[0x147].vftablePtr;
  CVar3.deleting_destructor = *(deleting_destructor **)CVar2.deleting_destructor;
  *(deleting_destructor **)CVar2.deleting_destructor = CVar2.deleting_destructor;
  this[0x147].vftablePtr[1].deleting_destructor = (deleting_destructor *)this[0x147].vftablePtr;
  *(undefined4 *)&this[0x147].Creature_data = 0;
  if ((Creature_vftable *)CVar3.deleting_destructor != this[0x147].vftablePtr) {
                    /* WARNING: Subroutine does not return */
    operator_delete(CVar3.deleting_destructor);
  }
                    /* WARNING: Subroutine does not return */
  operator_delete(this[0x147].vftablePtr);
}


/* cube::Creature::deleting_destructor @ 0043c840  kind=game  attributed-by=rtti  size=30 */

Creature * __thiscall cube::Creature::deleting_destructor(Creature *this,byte param_1)

{
  ~Creature(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    operator_delete(this);
  }
  return this;
}


