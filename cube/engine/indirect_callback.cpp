// indirect_callback (engine) -- cube. 14 functions. Bodies = Ghidra pseudo-C.
// Attribution: see ../attribution.tsv. Toolchain of the original: MSVC 11.0 (VS2012).
#include "indirect_callback.h"

/* FUN_00405120 @ 00405120  kind=gamemisc  attributed-by=role:callback  size=136 */

/* WARNING: Removing unreachable block (ram,0x00405184) */

void FUN_00405120(undefined4 param_1,undefined4 param_2)

{
  uint uVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006e13d8;
  local_10 = ExceptionList;
  uVar1 = DAT_0076aa78 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  FUN_0040c280("checkbutton",0xb);
  local_8 = 0;
  FUN_0040da70(param_2);
  ExceptionList = local_10;
  __security_check_cookie(uVar1 ^ (uint)&stack0xfffffffc);
  return;
}


/* FUN_00405210 @ 00405210  kind=gamemisc  attributed-by=role:callback  size=120 */

undefined4 FUN_00405210(int param_1,int param_2)

{
  int iVar1;
  code *pcVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  
  uVar5 = 0;
  if (0 < DAT_0076500c) {
    do {
      uVar3 = uVar5 & 0x80000001;
      if ((int)uVar3 < 0) {
        uVar3 = (uVar3 - 1 | 0xfffffffe) + 1;
      }
      if (uVar3 != 0) {
        if ((-1 < param_2) && (param_2 < *(int *)(param_1 + 0x10) - *(int *)(param_1 + 0xc) >> 2)) {
          do {
            iVar6 = param_2 - *(int *)(*(int *)(param_1 + 0xc) + param_2 * 4);
            iVar4 = param_2 + 1;
            iVar1 = *(int *)(*(int *)(param_1 + 0xc) + 4 + param_2 * 4);
            param_2 = param_2 + 2;
            pcVar2 = *(code **)(*(int *)(param_1 + 0x40) + iVar6 * 4);
            *(int *)(param_1 + 0x50) = param_2;
            if (pcVar2 != (code *)0x0) {
              iVar4 = (*pcVar2)(param_1,iVar4 - iVar1);
              param_2 = param_2 + iVar4;
            }
          } while (iVar6 != 0xc);
        }
        return 0;
      }
      uVar5 = uVar5 + 1;
    } while ((int)uVar5 < DAT_0076500c);
  }
  return 0xffffffff;
}


/* FUN_004052e0 @ 004052e0  kind=gamemisc  attributed-by=role:callback  size=192 */

/* WARNING: Removing unreachable block (ram,0x0040537c) */

void FUN_004052e0(undefined4 param_1,int param_2)

{
  uint uVar1;
  undefined4 extraout_EDX;
  float fVar2;
  double dVar3;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006e1408;
  local_10 = ExceptionList;
  uVar1 = DAT_0076aa78 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  dVar3 = (double)((float)param_2 * 0.1);
  libm_sse2_cos_precise(uVar1);
  fVar2 = (float)dVar3;
  FUN_0040c280("caption",7);
  local_8 = 0;
  FUN_0040b810();
  FUN_0040c390(param_2);
  ExceptionList = local_10;
  __security_check_cookie(uVar1 ^ (uint)&stack0xfffffffc,extraout_EDX,fVar2);
  return;
}


/* FUN_004053b0 @ 004053b0  kind=gamemisc  attributed-by=role:callback  size=99 */

undefined4 FUN_004053b0(undefined4 param_1,int param_2)

{
  if (param_2 == 0) {
    FUN_0040c390(0);
    return 0;
  }
  if (param_2 != 1) {
    if (param_2 != 2) {
      FUN_0040c390(param_2);
      return 0;
    }
    if (DAT_0076af44 != 0) {
      DAT_0076af48 = DAT_0076af48 + DAT_0076af44 * 10;
    }
    FUN_0040c390(2);
    return 0;
  }
  FUN_0040c390(1);
  return 0;
}


/* FUN_00406e30 @ 00406e30  kind=gamemisc  attributed-by=role:callback  size=134 */

