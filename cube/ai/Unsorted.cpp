// Unsorted (ai) -- cube. 6 functions. Bodies = Ghidra pseudo-C.
// Attribution: see ../attribution.tsv. Toolchain of the original: MSVC 11.0 (VS2012).
#include "Unsorted.h"

/* FUN_005a7090 @ 005a7090  kind=gamemisc  attributed-by=logic:caller-vote  size=511 */

void FUN_005a7090(undefined4 *param_1,char param_2,undefined4 *param_3,undefined4 param_4)

{
  char cVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  int *piVar5;
  int *in_ECX;
  int *piVar6;
  int *piVar7;
  
  if (0x9249247 < (uint)in_ECX[1]) {
                    /* WARNING: Subroutine does not return */
    std::_Xlength_error("map/set<T> too long");
  }
  piVar3 = (int *)FUN_005a6ba0(param_4);
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
      goto LAB_005a70ee;
    }
    param_3[2] = piVar3;
    iVar4 = *in_ECX;
    if (param_3 != *(undefined4 **)(iVar4 + 8)) goto LAB_005a70ee;
  }
  *(int **)(iVar4 + 8) = piVar3;
LAB_005a70ee:
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
        goto LAB_005a726a;
      }
LAB_005a71c1:
      *(undefined1 *)(piVar7 + 3) = 1;
      *(undefined1 *)(piVar6 + 3) = 1;
      *(undefined1 *)(*(int *)(piVar5[1] + 4) + 0xc) = 0;
      piVar5 = *(int **)(piVar5[1] + 4);
    }
    else {
      if ((char)piVar6[3] == '\0') goto LAB_005a71c1;
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
LAB_005a726a:
      piVar7[1] = (int)piVar6;
    }
    cVar1 = *(char *)(piVar5[1] + 0xc);
  } while( true );
}


/* FUN_005a7a40 @ 005a7a40  kind=gamemisc  attributed-by=logic:caller-vote  size=46 */

void FUN_005a7a40(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 *param_4)

{
  undefined4 *in_ECX;
  
  *in_ECX = param_1;
  in_ECX[1] = param_2;
  in_ECX[2] = param_3;
  in_ECX[3] = *param_4;
  in_ECX[4] = param_4[1];
  in_ECX[5] = param_4[2];
  return;
}


/* FUN_005a9d40 @ 005a9d40  kind=gamemisc  attributed-by=logic:caller-vote  size=89 */

int FUN_005a9d40(uint *param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  uVar1 = (int)*param_1 >> 0x1f;
  iVar3 = (*param_1 ^ uVar1) - uVar1;
  uVar1 = (int)param_1[1] >> 0x1f;
  iVar4 = (param_1[1] ^ uVar1) - uVar1;
  uVar1 = (int)param_1[2] >> 0x1f;
  iVar2 = (param_1[2] ^ uVar1) - uVar1;
  if (iVar4 < iVar3) {
    return (iVar3 * 10 + iVar4 * 4 + iVar2 * 10) * 2;
  }
  return (iVar3 * 4 + iVar4 * 10 + iVar2 * 10) * 2;
}


/* FUN_005a9e50 @ 005a9e50  kind=gamemisc  attributed-by=logic:caller-vote  size=304 */

void FUN_005a9e50(int param_1,undefined4 param_2,undefined4 param_3,undefined4 *param_4)

