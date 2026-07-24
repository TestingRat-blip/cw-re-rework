// helpers_dispatch (game_misc) -- server. 13 functions. Bodies = Ghidra pseudo-C.
// Attribution: see ../attribution.tsv. Toolchain of the original: MSVC 11.0 (VS2012).
#include "helpers_dispatch.h"

/* vdispatch_4016c0 @ 004016c0  kind=gamemisc  attributed-by=role:dispatch  size=35 */

void FUN_004016c0(undefined4 param_1,undefined4 param_2,int param_3,undefined *param_4)

{
  while (param_3 = param_3 + -1, -1 < param_3) {
    (*(code *)param_4)();
  }
  return;
}


/* vdispatch_412980 @ 00412980  kind=gamemisc  attributed-by=role:dispatch  size=21 */

void __fastcall FUN_00412980(int *param_1)

{
  int *piVar1;
  
  piVar1 = *(int **)(*(int *)(*(int *)*param_1 + 4) + 0x38 + *param_1);
  if (piVar1 != (int *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00412991. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*piVar1 + 8))();
    return;
  }
  return;
}


/* vdispatch_413560 @ 00413560  kind=gamemisc  attributed-by=role:dispatch  size=33 */

void __fastcall FUN_00413560(int *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)param_1[4];
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 0x10))(piVar1 != param_1);
    param_1[4] = 0;
  }
  return;
}


/* vdispatch_413590 @ 00413590  kind=gamemisc  attributed-by=role:dispatch  size=61 */

void __fastcall FUN_00413590(int *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)param_1[4];
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 0x10))(piVar1 != param_1);
    param_1[4] = 0;
  }
  piVar1 = (int *)param_1[4];
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 0x10))(piVar1 != param_1);
    param_1[4] = 0;
  }
  return;
}


/* thunk_FUN_00417cc0 @ 00416b80  kind=gamemisc  attributed-by=role:dispatch  size=5 */

void __fastcall thunk_FUN_00417cc0(int *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 *puVar3;
  
  if (param_1[1] != 0) {
    (*(code *)PTR_free_0058219c)(param_1[1]);
    param_1[1] = 0;
  }
  if ((uint *)*param_1 != (uint *)0x0) {
    puVar3 = (undefined4 *)(*(uint *)*param_1 & 0xffffffe0);
    iVar2 = puVar3[3];
    while (iVar2 != 0) {
      puVar1 = (undefined4 *)(iVar2 + 4);
      iVar2 = *(int *)(iVar2 + 0xc);
      (*(code *)PTR_free_0058219c)(*puVar1);
    }
    *puVar3 = 0;
    puVar3[3] = 0;
    puVar3[5] = 0;
    puVar3[4] = 0;
    *param_1 = 0;
  }
  return;
}


/* vdispatch_417730 @ 00417730  kind=gamemisc  attributed-by=role:dispatch  size=93 */

undefined4 __cdecl FUN_00417730(int *param_1,uint *param_2,int param_3,uint param_4,char param_5)

{
  ushort uVar1;
  ushort *puVar2;
  uint uVar3;
  int iVar4;
  
  if (param_5 == '\0') {
    uVar3 = 1;
    if (param_4 != 0) {
      uVar3 = param_4;
    }
    iVar4 = (*(code *)PTR_FUN_00582198)(uVar3);
    *param_1 = iVar4;
    if (iVar4 == 0) {
      return 0;
    }
  }
  else {
    *param_1 = param_3;
  }
  uVar3 = param_4 >> 1;
  *param_2 = uVar3;
  puVar2 = (ushort *)*param_1;
  if (uVar3 != 0) {
    iVar4 = param_3 - (int)puVar2;
    do {
      uVar1 = *(ushort *)(iVar4 + (int)puVar2);
      uVar1 = uVar1 << 8 | uVar1 >> 8;
      param_2 = (uint *)(uint)uVar1;
      *puVar2 = uVar1;
      puVar2 = puVar2 + 1;
      uVar3 = uVar3 - 1;
    } while (uVar3 != 0);
  }
  return CONCAT31((int3)((uint)param_2 >> 8),1);
}


/* vdispatch_42c6d0 @ 0042c6d0  kind=gamemisc  attributed-by=role:dispatch  size=24 */

void __fastcall FUN_0042c6d0(int *param_1)

{
  undefined4 *puVar1;
  
  if ((int *)*param_1 != (int *)0x0) {
    puVar1 = (undefined4 *)(**(code **)(*(int *)*param_1 + 8))();
    if (puVar1 != (undefined4 *)0x0) {
      (**(code **)*puVar1)(1);
    }
  }
  return;
}


/* vdispatch_4655a0 @ 004655a0  kind=gamemisc  attributed-by=role:dispatch  size=48 */

int __cdecl FUN_004655a0(undefined4 param_1,int param_2)

