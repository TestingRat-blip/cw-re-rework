// Zone (world) -- cube. 3 functions. Bodies = Ghidra pseudo-C.
// Attribution: see ../attribution.tsv. Toolchain of the original: MSVC 11.0 (VS2012).
#include "Zone.h"

/* cube::Zone::Zone @ 006240f0  kind=game  attributed-by=rtti  size=591 */

Zone * __thiscall cube::Zone::Zone(Zone *this)

{
  uint uVar1;
  void *pvVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006f54a5;
  local_10 = ExceptionList;
  uVar1 = DAT_0076aa78 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  this->vftablePtr = &vftable;
  (this->Zone_data).offset_0x0 = (void *)0x0;
  (this->Zone_data).offset_0x4 = 0;
  pvVar2 = (void *)FUN_00688b20(0,0);
  (this->Zone_data).offset_0x0 = pvVar2;
  (this->Zone_data).offset_0x8 = (void *)0x0;
  (this->Zone_data).offset_0xc = 0;
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
  puVar3 = (undefined4 *)FUN_0068d652(0x200004,uVar1);
  local_8._0_1_ = 0xb;
  if (puVar3 == (undefined4 *)0x0) {
    puVar4 = (undefined4 *)0x0;
  }
  else {
    puVar4 = puVar3 + 1;
    *puVar3 = 0x10000;
    _eh_vector_constructor_iterator_(puVar4,0x20,0x10000,Field::Field,Field::~Field);
  }
  local_8._0_1_ = 10;
  (this->Zone_data).offset_0xa4 = puVar4;
  puVar3 = (undefined4 *)FUN_0068d652(0x2004,uVar1);
  local_8 = CONCAT31(local_8._1_3_,0xc);
  if (puVar3 != (undefined4 *)0x0) {
    *puVar3 = 0x400;
    _eh_vector_constructor_iterator_(puVar3 + 1,8,0x400,FUN_006240d0,FUN_004da480);
    (this->Zone_data).offset_0xa8 = puVar3 + 1;
    ExceptionList = local_10;
    return this;
  }
  (this->Zone_data).offset_0xa8 = (undefined4 *)0x0;
  ExceptionList = local_10;
  return this;
}


/* cube::Zone::~Zone @ 00624390  kind=game  attributed-by=rtti  size=531 */