{
  int iVar1;
  char cVar2;
  uint uVar3;
  undefined4 *puVar4;
  int in_ECX;
  undefined4 *local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined1 local_1c [8];
  int local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006f35c8;
  local_10 = ExceptionList;
  uVar3 = DAT_0076aa78 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_28 = (undefined4 *)0x0;
  local_24 = 0;
  local_20 = 0;
  local_14 = in_ECX;
  FUN_0040d9d0(3);
  *local_28 = param_1;
  local_28[1] = param_2;
  local_28[2] = param_3;
  local_8 = 0;
  puVar4 = (undefined4 *)FUN_005a7a70(&local_28);
  *puVar4 = *param_4;
  puVar4[1] = param_4[1];
  puVar4[2] = param_4[2];
  puVar4[3] = param_4[3];
  puVar4[4] = param_4[4];
  puVar4[5] = param_4[5];
  FUN_005a7700(local_1c,0,&local_28,DAT_0076dda2);
  puVar4 = local_28;
  iVar1 = *(int *)(in_ECX + 0x140c);
  if ((*(int *)(in_ECX + 0x1408) != iVar1) &&
     (*(int *)(*(int *)(in_ECX + 0x1408) + 0x20) <= (int)param_4[1])) goto LAB_005a9f62;
  param_1 = FUN_005a7c10(&local_28);
  if (param_1 == iVar1) {
LAB_005a9f51:
    param_1 = iVar1;
  }
  else {
    cVar2 = FUN_005a78a0(puVar4,local_24,*(undefined4 *)(param_1 + 0x10),
                         *(undefined4 *)(param_1 + 0x14),uVar3);
    if (cVar2 != '\0') goto LAB_005a9f51;
  }
  *(int *)(local_14 + 0x1408) = param_1;
LAB_005a9f62:
  if (puVar4 != (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    operator_delete(puVar4);
  }
  ExceptionList = local_10;
  return;
}


/* FUN_005a9f90 @ 005a9f90  kind=gamemisc  attributed-by=logic:caller-vote  size=2834 */

/* WARNING: Removing unreachable block (ram,0x005aa8d9) */
/* WARNING: Removing unreachable block (ram,0x005aa43e) */
/* WARNING: Removing unreachable block (ram,0x005aa381) */
/* WARNING: Removing unreachable block (ram,0x005aa3ad) */
/* WARNING: Removing unreachable block (ram,0x005aa46d) */
/* WARNING: Removing unreachable block (ram,0x005aa98f) */

void FUN_005a9f90(int param_1)

{
  uint uVar1;
  int *piVar2;
  uint uVar3;
  undefined4 *puVar4;
  int *piVar5;
  uint *puVar6;
  int iVar7;
  int iVar8;
  int in_ECX;
  uint uVar9;
  int iVar10;
  int iVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  int iVar16;
  int iVar17;
  uint uVar18;
  int iVar19;
  int *piVar20;
  undefined8 uVar21;
  longlong lVar22;
  longlong lVar23;
  uint local_38 [8];
  int local_18;
  undefined8 local_14;
  float local_c;
  uint local_8;
  
  local_8 = DAT_0076aa78 ^ (uint)&stack0xfffffffc;
  FUN_0042ef10();
  puVar4 = (undefined4 *)FUN_0042f040(&local_14,param_1 + 0x1428);
  *(undefined4 *)(param_1 + 0x141c) = *puVar4;
  *(undefined4 *)(param_1 + 0x1420) = puVar4[1];
  *(undefined4 *)(param_1 + 0x1424) = puVar4[2];
  FUN_0042f040(local_38 + 3,param_1 + 0x1428);
  *(undefined4 *)(param_1 + 0x145c) = 0;
  piVar5 = (int *)FUN_0042f040(&local_14,param_1 + 0x1440);
  uVar14 = (int)(local_38[3] - *piVar5) >> 0x1f;
  iVar17 = (local_38[3] - *piVar5 ^ uVar14) - uVar14;
  uVar14 = (int)(local_38[4] - piVar5[1]) >> 0x1f;
  iVar19 = (local_38[4] - piVar5[1] ^ uVar14) - uVar14;
  uVar14 = (int)(local_38[5] - piVar5[2]) >> 0x1f;
  if (iVar19 < iVar17) {
    iVar17 = iVar17 * 10 + iVar19 * 4;
  }
  else {
    iVar17 = iVar17 * 4 + iVar19 * 10;
  }
  local_38[7] = (uint)(float)(int)((iVar17 + ((local_38[5] - piVar5[2] ^ uVar14) - uVar14) * 10) * 2
                                  );
  local_38[6] = 1;
  local_c = (float)local_38[5];
  local_18 = local_38[7];
  FUN_005a9e50(local_38[3],local_38[4],local_38[5],local_38 + 6);
  FUN_0067e480();
  local_14 = 0x3f0000003f000000;
  local_c = *(float *)(param_1 + 0x88) * 0.5;
  iVar17 = 0;
  do {
    uVar21 = FUN_0068d946();
    local_38[iVar17 * 2] = (uint)uVar21;
    local_38[iVar17 * 2 + 1] = (uint)((ulonglong)uVar21 >> 0x20);
    iVar17 = iVar17 + 1;
  } while (iVar17 < 3);
  puVar6 = (uint *)FUN_0042f040(&local_14,param_1 + 0x1428);
  uVar14 = *puVar6;
  uVar12 = puVar6[1];
  uVar1 = puVar6[2];
  uVar9 = local_38[0] + uVar14 * 0x10000;
  iVar10 = local_38[1] + (((int)uVar14 >> 0x1f) << 0x10 | uVar14 >> 0x10) +
           (uint)CARRY4(local_38[0],uVar14 * 0x10000);
  uVar18 = local_38[2] + uVar12 * 0x10000;
  iVar11 = local_38[3] + (((int)uVar12 >> 0x1f) << 0x10 | uVar12 >> 0x10) +
           (uint)CARRY4(local_38[2],uVar12 * 0x10000);
  uVar12 = local_38[4] + uVar1 * 0x10000;
  iVar19 = local_38[5] + (((int)uVar1 >> 0x1f) << 0x10 | uVar1 >> 0x10) +
           (uint)CARRY4(local_38[4],uVar1 * 0x10000);
  iVar17 = __alldiv(uVar9,iVar10,0x10000,0);
  iVar17 = (int)((iVar17 >> 0x1f & 7U) + iVar17) >> 3;
  iVar7 = __alldiv(uVar18,iVar11,0x10000,0);
  uVar14 = iVar17 - 1;
  iVar17 = iVar17 + 1;
  iVar7 = (int)(iVar7 + (iVar7 >> 0x1f & 7U)) >> 3;
  if ((int)uVar14 <= iVar17) {
    uVar1 = iVar7 - 1;
    uVar3 = uVar1;
    do {
      for (; (int)uVar3 <= iVar7 + 1; uVar3 = uVar3 + 1) {
        if ((((-1 < (int)uVar14) && (-1 < (int)uVar3)) && ((int)uVar14 < 0x200000)) &&
           (((int)uVar3 < 0x200000 &&
            (iVar8 = FUN_00434d10((int)(uVar14 + ((int)uVar14 >> 0x1f & 0x1fU)) >> 5,
                                  (int)(uVar3 + ((int)uVar3 >> 0x1f & 0x1fU)) >> 5), iVar8 != 0))))
        {
          uVar15 = uVar3 & 0x8000001f;
          if ((int)uVar15 < 0) {
            uVar15 = (uVar15 - 1 | 0xffffffe0) + 1;
          }
          uVar13 = uVar14 & 0x8000001f;
          if ((int)uVar13 < 0) {
            uVar13 = (uVar13 - 1 | 0xffffffe0) + 1;
          }
          piVar5 = (int *)(*(int *)(iVar8 + 0xac) + (uVar15 * 0x20 + uVar13) * 8);
          if ((piVar5 != (int *)0x0) && (piVar20 = *(int **)*piVar5, piVar20 != (int *)*piVar5)) {
            do {
              piVar2 = (int *)piVar20[2];
              iVar8 = *piVar2;
              if (((iVar8 != 7) && ((iVar8 != 6 && (iVar8 != 9)))) &&
                 (((iVar8 != 1 && ((((iVar8 != 8 && (iVar8 != 2)) && (iVar8 != 3)) && (iVar8 != 5)))
                   ) || ((char)piVar2[0xc] != '\0')))) {
                local_c = (float)piVar2[0xb];
                local_14 = *(undefined8 *)(piVar2 + 9);
                lVar22 = FUN_0068d946();
                lVar23 = FUN_0068d946();
                uVar15 = piVar2[2];
                if ((CONCAT44((piVar2[3] - (int)((ulonglong)lVar22 >> 0x20)) -
                              (uint)(uVar15 < (uint)lVar22),uVar15 - (uint)lVar22) <=
                     lVar23 + CONCAT44(iVar10,uVar9)) &&
                   (CONCAT44((iVar10 - (int)((ulonglong)lVar23 >> 0x20)) -
                             (uint)(uVar9 < (uint)lVar23),uVar9 - (uint)lVar23) <
                    lVar22 + *(longlong *)(piVar2 + 2))) {
                  lVar22 = FUN_0068d946();
                  lVar23 = FUN_0068d946();
                  uVar15 = piVar2[4];
                  if ((CONCAT44((piVar2[5] - (int)((ulonglong)lVar22 >> 0x20)) -
                                (uint)(uVar15 < (uint)lVar22),uVar15 - (uint)lVar22) <=
                       lVar23 + CONCAT44(iVar11,uVar18)) &&
                     (CONCAT44((iVar11 - (int)((ulonglong)lVar23 >> 0x20)) -
                               (uint)(uVar18 < (uint)lVar23),uVar18 - (uint)lVar23) <
                      lVar22 + *(longlong *)(piVar2 + 4))) {
                    lVar23 = FUN_0068d946();
                    lVar22 = lVar23 + CONCAT44(iVar19,uVar12);
                    iVar8 = (int)((ulonglong)lVar22 >> 0x20);
                    if ((piVar2[7] <= iVar8) &&
                       ((piVar2[7] < iVar8 || ((uint)piVar2[6] <= (uint)lVar22)))) {
                      uVar21 = FUN_0068d946();
                      iVar16 = (int)((ulonglong)uVar21 >> 0x20) + piVar2[7] +
                               (uint)CARRY4((uint)uVar21,piVar2[6]);
                      iVar8 = (iVar19 - (int)((ulonglong)lVar23 >> 0x20)) -
                              (uint)(uVar12 < (uint)lVar23);
                      if ((iVar8 <= iVar16) &&
                         ((iVar8 < iVar16 || (uVar12 - (uint)lVar23 < (uint)uVar21 + piVar2[6])))) {
                        FUN_0058e7d0(local_38 + 4,0,piVar20 + 2,DAT_0076dda2);
                      }
                    }
                  }
                }
              }
              piVar20 = (int *)*piVar20;
            } while (piVar20 != (int *)*piVar5);
          }
        }
      }
      uVar14 = uVar14 + 1;
      uVar3 = uVar1;
    } while ((int)uVar14 <= iVar17);
  }
  local_14 = 0x3f0000003f000000;
  iVar17 = 0;
  local_c = *(float *)(param_1 + 0x88) * 0.5;
  do {
    uVar21 = FUN_0068d946();
    local_38[iVar17 * 2] = (uint)uVar21;
    local_38[iVar17 * 2 + 1] = (uint)((ulonglong)uVar21 >> 0x20);
    iVar17 = iVar17 + 1;
  } while (iVar17 < 3);
  puVar6 = (uint *)FUN_0042f040(&local_14,param_1 + 0x1440);
  uVar14 = *puVar6;
  uVar12 = puVar6[1];
  uVar1 = puVar6[2];
  uVar9 = local_38[0] + uVar14 * 0x10000;
  iVar10 = local_38[1] + (((int)uVar14 >> 0x1f) << 0x10 | uVar14 >> 0x10) +
           (uint)CARRY4(local_38[0],uVar14 * 0x10000);
  uVar18 = local_38[2] + uVar12 * 0x10000;
  iVar11 = local_38[3] + (((int)uVar12 >> 0x1f) << 0x10 | uVar12 >> 0x10) +
           (uint)CARRY4(local_38[2],uVar12 * 0x10000);
  uVar12 = local_38[4] + uVar1 * 0x10000;
  iVar19 = local_38[5] + (((int)uVar1 >> 0x1f) << 0x10 | uVar1 >> 0x10) +
           (uint)CARRY4(local_38[4],uVar1 * 0x10000);
  iVar17 = __alldiv(uVar9,iVar10,0x10000,0);
  iVar17 = (int)((iVar17 >> 0x1f & 7U) + iVar17) >> 3;
  iVar7 = __alldiv(uVar18,iVar11,0x10000,0);
  uVar14 = iVar17 - 1;
  iVar17 = iVar17 + 1;
  iVar7 = (int)(iVar7 + (iVar7 >> 0x1f & 7U)) >> 3;
  if ((int)uVar14 <= iVar17) {
    uVar1 = iVar7 - 1;
    uVar3 = uVar1;
    do {
      for (; (int)uVar3 <= iVar7 + 1; uVar3 = uVar3 + 1) {
        if ((((-1 < (int)uVar14) && (-1 < (int)uVar3)) && ((int)uVar14 < 0x200000)) &&
           ((int)uVar3 < 0x200000)) {
          iVar8 = ((int)uVar3 >> 0x1f & 0x1fU) + uVar3;
          uVar13 = iVar8 >> 5;
          iVar16 = ((int)uVar14 >> 0x1f & 0x1fU) + uVar14;
          uVar15 = iVar16 >> 5;
          if (((-1 < (int)uVar15) && (-1 < (int)uVar13)) &&
             (((int)uVar15 < 0x10000 && ((int)uVar13 < 0x10000)))) {
            iVar16 = (int)(uVar15 + (iVar16 >> 0x1f & 0x3fU)) >> 6;
            iVar8 = (int)((iVar8 >> 0x1f & 0x3fU) + uVar13) >> 6;
            if (((-1 < iVar16) && (-1 < iVar8)) &&
               ((iVar16 < 0x400 &&
                ((iVar8 < 0x400 &&
                 (iVar8 = *(int *)(in_ECX + 0xbc + (iVar16 * 0x400 + iVar8) * 4), iVar8 != 0)))))) {
              uVar15 = uVar15 & 0x8000003f;
              if ((int)uVar15 < 0) {
                uVar15 = (uVar15 - 1 | 0xffffffc0) + 1;
              }
              uVar13 = uVar13 & 0x8000003f;
              if ((int)uVar13 < 0) {
                uVar13 = (uVar13 - 1 | 0xffffffc0) + 1;
              }
              iVar8 = *(int *)(iVar8 + 0x10018 + (uVar15 * 0x40 + uVar13) * 4);
              if (iVar8 != 0) {
                uVar15 = uVar3 & 0x8000001f;
                if ((int)uVar15 < 0) {
                  uVar15 = (uVar15 - 1 | 0xffffffe0) + 1;
                }
                uVar13 = uVar14 & 0x8000001f;
                if ((int)uVar13 < 0) {
                  uVar13 = (uVar13 - 1 | 0xffffffe0) + 1;
                }
                piVar5 = (int *)(*(int *)(iVar8 + 0xac) + (uVar15 * 0x20 + uVar13) * 8);
                if ((piVar5 != (int *)0x0) &&
                   (piVar20 = *(int **)*piVar5, piVar20 != (int *)*piVar5)) {
                  do {
                    piVar2 = (int *)piVar20[2];
                    iVar8 = *piVar2;
                    if (((iVar8 != 7) && ((iVar8 != 6 && (iVar8 != 9)))) &&
                       (((iVar8 != 1 &&
                         ((((iVar8 != 8 && (iVar8 != 2)) && (iVar8 != 3)) && (iVar8 != 5)))) ||
                        ((char)piVar2[0xc] != '\0')))) {
                      local_c = (float)piVar2[0xb];
                      local_14 = *(undefined8 *)(piVar2 + 9);
                      uVar21 = FUN_0068d946();
                      iVar8 = (int)((ulonglong)uVar21 >> 0x20);
                      uVar15 = (uint)uVar21;
                      lVar22 = FUN_0068d946();
                      if (CONCAT44((piVar2[3] - iVar8) - (uint)((uint)piVar2[2] < uVar15),
                                   piVar2[2] - uVar15) <= lVar22 + CONCAT44(iVar10,uVar9)) {
                        iVar16 = (iVar10 - (int)((ulonglong)lVar22 >> 0x20)) -
                                 (uint)(uVar9 < (uint)lVar22);
                        iVar8 = iVar8 + piVar2[3] + (uint)CARRY4(uVar15,piVar2[2]);
                        if ((iVar16 <= iVar8) &&
                           ((iVar16 < iVar8 || (uVar9 - (uint)lVar22 < uVar15 + piVar2[2])))) {
                          uVar21 = FUN_0068d946();
                          iVar8 = (int)((ulonglong)uVar21 >> 0x20);
                          uVar15 = (uint)uVar21;
                          lVar22 = FUN_0068d946();
                          if (CONCAT44((piVar2[5] - iVar8) - (uint)((uint)piVar2[4] < uVar15),
                                       piVar2[4] - uVar15) <= lVar22 + CONCAT44(iVar11,uVar18)) {
                            iVar16 = (iVar11 - (int)((ulonglong)lVar22 >> 0x20)) -
                                     (uint)(uVar18 < (uint)lVar22);
                            iVar8 = iVar8 + piVar2[5] + (uint)CARRY4(uVar15,piVar2[4]);
                            if ((iVar16 <= iVar8) &&
                               ((iVar16 < iVar8 || (uVar18 - (uint)lVar22 < uVar15 + piVar2[4])))) {
                              lVar23 = FUN_0068d946();
                              lVar22 = lVar23 + CONCAT44(iVar19,uVar12);
                              iVar8 = (int)((ulonglong)lVar22 >> 0x20);
                              if ((piVar2[7] <= iVar8) &&
                                 ((piVar2[7] < iVar8 || ((uint)piVar2[6] <= (uint)lVar22)))) {
                                uVar21 = FUN_0068d946();
                                iVar16 = (int)((ulonglong)uVar21 >> 0x20) + piVar2[7] +
                                         (uint)CARRY4((uint)uVar21,piVar2[6]);
                                iVar8 = (iVar19 - (int)((ulonglong)lVar23 >> 0x20)) -
                                        (uint)(uVar12 < (uint)lVar23);
                                if ((iVar8 <= iVar16) &&
                                   ((iVar8 < iVar16 ||
                                    (uVar12 - (uint)lVar23 < (uint)uVar21 + piVar2[6])))) {
                                  FUN_0058e7d0(local_38 + 4,0,piVar20 + 2,DAT_0076dda2);
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                    piVar20 = (int *)*piVar20;
                  } while (piVar20 != (int *)*piVar5);
                }
              }
            }
          }
        }
      }
      uVar14 = uVar14 + 1;
      uVar3 = uVar1;
    } while ((int)uVar14 <= iVar17);
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


/* FUN_005aaab0 @ 005aaab0  kind=gamemisc  attributed-by=logic:caller-vote  size=10330 */

/* WARNING: Removing unreachable block (ram,0x005abcd8) */
/* WARNING: Removing unreachable block (ram,0x005ab7ba) */
/* WARNING: Removing unreachable block (ram,0x005ab8ae) */
/* WARNING: Removing unreachable block (ram,0x005abb81) */
/* WARNING: Removing unreachable block (ram,0x005abddb) */
/* WARNING: Removing unreachable block (ram,0x005abf27) */
/* WARNING: Removing unreachable block (ram,0x005ac170) */
/* WARNING: Removing unreachable block (ram,0x005ac26b) */

void FUN_005aaab0(int param_1)

{
  undefined4 *puVar1;
  longlong lVar2;
  int iVar3;
  int iVar4;
  char cVar5;
  int *piVar6;
  undefined *puVar7;
  float fVar8;
  undefined4 *puVar9;
  undefined4 *puVar10;
  undefined4 **ppuVar11;
  int *piVar12;
  undefined4 uVar13;
  int iVar14;
  char cVar15;
  int iVar16;
  uint uVar17;
  undefined4 *puVar18;
  int *piVar19;
  char cVar20;
  int *piVar21;
  int iVar22;
  uint uVar23;
  uint *puVar24;
  uint uVar25;
  float fVar26;
  uint uVar27;
  uint uVar28;
  int iVar29;
  bool bVar30;
  undefined8 uVar31;
  longlong lVar32;
  longlong lVar33;
  longlong lVar34;
  longlong lVar35;
  int local_230;
  int local_22c;
  int local_228;
  int local_224;
  undefined8 local_220;
  int local_218;
  int local_214;
  int local_210;
  int local_20c;
  undefined8 local_208;
  int local_200;
  int local_1fc;
  int local_1f8;
  int local_1f4;
  int local_1f0;
  int local_1ec;
  undefined8 local_1e8;
  float local_1e0;
  float local_1dc;
  float local_1d8;
  float local_1d4;
  float local_1d0;
  float local_1cc;
  float local_1c8;
  float local_1c4;
  undefined4 *local_1c0;
  float local_1bc;
  float local_1b8;
  float local_1b4;
  float local_1b0;
  float local_1ac;
  float local_1a8;
  float local_1a4;
  float local_1a0;
  float local_19c;
  float local_198;
  float local_194;
  float local_190;
  float local_18c;
  undefined4 *local_188;
  float local_184;
  int local_180;
  int local_17c;
  uint local_178;
  uint local_174;
  uint local_170;
  uint local_16c;
  uint local_168;
  uint local_164;
  uint local_160;
  uint local_15c;
  uint local_158;
  uint local_154;
  uint local_150;
  uint local_14c;
  uint local_144;
  uint local_140;
  uint local_13c;
  int *local_138;
  uint local_134;
  uint local_130;
  uint local_12c;
  uint local_128;
  float local_124;
  uint local_120;
  uint local_11c;
  uint local_118;
  uint local_114;
  uint local_110;
  uint local_10c;
  uint local_108;
  uint local_104;
  uint local_100;
  uint local_fc;
  int local_f8;
  uint local_f4;
  int local_f0;
  uint local_ec;
  uint local_e8;
  uint local_e4;
  uint local_e0;
  int local_dc;
  float local_d8;
  uint local_d4;
  char local_cd;
  uint local_cc;
  int *local_c8;
  char local_c1;
  uint local_c0;
  uint local_bc;
  float local_b8;
  uint local_b4;
  uint local_b0;
  uint local_ac;
  uint local_a8;
  char local_a1;
  uint local_a0;
  uint local_9c;
  uint local_98;
  int local_94;
  char local_8e;
  byte local_8d;
  uint local_8c;
  int local_88;
  uint local_84;
  int local_80;
  uint local_7c;
  int local_78;
  uint local_74 [3];
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  uint local_50;
  int local_4c;
  uint local_48;
  int local_44;
  uint local_40;
  int local_3c;
  int local_38;
  uint local_34;
  int local_30;
  undefined8 local_2c;
  float local_24;
  int local_20;
  int local_1c;
  int local_18;
  uint local_14;
  uint local_10;
  uint local_c;
  uint local_8;
  
  local_8 = DAT_0076aa78 ^ (uint)&stack0xfffffffc;
  local_94 = param_1;
  if (*(uint *)(param_1 + 0x1410) != 0) {
    uVar27 = *(uint *)(param_1 + 0x1418);
    if ((uVar27 < 0x1f5) && (*(uint *)(param_1 + 0x1410) < 0x4e21)) {
      local_f8 = param_1 + 0x1440;
      FUN_0042f040(&local_2c,local_f8);
      if (uVar27 != 0) {
        iVar22 = -1;
        piVar12 = (int *)**(int **)(param_1 + 0x1414);
        local_c8 = (int *)0x0;
        local_104 = (uint)piVar12;
        if (piVar12 != *(int **)(param_1 + 0x1414)) {
          do {
            uVar27 = local_104;
            puVar1 = *(undefined4 **)(local_104 + 0x10);
            piVar6 = (int *)FUN_005a9da0(*puVar1,puVar1[1],puVar1[2]);
            if ((piVar6 != (int *)0x0) && ((local_c8 == (int *)0x0 || (piVar6[2] < iVar22)))) {
              iVar22 = piVar6[2];
              piVar12 = (int *)uVar27;
              local_c8 = piVar6;
            }
            FUN_005c3ea0();
          } while (local_104 != *(uint *)(local_94 + 0x1414));
        }
        iVar22 = local_94;
        puVar24 = *(uint **)((int)piVar12 + 0x10);
        local_a0 = puVar24[1];
        uVar27 = puVar24[2];
        local_a8 = *puVar24;
        local_9c = uVar27;
        local_74[0] = local_a8;
        local_74[1] = local_a0;
        local_74[2] = uVar27;
        FUN_0043f470(&local_138,piVar12);
        iVar16 = 0;
        do {
          if (*(int *)((int)local_74 + iVar16) != *(int *)((int)&local_2c + iVar16)) {
            local_34 = ((int)local_a8 >> 0x1f) << 0x10 | local_a8 >> 0x10;
            local_38 = local_a8 << 0x10;
            local_30 = local_a0 << 0x10;
            local_58 = (double)*(float *)(iVar22 + 0x88) * 0.5 * 65536.0;
            local_24 = (float)(((int)uVar27 >> 0x1f) << 0x10 | uVar27 >> 0x10);
            local_2c = CONCAT44(uVar27 << 0x10,((int)local_a0 >> 0x1f) << 0x10 | local_a0 >> 0x10);
            piVar12 = &local_38;
            puVar24 = &local_50;
            uVar31 = FUN_0068d946(puVar24,piVar12);
            local_68 = FUN_0068d946();
            local_58 = (double)uVar31;
            local_60 = local_68;
            FUN_0042c800(puVar24,piVar12);
            local_2c = 0;
            local_24 = 0.01;
            FUN_0042c460(&local_2c);
            local_24 = *(float *)(iVar22 + 0x88) * 0.5;
            local_2c = CONCAT44(*(float *)(iVar22 + 0x84) * 0.5,*(float *)(iVar22 + 0x80) * 0.5);
            FUN_0042c460(&local_2c);
            local_12c = local_50 - (uint)local_68;
            local_130 = (local_4c - local_68._4_4_) - (uint)(local_50 < (uint)local_68);
            local_38 = local_8c + local_12c;
            local_34 = local_88 + local_130 + (uint)CARRY4(local_8c,local_12c);
            local_30 = local_84 + (local_48 - (uint)local_60);
            local_24 = (float)(local_78 +
                               ((local_3c - local_58._4_4_) - (uint)(local_40 < (uint)local_58)) +
                              (uint)CARRY4(local_7c,local_40 - (uint)local_58));
            local_2c = CONCAT44(local_7c + (local_40 - (uint)local_58),
                                local_80 +
                                ((local_44 - local_60._4_4_) - (uint)(local_48 < (uint)local_60)) +
                                (uint)CARRY4(local_84,local_48 - (uint)local_60));
            FUN_0042f040((int)&local_60 + 4,&local_38);
            local_24 = *(float *)(local_94 + 0x88) * 0.5;
            local_2c = CONCAT44(*(float *)(local_94 + 0x84) * 0.5,*(float *)(local_94 + 0x80) * 0.5)
            ;
            FUN_0042c460(&local_2c);
            local_20 = local_50 + local_8c;
            local_1c = local_4c + local_88 + (uint)CARRY4(local_50,local_8c);
            local_18 = local_48 + local_84;
            local_14 = local_44 + local_80 + (uint)CARRY4(local_48,local_84);
            local_10 = local_40 + local_7c;
            local_c = local_3c + local_78 + (uint)CARRY4(local_40,local_7c);
            FUN_0042f040(&local_2c,&local_20);
            local_d8 = (float)(local_58._4_4_ + -1);
            local_b8 = (float)((int)local_24 + 1);
            uVar23 = local_60._4_4_ - 1;
            uVar25 = (uint)local_58 - 1;
            uVar27 = (int)(float)local_2c + 1;
            local_d4 = (int)local_2c._4_4_ + 1;
            local_13c = (int)(uVar23 + ((int)uVar23 >> 0x1f & 7U)) >> 3;
            local_12c = (int)(uVar25 + ((int)uVar25 >> 0x1f & 7U)) >> 3;
            local_17c = (int)(uVar27 + ((int)uVar27 >> 0x1f & 7U)) >> 3;
            local_180 = (int)(local_d4 + ((int)local_d4 >> 0x1f & 7U)) >> 3;
            local_150 = local_150 & 0xffffff00;
            local_158 = local_158 & 0xffffff00;
            local_160 = local_160 & 0xffffff00;
            local_15c = local_15c & 0xffffff00;
            local_8e = '\0';
            local_e8 = local_e8 & 0xffffff00;
            local_f4 = local_f4 & 0xffffff00;
            local_108 = local_108 & 0xffffff00;
            local_e4 = local_e4 & 0xffffff00;
            local_98 = local_98 & 0xffffff00;
            local_168 = local_168 & 0xffffff00;
            local_178 = local_178 & 0xffffff00;
            local_154 = local_154 & 0xffffff00;
            local_164 = local_164 & 0xffffff00;
            local_140 = local_140 & 0xffffff00;
            local_144 = local_144 & 0xffffff00;
            local_14c = local_14c & 0xffffff00;
            local_170 = local_170 & 0xffffff00;
            local_10c = local_10c & 0xffffff00;
            local_16c = local_16c & 0xffffff00;
            local_174 = local_174 & 0xffffff00;
            local_104 = local_104 & 0xffffff00;
            local_118 = local_118 & 0xffffff00;
            local_120 = local_120 & 0xffffff00;
            local_110 = local_110 & 0xffffff00;
            local_114 = local_114 & 0xffffff00;
            local_134 = local_134 & 0xffffff00;
            local_bc = uVar23;
            local_b0 = uVar25;
            local_ac = uVar27;
            uVar31 = FUN_0068d946();
            iVar22 = FUN_0042f860(local_50,local_4c,local_48,local_44,local_40 - (uint)uVar31,
                                  (local_3c - (int)((ulonglong)uVar31 >> 0x20)) -
                                  (uint)(local_40 < (uint)uVar31),0);
            local_8d = *(byte *)(iVar22 + 3) >> 1 & 1;
            local_c0 = 1;
            uVar17 = local_d4;
            if ((int)uVar23 <= (int)uVar27) {
              do {
                fVar8 = local_d8;
                uVar28 = uVar25;
                if ((int)uVar25 <= (int)uVar17) {
                  do {
                    fVar26 = fVar8;
                    if ((int)fVar8 <= (int)local_b8) {
                      do {
                        if ((((((int)uVar23 <= (int)local_bc) || ((int)local_ac <= (int)uVar23)) ||
                             ((int)uVar28 <= (int)uVar25)) ||
                            (((int)uVar17 <= (int)uVar28 || ((int)fVar26 <= (int)fVar8)))) ||
                           ((int)local_b8 <= (int)fVar26)) {
                          if ((((int)uVar23 < 0) || ((int)uVar28 < 0)) ||
                             ((0xffffff < (int)uVar23 || (0xffffff < (int)uVar28)))) {
LAB_005ab0ca:
                            puVar7 = &DAT_0076ddac;
                          }
                          else {
                            iVar22 = FUN_00434d10((int)(uVar23 + ((int)uVar23 >> 0x1f & 0xffU)) >> 8
                                                  ,(int)(uVar28 + ((int)uVar28 >> 0x1f & 0xffU)) >>
                                                   8);
                            if (iVar22 == 0) goto LAB_005ab0ca;
                            uVar27 = uVar28 & 0x800000ff;
                            if ((int)uVar27 < 0) {
                              uVar27 = (uVar27 - 1 | 0xffffff00) + 1;
                            }
                            uVar17 = uVar23 & 0x800000ff;
                            if ((int)uVar17 < 0) {
                              uVar17 = (uVar17 - 1 | 0xffffff00) + 1;
                            }
                            iVar22 = (uVar27 * 0x100 + uVar17) * 0x20 + *(int *)(iVar22 + 0xa8);
                            if ((iVar22 == 0) ||
                               (iVar16 = *(int *)(iVar22 + 0x10), (int)fVar26 < iVar16))
                            goto LAB_005ab0ca;
                            if ((int)fVar26 < *(int *)(iVar22 + 0x1c) + iVar16) {
                              puVar7 = (undefined *)FUN_0042f730((int)fVar26 - iVar16);
                              if ((((puVar7[3] & 0x1f) == 0) && ((int)fVar26 < 1)) &&
                                 ((puVar7[3] & 0x40) == 0)) {
                                puVar7 = &DAT_0076dda4;
                              }
                            }
                            else {
                              puVar7 = &DAT_0076dda4;
                              if (0 < (int)fVar26) {
                                puVar7 = &DAT_0076dda8;
                              }
                            }
                          }
                          fVar8 = local_d8;
                          uVar17 = local_d4;
                          uVar25 = local_b0;
                          if (((puVar7[3] & 0x1f) != 0) && ((puVar7[3] & 0x1f) != 2)) {
                            if ((uVar23 == local_bc) &&
                               ((uVar28 == local_b0 &&
                                (local_10c = local_10c & 0xff, fVar26 == local_d8)))) {
                              local_10c = local_c0;
                            }
                            if (((uVar23 == local_ac) && (uVar28 == local_b0)) &&
                               (local_16c = local_16c & 0xff, fVar26 == local_d8)) {
                              local_16c = local_c0;
                            }
                            if (((uVar23 == local_bc) && (uVar28 == local_d4)) &&
                               (local_174 = local_174 & 0xff, fVar26 == local_d8)) {
                              local_174 = local_c0;
                            }
                            if (((uVar23 == local_ac) && (uVar28 == local_d4)) &&
                               (local_104 = local_104 & 0xff, fVar26 == local_d8)) {
                              local_104 = local_c0;
                            }
                            if ((((uVar23 == local_bc) && (uVar28 == local_b0)) &&
                                ((int)local_d8 < (int)fVar26)) &&
                               (local_118 = local_118 & 0xff, (int)fVar26 < (int)local_b8)) {
                              local_118 = local_c0;
                            }
                            if (((uVar23 == local_ac) && (uVar28 == local_b0)) &&
                               (((int)local_d8 < (int)fVar26 &&
                                (local_120 = local_120 & 0xff, (int)fVar26 < (int)local_b8)))) {
                              local_120 = local_c0;
                            }
                            if (((uVar23 == local_bc) && (uVar28 == local_d4)) &&
                               (((int)local_d8 < (int)fVar26 &&
                                (local_110 = local_110 & 0xff, (int)fVar26 < (int)local_b8)))) {
                              local_110 = local_c0;
                            }
                            if ((((uVar23 == local_ac) && (uVar28 == local_d4)) &&
                                ((int)local_d8 < (int)fVar26)) &&
                               (local_114 = local_114 & 0xff, (int)fVar26 < (int)local_b8)) {
                              local_114 = local_c0;
                            }
                            if ((((int)local_bc < (int)uVar23) && ((int)uVar23 < (int)local_ac)) &&
                               ((int)local_b0 < (int)uVar28)) {
                              if (((int)uVar28 < (int)local_d4) &&
                                 (local_98 = local_98 & 0xff, fVar26 == local_d8)) {
                                local_98 = local_c0;
                              }
                              if ((((int)local_b0 < (int)uVar28) && ((int)uVar28 < (int)local_d4))
                                 && (local_134 = local_134 & 0xff, fVar26 == local_b8)) {
                                local_134 = local_c0;
                              }
                            }
                            if (((uVar23 == local_bc) && ((int)local_b0 < (int)uVar28)) &&
                               (((int)uVar28 < (int)local_d4 &&
                                (local_168 = local_168 & 0xff, fVar26 == local_d8)))) {
                              local_168 = local_c0;
                            }
                            if (((uVar23 == local_ac) && ((int)local_b0 < (int)uVar28)) &&
                               (((int)uVar28 < (int)local_d4 &&
                                (local_178 = local_178 & 0xff, fVar26 == local_d8)))) {
                              local_178 = local_c0;
                            }
                            if ((((uVar28 == local_b0) && ((int)local_bc < (int)uVar23)) &&
                                ((int)uVar23 < (int)local_ac)) &&
                               (local_154 = local_154 & 0xff, fVar26 == local_d8)) {
                              local_154 = local_c0;
                            }
                            if (((uVar28 == local_d4) && ((int)local_bc < (int)uVar23)) &&
                               (((int)uVar23 < (int)local_ac &&
                                (local_164 = local_164 & 0xff, fVar26 == local_d8)))) {
                              local_164 = local_c0;
                            }
                            if (((uVar23 == local_bc) && ((int)local_b0 < (int)uVar28)) &&
                               (((int)uVar28 < (int)local_d4 &&
                                (local_140 = local_140 & 0xff, fVar26 == local_b8)))) {
                              local_140 = local_c0;
                            }
                            if ((((uVar23 == local_ac) && ((int)local_b0 < (int)uVar28)) &&
                                ((int)uVar28 < (int)local_d4)) &&
                               (local_144 = local_144 & 0xff, fVar26 == local_b8)) {
                              local_144 = local_c0;
                            }
                            if (((uVar28 == local_b0) && ((int)local_bc < (int)uVar23)) &&
                               (((int)uVar23 < (int)local_ac &&
                                (local_14c = local_14c & 0xff, fVar26 == local_b8)))) {
                              local_14c = local_c0;
                            }
                            if (((uVar28 == local_d4) && ((int)local_bc < (int)uVar23)) &&
                               (((int)uVar23 < (int)local_ac &&
                                (local_170 = local_170 & 0xff, fVar26 == local_d8)))) {
                              local_170 = local_c0;
                            }
                            if ((((uVar23 == local_bc) && ((int)local_b0 < (int)uVar28)) &&
                                ((int)uVar28 < (int)local_d4)) &&
                               (((int)local_d8 < (int)fVar26 &&
                                (local_e8 = local_e8 & 0xff, (int)fVar26 < (int)local_b8)))) {
                              local_e8 = local_c0;
                            }
                            if (((uVar23 == local_ac) && ((int)local_b0 < (int)uVar28)) &&
                               (((int)uVar28 < (int)local_d4 &&
                                (((int)local_d8 < (int)fVar26 &&
                                 (local_f4 = local_f4 & 0xff, (int)fVar26 < (int)local_b8)))))) {
                              local_f4 = local_c0;
                            }
                            if ((((uVar28 == local_b0) && ((int)local_bc < (int)uVar23)) &&
                                ((int)uVar23 < (int)local_ac)) &&
                               (((int)local_d8 < (int)fVar26 &&
                                (local_108 = local_108 & 0xff, (int)fVar26 < (int)local_b8)))) {
                              local_108 = local_c0;
                            }
                            if (((uVar28 == local_d4) && ((int)local_bc < (int)uVar23)) &&
                               (((int)uVar23 < (int)local_ac &&
                                (((int)local_d8 < (int)fVar26 &&
                                 (local_e4 = local_e4 & 0xff, (int)fVar26 < (int)local_b8)))))) {
                              local_e4 = local_c0;
                            }
                          }
                        }
                        fVar26 = (float)((int)fVar26 + 1);
                      } while ((int)fVar26 <= (int)local_b8);
                    }
                    uVar28 = uVar28 + 1;
                    uVar27 = local_ac;
                  } while ((int)uVar28 <= (int)uVar17);
                }
                uVar23 = uVar23 + 1;
              } while ((int)uVar23 <= (int)uVar27);
            }
            lVar33 = CONCAT44(local_cc,local_b4);
            lVar32 = CONCAT44(local_f0,local_c0);
            lVar2 = CONCAT44(local_dc,local_ec);
            lVar34 = CONCAT44(local_fc,local_bc);
            uVar27 = local_12c;
            iVar22 = local_17c;
            iVar16 = local_180;
            if ((int)local_13c <= local_17c) {
              do {
                uVar17 = uVar27;
                uVar25 = local_13c;
                local_130 = uVar27;
                if ((int)uVar27 <= iVar16) {
                  do {
                    local_cc = (uint)((ulonglong)lVar33 >> 0x20);
                    local_b4 = (uint)lVar33;
                    local_f0 = (int)((ulonglong)lVar32 >> 0x20);
                    local_c0 = (uint)lVar32;
                    local_dc = (int)((ulonglong)lVar2 >> 0x20);
                    local_ec = (uint)lVar2;
                    local_fc = (uint)((ulonglong)lVar34 >> 0x20);
                    local_bc = (uint)lVar34;
                    if ((((-1 < (int)uVar25) && (-1 < (int)uVar27)) && ((int)uVar25 < 0x200000)) &&
                       ((int)uVar27 < 0x200000)) {
                      local_130 = uVar27;
                      iVar22 = FUN_00434d10((int)(uVar25 + ((int)uVar25 >> 0x1f & 0x1fU)) >> 5,
                                            (int)(uVar27 + ((int)uVar27 >> 0x1f & 0x1fU)) >> 5);
                      lVar33 = CONCAT44(local_cc,local_b4);
                      lVar32 = CONCAT44(local_f0,local_c0);
                      lVar2 = CONCAT44(local_dc,local_ec);
                      lVar34 = CONCAT44(local_fc,local_bc);
                      if (iVar22 != 0) {
                        uVar17 = uVar27 & 0x8000001f;
                        if ((int)uVar17 < 0) {
                          uVar17 = (uVar17 - 1 | 0xffffffe0) + 1;
                        }
                        uVar23 = uVar25 & 0x8000001f;
                        if ((int)uVar23 < 0) {
                          uVar23 = (uVar23 - 1 | 0xffffffe0) + 1;
                        }
                        puVar1 = (undefined4 *)
                                 (*(int *)(iVar22 + 0xac) + (uVar17 * 0x20 + uVar23) * 8);
                        if (puVar1 != (undefined4 *)0x0) {
                          local_138 = (int *)*puVar1;
                          piVar12 = (int *)*local_138;
                          uVar25 = local_13c;
                          if (piVar12 != local_138) {
                            puVar1 = *(undefined4 **)(local_94 + 0x1468);
                            do {
                              local_cc = (uint)((ulonglong)lVar33 >> 0x20);
                              local_b4 = (uint)lVar33;
                              local_f0 = (int)((ulonglong)lVar32 >> 0x20);
                              local_c0 = (uint)lVar32;
                              local_dc = (int)((ulonglong)lVar2 >> 0x20);
                              local_ec = (uint)lVar2;
                              local_fc = (uint)((ulonglong)lVar34 >> 0x20);
                              local_bc = (uint)lVar34;
                              if (*(char *)((int)puVar1[1] + 0xd) == '\0') {
                                puVar9 = (undefined4 *)puVar1[1];
                                puVar18 = puVar1;
                                do {
                                  if ((uint)puVar9[4] < (uint)piVar12[2]) {
                                    puVar10 = (undefined4 *)puVar9[2];
                                  }
                                  else {
                                    puVar10 = (undefined4 *)*puVar9;
                                    puVar18 = puVar9;
                                  }
                                  puVar9 = puVar10;
                                } while (*(char *)((int)puVar10 + 0xd) == '\0');
                                if ((puVar18 == puVar1) || ((uint)piVar12[2] < (uint)puVar18[4]))
                                goto LAB_005ab6a0;
                                local_188 = puVar18;
                                ppuVar11 = &local_188;
                              }
                              else {
LAB_005ab6a0:
                                local_1c0 = puVar1;
                                ppuVar11 = &local_1c0;
                              }
                              if (*ppuVar11 == puVar1) {
                                piVar6 = (int *)piVar12[2];
                                local_24 = (float)piVar6[0xb];
                                uVar31 = *(undefined8 *)(piVar6 + 9);
                                uVar27 = piVar6[8] & 0x80000001;
                                bVar30 = uVar27 == 0;
                                if ((int)uVar27 < 0) {
                                  bVar30 = (uVar27 - 1 | 0xfffffffe) == 0xffffffff;
                                }
                                local_2c._0_4_ = (float)uVar31;
                                local_2c._4_4_ = (float)((ulonglong)uVar31 >> 0x20);
                                if (bVar30) {
                                  local_d8 = local_2c._4_4_;
                                  local_2c._4_4_ = (float)local_2c;
                                }
                                else {
                                  local_d8 = (float)local_2c;
                                }
                                local_11c = piVar6[3];
                                local_1c8 = local_2c._4_4_ * 0.5 * 65536.0;
                                local_2c = uVar31;
                                uVar31 = FUN_0068d946();
                                local_d4 = (uint)((ulonglong)uVar31 >> 0x20);
                                local_128 = (uint)uVar31;
                                local_b8 = (float)(piVar6[2] - local_128);
                                local_b0 = (piVar6[3] - local_d4) -
                                           (uint)((uint)piVar6[2] < local_128);
                                local_1b0 = *(float *)(local_94 + 0x80) * 0.5 * 65536.0;
                                lVar32 = FUN_0068d946();
                                local_f0 = (int)((ulonglong)lVar32 >> 0x20);
                                local_c0 = (uint)lVar32;
                                lVar34 = lVar32 + CONCAT44(local_4c,local_50);
                                local_bc = (uint)lVar34;
                                local_fc = (uint)((ulonglong)lVar34 >> 0x20);
                                local_124 = local_24;
                                uVar27 = local_ec;
                                lVar33 = CONCAT44(local_cc,local_b4);
                                if (CONCAT44(local_b0,local_b8) <= lVar34) {
                                  local_cc = local_50 - local_c0;
                                  iVar16 = (local_4c - local_f0) - (uint)(local_50 < local_c0);
                                  iVar22 = local_d4 + piVar6[3] + (uint)CARRY4(local_128,piVar6[2]);
                                  lVar33 = CONCAT44(local_cc,local_b4);
                                  if ((iVar16 <= iVar22) &&
                                     ((iVar16 < iVar22 ||
                                      (lVar33 = CONCAT44(local_cc,local_b4),
                                      local_cc < local_128 + piVar6[2])))) {
                                    local_1ac = local_d8 * 0.5 * 65536.0;
                                    uVar31 = FUN_0068d946();
                                    local_dc = (int)((ulonglong)uVar31 >> 0x20);
                                    local_ec = (uint)uVar31;
                                    local_18c = *(float *)(local_94 + 0x84) * 0.5 * 65536.0;
                                    lVar33 = FUN_0068d946();
                                    local_cc = (uint)((ulonglong)lVar33 >> 0x20);
                                    local_e0 = piVar6[4] - local_ec;
                                    lVar2 = lVar33 + CONCAT44(local_44,local_48);
                                    uVar27 = (uint)lVar2;
                                    lVar34 = CONCAT44(local_fc,local_bc);
                                    lVar32 = CONCAT44(local_f0,local_c0);
                                    if (CONCAT44((piVar6[5] - local_dc) -
                                                 (uint)((uint)piVar6[4] < local_ec),local_e0) <=
                                        lVar2) {
                                      iVar16 = local_dc + piVar6[5] +
                                               (uint)CARRY4(local_ec,piVar6[4]);
                                      local_b4 = local_48 - (uint)lVar33;
                                      iVar22 = (local_44 - local_cc) -
                                               (uint)(local_48 < (uint)lVar33);
                                      lVar34 = CONCAT44(local_fc,local_bc);
                                      lVar32 = CONCAT44(local_f0,local_c0);
                                      lVar33 = CONCAT44(local_cc,local_b4);
                                      if ((iVar22 <= iVar16) &&
                                         ((iVar22 < iVar16 ||
                                          (lVar34 = CONCAT44(local_fc,local_bc),
                                          lVar32 = CONCAT44(local_f0,local_c0),
                                          lVar33 = CONCAT44(local_cc,local_b4),
                                          local_b4 < local_ec + piVar6[4])))) {
                                        local_1d0 = *(float *)(local_94 + 0x88) * 0.5 * 65536.0;
                                        local_ec = uVar27;
                                        lVar34 = FUN_0068d946();
                                        local_e0 = (uint)((ulonglong)lVar34 >> 0x20);
                                        local_b4 = (uint)lVar34;
                                        lVar34 = lVar34 + CONCAT44(local_3c,local_40);
                                        uVar17 = (uint)lVar34;
                                        iVar22 = (int)((ulonglong)lVar34 >> 0x20) -
                                                 (uint)(uVar17 < 0x10000);
                                        uVar27 = local_ec;
                                        lVar34 = CONCAT44(local_fc,local_bc);
                                        lVar32 = CONCAT44(local_f0,local_c0);
                                        lVar33 = CONCAT44(local_cc,local_b4);
                                        if ((piVar6[7] <= iVar22) &&
                                           ((piVar6[7] < iVar22 ||
                                            (lVar34 = CONCAT44(local_fc,local_bc),
                                            lVar32 = CONCAT44(local_f0,local_c0),
                                            lVar33 = CONCAT44(local_cc,local_b4),
                                            (uint)piVar6[6] <= uVar17 - 0x10000)))) {
                                          local_1d8 = local_124 * 65536.0;
                                          uVar31 = FUN_0068d946();
                                          uVar27 = (uint)uVar31 + piVar6[6];
                                          iVar16 = (int)((ulonglong)uVar31 >> 0x20) + piVar6[7] +
                                                   (uint)CARRY4((uint)uVar31,piVar6[6]);
                                          iVar22 = ((local_3c - local_e0) -
                                                   (uint)(local_40 < local_b4)) -
                                                   (uint)(local_40 - local_b4 < 0x10000);
                                          lVar34 = CONCAT44(local_fc,local_bc);
                                          lVar32 = CONCAT44(local_f0,local_c0);
                                          lVar33 = CONCAT44(local_cc,local_b4);
                                          if ((iVar22 <= iVar16) &&
                                             ((iVar22 < iVar16 ||
                                              (lVar34 = CONCAT44(local_fc,local_bc),
                                              lVar32 = CONCAT44(local_f0,local_c0),
                                              lVar33 = CONCAT44(local_cc,local_b4),
                                              (local_40 - local_b4) - 0x10000 < uVar27)))) {
                                            local_8e = '\x01';
                                            lVar34 = CONCAT44(local_fc,local_bc);
                                            lVar32 = CONCAT44(local_f0,local_c0);
                                            lVar33 = CONCAT44(local_cc,local_b4);
                                          }
                                        }
                                      }
                                    }
                                  }
                                }
                                local_ec = uVar27;
                                lVar2 = CONCAT44(local_dc,local_ec);
                                local_b4 = (uint)lVar33;
                                local_f0 = (int)((ulonglong)lVar32 >> 0x20);
                                local_c0 = (uint)lVar32;
                                local_fc = (uint)((ulonglong)lVar34 >> 0x20);
                                local_bc = (uint)lVar34;
                                if (((((3.0 < (float)piVar6[0xb] || (float)piVar6[0xb] == 3.0) ||
                                      ((char)local_134 != '\0')) || ((char)local_140 != '\0')) ||
                                    ((((char)local_144 != '\0' || ((char)local_14c != '\0')) ||
                                     ((char)local_170 != '\0')))) &&
                                   (((iVar22 = *piVar6, iVar22 != 1 && (iVar22 != 2)) &&
                                    ((iVar22 != 8 && ((iVar22 != 7 && (iVar22 != 6)))))))) {
                                  local_cc = 0;
                                  piVar19 = (int *)(local_94 + 0x1478);
                                  piVar21 = piVar12 + 3;
                                  do {
                                    if (*piVar21 != *piVar19) {
                                      iVar22 = local_fc - (local_bc < 0x10000);
                                      uVar27 = local_b4;
                                      lVar35 = CONCAT44(local_dc,local_ec);
                                      if (((int)local_b0 <= iVar22) &&
                                         (((int)local_b0 < iVar22 ||
                                          (lVar35 = CONCAT44(local_dc,local_ec),
                                          (uint)local_b8 <= local_bc - 0x10000)))) {
                                        iVar16 = ((local_4c - local_f0) -
                                                 (uint)(local_50 < local_c0)) -
                                                 (uint)(local_50 - local_c0 < 0x10000);
                                        local_b4 = local_128 + piVar6[2];
                                        iVar22 = local_d4 + piVar6[3] +
                                                 (uint)CARRY4(local_128,piVar6[2]);
                                        uVar27 = local_b4;
                                        lVar35 = CONCAT44(local_dc,local_ec);
                                        if ((iVar16 <= iVar22) &&
                                           ((iVar16 < iVar22 ||
                                            (lVar35 = lVar2,
                                            (local_50 - local_c0) - 0x10000 < local_b4)))) {
                                          local_1e0 = local_d8 * 0.5 * 65536.0;
                                          uVar31 = FUN_0068d946();
                                          local_cc = (uint)((ulonglong)uVar31 >> 0x20);
                                          local_b4 = (uint)uVar31;
                                          local_1cc = *(float *)(local_94 + 0x84) * 0.5 * 65536.0;
                                          lVar35 = FUN_0068d946();
                                          local_dc = (int)((ulonglong)lVar35 >> 0x20);
                                          local_ec = (uint)lVar35;
                                          local_e0 = piVar6[4] - local_b4;
                                          lVar33 = lVar35 + CONCAT44(local_44,local_48);
                                          uVar27 = (uint)lVar33;
                                          lVar34 = CONCAT44(local_fc,local_bc);
                                          lVar32 = CONCAT44(local_f0,local_c0);
                                          if (CONCAT44((piVar6[5] - local_cc) -
                                                       (uint)((uint)piVar6[4] < local_b4),local_e0)
                                              <= lVar33) {
                                            uVar17 = local_b4 + piVar6[4];
                                            iVar16 = local_cc + piVar6[5] +
                                                     (uint)CARRY4(local_b4,piVar6[4]);
                                            local_b4 = local_48 - local_ec;
                                            iVar22 = (local_44 - local_dc) -
                                                     (uint)(local_48 < local_ec);
                                            uVar27 = local_b4;
                                            lVar34 = CONCAT44(local_fc,local_bc);
                                            lVar32 = CONCAT44(local_f0,local_c0);
                                            if ((iVar22 <= iVar16) &&
                                               ((iVar22 < iVar16 ||
                                                (lVar34 = CONCAT44(local_fc,local_bc),
                                                lVar32 = CONCAT44(local_f0,local_c0),
                                                local_b4 < uVar17)))) {
                                              local_184 = *(float *)(local_94 + 0x88) * 0.5 *
                                                          65536.0;
                                              lVar34 = FUN_0068d946();
                                              local_e0 = (uint)((ulonglong)lVar34 >> 0x20);
                                              local_b4 = (uint)lVar34;
                                              local_1e8 = lVar34 + CONCAT44(local_3c,local_40);
                                              cVar5 = FUN_00594690(piVar6 + 6);
                                              uVar27 = local_b4;
                                              lVar34 = CONCAT44(local_fc,local_bc);
                                              lVar32 = CONCAT44(local_f0,local_c0);
                                              lVar35 = CONCAT44(local_dc,local_ec);
                                              if (cVar5 != '\0') {
                                                local_1b8 = local_124 * 65536.0;
                                                uVar31 = FUN_0068d946();
                                                local_1f0 = (uint)uVar31 + piVar6[6];
                                                local_1ec = (int)((ulonglong)uVar31 >> 0x20) +
                                                            piVar6[7] +
                                                            (uint)CARRY4((uint)uVar31,piVar6[6]);
                                                local_1f8 = local_40 - local_b4;
                                                local_1f4 = (local_3c - local_e0) -
                                                            (uint)(local_40 < local_b4);
                                                cVar5 = FUN_00594660(&local_1f0);
                                                local_150 = local_150 & 0xff;
                                                uVar27 = local_b4;
                                                lVar34 = CONCAT44(local_fc,local_bc);
                                                lVar32 = CONCAT44(local_f0,local_c0);
                                                lVar35 = CONCAT44(local_dc,local_ec);
                                                if (cVar5 != '\0') {
                                                  local_150 = 1;
                                                  lVar34 = CONCAT44(local_fc,local_bc);
                                                  lVar32 = CONCAT44(local_f0,local_c0);
                                                  lVar35 = CONCAT44(local_dc,local_ec);
                                                }
                                              }
                                            }
                                          }
                                        }
                                      }
                                      local_b4 = uVar27;
                                      local_dc = (int)((ulonglong)lVar35 >> 0x20);
                                      local_ec = (uint)lVar35;
                                      local_f0 = (int)((ulonglong)lVar32 >> 0x20);
                                      local_c0 = (uint)lVar32;
                                      local_fc = (uint)((ulonglong)lVar34 >> 0x20);
                                      local_bc = (uint)lVar34;
                                      uVar27 = local_b4;
                                      if (CONCAT44(local_b0,local_b8) <= lVar34 + 0x10000) {
                                        iVar16 = ((local_4c - local_f0) -
                                                 (uint)(local_50 < local_c0)) +
                                                 (uint)(0xfffeffff < local_50 - local_c0);
                                        local_b4 = local_128 + piVar6[2];
                                        iVar22 = local_d4 + piVar6[3] +
                                                 (uint)CARRY4(local_128,piVar6[2]);
                                        uVar27 = local_b4;
                                        if ((iVar16 <= iVar22) &&
                                           ((iVar16 < iVar22 ||
                                            ((local_50 - local_c0) + 0x10000 < local_b4)))) {
                                          local_194 = local_d8 * 0.5 * 65536.0;
                                          uVar31 = FUN_0068d946();
                                          local_cc = (uint)((ulonglong)uVar31 >> 0x20);
                                          local_b4 = (uint)uVar31;
                                          local_1bc = *(float *)(local_94 + 0x84) * 0.5 * 65536.0;
                                          lVar35 = FUN_0068d946();
                                          local_dc = (int)((ulonglong)lVar35 >> 0x20);
                                          local_ec = (uint)lVar35;
                                          local_e0 = piVar6[4] - local_b4;
                                          lVar33 = lVar35 + CONCAT44(local_44,local_48);
                                          uVar27 = (uint)lVar33;
                                          lVar34 = CONCAT44(local_fc,local_bc);
                                          lVar32 = CONCAT44(local_f0,local_c0);
                                          if (CONCAT44((piVar6[5] - local_cc) -
                                                       (uint)((uint)piVar6[4] < local_b4),local_e0)
                                              <= lVar33) {
                                            uVar17 = local_b4 + piVar6[4];
                                            iVar16 = local_cc + piVar6[5] +
                                                     (uint)CARRY4(local_b4,piVar6[4]);
                                            local_b4 = local_48 - local_ec;
                                            iVar22 = (local_44 - local_dc) -
                                                     (uint)(local_48 < local_ec);
                                            uVar27 = local_b4;
                                            lVar34 = CONCAT44(local_fc,local_bc);
                                            lVar32 = CONCAT44(local_f0,local_c0);
                                            if ((iVar22 <= iVar16) &&
                                               ((iVar22 < iVar16 ||
                                                (lVar34 = CONCAT44(local_fc,local_bc),
                                                lVar32 = CONCAT44(local_f0,local_c0),
                                                local_b4 < uVar17)))) {
                                              local_19c = *(float *)(local_94 + 0x88) * 0.5 *
                                                          65536.0;
                                              lVar34 = FUN_0068d946();
                                              local_e0 = (uint)((ulonglong)lVar34 >> 0x20);
                                              local_b4 = (uint)lVar34;
                                              local_208 = lVar34 + CONCAT44(local_3c,local_40);
                                              cVar5 = FUN_00594690(piVar6 + 6);
                                              uVar27 = local_b4;
                                              lVar34 = CONCAT44(local_fc,local_bc);
                                              lVar35 = CONCAT44(local_dc,local_ec);
                                              lVar32 = CONCAT44(local_f0,local_c0);
                                              if (cVar5 != '\0') {
                                                local_1dc = local_124 * 65536.0;
                                                uVar31 = FUN_0068d946();
                                                local_218 = (uint)uVar31 + piVar6[6];
                                                local_214 = (int)((ulonglong)uVar31 >> 0x20) +
                                                            piVar6[7] +
                                                            (uint)CARRY4((uint)uVar31,piVar6[6]);
                                                local_228 = local_40 - local_b4;
                                                local_224 = (local_3c - local_e0) -
                                                            (uint)(local_40 < local_b4);
                                                cVar5 = FUN_00594660(&local_218);
                                                local_158 = local_158 & 0xff;
                                                uVar27 = local_b4;
                                                lVar34 = CONCAT44(local_fc,local_bc);
                                                lVar35 = CONCAT44(local_dc,local_ec);
                                                lVar32 = CONCAT44(local_f0,local_c0);
                                                if (cVar5 != '\0') {
                                                  local_158 = 1;
                                                  lVar34 = CONCAT44(local_fc,local_bc);
                                                  lVar35 = CONCAT44(local_dc,local_ec);
                                                  lVar32 = CONCAT44(local_f0,local_c0);
                                                }
                                              }
                                            }
                                          }
                                        }
                                      }
                                      local_b4 = uVar27;
                                      local_f0 = (int)((ulonglong)lVar32 >> 0x20);
                                      local_c0 = (uint)lVar32;
                                      local_dc = (int)((ulonglong)lVar35 >> 0x20);
                                      local_ec = (uint)lVar35;
                                      local_fc = (uint)((ulonglong)lVar34 >> 0x20);
                                      local_bc = (uint)lVar34;
                                      if (CONCAT44(local_b0,local_b8) <= lVar34) {
                                        local_b4 = local_50 - local_c0;
                                        iVar16 = (local_4c - local_f0) - (uint)(local_50 < local_c0)
                                        ;
                                        iVar22 = local_d4 + piVar6[3] +
                                                 (uint)CARRY4(local_128,piVar6[2]);
                                        if ((iVar16 <= iVar22) &&
                                           ((iVar16 < iVar22 || (local_b4 < local_128 + piVar6[2])))
                                           ) {
                                          local_1a4 = local_d8 * 0.5 * 65536.0;
                                          uVar31 = FUN_0068d946();
                                          local_dc = (int)((ulonglong)uVar31 >> 0x20);
                                          local_cc = (uint)uVar31;
                                          local_1c4 = *(float *)(local_94 + 0x84) * 0.5 * 65536.0;
                                          lVar34 = FUN_0068d946();
                                          local_ec = (uint)((ulonglong)lVar34 >> 0x20);
                                          local_e0 = (uint)lVar34;
                                          lVar34 = lVar34 + CONCAT44(local_44,local_48);
                                          uVar27 = (uint)lVar34;
                                          iVar16 = (int)((ulonglong)lVar34 >> 0x20) -
                                                   (uint)(uVar27 < 0x10000);
                                          local_b4 = piVar6[4] - local_cc;
                                          iVar22 = (piVar6[5] - local_dc) -
                                                   (uint)((uint)piVar6[4] < local_cc);
                                          lVar34 = CONCAT44(local_fc,local_bc);
                                          lVar35 = CONCAT44(local_dc,local_ec);
                                          lVar32 = CONCAT44(local_f0,local_c0);
                                          if ((iVar22 <= iVar16) &&
                                             ((iVar22 < iVar16 ||
                                              (lVar34 = CONCAT44(local_fc,local_bc),
                                              lVar35 = CONCAT44(local_dc,local_ec),
                                              lVar32 = CONCAT44(local_f0,local_c0),
                                              local_b4 <= uVar27 - 0x10000)))) {
                                            iVar22 = ((local_44 - local_ec) -
                                                     (uint)(local_48 < local_e0)) -
                                                     (uint)(local_48 - local_e0 < 0x10000);
                                            puVar24 = (uint *)(piVar6 + 4);
                                            local_dc = local_dc + piVar6[5] +
                                                       (uint)CARRY4(local_cc,*puVar24);
                                            piVar6 = (int *)piVar12[2];
                                            lVar34 = CONCAT44(local_fc,local_bc);
                                            lVar35 = CONCAT44(local_dc,local_ec);
                                            lVar32 = CONCAT44(local_f0,local_c0);
                                            if ((iVar22 <= local_dc) &&
                                               ((iVar22 < local_dc ||
                                                (lVar34 = CONCAT44(local_fc,local_bc),
                                                lVar35 = CONCAT44(local_dc,local_ec),
                                                lVar32 = CONCAT44(local_f0,local_c0),
                                                (local_48 - local_e0) - 0x10000 <
                                                local_cc + *puVar24)))) {
                                              local_1d4 = *(float *)(local_94 + 0x88) * 0.5 *
                                                          65536.0;
                                              uVar31 = FUN_0068d946();
                                              local_b4 = (uint)((ulonglong)uVar31 >> 0x20);
                                              local_100 = (uint)uVar31;
                                              cVar5 = FUN_00594690(piVar6 + 6);
                                              lVar34 = CONCAT44(local_fc,local_bc);
                                              lVar35 = CONCAT44(local_dc,local_ec);
                                              lVar32 = CONCAT44(local_f0,local_c0);
                                              if (cVar5 != '\0') {
                                                local_1b4 = local_124 * 65536.0;
                                                uVar31 = FUN_0068d946();
                                                local_230 = (uint)uVar31 + piVar6[6];
                                                local_22c = (int)((ulonglong)uVar31 >> 0x20) +
                                                            piVar6[7] +
                                                            (uint)CARRY4((uint)uVar31,piVar6[6]);
                                                local_200 = local_40 - local_100;
                                                local_1fc = (local_3c - local_b4) -
                                                            (uint)(local_40 < local_100);
                                                cVar5 = FUN_00594660(&local_230);
                                                local_160 = local_160 & 0xff;
                                                lVar34 = CONCAT44(local_fc,local_bc);
                                                lVar35 = CONCAT44(local_dc,local_ec);
                                                lVar32 = CONCAT44(local_f0,local_c0);
                                                if (cVar5 != '\0') {
                                                  local_160 = 1;
                                                  lVar34 = CONCAT44(local_fc,local_bc);
                                                  lVar35 = CONCAT44(local_dc,local_ec);
                                                  lVar32 = CONCAT44(local_f0,local_c0);
                                                }
                                              }
                                            }
                                          }
                                        }
                                      }
                                      local_f0 = (int)((ulonglong)lVar32 >> 0x20);
                                      local_c0 = (uint)lVar32;
                                      local_dc = (int)((ulonglong)lVar35 >> 0x20);
                                      local_ec = (uint)lVar35;
                                      local_fc = (uint)((ulonglong)lVar34 >> 0x20);
                                      local_bc = (uint)lVar34;
                                      lVar33 = CONCAT44(local_cc,local_b4);
                                      lVar2 = lVar35;
                                      if (CONCAT44(local_b0,local_b8) <= lVar34) {
                                        iVar16 = (local_4c - local_f0) - (uint)(local_50 < local_c0)
                                        ;
                                        local_d4 = local_d4 + local_11c +
                                                   (uint)CARRY4(local_128,piVar6[2]);
                                        iVar22 = piVar12[2];
                                        lVar33 = CONCAT44(local_cc,local_b4);
                                        if ((iVar16 <= (int)local_d4) &&
                                           ((iVar16 < (int)local_d4 ||
                                            (lVar33 = CONCAT44(local_cc,local_b4),
                                            local_50 - local_c0 < local_128 + piVar6[2])))) {
                                          local_190 = local_d8 * 0.5 * 65536.0;
                                          uVar31 = FUN_0068d946();
                                          local_f0 = (int)((ulonglong)uVar31 >> 0x20);
                                          local_fc = (uint)uVar31;
                                          local_198 = *(float *)(local_94 + 0x84) * 0.5 * 65536.0;
                                          lVar35 = FUN_0068d946();
                                          local_cc = (uint)((ulonglong)lVar35 >> 0x20);
                                          local_100 = (uint)lVar35;
                                          local_11c = *(uint *)(iVar22 + 0x10) - local_fc;
                                          lVar34 = CONCAT44(local_fc,local_bc);
                                          lVar33 = CONCAT44(local_cc,local_b4);
                                          lVar2 = CONCAT44(local_dc,local_ec);
                                          lVar32 = CONCAT44(local_f0,local_c0);
                                          if (CONCAT44((*(int *)(iVar22 + 0x14) - local_f0) -
                                                       (uint)(*(uint *)(iVar22 + 0x10) < local_fc),
                                                       local_11c) <=
                                              lVar35 + CONCAT44(local_44,local_48) + 0x10000) {
                                            iVar29 = ((local_44 - local_cc) -
                                                     (uint)(local_48 < local_100)) +
                                                     (uint)(0xfffeffff < local_48 - local_100);
                                            local_f0 = local_f0 + *(int *)(iVar22 + 0x14) +
                                                       (uint)CARRY4(local_fc,*(uint *)(iVar22 + 0x10
                                                                                      ));
                                            iVar16 = piVar12[2];
                                            lVar34 = CONCAT44(local_fc,local_bc);
                                            lVar33 = CONCAT44(local_cc,local_b4);
                                            lVar2 = CONCAT44(local_dc,local_ec);
                                            lVar32 = CONCAT44(local_f0,local_c0);
                                            if ((iVar29 <= local_f0) &&
                                               ((iVar29 < local_f0 ||
                                                (lVar34 = CONCAT44(local_fc,local_bc),
                                                lVar33 = CONCAT44(local_cc,local_b4),
                                                lVar2 = CONCAT44(local_dc,local_ec),
                                                lVar32 = CONCAT44(local_f0,local_c0),
                                                (local_48 - local_100) + 0x10000 <
                                                local_fc + *(uint *)(iVar22 + 0x10))))) {
                                              local_1a0 = *(float *)(local_94 + 0x88) * 0.5 *
                                                          65536.0;
                                              lVar34 = FUN_0068d946();
                                              local_100 = (uint)((ulonglong)lVar34 >> 0x20);
                                              local_11c = (uint)lVar34;
                                              local_220 = lVar34 + CONCAT44(local_3c,local_40);
                                              puVar24 = (uint *)(iVar16 + 0x18);
                                              cVar5 = FUN_00594690(puVar24);
                                              lVar34 = CONCAT44(local_fc,local_bc);
                                              lVar33 = CONCAT44(local_cc,local_b4);
                                              lVar2 = CONCAT44(local_dc,local_ec);
                                              lVar32 = CONCAT44(local_f0,local_c0);
                                              if (cVar5 != '\0') {
                                                local_1a8 = local_124 * 65536.0;
                                                uVar31 = FUN_0068d946();
                                                local_210 = (uint)uVar31 + *puVar24;
                                                local_20c = (int)((ulonglong)uVar31 >> 0x20) +
                                                            *(int *)(iVar16 + 0x1c) +
                                                            (uint)CARRY4((uint)uVar31,*puVar24);
                                                local_58._0_4_ = local_40 - local_11c;
                                                local_58._4_4_ =
                                                     (local_3c - local_100) -
                                                     (uint)(local_40 < local_11c);
                                                cVar5 = FUN_00594660(&local_210);
                                                local_15c = local_15c & 0xff;
                                                lVar34 = CONCAT44(local_fc,local_bc);
                                                lVar33 = CONCAT44(local_cc,local_b4);
                                                lVar2 = CONCAT44(local_dc,local_ec);
                                                lVar32 = CONCAT44(local_f0,local_c0);
                                                local_58 = (double)CONCAT44(local_58._4_4_,
                                                                            (uint)local_58);
                                                if (cVar5 != '\0') {
                                                  local_15c = 1;
                                                  lVar34 = CONCAT44(local_fc,local_bc);
                                                  lVar33 = CONCAT44(local_cc,local_b4);
                                                  lVar2 = CONCAT44(local_dc,local_ec);
                                                  lVar32 = CONCAT44(local_f0,local_c0);
                                                  local_58 = (double)CONCAT44(local_58._4_4_,
                                                                              (uint)local_58);
                                                }
                                              }
                                            }
                                          }
                                        }
                                      }
                                      break;
                                    }
                                    local_cc = local_cc + 1;
                                    lVar33 = CONCAT44(local_cc,local_b4);
                                    piVar21 = piVar21 + 1;
                                    piVar19 = piVar19 + 1;
                                  } while ((int)local_cc < 3);
                                }
                              }
                              piVar12 = (int *)*piVar12;
                              uVar27 = local_130;
                              uVar25 = local_13c;
                              iVar16 = local_180;
                            } while (piVar12 != local_138);
                          }
                        }
                      }
                    }
                    uVar27 = uVar27 + 1;
                    uVar17 = local_12c;
                    iVar22 = local_17c;
                    local_130 = uVar27;
                  } while ((int)uVar27 <= iVar16);
                }
                local_13c = uVar25 + 1;
                uVar27 = uVar17;
              } while ((int)local_13c <= iVar22);
            }
            local_cc = (uint)((ulonglong)lVar33 >> 0x20);
            local_b4 = (uint)lVar33;
            local_f0 = (int)((ulonglong)lVar32 >> 0x20);
            local_c0 = (uint)lVar32;
            local_dc = (int)((ulonglong)lVar2 >> 0x20);
            local_ec = (uint)lVar2;
            local_fc = (uint)((ulonglong)lVar34 >> 0x20);
            local_bc = (uint)lVar34;
            cVar5 = (char)local_98;
            local_cd = '\0';
            uVar27 = local_9c;
            if (((char)local_e8 == '\0') && ((char)local_150 == '\0')) {
              if ((cVar5 != '\0') ||
                 ((((((char)local_168 != '\0' || ((char)local_108 != '\0')) ||
                    ((char)local_e4 != '\0')) ||
                   (((char)local_118 != '\0' || ((char)local_110 != '\0')))) || (local_8d != 0)))) {
                iVar22 = local_a8 - 1;
                piVar12 = (int *)FUN_005a9da0(iVar22,local_a0,local_9c);
                if (piVar12 == (int *)0x0) {
                  piVar12 = (int *)FUN_0042f040(&local_2c,local_f8);
                  uVar27 = local_9c;
                  uVar17 = iVar22 - *piVar12 >> 0x1f;
                  iVar22 = (iVar22 - *piVar12 ^ uVar17) - uVar17;
                  uVar17 = (int)(local_a0 - piVar12[1]) >> 0x1f;
                  iVar16 = (local_a0 - piVar12[1] ^ uVar17) - uVar17;
                  uVar17 = (int)(local_9c - piVar12[2]) >> 0x1f;
                  if (iVar16 < iVar22) {
                    iVar22 = iVar22 * 10 + iVar16 * 4;
                  }
                  else {
                    iVar22 = iVar22 * 4 + iVar16 * 10;
                  }
                  local_1c = (iVar22 + ((local_9c - piVar12[2] ^ uVar17) - uVar17) * 10) * 2;
                  local_20 = *local_c8 + 10;
                  if ((char)local_98 == '\0') {
                    local_20 = *local_c8 + 0x14;
                  }
                  local_18 = local_20 + local_1c;
                  local_10 = local_a0;
                  local_14 = local_a8;
                  local_c = local_9c;
                  FUN_005a9e50(local_a8 - 1,local_a0,local_9c,&local_20);
                  local_cd = '\x01';
                }
                else {
                  cVar5 = FUN_005a9ca0(iVar22,local_a0,local_9c);
                  uVar27 = local_9c;
                  if (cVar5 != '\0') {
                    iVar16 = *local_c8 + 10;
                    if ((char)local_98 == '\0') {
                      iVar16 = *local_c8 + 0x14;
                    }
                    if (iVar16 < *piVar12) {
                      local_18 = iVar16 + piVar12[1];
                      local_14 = local_a8;
                      local_10 = local_a0;
                      local_c = local_9c;
                      local_20 = iVar16;
                      local_1c = piVar12[1];
                      FUN_005a9e50(iVar22,local_a0,local_9c,&local_20);
                      local_cd = '\x01';
                    }
                  }
                }
                lVar33 = CONCAT44(local_cc,local_b4);
                lVar32 = CONCAT44(local_f0,local_c0);
                lVar2 = CONCAT44(local_dc,local_ec);
                lVar34 = CONCAT44(local_fc,local_bc);
                cVar5 = (char)local_98;
                goto LAB_005ac5d8;
              }
              cVar20 = '\0';
            }
            else {
LAB_005ac5d8:
              cVar20 = (char)local_e4;
            }
            local_cc = (uint)((ulonglong)lVar33 >> 0x20);
            local_b4 = (uint)lVar33;
            local_f0 = (int)((ulonglong)lVar32 >> 0x20);
            local_c0 = (uint)lVar32;
            local_dc = (int)((ulonglong)lVar2 >> 0x20);
            local_ec = (uint)lVar2;
            local_fc = (uint)((ulonglong)lVar34 >> 0x20);
            local_bc = (uint)lVar34;
            local_c1 = '\0';
            cVar15 = (char)local_f4;
            uVar17 = local_a0;
            if (((cVar15 == '\0') && ((char)local_158 == '\0')) &&
               ((((cVar5 != '\0' ||
                  (((local_8e != '\0' || ((char)local_178 != '\0')) || ((char)local_108 != '\0'))))
                 || (((cVar20 != '\0' || ((char)local_120 != '\0')) || ((char)local_114 != '\0'))))
                || (local_8d != 0)))) {
              iVar22 = local_a8 + 1;
              piVar12 = (int *)FUN_005a9da0(iVar22,local_a0,uVar27);
              if (piVar12 == (int *)0x0) {
                piVar12 = (int *)FUN_0042f040(&local_2c,local_f8);
                uVar17 = local_a0;
                uVar27 = iVar22 - *piVar12 >> 0x1f;
                iVar22 = (iVar22 - *piVar12 ^ uVar27) - uVar27;
                uVar27 = (int)(local_a0 - piVar12[1]) >> 0x1f;
                iVar16 = (local_a0 - piVar12[1] ^ uVar27) - uVar27;
                uVar27 = (int)(local_9c - piVar12[2]) >> 0x1f;
                if (iVar16 < iVar22) {
                  iVar22 = iVar22 * 10 + iVar16 * 4;
                }
                else {
                  iVar22 = iVar22 * 4 + iVar16 * 10;
                }
                local_1c = (iVar22 + ((local_9c - piVar12[2] ^ uVar27) - uVar27) * 10) * 2;
                local_20 = *local_c8 + 10;
                if ((char)local_98 == '\0') {
                  local_20 = *local_c8 + 0x14;
                }
                local_18 = local_20 + local_1c;
                local_10 = local_a0;
                local_c = local_9c;
                local_14 = local_a8;
                FUN_005a9e50(local_a8 + 1,local_a0,local_9c,&local_20);
                cVar15 = (char)local_f4;
                local_c1 = '\x01';
                lVar34 = CONCAT44(local_fc,local_bc);
                lVar2 = CONCAT44(local_dc,local_ec);
                lVar32 = CONCAT44(local_f0,local_c0);
                lVar33 = CONCAT44(local_cc,local_b4);
              }
              else {
                cVar5 = FUN_005a9ca0(iVar22,local_a0,local_9c);
                uVar17 = local_a0;
                cVar15 = (char)local_f4;
                lVar34 = CONCAT44(local_fc,local_bc);
                lVar2 = CONCAT44(local_dc,local_ec);
                lVar32 = CONCAT44(local_f0,local_c0);
                lVar33 = CONCAT44(local_cc,local_b4);
                if (cVar5 != '\0') {
                  iVar16 = *local_c8 + 10;
                  if ((char)local_98 == '\0') {
                    iVar16 = *local_c8 + 0x14;
                  }
                  lVar34 = CONCAT44(local_fc,local_bc);
                  lVar2 = CONCAT44(local_dc,local_ec);
                  lVar32 = CONCAT44(local_f0,local_c0);
                  lVar33 = CONCAT44(local_cc,local_b4);
                  if (iVar16 < *piVar12) {
                    local_18 = iVar16 + piVar12[1];
                    local_14 = local_a8;
                    local_10 = local_a0;
                    local_c = local_9c;
                    local_20 = iVar16;
                    local_1c = piVar12[1];
                    FUN_005a9e50(iVar22,local_a0,local_9c,&local_20);
                    cVar15 = (char)local_f4;
                    local_c1 = '\x01';
                    lVar34 = CONCAT44(local_fc,local_bc);
                    lVar2 = CONCAT44(local_dc,local_ec);
                    lVar32 = CONCAT44(local_f0,local_c0);
                    lVar33 = CONCAT44(local_cc,local_b4);
                  }
                }
              }
            }
            cVar20 = local_c1;
            local_cc = (uint)((ulonglong)lVar33 >> 0x20);
            local_b4 = (uint)lVar33;
            local_f0 = (int)((ulonglong)lVar32 >> 0x20);
            local_c0 = (uint)lVar32;
            local_dc = (int)((ulonglong)lVar2 >> 0x20);
            local_ec = (uint)lVar2;
            local_fc = (uint)((ulonglong)lVar34 >> 0x20);
            local_bc = (uint)lVar34;
            cVar5 = (char)local_98;
            bVar30 = false;
            if ((((char)local_108 == '\0') && ((char)local_160 == '\0')) &&
               (((cVar5 != '\0' ||
                 (((local_8e != '\0' || ((char)local_154 != '\0')) || ((char)local_e8 != '\0')))) ||
                (((cVar15 != '\0' || ((char)local_118 != '\0')) ||
                 (((char)local_120 != '\0' || (local_8d != 0)))))))) {
              iVar22 = uVar17 - 1;
              piVar12 = (int *)FUN_005a9da0(local_a8,iVar22,local_9c);
              if (piVar12 == (int *)0x0) {
                piVar12 = (int *)FUN_0042f040((int)&local_60 + 4,local_f8);
                uVar27 = local_9c;
                local_2c = CONCAT44(iVar22 - piVar12[1],local_a8 - *piVar12);
                local_24 = (float)(local_9c - piVar12[2]);
                local_1c = FUN_005a9d40(&local_2c);
                local_20 = *local_c8 + 10;
                if ((char)local_98 == '\0') {
                  local_20 = *local_c8 + 0x1e;
                }
                local_18 = local_1c + local_20;
                local_c = uVar27;
                local_14 = local_a8;
                local_10 = local_a0;
                FUN_005a9e50(local_a8,iVar22,uVar27,&local_20);
                bVar30 = true;
              }
              else {
                cVar5 = FUN_005a9ca0(local_a8,iVar22,local_9c);
                if (cVar5 != '\0') {
                  iVar16 = *local_c8 + 10;
                  if ((char)local_98 == '\0') {
                    iVar16 = *local_c8 + 0x14;
                  }
                  if (iVar16 < *piVar12) {
                    local_18 = iVar16 + piVar12[1];
                    local_10 = local_a0;
                    local_14 = local_a8;
                    local_c = local_9c;
                    local_20 = iVar16;
                    local_1c = piVar12[1];
                    FUN_005a9e50(local_a8,iVar22,local_9c,&local_20);
                    bVar30 = true;
                  }
                }
              }
              lVar33 = CONCAT44(local_cc,local_b4);
              lVar32 = CONCAT44(local_f0,local_c0);
              lVar2 = CONCAT44(local_dc,local_ec);
              lVar34 = CONCAT44(local_fc,local_bc);
              cVar5 = (char)local_98;
            }
            local_cc = (uint)((ulonglong)lVar33 >> 0x20);
            local_b4 = (uint)lVar33;
            local_f0 = (int)((ulonglong)lVar32 >> 0x20);
            local_c0 = (uint)lVar32;
            local_dc = (int)((ulonglong)lVar2 >> 0x20);
            local_ec = (uint)lVar2;
            local_fc = (uint)((ulonglong)lVar34 >> 0x20);
            local_bc = (uint)lVar34;
            local_a1 = '\0';
            uVar27 = local_a8;
            if ((((char)local_e4 == '\0') && ((char)local_15c == '\0')) &&
               ((((cVar5 != '\0' ||
                  ((((local_8e != '\0' || ((char)local_164 != '\0')) || ((char)local_e8 != '\0')) ||
                   (((char)local_f4 != '\0' || ((char)local_110 != '\0')))))) ||
                 ((char)local_114 != '\0')) || (local_8d != 0)))) {
              iVar22 = local_a0 + 1;
              piVar12 = (int *)FUN_005a9da0(local_a8,iVar22,local_9c);
              if (piVar12 == (int *)0x0) {
                piVar12 = (int *)FUN_0042f040((int)&local_60 + 4,local_f8);
                uVar27 = local_9c;
                local_2c = CONCAT44(iVar22 - piVar12[1],local_a8 - *piVar12);
                local_24 = (float)(local_9c - piVar12[2]);
                local_1c = FUN_005a9d40(&local_2c);
                local_20 = *local_c8 + 10;
                if ((char)local_98 == '\0') {
                  local_20 = *local_c8 + 0x14;
                }
                local_18 = local_1c + local_20;
                local_c = uVar27;
LAB_005aca6d:
                uVar27 = local_a8;
                local_14 = local_a8;
                local_10 = local_a0;
                FUN_005a9e50(local_a8,iVar22,local_c,&local_20);
                local_a1 = '\x01';
                lVar34 = CONCAT44(local_fc,local_bc);
                lVar2 = CONCAT44(local_dc,local_ec);
                lVar32 = CONCAT44(local_f0,local_c0);
                lVar33 = CONCAT44(local_cc,local_b4);
              }
              else {
                cVar5 = FUN_005a9ca0(local_a8,iVar22,local_9c);
                uVar27 = local_a8;
                lVar34 = CONCAT44(local_fc,local_bc);
                lVar2 = CONCAT44(local_dc,local_ec);
                lVar32 = CONCAT44(local_f0,local_c0);
                lVar33 = CONCAT44(local_cc,local_b4);
                if (cVar5 != '\0') {
                  iVar16 = *local_c8 + 10;
                  if ((char)local_98 == '\0') {
                    iVar16 = *local_c8 + 0x14;
                  }
                  lVar34 = CONCAT44(local_fc,local_bc);
                  lVar2 = CONCAT44(local_dc,local_ec);
                  lVar32 = CONCAT44(local_f0,local_c0);
                  lVar33 = CONCAT44(local_cc,local_b4);
                  if (iVar16 < *piVar12) {
                    local_18 = iVar16 + piVar12[1];
                    local_c = local_9c;
                    local_20 = iVar16;
                    local_1c = piVar12[1];
                    goto LAB_005aca6d;
                  }
                }
              }
            }
            local_cc = (uint)((ulonglong)lVar33 >> 0x20);
            local_b4 = (uint)lVar33;
            local_f0 = (int)((ulonglong)lVar32 >> 0x20);
            local_c0 = (uint)lVar32;
            local_dc = (int)((ulonglong)lVar2 >> 0x20);
            local_ec = (uint)lVar2;
            local_fc = (uint)((ulonglong)lVar34 >> 0x20);
            local_bc = (uint)lVar34;
            cVar5 = (char)local_98;
            if (((((char)local_118 == '\0') && (local_cd != '\0')) && (bVar30)) &&
               ((((cVar5 != '\0' || (local_8e != '\0')) || ((char)local_10c != '\0')) ||
                (local_8d != 0)))) {
              iVar22 = uVar27 - 1;
              iVar16 = local_a0 - 1;
              local_138 = (int *)FUN_005a9da0(iVar22,iVar16,local_9c);
              if (local_138 == (int *)0x0) {
                piVar12 = (int *)FUN_0042f040((int)&local_60 + 4,local_f8);
                local_2c = CONCAT44(iVar16 - piVar12[1],iVar22 - *piVar12);
                local_24 = (float)(local_9c - piVar12[2]);
                local_1c = FUN_005a9d40(&local_2c);
                local_20 = *local_c8 + 0xe;
                if ((char)local_98 == '\0') {
                  local_20 = *local_c8 + 0x18;
                }
                local_18 = local_1c + local_20;
                local_14 = local_a8;
                piVar12 = &local_20;
                local_10 = local_a0;
                local_c = local_9c;
LAB_005acc41:
                FUN_005a9e50(iVar22,iVar16,local_9c,piVar12);
              }
              else {
                cVar5 = FUN_005a9ca0(iVar22,iVar16,local_9c);
                if (cVar5 != '\0') {
                  iVar29 = *local_c8 + 0xe;
                  if ((char)local_98 == '\0') {
                    iVar29 = *local_c8 + 0x18;
                  }
                  if (iVar29 < *local_138) {
                    piVar12 = (int *)FUN_005a7a40(iVar29,local_138[1],iVar29 + local_138[1],local_74
                                                 );
                    goto LAB_005acc41;
                  }
                }
              }
              lVar33 = CONCAT44(local_cc,local_b4);
              lVar32 = CONCAT44(local_f0,local_c0);
              lVar2 = CONCAT44(local_dc,local_ec);
              lVar34 = CONCAT44(local_fc,local_bc);
              cVar5 = (char)local_98;
            }
            local_cc = (uint)((ulonglong)lVar33 >> 0x20);
            local_b4 = (uint)lVar33;
            local_f0 = (int)((ulonglong)lVar32 >> 0x20);
            local_c0 = (uint)lVar32;
            local_dc = (int)((ulonglong)lVar2 >> 0x20);
            local_ec = (uint)lVar2;
            local_fc = (uint)((ulonglong)lVar34 >> 0x20);
            local_bc = (uint)lVar34;
            if (((((char)local_120 == '\0') && (cVar20 != '\0')) && (bVar30)) &&
               (((cVar5 != '\0' || (local_8e != '\0')) ||
                (((char)local_16c != '\0' || (local_8d != 0)))))) {
              iVar16 = local_a0 - 1;
              iVar22 = local_a8 + 1;
              piVar12 = (int *)FUN_005a9da0(iVar22,iVar16,local_9c);
              if (piVar12 == (int *)0x0) {
                piVar12 = (int *)FUN_0042f040((int)&local_60 + 4,local_f8);
                uVar27 = local_9c;
                local_2c = CONCAT44(iVar16 - piVar12[1],iVar22 - *piVar12);
                local_24 = (float)(local_9c - piVar12[2]);
                local_1c = FUN_005a9d40(&local_2c);
                local_20 = *local_c8 + 0xe;
                if ((char)local_98 == '\0') {
                  local_20 = *local_c8 + 0x18;
                }
                local_18 = local_1c + local_20;
                local_14 = local_a8;
                local_10 = local_a0;
                local_c = uVar27;
                FUN_005a9e50(iVar22,iVar16,uVar27,&local_20);
                lVar34 = CONCAT44(local_fc,local_bc);
                lVar2 = CONCAT44(local_dc,local_ec);
                lVar32 = CONCAT44(local_f0,local_c0);
                lVar33 = CONCAT44(local_cc,local_b4);
              }
              else {
                cVar5 = FUN_005a9ca0(iVar22,iVar16,local_9c);
                lVar33 = CONCAT44(local_cc,local_b4);
                lVar32 = CONCAT44(local_f0,local_c0);
                lVar2 = CONCAT44(local_dc,local_ec);
                lVar34 = CONCAT44(local_fc,local_bc);
                if (cVar5 != '\0') {
                  iVar29 = *local_c8 + 0xe;
                  if ((char)local_98 == '\0') {
                    iVar29 = *local_c8 + 0x18;
                  }
                  lVar34 = CONCAT44(local_fc,local_bc);
                  lVar2 = CONCAT44(local_dc,local_ec);
                  lVar32 = CONCAT44(local_f0,local_c0);
                  lVar33 = CONCAT44(local_cc,local_b4);
                  if (iVar29 < *piVar12) {
                    uVar13 = FUN_005a7a40(iVar29,piVar12[1],iVar29 + piVar12[1],local_74);
                    FUN_005a9e50(iVar22,iVar16,local_9c,uVar13);
                    lVar34 = CONCAT44(local_fc,local_bc);
                    lVar2 = CONCAT44(local_dc,local_ec);
                    lVar32 = CONCAT44(local_f0,local_c0);
                    lVar33 = CONCAT44(local_cc,local_b4);
                  }
                }
              }
            }
            local_cc = (uint)((ulonglong)lVar33 >> 0x20);
            local_b4 = (uint)lVar33;
            local_f0 = (int)((ulonglong)lVar32 >> 0x20);
            local_c0 = (uint)lVar32;
            local_dc = (int)((ulonglong)lVar2 >> 0x20);
            local_ec = (uint)lVar2;
            local_fc = (uint)((ulonglong)lVar34 >> 0x20);
            local_bc = (uint)lVar34;
            if (((((char)local_110 == '\0') && (local_cd != '\0')) && (local_a1 != '\0')) &&
               ((((char)local_98 != '\0' || (local_8e != '\0')) ||
                (((char)local_174 != '\0' || (local_8d != 0)))))) {
              iVar16 = local_a0 + 1;
              iVar22 = local_a8 - 1;
              piVar12 = (int *)FUN_005a9da0(iVar22,iVar16,local_9c);
              if (piVar12 == (int *)0x0) {
                piVar12 = (int *)FUN_0042f040((int)&local_60 + 4,local_f8);
                uVar27 = local_9c;
                local_2c = CONCAT44(iVar16 - piVar12[1],iVar22 - *piVar12);
                local_24 = (float)(local_9c - piVar12[2]);
                local_1c = FUN_005a9d40(&local_2c);
                local_20 = *local_c8 + 0xe;
                if ((char)local_98 == '\0') {
                  local_20 = *local_c8 + 0x18;
                }
                local_18 = local_1c + local_20;
                local_14 = local_a8;
                local_10 = local_a0;
                piVar12 = &local_20;
                local_c = uVar27;
LAB_005acea8:
                FUN_005a9e50(iVar22,iVar16,uVar27,piVar12);
                lVar34 = CONCAT44(local_fc,local_bc);
                lVar2 = CONCAT44(local_dc,local_ec);
                lVar32 = CONCAT44(local_f0,local_c0);
                lVar33 = CONCAT44(local_cc,local_b4);
              }
              else {
                cVar5 = FUN_005a9ca0(iVar22,iVar16,local_9c);
                lVar34 = CONCAT44(local_fc,local_bc);
                lVar2 = CONCAT44(local_dc,local_ec);
                lVar32 = CONCAT44(local_f0,local_c0);
                lVar33 = CONCAT44(local_cc,local_b4);
                if (cVar5 != '\0') {
                  iVar29 = *local_c8 + 0xe;
                  if ((char)local_98 == '\0') {
                    iVar29 = *local_c8 + 0x18;
                  }
                  lVar34 = CONCAT44(local_fc,local_bc);
                  lVar2 = CONCAT44(local_dc,local_ec);
                  lVar32 = CONCAT44(local_f0,local_c0);
                  lVar33 = CONCAT44(local_cc,local_b4);
                  if (iVar29 < *piVar12) {
                    piVar12 = (int *)FUN_005a7a40(iVar29,piVar12[1],iVar29 + piVar12[1],local_74);
                    uVar27 = local_9c;
                    goto LAB_005acea8;
                  }
                }
              }
            }
            local_cc = (uint)((ulonglong)lVar33 >> 0x20);
            local_b4 = (uint)lVar33;
            local_f0 = (int)((ulonglong)lVar32 >> 0x20);
            local_c0 = (uint)lVar32;
            local_dc = (int)((ulonglong)lVar2 >> 0x20);
            local_ec = (uint)lVar2;
            local_fc = (uint)((ulonglong)lVar34 >> 0x20);
            local_bc = (uint)lVar34;
            iVar22 = local_94;
            if ((((char)local_114 == '\0') && (local_c1 != '\0')) && (local_a1 != '\0')) {
              if (((((char)local_98 != '\0') || (local_8e != '\0')) || ((char)local_104 != '\0')) ||
                 (local_8d != 0)) {
                iVar29 = local_a0 + 1;
                iVar16 = local_a8 + 1;
                piVar12 = (int *)FUN_005a9da0(iVar16,iVar29,local_9c);
                if (piVar12 == (int *)0x0) {
                  piVar12 = (int *)FUN_0042f040(local_74,local_f8);
                  uVar27 = local_9c;
                  local_2c = CONCAT44(iVar29 - piVar12[1],iVar16 - *piVar12);
                  local_24 = (float)(local_9c - piVar12[2]);
                  local_1c = FUN_005a9d40(&local_2c);
                  iVar22 = local_94;
                  local_20 = *local_c8 + 0xe;
                  if ((char)local_98 == '\0') {
                    local_20 = *local_c8 + 0x18;
                  }
                  local_18 = local_1c + local_20;
                  local_14 = local_a8;
                  local_10 = local_a0;
                  local_c = uVar27;
                  FUN_005a9e50(iVar16,iVar29,uVar27,&local_20);
                  lVar34 = CONCAT44(local_fc,local_bc);
                  lVar2 = CONCAT44(local_dc,local_ec);
                  lVar32 = CONCAT44(local_f0,local_c0);
                  lVar33 = CONCAT44(local_cc,local_b4);
                }
                else {
                  cVar5 = FUN_005a9ca0(iVar16,iVar29,local_9c);
                  iVar22 = local_94;
                  lVar34 = CONCAT44(local_fc,local_bc);
                  lVar2 = CONCAT44(local_dc,local_ec);
                  lVar32 = CONCAT44(local_f0,local_c0);
                  lVar33 = CONCAT44(local_cc,local_b4);
                  if (cVar5 != '\0') {
                    iVar14 = *local_c8 + 0xe;
                    if ((char)local_98 == '\0') {
                      iVar14 = *local_c8 + 0x18;
                    }
                    lVar34 = CONCAT44(local_fc,local_bc);
                    lVar2 = CONCAT44(local_dc,local_ec);
                    lVar32 = CONCAT44(local_f0,local_c0);
                    lVar33 = CONCAT44(local_cc,local_b4);
                    if (iVar14 < *piVar12) {
                      uVar13 = FUN_005a7a40(iVar14,piVar12[1],iVar14 + piVar12[1],local_74);
                      iVar22 = local_94;
                      FUN_005a9e50(iVar16,iVar29,local_9c,uVar13);
                      lVar34 = CONCAT44(local_fc,local_bc);
                      lVar2 = CONCAT44(local_dc,local_ec);
                      lVar32 = CONCAT44(local_f0,local_c0);
                      lVar33 = CONCAT44(local_cc,local_b4);
                    }
                  }
                }
                goto LAB_005ad08a;
              }
            }
            else {
LAB_005ad08a:
              uVar27 = local_9c;
              if (((char)local_98 != '\0') || (local_8e != '\0')) goto LAB_005ad0a6;
            }
            local_cc = (uint)((ulonglong)lVar33 >> 0x20);
            local_b4 = (uint)lVar33;
            local_f0 = (int)((ulonglong)lVar32 >> 0x20);
            local_c0 = (uint)lVar32;
            local_dc = (int)((ulonglong)lVar2 >> 0x20);
            local_ec = (uint)lVar2;
            local_fc = (uint)((ulonglong)lVar34 >> 0x20);
            local_bc = (uint)lVar34;
            iVar16 = local_9c - 1;
            piVar12 = (int *)FUN_005a9da0(local_a8,local_a0,iVar16);
            if (piVar12 == (int *)0x0) {
              piVar12 = (int *)FUN_0042f040(local_74,iVar22 + 0x1440);
              local_2c = CONCAT44(local_a0 - piVar12[1],local_a8 - *piVar12);
              local_24 = (float)(iVar16 - piVar12[2]);
              iVar14 = FUN_005a9d40(&local_2c);
              iVar29 = *local_c8;
              iVar3 = iVar29;
              iVar4 = iVar14;
            }
            else {
              cVar5 = FUN_005a9ca0(local_a8,local_a0,iVar16);
              lVar33 = CONCAT44(local_cc,local_b4);
              lVar32 = CONCAT44(local_f0,local_c0);
              lVar2 = CONCAT44(local_dc,local_ec);
              lVar34 = CONCAT44(local_fc,local_bc);
              uVar27 = local_9c;
              if (cVar5 == '\0') goto LAB_005ad0a6;
              iVar29 = piVar12[1];
              iVar14 = *local_c8;
              iVar3 = iVar14;
              iVar4 = iVar29;
              lVar34 = CONCAT44(local_fc,local_bc);
              lVar2 = CONCAT44(local_dc,local_ec);
              lVar32 = CONCAT44(local_f0,local_c0);
              lVar33 = CONCAT44(local_cc,local_b4);
              if (*piVar12 <= iVar14) goto LAB_005ad0a6;
            }
            local_1c = iVar4;
            local_20 = iVar3;
            uVar27 = local_9c;
            local_18 = iVar14 + iVar29;
            local_10 = local_a0;
            local_14 = local_a8;
            local_c = local_9c;
            FUN_005a9e50(local_a8,local_a0,iVar16,&local_20);
            lVar34 = CONCAT44(local_fc,local_bc);
            lVar2 = CONCAT44(local_dc,local_ec);
            lVar32 = CONCAT44(local_f0,local_c0);
            lVar33 = CONCAT44(local_cc,local_b4);
LAB_005ad0a6:
            local_cc = (uint)((ulonglong)lVar33 >> 0x20);
            local_b4 = (uint)lVar33;
            local_f0 = (int)((ulonglong)lVar32 >> 0x20);
            local_c0 = (uint)lVar32;
            local_dc = (int)((ulonglong)lVar2 >> 0x20);
            local_ec = (uint)lVar2;
            local_fc = (uint)((ulonglong)lVar34 >> 0x20);
            local_bc = (uint)lVar34;
            if (((char)local_134 == '\0') &&
               ((((char)local_e8 != '\0' || ((char)local_f4 != '\0')) ||
                (((char)local_108 != '\0' || (((char)local_e4 != '\0' || (local_8d != 0)))))))) {
              iVar16 = uVar27 + 1;
              piVar12 = (int *)FUN_005a9da0(local_a8,local_a0,iVar16);
              if (piVar12 == (int *)0x0) {
                piVar12 = (int *)FUN_0042f040(local_74,iVar22 + 0x1440);
                uVar27 = local_a8;
                local_2c = CONCAT44(local_a0 - piVar12[1],local_a8 - *piVar12);
                local_24 = (float)(iVar16 - piVar12[2]);
                local_1c = FUN_005a9d40(&local_2c);
                local_20 = *local_c8;
                if ((char)local_98 == '\0') {
                  local_20 = local_20 + 0x28;
                }
                local_18 = local_1c + local_20;
                local_c = local_9c;
                local_10 = local_a0;
                local_14 = uVar27;
                FUN_005a9e50(uVar27,local_a0,iVar16,&local_20);
                __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
                return;
              }
              cVar5 = FUN_005a9ca0(local_a8,local_a0,iVar16);
              lVar34 = CONCAT44(local_fc,local_bc);
              lVar2 = CONCAT44(local_dc,local_ec);
              lVar32 = CONCAT44(local_f0,local_c0);
              lVar33 = CONCAT44(local_cc,local_b4);
              if (cVar5 != '\0') {
                iVar22 = *local_c8;
                if ((char)local_98 == '\0') {
                  iVar22 = iVar22 + 0x28;
                }
                lVar34 = CONCAT44(local_fc,local_bc);
                lVar2 = CONCAT44(local_dc,local_ec);
                lVar32 = CONCAT44(local_f0,local_c0);
                lVar33 = CONCAT44(local_cc,local_b4);
                if (iVar22 < *piVar12) {
                  local_18 = iVar22 + piVar12[1];
                  local_c = local_9c;
                  local_14 = local_a8;
                  local_10 = local_a0;
                  local_20 = iVar22;
                  local_1c = piVar12[1];
                  FUN_005a9e50(local_a8,local_a0,iVar16,&local_20);
                  lVar33 = CONCAT44(local_cc,local_b4);
                  lVar32 = CONCAT44(local_f0,local_c0);
                  lVar2 = CONCAT44(local_dc,local_ec);
                  lVar34 = CONCAT44(local_fc,local_bc);
                }
              }
            }
            local_cc = (uint)((ulonglong)lVar33 >> 0x20);
            local_b4 = (uint)lVar33;
            local_f0 = (int)((ulonglong)lVar32 >> 0x20);
            local_c0 = (uint)lVar32;
            local_dc = (int)((ulonglong)lVar2 >> 0x20);
            local_ec = (uint)lVar2;
            local_fc = (uint)((ulonglong)lVar34 >> 0x20);
            local_bc = (uint)lVar34;
            __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
            return;
          }
          iVar16 = iVar16 + 4;
        } while (iVar16 < 0xc);
      }
    }
    else {
      FUN_0042ef10();
    }
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


