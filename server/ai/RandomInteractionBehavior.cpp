// RandomInteractionBehavior (ai) -- server. 3 functions. Bodies = Ghidra pseudo-C.
// Attribution: see ../attribution.tsv. Toolchain of the original: MSVC 11.0 (VS2012).
#include "RandomInteractionBehavior.h"

/* cube::RandomInteractionBehavior::RandomInteractionBehavior @ 0041ba60  kind=game  attributed-by=rtti  size=16 */

RandomInteractionBehavior * __thiscall
cube::RandomInteractionBehavior::RandomInteractionBehavior(RandomInteractionBehavior *this)

{
  this->vftablePtr = &vftable;
  (this->RandomInteractionBehavior_data).offset_0x0 = 0;
  return this;
}


/* cube::RandomInteractionBehavior::vfunction1 @ 0041bc20  kind=game  attributed-by=rtti  size=3498 */

void __thiscall
cube::RandomInteractionBehavior::vfunction1
          (RandomInteractionBehavior *this,void *param_1,void *param_2,int param_3)

{
  RandomInteractionBehavior_data *pRVar1;
  uint *puVar2;
  int iVar3;
  undefined4 *puVar4;
  char cVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  uint *puVar9;
  int *piVar10;
  uint *puVar11;
  int *piVar12;
  uint uVar13;
  uint *puVar14;
  uint uVar15;
  void *pvVar16;
  void *pvVar17;
  int *piVar18;
  void *pvVar19;
  uint uVar20;
  int *piVar21;
  uint *puVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  undefined8 uVar25;
  void *local_23c;
  void *local_238;
  undefined4 local_234;
  RandomInteractionBehavior *local_230;
  uint *local_22c;
  uint *local_228;
  uint local_224;
  void *local_220;
  uint *local_21c;
  uint *local_218;
  void *local_214;
  char local_20d;
  undefined2 local_20c [140];
  undefined4 local_f4;
  undefined4 local_f0;
  undefined4 local_ec;
  undefined1 local_e4;
  uint local_e0 [6];
  uint local_c8 [6];
  uint local_b0 [6];
  int local_98 [3];
  uint local_8c [6];
  uint local_74;
  uint *local_70;
  int local_6c;
  uint local_68;
  uint local_64;
  int local_60;
  float local_5c;
  float local_58;
  undefined4 local_50;
  undefined4 local_4c;
  float local_48;
  undefined4 local_44;
  undefined4 local_40;
  float local_3c;
  int local_38;
  int iStack_34;
  int local_30;
  int iStack_2c;
  int local_28;
  int iStack_24;
  undefined8 local_20;
  int local_18;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_0054be4b;
  local_10 = ExceptionList;
  local_14 = DAT_00583cc8 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_214 = param_2;
  pRVar1 = &this->RandomInteractionBehavior_data;
  pRVar1->offset_0x0 = pRVar1->offset_0x0 - param_3;
  iVar6 = (this->RandomInteractionBehavior_data).offset_0x0;
  if ((int)pRVar1->offset_0x0 < 0) {
    iVar6 = 0;
  }
  local_220 = param_1;
  (this->RandomInteractionBehavior_data).offset_0x0 = iVar6;
  local_230 = this;
  if (iVar6 == 0) {
    if ((*(char *)((int)param_1 + 0x68) == 'S') || (*(char *)((int)param_1 + 0x68) == 'T')) {
      FUN_00405330((int)param_1);
      *(undefined4 *)((int)param_1 + 0x1478) = 0xffffffff;
      *(undefined4 *)((int)param_1 + 0x147c) = 0xffffffff;
      *(undefined4 *)((int)param_1 + 0x1480) = 0;
      *(undefined1 *)((int)param_1 + 0x68) = 0;
      *(undefined4 *)((int)param_1 + 0x40) = 0;
      *(undefined4 *)((int)param_1 + 0x44) = 0;
      *(undefined4 *)((int)param_1 + 0x48) = 0x3f800000;
      (this->RandomInteractionBehavior_data).offset_0x0 = 20000;
      goto LAB_0041c9b3;
    }
    *(undefined1 *)((int)param_1 + 0x68) = 0;
  }
  if ((*(char *)((int)param_1 + 0x68) == 'S') || (*(char *)((int)param_1 + 0x68) == 'T'))
  goto LAB_0041c9b3;
  uVar23 = __alldiv(*(uint *)((int)param_1 + 0x20),*(uint *)((int)param_1 + 0x24),0x10000,0);
  uVar24 = __alldiv(*(uint *)((int)param_1 + 0x18),*(uint *)((int)param_1 + 0x1c),0x10000,0);
  puVar2 = (uint *)((int)param_1 + 0x10);
  uVar25 = __alldiv(*puVar2,*(uint *)((int)param_1 + 0x14),0x10000,0);
  pvVar19 = local_214;
  local_224 = FUN_004d4c20(local_214,(int)uVar25,(int)uVar24,(int)uVar23);
  local_20d = '\0';
  if (local_224 == 0) {
    uVar23 = __alldiv(*(uint *)((int)param_1 + 0x10),*(uint *)((int)param_1 + 0x14),0x10000,0);
    iVar6 = (int)(((int)uVar23 >> 0x1f & 7U) + (int)uVar23) >> 3;
    uVar23 = __alldiv(*(uint *)((int)param_1 + 0x18),*(uint *)((int)param_1 + 0x1c),0x10000,0);
    local_228 = (uint *)(iVar6 + -1);
    local_22c = (uint *)(iVar6 + 1);
    local_218 = (uint *)((int)(((int)uVar23 >> 0x1f & 7U) + (int)uVar23) >> 3);
    pvVar17 = param_1;
    local_21c = local_228;
    if ((int)local_228 < (int)local_22c) {
      uVar15 = (int)local_218 - 1;
      iVar6 = (int)local_218 + 1;
      uVar20 = uVar15;
      puVar11 = local_22c;
      puVar9 = local_228;
      pvVar17 = local_220;
      pvVar19 = local_214;
      do {
        for (; local_224 = uVar20, local_220 = pvVar17, local_214 = pvVar19, (int)uVar20 < iVar6;
            uVar20 = uVar20 + 1) {
          if ((((-1 < (int)puVar9) && (-1 < (int)uVar20)) && ((int)puVar9 < 0x200000)) &&
             (((int)uVar20 < 0x200000 &&
              (iVar8 = FUN_00406290(pvVar19,(int)((int)puVar9 + ((int)puVar9 >> 0x1f & 0x1fU)) >> 5,
                                    (int)(uVar20 + ((int)uVar20 >> 0x1f & 0x1fU)) >> 5), iVar8 != 0)
              ))) {
            uVar7 = uVar20 & 0x8000001f;
            if ((int)uVar7 < 0) {
              uVar7 = (uVar7 - 1 | 0xffffffe0) + 1;
            }
            uVar13 = (uint)puVar9 & 0x8000001f;
            if ((int)uVar13 < 0) {
              uVar13 = (uVar13 - 1 | 0xffffffe0) + 1;
            }
            piVar12 = (int *)(*(int *)(iVar8 + 0xac) + (uVar7 * 0x20 + uVar13) * 8);
            if (piVar12 != (int *)0x0) {
              piVar12 = (int *)*piVar12;
              piVar10 = (int *)*piVar12;
              if (piVar10 != piVar12) {
                do {
                  iVar8 = 0;
                  piVar21 = piVar10 + 3;
                  piVar18 = (int *)((int)local_220 + 0x1478);
                  do {
                    if (*piVar21 != *piVar18) goto LAB_0041c1bb;
                    iVar8 = iVar8 + 1;
                    piVar21 = piVar21 + 1;
                    piVar18 = piVar18 + 1;
                  } while (iVar8 < 3);
                  if (*(int *)(piVar10[2] + 0x40) == 0 && *(int *)(piVar10[2] + 0x44) == 0) {
                    local_20d = '\x01';
                  }
LAB_0041c1bb:
                  piVar10 = (int *)*piVar10;
                  uVar20 = local_224;
                  puVar9 = local_21c;
                } while (piVar10 != piVar12);
              }
            }
          }
          puVar11 = local_22c;
          pvVar17 = local_220;
          pvVar19 = local_214;
        }
        local_21c = (uint *)((int)puVar9 + 1);
        uVar20 = uVar15;
        puVar9 = local_21c;
      } while ((int)local_21c < (int)puVar11);
      if (local_20d != '\0') goto LAB_0041c638;
    }
    if ((local_230->RandomInteractionBehavior_data).offset_0x0 == 0) {
      local_23c = (void *)0x0;
      local_238 = (void *)0x0;
      local_234 = 0;
      local_8 = 0;
      pvVar19 = local_214;
      if ((int)local_228 < (int)local_22c) {
        uVar15 = (int)local_218 + 1;
        puVar11 = (uint *)((int)local_218 + -1);
        puVar9 = local_22c;
        local_224 = uVar15;
        local_218 = puVar11;
        do {
          puVar14 = local_228;
          puVar22 = puVar11;
          local_21c = puVar11;
          if ((int)puVar11 < (int)uVar15) {
            do {
              if (((-1 < (int)puVar14) && (-1 < (int)puVar22)) &&
                 (((int)puVar14 < 0x200000 &&
                  (((int)puVar22 < 0x200000 &&
                   (local_21c = puVar22,
                   iVar6 = FUN_00406290(local_214,
                                        (int)((int)puVar14 + ((int)puVar14 >> 0x1f & 0x1fU)) >> 5,
                                        (int)((int)puVar22 + ((int)puVar22 >> 0x1f & 0x1fU)) >> 5),
                   puVar14 = local_228, iVar6 != 0)))))) {
                uVar20 = (uint)puVar22 & 0x8000001f;
                if ((int)uVar20 < 0) {
                  uVar20 = (uVar20 - 1 | 0xffffffe0) + 1;
                }
                uVar7 = (uint)local_228 & 0x8000001f;
                if ((int)uVar7 < 0) {
                  uVar7 = (uVar7 - 1 | 0xffffffe0) + 1;
                }
                piVar12 = (int *)(*(int *)(iVar6 + 0xac) + (uVar20 * 0x20 + uVar7) * 8);
                if ((piVar12 != (int *)0x0) &&
                   (piVar10 = *(int **)*piVar12, uVar15 = local_224, piVar10 != (int *)*piVar12)) {
                  do {
                    iVar6 = *(int *)piVar10[2];
                    if (((iVar6 == 0x12) || ((iVar6 == 0x10 || (iVar6 == 0x44)))) &&
                       (cVar5 = FUN_004d4d80(puVar2,(uint *)(piVar10[2] + 8),'\x01',200.0),
                       cVar5 != '\0')) {
                      FUN_0042feb0(&local_23c,piVar10 + 3);
                    }
                    piVar10 = (int *)*piVar10;
                    puVar14 = local_228;
                    uVar15 = local_224;
                    puVar22 = local_21c;
                  } while (piVar10 != (int *)*piVar12);
                }
              }
              puVar22 = (uint *)((int)puVar22 + 1);
              puVar11 = local_218;
              puVar9 = local_22c;
              local_21c = puVar22;
            } while ((int)puVar22 < (int)uVar15);
          }
          pvVar16 = local_23c;
          local_228 = (uint *)((int)puVar14 + 1);
        } while ((int)local_228 < (int)puVar9);
        pvVar17 = local_220;
        pvVar19 = local_214;
        if (local_23c != local_238) {
          iVar6 = (int)local_238 - (int)local_23c;
          uVar7 = rand();
          pvVar19 = local_214;
          uVar7 = uVar7 % (uint)(iVar6 / 0xc);
          uVar15 = *(uint *)((int)pvVar16 + uVar7 * 0xc + 4);
          uVar20 = *(uint *)((int)pvVar16 + uVar7 * 0xc);
          iVar6 = *(int *)((int)pvVar16 + uVar7 * 0xc + 8);
          local_68 = uVar20;
          local_64 = uVar15;
          local_60 = iVar6;
          iVar8 = FUN_00406290(local_214,uVar20,uVar15);
          pvVar17 = local_220;
          if ((((iVar8 != 0) && (-1 < iVar6)) &&
              (puVar11 = *(uint **)(iVar8 + 0xc), local_218 = puVar11,
              iVar6 < (*(int *)(iVar8 + 0x10) - (int)puVar11) / 0x188)) &&
             (puVar11[iVar6 * 0x62 + 0x10] == 0 && puVar11[iVar6 * 0x62 + 0x11] == 0)) {
            (local_230->RandomInteractionBehavior_data).offset_0x0 = 20000;
            local_48 = 0.5 - *(float *)((int)local_220 + 0x88) * 0.5;
            local_20d = '\x01';
            local_50 = 0;
            local_4c = 0;
            FUN_00402510((int)local_8c);
            puVar9 = FUN_00402cb0((void *)((int)pvVar17 + 0x10),local_c8,local_8c);
            FUN_00402a40((void *)((int)pvVar17 + 0x1428),puVar9);
            FUN_00402a40((void *)((int)pvVar17 + 0x1440),puVar11 + iVar6 * 0x62 + 2);
            while( true ) {
              iVar8 = FUN_00406050(pvVar19,*(uint *)((int)pvVar17 + 0x1440),
                                   *(uint *)((int)pvVar17 + 0x1444),*(uint *)((int)pvVar17 + 0x1448)
                                   ,*(uint *)((int)pvVar17 + 0x144c),
                                   *(uint *)((int)pvVar17 + 0x1450),*(uint *)((int)pvVar17 + 0x1454)
                                   ,0);
              if (((*(byte *)(iVar8 + 3) & 0x1f) == 0) || ((*(byte *)(iVar8 + 3) & 0x1f) == 2))
              break;
              puVar11 = (uint *)((int)pvVar17 + 0x1450);
              uVar7 = *puVar11;
              *puVar11 = *puVar11 + 0x10000;
              *(int *)((int)pvVar17 + 0x1454) =
                   *(int *)((int)pvVar17 + 0x1454) + (uint)(0xfffeffff < uVar7);
            }
            while( true ) {
              iVar8 = FUN_00406050(pvVar19,*(uint *)((int)pvVar17 + 0x1440),
                                   *(uint *)((int)pvVar17 + 0x1444),*(uint *)((int)pvVar17 + 0x1448)
                                   ,*(uint *)((int)pvVar17 + 0x144c),
                                   *(uint *)((int)pvVar17 + 0x1450) - 0x10000,
                                   *(int *)((int)pvVar17 + 0x1454) -
                                   (uint)(*(uint *)((int)pvVar17 + 0x1450) < 0x10000),0);
              if (((*(byte *)(iVar8 + 3) & 0x1f) != 0) && ((*(byte *)(iVar8 + 3) & 0x1f) != 2))
              break;
              puVar11 = (uint *)((int)pvVar17 + 0x1450);
              uVar7 = *puVar11;
              *puVar11 = *puVar11 - 0x10000;
              *(int *)((int)pvVar17 + 0x1454) =
                   *(int *)((int)pvVar17 + 0x1454) + -1 + (uint)(0xffff < uVar7);
            }
            *(uint *)((int)pvVar17 + 0x1478) = uVar20;
            *(uint *)((int)pvVar17 + 0x147c) = uVar15;
            *(int *)((int)pvVar17 + 0x1480) = iVar6;
            *(undefined4 *)((int)pvVar17 + 0x1458) = 0x40000000;
            FUN_004dd2e0(pvVar19,pvVar17);
          }
        }
      }
      local_8 = 0xffffffff;
      if (local_23c != (void *)0x0) {
        operator_delete(local_23c);
      }
      if (local_20d != '\0') goto LAB_0041c638;
    }
  }
  else {
    local_228 = (uint *)(local_224 + 0x48);
    puVar11 = (uint *)*local_228;
    pvVar16 = param_1;
    if (puVar11 != *(uint **)(local_224 + 0x4c)) {
      do {
        iVar6 = 0;
        puVar9 = (uint *)((int)param_1 + 0x1478);
        do {
          if (puVar11[iVar6] != *puVar9) goto LAB_0041be01;
          iVar6 = iVar6 + 1;
          puVar9 = puVar9 + 1;
        } while (iVar6 < 3);
        iVar6 = FUN_00406290(pvVar19,*puVar11,puVar11[1]);
        if (((iVar6 != 0) && (uVar15 = puVar11[2], pvVar19 = local_214, -1 < (int)uVar15)) &&
           ((local_21c = *(uint **)(iVar6 + 0xc),
            (int)uVar15 < (*(int *)(iVar6 + 0x10) - (int)local_21c) / 0x188 &&
            (local_21c[uVar15 * 0x62 + 0x10] == 0 && local_21c[uVar15 * 0x62 + 0x11] == 0)))) {
          local_20d = '\x01';
        }
LAB_0041be01:
        puVar11 = puVar11 + 3;
        pvVar16 = local_220;
      } while (puVar11 != *(uint **)(local_224 + 0x4c));
    }
    puVar11 = *(uint **)(local_224 + 0x54);
    local_22c = (uint *)(local_224 + 0x54);
    pvVar17 = pvVar16;
    if (puVar11 != *(uint **)(local_224 + 0x58)) {
      local_21c = (uint *)((int)pvVar16 + 0x1478);
      do {
        iVar6 = 0;
        puVar9 = (uint *)((int)pvVar16 + 0x1478);
        do {
          if (puVar11[iVar6] != *puVar9) goto LAB_0041beab;
          iVar6 = iVar6 + 1;
          puVar9 = puVar9 + 1;
        } while (iVar6 < 3);
        iVar6 = FUN_00406290(pvVar19,*puVar11,puVar11[1]);
        if ((((iVar6 != 0) && (uVar15 = puVar11[2], -1 < (int)uVar15)) &&
            (local_21c = *(uint **)(iVar6 + 0xc),
            (int)uVar15 < (*(int *)(iVar6 + 0x10) - (int)local_21c) / 0x188)) &&
           (local_21c[uVar15 * 0x62 + 0x10] == 0 && local_21c[uVar15 * 0x62 + 0x11] == 0)) {
          local_20d = '\x01';
        }
LAB_0041beab:
        puVar11 = puVar11 + 3;
        pvVar17 = local_220;
        pvVar19 = local_214;
      } while (puVar11 != *(uint **)(local_224 + 0x58));
    }
    pvVar19 = local_214;
    if (local_20d != '\0') {
LAB_0041c638:
      if (*(int *)((int)pvVar17 + 0x1410) != 0) {
        iVar6 = 0;
        do {
          if (0x32 < *(int *)((int)pvVar17 + 0x1464)) break;
          if (*(int *)((int)pvVar17 + 0x1464) != 0) {
            iVar8 = *(int *)(*(int *)((int)pvVar17 + 0x1460) + 4);
            piVar12 = (int *)FUN_00405450(local_98,(uint *)((int)pvVar17 + 0x1440));
            uVar23 = *(undefined8 *)(iVar8 + 8);
            local_18 = *(int *)(iVar8 + 0x10) - piVar12[2];
            local_20._4_4_ = (int)((ulonglong)uVar23 >> 0x20);
            local_20._4_4_ = local_20._4_4_ - piVar12[1];
            local_20._0_4_ = (int)uVar23;
            local_20._0_4_ = (int)local_20 - *piVar12;
            pvVar19 = local_214;
            if ((float)(local_18 * local_18 + local_20._4_4_ * local_20._4_4_ +
                       (int)local_20 * (int)local_20) <
                *(float *)((int)pvVar17 + 0x1458) * *(float *)((int)pvVar17 + 0x1458)) break;
          }
          FUN_004dde90(pvVar19,pvVar17);
          FUN_004dafe0(pvVar17);
          iVar6 = iVar6 + 1;
        } while (iVar6 < 10);
      }
      pvVar19 = local_220;
      uVar15 = *(uint *)((int)pvVar17 + 0x1478);
      uVar20 = *(uint *)((int)pvVar17 + 0x147c);
      if ((((-1 < (int)uVar15) && (-1 < (int)uVar20)) && ((int)uVar15 < 0x10000)) &&
         ((int)uVar20 < 0x10000)) {
        iVar6 = (int)(uVar15 + ((int)uVar15 >> 0x1f & 0x3fU)) >> 6;
        iVar8 = (int)(((int)uVar20 >> 0x1f & 0x3fU) + uVar20) >> 6;
        if (((-1 < iVar6) && (-1 < iVar8)) &&
           ((iVar6 < 0x400 &&
            ((iVar8 < 0x400 &&
             (iVar6 = *(int *)((int)local_214 + (iVar6 * 0x400 + iVar8) * 4 + 0xbc), iVar6 != 0)))))
           ) {
          uVar15 = uVar15 & 0x8000003f;
          if ((int)uVar15 < 0) {
            uVar15 = (uVar15 - 1 | 0xffffffc0) + 1;
          }
          uVar20 = uVar20 & 0x8000003f;
          if ((int)uVar20 < 0) {
            uVar20 = (uVar20 - 1 | 0xffffffc0) + 1;
          }
          iVar6 = *(int *)(iVar6 + 0x10018 + (uVar15 * 0x40 + uVar20) * 4);
          if (((iVar6 != 0) && (iVar8 = *(int *)((int)pvVar17 + 0x1480), -1 < iVar8)) &&
             (iVar3 = *(int *)(iVar6 + 0xc), iVar8 < (*(int *)(iVar6 + 0x10) - iVar3) / 0x188)) {
            iVar8 = iVar8 * 0x188;
            uVar15 = *(uint *)(iVar8 + 8 + iVar3);
            uVar20 = *(uint *)(iVar8 + 0x10 + iVar3);
            uVar7 = *(uint *)(iVar8 + 0x18 + iVar3);
            local_38 = uVar15 - *puVar2;
            iStack_34 = (*(int *)(iVar8 + 0xc + iVar3) - *(int *)((int)param_1 + 0x14)) -
                        (uint)(uVar15 < *puVar2);
            local_30 = uVar20 - *(uint *)((int)local_220 + 0x18);
            iStack_2c = (*(int *)(iVar8 + iVar3 + 0x14) - *(int *)((int)local_220 + 0x1c)) -
                        (uint)(uVar20 < *(uint *)((int)local_220 + 0x18));
            local_28 = uVar7 - *(uint *)((int)local_220 + 0x20);
            iStack_24 = (*(int *)(iVar8 + iVar3 + 0x1c) - *(int *)((int)local_220 + 0x24)) -
                        (uint)(uVar7 < *(uint *)((int)local_220 + 0x20));
            local_5c = (float)CONCAT44(iStack_34,local_38) * 1.5258789e-05;
            local_218 = (uint *)(float)CONCAT44(iStack_24,local_28);
            local_58 = (float)CONCAT44(iStack_2c,local_30) * 1.5258789e-05;
            if (local_58 * local_58 + local_5c * local_5c +
                (float)local_218 * 1.5258789e-05 * (float)local_218 * 1.5258789e-05 < 9.0) {
              FUN_0041b9e0(local_20c);
              local_f4 = *(undefined4 *)((int)pvVar19 + 0x1478);
              puVar4 = *(undefined4 **)((int)pvVar19 + 0x130c);
              local_f0 = *(undefined4 *)((int)pvVar19 + 0x147c);
              local_ec = *(undefined4 *)((int)pvVar19 + 0x1480);
              local_e4 = 3;
              iVar6 = FUN_0041b900(puVar4,(undefined4 *)puVar4[1],(undefined1 *)local_20c);
              if (*(int *)((int)pvVar19 + 0x1310) == 0xd4c77a) {
                    /* WARNING: Subroutine does not return */
                std::_Xlength_error("list<T> too long");
              }
              *(int *)((int)pvVar19 + 0x1310) = *(int *)((int)pvVar19 + 0x1310) + 1;
              puVar4[1] = iVar6;
              **(int **)(iVar6 + 4) = iVar6;
              FUN_00405330((int)pvVar19);
              *(undefined4 *)((int)pvVar19 + 0x1478) = 0xffffffff;
              *(undefined4 *)((int)pvVar19 + 0x147c) = 0xffffffff;
              *(undefined4 *)((int)pvVar19 + 0x1480) = 0;
              *(undefined4 *)((int)pvVar19 + 0x40) = 0;
              *(undefined4 *)((int)pvVar19 + 0x44) = 0;
              *(undefined4 *)((int)pvVar19 + 0x48) = 0;
              *(undefined4 *)((int)pvVar19 + 0x34) = 0;
              *(undefined4 *)((int)pvVar19 + 0x38) = 0;
              *(undefined4 *)((int)pvVar19 + 0x3c) = 0;
              (local_230->RandomInteractionBehavior_data).offset_0x0 = 20000;
            }
          }
        }
      }
      goto LAB_0041c9b3;
    }
    if ((local_230->RandomInteractionBehavior_data).offset_0x0 == 0) {
      if ((*(int *)((int)local_214 + 0x80015c) < 21600000) ||
         (puVar11 = local_228, 82799999 < *(int *)((int)local_214 + 0x80015c))) {
        puVar11 = local_22c;
      }
      uVar15 = puVar11[1];
      uVar20 = *puVar11;
      if (uVar20 != uVar15) {
        uVar7 = rand();
        uVar7 = uVar7 % (uint)((int)(uVar15 - uVar20) / 0xc);
        uVar15 = *puVar11;
        local_22c = *(uint **)(uVar15 + 4 + uVar7 * 0xc);
        local_224 = *(uint *)(uVar15 + uVar7 * 0xc);
        iVar6 = *(int *)(uVar15 + 8 + uVar7 * 0xc);
        local_74 = local_224;
        local_70 = local_22c;
        local_6c = iVar6;
        iVar8 = FUN_00406290(local_214,local_224,(uint)local_22c);
        if (((iVar8 != 0) && (-1 < iVar6)) &&
           ((puVar11 = *(uint **)(iVar8 + 0xc), local_21c = puVar11,
            iVar6 < (*(int *)(iVar8 + 0x10) - (int)puVar11) / 0x188 &&
            (puVar11[iVar6 * 0x62 + 0x10] == 0 && puVar11[iVar6 * 0x62 + 0x11] == 0)))) {
          (local_230->RandomInteractionBehavior_data).offset_0x0 = 20000;
          local_3c = 0.5 - *(float *)((int)pvVar17 + 0x88) * 0.5;
          local_44 = 0;
          local_40 = 0;
          FUN_00402510((int)local_b0);
          puVar9 = FUN_00402cb0((void *)((int)pvVar17 + 0x10),local_e0,local_b0);
          FUN_00402a40((void *)((int)pvVar17 + 0x1428),puVar9);
          FUN_00402a40((void *)((int)pvVar17 + 0x1440),puVar11 + iVar6 * 0x62 + 2);
          pvVar19 = local_214;
          *(uint *)((int)pvVar17 + 0x1478) = local_224;
          *(uint **)((int)pvVar17 + 0x147c) = local_22c;
          *(int *)((int)pvVar17 + 0x1480) = iVar6;
          *(undefined4 *)((int)pvVar17 + 0x1458) = 0x40000000;
          FUN_004dd2e0(local_214,pvVar17);
          goto LAB_0041c638;
        }
      }
    }
  }
  FUN_00405330((int)pvVar17);
  *(undefined4 *)((int)pvVar17 + 0x1478) = 0xffffffff;
  *(undefined4 *)((int)pvVar17 + 0x147c) = 0xffffffff;
  *(undefined4 *)((int)pvVar17 + 0x1480) = 0;
LAB_0041c9b3:
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}


/* cube::RandomInteractionBehavior::vfunction2 @ 0041cac0  kind=game  attributed-by=rtti  size=31 */

undefined4 * __thiscall cube::RandomInteractionBehavior::vfunction2(RandomInteractionBehavior *this)

{
  undefined4 *puVar1;
  
  puVar1 = operator_new(8);
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = &vftable;
    puVar1[1] = 0;
    return puVar1;
  }
  return (undefined4 *)0x0;
}


