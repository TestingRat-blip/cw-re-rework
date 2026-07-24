// cw_lib (_library) -- cube. 8 functions. Bodies = Ghidra pseudo-C.
// Attribution: see ../attribution.tsv. Toolchain of the original: MSVC 11.0 (VS2012).
#include "cw_lib.h"

/* sqlite3_mutex_enter_win @ 00528530  kind=lib  attributed-by=ledger  size=14 */

void FUN_00528530(LPCRITICAL_SECTION param_1)

{
  EnterCriticalSection(param_1);
  return;
}


/* lib_fn_642ad0 @ 00642ad0  kind=lib  attributed-by=ledger  size=9388 */

void FUN_00642ad0(int param_1,int param_2,int param_3)

{
  byte *pbVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  float *pfVar7;
  byte bVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  undefined4 uVar12;
  int iVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  float *pfVar17;
  int in_ECX;
  int *piVar18;
  undefined4 *puVar19;
  undefined4 *puVar20;
  undefined4 *puVar21;
  int iVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  int local_358;
  int local_354;
  uint local_350;
  int local_34c;
  float local_308;
  float fStack_304;
  float local_300;
  float fStack_2fc;
  float local_2e0;
  float fStack_2dc;
  float local_2d8;
  float fStack_2d4;
  float local_278;
  float fStack_274;
  float local_258;
  float fStack_254;
  float local_248;
  float fStack_244;
  float local_238;
  float fStack_234;
  float local_218;
  float fStack_214;
  float local_210;
  float fStack_20c;
  float local_208;
  float fStack_204;
  float local_200;
  float fStack_1fc;
  undefined8 local_1f8;
  undefined8 local_1f0;
  undefined8 local_1e0;
  undefined8 local_1d8;
  float local_1d0;
  float fStack_1cc;
  float local_1c8;
  float fStack_1c4;
  float local_1c0;
  float fStack_1bc;
  undefined8 local_1b0;
  undefined8 local_1a8;
  float local_1a0;
  float fStack_19c;
  float local_198;
  float fStack_194;
  float local_190;
  float fStack_18c;
  float local_180;
  float fStack_17c;
  float local_178;
  float fStack_174;
  float local_170;
  float fStack_16c;
  undefined8 local_168;
  undefined8 local_160;
  undefined8 local_158;
  float local_150;
  float fStack_14c;
  float local_148;
  float fStack_144;
  undefined8 local_138;
  undefined8 local_130;
  float local_110;
  float fStack_10c;
  float local_f8;
  float fStack_f4;
  float local_f0;
  float fStack_ec;
  float local_e8;
  float fStack_e4;
  float local_e0;
  float fStack_dc;
  float local_d8;
  float fStack_d4;
  float local_d0;
  float fStack_cc;
  float local_c8;
  float fStack_c4;
  undefined8 local_c0;
  undefined8 local_b8;
  float local_b0;
  float fStack_ac;
  float local_a0;
  float fStack_9c;
  float local_98;
  float fStack_94;
  undefined8 local_88;
  float local_80;
  float fStack_7c;
  float local_78;
  float fStack_74;
  undefined8 local_70;
  float local_58;
  float fStack_54;
  float local_50;
  float fStack_4c;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  float local_28;
  float fStack_24;
  int iStack_1c;
  int iStack_14;
  float local_10;
  float fStack_c;
  
  uVar9 = DAT_0076aa78 ^ (uint)&stack0xfffffffc;
  iVar10 = FUN_0063deb0();
  iVar11 = *(int *)(in_ECX + 0xc10);
  if (iVar11 != 0) {
    if (((iVar10 + -1 < 0) || (*(int *)(in_ECX + 0x86c) == *(int *)(in_ECX + 0x870))) ||
       (*(int *)(in_ECX + 0xb30) == *(int *)(in_ECX + 0xb34))) {
      *(undefined4 *)(iVar11 + 8) = *(undefined4 *)(iVar11 + 4);
      *(undefined4 *)(*(int *)(in_ECX + 0xc10) + 0x20) =
           *(undefined4 *)(*(int *)(in_ECX + 0xc10) + 0x1c);
      *(undefined4 *)(*(int *)(in_ECX + 0xc10) + 0x14) =
           *(undefined4 *)(*(int *)(in_ECX + 0xc10) + 0x10);
      *(undefined4 *)(*(int *)(in_ECX + 0xc10) + 0x38) =
           *(undefined4 *)(*(int *)(in_ECX + 0xc10) + 0x34);
      __security_check_cookie(uVar9 ^ (uint)&stack0xfffffffc);
      return;
    }
    if (((*(byte *)(in_ECX + 0x85c) & 1) == 0) &&
       ((~(byte)(*(uint *)(in_ECX + 0x85c) >> 2) & 1) != 0)) {
      iVar10 = (iVar10 + -1) * 0x60;
      iVar11 = in_ECX + 0x924 + iVar10;
      uVar12 = FUN_00642a90();
      FUN_0042bea0(uVar12);
      FUN_0042bf80(*(int *)(*(int *)(in_ECX + 0xc10) + 8) - *(int *)(*(int *)(in_ECX + 0xc10) + 4)
                   >> 3);
      FUN_0042bea0(*(int *)(*(int *)(in_ECX + 0xc10) + 8) - *(int *)(*(int *)(in_ECX + 0xc10) + 4)
                   >> 3);
      iVar10 = in_ECX + 0x8e4 + iVar10;
      iVar13 = FUN_00642a90();
      FUN_0040d9d0(iVar13 * 6);
      iVar13 = 0;
      if (0 < (*(int *)(in_ECX + 0xb34) - *(int *)(in_ECX + 0xb30)) / 0x34) {
        iVar22 = 0;
        do {
          iVar13 = iVar13 + 1;
          *(undefined4 *)(iVar22 + *(int *)(in_ECX + 0xb30)) = 0;
          *(undefined4 *)(iVar22 + 8 + *(int *)(in_ECX + 0xb30)) = 0;
          *(undefined4 *)(iVar22 + 4 + *(int *)(in_ECX + 0xb30)) = 0;
          iVar22 = iVar22 + 0x34;
        } while (iVar13 < (*(int *)(in_ECX + 0xb34) - *(int *)(in_ECX + 0xb30)) / 0x34);
      }
      piVar18 = (int *)(*(int *)(in_ECX + 0xc10) + 4);
      local_350 = 0;
      if (0 < (int)(*(int *)(*(int *)(in_ECX + 0xc10) + 8) - *piVar18 & 0xfffffff8U)) {
        local_358 = 0;
        do {
          iVar13 = *piVar18;
          uVar14 = Concurrency::details::_Concurrent_vector_base_v4::_Segment_index_of(local_350);
          **(int **)(*(int *)(*(int *)(iVar11 + 0x1c) + uVar14 * 4) +
                    (local_350 - (1 << ((byte)uVar14 & 0x1f) & 0xfffffffeU)) * 4) =
               iVar13 + local_350 * 8;
          iVar13 = *(int *)(*(int *)(in_ECX + 0xc10) + 0x10);
          uVar14 = Concurrency::details::_Concurrent_vector_base_v4::_Segment_index_of(local_350);
          *(uint *)(*(int *)(*(int *)(*(int *)(iVar11 + 0x1c) + uVar14 * 4) +
                            (local_350 - (1 << ((byte)uVar14 & 0x1f) & 0xfffffffeU)) * 4) + 8) =
               iVar13 + local_350 * 8;
          iVar22 = *(int *)(*(int *)(in_ECX + 0xc10) + 0x1c) + local_358;
          uVar14 = Concurrency::details::_Concurrent_vector_base_v4::_Segment_index_of(local_350);
          local_358 = local_358 + 0x10;
          iVar13 = local_350 - (1 << ((byte)uVar14 & 0x1f) & 0xfffffffeU);
          local_350 = local_350 + 1;
          *(int *)(*(int *)(*(int *)(*(int *)(iVar11 + 0x1c) + uVar14 * 4) + iVar13 * 4) + 4) =
               iVar22;
          piVar18 = (int *)(*(int *)(in_ECX + 0xc10) + 4);
        } while ((int)local_350 < *(int *)(*(int *)(in_ECX + 0xc10) + 8) - *piVar18 >> 3);
      }
      uVar14 = *(uint *)(iVar10 + 0x18);
      local_350 = 0;
      uVar15 = Concurrency::details::_Concurrent_vector_base_v4::_Internal_capacity
                         ((_Concurrent_vector_base_v4 *)(iVar10 + 4));
      if (uVar15 < uVar14) {
        uVar14 = uVar15;
      }
      if (0 < (int)uVar14) {
        iVar11 = 0;
        do {
          uVar15 = Concurrency::details::_Concurrent_vector_base_v4::_Segment_index_of(local_350);
          uVar14 = local_350 + 1;
          iVar13 = (local_350 - (1 << ((byte)uVar15 & 0x1f) & 0xfffffffeU)) * 0x7c +
                   *(int *)(*(int *)(iVar10 + 0x1c) + uVar15 * 4);
          *(undefined4 *)(iVar11 + *(int *)(*(int *)(in_ECX + 0xc10) + 0x34)) =
               *(undefined4 *)(iVar13 + 100);
          *(undefined4 *)(iVar11 + 4 + *(int *)(*(int *)(in_ECX + 0xc10) + 0x34)) =
               *(undefined4 *)(iVar13 + 0x68);
          *(undefined4 *)(iVar11 + 8 + *(int *)(*(int *)(in_ECX + 0xc10) + 0x34)) =
               *(undefined4 *)(iVar13 + 0x6c);
          *(undefined4 *)(iVar11 + 0xc + *(int *)(*(int *)(in_ECX + 0xc10) + 0x34)) =
               *(undefined4 *)(iVar13 + 0x6c);
          *(undefined4 *)(iVar11 + 0x10 + *(int *)(*(int *)(in_ECX + 0xc10) + 0x34)) =
               *(undefined4 *)(iVar13 + 0x70);
          *(undefined4 *)(iVar11 + 0x14 + *(int *)(*(int *)(in_ECX + 0xc10) + 0x34)) =
               *(undefined4 *)(iVar13 + 100);
          uVar15 = *(uint *)(iVar10 + 0x18);
          uVar16 = Concurrency::details::_Concurrent_vector_base_v4::_Internal_capacity
                             ((_Concurrent_vector_base_v4 *)(iVar10 + 4));
          if (uVar16 < uVar15) {
            uVar15 = uVar16;
          }
          iVar11 = iVar11 + 0x18;
          local_350 = uVar14;
        } while ((int)uVar14 < (int)uVar15);
      }
      if (0 < (*(int *)(in_ECX + 0xb34) - *(int *)(in_ECX + 0xb30)) / 0x34) {
        iVar10 = 0;
        iVar11 = 0;
        do {
          iVar13 = *(int *)(in_ECX + 0xb30) + iVar10;
          iVar11 = iVar11 + 1;
          *(undefined4 *)(iVar13 + 0xc) = 0;
          *(undefined4 *)(iVar13 + 0x10) = 0;
          *(undefined4 *)(iVar13 + 0x14) = 0;
          *(undefined4 *)(iVar13 + 0x18) = 0;
          *(undefined4 *)(iVar13 + 0x1c) = 0;
          *(undefined4 *)(iVar13 + 0x20) = 0;
          *(undefined4 *)(iVar13 + 0x24) = 0;
          *(undefined4 *)(iVar13 + 0x28) = 0;
          *(undefined4 *)(iVar13 + 0x2c) = 0;
          *(undefined1 *)(iVar13 + 0x30) = 0;
          iVar10 = iVar10 + 0x34;
        } while (iVar11 < (*(int *)(in_ECX + 0xb34) - *(int *)(in_ECX + 0xb30)) / 0x34);
      }
      local_354 = 0;
      if (0 < (*(int *)(in_ECX + 0x870) - *(int *)(in_ECX + 0x86c)) / 0xc) {
        local_34c = 0;
        do {
          piVar18 = (int *)(*(int *)(in_ECX + 0x86c) + local_34c);
          iVar10 = 0;
          iVar11 = *piVar18;
          if (0 < (int)(piVar18[1] - iVar11 & 0xfffffffcU)) {
            do {
              if (*(int *)(*(int *)(local_34c + *(int *)(in_ECX + 0xb54)) + iVar10 * 4) < 0) {
                pbVar1 = (byte *)(*(int *)(iVar11 + iVar10 * 4) * 0x34 + 0x30 +
                                 *(int *)(in_ECX + 0xb30));
                *pbVar1 = *pbVar1 | 1;
                pbVar1 = (byte *)(*(int *)(*piVar18 +
                                          ((iVar10 + 1U) % (uint)(piVar18[1] - *piVar18 >> 2)) * 4)
                                  * 0x34 + 0x30 + *(int *)(in_ECX + 0xb30));
                *pbVar1 = *pbVar1 | 1;
              }
              iVar11 = *piVar18;
              iVar10 = iVar10 + 1;
            } while (iVar10 < piVar18[1] - iVar11 >> 2);
          }
          local_354 = local_354 + 1;
          local_34c = local_34c + 0xc;
        } while (local_354 < (*(int *)(in_ECX + 0x870) - *(int *)(in_ECX + 0x86c)) / 0xc);
      }
      local_354 = 0;
      if (0 < (*(int *)(in_ECX + 0xb34) - *(int *)(in_ECX + 0xb30)) / 0x34) {
        local_34c = 0;
        local_350 = 0;
        do {
          piVar18 = (int *)(*(int *)(in_ECX + 0xb30) + local_350);
          puVar19 = (undefined4 *)*piVar18;
          if (puVar19 != (undefined4 *)0x0) {
            iVar11 = **(int **)(*(int *)(in_ECX + 0xa8) + param_1 * 4);
            *puVar19 = *(undefined4 *)(iVar11 + local_354 * 8);
            puVar19[1] = *(undefined4 *)(iVar11 + 4 + local_354 * 8);
            puVar19 = (undefined4 *)piVar18[1];
            puVar21 = (undefined4 *)(**(int **)(*(int *)(in_ECX + 0x158) + param_2 * 4) + local_34c)
            ;
            *puVar19 = *puVar21;
            puVar19[1] = puVar21[1];
            puVar19[2] = puVar21[2];
            puVar19[3] = puVar21[3];
            puVar19 = (undefined4 *)piVar18[2];
            iVar11 = **(int **)(*(int *)(in_ECX + 0x100) + param_3 * 4);
            *puVar19 = *(undefined4 *)(iVar11 + local_354 * 8);
            puVar19[1] = *(undefined4 *)(iVar11 + 4 + local_354 * 8);
            if (local_354 < *(int *)(in_ECX + 0x2c8) - *(int *)(in_ECX + 0x2c4) >> 2) {
              if (*(short *)(*(int *)(in_ECX + 0x2c4) + local_354 * 4) == 1) {
                *(byte *)(piVar18 + 0xc) = *(byte *)(piVar18 + 0xc) | 2;
              }
              if (*(short *)(*(int *)(in_ECX + 0x2c4) + local_354 * 4) == 2) {
                *(byte *)(piVar18 + 0xc) = *(byte *)(piVar18 + 0xc) | 4;
              }
              if (*(short *)(*(int *)(in_ECX + 0x2c4) + local_354 * 4) == 3) {
                *(byte *)(piVar18 + 0xc) = *(byte *)(piVar18 + 0xc) | 0xc;
              }
            }
          }
          local_350 = local_350 + 0x34;
          local_34c = local_34c + 0x10;
          local_354 = local_354 + 1;
        } while (local_354 < (*(int *)(in_ECX + 0xb34) - *(int *)(in_ECX + 0xb30)) / 0x34);
      }
      local_354 = 0;
      if (0 < (*(int *)(in_ECX + 0x870) - *(int *)(in_ECX + 0x86c)) / 0xc) {
        local_350 = 0;
        local_34c = 0;
        do {
          piVar18 = *(int **)(*(int *)(in_ECX + 0x86c) + local_34c);
          uVar14 = *(int *)(*(int *)(in_ECX + 0x86c) + 4 + local_34c) - (int)piVar18 >> 2;
          if (2 < uVar14) {
            fVar34 = 0.0;
            fVar30 = 0.0;
            fVar31 = 0.0;
            fVar32 = 0.0;
            local_10 = 0.0;
            fStack_c = 0.0;
            local_218 = 0.0;
            fStack_214 = 0.0;
            local_210 = 0.0;
            fStack_20c = 0.0;
            local_28 = 0.0;
            fStack_24 = 0.0;
            uVar15 = 0;
            if (0 < (int)uVar14) {
              iVar11 = *(int *)(in_ECX + 0xb30);
              uVar16 = uVar14;
              local_210 = fVar34;
              local_28 = fVar34;
              fStack_20c = fVar34;
              do {
                iVar10 = *piVar18 * 0x34;
                piVar18 = piVar18 + 1;
                fVar30 = fVar30 + **(float **)(iVar10 + iVar11);
                fVar31 = fVar31 + (*(float **)(iVar10 + iVar11))[1];
                pfVar17 = *(float **)(iVar10 + 4 + iVar11);
                fVar32 = fVar32 + *pfVar17;
                fVar34 = fVar34 + pfVar17[1];
                local_210 = local_210 + pfVar17[2];
                fStack_20c = fStack_20c + pfVar17[3];
                pfVar17 = *(float **)(iVar10 + 8 + iVar11);
                fStack_24 = pfVar17[1] + fStack_24;
                local_28 = local_28 + *pfVar17;
                uVar16 = uVar16 - 1;
                uVar15 = uVar14;
                local_218 = fVar32;
                fStack_214 = fVar34;
                local_10 = fVar30;
                fStack_c = fVar31;
              } while (uVar16 != 0);
            }
            fVar34 = 1.0 / (float)(int)uVar15;
            puVar19 = (undefined4 *)(*(int *)(in_ECX + 0xb48) + local_350);
            local_38 = CONCAT44(fStack_c * fVar34,local_10 * fVar34);
            *(undefined8 *)*puVar19 = local_38;
            puVar6 = (undefined8 *)puVar19[1];
            local_c0 = CONCAT44(fStack_214 * fVar34,local_218 * fVar34);
            local_b8 = CONCAT44(fStack_20c * fVar34,local_210 * fVar34);
            *puVar6 = local_c0;
            puVar6[1] = local_b8;
            pfVar17 = (float *)puVar19[2];
            *pfVar17 = local_28 * fVar34;
            pfVar17[1] = fStack_24 * fVar34;
          }
          local_350 = local_350 + 0x34;
          local_354 = local_354 + 1;
          local_34c = local_34c + 0xc;
        } while (local_354 < (*(int *)(in_ECX + 0x870) - *(int *)(in_ECX + 0x86c)) / 0xc);
      }
      fVar34 = *(float *)(in_ECX + 0xc08);
      fVar30 = 1.0 - fVar34;
      iStack_1c = 0;
      if (0 < (*(int *)(in_ECX + 0xb64) - *(int *)(in_ECX + 0xb60)) / 0xc) {
        fStack_c = DAT_0076de74;
        do {
          iVar11 = *(int *)(in_ECX + 0xb60);
          iVar10 = *(int *)(iVar11 + iStack_1c * 0xc);
          iVar13 = *(int *)(iVar11 + 4 + iStack_1c * 0xc);
          puVar19 = (undefined4 *)
                    (*(int *)(iVar11 + 8 + iStack_1c * 0xc) * 0x34 + *(int *)(in_ECX + 0xb3c));
          iVar11 = *(int *)(in_ECX + 0x86c);
          *(byte *)(puVar19 + 0xc) = *(byte *)(puVar19 + 0xc) & 0xf1;
          iVar22 = *(int *)(*(int *)(in_ECX + 0x86c) + iVar10 * 0xc);
          uVar14 = iVar13 + 1;
          puVar21 = (undefined4 *)
                    (*(int *)(iVar22 + -4 + uVar14 * 4) * 0x34 + *(int *)(in_ECX + 0xb30));
          iVar13 = *(int *)(*(int *)(*(int *)(in_ECX + 0xb54) + iVar10 * 0xc) + iVar13 * 4);
          puVar20 = (undefined4 *)
                    (*(int *)(iVar22 + (uVar14 % (uint)(*(int *)(iVar11 + 4 + iVar10 * 0xc) -
                                                        *(int *)(iVar11 + iVar10 * 0xc) >> 2)) * 4)
                     * 0x34 + *(int *)(in_ECX + 0xb30));
          if (((iVar13 < 0) || ((*(byte *)(puVar21 + 0xc) & 2) != 0)) ||
             ((*(byte *)(puVar20 + 0xc) & 2) != 0)) {
            if ((DAT_0076de78 & 1) == 0) {
              DAT_0076de78 = DAT_0076de78 | 1;
              auVar28._0_12_ = ZEXT812(0x3fe921fb60000000);
              auVar28._12_4_ = 0;
              libm_sse2_cos_precise();
              DAT_0076de74 = 1.0 / ((float)auVar28._0_8_ * 2.0 + 1.0);
              fStack_c = DAT_0076de74;
            }
            if ((*(byte *)(puVar21 + 0xc) & 8) == 0) {
              if ((*(byte *)(puVar20 + 0xc) & 8) != 0) goto LAB_00643ad6;
LAB_00643ae3:
              fVar31 = 0.5;
            }
            else {
              fVar31 = fStack_c;
              if ((*(byte *)(puVar20 + 0xc) & 8) != 0) {
LAB_00643ad6:
                if ((*(byte *)(puVar21 + 0xc) & 8) != 0) goto LAB_00643ae3;
                fVar31 = 1.0 - fStack_c;
              }
            }
            local_a0 = (float)*(undefined8 *)*puVar21;
            local_238 = (float)*(undefined8 *)*puVar20;
            fStack_234 = (float)((ulonglong)*(undefined8 *)*puVar20 >> 0x20);
            fStack_9c = (float)((ulonglong)*(undefined8 *)*puVar21 >> 0x20);
            fVar32 = 1.0 - fVar31;
            local_158 = CONCAT44(fStack_9c * fVar31 + fStack_234 * fVar32,
                                 local_a0 * fVar31 + local_238 * fVar32);
            *(undefined8 *)*puVar19 = local_158;
            uVar2 = *(undefined8 *)puVar20[1];
            uVar3 = ((undefined8 *)puVar20[1])[1];
            uVar4 = *(undefined8 *)puVar21[1];
            uVar5 = ((undefined8 *)puVar21[1])[1];
            local_150 = (float)uVar4;
            local_2e0 = (float)uVar2;
            fStack_2dc = (float)((ulonglong)uVar2 >> 0x20);
            fStack_14c = (float)((ulonglong)uVar4 >> 0x20);
            local_2d8 = (float)uVar3;
            fStack_2d4 = (float)((ulonglong)uVar3 >> 0x20);
            local_148 = (float)uVar5;
            fStack_144 = (float)((ulonglong)uVar5 >> 0x20);
            puVar6 = (undefined8 *)puVar19[1];
            local_168 = CONCAT44(fStack_14c * fVar31 + fStack_2dc * fVar32,
                                 local_150 * fVar31 + local_2e0 * fVar32);
            local_160 = CONCAT44(fStack_144 * fVar31 + fStack_2d4 * fVar32,
                                 local_148 * fVar31 + local_2d8 * fVar32);
            *puVar6 = local_168;
            puVar6[1] = local_160;
            local_248 = (float)*(undefined8 *)puVar20[2];
            local_b0 = (float)*(undefined8 *)puVar21[2];
            fStack_244 = (float)((ulonglong)*(undefined8 *)puVar20[2] >> 0x20);
            pfVar17 = (float *)puVar19[2];
            fStack_ac = (float)((ulonglong)*(undefined8 *)puVar21[2] >> 0x20);
            *pfVar17 = local_b0 * fVar31 + local_248 * fVar32;
            pfVar17[1] = fStack_ac * fVar31 + fStack_244 * fVar32;
            if (((*(byte *)(puVar21 + 0xc) & 4) != 0) || ((*(byte *)(puVar20 + 0xc) & 4) != 0)) {
              *(byte *)(puVar19 + 0xc) = *(byte *)(puVar19 + 0xc) | 4;
            }
          }
          else {
            iVar13 = iVar13 * 0x34;
            pfVar17 = *(float **)(iVar13 + *(int *)(in_ECX + 0xb48));
            iVar10 = iVar10 * 0x34;
            uVar2 = **(undefined8 **)(iVar10 + *(int *)(in_ECX + 0xb48));
            local_50 = (float)uVar2;
            fStack_4c = (float)((ulonglong)uVar2 >> 0x20);
            local_1d0 = (float)*(undefined8 *)*puVar21;
            fStack_1cc = (float)((ulonglong)*(undefined8 *)*puVar21 >> 0x20);
            local_70 = CONCAT44(((((float *)*puVar20)[1] + fStack_1cc) * fVar30 +
                                (pfVar17[1] + fStack_4c) * fVar34) * 0.5,
                                ((local_1d0 + *(float *)*puVar20) * fVar30 +
                                (local_50 + *pfVar17) * fVar34) * 0.5);
            *(undefined8 *)*puVar19 = local_70;
            pfVar17 = *(float **)(*(int *)(in_ECX + 0xb48) + 4 + iVar13);
            puVar6 = *(undefined8 **)(*(int *)(in_ECX + 0xb48) + 4 + iVar10);
            uVar2 = *puVar6;
            uVar3 = puVar6[1];
            local_d8 = (float)uVar2;
            fStack_d4 = (float)((ulonglong)uVar2 >> 0x20);
            local_d0 = (float)uVar3;
            fStack_cc = (float)((ulonglong)uVar3 >> 0x20);
            pfVar7 = (float *)puVar20[1];
            uVar2 = *(undefined8 *)puVar21[1];
            uVar3 = ((undefined8 *)puVar21[1])[1];
            local_f0 = (float)uVar2;
            fStack_ec = (float)((ulonglong)uVar2 >> 0x20);
            local_e8 = (float)uVar3;
            puVar6 = (undefined8 *)puVar19[1];
            fStack_e4 = (float)((ulonglong)uVar3 >> 0x20);
            local_138 = CONCAT44(((pfVar7[1] + fStack_ec) * fVar30 +
                                 (pfVar17[1] + fStack_d4) * fVar34) * 0.5,
                                 ((local_f0 + *pfVar7) * fVar30 + (local_d8 + *pfVar17) * fVar34) *
                                 0.5);
            local_130 = CONCAT44(((pfVar7[3] + fStack_e4) * fVar30 +
                                 (pfVar17[3] + fStack_cc) * fVar34) * 0.5,
                                 ((pfVar7[2] + local_e8) * fVar30 + (pfVar17[2] + local_d0) * fVar34
                                 ) * 0.5);
            *puVar6 = local_138;
            puVar6[1] = local_130;
            pfVar17 = *(float **)(*(int *)(in_ECX + 0xb48) + 8 + iVar13);
            uVar2 = **(undefined8 **)(*(int *)(in_ECX + 0xb48) + 8 + iVar10);
            local_1a0 = (float)uVar2;
            fStack_19c = (float)((ulonglong)uVar2 >> 0x20);
            fVar31 = pfVar17[1];
            local_80 = (float)*(undefined8 *)puVar21[2];
            fStack_7c = (float)((ulonglong)*(undefined8 *)puVar21[2] >> 0x20);
            fVar32 = ((float *)puVar20[2])[1];
            pfVar7 = (float *)puVar19[2];
            *pfVar7 = ((local_80 + *(float *)puVar20[2]) * fVar30 + (local_1a0 + *pfVar17) * fVar34)
                      * 0.5;
            pfVar7[1] = ((fVar32 + fStack_7c) * fVar30 + (fVar31 + fStack_19c) * fVar34) * 0.5;
          }
          iStack_1c = iStack_1c + 1;
        } while (iStack_1c < (*(int *)(in_ECX + 0xb64) - *(int *)(in_ECX + 0xb60)) / 0xc);
      }
      iStack_14 = 0;
      if (0 < (*(int *)(in_ECX + 0x870) - *(int *)(in_ECX + 0x86c)) / 0xc) {
        local_34c = 0;
        fVar31 = DAT_0076de7c;
        do {
          piVar18 = (int *)(*(int *)(in_ECX + 0x86c) + local_34c);
          fStack_c = (float)(piVar18[1] - *piVar18 >> 2);
          if ((2 < (uint)fStack_c) && (uVar14 = 0, 0 < (int)fStack_c)) {
            do {
              iVar10 = *(int *)(local_34c + *(int *)(in_ECX + 0x86c));
              iVar11 = uVar14 * 4;
              uVar14 = uVar14 + 1;
              puVar19 = (undefined4 *)(*(int *)(iVar10 + iVar11) * 0x34 + *(int *)(in_ECX + 0xb30));
              puVar21 = (undefined4 *)
                        (*(int *)(iVar10 + (uVar14 % (uint)fStack_c) * 4) * 0x34 +
                        *(int *)(in_ECX + 0xb30));
              if ((DAT_0076de78 & 2) == 0) {
                DAT_0076de78 = DAT_0076de78 | 2;
                auVar29._0_12_ = ZEXT812(0x3fe921fb60000000);
                auVar29._12_4_ = 0;
                libm_sse2_cos_precise();
                fVar31 = 1.0 / ((float)auVar29._0_8_ * 2.0 + 1.0);
                DAT_0076de7c = fVar31;
              }
              bVar8 = *(byte *)(puVar19 + 0xc) & 8;
              if (bVar8 == 0) {
                if ((*(byte *)(puVar21 + 0xc) & 8) != 0) goto LAB_00643edb;
LAB_00643ee8:
                fVar32 = 0.5;
              }
              else {
                fVar32 = fVar31;
                if ((*(byte *)(puVar21 + 0xc) & 8) != 0) {
LAB_00643edb:
                  if (bVar8 != 0) goto LAB_00643ee8;
                  fVar32 = 1.0 - fVar31;
                }
              }
              local_c8 = (float)*(undefined8 *)*puVar19;
              local_258 = (float)*(undefined8 *)*puVar21;
              fStack_254 = (float)((ulonglong)*(undefined8 *)*puVar21 >> 0x20);
              fStack_c4 = (float)((ulonglong)*(undefined8 *)*puVar19 >> 0x20);
              fVar33 = 1.0 - fVar32;
              fVar23 = local_c8 * fVar32 + local_258 * fVar33;
              fVar24 = fStack_c4 * fVar32 + fStack_254 * fVar33;
              uVar2 = *(undefined8 *)puVar21[1];
              uVar3 = ((undefined8 *)puVar21[1])[1];
              uVar4 = *(undefined8 *)puVar19[1];
              uVar5 = ((undefined8 *)puVar19[1])[1];
              local_180 = (float)uVar4;
              local_308 = (float)uVar2;
              fStack_304 = (float)((ulonglong)uVar2 >> 0x20);
              fStack_17c = (float)((ulonglong)uVar4 >> 0x20);
              local_300 = (float)uVar3;
              local_178 = (float)uVar5;
              fStack_2fc = (float)((ulonglong)uVar3 >> 0x20);
              fStack_174 = (float)((ulonglong)uVar5 >> 0x20);
              fVar25 = local_180 * fVar32 + local_308 * fVar33;
              fVar35 = local_300 * fVar33 + local_178 * fVar32;
              fVar36 = fStack_2fc * fVar33 + fStack_174 * fVar32;
              fVar26 = fStack_17c * fVar32 + fStack_304 * fVar33;
              local_278 = (float)*(undefined8 *)puVar21[2];
              fStack_274 = (float)((ulonglong)*(undefined8 *)puVar21[2] >> 0x20);
              local_170 = (float)*(undefined8 *)puVar19[2];
              fStack_16c = (float)((ulonglong)*(undefined8 *)puVar19[2] >> 0x20);
              fVar27 = fVar32 * local_170 + fVar33 * local_278;
              fVar32 = fVar32 * fStack_16c + fVar33 * fStack_274;
              if ((*(int *)(iVar11 + *(int *)(local_34c + *(int *)(in_ECX + 0xb54))) < 0) ||
                 ((*(byte *)(puVar19 + 0xc) & 1) == 0)) {
                puVar19[3] = fVar23 + (float)puVar19[3];
                puVar19[4] = fVar24 + (float)puVar19[4];
                puVar19[5] = fVar25 + (float)puVar19[5];
                puVar19[6] = fVar26 + (float)puVar19[6];
                puVar19[7] = fVar35 + (float)puVar19[7];
                puVar19[8] = fVar36 + (float)puVar19[8];
                puVar19[9] = (float)puVar19[9] + fVar27;
                puVar19[10] = fVar32 + (float)puVar19[10];
                puVar19[0xb] = puVar19[0xb] + 1;
              }
              if ((*(int *)(iVar11 + *(int *)(local_34c + *(int *)(in_ECX + 0xb54))) < 0) ||
                 ((*(byte *)(puVar21 + 0xc) & 1) == 0)) {
                puVar21[3] = fVar23 + (float)puVar21[3];
                puVar21[4] = fVar24 + (float)puVar21[4];
                puVar21[5] = fVar25 + (float)puVar21[5];
                puVar21[6] = fVar26 + (float)puVar21[6];
                puVar21[7] = fVar35 + (float)puVar21[7];
                puVar21[8] = fVar36 + (float)puVar21[8];
                puVar21[9] = (float)puVar21[9] + fVar27;
                puVar21[10] = fVar32 + (float)puVar21[10];
                puVar21[0xb] = puVar21[0xb] + 1;
              }
              fStack_c = (float)(piVar18[1] - *piVar18 >> 2);
            } while ((int)uVar14 < (int)fStack_c);
          }
          iStack_14 = iStack_14 + 1;
          local_34c = local_34c + 0xc;
        } while (iStack_14 < (*(int *)(in_ECX + 0x870) - *(int *)(in_ECX + 0x86c)) / 0xc);
      }
      iStack_14 = 0;
      if (0 < (*(int *)(in_ECX + 0x870) - *(int *)(in_ECX + 0x86c)) / 0xc) {
        local_34c = 0;
        fStack_c = 0.0;
        do {
          piVar18 = (int *)(*(int *)(in_ECX + 0x86c) + (int)fStack_c);
          iVar10 = 0;
          iVar11 = *piVar18;
          if (0 < (int)(piVar18[1] - iVar11 & 0xfffffffcU)) {
            do {
              iVar11 = *(int *)(iVar11 + iVar10 * 4) * 0x34 + *(int *)(in_ECX + 0xb30);
              if ((*(byte *)(iVar11 + 0x30) & 1) == 0) {
                puVar19 = (undefined4 *)(*(int *)(in_ECX + 0xb48) + local_34c);
                pfVar17 = (float *)*puVar19;
                *(float *)(iVar11 + 0xc) = *(float *)(iVar11 + 0xc) + *pfVar17;
                pfVar7 = (float *)puVar19[1];
                *(float *)(iVar11 + 0x10) = pfVar17[1] + *(float *)(iVar11 + 0x10);
                *(float *)(iVar11 + 0x14) = *(float *)(iVar11 + 0x14) + *pfVar7;
                *(float *)(iVar11 + 0x18) = pfVar7[1] + *(float *)(iVar11 + 0x18);
                *(float *)(iVar11 + 0x1c) = pfVar7[2] + *(float *)(iVar11 + 0x1c);
                pfVar17 = (float *)puVar19[2];
                *(float *)(iVar11 + 0x20) = pfVar7[3] + *(float *)(iVar11 + 0x20);
                *(float *)(iVar11 + 0x24) = *(float *)(iVar11 + 0x24) + *pfVar17;
                *(float *)(iVar11 + 0x28) = pfVar17[1] + *(float *)(iVar11 + 0x28);
                *(int *)(iVar11 + 0x2c) = *(int *)(iVar11 + 0x2c) + 1;
              }
              iVar11 = *piVar18;
              iVar10 = iVar10 + 1;
            } while (iVar10 < piVar18[1] - iVar11 >> 2);
          }
          local_34c = local_34c + 0x34;
          iStack_14 = iStack_14 + 1;
          fStack_c = (float)((int)fStack_c + 0xc);
        } while (iStack_14 < (*(int *)(in_ECX + 0x870) - *(int *)(in_ECX + 0x86c)) / 0xc);
      }
      iVar11 = 0;
      if (0 < (*(int *)(in_ECX + 0xb34) - *(int *)(in_ECX + 0xb30)) / 0x34) {
        do {
          puVar19 = (undefined4 *)(iVar11 * 0x34 + *(int *)(in_ECX + 0xb30));
          bVar8 = *(byte *)(puVar19 + 0xc);
          if (((bVar8 & 2) == 0) && (iVar10 = puVar19[0xb], iVar10 != 0)) {
            if ((bVar8 & 1) == 0) {
              if ((DAT_0076de78 & 4) == 0) {
                DAT_0076de80 = 0.75;
                DAT_0076de78 = DAT_0076de78 | 4;
              }
              fVar31 = 1.0 / (float)iVar10;
              uVar2 = *(undefined8 *)*puVar19;
              local_110 = (float)uVar2;
              fStack_10c = (float)((ulonglong)uVar2 >> 0x20);
              local_48 = CONCAT44(fStack_10c * 0.25 + fVar31 * (float)puVar19[4] * DAT_0076de80,
                                  local_110 * 0.25 + fVar31 * (float)puVar19[3] * DAT_0076de80);
              *(undefined8 *)*puVar19 = local_48;
              puVar6 = (undefined8 *)puVar19[1];
              local_1c8 = (float)*puVar6;
              fStack_1c4 = (float)((ulonglong)*puVar6 >> 0x20);
              local_1c0 = (float)puVar6[1];
              fStack_1bc = (float)((ulonglong)puVar6[1] >> 0x20);
              local_1e0 = CONCAT44(fStack_1c4 * 0.25 + fVar31 * (float)puVar19[6] * DAT_0076de80,
                                   local_1c8 * 0.25 + fVar31 * (float)puVar19[5] * DAT_0076de80);
              local_1d8 = CONCAT44(fStack_1bc * 0.25 + fVar31 * (float)puVar19[8] * DAT_0076de80,
                                   local_1c0 * 0.25 + fVar31 * (float)puVar19[7] * DAT_0076de80);
              *puVar6 = local_1e0;
              puVar6[1] = local_1d8;
              pfVar17 = (float *)puVar19[2];
              local_58 = (float)*(undefined8 *)pfVar17;
              fStack_54 = (float)((ulonglong)*(undefined8 *)pfVar17 >> 0x20);
              fVar32 = local_58 * 0.25 + fVar31 * (float)puVar19[9] * DAT_0076de80;
              fVar31 = fStack_54 * 0.25 + fVar31 * (float)puVar19[10] * DAT_0076de80;
            }
            else {
              puVar6 = (undefined8 *)*puVar19;
              if ((bVar8 & 4) == 0) {
                fVar31 = 1.0 / (float)iVar10;
                local_e0 = (float)*puVar6;
                fStack_dc = (float)((ulonglong)*puVar6 >> 0x20);
                local_40 = CONCAT44(fVar30 * fStack_dc + fVar31 * fVar34 * (float)puVar19[4],
                                    fVar30 * local_e0 + fVar31 * fVar34 * (float)puVar19[3]);
                *puVar6 = local_40;
                puVar6 = (undefined8 *)puVar19[1];
                local_198 = (float)*puVar6;
                fStack_194 = (float)((ulonglong)*puVar6 >> 0x20);
                local_190 = (float)puVar6[1];
                fStack_18c = (float)((ulonglong)puVar6[1] >> 0x20);
                local_1b0 = CONCAT44(fStack_194 * fVar30 + fVar31 * fVar34 * (float)puVar19[6],
                                     local_198 * fVar30 + fVar31 * fVar34 * (float)puVar19[5]);
                local_1a8 = CONCAT44(fStack_18c * fVar30 + fVar31 * fVar34 * (float)puVar19[8],
                                     local_190 * fVar30 + fVar31 * fVar34 * (float)puVar19[7]);
                *puVar6 = local_1b0;
                puVar6[1] = local_1a8;
                pfVar17 = (float *)puVar19[2];
                local_f8 = (float)*(undefined8 *)pfVar17;
                fStack_f4 = (float)((ulonglong)*(undefined8 *)pfVar17 >> 0x20);
                fVar32 = local_f8 * fVar30 + fVar31 * (float)puVar19[9] * fVar34;
                fVar31 = fStack_f4 * fVar30 + fVar31 * (float)puVar19[10] * fVar34;
              }
              else {
                fVar31 = 1.0 / (float)iVar10;
                *puVar6 = CONCAT44(fVar31 * (float)puVar19[4],fVar31 * (float)puVar19[3]);
                puVar6 = (undefined8 *)puVar19[1];
                fVar32 = (float)puVar19[7];
                fVar23 = (float)puVar19[8];
                *puVar6 = CONCAT44(fVar31 * (float)puVar19[6],fVar31 * (float)puVar19[5]);
                puVar6[1] = CONCAT44(fVar31 * fVar23,fVar31 * fVar32);
                pfVar17 = (float *)puVar19[2];
                fVar32 = fVar31 * (float)puVar19[9];
                fVar31 = fVar31 * (float)puVar19[10];
              }
            }
            *pfVar17 = fVar32;
            pfVar17[1] = fVar31;
          }
          iVar11 = iVar11 + 1;
        } while (iVar11 < (*(int *)(in_ECX + 0xb34) - *(int *)(in_ECX + 0xb30)) / 0x34);
      }
      iStack_14 = 0;
      if (0 < (*(int *)(in_ECX + 0xb64) - *(int *)(in_ECX + 0xb60)) / 0xc) {
        fStack_c = 0.0;
        do {
          iVar11 = *(int *)(in_ECX + 0xb60);
          iVar10 = *(int *)(iVar11 + 4 + (int)fStack_c);
          iVar13 = *(int *)(iVar11 + (int)fStack_c);
          puVar19 = (undefined4 *)
                    (*(int *)(iVar11 + 8 + (int)fStack_c) * 0x34 + *(int *)(in_ECX + 0xb3c));
          iVar11 = *(int *)(*(int *)(in_ECX + 0x86c) + iVar13 * 0xc);
          puVar21 = (undefined4 *)(*(int *)(iVar11 + iVar10 * 4) * 0x34 + *(int *)(in_ECX + 0xb30));
          puVar20 = (undefined4 *)
                    (*(int *)(iVar11 + ((iVar10 + 1U) %
                                       (uint)(*(int *)(*(int *)(in_ECX + 0x86c) + 4 + iVar13 * 0xc)
                                              - iVar11 >> 2)) * 4) * 0x34 + *(int *)(in_ECX + 0xb30)
                    );
          if (((*(int *)(*(int *)(*(int *)(in_ECX + 0xb54) + iVar13 * 0xc) + iVar10 * 4) < 0) &&
              ((*(byte *)(puVar21 + 0xc) & 4) != 0)) && ((*(byte *)(puVar20 + 0xc) & 4) != 0)) {
            local_78 = (float)*(undefined8 *)*puVar21;
            fStack_74 = (float)((ulonglong)*(undefined8 *)*puVar21 >> 0x20);
            local_88 = CONCAT44((((float *)*puVar20)[1] + fStack_74) * 0.5,
                                (local_78 + *(float *)*puVar20) * 0.5);
            *(undefined8 *)*puVar19 = local_88;
            pfVar17 = (float *)puVar20[1];
            uVar2 = *(undefined8 *)puVar21[1];
            uVar3 = ((undefined8 *)puVar21[1])[1];
            local_208 = (float)uVar2;
            puVar6 = (undefined8 *)puVar19[1];
            fStack_204 = (float)((ulonglong)uVar2 >> 0x20);
            local_200 = (float)uVar3;
            fStack_1fc = (float)((ulonglong)uVar3 >> 0x20);
            local_1f8 = CONCAT44((pfVar17[1] + fStack_204) * 0.5,(local_208 + *pfVar17) * 0.5);
            local_1f0 = CONCAT44((pfVar17[3] + fStack_1fc) * 0.5,(pfVar17[2] + local_200) * 0.5);
            *puVar6 = local_1f8;
            puVar6[1] = local_1f0;
            local_98 = (float)*(undefined8 *)puVar21[2];
            fStack_94 = (float)((ulonglong)*(undefined8 *)puVar21[2] >> 0x20);
            fVar34 = ((float *)puVar20[2])[1];
            pfVar17 = (float *)puVar19[2];
            *pfVar17 = (*(float *)puVar20[2] + local_98) * 0.5;
            pfVar17[1] = (fVar34 + fStack_94) * 0.5;
            *(byte *)(puVar19 + 0xc) = *(byte *)(puVar19 + 0xc) & 0xfb | 2;
          }
          iStack_14 = iStack_14 + 1;
          fStack_c = (float)((int)fStack_c + 0xc);
        } while (iStack_14 < (*(int *)(in_ECX + 0xb64) - *(int *)(in_ECX + 0xb60)) / 0xc);
      }
      if (0 < (*(int *)(in_ECX + 0xb34) - *(int *)(in_ECX + 0xb30)) / 0x34) {
        iVar10 = 0;
        iVar11 = 0;
        do {
          bVar8 = *(byte *)(*(int *)(in_ECX + 0xb30) + 0x30 + iVar10);
          if ((bVar8 & 8) != 0) {
            *(byte *)(*(int *)(in_ECX + 0xb30) + 0x30 + iVar10) = bVar8 & 0xf3 | 2;
          }
          iVar11 = iVar11 + 1;
          iVar10 = iVar10 + 0x34;
        } while (iVar11 < (*(int *)(in_ECX + 0xb34) - *(int *)(in_ECX + 0xb30)) / 0x34);
      }
      iVar11 = FUN_0063deb0();
      iVar11 = iVar11 + -1;
      if (0 < iVar11) {
        do {
          FUN_00671f80(*(undefined4 *)(in_ECX + 0xc08));
          iVar11 = iVar11 + -1;
        } while (iVar11 != 0);
      }
    }
  }
  __security_check_cookie(uVar9 ^ (uint)&stack0xfffffffc);
  return;
}


