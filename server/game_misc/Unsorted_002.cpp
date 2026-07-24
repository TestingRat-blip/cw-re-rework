// Unsorted_002 (game_misc) -- server. 150 functions. Bodies = Ghidra pseudo-C.
// Attribution: see ../attribution.tsv. Toolchain of the original: MSVC 11.0 (VS2012).
#include "Unsorted_002.h"

/* FUN_0046b2b0 @ 0046b2b0  kind=gamemisc  attributed-by=none  size=51 */

int __cdecl FUN_0046b2b0(int *param_1)

{
  int iVar1;
  
  if ((*(byte *)(param_1 + 7) & 0x10) == 0) {
    iVar1 = FUN_004ae680(param_1,1);
    if (iVar1 == 0) {
      return 0;
    }
  }
  iVar1 = param_1[6];
  if ((*(ushort *)(param_1 + 7) & 0x4000) != 0) {
    iVar1 = iVar1 + param_1[4];
  }
  return iVar1;
}


/* FUN_0046bab0 @ 0046bab0  kind=gamemisc  attributed-by=none  size=37 */

bool __cdecl FUN_0046bab0(int param_1,int param_2)

{
  for (; (0 < param_2 && (*(char *)(param_1 + -1 + param_2) == ' ')); param_2 = param_2 + -1) {
  }
  return param_2 == 0;
}


/* FUN_0046f880 @ 0046f880  kind=gamemisc  attributed-by=none  size=267 */

void __cdecl FUN_0046f880(int *param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  bool bVar4;
  undefined3 extraout_var;
  int extraout_ECX;
  int *piVar5;
  float10 fVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  
  dVar10 = 1.0;
  dVar9 = *(double *)((int *)*param_1 + 0x6e);
  iVar2 = param_1[2];
  if ((((1.0 < dVar9) && ((*(uint *)(*(int *)*param_1 + 0x18) & 0x80000) != 0)) &&
      (((param_1[0xe] & 0x100f3000U) == 0 || (param_1[0xe] < 0)))) &&
     ((*(byte *)(iVar2 + 0x24) & 7) == 0)) {
    iVar3 = *(int *)(*(int *)(iVar2 + 0x10) + 0x1c);
    dVar8 = (double)iVar3 + *(double *)(&DAT_0055ac20 + (iVar3 >> 0x1f) * -8);
    fVar6 = FUN_00477290(dVar8);
    dVar7 = (double)fVar6;
    dVar9 = (dVar8 / dVar9 + dVar10) * dVar7 * 2.0;
    if (dVar9 < *(double *)(param_1 + 0x14)) {
      piVar5 = *(int **)(extraout_ECX + 0x20);
      piVar1 = piVar5 + *(int *)(extraout_ECX + 0x18) * 10;
      if (piVar5 < piVar1) {
        while (bVar4 = FUN_004bdb20(piVar5,iVar2,param_1[4],param_1[5]),
              CONCAT31(extraout_var,bVar4) == 0) {
          piVar5 = piVar5 + 10;
          if (piVar1 <= piVar5) {
            return;
          }
        }
        *(double *)(param_1 + 0x14) = dVar9;
        param_1[0xe] = 0x20000000;
        *(double *)(param_1 + 0x10) = dVar7 + dVar10;
        param_1[0x16] = piVar5[6];
        param_1[0x17] = piVar5[7];
      }
    }
  }
  return;
}


/* FUN_0046f990 @ 0046f990  kind=gamemisc  attributed-by=none  size=1866 */

void __cdecl FUN_0046f990(int *param_1)

{
  int iVar1;
  undefined4 uVar2;
  int *piVar3;
  int *piVar4;
  ushort *puVar5;
  char cVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  ushort uVar12;
  uint uVar13;
  uint *puVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  int local_cc;
  undefined4 *local_c8;
  undefined4 *local_c4;
  int local_c0;
  undefined4 local_b8;
  undefined4 local_a8;
  undefined1 local_a0;
  undefined4 local_9c;
  undefined4 local_98;
  undefined8 local_94;
  uint local_8c;
  undefined4 local_88;
  double local_84;
  int local_7c;
  uint local_78;
  uint local_74;
  int local_70;
  uint *local_6c;
  int *local_68;
  uint local_64;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_48;
  undefined8 local_40;
  uint local_38;
  uint local_34;
  uint local_30;
  uint local_2c;
  int local_28;
  uint local_24;
  int local_20;
  undefined4 *local_1c;
  int *local_18;
  char local_13;
  char local_12;
  char local_11;
  int *local_10;
  char local_a;
  char local_9;
  uint local_8;
  
  local_68 = (int *)*param_1;
  local_1c = (undefined4 *)param_1[1];
  iVar7 = param_1[2];
  local_20 = *(int *)(iVar7 + 0x2c);
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  local_88 = 0xffffffff;
  param_1[0x14] = -0x5d7860d2;
  param_1[0x15] = 0x547d42ae;
  local_18 = *(int **)(iVar7 + 0x44);
  local_38 = ((byte)~*(byte *)(iVar7 + 0x20) & 8) << 4 | 3;
  local_8c = local_38;
  local_7c = iVar7;
  local_10 = local_18;
  if (local_18 == (int *)0x0) {
    memset(&local_cc,0,0x30);
    local_c8 = &local_88;
    local_c4 = &local_9c;
    local_c0 = *(int *)(iVar7 + 0x10);
    local_9c = *(undefined4 *)(local_c0 + 0x1c);
    local_98 = 1;
    local_a8 = 1;
    local_a0 = 5;
    if ((*(byte *)(iVar7 + 0x24) & 1) == 0) {
      local_b8 = *(undefined4 *)(*(int *)(iVar7 + 0x10) + 8);
    }
    local_10 = &local_cc;
    local_74 = 0xfff0ffff;
    local_38 = 3;
    local_18 = (int *)0x0;
  }
  else {
    local_74 = 0xffffcfff;
  }
  if ((uint *)param_1[8] == (uint *)0x0) {
    local_78 = 0;
  }
  else {
    local_78 = *(uint *)param_1[8];
  }
  if (param_1[0xb] == 0) {
    local_34 = 0;
    local_a = 0 < (int)local_78;
    local_9 = param_1[9] != 0;
  }
  else {
    local_34 = (uint)*(ushort *)(param_1[0xb] * 0x58 + -0x52 + param_1[0xd]);
    local_a = (int)local_34 < (int)local_78;
    local_9 = '\0';
  }
  while (local_10 != (int *)0x0) {
    local_6c = (uint *)local_10[2];
    local_60._0_4_ = 0;
    uVar11 = (uint)local_60;
    uVar13 = 0;
    iVar7 = 1;
    local_30 = 0;
    local_70 = 1;
    local_84 = 1.0;
    local_28 = 0;
    local_13 = '\0';
    local_58 = 0;
    local_48 = 0;
    local_40 = 0;
    local_60 = (ulonglong)(ushort)local_34 << 0x30;
    local_8 = 0;
    local_12 = local_9;
    local_11 = local_a;
    if (0 < local_10[9]) {
      do {
        uVar11 = local_8;
        piVar3 = FUN_00479c50(local_1c,local_20,*(int *)(local_10[1] + uVar13 * 4),param_1[4],
                              param_1[5],(ushort)local_38,(int)local_18);
        if (piVar3 == (int *)0x0) break;
        local_8 = uVar11 | 0x11000;
        uVar2 = local_60._4_4_;
        local_60 = CONCAT44(local_60._4_4_,uVar11) | 0x11000;
        if ((*(ushort *)(piVar3 + 4) & 1) == 0) {
          if ((char)*(ushort *)(piVar3 + 4) < '\0') {
            local_8 = uVar11 | 0x91000;
            local_60 = CONCAT44(uVar2,uVar11) | 0x91000;
          }
        }
        else {
          local_8 = uVar11 | 0x51000;
          local_60 = CONCAT44(uVar2,uVar11) | 0x51000;
          if ((*(ushort *)(*piVar3 + 2) & 0x800) == 0) {
            piVar4 = *(int **)(*piVar3 + 0x10);
            if ((piVar4 != (int *)0x0) && (iVar1 = *piVar4, iVar1 != 0)) {
              iVar7 = iVar7 * iVar1;
              local_70 = iVar7;
            }
          }
          else {
            iVar7 = iVar7 * 0x19;
            local_30 = 1;
            local_70 = iVar7;
          }
        }
        uVar12 = (short)uVar13 + 1;
        uVar13 = (uint)uVar12;
        local_40 = CONCAT44(local_40._4_4_ | piVar3[7],(uint)local_40 | piVar3[6]);
        local_60._0_6_ = CONCAT24(uVar12,(uint)local_60);
        uVar11 = local_8;
      } while ((int)uVar13 < local_10[9]);
    }
    piVar3 = local_18;
    uVar10 = uVar11;
    local_2c = uVar13;
    if ((uVar13 == local_10[9]) && ((char)local_10[0xb] != '\0')) {
      if ((uVar11 & 0xc0000) == 0) {
        uVar2 = local_60._4_4_;
        local_60 = CONCAT44(local_60._4_4_,uVar11) | 0x2000000;
        if ((param_1[0xb] == 0) ||
           (uVar10 = uVar11 | 0x2000000, local_8 = uVar11 | 0x2000000,
           (*(uint *)(param_1[0xb] * 0x58 + -0x58 + param_1[0xd]) & 0x4000000) != 0)) {
          local_60 = CONCAT44(uVar2,uVar11) | 0x6000000;
          uVar10 = uVar11 | 0x6000000;
          local_8 = uVar11 | 0x6000000;
        }
      }
    }
    else if (*(char *)((int)local_10 + 0x2e) == '\0') {
      if (uVar13 == local_10[9]) {
        iVar7 = -1;
      }
      else {
        iVar7 = *(int *)(local_10[1] + uVar13 * 4);
      }
      piVar4 = FUN_00479c50(local_1c,local_20,iVar7,param_1[4],param_1[5],0x3c,(int)local_18);
      if (piVar4 != (int *)0x0) {
        piVar3 = FUN_00479c50(local_1c,local_20,iVar7,param_1[4],param_1[5],0x18,(int)piVar3);
        piVar4 = FUN_00479c50(local_1c,local_20,iVar7,param_1[4],param_1[5],0x24,(int)local_18);
        dVar16 = 1.0;
        local_84 = 1.0;
        if (piVar4 != (int *)0x0) {
          dVar16 = 4.0;
          local_84 = 4.0;
        }
        uVar13 = local_40._4_4_;
        uVar10 = (uint)local_40;
        if (piVar3 != (int *)0x0) {
          uVar10 = (uint)local_40 | piVar3[6];
          local_84 = dVar16 * 4.0;
          uVar11 = uVar11 | 0x100000;
          uVar13 = local_40._4_4_ | piVar3[7];
          local_28 = 1;
          local_40 = CONCAT44(uVar13,uVar10);
        }
        if (piVar4 != (int *)0x0) {
          local_28 = local_28 + 1;
          uVar11 = uVar11 | 0x200000;
          local_40 = CONCAT44(uVar13 | piVar4[7],uVar10 | piVar4[6]);
        }
        uVar10 = uVar11 | 0x22000;
        local_60 = CONCAT44(local_60._4_4_,uVar11) | 0x22000;
        local_8 = uVar10;
      }
    }
    uVar11 = local_2c;
    if ((local_a != '\0') && ((*(byte *)(local_7c + 0x20) & 8) == 0)) {
      local_24 = 2;
      uVar13 = FUN_0047f1a0(param_1,local_10,local_20,&local_24);
      local_60 = CONCAT26((short)uVar13,(undefined6)local_60);
      if (((int)local_34 < (int)(uVar13 & 0xffff)) || (uVar8 = uVar10, (uVar10 & 0x4000000) != 0)) {
        uVar8 = uVar10 | 0x800000;
        local_60 = CONCAT44(local_60._4_4_,uVar10) | 0x800000;
        local_8 = uVar8;
      }
      uVar9 = uVar8;
      if (local_78 == (uVar13 & 0xffff)) {
        uVar9 = uVar8 | 0x22000;
        local_11 = '\0';
        local_60 = CONCAT44(local_60._4_4_,uVar8) | 0x22000;
        local_8 = uVar9;
      }
      uVar10 = uVar9;
      if ((local_24 & 1) != 0) {
        uVar10 = uVar9 | 0x1000000;
        local_60 = CONCAT44(local_60._4_4_,uVar9) | 0x1000000;
        local_8 = uVar10;
      }
    }
    uVar13 = uVar10;
    if (((local_9 != '\0') &&
        (iVar7 = FUN_0047ebd0(local_68,local_1c,local_10,local_20,(int *)param_1[9],uVar11),
        iVar7 != 0)) && ((uVar10 & 0x40000) == 0)) {
      uVar13 = uVar10 | 0x40022000;
      local_12 = '\0';
      local_60 = CONCAT44(local_60._4_4_,uVar10) | 0x40022000;
      local_8 = uVar13;
    }
    cVar6 = local_13;
    if (local_18 != (int *)0x0) {
      iVar7 = local_18[9];
      uVar11 = *(uint *)(local_7c + 0x38);
      local_64 = *(uint *)(local_7c + 0x3c);
      uVar10 = uVar13;
      if (0 < iVar7) {
        puVar14 = (uint *)local_18[1];
        do {
          uVar13 = *puVar14;
          if ((int)uVar13 < 0x3f) {
            uVar10 = 1 << (uVar13 & 0x1f);
            uVar8 = 0;
            if (0x1f < uVar13) {
              uVar8 = uVar10;
            }
            uVar10 = uVar10 ^ uVar8;
            if (0x3f < uVar13) {
              uVar8 = uVar10;
            }
            uVar11 = uVar11 & ~uVar10;
            local_64 = local_64 & ~uVar8;
          }
          puVar14 = puVar14 + 1;
          iVar7 = iVar7 + -1;
          uVar10 = local_8;
          local_24 = uVar11;
        } while (iVar7 != 0);
      }
      if (uVar11 == 0 && local_64 == 0) {
        uVar13 = uVar10 | 0x400000;
        local_60 = CONCAT44(local_60._4_4_,uVar10) | 0x400000;
        local_8 = uVar13;
      }
      else {
        uVar13 = uVar10;
        cVar6 = '\x01';
      }
    }
    uVar11 = local_6c[local_2c];
    dVar16 = (double)(int)(local_70 * uVar11) +
             *(double *)(&DAT_0055ac20 + ((int)(local_70 * uVar11) >> 0x1f) * -8);
    iVar7 = local_70;
    if ((local_30 != 0) &&
       (uVar10 = *local_6c,
       (double)(int)uVar10 + *(double *)(&DAT_0055ac20 + ((int)uVar10 >> 0x1f) * -8) < dVar16 * 2.0)
       ) {
      dVar16 = (double)(uVar10 >> 1) + 0.0;
      iVar7 = (int)(dVar16 / ((double)(int)uVar11 +
                             *(double *)(&DAT_0055ac20 + ((int)uVar11 >> 0x1f) * -8)));
    }
    dVar16 = dVar16 / local_84;
    if (dVar16 < 1.0) {
      dVar16 = 1.0;
    }
    if ((((uVar13 & 0xfe7fffff) == 0x400000) && ((*(byte *)((int)local_1c + 0x16) & 4) == 0)) &&
       ((DAT_00582ad8 != 0 && ((*(byte *)(*local_68 + 0x34) & 0x40) == 0)))) {
      iVar7 = *local_6c * 3 + local_10[9];
      uVar10 = uVar13 | 0x80020000;
      dVar19 = (double)iVar7 + *(double *)(&DAT_0055ac20 + (iVar7 >> 0x1f) * -8);
      local_60 = CONCAT44(local_60._4_4_,uVar13) | 0x80020000;
LAB_0046ff9e:
      uVar12 = local_60._6_2_;
      local_8 = uVar10;
    }
    else {
      uVar11 = *local_6c;
      if ((uVar13 & 0x100f3000) == 0) {
        uVar10 = uVar13 & 0xffbfffff;
        dVar19 = (double)(int)(uVar11 << 2) +
                 *(double *)(&DAT_0055ac20 + ((int)(uVar11 << 2) >> 0x1f) * -8);
        local_60 = CONCAT44(local_60._4_4_,uVar13) & 0xffffffffffbfffff;
        if (local_18 == (int *)0x0) goto LAB_0046ff9e;
        uVar10 = uVar13 & 0xff3fffff;
        local_60 = CONCAT26((ushort)local_34,(int6)CONCAT44(local_60._4_4_,uVar13)) &
                   0xffffffffff3fffff;
        uVar12 = (ushort)local_34;
        local_8 = uVar10;
      }
      else {
        dVar15 = 1.0;
        dVar19 = 10.0;
        if (10.0 < (double)(int)uVar11 + *(double *)(&DAT_0055ac20 + ((int)uVar11 >> 0x1f) * -8)) {
          do {
            dVar19 = dVar19 * 10.0;
            dVar15 = dVar15 + 1.0;
          } while (dVar19 < (double)(int)uVar11 +
                            *(double *)(&DAT_0055ac20 + ((int)uVar11 >> 0x1f) * -8));
        }
        dVar19 = (double)iVar7;
        if ((local_18 != (int *)0x0) && (cVar6 != '\0')) {
          dVar19 = dVar19 + dVar16;
        }
        dVar19 = dVar19 * dVar15 + dVar16;
        uVar10 = uVar13;
        uVar12 = local_60._6_2_;
      }
    }
    if (local_11 != '\0') {
      dVar17 = 1.0;
      dVar15 = 10.0;
      dVar18 = ((double)(int)(local_78 - uVar12) * dVar16) / (double)(int)local_78;
      if (10.0 < dVar18) {
        do {
          dVar15 = dVar15 * 10.0;
          dVar17 = dVar17 + 1.0;
        } while (dVar15 < dVar18);
      }
      dVar19 = (double)(byte)((local_60._6_2_ == 0) + 2) * dVar17 * dVar16 + dVar19;
      uVar12 = local_60._6_2_;
    }
    if (local_12 != '\0') {
      dVar15 = 1.0;
      dVar17 = 10.0;
      if (10.0 < dVar16) {
        do {
          dVar17 = dVar17 * 10.0;
          dVar15 = dVar15 + 1.0;
        } while (dVar17 < dVar16);
      }
      dVar19 = dVar19 + dVar15 * dVar16 * 3.0;
    }
    if ((2.0 < dVar16) && (dVar19 <= *(double *)(param_1 + 0x14))) {
      uVar11 = 0;
      piVar3 = (int *)local_1c[1];
      iVar7 = *piVar3;
      if (0 < iVar7) {
        do {
          piVar3 = piVar3 + 1;
          if (*piVar3 == local_20) {
            uVar13 = 1 << (uVar11 & 0x1f);
            local_30 = 0;
            if (0x1f < uVar11) {
              local_30 = uVar13;
            }
            uVar13 = uVar13 ^ local_30;
            if (0x3f < uVar11) {
              local_30 = uVar13;
            }
            goto LAB_0047017b;
          }
          uVar11 = uVar11 + 1;
        } while ((int)uVar11 < iVar7);
      }
      local_94 = 0;
      local_94._0_4_ = 0;
      local_30 = 0;
      uVar13 = (uint)local_94;
LAB_0047017b:
      iVar7 = local_1c[6];
      puVar5 = (ushort *)(local_1c[8] + 0x10);
      do {
        if (iVar7 == 0) break;
        if ((((puVar5[1] & 2) == 0) && ((param_1[6] & *(uint *)(puVar5 + 8)) == uVar13)) &&
           ((param_1[7] & *(uint *)(puVar5 + 10)) == local_30)) {
          uVar12 = *puVar5;
          if ((uVar12 & 0x83) == 0) {
            if ((uVar12 & 0x3c) == 0) {
              if (uVar12 != 0x800) {
                dVar16 = dVar16 * 0.5;
              }
            }
            else if (local_28 == 0) {
              dVar16 = dVar16 / 3.0;
            }
            else {
              local_28 = local_28 + -1;
            }
          }
          else if (local_2c == 0) {
            dVar16 = dVar16 / 10.0;
          }
          else {
            local_2c = local_2c - 1;
          }
        }
        iVar7 = iVar7 + -1;
        puVar5 = puVar5 + 0x14;
      } while (2.0 < dVar16);
      uVar10 = local_8;
      uVar12 = local_60._6_2_;
      if (dVar16 < 2.0) {
        dVar16 = 2.0;
      }
    }
    if (((local_18 == (int *)0x0) || (uVar10 != 0)) &&
       ((dVar19 < *(double *)(param_1 + 0x14) ||
        ((dVar19 <= *(double *)(param_1 + 0x14) &&
         ((*(ushort *)((int)param_1 + 0x3e) < uVar12 || (dVar16 < *(double *)(param_1 + 0x10))))))))
       ) {
      *(ulonglong *)(param_1 + 0xe) = local_60;
      *(double *)(param_1 + 0x10) = dVar16;
      param_1[0x12] = 0;
      param_1[0x13] = 0;
      *(double *)(param_1 + 0x14) = dVar19;
      *(undefined8 *)(param_1 + 0x16) = local_40;
      param_1[0xe] = param_1[0xe] & local_74;
      param_1[0x12] = (int)local_18;
    }
    if (*(int *)(local_7c + 0x44) != 0) break;
    local_18 = (int *)local_10[5];
    local_74 = 0xffffcfff;
    local_38 = local_8c;
    local_10 = local_18;
  }
  uVar11 = local_38;
  if ((param_1[8] == 0) && ((*(uint *)(*local_68 + 0x18) & 0x10000) != 0)) {
    param_1[0xe] = param_1[0xe] | 0x1000000;
  }
  FUN_00470360(param_1);
  FUN_0046f880(param_1);
  param_1[0xe] = param_1[0xe] | uVar11;
  return;
}


/* FUN_00470300 @ 00470300  kind=gamemisc  attributed-by=none  size=91 */

void __cdecl FUN_00470300(int *param_1)

{
  int *piVar1;
  
  piVar1 = param_1;
  if ((*(byte *)(*(int *)(param_1[2] + 0x10) + 0x2a) & 0x10) != 0) {
    param_1 = (int *)0x0;
    piVar1[10] = (int)&param_1;
    FUN_004706c0(piVar1);
    if (param_1[7] != 0) {
      FUN_00466dd0(param_1[6]);
    }
    FUN_00494b00(*(int *)*piVar1,param_1);
    return;
  }
  FUN_0046f990(param_1);
  return;
}


/* FUN_00470360 @ 00470360  kind=gamemisc  attributed-by=none  size=858 */

void __cdecl FUN_00470360(int *param_1)

{
  int iVar1;
  undefined2 uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  int *piVar6;
  uint uVar7;
  int *piVar8;
  uint uVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  int local_208;
  undefined4 *local_204;
  undefined4 local_1e8;
  undefined4 local_1e4;
  undefined4 local_1e0;
  double local_1c8;
  double local_1b8;
  uint local_1b0;
  uint local_1ac;
  double local_1a8;
  double local_1a0;
  undefined4 *local_198;
  int local_194;
  uint local_190;
  uint local_18c;
  uint local_188;
  uint local_184;
  undefined8 local_180;
  uint local_178;
  uint local_174;
  undefined4 local_170;
  undefined4 local_16c;
  undefined4 *local_160;
  undefined1 local_15c;
  undefined2 local_15a;
  undefined4 local_158;
  uint local_150;
  uint local_8;
  
  local_8 = DAT_00583cc8 ^ (uint)&stack0xfffffffc;
  local_198 = (undefined4 *)param_1[1];
  local_194 = *(int *)(param_1[2] + 0x2c);
  piVar6 = (int *)local_198[1];
  uVar3 = 0;
  iVar1 = *piVar6;
  if (0 < iVar1) {
    do {
      piVar6 = piVar6 + 1;
      if (*piVar6 == local_194) {
        local_178 = 1 << (uVar3 & 0x1f);
        local_174 = 0;
        if (0x1f < uVar3) {
          local_174 = local_178;
        }
        local_178 = local_178 ^ local_174;
        if (0x3f < uVar3) {
          local_174 = local_178;
        }
        goto LAB_004703c7;
      }
      uVar3 = uVar3 + 1;
    } while ((int)uVar3 < iVar1);
  }
  local_180 = 0;
  local_180._4_4_ = 0;
  local_180._0_4_ = 0;
  local_178 = (uint)local_180;
  local_174 = local_180._4_4_;
LAB_004703c7:
  local_184 = local_198[8];
  local_190 = local_184 + local_198[6] * 0x28;
  if (((((*(byte *)(param_1[2] + 0x24) & 1) == 0) && (*(int *)(param_1[2] + 0x44) == 0)) &&
      ((*(byte *)((int)local_198 + 0x16) & 0x80) == 0)) && (local_184 < local_190)) {
    do {
      if (((*(short *)(local_184 + 0x10) == 0x100) &&
          ((~local_178 & param_1[4] & *(uint *)(local_184 + 0x20)) == 0 &&
           (~local_174 & param_1[5] & *(uint *)(local_184 + 0x24)) == 0)) &&
         (iVar1 = *(int *)(local_184 + 0xc),
         (*(uint *)(iVar1 + 0x168) & local_178) != 0 || (*(uint *)(iVar1 + 0x16c) & local_174) != 0)
         ) {
        uVar3 = *(int *)(iVar1 + 0x20) + *(int *)(iVar1 + 0x18) * 0x28;
        piVar6 = param_1;
        piVar8 = &local_208;
        for (iVar5 = 0x18; iVar5 != 0; iVar5 = iVar5 + -1) {
          *piVar8 = *piVar6;
          piVar6 = piVar6 + 1;
          piVar8 = piVar8 + 1;
        }
        local_1e8 = 0;
        local_1e4 = 0;
        local_1e0 = 0;
        uVar7 = *(uint *)(iVar1 + 0x20);
        local_180 = 0;
        local_180._4_4_ = 0;
        dVar10 = 0.0;
        dVar11 = 0.0;
        local_180._0_4_ = 0;
        local_1a8 = 0.0;
        local_1a0 = 0.0;
        uVar4 = (uint)local_180;
        uVar9 = local_180._4_4_;
        local_18c = uVar3;
        if (uVar7 < uVar3) {
          local_188 = 0;
          do {
            if (*(short *)(uVar7 + 0x10) == 0x200) {
              local_204 = *(undefined4 **)(uVar7 + 0xc);
LAB_0047057c:
              FUN_00470300(&local_208);
              dVar10 = local_1b8 + local_1a8;
              uVar4 = local_188 | local_1b0;
              uVar9 = uVar9 | local_1ac;
              dVar11 = local_1c8 + local_1a0;
              uVar3 = local_18c;
              local_1a8 = dVar10;
              local_1a0 = dVar11;
              local_188 = uVar4;
              if (*(double *)(param_1 + 0x14) <= dVar10) break;
            }
            else if (*(int *)(uVar7 + 8) == local_194) {
              local_160 = local_198;
              local_170 = *local_198;
              local_16c = local_198[1];
              local_15a = 0;
              local_15c = 0x45;
              local_158 = 1;
              local_204 = &local_170;
              local_150 = uVar7;
              goto LAB_0047057c;
            }
            uVar7 = uVar7 + 0x28;
          } while (uVar7 < uVar3);
        }
        if (param_1[8] != 0) {
          dVar12 = 1.0;
          dVar13 = 10.0;
          if (10.0 < dVar11) {
            do {
              dVar13 = dVar13 * 10.0;
              dVar12 = dVar12 + 1.0;
            } while (dVar13 < dVar11);
          }
          dVar10 = dVar10 + dVar12 * dVar11;
        }
        if (dVar10 < *(double *)(param_1 + 0x14)) {
          *(double *)(param_1 + 0x14) = dVar10;
          param_1[0x16] = uVar4;
          param_1[0x17] = uVar9;
          *(double *)(param_1 + 0x10) = dVar11;
          if (param_1[0xb] == 0) {
            uVar2 = 0;
          }
          else {
            uVar2 = *(undefined2 *)(param_1[0xb] * 0x58 + -0x52 + param_1[0xd]);
          }
          *(undefined2 *)((int)param_1 + 0x3e) = uVar2;
          param_1[0xe] = 0x10000000;
          param_1[0x12] = local_184;
        }
      }
      local_184 = local_184 + 0x28;
    } while (local_184 < local_190);
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


/* FUN_004706c0 @ 004706c0  kind=gamemisc  attributed-by=none  size=543 */

void __cdecl FUN_004706c0(int *param_1)

{
  int iVar1;
  void *_Dst;
  int iVar2;
  int iVar3;
  undefined2 uVar4;
  int *piVar5;
  int iVar6;
  int *piVar7;
  int iVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  int local_c;
  
  piVar7 = (int *)*param_1;
  iVar1 = param_1[1];
  iVar6 = *(int *)(param_1[2] + 0x10);
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  param_1[0xe] = 0x8000000;
  piVar5 = *(int **)param_1[10];
  if (piVar5 == (int *)0x0) {
    piVar5 = FUN_0046c340(param_1);
    *(int **)param_1[10] = piVar5;
    if (piVar5 == (int *)0x0) {
      return;
    }
  }
  _Dst = (void *)piVar5[4];
  local_c = 0;
  if (0 < *piVar5) {
    iVar8 = piVar5[1] + 5;
    do {
      iVar2 = *(int *)(iVar1 + 0x20);
      *(bool *)iVar8 =
           (*(uint *)(iVar2 + 0x18 + *(int *)(iVar8 + 3) * 0x28) & param_1[4]) == 0 &&
           (*(uint *)(iVar2 + 0x1c + *(int *)(iVar8 + 3) * 0x28) & param_1[5]) == 0;
      local_c = local_c + 1;
      iVar8 = iVar8 + 0xc;
    } while (local_c < *piVar5);
  }
  memset(_Dst,0,*piVar5 << 3);
  if (piVar5[7] != 0) {
    FUN_00466dd0(piVar5[6]);
  }
  iVar8 = piVar5[2];
  piVar5[6] = 0;
  piVar5[5] = 0;
  piVar5[7] = 0;
  piVar5[8] = 0;
  piVar5[10] = -0x5d7860d2;
  piVar5[0xb] = 0x546d42ae;
  if (param_1[8] == 0) {
    piVar5[2] = 0;
  }
  iVar6 = FUN_004bfde0(piVar7,iVar6,piVar5);
  if (iVar6 == 0) {
    iVar6 = 0;
    if (0 < *piVar5) {
      piVar7 = (int *)(piVar5[1] + 8);
      do {
        if (0 < *(int *)((int)_Dst + iVar6 * 8)) {
          iVar2 = *piVar7;
          iVar3 = *(int *)(iVar1 + 0x20);
          param_1[0x16] = param_1[0x16] | *(uint *)(iVar3 + 0x18 + iVar2 * 0x28);
          param_1[0x17] = param_1[0x17] | *(uint *)(iVar3 + 0x1c + iVar2 * 0x28);
        }
        iVar6 = iVar6 + 1;
        piVar7 = piVar7 + 3;
      } while (iVar6 < *piVar5);
    }
    dVar11 = *(double *)(piVar5 + 10);
    if ((param_1[8] != 0) && (piVar5[8] == 0)) {
      dVar9 = 1.0;
      dVar10 = 10.0;
      if (10.0 < dVar11) {
        do {
          dVar10 = dVar10 * 10.0;
          dVar9 = dVar9 + 1.0;
        } while (dVar10 < dVar11);
      }
      dVar11 = dVar11 + dVar9 * dVar11;
    }
    if (dVar11 <= 5e+98) {
      *(double *)(param_1 + 0x14) = dVar11;
    }
    else {
      param_1[0x14] = -0x5d7860d2;
      param_1[0x15] = 0x546d42ae;
    }
    param_1[0x12] = (int)piVar5;
    if (piVar5[8] == 0) {
      if (param_1[0xb] == 0) {
        uVar4 = 0;
      }
      else {
        uVar4 = *(undefined2 *)(param_1[0xb] * 0x58 + -0x52 + param_1[0xd]);
      }
      *(undefined2 *)((int)param_1 + 0x3e) = uVar4;
    }
    else {
      param_1[0xe] = param_1[0xe] | 0x800000;
      *(short *)((int)param_1 + 0x3e) = (short)iVar8;
    }
    *(undefined2 *)(param_1 + 0xf) = 0;
    piVar5[2] = iVar8;
    FUN_00470360(param_1);
  }
  return;
}


/* FUN_00470aa0 @ 00470aa0  kind=gamemisc  attributed-by=none  size=256 */

uint __cdecl FUN_00470aa0(int param_1,undefined4 param_2,int param_3,int param_4,undefined *param_5)

{
  int iVar1;
  int *piVar2;
  uint uVar3;
  uint uVar4;
  
  if (param_1 == 0) {
    FUN_004683f0(0x15,"misuse at line %d of [%.10s]");
    return 0x15;
  }
  iVar1 = *(int *)(param_1 + 0x18);
  if (*(int *)(iVar1 + 0xc) != 0) {
    (*DAT_00582b18)(*(int *)(iVar1 + 0xc));
  }
  piVar2 = *(int **)(param_1 + 0x14);
  if (((param_3 < 0) || (param_4 < 0)) || (*(int *)(param_1 + 4) < param_4 + param_3)) {
    uVar4 = 1;
    FUN_004961f0(iVar1,1,(byte *)0x0);
  }
  else if (piVar2 == (int *)0x0) {
    uVar4 = 4;
  }
  else {
    FUN_0048fbc0((undefined4 *)**(undefined4 **)(param_1 + 0x10));
    uVar4 = (*(code *)param_5)(*(undefined4 *)(param_1 + 0x10),*(int *)(param_1 + 8) + param_4,
                               param_3,param_2);
    FUN_004907e0(*(int **)(param_1 + 0x10));
    if (uVar4 == 4) {
      FUN_004b5e70(piVar2);
      *(undefined4 *)(param_1 + 0x14) = 0;
    }
    else {
      *(uint *)(iVar1 + 0x2c) = uVar4;
      piVar2[0x16] = uVar4;
    }
  }
  if ((*(char *)(iVar1 + 0x38) != '\0') || (uVar4 == 0xc0a)) {
    FUN_004961f0(iVar1,7,(byte *)0x0);
    *(undefined1 *)(iVar1 + 0x38) = 0;
    uVar4 = 7;
  }
  uVar3 = *(uint *)(iVar1 + 0x30);
  if (*(int *)(iVar1 + 0xc) != 0) {
    (*DAT_00582b20)(*(int *)(iVar1 + 0xc));
  }
  return uVar3 & uVar4;
}


/* FUN_00472ef0 @ 00472ef0  kind=gamemisc  attributed-by=none  size=718 */

int __cdecl
FUN_00472ef0(int *param_1,undefined4 *param_2,undefined4 *param_3,uint param_4,uint param_5,
            int param_6,undefined4 *param_7)

{
  size_t _Size;
  undefined2 *puVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  byte *pbVar7;
  undefined4 uVar8;
  int iVar9;
  char cVar10;
  bool bVar11;
  int iVar12;
  char *_Src;
  char *pcVar13;
  int *piVar14;
  int iVar15;
  int *piVar16;
  int iVar17;
  byte *pbVar18;
  undefined3 extraout_var;
  byte bVar19;
  int iVar20;
  uint uVar21;
  int local_c;
  undefined4 *local_8;
  
  iVar3 = param_2[7];
  iVar4 = param_2[4];
  piVar5 = (int *)param_1[2];
  uVar21 = (uint)*(ushort *)(param_2 + 1);
  iVar12 = param_6 + uVar21;
  local_c = param_1[0x13] + 1;
  param_1[0x13] = iVar12 + param_1[0x13];
  _Src = (char *)FUN_0049db70(piVar5,iVar4);
  if (_Src == (char *)0x0) {
    local_8 = (undefined4 *)0x0;
  }
  else {
    cVar2 = *_Src;
    pcVar13 = _Src;
    while (cVar2 != '\0') {
      pcVar13 = pcVar13 + 1;
      cVar2 = *pcVar13;
    }
    _Size = ((int)pcVar13 - (int)_Src & 0x3fffffffU) + 1;
    local_8 = FUN_00494b90(*param_1,_Size);
    if ((local_8 != (undefined4 *)0x0) && (memcpy(local_8,_Src,_Size), local_8 != (undefined4 *)0x0)
       ) goto LAB_00472f92;
  }
  *(undefined1 *)(*param_1 + 0x38) = 1;
LAB_00472f92:
  param_6 = 0;
  if (uVar21 == 0) {
    *param_7 = local_8;
    return local_c;
  }
  do {
    piVar14 = FUN_00479c50(param_3,iVar3,*(int *)(*(int *)(iVar4 + 4) + param_6 * 4),param_4,param_5
                           ,(ushort)*param_2,iVar4);
    if (piVar14 == (int *)0x0) {
      *param_7 = local_8;
      return local_c;
    }
    iVar20 = param_6 + local_c;
    iVar15 = FUN_00473660(param_1,piVar14,(int)param_2,iVar20);
    iVar9 = local_c;
    if (iVar15 != iVar20) {
      if (iVar12 == 1) {
        iVar9 = iVar15;
        if ((local_c != 0) && (*(byte *)((int)param_1 + 0x13) < 8)) {
          iVar15 = 0;
          piVar16 = param_1 + 0x19;
          do {
            if (piVar16[4] == local_c) {
              *(undefined1 *)(piVar16 + 2) = 1;
              goto LAB_00473080;
            }
            iVar15 = iVar15 + 1;
            piVar16 = piVar16 + 6;
          } while (iVar15 < 10);
          param_1[*(byte *)((int)param_1 + 0x13) + 7] = local_c;
          *(char *)((int)param_1 + 0x13) = *(char *)((int)param_1 + 0x13) + '\x01';
        }
      }
      else {
        iVar6 = piVar5[7];
        if ((iVar6 < piVar5[8]) || (iVar17 = FUN_0047de10(piVar5), iVar17 == 0)) {
          piVar5[7] = piVar5[7] + 1;
          iVar17 = piVar5[1];
          *(undefined2 *)(iVar17 + iVar6 * 0x14) = 0xf;
          *(undefined1 *)(iVar17 + 3 + iVar6 * 0x14) = 0;
          *(int *)(iVar17 + 4 + iVar6 * 0x14) = iVar15;
          *(int *)(iVar17 + 8 + iVar6 * 0x14) = iVar20;
          *(undefined4 *)(iVar17 + 0xc + iVar6 * 0x14) = 0;
          *(undefined4 *)(iVar17 + 0x10 + iVar6 * 0x14) = 0;
        }
      }
    }
LAB_00473080:
    local_c = iVar9;
    if ((*(byte *)(piVar14 + 4) & 0x81) == 0) {
      uVar8 = param_2[9];
      pbVar7 = *(byte **)(*piVar14 + 0xc);
      for (pbVar18 = pbVar7; (*pbVar18 == 0x9d || (*pbVar18 == 0x9c));
          pbVar18 = *(byte **)(pbVar18 + 8)) {
      }
      bVar19 = *pbVar18;
      if (bVar19 == 0x84) {
        bVar19 = pbVar18[0x23];
      }
      if (((bVar19 != 0x5e) && ((bVar19 < 0x81 || (0x83 < bVar19)))) &&
         ((iVar9 = piVar5[7], iVar9 < piVar5[8] || (iVar15 = FUN_0047de10(piVar5), iVar15 == 0)))) {
        piVar5[7] = piVar5[7] + 1;
        puVar1 = (undefined2 *)(piVar5[1] + iVar9 * 0x14);
        *puVar1 = 0x49;
        *(undefined1 *)((int)puVar1 + 3) = 0;
        *(int *)(puVar1 + 2) = param_6 + local_c;
        *(undefined4 *)(puVar1 + 4) = uVar8;
        *(undefined4 *)(puVar1 + 6) = 0;
        *(undefined4 *)(puVar1 + 8) = 0;
      }
      if (local_8 != (undefined4 *)0x0) {
        cVar2 = *(char *)(param_6 + (int)local_8);
        cVar10 = FUN_00496480((char *)pbVar7);
        if (cVar10 == '\0') {
          if (cVar2 != '\0') goto LAB_0047316b;
LAB_00473171:
          *(undefined1 *)(param_6 + (int)local_8) = 0x62;
        }
        else if (cVar2 == '\0') {
LAB_0047316b:
          if ((char)(cVar10 + cVar2) == 'b') goto LAB_00473171;
        }
        else if ((cVar10 < 'c') && (cVar2 < 'c')) goto LAB_00473171;
        bVar11 = FUN_004993e0((char *)pbVar7,*(char *)(param_6 + (int)local_8));
        if (CONCAT31(extraout_var,bVar11) != 0) {
          *(undefined1 *)(param_6 + (int)local_8) = 0x62;
        }
      }
    }
    param_6 = param_6 + 1;
    if ((int)uVar21 <= param_6) {
      *param_7 = local_8;
      return local_c;
    }
  } while( true );
}


/* FUN_004731c0 @ 004731c0  kind=gamemisc  attributed-by=none  size=109 */

void __cdecl FUN_004731c0(int param_1,int param_2,size_t param_3,int *param_4)

{
  int *piVar1;
  
  piVar1 = *(int **)(param_1 + 8);
  if (param_4 != (int *)0x0) {
    for (; (0 < (int)param_3 && ((char)*param_4 == 'b')); param_4 = (int *)((int)param_4 + 1)) {
      param_3 = param_3 - 1;
      param_2 = param_2 + 1;
    }
    for (; (1 < (int)param_3 && (*(char *)((int)param_4 + (param_3 - 1)) == 'b'));
        param_3 = param_3 - 1) {
    }
    if (0 < (int)param_3) {
      FUN_004ae830(piVar1,0x1e,param_2,param_3);
      FUN_004aecc0(piVar1,-1,param_4,param_3);
      FUN_00496d90(param_1,param_2,param_3);
    }
  }
  return;
}


/* FUN_00473660 @ 00473660  kind=gamemisc  attributed-by=none  size=302 */

int __cdecl FUN_00473660(int *param_1,int *param_2,int param_3,int param_4)

{
  char *pcVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  int iVar5;
  int iVar6;
  undefined4 *puVar7;
  
  pcVar1 = (char *)*param_2;
  piVar2 = (int *)param_1[2];
  if (*pcVar1 == 'L') {
    param_4 = FUN_00497780(param_1,*(byte **)(pcVar1 + 0xc),param_4);
  }
  else if (*pcVar1 == 'I') {
    FUN_004ae830(piVar2,10,0,param_4);
  }
  else {
    iVar5 = FUN_004997b0(param_1,pcVar1,(int *)0x0);
    uVar3 = *(undefined4 *)(pcVar1 + 0x18);
    FUN_004ae830(piVar2,0x48,uVar3,0);
    if (*(int *)(param_3 + 0x40) == 0) {
      iVar6 = FUN_004b6b80(piVar2);
      *(int *)(param_3 + 0x28) = iVar6;
    }
    *(int *)(param_3 + 0x40) = *(int *)(param_3 + 0x40) + 1;
    puVar4 = *(undefined4 **)(param_3 + 0x44);
    iVar6 = *param_1;
    puVar7 = FUN_00494cf0(iVar6,puVar4,*(int *)(param_3 + 0x40) << 3);
    if (puVar7 == (undefined4 *)0x0) {
      FUN_00494b00(iVar6,puVar4);
    }
    *(undefined4 **)(param_3 + 0x44) = puVar7;
    if (puVar7 == (undefined4 *)0x0) {
      *(undefined4 *)(param_3 + 0x40) = 0;
    }
    else {
      iVar6 = *(int *)(param_3 + 0x40);
      puVar7[iVar6 * 2 + -2] = uVar3;
      if (iVar5 == 1) {
        iVar5 = FUN_004ae830(piVar2,0x41,uVar3,param_4);
      }
      else {
        iVar5 = FUN_004ae890(piVar2,0x1d,uVar3,0,param_4);
      }
      puVar7[iVar6 * 2 + -1] = iVar5;
      FUN_004ae7d0(piVar2,0x49,param_4);
    }
  }
  FUN_00476c10(param_3,param_2);
  return param_4;
}


/* FUN_004738d0 @ 004738d0  kind=gamemisc  attributed-by=none  size=4528 */

undefined8 __cdecl
FUN_004738d0(undefined4 *param_1,int param_2,ushort param_3,uint param_4,uint param_5)

{
  char cVar1;
  uint uVar2;
  ushort uVar3;
  byte bVar4;
  undefined1 uVar5;
  bool bVar6;
  short sVar7;
  uint uVar8;
  int iVar9;
  int *piVar10;
  int *piVar11;
  byte *pbVar12;
  undefined3 extraout_var;
  undefined3 extraout_var_00;
  uint uVar13;
  uint *puVar14;
  char *pcVar15;
  int iVar16;
  undefined4 *puVar17;
  int *piVar18;
  undefined4 extraout_EDX;
  undefined4 extraout_EDX_00;
  undefined4 *puVar19;
  int *piVar20;
  int iVar21;
  byte *pbVar22;
  uint *puVar23;
  int *piVar24;
  int iVar25;
  uint local_64;
  uint uStack_60;
  byte *local_58;
  uint *local_54;
  int *local_50;
  byte *local_4c;
  uint local_48;
  byte *local_44;
  uint local_40;
  int *local_3c;
  int *local_38;
  int *local_34;
  byte *local_30;
  int *local_2c;
  byte *local_28;
  int *local_24;
  int local_20;
  byte *local_1c;
  uint local_18;
  int *local_14;
  undefined4 *local_10;
  uint *local_c;
  uint local_8;
  
  local_10 = (undefined4 *)param_1[8];
  piVar20 = (int *)*param_1;
  puVar23 = param_1 + param_2 * 0x16 + 0xe;
  piVar10 = (int *)piVar20[2];
  local_20 = 0;
  iVar25 = param_1[1] + (uint)(byte)puVar23[0xd] * 0x48;
  local_2c = (int *)(iVar25 + 8);
  local_8 = *(uint *)(iVar25 + 0x34);
  local_18 = *puVar23 >> 0x18 & 1;
  if (((*puVar23 & 0x400000) == 0) || (local_54 = (uint *)0x1, (param_3 & 0x20) != 0)) {
    local_54 = (uint *)0x0;
  }
  local_3c = piVar20;
  local_14 = piVar10;
  local_c = puVar23;
  local_28 = (byte *)FUN_004b6b80(piVar10);
  puVar23[10] = (uint)local_28;
  puVar23[9] = (uint)local_28;
  local_48 = FUN_004b6b80(piVar10);
  puVar23[0xb] = local_48;
  if (((char)puVar23[0xd] != '\0') && ((*(byte *)(local_2c + 8) & 8) != 0)) {
    uVar8 = piVar20[0x13] + 1;
    piVar20[0x13] = uVar8;
    puVar23[6] = uVar8;
    FUN_004ae830(piVar10,7,0,uVar8);
  }
  piVar18 = local_14;
  if ((*(byte *)(local_2c + 9) & 4) == 0) {
    uVar8 = *puVar23;
    if ((uVar8 & 0x8000000) == 0) {
      if ((uVar8 & 0x1000) == 0) {
        if ((uVar8 & 0x2000) == 0) {
          if ((uVar8 & 0x30000) == 0) {
            if ((uVar8 & 0x10000000) != 0) {
              local_18 = piVar20[0x12];
              piVar20[0x13] = piVar20[0x13] + 1;
              piVar20[0x12] = local_18 + 1;
              local_40 = piVar20[0x13];
              local_34 = (int *)0x0;
              local_1c = (byte *)0x0;
              local_4c = (byte *)0x0;
              local_58 = (byte *)FUN_004b6b80(piVar10);
              piVar18 = (int *)puVar23[4];
              local_38 = (int *)piVar18[3];
              local_28 = (byte *)0x0;
              *(undefined1 *)((int)puVar23 + 0x35) = 3;
              puVar23[0xe] = local_40;
              local_30 = (byte *)0x0;
              if ((int)param_1[7] < 2) {
                local_24 = (int *)param_1[1];
                puVar14 = local_54;
              }
              else {
                local_54 = (uint *)((param_1[7] - param_2) + -1);
                local_24 = FUN_00494b90(*piVar20,(int)local_54 * 0x48 + 0x50);
                if (local_24 == (int *)0x0) {
                  return CONCAT44(param_5,param_4);
                }
                sVar7 = (short)local_54 + 1;
                *(short *)((int)local_24 + 2) = sVar7;
                *(short *)local_24 = sVar7;
                piVar10 = local_2c;
                piVar11 = local_24 + 2;
                for (iVar25 = 0x12; iVar25 != 0; iVar25 = iVar25 + -1) {
                  *piVar11 = *piVar10;
                  piVar10 = piVar10 + 1;
                  piVar11 = piVar11 + 1;
                }
                local_50 = (int *)(param_1[1] + 8);
                puVar23 = local_c;
                piVar10 = local_14;
                puVar14 = local_54;
                if (0 < (int)local_54) {
                  puVar14 = local_c + 0x23;
                  piVar11 = local_24 + 0x14;
                  do {
                    uVar8 = *puVar14;
                    puVar14 = puVar14 + 0x16;
                    piVar20 = local_50 + (uint)(byte)uVar8 * 0x12;
                    piVar24 = piVar11;
                    for (iVar25 = 0x12; iVar25 != 0; iVar25 = iVar25 + -1) {
                      *piVar24 = *piVar20;
                      piVar20 = piVar20 + 1;
                      piVar24 = piVar24 + 1;
                    }
                    local_54 = (uint *)((int)local_54 + -1);
                    piVar11 = piVar11 + 0x12;
                    piVar20 = local_3c;
                  } while (local_54 != (uint *)0x0);
                }
              }
              local_54 = puVar14;
              uVar3 = param_3 & 8;
              param_3 = param_3 & 8;
              if (uVar3 == 0) {
                local_1c = (byte *)(piVar20[0x13] + 1);
                local_4c = (byte *)(piVar20[0x13] + 2);
                piVar20[0x13] = (int)local_4c;
                FUN_004ae830(piVar10,10,0,local_1c);
              }
              uVar8 = FUN_004ae830(piVar10,7,0,local_40);
              pbVar22 = (byte *)0x0;
              pbVar12 = local_28;
              if (1 < (int)local_10[6]) {
                local_54 = (uint *)0x0;
                if ((int)local_10[6] < 1) {
                  pbVar22 = (byte *)0x0;
                }
                else {
                  local_50 = (int *)0x0;
                  pbVar22 = (byte *)0x0;
                  do {
                    iVar25 = local_10[8];
                    local_44 = *(byte **)((int)local_50 + iVar25);
                    if ((((local_44[2] & 1) == 0) &&
                        ((*(byte *)((int)local_50 + iVar25 + 0x12) & 0x12) == 0)) &&
                       ((*(ushort *)((int)local_50 + iVar25 + 0x10) & 0xfff) != 0)) {
                      pcVar15 = (char *)FUN_00478bb0(*piVar20,(undefined4 *)local_44,0,(int *)0x0);
                      pbVar22 = (byte *)FUN_004966d0(*piVar20,(char *)pbVar22,pcVar15);
                    }
                    puVar23 = local_c;
                    piVar10 = local_14;
                    local_54 = (uint *)((int)local_54 + 1);
                    local_50 = local_50 + 10;
                  } while ((int)local_54 < (int)local_10[6]);
                  pbVar12 = pbVar22;
                  if (pbVar22 != (byte *)0x0) {
                    local_28 = pbVar22;
                    local_44 = (byte *)FUN_00494b90(*piVar20,0x2c);
                    if (local_44 != (byte *)0x0) {
                      memset(local_44,0,0x2c);
                      *local_44 = 0x45;
                      local_44[0x1e] = 0xff;
                      local_44[0x1f] = 0xff;
                      local_44[0x14] = 1;
                      local_44[0x15] = 0;
                      local_44[0x16] = 0;
                      local_44[0x17] = 0;
                    }
                    FUN_00496a30(*piVar20,(int)local_44,(undefined4 *)0x0,(undefined4 *)local_28);
                    pbVar22 = local_44;
                    pbVar12 = local_44;
                    if ((local_44 != (byte *)0x0) &&
                       (pbVar12 = local_44, *(int *)(*piVar20 + 0x5c) < *(int *)(local_44 + 0x14)))
                    {
                      FUN_004962b0(piVar20,(byte *)"Expression tree is too large (maximum depth %d)"
                                  );
                      pbVar22 = local_44;
                      pbVar12 = local_44;
                    }
                  }
                }
              }
              local_28 = pbVar12;
              local_3c = (int *)0x0;
              if (0 < local_38[6]) {
                do {
                  piVar10 = local_14;
                  iVar25 = local_38[8];
                  if ((*(uint *)(iVar25 + 8 + (int)local_3c * 0x28) == local_8) ||
                     (puVar23 = local_c, *(short *)(iVar25 + 0x10 + (int)local_3c * 0x28) == 0x200))
                  {
                    pbVar12 = *(byte **)(iVar25 + (int)local_3c * 0x28);
                    if (pbVar22 != (byte *)0x0) {
                      *(byte **)(pbVar22 + 8) = pbVar12;
                      pbVar12 = pbVar22;
                    }
                    local_54 = FUN_004bb240(piVar20,(short *)local_24,pbVar12,(undefined2 *)0x0,
                                            (int *)0x0,0xf0,local_18);
                    if (local_54 != (uint *)0x0) {
                      FUN_004778d0(piVar20,(int)local_24,local_54 + 0xe,param_2,
                                   (uint)(byte)puVar23[0xd],0);
                      if (param_3 == 0) {
                        piVar11 = local_3c;
                        if (local_3c == (int *)(local_38[6] + -1)) {
                          piVar11 = (int *)0xffffffff;
                        }
                        iVar25 = FUN_004970c0(piVar20,(int *)local_2c[4],-1,local_8,(int)local_4c,
                                              '\0');
                        FUN_004ae960(piVar10,0x72,local_1c,piVar10[7] + 2,iVar25,piVar11);
                        puVar23 = local_c;
                      }
                      FUN_004ae830(piVar10,2,local_40,local_58);
                      if (*(byte *)((int)local_54 + 0xd) != 0) {
                        local_30 = (byte *)0x1;
                      }
                      if ((((local_54[0xe] & 0xf0000) == 0) || ((local_54[0xe] & 0x20000000) != 0))
                         || ((local_3c != (int *)0x0 && ((int *)local_54[0x12] != local_34)))) {
                        local_34 = (int *)0x0;
                      }
                      else {
                        local_34 = (int *)local_54[0x12];
                      }
                      FUN_004bbe40((int *)local_54);
                    }
                  }
                  local_3c = (int *)((int)local_3c + 1);
                  pbVar22 = local_28;
                } while ((int)local_3c < local_38[6]);
              }
              puVar23[0x10] = (uint)local_34;
              if (local_34 != (int *)0x0) {
                puVar23[8] = local_18;
              }
              if (local_28 != (byte *)0x0) {
                local_28[8] = 0;
                local_28[9] = 0;
                local_28[10] = 0;
                local_28[0xb] = 0;
                FUN_00498790(*piVar20,(undefined4 *)local_28);
              }
              if (uVar8 < (uint)piVar10[7]) {
                *(int *)(piVar10[1] + 4 + uVar8 * 0x14) = piVar10[7];
              }
              FUN_004ae830(piVar10,1,0,puVar23[9]);
              if (piVar10[10] != 0) {
                *(int *)(piVar10[10] - ((int)local_58 * 4 + 4)) = piVar10[7];
              }
              if (1 < (int)param_1[7]) {
                FUN_00494b00(*piVar20,local_24);
              }
              uVar8 = local_8;
              if (local_30 == (byte *)0x0) {
                FUN_00476c10((int)puVar23,piVar18);
                uVar8 = local_8;
              }
              goto LAB_004743ea;
            }
            *(undefined *)((int)puVar23 + 0x35) = (&DAT_00569fa4)[local_18];
            puVar23[0xe] = local_8;
            iVar25 = FUN_004ae830(piVar10,(&DAT_0056a01c)[local_18],local_8,local_28);
            puVar23[0xf] = iVar25 + 1;
          }
          else {
            pbVar22 = (byte *)(uint)(ushort)puVar23[1];
            local_30 = (byte *)puVar23[4];
            local_2c = (int *)puVar23[8];
            local_4c = (byte *)0x0;
            local_28 = (byte *)0x0;
            local_1c = (byte *)0x0;
            local_44 = (byte *)0x0;
            if (pbVar22 == *(byte **)((int)local_30 + 0x24)) {
              local_3c = (int *)0xffffffff;
            }
            else {
              local_3c = *(int **)(*(int *)((int)local_30 + 4) + (int)pbVar22 * 4);
            }
            if ((((param_3 & 1) != 0) && ((uVar8 & 0x800000) != 0)) &&
               ((int)pbVar22 < *(int *)((int)local_30 + 0x24))) {
              local_4c = (byte *)0x1;
              local_44 = (byte *)0x1;
            }
            pbVar12 = local_44;
            if ((uVar8 & 0x100000) != 0) {
              local_1c = (byte *)FUN_00479c50(local_10,local_8,(int)local_3c,param_4,param_5,0x18,
                                              (int)local_30);
              pbVar12 = (byte *)1;
            }
            if ((*puVar23 & 0x200000) != 0) {
              local_28 = (byte *)FUN_00479c50(local_10,local_8,(int)local_3c,param_4,param_5,0x24,
                                              (int)local_30);
              pbVar12 = (byte *)0x1;
            }
            local_24 = (int *)FUN_00472ef0(piVar20,puVar23,local_10,param_4,param_5,(int)pbVar12,
                                           &local_34);
            local_38 = FUN_00494db0(*piVar20,(char *)local_34);
            pbVar12 = local_1c;
            local_3c = (int *)puVar23[10];
            local_58 = *(byte **)((int)local_30 + 0x24);
            if ((((int)pbVar22 < (int)local_58) &&
                (local_18 == (pbVar22[*(int *)((int)local_30 + 0x1c)] == 0))) ||
               ((local_18 != 0 && (local_58 == pbVar22)))) {
              local_1c = local_28;
              local_28 = pbVar12;
            }
            if ((local_28 == (byte *)0x0) || (local_44 = (byte *)0x0, (local_28[0x10] & 0x28) != 0))
            {
              local_44 = (byte *)0x1;
            }
            if ((local_1c == (byte *)0x0) || (local_50 = (int *)0x0, (local_1c[0x10] & 0x28) != 0))
            {
              local_50 = (int *)0x1;
            }
            if ((local_28 != (byte *)0x0) || (local_40 = 0, pbVar22 != (byte *)0x0)) {
              local_40 = 1;
            }
            if (local_28 == (byte *)0x0) {
              local_30 = pbVar22;
              if (local_4c != (byte *)0x0) {
                FUN_004ae830(piVar18,10,0,pbVar22 + (int)local_24);
                local_44 = (byte *)0x0;
                local_40 = 1;
                goto LAB_004741e9;
              }
            }
            else {
              pbVar12 = (byte *)((int)local_24 + (int)pbVar22);
              local_30 = *(byte **)(*(int *)local_28 + 0xc);
              FUN_00496f30(piVar20,local_30,(int)pbVar12);
              FUN_004975c0(piVar18,local_30,pbVar12,local_3c);
              puVar23 = local_c;
              if (local_34 != (int *)0x0) {
                pbVar12 = pbVar22 + (int)local_34;
                iVar25 = FUN_00493750((char *)local_30,*pbVar12);
                if ((char)iVar25 == 'b') {
                  *pbVar12 = 0x62;
                }
                bVar6 = FUN_004993e0((char *)local_30,*pbVar12);
                puVar23 = local_c;
                if (CONCAT31(extraout_var,bVar6) != 0) {
                  *pbVar12 = 0x62;
                }
              }
LAB_004741e9:
              local_30 = pbVar22 + 1;
            }
            FUN_004731c0((int)piVar20,(int)local_24,(size_t)local_30,local_34);
            FUN_004ae960(piVar18,(&UNK_00569bdc)[((int)local_44 + local_40 * 2) * 2 + local_18],
                         local_2c,local_3c,local_24,(int *)local_30);
            local_4c = pbVar22;
            if (local_1c != (byte *)0x0) {
              pbVar12 = (byte *)((int)local_24 + (int)pbVar22);
              local_30 = *(byte **)(*(int *)local_1c + 0xc);
              FUN_00496d90((int)piVar20,(int)pbVar12,1);
              FUN_00496f30(piVar20,local_30,(int)pbVar12);
              FUN_004975c0(piVar18,local_30,pbVar12,local_3c);
              if (local_38 != (int *)0x0) {
                pbVar12 = (byte *)((int)local_38 + (int)pbVar22);
                iVar25 = FUN_00493750((char *)local_30,*pbVar12);
                if ((char)iVar25 == 'b') {
                  *pbVar12 = 0x62;
                }
                bVar6 = FUN_004993e0((char *)local_30,*pbVar12);
                if (CONCAT31(extraout_var_00,bVar6) != 0) {
                  *pbVar12 = 0x62;
                }
              }
              local_4c = pbVar22 + 1;
              FUN_004731c0((int)piVar20,(int)local_24,(size_t)local_4c,local_38);
              puVar23 = local_c;
            }
            FUN_00494b00(*piVar20,local_34);
            FUN_00494b00(*piVar20,local_38);
            puVar23[0xf] = piVar18[7];
            if ((local_1c == (byte *)0x0) && (pbVar22 == (byte *)0x0)) {
              iVar25 = 0;
            }
            else {
              iVar25 = 1;
            }
            if ((&DAT_00569be4)[(local_18 + 1) * iVar25] != -0x6b) {
              FUN_004ae960(piVar18,(&DAT_00569be4)[(local_18 + 1) * iVar25],local_2c,local_3c,
                           local_24,(int *)local_4c);
              FUN_004aee30((int)piVar18,local_50 != (int *)local_18);
            }
            local_50 = (int *)FUN_0049cb40((int)piVar20);
            if ((*puVar23 & 0x300000) != 0) {
              FUN_004ae890(piVar18,0x1d,local_2c,pbVar22,local_50);
              FUN_004ae830(piVar18,0x49,local_50,local_48);
            }
            FUN_004a68f0((int)piVar20,(int)local_50);
            FUN_00476c10((int)puVar23,(int *)local_28);
            FUN_00476c10((int)puVar23,(int *)local_1c);
            if (local_54 == (uint *)0x0) {
              local_20 = FUN_0049cb40((int)piVar20);
              FUN_004ae830(piVar18,99,local_2c,local_20);
              FUN_00496df0(piVar20,local_8,-1,local_20);
              FUN_004ae830(piVar18,0x32,extraout_EDX_00,local_20);
            }
            if ((*puVar23 & 0x2000000) == 0) {
              uVar5 = 0x5f;
              if (local_18 != 0) {
                uVar5 = 0x5c;
              }
              *(undefined1 *)((int)puVar23 + 0x35) = uVar5;
            }
            else {
              *(undefined1 *)((int)puVar23 + 0x35) = 0x95;
            }
            puVar23[0xe] = (uint)local_2c;
            uVar8 = local_8;
            piVar10 = piVar18;
            if (-1 < (int)*puVar23) goto LAB_004743ea;
          }
          *(undefined1 *)((int)puVar23 + 0x36) = 1;
          uVar8 = local_8;
        }
        else {
          local_3c = (int *)0x95;
          local_44 = (byte *)0x0;
          piVar11 = FUN_00479c50(local_10,local_8,-1,param_4,param_5,0x24,0);
          local_24 = FUN_00479c50(local_10,local_8,-1,param_4,param_5,0x18,0);
          piVar18 = piVar11;
          if (local_18 != 0) {
            piVar18 = local_24;
            local_24 = piVar11;
          }
          if (piVar18 == (int *)0x0) {
            uVar5 = 0x48;
            if (local_18 != 0) {
              uVar5 = 0x43;
            }
            FUN_004ae830(piVar10,uVar5,local_8,local_28);
          }
          else {
            pbVar22 = (byte *)*piVar18;
            local_2c = (int *)0x302e2f31;
            iVar25 = FUN_00498470((int)piVar20,*(undefined4 *)(pbVar22 + 0xc),(int *)&local_58);
            piVar10 = local_14;
            FUN_004ae890(local_14,(&stack0xffffff87)[*pbVar22],local_8,local_28,iVar25);
            FUN_00496d90((int)piVar20,iVar25,1);
            FUN_004a68f0((int)piVar20,(int)local_58);
            puVar23 = local_c;
            FUN_00476c10((int)local_c,piVar18);
          }
          if (local_24 != (int *)0x0) {
            pcVar15 = (char *)*local_24;
            piVar20[0x13] = piVar20[0x13] + 1;
            local_44 = (byte *)piVar20[0x13];
            FUN_00496f30(piVar20,*(byte **)(pcVar15 + 0xc),(int)local_44);
            puVar23 = local_c;
            cVar1 = *pcVar15;
            if ((cVar1 == 'O') || (cVar1 == 'M')) {
              local_3c = (int *)((uint)(local_18 == 0) * 2 + 0x4e);
            }
            else {
              local_3c = (int *)((uint)(local_18 != 0) * 2 + 0x4d);
            }
            FUN_00476c10((int)local_c,local_24);
          }
          piVar11 = local_3c;
          uVar8 = piVar10[7];
          local_58 = (byte *)0x5c;
          uVar5 = 0x5f;
          if (local_18 != 0) {
            uVar5 = 0x5c;
          }
          *(undefined1 *)((int)puVar23 + 0x35) = uVar5;
          puVar23[0xe] = local_8;
          puVar23[0xf] = uVar8;
          if ((piVar18 == (int *)0x0) && (local_24 == (int *)0x0)) {
            *(undefined1 *)((int)puVar23 + 0x36) = 1;
          }
          uVar8 = local_8;
          if (local_3c != (int *)0x95) {
            local_20 = FUN_0049cb40((int)piVar20);
            FUN_004ae830(piVar10,0x41,local_8,local_20);
            FUN_00496df0(piVar20,local_8,-1,local_20);
            FUN_004ae890(piVar10,(char)piVar11,local_44,local_28,extraout_EDX);
            uVar8 = local_8;
            if (piVar10[1] != 0) {
              *(undefined1 *)(piVar10[1] + -0x11 + piVar10[7] * 0x14) = 0x6b;
            }
          }
        }
      }
      else {
        if (*(char *)((int)piVar20 + 0x13) == '\0') {
          piVar20[0x13] = piVar20[0x13] + 1;
          iVar25 = piVar20[0x13];
        }
        else {
          bVar4 = *(char *)((int)piVar20 + 0x13) - 1;
          *(byte *)((int)piVar20 + 0x13) = bVar4;
          iVar25 = piVar20[bVar4 + 7];
        }
        local_20 = iVar25;
        piVar10 = FUN_00479c50(local_10,local_8,-1,param_4,param_5,3,0);
        iVar25 = FUN_00473660(piVar20,piVar10,(int)puVar23,iVar25);
        uVar2 = puVar23[10];
        FUN_004ae830(local_14,0x15,iVar25,uVar2);
        uVar8 = local_8;
        FUN_004ae890(local_14,0x36,local_8,uVar2,iVar25);
        FUN_00496df0(piVar20,uVar8,-1,iVar25);
        *(undefined1 *)((int)local_c + 0x35) = 0x95;
        piVar10 = local_14;
      }
    }
    else {
      local_34 = (int *)puVar23[4];
      iVar16 = *local_34;
      pbVar22 = (byte *)local_34[4];
      local_44 = (byte *)local_34[1];
      piVar20[0x17] = piVar20[0x17] + 1;
      local_40 = iVar16 + 2;
      iVar25 = piVar20[0x10];
      if (piVar20[0xf] < (int)local_40) {
        iVar25 = piVar20[0x13] + 1;
        piVar20[0x13] = piVar20[0x13] + local_40;
      }
      else {
        piVar20[0xf] = piVar20[0xf] - local_40;
        piVar20[0x10] = iVar25 + local_40;
      }
      local_18 = 1;
      local_1c = pbVar22;
      if (0 < iVar16) {
        do {
          iVar21 = 0;
          if (0 < iVar16) {
            do {
              if (*(uint *)(pbVar22 + iVar21 * 8) == local_18) {
                local_38 = (int *)(iVar25 + local_18 + 1);
                pbVar22 = *(byte **)(*(int *)(local_10[8] +
                                             *(int *)((int)local_44 + 8 + iVar21 * 0xc) * 0x28) +
                                    0xc);
                if ((pbVar22 == (byte *)0x0) || (*pbVar22 != 0x84)) {
                  local_50 = (int *)FUN_00497780(piVar20,pbVar22,(int)local_38);
                  pbVar22 = local_1c;
                  if (((local_50 == local_38) ||
                      (local_58 = (byte *)piVar20[2], local_58 == (byte *)0x0)) ||
                     ((local_54 = *(uint **)(local_58 + 0x1c),
                      *(int *)(local_58 + 0x20) <= (int)local_54 &&
                      (iVar9 = FUN_0047de10((int *)local_58), pbVar22 = local_1c, iVar9 != 0))))
                  break;
                  *(int *)(local_58 + 0x1c) = *(int *)(local_58 + 0x1c) + 1;
                  iVar9 = *(int *)(local_58 + 4);
                  *(int **)(iVar9 + 4 + (int)local_54 * 0x14) = local_50;
                  *(undefined2 *)(iVar9 + (int)local_54 * 0x14) = 0xf;
                }
                else {
                  local_50 = *(int **)(pbVar22 + 0x18);
                  local_58 = (byte *)piVar20[2];
                  local_54 = *(uint **)(local_58 + 0x1c);
                  if ((*(int *)(local_58 + 0x20) <= (int)local_54) &&
                     (iVar9 = FUN_0047de10((int *)local_58), pbVar22 = local_1c, iVar9 != 0)) break;
                  *(int *)(local_58 + 0x1c) = *(int *)(local_58 + 0x1c) + 1;
                  iVar9 = *(int *)(local_58 + 4);
                  *(int **)(iVar9 + 4 + (int)local_54 * 0x14) = local_50;
                  *(undefined2 *)(iVar9 + (int)local_54 * 0x14) = 0xe;
                  piVar20 = local_3c;
                }
                *(undefined4 *)(iVar9 + 0x10 + (int)local_54 * 0x14) = 0;
                *(undefined4 *)(iVar9 + 0xc + (int)local_54 * 0x14) = 0;
                *(int **)(iVar9 + 8 + (int)local_54 * 0x14) = local_38;
                *(undefined1 *)(iVar9 + 3 + (int)local_54 * 0x14) = 0;
                pbVar22 = local_1c;
                break;
              }
              iVar21 = iVar21 + 1;
            } while (iVar21 < iVar16);
          }
        } while ((iVar21 != iVar16) && (local_18 = local_18 + 1, (int)local_18 <= iVar16));
      }
      piVar10 = local_14;
      local_54 = (uint *)local_34[5];
      local_58 = (byte *)local_14[7];
      if (((int)local_58 < local_14[8]) || (iVar21 = FUN_0047de10(local_14), iVar21 == 0)) {
        piVar10[7] = piVar10[7] + 1;
        iVar21 = piVar10[1];
        *(uint **)(iVar21 + 4 + (int)local_58 * 0x14) = local_54;
        *(undefined2 *)(iVar21 + (int)local_58 * 0x14) = 7;
        *(undefined1 *)(iVar21 + 3 + (int)local_58 * 0x14) = 0;
        *(int *)(iVar21 + 8 + (int)local_58 * 0x14) = iVar25;
        *(undefined4 *)(iVar21 + 0xc + (int)local_58 * 0x14) = 0;
        *(undefined4 *)(iVar21 + 0x10 + (int)local_58 * 0x14) = 0;
      }
      local_58 = (byte *)piVar10[7];
      if (((int)local_58 < piVar10[8]) || (iVar21 = FUN_0047de10(piVar10), iVar21 == 0)) {
        piVar10[7] = piVar10[7] + 1;
        iVar21 = piVar10[1];
        *(undefined2 *)(iVar21 + (int)local_58 * 0x14) = 7;
        iVar21 = iVar21 + (int)local_58 * 0x14;
        *(uint *)(iVar21 + 4) = local_18 - 1;
        *(undefined1 *)(iVar21 + 3) = 0;
        *(int *)(iVar21 + 8) = iVar25 + 1;
        *(undefined4 *)(iVar21 + 0xc) = 0;
        *(undefined4 *)(iVar21 + 0x10) = 0;
      }
      local_54 = (uint *)0xfffffffe;
      if (local_34[7] != 0) {
        local_54 = (uint *)0xfffffff5;
      }
      local_58 = (byte *)piVar10[7];
      local_50 = (int *)local_34[6];
      if (((int)local_58 < piVar10[8]) || (iVar21 = FUN_0047de10(piVar10), iVar21 == 0)) {
        iVar21 = piVar10[1];
        piVar10[7] = piVar10[7] + 1;
        *(uint *)(iVar21 + 4 + (int)local_58 * 0x14) = local_8;
        *(byte **)(iVar21 + 8 + (int)local_58 * 0x14) = local_28;
        *(int *)(iVar21 + 0xc + (int)local_58 * 0x14) = iVar25;
        *(undefined2 *)(iVar21 + (int)local_58 * 0x14) = 0x88;
        *(undefined1 *)(iVar21 + 3 + (int)local_58 * 0x14) = 0;
        *(undefined4 *)(iVar21 + 0x10 + (int)local_58 * 0x14) = 0;
        pbVar22 = local_58;
        piVar20 = local_3c;
      }
      else {
        pbVar22 = (byte *)0x1;
      }
      FUN_004aecc0(piVar10,(int)pbVar22,local_50,(size_t)local_54);
      puVar23 = local_c;
      local_34[7] = 0;
      if (0 < iVar16) {
        local_44 = (byte *)((int)local_44 + 8);
        pbVar22 = local_1c + 4;
        do {
          if (*pbVar22 != 0) {
            FUN_00476c10((int)puVar23,(int *)(local_10[8] + *(int *)local_44 * 0x28));
          }
          local_44 = (byte *)((int)local_44 + 0xc);
          pbVar22 = pbVar22 + 8;
          iVar16 = iVar16 + -1;
          piVar20 = local_3c;
        } while (iVar16 != 0);
      }
      local_c[0xe] = local_8;
      *(undefined1 *)((int)local_c + 0x35) = 0x8a;
      local_c[0xf] = local_14[7];
      piVar10 = piVar20 + 0x1d;
      iVar16 = 10;
      do {
        iVar21 = *piVar10;
        if ((iVar25 <= iVar21) && (iVar21 <= (int)(iVar25 + (local_40 - 1)))) {
          if ((char)piVar10[-2] != '\0') {
            if (*(byte *)((int)piVar20 + 0x13) < 8) {
              piVar20[*(byte *)((int)piVar20 + 0x13) + 7] = iVar21;
              *(char *)((int)piVar20 + 0x13) = *(char *)((int)piVar20 + 0x13) + '\x01';
            }
            *(undefined1 *)(piVar10 + -2) = 0;
          }
          *piVar10 = 0;
        }
        piVar10 = piVar10 + 6;
        iVar16 = iVar16 + -1;
      } while (iVar16 != 0);
      if (piVar20[0xf] < (int)local_40) {
        piVar20[0xf] = local_40;
        piVar20[0x10] = iVar25;
      }
      piVar20[0x17] = piVar20[0x17] + -1;
      piVar18 = piVar20 + 0x1d;
      iVar25 = 10;
      do {
        if ((*piVar18 != 0) && (piVar20[0x17] < piVar18[-1])) {
          if ((char)piVar18[-2] != '\0') {
            if (*(byte *)((int)piVar20 + 0x13) < 8) {
              piVar20[*(byte *)((int)piVar20 + 0x13) + 7] = *piVar18;
              *(char *)((int)piVar20 + 0x13) = *(char *)((int)piVar20 + 0x13) + '\x01';
            }
            *(undefined1 *)(piVar18 + -2) = 0;
          }
          *piVar18 = 0;
        }
        piVar18 = piVar18 + 6;
        iVar25 = iVar25 + -1;
        uVar8 = local_8;
        piVar10 = local_14;
      } while (iVar25 != 0);
    }
  }
  else {
    iVar25 = local_2c[7];
    FUN_004ae830(piVar10,7,local_2c[6] + -1,iVar25);
    uVar8 = FUN_004ae7d0(piVar10,4,iVar25);
    local_c[0xf] = uVar8;
    FUN_004ae830(piVar10,0x1b,iVar25 + 1,local_28);
    *(undefined1 *)((int)local_c + 0x35) = 1;
    uVar8 = local_8;
  }
LAB_004743ea:
  puVar14 = local_c;
  puVar23 = (uint *)local_10[1];
  uVar13 = 0;
  uVar2 = *puVar23;
  if (0 < (int)uVar2) {
    do {
      puVar23 = puVar23 + 1;
      if (*puVar23 == uVar8) {
        local_64 = 1 << (uVar13 & 0x1f);
        uStack_60 = 0;
        if (0x1f < uVar13) {
          uStack_60 = local_64;
        }
        local_64 = local_64 ^ uStack_60;
        if (0x3f < uVar13) {
          uStack_60 = local_64;
        }
        goto LAB_0047441e;
      }
      uVar13 = uVar13 + 1;
    } while ((int)uVar13 < (int)uVar2);
  }
  uStack_60 = 0;
  local_64 = 0;
LAB_0047441e:
  uVar8 = param_4 & ~local_64;
  local_44 = (byte *)(param_5 & ~uStack_60);
  puVar17 = (undefined4 *)local_10[8];
  for (local_58 = (byte *)local_10[6]; 0 < (int)local_58; local_58 = local_58 + -1) {
    if ((*(byte *)((int)puVar17 + 0x12) & 6) == 0) {
      if ((puVar17[8] & uVar8) == 0 && (puVar17[9] & (uint)local_44) == 0) {
        if ((puVar14[6] == 0) || ((((char *)*puVar17)[2] & 1U) != 0)) {
          FUN_004988a0(piVar20,(char *)*puVar17,local_48,8);
          *(byte *)((int)puVar17 + 0x12) = *(byte *)((int)puVar17 + 0x12) | 4;
        }
      }
      else {
        *(undefined1 *)((int)param_1 + 0xd) = 1;
      }
    }
    puVar17 = puVar17 + 10;
    piVar10 = local_14;
  }
  uVar2 = local_c[6];
  if (uVar2 == 0) goto LAB_00474a36;
  local_c[0xc] = piVar10[7];
  iVar25 = piVar10[7];
  iVar16 = piVar10[8];
  if (iVar25 < iVar16) {
LAB_004749b7:
    iVar16 = piVar10[1];
    piVar10[7] = piVar10[7] + 1;
    *(undefined2 *)(iVar16 + iVar25 * 0x14) = 7;
    *(undefined1 *)(iVar16 + 3 + iVar25 * 0x14) = 0;
    *(undefined4 *)(iVar16 + 4 + iVar25 * 0x14) = 1;
    *(uint *)(iVar16 + 8 + iVar25 * 0x14) = uVar2;
    *(undefined4 *)(iVar16 + 0xc + iVar25 * 0x14) = 0;
    *(undefined4 *)(iVar16 + 0x10 + iVar25 * 0x14) = 0;
  }
  else {
    if (iVar16 == 0) {
      iVar16 = 0x33;
    }
    else {
      iVar16 = iVar16 * 2;
    }
    puVar17 = FUN_00494cf0(*piVar10,(undefined4 *)piVar10[1],iVar16 * 0x14);
    if (puVar17 != (undefined4 *)0x0) {
      iVar16 = *piVar10;
      if (((iVar16 == 0) || (puVar17 < *(undefined4 **)(iVar16 + 0x104))) ||
         (*(undefined4 **)(iVar16 + 0x108) <= puVar17)) {
        uVar13 = (*DAT_00582af0._4_4_)();
      }
      else {
        uVar13 = (uint)*(ushort *)(iVar16 + 0xe8);
      }
      piVar10[8] = uVar13 / 0x14;
      piVar10[1] = (int)puVar17;
      goto LAB_004749b7;
    }
  }
  FUN_00496a90((int)piVar20);
  iVar25 = 0;
  puVar17 = (undefined4 *)local_10[8];
  puVar19 = local_10;
  if (0 < (int)local_10[6]) {
    do {
      if (((*(byte *)((int)puVar17 + 0x12) & 6) == 0) &&
         ((puVar17[8] & uVar8) == 0 && (puVar17[9] & (uint)local_44) == 0)) {
        FUN_004988a0(piVar20,(char *)*puVar17,local_48,8);
        *(byte *)((int)puVar17 + 0x12) = *(byte *)((int)puVar17 + 0x12) | 4;
        puVar19 = local_10;
      }
      iVar25 = iVar25 + 1;
      puVar17 = puVar17 + 10;
    } while (iVar25 < (int)puVar19[6]);
  }
LAB_00474a36:
  if ((local_20 != 0) && (*(byte *)((int)piVar20 + 0x13) < 8)) {
    iVar25 = 0;
    piVar10 = piVar20 + 0x19;
    while (piVar10[4] != local_20) {
      iVar25 = iVar25 + 1;
      piVar10 = piVar10 + 6;
      if (9 < iVar25) {
        piVar20[*(byte *)((int)piVar20 + 0x13) + 7] = local_20;
        *(char *)((int)piVar20 + 0x13) = *(char *)((int)piVar20 + 0x13) + '\x01';
        return CONCAT44(local_44,uVar8);
      }
    }
    *(undefined1 *)(piVar10 + 2) = 1;
  }
  return CONCAT44(local_44,uVar8);
}


/* FUN_004752f0 @ 004752f0  kind=gamemisc  attributed-by=none  size=181 */

void __cdecl FUN_004752f0(ulonglong *param_1)

{
  int iVar1;
  double dVar2;
  undefined8 uVar3;
  
  if (*(char *)((int)param_1 + 0x29) == '\0') {
    FUN_004753b0(param_1);
    uVar3 = __allrem((uint)*param_1 + 43200000,
                     *(int *)((int)param_1 + 4) + (uint)(0xfd6cd1ff < (uint)*param_1),86400000,0);
    dVar2 = (double)(int)uVar3 / 1000.0;
    *(undefined1 *)((int)param_1 + 0x29) = 1;
    iVar1 = (int)dVar2;
    *(int *)((int)param_1 + 0x14) = iVar1 / 0xe10;
    dVar2 = dVar2 - (double)iVar1;
    param_1[4] = (ulonglong)dVar2;
    *(int *)(param_1 + 3) = (iVar1 % 0xe10) / 0x3c;
    param_1[4] = (ulonglong)((double)((iVar1 % 0xe10) % 0x3c) + dVar2);
  }
  return;
}


/* FUN_004753b0 @ 004753b0  kind=gamemisc  attributed-by=none  size=319 */

void __cdecl FUN_004753b0(ulonglong *param_1)

{
  uint uVar1;
  uint uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  
  if (*(char *)((int)param_1 + 0x2a) == '\0') {
    uVar3 = FUN_0054a946();
    *param_1 = uVar3;
    *(undefined1 *)((int)param_1 + 0x2a) = 1;
    if (*(char *)((int)param_1 + 0x29) != '\0') {
      uVar1 = ((int)param_1[3] +
              (*(int *)((int)param_1 + 0x14) * 0x10 - *(int *)((int)param_1 + 0x14)) * 4) * 60000;
      uVar4 = FUN_0054a946();
      uVar2 = uVar1 - (uint)uVar4;
      uVar3 = *param_1;
      *(uint *)param_1 = (int)*param_1 + uVar2;
      *(int *)((int)param_1 + 4) =
           *(int *)((int)param_1 + 4) +
           ((((int)uVar1 >> 0x1f) - (int)(uVar4 >> 0x20)) - (uint)(uVar1 < (uint)uVar4)) +
           (uint)CARRY4((uint)uVar3,uVar2);
      if (*(char *)((int)param_1 + 0x2b) != '\0') {
        uVar1 = *(int *)((int)param_1 + 0x1c) * 60000;
        uVar3 = *param_1;
        *(int *)param_1 = (int)*param_1 + *(int *)((int)param_1 + 0x1c) * -60000;
        *(undefined2 *)(param_1 + 5) = 0;
        *(undefined1 *)((int)param_1 + 0x2b) = 0;
        *(int *)((int)param_1 + 4) =
             (*(int *)((int)param_1 + 4) - ((int)uVar1 >> 0x1f)) - (uint)((uint)uVar3 < uVar1);
      }
    }
  }
  return;
}


/* FUN_00475680 @ 00475680  kind=gamemisc  attributed-by=none  size=279 */

void __cdecl FUN_00475680(uint *param_1)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined8 uVar7;
  
  if ((char)param_1[10] == '\0') {
    if (*(char *)((int)param_1 + 0x2a) == '\0') {
      param_1[2] = 2000;
      param_1[3] = 1;
      param_1[4] = 1;
      *(undefined1 *)(param_1 + 10) = 1;
      return;
    }
    uVar7 = __alldiv(*param_1 + 43200000,param_1[1] + (uint)(0xfd6cd1ff < *param_1),86400000,0);
    iVar3 = (int)(((double)(int)uVar7 - 1867216.25) / 36524.25);
    iVar6 = (int)uVar7 + (iVar3 - ((int)(iVar3 + (iVar3 >> 0x1f & 3U)) >> 2)) + 0x5f5;
    iVar5 = (int)(((double)iVar6 - 122.1) / 365.25);
    iVar3 = (iVar5 * 0x8ead) / 100;
    iVar4 = (int)((double)(iVar6 - iVar3) / 30.6001);
    param_1[4] = (iVar6 - (int)((double)iVar4 * 30.6001)) - iVar3;
    uVar1 = iVar4 - 1;
    if (0xd < iVar4) {
      uVar1 = iVar4 - 0xd;
    }
    param_1[3] = uVar1;
    uVar2 = iVar5 - 0x126c;
    if ((int)uVar1 < 3) {
      uVar2 = iVar5 - 0x126b;
    }
    param_1[2] = uVar2;
    *(undefined1 *)(param_1 + 10) = 1;
  }
  return;
}


/* FUN_004757f0 @ 004757f0  kind=gamemisc  attributed-by=none  size=2074 */

void __cdecl
FUN_004757f0(int *param_1,int param_2,uint param_3,uint param_4,uint param_5,uint *param_6)

{
  size_t _Size;
  undefined2 *puVar1;
  int iVar2;
  char cVar3;
  short sVar4;
  int *piVar5;
  char *pcVar6;
  char cVar7;
  byte bVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  int *piVar12;
  undefined4 *puVar13;
  int *piVar14;
  int iVar15;
  char *pcVar16;
  uint uVar17;
  uint uVar18;
  uint uVar19;
  uint uVar20;
  uint uVar21;
  int iVar22;
  int *piVar23;
  bool bVar24;
  char *pcVar25;
  uint uStack_38;
  uint local_2c;
  uint local_28;
  uint local_18;
  int local_10;
  uint local_c;
  
  piVar5 = (int *)param_1[2];
  uVar9 = FUN_00492ce0(param_1);
  iVar22 = *(int *)(param_3 + 0x10);
  piVar12 = *(int **)(param_2 + 0x20);
  piVar14 = piVar12 + *(int *)(param_2 + 0x18) * 10;
  uStack_38 = 0;
  local_10 = 0;
  if (piVar12 < piVar14) {
    iVar11 = *(int *)(param_3 + 0x2c);
    local_18 = 0;
    local_c = 0;
    do {
      if (((piVar12[2] == iVar11) && ((short)piVar12[4] == 2)) &&
         (uStack_38 = local_c, (piVar12[6] & param_4) == 0 && (piVar12[7] & param_5) == 0)) {
        uVar10 = piVar12[3];
        cVar3 = *(char *)(*(int *)(iVar22 + 4) + 0x15 + uVar10 * 0x18);
        cVar7 = FUN_00475250(*piVar12);
        if (cVar7 == 'a') {
          bVar24 = cVar3 == 'a';
LAB_004758b7:
          if (!bVar24) goto LAB_00475905;
        }
        else if (cVar7 != 'b') {
          bVar24 = 'b' < cVar3;
          goto LAB_004758b7;
        }
        uVar17 = 0;
        if ((int)uVar10 < 0x40) {
          uVar17 = 1 << (uVar10 & 0x1f);
          uVar20 = 0;
          if (0x1f < uVar10) {
            uVar20 = uVar17;
          }
          uVar17 = uVar17 ^ uVar20;
          if (0x3f < uVar10) {
            uVar20 = uVar17;
          }
        }
        else {
          uVar20 = 0x80000000;
        }
        if ((uVar17 & local_18) == 0 && (uVar20 & local_c) == 0) {
          local_10 = local_10 + 1;
          local_18 = local_18 | uVar17;
          uStack_38 = local_c | uVar20;
          local_c = uStack_38;
        }
      }
LAB_00475905:
      piVar12 = piVar12 + 10;
    } while (piVar12 < piVar14);
  }
  else {
    local_18 = 0;
  }
  *(short *)(param_6 + 1) = (short)local_10;
  uVar10 = ~local_18 & *(uint *)(param_3 + 0x38);
  uVar17 = (~uStack_38 | 0x80000000) & *(uint *)(param_3 + 0x3c);
  sVar4 = *(short *)(iVar22 + 0x26);
  iVar11 = 0x3f;
  if (sVar4 < 0x3f) {
    iVar11 = (int)sVar4;
  }
  uVar20 = 0;
  if (0 < iVar11) {
    do {
      uVar18 = 1 << (uVar20 & 0x1f);
      uVar19 = 0;
      if (0x1f < uVar20) {
        uVar19 = uVar18;
      }
      uVar18 = uVar18 ^ uVar19;
      if (0x3f < uVar20) {
        uVar19 = uVar18;
      }
      if ((uVar18 & uVar10) != 0 || (uVar19 & uVar17) != 0) {
        local_10 = local_10 + 1;
      }
      uVar20 = uVar20 + 1;
    } while ((int)uVar20 < iVar11);
  }
  if ((*(uint *)(param_3 + 0x3c) & 0x80000000) != 0) {
    local_10 = local_10 + -0x3f + (int)sVar4;
  }
  *param_6 = *param_6 | 0x410002;
  _Size = local_10 * 9 + 0x30;
  piVar12 = FUN_00494b90(*param_1,_Size);
  if (piVar12 == (int *)0x0) {
    return;
  }
  memset(piVar12,0,_Size);
  param_6[4] = (uint)piVar12;
  piVar23 = piVar12 + 0xc;
  piVar12[8] = (int)piVar23;
  piVar12[1] = (int)(piVar23 + local_10);
  piVar12[7] = (int)(piVar23 + local_10 + local_10);
  *piVar12 = (int)"auto-index";
  piVar12[9] = local_10;
  piVar12[3] = iVar22;
  piVar23 = *(int **)(param_2 + 0x20);
  local_28 = 0;
  uVar20 = local_28;
  if (piVar23 < piVar14) {
    local_2c = 0;
    local_28 = 0;
    uVar20 = 0;
    do {
      if (((piVar23[2] == *(int *)(param_3 + 0x2c)) && ((short)piVar23[4] == 2)) &&
         ((piVar23[6] & param_4) == 0 && (piVar23[7] & param_5) == 0)) {
        uVar18 = piVar23[3];
        cVar3 = *(char *)(*(int *)(*(int *)(param_3 + 0x10) + 4) + 0x15 + uVar18 * 0x18);
        iVar15 = *piVar23;
        cVar7 = FUN_00475250(iVar15);
        if (cVar7 == 'a') {
          bVar24 = cVar3 == 'a';
LAB_00475ace:
          if (!bVar24) goto LAB_00475b74;
        }
        else if (cVar7 != 'b') {
          bVar24 = 'b' < cVar3;
          goto LAB_00475ace;
        }
        uVar19 = 0;
        if ((int)uVar18 < 0x40) {
          uVar19 = 1 << (uVar18 & 0x1f);
          uVar21 = 0;
          if (0x1f < uVar18) {
            uVar21 = uVar19;
          }
          uVar19 = uVar19 ^ uVar21;
          if (0x3f < uVar18) {
            uVar21 = uVar19;
          }
        }
        else {
          uVar21 = 0x80000000;
        }
        if ((uVar19 & local_28) == 0 && (uVar21 & local_2c) == 0) {
          local_2c = local_2c | uVar21;
          local_28 = local_28 | uVar19;
          *(uint *)(piVar12[1] + uVar20 * 4) = uVar18;
          pcVar16 = *(char **)(iVar15 + 0xc);
          pcVar6 = *(char **)(iVar15 + 8);
          pcVar25 = pcVar6;
          if ((((*(ushort *)(pcVar6 + 2) & 0x100) == 0) &&
              ((pcVar25 = pcVar16, pcVar16 == (char *)0x0 ||
               ((*(ushort *)(pcVar16 + 2) & 0x100) == 0)))) &&
             (puVar13 = (undefined4 *)FUN_004984d0(param_1,pcVar6), puVar13 != (undefined4 *)0x0)) {
LAB_00475b67:
            pcVar16 = (char *)*puVar13;
          }
          else {
            puVar13 = (undefined4 *)FUN_004984d0(param_1,pcVar25);
            pcVar16 = "BINARY";
            if (puVar13 != (undefined4 *)0x0) goto LAB_00475b67;
          }
          uVar20 = uVar20 + 1;
          *(char **)(piVar12[8] + -4 + uVar20 * 4) = pcVar16;
        }
      }
LAB_00475b74:
      piVar23 = piVar23 + 10;
    } while (piVar23 < piVar14);
  }
  local_28 = uVar20;
  uVar20 = 0;
  if (0 < iVar11) {
    do {
      uVar18 = 1 << (uVar20 & 0x1f);
      uVar19 = 0;
      if (0x1f < uVar20) {
        uVar19 = uVar18;
      }
      uVar18 = uVar18 ^ uVar19;
      if (0x3f < uVar20) {
        uVar19 = uVar18;
      }
      if ((uVar18 & uVar10) != 0 || (uVar19 & uVar17) != 0) {
        local_28 = local_28 + 1;
        *(uint *)(piVar12[1] + -4 + local_28 * 4) = uVar20;
        *(char **)(piVar12[8] + -4 + local_28 * 4) = "BINARY";
      }
      uVar20 = uVar20 + 1;
    } while ((int)uVar20 < iVar11);
  }
  if (((*(uint *)(param_3 + 0x3c) & 0x80000000) != 0) &&
     (iVar11 = 0x3f, 0x3f < *(short *)(iVar22 + 0x26))) {
    iVar15 = local_28 << 2;
    do {
      *(int *)(iVar15 + piVar12[1]) = iVar11;
      iVar11 = iVar11 + 1;
      *(char **)(iVar15 + piVar12[8]) = "BINARY";
      iVar15 = iVar15 + 4;
    } while (iVar11 < *(short *)(iVar22 + 0x26));
  }
  piVar14 = FUN_0049dbf0(param_1,(int)piVar12);
  iVar22 = piVar5[7];
  iVar11 = piVar5[8];
  uVar10 = param_6[8];
  if (iVar22 < iVar11) {
LAB_00475caa:
    piVar5[7] = piVar5[7] + 1;
    puVar1 = (undefined2 *)(piVar5[1] + iVar22 * 0x14);
    *(uint *)(puVar1 + 2) = uVar10;
    *puVar1 = 0x29;
    *(undefined1 *)((int)puVar1 + 3) = 0;
    *(int *)(puVar1 + 4) = local_10 + 1;
    *(undefined4 *)(puVar1 + 6) = 0;
    *(undefined4 *)(puVar1 + 8) = 0;
  }
  else {
    if (iVar11 == 0) {
      iVar11 = 0x33;
    }
    else {
      iVar11 = iVar11 * 2;
    }
    puVar13 = FUN_00494cf0(*piVar5,(undefined4 *)piVar5[1],iVar11 * 0x14);
    if (puVar13 != (undefined4 *)0x0) {
      iVar11 = *piVar5;
      if (((iVar11 == 0) || (puVar13 < *(undefined4 **)(iVar11 + 0x104))) ||
         (*(undefined4 **)(iVar11 + 0x108) <= puVar13)) {
        uVar17 = (*DAT_00582af0._4_4_)(puVar13);
      }
      else {
        uVar17 = (uint)*(ushort *)(iVar11 + 0xe8);
      }
      piVar5[8] = uVar17 / 0x14;
      piVar5[1] = (int)puVar13;
      goto LAB_00475caa;
    }
    iVar22 = 1;
  }
  iVar11 = piVar5[1];
  iVar15 = *piVar5;
  if ((iVar11 == 0) || (*(char *)(iVar15 + 0x38) != '\0')) {
    FUN_0047bc80(iVar15,0xfffffff0,piVar14);
  }
  else {
    if (iVar22 < 0) {
      iVar22 = piVar5[7] + -1;
    }
    iVar2 = iVar11 + iVar22 * 0x14;
    FUN_0047bc80(iVar15,(int)*(char *)(iVar2 + 1),*(int **)(iVar11 + 0x10 + iVar22 * 0x14));
    *(undefined4 *)(iVar2 + 0x10) = 0;
    if (piVar14 == (int *)0x0) {
      *(undefined4 *)(iVar2 + 0x10) = 0;
      *(undefined1 *)(iVar2 + 1) = 0;
    }
    else {
      *(int **)(iVar2 + 0x10) = piVar14;
      *(undefined1 *)(iVar2 + 1) = 0xfa;
    }
  }
  param_3 = piVar5[7];
  uVar10 = param_6[7];
  iVar22 = piVar5[8];
  if ((int)param_3 < iVar22) {
LAB_00475dbe:
    iVar22 = piVar5[1];
    piVar5[7] = piVar5[7] + 1;
    *(undefined2 *)(iVar22 + param_3 * 0x14) = 0x48;
    *(undefined1 *)(iVar22 + 3 + param_3 * 0x14) = 0;
    *(uint *)(iVar22 + 4 + param_3 * 0x14) = uVar10;
    *(undefined4 *)(iVar22 + 8 + param_3 * 0x14) = 0;
    *(undefined4 *)(iVar22 + 0xc + param_3 * 0x14) = 0;
    *(undefined4 *)(iVar22 + 0x10 + param_3 * 0x14) = 0;
  }
  else {
    if (iVar22 == 0) {
      iVar22 = 0x33;
    }
    else {
      iVar22 = iVar22 * 2;
    }
    puVar13 = FUN_00494cf0(*piVar5,(undefined4 *)piVar5[1],iVar22 * 0x14);
    if (puVar13 != (undefined4 *)0x0) {
      iVar22 = *piVar5;
      if (((iVar22 == 0) || (puVar13 < *(undefined4 **)(iVar22 + 0x104))) ||
         (*(undefined4 **)(iVar22 + 0x108) <= puVar13)) {
        uVar17 = (*DAT_00582af0._4_4_)(puVar13);
      }
      else {
        uVar17 = (uint)*(ushort *)(iVar22 + 0xe8);
      }
      piVar5[8] = uVar17 / 0x14;
      piVar5[1] = (int)puVar13;
      goto LAB_00475dbe;
    }
    param_3 = 1;
  }
  if (*(char *)((int)param_1 + 0x13) == '\0') {
    param_1[0x13] = param_1[0x13] + 1;
    iVar22 = param_1[0x13];
  }
  else {
    bVar8 = *(char *)((int)param_1 + 0x13) - 1;
    *(byte *)((int)param_1 + 0x13) = bVar8;
    iVar22 = param_1[bVar8 + 7];
  }
  FUN_0049c270(param_1,piVar12,param_6[7],iVar22,1);
  iVar11 = piVar5[7];
  uVar10 = param_6[8];
  iVar15 = piVar5[8];
  if (iVar11 < iVar15) {
LAB_00475ea6:
    iVar15 = piVar5[1];
    piVar5[7] = piVar5[7] + 1;
    *(undefined2 *)(iVar15 + iVar11 * 0x14) = 0x61;
    *(undefined1 *)(iVar15 + 3 + iVar11 * 0x14) = 0;
    *(uint *)(iVar15 + 4 + iVar11 * 0x14) = uVar10;
    *(int *)(iVar15 + 8 + iVar11 * 0x14) = iVar22;
    *(undefined4 *)(iVar15 + 0xc + iVar11 * 0x14) = 0;
    *(undefined4 *)(iVar15 + 0x10 + iVar11 * 0x14) = 0;
  }
  else {
    if (iVar15 == 0) {
      iVar15 = 0x33;
    }
    else {
      iVar15 = iVar15 * 2;
    }
    puVar13 = FUN_00494cf0(*piVar5,(undefined4 *)piVar5[1],iVar15 * 0x14);
    if (puVar13 != (undefined4 *)0x0) {
      iVar15 = *piVar5;
      if (((iVar15 == 0) || (puVar13 < *(undefined4 **)(iVar15 + 0x104))) ||
         (*(undefined4 **)(iVar15 + 0x108) <= puVar13)) {
        uVar17 = (*DAT_00582af0._4_4_)(puVar13);
      }
      else {
        uVar17 = (uint)*(ushort *)(iVar15 + 0xe8);
      }
      piVar5[8] = uVar17 / 0x14;
      piVar5[1] = (int)puVar13;
      goto LAB_00475ea6;
    }
  }
  if (piVar5[1] != 0) {
    *(undefined1 *)(piVar5[1] + -0x11 + piVar5[7] * 0x14) = 0x10;
  }
  iVar11 = piVar5[7];
  uVar10 = param_6[7];
  iVar15 = piVar5[8];
  if (iVar15 <= iVar11) {
    if (iVar15 == 0) {
      iVar15 = 0x33;
    }
    else {
      iVar15 = iVar15 * 2;
    }
    puVar13 = FUN_00494cf0(*piVar5,(undefined4 *)piVar5[1],iVar15 * 0x14);
    if (puVar13 == (undefined4 *)0x0) goto LAB_00475f99;
    iVar15 = *piVar5;
    if (((iVar15 == 0) || (puVar13 < *(undefined4 **)(iVar15 + 0x104))) ||
       (*(undefined4 **)(iVar15 + 0x108) <= puVar13)) {
      uVar17 = (*DAT_00582af0._4_4_)(puVar13);
    }
    else {
      uVar17 = (uint)*(ushort *)(iVar15 + 0xe8);
    }
    piVar5[8] = uVar17 / 0x14;
    piVar5[1] = (int)puVar13;
  }
  piVar5[7] = piVar5[7] + 1;
  puVar1 = (undefined2 *)(piVar5[1] + iVar11 * 0x14);
  *(uint *)(puVar1 + 2) = uVar10;
  *puVar1 = 0x5f;
  *(undefined1 *)((int)puVar1 + 3) = 0;
  *(uint *)(puVar1 + 4) = param_3 + 1;
  *(undefined4 *)(puVar1 + 6) = 0;
  *(undefined4 *)(puVar1 + 8) = 0;
LAB_00475f99:
  if (piVar5[1] != 0) {
    *(undefined1 *)(piVar5[1] + -0x11 + piVar5[7] * 0x14) = 3;
  }
  if ((-1 < (int)param_3) && (param_3 < (uint)piVar5[7])) {
    *(int *)(piVar5[1] + 8 + param_3 * 0x14) = piVar5[7];
  }
  if ((iVar22 != 0) && (*(byte *)((int)param_1 + 0x13) < 8)) {
    iVar11 = 0;
    piVar14 = param_1 + 0x19;
    do {
      if (piVar14[4] == iVar22) {
        *(undefined1 *)(piVar14 + 2) = 1;
        goto LAB_00475ff2;
      }
      iVar11 = iVar11 + 1;
      piVar14 = piVar14 + 6;
    } while (iVar11 < 10);
    param_1[*(byte *)((int)param_1 + 0x13) + 7] = iVar22;
    *(char *)((int)param_1 + 0x13) = *(char *)((int)param_1 + 0x13) + '\x01';
  }
LAB_00475ff2:
  if ((-1 < (int)uVar9) && (uVar9 < (uint)piVar5[7])) {
    *(int *)(piVar5[1] + 8 + uVar9 * 0x14) = piVar5[7];
  }
  return;
}


/* FUN_00476020 @ 00476020  kind=gamemisc  attributed-by=none  size=95 */

int __cdecl FUN_00476020(int param_1,uint param_2,int param_3)

{
  uint uVar1;
  int iVar2;
  
  uVar1 = *(uint *)(*(int *)(param_1 + 8) + 0x50);
  iVar2 = (int)uVar1 >> 0x1f;
  if ((iVar2 <= param_3) && ((iVar2 < param_3 || (uVar1 < param_2)))) {
    *(undefined4 *)(param_1 + 0x38) = 0x12;
    FUN_004b79e0((int *)(param_1 + 8),"string or blob too big",0xffffffff,'\x01',(undefined *)0x0);
    return 0;
  }
  iVar2 = FUN_004a0350(param_2);
  if (iVar2 == 0) {
    FUN_0045fad0(param_1);
  }
  return iVar2;
}


/* FUN_00476080 @ 00476080  kind=gamemisc  attributed-by=none  size=169 */

void __cdecl FUN_00476080(undefined4 param_1)

{
  void *pvVar1;
  undefined4 local_9c [4];
  int local_8c;
  uint local_8;
  
  local_8 = DAT_00583cc8 ^ (uint)&stack0xfffffffc;
  if (DAT_00583f38 == 0) {
    local_9c[0] = 0x94;
    (*(code *)PTR_GetVersionExA_00583704)(local_9c);
    DAT_00583f38 = (local_8c == 2) + 1;
  }
  if (DAT_00583f38 == 2) {
    FUN_004bebc0(param_1);
    __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
    return;
  }
  pvVar1 = FUN_004bebc0(param_1);
  if (pvVar1 == (void *)0x0) {
    __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
    return;
  }
  FUN_004bdb80(pvVar1);
  FUN_00466dd0((int)pvVar1);
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


/* FUN_004762d0 @ 004762d0  kind=gamemisc  attributed-by=none  size=413 */

undefined4 __cdecl
FUN_004762d0(int param_1,byte *param_2,byte param_3,int param_4,int param_5,int param_6)

{
  byte bVar1;
  byte *pbVar2;
  int *piVar3;
  int iVar4;
  uint extraout_ECX;
  int extraout_EDX;
  byte *pbVar5;
  uint uVar6;
  undefined4 *puVar7;
  int local_c;
  
  pbVar2 = param_2;
  uVar6 = 0;
  if (param_2 != (byte *)0x0) {
    bVar1 = *param_2;
    pbVar5 = param_2;
    while (bVar1 != 0) {
      pbVar5 = pbVar5 + 1;
      bVar1 = *pbVar5;
    }
    uVar6 = (int)pbVar5 - (int)param_2 & 0x3fffffff;
  }
  param_2 = (byte *)(uint)param_3;
  if ((param_2 == (byte *)0x4) || (param_2 == (byte *)0x8)) {
    param_2 = (byte *)0x2;
  }
  else if ((param_2 == (byte *)0x0) || ((byte *)0x3 < param_2)) {
    FUN_004683f0(0x15,"misuse at line %d of [%.10s]");
    return 0x15;
  }
  if (pbVar2 == (byte *)0x0) {
    piVar3 = *(int **)(param_1 + 8);
  }
  else {
    piVar3 = FUN_004799f0(param_1,pbVar2,0);
  }
  if (((piVar3 != (int *)0x0) && (piVar3 = piVar3 + (int)param_2 * 5, piVar3 != (int *)0x14)) &&
     (piVar3[-2] != 0)) {
    if (*(int *)(param_1 + 0x84) != 0) {
      FUN_004961f0(param_1,5,
                   (byte *)"unable to delete/modify collation sequence due to active statements");
      return 5;
    }
    FUN_00496370(param_1);
    if ((*(byte *)(extraout_EDX + 4) & 0xfffffff7) == extraout_ECX) {
      iVar4 = FUN_0049d6a0((uint *)(param_1 + 0x19c),pbVar2,uVar6);
      puVar7 = (undefined4 *)(iVar4 + 0x10);
      local_c = 3;
      do {
        if (*(char *)(puVar7 + -3) == (char)piVar3[-4]) {
          if ((code *)*puVar7 != (code *)0x0) {
            (*(code *)*puVar7)(puVar7[-2]);
          }
          puVar7[-1] = 0;
        }
        puVar7 = puVar7 + 5;
        local_c = local_c + -1;
      } while (local_c != 0);
    }
  }
  if (pbVar2 == (byte *)0x0) {
    piVar3 = *(int **)(param_1 + 8);
  }
  else {
    piVar3 = FUN_004799f0(param_1,pbVar2,1);
  }
  if ((piVar3 != (int *)0x0) && (piVar3 = piVar3 + (int)param_2 * 5, piVar3 != (int *)0x14)) {
    piVar3[-2] = param_5;
    piVar3[-3] = param_4;
    piVar3[-1] = param_6;
    *(byte *)(piVar3 + -4) = param_3 & 8 | (byte)param_2;
    FUN_004961f0(param_1,0,(byte *)0x0);
    return 0;
  }
  return 7;
}


/* FUN_00476470 @ 00476470  kind=gamemisc  attributed-by=none  size=331 */

uint __cdecl
FUN_00476470(int param_1,byte *param_2,undefined4 param_3,undefined4 param_4,undefined *param_5)

{
  byte bVar1;
  uint uVar2;
  undefined4 *puVar3;
  byte *pbVar4;
  uint uVar5;
  
  if (*(int *)(param_1 + 0xc) != 0) {
    (*DAT_00582b18)(*(int *)(param_1 + 0xc));
  }
  uVar5 = 0;
  if (param_2 != (byte *)0x0) {
    bVar1 = *param_2;
    pbVar4 = param_2;
    while (bVar1 != 0) {
      pbVar4 = pbVar4 + 1;
      bVar1 = *pbVar4;
    }
    uVar5 = (int)pbVar4 - (int)param_2 & 0x3fffffff;
  }
  if (*(int *)(param_1 + 0x130) == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_004bd210(param_2,uVar5);
    uVar2 = uVar2 % *(uint *)(param_1 + 0x124);
  }
  puVar3 = FUN_00479af0(param_1 + 0x124,param_2,uVar5,uVar2);
  if ((puVar3 == (undefined4 *)0x0) || (puVar3[2] == 0)) {
    puVar3 = FUN_00494b90(param_1,uVar5 + 0x11);
    if (puVar3 != (undefined4 *)0x0) {
      pbVar4 = (byte *)(puVar3 + 4);
      memcpy(pbVar4,param_2,uVar5 + 1);
      *puVar3 = param_3;
      puVar3[2] = param_4;
      puVar3[1] = pbVar4;
      puVar3[3] = param_5;
      puVar3 = (undefined4 *)FUN_0049d6f0((uint *)(param_1 + 0x124),pbVar4,uVar5,(uint)puVar3);
      if (puVar3 != (undefined4 *)0x0) {
        *(undefined1 *)(param_1 + 0x38) = 1;
        FUN_00494b00(param_1,puVar3);
      }
    }
    uVar5 = 0;
  }
  else {
    FUN_004683f0(0x15,"misuse at line %d of [%.10s]");
    uVar5 = 0x15;
  }
  if ((*(char *)(param_1 + 0x38) != '\0') || (uVar5 == 0xc0a)) {
    FUN_004961f0(param_1,7,(byte *)0x0);
    *(undefined1 *)(param_1 + 0x38) = 0;
    uVar5 = 7;
  }
  uVar5 = *(uint *)(param_1 + 0x30) & uVar5;
  if ((uVar5 != 0) && (param_5 != (undefined *)0x0)) {
    (*(code *)param_5)(param_4);
  }
  if (*(int *)(param_1 + 0xc) != 0) {
    (*DAT_00582b20)(*(int *)(param_1 + 0xc));
  }
  return uVar5;
}


/* FUN_00476c10 @ 00476c10  kind=gamemisc  attributed-by=none  size=72 */

void __cdecl FUN_00476c10(int param_1,int *param_2)

{
  char *pcVar1;
  int iVar2;
  int iVar3;
  
  if (param_2 != (int *)0x0) {
    do {
      if ((*(byte *)((int)param_2 + 0x12) & 4) != 0) {
        return;
      }
      if ((*(int *)(param_1 + 0x18) != 0) && ((*(byte *)(*param_2 + 2) & 1) == 0)) {
        return;
      }
      iVar2 = param_2[1];
      *(byte *)((int)param_2 + 0x12) = *(byte *)((int)param_2 + 0x12) | 4;
      if (iVar2 < 0) {
        return;
      }
      iVar3 = *(int *)(param_2[5] + 0x20);
      pcVar1 = (char *)(iVar3 + 0x13 + iVar2 * 0x28);
      *pcVar1 = *pcVar1 + -1;
      param_2 = (int *)(iVar3 + iVar2 * 0x28);
    } while (*pcVar1 == '\0');
  }
  return;
}


/* FUN_00477290 @ 00477290  kind=gamemisc  attributed-by=none  size=74 */

float10 __cdecl FUN_00477290(double param_1)

{
  double dVar1;
  double dVar2;
  undefined8 local_c;
  
  dVar1 = 1.0;
  local_c = 1.0;
  dVar2 = 10.0;
  if (10.0 < param_1) {
    do {
      dVar2 = dVar2 * 10.0;
      dVar1 = dVar1 + 1.0;
      local_c = dVar1;
    } while (dVar2 < param_1);
  }
  return (float10)local_c;
}


/* FUN_004776e0 @ 004776e0  kind=gamemisc  attributed-by=none  size=487 */

int __cdecl FUN_004776e0(int param_1,char *param_2,int param_3)

{
  char *pcVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  char *pcVar6;
  int local_28 [6];
  undefined1 local_10;
  undefined2 local_f;
  int local_c;
  int local_8;
  
  pcVar6 = param_2;
  local_8 = *(int *)(param_3 + 4);
  local_c = *(int *)(param_2 + 0x10);
  uVar3 = (uint)*(ushort *)(param_2 + 4);
  iVar2 = *(int *)(local_c + 4);
  if ((uVar3 == 0) && ((*(uint *)param_2 & 0x300000) == 0)) {
    return 0;
  }
  local_28[0] = param_1;
  local_28[1] = 0;
  local_28[2] = 0;
  local_28[3] = 0;
  local_28[4] = 0;
  local_28[5] = 1000000000;
  local_f = 1;
  local_10 = 0;
  FUN_004aa7b0(local_28," (",2);
  iVar4 = 0;
  if (uVar3 != 0) {
    do {
      pcVar1 = *(char **)(local_8 + *(int *)(iVar2 + iVar4 * 4) * 0x18);
      if (iVar4 != 0) {
        FUN_004aa7b0(local_28," AND ",5);
      }
      FUN_004aa7b0(local_28,pcVar1,0xffffffff);
      FUN_004aa7b0(local_28,"=",1);
      FUN_004aa7b0(local_28,"?",1);
      iVar4 = iVar4 + 1;
    } while (iVar4 < (int)uVar3);
  }
  iVar5 = iVar4;
  if ((*(uint *)param_2 & 0x200000) != 0) {
    if (iVar4 == *(int *)(local_c + 0x24)) {
      param_2 = "rowid";
    }
    else {
      param_2 = *(char **)(local_8 + *(int *)(iVar2 + iVar4 * 4) * 0x18);
    }
    if (iVar4 != 0) {
      FUN_004aa7b0(local_28," AND ",5);
    }
    FUN_004aa7b0(local_28,param_2,0xffffffff);
    FUN_004aa7b0(local_28,">",1);
    FUN_004aa7b0(local_28,"?",1);
    iVar5 = iVar4 + 1;
  }
  if ((*(uint *)pcVar6 & 0x100000) != 0) {
    if (iVar4 == *(int *)(local_c + 0x24)) {
      pcVar6 = "rowid";
    }
    else {
      pcVar6 = *(char **)(local_8 + *(int *)(iVar2 + iVar4 * 4) * 0x18);
    }
    if (iVar5 != 0) {
      FUN_004aa7b0(local_28," AND ",5);
    }
    FUN_004aa7b0(local_28,pcVar6,0xffffffff);
    FUN_004aa7b0(local_28,"<",1);
    FUN_004aa7b0(local_28,"?",1);
  }
  FUN_004aa7b0(local_28,")",1);
  iVar2 = FUN_004aa8f0(local_28);
  return iVar2;
}


/* FUN_004778d0 @ 004778d0  kind=gamemisc  attributed-by=none  size=581 */

void __cdecl
FUN_004778d0(int *param_1,int param_2,uint *param_3,undefined4 param_4,undefined4 param_5,
            ushort param_6)

{
  uint uVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  int *piVar8;
  char *pcVar9;
  
  if ((char)param_1[0x75] != '\x02') {
    return;
  }
  uVar5 = (uint)(byte)param_3[0xd];
  uVar1 = *param_3;
  piVar2 = (int *)param_1[2];
  iVar3 = param_1[0x79];
  iVar4 = *param_1;
  if ((uVar1 & 0x10000000) != 0) {
    return;
  }
  if ((param_6 & 0x40) != 0) {
    return;
  }
  puVar6 = (undefined4 *)FUN_004a02d0(iVar4,&DAT_0056de50);
  if (*(int *)(param_2 + 0x1c + uVar5 * 0x48) == 0) {
    pcVar9 = "%s TABLE %s";
  }
  else {
    pcVar9 = "%s SUBQUERY %d";
  }
  puVar6 = (undefined4 *)FUN_004a0240(iVar4,puVar6,(byte *)pcVar9);
  if (*(int *)(param_2 + 0x14 + uVar5 * 0x48) != 0) {
    puVar6 = (undefined4 *)FUN_004a0240(iVar4,puVar6,(byte *)"%s AS %s");
  }
  if ((uVar1 & 0xf0000) == 0) {
    if ((uVar1 & 0x3000) == 0) {
      if ((uVar1 & 0x8000000) != 0) {
        puVar6 = (undefined4 *)FUN_004a0240(iVar4,puVar6,(byte *)"%s VIRTUAL TABLE INDEX %d:%s");
      }
    }
    else {
      puVar6 = (undefined4 *)FUN_004a0240(iVar4,puVar6,(byte *)"%s USING INTEGER PRIMARY KEY");
      if ((uVar1 & 0x1000) == 0) {
        if ((uVar1 & 0x300000) == 0x300000) {
          pcVar9 = "%s (rowid>? AND rowid<?)";
        }
        else if ((uVar1 & 0x200000) == 0) {
          if ((uVar1 & 0x100000) == 0) goto LAB_00477a6e;
          pcVar9 = "%s (rowid<?)";
        }
        else {
          pcVar9 = "%s (rowid>?)";
        }
      }
      else {
        pcVar9 = "%s (rowid=?)";
      }
      puVar6 = (undefined4 *)FUN_004a0240(iVar4,puVar6,(byte *)pcVar9);
    }
  }
  else {
    puVar7 = (undefined4 *)
             FUN_004776e0(iVar4,(char *)param_3,*(int *)(param_2 + 0x18 + uVar5 * 0x48));
    puVar6 = (undefined4 *)FUN_004a0240(iVar4,puVar6,(byte *)"%s USING %s%sINDEX%s%s%s");
    FUN_00494b00(iVar4,puVar7);
  }
LAB_00477a6e:
  if ((param_6 & 3) == 0) {
    FUN_0054a946();
  }
  piVar8 = (int *)FUN_004a0240(iVar4,puVar6,(byte *)"%s (~%lld rows)");
  FUN_004ae8f0(piVar2,0x96,iVar3,param_4,param_5,piVar8,0xffffffff);
  return;
}


/* FUN_0047afc0 @ 0047afc0  kind=gamemisc  attributed-by=none  size=1397 */

void __cdecl
FUN_0047afc0(int *param_1,short *param_2,int param_3,int param_4,int *param_5,int param_6,
            int param_7,int param_8)

{
  byte bVar1;
  char cVar2;
  int *piVar3;
  int iVar4;
  undefined4 *puVar5;
  char *pcVar6;
  undefined4 *puVar7;
  byte *pbVar8;
  int iVar9;
  int iVar10;
  size_t _Size;
  int *local_48;
  short *psStack_44;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  char *local_28;
  uint local_24;
  char *local_20;
  size_t local_1c;
  int *local_18;
  uint local_14;
  int local_10;
  int local_c;
  byte *local_8;
  
  iVar4 = *param_1;
  piVar3 = (int *)param_1[2];
  local_8 = (byte *)0x0;
  local_14 = 0;
  local_18 = piVar3;
  local_c = iVar4;
  if (piVar3 == (int *)0x0) {
    piVar3 = FUN_004af150(iVar4);
    param_1[2] = (int)piVar3;
    local_18 = piVar3;
    if (piVar3 != (int *)0x0) {
      FUN_004ae760(piVar3,0x94);
    }
  }
  if (param_8 < 0) {
    local_14 = piVar3[7];
    bVar1 = *(byte *)(param_5 + 6);
    if (((int)local_14 < piVar3[8]) || (iVar4 = FUN_0047de10(piVar3), iVar4 == 0)) {
      piVar3[7] = piVar3[7] + 1;
      iVar4 = piVar3[1];
      *(undefined2 *)(iVar4 + local_14 * 0x14) = 0x76;
      *(undefined1 *)(iVar4 + 3 + local_14 * 0x14) = 0;
      *(uint *)(iVar4 + 4 + local_14 * 0x14) = (uint)bVar1;
      *(undefined4 *)(iVar4 + 8 + local_14 * 0x14) = 0;
      *(undefined4 *)(iVar4 + 0xc + local_14 * 0x14) = 0;
      *(undefined4 *)(iVar4 + 0x10 + local_14 * 0x14) = 0;
      iVar4 = local_c;
    }
    else {
      local_14 = 1;
      iVar4 = local_c;
    }
  }
  local_10 = 0;
  if (param_5[5] < 1) {
    pbVar8 = (byte *)0x0;
  }
  else {
    do {
      puVar5 = FUN_00494b90(iVar4,0x2d);
      if (puVar5 != (undefined4 *)0x0) {
        memset(puVar5,0,0x2d);
        *(undefined2 *)((int)puVar5 + 0x1e) = 0xffff;
        *(undefined1 *)puVar5 = 0x84;
        puVar5[1] = puVar5 + 0xb;
        *(undefined1 *)(puVar5 + 0xb) = 0;
        puVar5[5] = 1;
        if (puVar5 != (undefined4 *)0x0) {
          if (param_4 == 0) {
            puVar5[6] = param_7;
            *(undefined1 *)((int)puVar5 + 1) = 100;
          }
          else {
            iVar10 = *(int *)(*(int *)(param_4 + 4) + local_10 * 4);
            iVar9 = *(int *)(param_3 + 4) + iVar10 * 0x18;
            if (*(short *)(param_3 + 0x24) == iVar10) {
              iVar10 = -1;
            }
            puVar5[6] = param_7 + 1 + iVar10;
            *(undefined1 *)((int)puVar5 + 1) = *(undefined1 *)(iVar9 + 0x15);
            local_28 = *(char **)(iVar9 + 0x10);
            if (local_28 == (char *)0x0) {
              local_28 = (char *)**(undefined4 **)(iVar4 + 8);
            }
            local_24 = 0;
            if (local_28 != (char *)0x0) {
              cVar2 = *local_28;
              pcVar6 = local_28;
              while (cVar2 != '\0') {
                pcVar6 = pcVar6 + 1;
                cVar2 = *pcVar6;
              }
              local_24 = (int)pcVar6 - (int)local_28 & 0x3fffffff;
            }
            if ((local_24 != 0) &&
               (puVar7 = FUN_00496510(*param_1,0x5c,&local_28,1), puVar7 != (undefined4 *)0x0)) {
              *(ushort *)((int)puVar7 + 2) = *(ushort *)((int)puVar7 + 2) | 0x100;
              puVar7[2] = puVar5;
              puVar5 = puVar7;
            }
          }
        }
      }
      if (param_6 == 0) {
        iVar4 = param_5[9];
      }
      else {
        iVar4 = *(int *)(param_6 + local_10 * 4);
      }
      local_20 = *(char **)(*(int *)(*param_5 + 4) + iVar4 * 0x18);
      if (local_20 == (char *)0x0) {
        _Size = 0;
      }
      else {
        cVar2 = *local_20;
        pcVar6 = local_20;
        while (cVar2 != '\0') {
          pcVar6 = pcVar6 + 1;
          cVar2 = *pcVar6;
        }
        _Size = (int)pcVar6 - (int)local_20 & 0x3fffffff;
      }
      local_1c = _Size + 0x2d;
      puVar7 = FUN_00494b90(local_c,local_1c);
      if (puVar7 != (undefined4 *)0x0) {
        memset(puVar7,0,local_1c);
        *(undefined2 *)((int)puVar7 + 0x1e) = 0xffff;
        *(undefined1 *)puVar7 = 0x1a;
        if (_Size == 0xffffffff) {
          *(ushort *)((int)puVar7 + 2) = *(ushort *)((int)puVar7 + 2) | 0x400;
          puVar7[1] = 0;
        }
        else {
          puVar7[1] = puVar7 + 0xb;
          if (_Size != 0) {
            memcpy(puVar7 + 0xb,local_20,_Size);
          }
          *(undefined1 *)(_Size + puVar7[1]) = 0;
        }
        puVar7[5] = 1;
      }
      pcVar6 = (char *)FUN_00494b90(*param_1,0x2c);
      if (pcVar6 != (char *)0x0) {
        memset(pcVar6,0,0x2c);
        *pcVar6 = 'L';
        pcVar6[0x1e] = -1;
        pcVar6[0x1f] = -1;
        pcVar6[0x14] = '\x01';
        pcVar6[0x15] = '\0';
        pcVar6[0x16] = '\0';
        pcVar6[0x17] = '\0';
      }
      local_20 = (char *)*param_1;
      if (pcVar6 == (char *)0x0) {
        FUN_00498790((int)local_20,puVar5);
        FUN_00498790((int)local_20,puVar7);
      }
      else {
        if (puVar7 != (undefined4 *)0x0) {
          *(undefined4 **)(pcVar6 + 0xc) = puVar7;
          *(ushort *)(pcVar6 + 2) = *(ushort *)(pcVar6 + 2) | *(ushort *)((int)puVar7 + 2) & 0x100;
        }
        if (puVar5 != (undefined4 *)0x0) {
          *(undefined4 **)(pcVar6 + 8) = puVar5;
          *(ushort *)(pcVar6 + 2) = *(ushort *)(pcVar6 + 2) | *(ushort *)((int)puVar5 + 2) & 0x100;
        }
        FUN_004790b0((int)pcVar6);
        if (*(int *)(*param_1 + 0x5c) < *(int *)(pcVar6 + 0x14)) {
          FUN_004962b0(param_1,(byte *)"Expression tree is too large (maximum depth %d)");
        }
      }
      iVar4 = local_c;
      pbVar8 = (byte *)FUN_004966d0(local_c,(char *)local_8,pcVar6);
      local_10 = local_10 + 1;
      local_8 = pbVar8;
    } while (local_10 < param_5[5]);
  }
  if ((param_3 == *param_5) && (0 < param_8)) {
    puVar5 = FUN_00494b90(iVar4,0x2d);
    if (puVar5 != (undefined4 *)0x0) {
      memset(puVar5,0,0x2d);
      *(undefined2 *)((int)puVar5 + 0x1e) = 0xffff;
      *(undefined1 *)puVar5 = 0x84;
      puVar5[1] = puVar5 + 0xb;
      *(undefined1 *)(puVar5 + 0xb) = 0;
      puVar5[5] = 1;
    }
    puVar7 = FUN_00494b90(iVar4,0x2d);
    if (puVar7 != (undefined4 *)0x0) {
      memset(puVar7,0,0x2d);
      *(undefined1 *)puVar7 = 0x98;
      *(undefined2 *)((int)puVar7 + 0x1e) = 0xffff;
      puVar7[1] = puVar7 + 0xb;
      *(undefined1 *)(puVar7 + 0xb) = 0;
      puVar7[5] = 1;
    }
    if ((puVar5 != (undefined4 *)0x0) && (puVar7 != (undefined4 *)0x0)) {
      puVar5[6] = param_7;
      *(undefined1 *)((int)puVar5 + 1) = 100;
      puVar7[6] = *(undefined4 *)(param_2 + 0x1a);
      *(undefined2 *)(puVar7 + 7) = 0xffff;
    }
    pcVar6 = (char *)FUN_00494b90(*param_1,0x2c);
    if (pcVar6 != (char *)0x0) {
      memset(pcVar6,0,0x2c);
      *pcVar6 = 'K';
      pcVar6[0x1e] = -1;
      pcVar6[0x1f] = -1;
      pcVar6[0x14] = '\x01';
      pcVar6[0x15] = '\0';
      pcVar6[0x16] = '\0';
      pcVar6[0x17] = '\0';
    }
    iVar4 = *param_1;
    if (pcVar6 == (char *)0x0) {
      FUN_00498790(iVar4,puVar5);
      FUN_00498790(iVar4,puVar7);
    }
    else {
      if (puVar7 != (undefined4 *)0x0) {
        *(undefined4 **)(pcVar6 + 0xc) = puVar7;
        *(ushort *)(pcVar6 + 2) = *(ushort *)(pcVar6 + 2) | *(ushort *)((int)puVar7 + 2) & 0x100;
      }
      if (puVar5 != (undefined4 *)0x0) {
        *(undefined4 **)(pcVar6 + 8) = puVar5;
        *(ushort *)(pcVar6 + 2) = *(ushort *)(pcVar6 + 2) | *(ushort *)((int)puVar5 + 2) & 0x100;
      }
      FUN_004790b0((int)pcVar6);
      if (*(int *)(*param_1 + 0x5c) < *(int *)(pcVar6 + 0x14)) {
        FUN_004962b0(param_1,(byte *)"Expression tree is too large (maximum depth %d)");
      }
    }
    pbVar8 = (byte *)FUN_004966d0(local_c,(char *)local_8,pcVar6);
    local_8 = pbVar8;
  }
  local_40 = 0;
  local_38 = 0;
  local_30 = 0;
  _local_48 = CONCAT44(param_2,param_1);
  FUN_004a69e0((int *)&local_48,(int)pbVar8);
  piVar3 = FUN_004bb240(param_1,param_2,pbVar8,(undefined2 *)0x0,(int *)0x0,0,0);
  if ((0 < param_8) && ((char)param_5[6] == '\0')) {
    if ((int *)param_1[0x6c] != (int *)0x0) {
      param_1 = (int *)param_1[0x6c];
    }
    *(undefined1 *)(param_1 + 6) = 1;
  }
  bVar1 = *(byte *)(param_5 + 6);
  iVar4 = local_18[7];
  if ((iVar4 < local_18[8]) || (iVar9 = FUN_0047de10(local_18), iVar9 == 0)) {
    local_18[7] = local_18[7] + 1;
    iVar9 = local_18[1];
    *(undefined2 *)(iVar9 + iVar4 * 0x14) = 0x75;
    *(undefined1 *)(iVar9 + 3 + iVar4 * 0x14) = 0;
    *(uint *)(iVar9 + 4 + iVar4 * 0x14) = (uint)bVar1;
    *(int *)(iVar9 + 8 + iVar4 * 0x14) = param_8;
    *(undefined4 *)(iVar9 + 0xc + iVar4 * 0x14) = 0;
    *(undefined4 *)(iVar9 + 0x10 + iVar4 * 0x14) = 0;
  }
  if (piVar3 != (int *)0x0) {
    FUN_004bbe40(piVar3);
  }
  FUN_00498790(local_c,(undefined4 *)local_8);
  if (((local_14 != 0) && (-1 < (int)local_14)) && (local_14 < (uint)local_18[7])) {
    *(int *)(local_18[1] + 8 + local_14 * 0x14) = local_18[7];
  }
  return;
}


/* FUN_0047c700 @ 0047c700  kind=gamemisc  attributed-by=none  size=823 */

int __cdecl
FUN_0047c700(int *param_1,int *param_2,int param_3,undefined1 *param_4,undefined4 param_5,
            int param_6,int *param_7,size_t param_8,undefined4 param_9)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int extraout_EDX;
  
  piVar1 = (int *)param_1[2];
  iVar2 = piVar1[7];
  iVar4 = FUN_004b6b80(piVar1);
  if (param_6 != 0) {
    uVar5 = FUN_004ae7d0(piVar1,0x1c,param_6);
    iVar6 = FUN_004ae8f0(piVar1,0x18,*(undefined4 *)(param_3 + 8),param_6 + 1,
                         *(undefined4 *)(param_3 + 0xc),param_7,param_8);
    iVar8 = piVar1[7];
    if ((iVar8 < piVar1[8]) || (iVar7 = FUN_0047de10(piVar1), iVar7 == 0)) {
      piVar1[7] = piVar1[7] + 1;
      iVar7 = piVar1[1];
      *(undefined2 *)(iVar7 + iVar8 * 0x14) = 0x19;
      iVar7 = iVar7 + iVar8 * 0x14;
      *(undefined1 *)(iVar7 + 3) = 0;
      *(int *)(iVar7 + 4) = iVar6 + 2;
      *(int *)(iVar7 + 8) = iVar4;
      *(int *)(iVar7 + 0xc) = iVar6 + 2;
      *(undefined4 *)(iVar7 + 0x10) = 0;
    }
    if ((-1 < (int)uVar5) && (uVar5 < (uint)piVar1[7])) {
      *(int *)(piVar1[1] + 8 + uVar5 * 0x14) = piVar1[7];
    }
    iVar8 = *(int *)(param_3 + 0xc);
    uVar3 = *(undefined4 *)(param_3 + 8);
    iVar6 = piVar1[7];
    if ((iVar6 < piVar1[8]) || (iVar7 = FUN_0047de10(piVar1), iVar7 == 0)) {
      piVar1[7] = piVar1[7] + 1;
      iVar7 = piVar1[1];
      *(undefined4 *)(iVar7 + 4 + iVar6 * 0x14) = uVar3;
      *(int *)(iVar7 + 8 + iVar6 * 0x14) = param_6 + 1;
      *(undefined2 *)(iVar7 + iVar6 * 0x14) = 0xe;
      *(undefined1 *)(iVar7 + 3 + iVar6 * 0x14) = 0;
      *(int *)(iVar7 + 0xc + iVar6 * 0x14) = iVar8 + -1;
      *(undefined4 *)(iVar7 + 0x10 + iVar6 * 0x14) = 0;
    }
    iVar8 = piVar1[7];
    if ((iVar8 < piVar1[8]) || (iVar6 = FUN_0047de10(piVar1), iVar6 == 0)) {
      piVar1[7] = piVar1[7] + 1;
      iVar6 = piVar1[1];
      *(undefined2 *)(iVar6 + iVar8 * 0x14) = 7;
      *(undefined1 *)(iVar6 + 3 + iVar8 * 0x14) = 0;
      *(undefined4 *)(iVar6 + 4 + iVar8 * 0x14) = 1;
      *(int *)(iVar6 + 8 + iVar8 * 0x14) = param_6;
      *(undefined4 *)(iVar6 + 0xc + iVar8 * 0x14) = 0;
      *(undefined4 *)(iVar6 + 0x10 + iVar8 * 0x14) = 0;
    }
  }
  if (*(char *)(*param_1 + 0x38) == '\0') {
    FUN_00473870(piVar1,(int)param_2,iVar4);
    switch(*param_4) {
    case 6:
      FUN_00497600((int)param_1,*(int *)(param_3 + 8),*(int *)(param_4 + 4),1);
      break;
    case 7:
      iVar8 = FUN_00493750((char *)**(undefined4 **)(*param_2 + 8),param_4[1]);
      param_4[1] = (char)iVar8;
      iVar8 = FUN_0049cb40((int)param_1);
      FUN_004ae8f0(piVar1,0x1f,*(undefined4 *)(param_3 + 8),1,iVar8,(int *)(param_4 + 1),1);
      FUN_00496d90((int)param_1,*(int *)(param_3 + 8),1);
      FUN_004ae830(piVar1,0x61,*(undefined4 *)(param_4 + 4),iVar8);
      FUN_004a68f0((int)param_1,iVar8);
      break;
    case 8:
    case 9:
      iVar8 = FUN_0049cb40((int)param_1);
      iVar6 = FUN_0049cb40(extraout_EDX);
      FUN_004ae890(piVar1,0x1f,*(undefined4 *)(param_3 + 8),*(undefined4 *)(param_3 + 0xc),iVar8);
      FUN_004ae830(piVar1,0x38,*(undefined4 *)(param_4 + 4),iVar6);
      FUN_004ae890(piVar1,0x39,*(undefined4 *)(param_4 + 4),iVar8,iVar6);
      if (piVar1[1] != 0) {
        *(undefined1 *)(piVar1[1] + -0x11 + piVar1[7] * 0x14) = 8;
      }
      FUN_004a68f0((int)param_1,iVar6);
      FUN_004a68f0((int)param_1,iVar8);
      break;
    case 10:
      if (*(int *)(param_4 + 8) == 0) {
        iVar8 = FUN_0049cb00((int)param_1,*(int *)(param_3 + 0xc));
        *(int *)(param_4 + 8) = iVar8;
        *(undefined4 *)(param_4 + 0xc) = *(undefined4 *)(param_3 + 0xc);
      }
      FUN_00497600((int)param_1,*(int *)(param_3 + 8),*(int *)(param_4 + 8),*(int *)(param_4 + 0xc))
      ;
      FUN_004ae7d0(piVar1,4,*(undefined4 *)(param_4 + 4));
      break;
    default:
      FUN_004ae830(piVar1,0x10,*(undefined4 *)(param_3 + 8),*(undefined4 *)(param_3 + 0xc));
      FUN_00496d90((int)param_1,*(int *)(param_3 + 8),*(int *)(param_3 + 0xc));
    }
    if (param_2[2] != 0) {
      FUN_004ae890(piVar1,0x7a,param_2[2],param_9,0xffffffff);
    }
    if (piVar1[10] != 0) {
      *(int *)(piVar1[10] - (iVar4 * 4 + 4)) = piVar1[7];
    }
    FUN_004ae7d0(piVar1,3,param_5);
    return iVar2;
  }
  return 0;
}


/* FUN_0047d1b0 @ 0047d1b0  kind=gamemisc  attributed-by=none  size=148 */

int __cdecl FUN_0047d1b0(byte *param_1)

{
  byte **ppbVar1;
  byte **ppbVar2;
  byte bVar3;
  byte *pbVar4;
  byte **ppbVar5;
  int iVar6;
  byte *pbVar7;
  int local_c;
  
  local_c = 0;
  ppbVar5 = &param_1;
  while( true ) {
    ppbVar1 = ppbVar5 + 2;
    pbVar7 = ppbVar5[1];
    ppbVar2 = ppbVar5 + 3;
    pbVar4 = ppbVar5[4];
    iVar6 = 0;
    ppbVar5 = ppbVar5 + 5;
    while (pbVar7 != (byte *)0x0) {
      bVar3 = *param_1;
      pbVar7 = pbVar7 + -1;
      if (((&DAT_00569720)[bVar3] & 4) == 0) {
        return local_c;
      }
      param_1 = param_1 + 1;
      iVar6 = (int)(char)bVar3 + (iVar6 * 5 + -0x18) * 2;
    }
    if (iVar6 < (int)*ppbVar1) {
      return local_c;
    }
    if ((int)*ppbVar2 < iVar6) {
      return local_c;
    }
    if ((pbVar4 != (byte *)0x0) && (pbVar4 != (byte *)(int)(char)*param_1)) break;
    param_1 = param_1 + 1;
    local_c = local_c + 1;
    *(int *)*ppbVar5 = iVar6;
    if (pbVar4 == (byte *)0x0) {
      return local_c;
    }
  }
  return local_c;
}


/* FUN_0047d250 @ 0047d250  kind=gamemisc  attributed-by=none  size=374 */

void __cdecl FUN_0047d250(undefined4 param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  void *pvVar2;
  bool bVar3;
  void *pvVar4;
  void *local_a4;
  void *local_a0;
  undefined4 local_9c [4];
  int local_8c;
  uint local_8;
  
  local_8 = DAT_00583cc8 ^ (uint)&stack0xfffffffc;
  pvVar2 = (void *)0x0;
  if (DAT_00583f38 == 0) {
    local_9c[0] = 0x94;
    (*(code *)PTR_GetVersionExA_00583704)(local_9c);
    DAT_00583f38 = (local_8c == 2) + 1;
  }
  if (DAT_00583f38 == 2) {
    local_a0 = (void *)0x0;
    iVar1 = (*(code *)PTR_FormatMessageW_00583620)(0x1300,0,param_1,0,&local_a0);
    bVar3 = true;
    if (iVar1 == 0) goto LAB_0047d37d;
    if (DAT_00583e74 != (code *)0x0) {
      (*DAT_00583e74)();
    }
    pvVar2 = FUN_004bdc10(local_a0);
    pvVar4 = local_a0;
    if (DAT_00583e78 != (code *)0x0) {
      (*DAT_00583e78)();
      pvVar4 = local_a0;
    }
  }
  else {
    local_a4 = (void *)0x0;
    iVar1 = (*(code *)PTR_FormatMessageA_00583614)(0x1300,0,param_1,0,&local_a4,0,0);
    bVar3 = true;
    if (iVar1 == 0) goto LAB_0047d37d;
    if (DAT_00583e74 != (code *)0x0) {
      (*DAT_00583e74)();
    }
    local_a0 = FUN_00480740(local_a4);
    if (local_a0 == (void *)0x0) {
      pvVar2 = (void *)0x0;
    }
    else {
      pvVar2 = FUN_004bdc10(local_a0);
      FUN_00466dd0((int)local_a0);
    }
    pvVar4 = local_a4;
    if (DAT_00583e78 != (code *)0x0) {
      (*DAT_00583e78)();
      pvVar4 = local_a4;
    }
  }
  (*(code *)PTR_LocalFree_0058377c)(pvVar4);
  bVar3 = iVar1 == 0;
LAB_0047d37d:
  if (bVar3) {
    FUN_00466a80(param_2,param_3,(byte *)"OsError 0x%x (%u)");
  }
  else {
    FUN_00466a80(param_2,param_3,&DAT_0056de50);
    FUN_00466dd0((int)pvVar2);
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


/* FUN_0047d5d0 @ 0047d5d0  kind=gamemisc  attributed-by=none  size=286 */

void __cdecl FUN_0047d5d0(int param_1)

{
  undefined1 uVar1;
  int iVar2;
  short sVar3;
  int iVar4;
  uint *puVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  uint local_a4;
  int local_a0;
  undefined4 local_9c [4];
  int local_8c;
  uint local_8;
  
  local_8 = DAT_00583cc8 ^ (uint)&stack0xfffffffc;
  local_a0 = param_1;
  if (DAT_00583f38 == 0) {
    local_9c[0] = 0x94;
    (*(code *)PTR_GetVersionExA_00583704)(local_9c);
    DAT_00583f38 = (local_8c == 2) + 1;
  }
  if (DAT_00583f38 == 2) {
    uVar7 = 0x1fe;
    iVar2 = DAT_00582bb8 + 2;
    uVar6 = 1;
  }
  else {
    iVar2 = 4;
    puVar5 = &local_a4;
    if (DAT_00582acc == 0) {
      iVar4 = 0;
    }
    else {
      iVar4 = (*DAT_00582b10)(5);
      if (iVar4 != 0) {
        (*DAT_00582b18)(iVar4);
      }
    }
    do {
      uVar1 = FUN_00487580();
      *(undefined1 *)puVar5 = uVar1;
      puVar5 = (uint *)((int)puVar5 + 1);
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
    if (iVar4 != 0) {
      (*DAT_00582b20)(iVar4);
    }
    uVar7 = 1;
    sVar3 = (short)((ulonglong)(local_a4 & 0x7fffffff) % 0x1fd);
    iVar2 = DAT_00582bb8 + 2 + (int)sVar3;
    *(short *)(local_a0 + 0xe) = sVar3;
    uVar6 = 3;
    param_1 = local_a0;
  }
  iVar2 = FUN_004c2320((undefined4 *)(param_1 + 8),uVar6,iVar2,0,uVar7,0);
  if (iVar2 == 0) {
    uVar6 = (*(code *)PTR_GetLastError_005836a4)();
    *(undefined4 *)(param_1 + 0x14) = uVar6;
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


/* FUN_0047db10 @ 0047db10  kind=gamemisc  attributed-by=none  size=754 */

void __cdecl FUN_0047db10(int param_1,char *param_2)

{
  uint uVar1;
  code *pcVar2;
  char cVar3;
  void *pvVar4;
  void *pvVar5;
  char *pcVar6;
  char *pcVar7;
  uint uVar8;
  int iVar9;
  int local_31c;
  undefined1 local_318 [260];
  undefined1 local_214 [112];
  undefined4 local_1a4 [4];
  int local_194;
  char acStack_111 [265];
  uint local_8;
  
  local_8 = DAT_00583cc8 ^ (uint)&stack0xfffffffc;
  memset(acStack_111 + 1,0,0x106);
  if (DAT_00583e10 == 0) {
    if (DAT_00583f38 == 0) {
      local_1a4[0] = 0x94;
      (*(code *)PTR_GetVersionExA_00583704)(local_1a4);
      DAT_00583f38 = (local_194 == 2) + 1;
    }
    if (DAT_00583f38 == 2) {
      (*(code *)PTR_GetTempPathW_005836ec)(0xe6,local_318);
      pvVar4 = FUN_004bdc10(local_318);
    }
    else {
      (*(code *)PTR_GetTempPathA_005836e0)(0xe6,local_214);
      pvVar5 = FUN_00480740(local_214);
      if (pvVar5 == (void *)0x0) goto LAB_0047dbcb;
      pvVar4 = FUN_004bdc10(pvVar5);
      FUN_00466dd0((int)pvVar5);
    }
    if (pvVar4 == (void *)0x0) {
LAB_0047dbcb:
      __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
      return;
    }
    FUN_00466a80(0xe6,acStack_111 + 1,&DAT_0056de50);
    FUN_00466dd0((int)pvVar4);
  }
  else {
    FUN_00466a80(0xe6,acStack_111 + 1,&DAT_0056de50);
  }
  pcVar7 = acStack_111 + 1;
  while (acStack_111[1] != '\0') {
    pcVar7 = pcVar7 + 1;
    acStack_111[1] = *pcVar7;
  }
  uVar8 = (int)pcVar7 - (int)(acStack_111 + 1) & 0x3fffffff;
  pcVar7 = "etilqs_";
  do {
    pcVar6 = pcVar7;
    pcVar7 = pcVar6 + 1;
  } while (*pcVar7 != '\0');
  uVar1 = uVar8;
  if (param_1 <= (int)(((uint)(pcVar6 + -0x56df4f) & 0x3fffffff) + 0x12 + uVar8)) {
    __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
    return;
  }
  for (; (uVar1 != 0 && (acStack_111[uVar1] == '\\')); uVar1 = uVar1 - 1) {
  }
  if (uVar1 < 0x106) {
    acStack_111[uVar1 + 1] = '\0';
    pcVar7 = "%s\\etilqs_";
    if (uVar8 == 0) {
      pcVar7 = &DAT_0056df50;
    }
    FUN_00466a80(param_1 + -0x12,param_2,(byte *)pcVar7);
    uVar8 = 0;
    if (param_2 != (char *)0x0) {
      cVar3 = *param_2;
      pcVar7 = param_2;
      while (cVar3 != '\0') {
        pcVar7 = pcVar7 + 1;
        cVar3 = *pcVar7;
      }
      uVar8 = (int)pcVar7 - (int)param_2 & 0x3fffffff;
    }
    pcVar7 = param_2 + uVar8;
    iVar9 = 0xf;
    if (DAT_00582acc == 0) {
      local_31c = 0;
    }
    else {
      local_31c = (*DAT_00582b10)(5);
      if (local_31c != 0) {
        (*DAT_00582b18)(local_31c);
      }
    }
    do {
      cVar3 = FUN_00487580();
      *pcVar7 = cVar3;
      pcVar7 = pcVar7 + 1;
      iVar9 = iVar9 + -1;
    } while (iVar9 != 0);
    if (local_31c != 0) {
      (*DAT_00582b20)(local_31c);
    }
    iVar9 = 3;
    do {
      uVar1 = uVar8 + 5;
      param_2[uVar8] =
           s_abcdefghijklmnopqrstuvwxyzABCDEF_00582a88[(uint)(byte)param_2[uVar8] % 0x3e];
      param_2[uVar8 + 1] =
           s_abcdefghijklmnopqrstuvwxyzABCDEF_00582a88[(uint)(byte)param_2[uVar8 + 1] % 0x3e];
      param_2[uVar8 + 2] =
           s_abcdefghijklmnopqrstuvwxyzABCDEF_00582a88[(uint)(byte)param_2[uVar8 + 2] % 0x3e];
      param_2[uVar8 + 3] =
           s_abcdefghijklmnopqrstuvwxyzABCDEF_00582a88[(uint)(byte)param_2[uVar8 + 3] % 0x3e];
      param_2[uVar8 + 4] =
           s_abcdefghijklmnopqrstuvwxyzABCDEF_00582a88[(uint)(byte)param_2[uVar8 + 4] % 0x3e];
      iVar9 = iVar9 + -1;
      uVar8 = uVar1;
    } while (iVar9 != 0);
    (param_2 + uVar1)[0] = '\0';
    (param_2 + uVar1)[1] = '\0';
    __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
    return;
  }
  ___report_rangecheckfailure();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* FUN_0047e970 @ 0047e970  kind=gamemisc  attributed-by=none  size=129 */

undefined4 __cdecl FUN_0047e970(char *param_1)

{
  char cVar1;
  code *local_18;
  code *local_14;
  int local_8;
  
  local_8 = 3;
  local_18 = FUN_00478e60;
  local_14 = FUN_0048b2c0;
  FUN_004bb020(&local_18,(int)param_1);
  if (local_8 == 0) {
    return 0;
  }
  if ((*(ushort *)(param_1 + 2) & 0x200) != 0) {
    cVar1 = *param_1;
    while (cVar1 == -99) {
      param_1 = *(char **)(param_1 + 8);
      cVar1 = *param_1;
    }
    switch(*param_1) {
    case '^':
    case 'b':
    case -0x7f:
    case -0x7e:
    case -0x7d:
    case -0x7b:
      return 0;
    case -100:
      if (**(char **)(param_1 + 8) == -0x7e) {
        return 0;
      }
      if (**(char **)(param_1 + 8) == -0x7f) {
        return 0;
      }
    }
  }
  return 1;
}


/* FUN_0047eaa0 @ 0047eaa0  kind=gamemisc  attributed-by=none  size=289 */

undefined4 __cdecl FUN_0047eaa0(int param_1,int param_2,undefined4 *param_3,ulonglong *param_4)

{
  ushort uVar1;
  int *piVar2;
  undefined4 uVar3;
  byte *pbVar4;
  int iVar5;
  int iVar6;
  ulonglong uVar7;
  double local_c;
  
  memset(param_4,0,0x30);
  if (param_2 == 0) {
    uVar3 = FUN_0048b480(param_1,param_4);
    return uVar3;
  }
  piVar2 = (int *)*param_3;
  if ((*(char *)((int)piVar2 + 0x1e) == '\x02') || (*(char *)((int)piVar2 + 0x1e) == '\x01')) {
    uVar1 = *(ushort *)(piVar2 + 7);
    if ((uVar1 & 8) == 0) {
      if ((uVar1 & 4) == 0) {
        local_c = 0.0;
        if ((uVar1 & 0x12) != 0) {
          local_c = 0.0;
          FUN_0048cc90((byte *)piVar2[1],&local_c,piVar2[6],*(char *)((int)piVar2 + 0x1f));
        }
      }
      else {
        local_c = (double)*(longlong *)(piVar2 + 4);
      }
    }
    else {
      local_c = *(double *)(piVar2 + 2);
    }
    local_c = local_c * 86400000.0 + 0.5;
    uVar7 = FUN_0054a946();
    *param_4 = uVar7;
    *(undefined1 *)((int)param_4 + 0x2a) = 1;
  }
  else {
    pbVar4 = (byte *)FUN_004ae680(piVar2,1);
    if ((pbVar4 == (byte *)0x0) || (iVar5 = FUN_00485890(param_1,pbVar4,param_4), iVar5 != 0)) {
      return 1;
    }
  }
  iVar5 = 1;
  if (1 < param_2) {
    do {
      pbVar4 = (byte *)FUN_004ae680((int *)param_3[iVar5],1);
      if ((pbVar4 == (byte *)0x0) || (iVar6 = FUN_00485a80(param_1,pbVar4,param_4), iVar6 != 0)) {
        return 1;
      }
      iVar5 = iVar5 + 1;
    } while (iVar5 < param_2);
  }
  return 0;
}


/* FUN_0047ebd0 @ 0047ebd0  kind=gamemisc  attributed-by=none  size=369 */

undefined4 __cdecl
FUN_0047ebd0(int *param_1,undefined4 *param_2,int *param_3,int param_4,int *param_5,int param_6)

{
  char *pcVar1;
  int *piVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint local_18;
  uint uStack_14;
  int local_10;
  uint local_c;
  uint local_8;
  
  if ((*param_3 == 0) || (0x3f < *param_5)) {
    return 0;
  }
  local_18 = 0;
  uStack_14 = 0;
  local_c = 0;
  if (0 < *param_5) {
    local_10 = 0;
    local_8 = 0;
    do {
      for (pcVar1 = *(char **)(local_10 + param_5[2]);
          (pcVar1 != (char *)0x0 && ((*pcVar1 == '\\' || (*pcVar1 == '\x18'))));
          pcVar1 = *(char **)(pcVar1 + 8)) {
      }
      if (*pcVar1 != -0x68) {
        return 0;
      }
      piVar2 = FUN_00479c50(param_2,*(int *)(pcVar1 + 0x18),(int)*(short *)(pcVar1 + 0x1c),
                            0xffffffff,0xffffffff,2,0);
      if (piVar2 == (int *)0x0) {
LAB_0047ec80:
        if (*(int *)(pcVar1 + 0x18) != param_4) {
          return 0;
        }
        uVar3 = 1 << (local_c & 0x1f);
        uVar4 = 0;
        if (0x1f < local_c) {
          uVar4 = uVar3;
        }
        uVar3 = uVar3 ^ uVar4;
        if (0x3f < local_c) {
          uVar4 = uVar3;
        }
        local_18 = local_18 | uVar3;
        local_8 = local_8 | uVar4;
      }
      else {
        uVar3 = FUN_0048e620(param_1,*(char **)(*piVar2 + 8),*(char **)(*piVar2 + 0xc));
        uVar4 = FUN_004984d0(param_1,pcVar1);
        if (uVar3 != uVar4) goto LAB_0047ec80;
      }
      local_c = local_c + 1;
      local_10 = local_10 + 0x14;
      uStack_14 = local_8;
    } while ((int)local_c < *param_5);
  }
  if (local_18 != 0 || uStack_14 != 0) {
    while ((param_6 < param_3[9] &&
           (uVar3 = FUN_00479b90(param_1,param_5,param_4,(int)param_3,param_6), -1 < (int)uVar3))) {
      uVar4 = 1 << (uVar3 & 0x1f);
      uVar5 = 0;
      if (0x1f < uVar3) {
        uVar5 = uVar4;
      }
      uVar4 = uVar4 ^ uVar5;
      if (0x3f < uVar3) {
        uVar5 = uVar4;
      }
      local_18 = local_18 & ~uVar4;
      uStack_14 = uStack_14 & ~uVar5;
      param_6 = param_6 + 1;
      if (local_18 == 0 && uStack_14 == 0) {
        return 1;
      }
    }
    if (local_18 != 0 || uStack_14 != 0) {
      return 0;
    }
  }
  return 1;
}


/* FUN_0047f090 @ 0047f090  kind=gamemisc  attributed-by=none  size=167 */

int __cdecl FUN_0047f090(int param_1,uint param_2,int param_3)

{
  int iVar1;
  uint uVar2;
  byte bVar3;
  uint *puVar4;
  int *piVar5;
  int iVar6;
  
  iVar1 = *(int *)(param_1 + 0x2c);
  puVar4 = (uint *)(*(int *)(param_1 + 0x34) + -0x58 + iVar1 * 0x58);
  while( true ) {
    iVar1 = iVar1 + -1;
    if (iVar1 < 0) {
      return 0;
    }
    if (puVar4[7] == param_2) break;
    puVar4 = puVar4 + -0x16;
  }
  if ((*puVar4 & 0x4000000) != 0) {
    return 1;
  }
  uVar2 = puVar4[4];
  if (uVar2 == 0) {
    if (param_3 != -1) {
      return 0;
    }
  }
  else if (-1 < param_3) {
    iVar1 = *(int *)(uVar2 + 0x24);
    iVar6 = 0;
    if (iVar1 < 1) {
      return 0;
    }
    piVar5 = *(int **)(uVar2 + 4);
    while (param_3 != *piVar5) {
      iVar6 = iVar6 + 1;
      piVar5 = piVar5 + 1;
      if (iVar1 <= iVar6) {
        return 0;
      }
    }
    if (iVar1 <= iVar6) {
      return 0;
    }
    bVar3 = *(byte *)(iVar6 + *(int *)(uVar2 + 0x1c));
    goto LAB_0047f11e;
  }
  bVar3 = 0;
LAB_0047f11e:
  if ((*puVar4 & 0x1000000) != 0) {
    bVar3 = 1 - bVar3;
  }
  return bVar3 + 2;
}


/* FUN_0047f1a0 @ 0047f1a0  kind=gamemisc  attributed-by=none  size=848 */

uint __cdecl FUN_0047f1a0(undefined4 *param_1,int *param_2,int param_3,uint *param_4)

{
  byte bVar1;
  int *piVar2;
  int iVar3;
  int *piVar4;
  char *pcVar5;
  bool bVar6;
  uint uVar7;
  undefined4 *puVar8;
  int iVar9;
  int *piVar10;
  uint uVar11;
  uint uVar12;
  int iVar13;
  byte *pbVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  bool bVar18;
  bool bVar19;
  ulonglong uVar20;
  uint local_40;
  uint uStack_3c;
  uint local_28;
  uint local_20;
  uint local_14;
  undefined4 *local_c;
  
  iVar15 = param_2[3];
  piVar2 = (int *)*param_1;
  local_20 = 2;
  iVar3 = *piVar2;
  bVar6 = false;
  if (param_1[0xb] == 0) {
    uVar11 = 0;
  }
  else {
    iVar13 = param_1[0xb] * 0x58;
    uVar11 = (uint)*(ushort *)(iVar13 + -0x52 + param_1[0xd]);
    if (((*(uint *)(iVar13 + -0x58 + param_1[0xd]) & 0x800000) == 0) ||
       ((*(byte *)(iVar3 + 0x34) & 0x80) != 0)) {
      return uVar11;
    }
  }
  piVar4 = (int *)param_1[8];
  if (*(char *)((int)param_2 + 0x2e) != '\0') {
    return uVar11;
  }
  iVar13 = *piVar4;
  bVar19 = (char)param_2[0xb] != '\0';
  iVar16 = 0;
  local_c = (undefined4 *)(piVar4[2] + uVar11 * 0x14);
  uVar12 = uVar11;
  local_14 = uVar11;
  uVar7 = local_20;
joined_r0x0047f249:
  local_20 = uVar7;
  if ((iVar13 <= (int)uVar12) || (param_2[9] < iVar16)) goto LAB_0047f426;
  for (pcVar5 = (char *)*local_c;
      (pcVar5 != (char *)0x0 && ((*pcVar5 == '\\' || (*pcVar5 == '\x18'))));
      pcVar5 = *(char **)(pcVar5 + 8)) {
  }
  if ((*pcVar5 != -0x68) || (*(int *)(pcVar5 + 0x18) != param_3)) goto LAB_0047f426;
  if ((*param_2 == 0) || (param_2[9] <= iVar16)) {
    iVar17 = -1;
    local_28 = 0;
    pbVar14 = (byte *)0x0;
  }
  else {
    iVar17 = *(int *)(param_2[1] + iVar16 * 4);
    if (iVar17 == *(short *)(param_2[3] + 0x24)) {
      iVar17 = -1;
    }
    local_28 = (uint)*(byte *)(param_2[7] + iVar16);
    pbVar14 = *(byte **)(param_2[8] + iVar16 * 4);
  }
  if (*(short *)(pcVar5 + 0x1c) == iVar17) {
    if (pbVar14 == (byte *)0x0) {
      bVar18 = true;
    }
    else {
      puVar8 = (undefined4 *)FUN_004984d0(piVar2,(char *)*local_c);
      if (puVar8 == (undefined4 *)0x0) {
        puVar8 = *(undefined4 **)(iVar3 + 8);
      }
      iVar9 = FUN_004bcc60((byte *)*puVar8,pbVar14);
      bVar18 = iVar9 == 0;
    }
  }
  else {
    bVar18 = false;
  }
  bVar1 = *(byte *)(local_c + 3);
  piVar10 = FUN_00479c50((undefined4 *)param_1[1],param_3,iVar17,param_1[4],param_1[5],0x83,
                         (int)param_2);
  if (piVar10 == (int *)0x0) {
LAB_0047f3ac:
    iVar9 = 0;
LAB_0047f3b1:
    if (!bVar18) goto LAB_0047f3b5;
    if (((iVar9 != 1) && (local_20 = local_28 ^ bVar1, uVar7 != 2)) &&
       (local_20 = uVar7, (local_28 ^ bVar1) != uVar7)) goto LAB_0047f426;
    uVar12 = uVar12 + 1;
    local_c = local_c + 5;
    local_14 = uVar12;
    if (iVar17 < 0) {
      bVar6 = true;
LAB_0047f426:
      if (local_c == (undefined4 *)(piVar4[2] + uVar11 * 0x14)) {
        return uVar11;
      }
      *param_4 = local_20 & 1;
      if ((bVar6) || ((bVar19 && (param_2[9] <= iVar16)))) {
        piVar2 = *(int **)(param_1[1] + 4);
        uVar11 = 0;
        piVar10 = piVar2;
        if (0 < *piVar2) {
          do {
            if (piVar10[1] == param_3) {
              local_40 = 1 << (uVar11 & 0x1f);
              uStack_3c = 0;
              if (0x1f < uVar11) {
                uStack_3c = local_40;
              }
              local_40 = local_40 ^ uStack_3c;
              if (0x3f < uVar11) {
                uStack_3c = local_40;
              }
              goto LAB_0047f490;
            }
            uVar11 = uVar11 + 1;
            piVar10 = piVar10 + 1;
          } while ((int)uVar11 < *piVar2);
        }
        local_40 = 0;
        uStack_3c = 0;
LAB_0047f490:
        uVar12 = local_14;
        if ((int)local_14 < iVar13) {
          iVar15 = local_14 * 0x14;
          do {
            uVar20 = FUN_004791b0(piVar2,*(char **)(iVar15 + piVar4[2]));
            if (((uint)uVar20 & ~local_40) != 0 || ((uint)(uVar20 >> 0x20) & ~uStack_3c) != 0) {
              return local_14;
            }
            uVar12 = local_14 + 1;
            iVar15 = iVar15 + 0x14;
            local_14 = uVar12;
          } while ((int)uVar12 < iVar13);
        }
      }
      return uVar12;
    }
    if ((*(char *)(*(int *)(iVar15 + 4) + 0x14 + iVar17 * 0x18) == '\0') && (iVar9 != 1)) {
      bVar19 = false;
    }
  }
  else {
    if ((short)piVar10[4] == 1) goto LAB_0047f426;
    if ((short)piVar10[4] == 0x80) {
      bVar19 = false;
      iVar9 = 1;
      goto LAB_0047f3b1;
    }
    if (piVar10[6] == 0 && piVar10[7] == 0) {
      iVar9 = 1;
      goto LAB_0047f3b1;
    }
    pcVar5 = *(char **)(*piVar10 + 0xc);
    if (*pcVar5 != -0x68) goto LAB_0047f3ac;
    iVar9 = FUN_0047f090((int)param_1,*(uint *)(pcVar5 + 0x18),(int)*(short *)(pcVar5 + 0x1c));
    if (bVar18) {
      if ((iVar9 < 2) || (iVar9 == *(byte *)(local_c + 3) + 2)) goto LAB_0047f3b1;
      goto LAB_0047f426;
    }
LAB_0047f3b5:
    if (iVar9 == 0) goto LAB_0047f426;
  }
  iVar16 = iVar16 + 1;
  uVar7 = local_20;
  goto joined_r0x0047f249;
}


/* FUN_0047f780 @ 0047f780  kind=gamemisc  attributed-by=none  size=543 */

void __cdecl FUN_0047f780(ulonglong *param_1,int param_2,undefined4 *param_3)

{
  errno_t eVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  int local_68;
  int local_64;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  ulonglong local_48;
  double local_40;
  ulonglong local_38;
  undefined4 *local_30;
  tm local_2c;
  uint local_8;
  
  local_8 = DAT_00583cc8 ^ (uint)&stack0xfffffffc;
  local_2c.tm_sec = 0;
  local_2c.tm_min = 0;
  local_2c.tm_hour = 0;
  local_2c.tm_mday = 0;
  local_2c.tm_mon = 0;
  local_2c.tm_year = 0;
  local_2c.tm_wday = 0;
  local_2c.tm_yday = 0;
  local_60 = *param_1;
  local_58 = param_1[1];
  local_50 = param_1[2];
  local_48 = param_1[3];
  local_40 = (double)param_1[4];
  local_38 = param_1[5];
  local_30 = param_3;
  local_2c.tm_isdst = 0;
  FUN_00475680((uint *)&local_60);
  FUN_004752f0(&local_60);
  if ((int)local_58 - 0x7b3U < 0x43) {
    local_40 = (double)(int)(local_40 + 0.5);
  }
  else {
    local_58 = 0x1000007d0;
    local_50 = 1;
    local_48 = 0;
    local_40 = 0.0;
  }
  local_48 = local_48 & 0xffffffff;
  local_38._0_3_ = (uint3)(ushort)local_38;
  FUN_004753b0(&local_60);
  uVar4 = __alldiv((uint)local_60,local_60._4_4_,1000,0);
  local_68 = (uint)uVar4 + 0xe75c96c0;
  local_64 = ((int)((ulonglong)uVar4 >> 0x20) + -0x31) - (uint)((uint)uVar4 < 0x18a36940);
  if (DAT_00582bb4 == 0) {
    eVar1 = _localtime64_s(&local_2c,(__time64_t *)&local_68);
    if (eVar1 == 0) {
      local_58 = CONCAT44(local_2c.tm_mon + 1,local_2c.tm_year + 0x76c);
      local_50 = CONCAT44(local_2c.tm_hour,local_2c.tm_mday);
      local_40 = (double)local_2c.tm_sec;
      local_48 = CONCAT44(local_48._4_4_,local_2c.tm_min);
      local_38 = CONCAT44(local_38._4_4_,0x101);
      FUN_004753b0(&local_60);
      *local_30 = 0;
      __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
      return;
    }
  }
  *(undefined4 *)(param_2 + 0x38) = 1;
  if (*(int *)(param_2 + 8) == 0) {
    iVar2 = 1000000000;
  }
  else {
    iVar2 = *(int *)(*(int *)(param_2 + 8) + 0x50);
  }
  iVar3 = 0;
  if (-1 < iVar2) {
    do {
      if ("local time unavailable"[iVar3] == '\0') break;
      iVar3 = iVar3 + 1;
    } while (iVar3 <= iVar2);
  }
  if (iVar3 <= iVar2) {
    iVar2 = FUN_004b7260((int *)(param_2 + 8),iVar3 + 1U,0);
    if (iVar2 == 0) {
      memcpy(*(void **)(param_2 + 0xc),"local time unavailable",iVar3 + 1U);
      *(int *)(param_2 + 0x20) = iVar3;
      *(undefined4 *)(param_2 + 0x24) = 0x1030202;
    }
  }
  *local_30 = 1;
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


/* FUN_00480740 @ 00480740  kind=gamemisc  attributed-by=none  size=129 */

void * __cdecl FUN_00480740(undefined4 param_1)

{
  int iVar1;
  int iVar2;
  void *_Dst;
  
  iVar1 = (*(code *)PTR_AreFileApisANSI_0058356c)();
  iVar2 = (*(code *)PTR_MultiByteToWideChar_005837ac)(iVar1 == 0,0,param_1,0xffffffff,0,0);
  if (iVar2 * 2 == 0) {
    return (void *)0x0;
  }
  _Dst = (void *)FUN_004a0350(iVar2 << 2);
  if (_Dst != (void *)0x0) {
    memset(_Dst,0,iVar2 << 2);
    if (_Dst != (void *)0x0) {
      iVar1 = (*(code *)PTR_MultiByteToWideChar_005837ac)
                        (iVar1 == 0,0,param_1,0xffffffff,_Dst,iVar2 * 2);
      if (iVar1 == 0) {
        FUN_00466dd0((int)_Dst);
        _Dst = (void *)0x0;
      }
      return _Dst;
    }
  }
  return (void *)0x0;
}


/* FUN_004834d0 @ 004834d0  kind=gamemisc  attributed-by=none  size=1140 */

uint __cdecl FUN_004834d0(int *param_1,undefined4 *param_2,uint param_3,byte *param_4)

{
  uint uVar1;
  int *_Dst;
  int iVar2;
  int *piVar3;
  int iVar4;
  byte *pbVar5;
  void *pvVar6;
  uint uVar7;
  int local_c;
  byte *local_8;
  
  local_8 = (byte *)0x0;
  local_c = 0;
  *param_2 = 0;
  uVar1 = FUN_004bc920();
  if (uVar1 != 0) {
    return uVar1;
  }
  if ((1 << ((byte)param_3 & 7) & 0x46U) == 0) {
    FUN_004683f0(0x15,"misuse at line %d of [%.10s]");
    return 0x15;
  }
  if (DAT_00582acc == 0) {
    iVar2 = 0;
  }
  else if ((param_3 & 0x8000) == 0) {
    iVar2 = DAT_00582ad0;
    if ((param_3 & 0x10000) != 0) {
      iVar2 = 1;
    }
  }
  else {
    iVar2 = 0;
  }
  if ((param_3 & 0x40000) == 0) {
    if (DAT_00582b8c != 0) {
      param_3 = param_3 | 0x20000;
    }
  }
  else {
    param_3 = param_3 & 0xfffdffff;
  }
  uVar1 = param_3 & 0xfff600e7;
  param_3 = uVar1;
  _Dst = (int *)FUN_004a0350(0x1f8);
  pbVar5 = local_8;
  if ((_Dst != (int *)0x0) && (memset(_Dst,0,0x1f8), pbVar5 = local_8, _Dst != (int *)0x0)) {
    if (iVar2 != 0) {
      if (DAT_00582acc == 0) {
        iVar2 = 0;
      }
      else {
        iVar2 = (*DAT_00582b10)(1);
      }
      _Dst[3] = iVar2;
      if (iVar2 == 0) {
        FUN_00466dd0((int)_Dst);
        _Dst = (int *)0x0;
        pbVar5 = local_8;
        goto LAB_004835dd;
      }
    }
    if (_Dst[3] != 0) {
      (*DAT_00582b18)(_Dst[3]);
    }
    _Dst[0xc] = 0xff;
    _Dst[5] = 2;
    _Dst[0x11] = -0xfc486fa;
    _Dst[4] = (int)(_Dst + 0x6e);
    _Dst[0x14] = 1000000000;
    _Dst[0x15] = 1000000000;
    _Dst[0x16] = 2000;
    _Dst[0x17] = 1000;
    _Dst[0x18] = 500;
    _Dst[0x19] = 25000;
    _Dst[0x1a] = 0x7f;
    _Dst[0x1b] = 10;
    _Dst[0x1c] = 50000;
    _Dst[0x1d] = 999;
    _Dst[6] = _Dst[6] | 0x480008;
    _Dst[0x1e] = 1000;
    *(undefined1 *)((int)_Dst + 0x36) = 1;
    *(undefined1 *)((int)_Dst + 0x3a) = 0xff;
    _Dst[0x10] = 0;
    _Dst[0x69] = 0;
    _Dst[0x68] = 0;
    _Dst[0x67] = 0;
    _Dst[0x6a] = 0;
    _Dst[0x4b] = 0;
    _Dst[0x4a] = 0;
    _Dst[0x49] = 0;
    _Dst[0x4c] = 0;
    FUN_004762d0((int)_Dst,(byte *)"BINARY",1,0,0x4708e0,0);
    FUN_004762d0((int)_Dst,(byte *)"BINARY",3,0,0x4708e0,0);
    FUN_004762d0((int)_Dst,(byte *)"BINARY",2,0,0x4708e0,0);
    FUN_004762d0((int)_Dst,(byte *)"RTRIM",1,1,0x4708e0,0);
    pbVar5 = local_8;
    if ((char)_Dst[0xe] == '\0') {
      piVar3 = FUN_00499500((int)_Dst,1,(byte *)"BINARY",0);
      _Dst[2] = (int)piVar3;
      FUN_004762d0((int)_Dst,(byte *)"NOCASE",1,0,0x483460,0);
      _Dst[10] = uVar1;
      iVar4 = FUN_004a2e90(param_4,param_1,&param_3,_Dst,&local_8,&local_c);
      pbVar5 = local_8;
      iVar2 = local_c;
      if (iVar4 == 0) {
        iVar2 = FUN_00490e00((undefined *)*_Dst,local_8,(int)_Dst,(undefined4 *)(_Dst[4] + 4),0,
                             param_3 | 0x100);
        if (iVar2 == 0) {
          pvVar6 = FUN_004a7a80((int)_Dst,*(undefined4 **)(_Dst[4] + 4));
          *(void **)(_Dst[4] + 0xc) = pvVar6;
          pvVar6 = FUN_004a7a80((int)_Dst,(undefined4 *)0x0);
          *(void **)(_Dst[4] + 0x1c) = pvVar6;
          *(undefined **)_Dst[4] = &DAT_0057151c;
          *(undefined1 *)(_Dst[4] + 9) = 3;
          *(undefined1 **)(_Dst[4] + 0x10) = &DAT_00571350;
          *(undefined1 *)(_Dst[4] + 0x19) = 1;
          _Dst[0x11] = -0x5fd65969;
          if ((char)_Dst[0xe] == '\0') {
            FUN_004961f0((int)_Dst,0,(byte *)0x0);
            uVar1 = FUN_00464130((int)_Dst,(byte *)"MATCH",2);
            if (uVar1 == 7) {
              *(undefined1 *)(_Dst + 0xe) = 1;
            }
            uVar1 = FUN_00468670((int)_Dst);
            if (uVar1 == 0) {
              FUN_0048d6f0((int)_Dst);
              uVar7 = FUN_00468670((int)_Dst);
              uVar1 = 0;
              if (uVar7 != 0) goto LAB_004835dd;
            }
            FUN_004961f0((int)_Dst,uVar1,(byte *)0x0);
            FUN_0048b660((int)_Dst,(undefined4 *)0x0,DAT_00582ae0,DAT_00582ae4);
            if (_Dst[3] != 0) {
              (*DAT_00582b18)(_Dst[3]);
            }
            _Dst[0x30] = (int)FUN_004ba730;
            _Dst[0x31] = 1000;
            if (_Dst[3] != 0) {
              (*DAT_00582b20)(_Dst[3]);
            }
          }
        }
        else {
          if (iVar2 == 0xc0a) {
            iVar2 = 7;
          }
          FUN_004961f0((int)_Dst,iVar2,(byte *)0x0);
        }
      }
      else {
        if (iVar4 == 7) {
          *(undefined1 *)(_Dst + 0xe) = 1;
        }
        pbVar5 = &DAT_0056de50;
        if (local_c == 0) {
          pbVar5 = (byte *)0x0;
        }
        FUN_004961f0((int)_Dst,iVar4,pbVar5);
        FUN_00466dd0(iVar2);
        pbVar5 = local_8;
      }
    }
  }
LAB_004835dd:
  FUN_00466dd0((int)pbVar5);
  if ((_Dst != (int *)0x0) && (_Dst[3] != 0)) {
    (*DAT_00582b20)(_Dst[3]);
  }
  uVar1 = FUN_00468670((int)_Dst);
  if (uVar1 != 7) {
    if (uVar1 != 0) {
      _Dst[0x11] = 0x4b771290;
    }
    *param_2 = _Dst;
    return uVar1 & 0xff;
  }
  FUN_00492580(_Dst,0);
  *param_2 = 0;
  return 7;
}


/* FUN_00485890 @ 00485890  kind=gamemisc  attributed-by=none  size=192 */

undefined4 __cdecl FUN_00485890(int param_1,byte *param_2,ulonglong *param_3)

{
  byte bVar1;
  int iVar2;
  undefined4 uVar3;
  byte *pbVar4;
  uint uVar5;
  ulonglong uVar6;
  double local_c;
  
  iVar2 = FUN_00486460(param_2,param_3);
  if ((iVar2 != 0) && (iVar2 = FUN_00485950(param_2,(int)param_3), iVar2 != 0)) {
    iVar2 = FUN_004bcc60(param_2,&DAT_0056dc7c);
    if (iVar2 == 0) {
      uVar3 = FUN_0048b480(param_1,param_3);
      return uVar3;
    }
    uVar5 = 0;
    if (param_2 != (byte *)0x0) {
      bVar1 = *param_2;
      pbVar4 = param_2;
      while (bVar1 != 0) {
        pbVar4 = pbVar4 + 1;
        bVar1 = *pbVar4;
      }
      uVar5 = (int)pbVar4 - (int)param_2 & 0x3fffffff;
    }
    iVar2 = FUN_0048cc90(param_2,&local_c,uVar5,'\x01');
    if (iVar2 == 0) {
      return 1;
    }
    local_c = local_c * 86400000.0 + 0.5;
    uVar6 = FUN_0054a946();
    *param_3 = uVar6;
    *(undefined1 *)((int)param_3 + 0x2a) = 1;
  }
  return 0;
}


/* FUN_00485950 @ 00485950  kind=gamemisc  attributed-by=none  size=303 */

undefined4 __cdecl FUN_00485950(byte *param_1,int param_2)

{
  byte bVar1;
  byte bVar2;
  bool bVar3;
  int iVar4;
  undefined3 extraout_var;
  byte *pbVar5;
  double dVar6;
  double dVar7;
  undefined4 local_10;
  undefined4 local_c;
  int local_8;
  
  dVar6 = 0.0;
  iVar4 = FUN_0047d1b0(param_1);
  if (iVar4 != 2) {
    return 1;
  }
  pbVar5 = param_1 + 5;
  if (*pbVar5 == 0x3a) {
    iVar4 = FUN_0047d1b0(param_1 + 6);
    if (iVar4 != 1) {
      return 1;
    }
    pbVar5 = param_1 + 8;
    if ((*pbVar5 == 0x2e) && (((&DAT_00569720)[param_1[9]] & 4) != 0)) {
      dVar7 = 1.0;
      bVar1 = param_1[9];
      bVar2 = (&DAT_00569720)[bVar1];
      pbVar5 = param_1 + 9;
      while ((bVar2 & 4) != 0) {
        iVar4 = (int)(char)bVar1;
        bVar1 = pbVar5[1];
        pbVar5 = pbVar5 + 1;
        dVar7 = dVar7 * 10.0;
        dVar6 = (dVar6 * 10.0 + (double)iVar4) - 48.0;
        bVar2 = (&DAT_00569720)[bVar1];
      }
      dVar6 = dVar6 / dVar7;
    }
  }
  else {
    local_8 = 0;
  }
  *(undefined4 *)(param_2 + 0x14) = local_c;
  *(undefined2 *)(param_2 + 0x29) = 1;
  *(undefined4 *)(param_2 + 0x18) = local_10;
  *(double *)(param_2 + 0x20) = (double)local_8 + dVar6;
  bVar3 = FUN_00486380(pbVar5,param_2);
  if (CONCAT31(extraout_var,bVar3) == 0) {
    *(bool *)(param_2 + 0x2b) = *(int *)(param_2 + 0x1c) != 0;
    return 0;
  }
  return 1;
}


/* FUN_00485a80 @ 00485a80  kind=gamemisc  attributed-by=none  size=1322 */

/* WARNING: Removing unreachable block (ram,0x00485d42) */

void __cdecl FUN_00485a80(int param_1,byte *param_2,ulonglong *param_3)

{
  byte bVar1;
  ulonglong uVar2;
  int iVar3;
  byte *pbVar4;
  char *pcVar5;
  byte *pbVar6;
  byte *pbVar7;
  int iVar8;
  uint uVar9;
  bool bVar10;
  double dVar11;
  longlong lVar12;
  undefined8 uVar13;
  longlong lVar14;
  ulonglong uVar15;
  uint local_6c;
  int local_68;
  undefined4 local_3c;
  int iStack_38;
  double local_34;
  int local_2c;
  byte local_28 [32];
  uint local_8;
  
  local_8 = DAT_00583cc8 ^ (uint)&stack0xfffffffc;
  iVar8 = 0;
  iStack_38 = param_1;
  local_2c = 1;
  iVar3 = -(int)param_2;
  do {
    if (*param_2 == 0) break;
    iVar8 = iVar8 + 1;
    param_2[(int)(local_28 + iVar3)] = (&DAT_00569620)[*param_2];
    param_2 = param_2 + 1;
  } while (iVar8 < 0x1d);
  local_28[iVar8] = 0;
  switch(local_28[0]) {
  case 0x2b:
  case 0x2d:
  case 0x30:
  case 0x31:
  case 0x32:
  case 0x33:
  case 0x34:
  case 0x35:
  case 0x36:
  case 0x37:
  case 0x38:
  case 0x39:
    uVar9 = 1;
    while (((local_28[1] != 0 && (local_28[1] != 0x3a)) && (((&DAT_00569720)[local_28[1]] & 1) == 0)
           )) {
      local_28[1] = local_28[uVar9 + 1];
      uVar9 = uVar9 + 1;
    }
    iVar3 = FUN_0048cc90(local_28,(double *)&local_3c,uVar9,'\x01');
    if (iVar3 != 0) {
      pbVar4 = local_28 + uVar9;
      if (local_28[uVar9] == 0x3a) {
        pbVar4 = local_28 + 1;
        if (((&DAT_00569720)[local_28[0]] & 4) != 0) {
          pbVar4 = local_28;
        }
        memset(&local_6c,0,0x30);
        iVar3 = FUN_00485950(pbVar4,(int)&local_6c);
        if (iVar3 == 0) {
          FUN_004753b0((ulonglong *)&local_6c);
          uVar9 = local_68 + -1 + (uint)(43199999 < local_6c);
          uVar13 = __alldiv(local_6c + 0xfd6cd200,uVar9,0xfad9a400,0xffffffff);
          lVar14 = __allmul((uint)uVar13,(int)((ulonglong)uVar13 >> 0x20),86400000,0);
          lVar14 = lVar14 + CONCAT44(uVar9,local_6c + 0xfd6cd200);
          if (local_28[0] == 0x2d) {
            lVar14 = CONCAT44(-((int)((ulonglong)lVar14 >> 0x20) + (uint)((int)lVar14 != 0)),
                              -(int)lVar14);
          }
          FUN_004753b0(param_3);
          uVar2 = *param_3;
          *(uint *)param_3 = (int)*param_3 + (uint)lVar14;
          *(undefined2 *)(param_3 + 5) = 0;
          *(undefined1 *)((int)param_3 + 0x2b) = 0;
          *(int *)((int)param_3 + 4) =
               *(int *)((int)param_3 + 4) + (int)((ulonglong)lVar14 >> 0x20) +
               (uint)CARRY4((uint)uVar2,(uint)lVar14);
          __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
          return;
        }
      }
      else {
        bVar1 = (&DAT_00569720)[*pbVar4];
        while ((bVar1 & 1) != 0) {
          pbVar6 = pbVar4 + 1;
          pbVar4 = pbVar4 + 1;
          bVar1 = (&DAT_00569720)[*pbVar6];
        }
        bVar1 = *pbVar4;
        pbVar6 = pbVar4;
        while (bVar1 != 0) {
          pbVar6 = pbVar6 + 1;
          bVar1 = *pbVar6;
        }
        uVar9 = (int)pbVar6 - (int)pbVar4 & 0x3fffffff;
        if (uVar9 - 3 < 8) {
          if (pbVar4[uVar9 - 1] == 0x73) {
            pbVar4[uVar9 - 1] = 0;
            uVar9 = uVar9 - 1;
          }
          FUN_004753b0(param_3);
          dVar11 = (double)CONCAT44(iStack_38,local_3c);
          local_2c = 0;
          if (0.0 <= dVar11) {
            local_34 = 0.5;
          }
          else {
            local_34 = -0.5;
          }
          if (uVar9 == 3) {
            pbVar6 = &DAT_0056dcdc;
            do {
              bVar1 = *pbVar4;
              bVar10 = bVar1 < *pbVar6;
              if (bVar1 != *pbVar6) {
LAB_00486050:
                uVar9 = -(uint)bVar10 | 1;
                goto LAB_00486055;
              }
              if (bVar1 == 0) break;
              bVar1 = pbVar4[1];
              bVar10 = bVar1 < pbVar6[1];
              if (bVar1 != pbVar6[1]) goto LAB_00486050;
              pbVar4 = pbVar4 + 2;
              pbVar6 = pbVar6 + 2;
            } while (bVar1 != 0);
            uVar9 = 0;
LAB_00486055:
            if (uVar9 != 0) goto LAB_0048607e;
            local_34 = dVar11 * 86400000.0 + local_34;
          }
          else if (uVar9 == 4) {
            pbVar7 = &DAT_0056dce0;
            pbVar6 = pbVar4;
            do {
              bVar1 = *pbVar6;
              bVar10 = bVar1 < *pbVar7;
              if (bVar1 != *pbVar7) {
LAB_004860d0:
                uVar9 = -(uint)bVar10 | 1;
                goto LAB_004860d5;
              }
              if (bVar1 == 0) break;
              bVar1 = pbVar6[1];
              bVar10 = bVar1 < pbVar7[1];
              if (bVar1 != pbVar7[1]) goto LAB_004860d0;
              pbVar6 = pbVar6 + 2;
              pbVar7 = pbVar7 + 2;
            } while (bVar1 != 0);
            uVar9 = 0;
LAB_004860d5:
            if (uVar9 == 0) {
              local_34 = dVar11 * 3600000.0 + local_34;
            }
            else {
              pbVar6 = &DAT_0056dcd4;
              do {
                bVar1 = *pbVar4;
                bVar10 = bVar1 < *pbVar6;
                if (bVar1 != *pbVar6) {
LAB_00486114:
                  uVar9 = -(uint)bVar10 | 1;
                  goto LAB_00486119;
                }
                if (bVar1 == 0) break;
                bVar1 = pbVar4[1];
                bVar10 = bVar1 < pbVar6[1];
                if (bVar1 != pbVar6[1]) goto LAB_00486114;
                pbVar4 = pbVar4 + 2;
                pbVar6 = pbVar6 + 2;
              } while (bVar1 != 0);
              uVar9 = 0;
LAB_00486119:
              if (uVar9 != 0) goto LAB_0048607e;
              FUN_00475680((uint *)param_3);
              FUN_004752f0(param_3);
              *(int *)(param_3 + 1) = (int)param_3[1] + (int)dVar11;
              *(undefined1 *)((int)param_3 + 0x2a) = 0;
              FUN_004753b0(param_3);
              dVar11 = (double)(int)dVar11;
              if (dVar11 == (double)CONCAT44(iStack_38,local_3c)) goto LAB_0048607e;
              local_34 = ((double)CONCAT44(iStack_38,local_3c) - dVar11) * 365.0 * 86400000.0 +
                         local_34;
            }
          }
          else if (uVar9 == 6) {
            pcVar5 = "minute";
            pbVar6 = pbVar4;
            do {
              bVar1 = *pbVar6;
              bVar10 = bVar1 < (byte)*pcVar5;
              if (bVar1 != *pcVar5) {
LAB_004861b2:
                uVar9 = -(uint)bVar10 | 1;
                goto LAB_004861b7;
              }
              if (bVar1 == 0) break;
              bVar1 = pbVar6[1];
              bVar10 = bVar1 < (byte)pcVar5[1];
              if (bVar1 != pcVar5[1]) goto LAB_004861b2;
              pbVar6 = pbVar6 + 2;
              pcVar5 = pcVar5 + 2;
            } while (bVar1 != 0);
            uVar9 = 0;
LAB_004861b7:
            if (uVar9 == 0) {
              local_34 = dVar11 * 60000.0 + local_34;
            }
            else {
              pcVar5 = "second";
              do {
                bVar1 = *pbVar4;
                bVar10 = bVar1 < (byte)*pcVar5;
                if (bVar1 != *pcVar5) {
LAB_00486200:
                  uVar9 = -(uint)bVar10 | 1;
                  goto LAB_00486205;
                }
                if (bVar1 == 0) break;
                bVar1 = pbVar4[1];
                bVar10 = bVar1 < (byte)pcVar5[1];
                if (bVar1 != pcVar5[1]) goto LAB_00486200;
                pbVar4 = pbVar4 + 2;
                pcVar5 = pcVar5 + 2;
              } while (bVar1 != 0);
              uVar9 = 0;
LAB_00486205:
              if (uVar9 != 0) goto LAB_0048607e;
              local_34 = dVar11 * 1000.0 + local_34;
            }
          }
          else {
            if (uVar9 != 5) goto LAB_0048607e;
            pcVar5 = "month";
            do {
              bVar1 = *pbVar4;
              bVar10 = bVar1 < (byte)*pcVar5;
              if (bVar1 != *pcVar5) {
LAB_00486254:
                uVar9 = -(uint)bVar10 | 1;
                goto LAB_00486259;
              }
              if (bVar1 == 0) break;
              bVar1 = pbVar4[1];
              bVar10 = bVar1 < (byte)pcVar5[1];
              if (bVar1 != pcVar5[1]) goto LAB_00486254;
              pbVar4 = pbVar4 + 2;
              pcVar5 = pcVar5 + 2;
            } while (bVar1 != 0);
            uVar9 = 0;
LAB_00486259:
            if (uVar9 != 0) goto LAB_0048607e;
            FUN_00475680((uint *)param_3);
            FUN_004752f0(param_3);
            dVar11 = (double)CONCAT44(iStack_38,local_3c);
            *(int *)((int)param_3 + 0xc) = *(int *)((int)param_3 + 0xc) + (int)dVar11;
            iVar8 = *(int *)((int)param_3 + 0xc);
            iVar3 = iVar8 + -1;
            if (iVar8 < 1) {
              iVar3 = iVar8 + -0xc;
            }
            *(int *)(param_3 + 1) = (int)param_3[1] + iVar3 / 0xc;
            *(int *)((int)param_3 + 0xc) = iVar8 + (iVar3 / 0xc) * -0xc;
            *(undefined1 *)((int)param_3 + 0x2a) = 0;
            FUN_004753b0(param_3);
            dVar11 = (double)(int)dVar11;
            if (dVar11 == (double)CONCAT44(iStack_38,local_3c)) goto LAB_0048607e;
            local_34 = ((double)CONCAT44(iStack_38,local_3c) - dVar11) * 30.0 * 86400000.0 +
                       local_34;
          }
          uVar15 = FUN_0054a946();
          uVar2 = *param_3;
          *(uint *)param_3 = (int)*param_3 + (uint)uVar15;
          *(int *)((int)param_3 + 4) =
               *(int *)((int)param_3 + 4) + (int)(uVar15 >> 0x20) +
               (uint)CARRY4((uint)uVar2,(uint)uVar15);
LAB_0048607e:
          *(undefined2 *)(param_3 + 5) = 0;
          *(undefined1 *)((int)param_3 + 0x2b) = 0;
          __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
          return;
        }
      }
    }
    break;
  case 0x6c:
    pcVar5 = "localtime";
    pbVar4 = local_28;
    do {
      bVar1 = *pbVar4;
      bVar10 = bVar1 < (byte)*pcVar5;
      if (bVar1 != *pcVar5) {
LAB_00485b14:
        uVar9 = -(uint)bVar10 | 1;
        goto LAB_00485b19;
      }
      if (bVar1 == 0) break;
      bVar1 = pbVar4[1];
      bVar10 = bVar1 < (byte)pcVar5[1];
      if (bVar1 != pcVar5[1]) goto LAB_00485b14;
      pbVar4 = pbVar4 + 2;
      pcVar5 = pcVar5 + 2;
    } while (bVar1 != 0);
    uVar9 = 0;
LAB_00485b19:
    if (uVar9 == 0) {
      FUN_004753b0(param_3);
      uVar13 = FUN_0047f780(param_3,param_1,&local_2c);
      uVar2 = *param_3;
      *(uint *)param_3 = (int)*param_3 + (uint)uVar13;
      *(undefined2 *)(param_3 + 5) = 0;
      *(int *)((int)param_3 + 4) =
           *(int *)((int)param_3 + 4) + (int)((ulonglong)uVar13 >> 0x20) +
           (uint)CARRY4((uint)uVar2,(uint)uVar13);
      *(undefined1 *)((int)param_3 + 0x2b) = 0;
      __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
      return;
    }
    break;
  case 0x73:
    iVar3 = strncmp((char *)local_28,"start of ",9);
    if (iVar3 == 0) {
      FUN_00475680((uint *)param_3);
      *(undefined2 *)((int)param_3 + 0x29) = 1;
      *(undefined4 *)(param_3 + 3) = 0;
      *(undefined4 *)((int)param_3 + 0x14) = 0;
      param_3[4] = 0;
      *(undefined1 *)((int)param_3 + 0x2b) = 0;
      pcVar5 = "month";
      pbVar4 = local_28 + 9;
      do {
        bVar1 = *pbVar4;
        bVar10 = bVar1 < (byte)*pcVar5;
        if (bVar1 != *pcVar5) {
LAB_00485df0:
          uVar9 = -(uint)bVar10 | 1;
          goto LAB_00485df5;
        }
        if (bVar1 == 0) break;
        bVar1 = pbVar4[1];
        bVar10 = bVar1 < (byte)pcVar5[1];
        if (bVar1 != pcVar5[1]) goto LAB_00485df0;
        pbVar4 = pbVar4 + 2;
        pcVar5 = pcVar5 + 2;
      } while (bVar1 != 0);
      uVar9 = 0;
LAB_00485df5:
      if (uVar9 == 0) {
LAB_00485e3a:
        *(undefined4 *)(param_3 + 2) = 1;
        __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
        return;
      }
      pbVar6 = &DAT_0056dcd4;
      pbVar4 = local_28 + 9;
      do {
        bVar1 = *pbVar4;
        bVar10 = bVar1 < *pbVar6;
        if (bVar1 != *pbVar6) {
LAB_00485e21:
          uVar9 = -(uint)bVar10 | 1;
          goto LAB_00485e26;
        }
        if (bVar1 == 0) break;
        bVar1 = pbVar4[1];
        bVar10 = bVar1 < pbVar6[1];
        if (bVar1 != pbVar6[1]) goto LAB_00485e21;
        pbVar4 = pbVar4 + 2;
        pbVar6 = pbVar6 + 2;
      } while (bVar1 != 0);
      uVar9 = 0;
LAB_00485e26:
      if (uVar9 == 0) {
        FUN_00475680((uint *)param_3);
        *(undefined4 *)((int)param_3 + 0xc) = 1;
        goto LAB_00485e3a;
      }
      pbVar6 = &DAT_0056dcdc;
      pbVar4 = local_28 + 9;
      do {
        bVar1 = *pbVar4;
        bVar10 = bVar1 < *pbVar6;
        if (bVar1 != *pbVar6) {
LAB_00485e80:
          uVar9 = -(uint)bVar10 | 1;
          goto LAB_00485e85;
        }
        if (bVar1 == 0) break;
        bVar1 = pbVar4[1];
        bVar10 = bVar1 < pbVar6[1];
        if (bVar1 != pbVar6[1]) goto LAB_00485e80;
        pbVar4 = pbVar4 + 2;
        pbVar6 = pbVar6 + 2;
      } while (bVar1 != 0);
      uVar9 = 0;
LAB_00485e85:
      if (uVar9 == 0) {
        __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
        return;
      }
    }
    break;
  case 0x75:
    pcVar5 = "unixepoch";
    pbVar4 = local_28;
    do {
      bVar1 = *pbVar4;
      bVar10 = bVar1 < (byte)*pcVar5;
      if (bVar1 != *pcVar5) {
LAB_00485b80:
        uVar9 = -(uint)bVar10 | 1;
        goto LAB_00485b85;
      }
      if (bVar1 == 0) break;
      bVar1 = pbVar4[1];
      bVar10 = bVar1 < (byte)pcVar5[1];
      if (bVar1 != pcVar5[1]) goto LAB_00485b80;
      pbVar4 = pbVar4 + 2;
      pcVar5 = pcVar5 + 2;
    } while (bVar1 != 0);
    uVar9 = 0;
LAB_00485b85:
    if ((uVar9 == 0) && (*(char *)((int)param_3 + 0x2a) != '\0')) {
      lVar14 = __alldiv((uint)*param_3 + 0xa8c0,
                        *(int *)((int)param_3 + 4) + (uint)(0xffff573f < (uint)*param_3),0x15180,0);
      *param_3 = lVar14 + 0xbfc83e532200;
      *(undefined2 *)(param_3 + 5) = 0;
      *(undefined1 *)((int)param_3 + 0x2b) = 0;
      __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
      return;
    }
    pbVar6 = &DAT_0056dcb0;
    pbVar4 = local_28;
    do {
      bVar1 = *pbVar4;
      bVar10 = bVar1 < *pbVar6;
      if (bVar1 != *pbVar6) {
LAB_00485c00:
        uVar9 = -(uint)bVar10 | 1;
        goto LAB_00485c05;
      }
      if (bVar1 == 0) break;
      bVar1 = pbVar4[1];
      bVar10 = bVar1 < pbVar6[1];
      if (bVar1 != pbVar6[1]) goto LAB_00485c00;
      pbVar4 = pbVar4 + 2;
      pbVar6 = pbVar6 + 2;
    } while (bVar1 != 0);
    uVar9 = 0;
LAB_00485c05:
    if (uVar9 == 0) {
      FUN_004753b0(param_3);
      lVar14 = FUN_0047f780(param_3,param_1,&local_2c);
      if (local_2c == 0) {
        uVar2 = *param_3;
        *(uint *)param_3 = (int)*param_3 - (uint)lVar14;
        *(undefined2 *)(param_3 + 5) = 0;
        *(undefined1 *)((int)param_3 + 0x2b) = 0;
        *(int *)((int)param_3 + 4) =
             (*(int *)((int)param_3 + 4) - (int)((ulonglong)lVar14 >> 0x20)) -
             (uint)((uint)uVar2 < (uint)lVar14);
        lVar12 = FUN_0047f780(param_3,iStack_38,&local_2c);
        uVar9 = (uint)(lVar14 - lVar12);
        uVar2 = *param_3;
        *(uint *)param_3 = (int)*param_3 + uVar9;
        *(int *)((int)param_3 + 4) =
             *(int *)((int)param_3 + 4) + (int)((ulonglong)(lVar14 - lVar12) >> 0x20) +
             (uint)CARRY4((uint)uVar2,uVar9);
        __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
        return;
      }
      goto LAB_00486300;
    }
    break;
  case 0x77:
    iVar3 = strncmp((char *)local_28,"weekday ",8);
    if (iVar3 == 0) {
      pbVar4 = local_28 + 8;
      while (local_28[8] != 0) {
        pbVar4 = pbVar4 + 1;
        local_28[8] = *pbVar4;
      }
      iVar3 = FUN_0048cc90(local_28 + 8,(double *)&local_3c,
                           (int)pbVar4 - (int)(local_28 + 8) & 0x3fffffff,'\x01');
      if (iVar3 != 0) {
        dVar11 = (double)CONCAT44(iStack_38,local_3c);
        uVar9 = (uint)dVar11;
        if ((((double)(int)uVar9 == dVar11) && (-1 < (int)uVar9)) && (dVar11 < 7.0)) {
          FUN_00475680((uint *)param_3);
          FUN_004752f0(param_3);
          *(undefined2 *)((int)param_3 + 0x2a) = 0;
          FUN_004753b0(param_3);
          uVar13 = __alldiv((uint)*param_3 + 0x7b98a00,
                            *(int *)((int)param_3 + 4) + (uint)(0xf84675ff < (uint)*param_3),
                            86400000,0);
          lVar14 = __allrem((uint)uVar13,(uint)((ulonglong)uVar13 >> 0x20),7,0);
          if ((int)uVar9 < lVar14) {
            lVar14 = lVar14 + -7;
          }
          lVar14 = __allmul(uVar9 - (uint)lVar14,
                            (((int)uVar9 >> 0x1f) - (int)((ulonglong)lVar14 >> 0x20)) -
                            (uint)(uVar9 < (uint)lVar14),86400000,0);
          uVar2 = *param_3;
          *(uint *)param_3 = (int)*param_3 + (uint)lVar14;
          *(undefined2 *)(param_3 + 5) = 0;
          *(undefined1 *)((int)param_3 + 0x2b) = 0;
          *(uint *)((int)param_3 + 4) =
               (int)((ulonglong)lVar14 >> 0x20) + *(int *)((int)param_3 + 4) +
               (uint)CARRY4((uint)uVar2,(uint)lVar14);
          __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
          return;
        }
      }
    }
  }
LAB_00486300:
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


/* FUN_00486380 @ 00486380  kind=gamemisc  attributed-by=none  size=206 */

bool __cdecl FUN_00486380(byte *param_1,int param_2)

{
  byte *pbVar1;
  byte bVar2;
  int iVar3;
  byte *pbVar4;
  int iVar5;
  
  bVar2 = (&DAT_00569720)[*param_1];
  pbVar4 = param_1;
  while ((bVar2 & 1) != 0) {
    pbVar1 = pbVar4 + 1;
    pbVar4 = pbVar4 + 1;
    bVar2 = (&DAT_00569720)[*pbVar1];
  }
  *(undefined4 *)(param_2 + 0x1c) = 0;
  bVar2 = *pbVar4;
  if (bVar2 == 0x2d) {
    iVar5 = -1;
  }
  else {
    if (bVar2 != 0x2b) {
      if ((bVar2 != 0x5a) && (bVar2 != 0x7a)) {
        return bVar2 != 0;
      }
      pbVar4 = pbVar4 + 1;
      goto LAB_0048642f;
    }
    iVar5 = 1;
  }
  iVar3 = FUN_0047d1b0(pbVar4 + 1);
  if (iVar3 != 2) {
    return true;
  }
  pbVar4 = pbVar4 + 6;
  *(int *)(param_2 + 0x1c) = (param_2 + (int)param_1 * 0x3c) * iVar5;
LAB_0048642f:
  bVar2 = (&DAT_00569720)[*pbVar4];
  while ((bVar2 & 1) != 0) {
    pbVar1 = pbVar4 + 1;
    pbVar4 = pbVar4 + 1;
    bVar2 = (&DAT_00569720)[*pbVar1];
  }
  return *pbVar4 != 0;
}


/* FUN_00486460 @ 00486460  kind=gamemisc  attributed-by=none  size=213 */

undefined4 __cdecl FUN_00486460(byte *param_1,ulonglong *param_2)

{
  byte bVar1;
  int iVar2;
  byte *pbVar3;
  undefined4 local_c;
  undefined4 local_8;
  
  bVar1 = *param_1;
  pbVar3 = param_1;
  if (bVar1 == 0x2d) {
    pbVar3 = param_1 + 1;
  }
  iVar2 = FUN_0047d1b0(pbVar3);
  if (iVar2 == 3) {
    for (pbVar3 = pbVar3 + 10; (((&DAT_00569720)[*pbVar3] & 1) != 0 || (*pbVar3 == 0x54));
        pbVar3 = pbVar3 + 1) {
    }
    iVar2 = FUN_00485950(pbVar3,(int)param_2);
    if (iVar2 != 0) {
      if (*pbVar3 != 0) {
        return 1;
      }
      *(undefined1 *)((int)param_2 + 0x29) = 0;
    }
    *(undefined1 *)((int)param_2 + 0x2a) = 0;
    *(undefined1 *)(param_2 + 5) = 1;
    if (bVar1 == 0x2d) {
      param_1 = (byte *)-(int)param_1;
    }
    *(byte **)(param_2 + 1) = param_1;
    *(undefined4 *)((int)param_2 + 0xc) = local_8;
    *(undefined4 *)(param_2 + 2) = local_c;
    if (*(char *)((int)param_2 + 0x2b) != '\0') {
      FUN_004753b0(param_2);
    }
    return 0;
  }
  return 1;
}


/* FUN_00486540 @ 00486540  kind=gamemisc  attributed-by=none  size=856 */

bool __cdecl FUN_00486540(char *param_1,byte *param_2,ushort *param_3,uint param_4)

{
  byte *pbVar1;
  byte bVar2;
  char cVar3;
  bool bVar4;
  ushort uVar5;
  ushort uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  undefined3 extraout_var;
  undefined3 extraout_var_00;
  byte *pbVar10;
  char *pcVar11;
  bool bVar12;
  bool bVar13;
  
  uVar5 = param_3[1];
  bVar2 = *(byte *)((int)param_3 + 1);
  uVar6 = *param_3;
  uVar8 = (uint)*param_3;
  cVar3 = *(char *)((int)param_3 + 3);
  bVar12 = false;
  bVar4 = false;
  uVar7 = FUN_004ad280((int *)&param_1);
  if (uVar7 != 0) {
    do {
      if ((uVar7 == (byte)uVar6) && (!bVar12)) goto LAB_00486710;
      if ((uVar7 != uVar8 >> 8) || (bVar12)) {
        if (uVar7 == (byte)uVar5) {
          uVar7 = 0;
          uVar8 = FUN_004ad280((int *)&param_2);
          if (uVar8 == 0) {
            return false;
          }
          uVar9 = FUN_004ad280((int *)&param_1);
          bVar12 = uVar9 == 0x5e;
          if (bVar12) {
            uVar9 = FUN_004ad280((int *)&param_1);
          }
          bVar13 = uVar9 == 0x5d;
          if (bVar13) {
            uVar9 = FUN_004ad280((int *)&param_1);
          }
          bVar13 = bVar13 && uVar8 == 0x5d;
          if (uVar9 == 0) {
            return false;
          }
          while (uVar9 != 0x5d) {
            if ((((uVar9 == 0x2d) && (*param_1 != ']')) && (*param_1 != '\0')) && (uVar7 != 0)) {
              uVar9 = FUN_004ad280((int *)&param_1);
              if ((uVar7 <= uVar8) && (uVar8 <= uVar9)) {
                bVar13 = true;
              }
              uVar7 = 0;
            }
            else {
              uVar7 = uVar9;
              if (uVar8 == uVar9) {
                bVar13 = true;
              }
            }
            uVar9 = FUN_004ad280((int *)&param_1);
            if (uVar9 == 0) {
              return false;
            }
          }
          if (bVar12 == bVar13) {
            return false;
          }
          uVar8 = (uint)bVar2 << 8;
          bVar12 = bVar4;
        }
        else if ((param_4 != uVar7) || (bVar12)) {
          uVar9 = FUN_004ad280((int *)&param_2);
          if (cVar3 != '\0') {
            if ((uVar7 & 0xffffff80) == 0) {
              uVar7 = (uint)(byte)(&DAT_00569620)[uVar7];
            }
            if ((uVar9 & 0xffffff80) == 0) {
              uVar9 = (uint)(byte)(&DAT_00569620)[uVar9];
            }
          }
          if (uVar7 != uVar9) {
            return false;
          }
          bVar12 = false;
          bVar4 = bVar12;
        }
        else {
          bVar12 = true;
          bVar4 = bVar12;
        }
      }
      else {
        uVar7 = FUN_004ad280((int *)&param_2);
        if (uVar7 == 0) {
          return false;
        }
      }
      uVar7 = FUN_004ad280((int *)&param_1);
    } while (uVar7 != 0);
  }
  return *param_2 == 0;
LAB_00486710:
  while ((uVar9 = FUN_004ad280((int *)&param_1), uVar7 = param_4, uVar9 == (byte)uVar6 ||
         (uVar9 == uVar8 >> 8))) {
    if ((uVar9 == uVar8 >> 8) && (uVar7 = FUN_004ad280((int *)&param_2), uVar7 == 0)) {
      return false;
    }
  }
  if (uVar9 == 0) {
    return true;
  }
  if (uVar9 == param_4) {
    uVar9 = FUN_004ad280((int *)&param_1);
    if (uVar9 == 0) {
      return false;
    }
  }
  else if (uVar9 == (byte)uVar5) {
    pbVar10 = param_2;
    if (*param_2 != 0) {
      pcVar11 = param_1 + -1;
      do {
        bVar12 = FUN_00486540(pcVar11,pbVar10,param_3,uVar7);
        if (CONCAT31(extraout_var,bVar12) != 0) break;
        bVar2 = *pbVar10;
        pbVar10 = pbVar10 + 1;
        if (0xbf < bVar2) {
          bVar2 = *pbVar10;
          while ((bVar2 & 0xc0) == 0x80) {
            pbVar1 = pbVar10 + 1;
            pbVar10 = pbVar10 + 1;
            bVar2 = *pbVar1;
          }
        }
      } while (*pbVar10 != 0);
    }
    return *pbVar10 != 0;
  }
  uVar8 = FUN_004ad280((int *)&param_2);
  pcVar11 = param_1;
  if (uVar8 == 0) {
    return false;
  }
  do {
    if (cVar3 == '\0') {
      while (uVar8 != uVar9) {
        uVar8 = FUN_004ad280((int *)&param_2);
        if (uVar8 == 0) {
          return false;
        }
      }
    }
    else {
      if ((uVar8 & 0xffffff80) == 0) {
        uVar8 = (uint)(byte)(&DAT_00569620)[uVar8];
      }
      if ((uVar9 & 0xffffff80) == 0) {
        uVar9 = (uint)(byte)(&DAT_00569620)[uVar9];
      }
      if (uVar8 == 0) {
        return false;
      }
      while (uVar8 != uVar9) {
        uVar8 = FUN_004ad280((int *)&param_2);
        if ((uVar8 & 0xffffff80) == 0) {
          uVar8 = (uint)(byte)(&DAT_00569620)[uVar8];
        }
        if (uVar8 == 0) {
          return false;
        }
      }
    }
    bVar12 = FUN_00486540(pcVar11,param_2,param_3,uVar7);
    if (CONCAT31(extraout_var_00,bVar12) != 0) {
      return true;
    }
    uVar8 = FUN_004ad280((int *)&param_2);
  } while (uVar8 != 0);
  return false;
}


/* FUN_004869b0 @ 004869b0  kind=gamemisc  attributed-by=none  size=109 */

undefined4 * __cdecl FUN_004869b0(int *param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  
  if (*(int *)*param_1 != 0) {
    (*DAT_00582b20)(*(int *)*param_1);
  }
  puVar1 = FUN_004868a0(param_1[1] + param_1[2] + 0x1c);
  puVar2 = (undefined4 *)(param_1[1] + (int)puVar1);
  if (*(int *)*param_1 != 0) {
    (*DAT_00582b18)(*(int *)*param_1);
  }
  if (puVar1 != (undefined4 *)0x0) {
    *puVar2 = puVar1;
    puVar2[1] = puVar2 + 7;
    if (param_1[3] != 0) {
      *(int *)(*param_1 + 0x10) = *(int *)(*param_1 + 0x10) + 1;
    }
    return puVar2;
  }
  return (undefined4 *)0x0;
}


/* FUN_00486a20 @ 00486a20  kind=gamemisc  attributed-by=none  size=195 */

void __cdecl FUN_00486a20(int param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 *puVar4;
  
  if (*(uint *)(param_1 + 4) < *(uint *)(param_1 + 0x10)) {
    do {
      puVar2 = *(undefined4 **)(param_1 + 0x18);
      if (puVar2 == (undefined4 *)0x0) {
        return;
      }
      iVar3 = *(int *)puVar2[4];
      if ((puVar2[5] != 0) || (puVar2 == *(undefined4 **)(iVar3 + 0x18))) {
        if (puVar2[6] != 0) {
          *(undefined4 *)(puVar2[6] + 0x14) = puVar2[5];
        }
        if (puVar2[5] != 0) {
          *(undefined4 *)(puVar2[5] + 0x18) = puVar2[6];
        }
        if (*(undefined4 **)(iVar3 + 0x14) == puVar2) {
          *(undefined4 *)(iVar3 + 0x14) = puVar2[5];
        }
        if (*(undefined4 **)(iVar3 + 0x18) == puVar2) {
          *(undefined4 *)(iVar3 + 0x18) = puVar2[6];
        }
        puVar2[5] = 0;
        puVar2[6] = 0;
        *(int *)(puVar2[4] + 0x20) = *(int *)(puVar2[4] + 0x20) + -1;
      }
      iVar3 = puVar2[4];
      piVar1 = (int *)(*(int *)(iVar3 + 0x2c) + ((uint)puVar2[2] % *(uint *)(iVar3 + 0x28)) * 4);
      puVar4 = (undefined4 *)*piVar1;
      while (puVar4 != puVar2) {
        piVar1 = puVar4 + 3;
        puVar4 = (undefined4 *)*piVar1;
      }
      *piVar1 = *(int *)(*piVar1 + 0xc);
      *(int *)(iVar3 + 0x24) = *(int *)(iVar3 + 0x24) + -1;
      piVar1 = (int *)puVar2[4];
      FUN_00486af0((undefined4 *)*puVar2);
      if (piVar1[3] != 0) {
        piVar1 = (int *)(*piVar1 + 0x10);
        *piVar1 = *piVar1 + -1;
      }
    } while (*(uint *)(param_1 + 4) < *(uint *)(param_1 + 0x10));
  }
  return;
}


/* FUN_00486bf0 @ 00486bf0  kind=gamemisc  attributed-by=none  size=38 */

void __cdecl FUN_00486bf0(undefined4 *param_1)

{
  int *piVar1;
  
  if (param_1 != (undefined4 *)0x0) {
    piVar1 = (int *)param_1[4];
    FUN_00486af0((undefined4 *)*param_1);
    if (piVar1[3] != 0) {
      piVar1 = (int *)(*piVar1 + 0x10);
      *piVar1 = *piVar1 + -1;
    }
  }
  return;
}


/* FUN_00486c20 @ 00486c20  kind=gamemisc  attributed-by=none  size=96 */

void __cdecl FUN_00486c20(int param_1)

{
  int *piVar1;
  int iVar2;
  
  if (param_1 != 0) {
    iVar2 = **(int **)(param_1 + 0x10);
    if ((*(int *)(param_1 + 0x14) != 0) || (param_1 == *(int *)(iVar2 + 0x18))) {
      if (*(int *)(param_1 + 0x18) != 0) {
        *(int *)(*(int *)(param_1 + 0x18) + 0x14) = *(int *)(param_1 + 0x14);
      }
      if (*(int *)(param_1 + 0x14) != 0) {
        *(undefined4 *)(*(int *)(param_1 + 0x14) + 0x18) = *(undefined4 *)(param_1 + 0x18);
      }
      if (*(int *)(iVar2 + 0x14) == param_1) {
        *(undefined4 *)(iVar2 + 0x14) = *(undefined4 *)(param_1 + 0x14);
      }
      if (*(int *)(iVar2 + 0x18) == param_1) {
        *(undefined4 *)(iVar2 + 0x18) = *(undefined4 *)(param_1 + 0x18);
      }
      *(undefined4 *)(param_1 + 0x14) = 0;
      *(undefined4 *)(param_1 + 0x18) = 0;
      piVar1 = (int *)(*(int *)(param_1 + 0x10) + 0x20);
      *piVar1 = *piVar1 + -1;
    }
  }
  return;
}


/* FUN_00486c80 @ 00486c80  kind=gamemisc  attributed-by=none  size=55 */

void __cdecl FUN_00486c80(int param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = *(int *)(param_1 + 0x10);
  piVar1 = (int *)(*(int *)(iVar2 + 0x2c) + (*(uint *)(param_1 + 8) % *(uint *)(iVar2 + 0x28)) * 4);
  iVar3 = *piVar1;
  while (iVar3 != param_1) {
    piVar1 = (int *)(iVar3 + 0xc);
    iVar3 = *piVar1;
  }
  *piVar1 = *(int *)(*piVar1 + 0xc);
  *(int *)(iVar2 + 0x24) = *(int *)(iVar2 + 0x24) + -1;
  return;
}


/* FUN_00486cc0 @ 00486cc0  kind=gamemisc  attributed-by=none  size=259 */

undefined4 __cdecl FUN_00486cc0(undefined4 *param_1)

{
  int iVar1;
  int iVar2;
  void *_Dst;
  undefined4 uVar3;
  uint uVar4;
  uint uVar5;
  uint local_8;
  
  uVar5 = param_1[10] * 2;
  if (uVar5 < 0x100) {
    uVar5 = 0x100;
  }
  if (*(int *)*param_1 != 0) {
    (*DAT_00582b20)(*(int *)*param_1);
  }
  if ((param_1[10] != 0) && (DAT_00583e74 != (code *)0x0)) {
    (*DAT_00583e74)();
  }
  _Dst = (void *)FUN_004a0350(uVar5 * 4);
  if (_Dst != (void *)0x0) {
    memset(_Dst,0,uVar5 * 4);
  }
  if ((param_1[10] != 0) && (DAT_00583e78 != (code *)0x0)) {
    (*DAT_00583e78)();
  }
  if (*(int *)*param_1 != 0) {
    (*DAT_00582b18)(*(int *)*param_1);
  }
  if (_Dst != (void *)0x0) {
    local_8 = 0;
    if (param_1[10] != 0) {
      do {
        iVar2 = *(int *)(param_1[0xb] + local_8 * 4);
        while (iVar2 != 0) {
          uVar4 = *(uint *)(iVar2 + 8) % uVar5;
          iVar1 = *(int *)(iVar2 + 0xc);
          *(undefined4 *)(iVar2 + 0xc) = *(undefined4 *)((int)_Dst + uVar4 * 4);
          *(int *)((int)_Dst + uVar4 * 4) = iVar2;
          iVar2 = iVar1;
        }
        local_8 = local_8 + 1;
      } while (local_8 < (uint)param_1[10]);
    }
    FUN_00466dd0(param_1[0xb]);
    param_1[0xb] = _Dst;
    param_1[10] = uVar5;
  }
  uVar3 = 7;
  if (param_1[0xb] != 0) {
    uVar3 = 0;
  }
  return uVar3;
}


/* FUN_00486dd0 @ 00486dd0  kind=gamemisc  attributed-by=none  size=205 */

void __cdecl FUN_00486dd0(int param_1,uint param_2)

{
  undefined4 *puVar1;
  int iVar2;
  int *piVar3;
  undefined4 *puVar4;
  uint local_8;
  
  local_8 = 0;
  if (*(int *)(param_1 + 0x28) != 0) {
    do {
      puVar4 = (undefined4 *)(*(int *)(param_1 + 0x2c) + local_8 * 4);
      puVar1 = (undefined4 *)*puVar4;
      while (puVar1 != (undefined4 *)0x0) {
        if ((uint)puVar1[2] < param_2) {
          puVar4 = puVar1 + 3;
        }
        else {
          *(int *)(param_1 + 0x24) = *(int *)(param_1 + 0x24) + -1;
          *puVar4 = puVar1[3];
          iVar2 = *(int *)puVar1[4];
          if ((puVar1[5] != 0) || (puVar1 == *(undefined4 **)(iVar2 + 0x18))) {
            if (puVar1[6] != 0) {
              *(undefined4 *)(puVar1[6] + 0x14) = puVar1[5];
            }
            if (puVar1[5] != 0) {
              *(undefined4 *)(puVar1[5] + 0x18) = puVar1[6];
            }
            if (*(undefined4 **)(iVar2 + 0x14) == puVar1) {
              *(undefined4 *)(iVar2 + 0x14) = puVar1[5];
            }
            if (*(undefined4 **)(iVar2 + 0x18) == puVar1) {
              *(undefined4 *)(iVar2 + 0x18) = puVar1[6];
            }
            puVar1[5] = 0;
            puVar1[6] = 0;
            *(int *)(puVar1[4] + 0x20) = *(int *)(puVar1[4] + 0x20) + -1;
          }
          piVar3 = (int *)puVar1[4];
          FUN_00486af0((undefined4 *)*puVar1);
          if (piVar3[3] != 0) {
            piVar3 = (int *)(*piVar3 + 0x10);
            *piVar3 = *piVar3 + -1;
          }
        }
        puVar1 = (undefined4 *)*puVar4;
      }
      local_8 = local_8 + 1;
    } while (local_8 < *(uint *)(param_1 + 0x28));
  }
  return;
}


/* FUN_00486ea0 @ 00486ea0  kind=gamemisc  attributed-by=none  size=41 */

undefined4 __cdecl FUN_00486ea0(int param_1)

{
  undefined4 uVar1;
  
  if ((DAT_0058420c == 0) ||
     (uVar1 = DAT_00584228, DAT_00584208 < *(int *)(param_1 + 8) + *(int *)(param_1 + 4))) {
    uVar1 = DAT_00583f64;
  }
  return uVar1;
}


/* FUN_004891f0 @ 004891f0  kind=gamemisc  attributed-by=none  size=311 */

undefined4 __cdecl FUN_004891f0(int *param_1,undefined4 *param_2,int *param_3,char *param_4)

{
  char *pcVar1;
  char *pcVar2;
  char cVar3;
  ushort uVar4;
  int iVar5;
  undefined2 extraout_var_00;
  int *piVar6;
  undefined3 extraout_var;
  undefined4 uVar7;
  undefined4 *puVar8;
  int iVar9;
  int local_10;
  int *local_c;
  int local_8;
  
  if (param_3 == (int *)0x0) {
    return 0;
  }
  local_c = (int *)*param_1;
  puVar8 = (undefined4 *)param_3[2];
  local_8 = 0;
  if (0 < *param_3) {
    do {
      pcVar1 = (char *)*puVar8;
      local_10 = FUN_004889f0(local_c,(int *)*param_2,pcVar1);
      pcVar2 = pcVar1;
      if (local_10 < 1) {
        for (; (pcVar2 != (char *)0x0 && ((*pcVar2 == '\\' || (*pcVar2 == '\x18'))));
            pcVar2 = *(char **)(pcVar2 + 8)) {
        }
        iVar5 = FUN_00498e90(pcVar2,&local_10);
        if (iVar5 == 0) {
          *(undefined2 *)((int)puVar8 + 0xe) = 0;
          uVar4 = FUN_004a69e0(param_1,(int)pcVar1);
          if (CONCAT22(extraout_var_00,uVar4) != 0) {
            return 1;
          }
          piVar6 = (int *)*param_2;
          iVar5 = 0;
          if (0 < *piVar6) {
            iVar9 = 0;
            do {
              cVar3 = FUN_00498610(pcVar1,*(char **)(piVar6[2] + iVar9));
              if (CONCAT31(extraout_var,cVar3) == 0) {
                *(short *)((int)puVar8 + 0xe) = (short)iVar5 + 1;
              }
              iVar5 = iVar5 + 1;
              piVar6 = (int *)*param_2;
              iVar9 = iVar9 + 0x14;
            } while (iVar5 < *piVar6);
          }
        }
        else {
          if (0xfffe < local_10 - 1U) {
            FUN_004962b0(local_c,(byte *)"%r %s BY term out of range - should be between 1 and %d");
            return 1;
          }
          *(short *)((int)puVar8 + 0xe) = (short)local_10;
        }
      }
      else {
        *(short *)((int)puVar8 + 0xe) = (short)local_10;
      }
      local_8 = local_8 + 1;
      puVar8 = puVar8 + 5;
    } while (local_8 < *param_3);
  }
  uVar7 = FUN_004a6ac0(local_c,param_2,param_3,param_4);
  return uVar7;
}


/* FUN_0048a010 @ 0048a010  kind=gamemisc  attributed-by=none  size=105 */

undefined4 __cdecl FUN_0048a010(int param_1,undefined4 param_2,uint param_3)

{
  int iVar1;
  uint local_8;
  
  local_8 = param_3 & 0x7fffffff;
  iVar1 = (*(code *)PTR_SetFilePointer_005837dc)(*(undefined4 *)(param_1 + 8),param_2,&local_8,0);
  if (iVar1 == -1) {
    iVar1 = (*(code *)PTR_GetLastError_005836a4)();
    if (iVar1 != 0) {
      *(int *)(param_1 + 0x14) = iVar1;
      FUN_004c23f0(0x160a,iVar1);
      return 1;
    }
  }
  return 0;
}


/* FUN_0048b480 @ 0048b480  kind=gamemisc  attributed-by=none  size=118 */

undefined4 __cdecl FUN_0048b480(int param_1,ulonglong *param_2)

{
  int *piVar1;
  int iVar2;
  ulonglong uVar3;
  double local_c;
  
  piVar1 = (int *)**(int **)(param_1 + 8);
  if ((*piVar1 < 2) || ((code *)piVar1[0x12] == (code *)0x0)) {
    iVar2 = (*(code *)piVar1[0x10])(piVar1,&local_c);
    local_c = local_c * 86400000.0;
    uVar3 = FUN_0054a946();
    *param_2 = uVar3;
  }
  else {
    iVar2 = (*(code *)piVar1[0x12])(piVar1,param_2);
  }
  if (iVar2 == 0) {
    *(undefined1 *)((int)param_2 + 0x2a) = 1;
    return 0;
  }
  return 1;
}


/* FUN_0048b660 @ 0048b660  kind=gamemisc  attributed-by=none  size=277 */

undefined4 __cdecl FUN_0048b660(int param_1,undefined4 *param_2,uint param_3,int param_4)

{
  undefined4 *puVar1;
  int iVar2;
  uint uVar3;
  
  if (*(int *)(param_1 + 0xec) != 0) {
    return 5;
  }
  if (*(char *)(param_1 + 0xeb) != '\0') {
    FUN_00466dd0(*(int *)(param_1 + 0x104));
  }
  uVar3 = param_3 & 0xfffffff8;
  if ((int)uVar3 < 5) {
    uVar3 = 0;
  }
  if (param_4 < 0) {
    param_4 = 0;
  }
  if ((uVar3 == 0) || (param_4 == 0)) {
    uVar3 = 0;
    puVar1 = (undefined4 *)0x0;
  }
  else {
    puVar1 = param_2;
    if (param_2 == (undefined4 *)0x0) {
      if (DAT_00583e74 != (code *)0x0) {
        (*DAT_00583e74)();
      }
      puVar1 = (undefined4 *)FUN_004a0350(uVar3 * param_4);
      if (DAT_00583e78 != (code *)0x0) {
        (*DAT_00583e78)();
      }
      if (puVar1 != (undefined4 *)0x0) {
        iVar2 = (*DAT_00582af0._4_4_)(puVar1);
        param_4 = iVar2 / (int)uVar3;
      }
    }
  }
  *(undefined4 **)(param_1 + 0x104) = puVar1;
  *(undefined4 *)(param_1 + 0x100) = 0;
  *(short *)(param_1 + 0xe8) = (short)uVar3;
  if (puVar1 == (undefined4 *)0x0) {
    *(undefined4 *)(param_1 + 0x108) = 0;
    *(undefined2 *)(param_1 + 0xea) = 0;
    return 0;
  }
  while (param_4 = param_4 + -1, -1 < param_4) {
    *puVar1 = *(undefined4 *)(param_1 + 0x100);
    *(undefined4 **)(param_1 + 0x100) = puVar1;
    puVar1 = (undefined4 *)((int)puVar1 + uVar3);
  }
  *(undefined4 **)(param_1 + 0x108) = puVar1;
  *(bool *)(param_1 + 0xeb) = param_2 == (undefined4 *)0x0;
  *(undefined1 *)(param_1 + 0xea) = 1;
  return 0;
}


/* FUN_0048d6f0 @ 0048d6f0  kind=gamemisc  attributed-by=none  size=196 */

void __cdecl FUN_0048d6f0(int param_1)

{
  bool bVar1;
  code *pcVar2;
  int iVar3;
  int iVar4;
  int local_8;
  
  bVar1 = true;
  if (DAT_00583e68 != 0) {
    iVar4 = 0;
    do {
      if (DAT_00582acc == 0) {
        iVar3 = 0;
      }
      else {
        iVar3 = (*DAT_00582b10)(2);
        if (iVar3 != 0) {
          (*DAT_00582b18)(iVar3);
        }
      }
      if (iVar4 < DAT_00583e68) {
        pcVar2 = *(code **)(DAT_00583e6c + iVar4 * 4);
      }
      else {
        pcVar2 = (code *)0x0;
        bVar1 = false;
      }
      if (iVar3 != 0) {
        (*DAT_00582b20)(iVar3);
      }
      local_8 = 0;
      if ((pcVar2 != (code *)0x0) &&
         (iVar3 = (*pcVar2)(param_1,&local_8,&PTR_FUN_0056a290), iVar3 != 0)) {
        FUN_004961f0(param_1,iVar3,(byte *)"automatic extension loading failed: %s");
        bVar1 = false;
      }
      FUN_00466dd0(local_8);
      iVar4 = iVar4 + 1;
    } while (bVar1);
  }
  return;
}


/* FUN_0048e670 @ 0048e670  kind=gamemisc  attributed-by=none  size=584 */

uint __cdecl FUN_0048e670(uint param_1,uint *param_2)

{
  void *pvVar1;
  undefined1 uVar2;
  byte bVar3;
  bool bVar4;
  uint *_Dst;
  int iVar5;
  uint *puVar6;
  uint uVar7;
  undefined3 extraout_var;
  undefined3 extraout_var_00;
  byte *pbVar8;
  size_t _Size;
  uint *puVar9;
  uint uVar10;
  int local_24;
  int local_1c;
  uint local_18;
  uint local_10;
  int local_c;
  void *local_8;
  
  local_18 = 0xffffffff;
  _Dst = (uint *)FUN_004a0350(0x200);
  if (_Dst != (uint *)0x0) {
    memset(_Dst,0,0x200);
    *_Dst = param_1;
  }
  _Size = ((int)(((int)(param_1 + 7) >> 0x1f & 7U) + param_1 + 7) >> 3) + 1;
  local_8 = (void *)FUN_004a0350(_Size);
  if (local_8 != (void *)0x0) {
    memset(local_8,0,_Size);
  }
  iVar5 = FUN_004bc920();
  if (iVar5 == 0) {
    puVar6 = (uint *)FUN_004a0350(0x200);
  }
  else {
    puVar6 = (uint *)0x0;
  }
  if (((_Dst != (uint *)0x0) && (local_8 != (void *)0x0)) && (puVar6 != (uint *)0x0)) {
    uVar7 = *param_2;
    local_c = 0;
    while (uVar7 != 0) {
      if (((int)uVar7 < 1) || ((2 < (int)uVar7 && (uVar7 != 5)))) {
        local_24 = 2;
        iVar5 = 4;
        puVar9 = &local_10;
        if (DAT_00582acc == 0) {
          local_1c = 0;
        }
        else {
          local_1c = (*DAT_00582b10)(5);
          if (local_1c != 0) {
            (*DAT_00582b18)(local_1c);
          }
        }
        do {
          uVar2 = FUN_00487580();
          *(undefined1 *)puVar9 = uVar2;
          puVar9 = (uint *)((int)puVar9 + 1);
          iVar5 = iVar5 + -1;
        } while (iVar5 != 0);
        if (local_1c != 0) {
          (*DAT_00582b20)(local_1c);
        }
      }
      else {
        local_10 = param_2[local_c + 2] - 1;
        local_24 = 4;
        param_2[local_c + 2] = param_2[local_c + 3] + param_2[local_c + 2];
      }
      param_2[local_c + 1] = param_2[local_c + 1] - 1;
      if (0 < (int)param_2[local_c + 1]) {
        local_24 = 0;
      }
      local_c = local_c + local_24;
      local_10 = (uint)((longlong)(ulonglong)(local_10 & 0x7fffffff) % (longlong)(int)param_1);
      uVar10 = local_10 + 1;
      pbVar8 = (byte *)(((int)uVar10 >> 3) + (int)local_8);
      bVar3 = '\x01' << ((byte)uVar10 & 7);
      if ((uVar7 & 1) == 0) {
        *pbVar8 = *pbVar8 & ~bVar3;
        FUN_0048e8c0(_Dst,uVar10,puVar6);
      }
      else {
        *pbVar8 = *pbVar8 | bVar3;
        if ((uVar7 != 5) && (uVar7 = FUN_0048ea60(_Dst,uVar10), uVar7 != 0)) goto LAB_0048e896;
      }
      uVar7 = param_2[local_c];
    }
    bVar4 = FUN_0048ec40(_Dst,param_1 + 1);
    pvVar1 = local_8;
    uVar7 = CONCAT31(extraout_var,bVar4) + (*_Dst - param_1);
    uVar10 = 1;
    local_18 = uVar7;
    if (0 < (int)param_1) {
      do {
        bVar4 = FUN_0048ec40(_Dst,uVar10);
        local_18 = uVar10;
        if ((uint)((*(byte *)(((int)uVar10 >> 3) + (int)pvVar1) & (byte)(1 << ((byte)uVar10 & 7)))
                  != 0) != CONCAT31(extraout_var_00,bVar4)) break;
        uVar10 = uVar10 + 1;
        local_18 = uVar7;
      } while ((int)uVar10 <= (int)param_1);
    }
  }
LAB_0048e896:
  FUN_00466dd0((int)puVar6);
  FUN_00466dd0((int)local_8);
  FUN_0048e9a0((int)_Dst);
  return local_18;
}


/* FUN_004907e0 @ 004907e0  kind=gamemisc  attributed-by=none  size=47 */

void __cdecl FUN_004907e0(int *param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = *param_1;
  if (*(char *)(iVar2 + 9) != '\0') {
    piVar1 = (int *)(iVar2 + 0xc);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      iVar3 = *(int *)(*(int *)(iVar2 + 4) + 0x38);
      if (iVar3 != 0) {
        (*DAT_00582b20)(iVar3);
      }
      *(undefined1 *)(iVar2 + 10) = 0;
    }
  }
  return;
}


/* FUN_00491f10 @ 00491f10  kind=gamemisc  attributed-by=none  size=67 */

undefined1 __cdecl FUN_00491f10(undefined4 *param_1)

{
  undefined1 uVar1;
  int *piVar2;
  
  piVar2 = (int *)param_1[1];
  FUN_0048fbc0(param_1);
  uVar1 = *(undefined1 *)(*piVar2 + 7);
  if (*(char *)((int)param_1 + 9) != '\0') {
    piVar2 = param_1 + 3;
    *piVar2 = *piVar2 + -1;
    if (*piVar2 == 0) {
      if (*(int *)(param_1[1] + 0x38) != 0) {
        (*DAT_00582b20)(*(int *)(param_1[1] + 0x38));
      }
      *(undefined1 *)((int)param_1 + 10) = 0;
    }
  }
  return uVar1;
}


/* FUN_00492650 @ 00492650  kind=gamemisc  attributed-by=none  size=178 */

void __cdecl FUN_00492650(int *param_1)

{
  int *piVar1;
  int iVar2;
  
  iVar2 = 0;
  if (0 < param_1[0x24]) {
    do {
      (**(code **)(*param_1 + 0x34))(*param_1,*(undefined4 *)(param_1[0x25] + iVar2 * 4));
      iVar2 = iVar2 + 1;
    } while (iVar2 < param_1[0x24]);
  }
  piVar1 = (int *)param_1[0x25];
  if (param_1[0x7c] != 0) {
    if (((piVar1 != (int *)0x0) && ((int *)param_1[0x41] <= piVar1)) &&
       (piVar1 < (int *)param_1[0x42])) {
      *(int *)param_1[0x7c] = *(int *)param_1[0x7c] + (uint)*(ushort *)(param_1 + 0x3a);
      return;
    }
    iVar2 = (*DAT_00582af0._4_4_)(piVar1);
    *(int *)param_1[0x7c] = *(int *)param_1[0x7c] + iVar2;
    return;
  }
  if (((piVar1 != (int *)0x0) && ((int *)param_1[0x41] <= piVar1)) &&
     (piVar1 < (int *)param_1[0x42])) {
    *piVar1 = param_1[0x40];
    param_1[0x3b] = param_1[0x3b] + -1;
    param_1[0x40] = (int)piVar1;
    return;
  }
  FUN_00466dd0((int)piVar1);
  return;
}


/* FUN_004975c0 @ 004975c0  kind=gamemisc  attributed-by=none  size=63 */

void __cdecl FUN_004975c0(int *param_1,byte *param_2,undefined4 param_3,undefined4 param_4)

{
  byte bVar1;
  
  for (; (*param_2 == 0x9d || (*param_2 == 0x9c)); param_2 = *(byte **)(param_2 + 8)) {
  }
  bVar1 = *param_2;
  if (bVar1 == 0x84) {
    bVar1 = param_2[0x23];
  }
  if ((bVar1 != 0x5e) && ((bVar1 < 0x81 || (0x83 < bVar1)))) {
    FUN_004ae830(param_1,0x49,param_3,param_4);
    return;
  }
  return;
}


/* FUN_004993e0 @ 004993e0  kind=gamemisc  attributed-by=none  size=106 */

bool __cdecl FUN_004993e0(char *param_1,char param_2)

{
  char cVar1;
  bool bVar2;
  
  if (param_2 != 'b') {
    for (; (*param_1 == -99 || (*param_1 == -100)); param_1 = *(char **)(param_1 + 8)) {
    }
    cVar1 = *param_1;
    if (cVar1 == -0x7c) {
      cVar1 = param_1[0x23];
    }
    switch(cVar1) {
    case '^':
      return param_2 == 'a';
    default:
      goto switchD_0049941f_caseD_5f;
    case -0x7e:
      bVar2 = param_2 == 'e';
      break;
    case -0x7d:
      goto switchD_0049941f_caseD_83;
    case -0x68:
      if (-1 < *(short *)(param_1 + 0x1c)) {
        return false;
      }
    case -0x7f:
      bVar2 = param_2 == 'd';
    }
    if ((!bVar2) && (param_2 != 'c')) {
switchD_0049941f_caseD_5f:
      return false;
    }
  }
switchD_0049941f_caseD_83:
  return true;
}


/* FUN_004a0990 @ 004a0990  kind=gamemisc  attributed-by=none  size=133 */

undefined4 __cdecl FUN_004a0990(undefined4 param_1,undefined4 param_2,uint param_3,int param_4)

{
  if (DAT_00583f40 != 0) {
    (*DAT_00582b18)(DAT_00583f40);
  }
  DAT_00583f50 = param_1;
  DAT_00583f54 = param_2;
  DAT_00583f48 = param_3;
  DAT_00583f4c = param_4;
  if ((-1 < param_4) && ((0 < param_4 || (param_3 != 0)))) {
    if ((param_4 <= (int)DAT_00583e18 >> 0x1f) &&
       ((param_4 < (int)DAT_00583e18 >> 0x1f || (param_3 <= DAT_00583e18)))) {
      DAT_00583f64 = 1;
      goto LAB_004a0a01;
    }
  }
  DAT_00583f64 = 0;
LAB_004a0a01:
  if (DAT_00583f40 != 0) {
    (*DAT_00582b20)(DAT_00583f40);
  }
  return 0;
}


/* FUN_004a12e0 @ 004a12e0  kind=gamemisc  attributed-by=none  size=105 */

int __cdecl
FUN_004a12e0(int param_1,undefined4 param_2,undefined4 *param_3,uint param_4,undefined4 param_5)

{
  size_t _Size;
  void *_Dst;
  int iVar1;
  
  _Size = *(size_t *)(param_1 + 4);
  _Dst = (void *)FUN_004a0350(_Size);
  if (_Dst == (void *)0x0) {
    return 7;
  }
  memset(_Dst,0,_Size);
  iVar1 = (**(code **)(param_1 + 0x18))(param_1,param_2,_Dst,param_4 & 0x87f7f,param_5);
  if (iVar1 != 0) {
    FUN_00466dd0((int)_Dst);
    return iVar1;
  }
  *param_3 = _Dst;
  return 0;
}


/* FUN_004a1c90 @ 004a1c90  kind=gamemisc  attributed-by=none  size=77 */

int __cdecl FUN_004a1c90(int param_1)

{
  ushort uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar4 = 0;
  uVar1 = *(ushort *)(param_1 + 0x74);
  iVar2 = *(int *)(param_1 + 0x80);
  iVar3 = *(int *)(*(int *)(param_1 + 0xb4) + 0x28);
  if (iVar3 != 0) {
    iVar4 = (*DAT_00582b44)(iVar3);
  }
  iVar3 = (*DAT_00582af0._4_4_)(param_1);
  return iVar3 + iVar4 * (iVar2 + 0x3c + (uint)uVar1) + *(int *)(param_1 + 0x80);
}


/* FUN_004a5e90 @ 004a5e90  kind=gamemisc  attributed-by=none  size=256 */

uint __cdecl
FUN_004a5e90(uint param_1,byte *param_2,size_t param_3,byte param_4,undefined4 *param_5,int *param_6
            )

{
  uint uVar1;
  int iVar2;
  byte *pbVar3;
  uint uVar4;
  int local_8;
  
  uVar4 = 0;
  local_8 = 0;
  *param_5 = 0;
  iVar2 = FUN_004a7850(param_1);
  if (iVar2 == 0) {
    FUN_004683f0(0x15,"misuse at line %d of [%.10s]");
    return 0x15;
  }
  if (*(int *)(param_1 + 0xc) != 0) {
    (*DAT_00582b18)(*(int *)(param_1 + 0xc));
  }
  pbVar3 = (byte *)FUN_004ad190(param_1,param_2,param_3,'\x02');
  if (pbVar3 != (byte *)0x0) {
    uVar4 = FUN_004a0180(param_1,pbVar3,0xffffffff,param_4,0,param_5,&local_8);
    if ((local_8 != 0) && (param_6 != (int *)0x0)) {
      iVar2 = FUN_004ad230(pbVar3,local_8 - (int)pbVar3);
      iVar2 = FUN_004ad150(param_2,iVar2);
      *param_6 = (int)(param_2 + iVar2);
    }
  }
  FUN_00494b00(param_1,(undefined4 *)pbVar3);
  if ((*(char *)(param_1 + 0x38) != '\0') || (uVar4 == 0xc0a)) {
    FUN_004961f0(param_1,7,(byte *)0x0);
    *(undefined1 *)(param_1 + 0x38) = 0;
    uVar4 = 7;
  }
  uVar1 = *(uint *)(param_1 + 0x30);
  if (*(int *)(param_1 + 0xc) != 0) {
    (*DAT_00582b20)(*(int *)(param_1 + 0xc));
  }
  return uVar1 & uVar4;
}


/* FUN_004ad150 @ 004ad150  kind=gamemisc  attributed-by=none  size=57 */

int __cdecl FUN_004ad150(byte *param_1,int param_2)

{
  byte *pbVar1;
  byte *pbVar2;
  
  pbVar2 = param_1;
  pbVar1 = param_1;
  if (0 < param_2) {
    do {
      pbVar2 = pbVar1 + 2;
      if ((uint)pbVar1[1] * 0x100 + -0xd800 + (uint)*pbVar1 < 0x800) {
        pbVar2 = pbVar1 + 4;
      }
      param_2 = param_2 + -1;
      pbVar1 = pbVar2;
    } while (param_2 != 0);
  }
  return (int)pbVar2 - (int)param_1;
}


/* FUN_004ad190 @ 004ad190  kind=gamemisc  attributed-by=none  size=145 */

undefined4 __cdecl FUN_004ad190(uint param_1,void *param_2,size_t param_3,char param_4)

{
  undefined8 local_2c;
  undefined8 local_24;
  undefined8 local_1c;
  undefined8 local_14;
  undefined8 local_c;
  
  local_24 = 0;
  local_1c = 0;
  local_14 = 0;
  local_c = 0;
  local_2c = (ulonglong)param_1;
  FUN_004b79e0((int *)&local_2c,param_2,param_3,param_4,(undefined *)0x0);
  if (((local_14 & 0x200000000) != 0) && (local_14._7_1_ != '\x01')) {
    FUN_004b7dc0((int *)&local_2c,'\x01');
  }
  if (*(char *)(param_1 + 0x38) != '\0') {
    if ((local_14 & 0x246000000000) != 0) {
      FUN_004b7720((int *)&local_2c);
    }
    FUN_00494b00((int)local_2c,local_c._4_4_);
    return 0;
  }
  return local_2c._4_4_;
}


/* FUN_004ad280 @ 004ad280  kind=gamemisc  attributed-by=none  size=109 */

uint __cdecl FUN_004ad280(int *param_1)

{
  byte bVar1;
  uint uVar2;
  byte *pbVar3;
  
  uVar2 = (uint)*(byte *)*param_1;
  pbVar3 = (byte *)*param_1 + 1;
  *param_1 = (int)pbVar3;
  if (0xbf < uVar2) {
    uVar2 = (uint)(byte)(&DAT_0056c6f8)[uVar2];
    bVar1 = *pbVar3;
    while ((bVar1 & 0xc0) == 0x80) {
      bVar1 = *pbVar3;
      pbVar3 = pbVar3 + 1;
      uVar2 = uVar2 * 0x40 + (bVar1 & 0x3f);
      *param_1 = (int)pbVar3;
      bVar1 = *pbVar3;
    }
    if (((uVar2 < 0x80) || ((uVar2 & 0xfffff800) == 0xd800)) || ((uVar2 & 0xfffffffe) == 0xfffe)) {
      return 0xfffd;
    }
  }
  return uVar2;
}


/* FUN_004b7be0 @ 004b7be0  kind=gamemisc  attributed-by=none  size=91 */

void __cdecl FUN_004b7be0(int *param_1,int param_2)

{
  if ((*(ushort *)(param_1 + 7) & 0x2460) != 0) {
    FUN_004b7720(param_1);
  }
  FUN_00494b00(*param_1,(undefined4 *)param_1[9]);
  if (param_2 < 0) {
    param_2 = 0;
  }
  param_1[1] = 0;
  param_1[9] = 0;
  param_1[8] = 0;
  param_1[7] = 0x1044010;
  param_1[6] = 0;
  param_1[4] = param_2;
  return;
}


/* FUN_004bcb50 @ 004bcb50  kind=gamemisc  attributed-by=none  size=106 */

uint __cdecl FUN_004bcb50(int *param_1,char *param_2,char *param_3,int *param_4)

{
  uint uVar1;
  uint uVar2;
  
  if (param_1[3] != 0) {
    (*DAT_00582b18)(param_1[3]);
  }
  uVar2 = FUN_0049fde0(param_1,param_2,param_3,param_4);
  if (((char)param_1[0xe] != '\0') || (uVar2 == 0xc0a)) {
    FUN_004961f0((int)param_1,7,(byte *)0x0);
    *(undefined1 *)(param_1 + 0xe) = 0;
    uVar2 = 7;
  }
  uVar1 = param_1[0xc];
  if (param_1[3] != 0) {
    (*DAT_00582b20)(param_1[3]);
  }
  return uVar1 & uVar2;
}


/* FUN_004bccb0 @ 004bccb0  kind=gamemisc  attributed-by=none  size=162 */

byte * __cdecl FUN_004bccb0(char *param_1,byte *param_2)

{
  char cVar1;
  byte bVar2;
  byte bVar3;
  byte *pbVar4;
  char *pcVar5;
  byte *pbVar6;
  byte *pbVar7;
  uint uVar8;
  byte *pbVar9;
  bool bVar10;
  
  if (param_1 == (char *)0x0) {
    return (byte *)0x0;
  }
  cVar1 = *param_1;
  pcVar5 = param_1;
  while (cVar1 != '\0') {
    pcVar5 = pcVar5 + 1;
    cVar1 = *pcVar5;
  }
  pbVar9 = (byte *)(param_1 + ((int)pcVar5 - (int)param_1 & 0x3fffffffU) + 1);
  bVar2 = *pbVar9;
  do {
    pbVar6 = pbVar9;
    pbVar7 = param_2;
    if (bVar2 == 0) {
      return (byte *)0x0;
    }
    do {
      bVar3 = *pbVar6;
      bVar10 = bVar3 < *pbVar7;
      pbVar4 = pbVar9;
      if (bVar3 != *pbVar7) {
LAB_004bcd07:
        uVar8 = -(uint)bVar10 | 1;
        goto joined_r0x004bcd10;
      }
      if (bVar3 == 0) break;
      bVar3 = pbVar6[1];
      bVar10 = bVar3 < pbVar7[1];
      if (bVar3 != pbVar7[1]) goto LAB_004bcd07;
      pbVar6 = pbVar6 + 2;
      pbVar7 = pbVar7 + 2;
    } while (bVar3 != 0);
    uVar8 = 0;
joined_r0x004bcd10:
    while (bVar2 != 0) {
      bVar2 = pbVar4[1];
      pbVar4 = pbVar4 + 1;
    }
    pbVar9 = pbVar9 + ((int)pbVar4 - (int)pbVar9 & 0x3fffffffU) + 1;
    if (uVar8 == 0) {
      return pbVar9;
    }
    uVar8 = 0;
    if (pbVar9 != (byte *)0x0) {
      bVar2 = *pbVar9;
      pbVar6 = pbVar9;
      while (bVar2 != 0) {
        pbVar6 = pbVar6 + 1;
        bVar2 = *pbVar6;
      }
      uVar8 = (int)pbVar6 - (int)pbVar9 & 0x3fffffff;
    }
    pbVar9 = pbVar9 + uVar8 + 1;
    bVar2 = *pbVar9;
  } while( true );
}


/* FUN_004bcd60 @ 004bcd60  kind=gamemisc  attributed-by=none  size=48 */

void * __cdecl FUN_004bcd60(undefined4 param_1)

{
  void *pvVar1;
  void *pvVar2;
  
  pvVar1 = FUN_00480740(param_1);
  if (pvVar1 == (void *)0x0) {
    return (void *)0x0;
  }
  pvVar2 = FUN_004bdc10(pvVar1);
  FUN_00466dd0((int)pvVar1);
  return pvVar2;
}


/* FUN_004bdb80 @ 004bdb80  kind=gamemisc  attributed-by=none  size=129 */

void * __cdecl FUN_004bdb80(undefined4 param_1)

{
  int iVar1;
  size_t _Size;
  void *_Dst;
  
  iVar1 = (*(code *)PTR_AreFileApisANSI_0058356c)();
  _Size = (*(code *)PTR_WideCharToMultiByte_00583824)(iVar1 == 0,0,param_1,0xffffffff,0,0,0,0);
  if (_Size == 0) {
    return (void *)0x0;
  }
  _Dst = (void *)FUN_004a0350(_Size);
  if (_Dst != (void *)0x0) {
    memset(_Dst,0,_Size);
    if (_Dst != (void *)0x0) {
      iVar1 = (*(code *)PTR_WideCharToMultiByte_00583824)
                        (iVar1 == 0,0,param_1,0xffffffff,_Dst,_Size,0,0);
      if (iVar1 == 0) {
        FUN_00466dd0((int)_Dst);
        _Dst = (void *)0x0;
      }
      return _Dst;
    }
  }
  return (void *)0x0;
}


/* FUN_004bdc10 @ 004bdc10  kind=gamemisc  attributed-by=none  size=122 */

void * __cdecl FUN_004bdc10(undefined4 param_1)

{
  size_t _Size;
  void *_Dst;
  int iVar1;
  
  _Size = (*(code *)PTR_WideCharToMultiByte_00583824)(0xfde9,0,param_1,0xffffffff,0,0,0,0);
  if (_Size == 0) {
    return (void *)0x0;
  }
  _Dst = (void *)FUN_004a0350(_Size);
  if (_Dst != (void *)0x0) {
    memset(_Dst,0,_Size);
    if (_Dst != (void *)0x0) {
      iVar1 = (*(code *)PTR_WideCharToMultiByte_00583824)
                        (0xfde9,0,param_1,0xffffffff,_Dst,_Size,0,0);
      if (iVar1 == 0) {
        FUN_00466dd0((int)_Dst);
        _Dst = (void *)0x0;
      }
      return _Dst;
    }
  }
  return (void *)0x0;
}


/* FUN_004bdc90 @ 004bdc90  kind=gamemisc  attributed-by=none  size=189 */

void __cdecl FUN_004bdc90(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 local_9c [4];
  int local_8c;
  uint local_8;
  
  local_8 = DAT_00583cc8 ^ (uint)&stack0xfffffffc;
  if (DAT_00583f38 == 0) {
    local_9c[0] = 0x94;
    (*(code *)PTR_GetVersionExA_00583704)(local_9c);
    DAT_00583f38 = (local_8c == 2) + 1;
  }
  if (DAT_00583f38 == 2) {
    uVar2 = 0x1fe;
    iVar1 = DAT_00582bb8 + 2;
  }
  else {
    uVar2 = 1;
    iVar1 = DAT_00582bb8 + 2 + (int)*(short *)(param_1 + 0xe);
  }
  iVar1 = FUN_004c28e0((undefined4 *)(param_1 + 8),iVar1,0,uVar2,0);
  if (iVar1 == 0) {
    iVar1 = (*(code *)PTR_GetLastError_005836a4)();
    if (iVar1 != 0x9e) {
      *(int *)(param_1 + 0x14) = iVar1;
      FUN_004c23f0(0x80a,iVar1);
    }
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


/* FUN_004bebc0 @ 004bebc0  kind=gamemisc  attributed-by=none  size=120 */

void * __cdecl FUN_004bebc0(undefined4 param_1)

{
  int iVar1;
  void *_Dst;
  
  iVar1 = (*(code *)PTR_MultiByteToWideChar_005837ac)(0xfde9,0,param_1,0xffffffff,0,0);
  if (iVar1 == 0) {
    return (void *)0x0;
  }
  _Dst = (void *)FUN_004a0350(iVar1 * 2);
  if (_Dst != (void *)0x0) {
    memset(_Dst,0,iVar1 * 2);
    if (_Dst != (void *)0x0) {
      iVar1 = (*(code *)PTR_MultiByteToWideChar_005837ac)(0xfde9,0,param_1,0xffffffff,_Dst,iVar1);
      if (iVar1 == 0) {
        FUN_00466dd0((int)_Dst);
        _Dst = (void *)0x0;
      }
      return _Dst;
    }
  }
  return (void *)0x0;
}


/* FUN_004c2230 @ 004c2230  kind=gamemisc  attributed-by=none  size=234 */

void __cdecl FUN_004c2230(undefined4 param_1)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  undefined4 local_c0 [4];
  int local_b0;
  undefined8 local_2c;
  undefined8 local_24;
  undefined8 local_1c;
  undefined8 local_14;
  undefined4 local_c;
  uint local_8;
  
  local_8 = DAT_00583cc8 ^ (uint)&stack0xfffffffc;
  if (DAT_00583f38 == 0) {
    local_c0[0] = 0x94;
    (*(code *)PTR_GetVersionExA_00583704)(local_c0);
    DAT_00583f38 = (local_b0 == 2) + 1;
  }
  if (DAT_00583f38 == 2) {
    iVar3 = 0;
    local_2c = 0;
    local_24 = 0;
    local_1c = 0;
    local_14 = 0;
    local_c = 0;
    while( true ) {
      iVar1 = (*(code *)PTR_GetFileAttributesExW_00583674)(param_1,0,&local_2c);
      if (iVar1 != 0) break;
      iVar1 = (*(code *)PTR_GetLastError_005836a4)();
      if ((DAT_00582bbc <= iVar3) || (((iVar1 != 5 && (iVar1 != 0x21)) && (iVar1 != 0x20))))
      goto LAB_004c230b;
      iVar3 = iVar3 + 1;
      (*(code *)PTR_Sleep_005837e8)(iVar3 * DAT_00582bc0);
    }
    uVar2 = (uint)local_2c;
  }
  else {
    uVar2 = (*(code *)PTR_GetFileAttributesA_0058365c)(param_1);
  }
  if ((uVar2 != 0xffffffff) && ((uVar2 & 0x10) != 0)) {
    __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
    return;
  }
LAB_004c230b:
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


/* FUN_004c2320 @ 004c2320  kind=gamemisc  attributed-by=none  size=201 */

void __cdecl
FUN_004c2320(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6)

{
  undefined8 local_b0;
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 local_a0;
  undefined4 local_9c [4];
  int local_8c;
  uint local_8;
  
  local_8 = DAT_00583cc8 ^ (uint)&stack0xfffffffc;
  if (DAT_00583f38 == 0) {
    local_9c[0] = 0x94;
    (*(code *)PTR_GetVersionExA_00583704)(local_9c);
    DAT_00583f38 = (local_8c == 2) + 1;
  }
  if (DAT_00583f38 == 2) {
    _local_a8 = CONCAT44(param_4,param_3);
    local_b0 = 0;
    local_a0 = 0;
    (*(code *)PTR_LockFileEx_00583794)(*param_1,param_2,0,param_5,param_6,&local_b0);
    __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
    return;
  }
  (*(code *)PTR_LockFile_00583788)(*param_1,param_3,param_4,param_5,param_6);
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


/* FUN_004c23f0 @ 004c23f0  kind=gamemisc  attributed-by=none  size=179 */

void __cdecl FUN_004c23f0(undefined4 param_1,undefined4 param_2)

{
  code *pcVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  char local_1fc [500];
  uint local_8;
  
  local_8 = DAT_00583cc8 ^ (uint)&stack0xfffffffc;
  local_1fc[0] = '\0';
  FUN_0047d250(param_2,500,local_1fc);
  uVar3 = 0;
  uVar4 = uVar3;
  if (local_1fc[0] != '\0') {
    do {
      uVar4 = uVar3;
      if ((local_1fc[uVar3] == '\r') || (local_1fc[uVar3] == '\n')) break;
      uVar4 = uVar3 + 1;
      iVar2 = uVar3 + 1;
      uVar3 = uVar4;
    } while (local_1fc[iVar2] != '\0');
    if (499 < uVar4) {
      ___report_rangecheckfailure();
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  local_1fc[uVar4] = '\0';
  FUN_004683f0(param_1,"os_win.c:%d: (%d) %s(%s) - %s");
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


/* FUN_004c24f0 @ 004c24f0  kind=gamemisc  attributed-by=none  size=796 */

int __cdecl FUN_004c24f0(int param_1)

{
  byte *pbVar1;
  char cVar2;
  byte bVar3;
  char *pcVar4;
  undefined8 *puVar5;
  int *_Dst;
  int iVar6;
  int iVar7;
  undefined4 uVar8;
  byte *pbVar9;
  char *pcVar10;
  uint uVar11;
  byte *pbVar12;
  int *piVar13;
  
  puVar5 = (undefined8 *)FUN_004a0350(0x10);
  if (puVar5 == (undefined8 *)0x0) {
    return 0xc0a;
  }
  *puVar5 = 0;
  puVar5[1] = 0;
  pcVar4 = *(char **)(param_1 + 0x1c);
  uVar11 = 0;
  if (pcVar4 != (char *)0x0) {
    cVar2 = *pcVar4;
    pcVar10 = pcVar4;
    while (cVar2 != '\0') {
      pcVar10 = pcVar10 + 1;
      cVar2 = *pcVar10;
    }
    uVar11 = (int)pcVar10 - (int)pcVar4 & 0x3fffffff;
  }
  _Dst = (int *)FUN_004a0350(uVar11 + 0x59);
  if (_Dst == (int *)0x0) {
    FUN_00466dd0((int)puVar5);
    return 0xc0a;
  }
  memset(_Dst,0,uVar11 + 0x59);
  _Dst[1] = (int)(_Dst + 0x12);
  FUN_00466a80(uVar11 + 0xf,_Dst + 0x12,(byte *)"%s-shm");
  piVar13 = DAT_00583e84;
  if ((DAT_00582acc != 0) && (iVar6 = (*DAT_00582b10)(2), piVar13 = DAT_00583e84, iVar6 != 0)) {
    (*DAT_00582b18)(iVar6);
    piVar13 = DAT_00583e84;
  }
  for (; piVar13 != (int *)0x0; piVar13 = (int *)piVar13[0x11]) {
    pbVar9 = (byte *)piVar13[1];
    pbVar12 = (byte *)_Dst[1];
    bVar3 = *pbVar9;
    while ((bVar3 != 0 && ((&DAT_00569620)[bVar3] == (&DAT_00569620)[*pbVar12]))) {
      pbVar1 = pbVar9 + 1;
      pbVar9 = pbVar9 + 1;
      pbVar12 = pbVar12 + 1;
      bVar3 = *pbVar1;
    }
    if ((&DAT_00569620)[*pbVar9] == (&DAT_00569620)[*pbVar12]) {
      FUN_00466dd0((int)_Dst);
      goto LAB_004c2789;
    }
  }
  _Dst[4] = -1;
  _Dst[0x11] = (int)DAT_00583e84;
  DAT_00583e84 = _Dst;
  iVar6 = FUN_004bc920();
  if (iVar6 == 0) {
    iVar6 = (*DAT_00582b10)(0);
  }
  else {
    iVar6 = 0;
  }
  *_Dst = iVar6;
  if (iVar6 == 0) {
    iVar6 = 0xc0a;
  }
  else {
    iVar6 = FUN_0046a100(*(undefined4 *)(param_1 + 4),(char *)_Dst[1],(undefined8 *)(_Dst + 2),
                         0x80006,(int *)0x0);
    if (iVar6 == 0) {
      iVar6 = FUN_004c2320(_Dst + 4,3,0x80,0,1,0);
      if (iVar6 == 0) {
        iVar6 = (*(code *)PTR_GetLastError_005836a4)();
        _Dst[0xe] = iVar6;
      }
      else {
        iVar6 = FUN_00466390((int)(_Dst + 2),0,0);
        if (iVar6 != 0) {
          uVar8 = (*(code *)PTR_GetLastError_005836a4)
                            ("winOpenShm",*(undefined4 *)(param_1 + 0x1c),0x819a);
          iVar6 = FUN_004c23f0(0x120a,uVar8);
          if (iVar6 != 0) goto LAB_004c2634;
        }
      }
      iVar6 = FUN_004c28e0(_Dst + 4,0x80,0,1,0);
      if (iVar6 == 0) {
        iVar6 = (*(code *)PTR_GetLastError_005836a4)();
        _Dst[0xe] = iVar6;
      }
      iVar6 = FUN_004c2320(_Dst + 4,1,0x80,0,1,0);
      if (iVar6 == 0) {
        iVar6 = (*(code *)PTR_GetLastError_005836a4)();
        _Dst[0xe] = iVar6;
        iVar6 = 5;
      }
      else {
        iVar6 = 0;
      }
      piVar13 = _Dst;
      if (iVar6 == 0) {
LAB_004c2789:
        *(int **)puVar5 = piVar13;
        piVar13[0xf] = piVar13[0xf] + 1;
        *(undefined8 **)(param_1 + 0x18) = puVar5;
        if ((DAT_00582acc != 0) && (iVar6 = (*DAT_00582b10)(2), iVar6 != 0)) {
          (*DAT_00582b20)(iVar6);
        }
        if (*piVar13 != 0) {
          (*DAT_00582b18)(*piVar13);
        }
        *(int *)((int)puVar5 + 4) = piVar13[0x10];
        piVar13[0x10] = (int)puVar5;
        if (*piVar13 != 0) {
          (*DAT_00582b20)(*piVar13);
        }
        return 0;
      }
    }
  }
LAB_004c2634:
  iVar7 = FUN_004c28e0(_Dst + 4,0x80,0,1,0);
  if (iVar7 == 0) {
    iVar7 = (*(code *)PTR_GetLastError_005836a4)();
    _Dst[0xe] = iVar7;
  }
  FUN_004c2810(*(undefined4 *)(param_1 + 4),0);
  FUN_00466dd0((int)puVar5);
  FUN_00466dd0(0);
  if ((DAT_00582acc != 0) && (iVar7 = (*DAT_00582b10)(2), iVar7 != 0)) {
    (*DAT_00582b20)(iVar7);
  }
  return iVar6;
}


/* FUN_004c2810 @ 004c2810  kind=gamemisc  attributed-by=none  size=200 */

void __cdecl FUN_004c2810(undefined4 param_1,int param_2)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  
  piVar2 = (int *)&DAT_00583e84;
  piVar1 = DAT_00583e84;
  while (piVar1 != (int *)0x0) {
    if (piVar1[0xf] == 0) {
      if (*piVar1 != 0) {
        (*DAT_00582b14)(*piVar1);
      }
      iVar3 = 0;
      if (0 < piVar1[0xc]) {
        do {
          (*(code *)PTR_UnmapViewOfFile_00583818)(*(undefined4 *)(piVar1[0xd] + 4 + iVar3 * 8));
          (*(code *)PTR_CloseHandle_00583590)(*(undefined4 *)(piVar1[0xd] + iVar3 * 8));
          iVar3 = iVar3 + 1;
        } while (iVar3 < piVar1[0xc]);
      }
      if (piVar1[4] != -1) {
        FUN_00465070((int)(piVar1 + 2));
      }
      if (param_2 != 0) {
        if (DAT_00583e74 != (code *)0x0) {
          (*DAT_00583e74)();
        }
        FUN_0046a520(param_1,piVar1[1]);
        if (DAT_00583e78 != (code *)0x0) {
          (*DAT_00583e78)();
        }
      }
      *piVar2 = piVar1[0x11];
      FUN_00466dd0(piVar1[0xd]);
      FUN_00466dd0((int)piVar1);
    }
    else {
      piVar2 = piVar1 + 0x11;
    }
    piVar1 = (int *)*piVar2;
  }
  return;
}


/* FUN_004c28e0 @ 004c28e0  kind=gamemisc  attributed-by=none  size=198 */

void __cdecl
FUN_004c28e0(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5)

{
  undefined8 local_b0;
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 local_a0;
  undefined4 local_9c [4];
  int local_8c;
  uint local_8;
  
  local_8 = DAT_00583cc8 ^ (uint)&stack0xfffffffc;
  if (DAT_00583f38 == 0) {
    local_9c[0] = 0x94;
    (*(code *)PTR_GetVersionExA_00583704)(local_9c);
    DAT_00583f38 = (local_8c == 2) + 1;
  }
  if (DAT_00583f38 == 2) {
    _local_a8 = CONCAT44(param_3,param_2);
    local_b0 = 0;
    local_a0 = 0;
    (*(code *)PTR_UnlockFileEx_0058380c)(*param_1,0,param_4,param_5,&local_b0);
    __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
    return;
  }
  (*(code *)PTR_UnlockFile_00583800)(*param_1,param_2,param_3,param_4,param_5);
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


/* FUN_004c6470 @ 004c6470  kind=gamemisc  attributed-by=none  size=58 */

float * __thiscall FUN_004c6470(void *this,byte *param_1)

{
  *(float *)this = (float)*param_1;
  *(float *)((int)this + 4) = (float)param_1[1];
  *(float *)((int)this + 8) = (float)param_1[2];
  return this;
}


/* FUN_004c64b0 @ 004c64b0  kind=gamemisc  attributed-by=none  size=49 */

float * __thiscall FUN_004c64b0(void *this,int *param_1)

{
  *(float *)this = (float)*param_1;
  *(float *)((int)this + 4) = (float)param_1[1];
  *(float *)((int)this + 8) = (float)param_1[2];
  return this;
}


/* FUN_004c670e @ 004c670e  kind=gamemisc  attributed-by=none  size=89 */

void FUN_004c670e(void)

{
  basic_ostream<char,std::char_traits<char>_> *this;
  int *piVar1;
  bool bVar2;
  int *unaff_EBX;
  int unaff_EBP;
  int unaff_EDI;
  
  *(undefined4 *)(unaff_EBP + -4) = 1;
  std::basic_ios<char,std::char_traits<char>_>::setstate
            ((basic_ios<char,std::char_traits<char>_> *)(*(int *)(*unaff_EBX + 4) + (int)unaff_EBX),
             unaff_EDI,false);
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  bVar2 = std::uncaught_exception();
  this = *(basic_ostream<char,std::char_traits<char>_> **)(unaff_EBP + -0x24);
  if (!bVar2) {
    std::basic_ostream<char,std::char_traits<char>_>::_Osfx(this);
  }
  piVar1 = *(int **)((int)&this[0xe].vbtablePtr +
                    this->vbtablePtr->basic_ios<char,std::char_traits<char>_>_offset);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))();
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


/* FUN_004c7f70 @ 004c7f70  kind=gamemisc  attributed-by=none  size=126 */

void * __cdecl FUN_004c7f70(int *param_1,int *param_2,void *param_3)

{
  void *local_10;
  undefined1 *puStack_c;
  undefined1 local_8;
  undefined3 uStack_7;
  
  puStack_c = &LAB_00554461;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  uStack_7 = 0;
  for (; param_1 != param_2; param_1 = param_1 + 3) {
    local_8 = 1;
    if (param_3 != (void *)0x0) {
      FUN_0041d720(param_3,param_1);
    }
    param_3 = (void *)((int)param_3 + 0xc);
  }
  ExceptionList = local_10;
  return param_3;
}


/* FUN_004c8020 @ 004c8020  kind=gamemisc  attributed-by=none  size=128 */

void * __cdecl FUN_004c8020(undefined4 *param_1,undefined4 *param_2,void *param_3)

{
  void *local_10;
  undefined1 *puStack_c;
  undefined1 local_8;
  undefined3 uStack_7;
  
  puStack_c = &LAB_00554491;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  uStack_7 = 0;
  for (; param_1 != param_2; param_1 = param_1 + 0x62) {
    local_8 = 1;
    if (param_3 != (void *)0x0) {
      FUN_004c8420(param_3,param_1);
    }
    param_3 = (void *)((int)param_3 + 0x188);
  }
  ExceptionList = local_10;
  return param_3;
}


/* FUN_004c8150 @ 004c8150  kind=gamemisc  attributed-by=none  size=21 */

void __cdecl FUN_004c8150(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  uVar1 = *param_1;
  *param_1 = *param_2;
  *param_2 = uVar1;
  return;
}


/* FUN_004c8170 @ 004c8170  kind=gamemisc  attributed-by=none  size=23 */

void __cdecl FUN_004c8170(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  uVar1 = *param_1;
  *param_1 = *param_2;
  *param_2 = uVar1;
  return;
}


/* FUN_004c8190 @ 004c8190  kind=gamemisc  attributed-by=none  size=229 */

basic_iostream<char,std::char_traits<char>_> * __thiscall
FUN_004c8190(void *this,uint param_1,int param_2)

{
  basic_streambuf<char,std::char_traits<char>_> *this_00;
  uint uVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_005544e2;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  if (param_2 != 0) {
    *(undefined ***)this = &PTR_0055b2c0;
    *(undefined ***)((int)this + 0x10) = &PTR_00571718;
    *(code **)((int)this + 0x68) = _vftable__exref;
    *(code **)((int)this + 0x68) = _vftable__exref;
    local_8 = 0;
  }
  this_00 = (basic_streambuf<char,std::char_traits<char>_> *)((int)this + 0x18);
  std::basic_iostream<char,std::char_traits<char>_>::basic_iostream<char,std::char_traits<char>_>
            (this,(basic_streambuf<char,std::char_traits<char>_> *)this_00);
  local_8 = 1;
                    /* inlined constructor or destructor (approx location) for
                       std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_> */
  *(basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_vftable **)
   ((int)this + *(int *)(*(int *)this + 4)) =
       &std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>::vftable;
  *(int *)(*(int *)(*(int *)this + 4) + -4 + (int)this) = *(int *)(*(int *)this + 4) + -0x68;
  std::basic_streambuf<char,std::char_traits<char>_>::basic_streambuf<char,std::char_traits<char>_>
            (this_00);
  uVar1 = 0;
  if ((param_1 & 1) == 0) {
    uVar1 = 4;
  }
                    /* inlined constructor or destructor (approx location) for
                       std::basic_stringbuf<char,std::char_traits<char>,std::allocator<char>_> */
  *this_00 = (basic_streambuf<char,std::char_traits<char>_>)
             &std::basic_stringbuf<char,std::char_traits<char>,std::allocator<char>_>::vftable;
  if ((param_1 & 2) == 0) {
    uVar1 = uVar1 | 2;
  }
  if ((param_1 & 8) != 0) {
    uVar1 = uVar1 | 8;
  }
  if ((param_1 & 4) != 0) {
    uVar1 = uVar1 | 0x10;
  }
  *(uint *)((int)this + 0x54) = uVar1;
  *(undefined4 *)((int)this + 0x50) = 0;
  ExceptionList = local_10;
  return this;
}


/* FUN_004c8350 @ 004c8350  kind=gamemisc  attributed-by=none  size=94 */

undefined4 * __thiscall FUN_004c8350(void *this,undefined4 *param_1)

{
  *(undefined4 *)this = *param_1;
  *(undefined4 *)((int)this + 8) = param_1[2];
  *(undefined4 *)((int)this + 0xc) = param_1[3];
  *(undefined4 *)((int)this + 0x10) = param_1[4];
  *(undefined4 *)((int)this + 0x14) = param_1[5];
  *(undefined4 *)((int)this + 0x18) = param_1[6];
  *(undefined4 *)((int)this + 0x1c) = param_1[7];
  *(undefined4 *)((int)this + 0x20) = param_1[8];
  *(undefined4 *)((int)this + 0x24) = param_1[9];
  *(undefined4 *)((int)this + 0x28) = param_1[10];
  *(undefined4 *)((int)this + 0x2c) = param_1[0xb];
  *(undefined4 *)((int)this + 0x30) = param_1[0xc];
  *(undefined4 *)((int)this + 0x34) = param_1[0xd];
  *(undefined4 *)((int)this + 0x38) = param_1[0xe];
  return this;
}


/* FUN_004c83b0 @ 004c83b0  kind=gamemisc  attributed-by=none  size=31 */

int __fastcall FUN_004c83b0(int param_1)

{
  *(undefined4 *)(param_1 + 0x2c) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x30) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x34) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x38) = 2;
  return param_1;
}


/* FUN_004ce200 @ 004ce200  kind=gamemisc  attributed-by=none  size=22 */

void __thiscall FUN_004ce200(void *this,int *param_1)

{
  int iVar1;
  
  iVar1 = *(int *)this;
  *param_1 = iVar1;
  *(int *)this = iVar1 + 0x188;
  return;
}


/* FUN_004ce220 @ 004ce220  kind=gamemisc  attributed-by=none  size=41 */

void __thiscall FUN_004ce220(void *this,int *param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  
  *param_1 = *param_2 + *(int *)this;
  iVar1 = param_2[2];
  iVar2 = *(int *)((int)this + 8);
  param_1[1] = param_2[1] + *(int *)((int)this + 4);
  param_1[2] = iVar1 + iVar2;
  return;
}


/* FUN_004ce580 @ 004ce580  kind=gamemisc  attributed-by=none  size=102 */

undefined4 __thiscall FUN_004ce580(void *this,uint param_1)

{
  void *pvVar1;
  
  *(undefined4 *)this = 0;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  if (param_1 == 0) {
    return 0;
  }
  if (0x15555555 < param_1) {
                    /* WARNING: Subroutine does not return */
    std::_Xlength_error("vector<T> too long");
  }
  pvVar1 = operator_new(param_1 * 0xc);
  if (pvVar1 != (void *)0x0) {
    *(void **)this = pvVar1;
    *(void **)((int)this + 4) = pvVar1;
    pvVar1 = (void *)((int)pvVar1 + param_1 * 0xc);
    *(void **)((int)this + 8) = pvVar1;
    return CONCAT31((int3)((uint)pvVar1 >> 8),1);
  }
                    /* WARNING: Subroutine does not return */
  std::_Xbad_alloc();
}


/* FUN_004ce780 @ 004ce780  kind=gamemisc  attributed-by=none  size=84 */

void __thiscall FUN_004ce780(void *this,int param_1)

{
  int *piVar1;
  int *piVar2;
  
  piVar1 = *(int **)(param_1 + 8);
  *(int *)(param_1 + 8) = *piVar1;
  if (*(char *)(*piVar1 + 0xd) == '\0') {
    *(int *)(*piVar1 + 4) = param_1;
  }
  piVar1[1] = *(int *)(param_1 + 4);
  if (param_1 == *(int *)(*(int *)this + 4)) {
    *(int **)(*(int *)this + 4) = piVar1;
    *piVar1 = param_1;
    *(int **)(param_1 + 4) = piVar1;
    return;
  }
  piVar2 = *(int **)(param_1 + 4);
  if (param_1 == *piVar2) {
    *piVar2 = (int)piVar1;
    *piVar1 = param_1;
    *(int **)(param_1 + 4) = piVar1;
    return;
  }
  piVar2[2] = (int)piVar1;
  *piVar1 = param_1;
  *(int **)(param_1 + 4) = piVar1;
  return;
}


/* FUN_004ce8e0 @ 004ce8e0  kind=gamemisc  attributed-by=none  size=162 */

void __thiscall FUN_004ce8e0(void *this,uint param_1)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  
  if (param_1 <= (uint)((*(int *)((int)this + 8) - *(int *)((int)this + 4)) / 0x188)) {
    return;
  }
  iVar1 = (*(int *)((int)this + 4) - *(int *)this) / 0x188;
  if (0xa72f05U - iVar1 < param_1) {
                    /* WARNING: Subroutine does not return */
    std::_Xlength_error("vector<T> too long");
  }
  uVar2 = (*(int *)((int)this + 8) - *(int *)this) / 0x188;
  uVar3 = iVar1 + param_1;
  if (0xa72f05 - (uVar2 >> 1) < uVar2) {
    uVar2 = 0;
    if (uVar3 != 0) {
      uVar2 = uVar3;
    }
    FUN_004ce7e0(this,uVar2);
    return;
  }
  uVar2 = uVar2 + (uVar2 >> 1);
  if (uVar2 < uVar3) {
    uVar2 = uVar3;
  }
  FUN_004ce7e0(this,uVar2);
  return;
}


/* FUN_004cea80 @ 004cea80  kind=gamemisc  attributed-by=none  size=4604 */

void __thiscall FUN_004cea80(void *this,uint *param_1,void *param_2,undefined4 *param_3)

{
  ushort uVar1;
  float *pfVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  void *pvVar5;
  float *pfVar6;
  char cVar7;
  uint uVar8;
  float *pfVar9;
  undefined4 uVar10;
  float *pfVar11;
  int iVar12;
  undefined4 *puVar13;
  int *piVar14;
  undefined1 *puVar15;
  void *pvVar16;
  uint uVar17;
  float fVar18;
  int iVar19;
  bool bVar20;
  float10 fVar21;
  float fVar22;
  double dVar23;
  float fVar24;
  float fVar25;
  undefined4 local_31c;
  int local_318;
  undefined4 *local_314;
  int local_310;
  float *local_30c;
  float *local_308;
  float *local_304;
  void *local_300;
  float local_2fc;
  void *local_2f8;
  void *local_2f4;
  char local_2ed;
  undefined4 *local_2ec;
  float *local_2e8;
  uint local_2e4;
  uint local_2e0;
  uint local_2dc;
  uint local_2d8;
  undefined8 local_2d4;
  undefined8 local_2cc;
  int local_2c4;
  int iStack_2c0;
  undefined1 local_2bc [280];
  float local_1a4;
  float local_1a0;
  char local_19c;
  undefined1 local_19b;
  undefined4 local_198;
  undefined4 local_194;
  undefined2 local_190;
  undefined1 local_18e;
  undefined2 local_18c;
  undefined1 local_188 [256];
  undefined4 local_88;
  undefined4 local_84;
  undefined4 local_80;
  int local_7c;
  undefined1 local_74 [16];
  int local_64;
  int local_60;
  undefined1 local_54 [40];
  float local_2c;
  float local_28;
  float local_24;
  float local_20;
  undefined4 local_1c;
  int local_18;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_0055495b;
  local_10 = ExceptionList;
  uVar8 = DAT_00583cc8 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_300 = param_2;
  local_2ec = param_3;
  local_30c = (float *)(param_1 + 2);
  pfVar9 = (float *)((int)this + 4);
  local_304 = pfVar9;
  local_2f4 = this;
  local_14 = uVar8;
  FUN_00530600(pfVar9,(int *)&local_2e8,(uint *)local_30c);
  pfVar9 = (float *)*pfVar9;
  if (((local_2e8 != pfVar9) && (local_2f8 = (void *)local_2e8[6], local_2f8 != (void *)0x0)) &&
     (0.0 < *(float *)((int)local_2f8 + 0x16c))) {
    if ((*(int *)((int)this + 0xb8) == 0) && (*(char *)((int)local_2f8 + 0x60) == '\0')) {
      FUN_00428400(local_300,param_1);
    }
    else {
      FUN_00530600((void *)((int)this + 4),(int *)&local_2e8,param_1);
      pvVar16 = local_2f8;
      if (local_2e8 == pfVar9) {
        fVar18 = 0.0;
      }
      else {
        fVar18 = local_2e8[6];
      }
      local_2fc = fVar18;
      if (0.0 < (float)param_1[4]) {
        dVar23 = 2.0;
        libm_sse2_pow_precise(uVar8);
        fVar22 = *(float *)((int)pvVar16 + 0x1190) - ((float)param_1[4] * 0.25) / (float)dVar23;
        *(float *)((int)pvVar16 + 0x1190) = fVar22;
        if (fVar22 < 0.0) {
          *(undefined4 *)((int)pvVar16 + 0x1190) = 0;
        }
        if (*(char *)((int)pvVar16 + 0x68) == 'T') {
          *(undefined1 *)((int)pvVar16 + 0x68) = 0;
          *(undefined4 *)((int)pvVar16 + 300) = 3000;
        }
      }
      if ((0.0 <= (float)param_1[4]) && (fVar18 != 0.0)) {
        *(uint *)((int)fVar18 + 0x11d0) = param_1[2];
        *(uint *)((int)fVar18 + 0x11d4) = param_1[3];
        *(uint *)((int)pvVar16 + 0x11d0) = *param_1;
        *(uint *)((int)pvVar16 + 0x11d4) = param_1[1];
        pfVar9 = (float *)FUN_00402b10((void *)((int)fVar18 + 0x13ac),param_1 + 2);
        *pfVar9 = *pfVar9 + 1.0;
        uVar10 = FUN_0040f5a0((int)fVar18);
        if ((char)uVar10 == '\0') {
          if (*(int *)((int)fVar18 + 100) == 0x19) {
            pfVar9 = (float *)FUN_00402b10((void *)((int)pvVar16 + 0x13a4),param_1);
            fVar22 = (float)param_1[4] * 10.0;
          }
          else if (((*(char *)((int)fVar18 + 0xaa8) == '\x03') &&
                   (cVar7 = FUN_0040f8b0((char *)((int)fVar18 + 0xaa8)), cVar7 != '\0')) &&
                  (*(char *)((int)fVar18 + 0x141) == '\x01')) {
            pfVar9 = (float *)FUN_00402b10((void *)((int)pvVar16 + 0x13a4),param_1);
            fVar22 = (float)param_1[4] * 20.0;
          }
          else {
            pfVar9 = (float *)FUN_00402b10((void *)((int)pvVar16 + 0x13a4),param_1);
            fVar22 = (float)param_1[4] * 2.0;
          }
        }
        else {
          pfVar9 = (float *)FUN_00402b10((void *)((int)pvVar16 + 0x13a4),param_1);
          fVar22 = (float)param_1[4];
        }
        *pfVar9 = fVar22 + 0.01 + *pfVar9;
        FUN_004d5f40((int)fVar18,(int)pvVar16,(int)local_300);
      }
      if ((*(ushort *)((int)pvVar16 + 0x7e) & 0x2000) == 0) {
LAB_004ced90:
        pvVar5 = local_2f8;
        if (*(char *)((int)param_1 + 0x45) != '\x03') {
          if (0.0 <= (float)param_1[4]) {
            fVar22 = (float)param_1[0xe];
            fVar24 = (float)param_1[0xf];
            fVar25 = (float)param_1[0x10];
            if ((0 < *(int *)((int)pvVar16 + 300)) && ((int)param_1[6] < 1)) {
              fVar22 = fVar22 * 0.1;
              fVar24 = fVar24 * 0.1;
              fVar25 = fVar25 * 0.1;
            }
            if ((*(char *)((int)pvVar16 + 0x60) != '\x06') &&
               ((((*(char *)((int)local_2f4 + 0xb4) == '\0' &&
                  (*(char *)((int)pvVar16 + 0x60) != '\0')) ||
                 (pvVar16 == *(void **)((int)local_2f4 + 0xb8))) &&
                (*(float *)((int)pvVar16 + 0x4c) * *(float *)((int)pvVar16 + 0x4c) +
                 *(float *)((int)pvVar16 + 0x50) * *(float *)((int)pvVar16 + 0x50) +
                 *(float *)((int)pvVar16 + 0x54) * *(float *)((int)pvVar16 + 0x54) <=
                 fVar24 * fVar24 + fVar22 * fVar22 + fVar25 * fVar25)))) {
              *(float *)((int)pvVar16 + 0x4c) = fVar22;
              *(float *)((int)pvVar16 + 0x50) = fVar24;
              *(float *)((int)pvVar16 + 0x54) = fVar25;
            }
            if (0 < (int)param_1[6]) {
              *(undefined4 *)((int)pvVar16 + 0x34) = 0;
              *(undefined4 *)((int)pvVar16 + 0x38) = 0;
              *(undefined4 *)((int)pvVar16 + 0x3c) = 0;
            }
          }
          uVar8 = param_1[7];
          if (0 < (int)uVar8) {
            if ((int)uVar8 < (int)*(uint *)((int)pvVar16 + 0x130)) {
              uVar8 = *(uint *)((int)pvVar16 + 0x130);
            }
            *(uint *)((int)pvVar16 + 0x130) = uVar8;
          }
          if (*(char *)((int)param_1 + 0x45) == '\x01') {
            fVar18 = *(float *)((int)pvVar16 + 0x170) + 0.25;
            *(float *)((int)pvVar16 + 0x170) = fVar18;
            if (1.0 < fVar18) {
              *(undefined4 *)((int)pvVar16 + 0x170) = 0x3f800000;
            }
          }
          else if (*(char *)((int)param_1 + 0x45) == '\x04') {
            FUN_00408230(pvVar16,(int)local_300);
          }
          else {
            uVar8 = param_1[6];
            if (0 < (int)uVar8) {
              if ((int)uVar8 < (int)*(uint *)((int)pvVar16 + 300)) {
                uVar8 = *(uint *)((int)pvVar16 + 300);
              }
              *(uint *)((int)pvVar16 + 300) = uVar8;
            }
            if ((*(char *)((int)local_2f4 + 0xb4) == '\0') ||
               (pvVar16 == *(void **)((int)local_2f4 + 0xb8))) {
              fVar22 = (float)param_1[4];
              if (fVar22 <= 0.0) {
                if (fVar22 < 0.0) {
                  local_2e8 = (float *)(*(float *)((int)pvVar16 + 0x16c) - fVar22);
                  *(float **)((int)pvVar16 + 0x16c) = local_2e8;
                  fVar21 = FUN_0040fda0((int)pvVar16);
                  local_308 = (float *)(float)fVar21;
                  if ((float)local_308 < (float)local_2e8) {
                    fVar21 = FUN_0040fda0((int)pvVar16);
                    *(float *)((int)pvVar16 + 0x16c) = (float)fVar21;
                  }
                  if ((*(char *)((int)local_2f4 + 0xb4) == '\0') &&
                     (local_2e8 = (float *)**(float **)((int)local_2f4 + 4),
                     local_2e8 != *(float **)((int)local_2f4 + 4))) {
                    do {
                      pfVar9 = local_2e8;
                      if ((local_2e8[6] != 0.0) &&
                         ((uVar10 = FUN_004cfcc0((int)local_2fc,(int)local_2e8[6]),
                          (char)uVar10 != '\0' &&
                          (iVar12 = *(int *)((int)pfVar9[6] + 0x13a4),
                          piVar14 = (int *)FUN_00530600((void *)((int)pfVar9[6] + 0x13a4),
                                                        (int *)&local_308,
                                                        (uint *)((int)local_2f8 + 8)),
                          fVar18 = local_2fc, *piVar14 != iVar12)))) {
                        pfVar11 = (float *)FUN_00402b10((void *)((int)pfVar9[6] + 0x13a4),
                                                        (uint *)((int)local_2fc + 8));
                        *pfVar11 = *pfVar11 - (float)param_1[4] * 0.1;
                        FUN_004d5f40((int)fVar18,(int)pfVar9[6],(int)local_300);
                      }
                      FUN_00407a50((int *)&local_2e8);
                    } while (local_2e8 != (float *)*local_304);
                  }
                }
              }
              else if (*(char *)((int)param_1 + 0x45) == '\x05') {
                piVar14 = (int *)**(int **)((int)pvVar16 + 0x1178);
                if (piVar14 != *(int **)((int)pvVar16 + 0x1178)) {
                  do {
                    if ((char)piVar14[2] == '\x06') {
                      fVar18 = (float)piVar14[3];
                      fVar22 = (float)param_1[4];
                      piVar14[3] = (int)(fVar18 - fVar22);
                      if (fVar18 - fVar22 <= 0.0) {
                        piVar14[3] = 0;
                        piVar14[4] = 0;
                      }
                      FUN_004063d0((int)&local_2e4);
                      local_2e4 = *param_1;
                      local_2d4 = *(ulonglong *)(piVar14 + 2);
                      local_2e0 = param_1[1];
                      local_2dc = param_1[2];
                      local_2d8 = param_1[3];
                      local_2cc = *(undefined8 *)(piVar14 + 4);
                      local_2c4 = piVar14[6];
                      iStack_2c0 = piVar14[7];
                      FUN_00411040((void *)((int)local_300 + 0x58),(undefined8 *)&local_2e4);
                    }
                    piVar14 = (int *)*piVar14;
                  } while (piVar14 != (int *)*(int *)((int)pvVar5 + 0x1178));
                }
              }
              else {
                uVar8 = FUN_00409620((int)pvVar16);
                if (((char)uVar8 != '\0') &&
                   ((fVar18 == 0.0 || (uVar8 = FUN_00409620((int)fVar18), (char)uVar8 != '\0')))) {
                  *(float *)((int)pvVar16 + 0x16c) =
                       *(float *)((int)pvVar16 + 0x16c) - (float)param_1[4];
                }
              }
              pvVar16 = local_2f8;
              if (*(float *)((int)local_2f8 + 0x16c) <= 0.0) {
                *(undefined4 *)((int)local_2f8 + 0x16c) = 0;
                local_18 = 0x3f800000;
                FUN_00402550(&local_2c,(longlong *)((int)local_2f8 + 0x10));
                local_1c = 0x3f800000;
                local_20 = 3.78351e-44;
                FUN_00428590((void *)((int)local_300 + 8),&local_2c);
                *(undefined4 *)((int)pvVar16 + 0x6c) = 0;
                iVar12 = FUN_00406290(local_2f4,*(uint *)((int)pvVar16 + 0x1b0),
                                      *(uint *)((int)pvVar16 + 0x1b4));
                if (iVar12 != 0) {
                  iVar19 = 0;
                  for (piVar14 = *(int **)(iVar12 + 0xc); piVar14 != *(int **)(iVar12 + 0x10);
                      piVar14 = piVar14 + 0x62) {
                    if (((*piVar14 == 5) && (piVar14[0x5e] == *(int *)((int)pvVar16 + 0x1b8))) &&
                       ((char)piVar14[0xc] != '\0')) {
                      FUN_004d8c90(piVar14,(int)local_300,'\0');
                      local_80 = *(undefined4 *)((int)pvVar16 + 0x1b4);
                      local_84 = *(undefined4 *)((int)pvVar16 + 0x1b0);
                      local_7c = iVar19;
                      FUN_00422da0(local_74,piVar14);
                      FUN_004284f0((void *)((int)local_300 + 0x30),&local_84);
                      break;
                    }
                    iVar19 = iVar19 + 1;
                  }
                }
                FUN_004d2ae0(local_2f4,(int)pvVar16,local_2ec);
                pfVar9 = local_304;
                local_2e8 = *(float **)*local_304;
                if (local_2e8 != (float *)*local_304) {
                  do {
                    if ((local_2e8[6] != 0.0) && (*(char *)((int)local_2e8[6] + 0x60) == '\0')) {
                      FUN_00402c50((void *)((int)local_2e8[6] + 0x10),(uint *)&local_2c,
                                   (uint *)((int)pvVar16 + 0x10));
                    }
                    FUN_00407a50((int *)&local_2e8);
                  } while (local_2e8 != (float *)*pfVar9);
                }
                pfVar9 = (float *)((int)pvVar16 + 0x11c8);
                local_308 = pfVar9;
                if (*(int *)((int)pvVar16 + 0x11c8) != 0 || *(int *)((int)pvVar16 + 0x11cc) != 0) {
                  FUN_00530600(local_304,(int *)&local_2ec,(uint *)pfVar9);
                  puVar13 = (undefined4 *)*local_304;
                  if ((local_2ec != puVar13) && (local_2ec[6] != 0)) {
                    FUN_00530600(local_304,(int *)&local_2ec,(uint *)pfVar9);
                    if (local_2ec == puVar13) {
                      iVar12 = 0;
                    }
                    else {
                      iVar12 = local_2ec[6];
                    }
                    *(undefined4 *)(iVar12 + 0x16c) = 0;
                  }
                }
                fVar21 = FUN_00407d60((float)(int)((uint)*(byte *)((int)pvVar16 + 0x1a8) +
                                                  *(int *)((int)pvVar16 + 400)));
                local_2ec = (undefined4 *)(float)fVar21;
                local_2fc = (float)local_2ec * 20.0;
                if (local_2fc < 1.0) {
                  local_2fc = 1.0;
                }
                iVar12 = FUN_0040f650((int)pvVar16);
                if ((char)iVar12 != '\0') {
                  local_2fc = local_2fc * 20.0;
                }
                uVar1 = *(ushort *)((int)pvVar16 + 0x7e);
                if ((uVar1 & 0x200) != 0) {
                  local_2fc = local_2fc * 10.0;
                }
                if ((uVar1 & 0x800) != 0) {
                  local_2fc = 0.0;
                }
                local_2ed = '\0';
                local_2e4 = 0;
                local_2e0 = 0;
                local_2dc = 0;
                local_2d8 = 0;
                local_2d4 = local_2d4 & 0xffff000000000000;
                local_2cc = 0;
                local_2c4 = 0;
                iStack_2c0 = 0;
                if ((((*(char *)((int)local_2f4 + 0xb4) == '\0') &&
                     (iVar12 = FUN_004286f0(local_2f4,
                                            (int)(*(int *)((int)pvVar16 + 0x1b0) +
                                                 (*(int *)((int)pvVar16 + 0x1b0) >> 0x1f & 7U)) >> 3
                                            ,(int)(*(int *)((int)pvVar16 + 0x1b4) +
                                                  (*(int *)((int)pvVar16 + 0x1b4) >> 0x1f & 7U)) >>
                                             3), iVar12 != 0)) &&
                    (*(char *)(iVar12 + 0x41) != '\x02')) &&
                   (((uVar1 & 0x2000) != 0 ||
                    ((*(int *)(iVar12 + 0x34) == 5 && (*(char *)((int)pvVar16 + 0x1d38) != '\0')))))
                   ) {
                  pfVar9 = *(float **)((int)pvVar16 + 0x13a4);
                  local_2e8 = (float *)*pfVar9;
                  while (local_2e8 != pfVar9) {
                    if (0.0 < local_2e8[6]) {
                      pfVar11 = local_2e8 + 4;
                      FUN_00530600(local_304,(int *)&local_2ec,(uint *)pfVar11);
                      if (((local_2ec != (undefined4 *)*local_304) && (local_2ec[6] != 0)) &&
                         (uVar8 = FUN_00405420(local_2f4,(uint *)pfVar11),
                         *(char *)(uVar8 + 0x60) == '\0')) {
                        switch(*(undefined4 *)(iVar12 + 0x34)) {
                        case 1:
                        case 2:
                        case 3:
                        case 4:
                        case 5:
                        case 0xd:
switchD_004cf51a_caseD_1:
                          local_2ed = '\x01';
                          *(undefined1 *)(iVar12 + 0x41) = 2;
                          break;
                        default:
                          goto switchD_004cf51a_caseD_6;
                        case 7:
                        case 8:
                        case 9:
                        case 10:
                        case 0xb:
                        case 0xc:
                          *(int *)(iVar12 + 0x44) = *(int *)(iVar12 + 0x44) + 1;
                          *(undefined1 *)(iVar12 + 0x41) = 1;
                          if (*(int *)(iVar12 + 0x48) <= *(int *)(iVar12 + 0x44))
                          goto switchD_004cf51a_caseD_1;
                        }
                        FUN_00423c90(&local_2e4,(undefined4 *)(iVar12 + 0x2c));
                        FUN_00422d00(&local_64);
                        pvVar16 = local_2f8;
                        local_64 = (int)(*(int *)((int)local_2f8 + 0x1b0) +
                                        (*(int *)((int)local_2f8 + 0x1b0) >> 0x1f & 7U)) >> 3;
                        local_60 = (int)((*(int *)((int)local_2f8 + 0x1b4) >> 0x1f & 7U) +
                                        *(int *)((int)local_2f8 + 0x1b4)) >> 3;
                        FUN_00423c90(local_54,&local_2e4);
                        FUN_004284a0((void *)((int)local_300 + 0x60),&local_64);
                        if ((local_2ed != '\0') &&
                           (pfVar9 = (float *)((*(int *)((int)pvVar16 + 0x1b0) >> 0x1f & 7U) +
                                               *(int *)((int)pvVar16 + 0x1b0) & 0xfffffff8),
                           local_2e8 = pfVar9, (int)pfVar9 < (int)(pfVar9 + 2))) {
                          do {
                            uVar8 = (*(int *)((int)pvVar16 + 0x1b4) >> 0x1f & 7U) +
                                    *(int *)((int)pvVar16 + 0x1b4) & 0xfffffff8;
                            local_2e8 = pfVar9;
                            if ((int)uVar8 < (int)(uVar8 + 8)) {
                              do {
                                puVar13 = (undefined4 *)FUN_00406290(local_2f4,(uint)pfVar9,uVar8);
                                local_2ec = puVar13;
                                if (puVar13 != (undefined4 *)0x0) {
                                  iVar12 = puVar13[6];
                                  iVar19 = puVar13[0x28];
                                  if (iVar19 < puVar13[7] - iVar12 >> 2) {
                                    do {
                                      puVar3 = *(undefined4 **)(iVar12 + iVar19 * 4);
                                      if (puVar3 != (undefined4 *)0x0) {
                                        (**(code **)*puVar3)(1);
                                      }
                                      iVar12 = puVar13[6];
                                      iVar19 = iVar19 + 1;
                                    } while (iVar19 < puVar13[7] - iVar12 >> 2);
                                  }
                                  FUN_0045f080(puVar13 + 6,local_2ec[0x28]);
                                  pfVar9 = local_2e8;
                                }
                                uVar8 = uVar8 + 1;
                              } while ((int)uVar8 <
                                       ((int)(*(int *)((int)local_2f8 + 0x1b4) +
                                             (*(int *)((int)local_2f8 + 0x1b4) >> 0x1f & 7U)) >> 3)
                                       * 8 + 8);
                            }
                            pfVar9 = (float *)((int)pfVar9 + 1);
                            pvVar16 = local_2f8;
                            local_2e8 = pfVar9;
                          } while ((int)pfVar9 <
                                   ((int)(*(int *)((int)local_2f8 + 0x1b0) +
                                         (*(int *)((int)local_2f8 + 0x1b0) >> 0x1f & 7U)) >> 3) * 8
                                   + 8);
                        }
                        break;
                      }
                    }
                    FUN_00407a50((int *)&local_2e8);
                  }
                }
switchD_004cf51a_caseD_6:
                pfVar9 = *(float **)*local_304;
                pfVar11 = local_304;
                if (pfVar9 != (float *)*local_304) {
                  do {
                    fVar18 = pfVar9[6];
                    if (fVar18 != 0.0) {
                      if (((*(float *)((int)fVar18 + 0x11d0) == *local_30c) &&
                          (*(float *)((int)fVar18 + 0x11d4) == local_30c[1])) ||
                         ((*(float *)((int)fVar18 + 0x11d0) == *local_308 &&
                          (*(float *)((int)fVar18 + 0x11d4) == local_308[1])))) {
                        *(undefined4 *)((int)fVar18 + 0x11d0) = 0;
                        *(undefined4 *)((int)fVar18 + 0x11d4) = 0;
                      }
                      local_310 = 0;
                      puVar13 = (undefined4 *)FUN_004ce660((undefined4 *)0x0,(undefined4 *)0x0);
                      pfVar11 = (float *)**(float **)((int)pfVar9[6] + 0x13a4);
                      local_8 = 0;
                      local_314 = puVar13;
                      local_2e8 = pfVar11;
                      if (pfVar11 != *(float **)((int)pfVar9[6] + 0x13a4)) {
                        do {
                          fVar18 = pfVar11[4];
                          if (((fVar18 == *local_30c) &&
                              (fVar18 = pfVar11[4], pfVar11[5] == local_30c[1])) ||
                             ((fVar18 == *local_308 && (pfVar11[5] == local_308[1])))) {
                            iVar12 = FUN_0052dfb0(puVar13,(undefined4 *)puVar13[1],&local_2e8);
                            if (local_310 == 0x15555554) goto LAB_004cfc8a;
                            puVar13[1] = iVar12;
                            local_310 = local_310 + 1;
                            **(int **)(iVar12 + 4) = iVar12;
                          }
                          if (*(char *)((int)pfVar11 + 0xd) == '\0') {
                            pfVar2 = (float *)pfVar11[2];
                            if (*(char *)((int)pfVar2 + 0xd) == '\0') {
                              cVar7 = *(char *)((int)*pfVar2 + 0xd);
                              pfVar11 = pfVar2;
                              pfVar2 = (float *)*pfVar2;
                              while (local_2e8 = pfVar11, cVar7 == '\0') {
                                cVar7 = *(char *)((int)*pfVar2 + 0xd);
                                pfVar11 = pfVar2;
                                pfVar2 = (float *)*pfVar2;
                              }
                            }
                            else {
                              cVar7 = *(char *)((int)pfVar11[1] + 0xd);
                              pfVar6 = (float *)pfVar11[1];
                              pfVar2 = pfVar11;
                              while ((pfVar11 = pfVar6, local_2e8 = pfVar11, cVar7 == '\0' &&
                                     (pfVar2 == (float *)pfVar11[2]))) {
                                cVar7 = *(char *)((int)pfVar11[1] + 0xd);
                                pfVar6 = (float *)pfVar11[1];
                                pfVar2 = pfVar11;
                              }
                            }
                          }
                        } while (pfVar11 != *(float **)((int)pfVar9[6] + 0x13a4));
                      }
                      for (puVar3 = (undefined4 *)*puVar13; puVar3 != puVar13;
                          puVar3 = (undefined4 *)*puVar3) {
                        FUN_0040a1d0((void *)((int)pfVar9[6] + 0x13a4),&local_31c,(int *)puVar3[2]);
                      }
                      if ((*(char *)((int)local_2f8 + 0x60) == '\x01') &&
                         (*(char *)((int)pfVar9[6] + 0x60) == '\0')) {
                        iVar12 = *(int *)((int)local_2f8 + 0x13a4);
                        piVar14 = (int *)FUN_00530600((void *)((int)local_2f8 + 0x13a4),&local_318,
                                                      (uint *)(pfVar9 + 4));
                        pvVar16 = local_300;
                        if (*piVar14 != iVar12) {
                          local_24 = *local_30c;
                          local_20 = local_30c[1];
                          local_1c = *(undefined4 *)((int)local_2f8 + 100);
                          local_2c = pfVar9[4];
                          local_28 = pfVar9[5];
                          local_18 = (int)local_2fc;
                          local_2ec = *(undefined4 **)((int)local_300 + 0x48);
                          iVar19 = FUN_004203c0(local_2ec,(undefined4 *)local_2ec[1],
                                                (undefined8 *)&local_2c);
                          iVar12 = *(int *)((int)pvVar16 + 0x4c);
                          if (iVar12 == 0x7fffffe) goto LAB_004cfc8a;
                          *(int *)((int)pvVar16 + 0x4c) = iVar12 + 1;
                          local_2ec[1] = iVar19;
                          **(int **)(iVar19 + 4) = iVar19;
                          FUN_004d61c0(local_2f4,(uint *)&local_2c);
                        }
                        if (local_2ed != '\0') {
                          local_2e8 = (float *)(uint)local_2d4._4_1_;
                          fVar21 = FUN_00407d60((float)((int)local_2e8 + (int)local_2d4));
                          local_2ec = (undefined4 *)(float)fVar21;
                          fVar18 = (float)local_2ec * 50.0;
                          local_19b = 0;
                          local_198 = 0;
                          local_194 = 0;
                          local_190 = 0;
                          local_18e = 0;
                          local_88 = 0;
                          memset(local_188,0,0x100);
                          pvVar16 = local_300;
                          local_1a4 = pfVar9[4];
                          local_1a0 = pfVar9[5];
                          local_18c = (undefined2)(int)(fVar18 + 1.0);
                          local_2ec = *(undefined4 **)((int)local_300 + 0x40);
                          local_19c = '\r';
                          iVar12 = FUN_00420380(local_2ec,(undefined4 *)local_2ec[1],&local_1a4);
                          if (*(int *)((int)pvVar16 + 0x44) == 0xdd67c7) {
LAB_004cfc8a:
                    /* WARNING: Subroutine does not return */
                            std::_Xlength_error("list<T> too long");
                          }
                          *(int *)((int)pvVar16 + 0x44) = *(int *)((int)pvVar16 + 0x44) + 1;
                          local_2ec[1] = iVar12;
                          **(int **)(iVar12 + 4) = iVar12;
                          if (pfVar9[6] == *(float *)((int)local_2f4 + 0xb8)) {
                            FUN_00427000((void *)((int)pfVar9[6] + 0x11dc),&local_19c,-1);
                          }
                          uVar8 = rand();
                          uVar8 = uVar8 & 0x80000001;
                          bVar20 = uVar8 == 0;
                          if ((int)uVar8 < 0) {
                            bVar20 = (uVar8 - 1 | 0xfffffffe) == 0xffffffff;
                          }
                          if (bVar20) {
                            puVar15 = (undefined1 *)
                                      FUN_00528bf0(local_2bc,(short)local_2d4,(char)local_2e8,
                                                   (uint)*(byte *)((int)pfVar9[6] + 0x140));
                          }
                          else {
                            puVar15 = (undefined1 *)
                                      FUN_0052c4e0(local_2bc,(short)local_2d4,(char)local_2e8,
                                                   (uint)*(byte *)((int)pfVar9[6] + 0x140));
                          }
                          FUN_00402a70(&local_19c,puVar15);
                          local_2ec = *(undefined4 **)((int)pvVar16 + 0x40);
                          iVar12 = FUN_00420380(local_2ec,(undefined4 *)local_2ec[1],&local_1a4);
                          if (*(int *)((int)pvVar16 + 0x44) == 0xdd67c7) goto LAB_004cfc8a;
                          *(int *)((int)pvVar16 + 0x44) = *(int *)((int)pvVar16 + 0x44) + 1;
                          local_2ec[1] = iVar12;
                          **(int **)(iVar12 + 4) = iVar12;
                          if (pfVar9[6] == *(float *)((int)local_2f4 + 0xb8)) {
                            FUN_00427000((void *)((int)pfVar9[6] + 0x11dc),&local_19c,-1);
                          }
                        }
                      }
                      puVar3 = (undefined4 *)*puVar13;
                      *puVar13 = puVar13;
                      local_8 = 0xffffffff;
                      puVar13[1] = puVar13;
                      local_310 = 0;
                      while (puVar3 != puVar13) {
                        puVar4 = (undefined4 *)*puVar3;
                        operator_delete(puVar3);
                        puVar3 = puVar4;
                      }
                      operator_delete(puVar13);
                      pfVar11 = local_304;
                    }
                    if (*(char *)((int)pfVar9 + 0xd) == '\0') {
                      pfVar2 = (float *)pfVar9[2];
                      if (*(char *)((int)pfVar2 + 0xd) == '\0') {
                        cVar7 = *(char *)((int)*pfVar2 + 0xd);
                        pfVar9 = pfVar2;
                        pfVar2 = (float *)*pfVar2;
                        while (cVar7 == '\0') {
                          cVar7 = *(char *)((int)*pfVar2 + 0xd);
                          pfVar9 = pfVar2;
                          pfVar2 = (float *)*pfVar2;
                        }
                      }
                      else {
                        cVar7 = *(char *)((int)pfVar9[1] + 0xd);
                        pfVar6 = (float *)pfVar9[1];
                        pfVar2 = pfVar9;
                        while ((pfVar9 = pfVar6, cVar7 == '\0' && (pfVar2 == (float *)pfVar9[2]))) {
                          cVar7 = *(char *)((int)pfVar9[1] + 0xd);
                          pfVar6 = (float *)pfVar9[1];
                          pfVar2 = pfVar9;
                        }
                      }
                    }
                  } while (pfVar9 != (float *)*pfVar11);
                }
                uVar8 = *(uint *)((int)local_2f8 + 0x1b0);
                uVar17 = *(uint *)((int)local_2f8 + 0x1b4);
                if ((((-1 < (int)uVar8) && (-1 < (int)uVar17)) && ((int)uVar8 < 0x10000)) &&
                   ((int)uVar17 < 0x10000)) {
                  iVar12 = (int)(uVar8 + ((int)uVar8 >> 0x1f & 0x3fU)) >> 6;
                  iVar19 = (int)(((int)uVar17 >> 0x1f & 0x3fU) + uVar17) >> 6;
                  if (((-1 < iVar12) && (-1 < iVar19)) &&
                     ((iVar12 < 0x400 &&
                      ((iVar19 < 0x400 &&
                       (iVar12 = *(int *)((int)local_2f4 + (iVar12 * 0x400 + iVar19) * 4 + 0xbc),
                       iVar12 != 0)))))) {
                    uVar8 = uVar8 & 0x8000003f;
                    if ((int)uVar8 < 0) {
                      uVar8 = (uVar8 - 1 | 0xffffffc0) + 1;
                    }
                    uVar17 = uVar17 & 0x8000003f;
                    if ((int)uVar17 < 0) {
                      uVar17 = (uVar17 - 1 | 0xffffffc0) + 1;
                    }
                    iVar12 = *(int *)(iVar12 + 0x10018 + (uVar8 * 0x40 + uVar17) * 4);
                    if (((iVar12 != 0) && (iVar19 = *(int *)((int)local_2f8 + 0x1b8), -1 < iVar19))
                       && (iVar19 < *(int *)(iVar12 + 0x1c) - *(int *)(iVar12 + 0x18) >> 2)) {
                      *(undefined4 *)(*(int *)(*(int *)(iVar12 + 0x18) + iVar19 * 4) + 0x38) =
                           1200000;
                      *(undefined4 *)
                       (*(int *)(*(int *)(iVar12 + 0x18) + *(int *)((int)local_2f8 + 0x1b8) * 4) +
                       0x3c) = *(undefined4 *)((int)local_2f4 + 0x800160);
                    }
                  }
                }
              }
            }
          }
        }
      }
      else {
        pfVar9 = *(float **)((int)pvVar16 + 0x13a4);
        local_2e8 = (float *)*pfVar9;
        while (local_2e8 != pfVar9) {
          if (((0.0 < local_2e8[6]) &&
              (FUN_00530600(local_304,(int *)&local_308,(uint *)(local_2e8 + 4)),
              local_308 != (float *)*local_304)) &&
             ((local_308[6] != 0.0 &&
              (pvVar16 = local_2f8, *(char *)((int)local_308[6] + 0x60) == '\0'))))
          goto LAB_004ced90;
          FUN_00407a50((int *)&local_2e8);
        }
      }
    }
  }
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}


/* FUN_004cfd50 @ 004cfd50  kind=gamemisc  attributed-by=none  size=6604 */

void __thiscall
FUN_004cfd50(void *this,float param_1,void *param_2,float param_3,char param_4,char param_5,
            float param_6,undefined4 param_7,float *param_8,undefined4 *param_9,undefined4 *param_10
            ,char param_11,int param_12,undefined4 param_13,char param_14)

{
  undefined4 *puVar1;
  char cVar2;
  undefined1 uVar3;
  uint uVar4;
  int iVar5;
  int *piVar6;
  int iVar7;
  int *piVar8;
  void *pvVar9;
  float10 fVar10;
  float fVar11;
  double dVar12;
  undefined1 auVar13 [16];
  float fVar14;
  undefined1 auStack_348 [4];
  undefined4 *local_344;
  undefined8 *local_340;
  float local_33c;
  void *local_338;
  float local_334;
  float local_330;
  float local_32c;
  undefined4 *local_328;
  float local_324;
  void *local_320;
  undefined4 *local_31c;
  int *local_318;
  int local_314;
  int *local_310;
  undefined4 local_30c;
  int *local_308;
  int local_304;
  undefined4 local_300;
  float fStack_2fc;
  undefined4 local_2f8;
  undefined4 uStack_2f4;
  undefined4 local_2f0;
  undefined4 uStack_2ec;
  undefined4 local_2e8;
  undefined4 local_2e4;
  undefined4 local_2e0;
  undefined4 local_2dc;
  undefined8 local_2d8;
  undefined8 local_2d0;
  undefined8 local_2c8;
  float local_2c0;
  float local_2bc;
  float local_2b8;
  undefined4 local_2b4;
  float local_2b0;
  undefined4 local_2ac;
  float local_2a8;
  float local_2a4;
  float local_2a0;
  float local_29c;
  float local_298;
  undefined4 local_294;
  undefined8 local_290;
  undefined4 local_288;
  undefined4 local_284;
  float local_280;
  char local_27c;
  int local_278;
  undefined4 local_274;
  undefined4 local_270;
  undefined4 local_26c;
  undefined4 local_268;
  undefined4 local_264;
  undefined4 local_260;
  undefined4 local_25c;
  float local_258;
  float local_254;
  float local_250;
  char local_24c;
  undefined2 local_24b;
  float local_244;
  float local_240;
  undefined4 local_23c;
  float local_238;
  float local_234;
  float local_230;
  undefined4 local_22c;
  float local_228;
  undefined4 local_224;
  float local_220;
  float local_21c;
  float local_218;
  undefined4 local_214;
  undefined4 local_210;
  undefined4 local_20c;
  float local_208;
  float local_204;
  float local_200;
  undefined4 local_1fc;
  undefined4 local_1f8;
  undefined4 local_1f4;
  float local_1f0;
  float local_1ec;
  float local_1e8;
  undefined4 local_1e4;
  undefined4 local_1e0;
  undefined4 local_1dc;
  uint local_1d8;
  undefined4 local_1d4;
  undefined4 local_1d0;
  undefined4 local_1cc;
  float local_1c8;
  undefined1 local_1c4;
  undefined4 local_1c0;
  undefined4 local_1b8;
  undefined4 local_1b4;
  undefined4 local_1b0;
  undefined4 local_1ac;
  undefined4 local_1a8;
  undefined4 local_1a4;
  float local_1a0;
  float local_19c;
  float local_198;
  undefined1 local_193;
  float local_18c;
  float local_188;
  float local_184;
  undefined4 local_180;
  undefined4 local_17c;
  undefined4 local_178;
  undefined4 local_174;
  undefined4 local_170;
  undefined4 local_16c;
  undefined4 local_168;
  undefined4 local_164;
  undefined4 local_160;
  undefined4 local_15c;
  undefined4 local_158;
  undefined4 local_154;
  undefined4 local_150;
  float local_14c;
  undefined4 local_148;
  undefined4 local_144;
  undefined4 local_140;
  float local_134;
  float local_130;
  float local_12c;
  uint local_128;
  undefined4 local_124;
  undefined4 local_120;
  undefined4 local_11c;
  float local_118;
  undefined1 local_114;
  undefined4 local_110;
  undefined1 local_108 [24];
  float local_f0;
  float local_ec;
  float local_e8;
  undefined1 local_e3;
  undefined4 local_e0 [3];
  undefined4 local_d4;
  float local_d0;
  undefined4 local_cc;
  uint local_c8;
  undefined4 local_c4;
  undefined4 local_c0;
  undefined4 local_bc;
  float local_b8;
  undefined1 local_b4;
  undefined4 local_b0;
  undefined1 local_a8 [24];
  float local_90;
  float local_8c;
  float local_88;
  undefined1 local_83;
  undefined4 local_80 [3];
  undefined4 local_74;
  float local_70;
  undefined4 local_6c;
  undefined4 local_68;
  undefined4 local_64;
  undefined4 local_60;
  undefined4 local_5c;
  float local_58;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  uint local_1c;
  void *local_14;
  undefined1 *puStack_10;
  undefined4 local_c;
  
  local_c = 0xffffffff;
  puStack_10 = &LAB_005549b1;
  local_14 = ExceptionList;
  local_1c = DAT_00583cc8 ^ (uint)auStack_348;
  uVar4 = DAT_00583cc8 ^ (uint)&stack0xfffffcb0;
  ExceptionList = &local_14;
  local_33c = param_1;
  local_338 = param_2;
  local_328 = param_9;
  local_31c = param_10;
  local_320 = this;
  if ((*(float *)((int)param_1 + 0x16c) <= 0.0) ||
     ((*(char *)((int)this + 0xb4) != '\0' && (param_1 == *(float *)((int)this + 0xb8)))))
  goto LAB_004d16f7;
  if (param_2 == (void *)0x0) {
    rand();
    *(undefined4 *)((int)param_1 + 0x1184) = 0x3f000000;
    local_334 = param_3;
  }
  else {
    cVar2 = *(char *)((int)param_2 + 0x68);
    if (((cVar2 == '[') || (cVar2 == 'J')) && ((*(byte *)((int)param_1 + 0x5c) & 1) == 0))
    goto LAB_004d16f7;
    if (cVar2 == '\x1c') {
      local_180 = *(undefined4 *)((int)param_1 + 0x10);
      local_17c = *(undefined4 *)((int)param_1 + 0x14);
      local_178 = *(undefined4 *)((int)param_1 + 0x18);
      local_174 = *(undefined4 *)((int)param_1 + 0x1c);
      local_170 = *(undefined4 *)((int)param_1 + 0x20);
      local_16c = *(undefined4 *)((int)param_1 + 0x24);
      local_140 = 0x40400000;
      iVar5 = rand();
      local_144 = 1;
      local_14c = ((float)iVar5 * 0.1) / 32767.0 + 0.1;
      local_168 = 0;
      local_164 = 0;
      local_160 = 0x41200000;
      local_148 = 8;
      local_15c = 0x3f19999a;
      local_158 = 0x3f19999a;
      local_154 = 0x3f800000;
      local_150 = 0x3f800000;
      FUN_00428540(param_9 + 4,&local_180);
    }
    if ((*(char *)((int)param_1 + 0x60) == '\x01') &&
       (((*(byte *)((int)param_1 + 0x124) & 0x80) != 0 ||
        ((*(byte *)((int)param_1 + 0x5c) & 0x20) != 0)))) {
      local_6c = 0x3f800000;
      FUN_00402550(local_80,(longlong *)((int)param_1 + 0x10));
      iVar5 = rand();
      local_70 = ((float)iVar5 * 0.3) / 32767.0 + 1.0;
      local_74 = 0x18;
      FUN_00428590(local_328 + 2,local_80);
      FUN_00422a90((int)&local_128);
      FUN_00402a40(local_108,(undefined4 *)((int)param_1 + 0x10));
      puVar1 = local_328;
      local_128 = *(uint *)((int)local_338 + 8);
      local_124 = *(undefined4 *)((int)local_338 + 0xc);
      local_120 = *(undefined4 *)((int)param_1 + 8);
      local_11c = *(undefined4 *)((int)param_1 + 0xc);
      local_118 = param_3;
      local_f0 = *param_8;
      local_ec = param_8[1];
      local_e8 = param_8[2];
      local_e3 = 3;
      local_114 = 0;
      local_110 = 0;
      FUN_00428400(local_328,&local_128);
      if (*(char *)((int)local_320 + 0xb4) == '\0') {
        FUN_004cea80(local_320,&local_128,puVar1,local_31c);
      }
      goto LAB_004d16f7;
    }
    if (((param_14 != '\0') && (cVar2 = FUN_0040f610((int)param_1), cVar2 != '\0')) &&
       (0.0 < *(float *)((int)param_1 + 0x174))) {
      fVar10 = FUN_004094a0((int)param_1);
      local_340 = (undefined8 *)(param_3 / (float)fVar10);
      fVar11 = *(float *)((int)param_1 + 0x174) + *(float *)((int)param_1 + 0x170);
      fVar14 = *(float *)((int)param_1 + 0x174) + *(float *)((int)param_1 + 0x144);
      *(float *)((int)param_1 + 0x170) = fVar11;
      *(float *)((int)param_1 + 0x144) = fVar14;
      if (1.0 < fVar11) {
        *(undefined4 *)((int)param_1 + 0x170) = 0x3f800000;
      }
      if (*(float *)((int)param_1 + 0x170) < fVar14) {
        *(float *)((int)param_1 + 0x144) = *(float *)((int)param_1 + 0x170);
      }
      FUN_00422a90((int)&local_c8);
      FUN_00402a40(local_a8,(undefined4 *)((int)param_1 + 0x10));
      local_c8 = *(uint *)((int)local_338 + 8);
      local_c4 = *(undefined4 *)((int)local_338 + 0xc);
      local_c0 = *(undefined4 *)((int)param_1 + 8);
      local_bc = *(undefined4 *)((int)param_1 + 0xc);
      local_b8 = param_3;
      local_90 = *param_8 * 0.5;
      local_8c = param_8[1] * 0.5;
      fVar11 = *(float *)((int)param_1 + 0x174) - (float)local_340;
      local_88 = param_8[2] * 0.5;
      local_83 = 1;
      local_b4 = 0;
      local_b0 = 0;
      *(float *)((int)param_1 + 0x174) = fVar11;
      if (fVar11 < -1.0) {
        *(undefined4 *)((int)param_1 + 0x174) = 0xbf800000;
      }
      FUN_00428400(param_9,&local_c8);
      local_cc = 0x3f800000;
      FUN_00402550(local_e0,(longlong *)((int)param_1 + 0x10));
      iVar5 = rand();
      local_d4 = 0x18;
      local_d0 = ((float)iVar5 * 0.3) / 32767.0 + 1.0;
      FUN_00428590(param_9 + 2,local_e0);
      if (*(char *)((int)local_320 + 0xb4) == '\0') {
        FUN_004cea80(local_320,&local_c8,param_9,local_31c);
      }
      goto LAB_004d16f7;
    }
    local_340 = (undefined8 *)0x0;
    for (puVar1 = (undefined4 *)**(undefined4 **)((int)param_1 + 0x1178);
        puVar1 != *(undefined4 **)((int)param_1 + 0x1178); puVar1 = (undefined4 *)*puVar1) {
      if (*(char *)(puVar1 + 2) == '\x06') {
        local_340 = (undefined8 *)((float)local_340 + (float)puVar1[3]);
      }
    }
    local_330 = (float)*(int *)((int)local_338 + 0x70);
    iVar5 = FUN_0040fcf0((int)local_338);
    if (local_330 / (float)iVar5 <= 1.0) {
      local_330 = (float)*(int *)((int)local_338 + 0x70);
      iVar5 = FUN_0040fcf0((int)local_338);
      local_32c = local_330 / (float)iVar5;
    }
    else {
      local_32c = 1.0;
    }
    local_32c = 1.0 - local_32c;
    local_330 = local_32c * (float)local_340;
    if (local_330 <= 0.0) {
      local_334 = param_3;
    }
    else {
      FUN_00422a90((int)&local_1d8);
      local_1b8 = *(undefined4 *)((int)param_1 + 0x10);
      local_1b4 = *(undefined4 *)((int)param_1 + 0x14);
      local_1b0 = *(undefined4 *)((int)param_1 + 0x18);
      local_1ac = *(undefined4 *)((int)param_1 + 0x1c);
      local_1a8 = *(undefined4 *)((int)param_1 + 0x20);
      local_1a4 = *(undefined4 *)((int)param_1 + 0x24);
      local_1d8 = *(uint *)((int)local_338 + 8);
      local_1d4 = *(undefined4 *)((int)local_338 + 0xc);
      local_1d0 = *(undefined4 *)((int)param_1 + 8);
      local_1cc = *(undefined4 *)((int)param_1 + 0xc);
      local_1c8 = param_3;
      local_1a0 = *param_8 * 0.5;
      local_19c = param_8[1] * 0.5;
      local_198 = param_8[2] * 0.5;
      local_193 = 5;
      local_1c4 = 0;
      local_1c0 = 0;
      local_134 = local_1a0;
      local_130 = local_19c;
      local_12c = local_198;
      FUN_00428400(param_9,&local_1d8);
      local_224 = 0x3f800000;
      local_238 = (float)*(longlong *)((int)param_1 + 0x10) * 1.5258789e-05;
      local_340 = (undefined8 *)(float)*(longlong *)((int)param_1 + 0x20);
      local_234 = (float)*(longlong *)((int)param_1 + 0x18) * 1.5258789e-05;
      local_230 = (float)local_340 * 1.5258789e-05;
      iVar5 = rand();
      local_22c = 0x5b;
      local_228 = ((float)iVar5 * 0.3) / 32767.0 + 1.0;
      FUN_00428590(param_9 + 2,&local_238);
      if (*(char *)((int)local_320 + 0xb4) == '\0') {
        FUN_004cea80(local_320,&local_1d8,param_9,local_31c);
      }
      local_334 = param_3 - local_330;
      if (local_334 <= 0.0) goto LAB_004d16f7;
    }
    if (param_11 == '\0') {
      fVar10 = FUN_00408300((int)param_1);
    }
    else {
      fVar10 = FUN_00411540((int)param_1);
    }
    pvVar9 = local_338;
    local_340 = (undefined8 *)(float)fVar10;
    local_334 = local_334 - local_32c * (float)local_340;
    if (local_334 < 0.0) {
      local_334 = 0.0;
    }
    local_324 = (float)*(int *)((int)local_338 + 0x70);
    iVar5 = FUN_0040fcf0((int)local_338);
    local_324 = local_324 / (float)iVar5;
    if (0.25 < local_324) {
      local_244 = *param_8;
      local_240 = param_8[1];
      fVar11 = local_240 * local_240 + local_244 * local_244 + param_8[2] * param_8[2];
      if (0.0 < fVar11) {
        dVar12 = (double)fVar11;
        libm_sse2_sqrt_precise();
        local_240 = (1.0 / (float)dVar12) * param_8[1];
        local_244 = *param_8 * (1.0 / (float)dVar12);
      }
      local_244 = local_244 * 4.0;
      local_240 = local_240 * 4.0;
      local_23c = 0x40a00000;
      FUN_00409270(pvVar9,&local_310);
      puVar1 = local_328;
      local_c = 0;
      piVar6 = (int *)*local_310;
      if (piVar6 != local_310) {
        local_340 = (undefined8 *)((int)param_1 + 0x10);
        do {
          FUN_004d2190(local_340,(undefined8 *)&local_244,local_324,param_5,piVar6[2],(int)puVar1);
          piVar6 = (int *)*piVar6;
          param_1 = local_33c;
        } while (piVar6 != local_310);
      }
      piVar6 = (int *)*local_310;
      *local_310 = (int)local_310;
      local_c = 0xffffffff;
      local_310[1] = (int)local_310;
      local_30c = 0;
      if (piVar6 != local_310) {
        do {
          piVar8 = (int *)*piVar6;
          operator_delete(piVar6);
          piVar6 = piVar8;
        } while (piVar8 != local_310);
      }
      operator_delete(local_310);
      pvVar9 = local_338;
    }
    if ((param_5 != '\0') && (0.0 < local_324)) {
      FUN_00409270(pvVar9,&local_318);
      local_c = 1;
      piVar6 = local_318;
      if (local_314 != 0) {
        piVar8 = (int *)*local_318;
        local_33c = 0.0;
        local_330 = 0.1 / (float)((double)local_314 +
                                 *(double *)(&DAT_0055ac20 + (local_314 >> 0x1f) * -8));
        if (piVar8 != local_318) {
          do {
            iVar5 = piVar8[2];
            local_340 = (undefined8 *)0x0;
            if (0 < *(int *)(iVar5 + 0x114)) {
              local_32c = 3.36312e-44;
              do {
                switch(*(undefined1 *)(iVar5 + -1 + (int)local_32c)) {
                case 0x80:
                  fVar10 = FUN_00407d60((float)*(int *)((int)local_32c + piVar8[2]));
                  local_344 = (undefined4 *)(float)fVar10;
                  local_334 = (float)local_344 * local_330 * local_324 + local_334;
                  break;
                case 0x81:
                  fVar10 = FUN_00407d60((float)*(int *)((int)local_32c + piVar8[2]));
                  local_344 = (undefined4 *)(float)fVar10;
                  fVar11 = (float)local_344 * local_330 * local_324;
                  local_334 = fVar11 * 0.5 + local_334;
                  local_33c = fVar11 * 2.0 + local_33c;
                  break;
                case 0x82:
                  fVar10 = FUN_00407d60((float)*(int *)((int)local_32c + piVar8[2]));
                  local_344 = (undefined4 *)(float)fVar10;
                  local_334 = (float)local_344 * local_330 * 0.25 * local_324 + local_334;
                  *(int *)((int)param_1 + 0x134) =
                       (int)(local_324 * 500.0 + (float)*(int *)((int)param_1 + 0x134));
                  break;
                case 0x83:
                  fVar10 = FUN_00407d60((float)*(int *)((int)local_32c + piVar8[2]));
                  local_344 = (undefined4 *)(float)fVar10;
                  local_334 = (float)local_344 * local_330 * 0.25 * local_324 + local_334;
                  *(int *)((int)local_338 + 0x138) =
                       (int)(local_324 * 500.0 + (float)*(int *)((int)local_338 + 0x138));
                }
                local_340 = (undefined8 *)((int)local_340 + 1);
                iVar5 = piVar8[2];
                local_32c = (float)((int)local_32c + 8);
                piVar6 = local_318;
              } while ((int)local_340 < *(int *)(iVar5 + 0x114));
            }
            piVar8 = (int *)*piVar8;
          } while (piVar8 != piVar6);
        }
        pvVar9 = local_338;
        if (5000 < *(int *)((int)param_1 + 0x134)) {
          *(undefined4 *)((int)param_1 + 0x134) = 5000;
        }
        if (5000 < *(int *)((int)local_338 + 0x138)) {
          *(undefined4 *)((int)local_338 + 0x138) = 5000;
        }
        if (0.0 < local_33c) {
          FUN_00422a90((int)&local_68);
          puVar1 = local_328;
          local_48 = *(undefined4 *)((int)pvVar9 + 0x10);
          local_64 = *(undefined4 *)((int)pvVar9 + 0xc);
          local_58 = -local_33c;
          local_44 = *(undefined4 *)((int)pvVar9 + 0x14);
          local_40 = *(undefined4 *)((int)pvVar9 + 0x18);
          local_3c = *(undefined4 *)((int)pvVar9 + 0x1c);
          local_38 = *(undefined4 *)((int)pvVar9 + 0x20);
          local_34 = *(undefined4 *)((int)pvVar9 + 0x24);
          local_68 = *(undefined4 *)((int)pvVar9 + 8);
          local_344 = (undefined4 *)*local_328;
          local_60 = local_68;
          local_5c = local_64;
          iVar7 = FUN_004202b0(local_344,(undefined4 *)local_344[1],&local_68);
          iVar5 = puVar1[1];
          if (iVar5 == 0x3333332) {
                    /* WARNING: Subroutine does not return */
            std::_Xlength_error("list<T> too long");
          }
          puVar1[1] = iVar5 + 1;
          local_344[1] = iVar7;
          **(int **)(iVar7 + 4) = iVar7;
          *(float *)((int)local_338 + 0x16c) = *(float *)((int)local_338 + 0x16c) + local_33c;
          piVar6 = local_318;
        }
      }
      piVar8 = (int *)*piVar6;
      *piVar6 = (int)piVar6;
      local_c = 0xffffffff;
      local_318[1] = (int)local_318;
      local_314 = 0;
      if (piVar8 != local_318) {
        do {
          piVar6 = (int *)*piVar8;
          operator_delete(piVar8);
          piVar8 = piVar6;
        } while (piVar6 != local_318);
      }
      operator_delete(local_318);
    }
    param_9 = local_328;
    pvVar9 = local_338;
    if (*(char *)((int)local_338 + 0x68) == '\x1c') {
      if (*(float *)((int)param_1 + 0x1184) <= 0.3 && *(float *)((int)param_1 + 0x1184) != 0.3) {
        *(undefined4 *)((int)param_1 + 0x1184) = 0x3e99999a;
      }
    }
    else {
      if (param_14 == '\0') goto LAB_004d0e7e;
      *(undefined4 *)((int)param_1 + 0x1184) = 0x3f800000;
    }
    if (param_14 != '\0') {
      if (param_11 == '\0') {
        if (param_12 != 0x1c) {
          local_294 = 0x3f800000;
          local_2a8 = (float)*(longlong *)((int)param_1 + 0x10) * 1.5258789e-05;
          local_344 = (undefined4 *)(float)*(longlong *)((int)param_1 + 0x20);
          local_2a4 = (float)*(longlong *)((int)param_1 + 0x18) * 1.5258789e-05;
          local_2a0 = (float)local_344 * 1.5258789e-05;
          FUN_00409270(local_338,&local_308);
          local_340 = (undefined8 *)0xffffffff;
          local_c = 2;
          if (local_304 != 0) {
            local_340 = (undefined8 *)(uint)*(byte *)(*(int *)(*local_308 + 8) + 1);
          }
          if (*(char *)((int)pvVar9 + 0x68) == 'D') {
            local_340 = (undefined8 *)0x11;
          }
          iVar5 = rand();
          local_298 = ((float)iVar5 * 0.2) / 32767.0 + 0.9;
          if (param_4 == '\0') {
            switch(local_340) {
            case (undefined8 *)0x0:
            case (undefined8 *)0x1:
              local_298 = local_298 + 0.1;
            case (undefined8 *)0xf:
            case (undefined8 *)0x10:
              local_33c = 1.4013e-45;
              break;
            default:
              local_33c = 7.00649e-45;
              break;
            case (undefined8 *)0x3:
            case (undefined8 *)0x4:
              local_33c = 9.80909e-45;
              break;
            case (undefined8 *)0x5:
              local_33c = 4.2039e-45;
              break;
            case (undefined8 *)0x6:
            case (undefined8 *)0x7:
            case (undefined8 *)0x8:
              local_33c = 1.26117e-44;
            }
          }
          else {
            switch(local_340) {
            case (undefined8 *)0x0:
            case (undefined8 *)0x1:
              local_298 = local_298 + 0.1;
            case (undefined8 *)0xf:
            case (undefined8 *)0x10:
              local_33c = 2.8026e-45;
              break;
            default:
              local_33c = 8.40779e-45;
              break;
            case (undefined8 *)0x3:
            case (undefined8 *)0x4:
              local_33c = 1.12104e-44;
              break;
            case (undefined8 *)0x5:
              local_33c = 5.60519e-45;
              break;
            case (undefined8 *)0x6:
            case (undefined8 *)0x7:
            case (undefined8 *)0x8:
              local_33c = 1.4013e-44;
            }
          }
          FUN_0040f2b0((int)pvVar9);
          param_9 = local_328;
          if (*(char *)((int)pvVar9 + 0x68) == '6') {
            local_29c = 1.54143e-44;
          }
          else {
            local_29c = local_33c;
            if (*(char *)((int)pvVar9 + 0x68) == '\n') {
              local_29c = 7.00649e-45;
            }
          }
          FUN_00428590(local_328 + 2,&local_2a8);
          local_c = 0xffffffff;
          FUN_00423710((int *)&local_308);
        }
      }
      else if (*(char *)((int)local_338 + 0x141) == '\x01') {
        local_1f4 = 0x3f800000;
        local_208 = (float)*(longlong *)((int)param_1 + 0x10) * 1.5258789e-05;
        local_344 = (undefined4 *)(float)*(longlong *)((int)param_1 + 0x20);
        local_204 = (float)*(longlong *)((int)param_1 + 0x18) * 1.5258789e-05;
        local_1f8 = 0x3f800000;
        local_200 = (float)local_344 * 1.5258789e-05;
        local_1fc = 0x2a;
        FUN_00428590(local_328 + 2,&local_208);
      }
      else {
        local_1dc = 0x3f800000;
        local_1f0 = (float)*(longlong *)((int)param_1 + 0x10) * 1.5258789e-05;
        local_344 = (undefined4 *)(float)*(longlong *)((int)param_1 + 0x20);
        local_1ec = (float)*(longlong *)((int)param_1 + 0x18) * 1.5258789e-05;
        local_1e0 = 0x3fc00000;
        local_1e8 = (float)local_344 * 1.5258789e-05;
        local_1e4 = 0x27;
        FUN_00428590(local_328 + 2,&local_1f0);
      }
    }
  }
LAB_004d0e7e:
  local_340 = (undefined8 *)
              (*(float *)((int)param_1 + 0x34) * *(float *)((int)param_1 + 0x34) +
               *(float *)((int)param_1 + 0x38) * *(float *)((int)param_1 + 0x38) +
              *(float *)((int)param_1 + 0x3c) * *(float *)((int)param_1 + 0x3c));
  fVar11 = *param_8 * *param_8 + param_8[1] * param_8[1] + param_8[2] * param_8[2];
  if ((float)local_340 < fVar11) {
    local_340 = (undefined8 *)fVar11;
  }
  if ((float)local_340 <
      *(float *)((int)param_1 + 0x34) * *(float *)((int)param_1 + 0x34) +
      *(float *)((int)param_1 + 0x38) * *(float *)((int)param_1 + 0x38) +
      *(float *)((int)param_1 + 0x3c) * *(float *)((int)param_1 + 0x3c)) {
    dVar12 = (double)(*(float *)((int)param_1 + 0x38) * *(float *)((int)param_1 + 0x38) +
                      *(float *)((int)param_1 + 0x34) * *(float *)((int)param_1 + 0x34) +
                     *(float *)((int)param_1 + 0x3c) * *(float *)((int)param_1 + 0x3c));
    libm_sse2_sqrt_precise(uVar4);
    local_32c = 1.0 / (float)dVar12;
    local_344 = (undefined4 *)(local_32c * *(float *)((int)param_1 + 0x34));
    local_330 = local_32c * *(float *)((int)param_1 + 0x38);
    local_32c = local_32c * *(float *)((int)param_1 + 0x3c);
    dVar12 = (double)(float)local_340;
    libm_sse2_sqrt_precise();
    local_184 = (float)dVar12;
    local_18c = local_184 * (float)local_344;
    local_188 = local_184 * local_330;
    local_184 = local_184 * local_32c;
    *(float *)((int)param_1 + 0x34) = local_18c;
    *(float *)((int)param_1 + 0x38) = local_188;
    *(float *)((int)param_1 + 0x3c) = local_184;
  }
  local_270 = *(undefined4 *)((int)param_1 + 0x10);
  local_26c = *(undefined4 *)((int)param_1 + 0x14);
  local_268 = *(undefined4 *)((int)param_1 + 0x18);
  local_264 = *(undefined4 *)((int)param_1 + 0x1c);
  local_260 = *(undefined4 *)((int)param_1 + 0x20);
  local_25c = *(undefined4 *)((int)param_1 + 0x24);
  local_274 = 0;
  local_24b = 0;
  if (local_338 == (void *)0x0) {
    local_290 = 0;
  }
  else {
    local_290 = *(undefined8 *)((int)local_338 + 8);
  }
  for (puVar1 = (undefined4 *)**(undefined4 **)((int)param_1 + 0x1178);
      puVar1 != *(undefined4 **)((int)param_1 + 0x1178); puVar1 = (undefined4 *)*puVar1) {
    if (*(char *)(puVar1 + 2) == '\x01') {
      local_334 = (float)puVar1[3] * local_334;
    }
  }
  local_288 = *(undefined4 *)((int)param_1 + 8);
  local_284 = *(undefined4 *)((int)param_1 + 0xc);
  local_27c = param_4;
  local_258 = *param_8;
  local_254 = param_8[1];
  local_250 = param_8[2];
  local_278 = 0;
  local_24c = param_5;
  local_280 = local_334;
  if (param_12 == 0x11) {
    local_2f0 = *(undefined4 *)((int)local_338 + 8);
    fStack_2fc = local_334 * 0.1;
    uStack_2ec = *(undefined4 *)((int)local_338 + 0xc);
    local_344 = *(undefined4 **)((int)param_1 + 0x1178);
    local_2f8 = 3000;
    local_300 = CONCAT31(local_300._1_3_,4);
    iVar5 = FUN_004203c0(local_344,(undefined4 *)local_344[1],(undefined8 *)&local_300);
    if (*(int *)((int)param_1 + 0x117c) == 0x7fffffe) {
                    /* WARNING: Subroutine does not return */
      std::_Xlength_error("list<T> too long");
    }
    local_2d8 = CONCAT44(fStack_2fc,local_300);
    *(int *)((int)param_1 + 0x117c) = *(int *)((int)param_1 + 0x117c) + 1;
    local_2d0 = CONCAT44(uStack_2f4,local_2f8);
    local_344[1] = iVar5;
    local_2c8 = CONCAT44(uStack_2ec,local_2f0);
    **(int **)(iVar5 + 4) = iVar5;
    local_2e8 = *(undefined4 *)((int)local_338 + 8);
    local_2e4 = *(undefined4 *)((int)local_338 + 0xc);
    local_344 = (undefined4 *)param_9[0x16];
    local_2e0 = *(undefined4 *)((int)param_1 + 8);
    local_2dc = *(undefined4 *)((int)param_1 + 0xc);
    iVar5 = FUN_00420080(local_344,(undefined4 *)local_344[1],(undefined8 *)&local_2e8);
    if (param_9[0x17] == 0x5555554) {
                    /* WARNING: Subroutine does not return */
      std::_Xlength_error("list<T> too long");
    }
    param_9[0x17] = param_9[0x17] + 1;
    local_344[1] = iVar5;
    **(int **)(iVar5 + 4) = iVar5;
  }
  if ((param_4 != '\0') && (*(char *)((int)param_1 + 0x60) != '\x06')) {
    local_2ac = 0x3f800000;
    local_2c0 = (float)*(longlong *)((int)param_1 + 0x10) * 1.5258789e-05;
    local_344 = (undefined4 *)(float)*(longlong *)((int)param_1 + 0x20);
    local_2bc = (float)*(longlong *)((int)param_1 + 0x18) * 1.5258789e-05;
    local_2b8 = (float)local_344 * 1.5258789e-05;
    iVar5 = rand();
    local_2b0 = ((float)iVar5 * 0.1) / 32767.0 + 1.0;
    switch(*(undefined4 *)((int)param_1 + 100)) {
    case 0:
      local_2b4 = 0x3c;
      break;
    case 1:
      local_2b4 = 0x3d;
      break;
    case 2:
    case 0x2b:
      local_2b4 = 0x3e;
      break;
    case 3:
    case 0x2d:
      local_2b4 = 0x3f;
      break;
    case 4:
      local_2b4 = 0x40;
      break;
    case 5:
      local_2b4 = 0x41;
      break;
    default:
      goto switchD_004d12bd_caseD_6;
    case 7:
      local_2b4 = 0x42;
      break;
    case 8:
      local_2b4 = 0x43;
      break;
    case 9:
      local_2b4 = 0x44;
      break;
    case 10:
      local_2b4 = 0x45;
      break;
    case 0xb:
      local_2b4 = 0x46;
      break;
    case 0xc:
      local_2b4 = 0x47;
      break;
    case 0xd:
      local_2b4 = 0x4a;
      break;
    case 0xe:
      local_2b4 = 0x4b;
      break;
    case 0xf:
      local_2b4 = 0x48;
      break;
    case 0x10:
      local_2b4 = 0x49;
      break;
    case 0x25:
    case 0x26:
    case 0x27:
    case 0x28:
      local_2b4 = 0x4f;
      break;
    case 0x2e:
    case 0x6c:
    case 0x6d:
    case 0x72:
    case 0x73:
      local_2b4 = 0x4d;
      break;
    case 0x30:
    case 0x33:
    case 0x57:
      local_2b4 = 0x4e;
      break;
    case 0x60:
      local_2b4 = 0x50;
      break;
    case 0x77:
      local_2b4 = 0x4c;
    }
    FUN_00428590(param_9 + 2,&local_2c0);
  }
switchD_004d12bd_caseD_6:
  if (local_338 != (void *)0x0) {
    if ((*(int *)((int)param_1 + 300) < -3000) && (*(char *)((int)param_1 + 0x60) != '\x06')) {
      cVar2 = *(char *)((int)local_338 + 0x68);
      if ((cVar2 == ':') ||
         ((((cVar2 == '\f' || (cVar2 == 'D')) || (cVar2 == ']')) || (cVar2 == 'E')))) {
        param_6 = 1.0;
      }
      iVar5 = FUN_0040f650((int)param_1);
      if ((char)iVar5 != '\0') {
        param_6 = param_6 * 0.15;
      }
      iVar5 = FUN_0040f650((int)local_338);
      if (((char)iVar5 == '\0') && (*(char *)((int)local_338 + 0x60) != '\0')) {
        param_6 = param_6 * 0.1;
      }
      if ((*(char *)((int)local_338 + 0x68) == '[') || (*(char *)((int)local_338 + 0x68) == 'J')) {
        param_6 = 1.0;
      }
      if (*(char *)((int)param_1 + 0x68) == 'T') {
        param_6 = 1.0;
      }
      fVar10 = FUN_00407d60((float)*(int *)((int)local_338 + 400));
      local_344 = (undefined4 *)(float)fVar10;
      fVar10 = FUN_00407d60((float)*(int *)((int)param_1 + 400));
      local_340 = (undefined8 *)(float)fVar10;
      auVar13 = ZEXT816(0x4000000000000000);
      libm_sse2_pow_precise();
      fVar11 = (float)auVar13._0_8_ * param_6;
      if (1.0 < fVar11) {
        fVar11 = 1.0;
      }
      local_340 = (undefined8 *)(fVar11 * 0.9);
      for (puVar1 = (undefined4 *)**(undefined4 **)((int)param_1 + 0x1178);
          puVar1 != *(undefined4 **)((int)param_1 + 0x1178); puVar1 = (undefined4 *)*puVar1) {
        if (*(char *)(puVar1 + 2) == '\x01') {
          local_340 = (undefined8 *)0x0;
        }
      }
      iVar5 = rand();
      if ((float)iVar5 / 32767.0 < (float)local_340) {
        local_278 = FUN_0040ffe0((int)param_1);
        local_20c = 0x3f800000;
        local_250 = 10.0;
        local_220 = (float)*(longlong *)((int)param_1 + 0x10) * 1.5258789e-05;
        local_21c = (float)*(longlong *)((int)param_1 + 0x18) * 1.5258789e-05;
        local_344 = (undefined4 *)param_9[2];
        local_218 = (float)*(longlong *)((int)param_1 + 0x20) * 1.5258789e-05;
        local_210 = 0x3f800000;
        local_214 = 0x17;
        iVar5 = FUN_004f3ba0(local_344,(undefined4 *)local_344[1],&local_220);
        if (param_9[3] == 0x7fffffe) {
                    /* WARNING: Subroutine does not return */
          std::_Xlength_error("list<T> too long");
        }
        param_9[3] = param_9[3] + 1;
        local_344[1] = iVar5;
        **(int **)(iVar5 + 4) = iVar5;
      }
    }
    uVar3 = local_24b._1_1_;
    if (*(char *)((int)local_338 + 0x68) == '\x1c') {
      uVar3 = 1;
    }
    local_24b = CONCAT11(uVar3,(undefined1)local_24b);
  }
  puVar1 = (undefined4 *)*param_9;
  iVar5 = FUN_004202b0(puVar1,(undefined4 *)puVar1[1],(undefined4 *)&local_290);
  if (param_9[1] == 0x3333332) {
                    /* WARNING: Subroutine does not return */
    std::_Xlength_error("list<T> too long");
  }
  param_9[1] = param_9[1] + 1;
  puVar1[1] = iVar5;
  **(int **)(iVar5 + 4) = iVar5;
  if (*(char *)((int)local_320 + 0xb4) == '\0') {
    FUN_004cea80(local_320,(uint *)&local_290,param_9,local_31c);
  }
LAB_004d16f7:
  ExceptionList = local_14;
  __security_check_cookie(local_1c ^ (uint)auStack_348);
  return;
}


/* FUN_004d1860 @ 004d1860  kind=gamemisc  attributed-by=none  size=82 */

undefined4 __thiscall FUN_004d1860(void *this,undefined4 *param_1)

{
  char cVar1;
  undefined4 *puVar2;
  bool bVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  
  puVar2 = *(undefined4 **)((int)this + 0x800154);
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


/* FUN_004d18c0 @ 004d18c0  kind=gamemisc  attributed-by=none  size=143 */

int FUN_004d18c0(int param_1,int param_2)

{
  char cVar1;
  undefined4 in_EAX;
  uint3 uVar4;
  uint uVar2;
  uint uVar3;
  
  uVar4 = (uint3)((uint)in_EAX >> 8);
  if (param_1 == param_2) {
    return (uint)uVar4 << 8;
  }
  cVar1 = *(char *)(param_1 + 0x60);
  uVar3 = CONCAT31(uVar4,cVar1);
  if ((cVar1 == '\x06') || (*(char *)(param_2 + 0x60) == '\x06')) {
    return CONCAT31(uVar4,1);
  }
  if (cVar1 == '\x01') {
    if (*(char *)(param_2 + 0x60) != '\x01') goto LAB_004d193e;
    uVar2 = FUN_0040f710(param_1);
    uVar3 = FUN_0040f710(param_2);
    if ((char)uVar3 != (char)uVar2) goto LAB_004d193e;
  }
  if (*(char *)(param_2 + 0x60) == '\x01') {
    if (*(char *)(param_1 + 0x60) != '\x01') goto LAB_004d193e;
    uVar2 = FUN_0040f710(param_1);
    uVar3 = FUN_0040f710(param_2);
    if ((char)uVar2 != (char)uVar3) goto LAB_004d193e;
  }
  if (((*(byte *)(param_1 + 0x124) & 0x20) == 0) && ((*(byte *)(param_2 + 0x124) & 0x20) == 0)) {
    return uVar3 & 0xffffff00;
  }
LAB_004d193e:
  return CONCAT31((int3)(uVar3 >> 8),1);
}


/* FUN_004d1a70 @ 004d1a70  kind=gamemisc  attributed-by=none  size=1805 */

/* WARNING: Removing unreachable block (ram,0x004d1fdd) */

void __thiscall
FUN_004d1a70(void *this,uint param_1,uint param_2,int param_3,int param_4,int param_5,int param_6)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  void *pvVar4;
  ushort *puVar5;
  uint uVar6;
  undefined *puVar7;
  void *pvVar8;
  undefined *puVar9;
  uint uVar10;
  uint uVar11;
  int iVar12;
  byte bVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  int iVar17;
  int local_1c;
  int local_18;
  ushort local_c;
  undefined2 local_8;
  
  uVar16 = param_1 - param_5;
  iVar12 = param_3 + param_5;
  if ((int)uVar16 < iVar12) {
    uVar14 = uVar16;
    do {
      uVar6 = param_2 - param_5;
      if ((int)(param_2 - param_5) < param_4 + param_5) {
        do {
          pvVar4 = (void *)FUN_00406100(this,uVar14,uVar6,param_6);
          if (pvVar4 != (void *)0x0) {
            iVar17 = *(int *)((int)pvVar4 + 0x1c);
            bVar3 = true;
            while (iVar17 = iVar17 + -1, -1 < iVar17) {
              puVar5 = (ushort *)FUN_004d23f0(pvVar4,iVar17);
              if (((*(byte *)((int)puVar5 + 3) & 0x1f) == 0) ||
                 ((*(byte *)((int)puVar5 + 3) & 0x1f) == 2)) {
                if (bVar3) {
                  local_8 = CONCAT11(0xff,(byte)*puVar5);
                  bVar13 = 0xff;
                }
                else {
                  local_c = (ushort)(byte)*puVar5;
                  bVar13 = 0;
                  local_8 = local_c;
                }
                *puVar5 = local_8;
                *(byte *)(puVar5 + 1) = bVar13;
              }
              else {
                bVar3 = false;
              }
            }
          }
          uVar6 = uVar6 + 1;
        } while ((int)uVar6 < param_4 + param_5);
      }
      uVar14 = uVar14 + 1;
    } while ((int)uVar14 < iVar12);
  }
  local_1c = 0;
  do {
    if ((int)uVar16 < iVar12) {
      uVar14 = uVar16;
      do {
        uVar6 = param_2 - param_5;
        if ((int)(param_2 - param_5) < param_4 + param_5) {
          do {
            pvVar4 = (void *)FUN_00406100(this,uVar14,uVar6,param_6);
            if ((pvVar4 != (void *)0x0) && (local_18 = 0, 0 < *(int *)((int)pvVar4 + 0x1c))) {
              do {
                puVar7 = FUN_004d23f0(pvVar4,local_18);
                if ((((puVar7[3] & 0x1f) == 0) || ((puVar7[3] & 0x1f) == 2)) && (puVar7[2] != -1)) {
                  iVar17 = *(int *)((int)pvVar4 + 0x10) + local_18;
                  uVar15 = 0;
                  pvVar8 = (void *)FUN_00406100(this,uVar14 - 1,uVar6,param_6);
                  if (pvVar8 == (void *)0x0) {
                    puVar9 = &DAT_00584248;
                  }
                  else {
                    iVar1 = *(int *)((int)pvVar8 + 0x10);
                    if (iVar17 < iVar1) {
                      puVar9 = &DAT_00584248;
                    }
                    else if (iVar17 < *(int *)((int)pvVar8 + 0x1c) + iVar1) {
                      puVar9 = FUN_00405f20(pvVar8,iVar17 - iVar1);
                      if ((((puVar9[3] & 0x1f) == 0) && (iVar17 < 1)) && ((puVar9[3] & 0x40) == 0))
                      {
                        puVar9 = &DAT_00584240;
                      }
                    }
                    else {
                      puVar9 = &DAT_00584240;
                      if (0 < iVar17) {
                        puVar9 = &DAT_00584244;
                      }
                    }
                  }
                  bVar13 = puVar9[3] & 0x1f;
                  if (bVar13 == 0xd) {
                    uVar10 = 0xff;
LAB_004d1c86:
                    uVar15 = uVar10;
                    if (uVar10 < 0xff) goto LAB_004d1c93;
                  }
                  else {
                    if (((puVar9[3] & 0x1f) == 0) || (bVar13 == 2)) {
                      if ((byte)puVar9[2] < 5) {
                        uVar10 = 5;
                      }
                      else {
                        uVar10 = (uint)(byte)puVar9[2];
                        if (uVar10 == 0) goto LAB_004d1c93;
                      }
                      goto LAB_004d1c86;
                    }
LAB_004d1c93:
                    pvVar8 = (void *)FUN_00406100(this,uVar14 + 1,uVar6,param_6);
                    if (pvVar8 == (void *)0x0) {
                      puVar9 = &DAT_00584248;
                    }
                    else {
                      iVar1 = *(int *)((int)pvVar8 + 0x10);
                      if (iVar17 < iVar1) {
                        puVar9 = &DAT_00584248;
                      }
                      else if (iVar17 < *(int *)((int)pvVar8 + 0x1c) + iVar1) {
                        puVar9 = FUN_00405f20(pvVar8,iVar17 - iVar1);
                        if ((((puVar9[3] & 0x1f) == 0) && (iVar17 < 1)) && ((puVar9[3] & 0x40) == 0)
                           ) {
                          puVar9 = &DAT_00584240;
                        }
                      }
                      else {
                        puVar9 = &DAT_00584240;
                        if (0 < iVar17) {
                          puVar9 = &DAT_00584244;
                        }
                      }
                    }
                    bVar13 = puVar9[3] & 0x1f;
                    if (bVar13 == 0xd) {
                      uVar11 = 0xff;
                    }
                    else if (((puVar9[3] & 0x1f) == 0) || (bVar13 == 2)) {
                      if ((byte)puVar9[2] < 5) {
                        uVar11 = 5;
                      }
                      else {
                        uVar11 = (uint)(byte)puVar9[2];
                      }
                    }
                    else {
                      uVar11 = 0;
                    }
                    uVar10 = uVar15;
                    if (uVar15 < uVar11) {
                      uVar10 = uVar11;
                    }
                    if (uVar10 < 0xff) {
                      pvVar8 = (void *)FUN_00406100(this,uVar14,uVar6 - 1,param_6);
                      if (pvVar8 == (void *)0x0) {
                        puVar9 = &DAT_00584248;
                      }
                      else {
                        iVar1 = *(int *)((int)pvVar8 + 0x10);
                        if (iVar17 < iVar1) {
                          puVar9 = &DAT_00584248;
                        }
                        else if (iVar17 < *(int *)((int)pvVar8 + 0x1c) + iVar1) {
                          puVar9 = FUN_00405f20(pvVar8,iVar17 - iVar1);
                          if ((((puVar9[3] & 0x1f) == 0) && (iVar17 < 1)) &&
                             ((puVar9[3] & 0x40) == 0)) {
                            puVar9 = &DAT_00584240;
                          }
                        }
                        else {
                          puVar9 = &DAT_00584240;
                          if (0 < iVar17) {
                            puVar9 = &DAT_00584244;
                          }
                        }
                      }
                      bVar13 = puVar9[3] & 0x1f;
                      if (bVar13 == 0xd) {
                        uVar15 = 0xff;
                      }
                      else if (((puVar9[3] & 0x1f) == 0) || (bVar13 == 2)) {
                        if ((byte)puVar9[2] < 5) {
                          uVar15 = 5;
                        }
                        else {
                          uVar15 = (uint)(byte)puVar9[2];
                        }
                      }
                      else {
                        uVar15 = 0;
                      }
                      if (uVar10 < uVar15) {
                        uVar10 = uVar15;
                      }
                      if (uVar10 < 0xff) {
                        pvVar8 = (void *)FUN_00406100(this,uVar14,uVar6 + 1,param_6);
                        if (pvVar8 == (void *)0x0) {
                          puVar9 = &DAT_00584248;
                        }
                        else {
                          iVar1 = *(int *)((int)pvVar8 + 0x10);
                          if (iVar17 < iVar1) {
                            puVar9 = &DAT_00584248;
                          }
                          else if (iVar17 < *(int *)((int)pvVar8 + 0x1c) + iVar1) {
                            puVar9 = FUN_00405f20(pvVar8,iVar17 - iVar1);
                            if ((((puVar9[3] & 0x1f) == 0) && (iVar17 < 1)) &&
                               ((puVar9[3] & 0x40) == 0)) {
                              puVar9 = &DAT_00584240;
                            }
                          }
                          else {
                            puVar9 = &DAT_00584240;
                            if (0 < iVar17) {
                              puVar9 = &DAT_00584244;
                            }
                          }
                        }
                        bVar13 = puVar9[3] & 0x1f;
                        if (bVar13 == 0xd) {
                          uVar15 = 0xff;
                        }
                        else if (((puVar9[3] & 0x1f) == 0) || (bVar13 == 2)) {
                          if ((byte)puVar9[2] < 5) {
                            uVar15 = 5;
                          }
                          else {
                            uVar15 = (uint)(byte)puVar9[2];
                          }
                        }
                        else {
                          uVar15 = 0;
                        }
                        if (uVar10 < uVar15) {
                          uVar10 = uVar15;
                        }
                        if (uVar10 < 0xff) {
                          iVar1 = iVar17 + -1;
                          pvVar8 = (void *)FUN_00406100(this,uVar14,uVar6,param_6);
                          if (pvVar8 == (void *)0x0) {
                            puVar9 = &DAT_00584248;
                          }
                          else {
                            iVar2 = *(int *)((int)pvVar8 + 0x10);
                            if (iVar1 < iVar2) {
                              puVar9 = &DAT_00584248;
                            }
                            else if (iVar1 < *(int *)((int)pvVar8 + 0x1c) + iVar2) {
                              puVar9 = FUN_00405f20(pvVar8,iVar1 - iVar2);
                              if ((((puVar9[3] & 0x1f) == 0) && (iVar1 < 1)) &&
                                 ((puVar9[3] & 0x40) == 0)) {
                                puVar9 = &DAT_00584240;
                              }
                            }
                            else {
                              puVar9 = &DAT_00584240;
                              if (0 < iVar1) {
                                puVar9 = &DAT_00584244;
                              }
                            }
                          }
                          bVar13 = puVar9[3] & 0x1f;
                          if (bVar13 == 0xd) {
                            uVar15 = 0xff;
                          }
                          else if (((puVar9[3] & 0x1f) == 0) || (bVar13 == 2)) {
                            if ((byte)puVar9[2] < 5) {
                              uVar15 = 5;
                            }
                            else {
                              uVar15 = (uint)(byte)puVar9[2];
                            }
                          }
                          else {
                            uVar15 = 0;
                          }
                          if (uVar10 < uVar15) {
                            uVar10 = uVar15;
                          }
                          if (uVar10 < 0xff) {
                            iVar17 = iVar17 + 1;
                            pvVar8 = (void *)FUN_00406100(this,uVar14,uVar6,param_6);
                            if (pvVar8 == (void *)0x0) {
                              puVar9 = &DAT_00584248;
                            }
                            else {
                              iVar1 = *(int *)((int)pvVar8 + 0x10);
                              if (iVar17 < iVar1) {
                                puVar9 = &DAT_00584248;
                              }
                              else if (iVar17 < *(int *)((int)pvVar8 + 0x1c) + iVar1) {
                                puVar9 = FUN_00405f20(pvVar8,iVar17 - iVar1);
                                if ((((puVar9[3] & 0x1f) == 0) && (iVar17 < 1)) &&
                                   ((puVar9[3] & 0x40) == 0)) {
                                  puVar9 = &DAT_00584240;
                                }
                              }
                              else {
                                puVar9 = &DAT_00584240;
                                if (0 < iVar17) {
                                  puVar9 = &DAT_00584244;
                                }
                              }
                            }
                            bVar13 = puVar9[3] & 0x1f;
                            if (bVar13 == 0xd) {
                              if (uVar10 < 0xff) {
                                uVar10 = 0xff;
                              }
                            }
                            else if (((puVar9[3] & 0x1f) == 0) || (bVar13 == 2)) {
                              bVar13 = puVar9[2];
                              if (bVar13 < 5) {
                                if (uVar10 < 5) {
                                  uVar10 = 5;
                                }
                              }
                              else if (uVar10 < bVar13) {
                                uVar10 = (uint)bVar13;
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                  puVar7[1] = (char)((uVar10 * 0x55) / 100);
                }
                local_18 = local_18 + 1;
              } while (local_18 < *(int *)((int)pvVar4 + 0x1c));
            }
            uVar6 = uVar6 + 1;
          } while ((int)uVar6 < param_4 + param_5);
        }
        uVar14 = uVar14 + 1;
      } while ((int)uVar14 < iVar12);
    }
    if ((int)uVar16 < iVar12) {
      uVar14 = uVar16;
      do {
        uVar6 = param_2 - param_5;
        if ((int)(param_2 - param_5) < param_4 + param_5) {
          do {
            pvVar4 = (void *)FUN_00406100(this,uVar14,uVar6,param_6);
            if ((pvVar4 != (void *)0x0) && (iVar17 = 0, 0 < *(int *)((int)pvVar4 + 0x1c))) {
              do {
                puVar7 = FUN_004d23f0(pvVar4,iVar17);
                if (((puVar7[3] & 0x1f) == 0) || ((puVar7[3] & 0x1f) == 2)) {
                  puVar7[2] = puVar7[1];
                }
                iVar17 = iVar17 + 1;
              } while (iVar17 < *(int *)((int)pvVar4 + 0x1c));
            }
            uVar6 = uVar6 + 1;
          } while ((int)uVar6 < param_4 + param_5);
        }
        uVar14 = uVar14 + 1;
      } while ((int)uVar14 < iVar12);
    }
    local_1c = local_1c + 1;
    if (0xf < local_1c) {
      for (; uVar16 = param_2, (int)param_1 < param_3; param_1 = param_1 + 1) {
        for (; (int)uVar16 < param_4; uVar16 = uVar16 + 1) {
          pvVar4 = (void *)FUN_00406100(this,param_1,uVar16,param_6);
          if ((pvVar4 != (void *)0x0) && (iVar12 = 0, 0 < *(int *)((int)pvVar4 + 0x1c))) {
            do {
              puVar7 = FUN_004d23f0(pvVar4,iVar12);
              if (((puVar7[3] & 0x1f) == 0) || ((puVar7[3] & 0x1f) == 2)) {
                *puVar7 = puVar7[2];
              }
              iVar12 = iVar12 + 1;
            } while (iVar12 < *(int *)((int)pvVar4 + 0x1c));
          }
        }
      }
      return;
    }
  } while( true );
}


/* FUN_004d2190 @ 004d2190  kind=gamemisc  attributed-by=none  size=431 */

void FUN_004d2190(undefined8 *param_1,undefined8 *param_2,float param_3,char param_4,int param_5,
                 int param_6)

{
  undefined4 *puVar1;
  float *pfVar2;
  byte *pbVar3;
  int iVar4;
  int iVar5;
  float local_70 [4];
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  float local_40;
  undefined8 local_3c;
  undefined8 local_34;
  undefined4 local_2c;
  int local_28;
  undefined4 local_24;
  undefined4 local_20;
  float local_18 [4];
  uint local_8;
  
  local_8 = DAT_00583cc8 ^ (uint)&stack0xfffffffc;
  iVar5 = 0;
  if (0 < *(int *)(param_5 + 0x114)) {
    pbVar3 = (byte *)(param_5 + 0x17);
    do {
      if (0x7f < *pbVar3) {
        local_60 = *param_1;
        local_58 = param_1[1];
        local_50 = param_1[2];
        local_48 = *param_2;
        local_40 = *(float *)(param_2 + 1);
        local_20 = 0x40400000;
        local_2c = 0x3dcccccd;
        local_24 = 2;
        local_18[0] = 1.0;
        iVar4 = (int)(param_3 * 3.0 + 1.0);
        local_18[1] = 1.0;
        local_18[2] = 1.0;
        local_18[3] = 1.0;
        local_28 = iVar4;
        pfVar2 = FUN_00413df0(local_70,(uint)*pbVar3,local_18,param_3 * 0.5);
        local_3c = *(undefined8 *)pfVar2;
        local_34 = *(undefined8 *)(pfVar2 + 2);
        if (param_4 != '\0') {
          local_28 = iVar4 + 10;
          local_48 = CONCAT44(local_48._4_4_ * 2.0,(float)local_48 * 2.0);
          local_40 = local_40 * 2.0;
        }
        puVar1 = *(undefined4 **)(param_6 + 0x10);
        iVar4 = FUN_00420470(puVar1,(undefined4 *)puVar1[1],(undefined4 *)&local_60);
        if (*(int *)(param_6 + 0x14) == 0x3333332) {
                    /* WARNING: Subroutine does not return */
          std::_Xlength_error("list<T> too long");
        }
        *(int *)(param_6 + 0x14) = *(int *)(param_6 + 0x14) + 1;
        puVar1[1] = iVar4;
        **(int **)(iVar4 + 4) = iVar4;
      }
      iVar5 = iVar5 + 1;
      pbVar3 = pbVar3 + 8;
    } while (iVar5 < *(int *)(param_5 + 0x114));
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


/* FUN_004d2340 @ 004d2340  kind=gamemisc  attributed-by=none  size=166 */

uint __thiscall FUN_004d2340(void *this,uint param_1,uint param_2,undefined8 param_3)

{
  uint uVar1;
  uint *puVar2;
  float10 fVar3;
  ulonglong uVar4;
  undefined8 uVar5;
  
  uVar4 = FUN_0054a946();
  uVar5 = __alldiv((uint)uVar4,(uint)(uVar4 >> 0x20),0x10000,0);
  uVar1 = (uint)uVar5;
  uVar5 = __alldiv(param_1,param_2,0x10000,0);
  puVar2 = (uint *)FUN_004286f0(this,(int)((int)uVar5 + ((int)uVar5 >> 0x1f & 0x7ffU)) >> 0xb,uVar1)
  ;
  if ((puVar2 != (uint *)0x0) && (puVar2[6] != 0)) {
    fVar3 = FUN_0052c820(puVar2,&param_1,(uint *)&param_3);
    if ((float)fVar3 <= 1.0) {
      return puVar2[9];
    }
  }
  return 1;
}


/* FUN_004d24a0 @ 004d24a0  kind=gamemisc  attributed-by=none  size=87 */

byte __thiscall
FUN_004d24a0(void *this,uint param_1,uint param_2,int param_3,int param_4,int param_5)

{
  undefined *puVar1;
  byte bVar2;
  
  puVar1 = FUN_00405fd0(this,param_1,param_2,param_3,param_4);
  bVar2 = puVar1[3] & 0x1f;
  if (bVar2 == 0xd) {
    return 0xff;
  }
  if (((puVar1[3] & 0x1f) != 0) && (bVar2 != 2)) {
    return 0;
  }
  if ((byte)puVar1[param_5] < 5) {
    return 5;
  }
  return puVar1[param_5];
}


/* FUN_004d2810 @ 004d2810  kind=gamemisc  attributed-by=none  size=715 */

void FUN_004d2810(undefined1 *param_1,uint *param_2,float param_3,float param_4,void *param_5)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  undefined *puVar5;
  uint uVar6;
  uint uVar7;
  void *this;
  undefined8 uVar8;
  undefined4 local_164;
  undefined1 *local_160;
  void *local_15c;
  void *local_158;
  uint local_154;
  undefined2 local_150 [140];
  uint local_38;
  uint local_34;
  uint local_30;
  uint local_2c;
  uint local_28;
  uint local_24;
  float local_20;
  float local_1c;
  int local_14;
  undefined4 local_c;
  uint local_8;
  
  local_8 = DAT_00583cc8 ^ (uint)&stack0xfffffffc;
  local_160 = param_1;
  local_15c = param_5;
  FUN_0041d8d0(local_150);
  local_154 = *param_2;
  uVar3 = param_2[1];
  uVar2 = param_2[2];
  uVar7 = param_2[3];
  local_20 = param_3;
  local_1c = local_1c * param_4;
  local_28 = param_2[4];
  local_24 = param_2[5];
  local_38 = local_154;
  local_34 = uVar3;
  local_30 = uVar2;
  local_2c = uVar7;
  iVar1 = rand();
  local_c = *(undefined4 *)((int)local_158 + 0x800160);
  local_14 = iVar1 % 300 + 500;
  uVar8 = __alldiv(uVar2,uVar7,0x10000,0);
  uVar2 = (int)((int)uVar8 + ((int)uVar8 >> 0x1f & 0xffU)) >> 8;
  uVar8 = __alldiv(local_154,uVar3,0x10000,0);
  local_154 = FUN_00406290(local_158,(int)((int)uVar8 + ((int)uVar8 >> 0x1f & 0xffU)) >> 8,uVar2);
  if (local_154 != 0) {
    FUN_00402a70(local_150,local_160);
    iVar1 = rand();
    local_20 = ((float)iVar1 * 360.0) / 32767.0;
    if (((int)local_24 < 1) && ((int)local_24 < 0)) {
      uVar8 = __alldiv(local_28,local_24,0x10000,0);
      iVar1 = (int)uVar8 + -1;
    }
    else {
      uVar8 = __alldiv(local_28,local_24,0x10000,0);
      iVar1 = (int)uVar8;
    }
    uVar8 = __alldiv(local_30,local_2c,0x10000,0);
    uVar3 = (uint)uVar8;
    uVar8 = __alldiv(local_38,local_34,0x10000,0);
    uVar2 = (uint)uVar8;
    do {
      if (((((int)uVar2 < 0) || ((int)uVar3 < 0)) || (0xffffff < (int)uVar2)) ||
         ((0xffffff < (int)uVar3 ||
          (iVar4 = FUN_00406290(local_158,(int)(uVar2 + ((int)uVar2 >> 0x1f & 0xffU)) >> 8,
                                (int)(uVar3 + ((int)uVar3 >> 0x1f & 0xffU)) >> 8), iVar4 == 0)))) {
LAB_004d2a64:
        puVar5 = &DAT_00584248;
      }
      else {
        uVar7 = uVar3 & 0x800000ff;
        if ((int)uVar7 < 0) {
          uVar7 = (uVar7 - 1 | 0xffffff00) + 1;
        }
        uVar6 = uVar2 & 0x800000ff;
        if ((int)uVar6 < 0) {
          uVar6 = (uVar6 - 1 | 0xffffff00) + 1;
        }
        this = (void *)((uVar7 * 0x100 + uVar6) * 0x20 + *(int *)(iVar4 + 0xa8));
        if ((this == (void *)0x0) || (iVar4 = *(int *)((int)this + 0x10), iVar1 < iVar4))
        goto LAB_004d2a64;
        if (iVar1 < *(int *)((int)this + 0x1c) + iVar4) {
          puVar5 = FUN_00405f20(this,iVar1 - iVar4);
          if ((((puVar5[3] & 0x1f) == 0) && (iVar1 < 1)) && ((puVar5[3] & 0x40) == 0)) {
            puVar5 = &DAT_00584240;
          }
        }
        else {
          puVar5 = &DAT_00584240;
          if (0 < iVar1) {
            puVar5 = &DAT_00584244;
          }
        }
      }
      if (((puVar5[3] & 0x1f) != 0) && ((puVar5[3] & 0x1f) != 2)) goto LAB_004d2a7f;
      iVar1 = iVar1 + -1;
    } while( true );
  }
LAB_004d2ac8:
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
LAB_004d2a7f:
  local_28 = iVar1 + 1;
  local_24 = ((int)local_28 >> 0x1f) << 0x10 | local_28 >> 0x10;
  local_28 = local_28 * 0x10000;
  FUN_0041f5b0((void *)(local_154 + 0x30),(undefined1 *)local_150);
  FUN_004da680(local_15c,&local_164,'\0',&local_154,(uint)DAT_0058423e);
  goto LAB_004d2ac8;
}


/* FUN_004d2ae0 @ 004d2ae0  kind=gamemisc  attributed-by=none  size=4682 */

void __thiscall FUN_004d2ae0(void *this,int param_1,void *param_2)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  uint *puVar4;
  int iVar5;
  undefined1 *puVar6;
  int iVar7;
  int *piVar8;
  code *pcVar9;
  bool bVar10;
  float10 fVar11;
  float fVar12;
  ulonglong uVar13;
  float fVar14;
  void *pvVar15;
  int local_18c;
  void *local_188;
  void *local_184;
  undefined4 local_180;
  int local_17c;
  void *local_178;
  void *local_174;
  int *local_170;
  float local_16c;
  byte local_168 [4];
  undefined4 local_164;
  undefined4 local_160;
  undefined2 local_15c;
  undefined1 local_15a;
  undefined2 local_158;
  undefined1 local_154 [256];
  undefined4 local_54;
  uint local_50 [7];
  int local_34;
  int local_30;
  int local_2c;
  int local_28;
  int local_24;
  float local_20 [3];
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  pcVar9 = rand_exref;
  local_8 = 0xffffffff;
  puStack_c = &LAB_005549eb;
  local_10 = ExceptionList;
  local_14 = DAT_00583cc8 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_178 = param_2;
  local_174 = this;
  if (((*(char *)(param_1 + 0x60) == '\0') || (*(char *)(param_1 + 0x60) == '\x03')) ||
     ((*(ushort *)(param_1 + 0x7e) & 0x800) != 0)) goto LAB_004d3d18;
  rand();
  local_188 = (void *)0x0;
  local_184 = (void *)0x0;
  local_180 = 0;
  local_8 = 0;
  if (*(char *)(param_1 + 0x990) != '\0') {
    local_170 = (int *)(param_1 + 0x990);
    FUN_004f2be0(&local_188,&local_170);
  }
  if (*(char *)(param_1 + 0xaa8) != '\0') {
    local_170 = (int *)(param_1 + 0xaa8);
    FUN_004f2be0(&local_188,&local_170);
  }
  if (*(char *)(param_1 + 0x530) != '\0') {
    local_170 = (int *)(param_1 + 0x530);
    FUN_004f2be0(&local_188,&local_170);
  }
  if (*(char *)(param_1 + 0x878) != '\0') {
    local_170 = (int *)(param_1 + 0x878);
    FUN_004f2be0(&local_188,&local_170);
  }
  if (*(char *)(param_1 + 0x760) != '\0') {
    local_170 = (int *)(param_1 + 0x760);
    FUN_004f2be0(&local_188,&local_170);
  }
  if (*(char *)(param_1 + 0x648) != '\0') {
    local_170 = (int *)(param_1 + 0x648);
    FUN_004f2be0(&local_188,&local_170);
  }
  if (*(char *)(param_1 + 0x418) != '\0') {
    local_170 = (int *)(param_1 + 0x418);
    FUN_004f2be0(&local_188,&local_170);
  }
  if (local_188 != local_184) {
    uVar2 = rand();
    uVar2 = uVar2 & 0x80000003;
    bVar10 = uVar2 == 0;
    if ((int)uVar2 < 0) {
      bVar10 = (uVar2 - 1 | 0xfffffffc) == 0xffffffff;
    }
    if ((bVar10) || ((*(ushort *)(param_1 + 0x7e) & 0x200) != 0)) {
      iVar3 = rand();
      local_20[0] = 1.0 - ((float)iVar3 * 2.0) / 32767.0;
      iVar3 = rand();
      local_20[1] = 1.0 - ((float)iVar3 * 2.0) / 32767.0;
      local_20[2] = 0.0;
      FUN_00402510((int)(local_50 + 6));
      uVar2 = rand();
      iVar7 = (int)local_184 - (int)local_188;
      fVar14 = 1.0;
      pvVar15 = local_178;
      iVar3 = rand();
      fVar12 = ((float)iVar3 * 360.0) / 32767.0;
      puVar4 = FUN_00402cb0((void *)(param_1 + 0x10),local_50,local_50 + 6);
      FUN_004d2810(*(undefined1 **)((int)local_188 + (uVar2 % (uint)(iVar7 >> 2)) * 4),puVar4,fVar12
                   ,fVar14,pvVar15);
    }
  }
  if (((*(char *)(param_1 + 0x60) == '\x01') || (*(int *)(param_1 + 100) == 0x8f)) &&
     (iVar3 = rand(), iVar3 % 10 == 0)) {
    uVar2 = rand();
    uVar2 = uVar2 & 0x80000001;
    if ((int)uVar2 < 0) {
      uVar2 = (uVar2 - 1 | 0xfffffffe) + 1;
    }
    iVar3 = *(int *)(param_1 + 400) + -1 + uVar2;
    if (iVar3 < 1) {
      iVar3 = 1;
    }
    uVar2 = rand();
    uVar2 = uVar2 & 0x80000001;
    bVar10 = uVar2 == 0;
    if ((int)uVar2 < 0) {
      bVar10 = (uVar2 - 1 | 0xfffffffe) == 0xffffffff;
    }
    iVar7 = -1;
    if (bVar10) {
      iVar5 = FUN_0052bf40((uint)*(byte *)(param_1 + 0x1a8),'\0');
      FUN_00528bf0(local_168,(short)iVar3,(char)iVar5,iVar7);
    }
    else {
      iVar5 = FUN_0052bf40((uint)*(byte *)(param_1 + 0x1a8),'\0');
      FUN_0052c4e0(local_168,(short)iVar3,(char)iVar5,iVar7);
    }
    FUN_00414470(local_168,0.05,'\x01');
    iVar3 = rand();
    local_20[0] = 1.0 - ((float)iVar3 * 2.0) / 32767.0;
    iVar3 = rand();
    local_20[1] = 1.0 - ((float)iVar3 * 2.0) / 32767.0;
    local_20[2] = 0.0;
    FUN_00402510((int)(local_50 + 6));
    fVar14 = 1.0;
    pvVar15 = local_178;
    iVar3 = rand();
    fVar12 = ((float)iVar3 * 360.0) / 32767.0;
    puVar4 = FUN_00402cb0((void *)(param_1 + 0x10),local_50,local_50 + 6);
    FUN_004d2810(local_168,puVar4,fVar12,fVar14,pvVar15);
    iVar3 = rand();
    if (iVar3 % 5 == 0) {
      FUN_0052bf40((uint)*(byte *)(param_1 + 0x1a8),'\0');
      FUN_0052b3f0(local_174,local_168);
      FUN_00414470(local_168,0.05,'\x01');
      iVar3 = rand();
      local_20[0] = 1.0 - ((float)iVar3 * 2.0) / 32767.0;
      iVar3 = rand();
      local_20[1] = 1.0 - ((float)iVar3 * 2.0) / 32767.0;
      local_20[2] = 0.0;
      FUN_00402510((int)(local_50 + 6));
      fVar14 = 1.0;
      pvVar15 = local_178;
      iVar3 = rand();
      fVar12 = ((float)iVar3 * 360.0) / 32767.0;
      puVar4 = FUN_00402cb0((void *)(param_1 + 0x10),local_50,local_50 + 6);
      FUN_004d2810(local_168,puVar4,fVar12,fVar14,pvVar15);
    }
  }
  iVar3 = rand();
  local_17c = 0;
  iVar3 = iVar3 % 3 + 1;
  if (0 < iVar3) {
    do {
      local_168[0] = 0;
      local_168[1] = 0;
      local_164 = 0;
      local_160 = 0;
      local_15c = 0;
      local_15a = 0;
      local_54 = 0;
      memset(local_154,0,0x100);
      local_16c = 0.75;
      local_158 = 1;
      switch(*(undefined4 *)(param_1 + 100)) {
      case 0x3a:
        local_168[0] = 0xb;
        local_168[1] = 2;
        local_15c = CONCAT11(0x13,(undefined1)local_15c);
        local_16c = 0.8;
        break;
      default:
        if (local_168[0] == 0) goto LAB_004d3488;
        break;
      case 0x46:
        local_168[0] = 0xb;
        local_168[1] = 0x12;
        local_16c = 0.8;
        break;
      case 0x47:
        local_168[0] = 0xb;
        local_168[1] = 0x15;
        local_16c = 0.8;
        break;
      case 0x78:
      case 0x79:
      case 0x7c:
      case 0x7e:
        uVar2 = (*pcVar9)();
        uVar2 = uVar2 & 0x80000001;
        bVar10 = uVar2 == 0;
        if ((int)uVar2 < 0) {
          bVar10 = (uVar2 - 1 | 0xfffffffe) == 0xffffffff;
        }
        if (bVar10) {
          local_168[0] = 0xb;
          local_168[1] = 5;
          local_15c = CONCAT11(0x15,(undefined1)local_15c);
          local_16c = 0.8;
        }
        else {
          local_168[0] = 0xb;
          local_168[1] = 1;
          local_15c = CONCAT11(2,(undefined1)local_15c);
          local_16c = 0.8;
        }
        break;
      case 0x7a:
        local_168[0] = 0xb;
        local_168[1] = 0x1b;
        goto LAB_004d3284;
      case 0x7b:
        local_168[0] = 0xb;
        local_168[1] = 0xb;
        local_15c = CONCAT11(0x1b,(undefined1)local_15c);
        local_16c = 0.8;
        break;
      case 0x7d:
        local_168[0] = 0xb;
        local_168[1] = 6;
LAB_004d3284:
        local_15c = local_15c & 0xff;
        local_16c = 0.8;
        break;
      case 0x7f:
        local_168[0] = 0xb;
        local_168[1] = 0x14;
        local_16c = 0.8;
        break;
      case 0x80:
        local_168[0] = 0xb;
        local_168[1] = 0x17;
        local_16c = 0.8;
        break;
      case 0x83:
        local_168[0] = 0xb;
        local_168[1] = 0;
        local_15c = CONCAT11(0xb,(undefined1)local_15c);
        local_16c = 3.0;
        break;
      case 0x84:
        local_168[0] = 0xb;
        local_168[1] = 0;
        local_15c = CONCAT11(1,(undefined1)local_15c);
        local_16c = 3.0;
        break;
      case 0x85:
        local_168[0] = 0xb;
        local_168[1] = 0;
        local_15c = CONCAT11(0xc,(undefined1)local_15c);
        local_16c = 3.0;
        break;
      case 0x86:
        local_168[0] = 0xb;
        local_168[1] = 0;
        local_15c = CONCAT11(0x11,(undefined1)local_15c);
        local_16c = 0.8;
        break;
      case 0x87:
        local_168[0] = 0xb;
        local_168[1] = 0;
        local_15c = 0xd01;
        local_16c = 3.0;
        break;
      case 0x88:
        local_168[0] = 0xb;
        local_168[1] = 0;
        local_15c = 0xe02;
        local_16c = 3.0;
        break;
      case 0x89:
        local_168[0] = 0xb;
        local_168[1] = 0;
        local_15c = 0xf03;
        local_16c = 3.0;
        break;
      case 0x8a:
        local_168[0] = 0xb;
        local_168[1] = 0;
        local_15c = 0x1004;
        local_16c = 3.0;
        break;
      case 0x8b:
        local_168[0] = 0xb;
        local_168[1] = 8;
        local_15c = CONCAT11(0x16,(undefined1)local_15c);
        local_16c = 0.8;
      }
      iVar7 = (*pcVar9)();
      local_20[0] = 1.0 - ((float)iVar7 * 2.0) / 32767.0;
      iVar7 = (*pcVar9)();
      local_20[2] = 0.0;
      iVar5 = 0;
      local_20[1] = 1.0 - ((float)iVar7 * 2.0) / 32767.0;
      do {
        local_170 = (int *)(local_20[iVar5] * 65536.0);
        uVar13 = FUN_0054a946();
        pcVar9 = rand_exref;
        local_50[iVar5 * 2] = (uint)uVar13;
        local_50[iVar5 * 2 + 1] = (uint)(uVar13 >> 0x20);
        iVar5 = iVar5 + 1;
      } while (iVar5 < 3);
      local_50[6] = *(uint *)(param_1 + 0x10) + local_50[0];
      local_34 = *(int *)(param_1 + 0x14) + local_50[1] +
                 (uint)CARRY4(*(uint *)(param_1 + 0x10),local_50[0]);
      local_30 = *(uint *)(param_1 + 0x18) + local_50[2];
      local_2c = *(int *)(param_1 + 0x1c) + local_50[3] +
                 (uint)CARRY4(*(uint *)(param_1 + 0x18),local_50[2]);
      local_28 = *(uint *)(param_1 + 0x20) + local_50[4];
      local_24 = *(int *)(param_1 + 0x24) + local_50[5] +
                 (uint)CARRY4(*(uint *)(param_1 + 0x20),local_50[4]);
      fVar12 = local_16c;
      pvVar15 = local_178;
      iVar7 = rand();
      FUN_004d2810(local_168,local_50 + 6,((float)iVar7 * 360.0) / 32767.0,fVar12,pvVar15);
      local_17c = local_17c + 1;
    } while (local_17c < iVar3);
  }
LAB_004d3488:
  if ((*(char *)(param_1 + 0x60) == '\x01') || (*(int *)(param_1 + 100) == 0x8f)) {
    iVar3 = (*pcVar9)();
    if (iVar3 % 0x32 == 0) {
      iVar3 = (*pcVar9)();
      local_20[0] = 1.0 - ((float)iVar3 * 2.0) / 32767.0;
      iVar3 = (*pcVar9)();
      local_20[2] = 0.0;
      iVar7 = 0;
      local_20[1] = 1.0 - ((float)iVar3 * 2.0) / 32767.0;
      do {
        local_170 = (int *)(local_20[iVar7] * 65536.0);
        uVar13 = FUN_0054a946();
        pcVar9 = rand_exref;
        local_50[iVar7 * 2] = (uint)uVar13;
        local_50[iVar7 * 2 + 1] = (uint)(uVar13 >> 0x20);
        iVar7 = iVar7 + 1;
      } while (iVar7 < 3);
      local_50[6] = *(uint *)(param_1 + 0x10) + local_50[0];
      local_34 = *(int *)(param_1 + 0x14) + local_50[1] +
                 (uint)CARRY4(*(uint *)(param_1 + 0x10),local_50[0]);
      local_30 = *(uint *)(param_1 + 0x18) + local_50[2];
      local_2c = *(int *)(param_1 + 0x1c) + local_50[3] +
                 (uint)CARRY4(*(uint *)(param_1 + 0x18),local_50[2]);
      local_28 = *(uint *)(param_1 + 0x20) + local_50[4];
      local_24 = *(int *)(param_1 + 0x24) + local_50[5] +
                 (uint)CARRY4(*(uint *)(param_1 + 0x20),local_50[4]);
      fVar14 = 0.75;
      pvVar15 = local_178;
      iVar3 = rand();
      fVar12 = ((float)iVar3 * 360.0) / 32767.0;
      puVar4 = local_50 + 6;
      iVar3 = FUN_0052bf40(*(byte *)(param_1 + 0x1a8) + 1,'\0');
      puVar6 = (undefined1 *)
               FUN_0052a760(local_168,(short)*(undefined4 *)(param_1 + 400),(char)iVar3);
      FUN_004d2810(puVar6,puVar4,fVar12,fVar14,pvVar15);
    }
    if ((*(ushort *)(param_1 + 0x7e) & 0x18) == 0) {
      fVar11 = FUN_00410f00();
      local_170 = (int *)((float)fVar11 * 10.0);
      iVar3 = (*pcVar9)();
      fVar12 = (((float)iVar3 * 2.0) / 32767.0 + 1.0) * (float)local_170;
      if ((*(ushort *)(param_1 + 0x7e) & 0x200) != 0) {
        fVar12 = fVar12 * 10.0;
      }
      local_17c = (int)fVar12 / 100;
      iVar3 = (int)fVar12 % 100;
      local_170 = (int *)(local_17c / 100);
      local_17c = local_17c % 100;
      if (iVar3 != 0) {
        FUN_00406fd0((undefined2 *)local_168);
        local_168[0] = 0xc;
        local_168[1] = 0;
        local_15c = CONCAT11(10,(undefined1)local_15c);
        local_158 = (undefined2)iVar3;
        iVar3 = (*pcVar9)();
        local_20[0] = 1.0 - ((float)iVar3 * 2.0) / 32767.0;
        iVar3 = (*pcVar9)();
        local_20[1] = 1.0 - ((float)iVar3 * 2.0) / 32767.0;
        local_20[2] = 0.0;
        FUN_00402510((int)(local_50 + 6));
        fVar14 = 0.75;
        pvVar15 = local_178;
        iVar3 = (*pcVar9)();
        fVar12 = ((float)iVar3 * 360.0) / 32767.0;
        puVar4 = FUN_00402cb0((void *)(param_1 + 0x10),local_50,local_50 + 6);
        FUN_004d2810(local_168,puVar4,fVar12,fVar14,pvVar15);
      }
      if (local_17c != 0) {
        FUN_00406fd0((undefined2 *)local_168);
        local_168[0] = 0xc;
        local_168[1] = 0;
        local_15c = CONCAT11(0xc,(undefined1)local_15c);
        local_158 = (undefined2)local_17c;
        iVar3 = (*pcVar9)();
        local_20[0] = 1.0 - ((float)iVar3 * 2.0) / 32767.0;
        iVar3 = (*pcVar9)();
        local_20[1] = 1.0 - ((float)iVar3 * 2.0) / 32767.0;
        local_20[2] = 0.0;
        FUN_00402510((int)(local_50 + 6));
        fVar14 = 0.75;
        pvVar15 = local_178;
        iVar3 = (*pcVar9)();
        fVar12 = ((float)iVar3 * 360.0) / 32767.0;
        puVar4 = FUN_00402cb0((void *)(param_1 + 0x10),local_50,local_50 + 6);
        FUN_004d2810(local_168,puVar4,fVar12,fVar14,pvVar15);
      }
      piVar8 = local_170;
      if (local_170 != (int *)0x0) {
        FUN_00406fd0((undefined2 *)local_168);
        local_168[0] = 0xc;
        local_168[1] = 0;
        local_15c = CONCAT11(0xb,(undefined1)local_15c);
        local_158 = SUB42(piVar8,0);
        iVar3 = (*pcVar9)();
        local_20[0] = 1.0 - ((float)iVar3 * 2.0) / 32767.0;
        iVar3 = (*pcVar9)();
        local_20[1] = 1.0 - ((float)iVar3 * 2.0) / 32767.0;
        local_20[2] = 0.0;
        FUN_00402510((int)(local_50 + 6));
        fVar14 = 0.75;
        pvVar15 = local_178;
        iVar3 = (*pcVar9)();
        fVar12 = ((float)iVar3 * 360.0) / 32767.0;
        puVar4 = FUN_00402cb0((void *)(param_1 + 0x10),local_50,local_50 + 6);
LAB_004d3ab6:
        FUN_004d2810(local_168,puVar4,fVar12,fVar14,pvVar15);
      }
    }
    else {
      iVar3 = (*pcVar9)();
      iVar3 = iVar3 % 1000 + (uint)*(byte *)(param_1 + 0x1a8) * 0x14;
      if (iVar3 < 700) {
        local_16c = 0.0;
      }
      else if (iVar3 < 0x3b6) {
        local_16c = 1.4013e-45;
      }
      else {
        local_16c = (float)((0x3e6 < iVar3) + 2);
      }
      if (((*(ushort *)(param_1 + 0x7e) & 0x200) != 0) &&
         (local_16c = (float)((int)local_16c + 1), 3 < (uint)local_16c)) {
        local_16c = 4.2039e-45;
      }
      iVar3 = (*pcVar9)();
      if ((iVar3 % 0x14 == 0) && (local_16c != 0.0)) {
        FUN_00406fd0((undefined2 *)local_168);
        local_168[0] = 0xe;
        local_164 = (*pcVar9)();
        local_158 = *(undefined2 *)(param_1 + 400);
        local_15c = CONCAT11(local_15c._1_1_,SUB41(local_16c,0));
        iVar3 = (*pcVar9)();
        local_20[0] = 1.0 - ((float)iVar3 * 2.0) / 32767.0;
        iVar3 = (*pcVar9)();
        local_20[1] = 1.0 - ((float)iVar3 * 2.0) / 32767.0;
        local_20[2] = 0.0;
        FUN_00402510((int)(local_50 + 6));
        fVar14 = 0.75;
        pvVar15 = local_178;
        iVar3 = (*pcVar9)();
        fVar12 = ((float)iVar3 * 360.0) / 32767.0;
        puVar4 = FUN_00402cb0((void *)(param_1 + 0x10),local_50,local_50 + 6);
        goto LAB_004d3ab6;
      }
    }
  }
  if (*(char *)(param_1 + 0x60) == '\x01') {
    iVar3 = *(int *)(param_1 + 0x11dc);
    if ((iVar3 != *(int *)(param_1 + 0x11e0)) &&
       (local_16c = 0.0, 0 < (*(int *)(param_1 + 0x11e0) - iVar3) / 0xc)) {
      local_17c = 0;
      do {
        piVar8 = *(int **)(local_17c + iVar3);
        local_170 = piVar8;
        if (piVar8 != *(int **)(local_17c + 4 + *(int *)(param_1 + 0x11dc))) {
          do {
            piVar1 = piVar8 + 1;
            if ((((char)piVar8[1] != '\0') && (*piVar8 != 0)) &&
               (local_18c = 0, local_170 = piVar8, 0 < *piVar8)) {
              do {
                if (((char)*piVar1 != '\x01') || (*(char *)((int)piVar8 + 5) != '\x01')) {
                  iVar3 = (*pcVar9)();
                  local_20[0] = 1.0 - ((float)iVar3 * 2.0) / 32767.0;
                  iVar3 = (*pcVar9)();
                  local_20[2] = 0.0;
                  iVar7 = 0;
                  local_20[1] = 1.0 - ((float)iVar3 * 2.0) / 32767.0;
                  do {
                    uVar13 = FUN_0054a946();
                    pcVar9 = rand_exref;
                    local_50[iVar7 * 2] = (uint)uVar13;
                    local_50[iVar7 * 2 + 1] = (uint)(uVar13 >> 0x20);
                    iVar7 = iVar7 + 1;
                  } while (iVar7 < 3);
                  local_50[6] = *(uint *)(param_1 + 0x10) + local_50[0];
                  local_34 = *(int *)(param_1 + 0x14) + local_50[1] +
                             (uint)CARRY4(*(uint *)(param_1 + 0x10),local_50[0]);
                  local_30 = *(uint *)(param_1 + 0x18) + local_50[2];
                  local_2c = *(int *)(param_1 + 0x1c) + local_50[3] +
                             (uint)CARRY4(*(uint *)(param_1 + 0x18),local_50[2]);
                  local_28 = *(uint *)(param_1 + 0x20) + local_50[4];
                  local_24 = *(int *)(param_1 + 0x24) + local_50[5] +
                             (uint)CARRY4(*(uint *)(param_1 + 0x20),local_50[4]);
                  fVar12 = 0.75;
                  pvVar15 = local_178;
                  iVar3 = rand();
                  FUN_004d2810((undefined1 *)piVar1,local_50 + 6,((float)iVar3 * 360.0) / 32767.0,
                               fVar12,pvVar15);
                  piVar8 = local_170;
                }
                local_18c = local_18c + 1;
              } while (local_18c < *piVar8);
            }
            piVar8 = piVar8 + 0x47;
            local_170 = piVar8;
          } while (piVar8 != *(int **)(local_17c + 4 + *(int *)(param_1 + 0x11dc)));
        }
        iVar3 = *(int *)(param_1 + 0x11dc);
        local_16c = (float)((int)local_16c + 1);
        local_17c = local_17c + 0xc;
      } while ((int)local_16c < (*(int *)(param_1 + 0x11e0) - iVar3) / 0xc);
    }
  }
  if (local_188 != (void *)0x0) {
    operator_delete(local_188);
  }
LAB_004d3d18:
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}


/* FUN_004d3e10 @ 004d3e10  kind=gamemisc  attributed-by=none  size=189 */

undefined4 * __thiscall FUN_004d3e10(void *this,undefined4 *param_1,int *param_2,int *param_3)

{
  char cVar1;
  int *piVar2;
  int *piVar3;
  int *piVar4;
  void *local_8;
  
  piVar2 = *(int **)this;
  local_8 = this;
  piVar3 = param_2;
  if ((param_2 == (int *)*piVar2) && (param_3 == piVar2)) {
    FUN_004ce720((int *)piVar2[1]);
    *(int *)(*(int *)this + 4) = *(int *)this;
    *(undefined4 *)*(undefined4 *)this = *(undefined4 *)this;
    *(int *)(*(int *)this + 8) = *(int *)this;
    *(undefined4 *)((int)this + 4) = 0;
    *param_1 = **(undefined4 **)this;
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
    FUN_004d3ed0(this,&local_8,piVar3);
    piVar3 = param_2;
  }
  *param_1 = piVar3;
  return param_1;
}


/* FUN_004d3ed0 @ 004d3ed0  kind=gamemisc  attributed-by=none  size=680 */

void __thiscall FUN_004d3ed0(void *this,undefined4 *param_1,int *param_2)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  int *piVar5;
  int *piVar6;
  int *piVar7;
  
  piVar2 = param_2;
  if (*(char *)((int)param_2 + 0xd) != '\0') {
                    /* WARNING: Subroutine does not return */
    std::_Xout_of_range("invalid map/set<T> iterator");
  }
  FUN_00407a50((int *)&param_2);
  piVar5 = (int *)*piVar2;
  if (*(char *)((int)piVar5 + 0xd) == '\0') {
    piVar7 = piVar5;
    if ((*(char *)(piVar2[2] + 0xd) == '\0') && (piVar7 = (int *)param_2[2], param_2 != piVar2)) {
      piVar5[1] = (int)param_2;
      *param_2 = *piVar2;
      piVar5 = param_2;
      if (param_2 != (int *)piVar2[2]) {
        piVar5 = (int *)param_2[1];
        if (*(char *)((int)piVar7 + 0xd) == '\0') {
          piVar7[1] = (int)piVar5;
        }
        *piVar5 = (int)piVar7;
        param_2[2] = piVar2[2];
        *(int **)(piVar2[2] + 4) = param_2;
      }
      if (*(int **)(*(int *)this + 4) == piVar2) {
        *(int **)(*(int *)this + 4) = param_2;
      }
      else {
        piVar6 = (int *)piVar2[1];
        if ((int *)*piVar6 == piVar2) {
          *piVar6 = (int)param_2;
        }
        else {
          piVar6[2] = (int)param_2;
        }
      }
      param_2[1] = piVar2[1];
      iVar1 = param_2[3];
      *(char *)(param_2 + 3) = (char)piVar2[3];
      *(char *)(piVar2 + 3) = (char)iVar1;
      goto LAB_004d3ffc;
    }
  }
  else {
    piVar7 = (int *)piVar2[2];
  }
  piVar5 = (int *)piVar2[1];
  if (*(char *)((int)piVar7 + 0xd) == '\0') {
    piVar7[1] = (int)piVar5;
  }
  if (*(int **)(*(int *)this + 4) == piVar2) {
    *(int **)(*(int *)this + 4) = piVar7;
  }
  else if ((int *)*piVar5 == piVar2) {
    *piVar5 = (int)piVar7;
  }
  else {
    piVar5[2] = (int)piVar7;
  }
  piVar6 = *(int **)this;
  if ((int *)*piVar6 == piVar2) {
    piVar3 = piVar5;
    if (*(char *)((int)piVar7 + 0xd) == '\0') {
      piVar3 = FUN_0042d440(piVar7);
    }
    *piVar6 = (int)piVar3;
  }
  iVar1 = *(int *)this;
  if (*(int **)(iVar1 + 8) == piVar2) {
    if (*(char *)((int)piVar7 + 0xd) == '\0') {
      iVar4 = FUN_0042d420((int)piVar7);
      *(int *)(iVar1 + 8) = iVar4;
    }
    else {
      *(int **)(iVar1 + 8) = piVar5;
    }
  }
LAB_004d3ffc:
  if ((char)piVar2[3] == '\x01') {
    if (piVar7 != *(int **)(*(int *)this + 4)) {
      do {
        piVar6 = piVar5;
        if ((char)piVar7[3] != '\x01') break;
        piVar5 = (int *)*piVar6;
        if (piVar7 == piVar5) {
          piVar5 = (int *)piVar6[2];
          if ((char)piVar5[3] == '\0') {
            *(undefined1 *)(piVar5 + 3) = 1;
            *(undefined1 *)(piVar6 + 3) = 0;
            FUN_004ce780(this,(int)piVar6);
            piVar5 = (int *)piVar6[2];
          }
          if (*(char *)((int)piVar5 + 0xd) == '\0') {
            if ((*(char *)(*piVar5 + 0xc) != '\x01') || (*(char *)(piVar5[2] + 0xc) != '\x01')) {
              if (*(char *)(piVar5[2] + 0xc) == '\x01') {
                *(undefined1 *)(*piVar5 + 0xc) = 1;
                *(undefined1 *)(piVar5 + 3) = 0;
                FUN_0042d460(this,piVar5);
                piVar5 = (int *)piVar6[2];
              }
              *(char *)(piVar5 + 3) = (char)piVar6[3];
              *(undefined1 *)(piVar6 + 3) = 1;
              *(undefined1 *)(piVar5[2] + 0xc) = 1;
              FUN_004ce780(this,(int)piVar6);
              *(undefined1 *)(piVar7 + 3) = 1;
              goto LAB_004d412e;
            }
LAB_004d40d0:
            *(undefined1 *)(piVar5 + 3) = 0;
          }
        }
        else {
          if ((char)piVar5[3] == '\0') {
            *(undefined1 *)(piVar5 + 3) = 1;
            *(undefined1 *)(piVar6 + 3) = 0;
            FUN_0042d460(this,piVar6);
            piVar5 = (int *)*piVar6;
          }
          if (*(char *)((int)piVar5 + 0xd) == '\0') {
            if ((*(char *)(piVar5[2] + 0xc) == '\x01') && (*(char *)(*piVar5 + 0xc) == '\x01'))
            goto LAB_004d40d0;
            if (*(char *)(*piVar5 + 0xc) == '\x01') {
              *(undefined1 *)(piVar5[2] + 0xc) = 1;
              *(undefined1 *)(piVar5 + 3) = 0;
              FUN_004ce780(this,(int)piVar5);
              piVar5 = (int *)*piVar6;
            }
            *(char *)(piVar5 + 3) = (char)piVar6[3];
            *(undefined1 *)(piVar6 + 3) = 1;
            *(undefined1 *)(*piVar5 + 0xc) = 1;
            FUN_0042d460(this,piVar6);
            *(undefined1 *)(piVar7 + 3) = 1;
            goto LAB_004d412e;
          }
        }
        piVar5 = (int *)piVar6[1];
        piVar7 = piVar6;
      } while (piVar6 != *(int **)(*(int *)this + 4));
    }
    *(undefined1 *)(piVar7 + 3) = 1;
  }
LAB_004d412e:
  if (7 < (uint)piVar2[0xb]) {
    operator_delete((void *)piVar2[6]);
  }
  piVar2[0xb] = 7;
  piVar2[10] = 0;
  *(undefined2 *)(piVar2 + 6) = 0;
  operator_delete(piVar2);
  if (*(int *)((int)this + 4) != 0) {
    *(int *)((int)this + 4) = *(int *)((int)this + 4) + -1;
  }
  *param_1 = param_2;
  return;
}


/* FUN_004d4470 @ 004d4470  kind=gamemisc  attributed-by=none  size=69 */

int * __thiscall FUN_004d4470(void *this,int *param_1,int param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  
  puVar4 = (undefined4 *)(param_2 + 0xc);
  puVar2 = *(undefined4 **)((int)this + 4);
  if (puVar4 != puVar2) {
    puVar3 = (undefined4 *)(param_2 + 8);
    do {
      puVar3[-2] = *puVar4;
      puVar3[-1] = puVar4[1];
      puVar1 = puVar4 + 2;
      puVar4 = puVar4 + 3;
      *puVar3 = *puVar1;
      puVar3 = puVar3 + 3;
    } while (puVar4 != puVar2);
  }
  *(int *)((int)this + 4) = *(int *)((int)this + 4) + -0xc;
  *param_1 = param_2;
  return param_1;
}


/* FUN_004d5740 @ 004d5740  kind=gamemisc  attributed-by=none  size=806 */

void __thiscall FUN_004d5740(void *this,uint *param_1,float *param_2)

{
  uint uVar1;
  uint uVar2;
  undefined *puVar3;
  float fVar4;
  uint uVar5;
  uint uVar6;
  void *this_00;
  uint uVar7;
  int iVar8;
  uint uVar9;
  ulonglong uVar10;
  uint local_68;
  int local_64;
  int local_60;
  int local_5c;
  int local_58;
  int local_54;
  uint local_50 [13];
  int local_1c;
  int local_18;
  float local_14;
  float local_10;
  float local_c;
  uint local_8;
  
  local_8 = DAT_00583cc8 ^ (uint)&stack0xfffffffc;
  local_14 = 0.0;
  local_10 = 0.0;
  local_c = 0.2;
  iVar8 = 0;
  do {
    uVar10 = FUN_0054a946();
    local_50[iVar8 * 2 + 6] = (uint)uVar10;
    local_50[iVar8 * 2 + 7] = (uint)(uVar10 >> 0x20);
    iVar8 = iVar8 + 1;
  } while (iVar8 < 3);
  iVar8 = 0;
  local_14 = *param_2 * 0.5;
  local_10 = param_2[1] * 0.5;
  local_c = param_2[2] * 0.5;
  do {
    uVar10 = FUN_0054a946();
    local_50[iVar8 * 2] = (uint)uVar10;
    local_50[iVar8 * 2 + 1] = (uint)(uVar10 >> 0x20);
    iVar8 = iVar8 + 1;
  } while (iVar8 < 3);
  uVar9 = *param_1;
  uVar7 = param_1[1];
  uVar6 = param_1[2];
  uVar5 = param_1[3];
  uVar1 = param_1[4];
  uVar2 = param_1[5];
  local_50[0xc] = (uVar9 - local_50[0]) - local_50[6];
  local_1c = (((uVar7 - local_50[1]) - (uint)(uVar9 < local_50[0])) - local_50[7]) -
             (uint)(uVar9 - local_50[0] < local_50[6]);
  local_18 = (uVar6 - local_50[2]) - local_50[8];
  local_14 = (float)((((uVar5 - local_50[3]) - (uint)(uVar6 < local_50[2])) - local_50[9]) -
                    (uint)(uVar6 - local_50[2] < local_50[8]));
  local_10 = (float)((uVar1 - local_50[4]) - local_50[10]);
  local_c = (float)((((uVar2 - local_50[5]) - (uint)(uVar1 < local_50[4])) - local_50[0xb]) -
                   (uint)(uVar1 - local_50[4] < local_50[10]));
  FUN_00405450((int *)(local_50 + 3),local_50 + 0xc);
  local_14 = *param_2 * 0.5;
  local_10 = param_2[1] * 0.5;
  iVar8 = 0;
  local_c = param_2[2] * 0.5;
  do {
    uVar10 = FUN_0054a946();
    local_50[iVar8 * 2 + 6] = (uint)uVar10;
    local_50[iVar8 * 2 + 7] = (uint)(uVar10 >> 0x20);
    iVar8 = iVar8 + 1;
  } while (iVar8 < 3);
  local_68 = uVar9 + local_50[6];
  local_64 = uVar7 + local_50[7] + (uint)CARRY4(uVar9,local_50[6]);
  local_60 = uVar6 + local_50[8];
  local_5c = uVar5 + local_50[9] + (uint)CARRY4(uVar6,local_50[8]);
  local_58 = uVar1 + local_50[10];
  local_54 = uVar2 + local_50[0xb] + (uint)CARRY4(uVar1,local_50[10]);
  FUN_00405450((int *)&local_14,&local_68);
  fVar4 = local_10;
  uVar9 = local_50[4];
  uVar7 = local_50[3];
  if ((int)local_50[3] <= (int)local_14) {
    do {
      uVar6 = uVar9;
      if ((int)uVar9 <= (int)fVar4) {
        do {
          if (((((int)uVar7 < 0) || ((int)uVar9 < 0)) || (0xffffff < (int)uVar7)) ||
             ((0xffffff < (int)uVar9 ||
              (iVar8 = FUN_00406290(this,(int)(uVar7 + ((int)uVar7 >> 0x1f & 0xffU)) >> 8,
                                    (int)(uVar9 + ((int)uVar9 >> 0x1f & 0xffU)) >> 8), iVar8 == 0)))
             ) {
LAB_004d5a1f:
            puVar3 = &DAT_00584248;
          }
          else {
            uVar6 = uVar9 & 0x800000ff;
            if ((int)uVar6 < 0) {
              uVar6 = (uVar6 - 1 | 0xffffff00) + 1;
            }
            uVar5 = uVar7 & 0x800000ff;
            if ((int)uVar5 < 0) {
              uVar5 = (uVar5 - 1 | 0xffffff00) + 1;
            }
            this_00 = (void *)((uVar6 * 0x100 + uVar5) * 0x20 + *(int *)(iVar8 + 0xa8));
            if ((this_00 == (void *)0x0) ||
               (iVar8 = *(int *)((int)this_00 + 0x10), (int)local_50[5] < iVar8)) goto LAB_004d5a1f;
            if ((int)local_50[5] < *(int *)((int)this_00 + 0x1c) + iVar8) {
              puVar3 = FUN_00405f20(this_00,local_50[5] - iVar8);
              if ((((puVar3[3] & 0x1f) == 0) && ((int)local_50[5] < 1)) && ((puVar3[3] & 0x40) == 0)
                 ) {
                puVar3 = &DAT_00584240;
              }
            }
            else {
              puVar3 = &DAT_00584240;
              if (0 < (int)local_50[5]) {
                puVar3 = &DAT_00584244;
              }
            }
          }
          if (((puVar3[3] & 0x1f) != 0) && ((puVar3[3] & 0x1f) != 2)) {
            __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
            return;
          }
          uVar9 = uVar9 + 1;
          fVar4 = local_10;
          uVar6 = local_50[4];
        } while ((int)uVar9 <= (int)local_10);
      }
      uVar7 = uVar7 + 1;
      uVar9 = uVar6;
    } while ((int)uVar7 <= (int)local_14);
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


/* FUN_004d5c80 @ 004d5c80  kind=gamemisc  attributed-by=none  size=166 */

float10 __thiscall FUN_004d5c80(void *param_1,uint *param_2)

{
  byte *pbVar1;
  byte bVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  uVar3 = __alldiv(param_2[4],param_2[5],0x10000,0);
  uVar4 = __alldiv(param_2[2],param_2[3],0x10000,0);
  uVar5 = __alldiv(*param_2,param_2[1],0x10000,0);
  pbVar1 = FUN_00405fd0(param_1,(uint)uVar5,(uint)uVar4,(int)uVar3,0);
  bVar2 = pbVar1[3] & 0x1f;
  if (bVar2 == 0xd) {
    bVar2 = 0xff;
  }
  else if (((pbVar1[3] & 0x1f) == 0) || (bVar2 == 2)) {
    bVar2 = *pbVar1;
    if (bVar2 < 5) {
      bVar2 = 5;
    }
  }
  else {
    bVar2 = 0;
  }
  return (float10)((float)bVar2 / 255.0);
}


/* FUN_004d61c0 @ 004d61c0  kind=gamemisc  attributed-by=none  size=395 */

void __thiscall FUN_004d61c0(void *this,uint *param_1)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  uint *local_10;
  int local_c;
  int local_8;
  
  FUN_00530600((void *)((int)this + 4),&local_8,param_1);
  if (local_8 == *(int *)((int)this + 4)) {
    iVar3 = 0;
  }
  else {
    iVar3 = *(int *)(local_8 + 0x18);
  }
  FUN_00530600((void *)((int)this + 4),&local_8,param_1 + 2);
  if (local_8 == *(int *)((int)this + 4)) {
    local_8 = 0;
  }
  else {
    local_8 = *(int *)(local_8 + 0x18);
  }
  if ((iVar3 != 0) && (local_8 != 0)) {
    if (local_8 == *(int *)((int)this + 0xb8)) {
      local_10 = (uint *)(*(int *)((int)this + 0xb8) + 0x11c8);
      FUN_00530600((void *)((int)this + 4),&local_c,local_10);
      if ((local_c != *(int *)((int)this + 4)) && (*(int *)(local_c + 0x18) != 0)) {
        uVar2 = FUN_00405420(this,local_10);
        *(undefined4 *)(uVar2 + 0x16c) = 0;
        uVar2 = FUN_00405420(this,(uint *)(*(int *)((int)this + 0xb8) + 0x11c8));
        FUN_004f8520((int *)(uVar2 + 0x13a4));
      }
      iVar1 = *(int *)((int)this + 0xb8);
      *(undefined4 *)(iVar1 + 0x11d0) = 0;
      *(undefined4 *)(iVar1 + 0x11d4) = 0;
    }
    iVar1 = *(int *)((int)this + 0xb8);
    if (((iVar1 != 0) && (iVar1 == iVar3)) && (*(char *)(local_8 + 0x60) == '\x01')) {
      *(int *)(iVar1 + 0x194) = *(int *)(iVar1 + 0x194) + param_1[5];
      FUN_00412550(*(int *)((int)this + 0xb8));
    }
    if (*(char *)((int)this + 0xb4) == '\0') {
      FUN_00530600((void *)((int)this + 4),(int *)&local_10,(uint *)(iVar3 + 0x11c8));
      if (((local_10 != *(uint **)((int)this + 4)) && (uVar2 = local_10[6], uVar2 != 0)) &&
         (0.0 < *(float *)(uVar2 + 0x16c))) {
        *(int *)(uVar2 + 0x194) = *(int *)(uVar2 + 0x194) + param_1[5];
        FUN_00412550(uVar2);
        *(undefined4 *)(iVar3 + 0x1024) = *(undefined4 *)(uVar2 + 0x194);
        *(undefined2 *)(iVar3 + 0x1030) = *(undefined2 *)(uVar2 + 400);
        FUN_00402a70((void *)(iVar3 + 0x1d48),(undefined1 *)(iVar3 + 0x1020));
      }
    }
  }
  return;
}


/* FUN_004d7960 @ 004d7960  kind=gamemisc  attributed-by=none  size=131 */

void __thiscall FUN_004d7960(void *this,int param_1,int param_2)

{
  int *piVar1;
  undefined4 *puVar2;
  
  if ((((-1 < param_1) && (-1 < param_2)) && (param_1 < 0x400)) && (param_2 < 0x400)) {
    piVar1 = (int *)((int)this + (param_1 * 0x400 + 0x2f + param_2) * 4);
    puVar2 = (undefined4 *)*piVar1;
    if (puVar2 != (undefined4 *)0x0) {
      FUN_004d7c50(this,param_1,param_2);
      EnterCriticalSection((LPCRITICAL_SECTION)((int)this + 0x8000c0));
      EnterCriticalSection((LPCRITICAL_SECTION)((int)this + 0x8000d8));
      *piVar1 = 0;
      LeaveCriticalSection((LPCRITICAL_SECTION)((int)this + 0x8000d8));
      LeaveCriticalSection((LPCRITICAL_SECTION)((int)this + 0x8000c0));
      (**(code **)*puVar2)(1);
    }
  }
  return;
}


/* FUN_004d79f0 @ 004d79f0  kind=gamemisc  attributed-by=none  size=230 */

void __thiscall FUN_004d79f0(void *this,uint param_1,uint param_2)

{
  undefined4 *puVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  
  iVar2 = (int)(param_1 + ((int)param_1 >> 0x1f & 0x3fU)) >> 6;
  iVar4 = (int)(((int)param_2 >> 0x1f & 0x3fU) + param_2) >> 6;
  if ((((-1 < iVar2) && (-1 < iVar4)) && (iVar2 < 0x400)) &&
     ((iVar4 < 0x400 &&
      (iVar2 = *(int *)((int)this + (iVar2 * 0x400 + iVar4) * 4 + 0xbc), iVar2 != 0)))) {
    uVar6 = param_1 & 0x8000003f;
    if ((int)uVar6 < 0) {
      uVar6 = (uVar6 - 1 | 0xffffffc0) + 1;
    }
    uVar5 = param_2 & 0x8000003f;
    if ((int)uVar5 < 0) {
      uVar5 = (uVar5 - 1 | 0xffffffc0) + 1;
    }
    piVar3 = (int *)(iVar2 + (uVar6 * 0x40 + uVar5) * 4 + 0x10018);
    puVar1 = (undefined4 *)*piVar3;
    if (puVar1 != (undefined4 *)0x0) {
      EnterCriticalSection((LPCRITICAL_SECTION)((int)this + 0x8000d8));
      EnterCriticalSection((LPCRITICAL_SECTION)((int)this + 0x8000c0));
      *piVar3 = 0;
      LeaveCriticalSection((LPCRITICAL_SECTION)((int)this + 0x8000c0));
      LeaveCriticalSection((LPCRITICAL_SECTION)((int)this + 0x8000d8));
      if (*(char *)((int)this + 0xb4) == '\0') {
        FUN_004d81b0(this,(int)puVar1);
      }
      (**(code **)*puVar1)(1);
    }
  }
  return;
}


/* FUN_004d7ae0 @ 004d7ae0  kind=gamemisc  attributed-by=none  size=364 */

void FUN_004d7ae0(void)

{
  int *piVar1;
  char cVar2;
  int iVar3;
  int *piVar4;
  int *piVar5;
  uint uVar6;
  int iVar7;
  void *this;
  int *piVar8;
  int *local_20;
  undefined4 local_1c;
  int *local_18;
  void *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00554a68;
  local_10 = ExceptionList;
  uVar6 = DAT_00583cc8 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_1c = 0;
  local_20 = (int *)FUN_004ce660((undefined4 *)0x0,(undefined4 *)0x0);
  local_8 = 0;
  piVar1 = (int *)((int)local_14 + 4);
  piVar8 = (int *)**(int **)((int)local_14 + 4);
  this = local_14;
  local_18 = piVar8;
  if (piVar8 != *(int **)((int)local_14 + 4)) {
    do {
      iVar3 = piVar8[6];
      if (((((iVar3 != 0) && (*(char *)(iVar3 + 0x60) != '\0')) &&
           (*(char *)(iVar3 + 0x60) != '\x05')) &&
          ((iVar7 = FUN_00406290(this,*(uint *)(iVar3 + 0x1b0),*(uint *)(iVar3 + 0x1b4)),
           this = local_14, iVar7 != 0 && (iVar3 = *(int *)(iVar3 + 0x1b8), -1 < iVar3)))) &&
         (iVar3 < *(int *)(iVar7 + 0x1c) - *(int *)(iVar7 + 0x18) >> 2)) {
        *(undefined4 *)(*(int *)(*(int *)(iVar7 + 0x18) + iVar3 * 4) + 0x38) = 0;
        FUN_004d6620(&local_20,&local_18);
        this = local_14;
        if ((undefined4 *)piVar8[6] != (undefined4 *)0x0) {
          (*(code *)**(undefined4 **)piVar8[6])(1,uVar6);
          this = local_14;
        }
      }
      if (*(char *)((int)piVar8 + 0xd) == '\0') {
        piVar4 = (int *)piVar8[2];
        if (*(char *)((int)piVar4 + 0xd) == '\0') {
          cVar2 = *(char *)(*piVar4 + 0xd);
          piVar8 = piVar4;
          piVar4 = (int *)*piVar4;
          while (local_18 = piVar8, cVar2 == '\0') {
            cVar2 = *(char *)(*piVar4 + 0xd);
            piVar8 = piVar4;
            piVar4 = (int *)*piVar4;
          }
        }
        else {
          cVar2 = *(char *)(piVar8[1] + 0xd);
          piVar5 = (int *)piVar8[1];
          piVar4 = piVar8;
          while ((piVar8 = piVar5, local_18 = piVar8, cVar2 == '\0' && (piVar4 == (int *)piVar8[2]))
                ) {
            cVar2 = *(char *)(piVar8[1] + 0xd);
            piVar5 = (int *)piVar8[1];
            piVar4 = piVar8;
          }
        }
      }
    } while (piVar8 != (int *)*piVar1);
  }
  piVar4 = local_20;
  for (piVar8 = (int *)*local_20; piVar8 != piVar4; piVar8 = (int *)*piVar8) {
    FUN_0040a1d0(piVar1,&local_18,(int *)piVar8[2]);
  }
  piVar1 = (int *)*piVar4;
  *piVar4 = (int)piVar4;
  piVar4[1] = (int)piVar4;
  while (piVar1 != piVar4) {
    piVar8 = (int *)*piVar1;
    operator_delete(piVar1);
    piVar1 = piVar8;
  }
  operator_delete(piVar4);
  ExceptionList = local_10;
  return;
}


/* FUN_004d81b0 @ 004d81b0  kind=gamemisc  attributed-by=none  size=494 */

void __thiscall FUN_004d81b0(void *this,int param_1)

{
  char *pcVar1;
  basic_ostream<char,std::char_traits<char>_> *pbVar2;
  basic_ostream<char,struct_std::char_traits<char>_> *pbVar3;
  undefined4 *puVar4;
  int iVar5;
  int in_stack_ffffff0c;
  undefined1 local_f0 [16];
  undefined **local_e0;
  basic_streambuf<char,std::char_traits<char>_> local_d8 [14];
  undefined4 local_a0;
  undefined4 local_9c;
  code *local_88;
  undefined4 local_40;
  void *local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  void *local_2c [3];
  undefined1 local_20 [8];
  uint local_18;
  char *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00554bb0;
  local_10 = ExceptionList;
  pcVar1 = (char *)(DAT_00583cc8 ^ (uint)&stack0xfffffffc);
  ExceptionList = &local_10;
  local_40 = 0;
  local_14 = pcVar1;
  if (((*(int *)((int)this + 0xa4) != 0) && (param_1 != 0)) &&
     ((*(char *)(param_1 + 0x75) != '\0' || (*(int *)(param_1 + 0x68) != *(int *)(param_1 + 0x6c))))
     ) {
    local_f0._0_4_ = &PTR_0055b2c0;
    local_e0 = &PTR_00571718;
    local_88 = _vftable__exref;
    local_8 = 0;
    local_40 = 1;
    std::basic_iostream<char,std::char_traits<char>_>::basic_iostream<char,std::char_traits<char>_>
              ((basic_iostream<char,std::char_traits<char>_> *)local_f0,
               (basic_streambuf<char,std::char_traits<char>_> *)local_d8);
    local_8 = 1;
                    /* inlined constructor or destructor (approx location) for
                       std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_> */
    *(basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_vftable **)
     (local_f0 + *(int *)(local_f0._0_4_ + 4)) =
         &std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>::vftable;
    *(int *)(&local_d8[-7].field_0x0 + *(int *)(local_f0._0_4_ + 4)) =
         *(int *)(local_f0._0_4_ + 4) + -0x68;
    std::basic_streambuf<char,std::char_traits<char>_>::
    basic_streambuf<char,std::char_traits<char>_>(local_d8);
                    /* inlined constructor or destructor (approx location) for
                       std::basic_stringbuf<char,std::char_traits<char>,std::allocator<char>_> */
    local_d8[0] = (basic_streambuf<char,std::char_traits<char>_>)
                  &std::basic_stringbuf<char,std::char_traits<char>,std::allocator<char>_>::vftable;
    local_a0 = 0;
    local_9c = 0;
    iVar5 = *(int *)(param_1 + 100);
    local_8 = 3;
    pbVar2 = FUN_00412710((basic_ostream<char,std::char_traits<char>_> *)&local_e0,"zone");
    pbVar3 = std::basic_ostream<char,std::char_traits<char>_>::operator<<
                       ((basic_ostream<char,std::char_traits<char>_> *)pbVar2,iVar5);
    pbVar2 = FUN_00412710((basic_ostream<char,std::char_traits<char>_> *)pbVar3,pcVar1);
    std::basic_ostream<char,std::char_traits<char>_>::operator<<
              ((basic_ostream<char,std::char_traits<char>_> *)pbVar2,in_stack_ffffff0c);
    local_3c = (void *)0x0;
    local_38 = 0;
    local_34 = 0;
    local_30 = 0;
    local_8._0_1_ = 4;
    puVar4 = FUN_0041d800(local_20,&local_3c);
    FUN_0041faa0(puVar4,param_1);
    puVar4 = FUN_004d8f70(local_f0,local_2c);
    local_8 = CONCAT31(local_8._1_3_,5);
    FUN_00413210((void *)((int)this + 0xac),puVar4,(int *)&local_3c);
    if (0xf < local_18) {
      operator_delete(local_2c[0]);
    }
    if (local_3c != (void *)0x0) {
      operator_delete(local_3c);
      local_3c = (void *)0x0;
      local_38 = 0;
      local_34 = 0;
    }
    FUN_004ce3e0(local_f0);
  }
  ExceptionList = local_10;
  __security_check_cookie((uint)local_14 ^ (uint)&stack0xfffffffc);
  return;
}


/* FUN_004d8c90 @ 004d8c90  kind=gamemisc  attributed-by=none  size=294 */

void FUN_004d8c90(int *param_1,int param_2,char param_3)

{
  undefined4 *puVar1;
  int iVar2;
  float local_20;
  float local_1c;
  float local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  uint local_8;
  
  local_8 = DAT_00583cc8 ^ (uint)&stack0xfffffffc;
  if ((char)param_1[0xc] != param_3) {
    iVar2 = 1000 - param_1[0xd];
    param_1[0xd] = iVar2;
    if (iVar2 < 0) {
      iVar2 = 0;
    }
    param_1[0xd] = iVar2;
    iVar2 = *param_1;
    *(char *)(param_1 + 0xc) = param_3;
    if (iVar2 == 5) {
      local_14 = 0x33;
    }
    else if (iVar2 == 6) {
      if (param_3 == '\0') goto LAB_004d8da5;
      local_14 = 0x35;
    }
    else if (iVar2 == 7) {
      if (param_3 == '\0') goto LAB_004d8da5;
      local_14 = 0x34;
    }
    else {
      local_14 = 0x36;
    }
    local_10 = 0x3f800000;
    local_c = 0x3f800000;
    local_20 = (float)*(longlong *)(param_1 + 2) * 1.5258789e-05;
    local_1c = (float)*(longlong *)(param_1 + 4) * 1.5258789e-05;
    puVar1 = *(undefined4 **)(param_2 + 8);
    local_18 = (float)*(longlong *)(param_1 + 6) * 1.5258789e-05;
    iVar2 = FUN_004f3ba0(puVar1,(undefined4 *)puVar1[1],&local_20);
    if (*(int *)(param_2 + 0xc) == 0x7fffffe) {
                    /* WARNING: Subroutine does not return */
      std::_Xlength_error("list<T> too long");
    }
    *(int *)(param_2 + 0xc) = *(int *)(param_2 + 0xc) + 1;
    puVar1[1] = iVar2;
    **(int **)(iVar2 + 4) = iVar2;
  }
LAB_004d8da5:
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


/* FUN_004d8dc0 @ 004d8dc0  kind=gamemisc  attributed-by=none  size=25 */

undefined4 __fastcall FUN_004d8dc0(int param_1)

{
  uint uVar1;
  bool bVar2;
  
  uVar1 = *(uint *)(param_1 + 4) & 0x80000001;
  bVar2 = uVar1 == 0;
  if ((int)uVar1 < 0) {
    bVar2 = (uVar1 - 1 | 0xfffffffe) == 0xffffffff;
  }
  if (!bVar2) {
    return *(undefined4 *)(param_1 + 0x68);
  }
  return *(undefined4 *)(param_1 + 100);
}


/* FUN_004d8de0 @ 004d8de0  kind=gamemisc  attributed-by=none  size=25 */

undefined4 __fastcall FUN_004d8de0(int param_1)

{
  uint uVar1;
  bool bVar2;
  
  uVar1 = *(uint *)(param_1 + 4) & 0x80000001;
  bVar2 = uVar1 == 0;
  if ((int)uVar1 < 0) {
    bVar2 = (uVar1 - 1 | 0xfffffffe) == 0xffffffff;
  }
  if (!bVar2) {
    return *(undefined4 *)(param_1 + 100);
  }
  return *(undefined4 *)(param_1 + 0x68);
}


/* FUN_004d8e10 @ 004d8e10  kind=gamemisc  attributed-by=none  size=29 */

void FUN_004d8e10(undefined4 *param_1,undefined4 *param_2)

{
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_1[2] = param_2[2];
  return;
}


/* FUN_004d8e30 @ 004d8e30  kind=gamemisc  attributed-by=none  size=39 */

float10 __fastcall FUN_004d8e30(double *param_1)

{
  return (float10)(*param_1 * *param_1 + param_1[1] * param_1[1]);
}


/* FUN_004d9160 @ 004d9160  kind=gamemisc  attributed-by=none  size=676 */

void __thiscall FUN_004d9160(void *this,int param_1,int *param_2,uint param_3,uint param_4)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  void **ppvVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  undefined4 *puVar9;
  uint uVar10;
  int iVar11;
  int *piVar12;
  int local_20;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_0054bae8;
  if (param_1 < 0) {
    param_1 = 0;
  }
  piVar12 = param_2;
  if ((int)param_2 < 0) {
    piVar12 = (int *)0x0;
  }
  if ((int)param_3 < 0) {
    param_3 = 0;
  }
  if ((int)param_4 < 0) {
    param_4 = 0;
  }
  iVar5 = param_3 + ((int)param_3 >> 0x1f & 0xffU);
  uVar6 = (int)((int)piVar12 + ((int)piVar12 >> 0x1f & 0xffU)) >> 8;
  uVar10 = (int)((param_1 >> 0x1f & 0xffU) + param_1) >> 8;
  iVar1 = ((int)param_4 >> 0x1f & 0xffU) + param_4;
  ppvVar4 = &local_10;
  param_4 = uVar6;
  do {
    local_10 = ExceptionList;
    param_3 = uVar6;
    if (iVar5 >> 8 < (int)uVar10) {
      return;
    }
    for (; ExceptionList = ppvVar4, (int)param_3 <= iVar1 >> 8; param_3 = param_3 + 1) {
      if ((((-1 < (int)uVar10) && (-1 < (int)param_3)) && ((int)uVar10 < 0x10000)) &&
         ((int)param_3 < 0x10000)) {
        iVar7 = (int)(uVar10 + ((int)uVar10 >> 0x1f & 0x3fU)) >> 6;
        iVar11 = (int)(((int)param_3 >> 0x1f & 0x3fU) + param_3) >> 6;
        if (((-1 < iVar7) && (-1 < iVar11)) &&
           ((iVar7 < 0x400 &&
            ((iVar11 < 0x400 &&
             (iVar7 = *(int *)((int)this + (iVar7 * 0x400 + iVar11) * 4 + 0xbc), iVar7 != 0)))))) {
          uVar6 = uVar10 & 0x8000003f;
          if ((int)uVar6 < 0) {
            uVar6 = (uVar6 - 1 | 0xffffffc0) + 1;
          }
          uVar8 = param_3 & 0x8000003f;
          if ((int)uVar8 < 0) {
            uVar8 = (uVar8 - 1 | 0xffffffc0) + 1;
          }
          iVar7 = *(int *)(iVar7 + 0x10018 + (uVar6 * 0x40 + uVar8) * 4);
          if (iVar7 != 0) {
            local_20 = 0;
            puVar9 = (undefined4 *)FUN_004ce660((undefined4 *)0x0,(undefined4 *)0x0);
            local_8 = 0;
            piVar12 = (int *)**(int **)(iVar7 + 4);
            param_2 = piVar12;
            if (piVar12 != *(int **)(iVar7 + 4)) {
              do {
                if (((*(byte *)(piVar12 + 0x10) & 2) != 0) &&
                   (param_2 = piVar12,
                   iVar11 = FUN_00406050(this,piVar12[4],piVar12[5],piVar12[6],piVar12[7],
                                         piVar12[8] - 0x10000,
                                         piVar12[9] - (uint)((uint)piVar12[8] < 0x10000),0),
                   (*(byte *)(iVar11 + 3) & 0x1f) == 0)) {
                  iVar11 = FUN_0052dfb0(puVar9,(undefined4 *)puVar9[1],&param_2);
                  if (local_20 == 0x15555554) {
                    /* WARNING: Subroutine does not return */
                    std::_Xlength_error("list<T> too long");
                  }
                  puVar9[1] = iVar11;
                  local_20 = local_20 + 1;
                  **(int **)(iVar11 + 4) = iVar11;
                }
                piVar12 = (int *)*piVar12;
                param_2 = piVar12;
              } while (piVar12 != (int *)*(int *)(iVar7 + 4));
            }
            for (puVar2 = (undefined4 *)*puVar9; puVar2 != puVar9; puVar2 = (undefined4 *)*puVar2) {
              piVar12 = (int *)puVar2[2];
              if (piVar12 != *(int **)(iVar7 + 4)) {
                *(int *)piVar12[1] = *piVar12;
                *(int *)(*piVar12 + 4) = piVar12[1];
                operator_delete(piVar12);
                *(int *)(iVar7 + 8) = *(int *)(iVar7 + 8) + -1;
              }
            }
            puVar2 = (undefined4 *)*puVar9;
            *puVar9 = puVar9;
            local_8 = 0xffffffff;
            puVar9[1] = puVar9;
            while (puVar2 != puVar9) {
              puVar3 = (undefined4 *)*puVar2;
              operator_delete(puVar2);
              puVar2 = puVar3;
            }
            operator_delete(puVar9);
          }
        }
      }
      uVar6 = param_4;
      ppvVar4 = ExceptionList;
    }
    uVar10 = uVar10 + 1;
    ppvVar4 = ExceptionList;
    ExceptionList = local_10;
  } while( true );
}


/* FUN_004d9410 @ 004d9410  kind=gamemisc  attributed-by=none  size=770 */

void __thiscall FUN_004d9410(void *this,int *param_1,uint *param_2)

{
  uint uVar1;
  int *piVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  int iVar15;
  int *piVar16;
  uint uVar17;
  int iVar18;
  float fVar19;
  undefined8 uVar20;
  longlong lVar21;
  longlong lVar22;
  longlong lVar23;
  float local_30;
  int local_2c;
  int iStack_28;
  int local_24;
  uint local_20;
  int iStack_1c;
  uint local_18;
  int iStack_14;
  uint local_10;
  int iStack_c;
  
  uVar8 = DAT_00583cc8 ^ (uint)&stack0xfffffffc;
  uVar3 = param_2[1];
  uVar4 = *param_2;
  uVar20 = __alldiv(uVar4,uVar3,0x10000,0);
  uVar5 = param_2[3];
  uVar6 = param_2[2];
  iVar15 = (int)(((int)uVar20 >> 0x1f & 7U) + (int)uVar20) >> 3;
  uVar20 = __alldiv(uVar6,uVar5,0x10000,0);
  fVar19 = -1.0;
  uVar17 = iVar15 - 1;
  iVar15 = iVar15 + 1;
  iVar9 = (int)((int)uVar20 + ((int)uVar20 >> 0x1f & 7U)) >> 3;
  local_30 = -1.0;
  local_2c = 0;
  iStack_28 = 0;
  local_24 = -1;
  if ((int)uVar17 <= iVar15) {
    uVar1 = iVar9 - 1;
    iVar18 = -1;
    uVar7 = uVar1;
    do {
      for (; (int)uVar7 <= iVar9 + 1; uVar7 = uVar7 + 1) {
        if ((((-1 < (int)uVar17) && (-1 < (int)uVar7)) && ((int)uVar17 < 0x200000)) &&
           (((int)uVar7 < 0x200000 &&
            (iVar10 = FUN_00406290(this,(int)(uVar17 + ((int)uVar17 >> 0x1f & 0x1fU)) >> 5,
                                   (int)(uVar7 + ((int)uVar7 >> 0x1f & 0x1fU)) >> 5),
            fVar19 = local_30, iVar10 != 0)))) {
          uVar13 = uVar7 & 0x8000001f;
          if ((int)uVar13 < 0) {
            uVar13 = (uVar13 - 1 | 0xffffffe0) + 1;
          }
          uVar12 = uVar17 & 0x8000001f;
          if ((int)uVar12 < 0) {
            uVar12 = (uVar12 - 1 | 0xffffffe0) + 1;
          }
          piVar2 = (int *)(*(int *)(iVar10 + 0xac) + (uVar13 * 0x20 + uVar12) * 8);
          if (piVar2 != (int *)0x0) {
            piVar2 = (int *)*piVar2;
            piVar16 = (int *)*piVar2;
            if (piVar16 != piVar2) {
              uVar13 = param_2[4];
              uVar12 = param_2[5];
              do {
                iVar10 = piVar16[2];
                local_20 = (uint)*(undefined8 *)(iVar10 + 8);
                iStack_1c = (int)((ulonglong)*(undefined8 *)(iVar10 + 8) >> 0x20);
                iVar11 = (iStack_1c - uVar3) - (uint)(local_20 < uVar4);
                local_18 = (uint)*(undefined8 *)(iVar10 + 0x10);
                iStack_14 = (int)((ulonglong)*(undefined8 *)(iVar10 + 0x10) >> 0x20);
                iVar18 = (iStack_14 - uVar5) - (uint)(local_18 < uVar6);
                local_10 = (uint)*(undefined8 *)(iVar10 + 0x18);
                iStack_c = (int)((ulonglong)*(undefined8 *)(iVar10 + 0x18) >> 0x20);
                uVar14 = local_10 - uVar13;
                iVar10 = (iStack_c - uVar12) - (uint)(local_10 < uVar13);
                lVar21 = __allmul(local_20 - uVar4,iVar11,local_20 - uVar4,iVar11);
                lVar21 = __alldiv((uint)lVar21,(uint)((ulonglong)lVar21 >> 0x20),0x10000,0);
                lVar22 = __allmul(uVar14,iVar10,uVar14,iVar10);
                lVar22 = __alldiv((uint)lVar22,(uint)((ulonglong)lVar22 >> 0x20),0x10000,0);
                lVar23 = __allmul(local_18 - uVar6,iVar18,local_18 - uVar6,iVar18);
                lVar23 = __alldiv((uint)lVar23,(uint)((ulonglong)lVar23 >> 0x20),0x10000,0);
                fVar19 = (float)(lVar21 + lVar23 + lVar22) * 1.5258789e-05;
                if ((local_24 < 0) || (fVar19 < local_30)) {
                  local_2c = piVar16[3];
                  iStack_28 = piVar16[4];
                  local_24 = piVar16[5];
                  local_30 = fVar19;
                }
                piVar16 = (int *)*piVar16;
                iVar18 = local_24;
                fVar19 = local_30;
              } while (piVar16 != piVar2);
            }
          }
        }
      }
      uVar17 = uVar17 + 1;
      uVar7 = uVar1;
    } while ((int)uVar17 <= iVar15);
    if ((0.0 <= fVar19) && (fVar19 <= 16.0)) {
      *param_1 = local_2c;
      param_1[2] = iVar18;
      param_1[1] = iStack_28;
      __security_check_cookie(uVar8 ^ (uint)&stack0xfffffffc);
      return;
    }
  }
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = -1;
  __security_check_cookie(uVar8 ^ (uint)&stack0xfffffffc);
  return;
}


/* FUN_004d9720 @ 004d9720  kind=gamemisc  attributed-by=none  size=571 */

float * FUN_004d9720(float *param_1)

{
  float10 fVar1;
  double dVar2;
  ulonglong uVar3;
  undefined8 local_1c;
  
  uVar3 = FUN_0054a946();
  dVar2 = (double)(longlong)uVar3 * 1.52587890625e-05;
  uVar3 = FUN_0054a946();
  fVar1 = FUN_004d5d30(SUB84((double)(longlong)uVar3 * 1.52587890625e-05,0),
                       (int)((ulonglong)((double)(longlong)uVar3 * 1.52587890625e-05) >> 0x20),dVar2
                      );
  *param_1 = (float)fVar1 * 2.0;
  uVar3 = FUN_0054a946();
  local_1c = CONCAT44(-(uint)(0x20f60000 < (uint)uVar3) - (int)(uVar3 >> 0x20),
                      0x20f60000 - (uint)uVar3);
  dVar2 = (double)local_1c * 1.52587890625e-05;
  uVar3 = FUN_0054a946();
  local_1c = CONCAT44(-(uint)(0xd7f0000 < (uint)uVar3) - (int)(uVar3 >> 0x20),
                      0xd7f0000 - (uint)uVar3);
  fVar1 = FUN_004d5d30(SUB84((double)local_1c * 1.52587890625e-05,0),
                       (int)((ulonglong)((double)local_1c * 1.52587890625e-05) >> 0x20),dVar2);
  param_1[1] = (float)fVar1 * 2.0;
  uVar3 = FUN_0054a946();
  local_1c = CONCAT44(-(uint)(0x14e10000 < (uint)uVar3) - (int)(uVar3 >> 0x20),
                      0x14e10000 - (uint)uVar3);
  dVar2 = (double)local_1c * 1.52587890625e-05;
  uVar3 = FUN_0054a946();
  local_1c = CONCAT44(-(uint)(0x108a0000 < (uint)uVar3) - (int)(uVar3 >> 0x20),
                      0x108a0000 - (uint)uVar3);
  fVar1 = FUN_004d5d30(SUB84((double)local_1c * 1.52587890625e-05,0),
                       (int)((ulonglong)((double)local_1c * 1.52587890625e-05) >> 0x20),dVar2);
  param_1[2] = (float)fVar1 + 0.5;
  return param_1;
}


/* FUN_004d99d0 @ 004d99d0  kind=gamemisc  attributed-by=none  size=63 */

int * __thiscall FUN_004d99d0(void *this,uint *param_1)

{
  uint uVar1;
  
  uVar1 = *param_1;
  *(uint *)this = uVar1 << 0x10;
  *(uint *)((int)this + 4) = ((int)uVar1 >> 0x1f) << 0x10 | uVar1 >> 0x10;
  uVar1 = param_1[1];
  *(uint *)((int)this + 8) = uVar1 << 0x10;
  *(uint *)((int)this + 0xc) = ((int)uVar1 >> 0x1f) << 0x10 | uVar1 >> 0x10;
  uVar1 = param_1[2];
  *(uint *)((int)this + 0x10) = uVar1 << 0x10;
  *(uint *)((int)this + 0x14) = ((int)uVar1 >> 0x1f) << 0x10 | uVar1 >> 0x10;
  return this;
}


/* FUN_004d9a10 @ 004d9a10  kind=gamemisc  attributed-by=none  size=152 */

undefined4 * __thiscall FUN_004d9a10(void *this,int *param_1)

{
  undefined4 *puVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00554c71;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  puVar1 = FUN_004daed0(this);
  *(undefined2 *)(puVar1 + 3) = 0;
  local_8 = 1;
  if (puVar1 + 4 != (undefined4 *)0x0) {
    FUN_004daa80(puVar1 + 4,param_1);
    puVar1[7] = param_1[3];
    puVar1[8] = param_1[4];
    puVar1[9] = param_1[5];
    puVar1[10] = param_1[6];
    puVar1[0xb] = param_1[7];
    puVar1[0xc] = param_1[8];
  }
  ExceptionList = local_10;
  return puVar1;
}


/* FUN_004d9b70 @ 004d9b70  kind=gamemisc  attributed-by=none  size=50 */

int FUN_004d9b70(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  int iVar1;
  
  iVar1 = FUN_00407be0(param_1,param_2);
  if ((undefined4 *)(iVar1 + 8) != (undefined4 *)0x0) {
    *(undefined4 *)(iVar1 + 8) = *param_3;
    *(undefined4 *)(iVar1 + 0xc) = param_3[1];
    *(undefined4 *)(iVar1 + 0x10) = param_3[2];
  }
  return iVar1;
}


/* FUN_004d9be0 @ 004d9be0  kind=gamemisc  attributed-by=none  size=116 */

void __thiscall FUN_004d9be0(void *this,int *param_1,undefined4 param_2)

{
  char cVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  int iVar5;
  int *piVar6;
  undefined4 *puVar7;
  
  iVar2 = *(int *)this;
  puVar7 = FUN_004d9d20(this,*(undefined4 **)(*param_1 + 4),iVar2,param_2);
  *(undefined4 **)(iVar2 + 4) = puVar7;
  piVar3 = *(int **)this;
  *(int *)((int)this + 4) = param_1[1];
  piVar4 = (int *)piVar3[1];
  if (*(char *)((int)piVar4 + 0xd) != '\0') {
    *piVar3 = (int)piVar3;
    *(int *)(*(int *)this + 8) = *(int *)this;
    return;
  }
  cVar1 = *(char *)(*piVar4 + 0xd);
  piVar6 = (int *)*piVar4;
  while (cVar1 == '\0') {
    cVar1 = *(char *)(*piVar6 + 0xd);
    piVar4 = piVar6;
    piVar6 = (int *)*piVar6;
  }
  *piVar3 = (int)piVar4;
  iVar2 = *(int *)(*(int *)this + 4);
  iVar5 = *(int *)(iVar2 + 8);
  cVar1 = *(char *)(iVar5 + 0xd);
  while (cVar1 == '\0') {
    cVar1 = *(char *)(*(int *)(iVar5 + 8) + 0xd);
    iVar2 = iVar5;
    iVar5 = *(int *)(iVar5 + 8);
  }
  *(int *)(*(int *)this + 8) = iVar2;
  return;
}


/* FUN_004d9c60 @ 004d9c60  kind=gamemisc  attributed-by=none  size=159 */

undefined4 * __thiscall
FUN_004d9c60(void *this,undefined4 *param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00554cc0;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  puVar3 = *(undefined4 **)this;
  if (*(char *)((int)param_1 + 0xd) == '\0') {
    puVar1 = FUN_004d9a10(this,param_1 + 4);
    puVar1[1] = param_2;
    *(undefined1 *)(puVar1 + 3) = *(undefined1 *)(param_1 + 3);
    if (*(char *)((int)puVar3 + 0xd) != '\0') {
      puVar3 = puVar1;
    }
    local_8 = 0;
    puVar2 = FUN_004d9c60(this,(undefined4 *)*param_1,puVar1,param_3);
    *puVar1 = puVar2;
    puVar2 = FUN_004d9c60(this,(undefined4 *)param_1[2],puVar1,param_3);
    puVar1[2] = puVar2;
  }
  ExceptionList = local_10;
  return puVar3;
}


/* FUN_004d9d20 @ 004d9d20  kind=gamemisc  attributed-by=none  size=159 */

undefined4 * __thiscall
FUN_004d9d20(void *this,undefined4 *param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00554ce0;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  puVar3 = *(undefined4 **)this;
  if (*(char *)((int)param_1 + 0xd) == '\0') {
    puVar1 = FUN_004d9ac0(this,param_1 + 4);
    puVar1[1] = param_2;
    *(undefined1 *)(puVar1 + 3) = *(undefined1 *)(param_1 + 3);
    if (*(char *)((int)puVar3 + 0xd) != '\0') {
      puVar3 = puVar1;
    }
    local_8 = 0;
    puVar2 = FUN_004d9d20(this,(undefined4 *)*param_1,puVar1,param_3);
    *puVar1 = puVar2;
    puVar2 = FUN_004d9d20(this,(undefined4 *)param_1[2],puVar1,param_3);
    puVar1[2] = puVar2;
  }
  ExceptionList = local_10;
  return puVar3;
}


/* FUN_004da9f0 @ 004da9f0  kind=gamemisc  attributed-by=none  size=138 */

void __thiscall FUN_004da9f0(void *this,int *param_1,int *param_2)

{
  char cVar1;
  int *piVar2;
  int *piVar3;
  void *local_8;
  
  local_8 = this;
  while (param_1 != param_2) {
    piVar2 = *(int **)this;
    piVar3 = FUN_004d9a10(this,param_1 + 4);
    FUN_004da210(this,&local_8,piVar2,piVar3 + 4,piVar3);
    if (*(char *)((int)param_1 + 0xd) == '\0') {
      piVar2 = (int *)param_1[2];
      if (*(char *)((int)piVar2 + 0xd) == '\0') {
        cVar1 = *(char *)(*piVar2 + 0xd);
        param_1 = piVar2;
        piVar2 = (int *)*piVar2;
        while (cVar1 == '\0') {
          cVar1 = *(char *)(*piVar2 + 0xd);
          param_1 = piVar2;
          piVar2 = (int *)*piVar2;
        }
      }
      else {
        cVar1 = *(char *)(param_1[1] + 0xd);
        piVar3 = (int *)param_1[1];
        piVar2 = param_1;
        while ((param_1 = piVar3, cVar1 == '\0' && (piVar2 == (int *)param_1[2]))) {
          cVar1 = *(char *)(param_1[1] + 0xd);
          piVar3 = (int *)param_1[1];
          piVar2 = param_1;
        }
      }
    }
  }
  return;
}


/* FUN_004db1b0 @ 004db1b0  kind=gamemisc  attributed-by=none  size=76 */

void __thiscall FUN_004db1b0(void *this,int *param_1,uint *param_2)

{
  uint *puVar1;
  uint uVar2;
  uint *puVar3;
  uint *puVar4;
  uint *puVar5;
  
  puVar1 = *(uint **)this;
  puVar5 = puVar1;
  if (*(char *)((int)puVar1[1] + 0xd) == '\0') {
    puVar3 = (uint *)puVar1[1];
    do {
      if (puVar3[4] < *param_2) {
        puVar4 = (uint *)puVar3[2];
      }
      else {
        puVar4 = (uint *)*puVar3;
        puVar5 = puVar3;
      }
      puVar3 = puVar4;
    } while (*(char *)((int)puVar4 + 0xd) == '\0');
  }
  if ((puVar5 == puVar1) || (uVar2 = *param_2, param_2 = puVar5, uVar2 < puVar5[4])) {
    param_2 = puVar1;
  }
  *param_1 = (int)param_2;
  return;
}


/* FUN_004db200 @ 004db200  kind=gamemisc  attributed-by=none  size=7104 */

void FUN_004db200(void *param_1,int param_2)

{
  int **ppiVar1;
  undefined8 uVar2;
  int *piVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  uint uVar7;
  uint *puVar8;
  ulonglong uVar9;
  void *this;
  int *piVar10;
  undefined4 *puVar11;
  char cVar12;
  char cVar13;
  byte bVar14;
  int *piVar15;
  int *piVar16;
  uint *puVar17;
  undefined4 *puVar18;
  float *pfVar19;
  uint uVar20;
  uint uVar21;
  int iVar22;
  float *pfVar23;
  uint *puVar24;
  int iVar25;
  undefined4 *puVar26;
  void *pvVar27;
  bool bVar28;
  double dVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  ulonglong uVar33;
  ulonglong uVar34;
  undefined1 auStack_3ec [3];
  byte local_3e9;
  void *local_3e8;
  float *local_3e4;
  float *local_3e0;
  int **local_3dc;
  uint *local_3d8;
  char local_3d2;
  char local_3d1;
  float *local_3d0;
  float local_3cc;
  float *local_3c8;
  int *local_3c4;
  undefined8 local_3c0;
  uint *local_3b8;
  int local_3b4;
  uint *local_3b0;
  int local_3ac;
  undefined8 local_3a8;
  uint *local_3a0;
  undefined4 *local_39c;
  int local_398;
  uint *local_394;
  undefined4 local_390;
  int local_38c;
  int *local_388;
  undefined4 local_384;
  float *local_380;
  void *local_37c;
  int *local_378;
  undefined4 local_374;
  undefined8 local_370;
  float *local_364;
  undefined4 local_360;
  undefined4 local_35c;
  undefined8 local_358;
  undefined8 local_350;
  float local_344;
  int *local_340;
  float local_33c;
  float local_338;
  uint *local_334;
  undefined4 local_330;
  undefined4 local_32c;
  undefined8 local_328;
  undefined8 local_320;
  uint *local_318;
  int local_314;
  uint *local_310;
  int local_30c;
  uint *local_308;
  int local_304;
  uint *local_300;
  int local_2fc;
  ulonglong local_2f8;
  uint *local_2f0;
  int local_2ec;
  ulonglong local_2e8;
  undefined4 local_2dc [2];
  undefined8 local_2d4;
  float local_2cc;
  float *local_2c8;
  float local_2c4;
  int local_2bc;
  int iStack_2b8;
  int local_2b4;
  int local_2b0;
  int iStack_2ac;
  int local_2a8;
  int iStack_2a4;
  int local_2a0;
  int iStack_29c;
  float local_298 [6];
  uint local_280;
  uint local_27c;
  uint local_278;
  float local_274 [2];
  float *local_26c;
  uint local_268 [8];
  float *local_248;
  float local_244 [3];
  uint local_238 [7];
  float local_21c [3];
  uint local_210 [7];
  int local_1f4;
  int local_1f0;
  int local_1ec;
  int local_1e8;
  int local_1e4;
  undefined8 local_1e0;
  undefined8 local_1d8;
  int local_1d0;
  int local_1cc;
  uint *local_1c8;
  uint *local_1c4;
  uint *local_1c0;
  int local_1bc;
  undefined8 local_1b8;
  uint local_1b0;
  int local_1ac;
  int local_1a8;
  int local_1a4;
  int local_1a0;
  int local_19c;
  uint *local_198;
  int local_194;
  uint *local_190;
  int local_18c;
  undefined8 local_188;
  uint local_180;
  int local_17c;
  int local_178;
  int local_174;
  int local_170;
  int local_16c;
  uint local_168;
  int local_164;
  int local_160;
  int local_15c;
  int local_158;
  int local_154;
  int local_14c [4];
  int local_13c;
  int local_134;
  int local_130;
  int local_12c;
  uint *local_128;
  int local_124;
  uint *local_120;
  int local_11c;
  undefined8 local_118;
  int local_110;
  int local_10c;
  int local_108;
  int local_104 [4];
  uint local_f4;
  uint local_f0;
  uint local_ec;
  int local_e8;
  uint local_e4;
  int local_dc;
  int local_d8;
  uint local_d0;
  uint local_cc;
  uint local_c8;
  uint local_c4;
  int local_c0;
  uint local_bc;
  uint local_b8;
  uint local_b4;
  uint local_b0;
  uint local_ac;
  int local_a0;
  uint local_9c;
  int local_98;
  uint local_94;
  int local_84 [3];
  int local_78 [3];
  int local_6c [3];
  uint local_60 [7];
  int local_44 [3];
  uint local_38 [7];
  uint local_1c;
  void *local_14;
  undefined1 *puStack_10;
  undefined4 local_c;
  
  local_c = 0xffffffff;
  puStack_10 = &LAB_00554e12;
  local_14 = ExceptionList;
  local_1c = DAT_00583cc8 ^ (uint)auStack_3ec;
  ExceptionList = &local_14;
  *(undefined4 *)((int)param_1 + 0x40) = 0;
  *(undefined4 *)((int)param_1 + 0x44) = 0;
  *(undefined4 *)((int)param_1 + 0x48) = 0;
  local_3e8 = param_1;
  local_274[0] = 0.0;
  local_3c8 = (float *)(0.5 - *(float *)((int)param_1 + 0x88) * 0.5);
  local_274[1] = 0.0;
  iVar25 = 0;
  local_26c = local_3c8;
  do {
    local_3d0 = (float *)(local_274[iVar25] * 65536.0);
    uVar33 = FUN_0054a946();
    local_238[iVar25 * 2] = (uint)uVar33;
    local_238[iVar25 * 2 + 1] = (uint)(uVar33 >> 0x20);
    iVar25 = iVar25 + 1;
  } while (iVar25 < 3);
  local_180 = *(uint *)((int)param_1 + 0x10) + local_238[0];
  local_3a0 = (uint *)((int)param_1 + 0x10);
  local_17c = *(int *)((int)param_1 + 0x14) + local_238[1] +
              (uint)CARRY4(*(uint *)((int)param_1 + 0x10),local_238[0]);
  local_178 = *(uint *)((int)param_1 + 0x18) + local_238[2];
  local_174 = *(int *)((int)param_1 + 0x1c) + local_238[3] +
              (uint)CARRY4(*(uint *)((int)param_1 + 0x18),local_238[2]);
  local_170 = *(uint *)((int)param_1 + 0x20) + local_238[4];
  local_16c = *(int *)((int)param_1 + 0x24) + local_238[5] +
              (uint)CARRY4(*(uint *)((int)param_1 + 0x20),local_238[4]);
  piVar15 = (int *)FUN_00405450(local_6c,&local_180);
  pvVar27 = local_3e8;
  local_3d8 = (uint *)((int)local_3e8 + 0x1440);
  piVar16 = (int *)FUN_00405450(local_78,local_3d8);
  uVar33 = CONCAT44(local_3cc,local_3e0);
  local_134 = *piVar16 - *piVar15;
  local_12c = piVar16[2] - piVar15[2];
  local_130 = piVar16[1] - piVar15[1];
  if ((float)(local_134 * local_134 + local_12c * local_12c + local_130 * local_130) <=
      *(float *)((int)pvVar27 + 0x1458) * *(float *)((int)pvVar27 + 0x1458)) {
    FUN_00405330((int)pvVar27);
    uVar33 = CONCAT44(local_3cc,local_3e0);
    goto LAB_004dcfc6;
  }
  if (*(int *)((int)pvVar27 + 0x1464) == 0) goto LAB_004dcfc6;
  if (3000 < *(int *)((int)pvVar27 + 0x145c)) {
    local_268[6] = 0;
    local_268[7] = 0;
    local_248 = local_3c8;
    FUN_00402510((int)local_60);
    puVar17 = FUN_00402cb0((void *)((int)pvVar27 + 0x10),local_38,local_60);
    *(uint *)((int)pvVar27 + 0x1428) = *puVar17;
    *(uint *)((int)pvVar27 + 0x142c) = puVar17[1];
    *(uint *)((int)pvVar27 + 0x1430) = puVar17[2];
    *(uint *)((int)pvVar27 + 0x1434) = puVar17[3];
    *(uint *)((int)pvVar27 + 0x1438) = puVar17[4];
    *(uint *)((int)pvVar27 + 0x143c) = puVar17[5];
    FUN_004dd2e0(local_37c,pvVar27);
  }
  uVar33 = CONCAT44(local_3cc,local_3e0);
  local_3c4 = *(int **)((int)pvVar27 + 0x1464);
  if (local_3c4 == (int *)0x0) goto LAB_004dcfc6;
  puVar17 = *(uint **)((int)pvVar27 + 0x1460);
  puVar24 = (uint *)*puVar17;
  local_38c = -1;
  piVar15 = local_3c4;
  local_3b0 = puVar24;
  if (puVar24 != puVar17) {
    local_3d0 = (float *)(*(float *)((int)local_3e8 + 0x88) * 0.5 * 65536.0);
    local_370 = FUN_0054a946();
    local_328 = 0;
    local_2e8 = FUN_0054a946();
    local_3d0 = *(float **)((int)local_3e8 + 0x18);
    local_3c8 = *(float **)((int)local_3e8 + 0x1c);
    local_3dc = *(int ***)((int)local_3e8 + 0x20);
    local_3c0._0_4_ = *(float **)((int)local_3e8 + 0x24);
    uVar33 = local_2e8;
    do {
      local_2f8 = uVar33;
      local_3e4 = (float *)(local_2f8 >> 0x20);
      local_3e0 = (float *)local_2f8;
      local_1b0 = (int)*local_3a0 - (int)local_3e0;
      local_1ac = (local_3a0[1] - (int)local_3e4) - (uint)((float *)*local_3a0 < local_3e0);
      local_1a8 = (int)local_3d0 - (int)local_3e0;
      local_3a8._0_4_ = local_3c8;
      local_1a4 = (int)local_3c8 + (-(uint)(local_3d0 < local_3e0) - (int)local_3e4);
      local_380 = (float *)local_3dc;
      local_1a0 = (int)local_3dc - (int)(float *)local_370;
      local_19c = (int)(float *)local_3c0 +
                  (-(uint)(local_3dc < (float *)local_370) - local_370._4_4_);
      local_3b8 = (uint *)(float *)local_3c0;
      piVar15 = (int *)FUN_00405450(local_84,&local_1b0);
      local_2b4 = piVar15[2] - puVar24[4];
      iStack_2b8 = piVar15[1] - puVar24[3];
      local_2bc = *piVar15 - puVar24[2];
      iVar25 = local_2b4 * local_2b4 + iStack_2b8 * iStack_2b8 + local_2bc * local_2bc;
      if ((local_38c < 0) || (iVar25 <= local_38c)) {
        local_3b0 = puVar24;
        local_38c = iVar25;
      }
      puVar24 = (uint *)*puVar24;
      uVar33 = CONCAT44(local_3e4,local_3e0);
    } while (puVar24 != puVar17);
    piVar15 = local_3c4;
    if (local_38c == 0) {
      *(undefined4 *)((int)local_3e8 + 0x145c) = 0;
      piVar15 = *(int **)((int)local_3e8 + 0x1464);
    }
  }
  puVar24 = local_3b0;
  if (((*(byte *)((int)local_3e8 + 0x5c) & 0x40) == 0) && (piVar15 < (int *)0x1e)) {
    uVar20 = puVar17[1];
    piVar15 = (int *)FUN_00405450(local_44,local_3d8);
    local_10c = *(int *)(uVar20 + 0xc) - piVar15[1];
    local_108 = *(int *)(uVar20 + 0x10) - piVar15[2];
    local_110 = *(int *)(uVar20 + 8) - *piVar15;
    if ((float)(local_108 * local_108 + local_10c * local_10c + local_110 * local_110) <=
        *(float *)((int)local_3e8 + 0x1458) * *(float *)((int)local_3e8 + 0x1458))
    goto LAB_004db6ef;
    local_3d2 = '\x01';
    pvVar27 = local_3e8;
  }
  else {
LAB_004db6ef:
    pvVar27 = local_3e8;
    local_3d2 = '\0';
    if (local_38c == 0) {
      puVar17 = (uint *)((int)local_3e8 + 0x141c);
      iVar25 = FUN_004156e0(puVar24 + 2,(int)puVar17);
      if ((char)iVar25 != '\0') {
        *puVar17 = puVar24[2];
        *(uint *)((int)pvVar27 + 0x1420) = puVar24[3];
        *(uint *)((int)pvVar27 + 0x1424) = puVar24[4];
        local_280 = puVar24[2];
        local_27c = puVar24[3];
        local_278 = puVar24[4];
        FUN_004d99d0((void *)((int)pvVar27 + 0x1428),&local_280);
        local_378 = (int *)0x0;
        local_374 = 0;
        local_378 = (int *)FUN_0042f040();
        this = local_3e8;
        iVar25 = *(int *)((int)pvVar27 + 0x1418);
        local_c = 0;
        local_3e0 = (float *)0x46;
        if ((0x45 < iVar25) || (local_3e0 = (float *)iVar25, 0 < iVar25)) {
          do {
            piVar16 = (int *)0x0;
            piVar15 = (int *)**(int **)((int)pvVar27 + 0x1414);
            local_3e4 = (float *)0xffffffff;
            if (piVar15 != *(int **)((int)pvVar27 + 0x1414)) {
              do {
                puVar18 = (undefined4 *)piVar15[4];
                puVar18 = FUN_004dd0f0(this,(undefined4 *)*puVar18,puVar18[1],puVar18[2]);
                if ((puVar18 != (undefined4 *)0x0) &&
                   (((int)local_3e4 < 0 || ((int)puVar18[1] < (int)local_3e4)))) {
                  local_3e4 = (float *)puVar18[1];
                  piVar16 = piVar15;
                }
                if (*(char *)((int)piVar15 + 0xd) == '\0') {
                  piVar3 = (int *)piVar15[2];
                  if (*(char *)((int)piVar3 + 0xd) == '\0') {
                    cVar12 = *(char *)(*piVar3 + 0xd);
                    piVar15 = piVar3;
                    piVar3 = (int *)*piVar3;
                    while (cVar12 == '\0') {
                      cVar12 = *(char *)(*piVar3 + 0xd);
                      piVar15 = piVar3;
                      piVar3 = (int *)*piVar3;
                    }
                  }
                  else {
                    cVar12 = *(char *)(piVar15[1] + 0xd);
                    piVar10 = (int *)piVar15[1];
                    piVar3 = piVar15;
                    while ((piVar15 = piVar10, cVar12 == '\0' && (piVar3 == (int *)piVar15[2]))) {
                      cVar12 = *(char *)(piVar15[1] + 0xd);
                      piVar10 = (int *)piVar15[1];
                      piVar3 = piVar15;
                    }
                  }
                }
              } while (piVar15 != *(int **)((int)this + 0x1414));
              if (-1 < (int)local_3e4) {
                FUN_004da790(&local_378,local_2dc,'\0',piVar16 + 4,(uint)DAT_0058426a);
                FUN_0040a4f0((void *)((int)this + 0x1414),(undefined4 *)&local_328,piVar16);
              }
            }
            local_3e0 = (float *)((int)local_3e0 + -1);
            pvVar27 = this;
          } while (local_3e0 != (float *)0x0);
          local_3e0 = (float *)0x0;
          puVar24 = local_3b0;
          pvVar27 = local_3e8;
        }
        ppiVar1 = (int **)((int)pvVar27 + 0x1414);
        local_3dc = ppiVar1;
        if (ppiVar1 != &local_378) {
          FUN_00402ed0((int *)(*ppiVar1)[1]);
          local_3d0 = (float *)((uint)local_3d0 & 0xffffff00);
          (*ppiVar1)[1] = (int)*ppiVar1;
          **ppiVar1 = (int)*ppiVar1;
          (*ppiVar1)[2] = (int)*ppiVar1;
          *(undefined4 *)((int)pvVar27 + 0x1418) = 0;
          FUN_004d9be0(ppiVar1,(int *)&local_378,local_3d0);
        }
        local_398 = 0;
        local_39c = (undefined4 *)FUN_004ce660((undefined4 *)0x0,(undefined4 *)0x0);
        local_c._0_1_ = 1;
        local_388 = (int *)0x0;
        local_384 = 0;
        local_388 = (int *)FUN_00407ad0();
        local_c = CONCAT31(local_c._1_3_,2);
        local_3e0 = (float *)FUN_004dd0f0(pvVar27,(undefined4 *)puVar24[2],puVar24[3],puVar24[4]);
        piVar15 = (int *)**ppiVar1;
        local_3c4 = piVar15;
        if (piVar15 != *ppiVar1) {
          do {
            puVar18 = (undefined4 *)piVar15[4];
            local_3e4 = (float *)FUN_004dd0f0(local_3e8,(undefined4 *)*puVar18,puVar18[1],puVar18[2]
                                             );
            local_394 = (uint *)0x0;
            local_390 = 0;
            local_394 = (uint *)FUN_00407ad0();
            local_c._0_1_ = 3;
            local_364 = (float *)0x0;
            local_360 = 0;
            local_35c = 0;
            FUN_0045f080(&local_364,3);
            local_c = CONCAT31(local_c._1_3_,4);
            FUN_004dab90(&local_364,piVar15 + 4);
            pvVar27 = local_3e8;
            if (local_3e4 == (float *)0x0) {
LAB_004dba99:
              if (local_3e4 == local_3e0) goto LAB_004dbade;
              iVar25 = FUN_0052dfb0(local_39c,(undefined4 *)local_39c[1],&local_3c4);
              if (local_398 == 0x15555554) {
                    /* WARNING: Subroutine does not return */
                std::_Xlength_error("list<T> too long");
              }
              local_398 = local_398 + 1;
              local_39c[1] = iVar25;
              **(int **)(iVar25 + 4) = iVar25;
            }
            else {
              while (local_3e4 != local_3e0) {
                local_3c8 = (float *)FUN_004dd0f0(pvVar27,(undefined4 *)local_3e4[3],
                                                  (int)local_3e4[4],(int)local_3e4[5]);
                if ((local_3c8 == local_3e4) || (local_3c8 == (float *)0x0)) goto LAB_004dba99;
                pfVar19 = (float *)FUN_004daca0(&local_394,(int *)&local_364);
                *pfVar19 = *local_3e4;
                pfVar19[1] = local_3e4[1];
                pfVar19[2] = local_3e4[2];
                pfVar19[3] = local_3e4[3];
                pfVar19[4] = local_3e4[4];
                pfVar19[5] = local_3e4[5];
                *local_364 = local_3e4[3];
                local_364[1] = local_3e4[4];
                local_364[2] = local_3e4[5];
                local_3e4 = local_3c8;
              }
LAB_004dbade:
              FUN_004da9f0(&local_388,(int *)*local_394,(int *)local_394);
            }
            if (local_364 != (float *)0x0) {
              operator_delete(local_364);
              local_364 = (float *)0x0;
              local_360 = 0;
              local_35c = 0;
            }
            local_c = CONCAT31(local_c._1_3_,2);
            FUN_0040a430(&local_394,&local_340,(int *)*local_394,(int *)local_394);
            operator_delete(local_394);
            if (*(char *)((int)piVar15 + 0xd) == '\0') {
              piVar16 = (int *)piVar15[2];
              if (*(char *)((int)piVar16 + 0xd) == '\0') {
                cVar12 = *(char *)(*piVar16 + 0xd);
                piVar15 = piVar16;
                piVar16 = (int *)*piVar16;
                while (local_3c4 = piVar15, cVar12 == '\0') {
                  cVar12 = *(char *)(*piVar16 + 0xd);
                  piVar15 = piVar16;
                  piVar16 = (int *)*piVar16;
                }
              }
              else {
                cVar12 = *(char *)(piVar15[1] + 0xd);
                piVar3 = (int *)piVar15[1];
                piVar16 = piVar15;
                while ((piVar15 = piVar3, local_3c4 = piVar15, cVar12 == '\0' &&
                       (piVar16 == (int *)piVar15[2]))) {
                  cVar12 = *(char *)(piVar15[1] + 0xd);
                  piVar3 = (int *)piVar15[1];
                  piVar16 = piVar15;
                }
              }
            }
          } while (piVar15 != *(int **)((int)pvVar27 + 0x1414));
        }
        local_334 = (uint *)0x0;
        local_330 = 0;
        local_32c = 0;
        FUN_0045f080(&local_334,3);
        *local_334 = puVar24[2];
        local_334[1] = puVar24[3];
        local_334[2] = puVar24[4];
        local_c = CONCAT31(local_c._1_3_,5);
        pfVar19 = (float *)FUN_004daca0(&local_388,(int *)&local_334);
        *pfVar19 = *local_3e0;
        pfVar19[1] = local_3e0[1];
        pfVar19[2] = local_3e0[2];
        pfVar19[3] = local_3e0[3];
        pfVar19[4] = local_3e0[4];
        pfVar19[5] = local_3e0[5];
        iVar25 = FUN_004daca0(&local_388,(int *)&local_334);
        puVar5 = local_39c;
        ppiVar1 = local_3dc;
        *(uint *)(iVar25 + 0xc) = puVar24[2];
        *(uint *)(iVar25 + 0x10) = puVar24[3];
        *(uint *)(iVar25 + 0x14) = puVar24[4];
        for (puVar18 = (undefined4 *)*local_39c; puVar18 != puVar5; puVar18 = (undefined4 *)*puVar18
            ) {
          FUN_0040a4f0(ppiVar1,&local_338,(int *)puVar18[2]);
          puVar24 = local_3b0;
          pvVar27 = local_3e8;
        }
        ppiVar1 = (int **)((int)pvVar27 + 0x140c);
        if (ppiVar1 != &local_388) {
          FUN_00402ed0((int *)(*ppiVar1)[1]);
          local_3c8 = (float *)((uint)local_3c8 & 0xffffff00);
          (*ppiVar1)[1] = (int)*ppiVar1;
          **ppiVar1 = (int)*ppiVar1;
          (*ppiVar1)[2] = (int)*ppiVar1;
          *(undefined4 *)((int)pvVar27 + 0x1410) = 0;
          piVar15 = *ppiVar1;
          puVar18 = FUN_004d9c60((void *)((int)pvVar27 + 0x140c),(undefined4 *)local_388[1],piVar15,
                                 local_3c8);
          piVar15[1] = (int)puVar18;
          piVar15 = *(int **)((int)pvVar27 + 0x140c);
          *(undefined4 *)((int)pvVar27 + 0x1410) = local_384;
          piVar16 = (int *)piVar15[1];
          if (*(char *)((int)piVar16 + 0xd) == '\0') {
            cVar12 = *(char *)(*piVar16 + 0xd);
            piVar3 = (int *)*piVar16;
            while (cVar12 == '\0') {
              cVar12 = *(char *)(*piVar3 + 0xd);
              piVar16 = piVar3;
              piVar3 = (int *)*piVar3;
            }
            *piVar15 = (int)piVar16;
            iVar25 = *(int *)((int)pvVar27 + 0x140c);
            iVar22 = *(int *)(iVar25 + 4);
            iVar4 = *(int *)(iVar22 + 8);
            cVar12 = *(char *)(iVar4 + 0xd);
            while (cVar12 == '\0') {
              cVar12 = *(char *)(*(int *)(iVar4 + 8) + 0xd);
              iVar22 = iVar4;
              iVar4 = *(int *)(iVar4 + 8);
            }
            *(int *)(iVar25 + 8) = iVar22;
          }
          else {
            *piVar15 = (int)piVar15;
            iVar25 = *(int *)((int)pvVar27 + 0x140c);
            *(int *)(iVar25 + 8) = iVar25;
          }
        }
        puVar18 = *(undefined4 **)((int)pvVar27 + 0x140c);
        *(undefined4 **)((int)pvVar27 + 0x1408) = puVar18;
        puVar5 = (undefined4 *)*puVar18;
        puVar26 = puVar18;
        while (puVar5 != puVar18) {
          if ((puVar26 == puVar18) || ((int)puVar5[8] < (int)puVar26[8])) {
            *(undefined4 **)((int)pvVar27 + 0x1408) = puVar5;
            puVar26 = puVar5;
          }
          if (*(char *)((int)puVar5 + 0xd) == '\0') {
            puVar6 = (undefined4 *)puVar5[2];
            if (*(char *)((int)puVar6 + 0xd) == '\0') {
              cVar12 = *(char *)((int)*puVar6 + 0xd);
              puVar5 = puVar6;
              puVar6 = (undefined4 *)*puVar6;
              while (cVar12 == '\0') {
                cVar12 = *(char *)((int)*puVar6 + 0xd);
                puVar5 = puVar6;
                puVar6 = (undefined4 *)*puVar6;
              }
            }
            else {
              cVar12 = *(char *)((int)puVar5[1] + 0xd);
              puVar11 = (undefined4 *)puVar5[1];
              puVar6 = puVar5;
              while ((puVar5 = puVar11, cVar12 == '\0' && (puVar6 == (undefined4 *)puVar5[2]))) {
                cVar12 = *(char *)((int)puVar5[1] + 0xd);
                puVar11 = (undefined4 *)puVar5[1];
                puVar6 = puVar5;
              }
            }
          }
        }
        if (local_334 != (uint *)0x0) {
          operator_delete(local_334);
        }
        local_c = CONCAT31(local_c._1_3_,1);
        FUN_0040a430(&local_388,&local_344,(int *)*local_388,local_388);
        operator_delete(local_388);
        puVar5 = local_39c;
        puVar18 = (undefined4 *)*local_39c;
        *local_39c = local_39c;
        local_39c[1] = local_39c;
        while (puVar18 != puVar5) {
          puVar26 = (undefined4 *)*puVar18;
          operator_delete(puVar18);
          puVar18 = puVar26;
          puVar24 = local_3b0;
        }
        operator_delete(local_39c);
        local_c = 0xffffffff;
        FUN_0040a430(&local_378,&local_33c,(int *)*local_378,local_378);
        operator_delete(local_378);
      }
    }
  }
  local_3c0._0_4_ = (float *)puVar24[4];
  local_3dc = (int **)(*(float *)((int)pvVar27 + 0x88) * 0.5 * 65536.0);
  pfVar19 = (float *)((int)pvVar27 + 0x80);
  local_3e9 = 0;
  local_380 = pfVar19;
  local_350 = FUN_0054a946();
  local_320 = FUN_0054a946();
  local_3cc = (float)(local_320 >> 0x20);
  puVar17 = (uint *)local_320;
  uVar20 = puVar24[2];
  local_3e4 = (float *)(puVar24 + 2);
  local_9c = ((int)uVar20 >> 0x1f) << 0x10 | uVar20 >> 0x10;
  uVar21 = puVar24[3];
  uVar7 = puVar24[4];
  local_94 = ((int)uVar21 >> 0x1f) << 0x10 | uVar21 >> 0x10;
  local_a0 = uVar20 * 0x10000;
  local_98 = uVar21 * 0x10000;
  local_1e0 = local_320 + CONCAT44(local_9c,local_a0);
  local_3e0 = (float *)((ulonglong)local_1e0 >> 0x20);
  local_1d8 = local_320 + CONCAT44(local_94,local_98);
  local_1d0 = uVar7 * 0x10000 + (uint)local_350;
  local_1cc = (((int)uVar7 >> 0x1f) << 0x10 | uVar7 >> 0x10) + local_350._4_4_ +
              (uint)CARRY4(uVar7 * 0x10000,(uint)local_350);
  local_3d8 = puVar17;
  local_310 = puVar17;
  local_30c = (int)local_3cc;
  cVar12 = FUN_004d5740(local_37c,(uint *)&local_1e0,pfVar19);
  local_3e0 = (float *)(uint)local_3e9;
  if (cVar12 != '\0') {
    local_3e0 = (float *)0x1;
  }
  local_3e9 = '\x01';
  local_3d1 = '\0';
  pfVar19 = (float *)local_3c0;
  puVar24 = puVar17;
  local_358 = CONCAT44(local_358._4_4_,(float)local_358);
  local_1b8 = CONCAT44(local_1b8._4_4_,(undefined4)local_1b8);
  if ((local_3d2 == '\0') &&
     (local_358 = CONCAT44(local_358._4_4_,(float)local_358),
     local_1b8 = CONCAT44(local_1b8._4_4_,(undefined4)local_1b8),
     local_3b0 != *(uint **)(*(int *)((int)local_3e8 + 0x1460) + 4))) {
    puVar8 = (uint *)*local_3b0;
    local_3dc = (int **)(*(float *)((int)local_3e8 + 0x88) * 0.5 * 65536.0);
    local_3e9 = '\0';
    local_3a8._0_4_ = (float *)puVar8[4];
    pfVar19 = (float *)((int)local_3e8 + 0x80);
    local_3b0 = puVar8;
    local_358 = FUN_0054a946();
    puVar24 = local_3d8;
    local_2ec = (int)local_3cc;
    local_2fc = (int)local_3cc;
    uVar20 = puVar8[2];
    local_3e4 = (float *)(puVar8 + 2);
    local_b4 = ((int)uVar20 >> 0x1f) << 0x10 | uVar20 >> 0x10;
    uVar21 = puVar8[3];
    uVar7 = puVar8[4];
    local_ac = ((int)uVar21 >> 0x1f) << 0x10 | uVar21 >> 0x10;
    local_b8 = uVar20 * 0x10000;
    local_b0 = uVar21 * 0x10000;
    local_1c8 = local_3d8 + uVar20 * 0x4000;
    local_3b8 = (uint *)(local_b4 + (int)local_3cc + (uint)CARRY4(local_b8,(uint)local_3d8));
    local_1c0 = local_3d8 + uVar21 * 0x4000;
    local_1bc = local_ac + (int)local_3cc + (uint)CARRY4(local_b0,(uint)local_3d8);
    local_1b8 = local_358 + CONCAT44(((int)uVar7 >> 0x1f) << 0x10 | uVar7 >> 0x10,uVar7 * 0x10000);
    local_300 = puVar17;
    local_2f0 = puVar17;
    local_1c4 = local_3b8;
    cVar13 = FUN_004d5740(local_37c,(uint *)&local_1c8,pfVar19);
    cVar12 = (char)local_3e0;
    pfVar19 = (float *)local_3a8;
    if (cVar13 == '\0') goto LAB_004dc101;
    bVar14 = '\x01';
  }
  else {
LAB_004dc101:
    cVar12 = (char)local_3e0;
    local_3d1 = '\x01';
    bVar14 = local_3e9;
  }
  local_3e9 = '\x01';
  puVar17 = puVar24;
  local_3c0 = CONCAT44(local_3c0._4_4_,(float *)local_3c0);
  local_188 = CONCAT44(local_188._4_4_,(undefined4)local_188);
  if ((local_3d2 == '\0') &&
     ((((cVar12 != '\0' ||
        (local_3c0 = CONCAT44(local_3c0._4_4_,(float *)local_3c0),
        local_188 = CONCAT44(local_188._4_4_,(undefined4)local_188), bVar14 != '\0')) &&
       (local_3c0 = CONCAT44(local_3c0._4_4_,(float *)local_3c0),
       local_188 = CONCAT44(local_188._4_4_,(undefined4)local_188), pfVar19 != (float *)local_3c0))
      && (local_3c0 = CONCAT44(local_3c0._4_4_,(float *)local_3c0),
         local_188 = CONCAT44(local_188._4_4_,(undefined4)local_188),
         local_3b0 != *(uint **)(*(int *)((int)local_3e8 + 0x1460) + 4))))) {
    uVar20 = *local_3b0;
    pfVar19 = (float *)((int)local_3e8 + 0x80);
    local_3dc = (int **)(*(float *)((int)local_3e8 + 0x88) * 0.5 * 65536.0);
    local_3e9 = '\0';
    local_3c0 = FUN_0054a946();
    puVar17 = local_3d8;
    local_3b4 = (int)local_3cc;
    local_3ac = (int)local_3cc;
    uVar21 = *(uint *)(uVar20 + 8);
    local_3e4 = (float *)(uVar20 + 8);
    uVar7 = *(uint *)(uVar20 + 0xc);
    local_f4 = ((int)uVar21 >> 0x1f) << 0x10 | uVar21 >> 0x10;
    uVar20 = *(uint *)(uVar20 + 0x10);
    local_ec = ((int)uVar7 >> 0x1f) << 0x10 | uVar7 >> 0x10;
    local_e4 = ((int)uVar20 >> 0x1f) << 0x10 | uVar20 >> 0x10;
    local_104[3] = uVar21 * 0x10000;
    local_f0 = uVar7 * 0x10000;
    local_e8 = uVar20 * 0x10000;
    local_198 = local_3d8 + uVar21 * 0x4000;
    local_194 = local_f4 + (int)local_3cc + (uint)CARRY4(local_104[3],(uint)local_3d8);
    local_190 = local_3d8 + uVar7 * 0x4000;
    local_18c = local_ec + (int)local_3cc + (uint)CARRY4(local_f0,(uint)local_3d8);
    local_188 = local_3c0 + CONCAT44(local_e4,local_e8);
    local_3b8 = puVar24;
    local_3b0 = puVar24;
    cVar12 = FUN_004d5740(local_37c,(uint *)&local_198,pfVar19);
    if (cVar12 != '\0') {
      local_3e9 = '\x01';
      local_3d1 = '\0';
    }
  }
  local_3dc = (int **)(*(float *)((int)local_3e8 + 0x88) * 0.5 * 65536.0);
  local_3a8 = FUN_0054a946();
  iVar25 = local_38c;
  puVar24 = local_3a0;
  pvVar27 = local_3e8;
  uVar33 = CONCAT44(local_3cc,local_3e0);
  local_314 = (int)local_3cc;
  local_304 = (int)local_3cc;
  uVar20 = (uint)*local_3e4;
  uVar21 = (uint)local_3e4[1];
  local_cc = ((int)uVar20 >> 0x1f) << 0x10 | uVar20 >> 0x10;
  uVar7 = (uint)local_3e4[2];
  local_c4 = ((int)uVar21 >> 0x1f) << 0x10 | uVar21 >> 0x10;
  local_bc = ((int)uVar7 >> 0x1f) << 0x10 | uVar7 >> 0x10;
  local_d0 = uVar20 * 0x10000;
  local_c8 = uVar21 * 0x10000;
  local_c0 = uVar7 * 0x10000;
  local_128 = local_3d8 + uVar20 * 0x4000;
  local_124 = local_cc + (int)local_3cc + (uint)CARRY4(local_d0,(uint)local_3d8);
  local_120 = local_3d8 + uVar21 * 0x4000;
  local_11c = local_c4 + (int)local_3cc + (uint)CARRY4(local_c8,(uint)local_3d8);
  local_118 = local_3a8 + CONCAT44(local_bc,local_c0);
  local_2b0 = (int)local_128 - *local_3a0;
  iStack_2ac = (local_124 - local_3a0[1]) - (uint)(local_128 < (uint *)*local_3a0);
  local_2a8 = (int)local_120 - local_3a0[2];
  iStack_2a4 = (local_11c - local_3a0[3]) - (uint)(local_120 < (uint *)local_3a0[2]);
  local_2a0 = (uint)local_118 - local_3a0[4];
  iStack_29c = ((int)((ulonglong)local_118 >> 0x20) - local_3a0[5]) -
               (uint)((uint)local_118 < local_3a0[4]);
  local_3e4 = (float *)((float)CONCAT44(iStack_2ac,local_2b0) * 1.5258789e-05);
  local_3b0 = (uint *)((float)CONCAT44(iStack_2a4,local_2a8) * 1.5258789e-05);
  local_3dc = (int **)(float)CONCAT44(iStack_29c,local_2a0);
  local_3d8 = (uint *)((float)local_3dc * 1.5258789e-05);
  if (((local_38c < 4) && ((*(byte *)((int)local_3e8 + 0x5c) & 4) != 0)) &&
     ((char)local_3e0 == '\0')) {
    bVar28 = true;
  }
  else {
    bVar28 = false;
  }
  if (bVar28) {
    *(ushort *)(local_3a0 + 0x45) = (ushort)local_3a0[0x45] | 1;
  }
  else {
    *(ushort *)(local_3a0 + 0x45) = (ushort)local_3a0[0x45] & 0xfffe;
  }
  if (((1.0 < (float)local_3d8) || ((*(byte *)((int)local_3e8 + 0x5c) & 0x40) != 0)) ||
     (((char)local_3e0 == '\0' || (bVar28 = local_3e9 == '\0', local_3e9 = '\x01', bVar28)))) {
    local_3e9 = '\0';
  }
  fVar30 = (float)local_3b0 * (float)local_3b0 + (float)local_3e4 * (float)local_3e4 +
           (float)local_3d8 * (float)local_3d8;
  local_3d0 = (float *)local_3dc;
  local_318 = puVar17;
  local_308 = puVar17;
  local_2c8 = local_3e4;
  local_2c4 = (float)local_3b0;
  if (fVar30 <= 0.001) goto LAB_004dcfc6;
  if (1.0 < fVar30) {
    dVar29 = (double)fVar30;
    libm_sse2_sqrt_precise();
    fVar30 = 1.0 / (float)dVar29;
    local_3e4 = (float *)(fVar30 * (float)local_2c8);
    local_3d8 = (uint *)(fVar30 * (float)local_3d8);
    local_3b0 = (uint *)(fVar30 * local_2c4);
  }
  uVar33 = CONCAT44(local_3cc,local_3e0);
  if ((float)local_3d8 <= 0.0) {
    if (((float)local_3d8 < 0.0) && ((*(byte *)((int)pvVar27 + 0x5c) & 2) != 0)) {
      local_3d8 = (uint *)0xc0000000;
    }
  }
  else {
    local_3d8 = (uint *)0x3f800000;
  }
  if ((*(byte *)((int)pvVar27 + 0x5c) & 0x40) != 0) {
    local_3d8 = (uint *)0x40400000;
    iVar25 = 0;
    local_244[0] = *local_380 * 0.5;
    local_244[1] = *(float *)((int)pvVar27 + 0x84) * 0.5;
    local_244[2] = *(float *)((int)pvVar27 + 0x88) * 0.5;
    do {
      local_3d0 = (float *)(local_244[iVar25] * 65536.0);
      uVar33 = FUN_0054a946();
      local_210[iVar25 * 2] = (uint)uVar33;
      local_210[iVar25 * 2 + 1] = (uint)(uVar33 >> 0x20);
      iVar25 = iVar25 + 1;
    } while (iVar25 < 3);
    uVar20 = *puVar24;
    local_168 = uVar20 - local_210[0];
    local_164 = (puVar24[1] - local_210[1]) - (uint)(uVar20 < local_210[0]);
    local_160 = *(uint *)((int)local_3e8 + 0x18) - local_210[2];
    local_15c = (*(int *)((int)local_3e8 + 0x1c) - local_210[3]) -
                (uint)(*(uint *)((int)local_3e8 + 0x18) < local_210[2]);
    local_158 = *(uint *)((int)local_3e8 + 0x20) - local_210[4];
    local_154 = (*(int *)((int)local_3e8 + 0x24) - local_210[5]) -
                (uint)(*(uint *)((int)local_3e8 + 0x20) < local_210[4]);
    FUN_00405450(&local_dc,&local_168);
    pvVar27 = local_3e8;
    iVar25 = 0;
    local_298[0] = *local_380 * 0.5;
    local_298[1] = *(float *)((int)local_3e8 + 0x84) * 0.5;
    local_298[2] = *(float *)((int)local_3e8 + 0x88) * 0.5;
    do {
      local_3d0 = (float *)(local_298[iVar25] * 65536.0);
      uVar33 = FUN_0054a946();
      local_268[iVar25 * 2] = (uint)uVar33;
      local_268[iVar25 * 2 + 1] = (uint)(uVar33 >> 0x20);
      iVar25 = iVar25 + 1;
    } while (iVar25 < 3);
    local_210[6] = *local_3a0 + local_268[0];
    local_1f4 = local_3a0[1] + local_268[1] + (uint)CARRY4(*local_3a0,local_268[0]);
    local_1f0 = *(uint *)((int)pvVar27 + 0x18) + local_268[2];
    local_1ec = *(int *)((int)pvVar27 + 0x1c) + local_268[3] +
                (uint)CARRY4(*(uint *)((int)pvVar27 + 0x18),local_268[2]);
    local_1e8 = *(uint *)((int)pvVar27 + 0x20) + local_268[4];
    local_1e4 = *(int *)((int)pvVar27 + 0x24) + local_268[5] +
                (uint)CARRY4(*(uint *)((int)pvVar27 + 0x20),local_268[4]);
    FUN_00405450(local_14c + 3,local_210 + 6);
    uVar33 = CONCAT44(local_3cc,local_3e0);
    local_21c[0] = 1.0;
    local_21c[1] = 1.0;
    local_21c[2] = 0.0;
    iVar25 = 0;
    do {
      iVar22 = iVar25 + 4;
      *(int *)((int)local_104 + iVar25) = (int)*(float *)((int)local_21c + iVar25);
      iVar25 = iVar22;
    } while (iVar22 < 0xc);
    local_298[3] = 1.0;
    local_298[4] = 1.0;
    local_298[5] = 0.0;
    iVar25 = 0;
    do {
      iVar22 = iVar25 + 4;
      *(int *)((int)local_14c + iVar25) = (int)*(float *)((int)local_298 + iVar25 + 0xc);
      iVar25 = iVar22;
    } while (iVar22 < 0xc);
    piVar15 = (int *)((int)((local_dc - local_104[0]) + (local_dc - local_104[0] >> 0x1f & 7U)) >> 3
                     );
    pfVar19 = (float *)((int)((local_d8 - local_104[1]) + (local_d8 - local_104[1] >> 0x1f & 7U)) >>
                       3);
    local_3d0 = (float *)((int)(local_14c[3] + local_14c[0] +
                               (local_14c[3] + local_14c[0] >> 0x1f & 7U)) >> 3);
    iVar22 = (int)(local_13c + local_14c[1] + (local_13c + local_14c[1] >> 0x1f & 7U)) >> 3;
    local_328 = CONCAT44(local_328._4_4_,iVar22);
    iVar25 = local_38c;
    local_3c8 = pfVar19;
    local_3c4 = piVar15;
    uVar9 = local_3c0;
    uVar34 = local_3a8;
    if ((int)piVar15 <= (int)local_3d0) {
      do {
        local_3a8._4_4_ = (undefined4)(uVar34 >> 0x20);
        local_3a8._0_4_ = (float *)uVar34;
        local_3c0._4_4_ = (undefined4)(uVar9 >> 0x20);
        local_3c0._0_4_ = (float *)uVar9;
        uVar34 = CONCAT44((float *)local_3a8,(float *)local_3c0);
        pfVar23 = pfVar19;
        local_3dc = (int **)pfVar19;
        local_3c4 = piVar15;
        if ((int)pfVar19 <= iVar22) {
          do {
            local_3a8._0_4_ = (float *)(uVar34 >> 0x20);
            local_3c0._0_4_ = (float *)uVar34;
            local_3cc = (float)(uVar33 >> 0x20);
            local_3e0 = (float *)uVar33;
            local_3dc = (int **)pfVar19;
            local_340 = (int *)FUN_0041c9e0(local_37c,(uint)piVar15,(uint)pfVar19,0);
            uVar34 = CONCAT44((float *)local_3a8,(float *)local_3c0);
            uVar33 = CONCAT44(local_3cc,local_3e0);
            if ((local_340 != (int *)0x0) &&
               (piVar16 = *(int **)*local_340, uVar9 = local_358, piVar16 != (int *)*local_340)) {
              do {
                local_358._4_4_ = (undefined4)(uVar9 >> 0x20);
                local_3a8._0_4_ = (float *)(uVar34 >> 0x20);
                local_3e0 = (float *)uVar33;
                piVar15 = (int *)piVar16[2];
                if (((*piVar15 == 1) || (*piVar15 == 2)) && ((char)piVar15[0xc] != '\0')) {
                  local_2cc = (float)piVar15[0xb];
                  uVar2 = *(undefined8 *)(piVar15 + 9);
                  uVar20 = piVar15[8] & 0x80000001;
                  bVar28 = uVar20 == 0;
                  if ((int)uVar20 < 0) {
                    bVar28 = (uVar20 - 1 | 0xfffffffe) == 0xffffffff;
                  }
                  local_2d4._0_4_ = (float)uVar2;
                  local_2d4._4_4_ = (float)((ulonglong)uVar2 >> 0x20);
                  if (bVar28) {
                    local_3cc = local_2d4._4_4_;
                    local_2d4._4_4_ = (float)local_2d4;
                  }
                  else {
                    local_3cc = (float)local_2d4;
                  }
                  local_358._0_4_ = *local_380 * 0.5 * 65536.0;
                  local_3c0._0_4_ = (float *)local_2d4._4_4_;
                  local_2d4 = uVar2;
                  uVar33 = FUN_0054a946();
                  local_3e0 = (float *)(uVar33 >> 0x20);
                  local_3a8._0_4_ = (float *)uVar33;
                  local_350 = CONCAT44(local_350._4_4_,(float)(float *)local_3c0 * 0.5 * 65536.0);
                  uVar33 = FUN_0054a946();
                  local_394 = (uint *)(uVar33 >> 0x20);
                  uVar21 = (uint)uVar33;
                  local_3c0._0_4_ = (float *)(piVar15[2] - uVar21);
                  iVar22 = (piVar15[3] - (int)local_394) - (uint)((uint)piVar15[2] < uVar21);
                  local_370 = CONCAT44(local_370._4_4_,uVar21);
                  uVar20 = *local_3a0;
                  local_3b8 = (uint *)(uVar20 + (int)(float *)local_3a8 + 0x10000);
                  iVar25 = local_3a0[1] + (int)local_3e0 +
                           (uint)CARRY4(uVar20,(uint)(float *)local_3a8) +
                           (uint)(0xfffeffff < uVar20 + (int)(float *)local_3a8);
                  uVar33 = CONCAT44(local_3cc,local_3e0);
                  if ((iVar22 <= iVar25) &&
                     ((iVar22 < iVar25 ||
                      (uVar33 = CONCAT44(local_3cc,local_3e0), (float *)local_3c0 <= local_3b8)))) {
                    iVar25 = ((local_3a0[1] - (int)local_3e0) - (uint)(uVar20 < (float *)local_3a8))
                             - (uint)(uVar20 - (int)(float *)local_3a8 < 0x10000);
                    iVar22 = (int)local_394 + (uint)CARRY4(uVar21,piVar15[2]) + piVar15[3];
                    uVar33 = CONCAT44(local_3cc,local_3e0);
                    if ((iVar25 <= iVar22) &&
                       ((iVar25 < iVar22 ||
                        (uVar33 = CONCAT44(local_3cc,local_3e0),
                        (uVar20 - (int)(float *)local_3a8) - 0x10000 < uVar21 + piVar15[2])))) {
                      local_39c = (undefined4 *)(*(float *)((int)local_3e8 + 0x84) * 0.5 * 65536.0);
                      uVar33 = FUN_0054a946();
                      local_3a8._0_4_ = (float *)(uVar33 >> 0x20);
                      local_3c0._0_4_ = (float *)uVar33;
                      local_33c = local_3cc * 0.5 * 65536.0;
                      puVar17 = *(uint **)((int)local_3e8 + 0x18);
                      uVar33 = FUN_0054a946();
                      pvVar27 = local_3e8;
                      local_3cc = (float)(uVar33 >> 0x20);
                      local_3e0 = (float *)uVar33;
                      local_3b8 = (uint *)((int)puVar17 + (int)(float *)local_3c0 + 0x10000);
                      iVar22 = *(int *)((int)local_3e8 + 0x1c) + (int)(float *)local_3a8 +
                               (uint)CARRY4((uint)puVar17,(uint)(float *)local_3c0) +
                               (uint)(0xfffeffff < (uint)((int)puVar17 + (int)(float *)local_3c0));
                      local_394 = (uint *)(piVar15[4] - (int)local_3e0);
                      iVar25 = (piVar15[5] - (int)local_3cc) - (uint)((uint)piVar15[4] < local_3e0);
                      if ((iVar25 <= iVar22) && ((iVar25 < iVar22 || (local_394 <= local_3b8)))) {
                        iVar22 = ((*(int *)((int)local_3e8 + 0x1c) - (int)(float *)local_3a8) -
                                 (uint)(puVar17 < (float *)local_3c0)) -
                                 (uint)((uint)((int)puVar17 - (int)(float *)local_3c0) < 0x10000);
                        iVar25 = (int)local_3cc + piVar15[5] +
                                 (uint)CARRY4((uint)local_3e0,piVar15[4]);
                        if ((iVar22 <= iVar25) &&
                           ((iVar22 < iVar25 ||
                            (((int)puVar17 - (int)(float *)local_3c0) - 0x10000U <
                             (uint)((int)local_3e0 + piVar15[4]))))) {
                          local_344 = *(float *)((int)local_3e8 + 0x88) * 0.5 * 65536.0;
                          uVar34 = FUN_0054a946();
                          local_3a8._0_4_ = (float *)(uVar34 >> 0x20);
                          local_3c0._0_4_ = (float *)uVar34;
                          iVar25 = *(int *)((int)pvVar27 + 0x24) + (int)(float *)local_3a8 +
                                   (uint)CARRY4(*(uint *)((int)pvVar27 + 0x20),
                                                (uint)(float *)local_3c0);
                          uVar33 = CONCAT44(local_3cc,local_3e0);
                          uVar9 = CONCAT44(local_358._4_4_,(float)local_358);
                          if ((piVar15[7] <= iVar25) &&
                             ((piVar15[7] < iVar25 ||
                              (uVar33 = CONCAT44(local_3cc,local_3e0),
                              uVar9 = CONCAT44(local_358._4_4_,(float)local_358),
                              (uint)piVar15[6] <=
                              *(uint *)((int)pvVar27 + 0x20) + (int)(float *)local_3c0)))) {
                            local_338 = local_2cc * 65536.0;
                            uVar33 = FUN_0054a946();
                            local_3b8 = (uint *)((uint)uVar33 + piVar15[6]);
                            iVar22 = (int)(uVar33 >> 0x20) + piVar15[7] +
                                     (uint)CARRY4((uint)uVar33,piVar15[6]);
                            iVar25 = (*(int *)((int)pvVar27 + 0x24) - (int)(float *)local_3a8) -
                                     (uint)(*(uint *)((int)pvVar27 + 0x20) < (float *)local_3c0);
                            uVar34 = CONCAT44((float *)local_3a8,(float *)local_3c0);
                            uVar33 = CONCAT44(local_3cc,local_3e0);
                            uVar9 = CONCAT44(local_358._4_4_,(float)local_358);
                            if ((iVar25 <= iVar22) &&
                               ((iVar25 < iVar22 ||
                                (uVar34 = CONCAT44((float *)local_3a8,(float *)local_3c0),
                                uVar33 = CONCAT44(local_3cc,local_3e0),
                                uVar9 = CONCAT44(local_358._4_4_,(float)local_358),
                                (uint *)(*(uint *)((int)pvVar27 + 0x20) - (int)(float *)local_3c0) <
                                local_3b8)))) {
                              *(undefined1 *)(piVar15 + 0xc) = 0;
                              *(undefined4 *)(piVar16[2] + 0x34) = 0;
                              uVar34 = CONCAT44((float *)local_3a8,(float *)local_3c0);
                              uVar33 = CONCAT44(local_3cc,local_3e0);
                              uVar9 = CONCAT44(local_358._4_4_,(float)local_358);
                            }
                          }
                          goto LAB_004dcb95;
                        }
                      }
                    }
                  }
                  uVar34 = CONCAT44((float *)local_3a8,(float *)local_3c0);
                  pvVar27 = local_3e8;
                  uVar9 = CONCAT44(local_358._4_4_,(float)local_358);
                }
LAB_004dcb95:
                local_358 = uVar9;
                piVar16 = (int *)*piVar16;
                piVar15 = local_3c4;
                uVar9 = local_358;
              } while (piVar16 != (int *)*local_340);
            }
            local_3a8._0_4_ = (float *)(uVar34 >> 0x20);
            local_3c0._0_4_ = (float *)uVar34;
            pfVar19 = (float *)((int)local_3dc + 1);
            iVar22 = (int)local_328;
            pfVar23 = local_3c8;
            local_3dc = (int **)pfVar19;
            uVar9 = CONCAT44(local_3c0._4_4_,(float *)local_3c0);
          } while ((int)pfVar19 <= (int)local_328);
        }
        local_3c0 = uVar9;
        piVar15 = (int *)((int)piVar15 + 1);
        pfVar19 = pfVar23;
        iVar25 = local_38c;
        local_3c4 = piVar15;
        uVar9 = local_3c0;
        uVar34 = local_3a8;
      } while ((int)piVar15 <= (int)local_3d0);
    }
  }
  if ((local_3d2 != '\0') && ((*(byte *)((int)pvVar27 + 0x124) & 1) == 0)) goto LAB_004dcfc6;
  if (iVar25 < 4) {
    if (local_3d2 == '\0') {
      if ((0.0 <= (float)local_3d8) && (local_3e9 == '\0')) {
        fVar30 = (float)local_3d8 * 4.0;
        iVar25 = 0;
        if (3 < param_2) {
          iVar22 = (param_2 - 4U >> 2) + 1;
          iVar25 = iVar22 * 4;
          do {
            fVar31 = (fVar30 - *(float *)((int)pvVar27 + 0x3c)) * 0.05 +
                     *(float *)((int)pvVar27 + 0x3c);
            fVar31 = (fVar30 - fVar31) * 0.05 + fVar31;
            fVar31 = (fVar30 - fVar31) * 0.05 + fVar31;
            *(float *)((int)pvVar27 + 0x3c) = (fVar30 - fVar31) * 0.05 + fVar31;
            iVar22 = iVar22 + -1;
          } while (iVar22 != 0);
        }
        if (iVar25 < param_2) {
          iVar25 = param_2 - iVar25;
          do {
            *(float *)((int)pvVar27 + 0x3c) =
                 (fVar30 - *(float *)((int)pvVar27 + 0x3c)) * 0.05 + *(float *)((int)pvVar27 + 0x3c)
            ;
            iVar25 = iVar25 + -1;
          } while (iVar25 != 0);
        }
      }
LAB_004dccea:
      fVar30 = 6.0;
      if ((*(byte *)((int)pvVar27 + 0x124) & 0x40) != 0) {
        fVar30 = 12.0;
      }
      iVar25 = 0;
      if (local_3d1 == '\0') {
        fVar31 = fVar30 * (float)local_3e4;
        if (3 < param_2) {
          iVar22 = (param_2 - 4U >> 2) + 1;
          iVar25 = iVar22 * 4;
          do {
            fVar32 = (fVar31 - *(float *)((int)pvVar27 + 0x34)) * 0.001 +
                     *(float *)((int)pvVar27 + 0x34);
            fVar32 = (fVar31 - fVar32) * 0.001 + fVar32;
            fVar32 = (fVar31 - fVar32) * 0.001 + fVar32;
            *(float *)((int)pvVar27 + 0x34) = (fVar31 - fVar32) * 0.001 + fVar32;
            iVar22 = iVar22 + -1;
          } while (iVar22 != 0);
        }
        if (iVar25 < param_2) {
          iVar25 = param_2 - iVar25;
          do {
            *(float *)((int)pvVar27 + 0x34) =
                 (fVar31 - *(float *)((int)pvVar27 + 0x34)) * 0.001 +
                 *(float *)((int)pvVar27 + 0x34);
            iVar25 = iVar25 + -1;
          } while (iVar25 != 0);
        }
        fVar30 = fVar30 * (float)local_3b0;
        iVar25 = 0;
        if (3 < param_2) {
          iVar22 = (param_2 - 4U >> 2) + 1;
          iVar25 = iVar22 * 4;
          do {
            fVar31 = (fVar30 - *(float *)((int)pvVar27 + 0x38)) * 0.001 +
                     *(float *)((int)pvVar27 + 0x38);
            fVar31 = (fVar30 - fVar31) * 0.001 + fVar31;
            fVar31 = (fVar30 - fVar31) * 0.001 + fVar31;
            *(float *)((int)pvVar27 + 0x38) = (fVar30 - fVar31) * 0.001 + fVar31;
            iVar22 = iVar22 + -1;
          } while (iVar22 != 0);
        }
        if (iVar25 < param_2) {
          iVar25 = param_2 - iVar25;
          do {
            *(float *)((int)pvVar27 + 0x38) =
                 (fVar30 - *(float *)((int)pvVar27 + 0x38)) * 0.001 +
                 *(float *)((int)pvVar27 + 0x38);
            iVar25 = iVar25 + -1;
          } while (iVar25 != 0);
        }
      }
      else {
        fVar30 = (float)local_3e4 * 8.0;
        if (3 < param_2) {
          iVar22 = (param_2 - 4U >> 2) + 1;
          iVar25 = iVar22 * 4;
          do {
            fVar31 = (fVar30 - *(float *)((int)pvVar27 + 0x34)) * 0.01 +
                     *(float *)((int)pvVar27 + 0x34);
            fVar31 = (fVar30 - fVar31) * 0.01 + fVar31;
            fVar31 = (fVar30 - fVar31) * 0.01 + fVar31;
            *(float *)((int)pvVar27 + 0x34) = (fVar30 - fVar31) * 0.01 + fVar31;
            iVar22 = iVar22 + -1;
          } while (iVar22 != 0);
        }
        if (iVar25 < param_2) {
          iVar25 = param_2 - iVar25;
          do {
            *(float *)((int)pvVar27 + 0x34) =
                 (fVar30 - *(float *)((int)pvVar27 + 0x34)) * 0.01 + *(float *)((int)pvVar27 + 0x34)
            ;
            iVar25 = iVar25 + -1;
          } while (iVar25 != 0);
        }
        iVar25 = 0;
        fVar30 = (float)local_3b0 * 8.0;
        if (3 < param_2) {
          iVar22 = (param_2 - 4U >> 2) + 1;
          iVar25 = iVar22 * 4;
          do {
            fVar31 = (fVar30 - *(float *)((int)pvVar27 + 0x38)) * 0.01 +
                     *(float *)((int)pvVar27 + 0x38);
            fVar31 = (fVar30 - fVar31) * 0.01 + fVar31;
            fVar31 = (fVar30 - fVar31) * 0.01 + fVar31;
            *(float *)((int)pvVar27 + 0x38) = (fVar30 - fVar31) * 0.01 + fVar31;
            iVar22 = iVar22 + -1;
          } while (iVar22 != 0);
        }
        if (iVar25 < param_2) {
          iVar25 = param_2 - iVar25;
          do {
            *(float *)((int)pvVar27 + 0x38) =
                 (fVar30 - *(float *)((int)pvVar27 + 0x38)) * 0.01 + *(float *)((int)pvVar27 + 0x38)
            ;
            iVar25 = iVar25 + -1;
          } while (iVar25 != 0);
        }
      }
    }
    else {
      if ((float)local_3d8 < 0.0) goto LAB_004dccea;
      *(float *)((int)pvVar27 + 0x34) = (float)local_3e4 * 8.0;
      *(float *)((int)pvVar27 + 0x38) = (float)local_3b0 * 8.0;
      *(float *)((int)pvVar27 + 0x3c) = (float)local_3d8 * 8.0;
    }
    *(float *)((int)pvVar27 + 0x40) = (float)local_3e4 * 20.0;
    *(float *)((int)pvVar27 + 0x44) = (float)local_3b0 * 20.0;
    *(float *)((int)pvVar27 + 0x48) = (float)local_3d8 * 20.0;
  }
  else {
    *(float *)((int)pvVar27 + 0x40) = (float)local_3e4 * 40.0;
    *(float *)((int)pvVar27 + 0x44) = (float)local_3b0 * 40.0;
    *(float *)((int)pvVar27 + 0x48) = (float)local_3d8 * 40.0;
  }
  *(undefined4 *)((int)pvVar27 + 0x4c) = 0;
  *(undefined4 *)((int)pvVar27 + 0x50) = 0;
  *(undefined4 *)((int)pvVar27 + 0x54) = 0;
LAB_004dcfc6:
  local_3cc = (float)(uVar33 >> 0x20);
  local_3e0 = (float *)uVar33;
  ExceptionList = local_14;
  __security_check_cookie(local_1c ^ (uint)auStack_3ec);
  return;
}


/* FUN_004dde00 @ 004dde00  kind=gamemisc  attributed-by=none  size=144 */

void __thiscall FUN_004dde00(void *this,float *param_1,float *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  
  fVar1 = *param_2;
  fVar2 = param_2[1];
  fVar3 = param_2[2];
  fVar4 = *(float *)((int)this + 0x14);
  *param_1 = *(float *)((int)this + 0x10) * fVar2 + fVar1 * *(float *)this +
             *(float *)((int)this + 0x20) * fVar3;
  fVar5 = *(float *)((int)this + 0x18);
  param_1[1] = *(float *)((int)this + 4) * fVar1 + fVar4 * fVar2 +
               *(float *)((int)this + 0x24) * fVar3;
  param_1[2] = *(float *)((int)this + 8) * fVar1 + fVar5 * fVar2 +
               *(float *)((int)this + 0x28) * fVar3;
  return;
}


/* FUN_004e1230 @ 004e1230  kind=gamemisc  attributed-by=none  size=78 */

undefined4 * __cdecl FUN_004e1230(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  if (param_1 == param_2) {
    return param_3;
  }
  do {
    if (param_3 != (undefined4 *)0x0) {
      *param_3 = *param_1;
      param_3[1] = param_1[1];
      param_3[2] = param_1[2];
      param_3[3] = param_1[3];
      param_3[4] = param_1[4];
      param_3[5] = param_1[5];
    }
    param_1 = param_1 + 6;
    param_3 = param_3 + 6;
  } while (param_1 != param_2);
  return param_3;
}


/* FUN_004e1370 @ 004e1370  kind=gamemisc  attributed-by=none  size=162 */

void __thiscall FUN_004e1370(void *this,uint param_1)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  
  if (param_1 <= (uint)((*(int *)((int)this + 8) - *(int *)((int)this + 4)) / 0x18)) {
    return;
  }
  iVar1 = (*(int *)((int)this + 4) - *(int *)this) / 0x18;
  if (0xaaaaaaaU - iVar1 < param_1) {
                    /* WARNING: Subroutine does not return */
    std::_Xlength_error("vector<T> too long");
  }
  uVar2 = (*(int *)((int)this + 8) - *(int *)this) / 0x18;
  uVar3 = iVar1 + param_1;
  if (0xaaaaaaa - (uVar2 >> 1) < uVar2) {
    uVar2 = 0;
    if (uVar3 != 0) {
      uVar2 = uVar3;
    }
    FUN_004e1280(this,uVar2);
    return;
  }
  uVar2 = uVar2 + (uVar2 >> 1);
  if (uVar2 < uVar3) {
    uVar2 = uVar3;
  }
  FUN_004e1280(this,uVar2);
  return;
}


/* FUN_004e1420 @ 004e1420  kind=gamemisc  attributed-by=none  size=180 */

void __thiscall FUN_004e1420(void *this,undefined4 *param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  
  puVar1 = *(undefined4 **)((int)this + 4);
  if ((param_1 < puVar1) && (puVar2 = *(undefined4 **)this, puVar2 <= param_1)) {
    if (puVar1 == *(undefined4 **)((int)this + 8)) {
      FUN_004e1370(this,1);
    }
    puVar1 = (undefined4 *)(*(int *)this + (((int)param_1 - (int)puVar2) / 0x18) * 0x18);
    puVar2 = *(undefined4 **)((int)this + 4);
    if (puVar2 != (undefined4 *)0x0) {
      *puVar2 = *puVar1;
      puVar2[1] = puVar1[1];
      puVar2[2] = puVar1[2];
      puVar2[3] = puVar1[3];
      puVar2[4] = puVar1[4];
      puVar2[5] = puVar1[5];
      *(int *)((int)this + 4) = *(int *)((int)this + 4) + 0x18;
      return;
    }
  }
  else {
    if (puVar1 == *(undefined4 **)((int)this + 8)) {
      FUN_004e1370(this,1);
    }
    puVar1 = *(undefined4 **)((int)this + 4);
    if (puVar1 != (undefined4 *)0x0) {
      *puVar1 = *param_1;
      puVar1[1] = param_1[1];
      puVar1[2] = param_1[2];
      puVar1[3] = param_1[3];
      puVar1[4] = param_1[4];
      puVar1[5] = param_1[5];
    }
  }
  *(int *)((int)this + 4) = *(int *)((int)this + 4) + 0x18;
  return;
}


/* FUN_004e1520 @ 004e1520  kind=gamemisc  attributed-by=none  size=56 */

void __cdecl FUN_004e1520(float *param_1,float param_2,float *param_3)

{
  *param_1 = *param_3 * param_2;
  param_1[1] = param_3[1] * param_2;
  param_1[2] = param_3[2] * param_2;
  return;
}


/* FUN_004e1560 @ 004e1560  kind=gamemisc  attributed-by=none  size=141 */

void __cdecl FUN_004e1560(int param_1,int param_2,int param_3,int *param_4,int *param_5)

{
  float *pfVar1;
  float fVar2;
  int iVar3;
  int iVar4;
  
  iVar4 = param_2;
  while( true ) {
    iVar3 = iVar4 * 2 + 2;
    if (param_3 <= iVar3) break;
    fVar2 = *(float *)(*param_5 + 0x18 + *(int *)(param_1 + -4 + iVar3 * 4) * 0x1c);
    pfVar1 = (float *)(*param_5 + 0x18 + *(int *)(param_1 + iVar3 * 4) * 0x1c);
    if (*pfVar1 <= fVar2 && fVar2 != *pfVar1) {
      iVar3 = iVar4 * 2 + 1;
    }
    *(undefined4 *)(param_1 + iVar4 * 4) = *(undefined4 *)(param_1 + iVar3 * 4);
    iVar4 = iVar3;
  }
  if (iVar3 == param_3) {
    *(undefined4 *)(param_1 + iVar4 * 4) = *(undefined4 *)(param_1 + -4 + param_3 * 4);
    iVar4 = param_3 + -1;
  }
  FUN_004e1950(param_1,iVar4,param_2,param_4,param_5);
  return;
}


/* FUN_004e15f0 @ 004e15f0  kind=gamemisc  attributed-by=none  size=256 */

void __cdecl FUN_004e15f0(int *param_1,int *param_2,int *param_3)

{
  float *pfVar1;
  float fVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  int *piVar6;
  int *local_8;
  
  if ((param_1 != param_2) && (piVar5 = param_1 + 1, piVar5 != param_2)) {
    do {
      iVar3 = *piVar5;
      fVar2 = *(float *)(*param_3 + 0x18 + iVar3 * 0x1c);
      if (*(float *)(*param_3 + 0x18 + *param_1 * 0x1c) <= fVar2) {
        iVar4 = piVar5[-1];
        piVar6 = piVar5;
        local_8 = piVar5;
        if (fVar2 < *(float *)(*param_3 + 0x18 + iVar4 * 0x1c)) {
          do {
            local_8 = piVar6 + -1;
            *piVar6 = iVar4;
            iVar4 = piVar6[-2];
            fVar2 = *(float *)(*param_3 + 0x18 + iVar4 * 0x1c);
            pfVar1 = (float *)(*param_3 + 0x18 + iVar3 * 0x1c);
            piVar6 = local_8;
          } while (*pfVar1 <= fVar2 && fVar2 != *pfVar1);
        }
        *local_8 = iVar3;
      }
      else {
        iVar4 = (int)piVar5 - (int)param_1 >> 2;
        memmove(piVar5 + (1 - iVar4),param_1,iVar4 * 4);
        *param_1 = iVar3;
      }
      piVar5 = piVar5 + 1;
    } while (piVar5 != param_2);
  }
  return;
}


/* FUN_004e16f0 @ 004e16f0  kind=gamemisc  attributed-by=none  size=206 */

void __cdecl FUN_004e16f0(int param_1,int param_2,int *param_3)

{
  float *pfVar1;
  float fVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int local_10;
  int local_c;
  int local_8;
  
  iVar6 = param_2 - param_1 >> 2;
  iVar4 = iVar6 - (param_2 - param_1 >> 0x1f) >> 1;
  if (0 < iVar4) {
    local_c = iVar4 * 2 + 2;
    do {
      iVar4 = iVar4 + -1;
      local_10 = *(int *)(param_1 + iVar4 * 4);
      local_c = local_c + -2;
      local_8 = iVar4;
      for (iVar5 = local_c; iVar5 < iVar6; iVar5 = iVar5 * 2 + 2) {
        fVar2 = *(float *)(*param_3 + 0x18 + *(int *)(param_1 + -4 + iVar5 * 4) * 0x1c);
        pfVar1 = (float *)(*param_3 + 0x18 + *(int *)(param_1 + iVar5 * 4) * 0x1c);
        if (*pfVar1 <= fVar2 && fVar2 != *pfVar1) {
          iVar5 = iVar5 + -1;
        }
        *(undefined4 *)(param_1 + local_8 * 4) = *(undefined4 *)(param_1 + iVar5 * 4);
        local_8 = iVar5;
      }
      iVar3 = local_8;
      if (iVar5 == iVar6) {
        *(undefined4 *)(param_1 + local_8 * 4) = *(undefined4 *)(param_1 + -4 + iVar6 * 4);
        iVar3 = iVar6 + -1;
      }
      FUN_004e1950(param_1,iVar3,iVar4,&local_10,param_3);
    } while (0 < iVar4);
  }
  return;
}


/* FUN_004e17c0 @ 004e17c0  kind=gamemisc  attributed-by=none  size=168 */

void __cdecl FUN_004e17c0(int *param_1,int *param_2,int *param_3,int *param_4)

{
  float *pfVar1;
  float fVar2;
  int iVar3;
  
  iVar3 = *param_2;
  fVar2 = *(float *)(*param_4 + 0x18 + *param_1 * 0x1c);
  pfVar1 = (float *)(*param_4 + 0x18 + iVar3 * 0x1c);
  if (*pfVar1 <= fVar2 && fVar2 != *pfVar1) {
    *param_2 = *param_1;
    *param_1 = iVar3;
  }
  iVar3 = *param_3;
  fVar2 = *(float *)(*param_4 + 0x18 + *param_2 * 0x1c);
  pfVar1 = (float *)(*param_4 + 0x18 + iVar3 * 0x1c);
  if (*pfVar1 <= fVar2 && fVar2 != *pfVar1) {
    *param_3 = *param_2;
    *param_2 = iVar3;
    fVar2 = *(float *)(*param_4 + 0x18 + *param_1 * 0x1c);
    pfVar1 = (float *)(*param_4 + 0x18 + iVar3 * 0x1c);
    if (*pfVar1 <= fVar2 && fVar2 != *pfVar1) {
      *param_2 = *param_1;
      *param_1 = iVar3;
    }
  }
  return;
}


/* FUN_004e1870 @ 004e1870  kind=gamemisc  attributed-by=none  size=159 */

void __cdecl FUN_004e1870(int *param_1,int *param_2,int *param_3,int *param_4)

{
  int iVar1;
  
  iVar1 = (int)param_3 - (int)param_1 >> 2;
  if (0x28 < iVar1) {
    iVar1 = iVar1 + 1;
    iVar1 = (int)(iVar1 + (iVar1 >> 0x1f & 7U)) >> 3;
    FUN_004e17c0(param_1,param_1 + iVar1,param_1 + iVar1 * 2,param_4);
    FUN_004e17c0(param_2 + -iVar1,param_2,param_2 + iVar1,param_4);
    FUN_004e17c0(param_3 + iVar1 * -2,param_3 + -iVar1,param_3,param_4);
    FUN_004e17c0(param_1 + iVar1,param_2,param_3 + -iVar1,param_4);
    return;
  }
  FUN_004e17c0(param_1,param_2,param_3,param_4);
  return;
}


/* FUN_004e1910 @ 004e1910  kind=gamemisc  attributed-by=none  size=64 */

void __cdecl FUN_004e1910(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  for (; param_1 != param_2; param_1 = (undefined8 *)((int)param_1 + 0x1c)) {
    *param_3 = *param_1;
    param_3[1] = param_1[1];
    param_3[2] = param_1[2];
    *(undefined4 *)(param_3 + 3) = *(undefined4 *)(param_1 + 3);
    param_3 = (undefined8 *)((int)param_3 + 0x1c);
  }
  return;
}


/* FUN_004e1950 @ 004e1950  kind=gamemisc  attributed-by=none  size=158 */

void __cdecl FUN_004e1950(int param_1,int param_2,int param_3,int *param_4,int *param_5)

{
  float *pfVar1;
  float fVar2;
  int iVar3;
  int iVar4;
  
  if (param_2 <= param_3) {
    *(int *)(param_1 + param_2 * 4) = *param_4;
    return;
  }
  do {
    iVar4 = (param_2 + -1) / 2;
    iVar3 = *(int *)(param_1 + iVar4 * 4);
    fVar2 = *(float *)(*param_5 + 0x18 + *param_4 * 0x1c);
    pfVar1 = (float *)(*param_5 + 0x18 + iVar3 * 0x1c);
    if (fVar2 < *pfVar1 || fVar2 == *pfVar1) {
      *(int *)(param_1 + param_2 * 4) = *param_4;
      return;
    }
    *(int *)(param_1 + param_2 * 4) = iVar3;
    param_2 = iVar4;
  } while (param_3 < iVar4);
  *(int *)(param_1 + iVar4 * 4) = *param_4;
  return;
}


/* FUN_004e1ae0 @ 004e1ae0  kind=gamemisc  attributed-by=none  size=82 */

void __cdecl FUN_004e1ae0(undefined4 *param_1,int param_2,int *param_3)

{
  int *piVar1;
  uint uVar2;
  
  piVar1 = param_3;
  uVar2 = param_2 - (int)param_1;
  while (4 < (int)(uVar2 & 0xfffffffc)) {
    param_2 = *(int *)((int)param_1 + (uVar2 - 4));
    *(undefined4 *)((int)param_1 + (uVar2 - 4)) = *param_1;
    uVar2 = uVar2 - 4;
    FUN_004e1560((int)param_1,0,(int)uVar2 >> 2,&param_2,piVar1);
  }
  return;
}


/* FUN_004e1b40 @ 004e1b40  kind=gamemisc  attributed-by=none  size=532 */

void __cdecl FUN_004e1b40(uint *param_1,int *param_2,int *param_3,int *param_4)

{
  int *piVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  int *piVar5;
  int *piVar6;
  int *piVar7;
  int *local_10;
  int *local_c;
  int *local_8;
  
  local_c = param_2 + (((int)param_3 - (int)param_2 >> 2) - ((int)param_3 - (int)param_2 >> 0x1f) >>
                      1);
  FUN_004e1870(param_2,local_c,param_3 + -1,param_4);
  piVar5 = local_c + 1;
  if (param_2 < local_c) {
    do {
      piVar1 = local_c + -1;
      fVar2 = *(float *)(*param_4 + 0x18 + *piVar1 * 0x1c);
      fVar3 = *(float *)(*param_4 + 0x18 + *local_c * 0x1c);
      if ((fVar2 < fVar3) || (fVar3 < fVar2)) break;
      local_c = piVar1;
    } while (param_2 < piVar1);
  }
  local_10 = piVar5;
  piVar1 = piVar5;
  piVar6 = local_c;
  if (piVar5 < param_3) {
    fVar2 = *(float *)(*param_4 + 0x18 + *local_c * 0x1c);
    do {
      fVar3 = *(float *)(*param_4 + 0x18 + *piVar5 * 0x1c);
      local_10 = piVar5;
      piVar1 = piVar5;
      if ((fVar3 < fVar2) || (fVar2 < fVar3)) break;
      piVar5 = piVar5 + 1;
      local_10 = piVar5;
      piVar1 = piVar5;
    } while (piVar5 < param_3);
  }
joined_r0x004e1c15:
  do {
    piVar7 = local_c;
    if (param_3 <= piVar5) {
joined_r0x004e1c74:
      while (local_c = piVar7, param_2 < local_c) {
        piVar7 = local_c + -1;
        fVar2 = *(float *)(*param_4 + 0x18 + local_c[-1] * 0x1c);
        fVar3 = *(float *)(*param_4 + 0x18 + *piVar6 * 0x1c);
        piVar5 = local_10;
        if (fVar3 <= fVar2) {
          if (fVar3 < fVar2) break;
          iVar4 = piVar6[-1];
          piVar6 = piVar6 + -1;
          *piVar6 = *piVar7;
          *piVar7 = iVar4;
        }
      }
      if (local_c == param_2) {
        if (piVar5 == param_3) {
          *param_1 = (uint)piVar6;
          param_1[1] = (uint)piVar1;
          return;
        }
        if (piVar1 != piVar5) {
          iVar4 = *piVar6;
          *piVar6 = *piVar1;
          *piVar1 = iVar4;
        }
        iVar4 = *piVar6;
        *piVar6 = *piVar5;
        *piVar5 = iVar4;
        piVar5 = local_10 + 1;
        local_10 = local_10 + 1;
        piVar1 = piVar1 + 1;
        piVar6 = piVar6 + 1;
      }
      else {
        local_c = local_c + -1;
        if (piVar5 == param_3) {
          piVar6 = piVar6 + -1;
          if (local_c != piVar6) {
            iVar4 = *local_c;
            *local_c = *piVar6;
            *piVar6 = iVar4;
          }
          iVar4 = *piVar6;
          *piVar6 = piVar1[-1];
          piVar1[-1] = iVar4;
          piVar1 = piVar1 + -1;
        }
        else {
          iVar4 = *piVar5;
          *piVar5 = *local_c;
          *local_c = iVar4;
          piVar5 = piVar5 + 1;
          local_10 = piVar5;
        }
      }
      goto joined_r0x004e1c15;
    }
    fVar2 = *(float *)(*param_4 + 0x18 + *piVar6 * 0x1c);
    fVar3 = *(float *)(*param_4 + 0x18 + *piVar5 * 0x1c);
    local_8 = piVar1;
    if (fVar3 <= fVar2) {
      local_10 = piVar5;
      if (fVar3 < fVar2) goto joined_r0x004e1c74;
      local_8 = piVar1 + 1;
      iVar4 = *piVar1;
      *piVar1 = *piVar5;
      *piVar5 = iVar4;
    }
    piVar5 = piVar5 + 1;
    local_10 = piVar5;
    piVar1 = local_8;
  } while( true );
}