{
  int iVar1;
  
  iVar1 = (param_2 + 999) / 1000;
  (*(code *)PTR_Sleep_005837e8)(iVar1);
  return iVar1 * 1000;
}


/* vdispatch_466790 @ 00466790  kind=gamemisc  attributed-by=role:dispatch  size=74 */

void __cdecl FUN_00466790(int *param_1,int param_2,int *param_3)

{
  ushort uVar1;
  ushort uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  int iVar5;
  uint uVar6;
  ushort uVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  byte *pbVar12;
  byte *pbVar13;
  uint uVar14;
  int iVar15;
  bool bVar16;
  double dVar17;
  double dVar18;
  int local_70 [21];
  undefined8 local_1c;
  int local_14;
  int local_10;
  int local_c;
  int local_8;
  
  local_70[0x14] = -(uint)(*(int *)(*param_1 + 4) != 0);
  local_14 = param_1[0xd];
  local_10 = 0;
  if (*(char *)(*param_3 + 0x1e) != '\x05') {
    local_8 = 1;
    if (1 < param_2) {
      local_c = 0;
      do {
        iVar15 = local_8;
        iVar5 = local_14;
        puVar3 = (undefined8 *)param_3[local_8];
        if (*(char *)((int)puVar3 + 0x1e) == '\x05') {
          return;
        }
        puVar4 = *(undefined8 **)(local_c + (int)param_3);
        uVar1 = *(ushort *)((int)puVar3 + 0x1c);
        uVar2 = *(ushort *)((int)puVar4 + 0x1c);
        uVar7 = uVar1 | uVar2;
        if ((uVar7 & 1) == 0) {
          if ((uVar7 & 0xc) == 0) {
            if ((uVar7 & 2) == 0) {
LAB_004669c5:
              uVar6 = *(uint *)(puVar4 + 3);
              pbVar12 = *(byte **)((int)puVar4 + 4);
              pbVar13 = *(byte **)((int)puVar3 + 4);
              uVar14 = uVar6;
              if (*(int *)(puVar3 + 3) < (int)uVar6) {
                uVar14 = *(uint *)(puVar3 + 3);
              }
              local_1c = (double)CONCAT44(uVar6,(undefined4)local_1c);
              while (uVar8 = uVar14 - 4, 3 < uVar14) {
                if (*(int *)pbVar12 != *(int *)pbVar13) goto LAB_004669f6;
                pbVar12 = pbVar12 + 4;
                pbVar13 = pbVar13 + 4;
                uVar14 = uVar8;
              }
              if (uVar8 == 0xfffffffc) {
LAB_00466a2a:
                uVar14 = 0;
              }
              else {
LAB_004669f6:
                bVar16 = *pbVar12 < *pbVar13;
                if ((*pbVar12 == *pbVar13) &&
                   ((uVar8 == 0xfffffffd ||
                    ((bVar16 = pbVar12[1] < pbVar13[1], pbVar12[1] == pbVar13[1] &&
                     ((uVar8 == 0xfffffffe ||
                      ((bVar16 = pbVar12[2] < pbVar13[2], pbVar12[2] == pbVar13[2] &&
                       ((uVar8 == 0xffffffff ||
                        (bVar16 = pbVar12[3] < pbVar13[3], pbVar12[3] == pbVar13[3]))))))))))))
                goto LAB_00466a2a;
                uVar14 = -(uint)bVar16 | 1;
              }
              if (uVar14 == 0) {
                uVar14 = uVar6 - *(int *)(puVar3 + 3);
              }
            }
            else if ((uVar2 & 2) == 0) {
              uVar14 = 1;
            }
            else if ((uVar1 & 2) == 0) {
              uVar14 = 0xffffffff;
            }
            else {
              if (local_14 == 0) goto LAB_004669c5;
              if (*(char *)((int)puVar4 + 0x1f) == *(char *)(local_14 + 4)) {
                uVar14 = (**(code **)(local_14 + 0xc))
                                   (*(undefined4 *)(local_14 + 8),*(undefined4 *)(puVar4 + 3),
                                    *(undefined4 *)((int)puVar4 + 4),*(undefined4 *)(puVar3 + 3),
                                    *(undefined4 *)((int)puVar3 + 4));
              }
              else {
                local_70[10] = 0;
                local_70[0xb] = 0;
                local_70[0xc] = 0;
                local_70[0xd] = 0;
                local_70[0xe] = 0;
                local_70[0xf] = 0;
                local_70[0x10] = 0;
                local_70[0x11] = 0;
                local_70[0x12] = 0;
                local_70[0x13] = 0;
                local_70[0] = 0;
                local_70[1] = 0;
                local_70[2] = 0;
                local_70[3] = 0;
                local_70[4] = 0;
                local_70[5] = 0;
                local_70[6] = 0;
                local_70[7] = 0;
                local_70[8] = 0;
                local_70[9] = 0;
                FUN_004b7c40(local_70 + 10,puVar4,0x1000);
                FUN_004b7c40(local_70,puVar3,0x1000);
                iVar9 = FUN_004ae680(local_70 + 10,*(byte *)(iVar5 + 4));
                iVar15 = local_70[0x10];
                if (iVar9 == 0) {
                  iVar15 = 0;
                }
                iVar10 = FUN_004ae680(local_70,*(byte *)(iVar5 + 4));
                iVar11 = local_70[6];
                if (iVar10 == 0) {
                  iVar11 = 0;
                }
                uVar14 = (**(code **)(iVar5 + 0xc))
                                   (*(undefined4 *)(iVar5 + 8),iVar15,iVar9,iVar11,iVar10);
                FUN_004b76e0(local_70 + 10);
                FUN_004b76e0(local_70);
                iVar15 = local_8;
              }
            }
          }
          else if ((uVar2 & 0xc) == 0) {
            uVar14 = 1;
          }
          else if ((uVar1 & 0xc) == 0) {
            uVar14 = 0xffffffff;
          }
          else if ((uVar1 & uVar2 & 4) == 0) {
            if ((uVar2 & 8) == 0) {
              dVar18 = (double)(longlong)puVar4[2];
              local_1c = dVar18;
            }
            else {
              dVar18 = (double)puVar4[1];
            }
            if ((uVar1 & 8) == 0) {
              dVar17 = (double)(longlong)puVar3[2];
              local_1c = dVar17;
            }
            else {
              dVar17 = (double)puVar3[1];
            }
            if (dVar17 <= dVar18) {
              uVar14 = (uint)(dVar17 < dVar18);
            }
            else {
              uVar14 = 0xffffffff;
            }
          }
          else {
            iVar5 = *(int *)((int)puVar4 + 0x14);
            iVar9 = *(int *)((int)puVar3 + 0x14);
            if (iVar9 < iVar5) {
LAB_004668b2:
              uVar14 = 1;
            }
            else if ((iVar5 < iVar9) || (*(uint *)(puVar4 + 2) < *(uint *)(puVar3 + 2))) {
              uVar14 = 0xffffffff;
            }
            else {
              if ((iVar9 <= iVar5) &&
                 ((iVar9 < iVar5 || (*(uint *)(puVar3 + 2) < *(uint *)(puVar4 + 2)))))
              goto LAB_004668b2;
              uVar14 = 0;
            }
          }
        }
        else {
          uVar14 = (uVar1 & 1) - (uVar2 & 1);
        }
        if (-1 < (int)(uVar14 ^ local_70[0x14])) {
          local_c = iVar15 * 4;
          local_10 = iVar15;
        }
        local_8 = iVar15 + 1;
      } while (local_8 < param_2);
    }
    FUN_004b6f10(param_1 + 2,(undefined8 *)param_3[local_10]);
  }
  return;
}