/* lib_fn_648d60 @ 00648d60  kind=lib  attributed-by=ledger  size=7758 */

void FUN_00648d60(void)

{
  uint uVar1;
  uint *puVar2;
  undefined8 uVar3;
  int iVar4;
  float *pfVar5;
  undefined4 *puVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined1 uVar10;
  float *pfVar11;
  undefined8 *puVar12;
  undefined4 uVar13;
  uint uVar14;
  int *in_ECX;
  int iVar15;
  float *pfVar16;
  int iVar17;
  undefined4 *puVar18;
  uint uVar19;
  float fVar20;
  undefined8 *puVar21;
  int iVar22;
  int *piVar23;
  undefined4 *puVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float local_164;
  float local_160 [2];
  float local_158 [5];
  int local_144;
  float local_140;
  undefined1 local_139;
  float local_138;
  int *local_134;
  int *local_130;
  float local_12c;
  float local_128;
  float local_124;
  float local_120;
  float local_11c;
  float local_118;
  float local_114;
  undefined1 local_110 [64];
  undefined8 local_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  float local_b0;
  float fStack_ac;
  float local_a8;
  float fStack_a4;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  float local_78;
  float fStack_74;
  float local_70 [4];
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  float local_48 [4];
  undefined8 local_38;
  float local_30;
  float fStack_2c;
  float local_28;
  float fStack_24;
  float local_20;
  float fStack_1c;
  float local_18;
  float fStack_14;
  float local_10;
  float fStack_c;
  uint local_8;
  
  local_8 = DAT_0076aa78 ^ (uint)&stack0xfffffffc;
  local_130 = in_ECX;
  EnterCriticalSection((LPCRITICAL_SECTION)(in_ECX + 0x307));
  *(undefined1 *)((int)in_ECX + 0xb2d) = 1;
  if (in_ECX[0x304] != 0) {
    *(int *)(in_ECX[0x304] + 0xbc) = in_ECX[0x303];
  }
  if (in_ECX[0x305] != 0) {
    *(int *)(in_ECX[0x305] + 0xbc) = in_ECX[0x303];
  }
  if (in_ECX[0x306] != 0) {
    *(int *)(in_ECX[0x306] + 0xbc) = in_ECX[0x303];
  }
  if (((*(byte *)(in_ECX + 0x217) & 1) != 0) && ((*(byte *)(in_ECX + 0x303) & 1) != 0)) {
    if (in_ECX[0x304] != 0) {
      puVar2 = (uint *)(in_ECX[0x304] + 0xbc);
      *puVar2 = *puVar2 | 8;
    }
    if (in_ECX[0x305] != 0) {
      puVar2 = (uint *)(in_ECX[0x305] + 0xbc);
      *puVar2 = *puVar2 | 8;
    }
    if (in_ECX[0x306] != 0) {
      puVar2 = (uint *)(in_ECX[0x306] + 0xbc);
      *puVar2 = *puVar2 | 8;
    }
  }
  in_ECX[0x303] = 0;
  FUN_0064ac00();
  if (in_ECX[0x304] != 0) {
    if (((*(byte *)(in_ECX + 0x217) & 1) == 0) || ((~(byte)((uint)in_ECX[0x217] >> 2) & 1) == 0)) {
      uVar10 = 0;
    }
    else {
      uVar10 = 1;
    }
    *(undefined1 *)(in_ECX[0x304] + 100) = uVar10;
    iVar22 = in_ECX[0x2c9];
    if (iVar22 != 0) goto LAB_0064942b;
    if ((*(byte *)(in_ECX + 0x217) & 1) == 0) {
      FUN_0042bea0((*(int **)in_ECX[0x2a])[1] - **(int **)in_ECX[0x2a] >> 3);
      FUN_0042bf80((*(int **)in_ECX[0x2a])[1] - **(int **)in_ECX[0x2a] >> 3);
      FUN_0042bea0((*(int **)in_ECX[0x2a])[1] - **(int **)in_ECX[0x2a] >> 3);
      *(undefined4 *)(in_ECX[0x304] + 0x38) = *(undefined4 *)(in_ECX[0x304] + 0x34);
      local_118 = 0.0;
      if (0 < (int)((*(int **)in_ECX[0x2a])[1] - **(int **)in_ECX[0x2a] & 0xfffffff8U)) {
        iVar22 = 0;
        do {
          iVar17 = (int)local_118 * 8;
          iVar15 = **(int **)(in_ECX[0x2a] + in_ECX[0x1f] * 4);
          iVar4 = *(int *)(in_ECX[0x304] + 4);
          *(undefined4 *)(iVar4 + iVar17) = *(undefined4 *)(iVar15 + iVar17);
          *(undefined4 *)(iVar4 + 4 + iVar17) = *(undefined4 *)(iVar15 + 4 + iVar17);
          puVar18 = (undefined4 *)(**(int **)(in_ECX[0x56] + in_ECX[0x4b] * 4) + iVar22);
          iVar15 = *(int *)(in_ECX[0x304] + 0x1c);
          *(undefined4 *)(iVar15 + iVar22) = *puVar18;
          iVar15 = iVar15 + iVar22;
          iVar22 = iVar22 + 0x10;
          *(undefined4 *)(iVar15 + 4) = puVar18[1];
          *(undefined4 *)(iVar15 + 8) = puVar18[2];
          *(undefined4 *)(iVar15 + 0xc) = puVar18[3];
          iVar15 = **(int **)(in_ECX[0x40] + in_ECX[0x35] * 4);
          iVar4 = *(int *)(in_ECX[0x304] + 0x10);
          *(undefined4 *)(iVar4 + iVar17) = *(undefined4 *)(iVar15 + iVar17);
          *(undefined4 *)(iVar4 + 4 + iVar17) = *(undefined4 *)(iVar15 + 4 + iVar17);
          local_118 = (float)((int)local_118 + 1);
        } while ((int)local_118 < (*(int **)in_ECX[0x2a])[1] - **(int **)in_ECX[0x2a] >> 3);
      }
      local_118 = 0.0;
      if (0 < (in_ECX[0x21c] - in_ECX[0x21b]) / 0xc) {
        local_138 = 0.0;
        do {
          piVar23 = (int *)(in_ECX[0x21b] + (int)local_138);
          pfVar16 = (float *)*piVar23;
          local_128 = 1.4013e-45;
          local_134 = piVar23;
          if (1 < (piVar23[1] - (int)pfVar16 >> 2) + -1) {
            do {
              local_164 = *pfVar16;
              iVar22 = in_ECX[0x304];
              pfVar16 = *(float **)(iVar22 + 0x38);
              local_120 = local_164;
              if (&local_164 < pfVar16) {
                pfVar11 = *(float **)(iVar22 + 0x34);
                if (&local_164 < pfVar11) goto LAB_006490e1;
                pfVar5 = *(float **)(iVar22 + 0x3c);
                if ((pfVar16 == pfVar5) && ((int)pfVar5 - (int)pfVar16 >> 2 == 0)) {
                  iVar17 = (int)pfVar16 - *(int *)(iVar22 + 0x34) >> 2;
                  if (iVar17 == 0x3fffffff) goto LAB_00649419;
                  local_114 = (float)(iVar17 + 1);
                  uVar19 = (int)pfVar5 - *(int *)(iVar22 + 0x34) >> 2;
                  if (0x3fffffff - (uVar19 >> 1) < uVar19) {
                    fVar20 = 0.0;
                  }
                  else {
                    fVar20 = (float)(uVar19 + (uVar19 >> 1));
                  }
                  if ((uint)fVar20 < (uint)local_114) {
                    fVar20 = local_114;
                  }
                  FUN_0063da20(fVar20);
                }
                piVar23 = local_134;
                if (*(undefined4 **)(iVar22 + 0x38) != (undefined4 *)0x0) {
                  **(undefined4 **)(iVar22 + 0x38) =
                       *(undefined4 *)
                        (*(int *)(iVar22 + 0x34) + ((int)&local_164 - (int)pfVar11 >> 2) * 4);
                }
              }
              else {
LAB_006490e1:
                pfVar11 = *(float **)(iVar22 + 0x3c);
                if ((pfVar16 == pfVar11) && ((int)pfVar11 - (int)pfVar16 >> 2 == 0)) {
                  iVar17 = (int)pfVar16 - *(int *)(iVar22 + 0x34) >> 2;
                  if (iVar17 == 0x3fffffff) goto LAB_00649419;
                  local_114 = (float)(iVar17 + 1);
                  uVar19 = (int)pfVar11 - *(int *)(iVar22 + 0x34) >> 2;
                  if (0x3fffffff - (uVar19 >> 1) < uVar19) {
                    fVar20 = 0.0;
                  }
                  else {
                    fVar20 = (float)(uVar19 + (uVar19 >> 1));
                  }
                  if ((uint)fVar20 < (uint)local_114) {
                    fVar20 = local_114;
                  }
                  FUN_0063da20(fVar20);
                }
                if (*(float **)(iVar22 + 0x38) != (float *)0x0) {
                  **(float **)(iVar22 + 0x38) = local_120;
                }
              }
              *(int *)(iVar22 + 0x38) = *(int *)(iVar22 + 0x38) + 4;
              iVar22 = in_ECX[0x304];
              local_158[0] = *(float *)(*piVar23 + (int)local_128 * 4);
              pfVar16 = *(float **)(iVar22 + 0x38);
              local_120 = local_158[0];
              if (local_158 < pfVar16) {
                pfVar11 = *(float **)(iVar22 + 0x34);
                if (local_158 < pfVar11) goto LAB_0064920f;
                pfVar5 = *(float **)(iVar22 + 0x3c);
                if ((pfVar16 == pfVar5) && ((int)pfVar5 - (int)pfVar16 >> 2 == 0)) {
                  iVar17 = (int)pfVar16 - *(int *)(iVar22 + 0x34) >> 2;
                  if (iVar17 == 0x3fffffff) goto LAB_00649419;
                  local_114 = (float)(iVar17 + 1);
                  uVar19 = (int)pfVar5 - *(int *)(iVar22 + 0x34) >> 2;
                  if (0x3fffffff - (uVar19 >> 1) < uVar19) {
                    fVar20 = 0.0;
                  }
                  else {
                    fVar20 = (float)(uVar19 + (uVar19 >> 1));
                  }
                  if ((uint)fVar20 < (uint)local_114) {
                    fVar20 = local_114;
                  }
                  FUN_0063da20(fVar20);
                }
                piVar23 = local_134;
                if (*(undefined4 **)(iVar22 + 0x38) != (undefined4 *)0x0) {
                  **(undefined4 **)(iVar22 + 0x38) =
                       *(undefined4 *)
                        (*(int *)(iVar22 + 0x34) + ((int)local_158 - (int)pfVar11 >> 2) * 4);
                }
              }
              else {
LAB_0064920f:
                pfVar11 = *(float **)(iVar22 + 0x3c);
                if ((pfVar16 == pfVar11) && ((int)pfVar11 - (int)pfVar16 >> 2 == 0)) {
                  iVar17 = (int)pfVar16 - *(int *)(iVar22 + 0x34) >> 2;
                  if (iVar17 == 0x3fffffff) goto LAB_00649419;
                  local_114 = (float)(iVar17 + 1);
                  uVar19 = (int)pfVar11 - *(int *)(iVar22 + 0x34) >> 2;
                  if (0x3fffffff - (uVar19 >> 1) < uVar19) {
                    fVar20 = 0.0;
                  }
                  else {
                    fVar20 = (float)(uVar19 + (uVar19 >> 1));
                  }
                  if ((uint)fVar20 < (uint)local_114) {
                    fVar20 = local_114;
                  }
                  FUN_0063da20(fVar20);
                }
                if (*(float **)(iVar22 + 0x38) != (float *)0x0) {
                  **(float **)(iVar22 + 0x38) = local_120;
                }
              }
              *(int *)(iVar22 + 0x38) = *(int *)(iVar22 + 0x38) + 4;
              iVar22 = in_ECX[0x304];
              local_160[0] = *(float *)(*piVar23 + 4 + (int)local_128 * 4);
              pfVar16 = *(float **)(iVar22 + 0x38);
              local_120 = local_160[0];
              if (local_160 < pfVar16) {
                pfVar11 = *(float **)(iVar22 + 0x34);
                if (local_160 < pfVar11) goto LAB_0064933e;
                pfVar5 = *(float **)(iVar22 + 0x3c);
                if ((pfVar16 == pfVar5) && ((int)pfVar5 - (int)pfVar16 >> 2 == 0)) {
                  iVar17 = (int)pfVar16 - *(int *)(iVar22 + 0x34) >> 2;
                  if (iVar17 == 0x3fffffff) goto LAB_00649419;
                  local_114 = (float)(iVar17 + 1);
                  uVar19 = (int)pfVar5 - *(int *)(iVar22 + 0x34) >> 2;
                  if (0x3fffffff - (uVar19 >> 1) < uVar19) {
                    fVar20 = 0.0;
                  }
                  else {
                    fVar20 = (float)(uVar19 + (uVar19 >> 1));
                  }
                  if ((uint)fVar20 < (uint)local_114) {
                    fVar20 = local_114;
                  }
                  FUN_0063da20(fVar20);
                }
                piVar23 = local_134;
                if (*(undefined4 **)(iVar22 + 0x38) != (undefined4 *)0x0) {
                  **(undefined4 **)(iVar22 + 0x38) =
                       *(undefined4 *)
                        (*(int *)(iVar22 + 0x34) + ((int)local_160 - (int)pfVar11 >> 2) * 4);
                }
              }
              else {
LAB_0064933e:
                pfVar11 = *(float **)(iVar22 + 0x3c);
                if ((pfVar16 == pfVar11) && ((int)pfVar11 - (int)pfVar16 >> 2 == 0)) {
                  iVar17 = (int)pfVar16 - *(int *)(iVar22 + 0x34) >> 2;
                  if (iVar17 == 0x3fffffff) goto LAB_00649419;
                  local_114 = (float)(iVar17 + 1);
                  uVar19 = (int)pfVar11 - *(int *)(iVar22 + 0x34) >> 2;
                  if (0x3fffffff - (uVar19 >> 1) < uVar19) {
                    fVar20 = 0.0;
                  }
                  else {
                    fVar20 = (float)(uVar19 + (uVar19 >> 1));
                  }
                  if ((uint)fVar20 < (uint)local_114) {
                    fVar20 = local_114;
                  }
                  FUN_0063da20(fVar20);
                }
                if (*(float **)(iVar22 + 0x38) != (float *)0x0) {
                  **(float **)(iVar22 + 0x38) = local_120;
                }
              }
              *(int *)(iVar22 + 0x38) = *(int *)(iVar22 + 0x38) + 4;
              pfVar16 = (float *)*piVar23;
              local_128 = (float)((int)local_128 + 1);
            } while ((int)local_128 < (piVar23[1] - (int)pfVar16 >> 2) + -1);
          }
          local_138 = (float)((int)local_138 + 0xc);
          local_118 = (float)((int)local_118 + 1);
        } while ((int)local_118 < (in_ECX[0x21c] - in_ECX[0x21b]) / 0xc);
      }
    }
  }
  iVar22 = in_ECX[0x2c9];
LAB_0064942b:
  if (-1 < iVar22) {
    if ((((~(byte)((uint)in_ECX[0x217] >> 2) & 1) != 0) && ((*(byte *)(in_ECX + 0x217) & 1) != 0))
       && (iVar22 = in_ECX[0x304], iVar22 != 0)) {
      *(undefined4 *)(iVar22 + 8) = *(undefined4 *)(iVar22 + 4);
      *(undefined4 *)(in_ECX[0x304] + 0x20) = *(undefined4 *)(in_ECX[0x304] + 0x1c);
      *(undefined4 *)(in_ECX[0x304] + 0x14) = *(undefined4 *)(in_ECX[0x304] + 0x10);
      *(undefined4 *)(in_ECX[0x304] + 0x38) = *(undefined4 *)(in_ECX[0x304] + 0x34);
      FUN_00487380((in_ECX[0x2eb] - in_ECX[0x2ea]) / 0xc);
      iVar22 = 0;
      local_a8 = 0.0;
      local_160[1] = 0.0;
      fStack_a4 = 0.0;
      fVar27 = 0.0;
      local_118 = 0.0;
      fVar20 = local_a8;
      local_b0 = local_a8;
      if (0 < (in_ECX[0x2eb] - in_ECX[0x2ea]) / 0xc) {
        piVar23 = in_ECX + 0x2db;
        local_128 = 0.0;
        iVar17 = *piVar23;
        do {
          iVar15 = 0;
          iVar17 = *(int *)((int)local_128 + 4 + iVar17) - *(int *)((int)local_128 + iVar17) >> 4;
          if (0 < iVar17) {
            pfVar16 = *(float **)((int)local_128 + in_ECX[0x2ea]);
            pfVar11 = *(float **)((int)local_128 + *piVar23);
            do {
              local_b0 = local_b0 + *pfVar11;
              local_160[1] = local_160[1] + pfVar11[1];
              local_a8 = local_a8 + pfVar11[2];
              fStack_a4 = fStack_a4 + pfVar11[3];
              fVar27 = fVar27 + *pfVar16;
              fVar20 = fVar20 + pfVar16[1];
              iVar15 = iVar15 + 1;
              iVar22 = iVar22 + 1;
              pfVar11 = pfVar11 + 4;
              pfVar16 = pfVar16 + 2;
              in_ECX = local_130;
            } while (iVar15 < iVar17);
          }
          local_128 = (float)((int)local_128 + 0xc);
          local_118 = (float)((int)local_118 + 1);
          iVar17 = in_ECX[0x2db];
        } while ((int)local_118 < (in_ECX[0x2eb] - in_ECX[0x2ea]) / 0xc);
      }
      fVar28 = 1.0 / (float)iVar22;
      local_144 = 0;
      local_160[1] = local_160[1] * fVar28;
      local_118 = fVar20 * fVar28;
      local_130 = (int *)(fVar27 * fVar28);
      local_a8 = local_a8 * fVar28;
      fStack_a4 = fStack_a4 * fVar28;
      local_b0 = local_b0 * fVar28;
      fVar20 = 0.0;
      fVar27 = 0.0;
      local_134 = (int *)0x0;
      local_128 = 0.0;
      local_140 = 0.0;
      local_158[4] = 0.0;
      local_158[3] = 0.0;
      local_158[2] = 0.0;
      local_158[1] = 0.0;
      local_12c = 0.0;
      local_11c = 0.0;
      local_124 = 0.0;
      local_138 = 0.0;
      if (0 < (in_ECX[0x2eb] - in_ECX[0x2ea]) / 0xc) {
        iVar22 = in_ECX[0x2db];
        iVar17 = 0;
        do {
          iVar15 = *(int *)(iVar17 + 4 + iVar22) - *(int *)(iVar17 + iVar22) >> 4;
          if (0 < iVar15) {
            puVar21 = *(undefined8 **)(iVar17 + iVar22);
            puVar12 = *(undefined8 **)(iVar17 + in_ECX[0x2ea]);
            do {
              uVar3 = *puVar12;
              puVar7 = puVar21 + 1;
              local_38._0_4_ = (float)*puVar21;
              local_38._0_4_ = (float)local_38 - local_b0;
              local_60._0_4_ = (float)uVar3;
              local_60._0_4_ = (float)local_60 - (float)local_130;
              local_60._4_4_ = (float)((ulonglong)uVar3 >> 0x20);
              local_60._4_4_ = local_60._4_4_ - local_118;
              local_38._4_4_ = (float)((ulonglong)*puVar21 >> 0x20);
              local_38._4_4_ = local_38._4_4_ - local_160[1];
              puVar12 = puVar12 + 1;
              puVar21 = puVar21 + 2;
              local_30 = (float)*puVar7;
              local_30 = local_30 - local_a8;
              fStack_2c = (float)((ulonglong)*puVar7 >> 0x20);
              fStack_2c = fStack_2c - fStack_a4;
              local_128 = (float)local_60 * (float)local_60 + local_128;
              local_140 = local_60._4_4_ * local_60._4_4_ + local_140;
              local_158[4] = local_60._4_4_ * (float)local_60 + local_158[4];
              local_158[3] = local_158[3] + (float)local_60 * (float)local_38;
              local_158[2] = local_158[2] + (float)local_60 * local_38._4_4_;
              local_158[1] = local_158[1] + (float)local_60 * local_30;
              local_12c = local_12c + (float)local_60 * fStack_2c;
              fVar20 = local_11c + local_60._4_4_ * (float)local_38;
              local_138 = local_138 + local_60._4_4_ * local_30;
              fVar27 = local_124 + local_60._4_4_ * local_38._4_4_;
              local_134 = (int *)((float)local_134 + local_60._4_4_ * fStack_2c);
              iVar15 = iVar15 + -1;
              local_124 = fVar27;
              local_11c = fVar20;
              local_60 = uVar3;
            } while (iVar15 != 0);
          }
          local_144 = local_144 + 1;
          iVar17 = iVar17 + 0xc;
        } while (local_144 < (in_ECX[0x2eb] - in_ECX[0x2ea]) / 0xc);
      }
      fStack_c = local_140 * local_128 - local_158[4] * local_158[4];
      fStack_24 = (local_158[2] * local_140 - fVar27 * local_158[4]) / fStack_c;
      local_28 = (local_158[3] * local_140 - fVar20 * local_158[4]) / fStack_c;
      local_20 = (local_158[1] * local_140 - local_138 * local_158[4]) / fStack_c;
      fStack_1c = (local_12c * local_140 - (float)local_134 * local_158[4]) / fStack_c;
      local_12c = local_12c * local_158[4];
      local_18 = (local_11c * local_128 - local_158[3] * local_158[4]) / fStack_c;
      fStack_14 = (local_124 * local_128 - local_158[2] * local_158[4]) / fStack_c;
      local_10 = (local_138 * local_128 - local_158[1] * local_158[4]) / fStack_c;
      fStack_c = ((float)local_134 * local_128 - local_12c) / fStack_c;
      local_70[0] = 0.0;
      local_70[1] = 0.0;
      local_70[2] = 0.0;
      local_70[3] = 0.0;
      local_90 = 0x3f8000003f800000;
      local_88 = 0x3f8000003f800000;
      local_114 = 0.0;
      local_120 = local_a8;
      if (0 < (in_ECX[0x2eb] - in_ECX[0x2ea]) / 0xc) {
        piVar23 = (int *)in_ECX[0x2ea];
        do {
          iVar22 = 0;
          iVar17 = piVar23[1] - *piVar23 >> 3;
          if (0 < iVar17) {
            puVar21 = (undefined8 *)*piVar23;
            do {
              uVar3 = *puVar21;
              local_58 = CONCAT44(fStack_14,local_18);
              local_60._4_4_ = (float)((ulonglong)uVar3 >> 0x20);
              local_60._4_4_ = local_60._4_4_ - local_118;
              local_60._0_4_ = (float)uVar3;
              local_60._0_4_ = (float)local_60 - (float)local_130;
              local_50 = CONCAT44(fStack_c,local_10);
              local_120 = local_60._4_4_ * fStack_c;
              local_a0 = CONCAT44(fStack_24,local_28);
              local_98 = CONCAT44(fStack_1c,local_20);
              fVar20 = local_b0 + (float)local_60 * local_28;
              fVar27 = local_160[1] + (float)local_60 * fStack_24;
              local_38 = CONCAT44(fVar27,fVar20);
              fVar28 = local_a8 + (float)local_60 * local_20;
              iVar15 = 0;
              fVar25 = fStack_a4 + (float)local_60 * fStack_1c;
              _local_30 = CONCAT44(fVar25,fVar28);
              local_48[1] = fVar27 + local_60._4_4_ * fStack_14;
              local_48[0] = fVar20 + local_60._4_4_ * local_18;
              local_48[3] = fVar25 + local_120;
              local_48[2] = fVar28 + local_60._4_4_ * local_10;
              do {
                fVar20 = *(float *)((int)local_48 + iVar15);
                if (fVar20 < *(float *)((int)local_70 + iVar15)) {
                  *(float *)((int)local_70 + iVar15) = fVar20;
                }
                if (*(float *)((int)&local_90 + iVar15) <= fVar20 &&
                    fVar20 != *(float *)((int)&local_90 + iVar15)) {
                  *(float *)((int)&local_90 + iVar15) = fVar20;
                }
                iVar15 = iVar15 + 4;
              } while (iVar15 < 0x10);
              iVar22 = iVar22 + 1;
              puVar21 = puVar21 + 1;
              local_60 = uVar3;
            } while (iVar22 < iVar17);
          }
          local_114 = (float)((int)local_114 + 1);
          piVar23 = piVar23 + 3;
        } while ((int)local_114 < (in_ECX[0x2eb] - in_ECX[0x2ea]) / 0xc);
      }
      local_124 = 0.0;
      fStack_ac = local_160[1];
      if (0 < (in_ECX[0x2eb] - in_ECX[0x2ea]) / 0xc) {
        do {
          fVar20 = (float)((int)local_124 * 0xc);
          local_120 = fVar20;
          FUN_0040d9d0(*(int *)(in_ECX[0x2ea] + 4 + (int)fVar20) -
                       *(int *)(in_ECX[0x2ea] + (int)fVar20) >> 3);
          local_114 = 0.0;
          if (0 < (int)(*(int *)(in_ECX[0x2ea] + 4 + (int)fVar20) -
                        *(int *)(in_ECX[0x2ea] + (int)fVar20) & 0xfffffff8U)) {
            do {
              local_a0 = CONCAT44(fStack_14,local_18);
              local_144 = (int)local_114 * 8;
              uVar3 = *(undefined8 *)(*(int *)((int)fVar20 + in_ECX[0x2ea]) + local_144);
              local_60._4_4_ = (float)((ulonglong)uVar3 >> 0x20);
              local_60._4_4_ = local_60._4_4_ - local_118;
              local_98 = CONCAT44(fStack_c,local_10);
              local_60._0_4_ = (float)uVar3;
              local_60._0_4_ = (float)local_60 - (float)local_130;
              local_11c = local_60._4_4_ * fStack_c;
              local_c0 = CONCAT44(fStack_24,local_28);
              local_b8 = CONCAT44(fStack_1c,local_20);
              fVar27 = local_b0 + (float)local_60 * local_28;
              fVar28 = fStack_ac + (float)local_60 * fStack_24;
              local_58 = CONCAT44(fVar28,fVar27);
              fVar25 = local_a8 + (float)local_60 * local_20;
              fVar26 = fStack_a4 + (float)local_60 * fStack_1c;
              local_50 = CONCAT44(fVar26,fVar25);
              local_d0 = local_90;
              uVar8 = local_d0;
              local_d0._0_4_ = (float)local_90;
              local_d0._4_4_ = (float)((ulonglong)local_90 >> 0x20);
              local_c8 = local_88;
              uVar9 = local_c8;
              local_c8._0_4_ = (float)local_88;
              local_c8._4_4_ = (float)((ulonglong)local_88 >> 0x20);
              local_48[0] = (fVar27 + local_60._4_4_ * local_18) - local_70[0];
              iVar22 = in_ECX[0x304];
              local_48[1] = (fVar28 + local_60._4_4_ * fStack_14) - local_70[1];
              local_48[2] = (fVar25 + local_60._4_4_ * local_10) - local_70[2];
              *(int *)(*(int *)(*(int *)(iVar22 + 0x40) + (int)fVar20) + (int)local_114 * 4) =
                   *(int *)(iVar22 + 8) - *(int *)(iVar22 + 4) >> 3;
              local_48[3] = (fVar26 + local_11c) - local_70[3];
              puVar24 = (undefined4 *)(*(int *)((int)fVar20 + in_ECX[0x2ea]) + local_144);
              iVar22 = in_ECX[0x304];
              puVar18 = *(undefined4 **)(iVar22 + 8);
              local_38 = CONCAT44(local_48[1] / (local_d0._4_4_ - local_70[1]),
                                  local_48[0] / ((float)local_d0 - local_70[0]));
              fVar20 = local_48[2] / ((float)local_c8 - local_70[2]);
              fVar27 = local_48[3] / (local_c8._4_4_ - local_70[3]);
              _local_30 = CONCAT44(fVar27,fVar20);
              local_80 = local_38;
              _local_78 = CONCAT44(fVar27,fVar20);
              local_d0 = uVar8;
              local_c8 = uVar9;
              local_60 = uVar3;
              if ((puVar24 < puVar18) && (*(undefined4 **)(iVar22 + 4) <= puVar24)) {
                puVar6 = *(undefined4 **)(iVar22 + 0xc);
                iVar17 = (int)puVar24 - (int)*(undefined4 **)(iVar22 + 4) >> 3;
                if ((puVar18 == puVar6) && ((int)puVar6 - (int)puVar18 >> 3 == 0)) {
                  iVar15 = (int)puVar18 - *(int *)(iVar22 + 4) >> 3;
                  if (iVar15 == 0x1fffffff) goto LAB_00649419;
                  local_11c = (float)(iVar15 + 1);
                  uVar19 = (int)puVar6 - *(int *)(iVar22 + 4) >> 3;
                  if (0x1fffffff - (uVar19 >> 1) < uVar19) {
                    fVar20 = 0.0;
                  }
                  else {
                    fVar20 = (float)(uVar19 + (uVar19 >> 1));
                  }
                  if ((uint)fVar20 < (uint)local_11c) {
                    fVar20 = local_11c;
                  }
                  FUN_00428ac0(fVar20);
                }
                puVar18 = *(undefined4 **)(iVar22 + 8);
                iVar15 = *(int *)(iVar22 + 4);
                if (puVar18 != (undefined4 *)0x0) {
                  *puVar18 = *(undefined4 *)(iVar15 + iVar17 * 8);
                  uVar13 = *(undefined4 *)(iVar15 + 4 + iVar17 * 8);
LAB_0064a0f3:
                  puVar18[1] = uVar13;
                }
              }
              else {
                puVar6 = *(undefined4 **)(iVar22 + 0xc);
                if ((puVar18 == puVar6) && ((int)puVar6 - (int)puVar18 >> 3 == 0)) {
                  iVar17 = (int)puVar18 - *(int *)(iVar22 + 4) >> 3;
                  if (iVar17 == 0x1fffffff) goto LAB_00649419;
                  local_11c = (float)(iVar17 + 1);
                  uVar19 = (int)puVar6 - *(int *)(iVar22 + 4) >> 3;
                  if (0x1fffffff - (uVar19 >> 1) < uVar19) {
                    fVar20 = 0.0;
                  }
                  else {
                    fVar20 = (float)(uVar19 + (uVar19 >> 1));
                  }
                  if ((uint)fVar20 < (uint)local_11c) {
                    fVar20 = local_11c;
                  }
                  FUN_00428ac0(fVar20);
                }
                puVar18 = *(undefined4 **)(iVar22 + 8);
                if (puVar18 != (undefined4 *)0x0) {
                  *puVar18 = *puVar24;
                  uVar13 = puVar24[1];
                  goto LAB_0064a0f3;
                }
              }
              *(int *)(iVar22 + 8) = *(int *)(iVar22 + 8) + 8;
              iVar22 = in_ECX[0x304];
              puVar21 = *(undefined8 **)(iVar22 + 0x20);
              if (&local_80 < puVar21) {
                puVar12 = *(undefined8 **)(iVar22 + 0x1c);
                if (&local_80 < puVar12) goto LAB_0064a1aa;
                puVar7 = *(undefined8 **)(iVar22 + 0x24);
                if ((puVar21 == puVar7) && ((int)puVar7 - (int)puVar21 >> 4 == 0)) {
                  iVar17 = (int)puVar21 - *(int *)(iVar22 + 0x1c) >> 4;
                  if (iVar17 == 0xfffffff) goto LAB_00649419;
                  local_11c = (float)(iVar17 + 1);
                  uVar19 = (int)puVar7 - *(int *)(iVar22 + 0x1c) >> 4;
                  if (0xfffffff - (uVar19 >> 1) < uVar19) {
                    fVar20 = 0.0;
                  }
                  else {
                    fVar20 = (float)(uVar19 + (uVar19 >> 1));
                  }
                  if ((uint)fVar20 < (uint)local_11c) {
                    fVar20 = local_11c;
                  }
                  FUN_00428ba0(fVar20);
                }
                puVar18 = *(undefined4 **)(iVar22 + 0x20);
                puVar24 = (undefined4 *)
                          (((int)&local_80 - (int)puVar12 & 0xfffffff0U) + *(int *)(iVar22 + 0x1c));
                if (puVar18 != (undefined4 *)0x0) {
                  *puVar18 = *puVar24;
                  puVar18[1] = puVar24[1];
                  puVar18[2] = puVar24[2];
                  puVar18[3] = puVar24[3];
                }
              }
              else {
LAB_0064a1aa:
                puVar12 = *(undefined8 **)(iVar22 + 0x24);
                if ((puVar21 == puVar12) && ((int)puVar12 - (int)puVar21 >> 4 == 0)) {
                  iVar17 = (int)puVar21 - *(int *)(iVar22 + 0x1c) >> 4;
                  if (iVar17 == 0xfffffff) goto LAB_00649419;
                  local_11c = (float)(iVar17 + 1);
                  uVar19 = (int)puVar12 - *(int *)(iVar22 + 0x1c) >> 4;
                  if (0xfffffff - (uVar19 >> 1) < uVar19) {
                    fVar20 = 0.0;
                  }
                  else {
                    fVar20 = (float)(uVar19 + (uVar19 >> 1));
                  }
                  if ((uint)fVar20 < (uint)local_11c) {
                    fVar20 = local_11c;
                  }
                  FUN_00428ba0(fVar20);
                }
                puVar21 = *(undefined8 **)(iVar22 + 0x20);
                if (puVar21 != (undefined8 *)0x0) {
                  *puVar21 = local_38;
                  *(float *)(puVar21 + 1) = local_30;
                  *(float *)((int)puVar21 + 0xc) = fStack_2c;
                }
              }
              *(int *)(iVar22 + 0x20) = *(int *)(iVar22 + 0x20) + 0x10;
              iVar22 = in_ECX[0x304];
              puVar24 = (undefined4 *)(*(int *)(in_ECX[0x2ed] + (int)local_120) + local_144);
              puVar18 = *(undefined4 **)(iVar22 + 0x14);
              if ((puVar24 < puVar18) && (*(undefined4 **)(iVar22 + 0x10) <= puVar24)) {
                puVar6 = *(undefined4 **)(iVar22 + 0x18);
                iVar17 = (int)puVar24 - (int)*(undefined4 **)(iVar22 + 0x10) >> 3;
                if ((puVar18 == puVar6) && ((int)puVar6 - (int)puVar18 >> 3 == 0)) {
                  iVar15 = (int)puVar18 - *(int *)(iVar22 + 0x10) >> 3;
                  if (iVar15 == 0x1fffffff) goto LAB_00649419;
                  local_11c = (float)(iVar15 + 1);
                  uVar19 = (int)puVar6 - *(int *)(iVar22 + 0x10) >> 3;
                  if (0x1fffffff - (uVar19 >> 1) < uVar19) {
                    fVar20 = 0.0;
                  }
                  else {
                    fVar20 = (float)(uVar19 + (uVar19 >> 1));
                  }
                  if ((uint)fVar20 < (uint)local_11c) {
                    fVar20 = local_11c;
                  }
                  FUN_00428ac0(fVar20);
                }
                puVar18 = *(undefined4 **)(iVar22 + 0x14);
                iVar15 = *(int *)(iVar22 + 0x10);
                if (puVar18 != (undefined4 *)0x0) {
                  *puVar18 = *(undefined4 *)(iVar15 + iVar17 * 8);
                  uVar13 = *(undefined4 *)(iVar15 + 4 + iVar17 * 8);
LAB_0064a341:
                  puVar18[1] = uVar13;
                }
              }
              else {
                puVar6 = *(undefined4 **)(iVar22 + 0x18);
                if ((puVar18 == puVar6) && ((int)puVar6 - (int)puVar18 >> 3 == 0)) {
                  iVar17 = (int)puVar18 - *(int *)(iVar22 + 0x10) >> 3;
                  if (iVar17 == 0x1fffffff) goto LAB_00649419;
                  local_11c = (float)(iVar17 + 1);
                  uVar19 = (int)puVar6 - *(int *)(iVar22 + 0x10) >> 3;
                  if (0x1fffffff - (uVar19 >> 1) < uVar19) {
                    fVar20 = 0.0;
                  }
                  else {
                    fVar20 = (float)(uVar19 + (uVar19 >> 1));
                  }
                  if ((uint)fVar20 < (uint)local_11c) {
                    fVar20 = local_11c;
                  }
                  FUN_00428ac0(fVar20);
                }
                puVar18 = *(undefined4 **)(iVar22 + 0x14);
                if (puVar18 != (undefined4 *)0x0) {
                  *puVar18 = *puVar24;
                  uVar13 = puVar24[1];
                  goto LAB_0064a341;
                }
              }
              *(int *)(iVar22 + 0x14) = *(int *)(iVar22 + 0x14) + 8;
              local_114 = (float)((int)local_114 + 1);
              fVar20 = local_120;
            } while ((int)local_114 <
                     *(int *)(in_ECX[0x2ea] + 4 + (int)local_120) -
                     *(int *)(in_ECX[0x2ea] + (int)local_120) >> 3);
          }
          local_124 = (float)((int)local_124 + 1);
        } while ((int)local_124 < (in_ECX[0x2eb] - in_ECX[0x2ea]) / 0xc);
      }
      FUN_00675690();
    }
    if ((((uint)in_ECX[0x217] >> 4 & 1) != 0) && (iVar22 = in_ECX[0x306], iVar22 != 0)) {
      std::_Container_base0::_Orphan_all((_Container_base0 *)(iVar22 + 4));
      *(undefined4 *)(iVar22 + 8) = *(undefined4 *)(iVar22 + 4);
      iVar22 = in_ECX[0x306];
      std::_Container_base0::_Orphan_all((_Container_base0 *)(iVar22 + 0x1c));
      *(undefined4 *)(iVar22 + 0x20) = *(undefined4 *)(iVar22 + 0x1c);
      iVar22 = in_ECX[0x306];
      std::_Container_base0::_Orphan_all((_Container_base0 *)(iVar22 + 0x28));
      *(undefined4 *)(iVar22 + 0x2c) = *(undefined4 *)(iVar22 + 0x28);
      iVar22 = in_ECX[0x306];
      std::_Container_base0::_Orphan_all((_Container_base0 *)(iVar22 + 0x10));
      *(undefined4 *)(iVar22 + 0x14) = *(undefined4 *)(iVar22 + 0x10);
      iVar22 = in_ECX[0x306];
      std::_Container_base0::_Orphan_all((_Container_base0 *)(iVar22 + 0x34));
      *(undefined4 *)(iVar22 + 0x38) = *(undefined4 *)(iVar22 + 0x34);
      FUN_00487380((in_ECX[0x2eb] - in_ECX[0x2ea]) / 0xc);
      local_118 = 0.0;
      if (0 < (in_ECX[0x2eb] - in_ECX[0x2ea]) / 0xc) {
        local_130 = (int *)0x0;
        do {
          fVar20 = local_118;
          piVar23 = local_130;
          FUN_0040d9d0(*(int *)(in_ECX[0x2ea] + 4 + (int)local_130) -
                       *(int *)(in_ECX[0x2ea] + (int)local_130) >> 3);
          local_114 = 0.0;
          if (0 < (int)(*(int *)(in_ECX[0x2ea] + 4 + (int)piVar23) -
                        *(int *)(in_ECX[0x2ea] + (int)piVar23) & 0xfffffff8U)) {
            local_120 = 0.0;
            do {
              iVar22 = in_ECX[0x306];
              *(int *)(*(int *)(*(int *)(iVar22 + 0x40) + (int)piVar23) + (int)local_114 * 4) =
                   *(int *)(iVar22 + 8) - *(int *)(iVar22 + 4) >> 3;
              iVar22 = in_ECX[0x306];
              local_11c = (float)((int)local_114 * 8);
              puVar24 = (undefined4 *)(*(int *)((int)piVar23 + in_ECX[0x2ea]) + (int)local_11c);
              puVar18 = *(undefined4 **)(iVar22 + 8);
              if ((puVar24 < puVar18) && (*(undefined4 **)(iVar22 + 4) <= puVar24)) {
                puVar6 = *(undefined4 **)(iVar22 + 0xc);
                iVar17 = (int)puVar24 - (int)*(undefined4 **)(iVar22 + 4) >> 3;
                if ((puVar18 == puVar6) && ((int)puVar6 - (int)puVar18 >> 3 == 0)) {
                  iVar15 = (int)puVar18 - *(int *)(iVar22 + 4) >> 3;
                  if (iVar15 == 0x1fffffff) goto LAB_00649419;
                  local_124 = (float)(iVar15 + 1);
                  uVar19 = (int)puVar6 - *(int *)(iVar22 + 4) >> 3;
                  if (0x1fffffff - (uVar19 >> 1) < uVar19) {
                    fVar20 = 0.0;
                  }
                  else {
                    fVar20 = (float)(uVar19 + (uVar19 >> 1));
                  }
                  if ((uint)fVar20 < (uint)local_124) {
                    fVar20 = local_124;
                  }
                  FUN_00428ac0(fVar20);
                }
                puVar18 = *(undefined4 **)(iVar22 + 8);
                iVar15 = *(int *)(iVar22 + 4);
                if (puVar18 != (undefined4 *)0x0) {
                  *puVar18 = *(undefined4 *)(iVar15 + iVar17 * 8);
                  uVar13 = *(undefined4 *)(iVar15 + 4 + iVar17 * 8);
LAB_0064a616:
                  puVar18[1] = uVar13;
                }
              }
              else {
                puVar6 = *(undefined4 **)(iVar22 + 0xc);
                if ((puVar18 == puVar6) && ((int)puVar6 - (int)puVar18 >> 3 == 0)) {
                  iVar17 = (int)puVar18 - *(int *)(iVar22 + 4) >> 3;
                  if (iVar17 == 0x1fffffff) {
LAB_00649419:
                    /* WARNING: Subroutine does not return */
                    std::_Xlength_error("vector<T> too long");
                  }
                  local_124 = (float)(iVar17 + 1);
                  uVar19 = (int)puVar6 - *(int *)(iVar22 + 4) >> 3;
                  if (0x1fffffff - (uVar19 >> 1) < uVar19) {
                    fVar20 = 0.0;
                  }
                  else {
                    fVar20 = (float)(uVar19 + (uVar19 >> 1));
                  }
                  if ((uint)fVar20 < (uint)local_124) {
                    fVar20 = local_124;
                  }
                  FUN_00428ac0(fVar20);
                }
                puVar18 = *(undefined4 **)(iVar22 + 8);
                if (puVar18 != (undefined4 *)0x0) {
                  *puVar18 = *puVar24;
                  uVar13 = puVar24[1];
                  goto LAB_0064a616;
                }
              }
              fVar20 = local_120;
              piVar23 = local_130;
              *(int *)(iVar22 + 8) = *(int *)(iVar22 + 8) + 8;
              FUN_0042bd20(*(int *)(in_ECX[0x2e1] + (int)local_130) + (int)local_120);
              FUN_0042bd20(*(int *)(in_ECX[0x2e4] + (int)piVar23) + (int)fVar20);
              FUN_00642590(*(int *)(in_ECX[0x2ed] + (int)piVar23) + (int)local_11c);
              local_114 = (float)((int)local_114 + 1);
              local_120 = (float)((int)fVar20 + 0x10);
              fVar20 = local_118;
            } while ((int)local_114 <
                     *(int *)(in_ECX[0x2ea] + 4 + (int)piVar23) -
                     *(int *)(in_ECX[0x2ea] + (int)piVar23) >> 3);
          }
          local_118 = (float)((int)fVar20 + 1);
          local_130 = piVar23 + 3;
        } while ((int)local_118 < (in_ECX[0x2eb] - in_ECX[0x2ea]) / 0xc);
      }
      FUN_00673090(in_ECX[0x1dd] * 0x40 + in_ECX[0x1e8]);
      *(undefined4 *)(in_ECX[0x306] + 0xbc) = 0xf;
    }
    if ((((uint)in_ECX[0x217] >> 1 & 1) != 0) && (iVar22 = in_ECX[0x305], iVar22 != 0)) {
      std::_Container_base0::_Orphan_all((_Container_base0 *)(iVar22 + 4));
      *(undefined4 *)(iVar22 + 8) = *(undefined4 *)(iVar22 + 4);
      iVar22 = in_ECX[0x305];
      std::_Container_base0::_Orphan_all((_Container_base0 *)(iVar22 + 0x1c));
      *(undefined4 *)(iVar22 + 0x20) = *(undefined4 *)(iVar22 + 0x1c);
      iVar22 = in_ECX[0x305];
      std::_Container_base0::_Orphan_all((_Container_base0 *)(iVar22 + 0x10));
      *(undefined4 *)(iVar22 + 0x14) = *(undefined4 *)(iVar22 + 0x10);
      iVar22 = in_ECX[0x305];
      std::_Container_base0::_Orphan_all((_Container_base0 *)(iVar22 + 0x34));
      *(undefined4 *)(iVar22 + 0x38) = *(undefined4 *)(iVar22 + 0x34);
      if ((in_ECX[0x2fe] == 0) || ((float)in_ECX[0x2fd] == 0.0)) {
        local_12c = 0.0;
        if (0 < (in_ECX[0x2f4] - in_ECX[0x2f3]) / 0xc) {
          local_120 = 0.0;
          do {
            fVar20 = local_120;
            piVar23 = (int *)(*(int *)(in_ECX[0x305] + 8) - *(int *)(in_ECX[0x305] + 4) >> 3);
            local_130 = piVar23;
            if ((~(byte)((uint)in_ECX[0x217] >> 3) & 1) == 0) {
              if (in_ECX[0x219] == 1) {
                FUN_0063e020(local_12c,0,0,0,in_ECX[0x2ca]);
              }
              else if (in_ECX[0x219] == 2) {
                FUN_0063ea00(local_12c,0,0,0);
              }
            }
            local_114 = 0.0;
            if (0 < (int)(*(int *)(in_ECX[0x2f3] + 4 + (int)fVar20) -
                          *(int *)(in_ECX[0x2f3] + (int)fVar20) & 0xfffffff8U)) {
              local_118 = 0.0;
              do {
                iVar22 = (int)local_114 * 8;
                FUN_00642590(*(int *)((int)fVar20 + in_ECX[0x2f9]) + iVar22);
                FUN_0042bd20(*(int *)((int)fVar20 + in_ECX[0x2f6]) + (int)local_118);
                FUN_00642590(*(int *)((int)fVar20 + in_ECX[0x2f3]) + iVar22);
                local_118 = (float)((int)local_118 + 0x10);
                local_114 = (float)((int)local_114 + 1);
                piVar23 = local_130;
              } while ((int)local_114 <
                       *(int *)(in_ECX[0x2f3] + 4 + (int)fVar20) -
                       *(int *)(in_ECX[0x2f3] + (int)fVar20) >> 3);
            }
            if ((~(byte)((uint)in_ECX[0x217] >> 3) & 1) == 0) {
              if (in_ECX[0x219] == 1) {
                FUN_0063e020(local_12c,
                             (*(int *)(in_ECX[0x2f3] + 4 + (int)fVar20) -
                              *(int *)(in_ECX[0x2f3] + (int)fVar20) >> 3) + -4,0x3f800000,1,
                             in_ECX[0x2ca]);
              }
              else if (in_ECX[0x219] == 2) {
                FUN_0063ea00(local_12c,
                             (((int *)(in_ECX[0x2f3] + (int)fVar20))[1] -
                              *(int *)(in_ECX[0x2f3] + (int)fVar20) >> 3) + -4,0x3f800000,1);
              }
            }
            local_118 = (float)((*(int *)(in_ECX[0x305] + 8) - *(int *)(in_ECX[0x305] + 4) >> 3) -
                               (int)piVar23);
            local_114 = local_118;
            if ((~(byte)((uint)in_ECX[0x217] >> 3) & 1) == 0) {
              local_114 = (float)((int)local_118 - 2);
            }
            uVar19 = 0;
            if (0 < (int)local_114) {
              do {
                local_124 = (float)((int)uVar19 % (int)local_118 + (int)piVar23);
                FUN_0066add0(&local_124);
                local_124 = (float)((int)((uVar19 & 1) + 1 + uVar19) % (int)local_118 + (int)piVar23
                                   );
                FUN_0066add0(&local_124);
                uVar1 = uVar19 + 1;
                uVar14 = uVar1 & 0x80000001;
                if ((int)uVar14 < 0) {
                  uVar14 = (uVar14 - 1 | 0xfffffffe) + 1;
                }
                local_124 = (float)((int)(uVar14 + uVar19 + 1) % (int)local_118 + (int)local_130);
                FUN_0066add0(&local_124);
                uVar19 = uVar1;
                piVar23 = local_130;
              } while ((int)uVar1 < (int)local_114);
            }
            local_12c = (float)((int)local_12c + 1);
            local_120 = (float)((int)local_120 + 0xc);
          } while ((int)local_12c < (in_ECX[0x2f4] - in_ECX[0x2f3]) / 0xc);
        }
      }
      else {
        iVar22 = 0;
        if (0 < (in_ECX[0x2eb] - in_ECX[0x2ea]) / 0xc) {
          do {
            FUN_0063f3b0(iVar22,in_ECX[0x2fc],in_ECX[0x2fd]);
            iVar22 = iVar22 + 1;
          } while (iVar22 < (in_ECX[0x2eb] - in_ECX[0x2ea]) / 0xc);
        }
      }
      *(undefined4 *)(in_ECX[0x305] + 0xbc) = 0xf;
    }
  }
  if (in_ECX[0x304] != 0) {
    if ((*(byte *)(in_ECX[0x304] + 0xbc) & 8) != 0) {
      FUN_00674160();
    }
    (**(code **)(*(int *)in_ECX[0x304] + 4))();
  }
  if (in_ECX[0x305] != 0) {
    if ((*(byte *)(in_ECX[0x305] + 0xbc) & 8) != 0) {
      FUN_00674160();
    }
    (**(code **)(*(int *)in_ECX[0x305] + 4))();
  }
  if (in_ECX[0x306] != 0) {
    if ((*(byte *)(in_ECX[0x306] + 0xbc) & 8) != 0) {
      FUN_00674160();
    }
    (**(code **)(*(int *)in_ECX[0x306] + 4))();
  }
  local_139 = 1;
  FUN_00423e70();
  (**(code **)(*in_ECX + 0x20))(in_ECX + 0x21e,in_ECX + 0x220,local_110,&local_139);
  *(undefined1 *)((int)in_ECX + 0xb2d) = 0;
  LeaveCriticalSection((LPCRITICAL_SECTION)(in_ECX + 0x307));
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


/* lib_fn_66ec30 @ 0066ec30  kind=lib  attributed-by=ledger  size=323 */

void FUN_0066ec30(int *param_1)

{
  int *piVar1;
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
  float fVar15;
  float fVar16;
  float fVar17;
  undefined4 *puVar18;
  undefined4 *puVar19;
  float *pfVar20;
  float *pfVar21;
  int iVar22;
  int iVar23;
  int *piVar24;
  
  puVar18 = (undefined4 *)param_1[3];
  puVar19 = (undefined4 *)param_1[2];
  fVar2 = *(float *)*puVar18;
  fVar3 = *(float *)*puVar19;
  fVar4 = ((float *)*puVar18)[1];
  pfVar20 = (float *)puVar18[1];
  fVar5 = ((float *)*puVar19)[1];
  pfVar21 = (float *)puVar19[1];
  fVar6 = *pfVar20;
  fVar7 = pfVar20[1];
  fVar8 = pfVar20[2];
  fVar9 = pfVar20[3];
  fVar10 = *pfVar21;
  fVar11 = pfVar21[1];
  fVar12 = pfVar21[2];
  fVar13 = pfVar21[3];
  fVar14 = *(float *)puVar18[2];
  fVar15 = *(float *)puVar19[2];
  piVar24 = param_1 + 2;
  fVar16 = ((float *)puVar18[2])[1];
  fVar17 = ((float *)puVar19[2])[1];
  iVar23 = 2;
  do {
    if ((((*(byte *)(*piVar24 + 0x30) & 1) == 0) || (*param_1 == 0)) || (param_1[1] == 0)) {
      piVar1 = (int *)(*piVar24 + 0x2c);
      *piVar1 = *piVar1 + 1;
      iVar22 = *piVar24;
      *(float *)(iVar22 + 0xc) = *(float *)(iVar22 + 0xc) + (fVar2 + fVar3) * 0.5;
      *(float *)(iVar22 + 0x10) = (fVar4 + fVar5) * 0.5 + *(float *)(iVar22 + 0x10);
      *(float *)(iVar22 + 0x14) = (fVar6 + fVar10) * 0.5 + *(float *)(iVar22 + 0x14);
      *(float *)(iVar22 + 0x18) = (fVar7 + fVar11) * 0.5 + *(float *)(iVar22 + 0x18);
      *(float *)(iVar22 + 0x1c) = (fVar8 + fVar12) * 0.5 + *(float *)(iVar22 + 0x1c);
      *(float *)(iVar22 + 0x20) = (fVar9 + fVar13) * 0.5 + *(float *)(iVar22 + 0x20);
      *(float *)(iVar22 + 0x24) = (fVar14 + fVar15) * 0.5 + *(float *)(iVar22 + 0x24);
      *(float *)(iVar22 + 0x28) = (fVar16 + fVar17) * 0.5 + *(float *)(iVar22 + 0x28);
    }
    piVar24 = piVar24 + 1;
    iVar23 = iVar23 + -1;
  } while (iVar23 != 0);
  return;
}


/* lib_fn_66f1d0 @ 0066f1d0  kind=lib  attributed-by=ledger  size=176 */

void FUN_0066f1d0(int param_1)

{
  int *piVar1;
  int iVar2;
  float *pfVar3;
  int iVar4;
  
  iVar4 = 0;
  do {
    iVar2 = *(int *)(param_1 + iVar4 * 4);
    if ((*(byte *)(iVar2 + 0x30) & 1) == 0) {
      piVar1 = (int *)(iVar2 + 0x2c);
      *piVar1 = *piVar1 + 1;
      iVar2 = *(int *)(param_1 + iVar4 * 4);
      pfVar3 = *(float **)(param_1 + 0x10);
      *(float *)(iVar2 + 0xc) = *pfVar3 + *(float *)(iVar2 + 0xc);
      *(float *)(iVar2 + 0x10) = pfVar3[1] + *(float *)(iVar2 + 0x10);
      pfVar3 = *(float **)(param_1 + 0x14);
      *(float *)(iVar2 + 0x14) = *pfVar3 + *(float *)(iVar2 + 0x14);
      *(float *)(iVar2 + 0x18) = pfVar3[1] + *(float *)(iVar2 + 0x18);
      *(float *)(iVar2 + 0x1c) = pfVar3[2] + *(float *)(iVar2 + 0x1c);
      *(float *)(iVar2 + 0x20) = pfVar3[3] + *(float *)(iVar2 + 0x20);
      pfVar3 = *(float **)(param_1 + 0x18);
      *(float *)(iVar2 + 0x24) = *(float *)(iVar2 + 0x24) + *pfVar3;
      *(float *)(iVar2 + 0x28) = pfVar3[1] + *(float *)(iVar2 + 0x28);
    }
    iVar4 = iVar4 + 1;
  } while (iVar4 < 4);
  return;
}


/* stl_fn_673090 @ 00673090  kind=lib  attributed-by=ledger  size=4290 */

void FUN_00673090(float *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  float *pfVar8;
  uint **ppuVar9;
  uint **ppuVar10;
  uint **ppuVar11;
  int *piVar12;
  int *piVar13;
  int in_ECX;
  int iVar14;
  int iVar15;
  uint uVar16;
  int iVar17;
  int *piVar18;
  uint uVar19;
  uint *puVar20;
  float *pfVar21;
  uint *puVar22;
  undefined4 *puVar23;
  float *pfVar24;
  undefined4 *puVar25;
  uint *puVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  int local_e8;
  int local_e4;
  uint **local_e0;
  undefined4 local_dc;
  undefined4 local_d8;
  undefined4 local_d4;
  int local_d0;
  uint *local_cc;
  int local_c8;
  int local_c4;
  int local_c0;
  undefined4 *local_bc;
  undefined4 *local_b8;
  undefined4 local_b4;
  undefined4 local_b0;
  float local_ac;
  int local_a8;
  int local_a4;
  uint *local_a0;
  undefined4 *local_9c;
  int local_98;
  undefined4 *local_94;
  int local_90;
  uint local_8c;
  uint *local_88;
  float local_84 [16];
  float local_44 [2];
  undefined8 local_3c;
  undefined8 local_34;
  undefined4 local_2c [2];
  float local_24 [2];
  undefined8 local_1c;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006f82ab;
  local_10 = ExceptionList;
  local_14 = DAT_0076aa78 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_98 = in_ECX;
  FUN_00675690(local_14);
  FUN_00674160();
  *(undefined4 *)(in_ECX + 0x38) = *(undefined4 *)(in_ECX + 0x34);
  local_94 = (undefined4 *)0x0;
  local_bc = (undefined4 *)0x0;
  local_9c = (undefined4 *)0x0;
  local_b8 = (undefined4 *)0x0;
  local_b4 = 0;
  local_8 = 0;
  puVar20 = (uint *)(in_ECX + 4);
  pfVar21 = param_1;
  pfVar24 = local_84;
  for (iVar14 = 0x10; iVar14 != 0; iVar14 = iVar14 + -1) {
    *pfVar24 = *pfVar21;
    pfVar21 = pfVar21 + 1;
    pfVar24 = pfVar24 + 1;
  }
  local_ac = 0.0;
  local_a8 = 0;
  local_a0 = puVar20;
  local_88 = puVar20;
  if (0 < (*(int *)(local_98 + 0x104) - *(int *)(local_98 + 0x100)) / 0xc) {
    do {
      local_d0 = (int)(puVar20[1] - *puVar20) >> 3;
      iVar14 = *(int *)(local_98 + 0x100);
      local_90 = local_a8 * 0xc;
      if (2 < (uint)(*(int *)(local_90 + 4 + iVar14) - *(int *)(local_90 + iVar14) >> 2)) {
        uVar19 = 0;
        if (0 < (int)(*(int *)(local_90 + 4 + iVar14) - *(int *)(local_90 + iVar14) & 0xfffffffcU))
        {
          do {
            iVar14 = *(int *)(local_98 + 0x100);
            local_8c = uVar19 + 1;
            uVar16 = *puVar20;
            local_9c = *(undefined4 **)(*(int *)(local_90 + iVar14) + uVar19 * 4);
            iVar14 = *(int *)(*(int *)(local_90 + iVar14) +
                             ((int)local_8c %
                             (*(int *)(local_90 + 4 + iVar14) - *(int *)(local_90 + iVar14) >> 2)) *
                             4);
            local_34 = *(undefined8 *)(uVar16 + (int)local_9c * 8);
            puVar3 = (undefined8 *)puVar20[1];
            local_ac = (*(float *)(uVar16 + (int)local_9c * 8) * *(float *)(uVar16 + 4 + iVar14 * 8)
                       - *(float *)(uVar16 + 4 + (int)local_9c * 8) *
                         *(float *)(uVar16 + iVar14 * 8)) + local_ac;
            local_1c = local_34;
            if ((&local_34 < puVar3) && (puVar4 = (undefined8 *)*puVar20, puVar4 <= &local_34)) {
              puVar5 = (undefined8 *)puVar20[2];
              iVar14 = (int)&local_34 - (int)puVar4 >> 3;
              if ((puVar3 == puVar5) && ((int)puVar5 - (int)puVar3 >> 3 == 0)) {
                iVar15 = (int)puVar3 - (int)puVar4 >> 3;
                uVar2 = local_34;
                if (iVar15 == 0x1fffffff) goto LAB_00673a69;
                uVar16 = iVar15 + 1;
                uVar19 = (int)puVar5 - (int)puVar4 >> 3;
                local_1c._0_4_ = (float)local_34;
                local_1c = CONCAT44(uVar16,(float)local_1c);
                if (0x1fffffff - (uVar19 >> 1) < uVar19) {
                  uVar19 = 0;
                }
                else {
                  uVar19 = uVar19 + (uVar19 >> 1);
                }
                if (uVar19 < uVar16) {
                  uVar19 = uVar16;
                }
                FUN_00428ac0(uVar19);
              }
              puVar23 = (undefined4 *)puVar20[1];
              uVar19 = *puVar20;
              if (puVar23 != (undefined4 *)0x0) {
                *puVar23 = *(undefined4 *)(uVar19 + iVar14 * 8);
                puVar23[1] = *(undefined4 *)(uVar19 + 4 + iVar14 * 8);
              }
            }
            else {
              puVar4 = (undefined8 *)puVar20[2];
              if ((puVar3 == puVar4) && ((int)puVar4 - (int)puVar3 >> 3 == 0)) {
                iVar14 = (int)((int)puVar3 - *puVar20) >> 3;
                uVar2 = local_34;
                if (iVar14 == 0x1fffffff) goto LAB_00673a69;
                uVar16 = (int)((int)puVar4 - *puVar20) >> 3;
                uVar19 = iVar14 + 1;
                if (0x1fffffff - (uVar16 >> 1) < uVar16) {
                  uVar16 = 0;
                }
                else {
                  uVar16 = uVar16 + (uVar16 >> 1);
                }
                if (uVar16 < uVar19) {
                  uVar16 = uVar19;
                }
                FUN_00428ac0(uVar16);
              }
              if ((undefined8 *)puVar20[1] != (undefined8 *)0x0) {
                *(undefined8 *)puVar20[1] = local_1c;
              }
            }
            iVar14 = local_98;
            puVar20[1] = puVar20[1] + 8;
            puVar23 = *(undefined4 **)(local_98 + 0x20);
            puVar22 = (uint *)(local_98 + 0x1c);
            local_9c = (undefined4 *)((int)local_9c * 0x10);
            puVar25 = (undefined4 *)(*(int *)(local_98 + 0x1c) + (int)local_9c);
            uVar2 = local_1c;
            if ((puVar25 < puVar23) && (puVar6 = (undefined4 *)*puVar22, puVar6 <= puVar25)) {
              puVar7 = *(undefined4 **)(local_98 + 0x24);
              if ((puVar23 == puVar7) && ((int)puVar7 - (int)puVar23 >> 4 == 0)) {
                iVar15 = (int)((int)puVar23 - *puVar22) >> 4;
                if (iVar15 == 0xfffffff) goto LAB_00673a69;
                uVar16 = iVar15 + 1;
                uVar19 = (int)((int)puVar7 - *puVar22) >> 4;
                local_1c = CONCAT44(uVar16,(float)local_1c);
                if (0xfffffff - (uVar19 >> 1) < uVar19) {
                  uVar19 = 0;
                }
                else {
                  uVar19 = uVar19 + (uVar19 >> 1);
                }
                if (uVar19 < uVar16) {
                  uVar19 = uVar16;
                }
                FUN_00428ba0(uVar19);
              }
              puVar25 = (undefined4 *)(((int)puVar25 - (int)puVar6 & 0xfffffff0U) + *puVar22);
            }
            else {
              puVar6 = *(undefined4 **)(local_98 + 0x24);
              if ((puVar23 == puVar6) && ((int)puVar6 - (int)puVar23 >> 4 == 0)) {
                iVar15 = (int)((int)puVar23 - *puVar22) >> 4;
                if (iVar15 == 0xfffffff) goto LAB_00673a69;
                uVar16 = iVar15 + 1;
                uVar19 = (int)((int)puVar6 - *puVar22) >> 4;
                local_1c = CONCAT44(uVar16,(float)local_1c);
                if (0xfffffff - (uVar19 >> 1) < uVar19) {
                  uVar19 = 0;
                }
                else {
                  uVar19 = uVar19 + (uVar19 >> 1);
                }
                if (uVar19 < uVar16) {
                  uVar19 = uVar16;
                }
                FUN_00428ba0(uVar19);
              }
            }
            iVar15 = local_98;
            puVar23 = *(undefined4 **)(iVar14 + 0x20);
            if (puVar23 != (undefined4 *)0x0) {
              *puVar23 = *puVar25;
              puVar23[1] = puVar25[1];
              puVar23[2] = puVar25[2];
              puVar23[3] = puVar25[3];
            }
            *(int *)(iVar14 + 0x20) = *(int *)(iVar14 + 0x20) + 0x10;
            puVar23 = *(undefined4 **)(local_98 + 0x14);
            puVar26 = (uint *)(local_98 + 0x10);
            local_2c[0] = 0;
            local_2c[1] = 0;
            uVar2 = local_1c;
            if ((local_2c < puVar23) && ((undefined4 *)*puVar26 <= local_2c)) {
              puVar25 = *(undefined4 **)(local_98 + 0x18);
              local_94 = (undefined4 *)((int)local_2c - (int)*puVar26 >> 3);
              if ((puVar23 == puVar25) && ((int)puVar25 - (int)puVar23 >> 3 == 0)) {
                iVar17 = (int)((int)puVar23 - *puVar26) >> 3;
                if (iVar17 == 0x1fffffff) goto LAB_00673a69;
                uVar16 = iVar17 + 1;
                uVar19 = (int)((int)puVar25 - *puVar26) >> 3;
                local_1c = CONCAT44(uVar16,(float)local_1c);
                if (0x1fffffff - (uVar19 >> 1) < uVar19) {
                  uVar19 = 0;
                }
                else {
                  uVar19 = uVar19 + (uVar19 >> 1);
                }
                if (uVar19 < uVar16) {
                  uVar19 = uVar16;
                }
                FUN_00428ac0(uVar19);
              }
              puVar23 = *(undefined4 **)(iVar15 + 0x14);
              uVar19 = *puVar26;
              if (puVar23 != (undefined4 *)0x0) {
                *puVar23 = *(undefined4 *)(uVar19 + (int)local_94 * 8);
                puVar23[1] = *(undefined4 *)(uVar19 + 4 + (int)local_94 * 8);
              }
            }
            else {
              puVar25 = *(undefined4 **)(local_98 + 0x18);
              if ((puVar23 == puVar25) && ((int)puVar25 - (int)puVar23 >> 3 == 0)) {
                iVar17 = (int)((int)puVar23 - *puVar26) >> 3;
                if (iVar17 == 0x1fffffff) goto LAB_00673a69;
                uVar16 = iVar17 + 1;
                uVar19 = (int)((int)puVar25 - *puVar26) >> 3;
                local_1c = CONCAT44(uVar16,(float)local_1c);
                if (0x1fffffff - (uVar19 >> 1) < uVar19) {
                  uVar19 = 0;
                }
                else {
                  uVar19 = uVar19 + (uVar19 >> 1);
                }
                if (uVar19 < uVar16) {
                  uVar19 = uVar16;
                }
                FUN_00428ac0(uVar19);
              }
              if (*(undefined8 **)(iVar15 + 0x14) != (undefined8 *)0x0) {
                **(undefined8 **)(iVar15 + 0x14) = CONCAT44(local_2c[1],local_2c[0]);
              }
            }
            *(int *)(iVar15 + 0x14) = *(int *)(iVar15 + 0x14) + 8;
            pfVar21 = (float *)puVar20[1];
            fVar27 = param_1[4] * local_34._4_4_ + *param_1 * (float)local_34 + param_1[0xc];
            fVar30 = param_1[5] * local_34._4_4_ + param_1[1] * (float)local_34 + param_1[0xd];
            fVar28 = 1.0 / (param_1[3] * (float)local_34 + param_1[7] * local_34._4_4_ +
                           param_1[0xf]);
            local_3c = CONCAT44(fVar30,fVar27);
            local_24[1] = fVar30 * fVar28;
            local_24[0] = fVar27 * fVar28;
            uVar2 = local_1c;
            if ((local_24 < pfVar21) && ((float *)*puVar20 <= local_24)) {
              pfVar24 = (float *)puVar20[2];
              local_94 = (undefined4 *)((int)local_24 - (int)*puVar20 >> 3);
              if ((pfVar21 == pfVar24) && ((int)pfVar24 - (int)pfVar21 >> 3 == 0)) {
                iVar17 = (int)((int)pfVar21 - *puVar20) >> 3;
                if (iVar17 == 0x1fffffff) goto LAB_00673a69;
                uVar16 = iVar17 + 1;
                uVar19 = (int)((int)pfVar24 - *puVar20) >> 3;
                local_1c = CONCAT44(uVar16,(float)local_1c);
                if (0x1fffffff - (uVar19 >> 1) < uVar19) {
                  uVar19 = 0;
                }
                else {
                  uVar19 = uVar19 + (uVar19 >> 1);
                }
                if (uVar19 < uVar16) {
                  uVar19 = uVar16;
                }
                FUN_00428ac0(uVar19);
              }
              puVar23 = (undefined4 *)puVar20[1];
              uVar19 = *puVar20;
              if (puVar23 != (undefined4 *)0x0) {
                *puVar23 = *(undefined4 *)(uVar19 + (int)local_94 * 8);
                puVar23[1] = *(undefined4 *)(uVar19 + 4 + (int)local_94 * 8);
              }
            }
            else {
              pfVar24 = (float *)puVar20[2];
              if ((pfVar21 == pfVar24) && ((int)pfVar24 - (int)pfVar21 >> 3 == 0)) {
                iVar17 = (int)((int)pfVar21 - *puVar20) >> 3;
                if (iVar17 == 0x1fffffff) goto LAB_00673a69;
                uVar16 = iVar17 + 1;
                uVar19 = (int)((int)pfVar24 - *puVar20) >> 3;
                local_1c = CONCAT44(uVar16,(float)local_1c);
                if (0x1fffffff - (uVar19 >> 1) < uVar19) {
                  uVar19 = 0;
                }
                else {
                  uVar19 = uVar19 + (uVar19 >> 1);
                }
                if (uVar19 < uVar16) {
                  uVar19 = uVar16;
                }
                FUN_00428ac0(uVar19);
              }
              pfVar21 = (float *)puVar20[1];
              if (pfVar21 != (float *)0x0) {
                *pfVar21 = local_24[0];
                pfVar21[1] = local_24[1];
              }
            }
            puVar20[1] = puVar20[1] + 8;
            puVar23 = *(undefined4 **)(iVar14 + 0x20);
            puVar25 = (undefined4 *)(*(int *)(local_98 + 0x28) + (int)local_9c);
            uVar2 = local_1c;
            if ((puVar25 < puVar23) && (puVar6 = (undefined4 *)*puVar22, puVar6 <= puVar25)) {
              puVar7 = *(undefined4 **)(iVar14 + 0x24);
              if ((puVar23 == puVar7) && ((int)puVar7 - (int)puVar23 >> 4 == 0)) {
                iVar17 = (int)((int)puVar23 - *puVar22) >> 4;
                if (iVar17 == 0xfffffff) goto LAB_00673a69;
                uVar16 = iVar17 + 1;
                uVar19 = (int)((int)puVar7 - *puVar22) >> 4;
                local_1c = CONCAT44(uVar16,(float)local_1c);
                if (0xfffffff - (uVar19 >> 1) < uVar19) {
                  uVar19 = 0;
                }
                else {
                  uVar19 = uVar19 + (uVar19 >> 1);
                }
                if (uVar19 < uVar16) {
                  uVar19 = uVar16;
                }
                FUN_00428ba0(uVar19);
              }
              puVar25 = (undefined4 *)(((int)puVar25 - (int)puVar6 & 0xfffffff0U) + *puVar22);
            }
            else {
              puVar6 = *(undefined4 **)(iVar14 + 0x24);
              if ((puVar23 == puVar6) && ((int)puVar6 - (int)puVar23 >> 4 == 0)) {
                iVar17 = (int)((int)puVar23 - *puVar22) >> 4;
                if (iVar17 == 0xfffffff) goto LAB_00673a69;
                uVar16 = iVar17 + 1;
                uVar19 = (int)((int)puVar6 - *puVar22) >> 4;
                local_1c = CONCAT44(uVar16,(float)local_1c);
                if (0xfffffff - (uVar19 >> 1) < uVar19) {
                  uVar19 = 0;
                }
                else {
                  uVar19 = uVar19 + (uVar19 >> 1);
                }
                if (uVar19 < uVar16) {
                  uVar19 = uVar16;
                }
                FUN_00428ba0(uVar19);
              }
            }
            puVar23 = *(undefined4 **)(iVar14 + 0x20);
            if (puVar23 != (undefined4 *)0x0) {
              *puVar23 = *puVar25;
              puVar23[1] = puVar25[1];
              puVar23[2] = puVar25[2];
              puVar23[3] = puVar25[3];
            }
            *(int *)(iVar14 + 0x20) = *(int *)(iVar14 + 0x20) + 0x10;
            pfVar21 = *(float **)(iVar15 + 0x14);
            local_44[0] = 0.0;
            local_44[1] = 0.0;
            uVar2 = local_1c;
            if ((local_44 < pfVar21) && (pfVar24 = (float *)*puVar26, pfVar24 <= local_44)) {
              pfVar8 = *(float **)(iVar15 + 0x18);
              iVar14 = (int)local_44 - (int)pfVar24 >> 3;
              if ((pfVar21 == pfVar8) && ((int)pfVar8 - (int)pfVar21 >> 3 == 0)) {
                iVar17 = (int)pfVar21 - (int)pfVar24 >> 3;
                if (iVar17 == 0x1fffffff) goto LAB_00673a69;
                uVar16 = iVar17 + 1;
                uVar19 = (int)pfVar8 - (int)pfVar24 >> 3;
                local_1c = CONCAT44(uVar16,(float)local_1c);
                if (0x1fffffff - (uVar19 >> 1) < uVar19) {
                  uVar19 = 0;
                }
                else {
                  uVar19 = uVar19 + (uVar19 >> 1);
                }
                if (uVar19 < uVar16) {
                  uVar19 = uVar16;
                }
                FUN_00428ac0(uVar19);
              }
              puVar23 = *(undefined4 **)(iVar15 + 0x14);
              uVar19 = *puVar26;
              if (puVar23 != (undefined4 *)0x0) {
                *puVar23 = *(undefined4 *)(uVar19 + iVar14 * 8);
                puVar23[1] = *(undefined4 *)(uVar19 + 4 + iVar14 * 8);
              }
            }
            else {
              pfVar24 = *(float **)(iVar15 + 0x18);
              if ((pfVar21 == pfVar24) && ((int)pfVar24 - (int)pfVar21 >> 3 == 0)) {
                iVar14 = (int)((int)pfVar21 - *puVar26) >> 3;
                if (iVar14 == 0x1fffffff) goto LAB_00673a69;
                uVar16 = (int)((int)pfVar24 - *puVar26) >> 3;
                uVar19 = iVar14 + 1;
                if (0x1fffffff - (uVar16 >> 1) < uVar16) {
                  uVar16 = 0;
                }
                else {
                  uVar16 = uVar16 + (uVar16 >> 1);
                }
                if (uVar16 < uVar19) {
                  uVar16 = uVar19;
                }
                FUN_00428ac0(uVar16);
              }
              pfVar21 = *(float **)(iVar15 + 0x14);
              if (pfVar21 != (float *)0x0) {
                *pfVar21 = local_44[0];
                pfVar21[1] = local_44[1];
              }
            }
            *(int *)(iVar15 + 0x14) = *(int *)(iVar15 + 0x14) + 8;
            piVar18 = (int *)(*(int *)(local_98 + 0x100) + local_90);
            puVar20 = local_a0;
            uVar19 = local_8c;
          } while ((int)local_8c < piVar18[1] - *piVar18 >> 2);
          local_9c = local_b8;
          local_94 = local_bc;
        }
        piVar18 = (int *)(*(int *)(local_98 + 0x100) + local_90);
        iVar14 = 0;
        if (0 < (int)(piVar18[1] - *piVar18 & 0xfffffffcU)) {
          local_1c = CONCAT44(local_d0,(float)local_1c);
          iVar15 = local_d0;
          iVar17 = local_d0;
          do {
            iVar14 = iVar14 + 1;
            local_e4 = iVar17 + (iVar14 % (piVar18[1] - *piVar18 >> 2)) * 2;
            local_e0 = &local_88;
            local_e8 = iVar15;
            FUN_00674ee0(&local_e8);
            local_94 = local_bc;
            local_9c = local_b8;
            if (local_bc != local_b8) {
              iVar15 = ((int)(local_b8 + -3) - (int)local_bc) / 0xc;
              iVar17 = local_d0;
              if (0 < iVar15) {
                local_dc = local_b8[-3];
                local_d8 = local_b8[-2];
                local_d4 = local_b8[-1];
                FUN_00672600(local_bc,iVar15,0,&local_dc,local_b0);
                iVar17 = local_d0;
                local_9c = local_b8;
                local_94 = local_bc;
              }
            }
            piVar18 = (int *)(local_90 + *(int *)(local_98 + 0x100));
            iVar15 = (int)local_1c._4_4_ + 2;
            local_1c = CONCAT44(iVar15,(float)local_1c);
            puVar20 = local_a0;
            local_bc = local_94;
            local_b8 = local_9c;
          } while (iVar14 < piVar18[1] - *piVar18 >> 2);
        }
      }
      local_a8 = local_a8 + 1;
    } while (local_a8 < (*(int *)(local_98 + 0x104) - *(int *)(local_98 + 0x100)) / 0xc);
    puVar23 = local_9c;
    puVar25 = local_94;
    if (local_94 != local_9c) {
      do {
        iVar14 = local_98;
        local_a0 = (uint *)*puVar25;
        uVar19 = *puVar20;
        local_90 = puVar25[1];
        uVar1 = *(undefined8 *)(uVar19 + 8 + (int)local_a0 * 8);
        uVar2 = *(undefined8 *)(uVar19 + local_90 * 8);
        local_3c._0_4_ = (float)uVar1;
        local_3c._4_4_ = (float)((ulonglong)uVar1 >> 0x20);
        fVar29 = (float)local_3c - *(float *)(uVar19 + (int)local_a0 * 8);
        fVar28 = local_3c._4_4_ - *(float *)(uVar19 + 4 + (int)local_a0 * 8);
        local_1c._4_4_ = (float)((ulonglong)uVar2 >> 0x20);
        local_1c._0_4_ = (float)uVar2;
        fVar30 = (float)local_1c - *(float *)(uVar19 + (int)local_a0 * 8);
        fVar27 = local_1c._4_4_ - *(float *)(uVar19 + 4 + (int)local_a0 * 8);
        local_3c = uVar1;
        local_1c = uVar2;
        if ((fVar30 * fVar28 - fVar27 * fVar29) * local_ac < 0.0) {
          puVar22 = (uint *)(local_98 + 0x34);
          ppuVar9 = *(uint ***)(local_98 + 0x38);
          local_cc = local_a0;
          if (&local_cc < ppuVar9) {
            ppuVar10 = (uint **)*puVar22;
            if (&local_cc < ppuVar10) goto LAB_00673c2e;
            ppuVar11 = *(uint ***)(local_98 + 0x3c);
            if ((ppuVar9 == ppuVar11) && ((int)ppuVar11 - (int)ppuVar9 >> 2 == 0)) {
              iVar15 = (int)((int)ppuVar9 - *puVar22) >> 2;
              if (iVar15 == 0x3fffffff) goto LAB_00673a69;
              local_8c = iVar15 + 1;
              uVar19 = (int)((int)ppuVar11 - *puVar22) >> 2;
              if (0x3fffffff - (uVar19 >> 1) < uVar19) {
                uVar19 = 0;
              }
              else {
                uVar19 = uVar19 + (uVar19 >> 1);
              }
              if (uVar19 < local_8c) {
                uVar19 = local_8c;
              }
              FUN_0063da20(uVar19);
            }
            if (*(undefined4 **)(iVar14 + 0x38) != (undefined4 *)0x0) {
              **(undefined4 **)(iVar14 + 0x38) =
                   *(undefined4 *)(*puVar22 + ((int)&local_cc - (int)ppuVar10 >> 2) * 4);
            }
          }
          else {
LAB_00673c2e:
            ppuVar10 = *(uint ***)(local_98 + 0x3c);
            if ((ppuVar9 == ppuVar10) && ((int)ppuVar10 - (int)ppuVar9 >> 2 == 0)) {
              iVar15 = (int)((int)ppuVar9 - *puVar22) >> 2;
              if (iVar15 == 0x3fffffff) {
LAB_00673a69:
                local_1c = uVar2;
                    /* WARNING: Subroutine does not return */
                std::_Xlength_error("vector<T> too long");
              }
              local_8c = iVar15 + 1;
              uVar19 = (int)((int)ppuVar10 - *puVar22) >> 2;
              if (0x3fffffff - (uVar19 >> 1) < uVar19) {
                uVar19 = 0;
              }
              else {
                uVar19 = uVar19 + (uVar19 >> 1);
              }
              if (uVar19 < local_8c) {
                uVar19 = local_8c;
              }
              FUN_0063da20(uVar19);
            }
            if (*(undefined4 **)(iVar14 + 0x38) != (undefined4 *)0x0) {
              **(undefined4 **)(iVar14 + 0x38) = local_a0;
            }
          }
          *(int *)(iVar14 + 0x38) = *(int *)(iVar14 + 0x38) + 4;
          piVar18 = *(int **)(iVar14 + 0x38);
          local_a4 = (int)local_a0 + 1;
          uVar2 = local_1c;
          if (&local_a4 < piVar18) {
            piVar12 = (int *)*puVar22;
            if (&local_a4 < piVar12) goto LAB_00673cd4;
            piVar13 = *(int **)(iVar14 + 0x3c);
            if ((piVar18 == piVar13) && ((int)piVar13 - (int)piVar18 >> 2 == 0)) {
              iVar15 = (int)((int)piVar18 - *puVar22) >> 2;
              if (iVar15 == 0x3fffffff) goto LAB_00673a69;
              local_8c = iVar15 + 1;
              uVar19 = (int)((int)piVar13 - *puVar22) >> 2;
              if (0x3fffffff - (uVar19 >> 1) < uVar19) {
                uVar19 = 0;
              }
              else {
                uVar19 = uVar19 + (uVar19 >> 1);
              }
              if (uVar19 < local_8c) {
                uVar19 = local_8c;
              }
              FUN_0063da20(uVar19);
            }
            if (*(undefined4 **)(iVar14 + 0x38) != (undefined4 *)0x0) {
              **(undefined4 **)(iVar14 + 0x38) =
                   *(undefined4 *)(*puVar22 + ((int)&local_a4 - (int)piVar12 >> 2) * 4);
            }
          }
          else {
LAB_00673cd4:
            piVar12 = *(int **)(iVar14 + 0x3c);
            if ((piVar18 == piVar12) && ((int)piVar12 - (int)piVar18 >> 2 == 0)) {
              iVar15 = (int)((int)piVar18 - *puVar22) >> 2;
              if (iVar15 == 0x3fffffff) goto LAB_00673a69;
              local_8c = iVar15 + 1;
              uVar19 = (int)((int)piVar12 - *puVar22) >> 2;
              if (0x3fffffff - (uVar19 >> 1) < uVar19) {
                uVar19 = 0;
              }
              else {
                uVar19 = uVar19 + (uVar19 >> 1);
              }
              if (uVar19 < local_8c) {
                uVar19 = local_8c;
              }
              FUN_0063da20(uVar19);
            }
            if (*(int **)(iVar14 + 0x38) != (int *)0x0) {
              **(int **)(iVar14 + 0x38) = local_a4;
            }
          }
          *(int *)(iVar14 + 0x38) = *(int *)(iVar14 + 0x38) + 4;
          piVar18 = *(int **)(iVar14 + 0x38);
          local_c8 = local_90;
          uVar2 = local_1c;
          if (&local_c8 < piVar18) {
            piVar12 = (int *)*puVar22;
            if (&local_c8 < piVar12) goto LAB_00673df0;
            piVar13 = *(int **)(iVar14 + 0x3c);
            if ((piVar18 == piVar13) && ((int)piVar13 - (int)piVar18 >> 2 == 0)) {
              iVar15 = (int)((int)piVar18 - *puVar22) >> 2;
              if (iVar15 == 0x3fffffff) goto LAB_00673a69;
              local_8c = iVar15 + 1;
              uVar19 = (int)((int)piVar13 - *puVar22) >> 2;
              if (0x3fffffff - (uVar19 >> 1) < uVar19) {
                uVar19 = 0;
              }
              else {
                uVar19 = uVar19 + (uVar19 >> 1);
              }
              if (uVar19 < local_8c) {
                uVar19 = local_8c;
              }
              FUN_0063da20(uVar19);
            }
            if (*(undefined4 **)(iVar14 + 0x38) != (undefined4 *)0x0) {
              **(undefined4 **)(iVar14 + 0x38) =
                   *(undefined4 *)(*puVar22 + ((int)&local_c8 - (int)piVar12 >> 2) * 4);
            }
          }
          else {
LAB_00673df0:
            piVar12 = *(int **)(iVar14 + 0x3c);
            if ((piVar18 == piVar12) && ((int)piVar12 - (int)piVar18 >> 2 == 0)) {
              iVar15 = (int)((int)piVar18 - *puVar22) >> 2;
              if (iVar15 == 0x3fffffff) goto LAB_00673a69;
              local_8c = iVar15 + 1;
              uVar19 = (int)((int)piVar12 - *puVar22) >> 2;
              if (0x3fffffff - (uVar19 >> 1) < uVar19) {
                uVar19 = 0;
              }
              else {
                uVar19 = uVar19 + (uVar19 >> 1);
              }
              if (uVar19 < local_8c) {
                uVar19 = local_8c;
              }
              FUN_0063da20(uVar19);
            }
            if (*(int **)(iVar14 + 0x38) != (int *)0x0) {
              **(int **)(iVar14 + 0x38) = local_90;
            }
          }
          *(int *)(iVar14 + 0x38) = *(int *)(iVar14 + 0x38) + 4;
          piVar18 = *(int **)(iVar14 + 0x38);
          local_c4 = local_90;
          uVar2 = local_1c;
          if (&local_c4 < piVar18) {
            piVar12 = (int *)*puVar22;
            if (&local_c4 < piVar12) goto LAB_00673f0c;
            piVar13 = *(int **)(iVar14 + 0x3c);
            if ((piVar18 == piVar13) && ((int)piVar13 - (int)piVar18 >> 2 == 0)) {
              iVar15 = (int)((int)piVar18 - *puVar22) >> 2;
              if (iVar15 == 0x3fffffff) goto LAB_00673a69;
              local_8c = iVar15 + 1;
              uVar19 = (int)((int)piVar13 - *puVar22) >> 2;
              if (0x3fffffff - (uVar19 >> 1) < uVar19) {
                uVar19 = 0;
              }
              else {
                uVar19 = uVar19 + (uVar19 >> 1);
              }
              if (uVar19 < local_8c) {
                uVar19 = local_8c;
              }
              FUN_0063da20(uVar19);
            }
            if (*(undefined4 **)(iVar14 + 0x38) != (undefined4 *)0x0) {
              **(undefined4 **)(iVar14 + 0x38) =
                   *(undefined4 *)(*puVar22 + ((int)&local_c4 - (int)piVar12 >> 2) * 4);
            }
          }
          else {
LAB_00673f0c:
            piVar12 = *(int **)(iVar14 + 0x3c);
            if ((piVar18 == piVar12) && ((int)piVar12 - (int)piVar18 >> 2 == 0)) {
              iVar15 = (int)((int)piVar18 - *puVar22) >> 2;
              if (iVar15 == 0x3fffffff) goto LAB_00673a69;
              local_8c = iVar15 + 1;
              uVar19 = (int)((int)piVar12 - *puVar22) >> 2;
              if (0x3fffffff - (uVar19 >> 1) < uVar19) {
                uVar19 = 0;
              }
              else {
                uVar19 = uVar19 + (uVar19 >> 1);
              }
              if (uVar19 < local_8c) {
                uVar19 = local_8c;
              }
              FUN_0063da20(uVar19);
            }
            if (*(int **)(iVar14 + 0x38) != (int *)0x0) {
              **(int **)(iVar14 + 0x38) = local_90;
            }
          }
          iVar15 = local_a4;
          *(int *)(iVar14 + 0x38) = *(int *)(iVar14 + 0x38) + 4;
          piVar18 = *(int **)(iVar14 + 0x38);
          local_c0 = local_a4;
          if (&local_c0 < piVar18) {
            piVar12 = (int *)*puVar22;
            if (&local_c0 < piVar12) goto LAB_00674021;
            piVar13 = *(int **)(iVar14 + 0x3c);
            if ((piVar18 == piVar13) && ((int)piVar13 - (int)piVar18 >> 2 == 0)) {
              iVar15 = (int)((int)piVar18 - *puVar22) >> 2;
              uVar2 = local_1c;
              if (iVar15 == 0x3fffffff) goto LAB_00673a69;
              local_8c = iVar15 + 1;
              uVar19 = (int)((int)piVar13 - *puVar22) >> 2;
              if (0x3fffffff - (uVar19 >> 1) < uVar19) {
                uVar19 = 0;
              }
              else {
                uVar19 = uVar19 + (uVar19 >> 1);
              }
              if (uVar19 < local_8c) {
                uVar19 = local_8c;
              }
              FUN_0063da20(uVar19);
            }
            if (*(undefined4 **)(iVar14 + 0x38) != (undefined4 *)0x0) {
              **(undefined4 **)(iVar14 + 0x38) =
                   *(undefined4 *)(*puVar22 + ((int)&local_c0 - (int)piVar12 >> 2) * 4);
            }
          }
          else {
LAB_00674021:
            if (piVar18 == *(int **)(iVar14 + 0x3c)) {
              FUN_0063dc90(1);
            }
            if (*(int **)(iVar14 + 0x38) != (int *)0x0) {
              **(int **)(iVar14 + 0x38) = iVar15;
            }
          }
          *(int *)(iVar14 + 0x38) = *(int *)(iVar14 + 0x38) + 4;
          local_8c = local_90 + 1;
          FUN_0066add0(&local_8c);
          puVar23 = local_b8;
          puVar25 = local_bc;
        }
        local_a8 = CONCAT31(local_a8._1_3_,(undefined1)local_b0);
        if (1 < ((int)puVar23 - (int)puVar25) / 0xc) {
          local_dc = puVar23[-3];
          local_d8 = puVar23[-2];
          local_d4 = puVar23[-1];
          puVar23[-3] = *puVar25;
          puVar23[-2] = puVar25[1];
          puVar23[-1] = puVar25[2];
          FUN_006721d0(puVar25,0,((int)puVar23 + (-0xc - (int)puVar25)) / 0xc,&local_dc,local_a8);
          puVar23 = local_b8;
          puVar25 = local_bc;
        }
      } while ((puVar25 != puVar23) &&
              (puVar23 = puVar23 + -3, local_b8 = puVar23, puVar25 != puVar23));
    }
  }
  FUN_00674160();
  local_8 = 0xffffffff;
  if (local_bc == (undefined4 *)0x0) {
    ExceptionList = local_10;
    __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
    return;
  }
  std::_Container_base0::_Orphan_all((_Container_base0 *)&local_bc);
                    /* WARNING: Subroutine does not return */
  operator_delete(local_bc);
}


/* std_vector_push_back_0xc @ 00674ee0  kind=lib  attributed-by=ledger  size=143 */

void FUN_00674ee0(undefined4 *param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  uint *in_ECX;
  
  puVar1 = (undefined4 *)in_ECX[1];
  if ((param_1 < puVar1) && (puVar2 = (undefined4 *)*in_ECX, puVar2 <= param_1)) {
    if (puVar1 == (undefined4 *)in_ECX[2]) {
      FUN_00672f70(1);
    }
    puVar1 = (undefined4 *)(*in_ECX + (((int)param_1 - (int)puVar2) / 0xc) * 0xc);
    puVar2 = (undefined4 *)in_ECX[1];
    if (puVar2 != (undefined4 *)0x0) {
      *puVar2 = *puVar1;
      puVar2[1] = puVar1[1];
      puVar2[2] = puVar1[2];
      in_ECX[1] = in_ECX[1] + 0xc;
      return;
    }
  }
  else {
    if (puVar1 == (undefined4 *)in_ECX[2]) {
      FUN_00672f70(1);
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


/* lib_fn_679a40 @ 00679a40  kind=lib  attributed-by=ledger  size=1066 */

void FUN_00679a40(int *param_1,void *param_2,int param_3,undefined4 param_4,uint param_5,int param_6
                 ,int param_7,char param_8,uint param_9)

{
  undefined8 uVar1;
  undefined8 uVar2;
  int iVar3;
  float *pfVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  float *pfVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  double dVar14;
  uint local_64;
  int local_60;
  int *local_5c;
  uint local_58;
  uint local_54;
  int local_50;
  undefined8 local_4c;
  float local_44;
  float fStack_40;
  float local_3c;
  float fStack_38;
  float local_34;
  float fStack_30;
  undefined8 local_2c;
  undefined8 local_24;
  undefined8 local_1c;
  undefined8 local_14;
  uint local_c;
  
  local_c = DAT_0076aa78 ^ (uint)&local_64;
  local_5c = param_1;
  local_54 = param_5;
  local_58 = param_9;
  if (0 < param_7) {
    local_50 = (int)param_5 / 2 - param_9;
    local_60 = param_7;
    uVar6 = param_9;
    do {
      iVar3 = *param_1;
      local_64 = param_5 + uVar6;
      uVar7 = param_1[1] - iVar3 >> 4;
      pfVar4 = (float *)((local_64 % uVar7) * 0x10 + iVar3);
      uVar1 = *(undefined8 *)(iVar3 + (uVar6 % uVar7) * 0x10);
      uVar2 = *(undefined8 *)(iVar3 + 8 + (uVar6 % uVar7) * 0x10);
      local_3c = (float)uVar1;
      local_3c = *pfVar4 + local_3c;
      fStack_38 = (float)((ulonglong)uVar1 >> 0x20);
      fStack_38 = pfVar4[1] + fStack_38;
      local_34 = (float)uVar2;
      local_34 = pfVar4[2] + local_34;
      fStack_30 = (float)((ulonglong)uVar2 >> 0x20);
      fStack_30 = pfVar4[3] + fStack_30;
      iVar5 = (uVar6 + local_50) % uVar7 + param_9;
      local_60 = local_60 + -1;
      local_4c = CONCAT44(fStack_38 * 0.5,local_3c * 0.5);
      fVar9 = local_34 * 0.5;
      fVar10 = fStack_30 * 0.5;
      _local_44 = CONCAT44(fVar10,fVar9);
      *(undefined8 *)(iVar3 + iVar5 * 0x10) = local_4c;
      pfVar4 = (float *)(iVar3 + 8 + iVar5 * 0x10);
      *pfVar4 = fVar9;
      pfVar4[1] = fVar10;
      uVar6 = local_64;
    } while (local_60 != 0);
  }
  if (param_8 != '\0') {
    param_7 = param_7 + 1;
  }
  local_60 = 1;
  fVar9 = DAT_0076def4;
  if (1 < param_7) {
    do {
      local_64 = param_5;
      if ((local_60 % param_6 != 0) ||
         ((*(byte *)((int)param_2 +
                    (int)(((longlong)local_60 / (longlong)param_6 & 0xffffffffU) %
                         (ulonglong)(uint)(param_3 - (int)param_2 >> 2)) * 4) & 2) == 0)) {
        if ((DAT_0076def8 & 1) == 0) {
          dVar14 = 2.0;
          DAT_0076def8 = DAT_0076def8 | 1;
          libm_sse2_sqrt_precise();
          fVar9 = ((float)dVar14 - 1.0) / ((float)dVar14 * 0.5);
          DAT_0076def4 = fVar9;
        }
        uVar7 = local_5c[1] - *local_5c >> 4;
        pfVar8 = (float *)(((param_5 + local_58) % uVar7) * 0x10 + *local_5c);
        pfVar4 = (float *)(((local_64 + (int)local_54 / 2 + local_58) % uVar7) * 0x10 + *local_5c);
        uVar6 = ((local_64 - (int)local_54 / 2) + local_58) % uVar7;
        iVar3 = *local_5c;
        uVar1 = *(undefined8 *)(iVar3 + uVar6 * 0x10);
        uVar2 = *(undefined8 *)(iVar3 + 8 + uVar6 * 0x10);
        local_4c._0_4_ = (float)uVar1;
        local_4c._0_4_ = *pfVar4 + (float)local_4c;
        local_4c._4_4_ = (float)((ulonglong)uVar1 >> 0x20);
        local_4c._4_4_ = pfVar4[1] + local_4c._4_4_;
        local_44 = (float)uVar2;
        local_44 = pfVar4[2] + local_44;
        fStack_40 = (float)((ulonglong)uVar2 >> 0x20);
        fStack_40 = pfVar4[3] + fStack_40;
        fVar10 = (float)local_4c * 0.5;
        fVar11 = local_4c._4_4_ * 0.5;
        _local_3c = CONCAT44(fVar11,fVar10);
        fVar12 = local_44 * 0.5;
        fVar13 = fStack_40 * 0.5;
        _local_34 = CONCAT44(fVar13,fVar12);
        fVar10 = fVar10 - *pfVar8;
        fVar11 = fVar11 - pfVar8[1];
        local_2c = CONCAT44(fVar11,fVar10);
        fVar12 = fVar12 - pfVar8[2];
        fVar13 = fVar13 - pfVar8[3];
        local_24 = CONCAT44(fVar13,fVar12);
        local_1c = local_2c;
        local_14 = local_24;
        pfVar4 = (float *)((local_64 % uVar7 + local_58) * 0x10 + iVar3);
        pfVar4[1] = fVar11 * fVar9 + pfVar4[1];
        *pfVar4 = fVar10 * fVar9 + *pfVar4;
        pfVar4[2] = fVar12 * fVar9 + pfVar4[2];
        pfVar4[3] = fVar13 * fVar9 + pfVar4[3];
      }
      param_5 = local_64 + local_54;
      local_60 = local_60 + 1;
      local_64 = param_5;
    } while (local_60 < param_7);
  }
  if (param_2 == (void *)0x0) {
    __security_check_cookie(local_c ^ (uint)&local_64);
    return;
  }
                    /* WARNING: Subroutine does not return */
  operator_delete(param_2);
}


