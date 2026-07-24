// Unsorted_009 (game_misc) -- cube. 150 functions. Bodies = Ghidra pseudo-C.
// Attribution: see ../attribution.tsv. Toolchain of the original: MSVC 11.0 (VS2012).
#include "Unsorted_009.h"

/* FUN_0063dc90 @ 0063dc90  kind=gamemisc  attributed-by=none  size=115 */

void FUN_0063dc90(uint param_1)

{
  int *in_ECX;
  uint uVar1;
  
  if (param_1 <= (uint)(in_ECX[2] - in_ECX[1] >> 2)) {
    return;
  }
  if (0x3fffffffU - (in_ECX[1] - *in_ECX >> 2) < param_1) {
                    /* WARNING: Subroutine does not return */
    std::_Xlength_error("vector<T> too long");
  }
  uVar1 = in_ECX[2] - *in_ECX >> 2;
  if (0x3fffffff - (uVar1 >> 1) < uVar1) {
    FUN_0063da20();
    return;
  }
  FUN_0063da20();
  return;
}


/* FUN_0063de60 @ 0063de60  kind=gamemisc  attributed-by=none  size=43 */

void FUN_0063de60(void)

{
  int *in_ECX;
  undefined1 local_5;
  
  if (*in_ECX != 0) {
    FUN_00639cf0(*in_ECX,in_ECX[1],&local_5);
                    /* WARNING: Subroutine does not return */
    operator_delete((void *)*in_ECX);
  }
  return;
}


/* FUN_0063e020 @ 0063e020  kind=gamemisc  attributed-by=none  size=2526 */

void FUN_0063e020(int param_1,int param_2,float param_3,int param_4,int param_5)

{
  int iVar1;
  undefined8 *puVar2;
  undefined4 *puVar3;
  int iVar4;
  int in_ECX;
  float *pfVar5;
  float *pfVar6;
  int iVar7;
  undefined4 *puVar8;
  float fVar9;
  double dVar10;
  float fVar11;
  float fVar12;
  undefined8 uVar13;
  int local_e8;
  float local_e4;
  float local_e0;
  int local_dc;
  float local_d8;
  float local_d4;
  float local_d0;
  undefined8 local_cc;
  undefined8 local_c4;
  undefined8 local_bc;
  undefined8 local_b4;
  float local_ac [4];
  float local_9c;
  float fStack_98;
  float local_94;
  float fStack_90;
  float local_8c;
  float fStack_88;
  float local_84;
  float fStack_80;
  float local_7c;
  float fStack_78;
  float local_74;
  float fStack_70;
  float local_6c;
  float fStack_68;
  float local_64;
  float fStack_60;
  float local_5c;
  float fStack_58;
  float local_54;
  float fStack_50;
  undefined8 local_4c;
  undefined8 local_44;
  undefined8 local_3c;
  undefined8 local_34;
  undefined8 local_2c;
  undefined8 local_24;
  undefined8 local_1c;
  undefined8 local_14;
  uint local_c;
  
  local_c = DAT_0076aa78 ^ (uint)&local_e8;
  iVar1 = *(int *)(in_ECX + 0xbcc);
  local_e0 = (float)(param_1 * 0xc);
  local_e4 = (float)((param_2 + 2U) %
                    (uint)(*(int *)(iVar1 + 4 + (int)local_e0) - *(int *)(iVar1 + (int)local_e0) >>
                          3));
  iVar1 = *(int *)(iVar1 + (int)local_e0);
  local_d4 = 1.0 - param_3;
  iVar7 = *(int *)((int)local_e0 + *(int *)(in_ECX + 0xbe4));
  fStack_70 = 0.5;
  fStack_78 = local_d4 * 0.5 *
              (*(float *)(iVar1 + 0xc + param_2 * 8) + *(float *)(iVar1 + 4 + param_2 * 8)) +
              param_3 * 0.5 *
              (*(float *)(iVar1 + 0xc + (int)local_e4 * 8) +
              *(float *)(iVar1 + 4 + (int)local_e4 * 8));
  local_7c = local_d4 * 0.5 *
             (*(float *)(iVar1 + 8 + param_2 * 8) + *(float *)(iVar1 + param_2 * 8)) +
             param_3 * 0.5 *
             (*(float *)(iVar1 + 8 + (int)local_e4 * 8) + *(float *)(iVar1 + (int)local_e4 * 8));
  local_6c = (local_d4 * *(float *)(iVar1 + param_2 * 8) +
             *(float *)(iVar1 + (int)local_e4 * 8) * param_3) - local_7c;
  fStack_68 = (local_d4 * *(float *)(iVar1 + 4 + param_2 * 8) +
              *(float *)(iVar1 + 4 + (int)local_e4 * 8) * param_3) - fStack_78;
  fStack_50 = -local_6c;
  local_74 = *(float *)(iVar7 + (int)local_e4 * 8) * param_3 +
             local_d4 * *(float *)(iVar7 + param_2 * 8);
  dVar10 = (double)(fStack_50 * fStack_50 + fStack_68 * fStack_68);
  local_e8 = in_ECX;
  local_54 = fStack_68;
  libm_sse2_sqrt_precise();
  fVar9 = local_e4;
  fVar12 = (*(float *)(iVar1 + 8 + param_2 * 8) + *(float *)(iVar1 + param_2 * 8)) * 0.5 -
           (*(float *)(iVar1 + 8 + (int)local_e4 * 8) + *(float *)(iVar1 + (int)local_e4 * 8)) * 0.5
  ;
  fVar11 = (*(float *)(iVar1 + 0xc + param_2 * 8) + *(float *)(iVar1 + 4 + param_2 * 8)) * 0.5 -
           (*(float *)(iVar1 + 0xc + (int)local_e4 * 8) + *(float *)(iVar1 + 4 + (int)local_e4 * 8))
           * 0.5;
  local_d8 = (*(float *)(iVar7 + (int)local_e4 * 8) - *(float *)(iVar7 + param_2 * 8)) *
             (float)dVar10;
  dVar10 = (double)(fVar12 * fVar12 + fVar11 * fVar11);
  libm_sse2_sqrt_precise();
  local_64 = -(local_d8 / (float)dVar10);
  iVar1 = *(int *)((int)local_e0 + *(int *)(local_e8 + 0xbd8));
  pfVar6 = (float *)((int)fVar9 * 0x10 + iVar1);
  local_d8 = 0.0;
  pfVar5 = (float *)(param_2 * 0x10 + iVar1);
  local_ac[0] = local_d4 * *pfVar5 + *pfVar6 * param_3;
  local_ac[1] = local_d4 * pfVar5[1] + pfVar6[1] * param_3;
  local_ac[2] = local_d4 * pfVar5[2] + pfVar6[2] * param_3;
  local_ac[3] = local_d4 * pfVar5[3] + pfVar6[3] * param_3;
  fStack_60 = 0.0;
  local_5c = 0.0;
  fStack_58 = -0.5;
  if (param_4 != 0) {
    local_d8 = (0.5 / (float)param_5 + 1.0) * 1.5707964 + 0.0;
  }
  local_d4 = 0.0;
  if (0 < param_5) {
    local_d0 = (float)param_5 + 0.5;
    do {
      local_e4 = (((float)(int)local_d4 + 0.5) * 1.5707964) / local_d0 + local_d8;
      dVar10 = (double)local_e4;
      libm_sse2_cos_precise();
      local_e0 = (float)dVar10;
      dVar10 = (double)local_e4;
      libm_sse2_sin_precise();
      uVar13 = CONCAT44(fStack_78,local_7c);
      local_e4 = (float)dVar10;
      local_4c = CONCAT44(fStack_68,local_6c);
      local_14 = CONCAT44(fStack_50,local_54);
      fVar9 = local_7c + local_54 * local_e0;
      iVar1 = *(int *)(local_e8 + 0xc14);
      puVar2 = *(undefined8 **)(iVar1 + 8);
      fVar11 = fStack_78 + fStack_50 * local_e0;
      _local_94 = CONCAT44(fVar11,fVar9);
      local_cc = CONCAT44(fVar11 + fStack_68 * local_e4,fVar9 + local_6c * local_e4);
      if (&local_cc < puVar2) {
        if (&local_cc < *(undefined8 **)(iVar1 + 4)) goto LAB_0063e4dc;
        iVar7 = (int)&local_cc - (int)*(undefined8 **)(iVar1 + 4) >> 3;
        if (puVar2 == *(undefined8 **)(iVar1 + 0xc)) {
          FUN_00428c80(1);
          uVar13 = CONCAT44(fStack_78,local_7c);
        }
        puVar3 = *(undefined4 **)(iVar1 + 8);
        local_dc = *(int *)(iVar1 + 4);
        if (puVar3 != (undefined4 *)0x0) {
          *puVar3 = *(undefined4 *)(local_dc + iVar7 * 8);
          puVar3[1] = *(undefined4 *)(local_dc + 4 + iVar7 * 8);
        }
      }
      else {
LAB_0063e4dc:
        if (puVar2 == *(undefined8 **)(iVar1 + 0xc)) {
          FUN_00428c80(1);
          uVar13 = CONCAT44(fStack_78,local_7c);
        }
        if (*(undefined8 **)(iVar1 + 8) != (undefined8 *)0x0) {
          **(undefined8 **)(iVar1 + 8) = local_cc;
        }
      }
      local_3c = CONCAT44(fStack_68,local_6c);
      local_1c = CONCAT44(fStack_50,local_54);
      local_8c = (float)uVar13;
      *(int *)(iVar1 + 8) = *(int *)(iVar1 + 8) + 8;
      iVar1 = *(int *)(local_e8 + 0xc14);
      local_8c = local_8c + local_54 * local_e0;
      puVar2 = *(undefined8 **)(iVar1 + 8);
      fStack_88 = (float)((ulonglong)uVar13 >> 0x20);
      fStack_88 = fStack_88 + fStack_50 * local_e0;
      local_b4 = CONCAT44(fStack_88 - fStack_68 * local_e4,local_8c - local_6c * local_e4);
      if (&local_b4 < puVar2) {
        if (&local_b4 < *(undefined8 **)(iVar1 + 4)) goto LAB_0063e614;
        iVar7 = (int)&local_b4 - (int)*(undefined8 **)(iVar1 + 4) >> 3;
        if (puVar2 == *(undefined8 **)(iVar1 + 0xc)) {
          FUN_00428c80(1);
        }
        puVar3 = *(undefined4 **)(iVar1 + 8);
        local_dc = *(int *)(iVar1 + 4);
        if (puVar3 != (undefined4 *)0x0) {
          *puVar3 = *(undefined4 *)(local_dc + iVar7 * 8);
          puVar3[1] = *(undefined4 *)(local_dc + 4 + iVar7 * 8);
        }
      }
      else {
LAB_0063e614:
        if (puVar2 == *(undefined8 **)(iVar1 + 0xc)) {
          FUN_00428c80(1);
        }
        if (*(undefined8 **)(iVar1 + 8) != (undefined8 *)0x0) {
          **(undefined8 **)(iVar1 + 8) = local_b4;
        }
      }
      *(int *)(iVar1 + 8) = *(int *)(iVar1 + 8) + 8;
      iVar1 = *(int *)(local_e8 + 0xc14);
      pfVar5 = *(float **)(iVar1 + 0x20);
      if (local_ac < pfVar5) {
        pfVar6 = *(float **)(iVar1 + 0x1c);
        if (local_ac < pfVar6) goto LAB_0063e692;
        if (pfVar5 == *(float **)(iVar1 + 0x24)) {
          FUN_00428d00(1);
        }
        puVar3 = *(undefined4 **)(iVar1 + 0x20);
        puVar8 = (undefined4 *)
                 (((int)local_ac - (int)pfVar6 & 0xfffffff0U) + *(int *)(iVar1 + 0x1c));
        if (puVar3 != (undefined4 *)0x0) {
          *puVar3 = *puVar8;
          puVar3[1] = puVar8[1];
          puVar3[2] = puVar8[2];
          puVar3[3] = puVar8[3];
        }
      }
      else {
LAB_0063e692:
        if (pfVar5 == *(float **)(iVar1 + 0x24)) {
          FUN_00428d00(1);
        }
        puVar2 = *(undefined8 **)(iVar1 + 0x20);
        if (puVar2 != (undefined8 *)0x0) {
          *puVar2 = CONCAT44(local_ac[1],local_ac[0]);
          puVar2[1] = CONCAT44(local_ac[3],local_ac[2]);
        }
      }
      *(int *)(iVar1 + 0x20) = *(int *)(iVar1 + 0x20) + 0x10;
      iVar1 = *(int *)(local_e8 + 0xc14);
      pfVar5 = *(float **)(iVar1 + 0x20);
      if (local_ac < pfVar5) {
        pfVar6 = *(float **)(iVar1 + 0x1c);
        if (local_ac < pfVar6) goto LAB_0063e71b;
        if (pfVar5 == *(float **)(iVar1 + 0x24)) {
          FUN_00428d00(1);
        }
        puVar3 = *(undefined4 **)(iVar1 + 0x20);
        puVar8 = (undefined4 *)
                 (((int)local_ac - (int)pfVar6 & 0xfffffff0U) + *(int *)(iVar1 + 0x1c));
        if (puVar3 != (undefined4 *)0x0) {
          *puVar3 = *puVar8;
          puVar3[1] = puVar8[1];
          puVar3[2] = puVar8[2];
          puVar3[3] = puVar8[3];
        }
      }
      else {
LAB_0063e71b:
        if (pfVar5 == *(float **)(iVar1 + 0x24)) {
          FUN_00428d00(1);
        }
        puVar2 = *(undefined8 **)(iVar1 + 0x20);
        if (puVar2 != (undefined8 *)0x0) {
          *puVar2 = CONCAT44(local_ac[1],local_ac[0]);
          puVar2[1] = CONCAT44(local_ac[3],local_ac[2]);
        }
      }
      local_2c = CONCAT44(fStack_58,local_5c);
      uVar13 = CONCAT44(fStack_70,local_74);
      local_44 = CONCAT44(fStack_60,local_64);
      *(int *)(iVar1 + 0x20) = *(int *)(iVar1 + 0x20) + 0x10;
      iVar1 = *(int *)(local_e8 + 0xc14);
      fVar9 = local_74 + local_64 * local_e0;
      puVar2 = *(undefined8 **)(iVar1 + 0x14);
      fVar11 = fStack_70 + fStack_60 * local_e0;
      _local_84 = CONCAT44(fVar11,fVar9);
      local_c4 = CONCAT44(fVar11 + fStack_58 * local_e4,fVar9 + local_5c * local_e4);
      if (&local_c4 < puVar2) {
        if (&local_c4 < *(undefined8 **)(iVar1 + 0x10)) goto LAB_0063e870;
        iVar7 = (int)&local_c4 - (int)*(undefined8 **)(iVar1 + 0x10) >> 3;
        if (puVar2 == *(undefined8 **)(iVar1 + 0x18)) {
          FUN_00428c80(1);
          uVar13 = CONCAT44(fStack_70,local_74);
        }
        puVar3 = *(undefined4 **)(iVar1 + 0x14);
        local_dc = *(int *)(iVar1 + 0x10);
        if (puVar3 != (undefined4 *)0x0) {
          *puVar3 = *(undefined4 *)(local_dc + iVar7 * 8);
          puVar3[1] = *(undefined4 *)(local_dc + 4 + iVar7 * 8);
        }
      }
      else {
LAB_0063e870:
        if (puVar2 == *(undefined8 **)(iVar1 + 0x18)) {
          FUN_00428c80(1);
          uVar13 = CONCAT44(fStack_70,local_74);
        }
        if (*(undefined8 **)(iVar1 + 0x14) != (undefined8 *)0x0) {
          **(undefined8 **)(iVar1 + 0x14) = local_c4;
        }
      }
      local_34 = CONCAT44(fStack_58,local_5c);
      local_24 = CONCAT44(fStack_60,local_64);
      local_9c = (float)uVar13;
      *(int *)(iVar1 + 0x14) = *(int *)(iVar1 + 0x14) + 8;
      iVar1 = *(int *)(local_e8 + 0xc14);
      local_9c = local_9c + local_64 * local_e0;
      puVar2 = *(undefined8 **)(iVar1 + 0x14);
      fStack_98 = (float)((ulonglong)uVar13 >> 0x20);
      fStack_98 = fStack_98 + fStack_60 * local_e0;
      local_bc = CONCAT44(fStack_98 - fStack_58 * local_e4,local_9c - local_5c * local_e4);
      if (&local_bc < puVar2) {
        if (&local_bc < *(undefined8 **)(iVar1 + 0x10)) goto LAB_0063e99e;
        iVar7 = (int)&local_bc - (int)*(undefined8 **)(iVar1 + 0x10) >> 3;
        if (puVar2 == *(undefined8 **)(iVar1 + 0x18)) {
          FUN_00428c80(1);
        }
        puVar3 = *(undefined4 **)(iVar1 + 0x14);
        iVar4 = *(int *)(iVar1 + 0x10);
        if (puVar3 != (undefined4 *)0x0) {
          *puVar3 = *(undefined4 *)(iVar4 + iVar7 * 8);
          puVar3[1] = *(undefined4 *)(iVar4 + 4 + iVar7 * 8);
        }
      }
      else {
LAB_0063e99e:
        if (puVar2 == *(undefined8 **)(iVar1 + 0x18)) {
          FUN_00428c80(1);
        }
        if (*(undefined8 **)(iVar1 + 0x14) != (undefined8 *)0x0) {
          **(undefined8 **)(iVar1 + 0x14) = local_bc;
        }
      }
      *(int *)(iVar1 + 0x14) = *(int *)(iVar1 + 0x14) + 8;
      local_d4 = (float)((int)local_d4 + 1);
    } while ((int)local_d4 < param_5);
  }
  __security_check_cookie(local_c ^ (uint)&local_e8);
  return;
}


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


