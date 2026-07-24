// RandomInteractionBehavior (ai) -- cube. 3 functions. Bodies = Ghidra pseudo-C.
// Attribution: see ../attribution.tsv. Toolchain of the original: MSVC 11.0 (VS2012).
#include "RandomInteractionBehavior.h"

/* cube::RandomInteractionBehavior::RandomInteractionBehavior @ 004db100  kind=game  attributed-by=rtti  size=16 */

RandomInteractionBehavior * __thiscall
cube::RandomInteractionBehavior::RandomInteractionBehavior(RandomInteractionBehavior *this)

{
  this->vftablePtr = &vftable;
  (this->RandomInteractionBehavior_data).offset_0x0 = 0;
  return this;
}


/* cube::RandomInteractionBehavior::vfunction1 @ 004db130  kind=game  attributed-by=rtti  size=3495 */

/* WARNING: Removing unreachable block (ram,0x004db8c1) */
/* WARNING: Removing unreachable block (ram,0x004db91d) */
/* WARNING: Removing unreachable block (ram,0x004db925) */
/* WARNING: Removing unreachable block (ram,0x004dbb34) */
/* WARNING: Removing unreachable block (ram,0x004db94c) */
/* WARNING: Removing unreachable block (ram,0x004db96c) */
/* WARNING: Removing unreachable block (ram,0x004db9f0) */
/* WARNING: Removing unreachable block (ram,0x004dba28) */
/* WARNING: Removing unreachable block (ram,0x004dba40) */
/* WARNING: Removing unreachable block (ram,0x004dba83) */
/* WARNING: Removing unreachable block (ram,0x004dba9b) */
/* WARNING: Removing unreachable block (ram,0x004dba88) */
/* WARNING: Removing unreachable block (ram,0x004dba2d) */
/* WARNING: Removing unreachable block (ram,0x004dbad1) */
/* WARNING: Removing unreachable block (ram,0x004dbaf6) */

void __thiscall
cube::RandomInteractionBehavior::vfunction1
          (RandomInteractionBehavior *this,int param_1,int param_2,int param_3)

