// CombatBehavior (ai) -- server. 3 functions. Bodies = Ghidra pseudo-C.
// Attribution: see ../attribution.tsv. Toolchain of the original: MSVC 11.0 (VS2012).
#include "CombatBehavior.h"

/* cube::CombatBehavior::CombatBehavior @ 004029e0  kind=game  attributed-by=rtti  size=46 */

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


/* cube::CombatBehavior::vfunction1 @ 00402f40  kind=game  attributed-by=rtti  size=9147 */

/* WARNING: Removing unreachable block (ram,0x004045c6) */
/* WARNING: Removing unreachable block (ram,0x0040436d) */

void __thiscall
cube::CombatBehavior::vfunction1
          (CombatBehavior *this,void *param_1,void *param_2,int param_3,int param_4)

{
  CombatBehavior_data *pCVar1;
  undefined8 uVar2;
  short sVar3;
  ushort uVar4;
  void *pvVar5;
  int *piVar6;
  uint uVar7;
  int *piVar9;
  char cVar10;
  int iVar11;
  undefined4 uVar12;
  uint uVar13;
  uint *puVar14;
  int iVar15;
  int iVar16;
  int *piVar17;
  undefined4 *puVar18;
  longlong *plVar19;
  float *pfVar20;
  int *piVar21;
  int iVar22;
  void *pvVar23;
  bool bVar24;
  float10 fVar25;
  float fVar26;
  double dVar27;
  float fVar28;
  float fVar29;
  int *piVar30;
  ulonglong uVar31;
  uint *puVar32;
  uint *puVar33;
  undefined1 auStack_31c [4];
  int *local_318;
  void *local_314;
  void *local_310;
  int local_30c;
  uint *local_308;
  char local_301;
  int *local_300;
  CombatBehavior *local_2fc;
  char local_2f5;
  uint *local_2f4;
  int *local_2f0;
  int *local_2ec;
  void *local_2e8;
  float fStack_2e4;
  float local_2e0;
  int iStack_2dc;
  int iStack_2d8;
  undefined4 uStack_2d4;
  float fStack_2d0;
  int local_2cc;
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
  int local_27c;
  undefined4 uStack_278;
  int local_274;
  undefined4 uStack_270;
  undefined4 uStack_26c;
  undefined4 uStack_268;
  undefined4 uStack_264;
  undefined4 uStack_260;
  int local_25c;
  undefined4 uStack_258;
  undefined4 uStack_254;
  undefined4 uStack_250;
  undefined4 uStack_24c;
  undefined4 uStack_248;
  undefined4 uStack_244;
  undefined4 uStack_240;
  undefined4 uStack_23c;
  undefined4 uStack_238;
  undefined4 uStack_234;
  undefined4 uStack_230;
  undefined4 uStack_22c;
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
  int local_17c [3];
  uint auStack_170 [6];
  uint auStack_158 [6];
  uint auStack_140 [6];
  uint auStack_128 [6];
  uint auStack_110 [6];
  uint auStack_f8 [6];
  uint auStack_e0 [6];
  uint auStack_c8 [6];
  uint auStack_b0 [6];
  uint auStack_98 [6];
  uint auStack_80 [6];
  undefined4 auStack_68 [6];
  uint auStack_50 [6];
  uint auStack_38 [7];
  uint local_1c;
  void *local_14;
  undefined1 *puStack_10;
  undefined4 uStack_c;
  uint uVar8;
  
  uStack_c = 0xffffffff;
  puStack_10 = &LAB_0054b9ac;
  local_14 = ExceptionList;
  local_1c = DAT_00583cc8 ^ (uint)auStack_31c;
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
  local_228 = CONCAT44(local_228._4_4_,(uint)local_228);
  if ((*(int *)((int)param_1 + 0x128) != 0) ||
     ((*(char *)((int)param_1 + 0x68) == 'P' &&
      (local_228 = CONCAT44(local_228._4_4_,(uint)local_228), *(int *)((int)param_1 + 0x6c) < 3000))
     )) goto LAB_004052e0;
  local_2f0 = *(int **)((int)param_1 + 0x16c);
  fVar25 = FUN_0040fda0((int)param_1);
  local_308 = (uint *)(float)fVar25;
  if (((float)local_2f0 < (float)local_308 * 0.25) &&
     (iVar11 = FUN_004084b0((int)param_1), iVar11 < *(int *)((int)param_1 + 0x6c))) {
    for (puVar18 = *(undefined4 **)((int)param_1 + 0x11dc);
        puVar18 != *(undefined4 **)((int)param_1 + 0x11e0); puVar18 = puVar18 + 3) {
      for (piVar21 = (int *)*puVar18; piVar21 != (int *)puVar18[1]; piVar21 = piVar21 + 0x47) {
        if (((*piVar21 != 0) && ((char)piVar21[1] == '\x01')) &&
           (*(char *)((int)piVar21 + 5) == '\x01')) {
          *(undefined1 *)((int)param_1 + 0x68) = 0x50;
          *(undefined4 *)((int)param_1 + 0x6c) = 0;
          FUN_00402a70((void *)((int)param_1 + 0x1e8),(undefined1 *)(piVar21 + 1));
          *piVar21 = *piVar21 + -1;
          if (*piVar21 < 1) {
            *piVar21 = 0;
            *(undefined1 *)(piVar21 + 1) = 0;
            *(undefined1 *)((int)piVar21 + 5) = 0;
          }
          iVar11 = rand();
          local_308 = (uint *)(((float)iVar11 * 4.0) / 32767.0 - 2.0);
          iVar11 = rand();
          *(uint **)((int)param_1 + 0x40) = local_308;
          *(undefined4 *)((int)param_1 + 0x48) = 0;
          *(float *)((int)param_1 + 0x44) = ((float)iVar11 * 4.0) / 32767.0 - 2.0;
          goto LAB_004052e0;
        }
      }
    }
  }
  local_228 = FUN_0040fc30((int)param_1);
  piVar21 = (int *)((int)param_2 + 4);
  local_318 = piVar21;
  FUN_00530600(piVar21,&local_25c,(uint *)&local_228);
  iVar11 = *piVar21;
  if (local_25c == iVar11) {
    local_30c = 0;
  }
  else {
    local_30c = *(int *)(local_25c + 0x18);
  }
  iVar22 = local_30c;
  if (*(char *)((int)param_1 + 0x60) == '\x05') {
    FUN_00530600(piVar21,&local_280,(uint *)((int)param_1 + 0x198));
    iVar22 = local_30c;
    if ((local_280 == iVar11) || (iVar15 = *(int *)(local_280 + 0x18), iVar15 == 0))
    goto LAB_00403256;
    iVar22 = 0;
    local_30c = 0;
    if (*(char *)(iVar15 + 0x68) == 'j') goto LAB_004052e0;
    piVar21 = *(int **)(iVar15 + 0x13ac);
    local_2bc = (int *)*piVar21;
    local_2ec = (int *)0x0;
    param_1 = local_2e8;
    if (local_2bc != piVar21) {
      do {
        local_2f0 = (int *)local_2bc[6];
        if ((float)local_2ec < (float)local_2f0) {
          local_308 = (uint *)(local_2bc + 4);
          FUN_00530600(local_318,&local_27c,local_308);
          if ((local_27c != iVar11) && (*(int *)(local_27c + 0x18) != 0)) {
            FUN_00530600(local_318,&local_274,local_308);
            if (local_274 == iVar11) {
              iVar22 = 0;
            }
            else {
              iVar22 = *(int *)(local_274 + 0x18);
            }
            local_2ec = local_2f0;
          }
        }
        FUN_00407a50((int *)&local_2bc);
        param_1 = local_2e8;
      } while (local_2bc != piVar21);
      goto LAB_00403256;
    }
LAB_0040329c:
    iVar11 = local_30c;
    local_2f0 = *(int **)((int)param_1 + 0x16c);
    fVar25 = FUN_0040fda0((int)param_1);
    local_308 = (uint *)(float)fVar25;
    if (((float)local_2f0 < (float)local_308 * 0.5) && (*(char *)((int)param_1 + 0x60) == '\x03')) {
      *(undefined1 *)((int)param_1 + 0x68) = 0x50;
      *(undefined4 *)((int)param_1 + 0x6c) = 0;
      *(undefined2 *)((int)param_1 + 0x1e8) = 0x401;
      *(undefined2 *)((int)param_1 + 0x1f8) = *(undefined2 *)((int)param_1 + 400);
      *(undefined4 *)((int)param_1 + 0x40) = 0;
      *(undefined4 *)((int)param_1 + 0x44) = 0;
      *(undefined4 *)((int)param_1 + 0x48) = 0;
      goto LAB_004052e0;
    }
  }
  else {
LAB_00403256:
    local_30c = iVar22;
    iVar11 = local_30c;
    if (local_30c == 0) goto LAB_0040329c;
  }
  pCVar1 = &local_2fc->CombatBehavior_data;
  pCVar1->offset_0x0 = pCVar1->offset_0x0 - param_3;
  uVar12 = (local_2fc->CombatBehavior_data).offset_0x0;
  if ((int)pCVar1->offset_0x0 < 0) {
    uVar12 = 0;
  }
  (local_2fc->CombatBehavior_data).offset_0x0 = uVar12;
  local_2f5 = '\0';
  for (puVar18 = (undefined4 *)**(undefined4 **)((int)param_1 + 0x1178);
      puVar18 != *(undefined4 **)((int)param_1 + 0x1178); puVar18 = (undefined4 *)*puVar18) {
    if (*(char *)(puVar18 + 2) == '\b') {
      local_2f5 = '\x01';
      break;
    }
  }
  if (iVar11 == 0) {
    if (((*(char *)((int)param_1 + 0x60) != '\x05') ||
        (*(int *)((int)param_1 + 0x198) == 0 && *(int *)((int)param_1 + 0x19c) == 0)) &&
       ((int)(local_2fc->CombatBehavior_data).offset_0xc < 1)) {
      fVar28 = (float)(local_2fc->CombatBehavior_data).offset_0x4;
      piVar30 = (int *)(fVar28 * fVar28);
      piVar21 = *(int **)*local_318;
      piVar17 = local_318;
      local_300 = piVar30;
      if (piVar21 != (int *)*local_318) {
        do {
          pvVar23 = local_2e8;
          pvVar5 = (void *)piVar21[6];
          local_314 = pvVar5;
          if (((pvVar5 != (void *)0x0) && (pvVar5 != param_1)) &&
             ((0.0 < *(float *)((int)pvVar5 + 0x16c) && (*(char *)((int)pvVar5 + 0x60) != '\x05'))))
          {
            local_2f0 = *(int **)((int)pvVar5 + 0x24);
            local_1b0 = *(uint *)((int)pvVar5 + 0x10) - *local_2f4;
            iStack_1ac = (*(int *)((int)pvVar5 + 0x14) - local_2f4[1]) -
                         (uint)(*(uint *)((int)pvVar5 + 0x10) < *local_2f4);
            local_1a8 = *(uint *)((int)pvVar5 + 0x18) - *(uint *)((int)local_2e8 + 0x18);
            iStack_1a4 = (*(int *)((int)pvVar5 + 0x1c) - *(int *)((int)local_2e8 + 0x1c)) -
                         (uint)(*(uint *)((int)pvVar5 + 0x18) < *(uint *)((int)local_2e8 + 0x18));
            local_1a0 = *(uint *)((int)pvVar5 + 0x20) - *(uint *)((int)local_2e8 + 0x20);
            iStack_19c = (int)local_2f0 +
                         (-(uint)(*(uint *)((int)pvVar5 + 0x20) < *(uint *)((int)local_2e8 + 0x20))
                         - *(int *)((int)local_2e8 + 0x24));
            local_1f8 = (float)CONCAT44(iStack_1ac,local_1b0) * 1.5258789e-05;
            local_308 = (uint *)(float)CONCAT44(iStack_19c,local_1a0);
            local_1f4 = (float)CONCAT44(iStack_1a4,local_1a8) * 1.5258789e-05;
            local_1f0 = (float)local_308 * 1.5258789e-05;
            local_2ec = (int *)(local_1f4 * local_1f4 + local_1f8 * local_1f8 +
                               local_1f0 * local_1f0);
            if (0.0 < *(float *)((int)pvVar5 + 0x1190)) {
              dVar27 = 1.5;
              libm_sse2_pow_precise();
              fVar28 = 1.0 - (float)dVar27 * *(float *)((int)pvVar5 + 0x1190);
              if (fVar28 < 0.1) {
                fVar28 = 0.1;
              }
              local_2ec = (int *)((float)local_2ec / (fVar28 * fVar28));
              piVar30 = local_300;
            }
            piVar17 = local_318;
            iVar11 = local_30c;
            param_1 = pvVar23;
            if ((local_2f5 == '\0') && ((float)local_2ec < (float)piVar30)) {
              uVar12 = FUN_004cfcc0((int)pvVar23,piVar21[6]);
              if (((char)uVar12 != '\0') ||
                 ((((piVar17 = local_318, iVar11 = local_30c, piVar30 = local_300,
                    *(char *)((int)pvVar23 + 0x60) == '\x05' &&
                    (*(int *)((int)pvVar23 + 0x198) == 0 && *(int *)((int)pvVar23 + 0x19c) == 0)) &&
                   (iVar22 = piVar21[6], *(char *)(iVar22 + 0x68) == 'R')) &&
                  ((*(char *)(iVar22 + 0x1020) == '\x14' &&
                   ((uint)*(byte *)(iVar22 + 0x1021) == *(uint *)((int)pvVar23 + 100))))))) {
                cVar10 = FUN_004d4d80((uint *)((int)pvVar23 + 0x10),(uint *)(piVar21[6] + 0x10),
                                      '\x01',200.0);
                piVar17 = local_318;
                iVar11 = local_30c;
                piVar30 = local_300;
                if (cVar10 != '\0') {
                  uVar13 = FUN_0040f710((int)pvVar23);
                  piVar17 = local_318;
                  if (((char)uVar13 == '\0') ||
                     (((iVar22 = piVar21[6], iVar11 = local_30c, piVar30 = local_300,
                       *(char *)(iVar22 + 0x68) == 'R' && (*(char *)(iVar22 + 0x1020) == '\x14')) &&
                      ((uint)*(byte *)(iVar22 + 0x1021) == *(uint *)((int)pvVar23 + 100))))) {
                    local_30c = piVar21[6];
                    local_300 = local_2ec;
                    iVar11 = local_30c;
                    piVar30 = local_2ec;
                  }
                }
              }
            }
          }
          if (*(char *)((int)piVar21 + 0xd) == '\0') {
            piVar6 = (int *)piVar21[2];
            if (*(char *)((int)piVar6 + 0xd) == '\0') {
              cVar10 = *(char *)(*piVar6 + 0xd);
              piVar21 = piVar6;
              piVar6 = (int *)*piVar6;
              while (cVar10 == '\0') {
                cVar10 = *(char *)(*piVar6 + 0xd);
                piVar21 = piVar6;
                piVar6 = (int *)*piVar6;
              }
            }
            else {
              cVar10 = *(char *)(piVar21[1] + 0xd);
              piVar9 = (int *)piVar21[1];
              piVar6 = piVar21;
              while ((piVar21 = piVar9, cVar10 == '\0' && (piVar6 == (int *)piVar21[2]))) {
                cVar10 = *(char *)(piVar21[1] + 0xd);
                piVar9 = (int *)piVar21[1];
                piVar6 = piVar21;
              }
            }
          }
        } while (piVar21 != (int *)*piVar17);
        if (iVar11 != 0) {
          puVar14 = FUN_00402b10((void *)((int)param_1 + 0x13a4),(uint *)(iVar11 + 8));
          *puVar14 = 0x3f800000;
          FUN_004d5f40(iVar11,(int)param_1,local_2cc);
          goto LAB_00403657;
        }
      }
    }
LAB_00403688:
    bVar24 = false;
  }
  else {
LAB_00403657:
    if (*(char *)((int)param_1 + 0x68) != '\0') {
      iVar22 = FUN_0040f2f0(param_1,0xffffffff);
      iVar15 = FUN_00407db0(param_1,0xffffffff);
      iVar16 = FUN_00411d60(param_1,0xffffffff);
      if (*(int *)((int)param_1 + 0x6c) <= iVar16 + iVar22 / 2 + iVar15) goto LAB_00403688;
    }
    bVar24 = true;
  }
  pvVar5 = local_2e8;
  iVar22 = local_30c;
  if (bVar24) {
    *(ushort *)((int)param_1 + 0x124) = *(ushort *)((int)param_1 + 0x124) | 0x40;
  }
  else {
    *(ushort *)((int)param_1 + 0x124) = *(ushort *)((int)param_1 + 0x124) & 0xffbf;
  }
  puVar18 = &(local_2fc->CombatBehavior_data).offset_0xc;
  *puVar18 = *puVar18 - param_3;
  uVar12 = (local_2fc->CombatBehavior_data).offset_0xc;
  if ((int)*puVar18 < 0) {
    uVar12 = 0;
  }
  (local_2fc->CombatBehavior_data).offset_0xc = uVar12;
  if (iVar11 == 0) {
    (local_2fc->CombatBehavior_data).offset_0x8 = 0;
    goto LAB_004052e0;
  }
  local_300 = (int *)(iVar11 + 0x10);
  local_1c8 = *(uint *)(iVar11 + 0x10) - *local_2f4;
  iStack_1c4 = (*(int *)(iVar11 + 0x14) - local_2f4[1]) -
               (uint)(*(uint *)(iVar11 + 0x10) < *local_2f4);
  local_1c0 = *(uint *)(iVar11 + 0x18) - *(uint *)((int)local_2e8 + 0x18);
  iStack_1bc = (*(int *)(iVar11 + 0x1c) - *(int *)((int)local_2e8 + 0x1c)) -
               (uint)(*(uint *)(iVar11 + 0x18) < *(uint *)((int)local_2e8 + 0x18));
  local_1b8 = *(uint *)(iVar11 + 0x20) - *(uint *)((int)local_2e8 + 0x20);
  iStack_1b4 = (*(int *)(iVar11 + 0x24) - *(int *)((int)local_2e8 + 0x24)) -
               (uint)(*(uint *)(iVar11 + 0x20) < *(uint *)((int)local_2e8 + 0x20));
  local_210 = (float)CONCAT44(iStack_1c4,local_1c8) * 1.5258789e-05;
  local_314 = (void *)(float)CONCAT44(iStack_1b4,local_1b8);
  local_20c = (float)CONCAT44(iStack_1bc,local_1c0) * 1.5258789e-05;
  local_2ec = (int *)((float)local_314 * 1.5258789e-05);
  local_318 = (int *)(*(float *)((int)local_2e8 + 0x80) * 2.0 + *(float *)(local_30c + 0x80));
  local_208 = local_2ec;
  local_301 = FUN_004d4d80((uint *)((int)local_2e8 + 0x10),(uint *)(local_30c + 0x10),'\x01',200.0);
  uVar12 = FUN_0040f5a0((int)pvVar5);
  if (((char)uVar12 != '\0') && (local_301 != '\0')) {
    cVar10 = *(char *)((int)pvVar5 + 0x68);
    if ((cVar10 == 'W') || ((cVar10 == 'V' || (cVar10 == 'Y')))) {
      iVar11 = FUN_00407db0(pvVar5,0xffffffff);
      if (*(int *)((int)pvVar5 + 0x6c) < iVar11) goto LAB_00403847;
    }
    local_318 = (int *)0x42480000;
  }
LAB_00403847:
  iVar11 = *(int *)((int)pvVar5 + 100);
  if ((((iVar11 == 0x2f) || (iVar11 == 0x6f)) || (iVar11 == 0x71)) || (iVar11 == 0x70)) {
    local_318 = (int *)0x41a00000;
  }
  cVar10 = *(char *)((int)pvVar5 + 0x68);
  if (((cVar10 == '_') || (cVar10 == '\x1c')) || (cVar10 == 'l')) {
    local_318 = (int *)0x42480000;
  }
  if (cVar10 == 'H') {
    local_318 = (int *)(*(float *)((int)pvVar5 + 0x80) + *(float *)(iVar22 + 0x80));
  }
  local_2f0 = (int *)0x0;
  if (((local_2fc->CombatBehavior_data).offset_0x0 == 0) &&
     (iVar11 = *(int *)((int)pvVar5 + 0x13e8), iVar11 != *(int *)((int)pvVar5 + 0x13ec))) {
    iVar15 = *(int *)((int)pvVar5 + 0x13ec);
    uVar13 = rand();
    local_2f0 = *(int **)(*(int *)((int)pvVar5 + 0x13e8) +
                         (uVar13 % (uint)(iVar15 - iVar11 >> 2)) * 4);
    if ((local_2f0 == (int *)0x5d) ||
       (((local_2f0 == (int *)0x5b || (local_2f0 == (int *)0x44)) || (local_2f0 == (int *)0x45)))) {
      local_318 = (int *)0x41a00000;
    }
    if ((local_2f0 == (int *)0x56) || (local_2f0 == (int *)0x59)) {
      local_318 = (int *)(*(float *)((int)pvVar5 + 0x80) * 2.0 + *(float *)(iVar22 + 0x80));
    }
  }
  if (local_301 == '\0') {
    local_318 = (int *)0x3f800000;
  }
  local_308 = (uint *)((float)local_318 * (float)local_318);
  fVar28 = local_20c * local_20c + local_210 * local_210;
  local_314 = (void *)((float)local_2ec * (float)local_2ec + fVar28);
  if (((float)local_308 < (float)local_314) || (local_301 == '\0')) {
    puVar18 = &(local_2fc->CombatBehavior_data).offset_0x8;
    *puVar18 = *puVar18 + param_3;
    if ((int)(local_2fc->CombatBehavior_data).offset_0x8 < 0x4e21) {
      if ((*(char *)((int)pvVar5 + 0x68) == '_') || (*(char *)((int)pvVar5 + 0x68) == '\x1c')) {
        *(undefined1 *)((int)pvVar5 + 0x68) = 0;
      }
      if ((*(byte *)((int)pvVar5 + 0x5c) & 2) == 0) {
        local_2ec = (int *)0x0;
      }
      fVar28 = (float)local_2ec * (float)local_2ec + fVar28;
      piVar21 = local_2ec;
      fVar29 = local_20c;
      fVar26 = local_210;
      if (0.0 < fVar28) {
        dVar27 = (double)fVar28;
        libm_sse2_sqrt_precise();
        fVar29 = 1.0 / (float)dVar27;
        fVar26 = fVar29 * local_210;
        piVar21 = (int *)(fVar29 * (float)local_2ec);
        fVar29 = fVar29 * local_20c;
      }
      fVar28 = 80.0;
      if (fVar29 * fVar29 + fVar26 * fVar26 + (float)piVar21 * (float)piVar21 <
          (float)local_308 * 4.0) {
        fVar28 = 40.0;
      }
      *(float *)((int)pvVar5 + 0x40) = fVar26 * fVar28;
      *(float *)((int)pvVar5 + 0x44) = fVar29 * fVar28;
      *(float *)((int)pvVar5 + 0x48) = (float)piVar21 * fVar28;
      if (local_301 != '\0') {
        cVar10 = FUN_0052ef00(local_310,(int)pvVar5,(uint *)((int)pvVar5 + 0x10),
                              (uint *)(iVar22 + 0x10),(float)local_318);
        if ((cVar10 != '\0') && ((*(byte *)((int)pvVar5 + 0x5c) & 0x20) == 0)) {
          FUN_00405330((int)pvVar5);
          goto LAB_004052e0;
        }
      }
      pfVar20 = (float *)FUN_00402b10((void *)((int)pvVar5 + 0x13a4),(uint *)(iVar22 + 8));
      *pfVar20 = *pfVar20 * 0.9;
      pvVar23 = local_310;
      if ((*(int *)((int)pvVar5 + 0x1464) == 0) && ((*(byte *)(iVar22 + 0x5c) & 7) != 0)) {
        *(undefined4 *)((int)pvVar5 + 0x1440) = *(undefined4 *)(iVar22 + 0x10);
        *(undefined4 *)((int)pvVar5 + 0x1444) = *(undefined4 *)(iVar22 + 0x14);
        *(undefined4 *)((int)pvVar5 + 0x1448) = *(undefined4 *)(iVar22 + 0x18);
        *(undefined4 *)((int)pvVar5 + 0x144c) = *(undefined4 *)(iVar22 + 0x1c);
        *(undefined4 *)((int)pvVar5 + 0x1450) = *(undefined4 *)(iVar22 + 0x20);
        *(undefined4 *)((int)pvVar5 + 0x1454) = *(undefined4 *)(iVar22 + 0x24);
        local_2e0 = (*(float *)(iVar22 + 0x88) * 0.5 - 0.1) * 65536.0;
        uVar31 = FUN_0054a946();
        puVar14 = (uint *)((int)pvVar5 + 0x1450);
        uVar13 = *puVar14;
        *puVar14 = *puVar14 - (uint)uVar31;
        *(int *)((int)pvVar5 + 0x1454) =
             (*(int *)((int)pvVar5 + 0x1454) - (int)(uVar31 >> 0x20)) -
             (uint)(uVar13 < (uint)uVar31);
        *(uint *)((int)pvVar5 + 0x1428) = *(uint *)((int)pvVar5 + 0x10);
        *(undefined4 *)((int)pvVar5 + 0x142c) = *(undefined4 *)((int)pvVar5 + 0x14);
        *(undefined4 *)((int)pvVar5 + 0x1430) = *(undefined4 *)((int)pvVar5 + 0x18);
        *(undefined4 *)((int)pvVar5 + 0x1434) = *(undefined4 *)((int)pvVar5 + 0x1c);
        *(undefined4 *)((int)pvVar5 + 0x1438) = *(undefined4 *)((int)pvVar5 + 0x20);
        *(undefined4 *)((int)pvVar5 + 0x143c) = *(undefined4 *)((int)pvVar5 + 0x24);
        local_2e0 = (*(float *)((int)pvVar5 + 0x88) * 0.5 - 0.1) * 65536.0;
        uVar31 = FUN_0054a946();
        pvVar23 = local_310;
        puVar14 = (uint *)((int)pvVar5 + 0x1438);
        uVar13 = *puVar14;
        *puVar14 = *puVar14 - (uint)uVar31;
        *(int *)((int)pvVar5 + 0x143c) =
             (*(int *)((int)pvVar5 + 0x143c) - (int)(uVar31 >> 0x20)) -
             (uint)(uVar13 < (uint)uVar31);
        *(float *)((int)pvVar5 + 0x1458) =
             *(float *)((int)pvVar5 + 0x80) + *(float *)(iVar22 + 0x80);
        FUN_004dd2e0(local_310,pvVar5);
      }
      if (*(int *)((int)pvVar5 + 0x1410) != 0) {
        iVar11 = 0;
        piVar21 = (int *)((int)pvVar5 + 0x1428);
        do {
          if ((*piVar21 != piVar21[6]) || (piVar21[1] != piVar21[7])) {
            iVar11 = 0;
            goto LAB_00405241;
          }
          iVar11 = iVar11 + 1;
          piVar21 = piVar21 + 2;
        } while (iVar11 < 3);
      }
    }
    else {
      local_2f0 = (int *)((int)pvVar5 + 0x13a4);
      piVar21 = *(int **)(*(int *)((int)pvVar5 + 0x13a4) + 4);
      cVar10 = *(char *)((int)piVar21 + 0xd);
      while (cVar10 == '\0') {
        FUN_004f7c20((int *)piVar21[2]);
        piVar17 = (int *)*piVar21;
        operator_delete(piVar21);
        piVar21 = piVar17;
        pvVar5 = local_2e8;
        cVar10 = *(char *)((int)piVar17 + 0xd);
      }
      *(int *)(*local_2f0 + 4) = *local_2f0;
      *(int *)*local_2f0 = *local_2f0;
      *(int *)(*local_2f0 + 8) = *local_2f0;
      local_2f0[1] = 0;
      FUN_00405330((int)pvVar5);
      (local_2fc->CombatBehavior_data).offset_0xc = 3000;
      (local_2fc->CombatBehavior_data).offset_0x8 = 0;
    }
    goto LAB_004052e0;
  }
  (local_2fc->CombatBehavior_data).offset_0x8 = 0;
  FUN_00405330((int)pvVar5);
  pvVar23 = local_2e8;
  *(undefined4 *)((int)pvVar5 + 0x13e0) = 0;
  *(undefined4 *)((int)pvVar5 + 0x40) = 0;
  *(undefined4 *)((int)pvVar5 + 0x44) = 0;
  *(undefined4 *)((int)pvVar5 + 0x48) = 0;
  if ((((((local_2f5 == '\0') && (*(char *)(iVar22 + 0x68) == 'R')) &&
        (*(char *)(iVar22 + 0x1020) == '\x14')) &&
       ((uint)*(byte *)(iVar22 + 0x1021) == *(uint *)((int)pvVar5 + 100))) &&
      ((*(char *)((int)pvVar5 + 0x60) != '\x05' ||
       (*(int *)((int)pvVar5 + 0x198) == 0 && *(int *)((int)pvVar5 + 0x19c) == 0)))) &&
     ((float)local_314 <= (float)local_308)) {
    *(undefined4 *)((int)pvVar5 + 0x11d0) = *(undefined4 *)(iVar22 + 8);
    *(undefined4 *)((int)pvVar5 + 0x11d4) = *(undefined4 *)(iVar22 + 0xc);
    iVar11 = FUN_004084b0((int)pvVar5);
    if (iVar11 < *(int *)((int)pvVar5 + 0x6c)) {
      if (*(char *)((int)pvVar5 + 0x68) != 'n') {
        *(undefined4 *)((int)pvVar5 + 0x70) = 0;
      }
      if (*(int *)((int)pvVar5 + 0x70) < 5) {
        *(undefined1 *)((int)pvVar5 + 0x68) = 0x6e;
        *(undefined4 *)((int)pvVar5 + 0x6c) = 0;
      }
      else {
        local_301 = '\0';
        FUN_004029b0((undefined1 *)&uStack_2a0);
        piVar21 = *(int **)((int)pvVar5 + 0x1178);
        piVar17 = (int *)*piVar21;
        cVar10 = local_301;
        if (piVar17 != piVar21) {
          do {
            if ((char)piVar17[2] == '\a') {
              uStack_2a0 = *(ulonglong *)(piVar17 + 2);
              uStack_298 = *(ulonglong *)(piVar17 + 4);
              uStack_290 = *(undefined8 *)(piVar17 + 6);
              cVar10 = '\x01';
            }
            piVar17 = (int *)*piVar17;
          } while (piVar17 != piVar21);
          iVar22 = local_30c;
          if (cVar10 != '\0') {
            uStack_298 = uStack_298 & 0xffffffff00000000;
            uStack_2a0 = uStack_2a0 & 0xffffffff;
            FUN_004ce9f0(pvVar5,(char *)&uStack_2a0,local_2cc);
          }
        }
        uStack_290 = *(undefined8 *)(iVar22 + 8);
        uStack_2a0 = CONCAT71(uStack_2a0._1_7_,8);
        uStack_298 = CONCAT44(uStack_298._4_4_,20000);
        uStack_2a0 = uStack_2a0 & 0xffffffff;
        FUN_004ce9f0(pvVar5,(char *)&uStack_2a0,local_2cc);
      }
    }
    goto LAB_004052e0;
  }
  iStack_1e0 = *(uint *)(iVar22 + 0x10) - *local_2f4;
  iStack_1dc = (*(int *)(iVar22 + 0x14) - local_2f4[1]) -
               (uint)(*(uint *)(iVar22 + 0x10) < *local_2f4);
  iStack_1d8 = *(uint *)(iVar22 + 0x18) - *(uint *)((int)local_2e8 + 0x18);
  iStack_1d4 = (*(int *)(iVar22 + 0x1c) - *(int *)((int)local_2e8 + 0x1c)) -
               (uint)(*(uint *)(iVar22 + 0x18) < *(uint *)((int)local_2e8 + 0x18));
  iStack_1d0 = *(uint *)(iVar22 + 0x20) - *(uint *)((int)local_2e8 + 0x20);
  iStack_1cc = (*(int *)(iVar22 + 0x24) - *(int *)((int)local_2e8 + 0x24)) -
               (uint)(*(uint *)(iVar22 + 0x20) < *(uint *)((int)local_2e8 + 0x20));
  puVar14 = (uint *)((int)local_2e8 + 0x10);
  fStack_21c = (float)CONCAT44(iStack_1dc,iStack_1e0) * 1.5258789e-05;
  local_314 = (void *)(float)CONCAT44(iStack_1cc,iStack_1d0);
  fStack_218 = (float)CONCAT44(iStack_1d4,iStack_1d8) * 1.5258789e-05;
  *(ushort *)((int)local_2e8 + 0x124) = *(ushort *)((int)local_2e8 + 0x124) | 4;
  local_318 = (int *)((float)local_314 * 1.5258789e-05);
  local_310 = (void *)(fStack_218 * fStack_218 + fStack_21c * fStack_21c +
                      (float)local_318 * (float)local_318);
  piStack_214 = local_318;
  if (local_2f0 != (int *)0x0) {
    (local_2fc->CombatBehavior_data).offset_0x0 = 20000;
    *(char *)((int)local_2e8 + 0x68) = (char)local_2f0;
    *(undefined4 *)((int)local_2e8 + 0x6c) = 0;
    fVar28 = fStack_218;
    fVar29 = fStack_21c;
    goto LAB_00404f21;
  }
  iVar11 = *(int *)((int)local_2e8 + 100);
  if (iVar11 == 0x74) {
    iVar11 = FUN_004084b0((int)local_2e8);
    fVar28 = fStack_218;
    fVar29 = fStack_21c;
    if (iVar11 < *(int *)((int)pvVar23 + 0x6c)) {
      pvStack_2ac = (void *)0x0;
      iStack_2a8 = 0;
      uStack_2a4 = 0;
      uStack_c = 0;
      uStack_244 = 0x45;
      FUN_004f2be0(&pvStack_2ac,&uStack_244);
      uStack_23c = 0x4a;
      FUN_004f2be0(&pvStack_2ac,&uStack_23c);
      uStack_234 = 0x49;
      FUN_004f2be0(&pvStack_2ac,&uStack_234);
      uVar13 = rand();
      *(undefined1 *)((int)pvVar23 + 0x68) =
           *(undefined1 *)
            ((int)pvStack_2ac + (uVar13 % (uint)(iStack_2a8 - (int)pvStack_2ac >> 2)) * 4);
      *(undefined4 *)((int)pvVar23 + 0x6c) = 0;
      fVar28 = fStack_218;
      fVar29 = fStack_21c;
      if (pvStack_2ac != (void *)0x0) {
        operator_delete(pvStack_2ac);
        fVar28 = fStack_218;
        fVar29 = fStack_21c;
      }
    }
    goto LAB_00404f21;
  }
  if (iVar11 == 0x76) {
    iVar11 = FUN_004084b0((int)local_2e8);
    if (iVar11 < *(int *)((int)pvVar23 + 0x6c)) {
      iStack_2c8 = 0;
      iStack_2c4 = 0;
      uStack_2c0 = 0;
      uStack_c = 1;
      uStack_22c = 7;
      FUN_004f2be0(&iStack_2c8,&uStack_22c);
      uStack_24c = 6;
      FUN_004f2be0(&iStack_2c8,&uStack_24c);
      uStack_250 = 0x14;
      FUN_004f2be0(&iStack_2c8,&uStack_250);
      if (*(short *)((int)pvVar23 + 0x8c) == 0x86a) {
        uStack_278 = 0x5f;
        puVar18 = &uStack_278;
      }
      else {
        uStack_230 = 0x56;
        puVar18 = &uStack_230;
      }
      FUN_004f2be0(&iStack_2c8,puVar18);
      iVar11 = iStack_2c8;
      iVar22 = iStack_2c4 - iStack_2c8;
      uVar13 = rand();
      pvVar23 = local_2e8;
      uStack_c = 0xffffffff;
      *(undefined1 *)((int)local_2e8 + 0x68) =
           *(undefined1 *)(iVar11 + (uVar13 % (uint)(iVar22 >> 2)) * 4);
      *(undefined4 *)((int)local_2e8 + 0x6c) = 0;
      FUN_0042f440(&iStack_2c8);
    }
    fVar28 = fStack_218;
    fVar29 = fStack_21c;
    if (*(char *)((int)pvVar23 + 0x68) == '_') {
      puVar14 = (uint *)FUN_00411800(pvVar23,auStack_b0);
      puVar14 = FUN_00402c50(local_300,auStack_158,puVar14);
      FUN_00402550(&fStack_21c,(longlong *)puVar14);
      local_318 = piStack_214;
      fVar28 = fStack_218;
      fVar29 = fStack_21c;
    }
    goto LAB_00404f21;
  }
  if (((iVar11 == 0x2f) || (iVar11 == 0x6f)) || ((iVar11 == 0x71 || (iVar11 == 0x70)))) {
    iVar11 = FUN_004084b0((int)local_2e8);
    fVar28 = fStack_218;
    fVar29 = fStack_21c;
    if (iVar11 < *(int *)((int)pvVar23 + 0x6c)) {
      iStack_2b8 = 0;
      iStack_2b4 = 0;
      uStack_2b0 = 0;
      uStack_c = 2;
      uStack_26c = 0x6c;
      FUN_004f2be0(&iStack_2b8,&uStack_26c);
      uStack_264 = 0x36;
      FUN_004f2be0(&iStack_2b8,&uStack_264);
      local_2e0 = 1.06499e-43;
      FUN_004f2be0(&iStack_2b8,&local_2e0);
      uVar13 = rand();
      cVar10 = *(char *)(iStack_2b8 + (uVar13 % (uint)(iStack_2b4 - iStack_2b8 >> 2)) * 4);
      *(char *)((int)pvVar23 + 0x68) = cVar10;
      *(undefined4 *)((int)pvVar23 + 0x6c) = 0;
      if (cVar10 == '6') {
        uVar13 = 0x20000;
        iVar11 = 0;
        puVar18 = auStack_68;
        puVar14 = FUN_00402c50(local_300,auStack_38,(uint *)((int)pvVar23 + 0x10));
        plVar19 = (longlong *)FUN_00402bd0(puVar14,puVar18,uVar13,iVar11);
        FUN_00402550((void *)((int)pvVar23 + 0x34),plVar19);
        *(undefined4 *)((int)pvVar23 + 0x3c) = 0x41700000;
      }
      piVar21 = &iStack_2b8;
LAB_00404f0a:
      FUN_0042f440(piVar21);
      fVar28 = fStack_218;
      fVar29 = fStack_21c;
    }
    goto LAB_00404f21;
  }
  if (iVar11 == 0x77) {
    iVar11 = FUN_004084b0((int)local_2e8);
    fVar28 = fStack_218;
    fVar29 = fStack_21c;
    if (iVar11 < *(int *)((int)pvVar23 + 0x6c)) {
      iStack_2dc = 0;
      iStack_2d8 = 0;
      uStack_2d4 = 0;
      sVar3 = *(short *)((int)pvVar23 + 0x8c);
      uStack_c = 3;
      if (((sVar3 == 0x863) || (sVar3 == 0x864)) || (sVar3 == 0x865)) {
        uStack_248 = 0x45;
        puVar18 = &uStack_248;
      }
      else {
        uStack_270 = 0x44;
        puVar18 = &uStack_270;
      }
      FUN_004f2be0(&iStack_2dc,puVar18);
      if ((*(short *)((int)pvVar23 + 0x96) == 0x867) || (*(short *)((int)pvVar23 + 0x96) == 0x868))
      {
        uStack_268 = 0x46;
        FUN_004f2be0(&iStack_2dc,&uStack_268);
      }
      if ((*(short *)((int)pvVar23 + 0x90) == 0x85f) || (*(short *)((int)pvVar23 + 0x90) == 0x860))
      {
        uStack_260 = 0x4b;
        puVar18 = &uStack_260;
      }
      else {
        uStack_238 = 0x4a;
        puVar18 = &uStack_238;
      }
      FUN_004f2be0(&iStack_2dc,puVar18);
      if ((*(short *)((int)pvVar23 + 0x94) == 0x85c) || (*(short *)((int)pvVar23 + 0x94) == 0x85d))
      {
        uStack_240 = 0x4d;
        FUN_004f2be0(&iStack_2dc,&uStack_240);
        uStack_258 = 0x4e;
        FUN_004f2be0(&iStack_2dc,&uStack_258);
      }
      sVar3 = *(short *)((int)pvVar23 + 0x94);
      if ((((sVar3 == 0x857) || (sVar3 == 0x858)) || (sVar3 == 0x859)) ||
         ((sVar3 == 0x85a || (sVar3 == 0x85b)))) {
        uStack_254 = 0x4c;
        FUN_004f2be0(&iStack_2dc,&uStack_254);
      }
      if (((*(char *)((int)pvVar23 + 0x68) != 'G') && (*(char *)((int)pvVar23 + 0x68) != 'H')) &&
         (*(short *)((int)pvVar23 + 0x94) == 0x855)) {
        uVar13 = rand();
        uVar13 = uVar13 & 0x80000001;
        bVar24 = uVar13 == 0;
        if ((int)uVar13 < 0) {
          bVar24 = (uVar13 - 1 | 0xfffffffe) == 0xffffffff;
        }
        if (!bVar24) {
          uStack_284 = 0x47;
          FUN_004f2be0(&iStack_2dc,&uStack_284);
        }
      }
      if (((*(char *)((int)pvVar23 + 0x68) != 'G') && (*(char *)((int)pvVar23 + 0x68) != 'H')) &&
         (*(short *)((int)pvVar23 + 0x94) == 0x856)) {
        uVar13 = rand();
        uVar13 = uVar13 & 0x80000001;
        bVar24 = uVar13 == 0;
        if ((int)uVar13 < 0) {
          bVar24 = (uVar13 - 1 | 0xfffffffe) == 0xffffffff;
        }
        if (!bVar24) {
          fStack_2d0 = 1.00893e-43;
          FUN_004f2be0(&iStack_2dc,&fStack_2d0);
        }
      }
      if (*(char *)((int)pvVar23 + 0x68) != 'I') {
        fStack_2e4 = 1.02295e-43;
        FUN_004f2be0(&iStack_2dc,&fStack_2e4);
      }
      iVar11 = iStack_2d8;
      if (iStack_2dc != iStack_2d8) {
        uVar13 = rand();
        *(undefined1 *)((int)pvVar23 + 0x68) =
             *(undefined1 *)(iStack_2dc + (uVar13 % (uint)(iVar11 - iStack_2dc >> 2)) * 4);
        *(undefined4 *)((int)pvVar23 + 0x6c) = 0;
      }
      piVar21 = &iStack_2dc;
      goto LAB_00404f0a;
    }
    goto LAB_00404f21;
  }
  uVar12 = FUN_0040f690((int)local_2e8);
  fVar28 = fStack_218;
  fVar29 = fStack_21c;
  if ((char)uVar12 != '\0') {
    if (3600.0 <= (float)local_310) goto LAB_00404f21;
    if (*(float *)((int)pvVar23 + 0x170) <= 0.5) {
LAB_004041dc:
      FUN_00410400((int)pvVar23);
    }
    else {
      uVar13 = rand();
      uVar13 = uVar13 & 0x80000001;
      bVar24 = uVar13 == 0;
      if ((int)uVar13 < 0) {
        bVar24 = (uVar13 - 1 | 0xfffffffe) == 0xffffffff;
      }
      if (bVar24) goto LAB_004041dc;
      FUN_00410690((int)pvVar23);
    }
    cVar10 = *(char *)((int)pvVar23 + 0x68);
    if (((cVar10 == '\x1e') || (cVar10 == '\x1f')) || ((cVar10 == ' ' || (cVar10 == '!')))) {
      iVar11 = FUN_00407db0(pvVar23,0xffffffff);
      if (iVar11 < *(int *)((int)pvVar23 + 0x6c) - param_3) {
        puVar14 = FUN_00402c50((void *)((int)pvVar23 + 0x1320),auStack_110,puVar14);
        FUN_00402550(&fStack_21c,(longlong *)puVar14);
        local_318 = piStack_214;
      }
      else {
        FUN_00402a40((void *)((int)pvVar23 + 0x1320),(undefined4 *)(local_30c + 0x1350));
      }
    }
    fVar28 = fStack_218;
    fVar29 = fStack_21c;
    if ((*(char *)((int)pvVar23 + 0x68) == '\x1c') && (25.0 < (float)local_310)) {
      fStack_2e4 = (float)*(int *)((int)pvVar23 + 0x6c) * 0.005;
      dVar27 = (double)fStack_2e4;
      libm_sse2_cos_precise();
      fStack_2d0 = (float)dVar27 * 1.5 + fStack_21c;
      dVar27 = (double)fStack_2e4;
      libm_sse2_sin_precise();
      fVar28 = (float)dVar27 * 1.5 + fStack_218;
      fVar29 = fStack_2d0;
    }
    goto LAB_00404f21;
  }
  if (*(int *)((int)pvVar23 + 100) == 0x65) {
    if (64.0 <= (float)local_310) {
      if ((float)local_310 < 3600.0) {
        iVar11 = FUN_004084b0((int)pvVar23);
        fVar28 = fStack_218;
        fVar29 = fStack_21c;
        if (iVar11 < *(int *)((int)pvVar23 + 0x6c)) {
          *(undefined4 *)((int)pvVar23 + 0x6c) = 0;
          *(undefined1 *)((int)pvVar23 + 0x68) = 0x25;
          fStack_18c = *(float *)(local_30c + 0x88) * 0.4;
          uStack_194 = 0;
          uStack_190 = 0;
          FUN_00402510((int)auStack_170);
          puVar33 = auStack_170;
          puVar32 = auStack_80;
          puVar14 = FUN_00402c50(local_300,auStack_140,puVar14);
          puVar14 = FUN_00402cb0(puVar14,puVar32,puVar33);
          FUN_00402550((void *)((int)pvVar23 + 0x160),(longlong *)puVar14);
          fVar28 = fStack_218;
          fVar29 = fStack_21c;
        }
      }
    }
    else {
      puVar14 = FUN_00402c50(local_300,auStack_50,puVar14);
      FUN_00402550((void *)((int)pvVar23 + 0x160),(longlong *)puVar14);
      *(ushort *)((int)pvVar23 + 0x124) = *(ushort *)((int)pvVar23 + 0x124) | 4;
      fVar28 = fStack_218;
      fVar29 = fStack_21c;
      if (2000 < *(int *)((int)pvVar23 + 0x6c)) {
        uVar13 = rand();
        uVar13 = uVar13 & 0x80000001;
        bVar24 = uVar13 == 0;
        if ((int)uVar13 < 0) {
          bVar24 = (uVar13 - 1 | 0xfffffffe) == 0xffffffff;
        }
        if (!bVar24) {
          uVar13 = *(uint *)((int)pvVar23 + 0x20);
          uVar7 = *(uint *)(local_30c + 0x20);
          uVar8 = *(uint *)(local_30c + 0x20);
          iVar11 = *(int *)((int)pvVar23 + 0x24);
          iVar22 = *(int *)(local_30c + 0x24);
          uVar31 = FUN_0054a946();
          if (CONCAT44((iVar11 - iVar22) - (uint)(uVar13 < uVar7),uVar13 - uVar8) <=
              (longlong)uVar31) {
            *(undefined4 *)((int)pvVar23 + 0x3c) = 0x41f00000;
            fVar28 = fStack_218;
            fVar29 = fStack_21c;
            goto LAB_00404f21;
          }
        }
        *(undefined4 *)((int)pvVar23 + 0x6c) = 0;
        *(undefined1 *)((int)pvVar23 + 0x68) = 0x33;
        puVar14 = FUN_00402c50(local_300,auStack_e0,(uint *)((int)pvVar23 + 0x10));
        FUN_00402550((void *)((int)pvVar23 + 0x34),(longlong *)puVar14);
        fVar28 = fStack_218;
        fVar29 = fStack_21c;
        if (0.0 < *(float *)((int)pvVar23 + 0x34) * *(float *)((int)pvVar23 + 0x34) +
                  *(float *)((int)pvVar23 + 0x38) * *(float *)((int)pvVar23 + 0x38) +
                  *(float *)((int)pvVar23 + 0x3c) * *(float *)((int)pvVar23 + 0x3c)) {
          fStack_2e4 = *(float *)((int)pvVar23 + 0x34);
          dVar27 = (double)(fStack_2e4 * fStack_2e4 +
                            *(float *)((int)pvVar23 + 0x38) * *(float *)((int)pvVar23 + 0x38) +
                           *(float *)((int)pvVar23 + 0x3c) * *(float *)((int)pvVar23 + 0x3c));
          libm_sse2_sqrt_precise();
LAB_00404420:
          fVar28 = 1.0 / (float)dVar27;
          *(float *)((int)pvVar23 + 0x34) = fStack_2e4 * fVar28;
          *(float *)((int)pvVar23 + 0x38) = *(float *)((int)pvVar23 + 0x38) * fVar28;
          *(float *)((int)pvVar23 + 0x3c) = *(float *)((int)pvVar23 + 0x3c) * fVar28;
          *(float *)((int)pvVar23 + 0x34) = *(float *)((int)pvVar23 + 0x34) * 10.0;
          *(float *)((int)pvVar23 + 0x38) = *(float *)((int)pvVar23 + 0x38) * 10.0;
          *(float *)((int)pvVar23 + 0x3c) = *(float *)((int)pvVar23 + 0x3c) * 10.0;
          fVar28 = fStack_218;
          fVar29 = fStack_21c;
        }
      }
    }
    goto LAB_00404f21;
  }
  uVar4 = *(ushort *)((int)pvVar23 + 0x7e);
  if (((uVar4 & 2) != 0) && ((uVar4 & 0x10) != 0)) {
    *(ushort *)((int)pvVar23 + 0x124) = *(ushort *)((int)pvVar23 + 0x124) & 0xfffb;
    if ((float)local_310 < 64.0) {
      puVar14 = FUN_00402c50(local_300,auStack_128,puVar14);
      FUN_00402550((void *)((int)pvVar23 + 0x160),(longlong *)puVar14);
      *(ushort *)((int)pvVar23 + 0x124) = *(ushort *)((int)pvVar23 + 0x124) | 4;
      fVar28 = fStack_218;
      fVar29 = fStack_21c;
      if (2000 < *(int *)((int)pvVar23 + 0x6c)) {
        uVar13 = rand();
        uVar13 = uVar13 & 0x80000001;
        bVar24 = uVar13 == 0;
        if ((int)uVar13 < 0) {
          bVar24 = (uVar13 - 1 | 0xfffffffe) == 0xffffffff;
        }
        if (!bVar24) {
          uVar13 = *(uint *)((int)pvVar23 + 0x20);
          uVar7 = *(uint *)(local_30c + 0x20);
          uVar8 = *(uint *)(local_30c + 0x20);
          iVar11 = *(int *)((int)pvVar23 + 0x24);
          iVar22 = *(int *)(local_30c + 0x24);
          uVar31 = FUN_0054a946();
          if (CONCAT44((iVar11 - iVar22) - (uint)(uVar13 < uVar7),uVar13 - uVar8) <=
              (longlong)uVar31) {
            *(undefined4 *)((int)pvVar23 + 0x3c) = 0x40a00000;
            fVar28 = fStack_218;
            fVar29 = fStack_21c;
            goto LAB_00404f21;
          }
        }
        *(undefined4 *)((int)pvVar23 + 0x6c) = 0;
        *(undefined1 *)((int)pvVar23 + 0x68) = 0x33;
        puVar14 = FUN_00402c50(local_300,auStack_f8,(uint *)((int)pvVar23 + 0x10));
        FUN_00402550((void *)((int)pvVar23 + 0x34),(longlong *)puVar14);
        fVar28 = fStack_218;
        fVar29 = fStack_21c;
        if (0.0 < *(float *)((int)pvVar23 + 0x34) * *(float *)((int)pvVar23 + 0x34) +
                  *(float *)((int)pvVar23 + 0x38) * *(float *)((int)pvVar23 + 0x38) +
                  *(float *)((int)pvVar23 + 0x3c) * *(float *)((int)pvVar23 + 0x3c)) {
          fStack_2e4 = *(float *)((int)pvVar23 + 0x34);
          dVar27 = (double)(fStack_2e4 * fStack_2e4 +
                            *(float *)((int)pvVar23 + 0x38) * *(float *)((int)pvVar23 + 0x38) +
                           *(float *)((int)pvVar23 + 0x3c) * *(float *)((int)pvVar23 + 0x3c));
          libm_sse2_sqrt_precise();
          goto LAB_00404420;
        }
      }
    }
    goto LAB_00404f21;
  }
  if ((((*(int *)((int)pvVar23 + 100) != 0x68) &&
       (cVar10 = *(char *)((int)pvVar23 + 0xaa9), cVar10 != '\x06')) && (cVar10 != '\a')) &&
     (cVar10 != '\b')) {
    if ((uVar4 & 0x10) == 0) {
      if ((uVar4 & 8) == 0) {
        fVar26 = (*(float *)((int)pvVar23 + 0x80) + *(float *)(local_30c + 0x80)) * 3.0;
        if ((float)local_310 < fVar26 * fVar26) {
          cVar10 = *(char *)((int)pvVar23 + 0x68);
          if (((cVar10 != ';') && (cVar10 != '?')) &&
             ((cVar10 != '\b' && (*(int *)((int)pvVar23 + 0x128) == 0)))) {
            iVar11 = rand();
            if (iVar11 % 10 == 0) {
              iVar11 = FUN_0040f650((int)pvVar23);
              if (((char)iVar11 == '\0') &&
                 (*(float *)((int)pvVar23 + 0x80) <= 2.0 && *(float *)((int)pvVar23 + 0x80) != 2.0))
              {
                iVar11 = FUN_004084b0((int)pvVar23);
                if ((iVar11 <= *(int *)((int)pvVar23 + 0x6c)) &&
                   ((*(byte *)((int)pvVar23 + 0x5c) & 3) != 0)) {
                  puVar14 = FUN_00402c50(local_300,auStack_c8,puVar14);
                  FUN_00402550(&fStack_1ec,(longlong *)puVar14);
                  fVar26 = fStack_1e8 * fStack_1e8 + fStack_1ec * fStack_1ec + 0.0;
                  fVar28 = fStack_218;
                  fVar29 = fStack_21c;
                  if (0.0 < fVar26) {
                    dVar27 = (double)fVar26;
                    libm_sse2_sqrt_precise();
                    fVar28 = 1.0 / (float)dVar27;
                    local_2fc = (CombatBehavior *)(fStack_1ec * fVar28);
                    local_2f4 = (uint *)(fStack_1e8 * fVar28);
                    local_310 = (void *)(fVar28 * 0.0);
                    uVar13 = rand();
                    uVar13 = uVar13 & 0x80000003;
                    if ((int)uVar13 < 0) {
                      uVar13 = (uVar13 - 1 | 0xfffffffc) + 1;
                    }
                    switch(uVar13) {
                    case 0:
                      goto switchD_00404866_caseD_0;
                    case 1:
                      goto switchD_00404866_caseD_1;
                    case 2:
                      goto switchD_00404866_caseD_2;
                    case 3:
                      goto switchD_00404866_caseD_3;
                    }
                    goto switchD_00404866_default;
                  }
                  goto LAB_00404f21;
                }
              }
            }
          }
          if ((((*(float *)((int)pvVar23 + 0x170) < 0.8) &&
               (cVar10 = *(char *)((int)pvVar23 + 0x68), cVar10 != ';')) && (cVar10 != '?')) &&
             (cVar10 != '\b')) goto LAB_004046f3;
          fVar28 = fStack_218;
          fVar29 = fStack_21c;
          if (*(int *)((int)pvVar23 + 0x128) == 0) {
            iVar11 = FUN_004084b0((int)pvVar23);
            fVar28 = fStack_218;
            fVar29 = fStack_21c;
            if (iVar11 < *(int *)((int)pvVar23 + 0x6c)) {
              if (*(char *)((int)pvVar23 + 0xaa9) == '\x05') {
                *(undefined1 *)((int)pvVar23 + 0x68) = 5;
                *(undefined4 *)((int)pvVar23 + 0x6c) = 0;
              }
              else if ((*(char *)((int)pvVar23 + 0xaa8) == '\0') ||
                      (*(char *)((int)pvVar23 + 0x990) != '\0')) {
                cVar10 = *(char *)((int)pvVar23 + 0x991);
                if (cVar10 == '\r') {
                  if (*(char *)((int)pvVar23 + 0x68) == '\b') {
                    if (*(float *)((int)pvVar23 + 0x170) <= *(float *)((int)pvVar23 + 0x144)) {
                      *(undefined1 *)((int)pvVar23 + 0x68) = 0x68;
                      *(undefined4 *)((int)pvVar23 + 0x6c) = 0;
                      goto LAB_00404f21;
                    }
                  }
                  else {
                    *(undefined4 *)((int)pvVar23 + 0x6c) = 0;
                  }
                  *(undefined1 *)((int)pvVar23 + 0x68) = 8;
                }
                else if (cVar10 == '\x03') {
                  *(undefined1 *)((int)pvVar23 + 0x68) = 0x11;
                  *(undefined4 *)((int)pvVar23 + 0x6c) = 0;
                }
                else if (cVar10 == '\x04') {
                  *(undefined1 *)((int)pvVar23 + 0x68) = 0x14;
                  *(undefined4 *)((int)pvVar23 + 0x6c) = 0;
                }
                else if (*(char *)((int)pvVar23 + 0xaa8) == '\0') {
                  bVar24 = FUN_004096b0(pvVar23,0x36);
                  if (bVar24) {
LAB_00404a35:
                    *(float *)((int)pvVar23 + 0x3c) = *(float *)((int)pvVar23 + 0x3c) + 20.0;
                    *(undefined1 *)((int)pvVar23 + 0x68) = 0x36;
                    *(undefined4 *)((int)pvVar23 + 0x6c) = 0;
                    fVar28 = fStack_218;
                    fVar29 = fStack_21c;
                  }
                  else {
                    FUN_00410690((int)pvVar23);
                    fVar28 = fStack_218;
                    fVar29 = fStack_21c;
                  }
                }
                else if ((*(char *)((int)pvVar23 + 0x68) != '?') ||
                        (*(float *)((int)pvVar23 + 0x144) < *(float *)((int)pvVar23 + 0x170))) {
                  bVar24 = FUN_004096b0(pvVar23,0x36);
                  if (bVar24) goto LAB_00404a35;
                  if (*(char *)((int)pvVar23 + 0x68) != '?') {
                    *(undefined4 *)((int)pvVar23 + 0x6c) = 0;
                  }
                  *(undefined1 *)((int)pvVar23 + 0x68) = 0x3f;
                  fVar28 = fStack_218;
                  fVar29 = fStack_21c;
                }
                else {
                  *(undefined1 *)((int)pvVar23 + 0x68) = 0xb;
                  iVar11 = FUN_00407db0(pvVar23,0xffffffff);
                  *(int *)((int)pvVar23 + 0x6c) = iVar11;
                  fVar28 = fStack_218;
                  fVar29 = fStack_21c;
                }
              }
              else if ((*(char *)((int)pvVar23 + 0x68) != ';') ||
                      (*(float *)((int)pvVar23 + 0x144) < *(float *)((int)pvVar23 + 0x170))) {
                bVar24 = FUN_004096b0(pvVar23,0x36);
                if (bVar24) goto LAB_00404a35;
                if (*(char *)((int)pvVar23 + 0x68) != ';') {
                  *(undefined4 *)((int)pvVar23 + 0x6c) = 0;
                }
                *(undefined1 *)((int)pvVar23 + 0x68) = 0x3b;
                fVar28 = fStack_218;
                fVar29 = fStack_21c;
              }
              else if (*(char *)((int)pvVar23 + 0x141) == '\x01') {
                *(undefined1 *)((int)pvVar23 + 0x68) = 0x3d;
                *(undefined4 *)((int)pvVar23 + 0x6c) = 0;
              }
              else {
                *(undefined1 *)((int)pvVar23 + 0x68) = 0x3c;
                iVar11 = FUN_00407db0(pvVar23,0xffffffff);
                *(int *)((int)pvVar23 + 0x6c) = iVar11;
                fVar28 = fStack_218;
                fVar29 = fStack_21c;
              }
            }
          }
        }
      }
      else {
LAB_004046f3:
        FUN_00410400((int)pvVar23);
        fVar28 = fStack_218;
        fVar29 = fStack_21c;
      }
    }
    else {
      iVar11 = FUN_004084b0((int)pvVar23);
      fVar28 = fStack_218;
      fVar29 = fStack_21c;
      if (iVar11 < *(int *)((int)pvVar23 + 0x6c)) {
        if (*(int *)((int)pvVar23 + 100) == 0x19) {
          bVar24 = FUN_004096b0(pvVar23,0x48);
          if (bVar24) {
            *(undefined1 *)((int)pvVar23 + 0x68) = 0x48;
            *(undefined4 *)((int)pvVar23 + 0x6c) = 0;
            fVar28 = fStack_218;
            fVar29 = fStack_21c;
            goto LAB_00404f21;
          }
        }
        *(undefined1 *)((int)pvVar23 + 0x68) = 0x4b;
        *(undefined4 *)((int)pvVar23 + 0x6c) = 0;
        fVar28 = fStack_218;
        fVar29 = fStack_21c;
      }
    }
    goto LAB_00404f21;
  }
  if (3600.0 <= (float)local_310) goto LAB_00404f21;
  cVar10 = *(char *)((int)pvVar23 + 0x68);
  if ((((cVar10 == '\x18') || (cVar10 == '\x19')) || (cVar10 == '\x1b')) ||
     (*(int *)((int)pvVar23 + 0x128) != 0)) {
LAB_00404cdf:
    if ((((*(float *)((int)pvVar23 + 0x170) < 0.8) &&
         (cVar10 = *(char *)((int)pvVar23 + 0x68), cVar10 != '\x18')) && (cVar10 != '\x19')) &&
       (cVar10 != '\x1b')) goto LAB_004046f3;
    fVar28 = fStack_218;
    fVar29 = fStack_21c;
    if (*(int *)((int)pvVar23 + 0x128) == 0) {
      iVar11 = FUN_004084b0((int)pvVar23);
      fVar28 = fStack_218;
      fVar29 = fStack_21c;
      if (iVar11 < *(int *)((int)pvVar23 + 0x6c)) {
        cVar10 = *(char *)((int)pvVar23 + 0xaa8);
        if (cVar10 == '\0') {
LAB_00404dd1:
          if (*(int *)((int)pvVar23 + 100) == 0x68) {
LAB_00404ddb:
            if (*(char *)((int)pvVar23 + 0x68) == '\x19') {
              if (*(float *)((int)pvVar23 + 0x170) <= *(float *)((int)pvVar23 + 0x144)) {
                *(undefined1 *)((int)pvVar23 + 0x68) = 0x37;
                *(undefined4 *)((int)pvVar23 + 0x6c) = 0;
                goto LAB_00404f21;
              }
            }
            else {
              *(undefined4 *)((int)pvVar23 + 0x6c) = 0;
            }
            *(undefined1 *)((int)pvVar23 + 0x68) = 0x19;
          }
        }
        else {
          if (*(char *)((int)pvVar23 + 0xaa9) != '\a') {
            if (cVar10 == '\0') goto LAB_00404dd1;
            if (*(char *)((int)pvVar23 + 0xaa9) == '\b') {
              if (*(char *)((int)pvVar23 + 0x68) == '\x1b') {
                if (*(float *)((int)pvVar23 + 0x170) <= *(float *)((int)pvVar23 + 0x144)) {
                  *(undefined1 *)((int)pvVar23 + 0x68) = 0x1a;
                  *(undefined4 *)((int)pvVar23 + 0x6c) = 0;
                  goto LAB_00404f21;
                }
              }
              else {
                *(undefined4 *)((int)pvVar23 + 0x6c) = 0;
              }
              *(undefined1 *)((int)pvVar23 + 0x68) = 0x1b;
              goto LAB_00404f21;
            }
            if ((cVar10 == '\0') || (*(char *)((int)pvVar23 + 0xaa9) != '\x06')) goto LAB_00404dd1;
            goto LAB_00404ddb;
          }
          if (*(char *)((int)pvVar23 + 0x68) == '\x18') {
            if (*(float *)((int)pvVar23 + 0x170) <= *(float *)((int)pvVar23 + 0x144)) {
              *(undefined1 *)((int)pvVar23 + 0x68) = 0x16;
              *(undefined4 *)((int)pvVar23 + 0x6c) = 0;
              goto LAB_00404f21;
            }
          }
          else {
            *(undefined4 *)((int)pvVar23 + 0x6c) = 0;
          }
          *(undefined1 *)((int)pvVar23 + 0x68) = 0x18;
        }
      }
    }
    goto LAB_00404f21;
  }
  iVar11 = rand();
  if (iVar11 % 10 != 0) goto LAB_00404cdf;
  iVar11 = FUN_0040f650((int)pvVar23);
  if (((char)iVar11 != '\0') ||
     (2.0 < *(float *)((int)pvVar23 + 0x80) || *(float *)((int)pvVar23 + 0x80) == 2.0))
  goto LAB_00404cdf;
  iVar11 = FUN_004084b0((int)pvVar23);
  if ((*(int *)((int)pvVar23 + 0x6c) < iVar11) || ((*(byte *)((int)pvVar23 + 0x5c) & 3) == 0))
  goto LAB_00404cdf;
  puVar14 = FUN_00402c50(local_300,auStack_98,puVar14);
  FUN_00402550(&fStack_204,(longlong *)puVar14);
  fVar26 = fStack_200 * fStack_200 + fStack_204 * fStack_204 + 0.0;
  fVar28 = fStack_218;
  fVar29 = fStack_21c;
  if (fVar26 <= 0.0) goto LAB_00404f21;
  dVar27 = (double)fVar26;
  libm_sse2_sqrt_precise();
  fVar28 = 1.0 / (float)dVar27;
  local_2fc = (CombatBehavior *)(fStack_204 * fVar28);
  local_2f4 = (uint *)(fStack_200 * fVar28);
  local_310 = (void *)(fVar28 * 0.0);
  uVar13 = rand();
  uVar13 = uVar13 & 0x80000003;
  if ((int)uVar13 < 0) {
    uVar13 = (uVar13 - 1 | 0xfffffffc) + 1;
  }
  switch(uVar13) {
  case 0:
switchD_00404866_caseD_0:
    fVar28 = (float)local_2fc * 20.0;
    fVar29 = (float)local_2f4 * 20.0;
    *(float *)((int)pvVar23 + 0x3c) = (float)local_310 * 20.0;
    goto LAB_0040493b;
  case 1:
switchD_00404866_caseD_1:
    *(float *)((int)pvVar23 + 0x34) = (float)local_2fc * -20.0;
    *(float *)((int)pvVar23 + 0x38) = (float)local_2f4 * -20.0;
    *(float *)((int)pvVar23 + 0x3c) = (float)local_310 * -20.0;
    break;
  case 2:
switchD_00404866_caseD_2:
    *(float *)((int)pvVar23 + 0x34) = ((float)local_2f4 - (float)local_310 * 0.0) * 20.0;
    *(float *)((int)pvVar23 + 0x38) = ((float)local_310 * 0.0 - (float)local_2fc) * 20.0;
    *(float *)((int)pvVar23 + 0x3c) = ((float)local_2fc * 0.0 - (float)local_2f4 * 0.0) * 20.0;
    break;
  case 3:
switchD_00404866_caseD_3:
    fVar28 = ((float)local_2f4 - (float)local_310 * 0.0) * -20.0;
    fVar29 = ((float)local_310 * 0.0 - (float)local_2fc) * -20.0;
    *(float *)((int)pvVar23 + 0x3c) = ((float)local_2fc * 0.0 - (float)local_2f4 * 0.0) * -20.0;
LAB_0040493b:
    *(float *)((int)pvVar23 + 0x38) = fVar29;
    *(float *)((int)pvVar23 + 0x34) = fVar28;
  }
switchD_00404866_default:
  *(float *)((int)pvVar23 + 0x3c) = *(float *)((int)pvVar23 + 0x3c) + 5.0;
  *(undefined4 *)((int)pvVar23 + 0x128) = 600;
  fVar28 = fStack_218;
  fVar29 = fStack_21c;
LAB_00404f21:
  *(float *)((int)pvVar23 + 0x160) = fVar29;
  *(float *)((int)pvVar23 + 0x164) = fVar28;
  *(int **)((int)pvVar23 + 0x168) = local_318;
LAB_004052e0:
  ExceptionList = local_14;
  __security_check_cookie(local_1c ^ (uint)auStack_31c);
  return;
  while( true ) {
    if (*(int *)((int)pvVar5 + 0x1464) != 0) {
      iVar22 = *(int *)(*(int *)((int)pvVar5 + 0x1460) + 4);
      piVar21 = (int *)FUN_00405450(local_17c,(uint *)((int)pvVar5 + 0x1440));
      uVar2 = *(undefined8 *)(iVar22 + 8);
      iVar16 = *(int *)(iVar22 + 0x10) - piVar21[2];
      local_188._4_4_ = (int)((ulonglong)uVar2 >> 0x20);
      iVar22 = local_188._4_4_ - piVar21[1];
      local_188._0_4_ = (int)uVar2;
      iVar15 = (int)local_188 - *piVar21;
      pvVar23 = local_310;
      local_188 = uVar2;
      if ((float)(iVar16 * iVar16 + iVar22 * iVar22 + iVar15 * iVar15) <=
          *(float *)((int)pvVar5 + 0x80) * *(float *)((int)pvVar5 + 0x80)) break;
    }
    FUN_004dde90(pvVar23,pvVar5);
    FUN_004dafe0(pvVar5);
    iVar11 = iVar11 + 1;
    if (9 < iVar11) break;
LAB_00405241:
    if (0x32 < *(int *)((int)pvVar5 + 0x1464)) break;
  }
  goto LAB_004052e0;
}


/* cube::CombatBehavior::vfunction2 @ 004053e0  kind=game  attributed-by=rtti  size=55 */

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