/* FUN_00641180 @ 00641180  kind=gamemisc  attributed-by=none  size=250 */

StaticMeshShape * FUN_00641180(void)

{
  int iVar1;
  StaticMeshShape *pSVar2;
  int in_ECX;
  int iVar3;
  int iVar4;
  int local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006f5f8b;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  iVar1 = *(int *)(in_ECX + 0xc10);
  local_14 = 0;
  iVar4 = 0;
  if ((iVar1 != 0) && ((~(byte)(*(uint *)(in_ECX + 0x85c) >> 2) & 1) != 0)) {
    cube::Controller::vfunction12();
    *(undefined4 *)(in_ECX + 0xc10) = 0;
    iVar4 = iVar1;
  }
  iVar1 = *(int *)(in_ECX + 0xc14);
  iVar3 = 0;
  if ((iVar1 != 0) && ((*(uint *)(in_ECX + 0x85c) >> 1 & 1) != 0)) {
    cube::Controller::vfunction12();
    *(undefined4 *)(in_ECX + 0xc14) = 0;
    iVar3 = iVar1;
  }
  iVar1 = *(int *)(in_ECX + 0xc18);
  if ((iVar1 != 0) && ((*(uint *)(in_ECX + 0x85c) >> 4 & 1) != 0)) {
    cube::Controller::vfunction12();
    *(undefined4 *)(in_ECX + 0xc18) = 0;
    local_14 = iVar1;
  }
  pSVar2 = operator_new(0x78);
  local_8 = 0;
  if (pSVar2 != (StaticMeshShape *)0x0) {
    pSVar2 = plasma::StaticMeshShape::StaticMeshShape
                       (pSVar2,*(int *)(in_ECX + 4),iVar4,iVar3,local_14,in_ECX + 0xc);
    ExceptionList = local_10;
    return pSVar2;
  }
  ExceptionList = local_10;
  return (StaticMeshShape *)0x0;
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


/* FUN_00642ab0 @ 00642ab0  kind=gamemisc  attributed-by=none  size=22 */

int FUN_00642ab0(void)

{
  int *in_ECX;
  
  return (in_ECX[1] - *in_ECX) / 0xc;
}


/* FUN_0064b0d0 @ 0064b0d0  kind=gamemisc  attributed-by=none  size=498 */

basic_ostream<wchar_t,std::char_traits<wchar_t>_> *
FUN_0064b0d0(basic_ostream<wchar_t,std::char_traits<wchar_t>_> *param_1,wchar_t param_2)

{
  int *piVar1;
  int iVar2;
  basic_ostream<wchar_t,std::char_traits<wchar_t>_> *this;
  uint uVar3;
  ushort uVar4;
  int iVar5;
  bool bVar6;
  int local_28;
  int iStack_24;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006f5fe0;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  iVar5 = 0;
  piVar1 = *(int **)((int)&param_1[0xe].vbtablePtr +
                    param_1->vbtablePtr->basic_ios<wchar_t,std::char_traits<wchar_t>_>_offset);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 4))();
  }
  local_8 = 0;
  iVar2 = param_1->vbtablePtr->basic_ios<wchar_t,std::char_traits<wchar_t>_>_offset;
  if ((*(int *)((int)&param_1[3].vbtablePtr + iVar2) == 0) &&
     (this = *(basic_ostream<wchar_t,std::char_traits<wchar_t>_> **)
              ((int)&param_1[0xf].vbtablePtr + iVar2),
     this != (basic_ostream<wchar_t,std::char_traits<wchar_t>_> *)0x0)) {
    std::basic_ostream<wchar_t,std::char_traits<wchar_t>_>::flush(this);
  }
  iVar2 = param_1->vbtablePtr->basic_ios<wchar_t,std::char_traits<wchar_t>_>_offset;
  if (*(int *)((int)&param_1[3].vbtablePtr + iVar2) == 0) {
    iStack_24 = *(int *)((int)&param_1[9].vbtablePtr + iVar2);
    uVar3 = *(uint *)((int)&param_1[8].vbtablePtr + iVar2);
    if ((iStack_24 < 1) && ((iStack_24 < 0 || (uVar3 < 2)))) {
      iStack_24 = 0;
      local_28 = 0;
    }
    else {
      local_28 = uVar3 - 1;
      iStack_24 = iStack_24 - (uint)(uVar3 == 0);
    }
    local_8 = 2;
    if ((*(uint *)((int)&param_1[5].vbtablePtr + iVar2) & 0x1c0) == 0x40) {
LAB_0064b1e8:
      uVar4 = std::basic_streambuf<wchar_t,std::char_traits<wchar_t>_>::sputc
                        (*(basic_streambuf<wchar_t,std::char_traits<wchar_t>_> **)
                          ((int)&param_1[0xe].vbtablePtr +
                          param_1->vbtablePtr->basic_ios<wchar_t,std::char_traits<wchar_t>_>_offset)
                         ,param_2);
      if (uVar4 == 0xffff) {
        iVar5 = 4;
      }
      for (; ((iVar5 == 0 && (-1 < iStack_24)) && ((0 < iStack_24 || (local_28 != 0))));
          local_28 = local_28 + -1) {
        iVar2 = param_1->vbtablePtr->basic_ios<wchar_t,std::char_traits<wchar_t>_>_offset;
        uVar4 = std::basic_streambuf<wchar_t,std::char_traits<wchar_t>_>::sputc
                          (*(basic_streambuf<wchar_t,std::char_traits<wchar_t>_> **)
                            ((int)&param_1[0xe].vbtablePtr + iVar2),
                           *(wchar_t *)((int)&param_1[0x10].vbtablePtr + iVar2));
        if (uVar4 == 0xffff) {
          iVar5 = 4;
        }
        iStack_24 = iStack_24 + -1 + (uint)(local_28 != 0);
      }
    }
    else {
      while (iVar5 == 0) {
        if ((iStack_24 < 0) || ((iStack_24 < 1 && (local_28 == 0)))) goto LAB_0064b1e8;
        iVar2 = param_1->vbtablePtr->basic_ios<wchar_t,std::char_traits<wchar_t>_>_offset;
        uVar4 = std::basic_streambuf<wchar_t,std::char_traits<wchar_t>_>::sputc
                          (*(basic_streambuf<wchar_t,std::char_traits<wchar_t>_> **)
                            ((int)&param_1[0xe].vbtablePtr + iVar2),
                           *(wchar_t *)((int)&param_1[0x10].vbtablePtr + iVar2));
        if (uVar4 == 0xffff) {
          iVar5 = 4;
        }
        bVar6 = local_28 != 0;
        local_28 = local_28 + -1;
        iStack_24 = iStack_24 + -1 + (uint)bVar6;
      }
    }
  }
  local_8 = 1;
  iVar2 = param_1->vbtablePtr->basic_ios<wchar_t,std::char_traits<wchar_t>_>_offset;
  *(undefined4 *)((int)&param_1[8].vbtablePtr + iVar2) = 0;
  *(undefined4 *)((int)&param_1[9].vbtablePtr + iVar2) = 0;
  std::basic_ios<wchar_t,std::char_traits<wchar_t>_>::setstate
            ((basic_ios<wchar_t,std::char_traits<wchar_t>_> *)
             ((int)&param_1->vbtablePtr +
             param_1->vbtablePtr->basic_ios<wchar_t,std::char_traits<wchar_t>_>_offset),iVar5,false)
  ;
  local_8 = 0xffffffff;
  bVar6 = std::uncaught_exception();
  if (!bVar6) {
    std::basic_ostream<wchar_t,std::char_traits<wchar_t>_>::_Osfx(param_1);
  }
  piVar1 = *(int **)((int)&param_1[0xe].vbtablePtr +
                    param_1->vbtablePtr->basic_ios<wchar_t,std::char_traits<wchar_t>_>_offset);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))();
  }
  ExceptionList = local_10;
  return param_1;
}


/* FUN_0064b460 @ 0064b460  kind=gamemisc  attributed-by=none  size=34 */

void FUN_0064b460(undefined2 *param_1)

{
  int iVar1;
  
  iVar1 = FUN_0064e410();
  *(undefined2 *)(iVar1 + 0xc) = 0;
  if ((undefined2 *)(iVar1 + 0xe) != (undefined2 *)0x0) {
    *(undefined2 *)(iVar1 + 0xe) = *param_1;
  }
  return;
}


/* FUN_0064b540 @ 0064b540  kind=gamemisc  attributed-by=none  size=539 */

void FUN_0064b540(undefined4 *param_1,char param_2,undefined4 *param_3,undefined4 param_4,
                 int *param_5)

