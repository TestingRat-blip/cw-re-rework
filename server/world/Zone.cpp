// Zone (world) -- server. 3 functions. Bodies = Ghidra pseudo-C.
// Attribution: see ../attribution.tsv. Toolchain of the original: MSVC 11.0 (VS2012).
#include "Zone.h"

/* cube::Zone::Zone @ 00548b60  kind=game  attributed-by=rtti  size=591 */

Zone * __thiscall cube::Zone::Zone(Zone *this)

{
  void *pvVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00556565;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  this->vftablePtr = &vftable;
  (this->Zone_data).offset_0x0 = (void *)0x0;
  (this->Zone_data).offset_0x4 = 0;
  pvVar1 = (void *)FUN_004ce620((undefined4 *)0x0,(undefined4 *)0x0);
  (this->Zone_data).offset_0x0 = pvVar1;
  (this->Zone_data).offset_0x8 = (void *)0x0;
  (this->Zone_data).offset_0xc = (undefined4 *)0x0;
  (this->Zone_data).offset_0x10 = 0;
  (this->Zone_data).offset_0x14 = (void *)0x0;
  (this->Zone_data).offset_0x18 = (int *)0x0;
  (this->Zone_data).offset_0x1c = 0;
  (this->Zone_data).offset_0x20 = (void *)0x0;
  (this->Zone_data).offset_0x24 = (int *)0x0;
  (this->Zone_data).offset_0x28 = 0;
  (this->Zone_data).offset_0x2c = (void *)0x0;
  (this->Zone_data).offset_0x30 = 0;
  (this->Zone_data).offset_0x34 = 0;
  (this->Zone_data).offset_0x38 = (void *)0x0;
  (this->Zone_data).offset_0x3c = 0;
  (this->Zone_data).offset_0x40 = 0;
  (this->Zone_data).offset_0x44 = (void *)0x0;
  (this->Zone_data).offset_0x48 = 0;
  (this->Zone_data).offset_0x4c = 0;
  (this->Zone_data).offset_0x50 = (void *)0x0;
  (this->Zone_data).offset_0x54 = 0;
  (this->Zone_data).offset_0x58 = 0;
  (this->Zone_data).offset_0x5c = 0;
  (this->Zone_data).offset_0x60 = 0;
  (this->Zone_data).offset_0x64 = (void *)0x0;
  (this->Zone_data).offset_0x68 = 0;
  (this->Zone_data).offset_0x6c = 0;
  (this->Zone_data).offset_0x70 = 1;
  (this->Zone_data).offset_0x72 = 0;
  (this->Zone_data).offset_0x74 = 0;
  (this->Zone_data).offset_0x78 = 0;
  (this->Zone_data).offset_0x7c = 1;
  (this->Zone_data).offset_0x80 = 0;
  (this->Zone_data).offset_0x84 = (void *)0x0;
  (this->Zone_data).offset_0x88 = (int *)0x0;
  (this->Zone_data).offset_0x8c = 0;
  (this->Zone_data).offset_0x90 = (void *)0x0;
  (this->Zone_data).offset_0x94 = (int *)0x0;
  (this->Zone_data).offset_0x98 = 0;
  local_8._0_1_ = 10;
  local_8._1_3_ = 0;
  (this->Zone_data).offset_0x9c = 0;
  (this->Zone_data).offset_0xa0 = 0;
  InitializeCriticalSectionAndSpinCount
            ((LPCRITICAL_SECTION)&(this->Zone_data).field_0xac,0x80000400);
  puVar2 = (undefined4 *)FUN_0054a6ce(0x200004);
  local_8._0_1_ = 0xb;
  if (puVar2 == (undefined4 *)0x0) {
    puVar3 = (undefined4 *)0x0;
  }
  else {
    puVar3 = puVar2 + 1;
    *puVar2 = 0x10000;
    _eh_vector_constructor_iterator_(puVar3,0x20,0x10000,Field::Field,Field::~Field);
  }
  local_8._0_1_ = 10;
  (this->Zone_data).offset_0xa4 = puVar3;
  puVar2 = (undefined4 *)FUN_0054a6ce(0x2004);
  local_8 = CONCAT31(local_8._1_3_,0xc);
  if (puVar2 != (undefined4 *)0x0) {
    *puVar2 = 0x400;
    _eh_vector_constructor_iterator_(puVar2 + 1,8,0x400,FUN_00548b40,FUN_00423710);
    (this->Zone_data).offset_0xa8 = puVar2 + 1;
    ExceptionList = local_10;
    return this;
  }
  (this->Zone_data).offset_0xa8 = (undefined4 *)0x0;
  ExceptionList = local_10;
  return this;
}


