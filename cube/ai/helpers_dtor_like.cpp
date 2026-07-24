// helpers_dtor_like (ai) -- cube. 2 functions. Bodies = Ghidra pseudo-C.
// Attribution: see ../attribution.tsv. Toolchain of the original: MSVC 11.0 (VS2012).
#include "helpers_dtor_like.h"

/* FUN_0042ef10 @ 0042ef10  kind=gamemisc  attributed-by=role:dtor-like  size=158 */

void FUN_0042ef10(void)

{
  int *piVar1;
  int *piVar2;
  undefined4 *puVar3;
  void *pvVar4;
  int in_ECX;
  
  piVar1 = (int *)(in_ECX + 0x140c);
  FUN_0042ca20(*(undefined4 *)(*(int *)(in_ECX + 0x140c) + 4));
  piVar2 = (int *)(in_ECX + 0x1414);
  *(int *)(*piVar1 + 4) = *piVar1;
  *(int *)*piVar1 = *piVar1;
  *(int *)(*piVar1 + 8) = *piVar1;
  *(undefined4 *)(in_ECX + 0x1410) = 0;
  FUN_0042ca20(*(undefined4 *)(*piVar2 + 4));
  *(int *)(*piVar2 + 4) = *piVar2;
  *(int *)*piVar2 = *piVar2;
  *(int *)(*piVar2 + 8) = *piVar2;
  *(undefined4 *)(in_ECX + 0x1418) = 0;
  puVar3 = *(undefined4 **)(in_ECX + 0x1460);
  pvVar4 = (void *)*puVar3;
  *puVar3 = puVar3;
  *(int *)(*(int *)(in_ECX + 0x1460) + 4) = *(int *)(in_ECX + 0x1460);
  *(undefined4 *)(in_ECX + 0x1464) = 0;
  if (pvVar4 != *(void **)(in_ECX + 0x1460)) {
                    /* WARNING: Subroutine does not return */
    operator_delete(pvVar4);
  }
  *(int *)(in_ECX + 0x1408) = *piVar1;
  FUN_0067e480();
  return;
}


/* FUN_005a9ca0 @ 005a9ca0  kind=gamemisc  attributed-by=role:dtor-like  size=133 */

void FUN_005a9ca0(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  int in_ECX;
  undefined4 *local_10;
  undefined4 local_c;
  undefined4 local_8;
  
  local_10 = (undefined4 *)0x0;
  local_c = 0;
  local_8 = 0;
  FUN_0040d9d0(3);
  puVar2 = local_10;
  *local_10 = param_1;
  local_10[1] = param_2;
  local_10[2] = param_3;
  iVar1 = *(int *)(in_ECX + 0x1414);
  iVar3 = FUN_005a7c10(&local_10);
  if (iVar3 != iVar1) {
    FUN_005a78a0(puVar2,local_c,*(undefined4 *)(iVar3 + 0x10),*(undefined4 *)(iVar3 + 0x14));
  }
                    /* WARNING: Subroutine does not return */
  operator_delete(local_10);
}


