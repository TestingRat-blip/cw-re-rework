// Helpers (net) -- server. 6 functions. Bodies = Ghidra pseudo-C.
// Attribution: see ../attribution.tsv. Toolchain of the original: MSVC 11.0 (VS2012).
#include "Helpers.h"

/* FUN_00401920 @ 00401920  kind=gamemisc  attributed-by=caller-vote  size=279 */

int * __thiscall FUN_00401920(void *this,int *param_1,uint param_2,uint param_3)

{
  void *_Dst;
  uint uVar1;
  
  if ((uint)param_1[4] < param_2) {
                    /* WARNING: Subroutine does not return */
    std::_Xout_of_range("invalid string position");
  }
  uVar1 = param_1[4] - param_2;
  if (param_3 < uVar1) {
    uVar1 = param_3;
  }
  if (this == param_1) {
    uVar1 = uVar1 + param_2;
    if (*(uint *)((int)this + 0x10) < uVar1) {
                    /* WARNING: Subroutine does not return */
      std::_Xout_of_range("invalid string position");
    }
    *(uint *)((int)this + 0x10) = uVar1;
    if (0xf < *(uint *)((int)this + 0x14)) {
      *(undefined1 *)(uVar1 + *(int *)this) = 0;
      FUN_00401c00(this,0,param_2);
      return this;
    }
    *(undefined1 *)(uVar1 + (int)this) = 0;
    FUN_00401c00(this,0,param_2);
    return this;
  }
  if (uVar1 == 0xffffffff) {
                    /* WARNING: Subroutine does not return */
    std::_Xlength_error("string too long");
  }
  if (*(uint *)((int)this + 0x14) < uVar1) {
    FUN_004016f0(this,uVar1,*(size_t *)((int)this + 0x10));
    if (uVar1 == 0) {
      return this;
    }
  }
  else if (uVar1 == 0) {
    *(undefined4 *)((int)this + 0x10) = 0;
    if (0xf < *(uint *)((int)this + 0x14)) {
      **(undefined1 **)this = 0;
      return this;
    }
    *(undefined1 *)this = 0;
    return this;
  }
  if (0xf < (uint)param_1[5]) {
    param_1 = (int *)*param_1;
  }
  _Dst = this;
  if (0xf < *(uint *)((int)this + 0x14)) {
    _Dst = *(void **)this;
  }
  if (uVar1 != 0) {
    memcpy(_Dst,(void *)((int)param_1 + param_2),uVar1);
  }
  *(uint *)((int)this + 0x10) = uVar1;
  if (*(uint *)((int)this + 0x14) < 0x10) {
    *(undefined1 *)((int)this + uVar1) = 0;
    return this;
  }
  *(undefined1 *)(*(int *)this + uVar1) = 0;
  return this;
}


/* FUN_00401c00 @ 00401c00  kind=gamemisc  attributed-by=caller-vote  size=155 */

int * __thiscall FUN_00401c00(void *this,uint param_1,uint param_2)

{
  uint uVar1;
  void *pvVar2;
  int iVar3;
  
  uVar1 = *(uint *)((int)this + 0x10);
  if (uVar1 < param_1) {
                    /* WARNING: Subroutine does not return */
    std::_Xout_of_range("invalid string position");
  }
  if (param_2 < uVar1 - param_1) {
    if (param_2 != 0) {
      pvVar2 = this;
      if (0xf < *(uint *)((int)this + 0x14)) {
        pvVar2 = *(void **)this;
      }
      iVar3 = uVar1 - param_2;
      if (iVar3 - param_1 != 0) {
        memmove((void *)((int)pvVar2 + param_1),(void *)((int)((int)pvVar2 + param_1) + param_2),
                iVar3 - param_1);
      }
      *(int *)((int)this + 0x10) = iVar3;
      if (0xf < *(uint *)((int)this + 0x14)) {
        *(undefined1 *)(*(int *)this + iVar3) = 0;
        return this;
      }
      *(undefined1 *)((int)this + iVar3) = 0;
    }
    return this;
  }
  *(uint *)((int)this + 0x10) = param_1;
  if (*(uint *)((int)this + 0x14) < 0x10) {
    *(undefined1 *)((int)this + param_1) = 0;
    return this;
  }
  *(undefined1 *)(*(int *)this + param_1) = 0;
  return this;
}


/* FUN_00407ba0 @ 00407ba0  kind=gamemisc  attributed-by=caller-vote  size=54 */

void FUN_00407ba0(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  
  puVar1 = operator_new(0x30);
  if (puVar1 != (void *)0x0) {
    if (param_1 == (undefined4 *)0x0) {
      param_1 = puVar1;
      param_2 = puVar1;
    }
    *puVar1 = param_1;
    if (puVar1 + 1 != (undefined4 *)0x0) {
      puVar1[1] = param_2;
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  std::_Xbad_alloc();
}


/* FUN_00426830 @ 00426830  kind=gamemisc  attributed-by=caller-vote  size=54 */

void FUN_00426830(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  
  puVar1 = operator_new(0x28);
  if (puVar1 != (void *)0x0) {
    if (param_1 == (undefined4 *)0x0) {
      param_1 = puVar1;
      param_2 = puVar1;
    }
    *puVar1 = param_1;
    if (puVar1 + 1 != (undefined4 *)0x0) {
      puVar1[1] = param_2;
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  std::_Xbad_alloc();
}


/* FUN_004268b0 @ 004268b0  kind=gamemisc  attributed-by=caller-vote  size=54 */

void FUN_004268b0(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  
  puVar1 = operator_new(0x50);
  if (puVar1 != (void *)0x0) {
    if (param_1 == (undefined4 *)0x0) {
      param_1 = puVar1;
      param_2 = puVar1;
    }
    *puVar1 = param_1;
    if (puVar1 + 1 != (undefined4 *)0x0) {
      puVar1[1] = param_2;
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  std::_Xbad_alloc();
}


/* FUN_00428100 @ 00428100  kind=gamemisc  attributed-by=caller-vote  size=87 */

void __fastcall FUN_00428100(int *param_1)

{
  int *piVar1;
  int *piVar2;
  
  piVar1 = (int *)*param_1;
  piVar2 = (int *)*piVar1;
  *piVar1 = (int)piVar1;
  *(int *)(*param_1 + 4) = *param_1;
  param_1[1] = 0;
  if (piVar2 != (int *)*param_1) {
    do {
      piVar1 = (int *)*piVar2;
      if (7 < (uint)piVar2[9]) {
        operator_delete((void *)piVar2[4]);
      }
      piVar2[9] = 7;
      piVar2[8] = 0;
      *(undefined2 *)(piVar2 + 4) = 0;
      operator_delete(piVar2);
      piVar2 = piVar1;
    } while (piVar1 != (int *)*param_1);
  }
  return;
}