undefined4 FUN_00406e30(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  if (0 < param_2) {
    FUN_0040bac0(param_1,0xffffffff,param_2);
    return 0;
  }
  iVar1 = *(int *)(param_1 + 0x38);
  param_2 = (*(int *)(param_1 + 0x30) - *(int *)(param_1 + 0x2c)) / 0xc + DAT_0076502c * param_2;
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


/* FUN_00407ed0 @ 00407ed0  kind=gamemisc  attributed-by=role:callback  size=162 */

/* WARNING: Removing unreachable block (ram,0x00407f5a) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_00407ed0(undefined4 param_1,int param_2)

{
  float10 fVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006e1488;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  fVar1 = (float10)FUN_00407e00(2,(double)param_2,DAT_0076aa78 ^ (uint)&stack0xfffffffc);
  FUN_005870c0();
  _DAT_00000000 = (int)fVar1;
  local_8 = 0;
  FUN_0040d910();
  ExceptionList = local_10;
  return 0;
}


/* FUN_004081b0 @ 004081b0  kind=gamemisc  attributed-by=role:callback  size=35 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_004081b0(undefined4 param_1,int param_2)

{
  if (param_2 == 0) {
    return 0;
  }
  if (param_2 != 1) {
    return param_2 - _DAT_0076af54;
  }
  return 1;
}


/* FUN_004085a0 @ 004085a0  kind=gamemisc  attributed-by=role:callback  size=378 */

void FUN_004085a0(int param_1)

{
  uint *puVar1;
  void *pvVar2;
  uint *puVar3;
  int iVar4;
  uint **ppuVar5;
  int iVar6;
  uint **extraout_EDX;
  uint **ppuVar7;
  uint **extraout_EDX_00;
  uint **extraout_EDX_01;
  uint **extraout_EDX_02;
  uint *local_34 [3];
  int local_28;
  int local_24 [5];
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006e156a;
  local_10 = ExceptionList;
  local_24[4] = DAT_0076aa78 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_28 = param_1;
  puVar1 = (uint *)(param_1 + 0x2c);
  local_24[1] = **(int **)(*(int *)(param_1 + 0x30) + -0xc);
  local_24[0] = 0;
  local_24[3] = 4;
  if (*puVar1 != *(uint *)(param_1 + 0x30)) {
    pvVar2 = *(void **)(*(uint *)(param_1 + 0x30) - 0xc);
    if (pvVar2 != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      operator_delete(pvVar2);
    }
    *(int *)(param_1 + 0x30) = *(int *)(param_1 + 0x30) + -0xc;
  }
  local_28 = **(undefined4 **)(*(int *)(param_1 + 0x30) + -0xc);
  if (*puVar1 != *(uint *)(param_1 + 0x30)) {
    pvVar2 = *(void **)(*(uint *)(param_1 + 0x30) - 0xc);
    if (pvVar2 != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      operator_delete(pvVar2);
    }
    *(int *)(param_1 + 0x30) = *(int *)(param_1 + 0x30) + -0xc;
  }
  local_24[2] = local_28;
  iVar4 = 0;
  iVar6 = 0;
  do {
    if (iVar6 == 0) {
      iVar4 = iVar4 + local_24[1];
    }
    else {
      iVar4 = (iVar4 - local_24[iVar6 * 2]) - local_24[iVar6 * 2 + 1];
    }
    iVar6 = iVar6 + 1;
  } while (iVar6 < 2);
  local_34[0] = (uint *)0x0;
  local_34[1] = (uint *)0x0;
  local_34[2] = (uint *)0x0;
  FUN_005870c0(4);
  puVar3 = local_34[0];
  *local_34[0] = (uint)(iVar4 < -3);
  local_8 = 0;
  ppuVar7 = extraout_EDX;
  if ((local_34 < *(uint ***)(param_1 + 0x30)) && (ppuVar7 = (uint **)*puVar1, ppuVar7 <= local_34))
  {
    iVar6 = (int)local_34 - (int)ppuVar7;
    iVar4 = iVar6 >> 0x1f;
    ppuVar7 = (uint **)(iVar6 / 0xc + iVar4);
    iVar4 = (int)ppuVar7 - iVar4;
    if (*(int *)(param_1 + 0x30) == *(int *)(param_1 + 0x34)) {
      FUN_0063ddc0(1);
      ppuVar7 = extraout_EDX_00;
    }
    ppuVar5 = (uint **)(*puVar1 + iVar4 * 0xc);
    iVar4 = *(int *)(param_1 + 0x30);
    local_8 = CONCAT31(local_8._1_3_,1);
    local_28 = iVar4;
    if (iVar4 == 0) goto LAB_00408724;
  }
  else {
    if (*(uint ***)(param_1 + 0x30) == *(uint ***)(param_1 + 0x34)) {
      FUN_0063ddc0(1);
      ppuVar7 = extraout_EDX_01;
    }
    iVar4 = *(int *)(param_1 + 0x30);
    local_8 = CONCAT31(local_8._1_3_,2);
    local_28 = iVar4;
    if (iVar4 == 0) goto LAB_00408724;
    ppuVar5 = local_34;
  }
  iVar4 = local_28;
  FUN_004034c0(ppuVar5);
  ppuVar7 = extraout_EDX_02;
LAB_00408724:
  *(int *)(param_1 + 0x30) = *(int *)(param_1 + 0x30) + 0xc;
  if (puVar3 == (uint *)0x0) {
    ExceptionList = local_10;
    __security_check_cookie(local_24[4] ^ (uint)&stack0xfffffffc,ppuVar7,iVar4);
    return;
  }
                    /* WARNING: Subroutine does not return */
  operator_delete(puVar3);
}


/* FUN_004088a0 @ 004088a0  kind=gamemisc  attributed-by=role:callback  size=297 */

undefined4 FUN_004088a0(int param_1)

{
  void *pvVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  uint *local_28;
  undefined4 local_24;
  undefined4 local_20;
  int local_1c;
  int *local_18;
  int local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006f35c8;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_18 = (int *)(param_1 + 0x2c);
  local_14 = **(int **)(*(int *)(param_1 + 0x30) + -0xc);
  if (*local_18 != *(int *)(param_1 + 0x30)) {
    pvVar1 = *(void **)(*(int *)(param_1 + 0x30) + -0xc);
    if (pvVar1 != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      operator_delete(pvVar1);
    }
    *(int *)(param_1 + 0x30) = *(int *)(param_1 + 0x30) + -0xc;
  }
  iVar5 = **(int **)(*(int *)(param_1 + 0x30) + -0xc);
  if (*local_18 != *(int *)(param_1 + 0x30)) {
    pvVar1 = *(void **)(*(int *)(param_1 + 0x30) + -0xc);
    if (pvVar1 != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      operator_delete(pvVar1);
    }
    *(int *)(param_1 + 0x30) = *(int *)(param_1 + 0x30) + -0xc;
  }
  iVar3 = 0;
  iVar4 = 0;
  iVar7 = 0;
  iVar6 = 0;
  iVar2 = 1;
  if (1 < DAT_00765074) {
    local_1c = DAT_00765074 + -1;
    do {
      iVar7 = iVar7 + iVar2;
      iVar3 = iVar3 + iVar2;
      iVar6 = iVar6 + 1 + iVar2;
      iVar4 = iVar4 + 1 + iVar2;
      iVar2 = iVar2 + 2;
    } while (iVar2 <= local_1c);
  }
  param_1 = iVar5;
  if (iVar2 <= DAT_00765074) {
    local_14 = local_14 + iVar2;
    param_1 = iVar5 + iVar2;
  }
  iVar5 = local_14 + iVar7 + iVar6;
  local_28 = (uint *)0x0;
  local_24 = 0;
  local_20 = 0;
  FUN_005870c0(4);
  *local_28 = (uint)(iVar5 <= param_1 + iVar3 + iVar4);
  local_8 = 0;
  FUN_0040d910(&local_28);
  if (local_28 != (uint *)0x0) {
                    /* WARNING: Subroutine does not return */
    operator_delete(local_28);
  }
  ExceptionList = local_10;
  return 0;
}


/* FUN_0040a430 @ 0040a430  kind=gamemisc  attributed-by=role:callback  size=141 */

/* WARNING: Removing unreachable block (ram,0x0040a4a5) */

undefined4 FUN_0040a430(undefined4 param_1,undefined4 param_2)

{
  uint uVar1;
  undefined4 local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006e1658;
  local_10 = ExceptionList;
  uVar1 = DAT_0076aa78 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_14 = 0;
  FUN_004054b0(param_2,&local_14);
  local_8 = 0;
  FUN_004022f0(0,0,&param_1,uVar1);
  ExceptionList = local_10;
  return 0;
}


/* FUN_0040ad70 @ 0040ad70  kind=gamemisc  attributed-by=role:callback  size=426 */

/* WARNING: Removing unreachable block (ram,0x0040af06) */
/* WARNING: Removing unreachable block (ram,0x0040aef9) */

size_t FUN_0040ad70(int param_1,size_t param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  void **ppvVar4;
  int *piVar5;
  undefined1 *puVar6;
  int iVar7;
  void *local_1c [4];
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006e174a;
  local_1c[3] = ExceptionList;
  ExceptionList = local_1c + 3;
  iVar1 = *(int *)(param_1 + 0x50);
  iVar2 = *(int *)(param_1 + 0xc);
  FUN_0040d9d0(param_2);
  piVar5 = (int *)0x0;
  iVar7 = 0;
  local_8 = 0;
  if (0 < (int)param_2) {
    do {
      iVar3 = (*(int *)(param_1 + 0x50) - *(int *)(iVar2 + iVar1 * 4 + (int)piVar5)) + iVar7;
      iVar7 = iVar7 + 1;
      *piVar5 = iVar3;
      piVar5 = piVar5 + 1;
    } while (iVar7 < (int)param_2);
  }
  FUN_005870c0(param_2);
  puVar6 = (undefined1 *)0x0;
  local_8._0_1_ = 1;
  if (0 < (int)param_2) {
    do {
      *puVar6 = *(undefined1 *)((int)puVar6 * 4);
      puVar6 = puVar6 + 1;
    } while ((int)puVar6 < (int)param_2);
  }
  local_1c[0] = (void *)0x0;
  local_1c[1] = (void *)0x0;
  local_1c[2] = (void *)0x0;
  FUN_005870c0(param_2);
  local_8 = CONCAT31(local_8._1_3_,2);
  memcpy(local_1c[0],(void *)0x0,param_2);
  if ((local_1c < *(void ***)(param_1 + 0x30)) &&
     (ppvVar4 = *(void ***)(param_1 + 0x2c), ppvVar4 <= local_1c)) {
    if (*(int *)(param_1 + 0x30) == *(int *)(param_1 + 0x34)) {
      FUN_0063ddc0(1);
    }
    ppvVar4 = (void **)(*(int *)(param_1 + 0x2c) + (((int)local_1c - (int)ppvVar4) / 0xc) * 0xc);
    local_8 = CONCAT31(local_8._1_3_,3);
    if (*(int *)(param_1 + 0x30) == 0) goto LAB_0040aede;
  }
  else {
    if (*(void ***)(param_1 + 0x30) == *(void ***)(param_1 + 0x34)) {
      FUN_0063ddc0(1);
    }
    local_8 = CONCAT31(local_8._1_3_,4);
    if (*(int *)(param_1 + 0x30) == 0) goto LAB_0040aede;
    ppvVar4 = local_1c;
  }
  FUN_004034c0(ppvVar4);
LAB_0040aede:
  *(int *)(param_1 + 0x30) = *(int *)(param_1 + 0x30) + 0xc;
  if (local_1c[0] != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    operator_delete(local_1c[0]);
  }
  ExceptionList = local_1c[3];
  return param_2;
}


/* FUN_0040af30 @ 0040af30  kind=gamemisc  attributed-by=role:callback  size=362 */

/* WARNING: Removing unreachable block (ram,0x0040b083) */

int FUN_0040af30(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  void **ppvVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  void *local_1c [4];
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006e18d2;
  local_1c[3] = ExceptionList;
  ExceptionList = local_1c + 3;
  iVar5 = *(int *)(param_1 + 0x50);
  iVar1 = *(int *)(param_1 + 0xc);
  FUN_0040d9d0(param_2);
  piVar4 = (int *)0x0;
  iVar6 = 0;
  local_8 = 0;
  if (0 < param_2) {
    do {
      iVar2 = *(int *)(param_1 + 0x50) + iVar6;
      iVar6 = iVar6 + 1;
      *piVar4 = iVar2 - *(int *)(iVar1 + iVar5 * 4 + (int)piVar4);
      piVar4 = piVar4 + 1;
    } while (iVar6 < param_2);
  }
  local_1c[0] = (void *)0x0;
  local_1c[1] = (void *)0x0;
  local_1c[2] = (void *)0x0;
  FUN_005870c0(param_2);
  iVar5 = 0;
  local_8._0_1_ = 1;
  if (0 < param_2) {
    do {
      *(undefined1 *)((int)local_1c[0] + iVar5) = *(undefined1 *)(iVar5 * 4);
      iVar5 = iVar5 + 1;
    } while (iVar5 < param_2);
  }
  if ((local_1c < *(void ***)(param_1 + 0x30)) &&
     (ppvVar3 = *(void ***)(param_1 + 0x2c), ppvVar3 <= local_1c)) {
    if (*(int *)(param_1 + 0x30) == *(int *)(param_1 + 0x34)) {
      FUN_0063ddc0(1);
    }
    ppvVar3 = (void **)(*(int *)(param_1 + 0x2c) + (((int)local_1c - (int)ppvVar3) / 0xc) * 0xc);
    local_8 = CONCAT31(local_8._1_3_,2);
    if (*(int *)(param_1 + 0x30) == 0) goto LAB_0040b06b;
  }
  else {
    if (*(void ***)(param_1 + 0x30) == *(void ***)(param_1 + 0x34)) {
      FUN_0063ddc0(1);
    }
    local_8 = CONCAT31(local_8._1_3_,3);
    if (*(int *)(param_1 + 0x30) == 0) goto LAB_0040b06b;
    ppvVar3 = local_1c;
  }
  FUN_004034c0(ppvVar3);
LAB_0040b06b:
  *(int *)(param_1 + 0x30) = *(int *)(param_1 + 0x30) + 0xc;
  if (local_1c[0] != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    operator_delete(local_1c[0]);
  }
  ExceptionList = local_1c[3];
  return param_2;
}


/* FUN_0040b0c0 @ 0040b0c0  kind=gamemisc  attributed-by=role:callback  size=410 */

/* WARNING: Removing unreachable block (ram,0x0040b198) */
/* WARNING: Removing unreachable block (ram,0x0040b1a0) */
/* WARNING: Removing unreachable block (ram,0x0040b246) */

int FUN_0040b0c0(int param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  void **ppvVar3;
  int *piVar4;
  int iVar5;
  void *local_20 [3];
  int local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006e17a2;
  local_10 = ExceptionList;
  uVar1 = DAT_0076aa78 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_14 = *(int *)(param_1 + 0xc) + *(int *)(param_1 + 0x50) * 4;
  FUN_0040d9d0(param_2);
  piVar4 = (int *)0x0;
  iVar5 = 0;
  local_8 = 0;
  if (0 < param_2) {
    do {
      iVar2 = (DAT_0076af00 - *(int *)(local_14 + (int)piVar4)) + *(int *)(param_1 + 0x50) + iVar5;
      iVar5 = iVar5 + 1;
      *piVar4 = iVar2;
      piVar4 = piVar4 + 1;
    } while (iVar5 < param_2);
  }
  local_20[0] = (void *)0x0;
  local_20[1] = (void *)0x0;
  local_20[2] = (void *)0x0;
  FUN_005870c0(0);
  local_8 = CONCAT31(local_8._1_3_,1);
  iVar5 = FUN_0040bef0(local_20,param_1,uVar1);
  if (iVar5 != 0) {
    param_2 = -0x20;
    goto LAB_0040b232;
  }
  if ((local_20 < *(void ***)(param_1 + 0x30)) &&
     (ppvVar3 = *(void ***)(param_1 + 0x2c), ppvVar3 <= local_20)) {
    if (*(int *)(param_1 + 0x30) == *(int *)(param_1 + 0x34)) {
      FUN_0063ddc0(1);
    }
    ppvVar3 = (void **)(*(int *)(param_1 + 0x2c) + (((int)local_20 - (int)ppvVar3) / 0xc) * 0xc);
    local_8 = CONCAT31(local_8._1_3_,2);
    if (*(int *)(param_1 + 0x30) != 0) {
LAB_0040b228:
      FUN_004034c0(ppvVar3);
    }
  }
  else {
    if (*(void ***)(param_1 + 0x30) == *(void ***)(param_1 + 0x34)) {
      FUN_0063ddc0(1);
    }
    local_8 = CONCAT31(local_8._1_3_,3);
    if (*(int *)(param_1 + 0x30) != 0) {
      ppvVar3 = local_20;
      goto LAB_0040b228;
    }
  }
  *(int *)(param_1 + 0x30) = *(int *)(param_1 + 0x30) + 0xc;
LAB_0040b232:
  if (local_20[0] != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    operator_delete(local_20[0]);
  }
  ExceptionList = local_10;
  return param_2;
}


/* FUN_00671290 @ 00671290  kind=gamemisc  attributed-by=role:callback  size=34 */

void FUN_00671290(undefined4 *param_1,undefined4 param_2,int param_3)

{
  for (; param_3 != 0; param_3 = param_3 + -1) {
    if (param_1 != (undefined4 *)0x0) {
      *param_1 = 0;
    }
    param_1 = param_1 + 1;
  }
  return;
}


