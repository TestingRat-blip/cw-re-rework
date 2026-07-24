// helpers_wrapper (engine) -- cube. 9 functions. Bodies = Ghidra pseudo-C.
// Attribution: see ../attribution.tsv. Toolchain of the original: MSVC 11.0 (VS2012).
#include "helpers_wrapper.h"

/* FUN_00406d50 @ 00406d50  kind=gamemisc  attributed-by=role:wrapper  size=101 */

undefined4 FUN_00406d50(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar3 = param_1;
  iVar1 = *(int *)(param_1 + 0x38);
  param_1 = (*(int *)(param_1 + 0x30) - *(int *)(param_1 + 0x2c)) / 0xc - param_2;
  iVar4 = FUN_00583cb0(iVar1,*(undefined4 *)(iVar1 + 4),&param_1);
  iVar2 = *(int *)(iVar3 + 0x3c);
  if (iVar2 == 0x15555554) {
                    /* WARNING: Subroutine does not return */
    std::_Xlength_error("list<T> too long");
  }
  *(int *)(iVar3 + 0x3c) = iVar2 + 1;
  *(int *)(iVar1 + 4) = iVar4;
  **(int **)(iVar4 + 4) = iVar4;
  return 0;
}


/* FUN_00406dc0 @ 00406dc0  kind=gamemisc  attributed-by=role:wrapper  size=107 */

undefined4 FUN_00406dc0(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar3 = param_1;
  iVar1 = *(int *)(param_1 + 0x38);
  param_1 = ((*(int *)(param_1 + 0x30) - *(int *)(param_1 + 0x2c)) / 0xc - param_2) + DAT_0076af04;
  iVar4 = FUN_00583cb0(iVar1,*(undefined4 *)(iVar1 + 4),&param_1);
  iVar2 = *(int *)(iVar3 + 0x3c);
  if (iVar2 == 0x15555554) {
                    /* WARNING: Subroutine does not return */
    std::_Xlength_error("list<T> too long");
  }
  *(int *)(iVar3 + 0x3c) = iVar2 + 1;
  *(int *)(iVar1 + 4) = iVar4;
  **(int **)(iVar4 + 4) = iVar4;
  return 0;
}


/* FUN_00406ec0 @ 00406ec0  kind=gamemisc  attributed-by=role:wrapper  size=105 */

undefined4 FUN_00406ec0(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  param_2 = (*(int *)(param_1 + 0x30) - *(int *)(param_1 + 0x2c)) / 0xc - param_2;
  iVar1 = *(int *)(param_1 + 0x38);
  iVar2 = FUN_00583cb0(iVar1,*(undefined4 *)(iVar1 + 4),&param_2);
  if (*(int *)(param_1 + 0x3c) == 0x15555554) {
                    /* WARNING: Subroutine does not return */
    std::_Xlength_error("list<T> too long");
  }
  *(int *)(param_1 + 0x3c) = *(int *)(param_1 + 0x3c) + 1;
  *(int *)(iVar1 + 4) = iVar2;
  **(int **)(iVar2 + 4) = iVar2;
  return 0;
}


/* FUN_00407510 @ 00407510  kind=gamemisc  attributed-by=role:wrapper  size=91 */

undefined4 FUN_00407510(int param_1,int param_2)

{
  param_2 = param_2 / DAT_00765010;
  if (param_2 < 0) {
    FUN_0040d910(*(int *)(param_1 + 0x2c) + (param_2 + 1) * -0xc);
    return 0;
  }
  FUN_0040d910(*(int *)(param_1 + 0x2c) +
               (*(int *)(*(int *)(*(int *)(param_1 + 0x38) + 4) + 8) + param_2) * 0xc);
  return 0;
}


/* FUN_00407620 @ 00407620  kind=gamemisc  attributed-by=role:wrapper  size=91 */

int FUN_00407620(int param_1,int param_2)

{
  if (param_2 < 0) {
    FUN_0040d910(*(int *)(param_1 + 0x2c) + (param_2 + 1) * -0xc);
    return DAT_00765008 + -0xd;
  }
  FUN_0040d910(*(int *)(param_1 + 0x2c) +
               (*(int *)(*(int *)(*(int *)(param_1 + 0x38) + 4) + 8) + param_2) * 0xc);
  return DAT_00765008 + -0xd;
}


/* FUN_00407680 @ 00407680  kind=gamemisc  attributed-by=role:wrapper  size=79 */

undefined4 FUN_00407680(int param_1,int param_2)

{
  if (param_2 < 0) {
    FUN_0040d910(*(int *)(param_1 + 0x2c) + (param_2 + 1) * -0xc);
    return 0;
  }
  FUN_0040d910(*(int *)(param_1 + 0x2c) +
               (*(int *)(*(int *)(*(int *)(param_1 + 0x38) + 4) + 8) + param_2) * 0xc);
  return 0;
}


/* FUN_00408160 @ 00408160  kind=gamemisc  attributed-by=role:wrapper  size=65 */

void FUN_00408160(undefined4 param_1,uint param_2)

{
  __security_check_cookie
            (DAT_0076aa78 ^ (uint)&stack0xfffffffc ^ (uint)&stack0xfffffffc,
             (int)((param_2 ^ (int)param_2 >> 0x1f) - ((int)param_2 >> 0x1f)) % 5,param_2,param_2,
             param_2,param_2,param_2);
  return;
}


/* FUN_0042ca80 @ 0042ca80  kind=gamemisc  attributed-by=role:wrapper  size=44 */

void FUN_0042ca80(void *param_1)

{
  if (*(char *)((int)param_1 + 0xd) == '\0') {
    FUN_0042ca80(*(undefined4 *)((int)param_1 + 8));
                    /* WARNING: Subroutine does not return */
    operator_delete(param_1);
  }
  return;
}


/* FUN_00692a70 @ 00692a70  kind=gamemisc  attributed-by=role:wrapper  size=43 */

void FUN_00692a70(void)

{
  undefined4 *unaff_ESI;
  
  FUN_00691460(unaff_ESI + 6,FUN_006929b0,unaff_ESI[2]);
  if ((*(uint *)*unaff_ESI & 0x200) == 0) {
    FUN_006915b0(unaff_ESI[9]);
  }
  return;
}


