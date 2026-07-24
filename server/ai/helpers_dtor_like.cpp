// helpers_dtor_like (ai) -- server. 4 functions. Bodies = Ghidra pseudo-C.
// Attribution: see ../attribution.tsv. Toolchain of the original: MSVC 11.0 (VS2012).
#include "helpers_dtor_like.h"

/* FUN_00405330 @ 00405330  kind=gamemisc  attributed-by=role:dtor-like  size=171 */

void __fastcall FUN_00405330(int param_1)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  
  piVar1 = (int *)(param_1 + 0x140c);
  FUN_00402ed0(*(int **)(*(int *)(param_1 + 0x140c) + 4));
  piVar2 = (int *)(param_1 + 0x1414);
  *(int *)(*piVar1 + 4) = *piVar1;
  *(int *)*piVar1 = *piVar1;
  *(int *)(*piVar1 + 8) = *piVar1;
  *(undefined4 *)(param_1 + 0x1410) = 0;
  FUN_00402ed0(*(int **)(*piVar2 + 4));
  *(int *)(*piVar2 + 4) = *piVar2;
  *(int *)*piVar2 = *piVar2;
  *(int *)(*piVar2 + 8) = *piVar2;
  *(undefined4 *)(param_1 + 0x1418) = 0;
  piVar2 = *(int **)(param_1 + 0x1460);
  piVar3 = (int *)*piVar2;
  *piVar2 = (int)piVar2;
  *(int *)(*(int *)(param_1 + 0x1460) + 4) = *(int *)(param_1 + 0x1460);
  *(undefined4 *)(param_1 + 0x1464) = 0;
  if (piVar3 != *(int **)(param_1 + 0x1460)) {
    do {
      piVar2 = (int *)*piVar3;
      operator_delete(piVar3);
      piVar3 = piVar2;
    } while (piVar2 != (int *)*(int *)(param_1 + 0x1460));
  }
  *(int *)(param_1 + 0x1408) = *piVar1;
  FUN_004f8520((int *)(param_1 + 0x1468));
  return;
}


/* FUN_004dcff0 @ 004dcff0  kind=gamemisc  attributed-by=role:dtor-like  size=147 */

bool __thiscall FUN_004dcff0(void *this,undefined4 *param_1,int param_2,int param_3)

{
  undefined4 *puVar1;
  int *piVar2;
  undefined4 uVar3;
  int *local_10;
  int *local_c;
  undefined4 local_8;
  
  local_10 = (int *)0x0;
  local_c = (int *)0x0;
  local_8 = 0;
  FUN_0045f080(&local_10,3);
  piVar2 = local_10;
  *local_10 = (int)param_1;
  local_10[1] = param_2;
  local_10[2] = param_3;
  puVar1 = *(undefined4 **)((int)this + 0x1414);
  param_1 = FUN_004daf50((void *)((int)this + 0x1414),&local_10);
  if (param_1 != puVar1) {
    uVar3 = FUN_004da930(piVar2,local_c,(int *)param_1[4],(int *)param_1[5]);
    if ((char)uVar3 == '\0') goto LAB_004dd065;
  }
  param_1 = puVar1;
LAB_004dd065:
  operator_delete(local_10);
  return param_1 != puVar1;
}


/* FUN_004dd0f0 @ 004dd0f0  kind=gamemisc  attributed-by=role:dtor-like  size=171 */

undefined4 * __thiscall FUN_004dd0f0(void *this,undefined4 *param_1,int param_2,int param_3)

{
  undefined4 *puVar1;
  int *piVar2;
  undefined4 uVar3;
  int *local_10;
  int *local_c;
  undefined4 local_8;
  
  local_10 = (int *)0x0;
  local_c = (int *)0x0;
  local_8 = 0;
  FUN_0045f080(&local_10,3);
  piVar2 = local_10;
  *local_10 = (int)param_1;
  local_10[1] = param_2;
  local_10[2] = param_3;
  param_1 = FUN_004daf50((void *)((int)this + 0x140c),&local_10);
  puVar1 = *(undefined4 **)((int)this + 0x140c);
  if (param_1 != puVar1) {
    uVar3 = FUN_004da930(piVar2,local_c,(int *)param_1[4],(int *)param_1[5]);
    if ((char)uVar3 == '\0') goto LAB_004dd165;
  }
  param_1 = puVar1;
LAB_004dd165:
  if (param_1 == puVar1) {
    operator_delete(piVar2);
    return (undefined4 *)0x0;
  }
  operator_delete(piVar2);
  return param_1 + 7;
}


/* FUN_004f8520 @ 004f8520  kind=gamemisc  attributed-by=role:dtor-like  size=72 */

void __fastcall FUN_004f8520(int *param_1)

{
  char cVar1;
  int *piVar2;
  int *piVar3;
  
  cVar1 = *(char *)((int)*(int **)(*param_1 + 4) + 0xd);
  piVar3 = *(int **)(*param_1 + 4);
  while (cVar1 == '\0') {
    FUN_004f7c20((int *)piVar3[2]);
    piVar2 = (int *)*piVar3;
    operator_delete(piVar3);
    piVar3 = piVar2;
    cVar1 = *(char *)((int)piVar2 + 0xd);
  }
  *(int *)(*param_1 + 4) = *param_1;
  *(int *)*param_1 = *param_1;
  *(int *)(*param_1 + 8) = *param_1;
  param_1[1] = 0;
  return;
}


