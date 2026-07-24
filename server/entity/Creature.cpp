// Creature (entity) -- server. 3 functions. Bodies = Ghidra pseudo-C.
// Attribution: see ../attribution.tsv. Toolchain of the original: MSVC 11.0 (VS2012).
#include "Creature.h"

/* cube::Creature::Creature @ 00406400  kind=game  attributed-by=rtti  size=1385 */

Creature * __thiscall cube::Creature::Creature(Creature *this,undefined4 *param_1)

{
  undefined4 uVar1;
  Creature_vftable *pCVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_0054bac0;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  this->vftablePtr = &vftable;
  (this->Creature_data).offset_0x4 = *param_1;
  (this->Creature_data).offset_0x8 = param_1[1];
  FUN_00407020(&(this->Creature_data).offset_0xc);
  this[0xdf].Creature_data.offset_0x8 = 0;
  this[0xdf].Creature_data.offset_0xc = 0;
  uVar1 = FUN_004f7b60((undefined4 *)0x0,(undefined4 *)0x0);
  this[0xdf].Creature_data.offset_0x8 = uVar1;
  this[0xe0].vftablePtr = (Creature_vftable *)0x0;
  *(undefined4 *)&this[0xe0].Creature_data = 0;
  this[0xe0].Creature_data.offset_0x4 = 0;
  this[0xe0].Creature_data.offset_0x8 = 0;
  this[0xe0].Creature_data.offset_0xc = 0;
  this[0xe1].vftablePtr = (Creature_vftable *)0x3f800000;
  *(undefined4 *)&this[0xe1].Creature_data = 0x3f800000;
  this[0xe1].Creature_data.offset_0x4 = 0;
  local_8 = 0;
  *(undefined4 *)&this[0xe2].Creature_data = 0;
  this[0xe2].Creature_data.offset_0x4 = 0;
  uVar1 = FUN_00407b30();
  *(undefined4 *)&this[0xe2].Creature_data = uVar1;
  local_8._0_1_ = 1;
  this[0xe2].Creature_data.offset_0x8 = 0;
  this[0xe2].Creature_data.offset_0xc = 0;
  uVar1 = FUN_00407b30();
  this[0xe2].Creature_data.offset_0x8 = uVar1;
  *(undefined4 *)&this[0xe3].Creature_data = 0;
  this[0xe3].Creature_data.offset_0x4 = 0;
  this[0xe3].Creature_data.offset_0x8 = 0;
  this[0xe3].Creature_data.offset_0xc = 0;
  this[0xe4].vftablePtr = (Creature_vftable *)0x0;
  *(undefined4 *)&this[0xe4].Creature_data = 0;
  this[0xe4].Creature_data.offset_0x4 = 0;
  FUN_00406ef0(&this[0xe4].Creature_data.offset_0x8);
  local_8._0_1_ = 3;
  this[0xf3].Creature_data.offset_0xc = 0;
  this[0xf4].vftablePtr = (Creature_vftable *)0x0;
  uVar1 = FUN_00407b60((undefined4 *)0x0,(undefined4 *)0x0);
  this[0xf3].Creature_data.offset_0xc = uVar1;
  *(undefined4 *)&this[0xf4].Creature_data = 0;
  this[0xf4].Creature_data.offset_0x4 = 0;
  *(undefined4 *)&this[0xf7].Creature_data = 0;
  this[0xf7].Creature_data.offset_0x4 = 0;
  this[0xf7].Creature_data.offset_0x8 = 0;
  this[0xf7].Creature_data.offset_0xc = 0;
  this[0xf8].vftablePtr = (Creature_vftable *)0x0;
  *(undefined4 *)&this[0xf8].Creature_data = 0;
  this[0xf9].vftablePtr = (Creature_vftable *)0x0;
  *(undefined4 *)&this[0xf9].Creature_data = 0;
  this[0xf9].Creature_data.offset_0x4 = 0;
  this[0xfa].Creature_data.offset_0xc = 0;
  local_8._0_1_ = 4;
  this[0xfb].vftablePtr = (Creature_vftable *)0x0;
  *(undefined4 *)&this[0xfb].Creature_data = 0;
  pCVar2 = (Creature_vftable *)FUN_00407b30();
  this[0xfb].vftablePtr = pCVar2;
  local_8._0_1_ = 5;
  this[0xfb].Creature_data.offset_0x4 = 0;
  this[0xfb].Creature_data.offset_0x8 = 0;
  uVar1 = FUN_00407b00();
  this[0xfb].Creature_data.offset_0x4 = uVar1;
  local_8._0_1_ = 6;
  this[0xfb].Creature_data.offset_0xc = 0;
  this[0xfc].vftablePtr = (Creature_vftable *)0x0;
  uVar1 = FUN_00407b00();
  this[0xfb].Creature_data.offset_0xc = uVar1;
  *(undefined4 *)&this[0xfc].Creature_data = 0;
  *(undefined1 *)&this[0xfc].Creature_data.offset_0x4 = 0;
  this[0xfc].Creature_data.offset_0x8 = 0;
  *(undefined1 *)&this[0xfc].Creature_data.offset_0xc = 0;
  this[0xfd].vftablePtr = (Creature_vftable *)0x0;
  *(undefined4 *)&this[0xfd].Creature_data = 0;
  this[0xfd].Creature_data.offset_0x4 = 0;
  this[0xfd].Creature_data.offset_0x8 = 0;
  this[0xfd].Creature_data.offset_0xc = 0;
  this[0xfe].vftablePtr = (Creature_vftable *)0x3f800000;
  *(undefined4 *)&this[0xfe].Creature_data = 0;
  this[0xfe].Creature_data.offset_0x4 = 0;
  this[0xfe].Creature_data.offset_0x8 = 0;
  this[0xfe].Creature_data.offset_0xc = 0;
  this[0xff].vftablePtr = (Creature_vftable *)0x0;
  *(undefined4 *)&this[0xff].Creature_data = 0;
  this[0xff].Creature_data.offset_0x4 = 1;
  this[0xff].Creature_data.offset_0x8 = 0;
  this[0xff].Creature_data.offset_0xc = 0;
  this[0x100].vftablePtr = (Creature_vftable *)0x0;
  *(undefined4 *)&this[0x100].Creature_data = 0;
  this[0x100].Creature_data.offset_0x4 = 0;
  local_8._0_1_ = 9;
  this[0x100].Creature_data.offset_0x8 = 0;
  this[0x100].Creature_data.offset_0xc = 0;
  uVar1 = FUN_00407ad0();
  this[0x100].Creature_data.offset_0x8 = uVar1;
  local_8._0_1_ = 10;
  this[0x101].vftablePtr = (Creature_vftable *)0x0;
  *(undefined4 *)&this[0x101].Creature_data = 0;
  pCVar2 = (Creature_vftable *)FUN_0042f040();
  this[0x101].vftablePtr = pCVar2;
  this[0x101].Creature_data.offset_0x4 = 0xffffffff;
  this[0x101].Creature_data.offset_0x8 = 0xffffffff;
  this[0x101].Creature_data.offset_0xc = 0xffffffff;
  this[0x104].Creature_data.offset_0x4 = 0;
  this[0x104].Creature_data.offset_0x8 = 0;
  local_8._0_1_ = 0xb;
  this[0x104].Creature_data.offset_0xc = 0;
  this[0x105].vftablePtr = (Creature_vftable *)0x0;
  uVar1 = FUN_00407be0((undefined4 *)0x0,(undefined4 *)0x0);
  this[0x104].Creature_data.offset_0xc = uVar1;
  local_8._0_1_ = 0xc;
  *(undefined4 *)&this[0x105].Creature_data = 0;
  this[0x105].Creature_data.offset_0x4 = 0;
  uVar1 = FUN_0052ed30();
  *(undefined4 *)&this[0x105].Creature_data = uVar1;
  local_8._0_1_ = 0xd;
  this[0x105].Creature_data.offset_0x8 = 0;
  this[0x105].Creature_data.offset_0xc = 0;
  uVar1 = FUN_00407be0((undefined4 *)0x0,(undefined4 *)0x0);
  this[0x105].Creature_data.offset_0x8 = uVar1;
  this[0x106].vftablePtr = (Creature_vftable *)0xffffffff;
  *(undefined4 *)&this[0x106].Creature_data = 0xffffffff;
  this[0x106].Creature_data.offset_0x4 = 0;
  this[0x106].Creature_data.offset_0x8 = 0;
  this[0x106].Creature_data.offset_0xc = 0;
  this[0x107].vftablePtr = (Creature_vftable *)0x0;
  *(undefined4 *)&this[0x107].Creature_data = 0;
  this[0x107].Creature_data.offset_0x4 = 0;
  local_8 = CONCAT31(local_8._1_3_,0xf);
  FUN_00401140(&this[0x107].Creature_data.offset_0x8,this);
  *(undefined4 *)&this[0x175].Creature_data = 0;
  this[0x175].Creature_data.offset_0x4 = 0x43480000;
  *(undefined1 *)&this[0x176].vftablePtr = 0;
  *(undefined4 *)&this[0x176].Creature_data = 1;
  this[0x176].Creature_data.offset_0x4 = 0;
  this[0x176].Creature_data.offset_0x8 = 0;
  *(undefined2 *)&this[0x177].Creature_data.offset_0x8 = 1;
  *(undefined2 *)&this[0x176].Creature_data.offset_0xc = 0;
  this[0x177].vftablePtr = (Creature_vftable *)0x0;
  *(undefined4 *)&this[0x177].Creature_data = 0;
  *(undefined2 *)&this[0x177].Creature_data.offset_0x4 = 0;
  *(undefined1 *)((int)&this[0x177].Creature_data.offset_0x4 + 2) = 0;
  this[0x184].Creature_data.offset_0x8 = 0;
  memset(&this[0x177].Creature_data.offset_0xc,0,0x100);
  ExceptionList = local_10;
  return this;
}