{
  char cVar1;
  int *piVar2;
  int iVar3;
  int *piVar4;
  int *in_ECX;
  int *piVar5;
  int *piVar6;
  
  if (0x5d1745b < (uint)in_ECX[1]) {
    if (0xf < (uint)param_5[10]) {
                    /* WARNING: Subroutine does not return */
      operator_delete((void *)param_5[5]);
    }
    param_5[10] = 0xf;
    param_5[9] = 0;
    *(undefined1 *)(param_5 + 5) = 0;
                    /* WARNING: Subroutine does not return */
    operator_delete(param_5);
  }
  in_ECX[1] = in_ECX[1] + 1;
  param_5[1] = (int)param_3;
  if (param_3 == (undefined4 *)*in_ECX) {
    ((undefined4 *)*in_ECX)[1] = param_5;
    *(int **)*in_ECX = param_5;
    *(int **)(*in_ECX + 8) = param_5;
  }
  else if (param_2 == '\0') {
    param_3[2] = param_5;
    if (param_3 == *(undefined4 **)(*in_ECX + 8)) {
      *(int **)(*in_ECX + 8) = param_5;
    }
  }
  else {
    *param_3 = param_5;
    if (param_3 == *(undefined4 **)*in_ECX) {
      *(int **)*in_ECX = param_5;
    }
  }
  cVar1 = *(char *)(param_5[1] + 0xc);
  piVar4 = param_5;
  do {
    if (cVar1 != '\0') {
      *(undefined1 *)(*(int *)(*in_ECX + 4) + 0xc) = 1;
      *param_1 = param_5;
      return;
    }
    piVar6 = (int *)piVar4[1];
    piVar5 = *(int **)piVar6[1];
    if (piVar6 == piVar5) {
      piVar5 = (int *)((undefined4 *)piVar6[1])[2];
      if ((char)piVar5[3] != '\0') {
        if (piVar4 == (int *)piVar6[2]) {
          piVar4 = (int *)piVar6[2];
          piVar6[2] = *piVar4;
          if (*(char *)(*piVar4 + 0xd) == '\0') {
            *(int **)(*piVar4 + 4) = piVar6;
          }
          piVar4[1] = piVar6[1];
          if (piVar6 == *(int **)(*in_ECX + 4)) {
            *(int **)(*in_ECX + 4) = piVar4;
          }
          else {
            piVar5 = (int *)piVar6[1];
            if (piVar6 == (int *)*piVar5) {
              *piVar5 = (int)piVar4;
            }
            else {
              piVar5[2] = (int)piVar4;
            }
          }
          *piVar4 = (int)piVar6;
          piVar6[1] = (int)piVar4;
          piVar4 = piVar6;
        }
        *(undefined1 *)(piVar4[1] + 0xc) = 1;
        *(undefined1 *)(*(int *)(piVar4[1] + 4) + 0xc) = 0;
        piVar6 = *(int **)(piVar4[1] + 4);
        piVar5 = (int *)*piVar6;
        *piVar6 = piVar5[2];
        if (*(char *)(piVar5[2] + 0xd) == '\0') {
          *(int **)(piVar5[2] + 4) = piVar6;
        }
        piVar5[1] = piVar6[1];
        if (piVar6 == *(int **)(*in_ECX + 4)) {
          *(int **)(*in_ECX + 4) = piVar5;
          piVar5[2] = (int)piVar6;
        }
        else {
          piVar2 = (int *)piVar6[1];
          if (piVar6 == (int *)piVar2[2]) {
            piVar2[2] = (int)piVar5;
            piVar5[2] = (int)piVar6;
          }
          else {
            *piVar2 = (int)piVar5;
            piVar5[2] = (int)piVar6;
          }
        }
        goto LAB_0064b74a;
      }
LAB_0064b6a1:
      *(undefined1 *)(piVar6 + 3) = 1;
      *(undefined1 *)(piVar5 + 3) = 1;
      *(undefined1 *)(*(int *)(piVar4[1] + 4) + 0xc) = 0;
      piVar4 = *(int **)(piVar4[1] + 4);
    }
    else {
      if ((char)piVar5[3] == '\0') goto LAB_0064b6a1;
      if (piVar4 == (int *)*piVar6) {
        iVar3 = *piVar6;
        *piVar6 = *(int *)(iVar3 + 8);
        if (*(char *)(*(int *)(iVar3 + 8) + 0xd) == '\0') {
          *(int **)(*(int *)(iVar3 + 8) + 4) = piVar6;
        }
        *(int *)(iVar3 + 4) = piVar6[1];
        if (piVar6 == *(int **)(*in_ECX + 4)) {
          *(int *)(*in_ECX + 4) = iVar3;
        }
        else {
          piVar4 = (int *)piVar6[1];
          if (piVar6 == (int *)piVar4[2]) {
            piVar4[2] = iVar3;
          }
          else {
            *piVar4 = iVar3;
          }
        }
        *(int **)(iVar3 + 8) = piVar6;
        piVar6[1] = iVar3;
        piVar4 = piVar6;
      }
      *(undefined1 *)(piVar4[1] + 0xc) = 1;
      *(undefined1 *)(*(int *)(piVar4[1] + 4) + 0xc) = 0;
      piVar6 = *(int **)(piVar4[1] + 4);
      piVar5 = (int *)piVar6[2];
      piVar6[2] = *piVar5;
      if (*(char *)(*piVar5 + 0xd) == '\0') {
        *(int **)(*piVar5 + 4) = piVar6;
      }
      piVar5[1] = piVar6[1];
      if (piVar6 == *(int **)(*in_ECX + 4)) {
        *(int **)(*in_ECX + 4) = piVar5;
      }
      else {
        piVar2 = (int *)piVar6[1];
        if (piVar6 == (int *)*piVar2) {
          *piVar2 = (int)piVar5;
        }
        else {
          piVar2[2] = (int)piVar5;
        }
      }
      *piVar5 = (int)piVar6;
LAB_0064b74a:
      piVar6[1] = (int)piVar5;
    }
    cVar1 = *(char *)(piVar4[1] + 0xc);
  } while( true );
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


/* FUN_0064d810 @ 0064d810  kind=gamemisc  attributed-by=none  size=24 */

void FUN_0064d810(void)

{
  Attribute *in_ECX;
  
  if (in_ECX[1].vftablePtr != (Attribute_vftable *)0x0) {
                    /* WARNING: Subroutine does not return */
    operator_delete(in_ECX[1].vftablePtr);
  }
  plasma::Attribute::~Attribute(in_ECX);
  return;
}


/* FUN_0064dd20 @ 0064dd20  kind=gamemisc  attributed-by=none  size=34 */

void FUN_0064dd20(void)

{
  int in_ECX;
  undefined1 local_8 [4];
  
  FUN_0043f040(local_8,**(undefined4 **)(in_ECX + 0x18),*(undefined4 **)(in_ECX + 0x18));
                    /* WARNING: Subroutine does not return */
  operator_delete(*(void **)(in_ECX + 0x18));
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


/* FUN_0064f080 @ 0064f080  kind=gamemisc  attributed-by=none  size=120 */

Button * FUN_0064f080(int param_1,undefined4 param_2,undefined4 param_3)

{
  Button *pBVar1;
  int in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006f661b;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  pBVar1 = operator_new(0x238);
  local_8 = 0;
  if (pBVar1 != (Button *)0x0) {
    pBVar1 = plasma::Button::Button(pBVar1,in_ECX,param_1,param_2,param_3);
    ExceptionList = local_10;
    return pBVar1;
  }
  ExceptionList = local_10;
  return (Button *)0x0;
}


/* FUN_0064f200 @ 0064f200  kind=gamemisc  attributed-by=none  size=117 */

Edit * FUN_0064f200(int param_1,undefined4 param_2)

{
  Edit *pEVar1;
  int in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006f661b;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  pEVar1 = operator_new(0x17c);
  local_8 = 0;
  if (pEVar1 != (Edit *)0x0) {
    pEVar1 = plasma::Edit::Edit(pEVar1,in_ECX,param_1,param_2);
    ExceptionList = local_10;
    return pEVar1;
  }
  ExceptionList = local_10;
  return (Edit *)0x0;
}


/* FUN_0064f300 @ 0064f300  kind=gamemisc  attributed-by=none  size=117 */

ListWidget * FUN_0064f300(int param_1,undefined4 param_2)

{
  ListWidget *pLVar1;
  int in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006f661b;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  pLVar1 = operator_new(0x160);
  local_8 = 0;
  if (pLVar1 != (ListWidget *)0x0) {
    pLVar1 = plasma::ListWidget::ListWidget(pLVar1,in_ECX,param_1,param_2);
    ExceptionList = local_10;
    return pLVar1;
  }
  ExceptionList = local_10;
  return (ListWidget *)0x0;
}


/* FUN_006500d0 @ 006500d0  kind=gamemisc  attributed-by=none  size=117 */

PopUpButton * FUN_006500d0(int param_1,undefined4 param_2)

{
  PopUpButton *pPVar1;
  int in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006f661b;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  pPVar1 = operator_new(0x240);
  local_8 = 0;
  if (pPVar1 != (PopUpButton *)0x0) {
    pPVar1 = plasma::PopUpButton::PopUpButton(pPVar1,in_ECX,param_1,param_2);
    ExceptionList = local_10;
    return pPVar1;
  }
  ExceptionList = local_10;
  return (PopUpButton *)0x0;
}


/* FUN_00650160 @ 00650160  kind=gamemisc  attributed-by=none  size=117 */

ScrollButton * FUN_00650160(int param_1,undefined4 param_2)

{
  ScrollButton *pSVar1;
  int in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006f661b;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  pSVar1 = operator_new(0x24c);
  local_8 = 0;
  if (pSVar1 != (ScrollButton *)0x0) {
    pSVar1 = plasma::ScrollButton::ScrollButton(pSVar1,in_ECX,param_1,param_2);
    ExceptionList = local_10;
    return pSVar1;
  }
  ExceptionList = local_10;
  return (ScrollButton *)0x0;
}


/* FUN_006501e0 @ 006501e0  kind=gamemisc  attributed-by=none  size=117 */

ScrollSlider * FUN_006501e0(int param_1,undefined4 param_2)

{
  ScrollSlider *pSVar1;
  int in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006f661b;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  pSVar1 = operator_new(0x254);
  local_8 = 0;
  if (pSVar1 != (ScrollSlider *)0x0) {
    pSVar1 = plasma::ScrollSlider::ScrollSlider(pSVar1,in_ECX,param_1,param_2);
    ExceptionList = local_10;
    return pSVar1;
  }
  ExceptionList = local_10;
  return (ScrollSlider *)0x0;
}


/* FUN_006502e0 @ 006502e0  kind=gamemisc  attributed-by=none  size=117 */

undefined4 FUN_006502e0(undefined4 param_1,undefined4 param_2)

{
  TextShape *this;
  undefined4 extraout_EAX;
  int in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006f661b;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  this = operator_new(0x21c);
  local_8 = 0;
  if (this != (TextShape *)0x0) {
    plasma::TextShape::TextShape(this,in_ECX,param_1,param_2);
    ExceptionList = local_10;
    return extraout_EAX;
  }
  ExceptionList = local_10;
  return 0;
}


/* FUN_006504e0 @ 006504e0  kind=gamemisc  attributed-by=none  size=673 */

void FUN_006504e0(undefined4 *param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  int in_ECX;
  undefined4 *local_20;
  undefined1 local_18 [4];
  undefined1 local_14 [4];
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puVar2 = param_1;
  local_8 = 0xffffffff;
  puStack_c = &LAB_006f3038;
  local_10 = ExceptionList;
  if (param_1[1] != in_ECX) {
    return;
  }
  ExceptionList = &local_10;
  if (param_1 == *(undefined4 **)(in_ECX + 200)) {
    *(undefined4 *)(in_ECX + 200) = 0;
    FUN_00652c10(*(undefined4 *)(in_ECX + 0xd4),*(undefined4 *)(in_ECX + 0xd8));
  }
  if (puVar2 == *(undefined4 **)(in_ECX + 0xc4)) {
    *(undefined4 *)(in_ECX + 0xc4) = 0;
  }
  FUN_006303d0(puVar2 + 0xb);
  local_8 = 0;
  for (puVar3 = (undefined4 *)*local_20; puVar3 != local_20; puVar3 = (undefined4 *)*puVar3) {
    FUN_006504e0(puVar3[2]);
  }
  if (puVar2[10] != 0) {
    FUN_00636870(puVar2);
  }
  puVar3 = (undefined4 *)puVar2[0xe];
  if (puVar3 != (undefined4 *)0x0) {
    if (puVar3[0x6b] == 1) {
      EnterCriticalSection((LPCRITICAL_SECTION)(in_ECX + 0x58));
      piVar1 = (int *)puVar3[0x8c];
      if (piVar1 != *(int **)(in_ECX + 0x84)) {
        *(int *)piVar1[1] = *piVar1;
        *(int *)(*piVar1 + 4) = piVar1[1];
                    /* WARNING: Subroutine does not return */
        operator_delete(piVar1);
      }
      LeaveCriticalSection((LPCRITICAL_SECTION)(in_ECX + 0x58));
      (**(code **)*puVar3)(1);
    }
    else {
      puVar3 = (undefined4 *)FUN_00630ae0(local_18,&param_1);
      FUN_0067eb10(local_14,*puVar3,puVar3[1]);
    }
  }
  puVar3 = (undefined4 *)puVar2[0xd];
  if (puVar3 != (undefined4 *)0x0) {
    if (puVar3[0x15] == 1) {
      EnterCriticalSection((LPCRITICAL_SECTION)(in_ECX + 0x58));
      piVar1 = (int *)puVar3[0x13];
      if (piVar1 != *(int **)(in_ECX + 0x74)) {
        *(int *)piVar1[1] = *piVar1;
        *(int *)(*piVar1 + 4) = piVar1[1];
                    /* WARNING: Subroutine does not return */
        operator_delete(piVar1);
      }
      LeaveCriticalSection((LPCRITICAL_SECTION)(in_ECX + 0x58));
      (**(code **)*puVar3)(1);
    }
    else {
      puVar3 = (undefined4 *)FUN_00630ae0(local_18,&param_1);
      FUN_0067eb10(local_14,*puVar3,puVar3[1]);
    }
  }
  puVar3 = (undefined4 *)puVar2[0xf];
  if (puVar3 != (undefined4 *)0x0) {
    if (puVar3[0x82] == 1) {
      EnterCriticalSection((LPCRITICAL_SECTION)(in_ECX + 0x58));
      piVar1 = (int *)puVar3[0x83];
      if (piVar1 != *(int **)(in_ECX + 0x8c)) {
        *(int *)piVar1[1] = *piVar1;
        *(int *)(*piVar1 + 4) = piVar1[1];
                    /* WARNING: Subroutine does not return */
        operator_delete(piVar1);
      }
      LeaveCriticalSection((LPCRITICAL_SECTION)(in_ECX + 0x58));
      (**(code **)*puVar3)(1);
    }
    else {
      puVar3 = (undefined4 *)FUN_00630ae0(local_18,&param_1);
      FUN_0067eb10(&param_1,*puVar3,puVar3[1]);
    }
  }
  if (puVar2[0x10] != 0) {
    FUN_006508f0(puVar2[0x10]);
  }
  EnterCriticalSection((LPCRITICAL_SECTION)(in_ECX + 0x58));
  piVar1 = (int *)puVar2[0x35];
  if (piVar1 != *(int **)(in_ECX + 0x94)) {
    *(int *)piVar1[1] = *piVar1;
    *(int *)(*piVar1 + 4) = piVar1[1];
                    /* WARNING: Subroutine does not return */
    operator_delete(piVar1);
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)(in_ECX + 0x58));
  (**(code **)*puVar2)(1);
  puVar2 = (undefined4 *)*local_20;
  *local_20 = local_20;
  local_20[1] = local_20;
  if (puVar2 != local_20) {
                    /* WARNING: Subroutine does not return */
    operator_delete(puVar2);
  }
                    /* WARNING: Subroutine does not return */
  operator_delete(local_20);
}


/* FUN_00650890 @ 00650890  kind=gamemisc  attributed-by=none  size=78 */

void FUN_00650890(undefined4 *param_1)

{
  int *piVar1;
  int in_ECX;
  
  EnterCriticalSection((LPCRITICAL_SECTION)(in_ECX + 0x58));
  piVar1 = (int *)param_1[0x8c];
  if (piVar1 != *(int **)(in_ECX + 0x84)) {
    *(int *)piVar1[1] = *piVar1;
    *(int *)(*piVar1 + 4) = piVar1[1];
                    /* WARNING: Subroutine does not return */
    operator_delete(piVar1);
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)(in_ECX + 0x58));
  (**(code **)*param_1)(1);
  return;
}


/* FUN_006508f0 @ 006508f0  kind=gamemisc  attributed-by=none  size=129 */

void FUN_006508f0(undefined4 *param_1)

{
  int *piVar1;
  int in_ECX;
  
  if (param_1 == *(undefined4 **)(in_ECX + 0xcc)) {
    *(undefined4 *)(in_ECX + 0xcc) = 0;
  }
  if (param_1 == *(undefined4 **)(in_ECX + 0xd0)) {
    *(undefined4 *)(in_ECX + 0xd0) = 0;
  }
  if (param_1 == *(undefined4 **)(in_ECX + 0xfc)) {
    *(undefined4 *)(in_ECX + 0xfc) = 0;
  }
  EnterCriticalSection((LPCRITICAL_SECTION)(in_ECX + 0x58));
  piVar1 = (int *)param_1[0x56];
  if (piVar1 != *(int **)(in_ECX + 0x7c)) {
    *(int *)piVar1[1] = *piVar1;
    *(int *)(*piVar1 + 4) = piVar1[1];
                    /* WARNING: Subroutine does not return */
    operator_delete(piVar1);
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)(in_ECX + 0x58));
  (**(code **)*param_1)(1);
  return;
}


/* Catch@00650dfb @ 00650dfb  kind=gamemisc  attributed-by=none  size=6 */

undefined * Catch_00650dfb(void)

{
  return &DAT_00650e01;
}


/* FUN_00652710 @ 00652710  kind=gamemisc  attributed-by=none  size=32 */

void FUN_00652710(void)