void __thiscall cube::Zone::~Zone(Zone *this)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  void *pvVar3;
  void *pvVar4;
  uint uVar5;
  int *piVar6;
  undefined4 local_24;
  undefined1 local_20 [4];
  Zone *local_1c;
  int local_18;
  undefined1 local_11;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_006f553f;
  local_10 = ExceptionList;
  uVar5 = DAT_0076aa78 ^ (uint)&stack0xfffffffc;
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
      (**(code **)*puVar1)(3,uVar5);
    }
  }
  puVar1 = (this->Zone_data).offset_0xa8;
  if (puVar1 != (undefined4 *)0x0) {
    _eh_vector_destructor_iterator_(puVar1,8,puVar1[-1],FUN_004da480);
    operator_delete__(puVar1 + -1);
  }
  piVar6 = (this->Zone_data).offset_0x14;
  if (piVar6 != (this->Zone_data).offset_0x18) {
    do {
      if ((undefined4 *)*piVar6 != (undefined4 *)0x0) {
        (*(code *)**(undefined4 **)*piVar6)(1);
      }
      piVar6 = piVar6 + 1;
    } while (piVar6 != (this->Zone_data).offset_0x18);
  }
  piVar6 = (this->Zone_data).offset_0x20;
  if (piVar6 != (this->Zone_data).offset_0x24) {
    do {
      local_18 = *piVar6;
      if (local_18 != 0) {
        puVar1 = (undefined4 *)(local_18 + 0x78);
        puVar2 = (undefined4 *)*puVar1;
        FUN_0067eb10(local_20,*puVar2,puVar2);
                    /* WARNING: Subroutine does not return */
        operator_delete((void *)*puVar1);
      }
      piVar6 = piVar6 + 1;
      local_18 = 0;
    } while (piVar6 != (this->Zone_data).offset_0x24);
  }
  piVar6 = (this->Zone_data).offset_0x84;
  if (piVar6 != (this->Zone_data).offset_0x88) {
    do {
      if ((undefined4 *)*piVar6 != (undefined4 *)0x0) {
        (*(code *)**(undefined4 **)*piVar6)(1);
      }
      piVar6 = piVar6 + 1;
    } while (piVar6 != (this->Zone_data).offset_0x88);
  }
  piVar6 = (this->Zone_data).offset_0x90;
  if (piVar6 != (this->Zone_data).offset_0x94) {
    do {
      local_18 = *piVar6;
      if (local_18 != 0) {
        puVar1 = (undefined4 *)(local_18 + 8);
        puVar2 = (undefined4 *)*puVar1;
        FUN_004777f0(local_20,*puVar2,puVar2);
                    /* WARNING: Subroutine does not return */
        operator_delete((void *)*puVar1);
      }
      piVar6 = piVar6 + 1;
      local_18 = 0;
    } while (piVar6 != (this->Zone_data).offset_0x94);
  }
  DeleteCriticalSection((LPCRITICAL_SECTION)&(this->Zone_data).field_0xac);
  pvVar3 = (this->Zone_data).offset_0x90;
  if (pvVar3 != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    operator_delete(pvVar3);
  }
  pvVar3 = (this->Zone_data).offset_0x84;
  if (pvVar3 != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    operator_delete(pvVar3);
  }
  pvVar3 = (this->Zone_data).offset_0x64;
  if (pvVar3 != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    operator_delete(pvVar3);
  }
  pvVar3 = (this->Zone_data).offset_0x50;
  if (pvVar3 != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    operator_delete(pvVar3);
  }
  pvVar3 = (this->Zone_data).offset_0x44;
  if (pvVar3 != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    operator_delete(pvVar3);
  }
  pvVar3 = (this->Zone_data).offset_0x38;
  if (pvVar3 != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    operator_delete(pvVar3);
  }
  pvVar3 = (this->Zone_data).offset_0x2c;
  if (pvVar3 == (void *)0x0) {
    pvVar3 = (this->Zone_data).offset_0x20;
    if (pvVar3 != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      operator_delete(pvVar3);
    }
    pvVar3 = (this->Zone_data).offset_0x14;
    if (pvVar3 != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      operator_delete(pvVar3);
    }
    pvVar3 = (this->Zone_data).offset_0x8;
    if (pvVar3 != (void *)0x0) {
      FUN_0058d970(pvVar3,(this->Zone_data).offset_0xc,&local_11,local_24);
                    /* WARNING: Subroutine does not return */
      operator_delete((this->Zone_data).offset_0x8);
    }
    puVar1 = (this->Zone_data).offset_0x0;
    pvVar3 = (void *)*puVar1;
    *puVar1 = puVar1;
    pvVar4 = (this->Zone_data).offset_0x0;
    *(void **)((int)pvVar4 + 4) = pvVar4;
    (this->Zone_data).offset_0x4 = 0;
    if (pvVar3 == (this->Zone_data).offset_0x0) {
                    /* WARNING: Subroutine does not return */
      operator_delete((this->Zone_data).offset_0x0);
    }
                    /* WARNING: Subroutine does not return */
    operator_delete(pvVar3);
  }
                    /* WARNING: Subroutine does not return */
  operator_delete(pvVar3);
}


/* cube::Zone::deleting_destructor @ 00624760  kind=game  attributed-by=rtti  size=30 */

Zone * __thiscall cube::Zone::deleting_destructor(Zone *this,byte param_1)

{
  ~Zone(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    operator_delete(this);
  }
  return this;
}


