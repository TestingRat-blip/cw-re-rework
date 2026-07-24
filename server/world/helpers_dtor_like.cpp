// helpers_dtor_like (world) -- server. 5 functions. Bodies = Ghidra pseudo-C.
// Attribution: see ../attribution.tsv. Toolchain of the original: MSVC 11.0 (VS2012).
#include "helpers_dtor_like.h"

/* FUN_004016f0 @ 004016f0  kind=gamemisc  attributed-by=role:dtor-like  size=245 */

void __thiscall FUN_004016f0(void *this,uint param_1,size_t param_2)

{
  uint uVar1;
  uint uVar2;
  void *_Src;
  uint uVar3;
  void *local_18;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_0054b920;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  uVar3 = param_1 | 0xf;
  if (uVar3 != 0xffffffff) {
    uVar1 = *(uint *)((int)this + 0x14);
    uVar2 = uVar1 >> 1;
    param_1 = uVar3;
    if ((uVar3 / 3 < uVar2) && (param_1 = uVar2 + uVar1, -uVar2 - 2 < uVar1)) {
      param_1 = 0xfffffffe;
    }
  }
  local_8 = 0;
  local_18 = (void *)0x0;
  if ((param_1 + 1 != 0) && (local_18 = operator_new(param_1 + 1), local_18 == (void *)0x0)) {
                    /* WARNING: Subroutine does not return */
    std::_Xbad_alloc();
  }
  if (param_2 != 0) {
    _Src = this;
    if (0xf < *(uint *)((int)this + 0x14)) {
      _Src = *(void **)this;
    }
    if (param_2 != 0) {
      memcpy(local_18,_Src,param_2);
    }
  }
  if (0xf < *(uint *)((int)this + 0x14)) {
    operator_delete(*(void **)this);
  }
  *(undefined1 *)this = 0;
  *(void **)this = local_18;
  *(uint *)((int)this + 0x14) = param_1;
  *(size_t *)((int)this + 0x10) = param_2;
  if (0xf < param_1) {
    this = local_18;
  }
  *(undefined1 *)((int)this + param_2) = 0;
  ExceptionList = local_10;
  return;
}


/* FUN_00406310 @ 00406310  kind=gamemisc  attributed-by=role:dtor-like  size=62 */

void __cdecl FUN_00406310(undefined4 *param_1,undefined4 *param_2)

{
  for (; param_1 != param_2; param_1 = param_1 + 3) {
    if ((void *)*param_1 != (void *)0x0) {
      operator_delete((void *)*param_1);
      *param_1 = 0;
      param_1[1] = 0;
      param_1[2] = 0;
    }
  }
  return;
}


/* FUN_004135d0 @ 004135d0  kind=gamemisc  attributed-by=role:dtor-like  size=98 */

void FUN_004135d0(int *param_1)

{
  int *piVar1;
  
  if ((int *)param_1[4] == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    std::_Xbad_function_call();
  }
  (**(code **)(*(int *)param_1[4] + 8))();
  piVar1 = (int *)param_1[4];
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 0x10))(piVar1 != param_1);
    param_1[4] = 0;
  }
  piVar1 = (int *)param_1[4];
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 0x10))(piVar1 != param_1);
    param_1[4] = 0;
  }
  operator_delete(param_1);
                    /* WARNING: Could not recover jumptable at 0x0041362c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  _endthread();
  return;
}


/* FUN_00423710 @ 00423710  kind=gamemisc  attributed-by=role:dtor-like  size=62 */

void __fastcall FUN_00423710(int *param_1)

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
      operator_delete(piVar2);
      piVar2 = piVar1;
    } while (piVar1 != (int *)*param_1);
  }
  operator_delete((void *)*param_1);
  return;
}


/* FUN_004f3bf0 @ 004f3bf0  kind=gamemisc  attributed-by=role:dtor-like  size=104 */

void __cdecl FUN_004f3bf0(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  
  if (param_1 != param_2) {
    puVar2 = param_1 + 3;
    do {
      if ((void *)*puVar2 != (void *)0x0) {
        operator_delete((void *)*puVar2);
        *puVar2 = 0;
        puVar2[1] = 0;
        puVar2[2] = 0;
      }
      if ((void *)puVar2[-3] != (void *)0x0) {
        operator_delete((void *)puVar2[-3]);
        puVar2[-3] = 0;
        puVar2[-2] = 0;
        puVar2[-1] = 0;
      }
      puVar1 = puVar2 + 3;
      puVar2 = puVar2 + 6;
    } while (puVar1 != param_2);
  }
  return;
}