{
  int *piVar1;
  int in_ECX;
  
  piVar1 = *(int **)(in_ECX + 0xcc);
  if ((piVar1 != (int *)0x0) && ((char)piVar1[0x57] != '\0')) {
                    /* WARNING: Could not recover jumptable at 0x00652729. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*piVar1 + 0x68))();
    return;
  }
  return;
}


/* FUN_00652730 @ 00652730  kind=gamemisc  attributed-by=none  size=84 */

void FUN_00652730(uint param_1)

{
  int *piVar1;
  uint uVar2;
  int in_ECX;
  undefined1 local_c [8];
  
  uVar2 = param_1;
  *(uint *)(in_ECX + 0xf8) = param_1 & 0xffff;
  FUN_0064bce0(local_c,0,&param_1,DAT_0076dea8);
  piVar1 = *(int **)(in_ECX + 0xcc);
  if ((piVar1 != (int *)0x0) && ((char)piVar1[0x57] != '\0')) {
    (**(code **)(*piVar1 + 0x60))(uVar2);
  }
  return;
}


/* FUN_00652790 @ 00652790  kind=gamemisc  attributed-by=none  size=96 */

void FUN_00652790(uint param_1)

{
  int *piVar1;
  uint uVar2;
  undefined4 *puVar3;
  int in_ECX;
  undefined1 local_c [8];
  
  uVar2 = param_1;
  *(uint *)(in_ECX + 0xf8) = param_1 & 0xffff;
  puVar3 = (undefined4 *)FUN_0064e490(local_c,&param_1);
  FUN_0067eb10(&param_1,*puVar3,puVar3[1]);
  piVar1 = *(int **)(in_ECX + 0xcc);
  if ((piVar1 != (int *)0x0) && ((char)piVar1[0x57] != '\0')) {
    (**(code **)(*piVar1 + 100))(uVar2);
  }
  return;
}


/* FUN_006531e0 @ 006531e0  kind=gamemisc  attributed-by=none  size=7 */

undefined4 FUN_006531e0(void)

{
  int in_ECX;
  
  return *(undefined4 *)(in_ECX + 0xcc);
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


/* FUN_00653620 @ 00653620  kind=gamemisc  attributed-by=none  size=83 */

void FUN_00653620(int param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 *puVar2;
  int *piVar3;
  
  if (((param_1 != 0) && ((~(byte)(*(uint *)(param_1 + 200) >> 1) & 1) != 0)) &&
     (iVar1 = *(int *)(param_1 + 0x44), iVar1 != 0)) {
    param_1 = param_2;
    piVar3 = (int *)FUN_00468910(&param_1);
    puVar2 = (undefined4 *)*piVar3;
    if ((puVar2 != (undefined4 *)0x0) &&
       ((*(char *)(iVar1 + 0x15c) != '\0' || (*(char *)(puVar2 + 1) == '\0')))) {
      (**(code **)*puVar2)();
    }
  }
  return;
}


/* FUN_00658530 @ 00658530  kind=gamemisc  attributed-by=none  size=238 */

void FUN_00658530(undefined1 *param_1,basic_istream<char,std::char_traits<char>_> *param_2)

{
  char cVar1;
  char *pcVar2;
  int iVar3;
  char *pcVar4;
  undefined4 extraout_EDX;
  uint unaff_ESI;
  undefined4 unaff_EDI;
  undefined4 uVar5;
  int local_28;
  basic_istream<char,std::char_traits<char>_> *local_24;
  void *local_20 [4];
  undefined4 local_10;
  uint local_c;
  uint local_8;
  
  local_8 = DAT_0076aa78 ^ (uint)&stack0xfffffffc;
  local_24 = param_2;
  uVar5 = 0;
  std::basic_istream<char,std::char_traits<char>_>::read
            (param_2,(char *)&local_28,(ulonglong)unaff_ESI << 0x20);
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
            (local_24,pcVar2,CONCAT44(unaff_EDI,local_28 >> 0x1f));
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


/* FUN_00659670 @ 00659670  kind=gamemisc  attributed-by=none  size=202 */

void FUN_00659670(undefined4 param_1,basic_istream<char,std::char_traits<char>_> *param_2)

{
  longlong lVar1;
  char *pcVar2;
  undefined4 extraout_EDX;
  undefined4 unaff_ESI;
  uint unaff_EDI;
  undefined4 uVar3;
  int local_28;
  basic_istream<char,std::char_traits<char>_> *local_24;
  void *local_20 [5];
  uint local_c;
  uint local_8;
  
  local_8 = DAT_0076aa78 ^ (uint)&stack0xfffffffc;
  local_24 = param_2;
  uVar3 = 0;
  std::basic_istream<char,std::char_traits<char>_>::read
            (param_2,(char *)&local_28,(ulonglong)unaff_EDI << 0x20);
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
            (local_24,pcVar2,CONCAT44(unaff_ESI,local_28 * 2 >> 0x1f));
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


/* FUN_00659ef0 @ 00659ef0  kind=gamemisc  attributed-by=none  size=82 */

undefined4 FUN_00659ef0(undefined4 *param_1)

{
  char cVar1;
  undefined4 *puVar2;
  bool bVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  int in_ECX;
  undefined4 *puVar6;
  
  puVar2 = *(undefined4 **)(in_ECX + 300);
  cVar1 = *(char *)((int)puVar2[1] + 0xd);
  puVar4 = puVar2;
  puVar6 = (undefined4 *)puVar2[1];
  while (cVar1 == '\0') {
    if ((int)puVar6[4] < (int)param_1) {
      puVar5 = (undefined4 *)puVar6[2];
      puVar6 = puVar4;
    }
    else {
      puVar5 = (undefined4 *)*puVar6;
    }
    puVar4 = puVar6;
    puVar6 = puVar5;
    cVar1 = *(char *)((int)puVar5 + 0xd);
  }
  if ((puVar4 == puVar2) || (bVar3 = (int)param_1 < (int)puVar4[4], param_1 = puVar4, bVar3)) {
    param_1 = puVar2;
  }
  if (param_1 != puVar2) {
    return param_1[5];
  }
  return 0;
}


/* FUN_00659fb0 @ 00659fb0  kind=gamemisc  attributed-by=none  size=40 */

void FUN_00659fb0(int param_1)

{
  int in_ECX;
  
  *(int *)(in_ECX + 0xe8) = *(int *)(in_ECX + 0xe8) + param_1;
  *(int *)(in_ECX + 0xe4) = param_1;
  *(undefined4 *)(in_ECX + 0x10) = 0;
  FUN_006372a0();
  return;
}


/* FUN_0065a0e0 @ 0065a0e0  kind=gamemisc  attributed-by=none  size=34 */

void FUN_0065a0e0(undefined4 param_1,undefined4 param_2,undefined2 *param_3)

{
  int iVar1;
  
  iVar1 = FUN_0046d550(param_1,param_2);
  if ((undefined2 *)(iVar1 + 8) != (undefined2 *)0x0) {
    *(undefined2 *)(iVar1 + 8) = *param_3;
  }
  return;
}


/* FUN_0065aa90 @ 0065aa90  kind=gamemisc  attributed-by=none  size=15 */

void FUN_0065aa90(void)

{
  undefined4 *in_ECX;
  
  FUN_0065b890();
                    /* WARNING: Subroutine does not return */
  operator_delete((void *)*in_ECX);
}


/* FUN_0065aab0 @ 0065aab0  kind=gamemisc  attributed-by=none  size=28 */

void FUN_0065aab0(void)

{
  undefined4 *in_ECX;
  undefined1 local_8 [4];
  
  FUN_0065d060(local_8,*(undefined4 *)*in_ECX,(undefined4 *)*in_ECX);
                    /* WARNING: Subroutine does not return */
  operator_delete((void *)*in_ECX);
}


/* FUN_0065aae0 @ 0065aae0  kind=gamemisc  attributed-by=none  size=18 */

void FUN_0065aae0(void)

{
  int in_ECX;
  
  if (*(void **)(in_ECX + 8) != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    operator_delete(*(void **)(in_ECX + 8));
  }
  return;
}


/* FUN_0065ae10 @ 0065ae10  kind=gamemisc  attributed-by=none  size=103 */

undefined4 FUN_0065ae10(uint param_1)

{
  void *pvVar1;
  undefined4 *in_ECX;
  
  *in_ECX = 0;
  in_ECX[1] = 0;
  in_ECX[2] = 0;
  if (param_1 == 0) {
    return 0;
  }
  if (0x3fffffff < param_1) {
                    /* WARNING: Subroutine does not return */
    std::_Xlength_error("vector<T> too long");
  }
  pvVar1 = operator_new(param_1 * 4);
  if (pvVar1 != (void *)0x0) {
    *in_ECX = pvVar1;
    in_ECX[1] = pvVar1;
    pvVar1 = (void *)((int)pvVar1 + param_1 * 4);
    in_ECX[2] = pvVar1;
    return CONCAT31((int3)((uint)pvVar1 >> 8),1);
  }
                    /* WARNING: Subroutine does not return */
  std::_Xbad_alloc();
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


/* FUN_0065aeb0 @ 0065aeb0  kind=gamemisc  attributed-by=none  size=26 */

void FUN_0065aeb0(void *param_1)

{
  if (*(void **)((int)param_1 + 0x18) != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    operator_delete(*(void **)((int)param_1 + 0x18));
  }
                    /* WARNING: Subroutine does not return */
  operator_delete(param_1);
}


/* FUN_0065b180 @ 0065b180  kind=gamemisc  attributed-by=none  size=57 */

void FUN_0065b180(void *param_1)

{
  if (*(char *)((int)param_1 + 0xd) != '\0') {
    return;
  }
  FUN_0065b180(*(undefined4 *)((int)param_1 + 8));
  if (*(void **)((int)param_1 + 0x18) != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    operator_delete(*(void **)((int)param_1 + 0x18));
  }
                    /* WARNING: Subroutine does not return */
  operator_delete(param_1);
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


/* FUN_0065ded0 @ 0065ded0  kind=gamemisc  attributed-by=none  size=1130 */

void FUN_0065ded0(undefined4 *param_1,int param_2,float *param_3,float *param_4,uint param_5)

{
  undefined2 uVar1;
  int iVar2;
  undefined4 uVar3;
  int in_ECX;
  uint uVar4;
  undefined4 *puVar5;
  float fVar6;
  float local_4c;
  int local_48;
  float local_40 [2];
  float local_38 [2];
  float local_30 [2];
  float local_28;
  float local_24;
  float local_20 [2];
  float local_18;
  float *local_14;
  float local_10;
  undefined4 *local_c;
  uint local_8;
  
  local_8 = DAT_0076aa78 ^ (uint)&stack0xfffffffc;
  local_14 = param_4;
  local_4c = 1.0;
  if (*(int *)(in_ECX + 0xf4) != 0) {
    local_4c = *(float *)(in_ECX + 0xe4) / (*(float *)(in_ECX + 0x104) - *(float *)(in_ECX + 0xfc));
  }
  fVar6 = *(float *)(in_ECX + 0xe4);
  if ((int)param_1[4] < param_2) {
    param_2 = param_1[4];
  }
  *param_3 = 0.0;
  param_3[1] = -fVar6;
  fVar6 = *(float *)(in_ECX + 0xe4);
  *param_4 = 0.0;
  param_4[1] = fVar6;
  FUN_0065d530(param_1,local_38,local_30,0,0xffffffff,0);
  FUN_0065d530(param_1,&local_10,local_20,param_5,0,0);
  uVar4 = param_5 & 1;
  if (uVar4 == 0) {
    if ((param_5 & 2) != 0) {
      fVar6 = ((local_20[0] - local_10) - local_30[0]) + local_38[0];
      goto LAB_0065dfdd;
    }
  }
  else {
    fVar6 = (((local_20[0] - local_10) - local_30[0]) + local_38[0]) * 0.5;
LAB_0065dfdd:
    *param_3 = *param_3 - fVar6;
  }
  local_48 = 0;
  if (-1 < param_2) {
    do {
      if ((uint)param_1[5] < 8) {
        local_c = param_1;
      }
      else {
        local_c = (undefined4 *)*param_1;
      }
      if ((*(short *)((int)local_c + local_48 * 2) == 10) && (local_48 != param_2)) {
        *param_3 = 0.0;
        FUN_0065d530(param_1,&local_28,local_40,param_5,local_48 + 1,0);
        if (uVar4 == 0) {
          if ((param_5 & 2) != 0) {
            fVar6 = ((local_40[0] - local_28) - local_30[0]) + local_38[0];
            goto LAB_0065e085;
          }
        }
        else {
          fVar6 = (((local_40[0] - local_28) - local_30[0]) + local_38[0]) * 0.5;
LAB_0065e085:
          *param_3 = *param_3 - fVar6;
        }
        param_3[1] = *(float *)(in_ECX + 0xf0) + *(float *)(in_ECX + 0xe4) + param_3[1];
      }
      else {
        puVar5 = param_1;
        if (7 < (uint)param_1[5]) {
          puVar5 = (undefined4 *)*param_1;
        }
        if (*(short *)((int)puVar5 + local_48 * 2) == 0) break;
        puVar5 = param_1;
        if (7 < (uint)param_1[5]) {
          puVar5 = (undefined4 *)*param_1;
        }
        uVar1 = *(undefined2 *)((int)puVar5 + local_48 * 2);
        if (*(int *)(in_ECX + 0xf4) == 0) {
          if (*(char *)(in_ECX + 0x108) == '\0') {
            iVar2 = FUN_0065ea80(*(undefined4 *)(in_ECX + 200),uVar1,0);
          }
          else {
            iVar2 = FUN_0065e340(*(undefined4 *)(in_ECX + 200),uVar1,0);
          }
        }
        else {
          iVar2 = FUN_0065e6b0(uVar1);
        }
        if (iVar2 != 0) {
          fVar6 = *(float *)(iVar2 + 0x10) * local_4c;
          if (local_48 == param_2) {
            *local_14 = fVar6;
          }
          else {
            *param_3 = fVar6 + *param_3;
          }
        }
        if (local_48 < param_2 + -1) {
          if (*(int *)(in_ECX + 0xf4) == 0) {
            if (*(char *)(in_ECX + 0x108) == '\0') {
              if ((uint)param_1[5] < 8) {
                local_c = param_1;
                puVar5 = param_1;
              }
              else {
                local_c = (undefined4 *)*param_1;
                puVar5 = (undefined4 *)*param_1;
              }
              uVar3 = FUN_0068fb90(*(undefined4 *)(in_ECX + 0xd8),
                                   *(undefined2 *)((int)puVar5 + local_48 * 2 + 2),2,local_20);
              uVar3 = FUN_0068fb90(*(undefined4 *)(in_ECX + 0xd8),
                                   *(undefined2 *)((int)local_c + local_48 * 2),uVar3);
              FUN_0068fa30(*(undefined4 *)(in_ECX + 0xd8),uVar3);
              *param_3 = ((float)(int)local_20[0] * *(float *)(in_ECX + 0xe0)) /
                         (float)*(ushort *)(*(int *)(in_ECX + 0xd8) + 0x44) + *param_3;
            }
            else {
              if ((uint)param_1[5] < 8) {
                local_c = param_1;
                puVar5 = param_1;
              }
              else {
                local_c = (undefined4 *)*param_1;
                puVar5 = (undefined4 *)*param_1;
              }
              uVar3 = FUN_0068fb90(*(undefined4 *)(in_ECX + 0xd8),
                                   *(undefined2 *)((int)puVar5 + local_48 * 2 + 2),0,local_20);
              uVar3 = FUN_0068fb90(*(undefined4 *)(in_ECX + 0xd8),
                                   *(undefined2 *)((int)local_c + local_48 * 2),uVar3);
              FUN_0068fa30(*(undefined4 *)(in_ECX + 0xd8),uVar3);
              *param_3 = (float)((int)local_20[0] >> 6) + *param_3;
            }
          }
          fVar6 = *(float *)(in_ECX + 0xec) + *param_3;
          *param_3 = fVar6;
          if (*(char *)(in_ECX + 0x108) != '\0') {
            *param_3 = (float)(int)fVar6;
          }
        }
      }
      local_48 = local_48 + 1;
    } while (local_48 <= param_2);
  }
  if (param_5 == 0) goto LAB_0065e328;
  FUN_0065d530(param_1,&local_28,&local_18,0,0xffffffff,0);
  if (uVar4 == 0) {
    if ((param_5 & 2) != 0) {
      local_18 = *param_3 - local_18;
      goto LAB_0065e2f4;
    }
  }
  else {
    local_18 = *param_3 - (local_18 + local_28) * 0.5;
LAB_0065e2f4:
    *param_3 = local_18;
  }
  if ((param_5 & 4) == 0) {
    if ((param_5 & 8) == 0) goto LAB_0065e328;
    fVar6 = param_3[1] - (float)local_14;
  }
  else {
    fVar6 = param_3[1] - ((float)local_14 + local_24) * 0.5;
  }
  param_3[1] = fVar6;
LAB_0065e328:
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


/* FUN_0065e8d0 @ 0065e8d0  kind=gamemisc  attributed-by=none  size=413 */

void FUN_0065e8d0(undefined4 param_1,undefined4 param_2,undefined4 param_3,float param_4,
                 undefined4 param_5,undefined4 param_6,undefined4 param_7,float param_8,
                 float *param_9,float *param_10,uint param_11,undefined4 param_12)

{
  int in_ECX;
  float fVar1;
  void *local_2c [4];
  undefined4 local_1c;
  uint local_18;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006f7008;
  local_10 = ExceptionList;
  local_14 = DAT_0076aa78 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  EnterCriticalSection((LPCRITICAL_SECTION)(in_ECX + 0x10c));
  FUN_006605c0(param_4,param_5,param_6,param_7,param_3,param_12);
  fVar1 = param_4 / *(float *)(in_ECX + 0xe4);
  param_4 = param_4 / *(float *)(in_ECX + 0xe0);
  if ((char)param_12 != '\0') {
    param_8 = param_8 / param_4;
  }
  if ((param_11 & 0x10) == 0) {
    FUN_0065ded0(param_1,param_2,param_9,param_10,param_11);
  }
  else {
    local_18 = 7;
    local_1c = 0;
    local_2c[0] = (void *)((uint)local_2c[0] & 0xffff0000);
    FUN_0040f680(param_1,0,0xffffffff);
    local_8 = 0;
    FUN_00660d50(local_2c,param_8);
    FUN_0065ded0(local_2c,param_2,param_9,param_10,param_11);
    if (7 < local_18) {
                    /* WARNING: Subroutine does not return */
      operator_delete(local_2c[0]);
    }
  }
  *param_9 = *param_9 * param_4;
  param_9[1] = param_9[1] * fVar1;
  *param_10 = *param_10 * param_4;
  param_10[1] = param_10[1] * fVar1;
  LeaveCriticalSection((LPCRITICAL_SECTION)(in_ECX + 0x10c));
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
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


/* FUN_006612f0 @ 006612f0  kind=gamemisc  attributed-by=none  size=330 */

void FUN_006612f0(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3,void *param_4)

{
  undefined4 *puVar1;
  int iVar2;
  int *piVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  int *in_ECX;
  bool bVar6;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puVar4 = param_3;
  puStack_c = &LAB_006f7210;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  bVar6 = true;
  local_8 = 0;
  puVar1 = (undefined4 *)*in_ECX;
  puVar5 = (undefined4 *)((undefined4 *)*in_ECX)[1];
  while (*(char *)((int)puVar5 + 0xd) == '\0') {
    if ((char)param_2 == '\0') {
      piVar3 = puVar5 + 4;
      if (7 < (uint)puVar5[9]) {
        piVar3 = (int *)*piVar3;
      }
      iVar2 = FUN_00428db0(0,puVar4[4],piVar3,puVar5[8]);
      bVar6 = iVar2 < 0;
    }
    else {
      puVar1 = puVar4;
      if (7 < (uint)puVar4[5]) {
        puVar1 = (undefined4 *)*puVar4;
      }
      iVar2 = FUN_00428db0(0,puVar5[8],puVar1,puVar4[4]);
      bVar6 = -1 < iVar2;
    }
    puVar1 = puVar5;
    if (bVar6 == false) {
      puVar5 = (undefined4 *)puVar5[2];
    }
    else {
      puVar5 = (undefined4 *)*puVar5;
    }
  }
  param_2 = puVar1;
  if (bVar6 != false) {
    if (puVar1 == *(undefined4 **)*in_ECX) {
      bVar6 = true;
      goto LAB_006613ae;
    }
    FUN_0042c740();
  }
  puVar5 = puVar4;
  if (7 < (uint)puVar4[5]) {
    puVar5 = (undefined4 *)*puVar4;
  }
  iVar2 = FUN_00428db0(0,param_2[8],puVar5,puVar4[4]);
  if (-1 < iVar2) {
    if (*(uint *)((int)param_4 + 0x24) < 8) {
      *(undefined4 *)((int)param_4 + 0x24) = 7;
      *(undefined4 *)((int)param_4 + 0x20) = 0;
      *(undefined2 *)((int)param_4 + 0x10) = 0;
                    /* WARNING: Subroutine does not return */
      operator_delete(param_4);
    }
                    /* WARNING: Subroutine does not return */
    operator_delete(*(void **)((int)param_4 + 0x10));
  }
LAB_006613ae:
  puVar4 = (undefined4 *)FUN_0058dc20(&param_2,bVar6,puVar1,puVar4,param_4);
  *param_1 = *puVar4;
  *(undefined1 *)(param_1 + 1) = 1;
  ExceptionList = local_10;
  return;
}


/* FUN_00661540 @ 00661540  kind=gamemisc  attributed-by=none  size=28 */

void FUN_00661540(void)

{
  undefined4 *in_ECX;
  undefined1 local_8 [4];
  
  FUN_00661a20(local_8,*(undefined4 *)*in_ECX,(undefined4 *)*in_ECX);
                    /* WARNING: Subroutine does not return */
  operator_delete((void *)*in_ECX);
}


/* FUN_00661680 @ 00661680  kind=gamemisc  attributed-by=none  size=392 */

void FUN_00661680(int param_1)

{
  char cVar1;
  int *piVar2;
  int *piVar3;
  void *pvVar4;
  undefined4 uVar5;
  undefined4 *puVar6;
  int in_ECX;
  int *piVar7;
  int *piVar8;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006f727b;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  FUN_00677970(param_1 + 0xc);
  *(undefined4 *)(in_ECX + 0x1c) = *(undefined4 *)(param_1 + 0x1c);
  piVar8 = (int *)(in_ECX + 4);
  *(undefined4 *)(in_ECX + 0x3c) = *(undefined4 *)(param_1 + 0x3c);
  piVar7 = *(int **)*piVar8;
  if (piVar7 != (int *)*piVar8) {
    do {
      puVar6 = (undefined4 *)piVar7[10];
      if (puVar6 != (undefined4 *)0x0) {
        if ((void *)*puVar6 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
          operator_delete(puVar6);
        }
                    /* WARNING: Subroutine does not return */
        operator_delete((void *)*puVar6);
      }
      if (*(char *)((int)piVar7 + 0xd) == '\0') {
        piVar2 = (int *)piVar7[2];
        if (*(char *)((int)piVar2 + 0xd) == '\0') {
          cVar1 = *(char *)(*piVar2 + 0xd);
          piVar7 = piVar2;
          piVar2 = (int *)*piVar2;
          while (cVar1 == '\0') {
            cVar1 = *(char *)(*piVar2 + 0xd);
            piVar7 = piVar2;
            piVar2 = (int *)*piVar2;
          }
        }
        else {
          cVar1 = *(char *)(piVar7[1] + 0xd);
          piVar3 = (int *)piVar7[1];
          piVar2 = piVar7;
          while ((piVar7 = piVar3, cVar1 == '\0' && (piVar2 == (int *)piVar7[2]))) {
            cVar1 = *(char *)(piVar7[1] + 0xd);
            piVar3 = (int *)piVar7[1];
            piVar2 = piVar7;
          }
        }
      }
    } while (piVar7 != (int *)*piVar8);
  }
  FUN_00661940(*(undefined4 *)(*piVar8 + 4));
  *(int *)(*piVar8 + 4) = *piVar8;
  *(int *)*piVar8 = *piVar8;
  *(int *)(*piVar8 + 8) = *piVar8;
  *(undefined4 *)(in_ECX + 8) = 0;
  piVar8 = (int *)**(int **)(param_1 + 4);
  if (piVar8 != *(int **)(param_1 + 4)) {
    do {
      pvVar4 = operator_new(0x10);
      local_8 = 0;
      if (pvVar4 == (void *)0x0) {
        uVar5 = 0;
      }
      else {
        uVar5 = FUN_00677790(piVar8[10]);
      }
      local_8 = 0xffffffff;
      puVar6 = (undefined4 *)FUN_00661830(piVar8 + 4);
      *puVar6 = uVar5;
      if (*(char *)((int)piVar8 + 0xd) == '\0') {
        piVar7 = (int *)piVar8[2];
        if (*(char *)((int)piVar7 + 0xd) == '\0') {
          cVar1 = *(char *)(*piVar7 + 0xd);
          piVar8 = piVar7;
          piVar7 = (int *)*piVar7;
          while (cVar1 == '\0') {
            cVar1 = *(char *)(*piVar7 + 0xd);
            piVar8 = piVar7;
            piVar7 = (int *)*piVar7;
          }
        }
        else {
          cVar1 = *(char *)(piVar8[1] + 0xd);
          piVar2 = (int *)piVar8[1];
          piVar7 = piVar8;
          while ((piVar8 = piVar2, cVar1 == '\0' && (piVar7 == (int *)piVar8[2]))) {
            cVar1 = *(char *)(piVar8[1] + 0xd);
            piVar2 = (int *)piVar8[1];
            piVar7 = piVar8;
          }
        }
      }
    } while (piVar8 != *(int **)(param_1 + 4));
  }
  ExceptionList = local_10;
  return;
}


/* FUN_00661830 @ 00661830  kind=gamemisc  attributed-by=none  size=216 */

void FUN_00661830(int param_1)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int *in_ECX;
  undefined1 local_34 [4];
  void *local_30 [4];
  undefined4 local_20;
  uint local_1c;
  undefined4 local_18;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006f72a8;
  local_10 = ExceptionList;
  local_14 = DAT_0076aa78 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  iVar1 = FUN_004e3790(param_1);
  if (iVar1 != *in_ECX) {
    piVar2 = (int *)(iVar1 + 0x10);
    if (7 < *(uint *)(iVar1 + 0x24)) {
      piVar2 = (int *)*piVar2;
    }
    iVar3 = FUN_00428db0(0,*(undefined4 *)(param_1 + 0x10),piVar2,*(undefined4 *)(iVar1 + 0x20));
    if (-1 < iVar3) goto LAB_006618ea;
  }
  local_1c = 7;
  local_20 = 0;
  local_30[0] = (void *)((uint)local_30[0] & 0xffff0000);
  FUN_0040f680(param_1,0,0xffffffff);
  local_18 = 0;
  local_8 = 0;
  iVar3 = FUN_0058d8f0(local_30);
  FUN_00638db0(local_34,iVar1,iVar3 + 0x10,iVar3);
  if (7 < local_1c) {
                    /* WARNING: Subroutine does not return */
    operator_delete(local_30[0]);
  }
LAB_006618ea:
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
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


/* FUN_00661df0 @ 00661df0  kind=gamemisc  attributed-by=none  size=392 */

void FUN_00661df0(int param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  int *in_ECX;
  int iVar5;
  int iVar6;
  
  piVar1 = in_ECX + 1;
  iVar2 = FUN_004e3790(param_1);
  if (iVar2 != *piVar1) {
    piVar3 = (int *)(iVar2 + 0x10);
    if (7 < *(uint *)(iVar2 + 0x24)) {
      piVar3 = (int *)*piVar3;
    }
    iVar4 = FUN_00428db0(0,*(undefined4 *)(param_1 + 0x10),piVar3,*(undefined4 *)(iVar2 + 0x20));
    param_1 = iVar2;
    if (-1 < iVar4) goto LAB_00661e3a;
  }
  param_1 = *piVar1;
LAB_00661e3a:
  if (((param_1 != *piVar1) && (piVar1 = *(int **)(param_1 + 0x28), piVar1 != (int *)0x0)) &&
     (iVar2 = piVar1[1] - *piVar1 >> 0x1f, (piVar1[1] - *piVar1) / 0xc + iVar2 != iVar2)) {
    FUN_0044be20();
    in_ECX[6] = param_2;
    in_ECX[7] = 0;
    in_ECX[0x10] = 0;
    in_ECX[0xf] = -1;
    iVar2 = *piVar1;
    iVar4 = (piVar1[1] - iVar2) / 0xc;
    iVar6 = 0;
    if (0 < iVar4) {
      do {
        if (piVar1[3] == 0) {
          iVar5 = iVar6;
          if (iVar6 < 0) {
            iVar5 = 0;
          }
          if (iVar4 <= iVar5) {
            iVar5 = iVar4 + -1;
          }
        }
        else {
          iVar5 = (iVar4 + iVar6) % iVar4;
        }
        if ((param_2 < 1) || (*(int *)(iVar2 + 4 + iVar5 * 0xc) < param_2)) {
          FUN_006779e0(*(undefined4 *)(iVar2 + iVar5 * 0xc),*(undefined4 *)(iVar2 + 4 + iVar5 * 0xc)
                       ,*(undefined4 *)(iVar2 + 8 + iVar5 * 0xc));
        }
        iVar2 = *piVar1;
        iVar4 = (piVar1[1] - iVar2) / 0xc;
        iVar6 = iVar6 + 1;
      } while (iVar6 < iVar4);
    }
    if ((0 < (in_ECX[4] - in_ECX[3]) / 0xc) && (iVar2 = FUN_00630970(0), *(int *)(iVar2 + 4) != 0))
    {
      (**(code **)(*in_ECX + 0x14))(1);
      iVar2 = FUN_00630970(0);
      FUN_006779e0(1,0,*(undefined4 *)(iVar2 + 8));
    }
  }
  return;
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


/* FUN_00662fb0 @ 00662fb0  kind=gamemisc  attributed-by=none  size=16 */

void FUN_00662fb0(undefined4 param_1)

{
  int in_ECX;
  
  *(undefined4 *)(in_ECX + 0x24c) = param_1;
  return;
}


/* FUN_00663510 @ 00663510  kind=gamemisc  attributed-by=none  size=52 */

void FUN_00663510(void)

{
  Attribute *in_ECX;
  undefined1 local_5;
  
  if (in_ECX[1].vftablePtr != (Attribute_vftable *)0x0) {
    FUN_00452650(in_ECX[1].vftablePtr,in_ECX[1].Attribute_data.offset_0x0,&local_5);
                    /* WARNING: Subroutine does not return */
    operator_delete(in_ECX[1].vftablePtr);
  }
  plasma::Attribute::~Attribute(in_ECX);
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


/* FUN_00664c10 @ 00664c10  kind=gamemisc  attributed-by=none  size=80 */

void FUN_00664c10(int param_1,undefined4 param_2)

{
  int iVar1;
  int in_ECX;
  int *piVar2;
  
  if (in_ECX + 0x30 != param_1) {
    FUN_0040f680(param_1,0,0xffffffff);
  }
  piVar2 = (int *)**(int **)(in_ECX + 0x24);
  if (piVar2 != *(int **)(in_ECX + 0x24)) {
    do {
      iVar1 = FUN_00661d90(param_1);
      if (iVar1 != 0) {
        FUN_00661df0(param_1,param_2);
        *(undefined1 *)(in_ECX + 0x2c) = 1;
      }
      piVar2 = (int *)*piVar2;
    } while (piVar2 != (int *)*(int *)(in_ECX + 0x24));
  }
  return;
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


/* FUN_0066cd10 @ 0066cd10  kind=gamemisc  attributed-by=none  size=15 */

void FUN_0066cd10(int param_1)

{
  Concurrency::
  task_handle<Concurrency::_Parallel_chunk_helper<Concurrency::details::_Vector_iterator<Concurrency::concurrent_vector<plasma::QuadVertex*,std::allocator<plasma::QuadVertex*>_>,plasma::QuadVertex*>,int,<lambda_c31a3785b8ee29a1ce8445e019cbe6ee>,Concurrency::auto_partitioner,1>_>
  ::
  ~task_handle<Concurrency::_Parallel_chunk_helper<Concurrency::details::_Vector_iterator<Concurrency::concurrent_vector<plasma::QuadVertex*,std::allocator<plasma::QuadVertex*>_>,plasma::QuadVertex*>,int,<lambda_c31a3785b8ee29a1ce8445e019cbe6ee>,Concurrency::auto_partitioner,1>_>
            ((task_handle<Concurrency::_Parallel_chunk_helper<Concurrency::details::_Vector_iterator<Concurrency::concurrent_vector<plasma::QuadVertex*,std::allocator<plasma::QuadVertex*>_>,plasma::QuadVertex*>,int,<lambda_c31a3785b8ee29a1ce8445e019cbe6ee>,Concurrency::auto_partitioner,1>_>
              *)(param_1 + 0x14));
  return;
}


/* FUN_0066cd20 @ 0066cd20  kind=gamemisc  attributed-by=none  size=15 */

void FUN_0066cd20(int param_1)

{
  Concurrency::
  task_handle<Concurrency::_Parallel_chunk_helper<Concurrency::details::_Vector_iterator<Concurrency::concurrent_vector<plasma::QuadVertex*,std::allocator<plasma::QuadVertex*>_>,plasma::QuadVertex*>,int,<lambda_fe4ce4a6aaf0318c62c756eaccc0431b>,Concurrency::auto_partitioner,1>_>
  ::
  ~task_handle<Concurrency::_Parallel_chunk_helper<Concurrency::details::_Vector_iterator<Concurrency::concurrent_vector<plasma::QuadVertex*,std::allocator<plasma::QuadVertex*>_>,plasma::QuadVertex*>,int,<lambda_fe4ce4a6aaf0318c62c756eaccc0431b>,Concurrency::auto_partitioner,1>_>
            ((task_handle<Concurrency::_Parallel_chunk_helper<Concurrency::details::_Vector_iterator<Concurrency::concurrent_vector<plasma::QuadVertex*,std::allocator<plasma::QuadVertex*>_>,plasma::QuadVertex*>,int,<lambda_fe4ce4a6aaf0318c62c756eaccc0431b>,Concurrency::auto_partitioner,1>_>
              *)(param_1 + 0x14));
  return;
}


/* FUN_0066cd30 @ 0066cd30  kind=gamemisc  attributed-by=none  size=15 */

void FUN_0066cd30(int param_1)

{
  Concurrency::
  task_handle<Concurrency::_Parallel_chunk_helper<Concurrency::details::_Vector_iterator<Concurrency::concurrent_vector<plasma::QuadEdge,std::allocator<plasma::QuadEdge>_>,plasma::QuadEdge>,int,<lambda_9843e8019373a7557d3f3e498d32c258>,Concurrency::auto_partitioner,1>_>
  ::
  ~task_handle<Concurrency::_Parallel_chunk_helper<Concurrency::details::_Vector_iterator<Concurrency::concurrent_vector<plasma::QuadEdge,std::allocator<plasma::QuadEdge>_>,plasma::QuadEdge>,int,<lambda_9843e8019373a7557d3f3e498d32c258>,Concurrency::auto_partitioner,1>_>
            ((task_handle<Concurrency::_Parallel_chunk_helper<Concurrency::details::_Vector_iterator<Concurrency::concurrent_vector<plasma::QuadEdge,std::allocator<plasma::QuadEdge>_>,plasma::QuadEdge>,int,<lambda_9843e8019373a7557d3f3e498d32c258>,Concurrency::auto_partitioner,1>_>
              *)(param_1 + 0x14));
  return;
}


/* FUN_0066cd40 @ 0066cd40  kind=gamemisc  attributed-by=none  size=15 */

void FUN_0066cd40(int param_1)

{
  Concurrency::
  task_handle<Concurrency::_Parallel_chunk_helper<Concurrency::details::_Vector_iterator<Concurrency::concurrent_vector<plasma::QuadEdge,std::allocator<plasma::QuadEdge>_>,plasma::QuadEdge>,int,<lambda_e3fd6255bcf168381cb2d01c4cfc52ca>,Concurrency::auto_partitioner,1>_>
  ::
  ~task_handle<Concurrency::_Parallel_chunk_helper<Concurrency::details::_Vector_iterator<Concurrency::concurrent_vector<plasma::QuadEdge,std::allocator<plasma::QuadEdge>_>,plasma::QuadEdge>,int,<lambda_e3fd6255bcf168381cb2d01c4cfc52ca>,Concurrency::auto_partitioner,1>_>
            ((task_handle<Concurrency::_Parallel_chunk_helper<Concurrency::details::_Vector_iterator<Concurrency::concurrent_vector<plasma::QuadEdge,std::allocator<plasma::QuadEdge>_>,plasma::QuadEdge>,int,<lambda_e3fd6255bcf168381cb2d01c4cfc52ca>,Concurrency::auto_partitioner,1>_>
              *)(param_1 + 0x14));
  return;
}


/* FUN_0066cd50 @ 0066cd50  kind=gamemisc  attributed-by=none  size=15 */

void FUN_0066cd50(int param_1)

{
  Concurrency::
  task_handle<Concurrency::_Parallel_chunk_helper<Concurrency::details::_Vector_iterator<Concurrency::concurrent_vector<plasma::QuadFace,std::allocator<plasma::QuadFace>_>,plasma::QuadFace>,int,<lambda_37224fa58ba67e25838a8994307bb82e>,Concurrency::auto_partitioner,1>_>
  ::
  ~task_handle<Concurrency::_Parallel_chunk_helper<Concurrency::details::_Vector_iterator<Concurrency::concurrent_vector<plasma::QuadFace,std::allocator<plasma::QuadFace>_>,plasma::QuadFace>,int,<lambda_37224fa58ba67e25838a8994307bb82e>,Concurrency::auto_partitioner,1>_>
            ((task_handle<Concurrency::_Parallel_chunk_helper<Concurrency::details::_Vector_iterator<Concurrency::concurrent_vector<plasma::QuadFace,std::allocator<plasma::QuadFace>_>,plasma::QuadFace>,int,<lambda_37224fa58ba67e25838a8994307bb82e>,Concurrency::auto_partitioner,1>_>
              *)(param_1 + 0x14));
  return;
}


/* FUN_0066dcb0 @ 0066dcb0  kind=gamemisc  attributed-by=none  size=193 */

void FUN_0066dcb0(int *param_1,int *param_2,undefined4 param_3)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  int *piVar4;
  _MallocaArrayHolder<Concurrency::task_handle<Concurrency::_Parallel_chunk_helper<Concurrency::details::_Vector_iterator<Concurrency::concurrent_vector<plasma::QuadVertex*,std::allocator<plasma::QuadVertex*>_>,plasma::QuadVertex*>,int,<lambda_c31a3785b8ee29a1ce8445e019cbe6ee>,Concurrency::auto_partitioner,1>_>_>
  local_8;
  
  uVar1 = param_1[1];
  if ((uVar1 < (uint)param_2[1]) && (iVar2 = *param_1, iVar2 == *param_2)) {
    uVar3 = param_2[1] - uVar1;
    if (uVar3 == 1) {
      piVar4 = (int *)param_1[2];
      if (piVar4 == (int *)0x0) {
        uVar3 = Concurrency::details::_Concurrent_vector_base_v4::_Segment_index_of(uVar1);
        piVar4 = (int *)(*(int *)(*(int *)(iVar2 + 0x1c) + uVar3 * 4) +
                        (uVar1 - (1 << ((byte)uVar3 & 0x1f) & 0xfffffffeU)) * 4);
        param_1[2] = (int)piVar4;
      }
      iVar2 = *piVar4;
      *(undefined4 *)(iVar2 + 0x2c) = 0;
      *(undefined4 *)(iVar2 + 0xc) = 0;
      *(undefined4 *)(iVar2 + 0x10) = 0;
      *(undefined4 *)(iVar2 + 0x14) = 0;
      *(undefined4 *)(iVar2 + 0x18) = 0;
      *(undefined4 *)(iVar2 + 0x1c) = 0;
      *(undefined4 *)(iVar2 + 0x20) = 0;
      *(undefined4 *)(iVar2 + 0x24) = 0;
      *(undefined4 *)(iVar2 + 0x28) = 0;
      return;
    }
    local_8.vftablePtr =
         (_MallocaArrayHolder<Concurrency::task_handle<Concurrency::_Parallel_chunk_helper<Concurrency::details::_Vector_iterator<Concurrency::concurrent_vector<plasma::QuadVertex*,std::allocator<plasma::QuadVertex*>_>,plasma::QuadVertex*>,int,<lambda_c31a3785b8ee29a1ce8445e019cbe6ee>,Concurrency::auto_partitioner,1>_>_>_vftable
          *)0x1;
    Concurrency::details::
    _MallocaArrayHolder<Concurrency::task_handle<Concurrency::_Parallel_chunk_helper<Concurrency::details::_Vector_iterator<Concurrency::concurrent_vector<plasma::QuadVertex*,std::allocator<plasma::QuadVertex*>_>,plasma::QuadVertex*>,int,<lambda_c31a3785b8ee29a1ce8445e019cbe6ee>,Concurrency::auto_partitioner,1>_>_>
    ::
    ~_MallocaArrayHolder<Concurrency::task_handle<Concurrency::_Parallel_chunk_helper<Concurrency::details::_Vector_iterator<Concurrency::concurrent_vector<plasma::QuadVertex*,std::allocator<plasma::QuadVertex*>_>,plasma::QuadVertex*>,int,<lambda_c31a3785b8ee29a1ce8445e019cbe6ee>,Concurrency::auto_partitioner,1>_>_>
              (&local_8,param_1,uVar3,(int *)&local_8,param_3);
  }
  return;
}


/* FUN_0066dd80 @ 0066dd80  kind=gamemisc  attributed-by=none  size=125 */

void FUN_0066dd80(_MallocaArrayHolder<Concurrency::task_handle<Concurrency::_Parallel_chunk_helper<Concurrency::details::_Vector_iterator<Concurrency::concurrent_vector<plasma::QuadVertex*,std::allocator<plasma::QuadVertex*>_>,plasma::QuadVertex*>,int,<lambda_fe4ce4a6aaf0318c62c756eaccc0431b>,Concurrency::auto_partitioner,1>_>_>
                  param_1,int *param_2,undefined4 param_3,undefined4 param_4)

{
  deleting_destructor *pdVar1;
  deleting_destructor *pdVar2;
  _MallocaArrayHolder<Concurrency::task_handle<Concurrency::_Parallel_chunk_helper<Concurrency::details::_Vector_iterator<Concurrency::concurrent_vector<plasma::QuadVertex*,std::allocator<plasma::QuadVertex*>_>,plasma::QuadVertex*>,int,<lambda_fe4ce4a6aaf0318c62c756eaccc0431b>,Concurrency::auto_partitioner,1>_>_>
  _Var3;
  uint uVar4;
  deleting_destructor *pdVar5;
  
  _Var3.vftablePtr = param_1.vftablePtr;
  pdVar1 = param_1.vftablePtr[1].deleting_destructor;
  if ((pdVar1 < (deleting_destructor *)param_2[1]) &&
     (pdVar2 = (param_1.vftablePtr)->deleting_destructor, pdVar2 == (deleting_destructor *)*param_2)
     ) {
    uVar4 = param_2[1] - (int)pdVar1;
    if (uVar4 == 1) {
      pdVar5 = param_1.vftablePtr[2].deleting_destructor;
      if (pdVar5 == (deleting_destructor *)0x0) {
        uVar4 = Concurrency::details::_Concurrent_vector_base_v4::_Segment_index_of((uint)pdVar1);
        pdVar5 = (deleting_destructor *)
                 (*(int *)(*(int *)(pdVar2 + 0x1c) + uVar4 * 4) +
                 ((int)pdVar1 - (1 << ((byte)uVar4 & 0x1f) & 0xfffffffeU)) * 4);
        _Var3.vftablePtr[2].deleting_destructor = pdVar5;
      }
      FUN_0066f380(*(undefined4 *)pdVar5);
      return;
    }
    param_1.vftablePtr =
         (_MallocaArrayHolder<Concurrency::task_handle<Concurrency::_Parallel_chunk_helper<Concurrency::details::_Vector_iterator<Concurrency::concurrent_vector<plasma::QuadVertex*,std::allocator<plasma::QuadVertex*>_>,plasma::QuadVertex*>,int,<lambda_fe4ce4a6aaf0318c62c756eaccc0431b>,Concurrency::auto_partitioner,1>_>_>_vftable
          *)0x1;
    Concurrency::details::
    _MallocaArrayHolder<Concurrency::task_handle<Concurrency::_Parallel_chunk_helper<Concurrency::details::_Vector_iterator<Concurrency::concurrent_vector<plasma::QuadVertex*,std::allocator<plasma::QuadVertex*>_>,plasma::QuadVertex*>,int,<lambda_fe4ce4a6aaf0318c62c756eaccc0431b>,Concurrency::auto_partitioner,1>_>_>
    ::
    ~_MallocaArrayHolder<Concurrency::task_handle<Concurrency::_Parallel_chunk_helper<Concurrency::details::_Vector_iterator<Concurrency::concurrent_vector<plasma::QuadVertex*,std::allocator<plasma::QuadVertex*>_>,plasma::QuadVertex*>,int,<lambda_fe4ce4a6aaf0318c62c756eaccc0431b>,Concurrency::auto_partitioner,1>_>_>
              (&param_1,_Var3.vftablePtr,uVar4,(int *)&param_1,param_3);
  }
  return;
}


/* FUN_0066de00 @ 0066de00  kind=gamemisc  attributed-by=none  size=126 */

void FUN_0066de00(_MallocaArrayHolder<Concurrency::task_handle<Concurrency::_Parallel_chunk_helper<Concurrency::details::_Vector_iterator<Concurrency::concurrent_vector<plasma::QuadEdge,std::allocator<plasma::QuadEdge>_>,plasma::QuadEdge>,int,<lambda_9843e8019373a7557d3f3e498d32c258>,Concurrency::auto_partitioner,1>_>_>
                  param_1,int *param_2,undefined4 param_3,undefined4 param_4)

{
  deleting_destructor *pdVar1;
  deleting_destructor *pdVar2;
  _MallocaArrayHolder<Concurrency::task_handle<Concurrency::_Parallel_chunk_helper<Concurrency::details::_Vector_iterator<Concurrency::concurrent_vector<plasma::QuadEdge,std::allocator<plasma::QuadEdge>_>,plasma::QuadEdge>,int,<lambda_9843e8019373a7557d3f3e498d32c258>,Concurrency::auto_partitioner,1>_>_>
  _Var3;
  uint uVar4;
  deleting_destructor *pdVar5;
  
  _Var3.vftablePtr = param_1.vftablePtr;
  pdVar1 = param_1.vftablePtr[1].deleting_destructor;
  if ((pdVar1 < (deleting_destructor *)param_2[1]) &&
     (pdVar2 = (param_1.vftablePtr)->deleting_destructor, pdVar2 == (deleting_destructor *)*param_2)
     ) {
    uVar4 = param_2[1] - (int)pdVar1;
    if (uVar4 == 1) {
      pdVar5 = param_1.vftablePtr[2].deleting_destructor;
      if (pdVar5 == (deleting_destructor *)0x0) {
        uVar4 = Concurrency::details::_Concurrent_vector_base_v4::_Segment_index_of((uint)pdVar1);
        pdVar5 = (deleting_destructor *)
                 (*(int *)(*(int *)(pdVar2 + 0x1c) + uVar4 * 4) +
                 ((int)pdVar1 - (1 << ((byte)uVar4 & 0x1f) & 0xfffffffeU)) * 0x4c);
        _Var3.vftablePtr[2].deleting_destructor = pdVar5;
      }
      FUN_0066eef0(pdVar5);
      return;
    }
    param_1.vftablePtr =
         (_MallocaArrayHolder<Concurrency::task_handle<Concurrency::_Parallel_chunk_helper<Concurrency::details::_Vector_iterator<Concurrency::concurrent_vector<plasma::QuadEdge,std::allocator<plasma::QuadEdge>_>,plasma::QuadEdge>,int,<lambda_9843e8019373a7557d3f3e498d32c258>,Concurrency::auto_partitioner,1>_>_>_vftable
          *)0x1;
    Concurrency::details::
    _MallocaArrayHolder<Concurrency::task_handle<Concurrency::_Parallel_chunk_helper<Concurrency::details::_Vector_iterator<Concurrency::concurrent_vector<plasma::QuadEdge,std::allocator<plasma::QuadEdge>_>,plasma::QuadEdge>,int,<lambda_9843e8019373a7557d3f3e498d32c258>,Concurrency::auto_partitioner,1>_>_>
    ::
    ~_MallocaArrayHolder<Concurrency::task_handle<Concurrency::_Parallel_chunk_helper<Concurrency::details::_Vector_iterator<Concurrency::concurrent_vector<plasma::QuadEdge,std::allocator<plasma::QuadEdge>_>,plasma::QuadEdge>,int,<lambda_9843e8019373a7557d3f3e498d32c258>,Concurrency::auto_partitioner,1>_>_>
              (&param_1,_Var3.vftablePtr,uVar4,(int *)&param_1,param_3);
  }
  return;
}


/* FUN_0066de80 @ 0066de80  kind=gamemisc  attributed-by=none  size=126 */

void FUN_0066de80(_MallocaArrayHolder<Concurrency::task_handle<Concurrency::_Parallel_chunk_helper<Concurrency::details::_Vector_iterator<Concurrency::concurrent_vector<plasma::QuadEdge,std::allocator<plasma::QuadEdge>_>,plasma::QuadEdge>,int,<lambda_e3fd6255bcf168381cb2d01c4cfc52ca>,Concurrency::auto_partitioner,1>_>_>
                  param_1,int *param_2,undefined4 param_3,undefined4 param_4)

{
  deleting_destructor *pdVar1;
  deleting_destructor *pdVar2;
  _MallocaArrayHolder<Concurrency::task_handle<Concurrency::_Parallel_chunk_helper<Concurrency::details::_Vector_iterator<Concurrency::concurrent_vector<plasma::QuadEdge,std::allocator<plasma::QuadEdge>_>,plasma::QuadEdge>,int,<lambda_e3fd6255bcf168381cb2d01c4cfc52ca>,Concurrency::auto_partitioner,1>_>_>
  _Var3;
  uint uVar4;
  deleting_destructor *pdVar5;
  
  _Var3.vftablePtr = param_1.vftablePtr;
  pdVar1 = param_1.vftablePtr[1].deleting_destructor;
  if ((pdVar1 < (deleting_destructor *)param_2[1]) &&
     (pdVar2 = (param_1.vftablePtr)->deleting_destructor, pdVar2 == (deleting_destructor *)*param_2)
     ) {
    uVar4 = param_2[1] - (int)pdVar1;
    if (uVar4 == 1) {
      pdVar5 = param_1.vftablePtr[2].deleting_destructor;
      if (pdVar5 == (deleting_destructor *)0x0) {
        uVar4 = Concurrency::details::_Concurrent_vector_base_v4::_Segment_index_of((uint)pdVar1);
        pdVar5 = (deleting_destructor *)
                 (*(int *)(*(int *)(pdVar2 + 0x1c) + uVar4 * 4) +
                 ((int)pdVar1 - (1 << ((byte)uVar4 & 0x1f) & 0xfffffffeU)) * 0x4c);
        _Var3.vftablePtr[2].deleting_destructor = pdVar5;
      }
      FUN_0066f280(pdVar5);
      return;
    }
    param_1.vftablePtr =
         (_MallocaArrayHolder<Concurrency::task_handle<Concurrency::_Parallel_chunk_helper<Concurrency::details::_Vector_iterator<Concurrency::concurrent_vector<plasma::QuadEdge,std::allocator<plasma::QuadEdge>_>,plasma::QuadEdge>,int,<lambda_e3fd6255bcf168381cb2d01c4cfc52ca>,Concurrency::auto_partitioner,1>_>_>_vftable
          *)0x1;
    Concurrency::details::
    _MallocaArrayHolder<Concurrency::task_handle<Concurrency::_Parallel_chunk_helper<Concurrency::details::_Vector_iterator<Concurrency::concurrent_vector<plasma::QuadEdge,std::allocator<plasma::QuadEdge>_>,plasma::QuadEdge>,int,<lambda_e3fd6255bcf168381cb2d01c4cfc52ca>,Concurrency::auto_partitioner,1>_>_>
    ::
    ~_MallocaArrayHolder<Concurrency::task_handle<Concurrency::_Parallel_chunk_helper<Concurrency::details::_Vector_iterator<Concurrency::concurrent_vector<plasma::QuadEdge,std::allocator<plasma::QuadEdge>_>,plasma::QuadEdge>,int,<lambda_e3fd6255bcf168381cb2d01c4cfc52ca>,Concurrency::auto_partitioner,1>_>_>
              (&param_1,_Var3.vftablePtr,uVar4,(int *)&param_1,param_3);
  }
  return;
}


/* FUN_0066df00 @ 0066df00  kind=gamemisc  attributed-by=none  size=126 */

void FUN_0066df00(_MallocaArrayHolder<Concurrency::task_handle<Concurrency::_Parallel_chunk_helper<Concurrency::details::_Vector_iterator<Concurrency::concurrent_vector<plasma::QuadFace,std::allocator<plasma::QuadFace>_>,plasma::QuadFace>,int,<lambda_37224fa58ba67e25838a8994307bb82e>,Concurrency::auto_partitioner,1>_>_>
                  param_1,int *param_2,undefined4 param_3,undefined4 param_4)

{
  deleting_destructor *pdVar1;
  deleting_destructor *pdVar2;
  _MallocaArrayHolder<Concurrency::task_handle<Concurrency::_Parallel_chunk_helper<Concurrency::details::_Vector_iterator<Concurrency::concurrent_vector<plasma::QuadFace,std::allocator<plasma::QuadFace>_>,plasma::QuadFace>,int,<lambda_37224fa58ba67e25838a8994307bb82e>,Concurrency::auto_partitioner,1>_>_>
  _Var3;
  uint uVar4;
  deleting_destructor *pdVar5;
  
  _Var3.vftablePtr = param_1.vftablePtr;
  pdVar1 = param_1.vftablePtr[1].deleting_destructor;
  if ((pdVar1 < (deleting_destructor *)param_2[1]) &&
     (pdVar2 = (param_1.vftablePtr)->deleting_destructor, pdVar2 == (deleting_destructor *)*param_2)
     ) {
    uVar4 = param_2[1] - (int)pdVar1;
    if (uVar4 == 1) {
      pdVar5 = param_1.vftablePtr[2].deleting_destructor;
      if (pdVar5 == (deleting_destructor *)0x0) {
        uVar4 = Concurrency::details::_Concurrent_vector_base_v4::_Segment_index_of((uint)pdVar1);
        pdVar5 = (deleting_destructor *)
                 (*(int *)(*(int *)(pdVar2 + 0x1c) + uVar4 * 4) +
                 ((int)pdVar1 - (1 << ((byte)uVar4 & 0x1f) & 0xfffffffeU)) * 0x7c);
        _Var3.vftablePtr[2].deleting_destructor = pdVar5;
      }
      FUN_0066ed80(pdVar5);
      return;
    }
    param_1.vftablePtr =
         (_MallocaArrayHolder<Concurrency::task_handle<Concurrency::_Parallel_chunk_helper<Concurrency::details::_Vector_iterator<Concurrency::concurrent_vector<plasma::QuadFace,std::allocator<plasma::QuadFace>_>,plasma::QuadFace>,int,<lambda_37224fa58ba67e25838a8994307bb82e>,Concurrency::auto_partitioner,1>_>_>_vftable
          *)0x1;
    Concurrency::details::
    _MallocaArrayHolder<Concurrency::task_handle<Concurrency::_Parallel_chunk_helper<Concurrency::details::_Vector_iterator<Concurrency::concurrent_vector<plasma::QuadFace,std::allocator<plasma::QuadFace>_>,plasma::QuadFace>,int,<lambda_37224fa58ba67e25838a8994307bb82e>,Concurrency::auto_partitioner,1>_>_>
    ::
    ~_MallocaArrayHolder<Concurrency::task_handle<Concurrency::_Parallel_chunk_helper<Concurrency::details::_Vector_iterator<Concurrency::concurrent_vector<plasma::QuadFace,std::allocator<plasma::QuadFace>_>,plasma::QuadFace>,int,<lambda_37224fa58ba67e25838a8994307bb82e>,Concurrency::auto_partitioner,1>_>_>
              (&param_1,_Var3.vftablePtr,uVar4,(int *)&param_1,param_3);
  }
  return;
}


/* FUN_0066df80 @ 0066df80  kind=gamemisc  attributed-by=none  size=102 */

void FUN_0066df80(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6,undefined4 param_7)

{
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined1 local_5;
  
  local_14 = param_4;
  local_10 = param_5;
  local_c = param_6;
  local_20 = param_1;
  local_1c = param_2;
  local_18 = param_3;
  Concurrency::_Trace_ppl_function((_GUID *)&DAT_006fcbb0,'\x04',1);
  FUN_0066dcb0(&local_20,&local_14,param_7,&local_5,param_6);
  Concurrency::_Trace_ppl_function((_GUID *)&DAT_006fcbb0,'\x04',2);
  return;
}


/* FUN_0066dff0 @ 0066dff0  kind=gamemisc  attributed-by=none  size=102 */

void FUN_0066dff0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6,undefined4 param_7)

{
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined1 local_5;
  
  local_14 = param_4;
  local_10 = param_5;
  local_c = param_6;
  local_20 = param_1;
  local_1c = param_2;
  local_18 = param_3;
  Concurrency::_Trace_ppl_function((_GUID *)&DAT_006fcbb0,'\x04',1);
  FUN_0066dd80(&local_20,&local_14,param_7,&local_5,param_6);
  Concurrency::_Trace_ppl_function((_GUID *)&DAT_006fcbb0,'\x04',2);
  return;
}


/* FUN_0066e060 @ 0066e060  kind=gamemisc  attributed-by=none  size=102 */

void FUN_0066e060(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6,undefined4 param_7)

{
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined1 local_5;
  
  local_14 = param_4;
  local_10 = param_5;
  local_c = param_6;
  local_20 = param_1;
  local_1c = param_2;
  local_18 = param_3;
  Concurrency::_Trace_ppl_function((_GUID *)&DAT_006fcbb0,'\x04',1);
  FUN_0066de00(&local_20,&local_14,param_7,&local_5,param_6);
  Concurrency::_Trace_ppl_function((_GUID *)&DAT_006fcbb0,'\x04',2);
  return;
}


/* FUN_0066e0d0 @ 0066e0d0  kind=gamemisc  attributed-by=none  size=102 */

void FUN_0066e0d0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6,undefined4 param_7)

{
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined1 local_5;
  
  local_14 = param_4;
  local_10 = param_5;
  local_c = param_6;
  local_20 = param_1;
  local_1c = param_2;
  local_18 = param_3;
  Concurrency::_Trace_ppl_function((_GUID *)&DAT_006fcbb0,'\x04',1);
  FUN_0066de80(&local_20,&local_14,param_7,&local_5,param_6);
  Concurrency::_Trace_ppl_function((_GUID *)&DAT_006fcbb0,'\x04',2);
  return;
}


/* FUN_0066e140 @ 0066e140  kind=gamemisc  attributed-by=none  size=102 */

void FUN_0066e140(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6,undefined4 param_7)

{
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined1 local_5;
  
  local_14 = param_4;
  local_10 = param_5;
  local_c = param_6;
  local_20 = param_1;
  local_1c = param_2;
  local_18 = param_3;
  Concurrency::_Trace_ppl_function((_GUID *)&DAT_006fcbb0,'\x04',1);
  FUN_0066df00(&local_20,&local_14,param_7,&local_5,param_6);
  Concurrency::_Trace_ppl_function((_GUID *)&DAT_006fcbb0,'\x04',2);
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


/* FUN_0066e970 @ 0066e970  kind=gamemisc  attributed-by=none  size=47 */

void FUN_0066e970(void)

{
  int *piVar1;
  int in_ECX;
  
  if (*(int *)(in_ECX + 0x10) != 2) {
    if (*(int *)(in_ECX + 4) != 0) {
      piVar1 = *(int **)(*(int *)(in_ECX + 4) + 8);
      LOCK();
      *piVar1 = *piVar1 + 1;
      UNLOCK();
    }
    LOCK();
    *(undefined4 *)(in_ECX + 0x10) = 1;
    UNLOCK();
  }
                    /* WARNING: Could not recover jumptable at 0x0066e999. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  Concurrency::details::_Cancellation_beacon::~_Cancellation_beacon
            ((_Cancellation_beacon *)(in_ECX + 8));
  return;
}


/* FUN_0066e9a0 @ 0066e9a0  kind=gamemisc  attributed-by=none  size=94 */

void __thiscall FUN_0066e9a0(void *this)

{
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_006f7ff8;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
                    /* inlined constructor or destructor (approx location) for
                       Concurrency::task_handle<Concurrency::_Parallel_chunk_helper<Concurrency::details::_Vector_iterator<Concurrency::concurrent_vector<plasma::QuadVertex*,std::allocator<plasma::QuadVertex*>_>,plasma::QuadVertex*>,int,<lambda_c31a3785b8ee29a1ce8445e019cbe6ee>,Concurrency::auto_partitioner,1>_>
                        */
  *(task_handle<Concurrency::_Parallel_chunk_helper<Concurrency::details::_Vector_iterator<Concurrency::concurrent_vector<plasma::QuadVertex*,std::allocator<plasma::QuadVertex*>_>,plasma::QuadVertex*>,int,<lambda_c31a3785b8ee29a1ce8445e019cbe6ee>,Concurrency::auto_partitioner,1>_>_vftable
    **)this = &Concurrency::
               task_handle<Concurrency::_Parallel_chunk_helper<Concurrency::details::_Vector_iterator<Concurrency::concurrent_vector<plasma::QuadVertex*,std::allocator<plasma::QuadVertex*>_>,plasma::QuadVertex*>,int,<lambda_c31a3785b8ee29a1ce8445e019cbe6ee>,Concurrency::auto_partitioner,1>_>
               ::vftable;
  local_8 = 0;
  if ((*(int *)((int)this + 8) != 0) && (*(char *)((int)this + 0x10) == '\0')) {
    Concurrency::details::_UnrealizedChore::_CheckTaskCollection(this);
  }
                    /* inlined constructor or destructor (approx location) for
                       Concurrency::details::_Chore */
  *(_Chore_vftable **)this = &Concurrency::details::_Chore::vftable;
  ExceptionList = local_10;
  return;
}


/* FUN_0066ea00 @ 0066ea00  kind=gamemisc  attributed-by=none  size=94 */

void __thiscall FUN_0066ea00(void *this)

{
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_006f7ff8;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
                    /* inlined constructor or destructor (approx location) for
                       Concurrency::task_handle<Concurrency::_Parallel_chunk_helper<Concurrency::details::_Vector_iterator<Concurrency::concurrent_vector<plasma::QuadVertex*,std::allocator<plasma::QuadVertex*>_>,plasma::QuadVertex*>,int,<lambda_fe4ce4a6aaf0318c62c756eaccc0431b>,Concurrency::auto_partitioner,1>_>
                        */
  *(task_handle<Concurrency::_Parallel_chunk_helper<Concurrency::details::_Vector_iterator<Concurrency::concurrent_vector<plasma::QuadVertex*,std::allocator<plasma::QuadVertex*>_>,plasma::QuadVertex*>,int,<lambda_fe4ce4a6aaf0318c62c756eaccc0431b>,Concurrency::auto_partitioner,1>_>_vftable
    **)this = &Concurrency::
               task_handle<Concurrency::_Parallel_chunk_helper<Concurrency::details::_Vector_iterator<Concurrency::concurrent_vector<plasma::QuadVertex*,std::allocator<plasma::QuadVertex*>_>,plasma::QuadVertex*>,int,<lambda_fe4ce4a6aaf0318c62c756eaccc0431b>,Concurrency::auto_partitioner,1>_>
               ::vftable;
  local_8 = 0;
  if ((*(int *)((int)this + 8) != 0) && (*(char *)((int)this + 0x10) == '\0')) {
    Concurrency::details::_UnrealizedChore::_CheckTaskCollection(this);
  }
                    /* inlined constructor or destructor (approx location) for
                       Concurrency::details::_Chore */
  *(_Chore_vftable **)this = &Concurrency::details::_Chore::vftable;
  ExceptionList = local_10;
  return;
}


/* FUN_0066ea60 @ 0066ea60  kind=gamemisc  attributed-by=none  size=94 */

void __thiscall FUN_0066ea60(void *this)

{
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_006f7ff8;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
                    /* inlined constructor or destructor (approx location) for
                       Concurrency::task_handle<Concurrency::_Parallel_chunk_helper<Concurrency::details::_Vector_iterator<Concurrency::concurrent_vector<plasma::QuadEdge,std::allocator<plasma::QuadEdge>_>,plasma::QuadEdge>,int,<lambda_9843e8019373a7557d3f3e498d32c258>,Concurrency::auto_partitioner,1>_>
                        */
  *(task_handle<Concurrency::_Parallel_chunk_helper<Concurrency::details::_Vector_iterator<Concurrency::concurrent_vector<plasma::QuadEdge,std::allocator<plasma::QuadEdge>_>,plasma::QuadEdge>,int,<lambda_9843e8019373a7557d3f3e498d32c258>,Concurrency::auto_partitioner,1>_>_vftable
    **)this = &Concurrency::
               task_handle<Concurrency::_Parallel_chunk_helper<Concurrency::details::_Vector_iterator<Concurrency::concurrent_vector<plasma::QuadEdge,std::allocator<plasma::QuadEdge>_>,plasma::QuadEdge>,int,<lambda_9843e8019373a7557d3f3e498d32c258>,Concurrency::auto_partitioner,1>_>
               ::vftable;
  local_8 = 0;
  if ((*(int *)((int)this + 8) != 0) && (*(char *)((int)this + 0x10) == '\0')) {
    Concurrency::details::_UnrealizedChore::_CheckTaskCollection(this);
  }
                    /* inlined constructor or destructor (approx location) for
                       Concurrency::details::_Chore */
  *(_Chore_vftable **)this = &Concurrency::details::_Chore::vftable;
  ExceptionList = local_10;
  return;
}


/* FUN_0066eac0 @ 0066eac0  kind=gamemisc  attributed-by=none  size=94 */

void __thiscall FUN_0066eac0(void *this)

{
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_006f7ff8;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
                    /* inlined constructor or destructor (approx location) for
                       Concurrency::task_handle<Concurrency::_Parallel_chunk_helper<Concurrency::details::_Vector_iterator<Concurrency::concurrent_vector<plasma::QuadEdge,std::allocator<plasma::QuadEdge>_>,plasma::QuadEdge>,int,<lambda_e3fd6255bcf168381cb2d01c4cfc52ca>,Concurrency::auto_partitioner,1>_>
                        */
  *(task_handle<Concurrency::_Parallel_chunk_helper<Concurrency::details::_Vector_iterator<Concurrency::concurrent_vector<plasma::QuadEdge,std::allocator<plasma::QuadEdge>_>,plasma::QuadEdge>,int,<lambda_e3fd6255bcf168381cb2d01c4cfc52ca>,Concurrency::auto_partitioner,1>_>_vftable
    **)this = &Concurrency::
               task_handle<Concurrency::_Parallel_chunk_helper<Concurrency::details::_Vector_iterator<Concurrency::concurrent_vector<plasma::QuadEdge,std::allocator<plasma::QuadEdge>_>,plasma::QuadEdge>,int,<lambda_e3fd6255bcf168381cb2d01c4cfc52ca>,Concurrency::auto_partitioner,1>_>
               ::vftable;
  local_8 = 0;
  if ((*(int *)((int)this + 8) != 0) && (*(char *)((int)this + 0x10) == '\0')) {
    Concurrency::details::_UnrealizedChore::_CheckTaskCollection(this);
  }
                    /* inlined constructor or destructor (approx location) for
                       Concurrency::details::_Chore */
  *(_Chore_vftable **)this = &Concurrency::details::_Chore::vftable;
  ExceptionList = local_10;
  return;
}


/* FUN_0066eb20 @ 0066eb20  kind=gamemisc  attributed-by=none  size=94 */

void __thiscall FUN_0066eb20(void *this)

{
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_006f7ff8;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
                    /* inlined constructor or destructor (approx location) for
                       Concurrency::task_handle<Concurrency::_Parallel_chunk_helper<Concurrency::details::_Vector_iterator<Concurrency::concurrent_vector<plasma::QuadFace,std::allocator<plasma::QuadFace>_>,plasma::QuadFace>,int,<lambda_37224fa58ba67e25838a8994307bb82e>,Concurrency::auto_partitioner,1>_>
                        */
  *(task_handle<Concurrency::_Parallel_chunk_helper<Concurrency::details::_Vector_iterator<Concurrency::concurrent_vector<plasma::QuadFace,std::allocator<plasma::QuadFace>_>,plasma::QuadFace>,int,<lambda_37224fa58ba67e25838a8994307bb82e>,Concurrency::auto_partitioner,1>_>_vftable
    **)this = &Concurrency::
               task_handle<Concurrency::_Parallel_chunk_helper<Concurrency::details::_Vector_iterator<Concurrency::concurrent_vector<plasma::QuadFace,std::allocator<plasma::QuadFace>_>,plasma::QuadFace>,int,<lambda_37224fa58ba67e25838a8994307bb82e>,Concurrency::auto_partitioner,1>_>
               ::vftable;
  local_8 = 0;
  if ((*(int *)((int)this + 8) != 0) && (*(char *)((int)this + 0x10) == '\0')) {
    Concurrency::details::_UnrealizedChore::_CheckTaskCollection(this);
  }
                    /* inlined constructor or destructor (approx location) for
                       Concurrency::details::_Chore */
  *(_Chore_vftable **)this = &Concurrency::details::_Chore::vftable;
  ExceptionList = local_10;
  return;
}


/* FUN_0066eb80 @ 0066eb80  kind=gamemisc  attributed-by=none  size=101 */

void FUN_0066eb80(void)

{
  char cVar1;
  _StructuredTaskCollection *in_ECX;
  missing_wait local_10 [3];
  
  if (0 < *(int *)(in_ECX + 0x10)) {
    Concurrency::details::_StructuredTaskCollection::_Abort(in_ECX);
    cVar1 = __uncaught_exception();
    if (cVar1 == '\0') {
      if ((*(int *)(in_ECX + 8) != 0) && (*(int *)(in_ECX + 8) != 2)) {
        Concurrency::details::_StructuredTaskCollection::_CleanupToken(in_ECX);
      }
      Concurrency::missing_wait::missing_wait(local_10);
                    /* WARNING: Subroutine does not return */
      _CxxThrowException(local_10,(ThrowInfo *)&DAT_0075f3d8);
    }
  }
  if ((*(int *)(in_ECX + 8) != 0) && (*(int *)(in_ECX + 8) != 2)) {
    Concurrency::details::_StructuredTaskCollection::_CleanupToken(in_ECX);
  }
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


/* FUN_00671290 @ 00671290  kind=gamemisc  attributed-by=none  size=34 */

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


/* FUN_006712c0 @ 006712c0  kind=gamemisc  attributed-by=none  size=118 */

void FUN_006712c0(int *param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  
  iVar1 = *param_1;
  iVar2 = param_1[1];
  iVar3 = *param_2;
  uVar4 = Concurrency::details::_Concurrent_vector_base_v4::_Segment_index_of(iVar2 + iVar3);
  iVar1 = *(int *)(*(int *)(*(int *)(iVar1 + 0x1c) + uVar4 * 4) +
                  ((iVar2 + iVar3) - (1 << ((byte)uVar4 & 0x1f) & 0xfffffffeU)) * 4);
  *(undefined4 *)(iVar1 + 0x2c) = 0;
  *(undefined4 *)(iVar1 + 0xc) = 0;
  *(undefined4 *)(iVar1 + 0x10) = 0;
  *(undefined4 *)(iVar1 + 0x14) = 0;
  *(undefined4 *)(iVar1 + 0x18) = 0;
  *(undefined4 *)(iVar1 + 0x1c) = 0;
  *(undefined4 *)(iVar1 + 0x20) = 0;
  *(undefined4 *)(iVar1 + 0x24) = 0;
  *(undefined4 *)(iVar1 + 0x28) = 0;
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


/* FUN_00672e80 @ 00672e80  kind=gamemisc  attributed-by=none  size=201 */

void FUN_00672e80(uint param_1)

{
  uint uVar1;
  int *in_ECX;
  void *pvVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  uVar1 = param_1;
  local_8 = 0xffffffff;
  puStack_c = &LAB_006f8280;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  pvVar2 = (void *)0x0;
  if (param_1 != 0) {
    if (param_1 < 0x15555556) {
      pvVar2 = operator_new(param_1 * 0xc);
      if (pvVar2 != (void *)0x0) goto LAB_00672edf;
    }
                    /* WARNING: Subroutine does not return */
    std::_Xbad_alloc();
  }
LAB_00672edf:
  local_8 = 0;
  FUN_005c3790(*in_ECX,in_ECX[1],pvVar2,(int)&param_1 + 3,0,param_1);
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


/* FUN_006751d0 @ 006751d0  kind=gamemisc  attributed-by=none  size=1165 */

void FUN_006751d0(undefined4 param_1,int param_2,float *param_3,int *param_4,int param_5)

{
  uint *puVar1;
  uint *puVar2;
  uint *puVar3;
  float fVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  float *pfVar7;
  uint uVar8;
  undefined4 *puVar9;
  float *pfVar10;
  float *pfVar11;
  int iVar12;
  uint uVar13;
  undefined4 *puVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float local_94;
  float local_90;
  float local_8c;
  float local_88;
  int local_6c;
  float local_68;
  float fStack_64;
  float local_60;
  float fStack_5c;
  float local_58;
  float fStack_54;
  float local_50;
  float fStack_4c;
  float local_48;
  float fStack_44;
  float local_40 [4];
  float local_30 [2];
  float local_28;
  float local_24;
  float local_20;
  float fStack_1c;
  float local_18 [4];
  uint local_8;
  
  local_8 = DAT_0076aa78 ^ (uint)&stack0xfffffffc;
  puVar1 = (uint *)(param_5 + 0x28);
  fVar16 = 0.0;
  puVar2 = (uint *)(param_5 + 0x10);
  puVar3 = (uint *)(param_5 + 4);
  param_2 = param_2 - (int)param_3;
  uVar13 = *puVar3;
  fVar15 = 0.0;
  local_90 = 0.0;
  local_94 = 0.0;
  local_8c = 0.0;
  local_88 = 0.0;
  local_18[0] = 0.0;
  local_18[1] = 0.0;
  local_18[2] = 0.0;
  local_18[3] = 0.0;
  fVar17 = 0.0;
  local_30[1] = 0.0;
  local_6c = 4;
  do {
    iVar12 = *(int *)(param_2 + (int)param_3);
    fVar4 = *param_3;
    uVar5 = *(undefined8 *)(uVar13 + iVar12 * 8);
    fStack_1c = (float)((ulonglong)uVar5 >> 0x20);
    local_20 = (float)uVar5;
    fVar15 = fStack_1c * fVar4 + fVar15;
    fVar16 = fVar16 + local_20 * fVar4;
    uVar5 = *(undefined8 *)(*(int *)(param_5 + 0x1c) + iVar12 * 0x10);
    uVar6 = *(undefined8 *)(*(int *)(param_5 + 0x1c) + 8 + iVar12 * 0x10);
    fStack_4c = (float)((ulonglong)uVar5 >> 0x20);
    local_48 = (float)uVar6;
    local_50 = (float)uVar5;
    fStack_44 = (float)((ulonglong)uVar6 >> 0x20);
    local_94 = fStack_4c * fVar4 + local_94;
    local_90 = local_50 * fVar4 + local_90;
    local_8c = local_48 * fVar4 + local_8c;
    local_88 = fStack_44 * fVar4 + local_88;
    if (*(int *)(param_2 + (int)param_3) < *(int *)(param_5 + 0x2c) - *(int *)(param_5 + 0x28) >> 4)
    {
      uVar5 = *(undefined8 *)(*puVar1 + iVar12 * 0x10);
      uVar6 = *(undefined8 *)(*puVar1 + 8 + iVar12 * 0x10);
      fStack_64 = (float)((ulonglong)uVar5 >> 0x20);
      local_68 = (float)uVar5;
      local_60 = (float)uVar6;
      fStack_5c = (float)((ulonglong)uVar6 >> 0x20);
      local_18[0] = local_68 * fVar4 + local_18[0];
      local_18[1] = fStack_64 * fVar4 + local_18[1];
      local_18[2] = local_60 * fVar4 + local_18[2];
      local_18[3] = fStack_5c * fVar4 + local_18[3];
    }
    uVar5 = *(undefined8 *)(*puVar2 + *(int *)(param_2 + (int)param_3) * 8);
    uVar13 = *puVar3;
    local_58 = (float)uVar5;
    fStack_54 = (float)((ulonglong)uVar5 >> 0x20);
    fVar17 = fVar17 + local_58 * fVar4;
    param_3 = param_3 + 1;
    local_6c = local_6c + -1;
    local_30[1] = local_30[1] + fStack_54 * fVar4;
  } while (local_6c != 0);
  pfVar7 = *(float **)(param_5 + 8);
  _local_20 = CONCAT44(local_30[1],local_20);
  local_40[0] = local_90;
  local_40[1] = local_94;
  local_40[2] = local_8c;
  local_40[3] = local_88;
  local_30[0] = fVar17;
  local_28 = fVar16;
  local_24 = fVar15;
  if (&local_28 < pfVar7) {
    if (&local_28 < (float *)*puVar3) goto LAB_00675482;
    iVar12 = (int)&local_28 - (int)*puVar3 >> 3;
    if (*(int *)(param_5 + 8) == *(int *)(param_5 + 0xc)) {
      FUN_00428c80(1);
    }
    uVar8 = *puVar3;
    puVar9 = *(undefined4 **)(param_5 + 8);
    if (puVar9 != (undefined4 *)0x0) {
      *puVar9 = *(undefined4 *)(uVar8 + iVar12 * 8);
      puVar9[1] = *(undefined4 *)(uVar8 + 4 + iVar12 * 8);
    }
  }
  else {
LAB_00675482:
    if (pfVar7 == *(float **)(param_5 + 0xc)) {
      FUN_00428c80(1);
    }
    pfVar10 = *(float **)(param_5 + 8);
    if (pfVar10 != (float *)0x0) {
      *pfVar10 = fVar16;
      pfVar10[1] = fVar15;
    }
  }
  *(int *)(param_5 + 8) = *(int *)(param_5 + 8) + 8;
  pfVar10 = *(float **)(param_5 + 0x20);
  if (local_40 < pfVar10) {
    pfVar11 = *(float **)(param_5 + 0x1c);
    if (local_40 < pfVar11) goto LAB_006754f9;
    if (pfVar10 == *(float **)(param_5 + 0x24)) {
      FUN_00428d00(1);
    }
    puVar9 = *(undefined4 **)(param_5 + 0x20);
    puVar14 = (undefined4 *)
              (((int)local_40 - (int)pfVar11 & 0xfffffff0U) + *(uint *)(param_5 + 0x1c));
    if (puVar9 != (undefined4 *)0x0) {
      *puVar9 = *puVar14;
      puVar9[1] = puVar14[1];
      puVar9[2] = puVar14[2];
      puVar9[3] = puVar14[3];
    }
  }
  else {
LAB_006754f9:
    if (pfVar10 == *(float **)(param_5 + 0x24)) {
      FUN_00428d00(1);
    }
    pfVar10 = *(float **)(param_5 + 0x20);
    if (pfVar10 != (float *)0x0) {
      *pfVar10 = local_90;
      pfVar10[1] = local_94;
      pfVar10[2] = local_8c;
      pfVar10[3] = local_88;
    }
  }
  *(int *)(param_5 + 0x20) = *(int *)(param_5 + 0x20) + 0x10;
  pfVar10 = *(float **)(param_5 + 0x2c);
  pfVar11 = (float *)*puVar1;
  if (pfVar11 != pfVar10) {
    if ((local_18 < pfVar10) && (pfVar11 <= local_18)) {
      if (pfVar10 == *(float **)(param_5 + 0x30)) {
        FUN_00428d00(1);
      }
      puVar9 = *(undefined4 **)(param_5 + 0x2c);
      puVar14 = (undefined4 *)(((int)local_18 - (int)pfVar11 & 0xfffffff0U) + *puVar1);
      if (puVar9 != (undefined4 *)0x0) {
        *puVar9 = *puVar14;
        puVar9[1] = puVar14[1];
        puVar9[2] = puVar14[2];
        puVar9[3] = puVar14[3];
      }
    }
    else {
      if (pfVar10 == *(float **)(param_5 + 0x30)) {
        FUN_00428d00(1);
      }
      pfVar10 = *(float **)(param_5 + 0x2c);
      if (pfVar10 != (float *)0x0) {
        *pfVar10 = local_18[0];
        pfVar10[1] = local_18[1];
        pfVar10[2] = local_18[2];
        pfVar10[3] = local_18[3];
      }
    }
    *(int *)(param_5 + 0x2c) = *(int *)(param_5 + 0x2c) + 0x10;
  }
  pfVar10 = *(float **)(param_5 + 0x14);
  if (local_30 < pfVar10) {
    if ((float *)*puVar2 <= local_30) {
      iVar12 = (int)local_30 - (int)*puVar2 >> 3;
      if (pfVar10 == *(float **)(param_5 + 0x18)) {
        FUN_00428c80(1);
      }
      puVar9 = *(undefined4 **)(param_5 + 0x14);
      uVar8 = *puVar2;
      if (puVar9 != (undefined4 *)0x0) {
        *puVar9 = *(undefined4 *)(uVar8 + iVar12 * 8);
        puVar9[1] = *(undefined4 *)(uVar8 + 4 + iVar12 * 8);
      }
      goto LAB_0067563b;
    }
  }
  if (pfVar10 == *(float **)(param_5 + 0x18)) {
    FUN_00428c80(1);
  }
  pfVar10 = *(float **)(param_5 + 0x14);
  if (pfVar10 != (float *)0x0) {
    *pfVar10 = fVar17;
    pfVar10[1] = fStack_1c;
  }
LAB_0067563b:
  *(int *)(param_5 + 0x14) = *(int *)(param_5 + 0x14) + 8;
  *param_4 = (int)((int)pfVar7 - uVar13) >> 3;
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


/* FUN_00675670 @ 00675670  kind=gamemisc  attributed-by=none  size=28 */

void FUN_00675670(undefined4 param_1)

{
  FUN_0066add0(&param_1);
  return;
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


/* FUN_00677790 @ 00677790  kind=gamemisc  attributed-by=none  size=103 */

void FUN_00677790(int param_1)

{
  undefined4 *in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_006f8388;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  *in_ECX = 0;
  in_ECX[1] = 0;
  in_ECX[2] = 0;
  local_8 = 0;
  in_ECX[3] = *(undefined4 *)(param_1 + 0xc);
  FUN_00677800(param_1);
  ExceptionList = local_10;
  return;
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


/* FUN_00677970 @ 00677970  kind=gamemisc  attributed-by=none  size=28 */

void FUN_00677970(int param_1)

{
  int in_ECX;
  
  *(undefined4 *)(in_ECX + 0xc) = *(undefined4 *)(param_1 + 0xc);
  FUN_00677800(param_1);
  return;
}


/* FUN_00677b00 @ 00677b00  kind=gamemisc  attributed-by=none  size=150 */

undefined2 * FUN_00677b00(int param_1,int param_2,undefined2 *param_3)

{
  void *local_10;
  undefined1 *puStack_c;
  undefined1 local_8;
  undefined3 uStack_7;
  
  puStack_c = &LAB_006f83e1;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  uStack_7 = 0;
  for (; param_1 != param_2; param_1 = param_1 + 0x1c) {
    local_8 = 1;
    if (param_3 != (undefined2 *)0x0) {
      *(undefined4 *)(param_3 + 10) = 7;
      *(undefined4 *)(param_3 + 8) = 0;
      *param_3 = 0;
      FUN_0040f680(param_1,0,0xffffffff);
      *(undefined4 *)(param_3 + 0xc) = *(undefined4 *)(param_1 + 0x18);
    }
    param_3 = param_3 + 0xe;
  }
  ExceptionList = local_10;
  return param_3;
}


/* FUN_00677d10 @ 00677d10  kind=gamemisc  attributed-by=none  size=239 */

void FUN_00677d10(uint param_1)

{
  int iVar1;
  uint uVar2;
  int *in_ECX;
  void *pvVar3;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  uVar2 = param_1;
  local_8 = 0xffffffff;
  puStack_c = &LAB_006f8430;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  pvVar3 = (void *)0x0;
  if (param_1 != 0) {
    if (param_1 < 0x924924a) {
      pvVar3 = operator_new(param_1 * 0x1c);
      if (pvVar3 != (void *)0x0) goto LAB_00677d75;
    }
                    /* WARNING: Subroutine does not return */
    std::_Xbad_alloc();
  }
LAB_00677d75:
  local_8 = 0;
  FUN_00677b00(*in_ECX,in_ECX[1],pvVar3,(int)&param_1 + 3,0,param_1);
  iVar1 = *in_ECX;
  if (*in_ECX != 0) {
    FUN_00677ac0(*in_ECX,in_ECX[1],(int)&param_1 + 3,param_1);
                    /* WARNING: Subroutine does not return */
    operator_delete((void *)*in_ECX);
  }
  *in_ECX = (int)pvVar3;
  in_ECX[2] = (int)((int)pvVar3 + uVar2 * 0x1c);
  in_ECX[1] = (int)((int)pvVar3 + ((in_ECX[1] - iVar1) / 0x1c) * 0x1c);
  ExceptionList = local_10;
  return;
}


/* FUN_0067a7b0 @ 0067a7b0  kind=gamemisc  attributed-by=none  size=259 */

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


/* FUN_0067e480 @ 0067e480  kind=gamemisc  attributed-by=none  size=61 */

void FUN_0067e480(void)

{
  void *pvVar1;
  int *in_ECX;
  
  pvVar1 = *(void **)(*in_ECX + 4);
  if (*(char *)((int)pvVar1 + 0xd) == '\0') {
    FUN_0042ca80(*(undefined4 *)((int)pvVar1 + 8));
                    /* WARNING: Subroutine does not return */
    operator_delete(pvVar1);
  }
  *(int *)(*in_ECX + 4) = *in_ECX;
  *(int *)*in_ECX = *in_ECX;
  *(int *)(*in_ECX + 8) = *in_ECX;
  in_ECX[1] = 0;
  return;
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


/* FUN_0067fa50 @ 0067fa50  kind=gamemisc  attributed-by=none  size=13 */

void FUN_0067fa50(undefined4 param_1)

{
  int in_ECX;
  
  *(undefined4 *)(in_ECX + 0x58) = param_1;
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


/* FUN_00681240 @ 00681240  kind=gamemisc  attributed-by=none  size=28 */

float10 FUN_00681240(void)

{
  float in_ECX;
  
  std::basic_istream<char,std::char_traits<char>_>::read
            (*(basic_istream<char,std::char_traits<char>_> **)((int)in_ECX + 8),&stack0xfffffff8,
             (ulonglong)(uint)in_ECX << 0x20);
  return (float10)in_ECX;
}


/* FUN_00681820 @ 00681820  kind=gamemisc  attributed-by=none  size=15 */

void FUN_00681820(void)

{
  undefined4 *in_ECX;
  
  FUN_00681b70();
                    /* WARNING: Subroutine does not return */
  operator_delete((void *)*in_ECX);
}


/* FUN_00681840 @ 00681840  kind=gamemisc  attributed-by=none  size=69 */

void FUN_00681840(void)

{
  int in_ECX;
  
  if (0xf < *(uint *)(in_ECX + 0x30)) {
                    /* WARNING: Subroutine does not return */
    operator_delete(*(void **)(in_ECX + 0x1c));
  }
  *(undefined4 *)(in_ECX + 0x30) = 0xf;
  *(undefined4 *)(in_ECX + 0x2c) = 0;
  *(undefined1 *)(in_ECX + 0x1c) = 0;
  if (0xf < *(uint *)(in_ECX + 0x18)) {
                    /* WARNING: Subroutine does not return */
    operator_delete(*(void **)(in_ECX + 4));
  }
  *(undefined4 *)(in_ECX + 0x18) = 0xf;
  *(undefined4 *)(in_ECX + 0x14) = 0;
  *(undefined1 *)(in_ECX + 4) = 0;
  return;
}


/* FUN_00681890 @ 00681890  kind=gamemisc  attributed-by=none  size=261 */

undefined4 * FUN_00681890(uint *param_1)

{
  uint *puVar1;
  undefined4 *puVar2;
  int iVar3;
  int *in_ECX;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  uint local_28;
  undefined4 *local_24;
  undefined4 local_20;
  undefined4 *local_1c;
  undefined4 local_18;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puVar1 = param_1;
  local_8 = 0xffffffff;
  puStack_c = &LAB_006f7ce0;
  local_10 = ExceptionList;
  puVar2 = (undefined4 *)*in_ECX;
  puVar6 = puVar2;
  if (*(char *)((int)puVar2[1] + 0xd) == '\0') {
    puVar4 = (undefined4 *)puVar2[1];
    do {
      if ((uint)puVar4[4] < *param_1) {
        puVar5 = (undefined4 *)puVar4[2];
      }
      else {
        puVar5 = (undefined4 *)*puVar4;
        puVar6 = puVar4;
      }
      puVar4 = puVar5;
    } while (*(char *)((int)puVar5 + 0xd) == '\0');
  }
  if ((puVar6 != puVar2) && ((uint)puVar6[4] <= *param_1)) {
    return puVar6 + 5;
  }
  local_18 = 0;
  ExceptionList = &local_10;
  puVar2 = (undefined4 *)FUN_0046d550(0,0);
  local_28 = *puVar1;
  local_8 = 0;
  local_1c = puVar2;
  local_1c = (undefined4 *)FUN_0046d550(0,0);
  local_20 = 0;
  local_18 = 0;
  local_8 = CONCAT31(local_8._1_3_,1);
  local_24 = puVar2;
  iVar3 = FUN_00665bd0(&local_28);
  FUN_0067fa60(&param_1,puVar6,iVar3 + 0x10,iVar3);
  puVar2 = (undefined4 *)*local_24;
  *local_24 = local_24;
  local_24[1] = local_24;
  if (puVar2 != local_24) {
                    /* WARNING: Subroutine does not return */
    operator_delete(puVar2);
  }
                    /* WARNING: Subroutine does not return */
  operator_delete(local_24);
}


/* FUN_006819e0 @ 006819e0  kind=gamemisc  attributed-by=none  size=55 */

undefined4 * FUN_006819e0(void)

{
  undefined4 *puVar1;
  undefined4 *in_ECX;
  
  puVar1 = operator_new(0x1c);
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


/* FUN_00681a70 @ 00681a70  kind=gamemisc  attributed-by=none  size=122 */

void FUN_00681a70(uint param_1)

{
  void *pvVar1;
  undefined4 *in_ECX;
  void *_Dst;
  
  _Dst = (void *)0x0;
  if (param_1 != 0) {
    if (param_1 < 0x20000000) {
      _Dst = operator_new(param_1 * 8);
      if (_Dst != (void *)0x0) goto LAB_00681aa5;
    }
                    /* WARNING: Subroutine does not return */
    std::_Xbad_alloc();
  }
LAB_00681aa5:
  memmove(_Dst,(void *)*in_ECX,in_ECX[1] - (int)*in_ECX & 0xfffffff8);
  pvVar1 = (void *)*in_ECX;
  if (pvVar1 != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    operator_delete(pvVar1);
  }
  in_ECX[2] = (void *)((int)_Dst + param_1 * 8);
  *in_ECX = _Dst;
  in_ECX[1] = (void *)((int)_Dst + (in_ECX[1] - (int)pvVar1 >> 3) * 8);
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