/* cube::Zone::~Zone @ 00548e00  kind=game  attributed-by=rtti  size=869 */

void __thiscall cube::Zone::~Zone(Zone *this)

{
  undefined4 *puVar1;
  void *pvVar2;
  uint uVar3;
  int *piVar4;
  int *piVar5;
  undefined4 local_24;
  undefined4 local_20;
  Zone *local_1c;
  undefined4 *local_18;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_005565ff;
  local_10 = ExceptionList;
  uVar3 = DAT_00583cc8 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  this->vftablePtr = &vftable;
  puVar1 = (this->Zone_data).offset_0xa4;
  local_8 = 10;
  local_1c = this;
  if (puVar1 != (undefined4 *)0x0) {
    if (puVar1[-1] == 0) {
      operator_delete__(puVar1 + -1);
    }
    else {
      (**(code **)*puVar1)(3,uVar3);
    }
  }
  puVar1 = (this->Zone_data).offset_0xa8;
  if (puVar1 != (undefined4 *)0x0) {
    _eh_vector_destructor_iterator_(puVar1,8,puVar1[-1],FUN_00423710);
    operator_delete__(puVar1 + -1);
  }
  piVar5 = (this->Zone_data).offset_0x14;
  if (piVar5 != (this->Zone_data).offset_0x18) {
    do {
      if ((undefined4 *)*piVar5 != (undefined4 *)0x0) {
        (*(code *)**(undefined4 **)*piVar5)(1);
      }
      piVar5 = piVar5 + 1;
    } while (piVar5 != (this->Zone_data).offset_0x18);
  }
  piVar5 = (this->Zone_data).offset_0x20;
  if (piVar5 != (this->Zone_data).offset_0x24) {
    do {
      local_18 = (undefined4 *)*piVar5;
      if (local_18 != (undefined4 *)0x0) {
        puVar1 = local_18 + 0x1e;
        FUN_004fc060(puVar1,&local_20,*(int **)*puVar1,(int *)*puVar1);
        operator_delete((void *)*puVar1);
        operator_delete(local_18);
      }
      piVar5 = piVar5 + 1;
    } while (piVar5 != (this->Zone_data).offset_0x24);
  }
  piVar5 = (this->Zone_data).offset_0x84;
  if (piVar5 != (this->Zone_data).offset_0x88) {
    do {
      if ((undefined4 *)*piVar5 != (undefined4 *)0x0) {
        (*(code *)**(undefined4 **)*piVar5)(1);
      }
      piVar5 = piVar5 + 1;
    } while (piVar5 != (this->Zone_data).offset_0x88);
  }
  piVar5 = (this->Zone_data).offset_0x90;
  if (piVar5 != (this->Zone_data).offset_0x94) {
    do {
      local_18 = (undefined4 *)*piVar5;
      if (local_18 != (undefined4 *)0x0) {
        puVar1 = local_18 + 2;
        FUN_0041a180(puVar1,&local_20,*(int **)*puVar1,(int *)*puVar1);
        operator_delete((void *)*puVar1);
        puVar1 = local_18;
        FUN_0041a510(local_18,&local_24,*(int **)*local_18,(int *)*local_18);
        operator_delete((void *)*puVar1);
        operator_delete(puVar1);
      }
      piVar5 = piVar5 + 1;
    } while (piVar5 != (this->Zone_data).offset_0x94);
  }
  DeleteCriticalSection((LPCRITICAL_SECTION)&(this->Zone_data).field_0xac);
  pvVar2 = (this->Zone_data).offset_0x90;
  if (pvVar2 != (void *)0x0) {
    operator_delete(pvVar2);
    (this->Zone_data).offset_0x90 = (void *)0x0;
    (this->Zone_data).offset_0x94 = (int *)0x0;
    (this->Zone_data).offset_0x98 = 0;
  }
  pvVar2 = (this->Zone_data).offset_0x84;
  if (pvVar2 != (void *)0x0) {
    operator_delete(pvVar2);
    (this->Zone_data).offset_0x84 = (void *)0x0;
    (this->Zone_data).offset_0x88 = (int *)0x0;
    (this->Zone_data).offset_0x8c = 0;
  }
  pvVar2 = (this->Zone_data).offset_0x64;
  if (pvVar2 != (void *)0x0) {
    operator_delete(pvVar2);
    (this->Zone_data).offset_0x64 = (void *)0x0;
    (this->Zone_data).offset_0x68 = 0;
    (this->Zone_data).offset_0x6c = 0;
  }
  pvVar2 = (this->Zone_data).offset_0x50;
  if (pvVar2 != (void *)0x0) {
    operator_delete(pvVar2);
    (this->Zone_data).offset_0x50 = (void *)0x0;
    (this->Zone_data).offset_0x54 = 0;
    (this->Zone_data).offset_0x58 = 0;
  }
  pvVar2 = (this->Zone_data).offset_0x44;
  if (pvVar2 != (void *)0x0) {
    operator_delete(pvVar2);
    (this->Zone_data).offset_0x44 = (void *)0x0;
    (this->Zone_data).offset_0x48 = 0;
    (this->Zone_data).offset_0x4c = 0;
  }
  pvVar2 = (this->Zone_data).offset_0x38;
  if (pvVar2 != (void *)0x0) {
    operator_delete(pvVar2);
    (this->Zone_data).offset_0x38 = (void *)0x0;
    (this->Zone_data).offset_0x3c = 0;
    (this->Zone_data).offset_0x40 = 0;
  }
  pvVar2 = (this->Zone_data).offset_0x2c;
  if (pvVar2 != (void *)0x0) {
    operator_delete(pvVar2);
    (this->Zone_data).offset_0x2c = (void *)0x0;
    (this->Zone_data).offset_0x30 = 0;
    (this->Zone_data).offset_0x34 = 0;
  }
  pvVar2 = (this->Zone_data).offset_0x20;
  if (pvVar2 != (void *)0x0) {
    operator_delete(pvVar2);
    (this->Zone_data).offset_0x20 = (void *)0x0;
    (this->Zone_data).offset_0x24 = (int *)0x0;
    (this->Zone_data).offset_0x28 = 0;
  }
  pvVar2 = (this->Zone_data).offset_0x14;
  if (pvVar2 != (void *)0x0) {
    operator_delete(pvVar2);
    (this->Zone_data).offset_0x14 = (void *)0x0;
    (this->Zone_data).offset_0x18 = (int *)0x0;
    (this->Zone_data).offset_0x1c = 0;
  }
  puVar1 = (this->Zone_data).offset_0x8;
  if (puVar1 != (undefined4 *)0x0) {
    FUN_004c6860(puVar1,(this->Zone_data).offset_0xc);
    operator_delete((this->Zone_data).offset_0x8);
    (this->Zone_data).offset_0x8 = (void *)0x0;
    (this->Zone_data).offset_0xc = (undefined4 *)0x0;
    (this->Zone_data).offset_0x10 = 0;
  }
  piVar5 = (this->Zone_data).offset_0x0;
  piVar4 = (int *)*piVar5;
  *piVar5 = (int)piVar5;
  pvVar2 = (this->Zone_data).offset_0x0;
  *(void **)((int)pvVar2 + 4) = pvVar2;
  (this->Zone_data).offset_0x4 = 0;
  if (piVar4 != (this->Zone_data).offset_0x0) {
    do {
      piVar5 = (int *)*piVar4;
      operator_delete(piVar4);
      piVar4 = piVar5;
    } while (piVar5 != (this->Zone_data).offset_0x0);
  }
  operator_delete((this->Zone_data).offset_0x0);
  ExceptionList = local_10;
  return;
}


/* cube::Zone::scalar_deleting_destructor @ 005491d0  kind=game  attributed-by=rtti  size=33 */

undefined4 * __thiscall cube::Zone::scalar_deleting_destructor(Zone *this,byte param_1)

{
  ~Zone(this);
  if ((param_1 & 1) != 0) {
    operator_delete(this);
  }
  return &this->vftablePtr;
}