/* vdispatch_5492ad @ 005492ad  kind=gamemisc  attributed-by=role:dispatch  size=68 */

void FUN_005492ad(void)

{
  int iVar1;
  int *piVar2;
  int unaff_EBP;
  int *unaff_ESI;
  int unaff_EDI;
  
  *(undefined4 *)(unaff_EBP + -4) = 1;
  std::basic_ios<char,std::char_traits<char>_>::setstate
            ((basic_ios<char,std::char_traits<char>_> *)(*(int *)(*unaff_ESI + 4) + (int)unaff_ESI),
             unaff_EDI,false);
  iVar1 = *unaff_ESI;
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  piVar2 = *(int **)(*(int *)(iVar1 + 4) + 0x38 + (int)unaff_ESI);
  if (piVar2 != (int *)0x0) {
    (**(code **)(*piVar2 + 8))();
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


/* vdispatch_54a6d7 @ 0054a6d7  kind=gamemisc  attributed-by=role:dispatch  size=21 */

void __fastcall FUN_0054a6d7(int param_1)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)(**(code **)(**(int **)(param_1 + 4) + 8))();
  if (puVar1 != (undefined4 *)0x0) {
    (**(code **)*puVar1)(1);
  }
  return;
}


/* vdispatch_54b88b @ 0054b88b  kind=gamemisc  attributed-by=role:dispatch  size=32 */

void FUN_0054b88b(void)

{
  undefined4 *puVar1;
  
  for (puVar1 = &DAT_00575244; puVar1 < &DAT_00575244; puVar1 = puVar1 + 1) {
    if ((code *)*puVar1 != (code *)0x0) {
      (*(code *)*puVar1)();
    }
  }
  return;
}


/* vdispatch_54b8ab @ 0054b8ab  kind=gamemisc  attributed-by=role:dispatch  size=32 */

void FUN_0054b8ab(void)

{
  undefined4 *puVar1;
  
  for (puVar1 = &DAT_0057524c; puVar1 < &DAT_0057524c; puVar1 = puVar1 + 1) {
    if ((code *)*puVar1 != (code *)0x0) {
      (*(code *)*puVar1)();
    }
  }
  return;
}


