// Helpers_01 (world) -- cube. 63 functions. Bodies = Ghidra pseudo-C.
// Attribution: see ../attribution.tsv. Toolchain of the original: MSVC 11.0 (VS2012).
#include "Helpers_01.h"

/* FUN_005c4230 @ 005c4230  kind=gamemisc  attributed-by=caller-vote  size=201 */

void FUN_005c4230(uint param_1)

{
  uint uVar1;
  int *in_ECX;
  void *pvVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  uVar1 = param_1;
  local_8 = 0xffffffff;
  puStack_c = &LAB_006f3db0;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  pvVar2 = (void *)0x0;
  if (param_1 != 0) {
    if (param_1 < 0x15555556) {
      pvVar2 = operator_new(param_1 * 0xc);
      if (pvVar2 != (void *)0x0) goto LAB_005c428f;
    }
                    /* WARNING: Subroutine does not return */
    std::_Xbad_alloc();
  }
LAB_005c428f:
  local_8 = 0;
  FUN_005c37d0(*in_ECX,in_ECX[1],pvVar2,(int)&param_1 + 3,0,param_1);
  param_1 = (in_ECX[1] - *in_ECX) / 0xc;
  if ((void *)*in_ECX != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    operator_delete((void *)*in_ECX);
  }
  *in_ECX = (int)pvVar2;
  in_ECX[2] = (int)((int)pvVar2 + uVar1 * 0xc);
  in_ECX[1] = (int)((int)pvVar2 + param_1 * 0xc);
  ExceptionList = local_10;
  return;
}


/* FUN_005c4320 @ 005c4320  kind=gamemisc  attributed-by=caller-vote  size=162 */

void FUN_005c4320(uint param_1)

{
  uint uVar1;
  int *in_ECX;
  
  if (param_1 <= (uint)((in_ECX[2] - in_ECX[1]) / 0x140)) {
    return;
  }
  if (0xccccccU - (in_ECX[1] - *in_ECX) / 0x140 < param_1) {
                    /* WARNING: Subroutine does not return */
    std::_Xlength_error("vector<T> too long");
  }
  uVar1 = (in_ECX[2] - *in_ECX) / 0x140;
  if (0xcccccc - (uVar1 >> 1) < uVar1) {
    FUN_005c4040();
    return;
  }
  FUN_005c4040();
  return;
}


/* FUN_005c43d0 @ 005c43d0  kind=gamemisc  attributed-by=caller-vote  size=162 */

void FUN_005c43d0(uint param_1)

{
  uint uVar1;
  int *in_ECX;
  
  if (param_1 <= (uint)((in_ECX[2] - in_ECX[1]) / 0x18)) {
    return;
  }
  if (0xaaaaaaaU - (in_ECX[1] - *in_ECX) / 0x18 < param_1) {
                    /* WARNING: Subroutine does not return */
    std::_Xlength_error("vector<T> too long");
  }
  uVar1 = (in_ECX[2] - *in_ECX) / 0x18;
  if (0xaaaaaaa - (uVar1 >> 1) < uVar1) {
    FUN_005c4130();
    return;
  }
  FUN_005c4130();
  return;
}


/* FUN_005c4480 @ 005c4480  kind=gamemisc  attributed-by=caller-vote  size=159 */

void FUN_005c4480(uint param_1)

{
  uint uVar1;
  int *in_ECX;
  
  if (param_1 <= (uint)((in_ECX[2] - in_ECX[1]) / 0xc)) {
    return;
  }
  if (0x15555555U - (in_ECX[1] - *in_ECX) / 0xc < param_1) {
                    /* WARNING: Subroutine does not return */
    std::_Xlength_error("vector<T> too long");
  }
  uVar1 = (in_ECX[2] - *in_ECX) / 0xc;
  if (0x15555555 - (uVar1 >> 1) < uVar1) {
    FUN_005c4230();
    return;
  }
  FUN_005c4230();
  return;
}


/* FUN_005c46f0 @ 005c46f0  kind=gamemisc  attributed-by=caller-vote  size=127 */

undefined1 * FUN_005c46f0(int param_1,int param_2,int param_3)

{
  int in_ECX;
  
  FUN_005fa3c0(&param_1,&param_2,&param_3);
  if ((((-1 < param_1) && (-1 < param_2)) && (-1 < param_3)) &&
     (((param_1 < *(int *)(in_ECX + 0xc) && (param_2 < *(int *)(in_ECX + 0x10))) &&
      (param_3 < *(int *)(in_ECX + 0x14))))) {
    return (undefined1 *)
           (*(int *)(in_ECX + 0x18) +
           ((*(int *)(in_ECX + 0x10) * param_3 + param_2) * *(int *)(in_ECX + 0xc) + param_1) * 2);
  }
  if ((DAT_0076de04 & 1) == 0) {
    DAT_0076de04 = DAT_0076de04 | 1;
    DAT_0076de01 = 0;
  }
  DAT_0076de00 = 1;
  return &DAT_0076de00;
}


/* FUN_005c4770 @ 005c4770  kind=gamemisc  attributed-by=caller-vote  size=134 */

float * FUN_005c4770(float *param_1,float *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  
  fVar1 = *param_2;
  fVar2 = param_2[1];
  fVar3 = param_2[2];
  *param_1 = fVar1;
  param_1[1] = fVar2;
  param_1[2] = fVar3;
  if (0.0 <= fVar1) {
    if (255.0 < fVar1) {
      *param_1 = 255.0;
    }
  }
  else {
    *param_1 = 0.0;
  }
  if (fVar2 < 0.0) {
    param_1[1] = 0.0;
  }
  if (255.0 < param_1[1]) {
    param_1[1] = 255.0;
  }
  if (fVar3 < 0.0) {
    param_1[2] = 0.0;
  }
  if (255.0 < param_1[2]) {
    param_1[2] = 255.0;
  }
  return param_1;
}


/* FUN_005c52a0 @ 005c52a0  kind=gamemisc  attributed-by=caller-vote  size=1085 */

void FUN_005c52a0(int *param_1,int *param_2,int *param_3,int *param_4)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  bool bVar5;
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  uint local_8;
  
  local_8 = DAT_0076aa78 ^ (uint)&stack0xfffffffc;
  iVar2 = *param_1 + *param_2;
  if ((*param_3 < iVar2) && (*param_1 < *param_4 + *param_3)) {
    iVar3 = *param_4 / 2 + *param_3;
    if (iVar3 < *param_1) {
      iVar3 = *param_1;
    }
    if (iVar2 <= iVar3) {
      iVar3 = iVar2 + -1;
    }
    local_10 = param_3[1];
    iVar2 = param_1[1];
    local_20 = iVar3;
    local_14 = iVar3;
    if (local_10 < iVar2) {
      local_10 = param_4[1] + local_10;
      local_c = param_3[2];
      local_18 = param_1[2];
      local_1c = iVar2;
      FUN_005ef6d0(&local_20,&local_14);
      uVar1 = rand();
      uVar1 = uVar1 & 0x80000001;
      bVar5 = uVar1 == 0;
      if ((int)uVar1 < 0) {
        bVar5 = (uVar1 - 1 | 0xfffffffe) == 0xffffffff;
      }
      if (((!bVar5) && (*param_1 < iVar3)) && (*param_3 < iVar3)) {
        local_1c = param_3[1] + param_4[1];
        local_20 = iVar3 + -1;
        local_18 = param_3[2];
        local_10 = param_1[1];
        local_c = param_1[2];
        local_14 = local_20;
        FUN_005ef6d0(&local_14,&local_20);
      }
      uVar1 = rand();
      uVar1 = uVar1 & 0x80000001;
      bVar5 = uVar1 == 0;
      if ((int)uVar1 < 0) {
        bVar5 = (uVar1 - 1 | 0xfffffffe) == 0xffffffff;
      }
      if (((bVar5) || (*param_2 + -1 + *param_1 <= iVar3)) || (*param_4 + -1 + *param_3 <= iVar3))
      goto LAB_005c56ca;
      local_1c = param_3[1] + param_4[1];
      local_20 = iVar3 + 1;
      local_18 = param_3[2];
      local_10 = param_1[1];
      local_14 = local_20;
    }
    else {
      local_1c = local_10 + -1;
      local_18 = param_3[2];
      local_10 = param_2[1] + -1 + iVar2;
      local_c = param_1[2];
      FUN_005ef6d0(&local_14,&local_20);
      uVar1 = rand();
      uVar1 = uVar1 & 0x80000001;
      bVar5 = uVar1 == 0;
      if ((int)uVar1 < 0) {
        bVar5 = (uVar1 - 1 | 0xfffffffe) == 0xffffffff;
      }
      if (((!bVar5) && (*param_1 < iVar3)) && (*param_3 < iVar3)) {
        local_1c = param_3[1] + -1;
        local_18 = param_3[2];
        local_20 = iVar3 + -1;
        local_10 = param_1[1] + param_2[1] + -1;
        local_c = param_1[2];
        local_14 = local_20;
        FUN_005ef6d0(&local_14,&local_20);
      }
      uVar1 = rand();
      uVar1 = uVar1 & 0x80000001;
      bVar5 = uVar1 == 0;
      if ((int)uVar1 < 0) {
        bVar5 = (uVar1 - 1 | 0xfffffffe) == 0xffffffff;
      }
      if (((bVar5) || (*param_2 + -1 + *param_1 <= iVar3)) || (*param_4 + -1 + *param_3 <= iVar3))
      goto LAB_005c56ca;
      local_1c = param_3[1] + -1;
      local_18 = param_3[2];
      local_10 = param_1[1] + param_2[1] + -1;
      local_20 = iVar3 + 1;
      local_14 = iVar3 + 1;
    }
  }
  else {
    iVar3 = param_2[1] + param_1[1];
    if ((iVar3 <= param_3[1]) || (param_3[1] + param_4[1] <= param_1[1])) goto LAB_005c56ca;
    iVar4 = param_4[1] / 2 + param_3[1];
    if (iVar4 < param_1[1]) {
      iVar4 = param_1[1];
    }
    if (iVar3 <= iVar4) {
      iVar4 = iVar3 + -1;
    }
    local_14 = *param_1;
    local_20 = *param_3;
    local_1c = iVar4;
    local_10 = iVar4;
    if (local_20 < local_14) {
      local_20 = *param_4 + local_20;
      local_18 = param_3[2];
      local_c = param_1[2];
      FUN_005ef6d0(&local_14,&local_20);
      uVar1 = rand();
      uVar1 = uVar1 & 0x80000001;
      bVar5 = uVar1 == 0;
      if ((int)uVar1 < 0) {
        bVar5 = (uVar1 - 1 | 0xfffffffe) == 0xffffffff;
      }
      if (((!bVar5) && (param_1[1] < iVar4)) && (param_3[1] < iVar4)) {
        local_20 = *param_3 + *param_4;
        local_1c = iVar4 + -1;
        local_18 = param_3[2];
        local_14 = *param_1;
        local_c = param_1[2];
        local_10 = local_1c;
        FUN_005ef6d0(&local_14,&local_20);
      }
      uVar1 = rand();
      uVar1 = uVar1 & 0x80000001;
      bVar5 = uVar1 == 0;
      if ((int)uVar1 < 0) {
        bVar5 = (uVar1 - 1 | 0xfffffffe) == 0xffffffff;
      }
      if (((bVar5) || (param_1[1] + -1 + param_2[1] <= iVar4)) ||
         (*param_3 + *param_4 + -1 <= iVar4)) goto LAB_005c56ca;
      local_18 = param_3[2];
      local_1c = iVar4 + 1;
      local_20 = *param_3 + *param_4;
      local_14 = *param_1;
      local_10 = local_1c;
    }
    else {
      local_20 = local_20 + -1;
      local_18 = param_3[2];
      local_14 = iVar2 + -1;
      local_c = param_1[2];
      FUN_005ef6d0(&local_14,&local_20);
      uVar1 = rand();
      uVar1 = uVar1 & 0x80000001;
      bVar5 = uVar1 == 0;
      if ((int)uVar1 < 0) {
        bVar5 = (uVar1 - 1 | 0xfffffffe) == 0xffffffff;
      }
      if (((!bVar5) && (param_1[1] < iVar4)) && (param_3[1] < iVar4)) {
        local_20 = *param_3 + -1;
        local_18 = param_3[2];
        local_14 = *param_2 + *param_1 + -1;
        local_c = param_1[2];
        local_1c = iVar4 + -1;
        local_10 = local_1c;
        FUN_005ef6d0(&local_14,&local_20);
      }
      uVar1 = rand();
      uVar1 = uVar1 & 0x80000001;
      bVar5 = uVar1 == 0;
      if ((int)uVar1 < 0) {
        bVar5 = (uVar1 - 1 | 0xfffffffe) == 0xffffffff;
      }
      if (((bVar5) || (iVar2 = *param_2 + -1 + *param_1, iVar2 <= iVar4)) ||
         (*param_4 + -1 + *param_3 <= iVar4)) goto LAB_005c56ca;
      local_20 = *param_3 + -1;
      local_18 = param_3[2];
      local_1c = iVar4 + 1;
      local_14 = iVar2;
      local_10 = local_1c;
    }
  }
  local_c = param_1[2];
  FUN_005ef6d0(&local_14,&local_20);
LAB_005c56ca:
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


/* FUN_005c8310 @ 005c8310  kind=gamemisc  attributed-by=caller-vote  size=50 */

float10 FUN_005c8310(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  float10 fVar2;
  
  iVar1 = FUN_004347a0(param_1,param_2,param_3);
  if (iVar1 != 0) {
    return (float10)*(float *)(iVar1 + 4);
  }
  fVar2 = (float10)FUN_005c4800(param_1,param_2);
  return fVar2;
}


/* FUN_005c8350 @ 005c8350  kind=gamemisc  attributed-by=caller-vote  size=50 */

float10 FUN_005c8350(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  float10 fVar2;
  
  iVar1 = FUN_004347a0(param_1,param_2,param_3);
  if (iVar1 != 0) {
    return (float10)*(float *)(iVar1 + 8);
  }
  fVar2 = (float10)FUN_005c4dd0(param_1,param_2);
  return fVar2;
}


/* FUN_005c8390 @ 005c8390  kind=gamemisc  attributed-by=caller-vote  size=6000 */

/* WARNING: Removing unreachable block (ram,0x005c9891) */
/* WARNING: Removing unreachable block (ram,0x005c955c) */
/* WARNING: Removing unreachable block (ram,0x005c934a) */
/* WARNING: Removing unreachable block (ram,0x005c9131) */
/* WARNING: Removing unreachable block (ram,0x005c8f1f) */
/* WARNING: Removing unreachable block (ram,0x005c8d06) */
/* WARNING: Removing unreachable block (ram,0x005c8af4) */
/* WARNING: Removing unreachable block (ram,0x005c88e2) */
/* WARNING: Removing unreachable block (ram,0x005c86c9) */
/* WARNING: Removing unreachable block (ram,0x005c8517) */
/* WARNING: Removing unreachable block (ram,0x005c85c0) */
/* WARNING: Removing unreachable block (ram,0x005c87d2) */
/* WARNING: Removing unreachable block (ram,0x005c89eb) */
/* WARNING: Removing unreachable block (ram,0x005c8bfd) */
/* WARNING: Removing unreachable block (ram,0x005c8e16) */
/* WARNING: Removing unreachable block (ram,0x005c9028) */
/* WARNING: Removing unreachable block (ram,0x005c923a) */
/* WARNING: Removing unreachable block (ram,0x005c9453) */
/* WARNING: Removing unreachable block (ram,0x005c9665) */
/* WARNING: Removing unreachable block (ram,0x005c976e) */
/* WARNING: Removing unreachable block (ram,0x005c99b4) */
/* WARNING: Removing unreachable block (ram,0x005c9166) */
/* WARNING: Removing unreachable block (ram,0x005c8917) */
/* WARNING: Removing unreachable block (ram,0x005c8b29) */
/* WARNING: Removing unreachable block (ram,0x005c937f) */
/* WARNING: Removing unreachable block (ram,0x005c86fe) */
/* WARNING: Removing unreachable block (ram,0x005c969a) */
/* WARNING: Removing unreachable block (ram,0x005c926f) */
/* WARNING: Removing unreachable block (ram,0x005c8e4b) */
/* WARNING: Removing unreachable block (ram,0x005c8a20) */
/* WARNING: Removing unreachable block (ram,0x005c85f5) */
/* WARNING: Removing unreachable block (ram,0x005c8807) */
/* WARNING: Removing unreachable block (ram,0x005c8c32) */
/* WARNING: Removing unreachable block (ram,0x005c905d) */
/* WARNING: Removing unreachable block (ram,0x005c9488) */
/* WARNING: Removing unreachable block (ram,0x005c98c6) */
/* WARNING: Removing unreachable block (ram,0x005c8d3b) */
/* WARNING: Removing unreachable block (ram,0x005c99e9) */
/* WARNING: Removing unreachable block (ram,0x005c9591) */
/* WARNING: Removing unreachable block (ram,0x005c97a3) */
/* WARNING: Removing unreachable block (ram,0x005c8f54) */
/* WARNING: Removing unreachable block (ram,0x005c9ac6) */

void FUN_005c8390(void)

{
  uint uVar1;
  int iVar2;
  undefined1 *puVar3;
  uint uVar4;
  int iVar5;
  undefined2 uVar6;
  int iVar7;
  byte bVar8;
  float10 fVar9;
  float10 fVar10;
  int local_144;
  int local_130;
  undefined1 local_12c;
  undefined1 local_12b;
  int local_128;
  undefined4 local_124;
  byte local_120;
  undefined2 local_11f;
  undefined2 local_11c;
  undefined1 local_118 [256];
  undefined4 local_18;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_006f3ddb;
  local_10 = ExceptionList;
  uVar1 = DAT_0076aa78 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_144 = 0;
  local_14 = uVar1;
  do {
    local_8 = 0xffffffff;
    fVar9 = (float10)FUN_004462f0((float)local_144 / 30.0,uVar1);
    fVar10 = (float10)FUN_004462f0(((float)local_144 + 0.99999) / 30.0);
    iVar2 = rand();
    iVar2 = (int)fVar9 + iVar2 % (((int)fVar10 - (int)fVar9) + 1);
    if (iVar2 < 1) {
      iVar2 = 1;
    }
    uVar6 = (undefined2)iVar2;
    if (local_144 == 0) {
      uVar6 = 1;
    }
    local_8 = 0;
    local_12b = 0;
    local_124 = 0;
    local_18 = 0;
    memset(local_118,0,0x100);
    local_11f = 0x101;
    local_12c = 7;
    local_11c = uVar6;
    rand();
    iVar2 = rand();
    bVar8 = iVar2 % 100 == 0;
    iVar2 = rand();
    if (iVar2 % 1000 == 0) {
      bVar8 = bVar8 + 1;
    }
    iVar2 = rand();
    if (iVar2 % 10000 == 0) {
      bVar8 = bVar8 + 1;
    }
    local_120 = bVar8;
    if (4 < bVar8) {
      local_120 = 4;
    }
    local_128 = rand();
    FUN_004c6940(1);
    local_12c = 4;
    rand();
    iVar2 = rand();
    bVar8 = iVar2 % 100 == 0;
    iVar2 = rand();
    if (iVar2 % 1000 == 0) {
      bVar8 = bVar8 + 1;
    }
    iVar2 = rand();
    if (iVar2 % 10000 == 0) {
      bVar8 = bVar8 + 1;
    }
    local_120 = bVar8;
    if (4 < bVar8) {
      local_120 = 4;
    }
    local_128 = rand();
    if (&local_12c < (undefined1 *)0x118) {
      puVar3 = (undefined1 *)(((int)&local_12c / 0x118) * 0x118);
    }
    else {
      puVar3 = &local_12c;
    }
    FUN_0040ee70(puVar3);
    local_12c = 5;
    rand();
    iVar2 = rand();
    bVar8 = iVar2 % 100 == 0;
    iVar2 = rand();
    if (iVar2 % 1000 == 0) {
      bVar8 = bVar8 + 1;
    }
    iVar2 = rand();
    if (iVar2 % 10000 == 0) {
      bVar8 = bVar8 + 1;
    }
    local_120 = bVar8;
    if (4 < bVar8) {
      local_120 = 4;
    }
    local_128 = rand();
    if (&local_12c < (undefined1 *)0x230) {
      puVar3 = (undefined1 *)(((int)&local_12c / 0x118) * 0x118);
    }
    else {
      puVar3 = &local_12c;
    }
    FUN_0040ee70(puVar3);
    local_12c = 6;
    rand();
    iVar2 = rand();
    bVar8 = iVar2 % 100 == 0;
    iVar2 = rand();
    if (iVar2 % 1000 == 0) {
      bVar8 = bVar8 + 1;
    }
    iVar2 = rand();
    if (iVar2 % 10000 == 0) {
      bVar8 = bVar8 + 1;
    }
    local_120 = bVar8;
    if (4 < bVar8) {
      local_120 = 4;
    }
    local_128 = rand();
    if (&local_12c < (undefined1 *)0x348) {
      puVar3 = (undefined1 *)(((int)&local_12c / 0x118) * 0x118);
    }
    else {
      puVar3 = &local_12c;
    }
    FUN_0040ee70(puVar3);
    local_11f._0_1_ = 0x19;
    local_12c = 7;
    rand();
    iVar2 = rand();
    bVar8 = iVar2 % 100 == 0;
    iVar2 = rand();
    if (iVar2 % 1000 == 0) {
      bVar8 = bVar8 + 1;
    }
    iVar2 = rand();
    if (iVar2 % 10000 == 0) {
      bVar8 = bVar8 + 1;
    }
    local_120 = bVar8;
    if (4 < bVar8) {
      local_120 = 4;
    }
    local_128 = rand();
    if (&local_12c < (undefined1 *)0x460) {
      puVar3 = (undefined1 *)(((int)&local_12c / 0x118) * 0x118);
    }
    else {
      puVar3 = &local_12c;
    }
    FUN_0040ee70(puVar3);
    local_12c = 7;
    rand();
    iVar2 = rand();
    bVar8 = iVar2 % 100 == 0;
    iVar2 = rand();
    if (iVar2 % 1000 == 0) {
      bVar8 = bVar8 + 1;
    }
    iVar2 = rand();
    if (iVar2 % 10000 == 0) {
      bVar8 = bVar8 + 1;
    }
    local_120 = bVar8;
    if (4 < bVar8) {
      local_120 = 4;
    }
    local_128 = rand();
    if (&local_12c < (undefined1 *)0x578) {
      puVar3 = (undefined1 *)(((int)&local_12c / 0x118) * 0x118);
    }
    else {
      puVar3 = &local_12c;
    }
    FUN_0040ee70(puVar3);
    local_12c = 4;
    rand();
    iVar2 = rand();
    bVar8 = iVar2 % 100 == 0;
    iVar2 = rand();
    if (iVar2 % 1000 == 0) {
      bVar8 = bVar8 + 1;
    }
    iVar2 = rand();
    if (iVar2 % 10000 == 0) {
      bVar8 = bVar8 + 1;
    }
    local_120 = bVar8;
    if (4 < bVar8) {
      local_120 = 4;
    }
    local_128 = rand();
    if (&local_12c < (undefined1 *)0x690) {
      puVar3 = (undefined1 *)(((int)&local_12c / 0x118) * 0x118);
    }
    else {
      puVar3 = &local_12c;
    }
    FUN_0040ee70(puVar3);
    local_12c = 5;
    rand();
    iVar2 = rand();
    bVar8 = iVar2 % 100 == 0;
    iVar2 = rand();
    if (iVar2 % 1000 == 0) {
      bVar8 = bVar8 + 1;
    }
    iVar2 = rand();
    if (iVar2 % 10000 == 0) {
      bVar8 = bVar8 + 1;
    }
    local_120 = bVar8;
    if (4 < bVar8) {
      local_120 = 4;
    }
    local_128 = rand();
    if (&local_12c < (undefined1 *)0x7a8) {
      puVar3 = (undefined1 *)(((int)&local_12c / 0x118) * 0x118);
    }
    else {
      puVar3 = &local_12c;
    }
    FUN_0040ee70(puVar3);
    local_12c = 6;
    rand();
    iVar2 = rand();
    bVar8 = iVar2 % 100 == 0;
    iVar2 = rand();
    if (iVar2 % 1000 == 0) {
      bVar8 = bVar8 + 1;
    }
    iVar2 = rand();
    if (iVar2 % 10000 == 0) {
      bVar8 = bVar8 + 1;
    }
    local_120 = bVar8;
    if (4 < bVar8) {
      local_120 = 4;
    }
    local_128 = rand();
    if (&local_12c < (undefined1 *)0x8c0) {
      puVar3 = (undefined1 *)(((int)&local_12c / 0x118) * 0x118);
    }
    else {
      puVar3 = &local_12c;
    }
    FUN_0040ee70(puVar3);
    local_11f._0_1_ = 0x1a;
    local_12c = 7;
    rand();
    iVar2 = rand();
    bVar8 = iVar2 % 100 == 0;
    iVar2 = rand();
    if (iVar2 % 1000 == 0) {
      bVar8 = bVar8 + 1;
    }
    iVar2 = rand();
    if (iVar2 % 10000 == 0) {
      bVar8 = bVar8 + 1;
    }
    local_120 = bVar8;
    if (4 < bVar8) {
      local_120 = 4;
    }
    local_128 = rand();
    if (&local_12c < (undefined1 *)0x9d8) {
      puVar3 = (undefined1 *)(((int)&local_12c / 0x118) * 0x118);
    }
    else {
      puVar3 = &local_12c;
    }
    FUN_0040ee70(puVar3);
    local_12c = 7;
    rand();
    iVar2 = rand();
    bVar8 = iVar2 % 100 == 0;
    iVar2 = rand();
    if (iVar2 % 1000 == 0) {
      bVar8 = bVar8 + 1;
    }
    iVar2 = rand();
    if (iVar2 % 10000 == 0) {
      bVar8 = bVar8 + 1;
    }
    local_120 = bVar8;
    if (4 < bVar8) {
      local_120 = 4;
    }
    local_128 = rand();
    if (&local_12c < (undefined1 *)0xaf0) {
      puVar3 = (undefined1 *)(((int)&local_12c / 0x118) * 0x118);
    }
    else {
      puVar3 = &local_12c;
    }
    FUN_0040ee70(puVar3);
    local_12c = 4;
    rand();
    iVar2 = rand();
    bVar8 = iVar2 % 100 == 0;
    iVar2 = rand();
    if (iVar2 % 1000 == 0) {
      bVar8 = bVar8 + 1;
    }
    iVar2 = rand();
    if (iVar2 % 10000 == 0) {
      bVar8 = bVar8 + 1;
    }
    local_120 = bVar8;
    if (4 < bVar8) {
      local_120 = 4;
    }
    local_128 = rand();
    if (&local_12c < (undefined1 *)0xc08) {
      puVar3 = (undefined1 *)(((int)&local_12c / 0x118) * 0x118);
    }
    else {
      puVar3 = &local_12c;
    }
    FUN_0040ee70(puVar3);
    local_12c = 5;
    rand();
    iVar2 = rand();
    bVar8 = iVar2 % 100 == 0;
    iVar2 = rand();
    if (iVar2 % 1000 == 0) {
      bVar8 = bVar8 + 1;
    }
    iVar2 = rand();
    if (iVar2 % 10000 == 0) {
      bVar8 = bVar8 + 1;
    }
    local_120 = bVar8;
    if (4 < bVar8) {
      local_120 = 4;
    }
    local_128 = rand();
    if (&local_12c < (undefined1 *)0xd20) {
      puVar3 = (undefined1 *)(((int)&local_12c / 0x118) * 0x118);
    }
    else {
      puVar3 = &local_12c;
    }
    FUN_0040ee70(puVar3);
    local_12c = 6;
    rand();
    iVar2 = rand();
    bVar8 = iVar2 % 100 == 0;
    iVar2 = rand();
    if (iVar2 % 1000 == 0) {
      bVar8 = bVar8 + 1;
    }
    iVar2 = rand();
    if (iVar2 % 10000 == 0) {
      bVar8 = bVar8 + 1;
    }
    local_120 = bVar8;
    if (4 < bVar8) {
      local_120 = 4;
    }
    local_128 = rand();
    if (&local_12c < (undefined1 *)0xe38) {
      puVar3 = (undefined1 *)(((int)&local_12c / 0x118) * 0x118);
    }
    else {
      puVar3 = &local_12c;
    }
    FUN_0040ee70(puVar3);
    local_11f._0_1_ = 0x1b;
    local_12c = 7;
    rand();
    iVar2 = rand();
    bVar8 = iVar2 % 100 == 0;
    iVar2 = rand();
    if (iVar2 % 1000 == 0) {
      bVar8 = bVar8 + 1;
    }
    iVar2 = rand();
    if (iVar2 % 10000 == 0) {
      bVar8 = bVar8 + 1;
    }
    local_120 = bVar8;
    if (4 < bVar8) {
      local_120 = 4;
    }
    local_128 = rand();
    if (&local_12c < (undefined1 *)0xf50) {
      puVar3 = (undefined1 *)(((int)&local_12c / 0x118) * 0x118);
    }
    else {
      puVar3 = &local_12c;
    }
    FUN_0040ee70(puVar3);
    local_12c = 7;
    rand();
    iVar2 = rand();
    bVar8 = iVar2 % 100 == 0;
    iVar2 = rand();
    if (iVar2 % 1000 == 0) {
      bVar8 = bVar8 + 1;
    }
    iVar2 = rand();
    if (iVar2 % 10000 == 0) {
      bVar8 = bVar8 + 1;
    }
    local_120 = bVar8;
    if (4 < bVar8) {
      local_120 = 4;
    }
    local_128 = rand();
    if (&local_12c < (undefined1 *)0x1068) {
      puVar3 = (undefined1 *)(((int)&local_12c / 0x118) * 0x118);
    }
    else {
      puVar3 = &local_12c;
    }
    FUN_0040ee70(puVar3);
    local_12c = 4;
    rand();
    iVar2 = rand();
    bVar8 = iVar2 % 100 == 0;
    iVar2 = rand();
    if (iVar2 % 1000 == 0) {
      bVar8 = bVar8 + 1;
    }
    iVar2 = rand();
    if (iVar2 % 10000 == 0) {
      bVar8 = bVar8 + 1;
    }
    local_120 = bVar8;
    if (4 < bVar8) {
      local_120 = 4;
    }
    local_128 = rand();
    if (&local_12c < (undefined1 *)0x1180) {
      puVar3 = (undefined1 *)(((int)&local_12c / 0x118) * 0x118);
    }
    else {
      puVar3 = &local_12c;
    }
    FUN_0040ee70(puVar3);
    local_12c = 5;
    rand();
    iVar2 = rand();
    bVar8 = iVar2 % 100 == 0;
    iVar2 = rand();
    if (iVar2 % 1000 == 0) {
      bVar8 = bVar8 + 1;
    }
    iVar2 = rand();
    if (iVar2 % 10000 == 0) {
      bVar8 = bVar8 + 1;
    }
    local_120 = bVar8;
    if (4 < bVar8) {
      local_120 = 4;
    }
    local_128 = rand();
    if (&local_12c < (undefined1 *)0x1298) {
      puVar3 = (undefined1 *)(((int)&local_12c / 0x118) * 0x118);
    }
    else {
      puVar3 = &local_12c;
    }
    FUN_0040ee70(puVar3);
    local_12c = 6;
    rand();
    iVar2 = rand();
    bVar8 = iVar2 % 100 == 0;
    iVar2 = rand();
    if (iVar2 % 1000 == 0) {
      bVar8 = bVar8 + 1;
    }
    iVar2 = rand();
    if (iVar2 % 10000 == 0) {
      bVar8 = bVar8 + 1;
    }
    local_120 = bVar8;
    if (4 < bVar8) {
      local_120 = 4;
    }
    local_128 = rand();
    if (&local_12c < (undefined1 *)0x13b0) {
      puVar3 = (undefined1 *)(((int)&local_12c / 0x118) * 0x118);
    }
    else {
      puVar3 = &local_12c;
    }
    FUN_0040ee70(puVar3);
    local_12c = 8;
    uVar4 = rand();
    uVar4 = uVar4 & 0x80000001;
    if ((int)uVar4 < 0) {
      uVar4 = (uVar4 - 1 | 0xfffffffe) + 1;
    }
    local_11f._0_1_ = '\f' - (uVar4 != 0);
    rand();
    iVar2 = rand();
    bVar8 = iVar2 % 100 == 0;
    iVar2 = rand();
    if (iVar2 % 1000 == 0) {
      bVar8 = bVar8 + 1;
    }
    iVar2 = rand();
    if (iVar2 % 10000 == 0) {
      bVar8 = bVar8 + 1;
    }
    local_120 = bVar8;
    if (4 < bVar8) {
      local_120 = 4;
    }
    local_128 = rand();
    if (&local_12c < (undefined1 *)0x14c8) {
      puVar3 = (undefined1 *)(((int)&local_12c / 0x118) * 0x118);
    }
    else {
      puVar3 = &local_12c;
    }
    FUN_0040ee70(puVar3);
    local_12c = 9;
    uVar4 = rand();
    uVar4 = uVar4 & 0x80000001;
    if ((int)uVar4 < 0) {
      uVar4 = (uVar4 - 1 | 0xfffffffe) + 1;
    }
    local_11f = CONCAT11(local_11f._1_1_,'\f' - (uVar4 != 0));
    rand();
    iVar2 = rand();
    bVar8 = iVar2 % 100 == 0;
    iVar2 = rand();
    if (iVar2 % 1000 == 0) {
      bVar8 = bVar8 + 1;
    }
    iVar2 = rand();
    if (iVar2 % 10000 == 0) {
      bVar8 = bVar8 + 1;
    }
    local_120 = bVar8;
    if (4 < bVar8) {
      local_120 = 4;
    }
    local_128 = rand();
    if (&local_12c < (undefined1 *)0x15e0) {
      puVar3 = (undefined1 *)(((int)&local_12c / 0x118) * 0x118);
    }
    else {
      puVar3 = &local_12c;
    }
    FUN_0040ee70(puVar3);
    iVar7 = 0x16f8;
    iVar2 = rand();
    local_130 = 0;
    iVar2 = iVar2 % 3 + 1;
    if (0 < iVar2) {
      do {
        if (iVar7 == 0) break;
        uVar4 = rand();
        iVar5 = (uVar4 % (uint)(iVar7 / 0x118)) * 0x118;
        FUN_0046ebe0(iVar5,0xffffffff);
        FUN_005c1fa0(iVar5 + 0x118,iVar7,iVar5,iVar2);
        local_130 = local_130 + 1;
        iVar7 = iVar7 + -0x118;
      } while (local_130 < iVar2);
    }
    local_8 = 0xffffffff;
    local_144 = local_144 + 1;
    if (0x1d < local_144) {
      ExceptionList = local_10;
      __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
      return;
    }
  } while( true );
}


/* FUN_005c9b30 @ 005c9b30  kind=gamemisc  attributed-by=caller-vote  size=1083 */

void FUN_005c9b30(void)

{
  char cVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  undefined4 uVar6;
  bool bVar7;
  float10 fVar8;
  float10 fVar9;
  int local_35c;
  int local_358;
  undefined1 local_350 [280];
  undefined1 local_238 [280];
  undefined2 local_120;
  undefined4 local_11c;
  uint local_118;
  undefined2 local_114;
  undefined1 local_112;
  undefined2 local_110;
  undefined1 local_10c [256];
  undefined4 local_c;
  uint local_8;
  
  local_8 = DAT_0076aa78 ^ (uint)&stack0xfffffffc;
  local_35c = 0;
  do {
    fVar8 = (float10)FUN_004462f0((float)local_35c / 30.0);
    fVar9 = (float10)FUN_004462f0(((float)local_35c + 0.99999) / 30.0);
    iVar2 = rand();
    local_358 = (int)fVar8 + iVar2 % (((int)fVar9 - (int)fVar8) + 1);
    if (local_358 < 1) {
      local_358 = 1;
    }
    if (local_35c == 0) {
      local_358 = 1;
      local_11c = 0;
      local_118 = 0;
      local_114 = local_114 & 0xff00;
      local_112 = 0;
      local_c = 0;
      memset(local_10c,0,0x100);
      local_120 = 0xc0b;
      local_114 = CONCAT11(0x18,(undefined1)local_114);
      local_110 = 1;
      FUN_0046ebe0(&local_120,0);
      local_120 = 0x18;
      local_114 = CONCAT11(1,(undefined1)local_114);
      local_110 = 1;
      FUN_0046ebe0(&local_120,0);
      cVar1 = '\x01';
      iVar2 = 10;
      do {
        iVar3 = rand();
        if (iVar3 % iVar2 == 0) {
          local_110 = 1;
          local_120 = 0x18;
          local_114 = CONCAT11(1,cVar1);
          FUN_0046ebe0(&local_120,0);
        }
        cVar1 = cVar1 + '\x01';
        iVar2 = iVar2 + 10;
      } while (iVar2 < 0x32);
      local_114 = 0x200;
      local_120 = 0x17;
      FUN_0046ebe0(&local_120,0);
      local_120._1_1_ = 1;
      local_114 = CONCAT11(2,(undefined1)local_114);
      FUN_0046ebe0(&local_120,0);
      local_120 = CONCAT11(local_120._1_1_,0x14);
      local_114 = local_114 & 0xff;
      local_110 = 1;
      iVar2 = rand();
      switch(iVar2 % 6) {
      case 0:
        local_120 = CONCAT11(0x22,(byte)local_120);
        break;
      case 1:
        local_120 = CONCAT11(0x23,(byte)local_120);
        break;
      case 2:
        local_120 = CONCAT11(0x13,(byte)local_120);
        break;
      case 3:
        local_120 = CONCAT11(0x1a,(byte)local_120);
        break;
      case 4:
        local_120 = CONCAT11(0x1e,(byte)local_120);
        break;
      case 5:
        local_120 = CONCAT11(0x57,(byte)local_120);
      }
      FUN_0046ebe0(&local_120,0);
    }
    iVar2 = rand();
    iVar2 = iVar2 % 3;
    if (0 < iVar2) {
      do {
        uVar4 = rand();
        uVar4 = uVar4 & 0x80000001;
        if ((int)uVar4 < 0) {
          uVar4 = (uVar4 - 1 | 0xfffffffe) + 1;
        }
        iVar3 = rand();
        if (iVar3 % 100 == 0) {
          uVar4 = uVar4 + 1;
        }
        iVar3 = rand();
        if (iVar3 % 1000 == 0) {
          uVar4 = uVar4 + 1;
        }
        iVar3 = rand();
        if (iVar3 % 10000 == 0) {
          uVar4 = uVar4 + 1;
        }
        if (4 < (int)uVar4) {
          uVar4 = 4;
        }
        local_110 = 1;
        local_120 = 0;
        local_11c = 0;
        local_118 = 0;
        local_114 = 0;
        local_112 = 0;
        local_c = 0;
        memset(local_10c,0,0x100);
        uVar5 = rand();
        uVar5 = uVar5 & 0x80000001;
        bVar7 = uVar5 == 0;
        if ((int)uVar5 < 0) {
          bVar7 = (uVar5 - 1 | 0xfffffffe) == 0xffffffff;
        }
        if (bVar7) {
          uVar6 = FUN_005f51e0(local_350,local_358,uVar4,0xffffffff);
        }
        else {
          uVar6 = FUN_005f8ad0(local_238,local_358,uVar4,0xffffffff);
        }
        FUN_0042c5e0(uVar6);
        local_118 = (uint)(byte)local_120;
        local_120 = CONCAT11(local_120._1_1_,2);
        FUN_0046ebe0(&local_120,0);
        iVar2 = iVar2 + -1;
      } while (iVar2 != 0);
    }
    uVar4 = rand();
    uVar4 = uVar4 & 0x80000001;
    bVar7 = uVar4 == 0;
    if ((int)uVar4 < 0) {
      bVar7 = (uVar4 - 1 | 0xfffffffe) == 0xffffffff;
    }
    if (!bVar7) {
      local_11c = 0;
      local_118 = 0;
      local_114 = 0;
      local_112 = 0;
      local_c = 0;
      memset(local_10c,0,0x100);
      local_110 = (undefined2)local_358;
      local_120 = 0x701;
      FUN_0046ebe0(&local_120,0);
    }
    local_35c = local_35c + 1;
  } while (local_35c < 0x1e);
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


/* FUN_005c9f90 @ 005c9f90  kind=gamemisc  attributed-by=caller-vote  size=249 */

void FUN_005c9f90(int *param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  int *piVar2;
  int iVar3;
  undefined1 local_125;
  int local_124;
  undefined1 local_120 [280];
  uint local_8;
  
  local_8 = DAT_0076aa78 ^ (uint)&stack0xfffffffc;
  FUN_00639cf0(*param_1,param_1[1],&local_125,param_2);
  param_1[1] = *param_1;
  FUN_00487380(1);
  FUN_0044d660(10);
  piVar2 = (int *)*param_1;
  local_124 = 0;
  if (0 < (piVar2[1] - *piVar2) / 0x11c) {
    iVar3 = 0;
    do {
      *(undefined4 *)(iVar3 + *piVar2) = 1;
      uVar1 = FUN_005f8750(local_120,param_2,param_3);
      FUN_0042c5e0(uVar1);
      piVar2 = (int *)*param_1;
      local_124 = local_124 + 1;
      iVar3 = iVar3 + 0x11c;
    } while (local_124 < (piVar2[1] - *piVar2) / 0x11c);
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


/* FUN_005ca0a0 @ 005ca0a0  kind=gamemisc  attributed-by=caller-vote  size=3348 */

/* WARNING: Removing unreachable block (ram,0x005cab45) */
/* WARNING: Removing unreachable block (ram,0x005caa3c) */
/* WARNING: Removing unreachable block (ram,0x005ca820) */
/* WARNING: Removing unreachable block (ram,0x005ca607) */
/* WARNING: Removing unreachable block (ram,0x005ca3f5) */
/* WARNING: Removing unreachable block (ram,0x005ca230) */
/* WARNING: Removing unreachable block (ram,0x005ca2ec) */
/* WARNING: Removing unreachable block (ram,0x005ca4fe) */
/* WARNING: Removing unreachable block (ram,0x005ca710) */
/* WARNING: Removing unreachable block (ram,0x005ca933) */
/* WARNING: Removing unreachable block (ram,0x005cac68) */
/* WARNING: Removing unreachable block (ram,0x005caa71) */
/* WARNING: Removing unreachable block (ram,0x005cab7a) */
/* WARNING: Removing unreachable block (ram,0x005ca745) */
/* WARNING: Removing unreachable block (ram,0x005ca321) */
/* WARNING: Removing unreachable block (ram,0x005ca533) */
/* WARNING: Removing unreachable block (ram,0x005ca968) */
/* WARNING: Removing unreachable block (ram,0x005ca42a) */
/* WARNING: Removing unreachable block (ram,0x005ca63c) */
/* WARNING: Removing unreachable block (ram,0x005ca855) */
/* WARNING: Removing unreachable block (ram,0x005cac9d) */
/* WARNING: Removing unreachable block (ram,0x005cad7a) */

void FUN_005ca0a0(void)

{
  uint uVar1;
  int iVar2;
  undefined1 *puVar3;
  uint uVar4;
  int iVar5;
  undefined2 uVar6;
  int iVar7;
  byte bVar8;
  float10 fVar9;
  float10 fVar10;
  int local_144;
  int local_130;
  undefined1 local_12c;
  char local_12b;
  int local_128;
  undefined4 local_124;
  byte local_120;
  undefined2 local_11f;
  undefined2 local_11c;
  undefined1 local_118 [256];
  undefined4 local_18;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_006f3ddb;
  local_10 = ExceptionList;
  uVar1 = DAT_0076aa78 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_144 = 0;
  local_14 = uVar1;
  do {
    local_8 = 0xffffffff;
    fVar9 = (float10)FUN_004462f0((float)local_144 / 30.0,uVar1);
    fVar10 = (float10)FUN_004462f0(((float)local_144 + 0.99999) / 30.0);
    iVar2 = rand();
    iVar2 = (int)fVar9 + iVar2 % (((int)fVar10 - (int)fVar9) + 1);
    if (iVar2 < 1) {
      iVar2 = 1;
    }
    uVar6 = (undefined2)iVar2;
    if (local_144 == 0) {
      uVar6 = 1;
    }
    local_8 = 0;
    local_124 = 0;
    local_18 = 0;
    memset(local_118,0,0x100);
    local_11f = 0x101;
    local_12c = 3;
    local_11c = uVar6;
    iVar2 = rand();
    local_12b = (char)(iVar2 % 3);
    rand();
    iVar2 = rand();
    bVar8 = iVar2 % 100 == 0;
    iVar2 = rand();
    if (iVar2 % 1000 == 0) {
      bVar8 = bVar8 + 1;
    }
    iVar2 = rand();
    if (iVar2 % 10000 == 0) {
      bVar8 = bVar8 + 1;
    }
    local_120 = bVar8;
    if (4 < bVar8) {
      local_120 = 4;
    }
    local_128 = rand();
    FUN_004c6940(1);
    local_11f._0_1_ = 1;
    iVar2 = rand();
    local_12b = (char)(iVar2 % 3) + '\x0f';
    rand();
    iVar2 = rand();
    bVar8 = iVar2 % 100 == 0;
    iVar2 = rand();
    if (iVar2 % 1000 == 0) {
      bVar8 = bVar8 + 1;
    }
    iVar2 = rand();
    if (iVar2 % 10000 == 0) {
      bVar8 = bVar8 + 1;
    }
    local_120 = bVar8;
    if (4 < bVar8) {
      local_120 = 4;
    }
    local_128 = rand();
    if (&local_12c < (undefined1 *)0x118) {
      puVar3 = (undefined1 *)(((int)&local_12c / 0x118) * 0x118);
    }
    else {
      puVar3 = &local_12c;
    }
    FUN_0040ee70(puVar3);
    local_12b = 0xd;
    rand();
    iVar2 = rand();
    bVar8 = iVar2 % 100 == 0;
    iVar2 = rand();
    if (iVar2 % 1000 == 0) {
      bVar8 = bVar8 + 1;
    }
    iVar2 = rand();
    if (iVar2 % 10000 == 0) {
      bVar8 = bVar8 + 1;
    }
    local_120 = bVar8;
    if (4 < bVar8) {
      local_120 = 4;
    }
    local_128 = rand();
    if (&local_12c < (undefined1 *)0x230) {
      puVar3 = (undefined1 *)(((int)&local_12c / 0x118) * 0x118);
    }
    else {
      puVar3 = &local_12c;
    }
    FUN_0040ee70(puVar3);
    local_12b = 3;
    rand();
    iVar2 = rand();
    bVar8 = iVar2 % 100 == 0;
    iVar2 = rand();
    if (iVar2 % 1000 == 0) {
      bVar8 = bVar8 + 1;
    }
    iVar2 = rand();
    if (iVar2 % 10000 == 0) {
      bVar8 = bVar8 + 1;
    }
    local_120 = bVar8;
    if (4 < bVar8) {
      local_120 = 4;
    }
    local_128 = rand();
    if (&local_12c < (undefined1 *)0x348) {
      puVar3 = (undefined1 *)(((int)&local_12c / 0x118) * 0x118);
    }
    else {
      puVar3 = &local_12c;
    }
    FUN_0040ee70(puVar3);
    local_12b = 5;
    rand();
    iVar2 = rand();
    bVar8 = iVar2 % 100 == 0;
    iVar2 = rand();
    if (iVar2 % 1000 == 0) {
      bVar8 = bVar8 + 1;
    }
    iVar2 = rand();
    if (iVar2 % 10000 == 0) {
      bVar8 = bVar8 + 1;
    }
    local_120 = bVar8;
    if (4 < bVar8) {
      local_120 = 4;
    }
    local_128 = rand();
    if (&local_12c < (undefined1 *)0x460) {
      puVar3 = (undefined1 *)(((int)&local_12c / 0x118) * 0x118);
    }
    else {
      puVar3 = &local_12c;
    }
    FUN_0040ee70(puVar3);
    local_12b = 4;
    rand();
    iVar2 = rand();
    bVar8 = iVar2 % 100 == 0;
    iVar2 = rand();
    if (iVar2 % 1000 == 0) {
      bVar8 = bVar8 + 1;
    }
    iVar2 = rand();
    if (iVar2 % 10000 == 0) {
      bVar8 = bVar8 + 1;
    }
    local_120 = bVar8;
    if (4 < bVar8) {
      local_120 = 4;
    }
    local_128 = rand();
    if (&local_12c < (undefined1 *)0x578) {
      puVar3 = (undefined1 *)(((int)&local_12c / 0x118) * 0x118);
    }
    else {
      puVar3 = &local_12c;
    }
    FUN_0040ee70(puVar3);
    local_11f._0_1_ = 2;
    local_12b = 6;
    rand();
    iVar2 = rand();
    bVar8 = iVar2 % 100 == 0;
    iVar2 = rand();
    if (iVar2 % 1000 == 0) {
      bVar8 = bVar8 + 1;
    }
    iVar2 = rand();
    if (iVar2 % 10000 == 0) {
      bVar8 = bVar8 + 1;
    }
    local_120 = bVar8;
    if (4 < bVar8) {
      local_120 = 4;
    }
    local_128 = rand();
    if (&local_12c < (undefined1 *)0x690) {
      puVar3 = (undefined1 *)(((int)&local_12c / 0x118) * 0x118);
    }
    else {
      puVar3 = &local_12c;
    }
    FUN_0040ee70(puVar3);
    rand();
    rand();
    rand();
    rand();
    rand();
    local_12b = 8;
    rand();
    iVar2 = rand();
    bVar8 = iVar2 % 100 == 0;
    iVar2 = rand();
    if (iVar2 % 1000 == 0) {
      bVar8 = bVar8 + 1;
    }
    iVar2 = rand();
    if (iVar2 % 10000 == 0) {
      bVar8 = bVar8 + 1;
    }
    local_120 = bVar8;
    if (4 < bVar8) {
      local_120 = 4;
    }
    local_128 = rand();
    if (&local_12c < (undefined1 *)0x7a8) {
      puVar3 = (undefined1 *)(((int)&local_12c / 0x118) * 0x118);
    }
    else {
      puVar3 = &local_12c;
    }
    FUN_0040ee70(puVar3);
    local_12b = 10;
    rand();
    iVar2 = rand();
    bVar8 = iVar2 % 100 == 0;
    iVar2 = rand();
    if (iVar2 % 1000 == 0) {
      bVar8 = bVar8 + 1;
    }
    iVar2 = rand();
    if (iVar2 % 10000 == 0) {
      bVar8 = bVar8 + 1;
    }
    local_120 = bVar8;
    if (4 < bVar8) {
      local_120 = 4;
    }
    local_128 = rand();
    if (&local_12c < (undefined1 *)0x8c0) {
      puVar3 = (undefined1 *)(((int)&local_12c / 0x118) * 0x118);
    }
    else {
      puVar3 = &local_12c;
    }
    FUN_0040ee70(puVar3);
    local_12b = 0xb;
    rand();
    iVar2 = rand();
    bVar8 = iVar2 % 100 == 0;
    iVar2 = rand();
    if (iVar2 % 1000 == 0) {
      bVar8 = bVar8 + 1;
    }
    iVar2 = rand();
    if (iVar2 % 10000 == 0) {
      bVar8 = bVar8 + 1;
    }
    local_120 = bVar8;
    if (4 < bVar8) {
      local_120 = 4;
    }
    local_128 = rand();
    if (&local_12c < (undefined1 *)0x9d8) {
      puVar3 = (undefined1 *)(((int)&local_12c / 0x118) * 0x118);
    }
    else {
      puVar3 = &local_12c;
    }
    FUN_0040ee70(puVar3);
    local_12b = 0xc;
    uVar4 = rand();
    uVar4 = uVar4 & 0x80000001;
    if ((int)uVar4 < 0) {
      uVar4 = (uVar4 - 1 | 0xfffffffe) + 1;
    }
    local_11f = CONCAT11(local_11f._1_1_,'\f' - (uVar4 != 0));
    rand();
    iVar2 = rand();
    bVar8 = iVar2 % 100 == 0;
    iVar2 = rand();
    if (iVar2 % 1000 == 0) {
      bVar8 = bVar8 + 1;
    }
    iVar2 = rand();
    if (iVar2 % 10000 == 0) {
      bVar8 = bVar8 + 1;
    }
    local_120 = bVar8;
    if (4 < bVar8) {
      local_120 = 4;
    }
    local_128 = rand();
    if (&local_12c < (undefined1 *)0xaf0) {
      puVar3 = (undefined1 *)(((int)&local_12c / 0x118) * 0x118);
    }
    else {
      puVar3 = &local_12c;
    }
    FUN_0040ee70(puVar3);
    iVar7 = 0xc08;
    iVar2 = rand();
    local_130 = 0;
    iVar2 = iVar2 % 3 + 1;
    if (0 < iVar2) {
      do {
        if (iVar7 == 0) break;
        uVar4 = rand();
        iVar5 = (uVar4 % (uint)(iVar7 / 0x118)) * 0x118;
        FUN_0046ebe0(iVar5,0xffffffff);
        FUN_005c1fa0(iVar5 + 0x118,iVar7,iVar5,iVar2);
        local_130 = local_130 + 1;
        iVar7 = iVar7 + -0x118;
      } while (local_130 < iVar2);
    }
    local_8 = 0xffffffff;
    local_144 = local_144 + 1;
    if (0x1d < local_144) {
      ExceptionList = local_10;
      __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
      return;
    }
  } while( true );
}


/* FUN_005cb3b0 @ 005cb3b0  kind=gamemisc  attributed-by=caller-vote  size=409 */

void FUN_005cb3b0(undefined4 param_1,uint *param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6,int param_7)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  char cVar5;
  uint uVar6;
  uint uVar7;
  undefined8 uVar8;
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  int local_10;
  uint local_c;
  uint local_8;
  
  local_8 = DAT_0076aa78 ^ (uint)&stack0xfffffffc;
  cVar5 = FUN_005ee0f0(param_1,param_4,param_5,param_6,param_3,&local_14,&local_20);
  if (cVar5 == '\0') {
    __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
    return;
  }
  uVar8 = FUN_0068d946();
  uVar7 = local_10 + local_1c;
  uVar6 = local_14 + local_20;
  FUN_0042c900(uVar8);
  *(uint *)(param_7 + 8) = uVar6 * 0x10000;
  *(uint *)(param_7 + 0xc) = ((int)uVar6 >> 0x1f) << 0x10 | uVar6 >> 0x10;
  *(uint *)(param_7 + 0x10) = uVar7 * 0x10000;
  *(uint *)(param_7 + 0x14) = ((int)uVar7 >> 0x1f) << 0x10 | uVar7 >> 0x10;
  *(uint *)(param_7 + 0x1c) = ((int)local_c >> 0x1f) << 0x10 | local_c >> 0x10;
  *(uint *)(param_7 + 0x18) = local_c << 0x10;
  uVar7 = *param_2;
  uVar2 = param_2[1];
  uVar3 = param_2[2];
  puVar1 = (uint *)(param_7 + 8);
  uVar6 = *puVar1;
  *puVar1 = *puVar1 + uVar7 * 0x10000;
  *(int *)(param_7 + 0xc) =
       *(int *)(param_7 + 0xc) + (((int)uVar7 >> 0x1f) << 0x10 | uVar7 >> 0x10) +
       (uint)CARRY4(uVar6,uVar7 * 0x10000);
  puVar1 = (uint *)(param_7 + 0x10);
  uVar6 = *puVar1;
  *puVar1 = *puVar1 + uVar2 * 0x10000;
  *(int *)(param_7 + 0x14) =
       *(int *)(param_7 + 0x14) + (((int)uVar2 >> 0x1f) << 0x10 | uVar2 >> 0x10) +
       (uint)CARRY4(uVar6,uVar2 * 0x10000);
  puVar1 = (uint *)(param_7 + 0x18);
  uVar6 = *puVar1;
  *puVar1 = *puVar1 + uVar3 * 0x10000;
  *(int *)(param_7 + 0x1c) =
       *(int *)(param_7 + 0x1c) + (((int)uVar3 >> 0x1f) << 0x10 | uVar3 >> 0x10) +
       (uint)CARRY4(uVar6,uVar3 * 0x10000);
  local_1c = local_1c - local_10;
  local_20 = local_20 - local_14;
  if (local_1c < local_20) {
    *(undefined4 *)(param_7 + 0x20) = 0;
    iVar4 = local_20;
    local_20 = local_1c;
  }
  else {
    *(undefined4 *)(param_7 + 0x20) = 1;
    iVar4 = local_1c;
  }
  *(float *)(param_7 + 0x2c) = (float)(int)(local_18 - local_c);
  *(float *)(param_7 + 0x28) = (float)local_20;
  *(float *)(param_7 + 0x24) = (float)iVar4;
  *(undefined1 *)(param_7 + 0x30) = 1;
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


/* FUN_005cb550 @ 005cb550  kind=gamemisc  attributed-by=caller-vote  size=160 */

void FUN_005cb550(int param_1,int param_2,int param_3,int *param_4,undefined3 *param_5,
                 undefined4 param_6)

{
  undefined3 *puVar1;
  int iVar2;
  int local_10;
  int local_8;
  
  puVar1 = param_5;
  local_8 = 0;
  if (0 < *param_4) {
    do {
      local_10 = 0;
      if (0 < param_4[1]) {
        do {
          iVar2 = param_4[2] + -1;
          if (-1 < iVar2) {
            do {
              param_5 = (undefined3 *)CONCAT13(0x46,*puVar1);
              FUN_0044e7a0(local_8 + param_1,param_2 + local_10,param_3 + iVar2,&param_5,param_6);
              iVar2 = iVar2 + -1;
            } while (-1 < iVar2);
          }
          local_10 = local_10 + 1;
        } while (local_10 < param_4[1]);
      }
      local_8 = local_8 + 1;
    } while (local_8 < *param_4);
  }
  return;
}


/* FUN_005cb600 @ 005cb600  kind=gamemisc  attributed-by=caller-vote  size=2020 */

void FUN_005cb600(int param_1,int param_2,int param_3,int param_4,int param_5,int param_6,
                 undefined4 param_7)

{
  undefined8 uVar1;
  byte bVar2;
  byte bVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  undefined4 *puVar8;
  uint *puVar9;
  undefined8 *puVar10;
  uint uVar11;
  float fVar12;
  int iVar13;
  float fVar14;
  float10 fVar15;
  double dVar16;
  undefined8 local_a4;
  undefined4 *local_9c;
  undefined8 local_98;
  int local_90;
  undefined8 local_8c;
  int local_80;
  float local_7c;
  float local_78;
  int local_74;
  int local_70;
  int local_6c;
  float local_68;
  int local_64;
  int local_60;
  float local_5c;
  undefined4 local_58;
  float local_54;
  undefined4 local_50;
  float local_4c;
  uint local_48;
  undefined1 local_44 [12];
  undefined1 local_38 [12];
  undefined8 local_2c;
  float local_24;
  float local_20 [4];
  float fStack_10;
  float local_c;
  uint local_8;
  
  local_8 = DAT_0076aa78 ^ (uint)&stack0xfffffffc;
  local_70 = param_2;
  local_74 = param_5;
  local_90 = param_4;
  uVar11 = param_1 + param_4 * -2;
  local_80 = param_4 * 2 + param_1;
  local_6c = param_1;
  local_58 = param_7;
  local_9c = &DAT_0076ddf8;
  local_50 = uVar11;
  local_48 = uVar11;
  if ((int)uVar11 <= local_80) {
    local_4c = (float)(param_2 + param_5 * -2);
    fVar12 = (float)(param_2 + param_5 * 2);
    local_60 = uVar11 - param_1;
    local_68 = fVar12;
    do {
      if ((int)local_4c <= (int)fVar12) {
        local_54 = (float)((int)local_4c - local_70);
        fVar14 = local_4c;
        local_50 = uVar11;
        do {
          iVar4 = FUN_004347a0();
          if (iVar4 != 0) {
            local_8c = (double)(int)fVar14;
            local_64 = *(int *)(iVar4 + 0x10);
            local_a4 = (double)(int)uVar11;
            fVar15 = (float10)FUN_004c0ef0(local_a4 * 0.01 + 4394.0,local_8c * 0.01 + 8974.0);
            local_5c = (float)fVar15;
            iVar4 = (int)(local_5c * (float)param_6 + (float)(param_6 + param_3));
            uVar11 = local_50;
            if (local_64 <= iVar4) {
              local_7c = (float)local_60 / (float)local_90;
              local_a4 = local_a4 * 0.05 + 4374.0;
              local_8c = local_8c * 0.05;
              local_98 = (double)CONCAT44((float)(int)local_54 / (float)local_74,
                                          (undefined4)local_98);
              do {
                fVar15 = (float10)FUN_004c0ef0(local_8c,(double)iVar4 * 0.05);
                local_5c = (float)fVar15;
                local_78 = local_5c * 0.4 + local_7c;
                fVar15 = (float10)FUN_004c0ef0(local_a4,(double)iVar4 * 0.05 + 9898.0);
                local_5c = (float)fVar15;
                fVar12 = local_5c * 0.4 + local_98._4_4_;
                if (fVar12 * fVar12 + local_78 * local_78 <= 1.0) {
                  iVar5 = FUN_004347a0();
                  if (iVar5 == 0) {
                    puVar8 = (undefined4 *)&DAT_0076ddfc;
                  }
                  else if (iVar4 < *(int *)(iVar5 + 0x10)) {
                    puVar8 = (undefined4 *)&DAT_0076ddfc;
                  }
                  else if (iVar4 < *(int *)(iVar5 + 0x1c) + *(int *)(iVar5 + 0x10)) {
                    puVar8 = (undefined4 *)FUN_0042f730();
                    if ((((*(byte *)((int)puVar8 + 3) & 0x1f) == 0) && (iVar4 < 1)) &&
                       ((*(byte *)((int)puVar8 + 3) & 0x40) == 0)) {
                      puVar8 = (undefined4 *)&DAT_0076ddf4;
                    }
                  }
                  else {
                    puVar8 = (undefined4 *)&DAT_0076ddf4;
                    if (0 < iVar4) {
                      puVar8 = local_9c;
                    }
                  }
                  if ((*(byte *)((int)puVar8 + 3) & 0x80) != 0) goto LAB_005cbdde;
                }
                iVar4 = iVar4 + -1;
                uVar11 = local_50;
              } while (local_64 <= iVar4);
            }
          }
          local_54 = (float)((int)local_54 + 1);
          fVar14 = (float)((int)fVar14 + 1);
          fVar12 = local_68;
        } while ((int)fVar14 <= (int)local_68);
      }
      uVar11 = uVar11 + 1;
      local_60 = local_60 + 1;
      local_50 = uVar11;
    } while ((int)uVar11 <= local_80);
  }
  if ((int)local_48 <= local_80) {
    iVar4 = local_70 + local_74 * -2;
    iVar5 = local_70 + local_74 * 2;
    local_64 = local_48 - local_6c;
    local_8c = (double)CONCAT44(iVar4,(undefined4)local_8c);
    do {
      if (iVar4 <= iVar5) {
        fVar12 = (float)(param_3 + param_6);
        dVar16 = (double)(int)local_48;
        local_60 = iVar4 - local_70;
        local_5c = fVar12;
        do {
          fVar15 = (float10)FUN_004c0ef0(dVar16 * 0.01 + 4394.0,(double)iVar4 * 0.01 + 8974.0);
          local_4c = (float)fVar15;
          local_6c = (int)(local_4c * (float)param_6 + (float)(int)fVar12);
          iVar6 = FUN_004347a0();
          if ((iVar6 != 0) && (local_7c = *(float *)(iVar6 + 0x10), (int)local_7c <= local_6c)) {
            local_78 = (float)(-8 - (int)local_7c);
            iVar6 = local_6c;
            do {
              iVar7 = FUN_004347a0();
              if (iVar7 == 0) {
                puVar8 = (undefined4 *)&DAT_0076ddfc;
              }
              else if (iVar6 < *(int *)(iVar7 + 0x10)) {
                puVar8 = (undefined4 *)&DAT_0076ddfc;
              }
              else if (iVar6 < *(int *)(iVar7 + 0x1c) + *(int *)(iVar7 + 0x10)) {
                puVar8 = (undefined4 *)FUN_0042f730();
                if ((((*(byte *)((int)puVar8 + 3) & 0x1f) == 0) && (iVar6 < 1)) &&
                   ((*(byte *)((int)puVar8 + 3) & 0x40) == 0)) {
                  puVar8 = (undefined4 *)&DAT_0076ddf4;
                }
              }
              else {
                puVar8 = (undefined4 *)&DAT_0076ddf4;
                if (0 < iVar6) {
                  puVar8 = local_9c;
                }
              }
              bVar2 = *(byte *)((int)puVar8 + 3);
              bVar3 = bVar2 & 0x1f;
              if ((((((bVar2 & 0x1f) == 0) || (bVar3 == 2)) || (bVar3 == 4)) ||
                  ((bVar3 == 9 || (bVar3 == 5)))) && ((bVar2 & 0x40) == 0)) {
                local_98 = (double)iVar6 * 0.02;
                fVar15 = (float10)FUN_004c0ef0((double)iVar4 * 0.05,local_98);
                local_4c = (float)fVar15;
                local_68 = local_4c * 0.5 + (float)local_64 / (float)local_90;
                fVar15 = (float10)FUN_004c0ef0((double)(int)local_48 * 0.05 + 4374.0,
                                               local_98 + 9898.0);
                local_4c = (float)fVar15;
                fVar12 = local_4c * 0.5 + (float)local_60 / (float)local_74;
                if (fVar12 * fVar12 + local_68 * local_68 <= 1.0) {
                  local_50 = local_50 & 0xff000000;
                  if (iVar6 == local_6c) {
                    iVar7 = FUN_004347a0();
                    if (iVar7 == 0) {
                      fVar15 = (float10)FUN_005c4dd0(local_48,iVar4);
                      local_54 = (float)fVar15;
                      local_4c = local_54;
                    }
                    else {
                      local_54 = *(float *)(iVar7 + 8);
                    }
                    iVar7 = FUN_004347a0();
                    if (iVar7 == 0) {
                      fVar15 = (float10)FUN_005c4800(local_48,iVar4);
                      fVar12 = (float)fVar15;
                      local_4c = fVar12;
                    }
                    else {
                      fVar12 = *(float *)(iVar7 + 4);
                    }
                    puVar9 = (uint *)FUN_005c56e0((int)&local_a4 + 4,local_48,iVar4,iVar6,fVar12,
                                                  local_54,local_58);
                    local_50 = *puVar9;
                  }
                  else {
                    local_54 = (float)((int)local_78 + iVar6) * 0.05;
                    if (0.0 <= local_54) {
                      if (1.0 < local_54) {
                        local_54 = 1.0;
                      }
                    }
                    else {
                      local_54 = 0.0;
                    }
                    puVar10 = (undefined8 *)FUN_005f9620(local_38,local_48,iVar4,iVar6,local_58);
                    uVar1 = *puVar10;
                    local_24 = *(float *)(puVar10 + 1);
                    local_2c._0_4_ = (float)uVar1;
                    local_4c = (float)local_2c * local_54;
                    local_2c._4_4_ = (float)((ulonglong)uVar1 >> 0x20);
                    local_68 = local_2c._4_4_ * local_54;
                    local_98 = (double)CONCAT44(local_24 * local_54,(undefined4)local_98);
                    local_2c = uVar1;
                    puVar10 = (undefined8 *)FUN_005c7140(local_44,local_48,iVar4,iVar6,local_58);
                    local_c = 1.0 - local_54;
                    local_20[3] = (float)*puVar10;
                    local_20[3] = local_20[3] * local_c;
                    fStack_10 = (float)((ulonglong)*puVar10 >> 0x20);
                    fStack_10 = fStack_10 * local_c;
                    local_c = *(float *)(puVar10 + 1) * local_c;
                    local_20[1] = fStack_10 + local_68;
                    local_20[0] = local_20[3] + local_4c;
                    local_20[2] = local_c + local_98._4_4_;
                    iVar7 = 0;
                    do {
                      iVar13 = iVar7 + 1;
                      *(char *)((int)&local_50 + iVar7) = (char)(int)local_20[iVar7];
                      iVar7 = iVar13;
                    } while (iVar13 < 3);
                    local_50 = CONCAT13(5,(undefined3)local_50);
                  }
                  FUN_0044e7a0(local_48,iVar4,iVar6,&local_50,local_58);
                }
              }
              iVar6 = iVar6 + -1;
              fVar12 = local_5c;
            } while ((int)local_7c <= iVar6);
          }
          local_60 = local_60 + 1;
          iVar4 = iVar4 + 1;
        } while (iVar4 <= iVar5);
        iVar4 = local_8c._4_4_;
      }
      local_48 = local_48 + 1;
      local_64 = local_64 + 1;
    } while ((int)local_48 <= local_80);
  }
LAB_005cbdde:
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


/* FUN_005cbe00 @ 005cbe00  kind=gamemisc  attributed-by=caller-vote  size=1802 */

void FUN_005cbe00(int param_1,int param_2,int param_3,int param_4,int param_5,int param_6,
                 undefined4 param_7)

{
  byte bVar1;
  byte bVar2;
  int iVar3;
  undefined4 *puVar4;
  uint *puVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  float fVar10;
  float10 fVar11;
  float fVar12;
  double dVar13;
  float local_64;
  int local_60;
  undefined4 *local_5c;
  float local_58;
  float local_54;
  float local_50;
  float local_4c;
  int local_44;
  int local_40;
  float local_3c;
  float local_38;
  int local_34;
  int local_30;
  int local_2c;
  undefined4 local_28;
  int local_24;
  float local_20;
  int local_1c;
  undefined4 local_18;
  undefined1 local_14 [4];
  double local_10;
  uint local_8;
  
  local_8 = DAT_0076aa78 ^ (uint)&stack0xfffffffc;
  local_40 = param_2;
  local_44 = param_5;
  iVar7 = param_1 + param_4 * -2;
  local_60 = param_4 * 2 + param_1;
  local_34 = param_1;
  local_28 = param_7;
  local_5c = &DAT_0076ddf8;
  local_24 = iVar7;
  local_1c = iVar7;
  if (iVar7 <= local_60) {
    uVar8 = param_2 + param_5 * -2;
    fVar12 = (float)(param_5 * 2 + param_2);
    local_2c = iVar7 - param_1;
    local_20 = fVar12;
    do {
      local_18 = uVar8;
      if ((int)uVar8 <= (int)fVar12) {
        local_30 = uVar8 - local_40;
        local_24 = iVar7;
        do {
          iVar3 = FUN_004347a0();
          if (iVar3 != 0) {
            dVar13 = (double)(int)local_18;
            local_38 = *(float *)(iVar3 + 0x10);
            local_10 = (double)iVar7;
            fVar11 = (float10)FUN_004c0ef0(local_10 * 0.01 + 4394.0,dVar13 * 0.01 + 8974.0);
            local_3c = (float)fVar11;
            iVar3 = (int)(local_3c * 20.0 + (float)(param_6 + param_3));
            iVar7 = local_24;
            if ((int)local_38 <= iVar3) {
              local_64 = 10.0 / (float)param_4;
              local_54 = (float)local_2c / (float)param_4;
              local_10 = local_10 * 0.05 + 4374.0;
              local_4c = 10.0 / (float)local_44;
              local_50 = (float)local_30 / (float)local_44;
              do {
                fVar11 = (float10)FUN_004c0ef0(dVar13 * 0.05,(double)iVar3 * 0.05);
                local_3c = (float)fVar11;
                local_58 = local_3c * local_64 + local_54;
                fVar11 = (float10)FUN_004c0ef0(local_10,(double)iVar3 * 0.05 + 9898.0);
                local_3c = (float)fVar11;
                fVar12 = local_3c * local_4c + local_50;
                if (fVar12 * fVar12 + local_58 * local_58 <= 1.0) {
                  iVar7 = FUN_004347a0();
                  if (iVar7 == 0) {
                    puVar4 = (undefined4 *)&DAT_0076ddfc;
                  }
                  else if (iVar3 < *(int *)(iVar7 + 0x10)) {
                    puVar4 = (undefined4 *)&DAT_0076ddfc;
                  }
                  else if (iVar3 < *(int *)(iVar7 + 0x1c) + *(int *)(iVar7 + 0x10)) {
                    puVar4 = (undefined4 *)FUN_0042f730();
                    if ((((*(byte *)((int)puVar4 + 3) & 0x1f) == 0) && (iVar3 < 1)) &&
                       ((*(byte *)((int)puVar4 + 3) & 0x40) == 0)) {
                      puVar4 = (undefined4 *)&DAT_0076ddf4;
                    }
                  }
                  else {
                    puVar4 = (undefined4 *)&DAT_0076ddf4;
                    if (0 < iVar3) {
                      puVar4 = local_5c;
                    }
                  }
                  if ((*(byte *)((int)puVar4 + 3) & 0x1f) != 2) {
                    iVar7 = FUN_004347a0();
                    if (iVar7 == 0) {
                      puVar4 = (undefined4 *)&DAT_0076ddfc;
                    }
                    else if (iVar3 < *(int *)(iVar7 + 0x10)) {
                      puVar4 = (undefined4 *)&DAT_0076ddfc;
                    }
                    else if (iVar3 < *(int *)(iVar7 + 0x1c) + *(int *)(iVar7 + 0x10)) {
                      puVar4 = (undefined4 *)FUN_0042f730();
                      if ((((*(byte *)((int)puVar4 + 3) & 0x1f) == 0) && (iVar3 < 1)) &&
                         ((*(byte *)((int)puVar4 + 3) & 0x40) == 0)) {
                        puVar4 = (undefined4 *)&DAT_0076ddf4;
                      }
                    }
                    else {
                      puVar4 = (undefined4 *)&DAT_0076ddf4;
                      if (0 < iVar3) {
                        puVar4 = local_5c;
                      }
                    }
                    if ((*(byte *)((int)puVar4 + 3) & 0x80) != 0) goto LAB_005cc4f7;
                  }
                }
                iVar3 = iVar3 + -1;
                iVar7 = local_24;
              } while ((int)local_38 <= iVar3);
            }
          }
          local_30 = local_30 + 1;
          local_18 = local_18 + 1;
          fVar12 = local_20;
        } while ((int)local_18 <= (int)local_20);
      }
      iVar7 = iVar7 + 1;
      local_2c = local_2c + 1;
      local_24 = iVar7;
    } while (iVar7 <= local_60);
  }
  if (local_1c <= local_60) {
    local_54 = (float)(local_40 + local_44 * -2);
    iVar3 = local_40 + local_44 * 2;
    local_30 = local_1c - local_34;
    iVar7 = local_60;
    local_24 = iVar3;
    do {
      if ((int)local_54 <= iVar3) {
        fVar10 = (float)(param_3 + param_6);
        dVar13 = (double)local_1c;
        local_2c = (int)local_54 - local_40;
        fVar12 = local_54;
        local_4c = fVar10;
        do {
          fVar11 = (float10)FUN_004c0ef0(dVar13 * 0.01 + 4394.0,(double)(int)fVar12 * 0.01 + 8974.0)
          ;
          local_20 = (float)fVar11;
          local_34 = (int)(local_20 * 20.0 + (float)(int)fVar10);
          iVar7 = FUN_004347a0();
          if ((iVar7 != 0) &&
             (local_50 = *(float *)(iVar7 + 0x10), iVar7 = local_34, (int)local_50 <= local_34)) {
            do {
              iVar3 = FUN_004347a0();
              if (iVar3 == 0) {
                puVar4 = (undefined4 *)&DAT_0076ddfc;
              }
              else if (iVar7 < *(int *)(iVar3 + 0x10)) {
                puVar4 = (undefined4 *)&DAT_0076ddfc;
              }
              else if (iVar7 < *(int *)(iVar3 + 0x1c) + *(int *)(iVar3 + 0x10)) {
                puVar4 = (undefined4 *)FUN_0042f730();
                if ((((*(byte *)((int)puVar4 + 3) & 0x1f) == 0) && (iVar7 < 1)) &&
                   ((*(byte *)((int)puVar4 + 3) & 0x40) == 0)) {
                  puVar4 = (undefined4 *)&DAT_0076ddf4;
                }
              }
              else {
                puVar4 = (undefined4 *)&DAT_0076ddf4;
                if (0 < iVar7) {
                  puVar4 = local_5c;
                }
              }
              bVar1 = *(byte *)((int)puVar4 + 3);
              bVar2 = bVar1 & 0x1f;
              if (((((bVar1 & 0x1f) == 0) || (bVar2 == 2)) ||
                  ((bVar2 == 4 || ((bVar2 == 9 || (bVar2 == 5)))))) && ((bVar1 & 0x40) == 0)) {
                fVar11 = (float10)FUN_004c0ef0((double)(int)fVar12 * 0.05,(double)iVar7 * 0.05);
                local_20 = (float)fVar11;
                local_58 = local_20 * (10.0 / (float)param_4) + (float)local_30 / (float)param_4;
                fVar11 = (float10)FUN_004c0ef0((double)local_1c * 0.05 + 4374.0,
                                               (double)iVar7 * 0.05 + 9898.0);
                local_20 = (float)fVar11;
                fVar10 = local_20 * (10.0 / (float)local_44) + (float)local_2c / (float)local_44;
                if (fVar10 * fVar10 + local_58 * local_58 <= 1.0) {
                  local_18 = local_18 & 0xff000000;
                  if (iVar7 == local_34) {
                    iVar3 = FUN_004347a0();
                    if (iVar3 == 0) {
                      fVar11 = (float10)FUN_005c4dd0(local_1c,fVar12);
                      local_38 = (float)fVar11;
                      local_20 = local_38;
                    }
                    else {
                      local_38 = *(float *)(iVar3 + 8);
                    }
                    iVar3 = FUN_004347a0();
                    if (iVar3 == 0) {
                      fVar11 = (float10)FUN_005c4800(local_1c,fVar12);
                      fVar10 = (float)fVar11;
                      local_20 = fVar10;
                    }
                    else {
                      fVar10 = *(float *)(iVar3 + 4);
                    }
                    puVar5 = (uint *)FUN_005c56e0(&local_64,local_1c,fVar12,iVar7,fVar10,local_38,
                                                  local_28);
                    local_18 = *puVar5;
                  }
                  else {
                    iVar6 = FUN_005f9620(local_14,local_1c,fVar12,iVar7,local_28);
                    iVar3 = 0;
                    do {
                      iVar9 = iVar3 + 1;
                      local_14[iVar3 + -4] = (char)(int)*(float *)(iVar6 + iVar3 * 4);
                      iVar3 = iVar9;
                    } while (iVar9 < 3);
                    local_18 = CONCAT13(6,(undefined3)local_18);
                  }
                  FUN_0044e7a0(local_1c,fVar12,iVar7,&local_18,local_28);
                }
              }
              iVar7 = iVar7 + -1;
              fVar10 = local_4c;
            } while ((int)local_50 <= iVar7);
          }
          local_2c = local_2c + 1;
          fVar12 = (float)((int)fVar12 + 1);
          iVar7 = local_60;
          iVar3 = local_24;
        } while ((int)fVar12 <= local_24);
      }
      local_1c = local_1c + 1;
      local_30 = local_30 + 1;
    } while (local_1c <= iVar7);
  }
LAB_005cc4f7:
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


/* FUN_005d6040 @ 005d6040  kind=gamemisc  attributed-by=caller-vote  size=6651 */

/* WARNING: Type propagation algorithm not settling */

void FUN_005d6040(int param_1,int param_2)

{
  undefined1 *puVar1;
  char cVar2;
  WalkPathBehavior *pWVar3;
  undefined4 *puVar4;
  int *piVar5;
  vfunction1 *pvVar6;
  SequentialBehavior *pSVar7;
  undefined4 *puVar8;
  int *piVar9;
  char *pcVar10;
  uint uVar11;
  int iVar12;
  undefined4 *puVar13;
  int iVar14;
  Spawn *pSVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  uint uVar19;
  LookAtPlayerBehavior_vftable *pLVar20;
  int in_ECX;
  int iVar21;
  uint uVar22;
  uint uVar23;
  int *piVar24;
  uint uVar25;
  SequentialBehavior *pSVar26;
  LookAtPlayerBehavior *pLVar27;
  SequentialBehavior_data *pSVar28;
  bool bVar29;
  double dVar30;
  undefined8 uVar31;
  undefined8 uVar32;
  undefined4 local_250;
  uint local_24c;
  uint local_248;
  undefined4 local_244;
  uint local_240;
  SequentialBehavior *local_23c;
  WalkPathBehavior *local_238 [2];
  WalkPathBehavior *local_230 [2];
  WalkPathBehavior *local_228 [2];
  WalkPathBehavior *local_220;
  WalkPathBehavior *local_21c;
  WalkPathBehavior *local_218 [3];
  CombatBehavior *local_20c;
  LookAtPlayerBehavior *local_208;
  WalkPathBehavior *local_204 [2];
  WalkPathBehavior *local_1fc;
  uint local_1f8;
  WalkPathBehavior *local_1f4;
  uint local_1f0;
  CombatBehavior *local_1ec;
  uint *local_1e8;
  undefined4 *local_1e4;
  int local_1e0;
  uint local_1dc;
  WalkPathBehavior *local_1d8;
  int local_1d4;
  SequentialBehavior *local_1d0;
  SequentialBehavior *local_1cc;
  Spawn *local_1c8;
  WalkPathBehavior *local_1c4;
  uint local_1c0;
  WalkPathBehavior *local_1bc;
  Spawn *local_1b8;
  int local_1b4;
  Spawn *local_1b0;
  int local_1ac;
  Spawn *local_1a8;
  float local_1a4;
  undefined4 *local_1a0;
  WalkPathBehavior **local_19c;
  WalkPathBehavior **local_198;
  WalkPathBehavior **local_194;
  undefined2 local_190 [2];
  undefined4 local_18c;
  undefined4 local_188;
  undefined2 local_184;
  undefined1 local_182;
  undefined2 local_180;
  undefined1 local_17c [256];
  undefined4 local_7c;
  int local_78;
  WalkPathBehavior *local_60;
  Spawn *local_5c;
  int local_58;
  int iStack_54;
  int local_50;
  int iStack_4c;
  int local_48;
  int iStack_44;
  int local_40 [2];
  WalkPathBehavior *local_38;
  WalkPathBehavior *local_34;
  CombatBehavior *local_30;
  LookAtPlayerBehavior *local_2c;
  uint local_28;
  uint local_24;
  float local_20;
  float local_1c;
  float local_18;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006f40a0;
  local_10 = ExceptionList;
  local_14 = DAT_0076aa78 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_1b4 = param_1;
  iVar14 = *(int *)(param_1 + 100);
  local_1e8 = (uint *)(param_1 + 0x60);
  local_1d4 = iVar14;
  local_1ac = in_ECX;
  pcVar10 = (char *)FUN_004a6ad0(*local_1e8,iVar14);
  iVar12 = local_1b4;
  if ((pcVar10 != (char *)0x0) && (*pcVar10 == '\0')) {
    local_78 = (int)*(float *)(in_ECX + 0x8000f0);
    local_40[0] = (int)(local_78 + (local_78 >> 0x1f & 0xffU)) >> 8;
    local_40[1] = (int)((int)*(float *)(in_ECX + 0x8000f4) +
                       ((int)*(float *)(in_ECX + 0x8000f4) >> 0x1f & 0xffU)) >> 8;
    iVar21 = 0;
    piVar24 = (int *)(param_1 + 0x60);
    do {
      if (*piVar24 != local_40[iVar21]) {
        iVar21 = *(int *)(param_1 + 0xa0);
        pSVar26 = (SequentialBehavior *)(local_1b4 + 0x18);
        local_1d0 = pSVar26;
        if (*(int *)(local_1b4 + 0x1c) - *(int *)(local_1b4 + 0x18) >> 2 <= iVar21)
        goto LAB_005d6185;
        pWVar3 = *(WalkPathBehavior **)(local_1ac + 4);
        local_1c0 = local_1ac + 4;
        local_1a8 = (Spawn *)(&pSVar26->vftablePtr->vfunction1 + iVar21);
        goto LAB_005d6137;
      }
      iVar21 = iVar21 + 1;
      piVar24 = piVar24 + 1;
    } while (iVar21 < 2);
  }
  goto LAB_005d7a51;
  while( true ) {
    iVar21 = iVar21 + 1;
    local_1a8 = (Spawn *)&local_1a8->Spawn_data;
    iVar14 = local_1d4;
    if (*(int *)(iVar12 + 0x1c) - (int)pSVar26->vftablePtr >> 2 <= iVar21) break;
LAB_005d6137:
    FUN_00477d90(&local_1d8,(CombatBehavior_vftable *)local_1a8->vftablePtr + 9);
    if ((local_1d8 != pWVar3) && ((local_1d8->WalkPathBehavior_data).offset_0x14 != 0))
    goto LAB_005d7a51;
  }
LAB_005d6185:
  local_240 = iVar14 * 0x100 + 0x80;
  local_23c = (SequentialBehavior *)(((int)local_240 >> 0x1f) << 0x10 | local_240 >> 0x10);
  uVar11 = *local_1e8 * 0x100 + 0x80;
  local_248 = ((int)uVar11 >> 0x1f) << 0x10 | uVar11 >> 0x10;
  local_240 = local_240 * 0x10000;
  uVar11 = uVar11 * 0x10000;
  local_24c = uVar11;
  local_1f8 = local_240;
  local_1f0 = uVar11;
  local_1dc = local_248;
  local_1cc = local_23c;
  uVar31 = __alldiv(local_240,local_23c,0x10000,0);
  local_1e0 = (int)((ulonglong)uVar31 >> 0x20);
  local_1d4 = (int)uVar31;
  uVar32 = __alldiv(uVar11,local_1dc,0x10000,0);
  iVar14 = local_1ac;
  local_1e0 = (int)((ulonglong)uVar32 >> 0x20);
  local_1c0 = (uint)uVar32;
  iVar12 = FUN_004347a0(local_1c0,(int)uVar31,local_1b4);
  uVar11 = *(int *)(iVar12 + 0x1c) + *(int *)(iVar12 + 0x10);
  local_1a0 = *(undefined4 **)(iVar14 + 4);
  local_1a8 = (Spawn *)(((int)uVar11 >> 0x1f) << 0x10 | uVar11 >> 0x10);
  local_1bc = (WalkPathBehavior *)(uVar11 * 0x10000);
  puVar13 = (undefined4 *)*local_1a0;
  while (local_60 = local_1bc, local_5c = local_1a8, puVar13 != local_1a0) {
    iVar14 = puVar13[6];
    if ((iVar14 != 0) && (*(char *)(iVar14 + 0x60) == '\0')) {
      local_1b8 = *(Spawn **)(iVar14 + 0x1c);
      local_58 = *(uint *)(iVar14 + 0x10) - local_1f0;
      iStack_54 = (*(int *)(iVar14 + 0x14) - local_1dc) -
                  (uint)(*(uint *)(iVar14 + 0x10) < local_1f0);
      local_50 = *(uint *)(iVar14 + 0x18) - local_1f8;
      iStack_4c = ((int)local_1b8 - (int)local_1cc) - (uint)(*(uint *)(iVar14 + 0x18) < local_1f8);
      local_48 = (int)*(WalkPathBehavior **)(iVar14 + 0x20) + uVar11 * -0x10000;
      iStack_44 = (*(int *)(iVar14 + 0x24) - (int)local_1a8) -
                  (uint)(*(WalkPathBehavior **)(iVar14 + 0x20) < local_1bc);
      local_20 = (float)CONCAT44(iStack_54,local_58) * 1.5258789e-05;
      local_1a4 = (float)CONCAT44(iStack_44,local_48);
      local_1c = (float)CONCAT44(iStack_4c,local_50) * 1.5258789e-05;
      local_18 = local_1a4 * 1.5258789e-05;
      if (local_1c * local_1c + local_20 * local_20 + local_18 * local_18 < 10000.0)
      goto LAB_005d7a51;
      local_1cc = local_23c;
      local_1f8 = local_240;
      local_1dc = local_248;
      local_1f0 = local_24c;
    }
    pSVar26 = local_1d0;
    iVar14 = local_1ac;
    if (*(char *)((int)puVar13 + 0xd) == '\0') {
      puVar4 = (undefined4 *)puVar13[2];
      if (*(char *)((int)puVar4 + 0xd) == '\0') {
        cVar2 = *(char *)((int)*puVar4 + 0xd);
        puVar13 = puVar4;
        puVar4 = (undefined4 *)*puVar4;
        while (cVar2 == '\0') {
          cVar2 = *(char *)((int)*puVar4 + 0xd);
          puVar13 = puVar4;
          puVar4 = (undefined4 *)*puVar4;
        }
      }
      else {
        cVar2 = *(char *)((int)puVar13[1] + 0xd);
        puVar8 = (undefined4 *)puVar13[1];
        puVar4 = puVar13;
        while ((puVar13 = puVar8, cVar2 == '\0' && (puVar4 == (undefined4 *)puVar13[2]))) {
          cVar2 = *(char *)((int)puVar13[1] + 0xd);
          puVar8 = (undefined4 *)puVar13[1];
          puVar4 = puVar13;
        }
      }
    }
  }
  iVar12 = FUN_00477e10(local_1c0,local_1d4);
  if (iVar12 != 0) {
    local_1b8 = (Spawn *)0x0;
    local_1b0 = (Spawn *)0x0;
    local_1e0 = 0;
    puVar13 = (undefined4 *)FUN_0046d550(0,0);
    local_8._0_1_ = 0;
    local_8._1_3_ = 0;
    piVar24 = (int *)**(int **)(iVar14 + 4);
    pSVar15 = (Spawn *)0x0;
    local_1e4 = puVar13;
    if (piVar24 != *(int **)(iVar14 + 4)) {
      do {
        piVar5 = piVar24 + 6;
        if ((piVar24[6] != 0) && (*(char *)(piVar24[6] + 0x60) == '\0')) {
          iVar14 = FUN_00583cb0(puVar13,puVar13[1],piVar5);
          if (local_1e0 == 0x15555554) goto LAB_005d719c;
          local_1e0 = local_1e0 + 1;
          local_1e4[1] = iVar14;
          **(int **)(iVar14 + 4) = iVar14;
          if ((local_1b8 == (Spawn *)0x0) ||
             (pSVar15 = *(Spawn **)(*piVar5 + 400), (int)pSVar15 < (int)local_1b8)) {
            pSVar15 = *(Spawn **)(*piVar5 + 400);
            local_1b8 = pSVar15;
          }
          puVar13 = local_1e4;
          if ((local_1b0 == (Spawn *)0x0) || ((int)local_1b0 < (int)pSVar15)) {
            local_1b0 = pSVar15;
          }
        }
        if (*(char *)((int)piVar24 + 0xd) == '\0') {
          piVar5 = (int *)piVar24[2];
          if (*(char *)((int)piVar5 + 0xd) == '\0') {
            cVar2 = *(char *)(*piVar5 + 0xd);
            piVar24 = piVar5;
            piVar5 = (int *)*piVar5;
            while (cVar2 == '\0') {
              cVar2 = *(char *)(*piVar5 + 0xd);
              piVar24 = piVar5;
              piVar5 = (int *)*piVar5;
            }
          }
          else {
            cVar2 = *(char *)(piVar24[1] + 0xd);
            piVar9 = (int *)piVar24[1];
            piVar5 = piVar24;
            while ((piVar24 = piVar9, cVar2 == '\0' && (piVar5 == (int *)piVar24[2]))) {
              cVar2 = *(char *)(piVar24[1] + 0xd);
              piVar9 = (int *)piVar24[1];
              piVar5 = piVar24;
            }
          }
        }
        pSVar15 = local_1b0;
      } while (piVar24 != *(int **)(local_1ac + 4));
    }
    iVar21 = rand();
    iVar12 = local_1b4;
    iVar14 = *(int *)(local_1b4 + 0xa0);
    local_1a4 = (float)((int)&local_1b8->vftablePtr + iVar21 % ((int)pSVar15 + (1 - (int)local_1b8))
                       );
    *(int *)(local_1b4 + 0xa4) = *(int *)(local_1b4 + 0xa4) + param_2;
    if (iVar14 < (pSVar26->SequentialBehavior_data).offset_0x0 - (int)pSVar26->vftablePtr >> 2) {
      do {
        pvVar6 = (&pSVar26->vftablePtr->vfunction1)[iVar14];
        if (pvVar6 != (vfunction1 *)0x0) {
          (*(code *)**(undefined4 **)pvVar6)(1);
        }
        iVar14 = iVar14 + 1;
      } while (iVar14 < (pSVar26->SequentialBehavior_data).offset_0x0 - (int)pSVar26->vftablePtr >>
                        2);
    }
    FUN_0040d9d0(*(undefined4 *)(iVar12 + 0xa0));
    local_19c = (WalkPathBehavior **)0x0;
    local_198 = (WalkPathBehavior **)0x0;
    local_194 = (WalkPathBehavior **)0x0;
    local_8 = CONCAT31(local_8._1_3_,1);
    FUN_0063da20(1);
    if (local_198 != (WalkPathBehavior **)0x0) {
      *local_198 = (WalkPathBehavior *)0x0;
    }
    local_198 = local_198 + 1;
    local_230[0] = (WalkPathBehavior *)0x9;
    if ((local_230 < local_198) && (local_19c <= local_230)) {
      iVar14 = (int)local_230 - (int)local_19c;
      if ((local_198 == local_194) && ((int)local_194 - (int)local_198 >> 2 == 0)) {
        iVar12 = (int)local_198 - (int)local_19c >> 2;
        if (iVar12 == 0x3fffffff) {
                    /* WARNING: Subroutine does not return */
          std::_Xlength_error("vector<T> too long");
        }
        local_1a0 = (undefined4 *)(iVar12 + 1);
        uVar11 = (int)local_194 - (int)local_19c >> 2;
        if (0x3fffffff - (uVar11 >> 1) < uVar11) {
          puVar13 = (undefined4 *)0x0;
        }
        else {
          puVar13 = (undefined4 *)(uVar11 + (uVar11 >> 1));
        }
        if (puVar13 < local_1a0) {
          puVar13 = local_1a0;
        }
        FUN_0063da20(puVar13);
      }
      if (local_198 != (WalkPathBehavior **)0x0) {
        *local_198 = local_19c[iVar14 >> 2];
      }
    }
    else {
      if ((local_198 == local_194) && ((int)local_194 - (int)local_198 >> 2 == 0)) {
        iVar14 = (int)local_198 - (int)local_19c >> 2;
        if (iVar14 == 0x3fffffff) {
                    /* WARNING: Subroutine does not return */
          std::_Xlength_error("vector<T> too long");
        }
        uVar25 = (int)local_194 - (int)local_19c >> 2;
        uVar11 = iVar14 + 1;
        if (0x3fffffff - (uVar25 >> 1) < uVar25) {
          uVar25 = 0;
        }
        else {
          uVar25 = uVar25 + (uVar25 >> 1);
        }
        if (uVar25 < uVar11) {
          uVar25 = uVar11;
        }
        FUN_0063da20(uVar25);
      }
      if (local_198 != (WalkPathBehavior **)0x0) {
        *local_198 = (WalkPathBehavior *)0x9;
      }
    }
    local_198 = local_198 + 1;
    local_238[0] = (WalkPathBehavior *)0xb;
    if ((local_238 < local_198) && (local_19c <= local_238)) {
      iVar14 = (int)local_238 - (int)local_19c;
      if ((local_198 == local_194) && ((int)local_194 - (int)local_198 >> 2 == 0)) {
        iVar12 = (int)local_198 - (int)local_19c >> 2;
        if (iVar12 == 0x3fffffff) {
                    /* WARNING: Subroutine does not return */
          std::_Xlength_error("vector<T> too long");
        }
        local_1a0 = (undefined4 *)(iVar12 + 1);
        uVar11 = (int)local_194 - (int)local_19c >> 2;
        if (0x3fffffff - (uVar11 >> 1) < uVar11) {
          puVar13 = (undefined4 *)0x0;
        }
        else {
          puVar13 = (undefined4 *)(uVar11 + (uVar11 >> 1));
        }
        if (puVar13 < local_1a0) {
          puVar13 = local_1a0;
        }
        FUN_0063da20(puVar13);
      }
      if (local_198 != (WalkPathBehavior **)0x0) {
        *local_198 = local_19c[iVar14 >> 2];
      }
    }
    else {
      if ((local_198 == local_194) && ((int)local_194 - (int)local_198 >> 2 == 0)) {
        iVar14 = (int)local_198 - (int)local_19c >> 2;
        if (iVar14 == 0x3fffffff) {
                    /* WARNING: Subroutine does not return */
          std::_Xlength_error("vector<T> too long");
        }
        uVar25 = (int)local_194 - (int)local_19c >> 2;
        uVar11 = iVar14 + 1;
        if (0x3fffffff - (uVar25 >> 1) < uVar25) {
          uVar25 = 0;
        }
        else {
          uVar25 = uVar25 + (uVar25 >> 1);
        }
        if (uVar25 < uVar11) {
          uVar25 = uVar11;
        }
        FUN_0063da20(uVar25);
      }
      if (local_198 != (WalkPathBehavior **)0x0) {
        *local_198 = (WalkPathBehavior *)0xb;
      }
    }
    local_198 = local_198 + 1;
    local_204[0] = (WalkPathBehavior *)0x4;
    if ((local_204 < local_198) && (local_19c <= local_204)) {
      iVar14 = (int)local_204 - (int)local_19c;
      if ((local_198 == local_194) && ((int)local_194 - (int)local_198 >> 2 == 0)) {
        iVar12 = (int)local_198 - (int)local_19c >> 2;
        if (iVar12 == 0x3fffffff) {
                    /* WARNING: Subroutine does not return */
          std::_Xlength_error("vector<T> too long");
        }
        local_1a0 = (undefined4 *)(iVar12 + 1);
        uVar11 = (int)local_194 - (int)local_19c >> 2;
        if (0x3fffffff - (uVar11 >> 1) < uVar11) {
          puVar13 = (undefined4 *)0x0;
        }
        else {
          puVar13 = (undefined4 *)(uVar11 + (uVar11 >> 1));
        }
        if (puVar13 < local_1a0) {
          puVar13 = local_1a0;
        }
        FUN_0063da20(puVar13);
      }
      if (local_198 != (WalkPathBehavior **)0x0) {
        *local_198 = local_19c[iVar14 >> 2];
      }
    }
    else {
      if ((local_198 == local_194) && ((int)local_194 - (int)local_198 >> 2 == 0)) {
        iVar14 = (int)local_198 - (int)local_19c >> 2;
        if (iVar14 == 0x3fffffff) {
                    /* WARNING: Subroutine does not return */
          std::_Xlength_error("vector<T> too long");
        }
        uVar25 = (int)local_194 - (int)local_19c >> 2;
        uVar11 = iVar14 + 1;
        if (0x3fffffff - (uVar25 >> 1) < uVar25) {
          uVar25 = 0;
        }
        else {
          uVar25 = uVar25 + (uVar25 >> 1);
        }
        if (uVar25 < uVar11) {
          uVar25 = uVar11;
        }
        FUN_0063da20(uVar25);
      }
      if (local_198 != (WalkPathBehavior **)0x0) {
        *local_198 = (WalkPathBehavior *)0x4;
      }
    }
    local_198 = local_198 + 1;
    local_1fc = (WalkPathBehavior *)0x7;
    if ((&local_1fc < local_198) && (local_19c <= &local_1fc)) {
      iVar14 = (int)&local_1fc - (int)local_19c;
      if ((local_198 == local_194) && ((int)local_194 - (int)local_198 >> 2 == 0)) {
        iVar12 = (int)local_198 - (int)local_19c >> 2;
        if (iVar12 == 0x3fffffff) {
                    /* WARNING: Subroutine does not return */
          std::_Xlength_error("vector<T> too long");
        }
        local_1a0 = (undefined4 *)(iVar12 + 1);
        uVar11 = (int)local_194 - (int)local_19c >> 2;
        if (0x3fffffff - (uVar11 >> 1) < uVar11) {
          puVar13 = (undefined4 *)0x0;
        }
        else {
          puVar13 = (undefined4 *)(uVar11 + (uVar11 >> 1));
        }
        if (puVar13 < local_1a0) {
          puVar13 = local_1a0;
        }
        FUN_0063da20(puVar13);
      }
      if (local_198 != (WalkPathBehavior **)0x0) {
        *local_198 = local_19c[iVar14 >> 2];
      }
    }
    else {
      if ((local_198 == local_194) && ((int)local_194 - (int)local_198 >> 2 == 0)) {
        iVar14 = (int)local_198 - (int)local_19c >> 2;
        if (iVar14 == 0x3fffffff) {
                    /* WARNING: Subroutine does not return */
          std::_Xlength_error("vector<T> too long");
        }
        uVar25 = (int)local_194 - (int)local_19c >> 2;
        uVar11 = iVar14 + 1;
        if (0x3fffffff - (uVar25 >> 1) < uVar25) {
          uVar25 = 0;
        }
        else {
          uVar25 = uVar25 + (uVar25 >> 1);
        }
        if (uVar25 < uVar11) {
          uVar25 = uVar11;
        }
        FUN_0063da20(uVar25);
      }
      if (local_198 != (WalkPathBehavior **)0x0) {
        *local_198 = (WalkPathBehavior *)0x7;
      }
    }
    local_198 = local_198 + 1;
    local_218[0] = (WalkPathBehavior *)0xf;
    if ((local_218 < local_198) && (local_19c <= local_218)) {
      iVar14 = (int)local_218 - (int)local_19c;
      if ((local_198 == local_194) && ((int)local_194 - (int)local_198 >> 2 == 0)) {
        iVar12 = (int)local_198 - (int)local_19c >> 2;
        if (iVar12 == 0x3fffffff) {
                    /* WARNING: Subroutine does not return */
          std::_Xlength_error("vector<T> too long");
        }
        local_1a0 = (undefined4 *)(iVar12 + 1);
        uVar11 = (int)local_194 - (int)local_19c >> 2;
        if (0x3fffffff - (uVar11 >> 1) < uVar11) {
          puVar13 = (undefined4 *)0x0;
        }
        else {
          puVar13 = (undefined4 *)(uVar11 + (uVar11 >> 1));
        }
        if (puVar13 < local_1a0) {
          puVar13 = local_1a0;
        }
        FUN_0063da20(puVar13);
      }
      if (local_198 != (WalkPathBehavior **)0x0) {
        *local_198 = local_19c[iVar14 >> 2];
      }
    }
    else {
      if ((local_198 == local_194) && ((int)local_194 - (int)local_198 >> 2 == 0)) {
        iVar14 = (int)local_198 - (int)local_19c >> 2;
        if (iVar14 == 0x3fffffff) {
                    /* WARNING: Subroutine does not return */
          std::_Xlength_error("vector<T> too long");
        }
        uVar25 = (int)local_194 - (int)local_19c >> 2;
        uVar11 = iVar14 + 1;
        if (0x3fffffff - (uVar25 >> 1) < uVar25) {
          uVar25 = 0;
        }
        else {
          uVar25 = uVar25 + (uVar25 >> 1);
        }
        if (uVar25 < uVar11) {
          uVar25 = uVar11;
        }
        FUN_0063da20(uVar25);
      }
      if (local_198 != (WalkPathBehavior **)0x0) {
        *local_198 = (WalkPathBehavior *)0xf;
      }
    }
    local_198 = local_198 + 1;
    local_220 = (WalkPathBehavior *)0x2;
    if ((&local_220 < local_198) && (local_19c <= &local_220)) {
      iVar14 = (int)&local_220 - (int)local_19c;
      if ((local_198 == local_194) && ((int)local_194 - (int)local_198 >> 2 == 0)) {
        iVar12 = (int)local_198 - (int)local_19c >> 2;
        if (iVar12 == 0x3fffffff) {
                    /* WARNING: Subroutine does not return */
          std::_Xlength_error("vector<T> too long");
        }
        local_1a0 = (undefined4 *)(iVar12 + 1);
        uVar11 = (int)local_194 - (int)local_19c >> 2;
        if (0x3fffffff - (uVar11 >> 1) < uVar11) {
          puVar13 = (undefined4 *)0x0;
        }
        else {
          puVar13 = (undefined4 *)(uVar11 + (uVar11 >> 1));
        }
        if (puVar13 < local_1a0) {
          puVar13 = local_1a0;
        }
        FUN_0063da20(puVar13);
      }
      if (local_198 != (WalkPathBehavior **)0x0) {
        *local_198 = local_19c[iVar14 >> 2];
      }
    }
    else {
      if ((local_198 == local_194) && ((int)local_194 - (int)local_198 >> 2 == 0)) {
        iVar14 = (int)local_198 - (int)local_19c >> 2;
        if (iVar14 == 0x3fffffff) {
                    /* WARNING: Subroutine does not return */
          std::_Xlength_error("vector<T> too long");
        }
        uVar25 = (int)local_194 - (int)local_19c >> 2;
        uVar11 = iVar14 + 1;
        if (0x3fffffff - (uVar25 >> 1) < uVar25) {
          uVar25 = 0;
        }
        else {
          uVar25 = uVar25 + (uVar25 >> 1);
        }
        if (uVar25 < uVar11) {
          uVar25 = uVar11;
        }
        FUN_0063da20(uVar25);
      }
      if (local_198 != (WalkPathBehavior **)0x0) {
        *local_198 = (WalkPathBehavior *)0x2;
      }
    }
    local_198 = local_198 + 1;
    local_228[0] = (WalkPathBehavior *)0xd;
    if ((local_228 < local_198) && (local_19c <= local_228)) {
      iVar14 = (int)local_228 - (int)local_19c;
      if ((local_198 == local_194) && ((int)local_194 - (int)local_198 >> 2 == 0)) {
        iVar12 = (int)local_198 - (int)local_19c >> 2;
        if (iVar12 == 0x3fffffff) {
                    /* WARNING: Subroutine does not return */
          std::_Xlength_error("vector<T> too long");
        }
        local_1a0 = (undefined4 *)(iVar12 + 1);
        uVar11 = (int)local_194 - (int)local_19c >> 2;
        if (0x3fffffff - (uVar11 >> 1) < uVar11) {
          puVar13 = (undefined4 *)0x0;
        }
        else {
          puVar13 = (undefined4 *)(uVar11 + (uVar11 >> 1));
        }
        if (puVar13 < local_1a0) {
          puVar13 = local_1a0;
        }
        FUN_0063da20(puVar13);
      }
      if (local_198 != (WalkPathBehavior **)0x0) {
        *local_198 = local_19c[iVar14 >> 2];
      }
    }
    else {
      if ((local_198 == local_194) && ((int)local_194 - (int)local_198 >> 2 == 0)) {
        iVar14 = (int)local_198 - (int)local_19c >> 2;
        if (iVar14 == 0x3fffffff) {
                    /* WARNING: Subroutine does not return */
          std::_Xlength_error("vector<T> too long");
        }
        uVar25 = (int)local_194 - (int)local_19c >> 2;
        uVar11 = iVar14 + 1;
        if (0x3fffffff - (uVar25 >> 1) < uVar25) {
          uVar25 = 0;
        }
        else {
          uVar25 = uVar25 + (uVar25 >> 1);
        }
        if (uVar25 < uVar11) {
          uVar25 = uVar11;
        }
        FUN_0063da20(uVar25);
      }
      if (local_198 != (WalkPathBehavior **)0x0) {
        *local_198 = (WalkPathBehavior *)0xd;
      }
    }
    local_198 = local_198 + 1;
    local_21c = (WalkPathBehavior *)0x33;
    if ((&local_21c < local_198) && (local_19c <= &local_21c)) {
      iVar14 = (int)&local_21c - (int)local_19c;
      if ((local_198 == local_194) && ((int)local_194 - (int)local_198 >> 2 == 0)) {
        iVar12 = (int)local_198 - (int)local_19c >> 2;
        if (iVar12 == 0x3fffffff) {
                    /* WARNING: Subroutine does not return */
          std::_Xlength_error("vector<T> too long");
        }
        uVar11 = (int)local_194 - (int)local_19c >> 2;
        uVar25 = iVar12 + 1;
        if (0x3fffffff - (uVar11 >> 1) < uVar11) {
          uVar11 = 0;
        }
        else {
          uVar11 = uVar11 + (uVar11 >> 1);
        }
        if (uVar11 < uVar25) {
          uVar11 = uVar25;
        }
        FUN_0063da20(uVar11);
      }
      if (local_198 != (WalkPathBehavior **)0x0) {
        *local_198 = local_19c[iVar14 >> 2];
      }
    }
    else {
      if ((local_198 == local_194) && ((int)local_194 - (int)local_198 >> 2 == 0)) {
        iVar14 = (int)local_198 - (int)local_19c >> 2;
        if (iVar14 == 0x3fffffff) {
                    /* WARNING: Subroutine does not return */
          std::_Xlength_error("vector<T> too long");
        }
        uVar11 = (int)local_194 - (int)local_19c >> 2;
        uVar25 = iVar14 + 1;
        if (0x3fffffff - (uVar11 >> 1) < uVar11) {
          uVar11 = 0;
        }
        else {
          uVar11 = uVar11 + (uVar11 >> 1);
        }
        if (uVar11 < uVar25) {
          uVar11 = uVar25;
        }
        FUN_0063da20(uVar11);
      }
      if (local_198 != (WalkPathBehavior **)0x0) {
        *local_198 = (WalkPathBehavior *)0x33;
      }
    }
    local_198 = local_198 + 1;
    local_244 = 0x30;
    FUN_0066add0(&local_244);
    local_250 = 0x4c;
    FUN_0066add0(&local_250);
    local_1f4 = (WalkPathBehavior *)0x2d;
    FUN_0066add0(&local_1f4);
    local_204[1] = (WalkPathBehavior *)0x2b;
    FUN_0066add0(local_204 + 1);
    iVar14 = (int)local_198 - (int)local_19c;
    uVar11 = rand();
    local_1d8 = local_19c[uVar11 % (uint)(iVar14 >> 2)];
    pSVar15 = operator_new(0x10f0);
    if (pSVar15 == (Spawn *)0x0) {
      local_1b8 = (Spawn *)0x0;
    }
    else {
      local_1b8 = cube::Spawn::Spawn(pSVar15);
    }
    pSVar15 = local_1b8;
    local_1b0 = local_1b8;
    uVar11 = rand();
    uVar11 = uVar11 & 0x80000001;
    if ((int)uVar11 < 0) {
      uVar11 = (uVar11 - 1 | 0xfffffffe) + 1;
    }
    (pSVar15->Spawn_data).offset_0x24 = (-(uint)(uVar11 != 0) & 0xfffffffe) + 3;
    *(uint *)&(pSVar15->Spawn_data).field_0xc = local_1f0;
    *(uint *)&(pSVar15->Spawn_data).field_0x14 = local_1f8;
    *(WalkPathBehavior **)&(pSVar15->Spawn_data).field_0x1c = local_1bc;
    *(uint *)&(pSVar15->Spawn_data).field_0x10 = local_1dc;
    *(SequentialBehavior **)&(pSVar15->Spawn_data).field_0x18 = local_1cc;
    *(Spawn **)&(pSVar15->Spawn_data).field_0x20 = local_1a8;
    uVar16 = __alldiv(*(undefined4 *)&(pSVar15->Spawn_data).field_0x1c,local_1a8,0x10000,0);
    uVar17 = __alldiv(*(undefined4 *)&(pSVar15->Spawn_data).field_0x14,
                      *(undefined4 *)&(pSVar15->Spawn_data).field_0x18,0x10000,0);
    uVar18 = __alldiv(*(undefined4 *)&(pSVar15->Spawn_data).field_0xc,
                      *(undefined4 *)&(pSVar15->Spawn_data).field_0x10,0x10000,0);
    uVar16 = FUN_005f8590(uVar18,uVar17,uVar16,local_1d8);
    (pSVar15->Spawn_data).offset_0x28 = uVar16;
    (pSVar15->Spawn_data).offset_0x30 = local_1a4;
    (pSVar15->Spawn_data).offset_0x54 = 0;
    local_1c8 = operator_new(0xc);
    local_8._0_1_ = 2;
    if (local_1c8 == (Spawn *)0x0) {
      local_1cc = (SequentialBehavior *)0x0;
    }
    else {
      local_1cc = cube::SequentialBehavior::SequentialBehavior((SequentialBehavior *)local_1c8);
    }
    pSVar26 = local_1cc;
    local_8._0_1_ = 1;
    local_1c8 = operator_new(0x14);
    local_8._0_1_ = 3;
    if (local_1c8 == (Spawn *)0x0) {
      local_1ec = (CombatBehavior *)0x0;
    }
    else {
      local_1ec = cube::CombatBehavior::CombatBehavior((CombatBehavior *)local_1c8,0x41a00000);
    }
    iVar14 = (pSVar26->SequentialBehavior_data).offset_0x0;
    local_8._0_1_ = 1;
    iVar21 = FUN_00583cb0(iVar14,*(undefined4 *)(iVar14 + 4),&local_1ec);
    iVar12 = (pSVar26->SequentialBehavior_data).offset_0x4;
    if (iVar12 == 0x15555554) {
LAB_005d719c:
                    /* WARNING: Subroutine does not return */
      std::_Xlength_error("list<T> too long");
    }
    (pSVar26->SequentialBehavior_data).offset_0x4 = iVar12 + 1;
    *(int *)(iVar14 + 4) = iVar21;
    **(int **)(iVar21 + 4) = iVar21;
    local_1c8 = operator_new(4);
    local_8._0_1_ = 4;
    if (local_1c8 == (Spawn *)0x0) {
      local_208 = (LookAtPlayerBehavior *)0x0;
    }
    else {
      local_208 = cube::LookAtPlayerBehavior::LookAtPlayerBehavior
                            ((LookAtPlayerBehavior *)local_1c8);
    }
    iVar14 = (pSVar26->SequentialBehavior_data).offset_0x0;
    local_8._0_1_ = 1;
    iVar21 = FUN_00583cb0(iVar14,*(undefined4 *)(iVar14 + 4),&local_208);
    iVar12 = (pSVar26->SequentialBehavior_data).offset_0x4;
    if (iVar12 == 0x15555554) {
                    /* WARNING: Subroutine does not return */
      std::_Xlength_error("list<T> too long");
    }
    (pSVar26->SequentialBehavior_data).offset_0x4 = iVar12 + 1;
    *(int *)(iVar14 + 4) = iVar21;
    **(int **)(iVar21 + 4) = iVar21;
    local_1c8 = operator_new(0x1c);
    local_8._0_1_ = 5;
    if (local_1c8 == (Spawn *)0x0) {
      local_1bc = (WalkPathBehavior *)0x0;
    }
    else {
      local_1bc = cube::WalkPathBehavior::WalkPathBehavior((WalkPathBehavior *)local_1c8,0x41200000)
      ;
    }
    local_8 = CONCAT31(local_8._1_3_,1);
    local_1a8 = (Spawn *)0x14;
    do {
      iVar14 = rand();
      uVar11 = *(int *)(local_1b4 + 100) * 0x100 + 0x10 + iVar14 % 0xe0;
      pLVar27 = (LookAtPlayerBehavior *)(((int)uVar11 >> 0x1f) << 0x10 | uVar11 >> 0x10);
      local_208 = pLVar27;
      local_1ec = (CombatBehavior *)(uVar11 * 0x10000);
      iVar14 = rand();
      uVar25 = *local_1e8 * 0x100 + 0x10 + iVar14 % 0xe0;
      local_204[1] = (WalkPathBehavior *)(((int)uVar25 >> 0x1f) << 0x10 | uVar25 >> 0x10);
      local_1f4 = (WalkPathBehavior *)(uVar25 * 0x10000);
      local_38 = local_1f4;
      local_34 = local_204[1];
      local_30 = (CombatBehavior *)(uVar11 * 0x10000);
      local_2c = pLVar27;
      iVar14 = FUN_004347a0(local_1c0,local_1d4,local_1b4);
      uVar11 = *(uint *)(iVar14 + 0x14);
      uVar25 = ((int)uVar11 >> 0x1f) << 0x10 | uVar11 >> 0x10;
      uVar11 = uVar11 << 0x10;
      iVar14 = 0;
      do {
        local_28 = uVar11;
        local_24 = uVar25;
        iVar12 = FUN_0042f860(local_1f4,local_204[1],local_1ec,local_208,uVar11,uVar25,local_1b4);
        local_218[2] = local_1bc;
        if (((*(byte *)(iVar12 + 3) & 0x1f) == 0) || ((*(byte *)(iVar12 + 3) & 0x1f) == 2)) break;
        bVar29 = 0xfffeffff < uVar11;
        uVar11 = uVar11 + 0x10000;
        uVar25 = uVar25 + bVar29;
        iVar14 = iVar14 + 1;
        local_28 = uVar11;
        local_24 = uVar25;
      } while (iVar14 < 100);
      FUN_005bf4f0(local_40 + 2);
      pSVar26 = local_1cc;
      local_1a8 = (Spawn *)((int)&local_1a8[-1].Spawn_data.offset_0xf6c + 3);
    } while (local_1a8 != (Spawn *)0x0);
    iVar14 = (local_1cc->SequentialBehavior_data).offset_0x0;
    iVar21 = FUN_00583cb0(iVar14,*(undefined4 *)(iVar14 + 4),local_218 + 2);
    iVar12 = (pSVar26->SequentialBehavior_data).offset_0x4;
    if (iVar12 == 0x15555554) {
                    /* WARNING: Subroutine does not return */
      std::_Xlength_error("list<T> too long");
    }
    (pSVar26->SequentialBehavior_data).offset_0x4 = iVar12 + 1;
    *(int *)(iVar14 + 4) = iVar21;
    **(int **)(iVar21 + 4) = iVar21;
    local_1c8 = operator_new(8);
    local_8._0_1_ = 6;
    if (local_1c8 == (Spawn *)0x0) {
      local_230[1] = (WalkPathBehavior *)0x0;
    }
    else {
      local_230[1] = (WalkPathBehavior *)
                     cube::RandomWalkBehavior::RandomWalkBehavior((RandomWalkBehavior *)local_1c8);
    }
    iVar14 = (pSVar26->SequentialBehavior_data).offset_0x0;
    local_8._0_1_ = 1;
    iVar21 = FUN_00583cb0(iVar14,*(undefined4 *)(iVar14 + 4),local_230 + 1);
    pSVar15 = local_1b8;
    pSVar7 = local_1d0;
    iVar12 = (pSVar26->SequentialBehavior_data).offset_0x4;
    if (iVar12 == 0x15555554) {
                    /* WARNING: Subroutine does not return */
      std::_Xlength_error("list<T> too long");
    }
    (pSVar26->SequentialBehavior_data).offset_0x4 = iVar12 + 1;
    *(int *)(iVar14 + 4) = iVar21;
    **(int **)(iVar21 + 4) = iVar21;
    *(SequentialBehavior **)&local_1b8[1].Spawn_data.field_0x124 = pSVar26;
    uVar11 = *(uint *)(local_1b4 + 100);
    uVar25 = *local_1e8;
    uVar22 = uVar11 * 0x10000 + uVar25;
    iVar14 = (local_1d0->SequentialBehavior_data).offset_0x0 - (int)local_1d0->vftablePtr;
    uVar19 = iVar14 >> 2;
    uVar23 = uVar22 * 0x100;
    (local_1b8->Spawn_data).offset_0x44 = uVar23 + uVar19;
    (local_1b8->Spawn_data).offset_0x48 =
         (((((int)uVar11 >> 0x1f) << 0x10 | uVar11 >> 0x10) + ((int)uVar25 >> 0x1f) +
          (uint)CARRY4(uVar11 * 0x10000,uVar25)) * 0x100 | uVar22 >> 0x18) + (iVar14 >> 0x1f) +
         (uint)CARRY4(uVar23,uVar19);
    uVar11 = rand();
    uVar11 = uVar11 & 0x80000001;
    if ((int)uVar11 < 0) {
      uVar11 = (uVar11 - 1 | 0xfffffffe) + 1;
    }
    local_18c = 0;
    local_188 = 0;
    local_184 = 0;
    local_182 = 0;
    local_7c = 0;
    memset(local_17c,0,0x100);
    local_180 = *(undefined2 *)&(pSVar15->Spawn_data).offset_0x30;
    local_190[0] = 0x101;
    if (0 < (int)uVar11) {
      do {
        FUN_0046ebe0(local_190,0xffffffff);
        uVar11 = uVar11 - 1;
      } while (uVar11 != 0);
    }
    FUN_0066add0(&local_1b0);
    iVar14 = rand();
    dVar30 = (double)((float)iVar14 / 32767.0);
    libm_sse2_pow_precise();
    local_218[2] = (WalkPathBehavior *)(int)((float)dVar30 * 4.0);
    if (0 < (int)local_218[2]) {
      local_1c0 = 1;
      do {
        uVar11 = local_1c0;
        pSVar15 = operator_new(0x10f0);
        if (pSVar15 == (Spawn *)0x0) {
          local_1a8 = (Spawn *)0x0;
        }
        else {
          local_1a8 = cube::Spawn::Spawn(pSVar15);
        }
        pSVar15 = local_1a8;
        (local_1a8->Spawn_data).offset_0x24 = (local_1b0->Spawn_data).offset_0x24;
        *(undefined4 *)&(local_1a8->Spawn_data).field_0xc =
             *(undefined4 *)&(local_1b0->Spawn_data).field_0xc;
        *(undefined4 *)&(local_1a8->Spawn_data).field_0x10 =
             *(undefined4 *)&(local_1b0->Spawn_data).field_0x10;
        *(undefined4 *)&(local_1a8->Spawn_data).field_0x14 =
             *(undefined4 *)&(local_1b0->Spawn_data).field_0x14;
        *(undefined4 *)&(local_1a8->Spawn_data).field_0x18 =
             *(undefined4 *)&(local_1b0->Spawn_data).field_0x18;
        *(undefined4 *)&(local_1a8->Spawn_data).field_0x1c =
             *(undefined4 *)&(local_1b0->Spawn_data).field_0x1c;
        *(undefined4 *)&(local_1a8->Spawn_data).field_0x20 =
             *(undefined4 *)&(local_1b0->Spawn_data).field_0x20;
        uVar25 = uVar11 & 0x80000001;
        if ((int)uVar25 < 0) {
          uVar25 = (uVar25 - 1 | 0xfffffffe) + 1;
        }
        puVar1 = &(local_1b0->Spawn_data).field_0xc;
        uVar19 = *(uint *)puVar1;
        *(uint *)puVar1 = *(int *)puVar1 + uVar25 * 0x10000;
        puVar1 = &(local_1b0->Spawn_data).field_0x10;
        *(uint *)puVar1 =
             *(int *)puVar1 + (((int)uVar25 >> 0x1f) << 0x10 | uVar25 >> 0x10) +
             (uint)CARRY4(uVar19,uVar25 * 0x10000);
        uVar11 = (int)uVar11 / 2;
        puVar1 = &(local_1b0->Spawn_data).field_0x14;
        uVar25 = *(uint *)puVar1;
        *(uint *)puVar1 = *(int *)puVar1 + uVar11 * 0x10000;
        puVar1 = &(local_1b0->Spawn_data).field_0x18;
        *(uint *)puVar1 =
             *(int *)puVar1 + (((int)uVar11 >> 0x1f) << 0x10 | uVar11 >> 0x10) +
             (uint)CARRY4(uVar25,uVar11 * 0x10000);
        local_1c8 = local_1a8;
        uVar16 = __alldiv(*(undefined4 *)&(local_1a8->Spawn_data).field_0x1c,
                          *(undefined4 *)&(local_1a8->Spawn_data).field_0x20,0x10000,0);
        uVar17 = __alldiv(*(undefined4 *)&(pSVar15->Spawn_data).field_0x14,
                          *(undefined4 *)&(pSVar15->Spawn_data).field_0x18,0x10000,0);
        uVar18 = __alldiv(*(undefined4 *)&(local_1a8->Spawn_data).field_0xc,
                          *(undefined4 *)&(local_1a8->Spawn_data).field_0x10,0x10000,0);
        uVar16 = FUN_005f8590(uVar18,uVar17,uVar16,local_1d8);
        pSVar15 = local_1a8;
        (local_1a8->Spawn_data).offset_0x28 = uVar16;
        (local_1a8->Spawn_data).offset_0x30 = (local_1b0->Spawn_data).offset_0x30;
        (local_1a8->Spawn_data).offset_0x54 = (local_1b0->Spawn_data).offset_0x54;
        local_1c4 = operator_new(0xc);
        local_8._0_1_ = 7;
        if (local_1c4 == (WalkPathBehavior *)0x0) {
          local_1d0 = (SequentialBehavior *)0x0;
        }
        else {
          local_1d0 = cube::SequentialBehavior::SequentialBehavior((SequentialBehavior *)local_1c4);
        }
        pSVar26 = local_1d0;
        local_8._0_1_ = 1;
        local_1c4 = operator_new(0x14);
        local_8._0_1_ = 8;
        if (local_1c4 == (WalkPathBehavior *)0x0) {
          local_20c = (CombatBehavior *)0x0;
        }
        else {
          local_20c = cube::CombatBehavior::CombatBehavior((CombatBehavior *)local_1c4,0x41a00000);
        }
        pSVar28 = &pSVar26->SequentialBehavior_data;
        local_230[1] = (WalkPathBehavior *)pSVar28->offset_0x0;
        local_8._0_1_ = 1;
        iVar12 = FUN_00583cb0(local_230[1],
                              (((RandomWalkBehavior *)local_230[1])->RandomWalkBehavior_data).
                              offset_0x0,&local_20c);
        iVar14 = (pSVar26->SequentialBehavior_data).offset_0x4;
        if (iVar14 == 0x15555554) goto LAB_005d719c;
        (pSVar26->SequentialBehavior_data).offset_0x4 = iVar14 + 1;
        ((RandomWalkBehavior_data *)&local_230[1]->WalkPathBehavior_data)->offset_0x0 = iVar12;
        **(int **)(iVar12 + 4) = iVar12;
        local_1c4 = operator_new(4);
        local_8._0_1_ = 9;
        if (local_1c4 == (WalkPathBehavior *)0x0) {
          local_228[1] = (WalkPathBehavior *)0x0;
        }
        else {
          local_228[1] = (WalkPathBehavior *)
                         cube::LookAtPlayerBehavior::LookAtPlayerBehavior
                                   ((LookAtPlayerBehavior *)local_1c4);
        }
        local_20c = (CombatBehavior *)pSVar28->offset_0x0;
        local_8._0_1_ = 1;
        iVar12 = FUN_00583cb0(local_20c,(local_20c->CombatBehavior_data).offset_0x0,local_228 + 1);
        iVar14 = (pSVar26->SequentialBehavior_data).offset_0x4;
        if (iVar14 == 0x15555554) goto LAB_005d719c;
        (pSVar26->SequentialBehavior_data).offset_0x4 = iVar14 + 1;
        (local_20c->CombatBehavior_data).offset_0x0 = iVar12;
        **(int **)(iVar12 + 4) = iVar12;
        local_1c4 = operator_new(0x10);
        local_8._0_1_ = 10;
        if (local_1c4 == (WalkPathBehavior *)0x0) {
          local_218[1] = (WalkPathBehavior *)0x0;
        }
        else {
          local_218[1] = (WalkPathBehavior *)
                         cube::CompanionBehavior::CompanionBehavior
                                   ((CompanionBehavior *)local_1c4,
                                    (local_1b0->Spawn_data).offset_0x44,
                                    (local_1b0->Spawn_data).offset_0x48);
        }
        local_228[1] = (WalkPathBehavior *)pSVar28->offset_0x0;
        local_8._0_1_ = 1;
        pLVar20 = (LookAtPlayerBehavior_vftable *)
                  FUN_00583cb0(local_228[1],
                               ((LookAtPlayerBehavior *)((int)local_228[1] + 4))->vftablePtr,
                               local_218 + 1);
        iVar14 = (pSVar26->SequentialBehavior_data).offset_0x4;
        if (iVar14 == 0x15555554) goto LAB_005d719c;
        (pSVar26->SequentialBehavior_data).offset_0x4 = iVar14 + 1;
        ((LookAtPlayerBehavior *)((int)local_228[1] + 4))->vftablePtr = pLVar20;
        *(LookAtPlayerBehavior_vftable **)pLVar20->vfunction2 = pLVar20;
        local_1c4 = operator_new(0x1c);
        local_8._0_1_ = 0xb;
        if (local_1c4 == (WalkPathBehavior *)0x0) {
          local_238[1] = (WalkPathBehavior *)0x0;
        }
        else {
          local_238[1] = cube::WalkPathBehavior::WalkPathBehavior(local_1c4,(int)local_1bc);
        }
        local_218[1] = (WalkPathBehavior *)pSVar28->offset_0x0;
        local_8._0_1_ = 1;
        iVar12 = FUN_00583cb0(local_218[1],
                              *(undefined4 *)
                               &((CompanionBehavior *)local_218[1])->CompanionBehavior_data,
                              local_238 + 1);
        iVar14 = (pSVar26->SequentialBehavior_data).offset_0x4;
        if (iVar14 == 0x15555554) goto LAB_005d719c;
        (pSVar26->SequentialBehavior_data).offset_0x4 = iVar14 + 1;
        *(int *)&local_218[1]->WalkPathBehavior_data = iVar12;
        **(int **)(iVar12 + 4) = iVar12;
        local_1c4 = operator_new(8);
        local_8._0_1_ = 0xc;
        if (local_1c4 == (WalkPathBehavior *)0x0) {
          local_1c4 = (WalkPathBehavior *)0x0;
        }
        else {
          local_1c4 = (WalkPathBehavior *)
                      cube::RandomWalkBehavior::RandomWalkBehavior((RandomWalkBehavior *)local_1c4);
        }
        local_238[1] = (WalkPathBehavior *)pSVar28->offset_0x0;
        local_8._0_1_ = 1;
        iVar12 = FUN_00583cb0(local_238[1],(local_238[1]->WalkPathBehavior_data).offset_0x0,
                              &local_1c4);
        iVar14 = (pSVar26->SequentialBehavior_data).offset_0x4;
        if (iVar14 == 0x15555554) goto LAB_005d719c;
        (pSVar26->SequentialBehavior_data).offset_0x4 = iVar14 + 1;
        (local_238[1]->WalkPathBehavior_data).offset_0x0 = iVar12;
        **(int **)(iVar12 + 4) = iVar12;
        *(SequentialBehavior **)&pSVar15[1].Spawn_data.field_0x124 = local_1d0;
        uVar11 = rand();
        uVar11 = uVar11 & 0x80000001;
        if ((int)uVar11 < 0) {
          uVar11 = (uVar11 - 1 | 0xfffffffe) + 1;
        }
        if (0 < (int)uVar11) {
          do {
            FUN_0046ebe0(local_190,0xffffffff);
            uVar11 = uVar11 - 1;
          } while (uVar11 != 0);
        }
        FUN_0066add0(&local_1c8);
        uVar11 = local_1c0 + 1;
        bVar29 = (int)local_1c0 < (int)local_218[2];
        local_1c0 = uVar11;
      } while (bVar29);
    }
    uVar11 = *(uint *)(local_1b4 + 0xa0);
    if ((int)uVar11 < (pSVar7->SequentialBehavior_data).offset_0x0 - (int)pSVar7->vftablePtr >> 2) {
      do {
        uVar25 = *(uint *)(local_1b4 + 100);
        uVar19 = *local_1e8;
        uVar22 = uVar25 * 0x10000 + uVar19;
        uVar23 = uVar22 * 0x100;
        pvVar6 = (&pSVar7->vftablePtr->vfunction1)[uVar11];
        *(uint *)(pvVar6 + 0x48) = uVar23 + uVar11;
        *(uint *)(pvVar6 + 0x4c) =
             (((((int)uVar25 >> 0x1f) << 0x10 | uVar25 >> 0x10) + ((int)uVar19 >> 0x1f) +
              (uint)CARRY4(uVar25 * 0x10000,uVar19)) * 0x100 | uVar22 >> 0x18) +
             ((int)uVar11 >> 0x1f) + (uint)CARRY4(uVar23,uVar11);
        pvVar6 = (&pSVar7->vftablePtr->vfunction1)[uVar11];
        FUN_0043f7c0(pvVar6 + 0x2c,pvVar6 + 0x74,0);
        FUN_005c7730((&pSVar7->vftablePtr->vfunction1)[uVar11],0);
        uVar11 = uVar11 + 1;
      } while ((int)uVar11 <
               (pSVar7->SequentialBehavior_data).offset_0x0 - (int)pSVar7->vftablePtr >> 2);
    }
    local_8 = (uint)local_8._1_3_ << 8;
    if (local_19c != (WalkPathBehavior **)0x0) {
      std::_Container_base0::_Orphan_all((_Container_base0 *)&local_19c);
                    /* WARNING: Subroutine does not return */
      operator_delete(local_19c);
    }
    puVar13 = (undefined4 *)*local_1e4;
    *local_1e4 = local_1e4;
    local_1e4[1] = local_1e4;
    if (puVar13 != local_1e4) {
                    /* WARNING: Subroutine does not return */
      operator_delete(puVar13);
    }
                    /* WARNING: Subroutine does not return */
    operator_delete(local_1e4);
  }
LAB_005d7a51:
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}


/* FUN_005d7a70 @ 005d7a70  kind=gamemisc  attributed-by=caller-vote  size=1252 */

int * FUN_005d7a70(int param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  int in_ECX;
  bool bVar6;
  bool bVar7;
  float10 fVar8;
  float10 fVar9;
  float fVar10;
  double dVar11;
  
  if ((((param_1 < 0) || (param_2 < 0)) || (0x3ff < param_1)) || (0x3ff < param_2)) {
    return (int *)0x0;
  }
  iVar1 = param_1 * 0x400 + param_2;
  piVar2 = *(int **)(in_ECX + 0x4000bc + iVar1 * 4);
  if (piVar2 != (int *)0x0) {
    return piVar2;
  }
  srand(param_1 + 0x108a + param_2 * 0x400 + *(int *)(in_ECX + 0x800188) * 3);
  piVar2 = operator_new(0x1c);
  piVar2[5] = param_2 * 0x400 + param_1 + *(int *)(in_ECX + 0x800188);
  *(undefined1 *)(piVar2 + 2) = 0;
  iVar3 = (int)*(float *)(in_ECX + 0x8000f0) + ((int)*(float *)(in_ECX + 0x8000f0) >> 0x1f & 0xffU);
  if ((param_1 != (int)((iVar3 >> 8) + (iVar3 >> 0x1f & 0x3fU)) >> 6) ||
     (bVar7 = true,
     iVar3 = (int)*(float *)(in_ECX + 0x8000f4) +
             ((int)*(float *)(in_ECX + 0x8000f4) >> 0x1f & 0xffU),
     param_2 != (int)((iVar3 >> 8) + (iVar3 >> 0x1f & 0x3fU)) >> 6)) {
    bVar7 = false;
  }
  uVar4 = rand();
  uVar4 = uVar4 & 0x80000001;
  bVar6 = uVar4 == 0;
  if ((int)uVar4 < 0) {
    bVar6 = (uVar4 - 1 | 0xfffffffe) == 0xffffffff;
  }
  if ((bVar6) || (bVar7)) {
    iVar3 = rand();
    piVar2[3] = (int)(((float)iVar3 * 0.4) / 32767.0 + 0.3);
    iVar3 = rand();
    piVar2[4] = (int)(((float)iVar3 * 0.4) / 32767.0 + 0.4);
    if (bVar7) {
      iVar3 = (int)*(float *)(in_ECX + 0x8000f0);
      piVar2[1] = (int)*(float *)(in_ECX + 0x8000f4);
      goto LAB_005d7d29;
    }
    iVar3 = rand();
    if (iVar3 % 10 == 0) {
      *(undefined1 *)(piVar2 + 2) = 1;
      iVar3 = rand();
      piVar2[4] = (int)(((float)iVar3 * 0.2) / 32767.0 + 0.8);
      iVar3 = rand();
      piVar2[3] = (int)(((float)iVar3 * 0.5) / 32767.0);
    }
  }
  else {
    uVar4 = rand();
    uVar4 = uVar4 & 0x80000001;
    bVar6 = uVar4 == 0;
    if ((int)uVar4 < 0) {
      bVar6 = (uVar4 - 1 | 0xfffffffe) == 0xffffffff;
    }
    if (bVar6) {
      iVar3 = rand();
      fVar10 = ((float)iVar3 * 0.1) / 32767.0;
    }
    else {
      iVar3 = rand();
      fVar10 = ((float)iVar3 * 0.1) / 32767.0 + 0.9;
    }
    piVar2[3] = (int)fVar10;
    uVar4 = rand();
    uVar4 = uVar4 & 0x80000001;
    bVar6 = uVar4 == 0;
    if ((int)uVar4 < 0) {
      bVar6 = (uVar4 - 1 | 0xfffffffe) == 0xffffffff;
    }
    if (bVar6) {
      iVar3 = rand();
      piVar2[4] = (int)(((float)iVar3 * 0.1) / 32767.0);
    }
    else {
      iVar3 = rand();
      piVar2[4] = (int)(((float)iVar3 * 0.1) / 32767.0 + 0.9);
    }
  }
  iVar3 = rand();
  iVar5 = rand();
  piVar2[1] = param_2 * 0x4000 + iVar3 % 0x3c00 + 0x200;
  iVar3 = param_1 * 0x4000 + 0x200 + iVar5 % 0x3c00;
LAB_005d7d29:
  *piVar2 = iVar3;
  *piVar2 = (iVar3 + (iVar3 >> 0x1f & 0x7ffU) & 0xfffff800) + 0x400;
  piVar2[1] = (piVar2[1] + (piVar2[1] >> 0x1f & 0x7ffU) & 0xfffff800) + 0x400;
  dVar11 = (double)*(int *)(in_ECX + 0x800188);
  fVar8 = (float10)FUN_004c0ef0((double)param_1 * 1.4 + dVar11,
                                (double)param_2 * 1.4 + dVar11 + 843.0);
  fVar9 = (float10)FUN_004c0ef0((double)param_1 * 4.0 + dVar11,
                                (double)param_2 * 4.0 + dVar11 + 843.0);
  iVar3 = (int)((((float)fVar8 + 1.0) * 100.0 - 70.0) + (float)fVar9 * 30.0);
  piVar2[6] = iVar3;
  if (iVar3 < 1) {
    *(undefined1 *)(piVar2 + 2) = 0;
    if (bVar7) {
      iVar3 = rand();
      piVar2[6] = iVar3 % 0x32 + 0x14;
      *(int **)(in_ECX + 0x4000bc + iVar1 * 4) = piVar2;
      return piVar2;
    }
    piVar2[6] = piVar2[6] + -100;
    iVar3 = piVar2[6];
    if (iVar3 < -100) {
      iVar3 = -100;
    }
    piVar2[6] = iVar3;
    uVar4 = rand();
    uVar4 = uVar4 & 0x80000001;
    bVar7 = uVar4 == 0;
    if ((int)uVar4 < 0) {
      bVar7 = (uVar4 - 1 | 0xfffffffe) == 0xffffffff;
    }
    if (bVar7) {
      iVar3 = rand();
      piVar2[3] = (int)(((float)iVar3 * 0.1) / 32767.0 + 0.9);
      iVar3 = rand();
      fVar10 = ((float)iVar3 * 0.1) / 32767.0 + 0.9;
    }
    else {
      iVar3 = rand();
      piVar2[3] = (int)(((float)iVar3 * 0.4) / 32767.0 + 0.3);
      iVar3 = rand();
      fVar10 = ((float)iVar3 * 0.4) / 32767.0 + 0.4;
    }
    piVar2[4] = (int)fVar10;
  }
  *(int **)(in_ECX + 0x4000bc + iVar1 * 4) = piVar2;
  return piVar2;
}


/* FUN_005d9460 @ 005d9460  kind=gamemisc  attributed-by=caller-vote  size=1642 */

void FUN_005d9460(int param_1)

{
  undefined1 *puVar1;
  char cVar2;
  byte bVar3;
  vfunction1 *pvVar4;
  int *piVar5;
  int iVar6;
  int *piVar7;
  CombatBehavior_vftable *pCVar8;
  CombatBehavior_vftable *pCVar9;
  int *piVar10;
  undefined4 *puVar11;
  int *piVar12;
  Spawn *pSVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  vfunction2 *in_ECX;
  uint uVar16;
  SequentialBehavior *pSVar17;
  uint uVar18;
  uint uVar19;
  int iVar20;
  int iVar21;
  uint uVar22;
  uint uVar23;
  int iVar24;
  CombatBehavior *pCVar25;
  undefined1 local_14c [8];
  CombatBehavior_vftable local_144;
  int local_13c;
  CombatBehavior *local_138;
  CombatBehavior *local_134;
  SequentialBehavior *local_130;
  undefined1 local_12c [280];
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006f415a;
  local_10 = ExceptionList;
  local_14 = DAT_0076aa78 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_13c = param_1;
  if (*(int *)(in_ECX + 0xa4) != 0) {
    iVar21 = *(int *)(param_1 + 0xa0);
    pCVar25 = (CombatBehavior *)(param_1 + 0x18);
    local_144.vfunction2 = in_ECX;
    local_134 = pCVar25;
    if (iVar21 < *(int *)(param_1 + 0x1c) - (int)pCVar25->vftablePtr >> 2) {
      do {
        FUN_00477d90(&local_130,(&pCVar25->vftablePtr->vfunction1)[iVar21] + 0x48);
        if ((local_130 != *(SequentialBehavior **)(in_ECX + 4)) &&
           (local_130[2].vftablePtr != (SequentialBehavior_vftable *)0x0)) {
          (**(code **)(local_130[2].vftablePtr)->vfunction1)(1);
          puVar11 = (undefined4 *)
                    FUN_00609280(local_14c,(&pCVar25->vftablePtr->vfunction1)[iVar21] + 0x48);
          FUN_0067eb10(&local_138,*puVar11,puVar11[1]);
        }
        pvVar4 = (&pCVar25->vftablePtr->vfunction1)[iVar21];
        if (pvVar4 != (vfunction1 *)0x0) {
          (*(code *)**(undefined4 **)pvVar4)(1);
        }
        iVar21 = iVar21 + 1;
      } while (iVar21 < *(int *)(param_1 + 0x1c) - (int)pCVar25->vftablePtr >> 2);
    }
    FUN_0040d9d0(*(undefined4 *)(local_13c + 0xa0));
    iVar21 = 0;
    piVar5 = *(int **)(local_144.vfunction2 + 4);
    piVar12 = (int *)*piVar5;
    if (piVar12 != piVar5) {
      iVar24 = 0;
      do {
        iVar6 = piVar12[6];
        if ((iVar6 != 0) && (*(char *)(iVar6 + 0x60) == '\0')) {
          if ((iVar24 == 0) || (iVar20 = *(int *)(iVar6 + 400), iVar20 < iVar24)) {
            iVar20 = *(int *)(iVar6 + 400);
            iVar24 = iVar20;
          }
          if ((iVar21 == 0) || (iVar21 < iVar20)) {
            iVar21 = iVar20;
          }
        }
        if (*(char *)((int)piVar12 + 0xd) == '\0') {
          piVar7 = (int *)piVar12[2];
          if (*(char *)((int)piVar7 + 0xd) == '\0') {
            cVar2 = *(char *)(*piVar7 + 0xd);
            piVar12 = piVar7;
            piVar7 = (int *)*piVar7;
            while (cVar2 == '\0') {
              cVar2 = *(char *)(*piVar7 + 0xd);
              piVar12 = piVar7;
              piVar7 = (int *)*piVar7;
            }
          }
          else {
            cVar2 = *(char *)(piVar12[1] + 0xd);
            piVar10 = (int *)piVar12[1];
            piVar7 = piVar12;
            while ((piVar12 = piVar10, cVar2 == '\0' && (piVar7 == (int *)piVar12[2]))) {
              cVar2 = *(char *)(piVar12[1] + 0xd);
              piVar10 = (int *)piVar12[1];
              piVar7 = piVar12;
            }
          }
        }
        pCVar25 = local_134;
      } while (piVar12 != piVar5);
    }
    uVar16 = (int)((*(int *)(local_13c + 100) >> 0x1f & 7U) + *(int *)(local_13c + 100)) >> 3;
    uVar22 = (int)((*(int *)(local_13c + 0x60) >> 0x1f & 7U) + *(int *)(local_13c + 0x60)) >> 3;
    if ((((-1 < (int)uVar22) && (-1 < (int)uVar16)) && ((int)uVar22 < 0x2000)) &&
       ((int)uVar16 < 0x2000)) {
      local_134 = (CombatBehavior *)((int)(uVar16 * 8 + ((int)(uVar16 * 8) >> 0x1f & 0x3fU)) >> 6);
      iVar21 = (int)(uVar22 * 8 + ((int)(uVar22 * 8) >> 0x1f & 0x3fU)) >> 6;
      if (((-1 < iVar21) && (-1 < (int)local_134)) &&
         ((iVar21 < 0x400 &&
          (((int)local_134 < 0x400 &&
           (*(int *)(local_144.vfunction2 + ((int)local_134 + iVar21 * 0x400) * 4 + 0xbc) != 0))))))
      {
        uVar22 = uVar22 & 0x80000007;
        if ((int)uVar22 < 0) {
          uVar22 = (uVar22 - 1 | 0xfffffff8) + 1;
        }
        uVar16 = uVar16 & 0x80000007;
        if ((int)uVar16 < 0) {
          uVar16 = (uVar16 - 1 | 0xfffffff8) + 1;
        }
        local_130 = (SequentialBehavior *)
                    ((uVar16 + uVar22 * 8) * 0x68 + 0x14018 +
                    *(int *)(local_144.vfunction2 + ((int)local_134 + iVar21 * 0x400) * 4 + 0xbc));
        if ((local_130 != (SequentialBehavior *)0x0) &&
           (local_130[7].vftablePtr != (SequentialBehavior_vftable *)0x0)) {
          iVar21 = 0;
          pSVar17 = local_130 + 8;
          do {
            if (pSVar17->vftablePtr !=
                *(SequentialBehavior_vftable **)((local_13c - (int)local_130) + (int)pSVar17))
            goto LAB_005d9a9e;
            iVar21 = iVar21 + 1;
            pSVar17 = (SequentialBehavior *)&pSVar17->SequentialBehavior_data;
          } while (iVar21 < 2);
          pSVar13 = operator_new(0x10f0);
          if (pSVar13 == (Spawn *)0x0) {
            pSVar13 = (Spawn *)0x0;
          }
          else {
            pSVar13 = cube::Spawn::Spawn(pSVar13);
          }
          (pSVar13->Spawn_data).offset_0x24 = 1;
          if (local_130[4].SequentialBehavior_data.offset_0x0 == 1) {
            puVar1 = &(pSVar13->Spawn_data).field_0x76;
            *(ushort *)puVar1 = *(ushort *)puVar1 | 0x2000;
          }
          uVar16 = *(int *)(local_13c + 100) * 0x100 + 0x80;
          uVar22 = *(int *)(local_13c + 0x60) * 0x100 + 0x80;
          uVar23 = ((int)uVar16 >> 0x1f) << 0x10 | uVar16 >> 0x10;
          *(uint *)&(pSVar13->Spawn_data).field_0xc = uVar22 * 0x10000;
          *(uint *)&(pSVar13->Spawn_data).field_0x10 =
               ((int)uVar22 >> 0x1f) << 0x10 | uVar22 >> 0x10;
          *(uint *)&(pSVar13->Spawn_data).field_0x14 = uVar16 * 0x10000;
          *(uint *)&(pSVar13->Spawn_data).field_0x18 = uVar23;
          *(undefined4 *)&(pSVar13->Spawn_data).field_0x1c = 0;
          *(undefined4 *)&(pSVar13->Spawn_data).field_0x20 = 0;
          iVar21 = local_13c;
          local_144.vfunction1 = (vfunction1 *)pSVar13;
          uVar14 = __alldiv(uVar16 * 0x10000,uVar23,0x10000,0);
          uVar15 = __alldiv(*(undefined4 *)&(pSVar13->Spawn_data).field_0xc,
                            *(undefined4 *)&(pSVar13->Spawn_data).field_0x10,0x10000,0);
          iVar21 = FUN_004347a0(uVar15,uVar14,iVar21);
          uVar16 = *(int *)(iVar21 + 0x1c) + *(int *)(iVar21 + 0x10);
          *(uint *)&(pSVar13->Spawn_data).field_0x1c = uVar16 * 0x10000;
          *(uint *)&(pSVar13->Spawn_data).field_0x20 =
               ((int)uVar16 >> 0x1f) << 0x10 | uVar16 >> 0x10;
          (pSVar13->Spawn_data).offset_0x28 = local_130[7].vftablePtr;
          (pSVar13->Spawn_data).offset_0x30 = local_130[7].SequentialBehavior_data.offset_0x0;
          bVar3 = (byte)local_130[7].SequentialBehavior_data.offset_0x4;
          (pSVar13->Spawn_data).offset_0x54 = bVar3;
          uVar16 = bVar3 + 1;
          iVar21 = rand();
          if (iVar21 % 0x14 == 0) {
            uVar16 = bVar3 + 2;
          }
          iVar21 = rand();
          if (iVar21 % 100 == 0) {
            uVar16 = uVar16 + 1;
          }
          uVar14 = 0xffffffff;
          if (4 < uVar16) {
            uVar16 = 4;
          }
          uVar15 = FUN_005f8ad0(local_12c,(pSVar13->Spawn_data).offset_0x30,uVar16,0xffffffff);
          FUN_0046ebe0(uVar15,uVar14);
          uVar16 = (uint)(byte)(pSVar13->Spawn_data).offset_0x54;
          uVar22 = uVar16 + 1;
          iVar21 = rand();
          if (iVar21 % 100 == 0) {
            uVar22 = uVar16 + 2;
          }
          iVar21 = rand();
          if (iVar21 % 1000 == 0) {
            uVar22 = uVar22 + 1;
          }
          uVar14 = 0xffffffff;
          if (4 < uVar22) {
            uVar22 = 4;
          }
          uVar15 = FUN_005f51e0(local_12c,(pSVar13->Spawn_data).offset_0x30,uVar22,0xffffffff);
          FUN_0046ebe0(uVar15,uVar14);
          local_138 = operator_new(0xc);
          local_8 = 0;
          if (local_138 == (CombatBehavior *)0x0) {
            local_130 = (SequentialBehavior *)0x0;
          }
          else {
            local_130 = cube::SequentialBehavior::SequentialBehavior
                                  ((SequentialBehavior *)local_138);
          }
          pSVar17 = local_130;
          local_8 = 0xffffffff;
          local_138 = operator_new(0x14);
          local_8 = 1;
          if (local_138 == (CombatBehavior *)0x0) {
            local_134 = (CombatBehavior *)0x0;
          }
          else {
            local_134 = cube::CombatBehavior::CombatBehavior(local_138,0x41a00000);
          }
          local_138 = (CombatBehavior *)(pSVar17->SequentialBehavior_data).offset_0x0;
          local_8 = 0xffffffff;
          iVar24 = FUN_00583cb0(local_138,(local_138->CombatBehavior_data).offset_0x0,&local_134);
          iVar21 = (pSVar17->SequentialBehavior_data).offset_0x4;
          if (iVar21 == 0x15555554) {
                    /* WARNING: Subroutine does not return */
            std::_Xlength_error("list<T> too long");
          }
          (pSVar17->SequentialBehavior_data).offset_0x4 = iVar21 + 1;
          (local_138->CombatBehavior_data).offset_0x0 = iVar24;
          **(int **)(iVar24 + 4) = iVar24;
          local_138 = operator_new(8);
          local_8 = 2;
          if (local_138 == (CombatBehavior *)0x0) {
            local_138 = (CombatBehavior *)0x0;
          }
          else {
            local_138 = (CombatBehavior *)
                        cube::RandomWalkBehavior::RandomWalkBehavior
                                  ((RandomWalkBehavior *)local_138);
          }
          local_134 = (CombatBehavior *)(pSVar17->SequentialBehavior_data).offset_0x0;
          local_8 = 0xffffffff;
          iVar24 = FUN_00583cb0(local_134,(local_134->CombatBehavior_data).offset_0x0,&local_138);
          iVar21 = (pSVar17->SequentialBehavior_data).offset_0x4;
          if (iVar21 == 0x15555554) {
                    /* WARNING: Subroutine does not return */
            std::_Xlength_error("list<T> too long");
          }
          (pSVar17->SequentialBehavior_data).offset_0x4 = iVar21 + 1;
          (local_134->CombatBehavior_data).offset_0x0 = iVar24;
          **(int **)(iVar24 + 4) = iVar24;
          *(SequentialBehavior **)&pSVar13[1].Spawn_data.field_0x124 = local_130;
          FUN_0043f7c0(&(pSVar13->Spawn_data).offset_0x28,&(pSVar13->Spawn_data).field_0x70,0);
          FUN_005c7730(pSVar13,0);
          uVar16 = *(uint *)(local_13c + 100);
          uVar22 = *(uint *)(local_13c + 0x60);
          uVar18 = uVar16 * 0x10000 + uVar22;
          iVar21 = (pCVar25->CombatBehavior_data).offset_0x0 - (int)pCVar25->vftablePtr;
          uVar23 = iVar21 >> 2;
          uVar19 = uVar18 * 0x100;
          (pSVar13->Spawn_data).offset_0x44 = uVar19 + uVar23;
          (pSVar13->Spawn_data).offset_0x48 =
               (((((int)uVar16 >> 0x1f) << 0x10 | uVar16 >> 0x10) + ((int)uVar22 >> 0x1f) +
                (uint)CARRY4(uVar16 * 0x10000,uVar22)) * 0x100 | uVar18 >> 0x18) + (iVar21 >> 0x1f)
               + (uint)CARRY4(uVar19,uVar23);
          pCVar8 = (CombatBehavior_vftable *)(pCVar25->CombatBehavior_data).offset_0x0;
          if (&local_144 < pCVar8) {
            pCVar9 = pCVar25->vftablePtr;
            if (pCVar9 <= &local_144) {
              if (pCVar8 == (CombatBehavior_vftable *)(pCVar25->CombatBehavior_data).offset_0x4) {
                FUN_0063dc90(1);
              }
              puVar11 = (undefined4 *)(pCVar25->CombatBehavior_data).offset_0x0;
              if (puVar11 != (undefined4 *)0x0) {
                *puVar11 = (&pCVar25->vftablePtr->vfunction1)[(int)&local_144 - (int)pCVar9 >> 2];
              }
              (pCVar25->CombatBehavior_data).offset_0x0 =
                   (pCVar25->CombatBehavior_data).offset_0x0 + 4;
              goto LAB_005d9aac;
            }
          }
          if (pCVar8 == (CombatBehavior_vftable *)(pCVar25->CombatBehavior_data).offset_0x4) {
            FUN_0063dc90(1);
          }
          puVar11 = (undefined4 *)(pCVar25->CombatBehavior_data).offset_0x0;
          if (puVar11 != (undefined4 *)0x0) {
            *puVar11 = pSVar13;
          }
          (pCVar25->CombatBehavior_data).offset_0x0 = (pCVar25->CombatBehavior_data).offset_0x0 + 4;
          goto LAB_005d9aac;
        }
      }
    }
LAB_005d9a9e:
    FUN_005d6040(local_13c,0);
  }
LAB_005d9aac:
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}


/* FUN_005da280 @ 005da280  kind=gamemisc  attributed-by=caller-vote  size=9007 */

/* WARNING: Removing unreachable block (ram,0x005dacc3) */

void __thiscall FUN_005da280(void *this,int param_1,int param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  uint uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  uint *puVar7;
  undefined4 *puVar8;
  basic_ostream<char,std::char_traits<char>_> *pbVar9;
  basic_ostream<char,struct_std::char_traits<char>_> *pbVar10;
  undefined4 *puVar11;
  uint uVar12;
  float fVar13;
  Region *pRVar14;
  float *pfVar15;
  int iVar16;
  uint uVar17;
  undefined1 *puVar18;
  code *pcVar19;
  float *pfVar20;
  int iVar21;
  uint uVar22;
  float fVar23;
  float *pfVar24;
  float10 fVar25;
  double dVar26;
  undefined8 uVar27;
  longlong lVar28;
  longlong lVar29;
  undefined1 auStack_324 [12];
  float local_318;
  uint local_314;
  float local_310;
  uint local_30c;
  Region *local_308;
  char cStack_301;
  float local_300;
  undefined1 *local_2fc;
  void *local_2f8;
  uint local_2f4;
  Region *local_2f0;
  undefined1 *local_2ec;
  double local_2e8;
  float *local_2dc;
  int local_2d8;
  int local_2d4;
  uint *local_2d0;
  undefined1 *local_2cc;
  uint local_2c8;
  undefined4 *local_2c4;
  undefined4 *local_2c0;
  undefined4 local_2bc;
  int *local_2b8;
  int *local_2b4;
  int *local_2b0;
  int local_2ac;
  undefined1 *local_2a8;
  uint local_2a4;
  float local_2a0;
  float local_29c;
  float *local_298;
  float *local_294;
  float *local_290;
  float local_28c;
  float local_288;
  float local_284;
  float local_280;
  float local_27c;
  uint local_278;
  int local_274;
  float local_270;
  uint local_26c;
  float local_268;
  uint local_264;
  void *pvStack_260;
  undefined4 uStack_25c;
  undefined4 uStack_258;
  undefined4 uStack_254;
  void *pvStack_250;
  undefined4 uStack_24c;
  undefined4 uStack_248;
  undefined4 uStack_244;
  float local_240;
  uint local_23c;
  double local_238;
  double local_230;
  undefined1 *local_228;
  uint local_224;
  int local_21c;
  basic_iostream<char,std::char_traits<char>_> bStack_218;
  basic_streambuf<char,std::char_traits<char>_> abStack_200 [2];
  undefined1 auStack_1f8 [8];
  undefined4 *puStack_1f0;
  undefined4 *puStack_1e0;
  undefined4 *puStack_1d0;
  undefined4 uStack_1c8;
  uint uStack_1c4;
  code *apcStack_1b0 [17];
  int iStack_16c;
  basic_iostream<char,std::char_traits<char>_> local_168;
  basic_streambuf<char,std::char_traits<char>_> local_150 [2];
  undefined1 auStack_148 [8];
  undefined4 *puStack_140;
  undefined4 *puStack_130;
  undefined4 *puStack_120;
  undefined4 local_118;
  uint local_114;
  code *local_100 [25];
  int local_9c;
  float fStack_98;
  float local_94;
  int iStack_90;
  int local_8c;
  int iStack_88;
  float local_84;
  undefined8 local_80;
  undefined1 *local_78;
  int iStack_74;
  undefined1 *local_70;
  uint uStack_6c;
  float local_68;
  undefined1 *local_64;
  int iStack_60;
  float local_5c;
  float local_58;
  uint local_54;
  uint local_50;
  void *apvStack_4c [5];
  uint uStack_38;
  void *apvStack_34 [5];
  uint uStack_20;
  uint local_1c;
  void *local_14;
  undefined1 *puStack_10;
  undefined4 local_c;
  
  local_c = 0xffffffff;
  puStack_10 = &LAB_006f42d1;
  local_14 = ExceptionList;
  local_1c = DAT_0076aa78 ^ (uint)auStack_324;
  ExceptionList = &local_14;
  local_2d4 = param_1;
  local_2d8 = param_2;
  local_278 = 0;
  local_2f8 = this;
  if ((((-1 < param_1) && (-1 < param_2)) && (param_1 < 0x400)) &&
     ((param_2 < 0x400 &&
      (local_274 = param_1 * 0x400 + param_2, *(int *)((int)this + local_274 * 4 + 0xbc) == 0)))) {
    iVar21 = -2;
    do {
      iVar16 = -2;
      do {
        FUN_005d7a70(local_2d4 + iVar21,local_2d8 + iVar16);
        iVar3 = local_2d8;
        iVar16 = iVar16 + 1;
      } while (iVar16 < 3);
      iVar21 = iVar21 + 1;
    } while (iVar21 < 3);
    srand(*(int *)((int)this + 0x800188) + local_2d8 * 0x400 + local_2d4);
    local_308 = operator_new(0x15a28);
    local_c = 0;
    if (local_308 == (Region *)0x0) {
      local_2f0 = (Region *)0x0;
    }
    else {
      local_2f0 = cube::Region::Region(local_308);
    }
    pRVar14 = local_2f0;
    local_c = 0xffffffff;
    iVar21 = FUN_005a4710(local_2d4,iVar3);
    pcVar19 = rand_exref;
    (pRVar14->Region_data).offset_0x8 = iVar21;
    (pRVar14->Region_data).offset_0xc = 0;
    if (4 < iVar21) {
      iVar21 = rand();
      (pRVar14->Region_data).offset_0xc = iVar21 % 5;
    }
    uVar4 = rand();
    uVar4 = uVar4 & 0x80000003;
    if ((int)uVar4 < 0) {
      uVar4 = (uVar4 - 1 | 0xfffffffc) + 1;
    }
    (pRVar14->Region_data).offset_0x10 = uVar4;
    local_2ac = rand();
    local_2ac = local_2ac % 10000;
    puVar7 = *(uint **)((int)this + local_274 * 4 + 0x4000bc);
    local_2d0 = puVar7;
    if (0.81 < (float)puVar7[4]) {
      uVar4 = rand();
      uVar4 = uVar4 & 0x80000001;
      if ((int)uVar4 < 0) {
        uVar4 = (uVar4 - 1 | 0xfffffffe) + 1;
      }
      (pRVar14->Region_data).offset_0x10 = uVar4 + 4;
    }
    local_310 = 1.4013e-45;
    FUN_005ee4b0(&local_310,&local_21c);
    local_2c4 = (undefined4 *)0x0;
    local_2c0 = (undefined4 *)0x0;
    local_2bc = 0;
    local_54 = *puVar7;
    local_50 = puVar7[1];
    local_c = 1;
    local_228 = (undefined1 *)
                ((int)(((int)local_54 >> 0x1f & 0x7ffU) + local_54) >> 0xb & 0x80000007);
    if ((int)local_228 < 0) {
      local_228 = (undefined1 *)(((uint)(local_228 + -1) | 0xfffffff8) + 1);
    }
    uStack_6c = (int)(local_50 + ((int)local_50 >> 0x1f & 0x7ffU)) >> 0xb & 0x80000007;
    if ((int)uStack_6c < 0) {
      uStack_6c = (uStack_6c - 1 | 0xfffffff8) + 1;
    }
    local_230 = (double)CONCAT44(local_230._4_4_,uStack_6c);
    local_300 = (float)(local_2d8 << 0xe);
    local_2c8 = local_2d4 * 0x4000;
    local_2fc = (undefined1 *)0x0;
    local_314 = local_2c8 + 0x800;
    local_2a8 = (undefined1 *)0x0;
    pfVar15 = (float *)&pRVar14[0x746].Region_data.offset_0x1c;
    local_70 = local_228;
    do {
      local_2f4 = (int)local_300 + 0x800;
      local_30c = 0;
      local_2ec = (undefined1 *)0x0;
      do {
        puVar7 = local_2d0;
        local_2dc = pfVar15;
        if (((*(int *)((int)local_2f8 + 0xa4) == 0) || (local_2fc != local_228)) ||
           (local_30c != local_230._0_4_)) {
          puVar7 = (uint *)FUN_00477e10(local_314 - 0x400,local_2f4 - 0x400);
          if (puVar7 == local_2d0) {
            uVar4 = (*pcVar19)();
            uVar4 = uVar4 & 0x800000ff;
            if ((int)uVar4 < 0) {
              uVar4 = (uVar4 - 1 | 0xffffff00) + 1;
            }
            iVar21 = (int)local_300 >> 0x1f;
            *pfVar15 = (float)(int)(uVar4 + 0x200);
            local_280 = (float)(int)(uVar4 + 0x200) * 65536.0;
            iVar16 = (int)local_2ec >> 0x1f;
            uVar4 = (uint)local_300 >> 0x10;
            uVar17 = (uint)local_2ec >> 0x10;
            uVar12 = (int)local_300 * 0x10000;
            uVar22 = (int)local_2ec * 0x10000;
            lVar28 = FUN_0068d946();
            lVar28 = lVar28 + CONCAT44((iVar16 << 0x10 | uVar17) + (iVar21 << 0x10 | uVar4) +
                                       (uint)CARRY4(uVar22,uVar12),uVar22 + uVar12) + 0x1000000;
            local_2a0 = (float)((ulonglong)lVar28 >> 0x20);
            local_318 = *local_2dc + 256.0;
            iVar21 = rand();
            local_288 = (((float)iVar21 * (2048.0 - local_318 * 2.0)) / 32767.0) * 65536.0;
            lVar29 = FUN_0068d946();
            local_29c = local_318 * 65536.0;
            lVar29 = lVar29 + CONCAT44(local_2a0,(int)lVar28);
            local_308 = (Region *)((ulonglong)lVar29 >> 0x20);
            local_2e8 = (double)CONCAT44(local_2e8._4_4_,(int)lVar29);
            iVar21 = (int)local_2c8 >> 0x1f;
            iVar16 = (int)local_2a8 >> 0x1f;
            uVar4 = local_2c8 >> 0x10;
            uVar17 = (uint)local_2a8 >> 0x10;
            uVar12 = local_2c8 * 0x10000;
            uVar22 = (int)local_2a8 * 0x10000;
            lVar28 = FUN_0068d946();
            pcVar19 = rand_exref;
            lVar28 = lVar28 + CONCAT44((iVar16 << 0x10 | uVar17) + (iVar21 << 0x10 | uVar4) +
                                       (uint)CARRY4(uVar22,uVar12),uVar22 + uVar12);
            local_2a0 = (float)((ulonglong)lVar28 >> 0x20);
            iVar21 = rand();
            pfVar15 = local_2dc;
            local_2cc = (undefined1 *)
                        ((((float)iVar21 * (2048.0 - (*local_2dc + 256.0) * 2.0)) / 32767.0) *
                        65536.0);
            lVar29 = FUN_0068d946();
            *(longlong *)(pfVar15 + -4) = lVar29 + CONCAT44(local_2a0,(int)lVar28);
            pfVar15[-2] = local_2e8._0_4_;
            pfVar15[-1] = (float)local_308;
            uVar5 = __alldiv(local_2e8._0_4_,local_308,0x10000,0);
            uVar6 = __alldiv(pfVar15[-4],pfVar15[-3],0x10000,0);
            fVar25 = (float10)FUN_005c5e20(uVar6,uVar5,0);
            pfVar15[1] = (float)fVar25;
            pfVar15[5] = local_310;
            uVar5 = __alldiv(pfVar15[-2],pfVar15[-1],0x10000,0);
            uVar6 = __alldiv(pfVar15[-4],pfVar15[-3],0x10000,0);
            puVar7 = (uint *)FUN_00477e10(uVar6,uVar5);
            uVar4 = local_30c;
            if (puVar7 == local_2d0) {
              local_5c = (float)((int)local_70 - (int)local_2fc);
              local_58 = (float)(int)(uStack_6c - local_30c);
              _local_8c = CONCAT44(uStack_6c - local_30c,(int)local_70 - (int)local_2fc);
              dVar26 = (double)(local_58 * local_58 + local_5c * local_5c);
              libm_sse2_sqrt_precise();
              local_308 = (Region *)(float)dVar26;
              iVar21 = rand();
              local_78 = local_2fc;
              iStack_74 = uVar4;
              local_68 = (((float)iVar21 * 4.0) / 32767.0 + (float)local_308) - 2.0;
              local_64 = local_2fc;
              iStack_60 = uVar4;
              FUN_005f4d10(&local_68);
            }
          }
        }
        else {
          pfVar15[2] = 1.4013e-45;
          pfVar15[3] = (float)(local_2f0->Region_data).offset_0x10;
          pfVar15[4] = (float)local_2d0[5];
          iVar21 = (*pcVar19)();
          *pfVar15 = (float)(iVar21 % 200 + 0x200);
          uVar4 = *puVar7;
          pfVar15[-4] = (float)(uVar4 << 0x10);
          pfVar15[-3] = (float)(((int)uVar4 >> 0x1f) << 0x10 | uVar4 >> 0x10);
          uVar4 = puVar7[1];
          pfVar15[-2] = (float)(uVar4 << 0x10);
          pfVar15[-1] = (float)(((int)uVar4 >> 0x1f) << 0x10 | uVar4 >> 0x10);
          local_238 = (double)CONCAT44(local_238._4_4_,*pfVar15 * 65536.0);
          uVar27 = FUN_0068d946();
          uVar17 = (int)pfVar15[-4] - (int)(float)uVar27;
          iVar21 = (((int)pfVar15[-3] - (int)((ulonglong)uVar27 >> 0x20)) -
                   (uint)((uint)pfVar15[-4] < (uint)(float)uVar27)) - (uint)(uVar17 < 0x1000000);
          local_318 = (float)(local_314 - 0x800);
          uVar4 = ((int)local_318 >> 0x1f) << 0x10 | (uint)local_318 >> 0x10;
          if ((iVar21 <= (int)uVar4) &&
             ((iVar21 < (int)uVar4 || (uVar17 - 0x1000000 < (uint)((int)local_318 * 0x10000))))) {
            local_240 = ((float)(int)local_318 + *pfVar15 + 256.0) * 65536.0;
            uVar27 = FUN_0068d946();
            *(undefined8 *)(pfVar15 + -4) = uVar27;
          }
          local_270 = *pfVar15 * 65536.0;
          uVar27 = FUN_0068d946();
          uVar17 = local_2f4;
          uVar4 = (int)pfVar15[-2] - (int)(float)uVar27;
          local_318 = (float)(uVar4 - 0x1000000);
          iVar21 = (((int)pfVar15[-1] - (int)((ulonglong)uVar27 >> 0x20)) -
                   (uint)((uint)pfVar15[-2] < (uint)(float)uVar27)) - (uint)(uVar4 < 0x1000000);
          uVar4 = local_2f4 - 0x800;
          uVar12 = ((int)uVar4 >> 0x1f) << 0x10 | uVar4 >> 0x10;
          if ((iVar21 <= (int)uVar12) &&
             ((iVar21 < (int)uVar12 || ((uint)local_318 < uVar4 * 0x10000)))) {
            local_268 = ((float)(int)(local_2f4 - 0x800) + *pfVar15 + 256.0) * 65536.0;
            uVar27 = FUN_0068d946();
            *(undefined8 *)(pfVar15 + -2) = uVar27;
          }
          local_94 = *pfVar15 * 65536.0;
          uVar27 = FUN_0068d946();
          uVar4 = (uint)uVar27 + (int)pfVar15[-4];
          local_318 = (float)(uVar4 + 0x1000000);
          iVar21 = (int)((ulonglong)uVar27 >> 0x20) + (int)pfVar15[-3] +
                   (uint)CARRY4((uint)uVar27,(uint)pfVar15[-4]) + (uint)(0xfeffffff < uVar4);
          uVar4 = ((int)local_314 >> 0x1f) << 0x10 | local_314 >> 0x10;
          if (((int)uVar4 <= iVar21) &&
             (((int)uVar4 < iVar21 || (local_314 << 0x10 < (uint)local_318)))) {
            local_27c = (((float)(int)local_314 - *pfVar15) - 256.0) * 65536.0;
            uVar27 = FUN_0068d946();
            *(undefined8 *)(pfVar15 + -4) = uVar27;
          }
          local_28c = *pfVar15 * 65536.0;
          uVar27 = FUN_0068d946();
          uVar4 = (uint)uVar27 + (int)pfVar15[-2];
          local_318 = (float)(uVar4 + 0x1000000);
          iVar21 = (int)((ulonglong)uVar27 >> 0x20) + (int)pfVar15[-1] +
                   (uint)CARRY4((uint)uVar27,(uint)pfVar15[-2]) + (uint)(0xfeffffff < uVar4);
          uVar4 = ((int)uVar17 >> 0x1f) << 0x10 | uVar17 >> 0x10;
          if (((int)uVar4 <= iVar21) &&
             (((int)uVar4 < iVar21 || (uVar17 << 0x10 < (uint)local_318)))) {
            local_284 = (((float)(int)uVar17 - *pfVar15) - 256.0) * 65536.0;
            uVar27 = FUN_0068d946();
            *(undefined8 *)(pfVar15 + -2) = uVar27;
          }
          uVar5 = __alldiv(pfVar15[-2],pfVar15[-1],0x10000,0);
          uVar6 = __alldiv(pfVar15[-4],pfVar15[-3],0x10000,0);
          fVar25 = (float10)FUN_005c5e20(uVar6,uVar5,0);
          local_318 = (float)fVar25;
          pfVar15[1] = local_318;
          if (local_318 < 0.0) {
            pfVar15[1] = 0.0;
          }
        }
        local_2ec = (undefined1 *)((int)local_2ec + 0x800);
        local_30c = local_30c + 1;
        pfVar15 = pfVar15 + 0x1a;
        local_2f4 = local_2f4 + 0x800;
      } while ((int)local_2ec < 0x4000);
      local_2fc = local_2fc + 1;
      local_2a8 = local_2a8 + 0x800;
      local_314 = local_314 + 0x800;
    } while ((int)local_2a8 < 0x4000);
    local_308 = (Region *)((uint)local_308 & 0xffffff00);
    local_2dc = pfVar15;
    FUN_005c2270(local_2c4,local_2c0,((int)local_2c0 - (int)local_2c4) / 0xc,local_308);
    local_30c = 0;
    puVar8 = local_2c4;
    puVar11 = local_2c0;
    do {
      pRVar14 = local_2f0;
      uVar4 = local_30c;
      if (puVar8 == puVar11) break;
      if ((local_30c & 1) != 0) goto LAB_005db47c;
      local_2cc = (undefined1 *)puVar8[1];
      iVar21 = puVar8[2];
      puVar1 = puVar8 + 1;
      local_2e8 = (double)CONCAT44(local_2e8._4_4_,iVar21);
      puVar2 = puVar11;
      while (puVar8 = puVar8 + 3, puVar8 != puVar11) {
        puVar1[-1] = *puVar8;
        *puVar1 = puVar8[1];
        puVar1[1] = puVar8[2];
        puVar1 = puVar1 + 3;
        puVar2 = local_2c0;
      }
      uVar17 = (iVar21 + (int)local_2cc * 8) * 0x68;
      local_2c0 = puVar2 + -3;
      pfVar15 = (float *)(uVar17 + 0x1402c + (int)local_2f0);
      if (*pfVar15 <= 0.0 && *pfVar15 != 0.0) {
        *(undefined4 *)(uVar17 + 0x1402c + (int)local_2f0) = 0;
      }
      local_314 = uVar17;
      FUN_004462f0((float)(int)local_30c * 0.015625);
      uVar5 = FUN_0068d910();
      *(undefined4 *)(uVar17 + 0x1403c + (int)pRVar14) = uVar5;
      pcVar19 = rand_exref;
      if ((uVar4 >> 1 & 0x80000001) != 0) {
        *(undefined4 *)(uVar17 + 0x14030 + (int)pRVar14) = 0xe;
        *(undefined4 *)(uVar17 + 0x14028 + (int)pRVar14) = 0x43160000;
        iVar21 = __alldiv(*(undefined4 *)(uVar17 + 0x14020 + (int)pRVar14),
                          *(undefined4 *)(uVar17 + 0x14024 + (int)pRVar14),0x10000,0);
        uVar4 = (iVar21 + (iVar21 >> 0x1f & 0xffU) & 0xffffff00) + 0x80;
        uVar12 = ((int)uVar4 >> 0x1f) << 0x10 | uVar4 >> 0x10;
        local_240 = (float)(uVar4 * 0x10000);
        local_23c = uVar12;
        iVar21 = __alldiv(*(undefined4 *)((int)&pRVar14[0x746].Region_data.offset_0xc + local_314),
                          *(undefined4 *)((int)&pRVar14[0x746].Region_data.offset_0x10 + local_314),
                          0x10000,0);
        uVar17 = (iVar21 + (iVar21 >> 0x1f & 0xffU) & 0xffffff00) + 0x80;
        *(uint *)((int)&pRVar14[0x746].Region_data.offset_0x10 + local_314) =
             ((int)uVar17 >> 0x1f) << 0x10 | uVar17 >> 0x10;
        *(uint *)((int)&pRVar14[0x746].Region_data.offset_0xc + local_314) = uVar17 * 0x10000;
        *(uint *)((int)&pRVar14[0x746].Region_data.offset_0x14 + local_314) = uVar4 * 0x10000;
        *(uint *)((int)&pRVar14[0x746].Region_data.offset_0x18 + local_314) = uVar12;
        local_2e8 = (double)*(longlong *)((int)&pRVar14[0x746].Region_data.offset_0xc + local_314);
        local_238 = local_2e8 * 0.00390625;
        uVar27 = FUN_0068d946();
        uVar4 = __alldiv(uVar27,0x10000,0);
        uVar4 = uVar4 & 0x8000003f;
        if ((int)uVar4 < 0) {
          uVar4 = (uVar4 - 1 | 0xffffffc0) + 1;
        }
        local_2e8 = (double)*(longlong *)((int)&pRVar14[0x746].Region_data.offset_0x14 + local_314);
        local_230 = local_2e8 * 0.00390625;
        uVar27 = FUN_0068d946();
        uVar17 = __alldiv(uVar27,0x10000,0);
        uVar17 = uVar17 & 0x8000003f;
        if ((int)uVar17 < 0) {
          uVar17 = (uVar17 - 1 | 0xffffffc0) + 1;
        }
        local_29c = (float)(uVar4 * 0x40 + uVar17);
        local_2fc = (undefined1 *)((int)local_29c * 0x10);
        (local_2fc + 0x18)[(int)pRVar14] = 3;
        uVar12 = rand();
        uVar12 = uVar12 & 0x80000003;
        if ((int)uVar12 < 0) {
          uVar12 = (uVar12 - 1 | 0xfffffffc) + 1;
        }
        (local_2fc + 0x19)[(int)pRVar14] = (char)uVar12;
        local_2cc = (undefined1 *)((local_2d4 * 0x40 + uVar4) * 0x100 + 0x80);
        iVar21 = (local_2d8 * 0x40 + uVar17) * 0x100 + 0x80;
        fVar25 = (float10)FUN_005c4dd0(local_2cc,iVar21);
        local_2e8 = (double)CONCAT44(local_2e8._4_4_,(float)fVar25);
        if (0.8 < (float)fVar25) {
          fVar25 = (float10)FUN_005c4800(local_2cc,iVar21);
          local_2e8 = (double)CONCAT44(local_2e8._4_4_,(float)fVar25);
          (local_2fc + 0x19)[(int)pRVar14] = ((float)fVar25 <= 0.8) + '\x04';
        }
        iVar21 = rand();
        uVar4 = local_314;
        *(int *)(local_2fc + 0x1c + (int)pRVar14) = iVar21 % 10000000 + 1;
        (&(pRVar14->Region_data).offset_0x1c)[(int)local_29c * 4] =
             *(undefined4 *)(&pRVar14[0x747].Region_data.offset_0x4 + local_314);
        *(int *)(&pRVar14[0x747].Region_data.field_0x0 + local_314) = local_2ac;
        iVar21 = rand();
        local_2ac = local_2ac + 1 + iVar21 % 0x32;
        *(uint *)((int)&pRVar14[0x747].vftablePtr + uVar4) =
             (uint)(byte)(local_2fc + 0x19)[(int)pRVar14];
        iVar21 = *(int *)(&pRVar14[0x747].Region_data.offset_0x4 + uVar4);
        if (iVar21 < 5) {
          (local_2fc + 0x24)[(int)pRVar14] = 0;
          puVar8 = local_2c4;
          puVar11 = local_2c0;
        }
        else if (iVar21 < 10) {
          uVar4 = rand();
          uVar4 = uVar4 & 0x80000001;
          if ((int)uVar4 < 0) {
            (local_2fc + 0x24)[(int)pRVar14] = ((char)uVar4 - 1U | 0xfe) + 1;
            puVar8 = local_2c4;
            puVar11 = local_2c0;
          }
          else {
LAB_005dafc0:
            (local_2fc + 0x24)[(int)pRVar14] = (char)uVar4;
            puVar8 = local_2c4;
            puVar11 = local_2c0;
          }
        }
        else if (iVar21 < 0xf) {
          iVar21 = rand();
          (local_2fc + 0x24)[(int)pRVar14] = (char)(iVar21 % 3);
          puVar8 = local_2c4;
          puVar11 = local_2c0;
        }
        else {
          if (0x12 < iVar21) {
            uVar4 = rand();
            uVar4 = uVar4 & 0x80000003;
            if ((int)uVar4 < 0) {
              uVar4 = (uVar4 - 1 | 0xfffffffc) + 1;
            }
            uVar4 = uVar4 + 1;
            goto LAB_005dafc0;
          }
          iVar21 = rand();
          (local_2fc + 0x24)[(int)pRVar14] = (char)(iVar21 % 3) + '\x01';
          puVar8 = local_2c4;
          puVar11 = local_2c0;
        }
        goto LAB_005db47c;
      }
      uVar4 = rand();
      uVar4 = uVar4 & 0x80000007;
      if ((int)uVar4 < 0) {
        uVar4 = (uVar4 - 1 | 0xfffffff8) + 1;
      }
      switch(uVar4) {
      case 0:
        *(undefined4 *)(uVar17 + 0x14030 + (int)pRVar14) = 2;
        break;
      case 1:
        *(undefined4 *)(uVar17 + 0x14030 + (int)pRVar14) = 3;
        iVar21 = rand();
        *(int *)(uVar17 + 0x14034 + (int)pRVar14) = iVar21 % 3;
        break;
      case 2:
        uVar5 = 4;
        goto LAB_005db027;
      case 3:
        *(undefined4 *)(uVar17 + 0x14030 + (int)pRVar14) = 5;
        if ((float)local_2d0[4] <= 0.8) {
LAB_005db095:
          *(undefined4 *)(uVar17 + 0x14034 + (int)pRVar14) = 0;
        }
        else if ((float)local_2d0[3] <= 0.8) {
          if (0.2 <= (float)local_2d0[3]) goto LAB_005db095;
          *(undefined4 *)(uVar17 + 0x14034 + (int)pRVar14) = 2;
        }
        else {
          *(undefined4 *)(uVar17 + 0x14034 + (int)pRVar14) = 3;
        }
        uVar4 = rand();
        uVar4 = uVar4 & 0x800000ff;
        if ((int)uVar4 < 0) {
          uVar4 = (uVar4 - 1 | 0xffffff00) + 1;
        }
        iVar16 = (int)local_300 >> 0x1f;
        iVar21 = (int)local_2e8._0_4_ << 0xb;
        *(float *)(uVar17 + 0x14028 + (int)pRVar14) = (float)(int)(uVar4 + 0x100);
        local_2a0 = (float)(int)(uVar4 + 0x100) * 65536.0;
        uVar4 = (uint)local_300 >> 0x10;
        uVar17 = (uint)local_2e8._0_4_ & 0x1fffff;
        uVar12 = (int)local_300 * 0x10000;
        uVar22 = (int)local_2e8._0_4_ * 0x8000000;
        lVar28 = FUN_0068d946();
        lVar28 = lVar28 + CONCAT44(((iVar21 >> 0x1f) << 0x10 | uVar17 >> 5) +
                                   (iVar16 << 0x10 | uVar4) + (uint)CARRY4(uVar22,uVar12),
                                   uVar22 + uVar12) + 0x1000000;
        local_318 = *(float *)((int)&local_2f0[0x746].Region_data.offset_0x1c + local_314) + 256.0;
        local_2e8._0_4_ = (float)(int)((ulonglong)lVar28 >> 0x20);
        iVar21 = rand();
        local_288 = (((float)iVar21 * (2048.0 - local_318 * 2.0)) / 32767.0) * 65536.0;
        lVar29 = FUN_0068d946();
        local_280 = local_318 * 65536.0;
        lVar29 = lVar29 + CONCAT44(local_2e8._0_4_,(int)lVar28);
        local_29c = (float)lVar29;
        local_28c = (float)((ulonglong)lVar29 >> 0x20);
        iVar16 = (int)local_2c8 >> 0x1f;
        iVar21 = (int)local_2cc << 0xb;
        uVar4 = local_2c8 >> 0x10;
        uVar17 = (uint)local_2cc & 0x1fffff;
        uVar12 = local_2c8 * 0x10000;
        uVar22 = (int)local_2cc * 0x8000000;
        lVar28 = FUN_0068d946();
        lVar28 = lVar28 + CONCAT44(((iVar21 >> 0x1f) << 0x10 | uVar17 >> 5) +
                                   (iVar16 << 0x10 | uVar4) + (uint)CARRY4(uVar22,uVar12),
                                   uVar22 + uVar12);
        uVar4 = (uint)lVar28;
        local_2e8 = (double)CONCAT44(local_2e8._4_4_,(int)((ulonglong)lVar28 >> 0x20));
        iVar21 = rand();
        pRVar14 = local_2f0;
        uVar17 = local_314;
        local_284 = (((float)iVar21 *
                     (2048.0 - (*(float *)((int)&local_2f0[0x746].Region_data.offset_0x1c +
                                          local_314) + 256.0) * 2.0)) / 32767.0) * 65536.0;
        uVar27 = FUN_0068d946();
        *(uint *)((int)&pRVar14[0x746].Region_data.offset_0xc + uVar17) = (uint)uVar27 + uVar4;
        *(float *)((int)&pRVar14[0x746].Region_data.offset_0x14 + uVar17) = local_29c;
        *(uint *)((int)&pRVar14[0x746].Region_data.offset_0x10 + uVar17) =
             (int)((ulonglong)uVar27 >> 0x20) + (int)local_2e8._0_4_ +
             (uint)CARRY4((uint)uVar27,uVar4);
        *(float *)((int)&pRVar14[0x746].Region_data.offset_0x18 + uVar17) = local_28c;
        pcVar19 = rand_exref;
        break;
      case 4:
        uVar5 = 6;
LAB_005db027:
        if ((int)local_2d0[6] < 0) {
          uVar5 = 0xf;
        }
        *(undefined4 *)(uVar17 + 0x14030 + (int)pRVar14) = uVar5;
        break;
      case 5:
        *(uint *)(uVar17 + 0x14030 + (int)pRVar14) = (uint)((int)local_2d0[6] < 0) * 8 + 7;
        break;
      case 6:
        *(undefined4 *)(uVar17 + 0x14030 + (int)pRVar14) = 0xb;
        *(undefined4 *)(uVar17 + 0x14028 + (int)pRVar14) = 0x43000000;
        iVar21 = __alldiv(*(undefined4 *)(uVar17 + 0x14020 + (int)pRVar14),
                          *(undefined4 *)(uVar17 + 0x14024 + (int)pRVar14),0x10000,0);
        uVar4 = (iVar21 + (iVar21 >> 0x1f & 0xffU) & 0xffffff00) + 0x80;
        uVar17 = ((int)uVar4 >> 0x1f) << 0x10 | uVar4 >> 0x10;
        puVar18 = (undefined1 *)(uVar4 * 0x10000);
        local_228 = puVar18;
        local_224 = uVar17;
        goto LAB_005db373;
      case 7:
        *(undefined4 *)(uVar17 + 0x14030 + (int)pRVar14) = 0xc;
        *(undefined4 *)(uVar17 + 0x14028 + (int)pRVar14) = 0x43000000;
        iVar21 = __alldiv(*(undefined4 *)(uVar17 + 0x14020 + (int)pRVar14),
                          *(undefined4 *)(uVar17 + 0x14024 + (int)pRVar14),0x10000,0);
        uVar4 = (iVar21 + (iVar21 >> 0x1f & 0xffU) & 0xffffff00) + 0x80;
        uVar17 = ((int)uVar4 >> 0x1f) << 0x10 | uVar4 >> 0x10;
        puVar18 = (undefined1 *)(uVar4 * 0x10000);
        local_2a8 = puVar18;
        local_2a4 = uVar17;
LAB_005db373:
        iVar21 = __alldiv(*(undefined4 *)((int)&pRVar14[0x746].Region_data.offset_0xc + local_314),
                          *(undefined4 *)((int)&pRVar14[0x746].Region_data.offset_0x10 + local_314),
                          0x10000,0);
        uVar4 = (iVar21 + (iVar21 >> 0x1f & 0xffU) & 0xffffff00) + 0x80;
        *(uint *)((int)&pRVar14[0x746].Region_data.offset_0xc + local_314) = uVar4 * 0x10000;
        *(uint *)((int)&pRVar14[0x746].Region_data.offset_0x10 + local_314) =
             ((int)uVar4 >> 0x1f) << 0x10 | uVar4 >> 0x10;
        *(uint *)((int)&pRVar14[0x746].Region_data.offset_0x18 + local_314) = uVar17;
        *(undefined1 **)((int)&pRVar14[0x746].Region_data.offset_0x14 + local_314) = puVar18;
        pcVar19 = rand_exref;
        uVar17 = local_314;
      }
      iVar21 = *(int *)(&pRVar14[0x747].Region_data.offset_0x4 + uVar17);
      if (iVar21 < 5) {
        *(undefined4 *)((int)&pRVar14[0x747].Region_data.offset_0x8 + uVar17) = 0;
      }
      else if (iVar21 < 10) {
        uVar4 = (*pcVar19)();
        uVar4 = uVar4 & 0x80000001;
        if ((int)uVar4 < 0) {
          uVar4 = (uVar4 - 1 | 0xfffffffe) + 1;
        }
LAB_005db440:
        *(uint *)((int)&pRVar14[0x747].Region_data.offset_0x8 + uVar17) = uVar4;
      }
      else if (iVar21 < 0xf) {
        iVar21 = (*pcVar19)();
        *(int *)((int)&pRVar14[0x747].Region_data.offset_0x8 + uVar17) = iVar21 % 3;
      }
      else {
        if (0x12 < iVar21) {
          uVar4 = (*pcVar19)();
          uVar4 = uVar4 & 0x80000003;
          if ((int)uVar4 < 0) {
            uVar4 = (uVar4 - 1 | 0xfffffffc) + 1;
          }
          uVar4 = uVar4 + 1;
          goto LAB_005db440;
        }
        iVar21 = (*pcVar19)();
        *(int *)((int)&pRVar14[0x747].Region_data.offset_0x8 + uVar17) = iVar21 % 3 + 1;
      }
      *(int *)(&pRVar14[0x747].Region_data.field_0x0 + uVar17) = local_2ac;
      iVar21 = (*pcVar19)();
      local_2ac = local_2ac + 1 + iVar21 % 0x32;
      puVar8 = local_2c4;
      puVar11 = local_2c0;
LAB_005db47c:
      local_30c = local_30c + 1;
    } while ((int)local_30c < 0x40);
    pRVar14 = local_2f0;
    local_310 = 0.0;
    do {
      if (puVar8 == puVar11) break;
      uVar4 = rand();
      uVar4 = uVar4 % (uint)(((int)puVar11 - (int)puVar8) / 0xc);
      local_308 = (Region *)local_2c4[uVar4 * 3 + 2];
      iVar21 = local_2c4[uVar4 * 3 + 1];
      puVar8 = local_2c4 + uVar4 * 3 + 3;
      if (puVar8 != local_2c0) {
        puVar11 = puVar8 + -2;
        do {
          puVar11[-1] = *puVar8;
          *puVar11 = puVar11[3];
          puVar8 = puVar8 + 3;
          puVar11[1] = puVar11[4];
          puVar11 = puVar11 + 3;
        } while (puVar8 != local_2c0);
      }
      local_2c0 = local_2c0 + -3;
      iVar16 = ((int)local_308 + iVar21 * 8) * 0x68;
      *(undefined4 *)(iVar16 + 0x14030 + (int)pRVar14) = 10;
      iVar21 = rand();
      *(int *)(iVar16 + 0x14038 + (int)pRVar14) = iVar21 % 10000000 + 1;
      iVar21 = __alldiv(*(undefined4 *)(iVar16 + 0x14018 + (int)pRVar14),
                        *(undefined4 *)(iVar16 + 0x1401c + (int)pRVar14),0x10000,0);
      uVar4 = (int)((iVar21 >> 0x1f & 0xffU) + iVar21) >> 8 & 0x8000003f;
      if ((int)uVar4 < 0) {
        uVar4 = (uVar4 - 1 | 0xffffffc0) + 1;
      }
      iVar21 = __alldiv(*(undefined4 *)(iVar16 + 0x14020 + (int)pRVar14),
                        *(undefined4 *)(iVar16 + 0x14024 + (int)pRVar14),0x10000,0);
      uVar17 = (int)(iVar21 + (iVar21 >> 0x1f & 0xffU)) >> 8 & 0x8000003f;
      if ((int)uVar17 < 0) {
        uVar17 = (uVar17 - 1 | 0xffffffc0) + 1;
      }
      iVar21 = uVar4 * 0x40 + uVar17;
      local_310 = (float)((int)local_310 + 1);
      *(undefined1 *)((int)pRVar14 + iVar21 * 0x10 + 0x18) = 4;
      *(undefined4 *)((int)pRVar14 + iVar21 * 0x10 + 0x1c) =
           *(undefined4 *)(iVar16 + 0x14038 + (int)pRVar14);
      puVar8 = local_2c4;
      puVar11 = local_2c0;
    } while ((int)local_310 < 5);
    puVar8 = &pRVar14[0x746].Region_data.offset_0x14;
    local_310 = 1.12104e-44;
    do {
      iVar21 = __alldiv(puVar8[-2],puVar8[-1],0x10000,0);
      uVar4 = (int)((iVar21 >> 0x1f & 0xffU) + iVar21) >> 8 & 0x8000003f;
      if ((int)uVar4 < 0) {
        uVar4 = (uVar4 - 1 | 0xffffffc0) + 1;
      }
      iVar21 = __alldiv(*puVar8,puVar8[1],0x10000,0);
      uVar17 = (int)(iVar21 + (iVar21 >> 0x1f & 0xffU)) >> 8 & 0x8000003f;
      if ((int)uVar17 < 0) {
        uVar17 = (uVar17 - 1 | 0xffffffc0) + 1;
      }
      *(undefined4 *)((int)pRVar14 + (uVar17 + 2 + uVar4 * 0x40) * 0x10) = puVar8[7];
      iVar21 = __alldiv(puVar8[0x18],puVar8[0x19],0x10000,0);
      uVar4 = (int)((iVar21 >> 0x1f & 0xffU) + iVar21) >> 8 & 0x8000003f;
      if ((int)uVar4 < 0) {
        uVar4 = (uVar4 - 1 | 0xffffffc0) + 1;
      }
      iVar21 = __alldiv(puVar8[0x1a],puVar8[0x1b],0x10000,0);
      uVar17 = (int)(iVar21 + (iVar21 >> 0x1f & 0xffU)) >> 8 & 0x8000003f;
      if ((int)uVar17 < 0) {
        uVar17 = (uVar17 - 1 | 0xffffffc0) + 1;
      }
      *(undefined4 *)((int)pRVar14 + (uVar17 + 2 + uVar4 * 0x40) * 0x10) = puVar8[0x21];
      iVar21 = __alldiv(puVar8[0x32],puVar8[0x33],0x10000,0);
      uVar4 = (int)((iVar21 >> 0x1f & 0xffU) + iVar21) >> 8 & 0x8000003f;
      if ((int)uVar4 < 0) {
        uVar4 = (uVar4 - 1 | 0xffffffc0) + 1;
      }
      iVar21 = __alldiv(puVar8[0x34],puVar8[0x35],0x10000,0);
      uVar17 = (int)(iVar21 + (iVar21 >> 0x1f & 0xffU)) >> 8 & 0x8000003f;
      if ((int)uVar17 < 0) {
        uVar17 = (uVar17 - 1 | 0xffffffc0) + 1;
      }
      *(undefined4 *)((int)pRVar14 + (uVar17 + 2 + uVar4 * 0x40) * 0x10) = puVar8[0x3b];
      iVar21 = __alldiv(puVar8[0x4c],puVar8[0x4d],0x10000,0);
      uVar4 = (int)((iVar21 >> 0x1f & 0xffU) + iVar21) >> 8 & 0x8000003f;
      if ((int)uVar4 < 0) {
        uVar4 = (uVar4 - 1 | 0xffffffc0) + 1;
      }
      iVar21 = __alldiv(puVar8[0x4e],puVar8[0x4f],0x10000,0);
      uVar17 = (int)(iVar21 + (iVar21 >> 0x1f & 0xffU)) >> 8 & 0x8000003f;
      if ((int)uVar17 < 0) {
        uVar17 = (uVar17 - 1 | 0xffffffc0) + 1;
      }
      *(undefined4 *)((int)pRVar14 + (uVar17 + 2 + uVar4 * 0x40) * 0x10) = puVar8[0x55];
      iVar21 = __alldiv(puVar8[0x66],puVar8[0x67],0x10000,0);
      uVar4 = (int)((iVar21 >> 0x1f & 0xffU) + iVar21) >> 8 & 0x8000003f;
      if ((int)uVar4 < 0) {
        uVar4 = (uVar4 - 1 | 0xffffffc0) + 1;
      }
      iVar21 = __alldiv(puVar8[0x68],puVar8[0x69],0x10000,0);
      uVar17 = (int)(iVar21 + (iVar21 >> 0x1f & 0xffU)) >> 8 & 0x8000003f;
      if ((int)uVar17 < 0) {
        uVar17 = (uVar17 - 1 | 0xffffffc0) + 1;
      }
      *(undefined4 *)((int)pRVar14 + (uVar17 + 2 + uVar4 * 0x40) * 0x10) = puVar8[0x6f];
      iVar21 = __alldiv(puVar8[0x80],puVar8[0x81],0x10000,0);
      uVar4 = (int)((iVar21 >> 0x1f & 0xffU) + iVar21) >> 8 & 0x8000003f;
      if ((int)uVar4 < 0) {
        uVar4 = (uVar4 - 1 | 0xffffffc0) + 1;
      }
      iVar21 = __alldiv(puVar8[0x82],puVar8[0x83],0x10000,0);
      uVar17 = (int)(iVar21 + (iVar21 >> 0x1f & 0xffU)) >> 8 & 0x8000003f;
      if ((int)uVar17 < 0) {
        uVar17 = (uVar17 - 1 | 0xffffffc0) + 1;
      }
      *(undefined4 *)((int)pRVar14 + (uVar17 + 2 + uVar4 * 0x40) * 0x10) = puVar8[0x89];
      iVar21 = __alldiv(puVar8[0x9a],puVar8[0x9b],0x10000,0);
      uVar4 = (int)((iVar21 >> 0x1f & 0xffU) + iVar21) >> 8 & 0x8000003f;
      if ((int)uVar4 < 0) {
        uVar4 = (uVar4 - 1 | 0xffffffc0) + 1;
      }
      iVar21 = __alldiv(puVar8[0x9c],puVar8[0x9d],0x10000,0);
      uVar17 = (int)(iVar21 + (iVar21 >> 0x1f & 0xffU)) >> 8 & 0x8000003f;
      if ((int)uVar17 < 0) {
        uVar17 = (uVar17 - 1 | 0xffffffc0) + 1;
      }
      *(undefined4 *)((int)pRVar14 + (uVar17 + 2 + uVar4 * 0x40) * 0x10) = puVar8[0xa3];
      iVar21 = __alldiv(puVar8[0xb4],puVar8[0xb5],0x10000,0);
      uVar4 = (int)((iVar21 >> 0x1f & 0xffU) + iVar21) >> 8 & 0x8000003f;
      if ((int)uVar4 < 0) {
        uVar4 = (uVar4 - 1 | 0xffffffc0) + 1;
      }
      iVar21 = __alldiv(puVar8[0xb6],puVar8[0xb7],0x10000,0);
      uVar17 = (int)(iVar21 + (iVar21 >> 0x1f & 0xffU)) >> 8 & 0x8000003f;
      if ((int)uVar17 < 0) {
        uVar17 = (uVar17 - 1 | 0xffffffc0) + 1;
      }
      puVar11 = puVar8 + 0xbd;
      puVar8 = puVar8 + 0xd0;
      local_310 = (float)((int)local_310 + -1);
      *(undefined4 *)((int)pRVar14 + (uVar17 + 2 + uVar4 * 0x40) * 0x10) = *puVar11;
    } while (local_310 != 0.0);
    local_2b8 = (int *)0x0;
    local_2b4 = (int *)0x0;
    local_2b0 = (int *)0x0;
    local_c = CONCAT31(local_c._1_3_,2);
    local_2ec = (undefined1 *)(local_2d4 << 6);
    local_2f4 = 0;
    local_2e8 = (double)CONCAT44(local_2e8._4_4_,local_2d8 * 0x140);
    local_2a8 = (undefined1 *)(local_2d8 * 0x140);
    local_2cc = local_2ec;
    while( true ) {
      local_310 = (float)(local_2c8 + 0x100);
      local_318 = 0.0;
      fVar13 = local_300;
      do {
        fVar23 = local_318;
        local_2dc = (float *)fVar13;
        FUN_005c5e20(local_2c8,fVar13,0);
        FUN_005c5e20(local_310,fVar13,0);
        FUN_005c5e20(local_2c8,(int)fVar13 + 0x100,0);
        FUN_005c5e20(local_310,(int)fVar13 + 0x100,0);
        if ((int)(local_2ec + (int)local_2a8) % 0xd == 0) {
          local_9c = local_2f4;
          fStack_98 = fVar23;
          if ((&local_9c < local_2b4) && (local_2b8 <= &local_9c)) {
            iVar21 = (int)&local_9c - (int)local_2b8 >> 3;
            if ((local_2b4 == local_2b0) && ((int)local_2b0 - (int)local_2b4 >> 3 == 0)) {
              iVar16 = (int)local_2b4 - (int)local_2b8 >> 3;
              if (iVar16 == 0x1fffffff) goto LAB_005dbbe0;
              local_308 = (Region *)(iVar16 + 1);
              uVar4 = (int)local_2b0 - (int)local_2b8 >> 3;
              if (0x1fffffff - (uVar4 >> 1) < uVar4) {
                fVar13 = 0.0;
              }
              else {
                fVar13 = (float)(uVar4 + (uVar4 >> 1));
              }
              if ((uint)fVar13 < local_308) {
                fVar13 = (float)local_308;
              }
              FUN_005fbb30(fVar13);
            }
            if (local_2b4 != (int *)0x0) {
              *local_2b4 = local_2b8[iVar21 * 2];
              local_2b4[1] = local_2b8[iVar21 * 2 + 1];
            }
          }
          else {
            if ((local_2b4 == local_2b0) && ((int)local_2b0 - (int)local_2b4 >> 3 == 0)) {
              iVar21 = (int)local_2b4 - (int)local_2b8 >> 3;
              if (iVar21 == 0x1fffffff) goto LAB_005dbbe0;
              local_308 = (Region *)(iVar21 + 1);
              uVar4 = (int)local_2b0 - (int)local_2b8 >> 3;
              if (0x1fffffff - (uVar4 >> 1) < uVar4) {
                fVar13 = 0.0;
              }
              else {
                fVar13 = (float)(uVar4 + (uVar4 >> 1));
              }
              if ((uint)fVar13 < local_308) {
                fVar13 = (float)local_308;
              }
              FUN_005fbb30(fVar13);
            }
            local_318 = fVar23;
            if (local_2b4 != (int *)0x0) {
              *local_2b4 = local_9c;
              local_2b4[1] = (int)fStack_98;
            }
          }
          local_2b4 = local_2b4 + 2;
          fVar23 = local_318;
        }
        local_2a8 = (undefined1 *)((int)local_2a8 + 5);
        local_318 = (float)((int)fVar23 + 1);
        fVar13 = (float)((int)local_2dc + 0x100);
      } while ((int)local_318 < 0x40);
      local_2ec = local_2ec + 1;
      local_2f4 = local_2f4 + 1;
      local_2c8 = local_2c8 + 0x100;
      if (0x3f < (int)local_2f4) break;
      local_2a8 = (undefined1 *)local_2e8._0_4_;
    }
    local_2fc = (undefined1 *)&pRVar14[0x746].Region_data.offset_0xc;
    local_300 = 0.0;
    do {
      local_2f4 = 0;
      local_2ec = local_2fc;
      do {
        if (*(int *)(local_2ec + 0x18) == 1) {
          pfVar24 = (float *)0x0;
          pfVar15 = (float *)0x0;
          local_298 = (float *)0x0;
          local_294 = (float *)0x0;
          local_290 = (float *)0x0;
          local_308 = (Region *)((local_2f4 + local_2d8 * 8) * 0x800 + 0x80);
          local_c = CONCAT31(local_c._1_3_,3);
          local_30c = ((int)local_300 + local_2d4 * 8) * 0x800 + 0x80;
          local_2dc = (float *)0x0;
          goto LAB_005dbc70;
        }
        local_2f4 = local_2f4 + 1;
        local_2ec = local_2ec + 0x68;
      } while ((int)local_2f4 < 8);
      local_300 = (float)((int)local_300 + 1);
      local_2fc = local_2fc + 0x340;
    } while ((int)local_300 < 8);
    local_2dc = (float *)fVar13;
    if ((*(char *)((int)local_2f8 + 0xb4) == '\0') && (*(int *)((int)local_2f8 + 0xa4) != 0)) {
      puVar8 = &pRVar14[0x748].Region_data.offset_0x8;
      local_308 = (Region *)((int)((local_2d8 * 0x40 >> 0x1f & 7U) + local_2d8 * 0x40) >> 3);
      local_30c = (int)(local_2cc + ((int)local_2cc >> 0x1f & 7)) >> 3;
      local_318 = 1.12104e-44;
      uVar4 = local_278;
      do {
        local_310 = 1.12104e-44;
        local_300 = (float)local_308;
        do {
          local_168.vbtablePtr =
               (basic_iostream<char,std::char_traits<char>_>_vbtable *)
               &std::basic_stringstream<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>
                ::vbtable;
          local_168.basic_ostream<char,std::char_traits<char>_>.vbtablePtr =
               (basic_ostream<char,std::char_traits<char>_>_vbtable *)&DAT_006fcd08;
          local_100[0] = _vftable__exref;
          local_278 = uVar4 | 1;
          local_c = CONCAT31(local_c._1_3_,4);
          std::basic_iostream<char,std::char_traits<char>_>::
          basic_iostream<char,std::char_traits<char>_>
                    (&local_168,(basic_streambuf<char,std::char_traits<char>_> *)local_150);
          local_c = 5;
                    /* inlined constructor or destructor (approx location) for
                       std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_> */
          *(basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_vftable **)
           ((int)&local_168.vbtablePtr +
           (local_168.vbtablePtr)->basic_ios<char,std::char_traits<char>_>_offset) =
               &std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>::vftable;
          *(int *)((int)&iStack_16c +
                  (local_168.vbtablePtr)->basic_ios<char,std::char_traits<char>_>_offset) =
               (local_168.vbtablePtr)->basic_ios<char,std::char_traits<char>_>_offset + -0x68;
          std::basic_streambuf<char,std::char_traits<char>_>::
          basic_streambuf<char,std::char_traits<char>_>(local_150);
                    /* inlined constructor or destructor (approx location) for
                       std::basic_stringbuf<char,std::char_traits<char>,std::allocator<char>_> */
          local_150[0] = (basic_streambuf<char,std::char_traits<char>_>)
                         &std::basic_stringbuf<char,std::char_traits<char>,std::allocator<char>_>::
                          vftable;
          local_118 = 0;
          local_114 = 0;
          local_c._0_1_ = 7;
          uVar17 = local_30c;
          fVar13 = local_300;
          pbVar9 = (basic_ostream<char,std::char_traits<char>_> *)
                   FUN_00449150(&local_168.basic_ostream<char,std::char_traits<char>_>,"mission",
                                local_30c,&DAT_0071c760);
          pbVar10 = std::basic_ostream<char,std::char_traits<char>_>::operator<<(pbVar9,uVar17);
          pbVar9 = (basic_ostream<char,std::char_traits<char>_> *)FUN_00449150(pbVar10);
          std::basic_ostream<char,std::char_traits<char>_>::operator<<(pbVar9,(int)fVar13);
          pvStack_250 = (void *)0x0;
          uStack_24c = 0;
          uStack_248 = 0;
          uStack_244 = 0;
          local_c._0_1_ = 8;
          uVar5 = FUN_0040e140(apvStack_4c);
          local_c._0_1_ = 9;
          cStack_301 = FUN_004498d0(uVar5,&pvStack_250);
          local_c._0_1_ = 8;
          if (0xf < uStack_38) {
                    /* WARNING: Subroutine does not return */
            operator_delete(apvStack_4c[0]);
          }
          if (cStack_301 != '\0') {
            iVar21 = (int)(puVar8 + -10);
            FUN_0044a8a0(&pvStack_250);
            FUN_0044cb50(iVar21);
            *(undefined1 *)&pRVar14[0x7dd].Region_data.offset_0x18 = 1;
          }
          if (pvStack_250 != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
            operator_delete(pvStack_250);
          }
          local_c._0_1_ = 2;
          *(basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_vftable **)
           ((int)&local_168.vbtablePtr +
           (local_168.vbtablePtr)->basic_ios<char,std::char_traits<char>_>_offset) =
               &std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>::vftable;
          *(int *)((int)&iStack_16c +
                  (local_168.vbtablePtr)->basic_ios<char,std::char_traits<char>_>_offset) =
               (local_168.vbtablePtr)->basic_ios<char,std::char_traits<char>_>_offset + -0x68;
          local_150[0] = (basic_streambuf<char,std::char_traits<char>_>)
                         &std::basic_stringbuf<char,std::char_traits<char>,std::allocator<char>_>::
                          vftable;
          if ((local_114 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
            operator_delete(*(void **)auStack_148._4_4_);
          }
          std::basic_streambuf<char,std::char_traits<char>_>::setg
                    (local_150,(char *)0x0,(char *)0x0,(char *)0x0);
          *puStack_140 = 0;
          *puStack_130 = 0;
          *puStack_120 = 0;
          local_114 = local_114 & 0xfffffffe;
          local_118 = 0;
          std::basic_streambuf<char,std::char_traits<char>_>::
          ~basic_streambuf<char,std::char_traits<char>_>(local_150);
          std::basic_iostream<char,std::char_traits<char>_>::
          ~basic_iostream<char,std::char_traits<char>_>
                    ((basic_iostream<char,std::char_traits<char>_> *)auStack_148);
          std::basic_ios<char,std::char_traits<char>_>::~basic_ios<char,std::char_traits<char>_>
                    ((basic_ios<char,std::char_traits<char>_> *)local_100);
          bStack_218.vbtablePtr =
               (basic_iostream<char,std::char_traits<char>_>_vbtable *)
               &std::basic_stringstream<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>
                ::vbtable;
          bStack_218.basic_ostream<char,std::char_traits<char>_>.vbtablePtr =
               (basic_ostream<char,std::char_traits<char>_>_vbtable *)&DAT_006fcd08;
          apcStack_1b0[0] = _vftable__exref;
          uVar4 = uVar4 | 3;
          local_c = CONCAT31(local_c._1_3_,10);
          local_278 = uVar4;
          std::basic_iostream<char,std::char_traits<char>_>::
          basic_iostream<char,std::char_traits<char>_>
                    (&bStack_218,(basic_streambuf<char,std::char_traits<char>_> *)abStack_200);
          local_c = 0xb;
          *(basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_vftable **)
           ((int)&bStack_218.vbtablePtr +
           (bStack_218.vbtablePtr)->basic_ios<char,std::char_traits<char>_>_offset) =
               &std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>::vftable;
          *(int *)((int)&local_21c +
                  (bStack_218.vbtablePtr)->basic_ios<char,std::char_traits<char>_>_offset) =
               (bStack_218.vbtablePtr)->basic_ios<char,std::char_traits<char>_>_offset + -0x68;
          std::basic_streambuf<char,std::char_traits<char>_>::
          basic_streambuf<char,std::char_traits<char>_>(abStack_200);
          abStack_200[0] =
               (basic_streambuf<char,std::char_traits<char>_>)
               &std::basic_stringbuf<char,std::char_traits<char>,std::allocator<char>_>::vftable;
          uStack_1c8 = 0;
          uStack_1c4 = 0;
          local_c._0_1_ = 0xd;
          uVar17 = local_30c;
          fVar13 = local_300;
          pbVar9 = (basic_ostream<char,std::char_traits<char>_> *)
                   FUN_00449150(&bStack_218.basic_ostream<char,std::char_traits<char>_>,"monster",
                                local_30c,&DAT_0071c760);
          pbVar10 = std::basic_ostream<char,std::char_traits<char>_>::operator<<(pbVar9,uVar17);
          pbVar9 = (basic_ostream<char,std::char_traits<char>_> *)FUN_00449150(pbVar10);
          std::basic_ostream<char,std::char_traits<char>_>::operator<<(pbVar9,(int)fVar13);
          pvStack_260 = (void *)0x0;
          uStack_25c = 0;
          uStack_258 = 0;
          uStack_254 = 0;
          local_c._0_1_ = 0xe;
          uVar5 = FUN_0040e140(apvStack_34);
          local_c._0_1_ = 0xf;
          cStack_301 = FUN_004498d0(uVar5,&pvStack_260);
          local_c._0_1_ = 0xe;
          if (0xf < uStack_20) {
                    /* WARNING: Subroutine does not return */
            operator_delete(apvStack_34[0]);
          }
          if (cStack_301 != '\0') {
            puVar11 = puVar8;
            FUN_0044a8a0(&pvStack_260);
            FUN_0044cce0(puVar11);
          }
          if (pvStack_260 != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
            operator_delete(pvStack_260);
          }
          local_c = CONCAT31(local_c._1_3_,2);
          *(basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_vftable **)
           ((int)&bStack_218.vbtablePtr +
           (bStack_218.vbtablePtr)->basic_ios<char,std::char_traits<char>_>_offset) =
               &std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>::vftable;
          *(int *)((int)&local_21c +
                  (bStack_218.vbtablePtr)->basic_ios<char,std::char_traits<char>_>_offset) =
               (bStack_218.vbtablePtr)->basic_ios<char,std::char_traits<char>_>_offset + -0x68;
          abStack_200[0] =
               (basic_streambuf<char,std::char_traits<char>_>)
               &std::basic_stringbuf<char,std::char_traits<char>,std::allocator<char>_>::vftable;
          if ((uStack_1c4 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
            operator_delete(*(void **)auStack_1f8._4_4_);
          }
          std::basic_streambuf<char,std::char_traits<char>_>::setg
                    (abStack_200,(char *)0x0,(char *)0x0,(char *)0x0);
          *puStack_1f0 = 0;
          *puStack_1e0 = 0;
          *puStack_1d0 = 0;
          uStack_1c4 = uStack_1c4 & 0xfffffffe;
          uStack_1c8 = 0;
          std::basic_streambuf<char,std::char_traits<char>_>::
          ~basic_streambuf<char,std::char_traits<char>_>(abStack_200);
          std::basic_iostream<char,std::char_traits<char>_>::
          ~basic_iostream<char,std::char_traits<char>_>
                    ((basic_iostream<char,std::char_traits<char>_> *)auStack_1f8);
          std::basic_ios<char,std::char_traits<char>_>::~basic_ios<char,std::char_traits<char>_>
                    ((basic_ios<char,std::char_traits<char>_> *)apcStack_1b0);
          local_300 = (float)((int)local_300 + 1);
          puVar8 = puVar8 + 0x1a;
          local_310 = (float)((int)local_310 + -1);
        } while (local_310 != 0.0);
        local_30c = local_30c + 1;
        local_318 = (float)((int)local_318 + -1);
      } while (local_318 != 0.0);
      local_310 = 0.0;
      local_318 = 0.0;
    }
    local_c = CONCAT31(local_c._1_3_,1);
    *(Region **)((int)local_2f8 + local_274 * 4 + 0xbc) = pRVar14;
    if (local_2b8 != (int *)0x0) {
      std::_Container_base0::_Orphan_all((_Container_base0 *)&local_2b8);
                    /* WARNING: Subroutine does not return */
      operator_delete(local_2b8);
    }
    local_c = 0xffffffff;
    if (local_2c4 != (undefined4 *)0x0) {
      std::_Container_base0::_Orphan_all((_Container_base0 *)&local_2c4);
                    /* WARNING: Subroutine does not return */
      operator_delete(local_2c4);
    }
  }
  local_c = 0xffffffff;
  ExceptionList = local_14;
  __security_check_cookie(local_1c ^ (uint)auStack_324);
  return;
LAB_005dbc70:
  local_26c = ((int)local_30c >> 0x1f) << 0x10 | local_30c >> 0x10;
  local_270 = (float)(local_30c << 0x10);
  local_2a8 = (undefined1 *)0x0;
  local_94 = (float)((int)local_2dc + (int)local_300 * 8);
  local_318 = (float)local_308;
  do {
    pfVar20 = local_294;
    local_264 = ((int)local_318 >> 0x1f) << 0x10 | (uint)local_318 >> 0x10;
    local_268 = (float)((int)local_318 << 0x10);
    fVar25 = (float10)FUN_005f8e10(&local_270,&local_268);
    local_2e8 = (double)CONCAT44(local_2e8._4_4_,(float)fVar25);
    local_310 = 1.0 - (float)fVar25;
    if (0.0 < local_310) {
      local_310 = local_310 * local_310;
    }
    else {
      local_310 = 0.0;
    }
    iStack_90 = (int)local_2a8 + local_2f4 * 8;
    uVar27 = CONCAT44(iStack_90,local_94);
    local_84 = local_310;
    local_80 = uVar27;
    if ((&local_84 < pfVar20) && (pfVar24 <= &local_84)) {
      local_310 = (float)(((int)&local_84 - (int)pfVar24) / 0xc);
      if ((pfVar20 == pfVar15) &&
         (iVar21 = (int)pfVar15 - (int)pfVar20 >> 0x1f,
         ((int)pfVar15 - (int)pfVar20) / 0xc + iVar21 == iVar21)) {
        iVar21 = ((int)pfVar20 - (int)pfVar24) / 0xc;
        if (iVar21 == 0x15555555) goto LAB_005dbbe0;
        uVar17 = ((int)pfVar15 - (int)pfVar24) / 0xc;
        uVar4 = iVar21 + 1;
        if (0x15555555 - (uVar17 >> 1) < uVar17) {
          uVar17 = 0;
        }
        else {
          uVar17 = uVar17 + (uVar17 >> 1);
        }
        if (uVar17 < uVar4) {
          uVar17 = uVar4;
        }
        FUN_005c4230(uVar17);
        pfVar15 = local_290;
        pfVar20 = local_294;
        pfVar24 = local_298;
      }
      if (pfVar20 != (float *)0x0) {
        *pfVar20 = pfVar24[(int)local_310 * 3];
        pfVar20[1] = pfVar24[(int)local_310 * 3 + 1];
        pfVar20[2] = pfVar24[(int)local_310 * 3 + 2];
      }
    }
    else {
      if ((pfVar20 == pfVar15) &&
         (iVar21 = (int)pfVar15 - (int)pfVar20 >> 0x1f,
         ((int)pfVar15 - (int)pfVar20) / 0xc + iVar21 == iVar21)) {
        iVar21 = ((int)pfVar20 - (int)pfVar24) / 0xc;
        if (iVar21 == 0x15555555) {
LAB_005dbbe0:
                    /* WARNING: Subroutine does not return */
          std::_Xlength_error("vector<T> too long");
        }
        uVar17 = ((int)pfVar15 - (int)pfVar24) / 0xc;
        uVar4 = iVar21 + 1;
        if (0x15555555 - (uVar17 >> 1) < uVar17) {
          uVar17 = 0;
        }
        else {
          uVar17 = uVar17 + (uVar17 >> 1);
        }
        if (uVar17 < uVar4) {
          uVar17 = uVar4;
        }
        FUN_005c4230(uVar17);
        uVar27 = CONCAT44(iStack_90,local_94);
        pfVar15 = local_290;
        pfVar20 = local_294;
        pfVar24 = local_298;
      }
      if (pfVar20 != (float *)0x0) {
        *pfVar20 = local_310;
        *(undefined8 *)(pfVar20 + 1) = uVar27;
      }
    }
    local_2a8 = (undefined1 *)((int)local_2a8 + 1);
    local_294 = pfVar20 + 3;
    local_318 = (float)((int)local_318 + 0x100);
  } while ((int)local_2a8 < 8);
  local_2dc = (float *)((int)local_2dc + 1);
  local_30c = local_30c + 0x100;
  if (7 < (int)local_2dc) {
    local_27c = (float)((uint)local_27c & 0xffffff00);
    FUN_005c24f0(pfVar24,local_294,((int)local_294 - (int)pfVar24) / 0xc,local_27c);
    *(undefined1 *)((int)local_2f0 + ((int)pfVar24[1] * 0x40 + (int)pfVar24[2]) * 0x10 + 0x18) = 1;
    *(undefined1 *)((int)local_2f0 + ((int)pfVar24[1] * 0x40 + (int)pfVar24[2]) * 0x10 + 0x19) = 1;
    *(undefined1 *)((int)local_2f0 + ((int)pfVar24[4] * 0x40 + (int)pfVar24[5]) * 0x10 + 0x18) = 1;
    *(undefined1 *)((int)local_2f0 + ((int)pfVar24[4] * 0x40 + (int)pfVar24[5]) * 0x10 + 0x19) = 2;
    *(undefined1 *)((int)local_2f0 + ((int)pfVar24[7] * 0x40 + (int)pfVar24[8]) * 0x10 + 0x18) = 1;
    *(undefined1 *)((int)local_2f0 + ((int)pfVar24[7] * 0x40 + (int)pfVar24[8]) * 0x10 + 0x19) = 3;
    *(undefined1 *)((int)local_2f0 + ((int)pfVar24[10] * 0x40 + (int)pfVar24[0xb]) * 0x10 + 0x18) =
         1;
    *(undefined1 *)((int)local_2f0 + ((int)pfVar24[10] * 0x40 + (int)pfVar24[0xb]) * 0x10 + 0x19) =
         4;
                    /* WARNING: Subroutine does not return */
    operator_delete(pfVar24);
  }
  goto LAB_005dbc70;
}


/* FUN_005dc6e0 @ 005dc6e0  kind=gamemisc  attributed-by=caller-vote  size=11761 */

void FUN_005dc6e0(int param_1,undefined4 *param_2,int *param_3)

{
  undefined1 *puVar1;
  CombatBehavior_vftable **ppCVar2;
  CombatBehavior_vftable **ppCVar3;
  vfunction2 *pvVar4;
  undefined4 uVar5;
  SequentialBehavior *pSVar6;
  Spawn *pSVar7;
  char cVar8;
  uint uVar9;
  int iVar10;
  uint uVar11;
  Spawn *pSVar12;
  WalkPathBehavior *pWVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  Spawn *pSVar16;
  uint *puVar17;
  int *piVar18;
  int iVar19;
  uint *puVar20;
  undefined4 *puVar21;
  SequentialBehavior_data *pSVar22;
  int iVar23;
  uint *puVar24;
  _Container_base0 *this;
  void *pvVar25;
  Spawn_data *pSVar26;
  code *pcVar27;
  bool bVar28;
  float10 fVar29;
  float fVar30;
  double dVar31;
  undefined8 uVar32;
  longlong lVar33;
  longlong lVar34;
  undefined4 local_7bc;
  undefined4 local_7b8;
  undefined4 local_7b4;
  undefined4 local_7b0;
  undefined4 local_7ac;
  undefined4 local_7a8;
  undefined4 local_7a4;
  undefined4 local_7a0;
  undefined4 local_79c;
  undefined4 local_798;
  undefined4 local_794;
  undefined4 local_790;
  undefined4 local_788;
  undefined4 local_784;
  undefined4 local_77c;
  undefined4 local_778;
  undefined4 local_774;
  undefined4 local_770;
  undefined4 local_76c;
  undefined4 local_768;
  undefined4 local_764;
  undefined4 local_760;
  undefined4 local_75c;
  undefined4 local_758;
  undefined4 local_754;
  undefined4 local_750;
  undefined4 local_74c;
  undefined4 local_748;
  undefined4 local_744;
  undefined4 local_740;
  undefined4 local_73c;
  undefined4 local_738;
  undefined4 local_734;
  undefined4 local_730;
  undefined4 local_72c;
  undefined4 local_728;
  undefined4 local_724;
  undefined4 local_720;
  undefined4 local_71c;
  undefined4 local_718;
  undefined4 local_714;
  undefined4 local_710;
  undefined4 local_70c;
  undefined4 local_708;
  undefined4 local_704;
  undefined4 local_700;
  undefined4 local_6fc;
  undefined4 local_6f8;
  undefined4 local_6f4;
  undefined4 local_6f0;
  undefined4 local_6ec;
  undefined4 local_6e8;
  undefined4 local_6e4;
  undefined4 local_6e0;
  undefined4 local_6dc;
  undefined4 local_6d8;
  undefined4 local_6d4;
  undefined4 local_6d0;
  undefined4 local_6cc;
  undefined4 local_6c8;
  undefined4 local_6c4;
  undefined4 local_6c0;
  undefined4 local_6bc;
  undefined4 local_6b8;
  undefined4 local_6b4;
  undefined4 local_6b0;
  undefined4 local_6ac;
  undefined4 local_6a8;
  undefined4 local_6a4;
  undefined8 local_6a0;
  undefined4 local_698;
  Spawn *local_694;
  undefined4 local_690;
  RandomWalkBehavior *local_68c;
  undefined4 local_688;
  CompanionBehavior *local_684;
  undefined4 local_680;
  CombatBehavior *local_67c;
  undefined4 local_678;
  RandomWalkBehavior *local_674;
  undefined4 local_670;
  WalkPathBehavior *local_66c;
  undefined4 local_668;
  CombatBehavior *local_664;
  undefined4 local_660;
  Spawn *local_65c;
  undefined4 local_658;
  RandomWalkBehavior *local_654;
  undefined4 local_650;
  RandomInteractionBehavior *local_64c;
  undefined4 local_648;
  WalkPathBehavior *local_644;
  undefined4 local_640;
  CombatBehavior *local_63c;
  undefined4 local_638;
  float local_634;
  undefined4 local_630;
  float local_62c;
  undefined4 local_628;
  undefined4 local_624;
  undefined4 local_620;
  undefined4 local_61c;
  undefined4 local_618;
  undefined4 local_614;
  undefined4 local_610;
  undefined4 local_60c;
  undefined4 local_608;
  undefined4 local_604;
  undefined4 local_600;
  undefined4 local_5fc;
  undefined4 local_5f8;
  undefined4 local_5f4;
  undefined4 local_5f0;
  undefined4 local_5ec;
  undefined4 local_5e8;
  undefined4 local_5e4;
  undefined4 local_5e0;
  undefined4 local_5dc;
  undefined4 local_5d8;
  undefined4 local_5d4;
  undefined4 local_5d0;
  undefined4 local_5cc;
  undefined4 local_5c8;
  undefined4 local_5c4;
  undefined4 local_5c0;
  undefined4 local_5bc;
  undefined4 local_5b8;
  undefined4 local_5b4;
  undefined4 local_5b0;
  undefined4 local_5ac;
  undefined4 local_5a8;
  undefined4 local_5a4;
  undefined4 local_5a0;
  undefined4 local_59c;
  undefined4 local_598;
  undefined4 local_594;
  undefined4 local_590;
  undefined4 local_58c;
  undefined4 local_588;
  undefined4 local_584;
  undefined4 local_580;
  undefined4 local_57c;
  undefined4 local_578;
  undefined4 local_574;
  undefined4 local_570;
  undefined4 local_568;
  undefined4 local_564;
  undefined4 local_55c;
  undefined4 local_558;
  undefined4 local_550;
  undefined4 local_54c;
  undefined4 local_544;
  undefined4 local_540;
  undefined4 local_538;
  undefined4 local_534;
  undefined4 local_52c;
  undefined4 local_528;
  undefined4 local_520;
  undefined4 local_51c;
  undefined4 local_514;
  undefined4 local_510;
  undefined4 local_508;
  undefined4 local_504;
  undefined4 local_4fc;
  undefined4 local_4f8;
  undefined4 local_4f0;
  undefined4 local_4ec;
  undefined4 local_4e4;
  undefined4 local_4e0;
  undefined4 local_4d8;
  undefined4 local_4d4;
  undefined4 local_4cc;
  undefined4 local_4c8;
  undefined4 local_4c4;
  undefined4 local_4c0;
  undefined4 local_4bc;
  undefined4 local_4b8;
  undefined4 local_4b4;
  undefined4 local_4b0;
  undefined4 local_4a8;
  undefined4 local_4a4;
  undefined4 local_49c;
  undefined4 local_498;
  undefined4 local_490;
  undefined4 local_48c;
  WalkPathBehavior *local_484;
  int local_480;
  undefined1 local_479;
  Spawn *local_478 [2];
  uint local_470;
  void *local_46c;
  int local_468;
  undefined4 local_464;
  float local_460;
  int local_45c;
  void *local_458;
  void *local_454;
  undefined4 local_450;
  uint local_44c;
  uint local_448;
  uint local_444;
  uint *local_440;
  uint local_43c;
  uint local_438;
  SequentialBehavior_data *local_434;
  void *local_430;
  void *local_42c;
  undefined4 local_428;
  SequentialBehavior *local_424;
  void *local_420;
  void *local_41c;
  undefined4 local_418;
  uint *local_414;
  WalkPathBehavior *local_410;
  SequentialBehavior *local_40c;
  uint *local_408;
  Spawn *local_404;
  char local_3fd;
  uint local_3fc;
  uint local_3f8;
  uint local_3f4;
  uint local_3f0;
  int local_3e4;
  int local_3e0;
  int local_3dc;
  int local_3d8;
  CombatBehavior_vftable *local_3cc [2];
  int local_3c4;
  int local_3c0;
  int local_3bc;
  int local_3b8;
  SequentialBehavior_data *local_3b4;
  SequentialBehavior *local_3b0;
  uint local_3ac;
  undefined8 local_3a8;
  undefined4 local_3a0;
  undefined1 local_39c;
  undefined4 local_398;
  WalkPathBehavior_vftable *local_394;
  undefined8 local_38c;
  undefined4 *local_384;
  undefined4 *local_380;
  undefined4 local_37c;
  WalkPathBehavior_vftable *local_378;
  undefined2 local_374 [2];
  undefined4 local_370;
  undefined4 local_36c;
  undefined2 local_368;
  undefined1 local_366;
  undefined2 local_364;
  undefined1 local_360 [256];
  undefined4 local_260;
  undefined4 local_25c;
  undefined4 local_258;
  undefined4 local_254;
  undefined4 local_250;
  undefined4 uStack_24c;
  undefined4 local_248;
  uint local_244 [4];
  uint local_234;
  uint local_230;
  SequentialBehavior_data *local_22c;
  SequentialBehavior *local_228;
  uint local_224;
  uint local_220;
  uint uStack_21c;
  uint local_218;
  undefined1 local_214;
  uint local_210;
  uint local_20c;
  undefined8 local_204;
  _Container_base0 *local_1fc;
  _Container_base0 *local_1f8;
  undefined4 local_1f4;
  uint local_1f0;
  undefined2 local_1ec [2];
  undefined4 local_1e8;
  undefined4 local_1e4;
  undefined2 local_1e0;
  undefined1 local_1de;
  undefined2 local_1dc;
  undefined1 local_1d8 [256];
  undefined4 local_d8;
  uint local_d4;
  uint local_d0;
  uint local_cc;
  uint local_c8;
  uint local_c4;
  uint local_c0;
  int local_bc;
  int local_b8;
  float local_b4;
  float fStack_b0;
  float local_ac;
  int local_a8 [2];
  undefined8 local_a0;
  int local_98;
  int iStack_94;
  int local_90;
  int iStack_8c;
  int local_88;
  int iStack_84;
  undefined4 local_80;
  undefined4 uStack_7c;
  undefined4 local_78;
  undefined4 local_74;
  undefined4 uStack_70;
  undefined4 local_6c;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 uStack_58;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 local_48;
  undefined4 local_44;
  uint *local_40;
  uint *local_3c;
  SequentialBehavior *local_38;
  uint local_34;
  uint local_30;
  uint local_2c;
  uint local_28;
  uint local_24;
  uint local_20;
  SequentialBehavior_data *local_1c;
  SequentialBehavior *local_18;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  puStack_c = &LAB_006f44cd;
  local_10 = ExceptionList;
  uVar9 = DAT_0076aa78 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_45c = param_1;
  local_14 = uVar9;
  if (param_2[6] == 0) goto LAB_005df586;
  local_430 = (void *)0x0;
  local_42c = (void *)0x0;
  local_428 = 0;
  local_420 = (void *)0x0;
  local_41c = (void *)0x0;
  local_418 = 0;
  local_3fd = '\0';
  local_46c = (void *)0x0;
  local_468 = 0;
  local_464 = 0;
  local_8 = 2;
  if (param_2[6] == 4) {
    local_74c = 9;
    puVar21 = &local_74c;
LAB_005dc8f2:
    FUN_0066add0(puVar21);
  }
  else {
    local_614 = 0;
    FUN_0066add0(&local_614);
    local_61c = 1;
    FUN_0066add0(&local_61c);
    local_624 = 2;
    FUN_0066add0(&local_624);
    local_6a8 = 3;
    FUN_0066add0(&local_6a8);
    local_6b0 = 4;
    FUN_0066add0(&local_6b0);
    local_6b8 = 5;
    FUN_0066add0(&local_6b8);
    local_6c0 = 1;
    FUN_0066add0(&local_6c0);
    local_6d8 = 7;
    FUN_0066add0(&local_6d8);
    local_6e0 = 8;
    FUN_0066add0(&local_6e0);
    if ((param_2[6] != 0xd) && (param_2[6] != 2)) {
      local_6e8 = 6;
      FUN_0066add0(&local_6e8);
    }
    if (param_2[6] == 3) {
      local_6f0 = 10;
      puVar21 = &local_6f0;
      goto LAB_005dc8f2;
    }
  }
  switch(*(undefined4 *)
          ((int)local_46c + ((uint)param_2[8] % (uint)(local_468 - (int)local_46c >> 2)) * 4)) {
  case 1:
    local_3fd = '\x01';
    local_6f8 = 0xf;
    FUN_0066add0(&local_6f8);
    local_700 = 0x10;
    FUN_0066add0(&local_700);
    FUN_005c3a90();
    local_8._0_1_ = 4;
    uVar9 = rand();
    uVar9 = uVar9 & 0x80000003;
    if ((int)uVar9 < 0) {
      uVar9 = (uVar9 - 1 | 0xfffffffc) + 1;
    }
    if (uVar9 == 0) {
      local_718 = 0x11;
      puVar21 = &local_718;
LAB_005dc9ca:
      FUN_0066add0(puVar21);
    }
    else {
      if (uVar9 == 1) {
        local_710 = 0x29;
        puVar21 = &local_710;
        goto LAB_005dc9ca;
      }
      if (uVar9 == 2) {
        local_708 = 0x61;
        puVar21 = &local_708;
        goto LAB_005dc9ca;
      }
    }
    uVar9 = rand();
    uVar9 = uVar9 & 0x80000003;
    if ((int)uVar9 < 0) {
      uVar9 = (uVar9 - 1 | 0xfffffffc) + 1;
    }
    switch(uVar9) {
    case 0:
      local_720 = 0x28;
      FUN_0066add0(&local_720);
      local_728 = 0x25;
      FUN_0066add0(&local_728);
      local_730 = 0x26;
      FUN_0066add0(&local_730);
      local_738 = 0x27;
      puVar21 = &local_738;
      break;
    case 1:
      local_740 = 0x3b;
      puVar21 = &local_740;
      break;
    case 2:
      local_748 = 0x29;
      puVar21 = &local_748;
      break;
    case 3:
      local_750 = 0x60;
      puVar21 = &local_750;
      break;
    default:
      goto switchD_005dc9ed_default;
    }
    FUN_0066add0(puVar21);
switchD_005dc9ed_default:
    FUN_005f4c30(&local_49c);
    local_498 = local_49c;
    local_48c = local_490;
    local_758 = 0xf;
    FUN_0066add0(&local_758);
    local_760 = 0x10;
    FUN_0066add0(&local_760);
    local_768 = 0xf;
    FUN_0066add0(&local_768);
    local_770 = 0x10;
    FUN_0066add0(&local_770);
    FUN_005f4c30(&local_49c);
    break;
  case 2:
    local_3fd = '\x01';
    local_778 = 2;
    FUN_0066add0(&local_778);
    local_79c = 3;
    FUN_0066add0(&local_79c);
    FUN_005c3a90();
    local_8._0_1_ = 5;
    iVar10 = rand();
    iVar10 = iVar10 % 3;
    if (iVar10 == 0) {
      local_7b4 = 0x5e;
      puVar21 = &local_7b4;
LAB_005dcbdf:
      FUN_0066add0(puVar21);
    }
    else {
      if (iVar10 == 1) {
        local_7ac = 0x4f;
        puVar21 = &local_7ac;
        goto LAB_005dcbdf;
      }
      if (iVar10 == 2) {
        local_7a4 = 0x52;
        puVar21 = &local_7a4;
        goto LAB_005dcbdf;
      }
    }
    uVar9 = rand();
    uVar9 = uVar9 & 0x80000003;
    if ((int)uVar9 < 0) {
      uVar9 = (uVar9 - 1 | 0xfffffffc) + 1;
    }
    switch(uVar9) {
    case 0:
      local_7bc = 0x1e;
      puVar21 = &local_7bc;
      break;
    case 1:
      local_6cc = 0x1a;
      puVar21 = &local_6cc;
      break;
    case 2:
      local_580 = 0x13;
      puVar21 = &local_580;
      break;
    case 3:
      local_698 = 0x21;
      puVar21 = &local_698;
      break;
    case 4:
      local_588 = 0x1f;
      puVar21 = &local_588;
      break;
    case 5:
      local_7b8 = 0x20;
      puVar21 = &local_7b8;
      break;
    default:
      goto switchD_005dcbfe_default;
    }
    FUN_0066add0(puVar21);
switchD_005dcbfe_default:
    FUN_005f4c30(&local_4b4);
    local_4b0 = local_4b4;
    local_4a4 = local_4a8;
    local_590 = 2;
    FUN_0066add0(&local_590);
    local_6a4 = 3;
    FUN_0066add0(&local_6a4);
    local_598 = 2;
    FUN_0066add0(&local_598);
    local_72c = 3;
    FUN_0066add0(&local_72c);
    FUN_005f4c30(&local_4b4);
    break;
  case 3:
    local_3fd = '\x01';
    local_5a0 = 9;
    FUN_0066add0(&local_5a0);
    local_6ac = 10;
    FUN_0066add0(&local_6ac);
    FUN_005c3a90();
    local_8._0_1_ = 6;
    uVar9 = rand();
    uVar9 = uVar9 & 0x80000001;
    if ((int)uVar9 < 0) {
      uVar9 = (uVar9 - 1 | 0xfffffffe) + 1;
    }
    if (uVar9 == 0) {
      local_76c = 0x2f;
      puVar21 = &local_76c;
LAB_005dcdb8:
      FUN_0066add0(puVar21);
    }
    else if (uVar9 == 1) {
      local_5a8 = 0x58;
      puVar21 = &local_5a8;
      goto LAB_005dcdb8;
    }
    iVar10 = rand();
    iVar10 = iVar10 % 3;
    if (iVar10 == 0) {
      local_5b8 = 0x57;
      puVar21 = &local_5b8;
LAB_005dce08:
      FUN_0066add0(puVar21);
    }
    else {
      if (iVar10 == 1) {
        local_6b4 = 0x5b;
        puVar21 = &local_6b4;
        goto LAB_005dce08;
      }
      if (iVar10 == 2) {
        local_5b0 = 0x21;
        puVar21 = &local_5b0;
        goto LAB_005dce08;
      }
    }
    FUN_005f4c30(&local_514);
    local_510 = local_514;
    local_504 = local_508;
    local_734 = 9;
    FUN_0066add0(&local_734);
    local_5c0 = 10;
    FUN_0066add0(&local_5c0);
    local_6bc = 9;
    FUN_0066add0(&local_6bc);
    local_5c8 = 10;
    FUN_0066add0(&local_5c8);
    FUN_005f4c30(&local_514);
    break;
  case 4:
    local_3fd = '\x01';
    local_7a0 = 7;
    FUN_0066add0(&local_7a0);
    local_5d0 = 8;
    FUN_0066add0(&local_5d0);
    FUN_005c3a90();
    local_8._0_1_ = 7;
    local_6c4 = 7;
    FUN_0066add0(&local_6c4);
    local_5d8 = 8;
    FUN_0066add0(&local_5d8);
    iVar10 = rand();
    iVar10 = iVar10 % 3;
    if (iVar10 == 0) {
      local_6d0 = 0x3c;
      puVar21 = &local_6d0;
LAB_005dcf95:
      FUN_0066add0(puVar21);
    }
    else {
      if (iVar10 == 1) {
        local_5e0 = 0x35;
        puVar21 = &local_5e0;
        goto LAB_005dcf95;
      }
      if (iVar10 == 2) {
        local_6c8 = 0x3a;
        puVar21 = &local_6c8;
        goto LAB_005dcf95;
      }
    }
    FUN_005f4c30(&local_52c);
    local_528 = local_52c;
    local_51c = local_520;
    local_5e8 = 7;
    FUN_0066add0(&local_5e8);
    local_73c = 8;
    FUN_0066add0(&local_73c);
    local_5f0 = 7;
    FUN_0066add0(&local_5f0);
    local_6d4 = 8;
    FUN_0066add0(&local_6d4);
    FUN_005f4c30(&local_52c);
    break;
  case 5:
    local_3fd = '\x01';
    local_5f8 = 4;
    FUN_0066add0(&local_5f8);
    local_774 = 5;
    FUN_0066add0(&local_774);
    FUN_005c3a90();
    local_8._0_1_ = 8;
    local_600 = 0x58;
    FUN_0066add0(&local_600);
    local_6dc = 0x57;
    FUN_0066add0(&local_6dc);
    local_608 = 0x37;
    FUN_0066add0(&local_608);
    local_744 = 0x3c;
    FUN_0066add0(&local_744);
    FUN_005f4c30(&local_55c);
    local_558 = local_55c;
    local_54c = local_550;
    local_610 = 4;
    FUN_0066add0(&local_610);
    local_6e4 = 5;
    FUN_0066add0(&local_6e4);
    local_618 = 4;
    FUN_0066add0(&local_618);
    local_7b0 = 5;
    FUN_0066add0(&local_7b0);
    FUN_005f4c30(&local_55c);
    break;
  case 6:
    local_620 = 0x46;
    FUN_0066add0(&local_620);
    local_6ec = 0x45;
    FUN_0066add0(&local_6ec);
    FUN_005c3a90();
    local_8._0_1_ = 9;
    local_628 = 0x47;
    FUN_0066add0(&local_628);
    local_578 = 0x47;
    FUN_0066add0(&local_578);
    FUN_005f4c30(&local_574);
    local_570 = local_574;
    local_564 = local_568;
    local_630 = 0x46;
    FUN_0066add0(&local_630);
    local_6f4 = 0x45;
    FUN_0066add0(&local_6f4);
    local_638 = 0x46;
    FUN_0066add0(&local_638);
    local_77c = 0x45;
    FUN_0066add0(&local_77c);
    FUN_005f4c30(&local_574);
    break;
  case 7:
    local_640 = 0x34;
    FUN_0066add0(&local_640);
    FUN_005c3a90(uVar9);
    local_8._0_1_ = 10;
    local_6fc = 0x3e;
    FUN_0066add0(&local_6fc);
    local_648 = 0x3e;
    FUN_0066add0(&local_648);
    FUN_005f4c30(&local_544);
    local_540 = local_544;
    local_534 = local_538;
    local_754 = 0x3c;
    FUN_0066add0(&local_754);
    local_650 = 0x3c;
    FUN_0066add0(&local_650);
    FUN_005f4c30(&local_544);
    local_534 = local_538;
    local_704 = 0x34;
    FUN_0066add0(&local_704);
    local_658 = 0x34;
    FUN_0066add0(&local_658);
    FUN_005f4c30(&local_544);
    break;
  case 8:
    local_7a8 = 0x66;
    FUN_0066add0(&local_7a8);
    local_660 = 0x69;
    FUN_0066add0(&local_660);
    local_70c = 0x68;
    FUN_0066add0(&local_70c);
    FUN_005c3a90();
    local_8._0_1_ = 0xb;
    local_668 = 0x68;
    FUN_0066add0(&local_668);
    local_75c = 0x68;
    FUN_0066add0(&local_75c);
    FUN_005f4c30(&local_4fc);
    local_4f8 = local_4fc;
    local_4ec = local_4f0;
    local_670 = 0x66;
    FUN_0066add0(&local_670);
    local_714 = 0x66;
    FUN_0066add0(&local_714);
    FUN_005f4c30(&local_4fc);
    local_4f8 = local_4fc;
    local_4ec = local_4f0;
    local_678 = 0x69;
    FUN_0066add0(&local_678);
    local_798 = 0x69;
    FUN_0066add0(&local_798);
    FUN_005f4c30(&local_4fc);
    break;
  case 9:
    local_680 = 0x56;
    FUN_0066add0(&local_680);
    local_71c = 0x6a;
    FUN_0066add0(&local_71c);
    FUN_005c3a90();
    local_8._0_1_ = 0xc;
    local_688 = 0x56;
    FUN_0066add0(&local_688);
    local_764 = 0x56;
    FUN_0066add0(&local_764);
    FUN_005f4c30(&local_794);
    local_790 = local_794;
    local_784 = local_788;
    local_690 = 0x6a;
    FUN_0066add0(&local_690);
    local_724 = 0x6a;
    FUN_0066add0(&local_724);
    FUN_005f4c30(&local_794);
    break;
  case 10:
    local_57c = 0x23;
    FUN_0066add0(&local_57c);
    local_584 = 0x5a;
    FUN_0066add0(&local_584);
    local_58c = 0x5b;
    FUN_0066add0(&local_58c);
    FUN_005c3a90();
    local_8._0_1_ = 0xd;
    local_594 = 0x23;
    FUN_0066add0(&local_594);
    local_59c = 0x23;
    FUN_0066add0(&local_59c);
    FUN_005f4c30(&local_4e4);
    local_4e0 = local_4e4;
    local_4d4 = local_4d8;
    local_5a4 = 0x5a;
    FUN_0066add0(&local_5a4);
    local_5ac = 0x5a;
    FUN_0066add0(&local_5ac);
    FUN_005f4c30(&local_4e4);
    local_4e0 = local_4e4;
    local_4d4 = local_4d8;
    local_5b4 = 0x5b;
    FUN_0066add0(&local_5b4);
    local_5bc = 0x5b;
    FUN_0066add0(&local_5bc);
    FUN_005f4c30(&local_4e4);
    break;
  default:
    local_3fd = '\x01';
    local_5c4 = 0xb;
    FUN_0066add0(&local_5c4);
    local_5cc = 0xc;
    FUN_0066add0(&local_5cc);
    local_4cc = 0;
    local_4c8 = 0;
    local_4c4 = 0;
    local_4c0 = 0;
    local_4bc = 0;
    local_4b8 = 0;
    local_8._0_1_ = 3;
    local_5d4 = 0x2e;
    FUN_0066add0(&local_5d4);
    local_5dc = 0x13;
    FUN_0066add0(&local_5dc);
    local_5e4 = 0x21;
    FUN_0066add0(&local_5e4);
    local_5ec = 0x1a;
    FUN_0066add0(&local_5ec);
    FUN_005f4c30(&local_4cc);
    local_4c8 = local_4cc;
    local_4bc = local_4c0;
    local_5f4 = 0xb;
    FUN_0066add0(&local_5f4);
    local_5fc = 0xc;
    FUN_0066add0(&local_5fc);
    local_604 = 0xb;
    FUN_0066add0(&local_604);
    local_60c = 0xc;
    FUN_0066add0(&local_60c);
    FUN_005f4c30(&local_4cc);
  }
  FUN_005c3c70();
  local_480 = -1;
  iVar10 = __alldiv(*param_2,param_2[1],0x10000,0);
  local_bc = iVar10;
  local_b8 = __alldiv(param_2[2],param_2[3],0x10000,0);
  local_a8[0] = (int)(iVar10 + (iVar10 >> 0x1f & 0xffU)) >> 8;
  local_a8[1] = (int)(local_b8 + (local_b8 >> 0x1f & 0xffU)) >> 8;
  iVar10 = 0;
  piVar18 = (int *)(param_1 + 0x60);
  do {
    if (local_a8[iVar10] != *piVar18) goto LAB_005ddafa;
    iVar10 = iVar10 + 1;
    piVar18 = piVar18 + 1;
  } while (iVar10 < 2);
  iVar10 = *param_3;
  local_404 = (Spawn *)((param_3[1] - iVar10) / 0x18);
  iVar23 = 0;
  local_460 = 0.0;
  if (0 < (int)local_404) {
    iVar19 = iVar10 + 8;
    do {
      fVar29 = (float10)FUN_005f8e10(iVar10,iVar19);
      local_478[0] = (Spawn *)(float)fVar29;
      fVar30 = 1.0 - (float)local_478[0];
      if (0.0 < fVar30) {
        fVar30 = fVar30 * fVar30;
      }
      else {
        fVar30 = 0.0;
      }
      if (local_460 < fVar30) {
        local_480 = iVar23;
        local_460 = fVar30;
      }
      iVar23 = iVar23 + 1;
      iVar10 = iVar10 + 0x18;
      iVar19 = iVar19 + 0x18;
    } while (iVar23 < (int)local_404);
  }
LAB_005ddafa:
  puVar17 = (uint *)param_3[1];
  puVar24 = (uint *)*param_3;
  local_460 = 0.0;
  if (0 < ((int)puVar17 - (int)puVar24) / 0x18) {
    do {
      local_2c = puVar24[(int)local_460 * 6];
      local_28 = puVar24[(int)local_460 * 6 + 1];
      local_24 = puVar24[(int)local_460 * 6 + 2];
      local_20 = puVar24[(int)local_460 * 6 + 3];
      local_1c = (SequentialBehavior_data *)puVar24[(int)local_460 * 6 + 4];
      local_18 = (SequentialBehavior *)puVar24[(int)local_460 * 6 + 5];
      local_458 = (void *)0x0;
      local_454 = (void *)0x0;
      local_450 = 0;
      local_8._0_1_ = 0xe;
      if (puVar24 != puVar17) {
        do {
          local_98 = *puVar24 - local_2c;
          iStack_94 = (puVar24[1] - local_28) - (uint)(*puVar24 < local_2c);
          local_90 = puVar24[2] - local_24;
          iStack_8c = (puVar24[3] - local_20) - (uint)(puVar24[2] < local_24);
          local_88 = (int)puVar24[4] - (int)local_1c;
          iStack_84 = (puVar24[5] - (int)local_18) - (uint)((undefined1 *)puVar24[4] < local_1c);
          local_b4 = (float)CONCAT44(iStack_94,local_98) * 1.5258789e-05;
          local_404 = (Spawn *)(float)CONCAT44(iStack_84,local_88);
          fStack_b0 = (float)CONCAT44(iStack_8c,local_90) * 1.5258789e-05;
          local_ac = (float)local_404 * 1.5258789e-05;
          local_a0 = CONCAT44(fStack_b0,local_b4);
          fVar30 = fStack_b0 * fStack_b0 + local_b4 * local_b4;
          if ((25.0 < fVar30) && (fVar30 < 16384.0)) {
            local_44c = local_28;
            local_448 = local_20;
            local_444 = local_24;
            local_438 = local_2c;
            local_434 = local_1c;
            local_424 = local_18;
            FUN_005bf4f0(puVar24);
          }
          puVar24 = puVar24 + 6;
        } while (puVar24 != (uint *)param_3[1]);
      }
      uVar9 = local_2c;
      pcVar27 = rand_exref;
      local_44c = local_28;
      local_448 = local_20;
      local_444 = local_24;
      local_438 = local_2c;
      local_434 = local_1c;
      local_424 = local_18;
      if (local_460 == (float)local_480) {
LAB_005ddda9:
        if (local_420 == local_41c) {
LAB_005ded3e:
          if (local_430 != local_42c) {
            iVar10 = (int)local_42c - (int)local_430;
            uVar9 = rand();
            uVar9 = uVar9 % (uint)(iVar10 / 0x18);
            local_408 = local_430;
            local_43c = uVar9 * 3;
            if (*(int *)((int)local_430 + uVar9 * 0x18) ==
                *(int *)((int)local_430 + uVar9 * 0x18 + 4)) {
              local_8._0_1_ = 2;
              if (local_458 != (void *)0x0) {
                std::_Container_base0::_Orphan_all((_Container_base0 *)&local_458);
LAB_005ddd6a:
                    /* WARNING: Subroutine does not return */
                operator_delete(local_458);
              }
              goto LAB_005df485;
            }
            pSVar12 = operator_new(0x10f0);
            if (pSVar12 == (Spawn *)0x0) {
              local_404 = (Spawn *)0x0;
            }
            else {
              local_404 = cube::Spawn::Spawn(pSVar12);
            }
            pSVar12 = local_404;
            (local_404->Spawn_data).offset_0x24 = 1;
            puVar1 = &(local_404->Spawn_data).field_0x76;
            *(ushort *)puVar1 = *(ushort *)puVar1 | 0x1000;
            local_478[0] = local_404;
            iVar10 = rand();
            puVar1 = &(pSVar12->Spawn_data).field_0xc;
            (pSVar12->Spawn_data).offset_0x50 = (float)(iVar10 % 0x168);
            *(uint *)puVar1 = local_438;
            *(uint *)&(pSVar12->Spawn_data).field_0x10 = local_44c;
            *(uint *)&(pSVar12->Spawn_data).field_0x14 = local_444;
            *(uint *)&(pSVar12->Spawn_data).field_0x18 = local_448;
            *(SequentialBehavior_data **)&(pSVar12->Spawn_data).field_0x1c = local_434;
            *(SequentialBehavior **)&(pSVar12->Spawn_data).field_0x20 = local_424;
            iVar10 = *(int *)((int)local_408 + uVar9 * 0x18 + 4);
            iVar23 = *(int *)((int)local_408 + local_43c * 8);
            uVar9 = rand();
            (pSVar12->Spawn_data).offset_0x28 =
                 *(undefined4 *)
                  (*(int *)((int)local_408 + local_43c * 8) +
                  (uVar9 % (uint)(iVar10 - iVar23 >> 2)) * 4);
            (pSVar12->Spawn_data).offset_0x30 = param_2[9];
            (pSVar12->Spawn_data).offset_0x54 = *(undefined1 *)(param_2 + 10);
            local_410 = operator_new(0xc);
            local_8._0_1_ = 0x1a;
            if (local_410 == (WalkPathBehavior *)0x0) {
              local_424 = (SequentialBehavior *)0x0;
            }
            else {
              local_424 = cube::SequentialBehavior::SequentialBehavior
                                    ((SequentialBehavior *)local_410);
            }
            pSVar6 = local_424;
            local_8._0_1_ = 0xe;
            local_410 = operator_new(0x14);
            local_8._0_1_ = 0x1b;
            if (local_410 == (WalkPathBehavior *)0x0) {
              local_664 = (CombatBehavior *)0x0;
            }
            else {
              local_664 = cube::CombatBehavior::CombatBehavior
                                    ((CombatBehavior *)local_410,0x41a00000);
            }
            pvVar4 = (vfunction2 *)(pSVar6->SequentialBehavior_data).offset_0x0;
            pSVar22 = &pSVar6->SequentialBehavior_data;
            local_8._0_1_ = 0xe;
            local_434 = pSVar22;
            iVar23 = FUN_00583cb0(pvVar4,*(undefined4 *)(pvVar4 + 4),&local_664);
            iVar10 = (pSVar6->SequentialBehavior_data).offset_0x4;
            if (iVar10 == 0x15555554) {
LAB_005df5a4:
                    /* WARNING: Subroutine does not return */
              std::_Xlength_error("list<T> too long");
            }
            (pSVar6->SequentialBehavior_data).offset_0x4 = iVar10 + 1;
            *(int *)(pvVar4 + 4) = iVar23;
            **(int **)(iVar23 + 4) = iVar23;
            local_410 = operator_new(0x1c);
            local_8._0_1_ = 0x1c;
            if (local_410 == (WalkPathBehavior *)0x0) {
              pWVar13 = (WalkPathBehavior *)0x0;
            }
            else {
              pWVar13 = cube::WalkPathBehavior::WalkPathBehavior(local_410,0x40000000);
            }
            local_484 = (WalkPathBehavior *)&pWVar13->WalkPathBehavior_data;
            local_8._0_1_ = 0xe;
            FUN_005bf4f0(puVar1);
            pvVar4 = (vfunction2 *)pSVar22->offset_0x0;
            local_66c = pWVar13;
            iVar23 = FUN_00583cb0(pvVar4,*(undefined4 *)(pvVar4 + 4),&local_66c);
            iVar10 = (pSVar6->SequentialBehavior_data).offset_0x4;
            if (iVar10 == 0x15555554) goto LAB_005df5a4;
            (pSVar6->SequentialBehavior_data).offset_0x4 = iVar10 + 1;
            *(int *)(pvVar4 + 4) = iVar23;
            **(int **)(iVar23 + 4) = iVar23;
            if (local_458 != local_454) {
              local_470 = 3;
              pvVar25 = local_458;
              do {
                iVar10 = (int)local_454 - (int)pvVar25;
                uVar9 = rand();
                pvVar25 = local_458;
                uVar9 = uVar9 % (uint)(iVar10 / 0x18);
                local_40c = *(SequentialBehavior **)((int)local_458 + uVar9 * 0x18 + 0xc);
                local_414 = *(uint **)((int)local_458 + uVar9 * 0x18 + 8);
                puVar17 = *(uint **)((int)local_458 + uVar9 * 0x18 + 4);
                uVar5 = *(undefined4 *)((int)local_458 + uVar9 * 0x18);
                local_34 = *(uint *)((int)local_458 + uVar9 * 0x18 + 0x10);
                local_30 = *(uint *)((int)local_458 + uVar9 * 0x18 + 0x14);
                iVar10 = local_45c;
                local_440 = puVar17;
                local_44 = uVar5;
                local_40 = puVar17;
                local_3c = local_414;
                local_38 = local_40c;
                uVar14 = __alldiv(local_414,local_40c,0x10000,0);
                uVar15 = __alldiv(uVar5,puVar17,0x10000,0);
                iVar10 = FUN_004347a0(uVar15,uVar14,iVar10);
                if (iVar10 != 0) {
                  uVar9 = *(uint *)(iVar10 + 0x14);
                  uVar11 = ((int)uVar9 >> 0x1f) << 0x10 | uVar9 >> 0x10;
                  uVar9 = uVar9 << 0x10;
                  while( true ) {
                    local_34 = uVar9;
                    local_30 = uVar11;
                    iVar10 = FUN_0042f860(uVar5,local_440,local_414,local_40c,uVar9,uVar11,local_45c
                                         );
                    if (((*(byte *)(iVar10 + 3) & 0x1f) == 0) ||
                       ((*(byte *)(iVar10 + 3) & 0x1f) == 2)) break;
                    bVar28 = 0xfffeffff < uVar9;
                    uVar9 = uVar9 + 0x10000;
                    uVar11 = uVar11 + bVar28;
                  }
                  FUN_005bf4f0(&local_44);
                  pvVar25 = local_458;
                }
                local_470 = local_470 + -1;
              } while (local_470 != 0);
              local_470 = 0;
              pSVar22 = local_434;
            }
            local_410 = operator_new(8);
            local_8._0_1_ = 0x1d;
            if (local_410 == (WalkPathBehavior *)0x0) {
              local_674 = (RandomWalkBehavior *)0x0;
            }
            else {
              local_674 = cube::RandomWalkBehavior::RandomWalkBehavior
                                    ((RandomWalkBehavior *)local_410);
            }
            pvVar4 = (vfunction2 *)pSVar22->offset_0x0;
            local_8._0_1_ = 0xe;
            iVar10 = FUN_00583cb0(pvVar4,*(undefined4 *)(pvVar4 + 4),&local_674);
            if (pSVar22->offset_0x4 == 0x15555554) goto LAB_005df5a4;
            pSVar22->offset_0x4 = pSVar22->offset_0x4 + 1;
            *(int *)(pvVar4 + 4) = iVar10;
            **(int **)(iVar10 + 4) = iVar10;
            *(SequentialBehavior **)&local_404[1].Spawn_data.field_0x124 = local_424;
            FUN_0066add0(local_478);
            uVar9 = local_43c;
            if (*(int *)((int)local_408 + local_43c * 8 + 0xc) !=
                *(int *)((int)local_408 + local_43c * 8 + 0x10)) {
              iVar10 = rand();
              pSVar12 = local_478[0];
              local_40c = (SequentialBehavior *)0x0;
              local_440 = (uint *)(iVar10 % 3 + 1);
              if (0 < (int)local_440) {
                do {
                  pSVar16 = operator_new(0x10f0);
                  if (pSVar16 == (Spawn *)0x0) {
                    pSVar16 = (Spawn *)0x0;
                  }
                  else {
                    pSVar16 = cube::Spawn::Spawn(pSVar16);
                  }
                  *(undefined4 *)&(pSVar16->Spawn_data).field_0xc =
                       *(undefined4 *)&(pSVar12->Spawn_data).field_0xc;
                  *(undefined4 *)&(pSVar16->Spawn_data).field_0x10 =
                       *(undefined4 *)&(pSVar12->Spawn_data).field_0x10;
                  *(undefined4 *)&(pSVar16->Spawn_data).field_0x14 =
                       *(undefined4 *)&(pSVar12->Spawn_data).field_0x14;
                  *(undefined4 *)&(pSVar16->Spawn_data).field_0x18 =
                       *(undefined4 *)&(pSVar12->Spawn_data).field_0x18;
                  *(undefined4 *)&(pSVar16->Spawn_data).field_0x1c =
                       *(undefined4 *)&(pSVar12->Spawn_data).field_0x1c;
                  *(undefined4 *)&(pSVar16->Spawn_data).field_0x20 =
                       *(undefined4 *)&(pSVar12->Spawn_data).field_0x20;
                  (pSVar16->Spawn_data).offset_0x24 = 1;
                  puVar1 = &(pSVar16->Spawn_data).field_0x76;
                  *(ushort *)puVar1 = *(ushort *)puVar1 | 0x1000;
                  iVar10 = *(int *)((int)local_408 + uVar9 * 8 + 0x10);
                  iVar23 = *(int *)((int)local_408 + local_43c * 8 + 0xc);
                  local_694 = pSVar16;
                  uVar9 = rand();
                  (pSVar16->Spawn_data).offset_0x28 =
                       *(undefined4 *)
                        (*(int *)((int)local_408 + local_43c * 8 + 0xc) +
                        (uVar9 % (uint)(iVar10 - iVar23 >> 2)) * 4);
                  (pSVar16->Spawn_data).offset_0x30 = param_2[9];
                  (pSVar16->Spawn_data).offset_0x54 = *(undefined1 *)(param_2 + 10);
                  local_410 = operator_new(0xc);
                  local_8._0_1_ = 0x1e;
                  if (local_410 == (WalkPathBehavior *)0x0) {
                    local_404 = (Spawn *)0x0;
                  }
                  else {
                    local_404 = (Spawn *)cube::SequentialBehavior::SequentialBehavior
                                                   ((SequentialBehavior *)local_410);
                  }
                  pSVar7 = local_404;
                  local_8._0_1_ = 0xe;
                  local_410 = operator_new(0x14);
                  local_8._0_1_ = 0x1f;
                  if (local_410 == (WalkPathBehavior *)0x0) {
                    local_67c = (CombatBehavior *)0x0;
                  }
                  else {
                    local_67c = cube::CombatBehavior::CombatBehavior
                                          ((CombatBehavior *)local_410,0x41a00000);
                  }
                  pSVar26 = &pSVar7->Spawn_data;
                  local_414 = *(uint **)pSVar26;
                  local_8._0_1_ = 0xe;
                  uVar9 = FUN_00583cb0(local_414,local_414[1],&local_67c);
                  iVar10 = (pSVar7->Spawn_data).offset_0x4;
                  if (iVar10 == 0x15555554) goto LAB_005df5a4;
                  (pSVar7->Spawn_data).offset_0x4 = iVar10 + 1;
                  local_414[1] = uVar9;
                  **(uint **)(uVar9 + 4) = uVar9;
                  local_410 = operator_new(0x10);
                  local_8._0_1_ = 0x20;
                  if (local_410 == (WalkPathBehavior *)0x0) {
                    local_684 = (CompanionBehavior *)0x0;
                  }
                  else {
                    local_684 = cube::CompanionBehavior::CompanionBehavior
                                          ((CompanionBehavior *)local_410);
                  }
                  (local_684->CompanionBehavior_data).offset_0x4 = (pSVar12->Spawn_data).offset_0x44
                  ;
                  (local_684->CompanionBehavior_data).offset_0x8 = (pSVar12->Spawn_data).offset_0x48
                  ;
                  local_414 = *(uint **)pSVar26;
                  local_8._0_1_ = 0xe;
                  uVar9 = FUN_00583cb0(local_414,local_414[1],&local_684);
                  iVar10 = (pSVar7->Spawn_data).offset_0x4;
                  if (iVar10 == 0x15555554) goto LAB_005df5a4;
                  (pSVar7->Spawn_data).offset_0x4 = iVar10 + 1;
                  local_414[1] = uVar9;
                  **(uint **)(uVar9 + 4) = uVar9;
                  local_410 = operator_new(8);
                  local_8._0_1_ = 0x21;
                  if (local_410 == (WalkPathBehavior *)0x0) {
                    local_68c = (RandomWalkBehavior *)0x0;
                  }
                  else {
                    local_68c = cube::RandomWalkBehavior::RandomWalkBehavior
                                          ((RandomWalkBehavior *)local_410);
                  }
                  local_414 = *(uint **)pSVar26;
                  local_8._0_1_ = 0xe;
                  uVar9 = FUN_00583cb0(local_414,local_414[1],&local_68c);
                  iVar10 = (pSVar7->Spawn_data).offset_0x4;
                  if (iVar10 == 0x15555554) goto LAB_005df5a4;
                  (pSVar7->Spawn_data).offset_0x4 = iVar10 + 1;
                  local_414[1] = uVar9;
                  **(uint **)(uVar9 + 4) = uVar9;
                  *(Spawn **)&pSVar16[1].Spawn_data.field_0x124 = local_404;
                  FUN_0066add0(&local_694);
                  local_40c = (SequentialBehavior *)((int)&local_40c->vftablePtr + 1);
                  uVar9 = local_43c;
                } while ((int)local_40c < (int)local_440);
              }
            }
          }
        }
        else {
          if (local_3fd != '\0') {
            local_1dc = 1;
            local_214 = 1;
            local_210 = 0;
            local_20c = 0;
            local_204 = 0;
            local_1fc = (_Container_base0 *)0x0;
            local_1f8 = (_Container_base0 *)0x0;
            local_1f4 = 0;
            local_1f0 = 0;
            local_1ec[0] = 0;
            local_1e8 = 0;
            local_1e4 = 0;
            local_1e0 = 0;
            local_1de = 0;
            local_d8 = 0;
            memset(local_1d8,0,0x100);
            local_d4 = 0;
            local_d0 = 0;
            local_cc = 0xffffffff;
            local_c8 = 0xffffffff;
            local_c4 = 0xffffffff;
            local_c0 = 0;
            local_80 = 0x4019999a;
            uStack_7c = 0x4019999a;
            local_78 = 0x3f000000;
            local_8 = CONCAT31(local_8._1_3_,0xf);
            local_244[0] = 0x41;
            local_220 = 0x4019999a;
            uStack_21c = 0x4019999a;
            local_218 = 0x3f000000;
            local_224 = rand();
            local_224 = local_224 & 0x80000003;
            if ((int)local_224 < 0) {
              local_224 = (local_224 - 1 | 0xfffffffc) + 1;
            }
            local_408 = (uint *)0x0;
            do {
              local_404 = (Spawn *)(((int)local_408 >> 0x1f) << 0x10 | (uint)local_408 >> 0x10);
              uVar11 = 0;
              local_40c = (SequentialBehavior *)((int)local_408 << 0x10);
              do {
                iVar10 = local_45c;
                local_3fc = uVar9 + (int)local_40c;
                local_3f8 = (int)local_404 + CARRY4(uVar9,(uint)local_40c) + local_44c;
                local_3f4 = local_444 + uVar11 * 0x10000;
                local_22c = local_434;
                local_3f0 = local_448 + (((int)uVar11 >> 0x1f) << 0x10 | uVar11 >> 0x10) +
                            (uint)CARRY4(local_444,uVar11 * 0x10000);
                local_228 = local_424;
                local_244[2] = local_3fc;
                local_244[3] = local_3f8;
                local_234 = local_3f4;
                local_230 = local_3f0;
                cVar8 = FUN_005f4da0(local_244,local_45c,1);
                if (cVar8 != '\0') {
                  puVar17 = *(uint **)(iVar10 + 0x10);
                  puVar24 = (uint *)(iVar10 + 0xc);
                  local_408 = puVar24;
                  if (local_244 < puVar17) {
                    puVar20 = (uint *)*puVar24;
                    if (local_244 < puVar20) goto LAB_005de139;
                    if (puVar17 == *(uint **)(iVar10 + 0x14)) {
                      FUN_00594b40(1);
                    }
                    puVar17 = *(uint **)(iVar10 + 0x10);
                    puVar20 = (uint *)((((int)local_244 - (int)puVar20) / 0x188) * 0x188 + *puVar24)
                    ;
                    local_8 = CONCAT31(local_8._1_3_,0x10);
                    local_440 = puVar17;
                    local_414 = puVar17;
                    local_404 = (Spawn *)puVar17;
                    if (puVar17 != (uint *)0x0) {
                      *puVar17 = *puVar20;
                      puVar17[2] = puVar20[2];
                      puVar17[3] = puVar20[3];
                      puVar17[4] = puVar20[4];
                      puVar17[5] = puVar20[5];
                      puVar17[6] = puVar20[6];
                      puVar17[7] = puVar20[7];
                      puVar17[8] = puVar20[8];
                      puVar17[9] = puVar20[9];
                      puVar17[10] = puVar20[10];
                      puVar17[0xb] = puVar20[0xb];
                      *(char *)(puVar17 + 0xc) = (char)puVar20[0xc];
                      puVar17[0xd] = puVar20[0xd];
                      puVar17[0xe] = puVar20[0xe];
                      puVar17[0x10] = puVar20[0x10];
                      puVar17[0x11] = puVar20[0x11];
                      FUN_004593e0(puVar20 + 0x12);
                      puVar17[0x15] = puVar20[0x15];
                      FUN_0040ee70(puVar20 + 0x16);
                      puVar17[0x5c] = puVar20[0x5c];
                      puVar17[0x5d] = puVar20[0x5d];
                      *(uint *)((int)local_404 + 0x178) = puVar20[0x5e];
                      *(uint *)((int)local_404 + 0x17c) = puVar20[0x5f];
                      *(uint *)((int)local_404 + 0x180) = puVar20[0x60];
                      *(uint *)((int)local_404 + 0x184) = puVar20[0x61];
                      puVar24 = local_408;
                    }
                  }
                  else {
LAB_005de139:
                    if (puVar17 == *(uint **)(iVar10 + 0x14)) {
                      FUN_00594b40(1);
                    }
                    puVar17 = *(uint **)(iVar10 + 0x10);
                    local_8 = CONCAT31(local_8._1_3_,0x11);
                    local_440 = puVar17;
                    local_414 = puVar17;
                    if (puVar17 != (uint *)0x0) {
                      *puVar17 = local_244[0];
                      puVar17[2] = local_244[2];
                      puVar17[3] = local_244[3];
                      puVar17[4] = local_234;
                      puVar17[5] = local_230;
                      puVar17[6] = (uint)local_22c;
                      puVar17[7] = (uint)local_228;
                      puVar17[8] = local_224;
                      puVar17[9] = local_220;
                      puVar17[10] = uStack_21c;
                      puVar17[0xb] = local_218;
                      *(undefined1 *)(puVar17 + 0xc) = local_214;
                      puVar17[0xd] = local_210;
                      puVar17[0xe] = local_20c;
                      puVar17[0x10] = (uint)local_204;
                      puVar17[0x11] = local_204._4_4_;
                      FUN_004593e0(&local_1fc);
                      puVar17[0x15] = local_1f0;
                      FUN_0040ee70(local_1ec);
                      puVar17[0x5c] = local_d4;
                      puVar17[0x5d] = local_d0;
                      puVar17[0x5e] = local_cc;
                      puVar17[0x5f] = local_c8;
                      puVar17[0x60] = local_c4;
                      puVar17[0x61] = local_c0;
                      puVar24 = local_408;
                    }
                  }
                  puVar24[1] = puVar24[1] + 0x188;
                  local_438 = local_244[2];
                  local_44c = local_244[3];
                  local_444 = local_234;
                  local_448 = local_230;
                  local_434 = local_22c;
                  local_424 = local_228;
                  goto LAB_005de2c1;
                }
                uVar11 = uVar11 + 1;
                uVar9 = local_438;
              } while ((int)uVar11 < 3);
              local_408 = (uint *)((int)local_408 + 1);
            } while ((int)local_408 < 3);
LAB_005de2c1:
            uVar32 = FUN_0068d946();
            local_43c = 0;
            do {
              local_40c = (SequentialBehavior *)((ulonglong)uVar32 >> 0x20);
              local_470 = (uint)uVar32;
              local_414 = (uint *)(local_43c * 0x10000 - local_470);
              local_404 = (Spawn *)(((((int)local_43c >> 0x1f) << 0x10 | local_43c >> 0x10) -
                                    (int)local_40c) - (uint)(local_43c * 0x10000 < local_470));
              local_408 = (void *)0x0;
              do {
                puVar24 = local_408;
                puVar17 = local_414;
                local_40c = (SequentialBehavior *)((ulonglong)uVar32 >> 0x20);
                local_470 = (uint)uVar32;
                local_364 = 1;
                local_39c = 1;
                local_398 = 0;
                local_394 = (WalkPathBehavior_vftable *)0x0;
                local_38c = 0;
                local_384 = (undefined4 *)0x0;
                local_380 = (undefined4 *)0x0;
                local_37c = 0;
                local_378 = (WalkPathBehavior_vftable *)0x0;
                local_374[0] = 0;
                local_370 = 0;
                local_36c = 0;
                local_368 = 0;
                local_366 = 0;
                local_260 = 0;
                memset(local_360,0,0x100);
                local_25c = 0;
                local_258 = 0;
                local_254 = 0xffffffff;
                local_250 = 0xffffffff;
                uStack_24c = 0xffffffff;
                local_248 = 0;
                local_8 = CONCAT31(local_8._1_3_,0x12);
                uVar9 = rand();
                uVar9 = uVar9 & 0x80000003;
                if ((int)uVar9 < 0) {
                  uVar9 = (uVar9 - 1 | 0xfffffffc) + 1;
                }
                if (uVar9 == 1) {
                  local_68 = 0x3f800000;
                  uStack_64 = 0x3f800000;
                  local_3a8 = 0x3f8000003f800000;
                  local_60 = 0x3f000000;
                  local_3a0 = 0x3f000000;
                  local_3cc[0] = (CombatBehavior_vftable *)0x10;
                }
                else if (uVar9 == 2) {
                  local_5c = 0x40400000;
                  uStack_58 = 0x40400000;
                  local_3a8 = 0x4040000040400000;
                  local_54 = 0x3f800000;
                  local_3a0 = 0x3f800000;
                  local_3cc[0] = (CombatBehavior_vftable *)0xc;
                }
                else if (uVar9 == 3) {
                  local_50 = 0x40000000;
                  uStack_4c = 0x40000000;
                  local_3a8 = 0x4000000040000000;
                  local_48 = 0x3dcccccd;
                  local_3a0 = 0x3dcccccd;
                  local_3cc[0] = (CombatBehavior_vftable *)0x45;
                }
                else {
                  local_74 = 0x40800000;
                  uStack_70 = 0x40800000;
                  local_3a8 = 0x4080000040800000;
                  local_6c = 0x40400000;
                  local_3a0 = 0x40400000;
                  local_3cc[0] = (CombatBehavior_vftable *)0x42;
                }
                local_3ac = rand();
                iVar10 = local_45c;
                local_3ac = local_3ac & 0x80000003;
                if ((int)local_3ac < 0) {
                  local_3ac = (local_3ac - 1 | 0xfffffffc) + 1;
                }
                uVar9 = (int)puVar24 * 0x10000 - local_470;
                local_3e4 = local_438 + (int)puVar17;
                local_3e0 = (int)&local_404->vftablePtr +
                            CARRY4(local_438,(uint)puVar17) + local_44c;
                local_3dc = local_444 + uVar9;
                local_3b4 = local_434;
                local_3d8 = local_448 +
                            (((((int)puVar24 >> 0x1f) << 0x10 | (uint)puVar24 >> 0x10) -
                             (int)local_40c) - (uint)((uint)((int)puVar24 * 0x10000) < local_470)) +
                            (uint)CARRY4(local_444,uVar9);
                local_3b0 = local_424;
                local_3c4 = local_3e4;
                local_3c0 = local_3e0;
                local_3bc = local_3dc;
                local_3b8 = local_3d8;
                cVar8 = FUN_005f4da0(local_3cc,local_45c,1);
                if (cVar8 != '\0') {
                  ppCVar2 = *(CombatBehavior_vftable ***)(iVar10 + 0x10);
                  puVar17 = (uint *)(iVar10 + 0xc);
                  local_440 = puVar17;
                  if (local_3cc < ppCVar2) {
                    ppCVar3 = (CombatBehavior_vftable **)*puVar17;
                    if (local_3cc < ppCVar3) goto LAB_005de6d3;
                    if (ppCVar2 == *(CombatBehavior_vftable ***)(iVar10 + 0x14)) {
                      FUN_00594b40(1);
                    }
                    pWVar13 = *(WalkPathBehavior **)(iVar10 + 0x10);
                    puVar21 = (undefined4 *)
                              ((((int)local_3cc - (int)ppCVar3) / 0x188) * 0x188 + *puVar17);
                    local_6a0 = (double)CONCAT44(pWVar13,(undefined4)local_6a0);
                    local_8 = CONCAT31(local_8._1_3_,0x13);
                    local_484 = pWVar13;
                    local_410 = pWVar13;
                    if (pWVar13 != (WalkPathBehavior *)0x0) {
                      pWVar13->vftablePtr = (WalkPathBehavior_vftable *)*puVar21;
                      (pWVar13->WalkPathBehavior_data).offset_0x4 = puVar21[2];
                      (pWVar13->WalkPathBehavior_data).offset_0x8 = puVar21[3];
                      (pWVar13->WalkPathBehavior_data).offset_0xc = puVar21[4];
                      (pWVar13->WalkPathBehavior_data).offset_0x10 = puVar21[5];
                      (pWVar13->WalkPathBehavior_data).offset_0x14 = puVar21[6];
                      pWVar13[1].vftablePtr = (WalkPathBehavior_vftable *)puVar21[7];
                      pWVar13[1].WalkPathBehavior_data.offset_0x0 = puVar21[8];
                      pWVar13[1].WalkPathBehavior_data.offset_0x4 = puVar21[9];
                      pWVar13[1].WalkPathBehavior_data.offset_0x8 = puVar21[10];
                      pWVar13[1].WalkPathBehavior_data.offset_0xc = puVar21[0xb];
                      *(undefined1 *)&pWVar13[1].WalkPathBehavior_data.offset_0x10 =
                           *(undefined1 *)(puVar21 + 0xc);
                      pWVar13[1].WalkPathBehavior_data.offset_0x14 = puVar21[0xd];
                      pWVar13[2].vftablePtr = (WalkPathBehavior_vftable *)puVar21[0xe];
                      pWVar13[2].WalkPathBehavior_data.offset_0x4 = puVar21[0x10];
                      pWVar13[2].WalkPathBehavior_data.offset_0x8 = puVar21[0x11];
                      FUN_004593e0(puVar21 + 0x12);
                      pWVar13[3].vftablePtr = (WalkPathBehavior_vftable *)puVar21[0x15];
                      FUN_0040ee70(puVar21 + 0x16);
                      pWVar13[0xd].WalkPathBehavior_data.offset_0x0 = puVar21[0x5c];
                      pWVar13[0xd].WalkPathBehavior_data.offset_0x4 = puVar21[0x5d];
                      local_484[0xd].WalkPathBehavior_data.offset_0x8 = puVar21[0x5e];
                      local_484[0xd].WalkPathBehavior_data.offset_0xc = puVar21[0x5f];
                      local_484[0xd].WalkPathBehavior_data.offset_0x10 = puVar21[0x60];
                      local_484[0xd].WalkPathBehavior_data.offset_0x14 = puVar21[0x61];
                      puVar17 = local_440;
                    }
                  }
                  else {
LAB_005de6d3:
                    if (ppCVar2 == *(CombatBehavior_vftable ***)(iVar10 + 0x14)) {
                      FUN_00594b40(1);
                    }
                    pWVar13 = *(WalkPathBehavior **)(iVar10 + 0x10);
                    local_6a0 = (double)CONCAT44(pWVar13,(undefined4)local_6a0);
                    local_8 = CONCAT31(local_8._1_3_,0x14);
                    local_410 = pWVar13;
                    if (pWVar13 != (WalkPathBehavior *)0x0) {
                      pWVar13->vftablePtr = (WalkPathBehavior_vftable *)local_3cc[0];
                      (pWVar13->WalkPathBehavior_data).offset_0x4 = local_3c4;
                      (pWVar13->WalkPathBehavior_data).offset_0x8 = local_3c0;
                      (pWVar13->WalkPathBehavior_data).offset_0xc = local_3bc;
                      (pWVar13->WalkPathBehavior_data).offset_0x10 = local_3b8;
                      (pWVar13->WalkPathBehavior_data).offset_0x14 = local_3b4;
                      pWVar13[1].vftablePtr = (WalkPathBehavior_vftable *)local_3b0;
                      pWVar13[1].WalkPathBehavior_data.offset_0x0 = local_3ac;
                      pWVar13[1].WalkPathBehavior_data.offset_0x4 = (undefined4)local_3a8;
                      pWVar13[1].WalkPathBehavior_data.offset_0x8 = local_3a8._4_4_;
                      pWVar13[1].WalkPathBehavior_data.offset_0xc = local_3a0;
                      *(undefined1 *)&pWVar13[1].WalkPathBehavior_data.offset_0x10 = local_39c;
                      pWVar13[1].WalkPathBehavior_data.offset_0x14 = local_398;
                      pWVar13[2].vftablePtr = local_394;
                      pWVar13[2].WalkPathBehavior_data.offset_0x4 = (undefined4)local_38c;
                      pWVar13[2].WalkPathBehavior_data.offset_0x8 = local_38c._4_4_;
                      FUN_004593e0(&local_384);
                      pWVar13[3].vftablePtr = local_378;
                      FUN_0040ee70(local_374);
                      pWVar13[0xd].WalkPathBehavior_data.offset_0x0 = local_25c;
                      pWVar13[0xd].WalkPathBehavior_data.offset_0x4 = local_258;
                      pWVar13[0xd].WalkPathBehavior_data.offset_0x8 = local_254;
                      pWVar13[0xd].WalkPathBehavior_data.offset_0xc = local_250;
                      pWVar13[0xd].WalkPathBehavior_data.offset_0x10 = uStack_24c;
                      pWVar13[0xd].WalkPathBehavior_data.offset_0x14 = local_248;
                    }
                  }
                  puVar17[1] = puVar17[1] + 0x188;
                }
                uVar32 = CONCAT44(local_40c,local_470);
                puVar21 = local_384;
                if (local_384 != (undefined4 *)0x0) {
                  while( true ) {
                    if (puVar21 == local_380) {
                    /* WARNING: Subroutine does not return */
                      operator_delete(local_384);
                    }
                    if ((void *)*puVar21 != (void *)0x0) break;
                    puVar21 = puVar21 + 3;
                  }
                    /* WARNING: Subroutine does not return */
                  operator_delete((void *)*puVar21);
                }
                local_408 = (uint *)((int)local_408 + 7);
              } while ((int)local_408 < 0xe);
              local_43c = local_43c + 7;
            } while ((int)local_43c < 0xe);
            local_8._0_1_ = 0xe;
            pcVar27 = rand_exref;
            if (local_1fc != (_Container_base0 *)0x0) {
              std::_Container_base0::_Orphan_all((_Container_base0 *)&local_1fc);
              this = local_1fc;
              while( true ) {
                if (this == local_1f8) {
                    /* WARNING: Subroutine does not return */
                  operator_delete(local_1fc);
                }
                if (*(int *)this != 0) break;
                this = this + 0xc;
              }
              std::_Container_base0::_Orphan_all(this);
                    /* WARNING: Subroutine does not return */
              operator_delete(*(void **)this);
            }
          }
          iVar10 = (*pcVar27)();
          local_414 = (uint *)(((float)iVar10 * 6.2831855) / 32767.0);
          iVar10 = (*pcVar27)();
          local_408 = (void *)0x0;
          local_440 = (uint *)(iVar10 % 3 + 1);
          if (0 < (int)local_440) {
            local_6a0 = (double)(int)local_440;
            do {
              local_40c = (SequentialBehavior *)
                          (float)(((double)((int)local_408 * 2) * 3.141592653589793) / local_6a0 +
                                 (double)(float)local_414);
              pSVar12 = operator_new(0x10f0);
              if (pSVar12 == (Spawn *)0x0) {
                pSVar12 = (Spawn *)0x0;
              }
              else {
                pSVar12 = cube::Spawn::Spawn(pSVar12);
              }
              (pSVar12->Spawn_data).offset_0x24 = 1;
              puVar1 = &(pSVar12->Spawn_data).field_0x76;
              *(ushort *)puVar1 = *(ushort *)puVar1 | 0x1000;
              (pSVar12->Spawn_data).offset_0x50 = ((float)local_40c * 180.0) / 3.1415927 + 90.0;
              dVar31 = (double)(float)local_40c;
              local_65c = pSVar12;
              libm_sse2_sin_precise();
              local_62c = (float)dVar31 * 3.0 * 65536.0;
              lVar33 = FUN_0068d946();
              dVar31 = (double)(float)local_40c;
              lVar33 = lVar33 + CONCAT44(local_448,local_444);
              libm_sse2_cos_precise();
              local_634 = (float)dVar31 * 3.0 * 65536.0;
              lVar34 = FUN_0068d946();
              lVar34 = lVar34 + CONCAT44(local_44c,local_438);
              *(int *)&(pSVar12->Spawn_data).field_0xc = (int)lVar34;
              *(int *)&(pSVar12->Spawn_data).field_0x14 = (int)lVar33;
              *(int *)&(pSVar12->Spawn_data).field_0x10 = (int)((ulonglong)lVar34 >> 0x20);
              *(SequentialBehavior_data **)&(pSVar12->Spawn_data).field_0x1c = local_434;
              *(int *)&(pSVar12->Spawn_data).field_0x18 = (int)((ulonglong)lVar33 >> 0x20);
              *(SequentialBehavior **)&(pSVar12->Spawn_data).field_0x20 = local_424;
              iVar10 = (int)local_41c - (int)local_420;
              uVar9 = rand();
              (pSVar12->Spawn_data).offset_0x28 =
                   *(undefined4 *)((int)local_420 + (uVar9 % (uint)(iVar10 >> 2)) * 4);
              (pSVar12->Spawn_data).offset_0x30 = param_2[9];
              (pSVar12->Spawn_data).offset_0x54 = *(undefined1 *)(param_2 + 10);
              local_410 = operator_new(0xc);
              local_8._0_1_ = 0x15;
              if (local_410 == (WalkPathBehavior *)0x0) {
                local_40c = (SequentialBehavior *)0x0;
              }
              else {
                local_40c = cube::SequentialBehavior::SequentialBehavior
                                      ((SequentialBehavior *)local_410);
              }
              pSVar6 = local_40c;
              local_8._0_1_ = 0xe;
              local_410 = operator_new(0x14);
              local_8._0_1_ = 0x16;
              if (local_410 == (WalkPathBehavior *)0x0) {
                local_63c = (CombatBehavior *)0x0;
              }
              else {
                local_63c = cube::CombatBehavior::CombatBehavior
                                      ((CombatBehavior *)local_410,0x41a00000);
              }
              iVar10 = (pSVar6->SequentialBehavior_data).offset_0x0;
              pSVar22 = &pSVar6->SequentialBehavior_data;
              local_8._0_1_ = 0xe;
              iVar19 = FUN_00583cb0(iVar10,*(undefined4 *)(iVar10 + 4),&local_63c);
              iVar23 = (pSVar6->SequentialBehavior_data).offset_0x4;
              if (iVar23 == 0x15555554) goto LAB_005df5a4;
              (pSVar6->SequentialBehavior_data).offset_0x4 = iVar23 + 1;
              *(int *)(iVar10 + 4) = iVar19;
              **(int **)(iVar19 + 4) = iVar19;
              local_410 = operator_new(0x1c);
              local_8._0_1_ = 0x17;
              if (local_410 == (WalkPathBehavior *)0x0) {
                pWVar13 = (WalkPathBehavior *)0x0;
              }
              else {
                pWVar13 = cube::WalkPathBehavior::WalkPathBehavior(local_410,0x40000000);
              }
              local_8._0_1_ = 0xe;
              FUN_005bf4f0(&(pSVar12->Spawn_data).field_0xc);
              iVar10 = pSVar22->offset_0x0;
              local_644 = pWVar13;
              iVar19 = FUN_00583cb0(iVar10,*(undefined4 *)(iVar10 + 4),&local_644);
              iVar23 = (pSVar6->SequentialBehavior_data).offset_0x4;
              if (iVar23 == 0x15555554) goto LAB_005df5a4;
              (pSVar6->SequentialBehavior_data).offset_0x4 = iVar23 + 1;
              *(int *)(iVar10 + 4) = iVar19;
              **(int **)(iVar19 + 4) = iVar19;
              if ((local_460 == (float)local_480) && (local_408 == (void *)0x0)) {
                puVar1 = &(pSVar12->Spawn_data).field_0x76;
                *(ushort *)puVar1 = *(ushort *)puVar1 | 0x200;
                pSVar12[1].Spawn_data.field_0x170 = 1;
              }
              local_410 = operator_new(8);
              local_8._0_1_ = 0x18;
              if (local_410 == (WalkPathBehavior *)0x0) {
                local_64c = (RandomInteractionBehavior *)0x0;
              }
              else {
                local_64c = cube::RandomInteractionBehavior::RandomInteractionBehavior
                                      ((RandomInteractionBehavior *)local_410);
              }
              iVar10 = pSVar22->offset_0x0;
              local_8._0_1_ = 0xe;
              iVar19 = FUN_00583cb0(iVar10,*(undefined4 *)(iVar10 + 4),&local_64c);
              iVar23 = (pSVar6->SequentialBehavior_data).offset_0x4;
              if (iVar23 == 0x15555554) goto LAB_005df5a4;
              (pSVar6->SequentialBehavior_data).offset_0x4 = iVar23 + 1;
              *(int *)(iVar10 + 4) = iVar19;
              **(int **)(iVar19 + 4) = iVar19;
              local_410 = operator_new(8);
              local_8._0_1_ = 0x19;
              if (local_410 == (WalkPathBehavior *)0x0) {
                local_654 = (RandomWalkBehavior *)0x0;
              }
              else {
                local_654 = cube::RandomWalkBehavior::RandomWalkBehavior
                                      ((RandomWalkBehavior *)local_410);
              }
              iVar10 = pSVar22->offset_0x0;
              local_8._0_1_ = 0xe;
              iVar19 = FUN_00583cb0(iVar10,*(undefined4 *)(iVar10 + 4),&local_654);
              iVar23 = (pSVar6->SequentialBehavior_data).offset_0x4;
              if (iVar23 == 0x15555554) goto LAB_005df5a4;
              (pSVar6->SequentialBehavior_data).offset_0x4 = iVar23 + 1;
              *(int *)(iVar10 + 4) = iVar19;
              **(int **)(iVar19 + 4) = iVar19;
              *(SequentialBehavior **)&pSVar12[1].Spawn_data.field_0x124 = local_40c;
              FUN_0043f7c0(&(pSVar12->Spawn_data).offset_0x28,&(pSVar12->Spawn_data).field_0x70,0);
              FUN_005c7730(pSVar12,0);
              FUN_0066add0(&local_65c);
              local_408 = (uint *)((int)local_408 + 1);
            } while ((int)local_408 < (int)local_440);
          }
        }
        local_8._0_1_ = 2;
        if (local_458 != (void *)0x0) {
          std::_Container_base0::_Orphan_all((_Container_base0 *)&local_458);
                    /* WARNING: Subroutine does not return */
          operator_delete(local_458);
        }
      }
      else {
        uVar11 = rand();
        uVar11 = uVar11 & 0x80000001;
        bVar28 = uVar11 == 0;
        if ((int)uVar11 < 0) {
          bVar28 = (uVar11 - 1 | 0xfffffffe) == 0xffffffff;
        }
        if (bVar28) {
          uVar11 = rand();
          uVar11 = uVar11 & 0x80000001;
          bVar28 = uVar11 == 0;
          if ((int)uVar11 < 0) {
            bVar28 = (uVar11 - 1 | 0xfffffffe) == 0xffffffff;
          }
          if (!bVar28) goto LAB_005ddda9;
          goto LAB_005ded3e;
        }
        if (local_458 != (void *)0x0) goto LAB_005ddd6a;
      }
LAB_005df485:
      puVar17 = (uint *)param_3[1];
      puVar24 = (uint *)*param_3;
      local_460 = (float)((int)local_460 + 1);
    } while ((int)local_460 < ((int)puVar17 - (int)puVar24) / 0x18);
  }
  local_8 = CONCAT31(local_8._1_3_,1);
  if (local_46c != (void *)0x0) {
    std::_Container_base0::_Orphan_all((_Container_base0 *)&local_46c);
                    /* WARNING: Subroutine does not return */
    operator_delete(local_46c);
  }
  local_8 = (uint)local_8._1_3_ << 8;
  if (local_420 != (void *)0x0) {
    std::_Container_base0::_Orphan_all((_Container_base0 *)&local_420);
                    /* WARNING: Subroutine does not return */
    operator_delete(local_420);
  }
  local_8 = 0xffffffff;
  if (local_430 != (void *)0x0) {
    std::_Container_base0::_Orphan_all((_Container_base0 *)&local_430);
    FUN_005ae0d0(local_430,local_42c,&local_479,local_410);
                    /* WARNING: Subroutine does not return */
    operator_delete(local_430);
  }
LAB_005df586:
  local_8 = 0xffffffff;
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}


/* FUN_005df600 @ 005df600  kind=gamemisc  attributed-by=caller-vote  size=864 */

void FUN_005df600(int param_1,int param_2,int param_3,int *param_4,byte *param_5,float param_6,
                 undefined4 param_7,byte param_8)

{
  float *pfVar1;
  byte bVar2;
  int iVar3;
  int iVar4;
  undefined2 *puVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  float10 fVar10;
  int local_b4;
  undefined2 local_ac;
  undefined1 local_aa;
  byte local_a9;
  undefined2 local_a8;
  undefined1 local_a6;
  byte local_a5;
  undefined2 local_a4;
  undefined1 local_a2;
  undefined2 local_a0;
  undefined1 local_9e;
  int local_9c;
  undefined4 local_98;
  int local_90;
  int local_8c;
  float local_88;
  float fStack_84;
  float local_80;
  undefined8 local_7c;
  float local_74;
  undefined8 local_70;
  float local_68;
  int aiStack_64 [23];
  uint local_8;
  
  local_8 = DAT_0076aa78 ^ (uint)&stack0xfffffffc;
  uVar7 = 0;
  local_98 = param_7;
  do {
    if ((uVar7 & 7) == 0) {
      iVar3 = rand();
      aiStack_64[uVar7] = iVar3 % 0x14;
    }
    else {
      aiStack_64[uVar7] = 0;
    }
    uVar7 = uVar7 + 1;
  } while ((int)uVar7 < 0x17);
  local_8c = 0;
  if (0 < *param_4) {
    local_b4 = 0;
    do {
      iVar3 = local_b4;
      iVar4 = local_8c;
      if (0 < param_4[1]) {
        do {
          local_9c = iVar3;
          iVar3 = param_4[2] + -1;
          if (-1 < iVar3) {
            local_90 = iVar4 + param_2 + local_9c;
            iVar9 = param_3 + iVar3;
            iVar8 = iVar3 * 7 + iVar4;
            do {
              iVar4 = aiStack_64[(iVar8 / 2 + ((local_9c + iVar8) / 2) * 7) % 0x17];
              bVar2 = param_5[1];
              local_88 = (float)(int)((uint)*param_5 + iVar4);
              local_80 = (float)(int)((uint)param_5[2] + iVar4);
              fVar10 = (float10)FUN_005efdb0(local_8c + param_1,local_90,iVar9,local_98);
              fStack_84 = (float)fVar10 * (120.0 - (float)(int)((uint)bVar2 + iVar4)) +
                          (float)(int)((uint)bVar2 + iVar4);
              iVar4 = FUN_004347a0(local_8c + param_1,local_90,local_98);
              if (((iVar4 != 0) && (iVar6 = *(int *)(iVar4 + 0x10), iVar6 <= iVar9)) &&
                 (iVar9 < *(int *)(iVar4 + 0x1c) + iVar6)) {
                FUN_0042f730(iVar9 - iVar6);
              }
              iVar4 = rand();
              if (param_6 < (float)iVar4 / 32767.0) {
                local_68 = local_80;
                local_70 = CONCAT44(fStack_84,local_88);
                iVar4 = 0;
                do {
                  pfVar1 = (float *)((int)&local_70 + iVar4 * 4);
                  if (*pfVar1 <= 0.0 && *pfVar1 != 0.0) {
                    *(undefined4 *)((int)&local_70 + iVar4 * 4) = 0;
                  }
                  if (255.0 < *(float *)((int)&local_70 + iVar4 * 4)) {
                    *(undefined4 *)((int)&local_70 + iVar4 * 4) = 0x437f0000;
                  }
                  iVar4 = iVar4 + 1;
                } while (iVar4 < 3);
                iVar4 = 0;
                do {
                  iVar6 = iVar4 + 1;
                  *(char *)((int)&local_a4 + iVar4) =
                       (char)(int)*(float *)((int)&local_70 + iVar4 * 4);
                  iVar4 = iVar6;
                } while (iVar6 < 3);
                local_a8 = local_a4;
                local_a6 = local_a2;
                local_a5 = param_8 | 0x46;
                puVar5 = &local_a8;
              }
              else {
                local_74 = local_80;
                local_7c = CONCAT44(fStack_84,local_88);
                iVar4 = 0;
                do {
                  pfVar1 = (float *)((int)&local_7c + iVar4 * 4);
                  if (*pfVar1 <= 0.0 && *pfVar1 != 0.0) {
                    *(undefined4 *)((int)&local_7c + iVar4 * 4) = 0;
                  }
                  if (255.0 < *(float *)((int)&local_7c + iVar4 * 4)) {
                    *(undefined4 *)((int)&local_7c + iVar4 * 4) = 0x437f0000;
                  }
                  iVar4 = iVar4 + 1;
                } while (iVar4 < 3);
                iVar4 = 0;
                do {
                  iVar6 = iVar4 + 1;
                  *(char *)((int)&local_a0 + iVar4) =
                       (char)(int)*(float *)((int)&local_7c + iVar4 * 4);
                  iVar4 = iVar6;
                } while (iVar6 < 3);
                local_ac = local_a0;
                local_aa = local_9e;
                local_a9 = param_8 | 0x4d;
                puVar5 = &local_ac;
              }
              FUN_0044e7a0(local_8c + param_1,local_90,iVar9,puVar5,local_98);
              iVar8 = iVar8 + -7;
              iVar9 = iVar9 + -1;
              iVar3 = iVar3 + -1;
              iVar4 = local_8c;
            } while (-1 < iVar3);
          }
          local_9c = local_9c + 1;
          iVar3 = local_9c;
        } while (local_9c + iVar4 < param_4[1]);
      }
      local_8c = iVar4 + 1;
      local_b4 = local_b4 + -1;
    } while (local_8c < *param_4);
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


/* FUN_005ee0f0 @ 005ee0f0  kind=gamemisc  attributed-by=caller-vote  size=952 */

int FUN_005ee0f0(int param_1,int param_2,int param_3,int param_4,uint param_5,int *param_6,
                int *param_7)

{
  char cVar1;
  int iVar2;
  uint3 uVar3;
  undefined2 *puVar4;
  int iVar5;
  undefined1 *puVar6;
  int iVar7;
  undefined2 local_8;
  undefined1 local_6;
  
  *param_6 = param_2;
  param_6[1] = param_3;
  param_6[2] = param_4;
  *param_7 = param_2;
  param_7[1] = param_3;
  param_7[2] = param_4;
  if (((((param_2 < 0) || (param_3 < 0)) || (param_4 < 0)) ||
      ((*(int *)(param_1 + 0x44) <= param_2 || (*(int *)(param_1 + 0x48) <= param_3)))) ||
     (*(int *)(param_1 + 0x4c) <= param_4)) {
    puVar4 = (undefined2 *)&DAT_0076b340;
  }
  else {
    puVar4 = (undefined2 *)
             (((*(int *)(param_1 + 0x48) * param_4 + param_3) * *(int *)(param_1 + 0x44) + param_2)
              * 3 + *(int *)(param_1 + 0x30));
  }
  local_8 = *puVar4;
  iVar5 = param_2 + -1;
  local_6 = *(undefined1 *)(puVar4 + 1);
  if (((iVar5 < 0) || (param_3 < 0)) ||
     ((param_4 < 0 ||
      (((*(int *)(param_1 + 0x44) <= iVar5 || (*(int *)(param_1 + 0x48) <= param_3)) ||
       (*(int *)(param_1 + 0x4c) <= param_4)))))) {
    puVar6 = &DAT_0076b340;
  }
  else {
    puVar6 = (undefined1 *)
             (((*(int *)(param_1 + 0x48) * param_4 + param_3) * *(int *)(param_1 + 0x44) + iVar5) *
              3 + *(int *)(param_1 + 0x30));
  }
  puVar4 = &local_8;
  iVar5 = 0;
  iVar7 = (int)puVar6 - (int)puVar4;
  while( true ) {
    cVar1 = ((char *)((int)&local_8 + iVar5))[iVar7];
    uVar3 = (uint3)((uint)puVar4 >> 8);
    puVar4 = (undefined2 *)CONCAT31(uVar3,cVar1);
    if (cVar1 != *(char *)((int)&local_8 + iVar5)) break;
    iVar5 = iVar5 + 1;
    if (2 < iVar5) {
      return (uint)uVar3 << 8;
    }
  }
  iVar5 = param_3 + -1;
  if (((param_2 < 0) || (iVar5 < 0)) ||
     (((param_4 < 0 ||
       ((*(int *)(param_1 + 0x44) <= param_2 || (*(int *)(param_1 + 0x48) <= iVar5)))) ||
      (*(int *)(param_1 + 0x4c) <= param_4)))) {
    puVar6 = &DAT_0076b340;
  }
  else {
    puVar6 = (undefined1 *)
             (((*(int *)(param_1 + 0x48) * param_4 + iVar5) * *(int *)(param_1 + 0x44) + param_2) *
              3 + *(int *)(param_1 + 0x30));
  }
  puVar4 = &local_8;
  iVar5 = 0;
  iVar7 = (int)puVar6 - (int)puVar4;
  while( true ) {
    cVar1 = ((char *)((int)&local_8 + iVar5))[iVar7];
    uVar3 = (uint3)((uint)puVar4 >> 8);
    puVar4 = (undefined2 *)CONCAT31(uVar3,cVar1);
    if (cVar1 != *(char *)((int)&local_8 + iVar5)) break;
    iVar5 = iVar5 + 1;
    if (2 < iVar5) {
      return (uint)uVar3 << 8;
    }
  }
  iVar5 = param_4 + -1;
  if ((((param_2 < 0) || (param_3 < 0)) || (iVar5 < 0)) ||
     (((*(int *)(param_1 + 0x44) <= param_2 || (*(int *)(param_1 + 0x48) <= param_3)) ||
      (*(int *)(param_1 + 0x4c) <= iVar5)))) {
    puVar6 = &DAT_0076b340;
  }
  else {
    puVar6 = (undefined1 *)
             (((iVar5 * *(int *)(param_1 + 0x48) + param_3) * *(int *)(param_1 + 0x44) + param_2) *
              3 + *(int *)(param_1 + 0x30));
  }
  puVar4 = &local_8;
  iVar5 = 0;
  iVar7 = (int)puVar6 - (int)puVar4;
  while( true ) {
    cVar1 = ((char *)((int)&local_8 + iVar5))[iVar7];
    uVar3 = (uint3)((uint)puVar4 >> 8);
    puVar4 = (undefined2 *)CONCAT31(uVar3,cVar1);
    if (cVar1 != *(char *)((int)&local_8 + iVar5)) break;
    iVar5 = iVar5 + 1;
    if (2 < iVar5) {
      return (uint)uVar3 << 8;
    }
  }
  iVar5 = *(int *)(param_1 + 0x44);
  iVar7 = param_2;
  if (param_2 < iVar5) {
    do {
      if (((iVar7 < 0) || (param_3 < 0)) ||
         ((param_4 < 0 ||
          ((*(int *)(param_1 + 0x48) <= param_3 || (*(int *)(param_1 + 0x4c) <= param_4)))))) {
        puVar6 = &DAT_0076b340;
      }
      else {
        puVar6 = (undefined1 *)
                 (((*(int *)(param_1 + 0x48) * param_4 + param_3) * iVar5 + iVar7) * 3 +
                 *(int *)(param_1 + 0x30));
      }
      iVar5 = 0;
      do {
        if (((char *)((int)&local_8 + iVar5))[(int)puVar6 - (int)&local_8] !=
            *(char *)((int)&local_8 + iVar5)) goto LAB_005ee2f5;
        iVar5 = iVar5 + 1;
      } while (iVar5 < 3);
      *param_7 = iVar7;
      iVar5 = *(int *)(param_1 + 0x44);
      iVar7 = iVar7 + 1;
    } while (iVar7 < iVar5);
  }
LAB_005ee2f5:
  iVar5 = *(int *)(param_1 + 0x48);
  iVar7 = param_3;
  if (param_3 < iVar5) {
    do {
      if ((((param_2 < 0) || (iVar7 < 0)) || (param_4 < 0)) ||
         ((*(int *)(param_1 + 0x44) <= param_2 || (*(int *)(param_1 + 0x4c) <= param_4)))) {
        puVar6 = &DAT_0076b340;
      }
      else {
        puVar6 = (undefined1 *)
                 (((iVar5 * param_4 + iVar7) * *(int *)(param_1 + 0x44) + param_2) * 3 +
                 *(int *)(param_1 + 0x30));
      }
      iVar5 = 0;
      do {
        if (((char *)((int)&local_8 + iVar5))[(int)puVar6 - (int)&local_8] !=
            *(char *)((int)&local_8 + iVar5)) goto LAB_005ee366;
        iVar5 = iVar5 + 1;
      } while (iVar5 < 3);
      param_7[1] = iVar7;
      iVar5 = *(int *)(param_1 + 0x48);
      iVar7 = iVar7 + 1;
    } while (iVar7 < iVar5);
  }
LAB_005ee366:
  if (param_4 < *(int *)(param_1 + 0x4c)) {
    do {
      if (((param_2 < 0) || (param_3 < 0)) ||
         ((param_4 < 0 ||
          ((*(int *)(param_1 + 0x44) <= param_2 || (*(int *)(param_1 + 0x48) <= param_3)))))) {
        puVar6 = &DAT_0076b340;
      }
      else {
        puVar6 = (undefined1 *)
                 (((*(int *)(param_1 + 0x48) * param_4 + param_3) * *(int *)(param_1 + 0x44) +
                  param_2) * 3 + *(int *)(param_1 + 0x30));
      }
      iVar5 = 0;
      do {
        if (((char *)((int)&local_8 + iVar5))[(int)puVar6 - (int)&local_8] !=
            *(char *)((int)&local_8 + iVar5)) goto LAB_005ee3d1;
        iVar5 = iVar5 + 1;
      } while (iVar5 < 3);
      param_7[2] = param_4;
      param_4 = param_4 + 1;
    } while (param_4 < *(int *)(param_1 + 0x4c));
  }
LAB_005ee3d1:
  param_5 = param_5 & 0x80000003;
  if ((int)param_5 < 0) {
    param_5 = (param_5 - 1 | 0xfffffffc) + 1;
  }
  if (param_5 == 1) {
    iVar7 = *(int *)(param_1 + 0x44);
    iVar2 = *param_6;
    iVar5 = param_6[2];
    *param_6 = param_6[1];
    param_6[1] = (iVar7 - iVar2) + -1;
  }
  else {
    if (param_5 != 2) {
      if (param_5 == 3) {
        iVar5 = *param_6;
        *param_6 = (*(int *)(param_1 + 0x48) - param_6[1]) + -1;
        param_6[1] = iVar5;
        param_6[2] = param_6[2];
      }
      goto LAB_005ee430;
    }
    iVar7 = *(int *)(param_1 + 0x48);
    iVar5 = param_6[2];
    *param_6 = (*(int *)(param_1 + 0x44) - *param_6) + -1;
    param_6[1] = (iVar7 - param_6[1]) + -1;
  }
  param_6[2] = iVar5;
LAB_005ee430:
  if (param_5 == 1) {
    iVar5 = *(int *)(param_1 + 0x44);
    iVar7 = *param_7;
    *param_7 = param_7[1];
    param_7[1] = (iVar5 - iVar7) + -1;
  }
  else if (param_5 == 2) {
    iVar5 = *(int *)(param_1 + 0x48);
    *param_7 = (*(int *)(param_1 + 0x44) - *param_7) + -1;
    param_7[1] = (iVar5 - param_7[1]) + -1;
  }
  else if (param_5 == 3) {
    iVar5 = *param_7;
    *param_7 = (*(int *)(param_1 + 0x48) - param_7[1]) + -1;
    param_7[1] = iVar5;
  }
  iVar5 = *param_6;
  if (*param_7 < iVar5) {
    *param_6 = *param_7;
    *param_7 = iVar5;
  }
  iVar5 = param_6[1];
  if (param_7[1] < iVar5) {
    param_6[1] = param_7[1];
    param_7[1] = iVar5;
  }
  iVar5 = param_6[2];
  iVar7 = param_7[2];
  if (iVar7 < iVar5) {
    param_6[2] = iVar7;
    param_7[2] = iVar5;
  }
  *param_7 = *param_7 + 1;
  param_7[1] = param_7[1] + 1;
  param_7[2] = param_7[2] + 1;
  return CONCAT31((int3)((uint)iVar7 >> 8),1);
}


/* FUN_005eea40 @ 005eea40  kind=gamemisc  attributed-by=caller-vote  size=20 */

undefined1 FUN_005eea40(void)

{
  char cVar1;
  char *in_ECX;
  
  cVar1 = *in_ECX;
  if (((cVar1 != '\0') && (cVar1 != '\x02')) && (cVar1 != '\x01')) {
    return 0;
  }
  return 1;
}


/* FUN_005ef5a0 @ 005ef5a0  kind=gamemisc  attributed-by=caller-vote  size=292 */

float10 FUN_005ef5a0(double *param_1,double *param_2,double *param_3)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  
  dVar3 = *param_3 - *param_1;
  dVar4 = *param_2 - *param_1;
  dVar5 = param_2[1] - param_1[1];
  dVar2 = param_3[1] - param_1[1];
  dVar1 = dVar4 * dVar4 + dVar5 * dVar5;
  if (dVar1 < 9.999999682655225e-21) {
    return (float10)(float)(dVar2 * dVar2 + dVar3 * dVar3);
  }
  dVar1 = (dVar2 * dVar5 + dVar3 * dVar4) / dVar1;
  if (dVar1 <= 0.0) {
    return (float10)(float)(dVar2 * dVar2 + dVar3 * dVar3);
  }
  if (1.0 <= dVar1) {
    dVar1 = param_3[1] - param_2[1];
    dVar2 = *param_3 - *param_2;
    return (float10)(float)(dVar1 * dVar1 + dVar2 * dVar2);
  }
  dVar3 = dVar3 - dVar4 * dVar1;
  dVar2 = dVar2 - dVar5 * dVar1;
  return (float10)(float)(dVar2 * dVar2 + dVar3 * dVar3);
}


/* FUN_005ef6d0 @ 005ef6d0  kind=gamemisc  attributed-by=caller-vote  size=538 */

void FUN_005ef6d0(int *param_1,int *param_2)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  undefined1 *puVar4;
  int in_ECX;
  uint uVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  int local_54;
  int local_50;
  int local_14;
  int iStack_10;
  
  uVar1 = DAT_0076aa78 ^ (uint)&stack0xfffffffc;
  uVar2 = *param_2 - *param_1;
  uVar6 = param_2[1] - param_1[1];
  uVar5 = param_2[2] - param_1[2];
  iVar9 = (uVar2 ^ (int)uVar2 >> 0x1f) - ((int)uVar2 >> 0x1f);
  iVar7 = (uVar6 ^ (int)uVar6 >> 0x1f) - ((int)uVar6 >> 0x1f);
  iVar10 = iVar7;
  if (iVar7 < iVar9) {
    iVar10 = iVar9;
  }
  iVar3 = (uVar5 ^ (int)uVar5 >> 0x1f) - ((int)uVar5 >> 0x1f);
  if ((iVar3 < iVar10) && (iVar3 = iVar7, iVar7 < iVar9)) {
    iVar3 = iVar9;
  }
  if ((iVar3 != 0) && (local_54 = 0, local_50 = param_1[2], -1 < iVar3)) {
    do {
      local_14 = (int)*(undefined8 *)param_1;
      local_14 = local_14 + (int)(uVar2 * local_54) / iVar3;
      iStack_10 = (int)((ulonglong)*(undefined8 *)param_1 >> 0x20);
      iStack_10 = iStack_10 + (int)(uVar6 * local_54) / iVar3;
      iVar10 = param_1[2] + (int)(uVar5 * local_54) / iVar3;
      uVar8 = *(uint *)(in_ECX + 4) & 0x80000003;
      if ((int)uVar8 < 0) {
        uVar8 = (uVar8 - 1 | 0xfffffffc) + 1;
      }
      if (uVar8 == 1) {
        iVar9 = (*(int *)(in_ECX + 0xc) - iStack_10) + -1;
        iVar7 = local_14;
      }
      else if (uVar8 == 2) {
        iVar9 = (*(int *)(in_ECX + 0xc) - local_14) + -1;
        iVar7 = (*(int *)(in_ECX + 0x10) - iStack_10) + -1;
      }
      else {
        iVar7 = iStack_10;
        iVar9 = local_14;
        if (uVar8 == 3) {
          iVar7 = (*(int *)(in_ECX + 0x10) - local_14) + -1;
          iVar9 = iStack_10;
        }
      }
      if (*(char *)(in_ECX + 8) != '\0') {
        iVar7 = (*(int *)(in_ECX + 0x10) - iVar7) + -1;
      }
      if ((((iVar9 < 0) || (iVar7 < 0)) || (iVar10 < 0)) ||
         (((*(int *)(in_ECX + 0xc) <= iVar9 || (*(int *)(in_ECX + 0x10) <= iVar7)) ||
          (*(int *)(in_ECX + 0x14) <= iVar10)))) {
        if ((DAT_0076de04 & 1) == 0) {
          DAT_0076de04 = DAT_0076de04 | 1;
          DAT_0076de01 = 0;
        }
        DAT_0076de00 = 1;
        puVar4 = &DAT_0076de00;
      }
      else {
        puVar4 = (undefined1 *)
                 (*(int *)(in_ECX + 0x18) +
                 ((*(int *)(in_ECX + 0x10) * iVar10 + iVar7) * *(int *)(in_ECX + 0xc) + iVar9) * 2);
      }
      *puVar4 = 3;
      if (iVar10 < local_50) {
        puVar4 = (undefined1 *)FUN_005c46f0(local_14,iStack_10,iVar10 + 1);
        *puVar4 = 3;
        iVar7 = FUN_005c46f0(local_14,iStack_10,iVar10);
        *(byte *)(iVar7 + 1) = *(byte *)(iVar7 + 1) | 1;
      }
      if (local_50 < iVar10) {
        puVar4 = (undefined1 *)FUN_005c46f0(local_14,iStack_10,iVar10 + -1);
        *puVar4 = 3;
        iVar7 = FUN_005c46f0(local_14,iStack_10,iVar10 + -1);
        *(byte *)(iVar7 + 1) = *(byte *)(iVar7 + 1) | 1;
      }
      local_54 = local_54 + 1;
      local_50 = iVar10;
    } while (local_54 <= iVar3);
  }
  __security_check_cookie(uVar1 ^ (uint)&stack0xfffffffc);
  return;
}


/* FUN_005ef8f0 @ 005ef8f0  kind=gamemisc  attributed-by=caller-vote  size=1212 */

void FUN_005ef8f0(int *param_1,int *param_2,char param_3)

{
  uint uVar1;
  int iVar2;
  undefined1 *puVar3;
  int in_ECX;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  code *pcVar8;
  int iVar9;
  int iVar10;
  bool bVar11;
  int local_c;
  int local_8;
  
  if (((0 < *param_2) && (iVar7 = param_2[1], 0 < iVar7)) && (iVar2 = param_2[2], 0 < iVar2)) {
    iVar5 = *param_1;
    if (iVar5 < *param_2 + iVar5) {
      do {
        iVar10 = param_1[1];
        if (iVar10 < iVar10 + iVar7) {
          do {
            iVar7 = param_1[2];
            if (iVar7 < iVar7 + iVar2) {
              do {
                uVar1 = *(uint *)(in_ECX + 4) & 0x80000003;
                if ((int)uVar1 < 0) {
                  uVar1 = (uVar1 - 1 | 0xfffffffc) + 1;
                }
                if (uVar1 == 1) {
                  iVar9 = (*(int *)(in_ECX + 0xc) - iVar10) + -1;
                  iVar2 = iVar5;
                }
                else if (uVar1 == 2) {
                  iVar9 = (*(int *)(in_ECX + 0xc) - iVar5) + -1;
                  iVar2 = (*(int *)(in_ECX + 0x10) - iVar10) + -1;
                }
                else {
                  iVar2 = iVar10;
                  iVar9 = iVar5;
                  if (uVar1 == 3) {
                    iVar2 = (*(int *)(in_ECX + 0x10) - iVar5) + -1;
                    iVar9 = iVar10;
                  }
                }
                if (*(char *)(in_ECX + 8) != '\0') {
                  iVar2 = (*(int *)(in_ECX + 0x10) - iVar2) + -1;
                }
                if ((((iVar9 < 0) || (iVar2 < 0)) ||
                    ((iVar7 < 0 ||
                     ((*(int *)(in_ECX + 0xc) <= iVar9 || (*(int *)(in_ECX + 0x10) <= iVar2)))))) ||
                   (*(int *)(in_ECX + 0x14) <= iVar7)) {
                  if ((DAT_0076de04 & 1) == 0) {
                    DAT_0076de04 = DAT_0076de04 | 1;
                    DAT_0076de01 = 0;
                  }
                  DAT_0076de00 = 1;
                  puVar3 = &DAT_0076de00;
                }
                else {
                  puVar3 = (undefined1 *)
                           (*(int *)(in_ECX + 0x18) +
                           ((*(int *)(in_ECX + 0x10) * iVar7 + iVar2) * *(int *)(in_ECX + 0xc) +
                           iVar9) * 2);
                }
                *puVar3 = 3;
                iVar7 = iVar7 + 1;
                iVar2 = param_2[2];
              } while (iVar7 < param_1[2] + iVar2);
            }
            iVar10 = iVar10 + 1;
            iVar7 = param_2[1];
          } while (iVar10 < param_1[1] + iVar7);
        }
        iVar5 = iVar5 + 1;
      } while (iVar5 < *param_1 + *param_2);
    }
    pcVar8 = rand_exref;
    uVar1 = rand();
    uVar1 = uVar1 & 0x80000001;
    bVar11 = uVar1 == 0;
    if ((int)uVar1 < 0) {
      bVar11 = (uVar1 - 1 | 0xfffffffe) == 0xffffffff;
    }
    if (!bVar11) {
      iVar7 = rand();
      iVar7 = iVar7 % *param_2 + 1;
      iVar2 = rand();
      local_c = *param_1;
      local_8 = param_1[1];
      iVar2 = iVar2 % param_2[1] + 1;
      if (*param_2 != iVar7 && -1 < *param_2 - iVar7) {
        iVar5 = rand();
        local_c = local_c + iVar5 % ((*param_2 - iVar7) + 1);
      }
      if (param_2[1] != iVar2 && -1 < param_2[1] - iVar2) {
        iVar5 = rand();
        local_8 = local_8 + iVar5 % ((param_2[1] - iVar2) + 1);
      }
      iVar7 = iVar7 + local_c;
      pcVar8 = rand_exref;
      if (local_c < iVar7) {
        iVar5 = local_8;
        do {
          for (; rand_exref = pcVar8, iVar5 < local_8 + iVar2; iVar5 = iVar5 + 1) {
            uVar1 = *(uint *)(in_ECX + 4) & 0x80000003;
            if ((int)uVar1 < 0) {
              uVar1 = (uVar1 - 1 | 0xfffffffc) + 1;
            }
            if (uVar1 == 1) {
              iVar9 = (*(int *)(in_ECX + 0xc) - iVar5) + -1;
              iVar10 = local_c;
            }
            else if (uVar1 == 2) {
              iVar9 = (*(int *)(in_ECX + 0xc) - local_c) + -1;
              iVar10 = (*(int *)(in_ECX + 0x10) - iVar5) + -1;
            }
            else {
              iVar10 = iVar5;
              iVar9 = local_c;
              if (uVar1 == 3) {
                iVar10 = (*(int *)(in_ECX + 0x10) - local_c) + -1;
                iVar9 = iVar5;
              }
            }
            if (*(char *)(in_ECX + 8) != '\0') {
              iVar10 = (*(int *)(in_ECX + 0x10) - iVar10) + -1;
            }
            if (((((iVar9 < 0) || (iVar10 < 0)) || (param_1[2] < 0)) ||
                ((*(int *)(in_ECX + 0xc) <= iVar9 || (*(int *)(in_ECX + 0x10) <= iVar10)))) ||
               (*(int *)(in_ECX + 0x14) <= param_1[2])) {
              if ((DAT_0076de04 & 1) == 0) {
                DAT_0076de04 = DAT_0076de04 | 1;
                DAT_0076de01 = 0;
              }
              DAT_0076de00 = 1;
              puVar3 = &DAT_0076de00;
            }
            else {
              puVar3 = (undefined1 *)
                       (*(int *)(in_ECX + 0x18) +
                       ((*(int *)(in_ECX + 0x10) * param_1[2] + iVar10) * *(int *)(in_ECX + 0xc) +
                       iVar9) * 2);
            }
            puVar3[1] = puVar3[1] | 2;
            pcVar8 = rand_exref;
          }
          local_c = local_c + 1;
          iVar5 = local_8;
        } while (local_c < iVar7);
      }
    }
    if (((param_3 != '\0') && (2 < *param_2)) && (2 < param_2[1])) {
      iVar7 = (*pcVar8)();
      iVar7 = iVar7 % (*param_2 + -2) + 1;
      iVar2 = (*pcVar8)();
      iVar5 = param_1[1] + 1;
      _param_3 = *param_1 + 1;
      iVar2 = iVar2 % (param_2[1] + -2) + 1;
      if (1 < *param_2 - iVar7) {
        iVar10 = rand();
        _param_3 = _param_3 + iVar10 % ((*param_2 - iVar7) + -1);
      }
      if (1 < param_2[1] - iVar2) {
        iVar10 = rand();
        iVar5 = iVar5 + iVar10 % ((param_2[1] - iVar2) + -1);
      }
      iVar7 = iVar7 + _param_3;
      if (_param_3 < iVar7) {
        iVar10 = iVar5;
        do {
          for (; iVar10 < iVar5 + iVar2; iVar10 = iVar10 + 1) {
            iVar9 = param_1[2];
            if (iVar9 < param_2[2] + iVar9) {
              do {
                uVar1 = *(uint *)(in_ECX + 4) & 0x80000003;
                if ((int)uVar1 < 0) {
                  uVar1 = (uVar1 - 1 | 0xfffffffc) + 1;
                }
                if (uVar1 == 1) {
                  iVar6 = (*(int *)(in_ECX + 0xc) - iVar10) + -1;
                  iVar4 = _param_3;
                }
                else if (uVar1 == 2) {
                  iVar6 = (*(int *)(in_ECX + 0xc) - _param_3) + -1;
                  iVar4 = (*(int *)(in_ECX + 0x10) - iVar10) + -1;
                }
                else {
                  iVar4 = iVar10;
                  iVar6 = _param_3;
                  if (uVar1 == 3) {
                    iVar4 = (*(int *)(in_ECX + 0x10) - _param_3) + -1;
                    iVar6 = iVar10;
                  }
                }
                if (*(char *)(in_ECX + 8) != '\0') {
                  iVar4 = (*(int *)(in_ECX + 0x10) - iVar4) + -1;
                }
                if ((((iVar6 < 0) || (iVar4 < 0)) || (iVar9 < 0)) ||
                   (((*(int *)(in_ECX + 0xc) <= iVar6 || (*(int *)(in_ECX + 0x10) <= iVar4)) ||
                    (*(int *)(in_ECX + 0x14) <= iVar9)))) {
                  if ((DAT_0076de04 & 1) == 0) {
                    DAT_0076de04 = DAT_0076de04 | 1;
                    DAT_0076de01 = 0;
                  }
                  DAT_0076de00 = 1;
                  puVar3 = &DAT_0076de00;
                }
                else {
                  puVar3 = (undefined1 *)
                           (*(int *)(in_ECX + 0x18) +
                           ((*(int *)(in_ECX + 0x10) * iVar9 + iVar4) * *(int *)(in_ECX + 0xc) +
                           iVar6) * 2);
                }
                *puVar3 = 2;
                iVar9 = iVar9 + 1;
              } while (iVar9 < param_2[2] + param_1[2]);
            }
          }
          _param_3 = _param_3 + 1;
          iVar10 = iVar5;
        } while (_param_3 < iVar7);
      }
    }
  }
  return;
}


/* FUN_005efdb0 @ 005efdb0  kind=gamemisc  attributed-by=caller-vote  size=493 */

float10 FUN_005efdb0(int param_1,int param_2,int param_3)

{
  int iVar1;
  float10 fVar2;
  float10 fVar3;
  float fVar4;
  float fVar5;
  
  iVar1 = FUN_004347a0();
  if (iVar1 == 0) {
    fVar2 = (float10)FUN_005c4800(param_1,param_2);
    fVar5 = (float)fVar2;
  }
  else {
    fVar5 = *(float *)(iVar1 + 4);
  }
  fVar2 = (float10)FUN_004c0ef0((double)((float)param_2 * 0.2 + 534.0),
                                (double)((float)param_3 * 0.2 + 13.0));
  fVar3 = (float10)FUN_004c0ef0((double)param_1 * 0.05 + 4343.0,(double)param_3 * 0.1 + 84734.0);
  fVar4 = ((float)fVar2 * 0.1 + (float)fVar3) * 0.7 + 0.2;
  if (fVar4 * fVar5 <= 1.0) {
    iVar1 = FUN_004347a0();
    if (iVar1 == 0) {
      fVar2 = (float10)FUN_005c4800(param_1,param_2);
      fVar5 = (float)fVar2;
    }
    else {
      fVar5 = *(float *)(iVar1 + 4);
    }
    if (fVar4 * fVar5 < 0.0) {
      return (float10)0.0;
    }
  }
  iVar1 = FUN_004347a0();
  if (iVar1 == 0) {
    fVar2 = (float10)FUN_005c4800(param_1,param_2);
    fVar5 = (float)fVar2;
  }
  else {
    fVar5 = *(float *)(iVar1 + 4);
  }
  if (1.0 < fVar4 * fVar5) {
    return (float10)1.0;
  }
  iVar1 = FUN_004347a0();
  if (iVar1 == 0) {
    fVar2 = (float10)FUN_005c4800(param_1,param_2);
    fVar5 = (float)fVar2;
  }
  else {
    fVar5 = *(float *)(iVar1 + 4);
  }
  return (float10)(fVar4 * fVar5);
}


/* FUN_005f4b50 @ 005f4b50  kind=gamemisc  attributed-by=caller-vote  size=67 */

void FUN_005f4b50(undefined4 param_1)

{
  int iVar1;
  int iVar2;
  int *in_ECX;
  
  iVar1 = *in_ECX;
  iVar2 = FUN_00608a20(iVar1,*(undefined4 *)(iVar1 + 4),param_1);
  if (in_ECX[1] == 0xaaaaaa9) {
                    /* WARNING: Subroutine does not return */
    std::_Xlength_error("list<T> too long");
  }
  in_ECX[1] = in_ECX[1] + 1;
  *(int *)(iVar1 + 4) = iVar2;
  **(int **)(iVar2 + 4) = iVar2;
  return;
}


/* FUN_005f4ba0 @ 005f4ba0  kind=gamemisc  attributed-by=caller-vote  size=130 */

void FUN_005f4ba0(uint param_1)

{
  uint uVar1;
  uint uVar2;
  uint *in_ECX;
  
  uVar1 = in_ECX[1];
  if ((param_1 < uVar1) && (uVar2 = *in_ECX, uVar2 <= param_1)) {
    if (uVar1 == in_ECX[2]) {
      FUN_005c4320(1);
    }
    if (in_ECX[1] != 0) {
      FUN_005c3950(((int)(param_1 - uVar2) / 0x140) * 0x140 + *in_ECX);
      in_ECX[1] = in_ECX[1] + 0x140;
      return;
    }
  }
  else {
    if (uVar1 == in_ECX[2]) {
      FUN_005c4320(1);
    }
    if (in_ECX[1] != 0) {
      FUN_005c3950(param_1);
    }
  }
  in_ECX[1] = in_ECX[1] + 0x140;
  return;
}


/* FUN_005f4c30 @ 005f4c30  kind=gamemisc  attributed-by=caller-vote  size=213 */

void FUN_005f4c30(uint param_1)

{
  uint uVar1;
  uint uVar2;
  uint *in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006f4782;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  uVar1 = in_ECX[1];
  if ((param_1 < uVar1) && (uVar2 = *in_ECX, uVar2 <= param_1)) {
    if (uVar1 == in_ECX[2]) {
      FUN_005c43d0(1);
    }
    param_1 = *in_ECX + ((int)(param_1 - uVar2) / 0x18) * 0x18;
    local_8 = 0;
    if (in_ECX[1] == 0) goto LAB_005f4ced;
    FUN_005a7990(param_1);
    local_8 = CONCAT31(local_8._1_3_,1);
  }
  else {
    if (uVar1 == in_ECX[2]) {
      FUN_005c43d0(1);
    }
    local_8 = 2;
    if (in_ECX[1] == 0) goto LAB_005f4ced;
    FUN_005a7990(param_1);
    local_8 = CONCAT31(local_8._1_3_,3);
  }
  FUN_005a7990(param_1 + 0xc);
LAB_005f4ced:
  in_ECX[1] = in_ECX[1] + 0x18;
  ExceptionList = local_10;
  return;
}


/* FUN_005f4d10 @ 005f4d10  kind=gamemisc  attributed-by=caller-vote  size=143 */

void FUN_005f4d10(undefined4 *param_1)

{
  undefined4 *puVar1;
  uint uVar2;
  int iVar3;
  uint *in_ECX;
  
  puVar1 = (undefined4 *)in_ECX[1];
  if ((param_1 < puVar1) && ((undefined4 *)*in_ECX <= param_1)) {
    iVar3 = ((int)param_1 - (int)*in_ECX) / 0xc;
    if (puVar1 == (undefined4 *)in_ECX[2]) {
      FUN_005c4480(1);
    }
    puVar1 = (undefined4 *)in_ECX[1];
    uVar2 = *in_ECX;
    if (puVar1 != (undefined4 *)0x0) {
      *puVar1 = *(undefined4 *)(uVar2 + iVar3 * 0xc);
      puVar1[1] = *(undefined4 *)(uVar2 + 4 + iVar3 * 0xc);
      puVar1[2] = *(undefined4 *)(uVar2 + 8 + iVar3 * 0xc);
      in_ECX[1] = in_ECX[1] + 0xc;
      return;
    }
  }
  else {
    if (puVar1 == (undefined4 *)in_ECX[2]) {
      FUN_005c4480(1);
    }
    puVar1 = (undefined4 *)in_ECX[1];
    if (puVar1 != (undefined4 *)0x0) {
      *puVar1 = *param_1;
      puVar1[1] = param_1[1];
      puVar1[2] = param_1[2];
    }
  }
  in_ECX[1] = in_ECX[1] + 0xc;
  return;
}


/* FUN_005f4da0 @ 005f4da0  kind=gamemisc  attributed-by=caller-vote  size=1077 */

void FUN_005f4da0(int param_1,undefined4 param_2,char param_3)

{
  uint *puVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  undefined4 *puVar11;
  int iVar12;
  int iVar13;
  longlong lVar14;
  int local_20;
  int local_c;
  
  uVar4 = DAT_0076aa78 ^ (uint)&stack0xfffffffc;
  lVar14 = FUN_0068d946();
  iVar8 = *(int *)(param_1 + 0xc);
  iVar5 = __alldiv(*(uint *)(param_1 + 8) - (uint)lVar14,
                   (iVar8 - (int)((ulonglong)lVar14 >> 0x20)) -
                   (uint)(*(uint *)(param_1 + 8) < (uint)lVar14),0x10000,0);
  iVar6 = __alldiv(lVar14 + CONCAT44(iVar8,*(undefined4 *)(param_1 + 8)),0x10000,0);
  lVar14 = FUN_0068d946();
  iVar8 = *(int *)(param_1 + 0x14);
  iVar7 = __alldiv(*(uint *)(param_1 + 0x10) - (uint)lVar14,
                   (iVar8 - (int)((ulonglong)lVar14 >> 0x20)) -
                   (uint)(*(uint *)(param_1 + 0x10) < (uint)lVar14),0x10000,0);
  iVar8 = __alldiv(lVar14 + CONCAT44(iVar8,*(undefined4 *)(param_1 + 0x10)),0x10000,0);
  local_c = 0;
  do {
    iVar9 = __alldiv(*(undefined4 *)(param_1 + 0x18),*(undefined4 *)(param_1 + 0x1c),0x10000,0);
    for (iVar12 = iVar5; iVar13 = iVar7, iVar12 <= iVar6; iVar12 = iVar12 + 1) {
      for (; iVar13 <= iVar8; iVar13 = iVar13 + 1) {
        iVar10 = FUN_004347a0(iVar12,iVar13,param_2);
        if (iVar10 == 0) {
          puVar11 = (undefined4 *)&DAT_0076ddfc;
        }
        else {
          iVar3 = *(int *)(iVar10 + 0x10);
          if (iVar9 < iVar3) {
            puVar11 = (undefined4 *)&DAT_0076ddfc;
          }
          else if (iVar9 < *(int *)(iVar10 + 0x1c) + iVar3) {
            puVar11 = (undefined4 *)FUN_0042f730(iVar9 - iVar3);
            if ((((*(byte *)((int)puVar11 + 3) & 0x1f) == 0) && (iVar9 < 1)) &&
               ((*(byte *)((int)puVar11 + 3) & 0x40) == 0)) {
              puVar11 = (undefined4 *)&DAT_0076ddf4;
            }
          }
          else {
            puVar11 = (undefined4 *)&DAT_0076ddf4;
            if (0 < iVar9) {
              puVar11 = &DAT_0076ddf8;
            }
          }
        }
        if (((*(byte *)((int)puVar11 + 3) & 0x1f) != 0) &&
           ((*(byte *)((int)puVar11 + 3) & 0x1f) != 2)) goto LAB_005f4f9f;
      }
    }
    puVar1 = (uint *)(param_1 + 0x18);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 0x10000;
    *(int *)(param_1 + 0x1c) = *(int *)(param_1 + 0x1c) + -1 + (uint)(0xffff < uVar2);
    local_c = local_c + 1;
  } while (local_c < 0x32);
LAB_005f4f9f:
  local_20 = 0;
LAB_005f4fa6:
  iVar9 = __alldiv(*(undefined4 *)(param_1 + 0x18),*(undefined4 *)(param_1 + 0x1c),0x10000,0);
  for (iVar12 = iVar5; iVar13 = iVar7, iVar12 <= iVar6; iVar12 = iVar12 + 1) {
    for (; iVar13 <= iVar8; iVar13 = iVar13 + 1) {
      iVar10 = FUN_004347a0(iVar12,iVar13,param_2);
      if (iVar10 == 0) {
        puVar11 = (undefined4 *)&DAT_0076ddfc;
      }
      else {
        iVar3 = *(int *)(iVar10 + 0x10);
        if (iVar9 < iVar3) {
          puVar11 = (undefined4 *)&DAT_0076ddfc;
        }
        else if (iVar9 < *(int *)(iVar10 + 0x1c) + iVar3) {
          puVar11 = (undefined4 *)FUN_0042f730(iVar9 - iVar3);
          if ((((*(byte *)((int)puVar11 + 3) & 0x1f) == 0) && (iVar9 < 1)) &&
             ((*(byte *)((int)puVar11 + 3) & 0x40) == 0)) {
            puVar11 = (undefined4 *)&DAT_0076ddf4;
          }
        }
        else {
          puVar11 = (undefined4 *)&DAT_0076ddf4;
          if (0 < iVar9) {
            puVar11 = &DAT_0076ddf8;
          }
        }
      }
      if (((*(byte *)((int)puVar11 + 3) & 0x1f) != 0) && ((*(byte *)((int)puVar11 + 3) & 0x1f) != 2)
         ) {
        puVar1 = (uint *)(param_1 + 0x18);
        uVar2 = *puVar1;
        *puVar1 = *puVar1 + 0x10000;
        *(int *)(param_1 + 0x1c) = *(int *)(param_1 + 0x1c) + (uint)(0xfffeffff < uVar2);
        local_20 = local_20 + 1;
        if (local_20 < 0x32) goto LAB_005f4fa6;
        goto LAB_005f5092;
      }
    }
  }
LAB_005f5092:
  iVar12 = *(int *)(param_1 + 0x1c);
  uVar2 = *(uint *)(param_1 + 0x18);
  if ((iVar12 < 1) && ((iVar12 < 0 || (uVar2 == 0)))) {
LAB_005f50a2:
    __security_check_cookie(uVar4 ^ (uint)&stack0xfffffffc);
    return;
  }
  if (param_3 != '\0') {
    iVar12 = __alldiv(uVar2 - 0x10000,iVar12 - (uint)(uVar2 < 0x10000),0x10000,0);
    for (; iVar9 = iVar7, iVar5 <= iVar6; iVar5 = iVar5 + 1) {
      for (; iVar9 <= iVar8; iVar9 = iVar9 + 1) {
        iVar13 = FUN_004347a0(iVar5,iVar9,param_2);
        if (iVar13 == 0) {
          puVar11 = (undefined4 *)&DAT_0076ddfc;
        }
        else {
          iVar10 = *(int *)(iVar13 + 0x10);
          if (iVar12 < iVar10) {
            puVar11 = (undefined4 *)&DAT_0076ddfc;
          }
          else if (iVar12 < *(int *)(iVar13 + 0x1c) + iVar10) {
            puVar11 = (undefined4 *)FUN_0042f730(iVar12 - iVar10);
            if ((((*(byte *)((int)puVar11 + 3) & 0x1f) == 0) && (iVar12 < 1)) &&
               ((*(byte *)((int)puVar11 + 3) & 0x40) == 0)) {
              puVar11 = (undefined4 *)&DAT_0076ddf4;
            }
          }
          else {
            puVar11 = (undefined4 *)&DAT_0076ddf4;
            if (0 < iVar12) {
              puVar11 = &DAT_0076ddf8;
            }
          }
        }
        if (((*(byte *)((int)puVar11 + 3) & 0x1f) == 0) ||
           ((*(byte *)((int)puVar11 + 3) & 0x1f) == 2)) goto LAB_005f50a2;
      }
    }
  }
  FUN_0042f860(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc),
               *(undefined4 *)(param_1 + 0x10),*(undefined4 *)(param_1 + 0x14),
               *(undefined4 *)(param_1 + 0x18),*(undefined4 *)(param_1 + 0x1c),param_2);
  __security_check_cookie(uVar4 ^ (uint)&stack0xfffffffc);
  return;
}


/* FUN_005f56c0 @ 005f56c0  kind=gamemisc  attributed-by=caller-vote  size=5772 */

/* WARNING: Type propagation algorithm not settling */

void * FUN_005f56c0(undefined4 param_1,undefined4 param_2,int param_3,undefined4 param_4)

{
  uint uVar1;
  void *pvVar2;
  int iVar3;
  void **ppvVar4;
  float10 fVar5;
  float10 fVar6;
  void **local_90;
  void **local_8c;
  void **local_88;
  float local_84;
  float local_80;
  void *local_7c;
  void *local_78;
  void *local_74;
  void *local_70;
  void *local_6c;
  void *local_68;
  void *local_64;
  void *local_60;
  void *local_5c;
  void *local_58;
  void *local_54;
  void *local_50;
  void *local_4c;
  void *local_48;
  void *local_44 [2];
  void *local_3c;
  void *local_38;
  void *local_34;
  void *local_30;
  void *local_2c [2];
  void *local_24;
  void *local_20;
  void *local_1c;
  void *local_18;
  void *local_14 [4];
  
  local_14[3] = (void *)0xffffffff;
  local_14[2] = &LAB_006f47eb;
  local_14[1] = ExceptionList;
  ExceptionList = local_14 + 1;
  fVar5 = (float10)FUN_005c4dd0(param_1,param_2);
  local_80 = (float)fVar5;
  fVar5 = (float10)FUN_005c4800(param_1,param_2);
  local_84 = (float)fVar5;
  fVar5 = (float10)FUN_005ef040(param_1,param_2);
  fVar6 = (float10)FUN_005effa0(param_1,param_2,0);
  local_90 = (void **)0x0;
  local_8c = (void **)0x0;
  local_88 = (void **)0x0;
  local_14[3] = (void *)0x0;
  if (param_3 < 0) {
    param_4 = 0x91;
    FUN_0066add0(&param_4);
    param_4 = 0x92;
    FUN_0066add0(&param_4);
    param_4 = 0x93;
    FUN_0066add0(&param_4);
    param_4 = 0x96;
    FUN_0066add0(&param_4);
    param_4 = 0x98;
    FUN_0066add0(&param_4);
    param_4 = 0x99;
    FUN_0066add0(&param_4);
    param_4 = 0x9b;
    FUN_0066add0(&param_4);
    param_4 = 0x9a;
    FUN_0066add0(&param_4);
  }
  else if ((char)param_4 == '\0') {
    if ((float)fVar5 <= 0.1) {
      FUN_0063dc90(1);
      if (local_8c != (void **)0x0) {
        *local_8c = (void *)0x15;
      }
      local_8c = local_8c + 1;
      local_2c[0] = (void *)0x2e;
      if ((local_2c < local_8c) && (local_90 <= local_2c)) {
        iVar3 = (int)local_2c - (int)local_90;
        if (local_8c == local_88) {
          FUN_0063dc90(1);
        }
        if (local_8c != (void **)0x0) {
          *local_8c = local_90[iVar3 >> 2];
        }
      }
      else {
        if (local_8c == local_88) {
          FUN_0063dc90(1);
        }
        if (local_8c != (void **)0x0) {
          *local_8c = (void *)0x2e;
        }
      }
      local_8c = local_8c + 1;
      if (0.3 < (float)fVar6) {
        local_30 = (void *)0x2f;
        if ((&local_30 < local_8c) && (local_90 <= &local_30)) {
          iVar3 = (int)&local_30 - (int)local_90;
          if (local_8c == local_88) {
            FUN_0063dc90(1);
          }
          if (local_8c != (void **)0x0) {
            *local_8c = local_90[iVar3 >> 2];
          }
        }
        else {
          if (local_8c == local_88) {
            FUN_0063dc90(1);
          }
          if (local_8c != (void **)0x0) {
            *local_8c = (void *)0x2f;
          }
        }
        local_8c = local_8c + 1;
      }
      if (3 < param_3) {
        if ((local_80 < 0.2) || (0.8 <= local_80)) {
          if ((local_80 < 0.8) || (0.2 <= local_84)) {
            if ((local_80 < 0.6) || (local_84 < 0.6)) {
              if (0.2 <= local_80) goto LAB_005f6ce4;
              param_4 = 0x1c;
              FUN_0066add0(&param_4);
              param_4 = 0x38;
              FUN_0066add0(&param_4);
              param_4 = 0x41;
              FUN_0066add0(&param_4);
              param_4 = 0x5a;
              FUN_0066add0(&param_4);
              param_4 = 0x5d;
              FUN_0066add0(&param_4);
              param_4 = 0x15;
              FUN_0066add0(&param_4);
              param_4 = 0x31;
              FUN_0066add0(&param_4);
              param_4 = 0x16;
              FUN_0066add0(&param_4);
              param_4 = 0x17;
              FUN_0066add0(&param_4);
              param_4 = 0x23;
            }
            else {
              param_4 = 0x36;
              FUN_0066add0(&param_4);
              param_4 = 0x59;
              FUN_0066add0(&param_4);
              param_4 = 0x4b;
              FUN_0066add0(&param_4);
              param_4 = 0x4a;
              FUN_0066add0(&param_4);
              param_4 = 0x47;
              FUN_0066add0(&param_4);
              param_4 = 0x40;
              FUN_0066add0(&param_4);
              param_4 = 0x44;
              FUN_0066add0(&param_4);
              param_4 = 0x3c;
              FUN_0066add0(&param_4);
              param_4 = 0x3a;
              FUN_0066add0(&param_4);
              param_4 = 0x43;
              FUN_0066add0(&param_4);
              param_4 = 0x53;
              FUN_0066add0(&param_4);
              param_4 = 0x54;
              FUN_0066add0(&param_4);
              param_4 = 0x19;
              FUN_0066add0(&param_4);
              param_4 = 0x66;
              FUN_0066add0(&param_4);
              param_4 = 0x68;
              FUN_0066add0(&param_4);
              param_4 = 0x69;
              FUN_0066add0(&param_4);
              param_4 = 0x58;
              FUN_0066add0(&param_4);
              param_4 = 0x3e;
              FUN_0066add0(&param_4);
              param_4 = 0x24;
              FUN_0066add0(&param_4);
              param_4 = 0x32;
              FUN_0066add0(&param_4);
              param_4 = 0x16;
              FUN_0066add0(&param_4);
              param_4 = 0x17;
            }
          }
          else {
            param_4 = 0x36;
            FUN_0066add0(&param_4);
            param_4 = 0x3d;
            FUN_0066add0(&param_4);
            param_4 = 0x48;
            FUN_0066add0(&param_4);
            param_4 = 0x2a;
            FUN_0066add0(&param_4);
            param_4 = 0x49;
            FUN_0066add0(&param_4);
            param_4 = 0x42;
            FUN_0066add0(&param_4);
            param_4 = 0x53;
            FUN_0066add0(&param_4);
            param_4 = 0x54;
            FUN_0066add0(&param_4);
            param_4 = 0x66;
            FUN_0066add0(&param_4);
            param_4 = 0x67;
            FUN_0066add0(&param_4);
            param_4 = 0x58;
            FUN_0066add0(&param_4);
            param_4 = 0x3e;
            FUN_0066add0(&param_4);
            param_4 = 0x24;
            FUN_0066add0(&param_4);
            param_4 = 99;
          }
        }
        else {
          local_44[0] = (void *)0x36;
          if ((local_44 < local_8c) && (local_90 <= local_44)) {
            iVar3 = (int)local_44 - (int)local_90;
            if (local_8c == local_88) {
              FUN_0063dc90(1);
            }
            if (local_8c != (void **)0x0) {
              *local_8c = local_90[iVar3 >> 2];
            }
          }
          else {
            if (local_8c == local_88) {
              FUN_0063dc90(1);
            }
            if (local_8c != (void **)0x0) {
              *local_8c = (void *)0x36;
            }
          }
          local_8c = local_8c + 1;
          local_48 = (void *)0x4a;
          if ((&local_48 < local_8c) && (local_90 <= &local_48)) {
            iVar3 = (int)&local_48 - (int)local_90;
            if (local_8c == local_88) {
              FUN_0063dc90(1);
            }
            if (local_8c != (void **)0x0) {
              *local_8c = local_90[iVar3 >> 2];
            }
          }
          else {
            if (local_8c == local_88) {
              FUN_0063dc90(1);
            }
            if (local_8c != (void **)0x0) {
              *local_8c = (void *)0x4a;
            }
          }
          local_8c = local_8c + 1;
          local_4c = (void *)0x1c;
          if ((&local_4c < local_8c) && (local_90 <= &local_4c)) {
            iVar3 = (int)&local_4c - (int)local_90;
            if (local_8c == local_88) {
              FUN_0063dc90(1);
            }
            if (local_8c != (void **)0x0) {
              *local_8c = local_90[iVar3 >> 2];
            }
          }
          else {
            if (local_8c == local_88) {
              FUN_0063dc90(1);
            }
            if (local_8c != (void **)0x0) {
              *local_8c = (void *)0x1c;
            }
          }
          local_8c = local_8c + 1;
          local_50 = (void *)0x38;
          if ((&local_50 < local_8c) && (local_90 <= &local_50)) {
            iVar3 = (int)&local_50 - (int)local_90;
            if (local_8c == local_88) {
              FUN_0063dc90(1);
            }
            if (local_8c != (void **)0x0) {
              *local_8c = local_90[iVar3 >> 2];
            }
          }
          else {
            if (local_8c == local_88) {
              FUN_0063dc90(1);
            }
            if (local_8c != (void **)0x0) {
              *local_8c = (void *)0x38;
            }
          }
          local_8c = local_8c + 1;
          local_54 = (void *)0x19;
          if ((&local_54 < local_8c) && (local_90 <= &local_54)) {
            iVar3 = (int)&local_54 - (int)local_90;
            if (local_8c == local_88) {
              FUN_0063dc90(1);
            }
            if (local_8c != (void **)0x0) {
              *local_8c = local_90[iVar3 >> 2];
            }
          }
          else {
            if (local_8c == local_88) {
              FUN_0063dc90(1);
            }
            if (local_8c != (void **)0x0) {
              *local_8c = (void *)0x19;
            }
          }
          local_8c = local_8c + 1;
          local_58 = (void *)0x35;
          if ((&local_58 < local_8c) && (local_90 <= &local_58)) {
            iVar3 = (int)&local_58 - (int)local_90;
            if (local_8c == local_88) {
              FUN_0063dc90(1);
            }
            if (local_8c != (void **)0x0) {
              *local_8c = local_90[iVar3 >> 2];
            }
          }
          else {
            if (local_8c == local_88) {
              FUN_0063dc90(1);
            }
            if (local_8c != (void **)0x0) {
              *local_8c = (void *)0x35;
            }
          }
          local_8c = local_8c + 1;
          local_5c = (void *)0x37;
          if ((&local_5c < local_8c) && (local_90 <= &local_5c)) {
            iVar3 = (int)&local_5c - (int)local_90;
            if (local_8c == local_88) {
              FUN_0063dc90(1);
            }
            if (local_8c != (void **)0x0) {
              *local_8c = local_90[iVar3 >> 2];
            }
          }
          else {
            if (local_8c == local_88) {
              FUN_0063dc90(1);
            }
            if (local_8c != (void **)0x0) {
              *local_8c = (void *)0x37;
            }
          }
          local_8c = local_8c + 1;
          local_60 = (void *)0x3c;
          if ((&local_60 < local_8c) && (local_90 <= &local_60)) {
            iVar3 = (int)&local_60 - (int)local_90;
            if (local_8c == local_88) {
              FUN_0063dc90(1);
            }
            if (local_8c != (void **)0x0) {
              *local_8c = local_90[iVar3 >> 2];
            }
          }
          else {
            if (local_8c == local_88) {
              FUN_0063dc90(1);
            }
            if (local_8c != (void **)0x0) {
              *local_8c = (void *)0x3c;
            }
          }
          local_8c = local_8c + 1;
          local_64 = (void *)0x3f;
          if ((&local_64 < local_8c) && (local_90 <= &local_64)) {
            iVar3 = (int)&local_64 - (int)local_90;
            if (local_8c == local_88) {
              FUN_0063dc90(1);
            }
            if (local_8c != (void **)0x0) {
              *local_8c = local_90[iVar3 >> 2];
            }
          }
          else {
            if (local_8c == local_88) {
              FUN_0063dc90(1);
            }
            if (local_8c != (void **)0x0) {
              *local_8c = (void *)0x3f;
            }
          }
          local_8c = local_8c + 1;
          local_68 = (void *)0x43;
          if ((&local_68 < local_8c) && (local_90 <= &local_68)) {
            iVar3 = (int)&local_68 - (int)local_90;
            if (local_8c == local_88) {
              FUN_0063dc90(1);
            }
            if (local_8c != (void **)0x0) {
              *local_8c = local_90[iVar3 >> 2];
            }
          }
          else {
            if (local_8c == local_88) {
              FUN_0063dc90(1);
            }
            if (local_8c != (void **)0x0) {
              *local_8c = (void *)0x43;
            }
          }
          local_8c = local_8c + 1;
          local_6c = (void *)0x45;
          if ((&local_6c < local_8c) && (local_90 <= &local_6c)) {
            iVar3 = (int)&local_6c - (int)local_90;
            if (local_8c == local_88) {
              FUN_0063dc90(1);
            }
            if (local_8c != (void **)0x0) {
              *local_8c = local_90[iVar3 >> 2];
            }
          }
          else {
            if (local_8c == local_88) {
              FUN_0063dc90(1);
            }
            if (local_8c != (void **)0x0) {
              *local_8c = (void *)0x45;
            }
          }
          local_8c = local_8c + 1;
          local_70 = (void *)0x46;
          if ((&local_70 < local_8c) && (local_90 <= &local_70)) {
            iVar3 = (int)&local_70 - (int)local_90;
            if (local_8c == local_88) {
              FUN_0063dc90(1);
            }
            if (local_8c != (void **)0x0) {
              *local_8c = local_90[iVar3 >> 2];
            }
          }
          else {
            if (local_8c == local_88) {
              FUN_0063dc90(1);
            }
            if (local_8c != (void **)0x0) {
              *local_8c = (void *)0x46;
            }
          }
          local_8c = local_8c + 1;
          local_74 = (void *)0x47;
          if ((&local_74 < local_8c) && (local_90 <= &local_74)) {
            iVar3 = (int)&local_74 - (int)local_90;
            if (local_8c == local_88) {
              FUN_0063dc90(1);
            }
            if (local_8c != (void **)0x0) {
              *local_8c = local_90[iVar3 >> 2];
            }
          }
          else {
            if (local_8c == local_88) {
              FUN_0063dc90(1);
            }
            if (local_8c != (void **)0x0) {
              *local_8c = (void *)0x47;
            }
          }
          local_8c = local_8c + 1;
          local_78 = (void *)0x57;
          if ((&local_78 < local_8c) && (local_90 <= &local_78)) {
            iVar3 = (int)&local_78 - (int)local_90;
            if (local_8c == local_88) {
              FUN_0063dc90(1);
            }
            if (local_8c != (void **)0x0) {
              *local_8c = local_90[iVar3 >> 2];
            }
          }
          else {
            if (local_8c == local_88) {
              FUN_0063dc90(1);
            }
            if (local_8c != (void **)0x0) {
              *local_8c = (void *)0x57;
            }
          }
          local_8c = local_8c + 1;
          local_7c = (void *)0x58;
          if ((&local_7c < local_8c) && (local_90 <= &local_7c)) {
            iVar3 = (int)&local_7c - (int)local_90;
            if (local_8c == local_88) {
              FUN_0063dc90(1);
            }
            if (local_8c != (void **)0x0) {
              *local_8c = local_90[iVar3 >> 2];
            }
          }
          else {
            if (local_8c == local_88) {
              FUN_0063dc90(1);
            }
            if (local_8c != (void **)0x0) {
              *local_8c = (void *)0x58;
            }
          }
          local_8c = local_8c + 1;
          param_4 = 100;
          FUN_0066add0(&param_4);
          param_4 = 0x5a;
          FUN_0066add0(&param_4);
          param_4 = 0x5b;
          FUN_0066add0(&param_4);
          param_4 = 0x5c;
          FUN_0066add0(&param_4);
          param_4 = 0x23;
          FUN_0066add0(&param_4);
          param_4 = 0x66;
          FUN_0066add0(&param_4);
          param_4 = 0x68;
          FUN_0066add0(&param_4);
          param_4 = 0x69;
          FUN_0066add0(&param_4);
          param_4 = 0x22;
          FUN_0066add0(&param_4);
          param_4 = 0x21;
          FUN_0066add0(&param_4);
          param_4 = 0x1e;
          FUN_0066add0(&param_4);
          param_4 = 0x1f;
          FUN_0066add0(&param_4);
          param_4 = 0x20;
          FUN_0066add0(&param_4);
          param_4 = 0x13;
          FUN_0066add0(&param_4);
          param_4 = 0x14;
          FUN_0066add0(&param_4);
          param_4 = 0x1a;
          FUN_0066add0(&param_4);
          param_4 = 0x1b;
          FUN_0066add0(&param_4);
          param_4 = 0x62;
          FUN_0066add0(&param_4);
          param_4 = 0x16;
          FUN_0066add0(&param_4);
          param_4 = 0x17;
          FUN_0066add0(&param_4);
          param_4 = 0x97;
        }
        FUN_0066add0(&param_4);
        goto LAB_005f6ce4;
      }
      local_34 = (void *)0x6a;
      if ((&local_34 < local_8c) && (local_90 <= &local_34)) {
        iVar3 = (int)&local_34 - (int)local_90;
        if (local_8c == local_88) {
          FUN_0063dc90(1);
        }
        if (local_8c != (void **)0x0) {
          *local_8c = local_90[iVar3 >> 2];
        }
      }
      else {
        if (local_8c == local_88) {
          FUN_0063dc90(1);
        }
        if (local_8c != (void **)0x0) {
          *local_8c = (void *)0x6a;
        }
      }
      local_8c = local_8c + 1;
      local_38 = (void *)0x39;
      if ((&local_38 < local_8c) && (local_90 <= &local_38)) {
        iVar3 = (int)&local_38 - (int)local_90;
        if (local_8c == local_88) {
          FUN_0063dc90(1);
        }
        if (local_8c != (void **)0x0) {
          *local_8c = local_90[iVar3 >> 2];
        }
      }
      else {
        if (local_8c == local_88) {
          FUN_0063dc90(1);
        }
        if (local_8c != (void **)0x0) {
          *local_8c = (void *)0x39;
        }
      }
      local_8c = local_8c + 1;
      local_3c = (void *)0x56;
      if ((&local_3c < local_8c) && (local_90 <= &local_3c)) {
        iVar3 = (int)&local_3c - (int)local_90;
        if (local_8c == local_88) {
          FUN_0063dc90(1);
        }
        if (local_8c != (void **)0x0) {
          *local_8c = local_90[iVar3 >> 2];
        }
      }
      else {
        if (local_8c == local_88) {
          FUN_0063dc90(1);
        }
        if (local_8c != (void **)0x0) {
          *local_8c = (void *)0x56;
        }
      }
      local_8c = local_8c + 1;
      ppvVar4 = local_44 + 1;
      local_44[1] = (void *)0x19;
      if ((local_8c <= ppvVar4) || (ppvVar4 < local_90)) {
        if (local_8c == local_88) {
          FUN_0063dc90(1);
        }
        if (local_8c != (void **)0x0) {
          *local_8c = (void *)0x19;
        }
        local_8c = local_8c + 1;
        goto LAB_005f6ce4;
      }
    }
    else {
      FUN_0063dc90(1);
      if (local_8c != (void **)0x0) {
        *local_8c = (void *)0x49;
      }
      local_8c = local_8c + 1;
      local_14[0] = (void *)0x52;
      if ((local_14 < local_8c) && (local_90 <= local_14)) {
        iVar3 = (int)local_14 - (int)local_90;
        if (local_8c == local_88) {
          FUN_0063dc90(1);
        }
        if (local_8c != (void **)0x0) {
          *local_8c = local_90[iVar3 >> 2];
        }
      }
      else {
        if (local_8c == local_88) {
          FUN_0063dc90(1);
        }
        if (local_8c != (void **)0x0) {
          *local_8c = (void *)0x52;
        }
      }
      local_8c = local_8c + 1;
      local_18 = (void *)0x55;
      if ((&local_18 < local_8c) && (local_90 <= &local_18)) {
        iVar3 = (int)&local_18 - (int)local_90;
        if (local_8c == local_88) {
          FUN_0063dc90(1);
        }
        if (local_8c != (void **)0x0) {
          *local_8c = local_90[iVar3 >> 2];
        }
      }
      else {
        if (local_8c == local_88) {
          FUN_0063dc90(1);
        }
        if (local_8c != (void **)0x0) {
          *local_8c = (void *)0x55;
        }
      }
      local_8c = local_8c + 1;
      local_1c = (void *)0x70;
      if ((&local_1c < local_8c) && (local_90 <= &local_1c)) {
        iVar3 = (int)&local_1c - (int)local_90;
        if (local_8c == local_88) {
          FUN_0063dc90(1);
        }
        if (local_8c != (void **)0x0) {
          *local_8c = local_90[iVar3 >> 2];
        }
      }
      else {
        if (local_8c == local_88) {
          FUN_0063dc90(1);
        }
        if (local_8c != (void **)0x0) {
          *local_8c = (void *)0x70;
        }
      }
      local_8c = local_8c + 1;
      local_20 = (void *)0x67;
      if ((&local_20 < local_8c) && (local_90 <= &local_20)) {
        iVar3 = (int)&local_20 - (int)local_90;
        if (local_8c == local_88) {
          FUN_0063dc90(1);
        }
        if (local_8c != (void **)0x0) {
          *local_8c = local_90[iVar3 >> 2];
        }
      }
      else {
        if (local_8c == local_88) {
          FUN_0063dc90(1);
        }
        if (local_8c != (void **)0x0) {
          *local_8c = (void *)0x67;
        }
      }
      local_8c = local_8c + 1;
      local_24 = (void *)0x3e;
      if ((&local_24 < local_8c) && (local_90 <= &local_24)) {
        iVar3 = (int)&local_24 - (int)local_90;
        if (local_8c == local_88) {
          FUN_0063dc90(1);
        }
        if (local_8c != (void **)0x0) {
          *local_8c = local_90[iVar3 >> 2];
        }
      }
      else {
        if (local_8c == local_88) {
          FUN_0063dc90(1);
        }
        if (local_8c != (void **)0x0) {
          *local_8c = (void *)0x3e;
        }
      }
      local_8c = local_8c + 1;
      ppvVar4 = local_2c + 1;
      local_2c[1] = (void *)0x6e;
      if ((local_8c <= ppvVar4) || (ppvVar4 < local_90)) {
        if (local_8c == local_88) {
          FUN_0063dc90(1);
        }
        if (local_8c != (void **)0x0) {
          *local_8c = (void *)0x6e;
        }
        local_8c = local_8c + 1;
        goto LAB_005f6ce4;
      }
    }
    iVar3 = (int)ppvVar4 - (int)local_90;
    if (local_8c == local_88) {
      FUN_0063dc90(1);
    }
    if (local_8c != (void **)0x0) {
      *local_8c = local_90[iVar3 >> 2];
    }
    local_8c = local_8c + 1;
  }
  else {
    param_4 = 2;
    FUN_0066add0(&param_4);
    param_4 = 4;
    FUN_0066add0(&param_4);
    param_4 = 7;
    FUN_0066add0(&param_4);
    param_4 = 9;
    FUN_0066add0(&param_4);
    param_4 = 0xb;
    FUN_0066add0(&param_4);
    param_4 = 0xf;
    FUN_0066add0(&param_4);
    param_4 = 0x33;
    FUN_0066add0(&param_4);
    param_4 = 0x30;
    FUN_0066add0(&param_4);
    param_4 = 0x4c;
    FUN_0066add0(&param_4);
  }
LAB_005f6ce4:
  if (local_90 == local_8c) {
    pvVar2 = (void *)0x3c;
  }
  else {
    iVar3 = (int)local_8c - (int)local_90;
    uVar1 = rand();
    pvVar2 = local_90[uVar1 % (uint)(iVar3 >> 2)];
  }
  local_14[3] = (void *)0xffffffff;
  if (local_90 == (void **)0x0) {
    ExceptionList = local_14[1];
    return pvVar2;
  }
  std::_Container_base0::_Orphan_all((_Container_base0 *)&local_90);
                    /* WARNING: Subroutine does not return */
  operator_delete(local_90);
}


/* FUN_005f6e20 @ 005f6e20  kind=gamemisc  attributed-by=caller-vote  size=1445 */

void FUN_005f6e20(undefined4 param_1,uint *param_2,uint param_3,int param_4)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  longlong lVar5;
  longlong lVar6;
  int iVar7;
  undefined4 extraout_EDX;
  undefined8 uVar8;
  undefined4 uVar9;
  undefined1 local_1a1;
  float local_1a0;
  int local_19c [2];
  undefined8 local_194;
  undefined8 local_18c;
  uint local_184;
  uint local_180;
  uint local_17c;
  undefined4 local_178;
  undefined4 local_174;
  undefined4 local_170;
  undefined1 local_16c;
  undefined4 local_168;
  undefined4 local_164;
  undefined8 local_15c;
  void *local_154;
  undefined4 local_150;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006f481b;
  local_10 = ExceptionList;
  local_14 = DAT_0076aa78 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  uVar9 = 0;
  local_16c = 1;
  local_168 = 0;
  local_164 = 0;
  local_15c = 0;
  FUN_0043c020(local_14);
  local_24 = 0xffffffff;
  local_20 = 0xffffffff;
  local_1c = 0xffffffff;
  local_18 = 0;
  local_8 = 0;
  uVar1 = param_2[3];
  uVar2 = *param_2;
  uVar3 = param_2[1];
  lVar5 = *(longlong *)param_2;
  uVar4 = param_2[2];
  lVar6 = *(longlong *)(param_2 + 2);
  local_184 = param_2[4];
  local_180 = param_2[5];
  local_17c = param_3;
  local_194._0_4_ = uVar2;
  local_194._4_4_ = uVar3;
  local_18c._0_4_ = uVar4;
  local_18c._4_4_ = uVar1;
  iVar7 = rand();
  if (iVar7 % 0x32 != 0) {
    iVar7 = rand();
    iVar7 = iVar7 % 3;
    if (iVar7 == 0) {
      if (param_4 == 3) {
        iVar7 = rand();
        local_19c[0] = iVar7 % 3 + 0x20;
      }
      else if (param_4 == 4) {
        iVar7 = rand();
        local_19c[0] = iVar7 % 3 + 0x26;
      }
      else if (param_4 == 5) {
        iVar7 = rand();
        local_19c[0] = iVar7 % 3 + 0x29;
      }
      else {
        iVar7 = rand();
        local_19c[0] = iVar7 % 3 + 0x23;
      }
      local_178 = 0x40000000;
      local_174 = 0x3f800000;
      local_170 = 0x3fc8f5c3;
      goto switchD_005f6f5b_default;
    }
    if (iVar7 == 1) {
      if (param_4 == 4) {
        local_19c[0] = 0xd;
      }
      else {
        local_19c[0] = (uint)(param_4 == 5) * 2 + 0xc;
      }
      local_178 = 0x40400000;
      local_174 = 0x40400000;
      local_170 = 0x3f800000;
      switch(param_3) {
      case 0:
        iVar7 = rand();
        local_1a0 = (float)iVar7 / 32767.0 + 1.0;
LAB_005f7076:
        local_1a0 = local_1a0 * 65536.0;
        uVar8 = FUN_0068d946();
        local_18c = CONCAT44((uVar1 - (int)((ulonglong)uVar8 >> 0x20)) - (uint)(uVar4 < (uint)uVar8)
                             ,uVar4 - (uint)uVar8);
        break;
      case 1:
        iVar7 = rand();
        local_1a0 = ((float)iVar7 / 32767.0 + 1.0) * 65536.0;
        local_194 = FUN_0068d946();
        local_194 = local_194 + lVar5;
        break;
      case 2:
        iVar7 = rand();
        local_1a0 = ((float)iVar7 / 32767.0 + 1.0) * 65536.0;
        local_18c = FUN_0068d946();
        local_18c = local_18c + lVar6;
        break;
      case 3:
        iVar7 = rand();
        local_1a0 = ((float)iVar7 / 32767.0 + 1.0) * 65536.0;
        uVar8 = FUN_0068d946();
        local_194 = CONCAT44((uVar3 - (int)((ulonglong)uVar8 >> 0x20)) - (uint)(uVar2 < (uint)uVar8)
                             ,uVar2 - (uint)uVar8);
      }
    }
    else {
      local_18c = CONCAT44(local_18c._4_4_,(uint)local_18c);
      local_194 = CONCAT44(local_194._4_4_,(uint)local_194);
      if (iVar7 != 2) goto switchD_005f6f5b_default;
      if (param_4 == 4) {
        local_19c[0] = 0xf;
      }
      else {
        local_19c[0] = (param_4 == 5) + 0x10;
      }
      local_178 = 0x3f800000;
      local_174 = 0x3f800000;
      local_170 = 0x3f000000;
      local_18c = CONCAT44(local_18c._4_4_,(uint)local_18c);
      local_194 = CONCAT44(local_194._4_4_,(uint)local_194);
      switch(param_3) {
      case 0:
        iVar7 = rand();
        local_1a0 = (float)iVar7 / 32767.0;
        goto LAB_005f7076;
      case 1:
        iVar7 = rand();
        local_1a0 = ((float)iVar7 / 32767.0) * 65536.0;
        local_194 = FUN_0068d946();
        local_194 = local_194 + lVar5;
        break;
      case 2:
        iVar7 = rand();
        local_1a0 = ((float)iVar7 / 32767.0) * 65536.0;
        local_18c = FUN_0068d946();
        local_18c = local_18c + lVar6;
        break;
      case 3:
        iVar7 = rand();
        local_1a0 = ((float)iVar7 / 32767.0) * 65536.0;
        uVar8 = FUN_0068d946();
        local_194 = CONCAT44((uVar3 - (int)((ulonglong)uVar8 >> 0x20)) - (uint)(uVar2 < (uint)uVar8)
                             ,uVar2 - (uint)uVar8);
      }
    }
    goto switchD_005f6f5b_default;
  }
  local_19c[0] = 10;
  local_178 = 0x3fc00000;
  local_174 = 0x3f800000;
  local_170 = 0x3f800000;
  local_17c = param_3 + 2 & 0x80000003;
  if ((int)local_17c < 0) {
    local_17c = (local_17c - 1 | 0xfffffffc) + 1;
  }
  local_18c = CONCAT44(local_18c._4_4_,(uint)local_18c);
  local_194 = CONCAT44(local_194._4_4_,(uint)local_194);
  switch(param_3) {
  case 0:
    goto LAB_005f6f68;
  case 1:
    local_194 = FUN_0068d946();
    local_194 = local_194 + lVar5;
    break;
  case 2:
LAB_005f6f68:
    local_18c = FUN_0068d946();
    local_18c = local_18c + lVar6;
    break;
  case 3:
    local_194 = FUN_0068d946();
    local_194 = local_194 + lVar5;
  }
switchD_005f6f5b_default:
  FUN_0058ea10(local_19c);
  if (local_154 == (void *)0x0) {
    ExceptionList = local_10;
    __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc,extraout_EDX,uVar9,param_1);
    return;
  }
  FUN_00639cf0(local_154,local_150,&local_1a1,local_1a0);
                    /* WARNING: Subroutine does not return */
  operator_delete(local_154);
}


/* FUN_005f77b0 @ 005f77b0  kind=gamemisc  attributed-by=caller-vote  size=100 */

undefined1 * FUN_005f77b0(undefined1 *param_1)

{
  int iVar1;
  
  *(undefined2 *)(param_1 + 0x10) = 1;
  param_1[1] = 0;
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined2 *)(param_1 + 0xc) = 0;
  param_1[0xe] = 0;
  *(undefined4 *)(param_1 + 0x114) = 0;
  memset(param_1 + 0x14,0,0x100);
  *param_1 = 0x19;
  iVar1 = rand();
  *(int *)(param_1 + 4) = iVar1 % 200;
  return param_1;
}


/* FUN_005f79e0 @ 005f79e0  kind=gamemisc  attributed-by=caller-vote  size=126 */

undefined1 * FUN_005f79e0(undefined1 *param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int in_ECX;
  
  *(undefined2 *)(param_1 + 0x10) = 1;
  param_1[1] = 0;
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined2 *)(param_1 + 0xc) = 0;
  param_1[0xe] = 0;
  *(undefined4 *)(param_1 + 0x114) = 0;
  memset(param_1 + 0x14,0,0x100);
  *param_1 = 0x14;
  iVar1 = *(int *)(in_ECX + 0x8c);
  iVar2 = *(int *)(in_ECX + 0x88);
  uVar3 = rand();
  param_1[1] = *(undefined1 *)(*(int *)(in_ECX + 0x88) + (uVar3 % (uint)(iVar1 - iVar2 >> 2)) * 4);
  return param_1;
}


/* FUN_005f8590 @ 005f8590  kind=gamemisc  attributed-by=caller-vote  size=311 */

uint FUN_005f8590(void)

{
  uint uVar1;
  uint in_stack_00000010;
  
  switch(in_stack_00000010) {
  case 0:
  case 1:
    in_stack_00000010 = rand();
    in_stack_00000010 = in_stack_00000010 & 0x80000001;
    if ((int)in_stack_00000010 < 0) {
      return (in_stack_00000010 - 1 | 0xfffffffe) + 1;
    }
    break;
  case 2:
  case 3:
    uVar1 = rand();
    uVar1 = uVar1 & 0x80000001;
    if ((int)uVar1 < 0) {
      uVar1 = (uVar1 - 1 | 0xfffffffe) + 1;
    }
    return uVar1 + 2;
  case 4:
  case 5:
    uVar1 = rand();
    uVar1 = uVar1 & 0x80000001;
    if ((int)uVar1 < 0) {
      uVar1 = (uVar1 - 1 | 0xfffffffe) + 1;
    }
    return uVar1 + 4;
  default:
    break;
  case 7:
  case 8:
    uVar1 = rand();
    uVar1 = uVar1 & 0x80000001;
    if ((int)uVar1 < 0) {
      uVar1 = (uVar1 - 1 | 0xfffffffe) + 1;
    }
    return uVar1 + 7;
  case 9:
  case 10:
    uVar1 = rand();
    uVar1 = uVar1 & 0x80000001;
    if ((int)uVar1 < 0) {
      uVar1 = (uVar1 - 1 | 0xfffffffe) + 1;
    }
    return uVar1 + 9;
  case 0xb:
  case 0xc:
    uVar1 = rand();
    uVar1 = uVar1 & 0x80000001;
    if ((int)uVar1 < 0) {
      uVar1 = (uVar1 - 1 | 0xfffffffe) + 1;
    }
    return uVar1 + 0xb;
  case 0xd:
  case 0xe:
    uVar1 = rand();
    uVar1 = uVar1 & 0x80000001;
    if ((int)uVar1 < 0) {
      uVar1 = (uVar1 - 1 | 0xfffffffe) + 1;
    }
    return uVar1 + 0xd;
  case 0xf:
  case 0x10:
    uVar1 = rand();
    uVar1 = uVar1 & 0x80000001;
    if ((int)uVar1 < 0) {
      uVar1 = (uVar1 - 1 | 0xfffffffe) + 1;
    }
    return uVar1 + 0xf;
  case 0x16:
  case 0x17:
    uVar1 = rand();
    uVar1 = uVar1 & 0x80000001;
    if ((int)uVar1 < 0) {
      uVar1 = (uVar1 - 1 | 0xfffffffe) + 1;
    }
    return uVar1 + 0x16;
  case 0x25:
  case 0x26:
  case 0x27:
  case 0x28:
    uVar1 = rand();
    uVar1 = uVar1 & 0x80000003;
    if ((int)uVar1 < 0) {
      uVar1 = (uVar1 - 1 | 0xfffffffc) + 1;
    }
    return uVar1 + 0x25;
  case 0x53:
  case 0x54:
    uVar1 = rand();
    uVar1 = uVar1 & 0x80000001;
    if ((int)uVar1 < 0) {
      uVar1 = (uVar1 - 1 | 0xfffffffe) + 1;
    }
    return uVar1 + 0x53;
  }
  return in_stack_00000010;
}


/* FUN_005f8750 @ 005f8750  kind=gamemisc  attributed-by=caller-vote  size=502 */

undefined2 * FUN_005f8750(undefined2 *param_1,undefined2 param_2)

{
  uint uVar1;
  int iVar2;
  bool bVar3;
  double dVar4;
  
  param_1[8] = 1;
  *param_1 = 0;
  *(undefined4 *)(param_1 + 2) = 0;
  *(undefined4 *)(param_1 + 4) = 0;
  param_1[6] = 0;
  *(undefined1 *)(param_1 + 7) = 0;
  *(undefined4 *)(param_1 + 0x8a) = 0;
  memset(param_1 + 10,0,0x100);
  uVar1 = rand();
  uVar1 = uVar1 & 0x80000001;
  bVar3 = uVar1 == 0;
  if ((int)uVar1 < 0) {
    bVar3 = (uVar1 - 1 | 0xfffffffe) == 0xffffffff;
  }
  if (!bVar3) {
    rand();
    dVar4 = 2.0;
    libm_sse2_pow_precise();
    iVar2 = rand();
    *(undefined1 *)param_1 = 0xc;
    *(undefined1 *)((int)param_1 + 0xd) = 10;
    param_1[8] = (short)(iVar2 % ((int)dVar4 * 2 + 2));
    return param_1;
  }
  param_1[8] = param_2;
  iVar2 = rand();
  if (iVar2 % 6 == 0) {
    iVar2 = rand();
    switch(iVar2 % 5) {
    case 0:
      param_1[8] = param_2;
      *param_1 = 0x101;
      return param_1;
    case 1:
      *param_1 = 0x401;
      param_1[8] = param_2;
    case 2:
      rand();
      dVar4 = 2.0;
      libm_sse2_pow_precise();
      iVar2 = rand();
      *(undefined1 *)param_1 = 0xc;
      *(undefined1 *)((int)param_1 + 0xd) = 0xc;
      param_1[8] = (short)(iVar2 % ((int)dVar4 * 2 + 2));
      return param_1;
    case 3:
      param_1[8] = param_2;
      *param_1 = 0x701;
      return param_1;
    case 4:
      *param_1 = 0x501;
      param_1[8] = param_2;
    }
  }
  else {
    uVar1 = rand();
    uVar1 = uVar1 & 0x80000001;
    if ((int)uVar1 < 0) {
      uVar1 = (uVar1 - 1 | 0xfffffffe) + 1;
    }
    if (uVar1 == 1) {
      *(undefined1 *)param_1 = 0x12;
      iVar2 = rand();
      *(undefined1 *)((int)param_1 + 0xd) = 0;
      *(int *)(param_1 + 2) = iVar2 % 3;
      return param_1;
    }
    if (uVar1 == 2) {
      param_1[8] = 1;
      *param_1 = 0xc0b;
      *(undefined1 *)((int)param_1 + 0xd) = 0x18;
      return param_1;
    }
  }
  return param_1;
}


/* FUN_005f8960 @ 005f8960  kind=gamemisc  attributed-by=caller-vote  size=341 */

int * FUN_005f8960(int *param_1,undefined4 param_2,int *param_3,int param_4)

{
  uint *puVar1;
  uint uVar2;
  int iVar3;
  bool bVar4;
  
  param_1[0xb] = 0x3f800000;
  param_1[0xc] = 0x3f800000;
  param_1[0xd] = 0x3f800000;
  param_1[0xe] = 2;
  param_1[2] = *param_3;
  param_1[3] = param_3[1];
  param_1[4] = param_3[2];
  param_1[5] = param_3[3];
  param_1[6] = param_3[4];
  param_1[7] = param_3[5];
  param_1[9] = param_4;
  param_1[8] = 0x3d800000;
  switch(param_2) {
  case 0:
    uVar2 = rand();
    uVar2 = uVar2 & 0x80000001;
    if ((int)uVar2 < 0) {
      uVar2 = (uVar2 - 1 | 0xfffffffe) + 1;
    }
    if (uVar2 == 0) {
      *param_1 = 0x32;
      puVar1 = (uint *)(param_1 + 6);
      uVar2 = *puVar1;
      *puVar1 = *puVar1 + 0x20000;
      param_1[7] = param_1[7] + (uint)(0xfffdffff < uVar2);
      return param_1;
    }
    if (uVar2 != 1) {
      return param_1;
    }
    break;
  case 1:
  case 2:
    iVar3 = rand();
    iVar3 = iVar3 % 3;
    if (iVar3 == 0) {
      *param_1 = 0x32;
      return param_1;
    }
    if (iVar3 != 1) {
      if (iVar3 != 2) {
        return param_1;
      }
      *param_1 = 0x34;
      param_1[0xe] = 1;
      param_1[0xb] = 0;
      param_1[0xc] = 0x3f000000;
      param_1[0xd] = 0x3dcccccd;
      return param_1;
    }
    *param_1 = 0x31;
    return param_1;
  case 3:
    *param_1 = 0x30;
    return param_1;
  case 4:
    uVar2 = rand();
    uVar2 = uVar2 & 0x80000001;
    bVar4 = uVar2 == 0;
    if ((int)uVar2 < 0) {
      bVar4 = (uVar2 - 1 | 0xfffffffe) == 0xffffffff;
    }
    if (!bVar4) {
      uVar2 = rand();
      uVar2 = uVar2 & 0x80000003;
      if ((int)uVar2 < 0) {
        uVar2 = (uVar2 - 1 | 0xfffffffc) + 1;
      }
      *param_1 = uVar2 + 0x2c;
      return param_1;
    }
    break;
  case 5:
    break;
  default:
    return param_1;
  }
  *param_1 = 0x36;
  param_1[0xe] = 1;
  param_1[0xb] = 0x3f4ccccd;
  param_1[0xc] = 0x3f333333;
  param_1[0xd] = 0x3e4ccccd;
  return param_1;
}


/* FUN_005f9e10 @ 005f9e10  kind=gamemisc  attributed-by=caller-vote  size=25 */

undefined4 FUN_005f9e10(void)

{
  uint uVar1;
  int in_ECX;
  bool bVar2;
  
  uVar1 = *(uint *)(in_ECX + 4) & 0x80000001;
  bVar2 = uVar1 == 0;
  if ((int)uVar1 < 0) {
    bVar2 = (uVar1 - 1 | 0xfffffffe) == 0xffffffff;
  }
  if (!bVar2) {
    return *(undefined4 *)(in_ECX + 0x10);
  }
  return *(undefined4 *)(in_ECX + 0xc);
}


/* FUN_005f9e30 @ 005f9e30  kind=gamemisc  attributed-by=caller-vote  size=25 */

undefined4 FUN_005f9e30(void)

{
  uint uVar1;
  int in_ECX;
  bool bVar2;
  
  uVar1 = *(uint *)(in_ECX + 4) & 0x80000001;
  bVar2 = uVar1 == 0;
  if ((int)uVar1 < 0) {
    bVar2 = (uVar1 - 1 | 0xfffffffe) == 0xffffffff;
  }
  if (!bVar2) {
    return *(undefined4 *)(in_ECX + 0xc);
  }
  return *(undefined4 *)(in_ECX + 0x10);
}


/* FUN_005fa170 @ 005fa170  kind=gamemisc  attributed-by=caller-vote  size=584 */

float * FUN_005fa170(float *param_1,int param_2,int param_3,int param_4)

{
  int in_ECX;
  float10 fVar1;
  float10 fVar2;
  float10 fVar3;
  float10 fVar4;
  float10 fVar5;
  double dVar6;
  double dVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  
  fVar1 = (float10)FUN_004c0ef0((double)param_3 * 0.01 + 98984.0,(double)param_4 * 0.3 + 8437.0);
  fVar2 = (float10)FUN_004c0ef0((double)param_2 * 0.01,(double)param_4 * 0.3);
  dVar7 = (double)param_2 * 0.005;
  dVar6 = (double)param_3 * 0.005;
  fVar3 = (float10)FUN_004c0ef0((double)*(int *)(in_ECX + 0x800234) + dVar7,
                                (double)*(int *)(in_ECX + 0x800238) + dVar6);
  fVar4 = (float10)FUN_004c0ef0((double)*(int *)(in_ECX + 0x80023c) + dVar7,
                                (double)*(int *)(in_ECX + 0x800240) + dVar6);
  fVar5 = (float10)FUN_004c0ef0((double)*(int *)(in_ECX + 0x800244) + dVar7,
                                (double)*(int *)(in_ECX + 0x800248) + dVar6);
  fVar8 = (((float)fVar1 + (float)fVar2) * 0.5 + 1.0) * 0.5 * 200.0 + 50.0;
  fVar9 = fVar8 + (float)fVar3 * 20.0;
  fVar10 = fVar8 + (float)fVar4 * 20.0;
  fVar8 = fVar8 + (float)fVar5 * 20.0;
  *param_1 = fVar9;
  param_1[1] = fVar10;
  param_1[2] = fVar8;
  if (0.0 <= fVar9) {
    if (255.0 < fVar9) {
      *param_1 = 255.0;
    }
  }
  else {
    *param_1 = 0.0;
  }
  if (fVar10 < 0.0) {
    param_1[1] = 0.0;
  }
  if (255.0 < param_1[1]) {
    param_1[1] = 255.0;
  }
  if (fVar8 < 0.0) {
    param_1[2] = 0.0;
  }
  if (255.0 < param_1[2]) {
    param_1[2] = 255.0;
  }
  return param_1;
}


/* FUN_005fa3c0 @ 005fa3c0  kind=gamemisc  attributed-by=caller-vote  size=115 */

void FUN_005fa3c0(int *param_1,int *param_2)

{
  int iVar1;
  uint uVar2;
  int in_ECX;
  
  uVar2 = *(uint *)(in_ECX + 4) & 0x80000003;
  if ((int)uVar2 < 0) {
    uVar2 = (uVar2 - 1 | 0xfffffffc) + 1;
  }
  if (uVar2 == 1) {
    iVar1 = *param_1;
    *param_1 = *param_2;
    *param_2 = iVar1;
    *param_1 = (*(int *)(in_ECX + 0xc) - *param_1) + -1;
  }
  else if (uVar2 == 2) {
    *param_1 = (*(int *)(in_ECX + 0xc) - *param_1) + -1;
    *param_2 = (*(int *)(in_ECX + 0x10) - *param_2) + -1;
  }
  else if (uVar2 == 3) {
    iVar1 = *param_1;
    *param_1 = *param_2;
    *param_2 = iVar1;
    *param_2 = (*(int *)(in_ECX + 0x10) - iVar1) + -1;
  }
  if (*(char *)(in_ECX + 8) != '\0') {
    *param_2 = (*(int *)(in_ECX + 0x10) - *param_2) + -1;
  }
  return;
}


/* FUN_005fa440 @ 005fa440  kind=gamemisc  attributed-by=caller-vote  size=123 */

void FUN_005fa440(int *param_1,int *param_2)

{
  int iVar1;
  uint uVar2;
  int in_ECX;
  
  if (*(char *)(in_ECX + 8) != '\0') {
    *param_2 = (*(int *)(in_ECX + 0x10) - *param_2) + -1;
  }
  uVar2 = *(uint *)(in_ECX + 4) & 0x80000003;
  if ((int)uVar2 < 0) {
    uVar2 = (uVar2 - 1 | 0xfffffffc) + 1;
  }
  if (uVar2 == 1) {
    iVar1 = *param_1;
    *param_1 = *param_2;
    *param_2 = iVar1;
    *param_2 = (*(int *)(in_ECX + 0x10) - iVar1) + -1;
  }
  else {
    if (uVar2 == 2) {
      *param_1 = (*(int *)(in_ECX + 0xc) - *param_1) + -1;
      *param_2 = (*(int *)(in_ECX + 0x10) - *param_2) + -1;
      return;
    }
    if (uVar2 == 3) {
      iVar1 = *param_1;
      *param_1 = *param_2;
      *param_2 = iVar1;
      *param_1 = (*(int *)(in_ECX + 0xc) - *param_1) + -1;
      return;
    }
  }
  return;
}


/* FUN_005fbc90 @ 005fbc90  kind=gamemisc  attributed-by=caller-vote  size=532 */

void __thiscall FUN_005fbc90(void *this)

{
  int iVar1;
  char cVar2;
  undefined4 uVar3;
  int iStack_f4;
  basic_iostream<char,std::char_traits<char>_> local_f0;
  basic_streambuf<char,std::char_traits<char>_> local_d8 [14];
  undefined4 local_a0;
  undefined4 local_9c;
  code *local_88;
  undefined4 local_40;
  void *local_3c;
  int local_38;
  undefined4 local_34;
  int local_30;
  void *local_2c [4];
  undefined4 local_1c;
  uint local_18;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006f4aa8;
  local_10 = ExceptionList;
  local_14 = DAT_0076aa78 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_40 = 0;
  FUN_00601f80(local_14);
  if (*(int *)(*(int *)((int)this + 0xac) + 0xa4) != 0) {
    local_f0.vbtablePtr =
         (basic_iostream<char,std::char_traits<char>_>_vbtable *)
         &std::basic_stringstream<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>::
          vbtable;
    local_f0.basic_ostream<char,std::char_traits<char>_>.vbtablePtr =
         (basic_ostream<char,std::char_traits<char>_>_vbtable *)&DAT_006fcd08;
    local_88 = _vftable__exref;
    local_8 = 0;
    local_40 = 1;
    std::basic_iostream<char,std::char_traits<char>_>::basic_iostream<char,std::char_traits<char>_>
              (&local_f0,(basic_streambuf<char,std::char_traits<char>_> *)local_d8);
    local_8 = 1;
                    /* inlined constructor or destructor (approx location) for
                       std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_> */
    *(basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_vftable **)
     ((int)&local_f0.vbtablePtr +
     (local_f0.vbtablePtr)->basic_ios<char,std::char_traits<char>_>_offset) =
         &std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>::vftable;
    *(int *)((int)&iStack_f4 + (local_f0.vbtablePtr)->basic_ios<char,std::char_traits<char>_>_offset
            ) = (local_f0.vbtablePtr)->basic_ios<char,std::char_traits<char>_>_offset + -0x68;
    std::basic_streambuf<char,std::char_traits<char>_>::
    basic_streambuf<char,std::char_traits<char>_>(local_d8);
                    /* inlined constructor or destructor (approx location) for
                       std::basic_stringbuf<char,std::char_traits<char>,std::allocator<char>_> */
    local_d8[0] = (basic_streambuf<char,std::char_traits<char>_>)
                  &std::basic_stringbuf<char,std::char_traits<char>,std::allocator<char>_>::vftable;
    local_a0 = 0;
    local_9c = 0;
    local_8 = 3;
    uVar3 = FUN_00449150(&local_f0.basic_ostream<char,std::char_traits<char>_>,"Save/map_",
                         *(int *)((int)this + 0xac) + 0x94,&DAT_00701e5c);
    uVar3 = FUN_00401ff0(uVar3);
    FUN_00449150(uVar3);
    uVar3 = FUN_0040e140(local_2c);
    local_8._0_1_ = 4;
    FUN_004497b0(uVar3);
    if (0xf < local_18) {
                    /* WARNING: Subroutine does not return */
      operator_delete(local_2c[0]);
    }
    local_3c = (void *)0x0;
    local_38 = 0;
    local_34 = 0;
    local_30 = 0;
    local_8._0_1_ = 5;
    local_18 = 0xf;
    local_1c = 0;
    local_2c[0] = (void *)((uint)local_2c[0] & 0xffffff00);
    FUN_0040c280("discovered",10);
    local_8 = CONCAT31(local_8._1_3_,6);
    cVar2 = FUN_004498d0(local_2c,&local_3c);
    if (0xf < local_18) {
                    /* WARNING: Subroutine does not return */
      operator_delete(local_2c[0]);
    }
    iVar1 = local_30;
    if (cVar2 != '\0') {
      iVar1 = local_38 - (int)local_3c;
      if (local_30 + 4 <= local_38 - (int)local_3c) {
        *(undefined4 *)((int)this + 0x8000bc) = *(undefined4 *)((int)local_3c + local_30);
        iVar1 = local_30 + 4;
      }
    }
    local_30 = iVar1;
    if (local_3c != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      operator_delete(local_3c);
    }
    FUN_00404420(&local_f0);
  }
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}


/* FUN_00601f80 @ 00601f80  kind=gamemisc  attributed-by=caller-vote  size=433 */

void FUN_00601f80(void)

{
  void *pvVar1;
  char cVar2;
  int iVar3;
  int in_ECX;
  undefined4 *puVar4;
  int *piVar5;
  int iVar6;
  int iVar7;
  void *local_44;
  undefined4 local_40;
  undefined4 local_3c;
  int local_38;
  int local_34;
  int local_30;
  void *local_2c [4];
  undefined4 local_1c;
  uint local_18;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006f4b20;
  local_10 = ExceptionList;
  local_14 = DAT_0076aa78 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_34 = in_ECX;
  cVar2 = FUN_004497a0(local_14);
  if (cVar2 != '\0') {
    local_44 = (void *)0x0;
    local_40 = 0;
    local_3c = 0;
    local_38 = 0;
    local_8 = 0;
    FUN_005870c0(4);
    *(undefined4 *)(local_38 + (int)local_44) = *(undefined4 *)(in_ECX + 0x8000bc);
    local_38 = local_38 + 4;
    local_18 = 0xf;
    local_1c = 0;
    local_2c[0] = (void *)((uint)local_2c[0] & 0xffffff00);
    FUN_0040c280("discovered",10);
    local_8 = CONCAT31(local_8._1_3_,1);
    FUN_004499c0(local_2c,&local_44);
    if (0xf < local_18) {
                    /* WARNING: Subroutine does not return */
      operator_delete(local_2c[0]);
    }
    local_8 = 0xffffffff;
    if (local_44 != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      operator_delete(local_44);
    }
  }
  *(undefined4 *)(local_34 + 0x8000bc) = 0;
  local_30 = 0;
  puVar4 = (undefined4 *)(local_34 + 0xb0);
  do {
    iVar6 = 0;
    do {
      pvVar1 = (void *)*puVar4;
      if (pvVar1 != (void *)0x0) {
        FUN_00605420(local_34,local_30,iVar6);
        _eh_vector_destructor_iterator_(pvVar1,0x34,0x1000,cube::ZoneTile::~ZoneTile);
                    /* WARNING: Subroutine does not return */
        operator_delete(pvVar1);
      }
      iVar6 = iVar6 + 1;
      puVar4 = puVar4 + 1;
    } while (iVar6 < 0x400);
    local_30 = local_30 + 1;
  } while (local_30 < 0x400);
  local_30 = 0;
  piVar5 = (int *)(&UNK_00400080.field_0x30 + local_34);
  iVar6 = local_34;
  do {
    iVar7 = 0;
    iVar3 = local_30;
    do {
      puVar4 = (undefined4 *)*piVar5;
      if (puVar4 != (undefined4 *)0x0) {
        FUN_006050b0(iVar6,iVar3,iVar7);
        (**(code **)*puVar4)(1);
        *piVar5 = 0;
        iVar3 = local_30;
        iVar6 = local_34;
      }
      iVar7 = iVar7 + 1;
      piVar5 = piVar5 + 1;
    } while (iVar7 < 0x400);
    local_30 = iVar3 + 1;
  } while (local_30 < 0x400);
  cVar2 = FUN_004497a0();
  if (cVar2 != '\0') {
    FUN_00449400();
  }
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}


/* FUN_006050b0 @ 006050b0  kind=gamemisc  attributed-by=caller-vote  size=845 */

void __thiscall FUN_006050b0(void *this,int param_2,int param_3)

{
  int iVar1;
  void *pvVar2;
  char cVar3;
  basic_ostream<char,std::char_traits<char>_> *pbVar4;
  basic_ostream<char,struct_std::char_traits<char>_> *pbVar5;
  undefined4 uVar6;
  int iVar7;
  int iVar8;
  int iStack_108;
  basic_iostream<char,std::char_traits<char>_> local_104;
  basic_streambuf<char,std::char_traits<char>_> local_ec [14];
  undefined4 local_b4;
  undefined4 local_b0;
  basic_ios<char,std::char_traits<char>_> local_9c [6];
  int local_54;
  int local_50;
  undefined4 local_4c;
  int local_48;
  int local_44;
  int local_40;
  void *local_3c;
  int local_38;
  undefined4 local_34;
  int local_30;
  void *local_2c [3];
  void *local_20;
  int iStack_1c;
  uint local_18;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006f4e30;
  local_10 = ExceptionList;
  local_14 = DAT_0076aa78 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_44 = param_2;
  local_40 = param_3;
  local_48 = 0;
  cVar3 = FUN_004497a0(local_14);
  if (((cVar3 != '\0') &&
      (iVar1 = *(int *)((int)this + (param_2 * 0x400 + local_40) * 4 + 0x4000b0), iVar1 != 0)) &&
     (*(int *)(iVar1 + 0x2c) != 0)) {
    local_104.vbtablePtr =
         (basic_iostream<char,std::char_traits<char>_>_vbtable *)
         &std::basic_stringstream<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>::
          vbtable;
    local_104.basic_ostream<char,std::char_traits<char>_>.vbtablePtr =
         (basic_ostream<char,std::char_traits<char>_>_vbtable *)&DAT_006fcd08;
    std::basic_ios<char,std::char_traits<char>_>::basic_ios<char,std::char_traits<char>_>(local_9c);
    local_8 = 0;
    local_48 = 1;
    std::basic_iostream<char,std::char_traits<char>_>::basic_iostream<char,std::char_traits<char>_>
              (&local_104,(basic_streambuf<char,std::char_traits<char>_> *)local_ec);
    local_8 = 1;
                    /* inlined constructor or destructor (approx location) for
                       std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_> */
    *(basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_vftable **)
     ((int)&local_104.vbtablePtr +
     (local_104.vbtablePtr)->basic_ios<char,std::char_traits<char>_>_offset) =
         &std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>::vftable;
    *(int *)((int)&iStack_108 +
            (local_104.vbtablePtr)->basic_ios<char,std::char_traits<char>_>_offset) =
         (local_104.vbtablePtr)->basic_ios<char,std::char_traits<char>_>_offset + -0x68;
    std::basic_streambuf<char,std::char_traits<char>_>::
    basic_streambuf<char,std::char_traits<char>_>(local_ec);
                    /* inlined constructor or destructor (approx location) for
                       std::basic_stringbuf<char,std::char_traits<char>,std::allocator<char>_> */
    local_ec[0] = (basic_streambuf<char,std::char_traits<char>_>)
                  &std::basic_stringbuf<char,std::char_traits<char>,std::allocator<char>_>::vftable;
    local_b4 = 0;
    local_b0 = 0;
    local_8 = 3;
    iVar7 = local_44;
    iVar8 = local_40;
    pbVar4 = (basic_ostream<char,std::char_traits<char>_> *)
             FUN_00449150(&local_104.basic_ostream<char,std::char_traits<char>_>,&DAT_0071e03c,
                          local_44,&DAT_0071c760);
    pbVar5 = std::basic_ostream<char,std::char_traits<char>_>::operator<<(pbVar4,iVar7);
    pbVar4 = (basic_ostream<char,std::char_traits<char>_> *)FUN_00449150(pbVar5);
    std::basic_ostream<char,std::char_traits<char>_>::operator<<(pbVar4,iVar8);
    local_3c = (void *)0x0;
    local_38 = 0;
    local_34 = 0;
    local_30 = 0;
    local_8._0_1_ = 4;
    FUN_005870c0(4);
    *(undefined4 *)((int)local_3c + local_30) = *(undefined4 *)((int)this + 0x8000f8);
    local_30 = local_30 + 4;
    FUN_005870c0((local_38 - (int)local_3c) + 8);
    *(undefined8 *)((int)local_3c + local_30) = *(undefined8 *)(iVar1 + 0x20);
    local_30 = local_30 + 8;
    FUN_005870c0((local_38 - (int)local_3c) + 1);
    *(undefined1 *)((int)local_3c + local_30) = *(undefined1 *)(iVar1 + 0x28);
    local_30 = local_30 + 1;
    iVar7 = *(int *)(iVar1 + 0x2c);
    local_44 = *(int *)(iVar7 + 0x4c);
    pvVar2 = *(void **)(iVar7 + 0x44);
    local_48 = *(int *)(iVar7 + 0x48);
    local_20 = pvVar2;
    iStack_1c = local_48;
    FUN_005870c0((local_38 - (int)local_3c) + 0xc);
    *(ulonglong *)((int)local_3c + local_30) = CONCAT44(iStack_1c,local_20);
    *(int *)((int)local_3c + local_30 + 8) = local_44;
    local_30 = local_30 + 0xc;
    if (((0 < (int)pvVar2) && (0 < local_48)) && (0 < local_44)) {
      FUN_005842d0((int)pvVar2 * local_48 * local_44 * 3);
      memcpy(local_20,*(void **)(*(int *)(iVar1 + 0x2c) + 0x30),iStack_1c - (int)local_20);
      local_54 = 0;
      local_50 = 0;
      local_4c = 0;
      local_8._0_1_ = 6;
      FUN_005fc0d0(&local_20,&local_54);
      iVar7 = local_54;
      local_40 = local_50 - local_54;
      FUN_0044e8d0(&local_40,4);
      FUN_0044e8d0(iVar7,local_40);
      FUN_005fb860();
      local_8._0_1_ = 4;
      FUN_005fb860();
    }
    FUN_005870c0((local_38 - (int)local_3c) + 0x1c);
    memcpy((void *)((int)local_3c + local_30),(void *)(iVar1 + 4),0x1c);
    local_30 = local_30 + 0x1c;
    uVar6 = FUN_0040e140(local_2c);
    local_8 = CONCAT31(local_8._1_3_,7);
    FUN_004499c0(uVar6,&local_3c);
    if (0xf < local_18) {
                    /* WARNING: Subroutine does not return */
      operator_delete(local_2c[0]);
    }
    if (local_3c != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      operator_delete(local_3c);
    }
    FUN_00404420(&local_104);
  }
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}


/* FUN_00605420 @ 00605420  kind=gamemisc  attributed-by=caller-vote  size=1295 */

void __thiscall FUN_00605420(void *this,int param_2,int param_3)

{
  char cVar1;
  basic_ostream<char,std::char_traits<char>_> *pbVar2;
  basic_ostream<char,struct_std::char_traits<char>_> *pbVar3;
  undefined4 uVar4;
  int iVar5;
  undefined8 *puVar6;
  int iVar7;
  int *piVar8;
  int iVar9;
  int iStack_100;
  basic_iostream<char,std::char_traits<char>_> local_fc;
  basic_streambuf<char,std::char_traits<char>_> local_e4 [2];
  undefined1 local_dc [8];
  undefined4 *local_d4;
  undefined4 *local_c4;
  undefined4 *local_b4;
  undefined4 local_ac;
  uint local_a8;
  basic_ios<char,std::char_traits<char>_> local_94 [6];
  int local_4c;
  undefined4 local_48;
  int local_44;
  int *local_40;
  void *local_3c;
  int local_38;
  undefined4 local_34;
  int local_30;
  void *local_2c [5];
  uint local_18;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006f4eb0;
  local_10 = ExceptionList;
  local_14 = DAT_0076aa78 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_44 = (int)this + 0x8000f0;
  local_4c = param_3;
  local_48 = 0;
  cVar1 = FUN_004497a0(local_14);
  if (cVar1 != '\0') {
    iVar7 = param_3 + 0x2c + param_2 * 0x400;
    piVar8 = (int *)((int)this + iVar7 * 4);
    local_40 = piVar8;
    if (*(int *)((int)this + iVar7 * 4) != 0) {
      local_fc.vbtablePtr =
           (basic_iostream<char,std::char_traits<char>_>_vbtable *)
           &std::basic_stringstream<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>::
            vbtable;
      local_fc.basic_ostream<char,std::char_traits<char>_>.vbtablePtr =
           (basic_ostream<char,std::char_traits<char>_>_vbtable *)&DAT_006fcd08;
      std::basic_ios<char,std::char_traits<char>_>::basic_ios<char,std::char_traits<char>_>
                (local_94);
      local_8 = 0;
      local_48 = 1;
      std::basic_iostream<char,std::char_traits<char>_>::
      basic_iostream<char,std::char_traits<char>_>
                (&local_fc,(basic_streambuf<char,std::char_traits<char>_> *)local_e4);
      local_8 = 1;
                    /* inlined constructor or destructor (approx location) for
                       std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_> */
      *(basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_vftable **)
       ((int)&local_fc.vbtablePtr +
       (local_fc.vbtablePtr)->basic_ios<char,std::char_traits<char>_>_offset) =
           &std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>::vftable;
      *(int *)((int)&iStack_100 +
              (local_fc.vbtablePtr)->basic_ios<char,std::char_traits<char>_>_offset) =
           (local_fc.vbtablePtr)->basic_ios<char,std::char_traits<char>_>_offset + -0x68;
      std::basic_streambuf<char,std::char_traits<char>_>::
      basic_streambuf<char,std::char_traits<char>_>(local_e4);
                    /* inlined constructor or destructor (approx location) for
                       std::basic_stringbuf<char,std::char_traits<char>,std::allocator<char>_> */
      local_e4[0] = (basic_streambuf<char,std::char_traits<char>_>)
                    &std::basic_stringbuf<char,std::char_traits<char>,std::allocator<char>_>::
                     vftable;
      local_ac = 0;
      local_a8 = 0;
      local_8 = 3;
      iVar7 = local_4c;
      pbVar2 = (basic_ostream<char,std::char_traits<char>_> *)
               FUN_00449150(&local_fc.basic_ostream<char,std::char_traits<char>_>,&DAT_0071e044,
                            param_2,&DAT_0071c760);
      pbVar3 = std::basic_ostream<char,std::char_traits<char>_>::operator<<(pbVar2,param_2);
      pbVar2 = (basic_ostream<char,std::char_traits<char>_> *)FUN_00449150(pbVar3);
      std::basic_ostream<char,std::char_traits<char>_>::operator<<(pbVar2,iVar7);
      local_3c = (void *)0x0;
      local_38 = 0;
      local_34 = 0;
      local_30 = 0;
      local_8 = CONCAT31(local_8._1_3_,4);
      FUN_005870c0(4);
      *(undefined4 *)((int)local_3c + local_30) = *(undefined4 *)((int)this + 0x8000f8);
      local_30 = local_30 + 4;
      iVar7 = 0;
      do {
        iVar5 = 0x40;
        do {
          iVar9 = *piVar8 + iVar7;
          FUN_005870c0((local_38 - (int)local_3c) + 1);
          *(undefined1 *)((int)local_3c + local_30) = *(undefined1 *)(iVar9 + 0x30);
          local_30 = local_30 + 1;
          FUN_005870c0((local_38 - (int)local_3c) + 1);
          *(undefined1 *)((int)local_3c + local_30) = *(undefined1 *)(iVar9 + 0x10);
          local_30 = local_30 + 1;
          FUN_005870c0((local_38 - (int)local_3c) + 1);
          *(undefined1 *)((int)local_3c + local_30) = *(undefined1 *)(iVar9 + 0x11);
          local_30 = local_30 + 1;
          FUN_005870c0((local_38 - (int)local_3c) + 1);
          *(undefined1 *)((int)local_3c + local_30) = *(undefined1 *)(iVar9 + 0x12);
          local_30 = local_30 + 1;
          FUN_005870c0((local_38 - (int)local_3c) + 1);
          *(undefined1 *)((int)local_3c + local_30) = *(undefined1 *)(iVar9 + 0x13);
          local_30 = local_30 + 1;
          FUN_005870c0((local_38 - (int)local_3c) + 4);
          *(undefined4 *)((int)local_3c + local_30) = *(undefined4 *)(iVar9 + 0x14);
          local_30 = local_30 + 4;
          FUN_005870c0((local_38 - (int)local_3c) + 4);
          *(undefined4 *)((int)local_3c + local_30) = *(undefined4 *)(iVar9 + 0x18);
          local_30 = local_30 + 4;
          FUN_005870c0((local_38 - (int)local_3c) + 1);
          *(undefined1 *)((int)local_3c + local_30) = *(undefined1 *)(iVar9 + 0x1c);
          local_30 = local_30 + 1;
          iVar7 = iVar7 + 0x34;
          iVar5 = iVar5 + -1;
          piVar8 = local_40;
        } while (iVar5 != 0);
      } while (iVar7 < 0x34000);
      iVar7 = 0x34000;
      do {
        iVar5 = 8;
        do {
          puVar6 = (undefined8 *)(*local_40 + iVar7);
          FUN_005870c0((local_38 - (int)local_3c) + 4);
          *(undefined4 *)((int)local_3c + local_30) = *(undefined4 *)(puVar6 + 3);
          local_30 = local_30 + 4;
          FUN_005870c0((local_38 - (int)local_3c) + 4);
          *(undefined4 *)((int)local_3c + local_30) = *(undefined4 *)((int)puVar6 + 0x1c);
          local_30 = local_30 + 4;
          FUN_005870c0((local_38 - (int)local_3c) + 4);
          *(undefined4 *)((int)local_3c + local_30) = *(undefined4 *)(puVar6 + 4);
          local_30 = local_30 + 4;
          FUN_005870c0((local_38 - (int)local_3c) + 4);
          *(undefined4 *)((int)local_3c + local_30) = *(undefined4 *)((int)puVar6 + 0x24);
          local_30 = local_30 + 4;
          FUN_005870c0((local_38 - (int)local_3c) + 4);
          *(undefined4 *)((int)local_3c + local_30) = *(undefined4 *)(puVar6 + 5);
          local_30 = local_30 + 4;
          FUN_005870c0((local_38 - (int)local_3c) + 4);
          *(undefined4 *)((int)local_3c + local_30) = *(undefined4 *)((int)puVar6 + 0x14);
          local_30 = local_30 + 4;
          FUN_005870c0((local_38 - (int)local_3c) + 0x10);
          *(undefined8 *)((int)local_3c + local_30) = *puVar6;
          *(undefined8 *)((int)local_3c + local_30 + 8) = puVar6[1];
          local_30 = local_30 + 0x10;
          FUN_005870c0((local_38 - (int)local_3c) + 4);
          iVar7 = iVar7 + 0x68;
          *(undefined4 *)((int)local_3c + local_30) = *(undefined4 *)(puVar6 + 2);
          local_30 = local_30 + 4;
          iVar5 = iVar5 + -1;
        } while (iVar5 != 0);
      } while (iVar7 < 0x35a00);
      uVar4 = FUN_0040e140(local_2c);
      local_8 = CONCAT31(local_8._1_3_,5);
      FUN_004499c0(uVar4,&local_3c);
      if (0xf < local_18) {
                    /* WARNING: Subroutine does not return */
        operator_delete(local_2c[0]);
      }
      if (local_3c != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
        operator_delete(local_3c);
      }
      local_8 = 0xffffffff;
      *(basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_vftable **)
       ((int)&local_fc.vbtablePtr +
       (local_fc.vbtablePtr)->basic_ios<char,std::char_traits<char>_>_offset) =
           &std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>::vftable;
      *(int *)((int)&iStack_100 +
              (local_fc.vbtablePtr)->basic_ios<char,std::char_traits<char>_>_offset) =
           (local_fc.vbtablePtr)->basic_ios<char,std::char_traits<char>_>_offset + -0x68;
      local_e4[0] = (basic_streambuf<char,std::char_traits<char>_>)
                    &std::basic_stringbuf<char,std::char_traits<char>,std::allocator<char>_>::
                     vftable;
      if ((local_a8 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
        operator_delete(*(void **)local_dc._4_4_);
      }
      std::basic_streambuf<char,std::char_traits<char>_>::setg
                (local_e4,(char *)0x0,(char *)0x0,(char *)0x0);
      *local_d4 = 0;
      *local_c4 = 0;
      *local_b4 = 0;
      local_a8 = local_a8 & 0xfffffffe;
      local_ac = 0;
      std::basic_streambuf<char,std::char_traits<char>_>::
      ~basic_streambuf<char,std::char_traits<char>_>(local_e4);
      std::basic_iostream<char,std::char_traits<char>_>::
      ~basic_iostream<char,std::char_traits<char>_>
                ((basic_iostream<char,std::char_traits<char>_> *)local_dc);
      std::basic_ios<char,std::char_traits<char>_>::~basic_ios<char,std::char_traits<char>_>
                (local_94);
    }
  }
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}


/* FUN_00609280 @ 00609280  kind=gamemisc  attributed-by=caller-vote  size=155 */

void FUN_00609280(int *param_1,uint *param_2)

{
  char cVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  int *in_ECX;
  undefined4 *puVar6;
  undefined4 *puVar7;
  
  puVar7 = (undefined4 *)*in_ECX;
  puVar4 = (undefined4 *)puVar7[1];
  cVar1 = *(char *)((int)puVar4 + 0xd);
  puVar3 = puVar7;
  puVar5 = puVar4;
  while (cVar1 == '\0') {
    iVar2 = puVar5[5];
    if (((int)param_2[1] < iVar2) || (((int)param_2[1] <= iVar2 && (*param_2 <= (uint)puVar5[4]))))
    {
      if ((*(char *)((int)puVar7 + 0xd) != '\0') &&
         (((int)param_2[1] <= iVar2 && (((int)param_2[1] < iVar2 || (*param_2 < (uint)puVar5[4])))))
         ) {
        puVar7 = puVar5;
      }
      puVar6 = (undefined4 *)*puVar5;
    }
    else {
      puVar6 = (undefined4 *)puVar5[2];
      puVar5 = puVar3;
    }
    puVar3 = puVar5;
    puVar5 = puVar6;
    cVar1 = *(char *)((int)puVar6 + 0xd);
  }
  if (*(char *)((int)puVar7 + 0xd) == '\0') {
    puVar4 = (undefined4 *)*puVar7;
  }
  if (*(char *)((int)puVar4 + 0xd) == '\0') {
    do {
      if (((int)puVar4[5] < (int)param_2[1]) ||
         (((int)puVar4[5] <= (int)param_2[1] && ((uint)puVar4[4] <= *param_2)))) {
        puVar5 = (undefined4 *)puVar4[2];
      }
      else {
        puVar5 = (undefined4 *)*puVar4;
        puVar7 = puVar4;
      }
      puVar4 = puVar5;
    } while (*(char *)((int)puVar5 + 0xd) == '\0');
  }
  *param_1 = (int)puVar3;
  param_1[1] = (int)puVar7;
  return;
}


/* FUN_0064aec0 @ 0064aec0  kind=gamemisc  attributed-by=caller-vote  size=112 */

void FUN_0064aec0(undefined4 *param_1)

{
  undefined4 *_Dst;
  undefined4 *_Src;
  undefined4 *in_ECX;
  
  _Dst = in_ECX + 1;
  *in_ECX = *param_1;
  _Src = param_1 + 1;
  in_ECX[6] = 0xf;
  in_ECX[5] = 0;
  *(undefined1 *)_Dst = 0;
  if ((uint)param_1[6] < 0x10) {
    if (param_1[5] + 1 != 0) {
      memmove(_Dst,_Src,param_1[5] + 1);
    }
  }
  else {
    *_Dst = *_Src;
    *_Src = 0;
  }
  in_ECX[5] = param_1[5];
  in_ECX[6] = param_1[6];
  param_1[6] = 0xf;
  param_1[5] = 0;
  *(undefined1 *)_Src = 0;
  return;
}


/* FUN_0064cd70 @ 0064cd70  kind=gamemisc  attributed-by=caller-vote  size=28 */

uint FUN_0064cd70(basic_istream<char,std::char_traits<char>_> *param_1)

{
  uint in_ECX;
  
  std::basic_istream<char,std::char_traits<char>_>::read
            (param_1,&stack0xfffffff8,(ulonglong)in_ECX << 0x20);
  return in_ECX;
}


/* FUN_0064e790 @ 0064e790  kind=gamemisc  attributed-by=caller-vote  size=31 */

void FUN_0064e790(char param_1)

{
  int in_ECX;
  
  if (param_1 != '\0') {
    *(uint *)(in_ECX + 0x128) = *(uint *)(in_ECX + 0x128) | 8;
    return;
  }
  *(uint *)(in_ECX + 0x128) = *(uint *)(in_ECX + 0x128) & 0xfffffff7;
  return;
}


/* FUN_0064e7b0 @ 0064e7b0  kind=gamemisc  attributed-by=caller-vote  size=31 */

void FUN_0064e7b0(char param_1)

{
  int in_ECX;
  
  if (param_1 != '\0') {
    *(uint *)(in_ECX + 0x128) = *(uint *)(in_ECX + 0x128) | 4;
    return;
  }
  *(uint *)(in_ECX + 0x128) = *(uint *)(in_ECX + 0x128) & 0xfffffffb;
  return;
}


/* FUN_00650a20 @ 00650a20  kind=gamemisc  attributed-by=caller-vote  size=99 */

void FUN_00650a20(undefined8 *param_1,basic_istream<char,std::char_traits<char>_> *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  uint unaff_EDI;
  undefined8 local_20;
  uint local_8;
  
  std::basic_istream<char,std::char_traits<char>_>::read
            (param_2,(char *)&local_8,(ulonglong)unaff_EDI << 0x20);
  puVar3 = (undefined8 *)std::basic_istream<char,std::char_traits<char>_>::tellg(param_2);
  uVar1 = puVar3[1];
  uVar2 = puVar3[2];
  local_20._0_4_ = (uint)*puVar3;
  local_20._4_4_ = (int)((ulonglong)*puVar3 >> 0x20);
  local_20 = CONCAT44(local_20._4_4_ + ((int)local_8 >> 0x1f) + (uint)CARRY4((uint)local_20,local_8)
                      ,(uint)local_20 + local_8);
  *param_1 = local_20;
  param_1[1] = uVar1;
  param_1[2] = uVar2;
  return;
}


/* FUN_0065a110 @ 0065a110  kind=gamemisc  attributed-by=caller-vote  size=58 */

int FUN_0065a110(undefined4 *param_1)

{
  int iVar1;
  
  iVar1 = FUN_0046d910();
  *(undefined2 *)(iVar1 + 0xc) = 0;
  if ((undefined4 *)(iVar1 + 0x10) != (undefined4 *)0x0) {
    *(undefined4 *)(iVar1 + 0x10) = *param_1;
    *(undefined4 *)(iVar1 + 0x14) = param_1[1];
    *(undefined4 *)(iVar1 + 0x18) = param_1[2];
    *(undefined4 *)(iVar1 + 0x1c) = param_1[3];
  }
  return iVar1;
}


/* FUN_00681220 @ 00681220  kind=gamemisc  attributed-by=caller-vote  size=28 */

uint FUN_00681220(void)

{
  uint in_ECX;
  
  std::basic_istream<char,std::char_traits<char>_>::read
            (*(basic_istream<char,std::char_traits<char>_> **)(in_ECX + 8),&stack0xfffffff8,
             (ulonglong)in_ECX << 0x20);
  return in_ECX;
}


/* FUN_00687ad0 @ 00687ad0  kind=gamemisc  attributed-by=caller-vote  size=56 */

void FUN_00687ad0(undefined4 *param_1)

{
  int in_ECX;
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  
  puVar2 = param_1;
  puVar3 = (undefined4 *)(in_ECX + 0xa8);
  for (iVar1 = 0x10; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  puVar2 = (undefined4 *)(in_ECX + 0xe8);
  for (iVar1 = 0x10; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = *param_1;
    param_1 = param_1 + 1;
    puVar2 = puVar2 + 1;
  }
  FUN_0058c440();
  return;
}


/* FUN_00688180 @ 00688180  kind=gamemisc  attributed-by=caller-vote  size=158 */

void FUN_00688180(void)

{
  int iVar1;
  undefined8 *puVar2;
  int iVar3;
  int *in_ECX;
  uint unaff_EDI;
  uint local_20;
  int iStack_1c;
  undefined8 local_18;
  undefined8 local_10;
  uint local_8;
  
  std::basic_istream<char,std::char_traits<char>_>::read
            ((basic_istream<char,std::char_traits<char>_> *)in_ECX[2],(char *)&local_8,
             (ulonglong)unaff_EDI << 0x20);
  puVar2 = (undefined8 *)
           std::basic_istream<char,std::char_traits<char>_>::tellg
                     ((basic_istream<char,std::char_traits<char>_> *)in_ECX[2]);
  local_18 = puVar2[1];
  local_10 = puVar2[2];
  local_20 = (uint)*puVar2;
  iStack_1c = (int)((ulonglong)*puVar2 >> 0x20);
  iVar1 = *in_ECX;
  _local_20 = CONCAT44(iStack_1c + ((int)local_8 >> 0x1f) + (uint)CARRY4(local_20,local_8),
                       local_20 + local_8);
  iVar3 = FUN_00451d00(iVar1,*(undefined4 *)(iVar1 + 4),&local_20);
  if (in_ECX[1] == 0x7fffffe) {
                    /* WARNING: Subroutine does not return */
    std::_Xlength_error("list<T> too long");
  }
  in_ECX[1] = in_ECX[1] + 1;
  *(int *)(iVar1 + 4) = iVar3;
  **(int **)(iVar3 + 4) = iVar3;
  return;
}


/* FUN_00688490 @ 00688490  kind=gamemisc  attributed-by=caller-vote  size=119 */

uint FUN_00688490(void)

{
  basic_istream<char,std::char_traits<char>_> *this;
  int iVar1;
  int *piVar2;
  int *piVar3;
  uint *puVar4;
  uint uVar5;
  int *in_ECX;
  
  this = (basic_istream<char,std::char_traits<char>_> *)in_ECX[2];
  if ((*(byte *)((int)&this[3].vbtablePtr +
                this->vbtablePtr->basic_ios<char,std::char_traits<char>_>_offset) & 1) == 0) {
    iVar1 = *(int *)(*in_ECX + 4);
    puVar4 = (uint *)std::basic_istream<char,std::char_traits<char>_>::tellg(this);
    uVar5 = *(uint *)(iVar1 + 0x10) + *(uint *)(iVar1 + 8);
    if ((puVar4[2] + *puVar4 != uVar5) ||
       (puVar4[3] + puVar4[1] + (uint)CARRY4(puVar4[2],*puVar4) !=
        *(int *)(iVar1 + 0x14) + *(int *)(iVar1 + 0xc) +
        (uint)CARRY4(*(uint *)(iVar1 + 0x10),*(uint *)(iVar1 + 8)))) {
      return uVar5 & 0xffffff00;
    }
  }
  piVar2 = (int *)*in_ECX;
  piVar3 = (int *)piVar2[1];
  if (piVar3 != piVar2) {
    *(int *)piVar3[1] = *piVar3;
    *(int *)(*piVar3 + 4) = piVar3[1];
                    /* WARNING: Subroutine does not return */
    operator_delete(piVar3);
  }
  return CONCAT31((int3)((uint)piVar2 >> 8),1);
}


/* FUN_00688510 @ 00688510  kind=gamemisc  attributed-by=caller-vote  size=247 */

void FUN_00688510(undefined1 *param_1)

{
  char cVar1;
  char *pcVar2;
  int in_ECX;
  int iVar3;
  char *pcVar4;
  undefined4 extraout_EDX;
  uint unaff_ESI;
  undefined4 unaff_EDI;
  undefined4 uVar5;
  int local_28;
  int local_24;
  void *local_20 [4];
  undefined4 local_10;
  uint local_c;
  uint local_8;
  
  local_8 = DAT_0076aa78 ^ (uint)&stack0xfffffffc;
  uVar5 = 0;
  local_24 = in_ECX;
  std::basic_istream<char,std::char_traits<char>_>::read
            (*(basic_istream<char,std::char_traits<char>_> **)(in_ECX + 8),(char *)&local_28,
             (ulonglong)unaff_ESI << 0x20);
  if (local_28 == 0) {
    *(undefined4 *)(param_1 + 0x14) = 0xf;
    *(undefined4 *)(param_1 + 0x10) = 0;
    *param_1 = 0;
    FUN_0040c280(&DAT_006fc918,0);
    __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc,extraout_EDX,uVar5);
    return;
  }
  pcVar2 = (char *)FUN_0068d652(local_28 + 1);
  pcVar2[local_28] = '\0';
  std::basic_istream<char,std::char_traits<char>_>::read
            (*(basic_istream<char,std::char_traits<char>_> **)(local_24 + 8),pcVar2,
             CONCAT44(unaff_EDI,local_28 >> 0x1f));
  local_c = 0xf;
  local_10 = 0;
  local_20[0] = (void *)((uint)local_20[0] & 0xffffff00);
  if (*pcVar2 == '\0') {
    iVar3 = 0;
  }
  else {
    pcVar4 = pcVar2;
    do {
      cVar1 = *pcVar4;
      pcVar4 = pcVar4 + 1;
    } while (cVar1 != '\0');
    iVar3 = (int)pcVar4 - (int)(pcVar2 + 1);
  }
  FUN_0040c280(pcVar2,iVar3);
  operator_delete__(pcVar2);
  FUN_004032e0(local_20);
  if (0xf < local_c) {
                    /* WARNING: Subroutine does not return */
    operator_delete(local_20[0]);
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


/* FUN_00688610 @ 00688610  kind=gamemisc  attributed-by=caller-vote  size=209 */

void FUN_00688610(void)

{
  longlong lVar1;
  char *pcVar2;
  int in_ECX;
  undefined4 extraout_EDX;
  undefined4 unaff_ESI;
  uint unaff_EDI;
  undefined4 uVar3;
  int local_28;
  int local_24;
  void *local_20 [5];
  uint local_c;
  uint local_8;
  
  local_8 = DAT_0076aa78 ^ (uint)&stack0xfffffffc;
  uVar3 = 0;
  local_24 = in_ECX;
  std::basic_istream<char,std::char_traits<char>_>::read
            (*(basic_istream<char,std::char_traits<char>_> **)(in_ECX + 8),(char *)&local_28,
             (ulonglong)unaff_EDI << 0x20);
  if (local_28 == 0) {
    FUN_0040eb60(&PTR_006fccac);
    __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc,extraout_EDX,uVar3);
    return;
  }
  lVar1 = (ulonglong)(local_28 + 1) * 2;
  pcVar2 = (char *)FUN_0068d652(-(uint)((int)((ulonglong)lVar1 >> 0x20) != 0) | (uint)lVar1);
  (pcVar2 + local_28 * 2)[0] = '\0';
  (pcVar2 + local_28 * 2)[1] = '\0';
  std::basic_istream<char,std::char_traits<char>_>::read
            (*(basic_istream<char,std::char_traits<char>_> **)(local_24 + 8),pcVar2,
             CONCAT44(unaff_ESI,local_28 * 2 >> 0x1f));
  FUN_0040eb60(pcVar2);
  operator_delete__(pcVar2);
  FUN_0040eaf0(local_20);
  if (7 < local_c) {
                    /* WARNING: Subroutine does not return */
    operator_delete(local_20[0]);
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


