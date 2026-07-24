// helpers_dtor_like (engine) -- cube. 3 functions. Bodies = Ghidra pseudo-C.
// Attribution: see ../attribution.tsv. Toolchain of the original: MSVC 11.0 (VS2012).
#include "helpers_dtor_like.h"

/* FUN_00452650 @ 00452650  kind=gamemisc  attributed-by=role:dtor-like  size=59 */

void FUN_00452650(undefined4 *param_1,undefined4 *param_2)

{
  while( true ) {
    if (param_1 == param_2) {
      return;
    }
    if (7 < (uint)param_1[5]) break;
    param_1[5] = 7;
    param_1[4] = 0;
    *(undefined2 *)param_1 = 0;
    param_1 = param_1 + 6;
  }
                    /* WARNING: Subroutine does not return */
  operator_delete((void *)*param_1);
}


/* FUN_00457ec0 @ 00457ec0  kind=gamemisc  attributed-by=role:dtor-like  size=169 */

void FUN_00457ec0(undefined4 *param_1)

{
  size_t _Size;
  undefined4 *_Src;
  size_t in_stack_00000014;
  uint in_stack_00000018;
  void *local_1c;
  undefined4 local_18;
  undefined4 local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  _Size = in_stack_00000014;
  puStack_c = &LAB_006e38a0;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  _Src = &param_1;
  if (0xf < in_stack_00000018) {
    _Src = param_1;
  }
  local_8 = 0;
  local_1c = (void *)0x0;
  local_18 = 0;
  local_14 = 0;
  FUN_005870c0(in_stack_00000014);
  local_8 = CONCAT31(local_8._1_3_,1);
  memcpy(local_1c,_Src,_Size);
  FUN_0040d910(&local_1c);
  if (local_1c != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    operator_delete(local_1c);
  }
  if (0xf < in_stack_00000018) {
                    /* WARNING: Subroutine does not return */
    operator_delete(param_1);
  }
  ExceptionList = local_10;
  return;
}


/* FUN_0067a7b0 @ 0067a7b0  kind=gamemisc  attributed-by=role:dtor-like  size=259 */

int * FUN_0067a7b0(int *param_1)

{
  size_t _Size;
  void *_Src;
  void *_Dst;
  char cVar1;
  void *pvVar2;
  int iVar3;
  int *in_ECX;
  uint uVar4;
  uint uVar5;
  
  if (in_ECX != param_1) {
    pvVar2 = (void *)param_1[1];
    _Src = (void *)*param_1;
    if (_Src == pvVar2) {
      in_ECX[1] = *in_ECX;
      return in_ECX;
    }
    _Dst = (void *)*in_ECX;
    uVar5 = in_ECX[1] - (int)_Dst >> 2;
    uVar4 = (int)pvVar2 - (int)_Src >> 2;
    if (uVar4 <= uVar5) {
      memmove(_Dst,_Src,(int)pvVar2 - (int)_Src & 0xfffffffc);
      in_ECX[1] = *in_ECX + (param_1[1] - *param_1 >> 2) * 4;
      return in_ECX;
    }
    if (uVar4 <= (uint)(in_ECX[2] - (int)_Dst >> 2)) {
      pvVar2 = (void *)((int)_Src + uVar5 * 4);
      memmove(_Dst,_Src,(int)pvVar2 - (int)_Src & 0xfffffffc);
      _Size = (param_1[1] - (int)pvVar2 >> 2) * 4;
      pvVar2 = memmove((void *)in_ECX[1],pvVar2,_Size);
      in_ECX[1] = (int)((int)pvVar2 + _Size);
      return in_ECX;
    }
    if (_Dst != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      operator_delete(_Dst);
    }
    cVar1 = FUN_0065ae10(param_1[1] - *param_1 >> 2);
    if (cVar1 != '\0') {
      iVar3 = FUN_0063a710(*param_1,param_1[1],*in_ECX);
      in_ECX[1] = iVar3;
    }
  }
  return in_ECX;
}


