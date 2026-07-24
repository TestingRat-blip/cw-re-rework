// Helpers_01 (control) -- cube. 200 functions. Bodies = Ghidra pseudo-C.
// Attribution: see ../attribution.tsv. Toolchain of the original: MSVC 11.0 (VS2012).
#include "Helpers_01.h"

/* FUN_004545a0 @ 004545a0  kind=gamemisc  attributed-by=caller-vote  size=157 */

void FUN_004545a0(int param_1,undefined4 *param_2,undefined4 *param_3)

{
  int iVar1;
  int in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_006e3570;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  while( true ) {
    if (param_2 == param_3) {
      ExceptionList = local_10;
      return;
    }
    iVar1 = FUN_00451e80(param_1,*(undefined4 *)(param_1 + 4),param_2 + 2);
    if (*(int *)(in_ECX + 4) == 0x9249248) break;
    *(int *)(in_ECX + 4) = *(int *)(in_ECX + 4) + 1;
    *(int *)(param_1 + 4) = iVar1;
    **(int **)(iVar1 + 4) = iVar1;
    param_2 = (undefined4 *)*param_2;
  }
                    /* WARNING: Subroutine does not return */
  std::_Xlength_error("list<T> too long");
}


/* FUN_00454670 @ 00454670  kind=gamemisc  attributed-by=caller-vote  size=157 */

void FUN_00454670(int param_1,undefined4 *param_2,undefined4 *param_3)

{
  int iVar1;
  int in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_006e3590;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  while( true ) {
    if (param_2 == param_3) {
      ExceptionList = local_10;
      return;
    }
    iVar1 = FUN_00451f50(param_1,*(undefined4 *)(param_1 + 4),param_2 + 2);
    if (*(int *)(in_ECX + 4) == 0xaaaaaa9) break;
    *(int *)(in_ECX + 4) = *(int *)(in_ECX + 4) + 1;
    *(int *)(param_1 + 4) = iVar1;
    **(int **)(iVar1 + 4) = iVar1;
    param_2 = (undefined4 *)*param_2;
  }
                    /* WARNING: Subroutine does not return */
  std::_Xlength_error("list<T> too long");
}


/* FUN_00454740 @ 00454740  kind=gamemisc  attributed-by=caller-vote  size=157 */

void FUN_00454740(int param_1,undefined4 *param_2,undefined4 *param_3)

{
  int iVar1;
  int in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_006e35b0;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  while( true ) {
    if (param_2 == param_3) {
      ExceptionList = local_10;
      return;
    }
    iVar1 = FUN_00451cc0(param_1,*(undefined4 *)(param_1 + 4),param_2 + 2);
    if (*(int *)(in_ECX + 4) == 0xdd67c7) break;
    *(int *)(in_ECX + 4) = *(int *)(in_ECX + 4) + 1;
    *(int *)(param_1 + 4) = iVar1;
    **(int **)(iVar1 + 4) = iVar1;
    param_2 = (undefined4 *)*param_2;
  }
                    /* WARNING: Subroutine does not return */
  std::_Xlength_error("list<T> too long");
}


/* FUN_00454810 @ 00454810  kind=gamemisc  attributed-by=caller-vote  size=157 */

void FUN_00454810(int param_1,undefined4 *param_2,undefined4 *param_3)

{
  int iVar1;
  int in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_006e35d0;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  while( true ) {
    if (param_2 == param_3) {
      ExceptionList = local_10;
      return;
    }
    iVar1 = FUN_00451d40(param_1,*(undefined4 *)(param_1 + 4),param_2 + 2);
    if (*(int *)(in_ECX + 4) == 0x3fffffe) break;
    *(int *)(in_ECX + 4) = *(int *)(in_ECX + 4) + 1;
    *(int *)(param_1 + 4) = iVar1;
    **(int **)(iVar1 + 4) = iVar1;
    param_2 = (undefined4 *)*param_2;
  }
                    /* WARNING: Subroutine does not return */
  std::_Xlength_error("list<T> too long");
}


/* FUN_004548e0 @ 004548e0  kind=gamemisc  attributed-by=caller-vote  size=157 */

void FUN_004548e0(int param_1,undefined4 *param_2,undefined4 *param_3)

{
  int iVar1;
  int in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_006e35f0;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  while( true ) {
    if (param_2 == param_3) {
      ExceptionList = local_10;
      return;
    }
    iVar1 = FUN_00452060(param_1,*(undefined4 *)(param_1 + 4),param_2 + 2);
    if (*(int *)(in_ECX + 4) == 0x2aaaaa9) break;
    *(int *)(in_ECX + 4) = *(int *)(in_ECX + 4) + 1;
    *(int *)(param_1 + 4) = iVar1;
    **(int **)(iVar1 + 4) = iVar1;
    param_2 = (undefined4 *)*param_2;
  }
                    /* WARNING: Subroutine does not return */
  std::_Xlength_error("list<T> too long");
}


/* FUN_004549b0 @ 004549b0  kind=gamemisc  attributed-by=caller-vote  size=157 */

void FUN_004549b0(int param_1,undefined4 *param_2,undefined4 *param_3)

{
  int iVar1;
  int in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_006e3610;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  while( true ) {
    if (param_2 == param_3) {
      ExceptionList = local_10;
      return;
    }
    iVar1 = FUN_004520d0(param_1,*(undefined4 *)(param_1 + 4),param_2 + 2);
    if (*(int *)(in_ECX + 4) == 0x3333332) break;
    *(int *)(in_ECX + 4) = *(int *)(in_ECX + 4) + 1;
    *(int *)(param_1 + 4) = iVar1;
    **(int **)(iVar1 + 4) = iVar1;
    param_2 = (undefined4 *)*param_2;
  }
                    /* WARNING: Subroutine does not return */
  std::_Xlength_error("list<T> too long");
}


/* FUN_00454a80 @ 00454a80  kind=gamemisc  attributed-by=caller-vote  size=157 */

void FUN_00454a80(int param_1,undefined4 *param_2,undefined4 *param_3)

{
  int iVar1;
  int in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_006e3630;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  while( true ) {
    if (param_2 == param_3) {
      ExceptionList = local_10;
      return;
    }
    iVar1 = FUN_0058d860(param_1,*(undefined4 *)(param_1 + 4),param_2 + 2);
    if (*(int *)(in_ECX + 4) == 0x7fffffe) break;
    *(int *)(in_ECX + 4) = *(int *)(in_ECX + 4) + 1;
    *(int *)(param_1 + 4) = iVar1;
    **(int **)(iVar1 + 4) = iVar1;
    param_2 = (undefined4 *)*param_2;
  }
                    /* WARNING: Subroutine does not return */
  std::_Xlength_error("list<T> too long");
}


/* FUN_00454b50 @ 00454b50  kind=gamemisc  attributed-by=caller-vote  size=515 */

void FUN_00454b50(byte *param_1,byte *param_2)

{
  int iVar1;
  byte *pbVar2;
  byte *pbVar3;
  byte *pbVar4;
  uint uVar5;
  int iVar6;
  byte *pbVar7;
  byte *pbVar8;
  undefined1 local_13c [12];
  byte local_130;
  short local_12c;
  undefined4 local_24;
  void *local_20 [3];
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_006e365b;
  local_10 = ExceptionList;
  uVar5 = DAT_0076aa78 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_14 = uVar5;
  if ((param_1 != param_2) && (pbVar8 = param_1 + 0x128, pbVar8 != param_2)) {
    pbVar7 = param_1 + 0xc;
    do {
      local_8 = 0xffffffff;
      FUN_0040ee70(pbVar8);
      local_24 = *(undefined4 *)(pbVar7 + 0x234);
      FUN_004592f0(pbVar7 + 0x238);
      local_8 = 0;
      iVar6 = ((uint)local_130 + local_12c * 6) * 1000;
      if ((int)(((uint)param_1[0xc] + *(short *)(param_1 + 0x10) * 6) * 1000) < iVar6) {
        FUN_004556b0(param_1,pbVar8,pbVar7 + 0x244,pbVar7,uVar5);
        FUN_0042c5e0(local_13c);
        *(undefined4 *)(param_1 + 0x118) = local_24;
        FUN_00468050(local_20);
      }
      else {
        iVar1 = (uint)*pbVar7 + *(short *)(pbVar7 + 4) * 6;
        pbVar4 = pbVar7 + -0xc;
        pbVar3 = pbVar8;
        while (pbVar2 = pbVar4, iVar1 * 1000 < iVar6) {
          FUN_0042c5e0(pbVar2);
          *(undefined4 *)(pbVar3 + 0x118) = *(undefined4 *)(pbVar2 + 0x118);
          FUN_00468050(pbVar2 + 0x11c);
          pbVar4 = pbVar2 + -0x128;
          pbVar3 = pbVar2;
          iVar1 = (uint)pbVar2[-0x11c] + *(short *)(pbVar2 + -0x118) * 6;
        }
        FUN_0042c5e0(local_13c);
        *(undefined4 *)(pbVar3 + 0x118) = local_24;
        FUN_00468050(local_20);
      }
      local_8 = 0xffffffff;
      if (local_20[0] != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
        operator_delete(local_20[0]);
      }
      pbVar8 = pbVar8 + 0x128;
      pbVar7 = pbVar7 + 0x128;
    } while (pbVar8 != param_2);
  }
  local_8 = 0xffffffff;
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}


/* FUN_00454e30 @ 00454e30  kind=gamemisc  attributed-by=caller-vote  size=176 */

void FUN_00454e30(undefined8 *param_1,undefined8 *param_2)

{
  float fVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  float fStack_c;
  
  puVar4 = param_1;
  if (param_1 != param_2) {
    while (puVar4 = (undefined8 *)((int)puVar4 + 0xc), puVar4 != param_2) {
      uVar2 = *puVar4;
      uVar3 = *(undefined4 *)(puVar4 + 1);
      fStack_c = (float)((ulonglong)uVar2 >> 0x20);
      puVar5 = puVar4;
      if (*(float *)((int)param_1 + 4) <= fStack_c) {
        fVar1 = *(float *)(puVar4 + -1);
        while (fStack_c < fVar1) {
          *puVar5 = *(undefined8 *)((int)puVar5 + -0xc);
          *(undefined4 *)(puVar5 + 1) = *(undefined4 *)((int)puVar5 + -4);
          fVar1 = *(float *)((int)puVar5 + -0x14);
          puVar5 = (undefined8 *)((int)puVar5 + -0xc);
        }
        *puVar5 = uVar2;
        *(undefined4 *)(puVar5 + 1) = uVar3;
      }
      else {
        for (; param_1 != puVar5; puVar5 = (undefined8 *)((int)puVar5 + -0xc)) {
          *puVar5 = *(undefined8 *)((int)puVar5 + -0xc);
          *(undefined4 *)(puVar5 + 1) = *(undefined4 *)((int)puVar5 + -4);
        }
        *param_1 = uVar2;
        *(undefined4 *)(param_1 + 1) = uVar3;
      }
    }
  }
  return;
}


/* FUN_00455070 @ 00455070  kind=gamemisc  attributed-by=caller-vote  size=298 */

void FUN_00455070(int param_1,int param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  float *pfVar3;
  float fVar4;
  undefined8 uVar5;
  undefined4 uVar6;
  int iVar7;
  undefined4 uVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  float fStack_10;
  
  iVar7 = (param_2 - param_1) / 0xc;
  iVar14 = iVar7 / 2;
  if (0 < iVar14) {
    iVar9 = iVar14 * 2 + 2;
    iVar10 = param_1 + iVar14 * 0xc;
    do {
      uVar5 = *(undefined8 *)(iVar10 + -0xc);
      uVar6 = *(undefined4 *)(iVar10 + -4);
      iVar9 = iVar9 + -2;
      iVar14 = iVar14 + -1;
      iVar13 = iVar9;
      iVar11 = iVar14;
      while (iVar12 = iVar13, iVar12 < iVar7) {
        fVar4 = *(float *)(param_1 + -8 + iVar12 * 0xc);
        pfVar3 = (float *)(param_1 + 4 + iVar12 * 0xc);
        if (*pfVar3 <= fVar4 && fVar4 != *pfVar3) {
          iVar12 = iVar12 + -1;
        }
        puVar1 = (undefined4 *)(param_1 + iVar12 * 0xc);
        uVar8 = puVar1[1];
        puVar2 = (undefined4 *)(param_1 + iVar11 * 0xc);
        *puVar2 = *puVar1;
        puVar2[1] = uVar8;
        *(undefined4 *)(param_1 + 8 + iVar11 * 0xc) = *(undefined4 *)(param_1 + 8 + iVar12 * 0xc);
        iVar11 = iVar12;
        iVar13 = iVar12 * 2 + 2;
      }
      if (iVar12 == iVar7) {
        puVar2 = (undefined4 *)(param_1 + -0xc + iVar7 * 0xc);
        uVar8 = puVar2[1];
        puVar1 = (undefined4 *)(param_1 + iVar11 * 0xc);
        *puVar1 = *puVar2;
        puVar1[1] = uVar8;
        *(undefined4 *)(param_1 + 8 + iVar11 * 0xc) = *(undefined4 *)(param_1 + -4 + iVar7 * 0xc);
        iVar11 = iVar7 + -1;
      }
      if (iVar14 < iVar11) {
        fStack_10 = (float)((ulonglong)uVar5 >> 0x20);
        do {
          iVar13 = (iVar11 + -1) / 2;
          pfVar3 = (float *)(param_1 + 4 + iVar13 * 0xc);
          if (fStack_10 < *pfVar3 || fStack_10 == *pfVar3) break;
          puVar1 = (undefined4 *)(param_1 + iVar13 * 0xc);
          uVar8 = puVar1[1];
          puVar2 = (undefined4 *)(param_1 + iVar11 * 0xc);
          *puVar2 = *puVar1;
          puVar2[1] = uVar8;
          *(undefined4 *)(param_1 + 8 + iVar11 * 0xc) = *(undefined4 *)(param_1 + 8 + iVar13 * 0xc);
          iVar11 = iVar13;
        } while (iVar14 < iVar13);
      }
      *(undefined8 *)(param_1 + iVar11 * 0xc) = uVar5;
      *(undefined4 *)(param_1 + 8 + iVar11 * 0xc) = uVar6;
      iVar10 = iVar10 + -0xc;
    } while (0 < iVar14);
  }
  return;
}


/* FUN_004551b0 @ 004551b0  kind=gamemisc  attributed-by=caller-vote  size=182 */

void FUN_004551b0(int param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  
  iVar2 = ((uint)*(byte *)(param_2 + 0xc) + *(short *)(param_2 + 0x10) * 6) * 1000;
  iVar1 = (uint)*(byte *)(param_1 + 0xc) + *(short *)(param_1 + 0x10) * 6;
  if (iVar2 + iVar1 * -1000 != 0 && iVar1 * 1000 <= iVar2) {
    FUN_00458c10(param_2,param_1);
  }
  iVar2 = ((uint)*(byte *)(param_3 + 0xc) + *(short *)(param_3 + 0x10) * 6) * 1000;
  iVar1 = (uint)*(byte *)(param_2 + 0xc) + *(short *)(param_2 + 0x10) * 6;
  if (iVar2 + iVar1 * -1000 != 0 && iVar1 * 1000 <= iVar2) {
    FUN_00458c10(param_3,param_2);
    iVar2 = ((uint)*(byte *)(param_2 + 0xc) + *(short *)(param_2 + 0x10) * 6) * 1000;
    iVar1 = (uint)*(byte *)(param_1 + 0xc) + *(short *)(param_1 + 0x10) * 6;
    if (iVar2 + iVar1 * -1000 != 0 && iVar1 * 1000 <= iVar2) {
      FUN_00458c10(param_2,param_1);
    }
  }
  return;
}


/* FUN_004553c0 @ 004553c0  kind=gamemisc  attributed-by=caller-vote  size=172 */

void FUN_004553c0(int param_1,int param_2,int param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = (param_3 - param_1) / 0x128;
  if (0x28 < iVar1) {
    iVar1 = iVar1 + 1;
    iVar1 = (int)((iVar1 >> 0x1f & 7U) + iVar1) >> 3;
    iVar2 = iVar1 * 0x128;
    FUN_004551b0(param_1,iVar2 + param_1,iVar1 * 0x250 + param_1,param_4);
    FUN_004551b0(param_2 + iVar1 * -0x128,param_2,iVar2 + param_2,param_4);
    iVar3 = param_3 + iVar1 * -0x128;
    FUN_004551b0(param_3 + iVar1 * -0x250,iVar3,param_3,param_4);
    FUN_004551b0(param_1 + iVar2,param_2,iVar3,param_4);
    return;
  }
  FUN_004551b0(param_1,param_2,param_3,param_4);
  return;
}


/* FUN_00455510 @ 00455510  kind=gamemisc  attributed-by=caller-vote  size=173 */

void FUN_00455510(int param_1,int param_2,int param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = (param_3 - param_1) / 0xc;
  if (0x28 < iVar1) {
    iVar1 = iVar1 + 1;
    iVar2 = (int)(iVar1 + (iVar1 >> 0x1f & 7U)) >> 3;
    iVar1 = iVar2 * 0xc + param_1;
    FUN_00455340(param_1,iVar1,iVar2 * 0x18 + param_1,param_4);
    FUN_00455340(param_2 + iVar2 * -0xc,param_2,iVar2 * 0xc + param_2,param_4);
    iVar3 = param_3 + iVar2 * -0xc;
    FUN_00455340(param_3 + iVar2 * -0x18,iVar3,param_3,param_4);
    FUN_00455340(iVar1,param_2,iVar3,param_4);
    return;
  }
  FUN_00455340(param_1,param_2,param_3,param_4);
  return;
}


/* FUN_004556b0 @ 004556b0  kind=gamemisc  attributed-by=caller-vote  size=87 */

int FUN_004556b0(int param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  
  if (param_1 == param_2) {
    return param_3;
  }
  do {
    iVar1 = param_2 + -0x128;
    iVar2 = param_3 + -0x128;
    FUN_0042c5e0(iVar1);
    *(undefined4 *)(param_3 + -0x10) = *(undefined4 *)(param_2 + -0x10);
    FUN_00468050(param_2 + -0xc);
    param_2 = iVar1;
    param_3 = iVar2;
  } while (iVar1 != param_1);
  return iVar2;
}


/* FUN_004559c0 @ 004559c0  kind=gamemisc  attributed-by=caller-vote  size=254 */

void FUN_004559c0(undefined4 *param_1,int param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  int iVar4;
  uint uVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  undefined4 *puVar11;
  undefined4 *puVar12;
  int local_1c;
  
  uVar5 = DAT_0076aa78 ^ (uint)&stack0xfffffffc;
  iVar10 = (int)param_3 - (int)param_1 >> 4;
  iVar9 = param_2 - (int)param_1 >> 4;
  iVar8 = iVar9;
  local_1c = iVar10;
  while (iVar4 = iVar8, iVar4 != 0) {
    iVar8 = local_1c % iVar4;
    local_1c = iVar4;
  }
  if ((local_1c < iVar10) && (0 < local_1c)) {
    puVar12 = param_1 + local_1c * 4;
    do {
      puVar7 = puVar12 + iVar9 * 4;
      puVar11 = puVar12;
      if (puVar12 + iVar9 * 4 == param_3) {
        puVar7 = param_1;
      }
      do {
        puVar6 = puVar7;
        uVar1 = *puVar11;
        uVar2 = puVar11[3];
        uVar3 = *(undefined8 *)(puVar11 + 1);
        *puVar11 = *puVar6;
        puVar11[1] = puVar6[1];
        puVar11[2] = puVar6[2];
        puVar11[3] = puVar6[3];
        *puVar6 = uVar1;
        *(undefined8 *)(puVar6 + 1) = uVar3;
        puVar6[3] = uVar2;
        iVar8 = (int)param_3 - (int)puVar6 >> 4;
        if (iVar9 < iVar8) {
          puVar7 = puVar6 + iVar9 * 4;
        }
        else {
          puVar7 = param_1 + (iVar9 - iVar8) * 4;
        }
        puVar11 = puVar6;
      } while (puVar7 != puVar12);
      local_1c = local_1c + -1;
      puVar12 = puVar12 + -4;
    } while (0 < local_1c);
  }
  __security_check_cookie(uVar5 ^ (uint)&stack0xfffffffc);
  return;
}


/* FUN_00455ac0 @ 00455ac0  kind=gamemisc  attributed-by=caller-vote  size=355 */

void FUN_00455ac0(int param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int local_158;
  undefined1 local_150 [328];
  uint local_8;
  
  local_8 = DAT_0076aa78 ^ (uint)&stack0xfffffffc;
  iVar5 = (param_3 - param_1) / 0x148;
  iVar1 = (param_2 - param_1) / 0x148;
  iVar3 = iVar1;
  local_158 = iVar5;
  while (iVar2 = iVar3, iVar2 != 0) {
    iVar3 = local_158 % iVar2;
    local_158 = iVar2;
  }
  if ((local_158 < iVar5) && (0 < local_158)) {
    iVar5 = local_158 * 0x148 + param_1;
    do {
      iVar3 = iVar5 + iVar1 * 0x148;
      iVar2 = iVar5;
      if (iVar3 == param_3) {
        iVar3 = param_1;
      }
      do {
        FUN_0044a8c0(iVar2);
        FUN_0044b3b0(iVar3);
        FUN_0044b3b0(local_150);
        iVar2 = (param_3 - iVar3) / 0x148;
        if (iVar1 < iVar2) {
          iVar4 = iVar3 + iVar1 * 0x148;
        }
        else {
          iVar4 = (iVar1 - iVar2) * 0x148 + param_1;
        }
        iVar2 = iVar3;
        iVar3 = iVar4;
      } while (iVar4 != iVar5);
      local_158 = local_158 + -1;
      iVar5 = iVar5 + -0x148;
    } while (0 < local_158);
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


/* FUN_00455c30 @ 00455c30  kind=gamemisc  attributed-by=caller-vote  size=324 */

void FUN_00455c30(int param_1,int param_2,int param_3,undefined4 param_4)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  undefined1 local_c [8];
  
  iVar2 = param_2 - param_1;
  do {
    iVar2 = iVar2 / 0x128;
    if (iVar2 < 0x21) {
LAB_00455d13:
      if (1 < iVar2) {
        FUN_00454b50(param_1,param_2,param_4,0);
      }
      return;
    }
    if (param_3 < 1) {
      if (0x20 < iVar2) {
        if (1 < (param_2 - param_1) / 0x128) {
          FUN_00454ef0(param_1,param_2,param_4,0,0);
        }
        FUN_00455fb0(param_1,param_2,param_4);
        return;
      }
      goto LAB_00455d13;
    }
    piVar1 = (int *)FUN_00456160(local_c,param_1,param_2,param_4);
    iVar3 = *piVar1;
    iVar2 = piVar1[1];
    param_3 = param_3 / 2 + (param_3 / 2) / 2;
    if ((iVar3 - param_1) / 0x128 < (param_2 - iVar2) / 0x128) {
      FUN_00455c30(param_1,iVar3,param_3,param_4);
      param_1 = iVar2;
      iVar3 = param_2;
    }
    else {
      FUN_00455c30(iVar2,param_2,param_3,param_4);
    }
    iVar2 = iVar3 - param_1;
    param_2 = iVar3;
  } while( true );
}


/* FUN_00455e70 @ 00455e70  kind=gamemisc  attributed-by=caller-vote  size=310 */

void FUN_00455e70(int param_1,int param_2,int param_3,undefined4 param_4)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  undefined1 local_c [8];
  
  iVar2 = param_2 - param_1;
  do {
    iVar2 = iVar2 / 0xc;
    if (iVar2 < 0x21) {
LAB_00455f48:
      if (1 < iVar2) {
        FUN_00454e30(param_1,param_2,param_4,0);
      }
      return;
    }
    if (param_3 < 1) {
      if (0x20 < iVar2) {
        if (1 < (param_2 - param_1) / 0xc) {
          FUN_00455070(param_1,param_2,param_4,0,0);
        }
        FUN_004560c0(param_1,param_2,param_4);
        return;
      }
      goto LAB_00455f48;
    }
    piVar1 = (int *)FUN_00456710(local_c,param_1,param_2,param_4);
    iVar3 = *piVar1;
    iVar2 = piVar1[1];
    param_3 = param_3 / 2 + (param_3 / 2) / 2;
    if ((iVar3 - param_1) / 0xc < (param_2 - iVar2) / 0xc) {
      FUN_00455e70(param_1,iVar3,param_3,param_4);
      param_1 = iVar2;
      iVar3 = param_2;
    }
    else {
      FUN_00455e70(iVar2,param_2,param_3,param_4);
    }
    iVar2 = iVar3 - param_1;
    param_2 = iVar3;
  } while( true );
}


/* FUN_00455fb0 @ 00455fb0  kind=gamemisc  attributed-by=caller-vote  size=96 */

void FUN_00455fb0(int param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  
  for (iVar1 = param_2 - param_1; 1 < iVar1 / 0x128; iVar1 = iVar1 + -0x128) {
    FUN_00455760(param_1,param_2,param_3,0);
    param_2 = param_2 + -0x128;
  }
  return;
}


/* FUN_004560c0 @ 004560c0  kind=gamemisc  attributed-by=caller-vote  size=151 */

void FUN_004560c0(undefined8 *param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  undefined8 *puVar2;
  undefined8 local_10;
  undefined4 local_8;
  
  iVar1 = param_2 - (int)param_1;
  if (1 < iVar1 / 0xc) {
    puVar2 = (undefined8 *)(param_2 + -0xc);
    do {
      local_10 = *puVar2;
      local_8 = *(undefined4 *)(puVar2 + 1);
      *puVar2 = *param_1;
      *(undefined4 *)(puVar2 + 1) = *(undefined4 *)(param_1 + 1);
      FUN_00451b10(param_1,0,(iVar1 + -0xc) / 0xc,&local_10,param_3);
      puVar2 = (undefined8 *)((int)puVar2 + -0xc);
      iVar1 = (int)puVar2 + (0xc - (int)param_1);
    } while (1 < iVar1 / 0xc);
  }
  return;
}


/* FUN_00456160 @ 00456160  kind=gamemisc  attributed-by=caller-vote  size=620 */

void FUN_00456160(uint *param_1,uint param_2,uint param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  byte *pbVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint local_c;
  uint local_8;
  
  local_8 = ((int)(param_3 - param_2) / 0x250) * 0x128 + param_2;
  FUN_004553c0(param_2,local_8,param_3 - 0x128,param_4);
  uVar6 = local_8 + 0x128;
  if (param_2 < local_8) {
    pbVar5 = (byte *)(local_8 - 0x11c);
    do {
      iVar1 = (uint)*pbVar5 + *(short *)(pbVar5 + 4) * 6;
      iVar2 = iVar1 * 1000;
      iVar4 = ((uint)pbVar5[0x128] + *(short *)(pbVar5 + 300) * 6) * 1000;
      if ((iVar4 < iVar2) || (iVar4 + iVar1 * -1000 != 0 && iVar2 <= iVar4)) break;
      local_8 = local_8 - 0x128;
      pbVar5 = pbVar5 + -0x128;
    } while (param_2 < local_8);
  }
  uVar9 = uVar6;
  local_c = uVar6;
  uVar8 = local_8;
  if (uVar6 < param_3) {
    iVar1 = (uint)*(byte *)(local_8 + 0xc) + *(short *)(local_8 + 0x10) * 6;
    iVar2 = iVar1 * 1000;
    do {
      iVar4 = (uint)*(byte *)(uVar6 + 0xc) + *(short *)(uVar6 + 0x10) * 6;
      iVar3 = iVar4 * 1000;
      uVar9 = uVar6;
      local_c = uVar6;
      if ((iVar3 + iVar1 * -1000 != 0 && iVar2 <= iVar3) ||
         (iVar2 + iVar4 * -1000 != 0 && iVar3 <= iVar2)) break;
      uVar6 = uVar6 + 0x128;
      uVar9 = uVar6;
      local_c = uVar6;
    } while (uVar6 < param_3);
  }
joined_r0x00456257:
  do {
    if (param_3 <= uVar9) {
LAB_004562b3:
      uVar7 = uVar9;
      if (param_2 < local_8) {
        pbVar5 = (byte *)(local_8 - 0x11c);
        do {
          iVar1 = (uint)*pbVar5 + *(short *)(pbVar5 + 4) * 6;
          iVar2 = iVar1 * 1000;
          iVar4 = ((uint)*(byte *)(uVar8 + 0xc) + *(short *)(uVar8 + 0x10) * 6) * 1000;
          uVar7 = local_c;
          if (iVar2 <= iVar4) {
            if (iVar4 + iVar1 * -1000 != 0 && iVar2 <= iVar4) break;
            uVar8 = uVar8 - 0x128;
            FUN_00458c10(uVar8,pbVar5 + -0xc);
          }
          local_8 = local_8 - 0x128;
          pbVar5 = pbVar5 + -0x128;
        } while (param_2 < local_8);
      }
      if (local_8 == param_2) {
        if (uVar7 == param_3) {
          *param_1 = uVar8;
          param_1[1] = uVar6;
          return;
        }
        if (uVar6 != uVar7) {
          FUN_00458c10(uVar8,uVar6);
        }
        uVar6 = uVar6 + 0x128;
        FUN_00458c10(uVar8,uVar7);
        uVar9 = uVar7 + 0x128;
        local_c = uVar7 + 0x128;
        uVar8 = uVar8 + 0x128;
      }
      else {
        local_8 = local_8 - 0x128;
        if (uVar7 == param_3) {
          uVar8 = uVar8 - 0x128;
          if (local_8 != uVar8) {
            FUN_00458c10(local_8,uVar8);
          }
          uVar6 = uVar6 - 0x128;
          FUN_00458c10(uVar8,uVar6);
          uVar9 = uVar7;
        }
        else {
          FUN_00458c10(uVar7,local_8);
          uVar9 = uVar7 + 0x128;
          local_c = uVar7 + 0x128;
        }
      }
      goto joined_r0x00456257;
    }
    iVar1 = (uint)*(byte *)(uVar9 + 0xc) + *(short *)(uVar9 + 0x10) * 6;
    iVar3 = iVar1 * 1000;
    iVar2 = (uint)*(byte *)(uVar8 + 0xc) + *(short *)(uVar8 + 0x10) * 6;
    iVar4 = iVar2 * 1000;
    uVar7 = uVar6;
    if (iVar4 + iVar1 * -1000 == 0 || iVar4 < iVar3) {
      local_c = uVar9;
      if (iVar3 + iVar2 * -1000 != 0 && iVar4 <= iVar3) goto LAB_004562b3;
      uVar7 = uVar6 + 0x128;
      FUN_00458c10(uVar6,uVar9);
    }
    uVar9 = uVar9 + 0x128;
    uVar6 = uVar7;
    local_c = uVar9;
  } while( true );
}


/* FUN_00456710 @ 00456710  kind=gamemisc  attributed-by=caller-vote  size=715 */

void FUN_00456710(undefined4 *param_1,undefined8 *param_2,undefined8 *param_3,undefined4 param_4)

{
  float fVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined8 *local_c;
  undefined8 *local_8;
  
  local_8 = (undefined8 *)((int)param_2 + (((int)param_3 - (int)param_2) / 0x18) * 0xc);
  FUN_00455510(param_2,local_8,(int)param_3 + -0xc,param_4);
  puVar7 = (undefined8 *)((int)local_8 + 0xc);
  for (; param_2 < local_8; local_8 = (undefined8 *)((int)local_8 + -0xc)) {
    if ((*(float *)(local_8 + -1) < *(float *)((int)local_8 + 4)) ||
       (*(float *)((int)local_8 + 4) < *(float *)(local_8 + -1))) break;
  }
  puVar4 = puVar7;
  local_c = puVar7;
  puVar9 = local_8;
  if (puVar7 < param_3) {
    if (3 < ((int)param_3 + (0xb - (int)puVar7)) / 0xc) {
      fVar1 = *(float *)((int)local_8 + 4);
      do {
        puVar4 = puVar7;
        local_c = puVar7;
        if ((*(float *)((int)puVar7 + 4) < fVar1) || (fVar1 < *(float *)((int)puVar7 + 4)))
        goto joined_r0x00456842;
        if ((*(float *)(puVar7 + 2) < fVar1) || (fVar1 < *(float *)(puVar7 + 2))) {
          puVar7 = (undefined8 *)((int)puVar7 + 0xc);
          puVar4 = puVar7;
          local_c = puVar7;
          goto joined_r0x00456842;
        }
        if ((*(float *)((int)puVar7 + 0x1c) < fVar1) || (fVar1 < *(float *)((int)puVar7 + 0x1c))) {
          puVar7 = puVar7 + 3;
          puVar4 = puVar7;
          local_c = puVar7;
          goto joined_r0x00456842;
        }
        if ((*(float *)(puVar7 + 5) < fVar1) || (fVar1 < *(float *)(puVar7 + 5))) {
          puVar7 = (undefined8 *)((int)puVar7 + 0x24);
          puVar4 = puVar7;
          local_c = puVar7;
          goto joined_r0x00456842;
        }
        puVar7 = puVar7 + 6;
      } while ((int)puVar7 < (int)param_3 + -0x24);
    }
    puVar4 = puVar7;
    local_c = puVar7;
    if (puVar7 < param_3) {
      do {
        puVar4 = puVar7;
        local_c = puVar7;
        if ((*(float *)((int)puVar7 + 4) < *(float *)((int)local_8 + 4)) ||
           (*(float *)((int)local_8 + 4) < *(float *)((int)puVar7 + 4))) break;
        puVar7 = (undefined8 *)((int)puVar7 + 0xc);
        puVar4 = puVar7;
        local_c = puVar7;
      } while (puVar7 < param_3);
    }
  }
joined_r0x00456842:
  do {
    puVar5 = local_8;
    if (param_3 <= puVar7) {
joined_r0x0045689a:
      for (; param_2 < local_8; local_8 = (undefined8 *)((int)local_8 + -0xc)) {
        puVar6 = (undefined8 *)((int)puVar5 + -0xc);
        puVar8 = puVar9;
        puVar7 = local_c;
        if (*(float *)((int)puVar9 + 4) <= *(float *)(puVar5 + -1)) {
          if (*(float *)((int)puVar9 + 4) < *(float *)(puVar5 + -1)) break;
          uVar3 = *(undefined4 *)((int)puVar9 + -4);
          uVar2 = *(undefined8 *)((int)puVar9 + -0xc);
          puVar8 = (undefined8 *)((int)puVar9 + -0xc);
          *puVar8 = *puVar6;
          *(undefined4 *)((int)puVar9 + -4) = *(undefined4 *)((int)puVar5 + -4);
          *puVar6 = uVar2;
          *(undefined4 *)((int)puVar5 + -4) = uVar3;
        }
        puVar9 = puVar8;
        puVar5 = puVar6;
      }
      if (local_8 == param_2) {
        if (puVar7 == param_3) {
          *param_1 = puVar9;
          param_1[1] = puVar4;
          return;
        }
        if (puVar4 != puVar7) {
          uVar2 = *puVar9;
          uVar3 = *(undefined4 *)(puVar9 + 1);
          *puVar9 = *puVar4;
          *(undefined4 *)(puVar9 + 1) = *(undefined4 *)(puVar4 + 1);
          *puVar4 = uVar2;
          *(undefined4 *)(puVar4 + 1) = uVar3;
        }
        uVar2 = *puVar9;
        uVar3 = *(undefined4 *)(puVar9 + 1);
        *puVar9 = *puVar7;
        *(undefined4 *)(puVar9 + 1) = *(undefined4 *)(puVar7 + 1);
        *puVar7 = uVar2;
        *(undefined4 *)(puVar7 + 1) = uVar3;
        puVar7 = (undefined8 *)((int)puVar7 + 0xc);
        puVar4 = (undefined8 *)((int)puVar4 + 0xc);
        local_c = puVar7;
        puVar9 = (undefined8 *)((int)puVar9 + 0xc);
      }
      else {
        puVar5 = (undefined8 *)((int)local_8 + -0xc);
        if (puVar7 == param_3) {
          puVar8 = (undefined8 *)((int)puVar9 + -0xc);
          if (puVar5 != puVar8) {
            uVar2 = *puVar5;
            uVar3 = *(undefined4 *)((int)local_8 + -4);
            *puVar5 = *puVar8;
            *(undefined4 *)((int)local_8 + -4) = *(undefined4 *)((int)puVar9 + -4);
            *puVar8 = uVar2;
            *(undefined4 *)((int)puVar9 + -4) = uVar3;
          }
          uVar2 = *puVar8;
          uVar3 = *(undefined4 *)((int)puVar9 + -4);
          *puVar8 = *(undefined8 *)((int)puVar4 - 0xc);
          *(undefined4 *)((int)puVar9 + -4) = *(undefined4 *)((int)puVar4 - 4);
          *(undefined8 *)((int)puVar4 - 0xcU) = uVar2;
          *(undefined4 *)((int)puVar4 - 4) = uVar3;
          puVar4 = (undefined8 *)((int)puVar4 - 0xcU);
          local_8 = puVar5;
          puVar9 = puVar8;
        }
        else {
          uVar2 = *puVar7;
          uVar3 = *(undefined4 *)(puVar7 + 1);
          *puVar7 = *puVar5;
          *(undefined4 *)(puVar7 + 1) = *(undefined4 *)((int)local_8 + -4);
          *puVar5 = uVar2;
          *(undefined4 *)((int)local_8 + -4) = uVar3;
          puVar7 = (undefined8 *)((int)puVar7 + 0xc);
          local_c = puVar7;
          local_8 = puVar5;
        }
      }
      goto joined_r0x00456842;
    }
    puVar8 = puVar4;
    if (*(float *)((int)puVar7 + 4) <= *(float *)((int)puVar9 + 4)) {
      local_c = puVar7;
      if (*(float *)((int)puVar7 + 4) < *(float *)((int)puVar9 + 4)) goto joined_r0x0045689a;
      puVar8 = (undefined8 *)((int)puVar4 + 0xc);
      uVar2 = *puVar4;
      uVar3 = *(undefined4 *)(puVar4 + 1);
      *puVar4 = *puVar7;
      *(undefined4 *)(puVar4 + 1) = *(undefined4 *)(puVar7 + 1);
      *puVar7 = uVar2;
      *(undefined4 *)(puVar7 + 1) = uVar3;
    }
    puVar7 = (undefined8 *)((int)puVar7 + 0xc);
    puVar4 = puVar8;
    local_c = puVar7;
  } while( true );
}


/* FUN_004569f0 @ 004569f0  kind=gamemisc  attributed-by=caller-vote  size=73 */

int FUN_004569f0(int param_1,int param_2,int param_3)

{
  if (param_1 == param_2) {
    return param_3;
  }
  do {
    if (param_3 != 0) {
      FUN_0040ee70(param_1);
      *(undefined4 *)(param_3 + 0x118) = *(undefined4 *)(param_1 + 0x118);
    }
    param_1 = param_1 + 0x11c;
    param_3 = param_3 + 0x11c;
  } while (param_1 != param_2);
  return param_3;
}


/* FUN_00456a40 @ 00456a40  kind=gamemisc  attributed-by=caller-vote  size=122 */

int FUN_00456a40(int param_1,int param_2,int param_3)

{
  void *local_10;
  undefined1 *puStack_c;
  undefined1 local_8;
  undefined3 uStack_7;
  
  puStack_c = &LAB_006e36e1;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  uStack_7 = 0;
  for (; param_1 != param_2; param_1 = param_1 + 8) {
    local_8 = 1;
    if (param_3 != 0) {
      FUN_00459110(param_1);
    }
    param_3 = param_3 + 8;
  }
  ExceptionList = local_10;
  return param_3;
}


/* FUN_00456ba0 @ 00456ba0  kind=gamemisc  attributed-by=caller-vote  size=66 */

void FUN_00456ba0(int *param_1,int *param_2,int *param_3)

{
  int *piVar1;
  
  if (param_1 != param_2) {
    piVar1 = param_3 + 3;
    do {
      if (param_3 != (int *)0x0) {
        *param_3 = param_1[2];
        piVar1[-2] = param_1[3];
        piVar1[-1] = param_1[4];
        *piVar1 = param_1[5];
      }
      param_1 = (int *)*param_1;
      param_3 = param_3 + 4;
      piVar1 = piVar1 + 4;
    } while (param_1 != param_2);
  }
  return;
}


/* FUN_00456bf0 @ 00456bf0  kind=gamemisc  attributed-by=caller-vote  size=63 */

int FUN_00456bf0(int *param_1,int *param_2,int param_3)

{
  if (param_1 == param_2) {
    return param_3;
  }
  do {
    if (param_3 != 0) {
      FUN_0044a8c0(param_1 + 2);
    }
    param_1 = (int *)*param_1;
    param_3 = param_3 + 0x148;
  } while (param_1 != param_2);
  return param_3;
}


/* FUN_00456c30 @ 00456c30  kind=gamemisc  attributed-by=caller-vote  size=79 */

int FUN_00456c30(int param_1,int param_2,int param_3)

{
  if (param_1 == param_2) {
    return param_3;
  }
  do {
    if (param_3 != 0) {
      FUN_0040ee70(param_1);
      *(undefined4 *)(param_3 + 0x118) = *(undefined4 *)(param_1 + 0x118);
    }
    param_1 = param_1 + 0x11c;
    param_3 = param_3 + 0x11c;
  } while (param_1 != param_2);
  return param_3;
}


/* FUN_00456d60 @ 00456d60  kind=gamemisc  attributed-by=caller-vote  size=92 */

undefined4 * FUN_00456d60(int param_1,int param_2,undefined4 *param_3)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  
  if (param_1 != param_2) {
    puVar2 = (undefined4 *)(param_1 + 8);
    param_1 = param_1 - (int)param_3;
    puVar1 = param_3 + 3;
    do {
      if (param_3 != (undefined4 *)0x0) {
        *param_3 = *(undefined4 *)(param_1 + -0xc + (int)puVar1);
        puVar1[-2] = puVar2[-1];
        puVar1[-1] = *puVar2;
        *puVar1 = puVar2[1];
      }
      puVar1 = puVar1 + 4;
      param_3 = param_3 + 4;
      puVar2 = puVar2 + 4;
    } while (param_1 + -0xc + (int)puVar1 != param_2);
    return param_3;
  }
  return param_3;
}


/* FUN_00456f70 @ 00456f70  kind=gamemisc  attributed-by=caller-vote  size=54 */

undefined4 * FUN_00456f70(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  if (param_1 == param_2) {
    return param_3;
  }
  do {
    if (param_3 != (undefined4 *)0x0) {
      *param_3 = *param_1;
      param_3[1] = param_1[1];
    }
    param_1 = param_1 + 2;
    param_3 = param_3 + 2;
  } while (param_1 != param_2);
  return param_3;
}


/* FUN_004571d0 @ 004571d0  kind=gamemisc  attributed-by=caller-vote  size=210 */

void FUN_004571d0(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  int iVar2;
  void **ppvVar3;
  int iVar4;
  int *in_ECX;
  uint uStack_28;
  undefined1 local_18 [4];
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_006e37b0;
  uStack_28 = DAT_0076aa78 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_28;
  puVar1 = *(undefined4 **)*in_ECX;
  local_8 = 0;
  ppvVar3 = &local_10;
  local_10 = ExceptionList;
  for (; ExceptionList = ppvVar3, param_1 != param_2; param_1 = (undefined4 *)*param_1) {
    if (puVar1 == (undefined4 *)*in_ECX) goto LAB_00457258;
    FUN_0042c5e0(param_1 + 2);
    puVar1 = (undefined4 *)*puVar1;
    ppvVar3 = ExceptionList;
  }
LAB_00457236:
  FUN_00477bf0(local_18,puVar1,*in_ECX);
  ExceptionList = local_10;
  return;
LAB_00457258:
  for (; param_1 != param_2; param_1 = (undefined4 *)*param_1) {
    iVar2 = *in_ECX;
    iVar4 = FUN_00449b70(iVar2,*(undefined4 *)(iVar2 + 4),param_1 + 2);
    if (in_ECX[1] == 0xe38e37) {
                    /* WARNING: Subroutine does not return */
      std::_Xlength_error("list<T> too long");
    }
    in_ECX[1] = in_ECX[1] + 1;
    *(int *)(iVar2 + 4) = iVar4;
    **(int **)(iVar4 + 4) = iVar4;
  }
  goto LAB_00457236;
}


/* FUN_004572c0 @ 004572c0  kind=gamemisc  attributed-by=caller-vote  size=244 */

void FUN_004572c0(undefined4 *param_1,undefined4 *param_2)

{
  int iVar1;
  int iVar2;
  int *in_ECX;
  int *piVar3;
  uint uStack_28;
  int *local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_006e37d0;
  local_10 = ExceptionList;
  uStack_28 = DAT_0076aa78 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_28;
  ExceptionList = &local_10;
  piVar3 = (int *)*in_ECX;
  local_8 = 0;
  local_18 = in_ECX;
  while( true ) {
    piVar3 = (int *)*piVar3;
    if (param_1 == param_2) break;
    if (piVar3 == (int *)*local_18) goto LAB_00457348;
    if (piVar3 + 2 != param_1 + 2) {
      FUN_0040f680(param_1 + 2,0,0xffffffff);
    }
    piVar3[8] = param_1[8];
    piVar3[9] = param_1[9];
    piVar3[10] = param_1[10];
    piVar3[0xb] = param_1[0xb];
    param_1 = (undefined4 *)*param_1;
  }
LAB_004573a3:
  FUN_004e42c0(&local_18,piVar3,*local_18);
  ExceptionList = local_10;
  return;
LAB_00457348:
  for (; param_1 != param_2; param_1 = (undefined4 *)*param_1) {
    iVar1 = *local_18;
    iVar2 = FUN_004e0300(iVar1,*(undefined4 *)(iVar1 + 4),param_1 + 2);
    if (local_18[1] == 0x5555554) {
                    /* WARNING: Subroutine does not return */
      std::_Xlength_error("list<T> too long");
    }
    local_18[1] = local_18[1] + 1;
    *(int *)(iVar1 + 4) = iVar2;
    **(int **)(iVar2 + 4) = iVar2;
  }
  goto LAB_004573a3;
}


/* FUN_00457460 @ 00457460  kind=gamemisc  attributed-by=caller-vote  size=130 */

void FUN_00457460(float *param_1,float *param_2,undefined4 param_3,undefined4 param_4)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float10 fVar4;
  float fVar5;
  
  fVar4 = (float10)FUN_004ac150(param_3,param_4);
  fVar3 = (float)fVar4;
  fVar5 = 1.0 - fVar3;
  fVar1 = param_2[1];
  fVar2 = param_2[2];
  *param_1 = fVar5 * *param_1 + *param_2 * fVar3;
  param_1[1] = fVar5 * param_1[1] + fVar1 * fVar3;
  param_1[2] = fVar5 * param_1[2] + fVar2 * fVar3;
  return;
}


/* FUN_004574f0 @ 004574f0  kind=gamemisc  attributed-by=caller-vote  size=241 */

undefined4 FUN_004574f0(undefined4 param_1,void *param_2)

{
  undefined4 uVar1;
  void *pvVar2;
  int in_ECX;
  undefined4 in_stack_00000018;
  uint in_stack_0000001c;
  void *in_stack_00000020;
  uint in_stack_00000034;
  undefined1 uVar3;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_006e3808;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 1;
  FUN_0040c0a0(&stack0x00000020,0,0xffffffff);
  local_8._0_1_ = 2;
  uVar3 = 0;
  FUN_0040c0a0(&param_2,0,0xffffffff);
  local_8 = CONCAT31(local_8._1_3_,1);
  FUN_00457600(param_1,uVar3);
  uVar1 = **(undefined4 **)(*(int *)(in_ECX + 0x30) + -0xc);
  if (*(int *)(in_ECX + 0x2c) != *(int *)(in_ECX + 0x30)) {
    pvVar2 = *(void **)(*(int *)(in_ECX + 0x30) + -0xc);
    if (pvVar2 != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      operator_delete(pvVar2);
    }
    *(int *)(in_ECX + 0x30) = *(int *)(in_ECX + 0x30) + -0xc;
  }
  if (0xf < in_stack_0000001c) {
                    /* WARNING: Subroutine does not return */
    operator_delete(param_2);
  }
  in_stack_0000001c = 0xf;
  in_stack_00000018 = 0;
  param_2 = (void *)((uint)param_2 & 0xffffff00);
  if (0xf < in_stack_00000034) {
                    /* WARNING: Subroutine does not return */
    operator_delete(in_stack_00000020);
  }
  ExceptionList = local_10;
  return uVar1;
}


/* FUN_00457600 @ 00457600  kind=gamemisc  attributed-by=caller-vote  size=221 */

void FUN_00457600(undefined4 param_1,void *param_2)

{
  int iVar1;
  int *piVar2;
  undefined4 in_stack_00000018;
  uint in_stack_0000001c;
  void *in_stack_00000020;
  uint in_stack_00000034;
  undefined1 uVar3;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_006e3840;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 1;
  piVar2 = (int *)FUN_004042e0(param_1);
  iVar1 = *piVar2;
  if (-1 < iVar1) {
    uVar3 = 0;
    FUN_0040c0a0(&param_2,0,0xffffffff);
    FUN_00457ec0(uVar3);
    uVar3 = 0;
    FUN_0040c0a0(&stack0x00000020,0,0xffffffff);
    FUN_00457ec0(uVar3);
    FUN_0040da70(iVar1);
  }
  if (0xf < in_stack_0000001c) {
                    /* WARNING: Subroutine does not return */
    operator_delete(param_2);
  }
  in_stack_0000001c = 0xf;
  in_stack_00000018 = 0;
  param_2 = (void *)((uint)param_2 & 0xffffff00);
  if (0xf < in_stack_00000034) {
                    /* WARNING: Subroutine does not return */
    operator_delete(in_stack_00000020);
  }
  ExceptionList = local_10;
  return;
}


/* FUN_004576f0 @ 004576f0  kind=gamemisc  attributed-by=caller-vote  size=243 */

void __thiscall
FUN_004576f0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  int *piVar5;
  int *local_1c;
  undefined4 local_18;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006e1e48;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  puVar3 = (undefined4 *)FUN_00468910(&param_2);
  if ((void *)*puVar3 != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    operator_delete((void *)*puVar3);
  }
  puVar4 = operator_new(0x10);
  uVar2 = param_5;
  uVar1 = param_4;
  if (puVar4 == (undefined4 *)0x0) {
    puVar4 = (undefined4 *)0x0;
  }
  else {
    *(char *)(puVar4 + 1) = (char)param_6;
                    /* inlined constructor:
                       plasma::Widget::MemberFunctionConnection<cube::GameController>::MemberFunctionConnection<cube::GameController>
                        */
    *puVar4 = &plasma::Widget::MemberFunctionConnection<cube::GameController>::vftable;
    puVar4[2] = param_3;
    puVar4[3] = param_4;
  }
  *puVar3 = puVar4;
  if ((char)param_5 == '\0') {
    ExceptionList = local_10;
    return;
  }
  FUN_00629140(&local_1c);
  local_8 = 0;
  piVar5 = (int *)*local_1c;
  if (piVar5 != local_1c) {
    do {
      FUN_004576f0(piVar5[2],param_2,param_3,uVar1,uVar2,param_6);
      piVar5 = (int *)*piVar5;
    } while (piVar5 != local_1c);
  }
  piVar5 = (int *)*local_1c;
  *local_1c = (int)local_1c;
  local_1c[1] = (int)local_1c;
  local_18 = 0;
  if (piVar5 == local_1c) {
                    /* WARNING: Subroutine does not return */
    operator_delete(local_1c);
  }
                    /* WARNING: Subroutine does not return */
  operator_delete(piVar5);
}


/* FUN_00457800 @ 00457800  kind=gamemisc  attributed-by=caller-vote  size=149 */

void FUN_00457800(undefined4 *param_1,undefined4 *param_2)

{
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_006e3871;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = *param_2;
    param_1[6] = 0xf;
    param_1[5] = 0;
    *(undefined1 *)(param_1 + 1) = 0;
    FUN_0040c0a0(param_2 + 1,0,0xffffffff);
    param_1[8] = param_2[8];
    param_1[9] = param_2[9];
    param_1[10] = param_2[10];
    param_1[0xb] = param_2[0xb];
    param_1[0xc] = param_2[0xc];
    param_1[0xd] = param_2[0xd];
  }
  ExceptionList = local_10;
  return;
}


/* FUN_00457930 @ 00457930  kind=gamemisc  attributed-by=caller-vote  size=137 */

void FUN_00457930(int *param_1)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int in_ECX;
  int *piVar4;
  
  piVar2 = param_1;
  if (*(int *)(in_ECX + 0x34) != 0) {
    param_1 = (int *)__RTDynamicCast(*(int *)(in_ECX + 0x34),0,&plasma::Shape::RTTI_Type_Descriptor,
                                     &plasma::TextShape::RTTI_Type_Descriptor,0);
    if (param_1 != (int *)0x0) {
      iVar1 = *piVar2;
      iVar3 = FUN_00583cb0(iVar1,*(undefined4 *)(iVar1 + 4),&param_1);
      if (piVar2[1] == 0x15555554) {
                    /* WARNING: Subroutine does not return */
        std::_Xlength_error("list<T> too long");
      }
      piVar2[1] = piVar2[1] + 1;
      *(int *)(iVar1 + 4) = iVar3;
      **(int **)(iVar3 + 4) = iVar3;
    }
  }
  piVar4 = (int *)**(int **)(in_ECX + 0x2c);
  if (piVar4 != *(int **)(in_ECX + 0x2c)) {
    do {
      FUN_00457930(piVar2);
      piVar4 = (int *)*piVar4;
    } while (piVar4 != (int *)*(int *)(in_ECX + 0x2c));
  }
  return;
}


/* FUN_004579c0 @ 004579c0  kind=gamemisc  attributed-by=caller-vote  size=76 */

void FUN_004579c0(undefined4 *param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 *puVar1;
  undefined4 *in_ECX;
  
  if (param_2 == *(int *)*in_ECX) {
    FUN_004dc5b0(param_2,param_3,param_4,param_4);
    *param_1 = *(undefined4 *)*in_ECX;
    return;
  }
  puVar1 = *(undefined4 **)(param_2 + 4);
  FUN_004dc5b0(param_2,param_3,param_4,param_4);
  *param_1 = *puVar1;
  return;
}


/* FUN_00457a10 @ 00457a10  kind=gamemisc  attributed-by=caller-vote  size=76 */

void FUN_00457a10(undefined4 *param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 *puVar1;
  undefined4 *in_ECX;
  
  if (param_2 == *(int *)*in_ECX) {
    FUN_004544d0(param_2,param_3,param_4,param_4);
    *param_1 = *(undefined4 *)*in_ECX;
    return;
  }
  puVar1 = *(undefined4 **)(param_2 + 4);
  FUN_004544d0(param_2,param_3,param_4,param_4);
  *param_1 = *puVar1;
  return;
}


/* FUN_00457a60 @ 00457a60  kind=gamemisc  attributed-by=caller-vote  size=45 */

void FUN_00457a60(int *param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int *in_ECX;
  
  iVar1 = *in_ECX;
  FUN_00452690(param_2,param_3,param_4,param_2);
  *param_1 = (param_2 - iVar1 & 0xfffffff0U) + *in_ECX;
  return;
}


/* FUN_00457a90 @ 00457a90  kind=gamemisc  attributed-by=caller-vote  size=76 */

void FUN_00457a90(undefined4 *param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 *puVar1;
  undefined4 *in_ECX;
  
  if (param_2 == *(int *)*in_ECX) {
    FUN_004dc4e0(param_2,param_3,param_4,param_4);
    *param_1 = *(undefined4 *)*in_ECX;
    return;
  }
  puVar1 = *(undefined4 **)(param_2 + 4);
  FUN_004dc4e0(param_2,param_3,param_4,param_4);
  *param_1 = *puVar1;
  return;
}


/* FUN_00457b30 @ 00457b30  kind=gamemisc  attributed-by=caller-vote  size=76 */

void FUN_00457b30(undefined4 *param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 *puVar1;
  undefined4 *in_ECX;
  
  if (param_2 == *(int *)*in_ECX) {
    FUN_004545a0(param_2,param_3,param_4,param_4);
    *param_1 = *(undefined4 *)*in_ECX;
    return;
  }
  puVar1 = *(undefined4 **)(param_2 + 4);
  FUN_004545a0(param_2,param_3,param_4,param_4);
  *param_1 = *puVar1;
  return;
}


/* FUN_00457bd0 @ 00457bd0  kind=gamemisc  attributed-by=caller-vote  size=76 */

void FUN_00457bd0(undefined4 *param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 *puVar1;
  undefined4 *in_ECX;
  
  if (param_2 == *(int *)*in_ECX) {
    FUN_00454670(param_2,param_3,param_4,param_4);
    *param_1 = *(undefined4 *)*in_ECX;
    return;
  }
  puVar1 = *(undefined4 **)(param_2 + 4);
  FUN_00454670(param_2,param_3,param_4,param_4);
  *param_1 = *puVar1;
  return;
}


/* FUN_00457c20 @ 00457c20  kind=gamemisc  attributed-by=caller-vote  size=76 */

void FUN_00457c20(undefined4 *param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 *puVar1;
  undefined4 *in_ECX;
  
  if (param_2 == *(int *)*in_ECX) {
    FUN_00454740(param_2,param_3,param_4,param_4);
    *param_1 = *(undefined4 *)*in_ECX;
    return;
  }
  puVar1 = *(undefined4 **)(param_2 + 4);
  FUN_00454740(param_2,param_3,param_4,param_4);
  *param_1 = *puVar1;
  return;
}


/* FUN_00457c70 @ 00457c70  kind=gamemisc  attributed-by=caller-vote  size=76 */

void FUN_00457c70(undefined4 *param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 *puVar1;
  undefined4 *in_ECX;
  
  if (param_2 == *(int *)*in_ECX) {
    FUN_00454810(param_2,param_3,param_4,param_4);
    *param_1 = *(undefined4 *)*in_ECX;
    return;
  }
  puVar1 = *(undefined4 **)(param_2 + 4);
  FUN_00454810(param_2,param_3,param_4,param_4);
  *param_1 = *puVar1;
  return;
}


/* FUN_00457cc0 @ 00457cc0  kind=gamemisc  attributed-by=caller-vote  size=76 */

void FUN_00457cc0(undefined4 *param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 *puVar1;
  undefined4 *in_ECX;
  
  if (param_2 == *(int *)*in_ECX) {
    FUN_004548e0(param_2,param_3,param_4,param_4);
    *param_1 = *(undefined4 *)*in_ECX;
    return;
  }
  puVar1 = *(undefined4 **)(param_2 + 4);
  FUN_004548e0(param_2,param_3,param_4,param_4);
  *param_1 = *puVar1;
  return;
}


/* FUN_00457d10 @ 00457d10  kind=gamemisc  attributed-by=caller-vote  size=76 */

void FUN_00457d10(undefined4 *param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 *puVar1;
  undefined4 *in_ECX;
  
  if (param_2 == *(int *)*in_ECX) {
    FUN_004549b0(param_2,param_3,param_4,param_4);
    *param_1 = *(undefined4 *)*in_ECX;
    return;
  }
  puVar1 = *(undefined4 **)(param_2 + 4);
  FUN_004549b0(param_2,param_3,param_4,param_4);
  *param_1 = *puVar1;
  return;
}


/* FUN_00457d60 @ 00457d60  kind=gamemisc  attributed-by=caller-vote  size=76 */

void FUN_00457d60(undefined4 *param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 *puVar1;
  undefined4 *in_ECX;
  
  if (param_2 == *(int *)*in_ECX) {
    FUN_00454a80(param_2,param_3,param_4,param_4);
    *param_1 = *(undefined4 *)*in_ECX;
    return;
  }
  puVar1 = *(undefined4 **)(param_2 + 4);
  FUN_00454a80(param_2,param_3,param_4,param_4);
  *param_1 = *puVar1;
  return;
}


/* FUN_00457db0 @ 00457db0  kind=gamemisc  attributed-by=caller-vote  size=65 */

void FUN_00457db0(int *param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int *in_ECX;
  
  iVar1 = *in_ECX;
  FUN_00452840(param_2,param_3,param_4,param_2);
  *param_1 = ((param_2 - iVar1) / 0x148) * 0x148 + *in_ECX;
  return;
}


/* FUN_00457e00 @ 00457e00  kind=gamemisc  attributed-by=caller-vote  size=23 */

void FUN_00457e00(undefined1 *param_1,undefined1 *param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  
  uVar1 = *param_3;
  *param_1 = *param_2;
  *(undefined4 *)(param_1 + 4) = uVar1;
  return;
}


/* FUN_00458b90 @ 00458b90  kind=gamemisc  attributed-by=caller-vote  size=15 */

void FUN_00458b90(undefined2 *param_1,undefined2 param_2)

{
  *param_1 = param_2;
  return;
}


/* FUN_00458ba0 @ 00458ba0  kind=gamemisc  attributed-by=caller-vote  size=45 */

void FUN_00458ba0(int param_1,int param_2,undefined4 param_3)

{
  FUN_00455e70(param_1,param_2,(param_2 - param_1) / 0xc,param_3);
  return;
}


/* FUN_00458bd0 @ 00458bd0  kind=gamemisc  attributed-by=caller-vote  size=22 */

void FUN_00458bd0(char *param_1,char *param_2)

{
  strcpy_s(param_1,0x10,param_2);
  return;
}


/* FUN_00458bf0 @ 00458bf0  kind=gamemisc  attributed-by=caller-vote  size=23 */

void FUN_00458bf0(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  uVar1 = *param_1;
  *param_1 = *param_2;
  *param_2 = uVar1;
  return;
}


/* FUN_00458ce0 @ 00458ce0  kind=gamemisc  attributed-by=caller-vote  size=14 */

void FUN_00458ce0(undefined4 param_1)

{
  undefined4 *in_ECX;
  
  *in_ECX = param_1;
  return;
}


/* FUN_00458d20 @ 00458d20  kind=gamemisc  attributed-by=caller-vote  size=32 */

void FUN_00458d20(undefined1 param_1,undefined1 param_2,undefined1 param_3,undefined1 param_4)

{
  undefined1 *in_ECX;
  
  *in_ECX = param_1;
  in_ECX[1] = param_2;
  in_ECX[2] = param_3;
  in_ECX[3] = param_4;
  return;
}


/* FUN_00458d40 @ 00458d40  kind=gamemisc  attributed-by=caller-vote  size=118 */

void FUN_00458d40(undefined4 param_1)

{
  undefined4 uVar1;
  undefined4 *in_ECX;
  uint local_18;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006e3908;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  *in_ECX = 0;
  in_ECX[1] = 0;
  uVar1 = FUN_0044b740();
  *in_ECX = uVar1;
  local_18 = local_18 & 0xffffff00;
  local_8 = 1;
  FUN_004523f0(param_1,local_18);
  ExceptionList = local_10;
  return;
}


/* FUN_00458e90 @ 00458e90  kind=gamemisc  attributed-by=caller-vote  size=127 */

void FUN_00458e90(undefined4 *param_1)

{
  undefined4 *puVar1;
  undefined4 *in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006e3968;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  *in_ECX = 0;
  in_ECX[1] = 0;
  puVar1 = (undefined4 *)FUN_0046d590(0,0);
  *in_ECX = puVar1;
  local_8 = 1;
  FUN_00453f20(*puVar1,*(undefined4 *)*param_1,(undefined4 *)*param_1,param_1);
  ExceptionList = local_10;
  return;
}


/* FUN_00459070 @ 00459070  kind=gamemisc  attributed-by=caller-vote  size=127 */

void FUN_00459070(undefined4 *param_1)

{
  undefined4 *puVar1;
  undefined4 *in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006e39f8;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  *in_ECX = 0;
  in_ECX[1] = 0;
  puVar1 = (undefined4 *)FUN_0044b770(0,0);
  *in_ECX = puVar1;
  local_8 = 1;
  FUN_00454190(*puVar1,*(undefined4 *)*param_1,(undefined4 *)*param_1,param_1);
  ExceptionList = local_10;
  return;
}


/* FUN_00459110 @ 00459110  kind=gamemisc  attributed-by=caller-vote  size=127 */

void FUN_00459110(undefined4 *param_1)

{
  undefined4 *puVar1;
  undefined4 *in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006e3a28;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  *in_ECX = 0;
  in_ECX[1] = 0;
  puVar1 = (undefined4 *)FUN_0046d850(0,0);
  *in_ECX = puVar1;
  local_8 = 1;
  FUN_00454260(*puVar1,*(undefined4 *)*param_1,(undefined4 *)*param_1,param_1);
  ExceptionList = local_10;
  return;
}


/* FUN_004591b0 @ 004591b0  kind=gamemisc  attributed-by=caller-vote  size=127 */

void FUN_004591b0(undefined4 *param_1)

{
  undefined4 *puVar1;
  undefined4 *in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006e3a58;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  *in_ECX = 0;
  in_ECX[1] = 0;
  puVar1 = (undefined4 *)FUN_0046d8d0(0,0);
  *in_ECX = puVar1;
  local_8 = 1;
  FUN_00454330(*puVar1,*(undefined4 *)*param_1,(undefined4 *)*param_1,param_1);
  ExceptionList = local_10;
  return;
}


/* FUN_004592f0 @ 004592f0  kind=gamemisc  attributed-by=caller-vote  size=159 */

void FUN_004592f0(int *param_1)

{
  int *piVar1;
  char cVar2;
  undefined4 uVar3;
  undefined4 *in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  piVar1 = param_1;
  local_8 = 0xffffffff;
  puStack_c = &LAB_006e3ab0;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  *in_ECX = 0;
  in_ECX[1] = 0;
  in_ECX[2] = 0;
  cVar2 = FUN_0044b5f0((param_1[1] - *param_1) / 0x11c);
  if (cVar2 != '\0') {
    local_8 = 0;
    uVar3 = FUN_00456c30(*piVar1,piVar1[1],*in_ECX,(int)&param_1 + 3,param_1);
    in_ECX[1] = uVar3;
  }
  ExceptionList = local_10;
  return;
}


/* FUN_00459490 @ 00459490  kind=gamemisc  attributed-by=caller-vote  size=44 */

void FUN_00459490(undefined4 param_1,undefined4 param_2)

{
  undefined4 *in_ECX;
  
  *in_ECX = 0;
  in_ECX[1] = 0;
  in_ECX[2] = 0;
  FUN_0046da00(param_1,param_2);
  return;
}


/* FUN_004595b0 @ 004595b0  kind=gamemisc  attributed-by=caller-vote  size=174 */

void FUN_004595b0(undefined4 *param_1)

{
  undefined4 *in_ECX;
  
  *in_ECX = *param_1;
  in_ECX[1] = param_1[1];
  in_ECX[2] = param_1[2];
  in_ECX[3] = param_1[3];
  in_ECX[4] = param_1[4];
  in_ECX[6] = param_1[6];
  in_ECX[7] = param_1[7];
  in_ECX[8] = param_1[8];
  in_ECX[9] = param_1[9];
  in_ECX[10] = param_1[10];
  in_ECX[0xb] = param_1[0xb];
  in_ECX[0xc] = param_1[0xc];
  in_ECX[0xd] = param_1[0xd];
  in_ECX[0xe] = param_1[0xe];
  in_ECX[0xf] = param_1[0xf];
  in_ECX[0x10] = param_1[0x10];
  in_ECX[0x11] = param_1[0x11];
  in_ECX[0x12] = param_1[0x12];
  in_ECX[0x13] = param_1[0x13];
  in_ECX[0x14] = param_1[0x14];
  in_ECX[0x15] = param_1[0x15];
  in_ECX[0x16] = param_1[0x16];
  *(undefined1 *)(in_ECX + 0x17) = *(undefined1 *)(param_1 + 0x17);
  in_ECX[0x18] = param_1[0x18];
  *(undefined1 *)(in_ECX + 0x19) = *(undefined1 *)(param_1 + 0x19);
  in_ECX[0x1a] = param_1[0x1a];
  in_ECX[0x1b] = param_1[0x1b];
  return;
}


/* FUN_004599a0 @ 004599a0  kind=gamemisc  attributed-by=caller-vote  size=134 */

void FUN_004599a0(undefined4 *param_1)

{
  undefined4 *in_ECX;
  
  *in_ECX = *param_1;
  in_ECX[1] = param_1[1];
  in_ECX[2] = param_1[2];
  in_ECX[3] = param_1[3];
  in_ECX[4] = param_1[4];
  *(undefined1 *)(in_ECX + 5) = *(undefined1 *)(param_1 + 5);
  in_ECX[6] = param_1[6];
  in_ECX[7] = param_1[7];
  in_ECX[8] = param_1[8];
  in_ECX[9] = param_1[9];
  in_ECX[10] = param_1[10];
  in_ECX[0xb] = param_1[0xb];
  in_ECX[0xc] = param_1[0xc];
  in_ECX[0xd] = param_1[0xd];
  in_ECX[0xe] = param_1[0xe];
  in_ECX[0xf] = param_1[0xf];
  in_ECX[0x10] = param_1[0x10];
  *(undefined1 *)(in_ECX + 0x11) = *(undefined1 *)(param_1 + 0x11);
  *(undefined1 *)((int)in_ECX + 0x45) = *(undefined1 *)((int)param_1 + 0x45);
  *(undefined1 *)((int)in_ECX + 0x46) = *(undefined1 *)((int)param_1 + 0x46);
  return;
}


/* FUN_00459a30 @ 00459a30  kind=gamemisc  attributed-by=caller-vote  size=94 */

void FUN_00459a30(void)

{
  int in_ECX;
  
  *(undefined1 *)(in_ECX + 0x14) = 0;
  *(undefined4 *)(in_ECX + 0x18) = 0;
  *(undefined4 *)(in_ECX + 0x1c) = 0;
  *(undefined4 *)(in_ECX + 0x20) = 0;
  *(undefined4 *)(in_ECX + 0x24) = 0;
  *(undefined4 *)(in_ECX + 0x28) = 0;
  *(undefined4 *)(in_ECX + 0x2c) = 0;
  *(undefined4 *)(in_ECX + 0x30) = 0;
  *(undefined4 *)(in_ECX + 0x34) = 0;
  *(undefined4 *)(in_ECX + 0x38) = 0;
  *(undefined4 *)(in_ECX + 0x3c) = 0;
  *(undefined4 *)(in_ECX + 0x40) = 0;
  *(undefined2 *)(in_ECX + 0x44) = 0;
  *(undefined1 *)(in_ECX + 0x46) = 0;
  return;
}


/* FUN_00460600 @ 00460600  kind=gamemisc  attributed-by=caller-vote  size=21094 */

/* WARNING (jumptable): Unable to track spacebase fully for stack */

void FUN_00460600(void)

{
  byte bVar1;
  char cVar2;
  undefined4 uVar3;
  void *pvVar4;
  undefined4 uVar5;
  int iVar6;
  int *piVar7;
  undefined4 *puVar8;
  uint *puVar9;
  Sprite *pSVar10;
  Creature *pCVar11;
  pair<unsigned___int64,unsigned___int64> *ppVar12;
  pair<unsigned___int64,unsigned___int64> *this;
  float *pfVar13;
  WorldInfo *pWVar14;
  uint uVar15;
  int unaff_EBX;
  uint unaff_EBP;
  undefined4 unaff_ESI;
  uint uVar16;
  int iVar17;
  uint *puVar18;
  float10 fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  code *pcVar23;
  undefined1 *puVar24;
  undefined4 uVar25;
  undefined4 uVar26;
  
  do {
    uVar3 = FUN_006326d0(*(undefined4 *)(unaff_EBX + 0x800884));
    *(undefined4 *)(unaff_EBP - 0x6fd0) = uVar3;
    FUN_0066add0(unaff_EBP - 0x6fd0);
    switch(*(undefined4 *)(unaff_EBP - 0x6f54)) {
    case 0:
      uVar3 = FUN_004515f0(unaff_EBP - 0x1890,unaff_EBP - 0x28,"skills.png");
      *(undefined4 *)(unaff_EBP - 4) = 0x123;
      uVar3 = FUN_00486a20(uVar3,unaff_ESI);
      *(undefined4 *)(unaff_EBP - 0x6f48) = uVar3;
      *(undefined4 *)(unaff_EBP - 4) = 0xbf;
      FUN_00403eb0();
      FUN_0040eb60(&DAT_007008d8);
      *(undefined4 *)(unaff_EBP - 4) = 0x124;
      FUN_0046f430();
      FUN_00636ad0(unaff_EBP - 0x690);
      break;
    case 1:
      uVar3 = FUN_004515f0(unaff_EBP - 0x18c0,unaff_EBP - 0x28,"crafting.png");
      *(undefined4 *)(unaff_EBP - 4) = 0x125;
      uVar3 = FUN_00486a20(uVar3,unaff_ESI);
      *(undefined4 *)(unaff_EBP - 0x6f48) = uVar3;
      *(undefined4 *)(unaff_EBP - 4) = 0xbf;
      FUN_00403eb0();
      FUN_0040eb60(&DAT_007008ec);
      *(undefined4 *)(unaff_EBP - 4) = 0x126;
      FUN_0046f430();
      FUN_00636ad0(unaff_EBP - 0x6c0);
      break;
    case 2:
      uVar3 = FUN_004515f0(unaff_EBP - 0x18f0,unaff_EBP - 0x28,"inventory.png");
      *(undefined4 *)(unaff_EBP - 4) = 0x127;
      uVar3 = FUN_00486a20(uVar3,unaff_ESI);
      *(undefined4 *)(unaff_EBP - 0x6f48) = uVar3;
      *(undefined4 *)(unaff_EBP - 4) = 0xbf;
      FUN_00403eb0();
      FUN_0040eb60(&DAT_00700900);
      *(undefined4 *)(unaff_EBP - 4) = 0x128;
      FUN_0046f430();
      FUN_00636ad0(unaff_EBP - 0x6f0);
      break;
    case 3:
      uVar3 = FUN_004515f0(unaff_EBP - 0x1920,unaff_EBP - 0x28,"worldmap.png");
      *(undefined4 *)(unaff_EBP - 4) = 0x129;
      uVar3 = FUN_00486a20(uVar3,unaff_ESI);
      *(undefined4 *)(unaff_EBP - 0x6f48) = uVar3;
      *(undefined4 *)(unaff_EBP - 4) = 0xbf;
      FUN_00403eb0();
      FUN_0040eb60(&DAT_00700914);
      *(undefined4 *)(unaff_EBP - 4) = 0x12a;
      FUN_0046f430();
      FUN_00636ad0(unaff_EBP - 0x720);
      break;
    case 4:
      uVar3 = FUN_004515f0(unaff_EBP - 0x1950,unaff_EBP - 0x28,"system.png");
      *(undefined4 *)(unaff_EBP - 4) = 299;
      uVar3 = FUN_00486a20(uVar3,unaff_ESI);
      *(undefined4 *)(unaff_EBP - 0x6f48) = uVar3;
      *(undefined4 *)(unaff_EBP - 4) = 0xbf;
      FUN_00403eb0();
      FUN_0040eb60(&DAT_00700924);
      *(undefined4 *)(unaff_EBP - 4) = 300;
      FUN_0046f430();
      FUN_00636ad0(unaff_EBP - 0x750);
      break;
    default:
      uVar3 = FUN_004515f0(unaff_EBP - 0x1980,unaff_EBP - 0x28,"help.png");
      *(undefined4 *)(unaff_EBP - 4) = 0x121;
      uVar3 = FUN_00486a20(uVar3,unaff_ESI);
      *(undefined4 *)(unaff_EBP - 0x6f48) = uVar3;
      *(undefined4 *)(unaff_EBP - 4) = 0xbf;
      FUN_00403eb0();
      FUN_0040eb60(&DAT_007008c4);
      *(undefined4 *)(unaff_EBP - 4) = 0x122;
      FUN_0046f430();
      FUN_00636ad0(unaff_EBP - 0x780);
    }
    *(undefined4 *)(unaff_EBP - 4) = 0xbf;
    FUN_00593e50();
    uVar3 = <>(1,0,0,0,0);
    FUN_006612d0(uVar3);
    uVar3 = FUN_0047b5f0();
    *(undefined4 *)(unaff_EBP - 0x6fc4) = uVar3;
    FUN_0046f430();
    iVar6 = unaff_EBP - 0x6fc4;
    uVar3 = FUN_00411320(iVar6);
    FUN_00488b90(uVar3);
    FUN_00467f10(iVar6);
    FUN_0046f430();
    uVar3 = FUN_00411320();
    FUN_00488b90(uVar3);
    FUN_0064ac00();
    *(int *)(unaff_EBP - 0x6f54) = *(int *)(unaff_EBP - 0x6f54) + 1;
    piVar7 = (int *)(unaff_EBP - 0x6f88);
    *piVar7 = *piVar7 + -1;
  } while (*piVar7 != 0);
  FUN_0040eb60(L"equipmentboxleft");
  *(undefined4 *)(unaff_EBP - 4) = 0x12d;
  uVar3 = FUN_00633d70(unaff_EBP - 0x7b0);
  *(undefined4 *)(unaff_EBP - 0x6f48) = uVar3;
  *(undefined4 *)(unaff_EBP - 4) = 0xbf;
  FUN_00593e50();
  FUN_0040eb60(L"equipmentboxright");
  *(undefined4 *)(unaff_EBP - 4) = 0x12e;
  uVar3 = FUN_00633d70(unaff_EBP - 0x7e0);
  *(undefined4 *)(unaff_EBP - 0x6f74) = uVar3;
  *(undefined4 *)(unaff_EBP - 4) = 0xbf;
  FUN_00593e50();
  *(undefined4 *)(unaff_EBP - 0x6f54) = 0;
  do {
    FUN_0040eb60(&PTR_006fccac);
    *(undefined4 *)(unaff_EBP - 4) = 0x12f;
    uVar3 = FUN_0064f4e0(0,0,0,0,unaff_EBP - 0x7460);
    *(undefined4 *)(unaff_EBP - 4) = 0xbf;
    FUN_00593e50();
    pvVar4 = operator_new(0x16c);
    *(void **)(unaff_EBP - 0x6f70) = pvVar4;
    *(undefined4 *)(unaff_EBP - 4) = 0x130;
    if (pvVar4 == (void *)0x0) {
      uVar3 = 0;
    }
    else {
      uVar3 = FUN_0051c310(*(undefined4 *)(unaff_EBX + 0x800710),uVar3,unaff_EBX);
    }
    uVar5 = *(undefined4 *)(unaff_EBX + 0x800884);
    *(undefined4 *)(unaff_EBP - 4) = 0xbf;
    *(undefined4 *)(unaff_EBP - 0x6f70) = uVar3;
    uVar5 = FUN_006326d0(uVar5);
    *(undefined4 *)(unaff_EBP - 0x6f88) = uVar5;
    FUN_0040eb60(L"background");
    *(undefined4 *)(unaff_EBP - 4) = 0x131;
    FUN_00631460(unaff_EBP - 0x810,uVar3,1);
    *(undefined4 *)(unaff_EBP - 4) = 0xbf;
    FUN_00593e50();
    FUN_0066add0(unaff_EBP - 0x6f88);
    FUN_0066add0(unaff_EBP - 0x6f70);
    iVar6 = *(int *)(unaff_EBP - 0x6f54) + 1;
    *(int *)(unaff_EBP - 0x6f54) = iVar6;
  } while (iVar6 < 0xc);
  FUN_006504e0(*(undefined4 *)(unaff_EBP - 0x6f48));
  FUN_006504e0(*(undefined4 *)(unaff_EBP - 0x6f74));
  FUN_0040eb60(L"Left\nWeapon");
  *(undefined4 *)(unaff_EBP - 4) = 0x132;
  FUN_00468c60(0);
  FUN_00636ad0(unaff_EBP - 0x840);
  *(undefined4 *)(unaff_EBP - 4) = 0xbf;
  FUN_00593e50();
  FUN_0040eb60(L"Right\nWeapon");
  *(undefined4 *)(unaff_EBP - 4) = 0x133;
  FUN_00468c60(1);
  FUN_00636ad0(unaff_EBP - 0x1e8);
  *(undefined4 *)(unaff_EBP - 4) = 0xbf;
  FUN_00593e50();
  FUN_0040eb60(L"Left Ring");
  *(undefined4 *)(unaff_EBP - 4) = 0x134;
  FUN_00468c60(2);
  FUN_00636ad0(unaff_EBP - 0x200);
  *(undefined4 *)(unaff_EBP - 4) = 0xbf;
  FUN_00593e50();
  FUN_0040eb60(L"Right Ring");
  *(undefined4 *)(unaff_EBP - 4) = 0x135;
  FUN_00468c60(3);
  FUN_00636ad0(unaff_EBP - 0x870);
  *(undefined4 *)(unaff_EBP - 4) = 0xbf;
  FUN_00593e50();
  FUN_0040eb60(L"Neck");
  *(undefined4 *)(unaff_EBP - 4) = 0x136;
  FUN_00468c60(4);
  FUN_00636ad0(unaff_EBP - 0x8a0);
  *(undefined4 *)(unaff_EBP - 4) = 0xbf;
  FUN_00593e50();
  FUN_0040eb60(L"Shoulder");
  *(undefined4 *)(unaff_EBP - 4) = 0x137;
  FUN_00468c60(5);
  FUN_00636ad0(unaff_EBP - 0x8d0);
  *(undefined4 *)(unaff_EBP - 4) = 0xbf;
  FUN_00593e50();
  FUN_0040eb60(L"Chest");
  *(undefined4 *)(unaff_EBP - 4) = 0x138;
  FUN_00468c60(6);
  FUN_00636ad0(unaff_EBP - 0x218);
  *(undefined4 *)(unaff_EBP - 4) = 0xbf;
  FUN_00593e50();
  FUN_0040eb60(L"Hands");
  *(undefined4 *)(unaff_EBP - 4) = 0x139;
  FUN_00468c60(7);
  FUN_00636ad0(unaff_EBP - 0x230);
  *(undefined4 *)(unaff_EBP - 4) = 0xbf;
  FUN_00593e50();
  FUN_0040eb60(L"Feet");
  *(undefined4 *)(unaff_EBP - 4) = 0x13a;
  FUN_00468c60(8);
  FUN_00636ad0(unaff_EBP - 0x250);
  *(undefined4 *)(unaff_EBP - 4) = 0xbf;
  FUN_00593e50();
  FUN_0040eb60(L"Light");
  *(undefined4 *)(unaff_EBP - 4) = 0x13b;
  FUN_00468c60(9);
  FUN_00636ad0(unaff_EBP - 0x270);
  *(undefined4 *)(unaff_EBP - 4) = 0xbf;
  FUN_00593e50();
  FUN_0040eb60(L"Special");
  *(undefined4 *)(unaff_EBP - 4) = 0x13c;
  FUN_00468c60(10);
  FUN_00636ad0(unaff_EBP - 0x290);
  *(undefined4 *)(unaff_EBP - 4) = 0xbf;
  FUN_00593e50();
  FUN_0040eb60(&DAT_00700a30);
  *(undefined4 *)(unaff_EBP - 4) = 0x13d;
  FUN_00468c60(0xb);
  FUN_00636ad0(unaff_EBP - 0x2b0);
  *(undefined4 *)(unaff_EBP - 4) = 0xbf;
  FUN_00593e50();
  FUN_006504e0(*(undefined4 *)(unaff_EBP - 0x6f58));
  FUN_006504e0(*(undefined4 *)(unaff_EBP - 0x6f4c));
  FUN_0040eb60(L"experiencebar");
  *(undefined4 *)(unaff_EBP - 4) = 0x13e;
  uVar3 = FUN_00633d70(unaff_EBP - 0x2d0);
  *(undefined4 *)(unaff_EBX + 0x8007c4) = uVar3;
  *(undefined4 *)(unaff_EBP - 4) = 0xbf;
  FUN_00593e50();
  if (*(int *)(unaff_EBX + 0x8007c4) == 0) {
    *(undefined4 *)(unaff_EBX + 0x8007c8) = 0;
    *(undefined4 *)(unaff_EBX + 0x8007cc) = 0;
  }
  else {
    FUN_0040eb60(&DAT_006fd41c);
    *(undefined4 *)(unaff_EBP - 4) = 0x13f;
    uVar3 = FUN_00633d70(unaff_EBP - 0x2f0);
    *(undefined4 *)(unaff_EBX + 0x8007c8) = uVar3;
    *(undefined4 *)(unaff_EBP - 4) = 0xbf;
    FUN_00593e50();
    FUN_00411c70();
    uVar3 = FUN_0040ef70();
    iVar6 = unaff_EBP - 0x930;
    FUN_0040ea50(0x41a00000,0x41f00000);
    uVar3 = FUN_00468df0(iVar6,uVar3);
    FUN_00411c70(uVar3);
    FUN_004288b0(uVar3);
    piVar7 = (int *)FUN_00411c70();
    (**(code **)(*piVar7 + 4))(1);
    uVar3 = FUN_006326d0(*(undefined4 *)(unaff_EBX + 0x800884));
    *(undefined4 *)(unaff_EBX + 0x8007cc) = uVar3;
    FUN_0040eb60(&DAT_006fd41c);
    *(undefined4 *)(unaff_EBP - 4) = 0x140;
    uVar3 = FUN_00633d70(unaff_EBP - 0x310);
    *(undefined4 *)(unaff_EBX + 0x8007d0) = uVar3;
    *(undefined4 *)(unaff_EBP - 4) = 0xbf;
    FUN_00593e50();
  }
  FUN_0040eb60(L"ridingbar");
  *(undefined4 *)(unaff_EBP - 4) = 0x141;
  uVar3 = FUN_00633d70(unaff_EBP - 0x330);
  *(undefined4 *)(unaff_EBX + 0x8007d4) = uVar3;
  *(undefined4 *)(unaff_EBP - 4) = 0xbf;
  FUN_00593e50();
  FUN_0040eb60(L"manacubebar");
  *(undefined4 *)(unaff_EBP - 4) = 0x142;
  uVar3 = FUN_00633d70(unaff_EBP - 0x9c0);
  *(undefined4 *)(unaff_EBX + 0x8007d8) = uVar3;
  *(undefined4 *)(unaff_EBP - 4) = 0xbf;
  FUN_00593e50();
  FUN_0040eb60(L"questbar");
  *(undefined4 *)(unaff_EBP - 4) = 0x143;
  uVar3 = FUN_00633d70(unaff_EBP - 0x9f0);
  *(undefined4 *)(unaff_EBX + 0x8007dc) = uVar3;
  *(undefined4 *)(unaff_EBP - 4) = 0xbf;
  FUN_00593e50();
  if (*(int *)(unaff_EBX + 0x8007dc) == 0) {
    *(undefined4 *)(unaff_EBX + 0x8007e0) = 0;
  }
  else {
    FUN_0040eb60(&DAT_006fd41c);
    *(undefined4 *)(unaff_EBP - 4) = 0x144;
    uVar3 = FUN_00633d70(unaff_EBP - 0xa20);
    *(undefined4 *)(unaff_EBX + 0x8007e0) = uVar3;
    *(undefined4 *)(unaff_EBP - 4) = 0xbf;
    FUN_00593e50();
    FUN_00411a90(0);
  }
  FUN_0040eb60(L"lifebar");
  *(undefined4 *)(unaff_EBP - 4) = 0x145;
  uVar3 = FUN_00633d70(unaff_EBP - 0xa50);
  *(undefined4 *)(unaff_EBX + 0x800768) = uVar3;
  *(undefined4 *)(unaff_EBP - 4) = 0xbf;
  FUN_00593e50();
  if (*(int *)(unaff_EBX + 0x800768) == 0) {
    *(undefined4 *)(unaff_EBX + 0x80076c) = 0;
    *(undefined4 *)(unaff_EBX + 0x800770) = 0;
  }
  else {
    FUN_0040eb60(&DAT_006fd41c);
    *(undefined4 *)(unaff_EBP - 4) = 0x146;
    uVar3 = FUN_00633d70(unaff_EBP - 0xa80);
    *(undefined4 *)(unaff_EBX + 0x80076c) = uVar3;
    *(undefined4 *)(unaff_EBP - 4) = 0xbf;
    FUN_00593e50();
    FUN_00411c70();
    uVar3 = FUN_0040ef70();
    iVar6 = unaff_EBP - 0x950;
    FUN_0040ea50(0x41a00000,0x42fa0000);
    uVar3 = FUN_00468df0(iVar6,uVar3);
    FUN_00411c70(uVar3);
    FUN_004288b0(uVar3);
    piVar7 = (int *)FUN_00411c70();
    (**(code **)(*piVar7 + 4))(1);
    uVar3 = FUN_006326d0(*(undefined4 *)(unaff_EBX + 0x800884));
    *(undefined4 *)(unaff_EBX + 0x800770) = uVar3;
    FUN_0040eb60(&DAT_006fd41c);
    *(undefined4 *)(unaff_EBP - 4) = 0x147;
    uVar3 = FUN_00633d70(unaff_EBP - 0xab0);
    *(undefined4 *)(unaff_EBX + 0x800774) = uVar3;
    *(undefined4 *)(unaff_EBP - 4) = 0xbf;
    FUN_00593e50();
  }
  if (*(int *)(unaff_EBX + 0x800768) != 0) {
    FUN_0040d9d0(3);
    FUN_0040d9d0(3);
    iVar17 = 0;
    *(undefined4 *)(unaff_EBP - 0x6f54) = 0;
    iVar6 = FUN_00487f50();
    if (0 < iVar6) {
      do {
        puVar8 = (undefined4 *)FUN_00468c60(iVar17);
        uVar3 = FUN_006326d0(*(undefined4 *)(unaff_EBX + 0x800884));
        *puVar8 = uVar3;
        FUN_0040eb60(&DAT_006fd41c);
        *(undefined4 *)(unaff_EBP - 4) = 0x148;
        FUN_00468c60(iVar17);
        puVar8 = (undefined4 *)FUN_00468c60(*(undefined4 *)(unaff_EBP - 0x6f54));
        uVar3 = FUN_00633d70(unaff_EBP - 0xae0);
        *puVar8 = uVar3;
        *(undefined4 *)(unaff_EBP - 4) = 0xbf;
        FUN_00593e50();
        iVar17 = *(int *)(unaff_EBP - 0x6f54) + 1;
        *(int *)(unaff_EBP - 0x6f54) = iVar17;
        iVar6 = FUN_00487f50();
      } while (iVar17 < iVar6);
    }
  }
  FUN_0040eb60(L"mpbar");
  *(undefined4 *)(unaff_EBP - 4) = 0x149;
  uVar3 = FUN_00633d70(unaff_EBP - 0xb10);
  *(undefined4 *)(unaff_EBX + 0x8007b8) = uVar3;
  *(undefined4 *)(unaff_EBP - 4) = 0xbf;
  FUN_00593e50();
  if (*(int *)(unaff_EBX + 0x8007b8) == 0) {
    *(undefined4 *)(unaff_EBX + 0x8007bc) = 0;
  }
  else {
    FUN_0040eb60(&DAT_006fd41c);
    *(undefined4 *)(unaff_EBP - 4) = 0x14a;
    uVar3 = FUN_00633d70(unaff_EBP - 0xb40);
    *(undefined4 *)(unaff_EBX + 0x8007bc) = uVar3;
    *(undefined4 *)(unaff_EBP - 4) = 0xbf;
    FUN_00593e50();
    FUN_0040eb60(L"chargebar");
    *(undefined4 *)(unaff_EBP - 4) = 0x14b;
    uVar3 = FUN_00633d70(unaff_EBP - 0xb70);
    *(undefined4 *)(unaff_EBX + 0x8007c0) = uVar3;
    *(undefined4 *)(unaff_EBP - 4) = 0xbf;
    FUN_00593e50();
    FUN_00411c70();
    uVar3 = FUN_0040ef70();
    iVar6 = unaff_EBP - 0x970;
    FUN_0040ea50(0x43480000,0x41a00000);
    uVar3 = FUN_00468df0(iVar6,uVar3);
    FUN_00411c70(uVar3);
    FUN_004288b0(uVar3);
    piVar7 = (int *)FUN_00411c70();
    (**(code **)(*piVar7 + 4))(1);
  }
  FUN_0040eb60(L"enemylifebar");
  *(undefined4 *)(unaff_EBP - 4) = 0x14c;
  uVar3 = FUN_00633d70(unaff_EBP - 0xba0);
  *(undefined4 *)(unaff_EBX + 0x800790) = uVar3;
  *(undefined4 *)(unaff_EBP - 4) = 0xbf;
  FUN_00593e50();
  FUN_00636950(0);
  FUN_0040eb60(L"friendlifebar");
  *(undefined4 *)(unaff_EBP - 4) = 0x14d;
  uVar3 = FUN_00633d70(unaff_EBP - 0xbd0);
  *(undefined4 *)(unaff_EBX + 0x800794) = uVar3;
  *(undefined4 *)(unaff_EBP - 4) = 0xbf;
  FUN_00593e50();
  FUN_00636950(0);
  FUN_0040eb60(L"staticlifebar");
  *(undefined4 *)(unaff_EBP - 4) = 0x14e;
  uVar3 = FUN_00633d70(unaff_EBP - 0xc00);
  *(undefined4 *)(unaff_EBX + 0x800798) = uVar3;
  *(undefined4 *)(unaff_EBP - 4) = 0xbf;
  FUN_00593e50();
  FUN_00636950(0);
  FUN_0040eb60(L"neutrallifebar");
  *(undefined4 *)(unaff_EBP - 4) = 0x14f;
  uVar3 = FUN_00633d70(unaff_EBP - 0xc30);
  *(undefined4 *)(unaff_EBX + 0x80079c) = uVar3;
  *(undefined4 *)(unaff_EBP - 4) = 0xbf;
  FUN_00593e50();
  FUN_00636950(0);
  FUN_0040eb60(L"enemylifebar:small");
  *(undefined4 *)(unaff_EBP - 4) = 0x150;
  uVar3 = FUN_00633d70(unaff_EBP - 0xc60);
  *(undefined4 *)(unaff_EBX + 0x8007a0) = uVar3;
  *(undefined4 *)(unaff_EBP - 4) = 0xbf;
  FUN_00593e50();
  FUN_00636950(0);
  FUN_0040eb60(L"friendlifebar:small");
  *(undefined4 *)(unaff_EBP - 4) = 0x151;
  uVar3 = FUN_00633d70(unaff_EBP - 0xc90);
  *(undefined4 *)(unaff_EBX + 0x8007a4) = uVar3;
  *(undefined4 *)(unaff_EBP - 4) = 0xbf;
  FUN_00593e50();
  FUN_00636950(0);
  FUN_0040eb60(L"staticlifebar:small");
  *(undefined4 *)(unaff_EBP - 4) = 0x152;
  uVar3 = FUN_00633d70(unaff_EBP - 0xcc0);
  *(undefined4 *)(unaff_EBX + 0x8007a8) = uVar3;
  *(undefined4 *)(unaff_EBP - 4) = 0xbf;
  FUN_00593e50();
  FUN_00636950(0);
  FUN_0040eb60(L"neutrallifebar:small");
  *(undefined4 *)(unaff_EBP - 4) = 0x153;
  uVar3 = FUN_00633d70(unaff_EBP - 0xcf0);
  *(undefined4 *)(unaff_EBX + 0x8007ac) = uVar3;
  *(undefined4 *)(unaff_EBP - 4) = 0xbf;
  FUN_00593e50();
  FUN_00636950(0);
  FUN_0040eb60(&PTR_006fccac);
  uVar3 = *(undefined4 *)(unaff_EBX + 0x800884);
  *(undefined4 *)(unaff_EBP - 4) = 0x154;
  uVar3 = FUN_0064f4e0(0,0,0,uVar3,unaff_EBP - 0x7560);
  *(undefined4 *)(unaff_EBX + 0x8007b0) = uVar3;
  *(undefined4 *)(unaff_EBP - 4) = 0xbf;
  FUN_00593e50();
  FUN_00636950(*(undefined4 *)(unaff_EBX + 0x800884));
  FUN_00636950(*(undefined4 *)(unaff_EBX + 0x800884));
  FUN_00411a90(0);
  FUN_0040eb60(L"hpbar");
  *(undefined4 *)(unaff_EBP - 4) = 0x155;
  uVar3 = FUN_00633d70(unaff_EBP - 0xd20);
  *(undefined4 *)(unaff_EBX + 0x8007e4) = uVar3;
  *(undefined4 *)(unaff_EBP - 4) = 0xbf;
  FUN_00593e50();
  if (*(int *)(unaff_EBX + 0x8007e4) == 0) {
    *(undefined4 *)(unaff_EBX + 0x8007e8) = 0;
  }
  else {
    FUN_0040eb60(&DAT_006fd41c);
    *(undefined4 *)(unaff_EBP - 4) = 0x156;
    uVar3 = FUN_00633d70(unaff_EBP - 0xd50);
    *(undefined4 *)(unaff_EBX + 0x8007e8) = uVar3;
    *(undefined4 *)(unaff_EBP - 4) = 0xbf;
    FUN_00593e50();
    FUN_00411c70();
    uVar3 = FUN_0040ef70();
    iVar6 = unaff_EBP - 0x990;
    FUN_0040ea50(0x43480000,0x41a00000);
    uVar3 = FUN_00468df0(iVar6,uVar3);
    FUN_00411c70(uVar3);
    FUN_004288b0(uVar3);
    piVar7 = (int *)FUN_00411c70();
    (**(code **)(*piVar7 + 4))(1);
  }
  FUN_0040eb60(L"castbar");
  *(undefined4 *)(unaff_EBP - 4) = 0x157;
  uVar3 = FUN_00633d70(unaff_EBP - 0xd80);
  *(undefined4 *)(unaff_EBX + 0x8007ec) = uVar3;
  *(undefined4 *)(unaff_EBP - 4) = 0xbf;
  FUN_00593e50();
  if (*(int *)(unaff_EBX + 0x8007ec) == 0) {
    *(undefined4 *)(unaff_EBX + 0x8007f0) = 0;
  }
  else {
    FUN_0040eb60(&DAT_006fd41c);
    *(undefined4 *)(unaff_EBP - 4) = 0x158;
    uVar3 = FUN_00633d70(unaff_EBP - 0xdb0);
    *(undefined4 *)(unaff_EBX + 0x8007f0) = uVar3;
    *(undefined4 *)(unaff_EBP - 4) = 0xbf;
    FUN_00593e50();
  }
  FUN_0040eb60(L"staminabar");
  *(undefined4 *)(unaff_EBP - 4) = 0x159;
  uVar3 = FUN_00633d70(unaff_EBP - 0xde0);
  *(undefined4 *)(unaff_EBX + 0x8007f4) = uVar3;
  *(undefined4 *)(unaff_EBP - 4) = 0xbf;
  FUN_00593e50();
  if (*(int *)(unaff_EBX + 0x8007f4) == 0) {
    *(undefined4 *)(unaff_EBX + 0x8007f8) = 0;
  }
  else {
    FUN_0040eb60(&DAT_006fd41c);
    *(undefined4 *)(unaff_EBP - 4) = 0x15a;
    uVar3 = FUN_00633d70(unaff_EBP - 0xe10);
    *(undefined4 *)(unaff_EBX + 0x8007f8) = uVar3;
    *(undefined4 *)(unaff_EBP - 4) = 0xbf;
    FUN_00593e50();
  }
  FUN_0040eb60(L"selector");
  *(undefined4 *)(unaff_EBP - 4) = 0x15b;
  uVar3 = FUN_00633d70(unaff_EBP - 0xe40);
  *(undefined4 *)(unaff_EBX + 0x8008e0) = uVar3;
  *(undefined4 *)(unaff_EBP - 4) = 0xbf;
  FUN_00593e50();
  if (*(int *)(unaff_EBX + 0x8008e4) == 0) {
    *(undefined4 *)(unaff_EBX + 0x8008e8) = 0;
  }
  else {
    pvVar4 = operator_new(0x180);
    *(void **)(unaff_EBP - 0x6f4c) = pvVar4;
    *(undefined4 *)(unaff_EBP - 4) = 0x15c;
    if (pvVar4 == (void *)0x0) {
      uVar3 = 0;
    }
    else {
      uVar3 = FUN_004d4f10(*(undefined4 *)(unaff_EBX + 0x800710),
                           *(undefined4 *)(unaff_EBX + 0x8008e4),unaff_EBX);
    }
    *(undefined4 *)(unaff_EBX + 0x8008e8) = uVar3;
    *(undefined4 *)(unaff_EBP - 4) = 0xbf;
    FUN_00411a90(0);
  }
  FUN_0040eb60(L"speech");
  *(undefined4 *)(unaff_EBP - 4) = 0x15d;
  iVar6 = FUN_00633d70(unaff_EBP - 0xe70);
  *(int *)(unaff_EBP - 0x6f58) = iVar6;
  *(undefined4 *)(unaff_EBP - 4) = 0xbf;
  FUN_00593e50();
  if (iVar6 != 0) {
    FUN_0040d9d0(4);
    uVar3 = FUN_00487f50();
    FUN_0040d9d0(uVar3);
    iVar6 = 0;
    *(undefined4 *)(unaff_EBP - 0x6f48) = 0;
    iVar17 = FUN_00487f50();
    if (0 < iVar17) {
      do {
        puVar8 = (undefined4 *)FUN_00468c60(iVar6);
        uVar3 = FUN_00636040(*(undefined4 *)(unaff_EBX + 0x800884));
        *puVar8 = uVar3;
        FUN_00468c60(iVar6);
        piVar7 = (int *)FUN_0040f8e0();
        FUN_00468c60(iVar6);
        uVar3 = (**(code **)(*piVar7 + 8))();
        FUN_006368e0(uVar3);
        uVar3 = *(undefined4 *)(unaff_EBP - 0x6f48);
        FUN_00468c60(uVar3);
        piVar7 = (int *)FUN_00411c70();
        FUN_00468c60(uVar3);
        uVar3 = (**(code **)(*piVar7 + 8))();
        FUN_00636b70(uVar3);
        pvVar4 = operator_new(0x1e0);
        *(void **)(unaff_EBP - 0x6f4c) = pvVar4;
        iVar6 = *(int *)(unaff_EBP - 0x6f48);
        *(undefined4 *)(unaff_EBP - 4) = 0x15e;
        if (pvVar4 == (void *)0x0) {
          *(undefined4 *)(unaff_EBP - 0x6f4c) = 0;
        }
        else {
          puVar8 = (undefined4 *)FUN_00468c60(iVar6);
          uVar3 = FUN_004e5c90(*(undefined4 *)(unaff_EBX + 0x800710),*puVar8,unaff_EBX);
          *(undefined4 *)(unaff_EBP - 0x6f4c) = uVar3;
        }
        *(undefined4 *)(unaff_EBP - 4) = 0xbf;
        puVar8 = (undefined4 *)FUN_00468c60(iVar6);
        *puVar8 = *(undefined4 *)(unaff_EBP - 0x6f4c);
        FUN_00468c60(iVar6);
        FUN_00411a90(0);
        iVar6 = iVar6 + 1;
        *(int *)(unaff_EBP - 0x6f48) = iVar6;
        iVar17 = FUN_00487f50();
      } while (iVar6 < iVar17);
    }
    FUN_006504e0(*(undefined4 *)(unaff_EBP - 0x6f58));
  }
  FUN_0040eb60(&PTR_006fccac);
  uVar3 = *(undefined4 *)(unaff_EBX + 0x800884);
  *(undefined4 *)(unaff_EBP - 4) = 0x15f;
  uVar3 = FUN_0064f4e0(0,0,0,uVar3,unaff_EBP - 0x77b8);
  *(undefined4 *)(unaff_EBX + 0x80093c) = uVar3;
  *(undefined4 *)(unaff_EBP - 4) = 0xbf;
  FUN_00593e50();
  pvVar4 = operator_new(0x1e0);
  *(void **)(unaff_EBP - 0x6f4c) = pvVar4;
  *(undefined4 *)(unaff_EBP - 4) = 0x160;
  if (pvVar4 == (void *)0x0) {
    uVar3 = 0;
  }
  else {
    uVar3 = FUN_004e5c90(*(undefined4 *)(unaff_EBX + 0x800710),*(undefined4 *)(unaff_EBX + 0x80093c)
                         ,unaff_EBX);
  }
  *(undefined4 *)(unaff_EBP - 4) = 0xbf;
  *(undefined4 *)(unaff_EBX + 0x800938) = uVar3;
  FUN_0062c570(0x43c80000,0x43c80000,1);
  FUN_0040eb60(&PTR_006fccac);
  iVar6 = unaff_EBP - 0x7498;
  *(undefined4 *)(unaff_EBP - 4) = 0x161;
  uVar3 = FUN_00487490(iVar6);
  uVar3 = FUN_0064f4e0(0,0,0,uVar3,iVar6);
  *(undefined4 *)(unaff_EBX + 0x800944) = uVar3;
  *(undefined4 *)(unaff_EBP - 4) = 0xbf;
  FUN_00593e50();
  pvVar4 = operator_new(0x170);
  *(void **)(unaff_EBP - 0x6f4c) = pvVar4;
  uVar3 = *(undefined4 *)(unaff_EBP - 0x6f7c);
  *(undefined4 *)(unaff_EBP - 4) = 0x162;
  if (pvVar4 == (void *)0x0) {
    uVar5 = 0;
  }
  else {
    uVar5 = FUN_004ce180(uVar3,*(undefined4 *)(unaff_EBX + 0x800944),unaff_EBX);
  }
  *(undefined4 *)(unaff_EBP - 4) = 0xbf;
  *(undefined4 *)(unaff_EBX + 0x800948) = uVar5;
  FUN_0040eb60(&PTR_006fccac);
  iVar6 = unaff_EBP - 0x7688;
  *(undefined4 *)(unaff_EBP - 4) = 0x163;
  uVar5 = FUN_00487490(iVar6);
  uVar5 = FUN_0064f4e0(0,0,0,uVar5,iVar6);
  *(undefined4 *)(unaff_EBX + 0x80094c) = uVar5;
  *(undefined4 *)(unaff_EBP - 4) = 0xbf;
  FUN_00593e50();
  pvVar4 = operator_new(0x164);
  *(void **)(unaff_EBP - 0x6f4c) = pvVar4;
  *(undefined4 *)(unaff_EBP - 4) = 0x164;
  if (pvVar4 == (void *)0x0) {
    uVar3 = 0;
  }
  else {
    uVar3 = FUN_00583b40(uVar3,*(undefined4 *)(unaff_EBX + 0x80094c),unaff_EBX);
  }
  *(undefined4 *)(unaff_EBP - 4) = 0xbf;
  *(undefined4 *)(unaff_EBX + 0x800950) = uVar3;
  FUN_0040eb60(&PTR_006fccac);
  iVar6 = unaff_EBP - 0x74c8;
  *(undefined4 *)(unaff_EBP - 4) = 0x165;
  uVar3 = FUN_00487490(iVar6);
  uVar3 = FUN_0064f4e0(0,0,0,uVar3,iVar6);
  *(undefined4 *)(unaff_EBX + 0x8008a8) = uVar3;
  *(undefined4 *)(unaff_EBP - 4) = 0xbf;
  FUN_00593e50();
  FUN_0040eb60(L"cursor.plx");
  uVar3 = *(undefined4 *)(unaff_EBX + 0x8008a8);
  *(undefined4 *)(unaff_EBP - 4) = 0x166;
  FUN_00653770(unaff_EBP - 0xea0,uVar3,0,0,unaff_EBP - 0x7018);
  *(undefined4 *)(unaff_EBP - 4) = 0xbf;
  FUN_00593e50();
  FUN_0046eb90(0);
  InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)(unaff_EBX + 0x8005d0),0x80000400);
  InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)(unaff_EBX + 0x800600),0x80000400);
  InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)(unaff_EBX + 0x8005e8),0x80000400);
  InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)(unaff_EBX + 0x800618),0x80000400);
  InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)(unaff_EBX + 0x8005b8),0x80000400);
  uVar16 = *(int *)(unaff_EBX + 0x2dc) * *(int *)(unaff_EBX + 0x2dc);
  uVar15 = -(uint)((int)((ulonglong)uVar16 * 0x268 >> 0x20) != 0) |
           (uint)((ulonglong)uVar16 * 0x268);
  puVar9 = (uint *)FUN_0068d652(-(uint)(0xfffffffb < uVar15) | uVar15 + 4);
  *(uint **)(unaff_EBP - 0x6f4c) = puVar9;
  *(undefined4 *)(unaff_EBP - 4) = 0x167;
  if (puVar9 == (uint *)0x0) {
    puVar18 = (uint *)0x0;
  }
  else {
    puVar18 = puVar9 + 1;
    *puVar9 = uVar16;
    _eh_vector_constructor_iterator_(puVar18,0x268,uVar16,cube::Chunk::Chunk,cube::Chunk::~Chunk);
  }
  *(undefined4 *)(unaff_EBP - 4) = 0xbf;
  *(uint **)(unaff_EBX + 0x2e0) = puVar18;
  pSVar10 = operator_new(0x60);
  *(Sprite **)(unaff_EBP - 0x6f4c) = pSVar10;
  *(undefined4 *)(unaff_EBP - 4) = 0x168;
  if (pSVar10 == (Sprite *)0x0) {
    pSVar10 = (Sprite *)0x0;
  }
  else {
    pSVar10 = cube::Sprite::Sprite(pSVar10,*(undefined4 *)(unaff_EBP - 0x6fb0));
  }
  *(undefined4 *)(unaff_EBP - 4) = 0xbf;
  *(Sprite **)(unaff_EBX + 0x800730) = pSVar10;
  FUN_004e75c0(1,1,1);
  uVar3 = FUN_0040ea70(0xff,0xff,0xff);
  FUN_004a2870(0,0,0);
  FUN_00428920(uVar3);
  FUN_004e7870();
  pCVar11 = operator_new(0x1e60);
  *(Creature **)(unaff_EBP - 0x6f4c) = pCVar11;
  *(undefined4 *)(unaff_EBP - 4) = 0x169;
  if (pCVar11 == (Creature *)0x0) {
    pCVar11 = (Creature *)0x0;
  }
  else {
    *(undefined4 *)(unaff_EBP - 0x71f8) = 1;
    *(undefined4 *)(unaff_EBP - 0x71f4) = 0;
    pCVar11 = cube::Creature::Creature(pCVar11,(undefined4 *)(unaff_EBP - 0x71f8));
  }
  *(Creature **)(unaff_EBX + 0x8006d0) = pCVar11;
  *(undefined4 *)(unaff_EBP - 4) = 0xbf;
  FUN_00458bd0(&pCVar11[0x116].Creature_data.offset_0x4,"Wollay");
  uVar3 = FUN_00487fe0();
  FUN_0042c460(uVar3);
  uVar5 = FUN_0040ea90(0,0,0);
  FUN_00411e30(uVar5);
  uVar5 = FUN_0040ea90(0,0,0);
  FUN_00411e30(uVar5);
  *(undefined4 *)(*(int *)(unaff_EBX + 0x8006d0) + 0x5c) = 0;
  *(undefined4 *)(*(int *)(unaff_EBX + 0x8006d0) + 0x180) = 0x3f800000;
  *(undefined4 *)(*(int *)(unaff_EBX + 0x8006d0) + 400) = 1;
  fVar19 = (float10)FUN_00444db0();
  *(float *)(*(int *)(unaff_EBX + 0x8006d0) + 0x16c) = (float)fVar19;
  *(undefined1 *)(*(int *)(unaff_EBX + 0x8006d0) + 0xaa8) = 3;
  *(undefined1 *)(*(int *)(unaff_EBX + 0x8006d0) + 0xaa9) = 0;
  *(undefined1 *)(*(int *)(unaff_EBX + 0x8006d0) + 0xab5) = 1;
  *(undefined1 *)(*(int *)(unaff_EBX + 0x8006d0) + 0x990) = 3;
  *(undefined1 *)(*(int *)(unaff_EBX + 0x8006d0) + 0x991) = 0;
  *(undefined1 *)(*(int *)(unaff_EBX + 0x8006d0) + 0x99d) = 1;
  *(undefined1 *)(*(int *)(unaff_EBX + 0x8006d0) + 0x53d) = 1;
  *(undefined1 *)(*(int *)(unaff_EBX + 0x8006d0) + 0x60) = 0;
  *(undefined1 *)(*(int *)(unaff_EBX + 0x8006d0) + 0x140) = 1;
  FUN_0042c460(uVar3);
  *(undefined4 *)(*(int *)(unaff_EBX + 0x8006d0) + 100) = 2;
  pvVar4 = operator_new(0x40);
  *(void **)(unaff_EBP - 0x6f4c) = pvVar4;
  *(undefined4 *)(unaff_EBP - 4) = 0x16a;
  if (pvVar4 == (void *)0x0) {
    uVar3 = 0;
  }
  else {
    uVar3 = FUN_0044a7e0();
  }
  iVar6 = *(int *)(unaff_EBX + 0x8006d0);
  *(undefined4 *)(unaff_EBP - 4) = 0xbf;
  *(undefined4 *)(iVar6 + 0x1d28) = uVar3;
  iVar6 = *(int *)(unaff_EBX + 0x8006d0);
  FUN_0043f7c0(iVar6 + 100,iVar6 + 0x78,*(undefined4 *)(iVar6 + 0x1d28));
  uVar3 = *(undefined4 *)(unaff_EBX + 0x8006d0);
  *(undefined4 *)(unaff_EBP - 0x71e0) = 1;
  *(undefined4 *)(unaff_EBP - 0x71dc) = 0;
  puVar8 = (undefined4 *)FUN_00468ad0(unaff_EBP - 0x71e0);
  *puVar8 = uVar3;
  FUN_00487e90(*(undefined4 *)(unaff_EBX + 0x8006d0));
  (**(code **)(**(int **)(unaff_EBX + 0x134) + 0x5c))
            (*(int **)(unaff_EBX + 0x134),0x100,0x100,1,0,0x15,1,
             (undefined4 *)(unaff_EBX + 0x8006dc),0);
  piVar7 = *(int **)(unaff_EBX + 0x8006dc);
  (**(code **)(*piVar7 + 0x4c))(piVar7,0,unaff_EBP - 0x7000,0,0x2000);
  iVar6 = 0;
  *(undefined4 *)(unaff_EBP - 0x6f4c) = *(undefined4 *)(unaff_EBP - 0x6ffc);
  *(undefined4 *)(unaff_EBP - 0x6f58) = 0;
  do {
    iVar17 = 0;
    fVar20 = (float)iVar6 - 127.5;
    *(float *)(unaff_EBP - 0x6f54) = fVar20;
    do {
      FUN_0040ea50((float)iVar17 - 127.5,fVar20);
      fVar19 = (float10)FUN_00424830();
      *(float *)(unaff_EBP - 0x6f74) = (float)fVar19;
      fVar20 = 1.0 - *(float *)(unaff_EBP - 0x6f74) * 6.1035156e-05;
      if (fVar20 < 0.0) {
        fVar20 = 0.0;
      }
      uVar3 = FUN_00458d20(0xff,0xff,0xff,(int)(fVar20 * fVar20 * fVar20 * 128.0) & 0xff);
      FUN_0042f470(uVar3);
      fVar20 = *(float *)(unaff_EBP - 0x6f54);
      iVar17 = iVar17 + 1;
    } while (iVar17 < 0x100);
    iVar6 = *(int *)(unaff_EBP - 0x6f58) + 1;
    *(int *)(unaff_EBP - 0x6f4c) = *(int *)(unaff_EBP - 0x6f4c) + *(int *)(unaff_EBP - 0x7000);
    *(int *)(unaff_EBP - 0x6f58) = iVar6;
  } while (iVar6 < 0x100);
  (**(code **)(**(int **)(unaff_EBX + 0x8006dc) + 0x50))(*(int **)(unaff_EBX + 0x8006dc),0);
  (**(code **)(**(int **)(unaff_EBX + 0x134) + 0x5c))
            (*(int **)(unaff_EBX + 0x134),0x100,0x100,1,0,0x15,1,
             (undefined4 *)(unaff_EBX + 0x8006e0),0);
  piVar7 = *(int **)(unaff_EBX + 0x8006e0);
  (**(code **)(*piVar7 + 0x4c))(piVar7,0,unaff_EBP - 0x7000,0,0x2000);
  iVar6 = 0;
  *(undefined4 *)(unaff_EBP - 0x6f4c) = *(undefined4 *)(unaff_EBP - 0x6ffc);
  *(undefined4 *)(unaff_EBP - 0x6f58) = 0;
  do {
    iVar17 = 0;
    fVar20 = (float)iVar6 - 127.5;
    *(float *)(unaff_EBP - 0x6f54) = fVar20;
    do {
      FUN_0040ea50((float)iVar17 - 127.5,fVar20);
      fVar19 = (float10)FUN_00423ee0();
      *(float *)(unaff_EBP - 0x6f74) = (float)fVar19;
      fVar20 = 1.05 - *(float *)(unaff_EBP - 0x6f74) * 1.05 * 0.0078125;
      fVar21 = 0.0;
      if ((fVar20 < 0.0) || (fVar21 = 1.0, 1.0 < fVar20)) {
        fVar20 = fVar21;
      }
      fVar20 = fVar20 * fVar20 * fVar20 * fVar20;
      uVar3 = FUN_00458d20((int)(fVar20 * 155.0 + 100.0) & 0xff,0xff,0xff,
                           (int)(fVar20 * 255.0) & 0xff);
      FUN_0042f470(uVar3);
      fVar20 = *(float *)(unaff_EBP - 0x6f54);
      iVar17 = iVar17 + 1;
    } while (iVar17 < 0x100);
    iVar6 = *(int *)(unaff_EBP - 0x6f58) + 1;
    *(int *)(unaff_EBP - 0x6f4c) = *(int *)(unaff_EBP - 0x6f4c) + *(int *)(unaff_EBP - 0x7000);
    *(int *)(unaff_EBP - 0x6f58) = iVar6;
  } while (iVar6 < 0x100);
  (**(code **)(**(int **)(unaff_EBX + 0x8006e0) + 0x50))(*(int **)(unaff_EBX + 0x8006e0),0);
  *(undefined4 *)(unaff_EBP - 0x6f4c) = 0;
  FUN_004871e0(0x40,unaff_EBP - 0x6f4c);
  puVar8 = (undefined4 *)FUN_00468c60(0);
  uVar3 = FUN_004120c0(0x977);
  *puVar8 = uVar3;
  puVar8 = (undefined4 *)FUN_00468c60(1);
  uVar3 = FUN_004120c0(0x978);
  *puVar8 = uVar3;
  puVar8 = (undefined4 *)FUN_00468c60(2);
  uVar3 = FUN_004120c0(0x979);
  *puVar8 = uVar3;
  puVar8 = (undefined4 *)FUN_00468c60(3);
  uVar3 = FUN_004120c0(0x97a);
  *puVar8 = uVar3;
  puVar8 = (undefined4 *)FUN_00468c60(4);
  uVar3 = FUN_004120c0(0x97b);
  *puVar8 = uVar3;
  puVar8 = (undefined4 *)FUN_00468c60(6);
  uVar3 = FUN_004120c0(0x9a1);
  *puVar8 = uVar3;
  puVar8 = (undefined4 *)FUN_00468c60(5);
  uVar3 = FUN_004120c0(0x99f);
  *puVar8 = uVar3;
  puVar8 = (undefined4 *)FUN_00468c60(7);
  uVar3 = FUN_004120c0(0x9a0);
  *puVar8 = uVar3;
  puVar8 = (undefined4 *)FUN_00468c60(8);
  uVar3 = FUN_004120c0(0x97c);
  *puVar8 = uVar3;
  puVar8 = (undefined4 *)FUN_00468c60(9);
  uVar3 = FUN_004120c0(0x97d);
  *puVar8 = uVar3;
  puVar8 = (undefined4 *)FUN_00468c60(10);
  uVar3 = FUN_004120c0(0x97e);
  *puVar8 = uVar3;
  puVar8 = (undefined4 *)FUN_00468c60(0xb);
  uVar3 = FUN_004120c0(0x97f);
  *puVar8 = uVar3;
  puVar8 = (undefined4 *)FUN_00468c60(0xc);
  uVar3 = FUN_004120c0(0x980);
  *puVar8 = uVar3;
  puVar8 = (undefined4 *)FUN_00468c60(0xd);
  uVar3 = FUN_004120c0(0x981);
  *puVar8 = uVar3;
  puVar8 = (undefined4 *)FUN_00468c60(0xe);
  uVar3 = FUN_004120c0(0x982);
  *puVar8 = uVar3;
  puVar8 = (undefined4 *)FUN_00468c60(0xf);
  uVar3 = FUN_004120c0(0x983);
  *puVar8 = uVar3;
  puVar8 = (undefined4 *)FUN_00468c60(0x10);
  uVar3 = FUN_004120c0(0x984);
  *puVar8 = uVar3;
  puVar8 = (undefined4 *)FUN_00468c60(0x13);
  uVar3 = FUN_004120c0(0x985);
  *puVar8 = uVar3;
  puVar8 = (undefined4 *)FUN_00468c60(0x14);
  uVar3 = FUN_004120c0(0x986);
  *puVar8 = uVar3;
  puVar8 = (undefined4 *)FUN_00468c60(0x15);
  uVar3 = FUN_004120c0(0x987);
  *puVar8 = uVar3;
  puVar8 = (undefined4 *)FUN_00468c60(0x16);
  uVar3 = FUN_004120c0(0x988);
  *puVar8 = uVar3;
  puVar8 = (undefined4 *)FUN_00468c60(0x17);
  uVar3 = FUN_004120c0(0x989);
  *puVar8 = uVar3;
  puVar8 = (undefined4 *)FUN_00468c60(0x18);
  uVar3 = FUN_004120c0(0x98a);
  *puVar8 = uVar3;
  puVar8 = (undefined4 *)FUN_00468c60(0x19);
  uVar3 = FUN_004120c0(0x98b);
  *puVar8 = uVar3;
  puVar8 = (undefined4 *)FUN_00468c60(0x1a);
  uVar3 = FUN_004120c0(0x98c);
  *puVar8 = uVar3;
  puVar8 = (undefined4 *)FUN_00468c60(0x1b);
  uVar3 = FUN_004120c0(0x98d);
  *puVar8 = uVar3;
  puVar8 = (undefined4 *)FUN_00468c60(0x1c);
  uVar3 = FUN_004120c0(0x98e);
  *puVar8 = uVar3;
  puVar8 = (undefined4 *)FUN_00468c60(0x1d);
  uVar3 = FUN_004120c0(0x98f);
  *puVar8 = uVar3;
  puVar8 = (undefined4 *)FUN_00468c60(0x1e);
  uVar3 = FUN_004120c0(0x990);
  *puVar8 = uVar3;
  puVar8 = (undefined4 *)FUN_00468c60(0x1f);
  uVar3 = FUN_004120c0(0x991);
  *puVar8 = uVar3;
  puVar8 = (undefined4 *)FUN_00468c60(0x20);
  uVar3 = FUN_004120c0(0x992);
  *puVar8 = uVar3;
  puVar8 = (undefined4 *)FUN_00468c60(0x21);
  uVar3 = FUN_004120c0(0x993);
  *puVar8 = uVar3;
  puVar8 = (undefined4 *)FUN_00468c60(0x25);
  uVar3 = FUN_004120c0(0x997);
  *puVar8 = uVar3;
  puVar8 = (undefined4 *)FUN_00468c60(0x22);
  uVar3 = FUN_004120c0(0x994);
  *puVar8 = uVar3;
  puVar8 = (undefined4 *)FUN_00468c60(0x23);
  uVar3 = FUN_004120c0(0x995);
  *puVar8 = uVar3;
  puVar8 = (undefined4 *)FUN_00468c60(0x24);
  uVar3 = FUN_004120c0(0x996);
  *puVar8 = uVar3;
  puVar8 = (undefined4 *)FUN_00468c60(0x26);
  uVar3 = FUN_004120c0(0x998);
  *puVar8 = uVar3;
  puVar8 = (undefined4 *)FUN_00468c60(0x27);
  uVar3 = FUN_004120c0(0x999);
  *puVar8 = uVar3;
  puVar8 = (undefined4 *)FUN_00468c60(0x28);
  uVar3 = FUN_004120c0(0x99a);
  *puVar8 = uVar3;
  puVar8 = (undefined4 *)FUN_00468c60(0x11);
  uVar3 = FUN_004120c0(0x99e);
  *puVar8 = uVar3;
  puVar8 = (undefined4 *)FUN_00468c60(0x29);
  uVar3 = FUN_004120c0(0x99b);
  *puVar8 = uVar3;
  puVar8 = (undefined4 *)FUN_00468c60(0x2a);
  uVar3 = FUN_004120c0(0x99c);
  *puVar8 = uVar3;
  puVar8 = (undefined4 *)FUN_00468c60(0x2b);
  uVar3 = FUN_004120c0(0x99d);
  *puVar8 = uVar3;
  puVar8 = (undefined4 *)FUN_00468c60(0x2c);
  uVar3 = FUN_004120c0(0x9a2);
  *puVar8 = uVar3;
  puVar8 = (undefined4 *)FUN_00468c60(0x2d);
  uVar3 = FUN_004120c0(0x9a3);
  *puVar8 = uVar3;
  puVar8 = (undefined4 *)FUN_00468c60(0x2e);
  uVar3 = FUN_004120c0(0x9a4);
  *puVar8 = uVar3;
  puVar8 = (undefined4 *)FUN_00468c60(0x2f);
  uVar3 = FUN_004120c0(0x9a5);
  *puVar8 = uVar3;
  puVar8 = (undefined4 *)FUN_00468c60(0x30);
  uVar3 = FUN_004120c0(0x9a6);
  *puVar8 = uVar3;
  puVar8 = (undefined4 *)FUN_00468c60(0x32);
  uVar3 = FUN_004120c0(0x9a7);
  *puVar8 = uVar3;
  puVar8 = (undefined4 *)FUN_00468c60(0x31);
  uVar3 = FUN_004120c0(0x9a8);
  *puVar8 = uVar3;
  puVar8 = (undefined4 *)FUN_00468c60(0x33);
  uVar3 = FUN_004120c0(0x9a9);
  *puVar8 = uVar3;
  puVar8 = (undefined4 *)FUN_00468c60(0x34);
  uVar3 = FUN_004120c0(0x9aa);
  *puVar8 = uVar3;
  puVar8 = (undefined4 *)FUN_00468c60(0x35);
  uVar3 = FUN_004120c0(0x9ab);
  *puVar8 = uVar3;
  puVar8 = (undefined4 *)FUN_00468c60(0x36);
  uVar3 = FUN_004120c0(0x9ac);
  *puVar8 = uVar3;
  puVar8 = (undefined4 *)FUN_00468c60(0x37);
  uVar3 = FUN_004120c0(0x9ad);
  *puVar8 = uVar3;
  puVar8 = (undefined4 *)FUN_00468c60(0x38);
  uVar3 = FUN_004120c0(0x9ae);
  *puVar8 = uVar3;
  puVar8 = (undefined4 *)FUN_00468c60(0x39);
  uVar3 = FUN_004120c0(0x9af);
  *puVar8 = uVar3;
  puVar8 = (undefined4 *)FUN_00468c60(0x3a);
  uVar3 = FUN_004120c0(0x9b0);
  *puVar8 = uVar3;
  *(undefined4 *)(unaff_EBP - 0x6f58) = 0;
  FUN_004871e0(0x4e,unaff_EBP - 0x6f58);
  puVar8 = (undefined4 *)FUN_00468c60(0);
  uVar3 = FUN_004120c0(0x9b1);
  *puVar8 = uVar3;
  puVar8 = (undefined4 *)FUN_00468c60(1);
  uVar3 = FUN_004120c0(0x9b2);
  *puVar8 = uVar3;
  puVar8 = (undefined4 *)FUN_00468c60(2);
  uVar3 = FUN_004120c0(0x9b3);
  *puVar8 = uVar3;
  puVar8 = (undefined4 *)FUN_00468c60(3);
  uVar3 = FUN_004120c0(0x9b4);
  *puVar8 = uVar3;
  puVar8 = (undefined4 *)FUN_00468c60(4);
  uVar3 = FUN_004120c0(0x9b5);
  *puVar8 = uVar3;
  puVar8 = (undefined4 *)FUN_00468c60(5);
  uVar3 = FUN_004120c0(0x9b6);
  *puVar8 = uVar3;
  puVar8 = (undefined4 *)FUN_00468c60(7);
  uVar3 = FUN_004120c0(0x9b7);
  *puVar8 = uVar3;
  puVar8 = (undefined4 *)FUN_00468c60(8);
  uVar3 = FUN_004120c0(0x9b8);
  *puVar8 = uVar3;
  puVar8 = (undefined4 *)FUN_00468c60(9);
  uVar3 = FUN_004120c0(0x9b9);
  *puVar8 = uVar3;
  puVar8 = (undefined4 *)FUN_00468c60(10);
  uVar3 = FUN_004120c0(0x9ba);
  *puVar8 = uVar3;
  puVar8 = (undefined4 *)FUN_00468c60(0xb);
  uVar3 = FUN_004120c0(0x9bb);
  *puVar8 = uVar3;
  puVar8 = (undefined4 *)FUN_00468c60(0xc);
  uVar3 = FUN_004120c0(0x9bc);
  *puVar8 = uVar3;
  puVar8 = (undefined4 *)FUN_00468c60(0xd);
  uVar3 = FUN_004120c0(0x9bd);
  *puVar8 = uVar3;
  puVar8 = (undefined4 *)FUN_00468c60(0xf);
  uVar3 = FUN_004120c0(0x9bf);
  *puVar8 = uVar3;
  puVar8 = (undefined4 *)FUN_00468c60(0x10);
  uVar3 = FUN_004120c0(0x9c1);
  *puVar8 = uVar3;
  puVar8 = (undefined4 *)FUN_00468c60(0x11);
  uVar3 = FUN_004120c0(0x9c0);
  *puVar8 = uVar3;
  puVar8 = (undefined4 *)FUN_00468c60(0x12);
  uVar3 = FUN_004120c0(0x9c2);
  *puVar8 = uVar3;
  puVar8 = (undefined4 *)FUN_00468c60(0x13);
  uVar3 = FUN_004120c0(0x9c3);
  *puVar8 = uVar3;
  puVar8 = (undefined4 *)FUN_00468c60(0x14);
  uVar3 = FUN_004120c0(0x9c4);
  *puVar8 = uVar3;
  puVar8 = (undefined4 *)FUN_00468c60(0x15);
  uVar3 = FUN_004120c0(0x9c6);
  *puVar8 = uVar3;
  puVar8 = (undefined4 *)FUN_00468c60(0x16);
  uVar3 = FUN_004120c0(0x9c7);
  *puVar8 = uVar3;
  puVar8 = (undefined4 *)FUN_00468c60(0x17);
  uVar3 = FUN_004120c0(0x9c8);
  *puVar8 = uVar3;
  puVar8 = (undefined4 *)FUN_00468c60(0x18);
  uVar3 = FUN_004120c0(0x9c9);
  *puVar8 = uVar3;
  puVar8 = (undefined4 *)FUN_00468c60(0x19);
  uVar3 = FUN_004120c0(0x9ca);
  *puVar8 = uVar3;
  puVar8 = (undefined4 *)FUN_00468c60(0x1a);
  uVar3 = FUN_004120c0(0x9cb);
  *puVar8 = uVar3;
  puVar8 = (undefined4 *)FUN_00468c60(0x1b);
  uVar3 = FUN_004120c0(0x9cc);
  *puVar8 = uVar3;
  puVar8 = (undefined4 *)FUN_00468c60(0x1c);
  uVar3 = FUN_004120c0(0x9cd);
  *puVar8 = uVar3;
  puVar8 = (undefined4 *)FUN_00468c60(0x1d);
  uVar3 = FUN_004120c0(0x9c5);
  *puVar8 = uVar3;
  puVar8 = (undefined4 *)FUN_00468c60(0x1e);
  uVar3 = FUN_004120c0(0x9ce);
  *puVar8 = uVar3;
  puVar8 = (undefined4 *)FUN_00468c60(0x1f);
  uVar3 = FUN_004120c0(0x9cf);
  *puVar8 = uVar3;
  puVar8 = (undefined4 *)FUN_00468c60(0x20);
  uVar3 = FUN_004120c0(0x9d0);
  *puVar8 = uVar3;
  puVar8 = (undefined4 *)FUN_00468c60(0x21);
  uVar3 = FUN_004120c0(0x9d1);
  *puVar8 = uVar3;
  puVar8 = (undefined4 *)FUN_00468c60(0x22);
  uVar3 = FUN_004120c0(0x9d2);
  *puVar8 = uVar3;
  puVar8 = (undefined4 *)FUN_00468c60(0x23);
  uVar3 = FUN_004120c0(0x9d3);
  *puVar8 = uVar3;
  puVar8 = (undefined4 *)FUN_00468c60(0x24);
  uVar3 = FUN_004120c0(0x9d4);
  *puVar8 = uVar3;
  puVar8 = (undefined4 *)FUN_00468c60(0x25);
  uVar3 = FUN_004120c0(0x9d5);
  *puVar8 = uVar3;
  puVar8 = (undefined4 *)FUN_00468c60(0x26);
  uVar3 = FUN_004120c0(0x9d6);
  *puVar8 = uVar3;
  puVar8 = (undefined4 *)FUN_00468c60(0x27);
  uVar3 = FUN_004120c0(0x9d7);
  *puVar8 = uVar3;
  puVar8 = (undefined4 *)FUN_00468c60(0x28);
  uVar3 = FUN_004120c0(0x9d8);
  *puVar8 = uVar3;
  puVar8 = (undefined4 *)FUN_00468c60(0x29);
  uVar3 = FUN_004120c0(0x9d9);
  *puVar8 = uVar3;
  puVar8 = (undefined4 *)FUN_00468c60(0x2a);
  uVar3 = FUN_004120c0(0x9da);
  *puVar8 = uVar3;
  puVar8 = (undefined4 *)FUN_00468c60(0x2b);
  uVar3 = FUN_004120c0(0x9db);
  *puVar8 = uVar3;
  puVar8 = (undefined4 *)FUN_00468c60(0x2c);
  uVar3 = FUN_004120c0(0x9dc);
  *puVar8 = uVar3;
  puVar8 = (undefined4 *)FUN_00468c60(0x2d);
  uVar3 = FUN_004120c0(0x9dd);
  *puVar8 = uVar3;
  puVar8 = (undefined4 *)FUN_00468c60(0x2e);
  uVar3 = FUN_004120c0(0x81f);
  *puVar8 = uVar3;
  puVar8 = (undefined4 *)FUN_00468c60(0x2f);
  uVar3 = FUN_004120c0(0x9de);
  *puVar8 = uVar3;
  puVar8 = (undefined4 *)FUN_00468c60(0x30);
  uVar3 = FUN_004120c0(0x9df);
  *puVar8 = uVar3;
  puVar8 = (undefined4 *)FUN_00468c60(0x31);
  uVar3 = FUN_004120c0(0x9e0);
  *puVar8 = uVar3;
  puVar8 = (undefined4 *)FUN_00468c60(0x32);
  uVar3 = FUN_004120c0(0x9e1);
  *puVar8 = uVar3;
  puVar8 = (undefined4 *)FUN_00468c60(0x33);
  uVar3 = FUN_004120c0(0x9e2);
  *puVar8 = uVar3;
  puVar8 = (undefined4 *)FUN_00468c60(0x38);
  uVar3 = FUN_004120c0(0x912);
  *puVar8 = uVar3;
  puVar8 = (undefined4 *)FUN_00468c60(0x39);
  uVar3 = FUN_004120c0(0x913);
  *puVar8 = uVar3;
  puVar8 = (undefined4 *)FUN_00468c60(0x3a);
  uVar3 = FUN_004120c0(0x914);
  *puVar8 = uVar3;
  puVar8 = (undefined4 *)FUN_00468c60(0x3b);
  uVar3 = FUN_004120c0(0x915);
  *puVar8 = uVar3;
  puVar8 = (undefined4 *)FUN_00468c60(0x3c);
  uVar3 = FUN_004120c0(0x916);
  *puVar8 = uVar3;
  puVar8 = (undefined4 *)FUN_00468c60(0x3d);
  uVar3 = FUN_004120c0(0x917);
  *puVar8 = uVar3;
  puVar8 = (undefined4 *)FUN_00468c60(0x3e);
  uVar3 = FUN_004120c0(0x918);
  *puVar8 = uVar3;
  puVar8 = (undefined4 *)FUN_00468c60(0x3f);
  uVar3 = FUN_004120c0(0x919);
  *puVar8 = uVar3;
  puVar8 = (undefined4 *)FUN_00468c60(0x40);
  uVar3 = FUN_004120c0(0x91a);
  *puVar8 = uVar3;
  puVar8 = (undefined4 *)FUN_00468c60(0x34);
  uVar3 = FUN_004120c0(0x9e3);
  *puVar8 = uVar3;
  puVar8 = (undefined4 *)FUN_00468c60(0x35);
  uVar3 = FUN_004120c0(0x9e4);
  *puVar8 = uVar3;
  puVar8 = (undefined4 *)FUN_00468c60(0x36);
  uVar3 = FUN_004120c0(0x9e5);
  *puVar8 = uVar3;
  puVar8 = (undefined4 *)FUN_00468c60(0x37);
  uVar3 = FUN_004120c0(0x9e6);
  *puVar8 = uVar3;
  puVar8 = (undefined4 *)FUN_00468c60(0x47);
  uVar3 = FUN_004120c0(0x9e7);
  *puVar8 = uVar3;
  puVar8 = (undefined4 *)FUN_00468c60(0x48);
  uVar3 = FUN_004120c0(0x9e8);
  *puVar8 = uVar3;
  puVar8 = (undefined4 *)FUN_00468c60(0x4b);
  uVar3 = FUN_004120c0(0x9e9);
  *puVar8 = uVar3;
  puVar8 = (undefined4 *)FUN_00468c60(0x4c);
  uVar3 = FUN_004120c0(0x9ea);
  *puVar8 = uVar3;
  puVar8 = (undefined4 *)FUN_00468c60(0x4d);
  uVar3 = FUN_004120c0(0x9eb);
  *puVar8 = uVar3;
  puVar8 = (undefined4 *)FUN_00468c60(0x49);
  uVar3 = FUN_004120c0(0x9ec);
  *puVar8 = uVar3;
  puVar8 = (undefined4 *)FUN_00468c60(0x4a);
  uVar3 = FUN_004120c0(0x9ed);
  *puVar8 = uVar3;
  puVar8 = (undefined4 *)FUN_00468c60(0x41);
  uVar3 = FUN_004120c0(0x9fa);
  *puVar8 = uVar3;
  puVar8 = (undefined4 *)FUN_00468c60(0x42);
  uVar3 = FUN_004120c0(0x9fb);
  *puVar8 = uVar3;
  puVar8 = (undefined4 *)FUN_00468c60(0x43);
  uVar3 = FUN_004120c0(0x9fc);
  *puVar8 = uVar3;
  puVar8 = (undefined4 *)FUN_00468c60(0x44);
  uVar3 = FUN_004120c0(0x9fd);
  *puVar8 = uVar3;
  puVar8 = (undefined4 *)FUN_00468c60(0x45);
  uVar3 = FUN_004120c0(0x9fe);
  *puVar8 = uVar3;
  pSVar10 = operator_new(0x60);
  *(Sprite **)(unaff_EBP - 0x6f74) = pSVar10;
  *(undefined4 *)(unaff_EBP - 4) = 0x16b;
  if (pSVar10 == (Sprite *)0x0) {
    pSVar10 = (Sprite *)0x0;
  }
  else {
    pSVar10 = cube::Sprite::Sprite(pSVar10,*(undefined4 *)(unaff_EBP - 0x6fb0));
  }
  *(undefined4 *)(unaff_EBP - 4) = 0xbf;
  *(Sprite **)(unaff_EBX + 0x800734) = pSVar10;
  FUN_00403350("build-cursor.cub");
  *(undefined4 *)(unaff_EBP - 4) = 0x16c;
  FUN_004e7290(unaff_EBP - 0xed0,0,1);
  *(undefined4 *)(unaff_EBP - 4) = 0xbf;
  FUN_00403eb0();
  *(undefined1 *)(unaff_EBX + 0x800584) = 1;
  puVar8 = (undefined4 *)FUN_00458ce0(unaff_EBX);
  std::
  _Func_impl<std::_Callable_obj<<lambda_1ffef8671b5d330b7078b5ff273ee5fb>,0>,std::allocator<std::_Func_class<void,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil>_>,void,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil>
  ::
  _Func_impl<std::_Callable_obj<<lambda_1ffef8671b5d330b7078b5ff273ee5fb>,0>,std::allocator<std::_Func_class<void,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil>_>,void,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil>
            ((_Func_impl<std::_Callable_obj<<lambda_1ffef8671b5d330b7078b5ff273ee5fb>,0>,std::allocator<std::_Func_class<void,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil>_>,void,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil>
              *)(unaff_EBP - 0xf00),puVar8);
  *(undefined4 *)(unaff_EBP - 4) = 0x16d;
  uVar3 = FUN_00450e70(unaff_EBP - 0xf00);
  *(undefined4 *)(unaff_EBX + 0x800588) = uVar3;
  *(undefined4 *)(unaff_EBP - 4) = 0xbf;
  FUN_00450dc0();
  SetThreadPriority(*(HANDLE *)(unaff_EBX + 0x800588),-1);
  puVar8 = (undefined4 *)FUN_00458ce0(unaff_EBX);
  std::
  _Func_impl<std::_Callable_obj<<lambda_29209b183b27224642a038ec1f3692c5>,0>,std::allocator<std::_Func_class<void,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil>_>,void,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil>
  ::
  _Func_impl<std::_Callable_obj<<lambda_29209b183b27224642a038ec1f3692c5>,0>,std::allocator<std::_Func_class<void,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil>_>,void,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil>
            ((_Func_impl<std::_Callable_obj<<lambda_29209b183b27224642a038ec1f3692c5>,0>,std::allocator<std::_Func_class<void,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil>_>,void,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil>
              *)(unaff_EBP - 0xf30),puVar8);
  *(undefined4 *)(unaff_EBP - 4) = 0x16e;
  uVar3 = FUN_00450e70(unaff_EBP - 0xf30);
  *(undefined4 *)(unaff_EBX + 0x80058c) = uVar3;
  *(undefined4 *)(unaff_EBP - 4) = 0xbf;
  FUN_00450dc0();
  SetThreadPriority(*(HANDLE *)(unaff_EBX + 0x80058c),-1);
  *(undefined1 *)(unaff_EBX + 0x8005b0) = 1;
  puVar8 = (undefined4 *)FUN_00458ce0(unaff_EBX);
  std::
  _Func_impl<std::_Callable_obj<<lambda_fdf816e424f0da55b18915c89c349fdd>,0>,std::allocator<std::_Func_class<void,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil>_>,void,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil>
  ::
  _Func_impl<std::_Callable_obj<<lambda_fdf816e424f0da55b18915c89c349fdd>,0>,std::allocator<std::_Func_class<void,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil>_>,void,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil>
            ((_Func_impl<std::_Callable_obj<<lambda_fdf816e424f0da55b18915c89c349fdd>,0>,std::allocator<std::_Func_class<void,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil>_>,void,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil>
              *)(unaff_EBP - 0xf60),puVar8);
  *(undefined4 *)(unaff_EBP - 4) = 0x16f;
  uVar3 = FUN_00450e70(unaff_EBP - 0xf60);
  *(undefined4 *)(unaff_EBX + 0x8005b4) = uVar3;
  *(undefined4 *)(unaff_EBP - 4) = 0xbf;
  FUN_00450dc0();
  FUN_00487380(4);
  FUN_004db110(0);
  uVar15 = FUN_00411ab0();
  if (uVar15 < 0x32) {
    uVar3 = 0x32;
    FUN_004db110(0);
    FUN_0044d660(uVar3);
  }
  uVar3 = 0x32;
  FUN_004db110(1);
  FUN_0044d660(uVar3);
  uVar3 = 0x32;
  FUN_004db110(2);
  FUN_0044d660(uVar3);
  uVar3 = 0x32;
  FUN_004db110(3);
  FUN_0044d660(uVar3);
  FUN_0042bf80(3000);
  iVar17 = 0;
  iVar6 = FUN_0042c070();
  if (0 < iVar6) {
    do {
      iVar6 = rand();
      *(float *)(unaff_EBP - 0x6f4c) = ((float)iVar6 * 6.2831855) / 32767.0;
      iVar6 = rand();
      fVar20 = ((float)iVar6 * 1.5707964) / 32767.0;
      *(float *)(unaff_EBP - 0x6f70) = fVar20;
      fVar19 = (float10)FUN_0040e420(fVar20);
      *(float *)(unaff_EBP - 0x6f64) = (float)fVar19;
      *(float *)(unaff_EBP - 0x6f58) = *(float *)(unaff_EBP - 0x6f64) * 100.0;
      iVar6 = rand();
      fVar20 = ((float)iVar6 * 0.1) / 32767.0 + 0.01;
      fVar19 = (float10)FUN_00424b50(*(undefined4 *)(unaff_EBP - 0x6f70),fVar20);
      *(float *)(unaff_EBP - 0x6f64) = (float)fVar19;
      fVar21 = *(float *)(unaff_EBP - 0x6f64) * 100.0;
      fVar19 = (float10)FUN_00424b50(*(undefined4 *)(unaff_EBP - 0x6f4c),fVar21);
      *(float *)(unaff_EBP - 0x6f64) = (float)fVar19;
      fVar22 = *(float *)(unaff_EBP - 0x6f64) * *(float *)(unaff_EBP - 0x6f58);
      fVar19 = (float10)FUN_0040e420(*(undefined4 *)(unaff_EBP - 0x6f4c),fVar22);
      *(float *)(unaff_EBP - 0x6f64) = (float)fVar19;
      ppVar12 = (pair<unsigned___int64,unsigned___int64> *)
                FUN_0040eac0(*(float *)(unaff_EBP - 0x6f64) * *(float *)(unaff_EBP - 0x6f58),fVar22,
                             fVar21,fVar20);
      this = (pair<unsigned___int64,unsigned___int64> *)FUN_00428980(iVar17);
      std::pair<unsigned___int64,unsigned___int64>::
      operator=<std::pair<unsigned___int64,unsigned___int64>,0>(this,ppVar12);
      iVar6 = rand();
      if (iVar6 % 10 == 0) {
        uVar3 = 3;
        FUN_00428980(iVar17);
        pfVar13 = (float *)FUN_00428970(uVar3);
        *pfVar13 = *pfVar13 * 2.0;
      }
      iVar17 = iVar17 + 1;
      iVar6 = FUN_0042c070();
    } while (iVar17 < iVar6);
    unaff_EBX = *(int *)(unaff_EBP - 0x6f50);
  }
  uVar5 = FUN_004515f0(unaff_EBP - 0x19b0,unaff_EBP - 0x28,"buy.png");
  uVar3 = *(undefined4 *)(unaff_EBP - 0x6f44);
  *(undefined4 *)(unaff_EBP - 4) = 0x170;
  uVar5 = FUN_00486a20(uVar5,uVar3);
  *(undefined4 *)(unaff_EBP - 0x6f70) = uVar5;
  *(undefined4 *)(unaff_EBP - 4) = 0xbf;
  FUN_00403eb0();
  uVar5 = <>(1,0,0,1,1);
  FUN_006612d0(uVar5);
  uVar5 = FUN_004515f0(unaff_EBP - 0x19e0,unaff_EBP - 0x28,"buy-back.png");
  *(undefined4 *)(unaff_EBP - 4) = 0x171;
  uVar5 = FUN_00486a20(uVar5,uVar3);
  *(undefined4 *)(unaff_EBP - 0x6fc4) = uVar5;
  *(undefined4 *)(unaff_EBP - 4) = 0xbf;
  FUN_00403eb0();
  uVar5 = <>(1,0,0,1,1);
  FUN_006612d0(uVar5);
  uVar5 = FUN_004515f0(unaff_EBP - 0x1a10,unaff_EBP - 0x28,"craft-heavy-armor.png");
  *(undefined4 *)(unaff_EBP - 4) = 0x172;
  uVar5 = FUN_00486a20(uVar5,uVar3);
  *(undefined4 *)(unaff_EBX + 0x800698) = uVar5;
  *(undefined4 *)(unaff_EBP - 4) = 0xbf;
  FUN_00403eb0();
  uVar5 = <>(1,0,0,1,1);
  FUN_006612d0(uVar5);
  uVar5 = FUN_004515f0(unaff_EBP - 0x1a40,unaff_EBP - 0x28,"craft-medium-armor.png");
  *(undefined4 *)(unaff_EBP - 4) = 0x173;
  uVar5 = FUN_00486a20(uVar5,uVar3);
  *(undefined4 *)(unaff_EBX + 0x80069c) = uVar5;
  *(undefined4 *)(unaff_EBP - 4) = 0xbf;
  FUN_00403eb0();
  uVar5 = <>(1,0,0,1,1);
  FUN_006612d0(uVar5);
  uVar5 = FUN_004515f0(unaff_EBP - 0x1a70,unaff_EBP - 0x28,"craft-rogue-armor.png");
  *(undefined4 *)(unaff_EBP - 4) = 0x174;
  uVar5 = FUN_00486a20(uVar5,uVar3);
  *(undefined4 *)(unaff_EBX + 0x8006a0) = uVar5;
  *(undefined4 *)(unaff_EBP - 4) = 0xbf;
  FUN_00403eb0();
  uVar5 = <>(1,0,0,1,1);
  FUN_006612d0(uVar5);
  uVar5 = FUN_004515f0(unaff_EBP - 0x1aa0,unaff_EBP - 0x28,"craft-light-armor.png");
  *(undefined4 *)(unaff_EBP - 4) = 0x175;
  uVar5 = FUN_00486a20(uVar5,uVar3);
  *(undefined4 *)(unaff_EBX + 0x8006a4) = uVar5;
  *(undefined4 *)(unaff_EBP - 4) = 0xbf;
  FUN_00403eb0();
  uVar5 = <>(1,0,0,1,1);
  FUN_006612d0(uVar5);
  uVar5 = FUN_004515f0(unaff_EBP - 0x1ad0,unaff_EBP - 0x28,"craft-melee-weapons.png");
  *(undefined4 *)(unaff_EBP - 4) = 0x176;
  uVar5 = FUN_00486a20(uVar5,uVar3);
  *(undefined4 *)(unaff_EBX + 0x8006a8) = uVar5;
  *(undefined4 *)(unaff_EBP - 4) = 0xbf;
  FUN_00403eb0();
  uVar5 = <>(1,0,0,1,1);
  FUN_006612d0(uVar5);
  uVar5 = FUN_004515f0(unaff_EBP - 0x1b00,unaff_EBP - 0x28,"craft-rogue-weapons.png");
  *(undefined4 *)(unaff_EBP - 4) = 0x177;
  uVar5 = FUN_00486a20(uVar5,uVar3);
  *(undefined4 *)(unaff_EBX + 0x8006b0) = uVar5;
  *(undefined4 *)(unaff_EBP - 4) = 0xbf;
  FUN_00403eb0();
  uVar5 = <>(1,0,0,1,1);
  FUN_006612d0(uVar5);
  uVar5 = FUN_004515f0(unaff_EBP - 0x1b30,unaff_EBP - 0x28,"craft-ranged-weapons.png");
  *(undefined4 *)(unaff_EBP - 4) = 0x178;
  uVar5 = FUN_00486a20(uVar5,uVar3);
  *(undefined4 *)(unaff_EBX + 0x8006ac) = uVar5;
  *(undefined4 *)(unaff_EBP - 4) = 0xbf;
  FUN_00403eb0();
  uVar5 = <>(1,0,0,1,1);
  FUN_006612d0(uVar5);
  uVar5 = FUN_004515f0(unaff_EBP - 0x1b60,unaff_EBP - 0x28,"craft-magic-weapons.png");
  *(undefined4 *)(unaff_EBP - 4) = 0x179;
  uVar5 = FUN_00486a20(uVar5,uVar3);
  *(undefined4 *)(unaff_EBX + 0x8006b4) = uVar5;
  *(undefined4 *)(unaff_EBP - 4) = 0xbf;
  FUN_00403eb0();
  uVar5 = <>(1,0,0,1,1);
  FUN_006612d0(uVar5);
  uVar5 = FUN_004515f0(unaff_EBP - 0x1b90,unaff_EBP - 0x28,"craft-amulets.png");
  *(undefined4 *)(unaff_EBP - 4) = 0x17a;
  uVar5 = FUN_00486a20(uVar5,uVar3);
  *(undefined4 *)(unaff_EBX + 0x8006b8) = uVar5;
  *(undefined4 *)(unaff_EBP - 4) = 0xbf;
  FUN_00403eb0();
  uVar5 = <>(1,0,0,1,1);
  FUN_006612d0(uVar5);
  uVar5 = FUN_004515f0(unaff_EBP - 0x1bc0,unaff_EBP - 0x28,"craft-cooking.png");
  *(undefined4 *)(unaff_EBP - 4) = 0x17b;
  uVar5 = FUN_00486a20(uVar5,uVar3);
  *(undefined4 *)(unaff_EBX + 0x8006bc) = uVar5;
  *(undefined4 *)(unaff_EBP - 4) = 0xbf;
  FUN_00403eb0();
  uVar5 = <>(1,0,0,1,1);
  FUN_006612d0(uVar5);
  uVar5 = FUN_004515f0(unaff_EBP - 0x1bf0,unaff_EBP - 0x28,"craft-alchemy.png");
  *(undefined4 *)(unaff_EBP - 4) = 0x17c;
  uVar5 = FUN_00486a20(uVar5,uVar3);
  *(undefined4 *)(unaff_EBX + 0x8006c0) = uVar5;
  *(undefined4 *)(unaff_EBP - 4) = 0xbf;
  FUN_00403eb0();
  uVar5 = <>(1,0,0,1,1);
  FUN_006612d0(uVar5);
  uVar5 = FUN_004515f0(unaff_EBP - 0x1224,unaff_EBP - 0x28,"inventory-ingredients.png");
  *(undefined4 *)(unaff_EBP - 4) = 0x17d;
  uVar5 = FUN_00486a20(uVar5,uVar3);
  *(undefined4 *)(unaff_EBX + 0x8006c4) = uVar5;
  *(undefined4 *)(unaff_EBP - 4) = 0xbf;
  FUN_00403eb0();
  uVar5 = <>(1,0,0,1,1);
  FUN_006612d0(uVar5);
  uVar5 = FUN_004515f0(unaff_EBP - 0x1728,unaff_EBP - 0x28,"inventory-equipment.png");
  *(undefined4 *)(unaff_EBP - 4) = 0x17e;
  uVar5 = FUN_00486a20(uVar5,uVar3);
  *(undefined4 *)(unaff_EBP - 0x6fd0) = uVar5;
  *(undefined4 *)(unaff_EBP - 4) = 0xbf;
  FUN_00403eb0();
  uVar5 = <>(1,0,0,1,1);
  FUN_006612d0(uVar5);
  uVar5 = FUN_004515f0(unaff_EBP - 0x1254,unaff_EBP - 0x28,"inventory-ingredients.png");
  *(undefined4 *)(unaff_EBP - 4) = 0x17f;
  uVar5 = FUN_00486a20(uVar5,uVar3);
  *(undefined4 *)(unaff_EBP - 0x6fc8) = uVar5;
  *(undefined4 *)(unaff_EBP - 4) = 0xbf;
  FUN_00403eb0();
  uVar5 = <>(1,0,0,1,1);
  FUN_006612d0(uVar5);
  uVar5 = FUN_004515f0(unaff_EBP - 0x1ab8,unaff_EBP - 0x28,"inventory-items.png");
  *(undefined4 *)(unaff_EBP - 4) = 0x180;
  uVar5 = FUN_00486a20(uVar5,uVar3);
  *(undefined4 *)(unaff_EBP - 0x6fe8) = uVar5;
  *(undefined4 *)(unaff_EBP - 4) = 0xbf;
  FUN_00403eb0();
  uVar5 = <>(1,0,0,1,1);
  FUN_006612d0(uVar5);
  uVar5 = FUN_004515f0(unaff_EBP - 0x1998,unaff_EBP - 0x28,"inventory-pets.png");
  *(undefined4 *)(unaff_EBP - 4) = 0x181;
  uVar3 = FUN_00486a20(uVar5,uVar3);
  *(undefined4 *)(unaff_EBP - 0x6fd8) = uVar3;
  *(undefined4 *)(unaff_EBP - 4) = 0xbf;
  FUN_00403eb0();
  uVar3 = <>(1,0,0,1,1);
  FUN_006612d0(uVar3);
  FUN_0040eb60(&PTR_006fccac);
  uVar3 = *(undefined4 *)(unaff_EBX + 0x800874);
  *(undefined4 *)(unaff_EBP - 4) = 0x182;
  uVar3 = FUN_0064f4e0(0,0,0,uVar3,unaff_EBP - 0x7548);
  *(undefined4 *)(unaff_EBX + 0x800918) = uVar3;
  *(undefined4 *)(unaff_EBP - 4) = 0xbf;
  FUN_00593e50();
  pvVar4 = operator_new(0x168);
  *(void **)(unaff_EBP - 0x6f5c) = pvVar4;
  *(undefined4 *)(unaff_EBP - 4) = 0x183;
  if (pvVar4 == (void *)0x0) {
    uVar3 = 0;
  }
  else {
    uVar3 = FUN_00583270(*(undefined4 *)(unaff_EBX + 0x800710),*(undefined4 *)(unaff_EBX + 0x800918)
                         ,unaff_EBX);
  }
  *(undefined4 *)(unaff_EBP - 4) = 0xbf;
  *(undefined4 *)(unaff_EBX + 0x80091c) = uVar3;
  FUN_0062c570(0x43480000,0x42c80000,1);
  if (*(int *)(unaff_EBX + 0x8008c8) != 0) {
    uVar3 = FUN_00636040(*(undefined4 *)(unaff_EBX + 0x800884));
    piVar7 = (int *)FUN_00411c70();
    uVar5 = (**(code **)(*piVar7 + 8))();
    FUN_00636b70(uVar5);
    piVar7 = (int *)FUN_0040f8e0();
    uVar5 = (**(code **)(*piVar7 + 8))();
    FUN_006368e0(uVar5);
    uVar26 = 1;
    uVar25 = 0x43480000;
    uVar5 = 0x43820000;
    FUN_00411cf0(0x43820000,0x43480000,1);
    FUN_0062c570(uVar5,uVar25,uVar26);
    FUN_0040eb60(&PTR_006fccac);
    *(undefined4 *)(unaff_EBP - 4) = 0x184;
    uVar3 = FUN_0064f4e0(0,0,0,uVar3,unaff_EBP - 0x76d8);
    *(undefined4 *)(unaff_EBP - 4) = 0xbf;
    FUN_00593e50();
    pvVar4 = operator_new(0x164);
    *(void **)(unaff_EBP - 0x6f5c) = pvVar4;
    *(undefined4 *)(unaff_EBP - 4) = 0x185;
    if (pvVar4 == (void *)0x0) {
      uVar3 = 0;
    }
    else {
      uVar3 = FUN_00434d90(*(undefined4 *)(unaff_EBX + 0x800710),uVar3,unaff_EBX);
    }
    *(undefined4 *)(unaff_EBP - 4) = 0xbf;
    *(undefined4 *)(unaff_EBX + 0x800960) = uVar3;
    FUN_0062a650(0,0,1);
    FUN_0040eb60(&DAT_00700ddc);
    *(undefined4 *)(unaff_EBP - 4) = 0x186;
    uVar3 = FUN_00633d70(unaff_EBP - 0xf90);
    *(undefined4 *)(unaff_EBP - 0x6f48) = uVar3;
    *(undefined4 *)(unaff_EBP - 4) = 0xbf;
    FUN_00593e50();
    FUN_00608f20();
    uVar3 = *(undefined4 *)(unaff_EBX + 0x800884);
    *(undefined4 *)(unaff_EBP - 4) = 0x187;
    uVar3 = FUN_00636040(uVar3);
    *(undefined4 *)(unaff_EBX + 0x8008c4) = uVar3;
    piVar7 = (int *)FUN_00411c70();
    uVar3 = (**(code **)(*piVar7 + 8))();
    FUN_00636b70(uVar3);
    piVar7 = (int *)FUN_0040f8e0();
    uVar3 = (**(code **)(*piVar7 + 8))();
    FUN_006368e0(uVar3);
    FUN_00411a90(0);
    uVar25 = 1;
    uVar5 = 0x440e0000;
    uVar3 = 0x43af0000;
    FUN_00411cf0(0x43af0000,0x440e0000,1);
    FUN_0062c570(uVar3,uVar5,uVar25);
    FUN_0040eb60(&PTR_006fccac);
    *(undefined1 *)(unaff_EBP - 4) = 0x88;
    uVar3 = FUN_0064f4e0(0,0,0,0,unaff_EBP - 0x75f0);
    *(undefined4 *)(unaff_EBP - 0x6f64) = uVar3;
    *(undefined1 *)(unaff_EBP - 4) = 0x87;
    FUN_00593e50();
    pvVar4 = operator_new(0x1b8);
    *(void **)(unaff_EBP - 0x6f5c) = pvVar4;
    *(undefined1 *)(unaff_EBP - 4) = 0x89;
    if (pvVar4 == (void *)0x0) {
      iVar6 = 0;
    }
    else {
      iVar6 = FUN_004c1bb0(unaff_EBX,3,*(undefined4 *)(unaff_EBP - 0x6f64),
                           *(undefined4 *)(unaff_EBX + 0x8008d0),*(undefined4 *)(unaff_EBP - 0x6fc0)
                           ,*(undefined4 *)(unaff_EBP - 0x6fe0),*(undefined4 *)(unaff_EBP - 0x6fdc),
                           0);
    }
    *(int *)(unaff_EBX + 0x80095c) = iVar6;
    *(int *)(iVar6 + 0x160) = unaff_EBX + 0x800c0c;
    uVar25 = 1;
    uVar3 = *(undefined4 *)(unaff_EBX + 0x80095c);
    *(undefined1 *)(unaff_EBP - 4) = 0x87;
    uVar5 = FUN_0042b800(uVar3,1);
    FUN_00631460(uVar5,uVar3,uVar25);
    FUN_0046f870();
    uVar3 = FUN_006326d0(0);
    *(undefined4 *)(unaff_EBP - 0x6f60) = uVar3;
    uVar3 = FUN_0047b5f0();
    *(undefined4 *)(unaff_EBP - 0x70ec) = uVar3;
    iVar6 = unaff_EBP - 0x70ec;
    uVar3 = FUN_00411320(iVar6);
    FUN_00488b90(uVar3);
    FUN_00467f10(iVar6);
    uVar3 = FUN_00411320();
    FUN_00488b90(uVar3);
    FUN_0064ac00();
    FUN_004860b0(unaff_EBP - 0x6f60);
    uVar3 = FUN_006326d0(0);
    *(undefined4 *)(unaff_EBP - 0x6f60) = uVar3;
    uVar3 = FUN_0047b5f0();
    *(undefined4 *)(unaff_EBP - 0x6f84) = uVar3;
    iVar6 = unaff_EBP - 0x6f84;
    uVar3 = FUN_00411320(iVar6);
    FUN_00488b90(uVar3);
    FUN_00467f10(iVar6);
    uVar3 = FUN_00411320();
    FUN_00488b90(uVar3);
    FUN_0064ac00();
    FUN_004860b0(unaff_EBP - 0x6f60);
    FUN_004c6140(unaff_EBP - 0x6f90);
    uVar3 = FUN_00636040(*(undefined4 *)(unaff_EBX + 0x800884));
    *(undefined4 *)(unaff_EBX + 0x8008c0) = uVar3;
    piVar7 = (int *)FUN_00411c70();
    uVar3 = (**(code **)(*piVar7 + 8))();
    FUN_00636b70(uVar3);
    piVar7 = (int *)FUN_0040f8e0();
    uVar3 = (**(code **)(*piVar7 + 8))();
    FUN_006368e0(uVar3);
    uVar25 = 1;
    uVar5 = 0x438e8000;
    uVar3 = 0x43af0000;
    FUN_00411cf0(0x43af0000,0x438e8000,1);
    FUN_0062c570(uVar3,uVar5,uVar25);
    uVar25 = 1;
    uVar5 = 0x43960000;
    uVar3 = 0x43fa0000;
    FUN_00411cf0(0x43fa0000,0x43960000,1);
    FUN_0062a650(uVar3,uVar5,uVar25);
    FUN_00411a90(0);
    FUN_0040eb60(&PTR_006fccac);
    *(undefined1 *)(unaff_EBP - 4) = 0x8a;
    uVar3 = FUN_0064f4e0(0,0,0,0,unaff_EBP - 0x75a8);
    *(undefined4 *)(unaff_EBP - 0x6f84) = uVar3;
    *(undefined1 *)(unaff_EBP - 4) = 0x87;
    FUN_00593e50();
    pvVar4 = operator_new(0x1b8);
    *(void **)(unaff_EBP - 0x6f5c) = pvVar4;
    *(undefined1 *)(unaff_EBP - 4) = 0x8b;
    if (pvVar4 == (void *)0x0) {
      iVar6 = 0;
    }
    else {
      iVar6 = FUN_004c1bb0(unaff_EBX,2,*(undefined4 *)(unaff_EBP - 0x6f84),
                           *(undefined4 *)(unaff_EBX + 0x8008d0),*(undefined4 *)(unaff_EBP - 0x6fc0)
                           ,*(undefined4 *)(unaff_EBP - 0x6fe0),*(undefined4 *)(unaff_EBP - 0x6fdc),
                           *(undefined4 *)(unaff_EBX + 0x8008d4));
    }
    *(int *)(unaff_EBX + 0x800958) = iVar6;
    *(int *)(iVar6 + 0x160) = unaff_EBX + 0x800adc;
    uVar25 = 1;
    uVar3 = *(undefined4 *)(unaff_EBX + 0x800958);
    *(undefined1 *)(unaff_EBP - 4) = 0x87;
    uVar5 = FUN_0042b800(uVar3,1);
    FUN_00631460(uVar5,uVar3,uVar25);
    FUN_004a1e50();
    uVar3 = FUN_00636040(*(undefined4 *)(unaff_EBX + 0x800884));
    *(undefined4 *)(unaff_EBX + 0x800ad4) = uVar3;
    piVar7 = (int *)FUN_00411c70();
    uVar3 = (**(code **)(*piVar7 + 8))();
    FUN_00636b70(uVar3);
    piVar7 = (int *)FUN_0040f8e0();
    uVar3 = (**(code **)(*piVar7 + 8))();
    FUN_006368e0(uVar3);
    FUN_00411a90(0);
    uVar25 = 1;
    uVar5 = 0x43a50000;
    uVar3 = 0x43af0000;
    FUN_00411cf0(0x43af0000,0x43a50000,1);
    FUN_0062c570(uVar3,uVar5,uVar25);
    uVar25 = 1;
    uVar5 = 0x43960000;
    uVar3 = 0x44660000;
    FUN_00411cf0(0x44660000,0x43960000,1);
    FUN_0062a650(uVar3,uVar5,uVar25);
    FUN_0040eb60(&PTR_006fccac);
    *(undefined1 *)(unaff_EBP - 4) = 0x8c;
    uVar3 = FUN_0064f4e0(0,0,0,0,unaff_EBP - 0x7620);
    *(undefined4 *)(unaff_EBP - 0x6f84) = uVar3;
    *(undefined1 *)(unaff_EBP - 4) = 0x87;
    FUN_00593e50();
    FUN_0040eb60(L"craftbutton");
    *(undefined1 *)(unaff_EBP - 4) = 0x8d;
    uVar3 = FUN_00633d70(unaff_EBP - 0xfc0);
    *(undefined4 *)(unaff_EBP - 0x6f54) = uVar3;
    *(undefined1 *)(unaff_EBP - 4) = 0x87;
    FUN_00593e50();
    *(undefined4 *)(unaff_EBP - 0x6fe4) = 0x39;
    FUN_00468910(unaff_EBP - 0x6fe4);
    uVar3 = FUN_0047b5f0();
    *(undefined4 *)(unaff_EBP - 0x6fec) = uVar3;
    iVar6 = unaff_EBP - 0x6fec;
    uVar3 = FUN_00411320(iVar6);
    FUN_00488b90(uVar3);
    FUN_00467f10(iVar6);
    uVar3 = FUN_00411320();
    FUN_00488b90(uVar3);
    FUN_0064ac00();
    FUN_0040eb60(L"craftbar");
    *(undefined1 *)(unaff_EBP - 4) = 0x8e;
    uVar3 = FUN_00633d70(unaff_EBP - 0xff0);
    *(undefined4 *)(unaff_EBP - 0x6fec) = uVar3;
    *(undefined1 *)(unaff_EBP - 4) = 0x87;
    FUN_00593e50();
    pvVar4 = operator_new(0x3c8);
    *(void **)(unaff_EBP - 0x6fe4) = pvVar4;
    *(undefined1 *)(unaff_EBP - 4) = 0x8f;
    if (pvVar4 == (void *)0x0) {
      uVar3 = 0;
    }
    else {
      FUN_0040eb60(L"itemshadow");
      uVar3 = *(undefined4 *)(unaff_EBP - 0x6fec);
      uVar5 = *(undefined4 *)(unaff_EBP - 0x6f54);
      *(undefined4 *)(unaff_EBP - 0x6ff4) = 1;
      *(undefined4 *)(unaff_EBP - 0x6f94) = 1;
      *(undefined1 *)(unaff_EBP - 4) = 0x90;
      uVar25 = FUN_00633d70(unaff_EBP - 0x1020);
      uVar3 = FUN_0042f190(*(undefined4 *)(unaff_EBX + 0x800710),*(undefined4 *)(unaff_EBP - 0x6f84)
                           ,unaff_EBX,uVar25,uVar5,uVar3);
    }
    bVar1 = *(byte *)(unaff_EBP - 0x6ff4);
    *(undefined4 *)(unaff_EBX + 0x800964) = uVar3;
    *(undefined4 *)(unaff_EBP - 4) = 0x187;
    if ((bVar1 & 1) != 0) {
      FUN_00593e50();
    }
    uVar25 = 1;
    uVar3 = *(undefined4 *)(unaff_EBX + 0x800964);
    uVar5 = FUN_0042b800(uVar3,1);
    FUN_00631460(uVar5,uVar3,uVar25);
    FUN_00636950(0);
    uVar3 = FUN_00636040(*(undefined4 *)(unaff_EBX + 0x800880));
    *(undefined4 *)(unaff_EBX + 0x80096c) = uVar3;
    piVar7 = (int *)FUN_00411c70();
    uVar3 = (**(code **)(*piVar7 + 8))();
    FUN_00636b70(uVar3);
    piVar7 = (int *)FUN_0040f8e0();
    uVar3 = (**(code **)(*piVar7 + 8))();
    FUN_006368e0(uVar3);
    uVar25 = 1;
    uVar5 = 0x43a50000;
    uVar3 = 0x43960000;
    FUN_00411cf0(0x43960000,0x43a50000,1);
    FUN_0062c570(uVar3,uVar5,uVar25);
    FUN_0040eb60(&PTR_006fccac);
    *(undefined1 *)(unaff_EBP - 4) = 0x92;
    uVar3 = FUN_0064f4e0(0,0,0,0,unaff_EBP - 0x7670);
    *(undefined4 *)(unaff_EBP - 0x6f94) = uVar3;
    *(undefined1 *)(unaff_EBP - 4) = 0x87;
    FUN_00593e50();
    pvVar4 = operator_new(0x1a8);
    *(void **)(unaff_EBP - 0x6f5c) = pvVar4;
    *(undefined1 *)(unaff_EBP - 4) = 0x93;
    if (pvVar4 == (void *)0x0) {
      uVar3 = 0;
    }
    else {
      uVar3 = FUN_00427ce0(*(undefined4 *)(unaff_EBX + 0x800710),*(undefined4 *)(unaff_EBP - 0x6f94)
                           ,unaff_EBX,*(undefined4 *)(unaff_EBP - 0x7008),
                           *(undefined4 *)(unaff_EBP - 0x6ff8));
    }
    uVar25 = 1;
    *(undefined4 *)(unaff_EBX + 0x800968) = uVar3;
    *(undefined1 *)(unaff_EBP - 4) = 0x87;
    uVar5 = FUN_0042b800(uVar3,1);
    FUN_00631460(uVar5,uVar3,uVar25);
    uVar3 = FUN_00636040(*(undefined4 *)(unaff_EBX + 0x800884));
    *(undefined4 *)(unaff_EBX + 0x800a00) = uVar3;
    piVar7 = (int *)FUN_00411c70();
    uVar3 = (**(code **)(*piVar7 + 8))();
    FUN_00636b70(uVar3);
    piVar7 = (int *)FUN_0040f8e0();
    uVar3 = (**(code **)(*piVar7 + 8))();
    FUN_006368e0(uVar3);
    uVar25 = 1;
    uVar5 = 0x43dc0000;
    uVar3 = 0x43e10000;
    FUN_00411cf0(0x43e10000,0x43dc0000,1);
    FUN_0062c570(uVar3,uVar5,uVar25);
    FUN_00411a90(0);
    FUN_0040eb60(&PTR_006fccac);
    *(undefined1 *)(unaff_EBP - 4) = 0x94;
    uVar3 = FUN_0064f4e0(0,0,0,0,unaff_EBP - 0x76a0);
    *(undefined4 *)(unaff_EBP - 0x6f94) = uVar3;
    *(undefined1 *)(unaff_EBP - 4) = 0x87;
    FUN_00593e50();
    pvVar4 = operator_new(0x208);
    *(void **)(unaff_EBP - 0x6f5c) = pvVar4;
    *(undefined1 *)(unaff_EBP - 4) = 0x95;
    if (pvVar4 == (void *)0x0) {
      uVar3 = 0;
    }
    else {
      uVar3 = FUN_004cf3c0(*(undefined4 *)(unaff_EBX + 0x800710),*(undefined4 *)(unaff_EBP - 0x6f94)
                           ,unaff_EBX,*(undefined4 *)(unaff_EBP - 0x7008),
                           *(undefined4 *)(unaff_EBP - 0x6ff8),*(undefined4 *)(unaff_EBP - 0x6fb8));
    }
    uVar5 = *(undefined4 *)(unaff_EBP - 0x6f78);
    *(undefined1 *)(unaff_EBP - 4) = 0x87;
    *(undefined4 *)(unaff_EBX + 0x8009fc) = uVar3;
    FUN_00468310(uVar5);
    FUN_004d4de0(*(undefined4 *)(unaff_EBP - 0x6f98));
    uVar25 = 1;
    uVar3 = *(undefined4 *)(unaff_EBX + 0x8009fc);
    uVar5 = FUN_0042b800(uVar3,1);
    FUN_00631460(uVar5,uVar3,uVar25);
    uVar3 = FUN_00636040(*(undefined4 *)(unaff_EBX + 0x800884));
    *(undefined4 *)(unaff_EBX + 0x800910) = uVar3;
    piVar7 = (int *)FUN_00411c70();
    uVar3 = (**(code **)(*piVar7 + 8))();
    FUN_00636b70(uVar3);
    piVar7 = (int *)FUN_0040f8e0();
    uVar3 = (**(code **)(*piVar7 + 8))();
    FUN_006368e0(uVar3);
    uVar25 = 1;
    uVar5 = 0x42f00000;
    uVar3 = 0x43160000;
    FUN_00411cf0(0x43160000,0x42f00000,1);
    FUN_0062c570(uVar3,uVar5,uVar25);
    FUN_00411a90(0);
    FUN_0040eb60(&PTR_006fccac);
    *(undefined1 *)(unaff_EBP - 4) = 0x96;
    uVar3 = FUN_0064f4e0(0,0,0,0,unaff_EBP - 0x7758);
    *(undefined4 *)(unaff_EBP - 0x6f78) = uVar3;
    *(undefined1 *)(unaff_EBP - 4) = 0x87;
    FUN_00593e50();
    pvVar4 = operator_new(0x168);
    *(void **)(unaff_EBP - 0x6f5c) = pvVar4;
    *(undefined1 *)(unaff_EBP - 4) = 0x97;
    if (pvVar4 == (void *)0x0) {
      uVar3 = 0;
    }
    else {
      uVar3 = FUN_00587660(*(undefined4 *)(unaff_EBX + 0x800710),*(undefined4 *)(unaff_EBP - 0x6f78)
                           ,unaff_EBX);
    }
    uVar25 = 1;
    *(undefined4 *)(unaff_EBX + 0x800914) = uVar3;
    *(undefined1 *)(unaff_EBP - 4) = 0x87;
    uVar5 = FUN_0042b800(uVar3,1);
    FUN_00631460(uVar5,uVar3,uVar25);
    uVar3 = FUN_00636040(*(undefined4 *)(unaff_EBX + 0x800884));
    *(undefined4 *)(unaff_EBX + 0x8008f8) = uVar3;
    piVar7 = (int *)FUN_00411c70();
    uVar3 = (**(code **)(*piVar7 + 8))();
    FUN_00636b70(uVar3);
    piVar7 = (int *)FUN_0040f8e0();
    uVar3 = (**(code **)(*piVar7 + 8))();
    FUN_006368e0(uVar3);
    uVar25 = 1;
    uVar5 = 0x438e8000;
    uVar3 = 0x43af0000;
    FUN_00411cf0(0x43af0000,0x438e8000,1);
    FUN_0062c570(uVar3,uVar5,uVar25);
    FUN_00411a90(0);
    FUN_0040eb60(&PTR_006fccac);
    *(undefined1 *)(unaff_EBP - 4) = 0x98;
    uVar3 = FUN_0064f4e0(0,0,0,0,unaff_EBP - 0x7638);
    *(undefined4 *)(unaff_EBP - 0x6f78) = uVar3;
    *(undefined1 *)(unaff_EBP - 4) = 0x87;
    FUN_00593e50();
    FUN_0040eb60(L"itemframe");
    *(undefined1 *)(unaff_EBP - 4) = 0x99;
    uVar3 = FUN_00633d70(unaff_EBP - 0x1050);
    *(undefined4 *)(unaff_EBP - 0x6f54) = uVar3;
    *(undefined1 *)(unaff_EBP - 4) = 0x87;
    FUN_00593e50();
    pvVar4 = operator_new(0x174);
    *(void **)(unaff_EBP - 0x6f5c) = pvVar4;
    *(undefined1 *)(unaff_EBP - 4) = 0x9a;
    if (pvVar4 == (void *)0x0) {
      uVar3 = 0;
    }
    else {
      uVar3 = FUN_0044e910(*(undefined4 *)(unaff_EBX + 0x800710),*(undefined4 *)(unaff_EBP - 0x6f78)
                           ,unaff_EBX,*(undefined4 *)(unaff_EBP - 0x6f54));
    }
    uVar25 = 1;
    *(undefined4 *)(unaff_EBX + 0x8008fc) = uVar3;
    *(undefined1 *)(unaff_EBP - 4) = 0x87;
    uVar5 = FUN_0042b800(uVar3,1);
    FUN_00631460(uVar5,uVar3,uVar25);
    uVar3 = FUN_00636040(*(undefined4 *)(unaff_EBX + 0x800884));
    *(undefined4 *)(unaff_EBX + 0x800900) = uVar3;
    piVar7 = (int *)FUN_00411c70();
    uVar3 = (**(code **)(*piVar7 + 8))();
    FUN_00636b70(uVar3);
    piVar7 = (int *)FUN_0040f8e0();
    uVar3 = (**(code **)(*piVar7 + 8))();
    FUN_006368e0(uVar3);
    uVar25 = 1;
    uVar5 = 0x43c80000;
    uVar3 = 0x43af0000;
    FUN_00411cf0(0x43af0000,0x43c80000,1);
    FUN_0062c570(uVar3,uVar5,uVar25);
    FUN_00411a90(0);
    FUN_0040eb60(&PTR_006fccac);
    *(undefined1 *)(unaff_EBP - 4) = 0x9b;
    uVar3 = FUN_0064f4e0(0,0,0,0,unaff_EBP - 0x7440);
    *(undefined4 *)(unaff_EBP - 0x6f78) = uVar3;
    *(undefined1 *)(unaff_EBP - 4) = 0x87;
    FUN_00593e50();
    FUN_0040eb60(L"rightarrow");
    *(undefined1 *)(unaff_EBP - 4) = 0x9c;
    uVar3 = FUN_00633d70(unaff_EBP - 0x1080);
    *(undefined4 *)(unaff_EBP - 0x6f98) = uVar3;
    *(undefined1 *)(unaff_EBP - 4) = 0x87;
    FUN_00593e50();
    pvVar4 = operator_new(0x178);
    *(void **)(unaff_EBP - 0x6f5c) = pvVar4;
    *(undefined1 *)(unaff_EBP - 4) = 0x9d;
    if (pvVar4 == (void *)0x0) {
      uVar3 = 0;
    }
    else {
      uVar3 = FUN_0040ecd0(*(undefined4 *)(unaff_EBX + 0x800710),*(undefined4 *)(unaff_EBP - 0x6f78)
                           ,unaff_EBX,*(undefined4 *)(unaff_EBP - 0x6f54),
                           *(undefined4 *)(unaff_EBP - 0x6f98));
    }
    uVar25 = 1;
    *(undefined4 *)(unaff_EBX + 0x800904) = uVar3;
    *(undefined1 *)(unaff_EBP - 4) = 0x87;
    uVar5 = FUN_0042b800(uVar3,1);
    FUN_00631460(uVar5,uVar3,uVar25);
    uVar3 = FUN_00636040(*(undefined4 *)(unaff_EBX + 0x800884));
    *(undefined4 *)(unaff_EBX + 0x800908) = uVar3;
    piVar7 = (int *)FUN_00411c70();
    uVar3 = (**(code **)(*piVar7 + 8))();
    FUN_00636b70(uVar3);
    piVar7 = (int *)FUN_0040f8e0();
    uVar3 = (**(code **)(*piVar7 + 8))();
    FUN_006368e0(uVar3);
    uVar25 = 1;
    uVar5 = 0x43e60000;
    uVar3 = 0x43960000;
    FUN_00411cf0(0x43960000,0x43e60000,1);
    FUN_0062c570(uVar3,uVar5,uVar25);
    FUN_0040eb60(&PTR_006fccac);
    *(undefined1 *)(unaff_EBP - 4) = 0x9e;
    uVar3 = FUN_0064f4e0(0,0,0,0,unaff_EBP - 0x7480);
    *(undefined1 *)(unaff_EBP - 4) = 0x87;
    FUN_00593e50();
    pvVar4 = operator_new(0x194);
    *(void **)(unaff_EBP - 0x6f5c) = pvVar4;
    *(undefined1 *)(unaff_EBP - 4) = 0x9f;
    if (pvVar4 == (void *)0x0) {
      uVar3 = 0;
    }
    else {
      uVar3 = FUN_004dd750(*(undefined4 *)(unaff_EBX + 0x800710),uVar3,unaff_EBX);
    }
    uVar25 = 1;
    *(undefined4 *)(unaff_EBX + 0x80090c) = uVar3;
    *(undefined1 *)(unaff_EBP - 4) = 0x87;
    uVar5 = FUN_0042b800(uVar3,1);
    FUN_00631460(uVar5,uVar3,uVar25);
    FUN_00636950(0);
    FUN_00636950(0);
    FUN_00403350("Save/characters.db");
    *(undefined1 *)(unaff_EBP - 4) = 0xa0;
    FUN_004497b0(unaff_EBP - 0x10b0);
    FUN_00403eb0();
    *(undefined4 *)(unaff_EBP - 0x7004) = 0;
    FUN_00459a90();
    *(undefined1 *)(unaff_EBP - 4) = 0xa1;
    FUN_00403350(&DAT_00700e68);
    *(undefined1 *)(unaff_EBP - 4) = 0xa2;
    cVar2 = FUN_004498d0(unaff_EBP - 0x10e0,unaff_EBP - 0x7338);
    *(undefined1 *)(unaff_EBP - 4) = 0xa1;
    FUN_00403eb0();
    if (cVar2 != '\0') {
      FUN_0044d620(unaff_EBP - 0x7004,4);
      iVar6 = *(int *)(unaff_EBP - 0x7004);
      iVar17 = 0;
      if (0 < iVar6) {
        do {
          pCVar11 = operator_new(0x1e60);
          *(Creature **)(unaff_EBP - 0x6f5c) = pCVar11;
          *(undefined1 *)(unaff_EBP - 4) = 0xa3;
          if (pCVar11 == (Creature *)0x0) {
            pCVar11 = (Creature *)0x0;
          }
          else {
            *(undefined8 *)(unaff_EBP - 0x7318) = 0;
            pCVar11 = cube::Creature::Creature(pCVar11,(undefined4 *)(unaff_EBP - 0x7318));
          }
          uVar3 = *(undefined4 *)(unaff_EBP - 0x6f50);
          *(undefined1 *)(unaff_EBP - 4) = 0xa1;
          *(Creature **)(unaff_EBP - 0x7030) = pCVar11;
          FUN_004806c0(uVar3,iVar17,pCVar11);
          FUN_0066add0(unaff_EBP - 0x7030);
          iVar17 = iVar17 + 1;
        } while (iVar17 < iVar6);
      }
    }
    FUN_00403350("Save/worlds.db");
    *(undefined1 *)(unaff_EBP - 4) = 0xa4;
    FUN_004497b0(unaff_EBP - 0x1110);
    FUN_00403eb0();
    *(undefined4 *)(unaff_EBP - 0x6fd4) = 0;
    FUN_00459a90();
    *(undefined1 *)(unaff_EBP - 4) = 0xa5;
    FUN_00403350(&DAT_00700e68);
    *(undefined1 *)(unaff_EBP - 4) = 0xa6;
    cVar2 = FUN_004498d0(unaff_EBP - 0x1140,unaff_EBP - 0x7398);
    *(undefined1 *)(unaff_EBP - 4) = 0xa5;
    FUN_00403eb0();
    if (cVar2 == '\0') {
      unaff_EBX = *(int *)(unaff_EBP - 0x6f50);
    }
    else {
      FUN_0044d620(unaff_EBP - 0x6fd4,4);
      unaff_EBX = *(int *)(unaff_EBP - 0x6f50);
      iVar6 = 0;
      if (0 < *(int *)(unaff_EBP - 0x6fd4)) {
        do {
          pWVar14 = operator_new(0x28);
          if (pWVar14 == (WorldInfo *)0x0) {
            pWVar14 = (WorldInfo *)0x0;
          }
          else {
            pWVar14 = cube::WorldInfo::WorldInfo(pWVar14);
          }
          *(WorldInfo **)(unaff_EBP - 0x6fcc) = pWVar14;
          FUN_004809a0(unaff_EBX,iVar6,pWVar14);
          FUN_0066add0(unaff_EBP - 0x6fcc);
          iVar6 = iVar6 + 1;
        } while (iVar6 < *(int *)(unaff_EBP - 0x6fd4));
      }
    }
    uVar3 = FUN_00636040(*(undefined4 *)(unaff_EBX + 0x800884));
    *(undefined4 *)(unaff_EBX + 0x8008dc) = uVar3;
    piVar7 = (int *)FUN_00411c70();
    uVar3 = (**(code **)(*piVar7 + 8))();
    FUN_00636b70(uVar3);
    piVar7 = (int *)FUN_0040f8e0();
    uVar3 = (**(code **)(*piVar7 + 8))();
    FUN_006368e0(uVar3);
    FUN_00411a90(0);
    uVar25 = 1;
    uVar5 = 0x441c0000;
    uVar3 = 0x43c80000;
    FUN_00411cf0(0x43c80000,0x441c0000,1);
    FUN_0062c570(uVar3,uVar5,uVar25);
    FUN_0040eb60(&PTR_006fccac);
    *(undefined1 *)(unaff_EBP - 4) = 0xa7;
    uVar3 = FUN_0064f4e0(0,0,0,0,unaff_EBP - 0x7510);
    *(undefined4 *)(unaff_EBP - 0x6fcc) = uVar3;
    *(undefined1 *)(unaff_EBP - 4) = 0xa5;
    FUN_00593e50();
    pvVar4 = operator_new(0x440);
    *(void **)(unaff_EBP - 0x6f5c) = pvVar4;
    *(undefined1 *)(unaff_EBP - 4) = 0xa8;
    if (pvVar4 == (void *)0x0) {
      uVar3 = 0;
    }
    else {
      uVar3 = FUN_00587f70(*(undefined4 *)(unaff_EBX + 0x800710),*(undefined4 *)(unaff_EBP - 0x6fcc)
                           ,unaff_EBX);
    }
    uVar25 = 1;
    *(undefined4 *)(unaff_EBX + 0x8008f4) = uVar3;
    *(undefined1 *)(unaff_EBP - 4) = 0xa5;
    uVar5 = FUN_0042b800(uVar3,1);
    FUN_00631460(uVar5,uVar3,uVar25);
    uVar3 = FUN_00636040(*(undefined4 *)(unaff_EBX + 0x800884));
    *(undefined4 *)(unaff_EBX + 0x8008bc) = uVar3;
    piVar7 = (int *)FUN_00411c70();
    uVar3 = (**(code **)(*piVar7 + 8))();
    FUN_00636b70(uVar3);
    piVar7 = (int *)FUN_0040f8e0();
    uVar3 = (**(code **)(*piVar7 + 8))();
    FUN_006368e0(uVar3);
    FUN_00411a90(0);
    uVar25 = 1;
    uVar5 = 0x438e8000;
    uVar3 = 0x43c80000;
    FUN_00411cf0(0x43c80000,0x438e8000,1);
    FUN_0062c570(uVar3,uVar5,uVar25);
    FUN_0040eb60(&PTR_006fccac);
    *(undefined1 *)(unaff_EBP - 4) = 0xa9;
    uVar3 = FUN_0064f4e0(0,0,0,0,unaff_EBP - 30000);
    *(undefined1 *)(unaff_EBP - 4) = 0xa5;
    FUN_00593e50();
    pvVar4 = operator_new(0x1b8);
    *(void **)(unaff_EBP - 0x6f5c) = pvVar4;
    *(undefined1 *)(unaff_EBP - 4) = 0xaa;
    if (pvVar4 == (void *)0x0) {
      uVar3 = 0;
    }
    else {
      uVar3 = FUN_004c1bb0(unaff_EBX,0,uVar3,*(undefined4 *)(unaff_EBX + 0x8008cc),
                           *(undefined4 *)(unaff_EBP - 0x6fc0),*(undefined4 *)(unaff_EBP - 0x6fe0),
                           *(undefined4 *)(unaff_EBP - 0x6fdc),0);
    }
    uVar25 = 1;
    *(undefined4 *)(unaff_EBX + 0x800954) = uVar3;
    *(undefined1 *)(unaff_EBP - 4) = 0xa5;
    uVar5 = FUN_0042b800(uVar3,1);
    FUN_00631460(uVar5,uVar3,uVar25);
    FUN_0046f870();
    uVar3 = FUN_006326d0(0);
    *(undefined4 *)(unaff_EBP - 0x6f60) = uVar3;
    uVar3 = FUN_0047b5f0();
    *(undefined4 *)(unaff_EBP - 0x7114) = uVar3;
    iVar6 = unaff_EBP - 0x7114;
    uVar3 = FUN_00411320(iVar6);
    FUN_00488b90(uVar3);
    FUN_00467f10(iVar6);
    uVar3 = FUN_00411320();
    FUN_00488b90(uVar3);
    FUN_0064ac00();
    FUN_004860b0(unaff_EBP - 0x6f60);
    uVar3 = FUN_006326d0(0);
    *(undefined4 *)(unaff_EBP - 0x6f60) = uVar3;
    uVar3 = FUN_0047b5f0();
    *(undefined4 *)(unaff_EBP - 0x7038) = uVar3;
    iVar6 = unaff_EBP - 0x7038;
    uVar3 = FUN_00411320(iVar6);
    FUN_00488b90(uVar3);
    FUN_00467f10(iVar6);
    uVar3 = FUN_00411320();
    FUN_00488b90(uVar3);
    FUN_0064ac00();
    FUN_004860b0(unaff_EBP - 0x6f60);
    uVar3 = FUN_006326d0(0);
    *(undefined4 *)(unaff_EBP - 0x6f60) = uVar3;
    uVar3 = FUN_0047b5f0();
    *(undefined4 *)(unaff_EBP - 0x701c) = uVar3;
    iVar6 = unaff_EBP - 0x701c;
    uVar3 = FUN_00411320(iVar6);
    FUN_00488b90(uVar3);
    FUN_00467f10(iVar6);
    uVar3 = FUN_00411320();
    FUN_00488b90(uVar3);
    FUN_0064ac00();
    FUN_004860b0(unaff_EBP - 0x6f60);
    uVar3 = FUN_006326d0(0);
    *(undefined4 *)(unaff_EBP - 0x6f60) = uVar3;
    uVar3 = FUN_0047b5f0();
    *(undefined4 *)(unaff_EBP - 0x7048) = uVar3;
    iVar6 = unaff_EBP - 0x7048;
    uVar3 = FUN_00411320(iVar6);
    FUN_00488b90(uVar3);
    FUN_00467f10(iVar6);
    uVar3 = FUN_00411320();
    FUN_00488b90(uVar3);
    FUN_0064ac00();
    FUN_004860b0(unaff_EBP - 0x6f60);
    FUN_004c6140(unaff_EBP - 0x6f90);
    FUN_005fb860();
    FUN_005fb860();
    *(undefined4 *)(unaff_EBP - 4) = 0xbf;
    FUN_004da480();
  }
  uVar3 = *(undefined4 *)(unaff_EBP - 0x700c);
  uVar5 = FUN_006326d0(*(undefined4 *)(unaff_EBX + 0x800884));
  *(undefined4 *)(unaff_EBX + 0x800850) = uVar5;
  uVar5 = FUN_006326d0(*(undefined4 *)(unaff_EBX + 0x800884));
  *(undefined4 *)(unaff_EBX + 0x800854) = uVar5;
  FUN_006504e0(uVar3);
  iVar6 = 0;
  do {
    if ((((iVar6 == 6) || (iVar6 == 0)) || (iVar6 == 2)) || (iVar6 == 4)) {
      uVar3 = FUN_006326d0(*(undefined4 *)(unaff_EBX + 0x800884));
      *(undefined4 *)(unaff_EBP - 0x7020) = uVar3;
      iVar17 = unaff_EBP - 0x7020;
    }
    else {
      uVar3 = FUN_006326d0(*(undefined4 *)(unaff_EBX + 0x800884));
      *(undefined4 *)(unaff_EBP - 0x7058) = uVar3;
      iVar17 = unaff_EBP - 0x7058;
    }
    FUN_0066add0(iVar17);
    iVar6 = iVar6 + 1;
  } while (iVar6 < 0xb);
  FUN_006504e0(*(undefined4 *)(unaff_EBP - 0x6f6c));
  FUN_006504e0(*(undefined4 *)(unaff_EBP - 0x6f68));
  uVar3 = FUN_006326d0(*(undefined4 *)(unaff_EBX + 0x800888));
  uVar25 = 1;
  uVar5 = 0x41f00000;
  *(undefined4 *)(unaff_EBX + 0x800990) = uVar3;
  uVar3 = 0x43480000;
  FUN_00411cf0(0x43480000,0x41f00000,1);
  FUN_0062c570(uVar3,uVar5,uVar25);
  FUN_0040eb60(L"Select");
  *(undefined4 *)(unaff_EBP - 4) = 0x1ab;
  FUN_00636ad0(unaff_EBP - 0x1170);
  *(undefined4 *)(unaff_EBP - 4) = 0xbf;
  FUN_00593e50();
  uVar26 = 1;
  uVar25 = 1;
  pcVar23 = FUN_00483e70;
  uVar5 = 3;
  iVar6 = unaff_EBX;
  uVar3 = FUN_00411cf0(3,unaff_EBX,FUN_00483e70,1,1);
  FUN_004576f0(uVar3,uVar5,iVar6,pcVar23,uVar25,uVar26);
  uVar3 = FUN_006326d0(*(undefined4 *)(unaff_EBX + 0x800888));
  uVar25 = 1;
  uVar5 = 0x41a00000;
  *(undefined4 *)(unaff_EBX + 0x800994) = uVar3;
  uVar3 = 0x41a00000;
  FUN_00411cf0(0x41a00000,0x41a00000,1);
  FUN_0062c570(uVar3,uVar5,uVar25);
  uVar26 = 1;
  uVar25 = 1;
  puVar24 = &LAB_004829c0;
  uVar5 = 3;
  iVar6 = unaff_EBX;
  uVar3 = FUN_00411cf0(3,unaff_EBX,&LAB_004829c0,1,1);
  FUN_004576f0(uVar3,uVar5,iVar6,puVar24,uVar25,uVar26);
  FUN_00411a90(0);
  uVar3 = FUN_006326d0(*(undefined4 *)(unaff_EBX + 0x800888));
  uVar25 = 1;
  uVar5 = 0x41f00000;
  *(undefined4 *)(unaff_EBX + 0x800998) = uVar3;
  uVar3 = 0x43960000;
  FUN_00411cf0(0x43960000,0x41f00000,1);
  FUN_0062c570(uVar3,uVar5,uVar25);
  FUN_0040eb60(L"Delete Character");
  *(undefined4 *)(unaff_EBP - 4) = 0x1ac;
  FUN_00636ad0(unaff_EBP - 0x11a0);
  *(undefined4 *)(unaff_EBP - 4) = 0xbf;
  FUN_00593e50();
  uVar26 = 1;
  uVar25 = 1;
  pcVar23 = FUN_004816f0;
  uVar5 = 3;
  iVar6 = unaff_EBX;
  uVar3 = FUN_00411cf0(3,unaff_EBX,FUN_004816f0,1,1);
  FUN_004576f0(uVar3,uVar5,iVar6,pcVar23,uVar25,uVar26);
  FUN_00411a90(0);
  FUN_0049d650();
  uVar3 = FUN_006326d0(*(undefined4 *)(unaff_EBX + 0x80088c));
  uVar25 = 1;
  uVar5 = 0x41f00000;
  *(undefined4 *)(unaff_EBX + 0x8009e8) = uVar3;
  uVar3 = 0x43480000;
  FUN_00411cf0(0x43480000,0x41f00000,1);
  FUN_0062c570(uVar3,uVar5,uVar25);
  FUN_0040eb60(L"Select");
  *(undefined4 *)(unaff_EBP - 4) = 0x1ad;
  FUN_00636ad0(unaff_EBP - 0x11d0);
  *(undefined4 *)(unaff_EBP - 4) = 0xbf;
  FUN_00593e50();
  uVar26 = 1;
  uVar25 = 1;
  pcVar23 = FUN_00484170;
  uVar5 = 3;
  iVar6 = unaff_EBX;
  uVar3 = FUN_00411cf0(3,unaff_EBX,FUN_00484170,1,1);
  FUN_004576f0(uVar3,uVar5,iVar6,pcVar23,uVar25,uVar26);
  uVar3 = FUN_006326d0(*(undefined4 *)(unaff_EBX + 0x80088c));
  uVar25 = 1;
  uVar5 = 0x41a00000;
  *(undefined4 *)(unaff_EBX + 0x8009ec) = uVar3;
  uVar3 = 0x41a00000;
  FUN_00411cf0(0x41a00000,0x41a00000,1);
  FUN_0062c570(uVar3,uVar5,uVar25);
  uVar26 = 1;
  uVar25 = 1;
  puVar24 = &LAB_004829e0;
  uVar5 = 3;
  iVar6 = unaff_EBX;
  uVar3 = FUN_00411cf0(3,unaff_EBX,&LAB_004829e0,1,1);
  FUN_004576f0(uVar3,uVar5,iVar6,puVar24,uVar25,uVar26);
  FUN_00411a90(0);
  uVar3 = FUN_006326d0(*(undefined4 *)(unaff_EBX + 0x80088c));
  *(undefined4 *)(unaff_EBX + 0x8009f0) = uVar3;
  uVar25 = 1;
  uVar5 = 0x41f00000;
  uVar3 = 0x43960000;
  FUN_00411cf0(0x43960000,0x41f00000,1);
  FUN_0062c570(uVar3,uVar5,uVar25);
  FUN_0040eb60(L"Delete World");
  *(undefined4 *)(unaff_EBP - 4) = 0x1ae;
  FUN_00636ad0(unaff_EBP - 0xa68);
  *(undefined4 *)(unaff_EBP - 4) = 0xbf;
  FUN_00593e50();
  uVar26 = 1;
  uVar25 = 1;
  pcVar23 = FUN_00481d30;
  uVar5 = 3;
  iVar6 = unaff_EBX;
  uVar3 = FUN_00411cf0();
  FUN_004576f0(uVar3,uVar5,iVar6,pcVar23,uVar25,uVar26);
  FUN_00411a90(0);
  FUN_004a23d0();
  FUN_0040eb60(&PTR_006fccac);
  uVar3 = *(undefined4 *)(unaff_EBX + 0x800884);
  *(undefined4 *)(unaff_EBP - 4) = 0x1af;
  uVar3 = FUN_0064f4e0(0,0,0,uVar3,unaff_EBP - 0x75d0);
  *(undefined4 *)(unaff_EBX + 0x800ad8) = uVar3;
  *(undefined4 *)(unaff_EBP - 4) = 0xbf;
  FUN_00593e50();
  pvVar4 = operator_new(400);
  *(void **)(unaff_EBP - 0x6f5c) = pvVar4;
  *(undefined4 *)(unaff_EBP - 4) = 0x1b0;
  if (pvVar4 == (void *)0x0) {
    uVar3 = 0;
  }
  else {
    uVar3 = FUN_004393b0(*(undefined4 *)(unaff_EBX + 0x800710),*(undefined4 *)(unaff_EBX + 0x800ad8)
                        );
  }
  *(undefined4 *)(unaff_EBP - 4) = 0xbf;
  *(undefined4 *)(unaff_EBX + 0x800a14) = uVar3;
  FUN_0062c570(0x43c80000,0x43480000,1);
  uVar3 = FUN_00434a80();
  FUN_00636950(uVar3);
  uVar3 = FUN_00434a80();
  FUN_00636950(uVar3);
  FUN_006526b0();
  FUN_00487490();
  FUN_00635700();
  if (*(undefined4 **)(unaff_EBP - 0x6f44) != (undefined4 *)0x0) {
    (**(code **)**(undefined4 **)(unaff_EBP - 0x6f44))(1);
  }
  FUN_00403eb0();
  FUN_005fb860();
  FUN_00403eb0();
  FUN_004043f0();
  *(undefined1 *)(unaff_EBP - 4) = 0x31;
  FUN_00467b60();
  FUN_00403eb0();
  ExceptionList = *(void **)(unaff_EBP - 0xc);
  __security_check_cookie(*(uint *)(unaff_EBP - 0x10) ^ unaff_EBP);
  return;
}


/* FUN_00465bb0 @ 00465bb0  kind=gamemisc  attributed-by=caller-vote  size=71 */

void FUN_00465bb0(void)

{
  undefined4 *in_ECX;
  
  *in_ECX = 0;
  in_ECX[1] = 0;
  in_ECX[2] = 0;
  in_ECX[3] = 0;
  in_ECX[4] = 0;
  *(undefined2 *)(in_ECX + 5) = 0;
  in_ECX[6] = 0;
  in_ECX[7] = 0;
  in_ECX[8] = 0;
  in_ECX[9] = 0;
  return;
}


/* FUN_00465c00 @ 00465c00  kind=gamemisc  attributed-by=caller-vote  size=102 */

void FUN_00465c00(undefined4 *param_1)

{
  undefined4 *in_ECX;
  
  *in_ECX = *param_1;
  in_ECX[1] = param_1[1];
  in_ECX[2] = param_1[2];
  in_ECX[3] = param_1[3];
  in_ECX[4] = param_1[4];
  in_ECX[5] = param_1[5];
  in_ECX[6] = param_1[6];
  in_ECX[7] = param_1[7];
  in_ECX[8] = param_1[8];
  *(undefined1 *)(in_ECX + 9) = *(undefined1 *)(param_1 + 9);
  *(undefined1 *)((int)in_ECX + 0x25) = *(undefined1 *)((int)param_1 + 0x25);
  in_ECX[10] = param_1[10];
  in_ECX[0xb] = param_1[0xb];
  in_ECX[0xc] = param_1[0xc];
  in_ECX[0xd] = param_1[0xd];
  return;
}


/* FUN_00465c70 @ 00465c70  kind=gamemisc  attributed-by=caller-vote  size=99 */

void FUN_00465c70(void)

{
  undefined4 *in_ECX;
  
  *in_ECX = 0;
  in_ECX[1] = 0;
  in_ECX[2] = 0;
  in_ECX[3] = 0;
  in_ECX[4] = 0;
  in_ECX[5] = 0;
  in_ECX[6] = 0;
  in_ECX[7] = 0;
  in_ECX[8] = 0;
  *(undefined2 *)(in_ECX + 9) = 0;
  in_ECX[10] = 0;
  in_ECX[0xb] = 0;
  in_ECX[0xc] = 0;
  in_ECX[0xd] = 0;
  return;
}


/* FUN_00465ce0 @ 00465ce0  kind=gamemisc  attributed-by=caller-vote  size=243 */

void FUN_00465ce0(undefined4 *param_1)

{
  undefined4 *in_ECX;
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  
  *in_ECX = *param_1;
  in_ECX[1] = param_1[1];
  in_ECX[2] = param_1[2];
  in_ECX[3] = param_1[3];
  in_ECX[4] = param_1[4];
  in_ECX[5] = param_1[5];
  in_ECX[6] = param_1[6];
  in_ECX[7] = param_1[7];
  in_ECX[8] = param_1[8];
  in_ECX[9] = param_1[9];
  in_ECX[10] = param_1[10];
  in_ECX[0xb] = param_1[0xb];
  in_ECX[0xc] = param_1[0xc];
  in_ECX[0xd] = param_1[0xd];
  in_ECX[0xe] = param_1[0xe];
  in_ECX[0xf] = param_1[0xf];
  in_ECX[0x10] = param_1[0x10];
  in_ECX[0x11] = param_1[0x11];
  in_ECX[0x12] = param_1[0x12];
  in_ECX[0x13] = param_1[0x13];
  in_ECX[0x14] = param_1[0x14];
  in_ECX[0x15] = param_1[0x15];
  in_ECX[0x16] = param_1[0x16];
  in_ECX[0x17] = param_1[0x17];
  in_ECX[0x18] = param_1[0x18];
  in_ECX[0x19] = param_1[0x19];
  in_ECX[0x1a] = param_1[0x1a];
  puVar2 = param_1 + 0x1b;
  puVar3 = in_ECX + 0x1b;
  for (iVar1 = 0x10; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  in_ECX[0x2b] = param_1[0x2b];
  *(undefined1 *)(in_ECX + 0x2c) = *(undefined1 *)(param_1 + 0x2c);
  *(undefined1 *)((int)in_ECX + 0xb1) = *(undefined1 *)((int)param_1 + 0xb1);
  in_ECX[0x2d] = param_1[0x2d];
  return;
}


/* FUN_00465de0 @ 00465de0  kind=gamemisc  attributed-by=caller-vote  size=120 */

void FUN_00465de0(void)

{
  undefined4 *in_ECX;
  
  *in_ECX = 0;
  in_ECX[1] = 0;
  in_ECX[0xe] = 0;
  in_ECX[0xf] = 0;
  in_ECX[0x10] = 0;
  in_ECX[0x15] = 0;
  in_ECX[0x16] = 0;
  in_ECX[0x17] = 0;
  in_ECX[0x18] = 0;
  in_ECX[0x19] = 0;
  in_ECX[0x1a] = 0;
  in_ECX[0x2b] = 0x3f800000;
  *(undefined2 *)(in_ECX + 0x2c) = 0;
  in_ECX[0x2d] = 4000;
  FUN_00423e70();
  return;
}


/* FUN_00465e60 @ 00465e60  kind=gamemisc  attributed-by=caller-vote  size=112 */

void FUN_00465e60(undefined4 *param_1)

{
  undefined4 *in_ECX;
  
  *in_ECX = *param_1;
  in_ECX[1] = param_1[1];
  in_ECX[2] = param_1[2];
  in_ECX[3] = param_1[3];
  in_ECX[4] = param_1[4];
  in_ECX[5] = param_1[5];
  in_ECX[6] = param_1[6];
  in_ECX[7] = param_1[7];
  in_ECX[8] = param_1[8];
  in_ECX[9] = param_1[9];
  in_ECX[10] = param_1[10];
  in_ECX[0xb] = param_1[0xb];
  in_ECX[0xc] = param_1[0xc];
  in_ECX[0xd] = param_1[0xd];
  in_ECX[0xe] = param_1[0xe];
  in_ECX[0xf] = param_1[0xf];
  in_ECX[0x10] = param_1[0x10];
  return;
}


/* FUN_00465ed0 @ 00465ed0  kind=gamemisc  attributed-by=caller-vote  size=17 */

void FUN_00465ed0(void)

{
  int in_ECX;
  
  *(undefined4 *)(in_ECX + 0x3c) = 0;
  *(undefined4 *)(in_ECX + 0x40) = 0x40400000;
  return;
}


/* FUN_00465ef0 @ 00465ef0  kind=gamemisc  attributed-by=caller-vote  size=188 */

void FUN_00465ef0(undefined4 *param_1)

{
  undefined4 *puVar1;
  undefined4 *in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puVar1 = param_1;
  local_8 = 0xffffffff;
  puStack_c = &LAB_006e4f86;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  *in_ECX = *param_1;
  *(undefined1 *)(in_ECX + 1) = *(undefined1 *)(param_1 + 1);
  in_ECX[2] = param_1[2];
  in_ECX[3] = param_1[3];
  *(undefined1 *)(in_ECX + 4) = *(undefined1 *)(param_1 + 4);
  *(undefined1 *)((int)in_ECX + 0x11) = *(undefined1 *)((int)param_1 + 0x11);
  *(undefined1 *)((int)in_ECX + 0x12) = *(undefined1 *)((int)param_1 + 0x12);
  FUN_00459070(param_1 + 5);
  local_8 = 0;
  FUN_00458d40(puVar1 + 7,(int)&param_1 + 3);
  in_ECX[9] = puVar1[9];
  in_ECX[0xf] = 0xf;
  in_ECX[0xe] = 0;
  local_8 = CONCAT31(local_8._1_3_,1);
  *(undefined1 *)(in_ECX + 10) = 0;
  FUN_0040c0a0(puVar1 + 10,0,0xffffffff);
  ExceptionList = local_10;
  return;
}


/* FUN_00465fb0 @ 00465fb0  kind=gamemisc  attributed-by=caller-vote  size=17 */

void FUN_00465fb0(void)

{
  int in_ECX;
  
  *(undefined4 *)(in_ECX + 0x10) = 0x3f800000;
  *(undefined4 *)(in_ECX + 0x14) = 0x3f800000;
  return;
}


/* FUN_00466410 @ 00466410  kind=gamemisc  attributed-by=caller-vote  size=152 */

void FUN_00466410(undefined4 *param_1)

{
  undefined4 *in_ECX;
  
  *in_ECX = *param_1;
  in_ECX[1] = param_1[1];
  in_ECX[2] = param_1[2];
  in_ECX[3] = param_1[3];
  in_ECX[4] = param_1[4];
  in_ECX[5] = param_1[5];
  in_ECX[6] = param_1[6];
  in_ECX[7] = param_1[7];
  in_ECX[8] = param_1[8];
  in_ECX[9] = param_1[9];
  in_ECX[10] = param_1[10];
  in_ECX[0xb] = param_1[0xb];
  in_ECX[0xc] = param_1[0xc];
  in_ECX[0xd] = param_1[0xd];
  in_ECX[0x13] = 7;
  in_ECX[0x12] = 0;
  *(undefined2 *)(in_ECX + 0xe) = 0;
  FUN_0040f680(param_1 + 0xe,0,0xffffffff);
  in_ECX[0x14] = param_1[0x14];
  in_ECX[0x15] = param_1[0x15];
  in_ECX[0x16] = param_1[0x16];
  return;
}


/* FUN_004664b0 @ 004664b0  kind=gamemisc  attributed-by=caller-vote  size=37 */

void FUN_004664b0(void)

{
  int in_ECX;
  
  *(undefined4 *)(in_ECX + 4) = 0xc2c80000;
  *(undefined4 *)(in_ECX + 0x4c) = 7;
  *(undefined4 *)(in_ECX + 0x48) = 0;
  *(undefined2 *)(in_ECX + 0x38) = 0;
  *(undefined4 *)(in_ECX + 0x50) = 1000;
  return;
}


/* <> @ 004664e0  kind=gamemisc  attributed-by=caller-vote  size=38 */

/* Library Function - Multiple Matches With Same Base Name
    public: __thiscall
   <lambda_0a97c9e57da7be065955385c79108ff2>::<lambda_0a97c9e57da7be065955385c79108ff2>(struct
   _iobuf * const &,struct __crt_locale_pointers * const &,unsigned __int64 const &,wchar_t const *
   const &,char * const &)
    public: __thiscall
   <lambda_0be4ab1c2a6918fda4e39227d83ea893>::<lambda_0be4ab1c2a6918fda4e39227d83ea893>(struct
   _iobuf * const &,struct __crt_locale_pointers * const &,unsigned __int64 const &,char const *
   const &,char * const &)
    public: __thiscall
   <lambda_21448eb78dd3c4a522ed7c65a98d88e6>::<lambda_21448eb78dd3c4a522ed7c65a98d88e6>(struct
   __crt_locale_pointers * const &,struct _iobuf * const &,unsigned __int64 const &,char const *
   const &,char * const &)
    public: __thiscall
   <lambda_2565fc715a641e539f44ad02d6823606>::<lambda_2565fc715a641e539f44ad02d6823606>(struct
   _iobuf * const &,struct __crt_locale_pointers * const &,unsigned __int64 const &,char const *
   const &,char * const &)
     26 names - too many to list
   
   Libraries: Visual Studio 2015 Release, Visual Studio 2017 Release, Visual Studio 2019 Release */

void <>(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
       undefined4 param_5)

{
  undefined4 *in_ECX;
  
  *in_ECX = param_1;
  in_ECX[1] = param_2;
  in_ECX[2] = param_3;
  in_ECX[3] = param_4;
  in_ECX[4] = param_5;
  return;
}


/* FUN_00466880 @ 00466880  kind=gamemisc  attributed-by=caller-vote  size=484 */

void FUN_00466880(void)

{
  undefined4 uVar1;
  undefined4 *in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006e5061;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  *in_ECX = 0;
  in_ECX[1] = 0;
  uVar1 = FUN_0046d810(0,0);
  *in_ECX = uVar1;
  local_8 = 0;
  in_ECX[2] = 0;
  in_ECX[3] = 0;
  uVar1 = FUN_00439600(0,0);
  in_ECX[2] = uVar1;
  local_8._0_1_ = 1;
  in_ECX[4] = 0;
  in_ECX[5] = 0;
  uVar1 = FUN_0046d810(0,0);
  in_ECX[4] = uVar1;
  local_8._0_1_ = 2;
  in_ECX[6] = 0;
  in_ECX[7] = 0;
  uVar1 = FUN_0046d650(0,0);
  in_ECX[6] = uVar1;
  local_8._0_1_ = 3;
  in_ECX[8] = 0;
  in_ECX[9] = 0;
  uVar1 = FUN_0046d5d0(0,0);
  in_ECX[8] = uVar1;
  local_8._0_1_ = 4;
  in_ECX[10] = 0;
  in_ECX[0xb] = 0;
  uVar1 = FUN_0046d590(0,0);
  in_ECX[10] = uVar1;
  local_8._0_1_ = 5;
  in_ECX[0xc] = 0;
  in_ECX[0xd] = 0;
  uVar1 = FUN_0046d790(0,0);
  in_ECX[0xc] = uVar1;
  local_8._0_1_ = 6;
  in_ECX[0xe] = 0;
  in_ECX[0xf] = 0;
  uVar1 = FUN_0046d590(0,0);
  in_ECX[0xe] = uVar1;
  local_8._0_1_ = 7;
  in_ECX[0x10] = 0;
  in_ECX[0x11] = 0;
  uVar1 = FUN_0046d6d0(0,0);
  in_ECX[0x10] = uVar1;
  local_8._0_1_ = 8;
  in_ECX[0x12] = 0;
  in_ECX[0x13] = 0;
  uVar1 = FUN_00439600(0,0);
  in_ECX[0x12] = uVar1;
  local_8._0_1_ = 9;
  in_ECX[0x14] = 0;
  in_ECX[0x15] = 0;
  uVar1 = FUN_00439600(0,0);
  in_ECX[0x14] = uVar1;
  local_8._0_1_ = 10;
  in_ECX[0x16] = 0;
  in_ECX[0x17] = 0;
  uVar1 = FUN_0046d850(0,0);
  in_ECX[0x16] = uVar1;
  local_8 = CONCAT31(local_8._1_3_,0xb);
  in_ECX[0x18] = 0;
  in_ECX[0x19] = 0;
  uVar1 = FUN_0046d750(0,0);
  in_ECX[0x18] = uVar1;
  ExceptionList = local_10;
  return;
}


/* FUN_00467a70 @ 00467a70  kind=gamemisc  attributed-by=caller-vote  size=48 */

void FUN_00467a70(void)

{
  undefined4 *puVar1;
  void *pvVar2;
  int in_ECX;
  
  puVar1 = *(undefined4 **)(in_ECX + 8);
  pvVar2 = (void *)*puVar1;
  *puVar1 = puVar1;
  *(int *)(*(int *)(in_ECX + 8) + 4) = *(int *)(in_ECX + 8);
  *(undefined4 *)(in_ECX + 0xc) = 0;
  if (pvVar2 != *(void **)(in_ECX + 8)) {
                    /* WARNING: Subroutine does not return */
    operator_delete(pvVar2);
  }
                    /* WARNING: Subroutine does not return */
  operator_delete(*(void **)(in_ECX + 8));
}


/* FUN_00467b60 @ 00467b60  kind=gamemisc  attributed-by=caller-vote  size=67 */

void FUN_00467b60(void)

{
  undefined4 *puVar1;
  void *pvVar2;
  int in_ECX;
  
  puVar1 = *(undefined4 **)(in_ECX + 0x51a0);
  pvVar2 = (void *)*puVar1;
  *puVar1 = puVar1;
  *(int *)(*(int *)(in_ECX + 0x51a0) + 4) = *(int *)(in_ECX + 0x51a0);
  *(undefined4 *)(in_ECX + 0x51a4) = 0;
  if (pvVar2 != *(void **)(in_ECX + 0x51a0)) {
                    /* WARNING: Subroutine does not return */
    operator_delete(pvVar2);
  }
                    /* WARNING: Subroutine does not return */
  operator_delete(*(void **)(in_ECX + 0x51a0));
}


/* FUN_00467c40 @ 00467c40  kind=gamemisc  attributed-by=caller-vote  size=39 */

void FUN_00467c40(void)

{
  int in_ECX;
  
  if (7 < *(uint *)(in_ECX + 0x4c)) {
                    /* WARNING: Subroutine does not return */
    operator_delete(*(void **)(in_ECX + 0x38));
  }
  *(undefined4 *)(in_ECX + 0x4c) = 7;
  *(undefined4 *)(in_ECX + 0x48) = 0;
  *(undefined2 *)(in_ECX + 0x38) = 0;
  return;
}


/* FUN_00467f10 @ 00467f10  kind=gamemisc  attributed-by=caller-vote  size=32 */

int FUN_00467f10(undefined4 *param_1)

{
  int in_ECX;
  
  *(undefined4 *)(*(int *)(in_ECX + 0x4c) + *(int *)(in_ECX + 0x20) * 4) = *param_1;
  return *(int *)(in_ECX + 0x4c) + *(int *)(in_ECX + 0x20) * 4;
}


/* FUN_00467f30 @ 00467f30  kind=gamemisc  attributed-by=caller-vote  size=36 */

void FUN_00467f30(int param_1)

{
  FUN_00661680(param_1);
  FUN_00468430(param_1 + 0x4c);
  return;
}


/* FUN_00467f60 @ 00467f60  kind=gamemisc  attributed-by=caller-vote  size=52 */

int FUN_00467f60(int param_1)

{
  int in_ECX;
  
  if (*(int *)(in_ECX + 0x4c) + *(int *)(in_ECX + 0x20) * 0x18 != param_1) {
    FUN_0040f680(param_1,0,0xffffffff);
  }
  return *(int *)(in_ECX + 0x4c) + *(int *)(in_ECX + 0x20) * 0x18;
}


/* FUN_00467fa0 @ 00467fa0  kind=gamemisc  attributed-by=caller-vote  size=60 */

void FUN_00467fa0(undefined4 *param_1)

{
  undefined4 *in_ECX;
  
  if (in_ECX != param_1) {
    if (7 < (uint)in_ECX[5]) {
                    /* WARNING: Subroutine does not return */
      operator_delete((void *)*in_ECX);
    }
    in_ECX[5] = 7;
    in_ECX[4] = 0;
    *(undefined2 *)in_ECX = 0;
    FUN_0040f110(param_1);
  }
  return;
}


/* FUN_00467fe0 @ 00467fe0  kind=gamemisc  attributed-by=caller-vote  size=30 */

void FUN_00467fe0(int param_1)

{
  int in_ECX;
  
  if (in_ECX != param_1) {
    FUN_0040f680(param_1,0,0xffffffff);
  }
  return;
}


/* FUN_00468050 @ 00468050  kind=gamemisc  attributed-by=caller-vote  size=365 */

void FUN_00468050(int *param_1)

{
  int *piVar1;
  uint uVar2;
  uint uVar3;
  int *piVar4;
  char cVar5;
  int iVar6;
  int *in_ECX;
  int iVar7;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  piVar4 = param_1;
  local_8 = 0xffffffff;
  puStack_c = &LAB_006e5390;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  if (in_ECX != param_1) {
    if (*param_1 == param_1[1]) {
      iVar6 = *in_ECX;
    }
    else {
      uVar2 = (param_1[1] - *param_1) / 0x11c;
      uVar3 = (in_ECX[1] - *in_ECX) / 0x11c;
      if (uVar3 < uVar2) {
        if ((uint)((in_ECX[2] - *in_ECX) / 0x11c) < uVar2) {
          if ((void *)*in_ECX != (void *)0x0) {
            param_1 = (int *)uVar2;
                    /* WARNING: Subroutine does not return */
            operator_delete((void *)*in_ECX);
          }
          piVar1 = param_1 + 1;
          iVar6 = *param_1;
          param_1 = (int *)uVar2;
          cVar5 = FUN_0044b5f0((*piVar1 - iVar6) / 0x11c);
          if (cVar5 == '\0') {
            ExceptionList = local_10;
            return;
          }
          local_8 = 0;
          iVar6 = FUN_004569f0(*piVar4,piVar4[1],*in_ECX,(int)&param_1 + 3,param_1);
        }
        else {
          iVar6 = *param_1;
          iVar7 = uVar3 * 0x11c + iVar6;
          param_1 = (int *)uVar2;
          FUN_00452470(iVar6,iVar7,*in_ECX,uVar2);
          iVar6 = FUN_004569f0(iVar7,piVar4[1],in_ECX[1],(int)&param_1 + 3,param_1);
        }
      }
      else {
        iVar6 = *param_1;
        piVar1 = param_1 + 1;
        param_1 = (int *)uVar2;
        FUN_00452470(iVar6,*piVar1,*in_ECX,uVar2);
        iVar6 = ((piVar4[1] - *piVar4) / 0x11c) * 0x11c + *in_ECX;
      }
    }
    in_ECX[1] = iVar6;
  }
  ExceptionList = local_10;
  return;
}


/* FUN_004681e0 @ 004681e0  kind=gamemisc  attributed-by=caller-vote  size=283 */

void FUN_004681e0(int *param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  char cVar5;
  uint uVar6;
  undefined4 uVar7;
  int iVar8;
  int *in_ECX;
  uint uVar9;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  piVar4 = param_1;
  local_8 = 0xffffffff;
  puStack_c = &LAB_006e53b0;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  if (in_ECX != param_1) {
    iVar8 = *param_1;
    if (iVar8 == param_1[1]) {
      FUN_0046fa50();
    }
    else {
      iVar3 = *in_ECX;
      uVar6 = in_ECX[1] - iVar3 >> 3;
      uVar9 = param_1[1] - iVar8 >> 3;
      if (uVar6 < uVar9) {
        if ((uint)(in_ECX[2] - iVar3 >> 3) < uVar9) {
          if (iVar3 != 0) {
            param_1 = (int *)uVar6;
            FUN_0046dac0(iVar3,in_ECX[1]);
                    /* WARNING: Subroutine does not return */
            operator_delete((void *)*in_ECX);
          }
          piVar1 = param_1 + 1;
          iVar8 = *param_1;
          param_1 = (int *)uVar6;
          cVar5 = FUN_0046d440(*piVar1 - iVar8 >> 3);
          if (cVar5 == '\0') {
            ExceptionList = local_10;
            return;
          }
          local_8 = 0;
          iVar8 = FUN_00456a40(*piVar4,piVar4[1],*in_ECX,(int)&param_1 + 3,param_1);
        }
        else {
          iVar2 = iVar8 + uVar6 * 8;
          param_1 = (int *)uVar6;
          FUN_004524c0(iVar8,iVar2,iVar3);
          iVar8 = FUN_00456a40(iVar2,piVar4[1],in_ECX[1],(int)&param_1 + 3,param_1);
        }
      }
      else {
        piVar1 = param_1 + 1;
        param_1 = (int *)uVar6;
        uVar7 = FUN_004524c0(iVar8,*piVar1,iVar3);
        FUN_0046dac0(uVar7,in_ECX[1]);
        iVar8 = *in_ECX + (piVar4[1] - *piVar4 >> 3) * 8;
      }
      in_ECX[1] = iVar8;
    }
  }
  ExceptionList = local_10;
  return;
}


/* FUN_00468310 @ 00468310  kind=gamemisc  attributed-by=caller-vote  size=262 */

void FUN_00468310(int *param_1)

{
  int *piVar1;
  void *pvVar2;
  int iVar3;
  int *piVar4;
  char cVar5;
  uint uVar6;
  int iVar7;
  int *in_ECX;
  uint uVar8;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  piVar4 = param_1;
  local_8 = 0xffffffff;
  puStack_c = &LAB_006e53d0;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  if (in_ECX != param_1) {
    iVar7 = *param_1;
    if (iVar7 == param_1[1]) {
      iVar7 = *in_ECX;
    }
    else {
      pvVar2 = (void *)*in_ECX;
      uVar6 = in_ECX[1] - (int)pvVar2 >> 3;
      uVar8 = param_1[1] - iVar7 >> 3;
      if (uVar6 < uVar8) {
        if ((uint)(in_ECX[2] - (int)pvVar2 >> 3) < uVar8) {
          if (pvVar2 != (void *)0x0) {
            param_1 = (int *)uVar6;
                    /* WARNING: Subroutine does not return */
            operator_delete(pvVar2);
          }
          piVar1 = param_1 + 1;
          iVar7 = *param_1;
          param_1 = (int *)uVar6;
          cVar5 = FUN_0046d440(*piVar1 - iVar7 >> 3);
          if (cVar5 == '\0') {
            ExceptionList = local_10;
            return;
          }
          local_8 = 0;
          iVar7 = FUN_00456f70(*piVar4,piVar4[1],*in_ECX,(int)&param_1 + 3,param_1);
        }
        else {
          iVar7 = iVar7 + uVar6 * 8;
          iVar3 = *param_1;
          param_1 = (int *)uVar6;
          FUN_00639c50(iVar3,iVar7,pvVar2);
          iVar7 = FUN_00456f70(iVar7,piVar4[1],in_ECX[1],(int)&param_1 + 3,param_1);
        }
      }
      else {
        piVar1 = param_1 + 1;
        param_1 = (int *)uVar6;
        FUN_00639c50(iVar7,*piVar1,pvVar2);
        iVar7 = *in_ECX + (piVar4[1] - *piVar4 >> 3) * 8;
      }
    }
    in_ECX[1] = iVar7;
  }
  ExceptionList = local_10;
  return;
}


/* FUN_004685e0 @ 004685e0  kind=gamemisc  attributed-by=caller-vote  size=54 */

void FUN_004685e0(int param_1)

{
  int in_ECX;
  
  FUN_0042c5e0(param_1);
  *(undefined4 *)(in_ECX + 0x118) = *(undefined4 *)(param_1 + 0x118);
  FUN_00468050(param_1 + 0x11c);
  return;
}


/* FUN_00468620 @ 00468620  kind=gamemisc  attributed-by=caller-vote  size=78 */

void FUN_00468620(undefined4 *param_1)

{
  undefined4 *in_ECX;
  
  *in_ECX = *param_1;
  in_ECX[1] = param_1[1];
  in_ECX[2] = param_1[2];
  in_ECX[3] = param_1[3];
  in_ECX[4] = param_1[4];
  *(undefined1 *)(in_ECX + 5) = *(undefined1 *)(param_1 + 5);
  *(undefined1 *)((int)in_ECX + 0x15) = *(undefined1 *)((int)param_1 + 0x15);
  in_ECX[6] = param_1[6];
  in_ECX[7] = param_1[7];
  in_ECX[8] = param_1[8];
  in_ECX[9] = param_1[9];
  return;
}


/* FUN_00468670 @ 00468670  kind=gamemisc  attributed-by=caller-vote  size=106 */

void FUN_00468670(undefined4 *param_1)

{
  undefined4 *in_ECX;
  
  *in_ECX = *param_1;
  in_ECX[2] = param_1[2];
  in_ECX[3] = param_1[3];
  in_ECX[4] = param_1[4];
  in_ECX[5] = param_1[5];
  in_ECX[6] = param_1[6];
  in_ECX[7] = param_1[7];
  in_ECX[8] = param_1[8];
  in_ECX[9] = param_1[9];
  in_ECX[10] = param_1[10];
  in_ECX[0xb] = param_1[0xb];
  *(undefined1 *)(in_ECX + 0xc) = *(undefined1 *)(param_1 + 0xc);
  in_ECX[0xd] = param_1[0xd];
  in_ECX[0xe] = param_1[0xe];
  in_ECX[0x10] = param_1[0x10];
  in_ECX[0x11] = param_1[0x11];
  return;
}


/* FUN_004686e0 @ 004686e0  kind=gamemisc  attributed-by=caller-vote  size=171 */

void FUN_004686e0(undefined4 *param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 *in_ECX;
  
  puVar3 = param_1;
  *in_ECX = *param_1;
  *(undefined1 *)(in_ECX + 1) = *(undefined1 *)(param_1 + 1);
  in_ECX[2] = param_1[2];
  in_ECX[3] = param_1[3];
  *(undefined1 *)(in_ECX + 4) = *(undefined1 *)(param_1 + 4);
  *(undefined1 *)((int)in_ECX + 0x11) = *(undefined1 *)((int)param_1 + 0x11);
  *(undefined1 *)((int)in_ECX + 0x12) = *(undefined1 *)((int)param_1 + 0x12);
  if (in_ECX + 5 != param_1 + 5) {
    puVar2 = (undefined4 *)param_1[5];
    FUN_004571d0(*puVar2,puVar2);
  }
  piVar1 = in_ECX + 7;
  if (piVar1 != param_1 + 7) {
    FUN_0043c920(*(undefined4 *)(*piVar1 + 4));
    param_1 = (undefined4 *)((uint)param_1 & 0xffffff00);
    *(int *)(*piVar1 + 4) = *piVar1;
    *(int *)*piVar1 = *piVar1;
    *(int *)(*piVar1 + 8) = *piVar1;
    in_ECX[8] = 0;
    FUN_004523f0(puVar3 + 7,param_1);
  }
  in_ECX[9] = puVar3[9];
  if (in_ECX + 10 != puVar3 + 10) {
    FUN_0040c0a0(puVar3 + 10,0,0xffffffff);
  }
  return;
}


/* FUN_00468790 @ 00468790  kind=gamemisc  attributed-by=caller-vote  size=174 */

void FUN_00468790(undefined4 *param_1)

{
  undefined4 *in_ECX;
  
  *in_ECX = *param_1;
  in_ECX[1] = param_1[1];
  *(undefined1 *)(in_ECX + 2) = *(undefined1 *)(param_1 + 2);
  in_ECX[4] = param_1[4];
  in_ECX[5] = param_1[5];
  in_ECX[6] = param_1[6];
  in_ECX[7] = param_1[7];
  in_ECX[8] = param_1[8];
  in_ECX[9] = param_1[9];
  in_ECX[10] = param_1[10];
  in_ECX[0xb] = param_1[0xb];
  in_ECX[0xc] = param_1[0xc];
  in_ECX[0xd] = param_1[0xd];
  in_ECX[0xe] = param_1[0xe];
  in_ECX[0xf] = param_1[0xf];
  in_ECX[0x10] = param_1[0x10];
  in_ECX[0x11] = param_1[0x11];
  in_ECX[0x12] = param_1[0x12];
  in_ECX[0x13] = param_1[0x13];
  in_ECX[0x14] = param_1[0x14];
  in_ECX[0x16] = param_1[0x16];
  in_ECX[0x17] = param_1[0x17];
  in_ECX[0x18] = param_1[0x18];
  in_ECX[0x19] = param_1[0x19];
  in_ECX[0x1a] = param_1[0x1a];
  in_ECX[0x1b] = param_1[0x1b];
  *(undefined1 *)(in_ECX + 0x1c) = *(undefined1 *)(param_1 + 0x1c);
  return;
}


/* FUN_00468870 @ 00468870  kind=gamemisc  attributed-by=caller-vote  size=43 */

int FUN_00468870(int param_1)

{
  uint3 uVar1;
  int *in_ECX;
  int iVar2;
  
  iVar2 = 0;
  param_1 = param_1 - (int)in_ECX;
  do {
    uVar1 = (uint3)((uint)*in_ECX >> 8);
    if (*in_ECX != *(int *)(param_1 + (int)in_ECX)) {
      return (uint)uVar1 << 8;
    }
    iVar2 = iVar2 + 1;
    in_ECX = in_ECX + 1;
  } while (iVar2 < 3);
  return CONCAT31(uVar1,1);
}


/* FUN_004688a0 @ 004688a0  kind=gamemisc  attributed-by=caller-vote  size=43 */

int FUN_004688a0(int param_1)

{
  uint3 uVar1;
  int *in_ECX;
  int iVar2;
  
  iVar2 = 0;
  param_1 = param_1 - (int)in_ECX;
  do {
    uVar1 = (uint3)((uint)*in_ECX >> 8);
    if (*in_ECX != *(int *)(param_1 + (int)in_ECX)) {
      return CONCAT31(uVar1,1);
    }
    iVar2 = iVar2 + 1;
    in_ECX = in_ECX + 1;
  } while (iVar2 < 2);
  return (uint)uVar1 << 8;
}


/* FUN_004688f0 @ 004688f0  kind=gamemisc  attributed-by=caller-vote  size=24 */

bool FUN_004688f0(undefined4 param_1)

{
  char cVar1;
  
  cVar1 = FUN_0042f4a0(param_1);
  return cVar1 == '\0';
}


/* FUN_00468cf0 @ 00468cf0  kind=gamemisc  attributed-by=caller-vote  size=54 */

undefined8 * FUN_00468cf0(undefined8 *param_1)

{
  longlong *in_ECX;
  undefined8 uVar1;
  
  uVar1 = FUN_0068d946((float)*in_ECX);
  *param_1 = uVar1;
  return param_1;
}


/* FUN_00468d50 @ 00468d50  kind=gamemisc  attributed-by=caller-vote  size=19 */

void FUN_00468d50(int *param_1)

{
  int iVar1;
  int *in_ECX;
  
  iVar1 = *in_ECX;
  *param_1 = iVar1;
  *in_ECX = iVar1 + 2;
  return;
}


/* FUN_00468db0 @ 00468db0  kind=gamemisc  attributed-by=caller-vote  size=19 */

void FUN_00468db0(int *param_1)

{
  int iVar1;
  int *in_ECX;
  
  iVar1 = *in_ECX;
  *param_1 = iVar1;
  *in_ECX = iVar1 + 0xc;
  return;
}


/* FUN_00468e20 @ 00468e20  kind=gamemisc  attributed-by=caller-vote  size=76 */

float * FUN_00468e20(float *param_1)

{
  float fVar1;
  float *in_ECX;
  
  *param_1 = *in_ECX;
  param_1[1] = in_ECX[1];
  fVar1 = in_ECX[2];
  *param_1 = *param_1 * -1.0;
  param_1[2] = fVar1;
  param_1[1] = param_1[1] * -1.0;
  param_1[2] = param_1[2] * -1.0;
  return param_1;
}


/* FUN_00468eb0 @ 00468eb0  kind=gamemisc  attributed-by=caller-vote  size=36 */

void FUN_00468eb0(int *param_1,uint param_2,uint *param_3)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = *param_3;
  uVar2 = param_3[1];
  *param_1 = param_2 * 0x10000 - *param_3;
  param_1[1] = ((((int)param_2 >> 0x1f) << 0x10 | param_2 >> 0x10) - uVar2) -
               (uint)(param_2 * 0x10000 < uVar1);
  return;
}


/* FUN_00468ee0 @ 00468ee0  kind=gamemisc  attributed-by=caller-vote  size=51 */

void FUN_00468ee0(int *param_1,undefined4 param_2,uint *param_3)

{
  uint uVar1;
  uint uVar2;
  undefined8 uVar3;
  
  uVar3 = FUN_0068d946();
  uVar1 = *param_3;
  uVar2 = param_3[1];
  *param_1 = (uint)uVar3 - *param_3;
  param_1[1] = ((int)((ulonglong)uVar3 >> 0x20) - uVar2) - (uint)((uint)uVar3 < uVar1);
  return;
}


/* FUN_00468f50 @ 00468f50  kind=gamemisc  attributed-by=caller-vote  size=70 */

void FUN_00468f50(float *param_1,float *param_2)

{
  float *in_ECX;
  
  *param_1 = *param_2 + *in_ECX;
  param_1[1] = param_2[1] + in_ECX[1];
  param_1[2] = param_2[2] + in_ECX[2];
  param_1[3] = param_2[3] + in_ECX[3];
  return;
}


/* FUN_00469020 @ 00469020  kind=gamemisc  attributed-by=caller-vote  size=55 */

void FUN_00469020(float *param_1,float param_2)

{
  float *in_ECX;
  
  *param_1 = *in_ECX / param_2;
  param_1[1] = in_ECX[1] / param_2;
  param_1[2] = in_ECX[2] / param_2;
  return;
}


/* FUN_0046d1c0 @ 0046d1c0  kind=gamemisc  attributed-by=caller-vote  size=39 */

undefined4 FUN_0046d1c0(int *param_1,int *param_2)

{
  if ((*param_2 <= *param_1) && ((*param_2 < *param_1 || (param_2[1] <= param_1[1])))) {
    return 0;
  }
  return 1;
}


/* FUN_0046d1f0 @ 0046d1f0  kind=gamemisc  attributed-by=caller-vote  size=43 */

bool FUN_0046d1f0(int param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  int iVar2;
  
  puVar1 = param_2 + 4;
  if (7 < (uint)param_2[5]) {
    param_2 = (undefined4 *)*param_2;
  }
  iVar2 = FUN_00428db0(0,*(undefined4 *)(param_1 + 0x10),param_2,*puVar1);
  return iVar2 < 0;
}


/* FUN_0046d220 @ 0046d220  kind=gamemisc  attributed-by=caller-vote  size=54 */

void FUN_0046d220(float *param_1)

{
  float *in_ECX;
  
  *in_ECX = *param_1 * *in_ECX;
  in_ECX[1] = param_1[1] * in_ECX[1];
  in_ECX[2] = param_1[2] * in_ECX[2];
  return;
}


/* FUN_0046d370 @ 0046d370  kind=gamemisc  attributed-by=caller-vote  size=34 */

void FUN_0046d370(void)

{
  int in_ECX;
  undefined1 local_8 [4];
  
  FUN_0067eb10(local_8,**(undefined4 **)(in_ECX + 0x78),*(undefined4 **)(in_ECX + 0x78));
                    /* WARNING: Subroutine does not return */
  operator_delete(*(void **)(in_ECX + 0x78));
}


/* FUN_0046d440 @ 0046d440  kind=gamemisc  attributed-by=caller-vote  size=103 */

undefined4 FUN_0046d440(uint param_1)

{
  void *pvVar1;
  undefined4 *in_ECX;
  
  *in_ECX = 0;
  in_ECX[1] = 0;
  in_ECX[2] = 0;
  if (param_1 == 0) {
    return 0;
  }
  if (0x1fffffff < param_1) {
                    /* WARNING: Subroutine does not return */
    std::_Xlength_error("vector<T> too long");
  }
  pvVar1 = operator_new(param_1 * 8);
  if (pvVar1 != (void *)0x0) {
    *in_ECX = pvVar1;
    in_ECX[1] = pvVar1;
    pvVar1 = (void *)((int)pvVar1 + param_1 * 8);
    in_ECX[2] = pvVar1;
    return CONCAT31((int3)((uint)pvVar1 >> 8),1);
  }
                    /* WARNING: Subroutine does not return */
  std::_Xbad_alloc();
}


/* FUN_0046d610 @ 0046d610  kind=gamemisc  attributed-by=caller-vote  size=54 */

void FUN_0046d610(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  
  puVar1 = operator_new(0x28);
  if (puVar1 != (void *)0x0) {
    if (param_1 == (void *)0x0) {
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


/* FUN_0046d690 @ 0046d690  kind=gamemisc  attributed-by=caller-vote  size=57 */

void FUN_0046d690(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  
  puVar1 = operator_new(0x124);
  if (puVar1 != (void *)0x0) {
    if (param_1 == (void *)0x0) {
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


/* FUN_0046d6d0 @ 0046d6d0  kind=gamemisc  attributed-by=caller-vote  size=57 */

void FUN_0046d6d0(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  
  puVar1 = operator_new(0x128);
  if (puVar1 != (void *)0x0) {
    if (param_1 == (void *)0x0) {
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


/* FUN_0046d710 @ 0046d710  kind=gamemisc  attributed-by=caller-vote  size=54 */

void FUN_0046d710(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  
  puVar1 = operator_new(0x38);
  if (puVar1 != (void *)0x0) {
    if (param_1 == (void *)0x0) {
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


/* FUN_0046d750 @ 0046d750  kind=gamemisc  attributed-by=caller-vote  size=54 */

void FUN_0046d750(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  
  puVar1 = operator_new(0x40);
  if (puVar1 != (void *)0x0) {
    if (param_1 == (void *)0x0) {
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


/* FUN_0046d790 @ 0046d790  kind=gamemisc  attributed-by=caller-vote  size=54 */

void FUN_0046d790(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  
  puVar1 = operator_new(0x60);
  if (puVar1 != (void *)0x0) {
    if (param_1 == (void *)0x0) {
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


/* FUN_0046d7d0 @ 0046d7d0  kind=gamemisc  attributed-by=caller-vote  size=57 */

void FUN_0046d7d0(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  
  puVar1 = operator_new(0xc0);
  if (puVar1 != (void *)0x0) {
    if (param_1 == (void *)0x0) {
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


/* FUN_0046d810 @ 0046d810  kind=gamemisc  attributed-by=caller-vote  size=54 */

void FUN_0046d810(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  
  puVar1 = operator_new(0x50);
  if (puVar1 != (void *)0x0) {
    if (param_1 == (void *)0x0) {
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


/* FUN_0046d850 @ 0046d850  kind=gamemisc  attributed-by=caller-vote  size=54 */

void FUN_0046d850(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  
  puVar1 = operator_new(0x30);
  if (puVar1 != (void *)0x0) {
    if (param_1 == (void *)0x0) {
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


/* FUN_0046d890 @ 0046d890  kind=gamemisc  attributed-by=caller-vote  size=54 */

void FUN_0046d890(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  
  puVar1 = operator_new(0x68);
  if (puVar1 != (void *)0x0) {
    if (param_1 == (void *)0x0) {
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


/* FUN_0046d8d0 @ 0046d8d0  kind=gamemisc  attributed-by=caller-vote  size=57 */

void FUN_0046d8d0(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  
  puVar1 = operator_new(0x150);
  if (puVar1 != (void *)0x0) {
    if (param_1 == (void *)0x0) {
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


/* FUN_0046d990 @ 0046d990  kind=gamemisc  attributed-by=caller-vote  size=55 */

undefined4 * FUN_0046d990(void)

{
  undefined4 *puVar1;
  undefined4 *in_ECX;
  
  puVar1 = operator_new(0x18);
  if (puVar1 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    std::_Xbad_alloc();
  }
  *puVar1 = *in_ECX;
  if (puVar1 + 1 != (undefined4 *)0x0) {
    puVar1[1] = *in_ECX;
  }
  if (puVar1 + 2 != (undefined4 *)0x0) {
    puVar1[2] = *in_ECX;
  }
  return puVar1;
}


/* FUN_0046d9d0 @ 0046d9d0  kind=gamemisc  attributed-by=caller-vote  size=36 */

int FUN_0046d9d0(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  
  iVar1 = FUN_0046d7d0(param_1,param_2);
  if (iVar1 != -8) {
    FUN_00465de0();
  }
  return iVar1;
}


/* FUN_0046da00 @ 0046da00  kind=gamemisc  attributed-by=caller-vote  size=69 */

void FUN_0046da00(int param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  char cVar3;
  int *in_ECX;
  int iVar4;
  
  cVar3 = FUN_0046d440(param_1);
  if (cVar3 != '\0') {
    puVar2 = (undefined4 *)*in_ECX;
    puVar1 = puVar2;
    for (iVar4 = param_1; iVar4 != 0; iVar4 = iVar4 + -1) {
      *puVar1 = *param_2;
      puVar1[1] = param_2[1];
      puVar1 = puVar1 + 2;
    }
    in_ECX[1] = (int)(puVar2 + param_1 * 2);
  }
  return;
}


/* FUN_0046dac0 @ 0046dac0  kind=gamemisc  attributed-by=caller-vote  size=36 */

void FUN_0046dac0(undefined4 *param_1,undefined4 *param_2)

{
  if (param_1 != param_2) {
    FUN_0046f990();
                    /* WARNING: Subroutine does not return */
    operator_delete((void *)*param_1);
  }
  return;
}


/* FUN_0046dbc0 @ 0046dbc0  kind=gamemisc  attributed-by=caller-vote  size=112 */

void FUN_0046dbc0(void *param_1)

{
  if (*(char *)((int)param_1 + 0xd) != '\0') {
    return;
  }
  FUN_0046dbc0(*(undefined4 *)((int)param_1 + 8));
  if (7 < *(uint *)((int)param_1 + 0x3c)) {
                    /* WARNING: Subroutine does not return */
    operator_delete(*(void **)((int)param_1 + 0x28));
  }
  *(undefined4 *)((int)param_1 + 0x3c) = 7;
  *(undefined4 *)((int)param_1 + 0x38) = 0;
  *(undefined2 *)((int)param_1 + 0x28) = 0;
  if (7 < *(uint *)((int)param_1 + 0x24)) {
                    /* WARNING: Subroutine does not return */
    operator_delete(*(void **)((int)param_1 + 0x10));
  }
  *(undefined4 *)((int)param_1 + 0x24) = 7;
  *(undefined4 *)((int)param_1 + 0x20) = 0;
  *(undefined2 *)((int)param_1 + 0x10) = 0;
                    /* WARNING: Subroutine does not return */
  operator_delete(param_1);
}


/* FUN_0046dd40 @ 0046dd40  kind=gamemisc  attributed-by=caller-vote  size=75 */

uint FUN_0046dd40(uint param_1)

{
  int *in_ECX;
  uint uVar1;
  
  uVar1 = (in_ECX[2] - *in_ECX) / 0x128;
  if (0xdd67c8 - (uVar1 >> 1) < uVar1) {
    uVar1 = 0;
    if (param_1 != 0) {
      uVar1 = param_1;
    }
    return uVar1;
  }
  uVar1 = uVar1 + (uVar1 >> 1);
  if (uVar1 < param_1) {
    uVar1 = param_1;
  }
  return uVar1;
}


/* FUN_0046e710 @ 0046e710  kind=gamemisc  attributed-by=caller-vote  size=111 */

int FUN_0046e710(uint param_1)

{
  undefined4 uVar1;
  int iVar2;
  int *in_ECX;
  int iVar3;
  
  iVar3 = in_ECX[2] - in_ECX[1];
  iVar2 = iVar3 * -0x22983759;
  if ((uint)(iVar3 / 0x128) < param_1) {
    iVar2 = (in_ECX[1] - *in_ECX) / 0x128;
    if (0xdd67c8U - iVar2 < param_1) {
                    /* WARNING: Subroutine does not return */
      std::_Xlength_error("vector<T> too long");
    }
    uVar1 = FUN_0046dd40(iVar2 + param_1);
    iVar2 = FUN_0046e150(uVar1);
  }
  return iVar2;
}


/* FUN_0046e800 @ 0046e800  kind=gamemisc  attributed-by=caller-vote  size=115 */

void FUN_0046e800(uint param_1)

{
  int *in_ECX;
  uint uVar1;
  
  if (param_1 <= (uint)(in_ECX[2] - in_ECX[1] >> 3)) {
    return;
  }
  if (0x1fffffffU - (in_ECX[1] - *in_ECX >> 3) < param_1) {
                    /* WARNING: Subroutine does not return */
    std::_Xlength_error("vector<T> too long");
  }
  uVar1 = in_ECX[2] - *in_ECX >> 3;
  if (0x1fffffff - (uVar1 >> 1) < uVar1) {
    FUN_0046e330();
    return;
  }
  FUN_0046e330();
  return;
}


/* FUN_0046eb90 @ 0046eb90  kind=gamemisc  attributed-by=caller-vote  size=65 */

void FUN_0046eb90(undefined4 param_1)

{
  int in_ECX;
  int *piVar1;
  
  if ((char)param_1 == '\0') {
    *(uint *)(in_ECX + 200) = *(uint *)(in_ECX + 200) | 2;
  }
  else {
    *(uint *)(in_ECX + 200) = *(uint *)(in_ECX + 200) & 0xfffffffd;
  }
  piVar1 = (int *)**(int **)(in_ECX + 0x2c);
  if (piVar1 != *(int **)(in_ECX + 0x2c)) {
    do {
      FUN_0046eb90(param_1);
      piVar1 = (int *)*piVar1;
    } while (piVar1 != (int *)*(int *)(in_ECX + 0x2c));
  }
  return;
}


/* FUN_0046f430 @ 0046f430  kind=gamemisc  attributed-by=caller-vote  size=7 */

int FUN_0046f430(void)

{
  int in_ECX;
  
  return *(int *)(in_ECX + 4) + -4;
}


/* FUN_0046f620 @ 0046f620  kind=gamemisc  attributed-by=caller-vote  size=528 */

void FUN_0046f620(undefined4 param_1,int param_2)

{
  char cVar1;
  int *piVar2;
  int *piVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  int iVar6;
  int in_ECX;
  int iVar7;
  int *piVar8;
  int *local_34;
  undefined1 local_30 [4];
  void *local_2c;
  uint local_18;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  iVar6 = param_2;
  local_8 = 0xffffffff;
  puStack_c = &LAB_006e5740;
  local_10 = ExceptionList;
  local_14 = DAT_0076aa78 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  FUN_00601cb0(local_14);
  EnterCriticalSection((LPCRITICAL_SECTION)(in_ECX + 0x8005d0));
  puVar4 = (undefined4 *)FUN_00457e20(local_30,&param_1,iVar6);
  iVar7 = *(int *)(*(int *)(in_ECX + 0x8006d0) + 0x1d28);
  puVar5 = (undefined4 *)(iVar7 + 0x28);
  *(undefined4 *)(iVar7 + 0x24) = *puVar4;
  if (puVar5 != puVar4 + 1) {
    if (0xf < *(uint *)(iVar7 + 0x3c)) {
                    /* WARNING: Subroutine does not return */
      operator_delete((void *)*puVar5);
    }
    *(undefined4 *)(iVar7 + 0x3c) = 0xf;
    *(undefined4 *)(iVar7 + 0x38) = 0;
    *(undefined1 *)puVar5 = 0;
    FUN_00405060(puVar4 + 1);
  }
  local_8 = 0xffffffff;
  if (0xf < local_18) {
                    /* WARNING: Subroutine does not return */
    operator_delete(local_2c);
  }
  *(undefined4 *)(in_ECX + 0x800a50) = param_1;
  if (in_ECX + 0x800a54 != iVar6) {
    FUN_0040c0a0(iVar6,0,0xffffffff);
  }
  puVar5 = (undefined4 *)FUN_0046d550(0,0);
  piVar8 = (int *)**(int **)(in_ECX + 0x2e8);
  local_8 = 1;
  local_34 = piVar8;
  if (piVar8 != *(int **)(in_ECX + 0x2e8)) {
    iVar7 = 0;
    do {
      if (piVar8[6] != *(int *)(in_ECX + 0x8006d0)) {
        iVar6 = FUN_00583cb0(puVar5,puVar5[1],&local_34);
        if (iVar7 == 0x15555554) {
                    /* WARNING: Subroutine does not return */
          std::_Xlength_error("list<T> too long");
        }
        puVar5[1] = iVar6;
        iVar7 = iVar7 + 1;
        **(int **)(iVar6 + 4) = iVar6;
      }
      if (*(char *)((int)piVar8 + 0xd) == '\0') {
        piVar2 = (int *)piVar8[2];
        if (*(char *)((int)piVar2 + 0xd) == '\0') {
          cVar1 = *(char *)(*piVar2 + 0xd);
          piVar8 = piVar2;
          piVar2 = (int *)*piVar2;
          while (local_34 = piVar8, cVar1 == '\0') {
            cVar1 = *(char *)(*piVar2 + 0xd);
            piVar8 = piVar2;
            piVar2 = (int *)*piVar2;
          }
        }
        else {
          cVar1 = *(char *)(piVar8[1] + 0xd);
          piVar3 = (int *)piVar8[1];
          piVar2 = piVar8;
          while ((piVar8 = piVar3, local_34 = piVar8, cVar1 == '\0' && (piVar2 == (int *)piVar8[2]))
                ) {
            cVar1 = *(char *)(piVar8[1] + 0xd);
            piVar3 = (int *)piVar8[1];
            piVar2 = piVar8;
          }
        }
      }
    } while (piVar8 != *(int **)(in_ECX + 0x2e8));
  }
  for (puVar4 = (undefined4 *)*puVar5; puVar4 != puVar5; puVar4 = (undefined4 *)*puVar4) {
    if (*(undefined4 **)(puVar4[2] + 0x18) != (undefined4 *)0x0) {
      (**(code **)**(undefined4 **)(puVar4[2] + 0x18))(1);
    }
    FUN_0043ede0(&local_34,puVar4[2]);
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)(in_ECX + 0x8005d0));
  FUN_00601e90();
  puVar4 = (undefined4 *)*puVar5;
  *puVar5 = puVar5;
  puVar5[1] = puVar5;
  if (puVar4 == puVar5) {
                    /* WARNING: Subroutine does not return */
    operator_delete(puVar5);
  }
                    /* WARNING: Subroutine does not return */
  operator_delete(puVar4);
}


/* FUN_0046f870 @ 0046f870  kind=gamemisc  attributed-by=caller-vote  size=42 */

void FUN_0046f870(void)

{
  undefined4 *puVar1;
  void *pvVar2;
  int *in_ECX;
  
  puVar1 = (undefined4 *)*in_ECX;
  pvVar2 = (void *)*puVar1;
  *puVar1 = puVar1;
  *(int *)(*in_ECX + 4) = *in_ECX;
  in_ECX[1] = 0;
  if (pvVar2 != (void *)*in_ECX) {
                    /* WARNING: Subroutine does not return */
    operator_delete(pvVar2);
  }
  return;
}


/* FUN_0046f910 @ 0046f910  kind=gamemisc  attributed-by=caller-vote  size=82 */

void FUN_0046f910(void)

{
  int *piVar1;
  int iVar2;
  undefined4 *puVar3;
  void *pvVar4;
  int *in_ECX;
  
  piVar1 = (int *)*in_ECX;
  iVar2 = *piVar1;
  *piVar1 = (int)piVar1;
  *(int *)(*in_ECX + 4) = *in_ECX;
  in_ECX[1] = 0;
  if (iVar2 == *in_ECX) {
    return;
  }
  puVar3 = *(undefined4 **)(iVar2 + 0x10);
  pvVar4 = (void *)*puVar3;
  *puVar3 = puVar3;
  *(int *)(*(int *)(iVar2 + 0x10) + 4) = *(int *)(iVar2 + 0x10);
  *(undefined4 *)(iVar2 + 0x14) = 0;
  if (pvVar4 != *(void **)(iVar2 + 0x10)) {
                    /* WARNING: Subroutine does not return */
    operator_delete(pvVar4);
  }
                    /* WARNING: Subroutine does not return */
  operator_delete(*(void **)(iVar2 + 0x10));
}


/* FUN_0046fa50 @ 0046fa50  kind=gamemisc  attributed-by=caller-vote  size=39 */

void FUN_0046fa50(void)

{
  undefined4 *puVar1;
  int *in_ECX;
  
  puVar1 = (undefined4 *)*in_ECX;
  if (puVar1 != (undefined4 *)in_ECX[1]) {
    FUN_0046f990();
                    /* WARNING: Subroutine does not return */
    operator_delete((void *)*puVar1);
  }
  in_ECX[1] = (int)puVar1;
  return;
}


/* FUN_0046fa90 @ 0046fa90  kind=gamemisc  attributed-by=caller-vote  size=33 */

void FUN_0046fa90(void)

{
  int iVar1;
  int *in_ECX;
  
  iVar1 = FUN_0040c4c0();
  if (iVar1 == 0) {
    std::basic_ios<char,std::char_traits<char>_>::setstate
              ((basic_ios<char,std::char_traits<char>_> *)(*(int *)(*in_ECX + 4) + (int)in_ECX),2,
               false);
  }
  return;
}


/* FUN_00471910 @ 00471910  kind=gamemisc  attributed-by=caller-vote  size=7 */

undefined4 FUN_00471910(void)

{
  int in_ECX;
  
  return *(undefined4 *)(in_ECX + 0x80015c);
}


/* FUN_00471920 @ 00471920  kind=gamemisc  attributed-by=caller-vote  size=203 */

void FUN_00471920(uint param_1,uint param_2,int param_3)

{
  int iVar1;
  int iVar2;
  
  if ((((-1 < (int)param_1) && (-1 < (int)param_2)) && ((int)param_1 < 0x1000000)) &&
     (((int)param_2 < 0x1000000 &&
      (iVar2 = FUN_00434d10((int)(param_1 + ((int)param_1 >> 0x1f & 0xffU)) >> 8,
                            (int)(param_2 + ((int)param_2 >> 0x1f & 0xffU)) >> 8), iVar2 != 0)))) {
    param_2 = param_2 & 0x800000ff;
    if ((int)param_2 < 0) {
      param_2 = (param_2 - 1 | 0xffffff00) + 1;
    }
    param_1 = param_1 & 0x800000ff;
    if ((int)param_1 < 0) {
      param_1 = (param_1 - 1 | 0xffffff00) + 1;
    }
    iVar2 = (param_2 * 0x100 + param_1) * 0x20 + *(int *)(iVar2 + 0xa8);
    if (((iVar2 != 0) && (iVar1 = *(int *)(iVar2 + 0x10), iVar1 <= param_3)) &&
       (param_3 < *(int *)(iVar2 + 0x1c) + iVar1)) {
      if (param_3 < 1) {
        FUN_0044e700(param_3 - iVar1,&DAT_0076b054);
        return;
      }
      FUN_0044e700(param_3 - iVar1,&DAT_0076b058);
    }
  }
  return;
}


/* FUN_004719f0 @ 004719f0  kind=gamemisc  attributed-by=caller-vote  size=354 */

void FUN_004719f0(void)

{
  uint uVar1;
  int in_ECX;
  void *local_3c [4];
  undefined4 local_2c;
  uint local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006e5958;
  local_10 = ExceptionList;
  uVar1 = DAT_0076aa78 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_14 = uVar1;
  if (*(char *)(in_ECX + 0x800585) != '\0') {
    FUN_00487520(in_ECX,*(undefined4 *)(in_ECX + 0x800a0c),*(undefined4 *)(in_ECX + 0x8006d0));
    *(undefined1 *)(in_ECX + 0x800585) = 0;
    if (*(SOCKET *)(in_ECX + 0x8006cc) != 0) {
      closesocket(*(SOCKET *)(in_ECX + 0x8006cc));
      *(undefined4 *)(in_ECX + 0x8006cc) = 0;
      *(undefined1 *)(in_ECX + 0x398) = 0;
    }
    if (*(HANDLE *)(in_ECX + 0x800590) != (HANDLE)0x0) {
      WaitForSingleObject(*(HANDLE *)(in_ECX + 0x800590),0xffffffff);
      *(undefined4 *)(in_ECX + 0x800590) = 0;
    }
    if (*(HANDLE *)(in_ECX + 0x800594) != (HANDLE)0x0) {
      WaitForSingleObject(*(HANDLE *)(in_ECX + 0x800594),0xffffffff);
      *(undefined4 *)(in_ECX + 0x800594) = 0;
    }
    FUN_00601cb0(uVar1);
    *(undefined1 *)(in_ECX + 0x398) = 0;
    FUN_0040eb60(L"Disconnected.\n");
    local_8 = 0;
    local_24 = 0x3f800000;
    local_20 = 0x3f000000;
    local_1c = 0x3e4ccccd;
    local_18 = 0x3f800000;
    FUN_0043ab30(local_3c,&local_24);
    local_8 = 0xffffffff;
    if (7 < local_28) {
                    /* WARNING: Subroutine does not return */
      operator_delete(local_3c[0]);
    }
    local_28 = 7;
    local_2c = 0;
    local_3c[0] = (void *)((uint)local_3c[0] & 0xffff0000);
    FUN_00601e90();
    FUN_0046f620(*(undefined4 *)(in_ECX + 0x800448),in_ECX + 0x378);
  }
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}


/* FUN_00477230 @ 00477230  kind=gamemisc  attributed-by=caller-vote  size=9 */

bool FUN_00477230(void)

{
  int in_ECX;
  
  return *(int *)(in_ECX + 4) == 0;
}


/* FUN_00477250 @ 00477250  kind=gamemisc  attributed-by=caller-vote  size=43 */

void FUN_00477250(int *param_1)

{
  int *in_ECX;
  
  if (7 < (uint)in_ECX[5]) {
    *param_1 = *in_ECX + in_ECX[4] * 2;
    return;
  }
  *param_1 = (int)in_ECX + in_ECX[4] * 2;
  return;
}


/* FUN_004778b0 @ 004778b0  kind=gamemisc  attributed-by=caller-vote  size=681 */

/* WARNING: Removing unreachable block (ram,0x0047797d) */
/* WARNING: Removing unreachable block (ram,0x0047798d) */
/* WARNING: Removing unreachable block (ram,0x00477996) */
/* WARNING: Removing unreachable block (ram,0x00477999) */
/* WARNING: Removing unreachable block (ram,0x00477989) */
/* WARNING: Removing unreachable block (ram,0x004779a7) */
/* WARNING: Removing unreachable block (ram,0x004779b6) */
/* WARNING: Removing unreachable block (ram,0x004779c1) */
/* WARNING: Removing unreachable block (ram,0x004779bd) */
/* WARNING: Removing unreachable block (ram,0x004779b1) */
/* WARNING: Removing unreachable block (ram,0x004779c4) */

void FUN_004778b0(undefined4 param_1,int *param_2)

{
  undefined4 *puVar1;
  int iVar2;
  int *piVar3;
  undefined4 uVar4;
  int *in_ECX;
  int *piVar5;
  int *piVar6;
  
  if (*(char *)((int)param_2 + 0xd) != '\0') {
                    /* WARNING: Subroutine does not return */
    std::_Xout_of_range("invalid map/set<T> iterator");
  }
  FUN_005c3ea0();
  piVar6 = (int *)*param_2;
  if (*(char *)((int)piVar6 + 0xd) == '\0') {
    if (*(char *)(param_2[2] + 0xd) == '\0') {
      piVar6 = (int *)param_2[2];
    }
  }
  else {
    piVar6 = (int *)param_2[2];
  }
  piVar5 = (int *)param_2[1];
  if (*(char *)((int)piVar6 + 0xd) == '\0') {
    piVar6[1] = (int)piVar5;
  }
  if (*(int **)(*in_ECX + 4) == param_2) {
    *(int **)(*in_ECX + 4) = piVar6;
  }
  else if ((int *)*piVar5 == param_2) {
    *piVar5 = (int)piVar6;
  }
  else {
    piVar5[2] = (int)piVar6;
  }
  puVar1 = (undefined4 *)*in_ECX;
  if ((int *)*puVar1 == param_2) {
    piVar3 = piVar5;
    if (*(char *)((int)piVar6 + 0xd) == '\0') {
      piVar3 = (int *)FUN_004e6ce0(piVar6);
    }
    *puVar1 = piVar3;
  }
  iVar2 = *in_ECX;
  if (*(int **)(iVar2 + 8) == param_2) {
    if (*(char *)((int)piVar6 + 0xd) == '\0') {
      uVar4 = FUN_00428aa0(piVar6);
      *(undefined4 *)(iVar2 + 8) = uVar4;
    }
    else {
      *(int **)(iVar2 + 8) = piVar5;
    }
  }
  if ((char)param_2[3] == '\x01') {
    if (piVar6 != *(int **)(*in_ECX + 4)) {
      do {
        piVar3 = piVar5;
        if ((char)piVar6[3] != '\x01') break;
        piVar5 = (int *)*piVar3;
        if (piVar6 == piVar5) {
          piVar5 = (int *)piVar3[2];
          if ((char)piVar5[3] == '\0') {
            *(undefined1 *)(piVar5 + 3) = 1;
            *(undefined1 *)(piVar3 + 3) = 0;
            FUN_004e37e0(piVar3);
            piVar5 = (int *)piVar3[2];
          }
          if (*(char *)((int)piVar5 + 0xd) == '\0') {
            if ((*(char *)(*piVar5 + 0xc) != '\x01') || (*(char *)(piVar5[2] + 0xc) != '\x01')) {
              if (*(char *)(piVar5[2] + 0xc) == '\x01') {
                *(undefined1 *)(*piVar5 + 0xc) = 1;
                *(undefined1 *)(piVar5 + 3) = 0;
                FUN_0042cac0(piVar5);
                piVar5 = (int *)piVar3[2];
              }
              *(char *)(piVar5 + 3) = (char)piVar3[3];
              *(undefined1 *)(piVar3 + 3) = 1;
              *(undefined1 *)(piVar5[2] + 0xc) = 1;
              FUN_004e37e0(piVar3);
              *(undefined1 *)(piVar6 + 3) = 1;
              goto LAB_00477b0e;
            }
LAB_00477ab0:
            *(undefined1 *)(piVar5 + 3) = 0;
          }
        }
        else {
          if ((char)piVar5[3] == '\0') {
            *(undefined1 *)(piVar5 + 3) = 1;
            *(undefined1 *)(piVar3 + 3) = 0;
            FUN_0042cac0(piVar3);
            piVar5 = (int *)*piVar3;
          }
          if (*(char *)((int)piVar5 + 0xd) == '\0') {
            if ((*(char *)(piVar5[2] + 0xc) == '\x01') && (*(char *)(*piVar5 + 0xc) == '\x01'))
            goto LAB_00477ab0;
            if (*(char *)(*piVar5 + 0xc) == '\x01') {
              *(undefined1 *)(piVar5[2] + 0xc) = 1;
              *(undefined1 *)(piVar5 + 3) = 0;
              FUN_004e37e0(piVar5);
              piVar5 = (int *)*piVar3;
            }
            *(char *)(piVar5 + 3) = (char)piVar3[3];
            *(undefined1 *)(piVar3 + 3) = 1;
            *(undefined1 *)(*piVar5 + 0xc) = 1;
            FUN_0042cac0(piVar3);
            *(undefined1 *)(piVar6 + 3) = 1;
            goto LAB_00477b0e;
          }
        }
        piVar5 = (int *)piVar3[1];
        piVar6 = piVar3;
      } while (piVar3 != *(int **)(*in_ECX + 4));
    }
    *(undefined1 *)(piVar6 + 3) = 1;
  }
LAB_00477b0e:
  if (7 < (uint)param_2[0xf]) {
                    /* WARNING: Subroutine does not return */
    operator_delete((void *)param_2[10]);
  }
  param_2[0xf] = 7;
  param_2[0xe] = 0;
  *(undefined2 *)(param_2 + 10) = 0;
  if (7 < (uint)param_2[9]) {
                    /* WARNING: Subroutine does not return */
    operator_delete((void *)param_2[4]);
  }
  param_2[9] = 7;
  param_2[8] = 0;
  *(undefined2 *)(param_2 + 4) = 0;
                    /* WARNING: Subroutine does not return */
  operator_delete(param_2);
}


/* FUN_00477b80 @ 00477b80  kind=gamemisc  attributed-by=caller-vote  size=87 */

int * FUN_00477b80(int *param_1,int *param_2)

{
  int *in_ECX;
  
  if (param_2 == (int *)*in_ECX) {
    *param_1 = *param_2;
    return param_1;
  }
  *(int *)param_2[1] = *param_2;
  *(int *)(*param_2 + 4) = param_2[1];
  if (7 < (uint)param_2[9]) {
                    /* WARNING: Subroutine does not return */
    operator_delete((void *)param_2[4]);
  }
  param_2[9] = 7;
  param_2[8] = 0;
  *(undefined2 *)(param_2 + 4) = 0;
                    /* WARNING: Subroutine does not return */
  operator_delete(param_2);
}


/* FUN_00477bf0 @ 00477bf0  kind=gamemisc  attributed-by=caller-vote  size=95 */

undefined4 * FUN_00477bf0(undefined4 *param_1,int *param_2,int *param_3)

{
  int *piVar1;
  undefined4 *in_ECX;
  
  if ((param_2 == *(int **)*in_ECX) && (param_3 == (int *)*in_ECX)) {
    FUN_0046f870();
    *param_1 = *in_ECX;
    return param_1;
  }
  do {
    piVar1 = param_2;
    if (piVar1 == param_3) {
      *param_1 = param_3;
      return param_1;
    }
    param_2 = (int *)*piVar1;
  } while (piVar1 == (int *)*in_ECX);
  *(int **)piVar1[1] = (int *)*piVar1;
  *(int *)(*piVar1 + 4) = piVar1[1];
                    /* WARNING: Subroutine does not return */
  operator_delete(piVar1);
}


/* FUN_00477c60 @ 00477c60  kind=gamemisc  attributed-by=caller-vote  size=49 */

void FUN_00477c60(int *param_1,int *param_2)

{
  int *in_ECX;
  
  if (param_2 != (int *)*in_ECX) {
    *(int *)param_2[1] = *param_2;
    *(int *)(*param_2 + 4) = param_2[1];
                    /* WARNING: Subroutine does not return */
    operator_delete(param_2);
  }
  *param_1 = *param_2;
  return;
}


/* FUN_00477cb0 @ 00477cb0  kind=gamemisc  attributed-by=caller-vote  size=87 */

int * FUN_00477cb0(int *param_1,int *param_2)

{
  int *in_ECX;
  
  if (param_2 == (int *)*in_ECX) {
    *param_1 = *param_2;
    return param_1;
  }
  *(int *)param_2[1] = *param_2;
  *(int *)(*param_2 + 4) = param_2[1];
  if (7 < (uint)param_2[0x15]) {
                    /* WARNING: Subroutine does not return */
    operator_delete((void *)param_2[0x10]);
  }
  param_2[0x15] = 7;
  param_2[0x14] = 0;
  *(undefined2 *)(param_2 + 0x10) = 0;
                    /* WARNING: Subroutine does not return */
  operator_delete(param_2);
}


/* FUN_004787f0 @ 004787f0  kind=gamemisc  attributed-by=caller-vote  size=7 */

undefined4 FUN_004787f0(void)

{
  int in_ECX;
  
  return *(undefined4 *)(in_ECX + 0x800164);
}


/* FUN_0047ae10 @ 0047ae10  kind=gamemisc  attributed-by=caller-vote  size=497 */

void FUN_0047ae10(uint *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  int *piVar3;
  undefined4 *puVar4;
  int in_ECX;
  int iVar5;
  int iVar6;
  int *piVar7;
  uint *puVar8;
  undefined4 uVar9;
  int local_2c;
  int local_28;
  int local_24;
  int local_20;
  int local_1c [3];
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_006e5fe9;
  local_10 = ExceptionList;
  local_1c[2] = DAT_0076aa78 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  iVar6 = *(int *)(in_ECX + 0x8006d0);
  iVar5 = *(int *)(iVar6 + 0x11e0) - *(int *)(iVar6 + 0x11dc);
  local_8 = 0;
  iVar2 = iVar5 >> 0x1f;
  iVar5 = iVar5 / 0xc + iVar2;
  uVar9 = 1;
  local_28 = 0;
  puVar8 = param_1;
  if (0 < iVar5 - iVar2) {
    local_20 = 0;
    do {
      piVar7 = (int *)(*(int *)(iVar6 + 0x11dc) + local_20);
      local_24 = 0;
      if (0 < (piVar7[1] - *piVar7) / 0x11c) {
        local_2c = 0;
        do {
          iVar2 = *piVar7;
          if (((*(int *)(iVar2 + local_2c) != 0) && (*(char *)(iVar2 + 4 + local_2c) == '\x01')) &&
             ((int)*(short *)(iVar2 + 0x14 + local_2c) <= *(int *)(iVar6 + 400))) {
            local_1c[0] = local_28;
            piVar7 = (int *)param_1[1];
            local_1c[1] = local_24;
            if (local_1c < piVar7) {
              piVar3 = (int *)*param_1;
              if (local_1c < piVar3) goto LAB_0047af4b;
              if (piVar7 == (int *)param_1[2]) {
                FUN_005fbc10(1);
              }
              puVar4 = (undefined4 *)param_1[1];
              puVar1 = (undefined4 *)(*param_1 + ((int)local_1c - (int)piVar3 >> 3) * 8);
              if (puVar4 != (undefined4 *)0x0) {
                *puVar4 = *puVar1;
                puVar4[1] = puVar1[1];
              }
            }
            else {
LAB_0047af4b:
              if (piVar7 == (int *)param_1[2]) {
                FUN_005fbc10(1);
              }
              if ((undefined8 *)param_1[1] != (undefined8 *)0x0) {
                *(undefined8 *)param_1[1] = CONCAT44(local_1c[1],local_1c[0]);
              }
            }
            param_1[1] = param_1[1] + 8;
          }
          local_24 = local_24 + 1;
          iVar6 = *(int *)(in_ECX + 0x8006d0);
          local_2c = local_2c + 0x11c;
          piVar7 = (int *)(*(int *)(iVar6 + 0x11dc) + local_20);
        } while (local_24 < (piVar7[1] - *piVar7) / 0x11c);
      }
      iVar6 = *(int *)(in_ECX + 0x8006d0);
      local_20 = local_20 + 0xc;
      iVar5 = *(int *)(iVar6 + 0x11e0) - *(int *)(iVar6 + 0x11dc);
      iVar2 = iVar5 >> 0x1f;
      iVar5 = iVar5 / 0xc + iVar2;
      local_28 = local_28 + 1;
    } while (local_28 < iVar5 - iVar2);
  }
  ExceptionList = local_10;
  __security_check_cookie(local_1c[2] ^ (uint)&stack0xfffffffc,iVar5,puVar8,uVar9);
  return;
}


/* FUN_0047b010 @ 0047b010  kind=gamemisc  attributed-by=caller-vote  size=410 */

int FUN_0047b010(void)

{
  float fVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int in_ECX;
  float fVar9;
  float fVar10;
  
  iVar4 = *(int *)(*(int *)(in_ECX + 0x8008f8) + 0x3c);
  if (*(int *)(*(int *)(iVar4 + 0x94) + *(int *)(iVar4 + 0x68) * 4) != 0) {
    iVar4 = *(int *)(*(int *)(in_ECX + 0x8008fc) + 0x160);
    if ((((-1 < iVar4) &&
         (iVar4 < (*(int *)(*(int *)(in_ECX + 0x8006d0) + 0x11e0) -
                  *(int *)(*(int *)(in_ECX + 0x8006d0) + 0x11dc)) / 0xc)) &&
        (iVar5 = *(int *)(*(int *)(in_ECX + 0x8008fc) + 0x164), -1 < iVar5)) &&
       (iVar6 = *(int *)(*(int *)(in_ECX + 0x8006d0) + 0x11dc),
       iVar5 < (*(int *)(iVar6 + 4 + iVar4 * 0xc) - *(int *)(iVar6 + iVar4 * 0xc)) / 0x11c)) {
      iVar4 = *(int *)(*(int *)(*(int *)(in_ECX + 0x8006d0) + 0x11dc) + iVar4 * 0xc);
      if (*(int *)(iVar5 * 0x11c + iVar4) != 0) {
        iVar6 = *(int *)(in_ECX + 0x8008f8);
        iVar7 = *(int *)(*(int *)(iVar6 + 0x38) + 0x170);
        iVar8 = *(int *)(*(int *)(iVar6 + 0x38) + 0x19c);
        fVar1 = *(float *)(iVar8 + 4 + iVar7 * 8);
        fVar2 = *(float *)(iVar8 + iVar7 * 8);
        fVar9 = 1.0 / (*(float *)(iVar6 + 0x54) * fVar2 + *(float *)(iVar6 + 100) * fVar1 +
                      *(float *)(iVar6 + 0x84));
        fVar3 = *(float *)(*(int *)(in_ECX + 0x800710) + 0xd4);
        fVar10 = fVar9 * (*(float *)(iVar6 + 0x58) * fVar1 + fVar2 * *(float *)(iVar6 + 0x48) +
                         *(float *)(iVar6 + 0x78));
        fVar9 = fVar9 * (*(float *)(iVar6 + 0x4c) * fVar2 + *(float *)(iVar6 + 0x5c) * fVar1 +
                        *(float *)(iVar6 + 0x7c));
        if (((fVar10 <= fVar3) &&
            (fVar1 = *(float *)(*(int *)(in_ECX + 0x800710) + 0xd8), fVar9 <= fVar1)) &&
           ((fVar3 < fVar10 + 120.0 && (fVar1 < fVar9 + 120.0)))) {
          return iVar5 * 0x11c + 4 + iVar4;
        }
      }
    }
  }
  return 0;
}


/* FUN_0047b1b0 @ 0047b1b0  kind=gamemisc  attributed-by=caller-vote  size=391 */

int FUN_0047b1b0(void)

{
  char cVar1;
  int in_ECX;
  
  if (*(char *)(in_ECX + 0x8008f0) != '\0') {
    cVar1 = FUN_006294c0();
    if (cVar1 != '\0') {
      return *(int *)(in_ECX + 0x8006d0) + 0x990;
    }
    cVar1 = FUN_006294c0();
    if (cVar1 != '\0') {
      return *(int *)(in_ECX + 0x8006d0) + 0xaa8;
    }
    cVar1 = FUN_006294c0();
    if (cVar1 != '\0') {
      return *(int *)(in_ECX + 0x8006d0) + 0xbc0;
    }
    cVar1 = FUN_006294c0();
    if (cVar1 != '\0') {
      return *(int *)(in_ECX + 0x8006d0) + 0xcd8;
    }
    cVar1 = FUN_006294c0();
    if (cVar1 != '\0') {
      return *(int *)(in_ECX + 0x8006d0) + 0x418;
    }
    cVar1 = FUN_006294c0();
    if (cVar1 != '\0') {
      return *(int *)(in_ECX + 0x8006d0) + 0x878;
    }
    cVar1 = FUN_006294c0();
    if (cVar1 != '\0') {
      return *(int *)(in_ECX + 0x8006d0) + 0x530;
    }
    cVar1 = FUN_006294c0();
    if (cVar1 != '\0') {
      return *(int *)(in_ECX + 0x8006d0) + 0x760;
    }
    cVar1 = FUN_006294c0();
    if (cVar1 != '\0') {
      return *(int *)(in_ECX + 0x8006d0) + 0x648;
    }
    cVar1 = FUN_006294c0();
    if (cVar1 != '\0') {
      return *(int *)(in_ECX + 0x8006d0) + 0xdf0;
    }
    cVar1 = FUN_006294c0();
    if (cVar1 != '\0') {
      return *(int *)(in_ECX + 0x8006d0) + 0xf08;
    }
    cVar1 = FUN_006294c0();
    if (cVar1 != '\0') {
      return *(int *)(in_ECX + 0x8006d0) + 0x1020;
    }
  }
  return 0;
}


/* FUN_0047b340 @ 0047b340  kind=gamemisc  attributed-by=caller-vote  size=156 */

char * FUN_0047b340(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  char *pcVar4;
  int in_ECX;
  
  iVar1 = *(int *)(*(int *)(in_ECX + 0x8008c0) + 0x3c);
  if (*(int *)(*(int *)(iVar1 + 0x94) + *(int *)(iVar1 + 0x68) * 4) == 0) {
    return (char *)0x0;
  }
  iVar1 = *(int *)(*(int *)(in_ECX + 0x800958) + 0x188);
  iVar2 = *(int *)(*(int *)(in_ECX + 0x800958) + 0x184);
  if ((((-1 < iVar2) &&
       (iVar3 = *(int *)(in_ECX + 0x800adc), iVar2 < (*(int *)(in_ECX + 0x800ae0) - iVar3) / 0xc))
      && (-1 < iVar1)) &&
     (iVar1 < (*(int *)(iVar3 + 4 + iVar2 * 0xc) - *(int *)(iVar3 + iVar2 * 0xc)) / 0x11c)) {
    iVar2 = *(int *)(iVar3 + iVar2 * 0xc);
    if ((-1 < *(int *)(iVar1 * 0x11c + iVar2)) &&
       (pcVar4 = (char *)(iVar2 + 4 + iVar1 * 0x11c), *pcVar4 != '\0')) {
      return pcVar4;
    }
  }
  return (char *)0x0;
}


/* FUN_0047b3e0 @ 0047b3e0  kind=gamemisc  attributed-by=caller-vote  size=99 */

char * FUN_0047b3e0(void)

{
  int iVar1;
  char *pcVar2;
  int in_ECX;
  char *pcVar3;
  
  iVar1 = *(int *)(*(int *)(in_ECX + 0x800ad4) + 0x3c);
  if (*(int *)(*(int *)(iVar1 + 0x94) + *(int *)(iVar1 + 0x68) * 4) != 0) {
    pcVar2 = (char *)(*(int *)(in_ECX + 0x800964) + 0x2ac);
    pcVar3 = (char *)0x0;
    if (*pcVar2 != '\0') {
      pcVar3 = pcVar2;
    }
    return pcVar3;
  }
  iVar1 = *(int *)(*(int *)(in_ECX + 0x8008dc) + 0x3c);
  if ((*(int *)(*(int *)(iVar1 + 0x94) + *(int *)(iVar1 + 0x68) * 4) != 0) &&
     (-1 < *(int *)(*(int *)(in_ECX + 0x8008f4) + 0x2ac))) {
    return (char *)(*(int *)(in_ECX + 0x8008f4) + 0x2b0);
  }
  return (char *)0x0;
}


/* FUN_0047b450 @ 0047b450  kind=gamemisc  attributed-by=caller-vote  size=251 */

undefined4 * FUN_0047b450(undefined4 *param_1)

{
  int iVar1;
  int iVar2;
  int in_ECX;
  
  iVar1 = *(int *)(*(int *)(in_ECX + 0x8008bc) + 0x3c);
  if (*(int *)(*(int *)(iVar1 + 0x94) + *(int *)(iVar1 + 0x68) * 4) == 0) {
    *param_1 = 0xffffffff;
    param_1[1] = 0xffffffff;
    return param_1;
  }
  iVar1 = *(int *)(in_ECX + 0x800954);
  if (-1 < *(int *)(iVar1 + 0x184)) {
    iVar2 = *(int *)(in_ECX + 0x8006d0);
    if ((*(int *)(iVar1 + 0x184) < (*(int *)(iVar2 + 0x11e0) - *(int *)(iVar2 + 0x11dc)) / 0xc) &&
       (-1 < *(int *)(iVar1 + 0x188))) {
      iVar2 = *(int *)(iVar2 + 0x11dc);
      if ((*(int *)(iVar1 + 0x188) <
           (*(int *)(iVar2 + 4 + *(int *)(iVar1 + 0x184) * 0xc) -
           *(int *)(iVar2 + *(int *)(iVar1 + 0x184) * 0xc)) / 0x11c) &&
         (*(int *)(*(int *)(iVar1 + 0x188) * 0x11c + *(int *)(iVar2 + *(int *)(iVar1 + 0x184) * 0xc)
                  ) != 0)) {
        *param_1 = *(undefined4 *)(iVar1 + 0x184);
        param_1[1] = *(undefined4 *)(iVar1 + 0x188);
        return param_1;
      }
    }
  }
  *param_1 = 0xffffffff;
  param_1[1] = 0xffffffff;
  return param_1;
}


/* FUN_0047b550 @ 0047b550  kind=gamemisc  attributed-by=caller-vote  size=149 */

int FUN_0047b550(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int in_ECX;
  
  iVar1 = *(int *)(*(int *)(in_ECX + 0x8008c4) + 0x3c);
  if (*(int *)(*(int *)(iVar1 + 0x94) + *(int *)(iVar1 + 0x68) * 4) == 0) {
    return 0;
  }
  iVar1 = *(int *)(*(int *)(in_ECX + 0x80095c) + 0x188);
  iVar2 = *(int *)(*(int *)(in_ECX + 0x80095c) + 0x184);
  if (-1 < iVar2) {
    iVar3 = *(int *)(in_ECX + 0x800c0c);
    if ((iVar2 < (*(int *)(in_ECX + 0x800c10) - iVar3) / 0xc) && (-1 < iVar1)) {
      if (iVar1 < (*(int *)(iVar3 + 4 + iVar2 * 0xc) - *(int *)(iVar3 + iVar2 * 0xc)) / 0x11c) {
        return *(int *)(iVar3 + iVar2 * 0xc) + iVar1 * 0x11c + 4;
      }
    }
  }
  return 0;
}


/* FUN_0047f000 @ 0047f000  kind=gamemisc  attributed-by=caller-vote  size=47 */

void FUN_0047f000(undefined4 *param_1,undefined4 param_2)

{
  undefined1 uVar1;
  undefined4 *puVar2;
  undefined1 local_c [8];
  
  puVar2 = (undefined4 *)FUN_00453de0(local_c,0,param_2,DAT_0076b060);
  uVar1 = *(undefined1 *)(puVar2 + 1);
  *param_1 = *puVar2;
  *(undefined1 *)(param_1 + 1) = uVar1;
  return;
}


/* FUN_0047f1c0 @ 0047f1c0  kind=gamemisc  attributed-by=caller-vote  size=7 */

undefined1 FUN_0047f1c0(void)

{
  int in_ECX;
  
  return *(undefined1 *)(in_ECX + 0x3c4);
}


/* FUN_0047f3b0 @ 0047f3b0  kind=gamemisc  attributed-by=caller-vote  size=10 */

uint FUN_0047f3b0(void)

{
  int in_ECX;
  
  return *(uint *)(in_ECX + 0xf4) & 1;
}


/* FUN_0047f3c0 @ 0047f3c0  kind=gamemisc  attributed-by=caller-vote  size=915 */

/* WARNING: Removing unreachable block (ram,0x0047f534) */

void FUN_0047f3c0(uint *param_1,uint *param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  float *pfVar11;
  int in_ECX;
  int iVar12;
  int iVar13;
  uint uVar14;
  uint uVar15;
  int iVar16;
  undefined8 uVar17;
  longlong lVar18;
  longlong lVar19;
  longlong lVar20;
  longlong lVar21;
  
  uVar9 = DAT_0076aa78 ^ (uint)&stack0xfffffffc;
  uVar17 = FUN_0068d946();
  uVar1 = *param_1;
  uVar2 = param_1[1];
  uVar3 = param_1[2];
  uVar4 = param_1[3];
  uVar5 = *param_2;
  uVar15 = uVar1 + *param_2;
  uVar6 = param_2[1];
  uVar7 = param_2[2];
  uVar14 = uVar3 + param_2[2];
  uVar8 = param_2[3];
  FUN_0042c900(uVar17);
  iVar12 = *(uint *)(in_ECX + 0x140) - uVar15;
  iVar10 = (*(int *)(in_ECX + 0x144) - (uVar2 + uVar6 + (uint)CARRY4(uVar1,uVar5))) -
           (uint)(*(uint *)(in_ECX + 0x140) < uVar15);
  iVar13 = *(uint *)(in_ECX + 0x148) - uVar14;
  iVar16 = (*(int *)(in_ECX + 0x14c) - (uVar4 + uVar8 + (uint)CARRY4(uVar3,uVar7))) -
           (uint)(*(uint *)(in_ECX + 0x148) < uVar14);
  uVar17 = __allmul(iVar12,iVar10,iVar12,iVar10);
  lVar18 = __alldiv(uVar17,0x10000,0);
  uVar17 = __allmul(iVar13,iVar16,iVar13,iVar16);
  lVar19 = __alldiv(uVar17,0x10000,0);
  lVar21 = lVar18 + lVar19;
  lVar20 = FUN_0068d946();
  iVar10 = (int)((ulonglong)lVar20 >> 0x20);
  if (lVar18 + lVar19 <= lVar20) {
    iVar10 = param_2[1] + *(int *)(in_ECX + 0x1dc) +
             (uint)CARRY4(*param_2,*(uint *)(in_ECX + 0x1d8));
    iVar12 = 0;
    pfVar11 = (float *)(in_ECX + 0x1000fa4);
    while( true ) {
      lVar18 = CONCAT44(iVar10,*param_2 + *(uint *)(in_ECX + 0x1d8));
      if (*pfVar11 <= 0.0) {
        lVar18 = CONCAT44(param_1[1] + *(int *)(in_ECX + 0x1dc) +
                          (uint)CARRY4(*param_1,*(uint *)(in_ECX + 0x1d8)),
                          *param_1 + *(uint *)(in_ECX + 0x1d8));
      }
      lVar19 = CONCAT44(param_2[3] + *(int *)(in_ECX + 0x1e4) +
                        (uint)CARRY4(param_2[2],*(uint *)(in_ECX + 0x1e0)),
                        param_2[2] + *(uint *)(in_ECX + 0x1e0));
      if (pfVar11[1] <= 0.0) {
        lVar19 = CONCAT44(param_1[3] + *(int *)(in_ECX + 0x1e4) +
                          (uint)CARRY4(param_1[2],*(uint *)(in_ECX + 0x1e0)),
                          param_1[2] + *(uint *)(in_ECX + 0x1e0));
      }
      lVar20 = *(longlong *)(param_2 + 4);
      if (pfVar11[2] <= 0.0) {
        lVar20 = *(longlong *)(param_1 + 4);
      }
      if (pfVar11[1] * (float)lVar19 * 1.5258789e-05 + *pfVar11 * (float)lVar18 * 1.5258789e-05 +
          pfVar11[2] * (float)lVar20 * 1.5258789e-05 + pfVar11[3] < 0.0) break;
      iVar12 = iVar12 + 1;
      pfVar11 = pfVar11 + 4;
      if (5 < iVar12) {
        __security_check_cookie(uVar9 ^ (uint)&stack0xfffffffc,iVar10,lVar21);
        return;
      }
    }
  }
  __security_check_cookie(uVar9 ^ (uint)&stack0xfffffffc,iVar10,lVar21);
  return;
}


/* FUN_0047f760 @ 0047f760  kind=gamemisc  attributed-by=caller-vote  size=467 */

/* WARNING: Removing unreachable block (ram,0x0047f81d) */

void FUN_0047f760(uint *param_1,float param_2,float param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  longlong lVar6;
  float *pfVar7;
  int in_ECX;
  int iVar8;
  longlong lVar9;
  uint local_54;
  uint local_50;
  float local_4c;
  float local_48;
  float local_44;
  float local_40;
  int local_38;
  int local_34;
  int local_30;
  int local_2c;
  int local_28;
  int local_24;
  int local_20;
  int iStack_1c;
  int local_18;
  int iStack_14;
  uint local_10;
  uint uStack_c;
  uint local_8;
  
  local_8 = DAT_0076aa78 ^ (uint)&stack0xfffffffc;
  local_50 = *(uint *)(in_ECX + 0x150);
  local_38 = *(uint *)(in_ECX + 0x140) - *param_1;
  uVar1 = *param_1;
  uVar2 = param_1[1];
  local_34 = (*(int *)(in_ECX + 0x144) - uVar2) - (uint)(*(uint *)(in_ECX + 0x140) < *param_1);
  uVar3 = param_1[2];
  local_30 = *(uint *)(in_ECX + 0x148) - uVar3;
  local_48 = (float)param_1[3];
  local_2c = (*(int *)(in_ECX + 0x14c) - (int)local_48) - (uint)(*(uint *)(in_ECX + 0x148) < uVar3);
  uVar4 = param_1[4];
  uVar5 = param_1[5];
  lVar6 = *(longlong *)(param_1 + 4);
  local_28 = local_50 - uVar4;
  local_24 = (*(int *)(in_ECX + 0x154) - uVar5) - (uint)(local_50 < uVar4);
  FUN_0043ac20(&local_54,&local_38);
  local_4c = param_3 * param_3 * 65536.0;
  lVar9 = FUN_0068d946();
  if (CONCAT44(local_50,local_54) <= lVar9) {
    local_20 = uVar1 + *(uint *)(in_ECX + 0x1d8);
    iStack_1c = uVar2 + *(int *)(in_ECX + 0x1dc) + (uint)CARRY4(uVar1,*(uint *)(in_ECX + 0x1d8));
    local_18 = uVar3 + *(uint *)(in_ECX + 0x1e0);
    iStack_14 = (int)local_48 + *(int *)(in_ECX + 0x1e4) +
                (uint)CARRY4(uVar3,*(uint *)(in_ECX + 0x1e0));
    iVar8 = 0;
    pfVar7 = (float *)(in_ECX + 0x1000fa8);
    local_44 = (float)CONCAT44(iStack_1c,local_20) * 1.5258789e-05;
    local_48 = (float)lVar6;
    local_40 = (float)CONCAT44(iStack_14,local_18) * 1.5258789e-05;
    while (local_10 = uVar4, uStack_c = uVar5,
          0.0 <= pfVar7[-1] * local_44 + *pfVar7 * local_40 + pfVar7[1] * local_48 * 1.5258789e-05 +
                 pfVar7[2] + param_2) {
      iVar8 = iVar8 + 1;
      pfVar7 = pfVar7 + 4;
      if (5 < iVar8) {
        __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
        return;
      }
    }
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


/* FUN_0047fa10 @ 0047fa10  kind=gamemisc  attributed-by=caller-vote  size=21 */

bool FUN_0047fa10(void)

{
  int in_ECX;
  
  return *(int *)(*(int *)(*(int *)(in_ECX + 0x3c) + 0x94) +
                 *(int *)(*(int *)(in_ECX + 0x3c) + 0x68) * 4) != 0;
}


/* FUN_004806c0 @ 004806c0  kind=gamemisc  attributed-by=caller-vote  size=695 */

void __thiscall FUN_004806c0(void *this,int param_2,int param_3)

{
  undefined4 uVar1;
  int iVar2;
  int iStack_110;
  basic_iostream<char,std::char_traits<char>_> local_10c;
  basic_streambuf<char,std::char_traits<char>_> local_f4 [2];
  basic_iostream<char,std::char_traits<char>_> local_ec [2];
  undefined4 local_bc;
  undefined4 local_b8;
  code *local_a4 [18];
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  void *local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  char local_2d;
  void *local_2c [5];
  uint local_18;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006e6190;
  local_10 = ExceptionList;
  local_14 = DAT_0076aa78 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_5c = 0;
  FUN_00601cb0(local_14);
  local_50 = *(undefined4 *)(param_3 + 0x10);
  local_58 = *(undefined4 *)(param_3 + 0x14);
  local_4c = *(undefined4 *)(param_3 + 0x18);
  local_44 = *(undefined4 *)(param_3 + 0x1c);
  local_54 = *(undefined4 *)(param_3 + 0x20);
  local_48 = *(undefined4 *)(param_3 + 0x24);
  local_10c.vbtablePtr =
       (basic_iostream<char,std::char_traits<char>_>_vbtable *)
       &std::basic_stringstream<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>::vbtable
  ;
  local_10c.basic_ostream<char,std::char_traits<char>_>.vbtablePtr =
       (basic_ostream<char,std::char_traits<char>_>_vbtable *)&DAT_006fcd08;
  local_a4[0] = _vftable__exref;
  local_8 = 0;
  local_5c = 1;
  std::basic_iostream<char,std::char_traits<char>_>::basic_iostream<char,std::char_traits<char>_>
            (&local_10c,(basic_streambuf<char,std::char_traits<char>_> *)local_f4);
  local_8 = 1;
                    /* inlined constructor or destructor (approx location) for
                       std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_> */
  *(basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_vftable **)
   ((int)&local_10c.vbtablePtr +
   (local_10c.vbtablePtr)->basic_ios<char,std::char_traits<char>_>_offset) =
       &std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>::vftable;
  *(int *)((int)&iStack_110 + (local_10c.vbtablePtr)->basic_ios<char,std::char_traits<char>_>_offset
          ) = (local_10c.vbtablePtr)->basic_ios<char,std::char_traits<char>_>_offset + -0x68;
  std::basic_streambuf<char,std::char_traits<char>_>::basic_streambuf<char,std::char_traits<char>_>
            (local_f4);
                    /* inlined constructor or destructor (approx location) for
                       std::basic_stringbuf<char,std::char_traits<char>,std::allocator<char>_> */
  local_f4[0] = (basic_streambuf<char,std::char_traits<char>_>)
                &std::basic_stringbuf<char,std::char_traits<char>,std::allocator<char>_>::vftable;
  local_bc = 0;
  local_b8 = 0;
  local_8 = 3;
  std::basic_ostream<char,std::char_traits<char>_>::operator<<
            (&local_10c.basic_ostream<char,std::char_traits<char>_>,param_2);
  local_40 = (void *)0x0;
  local_3c = 0;
  local_38 = 0;
  local_34 = 0;
  local_8._0_1_ = 4;
  EnterCriticalSection((LPCRITICAL_SECTION)((int)this + 0x8005b8));
  uVar1 = FUN_0040e140(local_2c);
  local_8._0_1_ = 5;
  local_2d = FUN_004498d0(uVar1,&local_40);
  local_8 = CONCAT31(local_8._1_3_,4);
  if (0xf < local_18) {
                    /* WARNING: Subroutine does not return */
    operator_delete(local_2c[0]);
  }
  if (local_2d != '\0') {
    FUN_004494b0();
    iVar2 = param_3;
    FUN_0044a8a0(&local_40);
    FUN_0044be40(iVar2);
    *(undefined4 *)(param_3 + 0x10) = local_50;
    *(undefined4 *)(param_3 + 0x14) = local_58;
    *(undefined4 *)(param_3 + 0x18) = local_4c;
    *(undefined4 *)(param_3 + 0x1c) = local_44;
    *(undefined4 *)(param_3 + 0x20) = local_54;
    *(undefined4 *)(param_3 + 0x24) = local_48;
    *(undefined4 *)(param_3 + 0x1350) = *(undefined4 *)(param_3 + 0x10);
    *(undefined4 *)(param_3 + 0x1354) = *(undefined4 *)(param_3 + 0x14);
    *(undefined4 *)(param_3 + 0x1358) = *(undefined4 *)(param_3 + 0x18);
    *(undefined4 *)(param_3 + 0x135c) = *(undefined4 *)(param_3 + 0x1c);
    *(undefined4 *)(param_3 + 0x1360) = *(undefined4 *)(param_3 + 0x20);
    *(undefined4 *)(param_3 + 0x1364) = *(undefined4 *)(param_3 + 0x24);
    *(undefined4 *)(param_3 + 0x1d40) = *(undefined4 *)(param_3 + 0x194);
    *(undefined4 *)(param_3 + 0x1d3c) = *(undefined4 *)(param_3 + 400);
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)((int)this + 0x8005b8));
  FUN_00601e90();
  if (local_40 != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    operator_delete(local_40);
  }
  *(basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_vftable **)
   ((int)&local_10c.vbtablePtr +
   (local_10c.vbtablePtr)->basic_ios<char,std::char_traits<char>_>_offset) =
       &std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>::vftable;
  *(int *)((int)&iStack_110 + (local_10c.vbtablePtr)->basic_ios<char,std::char_traits<char>_>_offset
          ) = (local_10c.vbtablePtr)->basic_ios<char,std::char_traits<char>_>_offset + -0x68;
  local_f4[0] = (basic_streambuf<char,std::char_traits<char>_>)
                &std::basic_stringbuf<char,std::char_traits<char>,std::allocator<char>_>::vftable;
  FUN_0040b4e0();
  std::basic_streambuf<char,std::char_traits<char>_>::~basic_streambuf<char,std::char_traits<char>_>
            (local_f4);
  std::basic_iostream<char,std::char_traits<char>_>::~basic_iostream<char,std::char_traits<char>_>
            (local_ec);
  std::basic_ios<char,std::char_traits<char>_>::~basic_ios<char,std::char_traits<char>_>
            ((basic_ios<char,std::char_traits<char>_> *)local_a4);
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}


/* FUN_004809a0 @ 004809a0  kind=gamemisc  attributed-by=caller-vote  size=971 */

void __thiscall FUN_004809a0(undefined4 param_1,int param_2,int param_3)

{
  int iVar1;
  char cVar2;
  undefined4 uVar3;
  Sprite *pSVar4;
  int iVar5;
  int *_Dst;
  int iVar6;
  uint _Size;
  int iStack_118;
  basic_iostream<char,std::char_traits<char>_> local_114;
  basic_streambuf<char,std::char_traits<char>_> local_fc [2];
  basic_iostream<char,std::char_traits<char>_> local_f4 [2];
  undefined4 local_c4;
  undefined4 local_c0;
  basic_ios<char,std::char_traits<char>_> local_ac [6];
  void *local_64;
  int local_60;
  undefined4 local_5c;
  int local_58;
  Sprite *local_54;
  int local_50;
  void *local_4c;
  int local_48;
  undefined4 local_44;
  int local_40;
  undefined1 local_39;
  void *local_38 [3];
  undefined4 local_2c [2];
  uint local_24;
  undefined8 local_20;
  int local_18;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006e622b;
  local_10 = ExceptionList;
  local_14 = DAT_0076aa78 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_54 = (Sprite *)0x0;
  local_58 = param_3;
  local_114.vbtablePtr =
       (basic_iostream<char,std::char_traits<char>_>_vbtable *)
       &std::basic_stringstream<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>::vbtable
  ;
  local_114.basic_ostream<char,std::char_traits<char>_>.vbtablePtr =
       (basic_ostream<char,std::char_traits<char>_>_vbtable *)&DAT_006fcd08;
  std::basic_ios<char,std::char_traits<char>_>::basic_ios<char,std::char_traits<char>_>(local_ac);
  local_8 = 0;
  local_54 = (Sprite *)0x1;
  std::basic_iostream<char,std::char_traits<char>_>::basic_iostream<char,std::char_traits<char>_>
            (&local_114,(basic_streambuf<char,std::char_traits<char>_> *)local_fc);
  local_8 = 1;
                    /* inlined constructor or destructor (approx location) for
                       std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_> */
  *(basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_vftable **)
   ((int)&local_114.vbtablePtr +
   (local_114.vbtablePtr)->basic_ios<char,std::char_traits<char>_>_offset) =
       &std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>::vftable;
  *(int *)((int)&iStack_118 + (local_114.vbtablePtr)->basic_ios<char,std::char_traits<char>_>_offset
          ) = (local_114.vbtablePtr)->basic_ios<char,std::char_traits<char>_>_offset + -0x68;
  std::basic_streambuf<char,std::char_traits<char>_>::basic_streambuf<char,std::char_traits<char>_>
            (local_fc);
                    /* inlined constructor or destructor (approx location) for
                       std::basic_stringbuf<char,std::char_traits<char>,std::allocator<char>_> */
  local_fc[0] = (basic_streambuf<char,std::char_traits<char>_>)
                &std::basic_stringbuf<char,std::char_traits<char>,std::allocator<char>_>::vftable;
  local_c4 = 0;
  local_c0 = 0;
  local_8 = 3;
  std::basic_ostream<char,std::char_traits<char>_>::operator<<
            (&local_114.basic_ostream<char,std::char_traits<char>_>,param_2);
  local_4c = (void *)0x0;
  local_48 = 0;
  local_44 = 0;
  local_40 = 0;
  local_8._0_1_ = 4;
  uVar3 = FUN_0040e140(local_38);
  local_8._0_1_ = 5;
  cVar2 = FUN_004498d0(uVar3,&local_4c);
  local_39 = cVar2 == '\0';
  local_8 = CONCAT31(local_8._1_3_,4);
  if (0xf < local_24) {
                    /* WARNING: Subroutine does not return */
    operator_delete(local_38[0]);
  }
  if (!(bool)local_39) {
    FUN_00601cb0();
    if (*(undefined4 **)(param_3 + 4) != (undefined4 *)0x0) {
      (**(code **)**(undefined4 **)(param_3 + 4))(1);
      *(undefined4 *)(param_3 + 4) = 0;
    }
    _Size = 0;
    iVar5 = local_48 - (int)local_4c;
    if (local_40 + 4 <= local_48 - (int)local_4c) {
      _Size = *(uint *)((int)local_4c + local_40);
      iVar5 = local_40 + 4;
    }
    local_40 = iVar5;
    _Dst = (int *)(param_3 + 8);
    if (*(uint *)(param_3 + 0x18) < _Size) {
      FUN_0040bff0(_Size - *(uint *)(param_3 + 0x18),0x20);
    }
    else {
      *(uint *)(param_3 + 0x18) = _Size;
      if (*(uint *)(param_3 + 0x1c) < 0x10) {
        *(undefined1 *)((int)_Dst + _Size) = 0;
      }
      else {
        *(undefined1 *)(*_Dst + _Size) = 0;
      }
    }
    if (0xf < *(uint *)(param_3 + 0x1c)) {
      _Dst = (int *)*_Dst;
    }
    iVar5 = local_48 - (int)local_4c;
    if ((int)(local_40 + _Size) <= iVar5) {
      memcpy(_Dst,(void *)(local_40 + (int)local_4c),_Size);
      iVar5 = local_40 + _Size;
    }
    iVar1 = local_58;
    local_40 = local_48 - (int)local_4c;
    iVar6 = local_40;
    if (iVar5 + 4 <= local_40) {
      *(undefined4 *)(local_58 + 0x20) = *(undefined4 *)((int)local_4c + iVar5);
      iVar6 = iVar5 + 4;
    }
    iVar5 = local_40;
    if (iVar6 + 4 <= local_40) {
      *(undefined4 *)(local_58 + 0x24) = *(undefined4 *)((int)local_4c + iVar6);
      iVar5 = iVar6 + 4;
    }
    iVar6 = local_18;
    if (iVar5 + 0xc <= local_40) {
      local_20 = *(undefined8 *)((int)local_4c + iVar5);
      iVar6 = *(int *)((int)local_4c + iVar5 + 8);
      local_40 = iVar5 + 0xc;
    }
    if ((((0 < (int)local_20) && (0 < local_20._4_4_)) && (0 < iVar6)) &&
       (FUN_0044d620(&local_54,4), pSVar4 = local_54, local_54 != (Sprite *)0x0)) {
      FUN_005842d0(local_54);
      FUN_0044d620(local_2c[0],pSVar4);
      local_64 = (void *)0x0;
      local_60 = 0;
      local_5c = 0;
      local_8._0_1_ = 7;
      FUN_00449540(local_2c,&local_64);
      local_54 = operator_new(0x60);
      local_8._0_1_ = 8;
      if (local_54 == (Sprite *)0x0) {
        pSVar4 = (Sprite *)0x0;
      }
      else {
        pSVar4 = cube::Sprite::Sprite(local_54,*(undefined4 *)(local_50 + 0x134));
      }
      local_8._0_1_ = 7;
      *(Sprite **)(iVar1 + 4) = pSVar4;
      FUN_004e75c0((int)local_20,local_20._4_4_,iVar6);
      memcpy(*(void **)(*(int *)(iVar1 + 4) + 0x30),local_64,local_60 - (int)local_64);
      FUN_004e7870();
      FUN_005fb860();
      local_8 = CONCAT31(local_8._1_3_,4);
      FUN_005fb860();
    }
    FUN_00601e90();
  }
  if (local_4c == (void *)0x0) {
    *(basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_vftable **)
     ((int)&local_114.vbtablePtr +
     (local_114.vbtablePtr)->basic_ios<char,std::char_traits<char>_>_offset) =
         &std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>::vftable;
    *(int *)((int)&iStack_118 +
            (local_114.vbtablePtr)->basic_ios<char,std::char_traits<char>_>_offset) =
         (local_114.vbtablePtr)->basic_ios<char,std::char_traits<char>_>_offset + -0x68;
    local_fc[0] = (basic_streambuf<char,std::char_traits<char>_>)
                  &std::basic_stringbuf<char,std::char_traits<char>,std::allocator<char>_>::vftable;
    FUN_0040b4e0();
    std::basic_streambuf<char,std::char_traits<char>_>::
    ~basic_streambuf<char,std::char_traits<char>_>(local_fc);
    std::basic_iostream<char,std::char_traits<char>_>::~basic_iostream<char,std::char_traits<char>_>
              (local_f4);
    std::basic_ios<char,std::char_traits<char>_>::~basic_ios<char,std::char_traits<char>_>(local_ac)
    ;
    ExceptionList = local_10;
    __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
    return;
  }
                    /* WARNING: Subroutine does not return */
  operator_delete(local_4c);
}


/* FUN_00480d90 @ 00480d90  kind=gamemisc  attributed-by=caller-vote  size=32 */

float10 FUN_00480d90(void)

{
  int in_ECX;
  
  return (float10)(*(float *)(in_ECX + 0xd4) - *(float *)(in_ECX + 0xdc));
}


/* FUN_00480db0 @ 00480db0  kind=gamemisc  attributed-by=caller-vote  size=32 */

float10 FUN_00480db0(void)

{
  int in_ECX;
  
  return (float10)(*(float *)(in_ECX + 0xd8) - *(float *)(in_ECX + 0xe0));
}


/* FUN_00480dd0 @ 00480dd0  kind=gamemisc  attributed-by=caller-vote  size=27 */

void FUN_00480dd0(undefined4 *param_1)

{
  undefined4 uVar1;
  int in_ECX;
  
  uVar1 = *(undefined4 *)(in_ECX + 0xd8);
  *param_1 = *(undefined4 *)(in_ECX + 0xd4);
  param_1[1] = uVar1;
  return;
}


/* FUN_00480df0 @ 00480df0  kind=gamemisc  attributed-by=caller-vote  size=7 */

int FUN_00480df0(void)

{
  int in_ECX;
  
  return in_ECX + 0x94;
}


/* FUN_00484320 @ 00484320  kind=gamemisc  attributed-by=caller-vote  size=40 */

void FUN_00484320(undefined4 param_1)

{
  int in_ECX;
  
  FUN_00484350(param_1,in_ECX + 0x140,0x3f800000,0x3f800000);
  return;
}


/* FUN_00486030 @ 00486030  kind=gamemisc  attributed-by=caller-vote  size=22 */

void FUN_00486030(void)

{
  int *in_ECX;
  undefined1 local_8 [4];
  
  FUN_00477b80(local_8,*(undefined4 *)(*in_ECX + 4));
  return;
}


/* FUN_00486080 @ 00486080  kind=gamemisc  attributed-by=caller-vote  size=36 */

void FUN_00486080(void)

{
  int *piVar1;
  int *in_ECX;
  
  piVar1 = *(int **)*in_ECX;
  if (piVar1 != (int *)*in_ECX) {
    *(int *)piVar1[1] = *piVar1;
    *(int *)(*piVar1 + 4) = piVar1[1];
                    /* WARNING: Subroutine does not return */
    operator_delete(piVar1);
  }
  return;
}


/* FUN_00486100 @ 00486100  kind=gamemisc  attributed-by=caller-vote  size=67 */

void FUN_00486100(undefined4 param_1)

{
  int iVar1;
  int iVar2;
  int *in_ECX;
  
  iVar1 = *in_ECX;
  iVar2 = FUN_00451d70(iVar1,*(undefined4 *)(iVar1 + 4),param_1);
  if (in_ECX[1] == 0xd4c77a) {
                    /* WARNING: Subroutine does not return */
    std::_Xlength_error("list<T> too long");
  }
  in_ECX[1] = in_ECX[1] + 1;
  *(int *)(iVar1 + 4) = iVar2;
  **(int **)(iVar2 + 4) = iVar2;
  return;
}


/* FUN_004861a0 @ 004861a0  kind=gamemisc  attributed-by=caller-vote  size=67 */

void FUN_004861a0(undefined4 param_1)

{
  int iVar1;
  int iVar2;
  int *in_ECX;
  
  iVar1 = *in_ECX;
  iVar2 = FUN_00451da0(iVar1,*(undefined4 *)(iVar1 + 4),param_1);
  if (in_ECX[1] == 0x2222221) {
                    /* WARNING: Subroutine does not return */
    std::_Xlength_error("list<T> too long");
  }
  in_ECX[1] = in_ECX[1] + 1;
  *(int *)(iVar1 + 4) = iVar2;
  **(int **)(iVar2 + 4) = iVar2;
  return;
}


/* FUN_004861f0 @ 004861f0  kind=gamemisc  attributed-by=caller-vote  size=67 */

void FUN_004861f0(undefined4 param_1)

{
  int iVar1;
  int iVar2;
  int *in_ECX;
  
  iVar1 = *in_ECX;
  iVar2 = FUN_00451dd0(iVar1,*(undefined4 *)(iVar1 + 4),param_1);
  if (in_ECX[1] == 0x6666665) {
                    /* WARNING: Subroutine does not return */
    std::_Xlength_error("list<T> too long");
  }
  in_ECX[1] = in_ECX[1] + 1;
  *(int *)(iVar1 + 4) = iVar2;
  **(int **)(iVar2 + 4) = iVar2;
  return;
}


/* FUN_00486290 @ 00486290  kind=gamemisc  attributed-by=caller-vote  size=67 */

void FUN_00486290(undefined4 param_1)

{
  int iVar1;
  int iVar2;
  int *in_ECX;
  
  iVar1 = *in_ECX;
  iVar2 = FUN_00451ee0(iVar1,*(undefined4 *)(iVar1 + 4),param_1);
  if (in_ECX[1] == 0x3333332) {
                    /* WARNING: Subroutine does not return */
    std::_Xlength_error("list<T> too long");
  }
  in_ECX[1] = in_ECX[1] + 1;
  *(int *)(iVar1 + 4) = iVar2;
  **(int **)(iVar2 + 4) = iVar2;
  return;
}


/* FUN_00486330 @ 00486330  kind=gamemisc  attributed-by=caller-vote  size=67 */

void FUN_00486330(undefined4 param_1)

{
  int iVar1;
  int iVar2;
  int *in_ECX;
  
  iVar1 = *in_ECX;
  iVar2 = FUN_00451f50(iVar1,*(undefined4 *)(iVar1 + 4),param_1);
  if (in_ECX[1] == 0xaaaaaa9) {
                    /* WARNING: Subroutine does not return */
    std::_Xlength_error("list<T> too long");
  }
  in_ECX[1] = in_ECX[1] + 1;
  *(int *)(iVar1 + 4) = iVar2;
  **(int **)(iVar2 + 4) = iVar2;
  return;
}


/* FUN_004863d0 @ 004863d0  kind=gamemisc  attributed-by=caller-vote  size=67 */

void FUN_004863d0(undefined4 param_1)

{
  int iVar1;
  int iVar2;
  int *in_ECX;
  
  iVar1 = *in_ECX;
  iVar2 = FUN_00451ff0(iVar1,*(undefined4 *)(iVar1 + 4),param_1);
  if (in_ECX[1] == 0x4924923) {
                    /* WARNING: Subroutine does not return */
    std::_Xlength_error("list<T> too long");
  }
  in_ECX[1] = in_ECX[1] + 1;
  *(int *)(iVar1 + 4) = iVar2;
  **(int **)(iVar2 + 4) = iVar2;
  return;
}


/* FUN_00486420 @ 00486420  kind=gamemisc  attributed-by=caller-vote  size=67 */

void FUN_00486420(undefined4 param_1)

{
  int iVar1;
  int iVar2;
  int *in_ECX;
  
  iVar1 = *in_ECX;
  iVar2 = FUN_00451d40(iVar1,*(undefined4 *)(iVar1 + 4),param_1);
  if (in_ECX[1] == 0x3fffffe) {
                    /* WARNING: Subroutine does not return */
    std::_Xlength_error("list<T> too long");
  }
  in_ECX[1] = in_ECX[1] + 1;
  *(int *)(iVar1 + 4) = iVar2;
  **(int **)(iVar2 + 4) = iVar2;
  return;
}


/* FUN_00486470 @ 00486470  kind=gamemisc  attributed-by=caller-vote  size=67 */

void FUN_00486470(undefined4 param_1)

{
  int iVar1;
  int iVar2;
  int *in_ECX;
  
  iVar1 = *in_ECX;
  iVar2 = FUN_004520d0(iVar1,*(undefined4 *)(iVar1 + 4),param_1);
  if (in_ECX[1] == 0x3333332) {
                    /* WARNING: Subroutine does not return */
    std::_Xlength_error("list<T> too long");
  }
  in_ECX[1] = in_ECX[1] + 1;
  *(int *)(iVar1 + 4) = iVar2;
  **(int **)(iVar2 + 4) = iVar2;
  return;
}


/* FUN_00486510 @ 00486510  kind=gamemisc  attributed-by=caller-vote  size=67 */

void FUN_00486510(undefined4 param_1)

{
  int iVar1;
  int iVar2;
  int *in_ECX;
  
  iVar1 = *in_ECX;
  iVar2 = FUN_00452100(iVar1,*(undefined4 *)(iVar1 + 4),param_1);
  if (in_ECX[1] == 0x2762761) {
                    /* WARNING: Subroutine does not return */
    std::_Xlength_error("list<T> too long");
  }
  in_ECX[1] = in_ECX[1] + 1;
  *(int *)(iVar1 + 4) = iVar2;
  **(int **)(iVar2 + 4) = iVar2;
  return;
}


/* FUN_004865b0 @ 004865b0  kind=gamemisc  attributed-by=caller-vote  size=67 */

void FUN_004865b0(undefined4 param_1)

{
  int iVar1;
  int iVar2;
  int *in_ECX;
  
  iVar1 = *in_ECX;
  iVar2 = FUN_004521c0(iVar1,*(undefined4 *)(iVar1 + 4),param_1);
  if (in_ECX[1] == 0x7fffffe) {
                    /* WARNING: Subroutine does not return */
    std::_Xlength_error("list<T> too long");
  }
  in_ECX[1] = in_ECX[1] + 1;
  *(int *)(iVar1 + 4) = iVar2;
  **(int **)(iVar2 + 4) = iVar2;
  return;
}


/* FUN_00486600 @ 00486600  kind=gamemisc  attributed-by=caller-vote  size=252 */

void ** FUN_00486600(void **param_1)

{
  void **ppvVar1;
  uint uVar2;
  void **ppvVar3;
  uint *in_ECX;
  int iVar4;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006f8472;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  ppvVar1 = (void **)in_ECX[1];
  ppvVar3 = ExceptionList;
  if ((param_1 < ppvVar1) && (ppvVar3 = (void **)*in_ECX, ppvVar3 <= param_1)) {
    iVar4 = (int)param_1 - (int)ppvVar3;
    ppvVar3 = (void **)(iVar4 * -0x22983759);
    if (ppvVar1 == (void **)in_ECX[2]) {
      ppvVar3 = (void **)FUN_0046e710(1);
    }
    uVar2 = in_ECX[1];
    param_1 = (void **)((iVar4 / 0x128) * 0x128 + *in_ECX);
    local_8 = 0;
    if (uVar2 == 0) goto LAB_004866e1;
    FUN_0040ee70(param_1);
    *(void **)(uVar2 + 0x118) = param_1[0x46];
  }
  else {
    if (ppvVar1 == (void **)in_ECX[2]) {
      ppvVar3 = (void **)FUN_0046e710(1);
    }
    uVar2 = in_ECX[1];
    local_8 = 1;
    if (uVar2 == 0) goto LAB_004866e1;
    FUN_0040ee70(param_1);
    *(void **)(uVar2 + 0x118) = param_1[0x46];
  }
  ppvVar3 = (void **)FUN_004592f0(param_1 + 0x47);
LAB_004866e1:
  in_ECX[1] = in_ECX[1] + 0x128;
  ExceptionList = local_10;
  return ppvVar3;
}


/* FUN_00486780 @ 00486780  kind=gamemisc  attributed-by=caller-vote  size=165 */

void FUN_00486780(uint param_1)

{
  uint uVar1;
  uint uVar2;
  uint *in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006e6bb2;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  uVar1 = in_ECX[1];
  if ((param_1 < uVar1) && (uVar2 = *in_ECX, uVar2 <= param_1)) {
    if (uVar1 == in_ECX[2]) {
      FUN_0046e800(1);
    }
    uVar1 = in_ECX[1];
    param_1 = *in_ECX + ((int)(param_1 - uVar2) >> 3) * 8;
    local_8 = 0;
  }
  else {
    if (uVar1 == in_ECX[2]) {
      FUN_0046e800(1);
    }
    uVar1 = in_ECX[1];
    local_8 = 1;
  }
  if (uVar1 != 0) {
    FUN_00459110(param_1);
  }
  in_ECX[1] = in_ECX[1] + 8;
  ExceptionList = local_10;
  return;
}


/* FUN_004869d0 @ 004869d0  kind=gamemisc  attributed-by=caller-vote  size=69 */

void FUN_004869d0(undefined4 param_1)

{
  int iVar1;
  int iVar2;
  undefined4 *in_ECX;
  
  iVar1 = *(int *)*in_ECX;
  iVar2 = FUN_004520a0(iVar1,*(undefined4 *)(iVar1 + 4),param_1);
  if (in_ECX[1] == 0x1555554) {
                    /* WARNING: Subroutine does not return */
    std::_Xlength_error("list<T> too long");
  }
  in_ECX[1] = in_ECX[1] + 1;
  *(int *)(iVar1 + 4) = iVar2;
  **(int **)(iVar2 + 4) = iVar2;
  return;
}


/* FUN_00486a20 @ 00486a20  kind=gamemisc  attributed-by=caller-vote  size=309 */

void FUN_00486a20(undefined4 param_1,int param_2)

{
  char cVar1;
  uint uVar2;
  undefined4 uVar3;
  void *pvVar4;
  void *local_3c;
  void *local_38;
  undefined4 local_34;
  undefined4 local_30;
  void *local_2c [4];
  undefined4 local_1c;
  uint local_18;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_006e6be8;
  local_10 = ExceptionList;
  uVar2 = DAT_0076aa78 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_14 = uVar2;
  if (param_2 != 0) {
    local_3c = (void *)0x0;
    local_38 = (void *)0x0;
    local_34 = 0;
    local_30 = 0;
    local_8 = 0;
    cVar1 = FUN_004498d0(param_1,&local_3c);
    if (cVar1 != '\0') {
      FUN_004496a0();
      uVar3 = FUN_006089c0(local_2c,param_1,uVar2);
      pvVar4 = local_3c;
      if (local_3c == local_38) {
        pvVar4 = (void *)0x0;
      }
      local_8 = CONCAT31(local_8._1_3_,1);
      FUN_00658fa0(uVar3,pvVar4,(int)local_38 - (int)local_3c);
      if (7 < local_18) {
                    /* WARNING: Subroutine does not return */
        operator_delete(local_2c[0]);
      }
      local_2c[0] = (void *)((uint)local_2c[0] & 0xffff0000);
      local_18 = 7;
      local_1c = 0;
      pvVar4 = local_3c;
      if (local_3c == (void *)0x0) goto LAB_00486b3e;
      goto LAB_00486b36;
    }
    local_8 = 0xffffffff;
    if (local_3c != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      operator_delete(local_3c);
    }
  }
  local_8 = 0xffffffff;
  uVar3 = FUN_006089c0(local_2c,param_1,uVar2);
  local_8 = 2;
  FUN_00658c40(uVar3);
  pvVar4 = local_2c[0];
  if (local_18 < 8) {
LAB_00486b3e:
    ExceptionList = local_10;
    __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
    return;
  }
LAB_00486b36:
                    /* WARNING: Subroutine does not return */
  operator_delete(pvVar4);
}


/* FUN_004870f0 @ 004870f0  kind=gamemisc  attributed-by=caller-vote  size=194 */

void FUN_004870f0(uint param_1)

{
  uint uVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  int *in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006e6c10;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  uVar1 = in_ECX[1];
  if (uVar1 < param_1) {
    local_8 = 0;
    while ((uint)in_ECX[1] < param_1) {
      iVar2 = *in_ECX;
      iVar4 = FUN_0046d9d0(iVar2,*(undefined4 *)(iVar2 + 4));
      if (in_ECX[1] == 0x1555554) {
                    /* WARNING: Subroutine does not return */
        std::_Xlength_error("list<T> too long");
      }
      in_ECX[1] = in_ECX[1] + 1;
      *(int *)(iVar2 + 4) = iVar4;
      **(int **)(iVar4 + 4) = iVar4;
    }
  }
  else {
    while (param_1 < uVar1) {
      piVar3 = (int *)((int *)*in_ECX)[1];
      if (piVar3 != (int *)*in_ECX) {
        *(int *)piVar3[1] = *piVar3;
        *(int *)(*piVar3 + 4) = piVar3[1];
                    /* WARNING: Subroutine does not return */
        operator_delete(piVar3);
      }
      uVar1 = in_ECX[1];
    }
  }
  ExceptionList = local_10;
  return;
}


/* FUN_00487490 @ 00487490  kind=gamemisc  attributed-by=caller-vote  size=7 */

undefined4 FUN_00487490(void)

{
  int in_ECX;
  
  return *(undefined4 *)(in_ECX + 0xb4);
}


/* FUN_00487520 @ 00487520  kind=gamemisc  attributed-by=caller-vote  size=873 */

void __thiscall FUN_00487520(void *this,int param_2,int param_3)

{
  LPCRITICAL_SECTION lpCriticalSection;
  undefined4 uVar1;
  undefined4 *puVar2;
  Creature *this_00;
  Creature *pCVar3;
  int iStack_108;
  basic_iostream<char,std::char_traits<char>_> local_104;
  basic_streambuf<char,std::char_traits<char>_> local_ec [2];
  basic_iostream<char,std::char_traits<char>_> local_e4 [2];
  undefined4 local_b4;
  undefined4 local_b0;
  code *local_9c [18];
  undefined8 local_54;
  void *local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  void *local_3c;
  Creature *local_38;
  int local_34;
  undefined1 local_30 [4];
  void *local_2c [5];
  uint local_18;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006e6cde;
  local_10 = ExceptionList;
  local_14 = DAT_0076aa78 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_34 = (int)this + 0x2e4;
  local_3c = this;
  FUN_00601cb0(local_14);
  if (*(int *)((int)this + 0x388) != 0) {
    local_38 = *(Creature **)((int)this + 0x800448);
    uVar1 = FUN_00457e20(local_30,&local_38,(int)this + 0x378);
    local_8 = 0;
    puVar2 = (undefined4 *)FUN_0044b460(uVar1);
    local_8 = 0xffffffff;
    *puVar2 = *(undefined4 *)(param_3 + 0x10);
    puVar2[1] = *(undefined4 *)(param_3 + 0x14);
    puVar2[2] = *(undefined4 *)(param_3 + 0x18);
    puVar2[3] = *(undefined4 *)(param_3 + 0x1c);
    puVar2[4] = *(undefined4 *)(param_3 + 0x20);
    puVar2[5] = *(undefined4 *)(param_3 + 0x24);
    if (0xf < local_18) {
                    /* WARNING: Subroutine does not return */
      operator_delete(local_2c[0]);
    }
  }
  local_38 = operator_new(0x1e60);
  local_8 = 1;
  if (local_38 == (Creature *)0x0) {
    this_00 = (Creature *)0x0;
  }
  else {
    local_54 = 0;
    this_00 = cube::Creature::Creature(local_38,(undefined4 *)&local_54);
  }
  local_8 = 0xffffffff;
  FUN_0044b040(param_3 + 0x10);
  this_00[0x119].Creature_data.offset_0x4 = *(undefined4 *)(param_3 + 0x1198);
  this_00[0x119].Creature_data.offset_0x8 = *(undefined4 *)(param_3 + 0x119c);
  local_38 = operator_new(0x40);
  local_8 = 2;
  if (local_38 == (Creature *)0x0) {
    uVar1 = 0;
  }
  else {
    uVar1 = FUN_00465ef0(*(undefined4 *)(param_3 + 0x1d28));
  }
  local_8 = 0xffffffff;
  this_00[0x1d2].Creature_data.offset_0x4 = uVar1;
  FUN_0044ad30(param_3 + 0x11dc);
  this_00[0x11e].Creature_data.offset_0x4 = *(undefined4 *)(param_3 + 0x11e8);
  FUN_0042c5e0(param_3 + 0x11ec);
  *(undefined4 *)&this_00[0x130].Creature_data = *(undefined4 *)(param_3 + 0x1304);
  this_00[0x130].Creature_data.offset_0x4 = *(undefined4 *)(param_3 + 0x1308);
  FUN_00601e90();
  local_4c = (void *)0x0;
  local_48 = 0;
  local_44 = 0;
  local_40 = 0;
  local_8 = 3;
  pCVar3 = this_00;
  FUN_0044a8a0(&local_4c);
  FUN_0044d790(pCVar3);
  (*this_00->vftablePtr->deleting_destructor)(this_00,1);
  local_104.vbtablePtr =
       (basic_iostream<char,std::char_traits<char>_>_vbtable *)
       &std::basic_stringstream<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>::vbtable
  ;
  local_104.basic_ostream<char,std::char_traits<char>_>.vbtablePtr =
       (basic_ostream<char,std::char_traits<char>_>_vbtable *)&DAT_006fcd08;
  local_9c[0] = _vftable__exref;
  local_8 = CONCAT31(local_8._1_3_,4);
  local_34 = 1;
  std::basic_iostream<char,std::char_traits<char>_>::basic_iostream<char,std::char_traits<char>_>
            (&local_104,(basic_streambuf<char,std::char_traits<char>_> *)local_ec);
  local_8 = 5;
                    /* inlined constructor or destructor (approx location) for
                       std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_> */
  *(basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_vftable **)
   ((int)&local_104.vbtablePtr +
   (local_104.vbtablePtr)->basic_ios<char,std::char_traits<char>_>_offset) =
       &std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>::vftable;
  *(int *)((int)&iStack_108 + (local_104.vbtablePtr)->basic_ios<char,std::char_traits<char>_>_offset
          ) = (local_104.vbtablePtr)->basic_ios<char,std::char_traits<char>_>_offset + -0x68;
  std::basic_streambuf<char,std::char_traits<char>_>::basic_streambuf<char,std::char_traits<char>_>
            (local_ec);
                    /* inlined constructor or destructor (approx location) for
                       std::basic_stringbuf<char,std::char_traits<char>,std::allocator<char>_> */
  local_ec[0] = (basic_streambuf<char,std::char_traits<char>_>)
                &std::basic_stringbuf<char,std::char_traits<char>,std::allocator<char>_>::vftable;
  local_b4 = 0;
  local_b0 = 0;
  local_8._0_1_ = 7;
  std::basic_ostream<char,std::char_traits<char>_>::operator<<
            (&local_104.basic_ostream<char,std::char_traits<char>_>,param_2);
  FUN_00449420();
  lpCriticalSection = (LPCRITICAL_SECTION)((int)local_3c + 0x8005b8);
  EnterCriticalSection(lpCriticalSection);
  uVar1 = FUN_0040e140(local_2c);
  local_8 = CONCAT31(local_8._1_3_,8);
  FUN_004499c0(uVar1,&local_4c);
  if (0xf < local_18) {
                    /* WARNING: Subroutine does not return */
    operator_delete(local_2c[0]);
  }
  LeaveCriticalSection(lpCriticalSection);
  *(basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_vftable **)
   ((int)&local_104.vbtablePtr +
   (local_104.vbtablePtr)->basic_ios<char,std::char_traits<char>_>_offset) =
       &std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>::vftable;
  *(int *)((int)&iStack_108 + (local_104.vbtablePtr)->basic_ios<char,std::char_traits<char>_>_offset
          ) = (local_104.vbtablePtr)->basic_ios<char,std::char_traits<char>_>_offset + -0x68;
  local_ec[0] = (basic_streambuf<char,std::char_traits<char>_>)
                &std::basic_stringbuf<char,std::char_traits<char>,std::allocator<char>_>::vftable;
  FUN_0040b4e0();
  std::basic_streambuf<char,std::char_traits<char>_>::~basic_streambuf<char,std::char_traits<char>_>
            (local_ec);
  std::basic_iostream<char,std::char_traits<char>_>::~basic_iostream<char,std::char_traits<char>_>
            (local_e4);
  std::basic_ios<char,std::char_traits<char>_>::~basic_ios<char,std::char_traits<char>_>
            ((basic_ios<char,std::char_traits<char>_> *)local_9c);
  if (local_4c != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    operator_delete(local_4c);
  }
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}


/* FUN_00487e60 @ 00487e60  kind=gamemisc  attributed-by=caller-vote  size=27 */

void FUN_00487e60(undefined4 *param_1)

{
  undefined4 uVar1;
  int in_ECX;
  
  uVar1 = *(undefined4 *)(in_ECX + 400);
  *param_1 = *(undefined4 *)(in_ECX + 0x18c);
  param_1[1] = uVar1;
  return;
}


/* FUN_00487e80 @ 00487e80  kind=gamemisc  attributed-by=caller-vote  size=16 */

void FUN_00487e80(undefined4 param_1)

{
  int in_ECX;
  
  *(undefined4 *)(in_ECX + 0x1ec) = param_1;
  return;
}


/* FUN_00487e90 @ 00487e90  kind=gamemisc  attributed-by=caller-vote  size=16 */

void FUN_00487e90(undefined4 param_1)

{
  int in_ECX;
  
  *(undefined4 *)(in_ECX + 0xb8) = param_1;
  return;
}


/* FUN_00487f70 @ 00487f70  kind=gamemisc  attributed-by=caller-vote  size=14 */

int FUN_00487f70(void)

{
  int *in_ECX;
  
  return *in_ECX * *in_ECX + in_ECX[1] * in_ECX[1];
}


/* FUN_00487f80 @ 00487f80  kind=gamemisc  attributed-by=caller-vote  size=85 */

uint * FUN_00487f80(uint *param_1)

{
  uint uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 *in_ECX;
  undefined8 uVar4;
  
  uVar4 = __allmul(*in_ECX,in_ECX[1],*in_ECX,in_ECX[1]);
  uVar4 = __alldiv(uVar4,0x10000,0);
  uVar2 = in_ECX[2];
  uVar3 = in_ECX[3];
  *(undefined8 *)param_1 = uVar4;
  uVar4 = __allmul(uVar2,uVar3,uVar2,uVar3);
  uVar4 = __alldiv(uVar4,0x10000,0);
  uVar1 = *param_1;
  *param_1 = *param_1 + (uint)uVar4;
  param_1[1] = param_1[1] + (int)((ulonglong)uVar4 >> 0x20) + (uint)CARRY4(uVar1,(uint)uVar4);
  return param_1;
}


/* FUN_00487fe0 @ 00487fe0  kind=gamemisc  attributed-by=caller-vote  size=7 */

int FUN_00487fe0(void)

{
  int in_ECX;
  
  return in_ECX + 0x8000f0;
}


/* FUN_00488030 @ 00488030  kind=gamemisc  attributed-by=caller-vote  size=673 */

void FUN_00488030(int *param_1,undefined4 param_2)

{
  char cVar1;
  undefined4 uVar2;
  int in_ECX;
  int iVar3;
  int *piVar4;
  int iVar5;
  undefined4 *in_stack_ffffffa4;
  basic_stringstream<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>_vbtable *local_20;
  int local_1c;
  int *local_18;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006e6de8;
  local_10 = ExceptionList;
  local_18 = *(int **)(in_ECX + 0x80092c);
  local_1c = *(int *)(in_ECX + 0x800930) - (int)local_18 >> 2;
  piVar4 = local_18;
  do {
    iVar5 = 0;
    if (piVar4 == *(int **)(in_ECX + 0x800930)) {
LAB_004880a6:
      iVar3 = local_1c;
      piVar4 = local_18;
      if (0 < local_1c) {
        do {
          if (*(int *)(*piVar4 + 0x188) == 0) {
            iVar5 = *piVar4;
          }
          iVar3 = iVar3 + -1;
          piVar4 = piVar4 + 1;
        } while (iVar3 != 0);
      }
      if (iVar5 != 0) {
LAB_004880ca:
        iVar3 = *param_1;
        if (((((iVar3 != 1) && (iVar3 != 2)) && (iVar3 != 3)) && ((iVar3 != 10 && (iVar3 != 0x12))))
           && ((iVar3 != 0x10 && ((iVar3 != 0x13 && (iVar3 != 0x45)))))) {
          iVar3 = *(int *)(*(int *)(iVar5 + 0x148) + 0x3c);
          ExceptionList = &local_10;
          *(undefined4 *)(*(int *)(iVar3 + 0x94) + *(int *)(iVar3 + 0x68) * 4) = 1;
          *(undefined4 *)(iVar5 + 0x188) = *(undefined4 *)(in_ECX + 0x8006d0);
          iVar3 = *(int *)(in_ECX + 0x8006d0);
          *(undefined4 *)(iVar5 + 400) = *(undefined4 *)(iVar3 + 0x10);
          *(undefined4 *)(iVar5 + 0x194) = *(undefined4 *)(iVar3 + 0x14);
          *(undefined4 *)(iVar5 + 0x198) = *(undefined4 *)(iVar3 + 0x18);
          *(undefined4 *)(iVar5 + 0x19c) = *(undefined4 *)(iVar3 + 0x1c);
          *(undefined4 *)(iVar5 + 0x1a0) = *(undefined4 *)(iVar3 + 0x20);
          *(undefined4 *)(iVar5 + 0x1a4) = *(undefined4 *)(iVar3 + 0x24);
          FUN_0046fa50();
          local_20 = (basic_stringstream<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>_vbtable
                      *)0x0;
          local_1c = 0;
          local_20 = (basic_stringstream<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>_vbtable
                      *)FUN_0046d850(0,0);
          local_8 = 0;
          FUN_0040eb60(L"There is nothing special.");
          std::basic_stringstream<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>::
          basic_stringstream<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>_Constructor_or_Destructor
                    ((basic_stringstream<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>
                      *)&local_20,in_stack_ffffffa4);
          FUN_00486780(&local_20);
          *(undefined4 *)(iVar5 + 0x16c) = 0;
          *(undefined4 *)(iVar5 + 0x174) = 0;
          *(undefined4 *)(iVar5 + 0x170) = 0;
          FUN_00452650(*(undefined4 *)(iVar5 + 0x178),*(undefined4 *)(iVar5 + 0x17c),
                       (int)&param_2 + 3,param_2);
          *(undefined4 *)(iVar5 + 0x17c) = *(undefined4 *)(iVar5 + 0x178);
          *(undefined4 *)(iVar5 + 0x184) = 0;
          FUN_0046f990();
                    /* WARNING: Subroutine does not return */
          operator_delete(local_20);
        }
      }
      return;
    }
    iVar5 = *piVar4;
    if (*(int *)(iVar5 + 0x188) == *(int *)(in_ECX + 0x8006d0)) {
      if (iVar5 != 0) {
        if ((char)param_2 == '\0') {
          ExceptionList = &local_10;
          cVar1 = FUN_004e6530(DAT_0076aa78 ^ (uint)&stack0xfffffffc);
          if (cVar1 != '\0') {
            *(int *)(iVar5 + 0x170) = *(int *)(iVar5 + 0x170) + 1;
            *(undefined4 *)(iVar5 + 0x16c) = 0;
            *(undefined4 *)(iVar5 + 0x174) = 0;
            ExceptionList = local_10;
            return;
          }
          uVar2 = FUN_004e6550();
          *(undefined4 *)(iVar5 + 0x16c) = uVar2;
          ExceptionList = local_10;
          return;
        }
        goto LAB_004880ca;
      }
      goto LAB_004880a6;
    }
    piVar4 = piVar4 + 1;
  } while( true );
}


/* FUN_004882e0 @ 004882e0  kind=gamemisc  attributed-by=caller-vote  size=1708 */

void FUN_004882e0(int param_1,char param_2)

{
  int *piVar1;
  undefined4 *puVar2;
  char cVar3;
  int iVar4;
  undefined4 uVar5;
  undefined8 *puVar6;
  int in_ECX;
  int iVar7;
  int iVar8;
  uint uVar9;
  int *piVar10;
  uint uVar11;
  undefined4 *puVar12;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 *local_58;
  undefined4 local_54;
  int local_50;
  undefined4 *local_4c;
  undefined4 *local_48;
  undefined4 local_44;
  int local_40;
  int local_3c;
  undefined4 local_38;
  undefined4 local_28;
  uint local_24;
  uint local_20;
  uint local_1c;
  undefined4 local_18;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006e6e38;
  local_10 = ExceptionList;
  local_14 = DAT_0076aa78 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_40 = param_1;
  if (param_1 != 0) {
    piVar10 = *(int **)(in_ECX + 0x80092c);
    piVar1 = *(int **)(in_ECX + 0x800930);
    if ((*(byte *)(param_1 + 0x7e) & 0x80) == 0) {
      local_3c = *(int *)(in_ECX + 0x800930) - (int)piVar10 >> 2;
      iVar7 = 0;
      if (piVar10 != piVar1) {
        do {
          iVar7 = *piVar10;
          if (*(int *)(iVar7 + 0x188) == param_1) {
            if (iVar7 != 0) {
              if (param_2 != '\0') goto LAB_0048852c;
              cVar3 = FUN_004e6530(local_14);
              if (cVar3 == '\0') {
                uVar5 = FUN_004e6550();
                *(undefined4 *)(iVar7 + 0x16c) = uVar5;
              }
              else {
                *(int *)(iVar7 + 0x170) = *(int *)(iVar7 + 0x170) + 1;
                *(undefined4 *)(iVar7 + 0x16c) = 0;
                *(undefined4 *)(iVar7 + 0x174) = 0;
              }
              goto LAB_004889b4;
            }
            break;
          }
          piVar10 = piVar10 + 1;
          iVar7 = 0;
        } while (piVar10 != piVar1);
        piVar10 = *(int **)(in_ECX + 0x80092c);
      }
      iVar8 = local_3c;
      if (0 < local_3c) {
        do {
          iVar4 = *piVar10;
          piVar10 = piVar10 + 1;
          if (*(int *)(iVar4 + 0x188) == 0) {
            iVar7 = iVar4;
          }
          iVar8 = iVar8 + -1;
        } while (iVar8 != 0);
      }
      if (iVar7 != 0) {
LAB_0048852c:
        local_4c = (undefined4 *)0x0;
        local_48 = (undefined4 *)0x0;
        local_44 = 0;
        local_8 = 1;
        local_1c = *(uint *)(param_1 + 0x1e0);
        local_20 = *(uint *)(param_1 + 0x1dc);
        uVar11 = (int)(((int)local_20 >> 0x1f & 7U) + local_20) >> 3;
        uVar9 = (int)(((int)local_1c >> 0x1f & 7U) + local_1c) >> 3;
        if ((((-1 < (int)uVar11) && (-1 < (int)uVar9)) && ((int)uVar11 < 0x2000)) &&
           ((int)uVar9 < 0x2000)) {
          local_3c = (int)(uVar9 * 8 + ((int)(uVar9 * 8) >> 0x1f & 0x3fU)) >> 6;
          iVar8 = (int)(uVar11 * 8 + ((int)(uVar11 * 8) >> 0x1f & 0x3fU)) >> 6;
          if (((-1 < iVar8) && (-1 < local_3c)) &&
             ((iVar8 < 0x400 &&
              ((local_3c < 0x400 &&
               (iVar8 = *(int *)(in_ECX + 0x3a0 + (iVar8 * 0x400 + local_3c) * 4), iVar8 != 0))))))
          {
            uVar11 = uVar11 & 0x80000007;
            if ((int)uVar11 < 0) {
              uVar11 = (uVar11 - 1 | 0xfffffff8) + 1;
            }
            uVar9 = uVar9 & 0x80000007;
            if ((int)uVar9 < 0) {
              uVar9 = (uVar9 - 1 | 0xfffffff8) + 1;
            }
            iVar8 = iVar8 + 0x14018 + (uVar9 + uVar11 * 8) * 0x68;
            if (iVar8 != 0) {
              iVar8 = *(int *)(iVar8 + 0x24);
              iVar4 = *(int *)(*(int *)(in_ECX + 0x8006d0) + 400);
              if ((iVar4 + 2 < iVar8) || (iVar8 < iVar4 + -2)) {
                local_20 = 0xffffffff;
                local_1c = 0xffffffff;
              }
            }
          }
        }
        local_18 = *(undefined4 *)(param_1 + 8);
        if (*(char *)(param_1 + 0x140) == -0x7c) {
          local_60 = 0;
          local_5c = 0;
          local_60 = FUN_0046d520();
          local_8._0_1_ = 2;
          local_58 = (undefined4 *)0x0;
          local_54 = 0;
          local_58 = (undefined4 *)FUN_00630a10();
          local_8._0_1_ = 3;
          local_24 = 7;
          local_28 = 0;
          local_38 = (void *)((uint)local_38._2_2_ << 0x10);
          FUN_0040f7a0(L"innkeeper",9);
          local_8._0_1_ = 4;
          FUN_004e4a20(&local_38,&local_60,&local_4c);
          if (7 < local_24) {
                    /* WARNING: Subroutine does not return */
            operator_delete(local_38);
          }
          local_8 = CONCAT31(local_8._1_3_,1);
          FUN_004777f0(&local_50,*local_58,local_58);
                    /* WARNING: Subroutine does not return */
          operator_delete(local_58);
        }
        std::basic_stringstream<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>::
        basic_stringstream<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>_Constructor_or_Destructor
                  ((basic_stringstream<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_> *
                   )(in_ECX + 0x314),in_ECX + 0x2e4,(uint)*(byte *)(param_1 + 0x1d8),
                   (int *)&local_20,&local_4c);
        FUN_005fc160(local_20,local_1c);
        local_50 = FUN_00602440(local_20,local_1c);
        if ((((local_50 != 0) && (-1 < (int)local_20)) && (-1 < (int)local_1c)) &&
           (((int)local_20 < 0x10000 && ((int)local_1c < 0x10000)))) {
          local_3c = (int)(local_1c + ((int)local_1c >> 0x1f & 0x3fU)) >> 6;
          iVar8 = (int)(local_20 + ((int)local_20 >> 0x1f & 0x3fU)) >> 6;
          if ((((-1 < iVar8) && ((-1 < local_3c && (iVar8 < 0x400)))) && (local_3c < 0x400)) &&
             (iVar8 = *(int *)(in_ECX + 0x3a0 + (iVar8 * 0x400 + local_3c) * 4), iVar8 != 0)) {
            uVar9 = local_20 & 0x8000003f;
            if ((int)uVar9 < 0) {
              uVar9 = (uVar9 - 1 | 0xffffffc0) + 1;
            }
            uVar11 = local_1c & 0x8000003f;
            if ((int)uVar11 < 0) {
              uVar11 = (uVar11 - 1 | 0xffffffc0) + 1;
            }
            puVar6 = (undefined8 *)(iVar8 + 0x18 + (uVar9 * 0x40 + uVar11) * 0x10);
            if (puVar6 != (undefined8 *)0x0) {
              *(undefined8 *)(local_50 + 0x10) = *puVar6;
              *(undefined8 *)(local_50 + 0x18) = puVar6[1];
            }
          }
        }
        if ((local_4c != local_48) && (local_4c[1] != 0)) {
          iVar8 = *(int *)(*(int *)(iVar7 + 0x148) + 0x3c);
          *(undefined4 *)(*(int *)(iVar8 + 0x94) + *(int *)(iVar8 + 0x68) * 4) = 1;
          *(int *)(iVar7 + 0x188) = local_40;
          *(undefined4 *)(iVar7 + 400) = *(undefined4 *)(local_40 + 0x1350);
          *(undefined4 *)(iVar7 + 0x194) = *(undefined4 *)(local_40 + 0x1354);
          *(undefined4 *)(iVar7 + 0x198) = *(undefined4 *)(local_40 + 0x1358);
          *(undefined4 *)(iVar7 + 0x19c) = *(undefined4 *)(local_40 + 0x135c);
          *(undefined4 *)(iVar7 + 0x1a0) = *(undefined4 *)(local_40 + 0x1360);
          *(undefined4 *)(iVar7 + 0x1a4) = *(undefined4 *)(local_40 + 0x1364);
          FUN_004681e0(&local_4c);
          *(undefined4 *)(iVar7 + 0x16c) = 0;
          *(undefined4 *)(iVar7 + 0x174) = 0;
          *(undefined4 *)(iVar7 + 0x170) = 0;
          puVar2 = *(undefined4 **)(iVar7 + 0x17c);
          for (puVar12 = *(undefined4 **)(iVar7 + 0x178); puVar12 != puVar2; puVar12 = puVar12 + 6)
          {
            if (7 < (uint)puVar12[5]) {
                    /* WARNING: Subroutine does not return */
              operator_delete((void *)*puVar12);
            }
            puVar12[5] = 7;
            puVar12[4] = 0;
            *(undefined2 *)puVar12 = 0;
          }
          *(undefined4 *)(iVar7 + 0x17c) = *(undefined4 *)(iVar7 + 0x178);
          *(undefined4 *)(iVar7 + 0x184) = 0;
        }
        puVar2 = local_4c;
        if (local_4c != (undefined4 *)0x0) {
          if (local_4c != local_48) {
            FUN_0046f990();
                    /* WARNING: Subroutine does not return */
            operator_delete((void *)*puVar2);
          }
                    /* WARNING: Subroutine does not return */
          operator_delete(local_4c);
        }
      }
    }
    else {
      local_3c = (int)piVar1 - (int)piVar10 >> 2;
      if (piVar10 != piVar1) {
        do {
          iVar7 = *piVar10;
          if (*(int *)(iVar7 + 0x188) == param_1) {
            if (iVar7 != 0) {
              if (param_2 != '\0') goto LAB_0048838c;
              cVar3 = FUN_004e6530(local_14);
              if (cVar3 == '\0') {
                uVar5 = FUN_004e6550();
                *(undefined4 *)(iVar7 + 0x16c) = uVar5;
              }
              else {
                *(int *)(iVar7 + 0x170) = *(int *)(iVar7 + 0x170) + 1;
                *(undefined4 *)(iVar7 + 0x16c) = 0;
                *(undefined4 *)(iVar7 + 0x174) = 0;
              }
              goto LAB_004889b4;
            }
            break;
          }
          piVar10 = piVar10 + 1;
        } while (piVar10 != piVar1);
        piVar10 = *(int **)(in_ECX + 0x80092c);
      }
      iVar8 = 0;
      iVar7 = local_3c;
      if (0 < local_3c) {
        do {
          iVar4 = *piVar10;
          piVar10 = piVar10 + 1;
          if (*(int *)(iVar4 + 0x188) == 0) {
            iVar8 = iVar4;
          }
          iVar7 = iVar7 + -1;
        } while (iVar7 != 0);
      }
      if (iVar8 != 0) {
LAB_0048838c:
        local_4c = (undefined4 *)0x0;
        local_48 = (undefined4 *)0x0;
        local_44 = 0;
        local_8 = 0;
        iVar7 = (int)(*(int *)(param_1 + 0x1b0) + (*(int *)(param_1 + 0x1b0) >> 0x1f & 0x3fU)) >> 6;
        iVar8 = (int)((*(int *)(param_1 + 0x1b4) >> 0x1f & 0x3fU) + *(int *)(param_1 + 0x1b4)) >> 6;
        if ((((-1 < iVar7) && (-1 < iVar8)) && (iVar7 < 0x400)) &&
           ((iVar8 < 0x400 &&
            (iVar7 = *(int *)(in_ECX + 0x3a0 + (iVar7 * 0x400 + iVar8) * 4), iVar7 != 0)))) {
          piVar10 = (int *)(iVar7 + 0x1403c);
          local_40 = 8;
          do {
            iVar7 = 8;
            do {
              if ((piVar10[-3] != 0) &&
                 (*piVar10 <= *(int *)(*(int *)(in_ECX + 0x8006d0) + 400) + 2)) {
                iVar8 = __alldiv(piVar10[-7],piVar10[-6],0x10000,0);
                iVar8 = (int)(iVar8 + (iVar8 >> 0x1f & 0xffU)) >> 8;
                iVar4 = __alldiv(piVar10[-9],piVar10[-8],0x10000,0);
                FUN_005fc160((int)(iVar4 + (iVar4 >> 0x1f & 0xffU)) >> 8,iVar8);
              }
              piVar10 = piVar10 + 0x1a;
              iVar7 = iVar7 + -1;
            } while (iVar7 != 0);
            local_40 = local_40 + -1;
          } while (local_40 != 0);
          local_40 = 0;
        }
      }
    }
  }
LAB_004889b4:
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}


/* FUN_00488b80 @ 00488b80  kind=gamemisc  attributed-by=caller-vote  size=7 */

undefined4 FUN_00488b80(void)

{
  int in_ECX;
  
  return *(undefined4 *)(in_ECX + 0x8000bc);
}


/* FUN_00488b90 @ 00488b90  kind=gamemisc  attributed-by=caller-vote  size=20 */

int FUN_00488b90(int param_1)

{
  if ((param_1 == 0) || (*(int *)(param_1 + 0x48) != 2)) {
    param_1 = 0;
  }
  return param_1;
}


/* FUN_00488d60 @ 00488d60  kind=gamemisc  attributed-by=caller-vote  size=226 */

void FUN_00488d60(float *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float *in_ECX;
  float fVar12;
  
  fVar1 = *param_1;
  fVar2 = param_1[1];
  fVar3 = param_1[2];
  fVar4 = in_ECX[1];
  fVar5 = in_ECX[2];
  fVar6 = in_ECX[5];
  fVar7 = in_ECX[9];
  fVar8 = in_ECX[6];
  fVar9 = in_ECX[0xd];
  fVar10 = in_ECX[10];
  fVar12 = 1.0 / (in_ECX[3] * fVar1 + in_ECX[7] * fVar2 + in_ECX[0xb] * fVar3 + in_ECX[0xf]);
  fVar11 = in_ECX[0xe];
  *param_1 = fVar12 * (in_ECX[4] * fVar2 + fVar1 * *in_ECX + in_ECX[8] * fVar3 + in_ECX[0xc]);
  param_1[1] = fVar12 * (fVar4 * fVar1 + fVar6 * fVar2 + fVar7 * fVar3 + fVar9);
  param_1[2] = fVar12 * (fVar5 * fVar1 + fVar8 * fVar2 + fVar10 * fVar3 + fVar11);
  return;
}


/* FUN_00488e50 @ 00488e50  kind=gamemisc  attributed-by=caller-vote  size=144 */

void FUN_00488e50(float *param_1,float *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float *in_ECX;
  
  fVar1 = *param_2;
  fVar2 = param_2[1];
  fVar3 = param_2[2];
  fVar4 = in_ECX[5];
  *param_1 = in_ECX[4] * fVar2 + fVar1 * *in_ECX + in_ECX[8] * fVar3;
  fVar5 = in_ECX[6];
  param_1[1] = in_ECX[1] * fVar1 + fVar4 * fVar2 + in_ECX[9] * fVar3;
  param_1[2] = in_ECX[2] * fVar1 + fVar5 * fVar2 + in_ECX[10] * fVar3;
  return;
}


