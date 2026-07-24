// Unsorted_003 (game_misc) -- cube. 150 functions. Bodies = Ghidra pseudo-C.
// Attribution: see ../attribution.tsv. Toolchain of the original: MSVC 11.0 (VS2012).
#include "Unsorted_003.h"

/* FUN_0063ea00 @ 0063ea00  kind=gamemisc  attributed-by=none  size=1307 */

void FUN_0063ea00(int param_1,int param_2,float param_3,int param_4)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  int in_ECX;
  float *pfVar4;
  float *pfVar5;
  undefined4 *puVar6;
  float fVar7;
  double dVar8;
  float fVar9;
  undefined1 auStack_60 [4];
  float local_5c;
  float local_58;
  float local_54;
  float local_50;
  int local_4c;
  float local_48;
  float local_44;
  float local_40;
  float local_3c;
  float local_38;
  float local_34 [3];
  float local_28;
  float local_24;
  float local_20;
  float local_1c [4];
  uint local_c;
  
  local_c = DAT_0076aa78 ^ (uint)auStack_60;
  iVar1 = *(int *)(in_ECX + 0xbcc);
  local_54 = (float)(param_1 * 0xc);
  local_58 = (float)((param_2 + 2U) %
                    (uint)(*(int *)(iVar1 + 4 + (int)local_54) - *(int *)(iVar1 + (int)local_54) >>
                          3));
  iVar1 = *(int *)(iVar1 + (int)local_54);
  local_50 = 1.0 - param_3;
  iVar2 = *(int *)((int)local_54 + *(int *)(in_ECX + 0xbe4));
  local_44 = (*(float *)(iVar1 + 0xc + param_2 * 8) + *(float *)(iVar1 + 4 + param_2 * 8)) *
             local_50 * 0.5 +
             (*(float *)(iVar1 + 0xc + (int)local_58 * 8) +
             *(float *)(iVar1 + 4 + (int)local_58 * 8)) * param_3 * 0.5;
  local_40 = (*(float *)(iVar1 + param_2 * 8) + *(float *)(iVar1 + 8 + param_2 * 8)) *
             local_50 * 0.5 +
             (*(float *)(iVar1 + (int)local_58 * 8) + *(float *)(iVar1 + 8 + (int)local_58 * 8)) *
             param_3 * 0.5;
  local_48 = (*(float *)(iVar1 + 4 + param_2 * 8) * local_50 +
             *(float *)(iVar1 + 4 + (int)local_58 * 8) * param_3) - local_44;
  local_24 = (*(float *)(iVar1 + param_2 * 8) * local_50 +
             *(float *)(iVar1 + (int)local_58 * 8) * param_3) - local_40;
  local_34[0] = *(float *)(iVar2 + (int)local_58 * 8) * param_3 +
                local_50 * *(float *)(iVar2 + param_2 * 8);
  local_3c = -local_24;
  dVar8 = (double)(local_3c * local_3c + local_48 * local_48);
  local_4c = in_ECX;
  local_34[2] = local_48;
  libm_sse2_sqrt_precise();
  fVar7 = (*(float *)(iVar1 + 0xc + param_2 * 8) + *(float *)(iVar1 + 4 + param_2 * 8)) * 0.5 -
          (*(float *)(iVar1 + 0xc + (int)local_58 * 8) + *(float *)(iVar1 + 4 + (int)local_58 * 8))
          * 0.5;
  fVar9 = (*(float *)(iVar1 + param_2 * 8) + *(float *)(iVar1 + 8 + param_2 * 8)) * 0.5 -
          (*(float *)(iVar1 + (int)local_58 * 8) + *(float *)(iVar1 + 8 + (int)local_58 * 8)) * 0.5;
  local_5c = (*(float *)(iVar2 + (int)local_58 * 8) - *(float *)(iVar2 + param_2 * 8)) *
             (float)dVar8;
  dVar8 = (double)(fVar9 * fVar9 + fVar7 * fVar7);
  libm_sse2_sqrt_precise();
  iVar1 = local_4c;
  local_5c = -(local_5c / (float)dVar8);
  if (param_4 != 0) {
    local_34[2] = local_48 * -1.0;
    local_5c = -local_5c;
    local_3c = local_3c * -1.0;
  }
  iVar2 = *(int *)((int)local_54 + *(int *)(local_4c + 0xbd8));
  pfVar4 = (float *)((int)local_58 * 0x10 + iVar2);
  pfVar5 = (float *)(param_2 * 0x10 + iVar2);
  local_58 = *pfVar4 * param_3 + local_50 * *pfVar5;
  local_40 = local_40 + local_34[2];
  local_54 = pfVar4[1] * param_3 + local_50 * pfVar5[1];
  local_44 = local_44 + local_3c;
  local_34[2] = local_40 + local_24;
  local_38 = pfVar4[2] * param_3 + local_50 * pfVar5[2];
  local_50 = local_50 * pfVar5[3] + pfVar4[3] * param_3;
  local_28 = local_44 + local_48;
  local_1c[0] = local_58;
  local_1c[1] = local_54;
  local_1c[2] = local_38;
  local_1c[3] = local_50;
  FUN_00642590(local_34 + 2);
  local_24 = local_40 - local_24;
  local_20 = local_44 - local_48;
  FUN_00642590(&local_24);
  iVar2 = *(int *)(iVar1 + 0xc14);
  pfVar4 = *(float **)(iVar2 + 0x20);
  if (local_1c < pfVar4) {
    pfVar5 = *(float **)(iVar2 + 0x1c);
    if (local_1c < pfVar5) goto LAB_0063edcc;
    if (pfVar4 == *(float **)(iVar2 + 0x24)) {
      FUN_00428d00(1);
    }
    puVar3 = *(undefined4 **)(iVar2 + 0x20);
    puVar6 = (undefined4 *)(((int)local_1c - (int)pfVar5 & 0xfffffff0U) + *(int *)(iVar2 + 0x1c));
    if (puVar3 != (undefined4 *)0x0) {
      *puVar3 = *puVar6;
      puVar3[1] = puVar6[1];
      puVar3[2] = puVar6[2];
      puVar3[3] = puVar6[3];
    }
  }
  else {
LAB_0063edcc:
    if (pfVar4 == *(float **)(iVar2 + 0x24)) {
      FUN_00428d00(1);
    }
    pfVar4 = *(float **)(iVar2 + 0x20);
    local_4c = iVar1;
    if (pfVar4 != (float *)0x0) {
      *pfVar4 = local_58;
      pfVar4[1] = local_54;
      pfVar4[2] = local_38;
      pfVar4[3] = local_50;
    }
  }
  *(int *)(iVar2 + 0x20) = *(int *)(iVar2 + 0x20) + 0x10;
  iVar1 = *(int *)(local_4c + 0xc14);
  pfVar4 = *(float **)(iVar1 + 0x20);
  if (local_1c < pfVar4) {
    pfVar5 = *(float **)(iVar1 + 0x1c);
    if (pfVar5 <= local_1c) {
      if (pfVar4 == *(float **)(iVar1 + 0x24)) {
        FUN_00428d00(1);
      }
      puVar3 = *(undefined4 **)(iVar1 + 0x20);
      puVar6 = (undefined4 *)(((int)local_1c - (int)pfVar5 & 0xfffffff0U) + *(int *)(iVar1 + 0x1c));
      if (puVar3 != (undefined4 *)0x0) {
        *puVar3 = *puVar6;
        puVar3[1] = puVar6[1];
        puVar3[2] = puVar6[2];
        puVar3[3] = puVar6[3];
      }
      goto LAB_0063eeaa;
    }
  }
  if (pfVar4 == *(float **)(iVar1 + 0x24)) {
    FUN_00428d00(1);
  }
  pfVar4 = *(float **)(iVar1 + 0x20);
  if (pfVar4 != (float *)0x0) {
    *pfVar4 = local_58;
    pfVar4[1] = local_54;
    pfVar4[2] = local_38;
    pfVar4[3] = local_50;
  }
LAB_0063eeaa:
  local_5c = local_5c + local_34[0];
  *(int *)(iVar1 + 0x20) = *(int *)(iVar1 + 0x20) + 0x10;
  local_34[1] = 0.0;
  local_34[0] = local_5c;
  FUN_00642590(local_34);
  local_34[0] = local_5c;
  local_34[1] = 1.0;
  FUN_00642590(local_34);
  __security_check_cookie(local_c ^ (uint)auStack_60);
  return;
}


/* FUN_0063ef20 @ 0063ef20  kind=gamemisc  attributed-by=none  size=1168 */

void FUN_0063ef20(int param_1,int param_2,float param_3)

{
  int iVar1;
  int iVar2;
  float *pfVar3;
  float *pfVar4;
  undefined4 *puVar5;
  int in_ECX;
  uint uVar6;
  int iVar7;
  undefined4 *puVar8;
  int iVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float local_38;
  float local_34;
  float local_30;
  float local_2c;
  float local_28 [4];
  float local_18;
  float local_14;
  float local_10;
  float local_c;
  uint local_8;
  
  local_8 = DAT_0076aa78 ^ (uint)&stack0xfffffffc;
  param_1 = param_1 * 0xc;
  iVar1 = *(int *)(in_ECX + 0xbcc);
  uVar6 = (param_2 + 2U) % (uint)(*(int *)(param_1 + 4 + iVar1) - *(int *)(param_1 + iVar1) >> 3);
  iVar2 = *(int *)(param_1 + iVar1);
  fVar11 = 1.0 - param_3;
  iVar9 = param_2 * 8;
  iVar1 = uVar6 * 8;
  local_10 = *(float *)(iVar9 + iVar2) * fVar11 + *(float *)(iVar1 + iVar2) * param_3;
  local_c = *(float *)(iVar9 + 4 + iVar2) * fVar11 + *(float *)(iVar1 + 4 + iVar2) * param_3;
  local_14 = (float)iVar9;
  FUN_00642590(&local_10);
  iVar2 = *(int *)(param_1 + *(int *)(in_ECX + 0xbcc));
  local_10 = *(float *)(iVar9 + 8 + iVar2) * fVar11 + *(float *)(iVar2 + 8 + iVar1) * param_3;
  local_c = *(float *)(iVar9 + 0xc + iVar2) * fVar11 + *(float *)(iVar2 + 0xc + iVar1) * param_3;
  FUN_00642590(&local_10);
  iVar2 = *(int *)(param_1 + *(int *)(in_ECX + 0xbd8));
  iVar7 = uVar6 * 0x10;
  param_2 = param_2 * 0x10;
  iVar9 = *(int *)(in_ECX + 0xc14);
  pfVar3 = *(float **)(iVar9 + 0x20);
  fVar12 = fVar11 * *(float *)(param_2 + iVar2) + *(float *)(iVar7 + iVar2) * param_3;
  local_2c = fVar11 * *(float *)(param_2 + 0xc + iVar2) + *(float *)(iVar7 + 0xc + iVar2) * param_3;
  fVar13 = fVar11 * *(float *)(param_2 + 4 + iVar2) + *(float *)(iVar7 + 4 + iVar2) * param_3;
  fVar10 = fVar11 * *(float *)(param_2 + 8 + iVar2) + *(float *)(iVar7 + 8 + iVar2) * param_3;
  local_38 = fVar12;
  local_34 = fVar13;
  local_30 = fVar10;
  local_c = local_2c;
  if ((&local_38 < pfVar3) && (pfVar4 = *(float **)(iVar9 + 0x1c), pfVar4 <= &local_38)) {
    if (pfVar3 == *(float **)(iVar9 + 0x24)) {
      FUN_00428d00(1);
    }
    puVar5 = *(undefined4 **)(iVar9 + 0x20);
    puVar8 = (undefined4 *)(((int)&local_38 - (int)pfVar4 & 0xfffffff0U) + *(int *)(iVar9 + 0x1c));
    if (puVar5 != (undefined4 *)0x0) {
      *puVar5 = *puVar8;
      puVar5[1] = puVar8[1];
      puVar5[2] = puVar8[2];
      puVar5[3] = puVar8[3];
    }
  }
  else {
    if (pfVar3 == *(float **)(iVar9 + 0x24)) {
      FUN_00428d00(1);
    }
    pfVar3 = *(float **)(iVar9 + 0x20);
    if (pfVar3 != (float *)0x0) {
      pfVar3[2] = fVar10;
      *pfVar3 = fVar12;
      pfVar3[1] = fVar13;
      pfVar3[3] = local_c;
    }
  }
  *(int *)(iVar9 + 0x20) = *(int *)(iVar9 + 0x20) + 0x10;
  iVar2 = *(int *)(param_1 + *(int *)(in_ECX + 0xbd8));
  iVar9 = *(int *)(in_ECX + 0xc14);
  local_28[0] = fVar11 * *(float *)(param_2 + 0x10 + iVar2) +
                *(float *)(iVar7 + 0x10 + iVar2) * param_3;
  fVar13 = fVar11 * *(float *)(param_2 + 0x14 + iVar2) + *(float *)(iVar7 + 0x14 + iVar2) * param_3;
  pfVar3 = *(float **)(iVar9 + 0x20);
  fVar10 = fVar11 * *(float *)(param_2 + 0x18 + iVar2) + *(float *)(iVar7 + 0x18 + iVar2) * param_3;
  fVar12 = fVar11 * *(float *)(param_2 + 0x1c + iVar2) + *(float *)(iVar7 + 0x1c + iVar2) * param_3;
  local_28[1] = fVar13;
  local_28[2] = fVar10;
  local_28[3] = fVar12;
  local_c = local_28[0];
  if (local_28 < pfVar3) {
    pfVar4 = *(float **)(iVar9 + 0x1c);
    if (pfVar4 <= local_28) {
      if (pfVar3 == *(float **)(iVar9 + 0x24)) {
        FUN_00428d00(1);
      }
      puVar5 = *(undefined4 **)(iVar9 + 0x20);
      puVar8 = (undefined4 *)(((int)local_28 - (int)pfVar4 & 0xfffffff0U) + *(int *)(iVar9 + 0x1c));
      if (puVar5 != (undefined4 *)0x0) {
        *puVar5 = *puVar8;
        puVar5[1] = puVar8[1];
        puVar5[2] = puVar8[2];
        puVar5[3] = puVar8[3];
      }
      goto LAB_0063f2de;
    }
  }
  if (pfVar3 == *(float **)(iVar9 + 0x24)) {
    FUN_00428d00(1);
  }
  pfVar3 = *(float **)(iVar9 + 0x20);
  if (pfVar3 != (float *)0x0) {
    pfVar3[2] = fVar10;
    *pfVar3 = local_c;
    pfVar3[1] = fVar13;
    pfVar3[3] = fVar12;
  }
LAB_0063f2de:
  fVar10 = local_14;
  *(int *)(iVar9 + 0x20) = *(int *)(iVar9 + 0x20) + 0x10;
  iVar2 = *(int *)(param_1 + *(int *)(in_ECX + 0xbe4));
  local_18 = fVar11 * *(float *)(iVar2 + (int)local_14) + *(float *)(iVar2 + iVar1) * param_3;
  local_14 = fVar11 * *(float *)(iVar2 + 4 + (int)local_14) +
             *(float *)(iVar2 + 4 + iVar1) * param_3;
  FUN_00642590(&local_18);
  iVar2 = *(int *)(param_1 + *(int *)(in_ECX + 0xbe4));
  local_18 = *(float *)(iVar2 + 8 + (int)fVar10) * fVar11 + *(float *)(iVar2 + 8 + iVar1) * param_3;
  local_14 = *(float *)(iVar2 + 0xc + (int)fVar10) * fVar11 +
             *(float *)(iVar2 + 0xc + iVar1) * param_3;
  FUN_00642590(&local_18);
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


/* FUN_0063f3b0 @ 0063f3b0  kind=gamemisc  attributed-by=none  size=2753 */

void FUN_0063f3b0(int param_1,float param_2,float param_3)

{
  undefined8 uVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  int *piVar5;
  undefined8 *puVar6;
  int iVar7;
  char cVar8;
  int in_ECX;
  uint uVar9;
  uint uVar10;
  int iVar11;
  undefined8 *puVar12;
  int iVar13;
  int iVar14;
  double dVar15;
  undefined8 *local_6c;
  int local_68;
  uint local_64;
  int local_60;
  int local_5c;
  undefined8 *local_58;
  int local_54;
  int local_50;
  undefined8 *local_4c;
  int local_48 [3];
  int local_3c;
  float local_38;
  int local_34;
  undefined8 *local_30;
  uint local_2c;
  int local_28 [3];
  int local_1c [2];
  undefined8 local_14;
  uint local_c;
  
  local_c = DAT_0076aa78 ^ (uint)&local_6c;
  local_5c = param_1 * 0xc;
  local_60 = param_1;
  if (*(int *)(*(int *)(in_ECX + 0xbcc) + local_5c) !=
      *(int *)(*(int *)(in_ECX + 0xbcc) + 4 + local_5c)) {
    iVar14 = *(int *)(in_ECX + 0xba8);
    local_28[1] = *(int *)(iVar14 + 4 + local_5c) - *(int *)(iVar14 + local_5c) >> 3;
    local_58 = (undefined8 *)0x0;
    local_38 = 0.0;
    if ((~(byte)(*(uint *)(in_ECX + 0x85c) >> 3) & 1) == 0) {
      local_28[1] = local_28[1] + -1;
    }
    local_48[1] = 0;
    local_68 = in_ECX;
    if (0 < local_28[1]) {
      local_2c = *(int *)(local_5c + *(int *)(in_ECX + 0xb9c));
      local_6c = *(undefined8 **)(iVar14 + local_5c);
      do {
        uVar10 = local_48[1] + 1;
        uVar9 = uVar10 % (uint)(*(int *)(iVar14 + 4 + local_5c) - *(int *)(iVar14 + local_5c) >> 3);
        uVar1 = *local_6c;
        local_14._0_4_ = (float)uVar1;
        local_14._4_4_ = (float)((ulonglong)uVar1 >> 0x20);
        local_14._4_4_ = local_14._4_4_ - *(float *)(*(int *)(iVar14 + local_5c) + 4 + uVar9 * 8);
        local_14._0_4_ = (float)local_14 - *(float *)(*(int *)(iVar14 + local_5c) + uVar9 * 8);
        dVar15 = (double)(local_14._4_4_ * local_14._4_4_ + (float)local_14 * (float)local_14);
        local_14 = uVar1;
        libm_sse2_sqrt_precise();
        local_6c = local_6c + 1;
        local_38 = ((float)dVar15 * 2.0) /
                   (*(float *)(local_2c + local_48[1] * 4) + *(float *)(local_2c + uVar9 * 4)) +
                   local_38;
        local_48[1] = uVar10;
      } while ((int)uVar10 < local_28[1]);
    }
    puVar12 = (undefined8 *)0x0;
    local_2c = (uint)(local_38 / (param_2 + param_3));
    if (local_2c != 0) {
      local_38 = local_38 / ((float)(int)local_2c * (param_2 + param_3));
      param_2 = local_38 * param_2;
      local_38 = local_38 * param_3;
      local_28[2] = *(int *)(local_68 + 0xb28) / 2;
      local_14 = CONCAT44(local_14._4_4_,param_2);
      local_6c = (undefined8 *)0x0;
      local_48[1] = 0;
      iVar14 = local_68;
      if (0 < (int)local_2c) {
        while( true ) {
          puVar6 = local_6c;
          iVar11 = 0;
          local_48[2] = *(int *)(*(int *)(iVar14 + 0xc14) + 8) -
                        *(int *)(*(int *)(iVar14 + 0xc14) + 4) >> 3;
          cVar8 = FUN_006414c0(local_60,local_6c,puVar12,param_2,&local_4c,&local_30);
          iVar7 = local_28[2];
          iVar13 = local_68;
          if (cVar8 == '\0') break;
          if ((local_48[1] == local_2c) && (local_28[1] <= (int)local_4c)) {
            local_4c = (undefined8 *)(local_28[1] + -1);
            local_30 = (undefined8 *)0x3f800000;
            if ((int)local_4c < (int)puVar6) break;
          }
          iVar14 = *(int *)(iVar14 + 0xbc0);
          iVar2 = *(int *)(local_68 + 0xbcc);
          uVar10 = (uint)(*(int *)(*(int *)(local_5c + iVar14) +
                                  (((int)local_6c + 1U) %
                                  (uint)(*(int *)(local_5c + 4 + iVar14) -
                                         *(int *)(local_5c + iVar14) >> 2)) * 4) +
                         (*(int *)(local_5c + 4 + iVar2) - *(int *)(local_5c + iVar2) >> 3) + -2) %
                   (uint)(*(int *)(local_5c + 4 + iVar2) - *(int *)(local_5c + iVar2) >> 3);
          if (*(int *)(local_68 + 0x864) == 1) {
            FUN_0063e020(local_60,uVar10,local_58,0,local_28[2]);
            iVar11 = iVar7;
          }
          else if (*(int *)(local_68 + 0x864) == 2) {
            FUN_0063ea00(local_60,uVar10,local_58,0);
            iVar11 = 1;
          }
          FUN_0063ef20(local_60,uVar10,local_58,1);
          iVar14 = *(int *)(iVar13 + 0xbcc);
          iVar13 = *(int *)(iVar13 + 0xbc0);
          puVar12 = (undefined8 *)(iVar11 + 1);
          local_54 = *(int *)(local_5c + iVar13);
          local_58 = local_4c;
          uVar10 = (uint)(*(int *)(local_54 +
                                  (((int)local_4c + 1U) %
                                  (uint)(*(int *)(local_5c + 4 + iVar13) - local_54 >> 2)) * 4) +
                         (*(int *)(local_5c + 4 + iVar14) - *(int *)(local_5c + iVar14) >> 3) + -2)
                   % (uint)(*(int *)(local_5c + 4 + iVar14) - *(int *)(local_5c + iVar14) >> 3);
          if (((int)local_6c < (int)local_4c) &&
             (iVar14 = *(int *)(local_54 + 4 + (int)local_6c * 4), iVar14 <= (int)uVar10)) {
            local_6c = (undefined8 *)((int)puVar12 + (uVar10 - iVar14 >> 1) + 1);
            do {
              FUN_0063ef20(local_60,iVar14,0,0);
              iVar14 = iVar14 + 2;
              puVar12 = local_6c;
            } while (iVar14 <= (int)uVar10);
          }
          puVar6 = local_4c;
          local_6c = local_30;
          FUN_0063ef20(local_60,uVar10,local_30,0);
          iVar13 = (int)puVar12 + 1;
          if (*(int *)(local_68 + 0x864) == 1) {
            FUN_0063e020(local_60,uVar10,local_6c,1,local_28[2]);
            iVar13 = iVar13 + local_28[2];
          }
          else if (*(int *)(local_68 + 0x864) == 2) {
            FUN_0063ea00(local_60,uVar10,local_6c,1);
            iVar13 = (int)puVar12 + 2;
          }
          iVar14 = local_68;
          FUN_006414c0(local_60,puVar6,local_6c,local_38,&local_4c,&local_30);
          local_1c[1] = iVar13 + -1;
          local_6c = local_4c;
          local_58 = local_30;
          local_54 = 0;
          if (0 < local_1c[1]) {
            do {
              iVar14 = *(int *)(iVar14 + 0xc14);
              local_34 = local_48[2] + local_54 * 2;
              piVar3 = *(int **)(iVar14 + 0x38);
              if ((&local_34 < piVar3) && (piVar4 = *(int **)(iVar14 + 0x34), piVar4 <= &local_34))
              {
                piVar5 = *(int **)(iVar14 + 0x3c);
                if ((piVar3 == piVar5) && ((int)piVar5 - (int)piVar3 >> 2 == 0)) {
                  iVar13 = (int)piVar3 - (int)piVar4 >> 2;
                  if (iVar13 == 0x3fffffff) goto LAB_0063fe5c;
                  local_64 = iVar13 + 1;
                  uVar10 = (int)piVar5 - (int)piVar4 >> 2;
                  if (0x3fffffff - (uVar10 >> 1) < uVar10) {
                    uVar10 = 0;
                  }
                  else {
                    uVar10 = uVar10 + (uVar10 >> 1);
                  }
                  if (uVar10 < local_64) {
                    uVar10 = local_64;
                  }
                  FUN_0063da20(uVar10);
                }
                if (*(undefined4 **)(iVar14 + 0x38) != (undefined4 *)0x0) {
                  **(undefined4 **)(iVar14 + 0x38) =
                       *(undefined4 *)
                        (*(int *)(iVar14 + 0x34) + ((int)&local_34 - (int)piVar4 >> 2) * 4);
                }
              }
              else {
                piVar4 = *(int **)(iVar14 + 0x3c);
                if ((piVar3 == piVar4) && ((int)piVar4 - (int)piVar3 >> 2 == 0)) {
                  iVar13 = (int)piVar3 - *(int *)(iVar14 + 0x34) >> 2;
                  if (iVar13 == 0x3fffffff) goto LAB_0063fe5c;
                  uVar9 = (int)piVar4 - *(int *)(iVar14 + 0x34) >> 2;
                  uVar10 = iVar13 + 1;
                  if (0x3fffffff - (uVar9 >> 1) < uVar9) {
                    uVar9 = 0;
                  }
                  else {
                    uVar9 = uVar9 + (uVar9 >> 1);
                  }
                  if (uVar9 < uVar10) {
                    uVar9 = uVar10;
                  }
                  FUN_0063da20(uVar9);
                }
                if (*(int **)(iVar14 + 0x38) != (int *)0x0) {
                  **(int **)(iVar14 + 0x38) = local_34;
                }
              }
              *(int *)(iVar14 + 0x38) = *(int *)(iVar14 + 0x38) + 4;
              local_50 = local_48[2] + (local_54 + 1) * 2;
              iVar14 = *(int *)(local_68 + 0xc14);
              piVar3 = *(int **)(iVar14 + 0x38);
              if ((&local_50 < piVar3) && (piVar4 = *(int **)(iVar14 + 0x34), piVar4 <= &local_50))
              {
                piVar5 = *(int **)(iVar14 + 0x3c);
                if ((piVar3 == piVar5) && ((int)piVar5 - (int)piVar3 >> 2 == 0)) {
                  iVar13 = (int)piVar3 - (int)piVar4 >> 2;
                  if (iVar13 == 0x3fffffff) goto LAB_0063fe5c;
                  local_64 = iVar13 + 1;
                  uVar10 = (int)piVar5 - (int)piVar4 >> 2;
                  if (0x3fffffff - (uVar10 >> 1) < uVar10) {
                    uVar10 = 0;
                  }
                  else {
                    uVar10 = uVar10 + (uVar10 >> 1);
                  }
                  if (uVar10 < local_64) {
                    uVar10 = local_64;
                  }
                  FUN_0063da20(uVar10);
                }
                if (*(undefined4 **)(iVar14 + 0x38) != (undefined4 *)0x0) {
                  **(undefined4 **)(iVar14 + 0x38) =
                       *(undefined4 *)
                        (*(int *)(iVar14 + 0x34) + ((int)&local_50 - (int)piVar4 >> 2) * 4);
                }
              }
              else {
                piVar4 = *(int **)(iVar14 + 0x3c);
                if ((piVar3 == piVar4) && ((int)piVar4 - (int)piVar3 >> 2 == 0)) {
                  iVar13 = (int)piVar3 - *(int *)(iVar14 + 0x34) >> 2;
                  if (iVar13 == 0x3fffffff) goto LAB_0063fe5c;
                  uVar9 = (int)piVar4 - *(int *)(iVar14 + 0x34) >> 2;
                  uVar10 = iVar13 + 1;
                  if (0x3fffffff - (uVar9 >> 1) < uVar9) {
                    uVar9 = 0;
                  }
                  else {
                    uVar9 = uVar9 + (uVar9 >> 1);
                  }
                  if (uVar9 < uVar10) {
                    uVar9 = uVar10;
                  }
                  FUN_0063da20(uVar9);
                }
                if (*(int **)(iVar14 + 0x38) != (int *)0x0) {
                  **(int **)(iVar14 + 0x38) = local_50;
                }
              }
              *(int *)(iVar14 + 0x38) = *(int *)(iVar14 + 0x38) + 4;
              local_48[0] = local_54 * 2 + 1 + local_48[2];
              iVar14 = *(int *)(local_68 + 0xc14);
              piVar3 = *(int **)(iVar14 + 0x38);
              if ((local_48 < piVar3) && (piVar4 = *(int **)(iVar14 + 0x34), piVar4 <= local_48)) {
                piVar5 = *(int **)(iVar14 + 0x3c);
                if ((piVar3 == piVar5) && ((int)piVar5 - (int)piVar3 >> 2 == 0)) {
                  iVar13 = (int)piVar3 - (int)piVar4 >> 2;
                  if (iVar13 == 0x3fffffff) goto LAB_0063fe5c;
                  local_64 = iVar13 + 1;
                  uVar10 = (int)piVar5 - (int)piVar4 >> 2;
                  if (0x3fffffff - (uVar10 >> 1) < uVar10) {
                    uVar10 = 0;
                  }
                  else {
                    uVar10 = uVar10 + (uVar10 >> 1);
                  }
                  if (uVar10 < local_64) {
                    uVar10 = local_64;
                  }
                  FUN_0063da20(uVar10);
                }
                if (*(undefined4 **)(iVar14 + 0x38) != (undefined4 *)0x0) {
                  **(undefined4 **)(iVar14 + 0x38) =
                       *(undefined4 *)
                        (*(int *)(iVar14 + 0x34) + ((int)local_48 - (int)piVar4 >> 2) * 4);
                }
              }
              else {
                piVar4 = *(int **)(iVar14 + 0x3c);
                if ((piVar3 == piVar4) && ((int)piVar4 - (int)piVar3 >> 2 == 0)) {
                  iVar13 = (int)piVar3 - *(int *)(iVar14 + 0x34) >> 2;
                  if (iVar13 == 0x3fffffff) goto LAB_0063fe5c;
                  uVar9 = (int)piVar4 - *(int *)(iVar14 + 0x34) >> 2;
                  uVar10 = iVar13 + 1;
                  if (0x3fffffff - (uVar9 >> 1) < uVar9) {
                    uVar9 = 0;
                  }
                  else {
                    uVar9 = uVar9 + (uVar9 >> 1);
                  }
                  if (uVar9 < uVar10) {
                    uVar9 = uVar10;
                  }
                  FUN_0063da20(uVar9);
                }
                if (*(int **)(iVar14 + 0x38) != (int *)0x0) {
                  **(int **)(iVar14 + 0x38) = local_48[0];
                }
              }
              *(int *)(iVar14 + 0x38) = *(int *)(iVar14 + 0x38) + 4;
              iVar14 = *(int *)(local_68 + 0xc14);
              piVar3 = *(int **)(iVar14 + 0x38);
              local_1c[0] = local_48[0];
              if ((local_1c < piVar3) && (piVar4 = *(int **)(iVar14 + 0x34), piVar4 <= local_1c)) {
                piVar5 = *(int **)(iVar14 + 0x3c);
                if ((piVar3 == piVar5) && ((int)piVar5 - (int)piVar3 >> 2 == 0)) {
                  iVar13 = (int)piVar3 - (int)piVar4 >> 2;
                  if (iVar13 == 0x3fffffff) goto LAB_0063fe5c;
                  local_64 = iVar13 + 1;
                  uVar10 = (int)piVar5 - (int)piVar4 >> 2;
                  if (0x3fffffff - (uVar10 >> 1) < uVar10) {
                    uVar10 = 0;
                  }
                  else {
                    uVar10 = uVar10 + (uVar10 >> 1);
                  }
                  if (uVar10 < local_64) {
                    uVar10 = local_64;
                  }
                  FUN_0063da20(uVar10);
                }
                if (*(undefined4 **)(iVar14 + 0x38) != (undefined4 *)0x0) {
                  **(undefined4 **)(iVar14 + 0x38) =
                       *(undefined4 *)
                        (*(int *)(iVar14 + 0x34) + ((int)local_1c - (int)piVar4 >> 2) * 4);
                }
              }
              else {
                piVar4 = *(int **)(iVar14 + 0x3c);
                if ((piVar3 == piVar4) && ((int)piVar4 - (int)piVar3 >> 2 == 0)) {
                  iVar13 = (int)piVar3 - *(int *)(iVar14 + 0x34) >> 2;
                  if (iVar13 == 0x3fffffff) goto LAB_0063fe5c;
                  uVar9 = (int)piVar4 - *(int *)(iVar14 + 0x34) >> 2;
                  uVar10 = iVar13 + 1;
                  if (0x3fffffff - (uVar9 >> 1) < uVar9) {
                    uVar9 = 0;
                  }
                  else {
                    uVar9 = uVar9 + (uVar9 >> 1);
                  }
                  if (uVar9 < uVar10) {
                    uVar9 = uVar10;
                  }
                  FUN_0063da20(uVar9);
                }
                if (*(int **)(iVar14 + 0x38) != (int *)0x0) {
                  **(int **)(iVar14 + 0x38) = local_48[0];
                }
              }
              *(int *)(iVar14 + 0x38) = *(int *)(iVar14 + 0x38) + 4;
              iVar14 = *(int *)(local_68 + 0xc14);
              piVar3 = *(int **)(iVar14 + 0x38);
              local_28[0] = local_50;
              if ((local_28 < piVar3) && (piVar4 = *(int **)(iVar14 + 0x34), piVar4 <= local_28)) {
                piVar5 = *(int **)(iVar14 + 0x3c);
                if ((piVar3 == piVar5) && ((int)piVar5 - (int)piVar3 >> 2 == 0)) {
                  iVar13 = (int)piVar3 - (int)piVar4 >> 2;
                  if (iVar13 == 0x3fffffff) goto LAB_0063fe5c;
                  local_64 = iVar13 + 1;
                  uVar10 = (int)piVar5 - (int)piVar4 >> 2;
                  if (0x3fffffff - (uVar10 >> 1) < uVar10) {
                    uVar10 = 0;
                  }
                  else {
                    uVar10 = uVar10 + (uVar10 >> 1);
                  }
                  if (uVar10 < local_64) {
                    uVar10 = local_64;
                  }
                  FUN_0063da20(uVar10);
                }
                if (*(undefined4 **)(iVar14 + 0x38) != (undefined4 *)0x0) {
                  **(undefined4 **)(iVar14 + 0x38) =
                       *(undefined4 *)
                        (*(int *)(iVar14 + 0x34) + ((int)local_28 - (int)piVar4 >> 2) * 4);
                }
              }
              else {
                piVar4 = *(int **)(iVar14 + 0x3c);
                if ((piVar3 == piVar4) && ((int)piVar4 - (int)piVar3 >> 2 == 0)) {
                  iVar13 = (int)piVar3 - *(int *)(iVar14 + 0x34) >> 2;
                  if (iVar13 == 0x3fffffff) goto LAB_0063fe5c;
                  uVar9 = (int)piVar4 - *(int *)(iVar14 + 0x34) >> 2;
                  uVar10 = iVar13 + 1;
                  if (0x3fffffff - (uVar9 >> 1) < uVar9) {
                    uVar9 = 0;
                  }
                  else {
                    uVar9 = uVar9 + (uVar9 >> 1);
                  }
                  if (uVar9 < uVar10) {
                    uVar9 = uVar10;
                  }
                  FUN_0063da20(uVar9);
                }
                if (*(int **)(iVar14 + 0x38) != (int *)0x0) {
                  **(int **)(iVar14 + 0x38) = local_50;
                }
              }
              *(int *)(iVar14 + 0x38) = *(int *)(iVar14 + 0x38) + 4;
              local_3c = local_54 * 2 + 3 + local_48[2];
              iVar14 = *(int *)(local_68 + 0xc14);
              piVar3 = *(int **)(iVar14 + 0x38);
              if ((&local_3c < piVar3) && (piVar4 = *(int **)(iVar14 + 0x34), piVar4 <= &local_3c))
              {
                piVar5 = *(int **)(iVar14 + 0x3c);
                if ((piVar3 == piVar5) && ((int)piVar5 - (int)piVar3 >> 2 == 0)) {
                  iVar13 = (int)piVar3 - (int)piVar4 >> 2;
                  if (iVar13 == 0x3fffffff) {
LAB_0063fe5c:
                    /* WARNING: Subroutine does not return */
                    std::_Xlength_error("vector<T> too long");
                  }
                  local_64 = iVar13 + 1;
                  uVar10 = (int)piVar5 - (int)piVar4 >> 2;
                  if (0x3fffffff - (uVar10 >> 1) < uVar10) {
                    uVar10 = 0;
                  }
                  else {
                    uVar10 = uVar10 + (uVar10 >> 1);
                  }
                  if (uVar10 < local_64) {
                    uVar10 = local_64;
                  }
                  FUN_0063da20(uVar10);
                }
                if (*(undefined4 **)(iVar14 + 0x38) != (undefined4 *)0x0) {
                  **(undefined4 **)(iVar14 + 0x38) =
                       *(undefined4 *)
                        (*(int *)(iVar14 + 0x34) + ((int)&local_3c - (int)piVar4 >> 2) * 4);
                }
              }
              else {
                piVar4 = *(int **)(iVar14 + 0x3c);
                if ((piVar3 == piVar4) && ((int)piVar4 - (int)piVar3 >> 2 == 0)) {
                  iVar13 = (int)piVar3 - *(int *)(iVar14 + 0x34) >> 2;
                  if (iVar13 == 0x3fffffff) goto LAB_0063fe5c;
                  uVar9 = (int)piVar4 - *(int *)(iVar14 + 0x34) >> 2;
                  uVar10 = iVar13 + 1;
                  if (0x3fffffff - (uVar9 >> 1) < uVar9) {
                    uVar9 = 0;
                  }
                  else {
                    uVar9 = uVar9 + (uVar9 >> 1);
                  }
                  if (uVar9 < uVar10) {
                    uVar9 = uVar10;
                  }
                  FUN_0063da20(uVar9);
                }
                if (*(int **)(iVar14 + 0x38) != (int *)0x0) {
                  **(int **)(iVar14 + 0x38) = local_3c;
                }
              }
              *(int *)(iVar14 + 0x38) = *(int *)(iVar14 + 0x38) + 4;
              local_54 = local_54 + 1;
              iVar14 = local_68;
            } while (local_54 < local_1c[1]);
          }
          local_48[1] = local_48[1] + 1;
          if ((int)local_2c <= local_48[1]) break;
          param_2 = (float)local_14;
          puVar12 = local_58;
        }
      }
    }
  }
  __security_check_cookie(local_c ^ (uint)&local_6c);
  return;
}


/* FUN_0063fe80 @ 0063fe80  kind=gamemisc  attributed-by=none  size=52 */

void * FUN_0063fe80(uint param_1)

{
  void *pvVar1;
  
  if (param_1 == 0) {
    return (void *)0x0;
  }
  if ((param_1 < 0x15555556) && (pvVar1 = operator_new(param_1 * 0xc), pvVar1 != (void *)0x0)) {
    return pvVar1;
  }
                    /* WARNING: Subroutine does not return */
  std::_Xbad_alloc();
}


/* FUN_006413b0 @ 006413b0  kind=gamemisc  attributed-by=none  size=137 */

int * FUN_006413b0(int *param_1,int param_2,int param_3)

{
  int iVar1;
  int *in_ECX;
  undefined1 local_5;
  
  if ((param_2 == *in_ECX) && (param_3 == in_ECX[1])) {
    FUN_00639cf0(*in_ECX,in_ECX[1],&local_5,param_2);
    in_ECX[1] = *in_ECX;
    *param_1 = param_2;
    return param_1;
  }
  if (param_2 != param_3) {
    iVar1 = FUN_0063a690(param_3,in_ECX[1],param_2,param_2);
    FUN_00639cf0(iVar1,in_ECX[1],&local_5,param_2);
    in_ECX[1] = iVar1;
    *param_1 = param_2;
    return param_1;
  }
  *param_1 = param_2;
  return param_1;
}


/* FUN_006414c0 @ 006414c0  kind=gamemisc  attributed-by=none  size=407 */

undefined1
FUN_006414c0(int param_1,int param_2,float param_3,float param_4,int *param_5,float *param_6)

{
  int iVar1;
  undefined1 uVar2;
  int in_ECX;
  uint uVar3;
  float fVar4;
  double dVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  
  uVar3 = (param_2 + 1U) %
          (uint)(*(int *)(*(int *)(in_ECX + 0xba8) + 4 + param_1 * 0xc) -
                 *(int *)(*(int *)(in_ECX + 0xba8) + param_1 * 0xc) >> 3);
  if (param_4 <= 0.0) {
    param_4 = 0.0;
  }
  iVar1 = *(int *)(*(int *)(in_ECX + 0xba8) + param_1 * 0xc);
  fVar4 = *(float *)(iVar1 + 4 + param_2 * 8) - *(float *)(iVar1 + 4 + uVar3 * 8);
  fVar6 = *(float *)(iVar1 + param_2 * 8) - *(float *)(iVar1 + uVar3 * 8);
  dVar5 = (double)(fVar4 * fVar4 + fVar6 * fVar6);
  libm_sse2_sqrt_precise();
  iVar1 = *(int *)(*(int *)(in_ECX + 0xb9c) + param_1 * 0xc);
  fVar4 = *(float *)(iVar1 + uVar3 * 4);
  fVar6 = *(float *)(iVar1 + param_2 * 4);
  fVar8 = (float)dVar5;
  fVar7 = (fVar8 * param_3 * 2.0) / ((1.0 - param_3) * fVar6 + fVar4 * param_3 + fVar6) + param_4;
  fVar9 = 1.0 - ((fVar4 - fVar6) * fVar7) / (fVar8 * 2.0);
  if (fVar9 < 1e-07) {
    fVar9 = 1e-07;
  }
  fVar9 = (fVar7 * fVar6) / fVar9;
  if (fVar9 <= fVar8) {
    *param_5 = param_2;
    *param_6 = fVar9 / fVar8;
    return 1;
  }
  uVar2 = FUN_006414c0(param_1,uVar3,0,param_4 - ((fVar8 - fVar8 * param_3) * 2.0) / (fVar4 + fVar6)
                       ,param_5,param_6);
  if (*param_5 < param_2) {
    uVar2 = 0;
  }
  return uVar2;
}


/* FUN_00642700 @ 00642700  kind=gamemisc  attributed-by=none  size=97 */

void FUN_00642700(int param_1)

{
  void *_Src;
  int *piVar1;
  void *_Dst;
  int in_ECX;
  int iVar2;
  
  iVar2 = 0;
  if (0 < (int)(*(int *)(in_ECX + 0x50) - *(int *)(in_ECX + 0x4c) & 0xfffffffcU)) {
    do {
      piVar1 = *(int **)(*(int *)(in_ECX + 0x4c) + iVar2 * 4);
      _Dst = (void *)(*piVar1 + param_1 * 4);
      _Src = (void *)((int)_Dst + 4);
      memmove(_Dst,_Src,piVar1[1] - (int)_Src & 0xfffffffc);
      piVar1[1] = piVar1[1] + -4;
      iVar2 = iVar2 + 1;
    } while (iVar2 < *(int *)(in_ECX + 0x50) - *(int *)(in_ECX + 0x4c) >> 2);
  }
  return;
}


/* FUN_00642770 @ 00642770  kind=gamemisc  attributed-by=none  size=102 */

void FUN_00642770(int param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  int in_ECX;
  undefined4 *puVar3;
  int iVar4;
  
  iVar4 = 0;
  if (0 < (int)(*(int *)(in_ECX + 0x50) - *(int *)(in_ECX + 0x4c) & 0xfffffffcU)) {
    do {
      piVar1 = *(int **)(*(int *)(in_ECX + 0x4c) + iVar4 * 4);
      puVar2 = (undefined4 *)piVar1[1];
      for (puVar3 = (undefined4 *)(param_1 * 8 + 8 + *piVar1); puVar3 != puVar2; puVar3 = puVar3 + 2
          ) {
        puVar3[-2] = *puVar3;
        puVar3[-1] = puVar3[1];
      }
      piVar1[1] = (int)(puVar2 + -2);
      iVar4 = iVar4 + 1;
    } while (iVar4 < *(int *)(in_ECX + 0x50) - *(int *)(in_ECX + 0x4c) >> 2);
  }
  return;
}


/* FUN_006427e0 @ 006427e0  kind=gamemisc  attributed-by=none  size=131 */

void FUN_006427e0(int param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  int in_ECX;
  undefined4 *puVar3;
  undefined4 *puVar4;
  int iVar5;
  
  iVar5 = 0;
  if (0 < (int)(*(int *)(in_ECX + 0x50) - *(int *)(in_ECX + 0x4c) & 0xfffffffcU)) {
    do {
      piVar1 = *(int **)(*(int *)(in_ECX + 0x4c) + iVar5 * 4);
      puVar4 = (undefined4 *)(param_1 * 0x10 + 0x10 + *piVar1);
      puVar2 = (undefined4 *)piVar1[1];
      if (puVar4 != puVar2) {
        puVar3 = puVar4 + -2;
        do {
          puVar3[-2] = *puVar4;
          puVar3[-1] = puVar3[3];
          *puVar3 = puVar3[4];
          puVar4 = puVar4 + 4;
          puVar3[1] = puVar3[5];
          puVar3 = puVar3 + 4;
        } while (puVar4 != puVar2);
      }
      piVar1[1] = (int)(puVar2 + -4);
      iVar5 = iVar5 + 1;
    } while (iVar5 < *(int *)(in_ECX + 0x50) - *(int *)(in_ECX + 0x4c) >> 2);
  }
  return;
}


/* FUN_0064b770 @ 0064b770  kind=gamemisc  attributed-by=none  size=511 */

void FUN_0064b770(undefined4 *param_1,char param_2,undefined4 *param_3,undefined4 param_4)

{
  char cVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  int *piVar5;
  int *in_ECX;
  int *piVar6;
  int *piVar7;
  
  if (0xffffffd < (uint)in_ECX[1]) {
                    /* WARNING: Subroutine does not return */
    std::_Xlength_error("map/set<T> too long");
  }
  piVar3 = (int *)FUN_0064b460(param_4);
  in_ECX[1] = in_ECX[1] + 1;
  piVar3[1] = (int)param_3;
  if (param_3 == (undefined4 *)*in_ECX) {
    ((undefined4 *)*in_ECX)[1] = piVar3;
    *(int **)*in_ECX = piVar3;
    iVar4 = *in_ECX;
  }
  else {
    if (param_2 != '\0') {
      *param_3 = piVar3;
      if (param_3 == *(undefined4 **)*in_ECX) {
        *(int **)*in_ECX = piVar3;
      }
      goto LAB_0064b7ce;
    }
    param_3[2] = piVar3;
    iVar4 = *in_ECX;
    if (param_3 != *(undefined4 **)(iVar4 + 8)) goto LAB_0064b7ce;
  }
  *(int **)(iVar4 + 8) = piVar3;
LAB_0064b7ce:
  cVar1 = *(char *)(piVar3[1] + 0xc);
  piVar5 = piVar3;
  do {
    if (cVar1 != '\0') {
      *(undefined1 *)(*(int *)(*in_ECX + 4) + 0xc) = 1;
      *param_1 = piVar3;
      return;
    }
    piVar7 = (int *)piVar5[1];
    piVar6 = *(int **)piVar7[1];
    if (piVar7 == piVar6) {
      piVar6 = (int *)((undefined4 *)piVar7[1])[2];
      if ((char)piVar6[3] != '\0') {
        if (piVar5 == (int *)piVar7[2]) {
          piVar5 = (int *)piVar7[2];
          piVar7[2] = *piVar5;
          if (*(char *)(*piVar5 + 0xd) == '\0') {
            *(int **)(*piVar5 + 4) = piVar7;
          }
          piVar5[1] = piVar7[1];
          if (piVar7 == *(int **)(*in_ECX + 4)) {
            *(int **)(*in_ECX + 4) = piVar5;
          }
          else {
            piVar6 = (int *)piVar7[1];
            if (piVar7 == (int *)*piVar6) {
              *piVar6 = (int)piVar5;
            }
            else {
              piVar6[2] = (int)piVar5;
            }
          }
          *piVar5 = (int)piVar7;
          piVar7[1] = (int)piVar5;
          piVar5 = piVar7;
        }
        *(undefined1 *)(piVar5[1] + 0xc) = 1;
        *(undefined1 *)(*(int *)(piVar5[1] + 4) + 0xc) = 0;
        piVar7 = *(int **)(piVar5[1] + 4);
        piVar6 = (int *)*piVar7;
        *piVar7 = piVar6[2];
        if (*(char *)(piVar6[2] + 0xd) == '\0') {
          *(int **)(piVar6[2] + 4) = piVar7;
        }
        piVar6[1] = piVar7[1];
        if (piVar7 == *(int **)(*in_ECX + 4)) {
          *(int **)(*in_ECX + 4) = piVar6;
          piVar6[2] = (int)piVar7;
        }
        else {
          piVar2 = (int *)piVar7[1];
          if (piVar7 == (int *)piVar2[2]) {
            piVar2[2] = (int)piVar6;
            piVar6[2] = (int)piVar7;
          }
          else {
            *piVar2 = (int)piVar6;
            piVar6[2] = (int)piVar7;
          }
        }
        goto LAB_0064b94a;
      }
LAB_0064b8a1:
      *(undefined1 *)(piVar7 + 3) = 1;
      *(undefined1 *)(piVar6 + 3) = 1;
      *(undefined1 *)(*(int *)(piVar5[1] + 4) + 0xc) = 0;
      piVar5 = *(int **)(piVar5[1] + 4);
    }
    else {
      if ((char)piVar6[3] == '\0') goto LAB_0064b8a1;
      if (piVar5 == (int *)*piVar7) {
        iVar4 = *piVar7;
        *piVar7 = *(int *)(iVar4 + 8);
        if (*(char *)(*(int *)(iVar4 + 8) + 0xd) == '\0') {
          *(int **)(*(int *)(iVar4 + 8) + 4) = piVar7;
        }
        *(int *)(iVar4 + 4) = piVar7[1];
        if (piVar7 == *(int **)(*in_ECX + 4)) {
          *(int *)(*in_ECX + 4) = iVar4;
        }
        else {
          piVar5 = (int *)piVar7[1];
          if (piVar7 == (int *)piVar5[2]) {
            piVar5[2] = iVar4;
          }
          else {
            *piVar5 = iVar4;
          }
        }
        *(int **)(iVar4 + 8) = piVar7;
        piVar7[1] = iVar4;
        piVar5 = piVar7;
      }
      *(undefined1 *)(piVar5[1] + 0xc) = 1;
      *(undefined1 *)(*(int *)(piVar5[1] + 4) + 0xc) = 0;
      piVar7 = *(int **)(piVar5[1] + 4);
      piVar6 = (int *)piVar7[2];
      piVar7[2] = *piVar6;
      if (*(char *)(*piVar6 + 0xd) == '\0') {
        *(int **)(*piVar6 + 4) = piVar7;
      }
      piVar6[1] = piVar7[1];
      if (piVar7 == *(int **)(*in_ECX + 4)) {
        *(int **)(*in_ECX + 4) = piVar6;
      }
      else {
        piVar2 = (int *)piVar7[1];
        if (piVar7 == (int *)*piVar2) {
          *piVar2 = (int)piVar6;
        }
        else {
          piVar2[2] = (int)piVar6;
        }
      }
      *piVar6 = (int)piVar7;
LAB_0064b94a:
      piVar7[1] = (int)piVar6;
    }
    cVar1 = *(char *)(piVar5[1] + 0xc);
  } while( true );
}


/* FUN_0064bce0 @ 0064bce0  kind=gamemisc  attributed-by=none  size=259 */

undefined4 * FUN_0064bce0(undefined4 *param_1,char param_2,ushort *param_3,undefined4 param_4)

{
  int *piVar1;
  ushort *puVar2;
  int *piVar3;
  undefined4 *puVar4;
  undefined4 *in_ECX;
  bool bVar5;
  int *piVar6;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puVar2 = param_3;
  puStack_c = &LAB_006f6070;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  piVar1 = (int *)*in_ECX;
  bVar5 = true;
  local_8 = 0;
  piVar6 = piVar1;
  if (*(char *)(piVar1[1] + 0xd) == '\0') {
    piVar3 = (int *)piVar1[1];
    do {
      piVar6 = piVar3;
      if (param_2 == '\0') {
        bVar5 = *param_3 < *(ushort *)((int)piVar6 + 0xe);
      }
      else {
        bVar5 = *param_3 <= *(ushort *)((int)piVar6 + 0xe);
      }
      if (bVar5 == false) {
        piVar3 = (int *)piVar6[2];
      }
      else {
        piVar3 = (int *)*piVar6;
      }
    } while (*(char *)((int)piVar3 + 0xd) == '\0');
  }
  _param_2 = piVar6;
  if (bVar5 != false) {
    if (piVar6 == (int *)*piVar1) {
      puVar4 = (undefined4 *)&param_2;
      bVar5 = true;
      goto LAB_0064bd7c;
    }
    FUN_0042c740();
  }
  if (*puVar2 <= *(ushort *)((int)_param_2 + 0xe)) {
    *param_1 = _param_2;
    *(undefined1 *)(param_1 + 1) = 0;
    ExceptionList = local_10;
    return param_1;
  }
  puVar4 = &param_3;
LAB_0064bd7c:
  puVar4 = (undefined4 *)FUN_0064b770(puVar4,bVar5,piVar6,puVar2,param_4);
  *param_1 = *puVar4;
  *(undefined1 *)(param_1 + 1) = 1;
  ExceptionList = local_10;
  return param_1;
}


/* FUN_0064e410 @ 0064e410  kind=gamemisc  attributed-by=none  size=55 */

undefined4 * FUN_0064e410(void)

{
  undefined4 *puVar1;
  undefined4 *in_ECX;
  
  puVar1 = operator_new(0x10);
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


/* FUN_0064e490 @ 0064e490  kind=gamemisc  attributed-by=none  size=127 */

void FUN_0064e490(int *param_1,ushort *param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int *in_ECX;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  
  puVar4 = (undefined4 *)*in_ECX;
  puVar1 = (undefined4 *)puVar4[1];
  puVar5 = puVar4;
  if (*(char *)((int)puVar1 + 0xd) == '\0') {
    puVar2 = puVar1;
    do {
      if (*(ushort *)((int)puVar2 + 0xe) < *param_2) {
        puVar3 = (undefined4 *)puVar2[2];
      }
      else {
        if ((*(char *)((int)puVar4 + 0xd) != '\0') && (*param_2 < *(ushort *)((int)puVar2 + 0xe))) {
          puVar4 = puVar2;
        }
        puVar3 = (undefined4 *)*puVar2;
        puVar5 = puVar2;
      }
      puVar2 = puVar3;
    } while (*(char *)((int)puVar3 + 0xd) == '\0');
  }
  if (*(char *)((int)puVar4 + 0xd) == '\0') {
    puVar1 = (undefined4 *)*puVar4;
  }
  if (*(char *)((int)puVar1 + 0xd) == '\0') {
    do {
      if (*param_2 < *(ushort *)((int)puVar1 + 0xe)) {
        puVar2 = (undefined4 *)*puVar1;
        puVar4 = puVar1;
      }
      else {
        puVar2 = (undefined4 *)puVar1[2];
      }
      puVar1 = puVar2;
    } while (*(char *)((int)puVar2 + 0xd) == '\0');
  }
  *param_1 = (int)puVar5;
  param_1[1] = (int)puVar4;
  return;
}


/* FUN_00653360 @ 00653360  kind=gamemisc  attributed-by=none  size=694 */

void FUN_00653360(int param_1,float param_2)

{
  float *pfVar1;
  int in_ECX;
  float10 fVar2;
  float fVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined1 local_28 [8];
  float local_20;
  float local_1c;
  float local_14;
  float local_10;
  float local_c;
  uint local_8;
  
  local_8 = DAT_0076aa78 ^ (uint)&stack0xfffffffc;
  local_1c = param_2;
  if (*(int *)(in_ECX + 0xd0) != 0) {
    iVar4 = *(int *)(*(int *)(*(int *)(in_ECX + 0xd0) + 0x148) + 0x3c);
    *(undefined4 *)(*(int *)(iVar4 + 0x94) + *(int *)(iVar4 + 0x68) * 4) = 0;
  }
  *(int *)(in_ECX + 0xd0) = param_1;
  if (param_1 != 0) {
    iVar4 = *(int *)(in_ECX + 0xc0);
    if (iVar4 == 0) {
      iVar4 = *(int *)(in_ECX + 0xb4);
    }
    FUN_00636950(iVar4);
    if (param_2 != 0.0) {
      fVar2 = (float10)FUN_006291d0();
      local_14 = (float)fVar2;
      pfVar1 = (float *)FUN_0062dc20(local_28);
      local_10 = *pfVar1 + 0.0;
      local_c = pfVar1[1] + local_14;
      FUN_006295a0(&local_10,1);
    }
    fVar2 = (float10)FUN_0062f630();
    local_14 = (float)fVar2;
    if (local_14 < 0.0) {
      uVar5 = 1;
      fVar2 = (float10)FUN_0062f660(1);
      FUN_0062a650(0,(float)fVar2,uVar5);
    }
    fVar2 = (float10)FUN_0062f660();
    local_14 = (float)fVar2;
    if (local_14 < 0.0) {
      uVar6 = 1;
      uVar5 = 0;
      fVar2 = (float10)FUN_0062f630(0,1);
      FUN_0062a650((float)fVar2,uVar5,uVar6);
    }
    iVar4 = *(int *)(in_ECX + 0x10c);
    fVar2 = (float10)FUN_0062f630();
    local_14 = (float)fVar2;
    fVar2 = (float10)FUN_0062f600();
    local_c = (float)fVar2;
    if ((float)iVar4 < local_14 + local_c) {
      iVar4 = *(int *)(in_ECX + 0x10c);
      uVar5 = 1;
      fVar2 = (float10)FUN_0062f660(1);
      fVar3 = (float)fVar2;
      fVar2 = (float10)FUN_0062f600(fVar3);
      local_c = (float)fVar2;
      FUN_0062a650((float)iVar4 - local_c,fVar3,uVar5);
    }
    iVar4 = *(int *)(in_ECX + 0x110);
    fVar2 = (float10)FUN_0062f660();
    local_c = (float)fVar2;
    fVar2 = (float10)FUN_006291d0();
    local_14 = (float)fVar2;
    if ((float)iVar4 < local_c + local_14) {
      if (local_1c == 0.0) {
        iVar4 = *(int *)(in_ECX + 0x110);
        uVar5 = 1;
        fVar2 = (float10)FUN_006291d0(1);
        local_1c = (float)fVar2;
        fVar3 = (float)iVar4 - local_1c;
        fVar2 = (float10)FUN_0062f630(fVar3);
        FUN_0062a650((float)fVar2,fVar3,uVar5);
      }
      else {
        fVar2 = (float10)FUN_006291d0();
        local_c = (float)fVar2;
        pfVar1 = (float *)FUN_0062dc20(local_28);
        local_20 = *pfVar1 - 0.0;
        local_1c = pfVar1[1] - local_c;
        FUN_006295a0(&local_20,1);
      }
    }
    if (*(int *)(in_ECX + 0xd0) != 0) {
      iVar4 = *(int *)(*(int *)(*(int *)(in_ECX + 0xd0) + 0x148) + 0x3c);
      *(undefined4 *)(*(int *)(iVar4 + 0x94) + *(int *)(iVar4 + 0x68) * 4) = 1;
    }
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


/* FUN_00659d70 @ 00659d70  kind=gamemisc  attributed-by=none  size=114 */

void FUN_00659d70(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 char param_5)

{
  int *piVar1;
  int in_ECX;
  int *piVar2;
  
  *(undefined4 *)(in_ECX + 0x104) = param_1;
  *(undefined4 *)(in_ECX + 0x108) = param_2;
  *(undefined4 *)(in_ECX + 0x10c) = param_3;
  *(undefined4 *)(in_ECX + 0x110) = param_4;
  if ((param_5 != '\0') &&
     (piVar2 = (int *)**(int **)(in_ECX + 0x7c), piVar2 != *(int **)(in_ECX + 0x7c))) {
    _param_5 = 1;
    do {
      (**(code **)(*(int *)piVar2[2] + 0x20))();
      piVar1 = (int *)FUN_00468910(&param_5);
      if ((undefined4 *)*piVar1 != (undefined4 *)0x0) {
        (*(code *)**(undefined4 **)*piVar1)();
      }
      piVar2 = (int *)*piVar2;
    } while (piVar2 != (int *)*(int *)(in_ECX + 0x7c));
  }
  return;
}


/* FUN_0065a860 @ 0065a860  kind=gamemisc  attributed-by=none  size=41 */

void FUN_0065a860(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  for (; param_1 != param_2; param_1 = param_1 + 1) {
    if (param_3 != (undefined4 *)0x0) {
      *param_3 = *param_1;
    }
    param_3 = param_3 + 1;
  }
  return;
}


/* FUN_0065ae80 @ 0065ae80  kind=gamemisc  attributed-by=none  size=47 */

void FUN_0065ae80(void)

{
  void *pvVar1;
  
  pvVar1 = operator_new(0x20);
  if (pvVar1 == (void *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0065ae8e. Too many branches */
                    /* WARNING: Subroutine does not return */
                    /* WARNING: Treating indirect jump as call */
    std::_Xbad_alloc();
    return;
  }
  *(void **)pvVar1 = pvVar1;
  if ((undefined4 *)((int)pvVar1 + 4) != (undefined4 *)0x0) {
    *(undefined4 *)((int)pvVar1 + 4) = pvVar1;
  }
  if ((undefined4 *)((int)pvVar1 + 8) != (undefined4 *)0x0) {
    *(undefined4 *)((int)pvVar1 + 8) = pvVar1;
  }
  *(undefined2 *)((int)pvVar1 + 0xc) = 0x101;
  return;
}


/* FUN_0065bc70 @ 0065bc70  kind=gamemisc  attributed-by=none  size=958 */

void FUN_0065bc70(undefined4 param_1,undefined4 param_2,undefined4 param_3,float param_4,
                 undefined4 param_5,undefined4 param_6,undefined4 param_7,float param_8,
                 undefined4 param_9,undefined4 param_10,undefined4 param_11,uint param_12,
                 undefined4 param_13)

{
  uint uVar1;
  int in_ECX;
  int iVar2;
  float *pfVar3;
  float *pfVar4;
  float fVar5;
  float fVar6;
  float local_b0;
  float local_ac [12];
  float local_7c;
  float local_78;
  void *local_6c [4];
  undefined4 local_5c;
  uint local_58;
  float local_54 [4];
  float local_44;
  float local_40;
  float local_3c;
  float local_38;
  float local_24;
  float local_20;
  float local_1c;
  float local_18;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006f6f88;
  local_10 = ExceptionList;
  uVar1 = DAT_0076aa78 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_14 = uVar1;
  EnterCriticalSection((LPCRITICAL_SECTION)(in_ECX + 0x10c));
  (**(code **)(**(int **)(in_ECX + 4) + 0x38))(local_ac,uVar1);
  FUN_006605c0(param_4,param_5,param_6,param_7,local_ac,param_13);
  if (*(int *)(in_ECX + 0xf4) == 0) {
    if ((char)param_13 != '\0') {
      fVar5 = param_4 / *(float *)(in_ECX + 0xe0);
      local_b0 = param_8 / fVar5;
      param_4 = param_4 / *(float *)(in_ECX + 0xe4);
      pfVar3 = local_ac;
      pfVar4 = local_54;
      for (iVar2 = 0x10; iVar2 != 0; iVar2 = iVar2 + -1) {
        *pfVar4 = *pfVar3;
        pfVar3 = pfVar3 + 1;
        pfVar4 = pfVar4 + 1;
      }
      if (fVar5 != 1.0) {
        local_54[0] = local_ac[0] * fVar5;
        local_54[1] = local_54[1] * fVar5;
        local_54[2] = local_54[2] * fVar5;
        local_54[3] = local_54[3] * fVar5;
      }
      if (param_4 != 1.0) {
        local_44 = local_44 * param_4;
        local_40 = local_40 * param_4;
        local_3c = local_3c * param_4;
        local_38 = local_38 * param_4;
      }
      local_24 = (float)(int)(local_24 + 0.5);
      local_20 = (float)(int)(local_20 + 0.5);
      (**(code **)(**(int **)(in_ECX + 4) + 0x3c))(local_54);
      goto LAB_0065bf1b;
    }
    FUN_00423e70();
    fVar6 = (float)(int)(local_7c + 0.5);
    fVar5 = (float)(int)(local_78 + 0.5);
    local_24 = local_54[0] * fVar6 + local_44 * fVar5 + local_24;
    local_20 = local_54[1] * fVar6 + local_40 * fVar5 + local_20;
    local_1c = local_54[2] * fVar6 + local_3c * fVar5 + local_1c;
    local_18 = local_54[3] * fVar6 + local_38 * fVar5 + local_18;
    (**(code **)(**(int **)(in_ECX + 4) + 0x3c))(local_54);
  }
  local_b0 = param_8;
LAB_0065bf1b:
  (**(code **)(**(int **)(in_ECX + 4) + 0x48))();
  if ((param_12 & 0x10) == 0) {
    FUN_0065c040(param_1,param_2,param_3,param_9,param_10,param_11,param_12);
  }
  else {
    local_58 = 7;
    local_5c = 0;
    local_6c[0] = (void *)((uint)local_6c[0] & 0xffff0000);
    FUN_0040f680(param_1,0,0xffffffff);
    local_8 = 0;
    FUN_00660d50(local_6c,local_b0);
    FUN_0065c040(local_6c,param_2,param_3,param_9,param_10,param_11,param_12);
    local_8 = 0xffffffff;
    if (7 < local_58) {
                    /* WARNING: Subroutine does not return */
      operator_delete(local_6c[0]);
    }
    local_58 = 7;
    local_5c = 0;
    local_6c[0] = (void *)((uint)local_6c[0] & 0xffff0000);
  }
  (**(code **)(**(int **)(in_ECX + 4) + 0x3c))(local_ac);
  LeaveCriticalSection((LPCRITICAL_SECTION)(in_ECX + 0x10c));
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}


/* FUN_0065c040 @ 0065c040  kind=gamemisc  attributed-by=none  size=4069 */

/* WARNING: Type propagation algorithm not settling */

void FUN_0065c040(undefined4 *param_1,float param_2,float param_3,undefined4 *param_4,
                 undefined4 *param_5,undefined4 *param_6,uint param_7)

{
  undefined8 uVar1;
  undefined2 uVar2;
  int iVar3;
  undefined4 *puVar4;
  int iVar5;
  undefined4 *puVar6;
  float *pfVar7;
  float *pfVar8;
  undefined4 uVar9;
  int in_ECX;
  int iVar10;
  int iVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  int *piVar16;
  int *piVar17;
  float local_1cc;
  float local_1c4;
  float local_1c0;
  float *local_1bc;
  float local_1b8;
  undefined4 *local_1b4;
  float local_1b0 [16];
  undefined8 local_170;
  undefined8 local_168;
  int local_160 [10];
  float local_138;
  float fStack_134;
  float local_130;
  float fStack_12c;
  float local_128;
  float fStack_124;
  float local_120;
  float local_11c;
  int local_118 [4];
  float local_108;
  float local_104;
  int local_100 [4];
  undefined8 local_f0;
  float local_e8;
  float local_e4;
  float local_e0;
  float fStack_dc;
  undefined8 local_d8;
  undefined8 local_d0;
  float local_c8;
  float local_c4;
  undefined4 local_c0;
  undefined4 local_bc;
  undefined8 local_b8;
  float local_b0 [4];
  float local_a0;
  float local_9c;
  float local_98;
  float local_94;
  float local_80;
  float local_7c;
  float local_78;
  float local_74;
  float local_70;
  int aiStack_6c [3];
  float local_60;
  float fStack_5c;
  float local_58 [8];
  float local_38;
  float fStack_34;
  float local_30 [2];
  float local_28 [4];
  float local_18;
  float local_14;
  float local_10;
  float fStack_c;
  uint local_8;
  
  local_8 = DAT_0076aa78 ^ (uint)&stack0xfffffffc;
  local_1cc = 1.0;
  if (*(int *)(in_ECX + 0xf4) != 0) {
    local_1cc = *(float *)(in_ECX + 0xe4) / (*(float *)(in_ECX + 0x104) - *(float *)(in_ECX + 0xfc))
    ;
  }
  FUN_0065d530(param_1,local_28 + 4,&local_70,0,0xffffffff,1);
  FUN_0065d530(param_1,local_28 + 2,&local_70,param_7,0xffffffff,1);
  fVar12 = local_28[2] - local_18;
  iVar3 = param_1[4];
  param_2 = fVar12 + param_2;
  local_1c4 = (local_28[3] - local_14) + param_3;
  local_10 = param_2;
  fStack_c = local_1c4;
  (**(code **)(**(int **)(in_ECX + 4) + 0x28))();
  if (*(int *)(in_ECX + 0xf4) != 0) {
    iVar10 = *(int *)(in_ECX + 4);
    iVar11 = *(int *)(iVar10 + 0x144);
    iVar5 = FUN_00608a20(iVar11,*(undefined4 *)(iVar11 + 4),iVar10 + 0x15c);
    if (*(int *)(iVar10 + 0x148) == 0xaaaaaa9) {
                    /* WARNING: Subroutine does not return */
      std::_Xlength_error("list<T> too long");
    }
    *(int *)(iVar10 + 0x148) = *(int *)(iVar10 + 0x148) + 1;
    *(int *)(iVar11 + 4) = iVar5;
    **(int **)(iVar5 + 4) = iVar5;
    iVar10 = *(int *)(in_ECX + 4);
    iVar11 = *(int *)(iVar10 + 0x14c);
    iVar5 = FUN_00608a20(iVar11,*(undefined4 *)(iVar11 + 4),iVar10 + 0x16c);
    if (*(int *)(iVar10 + 0x150) == 0xaaaaaa9) {
                    /* WARNING: Subroutine does not return */
      std::_Xlength_error("list<T> too long");
    }
    *(int *)(iVar10 + 0x150) = *(int *)(iVar10 + 0x150) + 1;
    *(int *)(iVar11 + 4) = iVar5;
    **(int **)(iVar5 + 4) = iVar5;
    iVar10 = *(int *)(in_ECX + 4);
    iVar11 = *(int *)(iVar10 + 0x154);
    iVar5 = FUN_00608a20(iVar11,*(undefined4 *)(iVar11 + 4),iVar10 + 0x17c);
    if (*(int *)(iVar10 + 0x158) == 0xaaaaaa9) {
                    /* WARNING: Subroutine does not return */
      std::_Xlength_error("list<T> too long");
    }
    *(int *)(iVar10 + 0x158) = *(int *)(iVar10 + 0x158) + 1;
    *(int *)(iVar11 + 4) = iVar5;
    **(int **)(iVar5 + 4) = iVar5;
    iVar10 = *(int *)(in_ECX + 4);
    *(undefined4 *)(iVar10 + 0x15c) = *param_4;
    *(undefined4 *)(iVar10 + 0x160) = param_4[1];
    *(undefined4 *)(iVar10 + 0x164) = param_4[2];
    *(undefined4 *)(iVar10 + 0x168) = param_4[3];
    iVar10 = *(int *)(in_ECX + 4);
    *(undefined4 *)(iVar10 + 0x16c) = *param_5;
    *(undefined4 *)(iVar10 + 0x170) = param_5[1];
    *(undefined4 *)(iVar10 + 0x174) = param_5[2];
    *(undefined4 *)(iVar10 + 0x178) = param_5[3];
    iVar10 = *(int *)(in_ECX + 4);
    *(undefined4 *)(iVar10 + 0x17c) = *param_6;
    *(undefined4 *)(iVar10 + 0x180) = param_6[1];
    *(undefined4 *)(iVar10 + 0x184) = param_6[2];
    *(undefined4 *)(iVar10 + 0x188) = param_6[3];
  }
  FUN_0065d530(param_1,local_58 + 6,local_30,param_7,0,1);
  if ((param_7 & 1) == 0) {
    local_1b8 = param_2;
    if ((param_7 & 2) == 0) goto LAB_0065c361;
    local_10 = ((local_30[0] - local_58[6]) - local_70) + fVar12;
  }
  else {
    local_10 = (((local_30[0] - local_58[6]) - local_70) + fVar12) * 0.5;
  }
  local_10 = param_2 - local_10;
  local_1b8 = local_10;
LAB_0065c361:
  local_1b4 = (undefined4 *)0x0;
  if (0 < iVar3) {
    do {
      puVar4 = local_1b4;
      puVar6 = param_1;
      if (7 < (uint)param_1[5]) {
        puVar6 = (undefined4 *)*param_1;
      }
      if (*(short *)((int)puVar6 + (int)local_1b4 * 2) == 10) {
        FUN_0065d530(param_1,local_58 + 6,local_30,0,(int)local_1b4 + 1,1);
        if ((param_7 & 1) == 0) {
          local_10 = param_2;
          if ((param_7 & 2) != 0) {
            fVar13 = ((local_30[0] - local_58[6]) - local_70) + fVar12;
            goto LAB_0065c405;
          }
        }
        else {
          fVar13 = (((local_30[0] - local_58[6]) - local_70) + fVar12) * 0.5;
LAB_0065c405:
          local_10 = param_2 - fVar13;
        }
        local_1c4 = *(float *)(in_ECX + 0xf0) + *(float *)(in_ECX + 0xe4) + local_1c4;
        fStack_c = local_1c4;
      }
      else {
        puVar6 = param_1;
        if (7 < (uint)param_1[5]) {
          puVar6 = (undefined4 *)*param_1;
        }
        uVar2 = *(undefined2 *)((int)puVar6 + (int)local_1b4 * 2);
        if (*(int *)(in_ECX + 0xf4) == 0) {
          if (*(char *)(in_ECX + 0x108) == '\0') {
            local_1bc = (float *)FUN_0065ea80(*(undefined4 *)(in_ECX + 200),uVar2,0);
          }
          else {
            local_1bc = (float *)FUN_0065e340(*(undefined4 *)(in_ECX + 200),uVar2,0);
          }
        }
        else {
          local_1bc = (float *)FUN_0065e6b0(uVar2);
        }
        local_1c0 = 0.0;
        if (local_1bc != (float *)0x0) {
          if ((int *)local_1bc[10] == (int *)0x0) {
            if (local_1bc[0xb] != 0.0) {
              (**(code **)(**(int **)(in_ECX + 4) + 0x38))(local_b0);
              fVar13 = local_b0[0];
              pfVar7 = local_b0;
              pfVar8 = local_1b0;
              for (iVar10 = 0x10; iVar10 != 0; iVar10 = iVar10 + -1) {
                *pfVar8 = *pfVar7;
                pfVar7 = pfVar7 + 1;
                pfVar8 = pfVar8 + 1;
              }
              uVar1 = *(undefined8 *)local_1bc;
              local_d0._0_4_ = (float)uVar1;
              local_d0._4_4_ = (float)((ulonglong)uVar1 >> 0x20);
              local_d8 = CONCAT44(fStack_c,local_10);
              fVar15 = local_10 + (float)local_d0 * local_1cc;
              fVar14 = fStack_c + local_d0._4_4_ * local_1cc;
              local_80 = local_a0 * fVar14 + fVar13 * fVar15 + local_80;
              local_7c = local_9c * fVar14 + local_b0[1] * fVar15 + local_7c;
              local_78 = local_98 * fVar14 + local_b0[2] * fVar15 + local_78;
              local_74 = local_94 * fVar14 + local_b0[3] * fVar15 + local_74;
              if (local_1cc != 1.0) {
                local_b0[2] = local_b0[2] * local_1cc;
                local_b0[0] = fVar13 * local_1cc;
                local_98 = local_98 * local_1cc;
                local_b0[1] = local_b0[1] * local_1cc;
                local_b0[3] = local_b0[3] * local_1cc;
                local_a0 = local_a0 * local_1cc;
                local_9c = local_9c * local_1cc;
                local_94 = local_94 * local_1cc;
              }
              local_d0 = uVar1;
              (**(code **)(**(int **)(in_ECX + 4) + 0x3c))(local_b0);
              FUN_00632910(0);
              (**(code **)(**(int **)(in_ECX + 4) + 0x3c))(local_1b0);
            }
          }
          else {
            (**(code **)(*(int *)local_1bc[10] + 4))(1);
            if (*(char *)(in_ECX + 0x108) == '\0') {
              local_138 = *(float *)(in_ECX + 0x98) * local_1c4 +
                          local_1b8 * *(float *)(in_ECX + 0x88) + *(float *)(in_ECX + 0xb8);
              fStack_134 = *(float *)(in_ECX + 0x9c) * local_1c4 +
                           *(float *)(in_ECX + 0x8c) * local_1b8 + *(float *)(in_ECX + 0xbc);
              fVar14 = 1.0 / (*(float *)(in_ECX + 0xa4) * local_1c4 +
                              *(float *)(in_ECX + 0x94) * local_1b8 + *(float *)(in_ECX + 0xc4));
              fVar13 = local_138 * fVar14;
              fVar14 = fStack_134 * fVar14;
              _local_38 = CONCAT44(fVar14,fVar13);
              local_28[1] = local_1bc[1] + fVar14;
              local_28[0] = fVar13 + *local_1bc;
              iVar10 = 0;
              do {
                iVar11 = iVar10 + 4;
                *(int *)((int)local_118 + iVar10) = (int)*(float *)((int)local_28 + iVar10);
                iVar10 = iVar11;
              } while (iVar11 < 8);
              local_c8 = (float)local_118[0];
              local_c4 = (float)local_118[1];
              local_c0 = 0x3f800000;
              local_bc = 0x3f800000;
              local_160[2] = 0;
              local_160[3] = 0;
              (**(code **)(**(int **)(in_ECX + 4) + 0x14))
                        (&local_c8,local_1bc + 2,local_160 + 2,&local_c0,param_4);
            }
            else {
              iVar10 = 0;
              do {
                pfVar7 = local_1bc + iVar10;
                iVar10 = iVar10 + 1;
                aiStack_6c[iVar10] = (int)*pfVar7;
              } while (iVar10 < 2);
              local_128 = *(float *)(in_ECX + 0x98) * local_1c4 +
                          local_1b8 * *(float *)(in_ECX + 0x88) + *(float *)(in_ECX + 0xb8);
              fStack_124 = *(float *)(in_ECX + 0x9c) * local_1c4 +
                           *(float *)(in_ECX + 0x8c) * local_1b8 + *(float *)(in_ECX + 0xbc);
              fVar13 = 1.0 / (*(float *)(in_ECX + 0xa4) * local_1c4 +
                              *(float *)(in_ECX + 0x94) * local_1b8 + *(float *)(in_ECX + 0xc4));
              local_58[5] = fStack_124 * fVar13;
              local_58[4] = local_128 * fVar13;
              iVar10 = 0;
              do {
                iVar11 = iVar10 + 4;
                *(int *)((int)&local_170 + iVar10) = (int)*(float *)((int)local_58 + iVar10 + 0x10);
                iVar10 = iVar11;
              } while (iVar11 < 8);
              local_b8 = local_170;
              uVar1 = local_b8;
              local_b8._0_4_ = (int)local_170;
              local_b8._4_4_ = (int)((ulonglong)local_170 >> 0x20);
              local_108 = (float)((int)local_b8 + aiStack_6c[1]);
              local_104 = (float)(local_b8._4_4_ + aiStack_6c[2]);
              local_100[2] = 0x3f800000;
              local_100[3] = 0x3f800000;
              local_160[6] = 0;
              local_160[7] = 0;
              local_b8 = uVar1;
              (**(code **)(**(int **)(in_ECX + 4) + 0x14))
                        (&local_108,local_1bc + 2,local_160 + 6,local_100 + 2,param_4);
            }
          }
          local_1c0 = local_1bc[4];
        }
        if (0.0 < *(float *)(in_ECX + 0xe8)) {
          puVar6 = param_1;
          if (7 < (uint)param_1[5]) {
            puVar6 = (undefined4 *)*param_1;
          }
          uVar2 = *(undefined2 *)((int)puVar6 + (int)local_1b4 * 2);
          if (*(char *)(in_ECX + 0x108) == '\0') {
            pfVar7 = (float *)FUN_0065ea80(*(undefined4 *)(in_ECX + 0xcc),uVar2,1);
          }
          else {
            pfVar7 = (float *)FUN_0065e340(*(undefined4 *)(in_ECX + 0xcc),uVar2,1);
          }
          if ((pfVar7 != (float *)0x0) && ((int *)pfVar7[10] != (int *)0x0)) {
            (**(code **)(*(int *)pfVar7[10] + 4))(1);
            if (*(char *)(in_ECX + 0x108) == '\0') {
              local_130 = *(float *)(in_ECX + 0x98) * local_1c4 +
                          local_1b8 * *(float *)(in_ECX + 0x88) + *(float *)(in_ECX + 0xb8);
              fStack_12c = *(float *)(in_ECX + 0x9c) * local_1c4 +
                           *(float *)(in_ECX + 0x8c) * local_1b8 + *(float *)(in_ECX + 0xbc);
              fVar14 = 1.0 / (*(float *)(in_ECX + 0xa4) * local_1c4 +
                              *(float *)(in_ECX + 0x94) * local_1b8 + *(float *)(in_ECX + 0xc4));
              fVar13 = fVar14 * local_130;
              fVar14 = fVar14 * fStack_12c;
              _local_60 = CONCAT44(fVar14,fVar13);
              local_58[1] = pfVar7[1] + fVar14;
              local_58[0] = *pfVar7 + fVar13;
              iVar10 = 0;
              do {
                iVar11 = iVar10 + 4;
                *(int *)((int)local_160 + iVar10 + 0x20) = (int)*(float *)((int)local_58 + iVar10);
                iVar10 = iVar11;
              } while (iVar11 < 8);
              local_e8 = (float)local_160[8];
              piVar17 = local_160 + 4;
              local_e4 = (float)local_160[9];
              piVar16 = local_160;
              local_160[4] = 0x3f800000;
              local_160[5] = 0x3f800000;
              local_160[0] = 0;
              local_160[1] = 0;
              pfVar8 = &local_e8;
            }
            else {
              iVar10 = 0;
              do {
                iVar11 = iVar10 + 1;
                local_28[iVar10 + 4] = (float)(int)pfVar7[iVar10];
                iVar10 = iVar11;
              } while (iVar11 < 2);
              local_e0 = *(float *)(in_ECX + 0x98) * local_1c4 +
                         local_1b8 * *(float *)(in_ECX + 0x88) + *(float *)(in_ECX + 0xb8);
              fStack_dc = *(float *)(in_ECX + 0x9c) * local_1c4 +
                          *(float *)(in_ECX + 0x8c) * local_1b8 + *(float *)(in_ECX + 0xbc);
              fVar13 = 1.0 / (*(float *)(in_ECX + 0xa4) * local_1c4 +
                              *(float *)(in_ECX + 0x94) * local_1b8 + *(float *)(in_ECX + 0xc4));
              local_58[3] = fVar13 * fStack_dc;
              local_58[2] = fVar13 * local_e0;
              iVar10 = 0;
              do {
                iVar11 = iVar10 + 4;
                *(int *)((int)&local_168 + iVar10) = (int)*(float *)((int)local_58 + iVar10 + 8);
                iVar10 = iVar11;
              } while (iVar11 < 8);
              local_f0 = local_168;
              uVar1 = local_f0;
              local_f0._0_4_ = (int)local_168;
              local_f0._4_4_ = (int)((ulonglong)local_168 >> 0x20);
              local_120 = (float)((int)local_f0 + (int)local_18);
              piVar17 = local_100;
              local_11c = (float)(local_f0._4_4_ + (int)local_14);
              piVar16 = local_118 + 2;
              local_100[0] = 0x3f800000;
              local_100[1] = 0x3f800000;
              local_118[2] = 0;
              local_118[3] = 0;
              pfVar8 = &local_120;
              local_f0 = uVar1;
            }
            (**(code **)(**(int **)(in_ECX + 4) + 0x14))(pfVar8,pfVar7 + 2,piVar16,piVar17,param_5);
          }
        }
        if ((int)local_1b4 < iVar3 + -1) {
          if (*(int *)(in_ECX + 0xf4) == 0) {
            local_1b4 = param_1;
            if (*(char *)(in_ECX + 0x108) != '\0') {
              puVar6 = param_1;
              if (7 < (uint)param_1[5]) {
                local_1b4 = (undefined4 *)*param_1;
                puVar6 = (undefined4 *)*param_1;
              }
              uVar9 = FUN_0068fb90(*(undefined4 *)(in_ECX + 0xd8),
                                   *(undefined2 *)((int)puVar6 + (int)puVar4 * 2 + 2),0,local_28 + 2
                                  );
              uVar9 = FUN_0068fb90(*(undefined4 *)(in_ECX + 0xd8),
                                   *(undefined2 *)((int)local_1b4 + (int)puVar4 * 2),uVar9);
              FUN_0068fa30(*(undefined4 *)(in_ECX + 0xd8),uVar9);
              local_1c0 = (float)((int)local_28[2] >> 6) + local_1c0;
              local_1b8 = *(float *)(in_ECX + 0xec) + local_1b8;
              goto LAB_0065ceb3;
            }
            puVar6 = param_1;
            if (7 < (uint)param_1[5]) {
              local_1b4 = (undefined4 *)*param_1;
              puVar6 = (undefined4 *)*param_1;
            }
            uVar9 = FUN_0068fb90(*(undefined4 *)(in_ECX + 0xd8),
                                 *(undefined2 *)((int)puVar6 + (int)puVar4 * 2 + 2),2,local_28 + 2);
            uVar9 = FUN_0068fb90(*(undefined4 *)(in_ECX + 0xd8),
                                 *(undefined2 *)((int)local_1b4 + (int)puVar4 * 2),uVar9);
            FUN_0068fa30(*(undefined4 *)(in_ECX + 0xd8),uVar9);
            local_1c0 = ((float)(int)local_28[2] * *(float *)(in_ECX + 0xe0)) /
                        (float)*(ushort *)(*(int *)(in_ECX + 0xd8) + 0x44) + local_1c0;
          }
          local_1b8 = *(float *)(in_ECX + 0xec) + local_1b8;
        }
LAB_0065ceb3:
        if (*(char *)(in_ECX + 0x108) == '\0') {
          local_10 = local_1c0 * local_1cc + local_1b8;
        }
        else {
          local_10 = (float)(int)(local_1b8 + local_1c0);
        }
      }
      local_1b4 = (undefined4 *)((int)puVar4 + 1);
      local_1b8 = local_10;
    } while ((int)local_1b4 < iVar3);
  }
  (**(code **)(**(int **)(in_ECX + 4) + 0x2c))();
  if (*(int *)(in_ECX + 0xf4) != 0) {
    iVar3 = *(int *)(in_ECX + 4);
    if (*(int *)(iVar3 + 0x148) != 0) {
      iVar10 = *(int *)(*(int *)(iVar3 + 0x144) + 4);
      *(undefined4 *)(iVar3 + 0x15c) = *(undefined4 *)(iVar10 + 8);
      *(undefined4 *)(iVar3 + 0x160) = *(undefined4 *)(iVar10 + 0xc);
      *(undefined4 *)(iVar3 + 0x164) = *(undefined4 *)(iVar10 + 0x10);
      *(undefined4 *)(iVar3 + 0x168) = *(undefined4 *)(iVar10 + 0x14);
      piVar17 = (int *)(*(int **)(iVar3 + 0x144))[1];
      if (piVar17 != *(int **)(iVar3 + 0x144)) {
        *(int *)piVar17[1] = *piVar17;
        *(int *)(*piVar17 + 4) = piVar17[1];
                    /* WARNING: Subroutine does not return */
        operator_delete(piVar17);
      }
    }
    iVar3 = *(int *)(in_ECX + 4);
    if (*(int *)(iVar3 + 0x150) != 0) {
      iVar10 = *(int *)(*(int *)(iVar3 + 0x14c) + 4);
      *(undefined4 *)(iVar3 + 0x16c) = *(undefined4 *)(iVar10 + 8);
      *(undefined4 *)(iVar3 + 0x170) = *(undefined4 *)(iVar10 + 0xc);
      *(undefined4 *)(iVar3 + 0x174) = *(undefined4 *)(iVar10 + 0x10);
      *(undefined4 *)(iVar3 + 0x178) = *(undefined4 *)(iVar10 + 0x14);
      piVar17 = (int *)(*(int **)(iVar3 + 0x14c))[1];
      if (piVar17 != *(int **)(iVar3 + 0x14c)) {
        *(int *)piVar17[1] = *piVar17;
        *(int *)(*piVar17 + 4) = piVar17[1];
                    /* WARNING: Subroutine does not return */
        operator_delete(piVar17);
      }
    }
    iVar3 = *(int *)(in_ECX + 4);
    if (*(int *)(iVar3 + 0x158) != 0) {
      iVar10 = *(int *)(*(int *)(iVar3 + 0x154) + 4);
      *(undefined4 *)(iVar3 + 0x17c) = *(undefined4 *)(iVar10 + 8);
      *(undefined4 *)(iVar3 + 0x180) = *(undefined4 *)(iVar10 + 0xc);
      *(undefined4 *)(iVar3 + 0x184) = *(undefined4 *)(iVar10 + 0x10);
      *(undefined4 *)(iVar3 + 0x188) = *(undefined4 *)(iVar10 + 0x14);
      piVar17 = (int *)(*(int **)(iVar3 + 0x154))[1];
      if (piVar17 != *(int **)(iVar3 + 0x154)) {
        *(int *)piVar17[1] = *piVar17;
        *(int *)(*piVar17 + 4) = piVar17[1];
                    /* WARNING: Subroutine does not return */
        operator_delete(piVar17);
      }
    }
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


/* FUN_0065d4c0 @ 0065d4c0  kind=gamemisc  attributed-by=none  size=97 */

void FUN_0065d4c0(int *param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int *in_ECX;
  
  iVar1 = FUN_004e3790(param_2);
  if (iVar1 != *in_ECX) {
    piVar2 = (int *)(iVar1 + 0x10);
    if (7 < *(uint *)(iVar1 + 0x24)) {
      piVar2 = (int *)*piVar2;
    }
    iVar3 = FUN_00428db0(0,*(undefined4 *)(param_2 + 0x10),piVar2,*(undefined4 *)(iVar1 + 0x20));
    if (-1 < iVar3) {
      *param_1 = iVar1;
      return;
    }
  }
  *param_1 = *in_ECX;
  return;
}


/* FUN_0065f260 @ 0065f260  kind=gamemisc  attributed-by=none  size=360 */

void FUN_0065f260(undefined4 param_1,int param_2,int *param_3)

{
  undefined4 ***pppuVar1;
  int iVar2;
  int in_ECX;
  undefined4 ***pppuVar3;
  undefined4 **local_30;
  undefined4 **local_2c [4];
  int local_1c;
  uint local_18;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006f7088;
  local_10 = ExceptionList;
  local_14 = DAT_0076aa78 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  FUN_0065b8f0(local_14);
  if (in_ECX + 8 != param_2) {
    FUN_0040f680(param_2,0,0xffffffff);
  }
  local_30 = (undefined4 **)0x2e;
  iVar2 = FUN_00639a70(&local_30,0xffffffff,1);
  FUN_0043a450(local_2c,iVar2 + 1,(*(int *)(param_2 + 0x10) - iVar2) + -1);
  local_30 = local_2c;
  if (7 < local_18) {
    local_30 = local_2c[0];
  }
  local_8 = 0;
  pppuVar1 = (undefined4 ***)((int)local_30 + local_1c * 2);
  pppuVar3 = local_2c;
  if (7 < local_18) {
    pppuVar3 = (undefined4 ***)local_2c[0];
  }
  if (pppuVar3 != pppuVar1) {
    FUN_0064bdf0(&local_30,pppuVar3,pppuVar1,local_30,toupper_exref);
  }
  iVar2 = FUN_00428db0(0,local_1c,&DAT_0071eb48,3);
  if ((iVar2 == 0) || (iVar2 = FUN_00428db0(0,local_1c,&DAT_0071ebb4,3), iVar2 == 0)) {
    if (((param_3 == (int *)0x0) ||
        (FUN_0065d4c0(&local_30,param_2), (undefined4 ***)local_30 == (undefined4 ***)*param_3)) ||
       (local_30[10] == local_30[0xb])) {
      FUN_0065fb80(param_1,param_2);
    }
    else {
      FUN_0065fef0(param_1,param_2,local_30[10],(int)local_30[0xb] - (int)local_30[10]);
    }
  }
  else {
    FUN_0065f3d0();
  }
  if (local_18 < 8) {
    ExceptionList = local_10;
    __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
    return;
  }
                    /* WARNING: Subroutine does not return */
  operator_delete(local_2c[0]);
}


/* FUN_0065f3d0 @ 0065f3d0  kind=gamemisc  attributed-by=none  size=1958 */

void __thiscall FUN_0065f3d0(void *this,undefined4 *param_2)

{
  LPCRITICAL_SECTION lpCriticalSection;
  uint *puVar1;
  float fVar2;
  float fVar3;
  char cVar4;
  undefined4 *puVar5;
  int iVar6;
  undefined4 *puVar7;
  undefined4 uVar8;
  undefined4 **ppuVar9;
  float *pfVar10;
  undefined8 *puVar11;
  ushort ****ppppuVar12;
  undefined4 *puVar13;
  int *piVar14;
  undefined4 *puVar15;
  float fVar16;
  undefined1 local_188 [16];
  basic_streambuf<char,std::char_traits<char>_> local_178 [2];
  basic_istream<char,std::char_traits<char>_> local_170;
  int *local_16c;
  char *local_140;
  char *local_13c;
  undefined4 local_138;
  undefined1 local_134;
  undefined1 local_133;
  undefined4 local_130;
  char local_12c;
  FILE *local_128;
  basic_ios<char,std::char_traits<char>_> local_118 [6];
  void *local_d0;
  float local_cc;
  LPCRITICAL_SECTION local_c8;
  float local_c4;
  float local_c0;
  undefined4 *local_bc;
  undefined4 *local_b8;
  undefined4 *local_b4;
  undefined1 local_b0 [8];
  void *local_a8 [4];
  undefined4 local_98;
  uint local_94;
  float local_90;
  float fStack_8c;
  float local_88;
  float fStack_84;
  float local_80;
  float fStack_7c;
  undefined4 local_78;
  undefined4 local_74;
  undefined8 local_70;
  void *local_68;
  undefined4 local_64;
  undefined4 local_60;
  ushort ***local_5c [4];
  undefined4 local_4c;
  uint local_48;
  undefined8 local_44;
  float local_3c;
  float fStack_38;
  float local_34;
  float fStack_30;
  float local_2c;
  float fStack_28;
  float local_24;
  float fStack_20;
  undefined8 local_1c;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006f70d6;
  local_10 = ExceptionList;
  local_14 = DAT_0076aa78 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  lpCriticalSection = (LPCRITICAL_SECTION)((int)this + 0x10c);
  local_d0 = this;
  local_c8 = lpCriticalSection;
  EnterCriticalSection(lpCriticalSection);
  std::basic_ifstream<char,std::char_traits<char>_>::basic_ifstream<char,std::char_traits<char>_>
            ((basic_ifstream<char,std::char_traits<char>_> *)local_188,1);
  local_8 = 0;
  puVar7 = param_2;
  if (7 < (uint)param_2[5]) {
    puVar7 = (undefined4 *)*param_2;
  }
  iVar6 = FUN_00653210(puVar7,0x21,0x40);
  if (iVar6 == 0) {
    std::basic_ios<char,std::char_traits<char>_>::setstate
              ((basic_ios<char,std::char_traits<char>_> *)
               (local_188 + *(int *)(local_188._0_4_ + 4)),2,false);
  }
  else {
    std::basic_ios<char,std::char_traits<char>_>::clear
              ((basic_ios<char,std::char_traits<char>_> *)
               (local_188 + *(int *)(local_188._0_4_ + 4)),0,false);
  }
  if (local_128 == (FILE *)0x0) {
    LeaveCriticalSection(lpCriticalSection);
  }
  else {
    iVar6 = FUN_0040c4c0();
    if (iVar6 == 0) {
      std::basic_ios<char,std::char_traits<char>_>::setstate
                ((basic_ios<char,std::char_traits<char>_> *)
                 (local_188 + *(int *)(local_188._0_4_ + 4)),2,false);
    }
    local_b4 = (undefined4 *)0x2f;
    puVar7 = (undefined4 *)FUN_00639a70(&local_b4,0xffffffff,1);
    local_b4 = (undefined4 *)0x5c;
    local_b8 = puVar7;
    local_b4 = (undefined4 *)FUN_00639a70(&local_b4,0xffffffff,1);
    ppuVar9 = &local_b4;
    if ((int)local_b4 <= (int)puVar7) {
      ppuVar9 = &local_b8;
    }
    FUN_0043a450(local_a8,(int)*ppuVar9 + 1,(param_2[4] - (int)*ppuVar9) + -1);
    local_8 = CONCAT31(local_8._1_3_,1);
    uVar8 = FUN_0064f4e0(0,0,0,0,local_a8);
    *(undefined4 *)((int)this + 0xf4) = uVar8;
    if ((void **)((int)this + 0x38) != local_a8) {
      FUN_0040f680(local_a8,0,0xffffffff);
    }
    FUN_0040f7a0(&PTR_006fccac,0);
    local_44 = 0;
    local_68 = (void *)0x0;
    local_64 = 0;
    local_60 = 0;
    FUN_0046da00(1,&local_44);
    local_8._0_1_ = 2;
    FUN_00653770(param_2,*(undefined4 *)((int)this + 0xf4),3,0,&local_68);
    local_8._0_1_ = 1;
    if (local_68 != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      operator_delete(local_68);
    }
    puVar1 = (uint *)(*(int *)((int)this + 0xf4) + 200);
    *puVar1 = *puVar1 | 8;
    *(undefined4 *)((int)this + 0xf8) = 0;
    *(undefined4 *)((int)this + 0xfc) = 0;
    *(undefined4 *)((int)this + 0x100) = 0;
    *(undefined4 *)((int)this + 0x104) = 0;
    piVar14 = (int *)**(int **)(*(int *)((int)this + 0xf4) + 0x2c);
    if (piVar14 != *(int **)(*(int *)((int)this + 0xf4) + 0x2c)) {
      do {
        local_8._0_1_ = 1;
        iVar6 = piVar14[2];
        if ((*(int *)(iVar6 + 0x1c) == 1) && (*(int *)(iVar6 + 0x34) != 0)) {
          local_5c[0] = (ushort ***)((uint)local_5c[0] & 0xffff0000);
          local_48 = 7;
          local_4c = 0;
          FUN_0040f680(iVar6 + 0xc,0,0xffffffff);
          puVar7 = *(undefined4 **)((int)this + 0xd0);
          ppppuVar12 = local_5c;
          if (7 < local_48) {
            ppppuVar12 = (ushort ****)local_5c[0];
          }
          local_8._0_1_ = 3;
          local_b4 = (undefined4 *)(uint)*(ushort *)ppppuVar12;
          cVar4 = *(char *)((int)puVar7[1] + 0xd);
          puVar5 = puVar7;
          puVar15 = (undefined4 *)puVar7[1];
          while (cVar4 == '\0') {
            if ((int)puVar15[4] < (int)local_b4) {
              puVar13 = (undefined4 *)puVar15[2];
              puVar15 = puVar5;
            }
            else {
              puVar13 = (undefined4 *)*puVar15;
            }
            puVar5 = puVar15;
            puVar15 = puVar13;
            this = local_d0;
            cVar4 = *(char *)((int)puVar13 + 0xd);
          }
          if ((puVar5 == puVar7) || ((int)local_b4 < (int)puVar5[4])) {
            local_bc = puVar7;
            ppuVar9 = &local_bc;
          }
          else {
            local_b8 = puVar5;
            ppuVar9 = &local_b8;
          }
          if (*ppuVar9 == puVar7) {
            iVar6 = *(int *)(piVar14[2] + 0x38);
            pfVar10 = (float *)(**(code **)(**(int **)(piVar14[2] + 0x34) + 0x18))(local_b0);
            fVar2 = pfVar10[1];
            fVar3 = *pfVar10;
            local_90 = *(float *)(iVar6 + 0x1c0) * fVar2 + *(float *)(iVar6 + 0x1b0) * fVar3 +
                       *(float *)(iVar6 + 0x1e0);
            local_cc = 1.0 / (*(float *)(iVar6 + 0x1bc) * fVar3 + *(float *)(iVar6 + 0x1cc) * fVar2
                             + *(float *)(iVar6 + 0x1ec));
            fStack_8c = *(float *)(iVar6 + 0x1b4) * fVar3 + *(float *)(iVar6 + 0x1c4) * fVar2 +
                        *(float *)(iVar6 + 0x1e4);
            iVar6 = *(int *)(piVar14[2] + 0x38);
            local_70 = CONCAT44(fStack_8c,local_90);
            local_c4 = local_cc * local_90;
            local_cc = local_cc * fStack_8c;
            pfVar10 = (float *)(**(code **)(**(int **)(piVar14[2] + 0x34) + 0x1c))(&local_64);
            fVar2 = pfVar10[1];
            fVar3 = *pfVar10;
            fVar16 = 1.0 / (*(float *)(iVar6 + 0x1bc) * fVar3 + *(float *)(iVar6 + 0x1cc) * fVar2 +
                           *(float *)(iVar6 + 0x1ec));
            fStack_7c = *(float *)(iVar6 + 0x1b4) * fVar3 + *(float *)(iVar6 + 0x1c4) * fVar2 +
                        *(float *)(iVar6 + 0x1e4);
            local_80 = *(float *)(iVar6 + 0x1b0) * fVar3 + *(float *)(iVar6 + 0x1c0) * fVar2 +
                       *(float *)(iVar6 + 0x1e0);
            local_c0 = fVar16 * fStack_7c;
            _local_3c = CONCAT44(local_c0,fVar16 * local_80);
            FUN_00631db0(&local_78,0);
            FUN_00631520(&local_44,0);
            if ((~(byte)(*(uint *)(piVar14[2] + 200) >> 1) & 1) == 0) {
              FUN_00636990(0);
            }
            puVar11 = operator_new(0x34);
            ppppuVar12 = local_5c;
            if (7 < local_48) {
              ppppuVar12 = (ushort ****)local_5c[0];
            }
            local_b4 = (undefined4 *)(uint)*(ushort *)ppppuVar12;
            puVar7 = (undefined4 *)FUN_00468910(&local_b4);
            local_2c = local_3c - local_c4;
            local_88 = local_c4;
            *puVar7 = puVar11;
            iVar6 = piVar14[2];
            fStack_28 = fStack_38 - local_cc;
            puVar11[2] = CONCAT44(fStack_28,local_2c);
            local_34 = local_3c - local_c4;
            fStack_30 = fStack_38 - local_cc;
            puVar11[1] = CONCAT44(fStack_30,local_34);
            fStack_84 = local_c0;
            local_1c = CONCAT44(local_c0 * -1.0,local_c4 * -1.0);
            *puVar11 = local_1c;
            *(int *)((int)puVar11 + 0x2c) = iVar6;
            *(undefined4 *)(puVar11 + 3) = local_78;
            *(undefined4 *)((int)puVar11 + 0x1c) = local_74;
            *(undefined4 *)(puVar11 + 4) = (undefined4)local_44;
            *(undefined4 *)((int)puVar11 + 0x24) = local_44._4_4_;
            *(undefined4 *)(puVar11 + 5) = 0;
            *(undefined1 *)(puVar11 + 6) = 1;
            *(undefined4 *)((int)this + 0xf8) = *(undefined4 *)puVar11;
            *(undefined4 *)((int)this + 0xfc) = *(undefined4 *)((int)puVar11 + 4);
            local_24 = (float)*puVar11;
            local_24 = *(float *)(puVar11 + 1) + local_24;
            fStack_20 = (float)((ulonglong)*puVar11 >> 0x20);
            fStack_20 = *(float *)((int)puVar11 + 0xc) + fStack_20;
            *(float *)((int)this + 0x100) = local_24;
            *(float *)((int)this + 0x104) = fStack_20;
          }
          local_8._0_1_ = 1;
          if (7 < local_48) {
                    /* WARNING: Subroutine does not return */
            operator_delete(local_5c[0]);
          }
        }
        piVar14 = (int *)*piVar14;
      } while (piVar14 != (int *)*(int *)(*(int *)((int)this + 0xf4) + 0x2c));
    }
    local_8._0_1_ = 1;
    LeaveCriticalSection(local_c8);
    if (7 < local_94) {
                    /* WARNING: Subroutine does not return */
      operator_delete(local_a8[0]);
    }
    local_94 = 7;
    local_98 = 0;
    local_a8[0] = (void *)((uint)local_a8[0] & 0xffff0000);
  }
  local_8 = 0xffffffff;
                    /* inlined constructor or destructor (approx location) for
                       std::basic_ifstream<char,std::char_traits<char>_> */
  *(basic_ifstream<char,std::char_traits<char>_>_vftable **)
   (local_188 + *(int *)(local_188._0_4_ + 4)) =
       &std::basic_ifstream<char,std::char_traits<char>_>::vftable;
  *(int *)(&stack0xfffffe74 + *(int *)(local_188._0_4_ + 4)) = *(int *)(local_188._0_4_ + 4) + -0x70
  ;
                    /* inlined constructor or destructor (approx location) for
                       std::basic_filebuf<char,std::char_traits<char>_> */
  local_178[0] = (basic_streambuf<char,std::char_traits<char>_>)
                 &std::basic_filebuf<char,std::char_traits<char>_>::vftable;
  if ((local_128 != (FILE *)0x0) && ((undefined1 *)*local_16c == &local_134)) {
    std::basic_streambuf<char,std::char_traits<char>_>::setg
              (local_178,local_140,local_13c,local_13c);
  }
  if (local_12c != '\0') {
    if (local_128 != (FILE *)0x0) {
      FUN_00405cc0();
      fclose(local_128);
    }
    local_12c = '\0';
    local_133 = 0;
    std::basic_streambuf<char,std::char_traits<char>_>::_Init(local_178);
    local_128 = (FILE *)0x0;
    local_130 = DAT_0076af5c;
    local_138 = 0;
  }
  std::basic_streambuf<char,std::char_traits<char>_>::~basic_streambuf<char,std::char_traits<char>_>
            (local_178);
  std::basic_istream<char,std::char_traits<char>_>::~basic_istream<char,std::char_traits<char>_>
            (&local_170);
  std::basic_ios<char,std::char_traits<char>_>::~basic_ios<char,std::char_traits<char>_>(local_118);
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}


/* FUN_0065fb80 @ 0065fb80  kind=gamemisc  attributed-by=none  size=837 */

void FUN_0065fb80(undefined4 param_1,undefined4 param_2)

{
  int *piVar1;
  char cVar2;
  ushort uVar3;
  char *pcVar4;
  int iVar5;
  uint uVar6;
  undefined4 *puVar7;
  int iVar8;
  undefined4 *puVar9;
  int in_ECX;
  char *pcVar10;
  void *local_44 [4];
  undefined4 local_34;
  uint local_30;
  void *local_2c [4];
  undefined4 local_1c;
  uint local_18;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006f7118;
  local_10 = ExceptionList;
  uVar6 = DAT_0076aa78 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_14 = uVar6;
  EnterCriticalSection((LPCRITICAL_SECTION)(in_ECX + 0x10c));
  puVar7 = (undefined4 *)FUN_00659f50(local_2c,param_2,uVar6);
  if (0xf < (uint)puVar7[5]) {
    puVar7 = (undefined4 *)*puVar7;
  }
  piVar1 = (int *)(in_ECX + 0xd8);
  iVar8 = FUN_00694f00(param_1,puVar7,0,piVar1);
  if (0xf < local_18) {
                    /* WARNING: Subroutine does not return */
    operator_delete(local_2c[0]);
  }
  if (iVar8 == 0) {
    pcVar4 = *(char **)(*piVar1 + 0x14);
    local_30 = 0xf;
    local_34 = 0;
    local_44[0] = (void *)((uint)local_44[0] & 0xffffff00);
    if (*pcVar4 == '\0') {
      iVar8 = 0;
    }
    else {
      pcVar10 = pcVar4;
      do {
        cVar2 = *pcVar10;
        pcVar10 = pcVar10 + 1;
      } while (cVar2 != '\0');
      iVar8 = (int)pcVar10 - (int)(pcVar4 + 1);
    }
    FUN_0040c280(pcVar4,iVar8);
    local_8 = 0;
    puVar9 = (undefined4 *)FUN_006089c0(local_2c,local_44);
    puVar7 = (undefined4 *)(in_ECX + 0x38);
    if (puVar7 != puVar9) {
      if (7 < *(uint *)(in_ECX + 0x4c)) {
                    /* WARNING: Subroutine does not return */
        operator_delete((void *)*puVar7);
      }
      *(undefined4 *)(in_ECX + 0x4c) = 7;
      *(undefined4 *)(in_ECX + 0x48) = 0;
      *(undefined2 *)puVar7 = 0;
      FUN_0040f110(puVar9);
    }
    if (7 < local_18) {
                    /* WARNING: Subroutine does not return */
      operator_delete(local_2c[0]);
    }
    local_18 = 7;
    local_1c = 0;
    local_2c[0] = (void *)((uint)local_2c[0] & 0xffff0000);
    local_8 = 0xffffffff;
    if (0xf < local_30) {
                    /* WARNING: Subroutine does not return */
      operator_delete(local_44[0]);
    }
    pcVar4 = *(char **)(*piVar1 + 0x18);
    local_30 = 0xf;
    local_34 = 0;
    local_44[0] = (void *)((uint)local_44[0] & 0xffffff00);
    if (*pcVar4 == '\0') {
      iVar8 = 0;
    }
    else {
      pcVar10 = pcVar4;
      do {
        cVar2 = *pcVar10;
        pcVar10 = pcVar10 + 1;
      } while (cVar2 != '\0');
      iVar8 = (int)pcVar10 - (int)(pcVar4 + 1);
    }
    FUN_0040c280(pcVar4,iVar8);
    local_8 = 1;
    puVar9 = (undefined4 *)FUN_006089c0(local_2c,local_44);
    puVar7 = (undefined4 *)(in_ECX + 0x20);
    if (puVar7 != puVar9) {
      if (7 < *(uint *)(in_ECX + 0x34)) {
                    /* WARNING: Subroutine does not return */
        operator_delete((void *)*puVar7);
      }
      *(undefined4 *)(in_ECX + 0x34) = 7;
      *(undefined4 *)(in_ECX + 0x30) = 0;
      *(undefined2 *)puVar7 = 0;
      FUN_0040f110(puVar9);
    }
    if (7 < local_18) {
                    /* WARNING: Subroutine does not return */
      operator_delete(local_2c[0]);
    }
    local_18 = 7;
    local_1c = 0;
    local_2c[0] = (void *)((uint)local_2c[0] & 0xffff0000);
    local_8 = 0xffffffff;
    if (0xf < local_30) {
                    /* WARNING: Subroutine does not return */
      operator_delete(local_44[0]);
    }
    iVar8 = FUN_0068fc00(*piVar1);
    if (iVar8 != 0) {
      FUN_00403350(iVar8);
      local_8 = 2;
      puVar9 = (undefined4 *)FUN_006089c0(local_2c,local_44);
      puVar7 = (undefined4 *)(in_ECX + 0x50);
      if (puVar7 != puVar9) {
        if (7 < *(uint *)(in_ECX + 100)) {
                    /* WARNING: Subroutine does not return */
          operator_delete((void *)*puVar7);
        }
        *(undefined4 *)(in_ECX + 100) = 7;
        *(undefined4 *)(in_ECX + 0x60) = 0;
        *(undefined2 *)puVar7 = 0;
        FUN_0040f110(puVar9);
      }
      if (7 < local_18) {
                    /* WARNING: Subroutine does not return */
        operator_delete(local_2c[0]);
      }
      local_18 = 7;
      local_1c = 0;
      local_2c[0] = (void *)((uint)local_2c[0] & 0xffff0000);
      if (0xf < local_30) {
                    /* WARNING: Subroutine does not return */
        operator_delete(local_44[0]);
      }
    }
    iVar8 = *piVar1;
    iVar5 = *(int *)(iVar8 + 0x38);
    uVar3 = *(ushort *)(iVar8 + 0x44);
    *(float *)(in_ECX + 0xf8) = (float)*(int *)(iVar8 + 0x34) / (float)uVar3;
    *(float *)(in_ECX + 0xfc) = (float)iVar5 / (float)uVar3;
    iVar8 = *piVar1;
    iVar5 = *(int *)(iVar8 + 0x40);
    uVar3 = *(ushort *)(iVar8 + 0x44);
    *(float *)(in_ECX + 0x100) = (float)*(int *)(iVar8 + 0x3c) / (float)uVar3;
    *(float *)(in_ECX + 0x104) = (float)iVar5 / (float)uVar3;
    FUN_00695f10(param_1,in_ECX + 0xdc);
    LeaveCriticalSection((LPCRITICAL_SECTION)(in_ECX + 0x10c));
  }
  else {
    LeaveCriticalSection((LPCRITICAL_SECTION)(in_ECX + 0x10c));
  }
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}


/* FUN_0065fef0 @ 0065fef0  kind=gamemisc  attributed-by=none  size=804 */

void FUN_0065fef0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 *puVar1;
  int *piVar2;
  char cVar3;
  ushort uVar4;
  char *pcVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  undefined4 *puVar9;
  int in_ECX;
  char *pcVar10;
  void *local_44 [4];
  undefined4 local_34;
  uint local_30;
  void *local_2c [4];
  undefined4 local_1c;
  uint local_18;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006f7118;
  local_10 = ExceptionList;
  uVar7 = DAT_0076aa78 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_14 = uVar7;
  EnterCriticalSection((LPCRITICAL_SECTION)(in_ECX + 0x10c));
  piVar2 = (int *)(in_ECX + 0xd8);
  iVar8 = FUN_00694f50(param_1,param_3,param_4,0,piVar2,uVar7);
  if (iVar8 == 0) {
    pcVar5 = *(char **)(*piVar2 + 0x14);
    local_30 = 0xf;
    local_34 = 0;
    local_44[0] = (void *)((uint)local_44[0] & 0xffffff00);
    if (*pcVar5 == '\0') {
      iVar8 = 0;
    }
    else {
      pcVar10 = pcVar5;
      do {
        cVar3 = *pcVar10;
        pcVar10 = pcVar10 + 1;
      } while (cVar3 != '\0');
      iVar8 = (int)pcVar10 - (int)(pcVar5 + 1);
    }
    FUN_0040c280(pcVar5,iVar8);
    local_8 = 0;
    puVar9 = (undefined4 *)FUN_006089c0(local_2c,local_44);
    puVar1 = (undefined4 *)(in_ECX + 0x38);
    if (puVar1 != puVar9) {
      if (7 < *(uint *)(in_ECX + 0x4c)) {
                    /* WARNING: Subroutine does not return */
        operator_delete((void *)*puVar1);
      }
      *(undefined4 *)(in_ECX + 0x4c) = 7;
      *(undefined4 *)(in_ECX + 0x48) = 0;
      *(undefined2 *)puVar1 = 0;
      FUN_0040f110(puVar9);
    }
    if (7 < local_18) {
                    /* WARNING: Subroutine does not return */
      operator_delete(local_2c[0]);
    }
    local_18 = 7;
    local_1c = 0;
    local_2c[0] = (void *)((uint)local_2c[0] & 0xffff0000);
    local_8 = 0xffffffff;
    if (0xf < local_30) {
                    /* WARNING: Subroutine does not return */
      operator_delete(local_44[0]);
    }
    pcVar5 = *(char **)(*piVar2 + 0x18);
    local_30 = 0xf;
    local_34 = 0;
    local_44[0] = (void *)((uint)local_44[0] & 0xffffff00);
    if (*pcVar5 == '\0') {
      iVar8 = 0;
    }
    else {
      pcVar10 = pcVar5;
      do {
        cVar3 = *pcVar10;
        pcVar10 = pcVar10 + 1;
      } while (cVar3 != '\0');
      iVar8 = (int)pcVar10 - (int)(pcVar5 + 1);
    }
    FUN_0040c280(pcVar5,iVar8);
    local_8 = 1;
    puVar9 = (undefined4 *)FUN_006089c0(local_2c,local_44);
    puVar1 = (undefined4 *)(in_ECX + 0x20);
    if (puVar1 != puVar9) {
      if (7 < *(uint *)(in_ECX + 0x34)) {
                    /* WARNING: Subroutine does not return */
        operator_delete((void *)*puVar1);
      }
      *(undefined4 *)(in_ECX + 0x34) = 7;
      *(undefined4 *)(in_ECX + 0x30) = 0;
      *(undefined2 *)puVar1 = 0;
      FUN_0040f110(puVar9);
    }
    if (7 < local_18) {
                    /* WARNING: Subroutine does not return */
      operator_delete(local_2c[0]);
    }
    local_18 = 7;
    local_1c = 0;
    local_2c[0] = (void *)((uint)local_2c[0] & 0xffff0000);
    local_8 = 0xffffffff;
    if (0xf < local_30) {
                    /* WARNING: Subroutine does not return */
      operator_delete(local_44[0]);
    }
    iVar8 = FUN_0068fc00(*piVar2);
    if (iVar8 != 0) {
      FUN_00403350(iVar8);
      local_8 = 2;
      puVar9 = (undefined4 *)FUN_006089c0(local_2c,local_44);
      puVar1 = (undefined4 *)(in_ECX + 0x50);
      if (puVar1 != puVar9) {
        if (7 < *(uint *)(in_ECX + 100)) {
                    /* WARNING: Subroutine does not return */
          operator_delete((void *)*puVar1);
        }
        *(undefined4 *)(in_ECX + 100) = 7;
        *(undefined4 *)(in_ECX + 0x60) = 0;
        *(undefined2 *)puVar1 = 0;
        FUN_0040f110(puVar9);
      }
      if (7 < local_18) {
                    /* WARNING: Subroutine does not return */
        operator_delete(local_2c[0]);
      }
      local_18 = 7;
      local_1c = 0;
      local_2c[0] = (void *)((uint)local_2c[0] & 0xffff0000);
      if (0xf < local_30) {
                    /* WARNING: Subroutine does not return */
        operator_delete(local_44[0]);
      }
    }
    iVar8 = *piVar2;
    iVar6 = *(int *)(iVar8 + 0x38);
    uVar4 = *(ushort *)(iVar8 + 0x44);
    *(float *)(in_ECX + 0xf8) = (float)*(int *)(iVar8 + 0x34) / (float)uVar4;
    *(float *)(in_ECX + 0xfc) = (float)iVar6 / (float)uVar4;
    iVar8 = *piVar2;
    iVar6 = *(int *)(iVar8 + 0x40);
    uVar4 = *(ushort *)(iVar8 + 0x44);
    *(float *)(in_ECX + 0x100) = (float)*(int *)(iVar8 + 0x3c) / (float)uVar4;
    *(float *)(in_ECX + 0x104) = (float)iVar6 / (float)uVar4;
    FUN_00695f10(param_1,in_ECX + 0xdc);
    LeaveCriticalSection((LPCRITICAL_SECTION)(in_ECX + 0x10c));
  }
  else {
    LeaveCriticalSection((LPCRITICAL_SECTION)(in_ECX + 0x10c));
  }
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}


/* FUN_00661940 @ 00661940  kind=gamemisc  attributed-by=none  size=78 */

void FUN_00661940(void *param_1)

{
  if (*(char *)((int)param_1 + 0xd) != '\0') {
    return;
  }
  FUN_00661940(*(undefined4 *)((int)param_1 + 8));
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


/* FUN_00661a20 @ 00661a20  kind=gamemisc  attributed-by=none  size=189 */

undefined4 * FUN_00661a20(undefined4 *param_1,int *param_2,int *param_3)

{
  char cVar1;
  int *piVar2;
  int *piVar3;
  int *piVar4;
  int *in_ECX;
  undefined1 local_8 [4];
  
  piVar2 = (int *)*in_ECX;
  piVar3 = param_2;
  if ((param_2 == (int *)*piVar2) && (param_3 == piVar2)) {
    FUN_00661940(piVar2[1]);
    *(int *)(*in_ECX + 4) = *in_ECX;
    *(int *)*in_ECX = *in_ECX;
    *(int *)(*in_ECX + 8) = *in_ECX;
    in_ECX[1] = 0;
    *param_1 = *(undefined4 *)*in_ECX;
    return param_1;
  }
  while (piVar3 != param_3) {
    param_2 = piVar3;
    if (*(char *)((int)piVar3 + 0xd) == '\0') {
      param_2 = (int *)piVar3[2];
      if (*(char *)((int)param_2 + 0xd) == '\0') {
        cVar1 = *(char *)(*param_2 + 0xd);
        piVar2 = (int *)*param_2;
        while (cVar1 == '\0') {
          cVar1 = *(char *)(*piVar2 + 0xd);
          param_2 = piVar2;
          piVar2 = (int *)*piVar2;
        }
      }
      else {
        cVar1 = *(char *)(piVar3[1] + 0xd);
        piVar4 = (int *)piVar3[1];
        piVar2 = piVar3;
        while ((param_2 = piVar4, cVar1 == '\0' && (piVar2 == (int *)param_2[2]))) {
          cVar1 = *(char *)(param_2[1] + 0xd);
          piVar4 = (int *)param_2[1];
          piVar2 = param_2;
        }
      }
    }
    FUN_00661ae0(local_8,piVar3);
    piVar3 = param_2;
  }
  *param_1 = piVar3;
  return param_1;
}


/* FUN_00661ae0 @ 00661ae0  kind=gamemisc  attributed-by=none  size=647 */

/* WARNING: Removing unreachable block (ram,0x00661bad) */
/* WARNING: Removing unreachable block (ram,0x00661bbd) */
/* WARNING: Removing unreachable block (ram,0x00661bc6) */
/* WARNING: Removing unreachable block (ram,0x00661bc9) */
/* WARNING: Removing unreachable block (ram,0x00661bb9) */
/* WARNING: Removing unreachable block (ram,0x00661bd7) */
/* WARNING: Removing unreachable block (ram,0x00661be6) */
/* WARNING: Removing unreachable block (ram,0x00661bf1) */
/* WARNING: Removing unreachable block (ram,0x00661bed) */
/* WARNING: Removing unreachable block (ram,0x00661be1) */
/* WARNING: Removing unreachable block (ram,0x00661bf4) */

void FUN_00661ae0(undefined4 param_1,int *param_2)

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
              goto LAB_00661d3e;
            }
LAB_00661ce0:
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
            goto LAB_00661ce0;
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
            goto LAB_00661d3e;
          }
        }
        piVar5 = (int *)piVar3[1];
        piVar6 = piVar3;
      } while (piVar3 != *(int **)(*in_ECX + 4));
    }
    *(undefined1 *)(piVar6 + 3) = 1;
  }
LAB_00661d3e:
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


/* FUN_006626d0 @ 006626d0  kind=gamemisc  attributed-by=none  size=88 */

char FUN_006626d0(int param_1)

{
  int iVar1;
  char cVar2;
  int in_ECX;
  int iVar3;
  
  iVar3 = *(int *)(in_ECX + 0x10) - *(int *)(in_ECX + 0xc);
  iVar1 = iVar3 >> 0x1f;
  if (iVar3 / 0xc + iVar1 == iVar1) {
    FUN_0044be20();
    return '\0';
  }
  iVar1 = *(int *)(in_ECX + 0x1c);
  *(int *)(in_ECX + 0x1c) = param_1 + iVar1;
  cVar2 = FUN_00662300(in_ECX + 0xc,iVar1);
  if (cVar2 == '\0') {
    FUN_0044be20();
  }
  return cVar2;
}


/* FUN_00663eb0 @ 00663eb0  kind=gamemisc  attributed-by=none  size=39 */

void FUN_00663eb0(int param_1)

{
  int in_ECX;
  
  if (*(int *)(in_ECX + 0xa8) + *(int *)(in_ECX + 0x7c) * 0x18 != param_1) {
    FUN_0040f680(param_1,0,0xffffffff);
  }
  return;
}


/* FUN_00664bf0 @ 00664bf0  kind=gamemisc  attributed-by=none  size=30 */

int FUN_00664bf0(void)

{
  undefined4 *puVar1;
  int iVar2;
  int in_ECX;
  
  iVar2 = 0;
  for (puVar1 = (undefined4 *)**(undefined4 **)(in_ECX + 0x24);
      puVar1 != *(undefined4 **)(in_ECX + 0x24); puVar1 = (undefined4 *)*puVar1) {
    iVar2 = iVar2 + *(int *)(puVar1[2] + 8);
  }
  return iVar2;
}


/* FUN_00664cf0 @ 00664cf0  kind=gamemisc  attributed-by=none  size=98 */

char FUN_00664cf0(undefined4 param_1)

{
  char cVar1;
  int *in_ECX;
  char cVar2;
  int *piVar3;
  
  cVar2 = '\0';
  *(undefined1 *)((int)in_ECX + 0x2e) = 1;
  if (((char)in_ECX[0xb] != '\0') && (piVar3 = *(int **)in_ECX[9], piVar3 != (int *)in_ECX[9])) {
    do {
      cVar1 = FUN_006626d0(param_1);
      piVar3 = (int *)*piVar3;
      if (cVar1 != '\0') {
        cVar2 = '\x01';
      }
    } while (piVar3 != (int *)in_ECX[9]);
    if (cVar2 != '\0') {
      (**(code **)(*in_ECX + 4))(0);
      return cVar2;
    }
  }
  *(undefined1 *)(in_ECX + 0xb) = 0;
  return '\0';
}


/* FUN_00667ee0 @ 00667ee0  kind=gamemisc  attributed-by=none  size=550 */

void FUN_00667ee0(int *param_1,undefined4 *param_2,void *param_3,undefined4 *param_4)

{
  size_t _Size;
  undefined4 uVar1;
  void *pvVar2;
  int iVar3;
  uint uVar4;
  void *pvVar5;
  int *in_ECX;
  int iVar6;
  uint uVar7;
  undefined4 *puVar8;
  uint uVar9;
  void *_Src;
  
  uVar9 = (uint)param_3;
  iVar3 = (int)param_2 - *in_ECX;
  if (param_3 != (void *)0x0) {
    pvVar2 = (void *)in_ECX[1];
    if ((uint)(in_ECX[2] - (int)pvVar2 >> 2) < param_3) {
      iVar6 = (int)pvVar2 - *in_ECX >> 2;
      if (0x3fffffffU - iVar6 < param_3) {
                    /* WARNING: Subroutine does not return */
        std::_Xlength_error("vector<T> too long");
      }
      uVar4 = FUN_0046dcc0(iVar6 + (int)param_3);
      param_3 = (void *)0x0;
      if ((uVar4 != 0) &&
         ((0x3fffffff < uVar4 || (param_3 = operator_new(uVar4 << 2), param_3 == (void *)0x0)))) {
                    /* WARNING: Subroutine does not return */
        std::_Xbad_alloc();
      }
      iVar6 = (int)param_2 - *in_ECX >> 2;
      puVar8 = (undefined4 *)((int)param_3 + iVar6 * 4);
      for (uVar7 = uVar9; uVar7 != 0; uVar7 = uVar7 - 1) {
        *puVar8 = *param_4;
        puVar8 = puVar8 + 1;
      }
      memmove(param_3,(void *)*in_ECX,(int)param_2 - *in_ECX & 0xfffffffc);
      memmove((void *)((int)param_3 + (iVar6 + uVar9) * 4),param_2,
              in_ECX[1] - (int)param_2 & 0xfffffffc);
      pvVar2 = (void *)*in_ECX;
      if (pvVar2 != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
        operator_delete(pvVar2);
      }
      *in_ECX = (int)param_3;
      in_ECX[2] = (int)((int)param_3 + uVar4 * 4);
      in_ECX[1] = (int)((int)param_3 + (uVar9 + (in_ECX[1] - (int)pvVar2 >> 2)) * 4);
    }
    else {
      uVar1 = *param_4;
      uVar9 = (int)pvVar2 - (int)param_2 >> 2;
      if (uVar9 < param_3) {
        memmove(param_2 + (int)param_3,param_2,uVar9 * 4);
        puVar8 = (undefined4 *)in_ECX[1];
        iVar6 = (int)param_3 - ((int)puVar8 - (int)param_2 >> 2);
        if (iVar6 != 0) {
          for (; iVar6 != 0; iVar6 = iVar6 + -1) {
            *puVar8 = uVar1;
            puVar8 = puVar8 + 1;
          }
        }
        in_ECX[1] = in_ECX[1] + (int)param_3 * 4;
        iVar6 = in_ECX[1];
        for (; param_2 != (undefined4 *)(iVar6 + (int)param_3 * -4); param_2 = param_2 + 1) {
          *param_2 = uVar1;
        }
      }
      else {
        _Src = (void *)((int)pvVar2 + (int)param_3 * -4);
        _Size = ((int)pvVar2 - (int)_Src >> 2) * 4;
        pvVar5 = memmove(pvVar2,_Src,_Size);
        in_ECX[1] = (int)((int)pvVar5 + _Size);
        iVar6 = (int)_Src - (int)param_2 >> 2;
        memmove((void *)((int)pvVar2 + iVar6 * -4),param_2,iVar6 * 4);
        puVar8 = param_2;
        if (param_2 != param_2 + (int)param_3) {
          do {
            *puVar8 = uVar1;
            puVar8 = puVar8 + 1;
          } while (puVar8 != param_2 + (int)param_3);
        }
      }
    }
  }
  *param_1 = *in_ECX + (iVar3 >> 2) * 4;
  return;
}


/* FUN_006685d0 @ 006685d0  kind=gamemisc  attributed-by=none  size=643 */

void FUN_006685d0(int *param_1,int param_2,uint param_3,undefined4 *param_4)

{
  int iVar1;
  int iVar2;
  uint *puVar3;
  int iVar4;
  int iVar5;
  int *in_ECX;
  uint uStack_4c;
  undefined1 local_25;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  uint local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006f7d50;
  local_10 = ExceptionList;
  uStack_4c = DAT_0076aa78 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_4c;
  ExceptionList = &local_10;
  iVar1 = *in_ECX;
  local_18 = uStack_4c;
  puVar3 = &uStack_4c;
  if (param_3 != 0) {
    iVar2 = in_ECX[1];
    if ((uint)((in_ECX[2] - iVar2) / 0xc) < param_3) {
      iVar2 = (iVar2 - *in_ECX) / 0xc;
      if (0x15555555U - iVar2 < param_3) {
        local_14 = (undefined1 *)&uStack_4c;
                    /* WARNING: Subroutine does not return */
        std::_Xlength_error("vector<T> too long");
      }
      local_14 = (undefined1 *)&uStack_4c;
      iVar4 = FUN_00667e90(iVar2 + param_3);
      iVar5 = FUN_0063fe80(iVar4);
      iVar2 = (param_2 - *in_ECX) / 0xc;
      local_8 = 0;
      FUN_006660e0(iVar5 + iVar2 * 0xc,param_3,param_4,&local_25,0,param_1);
      FUN_00666110(*in_ECX,param_2,iVar5,&local_25,0,param_1);
      FUN_00666110(param_2,in_ECX[1],iVar5 + (iVar2 + param_3) * 0xc,&local_25,0,param_1);
      iVar2 = *in_ECX;
      if ((void *)*in_ECX != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
        operator_delete((void *)*in_ECX);
      }
      *in_ECX = iVar5;
      in_ECX[2] = iVar5 + iVar4 * 0xc;
      in_ECX[1] = iVar5 + (param_3 + (in_ECX[1] - iVar2) / 0xc) * 0xc;
      puVar3 = (uint *)local_14;
    }
    else {
      local_24 = *param_4;
      local_20 = param_4[1];
      local_1c = param_4[2];
      if ((uint)((iVar2 - param_2) / 0xc) < param_3) {
        local_14 = (undefined1 *)&uStack_4c;
        FUN_00666110(param_2,iVar2,param_3 * 0xc + param_2,&local_25,0,param_1);
        local_8 = 2;
        FUN_006660e0(in_ECX[1],param_3 - (in_ECX[1] - param_2) / 0xc,&local_24,&local_25,0,param_1);
        in_ECX[1] = in_ECX[1] + param_3 * 0xc;
        FUN_00666180(param_2,in_ECX[1] + param_3 * -0xc,&local_24);
        puVar3 = (uint *)local_14;
      }
      else {
        iVar5 = iVar2 + param_3 * -0xc;
        iVar4 = FUN_00666110(iVar5,iVar2,iVar2,&local_25,0,param_1);
        in_ECX[1] = iVar4;
        FUN_00665cf0(param_2,iVar5,iVar2);
        FUN_00666180(param_2,param_3 * 0xc + param_2,&local_24);
        puVar3 = (uint *)local_14;
      }
    }
  }
  local_14 = (undefined1 *)puVar3;
  *param_1 = *in_ECX + ((param_2 - iVar1) / 0xc) * 0xc;
  ExceptionList = local_10;
  __security_check_cookie(local_18 ^ (uint)&stack0xfffffffc);
  return;
}


/* FUN_0066cc10 @ 0066cc10  kind=gamemisc  attributed-by=none  size=120 */

void FUN_0066cc10(int param_1,uint param_2,int param_3,int param_4,uint param_5)

{
  uint uVar1;
  
  uVar1 = param_2;
  while ((param_2 = uVar1, param_2 != param_5 || (param_1 != param_4))) {
    if (param_3 == 0) {
      uVar1 = Concurrency::details::_Concurrent_vector_base_v4::_Segment_index_of(param_2);
      param_3 = *(int *)(*(int *)(param_1 + 0x1c) + uVar1 * 4) +
                (param_2 - (1 << ((byte)uVar1 & 0x1f) & 0xfffffffeU)) * 0x4c;
    }
    FUN_0066ec30(param_3);
    uVar1 = param_2 + 1;
    if (param_3 != 0) {
      if ((uVar1 & param_2 - 1) == 0) {
        param_3 = 0;
      }
      else {
        param_3 = param_3 + 0x4c;
      }
    }
  }
  return;
}


/* FUN_0066cc90 @ 0066cc90  kind=gamemisc  attributed-by=none  size=120 */

void FUN_0066cc90(int param_1,uint param_2,int param_3,int param_4,uint param_5)

{
  uint uVar1;
  
  uVar1 = param_2;
  while ((param_2 = uVar1, param_2 != param_5 || (param_1 != param_4))) {
    if (param_3 == 0) {
      uVar1 = Concurrency::details::_Concurrent_vector_base_v4::_Segment_index_of(param_2);
      param_3 = *(int *)(*(int *)(param_1 + 0x1c) + uVar1 * 4) +
                (param_2 - (1 << ((byte)uVar1 & 0x1f) & 0xfffffffeU)) * 0x7c;
    }
    FUN_0066f1d0(param_3);
    uVar1 = param_2 + 1;
    if (param_3 != 0) {
      if ((uVar1 & param_2 - 1) == 0) {
        param_3 = 0;
      }
      else {
        param_3 = param_3 + 0x7c;
      }
    }
  }
  return;
}


/* FUN_0066e1b0 @ 0066e1b0  kind=gamemisc  attributed-by=none  size=137 */

void FUN_0066e1b0(undefined4 param_1)

{
  undefined4 *puVar1;
  undefined4 *in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006f7f6c;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  *in_ECX = 0;
  in_ECX[1] = param_1;
  Concurrency::details::_Cancellation_beacon::_Cancellation_beacon
            ((_Cancellation_beacon *)(in_ECX + 2));
  in_ECX[3] = 0;
  in_ECX[4] = 0;
  in_ECX[5] = 0;
  local_8 = 0;
  in_ECX[6] = 0;
  puVar1 = (undefined4 *)Concurrency::details::_Context::_CurrentContext();
  in_ECX[3] = *puVar1;
  ExceptionList = local_10;
  return;
}


/* FUN_0066ec20 @ 0066ec20  kind=gamemisc  attributed-by=none  size=5 */

void FUN_0066ec20(void)

{
  char cVar1;
  _StructuredTaskCollection *in_ECX;
  missing_wait amStack_10 [3];
  
  if (0 < *(int *)(in_ECX + 0x10)) {
    Concurrency::details::_StructuredTaskCollection::_Abort(in_ECX);
    cVar1 = __uncaught_exception();
    if (cVar1 == '\0') {
      if ((*(int *)(in_ECX + 8) != 0) && (*(int *)(in_ECX + 8) != 2)) {
        Concurrency::details::_StructuredTaskCollection::_CleanupToken(in_ECX);
      }
      Concurrency::missing_wait::missing_wait(amStack_10);
                    /* WARNING: Subroutine does not return */
      _CxxThrowException(amStack_10,(ThrowInfo *)&DAT_0075f3d8);
    }
  }
  if ((*(int *)(in_ECX + 8) != 0) && (*(int *)(in_ECX + 8) != 2)) {
    Concurrency::details::_StructuredTaskCollection::_CleanupToken(in_ECX);
  }
  return;
}


/* FUN_0066ed80 @ 0066ed80  kind=gamemisc  attributed-by=none  size=353 */

void FUN_0066ed80(int *param_1)

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
  float fVar12;
  float *pfVar13;
  float *pfVar14;
  float *pfVar15;
  float *pfVar16;
  float *pfVar17;
  
  fVar1 = (*(float **)param_1[1])[1];
  fVar2 = (*(float **)*param_1)[1];
  fVar3 = (*(float **)param_1[2])[1];
  fVar4 = (*(float **)param_1[3])[1];
  pfVar13 = (float *)param_1[4];
  *pfVar13 = (**(float **)*param_1 + **(float **)param_1[1] + **(float **)param_1[2] +
             **(float **)param_1[3]) * 0.25;
  pfVar13[1] = (fVar4 + fVar3 + fVar1 + fVar2) * 0.25;
  pfVar13 = *(float **)(param_1[1] + 4);
  fVar1 = pfVar13[1];
  pfVar14 = *(float **)(*param_1 + 4);
  fVar2 = pfVar14[1];
  fVar3 = *pfVar14;
  fVar4 = pfVar13[3];
  fVar5 = pfVar14[3];
  fVar6 = *pfVar13;
  pfVar15 = *(float **)(param_1[2] + 4);
  fVar7 = pfVar15[1];
  fVar8 = *pfVar15;
  fVar9 = pfVar15[3];
  pfVar16 = *(float **)(param_1[3] + 4);
  fVar10 = pfVar16[1];
  fVar11 = *pfVar16;
  fVar12 = pfVar16[3];
  pfVar17 = (float *)param_1[5];
  pfVar17[2] = (pfVar16[2] + pfVar15[2] + pfVar13[2] + pfVar14[2]) * 0.25;
  *pfVar17 = (fVar3 + fVar6 + fVar8 + fVar11) * 0.25;
  pfVar17[3] = (fVar12 + fVar9 + fVar4 + fVar5) * 0.25;
  pfVar17[1] = (fVar10 + fVar7 + fVar1 + fVar2) * 0.25;
  fVar1 = (*(float **)(param_1[1] + 8))[1];
  fVar2 = (*(float **)(*param_1 + 8))[1];
  fVar3 = (*(float **)(param_1[2] + 8))[1];
  fVar4 = (*(float **)(param_1[3] + 8))[1];
  pfVar13 = (float *)param_1[6];
  *pfVar13 = (**(float **)(param_1[3] + 8) +
             **(float **)(*param_1 + 8) + **(float **)(param_1[1] + 8) +
             **(float **)(param_1[2] + 8)) * 0.25;
  pfVar13[1] = (fVar4 + fVar3 + fVar1 + fVar2) * 0.25;
  return;
}


/* FUN_0066eef0 @ 0066eef0  kind=gamemisc  attributed-by=none  size=728 */

void FUN_0066eef0(int *param_1)

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
  float fVar12;
  float fVar13;
  float fVar14;
  float *pfVar15;
  float *pfVar16;
  float *pfVar17;
  float *pfVar18;
  float *pfVar19;
  float *pfVar20;
  float *pfVar21;
  undefined4 *in_ECX;
  
  *(byte *)(param_1 + 0x10) = *(byte *)(param_1 + 0x10) & 0xf9;
  if ((((*param_1 != 0) && (param_1[1] != 0)) &&
      ((*(byte *)((undefined4 *)param_1[2] + 0xc) & 2) == 0)) &&
     ((*(byte *)((undefined4 *)param_1[3] + 0xc) & 2) == 0)) {
    pfVar15 = *(float **)(*param_1 + 0x10);
    pfVar16 = *(float **)(param_1[1] + 0x10);
    fVar1 = pfVar16[1];
    fVar2 = pfVar15[1];
    pfVar17 = *(float **)param_1[2];
    pfVar18 = *(float **)param_1[3];
    fVar3 = pfVar18[1];
    fVar4 = pfVar17[1];
    pfVar19 = (float *)in_ECX[1];
    pfVar20 = (float *)*in_ECX;
    fVar5 = *pfVar20;
    fVar6 = *pfVar19;
    pfVar21 = (float *)param_1[4];
    *pfVar21 = ((*pfVar17 + *pfVar18) * *pfVar20 + (*pfVar15 + *pfVar16) * *pfVar19) * 0.5;
    pfVar21[1] = ((fVar3 + fVar4) * fVar5 + (fVar1 + fVar2) * fVar6) * 0.5;
    fVar1 = *pfVar19;
    pfVar15 = *(float **)(param_1[1] + 0x14);
    fVar2 = pfVar15[1];
    pfVar16 = *(float **)(*param_1 + 0x14);
    fVar3 = pfVar15[2];
    fVar4 = pfVar16[1];
    fVar5 = pfVar16[2];
    fVar6 = pfVar15[3];
    fVar7 = pfVar16[3];
    pfVar17 = *(float **)(param_1[3] + 4);
    fVar8 = pfVar17[2];
    pfVar18 = *(float **)(param_1[2] + 4);
    fVar9 = pfVar17[3];
    fVar10 = pfVar18[2];
    fVar11 = pfVar18[3];
    fVar12 = pfVar17[1];
    fVar13 = pfVar18[1];
    pfVar21 = (float *)param_1[5];
    fVar14 = *pfVar20;
    *pfVar21 = ((*pfVar16 + *pfVar15) * fVar1 + (*pfVar18 + *pfVar17) * fVar14) * 0.5;
    pfVar21[1] = ((fVar2 + fVar4) * fVar1 + (fVar12 + fVar13) * fVar14) * 0.5;
    pfVar21[2] = ((fVar3 + fVar5) * fVar1 + (fVar8 + fVar10) * fVar14) * 0.5;
    pfVar21[3] = ((fVar6 + fVar7) * fVar1 + (fVar9 + fVar11) * fVar14) * 0.5;
    fVar1 = (*(float **)(param_1[1] + 0x18))[1];
    fVar2 = (*(float **)(*param_1 + 0x18))[1];
    fVar3 = (*(float **)(param_1[3] + 8))[1];
    fVar4 = (*(float **)(param_1[2] + 8))[1];
    fVar5 = *pfVar19;
    fVar6 = *pfVar20;
    pfVar15 = (float *)param_1[6];
    *pfVar15 = ((**(float **)(param_1[3] + 8) + **(float **)(param_1[2] + 8)) * *pfVar20 +
               (**(float **)(*param_1 + 0x18) + **(float **)(param_1[1] + 0x18)) * *pfVar19) * 0.5;
    pfVar15[1] = ((fVar3 + fVar4) * fVar6 + (fVar1 + fVar2) * fVar5) * 0.5;
    return;
  }
  fVar1 = **(float **)param_1[2];
  fVar2 = **(float **)param_1[3];
  pfVar15 = (float *)param_1[4];
  pfVar15[1] = ((*(float **)param_1[3])[1] + (*(float **)param_1[2])[1]) * 0.5;
  *pfVar15 = (fVar1 + fVar2) * 0.5;
  pfVar15 = *(float **)(param_1[3] + 4);
  pfVar16 = *(float **)(param_1[2] + 4);
  fVar1 = pfVar15[3];
  fVar2 = pfVar16[3];
  fVar3 = *pfVar15;
  fVar4 = *pfVar16;
  fVar5 = pfVar15[1];
  fVar6 = pfVar16[1];
  pfVar17 = (float *)param_1[5];
  pfVar17[2] = (pfVar15[2] + pfVar16[2]) * 0.5;
  pfVar17[3] = (fVar1 + fVar2) * 0.5;
  *pfVar17 = (fVar3 + fVar4) * 0.5;
  pfVar17[1] = (fVar5 + fVar6) * 0.5;
  fVar1 = **(float **)(param_1[2] + 8);
  fVar2 = **(float **)(param_1[3] + 8);
  pfVar15 = (float *)param_1[6];
  pfVar15[1] = ((*(float **)(param_1[3] + 8))[1] + (*(float **)(param_1[2] + 8))[1]) * 0.5;
  *pfVar15 = (fVar1 + fVar2) * 0.5;
  if (((*(byte *)(param_1[2] + 0x30) & 4) != 0) || ((*(byte *)(param_1[3] + 0x30) & 4) != 0)) {
    *(byte *)(param_1 + 0x10) = *(byte *)(param_1 + 0x10) | 4;
  }
  return;
}


/* FUN_0066f280 @ 0066f280  kind=gamemisc  attributed-by=none  size=249 */

void FUN_0066f280(int *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float *pfVar7;
  float *pfVar8;
  float *pfVar9;
  
  if ((((*param_1 == 0) || (param_1[1] == 0)) &&
      ((*(byte *)((undefined4 *)param_1[2] + 0xc) & 4) != 0)) &&
     ((*(byte *)((undefined4 *)param_1[3] + 0xc) & 4) != 0)) {
    pfVar7 = *(float **)param_1[2];
    pfVar8 = *(float **)param_1[3];
    fVar1 = pfVar8[1];
    fVar2 = pfVar7[1];
    pfVar9 = (float *)param_1[4];
    *pfVar9 = (*pfVar8 + *pfVar7) * 0.5;
    pfVar9[1] = (fVar1 + fVar2) * 0.5;
    pfVar7 = *(float **)(param_1[3] + 4);
    pfVar8 = *(float **)(param_1[2] + 4);
    fVar1 = pfVar7[3];
    fVar2 = pfVar8[3];
    fVar3 = *pfVar7;
    fVar4 = *pfVar8;
    fVar5 = pfVar7[1];
    fVar6 = pfVar8[1];
    pfVar9 = (float *)param_1[5];
    pfVar9[2] = (pfVar7[2] + pfVar8[2]) * 0.5;
    pfVar9[3] = (fVar1 + fVar2) * 0.5;
    *pfVar9 = (fVar3 + fVar4) * 0.5;
    pfVar9[1] = (fVar5 + fVar6) * 0.5;
    fVar1 = **(float **)(param_1[2] + 8);
    fVar2 = **(float **)(param_1[3] + 8);
    pfVar7 = (float *)param_1[6];
    pfVar7[1] = ((*(float **)(param_1[3] + 8))[1] + (*(float **)(param_1[2] + 8))[1]) * 0.5;
    *pfVar7 = (fVar1 + fVar2) * 0.5;
    *(byte *)(param_1 + 0x10) = *(byte *)(param_1 + 0x10) & 0xfb | 2;
  }
  return;
}


/* FUN_0066f380 @ 0066f380  kind=gamemisc  attributed-by=none  size=736 */

void FUN_0066f380(int *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  byte bVar5;
  float *pfVar6;
  float *pfVar7;
  undefined4 *in_ECX;
  float fVar8;
  
  bVar5 = *(byte *)(param_1 + 0xc);
  if (((bVar5 & 2) == 0) && (param_1[0xb] != 0)) {
    fVar8 = (float)param_1[0xb];
    if ((bVar5 & 1) != 0) {
      if ((bVar5 & 4) == 0) {
        fVar1 = (float)param_1[3];
        fVar8 = *(float *)*in_ECX / fVar8;
        pfVar6 = (float *)*param_1;
        pfVar7 = (float *)in_ECX[1];
        fVar2 = *pfVar7;
        pfVar6[1] = pfVar6[1] * *pfVar7 + (float)param_1[4] * fVar8;
        *pfVar6 = *pfVar6 * fVar2 + fVar1 * fVar8;
        fVar1 = (float)param_1[7];
        pfVar6 = (float *)param_1[1];
        fVar2 = (float)param_1[6];
        fVar3 = (float)param_1[8];
        fVar4 = *pfVar7;
        *pfVar6 = (float)param_1[5] * fVar8 + *pfVar6 * fVar4;
        pfVar6[1] = fVar2 * fVar8 + pfVar6[1] * fVar4;
        pfVar6[2] = fVar1 * fVar8 + pfVar6[2] * fVar4;
        pfVar6[3] = pfVar6[3] * fVar4 + fVar3 * fVar8;
        pfVar6 = (float *)param_1[2];
        fVar1 = (float)param_1[10];
        fVar2 = *pfVar7;
        *pfVar6 = *pfVar6 * *pfVar7 + (float)param_1[9] * fVar8;
        pfVar6[1] = pfVar6[1] * fVar2 + fVar1 * fVar8;
        return;
      }
      fVar8 = 1.0 / fVar8;
      fVar1 = (float)param_1[4];
      pfVar6 = (float *)*param_1;
      *pfVar6 = (float)param_1[3] * fVar8;
      pfVar6[1] = fVar1 * fVar8;
      fVar1 = (float)param_1[6];
      fVar2 = (float)param_1[7];
      fVar3 = (float)param_1[8];
      pfVar6 = (float *)param_1[1];
      *pfVar6 = (float)param_1[5] * fVar8;
      pfVar6[1] = fVar1 * fVar8;
      pfVar6[2] = fVar2 * fVar8;
      pfVar6[3] = fVar3 * fVar8;
      fVar1 = (float)param_1[9];
      pfVar6 = (float *)param_1[2];
      pfVar6[1] = (float)param_1[10] * fVar8;
      *pfVar6 = fVar1 * fVar8;
      return;
    }
    fVar8 = 0.75 / fVar8;
    pfVar6 = (float *)*param_1;
    fVar1 = (float)param_1[4];
    *pfVar6 = *pfVar6 * 0.25 + (float)param_1[3] * fVar8;
    pfVar6[1] = pfVar6[1] * 0.25 + fVar1 * fVar8;
    pfVar6 = (float *)param_1[1];
    fVar1 = (float)param_1[5];
    fVar2 = (float)param_1[7];
    fVar3 = (float)param_1[8];
    pfVar6[1] = pfVar6[1] * 0.25 + (float)param_1[6] * fVar8;
    pfVar6[2] = pfVar6[2] * 0.25 + fVar2 * fVar8;
    *pfVar6 = *pfVar6 * 0.25 + fVar1 * fVar8;
    pfVar6[3] = pfVar6[3] * 0.25 + fVar3 * fVar8;
    pfVar6 = (float *)param_1[2];
    fVar1 = (float)param_1[9];
    pfVar6[1] = pfVar6[1] * 0.25 + (float)param_1[10] * fVar8;
    *pfVar6 = *pfVar6 * 0.25 + fVar1 * fVar8;
  }
  return;
}


/* FUN_00671340 @ 00671340  kind=gamemisc  attributed-by=none  size=218 */

uint FUN_00671340(int *param_1)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  bool bVar4;
  uint in_EAX;
  code *pcVar5;
  undefined4 *in_ECX;
  _SpinWait<1> local_14 [8];
  undefined4 local_c;
  code *local_8;
  uint3 extraout_var;
  
  pcVar5 = _Yield_exref;
  if (in_ECX[4] != 0) {
    return in_EAX & 0xffffff00;
  }
  iVar1 = *param_1;
  *in_ECX = param_1;
  local_c = 0;
  local_8 = pcVar5;
  if (*param_1 == iVar1) {
    do {
      if (in_ECX[4] != 0) break;
      if ((in_ECX[5] == 0) ||
         (bVar4 = Concurrency::details::_Context::_IsSynchronouslyBlocked((_Context *)(in_ECX + 3)),
         !bVar4)) {
        Concurrency::details::_SpinWait<1>::_SpinOnce(local_14);
        pcVar5 = (code *)((uint)extraout_var << 8);
      }
      else {
        LOCK();
        in_ECX[6] = in_ECX[6] + 1;
        UNLOCK();
        piVar2 = (int *)in_ECX[5];
        if ((((piVar2 != (int *)0x0) &&
             (bVar4 = Concurrency::details::_Context::_IsSynchronouslyBlocked
                                ((_Context *)(in_ECX + 3)), bVar4)) && (*param_1 == iVar1)) &&
           (in_ECX[4] == 0)) {
          *in_ECX = 0;
          iVar3 = *piVar2;
          *param_1 = iVar3 + 1;
          param_1[1] = piVar2[1];
          piVar2[1] = iVar3 + 1;
        }
        piVar2 = in_ECX + 6;
        LOCK();
        pcVar5 = (code *)*piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
      }
    } while (*param_1 == iVar1);
    if (*param_1 == iVar1) {
      return (uint)pcVar5 & 0xffffff00;
    }
  }
  return (uint)(param_1[1] != *param_1 && -1 < param_1[1] - *param_1);
}


/* FUN_00671f80 @ 00671f80  kind=gamemisc  attributed-by=none  size=587 */

void FUN_00671f80(float param_1)

{
  int iVar1;
  uint uVar2;
  int in_ECX;
  uint uVar3;
  undefined1 *puVar4;
  float **ppfVar5;
  float *local_30;
  float *local_2c;
  float *local_28;
  float *local_24;
  int local_20;
  float local_1c;
  float local_18;
  int local_14;
  undefined1 local_c [5];
  undefined1 local_7;
  undefined1 local_6;
  undefined1 local_5;
  
  puVar4 = &local_5;
  uVar3 = *(uint *)(in_ECX + 0x58);
  local_20 = in_ECX + 0x40;
  local_5 = 0;
  local_14 = in_ECX;
  uVar2 = Concurrency::details::_Concurrent_vector_base_v4::_Internal_capacity
                    ((_Concurrent_vector_base_v4 *)(in_ECX + 0x44));
  if (uVar2 < uVar3) {
    uVar3 = uVar2;
  }
  FUN_0066df80(in_ECX + 0x40,0,0,in_ECX + 0x40,uVar3,0,puVar4);
  local_1c = 1.0 - param_1;
  local_18 = param_1;
  local_6 = 0;
  Concurrency::details::_Concurrent_vector_base_v4::_Internal_capacity
            ((_Concurrent_vector_base_v4 *)(in_ECX + 4));
  FUN_0066e140();
  local_28 = &local_1c;
  local_24 = &local_18;
  ppfVar5 = &local_28;
  uVar3 = *(uint *)(in_ECX + 0x38);
  uVar2 = Concurrency::details::_Concurrent_vector_base_v4::_Internal_capacity
                    ((_Concurrent_vector_base_v4 *)(in_ECX + 0x24));
  if (uVar2 < uVar3) {
    uVar3 = uVar2;
  }
  iVar1 = in_ECX + 0x20;
  FUN_0066e060(iVar1,0,0,in_ECX + 0x20,uVar3,0,ppfVar5);
  uVar3 = *(uint *)(in_ECX + 0x38);
  uVar2 = Concurrency::details::_Concurrent_vector_base_v4::_Internal_capacity
                    ((_Concurrent_vector_base_v4 *)(in_ECX + 0x24));
  if (uVar2 < uVar3) {
    uVar3 = uVar2;
  }
  FUN_0066cc10(iVar1,0,0,iVar1,uVar3,0,local_c);
  Concurrency::details::_Concurrent_vector_base_v4::_Internal_capacity
            ((_Concurrent_vector_base_v4 *)(in_ECX + 4));
  FUN_0066cc90();
  iVar1 = local_20;
  local_30 = &local_18;
  uVar3 = *(uint *)(local_20 + 0x18);
  local_2c = &local_1c;
  ppfVar5 = &local_30;
  uVar2 = Concurrency::details::_Concurrent_vector_base_v4::_Internal_capacity
                    ((_Concurrent_vector_base_v4 *)(local_20 + 4));
  if (uVar2 < uVar3) {
    uVar3 = uVar2;
  }
  FUN_0066dff0(iVar1,0,0,iVar1,uVar3,0,ppfVar5);
  uVar3 = *(uint *)(local_14 + 0x38);
  puVar4 = &local_7;
  local_7 = 0;
  uVar2 = Concurrency::details::_Concurrent_vector_base_v4::_Internal_capacity
                    ((_Concurrent_vector_base_v4 *)(local_14 + 0x24));
  if (uVar2 < uVar3) {
    uVar3 = uVar2;
  }
  FUN_0066e0d0(local_14 + 0x20,0,0,local_14 + 0x20,uVar3,0,puVar4);
  return;
}


/* FUN_006721d0 @ 006721d0  kind=gamemisc  attributed-by=none  size=1064 */

void FUN_006721d0(int param_1,int param_2,int param_3,undefined4 param_4,undefined4 param_5)

{
  undefined8 uVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined8 uVar6;
  int iVar7;
  bool bVar8;
  double dVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  undefined1 auStack_8c [4];
  float local_88;
  float local_84;
  int local_80;
  int local_7c;
  int local_78;
  float local_74;
  undefined4 local_70;
  undefined8 local_6c;
  undefined8 local_64;
  undefined8 local_5c;
  undefined8 local_54;
  undefined8 local_4c;
  undefined8 local_44;
  float local_3c;
  float fStack_38;
  float local_34;
  float fStack_30;
  undefined8 local_2c;
  undefined8 local_24;
  undefined8 local_1c;
  undefined8 local_14;
  uint local_c;
  
  local_c = DAT_0076aa78 ^ (uint)auStack_8c;
  iVar7 = param_2 * 2 + 2;
  local_80 = param_2;
  local_7c = param_3;
  local_70 = param_4;
  local_78 = param_2;
  bVar8 = iVar7 == param_3;
  if (iVar7 < param_3) {
    do {
      puVar2 = *(undefined4 **)(param_1 + 8 + iVar7 * 0xc);
      iVar3 = *(int *)(param_1 + 4 + iVar7 * 0xc);
      iVar4 = *(int *)*puVar2;
      uVar1 = *(undefined8 *)(iVar4 + *(int *)(param_1 + iVar7 * 0xc) * 8);
      local_5c._0_4_ = (float)uVar1;
      local_5c._0_4_ = *(float *)(iVar4 + iVar3 * 8) + (float)local_5c;
      local_5c._4_4_ = (float)((ulonglong)uVar1 >> 0x20);
      local_5c._4_4_ = *(float *)(iVar4 + 4 + iVar3 * 8) + local_5c._4_4_;
      local_2c = local_5c;
      fVar10 = (float)local_5c * 0.5;
      fVar12 = local_5c._4_4_ * 0.5;
      local_3c = (float)puVar2[5] * fVar12 + fVar10 * (float)puVar2[1] + (float)puVar2[0xd];
      fStack_38 = (float)puVar2[2] * fVar10 + (float)puVar2[6] * fVar12 + (float)puVar2[0xe];
      local_84 = 1.0 / ((float)puVar2[4] * fVar10 + (float)puVar2[8] * fVar12 + (float)puVar2[0x10])
      ;
      local_88 = local_84 * local_3c;
      local_84 = local_84 * fStack_38;
      local_6c = CONCAT44(local_84,local_88);
      local_1c = local_6c;
      local_84 = local_84 - fVar12;
      local_88 = local_88 - fVar10;
      fVar10 = local_84 * local_84 + local_88 * local_88;
      if (0.0 < fVar10) {
        dVar9 = (double)fVar10;
        libm_sse2_sqrt_precise();
        local_88 = local_88 * (1.0 / (float)dVar9);
        local_84 = local_84 * (1.0 / (float)dVar9);
      }
      local_4c = local_6c;
      uVar6 = local_4c;
      local_4c._0_4_ = (float)local_6c;
      local_4c._4_4_ = (float)((ulonglong)local_6c >> 0x20);
      puVar5 = *(undefined4 **)(param_1 + -4 + iVar7 * 0xc);
      iVar3 = *(int *)*puVar5;
      local_84 = local_84 * (local_4c._4_4_ - (float)puVar2[0xe]) +
                 ((float)local_4c - (float)puVar2[0xd]) * local_88;
      iVar4 = *(int *)(param_1 + -8 + iVar7 * 0xc);
      uVar1 = *(undefined8 *)(iVar3 + *(int *)(param_1 + -0xc + iVar7 * 0xc) * 8);
      local_54._0_4_ = (float)uVar1;
      local_54._0_4_ = *(float *)(iVar3 + iVar4 * 8) + (float)local_54;
      local_54._4_4_ = (float)((ulonglong)uVar1 >> 0x20);
      local_54._4_4_ = *(float *)(iVar3 + 4 + iVar4 * 8) + local_54._4_4_;
      local_44 = local_54;
      fVar11 = (float)local_54 * 0.5;
      fVar13 = local_54._4_4_ * 0.5;
      local_34 = (float)puVar5[5] * fVar13 + (float)puVar5[1] * fVar11 + (float)puVar5[0xd];
      fStack_30 = (float)puVar5[2] * fVar11 + (float)puVar5[6] * fVar13 + (float)puVar5[0xe];
      fVar12 = 1.0 / ((float)puVar5[4] * fVar11 + (float)puVar5[8] * fVar13 + (float)puVar5[0x10]);
      fVar10 = fVar12 * local_34;
      fVar12 = fVar12 * fStack_30;
      local_64 = CONCAT44(fVar12,fVar10);
      local_24 = local_64;
      fVar12 = fVar12 - fVar13;
      fVar10 = fVar10 - fVar11;
      fVar11 = fVar12 * fVar12 + fVar10 * fVar10;
      local_88 = fVar10;
      local_74 = fVar12;
      local_4c = uVar6;
      if (0.0 < fVar11) {
        dVar9 = (double)fVar11;
        libm_sse2_sqrt_precise();
        fVar10 = local_88 * (1.0 / (float)dVar9);
        fVar12 = local_74 * (1.0 / (float)dVar9);
      }
      local_14 = local_64;
      uVar1 = local_14;
      local_14._0_4_ = (float)local_64;
      local_14._4_4_ = (float)((ulonglong)local_64 >> 0x20);
      param_2 = iVar7;
      if (local_84 <
          fVar12 * (local_14._4_4_ - (float)puVar5[0xe]) +
          ((float)local_14 - (float)puVar5[0xd]) * fVar10) {
        param_2 = iVar7 + -1;
      }
      *(undefined4 *)(param_1 + local_80 * 0xc) = *(undefined4 *)(param_1 + param_2 * 0xc);
      *(undefined4 *)(param_1 + 4 + local_80 * 0xc) = *(undefined4 *)(param_1 + 4 + param_2 * 0xc);
      *(undefined4 *)(param_1 + 8 + local_80 * 0xc) = *(undefined4 *)(param_1 + 8 + param_2 * 0xc);
      iVar7 = param_2 * 2 + 2;
      bVar8 = iVar7 == local_7c;
      local_80 = param_2;
      local_14 = uVar1;
    } while (iVar7 < local_7c);
  }
  iVar7 = param_2;
  if (bVar8) {
    *(undefined4 *)(param_1 + param_2 * 0xc) = *(undefined4 *)(param_1 + -0xc + local_7c * 0xc);
    *(undefined4 *)(param_1 + 4 + param_2 * 0xc) = *(undefined4 *)(param_1 + -8 + local_7c * 0xc);
    *(undefined4 *)(param_1 + 8 + param_2 * 0xc) = *(undefined4 *)(param_1 + -4 + local_7c * 0xc);
    iVar7 = local_7c + -1;
  }
  local_80 = param_2;
  FUN_00672600(param_1,iVar7,local_78,local_70,param_5);
  __security_check_cookie(local_c ^ (uint)auStack_8c);
  return;
}


/* FUN_00672600 @ 00672600  kind=gamemisc  attributed-by=none  size=1022 */

void FUN_00672600(int param_1,int param_2,int param_3,int *param_4)

{
  undefined8 uVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined8 uVar6;
  int iVar7;
  double dVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  undefined1 auStack_84 [4];
  float local_80;
  int local_7c;
  float local_78;
  float local_74;
  int local_70;
  undefined8 local_6c;
  undefined8 local_64;
  undefined8 local_5c;
  undefined8 local_54;
  undefined8 local_4c;
  undefined8 local_44;
  float local_3c;
  float fStack_38;
  float local_34;
  float fStack_30;
  undefined8 local_2c;
  undefined8 local_24;
  undefined8 local_1c;
  undefined8 local_14;
  uint local_c;
  
  local_c = DAT_0076aa78 ^ (uint)auStack_84;
  local_7c = param_2;
  while (param_3 < local_7c) {
    iVar7 = (local_7c + -1) / 2;
    puVar2 = *(undefined4 **)(param_1 + 8 + iVar7 * 0xc);
    iVar3 = *(int *)*puVar2;
    iVar4 = *(int *)(param_1 + 4 + iVar7 * 0xc);
    local_70 = *(int *)(param_1 + iVar7 * 0xc);
    uVar1 = *(undefined8 *)(iVar3 + local_70 * 8);
    local_54._0_4_ = (float)uVar1;
    local_54._0_4_ = *(float *)(iVar3 + iVar4 * 8) + (float)local_54;
    local_54._4_4_ = (float)((ulonglong)uVar1 >> 0x20);
    local_54._4_4_ = *(float *)(iVar3 + 4 + iVar4 * 8) + local_54._4_4_;
    local_2c = local_54;
    fVar9 = (float)local_54 * 0.5;
    fVar11 = local_54._4_4_ * 0.5;
    local_3c = (float)puVar2[5] * fVar11 + fVar9 * (float)puVar2[1] + (float)puVar2[0xd];
    fStack_38 = (float)puVar2[2] * fVar9 + (float)puVar2[6] * fVar11 + (float)puVar2[0xe];
    local_78 = 1.0 / ((float)puVar2[4] * fVar9 + (float)puVar2[8] * fVar11 + (float)puVar2[0x10]);
    local_80 = local_3c * local_78;
    local_78 = fStack_38 * local_78;
    local_6c = CONCAT44(local_78,local_80);
    local_1c = local_6c;
    local_80 = local_80 - fVar9;
    local_78 = local_78 - fVar11;
    fVar9 = local_78 * local_78 + local_80 * local_80;
    if (0.0 < fVar9) {
      dVar8 = (double)fVar9;
      libm_sse2_sqrt_precise();
      local_80 = local_80 * (1.0 / (float)dVar8);
      local_78 = local_78 * (1.0 / (float)dVar8);
    }
    local_4c = local_6c;
    uVar6 = local_4c;
    local_4c._0_4_ = (float)local_6c;
    local_4c._4_4_ = (float)((ulonglong)local_6c >> 0x20);
    puVar5 = (undefined4 *)param_4[2];
    iVar3 = *(int *)*puVar5;
    local_74 = (local_4c._4_4_ - (float)puVar2[0xe]) * local_78 +
               ((float)local_4c - (float)puVar2[0xd]) * local_80;
    uVar1 = *(undefined8 *)(iVar3 + *param_4 * 8);
    local_5c._0_4_ = (float)uVar1;
    local_5c._0_4_ = (float)local_5c + *(float *)(iVar3 + param_4[1] * 8);
    local_5c._4_4_ = (float)((ulonglong)uVar1 >> 0x20);
    local_5c._4_4_ = *(float *)(iVar3 + 4 + param_4[1] * 8) + local_5c._4_4_;
    local_44 = local_5c;
    fVar10 = (float)local_5c * 0.5;
    fVar12 = local_5c._4_4_ * 0.5;
    local_34 = (float)puVar5[5] * fVar12 + (float)puVar5[1] * fVar10 + (float)puVar5[0xd];
    fStack_30 = (float)puVar5[2] * fVar10 + (float)puVar5[6] * fVar12 + (float)puVar5[0xe];
    fVar11 = 1.0 / ((float)puVar5[4] * fVar10 + (float)puVar5[8] * fVar12 + (float)puVar5[0x10]);
    fVar9 = fVar11 * local_34;
    fVar11 = fVar11 * fStack_30;
    local_64 = CONCAT44(fVar11,fVar9);
    local_24 = local_64;
    fVar11 = fVar11 - fVar12;
    fVar9 = fVar9 - fVar10;
    fVar10 = fVar11 * fVar11 + fVar9 * fVar9;
    local_80 = fVar11;
    local_78 = fVar9;
    local_4c = uVar6;
    if (0.0 < fVar10) {
      dVar8 = (double)fVar10;
      libm_sse2_sqrt_precise();
      fVar9 = local_78 * (1.0 / (float)dVar8);
      fVar11 = local_80 * (1.0 / (float)dVar8);
    }
    local_14 = local_64;
    uVar1 = local_14;
    local_14._0_4_ = (float)local_64;
    local_14._4_4_ = (float)((ulonglong)local_64 >> 0x20);
    fVar12 = (float)local_14 - (float)puVar5[0xd];
    fVar10 = local_14._4_4_ - (float)puVar5[0xe];
    local_14 = uVar1;
    if (fVar11 * fVar10 + fVar12 * fVar9 <= local_74) break;
    *(int *)(param_1 + local_7c * 0xc) = local_70;
    *(undefined4 *)(param_1 + 4 + local_7c * 0xc) = *(undefined4 *)(param_1 + 4 + iVar7 * 0xc);
    *(undefined4 *)(param_1 + 8 + local_7c * 0xc) = *(undefined4 *)(param_1 + 8 + iVar7 * 0xc);
    local_7c = iVar7;
    local_14 = local_64;
  }
  *(int *)(param_1 + local_7c * 0xc) = *param_4;
  *(int *)(param_1 + 4 + local_7c * 0xc) = param_4[1];
  *(int *)(param_1 + 8 + local_7c * 0xc) = param_4[2];
  __security_check_cookie(local_c ^ (uint)auStack_84);
  return;
}


/* FUN_00672f70 @ 00672f70  kind=gamemisc  attributed-by=none  size=159 */

void FUN_00672f70(uint param_1)

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
    FUN_00672e80();
    return;
  }
  FUN_00672e80();
  return;
}


/* FUN_00674160 @ 00674160  kind=gamemisc  attributed-by=none  size=1229 */

void FUN_00674160(void)

{
  int iVar1;
  undefined4 **ppuVar2;
  undefined4 **ppuVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined4 **ppuVar6;
  int *piVar7;
  int iVar8;
  int *piVar9;
  int **ppiVar10;
  int *piVar11;
  undefined4 *puVar12;
  int in_ECX;
  uint uVar13;
  undefined4 *puVar14;
  void *local_68;
  undefined4 local_64;
  undefined4 local_60;
  undefined1 local_5c [8];
  undefined4 *local_54;
  undefined4 local_50;
  int *local_4c;
  int local_48;
  undefined4 *local_44;
  int *local_40;
  int local_3c;
  int *local_38;
  undefined4 *local_34;
  undefined4 *local_30;
  undefined4 *local_2c;
  int local_28;
  int local_24;
  int local_20;
  undefined4 *local_1c;
  int local_18;
  undefined1 local_11;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006f82f8;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  puVar14 = (undefined4 *)(in_ECX + 0x100);
  local_44 = puVar14;
  local_18 = in_ECX;
  FUN_00639cf0(*puVar14,*(undefined4 *)(in_ECX + 0x104),&local_11,puVar14,
               DAT_0076aa78 ^ (uint)&stack0xfffffffc);
  *(undefined4 *)(in_ECX + 0x104) = *puVar14;
  local_54 = (undefined4 *)0x0;
  local_50 = 0;
  local_54 = (undefined4 *)FUN_0043c870();
  local_8 = 0;
  local_20 = 0;
  local_28 = 3;
  if (0 < (int)(*(int *)(in_ECX + 0x38) - *(int *)(in_ECX + 0x34) & 0xfffffffcU)) {
    do {
      local_24 = local_20 * 4;
      local_34 = (undefined4 *)0x0;
      do {
        local_34 = (undefined4 *)((int)local_34 + 1);
        iVar1 = *(int *)(local_24 + *(int *)(in_ECX + 0x34));
        piVar7 = *(int **)(*(int *)(in_ECX + 0x34) + ((int)local_34 % local_28 + local_20) * 4);
        puVar14 = (undefined4 *)local_54[1];
        puVar12 = local_54;
        if (*(char *)((int)local_54[1] + 0xd) == '\0') {
          do {
            if (((int)puVar14[4] < (int)piVar7) ||
               (((int)puVar14[4] <= (int)piVar7 && ((int)puVar14[5] < iVar1)))) {
              puVar4 = (undefined4 *)puVar14[2];
            }
            else {
              puVar4 = (undefined4 *)*puVar14;
              puVar12 = puVar14;
            }
            puVar14 = puVar4;
          } while (*(char *)((int)puVar4 + 0xd) == '\0');
          if (((puVar12 == local_54) || ((int)piVar7 < (int)puVar12[4])) ||
             (((int)piVar7 <= (int)puVar12[4] && (iVar1 < (int)puVar12[5])))) goto LAB_0067425b;
          local_2c = puVar12;
          ppuVar6 = &local_2c;
        }
        else {
LAB_0067425b:
          local_30 = local_54;
          ppuVar6 = &local_30;
        }
        if (*ppuVar6 == local_54) {
          local_3c = iVar1;
          local_38 = piVar7;
          FUN_00665f30(local_5c,0,&local_3c,DAT_0076ded5);
        }
        else {
          FUN_0043ede0(&local_40,*ppuVar6);
        }
        local_24 = local_24 + 4;
        in_ECX = local_18;
      } while ((int)local_34 < 3);
      local_20 = local_20 + 3;
    } while (local_20 < *(int *)(local_18 + 0x38) - *(int *)(local_18 + 0x34) >> 2);
  }
  local_4c = (int *)0x0;
  local_48 = 0;
  local_4c = (int *)FUN_0046d4b0();
  local_8._0_1_ = 1;
  local_20 = 0;
  puVar14 = local_54;
  if (0 < (int)(*(int *)(local_18 + 0x38) - *(int *)(local_18 + 0x34) & 0xfffffffcU)) {
    do {
      local_24 = local_20 * 4;
      local_40 = (int *)0x0;
      do {
        local_40 = (int *)((int)local_40 + 1);
        local_2c = *(undefined4 **)(local_24 + *(int *)(local_18 + 0x34));
        local_38 = *(int **)(*(int *)(local_18 + 0x34) + ((int)local_40 % local_28 + local_20) * 4);
        puVar12 = (undefined4 *)puVar14[1];
        puVar4 = puVar14;
        if (*(char *)((int)puVar14[1] + 0xd) == '\0') {
          do {
            if (((int)puVar12[4] < (int)local_2c) ||
               (((int)puVar12[4] <= (int)local_2c && ((int)puVar12[5] < (int)local_38)))) {
              puVar5 = (undefined4 *)puVar12[2];
            }
            else {
              puVar5 = (undefined4 *)*puVar12;
              puVar4 = puVar12;
            }
            puVar12 = puVar5;
          } while (*(char *)((int)puVar5 + 0xd) == '\0');
          if (((puVar4 == puVar14) || ((int)local_2c < (int)puVar4[4])) ||
             (((int)local_2c <= (int)puVar4[4] && ((int)local_38 < (int)puVar4[5]))))
          goto LAB_00674381;
          local_34 = puVar4;
          ppuVar6 = &local_34;
        }
        else {
LAB_00674381:
          local_30 = puVar14;
          ppuVar6 = &local_30;
        }
        if (*ppuVar6 != puVar14) {
          piVar7 = (int *)FUN_00667a90(&local_2c);
          iVar1 = *piVar7;
          iVar8 = FUN_00583cb0(iVar1,*(undefined4 *)(iVar1 + 4),&local_38);
          if (piVar7[1] == 0x15555554) {
                    /* WARNING: Subroutine does not return */
            std::_Xlength_error("list<T> too long");
          }
          piVar7[1] = piVar7[1] + 1;
          *(int *)(iVar1 + 4) = iVar8;
          **(int **)(iVar8 + 4) = iVar8;
          puVar14 = local_54;
        }
        local_24 = local_24 + 4;
      } while ((int)local_40 < 3);
      local_20 = local_20 + 3;
    } while (local_20 < *(int *)(local_18 + 0x38) - *(int *)(local_18 + 0x34) >> 2);
  }
  do {
    if (local_48 == 0) {
      local_8._0_1_ = 0;
      FUN_004e6e60(&local_44,*local_4c,local_4c);
                    /* WARNING: Subroutine does not return */
      operator_delete(local_4c);
    }
    local_68 = (void *)0x0;
    local_64 = 0;
    local_60 = 0;
    local_8._0_1_ = 2;
    FUN_0066aed0(&local_68);
    local_8._0_1_ = 1;
    if (local_68 != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      operator_delete(local_68);
    }
    local_1c = *(undefined4 **)(*local_4c + 0x10);
    local_2c = local_1c;
    do {
      puVar14 = local_1c;
      piVar7 = (int *)local_4c[1];
      piVar11 = local_4c;
      if (*(char *)((int)piVar7 + 0xd) == '\0') {
        do {
          if (piVar7[4] < (int)local_1c) {
            piVar9 = (int *)piVar7[2];
          }
          else {
            piVar9 = (int *)*piVar7;
            piVar11 = piVar7;
          }
          piVar7 = piVar9;
        } while (*(char *)((int)piVar9 + 0xd) == '\0');
        if ((piVar11 == local_4c) || ((int)local_1c < piVar11[4])) goto LAB_006744b0;
        local_40 = piVar11;
        ppiVar10 = &local_40;
      }
      else {
LAB_006744b0:
        local_38 = local_4c;
        ppiVar10 = &local_38;
      }
      if (*ppiVar10 == local_4c) break;
      piVar11 = (int *)FUN_00667a90(&local_1c);
      piVar7 = *(int **)*piVar11;
      local_30 = (undefined4 *)piVar7[2];
      if (piVar7 != (int *)*piVar11) {
        *(int *)piVar7[1] = *piVar7;
        *(int *)(*piVar7 + 4) = piVar7[1];
                    /* WARNING: Subroutine does not return */
        operator_delete(piVar7);
      }
      if (piVar11[1] == 0) {
        puVar12 = (undefined4 *)FUN_00667dd0(local_5c,&local_1c);
        FUN_004e6e60(&local_28,*puVar12,puVar12[1]);
      }
      iVar1 = *(int *)(local_18 + 0x104);
      ppuVar6 = *(undefined4 ***)(iVar1 + -8);
      if ((&local_1c < ppuVar6) && (ppuVar2 = *(undefined4 ***)(iVar1 + -0xc), ppuVar2 <= &local_1c)
         ) {
        ppuVar3 = *(undefined4 ***)(iVar1 + -4);
        if ((ppuVar6 == ppuVar3) && ((int)ppuVar3 - (int)ppuVar6 >> 2 == 0)) {
          iVar8 = (int)ppuVar6 - (int)ppuVar2 >> 2;
          if (iVar8 == 0x3fffffff) {
LAB_0067467c:
                    /* WARNING: Subroutine does not return */
            std::_Xlength_error("vector<T> too long");
          }
          local_34 = (undefined4 *)(iVar8 + 1);
          uVar13 = (int)ppuVar3 - (int)ppuVar2 >> 2;
          if (0x3fffffff - (uVar13 >> 1) < uVar13) {
            puVar14 = (undefined4 *)0x0;
          }
          else {
            puVar14 = (undefined4 *)(uVar13 + (uVar13 >> 1));
          }
          if (puVar14 < local_34) {
            puVar14 = local_34;
          }
          FUN_0063da20(puVar14);
        }
        if (*(undefined4 **)(iVar1 + -8) != (undefined4 *)0x0) {
          **(undefined4 **)(iVar1 + -8) =
               *(undefined4 *)(*(int *)(iVar1 + -0xc) + ((int)&local_1c - (int)ppuVar2 >> 2) * 4);
        }
      }
      else {
        ppuVar2 = *(undefined4 ***)(iVar1 + -4);
        if ((ppuVar6 == ppuVar2) && ((int)ppuVar2 - (int)ppuVar6 >> 2 == 0)) {
          iVar8 = (int)ppuVar6 - *(int *)(iVar1 + -0xc) >> 2;
          if (iVar8 == 0x3fffffff) goto LAB_0067467c;
          local_34 = (undefined4 *)(iVar8 + 1);
          uVar13 = (int)ppuVar2 - *(int *)(iVar1 + -0xc) >> 2;
          if (0x3fffffff - (uVar13 >> 1) < uVar13) {
            puVar12 = (undefined4 *)0x0;
          }
          else {
            puVar12 = (undefined4 *)(uVar13 + (uVar13 >> 1));
          }
          if (puVar12 < local_34) {
            puVar12 = local_34;
          }
          FUN_0063da20(puVar12);
        }
        if (*(undefined4 **)(iVar1 + -8) != (undefined4 *)0x0) {
          **(undefined4 **)(iVar1 + -8) = puVar14;
        }
      }
      *(int *)(iVar1 + -8) = *(int *)(iVar1 + -8) + 4;
      local_1c = local_30;
    } while (local_30 != local_2c);
  } while( true );
}


/* FUN_00675690 @ 00675690  kind=gamemisc  attributed-by=none  size=359 */

void FUN_00675690(void)

{
  int iVar1;
  undefined4 uVar2;
  int in_ECX;
  int *piVar3;
  int iVar4;
  int local_28;
  int local_24;
  double local_20;
  double local_18;
  undefined8 local_10;
  uint local_8;
  
  local_8 = DAT_0076aa78 ^ (uint)&stack0xfffffffc;
  uVar2 = gluNewTess();
  gluTessCallback(uVar2,0x1870b,FUN_00675670);
  gluTessCallback(uVar2,0x1870f,FUN_006751d0);
  gluTessCallback(uVar2,0x18708,cube::Controller::vfunction6);
  gluTessProperty(uVar2,0x1872c,0x40f8723000000000);
  if (*(int *)(in_ECX + 0x40) != *(int *)(in_ECX + 0x44)) {
    *(undefined4 *)(in_ECX + 0x38) = *(undefined4 *)(in_ECX + 0x34);
    gluTessBeginPolygon(uVar2,in_ECX);
    local_28 = 0;
    if (0 < (*(int *)(in_ECX + 0x44) - *(int *)(in_ECX + 0x40)) / 0xc) {
      local_24 = 0;
      do {
        gluTessBeginContour(uVar2);
        piVar3 = (int *)(local_24 + *(int *)(in_ECX + 0x40));
        if (0 < (int)(piVar3[1] - *piVar3 & 0xfffffffcU)) {
          iVar4 = 0;
          do {
            iVar1 = *(int *)(*piVar3 + iVar4 * 4);
            local_18 = (double)*(float *)(*(int *)(in_ECX + 4) + 4 + iVar1 * 8);
            local_20 = (double)*(float *)(*(int *)(in_ECX + 4) + iVar1 * 8);
            local_10 = 0;
            gluTessVertex(uVar2,&local_20,iVar1);
            piVar3 = (int *)(*(int *)(in_ECX + 0x40) + local_24);
            iVar4 = iVar4 + 1;
          } while (iVar4 < piVar3[1] - *piVar3 >> 2);
        }
        gluTessEndContour(uVar2);
        local_24 = local_24 + 0xc;
        local_28 = local_28 + 1;
      } while (local_28 < (*(int *)(in_ECX + 0x44) - *(int *)(in_ECX + 0x40)) / 0xc);
    }
    gluTessEndPolygon();
    gluDeleteTess();
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


/* FUN_00677630 @ 00677630  kind=gamemisc  attributed-by=none  size=44 */

void FUN_00677630(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  for (; param_1 != param_2; param_1 = (undefined8 *)((int)param_1 + 0xc)) {
    *param_3 = *param_1;
    *(undefined4 *)(param_3 + 1) = *(undefined4 *)(param_1 + 1);
    param_3 = (undefined8 *)((int)param_3 + 0xc);
  }
  return;
}


/* FUN_00677660 @ 00677660  kind=gamemisc  attributed-by=none  size=249 */

int FUN_00677660(undefined8 *param_1,int param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  int iVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  int local_8;
  
  iVar6 = ((int)param_3 - (int)param_1) * 0x2aaaaaab;
  iVar9 = ((int)param_3 - (int)param_1) / 0xc;
  iVar3 = (param_2 - (int)param_1) / 0xc;
  iVar5 = iVar3;
  local_8 = iVar9;
  while (iVar4 = iVar5, iVar4 != 0) {
    iVar6 = local_8 / iVar4;
    iVar5 = local_8 % iVar4;
    local_8 = iVar4;
  }
  if ((local_8 < iVar9) && (0 < local_8)) {
    puVar11 = (undefined8 *)((int)param_1 + local_8 * 0xc);
    do {
      puVar7 = (undefined8 *)(iVar3 * 0xc + (int)puVar11);
      puVar10 = puVar11;
      if (puVar7 == param_3) {
        puVar7 = param_1;
      }
      do {
        puVar8 = puVar7;
        uVar2 = *(undefined4 *)(puVar10 + 1);
        uVar1 = *puVar10;
        *puVar10 = *puVar8;
        *(undefined4 *)(puVar10 + 1) = *(undefined4 *)(puVar8 + 1);
        *puVar8 = uVar1;
        *(undefined4 *)(puVar8 + 1) = uVar2;
        iVar6 = ((int)param_3 - (int)puVar8) * 0x2aaaaaab;
        iVar9 = ((int)param_3 - (int)puVar8) / 0xc;
        if (iVar3 < iVar9) {
          puVar7 = (undefined8 *)((int)puVar8 + iVar3 * 0xc);
        }
        else {
          iVar9 = iVar3 - iVar9;
          iVar6 = iVar9 * 3;
          puVar7 = (undefined8 *)((int)param_1 + iVar9 * 0xc);
        }
        puVar10 = puVar8;
      } while (puVar7 != puVar11);
      local_8 = local_8 + -1;
      puVar11 = (undefined8 *)((int)puVar11 + -0xc);
    } while (0 < local_8);
  }
  return iVar6;
}


/* FUN_00677800 @ 00677800  kind=gamemisc  attributed-by=none  size=343 */

void FUN_00677800(int *param_1)

{
  int *piVar1;
  void *pvVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  int *piVar6;
  char cVar7;
  int iVar8;
  int *in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  piVar6 = param_1;
  local_8 = 0xffffffff;
  puStack_c = &LAB_006f83b0;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  if (in_ECX != param_1) {
    if (*param_1 == param_1[1]) {
      iVar8 = *in_ECX;
    }
    else {
      pvVar2 = (void *)*in_ECX;
      uVar4 = (param_1[1] - *param_1) / 0xc;
      uVar5 = (in_ECX[1] - (int)pvVar2) / 0xc;
      if (uVar5 < uVar4) {
        if ((uint)((in_ECX[2] - (int)pvVar2) / 0xc) < uVar4) {
          if (pvVar2 != (void *)0x0) {
            param_1 = (int *)uVar4;
                    /* WARNING: Subroutine does not return */
            operator_delete(pvVar2);
          }
          piVar1 = param_1 + 1;
          iVar8 = *param_1;
          param_1 = (int *)uVar4;
          cVar7 = FUN_0044b6d0((*piVar1 - iVar8) / 0xc);
          if (cVar7 == '\0') {
            ExceptionList = local_10;
            return;
          }
          local_8 = 0;
          iVar8 = FUN_00677760(*piVar6,piVar6[1],*in_ECX,(int)&param_1 + 3,param_1);
        }
        else {
          iVar3 = *param_1;
          iVar8 = iVar3 + uVar5 * 0xc;
          param_1 = (int *)uVar4;
          FUN_00677630(iVar3,iVar8,*in_ECX);
          iVar8 = FUN_00677760(iVar8,piVar6[1],in_ECX[1],(int)&param_1 + 3,param_1);
        }
      }
      else {
        iVar8 = *param_1;
        piVar1 = param_1 + 1;
        param_1 = (int *)uVar4;
        FUN_00677630(iVar8,*piVar1,pvVar2);
        iVar8 = *in_ECX + ((piVar6[1] - *piVar6) / 0xc) * 0xc;
      }
    }
    in_ECX[1] = iVar8;
  }
  ExceptionList = local_10;
  return;
}


/* FUN_006779e0 @ 006779e0  kind=gamemisc  attributed-by=none  size=217 */

int FUN_006779e0(undefined4 param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  undefined8 *puVar3;
  int iVar4;
  int *in_ECX;
  int iVar5;
  int iVar6;
  undefined4 local_10;
  int iStack_c;
  undefined4 local_8;
  
  iVar5 = *in_ECX;
  iVar6 = 0;
  while( true ) {
    if (iVar5 == in_ECX[1]) {
      local_10 = param_1;
      iStack_c = param_2;
      local_8 = param_3;
      FUN_004c1100(&local_10);
      return iVar6;
    }
    if (param_2 <= *(int *)(iVar5 + 4)) break;
    iVar5 = iVar5 + 0xc;
    iVar6 = iVar6 + 1;
  }
  iVar2 = *in_ECX;
  local_10 = param_1;
  iStack_c = param_2;
  local_8 = param_3;
  if (in_ECX[1] == in_ECX[2]) {
    FUN_004abf80(1);
  }
  puVar3 = (undefined8 *)in_ECX[1];
  if (puVar3 != (undefined8 *)0x0) {
    *puVar3 = CONCAT44(iStack_c,local_10);
    *(undefined4 *)(puVar3 + 1) = local_8;
  }
  in_ECX[1] = in_ECX[1] + 0xc;
  iVar4 = in_ECX[1];
  iVar1 = iVar4 + -0xc;
  iVar5 = *in_ECX + ((iVar5 - iVar2) / 0xc) * 0xc;
  if (iVar5 == iVar1) {
    return iVar6;
  }
  if (iVar1 == iVar4) {
    return iVar6;
  }
  FUN_00677660(iVar5,iVar1,iVar4,0,0);
  return iVar6;
}


/* FUN_00677ac0 @ 00677ac0  kind=gamemisc  attributed-by=none  size=59 */

void FUN_00677ac0(undefined4 *param_1,undefined4 *param_2)

{
  while( true ) {
    if (param_1 == param_2) {
      return;
    }
    if (7 < (uint)param_1[5]) break;
    param_1[5] = 7;
    param_1[4] = 0;
    *(undefined2 *)param_1 = 0;
    param_1 = param_1 + 7;
  }
                    /* WARNING: Subroutine does not return */
  operator_delete((void *)*param_1);
}


/* FUN_0067eb10 @ 0067eb10  kind=gamemisc  attributed-by=none  size=155 */

undefined4 * FUN_0067eb10(undefined4 *param_1,int *param_2,int *param_3)

{
  char cVar1;
  int *piVar2;
  int *piVar3;
  int *piVar4;
  undefined4 *in_ECX;
  undefined1 local_8 [4];
  
  piVar2 = param_2;
  if ((param_2 == *(int **)*in_ECX) && (param_3 == (int *)*in_ECX)) {
    FUN_0067e480();
    *param_1 = *(undefined4 *)*in_ECX;
    return param_1;
  }
  while (piVar2 != param_3) {
    param_2 = piVar2;
    if (*(char *)((int)piVar2 + 0xd) == '\0') {
      param_2 = (int *)piVar2[2];
      if (*(char *)((int)param_2 + 0xd) == '\0') {
        cVar1 = *(char *)(*param_2 + 0xd);
        piVar3 = (int *)*param_2;
        while (cVar1 == '\0') {
          cVar1 = *(char *)(*piVar3 + 0xd);
          param_2 = piVar3;
          piVar3 = (int *)*piVar3;
        }
      }
      else {
        cVar1 = *(char *)(piVar2[1] + 0xd);
        piVar4 = (int *)piVar2[1];
        piVar3 = piVar2;
        while ((param_2 = piVar4, cVar1 == '\0' && (piVar3 == (int *)param_2[2]))) {
          cVar1 = *(char *)(param_2[1] + 0xd);
          piVar4 = (int *)param_2[1];
          piVar3 = param_2;
        }
      }
    }
    FUN_0043ede0(local_8,piVar2);
    piVar2 = param_2;
  }
  *param_1 = piVar2;
  return param_1;
}


/* FUN_0067f980 @ 0067f980  kind=gamemisc  attributed-by=none  size=203 */

void FUN_0067f980(undefined4 param_1,float *param_2,float *param_3,float *param_4,float *param_5,
                 float param_6)

{
  undefined4 *puVar1;
  float *pfVar2;
  int in_ECX;
  float fVar3;
  
  puVar1 = (undefined4 *)FUN_0067e340(&param_1);
  pfVar2 = (float *)*puVar1;
  if (pfVar2 == (float *)0x0) {
    pfVar2 = operator_new(0x24);
    puVar1 = (undefined4 *)FUN_0067e340(&param_1);
    *puVar1 = pfVar2;
  }
  if (*param_2 < *(float *)(in_ECX + 100)) {
    *(float *)(in_ECX + 100) = *param_2;
  }
  if (param_2[1] < *(float *)(in_ECX + 0x68)) {
    *(float *)(in_ECX + 0x68) = param_2[1];
  }
  fVar3 = *param_2 + *param_3;
  if (*(float *)(in_ECX + 0x6c) <= fVar3 && fVar3 != *(float *)(in_ECX + 0x6c)) {
    *(float *)(in_ECX + 0x6c) = fVar3;
  }
  fVar3 = param_3[1] + param_2[1];
  if (*(float *)(in_ECX + 0x70) <= fVar3 && fVar3 != *(float *)(in_ECX + 0x70)) {
    *(float *)(in_ECX + 0x70) = fVar3;
  }
  *pfVar2 = *param_2;
  pfVar2[1] = param_2[1];
  pfVar2[2] = *param_3;
  pfVar2[3] = param_3[1];
  pfVar2[4] = *param_4;
  pfVar2[5] = param_4[1];
  pfVar2[6] = *param_5;
  pfVar2[7] = param_5[1];
  pfVar2[8] = param_6;
  return;
}


/* FUN_0067fa60 @ 0067fa60  kind=gamemisc  attributed-by=none  size=525 */

undefined4 * FUN_0067fa60(undefined4 *param_1,int *param_2,uint *param_3,undefined4 param_4)

{
  int *piVar1;
  uint *puVar2;
  undefined4 *puVar3;
  undefined4 *in_ECX;
  bool bVar4;
  uint uStack_34;
  undefined1 local_24 [8];
  uint local_1c;
  int *local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_006f8ae0;
  local_10 = ExceptionList;
  uStack_34 = DAT_0076aa78 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_34;
  ExceptionList = &local_10;
  local_8 = 0;
  if (in_ECX[1] == 0) {
    local_14 = (undefined1 *)&uStack_34;
    FUN_004ebb40(param_1,1,*in_ECX,param_3,param_4);
    ExceptionList = local_10;
    return param_1;
  }
  piVar1 = (int *)*in_ECX;
  if (param_2 == (int *)*piVar1) {
    local_14 = (undefined1 *)&uStack_34;
    if (*param_3 < (uint)param_2[4]) {
      local_14 = (undefined1 *)&uStack_34;
      FUN_004ebb40(param_1,1,param_2,param_3,param_4);
      ExceptionList = local_10;
      return param_1;
    }
  }
  else if (param_2 == piVar1) {
    local_14 = (undefined1 *)&uStack_34;
    if (*(uint *)(piVar1[2] + 0x10) < *param_3) {
      local_14 = (undefined1 *)&uStack_34;
      FUN_004ebb40(param_1,0,piVar1[2],param_3,param_4);
      ExceptionList = local_10;
      return param_1;
    }
  }
  else {
    local_1c = *param_3;
    bVar4 = (uint)param_2[4] < local_1c;
    puVar2 = &uStack_34;
    if (local_1c < (uint)param_2[4]) {
      local_18 = param_2;
      FUN_0042c740();
      if ((uint)local_18[4] < local_1c) {
        if (*(char *)(local_18[2] + 0xd) != '\0') {
          FUN_004ebb40(param_1,0,local_18,param_3,param_4);
          ExceptionList = local_10;
          return param_1;
        }
        FUN_004ebb40(param_1,1,param_2,param_3,param_4);
        ExceptionList = local_10;
        return param_1;
      }
      bVar4 = (uint)param_2[4] < local_1c;
      puVar2 = (uint *)local_14;
    }
    local_14 = (undefined1 *)puVar2;
    if (bVar4) {
      local_18 = param_2;
      FUN_005c3ea0();
      if ((local_18 == piVar1) || (local_1c < (uint)local_18[4])) {
        if (*(char *)(param_2[2] + 0xd) != '\0') {
          FUN_004ebb40(param_1,0,param_2,param_3,param_4);
          ExceptionList = local_10;
          return param_1;
        }
        FUN_004ebb40(param_1,1,local_18,param_3,param_4);
        ExceptionList = local_10;
        return param_1;
      }
    }
  }
  local_8 = 0xffffffff;
  puVar3 = (undefined4 *)FUN_0067fc90(local_24,0,param_3,param_4);
  *param_1 = *puVar3;
  ExceptionList = local_10;
  return param_1;
}


/* FUN_0067fc90 @ 0067fc90  kind=gamemisc  attributed-by=none  size=257 */

void FUN_0067fc90(undefined4 *param_1,char param_2,uint *param_3,undefined4 param_4)

{
  int *piVar1;
  undefined4 *puVar2;
  undefined4 *in_ECX;
  bool bVar3;
  int *piVar4;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_006f8b00;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  piVar1 = (int *)*in_ECX;
  bVar3 = true;
  local_8 = 0;
  piVar4 = piVar1;
  if (*(char *)(piVar1[1] + 0xd) == '\0') {
    piVar1 = (int *)piVar1[1];
    do {
      piVar4 = piVar1;
      if (param_2 == '\0') {
        bVar3 = *param_3 < (uint)piVar4[4];
      }
      else {
        bVar3 = *param_3 <= (uint)piVar4[4];
      }
      if (bVar3 == false) {
        piVar1 = (int *)piVar4[2];
      }
      else {
        piVar1 = (int *)*piVar4;
      }
    } while (*(char *)((int)piVar1 + 0xd) == '\0');
    piVar1 = (int *)*in_ECX;
  }
  _param_2 = piVar4;
  if (bVar3 != false) {
    if (piVar4 == (int *)*piVar1) {
      puVar2 = (undefined4 *)&param_2;
      bVar3 = true;
      goto LAB_0067fd24;
    }
    FUN_0042c740();
  }
  piVar1 = _param_2;
  if (*param_3 <= (uint)_param_2[4]) {
    FUN_00681a20(param_4);
    *param_1 = piVar1;
    *(undefined1 *)(param_1 + 1) = 0;
    ExceptionList = local_10;
    return;
  }
  puVar2 = &param_3;
LAB_0067fd24:
  puVar2 = (undefined4 *)FUN_004ebb40(puVar2,bVar3,piVar4,param_3,param_4);
  *param_1 = *puVar2;
  *(undefined1 *)(param_1 + 1) = 1;
  ExceptionList = local_10;
  return;
}


/* FUN_0067fde0 @ 0067fde0  kind=gamemisc  attributed-by=none  size=731 */

void FUN_0067fde0(int *param_1)

{
  uint uVar1;
  undefined4 uVar2;
  int iVar3;
  char cVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  byte *****pppppbVar9;
  char *pcVar10;
  int iVar11;
  bool bVar12;
  undefined4 local_38;
  int local_34;
  int local_30;
  byte ****local_2c [4];
  uint local_1c;
  uint local_18;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006f8b28;
  local_10 = ExceptionList;
  uVar5 = DAT_0076aa78 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_14 = uVar5;
  FUN_00688180();
  local_34 = 0;
  cVar4 = FUN_00688490();
  do {
    if (cVar4 != '\0') {
      ExceptionList = local_10;
      __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
      return;
    }
    FUN_00688220(local_2c,1);
    uVar8 = local_1c;
    iVar11 = local_30;
    pppppbVar9 = local_2c;
    if (0xf < local_18) {
      pppppbVar9 = (byte *****)local_2c[0];
    }
    uVar6 = 0x13;
    if (local_1c < 0x13) {
      uVar6 = local_1c;
    }
    local_8 = 0;
    if (uVar6 == 0) {
LAB_0067fec0:
      if (local_1c < 0x13) {
        uVar6 = 0xffffffff;
      }
      else {
        uVar6 = (uint)(local_1c != 0x13);
      }
      bVar12 = uVar6 == 0;
    }
    else {
      pcVar10 = "ArrayAttribute.size";
      while (uVar1 = uVar6 - 4, 3 < uVar6) {
        if (*pppppbVar9 != *(byte *****)pcVar10) goto LAB_0067fe86;
        pppppbVar9 = pppppbVar9 + 1;
        pcVar10 = pcVar10 + 4;
        uVar6 = uVar1;
      }
      if (uVar1 == 0xfffffffc) {
LAB_0067feba:
        uVar6 = 0;
      }
      else {
LAB_0067fe86:
        bVar12 = *(byte *)pppppbVar9 < (byte)*pcVar10;
        if ((*(byte *)pppppbVar9 == *pcVar10) &&
           ((uVar1 == 0xfffffffd ||
            ((bVar12 = *(byte *)((int)pppppbVar9 + 1) < (byte)pcVar10[1],
             *(byte *)((int)pppppbVar9 + 1) == pcVar10[1] &&
             ((uVar1 == 0xfffffffe ||
              ((bVar12 = *(byte *)((int)pppppbVar9 + 2) < (byte)pcVar10[2],
               *(byte *)((int)pppppbVar9 + 2) == pcVar10[2] &&
               ((uVar1 == 0xffffffff ||
                (bVar12 = *(byte *)((int)pppppbVar9 + 3) < (byte)pcVar10[3],
                *(byte *)((int)pppppbVar9 + 3) == pcVar10[3])))))))))))) goto LAB_0067feba;
        uVar6 = -(uint)bVar12 | 1;
      }
      bVar12 = false;
      if (uVar6 == 0) goto LAB_0067fec0;
    }
    if (bVar12) {
      FUN_00688180();
      std::basic_istream<char,std::char_traits<char>_>::read
                (*(basic_istream<char,std::char_traits<char>_> **)(iVar11 + 8),(char *)&local_38,
                 (ulonglong)uVar5 << 0x20);
      uVar2 = local_38;
      iVar11 = 0;
      if (0 < (int)(param_1[0x14] - param_1[0x13] & 0xfffffffcU)) {
        do {
          FUN_0040d9d0(uVar2);
          iVar11 = iVar11 + 1;
        } while (iVar11 < param_1[0x14] - param_1[0x13] >> 2);
      }
      FUN_00688490();
    }
    else {
      pppppbVar9 = local_2c;
      if (0xf < local_18) {
        pppppbVar9 = (byte *****)local_2c[0];
      }
      uVar6 = 0x14;
      if (local_1c < 0x14) {
        uVar6 = local_1c;
      }
      if (uVar6 == 0) {
LAB_0067ffb0:
        if (local_1c < 0x14) {
          uVar6 = 0xffffffff;
        }
        else {
          uVar6 = (uint)(local_1c != 0x14);
        }
        bVar12 = uVar6 == 0;
      }
      else {
        pcVar10 = "ArrayAttribute.frame";
        while (uVar1 = uVar6 - 4, 3 < uVar6) {
          if (*pppppbVar9 != *(byte *****)pcVar10) goto LAB_0067ff76;
          pppppbVar9 = pppppbVar9 + 1;
          pcVar10 = pcVar10 + 4;
          uVar6 = uVar1;
        }
        if (uVar1 == 0xfffffffc) {
LAB_0067ffaa:
          uVar6 = 0;
        }
        else {
LAB_0067ff76:
          bVar12 = *(byte *)pppppbVar9 < (byte)*pcVar10;
          if ((*(byte *)pppppbVar9 == *pcVar10) &&
             ((uVar1 == 0xfffffffd ||
              ((bVar12 = *(byte *)((int)pppppbVar9 + 1) < (byte)pcVar10[1],
               *(byte *)((int)pppppbVar9 + 1) == pcVar10[1] &&
               ((uVar1 == 0xfffffffe ||
                ((bVar12 = *(byte *)((int)pppppbVar9 + 2) < (byte)pcVar10[2],
                 *(byte *)((int)pppppbVar9 + 2) == pcVar10[2] &&
                 ((uVar1 == 0xffffffff ||
                  (bVar12 = *(byte *)((int)pppppbVar9 + 3) < (byte)pcVar10[3],
                  *(byte *)((int)pppppbVar9 + 3) == pcVar10[3])))))))))))) goto LAB_0067ffaa;
          uVar6 = -(uint)bVar12 | 1;
        }
        bVar12 = false;
        if (uVar6 == 0) goto LAB_0067ffb0;
      }
      if (bVar12) {
        FUN_00688180();
        iVar7 = (**(code **)(*param_1 + 4))();
        iVar3 = local_34;
        if (local_34 == iVar7) {
          (**(code **)(*param_1 + 8))();
        }
        std::basic_istream<char,std::char_traits<char>_>::read
                  (*(basic_istream<char,std::char_traits<char>_> **)(iVar11 + 8),
                   (char *)**(undefined4 **)(param_1[0x13] + iVar3 * 4),(ulonglong)uVar5 << 0x20);
        local_34 = iVar3 + 1;
        FUN_00688490();
      }
      else {
        pppppbVar9 = local_2c;
        if (0xf < local_18) {
          pppppbVar9 = (byte *****)local_2c[0];
        }
        uVar6 = 0x12;
        if (local_1c < 0x12) {
          uVar6 = local_1c;
        }
        iVar11 = FUN_0040c590(pppppbVar9,"Attribute.sequence",uVar6);
        bVar12 = false;
        if (iVar11 == 0) {
          if (uVar8 < 0x12) {
            uVar8 = 0xffffffff;
          }
          else {
            uVar8 = (uint)(uVar8 != 0x12);
          }
          bVar12 = uVar8 == 0;
        }
        if (bVar12) {
          FUN_00682a80(param_1);
        }
        else {
          FUN_006886f0();
        }
      }
    }
    local_8 = 0xffffffff;
    if (0xf < local_18) {
                    /* WARNING: Subroutine does not return */
      operator_delete(local_2c[0]);
    }
    local_18 = 0xf;
    local_1c = 0;
    local_2c[0] = (byte ****)((uint)local_2c[0] & 0xffffff00);
    cVar4 = FUN_00688490();
  } while( true );
}


/* FUN_006800d0 @ 006800d0  kind=gamemisc  attributed-by=none  size=731 */

void FUN_006800d0(int *param_1)

{
  uint uVar1;
  undefined4 uVar2;
  int iVar3;
  char cVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  byte *****pppppbVar9;
  char *pcVar10;
  int iVar11;
  bool bVar12;
  undefined4 local_38;
  int local_34;
  int local_30;
  byte ****local_2c [4];
  uint local_1c;
  uint local_18;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006f8b28;
  local_10 = ExceptionList;
  uVar5 = DAT_0076aa78 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_14 = uVar5;
  FUN_00688180();
  local_34 = 0;
  cVar4 = FUN_00688490();
  do {
    if (cVar4 != '\0') {
      ExceptionList = local_10;
      __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
      return;
    }
    FUN_00688220(local_2c,1);
    uVar8 = local_1c;
    iVar11 = local_30;
    pppppbVar9 = local_2c;
    if (0xf < local_18) {
      pppppbVar9 = (byte *****)local_2c[0];
    }
    uVar6 = 0x13;
    if (local_1c < 0x13) {
      uVar6 = local_1c;
    }
    local_8 = 0;
    if (uVar6 == 0) {
LAB_006801b0:
      if (local_1c < 0x13) {
        uVar6 = 0xffffffff;
      }
      else {
        uVar6 = (uint)(local_1c != 0x13);
      }
      bVar12 = uVar6 == 0;
    }
    else {
      pcVar10 = "ArrayAttribute.size";
      while (uVar1 = uVar6 - 4, 3 < uVar6) {
        if (*pppppbVar9 != *(byte *****)pcVar10) goto LAB_00680176;
        pppppbVar9 = pppppbVar9 + 1;
        pcVar10 = pcVar10 + 4;
        uVar6 = uVar1;
      }
      if (uVar1 == 0xfffffffc) {
LAB_006801aa:
        uVar6 = 0;
      }
      else {
LAB_00680176:
        bVar12 = *(byte *)pppppbVar9 < (byte)*pcVar10;
        if ((*(byte *)pppppbVar9 == *pcVar10) &&
           ((uVar1 == 0xfffffffd ||
            ((bVar12 = *(byte *)((int)pppppbVar9 + 1) < (byte)pcVar10[1],
             *(byte *)((int)pppppbVar9 + 1) == pcVar10[1] &&
             ((uVar1 == 0xfffffffe ||
              ((bVar12 = *(byte *)((int)pppppbVar9 + 2) < (byte)pcVar10[2],
               *(byte *)((int)pppppbVar9 + 2) == pcVar10[2] &&
               ((uVar1 == 0xffffffff ||
                (bVar12 = *(byte *)((int)pppppbVar9 + 3) < (byte)pcVar10[3],
                *(byte *)((int)pppppbVar9 + 3) == pcVar10[3])))))))))))) goto LAB_006801aa;
        uVar6 = -(uint)bVar12 | 1;
      }
      bVar12 = false;
      if (uVar6 == 0) goto LAB_006801b0;
    }
    if (bVar12) {
      FUN_00688180();
      std::basic_istream<char,std::char_traits<char>_>::read
                (*(basic_istream<char,std::char_traits<char>_> **)(iVar11 + 8),(char *)&local_38,
                 (ulonglong)uVar5 << 0x20);
      uVar2 = local_38;
      iVar11 = 0;
      if (0 < (int)(param_1[0x14] - param_1[0x13] & 0xfffffffcU)) {
        do {
          FUN_0042bea0(uVar2);
          iVar11 = iVar11 + 1;
        } while (iVar11 < param_1[0x14] - param_1[0x13] >> 2);
      }
      FUN_00688490();
    }
    else {
      pppppbVar9 = local_2c;
      if (0xf < local_18) {
        pppppbVar9 = (byte *****)local_2c[0];
      }
      uVar6 = 0x14;
      if (local_1c < 0x14) {
        uVar6 = local_1c;
      }
      if (uVar6 == 0) {
LAB_006802a0:
        if (local_1c < 0x14) {
          uVar6 = 0xffffffff;
        }
        else {
          uVar6 = (uint)(local_1c != 0x14);
        }
        bVar12 = uVar6 == 0;
      }
      else {
        pcVar10 = "ArrayAttribute.frame";
        while (uVar1 = uVar6 - 4, 3 < uVar6) {
          if (*pppppbVar9 != *(byte *****)pcVar10) goto LAB_00680266;
          pppppbVar9 = pppppbVar9 + 1;
          pcVar10 = pcVar10 + 4;
          uVar6 = uVar1;
        }
        if (uVar1 == 0xfffffffc) {
LAB_0068029a:
          uVar6 = 0;
        }
        else {
LAB_00680266:
          bVar12 = *(byte *)pppppbVar9 < (byte)*pcVar10;
          if ((*(byte *)pppppbVar9 == *pcVar10) &&
             ((uVar1 == 0xfffffffd ||
              ((bVar12 = *(byte *)((int)pppppbVar9 + 1) < (byte)pcVar10[1],
               *(byte *)((int)pppppbVar9 + 1) == pcVar10[1] &&
               ((uVar1 == 0xfffffffe ||
                ((bVar12 = *(byte *)((int)pppppbVar9 + 2) < (byte)pcVar10[2],
                 *(byte *)((int)pppppbVar9 + 2) == pcVar10[2] &&
                 ((uVar1 == 0xffffffff ||
                  (bVar12 = *(byte *)((int)pppppbVar9 + 3) < (byte)pcVar10[3],
                  *(byte *)((int)pppppbVar9 + 3) == pcVar10[3])))))))))))) goto LAB_0068029a;
          uVar6 = -(uint)bVar12 | 1;
        }
        bVar12 = false;
        if (uVar6 == 0) goto LAB_006802a0;
      }
      if (bVar12) {
        FUN_00688180();
        iVar7 = (**(code **)(*param_1 + 4))();
        iVar3 = local_34;
        if (local_34 == iVar7) {
          (**(code **)(*param_1 + 8))();
        }
        std::basic_istream<char,std::char_traits<char>_>::read
                  (*(basic_istream<char,std::char_traits<char>_> **)(iVar11 + 8),
                   (char *)**(undefined4 **)(param_1[0x13] + iVar3 * 4),(ulonglong)uVar5 << 0x20);
        local_34 = iVar3 + 1;
        FUN_00688490();
      }
      else {
        pppppbVar9 = local_2c;
        if (0xf < local_18) {
          pppppbVar9 = (byte *****)local_2c[0];
        }
        uVar6 = 0x12;
        if (local_1c < 0x12) {
          uVar6 = local_1c;
        }
        iVar11 = FUN_0040c590(pppppbVar9,"Attribute.sequence",uVar6);
        bVar12 = false;
        if (iVar11 == 0) {
          if (uVar8 < 0x12) {
            uVar8 = 0xffffffff;
          }
          else {
            uVar8 = (uint)(uVar8 != 0x12);
          }
          bVar12 = uVar8 == 0;
        }
        if (bVar12) {
          FUN_00682a80(param_1);
        }
        else {
          FUN_006886f0();
        }
      }
    }
    local_8 = 0xffffffff;
    if (0xf < local_18) {
                    /* WARNING: Subroutine does not return */
      operator_delete(local_2c[0]);
    }
    local_18 = 0xf;
    local_1c = 0;
    local_2c[0] = (byte ****)((uint)local_2c[0] & 0xffffff00);
    cVar4 = FUN_00688490();
  } while( true );
}


/* FUN_006803c0 @ 006803c0  kind=gamemisc  attributed-by=none  size=731 */

void FUN_006803c0(int *param_1)

{
  uint uVar1;
  undefined4 uVar2;
  int iVar3;
  char cVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  byte *****pppppbVar9;
  char *pcVar10;
  int iVar11;
  bool bVar12;
  undefined4 local_38;
  int local_34;
  int local_30;
  byte ****local_2c [4];
  uint local_1c;
  uint local_18;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006f8b28;
  local_10 = ExceptionList;
  uVar5 = DAT_0076aa78 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_14 = uVar5;
  FUN_00688180();
  local_34 = 0;
  cVar4 = FUN_00688490();
  do {
    if (cVar4 != '\0') {
      ExceptionList = local_10;
      __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
      return;
    }
    FUN_00688220(local_2c,1);
    uVar8 = local_1c;
    iVar11 = local_30;
    pppppbVar9 = local_2c;
    if (0xf < local_18) {
      pppppbVar9 = (byte *****)local_2c[0];
    }
    uVar6 = 0x13;
    if (local_1c < 0x13) {
      uVar6 = local_1c;
    }
    local_8 = 0;
    if (uVar6 == 0) {
LAB_006804a0:
      if (local_1c < 0x13) {
        uVar6 = 0xffffffff;
      }
      else {
        uVar6 = (uint)(local_1c != 0x13);
      }
      bVar12 = uVar6 == 0;
    }
    else {
      pcVar10 = "ArrayAttribute.size";
      while (uVar1 = uVar6 - 4, 3 < uVar6) {
        if (*pppppbVar9 != *(byte *****)pcVar10) goto LAB_00680466;
        pppppbVar9 = pppppbVar9 + 1;
        pcVar10 = pcVar10 + 4;
        uVar6 = uVar1;
      }
      if (uVar1 == 0xfffffffc) {
LAB_0068049a:
        uVar6 = 0;
      }
      else {
LAB_00680466:
        bVar12 = *(byte *)pppppbVar9 < (byte)*pcVar10;
        if ((*(byte *)pppppbVar9 == *pcVar10) &&
           ((uVar1 == 0xfffffffd ||
            ((bVar12 = *(byte *)((int)pppppbVar9 + 1) < (byte)pcVar10[1],
             *(byte *)((int)pppppbVar9 + 1) == pcVar10[1] &&
             ((uVar1 == 0xfffffffe ||
              ((bVar12 = *(byte *)((int)pppppbVar9 + 2) < (byte)pcVar10[2],
               *(byte *)((int)pppppbVar9 + 2) == pcVar10[2] &&
               ((uVar1 == 0xffffffff ||
                (bVar12 = *(byte *)((int)pppppbVar9 + 3) < (byte)pcVar10[3],
                *(byte *)((int)pppppbVar9 + 3) == pcVar10[3])))))))))))) goto LAB_0068049a;
        uVar6 = -(uint)bVar12 | 1;
      }
      bVar12 = false;
      if (uVar6 == 0) goto LAB_006804a0;
    }
    if (bVar12) {
      FUN_00688180();
      std::basic_istream<char,std::char_traits<char>_>::read
                (*(basic_istream<char,std::char_traits<char>_> **)(iVar11 + 8),(char *)&local_38,
                 (ulonglong)uVar5 << 0x20);
      uVar2 = local_38;
      iVar11 = 0;
      if (0 < (int)(param_1[0x14] - param_1[0x13] & 0xfffffffcU)) {
        do {
          FUN_0042bf80(uVar2);
          iVar11 = iVar11 + 1;
        } while (iVar11 < param_1[0x14] - param_1[0x13] >> 2);
      }
      FUN_00688490();
    }
    else {
      pppppbVar9 = local_2c;
      if (0xf < local_18) {
        pppppbVar9 = (byte *****)local_2c[0];
      }
      uVar6 = 0x14;
      if (local_1c < 0x14) {
        uVar6 = local_1c;
      }
      if (uVar6 == 0) {
LAB_00680590:
        if (local_1c < 0x14) {
          uVar6 = 0xffffffff;
        }
        else {
          uVar6 = (uint)(local_1c != 0x14);
        }
        bVar12 = uVar6 == 0;
      }
      else {
        pcVar10 = "ArrayAttribute.frame";
        while (uVar1 = uVar6 - 4, 3 < uVar6) {
          if (*pppppbVar9 != *(byte *****)pcVar10) goto LAB_00680556;
          pppppbVar9 = pppppbVar9 + 1;
          pcVar10 = pcVar10 + 4;
          uVar6 = uVar1;
        }
        if (uVar1 == 0xfffffffc) {
LAB_0068058a:
          uVar6 = 0;
        }
        else {
LAB_00680556:
          bVar12 = *(byte *)pppppbVar9 < (byte)*pcVar10;
          if ((*(byte *)pppppbVar9 == *pcVar10) &&
             ((uVar1 == 0xfffffffd ||
              ((bVar12 = *(byte *)((int)pppppbVar9 + 1) < (byte)pcVar10[1],
               *(byte *)((int)pppppbVar9 + 1) == pcVar10[1] &&
               ((uVar1 == 0xfffffffe ||
                ((bVar12 = *(byte *)((int)pppppbVar9 + 2) < (byte)pcVar10[2],
                 *(byte *)((int)pppppbVar9 + 2) == pcVar10[2] &&
                 ((uVar1 == 0xffffffff ||
                  (bVar12 = *(byte *)((int)pppppbVar9 + 3) < (byte)pcVar10[3],
                  *(byte *)((int)pppppbVar9 + 3) == pcVar10[3])))))))))))) goto LAB_0068058a;
          uVar6 = -(uint)bVar12 | 1;
        }
        bVar12 = false;
        if (uVar6 == 0) goto LAB_00680590;
      }
      if (bVar12) {
        FUN_00688180();
        iVar7 = (**(code **)(*param_1 + 4))();
        iVar3 = local_34;
        if (local_34 == iVar7) {
          (**(code **)(*param_1 + 8))();
        }
        std::basic_istream<char,std::char_traits<char>_>::read
                  (*(basic_istream<char,std::char_traits<char>_> **)(iVar11 + 8),
                   (char *)**(undefined4 **)(param_1[0x13] + iVar3 * 4),(ulonglong)uVar5 << 0x20);
        local_34 = iVar3 + 1;
        FUN_00688490();
      }
      else {
        pppppbVar9 = local_2c;
        if (0xf < local_18) {
          pppppbVar9 = (byte *****)local_2c[0];
        }
        uVar6 = 0x12;
        if (local_1c < 0x12) {
          uVar6 = local_1c;
        }
        iVar11 = FUN_0040c590(pppppbVar9,"Attribute.sequence",uVar6);
        bVar12 = false;
        if (iVar11 == 0) {
          if (uVar8 < 0x12) {
            uVar8 = 0xffffffff;
          }
          else {
            uVar8 = (uint)(uVar8 != 0x12);
          }
          bVar12 = uVar8 == 0;
        }
        if (bVar12) {
          FUN_00682a80(param_1);
        }
        else {
          FUN_006886f0();
        }
      }
    }
    local_8 = 0xffffffff;
    if (0xf < local_18) {
                    /* WARNING: Subroutine does not return */
      operator_delete(local_2c[0]);
    }
    local_18 = 0xf;
    local_1c = 0;
    local_2c[0] = (byte ****)((uint)local_2c[0] & 0xffffff00);
    cVar4 = FUN_00688490();
  } while( true );
}


/* FUN_006806b0 @ 006806b0  kind=gamemisc  attributed-by=none  size=561 */

void FUN_006806b0(int *param_1)

{
  uint uVar1;
  char cVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  int in_ECX;
  byte *****pppppbVar6;
  char *pcVar7;
  bool bVar8;
  int local_34;
  byte ****local_2c [4];
  uint local_1c;
  uint local_18;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006f8b58;
  local_10 = ExceptionList;
  uVar3 = DAT_0076aa78 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_14 = uVar3;
  FUN_00688180();
  local_34 = 0;
  cVar2 = FUN_00688490();
  do {
    if (cVar2 != '\0') {
      ExceptionList = local_10;
      __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
      return;
    }
    FUN_00688220(local_2c,1);
    pppppbVar6 = local_2c;
    if (0xf < local_18) {
      pppppbVar6 = (byte *****)local_2c[0];
    }
    uVar4 = 0xf;
    if (local_1c < 0xf) {
      uVar4 = local_1c;
    }
    local_8 = 0;
    if (uVar4 == 0) {
LAB_00680790:
      if (local_1c < 0xf) {
        uVar4 = 0xffffffff;
      }
      else {
        uVar4 = (uint)(local_1c != 0xf);
      }
      bVar8 = uVar4 == 0;
    }
    else {
      pcVar7 = "Attribute.frame";
      while (uVar1 = uVar4 - 4, 3 < uVar4) {
        if (*pppppbVar6 != *(byte *****)pcVar7) goto LAB_00680756;
        pppppbVar6 = pppppbVar6 + 1;
        pcVar7 = pcVar7 + 4;
        uVar4 = uVar1;
      }
      if (uVar1 == 0xfffffffc) {
LAB_0068078a:
        uVar4 = 0;
      }
      else {
LAB_00680756:
        bVar8 = *(byte *)pppppbVar6 < (byte)*pcVar7;
        if ((*(byte *)pppppbVar6 == *pcVar7) &&
           ((uVar1 == 0xfffffffd ||
            ((bVar8 = *(byte *)((int)pppppbVar6 + 1) < (byte)pcVar7[1],
             *(byte *)((int)pppppbVar6 + 1) == pcVar7[1] &&
             ((uVar1 == 0xfffffffe ||
              ((bVar8 = *(byte *)((int)pppppbVar6 + 2) < (byte)pcVar7[2],
               *(byte *)((int)pppppbVar6 + 2) == pcVar7[2] &&
               ((uVar1 == 0xffffffff ||
                (bVar8 = *(byte *)((int)pppppbVar6 + 3) < (byte)pcVar7[3],
                *(byte *)((int)pppppbVar6 + 3) == pcVar7[3])))))))))))) goto LAB_0068078a;
        uVar4 = -(uint)bVar8 | 1;
      }
      bVar8 = false;
      if (uVar4 == 0) goto LAB_00680790;
    }
    if (bVar8) {
      FUN_00688180();
      iVar5 = (**(code **)(*param_1 + 4))();
      if (local_34 == iVar5) {
        (**(code **)(*param_1 + 8))();
      }
      std::basic_istream<char,std::char_traits<char>_>::read
                (*(basic_istream<char,std::char_traits<char>_> **)(in_ECX + 8),
                 (char *)(param_1[0x13] + local_34 * 4),(ulonglong)uVar3 << 0x20);
      local_34 = local_34 + 1;
      FUN_00688490();
    }
    else {
      pppppbVar6 = local_2c;
      if (0xf < local_18) {
        pppppbVar6 = (byte *****)local_2c[0];
      }
      uVar4 = 0x12;
      if (local_1c < 0x12) {
        uVar4 = local_1c;
      }
      if (uVar4 == 0) {
LAB_00680861:
        if (local_1c < 0x12) {
          uVar4 = 0xffffffff;
        }
        else {
          uVar4 = (uint)(local_1c != 0x12);
        }
        bVar8 = uVar4 == 0;
      }
      else {
        pcVar7 = "Attribute.sequence";
        while (uVar1 = uVar4 - 4, 3 < uVar4) {
          if (*pppppbVar6 != *(byte *****)pcVar7) goto LAB_00680827;
          pppppbVar6 = pppppbVar6 + 1;
          pcVar7 = pcVar7 + 4;
          uVar4 = uVar1;
        }
        if (uVar1 == 0xfffffffc) {
LAB_0068085b:
          uVar4 = 0;
        }
        else {
LAB_00680827:
          bVar8 = *(byte *)pppppbVar6 < (byte)*pcVar7;
          if ((*(byte *)pppppbVar6 == *pcVar7) &&
             ((uVar1 == 0xfffffffd ||
              ((bVar8 = *(byte *)((int)pppppbVar6 + 1) < (byte)pcVar7[1],
               *(byte *)((int)pppppbVar6 + 1) == pcVar7[1] &&
               ((uVar1 == 0xfffffffe ||
                ((bVar8 = *(byte *)((int)pppppbVar6 + 2) < (byte)pcVar7[2],
                 *(byte *)((int)pppppbVar6 + 2) == pcVar7[2] &&
                 ((uVar1 == 0xffffffff ||
                  (bVar8 = *(byte *)((int)pppppbVar6 + 3) < (byte)pcVar7[3],
                  *(byte *)((int)pppppbVar6 + 3) == pcVar7[3])))))))))))) goto LAB_0068085b;
          uVar4 = -(uint)bVar8 | 1;
        }
        bVar8 = false;
        if (uVar4 == 0) goto LAB_00680861;
      }
      if (bVar8) {
        FUN_00682a80(param_1);
      }
      else {
        FUN_006886f0();
      }
    }
    local_8 = 0xffffffff;
    if (0xf < local_18) {
                    /* WARNING: Subroutine does not return */
      operator_delete(local_2c[0]);
    }
    local_18 = 0xf;
    local_1c = 0;
    local_2c[0] = (byte ****)((uint)local_2c[0] & 0xffffff00);
    cVar2 = FUN_00688490();
  } while( true );
}


/* FUN_006808f0 @ 006808f0  kind=gamemisc  attributed-by=none  size=576 */

void FUN_006808f0(int *param_1)

{
  uint uVar1;
  char cVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  int in_ECX;
  byte ****ppppbVar6;
  char *pcVar7;
  bool bVar8;
  int local_38;
  int local_30;
  byte ***local_2c [4];
  uint local_1c;
  uint local_18;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006f8b28;
  local_10 = ExceptionList;
  uVar3 = DAT_0076aa78 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_14 = uVar3;
  FUN_00688180();
  local_38 = 0;
  cVar2 = FUN_00688490();
  if (cVar2 == '\0') {
    local_30 = 0;
    do {
      FUN_00688220(local_2c,1);
      ppppbVar6 = local_2c;
      if (0xf < local_18) {
        ppppbVar6 = (byte ****)local_2c[0];
      }
      uVar4 = 0xf;
      if (local_1c < 0xf) {
        uVar4 = local_1c;
      }
      local_8 = 0;
      if (uVar4 == 0) {
LAB_006809d0:
        if (local_1c < 0xf) {
          uVar4 = 0xffffffff;
        }
        else {
          uVar4 = (uint)(local_1c != 0xf);
        }
        bVar8 = uVar4 == 0;
      }
      else {
        pcVar7 = "Attribute.frame";
        while (uVar1 = uVar4 - 4, 3 < uVar4) {
          if (*ppppbVar6 != *(byte ****)pcVar7) goto LAB_00680996;
          ppppbVar6 = ppppbVar6 + 1;
          pcVar7 = pcVar7 + 4;
          uVar4 = uVar1;
        }
        if (uVar1 == 0xfffffffc) {
LAB_006809ca:
          uVar4 = 0;
        }
        else {
LAB_00680996:
          bVar8 = *(byte *)ppppbVar6 < (byte)*pcVar7;
          if ((*(byte *)ppppbVar6 == *pcVar7) &&
             ((uVar1 == 0xfffffffd ||
              ((bVar8 = *(byte *)((int)ppppbVar6 + 1) < (byte)pcVar7[1],
               *(byte *)((int)ppppbVar6 + 1) == pcVar7[1] &&
               ((uVar1 == 0xfffffffe ||
                ((bVar8 = *(byte *)((int)ppppbVar6 + 2) < (byte)pcVar7[2],
                 *(byte *)((int)ppppbVar6 + 2) == pcVar7[2] &&
                 ((uVar1 == 0xffffffff ||
                  (bVar8 = *(byte *)((int)ppppbVar6 + 3) < (byte)pcVar7[3],
                  *(byte *)((int)ppppbVar6 + 3) == pcVar7[3])))))))))))) goto LAB_006809ca;
          uVar4 = -(uint)bVar8 | 1;
        }
        bVar8 = false;
        if (uVar4 == 0) goto LAB_006809d0;
      }
      if (bVar8) {
        FUN_00688180();
        iVar5 = (**(code **)(*param_1 + 4))();
        if (local_38 == iVar5) {
          (**(code **)(*param_1 + 8))();
        }
        std::basic_istream<char,std::char_traits<char>_>::read
                  (*(basic_istream<char,std::char_traits<char>_> **)(in_ECX + 8),
                   (char *)(param_1[0x13] + local_30),(ulonglong)uVar3 << 0x20);
        local_38 = local_38 + 1;
        local_30 = local_30 + 0x40;
        FUN_00688490();
      }
      else {
        ppppbVar6 = local_2c;
        if (0xf < local_18) {
          ppppbVar6 = (byte ****)local_2c[0];
        }
        uVar4 = 0x12;
        if (local_1c < 0x12) {
          uVar4 = local_1c;
        }
        if (uVar4 == 0) {
LAB_00680ab0:
          if (local_1c < 0x12) {
            uVar4 = 0xffffffff;
          }
          else {
            uVar4 = (uint)(local_1c != 0x12);
          }
          bVar8 = uVar4 == 0;
        }
        else {
          pcVar7 = "Attribute.sequence";
          while (uVar1 = uVar4 - 4, 3 < uVar4) {
            if (*ppppbVar6 != *(byte ****)pcVar7) goto LAB_00680a76;
            ppppbVar6 = ppppbVar6 + 1;
            pcVar7 = pcVar7 + 4;
            uVar4 = uVar1;
          }
          if (uVar1 == 0xfffffffc) {
LAB_00680aaa:
            uVar4 = 0;
          }
          else {
LAB_00680a76:
            bVar8 = *(byte *)ppppbVar6 < (byte)*pcVar7;
            if ((*(byte *)ppppbVar6 == *pcVar7) &&
               ((uVar1 == 0xfffffffd ||
                ((bVar8 = *(byte *)((int)ppppbVar6 + 1) < (byte)pcVar7[1],
                 *(byte *)((int)ppppbVar6 + 1) == pcVar7[1] &&
                 ((uVar1 == 0xfffffffe ||
                  ((bVar8 = *(byte *)((int)ppppbVar6 + 2) < (byte)pcVar7[2],
                   *(byte *)((int)ppppbVar6 + 2) == pcVar7[2] &&
                   ((uVar1 == 0xffffffff ||
                    (bVar8 = *(byte *)((int)ppppbVar6 + 3) < (byte)pcVar7[3],
                    *(byte *)((int)ppppbVar6 + 3) == pcVar7[3])))))))))))) goto LAB_00680aaa;
            uVar4 = -(uint)bVar8 | 1;
          }
          bVar8 = false;
          if (uVar4 == 0) goto LAB_00680ab0;
        }
        if (bVar8) {
          FUN_00682a80(param_1);
        }
        else {
          FUN_006886f0();
        }
      }
      local_8 = 0xffffffff;
      if (0xf < local_18) {
                    /* WARNING: Subroutine does not return */
        operator_delete(local_2c[0]);
      }
      local_18 = 0xf;
      local_1c = 0;
      local_2c[0] = (byte ***)((uint)local_2c[0] & 0xffffff00);
      cVar2 = FUN_00688490();
    } while (cVar2 == '\0');
  }
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}


/* FUN_00680b40 @ 00680b40  kind=gamemisc  attributed-by=none  size=561 */

void FUN_00680b40(int *param_1)

{
  uint uVar1;
  char cVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  int in_ECX;
  byte *****pppppbVar6;
  char *pcVar7;
  bool bVar8;
  int local_34;
  byte ****local_2c [4];
  uint local_1c;
  uint local_18;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006f8b58;
  local_10 = ExceptionList;
  uVar3 = DAT_0076aa78 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_14 = uVar3;
  FUN_00688180();
  local_34 = 0;
  cVar2 = FUN_00688490();
  do {
    if (cVar2 != '\0') {
      ExceptionList = local_10;
      __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
      return;
    }
    FUN_00688220(local_2c,1);
    pppppbVar6 = local_2c;
    if (0xf < local_18) {
      pppppbVar6 = (byte *****)local_2c[0];
    }
    uVar4 = 0xf;
    if (local_1c < 0xf) {
      uVar4 = local_1c;
    }
    local_8 = 0;
    if (uVar4 == 0) {
LAB_00680c20:
      if (local_1c < 0xf) {
        uVar4 = 0xffffffff;
      }
      else {
        uVar4 = (uint)(local_1c != 0xf);
      }
      bVar8 = uVar4 == 0;
    }
    else {
      pcVar7 = "Attribute.frame";
      while (uVar1 = uVar4 - 4, 3 < uVar4) {
        if (*pppppbVar6 != *(byte *****)pcVar7) goto LAB_00680be6;
        pppppbVar6 = pppppbVar6 + 1;
        pcVar7 = pcVar7 + 4;
        uVar4 = uVar1;
      }
      if (uVar1 == 0xfffffffc) {
LAB_00680c1a:
        uVar4 = 0;
      }
      else {
LAB_00680be6:
        bVar8 = *(byte *)pppppbVar6 < (byte)*pcVar7;
        if ((*(byte *)pppppbVar6 == *pcVar7) &&
           ((uVar1 == 0xfffffffd ||
            ((bVar8 = *(byte *)((int)pppppbVar6 + 1) < (byte)pcVar7[1],
             *(byte *)((int)pppppbVar6 + 1) == pcVar7[1] &&
             ((uVar1 == 0xfffffffe ||
              ((bVar8 = *(byte *)((int)pppppbVar6 + 2) < (byte)pcVar7[2],
               *(byte *)((int)pppppbVar6 + 2) == pcVar7[2] &&
               ((uVar1 == 0xffffffff ||
                (bVar8 = *(byte *)((int)pppppbVar6 + 3) < (byte)pcVar7[3],
                *(byte *)((int)pppppbVar6 + 3) == pcVar7[3])))))))))))) goto LAB_00680c1a;
        uVar4 = -(uint)bVar8 | 1;
      }
      bVar8 = false;
      if (uVar4 == 0) goto LAB_00680c20;
    }
    if (bVar8) {
      FUN_00688180();
      iVar5 = (**(code **)(*param_1 + 4))();
      if (local_34 == iVar5) {
        (**(code **)(*param_1 + 8))();
      }
      std::basic_istream<char,std::char_traits<char>_>::read
                (*(basic_istream<char,std::char_traits<char>_> **)(in_ECX + 8),
                 (char *)(param_1[0x13] + local_34 * 8),(ulonglong)uVar3 << 0x20);
      local_34 = local_34 + 1;
      FUN_00688490();
    }
    else {
      pppppbVar6 = local_2c;
      if (0xf < local_18) {
        pppppbVar6 = (byte *****)local_2c[0];
      }
      uVar4 = 0x12;
      if (local_1c < 0x12) {
        uVar4 = local_1c;
      }
      if (uVar4 == 0) {
LAB_00680cf1:
        if (local_1c < 0x12) {
          uVar4 = 0xffffffff;
        }
        else {
          uVar4 = (uint)(local_1c != 0x12);
        }
        bVar8 = uVar4 == 0;
      }
      else {
        pcVar7 = "Attribute.sequence";
        while (uVar1 = uVar4 - 4, 3 < uVar4) {
          if (*pppppbVar6 != *(byte *****)pcVar7) goto LAB_00680cb7;
          pppppbVar6 = pppppbVar6 + 1;
          pcVar7 = pcVar7 + 4;
          uVar4 = uVar1;
        }
        if (uVar1 == 0xfffffffc) {
LAB_00680ceb:
          uVar4 = 0;
        }
        else {
LAB_00680cb7:
          bVar8 = *(byte *)pppppbVar6 < (byte)*pcVar7;
          if ((*(byte *)pppppbVar6 == *pcVar7) &&
             ((uVar1 == 0xfffffffd ||
              ((bVar8 = *(byte *)((int)pppppbVar6 + 1) < (byte)pcVar7[1],
               *(byte *)((int)pppppbVar6 + 1) == pcVar7[1] &&
               ((uVar1 == 0xfffffffe ||
                ((bVar8 = *(byte *)((int)pppppbVar6 + 2) < (byte)pcVar7[2],
                 *(byte *)((int)pppppbVar6 + 2) == pcVar7[2] &&
                 ((uVar1 == 0xffffffff ||
                  (bVar8 = *(byte *)((int)pppppbVar6 + 3) < (byte)pcVar7[3],
                  *(byte *)((int)pppppbVar6 + 3) == pcVar7[3])))))))))))) goto LAB_00680ceb;
          uVar4 = -(uint)bVar8 | 1;
        }
        bVar8 = false;
        if (uVar4 == 0) goto LAB_00680cf1;
      }
      if (bVar8) {
        FUN_00682a80(param_1);
      }
      else {
        FUN_006886f0();
      }
    }
    local_8 = 0xffffffff;
    if (0xf < local_18) {
                    /* WARNING: Subroutine does not return */
      operator_delete(local_2c[0]);
    }
    local_18 = 0xf;
    local_1c = 0;
    local_2c[0] = (byte ****)((uint)local_2c[0] & 0xffffff00);
    cVar2 = FUN_00688490();
  } while( true );
}


/* FUN_00680d80 @ 00680d80  kind=gamemisc  attributed-by=none  size=576 */

void FUN_00680d80(int *param_1)

{
  uint uVar1;
  char cVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  int in_ECX;
  byte ****ppppbVar6;
  char *pcVar7;
  bool bVar8;
  int local_38;
  int local_30;
  byte ***local_2c [4];
  uint local_1c;
  uint local_18;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006f8b28;
  local_10 = ExceptionList;
  uVar3 = DAT_0076aa78 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_14 = uVar3;
  FUN_00688180();
  local_38 = 0;
  cVar2 = FUN_00688490();
  if (cVar2 == '\0') {
    local_30 = 0;
    do {
      FUN_00688220(local_2c,1);
      ppppbVar6 = local_2c;
      if (0xf < local_18) {
        ppppbVar6 = (byte ****)local_2c[0];
      }
      uVar4 = 0xf;
      if (local_1c < 0xf) {
        uVar4 = local_1c;
      }
      local_8 = 0;
      if (uVar4 == 0) {
LAB_00680e60:
        if (local_1c < 0xf) {
          uVar4 = 0xffffffff;
        }
        else {
          uVar4 = (uint)(local_1c != 0xf);
        }
        bVar8 = uVar4 == 0;
      }
      else {
        pcVar7 = "Attribute.frame";
        while (uVar1 = uVar4 - 4, 3 < uVar4) {
          if (*ppppbVar6 != *(byte ****)pcVar7) goto LAB_00680e26;
          ppppbVar6 = ppppbVar6 + 1;
          pcVar7 = pcVar7 + 4;
          uVar4 = uVar1;
        }
        if (uVar1 == 0xfffffffc) {
LAB_00680e5a:
          uVar4 = 0;
        }
        else {
LAB_00680e26:
          bVar8 = *(byte *)ppppbVar6 < (byte)*pcVar7;
          if ((*(byte *)ppppbVar6 == *pcVar7) &&
             ((uVar1 == 0xfffffffd ||
              ((bVar8 = *(byte *)((int)ppppbVar6 + 1) < (byte)pcVar7[1],
               *(byte *)((int)ppppbVar6 + 1) == pcVar7[1] &&
               ((uVar1 == 0xfffffffe ||
                ((bVar8 = *(byte *)((int)ppppbVar6 + 2) < (byte)pcVar7[2],
                 *(byte *)((int)ppppbVar6 + 2) == pcVar7[2] &&
                 ((uVar1 == 0xffffffff ||
                  (bVar8 = *(byte *)((int)ppppbVar6 + 3) < (byte)pcVar7[3],
                  *(byte *)((int)ppppbVar6 + 3) == pcVar7[3])))))))))))) goto LAB_00680e5a;
          uVar4 = -(uint)bVar8 | 1;
        }
        bVar8 = false;
        if (uVar4 == 0) goto LAB_00680e60;
      }
      if (bVar8) {
        FUN_00688180();
        iVar5 = (**(code **)(*param_1 + 4))();
        if (local_38 == iVar5) {
          (**(code **)(*param_1 + 8))();
        }
        std::basic_istream<char,std::char_traits<char>_>::read
                  (*(basic_istream<char,std::char_traits<char>_> **)(in_ECX + 8),
                   (char *)(param_1[0x13] + local_30),(ulonglong)uVar3 << 0x20);
        local_38 = local_38 + 1;
        local_30 = local_30 + 0xc;
        FUN_00688490();
      }
      else {
        ppppbVar6 = local_2c;
        if (0xf < local_18) {
          ppppbVar6 = (byte ****)local_2c[0];
        }
        uVar4 = 0x12;
        if (local_1c < 0x12) {
          uVar4 = local_1c;
        }
        if (uVar4 == 0) {
LAB_00680f40:
          if (local_1c < 0x12) {
            uVar4 = 0xffffffff;
          }
          else {
            uVar4 = (uint)(local_1c != 0x12);
          }
          bVar8 = uVar4 == 0;
        }
        else {
          pcVar7 = "Attribute.sequence";
          while (uVar1 = uVar4 - 4, 3 < uVar4) {
            if (*ppppbVar6 != *(byte ****)pcVar7) goto LAB_00680f06;
            ppppbVar6 = ppppbVar6 + 1;
            pcVar7 = pcVar7 + 4;
            uVar4 = uVar1;
          }
          if (uVar1 == 0xfffffffc) {
LAB_00680f3a:
            uVar4 = 0;
          }
          else {
LAB_00680f06:
            bVar8 = *(byte *)ppppbVar6 < (byte)*pcVar7;
            if ((*(byte *)ppppbVar6 == *pcVar7) &&
               ((uVar1 == 0xfffffffd ||
                ((bVar8 = *(byte *)((int)ppppbVar6 + 1) < (byte)pcVar7[1],
                 *(byte *)((int)ppppbVar6 + 1) == pcVar7[1] &&
                 ((uVar1 == 0xfffffffe ||
                  ((bVar8 = *(byte *)((int)ppppbVar6 + 2) < (byte)pcVar7[2],
                   *(byte *)((int)ppppbVar6 + 2) == pcVar7[2] &&
                   ((uVar1 == 0xffffffff ||
                    (bVar8 = *(byte *)((int)ppppbVar6 + 3) < (byte)pcVar7[3],
                    *(byte *)((int)ppppbVar6 + 3) == pcVar7[3])))))))))))) goto LAB_00680f3a;
            uVar4 = -(uint)bVar8 | 1;
          }
          bVar8 = false;
          if (uVar4 == 0) goto LAB_00680f40;
        }
        if (bVar8) {
          FUN_00682a80(param_1);
        }
        else {
          FUN_006886f0();
        }
      }
      local_8 = 0xffffffff;
      if (0xf < local_18) {
                    /* WARNING: Subroutine does not return */
        operator_delete(local_2c[0]);
      }
      local_18 = 0xf;
      local_1c = 0;
      local_2c[0] = (byte ***)((uint)local_2c[0] & 0xffffff00);
      cVar2 = FUN_00688490();
    } while (cVar2 == '\0');
  }
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}


/* FUN_00680fd0 @ 00680fd0  kind=gamemisc  attributed-by=none  size=576 */

void FUN_00680fd0(int *param_1)

{
  uint uVar1;
  char cVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  int in_ECX;
  byte ****ppppbVar6;
  char *pcVar7;
  bool bVar8;
  int local_38;
  int local_30;
  byte ***local_2c [4];
  uint local_1c;
  uint local_18;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006f8b28;
  local_10 = ExceptionList;
  uVar3 = DAT_0076aa78 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_14 = uVar3;
  FUN_00688180();
  local_38 = 0;
  cVar2 = FUN_00688490();
  if (cVar2 == '\0') {
    local_30 = 0;
    do {
      FUN_00688220(local_2c,1);
      ppppbVar6 = local_2c;
      if (0xf < local_18) {
        ppppbVar6 = (byte ****)local_2c[0];
      }
      uVar4 = 0xf;
      if (local_1c < 0xf) {
        uVar4 = local_1c;
      }
      local_8 = 0;
      if (uVar4 == 0) {
LAB_006810b0:
        if (local_1c < 0xf) {
          uVar4 = 0xffffffff;
        }
        else {
          uVar4 = (uint)(local_1c != 0xf);
        }
        bVar8 = uVar4 == 0;
      }
      else {
        pcVar7 = "Attribute.frame";
        while (uVar1 = uVar4 - 4, 3 < uVar4) {
          if (*ppppbVar6 != *(byte ****)pcVar7) goto LAB_00681076;
          ppppbVar6 = ppppbVar6 + 1;
          pcVar7 = pcVar7 + 4;
          uVar4 = uVar1;
        }
        if (uVar1 == 0xfffffffc) {
LAB_006810aa:
          uVar4 = 0;
        }
        else {
LAB_00681076:
          bVar8 = *(byte *)ppppbVar6 < (byte)*pcVar7;
          if ((*(byte *)ppppbVar6 == *pcVar7) &&
             ((uVar1 == 0xfffffffd ||
              ((bVar8 = *(byte *)((int)ppppbVar6 + 1) < (byte)pcVar7[1],
               *(byte *)((int)ppppbVar6 + 1) == pcVar7[1] &&
               ((uVar1 == 0xfffffffe ||
                ((bVar8 = *(byte *)((int)ppppbVar6 + 2) < (byte)pcVar7[2],
                 *(byte *)((int)ppppbVar6 + 2) == pcVar7[2] &&
                 ((uVar1 == 0xffffffff ||
                  (bVar8 = *(byte *)((int)ppppbVar6 + 3) < (byte)pcVar7[3],
                  *(byte *)((int)ppppbVar6 + 3) == pcVar7[3])))))))))))) goto LAB_006810aa;
          uVar4 = -(uint)bVar8 | 1;
        }
        bVar8 = false;
        if (uVar4 == 0) goto LAB_006810b0;
      }
      if (bVar8) {
        FUN_00688180();
        iVar5 = (**(code **)(*param_1 + 4))();
        if (local_38 == iVar5) {
          (**(code **)(*param_1 + 8))();
        }
        std::basic_istream<char,std::char_traits<char>_>::read
                  (*(basic_istream<char,std::char_traits<char>_> **)(in_ECX + 8),
                   (char *)(param_1[0x13] + local_30),(ulonglong)uVar3 << 0x20);
        local_38 = local_38 + 1;
        local_30 = local_30 + 0x10;
        FUN_00688490();
      }
      else {
        ppppbVar6 = local_2c;
        if (0xf < local_18) {
          ppppbVar6 = (byte ****)local_2c[0];
        }
        uVar4 = 0x12;
        if (local_1c < 0x12) {
          uVar4 = local_1c;
        }
        if (uVar4 == 0) {
LAB_00681190:
          if (local_1c < 0x12) {
            uVar4 = 0xffffffff;
          }
          else {
            uVar4 = (uint)(local_1c != 0x12);
          }
          bVar8 = uVar4 == 0;
        }
        else {
          pcVar7 = "Attribute.sequence";
          while (uVar1 = uVar4 - 4, 3 < uVar4) {
            if (*ppppbVar6 != *(byte ****)pcVar7) goto LAB_00681156;
            ppppbVar6 = ppppbVar6 + 1;
            pcVar7 = pcVar7 + 4;
            uVar4 = uVar1;
          }
          if (uVar1 == 0xfffffffc) {
LAB_0068118a:
            uVar4 = 0;
          }
          else {
LAB_00681156:
            bVar8 = *(byte *)ppppbVar6 < (byte)*pcVar7;
            if ((*(byte *)ppppbVar6 == *pcVar7) &&
               ((uVar1 == 0xfffffffd ||
                ((bVar8 = *(byte *)((int)ppppbVar6 + 1) < (byte)pcVar7[1],
                 *(byte *)((int)ppppbVar6 + 1) == pcVar7[1] &&
                 ((uVar1 == 0xfffffffe ||
                  ((bVar8 = *(byte *)((int)ppppbVar6 + 2) < (byte)pcVar7[2],
                   *(byte *)((int)ppppbVar6 + 2) == pcVar7[2] &&
                   ((uVar1 == 0xffffffff ||
                    (bVar8 = *(byte *)((int)ppppbVar6 + 3) < (byte)pcVar7[3],
                    *(byte *)((int)ppppbVar6 + 3) == pcVar7[3])))))))))))) goto LAB_0068118a;
            uVar4 = -(uint)bVar8 | 1;
          }
          bVar8 = false;
          if (uVar4 == 0) goto LAB_00681190;
        }
        if (bVar8) {
          FUN_00682a80(param_1);
        }
        else {
          FUN_006886f0();
        }
      }
      local_8 = 0xffffffff;
      if (0xf < local_18) {
                    /* WARNING: Subroutine does not return */
        operator_delete(local_2c[0]);
      }
      local_18 = 0xf;
      local_1c = 0;
      local_2c[0] = (byte ***)((uint)local_2c[0] & 0xffffff00);
      cVar2 = FUN_00688490();
    } while (cVar2 == '\0');
  }
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}


/* FUN_00681af0 @ 00681af0  kind=gamemisc  attributed-by=none  size=115 */

void FUN_00681af0(uint param_1)

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
    FUN_00681a70();
    return;
  }
  FUN_00681a70();
  return;
}


/* FUN_00681bf0 @ 00681bf0  kind=gamemisc  attributed-by=none  size=114 */

void FUN_00681bf0(undefined4 *param_1)

{
  undefined4 *puVar1;
  uint uVar2;
  uint *in_ECX;
  int iVar3;
  
  puVar1 = (undefined4 *)in_ECX[1];
  if ((param_1 < puVar1) && ((undefined4 *)*in_ECX <= param_1)) {
    iVar3 = (int)param_1 - (int)*in_ECX >> 3;
    if (puVar1 == (undefined4 *)in_ECX[2]) {
      FUN_00681af0(1);
    }
    puVar1 = (undefined4 *)in_ECX[1];
    if (puVar1 != (undefined4 *)0x0) {
      uVar2 = *in_ECX;
      *puVar1 = *(undefined4 *)(uVar2 + iVar3 * 8);
      puVar1[1] = *(undefined4 *)(uVar2 + 4 + iVar3 * 8);
      in_ECX[1] = in_ECX[1] + 8;
      return;
    }
  }
  else {
    if (puVar1 == (undefined4 *)in_ECX[2]) {
      FUN_00681af0(1);
    }
    puVar1 = (undefined4 *)in_ECX[1];
    if (puVar1 != (undefined4 *)0x0) {
      *puVar1 = *param_1;
      puVar1[1] = param_1[1];
    }
  }
  in_ECX[1] = in_ECX[1] + 8;
  return;
}


/* FUN_00682a80 @ 00682a80  kind=gamemisc  attributed-by=none  size=1487 */

void FUN_00682a80(undefined4 param_1)

{
  uint uVar1;
  int iVar2;
  char cVar3;
  uint uVar4;
  uint uVar5;
  undefined4 uVar6;
  int iVar7;
  uint uVar8;
  byte *****pppppbVar9;
  char *pcVar10;
  undefined4 uVar11;
  bool bVar12;
  undefined4 local_b0;
  undefined4 local_ac;
  undefined4 local_a8;
  undefined4 local_a4;
  undefined4 local_a0;
  undefined4 local_9c;
  undefined4 local_98;
  int local_94;
  undefined4 local_90;
  void *local_8c [4];
  undefined4 local_7c;
  uint local_78;
  void *local_74 [4];
  undefined4 local_64;
  uint local_60;
  void *local_5c [4];
  undefined4 local_4c;
  uint local_48;
  byte ****local_44 [4];
  uint local_34;
  uint local_30;
  byte ****local_2c [4];
  uint local_1c;
  uint local_18;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  uint local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006f8d4b;
  local_10 = ExceptionList;
  uVar4 = DAT_0076aa78 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_a4 = param_1;
  local_14 = uVar4;
  FUN_00688180();
  local_9c = 0;
  cVar3 = FUN_00688490();
  do {
    if (cVar3 != '\0') {
      ExceptionList = local_10;
      __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
      return;
    }
    FUN_00688220(local_2c,1);
    uVar8 = local_1c;
    pppppbVar9 = local_2c;
    if (0xf < local_18) {
      pppppbVar9 = (byte *****)local_2c[0];
    }
    uVar5 = 0x17;
    if (local_1c < 0x17) {
      uVar5 = local_1c;
    }
    local_8 = 0;
    if (uVar5 == 0) {
LAB_00682b70:
      if (local_1c < 0x17) {
        uVar5 = 0xffffffff;
      }
      else {
        uVar5 = (uint)(local_1c != 0x17);
      }
      bVar12 = uVar5 == 0;
    }
    else {
      pcVar10 = "Attribute.sequence.name";
      while (uVar1 = uVar5 - 4, 3 < uVar5) {
        if (*pppppbVar9 != *(byte *****)pcVar10) goto LAB_00682b36;
        pppppbVar9 = pppppbVar9 + 1;
        pcVar10 = pcVar10 + 4;
        uVar5 = uVar1;
      }
      if (uVar1 == 0xfffffffc) {
LAB_00682b6a:
        uVar5 = 0;
      }
      else {
LAB_00682b36:
        bVar12 = *(byte *)pppppbVar9 < (byte)*pcVar10;
        if ((*(byte *)pppppbVar9 == *pcVar10) &&
           ((uVar1 == 0xfffffffd ||
            ((bVar12 = *(byte *)((int)pppppbVar9 + 1) < (byte)pcVar10[1],
             *(byte *)((int)pppppbVar9 + 1) == pcVar10[1] &&
             ((uVar1 == 0xfffffffe ||
              ((bVar12 = *(byte *)((int)pppppbVar9 + 2) < (byte)pcVar10[2],
               *(byte *)((int)pppppbVar9 + 2) == pcVar10[2] &&
               ((uVar1 == 0xffffffff ||
                (bVar12 = *(byte *)((int)pppppbVar9 + 3) < (byte)pcVar10[3],
                *(byte *)((int)pppppbVar9 + 3) == pcVar10[3])))))))))))) goto LAB_00682b6a;
        uVar5 = -(uint)bVar12 | 1;
      }
      bVar12 = false;
      if (uVar5 == 0) goto LAB_00682b70;
    }
    if (bVar12) {
      FUN_00688180();
      uVar6 = FUN_00688510(local_8c);
      local_8._0_1_ = 1;
      uVar6 = FUN_006089c0(local_74,uVar6);
      local_8._0_1_ = 2;
      local_9c = FUN_006619a0(uVar6);
      if (7 < local_60) {
                    /* WARNING: Subroutine does not return */
        operator_delete(local_74[0]);
      }
      local_60 = 7;
      local_64 = 0;
      local_74[0] = (void *)((uint)local_74[0] & 0xffff0000);
      local_8 = (uint)local_8._1_3_ << 8;
      if (0xf < local_78) {
                    /* WARNING: Subroutine does not return */
        operator_delete(local_8c[0]);
      }
      local_78 = 0xf;
      local_7c = 0;
      local_8c[0] = (void *)((uint)local_8c[0] & 0xffffff00);
      FUN_00688490();
    }
    else {
      pppppbVar9 = local_2c;
      if (0xf < local_18) {
        pppppbVar9 = (byte *****)local_2c[0];
      }
      uVar5 = 0x18;
      if (local_1c < 0x18) {
        uVar5 = local_1c;
      }
      if (uVar5 == 0) {
LAB_00682ca0:
        if (local_1c < 0x18) {
          uVar5 = 0xffffffff;
        }
        else {
          uVar5 = (uint)(local_1c != 0x18);
        }
        bVar12 = uVar5 == 0;
      }
      else {
        pcVar10 = "Attribute.sequence.wname";
        while (uVar1 = uVar5 - 4, 3 < uVar5) {
          if (*pppppbVar9 != *(byte *****)pcVar10) goto LAB_00682c66;
          pppppbVar9 = pppppbVar9 + 1;
          pcVar10 = pcVar10 + 4;
          uVar5 = uVar1;
        }
        if (uVar1 == 0xfffffffc) {
LAB_00682c9a:
          uVar5 = 0;
        }
        else {
LAB_00682c66:
          bVar12 = *(byte *)pppppbVar9 < (byte)*pcVar10;
          if ((*(byte *)pppppbVar9 == *pcVar10) &&
             ((uVar1 == 0xfffffffd ||
              ((bVar12 = *(byte *)((int)pppppbVar9 + 1) < (byte)pcVar10[1],
               *(byte *)((int)pppppbVar9 + 1) == pcVar10[1] &&
               ((uVar1 == 0xfffffffe ||
                ((bVar12 = *(byte *)((int)pppppbVar9 + 2) < (byte)pcVar10[2],
                 *(byte *)((int)pppppbVar9 + 2) == pcVar10[2] &&
                 ((uVar1 == 0xffffffff ||
                  (bVar12 = *(byte *)((int)pppppbVar9 + 3) < (byte)pcVar10[3],
                  *(byte *)((int)pppppbVar9 + 3) == pcVar10[3])))))))))))) goto LAB_00682c9a;
          uVar5 = -(uint)bVar12 | 1;
        }
        bVar12 = false;
        if (uVar5 == 0) goto LAB_00682ca0;
      }
      if (bVar12) {
        FUN_00688180();
        uVar6 = FUN_00688610(local_5c);
        local_8._0_1_ = 3;
        local_9c = FUN_006619a0(uVar6);
        local_8 = (uint)local_8._1_3_ << 8;
        if (7 < local_48) {
                    /* WARNING: Subroutine does not return */
          operator_delete(local_5c[0]);
        }
        local_48 = 7;
        local_4c = 0;
        local_5c[0] = (void *)((uint)local_5c[0] & 0xffff0000);
        FUN_00688490();
      }
      else {
        pppppbVar9 = local_2c;
        if (0xf < local_18) {
          pppppbVar9 = (byte *****)local_2c[0];
        }
        uVar5 = 0x16;
        if (local_1c < 0x16) {
          uVar5 = local_1c;
        }
        iVar7 = FUN_0040c590(pppppbVar9,"Attribute.sequence.key",uVar5);
        iVar2 = local_94;
        bVar12 = false;
        if (iVar7 == 0) {
          if (uVar8 < 0x16) {
            uVar8 = 0xffffffff;
          }
          else {
            uVar8 = (uint)(uVar8 != 0x16);
          }
          bVar12 = uVar8 == 0;
        }
        if (bVar12) {
          FUN_00688180();
          uVar6 = 0;
          uVar11 = 0;
          local_90 = 0;
          local_98 = 0;
          local_a0 = 0;
          cVar3 = FUN_00688490();
          while (cVar3 == '\0') {
            FUN_00688220(local_44,1);
            uVar8 = local_34;
            pppppbVar9 = local_44;
            if (0xf < local_30) {
              pppppbVar9 = (byte *****)local_44[0];
            }
            uVar5 = 0x1c;
            if (local_34 < 0x1c) {
              uVar5 = local_34;
            }
            local_8 = CONCAT31(local_8._1_3_,4);
            if (uVar5 == 0) {
LAB_00682e27:
              if (local_34 < 0x1c) {
                uVar5 = 0xffffffff;
              }
              else {
                uVar5 = (uint)(local_34 != 0x1c);
              }
              bVar12 = uVar5 == 0;
            }
            else {
              pcVar10 = "Attribute.sequence.key.frame";
              while (uVar1 = uVar5 - 4, 3 < uVar5) {
                if (*pppppbVar9 != *(byte *****)pcVar10) goto LAB_00682ded;
                pppppbVar9 = pppppbVar9 + 1;
                pcVar10 = pcVar10 + 4;
                uVar5 = uVar1;
              }
              if (uVar1 == 0xfffffffc) {
LAB_00682e21:
                uVar5 = 0;
              }
              else {
LAB_00682ded:
                bVar12 = *(byte *)pppppbVar9 < (byte)*pcVar10;
                if ((*(byte *)pppppbVar9 == *pcVar10) &&
                   ((uVar1 == 0xfffffffd ||
                    ((bVar12 = *(byte *)((int)pppppbVar9 + 1) < (byte)pcVar10[1],
                     *(byte *)((int)pppppbVar9 + 1) == pcVar10[1] &&
                     ((uVar1 == 0xfffffffe ||
                      ((bVar12 = *(byte *)((int)pppppbVar9 + 2) < (byte)pcVar10[2],
                       *(byte *)((int)pppppbVar9 + 2) == pcVar10[2] &&
                       ((uVar1 == 0xffffffff ||
                        (bVar12 = *(byte *)((int)pppppbVar9 + 3) < (byte)pcVar10[3],
                        *(byte *)((int)pppppbVar9 + 3) == pcVar10[3])))))))))))) goto LAB_00682e21;
                uVar5 = -(uint)bVar12 | 1;
              }
              bVar12 = false;
              if (uVar5 == 0) goto LAB_00682e27;
            }
            if (bVar12) {
              FUN_00688180();
              std::basic_istream<char,std::char_traits<char>_>::read
                        (*(basic_istream<char,std::char_traits<char>_> **)(iVar2 + 8),
                         (char *)&local_a8,(ulonglong)uVar4 << 0x20);
              uVar11 = local_a8;
              local_98 = local_a8;
              FUN_00688490();
              uVar6 = local_90;
            }
            else {
              pppppbVar9 = local_44;
              if (0xf < local_30) {
                pppppbVar9 = (byte *****)local_44[0];
              }
              uVar5 = 0x1b;
              if (local_34 < 0x1b) {
                uVar5 = local_34;
              }
              if (uVar5 == 0) {
LAB_00682ee8:
                if (local_34 < 0x1b) {
                  uVar5 = 0xffffffff;
                }
                else {
                  uVar5 = (uint)(local_34 != 0x1b);
                }
                bVar12 = uVar5 == 0;
              }
              else {
                pcVar10 = "Attribute.sequence.key.time";
                while (uVar1 = uVar5 - 4, 3 < uVar5) {
                  if (*pppppbVar9 != *(byte *****)pcVar10) goto LAB_00682eae;
                  pppppbVar9 = pppppbVar9 + 1;
                  pcVar10 = pcVar10 + 4;
                  uVar5 = uVar1;
                }
                if (uVar1 == 0xfffffffc) {
LAB_00682ee2:
                  uVar5 = 0;
                }
                else {
LAB_00682eae:
                  bVar12 = *(byte *)pppppbVar9 < (byte)*pcVar10;
                  if ((*(byte *)pppppbVar9 == *pcVar10) &&
                     ((uVar1 == 0xfffffffd ||
                      ((bVar12 = *(byte *)((int)pppppbVar9 + 1) < (byte)pcVar10[1],
                       *(byte *)((int)pppppbVar9 + 1) == pcVar10[1] &&
                       ((uVar1 == 0xfffffffe ||
                        ((bVar12 = *(byte *)((int)pppppbVar9 + 2) < (byte)pcVar10[2],
                         *(byte *)((int)pppppbVar9 + 2) == pcVar10[2] &&
                         ((uVar1 == 0xffffffff ||
                          (bVar12 = *(byte *)((int)pppppbVar9 + 3) < (byte)pcVar10[3],
                          *(byte *)((int)pppppbVar9 + 3) == pcVar10[3]))))))))))))
                  goto LAB_00682ee2;
                  uVar5 = -(uint)bVar12 | 1;
                }
                bVar12 = false;
                if (uVar5 == 0) goto LAB_00682ee8;
              }
              if (bVar12) {
                FUN_00688180();
                std::basic_istream<char,std::char_traits<char>_>::read
                          (*(basic_istream<char,std::char_traits<char>_> **)(iVar2 + 8),
                           (char *)&local_b0,(ulonglong)uVar4 << 0x20);
                uVar6 = local_b0;
                local_90 = local_b0;
                FUN_00688490();
                uVar11 = local_98;
              }
              else {
                pppppbVar9 = local_44;
                if (0xf < local_30) {
                  pppppbVar9 = (byte *****)local_44[0];
                }
                uVar5 = 0x21;
                if (local_34 < 0x21) {
                  uVar5 = local_34;
                }
                iVar7 = FUN_0040c590(pppppbVar9,"Attribute.sequence.key.smoothness",uVar5);
                bVar12 = false;
                if (iVar7 == 0) {
                  if (uVar8 < 0x21) {
                    uVar8 = 0xffffffff;
                  }
                  else {
                    uVar8 = (uint)(uVar8 != 0x21);
                  }
                  bVar12 = uVar8 == 0;
                }
                if (bVar12) {
                  FUN_00688180();
                  std::basic_istream<char,std::char_traits<char>_>::read
                            (*(basic_istream<char,std::char_traits<char>_> **)(iVar2 + 8),
                             (char *)&local_ac,(ulonglong)uVar4 << 0x20);
                  local_a0 = local_ac;
                  FUN_00688490();
                  uVar6 = local_90;
                  uVar11 = local_98;
                }
                else {
                  FUN_006886f0();
                  uVar6 = local_90;
                  uVar11 = local_98;
                }
              }
            }
            local_8 = local_8 & 0xffffff00;
            if (0xf < local_30) {
                    /* WARNING: Subroutine does not return */
              operator_delete(local_44[0]);
            }
            cVar3 = FUN_00688490();
          }
          FUN_006779e0(uVar11,uVar6,local_a0);
        }
        else {
          FUN_006886f0();
        }
      }
    }
    local_8 = 0xffffffff;
    if (0xf < local_18) {
                    /* WARNING: Subroutine does not return */
      operator_delete(local_2c[0]);
    }
    local_18 = 0xf;
    local_1c = 0;
    local_2c[0] = (byte ****)((uint)local_2c[0] & 0xffffff00);
    cVar3 = FUN_00688490();
  } while( true );
}


/* FUN_00683070 @ 00683070  kind=gamemisc  attributed-by=none  size=494 */

void FUN_00683070(void)

{
  uint uVar1;
  char cVar2;
  uint uVar3;
  uint uVar4;
  int in_ECX;
  byte *****pppppbVar5;
  char *pcVar6;
  bool bVar7;
  undefined4 local_4c;
  undefined4 local_3c;
  uint local_38;
  undefined4 local_34;
  int local_30;
  byte ****local_2c [4];
  uint local_1c;
  uint local_18;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006f8d90;
  local_10 = ExceptionList;
  uVar3 = DAT_0076aa78 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_14 = uVar3;
  FUN_00688180();
  local_38 = 7;
  local_3c = 0;
  local_4c = (void *)((uint)local_4c._2_2_ << 0x10);
  FUN_0040f7a0(&PTR_006fccac,0);
  local_8 = 0;
  local_30 = FUN_0064f080(0,0,&local_4c);
  local_8 = 0xffffffff;
  if (7 < local_38) {
                    /* WARNING: Subroutine does not return */
    operator_delete(local_4c);
  }
  local_38 = 7;
  local_3c = 0;
  local_4c = (void *)((uint)local_4c & 0xffff0000);
  cVar2 = FUN_00688490();
  do {
    if (cVar2 != '\0') {
      ExceptionList = local_10;
      __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
      return;
    }
    FUN_00688220(local_2c,1);
    pppppbVar5 = local_2c;
    if (0xf < local_18) {
      pppppbVar5 = (byte *****)local_2c[0];
    }
    uVar4 = 0xb;
    if (local_1c < 0xb) {
      uVar4 = local_1c;
    }
    local_8 = 1;
    if (uVar4 == 0) {
LAB_006831b0:
      if (local_1c < 0xb) {
        uVar4 = 0xffffffff;
      }
      else {
        uVar4 = (uint)(local_1c != 0xb);
      }
      bVar7 = uVar4 == 0;
    }
    else {
      pcVar6 = "Button.type";
      while (uVar1 = uVar4 - 4, 3 < uVar4) {
        if (*pppppbVar5 != *(byte *****)pcVar6) goto LAB_00683176;
        pppppbVar5 = pppppbVar5 + 1;
        pcVar6 = pcVar6 + 4;
        uVar4 = uVar1;
      }
      if (uVar1 == 0xfffffffc) {
LAB_006831aa:
        uVar4 = 0;
      }
      else {
LAB_00683176:
        bVar7 = *(byte *)pppppbVar5 < (byte)*pcVar6;
        if ((*(byte *)pppppbVar5 == *pcVar6) &&
           ((uVar1 == 0xfffffffd ||
            ((bVar7 = *(byte *)((int)pppppbVar5 + 1) < (byte)pcVar6[1],
             *(byte *)((int)pppppbVar5 + 1) == pcVar6[1] &&
             ((uVar1 == 0xfffffffe ||
              ((bVar7 = *(byte *)((int)pppppbVar5 + 2) < (byte)pcVar6[2],
               *(byte *)((int)pppppbVar5 + 2) == pcVar6[2] &&
               ((uVar1 == 0xffffffff ||
                (bVar7 = *(byte *)((int)pppppbVar5 + 3) < (byte)pcVar6[3],
                *(byte *)((int)pppppbVar5 + 3) == pcVar6[3])))))))))))) goto LAB_006831aa;
        uVar4 = -(uint)bVar7 | 1;
      }
      bVar7 = false;
      if (uVar4 == 0) goto LAB_006831b0;
    }
    if (bVar7) {
      FUN_00688180();
      std::basic_istream<char,std::char_traits<char>_>::read
                (*(basic_istream<char,std::char_traits<char>_> **)(in_ECX + 8),(char *)&local_34,
                 (ulonglong)uVar3 << 0x20);
      *(undefined4 *)(local_30 + 0x22c) = local_34;
      FUN_00688490();
    }
    else {
      cVar2 = FUN_00687560(local_30,local_2c);
      if (cVar2 == '\0') {
        FUN_006886f0();
      }
    }
    local_8 = 0xffffffff;
    if (0xf < local_18) {
                    /* WARNING: Subroutine does not return */
      operator_delete(local_2c[0]);
    }
    local_18 = 0xf;
    local_1c = 0;
    local_2c[0] = (byte ****)((uint)local_2c[0] & 0xffffff00);
    cVar2 = FUN_00688490();
  } while( true );
}


/* FUN_00683270 @ 00683270  kind=gamemisc  attributed-by=none  size=1227 */

void FUN_00683270(void)

{
  uint uVar1;
  char cVar2;
  uint uVar3;
  undefined4 uVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  byte ****ppppbVar8;
  char *pcVar9;
  bool bVar10;
  undefined4 local_78;
  undefined4 local_68;
  uint local_64;
  int local_60;
  void *local_5c [5];
  uint local_48;
  void *local_44 [4];
  undefined4 local_34;
  uint local_30;
  byte ***local_2c [4];
  uint local_1c;
  uint local_18;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006f8de8;
  local_10 = ExceptionList;
  local_14 = DAT_0076aa78 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  FUN_00688180(local_14);
  local_64 = 7;
  local_68 = 0;
  local_78 = (void *)((uint)local_78._2_2_ << 0x10);
  FUN_0040f7a0(&PTR_006fccac,0);
  local_8 = 0;
  local_60 = FUN_0064f180(&local_78);
  local_8 = 0xffffffff;
  if (7 < local_64) {
                    /* WARNING: Subroutine does not return */
    operator_delete(local_78);
  }
  local_64 = 7;
  local_68 = 0;
  local_78 = (void *)((uint)local_78 & 0xffff0000);
  cVar2 = FUN_00688490();
  do {
    if (cVar2 != '\0') {
      ExceptionList = local_10;
      __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
      return;
    }
    FUN_00688220(local_2c,1);
    uVar6 = local_18;
    uVar7 = local_1c;
    ppppbVar8 = local_2c;
    if (0xf < local_18) {
      ppppbVar8 = (byte ****)local_2c[0];
    }
    uVar3 = 0xc;
    if (local_1c < 0xc) {
      uVar3 = local_1c;
    }
    local_8 = 1;
    if (uVar3 == 0) {
LAB_006833a1:
      if (local_1c < 0xc) {
        uVar3 = 0xffffffff;
      }
      else {
        uVar3 = (uint)(local_1c != 0xc);
      }
      bVar10 = uVar3 == 0;
    }
    else {
      pcVar9 = "Display.name";
      while (uVar1 = uVar3 - 4, 3 < uVar3) {
        if (*ppppbVar8 != *(byte ****)pcVar9) goto LAB_00683367;
        ppppbVar8 = ppppbVar8 + 1;
        pcVar9 = pcVar9 + 4;
        uVar3 = uVar1;
      }
      if (uVar1 == 0xfffffffc) {
LAB_0068339b:
        uVar3 = 0;
      }
      else {
LAB_00683367:
        bVar10 = *(byte *)ppppbVar8 < (byte)*pcVar9;
        if ((*(byte *)ppppbVar8 == *pcVar9) &&
           ((uVar1 == 0xfffffffd ||
            ((bVar10 = *(byte *)((int)ppppbVar8 + 1) < (byte)pcVar9[1],
             *(byte *)((int)ppppbVar8 + 1) == pcVar9[1] &&
             ((uVar1 == 0xfffffffe ||
              ((bVar10 = *(byte *)((int)ppppbVar8 + 2) < (byte)pcVar9[2],
               *(byte *)((int)ppppbVar8 + 2) == pcVar9[2] &&
               ((uVar1 == 0xffffffff ||
                (bVar10 = *(byte *)((int)ppppbVar8 + 3) < (byte)pcVar9[3],
                *(byte *)((int)ppppbVar8 + 3) == pcVar9[3])))))))))))) goto LAB_0068339b;
        uVar3 = -(uint)bVar10 | 1;
      }
      bVar10 = false;
      if (uVar3 == 0) goto LAB_006833a1;
    }
    if (bVar10) {
      FUN_00688180();
      uVar4 = FUN_00688510(local_5c);
      local_8._0_1_ = 2;
      iVar5 = FUN_006089c0(local_44,uVar4);
      local_8 = CONCAT31(local_8._1_3_,3);
      if (local_60 + 0xc != iVar5) {
        FUN_0040f680(iVar5,0,0xffffffff);
      }
      if (7 < local_30) {
                    /* WARNING: Subroutine does not return */
        operator_delete(local_44[0]);
      }
      bVar10 = local_48 < 0x10;
      local_30 = 7;
      local_34 = 0;
      local_44[0] = (void *)((uint)local_44[0] & 0xffff0000);
LAB_006834e1:
      local_8 = CONCAT31(local_8._1_3_,1);
      if (!bVar10) {
                    /* WARNING: Subroutine does not return */
        operator_delete(local_5c[0]);
      }
      FUN_00688490();
    }
    else {
      ppppbVar8 = local_2c;
      if (0xf < local_18) {
        ppppbVar8 = (byte ****)local_2c[0];
      }
      uVar3 = 0xd;
      if (local_1c < 0xd) {
        uVar3 = local_1c;
      }
      if (uVar3 == 0) {
LAB_00683498:
        if (local_1c < 0xd) {
          uVar3 = 0xffffffff;
        }
        else {
          uVar3 = (uint)(local_1c != 0xd);
        }
        bVar10 = uVar3 == 0;
      }
      else {
        pcVar9 = "Display.wname";
        while (uVar1 = uVar3 - 4, 3 < uVar3) {
          if (*ppppbVar8 != *(byte ****)pcVar9) goto LAB_0068345e;
          ppppbVar8 = ppppbVar8 + 1;
          pcVar9 = pcVar9 + 4;
          uVar3 = uVar1;
        }
        if (uVar1 == 0xfffffffc) {
LAB_00683492:
          uVar3 = 0;
        }
        else {
LAB_0068345e:
          bVar10 = *(byte *)ppppbVar8 < (byte)*pcVar9;
          if ((*(byte *)ppppbVar8 == *pcVar9) &&
             ((uVar1 == 0xfffffffd ||
              ((bVar10 = *(byte *)((int)ppppbVar8 + 1) < (byte)pcVar9[1],
               *(byte *)((int)ppppbVar8 + 1) == pcVar9[1] &&
               ((uVar1 == 0xfffffffe ||
                ((bVar10 = *(byte *)((int)ppppbVar8 + 2) < (byte)pcVar9[2],
                 *(byte *)((int)ppppbVar8 + 2) == pcVar9[2] &&
                 ((uVar1 == 0xffffffff ||
                  (bVar10 = *(byte *)((int)ppppbVar8 + 3) < (byte)pcVar9[3],
                  *(byte *)((int)ppppbVar8 + 3) == pcVar9[3])))))))))))) goto LAB_00683492;
          uVar3 = -(uint)bVar10 | 1;
        }
        bVar10 = false;
        if (uVar3 == 0) goto LAB_00683498;
      }
      if (bVar10) {
        FUN_00688180();
        iVar5 = FUN_00688610(local_5c);
        local_8 = CONCAT31(local_8._1_3_,4);
        if (local_60 + 0xc != iVar5) {
          FUN_0040f680(iVar5,0,0xffffffff);
        }
        bVar10 = local_48 < 8;
        goto LAB_006834e1;
      }
      ppppbVar8 = local_2c;
      if (0xf < local_18) {
        ppppbVar8 = (byte ****)local_2c[0];
      }
      uVar3 = 0x12;
      if (local_1c < 0x12) {
        uVar3 = local_1c;
      }
      iVar5 = FUN_0040c590(ppppbVar8,"Display.visibility",uVar3);
      bVar10 = false;
      if (iVar5 == 0) {
        if (uVar7 < 0x12) {
          uVar3 = 0xffffffff;
        }
        else {
          uVar3 = (uint)(uVar7 != 0x12);
        }
        bVar10 = uVar3 == 0;
      }
      if (bVar10) {
        FUN_006806b0(local_60 + 0x48);
      }
      else {
        ppppbVar8 = local_2c;
        if (0xf < uVar6) {
          ppppbVar8 = (byte ****)local_2c[0];
        }
        uVar3 = 0x10;
        if (uVar7 < 0x10) {
          uVar3 = uVar7;
        }
        iVar5 = FUN_0040c590(ppppbVar8,"Display.clipping",uVar3);
        bVar10 = false;
        if (iVar5 == 0) {
          if (uVar7 < 0x10) {
            uVar3 = 0xffffffff;
          }
          else {
            uVar3 = (uint)(uVar7 != 0x10);
          }
          bVar10 = uVar3 == 0;
        }
        if (bVar10) {
          FUN_006806b0(local_60 + 0xa0);
        }
        else {
          ppppbVar8 = local_2c;
          if (0xf < uVar6) {
            ppppbVar8 = (byte ****)local_2c[0];
          }
          uVar3 = 0x13;
          if (uVar7 < 0x13) {
            uVar3 = uVar7;
          }
          iVar5 = FUN_0040c590(ppppbVar8,"Display.strokeColor",uVar3);
          bVar10 = false;
          if (iVar5 == 0) {
            if (uVar7 < 0x13) {
              uVar3 = 0xffffffff;
            }
            else {
              uVar3 = (uint)(uVar7 != 0x13);
            }
            bVar10 = uVar3 == 0;
          }
          if (bVar10) {
            FUN_00680fd0(local_60 + 0x150);
          }
          else {
            ppppbVar8 = local_2c;
            if (0xf < uVar6) {
              ppppbVar8 = (byte ****)local_2c[0];
            }
            uVar3 = 0x11;
            if (uVar7 < 0x11) {
              uVar3 = uVar7;
            }
            iVar5 = FUN_0040c590(ppppbVar8,"Display.fillColor",uVar3);
            bVar10 = false;
            if (iVar5 == 0) {
              if (uVar7 < 0x11) {
                uVar3 = 0xffffffff;
              }
              else {
                uVar3 = (uint)(uVar7 != 0x11);
              }
              bVar10 = uVar3 == 0;
            }
            if (bVar10) {
              FUN_00680fd0(local_60 + 0xf8);
            }
            else {
              ppppbVar8 = local_2c;
              if (0xf < uVar6) {
                ppppbVar8 = (byte ****)local_2c[0];
              }
              uVar6 = 0x12;
              if (uVar7 < 0x12) {
                uVar6 = uVar7;
              }
              iVar5 = FUN_0040c590(ppppbVar8,"Display.blurRadius",uVar6);
              bVar10 = false;
              if (iVar5 == 0) {
                if (uVar7 < 0x12) {
                  uVar7 = 0xffffffff;
                }
                else {
                  uVar7 = (uint)(uVar7 != 0x12);
                }
                bVar10 = uVar7 == 0;
              }
              if (bVar10) {
                FUN_006806b0(local_60 + 0x1a8);
              }
              else {
                cVar2 = FUN_00451470(local_2c,"Display.flags");
                if (cVar2 == '\0') {
                  FUN_006886f0();
                }
                else {
                  FUN_00688180();
                  uVar4 = FUN_00681220();
                  *(undefined4 *)(local_60 + 0x200) = uVar4;
                  FUN_00688490();
                }
              }
            }
          }
        }
      }
    }
    local_8 = 0xffffffff;
    if (0xf < local_18) {
                    /* WARNING: Subroutine does not return */
      operator_delete(local_2c[0]);
    }
    local_18 = 0xf;
    local_1c = 0;
    local_2c[0] = (byte ***)((uint)local_2c[0] & 0xffffff00);
    cVar2 = FUN_00688490();
  } while( true );
}


/* FUN_00683870 @ 00683870  kind=gamemisc  attributed-by=none  size=1339 */

void FUN_00683870(void)

{
  uint uVar1;
  char cVar2;
  uint uVar3;
  int *piVar4;
  uint uVar5;
  undefined4 uVar6;
  int *piVar7;
  int *piVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  int in_ECX;
  byte ****ppppbVar12;
  char *pcVar13;
  bool bVar14;
  undefined4 local_a0;
  undefined4 local_90;
  uint local_8c;
  undefined4 local_88;
  undefined4 local_78;
  uint local_74;
  int *local_70;
  undefined8 local_6c;
  undefined8 local_64;
  void *local_5c [4];
  undefined4 local_4c;
  uint local_48;
  void *local_44 [5];
  uint local_30;
  byte ***local_2c [4];
  uint local_1c;
  uint local_18;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006f8e5e;
  local_10 = ExceptionList;
  uVar3 = DAT_0076aa78 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_14 = uVar3;
  FUN_00688180();
  local_8c = 7;
  local_90 = 0;
  local_a0 = (void *)((uint)local_a0._2_2_ << 0x10);
  FUN_0040f7a0(&PTR_006fccac,0);
  local_8 = 0;
  local_74 = 7;
  local_78 = 0;
  local_88 = (void *)((uint)local_88._2_2_ << 0x10);
  FUN_0040f7a0(&PTR_006fccac,0);
  local_8 = CONCAT31(local_8._1_3_,1);
  piVar4 = (int *)FUN_0064f280(&local_88,&local_a0);
  local_70 = piVar4;
  if (7 < local_74) {
                    /* WARNING: Subroutine does not return */
    operator_delete(local_88);
  }
  local_74 = 7;
  local_78 = 0;
  local_88 = (void *)((uint)local_88 & 0xffff0000);
  local_8 = 0xffffffff;
  if (7 < local_8c) {
                    /* WARNING: Subroutine does not return */
    operator_delete(local_a0);
  }
  local_8c = 7;
  local_90 = 0;
  local_a0 = (void *)((uint)local_a0 & 0xffff0000);
  cVar2 = FUN_00688490();
  do {
    if (cVar2 != '\0') {
      (**(code **)(*piVar4 + 4))(1);
      ExceptionList = local_10;
      __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
      return;
    }
    FUN_00688220(local_2c,1);
    uVar10 = local_18;
    uVar11 = local_1c;
    ppppbVar12 = local_2c;
    if (0xf < local_18) {
      ppppbVar12 = (byte ****)local_2c[0];
    }
    uVar5 = 0x11;
    if (local_1c < 0x11) {
      uVar5 = local_1c;
    }
    local_8 = 2;
    if (uVar5 == 0) {
LAB_00683a20:
      if (local_1c < 0x11) {
        uVar5 = 0xffffffff;
      }
      else {
        uVar5 = (uint)(local_1c != 0x11);
      }
      bVar14 = uVar5 == 0;
    }
    else {
      pcVar13 = "GenericShape.name";
      while (uVar1 = uVar5 - 4, 3 < uVar5) {
        if (*ppppbVar12 != *(byte ****)pcVar13) goto LAB_006839e6;
        ppppbVar12 = ppppbVar12 + 1;
        pcVar13 = pcVar13 + 4;
        uVar5 = uVar1;
      }
      if (uVar1 == 0xfffffffc) {
LAB_00683a1a:
        uVar5 = 0;
      }
      else {
LAB_006839e6:
        bVar14 = *(byte *)ppppbVar12 < (byte)*pcVar13;
        if ((*(byte *)ppppbVar12 == *pcVar13) &&
           ((uVar1 == 0xfffffffd ||
            ((bVar14 = *(byte *)((int)ppppbVar12 + 1) < (byte)pcVar13[1],
             *(byte *)((int)ppppbVar12 + 1) == pcVar13[1] &&
             ((uVar1 == 0xfffffffe ||
              ((bVar14 = *(byte *)((int)ppppbVar12 + 2) < (byte)pcVar13[2],
               *(byte *)((int)ppppbVar12 + 2) == pcVar13[2] &&
               ((uVar1 == 0xffffffff ||
                (bVar14 = *(byte *)((int)ppppbVar12 + 3) < (byte)pcVar13[3],
                *(byte *)((int)ppppbVar12 + 3) == pcVar13[3])))))))))))) goto LAB_00683a1a;
        uVar5 = -(uint)bVar14 | 1;
      }
      bVar14 = false;
      if (uVar5 == 0) goto LAB_00683a20;
    }
    if (bVar14) {
      FUN_00688180();
      uVar6 = FUN_00688510(local_44);
      local_8._0_1_ = 3;
      piVar7 = (int *)FUN_006089c0(local_5c,uVar6);
      piVar4 = local_70;
      local_8 = CONCAT31(local_8._1_3_,4);
      if (local_70 + 3 != piVar7) {
        FUN_0040f680(piVar7,0,0xffffffff);
      }
      if (7 < local_48) {
                    /* WARNING: Subroutine does not return */
        operator_delete(local_5c[0]);
      }
LAB_00683a87:
      bVar14 = local_30 < 0x10;
      local_48 = 7;
      local_4c = 0;
      local_5c[0] = (void *)((uint)local_5c[0] & 0xffff0000);
LAB_00683c72:
      local_8 = CONCAT31(local_8._1_3_,2);
      if (!bVar14) {
                    /* WARNING: Subroutine does not return */
        operator_delete(local_44[0]);
      }
      FUN_00688490();
    }
    else {
      ppppbVar12 = local_2c;
      if (0xf < local_18) {
        ppppbVar12 = (byte ****)local_2c[0];
      }
      uVar5 = 0x12;
      if (local_1c < 0x12) {
        uVar5 = local_1c;
      }
      if (uVar5 == 0) {
LAB_00683b17:
        if (local_1c < 0x12) {
          uVar5 = 0xffffffff;
        }
        else {
          uVar5 = (uint)(local_1c != 0x12);
        }
        bVar14 = uVar5 == 0;
      }
      else {
        pcVar13 = "GenericShape.wname";
        while (uVar1 = uVar5 - 4, 3 < uVar5) {
          if (*ppppbVar12 != *(byte ****)pcVar13) goto LAB_00683add;
          ppppbVar12 = ppppbVar12 + 1;
          pcVar13 = pcVar13 + 4;
          uVar5 = uVar1;
        }
        if (uVar1 == 0xfffffffc) {
LAB_00683b11:
          uVar5 = 0;
        }
        else {
LAB_00683add:
          bVar14 = *(byte *)ppppbVar12 < (byte)*pcVar13;
          if ((*(byte *)ppppbVar12 == *pcVar13) &&
             ((uVar1 == 0xfffffffd ||
              ((bVar14 = *(byte *)((int)ppppbVar12 + 1) < (byte)pcVar13[1],
               *(byte *)((int)ppppbVar12 + 1) == pcVar13[1] &&
               ((uVar1 == 0xfffffffe ||
                ((bVar14 = *(byte *)((int)ppppbVar12 + 2) < (byte)pcVar13[2],
                 *(byte *)((int)ppppbVar12 + 2) == pcVar13[2] &&
                 ((uVar1 == 0xffffffff ||
                  (bVar14 = *(byte *)((int)ppppbVar12 + 3) < (byte)pcVar13[3],
                  *(byte *)((int)ppppbVar12 + 3) == pcVar13[3])))))))))))) goto LAB_00683b11;
          uVar5 = -(uint)bVar14 | 1;
        }
        bVar14 = false;
        if (uVar5 == 0) goto LAB_00683b17;
      }
      if (bVar14) {
        FUN_00688180();
        piVar8 = (int *)FUN_00688610(local_44);
        local_8 = CONCAT31(local_8._1_3_,5);
        piVar7 = local_70 + 3;
LAB_00683c60:
        piVar4 = local_70;
        if (piVar7 != piVar8) {
          FUN_0040f680(piVar8,0,0xffffffff);
        }
        bVar14 = local_30 < 8;
        goto LAB_00683c72;
      }
      ppppbVar12 = local_2c;
      if (0xf < local_18) {
        ppppbVar12 = (byte ****)local_2c[0];
      }
      uVar5 = 0x13;
      if (local_1c < 0x13) {
        uVar5 = local_1c;
      }
      iVar9 = FUN_0040c590(ppppbVar12,"GenericShape.source",uVar5);
      bVar14 = false;
      if (iVar9 == 0) {
        if (uVar11 < 0x13) {
          uVar5 = 0xffffffff;
        }
        else {
          uVar5 = (uint)(uVar11 != 0x13);
        }
        bVar14 = uVar5 == 0;
      }
      if (bVar14) {
        FUN_00688180();
        uVar6 = FUN_00688510(local_44);
        local_8._0_1_ = 6;
        piVar7 = (int *)FUN_006089c0(local_5c,uVar6);
        piVar4 = local_70;
        local_8 = CONCAT31(local_8._1_3_,7);
        if (local_70 + 0x1b != piVar7) {
          FUN_0040f680(piVar7,0,0xffffffff);
        }
        if (7 < local_48) {
                    /* WARNING: Subroutine does not return */
          operator_delete(local_5c[0]);
        }
        goto LAB_00683a87;
      }
      ppppbVar12 = local_2c;
      if (0xf < uVar10) {
        ppppbVar12 = (byte ****)local_2c[0];
      }
      uVar5 = 0x14;
      if (uVar11 < 0x14) {
        uVar5 = uVar11;
      }
      iVar9 = FUN_0040c590(ppppbVar12,"GenericShape.wsource",uVar5);
      bVar14 = false;
      if (iVar9 == 0) {
        if (uVar11 < 0x14) {
          uVar5 = 0xffffffff;
        }
        else {
          uVar5 = (uint)(uVar11 != 0x14);
        }
        bVar14 = uVar5 == 0;
      }
      if (bVar14) {
        FUN_00688180();
        piVar8 = (int *)FUN_00688610(local_44);
        local_8 = CONCAT31(local_8._1_3_,8);
        piVar7 = local_70 + 0x1b;
        goto LAB_00683c60;
      }
      ppppbVar12 = local_2c;
      if (0xf < uVar10) {
        ppppbVar12 = (byte ****)local_2c[0];
      }
      uVar5 = 0x15;
      if (uVar11 < 0x15) {
        uVar5 = uVar11;
      }
      iVar9 = FUN_0040c590(ppppbVar12,"GenericShape.position",uVar5);
      bVar14 = false;
      if (iVar9 == 0) {
        if (uVar11 < 0x15) {
          uVar5 = 0xffffffff;
        }
        else {
          uVar5 = (uint)(uVar11 != 0x15);
        }
        bVar14 = uVar5 == 0;
      }
      if (bVar14) {
        FUN_00688180();
        std::basic_istream<char,std::char_traits<char>_>::read
                  (*(basic_istream<char,std::char_traits<char>_> **)(in_ECX + 8),(char *)&local_6c,
                   (ulonglong)uVar3 << 0x20);
        piVar4 = local_70;
        *(undefined8 *)(local_70 + 0x17) = local_6c;
        FUN_00688490();
      }
      else {
        ppppbVar12 = local_2c;
        if (0xf < uVar10) {
          ppppbVar12 = (byte ****)local_2c[0];
        }
        uVar10 = 0x11;
        if (uVar11 < 0x11) {
          uVar10 = uVar11;
        }
        iVar9 = FUN_0040c590(ppppbVar12,"GenericShape.size",uVar10);
        bVar14 = false;
        if (iVar9 == 0) {
          if (uVar11 < 0x11) {
            uVar11 = 0xffffffff;
          }
          else {
            uVar11 = (uint)(uVar11 != 0x11);
          }
          bVar14 = uVar11 == 0;
        }
        if (bVar14) {
          FUN_00688180();
          std::basic_istream<char,std::char_traits<char>_>::read
                    (*(basic_istream<char,std::char_traits<char>_> **)(in_ECX + 8),(char *)&local_64
                     ,(ulonglong)uVar3 << 0x20);
          piVar4 = local_70;
          *(undefined8 *)(local_70 + 0x19) = local_64;
          FUN_00688490();
        }
        else {
          FUN_006886f0();
          piVar4 = local_70;
        }
      }
    }
    local_8 = 0xffffffff;
    if (0xf < local_18) {
                    /* WARNING: Subroutine does not return */
      operator_delete(local_2c[0]);
    }
    local_18 = 0xf;
    local_1c = 0;
    local_2c[0] = (byte ***)((uint)local_2c[0] & 0xffffff00);
    cVar2 = FUN_00688490();
  } while( true );
}


/* FUN_00683f00 @ 00683f00  kind=gamemisc  attributed-by=none  size=2046 */

void FUN_00683f00(char param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  char cVar3;
  uint uVar4;
  undefined4 *puVar5;
  uint uVar6;
  undefined4 uVar7;
  int *piVar8;
  uint uVar9;
  uint uVar10;
  undefined4 uVar11;
  undefined4 **ppuVar12;
  int in_ECX;
  byte *****pppppbVar13;
  uint uVar14;
  char *pcVar15;
  int iVar16;
  bool bVar17;
  undefined4 local_e4;
  int local_e0;
  undefined4 local_dc;
  int local_d8;
  int local_d4;
  undefined4 local_d0;
  undefined4 *local_cc;
  undefined4 local_c8;
  undefined4 *local_c4;
  undefined4 local_c0;
  undefined4 local_bc;
  undefined4 local_b8;
  undefined4 local_b4;
  undefined4 local_b0;
  int local_ac;
  int local_a8;
  undefined1 local_a4 [48];
  void *local_74 [4];
  undefined4 local_64;
  uint local_60;
  void *local_5c [5];
  uint local_48;
  undefined4 local_44;
  int local_34;
  uint local_30;
  byte ****local_2c [4];
  uint local_1c;
  uint local_18;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006f8ed9;
  local_10 = ExceptionList;
  uVar4 = DAT_0076aa78 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_d4 = in_ECX;
  local_14 = uVar4;
  FUN_00688180();
  local_30 = 7;
  local_34 = 0;
  local_44 = (void *)((uint)local_44._2_2_ << 0x10);
  iVar16 = 0;
  local_8 = 0;
  local_a8 = 0;
  local_ac = 0;
  local_b0 = 0;
  local_b4 = 0;
  local_c8 = 0;
  puVar5 = (undefined4 *)FUN_0046d550(0,0);
  local_8._0_1_ = 1;
  local_c0 = 0;
  local_cc = puVar5;
  local_c4 = (undefined4 *)FUN_0046d710(0,0);
  local_8 = CONCAT31(local_8._1_3_,2);
  cVar3 = FUN_00688490();
  local_bc = local_b8;
  do {
    if (cVar3 != '\0') {
      if (param_1 == '\0') {
        iVar16 = FUN_0064f4e0(local_ac,iVar16,local_b0,0,&local_44);
        local_ac = iVar16;
        local_a8 = iVar16;
        FUN_00636ef0(local_b4);
        puVar2 = local_c4;
        *(undefined4 *)(iVar16 + 200) = local_bc;
        for (puVar1 = (undefined4 *)*local_c4; puVar1 != puVar2; puVar1 = (undefined4 *)*puVar1) {
          FUN_00636db0(puVar1 + 8,puVar1 + 2);
          puVar5 = local_cc;
          in_ECX = local_d4;
        }
        if ((*(byte *)(in_ECX + 0x60) & 4) != 0) {
          *(uint *)(local_a8 + 200) = *(uint *)(local_a8 + 200) | 8;
        }
      }
      else {
        local_ac = *(int *)(in_ECX + 0x78);
        local_a8 = local_ac;
      }
      ppuVar12 = (undefined4 **)FUN_00681890(&local_ac);
      if (ppuVar12 != &local_cc) {
        FUN_004ab940(*puVar5,puVar5);
      }
      FUN_00681b70();
                    /* WARNING: Subroutine does not return */
      operator_delete(local_c4);
    }
    FUN_00688220(local_2c,1);
    uVar9 = local_18;
    uVar10 = local_1c;
    pppppbVar13 = local_2c;
    if (0xf < local_18) {
      pppppbVar13 = (byte *****)local_2c[0];
    }
    uVar6 = 9;
    if (local_1c < 9) {
      uVar6 = local_1c;
    }
    local_8._0_1_ = 3;
    if (uVar6 == 0) {
LAB_00684050:
      if (local_1c < 9) {
        uVar6 = 0xffffffff;
      }
      else {
        uVar6 = (uint)(local_1c != 9);
      }
      bVar17 = uVar6 == 0;
    }
    else {
      pcVar15 = "Node.name";
      uVar14 = uVar6 - 4;
      if (3 < uVar6) {
        pcVar15 = "Node.name";
        do {
          if (*pppppbVar13 != *(byte *****)pcVar15) goto LAB_00684016;
          pppppbVar13 = pppppbVar13 + 1;
          pcVar15 = pcVar15 + 4;
          bVar17 = 3 < uVar14;
          uVar14 = uVar14 - 4;
        } while (bVar17);
      }
      if (uVar14 == 0xfffffffc) {
LAB_0068404a:
        uVar6 = 0;
      }
      else {
LAB_00684016:
        bVar17 = *(byte *)pppppbVar13 < (byte)*pcVar15;
        if ((*(byte *)pppppbVar13 == *pcVar15) &&
           ((uVar14 == 0xfffffffd ||
            ((bVar17 = *(byte *)((int)pppppbVar13 + 1) < (byte)pcVar15[1],
             *(byte *)((int)pppppbVar13 + 1) == pcVar15[1] &&
             ((uVar14 == 0xfffffffe ||
              ((bVar17 = *(byte *)((int)pppppbVar13 + 2) < (byte)pcVar15[2],
               *(byte *)((int)pppppbVar13 + 2) == pcVar15[2] &&
               ((uVar14 == 0xffffffff ||
                (bVar17 = *(byte *)((int)pppppbVar13 + 3) < (byte)pcVar15[3],
                *(byte *)((int)pppppbVar13 + 3) == pcVar15[3])))))))))))) goto LAB_0068404a;
        uVar6 = -(uint)bVar17 | 1;
      }
      bVar17 = false;
      if (uVar6 == 0) goto LAB_00684050;
    }
    if (bVar17) {
      FUN_00688180();
      uVar7 = FUN_00688510(local_5c);
      local_8 = CONCAT31(local_8._1_3_,4);
      piVar8 = (int *)FUN_006089c0(local_74,uVar7);
      if (&local_44 != piVar8) {
        if (7 < local_30) {
                    /* WARNING: Subroutine does not return */
          operator_delete(local_44);
        }
        local_30 = 7;
        local_34 = 0;
        local_44 = (void *)((uint)local_44 & 0xffff0000);
        if ((uint)piVar8[5] < 8) {
          if (piVar8[4] + 1 != 0) {
            memmove(&local_44,piVar8,(piVar8[4] + 1) * 2);
          }
        }
        else {
          local_44 = (void *)*piVar8;
          *piVar8 = 0;
        }
        local_34 = piVar8[4];
        local_30 = piVar8[5];
        piVar8[5] = 7;
        piVar8[4] = 0;
        *(undefined2 *)piVar8 = 0;
      }
      if (7 < local_60) {
                    /* WARNING: Subroutine does not return */
        operator_delete(local_74[0]);
      }
      bVar17 = local_48 < 0x10;
      local_60 = 7;
      local_64 = 0;
      local_74[0] = (void *)((uint)local_74[0] & 0xffff0000);
      local_8._0_1_ = 3;
LAB_00684136:
      if (!bVar17) {
                    /* WARNING: Subroutine does not return */
        operator_delete(local_5c[0]);
      }
      FUN_00688490();
      iVar16 = local_a8;
    }
    else {
      pppppbVar13 = local_2c;
      if (0xf < local_18) {
        pppppbVar13 = (byte *****)local_2c[0];
      }
      uVar6 = 10;
      if (local_1c < 10) {
        uVar6 = local_1c;
      }
      if (uVar6 == 0) {
LAB_006841c2:
        if (local_1c < 10) {
          uVar6 = 0xffffffff;
        }
        else {
          uVar6 = (uint)(local_1c != 10);
        }
        bVar17 = uVar6 == 0;
      }
      else {
        pcVar15 = "Node.wname";
        while (uVar14 = uVar6 - 4, 3 < uVar6) {
          if (*pppppbVar13 != *(byte *****)pcVar15) goto LAB_00684188;
          pppppbVar13 = pppppbVar13 + 1;
          pcVar15 = pcVar15 + 4;
          uVar6 = uVar14;
        }
        if (uVar14 == 0xfffffffc) {
LAB_006841bc:
          uVar6 = 0;
        }
        else {
LAB_00684188:
          bVar17 = *(byte *)pppppbVar13 < (byte)*pcVar15;
          if ((*(byte *)pppppbVar13 == *pcVar15) &&
             ((uVar14 == 0xfffffffd ||
              ((bVar17 = *(byte *)((int)pppppbVar13 + 1) < (byte)pcVar15[1],
               *(byte *)((int)pppppbVar13 + 1) == pcVar15[1] &&
               ((uVar14 == 0xfffffffe ||
                ((bVar17 = *(byte *)((int)pppppbVar13 + 2) < (byte)pcVar15[2],
                 *(byte *)((int)pppppbVar13 + 2) == pcVar15[2] &&
                 ((uVar14 == 0xffffffff ||
                  (bVar17 = *(byte *)((int)pppppbVar13 + 3) < (byte)pcVar15[3],
                  *(byte *)((int)pppppbVar13 + 3) == pcVar15[3])))))))))))) goto LAB_006841bc;
          uVar6 = -(uint)bVar17 | 1;
        }
        bVar17 = false;
        if (uVar6 == 0) goto LAB_006841c2;
      }
      if (bVar17) {
        FUN_00688180();
        piVar8 = (int *)FUN_00688610(local_5c);
        if (&local_44 != piVar8) {
          if (7 < local_30) {
                    /* WARNING: Subroutine does not return */
            operator_delete(local_44);
          }
          local_30 = 7;
          local_34 = 0;
          local_44 = (void *)((uint)local_44 & 0xffff0000);
          if ((uint)piVar8[5] < 8) {
            if (piVar8[4] + 1 != 0) {
              memmove(&local_44,piVar8,(piVar8[4] + 1) * 2);
            }
          }
          else {
            local_44 = (void *)*piVar8;
            *piVar8 = 0;
          }
          local_34 = piVar8[4];
          local_30 = piVar8[5];
          piVar8[5] = 7;
          piVar8[4] = 0;
          *(undefined2 *)piVar8 = 0;
        }
        bVar17 = local_48 < 8;
        goto LAB_00684136;
      }
      pppppbVar13 = local_2c;
      if (0xf < local_18) {
        pppppbVar13 = (byte *****)local_2c[0];
      }
      uVar6 = 10;
      if (local_1c < 10) {
        uVar6 = local_1c;
      }
      iVar16 = FUN_0040c590(pppppbVar13,"Node.shape",uVar6);
      bVar17 = false;
      if (iVar16 == 0) {
        if (uVar10 < 10) {
          uVar6 = 0xffffffff;
        }
        else {
          uVar6 = (uint)(uVar10 != 10);
        }
        bVar17 = uVar6 == 0;
      }
      if (bVar17) {
        FUN_00688180();
        std::basic_istream<char,std::char_traits<char>_>::read
                  (*(basic_istream<char,std::char_traits<char>_> **)(in_ECX + 8),(char *)&local_d8,
                   (ulonglong)uVar4 << 0x20);
        local_a8 = local_d8;
        piVar8 = (int *)FUN_00468910(&local_a8);
        iVar16 = *piVar8;
        local_a8 = iVar16;
        FUN_00688490();
      }
      else {
        pppppbVar13 = local_2c;
        if (0xf < uVar9) {
          pppppbVar13 = (byte *****)local_2c[0];
        }
        uVar6 = 0x13;
        if (uVar10 < 0x13) {
          uVar6 = uVar10;
        }
        iVar16 = FUN_0040c590(pppppbVar13,"Node.transformation",uVar6);
        bVar17 = false;
        if (iVar16 == 0) {
          if (uVar10 < 0x13) {
            uVar6 = 0xffffffff;
          }
          else {
            uVar6 = (uint)(uVar10 != 0x13);
          }
          bVar17 = uVar6 == 0;
        }
        if (bVar17) {
          FUN_00688180();
          std::basic_istream<char,std::char_traits<char>_>::read
                    (*(basic_istream<char,std::char_traits<char>_> **)(in_ECX + 8),(char *)&local_e0
                     ,(ulonglong)uVar4 << 0x20);
          local_ac = local_e0;
          piVar8 = (int *)FUN_00468910(&local_ac);
          local_ac = *piVar8;
          FUN_00688490();
          iVar16 = local_a8;
        }
        else {
          pppppbVar13 = local_2c;
          if (0xf < uVar9) {
            pppppbVar13 = (byte *****)local_2c[0];
          }
          uVar6 = 0xc;
          if (uVar10 < 0xc) {
            uVar6 = uVar10;
          }
          iVar16 = FUN_0040c590(pppppbVar13,"Node.display",uVar6);
          bVar17 = false;
          if (iVar16 == 0) {
            if (uVar10 < 0xc) {
              uVar6 = 0xffffffff;
            }
            else {
              uVar6 = (uint)(uVar10 != 0xc);
            }
            bVar17 = uVar6 == 0;
          }
          if (bVar17) {
            FUN_00688180();
            std::basic_istream<char,std::char_traits<char>_>::read
                      (*(basic_istream<char,std::char_traits<char>_> **)(in_ECX + 8),
                       (char *)&local_dc,(ulonglong)uVar4 << 0x20);
            local_b0 = local_dc;
            puVar5 = (undefined4 *)FUN_00468910(&local_b0);
            local_b0 = *puVar5;
            FUN_00688490();
            iVar16 = local_a8;
          }
          else {
            pppppbVar13 = local_2c;
            if (0xf < uVar9) {
              pppppbVar13 = (byte *****)local_2c[0];
            }
            uVar6 = 0xb;
            if (uVar10 < 0xb) {
              uVar6 = uVar10;
            }
            iVar16 = FUN_0040c590(pppppbVar13,"Node.widget",uVar6);
            bVar17 = false;
            if (iVar16 == 0) {
              if (uVar10 < 0xb) {
                uVar6 = 0xffffffff;
              }
              else {
                uVar6 = (uint)(uVar10 != 0xb);
              }
              bVar17 = uVar6 == 0;
            }
            if (bVar17) {
              FUN_00688180();
              std::basic_istream<char,std::char_traits<char>_>::read
                        (*(basic_istream<char,std::char_traits<char>_> **)(in_ECX + 8),
                         (char *)&local_e4,(ulonglong)uVar4 << 0x20);
              local_b4 = local_e4;
              puVar5 = (undefined4 *)FUN_00468910(&local_b4);
              local_b4 = *puVar5;
              FUN_00688490();
              iVar16 = local_a8;
            }
            else {
              pppppbVar13 = local_2c;
              if (0xf < uVar9) {
                pppppbVar13 = (byte *****)local_2c[0];
              }
              uVar9 = 10;
              if (uVar10 < 10) {
                uVar9 = uVar10;
              }
              iVar16 = FUN_0040c590(pppppbVar13,"Node.child",uVar9);
              bVar17 = false;
              if (iVar16 == 0) {
                if (uVar10 < 10) {
                  uVar10 = 0xffffffff;
                }
                else {
                  uVar10 = (uint)(uVar10 != 10);
                }
                bVar17 = uVar10 == 0;
              }
              if (bVar17) {
                FUN_00688180();
                std::basic_istream<char,std::char_traits<char>_>::read
                          (*(basic_istream<char,std::char_traits<char>_> **)(in_ECX + 8),
                           (char *)&local_d0,(ulonglong)uVar4 << 0x20);
                local_b8 = local_d0;
                FUN_004860b0(&local_b8);
                FUN_00688490();
                iVar16 = local_a8;
              }
              else {
                cVar3 = FUN_00451470(local_2c,"Node.flags");
                if (cVar3 == '\0') {
                  cVar3 = FUN_00451470(local_2c,"Node.variable");
                  if (cVar3 == '\0') {
                    FUN_006886f0();
                    iVar16 = local_a8;
                  }
                  else {
                    FUN_00688180();
                    uVar7 = FUN_00688510(local_74);
                    local_8._0_1_ = 5;
                    uVar11 = FUN_00688510(local_5c);
                    uVar7 = FUN_0064bec0(local_a4,uVar11,uVar7);
                    local_8._0_1_ = 7;
                    FUN_006536d0(uVar7);
                    FUN_0064dd90();
                    FUN_00403eb0();
                    local_8._0_1_ = 3;
                    FUN_00403eb0();
                    FUN_00688490();
                    iVar16 = local_a8;
                  }
                }
                else {
                  FUN_00688180();
                  local_bc = FUN_00681220();
                  FUN_00688490();
                  iVar16 = local_a8;
                }
              }
            }
          }
        }
      }
    }
    local_8 = CONCAT31(local_8._1_3_,2);
    if (0xf < local_18) {
                    /* WARNING: Subroutine does not return */
      operator_delete(local_2c[0]);
    }
    local_18 = 0xf;
    local_1c = 0;
    local_2c[0] = (byte ****)((uint)local_2c[0] & 0xffffff00);
    cVar3 = FUN_00688490();
    puVar5 = local_cc;
  } while( true );
}


/* FUN_00684770 @ 00684770  kind=gamemisc  attributed-by=none  size=497 */

void FUN_00684770(void)

{
  uint uVar1;
  char cVar2;
  uint uVar3;
  uint uVar4;
  int in_ECX;
  byte *****pppppbVar5;
  char *pcVar6;
  bool bVar7;
  undefined4 local_4c;
  undefined4 local_3c;
  uint local_38;
  undefined4 local_34;
  int local_30;
  byte ****local_2c [4];
  uint local_1c;
  uint local_18;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006f8d90;
  local_10 = ExceptionList;
  uVar3 = DAT_0076aa78 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_14 = uVar3;
  FUN_00688180();
  local_38 = 7;
  local_3c = 0;
  local_4c = (void *)((uint)local_4c._2_2_ << 0x10);
  FUN_0040f7a0(&PTR_006fccac,0);
  local_8 = 0;
  local_30 = FUN_006500d0(0,&local_4c);
  local_8 = 0xffffffff;
  if (7 < local_38) {
                    /* WARNING: Subroutine does not return */
    operator_delete(local_4c);
  }
  local_38 = 7;
  local_3c = 0;
  local_4c = (void *)((uint)local_4c & 0xffff0000);
  cVar2 = FUN_00688490();
  do {
    if (cVar2 != '\0') {
      ExceptionList = local_10;
      __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
      return;
    }
    FUN_00688220(local_2c,1);
    pppppbVar5 = local_2c;
    if (0xf < local_18) {
      pppppbVar5 = (byte *****)local_2c[0];
    }
    uVar4 = 0xb;
    if (local_1c < 0xb) {
      uVar4 = local_1c;
    }
    local_8 = 1;
    if (uVar4 == 0) {
LAB_006848b0:
      if (local_1c < 0xb) {
        uVar4 = 0xffffffff;
      }
      else {
        uVar4 = (uint)(local_1c != 0xb);
      }
      bVar7 = uVar4 == 0;
    }
    else {
      pcVar6 = "Button.type";
      while (uVar1 = uVar4 - 4, 3 < uVar4) {
        if (*pppppbVar5 != *(byte *****)pcVar6) goto LAB_00684876;
        pppppbVar5 = pppppbVar5 + 1;
        pcVar6 = pcVar6 + 4;
        uVar4 = uVar1;
      }
      if (uVar1 == 0xfffffffc) {
LAB_006848aa:
        uVar4 = 0;
      }
      else {
LAB_00684876:
        bVar7 = *(byte *)pppppbVar5 < (byte)*pcVar6;
        if ((*(byte *)pppppbVar5 == *pcVar6) &&
           ((uVar1 == 0xfffffffd ||
            ((bVar7 = *(byte *)((int)pppppbVar5 + 1) < (byte)pcVar6[1],
             *(byte *)((int)pppppbVar5 + 1) == pcVar6[1] &&
             ((uVar1 == 0xfffffffe ||
              ((bVar7 = *(byte *)((int)pppppbVar5 + 2) < (byte)pcVar6[2],
               *(byte *)((int)pppppbVar5 + 2) == pcVar6[2] &&
               ((uVar1 == 0xffffffff ||
                (bVar7 = *(byte *)((int)pppppbVar5 + 3) < (byte)pcVar6[3],
                *(byte *)((int)pppppbVar5 + 3) == pcVar6[3])))))))))))) goto LAB_006848aa;
        uVar4 = -(uint)bVar7 | 1;
      }
      bVar7 = false;
      if (uVar4 == 0) goto LAB_006848b0;
    }
    if (bVar7) {
      FUN_00688180();
      std::basic_istream<char,std::char_traits<char>_>::read
                (*(basic_istream<char,std::char_traits<char>_> **)(in_ECX + 8),(char *)&local_34,
                 (ulonglong)uVar3 << 0x20);
      *(undefined4 *)(local_30 + 0x22c) = local_34;
      FUN_00688490();
    }
    else {
      cVar2 = FUN_00687560(local_30,local_2c);
      if (cVar2 == '\0') {
        FUN_006886f0();
      }
    }
    local_8 = 0xffffffff;
    if (0xf < local_18) {
                    /* WARNING: Subroutine does not return */
      operator_delete(local_2c[0]);
    }
    local_18 = 0xf;
    local_1c = 0;
    local_2c[0] = (byte ****)((uint)local_2c[0] & 0xffffff00);
    cVar2 = FUN_00688490();
  } while( true );
}


/* FUN_00684970 @ 00684970  kind=gamemisc  attributed-by=none  size=689 */

void FUN_00684970(void)

{
  uint uVar1;
  char cVar2;
  uint uVar3;
  uint uVar4;
  int in_ECX;
  byte *****pppppbVar5;
  char *pcVar6;
  bool bVar7;
  undefined4 local_50;
  undefined4 local_40;
  uint local_3c;
  undefined4 local_38;
  undefined4 local_34;
  int local_30;
  byte ****local_2c [4];
  uint local_1c;
  uint local_18;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006f8f20;
  local_10 = ExceptionList;
  uVar3 = DAT_0076aa78 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_14 = uVar3;
  FUN_00688180();
  local_3c = 7;
  local_40 = 0;
  local_50 = (void *)((uint)local_50._2_2_ << 0x10);
  FUN_0040f7a0(&PTR_006fccac,0);
  local_8 = 0;
  local_30 = FUN_00650160(0,&local_50);
  local_8 = 0xffffffff;
  if (7 < local_3c) {
                    /* WARNING: Subroutine does not return */
    operator_delete(local_50);
  }
  local_3c = 7;
  local_40 = 0;
  local_50 = (void *)((uint)local_50 & 0xffff0000);
  cVar2 = FUN_00688490();
  do {
    if (cVar2 != '\0') {
      ExceptionList = local_10;
      __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
      return;
    }
    FUN_00688220(local_2c,1);
    pppppbVar5 = local_2c;
    if (0xf < local_18) {
      pppppbVar5 = (byte *****)local_2c[0];
    }
    uVar4 = 0x16;
    if (local_1c < 0x16) {
      uVar4 = local_1c;
    }
    local_8 = 1;
    if (uVar4 == 0) {
LAB_00684ab0:
      if (local_1c < 0x16) {
        uVar4 = 0xffffffff;
      }
      else {
        uVar4 = (uint)(local_1c != 0x16);
      }
      bVar7 = uVar4 == 0;
    }
    else {
      pcVar6 = "ScrollButton.direction";
      while (uVar1 = uVar4 - 4, 3 < uVar4) {
        if (*pppppbVar5 != *(byte *****)pcVar6) goto LAB_00684a76;
        pppppbVar5 = pppppbVar5 + 1;
        pcVar6 = pcVar6 + 4;
        uVar4 = uVar1;
      }
      if (uVar1 == 0xfffffffc) {
LAB_00684aaa:
        uVar4 = 0;
      }
      else {
LAB_00684a76:
        bVar7 = *(byte *)pppppbVar5 < (byte)*pcVar6;
        if ((*(byte *)pppppbVar5 == *pcVar6) &&
           ((uVar1 == 0xfffffffd ||
            ((bVar7 = *(byte *)((int)pppppbVar5 + 1) < (byte)pcVar6[1],
             *(byte *)((int)pppppbVar5 + 1) == pcVar6[1] &&
             ((uVar1 == 0xfffffffe ||
              ((bVar7 = *(byte *)((int)pppppbVar5 + 2) < (byte)pcVar6[2],
               *(byte *)((int)pppppbVar5 + 2) == pcVar6[2] &&
               ((uVar1 == 0xffffffff ||
                (bVar7 = *(byte *)((int)pppppbVar5 + 3) < (byte)pcVar6[3],
                *(byte *)((int)pppppbVar5 + 3) == pcVar6[3])))))))))))) goto LAB_00684aaa;
        uVar4 = -(uint)bVar7 | 1;
      }
      bVar7 = false;
      if (uVar4 == 0) goto LAB_00684ab0;
    }
    if (bVar7) {
      FUN_00688180();
      std::basic_istream<char,std::char_traits<char>_>::read
                (*(basic_istream<char,std::char_traits<char>_> **)(in_ECX + 8),(char *)&local_38,
                 (ulonglong)uVar3 << 0x20);
      *(undefined4 *)(local_30 + 0x238) = local_38;
      FUN_00688490();
    }
    else {
      pppppbVar5 = local_2c;
      if (0xf < local_18) {
        pppppbVar5 = (byte *****)local_2c[0];
      }
      uVar4 = 0xb;
      if (local_1c < 0xb) {
        uVar4 = local_1c;
      }
      if (uVar4 == 0) {
LAB_00684b70:
        if (local_1c < 0xb) {
          uVar4 = 0xffffffff;
        }
        else {
          uVar4 = (uint)(local_1c != 0xb);
        }
        bVar7 = uVar4 == 0;
      }
      else {
        pcVar6 = "Button.type";
        while (uVar1 = uVar4 - 4, 3 < uVar4) {
          if (*pppppbVar5 != *(byte *****)pcVar6) goto LAB_00684b36;
          pppppbVar5 = pppppbVar5 + 1;
          pcVar6 = pcVar6 + 4;
          uVar4 = uVar1;
        }
        if (uVar1 == 0xfffffffc) {
LAB_00684b6a:
          uVar4 = 0;
        }
        else {
LAB_00684b36:
          bVar7 = *(byte *)pppppbVar5 < (byte)*pcVar6;
          if ((*(byte *)pppppbVar5 == *pcVar6) &&
             ((uVar1 == 0xfffffffd ||
              ((bVar7 = *(byte *)((int)pppppbVar5 + 1) < (byte)pcVar6[1],
               *(byte *)((int)pppppbVar5 + 1) == pcVar6[1] &&
               ((uVar1 == 0xfffffffe ||
                ((bVar7 = *(byte *)((int)pppppbVar5 + 2) < (byte)pcVar6[2],
                 *(byte *)((int)pppppbVar5 + 2) == pcVar6[2] &&
                 ((uVar1 == 0xffffffff ||
                  (bVar7 = *(byte *)((int)pppppbVar5 + 3) < (byte)pcVar6[3],
                  *(byte *)((int)pppppbVar5 + 3) == pcVar6[3])))))))))))) goto LAB_00684b6a;
          uVar4 = -(uint)bVar7 | 1;
        }
        bVar7 = false;
        if (uVar4 == 0) goto LAB_00684b70;
      }
      if (bVar7) {
        FUN_00688180();
        std::basic_istream<char,std::char_traits<char>_>::read
                  (*(basic_istream<char,std::char_traits<char>_> **)(in_ECX + 8),(char *)&local_34,
                   (ulonglong)uVar3 << 0x20);
        *(undefined4 *)(local_30 + 0x22c) = local_34;
        FUN_00688490();
      }
      else {
        cVar2 = FUN_00687560(local_30,local_2c);
        if (cVar2 == '\0') {
          FUN_006886f0();
        }
      }
    }
    local_8 = 0xffffffff;
    if (0xf < local_18) {
                    /* WARNING: Subroutine does not return */
      operator_delete(local_2c[0]);
    }
    local_18 = 0xf;
    local_1c = 0;
    local_2c[0] = (byte ****)((uint)local_2c[0] & 0xffffff00);
    cVar2 = FUN_00688490();
  } while( true );
}


/* FUN_00684c30 @ 00684c30  kind=gamemisc  attributed-by=none  size=689 */

void FUN_00684c30(void)

{
  uint uVar1;
  char cVar2;
  uint uVar3;
  uint uVar4;
  int in_ECX;
  byte *****pppppbVar5;
  char *pcVar6;
  bool bVar7;
  undefined4 local_50;
  undefined4 local_40;
  uint local_3c;
  undefined4 local_38;
  undefined4 local_34;
  int local_30;
  byte ****local_2c [4];
  uint local_1c;
  uint local_18;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006f8f20;
  local_10 = ExceptionList;
  uVar3 = DAT_0076aa78 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_14 = uVar3;
  FUN_00688180();
  local_3c = 7;
  local_40 = 0;
  local_50 = (void *)((uint)local_50._2_2_ << 0x10);
  FUN_0040f7a0(&PTR_006fccac,0);
  local_8 = 0;
  local_30 = FUN_006501e0(0,&local_50);
  local_8 = 0xffffffff;
  if (7 < local_3c) {
                    /* WARNING: Subroutine does not return */
    operator_delete(local_50);
  }
  local_3c = 7;
  local_40 = 0;
  local_50 = (void *)((uint)local_50 & 0xffff0000);
  cVar2 = FUN_00688490();
  do {
    if (cVar2 != '\0') {
      ExceptionList = local_10;
      __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
      return;
    }
    FUN_00688220(local_2c,1);
    pppppbVar5 = local_2c;
    if (0xf < local_18) {
      pppppbVar5 = (byte *****)local_2c[0];
    }
    uVar4 = 0x16;
    if (local_1c < 0x16) {
      uVar4 = local_1c;
    }
    local_8 = 1;
    if (uVar4 == 0) {
LAB_00684d70:
      if (local_1c < 0x16) {
        uVar4 = 0xffffffff;
      }
      else {
        uVar4 = (uint)(local_1c != 0x16);
      }
      bVar7 = uVar4 == 0;
    }
    else {
      pcVar6 = "ScrollSlider.direction";
      while (uVar1 = uVar4 - 4, 3 < uVar4) {
        if (*pppppbVar5 != *(byte *****)pcVar6) goto LAB_00684d36;
        pppppbVar5 = pppppbVar5 + 1;
        pcVar6 = pcVar6 + 4;
        uVar4 = uVar1;
      }
      if (uVar1 == 0xfffffffc) {
LAB_00684d6a:
        uVar4 = 0;
      }
      else {
LAB_00684d36:
        bVar7 = *(byte *)pppppbVar5 < (byte)*pcVar6;
        if ((*(byte *)pppppbVar5 == *pcVar6) &&
           ((uVar1 == 0xfffffffd ||
            ((bVar7 = *(byte *)((int)pppppbVar5 + 1) < (byte)pcVar6[1],
             *(byte *)((int)pppppbVar5 + 1) == pcVar6[1] &&
             ((uVar1 == 0xfffffffe ||
              ((bVar7 = *(byte *)((int)pppppbVar5 + 2) < (byte)pcVar6[2],
               *(byte *)((int)pppppbVar5 + 2) == pcVar6[2] &&
               ((uVar1 == 0xffffffff ||
                (bVar7 = *(byte *)((int)pppppbVar5 + 3) < (byte)pcVar6[3],
                *(byte *)((int)pppppbVar5 + 3) == pcVar6[3])))))))))))) goto LAB_00684d6a;
        uVar4 = -(uint)bVar7 | 1;
      }
      bVar7 = false;
      if (uVar4 == 0) goto LAB_00684d70;
    }
    if (bVar7) {
      FUN_00688180();
      std::basic_istream<char,std::char_traits<char>_>::read
                (*(basic_istream<char,std::char_traits<char>_> **)(in_ECX + 8),(char *)&local_38,
                 (ulonglong)uVar3 << 0x20);
      *(undefined4 *)(local_30 + 0x238) = local_38;
      FUN_00688490();
    }
    else {
      pppppbVar5 = local_2c;
      if (0xf < local_18) {
        pppppbVar5 = (byte *****)local_2c[0];
      }
      uVar4 = 0xb;
      if (local_1c < 0xb) {
        uVar4 = local_1c;
      }
      if (uVar4 == 0) {
LAB_00684e30:
        if (local_1c < 0xb) {
          uVar4 = 0xffffffff;
        }
        else {
          uVar4 = (uint)(local_1c != 0xb);
        }
        bVar7 = uVar4 == 0;
      }
      else {
        pcVar6 = "Button.type";
        while (uVar1 = uVar4 - 4, 3 < uVar4) {
          if (*pppppbVar5 != *(byte *****)pcVar6) goto LAB_00684df6;
          pppppbVar5 = pppppbVar5 + 1;
          pcVar6 = pcVar6 + 4;
          uVar4 = uVar1;
        }
        if (uVar1 == 0xfffffffc) {
LAB_00684e2a:
          uVar4 = 0;
        }
        else {
LAB_00684df6:
          bVar7 = *(byte *)pppppbVar5 < (byte)*pcVar6;
          if ((*(byte *)pppppbVar5 == *pcVar6) &&
             ((uVar1 == 0xfffffffd ||
              ((bVar7 = *(byte *)((int)pppppbVar5 + 1) < (byte)pcVar6[1],
               *(byte *)((int)pppppbVar5 + 1) == pcVar6[1] &&
               ((uVar1 == 0xfffffffe ||
                ((bVar7 = *(byte *)((int)pppppbVar5 + 2) < (byte)pcVar6[2],
                 *(byte *)((int)pppppbVar5 + 2) == pcVar6[2] &&
                 ((uVar1 == 0xffffffff ||
                  (bVar7 = *(byte *)((int)pppppbVar5 + 3) < (byte)pcVar6[3],
                  *(byte *)((int)pppppbVar5 + 3) == pcVar6[3])))))))))))) goto LAB_00684e2a;
          uVar4 = -(uint)bVar7 | 1;
        }
        bVar7 = false;
        if (uVar4 == 0) goto LAB_00684e30;
      }
      if (bVar7) {
        FUN_00688180();
        std::basic_istream<char,std::char_traits<char>_>::read
                  (*(basic_istream<char,std::char_traits<char>_> **)(in_ECX + 8),(char *)&local_34,
                   (ulonglong)uVar3 << 0x20);
        *(undefined4 *)(local_30 + 0x22c) = local_34;
        FUN_00688490();
      }
      else {
        cVar2 = FUN_00687560(local_30,local_2c);
        if (cVar2 == '\0') {
          FUN_006886f0();
        }
      }
    }
    local_8 = 0xffffffff;
    if (0xf < local_18) {
                    /* WARNING: Subroutine does not return */
      operator_delete(local_2c[0]);
    }
    local_18 = 0xf;
    local_1c = 0;
    local_2c[0] = (byte ****)((uint)local_2c[0] & 0xffffff00);
    cVar2 = FUN_00688490();
  } while( true );
}


/* FUN_00684ef0 @ 00684ef0  kind=gamemisc  attributed-by=none  size=3032 */

/* WARNING: Type propagation algorithm not settling */

void FUN_00684ef0(void)

{
  undefined4 *puVar1;
  uint uVar2;
  char cVar3;
  uint uVar4;
  int *piVar5;
  uint uVar6;
  undefined4 uVar7;
  int *piVar8;
  uint uVar9;
  int iVar10;
  undefined4 *puVar11;
  int iVar12;
  int in_ECX;
  byte *******pppppppbVar13;
  byte *pbVar14;
  bool bVar15;
  float10 fVar16;
  undefined4 local_ac;
  undefined4 local_9c;
  uint local_98;
  undefined4 local_94;
  undefined4 *local_90;
  undefined4 *local_8c;
  undefined4 local_88;
  int local_84;
  int local_80;
  int local_7c;
  int *local_78;
  char *local_74;
  undefined4 local_70;
  undefined4 local_6c;
  int *local_68;
  byte *local_64;
  int local_60;
  void *local_5c [4];
  undefined4 local_4c;
  uint local_48;
  void *local_44 [5];
  uint local_30;
  byte *******local_2c [4];
  uint local_1c;
  uint local_18;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006f8f8e;
  local_10 = ExceptionList;
  uVar4 = DAT_0076aa78 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_80 = in_ECX;
  local_14 = uVar4;
  FUN_00688180();
  local_98 = 7;
  local_9c = 0;
  local_ac = (void *)((uint)local_ac._2_2_ << 0x10);
  FUN_0040f7a0(&PTR_006fccac,0);
  local_8 = 0;
  piVar5 = (int *)FUN_00650260(&local_ac);
  if (7 < local_98) {
                    /* WARNING: Subroutine does not return */
    operator_delete(local_ac);
  }
  local_98 = 7;
  local_9c = 0;
  local_ac = (void *)((uint)local_ac & 0xffff0000);
  local_90 = (undefined4 *)0x0;
  local_8c = (undefined4 *)0x0;
  local_88 = 0;
  iVar12 = piVar5[0x2c9];
  local_78 = (int *)piVar5[0x302];
  local_8 = 1;
  local_60 = iVar12;
  cVar3 = FUN_00688490();
  do {
    if (cVar3 != '\0') {
      piVar5[0x302] = (int)local_78;
      FUN_00642a20(&local_90,0);
      FUN_00642a50(iVar12,1);
      if (((*(byte *)(in_ECX + 0x60) & 0x10) != 0) && (iVar12 = FUN_00664bf0(), iVar12 == 0)) {
        (**(code **)(*piVar5 + 4))(1);
        local_68 = (int *)FUN_00641180();
        (**(code **)(*local_68 + 0x4c))();
        FUN_006507c0(piVar5);
      }
      puVar1 = local_90;
      if (local_90 != (undefined4 *)0x0) {
        while( true ) {
          if (puVar1 == local_8c) {
                    /* WARNING: Subroutine does not return */
            operator_delete(local_90);
          }
          if ((void *)*puVar1 != (void *)0x0) break;
          puVar1 = puVar1 + 3;
        }
                    /* WARNING: Subroutine does not return */
        operator_delete((void *)*puVar1);
      }
      ExceptionList = local_10;
      __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
      return;
    }
    FUN_00688220(local_2c,1);
    uVar9 = local_1c;
    pppppppbVar13 = (byte *******)local_2c;
    if (0xf < local_18) {
      pppppppbVar13 = local_2c[0];
    }
    uVar6 = 0x14;
    if (local_1c < 0x14) {
      uVar6 = local_1c;
    }
    local_8._0_1_ = 2;
    if (uVar6 == 0) {
LAB_0068508c:
      if (local_1c < 0x14) {
        uVar6 = 0xffffffff;
      }
      else {
        uVar6 = (uint)(local_1c != 0x14);
      }
      bVar15 = uVar6 == 0;
    }
    else {
      local_64 = (byte *)0x71fbc4;
      while (uVar2 = uVar6 - 4, 3 < uVar6) {
        if (*pppppppbVar13 != *(byte *******)local_64) goto LAB_0068503d;
        local_64 = local_64 + 4;
        pppppppbVar13 = pppppppbVar13 + 1;
        uVar6 = uVar2;
      }
      if (uVar2 == 0xfffffffc) {
LAB_00685086:
        uVar6 = 0;
      }
      else {
LAB_0068503d:
        bVar15 = *(byte *)pppppppbVar13 < *local_64;
        if ((*(byte *)pppppppbVar13 == *local_64) &&
           ((uVar2 == 0xfffffffd ||
            ((bVar15 = *(byte *)((int)pppppppbVar13 + 1) < local_64[1],
             *(byte *)((int)pppppppbVar13 + 1) == local_64[1] &&
             ((uVar2 == 0xfffffffe ||
              ((bVar15 = *(byte *)((int)pppppppbVar13 + 2) < local_64[2],
               *(byte *)((int)pppppppbVar13 + 2) == local_64[2] &&
               ((uVar2 == 0xffffffff ||
                (bVar15 = *(byte *)((int)pppppppbVar13 + 3) < local_64[3],
                *(byte *)((int)pppppppbVar13 + 3) == local_64[3])))))))))))) goto LAB_00685086;
        uVar6 = -(uint)bVar15 | 1;
      }
      bVar15 = false;
      if (uVar6 == 0) goto LAB_0068508c;
    }
    if (bVar15) {
      FUN_00688180();
      uVar7 = FUN_00688510(local_44);
      local_8._0_1_ = 3;
      piVar8 = (int *)FUN_006089c0(local_5c,uVar7);
      local_8 = CONCAT31(local_8._1_3_,4);
      if (piVar5 + 3 != piVar8) {
        FUN_0040f680(piVar8,0,0xffffffff);
      }
      if (7 < local_48) {
                    /* WARNING: Subroutine does not return */
        operator_delete(local_5c[0]);
      }
      bVar15 = local_30 < 0x10;
      local_48 = 7;
      local_4c = 0;
      local_5c[0] = (void *)((uint)local_5c[0] & 0xffff0000);
LAB_0068510c:
      local_8._0_1_ = 2;
      if (!bVar15) {
                    /* WARNING: Subroutine does not return */
        operator_delete(local_44[0]);
      }
LAB_0068511d:
      FUN_00688490();
      iVar12 = local_60;
    }
    else {
      pppppppbVar13 = (byte *******)local_2c;
      if (0xf < local_18) {
        pppppppbVar13 = local_2c[0];
      }
      uVar6 = 0x15;
      if (local_1c < 0x15) {
        uVar6 = local_1c;
      }
      iVar12 = FUN_0040c590(pppppppbVar13,"SmoothMeshShape.wname",uVar6);
      bVar15 = false;
      if (iVar12 == 0) {
        if (uVar9 < 0x15) {
          uVar6 = 0xffffffff;
        }
        else {
          uVar6 = (uint)(uVar9 != 0x15);
        }
        bVar15 = uVar6 == 0;
      }
      if (bVar15) {
        FUN_00688180();
        piVar8 = (int *)FUN_00688610(local_44);
        local_8 = CONCAT31(local_8._1_3_,5);
        if (piVar5 + 3 != piVar8) {
          FUN_0040f680(piVar8,0,0xffffffff);
        }
        bVar15 = local_30 < 8;
        goto LAB_0068510c;
      }
      pppppppbVar13 = (byte *******)local_2c;
      if (0xf < local_18) {
        pppppppbVar13 = local_2c[0];
      }
      uVar6 = 0x14;
      if (uVar9 < 0x14) {
        uVar6 = uVar9;
      }
      iVar12 = FUN_0040c590(pppppppbVar13,"SmoothMeshShape.face",uVar6);
      bVar15 = false;
      if (iVar12 == 0) {
        if (uVar9 < 0x14) {
          uVar6 = 0xffffffff;
        }
        else {
          uVar6 = (uint)(uVar9 != 0x14);
        }
        bVar15 = uVar6 == 0;
      }
      if (!bVar15) {
        pppppppbVar13 = (byte *******)local_2c;
        if (0xf < local_18) {
          pppppppbVar13 = local_2c[0];
        }
        uVar6 = 0x1b;
        if (uVar9 < 0x1b) {
          uVar6 = uVar9;
        }
        iVar12 = FUN_0040c590(pppppppbVar13,"SmoothMeshShape.vertexFlags",uVar6);
        bVar15 = false;
        if (iVar12 == 0) {
          if (uVar9 < 0x1b) {
            uVar6 = 0xffffffff;
          }
          else {
            uVar6 = (uint)(uVar9 != 0x1b);
          }
          bVar15 = uVar6 == 0;
        }
        if (!bVar15) {
          pppppppbVar13 = (byte *******)local_2c;
          if (0xf < local_18) {
            pppppppbVar13 = local_2c[0];
          }
          uVar6 = 0x20;
          if (uVar9 < 0x20) {
            uVar6 = uVar9;
          }
          iVar12 = FUN_0040c590(pppppppbVar13,"SmoothMeshShape.vertexParameters",uVar6);
          bVar15 = false;
          if (iVar12 == 0) {
            if (uVar9 < 0x20) {
              uVar6 = 0xffffffff;
            }
            else {
              uVar6 = (uint)(uVar9 != 0x20);
            }
            bVar15 = uVar6 == 0;
          }
          if (bVar15) {
            FUN_00688180();
            std::basic_istream<char,std::char_traits<char>_>::read
                      (*(basic_istream<char,std::char_traits<char>_> **)(in_ECX + 8),
                       (char *)&local_84,(ulonglong)uVar4 << 0x20);
            if (local_84 < 1) goto LAB_0068511d;
            FUN_0040d9d0(local_84);
            std::basic_istream<char,std::char_traits<char>_>::read
                      (*(basic_istream<char,std::char_traits<char>_> **)(in_ECX + 8),
                       (char *)piVar5[0xb4],(ulonglong)uVar4 << 0x20);
            FUN_00688490();
            iVar12 = local_60;
          }
          else {
            pppppppbVar13 = (byte *******)local_2c;
            if (0xf < local_18) {
              pppppppbVar13 = local_2c[0];
            }
            uVar6 = 0x1f;
            if (uVar9 < 0x1f) {
              uVar6 = uVar9;
            }
            iVar12 = FUN_0040c590(pppppppbVar13,"SmoothMeshShape.vertexPositions",uVar6);
            bVar15 = false;
            if (iVar12 == 0) {
              if (uVar9 < 0x1f) {
                uVar9 = 0xffffffff;
              }
              else {
                uVar9 = (uint)(uVar9 != 0x1f);
              }
              bVar15 = uVar9 == 0;
            }
            if (bVar15) {
              FUN_006800d0(piVar5 + 0x17);
              iVar12 = local_60;
            }
            else {
              cVar3 = FUN_00451470(local_2c,"SmoothMeshShape.vertexTexCoords");
              if (cVar3 == '\0') {
                cVar3 = FUN_00451470(local_2c,"SmoothMeshShape.vertexColors");
                if (cVar3 == '\0') {
                  cVar3 = FUN_00451470(local_2c,"SmoothMeshShape.strokeColors");
                  if (cVar3 == '\0') {
                    cVar3 = FUN_00451470(local_2c,"SmoothMeshShape.extrusionFrontColors");
                    if (cVar3 == '\0') {
                      cVar3 = FUN_00451470(local_2c,"SmoothMeshShape.extrusionBackColors");
                      if (cVar3 == '\0') {
                        cVar3 = FUN_00451470(local_2c,"SmoothMeshShape.strokeWidths");
                        if (cVar3 == '\0') {
                          cVar3 = FUN_00451470(local_2c,"SmoothMeshShape.texture");
                          if (cVar3 == '\0') {
                            cVar3 = FUN_00451470(local_2c,"SmoothMeshShape.strokeTexture");
                            if (cVar3 == '\0') {
                              cVar3 = FUN_00451470(local_2c,"SmoothMeshShape.textureTranslation");
                              if (cVar3 == '\0') {
                                cVar3 = FUN_00451470(local_2c,"SmoothMeshShape.textureRotation");
                                if (cVar3 == '\0') {
                                  cVar3 = FUN_00451470(local_2c,"SmoothMeshShape.textureDeformation"
                                                      );
                                  if (cVar3 == '\0') {
                                    cVar3 = FUN_00451470(local_2c,"SmoothMeshShape.texturePivot");
                                    if (cVar3 == '\0') {
                                      cVar3 = FUN_00451470(local_2c,"SmoothMeshShape.textureOpacity"
                                                          );
                                      if (cVar3 == '\0') {
                                        cVar3 = FUN_00451470(local_2c,
                                                  "SmoothMeshShape.textureBrightness");
                                        if (cVar3 == '\0') {
                                          cVar3 = FUN_00451470(local_2c,
                                                  "SmoothMeshShape.textureContrast");
                                          if (cVar3 == '\0') {
                                            cVar3 = FUN_00451470(local_2c,
                                                  "SmoothMeshShape.textureSaturation");
                                            if (cVar3 == '\0') {
                                              cVar3 = FUN_00451470(local_2c,
                                                  "SmoothMeshShape.strokeTextureOpacity");
                                              if (cVar3 == '\0') {
                                                cVar3 = FUN_00451470(local_2c,
                                                  "SmoothMeshShape.strokeTextureBrightness");
                                                if (cVar3 == '\0') {
                                                  cVar3 = FUN_00451470(local_2c,
                                                  "SmoothMeshShape.strokeTextureContrast");
                                                  if (cVar3 == '\0') {
                                                    cVar3 = FUN_00451470(local_2c,
                                                  "SmoothMeshShape.strokeTextureSaturation");
                                                  if (cVar3 == '\0') {
                                                    cVar3 = FUN_00451470(local_2c,
                                                  "SmoothMeshShape.strokeTextureStretch");
                                                  if (cVar3 == '\0') {
                                                    cVar3 = FUN_00451470(local_2c,
                                                  "SmoothMeshShape.extrusionMatrix");
                                                  if (cVar3 == '\0') {
                                                    cVar3 = FUN_00451470(local_2c,
                                                  "SmoothMeshShape.subdivisions");
                                                  if (cVar3 == '\0') {
                                                    cVar3 = FUN_00451470(local_2c,
                                                  "SmoothMeshShape.smoothWeight");
                                                  if (cVar3 == '\0') {
                                                    cVar3 = FUN_00451470(local_2c,
                                                  "SmoothMeshShape.flags");
                                                  if (cVar3 == '\0') {
                                                    cVar3 = FUN_00451470(local_2c,
                                                  "SmoothMeshShape.strokeJointType");
                                                  if (cVar3 == '\0') {
                                                    cVar3 = FUN_00451470(local_2c,
                                                  "SmoothMeshShape.strokeCapType");
                                                  if (cVar3 == '\0') {
                                                    cVar3 = FUN_00451470(local_2c,
                                                  "SmoothMeshShape.strokeAlignment");
                                                  if (cVar3 == '\0') {
                                                    cVar3 = FUN_00451470(local_2c,
                                                  "SmoothMeshShape.strokePattern");
                                                  if (cVar3 == '\0') {
                                                    cVar3 = FUN_00451470(local_2c,
                                                  "SmoothMeshShape.strokeDash");
                                                  if (cVar3 == '\0') {
                                                    cVar3 = FUN_00451470(local_2c,
                                                  "SmoothMeshShape.strokeGap");
                                                  if (cVar3 == '\0') {
                                                    FUN_006886f0();
                                                    iVar12 = local_60;
                                                  }
                                                  else {
                                                    FUN_00688180();
                                                    fVar16 = (float10)FUN_00681240();
                                                    local_68 = (int *)(float)fVar16;
                                                    piVar5[0x2fd] = (int)local_68;
                                                    FUN_00688490();
                                                    iVar12 = local_60;
                                                  }
                                                  }
                                                  else {
                                                    FUN_00688180();
                                                    fVar16 = (float10)FUN_00681240();
                                                    local_68 = (int *)(float)fVar16;
                                                    piVar5[0x2fc] = (int)local_68;
                                                    FUN_00688490();
                                                    iVar12 = local_60;
                                                  }
                                                  }
                                                  else {
                                                    FUN_00688180();
                                                    iVar12 = FUN_00681220();
                                                    piVar5[0x2fe] = iVar12;
                                                    FUN_00688490();
                                                    iVar12 = local_60;
                                                  }
                                                  }
                                                  else {
                                                    FUN_00688180();
                                                    iVar12 = FUN_00681220();
                                                    piVar5[0x21a] = iVar12;
                                                    FUN_00688490();
                                                    iVar12 = local_60;
                                                  }
                                                  }
                                                  else {
                                                    FUN_00688180();
                                                    iVar12 = FUN_00681220();
                                                    piVar5[0x219] = iVar12;
                                                    FUN_00688490();
                                                    iVar12 = local_60;
                                                  }
                                                  }
                                                  else {
                                                    FUN_00688180();
                                                    iVar12 = FUN_00681220();
                                                    piVar5[0x218] = iVar12;
                                                    FUN_00688490();
                                                    iVar12 = local_60;
                                                  }
                                                  }
                                                  else {
                                                    FUN_00688180();
                                                    iVar12 = FUN_00681220();
                                                    piVar5[0x217] = iVar12;
                                                    FUN_00688490();
                                                    iVar12 = local_60;
                                                  }
                                                  }
                                                  else {
                                                    FUN_00688180();
                                                    fVar16 = (float10)FUN_00681240();
                                                    local_68 = (int *)(float)fVar16;
                                                    FUN_00688490();
                                                    local_78 = local_68;
                                                    iVar12 = local_60;
                                                  }
                                                  }
                                                  else {
                                                    FUN_00688180();
                                                    iVar12 = FUN_00681220();
                                                    local_60 = iVar12;
                                                    FUN_00688490();
                                                  }
                                                  }
                                                  else {
                                                    FUN_006808f0(piVar5 + 0x1d5);
                                                    iVar12 = local_60;
                                                  }
                                                  }
                                                  else {
                                                    FUN_006806b0(piVar5 + 0x1bf);
                                                    iVar12 = local_60;
                                                  }
                                                  }
                                                  else {
                                                    FUN_006806b0(piVar5 + 0x1a9);
                                                    iVar12 = local_60;
                                                  }
                                                  }
                                                  else {
                                                    FUN_006806b0(piVar5 + 0x193);
                                                    iVar12 = local_60;
                                                  }
                                                }
                                                else {
                                                  FUN_006806b0(piVar5 + 0x17d);
                                                  iVar12 = local_60;
                                                }
                                              }
                                              else {
                                                FUN_006806b0(piVar5 + 0x167);
                                                iVar12 = local_60;
                                              }
                                            }
                                            else {
                                              FUN_006806b0(piVar5 + 0x151);
                                              iVar12 = local_60;
                                            }
                                          }
                                          else {
                                            FUN_006806b0(piVar5 + 0x13b);
                                            iVar12 = local_60;
                                          }
                                        }
                                        else {
                                          FUN_006806b0(piVar5 + 0x125);
                                          iVar12 = local_60;
                                        }
                                      }
                                      else {
                                        FUN_006806b0(piVar5 + 0x10f);
                                        iVar12 = local_60;
                                      }
                                    }
                                    else {
                                      FUN_00680b40(piVar5 + 0xcd);
                                      iVar12 = local_60;
                                    }
                                  }
                                  else {
                                    FUN_006808f0(piVar5 + 0xf9);
                                    iVar12 = local_60;
                                  }
                                }
                                else {
                                  FUN_00680d80(piVar5 + 0xe3);
                                  iVar12 = local_60;
                                }
                              }
                              else {
                                FUN_00680b40(piVar5 + 0xb7);
                                iVar12 = local_60;
                              }
                            }
                            else {
                              FUN_006806b0(piVar5 + 0x201);
                              local_64 = (byte *)0x0;
                              iVar10 = (**(code **)(piVar5[0x201] + 4))();
                              iVar12 = local_60;
                              if (0 < iVar10) {
                                local_68 = (int *)(in_ECX + 0x20);
                                pbVar14 = local_64;
                                do {
                                  puVar1 = (undefined4 *)(piVar5[0x214] + (int)pbVar14 * 4);
                                  puVar11 = (undefined4 *)FUN_00468910(puVar1);
                                  *puVar1 = *puVar11;
                                  pbVar14 = local_64 + 1;
                                  local_64 = pbVar14;
                                  iVar10 = (**(code **)(piVar5[0x201] + 4))();
                                  iVar12 = local_60;
                                  in_ECX = local_80;
                                } while ((int)pbVar14 < iVar10);
                              }
                            }
                          }
                          else {
                            FUN_006806b0(piVar5 + 0x1eb);
                            local_64 = (byte *)0x0;
                            iVar10 = (**(code **)(piVar5[0x1eb] + 4))();
                            iVar12 = local_60;
                            if (0 < iVar10) {
                              local_68 = (int *)(in_ECX + 0x20);
                              pbVar14 = local_64;
                              do {
                                puVar1 = (undefined4 *)(piVar5[0x1fe] + (int)pbVar14 * 4);
                                puVar11 = (undefined4 *)FUN_00468910(puVar1);
                                *puVar1 = *puVar11;
                                pbVar14 = local_64 + 1;
                                local_64 = pbVar14;
                                iVar10 = (**(code **)(piVar5[0x1eb] + 4))();
                                iVar12 = local_60;
                                in_ECX = local_80;
                              } while ((int)pbVar14 < iVar10);
                            }
                          }
                        }
                        else {
                          FUN_0067fde0(piVar5 + 0x9b);
                          iVar12 = local_60;
                        }
                      }
                      else {
                        FUN_006803c0(piVar5 + 0x6f);
                        iVar12 = local_60;
                      }
                    }
                    else {
                      FUN_006803c0(piVar5 + 0x85);
                      iVar12 = local_60;
                    }
                  }
                  else {
                    FUN_006803c0(piVar5 + 0x59);
                    iVar12 = local_60;
                  }
                }
                else {
                  FUN_006803c0(piVar5 + 0x43);
                  iVar12 = local_60;
                }
              }
              else {
                FUN_006800d0(piVar5 + 0x2d);
                iVar12 = local_60;
              }
            }
          }
          goto LAB_00685a1e;
        }
        FUN_00688180();
        std::basic_istream<char,std::char_traits<char>_>::read
                  (*(basic_istream<char,std::char_traits<char>_> **)(in_ECX + 8),(char *)&local_7c,
                   (ulonglong)uVar4 << 0x20);
        if (0 < local_7c) {
          FUN_0040d9d0(local_7c);
          std::basic_istream<char,std::char_traits<char>_>::read
                    (*(basic_istream<char,std::char_traits<char>_> **)(in_ECX + 8),
                     (char *)piVar5[0xb1],(ulonglong)uVar4 << 0x20);
          FUN_00688490();
          iVar12 = local_60;
          goto LAB_00685a1e;
        }
        goto LAB_0068511d;
      }
      FUN_00688180();
      std::basic_istream<char,std::char_traits<char>_>::read
                (*(basic_istream<char,std::char_traits<char>_> **)(in_ECX + 8),(char *)&local_94,
                 (ulonglong)uVar4 << 0x20);
      local_74 = (char *)0x0;
      local_70 = 0;
      local_6c = 0;
      FUN_0040d9d0(local_94);
      local_8._0_1_ = 6;
      std::basic_istream<char,std::char_traits<char>_>::read
                (*(basic_istream<char,std::char_traits<char>_> **)(in_ECX + 8),local_74,
                 (ulonglong)uVar4 << 0x20);
      FUN_00642610(&local_74);
      FUN_00688490();
      iVar12 = local_60;
      if (local_74 != (char *)0x0) {
                    /* WARNING: Subroutine does not return */
        operator_delete(local_74);
      }
    }
LAB_00685a1e:
    local_8 = CONCAT31(local_8._1_3_,1);
    if (0xf < local_18) {
                    /* WARNING: Subroutine does not return */
      operator_delete(local_2c[0]);
    }
    cVar3 = FUN_00688490();
  } while( true );
}


/* FUN_00685b10 @ 00685b10  kind=gamemisc  attributed-by=none  size=3305 */

void FUN_00685b10(void)

{
  uint uVar1;
  char cVar2;
  uint uVar3;
  int *piVar4;
  uint uVar5;
  undefined4 uVar6;
  int *piVar7;
  int iVar8;
  uint uVar9;
  float fVar10;
  undefined4 *_Src;
  uint uVar11;
  int in_ECX;
  byte ****ppppbVar12;
  char *pcVar13;
  undefined4 *_Dst;
  bool bVar14;
  float10 fVar15;
  undefined4 local_cc;
  undefined4 local_bc;
  uint local_b8;
  undefined4 local_b4;
  undefined4 local_a4;
  uint local_a0;
  int local_9c;
  float local_98;
  float local_94;
  int *local_90;
  undefined1 local_8c [24];
  undefined2 local_74 [8];
  undefined4 local_64;
  undefined4 local_60;
  void *local_5c [5];
  uint local_48;
  byte ***local_44 [4];
  uint local_34;
  uint local_30;
  byte ***local_2c [4];
  uint local_1c;
  uint local_18;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006f9021;
  local_10 = ExceptionList;
  uVar3 = DAT_0076aa78 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_14 = uVar3;
  FUN_00688180();
  local_a0 = 7;
  local_a4 = 0;
  local_b4 = (void *)((uint)local_b4._2_2_ << 0x10);
  FUN_0040f7a0(&PTR_006fccac,0);
  local_b8 = 7;
  local_bc = 0;
  local_cc = (void *)((uint)local_cc._2_2_ << 0x10);
  local_8 = 1;
  piVar4 = (int *)FUN_006502e0(&local_cc,&local_b4);
  local_90 = piVar4;
  if (7 < local_b8) {
                    /* WARNING: Subroutine does not return */
    operator_delete(local_cc);
  }
  local_b8 = 7;
  local_bc = 0;
  local_cc = (void *)((uint)local_cc & 0xffff0000);
  local_8 = 0xffffffff;
  if (7 < local_a0) {
                    /* WARNING: Subroutine does not return */
    operator_delete(local_b4);
  }
  local_a0 = 7;
  local_a4 = 0;
  local_b4 = (void *)((uint)local_b4 & 0xffff0000);
  cVar2 = FUN_00688490();
  do {
    if (cVar2 != '\0') {
      if ((*(byte *)(in_ECX + 0x60) & 0x20) != 0) {
        piVar4[0x7c] = piVar4[0x7c] | 1;
      }
      (**(code **)(*piVar4 + 4))(1);
      ExceptionList = local_10;
      __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
      return;
    }
    FUN_00688220(local_2c,1);
    uVar11 = local_18;
    uVar9 = local_1c;
    ppppbVar12 = local_2c;
    if (0xf < local_18) {
      ppppbVar12 = (byte ****)local_2c[0];
    }
    uVar5 = 0xe;
    if (local_1c < 0xe) {
      uVar5 = local_1c;
    }
    local_8 = 2;
    if (uVar5 == 0) {
LAB_00685cc1:
      if (local_1c < 0xe) {
        uVar5 = 0xffffffff;
      }
      else {
        uVar5 = (uint)(local_1c != 0xe);
      }
      bVar14 = uVar5 == 0;
    }
    else {
      pcVar13 = "TextShape.name";
      while (uVar1 = uVar5 - 4, 3 < uVar5) {
        if (*ppppbVar12 != *(byte ****)pcVar13) goto LAB_00685c87;
        ppppbVar12 = ppppbVar12 + 1;
        pcVar13 = pcVar13 + 4;
        uVar5 = uVar1;
      }
      if (uVar1 == 0xfffffffc) {
LAB_00685cbb:
        uVar5 = 0;
      }
      else {
LAB_00685c87:
        bVar14 = *(byte *)ppppbVar12 < (byte)*pcVar13;
        if ((*(byte *)ppppbVar12 == *pcVar13) &&
           ((uVar1 == 0xfffffffd ||
            ((bVar14 = *(byte *)((int)ppppbVar12 + 1) < (byte)pcVar13[1],
             *(byte *)((int)ppppbVar12 + 1) == pcVar13[1] &&
             ((uVar1 == 0xfffffffe ||
              ((bVar14 = *(byte *)((int)ppppbVar12 + 2) < (byte)pcVar13[2],
               *(byte *)((int)ppppbVar12 + 2) == pcVar13[2] &&
               ((uVar1 == 0xffffffff ||
                (bVar14 = *(byte *)((int)ppppbVar12 + 3) < (byte)pcVar13[3],
                *(byte *)((int)ppppbVar12 + 3) == pcVar13[3])))))))))))) goto LAB_00685cbb;
        uVar5 = -(uint)bVar14 | 1;
      }
      bVar14 = false;
      if (uVar5 == 0) goto LAB_00685cc1;
    }
    if (bVar14) {
      FUN_00688180();
      uVar6 = FUN_00688510(local_5c);
      local_8._0_1_ = 3;
      piVar7 = (int *)FUN_006089c0(local_44,uVar6);
      piVar4 = local_90;
      local_8 = CONCAT31(local_8._1_3_,4);
      if (local_90 + 3 != piVar7) {
        FUN_0040f680(piVar7,0,0xffffffff);
      }
      if (7 < local_30) {
                    /* WARNING: Subroutine does not return */
        operator_delete(local_44[0]);
      }
      bVar14 = local_48 < 0x10;
      local_30 = 7;
      local_34 = 0;
      local_44[0] = (byte ***)((uint)local_44[0] & 0xffff0000);
LAB_00685e0c:
      local_8 = CONCAT31(local_8._1_3_,2);
      if (!bVar14) {
                    /* WARNING: Subroutine does not return */
        operator_delete(local_5c[0]);
      }
      FUN_00688490();
    }
    else {
      ppppbVar12 = local_2c;
      if (0xf < local_18) {
        ppppbVar12 = (byte ****)local_2c[0];
      }
      uVar5 = 0xf;
      if (local_1c < 0xf) {
        uVar5 = local_1c;
      }
      if (uVar5 == 0) {
LAB_00685dc0:
        if (local_1c < 0xf) {
          uVar5 = 0xffffffff;
        }
        else {
          uVar5 = (uint)(local_1c != 0xf);
        }
        bVar14 = uVar5 == 0;
      }
      else {
        pcVar13 = "TextShape.wname";
        while (uVar1 = uVar5 - 4, 3 < uVar5) {
          if (*ppppbVar12 != *(byte ****)pcVar13) goto LAB_00685d86;
          ppppbVar12 = ppppbVar12 + 1;
          pcVar13 = pcVar13 + 4;
          uVar5 = uVar1;
        }
        if (uVar1 == 0xfffffffc) {
LAB_00685dba:
          uVar5 = 0;
        }
        else {
LAB_00685d86:
          bVar14 = *(byte *)ppppbVar12 < (byte)*pcVar13;
          if ((*(byte *)ppppbVar12 == *pcVar13) &&
             ((uVar1 == 0xfffffffd ||
              ((bVar14 = *(byte *)((int)ppppbVar12 + 1) < (byte)pcVar13[1],
               *(byte *)((int)ppppbVar12 + 1) == pcVar13[1] &&
               ((uVar1 == 0xfffffffe ||
                ((bVar14 = *(byte *)((int)ppppbVar12 + 2) < (byte)pcVar13[2],
                 *(byte *)((int)ppppbVar12 + 2) == pcVar13[2] &&
                 ((uVar1 == 0xffffffff ||
                  (bVar14 = *(byte *)((int)ppppbVar12 + 3) < (byte)pcVar13[3],
                  *(byte *)((int)ppppbVar12 + 3) == pcVar13[3])))))))))))) goto LAB_00685dba;
          uVar5 = -(uint)bVar14 | 1;
        }
        bVar14 = false;
        if (uVar5 == 0) goto LAB_00685dc0;
      }
      if (bVar14) {
        FUN_00688180();
        piVar7 = (int *)FUN_00688610(local_5c);
        piVar4 = local_90;
        local_8 = CONCAT31(local_8._1_3_,5);
        if (local_90 + 3 != piVar7) {
          FUN_0040f680(piVar7,0,0xffffffff);
        }
        bVar14 = local_48 < 8;
        goto LAB_00685e0c;
      }
      ppppbVar12 = local_2c;
      if (0xf < local_18) {
        ppppbVar12 = (byte ****)local_2c[0];
      }
      uVar5 = 0x10;
      if (local_1c < 0x10) {
        uVar5 = local_1c;
      }
      iVar8 = FUN_0040c590(ppppbVar12,"TextShape.string",uVar5);
      bVar14 = false;
      if (iVar8 == 0) {
        if (uVar9 < 0x10) {
          uVar5 = 0xffffffff;
        }
        else {
          uVar5 = (uint)(uVar9 != 0x10);
        }
        bVar14 = uVar5 == 0;
      }
      if (bVar14) {
        FUN_00688180();
        local_98 = 0.0;
        cVar2 = FUN_00688490();
        piVar4 = local_90;
        if (cVar2 == '\0') {
          local_94 = 0.0;
          do {
            FUN_00688220(local_44,1);
            piVar4 = local_90;
            ppppbVar12 = local_44;
            if (0xf < local_30) {
              ppppbVar12 = (byte ****)local_44[0];
            }
            uVar9 = 0xf;
            if (local_34 < 0xf) {
              uVar9 = local_34;
            }
            local_8 = CONCAT31(local_8._1_3_,6);
            if (uVar9 == 0) {
LAB_00685f27:
              if (local_34 < 0xf) {
                uVar9 = 0xffffffff;
              }
              else {
                uVar9 = (uint)(local_34 != 0xf);
              }
              bVar14 = uVar9 == 0;
            }
            else {
              pcVar13 = "Attribute.frame";
              while (uVar11 = uVar9 - 4, 3 < uVar9) {
                if (*ppppbVar12 != *(byte ****)pcVar13) goto LAB_00685eed;
                ppppbVar12 = ppppbVar12 + 1;
                pcVar13 = pcVar13 + 4;
                uVar9 = uVar11;
              }
              if (uVar11 == 0xfffffffc) {
LAB_00685f21:
                uVar9 = 0;
              }
              else {
LAB_00685eed:
                bVar14 = *(byte *)ppppbVar12 < (byte)*pcVar13;
                if ((*(byte *)ppppbVar12 == *pcVar13) &&
                   ((uVar11 == 0xfffffffd ||
                    ((bVar14 = *(byte *)((int)ppppbVar12 + 1) < (byte)pcVar13[1],
                     *(byte *)((int)ppppbVar12 + 1) == pcVar13[1] &&
                     ((uVar11 == 0xfffffffe ||
                      ((bVar14 = *(byte *)((int)ppppbVar12 + 2) < (byte)pcVar13[2],
                       *(byte *)((int)ppppbVar12 + 2) == pcVar13[2] &&
                       ((uVar11 == 0xffffffff ||
                        (bVar14 = *(byte *)((int)ppppbVar12 + 3) < (byte)pcVar13[3],
                        *(byte *)((int)ppppbVar12 + 3) == pcVar13[3])))))))))))) goto LAB_00685f21;
                uVar9 = -(uint)bVar14 | 1;
              }
              bVar14 = false;
              if (uVar9 == 0) goto LAB_00685f27;
            }
            if (bVar14) {
              FUN_00688180();
              piVar4 = local_90;
              fVar10 = (float)(**(code **)(local_90[0x17] + 4))();
              if (local_98 == fVar10) {
                (**(code **)(piVar4[0x17] + 8))();
              }
              _Src = (undefined4 *)FUN_00688610(local_5c);
              _Dst = (undefined4 *)(piVar4[0x2a] + (int)local_94);
              if (_Dst != _Src) {
                if (7 < (uint)_Dst[5]) {
                    /* WARNING: Subroutine does not return */
                  operator_delete((void *)*_Dst);
                }
                _Dst[5] = 7;
                _Dst[4] = 0;
                *(undefined2 *)_Dst = 0;
                if ((uint)_Src[5] < 8) {
                  if (_Src[4] + 1 != 0) {
                    memmove(_Dst,_Src,(_Src[4] + 1) * 2);
                  }
                }
                else {
                  *_Dst = *_Src;
                  *_Src = 0;
                }
                _Dst[4] = _Src[4];
                _Dst[5] = _Src[5];
                _Src[5] = 7;
                _Src[4] = 0;
                *(undefined2 *)_Src = 0;
              }
              if (7 < local_48) {
                    /* WARNING: Subroutine does not return */
                operator_delete(local_5c[0]);
              }
              local_98 = (float)((int)local_98 + 1);
              local_94 = (float)((int)local_94 + 0x18);
              FUN_00688490();
              piVar4 = local_90;
            }
            else {
              ppppbVar12 = local_44;
              if (0xf < local_30) {
                ppppbVar12 = (byte ****)local_44[0];
              }
              uVar9 = 0x12;
              if (local_34 < 0x12) {
                uVar9 = local_34;
              }
              if (uVar9 == 0) {
LAB_00686091:
                if (local_34 < 0x12) {
                  uVar9 = 0xffffffff;
                }
                else {
                  uVar9 = (uint)(local_34 != 0x12);
                }
                bVar14 = uVar9 == 0;
              }
              else {
                pcVar13 = "Attribute.sequence";
                while (uVar11 = uVar9 - 4, 3 < uVar9) {
                  if (*ppppbVar12 != *(byte ****)pcVar13) goto LAB_00686057;
                  ppppbVar12 = ppppbVar12 + 1;
                  pcVar13 = pcVar13 + 4;
                  uVar9 = uVar11;
                }
                if (uVar11 == 0xfffffffc) {
LAB_0068608b:
                  uVar9 = 0;
                }
                else {
LAB_00686057:
                  bVar14 = *(byte *)ppppbVar12 < (byte)*pcVar13;
                  if ((*(byte *)ppppbVar12 == *pcVar13) &&
                     ((uVar11 == 0xfffffffd ||
                      ((bVar14 = *(byte *)((int)ppppbVar12 + 1) < (byte)pcVar13[1],
                       *(byte *)((int)ppppbVar12 + 1) == pcVar13[1] &&
                       ((uVar11 == 0xfffffffe ||
                        ((bVar14 = *(byte *)((int)ppppbVar12 + 2) < (byte)pcVar13[2],
                         *(byte *)((int)ppppbVar12 + 2) == pcVar13[2] &&
                         ((uVar11 == 0xffffffff ||
                          (bVar14 = *(byte *)((int)ppppbVar12 + 3) < (byte)pcVar13[3],
                          *(byte *)((int)ppppbVar12 + 3) == pcVar13[3]))))))))))))
                  goto LAB_0068608b;
                  uVar9 = -(uint)bVar14 | 1;
                }
                bVar14 = false;
                if (uVar9 == 0) goto LAB_00686091;
              }
              if (bVar14) {
                FUN_00682a80(local_90 + 0x17);
              }
              else {
                FUN_006886f0();
                piVar4 = local_90;
              }
            }
            local_8 = CONCAT31(local_8._1_3_,2);
            if (0xf < local_30) {
                    /* WARNING: Subroutine does not return */
              operator_delete(local_44[0]);
            }
            cVar2 = FUN_00688490();
          } while (cVar2 == '\0');
        }
      }
      else {
        ppppbVar12 = local_2c;
        if (0xf < uVar11) {
          ppppbVar12 = (byte ****)local_2c[0];
        }
        uVar5 = 0xf;
        if (uVar9 < 0xf) {
          uVar5 = uVar9;
        }
        iVar8 = FUN_0040c590(ppppbVar12,"TextShape.color",uVar5);
        piVar4 = local_90;
        bVar14 = false;
        if (iVar8 == 0) {
          if (uVar9 < 0xf) {
            uVar5 = 0xffffffff;
          }
          else {
            uVar5 = (uint)(uVar9 != 0xf);
          }
          bVar14 = uVar5 == 0;
        }
        if (bVar14) {
          FUN_00680fd0(local_90 + 0x2d);
        }
        else {
          ppppbVar12 = local_2c;
          if (0xf < uVar11) {
            ppppbVar12 = (byte ****)local_2c[0];
          }
          uVar5 = 0x15;
          if (uVar9 < 0x15) {
            uVar5 = uVar9;
          }
          iVar8 = FUN_0040c590(ppppbVar12,"TextShape.strokeColor",uVar5);
          piVar4 = local_90;
          bVar14 = false;
          if (iVar8 == 0) {
            if (uVar9 < 0x15) {
              uVar5 = 0xffffffff;
            }
            else {
              uVar5 = (uint)(uVar9 != 0x15);
            }
            bVar14 = uVar5 == 0;
          }
          if (bVar14) {
            FUN_00680fd0(local_90 + 0x43);
          }
          else {
            ppppbVar12 = local_2c;
            if (0xf < uVar11) {
              ppppbVar12 = (byte ****)local_2c[0];
            }
            uVar5 = 0x18;
            if (uVar9 < 0x18) {
              uVar5 = uVar9;
            }
            iVar8 = FUN_0040c590(ppppbVar12,"TextShape.extrusionColor",uVar5);
            piVar4 = local_90;
            bVar14 = false;
            if (iVar8 == 0) {
              if (uVar9 < 0x18) {
                uVar5 = 0xffffffff;
              }
              else {
                uVar5 = (uint)(uVar9 != 0x18);
              }
              bVar14 = uVar5 == 0;
            }
            if (bVar14) {
              FUN_00680fd0(local_90 + 0x59);
            }
            else {
              ppppbVar12 = local_2c;
              if (0xf < uVar11) {
                ppppbVar12 = (byte ****)local_2c[0];
              }
              uVar11 = 0xf;
              if (uVar9 < 0xf) {
                uVar11 = uVar9;
              }
              iVar8 = FUN_0040c590(ppppbVar12,"TextShape.flags",uVar11);
              bVar14 = false;
              if (iVar8 == 0) {
                if (uVar9 < 0xf) {
                  uVar9 = 0xffffffff;
                }
                else {
                  uVar9 = (uint)(uVar9 != 0xf);
                }
                bVar14 = uVar9 == 0;
              }
              if (bVar14) {
                FUN_00688180();
                std::basic_istream<char,std::char_traits<char>_>::read
                          (*(basic_istream<char,std::char_traits<char>_> **)(in_ECX + 8),
                           (char *)&local_9c,(ulonglong)uVar3 << 0x20);
                piVar4 = local_90;
                local_90[0x7b] = local_9c;
                FUN_00688490();
              }
              else {
                cVar2 = FUN_00451470(local_2c,"TextShape.pixelSize");
                if (cVar2 == '\0') {
                  cVar2 = FUN_00451470(local_2c,"TextShape.strokeRadius");
                  if (cVar2 == '\0') {
                    cVar2 = FUN_00451470(local_2c,"TextShape.spacing");
                    if (cVar2 == '\0') {
                      cVar2 = FUN_00451470(local_2c,"TextShape.lineSpacing");
                      if (cVar2 == '\0') {
                        cVar2 = FUN_00451470(local_2c,"TextShape.wrapWidth");
                        if (cVar2 == '\0') {
                          cVar2 = FUN_00451470(local_2c,"TextShape.fontSize");
                          if (cVar2 == '\0') {
                            cVar2 = FUN_00451470(local_2c,"TextShape.strokeWidth");
                            if (cVar2 == '\0') {
                              cVar2 = FUN_00451470(local_2c,"TextShape.fontName");
                              if (cVar2 == '\0') {
                                cVar2 = FUN_00451470(local_2c,"TextShape.wfontName");
                                if (cVar2 == '\0') {
                                  cVar2 = FUN_00451470(local_2c,"TextShape.font");
                                  if (cVar2 == '\0') {
                                    FUN_006886f0();
                                    piVar4 = local_90;
                                  }
                                  else {
                                    local_60 = 7;
                                    local_64 = 0;
                                    local_74[0] = 0;
                                    local_8 = CONCAT31(local_8._1_3_,8);
                                    local_94 = 0.0;
                                    local_98 = 0.0;
                                    FUN_00688180();
                                    cVar2 = FUN_00688490();
                                    piVar4 = local_90;
                                    while (local_90 = piVar4, cVar2 == '\0') {
                                      FUN_00688220(local_44,1);
                                      local_8._0_1_ = 9;
                                      cVar2 = FUN_00451470(local_44,"TextShape.font.fileName");
                                      if (cVar2 == '\0') {
                                        cVar2 = FUN_00451470(local_44,"TextShape.font.wfileName");
                                        if (cVar2 != '\0') {
                                          FUN_00688180();
                                          uVar6 = FUN_00688610(local_8c);
                                          FUN_00467fa0(uVar6);
                                          FUN_00593e50();
                                          goto LAB_00686731;
                                        }
                                        cVar2 = FUN_00451470(local_44,"TextShape.font.pixelSize");
                                        if (cVar2 != '\0') {
                                          FUN_00688180();
                                          iVar8 = FUN_00681220();
                                          local_94 = (float)iVar8;
                                          goto LAB_00686731;
                                        }
                                        cVar2 = FUN_00451470(local_44,"TextShape.font.glowRadius");
                                        if (cVar2 != '\0') {
                                          FUN_00688180();
                                          iVar8 = FUN_00681220();
                                          local_98 = (float)iVar8 * 0.5;
                                          goto LAB_00686731;
                                        }
                                        cVar2 = FUN_00451470(local_44,"TextShape.font.size");
                                        if (cVar2 == '\0') {
                                          cVar2 = FUN_00451470(local_44,"TextShape.font.strokeWidth"
                                                              );
                                          if (cVar2 == '\0') {
                                            cVar2 = FUN_00451470(local_44,
                                                  "TextShape.font.strokeGlow");
                                            if ((cVar2 == '\0') &&
                                               (cVar2 = FUN_00451470(local_44,
                                                  "TextShape.font.pixelFont"), cVar2 == '\0'))
                                            goto LAB_00686738;
                                            FUN_00688180();
                                            FUN_00681220();
                                          }
                                          else {
                                            FUN_00688180();
                                            fVar15 = (float10)FUN_00681240();
                                            local_98 = (float)fVar15 * 0.5;
                                          }
                                          goto LAB_00686731;
                                        }
                                        FUN_00688180();
                                        fVar15 = (float10)FUN_00681240();
                                        local_94 = (float)fVar15;
                                        FUN_00688490();
                                      }
                                      else {
                                        FUN_00688180();
                                        uVar6 = FUN_00688510(local_8c);
                                        local_8._0_1_ = 10;
                                        uVar6 = FUN_006089c0(local_5c,uVar6);
                                        FUN_00467fa0(uVar6);
                                        FUN_00593e50();
                                        local_8._0_1_ = 9;
                                        FUN_00403eb0();
LAB_00686731:
                                        FUN_00688490();
                                      }
LAB_00686738:
                                      local_8 = CONCAT31(local_8._1_3_,8);
                                      FUN_00403eb0();
                                      cVar2 = FUN_00688490();
                                      piVar4 = local_90;
                                    }
                                    if (piVar4 + 0x73 != (int *)local_74) {
                                      FUN_0040f680(local_74,0,0xffffffff);
                                    }
                                    piVar4[0x6f] = (int)local_94;
                                    piVar4[0x70] = (int)local_98;
                                    FUN_00593e50();
                                  }
                                }
                                else {
                                  FUN_00688180();
                                  uVar6 = FUN_00688610(local_5c);
                                  piVar4 = local_90;
                                  FUN_00467fa0(uVar6);
                                  FUN_00593e50();
                                  FUN_00688490();
                                }
                              }
                              else {
                                FUN_00688180();
                                uVar6 = FUN_00688510(local_44);
                                local_8._0_1_ = 7;
                                uVar6 = FUN_006089c0(local_5c,uVar6);
                                piVar4 = local_90;
                                FUN_00467fa0(uVar6);
                                FUN_00593e50();
                                local_8 = CONCAT31(local_8._1_3_,2);
                                FUN_00403eb0();
                                FUN_00688490();
                              }
                            }
                            else {
                              FUN_00688180();
                              iVar8 = FUN_00681220();
                              piVar4 = local_90;
                              local_90[0x70] = (int)((float)iVar8 * 0.5);
                              FUN_00688490();
                            }
                          }
                          else {
                            FUN_00688180();
                            iVar8 = FUN_00681220();
                            piVar4 = local_90;
                            local_90[0x6f] = (int)(float)iVar8;
                            FUN_00688490();
                          }
                        }
                        else {
                          FUN_00688180();
                          fVar15 = (float10)FUN_00681240();
                          piVar4 = local_90;
                          local_90[0x79] = (int)(float)fVar15;
                          FUN_00688490();
                        }
                      }
                      else {
                        FUN_00688180();
                        fVar15 = (float10)FUN_00681240();
                        piVar4 = local_90;
                        local_90[0x72] = (int)(float)fVar15;
                        FUN_00688490();
                      }
                    }
                    else {
                      FUN_00688180();
                      fVar15 = (float10)FUN_00681240();
                      piVar4 = local_90;
                      local_90[0x71] = (int)(float)fVar15;
                      FUN_00688490();
                    }
                  }
                  else {
                    FUN_00688180();
                    fVar15 = (float10)FUN_00681240();
                    piVar4 = local_90;
                    local_90[0x70] = (int)(float)fVar15;
                    FUN_00688490();
                  }
                }
                else {
                  FUN_00688180();
                  fVar15 = (float10)FUN_00681240();
                  piVar4 = local_90;
                  local_90[0x6f] = (int)(float)fVar15;
                  FUN_00688490();
                }
              }
            }
          }
        }
      }
    }
    local_8 = 0xffffffff;
    if (0xf < local_18) {
                    /* WARNING: Subroutine does not return */
      operator_delete(local_2c[0]);
    }
    local_18 = 0xf;
    local_1c = 0;
    local_2c[0] = (byte ***)((uint)local_2c[0] & 0xffffff00);
    cVar2 = FUN_00688490();
  } while( true );
}


/* FUN_00686820 @ 00686820  kind=gamemisc  attributed-by=none  size=1976 */

void FUN_00686820(void)

{
  uint uVar1;
  char cVar2;
  uint uVar3;
  uint uVar4;
  undefined4 uVar5;
  int *piVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  undefined4 *puVar10;
  int in_ECX;
  byte *****pppppbVar11;
  char *pcVar12;
  bool bVar13;
  char *local_c0 [3];
  undefined4 local_b4;
  undefined4 local_b0;
  undefined4 local_ac;
  int local_a8;
  undefined4 local_a4;
  undefined4 local_a0;
  undefined4 local_9c;
  undefined4 local_98;
  undefined4 local_94;
  undefined4 local_90;
  char *local_8c;
  undefined4 local_88;
  undefined4 local_84;
  undefined4 local_80;
  undefined4 local_7c;
  int local_78;
  void *local_74 [5];
  uint local_60;
  void *local_5c [4];
  undefined4 local_4c;
  uint local_48;
  undefined4 local_44;
  int local_34;
  uint local_30;
  byte ****local_2c [4];
  uint local_1c;
  uint local_18;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006f907e;
  local_10 = ExceptionList;
  uVar3 = DAT_0076aa78 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_14 = uVar3;
  FUN_00688180();
  local_30 = 7;
  local_34 = 0;
  local_44 = (void *)((uint)local_44._2_2_ << 0x10);
  local_78 = -1;
  local_a0 = 1;
  local_9c = 1;
  local_98 = 1;
  local_94 = 1;
  local_90 = 1;
  local_7c = 0;
  local_80 = 0;
  local_8c = (char *)0x0;
  local_88 = 0;
  local_84 = 0;
  local_8 = 1;
  cVar2 = FUN_00688490();
  if (cVar2 == '\0') {
    do {
      FUN_00688220(local_2c,1);
      uVar7 = local_18;
      uVar8 = local_1c;
      pppppbVar11 = local_2c;
      if (0xf < local_18) {
        pppppbVar11 = (byte *****)local_2c[0];
      }
      uVar4 = 0xc;
      if (local_1c < 0xc) {
        uVar4 = local_1c;
      }
      local_8._0_1_ = 2;
      if (uVar4 == 0) {
LAB_00686957:
        if (local_1c < 0xc) {
          uVar4 = 0xffffffff;
        }
        else {
          uVar4 = (uint)(local_1c != 0xc);
        }
        bVar13 = uVar4 == 0;
      }
      else {
        pcVar12 = "Texture.name";
        while (uVar1 = uVar4 - 4, 3 < uVar4) {
          if (*pppppbVar11 != *(byte *****)pcVar12) goto LAB_0068691d;
          pppppbVar11 = pppppbVar11 + 1;
          pcVar12 = pcVar12 + 4;
          uVar4 = uVar1;
        }
        if (uVar1 == 0xfffffffc) {
LAB_00686951:
          uVar4 = 0;
        }
        else {
LAB_0068691d:
          bVar13 = *(byte *)pppppbVar11 < (byte)*pcVar12;
          if ((*(byte *)pppppbVar11 == *pcVar12) &&
             ((uVar1 == 0xfffffffd ||
              ((bVar13 = *(byte *)((int)pppppbVar11 + 1) < (byte)pcVar12[1],
               *(byte *)((int)pppppbVar11 + 1) == pcVar12[1] &&
               ((uVar1 == 0xfffffffe ||
                ((bVar13 = *(byte *)((int)pppppbVar11 + 2) < (byte)pcVar12[2],
                 *(byte *)((int)pppppbVar11 + 2) == pcVar12[2] &&
                 ((uVar1 == 0xffffffff ||
                  (bVar13 = *(byte *)((int)pppppbVar11 + 3) < (byte)pcVar12[3],
                  *(byte *)((int)pppppbVar11 + 3) == pcVar12[3])))))))))))) goto LAB_00686951;
          uVar4 = -(uint)bVar13 | 1;
        }
        bVar13 = false;
        if (uVar4 == 0) goto LAB_00686957;
      }
      if (bVar13) {
        FUN_00688180();
        uVar5 = FUN_00688510(local_74);
        local_8 = CONCAT31(local_8._1_3_,3);
        piVar6 = (int *)FUN_006089c0(local_5c,uVar5);
        if (&local_44 != piVar6) {
          if (7 < local_30) {
                    /* WARNING: Subroutine does not return */
            operator_delete(local_44);
          }
          local_30 = 7;
          local_34 = 0;
          local_44 = (void *)((uint)local_44 & 0xffff0000);
          if ((uint)piVar6[5] < 8) {
            if (piVar6[4] + 1 != 0) {
              memmove(&local_44,piVar6,(piVar6[4] + 1) * 2);
            }
          }
          else {
            local_44 = (void *)*piVar6;
            *piVar6 = 0;
          }
          local_34 = piVar6[4];
          local_30 = piVar6[5];
          piVar6[5] = 7;
          piVar6[4] = 0;
          *(undefined2 *)piVar6 = 0;
        }
        if (7 < local_48) {
                    /* WARNING: Subroutine does not return */
          operator_delete(local_5c[0]);
        }
        bVar13 = local_60 < 0x10;
        local_48 = 7;
        local_4c = 0;
        local_5c[0] = (void *)((uint)local_5c[0] & 0xffff0000);
        local_8._0_1_ = 2;
LAB_00686a3d:
        if (!bVar13) {
                    /* WARNING: Subroutine does not return */
          operator_delete(local_74[0]);
        }
LAB_00686a4a:
        FUN_00688490();
        uVar5 = local_7c;
        iVar9 = local_78;
      }
      else {
        pppppbVar11 = local_2c;
        if (0xf < local_18) {
          pppppbVar11 = (byte *****)local_2c[0];
        }
        uVar4 = 0xd;
        if (local_1c < 0xd) {
          uVar4 = local_1c;
        }
        if (uVar4 == 0) {
LAB_00686ad0:
          if (local_1c < 0xd) {
            uVar4 = 0xffffffff;
          }
          else {
            uVar4 = (uint)(local_1c != 0xd);
          }
          bVar13 = uVar4 == 0;
        }
        else {
          pcVar12 = "Texture.wname";
          while (uVar1 = uVar4 - 4, 3 < uVar4) {
            if (*pppppbVar11 != *(byte *****)pcVar12) goto LAB_00686a96;
            pppppbVar11 = pppppbVar11 + 1;
            pcVar12 = pcVar12 + 4;
            uVar4 = uVar1;
          }
          if (uVar1 == 0xfffffffc) {
LAB_00686aca:
            uVar4 = 0;
          }
          else {
LAB_00686a96:
            bVar13 = *(byte *)pppppbVar11 < (byte)*pcVar12;
            if ((*(byte *)pppppbVar11 == *pcVar12) &&
               ((uVar1 == 0xfffffffd ||
                ((bVar13 = *(byte *)((int)pppppbVar11 + 1) < (byte)pcVar12[1],
                 *(byte *)((int)pppppbVar11 + 1) == pcVar12[1] &&
                 ((uVar1 == 0xfffffffe ||
                  ((bVar13 = *(byte *)((int)pppppbVar11 + 2) < (byte)pcVar12[2],
                   *(byte *)((int)pppppbVar11 + 2) == pcVar12[2] &&
                   ((uVar1 == 0xffffffff ||
                    (bVar13 = *(byte *)((int)pppppbVar11 + 3) < (byte)pcVar12[3],
                    *(byte *)((int)pppppbVar11 + 3) == pcVar12[3])))))))))))) goto LAB_00686aca;
            uVar4 = -(uint)bVar13 | 1;
          }
          bVar13 = false;
          if (uVar4 == 0) goto LAB_00686ad0;
        }
        if (bVar13) {
          FUN_00688180();
          piVar6 = (int *)FUN_00688610(local_74);
          if (&local_44 != piVar6) {
            if (7 < local_30) {
                    /* WARNING: Subroutine does not return */
              operator_delete(local_44);
            }
            local_30 = 7;
            local_34 = 0;
            local_44 = (void *)((uint)local_44 & 0xffff0000);
            if ((uint)piVar6[5] < 8) {
              if (piVar6[4] + 1 != 0) {
                memmove(&local_44,piVar6,(piVar6[4] + 1) * 2);
              }
            }
            else {
              local_44 = (void *)*piVar6;
              *piVar6 = 0;
            }
            local_34 = piVar6[4];
            local_30 = piVar6[5];
            piVar6[5] = 7;
            piVar6[4] = 0;
            *(undefined2 *)piVar6 = 0;
          }
          bVar13 = local_60 < 8;
          goto LAB_00686a3d;
        }
        pppppbVar11 = local_2c;
        if (0xf < local_18) {
          pppppbVar11 = (byte *****)local_2c[0];
        }
        uVar4 = 10;
        if (local_1c < 10) {
          uVar4 = local_1c;
        }
        iVar9 = FUN_0040c590(pppppbVar11,"Texture.id",uVar4);
        bVar13 = false;
        if (iVar9 == 0) {
          if (uVar8 < 10) {
            uVar4 = 0xffffffff;
          }
          else {
            uVar4 = (uint)(uVar8 != 10);
          }
          bVar13 = uVar4 == 0;
        }
        if (!bVar13) {
          pppppbVar11 = local_2c;
          if (0xf < uVar7) {
            pppppbVar11 = (byte *****)local_2c[0];
          }
          uVar4 = 0x1a;
          if (uVar8 < 0x1a) {
            uVar4 = uVar8;
          }
          iVar9 = FUN_0040c590(pppppbVar11,"Texture.format.pixelFormat",uVar4);
          bVar13 = false;
          if (iVar9 == 0) {
            if (uVar8 < 0x1a) {
              uVar4 = 0xffffffff;
            }
            else {
              uVar4 = (uint)(uVar8 != 0x1a);
            }
            bVar13 = uVar4 == 0;
          }
          if (bVar13) {
            FUN_00688180();
            std::basic_istream<char,std::char_traits<char>_>::read
                      (*(basic_istream<char,std::char_traits<char>_> **)(in_ECX + 8),
                       (char *)&local_b0,(ulonglong)uVar3 << 0x20);
            local_a0 = local_b0;
            FUN_00688490();
            uVar5 = local_7c;
            iVar9 = local_78;
            goto LAB_00686f4b;
          }
          pppppbVar11 = local_2c;
          if (0xf < uVar7) {
            pppppbVar11 = (byte *****)local_2c[0];
          }
          uVar4 = 0x18;
          if (uVar8 < 0x18) {
            uVar4 = uVar8;
          }
          iVar9 = FUN_0040c590(pppppbVar11,"Texture.format.minFilter",uVar4);
          bVar13 = false;
          if (iVar9 == 0) {
            if (uVar8 < 0x18) {
              uVar4 = 0xffffffff;
            }
            else {
              uVar4 = (uint)(uVar8 != 0x18);
            }
            bVar13 = uVar4 == 0;
          }
          if (bVar13) {
            FUN_00688180();
            std::basic_istream<char,std::char_traits<char>_>::read
                      (*(basic_istream<char,std::char_traits<char>_> **)(in_ECX + 8),
                       (char *)&local_ac,(ulonglong)uVar3 << 0x20);
            local_9c = local_ac;
            FUN_00688490();
            uVar5 = local_7c;
            iVar9 = local_78;
            goto LAB_00686f4b;
          }
          pppppbVar11 = local_2c;
          if (0xf < uVar7) {
            pppppbVar11 = (byte *****)local_2c[0];
          }
          uVar4 = 0x18;
          if (uVar8 < 0x18) {
            uVar4 = uVar8;
          }
          iVar9 = FUN_0040c590(pppppbVar11,"Texture.format.maxFilter",uVar4);
          bVar13 = false;
          if (iVar9 == 0) {
            if (uVar8 < 0x18) {
              uVar4 = 0xffffffff;
            }
            else {
              uVar4 = (uint)(uVar8 != 0x18);
            }
            bVar13 = uVar4 == 0;
          }
          if (bVar13) {
            FUN_00688180();
            std::basic_istream<char,std::char_traits<char>_>::read
                      (*(basic_istream<char,std::char_traits<char>_> **)(in_ECX + 8),
                       (char *)&local_b4,(ulonglong)uVar3 << 0x20);
            local_98 = local_b4;
            FUN_00688490();
            uVar5 = local_7c;
            iVar9 = local_78;
            goto LAB_00686f4b;
          }
          pppppbVar11 = local_2c;
          if (0xf < uVar7) {
            pppppbVar11 = (byte *****)local_2c[0];
          }
          uVar7 = 0x1d;
          if (uVar8 < 0x1d) {
            uVar7 = uVar8;
          }
          iVar9 = FUN_0040c590(pppppbVar11,"Texture.format.horizontalWrap",uVar7);
          bVar13 = false;
          if (iVar9 == 0) {
            if (uVar8 < 0x1d) {
              uVar8 = 0xffffffff;
            }
            else {
              uVar8 = (uint)(uVar8 != 0x1d);
            }
            bVar13 = uVar8 == 0;
          }
          if (bVar13) {
            FUN_00688180();
            std::basic_istream<char,std::char_traits<char>_>::read
                      (*(basic_istream<char,std::char_traits<char>_> **)(in_ECX + 8),
                       (char *)&local_a4,(ulonglong)uVar3 << 0x20);
            local_94 = local_a4;
            FUN_00688490();
            uVar5 = local_7c;
            iVar9 = local_78;
            goto LAB_00686f4b;
          }
          cVar2 = FUN_00451470(local_2c,"Texture.format.verticalWrap");
          if (cVar2 != '\0') {
            FUN_00688180();
            local_90 = FUN_00681220();
            FUN_00688490();
            uVar5 = local_7c;
            iVar9 = local_78;
            goto LAB_00686f4b;
          }
          cVar2 = FUN_00451470(local_2c,"Texture.width");
          if (cVar2 != '\0') {
            FUN_00688180();
            uVar5 = FUN_00681220();
            local_7c = uVar5;
            FUN_00688490();
            iVar9 = local_78;
            goto LAB_00686f4b;
          }
          cVar2 = FUN_00451470(local_2c,"Texture.height");
          if (cVar2 != '\0') {
            FUN_00688180();
            local_80 = FUN_00681220();
            FUN_00688490();
            uVar5 = local_7c;
            iVar9 = local_78;
            goto LAB_00686f4b;
          }
          cVar2 = FUN_00451470(local_2c,"Texture.pixels");
          if (cVar2 == '\0') {
            cVar2 = FUN_00451470(local_2c,"Texture.compressedPixels");
            if (cVar2 == '\0') {
              FUN_006886f0();
              uVar5 = local_7c;
              iVar9 = local_78;
            }
            else {
              FUN_00688180();
              iVar9 = FUN_00681220();
              if (iVar9 < 1) goto LAB_00686a4a;
              FUN_005842d0(iVar9);
              local_8._0_1_ = 4;
              std::basic_istream<char,std::char_traits<char>_>::read
                        (*(basic_istream<char,std::char_traits<char>_> **)(in_ECX + 8),local_c0[0],
                         CONCAT44(uVar3,iVar9 >> 0x1f));
              FUN_00449540(local_c0,&local_8c);
              local_8._0_1_ = 2;
              FUN_005fb860();
              FUN_00688490();
              uVar5 = local_7c;
              iVar9 = local_78;
            }
            goto LAB_00686f4b;
          }
          FUN_00688180();
          iVar9 = FUN_00681220();
          if (0 < iVar9) {
            FUN_005870c0(iVar9);
            std::basic_istream<char,std::char_traits<char>_>::read
                      (*(basic_istream<char,std::char_traits<char>_> **)(in_ECX + 8),local_8c,
                       CONCAT44(uVar3,iVar9 >> 0x1f));
            FUN_00688490();
            uVar5 = local_7c;
            iVar9 = local_78;
            goto LAB_00686f4b;
          }
          goto LAB_00686a4a;
        }
        FUN_00688180();
        std::basic_istream<char,std::char_traits<char>_>::read
                  (*(basic_istream<char,std::char_traits<char>_> **)(in_ECX + 8),(char *)&local_a8,
                   (ulonglong)uVar3 << 0x20);
        iVar9 = local_a8;
        local_78 = local_a8;
        FUN_00688490();
        uVar5 = local_7c;
      }
LAB_00686f4b:
      local_8 = CONCAT31(local_8._1_3_,1);
      if (0xf < local_18) {
                    /* WARNING: Subroutine does not return */
        operator_delete(local_2c[0]);
      }
      cVar2 = FUN_00688490();
    } while (cVar2 == '\0');
    if (iVar9 != -1) {
      iVar9 = (**(code **)(**(int **)(in_ECX + 0x70) + 8))
                        (uVar5,local_80,local_8c,&local_a0,&local_44,0);
      uVar5 = *(undefined4 *)(iVar9 + 0x4c);
      puVar10 = (undefined4 *)FUN_00468910(&local_78);
      *puVar10 = uVar5;
    }
  }
  if (local_8c != (char *)0x0) {
                    /* WARNING: Subroutine does not return */
    operator_delete(local_8c);
  }
  if (local_30 < 8) {
    ExceptionList = local_10;
    __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
    return;
  }
                    /* WARNING: Subroutine does not return */
  operator_delete(local_44);
}


/* FUN_00686ff0 @ 00686ff0  kind=gamemisc  attributed-by=none  size=1092 */

void FUN_00686ff0(void)

{
  uint uVar1;
  char cVar2;
  int *piVar3;
  uint uVar4;
  undefined4 uVar5;
  int *piVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  byte ****ppppbVar10;
  char *pcVar11;
  bool bVar12;
  undefined4 local_78;
  undefined4 local_68;
  uint local_64;
  int *local_60;
  void *local_5c [5];
  uint local_48;
  void *local_44 [4];
  undefined4 local_34;
  uint local_30;
  byte ***local_2c [4];
  uint local_1c;
  uint local_18;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006f8de8;
  local_10 = ExceptionList;
  local_14 = DAT_0076aa78 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  FUN_00688180(local_14);
  local_64 = 7;
  local_68 = 0;
  local_78 = (void *)((uint)local_78._2_2_ << 0x10);
  FUN_0040f7a0(&PTR_006fccac,0);
  local_8 = 0;
  piVar3 = (int *)FUN_00650360(&local_78);
  local_8 = 0xffffffff;
  local_60 = piVar3;
  if (7 < local_64) {
                    /* WARNING: Subroutine does not return */
    operator_delete(local_78);
  }
  local_64 = 7;
  local_68 = 0;
  local_78 = (void *)((uint)local_78 & 0xffff0000);
  cVar2 = FUN_00688490();
  do {
    if (cVar2 != '\0') {
      (**(code **)(*piVar3 + 4))(1);
      ExceptionList = local_10;
      __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
      return;
    }
    FUN_00688220(local_2c,1);
    uVar8 = local_18;
    uVar9 = local_1c;
    ppppbVar10 = local_2c;
    if (0xf < local_18) {
      ppppbVar10 = (byte ****)local_2c[0];
    }
    uVar4 = 0x13;
    if (local_1c < 0x13) {
      uVar4 = local_1c;
    }
    local_8 = 1;
    if (uVar4 == 0) {
LAB_00687121:
      if (local_1c < 0x13) {
        uVar4 = 0xffffffff;
      }
      else {
        uVar4 = (uint)(local_1c != 0x13);
      }
      bVar12 = uVar4 == 0;
    }
    else {
      pcVar11 = "Transformation.name";
      while (uVar1 = uVar4 - 4, 3 < uVar4) {
        if (*ppppbVar10 != *(byte ****)pcVar11) goto LAB_006870e7;
        ppppbVar10 = ppppbVar10 + 1;
        pcVar11 = pcVar11 + 4;
        uVar4 = uVar1;
      }
      if (uVar1 == 0xfffffffc) {
LAB_0068711b:
        uVar4 = 0;
      }
      else {
LAB_006870e7:
        bVar12 = *(byte *)ppppbVar10 < (byte)*pcVar11;
        if ((*(byte *)ppppbVar10 == *pcVar11) &&
           ((uVar1 == 0xfffffffd ||
            ((bVar12 = *(byte *)((int)ppppbVar10 + 1) < (byte)pcVar11[1],
             *(byte *)((int)ppppbVar10 + 1) == pcVar11[1] &&
             ((uVar1 == 0xfffffffe ||
              ((bVar12 = *(byte *)((int)ppppbVar10 + 2) < (byte)pcVar11[2],
               *(byte *)((int)ppppbVar10 + 2) == pcVar11[2] &&
               ((uVar1 == 0xffffffff ||
                (bVar12 = *(byte *)((int)ppppbVar10 + 3) < (byte)pcVar11[3],
                *(byte *)((int)ppppbVar10 + 3) == pcVar11[3])))))))))))) goto LAB_0068711b;
        uVar4 = -(uint)bVar12 | 1;
      }
      bVar12 = false;
      if (uVar4 == 0) goto LAB_00687121;
    }
    if (bVar12) {
      FUN_00688180();
      uVar5 = FUN_00688510(local_5c);
      local_8._0_1_ = 2;
      piVar6 = (int *)FUN_006089c0(local_44,uVar5);
      piVar3 = local_60;
      local_8 = CONCAT31(local_8._1_3_,3);
      if (local_60 + 3 != piVar6) {
        FUN_0040f680(piVar6,0,0xffffffff);
      }
      if (7 < local_30) {
                    /* WARNING: Subroutine does not return */
        operator_delete(local_44[0]);
      }
      bVar12 = local_48 < 0x10;
      local_30 = 7;
      local_34 = 0;
      local_44[0] = (void *)((uint)local_44[0] & 0xffff0000);
LAB_00687261:
      local_8 = CONCAT31(local_8._1_3_,1);
      if (!bVar12) {
                    /* WARNING: Subroutine does not return */
        operator_delete(local_5c[0]);
      }
      FUN_00688490();
    }
    else {
      ppppbVar10 = local_2c;
      if (0xf < local_18) {
        ppppbVar10 = (byte ****)local_2c[0];
      }
      uVar4 = 0x14;
      if (local_1c < 0x14) {
        uVar4 = local_1c;
      }
      if (uVar4 == 0) {
LAB_00687218:
        if (local_1c < 0x14) {
          uVar4 = 0xffffffff;
        }
        else {
          uVar4 = (uint)(local_1c != 0x14);
        }
        bVar12 = uVar4 == 0;
      }
      else {
        pcVar11 = "Transformation.wname";
        while (uVar1 = uVar4 - 4, 3 < uVar4) {
          if (*ppppbVar10 != *(byte ****)pcVar11) goto LAB_006871de;
          ppppbVar10 = ppppbVar10 + 1;
          pcVar11 = pcVar11 + 4;
          uVar4 = uVar1;
        }
        if (uVar1 == 0xfffffffc) {
LAB_00687212:
          uVar4 = 0;
        }
        else {
LAB_006871de:
          bVar12 = *(byte *)ppppbVar10 < (byte)*pcVar11;
          if ((*(byte *)ppppbVar10 == *pcVar11) &&
             ((uVar1 == 0xfffffffd ||
              ((bVar12 = *(byte *)((int)ppppbVar10 + 1) < (byte)pcVar11[1],
               *(byte *)((int)ppppbVar10 + 1) == pcVar11[1] &&
               ((uVar1 == 0xfffffffe ||
                ((bVar12 = *(byte *)((int)ppppbVar10 + 2) < (byte)pcVar11[2],
                 *(byte *)((int)ppppbVar10 + 2) == pcVar11[2] &&
                 ((uVar1 == 0xffffffff ||
                  (bVar12 = *(byte *)((int)ppppbVar10 + 3) < (byte)pcVar11[3],
                  *(byte *)((int)ppppbVar10 + 3) == pcVar11[3])))))))))))) goto LAB_00687212;
          uVar4 = -(uint)bVar12 | 1;
        }
        bVar12 = false;
        if (uVar4 == 0) goto LAB_00687218;
      }
      if (bVar12) {
        FUN_00688180();
        piVar6 = (int *)FUN_00688610(local_5c);
        piVar3 = local_60;
        local_8 = CONCAT31(local_8._1_3_,4);
        if (local_60 + 3 != piVar6) {
          FUN_0040f680(piVar6,0,0xffffffff);
        }
        bVar12 = local_48 < 8;
        goto LAB_00687261;
      }
      ppppbVar10 = local_2c;
      if (0xf < local_18) {
        ppppbVar10 = (byte ****)local_2c[0];
      }
      uVar4 = 0x1a;
      if (local_1c < 0x1a) {
        uVar4 = local_1c;
      }
      iVar7 = FUN_0040c590(ppppbVar10,"Transformation.translation",uVar4);
      piVar3 = local_60;
      bVar12 = false;
      if (iVar7 == 0) {
        if (uVar9 < 0x1a) {
          uVar4 = 0xffffffff;
        }
        else {
          uVar4 = (uint)(uVar9 != 0x1a);
        }
        bVar12 = uVar4 == 0;
      }
      if (bVar12) {
        FUN_00680b40(local_60 + 0x12);
      }
      else {
        ppppbVar10 = local_2c;
        if (0xf < uVar8) {
          ppppbVar10 = (byte ****)local_2c[0];
        }
        uVar4 = 0x17;
        if (uVar9 < 0x17) {
          uVar4 = uVar9;
        }
        iVar7 = FUN_0040c590(ppppbVar10,"Transformation.rotation",uVar4);
        piVar3 = local_60;
        bVar12 = false;
        if (iVar7 == 0) {
          if (uVar9 < 0x17) {
            uVar4 = 0xffffffff;
          }
          else {
            uVar4 = (uint)(uVar9 != 0x17);
          }
          bVar12 = uVar4 == 0;
        }
        if (bVar12) {
          FUN_00680d80(local_60 + 0x3e);
        }
        else {
          ppppbVar10 = local_2c;
          if (0xf < uVar8) {
            ppppbVar10 = (byte ****)local_2c[0];
          }
          uVar4 = 0x14;
          if (uVar9 < 0x14) {
            uVar4 = uVar9;
          }
          iVar7 = FUN_0040c590(ppppbVar10,"Transformation.pivot",uVar4);
          piVar3 = local_60;
          bVar12 = false;
          if (iVar7 == 0) {
            if (uVar9 < 0x14) {
              uVar4 = 0xffffffff;
            }
            else {
              uVar4 = (uint)(uVar9 != 0x14);
            }
            bVar12 = uVar4 == 0;
          }
          if (bVar12) {
            FUN_00680b40(local_60 + 0x54);
          }
          else {
            ppppbVar10 = local_2c;
            if (0xf < uVar8) {
              ppppbVar10 = (byte ****)local_2c[0];
            }
            uVar8 = 0x1a;
            if (uVar9 < 0x1a) {
              uVar8 = uVar9;
            }
            iVar7 = FUN_0040c590(ppppbVar10,"Transformation.deformation",uVar8);
            piVar3 = local_60;
            bVar12 = false;
            if (iVar7 == 0) {
              if (uVar9 < 0x1a) {
                uVar9 = 0xffffffff;
              }
              else {
                uVar9 = (uint)(uVar9 != 0x1a);
              }
              bVar12 = uVar9 == 0;
            }
            if (bVar12) {
              FUN_006808f0(local_60 + 0x28);
            }
            else {
              FUN_006886f0();
              piVar3 = local_60;
            }
          }
        }
      }
    }
    local_8 = 0xffffffff;
    if (0xf < local_18) {
                    /* WARNING: Subroutine does not return */
      operator_delete(local_2c[0]);
    }
    local_18 = 0xf;
    local_1c = 0;
    local_2c[0] = (byte ***)((uint)local_2c[0] & 0xffffff00);
    cVar2 = FUN_00688490();
  } while( true );
}


/* FUN_006880c0 @ 006880c0  kind=gamemisc  attributed-by=none  size=178 */

/* WARNING: Removing unreachable block (ram,0x00688164) */

void FUN_006880c0(char *param_1,uint param_2,uint *param_3)

{
  char *pcVar1;
  char cVar2;
  uint uVar3;
  int iVar4;
  char *pcVar5;
  uint uVar6;
  uint local_8;
  
  uVar3 = *param_3;
  FUN_005870c0(param_2);
  if (0 < (int)param_2) {
    local_8 = param_2;
    pcVar5 = param_1;
    do {
      pcVar1 = pcVar5 + (uVar3 % param_2 - (int)param_1);
      uVar6 = (uint)pcVar1 % param_2 & 0x80000007;
      if ((int)uVar6 < 0) {
        uVar6 = (uVar6 - 1 | 0xfffffff8) + 1;
      }
      cVar2 = *pcVar5;
      pcVar5 = pcVar5 + 1;
      local_8 = local_8 - 1;
      *(char *)((uint)pcVar1 % param_2) = cVar2 - *(char *)(uVar6 + (int)param_3);
    } while (local_8 != 0);
    if (0 < (int)param_2) {
      iVar4 = -(int)param_1;
      do {
        *param_1 = param_1[iVar4];
        param_1 = param_1 + 1;
        param_2 = param_2 - 1;
      } while (param_2 != 0);
    }
  }
  return;
}


/* FUN_00688220 @ 00688220  kind=gamemisc  attributed-by=none  size=610 */

void FUN_00688220(undefined1 *param_1,char param_2)

{
  uint uVar1;
  void **ppvVar2;
  undefined4 uVar3;
  int in_ECX;
  undefined4 extraout_EDX;
  undefined4 extraout_EDX_00;
  undefined4 uVar4;
  int local_4c;
  int local_48;
  void *local_44 [4];
  undefined4 local_34;
  uint local_30;
  void *local_2c [4];
  undefined4 local_1c;
  uint local_18;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006f9230;
  local_10 = ExceptionList;
  uVar1 = DAT_0076aa78 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  uVar4 = 0;
  local_14 = uVar1;
  std::basic_istream<char,std::char_traits<char>_>::read
            (*(basic_istream<char,std::char_traits<char>_> **)(in_ECX + 8),(char *)&local_48,
             (ulonglong)uVar1 << 0x20);
  if ((*(byte *)(*(int *)(**(int **)(in_ECX + 8) + 4) + 0xc + (int)*(int **)(in_ECX + 8)) & 1) == 0)
  {
    if (local_48 == 0) {
      FUN_00688180();
      std::basic_istream<char,std::char_traits<char>_>::read
                (*(basic_istream<char,std::char_traits<char>_> **)(in_ECX + 8),(char *)&local_48,
                 (ulonglong)uVar1 << 0x20);
      local_4c = local_48;
      local_18 = 0xf;
      local_1c = 0;
      local_2c[0] = (void *)((uint)local_2c[0] & 0xffffff00);
      local_8 = 0;
      if ((param_2 == '\0') || (*(int *)(in_ECX + 0x10) == 0 && *(int *)(in_ECX + 0x14) == 0)) {
        ppvVar2 = (void **)FUN_00688510(local_44);
        if (local_2c != ppvVar2) {
          if (0xf < local_18) {
                    /* WARNING: Subroutine does not return */
            operator_delete(local_2c[0]);
          }
          local_18 = 0xf;
          local_1c = 0;
          local_2c[0] = (void *)((uint)local_2c[0] & 0xffffff00);
          FUN_00405060(ppvVar2);
        }
        if (0xf < local_30) {
                    /* WARNING: Subroutine does not return */
          operator_delete(local_44[0]);
        }
      }
      else {
        std::basic_istream<char,std::char_traits<char>_>::read
                  (*(basic_istream<char,std::char_traits<char>_> **)(in_ECX + 8),(char *)&local_48,
                   (ulonglong)uVar1 << 0x20);
        FUN_005870c0(local_48);
        local_8._0_1_ = 1;
        std::basic_istream<char,std::char_traits<char>_>::read
                  (*(basic_istream<char,std::char_traits<char>_> **)(in_ECX + 8),(char *)0x0,
                   CONCAT44(uVar1,local_48 >> 0x1f));
        FUN_006880c0(0,local_48,in_ECX + 0x10);
        local_30 = 0xf;
        local_34 = 0;
        local_44[0] = (void *)((uint)local_44[0] & 0xffffff00);
        FUN_00583cd0(0,0,local_4c);
        FUN_00404090(local_44);
        FUN_00403eb0();
        local_8 = (uint)local_8._1_3_ << 8;
        FUN_005fb860();
      }
      ppvVar2 = (void **)FUN_0064e0f0(&local_4c);
      if (ppvVar2 != local_2c) {
        FUN_0040c0a0(local_2c,0,0xffffffff);
      }
      FUN_00688490();
      std::basic_istream<char,std::char_traits<char>_>::read
                (*(basic_istream<char,std::char_traits<char>_> **)(in_ECX + 8),(char *)&local_4c,
                 (ulonglong)uVar1 << 0x20);
      local_48 = local_4c;
      local_8 = 0xffffffff;
      if (0xf < local_18) {
                    /* WARNING: Subroutine does not return */
        operator_delete(local_2c[0]);
      }
    }
    uVar3 = FUN_0064e0f0(&local_48);
    *(undefined4 *)(param_1 + 0x14) = 0xf;
    *(undefined4 *)(param_1 + 0x10) = 0;
    *param_1 = 0;
    FUN_0040c0a0(uVar3,0,0xffffffff);
    uVar3 = extraout_EDX_00;
  }
  else {
    *(undefined4 *)(param_1 + 0x14) = 0xf;
    *(undefined4 *)(param_1 + 0x10) = 0;
    *param_1 = 0;
    FUN_0040c280(&DAT_006fc918,0);
    uVar3 = extraout_EDX;
  }
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc,uVar3,uVar4);
  return;
}


/* FUN_006886f0 @ 006886f0  kind=gamemisc  attributed-by=none  size=114 */

void FUN_006886f0(void)

{
  undefined8 *puVar1;
  int in_ECX;
  uint unaff_EDI;
  undefined8 local_20;
  uint local_8;
  
  std::basic_istream<char,std::char_traits<char>_>::read
            (*(basic_istream<char,std::char_traits<char>_> **)(in_ECX + 8),(char *)&local_8,
             (ulonglong)unaff_EDI << 0x20);
  puVar1 = (undefined8 *)
           std::basic_istream<char,std::char_traits<char>_>::tellg
                     (*(basic_istream<char,std::char_traits<char>_> **)(in_ECX + 8));
  local_20._0_4_ = (uint)*puVar1;
  local_20._4_4_ = (int)((ulonglong)*puVar1 >> 0x20);
  local_20 = CONCAT44(local_20._4_4_ + ((int)local_8 >> 0x1f) + (uint)CARRY4((uint)local_20,local_8)
                      ,(uint)local_20 + local_8);
  std::basic_istream<char,std::char_traits<char>_>::seekg
            (*(basic_istream<char,std::char_traits<char>_> **)(in_ECX + 8),local_20,puVar1[1],
             (int)puVar1[2],(int)((ulonglong)puVar1[2] >> 0x20));
  return;
}


/* FUN_0068a710 @ 0068a710  kind=gamemisc  attributed-by=none  size=198 */

void FUN_0068a710(void)

{
  int in_ECX;
  int iVar1;
  int *piVar2;
  
  piVar2 = *(int **)(in_ECX + 0x2c4);
  if (piVar2 != (int *)0x0) {
    (**(code **)(*piVar2 + 8))(piVar2);
    *(undefined4 *)(in_ECX + 0x2c4) = 0;
  }
  iVar1 = 0;
  if (0 < (int)(*(int *)(in_ECX + 0x3c) - *(int *)(in_ECX + 0x38) & 0xfffffffcU)) {
    do {
      FUN_006504c0(*(undefined4 *)(*(int *)(in_ECX + 0x38) + iVar1 * 4));
      iVar1 = iVar1 + 1;
    } while (iVar1 < *(int *)(in_ECX + 0x3c) - *(int *)(in_ECX + 0x38) >> 2);
  }
  *(undefined4 *)(in_ECX + 0x3c) = *(undefined4 *)(in_ECX + 0x38);
  piVar2 = (int *)**(int **)(in_ECX + 0x7c);
  if (piVar2 != *(int **)(in_ECX + 0x7c)) {
    do {
      if ((*(int *)(piVar2[2] + 0x3c) != 0) &&
         (iVar1 = __RTDynamicCast(*(int *)(piVar2[2] + 0x3c),0,
                                  &plasma::RenderSurface::RTTI_Type_Descriptor,
                                  &plasma::D3D9RenderSurface::RTTI_Type_Descriptor,0), iVar1 != 0))
      {
        FUN_0068d300();
      }
      piVar2 = (int *)*piVar2;
    } while (piVar2 != (int *)*(int *)(in_ECX + 0x7c));
  }
  piVar2 = (int *)**(int **)(in_ECX + 0x2b8);
  if (piVar2 != *(int **)(in_ECX + 0x2b8)) {
    do {
      FUN_0068ab30();
      piVar2 = (int *)*piVar2;
    } while (piVar2 != (int *)*(int *)(in_ECX + 0x2b8));
  }
  FUN_006504c0(*(undefined4 *)(in_ECX + 0x44));
  *(undefined4 *)(in_ECX + 0x44) = 0;
  return;
}


/* FUN_0068b6a0 @ 0068b6a0  kind=gamemisc  attributed-by=none  size=336 */

void FUN_0068b6a0(void)

{
  undefined4 *puVar1;
  int *piVar2;
  void *in_ECX;
  void *local_8;
  
  local_8 = in_ECX;
  if ((*(int *)((int)in_ECX + 0x130) != 0) &&
     (puVar1 = (undefined4 *)((int)in_ECX + 0x128), *(int *)((int)in_ECX + 0x128) == 0)) {
    piVar2 = *(int **)(*(int *)((int)in_ECX + 0x124) + 0x2c0);
    (**(code **)(*piVar2 + 0x68))
              (piVar2,(*(int *)((int)in_ECX + 200) - *(int *)((int)in_ECX + 0xc4) >> 3) * 0x30,0x208
               ,0,0,puVar1,0);
    (**(code **)(*(int *)*puVar1 + 0x2c))
              ((int *)*puVar1,0,
               (*(int *)((int)in_ECX + 200) - *(int *)((int)in_ECX + 0xc4) >> 3) * 0x30,&local_8,
               0x2000);
    memcpy(local_8,*(void **)((int)in_ECX + 0x130),
           (*(int *)((int)in_ECX + 200) - *(int *)((int)in_ECX + 0xc4) >> 3) * 0x30);
    (**(code **)(*(int *)*puVar1 + 0x30))((int *)*puVar1);
  }
  if ((*(int *)((int)in_ECX + 0x134) != 0) &&
     (puVar1 = (undefined4 *)((int)in_ECX + 300), *(int *)((int)in_ECX + 300) == 0)) {
    piVar2 = *(int **)(*(int *)((int)in_ECX + 0x124) + 0x2c0);
    (**(code **)(*piVar2 + 0x6c))
              (piVar2,*(int *)((int)in_ECX + 0xf8) - *(int *)((int)in_ECX + 0xf4) & 0xfffffffc,0x208
               ,0x66,0,puVar1,0);
    (**(code **)(*(int *)*puVar1 + 0x2c))
              ((int *)*puVar1,0,
               *(int *)((int)in_ECX + 0xf8) - *(int *)((int)in_ECX + 0xf4) & 0xfffffffc,&local_8,
               0x2000);
    memcpy(local_8,*(void **)((int)in_ECX + 0x134),
           *(int *)((int)in_ECX + 0xf8) - *(int *)((int)in_ECX + 0xf4) & 0xfffffffc);
    (**(code **)(*(int *)*puVar1 + 0x30))((int *)*puVar1);
  }
  return;
}


/* __ArrayUnwind @ 0068d86f  kind=gamemisc  attributed-by=none  size=50 */

/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */
/* WARNING: Function: __SEH_epilog4 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    void __stdcall __ArrayUnwind(void *,unsigned int,int,void (__thiscall*)(void *))
   
   Library: Visual Studio 2012 Release */

void __ArrayUnwind(void *param_1,uint param_2,int param_3,_func_void_void_ptr *param_4)

{
  void *in_stack_ffffffc8;
  
  while( true ) {
    param_3 = param_3 + -1;
    if (param_3 < 0) break;
    (*param_4)(in_stack_ffffffc8);
  }
  return;
}


/* FUN_0068d910 @ 0068d910  kind=gamemisc  attributed-by=none  size=28 */

ulonglong FUN_0068d910(void)

{
  ulonglong uVar1;
  uint uVar2;
  undefined4 in_EDX;
  float fVar3;
  float10 in_ST0;
  uint uStack_20;
  float fStack_1c;
  
  if (DAT_0076e2a0 == 0) {
    uVar1 = (ulonglong)ROUND(in_ST0);
    uStack_20 = (uint)uVar1;
    fStack_1c = (float)(uVar1 >> 0x20);
    fVar3 = (float)in_ST0;
    if ((uStack_20 != 0) || (fVar3 = fStack_1c, (uVar1 & 0x7fffffff00000000) != 0)) {
      if ((int)fVar3 < 0) {
        uVar1 = uVar1 + (0x80000000 < (uint)-(float)(in_ST0 - (float10)(longlong)uVar1));
      }
      else {
        uVar2 = (uint)(0x80000000 < (uint)(float)(in_ST0 - (float10)(longlong)uVar1));
        uVar1 = CONCAT44((int)fStack_1c - (uint)(uStack_20 < uVar2),uStack_20 - uVar2);
      }
    }
    return uVar1;
  }
  return CONCAT44(in_EDX,(int)in_ST0);
}


/* FUN_0068d946 @ 0068d946  kind=gamemisc  attributed-by=none  size=117 */

ulonglong FUN_0068d946(void)

{
  ulonglong uVar1;
  uint uVar2;
  float fVar3;
  float10 in_ST0;
  undefined4 local_20;
  undefined4 uStack_1c;
  
  uVar1 = (ulonglong)ROUND(in_ST0);
  local_20 = (uint)uVar1;
  uStack_1c = (float)(uVar1 >> 0x20);
  fVar3 = (float)in_ST0;
  if ((local_20 != 0) || (fVar3 = uStack_1c, (uVar1 & 0x7fffffff00000000) != 0)) {
    if ((int)fVar3 < 0) {
      uVar1 = uVar1 + (0x80000000 < (uint)-(float)(in_ST0 - (float10)(longlong)uVar1));
    }
    else {
      uVar2 = (uint)(0x80000000 < (uint)(float)(in_ST0 - (float10)(longlong)uVar1));
      uVar1 = CONCAT44((int)uStack_1c - (uint)(local_20 < uVar2),local_20 - uVar2);
    }
  }
  return uVar1;
}


/* __alldiv @ 0068d9e0  kind=gamemisc  attributed-by=none  size=170 */

/* Library Function - Single Match
    __alldiv
   
   Libraries: Visual Studio 2012 Release, Visual Studio 2015 Release, Visual Studio 2017 Release,
   Visual Studio 2019 Release */

undefined8 __alldiv(uint param_1,uint param_2,uint param_3,uint param_4)

{
  ulonglong uVar1;
  longlong lVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  bool bVar10;
  char cVar11;
  uint uVar9;
  
  cVar11 = (int)param_2 < 0;
  if ((bool)cVar11) {
    bVar10 = param_1 != 0;
    param_1 = -param_1;
    param_2 = -(uint)bVar10 - param_2;
  }
  if ((int)param_4 < 0) {
    cVar11 = cVar11 + '\x01';
    bVar10 = param_3 != 0;
    param_3 = -param_3;
    param_4 = -(uint)bVar10 - param_4;
  }
  uVar3 = param_1;
  uVar5 = param_3;
  uVar6 = param_2;
  uVar9 = param_4;
  if (param_4 == 0) {
    uVar3 = param_2 / param_3;
    iVar4 = (int)(((ulonglong)param_2 % (ulonglong)param_3 << 0x20 | (ulonglong)param_1) /
                 (ulonglong)param_3);
  }
  else {
    do {
      uVar8 = uVar9 >> 1;
      uVar5 = uVar5 >> 1 | (uint)((uVar9 & 1) != 0) << 0x1f;
      uVar7 = uVar6 >> 1;
      uVar3 = uVar3 >> 1 | (uint)((uVar6 & 1) != 0) << 0x1f;
      uVar6 = uVar7;
      uVar9 = uVar8;
    } while (uVar8 != 0);
    uVar1 = CONCAT44(uVar7,uVar3) / (ulonglong)uVar5;
    iVar4 = (int)uVar1;
    lVar2 = (ulonglong)param_3 * (uVar1 & 0xffffffff);
    uVar3 = (uint)((ulonglong)lVar2 >> 0x20);
    uVar5 = uVar3 + iVar4 * param_4;
    if (((CARRY4(uVar3,iVar4 * param_4)) || (param_2 < uVar5)) ||
       ((param_2 <= uVar5 && (param_1 < (uint)lVar2)))) {
      iVar4 = iVar4 + -1;
    }
    uVar3 = 0;
  }
  if (cVar11 == '\x01') {
    bVar10 = iVar4 != 0;
    iVar4 = -iVar4;
    uVar3 = -(uint)bVar10 - uVar3;
  }
  return CONCAT44(uVar3,iVar4);
}


/* `eh_vector_constructor_iterator' @ 0068dac4  kind=gamemisc  attributed-by=none  size=76 */

/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */
/* WARNING: Function: __SEH_epilog4 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    void __stdcall `eh vector constructor iterator'(void *,unsigned int,int,void (__thiscall*)(void
   *),void (__thiscall*)(void *))
   
   Library: Visual Studio 2012 Release */

void _eh_vector_constructor_iterator_
               (void *param_1,uint param_2,int param_3,_func_void_void_ptr *param_4,
               _func_void_void_ptr *param_5)

{
  int iVar1;
  void *in_stack_ffffffcc;
  
  for (iVar1 = 0; iVar1 < param_3; iVar1 = iVar1 + 1) {
    (*param_4)(in_stack_ffffffcc);
  }
  FUN_0068db1c();
  return;
}


/* ___report_securityfailure @ 0068dcb0  kind=gamemisc  attributed-by=none  size=206 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Library Function - Single Match
    ___report_securityfailure
   
   Library: Visual Studio 2012 Release */

void ___report_securityfailure(undefined4 param_1)

{
  code *pcVar1;
  uint uVar2;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 uVar3;
  uint extraout_EDX;
  undefined4 unaff_EBX;
  undefined4 unaff_EBP;
  undefined4 unaff_ESI;
  undefined4 unaff_EDI;
  undefined2 in_ES;
  undefined2 in_CS;
  undefined2 in_SS;
  undefined2 in_DS;
  undefined2 in_FS;
  undefined2 in_GS;
  byte bVar4;
  byte bVar5;
  byte in_AF;
  byte bVar6;
  byte bVar7;
  byte in_TF;
  byte in_IF;
  byte bVar8;
  byte in_NT;
  byte in_AC;
  byte in_VIF;
  byte in_VIP;
  byte in_ID;
  longlong lVar9;
  undefined4 unaff_retaddr;
  
  uVar2 = IsProcessorFeaturePresent(0x17);
  bVar4 = 0;
  bVar8 = 0;
  bVar7 = (int)uVar2 < 0;
  bVar6 = uVar2 == 0;
  bVar5 = (POPCOUNT(uVar2 & 0xff) & 1U) == 0;
  lVar9 = (ulonglong)extraout_EDX << 0x20;
  uVar3 = extraout_ECX;
  if (!(bool)bVar6) {
    pcVar1 = (code *)swi(0x29);
    lVar9 = (*pcVar1)();
    uVar3 = extraout_ECX_00;
  }
  _DAT_0076e058 = (undefined4)((ulonglong)lVar9 >> 0x20);
  _DAT_0076e060 = (undefined4)lVar9;
  _DAT_0076e070 =
       (uint)(in_NT & 1) * 0x4000 | (uint)(bVar8 & 1) * 0x800 | (uint)(in_IF & 1) * 0x200 |
       (uint)(in_TF & 1) * 0x100 | (uint)(bVar7 & 1) * 0x80 | (uint)(bVar6 & 1) * 0x40 |
       (uint)(in_AF & 1) * 0x10 | (uint)(bVar5 & 1) * 4 | (uint)(bVar4 & 1) |
       (uint)(in_ID & 1) * 0x200000 | (uint)(in_VIP & 1) * 0x100000 | (uint)(in_VIF & 1) * 0x80000 |
       (uint)(in_AC & 1) * 0x40000;
  _DAT_0076e074 = &param_1;
  _DAT_0076df60 = 0xc0000409;
  _DAT_0076df64 = 1;
  _DAT_0076df70 = 1;
  DAT_0076df74 = param_1;
  _DAT_0076df6c = unaff_retaddr;
  _DAT_0076e03c = in_GS;
  _DAT_0076e040 = in_FS;
  _DAT_0076e044 = in_ES;
  _DAT_0076e048 = in_DS;
  _DAT_0076e04c = unaff_EDI;
  _DAT_0076e050 = unaff_ESI;
  _DAT_0076e054 = unaff_EBX;
  _DAT_0076e05c = uVar3;
  _DAT_0076e064 = unaff_EBP;
  DAT_0076e068 = unaff_retaddr;
  _DAT_0076e06c = in_CS;
  _DAT_0076e078 = in_SS;
  ___raise_securityfailure(&PTR_DAT_00722648);
  return;
}


/* __alldvrm @ 0068dd90  kind=gamemisc  attributed-by=none  size=223 */

/* Library Function - Single Match
    __alldvrm
   
   Library: Visual Studio */

undefined8 __alldvrm(uint param_1,uint param_2,uint param_3,uint param_4)

{
  ulonglong uVar1;
  longlong lVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  bool bVar10;
  char cVar11;
  uint uVar9;
  
  cVar11 = (int)param_2 < 0;
  if ((bool)cVar11) {
    bVar10 = param_1 != 0;
    param_1 = -param_1;
    param_2 = -(uint)bVar10 - param_2;
  }
  if ((int)param_4 < 0) {
    cVar11 = cVar11 + '\x01';
    bVar10 = param_3 != 0;
    param_3 = -param_3;
    param_4 = -(uint)bVar10 - param_4;
  }
  uVar3 = param_1;
  uVar5 = param_3;
  uVar6 = param_2;
  uVar9 = param_4;
  if (param_4 == 0) {
    uVar3 = param_2 / param_3;
    iVar4 = (int)(((ulonglong)param_2 % (ulonglong)param_3 << 0x20 | (ulonglong)param_1) /
                 (ulonglong)param_3);
  }
  else {
    do {
      uVar8 = uVar9 >> 1;
      uVar5 = uVar5 >> 1 | (uint)((uVar9 & 1) != 0) << 0x1f;
      uVar7 = uVar6 >> 1;
      uVar3 = uVar3 >> 1 | (uint)((uVar6 & 1) != 0) << 0x1f;
      uVar6 = uVar7;
      uVar9 = uVar8;
    } while (uVar8 != 0);
    uVar1 = CONCAT44(uVar7,uVar3) / (ulonglong)uVar5;
    iVar4 = (int)uVar1;
    lVar2 = (ulonglong)param_3 * (uVar1 & 0xffffffff);
    uVar3 = (uint)((ulonglong)lVar2 >> 0x20);
    uVar5 = uVar3 + iVar4 * param_4;
    if (((CARRY4(uVar3,iVar4 * param_4)) || (param_2 < uVar5)) ||
       ((param_2 <= uVar5 && (param_1 < (uint)lVar2)))) {
      iVar4 = iVar4 + -1;
    }
    uVar3 = 0;
  }
  if (cVar11 == '\x01') {
    bVar10 = iVar4 != 0;
    iVar4 = -iVar4;
    uVar3 = -(uint)bVar10 - uVar3;
  }
  return CONCAT44(uVar3,iVar4);
}


/* __allrem @ 0068de70  kind=gamemisc  attributed-by=none  size=178 */

/* Library Function - Single Match
    __allrem
   
   Library: Visual Studio */

undefined8 __allrem(uint param_1,uint param_2,uint param_3,uint param_4)

{
  ulonglong uVar1;
  longlong lVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  bool bVar12;
  bool bVar13;
  
  bVar13 = (int)param_2 < 0;
  if (bVar13) {
    bVar12 = param_1 != 0;
    param_1 = -param_1;
    param_2 = -(uint)bVar12 - param_2;
  }
  uVar11 = (uint)bVar13;
  if ((int)param_4 < 0) {
    bVar13 = param_3 != 0;
    param_3 = -param_3;
    param_4 = -(uint)bVar13 - param_4;
  }
  uVar3 = param_1;
  uVar4 = param_3;
  uVar8 = param_2;
  uVar9 = param_4;
  if (param_4 == 0) {
    iVar5 = (int)(((ulonglong)param_2 % (ulonglong)param_3 << 0x20 | (ulonglong)param_1) %
                 (ulonglong)param_3);
    iVar6 = 0;
    if ((int)(uVar11 - 1) < 0) goto LAB_0068df1d;
  }
  else {
    do {
      uVar10 = uVar9 >> 1;
      uVar4 = uVar4 >> 1 | (uint)((uVar9 & 1) != 0) << 0x1f;
      uVar7 = uVar8 >> 1;
      uVar3 = uVar3 >> 1 | (uint)((uVar8 & 1) != 0) << 0x1f;
      uVar8 = uVar7;
      uVar9 = uVar10;
    } while (uVar10 != 0);
    uVar1 = CONCAT44(uVar7,uVar3) / (ulonglong)uVar4;
    uVar3 = (int)uVar1 * param_4;
    lVar2 = (uVar1 & 0xffffffff) * (ulonglong)param_3;
    uVar8 = (uint)((ulonglong)lVar2 >> 0x20);
    uVar4 = (uint)lVar2;
    uVar9 = uVar8 + uVar3;
    if (((CARRY4(uVar8,uVar3)) || (param_2 < uVar9)) || ((param_2 <= uVar9 && (param_1 < uVar4)))) {
      bVar13 = uVar4 < param_3;
      uVar4 = uVar4 - param_3;
      uVar9 = (uVar9 - param_4) - (uint)bVar13;
    }
    iVar5 = uVar4 - param_1;
    iVar6 = (uVar9 - param_2) - (uint)(uVar4 < param_1);
    if (-1 < (int)(uVar11 - 1)) goto LAB_0068df1d;
  }
  bVar13 = iVar5 != 0;
  iVar5 = -iVar5;
  iVar6 = -(uint)bVar13 - iVar6;
LAB_0068df1d:
  return CONCAT44(iVar6,iVar5);
}


/* __aulldiv @ 0068df50  kind=gamemisc  attributed-by=none  size=104 */

/* Library Function - Single Match
    __aulldiv
   
   Library: Visual Studio */

undefined8 __aulldiv(uint param_1,uint param_2,uint param_3,uint param_4)

{
  ulonglong uVar1;
  longlong lVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  
  uVar3 = param_1;
  uVar8 = param_4;
  uVar6 = param_2;
  uVar9 = param_3;
  if (param_4 == 0) {
    uVar3 = param_2 / param_3;
    iVar4 = (int)(((ulonglong)param_2 % (ulonglong)param_3 << 0x20 | (ulonglong)param_1) /
                 (ulonglong)param_3);
  }
  else {
    do {
      uVar5 = uVar8 >> 1;
      uVar9 = uVar9 >> 1 | (uint)((uVar8 & 1) != 0) << 0x1f;
      uVar7 = uVar6 >> 1;
      uVar3 = uVar3 >> 1 | (uint)((uVar6 & 1) != 0) << 0x1f;
      uVar8 = uVar5;
      uVar6 = uVar7;
    } while (uVar5 != 0);
    uVar1 = CONCAT44(uVar7,uVar3) / (ulonglong)uVar9;
    iVar4 = (int)uVar1;
    lVar2 = (ulonglong)param_3 * (uVar1 & 0xffffffff);
    uVar3 = (uint)((ulonglong)lVar2 >> 0x20);
    uVar8 = uVar3 + iVar4 * param_4;
    if (((CARRY4(uVar3,iVar4 * param_4)) || (param_2 < uVar8)) ||
       ((param_2 <= uVar8 && (param_1 < (uint)lVar2)))) {
      iVar4 = iVar4 + -1;
    }
    uVar3 = 0;
  }
  return CONCAT44(uVar3,iVar4);
}


/* __aulldvrm @ 0068dfc0  kind=gamemisc  attributed-by=none  size=149 */

/* Library Function - Single Match
    __aulldvrm
   
   Library: Visual Studio */

undefined8 __aulldvrm(uint param_1,uint param_2,uint param_3,uint param_4)

{
  ulonglong uVar1;
  longlong lVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  
  uVar3 = param_1;
  uVar8 = param_4;
  uVar6 = param_2;
  uVar9 = param_3;
  if (param_4 == 0) {
    uVar3 = param_2 / param_3;
    iVar4 = (int)(((ulonglong)param_2 % (ulonglong)param_3 << 0x20 | (ulonglong)param_1) /
                 (ulonglong)param_3);
  }
  else {
    do {
      uVar5 = uVar8 >> 1;
      uVar9 = uVar9 >> 1 | (uint)((uVar8 & 1) != 0) << 0x1f;
      uVar7 = uVar6 >> 1;
      uVar3 = uVar3 >> 1 | (uint)((uVar6 & 1) != 0) << 0x1f;
      uVar8 = uVar5;
      uVar6 = uVar7;
    } while (uVar5 != 0);
    uVar1 = CONCAT44(uVar7,uVar3) / (ulonglong)uVar9;
    iVar4 = (int)uVar1;
    lVar2 = (ulonglong)param_3 * (uVar1 & 0xffffffff);
    uVar3 = (uint)((ulonglong)lVar2 >> 0x20);
    uVar8 = uVar3 + iVar4 * param_4;
    if (((CARRY4(uVar3,iVar4 * param_4)) || (param_2 < uVar8)) ||
       ((param_2 <= uVar8 && (param_1 < (uint)lVar2)))) {
      iVar4 = iVar4 + -1;
    }
    uVar3 = 0;
  }
  return CONCAT44(uVar3,iVar4);
}


/* __aullrem @ 0068e060  kind=gamemisc  attributed-by=none  size=117 */

/* Library Function - Single Match
    __aullrem
   
   Library: Visual Studio */

undefined8 __aullrem(uint param_1,uint param_2,uint param_3,uint param_4)

{
  ulonglong uVar1;
  longlong lVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  bool bVar11;
  
  uVar3 = param_1;
  uVar4 = param_4;
  uVar9 = param_2;
  uVar10 = param_3;
  if (param_4 == 0) {
    iVar6 = (int)(((ulonglong)param_2 % (ulonglong)param_3 << 0x20 | (ulonglong)param_1) %
                 (ulonglong)param_3);
    iVar7 = 0;
  }
  else {
    do {
      uVar5 = uVar4 >> 1;
      uVar10 = uVar10 >> 1 | (uint)((uVar4 & 1) != 0) << 0x1f;
      uVar8 = uVar9 >> 1;
      uVar3 = uVar3 >> 1 | (uint)((uVar9 & 1) != 0) << 0x1f;
      uVar4 = uVar5;
      uVar9 = uVar8;
    } while (uVar5 != 0);
    uVar1 = CONCAT44(uVar8,uVar3) / (ulonglong)uVar10;
    uVar3 = (int)uVar1 * param_4;
    lVar2 = (uVar1 & 0xffffffff) * (ulonglong)param_3;
    uVar9 = (uint)((ulonglong)lVar2 >> 0x20);
    uVar4 = (uint)lVar2;
    uVar10 = uVar9 + uVar3;
    if (((CARRY4(uVar9,uVar3)) || (param_2 < uVar10)) || ((param_2 <= uVar10 && (param_1 < uVar4))))
    {
      bVar11 = uVar4 < param_3;
      uVar4 = uVar4 - param_3;
      uVar10 = (uVar10 - param_4) - (uint)bVar11;
    }
    iVar6 = -(uVar4 - param_1);
    iVar7 = -(uint)(uVar4 - param_1 != 0) - ((uVar10 - param_2) - (uint)(uVar4 < param_1));
  }
  return CONCAT44(iVar7,iVar6);
}


/* __FindPESection @ 0068e660  kind=gamemisc  attributed-by=none  size=67 */

/* Library Function - Single Match
    __FindPESection
   
   Library: Visual Studio 2012 Release */

PIMAGE_SECTION_HEADER __cdecl __FindPESection(PBYTE pImageBase,DWORD_PTR rva)

{
  int iVar1;
  PIMAGE_SECTION_HEADER p_Var2;
  uint uVar3;
  
  iVar1 = *(int *)(pImageBase + 0x3c);
  uVar3 = 0;
  p_Var2 = (PIMAGE_SECTION_HEADER)
           (pImageBase + *(ushort *)(pImageBase + iVar1 + 0x14) + 0x18 + iVar1);
  if (*(ushort *)(pImageBase + iVar1 + 6) != 0) {
    do {
      if ((p_Var2->VirtualAddress <= rva) &&
         (rva < (p_Var2->Misc).PhysicalAddress + p_Var2->VirtualAddress)) {
        return p_Var2;
      }
      uVar3 = uVar3 + 1;
      p_Var2 = p_Var2 + 1;
    } while (uVar3 < *(ushort *)(pImageBase + iVar1 + 6));
  }
  return (PIMAGE_SECTION_HEADER)0x0;
}


/* __ValidateImageBase @ 0068e770  kind=gamemisc  attributed-by=none  size=49 */

/* Library Function - Single Match
    __ValidateImageBase
   
   Libraries: Visual Studio 2012 Release, Visual Studio 2015 Release */

BOOL __cdecl __ValidateImageBase(PBYTE pImageBase)

{
  uint uVar1;
  
  if (*(short *)pImageBase != 0x5a4d) {
    return 0;
  }
  uVar1 = 0;
  if (*(int *)(pImageBase + *(int *)(pImageBase + 0x3c)) == 0x4550) {
    uVar1 = (uint)((short)*(int *)((int)(pImageBase + *(int *)(pImageBase + 0x3c)) + 0x18) == 0x10b)
    ;
  }
  return uVar1;
}


/* FUN_0068e970 @ 0068e970  kind=gamemisc  attributed-by=none  size=35 */

uint FUN_0068e970(int param_1)

{
  if (-1 < param_1) {
    return param_1 + 0x8000U & 0xffff0000;
  }
  return -(0x8000U - param_1 & 0xffff0000);
}


/* FUN_0068ecd0 @ 0068ecd0  kind=gamemisc  attributed-by=none  size=137 */

undefined4 FUN_0068ecd0(undefined4 *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  
  if (param_1 == (undefined4 *)0x0) {
    return 6;
  }
  uVar6 = *param_1;
  uVar5 = param_1[2];
  uVar1 = param_1[1];
  uVar2 = param_1[3];
  iVar3 = FUN_0068ebc0(uVar1,uVar5);
  iVar4 = FUN_0068ebc0(uVar6,uVar2);
  iVar4 = iVar4 - iVar3;
  if (iVar4 == 0) {
    return 6;
  }
  iVar3 = FUN_0068ec40(uVar1,iVar4);
  param_1[1] = -iVar3;
  iVar3 = FUN_0068ec40(uVar5,iVar4);
  param_1[2] = -iVar3;
  uVar5 = FUN_0068ec40(param_1[3],iVar4);
  *param_1 = uVar5;
  uVar6 = FUN_0068ec40(uVar6,iVar4);
  param_1[3] = uVar6;
  return 0;
}


/* FUN_0068eec0 @ 0068eec0  kind=gamemisc  attributed-by=none  size=51 */

void FUN_0068eec0(uint param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  
  if (0 < (int)param_1) {
    uVar4 = 0;
    iVar5 = 0x18;
    iVar2 = 0;
    do {
      iVar3 = iVar2 * 2;
      uVar4 = uVar4 * 4 | param_1 >> 0x1e;
      uVar1 = iVar2 * 4 + 1;
      param_1 = param_1 * 4;
      if (uVar1 <= uVar4) {
        uVar4 = uVar4 - uVar1;
        iVar3 = iVar3 + 1;
      }
      iVar5 = iVar5 + -1;
      iVar2 = iVar3;
    } while (iVar5 != 0);
  }
  return;
}


/* FUN_0068ef00 @ 0068ef00  kind=gamemisc  attributed-by=none  size=181 */

int FUN_0068ef00(int param_1,int param_2,int param_3,int param_4)

{
  bool bVar1;
  uint local_10;
  uint local_c;
  uint local_8;
  uint local_4;
  
  if (param_2 == 0) {
    if (param_1 < 0) {
      return -param_4;
    }
  }
  else if (param_1 == 0) {
    param_4 = param_3;
    if (-1 < param_2) {
      return -param_3;
    }
  }
  else {
    if (param_4 == 0) {
      if (param_3 < 0) {
        param_2 = -param_2;
      }
      return param_2;
    }
    if (param_3 != 0) {
      FUN_0068e9a0(&local_10);
      FUN_0068e9a0(&local_8);
      if (local_c <= local_4) {
        if (local_c < local_4) {
          return -1;
        }
        if (local_10 <= local_8) {
          return -(uint)(local_10 < local_8);
        }
      }
      return 1;
    }
    bVar1 = -1 < param_4;
    param_4 = param_1;
    if (bVar1) {
      return -param_1;
    }
  }
  return param_4;
}


/* FUN_0068efc0 @ 0068efc0  kind=gamemisc  attributed-by=none  size=95 */

bool FUN_0068efc0(int param_1,int param_2,int param_3,int param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar2 = param_1;
  if (param_1 < 0) {
    iVar2 = -param_1;
  }
  iVar1 = param_2;
  if (param_2 < 0) {
    iVar1 = -param_2;
  }
  iVar3 = param_3;
  if (param_3 < 0) {
    iVar3 = -param_3;
  }
  iVar4 = param_4;
  if (param_4 < 0) {
    iVar4 = -param_4;
  }
  param_3 = param_3 + param_1;
  if (param_3 < 0) {
    param_3 = -param_3;
  }
  param_2 = param_2 + param_4;
  if (param_2 < 0) {
    param_2 = -param_2;
  }
  return ((iVar3 + iVar4) - (param_3 + param_2)) + iVar1 + iVar2 < param_3 + param_2 >> 4;
}


/* FUN_0068f040 @ 0068f040  kind=gamemisc  attributed-by=none  size=69 */

void FUN_0068f040(void)

{
  int in_EAX;
  
  *(int *)(in_EAX + 0x3c) = *(int *)(in_EAX + 0x18) + *(short *)(in_EAX + 0x16) * 8;
  *(int *)(in_EAX + 0x40) = (int)*(short *)(in_EAX + 0x16) + *(int *)(in_EAX + 0x1c);
  *(int *)(in_EAX + 0x44) = *(int *)(in_EAX + 0x20) + *(short *)(in_EAX + 0x14) * 2;
  if (*(char *)(in_EAX + 0x10) != '\0') {
    *(int *)(in_EAX + 0x4c) = *(int *)(in_EAX + 0x28) + *(short *)(in_EAX + 0x16) * 8;
    *(int *)(in_EAX + 0x50) = *(int *)(in_EAX + 0x2c) + *(short *)(in_EAX + 0x16) * 8;
  }
  return;
}


/* FUN_0068f0c0 @ 0068f0c0  kind=gamemisc  attributed-by=none  size=79 */

void FUN_0068f0c0(int param_1)

{
  short *psVar1;
  short sVar2;
  short sVar3;
  uint uVar4;
  
  if (param_1 != 0) {
    sVar2 = *(short *)(param_1 + 0x16);
    sVar3 = *(short *)(param_1 + 0x38);
    *(short *)(param_1 + 0x16) = *(short *)(param_1 + 0x3a) + sVar2;
    *(short *)(param_1 + 0x14) = *(short *)(param_1 + 0x14) + *(short *)(param_1 + 0x38);
    *(int *)(param_1 + 0x30) = *(int *)(param_1 + 0x30) + *(int *)(param_1 + 0x54);
    uVar4 = 0;
    if ((int)sVar3 != 0) {
      do {
        psVar1 = (short *)(*(int *)(param_1 + 0x44) + uVar4 * 2);
        *psVar1 = *psVar1 + sVar2;
        uVar4 = uVar4 + 1;
      } while (uVar4 < (uint)(int)sVar3);
    }
    FUN_0068f0a0();
    return;
  }
  return;
}


/* FUN_0068f170 @ 0068f170  kind=gamemisc  attributed-by=none  size=32 */

void FUN_0068f170(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  *param_1 = param_2;
  param_1[1] = param_3;
  param_1[2] = param_4;
  param_1[3] = 0;
  return;
}


/* FUN_0068f4a0 @ 0068f4a0  kind=gamemisc  attributed-by=none  size=94 */

void FUN_0068f4a0(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *(int *)(param_1 + 0xc);
  iVar2 = *(int *)(param_1 + 4);
  if (iVar1 < 0) {
    if (iVar2 < iVar1) {
      iVar2 = iVar1;
    }
  }
  else if (0 < iVar1) {
    iVar2 = iVar2 - iVar1;
  }
  if (param_2 == 0) {
    param_2 = (iVar2 * 0xc) / 10;
  }
  *(int *)(param_1 + 0x14) = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x10) / 2;
  *(int *)(param_1 + 0x18) = (param_2 - iVar2) / 2;
  *(int *)(param_1 + 0x1c) = param_2;
  return;
}


/* FUN_0068fb10 @ 0068fb10  kind=gamemisc  attributed-by=none  size=127 */

undefined4 FUN_0068fb10(int param_1,int param_2)

{
  int *piVar1;
  undefined4 uVar2;
  int *piVar3;
  int iVar4;
  
  if (param_1 == 0) {
    return 0x23;
  }
  if (param_2 == 0) {
    return 6;
  }
  if (param_2 == 0x756e6963) {
    uVar2 = FUN_0068f2f0(param_1);
    return uVar2;
  }
  piVar3 = *(int **)(param_1 + 0x28);
  if (piVar3 == (int *)0x0) {
    return 0x26;
  }
  piVar1 = piVar3 + *(int *)(param_1 + 0x24);
  if (piVar3 < piVar1) {
    iVar4 = 0;
    do {
      if ((*(int *)(*piVar3 + 4) == param_2) && (iVar4 < 0x3d)) {
        *(int *)(param_1 + 0x5c) = *piVar3;
        return 0;
      }
      piVar3 = piVar3 + 1;
      iVar4 = iVar4 + 4;
    } while (piVar3 < piVar1);
  }
  return 6;
}


/* FUN_0068fc00 @ 0068fc00  kind=gamemisc  attributed-by=none  size=97 */

undefined4 FUN_0068fc00(int param_1)

{
  code *pcVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  
  if ((param_1 != 0) &&
     (puVar2 = *(undefined4 **)(*(int *)(param_1 + 0x80) + 0x20), puVar2 != (undefined4 *)0xfffffffe
     )) {
    if (puVar2 == (undefined4 *)0x0) {
      pcVar1 = *(code **)(**(int **)(param_1 + 0x60) + 0x20);
      if (pcVar1 != (code *)0x0) {
        puVar2 = (undefined4 *)(*pcVar1)(*(int **)(param_1 + 0x60),"postscript-font-name");
      }
      puVar4 = puVar2;
      if (puVar2 == (undefined4 *)0x0) {
        puVar4 = (undefined4 *)0xfffffffe;
      }
      *(undefined4 **)(*(int *)(param_1 + 0x80) + 0x20) = puVar4;
      if (puVar2 == (undefined4 *)0x0) {
        return 0;
      }
    }
    if ((code *)*puVar2 != (code *)0x0) {
      uVar3 = (*(code *)*puVar2)(param_1);
      return uVar3;
    }
  }
  return 0;
}


/* FUN_0068fcc0 @ 0068fcc0  kind=gamemisc  attributed-by=none  size=32 */

undefined4 FUN_0068fcc0(int *param_1)

{
  int iVar1;
  
  if (((param_1 != (int *)0x0) && (iVar1 = *param_1, iVar1 != 0)) && (*(int *)(iVar1 + 0x60) != 0))
  {
    *(int **)(iVar1 + 0x58) = param_1;
    return 0;
  }
  return 6;
}


/* FUN_0068ff90 @ 0068ff90  kind=gamemisc  attributed-by=none  size=931 */

int FUN_0068ff90(short *param_1,undefined4 *param_2,undefined4 param_3)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  byte *pbVar5;
  byte bVar6;
  int iVar7;
  int *piVar8;
  int *piVar9;
  int *piVar10;
  byte *local_64;
  int *local_60;
  int local_58;
  int local_50;
  int local_4c;
  int local_48;
  int local_44;
  int local_40;
  int local_3c;
  int iStack_38;
  int iStack_34;
  int iStack_30;
  int iStack_2c;
  int iStack_28;
  int iStack_24;
  int iStack_20;
  int iStack_1c;
  int iStack_18;
  int iStack_14;
  int iStack_10;
  int iStack_c;
  
  iVar7 = 0;
  if ((param_1 == (short *)0x0) || (param_2 == (undefined4 *)0x0)) {
    return 6;
  }
  uVar1 = param_2[4];
  iVar2 = param_2[5];
  local_58 = 0;
  if (*param_1 < 1) {
    return 0;
  }
  do {
    iVar4 = (int)*(short *)(*(int *)(param_1 + 6) + local_58 * 2);
    if (iVar4 < 0) {
      return 0x14;
    }
    iVar3 = *(int *)(param_1 + 2);
    local_60 = (int *)(iVar3 + iVar4 * 8);
    bVar6 = (byte)uVar1;
    local_44 = (*(int *)(iVar3 + 4 + iVar7 * 8) << (bVar6 & 0x1f)) - iVar2;
    local_48 = (*(int *)(iVar3 + iVar7 * 8) << (bVar6 & 0x1f)) - iVar2;
    local_40 = (*(int *)(*(int *)(param_1 + 2) + iVar4 * 8) << (bVar6 & 0x1f)) - iVar2;
    local_3c = (*(int *)(*(int *)(param_1 + 2) + 4 + iVar4 * 8) << (bVar6 & 0x1f)) - iVar2;
    local_64 = (byte *)(*(int *)(param_1 + 4) + iVar7);
    piVar8 = (int *)(*(int *)(param_1 + 2) + iVar7 * 8);
    if ((*local_64 & 3) == 2) {
      return 0x14;
    }
    local_50 = local_48;
    local_4c = local_44;
    if ((*local_64 & 3) == 0) {
      if ((*(byte *)(*(int *)(param_1 + 4) + iVar4) & 3) == 1) {
        local_60 = local_60 + -2;
        local_4c = local_3c;
        local_50 = local_40;
      }
      else {
        local_50 = (local_48 + local_40) / 2;
        local_4c = (local_3c + local_44) / 2;
      }
      piVar8 = piVar8 + -2;
      local_64 = local_64 + -1;
    }
    iVar7 = (*(code *)*param_2)(&local_50,param_3);
    while( true ) {
      while( true ) {
        while( true ) {
          if (iVar7 != 0) {
            return iVar7;
          }
          if (local_60 <= piVar8) {
            iVar7 = (*(code *)param_2[1])(&local_50,param_3);
            goto LAB_006900ed;
          }
          pbVar5 = local_64 + 1;
          piVar10 = piVar8 + 2;
          if ((local_64[1] & 3) != 0) break;
          local_48 = (*piVar10 << (bVar6 & 0x1f)) - iVar2;
          local_44 = (piVar8[3] << (bVar6 & 0x1f)) - iVar2;
          while( true ) {
            if (local_60 <= piVar10) {
              iVar7 = (*(code *)param_2[2])(&local_48,&local_50,param_3);
              goto LAB_006900ed;
            }
            piVar8 = piVar10 + 3;
            pbVar5 = pbVar5 + 1;
            piVar10 = piVar10 + 2;
            iStack_38 = (*piVar10 << (bVar6 & 0x1f)) - iVar2;
            iStack_34 = (*piVar8 << (bVar6 & 0x1f)) - iVar2;
            if ((*pbVar5 & 3) == 1) break;
            if ((*pbVar5 & 3) != 0) {
              return 0x14;
            }
            iStack_10 = (iStack_38 + local_48) / 2;
            iStack_c = (iStack_34 + local_44) / 2;
            iVar7 = (*(code *)param_2[2])(&local_48,&iStack_10,param_3);
            if (iVar7 != 0) {
              return iVar7;
            }
            local_48 = iStack_38;
            local_44 = iStack_34;
          }
          iVar7 = (*(code *)param_2[2])(&local_48,&iStack_38,param_3);
          piVar8 = piVar10;
          local_64 = pbVar5;
        }
        if ((local_64[1] & 3) != 1) break;
        iStack_18 = (*piVar10 << (bVar6 & 0x1f)) - iVar2;
        iStack_14 = (piVar8[3] << (bVar6 & 0x1f)) - iVar2;
        iVar7 = (*(code *)param_2[1])(&iStack_18,param_3);
        piVar8 = piVar10;
        local_64 = pbVar5;
      }
      if (local_60 < piVar8 + 4) {
        return 0x14;
      }
      if ((local_64[2] & 3) != 2) {
        return 0x14;
      }
      piVar9 = piVar8 + 6;
      iStack_28 = (*piVar10 << (bVar6 & 0x1f)) - iVar2;
      iStack_24 = (piVar8[3] << (bVar6 & 0x1f)) - iVar2;
      iStack_30 = (piVar8[4] << (bVar6 & 0x1f)) - iVar2;
      iStack_2c = (piVar8[5] << (bVar6 & 0x1f)) - iVar2;
      if (local_60 < piVar9) break;
      iStack_20 = (*piVar9 << (bVar6 & 0x1f)) - iVar2;
      iStack_1c = (piVar8[7] << (bVar6 & 0x1f)) - iVar2;
      iVar7 = (*(code *)param_2[3])(&iStack_28,&iStack_30,&iStack_20,param_3);
      piVar8 = piVar9;
      local_64 = local_64 + 3;
    }
    iVar7 = (*(code *)param_2[3])(&iStack_28,&iStack_30,&local_50,param_3);
LAB_006900ed:
    if (iVar7 != 0) {
      return iVar7;
    }
    local_58 = local_58 + 1;
    iVar7 = iVar4 + 1;
    if (*param_1 <= local_58) {
      return 0;
    }
  } while( true );
}


/* FUN_00690430 @ 00690430  kind=gamemisc  attributed-by=none  size=140 */

void FUN_00690430(int param_1,int *param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  int *piVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  
  if ((param_1 != 0) && (param_2 != (int *)0x0)) {
    if (*(short *)(param_1 + 2) == 0) {
      param_2[1] = 0;
      param_2[2] = 0;
      *param_2 = 0;
      param_2[3] = 0;
      return;
    }
    piVar1 = *(int **)(param_1 + 4);
    iVar6 = *piVar1;
    iVar8 = piVar1[1];
    iVar7 = iVar6;
    iVar3 = iVar8;
    piVar5 = piVar1;
    while (piVar4 = piVar5 + 2, piVar4 < piVar1 + *(short *)(param_1 + 2) * 2) {
      iVar2 = *piVar4;
      if (iVar2 < iVar6) {
        iVar6 = iVar2;
      }
      if (iVar7 < iVar2) {
        iVar7 = iVar2;
      }
      iVar2 = piVar5[3];
      if (iVar2 < iVar8) {
        iVar8 = iVar2;
      }
      piVar5 = piVar4;
      if (iVar3 < iVar2) {
        iVar3 = iVar2;
      }
    }
    param_2[1] = iVar8;
    param_2[2] = iVar7;
    *param_2 = iVar6;
    param_2[3] = iVar3;
  }
  return;
}


/* FUN_006905a0 @ 006905a0  kind=gamemisc  attributed-by=none  size=685 */

void FUN_006905a0(short *param_1)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint *puVar6;
  int iVar7;
  uint *puVar8;
  uint *puVar9;
  short *psVar10;
  uint *puVar11;
  uint *puVar12;
  uint *puVar13;
  short *local_40;
  uint *local_3c;
  uint *local_38;
  uint *local_34;
  uint *local_30;
  uint *local_2c;
  uint *local_28;
  uint *local_24;
  short *local_20;
  int local_1c [7];
  
  local_1c[6] = DAT_0076aa78 ^ (uint)&local_40;
  local_3c = (uint *)0x8000;
  local_34 = (uint *)0x8000;
  local_30 = (uint *)0xffff8000;
  local_24 = (uint *)0x0;
  local_28 = (uint *)0x0;
  local_1c[0] = 2;
  local_1c[1] = 2;
  local_1c[2] = 2;
  if ((param_1 == (short *)0x0) || (param_1[1] < 1)) {
    __security_check_cookie(DAT_0076aa78 ^ (uint)&local_40 ^ (uint)&local_40);
    return;
  }
  local_2c = *(uint **)(param_1 + 2);
  local_40 = *(short **)(param_1 + 6);
  local_20 = local_40 + *param_1;
  puVar11 = local_2c;
  if (local_40 < local_20) {
    do {
      puVar12 = local_2c + *local_40 * 2;
      puVar8 = (uint *)0x8000;
      puVar9 = (uint *)0xffff8000;
      local_38 = (uint *)0xffff8000;
      puVar13 = (uint *)0x8000;
      puVar6 = puVar11;
      if (puVar11 + 4 <= puVar12) {
        for (; puVar6 <= puVar12; puVar6 = puVar6 + 2) {
          puVar1 = (uint *)*puVar6;
          if ((int)puVar1 < (int)puVar8) {
            puVar8 = puVar1;
          }
          if ((int)local_38 < (int)puVar1) {
            local_38 = puVar1;
          }
          puVar1 = (uint *)puVar6[1];
          if ((int)puVar1 < (int)puVar13) {
            puVar13 = puVar1;
          }
          if ((int)puVar9 < (int)puVar1) {
            puVar9 = puVar1;
          }
        }
        if ((((int)puVar8 < (int)local_3c) && (puVar8 != local_38)) && (puVar13 != puVar9)) {
          local_3c = puVar8;
          local_34 = puVar13;
          local_30 = puVar9;
          local_28 = puVar12;
          local_24 = puVar11;
        }
      }
      local_40 = local_40 + 1;
      puVar11 = puVar12 + 2;
    } while (local_40 < local_20);
    if (local_3c != (uint *)0x8000) {
      local_1c[3] = (int)local_30 + (int)local_34 * 3 >> 2;
      psVar10 = (short *)0x0;
      local_1c[4] = (int)local_30 + (int)local_34 >> 1;
      local_1c[5] = (int)local_34 + (int)local_30 * 3 >> 2;
      local_40 = (short *)0x0;
LAB_00690700:
      do {
        puVar11 = (uint *)0x8000;
        local_34 = (uint *)0xffff8000;
        local_3c = (uint *)0x0;
        local_30 = (uint *)0x0;
        local_2c = (uint *)0x0;
        local_38 = (uint *)0x0;
        puVar12 = local_28;
        for (puVar8 = local_24; puVar8 <= local_28; puVar8 = puVar8 + 2) {
          uVar2 = *(uint *)((int)(local_1c + 3) + (int)psVar10);
          uVar3 = puVar8[1];
          if ((uVar3 == uVar2) || (uVar4 = puVar12[1], uVar4 == uVar2)) {
            *(int *)((int)(local_1c + 3) + (int)psVar10) =
                 *(int *)((int)(local_1c + 3) + (int)psVar10) + 1;
            goto LAB_00690700;
          }
          if ((((int)uVar2 <= (int)uVar3) || ((int)uVar2 <= (int)uVar4)) &&
             (((int)uVar3 <= (int)uVar2 || ((int)uVar4 <= (int)uVar2)))) {
            uVar5 = *puVar12;
            iVar7 = FUN_0068ea60(*puVar8 - uVar5,uVar2 - uVar4,uVar3 - uVar4);
            puVar9 = (uint *)(iVar7 + uVar5);
            if ((int)puVar9 < (int)puVar11) {
              puVar11 = puVar9;
              local_38 = puVar12;
              local_2c = puVar8;
            }
            psVar10 = local_40;
            if ((int)local_34 < (int)puVar9) {
              local_3c = puVar8;
              local_34 = puVar9;
              local_30 = puVar12;
            }
          }
          puVar12 = puVar8;
        }
        if ((local_38 != (uint *)0x0) && (local_30 != (uint *)0x0)) {
          if (((int)local_38[1] < (int)local_2c[1]) && ((int)local_3c[1] < (int)local_30[1])) {
            *(undefined4 *)((int)local_1c + (int)psVar10) = 0;
          }
          else if (((int)local_2c[1] < (int)local_38[1]) && ((int)local_30[1] < (int)local_3c[1])) {
            *(undefined4 *)((int)local_1c + (int)psVar10) = 1;
          }
          else {
            *(undefined4 *)((int)local_1c + (int)psVar10) = 2;
          }
        }
        psVar10 = psVar10 + 2;
        local_40 = psVar10;
      } while ((int)psVar10 < 0xc);
      if ((((local_1c[0] == 2) || ((local_1c[0] != local_1c[1] && (local_1c[0] != local_1c[2])))) &&
          (local_1c[1] != 2)) && (local_1c[1] == local_1c[2])) {
        __security_check_cookie(local_1c[6] ^ (uint)&local_40);
        return;
      }
    }
  }
  __security_check_cookie(local_1c[6] ^ (uint)&local_40);
  return;
}


/* FUN_00690a20 @ 00690a20  kind=gamemisc  attributed-by=none  size=21 */

undefined1 FUN_00690a20(int param_1)

{
  undefined1 *puVar1;
  undefined1 uVar2;
  
  puVar1 = *(undefined1 **)(param_1 + 0x20);
  uVar2 = 0;
  if (puVar1 < *(undefined1 **)(param_1 + 0x24)) {
    uVar2 = *puVar1;
    *(undefined1 **)(param_1 + 0x20) = puVar1 + 1;
  }
  return uVar2;
}


/* FUN_00690a40 @ 00690a40  kind=gamemisc  attributed-by=none  size=44 */

undefined2 FUN_00690a40(int param_1)

{
  undefined1 *puVar1;
  undefined1 uVar2;
  undefined2 uVar3;
  undefined1 *puVar4;
  
  puVar4 = *(undefined1 **)(param_1 + 0x20);
  uVar3 = 0;
  if (puVar4 + 1 < *(undefined1 **)(param_1 + 0x24)) {
    uVar2 = *puVar4;
    puVar1 = puVar4 + 1;
    puVar4 = puVar4 + 2;
    uVar3 = CONCAT11(uVar2,*puVar1);
  }
  *(undefined1 **)(param_1 + 0x20) = puVar4;
  return uVar3;
}


/* FUN_00690a70 @ 00690a70  kind=gamemisc  attributed-by=none  size=44 */

undefined2 FUN_00690a70(int param_1)

{
  undefined2 uVar1;
  undefined2 *puVar2;
  
  puVar2 = *(undefined2 **)(param_1 + 0x20);
  uVar1 = 0;
  if ((int)puVar2 + 1U < *(uint *)(param_1 + 0x24)) {
    uVar1 = *puVar2;
    puVar2 = puVar2 + 1;
  }
  *(undefined2 **)(param_1 + 0x20) = puVar2;
  return uVar1;
}


/* FUN_00690aa0 @ 00690aa0  kind=gamemisc  attributed-by=none  size=56 */

undefined4 FUN_00690aa0(int param_1)

{
  undefined1 *puVar1;
  undefined4 uVar2;
  undefined1 *puVar3;
  
  puVar1 = *(undefined1 **)(param_1 + 0x20);
  uVar2 = 0;
  puVar3 = puVar1;
  if (puVar1 + 3 < *(undefined1 **)(param_1 + 0x24)) {
    puVar3 = puVar1 + 4;
    uVar2 = CONCAT31(CONCAT21(CONCAT11(*puVar1,puVar1[1]),puVar1[2]),puVar1[3]);
  }
  *(undefined1 **)(param_1 + 0x20) = puVar3;
  return uVar2;
}


/* FUN_00690ae0 @ 00690ae0  kind=gamemisc  attributed-by=none  size=57 */

undefined4 FUN_00690ae0(int param_1)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  
  puVar1 = *(undefined4 **)(param_1 + 0x20);
  uVar2 = 0;
  puVar3 = puVar1;
  if ((int)puVar1 + 3U < *(uint *)(param_1 + 0x24)) {
    puVar3 = puVar1 + 1;
    uVar2 = *puVar1;
  }
  *(undefined4 **)(param_1 + 0x20) = puVar3;
  return uVar2;
}


/* FUN_00690bf0 @ 00690bf0  kind=gamemisc  attributed-by=none  size=99 */

undefined2 FUN_00690bf0(int *param_1,undefined4 *param_2)

{
  undefined2 uVar1;
  int iVar2;
  undefined4 *puVar3;
  
  puVar3 = param_2;
  uVar1 = 0;
  *param_2 = 0;
  iVar2 = param_1[2];
  if ((uint)param_1[1] <= iVar2 + 1U) {
LAB_00690c48:
    *puVar3 = 0x55;
    return 0;
  }
  if ((code *)param_1[5] == (code *)0x0) {
    puVar3 = (undefined4 *)(*param_1 + iVar2);
    if (puVar3 == (undefined4 *)0x0) goto LAB_00690c41;
  }
  else {
    iVar2 = (*(code *)param_1[5])(param_1,iVar2,&param_2,2);
    if (iVar2 != 2) goto LAB_00690c48;
    puVar3 = &param_2;
  }
  uVar1 = *(undefined2 *)puVar3;
LAB_00690c41:
  param_1[2] = param_1[2] + 2;
  return uVar1;
}


/* FUN_00690c60 @ 00690c60  kind=gamemisc  attributed-by=none  size=102 */

int FUN_00690c60(int *param_1,undefined4 *param_2)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  
  puVar3 = param_2;
  iVar1 = 0;
  *param_2 = 0;
  iVar2 = param_1[2];
  if ((uint)param_1[1] <= iVar2 + 2U) {
LAB_00690cbb:
    *puVar3 = 0x55;
    return 0;
  }
  if ((code *)param_1[5] == (code *)0x0) {
    puVar3 = (undefined4 *)(*param_1 + iVar2);
    if (puVar3 == (undefined4 *)0x0) goto LAB_00690cb4;
  }
  else {
    iVar2 = (*(code *)param_1[5])(param_1,iVar2,&param_2,3);
    if (iVar2 != 3) goto LAB_00690cbb;
    puVar3 = &param_2;
  }
  iVar1 = (int)CONCAT21(CONCAT11(*(undefined1 *)puVar3,*(undefined1 *)((int)puVar3 + 1)),
                        *(undefined1 *)((int)puVar3 + 2));
LAB_00690cb4:
  param_1[2] = param_1[2] + 3;
  return iVar1;
}


/* FUN_00690d40 @ 00690d40  kind=gamemisc  attributed-by=none  size=111 */

undefined4 FUN_00690d40(int *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 *puVar3;
  
  puVar3 = param_2;
  uVar1 = 0;
  *param_2 = 0;
  iVar2 = param_1[2];
  if ((uint)param_1[1] <= iVar2 + 3U) {
LAB_00690da4:
    *puVar3 = 0x55;
    return 0;
  }
  if ((code *)param_1[5] == (code *)0x0) {
    puVar3 = (undefined4 *)(*param_1 + iVar2);
    if (puVar3 == (undefined4 *)0x0) goto LAB_00690d9d;
  }
  else {
    iVar2 = (*(code *)param_1[5])(param_1,iVar2,&param_2,4);
    if (iVar2 != 4) goto LAB_00690da4;
    puVar3 = &param_2;
  }
  uVar1 = *puVar3;
LAB_00690d9d:
  param_1[2] = param_1[2] + 4;
  return uVar1;
}


/* FUN_00691170 @ 00691170  kind=gamemisc  attributed-by=none  size=110 */

int FUN_00691170(uint *param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  byte bVar4;
  uint local_8;
  uint local_4;
  
  local_8 = *param_1;
  local_4 = param_1[1];
  uVar1 = local_4;
  if ((local_8 != 0) && (uVar1 = local_8, local_4 != 0)) {
    iVar2 = FUN_00690e10(&local_8);
    FUN_00690f80(&local_8);
    iVar3 = FUN_00690db0();
    bVar4 = (byte)iVar2;
    if (iVar2 < 1) {
      return iVar3 << (-bVar4 & 0x1f);
    }
    return (1 << (bVar4 - 1 & 0x1f)) + iVar3 >> (bVar4 & 0x1f);
  }
  return (uVar1 ^ (int)uVar1 >> 0x1f) - ((int)uVar1 >> 0x1f);
}


/* FUN_006912b0 @ 006912b0  kind=gamemisc  attributed-by=none  size=95 */

void * FUN_006912b0(undefined4 param_1,void *param_2,size_t param_3,int *param_4)

{
  void *_Dst;
  int local_4;
  
  _Dst = (void *)FUN_00691240(param_1,param_3,&local_4);
  if (local_4 != 0) {
    *param_4 = local_4;
    return _Dst;
  }
  if (param_2 != (void *)0x0) {
    memcpy(_Dst,param_2,param_3);
    *param_4 = 0;
    return _Dst;
  }
  *param_4 = 0;
  return _Dst;
}


/* FUN_00691310 @ 00691310  kind=gamemisc  attributed-by=none  size=72 */

void FUN_00691310(undefined4 param_1,char *param_2,undefined4 param_3)

{
  char cVar1;
  char *pcVar2;
  
  if (param_2 != (char *)0x0) {
    pcVar2 = param_2;
    do {
      cVar1 = *pcVar2;
      pcVar2 = pcVar2 + 1;
    } while (cVar1 != '\0');
    FUN_006912b0(param_1,param_2,pcVar2 + (1 - (int)(param_2 + 1)),param_3);
    return;
  }
  FUN_006912b0(param_1,0,0,param_3);
  return;
}


/* FUN_00691360 @ 00691360  kind=gamemisc  attributed-by=none  size=46 */

bool FUN_00691360(char *param_1,char *param_2,uint param_3)

{
  for (; (1 < param_3 && (*param_2 != '\0')); param_2 = param_2 + 1) {
    *param_1 = *param_2;
    param_3 = param_3 - 1;
    param_1 = param_1 + 1;
  }
  *param_1 = '\0';
  return *param_2 != '\0';
}


/* FUN_006914c0 @ 006914c0  kind=gamemisc  attributed-by=none  size=23 */

uint FUN_006914c0(uint param_1)

{
  uint uVar1;
  uint uVar2;
  
  uVar2 = param_1 - 1 & param_1;
  while (uVar1 = uVar2, uVar1 != 0) {
    param_1 = uVar1;
    uVar2 = uVar1 & uVar1 - 1;
  }
  return param_1;
}


/* FUN_006919d0 @ 006919d0  kind=gamemisc  attributed-by=none  size=180 */

undefined4 FUN_006919d0(int *param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  
  if (param_1 == (int *)0x0) {
    return 0x24;
  }
  iVar2 = *param_1;
  if (iVar2 == 0) {
    return 0x23;
  }
  iVar3 = *(int *)(iVar2 + 0x60);
  if (iVar3 == 0) {
    return 0x22;
  }
  uVar4 = *(undefined4 *)(iVar3 + 8);
  piVar1 = (int *)(iVar2 + 0x6c);
  iVar5 = FUN_00691390(piVar1,param_1);
  if (iVar5 != 0) {
    FUN_006913e0(piVar1,iVar5);
    FUN_00691290(uVar4,iVar5);
    if (*(int **)(iVar2 + 0x58) == param_1) {
      *(undefined4 *)(iVar2 + 0x58) = 0;
      if (*piVar1 != 0) {
        *(undefined4 *)(iVar2 + 0x58) = *(undefined4 *)(*piVar1 + 8);
      }
    }
    FUN_006917d0(uVar4,param_1,iVar3);
    return 0;
  }
  return 0x24;
}


/* FUN_00691a90 @ 00691a90  kind=gamemisc  attributed-by=none  size=108 */

undefined4 FUN_00691a90(int param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  
  if (param_1 == 0) {
    return 0x23;
  }
  piVar3 = *(int **)(param_1 + 0x28);
  if (piVar3 == (int *)0x0) {
    return 0x26;
  }
  iVar2 = FUN_0068fc70(param_2);
  if (iVar2 != 0xe) {
    piVar1 = piVar3 + *(int *)(param_1 + 0x24);
    for (; piVar3 < piVar1; piVar3 = piVar3 + 1) {
      if ((*piVar3 == param_2) &&
         ((int)((int)piVar3 - *(int *)(param_1 + 0x28) & 0xfffffffcU) < 0x3d)) {
        *(int *)(param_1 + 0x5c) = *piVar3;
        return 0;
      }
    }
  }
  return 6;
}


/* FUN_00691dc0 @ 00691dc0  kind=gamemisc  attributed-by=none  size=255 */

/* WARNING: Removing unreachable block (ram,0x00691eb8) */

int FUN_00691dc0(int param_1,undefined4 *param_2)

{
  ushort uVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  int in_ECX;
  
  iVar2 = FUN_00690cd0();
  if (in_ECX != 0) {
    return in_ECX;
  }
  if (iVar2 != param_1) {
    return 2;
  }
  FUN_00690cd0();
  iVar2 = FUN_00690900();
  if (iVar2 == 0) {
    uVar1 = FUN_00690b80();
    if (uVar1 == 0) {
      return 2;
    }
    iVar2 = 0;
    if (uVar1 != 0) {
      do {
        iVar3 = FUN_00690cd0();
        if (iVar3 == 2) {
          uVar4 = FUN_00690cd0();
          FUN_00690cd0();
          *param_2 = uVar4;
          return 0;
        }
        iVar3 = FUN_00690900();
        if (iVar3 != 0) {
          return iVar3;
        }
        iVar2 = iVar2 + 1;
      } while (iVar2 < (int)(uint)uVar1);
    }
    iVar2 = 2;
  }
  return iVar2;
}


/* FUN_00691ee0 @ 00691ee0  kind=gamemisc  attributed-by=none  size=70 */

void FUN_00691ee0(int param_1,undefined4 *param_2)

{
  if (param_1 == 0) {
    *param_2 = 0;
    return;
  }
  if (*(int *)(param_1 + 0x14) != 0) {
    FUN_00691290(*(undefined4 *)(param_1 + 0x1c),*param_2);
    *param_2 = 0;
    *param_2 = 0;
    return;
  }
  *param_2 = 0;
  return;
}


/* FUN_00692010 @ 00692010  kind=gamemisc  attributed-by=none  size=469 */

int FUN_00692010(int param_1,byte *param_2,int param_3)

{
  byte *pbVar1;
  byte bVar2;
  byte bVar3;
  undefined2 uVar4;
  bool bVar5;
  uint uVar6;
  uint *puVar7;
  uint *puVar8;
  sbyte sVar9;
  byte *pbVar10;
  
  pbVar10 = param_2;
  bVar5 = false;
  if ((param_2 == (byte *)0x0) || (param_1 == 0)) {
    return 6;
  }
  bVar2 = *param_2;
  param_2 = (byte *)0x0;
  puVar7 = *(uint **)(param_1 + 0x20);
  while (bVar2 - 4 < 0x16) {
    switch(bVar2 - 4) {
    case 4:
      param_2 = (byte *)FUN_00691f30(param_1,*(undefined2 *)(pbVar10 + 2));
      if (param_2 == (byte *)0x0) {
        puVar8 = *(uint **)(param_1 + 0x20);
        bVar5 = true;
        goto LAB_006921a0;
      }
      goto LAB_006921b8;
    default:
      goto switchD_00692059_caseD_5;
    case 8:
    case 9:
      uVar6 = (uint)(byte)*puVar7;
      puVar8 = (uint *)((int)puVar7 + 1);
      sVar9 = 0x18;
      break;
    case 0xc:
    case 0xd:
      puVar8 = (uint *)((int)puVar7 + 2);
      uVar6 = (uint)CONCAT11((byte)*puVar7,*(byte *)((int)puVar7 + 1));
      sVar9 = 0x10;
      break;
    case 0xe:
    case 0xf:
      puVar8 = (uint *)((int)puVar7 + 2);
      uVar6 = (uint)(ushort)*puVar7;
      sVar9 = 0x10;
      break;
    case 0x10:
    case 0x11:
      puVar8 = puVar7 + 1;
      uVar6 = CONCAT31(CONCAT21(CONCAT11((byte)*puVar7,*(byte *)((int)puVar7 + 1)),
                                *(byte *)((int)puVar7 + 2)),*(byte *)((int)puVar7 + 3));
      sVar9 = 0;
      break;
    case 0x12:
    case 0x13:
      puVar8 = puVar7 + 1;
      uVar6 = *puVar7;
      sVar9 = 0;
      break;
    case 0x14:
    case 0x15:
      uVar4 = CONCAT11((byte)*puVar7,*(byte *)((int)puVar7 + 1));
      bVar3 = *(byte *)((int)puVar7 + 2);
      goto LAB_00692170;
    case 0x16:
    case 0x17:
                    /* WARNING: This code block may not be properly labeled as switch case */
      uVar4 = *(undefined2 *)((int)puVar7 + 1);
      bVar3 = (byte)*puVar7;
LAB_00692170:
      puVar8 = (uint *)((int)puVar7 + 3);
      uVar6 = (uint)CONCAT21(uVar4,bVar3);
      sVar9 = 8;
      break;
    case 0x18:
    case 0x19:
                    /* WARNING: This code block may not be properly labeled as switch case */
      puVar8 = (uint *)((uint)pbVar10[1] + (int)puVar7);
      if (puVar8 <= *(uint **)(param_1 + 0x24)) {
        if (bVar2 == 0x18) {
          memcpy((void *)((uint)*(ushort *)(pbVar10 + 2) + param_3),puVar7,(uint)pbVar10[1]);
        }
        goto LAB_006921a0;
      }
      param_2 = (byte *)0x55;
      goto LAB_006921b8;
    }
    if ((bVar2 & 1) != 0) {
      uVar6 = (int)(uVar6 << sVar9) >> sVar9;
    }
    puVar7 = (uint *)((uint)*(ushort *)(pbVar10 + 2) + param_3);
    if (pbVar10[1] == 1) {
      *(char *)puVar7 = (char)uVar6;
    }
    else if (pbVar10[1] == 2) {
      *(short *)puVar7 = (short)uVar6;
    }
    else {
      *puVar7 = uVar6;
    }
LAB_006921a0:
    pbVar1 = pbVar10 + 4;
    pbVar10 = pbVar10 + 4;
    puVar7 = puVar8;
    bVar2 = *pbVar1;
  }
switchD_00692059_caseD_5:
  *(uint **)(param_1 + 0x20) = puVar7;
LAB_006921b8:
  if (bVar5) {
    FUN_00691fe0(param_1);
  }
  return (int)param_2;
}


/* FUN_00693c40 @ 00693c40  kind=gamemisc  attributed-by=none  size=359 */

int FUN_00693c40(undefined4 *param_1,int param_2,int param_3)

{
  bool bVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  int iVar4;
  uint uVar5;
  undefined4 uVar6;
  int iVar7;
  uint uVar8;
  
  puVar2 = param_1;
  uVar5 = param_1[1];
  uVar6 = *param_1;
  iVar7 = 0;
  uVar8 = (int)*(short *)((int)param_1 + 0x16) + *(short *)((int)param_1 + 0x3a) + param_2;
  bVar1 = false;
  param_1 = (undefined4 *)0x0;
  if (uVar5 < uVar8) {
    uVar8 = uVar8 + 7 & 0xfffffff8;
    if (0x7fff < uVar8) {
      return 10;
    }
    uVar3 = FUN_00693a60(uVar6,8,uVar5,uVar8,puVar2[6],&param_1);
    puVar2[6] = uVar3;
    if (param_1 != (undefined4 *)0x0) {
      return (int)param_1;
    }
    uVar3 = FUN_00693a60(uVar6,1,uVar5,uVar8,puVar2[7],&param_1);
    puVar2[7] = uVar3;
    if (param_1 != (undefined4 *)0x0) {
      return (int)param_1;
    }
    iVar7 = (int)param_1;
    if (*(char *)(puVar2 + 4) != '\0') {
      iVar4 = FUN_00693a60(uVar6,8,uVar5 * 2,uVar8 * 2,puVar2[10],&param_1);
      iVar7 = (int)param_1;
      puVar2[10] = iVar4;
      if (param_1 != (undefined4 *)0x0) {
        return (int)param_1;
      }
      memmove((void *)(iVar4 + uVar8 * 8),(void *)(uVar5 * 8 + iVar4),uVar5 * 8);
      puVar2[0xb] = puVar2[10] + uVar8 * 8;
    }
    bVar1 = true;
    puVar2[1] = uVar8;
  }
  uVar5 = (int)*(short *)(puVar2 + 5) + *(short *)(puVar2 + 0xe) + param_3;
  if ((uint)puVar2[2] < uVar5) {
    uVar5 = uVar5 + 3 & 0xfffffffc;
    if (0x7fff < uVar5) {
      return 10;
    }
    uVar6 = FUN_00693a60(uVar6,2,puVar2[2],uVar5,puVar2[8],&param_1);
    puVar2[8] = uVar6;
    iVar7 = (int)param_1;
    if (param_1 == (undefined4 *)0x0) {
      puVar2[2] = uVar5;
      FUN_0068f040();
      return 0;
    }
  }
  else if (bVar1) {
    FUN_0068f040();
  }
  return iVar7;
}


/* FUN_00693db0 @ 00693db0  kind=gamemisc  attributed-by=none  size=87 */

int FUN_00693db0(undefined4 *param_1,int param_2)

{
  uint *puVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  int iVar4;
  uint uVar5;
  int extraout_EDX;
  
  puVar2 = param_1;
  puVar1 = param_1 + 3;
  uVar5 = param_1[0x15] + param_1[0xc] + param_2;
  uVar3 = *param_1;
  param_1 = (undefined4 *)0x0;
  iVar4 = 0;
  if (*puVar1 < uVar5) {
    uVar5 = uVar5 + 1 & 0xfffffffe;
    uVar3 = FUN_00693a60(uVar3,0x20,*puVar1,uVar5,puVar2[0xd],&param_1);
    puVar2[0xd] = uVar3;
    iVar4 = (int)param_1;
    if (param_1 == (undefined4 *)0x0) {
      puVar2[3] = uVar5;
      FUN_0068f090();
      iVar4 = extraout_EDX;
    }
  }
  return iVar4;
}


/* FUN_00693e10 @ 00693e10  kind=gamemisc  attributed-by=none  size=180 */

int FUN_00693e10(int param_1,int param_2)

{
  short sVar1;
  short sVar2;
  int iVar3;
  size_t _Size;
  
  sVar1 = *(short *)(param_2 + 0x14);
  sVar2 = *(short *)(param_2 + 0x16);
  _Size = (size_t)sVar2;
  iVar3 = FUN_00693c40(param_1,_Size,(int)sVar1);
  if (iVar3 == 0) {
    memcpy(*(void **)(param_1 + 0x18),*(void **)(param_2 + 0x18),_Size * 8);
    memcpy(*(void **)(param_1 + 0x1c),*(void **)(param_2 + 0x1c),_Size);
    memcpy(*(void **)(param_1 + 0x20),*(void **)(param_2 + 0x20),sVar1 * 2);
    if ((*(char *)(param_1 + 0x10) != '\0') && (*(char *)(param_2 + 0x10) != '\0')) {
      memcpy(*(void **)(param_1 + 0x28),*(void **)(param_2 + 0x28),_Size * 8);
      memcpy(*(void **)(param_1 + 0x2c),*(void **)(param_2 + 0x2c),_Size * 8);
    }
    *(short *)(param_1 + 0x16) = sVar2;
    *(short *)(param_1 + 0x14) = sVar1;
    FUN_0068f040();
  }
  return iVar3;
}


/* FUN_00693ed0 @ 00693ed0  kind=gamemisc  attributed-by=none  size=226 */

int FUN_00693ed0(undefined4 *param_1,undefined4 param_2,int *param_3,undefined4 *param_4)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int local_8;
  undefined4 local_4;
  
  local_8 = 0;
  if (((param_1 == (undefined4 *)0x0) || (param_3 == (int *)0x0)) || (iVar1 = *param_3, iVar1 == 0))
  {
    return 6;
  }
  local_4 = *(undefined4 *)(iVar1 + 100);
  piVar2 = (int *)FUN_00692230(local_4,*param_1,&local_8);
  if (local_8 != 0) goto LAB_00693f93;
  *piVar2 = *param_3;
  piVar2[1] = param_3[1];
  piVar2[2] = param_3[2];
  piVar2[3] = (int)param_1;
  if ((code *)param_1[1] == (code *)0x0) {
LAB_00693f56:
    iVar3 = FUN_00693a60(local_4,4,*(int *)(iVar1 + 0x24),*(int *)(iVar1 + 0x24) + 1,
                         *(undefined4 *)(iVar1 + 0x28),&local_8);
    *(int *)(iVar1 + 0x28) = iVar3;
    if (local_8 == 0) {
      *(int **)(iVar3 + *(int *)(iVar1 + 0x24) * 4) = piVar2;
      *(int *)(iVar1 + 0x24) = *(int *)(iVar1 + 0x24) + 1;
      goto LAB_00693f93;
    }
  }
  else {
    local_8 = (*(code *)param_1[1])(piVar2,param_2);
    if (local_8 == 0) goto LAB_00693f56;
  }
  iVar1 = local_8;
  FUN_00691b00();
  piVar2 = (int *)0x0;
  local_8 = iVar1;
LAB_00693f93:
  if (param_4 != (undefined4 *)0x0) {
    *param_4 = piVar2;
  }
  return local_8;
}


/* FUN_00695d90 @ 00695d90  kind=gamemisc  attributed-by=none  size=27 */

void FUN_00695d90(void)

{
  undefined4 *in_EAX;
  undefined4 in_ECX;
  
  in_EAX[6] = in_ECX;
  in_EAX[2] = 0;
  in_EAX[3] = 0;
  *in_EAX = 0;
  in_EAX[1] = 0;
  in_EAX[5] = 0xffffffff;
  *(undefined1 *)(in_EAX + 7) = 0;
  return;
}


/* FUN_00695f10 @ 00695f10  kind=gamemisc  attributed-by=none  size=78 */

undefined4 * FUN_00695f10(undefined4 *param_1,int *param_2)

{
  undefined4 *puVar1;
  int iVar2;
  int extraout_EDX;
  
  puVar1 = param_1;
  if (param_1 == (undefined4 *)0x0) {
    return (undefined4 *)0x6;
  }
  iVar2 = FUN_00692230(*param_1,0x78,&param_1);
  if (param_1 == (undefined4 *)0x0) {
    *(undefined4 **)(iVar2 + 0x74) = puVar1;
    FUN_00695d90();
    FUN_00695d90();
    iVar2 = extraout_EDX;
  }
  *param_2 = iVar2;
  return param_1;
}


/* FUN_006971d0 @ 006971d0  kind=gamemisc  attributed-by=none  size=147 */

undefined4 * FUN_006971d0(void)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int in_EAX;
  uint uVar3;
  int iVar4;
  byte bVar5;
  byte bVar6;
  byte *pbVar7;
  byte *pbVar8;
  byte *unaff_EBX;
  undefined4 *puVar9;
  bool bVar10;
  
  bVar5 = *unaff_EBX;
  puVar1 = *(undefined4 **)(in_EAX + 0xc);
  uVar3 = 0;
  bVar6 = 0;
  pbVar7 = unaff_EBX;
  if (bVar5 != 0) {
    do {
      iVar4 = (int)(char)bVar5;
      bVar5 = pbVar7[1];
      pbVar7 = pbVar7 + 1;
      uVar3 = iVar4 + uVar3 * 0x1f;
    } while (bVar5 != 0);
    bVar6 = *unaff_EBX;
  }
  uVar3 = uVar3 % *(uint *)(in_EAX + 4);
  puVar2 = (undefined4 *)puVar1[uVar3];
  puVar9 = puVar1 + uVar3;
  do {
    if (puVar2 == (undefined4 *)0x0) {
      return puVar9;
    }
    pbVar7 = (byte *)*puVar2;
    pbVar8 = unaff_EBX;
    if (*pbVar7 == bVar6) {
      do {
        bVar5 = *pbVar7;
        bVar10 = bVar5 < *pbVar8;
        if (bVar5 != *pbVar8) {
LAB_00697240:
          iVar4 = (1 - (uint)bVar10) - (uint)(bVar10 != 0);
          goto LAB_00697245;
        }
        if (bVar5 == 0) break;
        bVar5 = pbVar7[1];
        bVar10 = bVar5 < pbVar8[1];
        if (bVar5 != pbVar8[1]) goto LAB_00697240;
        pbVar7 = pbVar7 + 2;
        pbVar8 = pbVar8 + 2;
      } while (bVar5 != 0);
      iVar4 = 0;
LAB_00697245:
      if (iVar4 == 0) {
        return puVar9;
      }
      bVar6 = *unaff_EBX;
    }
    puVar9 = puVar9 + -1;
    if (puVar9 < puVar1) {
      puVar9 = puVar1 + (*(uint *)(in_EAX + 4) - 1);
    }
    puVar2 = (undefined4 *)*puVar9;
  } while( true );
}


/* FUN_00697270 @ 00697270  kind=gamemisc  attributed-by=none  size=152 */

int FUN_00697270(undefined4 param_1)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  int *unaff_ESI;
  int local_c;
  int local_8;
  int *local_4;
  
  iVar1 = unaff_ESI[1];
  piVar4 = (int *)unaff_ESI[3];
  iVar2 = iVar1 * 2;
  *unaff_ESI = iVar2 / 3;
  local_c = 0;
  unaff_ESI[1] = iVar2;
  local_4 = piVar4;
  iVar2 = FUN_00693a60(param_1,4,0,iVar2,0,&local_c);
  unaff_ESI[3] = iVar2;
  if (local_c == 0) {
    if (0 < iVar1) {
      do {
        local_8 = iVar1;
        iVar1 = *piVar4;
        if (iVar1 != 0) {
          piVar3 = (int *)FUN_006971d0();
          *piVar3 = iVar1;
        }
        piVar4 = piVar4 + 1;
        iVar1 = local_8 + -1;
      } while (local_8 + -1 != 0);
      local_8 = 0;
      piVar4 = local_4;
    }
    FUN_00691290(param_1,piVar4);
  }
  return local_c;
}


/* FUN_00697350 @ 00697350  kind=gamemisc  attributed-by=none  size=69 */

void FUN_00697350(int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  
  if (param_1 != 0) {
    puVar1 = *(undefined4 **)(param_1 + 0xc);
    iVar2 = *(int *)(param_1 + 4);
    if (0 < iVar2) {
      do {
        FUN_00691290();
        *puVar1 = 0;
        puVar1 = puVar1 + 1;
        iVar2 = iVar2 + -1;
      } while (iVar2 != 0);
    }
    FUN_00691290();
    *(undefined4 *)(param_1 + 0xc) = 0;
  }
  return;
}


/* FUN_006973a0 @ 006973a0  kind=gamemisc  attributed-by=none  size=136 */

int FUN_006973a0(undefined4 param_1,undefined4 param_2)

{
  int *in_EAX;
  int *piVar1;
  undefined4 *puVar2;
  undefined4 in_ECX;
  int local_4;
  
  piVar1 = (int *)FUN_006971d0();
  local_4 = 0;
  if (*piVar1 != 0) {
    *(undefined4 *)(*piVar1 + 4) = param_1;
    return 0;
  }
  puVar2 = (undefined4 *)FUN_00692230(param_2,8,&local_4);
  if (local_4 == 0) {
    *piVar1 = (int)puVar2;
    *puVar2 = in_ECX;
    puVar2[1] = param_1;
    if (in_EAX[2] < *in_EAX) {
      in_EAX[2] = in_EAX[2] + 1;
      return 0;
    }
    local_4 = FUN_00697270(param_2);
    if (local_4 == 0) {
      in_EAX[2] = in_EAX[2] + 1;
      return 0;
    }
  }
  return local_4;
}


/* FUN_00697440 @ 00697440  kind=gamemisc  attributed-by=none  size=18 */

void FUN_00697440(undefined4 param_1)

{
  undefined4 *in_EAX;
  
  *in_EAX = 0;
  in_EAX[1] = 0;
  in_EAX[2] = 0;
  in_EAX[3] = param_1;
  return;
}


/* FUN_00697490 @ 00697490  kind=gamemisc  attributed-by=none  size=97 */

int FUN_00697490(uint param_1)

{
  uint uVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 *unaff_ESI;
  uint uVar4;
  int local_4;
  
  uVar1 = unaff_ESI[1];
  local_4 = 0;
  iVar3 = 0;
  if (uVar1 < param_1) {
    uVar4 = (uVar1 >> 1) + 4 + uVar1;
    if (uVar1 == 0x1fffffff) {
      return 0x40;
    }
    if ((uVar4 < uVar1) || (0x1fffffff < uVar4)) {
      uVar4 = 0x1fffffff;
    }
    uVar2 = FUN_00693a60(unaff_ESI[3],4,uVar1,uVar4,*unaff_ESI,&local_4);
    *unaff_ESI = uVar2;
    iVar3 = local_4;
    if (local_4 == 0) {
      unaff_ESI[1] = uVar4;
    }
  }
  return iVar3;
}


/* FUN_00697500 @ 00697500  kind=gamemisc  attributed-by=none  size=55 */

void FUN_00697500(void)

{
  uint uVar1;
  int *in_EDX;
  int iVar2;
  uint unaff_EDI;
  
  iVar2 = 0;
  if (((in_EDX != (int *)0x0) && (in_EDX[2] != 0)) && (unaff_EDI != 0)) {
    uVar1 = unaff_EDI;
    if ((uint)in_EDX[2] <= unaff_EDI) {
      in_EDX[2] = 0;
      return;
    }
    do {
      *(undefined4 *)(iVar2 + *in_EDX) = *(undefined4 *)(*in_EDX + uVar1 * 4);
      uVar1 = uVar1 + 1;
      iVar2 = iVar2 + 4;
    } while (uVar1 < (uint)in_EDX[2]);
    in_EDX[2] = in_EDX[2] - unaff_EDI;
  }
  return;
}


/* FUN_00697540 @ 00697540  kind=gamemisc  attributed-by=none  size=117 */

undefined * FUN_00697540(int *param_1,undefined1 param_2,int *param_3)

{
  char cVar1;
  undefined *puVar2;
  char *pcVar3;
  int iVar4;
  uint uVar5;
  
  *param_3 = 0;
  if ((param_1 == (int *)0x0) || (param_1[2] == 0)) {
    return (undefined *)0x0;
  }
  puVar2 = *(undefined **)*param_1;
  iVar4 = 0;
  if (param_1[2] != 0) {
    uVar5 = 0;
    do {
      pcVar3 = *(char **)(*param_1 + uVar5 * 4);
      cVar1 = *pcVar3;
      while (cVar1 != '\0') {
        pcVar3 = pcVar3 + 1;
        puVar2[iVar4] = cVar1;
        iVar4 = iVar4 + 1;
        cVar1 = *pcVar3;
      }
      uVar5 = uVar5 + 1;
      if ((uint)param_1[2] <= uVar5) break;
      puVar2[iVar4] = param_2;
      iVar4 = iVar4 + 1;
    } while (uVar5 < (uint)param_1[2]);
  }
  if (puVar2 != &DAT_007232ac) {
    puVar2[iVar4] = 0;
  }
  *param_3 = iVar4;
  return puVar2;
}


/* FUN_006975c0 @ 006975c0  kind=gamemisc  attributed-by=none  size=517 */

void FUN_006975c0(byte *param_1,int param_2)

{
  byte bVar1;
  bool bVar2;
  byte *pbVar3;
  int iVar4;
  int *in_ECX;
  byte *in_EDX;
  int iVar5;
  byte *pbVar6;
  byte *pbVar7;
  int local_30;
  int local_2c;
  byte *local_28;
  byte local_24 [32];
  uint local_4;
  
  local_4 = DAT_0076aa78 ^ (uint)&local_30;
  local_30 = 0;
  in_ECX[2] = 0;
  if ((param_2 == 0) || (*param_1 == 0)) {
    __security_check_cookie(local_4 ^ (uint)&local_30);
    return;
  }
  if ((in_EDX == (byte *)0x0) || (*in_EDX == 0)) {
    __security_check_cookie(local_4 ^ (uint)&local_30);
    return;
  }
  local_24[0] = 0;
  local_24[1] = 0;
  local_24[2] = 0;
  local_24[3] = 0;
  local_24[4] = 0;
  local_24[5] = 0;
  local_24[6] = 0;
  local_24[7] = 0;
  local_24[8] = 0;
  local_24[9] = 0;
  local_24[10] = 0;
  local_24[0xb] = 0;
  local_24[0xc] = 0;
  local_24[0xd] = 0;
  local_24[0xe] = 0;
  local_24[0xf] = 0;
  local_24[0x10] = 0;
  local_24[0x11] = 0;
  local_24[0x12] = 0;
  local_24[0x13] = 0;
  local_24[0x14] = 0;
  local_24[0x15] = 0;
  local_24[0x16] = 0;
  local_24[0x17] = 0;
  local_24[0x18] = 0;
  local_24[0x19] = 0;
  local_24[0x1a] = 0;
  local_24[0x1b] = 0;
  local_24[0x1c] = 0;
  local_24[0x1d] = 0;
  local_24[0x1e] = 0;
  local_24[0x1f] = 0;
  local_2c = 0;
  do {
    bVar1 = *in_EDX;
    if (bVar1 == 0) break;
    if ((bVar1 == 0x2b) && (in_EDX[1] == 0)) {
      local_2c = 1;
    }
    else {
      local_24[bVar1 >> 3] = local_24[bVar1 >> 3] | '\x01' << (bVar1 & 7);
    }
    in_EDX = in_EDX + 1;
  } while (in_EDX != (byte *)0x0);
  pbVar3 = param_1 + param_2;
  iVar5 = 0;
  local_28 = pbVar3;
  if (param_1 < pbVar3) {
    do {
      if (*param_1 == 0) break;
      bVar1 = *param_1;
      pbVar6 = param_1;
      while ((bVar1 != 0 && (((int)(char)local_24[*pbVar6 >> 3] & 1 << (*pbVar6 & 7)) == 0))) {
        pbVar6 = pbVar6 + 1;
        bVar1 = *pbVar6;
      }
      if ((in_ECX[2] == in_ECX[1]) &&
         (local_30 = FUN_00697490(in_ECX[2] + 1), pbVar3 = local_28, local_30 != 0))
      goto LAB_00697756;
      if (pbVar6 <= param_1) {
        param_1 = &DAT_007232ac;
      }
      *(byte **)(*in_ECX + in_ECX[2] * 4) = param_1;
      in_ECX[2] = in_ECX[2] + 1;
      if (local_2c == 0) {
        if (*pbVar6 != 0) {
          *pbVar6 = 0;
          pbVar7 = pbVar6 + 1;
          goto LAB_00697722;
        }
LAB_00697732:
        iVar5 = 0;
      }
      else {
        pbVar7 = pbVar6;
        if (*pbVar6 == 0) goto LAB_00697732;
        do {
          if (((int)(char)local_24[*pbVar7 >> 3] & 1 << (*pbVar7 & 7)) == 0) break;
          *pbVar7 = 0;
          pbVar7 = pbVar7 + 1;
        } while (*pbVar7 != 0);
LAB_00697722:
        bVar2 = pbVar7 <= pbVar6;
        pbVar6 = pbVar7;
        if ((bVar2) || (*pbVar7 != 0)) goto LAB_00697732;
        iVar5 = 1;
      }
      param_1 = pbVar6;
    } while (pbVar6 < pbVar3);
  }
  if (((uint)(in_ECX[2] + iVar5) < (uint)in_ECX[1]) ||
     (iVar4 = FUN_00697490(in_ECX[2] + iVar5 + 1), iVar4 == 0)) {
    if (iVar5 != 0) {
      *(undefined **)(*in_ECX + in_ECX[2] * 4) = &DAT_007232ac;
      in_ECX[2] = in_ECX[2] + 1;
    }
    *(undefined4 *)(*in_ECX + in_ECX[2] * 4) = 0;
    __security_check_cookie(local_4 ^ (uint)&local_30);
    return;
  }
LAB_00697756:
  __security_check_cookie(local_4 ^ (uint)&local_30);
  return;
}


/* FUN_006977d0 @ 006977d0  kind=gamemisc  attributed-by=none  size=613 */

int FUN_006977d0(int param_1,undefined4 param_2,int *param_3)

{
  char cVar1;
  code *in_EAX;
  int iVar2;
  int iVar3;
  int iVar4;
  size_t sVar5;
  undefined1 *_Dst;
  int local_30;
  int local_2c;
  int local_28;
  int local_24;
  size_t local_20;
  size_t local_1c;
  code *local_18;
  int local_14;
  size_t local_10;
  int local_c;
  undefined4 local_8;
  char *local_4;
  
  local_8 = *(undefined4 *)(param_1 + 0x1c);
  iVar2 = 0;
  _Dst = (undefined1 *)0x0;
  local_30 = 0;
  if (in_EAX == (code *)0x0) {
    local_30 = 6;
  }
  else {
    local_20 = 0x400;
    _Dst = (undefined1 *)FUN_00693a60(local_8,1,0,0x400,0,&local_30);
    if (local_30 == 0) {
      iVar3 = 0;
      local_24 = 1;
      *_Dst = 0;
      local_28 = 0;
      local_1c = 0;
      local_c = 1;
      local_10 = 0;
      local_18 = in_EAX;
      do {
        local_14 = 0x100;
        local_2c = iVar3;
LAB_00697860:
        sVar5 = local_1c;
        if (local_c != 0) {
          local_10 = FUN_006909c0(param_1,_Dst + local_1c,local_20 - local_1c);
          iVar2 = local_10 + sVar5;
          local_1c = 0;
          local_c = 0;
          local_28 = iVar2;
        }
        if (iVar2 <= iVar3) goto LAB_006978cf;
        local_4 = _Dst + iVar3;
        iVar4 = iVar3;
        if ((char)_Dst[iVar3] != local_14) goto LAB_006978b5;
        iVar3 = iVar3 + 1;
      } while( true );
    }
  }
LAB_00697a1c:
  FUN_00691290(local_8,_Dst);
  return local_30;
LAB_006978b5:
  do {
    if ((_Dst[iVar4] == '\n') || (_Dst[iVar4] == '\r')) {
      if (iVar4 < iVar2) {
        cVar1 = _Dst[iVar4];
        _Dst[iVar4] = 0;
        if (((*local_4 != '#') && (*local_4 != '\x1a')) && (iVar3 < iVar4)) {
          iVar2 = iVar4 - local_2c;
          local_30 = (*local_18)(local_4,iVar2,local_24,&local_18,param_2);
          if (local_30 == -1) {
            local_30 = (*local_18)(local_4,iVar2,local_24,&local_18,param_2);
          }
          if (local_30 != 0) goto LAB_00697a11;
        }
        local_24 = local_24 + 1;
        iVar3 = iVar4 + 1;
        _Dst[iVar4] = cVar1;
        iVar2 = local_28;
        local_2c = iVar3;
        if (cVar1 == '\n') {
          local_14 = 0xd;
        }
        else {
          local_14 = (-(uint)(cVar1 != '\r') & 0xf6) + 10;
        }
        goto LAB_00697860;
      }
      break;
    }
    iVar4 = iVar4 + 1;
  } while (iVar4 < iVar2);
LAB_006978cf:
  if (local_10 == 0) {
LAB_00697a11:
    *param_3 = local_24;
    goto LAB_00697a1c;
  }
  if (iVar3 == 0) {
    if (0xffff < local_20) {
      local_30 = 6;
      goto LAB_00697a1c;
    }
    sVar5 = local_20 * 2;
    _Dst = (undefined1 *)FUN_00693a60(local_8,1,local_20,sVar5,_Dst,&local_30);
    if (local_30 != 0) goto LAB_00697a1c;
    local_1c = local_20;
    local_c = 1;
    local_20 = sVar5;
  }
  else {
    sVar5 = iVar2 - iVar3;
    local_10 = sVar5;
    memcpy(_Dst,_Dst + iVar3,sVar5);
    local_28 = iVar2 - sVar5;
    local_2c = 0;
    local_c = 1;
    iVar2 = local_28;
    iVar3 = local_2c;
    local_1c = sVar5;
  }
  goto LAB_00697860;
}


/* FUN_00697a40 @ 00697a40  kind=gamemisc  attributed-by=none  size=181 */

int FUN_00697a40(undefined4 *param_1)

{
  byte bVar1;
  int in_EAX;
  byte *in_ECX;
  int iVar2;
  undefined *puVar3;
  int iVar4;
  
  if ((in_ECX != (byte *)0x0) && (*in_ECX != 0)) {
    if (in_EAX == 8) {
      puVar3 = &DAT_00723330;
    }
    else if (in_EAX == 0x10) {
      puVar3 = &DAT_00723370;
    }
    else {
      in_EAX = 10;
      puVar3 = &DAT_00723350;
    }
    if ((*in_ECX == 0x30) && ((in_ECX[1] == 0x78 || (in_ECX[1] == 0x58)))) {
      in_EAX = 0x10;
      puVar3 = &DAT_00723370;
      in_ECX = in_ECX + 2;
    }
    iVar2 = (int)(char)*in_ECX;
    iVar4 = 0;
    bVar1 = puVar3[iVar2 >> 3] & (byte)(1 << (*in_ECX & 7));
    while (bVar1 != 0) {
      in_ECX = in_ECX + 1;
      iVar4 = iVar4 * in_EAX + (uint)(byte)(&DAT_007232b0)[iVar2];
      iVar2 = (int)(char)*in_ECX;
      bVar1 = puVar3[iVar2 >> 3] & (byte)(1 << (*in_ECX & 7));
    }
    if (param_1 != (undefined4 *)0x0) {
      *param_1 = in_ECX;
    }
    return iVar4;
  }
  return 0;
}


/* FUN_00697b00 @ 00697b00  kind=gamemisc  attributed-by=none  size=216 */

int FUN_00697b00(undefined4 *param_1)

{
  byte bVar1;
  byte bVar2;
  byte *in_EAX;
  int iVar3;
  int in_EDX;
  undefined *puVar4;
  int iVar5;
  
  if ((in_EAX != (byte *)0x0) && (bVar1 = *in_EAX, bVar1 != 0)) {
    if (in_EDX == 8) {
      puVar4 = &DAT_00723330;
    }
    else if (in_EDX == 0x10) {
      puVar4 = &DAT_00723370;
    }
    else {
      in_EDX = 10;
      puVar4 = &DAT_00723350;
    }
    if (bVar1 == 0x2d) {
      in_EAX = in_EAX + 1;
    }
    if ((*in_EAX == 0x30) && ((in_EAX[1] == 0x78 || (in_EAX[1] == 0x58)))) {
      in_EDX = 0x10;
      puVar4 = &DAT_00723370;
      in_EAX = in_EAX + 2;
    }
    iVar3 = (int)(char)*in_EAX;
    iVar5 = 0;
    bVar2 = puVar4[iVar3 >> 3] & (byte)(1 << (*in_EAX & 7));
    while (bVar2 != 0) {
      in_EAX = in_EAX + 1;
      iVar5 = iVar5 * in_EDX + (uint)(byte)(&DAT_007232b0)[iVar3];
      iVar3 = (int)(char)*in_EAX;
      bVar2 = puVar4[iVar3 >> 3] & (byte)(1 << (*in_EAX & 7));
    }
    if (param_1 != (undefined4 *)0x0) {
      *param_1 = in_EAX;
    }
    if (bVar1 == 0x2d) {
      iVar5 = -iVar5;
    }
    return iVar5;
  }
  return 0;
}


/* FUN_00697be0 @ 00697be0  kind=gamemisc  attributed-by=none  size=224 */

int FUN_00697be0(undefined4 *param_1)

{
  byte bVar1;
  byte bVar2;
  short sVar3;
  byte *in_EAX;
  int iVar4;
  short sVar5;
  int in_EDX;
  undefined *puVar6;
  
  if ((in_EAX != (byte *)0x0) && (bVar1 = *in_EAX, bVar1 != 0)) {
    if (in_EDX == 8) {
      puVar6 = &DAT_00723330;
    }
    else if (in_EDX == 0x10) {
      puVar6 = &DAT_00723370;
    }
    else {
      in_EDX = 10;
      puVar6 = &DAT_00723350;
    }
    sVar5 = (short)in_EDX;
    if (bVar1 == 0x2d) {
      in_EAX = in_EAX + 1;
    }
    if ((*in_EAX == 0x30) && ((in_EAX[1] == 0x78 || (in_EAX[1] == 0x58)))) {
      sVar5 = 0x10;
      puVar6 = &DAT_00723370;
      in_EAX = in_EAX + 2;
    }
    iVar4 = (int)(char)*in_EAX;
    sVar3 = 0;
    bVar2 = puVar6[iVar4 >> 3] & (byte)(1 << (*in_EAX & 7));
    while (bVar2 != 0) {
      sVar3 = (ushort)(byte)(&DAT_007232b0)[iVar4] + sVar5 * sVar3;
      in_EAX = in_EAX + 1;
      iVar4 = (int)(char)*in_EAX;
      bVar2 = puVar6[iVar4 >> 3] & (byte)(1 << (*in_EAX & 7));
    }
    if (param_1 != (undefined4 *)0x0) {
      *param_1 = in_EAX;
    }
    iVar4 = (int)sVar3;
    if (bVar1 == 0x2d) {
      iVar4 = -iVar4;
    }
    return iVar4;
  }
  return 0;
}


/* FUN_00697ce0 @ 00697ce0  kind=gamemisc  attributed-by=none  size=266 */

/* WARNING: Removing unreachable block (ram,0x00697d71) */

int FUN_00697ce0(char *param_1,undefined4 param_2)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  char *pcVar4;
  void *_Dst;
  int iVar5;
  undefined4 *puVar6;
  int unaff_EDI;
  int local_8;
  undefined4 local_4;
  
  uVar2 = *(undefined4 *)(unaff_EDI + 0x4088);
  local_8 = 0;
  local_4 = uVar2;
  iVar3 = FUN_00697430();
  iVar5 = 0;
  if (iVar3 == 0) {
    iVar3 = FUN_00693a60(uVar2,0x10,*(int *)(unaff_EDI + 0x4090),*(int *)(unaff_EDI + 0x4090) + 1,
                         *(undefined4 *)(unaff_EDI + 0x408c),&local_8);
    *(int *)(unaff_EDI + 0x408c) = iVar3;
    iVar5 = local_8;
    if (local_8 == 0) {
      puVar6 = (undefined4 *)(*(int *)(unaff_EDI + 0x4090) * 0x10 + iVar3);
      *puVar6 = 0;
      puVar6[1] = 0;
      puVar6[2] = 0;
      puVar6[3] = 0;
      pcVar4 = param_1;
      do {
        cVar1 = *pcVar4;
        pcVar4 = pcVar4 + 1;
      } while (cVar1 != '\0');
      _Dst = (void *)FUN_00693a60(local_4,1,0,pcVar4 + (1 - (int)(param_1 + 1)),0,&local_8);
      *puVar6 = _Dst;
      iVar5 = local_8;
      if (local_8 == 0) {
        memcpy(_Dst,param_1,(size_t)(pcVar4 + (1 - (int)(param_1 + 1))));
        puVar6[1] = param_2;
        puVar6[2] = 0;
        iVar5 = FUN_006973a0(*(int *)(unaff_EDI + 0x4090) + 0x53,local_4);
        if (iVar5 == 0) {
          *(int *)(unaff_EDI + 0x4090) = *(int *)(unaff_EDI + 0x4090) + 1;
        }
      }
    }
  }
  return iVar5;
}