/* cube::Creature::~Creature @ 004072d0  kind=game  attributed-by=rtti  size=889 */

void __thiscall cube::Creature::~Creature(Creature *this)

{
  void *pvVar1;
  int *piVar2;
  int iVar3;
  undefined4 *puVar4;
  int *piVar5;
  undefined4 local_c [2];
  
  pvVar1 = (void *)this[0xfe].Creature_data.offset_0x8;
  this->vftablePtr = &vftable;
  if (pvVar1 != (void *)0x0) {
    operator_delete(pvVar1);
  }
  pvVar1 = *(void **)&this[0x175].Creature_data;
  if (pvVar1 != (void *)0x0) {
    FUN_004076a0((int)pvVar1);
    operator_delete(pvVar1);
  }
  if (this[0x107].vftablePtr != (Creature_vftable *)0x0) {
    operator_delete(this[0x107].vftablePtr);
    this[0x107].vftablePtr = (Creature_vftable *)0x0;
    *(undefined4 *)&this[0x107].Creature_data = 0;
    this[0x107].Creature_data.offset_0x4 = 0;
  }
  piVar2 = (int *)this[0x105].Creature_data.offset_0x8;
  piVar5 = (int *)*piVar2;
  *piVar2 = (int)piVar2;
  iVar3 = this[0x105].Creature_data.offset_0x8;
  *(int *)(iVar3 + 4) = iVar3;
  this[0x105].Creature_data.offset_0xc = 0;
  if (piVar5 != (int *)this[0x105].Creature_data.offset_0x8) {
    do {
      piVar2 = (int *)*piVar5;
      operator_delete(piVar5);
      piVar5 = piVar2;
    } while (piVar2 != (int *)this[0x105].Creature_data.offset_0x8);
  }
  operator_delete((void *)this[0x105].Creature_data.offset_0x8);
  FUN_004fc060(&this[0x105].Creature_data,local_c,(int *)**(int **)&this[0x105].Creature_data,
               *(int **)&this[0x105].Creature_data);
  operator_delete(*(void **)&this[0x105].Creature_data);
  piVar2 = (int *)this[0x104].Creature_data.offset_0xc;
  piVar5 = (int *)*piVar2;
  *piVar2 = (int)piVar2;
  iVar3 = this[0x104].Creature_data.offset_0xc;
  *(int *)(iVar3 + 4) = iVar3;
  this[0x105].vftablePtr = (Creature_vftable *)0x0;
  if (piVar5 != (int *)this[0x104].Creature_data.offset_0xc) {
    do {
      piVar2 = (int *)*piVar5;
      operator_delete(piVar5);
      piVar5 = piVar2;
    } while (piVar2 != (int *)this[0x104].Creature_data.offset_0xc);
  }
  operator_delete((void *)this[0x104].Creature_data.offset_0xc);
  FUN_0040a430(this + 0x101,local_c,(int *)(this[0x101].vftablePtr)->deleting_destructor,
               (int *)this[0x101].vftablePtr);
  operator_delete(this[0x101].vftablePtr);
  piVar2 = (int *)this[0x100].Creature_data.offset_0x8;
  FUN_0040a430(&this[0x100].Creature_data.offset_0x8,local_c,(int *)*piVar2,piVar2);
  operator_delete((void *)this[0x100].Creature_data.offset_0x8);
  pvVar1 = (void *)this[0xff].Creature_data.offset_0x8;
  if (pvVar1 != (void *)0x0) {
    operator_delete(pvVar1);
    this[0xff].Creature_data.offset_0x8 = 0;
    this[0xff].Creature_data.offset_0xc = 0;
    this[0x100].vftablePtr = (Creature_vftable *)0x0;
  }
  pvVar1 = (void *)this[0xfe].Creature_data.offset_0xc;
  if (pvVar1 != (void *)0x0) {
    operator_delete(pvVar1);
    this[0xfe].Creature_data.offset_0xc = 0;
    this[0xff].vftablePtr = (Creature_vftable *)0x0;
    *(undefined4 *)&this[0xff].Creature_data = 0;
  }
  piVar2 = (int *)this[0xfb].Creature_data.offset_0xc;
  FUN_004fc060(&this[0xfb].Creature_data.offset_0xc,local_c,(int *)*piVar2,piVar2);
  operator_delete((void *)this[0xfb].Creature_data.offset_0xc);
  piVar2 = (int *)this[0xfb].Creature_data.offset_0x4;
  FUN_004fc060(&this[0xfb].Creature_data.offset_0x4,local_c,(int *)*piVar2,piVar2);
  operator_delete((void *)this[0xfb].Creature_data.offset_0x4);
  FUN_004fc060(this + 0xfb,local_c,(int *)(this[0xfb].vftablePtr)->deleting_destructor,
               (int *)this[0xfb].vftablePtr);
  operator_delete(this[0xfb].vftablePtr);
  piVar2 = (int *)this[0xf3].Creature_data.offset_0xc;
  piVar5 = (int *)*piVar2;
  *piVar2 = (int)piVar2;
  iVar3 = this[0xf3].Creature_data.offset_0xc;
  *(int *)(iVar3 + 4) = iVar3;
  this[0xf4].vftablePtr = (Creature_vftable *)0x0;
  if (piVar5 != (int *)this[0xf3].Creature_data.offset_0xc) {
    do {
      piVar2 = (int *)*piVar5;
      operator_delete(piVar5);
      piVar5 = piVar2;
    } while (piVar2 != (int *)this[0xf3].Creature_data.offset_0xc);
  }
  operator_delete((void *)this[0xf3].Creature_data.offset_0xc);
  puVar4 = (undefined4 *)this[0xe4].Creature_data.offset_0x8;
  if (puVar4 != (undefined4 *)0x0) {
    FUN_00406310(puVar4,(undefined4 *)this[0xe4].Creature_data.offset_0xc);
    operator_delete((void *)this[0xe4].Creature_data.offset_0x8);
    this[0xe4].Creature_data.offset_0x8 = 0;
    this[0xe4].Creature_data.offset_0xc = 0;
    this[0xe5].vftablePtr = (Creature_vftable *)0x0;
  }
  piVar2 = (int *)this[0xe2].Creature_data.offset_0x8;
  FUN_004fc060(&this[0xe2].Creature_data.offset_0x8,local_c,(int *)*piVar2,piVar2);
  operator_delete((void *)this[0xe2].Creature_data.offset_0x8);
  FUN_004fc060(&this[0xe2].Creature_data,local_c,(int *)**(int **)&this[0xe2].Creature_data,
               *(int **)&this[0xe2].Creature_data);
  operator_delete(*(void **)&this[0xe2].Creature_data);
  piVar2 = (int *)this[0xdf].Creature_data.offset_0x8;
  piVar5 = (int *)*piVar2;
  *piVar2 = (int)piVar2;
  iVar3 = this[0xdf].Creature_data.offset_0x8;
  *(int *)(iVar3 + 4) = iVar3;
  this[0xdf].Creature_data.offset_0xc = 0;
  if (piVar5 != (int *)this[0xdf].Creature_data.offset_0x8) {
    do {
      piVar2 = (int *)*piVar5;
      operator_delete(piVar5);
      piVar5 = piVar2;
    } while (piVar2 != (int *)this[0xdf].Creature_data.offset_0x8);
  }
  operator_delete((void *)this[0xdf].Creature_data.offset_0x8);
  return;
}


/* cube::Creature::scalar_deleting_destructor @ 00407aa0  kind=game  attributed-by=rtti  size=33 */

undefined4 * __thiscall cube::Creature::scalar_deleting_destructor(Creature *this,byte param_1)

{
  ~Creature(this);
  if ((param_1 & 1) != 0) {
    operator_delete(this);
  }
  return &this->vftablePtr;
}


