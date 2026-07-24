// helpers_dtor_like (engine) -- cube. 95 functions. Bodies = Ghidra pseudo-C.
// Attribution: see ../attribution.tsv. Toolchain of the original: MSVC 11.0 (VS2012).
#include "helpers_dtor_like.h"

/* FUN_00404650 @ 00404650  kind=gamemisc  attributed-by=role:dtor-like  size=212 */

undefined4 FUN_00404650(int param_1)

{
  int iVar1;
  void *pvVar2;
  int iVar3;
  int *local_1c;
  undefined4 local_18;
  undefined4 local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006e1598;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  iVar1 = **(int **)(*(int *)(param_1 + 0x30) + -0xc);
  if (*(int *)(param_1 + 0x2c) != *(int *)(param_1 + 0x30)) {
    pvVar2 = *(void **)(*(int *)(param_1 + 0x30) + -0xc);
    if (pvVar2 != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      operator_delete(pvVar2);
    }
    *(int *)(param_1 + 0x30) = *(int *)(param_1 + 0x30) + -0xc;
  }
  iVar3 = **(int **)(*(int *)(param_1 + 0x30) + -0xc);
  if (*(int *)(param_1 + 0x2c) != *(int *)(param_1 + 0x30)) {
    pvVar2 = *(void **)(*(int *)(param_1 + 0x30) + -0xc);
    if (pvVar2 != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      operator_delete(pvVar2);
    }
    *(int *)(param_1 + 0x30) = *(int *)(param_1 + 0x30) + -0xc;
  }
  iVar3 = DAT_00765004 * iVar3;
  local_1c = (int *)0x0;
  local_18 = 0;
  local_14 = 0;
  FUN_005870c0(4);
  *local_1c = iVar3 + iVar1;
  local_8 = 0;
  FUN_0040d910(&local_1c);
  if (local_1c != (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    operator_delete(local_1c);
  }
  ExceptionList = local_10;
  return 0;
}


/* FUN_00404760 @ 00404760  kind=gamemisc  attributed-by=role:dtor-like  size=242 */

undefined4 FUN_00404760(int param_1)

{
  int iVar1;
  void *pvVar2;
  int iVar3;
  int iVar4;
  int *local_1c;
  undefined4 local_18;
  undefined4 local_14;
  void *local_10;
  undefined1 *puStack_c;
  uint local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006e1600;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  iVar1 = **(int **)(*(int *)(param_1 + 0x30) + -0xc);
  if (*(int *)(param_1 + 0x2c) != *(int *)(param_1 + 0x30)) {
    pvVar2 = *(void **)(*(int *)(param_1 + 0x30) + -0xc);
    if (pvVar2 != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      operator_delete(pvVar2);
    }
    *(int *)(param_1 + 0x30) = *(int *)(param_1 + 0x30) + -0xc;
  }
  iVar3 = **(int **)(*(int *)(param_1 + 0x30) + -0xc);
  if (*(int *)(param_1 + 0x2c) != *(int *)(param_1 + 0x30)) {
    pvVar2 = *(void **)(*(int *)(param_1 + 0x30) + -0xc);
    if (pvVar2 != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      operator_delete(pvVar2);
    }
    *(int *)(param_1 + 0x30) = *(int *)(param_1 + 0x30) + -0xc;
  }
  local_1c = (int *)0x0;
  local_18 = 0;
  local_14 = 0;
  if (iVar3 <= iVar1) {
    iVar4 = DAT_0076502c * iVar1;
    FUN_005870c0(4);
    *local_1c = iVar3 - iVar4;
  }
  else {
    FUN_005870c0(4);
    *local_1c = iVar3 + iVar1;
  }
  local_8 = (uint)(iVar3 <= iVar1);
  FUN_0040d910(&local_1c);
  if (local_1c != (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    operator_delete(local_1c);
  }
  ExceptionList = local_10;
  return 0;
}


/* FUN_00404890 @ 00404890  kind=gamemisc  attributed-by=role:dtor-like  size=216 */

undefined4 FUN_00404890(int param_1)

{
  void *pvVar1;
  undefined4 uVar2;
  uint uVar3;
  undefined4 uVar4;
  undefined4 *local_1c;
  undefined4 local_18;
  undefined4 local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006e1598;
  local_10 = ExceptionList;
  uVar3 = DAT_0076aa78 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  uVar4 = **(undefined4 **)(*(int *)(param_1 + 0x30) + -0xc);
  if (*(int *)(param_1 + 0x2c) != *(int *)(param_1 + 0x30)) {
    pvVar1 = *(void **)(*(int *)(param_1 + 0x30) + -0xc);
    if (pvVar1 != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      operator_delete(pvVar1);
    }
    *(int *)(param_1 + 0x30) = *(int *)(param_1 + 0x30) + -0xc;
  }
  uVar2 = **(undefined4 **)(*(int *)(param_1 + 0x30) + -0xc);
  if (*(int *)(param_1 + 0x2c) != *(int *)(param_1 + 0x30)) {
    pvVar1 = *(void **)(*(int *)(param_1 + 0x30) + -0xc);
    if (pvVar1 != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      operator_delete(pvVar1);
    }
    *(int *)(param_1 + 0x30) = *(int *)(param_1 + 0x30) + -0xc;
  }
  uVar4 = FUN_0040bbb0(uVar2,uVar4,1,uVar3);
  local_1c = (undefined4 *)0x0;
  local_18 = 0;
  local_14 = 0;
  FUN_005870c0(4);
  *local_1c = uVar4;
  local_8 = 0;
  FUN_0040d910(&local_1c);
  if (local_1c != (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    operator_delete(local_1c);
  }
  ExceptionList = local_10;
  return 0;
}


/* FUN_004049a0 @ 004049a0  kind=gamemisc  attributed-by=role:dtor-like  size=207 */

undefined4 FUN_004049a0(int param_1)

{
  int iVar1;
  void *pvVar2;
  int iVar3;
  int *local_1c;
  undefined4 local_18;
  undefined4 local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006e1598;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  iVar1 = **(int **)(*(int *)(param_1 + 0x30) + -0xc);
  if (*(int *)(param_1 + 0x2c) != *(int *)(param_1 + 0x30)) {
    pvVar2 = *(void **)(*(int *)(param_1 + 0x30) + -0xc);
    if (pvVar2 != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      operator_delete(pvVar2);
    }
    *(int *)(param_1 + 0x30) = *(int *)(param_1 + 0x30) + -0xc;
  }
  iVar3 = **(int **)(*(int *)(param_1 + 0x30) + -0xc);
  if (*(int *)(param_1 + 0x2c) != *(int *)(param_1 + 0x30)) {
    pvVar2 = *(void **)(*(int *)(param_1 + 0x30) + -0xc);
    if (pvVar2 != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      operator_delete(pvVar2);
    }
    *(int *)(param_1 + 0x30) = *(int *)(param_1 + 0x30) + -0xc;
  }
  local_1c = (int *)0x0;
  local_18 = 0;
  local_14 = 0;
  FUN_005870c0(4);
  *local_1c = iVar3 + iVar1;
  local_8 = 0;
  FUN_0040d910(&local_1c);
  if (local_1c != (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    operator_delete(local_1c);
  }
  ExceptionList = local_10;
  return 0;
}


/* FUN_00404ab0 @ 00404ab0  kind=gamemisc  attributed-by=role:dtor-like  size=241 */

undefined4 FUN_00404ab0(int param_1)

{
  int iVar1;
  void *pvVar2;
  int iVar3;
  int *local_1c;
  undefined4 local_18;
  undefined4 local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006e1598;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  iVar1 = **(int **)(*(int *)(param_1 + 0x30) + -0xc);
  if (*(int *)(param_1 + 0x2c) != *(int *)(param_1 + 0x30)) {
    pvVar2 = *(void **)(*(int *)(param_1 + 0x30) + -0xc);
    if (pvVar2 != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      operator_delete(pvVar2);
    }
    *(int *)(param_1 + 0x30) = *(int *)(param_1 + 0x30) + -0xc;
  }
  iVar3 = **(int **)(*(int *)(param_1 + 0x30) + -0xc);
  if (*(int *)(param_1 + 0x2c) != *(int *)(param_1 + 0x30)) {
    pvVar2 = *(void **)(*(int *)(param_1 + 0x30) + -0xc);
    if (pvVar2 != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      operator_delete(pvVar2);
    }
    *(int *)(param_1 + 0x30) = *(int *)(param_1 + 0x30) + -0xc;
  }
  local_1c = (int *)0x0;
  local_18 = 0;
  local_14 = 0;
  FUN_005870c0(4);
  *local_1c = (int)(((double)iVar3 + (double)iVar1) * 3.25 * 0.3076923076923077);
  local_8 = 0;
  FUN_0040d910(&local_1c);
  if (local_1c != (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    operator_delete(local_1c);
  }
  ExceptionList = local_10;
  return 0;
}


/* FUN_00404be0 @ 00404be0  kind=gamemisc  attributed-by=role:dtor-like  size=219 */

undefined4 FUN_00404be0(int param_1)

{
  int iVar1;
  void *pvVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 *local_1c;
  undefined4 local_18;
  undefined4 local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006e1598;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  iVar1 = **(int **)(*(int *)(param_1 + 0x30) + -0xc);
  if (*(int *)(param_1 + 0x2c) != *(int *)(param_1 + 0x30)) {
    pvVar2 = *(void **)(*(int *)(param_1 + 0x30) + -0xc);
    if (pvVar2 != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      operator_delete(pvVar2);
    }
    *(int *)(param_1 + 0x30) = *(int *)(param_1 + 0x30) + -0xc;
  }
  iVar3 = **(int **)(*(int *)(param_1 + 0x30) + -0xc);
  if (*(int *)(param_1 + 0x2c) != *(int *)(param_1 + 0x30)) {
    pvVar2 = *(void **)(*(int *)(param_1 + 0x30) + -0xc);
    if (pvVar2 != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      operator_delete(pvVar2);
    }
    *(int *)(param_1 + 0x30) = *(int *)(param_1 + 0x30) + -0xc;
  }
  if ((iVar1 == 0) || (iVar3 == 0)) {
    uVar4 = 0;
  }
  else {
    uVar4 = 1;
  }
  local_1c = (undefined4 *)0x0;
  local_18 = 0;
  local_14 = 0;
  FUN_005870c0(4);
  *local_1c = uVar4;
  local_8 = 0;
  FUN_0040d910(&local_1c);
  if (local_1c != (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    operator_delete(local_1c);
  }
  ExceptionList = local_10;
  return 0;
}


/* FUN_00404cf0 @ 00404cf0  kind=gamemisc  attributed-by=role:dtor-like  size=221 */

undefined4 FUN_00404cf0(int param_1)

{
  int iVar1;
  void *pvVar2;
  int iVar3;
  int *local_1c;
  undefined4 local_18;
  undefined4 local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006e1598;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  iVar1 = **(int **)(*(int *)(param_1 + 0x30) + -0xc);
  if (*(int *)(param_1 + 0x2c) != *(int *)(param_1 + 0x30)) {
    pvVar2 = *(void **)(*(int *)(param_1 + 0x30) + -0xc);
    if (pvVar2 != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      operator_delete(pvVar2);
    }
    *(int *)(param_1 + 0x30) = *(int *)(param_1 + 0x30) + -0xc;
  }
  iVar3 = **(int **)(*(int *)(param_1 + 0x30) + -0xc);
  if (*(int *)(param_1 + 0x2c) != *(int *)(param_1 + 0x30)) {
    pvVar2 = *(void **)(*(int *)(param_1 + 0x30) + -0xc);
    if (pvVar2 != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      operator_delete(pvVar2);
    }
    *(int *)(param_1 + 0x30) = *(int *)(param_1 + 0x30) + -0xc;
  }
  local_1c = (int *)0x0;
  local_18 = 0;
  local_14 = 0;
  FUN_005870c0(4);
  *local_1c = (uint)(iVar3 != 0) * (uint)(iVar1 != 0);
  local_8 = 0;
  FUN_0040d910(&local_1c);
  if (local_1c != (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    operator_delete(local_1c);
  }
  ExceptionList = local_10;
  return 0;
}


/* FUN_00404e00 @ 00404e00  kind=gamemisc  attributed-by=role:dtor-like  size=213 */

undefined4 FUN_00404e00(int param_1)

{
  int iVar1;
  void *pvVar2;
  int iVar3;
  uint *local_1c;
  undefined4 local_18;
  undefined4 local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006e1598;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  iVar1 = **(int **)(*(int *)(param_1 + 0x30) + -0xc);
  if (*(int *)(param_1 + 0x2c) != *(int *)(param_1 + 0x30)) {
    pvVar2 = *(void **)(*(int *)(param_1 + 0x30) + -0xc);
    if (pvVar2 != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      operator_delete(pvVar2);
    }
    *(int *)(param_1 + 0x30) = *(int *)(param_1 + 0x30) + -0xc;
  }
  iVar3 = **(int **)(*(int *)(param_1 + 0x30) + -0xc);
  if (*(int *)(param_1 + 0x2c) != *(int *)(param_1 + 0x30)) {
    pvVar2 = *(void **)(*(int *)(param_1 + 0x30) + -0xc);
    if (pvVar2 != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      operator_delete(pvVar2);
    }
    *(int *)(param_1 + 0x30) = *(int *)(param_1 + 0x30) + -0xc;
  }
  local_1c = (uint *)0x0;
  local_18 = 0;
  local_14 = 0;
  FUN_005870c0(4);
  *local_1c = (uint)((iVar3 * iVar1 & 0x7ffffffU) != 0);
  local_8 = 0;
  FUN_0040d910(&local_1c);
  if (local_1c != (uint *)0x0) {
                    /* WARNING: Subroutine does not return */
    operator_delete(local_1c);
  }
  ExceptionList = local_10;
  return 0;
}


/* FUN_00404f10 @ 00404f10  kind=gamemisc  attributed-by=role:dtor-like  size=249 */

undefined4 FUN_00404f10(int param_1)

{
  void *pvVar1;
  int iVar2;
  undefined4 *local_20;
  undefined4 local_1c;
  undefined4 local_18;
  int local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006e14b8;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_14 = **(int **)(*(int *)(param_1 + 0x30) + -0xc);
  if (*(int *)(param_1 + 0x2c) != *(int *)(param_1 + 0x30)) {
    pvVar1 = *(void **)(*(int *)(param_1 + 0x30) + -0xc);
    if (pvVar1 != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      operator_delete(pvVar1);
    }
    *(int *)(param_1 + 0x30) = *(int *)(param_1 + 0x30) + -0xc;
  }
  iVar2 = **(int **)(*(int *)(param_1 + 0x30) + -0xc);
  if (*(int *)(param_1 + 0x2c) != *(int *)(param_1 + 0x30)) {
    pvVar1 = *(void **)(*(int *)(param_1 + 0x30) + -0xc);
    if (pvVar1 != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      operator_delete(pvVar1);
    }
    *(int *)(param_1 + 0x30) = *(int *)(param_1 + 0x30) + -0xc;
  }
  if ((local_14 != 0) && (iVar2 != 0)) {
    FUN_00403030(1);
    ExceptionList = local_10;
    return 0;
  }
  local_20 = (undefined4 *)0x0;
  local_1c = 0;
  local_18 = 0;
  FUN_005870c0(4);
  *local_20 = 0;
  local_8 = 0;
  FUN_0040d910(&local_20);
  if (local_20 != (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    operator_delete(local_20);
  }
  ExceptionList = local_10;
  return 0;
}


/* FUN_00405640 @ 00405640  kind=gamemisc  attributed-by=role:dtor-like  size=181 */

undefined4 FUN_00405640(int param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  undefined4 *local_1c;
  undefined4 local_18;
  undefined4 local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006e1688;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  if (param_2 < 0) {
    puVar2 = *(undefined4 **)(*(int *)(param_1 + 0x2c) + param_2 * -0xc);
  }
  else {
    puVar2 = *(undefined4 **)
              (*(int *)(param_1 + 0x2c) +
              (*(int *)(*(int *)(*(int *)(param_1 + 0x38) + 4) + 8) + param_2) * 0xc);
  }
  uVar1 = *(undefined4 *)*puVar2;
  local_1c = (undefined4 *)0x0;
  local_18 = 0;
  local_14 = 0;
  FUN_005870c0(4);
  *local_1c = uVar1;
  local_8 = 0;
  FUN_0040d910(&local_1c);
  if (local_1c != (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    operator_delete(local_1c);
  }
  ExceptionList = local_10;
  return 0;
}


/* FUN_00405700 @ 00405700  kind=gamemisc  attributed-by=role:dtor-like  size=208 */

undefined4 FUN_00405700(int param_1)

{
  int iVar1;
  void *pvVar2;
  int iVar3;
  int *local_1c;
  undefined4 local_18;
  undefined4 local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006e1598;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  iVar1 = **(int **)(*(int *)(param_1 + 0x30) + -0xc);
  if (*(int *)(param_1 + 0x2c) != *(int *)(param_1 + 0x30)) {
    pvVar2 = *(void **)(*(int *)(param_1 + 0x30) + -0xc);
    if (pvVar2 != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      operator_delete(pvVar2);
    }
    *(int *)(param_1 + 0x30) = *(int *)(param_1 + 0x30) + -0xc;
  }
  iVar3 = **(int **)(*(int *)(param_1 + 0x30) + -0xc);
  if (*(int *)(param_1 + 0x2c) != *(int *)(param_1 + 0x30)) {
    pvVar2 = *(void **)(*(int *)(param_1 + 0x30) + -0xc);
    if (pvVar2 != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      operator_delete(pvVar2);
    }
    *(int *)(param_1 + 0x30) = *(int *)(param_1 + 0x30) + -0xc;
  }
  local_1c = (int *)0x0;
  local_18 = 0;
  local_14 = 0;
  FUN_005870c0(4);
  *local_1c = iVar1 / iVar3;
  local_8 = 0;
  FUN_0040d910(&local_1c);
  if (local_1c != (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    operator_delete(local_1c);
  }
  ExceptionList = local_10;
  return 0;
}


/* FUN_00405850 @ 00405850  kind=gamemisc  attributed-by=role:dtor-like  size=207 */

undefined4 FUN_00405850(int param_1)

{
  int iVar1;
  void *pvVar2;
  int iVar3;
  uint *local_1c;
  undefined4 local_18;
  undefined4 local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006e1598;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  iVar1 = **(int **)(*(int *)(param_1 + 0x30) + -0xc);
  if (*(int *)(param_1 + 0x2c) != *(int *)(param_1 + 0x30)) {
    pvVar2 = *(void **)(*(int *)(param_1 + 0x30) + -0xc);
    if (pvVar2 != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      operator_delete(pvVar2);
    }
    *(int *)(param_1 + 0x30) = *(int *)(param_1 + 0x30) + -0xc;
  }
  iVar3 = **(int **)(*(int *)(param_1 + 0x30) + -0xc);
  if (*(int *)(param_1 + 0x2c) != *(int *)(param_1 + 0x30)) {
    pvVar2 = *(void **)(*(int *)(param_1 + 0x30) + -0xc);
    if (pvVar2 != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      operator_delete(pvVar2);
    }
    *(int *)(param_1 + 0x30) = *(int *)(param_1 + 0x30) + -0xc;
  }
  local_1c = (uint *)0x0;
  local_18 = 0;
  local_14 = 0;
  FUN_005870c0(4);
  *local_1c = (uint)(iVar1 == iVar3);
  local_8 = 0;
  FUN_0040d910(&local_1c);
  if (local_1c != (uint *)0x0) {
                    /* WARNING: Subroutine does not return */
    operator_delete(local_1c);
  }
  ExceptionList = local_10;
  return 0;
}


/* FUN_00405960 @ 00405960  kind=gamemisc  attributed-by=role:dtor-like  size=215 */

undefined4 FUN_00405960(int param_1)

{
  void *pvVar1;
  int iVar2;
  int iVar3;
  uint *local_1c;
  undefined4 local_18;
  undefined4 local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006e1598;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  iVar3 = **(int **)(*(int *)(param_1 + 0x30) + -0xc);
  if (*(int *)(param_1 + 0x2c) != *(int *)(param_1 + 0x30)) {
    pvVar1 = *(void **)(*(int *)(param_1 + 0x30) + -0xc);
    if (pvVar1 != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      operator_delete(pvVar1);
    }
    *(int *)(param_1 + 0x30) = *(int *)(param_1 + 0x30) + -0xc;
  }
  iVar2 = **(int **)(*(int *)(param_1 + 0x30) + -0xc);
  if (*(int *)(param_1 + 0x2c) != *(int *)(param_1 + 0x30)) {
    pvVar1 = *(void **)(*(int *)(param_1 + 0x30) + -0xc);
    if (pvVar1 != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      operator_delete(pvVar1);
    }
    *(int *)(param_1 + 0x30) = *(int *)(param_1 + 0x30) + -0xc;
  }
  iVar3 = iVar3 - iVar2;
  local_1c = (uint *)0x0;
  local_18 = 0;
  local_14 = 0;
  FUN_005870c0(4);
  *local_1c = (uint)(iVar3 * iVar3 < 1);
  local_8 = 0;
  FUN_0040d910(&local_1c);
  if (local_1c != (uint *)0x0) {
                    /* WARNING: Subroutine does not return */
    operator_delete(local_1c);
  }
  ExceptionList = local_10;
  return 0;
}


/* FUN_00405a70 @ 00405a70  kind=gamemisc  attributed-by=role:dtor-like  size=242 */

undefined4 FUN_00405a70(int param_1)

{
  int iVar1;
  void *pvVar2;
  int iVar3;
  uint *local_1c;
  undefined4 local_18;
  undefined4 local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006e1598;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  iVar1 = **(int **)(*(int *)(param_1 + 0x30) + -0xc);
  if (*(int *)(param_1 + 0x2c) != *(int *)(param_1 + 0x30)) {
    pvVar2 = *(void **)(*(int *)(param_1 + 0x30) + -0xc);
    if (pvVar2 != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      operator_delete(pvVar2);
    }
    *(int *)(param_1 + 0x30) = *(int *)(param_1 + 0x30) + -0xc;
  }
  iVar3 = **(int **)(*(int *)(param_1 + 0x30) + -0xc);
  if (*(int *)(param_1 + 0x2c) != *(int *)(param_1 + 0x30)) {
    pvVar2 = *(void **)(*(int *)(param_1 + 0x30) + -0xc);
    if (pvVar2 != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      operator_delete(pvVar2);
    }
    *(int *)(param_1 + 0x30) = *(int *)(param_1 + 0x30) + -0xc;
  }
  local_1c = (uint *)0x0;
  local_18 = 0;
  local_14 = 0;
  FUN_005870c0(4);
  *local_1c = (uint)(iVar1 * 10 == iVar3 * 10);
  local_8 = 0;
  FUN_0040d910(&local_1c);
  if (local_1c == (uint *)0x0) {
    ExceptionList = local_10;
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  operator_delete(local_1c);
}


/* FUN_00405ba0 @ 00405ba0  kind=gamemisc  attributed-by=role:dtor-like  size=219 */

undefined4 FUN_00405ba0(int param_1)

{
  int iVar1;
  void *pvVar2;
  int iVar3;
  uint *local_1c;
  undefined4 local_18;
  undefined4 local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006e1598;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  iVar1 = **(int **)(*(int *)(param_1 + 0x30) + -0xc);
  if (*(int *)(param_1 + 0x2c) != *(int *)(param_1 + 0x30)) {
    pvVar2 = *(void **)(*(int *)(param_1 + 0x30) + -0xc);
    if (pvVar2 != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      operator_delete(pvVar2);
    }
    *(int *)(param_1 + 0x30) = *(int *)(param_1 + 0x30) + -0xc;
  }
  iVar3 = **(int **)(*(int *)(param_1 + 0x30) + -0xc);
  if (*(int *)(param_1 + 0x2c) != *(int *)(param_1 + 0x30)) {
    pvVar2 = *(void **)(*(int *)(param_1 + 0x30) + -0xc);
    if (pvVar2 != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      operator_delete(pvVar2);
    }
    *(int *)(param_1 + 0x30) = *(int *)(param_1 + 0x30) + -0xc;
  }
  local_1c = (uint *)0x0;
  local_18 = 0;
  local_14 = 0;
  FUN_005870c0(4);
  *local_1c = (uint)((iVar1 + 3) - (iVar3 + -1) == 4);
  local_8 = 0;
  FUN_0040d910(&local_1c);
  if (local_1c != (uint *)0x0) {
                    /* WARNING: Subroutine does not return */
    operator_delete(local_1c);
  }
  ExceptionList = local_10;
  return 0;
}


/* FUN_00405e70 @ 00405e70  kind=gamemisc  attributed-by=role:dtor-like  size=224 */

undefined4 FUN_00405e70(int param_1)

{
  void *pvVar1;
  float fVar2;
  float *local_20;
  undefined4 local_1c;
  undefined4 local_18;
  float local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006e14b8;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_14 = **(float **)(*(int *)(param_1 + 0x30) + -0xc);
  if (*(int *)(param_1 + 0x2c) != *(int *)(param_1 + 0x30)) {
    pvVar1 = *(void **)(*(int *)(param_1 + 0x30) + -0xc);
    if (pvVar1 != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      operator_delete(pvVar1);
    }
    *(int *)(param_1 + 0x30) = *(int *)(param_1 + 0x30) + -0xc;
  }
  fVar2 = **(float **)(*(int *)(param_1 + 0x30) + -0xc);
  if (*(int *)(param_1 + 0x2c) != *(int *)(param_1 + 0x30)) {
    pvVar1 = *(void **)(*(int *)(param_1 + 0x30) + -0xc);
    if (pvVar1 != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      operator_delete(pvVar1);
    }
    *(int *)(param_1 + 0x30) = *(int *)(param_1 + 0x30) + -0xc;
  }
  fVar2 = fVar2 + local_14;
  local_20 = (float *)0x0;
  local_1c = 0;
  local_18 = 0;
  FUN_005870c0(4);
  *local_20 = fVar2;
  local_8 = 0;
  FUN_0040d910(&local_20);
  if (local_20 != (float *)0x0) {
                    /* WARNING: Subroutine does not return */
    operator_delete(local_20);
  }
  ExceptionList = local_10;
  return 0;
}


/* FUN_00405f90 @ 00405f90  kind=gamemisc  attributed-by=role:dtor-like  size=228 */

undefined4 FUN_00405f90(int param_1)

{
  void *pvVar1;
  float fVar2;
  float *local_20;
  undefined4 local_1c;
  undefined4 local_18;
  float local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006e14b8;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_14 = **(float **)(*(int *)(param_1 + 0x30) + -0xc);
  if (*(int *)(param_1 + 0x2c) != *(int *)(param_1 + 0x30)) {
    pvVar1 = *(void **)(*(int *)(param_1 + 0x30) + -0xc);
    if (pvVar1 != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      operator_delete(pvVar1);
    }
    *(int *)(param_1 + 0x30) = *(int *)(param_1 + 0x30) + -0xc;
  }
  fVar2 = **(float **)(*(int *)(param_1 + 0x30) + -0xc);
  if (*(int *)(param_1 + 0x2c) != *(int *)(param_1 + 0x30)) {
    pvVar1 = *(void **)(*(int *)(param_1 + 0x30) + -0xc);
    if (pvVar1 != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      operator_delete(pvVar1);
    }
    *(int *)(param_1 + 0x30) = *(int *)(param_1 + 0x30) + -0xc;
  }
  fVar2 = local_14 / fVar2;
  local_20 = (float *)0x0;
  local_1c = 0;
  local_18 = 0;
  FUN_005870c0(4);
  *local_20 = fVar2;
  local_8 = 0;
  FUN_0040d910(&local_20);
  if (local_20 != (float *)0x0) {
                    /* WARNING: Subroutine does not return */
    operator_delete(local_20);
  }
  ExceptionList = local_10;
  return 0;
}


/* FUN_004060b0 @ 004060b0  kind=gamemisc  attributed-by=role:dtor-like  size=234 */

undefined4 FUN_004060b0(int param_1)

{
  float fVar1;
  void *pvVar2;
  bool bVar3;
  uint *local_20;
  undefined4 local_1c;
  undefined4 local_18;
  float local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006e14b8;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_14 = **(float **)(*(int *)(param_1 + 0x30) + -0xc);
  if (*(int *)(param_1 + 0x2c) != *(int *)(param_1 + 0x30)) {
    pvVar2 = *(void **)(*(int *)(param_1 + 0x30) + -0xc);
    if (pvVar2 != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      operator_delete(pvVar2);
    }
    *(int *)(param_1 + 0x30) = *(int *)(param_1 + 0x30) + -0xc;
  }
  fVar1 = **(float **)(*(int *)(param_1 + 0x30) + -0xc);
  if (*(int *)(param_1 + 0x2c) != *(int *)(param_1 + 0x30)) {
    pvVar2 = *(void **)(*(int *)(param_1 + 0x30) + -0xc);
    if (pvVar2 != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      operator_delete(pvVar2);
    }
    *(int *)(param_1 + 0x30) = *(int *)(param_1 + 0x30) + -0xc;
  }
  bVar3 = local_14 == fVar1;
  local_20 = (uint *)0x0;
  local_1c = 0;
  local_18 = 0;
  FUN_005870c0(4);
  *local_20 = (uint)bVar3;
  local_8 = 0;
  FUN_0040d910(&local_20);
  if (local_20 != (uint *)0x0) {
                    /* WARNING: Subroutine does not return */
    operator_delete(local_20);
  }
  ExceptionList = local_10;
  return 0;
}


/* FUN_004061e0 @ 004061e0  kind=gamemisc  attributed-by=role:dtor-like  size=224 */

undefined4 FUN_004061e0(int param_1)

{
  float fVar1;
  void *pvVar2;
  bool bVar3;
  uint *local_20;
  undefined4 local_1c;
  undefined4 local_18;
  float local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006e14b8;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_14 = **(float **)(*(int *)(param_1 + 0x30) + -0xc);
  if (*(int *)(param_1 + 0x2c) != *(int *)(param_1 + 0x30)) {
    pvVar2 = *(void **)(*(int *)(param_1 + 0x30) + -0xc);
    if (pvVar2 != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      operator_delete(pvVar2);
    }
    *(int *)(param_1 + 0x30) = *(int *)(param_1 + 0x30) + -0xc;
  }
  fVar1 = **(float **)(*(int *)(param_1 + 0x30) + -0xc);
  if (*(int *)(param_1 + 0x2c) != *(int *)(param_1 + 0x30)) {
    pvVar2 = *(void **)(*(int *)(param_1 + 0x30) + -0xc);
    if (pvVar2 != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      operator_delete(pvVar2);
    }
    *(int *)(param_1 + 0x30) = *(int *)(param_1 + 0x30) + -0xc;
  }
  bVar3 = fVar1 <= local_14;
  local_20 = (uint *)0x0;
  local_1c = 0;
  local_18 = 0;
  FUN_005870c0(4);
  *local_20 = (uint)bVar3;
  local_8 = 0;
  FUN_0040d910(&local_20);
  if (local_20 != (uint *)0x0) {
                    /* WARNING: Subroutine does not return */
    operator_delete(local_20);
  }
  ExceptionList = local_10;
  return 0;
}


/* FUN_00406300 @ 00406300  kind=gamemisc  attributed-by=role:dtor-like  size=224 */

undefined4 FUN_00406300(int param_1)

{
  float fVar1;
  void *pvVar2;
  bool bVar3;
  uint *local_20;
  undefined4 local_1c;
  undefined4 local_18;
  float local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006e14b8;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_14 = **(float **)(*(int *)(param_1 + 0x30) + -0xc);
  if (*(int *)(param_1 + 0x2c) != *(int *)(param_1 + 0x30)) {
    pvVar2 = *(void **)(*(int *)(param_1 + 0x30) + -0xc);
    if (pvVar2 != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      operator_delete(pvVar2);
    }
    *(int *)(param_1 + 0x30) = *(int *)(param_1 + 0x30) + -0xc;
  }
  fVar1 = **(float **)(*(int *)(param_1 + 0x30) + -0xc);
  if (*(int *)(param_1 + 0x2c) != *(int *)(param_1 + 0x30)) {
    pvVar2 = *(void **)(*(int *)(param_1 + 0x30) + -0xc);
    if (pvVar2 != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      operator_delete(pvVar2);
    }
    *(int *)(param_1 + 0x30) = *(int *)(param_1 + 0x30) + -0xc;
  }
  bVar3 = fVar1 < local_14;
  local_20 = (uint *)0x0;
  local_1c = 0;
  local_18 = 0;
  FUN_005870c0(4);
  *local_20 = (uint)bVar3;
  local_8 = 0;
  FUN_0040d910(&local_20);
  if (local_20 != (uint *)0x0) {
                    /* WARNING: Subroutine does not return */
    operator_delete(local_20);
  }
  ExceptionList = local_10;
  return 0;
}


/* FUN_00406420 @ 00406420  kind=gamemisc  attributed-by=role:dtor-like  size=220 */

undefined4 FUN_00406420(int param_1)

{
  float fVar1;
  void *pvVar2;
  bool bVar3;
  uint *local_20;
  undefined4 local_1c;
  undefined4 local_18;
  float local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006e14b8;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_14 = **(float **)(*(int *)(param_1 + 0x30) + -0xc);
  if (*(int *)(param_1 + 0x2c) != *(int *)(param_1 + 0x30)) {
    pvVar2 = *(void **)(*(int *)(param_1 + 0x30) + -0xc);
    if (pvVar2 != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      operator_delete(pvVar2);
    }
    *(int *)(param_1 + 0x30) = *(int *)(param_1 + 0x30) + -0xc;
  }
  fVar1 = **(float **)(*(int *)(param_1 + 0x30) + -0xc);
  if (*(int *)(param_1 + 0x2c) != *(int *)(param_1 + 0x30)) {
    pvVar2 = *(void **)(*(int *)(param_1 + 0x30) + -0xc);
    if (pvVar2 != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      operator_delete(pvVar2);
    }
    *(int *)(param_1 + 0x30) = *(int *)(param_1 + 0x30) + -0xc;
  }
  bVar3 = local_14 <= fVar1;
  local_20 = (uint *)0x0;
  local_1c = 0;
  local_18 = 0;
  FUN_005870c0(4);
  *local_20 = (uint)bVar3;
  local_8 = 0;
  FUN_0040d910(&local_20);
  if (local_20 != (uint *)0x0) {
                    /* WARNING: Subroutine does not return */
    operator_delete(local_20);
  }
  ExceptionList = local_10;
  return 0;
}


/* FUN_00406540 @ 00406540  kind=gamemisc  attributed-by=role:dtor-like  size=220 */

undefined4 FUN_00406540(int param_1)

{
  float fVar1;
  void *pvVar2;
  bool bVar3;
  uint *local_20;
  undefined4 local_1c;
  undefined4 local_18;
  float local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006e14b8;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_14 = **(float **)(*(int *)(param_1 + 0x30) + -0xc);
  if (*(int *)(param_1 + 0x2c) != *(int *)(param_1 + 0x30)) {
    pvVar2 = *(void **)(*(int *)(param_1 + 0x30) + -0xc);
    if (pvVar2 != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      operator_delete(pvVar2);
    }
    *(int *)(param_1 + 0x30) = *(int *)(param_1 + 0x30) + -0xc;
  }
  fVar1 = **(float **)(*(int *)(param_1 + 0x30) + -0xc);
  if (*(int *)(param_1 + 0x2c) != *(int *)(param_1 + 0x30)) {
    pvVar2 = *(void **)(*(int *)(param_1 + 0x30) + -0xc);
    if (pvVar2 != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      operator_delete(pvVar2);
    }
    *(int *)(param_1 + 0x30) = *(int *)(param_1 + 0x30) + -0xc;
  }
  bVar3 = local_14 < fVar1;
  local_20 = (uint *)0x0;
  local_1c = 0;
  local_18 = 0;
  FUN_005870c0(4);
  *local_20 = (uint)bVar3;
  local_8 = 0;
  FUN_0040d910(&local_20);
  if (local_20 != (uint *)0x0) {
                    /* WARNING: Subroutine does not return */
    operator_delete(local_20);
  }
  ExceptionList = local_10;
  return 0;
}


/* FUN_00406660 @ 00406660  kind=gamemisc  attributed-by=role:dtor-like  size=130 */

undefined4 FUN_00406660(undefined4 param_1,undefined4 param_2)

{
  undefined4 *local_1c;
  undefined4 local_18;
  undefined4 local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006e1488;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_1c = (undefined4 *)0x0;
  local_18 = 0;
  local_14 = 0;
  FUN_005870c0(4);
  *local_1c = param_2;
  local_8 = 0;
  FUN_0040d910(&local_1c);
  if (local_1c != (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    operator_delete(local_1c);
  }
  ExceptionList = local_10;
  return 0;
}


/* FUN_004066f0 @ 004066f0  kind=gamemisc  attributed-by=role:dtor-like  size=173 */

undefined4 FUN_004066f0(int param_1)

{
  float fVar1;
  void *pvVar2;
  int *local_1c;
  undefined4 local_18;
  undefined4 local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006e1598;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  fVar1 = **(float **)(*(int *)(param_1 + 0x30) + -0xc);
  if (*(int *)(param_1 + 0x2c) != *(int *)(param_1 + 0x30)) {
    pvVar2 = *(void **)(*(int *)(param_1 + 0x30) + -0xc);
    if (pvVar2 != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      operator_delete(pvVar2);
    }
    *(int *)(param_1 + 0x30) = *(int *)(param_1 + 0x30) + -0xc;
  }
  local_1c = (int *)0x0;
  local_18 = 0;
  local_14 = 0;
  FUN_005870c0(4);
  *local_1c = (int)fVar1;
  local_8 = 0;
  FUN_0040d910(&local_1c);
  if (local_1c != (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    operator_delete(local_1c);
  }
  ExceptionList = local_10;
  return 0;
}


/* FUN_004067c0 @ 004067c0  kind=gamemisc  attributed-by=role:dtor-like  size=212 */

undefined4 FUN_004067c0(int param_1)

{
  float fVar1;
  void *pvVar2;
  int *local_1c;
  undefined4 local_18;
  undefined4 local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006e1598;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  fVar1 = **(float **)(*(int *)(param_1 + 0x30) + -0xc);
  if (*(int *)(param_1 + 0x2c) != *(int *)(param_1 + 0x30)) {
    pvVar2 = *(void **)(*(int *)(param_1 + 0x30) + -0xc);
    if (pvVar2 != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      operator_delete(pvVar2);
    }
    *(int *)(param_1 + 0x30) = *(int *)(param_1 + 0x30) + -0xc;
  }
  local_1c = (int *)0x0;
  local_18 = 0;
  local_14 = 0;
  FUN_005870c0(4);
  *local_1c = (int)((fVar1 * 3.0 * 0.0142 * 10.0) / 0.426);
  local_8 = 0;
  FUN_0040d910(&local_1c);
  if (local_1c != (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    operator_delete(local_1c);
  }
  ExceptionList = local_10;
  return 0;
}


/* FUN_004068b0 @ 004068b0  kind=gamemisc  attributed-by=role:dtor-like  size=232 */

undefined4 FUN_004068b0(int param_1)

{
  void *pvVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int *local_20;
  undefined4 local_1c;
  undefined4 local_18;
  int *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006e14b8;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_14 = (int *)(param_1 + 0x2c);
  iVar5 = **(int **)(*(int *)(param_1 + 0x30) + -0xc);
  if (*local_14 != *(int *)(param_1 + 0x30)) {
    pvVar1 = *(void **)(*(int *)(param_1 + 0x30) + -0xc);
    if (pvVar1 != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      operator_delete(pvVar1);
    }
    *(int *)(param_1 + 0x30) = *(int *)(param_1 + 0x30) + -0xc;
  }
  iVar3 = 0;
  iVar4 = 0;
  iVar2 = 0;
  if (-1 < DAT_0076500c) {
    if (1 < DAT_0076500c + 1) {
      do {
        iVar3 = iVar3 + iVar2;
        iVar4 = iVar4 + 1 + iVar2;
        iVar2 = iVar2 + 2;
      } while (iVar2 <= DAT_0076500c + -1);
    }
    if (iVar2 <= DAT_0076500c) {
      iVar5 = iVar5 + iVar2;
    }
    iVar5 = iVar5 + iVar3 + iVar4;
  }
  iVar2 = DAT_0076500c * -2;
  local_20 = (int *)0x0;
  local_1c = 0;
  local_18 = 0;
  FUN_005870c0(4);
  *local_20 = (int)(float)(iVar5 + iVar2);
  local_8 = 0;
  FUN_0040d910(&local_20);
  if (local_20 != (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    operator_delete(local_20);
  }
  ExceptionList = local_10;
  return 0;
}


/* FUN_004069e0 @ 004069e0  kind=gamemisc  attributed-by=role:dtor-like  size=224 */

undefined4 FUN_004069e0(int param_1)

{
  void *pvVar1;
  float fVar2;
  float *local_20;
  undefined4 local_1c;
  undefined4 local_18;
  float local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006e14b8;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_14 = **(float **)(*(int *)(param_1 + 0x30) + -0xc);
  if (*(int *)(param_1 + 0x2c) != *(int *)(param_1 + 0x30)) {
    pvVar1 = *(void **)(*(int *)(param_1 + 0x30) + -0xc);
    if (pvVar1 != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      operator_delete(pvVar1);
    }
    *(int *)(param_1 + 0x30) = *(int *)(param_1 + 0x30) + -0xc;
  }
  fVar2 = **(float **)(*(int *)(param_1 + 0x30) + -0xc);
  if (*(int *)(param_1 + 0x2c) != *(int *)(param_1 + 0x30)) {
    pvVar1 = *(void **)(*(int *)(param_1 + 0x30) + -0xc);
    if (pvVar1 != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      operator_delete(pvVar1);
    }
    *(int *)(param_1 + 0x30) = *(int *)(param_1 + 0x30) + -0xc;
  }
  fVar2 = fVar2 * local_14;
  local_20 = (float *)0x0;
  local_1c = 0;
  local_18 = 0;
  FUN_005870c0(4);
  *local_20 = fVar2;
  local_8 = 0;
  FUN_0040d910(&local_20);
  if (local_20 != (float *)0x0) {
                    /* WARNING: Subroutine does not return */
    operator_delete(local_20);
  }
  ExceptionList = local_10;
  return 0;
}


/* FUN_00406b00 @ 00406b00  kind=gamemisc  attributed-by=role:dtor-like  size=234 */

undefined4 FUN_00406b00(int param_1)

{
  float fVar1;
  void *pvVar2;
  bool bVar3;
  uint *local_20;
  undefined4 local_1c;
  undefined4 local_18;
  float local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006e14b8;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_14 = **(float **)(*(int *)(param_1 + 0x30) + -0xc);
  if (*(int *)(param_1 + 0x2c) != *(int *)(param_1 + 0x30)) {
    pvVar2 = *(void **)(*(int *)(param_1 + 0x30) + -0xc);
    if (pvVar2 != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      operator_delete(pvVar2);
    }
    *(int *)(param_1 + 0x30) = *(int *)(param_1 + 0x30) + -0xc;
  }
  fVar1 = **(float **)(*(int *)(param_1 + 0x30) + -0xc);
  if (*(int *)(param_1 + 0x2c) != *(int *)(param_1 + 0x30)) {
    pvVar2 = *(void **)(*(int *)(param_1 + 0x30) + -0xc);
    if (pvVar2 != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      operator_delete(pvVar2);
    }
    *(int *)(param_1 + 0x30) = *(int *)(param_1 + 0x30) + -0xc;
  }
  bVar3 = local_14 != fVar1;
  local_20 = (uint *)0x0;
  local_1c = 0;
  local_18 = 0;
  FUN_005870c0(4);
  *local_20 = (uint)bVar3;
  local_8 = 0;
  FUN_0040d910(&local_20);
  if (local_20 != (uint *)0x0) {
                    /* WARNING: Subroutine does not return */
    operator_delete(local_20);
  }
  ExceptionList = local_10;
  return 0;
}


/* FUN_00406c30 @ 00406c30  kind=gamemisc  attributed-by=role:dtor-like  size=228 */

undefined4 FUN_00406c30(int param_1)

{
  void *pvVar1;
  float fVar2;
  float *local_20;
  undefined4 local_1c;
  undefined4 local_18;
  float local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006e14b8;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_14 = **(float **)(*(int *)(param_1 + 0x30) + -0xc);
  if (*(int *)(param_1 + 0x2c) != *(int *)(param_1 + 0x30)) {
    pvVar1 = *(void **)(*(int *)(param_1 + 0x30) + -0xc);
    if (pvVar1 != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      operator_delete(pvVar1);
    }
    *(int *)(param_1 + 0x30) = *(int *)(param_1 + 0x30) + -0xc;
  }
  fVar2 = **(float **)(*(int *)(param_1 + 0x30) + -0xc);
  if (*(int *)(param_1 + 0x2c) != *(int *)(param_1 + 0x30)) {
    pvVar1 = *(void **)(*(int *)(param_1 + 0x30) + -0xc);
    if (pvVar1 != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      operator_delete(pvVar1);
    }
    *(int *)(param_1 + 0x30) = *(int *)(param_1 + 0x30) + -0xc;
  }
  fVar2 = local_14 - fVar2;
  local_20 = (float *)0x0;
  local_1c = 0;
  local_18 = 0;
  FUN_005870c0(4);
  *local_20 = fVar2;
  local_8 = 0;
  FUN_0040d910(&local_20);
  if (local_20 != (float *)0x0) {
                    /* WARNING: Subroutine does not return */
    operator_delete(local_20);
  }
  ExceptionList = local_10;
  return 0;
}


/* FUN_00406f30 @ 00406f30  kind=gamemisc  attributed-by=role:dtor-like  size=211 */

undefined4 FUN_00406f30(int param_1)

{
  void *pvVar1;
  int iVar2;
  bool bVar3;
  uint *local_20;
  undefined4 local_1c;
  undefined4 local_18;
  int local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006e14b8;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_14 = **(int **)(*(int *)(param_1 + 0x30) + -0xc);
  if (*(int *)(param_1 + 0x2c) != *(int *)(param_1 + 0x30)) {
    pvVar1 = *(void **)(*(int *)(param_1 + 0x30) + -0xc);
    if (pvVar1 != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      operator_delete(pvVar1);
    }
    *(int *)(param_1 + 0x30) = *(int *)(param_1 + 0x30) + -0xc;
  }
  iVar2 = **(int **)(*(int *)(param_1 + 0x30) + -0xc);
  if (*(int *)(param_1 + 0x2c) != *(int *)(param_1 + 0x30)) {
    pvVar1 = *(void **)(*(int *)(param_1 + 0x30) + -0xc);
    if (pvVar1 != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      operator_delete(pvVar1);
    }
    *(int *)(param_1 + 0x30) = *(int *)(param_1 + 0x30) + -0xc;
  }
  bVar3 = iVar2 <= local_14;
  local_20 = (uint *)0x0;
  local_1c = 0;
  local_18 = 0;
  FUN_005870c0(4);
  *local_20 = (uint)bVar3;
  local_8 = 0;
  FUN_0040d910(&local_20);
  if (local_20 != (uint *)0x0) {
                    /* WARNING: Subroutine does not return */
    operator_delete(local_20);
  }
  ExceptionList = local_10;
  return 0;
}


/* FUN_00407040 @ 00407040  kind=gamemisc  attributed-by=role:dtor-like  size=250 */

undefined4 FUN_00407040(int param_1)

{
  int iVar1;
  void *pvVar2;
  int iVar3;
  uint *local_1c;
  undefined4 local_18;
  undefined4 local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006e1598;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  iVar1 = **(int **)(*(int *)(param_1 + 0x30) + -0xc);
  if (*(int *)(param_1 + 0x2c) != *(int *)(param_1 + 0x30)) {
    pvVar2 = *(void **)(*(int *)(param_1 + 0x30) + -0xc);
    if (pvVar2 != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      operator_delete(pvVar2);
    }
    *(int *)(param_1 + 0x30) = *(int *)(param_1 + 0x30) + -0xc;
  }
  iVar3 = **(int **)(*(int *)(param_1 + 0x30) + -0xc);
  if (*(int *)(param_1 + 0x2c) != *(int *)(param_1 + 0x30)) {
    pvVar2 = *(void **)(*(int *)(param_1 + 0x30) + -0xc);
    if (pvVar2 != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      operator_delete(pvVar2);
    }
    *(int *)(param_1 + 0x30) = *(int *)(param_1 + 0x30) + -0xc;
  }
  local_1c = (uint *)0x0;
  local_18 = 0;
  local_14 = 0;
  FUN_005870c0(4);
  *local_1c = (uint)(iVar3 <= iVar1);
  local_8 = 0;
  FUN_0040d910(&local_1c);
  if (local_1c != (uint *)0x0) {
                    /* WARNING: Subroutine does not return */
    operator_delete(local_1c);
  }
  ExceptionList = local_10;
  return 0;
}


/* FUN_00407170 @ 00407170  kind=gamemisc  attributed-by=role:dtor-like  size=225 */

undefined4 FUN_00407170(int param_1)

{
  int iVar1;
  void *pvVar2;
  int iVar3;
  uint uVar4;
  uint *local_1c;
  undefined4 local_18;
  undefined4 local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006e1598;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  iVar1 = **(int **)(*(int *)(param_1 + 0x30) + -0xc);
  if (*(int *)(param_1 + 0x2c) != *(int *)(param_1 + 0x30)) {
    pvVar2 = *(void **)(*(int *)(param_1 + 0x30) + -0xc);
    if (pvVar2 != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      operator_delete(pvVar2);
    }
    *(int *)(param_1 + 0x30) = *(int *)(param_1 + 0x30) + -0xc;
  }
  iVar3 = **(int **)(*(int *)(param_1 + 0x30) + -0xc);
  if (*(int *)(param_1 + 0x2c) != *(int *)(param_1 + 0x30)) {
    pvVar2 = *(void **)(*(int *)(param_1 + 0x30) + -0xc);
    if (pvVar2 != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      operator_delete(pvVar2);
    }
    *(int *)(param_1 + 0x30) = *(int *)(param_1 + 0x30) + -0xc;
  }
  if (iVar3 == iVar1) {
    uVar4 = 1;
  }
  else {
    uVar4 = (uint)(iVar3 == iVar1 || -iVar1 < -iVar3);
  }
  local_1c = (uint *)0x0;
  local_18 = 0;
  local_14 = 0;
  FUN_005870c0(4);
  *local_1c = uVar4;
  local_8 = 0;
  FUN_0040d910(&local_1c);
  if (local_1c != (uint *)0x0) {
                    /* WARNING: Subroutine does not return */
    operator_delete(local_1c);
  }
  ExceptionList = local_10;
  return 0;
}


/* FUN_00407290 @ 00407290  kind=gamemisc  attributed-by=role:dtor-like  size=259 */

undefined4 FUN_00407290(int param_1)

{
  int iVar1;
  void *pvVar2;
  int iVar3;
  uint uVar4;
  bool bVar5;
  uint *local_20;
  undefined4 local_1c;
  undefined4 local_18;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006e14b8;
  local_10 = ExceptionList;
  uVar4 = DAT_0076aa78 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  iVar1 = **(int **)(*(int *)(param_1 + 0x30) + -0xc);
  if (*(int *)(param_1 + 0x2c) != *(int *)(param_1 + 0x30)) {
    pvVar2 = *(void **)(*(int *)(param_1 + 0x30) + -0xc);
    if (pvVar2 != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      operator_delete(pvVar2);
    }
    *(int *)(param_1 + 0x30) = *(int *)(param_1 + 0x30) + -0xc;
  }
  iVar3 = **(int **)(*(int *)(param_1 + 0x30) + -0xc);
  if (*(int *)(param_1 + 0x2c) != *(int *)(param_1 + 0x30)) {
    pvVar2 = *(void **)(*(int *)(param_1 + 0x30) + -0xc);
    if (pvVar2 != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      operator_delete(pvVar2);
    }
    *(int *)(param_1 + 0x30) = *(int *)(param_1 + 0x30) + -0xc;
  }
  local_14 = (uint)(iVar1 - iVar3 < 0);
  if (DAT_00765000 != 0) {
    local_14 = (uint)(local_14 == 0);
    FUN_0040bb90(&local_14,DAT_00765000 + -1,uVar4);
  }
  bVar5 = local_14 != 0;
  local_20 = (uint *)0x0;
  local_1c = 0;
  local_18 = 0;
  FUN_005870c0(4);
  *local_20 = (uint)bVar5;
  local_8 = 0;
  FUN_0040d910(&local_20);
  if (local_20 != (uint *)0x0) {
                    /* WARNING: Subroutine does not return */
    operator_delete(local_20);
  }
  ExceptionList = local_10;
  return 0;
}


/* FUN_004073d0 @ 004073d0  kind=gamemisc  attributed-by=role:dtor-like  size=246 */

undefined4 FUN_004073d0(int param_1)

{
  void *pvVar1;
  int iVar2;
  int iVar3;
  uint *local_20;
  undefined4 local_1c;
  undefined4 local_18;
  int local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006e14b8;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_14 = **(int **)(*(int *)(param_1 + 0x30) + -0xc);
  if (*(int *)(param_1 + 0x2c) != *(int *)(param_1 + 0x30)) {
    pvVar1 = *(void **)(*(int *)(param_1 + 0x30) + -0xc);
    if (pvVar1 != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      operator_delete(pvVar1);
    }
    *(int *)(param_1 + 0x30) = *(int *)(param_1 + 0x30) + -0xc;
  }
  iVar3 = **(int **)(*(int *)(param_1 + 0x30) + -0xc);
  if (*(int *)(param_1 + 0x2c) != *(int *)(param_1 + 0x30)) {
    pvVar1 = *(void **)(*(int *)(param_1 + 0x30) + -0xc);
    if (pvVar1 != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      operator_delete(pvVar1);
    }
    *(int *)(param_1 + 0x30) = *(int *)(param_1 + 0x30) + -0xc;
  }
  if (local_14 == iVar3) {
    iVar2 = iVar3 * local_14;
    iVar3 = iVar3 - local_14;
    local_20 = (uint *)0x0;
    local_1c = 0;
    local_18 = 0;
    FUN_005870c0(4);
    *local_20 = (uint)(iVar3 * iVar2 < 1);
    local_8 = 0;
    FUN_0040d910(&local_20);
    if (local_20 != (uint *)0x0) {
                    /* WARNING: Subroutine does not return */
      operator_delete(local_20);
    }
  }
  else {
    FUN_00403030(iVar3 <= local_14);
  }
  ExceptionList = local_10;
  return 0;
}


/* FUN_00407570 @ 00407570  kind=gamemisc  attributed-by=role:dtor-like  size=158 */

undefined4 FUN_00407570(int param_1,int param_2)

{
  int iVar1;
  void *local_1c [3];
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006e1488;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  param_2 = (DAT_0076af00 + 1) * param_2;
  if (param_2 < 0) {
    iVar1 = *(int *)(param_1 + 0x2c) + (param_2 + 1) * -0xc;
  }
  else {
    iVar1 = *(int *)(param_1 + 0x2c) +
            (*(int *)(*(int *)(*(int *)(param_1 + 0x38) + 4) + 8) + param_2) * 0xc;
  }
  FUN_004034c0(iVar1);
  local_8 = 0;
  FUN_0040d910(local_1c);
  if (local_1c[0] != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    operator_delete(local_1c[0]);
  }
  ExceptionList = local_10;
  return 0;
}


/* FUN_004076d0 @ 004076d0  kind=gamemisc  attributed-by=role:dtor-like  size=235 */

undefined4 FUN_004076d0(int param_1)

{
  int iVar1;
  void *pvVar2;
  int iVar3;
  uint uVar4;
  uint *local_1c;
  undefined4 local_18;
  undefined4 local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006e1598;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  iVar1 = **(int **)(*(int *)(param_1 + 0x30) + -0xc);
  if (*(int *)(param_1 + 0x2c) != *(int *)(param_1 + 0x30)) {
    pvVar2 = *(void **)(*(int *)(param_1 + 0x30) + -0xc);
    if (pvVar2 != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      operator_delete(pvVar2);
    }
    *(int *)(param_1 + 0x30) = *(int *)(param_1 + 0x30) + -0xc;
  }
  iVar3 = **(int **)(*(int *)(param_1 + 0x30) + -0xc);
  if (*(int *)(param_1 + 0x2c) != *(int *)(param_1 + 0x30)) {
    pvVar2 = *(void **)(*(int *)(param_1 + 0x30) + -0xc);
    if (pvVar2 != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      operator_delete(pvVar2);
    }
    *(int *)(param_1 + 0x30) = *(int *)(param_1 + 0x30) + -0xc;
  }
  if (iVar1 == iVar3) {
    uVar4 = 0;
  }
  else {
    uVar4 = 0x7f;
    if (iVar1 < iVar3) {
      uVar4 = 0;
    }
  }
  local_1c = (uint *)0x0;
  local_18 = 0;
  local_14 = 0;
  FUN_005870c0(4);
  *local_1c = uVar4 >> 3 & 1;
  local_8 = 0;
  FUN_0040d910(&local_1c);
  if (local_1c != (uint *)0x0) {
                    /* WARNING: Subroutine does not return */
    operator_delete(local_1c);
  }
  ExceptionList = local_10;
  return 0;
}


/* FUN_004077f0 @ 004077f0  kind=gamemisc  attributed-by=role:dtor-like  size=229 */

undefined4 FUN_004077f0(int param_1)

{
  int iVar1;
  void *pvVar2;
  int iVar3;
  uint *local_1c;
  undefined4 local_18;
  undefined4 local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006e1598;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  iVar1 = **(int **)(*(int *)(param_1 + 0x30) + -0xc);
  if (*(int *)(param_1 + 0x2c) != *(int *)(param_1 + 0x30)) {
    pvVar2 = *(void **)(*(int *)(param_1 + 0x30) + -0xc);
    if (pvVar2 != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      operator_delete(pvVar2);
    }
    *(int *)(param_1 + 0x30) = *(int *)(param_1 + 0x30) + -0xc;
  }
  iVar3 = -3;
  if (iVar1 != -10) {
    iVar3 = iVar1 + 7;
  }
  iVar1 = **(int **)(*(int *)(param_1 + 0x30) + -0xc);
  if (*(int *)(param_1 + 0x2c) != *(int *)(param_1 + 0x30)) {
    pvVar2 = *(void **)(*(int *)(param_1 + 0x30) + -0xc);
    if (pvVar2 != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      operator_delete(pvVar2);
    }
    *(int *)(param_1 + 0x30) = *(int *)(param_1 + 0x30) + -0xc;
  }
  local_1c = (uint *)0x0;
  local_18 = 0;
  local_14 = 0;
  FUN_005870c0(4);
  *local_1c = (uint)(7 < iVar3 - iVar1);
  local_8 = 0;
  FUN_0040d910(&local_1c);
  if (local_1c != (uint *)0x0) {
                    /* WARNING: Subroutine does not return */
    operator_delete(local_1c);
  }
  ExceptionList = local_10;
  return 0;
}


/* FUN_00407910 @ 00407910  kind=gamemisc  attributed-by=role:dtor-like  size=246 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_00407910(int param_1)

{
  int iVar1;
  void *pvVar2;
  int iVar3;
  bool bVar4;
  uint *local_1c;
  double local_18;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006e1598;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  iVar1 = **(int **)(*(int *)(param_1 + 0x30) + -0xc);
  if (*(int *)(param_1 + 0x2c) != *(int *)(param_1 + 0x30)) {
    pvVar2 = *(void **)(*(int *)(param_1 + 0x30) + -0xc);
    if (pvVar2 != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      operator_delete(pvVar2);
    }
    *(int *)(param_1 + 0x30) = *(int *)(param_1 + 0x30) + -0xc;
  }
  iVar3 = **(int **)(*(int *)(param_1 + 0x30) + -0xc);
  local_18 = (double)iVar1 * _DAT_00765018;
  if (*(int *)(param_1 + 0x2c) != *(int *)(param_1 + 0x30)) {
    pvVar2 = *(void **)(*(int *)(param_1 + 0x30) + -0xc);
    if (pvVar2 != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      operator_delete(pvVar2);
    }
    *(int *)(param_1 + 0x30) = *(int *)(param_1 + 0x30) + -0xc;
  }
  local_1c = (uint *)0x0;
  bVar4 = (double)iVar3 * _DAT_00765020 < local_18;
  local_18 = 0.0;
  FUN_005870c0(4);
  *local_1c = (uint)bVar4;
  local_8 = 0;
  FUN_0040d910(&local_1c);
  if (local_1c != (uint *)0x0) {
                    /* WARNING: Subroutine does not return */
    operator_delete(local_1c);
  }
  ExceptionList = local_10;
  return 0;
}


/* FUN_00407a50 @ 00407a50  kind=gamemisc  attributed-by=role:dtor-like  size=233 */

undefined4 FUN_00407a50(int param_1,int param_2)

{
  void *pvVar1;
  bool bVar2;
  int iVar3;
  float10 fVar4;
  uint *local_20;
  undefined4 local_1c;
  undefined4 local_18;
  int local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006e14b8;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  switch(param_2) {
  case 3:
    FUN_00403030(0x20);
    ExceptionList = local_10;
    return 0xffffffff;
  case 4:
    iVar3 = FUN_00402f80();
    FUN_00403030(iVar3 * param_2);
    ExceptionList = local_10;
    return 0;
  case 5:
    fVar4 = (float10)FUN_00402fd0(DAT_0076aa78 ^ (uint)&stack0xfffffffc);
    FUN_00403030((float)fVar4 / 3.51);
    ExceptionList = local_10;
    return 0;
  case 6:
    fVar4 = (float10)FUN_00402fd0(DAT_0076aa78 ^ (uint)&stack0xfffffffc);
    FUN_00403030((float)fVar4 / 7.02);
    ExceptionList = local_10;
    return 0;
  }
  local_14 = **(int **)(*(int *)(param_1 + 0x30) + -0xc);
  if (*(int *)(param_1 + 0x2c) != *(int *)(param_1 + 0x30)) {
    pvVar1 = *(void **)(*(int *)(param_1 + 0x30) + -0xc);
    if (pvVar1 != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      operator_delete(pvVar1);
    }
    *(int *)(param_1 + 0x30) = *(int *)(param_1 + 0x30) + -0xc;
  }
  iVar3 = **(int **)(*(int *)(param_1 + 0x30) + -0xc);
  if (*(int *)(param_1 + 0x2c) != *(int *)(param_1 + 0x30)) {
    pvVar1 = *(void **)(*(int *)(param_1 + 0x30) + -0xc);
    if (pvVar1 != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      operator_delete(pvVar1);
    }
    *(int *)(param_1 + 0x30) = *(int *)(param_1 + 0x30) + -0xc;
  }
  bVar2 = iVar3 < local_14;
  local_20 = (uint *)0x0;
  local_1c = 0;
  local_18 = 0;
  FUN_005870c0(4);
  *local_20 = (uint)bVar2;
  local_8 = 0;
  FUN_0040d910(&local_20);
  if (local_20 == (uint *)0x0) {
    ExceptionList = local_10;
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  operator_delete(local_20);
}


/* FUN_00407c40 @ 00407c40  kind=gamemisc  attributed-by=role:dtor-like  size=217 */

undefined4 FUN_00407c40(int param_1)

{
  int iVar1;
  void *pvVar2;
  int iVar3;
  uint *local_1c;
  undefined4 local_18;
  undefined4 local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006e14e8;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  iVar1 = **(int **)(*(int *)(param_1 + 0x30) + -0xc);
  if (*(int *)(param_1 + 0x2c) != *(int *)(param_1 + 0x30)) {
    pvVar2 = *(void **)(*(int *)(param_1 + 0x30) + -0xc);
    if (pvVar2 != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      operator_delete(pvVar2);
    }
    *(int *)(param_1 + 0x30) = *(int *)(param_1 + 0x30) + -0xc;
  }
  iVar3 = **(int **)(*(int *)(param_1 + 0x30) + -0xc);
  if (*(int *)(param_1 + 0x2c) != *(int *)(param_1 + 0x30)) {
    pvVar2 = *(void **)(*(int *)(param_1 + 0x30) + -0xc);
    if (pvVar2 != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      operator_delete(pvVar2);
    }
    *(int *)(param_1 + 0x30) = *(int *)(param_1 + 0x30) + -0xc;
  }
  local_1c = (uint *)0x0;
  local_18 = 0;
  local_14 = 0;
  FUN_005870c0(4);
  *local_1c = (uint)(-3 < (iVar1 - (iVar3 + 2)) + -1);
  local_8 = 0;
  FUN_0040d910(&local_1c);
  if (local_1c != (uint *)0x0) {
                    /* WARNING: Subroutine does not return */
    operator_delete(local_1c);
  }
  ExceptionList = local_10;
  return 0;
}


/* FUN_00407e30 @ 00407e30  kind=gamemisc  attributed-by=role:dtor-like  size=147 */

undefined4 FUN_00407e30(undefined4 param_1,int param_2)

{
  int *local_1c;
  undefined4 local_18;
  undefined4 local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006e1488;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_1c = (int *)0x0;
  local_18 = 0;
  local_14 = 0;
  FUN_005870c0(4);
  *local_1c = (param_2 * 3) / 3;
  local_8 = 0;
  FUN_0040d910(&local_1c);
  if (local_1c != (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    operator_delete(local_1c);
  }
  ExceptionList = local_10;
  return 0;
}


/* FUN_00407f80 @ 00407f80  kind=gamemisc  attributed-by=role:dtor-like  size=238 */

void FUN_00407f80(undefined4 param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int *local_48;
  undefined4 local_44;
  undefined4 local_40;
  int aiStack_3c [10];
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006e1518;
  local_10 = ExceptionList;
  local_14 = DAT_0076aa78 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  iVar3 = 0;
  do {
    aiStack_3c[iVar3 * 3] = param_2;
    iVar1 = iVar3 + 1;
    iVar2 = iVar3;
    if (iVar1 == 3) {
      iVar2 = iVar3 + param_2 * 2;
    }
    aiStack_3c[iVar3 * 3 + 1] = iVar2 + param_2;
    if (iVar3 == 1) {
      iVar2 = param_2 * 2 + 1;
    }
    else {
      iVar2 = iVar3 * 2;
    }
    aiStack_3c[iVar3 * 3 + 2] = iVar2 + param_2;
    iVar3 = iVar1;
  } while (iVar1 < 3);
  local_48 = (int *)0x0;
  local_44 = 0;
  local_40 = 0;
  FUN_005870c0(4);
  *local_48 = (aiStack_3c[7] + -2) / 3;
  local_8 = 0;
  FUN_0040d910(&local_48);
  if (local_48 != (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    operator_delete(local_48);
  }
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}


/* FUN_00408080 @ 00408080  kind=gamemisc  attributed-by=role:dtor-like  size=180 */

undefined4 FUN_00408080(int param_1)

{
  int iVar1;
  void *pvVar2;
  float *local_1c;
  undefined4 local_18;
  undefined4 local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006e1598;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  iVar1 = **(int **)(*(int *)(param_1 + 0x30) + -0xc);
  if (*(int *)(param_1 + 0x2c) != *(int *)(param_1 + 0x30)) {
    pvVar2 = *(void **)(*(int *)(param_1 + 0x30) + -0xc);
    if (pvVar2 != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      operator_delete(pvVar2);
    }
    *(int *)(param_1 + 0x30) = *(int *)(param_1 + 0x30) + -0xc;
  }
  local_1c = (float *)0x0;
  local_18 = 0;
  local_14 = 0;
  FUN_005870c0(4);
  *local_1c = (float)iVar1;
  local_8 = 0;
  FUN_0040d910(&local_1c);
  if (local_1c != (float *)0x0) {
                    /* WARNING: Subroutine does not return */
    operator_delete(local_1c);
  }
  ExceptionList = local_10;
  return 0;
}


/* FUN_00408230 @ 00408230  kind=gamemisc  attributed-by=role:dtor-like  size=55 */

undefined4 FUN_00408230(int param_1,undefined4 param_2)

{
  int iVar1;
  void *pvVar2;
  undefined4 uVar3;
  
  iVar1 = **(int **)(*(int *)(param_1 + 0x30) + -0xc);
  if (*(int *)(param_1 + 0x2c) != *(int *)(param_1 + 0x30)) {
    pvVar2 = *(void **)(*(int *)(param_1 + 0x30) + -0xc);
    if (pvVar2 != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      operator_delete(pvVar2);
    }
    *(int *)(param_1 + 0x30) = *(int *)(param_1 + 0x30) + -0xc;
  }
  uVar3 = 0;
  if (iVar1 == 0) {
    uVar3 = param_2;
  }
  return uVar3;
}


/* FUN_00408280 @ 00408280  kind=gamemisc  attributed-by=role:dtor-like  size=82 */

int FUN_00408280(int param_1,int param_2)

{
  int iVar1;
  void *pvVar2;
  int iVar3;
  
  iVar1 = **(int **)(*(int *)(param_1 + 0x30) + -0xc);
  if (*(int *)(param_1 + 0x2c) != *(int *)(param_1 + 0x30)) {
    pvVar2 = *(void **)(*(int *)(param_1 + 0x30) + -0xc);
    if (pvVar2 != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      operator_delete(pvVar2);
    }
    *(int *)(param_1 + 0x30) = *(int *)(param_1 + 0x30) + -0xc;
  }
  iVar3 = 0;
  if (0 < iVar1) {
    do {
      if (DAT_00765078 != 0) {
        return 0;
      }
      param_2 = param_2 + iVar3;
      iVar3 = iVar3 + 1;
    } while (iVar3 < iVar1);
  }
  return param_2;
}


/* FUN_004082f0 @ 004082f0  kind=gamemisc  attributed-by=role:dtor-like  size=57 */

undefined4 FUN_004082f0(int param_1,undefined4 param_2)

{
  int iVar1;
  void *pvVar2;
  
  iVar1 = **(int **)(*(int *)(param_1 + 0x30) + -0xc);
  if (*(int *)(param_1 + 0x2c) != *(int *)(param_1 + 0x30)) {
    pvVar2 = *(void **)(*(int *)(param_1 + 0x30) + -0xc);
    if (pvVar2 != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      operator_delete(pvVar2);
    }
    *(int *)(param_1 + 0x30) = *(int *)(param_1 + 0x30) + -0xc;
  }
  if (iVar1 != 0) {
    param_2 = 0;
  }
  return param_2;
}


/* FUN_00408350 @ 00408350  kind=gamemisc  attributed-by=role:dtor-like  size=127 */

undefined4 FUN_00408350(int param_1,undefined4 param_2)

{
  int iVar1;
  void *pvVar2;
  
  iVar1 = **(int **)(*(int *)(param_1 + 0x30) + -0xc);
  if (*(int *)(param_1 + 0x2c) != *(int *)(param_1 + 0x30)) {
    pvVar2 = *(void **)(*(int *)(param_1 + 0x30) + -0xc);
    if (pvVar2 != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      operator_delete(pvVar2);
    }
    *(int *)(param_1 + 0x30) = *(int *)(param_1 + 0x30) + -0xc;
  }
  if (0.0 < ABS((float)iVar1 + 0.0 + (float)(iVar1 * 2) + (float)(iVar1 * 3))) {
    param_2 = 0;
  }
  return param_2;
}


/* FUN_004083f0 @ 004083f0  kind=gamemisc  attributed-by=role:dtor-like  size=80 */

int FUN_004083f0(int param_1,int param_2)

{
  void *pvVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = **(int **)(*(int *)(param_1 + 0x30) + -0xc);
  if (*(int *)(param_1 + 0x2c) != *(int *)(param_1 + 0x30)) {
    pvVar1 = *(void **)(*(int *)(param_1 + 0x30) + -0xc);
    if (pvVar1 != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      operator_delete(pvVar1);
    }
    *(int *)(param_1 + 0x30) = *(int *)(param_1 + 0x30) + -0xc;
  }
  if (iVar2 == 0) {
    return param_2;
  }
  iVar2 = 0;
  iVar3 = 0;
  do {
    if ("btn:check"[iVar3] == ':') {
      return 0;
    }
    iVar3 = iVar3 + 1;
    iVar2 = iVar2 + 1;
  } while (iVar3 < 9);
  return iVar2;
}


/* FUN_00408460 @ 00408460  kind=gamemisc  attributed-by=role:dtor-like  size=238 */

undefined4 FUN_00408460(int param_1)

{
  void *pvVar1;
  int iVar2;
  undefined4 uVar3;
  int *local_20;
  undefined4 local_1c;
  undefined4 local_18;
  int local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006e14b8;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_14 = **(int **)(*(int *)(param_1 + 0x30) + -0xc);
  if (*(int *)(param_1 + 0x2c) != *(int *)(param_1 + 0x30)) {
    pvVar1 = *(void **)(*(int *)(param_1 + 0x30) + -0xc);
    if (pvVar1 != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      operator_delete(pvVar1);
    }
    *(int *)(param_1 + 0x30) = *(int *)(param_1 + 0x30) + -0xc;
  }
  iVar2 = **(int **)(*(int *)(param_1 + 0x30) + -0xc);
  if (*(int *)(param_1 + 0x2c) != *(int *)(param_1 + 0x30)) {
    pvVar1 = *(void **)(*(int *)(param_1 + 0x30) + -0xc);
    if (pvVar1 != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      operator_delete(pvVar1);
    }
    *(int *)(param_1 + 0x30) = *(int *)(param_1 + 0x30) + -0xc;
  }
  if (local_14 < iVar2) {
    iVar2 = DAT_0076500c + -2;
    local_20 = (int *)0x0;
    local_1c = 0;
    local_18 = 0;
    FUN_005870c0(4);
    *local_20 = iVar2;
    local_8 = 0;
    FUN_0040d910(&local_20);
    if (local_20 != (int *)0x0) {
                    /* WARNING: Subroutine does not return */
      operator_delete(local_20);
    }
  }
  else {
    uVar3 = DAT_00765070;
    if (local_14 != iVar2) {
      uVar3 = 0;
    }
    FUN_00403030(uVar3);
  }
  ExceptionList = local_10;
  return 0;
}


/* FUN_00408a00 @ 00408a00  kind=gamemisc  attributed-by=role:dtor-like  size=216 */

undefined4 FUN_00408a00(int param_1)

{
  int iVar1;
  void *pvVar2;
  int iVar3;
  uint *local_1c;
  undefined4 local_18;
  undefined4 local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006e1598;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  iVar1 = **(int **)(*(int *)(param_1 + 0x30) + -0xc);
  if (*(int *)(param_1 + 0x2c) != *(int *)(param_1 + 0x30)) {
    pvVar2 = *(void **)(*(int *)(param_1 + 0x30) + -0xc);
    if (pvVar2 != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      operator_delete(pvVar2);
    }
    *(int *)(param_1 + 0x30) = *(int *)(param_1 + 0x30) + -0xc;
  }
  iVar3 = **(int **)(*(int *)(param_1 + 0x30) + -0xc);
  if (*(int *)(param_1 + 0x2c) != *(int *)(param_1 + 0x30)) {
    pvVar2 = *(void **)(*(int *)(param_1 + 0x30) + -0xc);
    if (pvVar2 != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      operator_delete(pvVar2);
    }
    *(int *)(param_1 + 0x30) = *(int *)(param_1 + 0x30) + -0xc;
  }
  local_1c = (uint *)0x0;
  local_18 = 0;
  local_14 = 0;
  FUN_005870c0(4);
  *local_1c = (uint)(iVar1 + 3 <= iVar3 + 3);
  local_8 = 0;
  FUN_0040d910(&local_1c);
  if (local_1c != (uint *)0x0) {
                    /* WARNING: Subroutine does not return */
    operator_delete(local_1c);
  }
  ExceptionList = local_10;
  return 0;
}


/* FUN_00408b10 @ 00408b10  kind=gamemisc  attributed-by=role:dtor-like  size=218 */

undefined4 FUN_00408b10(int param_1)

{
  int iVar1;
  void *pvVar2;
  int iVar3;
  uint *local_1c;
  undefined4 local_18;
  undefined4 local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006e1598;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  iVar1 = **(int **)(*(int *)(param_1 + 0x30) + -0xc);
  if (*(int *)(param_1 + 0x2c) != *(int *)(param_1 + 0x30)) {
    pvVar2 = *(void **)(*(int *)(param_1 + 0x30) + -0xc);
    if (pvVar2 != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      operator_delete(pvVar2);
    }
    *(int *)(param_1 + 0x30) = *(int *)(param_1 + 0x30) + -0xc;
  }
  iVar3 = **(int **)(*(int *)(param_1 + 0x30) + -0xc);
  if (*(int *)(param_1 + 0x2c) != *(int *)(param_1 + 0x30)) {
    pvVar2 = *(void **)(*(int *)(param_1 + 0x30) + -0xc);
    if (pvVar2 != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      operator_delete(pvVar2);
    }
    *(int *)(param_1 + 0x30) = *(int *)(param_1 + 0x30) + -0xc;
  }
  local_1c = (uint *)0x0;
  local_18 = 0;
  local_14 = 0;
  FUN_005870c0(4);
  *local_1c = (uint)((iVar1 - iVar3) * 10 < 0);
  local_8 = 0;
  FUN_0040d910(&local_1c);
  if (local_1c != (uint *)0x0) {
                    /* WARNING: Subroutine does not return */
    operator_delete(local_1c);
  }
  ExceptionList = local_10;
  return 0;
}


/* FUN_00408c20 @ 00408c20  kind=gamemisc  attributed-by=role:dtor-like  size=230 */

undefined4 FUN_00408c20(int param_1)

{
  int iVar1;
  void *pvVar2;
  int iVar3;
  bool bVar4;
  uint *local_1c;
  double local_18;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006e1598;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  iVar1 = **(int **)(*(int *)(param_1 + 0x30) + -0xc);
  if (*(int *)(param_1 + 0x2c) != *(int *)(param_1 + 0x30)) {
    pvVar2 = *(void **)(*(int *)(param_1 + 0x30) + -0xc);
    if (pvVar2 != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      operator_delete(pvVar2);
    }
    *(int *)(param_1 + 0x30) = *(int *)(param_1 + 0x30) + -0xc;
  }
  iVar3 = **(int **)(*(int *)(param_1 + 0x30) + -0xc);
  local_18 = (double)iVar1;
  if (*(int *)(param_1 + 0x2c) != *(int *)(param_1 + 0x30)) {
    pvVar2 = *(void **)(*(int *)(param_1 + 0x30) + -0xc);
    if (pvVar2 != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      operator_delete(pvVar2);
    }
    *(int *)(param_1 + 0x30) = *(int *)(param_1 + 0x30) + -0xc;
  }
  bVar4 = local_18 < (double)iVar3;
  local_1c = (uint *)0x0;
  local_18 = 0.0;
  FUN_005870c0(4);
  *local_1c = (uint)bVar4;
  local_8 = 0;
  FUN_0040d910(&local_1c);
  if (local_1c != (uint *)0x0) {
                    /* WARNING: Subroutine does not return */
    operator_delete(local_1c);
  }
  ExceptionList = local_10;
  return 0;
}


/* FUN_00408d50 @ 00408d50  kind=gamemisc  attributed-by=role:dtor-like  size=258 */

undefined4 FUN_00408d50(int param_1)

{
  void *pvVar1;
  int iVar2;
  int *local_20;
  undefined4 local_1c;
  undefined4 local_18;
  int local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006e14b8;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  iVar2 = **(int **)(*(int *)(param_1 + 0x30) + -0xc);
  if (*(int *)(param_1 + 0x2c) != *(int *)(param_1 + 0x30)) {
    pvVar1 = *(void **)(*(int *)(param_1 + 0x30) + -0xc);
    if (pvVar1 != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      operator_delete(pvVar1);
    }
    *(int *)(param_1 + 0x30) = *(int *)(param_1 + 0x30) + -0xc;
  }
  local_14 = **(int **)(*(int *)(param_1 + 0x30) + -0xc);
  if (*(int *)(param_1 + 0x2c) != *(int *)(param_1 + 0x30)) {
    pvVar1 = *(void **)(*(int *)(param_1 + 0x30) + -0xc);
    if (pvVar1 != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      operator_delete(pvVar1);
    }
    *(int *)(param_1 + 0x30) = *(int *)(param_1 + 0x30) + -0xc;
  }
  if (local_14 < iVar2) {
    iVar2 = DAT_0076af58 * iVar2 * 2;
    local_20 = (int *)0x0;
    local_1c = 0;
    local_18 = 0;
    FUN_005870c0(4);
    *local_20 = iVar2;
    local_8 = 0;
    FUN_0040d910(&local_20);
    if (local_20 != (int *)0x0) {
                    /* WARNING: Subroutine does not return */
      operator_delete(local_20);
    }
  }
  else {
    if (iVar2 == local_14) {
      iVar2 = -DAT_0076af58;
    }
    else {
      iVar2 = (int)(DAT_0076507c + (DAT_0076507c >> 0x1f & 0x7ffU)) >> 0xb;
    }
    FUN_00403030(iVar2);
  }
  ExceptionList = local_10;
  return 0;
}


/* FUN_00408eb0 @ 00408eb0  kind=gamemisc  attributed-by=role:dtor-like  size=211 */

undefined4 FUN_00408eb0(int param_1)

{
  void *pvVar1;
  int iVar2;
  bool bVar3;
  uint *local_20;
  undefined4 local_1c;
  undefined4 local_18;
  int local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006e14b8;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_14 = **(int **)(*(int *)(param_1 + 0x30) + -0xc);
  if (*(int *)(param_1 + 0x2c) != *(int *)(param_1 + 0x30)) {
    pvVar1 = *(void **)(*(int *)(param_1 + 0x30) + -0xc);
    if (pvVar1 != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      operator_delete(pvVar1);
    }
    *(int *)(param_1 + 0x30) = *(int *)(param_1 + 0x30) + -0xc;
  }
  iVar2 = **(int **)(*(int *)(param_1 + 0x30) + -0xc);
  if (*(int *)(param_1 + 0x2c) != *(int *)(param_1 + 0x30)) {
    pvVar1 = *(void **)(*(int *)(param_1 + 0x30) + -0xc);
    if (pvVar1 != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      operator_delete(pvVar1);
    }
    *(int *)(param_1 + 0x30) = *(int *)(param_1 + 0x30) + -0xc;
  }
  bVar3 = local_14 < iVar2;
  local_20 = (uint *)0x0;
  local_1c = 0;
  local_18 = 0;
  FUN_005870c0(4);
  *local_20 = (uint)bVar3;
  local_8 = 0;
  FUN_0040d910(&local_20);
  if (local_20 != (uint *)0x0) {
                    /* WARNING: Subroutine does not return */
    operator_delete(local_20);
  }
  ExceptionList = local_10;
  return 0;
}


/* FUN_004090b0 @ 004090b0  kind=gamemisc  attributed-by=role:dtor-like  size=208 */

undefined4 FUN_004090b0(int param_1)

{
  int iVar1;
  void *pvVar2;
  int iVar3;
  int *local_1c;
  undefined4 local_18;
  undefined4 local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006e1598;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  iVar1 = **(int **)(*(int *)(param_1 + 0x30) + -0xc);
  if (*(int *)(param_1 + 0x2c) != *(int *)(param_1 + 0x30)) {
    pvVar2 = *(void **)(*(int *)(param_1 + 0x30) + -0xc);
    if (pvVar2 != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      operator_delete(pvVar2);
    }
    *(int *)(param_1 + 0x30) = *(int *)(param_1 + 0x30) + -0xc;
  }
  iVar3 = **(int **)(*(int *)(param_1 + 0x30) + -0xc);
  if (*(int *)(param_1 + 0x2c) != *(int *)(param_1 + 0x30)) {
    pvVar2 = *(void **)(*(int *)(param_1 + 0x30) + -0xc);
    if (pvVar2 != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      operator_delete(pvVar2);
    }
    *(int *)(param_1 + 0x30) = *(int *)(param_1 + 0x30) + -0xc;
  }
  local_1c = (int *)0x0;
  local_18 = 0;
  local_14 = 0;
  FUN_005870c0(4);
  *local_1c = iVar1 % iVar3;
  local_8 = 0;
  FUN_0040d910(&local_1c);
  if (local_1c != (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    operator_delete(local_1c);
  }
  ExceptionList = local_10;
  return 0;
}


/* FUN_004091c0 @ 004091c0  kind=gamemisc  attributed-by=role:dtor-like  size=217 */

undefined4 FUN_004091c0(int param_1)

{
  int iVar1;
  void *pvVar2;
  int iVar3;
  int *local_1c;
  undefined4 local_18;
  undefined4 local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006e1598;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  iVar1 = **(int **)(*(int *)(param_1 + 0x30) + -0xc);
  if (*(int *)(param_1 + 0x2c) != *(int *)(param_1 + 0x30)) {
    pvVar2 = *(void **)(*(int *)(param_1 + 0x30) + -0xc);
    if (pvVar2 != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      operator_delete(pvVar2);
    }
    *(int *)(param_1 + 0x30) = *(int *)(param_1 + 0x30) + -0xc;
  }
  iVar3 = **(int **)(*(int *)(param_1 + 0x30) + -0xc);
  if (*(int *)(param_1 + 0x2c) != *(int *)(param_1 + 0x30)) {
    pvVar2 = *(void **)(*(int *)(param_1 + 0x30) + -0xc);
    if (pvVar2 != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      operator_delete(pvVar2);
    }
    *(int *)(param_1 + 0x30) = *(int *)(param_1 + 0x30) + -0xc;
  }
  local_1c = (int *)0x0;
  local_18 = 0;
  local_14 = 0;
  FUN_005870c0(4);
  *local_1c = ((iVar1 * 2) / 2) * iVar3;
  local_8 = 0;
  FUN_0040d910(&local_1c);
  if (local_1c != (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    operator_delete(local_1c);
  }
  ExceptionList = local_10;
  return 0;
}


/* FUN_004092e0 @ 004092e0  kind=gamemisc  attributed-by=role:dtor-like  size=204 */

undefined4 FUN_004092e0(int param_1)

{
  int iVar1;
  void *pvVar2;
  int iVar3;
  int *local_1c;
  undefined4 local_18;
  undefined4 local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006e1598;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  iVar1 = **(int **)(*(int *)(param_1 + 0x30) + -0xc);
  if (*(int *)(param_1 + 0x2c) != *(int *)(param_1 + 0x30)) {
    pvVar2 = *(void **)(*(int *)(param_1 + 0x30) + -0xc);
    if (pvVar2 != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      operator_delete(pvVar2);
    }
    *(int *)(param_1 + 0x30) = *(int *)(param_1 + 0x30) + -0xc;
  }
  iVar3 = **(int **)(*(int *)(param_1 + 0x30) + -0xc);
  if (*(int *)(param_1 + 0x2c) != *(int *)(param_1 + 0x30)) {
    pvVar2 = *(void **)(*(int *)(param_1 + 0x30) + -0xc);
    if (pvVar2 != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      operator_delete(pvVar2);
    }
    *(int *)(param_1 + 0x30) = *(int *)(param_1 + 0x30) + -0xc;
  }
  local_1c = (int *)0x0;
  local_18 = 0;
  local_14 = 0;
  FUN_005870c0(4);
  *local_1c = iVar3 * iVar1;
  local_8 = 0;
  FUN_0040d910(&local_1c);
  if (local_1c != (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    operator_delete(local_1c);
  }
  ExceptionList = local_10;
  return 0;
}


/* FUN_004093e0 @ 004093e0  kind=gamemisc  attributed-by=role:dtor-like  size=223 */

undefined4 FUN_004093e0(int param_1)

{
  void *pvVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int *local_1c;
  undefined4 local_18;
  undefined4 local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006e1598;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  iVar3 = **(int **)(*(int *)(param_1 + 0x30) + -0xc);
  if (*(int *)(param_1 + 0x2c) != *(int *)(param_1 + 0x30)) {
    pvVar1 = *(void **)(*(int *)(param_1 + 0x30) + -0xc);
    if (pvVar1 != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      operator_delete(pvVar1);
    }
    *(int *)(param_1 + 0x30) = *(int *)(param_1 + 0x30) + -0xc;
  }
  iVar2 = **(int **)(*(int *)(param_1 + 0x30) + -0xc);
  if (*(int *)(param_1 + 0x2c) != *(int *)(param_1 + 0x30)) {
    pvVar1 = *(void **)(*(int *)(param_1 + 0x30) + -0xc);
    if (pvVar1 != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      operator_delete(pvVar1);
    }
    *(int *)(param_1 + 0x30) = *(int *)(param_1 + 0x30) + -0xc;
  }
  iVar4 = DAT_0076502c + 1;
  iVar3 = DAT_00765010 + iVar3 + -1;
  local_1c = (int *)0x0;
  local_18 = 0;
  local_14 = 0;
  FUN_005870c0(4);
  *local_1c = (iVar4 + iVar2) * iVar3;
  local_8 = 0;
  FUN_0040d910(&local_1c);
  if (local_1c != (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    operator_delete(local_1c);
  }
  ExceptionList = local_10;
  return 0;
}


/* FUN_00409500 @ 00409500  kind=gamemisc  attributed-by=role:dtor-like  size=222 */

undefined4 FUN_00409500(int param_1)

{
  int iVar1;
  void *pvVar2;
  int iVar3;
  uint *local_1c;
  undefined4 local_18;
  undefined4 local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006e1598;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  iVar1 = **(int **)(*(int *)(param_1 + 0x30) + -0xc);
  if (*(int *)(param_1 + 0x2c) != *(int *)(param_1 + 0x30)) {
    pvVar2 = *(void **)(*(int *)(param_1 + 0x30) + -0xc);
    if (pvVar2 != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      operator_delete(pvVar2);
    }
    *(int *)(param_1 + 0x30) = *(int *)(param_1 + 0x30) + -0xc;
  }
  iVar3 = **(int **)(*(int *)(param_1 + 0x30) + -0xc);
  if (*(int *)(param_1 + 0x2c) != *(int *)(param_1 + 0x30)) {
    pvVar2 = *(void **)(*(int *)(param_1 + 0x30) + -0xc);
    if (pvVar2 != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      operator_delete(pvVar2);
    }
    *(int *)(param_1 + 0x30) = *(int *)(param_1 + 0x30) + -0xc;
  }
  iVar3 = iVar3 - DAT_00765014;
  local_1c = (uint *)0x0;
  local_18 = 0;
  local_14 = 0;
  FUN_005870c0(4);
  *local_1c = (uint)((iVar1 + 8) - iVar3 != 0xc);
  local_8 = 0;
  FUN_0040d910(&local_1c);
  if (local_1c != (uint *)0x0) {
                    /* WARNING: Subroutine does not return */
    operator_delete(local_1c);
  }
  ExceptionList = local_10;
  return 0;
}


/* FUN_00409620 @ 00409620  kind=gamemisc  attributed-by=role:dtor-like  size=212 */

undefined4 FUN_00409620(int param_1)

{
  void *pvVar1;
  int iVar2;
  int iVar3;
  int *local_1c;
  undefined4 local_18;
  undefined4 local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006e1598;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  iVar3 = **(int **)(*(int *)(param_1 + 0x30) + -0xc);
  if (*(int *)(param_1 + 0x2c) != *(int *)(param_1 + 0x30)) {
    pvVar1 = *(void **)(*(int *)(param_1 + 0x30) + -0xc);
    if (pvVar1 != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      operator_delete(pvVar1);
    }
    *(int *)(param_1 + 0x30) = *(int *)(param_1 + 0x30) + -0xc;
  }
  iVar2 = **(int **)(*(int *)(param_1 + 0x30) + -0xc);
  if (*(int *)(param_1 + 0x2c) != *(int *)(param_1 + 0x30)) {
    pvVar1 = *(void **)(*(int *)(param_1 + 0x30) + -0xc);
    if (pvVar1 != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      operator_delete(pvVar1);
    }
    *(int *)(param_1 + 0x30) = *(int *)(param_1 + 0x30) + -0xc;
  }
  if (iVar2 != iVar3) {
    iVar3 = iVar2 + -1;
  }
  local_1c = (int *)0x0;
  local_18 = 0;
  local_14 = 0;
  FUN_005870c0(4);
  *local_1c = iVar2 - iVar3;
  local_8 = 0;
  FUN_0040d910(&local_1c);
  if (local_1c != (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    operator_delete(local_1c);
  }
  ExceptionList = local_10;
  return 0;
}


/* FUN_00409730 @ 00409730  kind=gamemisc  attributed-by=role:dtor-like  size=241 */

undefined4 FUN_00409730(int param_1)

{
  void *pvVar1;
  int iVar2;
  bool bVar3;
  uint *local_24;
  undefined4 local_20;
  undefined4 local_1c;
  int local_18;
  int local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006e15c8;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_14 = FUN_0040bef0("frame:text",param_1,DAT_0076aa78 ^ (uint)&stack0xfffffffc);
  local_18 = **(int **)(*(int *)(param_1 + 0x30) + -0xc);
  if (*(int *)(param_1 + 0x2c) != *(int *)(param_1 + 0x30)) {
    pvVar1 = *(void **)(*(int *)(param_1 + 0x30) + -0xc);
    if (pvVar1 != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      operator_delete(pvVar1);
    }
    *(int *)(param_1 + 0x30) = *(int *)(param_1 + 0x30) + -0xc;
  }
  iVar2 = **(int **)(*(int *)(param_1 + 0x30) + -0xc);
  if (*(int *)(param_1 + 0x2c) != *(int *)(param_1 + 0x30)) {
    pvVar1 = *(void **)(*(int *)(param_1 + 0x30) + -0xc);
    if (pvVar1 != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      operator_delete(pvVar1);
    }
    *(int *)(param_1 + 0x30) = *(int *)(param_1 + 0x30) + -0xc;
  }
  if (local_18 == iVar2) {
    local_14 = local_14 + 1;
  }
  bVar3 = local_14 == 0;
  local_24 = (uint *)0x0;
  local_20 = 0;
  local_1c = 0;
  FUN_005870c0(4);
  *local_24 = (uint)bVar3;
  local_8 = 0;
  FUN_0040d910(&local_24);
  if (local_24 != (uint *)0x0) {
                    /* WARNING: Subroutine does not return */
    operator_delete(local_24);
  }
  ExceptionList = local_10;
  return 0;
}


/* FUN_00409860 @ 00409860  kind=gamemisc  attributed-by=role:dtor-like  size=217 */

undefined4 FUN_00409860(int param_1)

{
  int iVar1;
  void *pvVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  uint *local_1c;
  undefined4 local_18;
  undefined4 local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006e1598;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  iVar1 = **(int **)(*(int *)(param_1 + 0x30) + -0xc);
  if (*(int *)(param_1 + 0x2c) != *(int *)(param_1 + 0x30)) {
    pvVar2 = *(void **)(*(int *)(param_1 + 0x30) + -0xc);
    if (pvVar2 != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      operator_delete(pvVar2);
    }
    *(int *)(param_1 + 0x30) = *(int *)(param_1 + 0x30) + -0xc;
  }
  iVar3 = **(int **)(*(int *)(param_1 + 0x30) + -0xc);
  if (*(int *)(param_1 + 0x2c) != *(int *)(param_1 + 0x30)) {
    pvVar2 = *(void **)(*(int *)(param_1 + 0x30) + -0xc);
    if (pvVar2 != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      operator_delete(pvVar2);
    }
    *(int *)(param_1 + 0x30) = *(int *)(param_1 + 0x30) + -0xc;
  }
  uVar4 = iVar1 - iVar3;
  uVar5 = (int)uVar4 >> 0x1f;
  uVar4 = uVar4 ^ uVar5;
  local_1c = (uint *)0x0;
  local_18 = 0;
  local_14 = 0;
  FUN_005870c0(4);
  *local_1c = (uint)(uVar4 != uVar5 && -1 < (int)(uVar4 - uVar5));
  local_8 = 0;
  FUN_0040d910(&local_1c);
  if (local_1c != (uint *)0x0) {
                    /* WARNING: Subroutine does not return */
    operator_delete(local_1c);
  }
  ExceptionList = local_10;
  return 0;
}


/* FUN_00409970 @ 00409970  kind=gamemisc  attributed-by=role:dtor-like  size=215 */

undefined4 FUN_00409970(int param_1)

{
  int iVar1;
  void *pvVar2;
  int iVar3;
  uint *local_1c;
  undefined4 local_18;
  undefined4 local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006e1598;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  iVar1 = **(int **)(*(int *)(param_1 + 0x30) + -0xc);
  if (*(int *)(param_1 + 0x2c) != *(int *)(param_1 + 0x30)) {
    pvVar2 = *(void **)(*(int *)(param_1 + 0x30) + -0xc);
    if (pvVar2 != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      operator_delete(pvVar2);
    }
    *(int *)(param_1 + 0x30) = *(int *)(param_1 + 0x30) + -0xc;
  }
  iVar3 = **(int **)(*(int *)(param_1 + 0x30) + -0xc);
  if (*(int *)(param_1 + 0x2c) != *(int *)(param_1 + 0x30)) {
    pvVar2 = *(void **)(*(int *)(param_1 + 0x30) + -0xc);
    if (pvVar2 != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      operator_delete(pvVar2);
    }
    *(int *)(param_1 + 0x30) = *(int *)(param_1 + 0x30) + -0xc;
  }
  local_1c = (uint *)0x0;
  local_18 = 0;
  local_14 = 0;
  FUN_005870c0(4);
  *local_1c = (uint)(iVar3 != iVar1);
  local_8 = 0;
  FUN_0040d910(&local_1c);
  if (local_1c != (uint *)0x0) {
                    /* WARNING: Subroutine does not return */
    operator_delete(local_1c);
  }
  ExceptionList = local_10;
  return 0;
}


/* FUN_00409a80 @ 00409a80  kind=gamemisc  attributed-by=role:dtor-like  size=175 */

undefined4 FUN_00409a80(int param_1)

{
  int iVar1;
  void *pvVar2;
  uint *local_1c;
  undefined4 local_18;
  undefined4 local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006e1598;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  iVar1 = **(int **)(*(int *)(param_1 + 0x30) + -0xc);
  if (*(int *)(param_1 + 0x2c) != *(int *)(param_1 + 0x30)) {
    pvVar2 = *(void **)(*(int *)(param_1 + 0x30) + -0xc);
    if (pvVar2 != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      operator_delete(pvVar2);
    }
    *(int *)(param_1 + 0x30) = *(int *)(param_1 + 0x30) + -0xc;
  }
  local_1c = (uint *)0x0;
  local_18 = 0;
  local_14 = 0;
  FUN_005870c0(4);
  *local_1c = (uint)(iVar1 == 0);
  local_8 = 0;
  FUN_0040d910(&local_1c);
  if (local_1c != (uint *)0x0) {
                    /* WARNING: Subroutine does not return */
    operator_delete(local_1c);
  }
  ExceptionList = local_10;
  return 0;
}


/* FUN_00409b50 @ 00409b50  kind=gamemisc  attributed-by=role:dtor-like  size=180 */

undefined4 FUN_00409b50(int param_1)

{
  void *pvVar1;
  int iVar2;
  uint *local_1c;
  undefined4 local_18;
  undefined4 local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006e1598;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  iVar2 = **(int **)(*(int *)(param_1 + 0x30) + -0xc);
  if (*(int *)(param_1 + 0x2c) != *(int *)(param_1 + 0x30)) {
    pvVar1 = *(void **)(*(int *)(param_1 + 0x30) + -0xc);
    if (pvVar1 != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      operator_delete(pvVar1);
    }
    *(int *)(param_1 + 0x30) = *(int *)(param_1 + 0x30) + -0xc;
  }
  iVar2 = DAT_00765014 * iVar2;
  local_1c = (uint *)0x0;
  local_18 = 0;
  local_14 = 0;
  FUN_005870c0(4);
  *local_1c = (uint)(iVar2 == 0);
  local_8 = 0;
  FUN_0040d910(&local_1c);
  if (local_1c != (uint *)0x0) {
                    /* WARNING: Subroutine does not return */
    operator_delete(local_1c);
  }
  ExceptionList = local_10;
  return 0;
}


/* FUN_00409c20 @ 00409c20  kind=gamemisc  attributed-by=role:dtor-like  size=179 */

undefined4 FUN_00409c20(int param_1)

{
  void *pvVar1;
  uint uVar2;
  uint uVar3;
  uint *local_1c;
  undefined4 local_18;
  undefined4 local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006e1598;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  uVar2 = **(uint **)(*(int *)(param_1 + 0x30) + -0xc);
  if (*(int *)(param_1 + 0x2c) != *(int *)(param_1 + 0x30)) {
    pvVar1 = *(void **)(*(int *)(param_1 + 0x30) + -0xc);
    if (pvVar1 != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      operator_delete(pvVar1);
    }
    *(int *)(param_1 + 0x30) = *(int *)(param_1 + 0x30) + -0xc;
  }
  uVar3 = (int)uVar2 >> 0x1f;
  uVar2 = uVar2 ^ uVar3;
  local_1c = (uint *)0x0;
  local_18 = 0;
  local_14 = 0;
  FUN_005870c0(4);
  *local_1c = (uint)(uVar2 == uVar3 || (int)(uVar2 - uVar3) < 0);
  local_8 = 0;
  FUN_0040d910(&local_1c);
  if (local_1c != (uint *)0x0) {
                    /* WARNING: Subroutine does not return */
    operator_delete(local_1c);
  }
  ExceptionList = local_10;
  return 0;
}


/* FUN_00409cf0 @ 00409cf0  kind=gamemisc  attributed-by=role:dtor-like  size=201 */

undefined4 FUN_00409cf0(int param_1)

{
  int iVar1;
  void *pvVar2;
  bool bVar3;
  bool bVar4;
  uint *local_1c;
  undefined4 local_18;
  undefined4 local_14;
  void *local_10;
  undefined1 *puStack_c;
  uint local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006e1600;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  iVar1 = **(int **)(*(int *)(param_1 + 0x30) + -0xc);
  if (*(int *)(param_1 + 0x2c) != *(int *)(param_1 + 0x30)) {
    pvVar2 = *(void **)(*(int *)(param_1 + 0x30) + -0xc);
    if (pvVar2 != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      operator_delete(pvVar2);
    }
    *(int *)(param_1 + 0x30) = *(int *)(param_1 + 0x30) + -0xc;
  }
  local_1c = (uint *)0x0;
  local_18 = 0;
  local_14 = 0;
  bVar4 = iVar1 != 0;
  if (bVar4) {
    FUN_005870c0(4);
    *local_1c = 0;
  }
  else {
    bVar3 = 0 < DAT_00765028;
    FUN_005870c0(4);
    *local_1c = (uint)bVar3;
  }
  local_8 = (uint)bVar4;
  FUN_0040d910(&local_1c);
  if (local_1c != (uint *)0x0) {
                    /* WARNING: Subroutine does not return */
    operator_delete(local_1c);
  }
  ExceptionList = local_10;
  return 0;
}


/* FUN_00409de0 @ 00409de0  kind=gamemisc  attributed-by=role:dtor-like  size=173 */

undefined4 FUN_00409de0(int param_1)

{
  int iVar1;
  void *pvVar2;
  uint *local_1c;
  undefined4 local_18;
  undefined4 local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006e1598;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  iVar1 = **(int **)(*(int *)(param_1 + 0x30) + -0xc);
  if (*(int *)(param_1 + 0x2c) != *(int *)(param_1 + 0x30)) {
    pvVar2 = *(void **)(*(int *)(param_1 + 0x30) + -0xc);
    if (pvVar2 != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      operator_delete(pvVar2);
    }
    *(int *)(param_1 + 0x30) = *(int *)(param_1 + 0x30) + -0xc;
  }
  local_1c = (uint *)0x0;
  local_18 = 0;
  local_14 = 0;
  FUN_005870c0(4);
  *local_1c = (uint)(iVar1 * iVar1 == 0);
  local_8 = 0;
  FUN_0040d910(&local_1c);
  if (local_1c != (uint *)0x0) {
                    /* WARNING: Subroutine does not return */
    operator_delete(local_1c);
  }
  ExceptionList = local_10;
  return 0;
}


/* FUN_00409eb0 @ 00409eb0  kind=gamemisc  attributed-by=role:dtor-like  size=219 */

undefined4 FUN_00409eb0(int param_1)

{
  int iVar1;
  void *pvVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 *local_1c;
  undefined4 local_18;
  undefined4 local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006e1598;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  iVar1 = **(int **)(*(int *)(param_1 + 0x30) + -0xc);
  if (*(int *)(param_1 + 0x2c) != *(int *)(param_1 + 0x30)) {
    pvVar2 = *(void **)(*(int *)(param_1 + 0x30) + -0xc);
    if (pvVar2 != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      operator_delete(pvVar2);
    }
    *(int *)(param_1 + 0x30) = *(int *)(param_1 + 0x30) + -0xc;
  }
  iVar3 = **(int **)(*(int *)(param_1 + 0x30) + -0xc);
  if (*(int *)(param_1 + 0x2c) != *(int *)(param_1 + 0x30)) {
    pvVar2 = *(void **)(*(int *)(param_1 + 0x30) + -0xc);
    if (pvVar2 != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      operator_delete(pvVar2);
    }
    *(int *)(param_1 + 0x30) = *(int *)(param_1 + 0x30) + -0xc;
  }
  if ((iVar1 == 0) && (iVar3 == 0)) {
    uVar4 = 0;
  }
  else {
    uVar4 = 1;
  }
  local_1c = (undefined4 *)0x0;
  local_18 = 0;
  local_14 = 0;
  FUN_005870c0(4);
  *local_1c = uVar4;
  local_8 = 0;
  FUN_0040d910(&local_1c);
  if (local_1c != (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    operator_delete(local_1c);
  }
  ExceptionList = local_10;
  return 0;
}


/* FUN_00409fc0 @ 00409fc0  kind=gamemisc  attributed-by=role:dtor-like  size=226 */

undefined4 FUN_00409fc0(int param_1)

{
  uint uVar1;
  void *pvVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint *local_1c;
  undefined4 local_18;
  undefined4 local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006e1598;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  uVar1 = **(uint **)(*(int *)(param_1 + 0x30) + -0xc);
  if (*(int *)(param_1 + 0x2c) != *(int *)(param_1 + 0x30)) {
    pvVar2 = *(void **)(*(int *)(param_1 + 0x30) + -0xc);
    if (pvVar2 != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      operator_delete(pvVar2);
    }
    *(int *)(param_1 + 0x30) = *(int *)(param_1 + 0x30) + -0xc;
  }
  uVar3 = **(uint **)(*(int *)(param_1 + 0x30) + -0xc);
  if (*(int *)(param_1 + 0x2c) != *(int *)(param_1 + 0x30)) {
    pvVar2 = *(void **)(*(int *)(param_1 + 0x30) + -0xc);
    if (pvVar2 != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      operator_delete(pvVar2);
    }
    *(int *)(param_1 + 0x30) = *(int *)(param_1 + 0x30) + -0xc;
  }
  uVar4 = (int)uVar3 >> 0x1f;
  uVar5 = (int)uVar1 >> 0x1f;
  local_1c = (uint *)0x0;
  local_18 = 0;
  local_14 = 0;
  FUN_005870c0(4);
  *local_1c = (uint)(0 < (int)(((uVar3 ^ uVar4) - uVar4) + ((uVar1 ^ uVar5) - uVar5)));
  local_8 = 0;
  FUN_0040d910(&local_1c);
  if (local_1c != (uint *)0x0) {
                    /* WARNING: Subroutine does not return */
    operator_delete(local_1c);
  }
  ExceptionList = local_10;
  return 0;
}


/* FUN_0040a0e0 @ 0040a0e0  kind=gamemisc  attributed-by=role:dtor-like  size=224 */

undefined4 FUN_0040a0e0(int param_1)

{
  int iVar1;
  void *pvVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 *local_1c;
  undefined4 local_18;
  undefined4 local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006e1598;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  iVar1 = **(int **)(*(int *)(param_1 + 0x30) + -0xc);
  if (*(int *)(param_1 + 0x2c) != *(int *)(param_1 + 0x30)) {
    pvVar2 = *(void **)(*(int *)(param_1 + 0x30) + -0xc);
    if (pvVar2 != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      operator_delete(pvVar2);
    }
    *(int *)(param_1 + 0x30) = *(int *)(param_1 + 0x30) + -0xc;
  }
  iVar3 = **(int **)(*(int *)(param_1 + 0x30) + -0xc);
  if (*(int *)(param_1 + 0x2c) != *(int *)(param_1 + 0x30)) {
    pvVar2 = *(void **)(*(int *)(param_1 + 0x30) + -0xc);
    if (pvVar2 != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      operator_delete(pvVar2);
    }
    *(int *)(param_1 + 0x30) = *(int *)(param_1 + 0x30) + -0xc;
  }
  uVar4 = 0;
  if (iVar1 == 0) {
    if (iVar3 != 0) {
      uVar4 = 1;
    }
  }
  else {
    uVar4 = 1;
  }
  local_1c = (undefined4 *)0x0;
  local_18 = 0;
  local_14 = 0;
  FUN_005870c0(4);
  *local_1c = uVar4;
  local_8 = 0;
  FUN_0040d910(&local_1c);
  if (local_1c != (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    operator_delete(local_1c);
  }
  ExceptionList = local_10;
  return 0;
}


/* FUN_0040a200 @ 0040a200  kind=gamemisc  attributed-by=role:dtor-like  size=279 */

/* WARNING: Removing unreachable block (ram,0x0040a330) */

undefined4 FUN_0040a200(int param_1)

{
  void *pvVar1;
  undefined4 uVar2;
  undefined4 *local_20;
  undefined4 local_1c;
  undefined4 local_18;
  int local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006e1630;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_14 = **(int **)(*(int *)(param_1 + 0x30) + -0xc);
  if (*(int *)(param_1 + 0x2c) != *(int *)(param_1 + 0x30)) {
    pvVar1 = *(void **)(*(int *)(param_1 + 0x30) + -0xc);
    if (pvVar1 != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      operator_delete(pvVar1);
    }
    *(int *)(param_1 + 0x30) = *(int *)(param_1 + 0x30) + -0xc;
  }
  uVar2 = **(undefined4 **)(*(int *)(param_1 + 0x30) + -0xc);
  if (*(int *)(param_1 + 0x2c) != *(int *)(param_1 + 0x30)) {
    pvVar1 = *(void **)(*(int *)(param_1 + 0x30) + -0xc);
    if (pvVar1 != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      operator_delete(pvVar1);
    }
    *(int *)(param_1 + 0x30) = *(int *)(param_1 + 0x30) + -0xc;
  }
  param_1 = uVar2;
  FUN_004054b0(2,&param_1);
  local_8 = 0;
  if ((local_14 == 0) && (iRamfffffffc == 0)) {
    uVar2 = 0;
  }
  else {
    uVar2 = 1;
  }
  local_20 = (undefined4 *)0x0;
  local_1c = 0;
  local_18 = 0;
  FUN_005870c0(4);
  *local_20 = uVar2;
  local_8 = CONCAT31(local_8._1_3_,1);
  FUN_0040d910(&local_20);
  if (local_20 == (undefined4 *)0x0) {
    ExceptionList = local_10;
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  operator_delete(local_20);
}


/* FUN_0040a350 @ 0040a350  kind=gamemisc  attributed-by=role:dtor-like  size=53 */

undefined4 FUN_0040a350(undefined4 param_1,int param_2)

{
  void *local_10 [3];
  
  if (0 < param_2) {
    do {
      FUN_0040d800(local_10);
      if (local_10[0] != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
        operator_delete(local_10[0]);
      }
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return 0;
}


/* FUN_0040a3a0 @ 0040a3a0  kind=gamemisc  attributed-by=role:dtor-like  size=95 */

undefined4 FUN_0040a3a0(undefined4 param_1,int param_2)

{
  int iVar1;
  void *local_1c [3];
  void *local_10 [3];
  
  iVar1 = 0;
  if (param_2 < 1) {
    return 0;
  }
  do {
    if (iVar1 < 0) {
      return 0;
    }
    if (iVar1 == 0) {
      FUN_0040d800(local_10);
      if (local_10[0] != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
        operator_delete(local_10[0]);
      }
    }
    else {
      FUN_0040d800(local_1c);
      if (local_1c[0] != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
        operator_delete(local_1c[0]);
      }
    }
    iVar1 = iVar1 + 1;
  } while (iVar1 < param_2);
  return 0;
}


/* FUN_0040a4c0 @ 0040a4c0  kind=gamemisc  attributed-by=role:dtor-like  size=130 */

undefined4 FUN_0040a4c0(undefined4 param_1,int param_2)

{
  void *local_10 [3];
  
  if (param_2 != 1) {
    if (param_2 != 2) {
      if (param_2 < 1) {
        return 0;
      }
      do {
        FUN_0040d800(local_10);
        if (local_10[0] != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
          operator_delete(local_10[0]);
        }
        param_2 = param_2 + -1;
      } while (param_2 != 0);
      return 0;
    }
    FUN_0040d800(local_10);
    if (local_10[0] != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      operator_delete(local_10[0]);
    }
  }
  FUN_0040d800(local_10);
  if (local_10[0] == (void *)0x0) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  operator_delete(local_10[0]);
}


/* FUN_0040a560 @ 0040a560  kind=gamemisc  attributed-by=role:dtor-like  size=151 */

undefined4 FUN_0040a560(int param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 *local_1c;
  undefined4 local_18;
  undefined4 local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006e1688;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_1c = (undefined4 *)0x0;
  local_18 = 0;
  local_14 = 0;
  uVar1 = *(undefined4 *)
           (*(int *)(param_1 + 0x2c) +
           (*(int *)(*(int *)(*(int *)(param_1 + 0x38) + 4) + 8) + param_2) * 0xc);
  FUN_005870c0(4);
  *local_1c = uVar1;
  local_8 = 0;
  FUN_0040d910(&local_1c);
  if (local_1c != (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    operator_delete(local_1c);
  }
  ExceptionList = local_10;
  return 0;
}


/* FUN_0040a600 @ 0040a600  kind=gamemisc  attributed-by=role:dtor-like  size=132 */

undefined4 FUN_0040a600(undefined4 param_1,undefined4 param_2)

{
  undefined4 *local_1c;
  undefined4 local_18;
  undefined4 local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006e1688;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_1c = (undefined4 *)0x0;
  local_18 = 0;
  local_14 = 0;
  FUN_005870c0(4);
  *local_1c = param_2;
  local_8 = 0;
  FUN_0040d910(&local_1c);
  if (local_1c != (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    operator_delete(local_1c);
  }
  ExceptionList = local_10;
  return 0;
}


/* FUN_0040a690 @ 0040a690  kind=gamemisc  attributed-by=role:dtor-like  size=170 */

undefined4 FUN_0040a690(undefined4 param_1,undefined4 param_2)

{
  char *pcVar1;
  char *pcVar2;
  char *pcVar3;
  undefined4 *local_20;
  undefined4 local_1c;
  undefined4 local_18;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006e1658;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  pcVar2 = "button:press";
  pcVar3 = "button:press";
  do {
    if (((*pcVar3 != *pcVar2) || (*pcVar3 == '\0')) || (pcVar1 = pcVar3 + 1, *pcVar1 != pcVar2[1]))
    break;
    pcVar3 = pcVar3 + 2;
    pcVar2 = pcVar2 + 2;
  } while (*pcVar1 != '\0');
  local_20 = (undefined4 *)0x0;
  local_1c = 0;
  local_18 = 0;
  FUN_005870c0(4);
  *local_20 = param_2;
  local_8 = 0;
  FUN_0040d910(&local_20);
  if (local_20 == (undefined4 *)0x0) {
    ExceptionList = local_10;
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  operator_delete(local_20);
}


/* FUN_0040a740 @ 0040a740  kind=gamemisc  attributed-by=role:dtor-like  size=237 */

undefined4 FUN_0040a740(int param_1,undefined4 param_2)

{
  void *pvVar1;
  undefined4 *puVar2;
  undefined4 *local_1c;
  undefined4 *local_18;
  undefined4 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_006e1600;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  puVar2 = (undefined4 *)0x3;
  do {
    local_8 = 0xffffffff;
    local_1c = (undefined4 *)0x0;
    local_18 = (undefined4 *)0x0;
    local_14 = (undefined4 *)0x0;
    FUN_005870c0(4);
    *local_1c = param_2;
    local_8 = 0;
    FUN_0040d910(&local_1c);
    local_8 = 0xffffffff;
    if (local_1c != (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
      operator_delete(local_1c);
    }
    if (*(int *)(param_1 + 0x2c) != *(int *)(param_1 + 0x30)) {
      pvVar1 = *(void **)(*(int *)(param_1 + 0x30) + -0xc);
      if (pvVar1 != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
        operator_delete(pvVar1);
      }
      *(int *)(param_1 + 0x30) = *(int *)(param_1 + 0x30) + -0xc;
    }
    local_8 = 0xffffffff;
    puVar2 = (undefined4 *)((int)puVar2 + -1);
  } while (puVar2 != (undefined4 *)0x0);
  local_1c = puVar2;
  local_18 = puVar2;
  local_14 = puVar2;
  FUN_005870c0(4);
  *local_1c = param_2;
  local_8 = 1;
  FUN_0040d910(&local_1c);
  if (local_1c != (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    operator_delete(local_1c);
  }
  ExceptionList = local_10;
  return 0;
}


/* FUN_0040a860 @ 0040a860  kind=gamemisc  attributed-by=role:dtor-like  size=151 */

undefined4 FUN_0040a860(undefined4 param_1,int param_2)

{
  int *local_1c;
  undefined4 local_18;
  undefined4 local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006e1488;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  switch(param_2) {
  case 0:
    FUN_00403030(0);
    ExceptionList = local_10;
    return 0;
  case 1:
    FUN_00403030(1);
    ExceptionList = local_10;
    return 0;
  case 3:
    FUN_00403030(3);
    ExceptionList = local_10;
    return 0;
  case 4:
    FUN_00403030(4);
    ExceptionList = local_10;
    return 0;
  }
  local_1c = (int *)0x0;
  local_18 = 0;
  local_14 = 0;
  FUN_005870c0(4);
  *local_1c = (param_2 * 2) / 2;
  local_8 = 0;
  FUN_0040d910(&local_1c);
  if (local_1c != (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    operator_delete(local_1c);
  }
  ExceptionList = local_10;
  return 0;
}


/* FUN_0040a9c0 @ 0040a9c0  kind=gamemisc  attributed-by=role:dtor-like  size=137 */

undefined4 FUN_0040a9c0(void)

{
  undefined4 uVar1;
  void *local_1c [3];
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006e1488;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  uVar1 = FUN_0040d800(local_1c);
  local_8 = 0;
  FUN_004040d0(uVar1);
  if (local_1c[0] != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    operator_delete(local_1c[0]);
  }
  ExceptionList = local_10;
  return 0;
}


/* FUN_0040aa50 @ 0040aa50  kind=gamemisc  attributed-by=role:dtor-like  size=151 */

undefined4 FUN_0040aa50(undefined4 param_1)

{
  undefined4 uVar1;
  void *local_1c [3];
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006e1488;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  uVar1 = FUN_0040bef0(&DAT_006fc918,param_1,DAT_0076aa78 ^ (uint)&stack0xfffffffc);
  uVar1 = FUN_0040bb30(local_1c,param_1,uVar1);
  local_8 = 0;
  FUN_004040d0(uVar1);
  if (local_1c[0] != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    operator_delete(local_1c[0]);
  }
  ExceptionList = local_10;
  return 0;
}


/* FUN_0040ab10 @ 0040ab10  kind=gamemisc  attributed-by=role:dtor-like  size=204 */

undefined4 FUN_0040ab10(void)

{
  void *local_28;
  undefined4 local_24;
  undefined4 local_20;
  void *local_1c;
  undefined4 local_18;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006e16c0;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  FUN_0040d800(&local_1c);
  local_8 = 0;
  local_28 = (void *)0x0;
  local_24 = 0;
  local_20 = 0;
  FUN_00402210(local_1c,local_18);
  local_8 = CONCAT31(local_8._1_3_,1);
  FUN_004040d0(&local_28);
  FUN_004040d0(&local_1c);
  if (local_28 != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    operator_delete(local_28);
  }
  if (local_1c != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    operator_delete(local_1c);
  }
  ExceptionList = local_10;
  return 0;
}


/* FUN_0040abf0 @ 0040abf0  kind=gamemisc  attributed-by=role:dtor-like  size=140 */

undefined4 FUN_0040abf0(void)

{
  void *local_1c [3];
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006e1488;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  FUN_0040d800(local_1c);
  local_8 = 0;
  FUN_004040d0(local_1c);
  if (local_1c[0] != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    operator_delete(local_1c[0]);
  }
  ExceptionList = local_10;
  return 0;
}


/* FUN_0040ac80 @ 0040ac80  kind=gamemisc  attributed-by=role:dtor-like  size=229 */

int FUN_0040ac80(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  void *local_28;
  undefined4 local_24;
  undefined4 local_20;
  int *local_1c;
  undefined4 local_18;
  undefined4 local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006e16f0;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  iVar1 = *(int *)(param_1 + 0x50);
  iVar2 = *(int *)(param_1 + 0xc);
  local_1c = (int *)0x0;
  local_18 = 0;
  local_14 = 0;
  FUN_0040d9d0(param_2);
  piVar3 = local_1c;
  iVar6 = 0;
  local_8 = 0;
  if (0 < param_2) {
    piVar5 = local_1c;
    do {
      iVar4 = (*(int *)(param_1 + 0x50) -
              *(int *)(((iVar2 + iVar1 * 4) - (int)local_1c) + (int)piVar5)) + iVar6;
      iVar6 = iVar6 + 1;
      *piVar5 = iVar4;
      piVar5 = piVar5 + 1;
    } while (iVar6 < param_2);
  }
  local_28 = (void *)0x0;
  local_24 = 0;
  local_20 = 0;
  FUN_00402280(local_1c,local_18);
  local_8 = CONCAT31(local_8._1_3_,1);
  FUN_0040d910(&local_28);
  if (local_28 == (void *)0x0) {
    if (piVar3 == (int *)0x0) {
      ExceptionList = local_10;
      return param_2;
    }
                    /* WARNING: Subroutine does not return */
    operator_delete(piVar3);
  }
                    /* WARNING: Subroutine does not return */
  operator_delete(local_28);
}


/* FUN_0040b270 @ 0040b270  kind=gamemisc  attributed-by=role:dtor-like  size=204 */

undefined4 FUN_0040b270(int param_1)

{
  int iVar1;
  void *pvVar2;
  int iVar3;
  int *local_1c;
  undefined4 local_18;
  undefined4 local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006e1598;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  iVar1 = **(int **)(*(int *)(param_1 + 0x30) + -0xc);
  if (*(int *)(param_1 + 0x2c) != *(int *)(param_1 + 0x30)) {
    pvVar2 = *(void **)(*(int *)(param_1 + 0x30) + -0xc);
    if (pvVar2 != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      operator_delete(pvVar2);
    }
    *(int *)(param_1 + 0x30) = *(int *)(param_1 + 0x30) + -0xc;
  }
  iVar3 = **(int **)(*(int *)(param_1 + 0x30) + -0xc);
  if (*(int *)(param_1 + 0x2c) != *(int *)(param_1 + 0x30)) {
    pvVar2 = *(void **)(*(int *)(param_1 + 0x30) + -0xc);
    if (pvVar2 != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      operator_delete(pvVar2);
    }
    *(int *)(param_1 + 0x30) = *(int *)(param_1 + 0x30) + -0xc;
  }
  local_1c = (int *)0x0;
  local_18 = 0;
  local_14 = 0;
  FUN_005870c0(4);
  *local_1c = iVar1 - iVar3;
  local_8 = 0;
  FUN_0040d910(&local_1c);
  if (local_1c != (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    operator_delete(local_1c);
  }
  ExceptionList = local_10;
  return 0;
}


/* FUN_0040b390 @ 0040b390  kind=gamemisc  attributed-by=role:dtor-like  size=208 */

undefined4 FUN_0040b390(int param_1)

{
  void *pvVar1;
  int iVar2;
  int *local_20;
  undefined4 local_1c;
  undefined4 local_18;
  int local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006e14b8;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_14 = **(int **)(*(int *)(param_1 + 0x30) + -0xc);
  if (*(int *)(param_1 + 0x2c) != *(int *)(param_1 + 0x30)) {
    pvVar1 = *(void **)(*(int *)(param_1 + 0x30) + -0xc);
    if (pvVar1 != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      operator_delete(pvVar1);
    }
    *(int *)(param_1 + 0x30) = *(int *)(param_1 + 0x30) + -0xc;
  }
  iVar2 = **(int **)(*(int *)(param_1 + 0x30) + -0xc);
  if (*(int *)(param_1 + 0x2c) != *(int *)(param_1 + 0x30)) {
    pvVar1 = *(void **)(*(int *)(param_1 + 0x30) + -0xc);
    if (pvVar1 != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      operator_delete(pvVar1);
    }
    *(int *)(param_1 + 0x30) = *(int *)(param_1 + 0x30) + -0xc;
  }
  iVar2 = local_14 - iVar2;
  local_20 = (int *)0x0;
  local_1c = 0;
  local_18 = 0;
  FUN_005870c0(4);
  *local_20 = iVar2;
  local_8 = 0;
  FUN_0040d910(&local_20);
  if (local_20 != (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    operator_delete(local_20);
  }
  ExceptionList = local_10;
  return 0;
}


/* FUN_0040b550 @ 0040b550  kind=gamemisc  attributed-by=role:dtor-like  size=132 */

undefined4 FUN_0040b550(undefined4 param_1,undefined4 param_2)

{
  undefined4 *local_1c;
  undefined4 local_18;
  undefined4 local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006e17c8;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_1c = (undefined4 *)0x0;
  local_18 = 0;
  local_14 = 0;
  FUN_005870c0(4);
  *local_1c = param_2;
  local_8 = 0;
  FUN_0040d910(&local_1c);
  if (local_1c != (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    operator_delete(local_1c);
  }
  ExceptionList = local_10;
  return 0;
}


/* FUN_0040b5e0 @ 0040b5e0  kind=gamemisc  attributed-by=role:dtor-like  size=147 */

undefined4 FUN_0040b5e0(undefined4 param_1,int param_2)

{
  int iVar1;
  int *local_1c;
  undefined4 local_18;
  undefined4 local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006e1488;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  iVar1 = DAT_00765028 + (param_2 - DAT_00765008) + -0x13;
  local_1c = (int *)0x0;
  local_18 = 0;
  local_14 = 0;
  FUN_005870c0(4);
  *local_1c = iVar1;
  local_8 = 0;
  FUN_0040d910(&local_1c);
  if (local_1c != (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    operator_delete(local_1c);
  }
  ExceptionList = local_10;
  return 0;
}


/* FUN_0040b680 @ 0040b680  kind=gamemisc  attributed-by=role:dtor-like  size=154 */

undefined4 FUN_0040b680(undefined4 param_1,uint param_2)

{
  uint *local_1c;
  undefined4 local_18;
  undefined4 local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006e1488;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  if ((param_2 & 0xf0f0f8) == 3) {
    local_1c = (uint *)0x0;
    local_18 = 0;
    local_14 = 0;
    FUN_005870c0(4);
    *local_1c = param_2;
    local_8 = 0;
    FUN_0040d910(&local_1c);
    if (local_1c != (uint *)0x0) {
                    /* WARNING: Subroutine does not return */
      operator_delete(local_1c);
    }
  }
  else {
    FUN_0040be60(param_1,param_2,DAT_0076aa78 ^ (uint)&stack0xfffffffc);
  }
  ExceptionList = local_10;
  return 0;
}


/* FUN_0040b730 @ 0040b730  kind=gamemisc  attributed-by=role:dtor-like  size=207 */

void FUN_0040b730(undefined4 param_1,undefined4 param_2)

{
  undefined4 *local_38;
  undefined4 local_34;
  undefined4 local_30;
  void *local_2c;
  undefined4 local_1c;
  uint local_18;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006e1800;
  local_10 = ExceptionList;
  local_14 = DAT_0076aa78 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_18 = 0xf;
  local_1c = 0;
  local_2c = (void *)((uint)local_2c & 0xffffff00);
  FUN_0040c280(&DAT_006fc918,0);
  local_8 = 0;
  FUN_0040bff0(1,param_2);
  local_38 = (undefined4 *)0x0;
  local_34 = 0;
  local_30 = 0;
  FUN_005870c0(4);
  *local_38 = param_2;
  local_8 = CONCAT31(local_8._1_3_,1);
  FUN_0040d910(&local_38);
  if (local_38 != (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    operator_delete(local_38);
  }
  if (0xf < local_18) {
                    /* WARNING: Subroutine does not return */
    operator_delete(local_2c);
  }
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}


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


/* FUN_0063c700 @ 0063c700  kind=gamemisc  attributed-by=role:dtor-like  size=238 */

void FUN_0063c700(void)

{
  undefined4 uVar1;
  uint uVar2;
  int in_ECX;
  undefined4 uVar3;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  puStack_c = &LAB_006f5d07;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  uVar1 = *(undefined4 *)(in_ECX + 0x5c);
  uVar3 = *(undefined4 *)(in_ECX + 0x54);
  local_8._0_1_ = 2;
  local_8._1_3_ = 0;
  uVar2 = Concurrency::details::_Concurrent_vector_base_v4::_Internal_clear
                    ((_Concurrent_vector_base_v4 *)(in_ECX + 0x44),cube::Controller::vfunction12);
  FUN_0063d9c0(uVar1,uVar2,uVar3);
  local_8._0_1_ = 1;
  Concurrency::details::_Concurrent_vector_base_v4::~_Concurrent_vector_base_v4
            ((_Concurrent_vector_base_v4 *)(in_ECX + 0x44));
  uVar1 = *(undefined4 *)(in_ECX + 0x3c);
  uVar3 = *(undefined4 *)(in_ECX + 0x34);
  local_8._0_1_ = 3;
  uVar2 = Concurrency::details::_Concurrent_vector_base_v4::_Internal_clear
                    ((_Concurrent_vector_base_v4 *)(in_ECX + 0x24),cube::Controller::vfunction12);
  FUN_0063d9c0(uVar1,uVar2,uVar3);
  local_8 = (uint)local_8._1_3_ << 8;
  Concurrency::details::_Concurrent_vector_base_v4::~_Concurrent_vector_base_v4
            ((_Concurrent_vector_base_v4 *)(in_ECX + 0x24));
  uVar1 = *(undefined4 *)(in_ECX + 0x1c);
  uVar3 = *(undefined4 *)(in_ECX + 0x14);
  local_8 = 4;
  uVar2 = Concurrency::details::_Concurrent_vector_base_v4::_Internal_clear
                    ((_Concurrent_vector_base_v4 *)(in_ECX + 4),cube::Controller::vfunction12);
  FUN_0063d9c0(uVar1,uVar2,uVar3);
  local_8 = 0xffffffff;
  Concurrency::details::_Concurrent_vector_base_v4::~_Concurrent_vector_base_v4
            ((_Concurrent_vector_base_v4 *)(in_ECX + 4));
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


