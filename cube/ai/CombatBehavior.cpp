// CombatBehavior (ai) -- cube. 3 functions. Bodies = Ghidra pseudo-C.
// Attribution: see ../attribution.tsv. Toolchain of the original: MSVC 11.0 (VS2012).
#include "CombatBehavior.h"

/* cube::CombatBehavior::CombatBehavior @ 0042c550  kind=game  attributed-by=rtti  size=46 */

CombatBehavior * __thiscall
cube::CombatBehavior::CombatBehavior(CombatBehavior *this,undefined4 param_1)

{
  this->vftablePtr = &vftable;
  (this->CombatBehavior_data).offset_0x0 = 20000;
  (this->CombatBehavior_data).offset_0x4 = param_1;
  (this->CombatBehavior_data).offset_0x8 = 0;
  (this->CombatBehavior_data).offset_0xc = 0;
  return this;
}


/* cube::CombatBehavior::vfunction1 @ 0042cb20  kind=game  attributed-by=rtti  size=8846 */

/* WARNING: Removing unreachable block (ram,0x0042e1a6) */
/* WARNING: Removing unreachable block (ram,0x0042df4d) */
/* WARNING: Type propagation algorithm not settling */

void __thiscall
cube::CombatBehavior::vfunction1
          (CombatBehavior *this,float param_1,float param_2,int param_3,undefined4 param_4)

