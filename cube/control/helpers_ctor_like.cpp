// helpers_ctor_like (control) -- cube. 1 functions. Bodies = Ghidra pseudo-C.
// Attribution: see ../attribution.tsv. Toolchain of the original: MSVC 11.0 (VS2012).
#include "helpers_ctor_like.h"

/* FUN_004515f0 @ 004515f0  kind=gamemisc  attributed-by=role:ctor-like  size=227 */

undefined4 * FUN_004515f0(undefined4 *param_1,int param_2,char *param_3)

{
  uint uVar1;
  uint uVar2;
  char cVar3;
  undefined4 *puVar4;
  int iVar5;
  char *pcVar6;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_006e31c9;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  param_1[5] = 0xf;
  param_1[4] = 0;
  *(undefined1 *)param_1 = 0;
  local_8 = 0;
  if (*param_3 == '\0') {
    iVar5 = 0;
  }
  else {
    pcVar6 = param_3;
    do {
      cVar3 = *pcVar6;
      pcVar6 = pcVar6 + 1;
    } while (cVar3 != '\0');
    iVar5 = (int)pcVar6 - (int)(param_3 + 1);
  }
  uVar2 = param_1[4];
  uVar1 = iVar5 + *(int *)(param_2 + 0x10);
  if (((uVar2 <= uVar1) && (param_1[5] != uVar1)) && (cVar3 = FUN_00407d50(uVar1,1), cVar3 != '\0'))
  {
    param_1[4] = uVar2;
    puVar4 = param_1;
    if (0xf < (uint)param_1[5]) {
      puVar4 = (undefined4 *)*param_1;
    }
    *(undefined1 *)((int)puVar4 + uVar2) = 0;
  }
  FUN_0046ef60(param_2,0,0xffffffff);
  if (*param_3 == '\0') {
    iVar5 = 0;
  }
  else {
    pcVar6 = param_3;
    do {
      cVar3 = *pcVar6;
      pcVar6 = pcVar6 + 1;
    } while (cVar3 != '\0');
    iVar5 = (int)pcVar6 - (int)(param_3 + 1);
  }
  FUN_0046f050(param_3,iVar5);
  ExceptionList = local_10;
  return param_1;
}


