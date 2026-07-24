// helpers_ctor_like (engine) -- cube. 1 functions. Bodies = Ghidra pseudo-C.
// Attribution: see ../attribution.tsv. Toolchain of the original: MSVC 11.0 (VS2012).
#include "helpers_ctor_like.h"

/* FUN_00451850 @ 00451850  kind=gamemisc  attributed-by=role:ctor-like  size=239 */

undefined4 * FUN_00451850(undefined4 *param_1,int param_2,short *param_3)

{
  uint uVar1;
  short sVar2;
  uint uVar3;
  char cVar4;
  undefined4 *puVar5;
  int iVar6;
  short *psVar7;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_006f1619;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  param_1[5] = 7;
  param_1[4] = 0;
  *(undefined2 *)param_1 = 0;
  local_8 = 0;
  if (*param_3 == 0) {
    iVar6 = 0;
  }
  else {
    psVar7 = param_3;
    do {
      sVar2 = *psVar7;
      psVar7 = psVar7 + 1;
    } while (sVar2 != 0);
    iVar6 = (int)psVar7 - (int)(param_3 + 1) >> 1;
  }
  uVar3 = param_1[4];
  uVar1 = iVar6 + *(int *)(param_2 + 0x10);
  if (((uVar3 <= uVar1) && (param_1[5] != uVar1)) && (cVar4 = FUN_0040f300(uVar1,1), cVar4 != '\0'))
  {
    param_1[4] = uVar3;
    puVar5 = param_1;
    if (7 < (uint)param_1[5]) {
      puVar5 = (undefined4 *)*param_1;
    }
    *(undefined2 *)((int)puVar5 + uVar3 * 2) = 0;
  }
  FUN_0046f170(param_2,0,0xffffffff);
  if (*param_3 == 0) {
    iVar6 = 0;
  }
  else {
    psVar7 = param_3;
    do {
      sVar2 = *psVar7;
      psVar7 = psVar7 + 1;
    } while (sVar2 != 0);
    iVar6 = (int)psVar7 - (int)(param_3 + 1) >> 1;
  }
  FUN_0046f270(param_3,iVar6);
  ExceptionList = local_10;
  return param_1;
}