{
  CombatBehavior_data *pCVar1;
  uint *puVar2;
  short sVar3;
  ushort uVar4;
  int *piVar5;
  uint uVar6;
  void *pvVar8;
  int *piVar9;
  char cVar10;
  uint uVar11;
  int iVar12;
  undefined4 uVar13;
  undefined4 *puVar14;
  int iVar15;
  int iVar16;
  int *piVar17;
  float *pfVar18;
  int iVar19;
  bool bVar20;
  float10 fVar21;
  float fVar22;
  double dVar23;
  float fVar24;
  float fVar25;
  int *piVar26;
  int *piVar27;
  float fVar28;
  longlong lVar29;
  undefined8 uVar30;
  undefined1 *puVar31;
  undefined1 *puVar32;
  undefined4 uVar33;
  undefined1 auStack_31c [4];
  int *local_318;
  float local_314;
  float local_310;
  int local_30c;
  int *local_308;
  char local_301;
  int *local_300;
  CombatBehavior *local_2fc;
  char local_2f5;
  uint *local_2f4;
  int *local_2f0;
  int *local_2ec;
  float local_2e8;
  float fStack_2e4;
  float local_2e0;
  int iStack_2dc;
  int iStack_2d8;
  undefined4 uStack_2d4;
  float fStack_2d0;
  undefined4 local_2cc;
  int iStack_2c8;
  int iStack_2c4;
  undefined4 uStack_2c0;
  int *local_2bc;
  int iStack_2b8;
  int iStack_2b4;
  undefined4 uStack_2b0;
  void *pvStack_2ac;
  int iStack_2a8;
  undefined4 uStack_2a4;
  ulonglong uStack_2a0;
  ulonglong uStack_298;
  undefined8 uStack_290;
  undefined4 uStack_284;
  int local_280;
  int local_27c [3];
  int aiStack_270 [6];
  int aiStack_258 [12];
  undefined8 local_228;
  float fStack_21c;
  float fStack_218;
  int *piStack_214;
  float local_210;
  float local_20c;
  int *local_208;
  float fStack_204;
  float fStack_200;
  float local_1f8;
  float local_1f4;
  float local_1f0;
  float fStack_1ec;
  float fStack_1e8;
  int iStack_1e0;
  int iStack_1dc;
  int iStack_1d8;
  int iStack_1d4;
  int iStack_1d0;
  int iStack_1cc;
  int local_1c8;
  int iStack_1c4;
  int local_1c0;
  int iStack_1bc;
  int local_1b8;
  int iStack_1b4;
  int local_1b0;
  int iStack_1ac;
  int local_1a8;
  int iStack_1a4;
  int local_1a0;
  int iStack_19c;
  undefined4 uStack_194;
  undefined4 uStack_190;
  float fStack_18c;
  undefined8 local_188;
  undefined1 local_17c [12];
  undefined1 auStack_170 [24];
  undefined1 auStack_158 [24];
  undefined1 auStack_140 [24];
  undefined1 auStack_128 [24];
  undefined1 auStack_110 [24];
  undefined1 auStack_f8 [24];
  undefined1 auStack_e0 [24];
  undefined1 auStack_c8 [24];
  undefined1 auStack_b0 [24];
  undefined1 auStack_98 [24];
  undefined1 auStack_80 [24];
  undefined1 auStack_68 [24];
  undefined1 auStack_50 [24];
  undefined1 auStack_38 [28];
  uint local_1c;
  void *local_14;
  undefined1 *puStack_10;
  undefined4 uStack_c;
  uint uVar7;
  
  uStack_c = 0xffffffff;
  puStack_10 = &LAB_006e21cc;
  local_14 = ExceptionList;
  local_1c = DAT_0076aa78 ^ (uint)auStack_31c;
  uVar11 = DAT_0076aa78 ^ (uint)&stack0xfffffcd8;
  ExceptionList = &local_14;
  local_2cc = param_4;
  local_2f4 = (uint *)((int)param_1 + 0x10);
  *(ushort *)((int)param_1 + 0x124) = *(ushort *)((int)param_1 + 0x124) & 0xfffb;
  cVar10 = *(char *)((int)param_1 + 0x68);
  local_2e8 = param_1;
  local_310 = param_2;
  if ((((cVar10 != 'S') && (cVar10 != 'R')) && (cVar10 != 'T')) &&
     ((cVar10 != 'O' && (10000 < *(int *)((int)param_1 + 0x6c))))) {
    *(undefined1 *)((int)param_1 + 0x68) = 0;
  }
  local_2fc = this;
  local_228 = CONCAT44(local_228._4_4_,(undefined4)local_228);
  if ((*(int *)((int)param_1 + 0x128) != 0) ||
     ((*(char *)((int)param_1 + 0x68) == 'P' &&
      (local_228 = CONCAT44(local_228._4_4_,(undefined4)local_228),
      *(int *)((int)param_1 + 0x6c) < 3000)))) goto LAB_0042eec0;
  local_2f0 = *(int **)((int)param_1 + 0x16c);
  fVar21 = (float10)FUN_00444db0(uVar11);
  local_308 = (int *)(float)fVar21;
  if (((float)local_2f0 < (float)local_308 * 0.25) &&
     (iVar12 = FUN_0043d1a0(), iVar12 < *(int *)((int)param_1 + 0x6c))) {
    for (puVar14 = *(undefined4 **)((int)param_1 + 0x11dc);
        puVar14 != *(undefined4 **)((int)param_1 + 0x11e0); puVar14 = puVar14 + 3) {
      for (piVar26 = (int *)*puVar14; piVar26 != (int *)puVar14[1]; piVar26 = piVar26 + 0x47) {
        if (((*piVar26 != 0) && ((char)piVar26[1] == '\x01')) &&
           (*(char *)((int)piVar26 + 5) == '\x01')) {
          *(undefined1 *)((int)param_1 + 0x68) = 0x50;
          *(undefined4 *)((int)param_1 + 0x6c) = 0;
          FUN_0042c5e0(piVar26 + 1);
          *piVar26 = *piVar26 + -1;
          if (*piVar26 < 1) {
            *piVar26 = 0;
            *(undefined1 *)(piVar26 + 1) = 0;
            *(undefined1 *)((int)piVar26 + 5) = 0;
          }
          iVar12 = rand();
          local_308 = (int *)(((float)iVar12 * 4.0) / 32767.0 - 2.0);
          iVar12 = rand();
          *(int **)((int)param_1 + 0x40) = local_308;
          *(undefined4 *)((int)param_1 + 0x48) = 0;
          *(float *)((int)param_1 + 0x44) = ((float)iVar12 * 4.0) / 32767.0 - 2.0;
          goto LAB_0042eec0;
        }
      }
    }
  }
  local_228 = FUN_00444bf0();
  local_318 = (int *)((int)param_2 + 4);
  FUN_00477d90(aiStack_270 + 5,&local_228);
  iVar12 = *(int *)((int)param_2 + 4);
  if (aiStack_270[5] == iVar12) {
    local_30c = 0;
  }
  else {
    local_30c = *(int *)(aiStack_270[5] + 0x18);
  }
  iVar19 = local_30c;
  if (*(char *)((int)param_1 + 0x60) == '\x05') {
    FUN_00477d90(&local_280,(int)param_1 + 0x198);
    iVar19 = local_30c;
    if ((local_280 == iVar12) || (iVar15 = *(int *)(local_280 + 0x18), iVar15 == 0))
    goto LAB_0042ce36;
    iVar19 = 0;
    local_30c = 0;
    if (*(char *)(iVar15 + 0x68) == 'j') goto LAB_0042eec0;
    piVar26 = *(int **)(iVar15 + 0x13ac);
    local_2bc = (int *)*piVar26;
    local_2ec = (int *)0x0;
    param_1 = local_2e8;
    if (local_2bc != piVar26) {
      do {
        local_2f0 = (int *)local_2bc[6];
        if ((float)local_2ec < (float)local_2f0) {
          local_308 = local_2bc + 4;
          FUN_00477d90(local_27c,local_308);
          if ((local_27c[0] != iVar12) && (*(int *)(local_27c[0] + 0x18) != 0)) {
            FUN_00477d90(local_27c + 2,local_308);
            if (local_27c[2] == iVar12) {
              iVar19 = 0;
            }
            else {
              iVar19 = *(int *)(local_27c[2] + 0x18);
            }
            local_2ec = local_2f0;
          }
        }
        FUN_005c3ea0();
        param_1 = local_2e8;
      } while (local_2bc != piVar26);
      goto LAB_0042ce36;
    }
LAB_0042ce7c:
    iVar12 = local_30c;
    local_2f0 = *(int **)((int)param_1 + 0x16c);
    fVar21 = (float10)FUN_00444db0();
    local_308 = (int *)(float)fVar21;
    if (((float)local_2f0 < (float)local_308 * 0.5) && (*(char *)((int)param_1 + 0x60) == '\x03')) {
      *(undefined1 *)((int)param_1 + 0x68) = 0x50;
      *(undefined4 *)((int)param_1 + 0x6c) = 0;
      *(undefined2 *)((int)param_1 + 0x1e8) = 0x401;
      *(undefined2 *)((int)param_1 + 0x1f8) = *(undefined2 *)((int)param_1 + 400);
      *(undefined4 *)((int)param_1 + 0x40) = 0;
      *(undefined4 *)((int)param_1 + 0x44) = 0;
      *(undefined4 *)((int)param_1 + 0x48) = 0;
      goto LAB_0042eec0;
    }
  }
  else {
LAB_0042ce36:
    local_30c = iVar19;
    iVar12 = local_30c;
    if (local_30c == 0) goto LAB_0042ce7c;
  }
  pCVar1 = &local_2fc->CombatBehavior_data;
  pCVar1->offset_0x0 = pCVar1->offset_0x0 - param_3;
  uVar13 = (local_2fc->CombatBehavior_data).offset_0x0;
  if ((int)pCVar1->offset_0x0 < 0) {
    uVar13 = 0;
  }
  (local_2fc->CombatBehavior_data).offset_0x0 = uVar13;
  local_2f5 = '\0';
  for (puVar14 = (undefined4 *)**(undefined4 **)((int)param_1 + 0x1178);
      puVar14 != *(undefined4 **)((int)param_1 + 0x1178); puVar14 = (undefined4 *)*puVar14) {
    if (*(char *)(puVar14 + 2) == '\b') {
      local_2f5 = '\x01';
      break;
    }
  }
  if (iVar12 == 0) {
    if (((*(char *)((int)param_1 + 0x60) != '\x05') ||
        (*(int *)((int)param_1 + 0x198) == 0 && *(int *)((int)param_1 + 0x19c) == 0)) &&
       ((int)(local_2fc->CombatBehavior_data).offset_0xc < 1)) {
      fVar24 = (float)(local_2fc->CombatBehavior_data).offset_0x4;
      piVar27 = (int *)(fVar24 * fVar24);
      piVar26 = *(int **)*local_318;
      piVar17 = local_318;
      local_300 = piVar27;
      if (piVar26 != (int *)*local_318) {
        do {
          fVar28 = local_2e8;
          fVar24 = (float)piVar26[6];
          local_314 = fVar24;
          if (((fVar24 != 0.0) && (fVar24 != param_1)) &&
             ((0.0 < *(float *)((int)fVar24 + 0x16c) && (*(char *)((int)fVar24 + 0x60) != '\x05'))))
          {
            local_2f0 = *(int **)((int)fVar24 + 0x24);
            local_1b0 = *(uint *)((int)fVar24 + 0x10) - *local_2f4;
            iStack_1ac = (*(int *)((int)fVar24 + 0x14) - local_2f4[1]) -
                         (uint)(*(uint *)((int)fVar24 + 0x10) < *local_2f4);
            local_1a8 = *(uint *)((int)fVar24 + 0x18) - *(uint *)((int)local_2e8 + 0x18);
            iStack_1a4 = (*(int *)((int)fVar24 + 0x1c) - *(int *)((int)local_2e8 + 0x1c)) -
                         (uint)(*(uint *)((int)fVar24 + 0x18) < *(uint *)((int)local_2e8 + 0x18));
            local_1a0 = *(uint *)((int)fVar24 + 0x20) - *(uint *)((int)local_2e8 + 0x20);
            iStack_19c = (int)local_2f0 +
                         (-(uint)(*(uint *)((int)fVar24 + 0x20) < *(uint *)((int)local_2e8 + 0x20))
                         - *(int *)((int)local_2e8 + 0x24));
            local_1f8 = (float)CONCAT44(iStack_1ac,local_1b0) * 1.5258789e-05;
            local_308 = (int *)(float)CONCAT44(iStack_19c,local_1a0);
            local_1f4 = (float)CONCAT44(iStack_1a4,local_1a8) * 1.5258789e-05;
            local_1f0 = (float)local_308 * 1.5258789e-05;
            local_2ec = (int *)(local_1f4 * local_1f4 + local_1f8 * local_1f8 +
                               local_1f0 * local_1f0);
            if (0.0 < *(float *)((int)fVar24 + 0x1190)) {
              dVar23 = 1.5;
              libm_sse2_pow_precise();
              fVar24 = 1.0 - (float)dVar23 * *(float *)((int)fVar24 + 0x1190);
              if (fVar24 < 0.1) {
                fVar24 = 0.1;
              }
              local_2ec = (int *)((float)local_2ec / (fVar24 * fVar24));
              piVar27 = local_300;
            }
            piVar17 = local_318;
            iVar12 = local_30c;
            param_1 = fVar28;
            if ((local_2f5 == '\0') && ((float)local_2ec < (float)piVar27)) {
              cVar10 = FUN_00596ca0(fVar28,piVar26[6]);
              if ((cVar10 != '\0') ||
                 ((((piVar17 = local_318, iVar12 = local_30c, piVar27 = local_300,
                    *(char *)((int)fVar28 + 0x60) == '\x05' &&
                    (*(int *)((int)fVar28 + 0x198) == 0 && *(int *)((int)fVar28 + 0x19c) == 0)) &&
                   (iVar19 = piVar26[6], *(char *)(iVar19 + 0x68) == 'R')) &&
                  ((*(char *)(iVar19 + 0x1020) == '\x14' &&
                   ((uint)*(byte *)(iVar19 + 0x1021) == *(uint *)((int)fVar28 + 100))))))) {
                cVar10 = FUN_0059ee90((int)fVar28 + 0x10,piVar26[6] + 0x10,1,0x43480000);
                piVar17 = local_318;
                iVar12 = local_30c;
                piVar27 = local_300;
                if (cVar10 != '\0') {
                  cVar10 = FUN_00444680();
                  piVar17 = local_318;
                  if ((cVar10 == '\0') ||
                     (((iVar19 = piVar26[6], iVar12 = local_30c, piVar27 = local_300,
                       *(char *)(iVar19 + 0x68) == 'R' && (*(char *)(iVar19 + 0x1020) == '\x14')) &&
                      ((uint)*(byte *)(iVar19 + 0x1021) == *(uint *)((int)fVar28 + 100))))) {
                    local_30c = piVar26[6];
                    local_300 = local_2ec;
                    iVar12 = local_30c;
                    piVar27 = local_2ec;
                  }
                }
              }
            }
          }
          if (*(char *)((int)piVar26 + 0xd) == '\0') {
            piVar5 = (int *)piVar26[2];
            if (*(char *)((int)piVar5 + 0xd) == '\0') {
              cVar10 = *(char *)(*piVar5 + 0xd);
              piVar26 = piVar5;
              piVar5 = (int *)*piVar5;
              while (cVar10 == '\0') {
                cVar10 = *(char *)(*piVar5 + 0xd);
                piVar26 = piVar5;
                piVar5 = (int *)*piVar5;
              }
            }
            else {
              cVar10 = *(char *)(piVar26[1] + 0xd);
              piVar9 = (int *)piVar26[1];
              piVar5 = piVar26;
              while ((piVar26 = piVar9, cVar10 == '\0' && (piVar5 == (int *)piVar26[2]))) {
                cVar10 = *(char *)(piVar26[1] + 0xd);
                piVar9 = (int *)piVar26[1];
                piVar5 = piVar26;
              }
            }
          }
        } while (piVar26 != (int *)*piVar17);
        if (iVar12 != 0) {
          puVar14 = (undefined4 *)FUN_00468ad0(iVar12 + 8);
          *puVar14 = 0x3f800000;
          FUN_005a0970(iVar12,param_1,local_2cc);
          goto LAB_0042d237;
        }
      }
    }
LAB_0042d268:
    bVar20 = false;
  }
  else {
LAB_0042d237:
    if (*(char *)((int)param_1 + 0x68) != '\0') {
      iVar19 = FUN_00444270(0xffffffff);
      iVar15 = FUN_0043caa0(0xffffffff);
      iVar16 = FUN_00447310(0xffffffff);
      if (*(int *)((int)param_1 + 0x6c) <= iVar16 + iVar19 / 2 + iVar15) goto LAB_0042d268;
    }
    bVar20 = true;
  }
  fVar24 = local_2e8;
  iVar19 = local_30c;
  if (bVar20) {
    *(ushort *)((int)param_1 + 0x124) = *(ushort *)((int)param_1 + 0x124) | 0x40;
  }
  else {
    *(ushort *)((int)param_1 + 0x124) = *(ushort *)((int)param_1 + 0x124) & 0xffbf;
  }
  puVar14 = &(local_2fc->CombatBehavior_data).offset_0xc;
  *puVar14 = *puVar14 - param_3;
  uVar13 = (local_2fc->CombatBehavior_data).offset_0xc;
  if ((int)*puVar14 < 0) {
    uVar13 = 0;
  }
  (local_2fc->CombatBehavior_data).offset_0xc = uVar13;
  if (iVar12 == 0) {
    (local_2fc->CombatBehavior_data).offset_0x8 = 0;
    goto LAB_0042eec0;
  }
  local_300 = (int *)(iVar12 + 0x10);
  local_1c8 = *(uint *)(iVar12 + 0x10) - *local_2f4;
  iStack_1c4 = (*(int *)(iVar12 + 0x14) - local_2f4[1]) -
               (uint)(*(uint *)(iVar12 + 0x10) < *local_2f4);
  local_1c0 = *(uint *)(iVar12 + 0x18) - *(uint *)((int)local_2e8 + 0x18);
  iStack_1bc = (*(int *)(iVar12 + 0x1c) - *(int *)((int)local_2e8 + 0x1c)) -
               (uint)(*(uint *)(iVar12 + 0x18) < *(uint *)((int)local_2e8 + 0x18));
  local_1b8 = *(uint *)(iVar12 + 0x20) - *(uint *)((int)local_2e8 + 0x20);
  iStack_1b4 = (*(int *)(iVar12 + 0x24) - *(int *)((int)local_2e8 + 0x24)) -
               (uint)(*(uint *)(iVar12 + 0x20) < *(uint *)((int)local_2e8 + 0x20));
  local_210 = (float)CONCAT44(iStack_1c4,local_1c8) * 1.5258789e-05;
  local_314 = (float)CONCAT44(iStack_1b4,local_1b8);
  local_20c = (float)CONCAT44(iStack_1bc,local_1c0) * 1.5258789e-05;
  local_2ec = (int *)(local_314 * 1.5258789e-05);
  local_318 = (int *)(*(float *)((int)local_2e8 + 0x80) * 2.0 + *(float *)(local_30c + 0x80));
  local_208 = local_2ec;
  local_301 = FUN_0059ee90((int)local_2e8 + 0x10,local_30c + 0x10,1,0x43480000);
  cVar10 = FUN_00444520();
  if ((cVar10 != '\0') && (local_301 != '\0')) {
    cVar10 = *(char *)((int)fVar24 + 0x68);
    if ((cVar10 == 'W') || ((cVar10 == 'V' || (cVar10 == 'Y')))) {
      iVar12 = FUN_0043caa0(0xffffffff);
      if (*(int *)((int)fVar24 + 0x6c) < iVar12) goto LAB_0042d427;
    }
    local_318 = (int *)0x42480000;
  }
LAB_0042d427:
  iVar12 = *(int *)((int)fVar24 + 100);
  if ((((iVar12 == 0x2f) || (iVar12 == 0x6f)) || (iVar12 == 0x71)) || (iVar12 == 0x70)) {
    local_318 = (int *)0x41a00000;
  }
  cVar10 = *(char *)((int)fVar24 + 0x68);
  if (((cVar10 == '_') || (cVar10 == '\x1c')) || (cVar10 == 'l')) {
    local_318 = (int *)0x42480000;
  }
  if (cVar10 == 'H') {
    local_318 = (int *)(*(float *)((int)fVar24 + 0x80) + *(float *)(iVar19 + 0x80));
  }
  local_2f0 = (int *)0x0;
  if (((local_2fc->CombatBehavior_data).offset_0x0 == 0) &&
     (iVar12 = *(int *)((int)fVar24 + 0x13e8), iVar12 != *(int *)((int)fVar24 + 0x13ec))) {
    iVar15 = *(int *)((int)fVar24 + 0x13ec);
    uVar11 = rand();
    local_2f0 = *(int **)(*(int *)((int)fVar24 + 0x13e8) +
                         (uVar11 % (uint)(iVar15 - iVar12 >> 2)) * 4);
    if ((local_2f0 == (int *)0x5d) ||
       (((local_2f0 == (int *)0x5b || (local_2f0 == (int *)0x44)) || (local_2f0 == (int *)0x45)))) {
      local_318 = (int *)0x41a00000;
    }
    if ((local_2f0 == (int *)0x56) || (local_2f0 == (int *)0x59)) {
      local_318 = (int *)(*(float *)((int)fVar24 + 0x80) * 2.0 + *(float *)(iVar19 + 0x80));
    }
  }
  if (local_301 == '\0') {
    local_318 = (int *)0x3f800000;
  }
  local_308 = (int *)((float)local_318 * (float)local_318);
  fVar28 = local_20c * local_20c + local_210 * local_210;
  local_314 = (float)local_2ec * (float)local_2ec + fVar28;
  if (((float)local_308 < local_314) || (local_301 == '\0')) {
    puVar14 = &(local_2fc->CombatBehavior_data).offset_0x8;
    *puVar14 = *puVar14 + param_3;
    if ((int)(local_2fc->CombatBehavior_data).offset_0x8 < 0x4e21) {
      if ((*(char *)((int)fVar24 + 0x68) == '_') || (*(char *)((int)fVar24 + 0x68) == '\x1c')) {
        *(undefined1 *)((int)fVar24 + 0x68) = 0;
      }
      if ((*(byte *)((int)fVar24 + 0x5c) & 2) == 0) {
        local_2ec = (int *)0x0;
      }
      fVar28 = (float)local_2ec * (float)local_2ec + fVar28;
      piVar26 = local_2ec;
      fVar25 = local_20c;
      fVar22 = local_210;
      if (0.0 < fVar28) {
        dVar23 = (double)fVar28;
        libm_sse2_sqrt_precise();
        fVar25 = 1.0 / (float)dVar23;
        fVar22 = fVar25 * local_210;
        piVar26 = (int *)(fVar25 * (float)local_2ec);
        fVar25 = fVar25 * local_20c;
      }
      fVar28 = 80.0;
      if (fVar25 * fVar25 + fVar22 * fVar22 + (float)piVar26 * (float)piVar26 <
          (float)local_308 * 4.0) {
        fVar28 = 40.0;
      }
      *(float *)((int)fVar24 + 0x40) = fVar22 * fVar28;
      *(float *)((int)fVar24 + 0x44) = fVar25 * fVar28;
      *(float *)((int)fVar24 + 0x48) = (float)piVar26 * fVar28;
      if (local_301 != '\0') {
        cVar10 = FUN_00609480(fVar24,(undefined4 *)((int)fVar24 + 0x10),iVar19 + 0x10,local_318);
        if ((cVar10 != '\0') && ((*(byte *)((int)fVar24 + 0x5c) & 0x20) == 0)) {
          FUN_0042ef10();
          goto LAB_0042eec0;
        }
      }
      pfVar18 = (float *)FUN_00468ad0(iVar19 + 8);
      *pfVar18 = *pfVar18 * 0.9;
      if ((*(int *)((int)fVar24 + 0x1464) == 0) && ((*(byte *)(iVar19 + 0x5c) & 7) != 0)) {
        *(undefined4 *)((int)fVar24 + 0x1440) = *(undefined4 *)(iVar19 + 0x10);
        *(undefined4 *)((int)fVar24 + 0x1444) = *(undefined4 *)(iVar19 + 0x14);
        *(undefined4 *)((int)fVar24 + 0x1448) = *(undefined4 *)(iVar19 + 0x18);
        *(undefined4 *)((int)fVar24 + 0x144c) = *(undefined4 *)(iVar19 + 0x1c);
        *(undefined4 *)((int)fVar24 + 0x1450) = *(undefined4 *)(iVar19 + 0x20);
        *(undefined4 *)((int)fVar24 + 0x1454) = *(undefined4 *)(iVar19 + 0x24);
        local_2e0 = (*(float *)(iVar19 + 0x88) * 0.5 - 0.1) * 65536.0;
        uVar30 = FUN_0068d946();
        puVar2 = (uint *)((int)fVar24 + 0x1450);
        uVar11 = *puVar2;
        *puVar2 = *puVar2 - (uint)uVar30;
        *(int *)((int)fVar24 + 0x1454) =
             (*(int *)((int)fVar24 + 0x1454) - (int)((ulonglong)uVar30 >> 0x20)) -
             (uint)(uVar11 < (uint)uVar30);
        *(undefined4 *)((int)fVar24 + 0x1428) = *(undefined4 *)((int)fVar24 + 0x10);
        *(undefined4 *)((int)fVar24 + 0x142c) = *(undefined4 *)((int)fVar24 + 0x14);
        *(undefined4 *)((int)fVar24 + 0x1430) = *(undefined4 *)((int)fVar24 + 0x18);
        *(undefined4 *)((int)fVar24 + 0x1434) = *(undefined4 *)((int)fVar24 + 0x1c);
        *(undefined4 *)((int)fVar24 + 0x1438) = *(undefined4 *)((int)fVar24 + 0x20);
        *(undefined4 *)((int)fVar24 + 0x143c) = *(undefined4 *)((int)fVar24 + 0x24);
        local_2e0 = (*(float *)((int)fVar24 + 0x88) * 0.5 - 0.1) * 65536.0;
        uVar30 = FUN_0068d946();
        puVar2 = (uint *)((int)fVar24 + 0x1438);
        uVar11 = *puVar2;
        *puVar2 = *puVar2 - (uint)uVar30;
        *(int *)((int)fVar24 + 0x143c) =
             (*(int *)((int)fVar24 + 0x143c) - (int)((ulonglong)uVar30 >> 0x20)) -
             (uint)(uVar11 < (uint)uVar30);
        *(float *)((int)fVar24 + 0x1458) =
             *(float *)((int)fVar24 + 0x80) + *(float *)(iVar19 + 0x80);
        FUN_005a9f90(fVar24);
      }
      if (*(int *)((int)fVar24 + 0x1410) != 0) {
        iVar12 = 0;
        piVar26 = (int *)((int)fVar24 + 0x1428);
        do {
          if ((*piVar26 != piVar26[6]) || (piVar26[1] != piVar26[7])) {
            iVar12 = 0;
            goto LAB_0042ee21;
          }
          iVar12 = iVar12 + 1;
          piVar26 = piVar26 + 2;
        } while (iVar12 < 3);
      }
    }
    else {
      local_2f0 = (int *)((int)fVar24 + 0x13a4);
      pvVar8 = *(void **)(*(int *)((int)fVar24 + 0x13a4) + 4);
      if (*(char *)((int)pvVar8 + 0xd) == '\0') {
        FUN_0042ca80(*(undefined4 *)((int)pvVar8 + 8));
                    /* WARNING: Subroutine does not return */
        operator_delete(pvVar8);
      }
      *(int *)(*local_2f0 + 4) = *local_2f0;
      *(int *)*local_2f0 = *local_2f0;
      *(int *)(*local_2f0 + 8) = *local_2f0;
      *(undefined4 *)((int)fVar24 + 0x13a8) = 0;
      FUN_0042ef10();
      (local_2fc->CombatBehavior_data).offset_0xc = 3000;
      (local_2fc->CombatBehavior_data).offset_0x8 = 0;
    }
    goto LAB_0042eec0;
  }
  (local_2fc->CombatBehavior_data).offset_0x8 = 0;
  FUN_0042ef10();
  fVar28 = local_2e8;
  *(undefined4 *)((int)fVar24 + 0x13e0) = 0;
  *(undefined4 *)((int)fVar24 + 0x40) = 0;
  *(undefined4 *)((int)fVar24 + 0x44) = 0;
  *(undefined4 *)((int)fVar24 + 0x48) = 0;
  if ((((((local_2f5 == '\0') && (*(char *)(iVar19 + 0x68) == 'R')) &&
        (*(char *)(iVar19 + 0x1020) == '\x14')) &&
       ((uint)*(byte *)(iVar19 + 0x1021) == *(uint *)((int)fVar24 + 100))) &&
      ((*(char *)((int)fVar24 + 0x60) != '\x05' ||
       (*(int *)((int)fVar24 + 0x198) == 0 && *(int *)((int)fVar24 + 0x19c) == 0)))) &&
     (local_314 <= (float)local_308)) {
    *(undefined4 *)((int)fVar24 + 0x11d0) = *(undefined4 *)(iVar19 + 8);
    *(undefined4 *)((int)fVar24 + 0x11d4) = *(undefined4 *)(iVar19 + 0xc);
    iVar12 = FUN_0043d1a0();
    if (iVar12 < *(int *)((int)fVar24 + 0x6c)) {
      if (*(char *)((int)fVar24 + 0x68) != 'n') {
        *(undefined4 *)((int)fVar24 + 0x70) = 0;
      }
      if (*(int *)((int)fVar24 + 0x70) < 5) {
        *(undefined1 *)((int)fVar24 + 0x68) = 0x6e;
        *(undefined4 *)((int)fVar24 + 0x6c) = 0;
      }
      else {
        local_301 = '\0';
        FUN_0042c520();
        piVar26 = *(int **)((int)fVar24 + 0x1178);
        piVar17 = (int *)*piVar26;
        cVar10 = local_301;
        if (piVar17 != piVar26) {
          do {
            if ((char)piVar17[2] == '\a') {
              uStack_2a0 = *(ulonglong *)(piVar17 + 2);
              uStack_298 = *(ulonglong *)(piVar17 + 4);
              uStack_290 = *(undefined8 *)(piVar17 + 6);
              cVar10 = '\x01';
            }
            piVar17 = (int *)*piVar17;
          } while (piVar17 != piVar26);
          iVar19 = local_30c;
          if (cVar10 != '\0') {
            uStack_298 = uStack_298 & 0xffffffff00000000;
            uStack_2a0 = uStack_2a0 & 0xffffffff;
            FUN_005957c0(fVar24,&uStack_2a0,local_2cc);
          }
        }
        uStack_290 = *(undefined8 *)(iVar19 + 8);
        uStack_2a0 = CONCAT71(uStack_2a0._1_7_,8);
        uStack_298 = CONCAT44(uStack_298._4_4_,20000);
        uStack_2a0 = uStack_2a0 & 0xffffffff;
        FUN_005957c0(fVar24,&uStack_2a0,local_2cc);
      }
    }
    goto LAB_0042eec0;
  }
  iStack_1e0 = *(uint *)(iVar19 + 0x10) - *local_2f4;
  iStack_1dc = (*(int *)(iVar19 + 0x14) - local_2f4[1]) -
               (uint)(*(uint *)(iVar19 + 0x10) < *local_2f4);
  iStack_1d8 = *(uint *)(iVar19 + 0x18) - *(uint *)((int)local_2e8 + 0x18);
  iStack_1d4 = (*(int *)(iVar19 + 0x1c) - *(int *)((int)local_2e8 + 0x1c)) -
               (uint)(*(uint *)(iVar19 + 0x18) < *(uint *)((int)local_2e8 + 0x18));
  iStack_1d0 = *(uint *)(iVar19 + 0x20) - *(uint *)((int)local_2e8 + 0x20);
  iStack_1cc = (*(int *)(iVar19 + 0x24) - *(int *)((int)local_2e8 + 0x24)) -
               (uint)(*(uint *)(iVar19 + 0x20) < *(uint *)((int)local_2e8 + 0x20));
  iVar12 = (int)local_2e8 + 0x10;
  fStack_21c = (float)CONCAT44(iStack_1dc,iStack_1e0) * 1.5258789e-05;
  local_314 = (float)CONCAT44(iStack_1cc,iStack_1d0);
  fStack_218 = (float)CONCAT44(iStack_1d4,iStack_1d8) * 1.5258789e-05;
  *(ushort *)((int)local_2e8 + 0x124) = *(ushort *)((int)local_2e8 + 0x124) | 4;
  local_318 = (int *)(local_314 * 1.5258789e-05);
  local_310 = fStack_218 * fStack_218 + fStack_21c * fStack_21c +
              (float)local_318 * (float)local_318;
  piStack_214 = local_318;
  if (local_2f0 != (int *)0x0) {
    (local_2fc->CombatBehavior_data).offset_0x0 = 20000;
    *(char *)((int)local_2e8 + 0x68) = (char)local_2f0;
    *(undefined4 *)((int)local_2e8 + 0x6c) = 0;
    fVar24 = fStack_218;
    fVar25 = fStack_21c;
    goto LAB_0042eb01;
  }
  iVar19 = *(int *)((int)local_2e8 + 100);
  if (iVar19 == 0x74) {
    iVar12 = FUN_0043d1a0();
    fVar24 = fStack_218;
    fVar25 = fStack_21c;
    if (iVar12 < *(int *)((int)fVar28 + 0x6c)) {
      pvStack_2ac = (void *)0x0;
      iStack_2a8 = 0;
      uStack_2a4 = 0;
      uStack_c = 0;
      aiStack_258[5] = 0x45;
      FUN_0066add0(aiStack_258 + 5);
      aiStack_258[7] = 0x4a;
      FUN_0066add0(aiStack_258 + 7);
      aiStack_258[9] = 0x49;
      FUN_0066add0(aiStack_258 + 9);
      uVar11 = rand();
      *(undefined1 *)((int)fVar28 + 0x68) =
           *(undefined1 *)
            ((int)pvStack_2ac + (uVar11 % (uint)(iStack_2a8 - (int)pvStack_2ac >> 2)) * 4);
      *(undefined4 *)((int)fVar28 + 0x6c) = 0;
      fVar24 = fStack_218;
      fVar25 = fStack_21c;
      if (pvStack_2ac != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
        operator_delete(pvStack_2ac);
      }
    }
    goto LAB_0042eb01;
  }
  if (iVar19 == 0x76) {
    iVar12 = FUN_0043d1a0();
    if (iVar12 < *(int *)((int)fVar28 + 0x6c)) {
      iStack_2c8 = 0;
      iStack_2c4 = 0;
      uStack_2c0 = 0;
      uStack_c = 1;
      aiStack_258[0xb] = 7;
      FUN_0066add0(aiStack_258 + 0xb);
      aiStack_258[3] = 6;
      FUN_0066add0(aiStack_258 + 3);
      aiStack_258[2] = 0x14;
      FUN_0066add0(aiStack_258 + 2);
      if (*(short *)((int)fVar28 + 0x8c) == 0x86a) {
        local_27c[1] = 0x5f;
        piVar26 = local_27c + 1;
      }
      else {
        aiStack_258[10] = 0x56;
        piVar26 = aiStack_258 + 10;
      }
      FUN_0066add0(piVar26);
      iVar12 = iStack_2c8;
      iVar19 = iStack_2c4 - iStack_2c8;
      uVar11 = rand();
      fVar28 = local_2e8;
      uStack_c = 0xffffffff;
      *(undefined1 *)((int)local_2e8 + 0x68) =
           *(undefined1 *)(iVar12 + (uVar11 % (uint)(iVar19 >> 2)) * 4);
      *(undefined4 *)((int)local_2e8 + 0x6c) = 0;
      FUN_005fb860();
    }
    fVar24 = fStack_218;
    fVar25 = fStack_21c;
    if (*(char *)((int)fVar28 + 0x68) == '_') {
      uVar13 = FUN_00446bb0(auStack_b0);
      uVar13 = FUN_0042c7a0(auStack_158,uVar13);
      FUN_0042c4a0(uVar13);
      local_318 = piStack_214;
      fVar24 = fStack_218;
      fVar25 = fStack_21c;
    }
    goto LAB_0042eb01;
  }
  if (((iVar19 == 0x2f) || (iVar19 == 0x6f)) || ((iVar19 == 0x71 || (iVar19 == 0x70)))) {
    iVar12 = FUN_0043d1a0();
    fVar24 = fStack_218;
    fVar25 = fStack_21c;
    if (iVar12 < *(int *)((int)fVar28 + 0x6c)) {
      iStack_2b8 = 0;
      iStack_2b4 = 0;
      uStack_2b0 = 0;
      uStack_c = 2;
      aiStack_270[1] = 0x6c;
      FUN_0066add0(aiStack_270 + 1);
      aiStack_270[3] = 0x36;
      FUN_0066add0(aiStack_270 + 3);
      local_2e0 = 1.06499e-43;
      FUN_0066add0(&local_2e0);
      uVar11 = rand();
      cVar10 = *(char *)(iStack_2b8 + (uVar11 % (uint)(iStack_2b4 - iStack_2b8 >> 2)) * 4);
      *(char *)((int)fVar28 + 0x68) = cVar10;
      *(undefined4 *)((int)fVar28 + 0x6c) = 0;
      if (cVar10 == '6') {
        uVar13 = 0x20000;
        uVar33 = 0;
        puVar31 = auStack_68;
        FUN_0042c7a0(auStack_38,(int)fVar28 + 0x10);
        uVar13 = FUN_0042c6e0(puVar31,uVar13,uVar33);
        FUN_0042c4a0(uVar13);
        *(undefined4 *)((int)fVar28 + 0x3c) = 0x41700000;
      }
LAB_0042eaea:
      FUN_005fb860();
      fVar24 = fStack_218;
      fVar25 = fStack_21c;
    }
    goto LAB_0042eb01;
  }
  if (iVar19 == 0x77) {
    iVar12 = FUN_0043d1a0();
    fVar24 = fStack_218;
    fVar25 = fStack_21c;
    if (iVar12 < *(int *)((int)fVar28 + 0x6c)) {
      iStack_2dc = 0;
      iStack_2d8 = 0;
      uStack_2d4 = 0;
      sVar3 = *(short *)((int)fVar28 + 0x8c);
      uStack_c = 3;
      if (((sVar3 == 0x863) || (sVar3 == 0x864)) || (sVar3 == 0x865)) {
        aiStack_258[4] = 0x45;
        piVar26 = aiStack_258 + 4;
      }
      else {
        aiStack_270[0] = 0x44;
        piVar26 = aiStack_270;
      }
      FUN_0066add0(piVar26);
      if ((*(short *)((int)fVar28 + 0x96) == 0x867) || (*(short *)((int)fVar28 + 0x96) == 0x868)) {
        aiStack_270[2] = 0x46;
        FUN_0066add0(aiStack_270 + 2);
      }
      if ((*(short *)((int)fVar28 + 0x90) == 0x85f) || (*(short *)((int)fVar28 + 0x90) == 0x860)) {
        aiStack_270[4] = 0x4b;
        piVar26 = aiStack_270 + 4;
      }
      else {
        aiStack_258[8] = 0x4a;
        piVar26 = aiStack_258 + 8;
      }
      FUN_0066add0(piVar26);
      if ((*(short *)((int)fVar28 + 0x94) == 0x85c) || (*(short *)((int)fVar28 + 0x94) == 0x85d)) {
        aiStack_258[6] = 0x4d;
        FUN_0066add0(aiStack_258 + 6);
        aiStack_258[0] = 0x4e;
        FUN_0066add0(aiStack_258);
      }
      sVar3 = *(short *)((int)fVar28 + 0x94);
      if ((((sVar3 == 0x857) || (sVar3 == 0x858)) || (sVar3 == 0x859)) ||
         ((sVar3 == 0x85a || (sVar3 == 0x85b)))) {
        aiStack_258[1] = 0x4c;
        FUN_0066add0(aiStack_258 + 1);
      }
      if (((*(char *)((int)fVar28 + 0x68) != 'G') && (*(char *)((int)fVar28 + 0x68) != 'H')) &&
         (*(short *)((int)fVar28 + 0x94) == 0x855)) {
        uVar11 = rand();
        uVar11 = uVar11 & 0x80000001;
        bVar20 = uVar11 == 0;
        if ((int)uVar11 < 0) {
          bVar20 = (uVar11 - 1 | 0xfffffffe) == 0xffffffff;
        }
        if (!bVar20) {
          uStack_284 = 0x47;
          FUN_0066add0(&uStack_284);
        }
      }
      if (((*(char *)((int)fVar28 + 0x68) != 'G') && (*(char *)((int)fVar28 + 0x68) != 'H')) &&
         (*(short *)((int)fVar28 + 0x94) == 0x856)) {
        uVar11 = rand();
        uVar11 = uVar11 & 0x80000001;
        bVar20 = uVar11 == 0;
        if ((int)uVar11 < 0) {
          bVar20 = (uVar11 - 1 | 0xfffffffe) == 0xffffffff;
        }
        if (!bVar20) {
          fStack_2d0 = 1.00893e-43;
          FUN_0066add0(&fStack_2d0);
        }
      }
      if (*(char *)((int)fVar28 + 0x68) != 'I') {
        fStack_2e4 = 1.02295e-43;
        FUN_0066add0(&fStack_2e4);
      }
      iVar12 = iStack_2d8;
      if (iStack_2dc != iStack_2d8) {
        uVar11 = rand();
        *(undefined1 *)((int)fVar28 + 0x68) =
             *(undefined1 *)(iStack_2dc + (uVar11 % (uint)(iVar12 - iStack_2dc >> 2)) * 4);
        *(undefined4 *)((int)fVar28 + 0x6c) = 0;
      }
      goto LAB_0042eaea;
    }
    goto LAB_0042eb01;
  }
  cVar10 = FUN_00444610();
  fVar24 = fStack_218;
  fVar25 = fStack_21c;
  if (cVar10 != '\0') {
    if (3600.0 <= local_310) goto LAB_0042eb01;
    if (*(float *)((int)fVar28 + 0x170) <= 0.5) {
LAB_0042ddbc:
      FUN_00445410();
    }
    else {
      uVar11 = rand();
      uVar11 = uVar11 & 0x80000001;
      bVar20 = uVar11 == 0;
      if ((int)uVar11 < 0) {
        bVar20 = (uVar11 - 1 | 0xfffffffe) == 0xffffffff;
      }
      if (bVar20) goto LAB_0042ddbc;
      FUN_004456a0();
    }
    cVar10 = *(char *)((int)fVar28 + 0x68);
    if (((cVar10 == '\x1e') || (cVar10 == '\x1f')) || ((cVar10 == ' ' || (cVar10 == '!')))) {
      iVar19 = FUN_0043caa0(0xffffffff);
      if (iVar19 < *(int *)((int)fVar28 + 0x6c) - param_3) {
        uVar13 = FUN_0042c7a0(auStack_110,iVar12);
        FUN_0042c4a0(uVar13);
        local_318 = piStack_214;
      }
      else {
        FUN_0042c5b0(local_30c + 0x1350);
      }
    }
    fVar24 = fStack_218;
    fVar25 = fStack_21c;
    if ((*(char *)((int)fVar28 + 0x68) == '\x1c') && (25.0 < local_310)) {
      fStack_2e4 = (float)*(int *)((int)fVar28 + 0x6c) * 0.005;
      dVar23 = (double)fStack_2e4;
      libm_sse2_cos_precise();
      fStack_2d0 = (float)dVar23 * 1.5 + fStack_21c;
      dVar23 = (double)fStack_2e4;
      libm_sse2_sin_precise();
      fVar24 = (float)dVar23 * 1.5 + fStack_218;
      fVar25 = fStack_2d0;
    }
    goto LAB_0042eb01;
  }
  if (*(int *)((int)fVar28 + 100) == 0x65) {
    if (64.0 <= local_310) {
      if (local_310 < 3600.0) {
        iVar19 = FUN_0043d1a0();
        fVar24 = fStack_218;
        fVar25 = fStack_21c;
        if (iVar19 < *(int *)((int)fVar28 + 0x6c)) {
          *(undefined4 *)((int)fVar28 + 0x6c) = 0;
          *(undefined1 *)((int)fVar28 + 0x68) = 0x25;
          fStack_18c = *(float *)(local_30c + 0x88) * 0.4;
          uStack_194 = 0;
          uStack_190 = 0;
          FUN_0042c460(&uStack_194);
          puVar31 = auStack_170;
          puVar32 = auStack_80;
          FUN_0042c7a0(auStack_140,iVar12);
          uVar13 = FUN_0042c800(puVar32,puVar31);
          FUN_0042c4a0(uVar13);
          fVar24 = fStack_218;
          fVar25 = fStack_21c;
        }
      }
    }
    else {
      uVar13 = FUN_0042c7a0(auStack_50,iVar12);
      FUN_0042c4a0(uVar13);
      *(ushort *)((int)fVar28 + 0x124) = *(ushort *)((int)fVar28 + 0x124) | 4;
      fVar24 = fStack_218;
      fVar25 = fStack_21c;
      if (2000 < *(int *)((int)fVar28 + 0x6c)) {
        uVar11 = rand();
        uVar11 = uVar11 & 0x80000001;
        bVar20 = uVar11 == 0;
        if ((int)uVar11 < 0) {
          bVar20 = (uVar11 - 1 | 0xfffffffe) == 0xffffffff;
        }
        if (!bVar20) {
          uVar11 = *(uint *)((int)fVar28 + 0x20);
          uVar6 = *(uint *)(local_30c + 0x20);
          uVar7 = *(uint *)(local_30c + 0x20);
          iVar12 = *(int *)((int)fVar28 + 0x24);
          iVar19 = *(int *)(local_30c + 0x24);
          lVar29 = FUN_0068d946();
          if (CONCAT44((iVar12 - iVar19) - (uint)(uVar11 < uVar6),uVar11 - uVar7) <= lVar29) {
            *(undefined4 *)((int)fVar28 + 0x3c) = 0x41f00000;
            fVar24 = fStack_218;
            fVar25 = fStack_21c;
            goto LAB_0042eb01;
          }
        }
        *(undefined4 *)((int)fVar28 + 0x6c) = 0;
        *(undefined1 *)((int)fVar28 + 0x68) = 0x33;
        uVar13 = FUN_0042c7a0(auStack_e0,(int)fVar28 + 0x10);
        FUN_0042c4a0(uVar13);
        fVar24 = fStack_218;
        fVar25 = fStack_21c;
        if (0.0 < *(float *)((int)fVar28 + 0x34) * *(float *)((int)fVar28 + 0x34) +
                  *(float *)((int)fVar28 + 0x38) * *(float *)((int)fVar28 + 0x38) +
                  *(float *)((int)fVar28 + 0x3c) * *(float *)((int)fVar28 + 0x3c)) {
          fStack_2e4 = *(float *)((int)fVar28 + 0x34);
          dVar23 = (double)(fStack_2e4 * fStack_2e4 +
                            *(float *)((int)fVar28 + 0x38) * *(float *)((int)fVar28 + 0x38) +
                           *(float *)((int)fVar28 + 0x3c) * *(float *)((int)fVar28 + 0x3c));
          libm_sse2_sqrt_precise();
LAB_0042e000:
          fVar24 = 1.0 / (float)dVar23;
          *(float *)((int)fVar28 + 0x34) = fStack_2e4 * fVar24;
          *(float *)((int)fVar28 + 0x38) = *(float *)((int)fVar28 + 0x38) * fVar24;
          *(float *)((int)fVar28 + 0x3c) = *(float *)((int)fVar28 + 0x3c) * fVar24;
          *(float *)((int)fVar28 + 0x34) = *(float *)((int)fVar28 + 0x34) * 10.0;
          *(float *)((int)fVar28 + 0x38) = *(float *)((int)fVar28 + 0x38) * 10.0;
          *(float *)((int)fVar28 + 0x3c) = *(float *)((int)fVar28 + 0x3c) * 10.0;
          fVar24 = fStack_218;
          fVar25 = fStack_21c;
        }
      }
    }
    goto LAB_0042eb01;
  }
  uVar4 = *(ushort *)((int)fVar28 + 0x7e);
  if (((uVar4 & 2) != 0) && ((uVar4 & 0x10) != 0)) {
    *(ushort *)((int)fVar28 + 0x124) = *(ushort *)((int)fVar28 + 0x124) & 0xfffb;
    if (local_310 < 64.0) {
      uVar13 = FUN_0042c7a0(auStack_128,iVar12);
      FUN_0042c4a0(uVar13);
      *(ushort *)((int)fVar28 + 0x124) = *(ushort *)((int)fVar28 + 0x124) | 4;
      fVar24 = fStack_218;
      fVar25 = fStack_21c;
      if (2000 < *(int *)((int)fVar28 + 0x6c)) {
        uVar11 = rand();
        uVar11 = uVar11 & 0x80000001;
        bVar20 = uVar11 == 0;
        if ((int)uVar11 < 0) {
          bVar20 = (uVar11 - 1 | 0xfffffffe) == 0xffffffff;
        }
        if (!bVar20) {
          uVar11 = *(uint *)((int)fVar28 + 0x20);
          uVar6 = *(uint *)(local_30c + 0x20);
          uVar7 = *(uint *)(local_30c + 0x20);
          iVar12 = *(int *)((int)fVar28 + 0x24);
          iVar19 = *(int *)(local_30c + 0x24);
          lVar29 = FUN_0068d946();
          if (CONCAT44((iVar12 - iVar19) - (uint)(uVar11 < uVar6),uVar11 - uVar7) <= lVar29) {
            *(undefined4 *)((int)fVar28 + 0x3c) = 0x40a00000;
            fVar24 = fStack_218;
            fVar25 = fStack_21c;
            goto LAB_0042eb01;
          }
        }
        *(undefined4 *)((int)fVar28 + 0x6c) = 0;
        *(undefined1 *)((int)fVar28 + 0x68) = 0x33;
        uVar13 = FUN_0042c7a0(auStack_f8,(int)fVar28 + 0x10);
        FUN_0042c4a0(uVar13);
        fVar24 = fStack_218;
        fVar25 = fStack_21c;
        if (0.0 < *(float *)((int)fVar28 + 0x34) * *(float *)((int)fVar28 + 0x34) +
                  *(float *)((int)fVar28 + 0x38) * *(float *)((int)fVar28 + 0x38) +
                  *(float *)((int)fVar28 + 0x3c) * *(float *)((int)fVar28 + 0x3c)) {
          fStack_2e4 = *(float *)((int)fVar28 + 0x34);
          dVar23 = (double)(fStack_2e4 * fStack_2e4 +
                            *(float *)((int)fVar28 + 0x38) * *(float *)((int)fVar28 + 0x38) +
                           *(float *)((int)fVar28 + 0x3c) * *(float *)((int)fVar28 + 0x3c));
          libm_sse2_sqrt_precise();
          goto LAB_0042e000;
        }
      }
    }
    goto LAB_0042eb01;
  }
  if ((((*(int *)((int)fVar28 + 100) != 0x68) &&
       (cVar10 = *(char *)((int)fVar28 + 0xaa9), cVar10 != '\x06')) && (cVar10 != '\a')) &&
     (cVar10 != '\b')) {
    if ((uVar4 & 0x10) == 0) {
      if ((uVar4 & 8) == 0) {
        fVar22 = (*(float *)((int)fVar28 + 0x80) + *(float *)(local_30c + 0x80)) * 3.0;
        if (local_310 < fVar22 * fVar22) {
          cVar10 = *(char *)((int)fVar28 + 0x68);
          if (((cVar10 != ';') && (cVar10 != '?')) &&
             ((cVar10 != '\b' && (*(int *)((int)fVar28 + 0x128) == 0)))) {
            iVar19 = rand();
            if (iVar19 % 10 == 0) {
              cVar10 = FUN_004445d0();
              if ((cVar10 == '\0') &&
                 (*(float *)((int)fVar28 + 0x80) <= 2.0 && *(float *)((int)fVar28 + 0x80) != 2.0)) {
                iVar19 = FUN_0043d1a0();
                if ((iVar19 <= *(int *)((int)fVar28 + 0x6c)) &&
                   ((*(byte *)((int)fVar28 + 0x5c) & 3) != 0)) {
                  uVar13 = FUN_0042c7a0(auStack_c8,iVar12);
                  FUN_0042c4a0(uVar13);
                  fVar22 = fStack_1e8 * fStack_1e8 + fStack_1ec * fStack_1ec + 0.0;
                  fVar24 = fStack_218;
                  fVar25 = fStack_21c;
                  if (0.0 < fVar22) {
                    dVar23 = (double)fVar22;
                    libm_sse2_sqrt_precise();
                    local_310 = 1.0 / (float)dVar23;
                    local_2fc = (CombatBehavior *)(fStack_1ec * local_310);
                    local_2f4 = (uint *)(fStack_1e8 * local_310);
                    local_310 = local_310 * 0.0;
                    uVar11 = rand();
                    uVar11 = uVar11 & 0x80000003;
                    if ((int)uVar11 < 0) {
                      uVar11 = (uVar11 - 1 | 0xfffffffc) + 1;
                    }
                    switch(uVar11) {
                    case 0:
                      goto LAB_0042e44d;
                    case 1:
                      goto LAB_0042e885;
                    case 2:
                      goto LAB_0042e47d;
                    case 3:
                      goto LAB_0042e4d2;
                    }
                    goto LAB_0042e525;
                  }
                  goto LAB_0042eb01;
                }
              }
            }
          }
          if ((((*(float *)((int)fVar28 + 0x170) < 0.8) &&
               (cVar10 = *(char *)((int)fVar28 + 0x68), cVar10 != ';')) && (cVar10 != '?')) &&
             (cVar10 != '\b')) goto LAB_0042e2d3;
          fVar24 = fStack_218;
          fVar25 = fStack_21c;
          if (*(int *)((int)fVar28 + 0x128) == 0) {
            iVar12 = FUN_0043d1a0();
            fVar24 = fStack_218;
            fVar25 = fStack_21c;
            if (iVar12 < *(int *)((int)fVar28 + 0x6c)) {
              if (*(char *)((int)fVar28 + 0xaa9) == '\x05') {
                *(undefined1 *)((int)fVar28 + 0x68) = 5;
                *(undefined4 *)((int)fVar28 + 0x6c) = 0;
              }
              else if ((*(char *)((int)fVar28 + 0xaa8) == '\0') ||
                      (*(char *)((int)fVar28 + 0x990) != '\0')) {
                cVar10 = *(char *)((int)fVar28 + 0x991);
                if (cVar10 == '\r') {
                  if (*(char *)((int)fVar28 + 0x68) == '\b') {
                    if (*(float *)((int)fVar28 + 0x170) <= *(float *)((int)fVar28 + 0x144)) {
                      *(undefined1 *)((int)fVar28 + 0x68) = 0x68;
                      *(undefined4 *)((int)fVar28 + 0x6c) = 0;
                      goto LAB_0042eb01;
                    }
                  }
                  else {
                    *(undefined4 *)((int)fVar28 + 0x6c) = 0;
                  }
                  *(undefined1 *)((int)fVar28 + 0x68) = 8;
                }
                else if (cVar10 == '\x03') {
                  *(undefined1 *)((int)fVar28 + 0x68) = 0x11;
                  *(undefined4 *)((int)fVar28 + 0x6c) = 0;
                }
                else if (cVar10 == '\x04') {
                  *(undefined1 *)((int)fVar28 + 0x68) = 0x14;
                  *(undefined4 *)((int)fVar28 + 0x6c) = 0;
                }
                else if (*(char *)((int)fVar28 + 0xaa8) == '\0') {
                  cVar10 = FUN_0043e5a0(0x36);
                  if (cVar10 == '\0') {
                    FUN_004456a0();
                    fVar24 = fStack_218;
                    fVar25 = fStack_21c;
                  }
                  else {
LAB_0042e615:
                    *(float *)((int)fVar28 + 0x3c) = *(float *)((int)fVar28 + 0x3c) + 20.0;
                    *(undefined1 *)((int)fVar28 + 0x68) = 0x36;
                    *(undefined4 *)((int)fVar28 + 0x6c) = 0;
                    fVar24 = fStack_218;
                    fVar25 = fStack_21c;
                  }
                }
                else if ((*(char *)((int)fVar28 + 0x68) != '?') ||
                        (*(float *)((int)fVar28 + 0x144) < *(float *)((int)fVar28 + 0x170))) {
                  cVar10 = FUN_0043e5a0(0x36);
                  if (cVar10 != '\0') goto LAB_0042e615;
                  if (*(char *)((int)fVar28 + 0x68) != '?') {
                    *(undefined4 *)((int)fVar28 + 0x6c) = 0;
                  }
                  *(undefined1 *)((int)fVar28 + 0x68) = 0x3f;
                  fVar24 = fStack_218;
                  fVar25 = fStack_21c;
                }
                else {
                  *(undefined1 *)((int)fVar28 + 0x68) = 0xb;
                  uVar13 = FUN_0043caa0(0xffffffff);
                  *(undefined4 *)((int)fVar28 + 0x6c) = uVar13;
                  fVar24 = fStack_218;
                  fVar25 = fStack_21c;
                }
              }
              else if ((*(char *)((int)fVar28 + 0x68) != ';') ||
                      (*(float *)((int)fVar28 + 0x144) < *(float *)((int)fVar28 + 0x170))) {
                cVar10 = FUN_0043e5a0(0x36);
                if (cVar10 != '\0') goto LAB_0042e615;
                if (*(char *)((int)fVar28 + 0x68) != ';') {
                  *(undefined4 *)((int)fVar28 + 0x6c) = 0;
                }
                *(undefined1 *)((int)fVar28 + 0x68) = 0x3b;
                fVar24 = fStack_218;
                fVar25 = fStack_21c;
              }
              else if (*(char *)((int)fVar28 + 0x141) == '\x01') {
                *(undefined1 *)((int)fVar28 + 0x68) = 0x3d;
                *(undefined4 *)((int)fVar28 + 0x6c) = 0;
              }
              else {
                *(undefined1 *)((int)fVar28 + 0x68) = 0x3c;
                uVar13 = FUN_0043caa0(0xffffffff);
                *(undefined4 *)((int)fVar28 + 0x6c) = uVar13;
                fVar24 = fStack_218;
                fVar25 = fStack_21c;
              }
            }
          }
        }
      }
      else {
LAB_0042e2d3:
        FUN_00445410();
        fVar24 = fStack_218;
        fVar25 = fStack_21c;
      }
    }
    else {
      iVar12 = FUN_0043d1a0();
      fVar24 = fStack_218;
      fVar25 = fStack_21c;
      if (iVar12 < *(int *)((int)fVar28 + 0x6c)) {
        if (*(int *)((int)fVar28 + 100) == 0x19) {
          cVar10 = FUN_0043e5a0(0x48);
          if (cVar10 != '\0') {
            *(undefined1 *)((int)fVar28 + 0x68) = 0x48;
            *(undefined4 *)((int)fVar28 + 0x6c) = 0;
            fVar24 = fStack_218;
            fVar25 = fStack_21c;
            goto LAB_0042eb01;
          }
        }
        *(undefined1 *)((int)fVar28 + 0x68) = 0x4b;
        *(undefined4 *)((int)fVar28 + 0x6c) = 0;
        fVar24 = fStack_218;
        fVar25 = fStack_21c;
      }
    }
    goto LAB_0042eb01;
  }
  if (3600.0 <= local_310) goto LAB_0042eb01;
  cVar10 = *(char *)((int)fVar28 + 0x68);
  if ((((cVar10 == '\x18') || (cVar10 == '\x19')) || (cVar10 == '\x1b')) ||
     (*(int *)((int)fVar28 + 0x128) != 0)) {
LAB_0042e8bf:
    if ((((*(float *)((int)fVar28 + 0x170) < 0.8) &&
         (cVar10 = *(char *)((int)fVar28 + 0x68), cVar10 != '\x18')) && (cVar10 != '\x19')) &&
       (cVar10 != '\x1b')) goto LAB_0042e2d3;
    fVar24 = fStack_218;
    fVar25 = fStack_21c;
    if (*(int *)((int)fVar28 + 0x128) == 0) {
      iVar12 = FUN_0043d1a0();
      fVar24 = fStack_218;
      fVar25 = fStack_21c;
      if (iVar12 < *(int *)((int)fVar28 + 0x6c)) {
        cVar10 = *(char *)((int)fVar28 + 0xaa8);
        if (cVar10 == '\0') {
LAB_0042e9b1:
          if (*(int *)((int)fVar28 + 100) == 0x68) {
LAB_0042e9bb:
            if (*(char *)((int)fVar28 + 0x68) == '\x19') {
              if (*(float *)((int)fVar28 + 0x170) <= *(float *)((int)fVar28 + 0x144)) {
                *(undefined1 *)((int)fVar28 + 0x68) = 0x37;
                *(undefined4 *)((int)fVar28 + 0x6c) = 0;
                goto LAB_0042eb01;
              }
            }
            else {
              *(undefined4 *)((int)fVar28 + 0x6c) = 0;
            }
            *(undefined1 *)((int)fVar28 + 0x68) = 0x19;
          }
        }
        else {
          if (*(char *)((int)fVar28 + 0xaa9) != '\a') {
            if (cVar10 == '\0') goto LAB_0042e9b1;
            if (*(char *)((int)fVar28 + 0xaa9) == '\b') {
              if (*(char *)((int)fVar28 + 0x68) == '\x1b') {
                if (*(float *)((int)fVar28 + 0x170) <= *(float *)((int)fVar28 + 0x144)) {
                  *(undefined1 *)((int)fVar28 + 0x68) = 0x1a;
                  *(undefined4 *)((int)fVar28 + 0x6c) = 0;
                  goto LAB_0042eb01;
                }
              }
              else {
                *(undefined4 *)((int)fVar28 + 0x6c) = 0;
              }
              *(undefined1 *)((int)fVar28 + 0x68) = 0x1b;
              goto LAB_0042eb01;
            }
            if ((cVar10 == '\0') || (*(char *)((int)fVar28 + 0xaa9) != '\x06')) goto LAB_0042e9b1;
            goto LAB_0042e9bb;
          }
          if (*(char *)((int)fVar28 + 0x68) == '\x18') {
            if (*(float *)((int)fVar28 + 0x170) <= *(float *)((int)fVar28 + 0x144)) {
              *(undefined1 *)((int)fVar28 + 0x68) = 0x16;
              *(undefined4 *)((int)fVar28 + 0x6c) = 0;
              goto LAB_0042eb01;
            }
          }
          else {
            *(undefined4 *)((int)fVar28 + 0x6c) = 0;
          }
          *(undefined1 *)((int)fVar28 + 0x68) = 0x18;
        }
      }
    }
    goto LAB_0042eb01;
  }
  iVar19 = rand();
  if (iVar19 % 10 != 0) goto LAB_0042e8bf;
  cVar10 = FUN_004445d0();
  if ((cVar10 != '\0') ||
     (2.0 < *(float *)((int)fVar28 + 0x80) || *(float *)((int)fVar28 + 0x80) == 2.0))
  goto LAB_0042e8bf;
  iVar19 = FUN_0043d1a0();
  if ((*(int *)((int)fVar28 + 0x6c) < iVar19) || ((*(byte *)((int)fVar28 + 0x5c) & 3) == 0))
  goto LAB_0042e8bf;
  uVar13 = FUN_0042c7a0(auStack_98,iVar12);
  FUN_0042c4a0(uVar13);
  fVar22 = fStack_200 * fStack_200 + fStack_204 * fStack_204 + 0.0;
  fVar24 = fStack_218;
  fVar25 = fStack_21c;
  if (fVar22 <= 0.0) goto LAB_0042eb01;
  dVar23 = (double)fVar22;
  libm_sse2_sqrt_precise();
  local_310 = 1.0 / (float)dVar23;
  local_2fc = (CombatBehavior *)(fStack_204 * local_310);
  local_2f4 = (uint *)(fStack_200 * local_310);
  local_310 = local_310 * 0.0;
  uVar11 = rand();
  uVar11 = uVar11 & 0x80000003;
  if ((int)uVar11 < 0) {
    uVar11 = (uVar11 - 1 | 0xfffffffc) + 1;
  }
  switch(uVar11) {
  case 0:
LAB_0042e44d:
    fVar24 = (float)local_2fc * 20.0;
    fVar25 = (float)local_2f4 * 20.0;
    *(float *)((int)fVar28 + 0x3c) = local_310 * 20.0;
    goto LAB_0042e51b;
  case 1:
LAB_0042e885:
    *(float *)((int)fVar28 + 0x34) = (float)local_2fc * -20.0;
    *(float *)((int)fVar28 + 0x38) = (float)local_2f4 * -20.0;
    *(float *)((int)fVar28 + 0x3c) = local_310 * -20.0;
    break;
  case 2:
LAB_0042e47d:
    *(float *)((int)fVar28 + 0x34) = ((float)local_2f4 - local_310 * 0.0) * 20.0;
    *(float *)((int)fVar28 + 0x38) = (local_310 * 0.0 - (float)local_2fc) * 20.0;
    *(float *)((int)fVar28 + 0x3c) = ((float)local_2fc * 0.0 - (float)local_2f4 * 0.0) * 20.0;
    break;
  case 3:
LAB_0042e4d2:
    fVar24 = ((float)local_2f4 - local_310 * 0.0) * -20.0;
    fVar25 = (local_310 * 0.0 - (float)local_2fc) * -20.0;
    *(float *)((int)fVar28 + 0x3c) = ((float)local_2fc * 0.0 - (float)local_2f4 * 0.0) * -20.0;
LAB_0042e51b:
    *(float *)((int)fVar28 + 0x38) = fVar25;
    *(float *)((int)fVar28 + 0x34) = fVar24;
  }
LAB_0042e525:
  *(float *)((int)fVar28 + 0x3c) = *(float *)((int)fVar28 + 0x3c) + 5.0;
  *(undefined4 *)((int)fVar28 + 0x128) = 600;
  fVar24 = fStack_218;
  fVar25 = fStack_21c;
LAB_0042eb01:
  *(float *)((int)fVar28 + 0x160) = fVar25;
  *(float *)((int)fVar28 + 0x164) = fVar24;
  *(int **)((int)fVar28 + 0x168) = local_318;
LAB_0042eec0:
  ExceptionList = local_14;
  __security_check_cookie(local_1c ^ (uint)auStack_31c);
  return;
  while( true ) {
    if (*(int *)((int)fVar24 + 0x1464) != 0) {
      iVar19 = *(int *)(*(int *)((int)fVar24 + 0x1460) + 4);
      piVar26 = (int *)FUN_0042f040(local_17c,(int)fVar24 + 0x1440);
      uVar30 = *(undefined8 *)(iVar19 + 8);
      iVar16 = *(int *)(iVar19 + 0x10) - piVar26[2];
      local_188._4_4_ = (int)((ulonglong)uVar30 >> 0x20);
      iVar19 = local_188._4_4_ - piVar26[1];
      local_188._0_4_ = (int)uVar30;
      iVar15 = (int)local_188 - *piVar26;
      local_188 = uVar30;
      if ((float)(iVar16 * iVar16 + iVar19 * iVar19 + iVar15 * iVar15) <=
          *(float *)((int)fVar24 + 0x80) * *(float *)((int)fVar24 + 0x80)) break;
    }
    FUN_005aaab0(fVar24);
    FUN_005a7c90(fVar24);
    iVar12 = iVar12 + 1;
    if (9 < iVar12) break;
LAB_0042ee21:
    if (0x32 < *(int *)((int)fVar24 + 0x1464)) break;
  }
  goto LAB_0042eec0;
}


/* cube::CombatBehavior::vfunction2 @ 0042efc0  kind=game  attributed-by=rtti  size=55 */

undefined4 * __thiscall cube::CombatBehavior::vfunction2(CombatBehavior *this)

{
  undefined4 *puVar1;
  
  puVar1 = operator_new(0x14);
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = &vftable;
    puVar1[1] = (this->CombatBehavior_data).offset_0x0;
    puVar1[2] = (this->CombatBehavior_data).offset_0x4;
    puVar1[3] = 0;
    puVar1[4] = 0;
    return puVar1;
  }
  return (undefined4 *)0x0;
}