{
  RandomInteractionBehavior_data *pRVar1;
  uint *puVar2;
  undefined8 uVar3;
  int iVar4;
  bool bVar5;
  char cVar6;
  int iVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  uint uVar11;
  int iVar12;
  int *piVar13;
  int *piVar14;
  int iVar15;
  uint uVar16;
  uint uVar17;
  undefined4 *puVar18;
  int *piVar19;
  uint uVar20;
  int *piVar21;
  float fVar22;
  uint local_228;
  undefined1 local_20c [280];
  undefined4 local_f4;
  undefined4 local_f0;
  undefined4 local_ec;
  undefined1 local_e4;
  undefined1 local_e0 [48];
  undefined1 local_b0 [24];
  undefined1 local_98 [36];
  undefined4 local_74;
  undefined4 local_70;
  int local_6c;
  float local_5c;
  float local_58;
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
  puStack_c = &LAB_006e903b;
  local_10 = ExceptionList;
  local_14 = DAT_0076aa78 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  pRVar1 = &this->RandomInteractionBehavior_data;
  pRVar1->offset_0x0 = pRVar1->offset_0x0 - param_3;
  iVar7 = (this->RandomInteractionBehavior_data).offset_0x0;
  if ((int)pRVar1->offset_0x0 < 0) {
    iVar7 = 0;
  }
  (this->RandomInteractionBehavior_data).offset_0x0 = iVar7;
  if (iVar7 == 0) {
    if ((*(char *)(param_1 + 0x68) == 'S') || (*(char *)(param_1 + 0x68) == 'T')) {
      FUN_0042ef10(local_14);
      *(undefined4 *)(param_1 + 0x1478) = 0xffffffff;
      *(undefined4 *)(param_1 + 0x147c) = 0xffffffff;
      *(undefined4 *)(param_1 + 0x1480) = 0;
      *(undefined1 *)(param_1 + 0x68) = 0;
      *(undefined4 *)(param_1 + 0x40) = 0;
      *(undefined4 *)(param_1 + 0x44) = 0;
      *(undefined4 *)(param_1 + 0x48) = 0x3f800000;
      (this->RandomInteractionBehavior_data).offset_0x0 = 20000;
      goto LAB_004dbec3;
    }
    *(undefined1 *)(param_1 + 0x68) = 0;
  }
  if ((*(char *)(param_1 + 0x68) == 'S') || (*(char *)(param_1 + 0x68) == 'T')) goto LAB_004dbec3;
  uVar8 = __alldiv(*(undefined4 *)(param_1 + 0x20),*(undefined4 *)(param_1 + 0x24),0x10000,0);
  uVar9 = __alldiv(*(undefined4 *)(param_1 + 0x18),*(undefined4 *)(param_1 + 0x1c),0x10000,0);
  puVar2 = (uint *)(param_1 + 0x10);
  uVar10 = __alldiv(*puVar2,*(undefined4 *)(param_1 + 0x14),0x10000,0);
  iVar7 = FUN_0059ed30(uVar10,uVar9,uVar8);
  bVar5 = false;
  if (iVar7 == 0) {
    iVar7 = __alldiv(*(undefined4 *)(param_1 + 0x10),*(undefined4 *)(param_1 + 0x14),0x10000,0);
    iVar15 = (int)((iVar7 >> 0x1f & 7U) + iVar7) >> 3;
    iVar7 = __alldiv(*(undefined4 *)(param_1 + 0x18),*(undefined4 *)(param_1 + 0x1c),0x10000,0);
    local_228 = iVar15 - 1;
    iVar15 = iVar15 + 1;
    iVar7 = (int)((iVar7 >> 0x1f & 7U) + iVar7) >> 3;
    if ((int)local_228 < iVar15) {
      uVar11 = iVar7 - 1U;
      uVar20 = local_228;
      do {
        for (; (int)uVar11 < iVar7 + 1; uVar11 = uVar11 + 1) {
          if ((((-1 < (int)uVar20) && (-1 < (int)uVar11)) && ((int)uVar20 < 0x200000)) &&
             (((int)uVar11 < 0x200000 &&
              (iVar12 = FUN_00434d10((int)(uVar20 + ((int)uVar20 >> 0x1f & 0x1fU)) >> 5,
                                     (int)(uVar11 + ((int)uVar11 >> 0x1f & 0x1fU)) >> 5),
              iVar12 != 0)))) {
            uVar17 = uVar11 & 0x8000001f;
            if ((int)uVar17 < 0) {
              uVar17 = (uVar17 - 1 | 0xffffffe0) + 1;
            }
            uVar16 = uVar20 & 0x8000001f;
            if ((int)uVar16 < 0) {
              uVar16 = (uVar16 - 1 | 0xffffffe0) + 1;
            }
            piVar14 = (int *)(*(int *)(iVar12 + 0xac) + (uVar17 * 0x20 + uVar16) * 8);
            if (piVar14 != (int *)0x0) {
              piVar14 = (int *)*piVar14;
              piVar13 = (int *)*piVar14;
              if (piVar13 != piVar14) {
                do {
                  iVar12 = 0;
                  piVar21 = piVar13 + 3;
                  piVar19 = (int *)(param_1 + 0x1478);
                  do {
                    if (*piVar21 != *piVar19) goto LAB_004db6cb;
                    iVar12 = iVar12 + 1;
                    piVar21 = piVar21 + 1;
                    piVar19 = piVar19 + 1;
                  } while (iVar12 < 3);
                  if (*(int *)(piVar13[2] + 0x40) == 0 && *(int *)(piVar13[2] + 0x44) == 0) {
                    bVar5 = true;
                  }
LAB_004db6cb:
                  piVar13 = (int *)*piVar13;
                } while (piVar13 != piVar14);
              }
            }
          }
        }
        uVar20 = uVar20 + 1;
        uVar11 = iVar7 - 1U;
      } while ((int)uVar20 < iVar15);
      if (bVar5) goto LAB_004dbb48;
    }
    if ((this->RandomInteractionBehavior_data).offset_0x0 == 0) {
      local_8 = 0;
      if ((int)local_228 < iVar15) {
        uVar11 = iVar7 - 1U;
        do {
          for (; (int)uVar11 < iVar7 + 1; uVar11 = uVar11 + 1) {
            if (((-1 < (int)local_228) && (-1 < (int)uVar11)) &&
               (((int)local_228 < 0x200000 &&
                (((int)uVar11 < 0x200000 &&
                 (iVar12 = FUN_00434d10((int)(local_228 + ((int)local_228 >> 0x1f & 0x1fU)) >> 5,
                                        (int)(uVar11 + ((int)uVar11 >> 0x1f & 0x1fU)) >> 5),
                 iVar12 != 0)))))) {
              uVar20 = uVar11 & 0x8000001f;
              if ((int)uVar20 < 0) {
                uVar20 = (uVar20 - 1 | 0xffffffe0) + 1;
              }
              uVar17 = local_228 & 0x8000001f;
              if ((int)uVar17 < 0) {
                uVar17 = (uVar17 - 1 | 0xffffffe0) + 1;
              }
              piVar14 = (int *)(*(int *)(iVar12 + 0xac) + (uVar20 * 0x20 + uVar17) * 8);
              if ((piVar14 != (int *)0x0) &&
                 (piVar13 = *(int **)*piVar14, piVar13 != (int *)*piVar14)) {
                do {
                  iVar12 = *(int *)piVar13[2];
                  if (((iVar12 == 0x12) || ((iVar12 == 0x10 || (iVar12 == 0x44)))) &&
                     (cVar6 = FUN_0059ee90(puVar2,piVar13[2] + 8,1,0x43480000), cVar6 != '\0')) {
                    FUN_00674ee0(piVar13 + 3);
                  }
                  piVar13 = (int *)*piVar13;
                } while (piVar13 != (int *)*piVar14);
              }
            }
          }
          local_228 = local_228 + 1;
          uVar11 = iVar7 - 1U;
        } while ((int)local_228 < iVar15);
      }
      local_8 = 0xffffffff;
    }
  }
  else {
    puVar18 = *(undefined4 **)(iVar7 + 0x48);
    if (puVar18 != *(undefined4 **)(iVar7 + 0x4c)) {
      do {
        iVar15 = 0;
        piVar14 = (int *)(param_1 + 0x1478);
        do {
          if (puVar18[iVar15] != *piVar14) goto LAB_004db311;
          iVar15 = iVar15 + 1;
          piVar14 = piVar14 + 1;
        } while (iVar15 < 3);
        iVar15 = FUN_00434d10(*puVar18,puVar18[1]);
        if ((((iVar15 != 0) && (iVar12 = puVar18[2], -1 < iVar12)) &&
            (iVar4 = *(int *)(iVar15 + 0xc), iVar12 < (*(int *)(iVar15 + 0x10) - iVar4) / 0x188)) &&
           (*(int *)(iVar12 * 0x188 + 0x40 + iVar4) == 0 &&
            *(int *)(iVar12 * 0x188 + 0x44 + iVar4) == 0)) {
          bVar5 = true;
        }
LAB_004db311:
        puVar18 = puVar18 + 3;
      } while (puVar18 != *(undefined4 **)(iVar7 + 0x4c));
    }
    puVar18 = *(undefined4 **)(iVar7 + 0x54);
    if (puVar18 != *(undefined4 **)(iVar7 + 0x58)) {
      do {
        iVar15 = 0;
        piVar14 = (int *)(param_1 + 0x1478);
        do {
          if (puVar18[iVar15] != *piVar14) goto LAB_004db3bb;
          iVar15 = iVar15 + 1;
          piVar14 = piVar14 + 1;
        } while (iVar15 < 3);
        iVar15 = FUN_00434d10(*puVar18,puVar18[1]);
        if (((iVar15 != 0) && (iVar12 = puVar18[2], -1 < iVar12)) &&
           ((iVar4 = *(int *)(iVar15 + 0xc), iVar12 < (*(int *)(iVar15 + 0x10) - iVar4) / 0x188 &&
            (*(int *)(iVar12 * 0x188 + 0x40 + iVar4) == 0 &&
             *(int *)(iVar12 * 0x188 + 0x44 + iVar4) == 0)))) {
          bVar5 = true;
        }
LAB_004db3bb:
        puVar18 = puVar18 + 3;
      } while (puVar18 != *(undefined4 **)(iVar7 + 0x58));
    }
    if (bVar5) {
LAB_004dbb48:
      if (*(int *)(param_1 + 0x1410) != 0) {
        iVar7 = 0;
        do {
          if (0x32 < *(int *)(param_1 + 0x1464)) break;
          if (*(int *)(param_1 + 0x1464) != 0) {
            iVar15 = *(int *)(*(int *)(param_1 + 0x1460) + 4);
            piVar14 = (int *)FUN_0042f040(local_98,param_1 + 0x1440);
            uVar3 = *(undefined8 *)(iVar15 + 8);
            local_18 = *(int *)(iVar15 + 0x10) - piVar14[2];
            local_20._4_4_ = (int)((ulonglong)uVar3 >> 0x20);
            local_20._4_4_ = local_20._4_4_ - piVar14[1];
            local_20._0_4_ = (int)uVar3;
            local_20._0_4_ = (int)local_20 - *piVar14;
            if ((float)(local_18 * local_18 + local_20._4_4_ * local_20._4_4_ +
                       (int)local_20 * (int)local_20) <
                *(float *)(param_1 + 0x1458) * *(float *)(param_1 + 0x1458)) break;
          }
          FUN_005aaab0(param_1);
          FUN_005a7c90(param_1);
          iVar7 = iVar7 + 1;
        } while (iVar7 < 10);
      }
      uVar11 = *(uint *)(param_1 + 0x1478);
      uVar20 = *(uint *)(param_1 + 0x147c);
      if (((-1 < (int)uVar11) && (-1 < (int)uVar20)) &&
         (((int)uVar11 < 0x10000 && ((int)uVar20 < 0x10000)))) {
        iVar7 = (int)(uVar11 + ((int)uVar11 >> 0x1f & 0x3fU)) >> 6;
        iVar15 = (int)(((int)uVar20 >> 0x1f & 0x3fU) + uVar20) >> 6;
        if (((-1 < iVar7) && (-1 < iVar15)) &&
           ((iVar7 < 0x400 &&
            ((iVar15 < 0x400 &&
             (iVar7 = *(int *)(param_2 + 0xbc + (iVar7 * 0x400 + iVar15) * 4), iVar7 != 0)))))) {
          uVar11 = uVar11 & 0x8000003f;
          if ((int)uVar11 < 0) {
            uVar11 = (uVar11 - 1 | 0xffffffc0) + 1;
          }
          uVar20 = uVar20 & 0x8000003f;
          if ((int)uVar20 < 0) {
            uVar20 = (uVar20 - 1 | 0xffffffc0) + 1;
          }
          iVar7 = *(int *)(iVar7 + 0x10018 + (uVar11 * 0x40 + uVar20) * 4);
          if (((iVar7 != 0) && (iVar15 = *(int *)(param_1 + 0x1480), -1 < iVar15)) &&
             (iVar12 = *(int *)(iVar7 + 0xc), iVar15 < (*(int *)(iVar7 + 0x10) - iVar12) / 0x188)) {
            iVar15 = iVar15 * 0x188;
            uVar11 = *(uint *)(iVar15 + 8 + iVar12);
            uVar20 = *(uint *)(iVar15 + 0x10 + iVar12);
            uVar17 = *(uint *)(iVar15 + 0x18 + iVar12);
            local_38 = uVar11 - *puVar2;
            iStack_34 = (*(int *)(iVar15 + 0xc + iVar12) - *(int *)(param_1 + 0x14)) -
                        (uint)(uVar11 < *puVar2);
            local_30 = uVar20 - *(uint *)(param_1 + 0x18);
            iStack_2c = (*(int *)(iVar15 + iVar12 + 0x14) - *(int *)(param_1 + 0x1c)) -
                        (uint)(uVar20 < *(uint *)(param_1 + 0x18));
            local_28 = uVar17 - *(uint *)(param_1 + 0x20);
            iStack_24 = (*(int *)(iVar15 + iVar12 + 0x1c) - *(int *)(param_1 + 0x24)) -
                        (uint)(uVar17 < *(uint *)(param_1 + 0x20));
            local_5c = (float)CONCAT44(iStack_34,local_38) * 1.5258789e-05;
            local_58 = (float)CONCAT44(iStack_2c,local_30) * 1.5258789e-05;
            fVar22 = (float)CONCAT44(iStack_24,local_28) * 1.5258789e-05;
            if (local_58 * local_58 + local_5c * local_5c + fVar22 * fVar22 < 9.0) {
              FUN_00459530();
              local_f4 = *(undefined4 *)(param_1 + 0x1478);
              iVar7 = *(int *)(param_1 + 0x130c);
              local_f0 = *(undefined4 *)(param_1 + 0x147c);
              local_ec = *(undefined4 *)(param_1 + 0x1480);
              local_e4 = 3;
              iVar15 = FUN_00451d70(iVar7,*(undefined4 *)(iVar7 + 4),local_20c);
              if (*(int *)(param_1 + 0x1310) == 0xd4c77a) {
                    /* WARNING: Subroutine does not return */
                std::_Xlength_error("list<T> too long");
              }
              *(int *)(param_1 + 0x1310) = *(int *)(param_1 + 0x1310) + 1;
              *(int *)(iVar7 + 4) = iVar15;
              **(int **)(iVar15 + 4) = iVar15;
              FUN_0042ef10();
              *(undefined4 *)(param_1 + 0x1478) = 0xffffffff;
              *(undefined4 *)(param_1 + 0x147c) = 0xffffffff;
              *(undefined4 *)(param_1 + 0x1480) = 0;
              *(undefined4 *)(param_1 + 0x40) = 0;
              *(undefined4 *)(param_1 + 0x44) = 0;
              *(undefined4 *)(param_1 + 0x48) = 0;
              *(undefined4 *)(param_1 + 0x34) = 0;
              *(undefined4 *)(param_1 + 0x38) = 0;
              *(undefined4 *)(param_1 + 0x3c) = 0;
              (this->RandomInteractionBehavior_data).offset_0x0 = 20000;
            }
          }
        }
      }
      goto LAB_004dbec3;
    }
    if ((this->RandomInteractionBehavior_data).offset_0x0 == 0) {
      if ((*(int *)(param_2 + 0x80015c) < 21600000) ||
         (piVar14 = (int *)(iVar7 + 0x48), 82799999 < *(int *)(param_2 + 0x80015c))) {
        piVar14 = (int *)(iVar7 + 0x54);
      }
      iVar7 = piVar14[1];
      iVar15 = *piVar14;
      if (iVar15 != iVar7) {
        uVar11 = rand();
        uVar11 = uVar11 % (uint)((iVar7 - iVar15) / 0xc);
        iVar7 = *piVar14;
        uVar8 = *(undefined4 *)(iVar7 + 4 + uVar11 * 0xc);
        uVar9 = *(undefined4 *)(iVar7 + uVar11 * 0xc);
        iVar7 = *(int *)(iVar7 + 8 + uVar11 * 0xc);
        local_74 = uVar9;
        local_70 = uVar8;
        local_6c = iVar7;
        iVar15 = FUN_00434d10(uVar9,uVar8);
        if ((((iVar15 != 0) && (-1 < iVar7)) &&
            (iVar7 < (*(int *)(iVar15 + 0x10) - *(int *)(iVar15 + 0xc)) / 0x188)) &&
           (iVar15 = iVar7 * 0x188 + *(int *)(iVar15 + 0xc),
           *(int *)(iVar15 + 0x40) == 0 && *(int *)(iVar15 + 0x44) == 0)) {
          (this->RandomInteractionBehavior_data).offset_0x0 = 20000;
          local_3c = 0.5 - *(float *)(param_1 + 0x88) * 0.5;
          local_44 = 0;
          local_40 = 0;
          FUN_0042c460(&local_44);
          uVar10 = FUN_0042c800(local_e0,local_b0);
          FUN_0042c5b0(uVar10);
          FUN_0042c5b0(iVar15 + 8);
          *(undefined4 *)(param_1 + 0x1478) = uVar9;
          *(undefined4 *)(param_1 + 0x147c) = uVar8;
          *(int *)(param_1 + 0x1480) = iVar7;
          *(undefined4 *)(param_1 + 0x1458) = 0x40000000;
          FUN_005a9f90(param_1);
          goto LAB_004dbb48;
        }
      }
    }
  }
  FUN_0042ef10();
  *(undefined4 *)(param_1 + 0x1478) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x147c) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x1480) = 0;
LAB_004dbec3:
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}


/* cube::RandomInteractionBehavior::vfunction2 @ 004dbef0  kind=game  attributed-by=rtti  size=31 */

undefined4 * __thiscall cube::RandomInteractionBehavior::vfunction2(void)

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


