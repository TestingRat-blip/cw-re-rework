// body_splits (ai) -- server. 3 functions. Bodies = Ghidra pseudo-C.
// Attribution: see ../attribution.tsv. Toolchain of the original: MSVC 11.0 (VS2012).
#include "body_splits.h"

/* FUN_004DD2E0__split_4dd9da @ 004dd9da  kind=gamemisc  attributed-by=role:body-split  size=1061 */

void __fastcall FUN_004dd9da(int param_1,uint param_2)

{
  int *piVar1;
  float fVar2;
  undefined8 uVar3;
  longlong lVar4;
  int in_EAX;
  int iVar5;
  uint uVar6;
  uint unaff_EBP;
  uint uVar7;
  int *piVar8;
  int unaff_EDI;
  int iVar9;
  bool bVar10;
  ulonglong uVar11;
  undefined4 uStack00000008;
  
  do {
    *(uint *)(unaff_EBP - 0x84) = param_2;
    if ((int)param_2 <= unaff_EDI) {
      do {
        if ((((-1 < param_1) && (-1 < (int)param_2)) && (param_1 < 0x200000)) &&
           ((int)param_2 < 0x200000)) {
          iVar9 = ((int)param_2 >> 0x1f & 0x1fU) + param_2;
          uVar7 = iVar9 >> 5;
          iVar5 = (param_1 >> 0x1f & 0x1fU) + param_1;
          uVar6 = iVar5 >> 5;
          if (((-1 < (int)uVar6) && (-1 < (int)uVar7)) &&
             (((int)uVar6 < 0x10000 && ((int)uVar7 < 0x10000)))) {
            iVar5 = (int)(uVar6 + (iVar5 >> 0x1f & 0x3fU)) >> 6;
            iVar9 = (int)((iVar9 >> 0x1f & 0x3fU) + uVar7) >> 6;
            if (((-1 < iVar5) && (-1 < iVar9)) &&
               ((iVar5 < 0x400 &&
                ((iVar9 < 0x400 &&
                 (iVar9 = *(int *)(*(int *)(unaff_EBP - 0xa4) + 0xbc + (iVar5 * 0x400 + iVar9) * 4),
                 iVar9 != 0)))))) {
              uVar6 = uVar6 & 0x8000003f;
              if ((int)uVar6 < 0) {
                uVar6 = (uVar6 - 1 | 0xffffffc0) + 1;
              }
              uVar7 = uVar7 & 0x8000003f;
              if ((int)uVar7 < 0) {
                uVar7 = (uVar7 - 1 | 0xffffffc0) + 1;
              }
              iVar9 = *(int *)(iVar9 + 0x10018 + (uVar6 * 0x40 + uVar7) * 4);
              if (iVar9 != 0) {
                uVar6 = param_2 & 0x8000001f;
                if ((int)uVar6 < 0) {
                  uVar6 = (uVar6 - 1 | 0xffffffe0) + 1;
                }
                uVar7 = *(uint *)(unaff_EBP - 0x38) & 0x8000001f;
                if ((int)uVar7 < 0) {
                  uVar7 = (uVar7 - 1 | 0xffffffe0) + 1;
                }
                piVar1 = (int *)(*(int *)(iVar9 + 0xac) + (uVar6 * 0x20 + uVar7) * 8);
                *(int **)(unaff_EBP - 0x6c) = piVar1;
                if ((piVar1 != (int *)0x0) && (piVar8 = *(int **)*piVar1, piVar8 != (int *)*piVar1))
                {
                  do {
                    piVar1 = (int *)piVar8[2];
                    iVar9 = *piVar1;
                    if (((iVar9 != 7) && ((iVar9 != 6 && (iVar9 != 9)))) &&
                       (((iVar9 != 1 &&
                         ((((iVar9 != 8 && (iVar9 != 2)) && (iVar9 != 3)) && (iVar9 != 5)))) ||
                        ((char)piVar1[0xc] != '\0')))) {
                      uVar3 = *(undefined8 *)(piVar1 + 9);
                      *(int *)(unaff_EBP - 8) = piVar1[0xb];
                      uVar6 = piVar1[8];
                      *(undefined8 *)(unaff_EBP - 0x10) = uVar3;
                      uVar6 = uVar6 & 0x80000001;
                      bVar10 = uVar6 == 0;
                      if ((int)uVar6 < 0) {
                        bVar10 = (uVar6 - 1 | 0xfffffffe) == 0xffffffff;
                      }
                      if (bVar10) {
                        *(undefined4 *)(unaff_EBP - 0x80) = *(undefined4 *)(unaff_EBP - 0xc);
                        fVar2 = *(float *)(unaff_EBP - 0x10);
                      }
                      else {
                        *(undefined4 *)(unaff_EBP - 0x80) = *(undefined4 *)(unaff_EBP - 0x10);
                        fVar2 = *(float *)(unaff_EBP - 0xc);
                      }
                      *(float *)(unaff_EBP - 0x90) = fVar2 * 0.5 * 65536.0;
                      uVar11 = FUN_0054a946();
                      *(int *)(unaff_EBP - 0x58) = (int)uVar11;
                      iVar9 = *(int *)(unaff_EBP - 0x4c);
                      *(int *)(unaff_EBP - 0x40) = (int)(uVar11 >> 0x20);
                      *(float *)(unaff_EBP - 0x8c) = *(float *)(iVar9 + 0x80) * 0.5 * 65536.0;
                      uVar11 = FUN_0054a946();
                      lVar4 = uVar11 + CONCAT44(*(undefined4 *)(unaff_EBP - 0x5c),
                                                *(undefined4 *)(unaff_EBP - 0x50));
                      iVar5 = (int)((ulonglong)lVar4 >> 0x20);
                      *(int *)(unaff_EBP - 100) = (int)lVar4;
                      uVar6 = piVar1[2];
                      uVar7 = *(uint *)(unaff_EBP - 0x58);
                      *(ulonglong *)(unaff_EBP - 0x74) = uVar11;
                      iVar9 = (piVar1[3] - *(int *)(unaff_EBP - 0x40)) - (uint)(uVar6 < uVar7);
                      if ((iVar9 <= iVar5) &&
                         ((iVar9 < iVar5 || (uVar6 - uVar7 <= *(uint *)(unaff_EBP - 100))))) {
                        iVar9 = (*(int *)(unaff_EBP - 0x5c) - *(int *)(unaff_EBP - 0x70)) -
                                (uint)(*(uint *)(unaff_EBP - 0x50) < *(uint *)(unaff_EBP - 0x74));
                        iVar5 = *(int *)(unaff_EBP - 0x40) + piVar1[3] +
                                (uint)CARRY4(uVar7,piVar1[2]);
                        if ((iVar9 <= iVar5) &&
                           ((iVar9 < iVar5 ||
                            (*(uint *)(unaff_EBP - 0x50) - *(uint *)(unaff_EBP - 0x74) <
                             uVar7 + piVar1[2])))) {
                          *(float *)(unaff_EBP - 0x98) =
                               *(float *)(unaff_EBP - 0x80) * 0.5 * 65536.0;
                          uVar11 = FUN_0054a946();
                          *(int *)(unaff_EBP - 0x58) = (int)uVar11;
                          iVar9 = *(int *)(unaff_EBP - 0x4c);
                          *(int *)(unaff_EBP - 0x40) = (int)(uVar11 >> 0x20);
                          *(float *)(unaff_EBP - 0x44) = *(float *)(iVar9 + 0x84) * 0.5 * 65536.0;
                          uVar11 = FUN_0054a946();
                          lVar4 = uVar11 + CONCAT44(*(undefined4 *)(unaff_EBP - 0x68),
                                                    *(undefined4 *)(unaff_EBP - 0x94));
                          iVar5 = (int)((ulonglong)lVar4 >> 0x20);
                          *(int *)(unaff_EBP - 100) = (int)lVar4;
                          uVar6 = piVar1[4];
                          uVar7 = *(uint *)(unaff_EBP - 0x58);
                          *(ulonglong *)(unaff_EBP - 0x74) = uVar11;
                          iVar9 = (piVar1[5] - *(int *)(unaff_EBP - 0x40)) - (uint)(uVar6 < uVar7);
                          if ((iVar9 <= iVar5) &&
                             ((iVar9 < iVar5 || (uVar6 - uVar7 <= *(uint *)(unaff_EBP - 100))))) {
                            iVar9 = (*(int *)(unaff_EBP - 0x68) - *(int *)(unaff_EBP - 0x70)) -
                                    (uint)(*(uint *)(unaff_EBP - 0x94) < *(uint *)(unaff_EBP - 0x74)
                                          );
                            iVar5 = *(int *)(unaff_EBP - 0x40) + piVar1[5] +
                                    (uint)CARRY4(uVar7,piVar1[4]);
                            if ((iVar9 <= iVar5) &&
                               ((iVar9 < iVar5 ||
                                (*(uint *)(unaff_EBP - 0x94) - *(uint *)(unaff_EBP - 0x74) <
                                 uVar7 + piVar1[4])))) {
                              *(float *)(unaff_EBP - 0x54) =
                                   *(float *)(*(int *)(unaff_EBP - 0x4c) + 0x88) * 0.5 * 65536.0;
                              uVar11 = FUN_0054a946();
                              lVar4 = uVar11 + CONCAT44(*(undefined4 *)(unaff_EBP - 0x88),
                                                        *(undefined4 *)(unaff_EBP - 0x78));
                              iVar9 = (int)((ulonglong)lVar4 >> 0x20);
                              *(int *)(unaff_EBP - 0x58) = (int)uVar11;
                              *(int *)(unaff_EBP - 100) = (int)(uVar11 >> 0x20);
                              if ((piVar1[7] <= iVar9) &&
                                 ((piVar1[7] < iVar9 || ((uint)piVar1[6] <= (uint)lVar4)))) {
                                *(float *)(unaff_EBP - 0x60) = *(float *)(unaff_EBP - 8) * 65536.0;
                                uVar11 = FUN_0054a946();
                                iVar5 = (int)(uVar11 >> 0x20) + piVar1[7] +
                                        (uint)CARRY4((uint)uVar11,piVar1[6]);
                                iVar9 = (*(int *)(unaff_EBP - 0x88) - *(int *)(unaff_EBP - 100)) -
                                        (uint)(*(uint *)(unaff_EBP - 0x78) <
                                              *(uint *)(unaff_EBP - 0x58));
                                if ((iVar9 <= iVar5) &&
                                   ((iVar9 < iVar5 ||
                                    (*(uint *)(unaff_EBP - 0x78) - *(uint *)(unaff_EBP - 0x58) <
                                     (uint)uVar11 + piVar1[6])))) {
                                  FUN_004da680(*(void **)(unaff_EBP - 0xa0),
                                               (undefined4 *)(unaff_EBP - 0x24),'\0',
                                               (uint *)(piVar8 + 2),(uint)DAT_0058426a);
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                    piVar8 = (int *)*piVar8;
                  } while (piVar8 != (int *)**(int **)(unaff_EBP - 0x6c));
                  param_2 = *(uint *)(unaff_EBP - 0x84);
                }
              }
            }
            unaff_EDI = *(int *)(unaff_EBP - 0x3c);
          }
          param_1 = *(int *)(unaff_EBP - 0x38);
        }
        param_2 = param_2 + 1;
        *(uint *)(unaff_EBP - 0x84) = param_2;
      } while ((int)param_2 <= unaff_EDI);
      param_2 = *(uint *)(unaff_EBP - 0x9c);
      in_EAX = *(int *)(unaff_EBP - 0x48);
    }
    param_1 = param_1 + 1;
    *(int *)(unaff_EBP - 0x38) = param_1;
  } while (param_1 <= in_EAX);
  uStack00000008 = 0x4dddf9;
  __security_check_cookie(*(uint *)(unaff_EBP - 4) ^ unaff_EBP);
  return;
}


/* FUN_0052EF00__split_52f6fa @ 0052f6fa  kind=gamemisc  attributed-by=role:body-split  size=1344 */

/* WARNING: Removing unreachable block (ram,0x0052fae6) */
/* WARNING: Removing unreachable block (ram,0x0052f93e) */
/* WARNING: Removing unreachable block (ram,0x0052f887) */
/* WARNING: Removing unreachable block (ram,0x0052fa3b) */
/* WARNING: Removing unreachable block (ram,0x0052fb34) */

void FUN_0052f6fa(undefined4 param_1,undefined4 param_2,undefined4 param_3,float param_4,int param_5
                 ,uint param_6,uint param_7,uint param_8,int *param_9,int param_10,int param_11,
                 uint param_12,int param_13,float param_14,undefined4 param_15,undefined4 param_16,
                 undefined4 param_17,uint param_18,int param_19,float param_20,uint param_21,
                 uint param_22,uint param_23,uint param_24,void *param_25,int *param_26,
                 float param_27,undefined4 *param_28,float *param_29,float param_30,float param_31,
                 float param_32,float param_33,float param_34,float param_35,float param_36,
                 float param_37,float param_38,float param_39,float param_40,uint param_41,
                 float param_42,int param_43,undefined4 *param_44,undefined4 param_45,float param_46
                 ,float param_47,undefined4 param_48,undefined4 param_49,int param_50,int param_51,
                 uint param_52,uint param_53,uint param_54,uint param_55,uint param_56,int param_57,
                 undefined4 param_58,float param_59,float param_60,undefined4 param_61,
                 undefined8 param_62,undefined8 param_63,longlong param_64,undefined4 param_65,
                 undefined8 param_66,float param_67,undefined8 param_68,undefined8 param_69,
                 longlong param_70,longlong param_71,longlong param_72,longlong param_73,
                 undefined8 param_74,undefined8 param_75,int param_76,int param_77,
                 undefined8 param_78,undefined8 param_79,longlong param_80,undefined4 param_81,
                 int param_82,int param_83,int param_84,longlong param_85,longlong param_86,
                 undefined8 param_87,uint param_88,int *param_89,int param_90)

{
  int iVar1;
  uint *puVar2;
  undefined4 *puVar3;
  uint *puVar4;
  longlong lVar5;
  longlong lVar6;
  uint uVar7;
  char cVar8;
  char cVar9;
  uint uVar10;
  int iVar11;
  uint uVar12;
  undefined *puVar13;
  undefined4 *puVar14;
  undefined4 *puVar15;
  undefined4 **ppuVar16;
  undefined4 uVar17;
  void *this;
  int *piVar18;
  int unaff_EBP;
  int *unaff_ESI;
  uint uVar19;
  undefined4 *puVar20;
  int iVar21;
  bool bVar22;
  double dVar23;
  float fVar24;
  ulonglong uVar25;
  ulonglong uVar26;
  ulonglong uVar27;
  ulonglong uVar28;
  ulonglong uVar29;
  undefined8 uVar30;
  int iStack000001c8;
  int iStack000001cc;
  int iStack000001d0;
  int iStack000001d4;
  int iStack000001d8;
  int iStack000001dc;
  float in_stack_000001e0;
  float in_stack_000001e4;
  float fStack000001e8;
  float fStack000001ec;
  float in_stack_000001f4;
  uint in_stack_00000218;
  int in_stack_0000021c;
  uint in_stack_00000220;
  int in_stack_00000224;
  uint in_stack_00000228;
  int in_stack_0000022c;
  uint in_stack_00000240;
  int in_stack_00000244;
  uint in_stack_00000248;
  int in_stack_0000024c;
  uint in_stack_00000250;
  int in_stack_00000254;
  uint in_stack_00000258;
  int in_stack_0000025c;
  uint in_stack_00000260;
  int in_stack_00000264;
  uint in_stack_00000268;
  int in_stack_0000026c;
  uint in_stack_00000270;
  int in_stack_00000274;
  uint in_stack_00000278;
  int in_stack_0000027c;
  uint in_stack_00000280;
  int in_stack_00000284;
  uint in_stack_000002cc;
  
  uVar27 = CONCAT44(param_12,param_18);
  do {
    do {
      param_12 = (uint)(uVar27 >> 0x20);
      param_18 = (uint)uVar27;
      param_9 = (int *)unaff_ESI[2];
      iVar11 = *param_9;
      uVar28 = CONCAT44(iVar11,param_24);
      if (((iVar11 != 7) && (uVar28 = CONCAT44(iVar11,param_24), iVar11 != 6)) &&
         (uVar28 = CONCAT44(iVar11,param_24), iVar11 != 9)) {
        puVar3 = *(undefined4 **)(param_13 + 0x1468);
        puVar20 = puVar3;
        if (*(char *)((int)puVar3[1] + 0xd) == '\0') {
          puVar14 = (undefined4 *)puVar3[1];
          do {
            if ((uint)puVar14[4] < (uint)unaff_ESI[2]) {
              puVar15 = (undefined4 *)puVar14[2];
            }
            else {
              puVar15 = (undefined4 *)*puVar14;
              puVar20 = puVar14;
            }
            puVar14 = puVar15;
          } while (*(char *)((int)puVar15 + 0xd) == '\0');
        }
        if ((puVar20 == puVar3) || ((uint)unaff_ESI[2] < (uint)puVar20[4])) {
          param_28 = puVar3;
          ppuVar16 = &param_28;
        }
        else {
          param_44 = puVar20;
          ppuVar16 = &param_44;
        }
        uVar28 = CONCAT44(iVar11,param_24);
        if ((*ppuVar16 == puVar3) &&
           ((((iVar11 != 1 && (iVar11 != 8)) && ((iVar11 != 2 && ((iVar11 != 3 && (iVar11 != 5))))))
            || (uVar28 = CONCAT44(iVar11,param_24), (char)param_9[0xc] != '\0')))) {
          param_66 = *(undefined8 *)(param_9 + 9);
          param_67 = (float)param_9[0xb];
          uVar10 = param_9[8] & 0x80000001;
          bVar22 = uVar10 == 0;
          if ((int)uVar10 < 0) {
            bVar22 = (uVar10 - 1 | 0xfffffffe) == 0xffffffff;
          }
          if (!bVar22) {
            param_66._4_4_ = (float)((ulonglong)param_66 >> 0x20);
            param_66 = CONCAT44((float)param_66,param_66._4_4_);
          }
          param_50 = (&param_52)[param_10 * 2] - param_9[param_10 * 2 + 2];
          param_51 = ((&param_53)[param_10 * 2] - param_9[param_10 * 2 + 3]) -
                     (uint)((&param_52)[param_10 * 2] < (uint)param_9[param_10 * 2 + 2]);
          param_4 = (float)CONCAT44(param_51,param_50);
          param_31 = param_4 * (&param_59)[param_10];
          uVar25 = FUN_0054a946();
          param_4 = (float)uVar25;
          param_45 = 0;
          uVar26 = FUN_0054a946();
          uVar27 = CONCAT44(param_12,param_18);
          uVar28 = CONCAT44(param_4,param_24);
          if (CONCAT44((int)(uVar25 >> 0x20),param_4) < (longlong)uVar26) {
            param_30 = (float)param_66 * 0.5 * 65536.0;
            uVar27 = FUN_0054a946();
            param_19 = (int)(uVar27 >> 0x20);
            param_24 = (uint)uVar27;
            param_4 = (float)param_9[2];
            iVar11 = param_9[3];
            param_40 = *param_29 * 0.5 * 65536.0;
            param_11 = iVar11;
            uVar27 = FUN_0054a946();
            param_12 = (uint)(uVar27 >> 0x20);
            param_18 = (uint)uVar27;
            param_23 = (int)param_4 - param_24;
            lVar5 = uVar27 + CONCAT44(param_53,param_52);
            uVar17 = (undefined4)lVar5;
            uVar28 = CONCAT44(uVar17,param_24);
            if (CONCAT44((iVar11 - param_19) - (uint)((uint)param_4 < param_24),param_23) <= lVar5)
            {
              param_11 = iVar11 + param_19 + (uint)CARRY4((uint)param_4,param_24);
              iVar11 = (param_53 - param_12) - (uint)(param_52 < param_18);
              uVar28 = CONCAT44(uVar17,param_24);
              if ((iVar11 <= param_11) &&
                 ((iVar11 < param_11 ||
                  (uVar28 = CONCAT44(uVar17,param_24), param_52 - param_18 < (int)param_4 + param_24
                  )))) {
                param_34 = param_66._4_4_ * 0.5 * 65536.0;
                param_4 = (float)uVar17;
                uVar27 = FUN_0054a946();
                param_19 = (int)(uVar27 >> 0x20);
                param_12 = (uint)uVar27;
                param_18 = param_9[4];
                iVar11 = param_9[5];
                param_42 = *(float *)(param_13 + 0x84) * 0.5 * 65536.0;
                param_11 = iVar11;
                uVar28 = FUN_0054a946();
                param_4 = (float)(uVar28 >> 0x20);
                param_24 = (uint)uVar28;
                param_23 = param_18 - param_12;
                lVar5 = uVar28 + CONCAT44(param_55,param_54);
                uVar10 = (uint)lVar5;
                uVar27 = CONCAT44(param_12,uVar10);
                if (CONCAT44((iVar11 - param_19) - (uint)(param_18 < param_12),param_23) <= lVar5) {
                  param_11 = iVar11 + param_19 + (uint)CARRY4(param_18,param_12);
                  iVar11 = (param_55 - (int)param_4) - (uint)(param_54 < param_24);
                  uVar27 = CONCAT44(param_12,uVar10);
                  if ((iVar11 <= param_11) &&
                     ((iVar11 < param_11 ||
                      (uVar27 = CONCAT44(param_12,uVar10), param_54 - param_24 < param_18 + param_12
                      )))) {
                    param_36 = *(float *)(param_13 + 0x88) * 0.5 * 65536.0;
                    param_18 = uVar10;
                    uVar25 = FUN_0054a946();
                    param_4 = (float)(uVar25 >> 0x20);
                    param_12 = (uint)uVar25;
                    uVar28 = CONCAT44(param_4,param_24);
                    param_18 = param_9[6];
                    param_23 = param_9[7];
                    uVar27 = CONCAT44(param_12,param_18);
                    if (*(longlong *)(param_9 + 6) <=
                        (longlong)(uVar25 + CONCAT44(param_57,param_56))) {
                      param_46 = param_67 * 65536.0;
                      uVar29 = FUN_0054a946();
                      uVar26 = CONCAT44(param_4,param_24);
                      uVar28 = CONCAT44(param_4,param_24);
                      uVar25 = CONCAT44(param_12,param_18);
                      uVar27 = CONCAT44(param_12,param_18);
                      if (CONCAT44((param_57 - (int)param_4) - (uint)(param_56 < param_12),
                                   param_56 - param_12) <
                          (longlong)(uVar29 + CONCAT44(param_23,param_18))) {
                        cVar8 = '\x01';
                        iVar11 = param_10;
                        goto LAB_0052fba4;
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
      param_24 = (uint)uVar28;
      unaff_ESI = (int *)*unaff_ESI;
    } while (unaff_ESI != param_26);
    do {
      do {
        do {
          do {
            do {
              uVar10 = param_7;
              uVar19 = param_6;
              cVar8 = param_3._3_1_;
              do {
                if (cVar8 != '\0') goto LAB_0052fb9c;
                uVar12 = param_8 + 1;
                uVar7 = param_22;
                param_8 = uVar12;
                uVar25 = uVar27;
                uVar26 = uVar28;
                if ((int)uVar19 < (int)uVar12) {
                  do {
                    uVar12 = uVar7;
                    lVar5 = CONCAT44(param_57,param_56);
                    uVar10 = uVar10 + 1;
                    iVar11 = param_10;
                    param_7 = uVar10;
                    uVar27 = uVar25;
                    uVar28 = uVar26;
                    if ((int)uVar10 <= (int)param_20) goto LAB_0052f5b6;
LAB_0053031d:
                    iVar21 = param_13;
                    param_4 = (float)(uVar26 >> 0x20);
                    param_24 = (uint)uVar26;
                    lVar6 = CONCAT44(param_49,param_48);
                    param_12 = (uint)(uVar25 >> 0x20);
                    param_18 = (uint)uVar25;
                    param_57 = (int)((ulonglong)lVar5 >> 0x20);
                    param_56 = (uint)lVar5;
                    param_10 = iVar11 + 1;
                    if (2 < param_10) {
                      param_5 = param_5 + 1;
                      if ((int)param_14 <= param_5) {
                        puVar4 = *(uint **)(unaff_EBP + 0xc);
                        iStack000001c8 = param_52 - *puVar4;
                        iStack000001cc = (param_53 - puVar4[1]) - (uint)(param_52 < *puVar4);
                        iStack000001d0 = param_54 - puVar4[2];
                        iStack000001d4 = (param_55 - puVar4[3]) - (uint)(param_54 < puVar4[2]);
                        iStack000001d8 = param_56 - puVar4[4];
                        iStack000001dc = (param_57 - puVar4[5]) - (uint)(param_56 < puVar4[4]);
                        fStack000001e8 =
                             (float)CONCAT44(iStack000001cc,iStack000001c8) * 1.5258789e-05;
                        param_14 = (float)CONCAT44(iStack000001dc,iStack000001d8);
                        fStack000001ec =
                             (float)CONCAT44(iStack000001d4,iStack000001d0) * 1.5258789e-05;
                        __security_check_cookie(in_stack_000002cc ^ (uint)&param_2);
                        return;
                      }
                      puVar2 = *(uint **)(unaff_EBP + 0x10);
                      param_71 = CONCAT44((param_53 - puVar2[1]) - (uint)(param_52 < *puVar2),
                                          param_52 - *puVar2);
                      param_72 = CONCAT44((param_55 - puVar2[3]) - (uint)(param_54 < puVar2[2]),
                                          param_54 - puVar2[2]);
                      puVar4 = puVar2 + 4;
                      param_73 = lVar5 - *(longlong *)puVar4;
                      in_stack_000001e0 = (float)param_71 * 1.5258789e-05;
                      in_stack_000001e4 = (float)param_72 * 1.5258789e-05;
                      if (in_stack_000001e4 * in_stack_000001e4 +
                          in_stack_000001e0 * in_stack_000001e0 <= param_32) {
                        lVar6 = lVar5 - *(longlong *)puVar4;
                        param_48 = (undefined4)lVar6;
                        param_49 = (undefined4)((ulonglong)lVar6 >> 0x20);
                        param_4 = (float)(lVar5 - *(longlong *)puVar4);
                        if (ABS(param_4 * 1.5258789e-05) <
                            *(float *)(param_13 + 0x88) + *(float *)(unaff_EBP + 0x14)) {
                          __security_check_cookie(in_stack_000002cc ^ (uint)&param_2);
                          return;
                        }
                      }
                      param_49 = (undefined4)((ulonglong)lVar6 >> 0x20);
                      param_48 = (undefined4)lVar6;
                      param_85._0_4_ = (uint)*(undefined8 *)puVar2;
                      param_85._4_4_ = (int)((ulonglong)*(undefined8 *)puVar2 >> 0x20);
                      param_85 = CONCAT44((param_85._4_4_ - param_53) -
                                          (uint)((uint)param_85 < param_52),
                                          (uint)param_85 - param_52);
                      param_86._0_4_ = (uint)*(undefined8 *)(puVar2 + 2);
                      param_86._4_4_ = (int)((ulonglong)*(undefined8 *)(puVar2 + 2) >> 0x20);
                      param_86 = CONCAT44((param_86._4_4_ - param_55) -
                                          (uint)((uint)param_86 < param_54),
                                          (uint)param_86 - param_54);
                      param_87 = *(undefined8 *)(puVar2 + 4);
                      param_59 = (float)param_85 * 1.5258789e-05;
                      param_4 = (float)param_86 * 1.5258789e-05;
                      param_60 = param_4;
                      fVar24 = param_4 * param_4 + param_59 * param_59 + param_47;
                      if (0.0 < fVar24) {
                        dVar23 = (double)fVar24;
                        libm_sse2_sqrt_precise();
                        lVar6 = CONCAT44(param_49,param_48);
                        uVar25 = CONCAT44(param_12,param_18);
                        lVar5 = CONCAT44(param_57,param_56);
                        param_59 = (1.0 / (float)dVar23) * param_59;
                        param_60 = (1.0 / (float)dVar23) * param_4;
                      }
                      uVar26 = CONCAT44(param_4,param_24);
                      param_61 = 0xbf35c28f;
                      param_10 = 0;
                      param_29 = (float *)(iVar21 + 0x80);
                    }
                    iVar11 = param_10;
                    param_4 = (float)(uVar26 >> 0x20);
                    param_24 = (uint)uVar26;
                    param_49 = (undefined4)((ulonglong)lVar6 >> 0x20);
                    param_48 = (undefined4)lVar6;
                    param_12 = (uint)(uVar25 >> 0x20);
                    param_18 = (uint)uVar25;
                    param_57 = (int)((ulonglong)lVar5 >> 0x20);
                    param_56 = (uint)lVar5;
                    param_38 = (&param_59)[param_10] * 65536.0;
                    uVar27 = FUN_0054a946();
                    param_43 = (int)(uVar27 >> 0x20);
                    param_41 = (uint)uVar27;
                    puVar4 = &param_52 + iVar11 * 2;
                    uVar10 = *puVar4;
                    *puVar4 = *puVar4 + param_41;
                    (&param_53)[iVar11 * 2] =
                         (&param_53)[iVar11 * 2] + param_43 + (uint)CARRY4(uVar10,param_41);
                    param_17 = CONCAT13(1,(undefined3)param_17);
                    cVar8 = FUN_004d4f90(param_25,&param_52,(float *)(iVar21 + 0x80),'\0');
                    uVar26 = CONCAT44(param_4,param_24);
                    uVar25 = CONCAT44(param_12,param_18);
                    param_3 = CONCAT13(cVar8,(undefined3)param_3);
                    if ((cVar8 != '\0') && (iVar11 != 2)) {
                      cVar9 = param_17._3_1_;
                      goto LAB_0052fbaa;
                    }
                    uVar30 = __alldiv(param_52,param_53,0x10000,0);
                    iVar21 = (int)(((int)uVar30 >> 0x1f & 7U) + (int)uVar30) >> 3;
                    uVar30 = __alldiv(param_54,param_55,0x10000,0);
                    uVar26 = CONCAT44(param_4,param_24);
                    uVar25 = CONCAT44(param_12,param_18);
                    lVar5 = CONCAT44(param_57,param_56);
                    uVar10 = iVar21 - 1;
                    param_20 = (float)(iVar21 + 1);
                    iVar21 = (int)((int)uVar30 + ((int)uVar30 >> 0x1f & 7U)) >> 3;
                    if ((int)param_20 < (int)uVar10) goto LAB_0052fb8e;
                    uVar12 = iVar21 - 1;
                    uVar19 = iVar21 + 1;
                    param_6 = uVar19;
                    param_22 = uVar12;
                    uVar27 = uVar25;
                    uVar28 = uVar26;
LAB_0052f5b6:
                    cVar8 = param_3._3_1_;
                    param_7 = uVar10;
                    if ((int)uVar12 <= (int)uVar19) break;
                    uVar7 = uVar12;
                    param_8 = uVar12;
                    uVar25 = uVar27;
                    uVar26 = uVar28;
                    if (param_3._3_1_ != '\0') {
LAB_0052fb9c:
                      iVar11 = param_10;
                      cVar8 = param_3._3_1_;
                      uVar25 = uVar27;
                      uVar26 = uVar28;
                      goto LAB_0052fba4;
                    }
                  } while( true );
                }
                param_24 = (uint)uVar28;
                param_8 = uVar12;
              } while (((((int)uVar10 < 0) || ((int)uVar12 < 0)) || (0x1fffff < (int)uVar10)) ||
                      (0x1fffff < (int)uVar12));
              iVar11 = ((int)uVar12 >> 0x1f & 0x1fU) + uVar12;
              uVar19 = iVar11 >> 5;
              iVar21 = ((int)uVar10 >> 0x1f & 0x1fU) + uVar10;
              uVar10 = iVar21 >> 5;
            } while ((((int)uVar10 < 0) || ((int)uVar19 < 0)) ||
                    ((0xffff < (int)uVar10 || (0xffff < (int)uVar19))));
            iVar21 = (int)(uVar10 + (iVar21 >> 0x1f & 0x3fU)) >> 6;
            iVar11 = (int)((iVar11 >> 0x1f & 0x3fU) + uVar19) >> 6;
          } while (((iVar21 < 0) || (iVar11 < 0)) ||
                  ((0x3ff < iVar21 ||
                   ((0x3ff < iVar11 ||
                    (iVar11 = *(int *)((int)param_25 + (iVar21 * 0x400 + iVar11) * 4 + 0xbc),
                    iVar11 == 0))))));
          uVar10 = uVar10 & 0x8000003f;
          if ((int)uVar10 < 0) {
            uVar10 = (uVar10 - 1 | 0xffffffc0) + 1;
          }
          uVar19 = uVar19 & 0x8000003f;
          if ((int)uVar19 < 0) {
            uVar19 = (uVar19 - 1 | 0xffffffc0) + 1;
          }
          iVar11 = *(int *)(iVar11 + 0x10018 + (uVar10 * 0x40 + uVar19) * 4);
        } while (iVar11 == 0);
        uVar12 = uVar12 & 0x8000001f;
        if ((int)uVar12 < 0) {
          uVar12 = (uVar12 - 1 | 0xffffffe0) + 1;
        }
        uVar10 = param_7 & 0x8000001f;
        if ((int)uVar10 < 0) {
          uVar10 = (uVar10 - 1 | 0xffffffe0) + 1;
        }
        piVar18 = (int *)(*(int *)(iVar11 + 0xac) + (uVar12 * 0x20 + uVar10) * 8);
      } while (piVar18 == (int *)0x0);
      param_26 = (int *)*piVar18;
      unaff_ESI = (int *)*param_26;
    } while (unaff_ESI == param_26);
  } while( true );
LAB_0052fb8e:
  cVar8 = param_3._3_1_;
  param_7 = uVar10;
  if (param_3._3_1_ != '\0') {
LAB_0052fba4:
    cVar9 = '\0';
    iVar21 = param_13;
LAB_0052fbaa:
    lVar5 = CONCAT44(param_57,param_56);
    if (cVar8 != '\0') {
      if (((iVar11 == 2) || (cVar9 == '\0')) || ((*(ushort *)(iVar21 + 0x7e) & 0x100) != 0)) {
LAB_00530301:
        puVar4 = &param_52 + iVar11 * 2;
        uVar10 = *puVar4;
        *puVar4 = *puVar4 - param_41;
        (&param_53)[iVar11 * 2] = ((&param_53)[iVar11 * 2] - param_43) - (uint)(uVar10 < param_41);
        lVar5 = CONCAT44(param_57,param_56);
      }
      else {
        param_20 = *(float *)(iVar21 + 0x80);
        param_22 = *(uint *)(iVar21 + 0x84);
        param_26 = *(int **)(iVar21 + 0x88);
        param_21 = param_21 & 0xffffff00;
        in_stack_000001f4 = param_20 * 0.5;
        iVar11 = 0;
        do {
          param_4 = (float)(uVar26 >> 0x20);
          param_24 = (uint)uVar26;
          param_12 = (uint)(uVar25 >> 0x20);
          param_18 = (uint)uVar25;
          param_27 = (&stack0x000001f4)[iVar11] * 65536.0;
          uVar27 = FUN_0054a946();
          uVar26 = CONCAT44(param_4,param_24);
          uVar25 = CONCAT44(param_12,param_18);
          *(int *)(&stack0x00000240 + iVar11 * 8) = (int)uVar27;
          *(int *)(&stack0x00000244 + iVar11 * 8) = (int)(uVar27 >> 0x20);
          iVar11 = iVar11 + 1;
        } while (iVar11 < 3);
        iVar11 = 0;
        do {
          param_33 = *(float *)(&stack0x00000200 + iVar11 * 4) * 65536.0;
          uVar27 = FUN_0054a946();
          *(int *)(&stack0x00000218 + iVar11 * 8) = (int)uVar27;
          *(int *)(&stack0x0000021c + iVar11 * 8) = (int)(uVar27 >> 0x20);
          iVar11 = iVar11 + 1;
        } while (iVar11 < 3);
        uVar10 = param_52 + in_stack_00000218;
        iVar11 = param_53 + in_stack_0000021c + (uint)CARRY4(param_52,in_stack_00000218);
        param_62 = CONCAT44(iVar11,uVar10);
        uVar19 = param_54 + in_stack_00000220;
        iVar21 = param_55 + in_stack_00000224 + (uint)CARRY4(param_54,in_stack_00000220);
        param_63 = CONCAT44(iVar21,uVar19);
        uVar12 = param_56 + in_stack_00000228;
        iVar1 = param_57 + in_stack_0000022c + (uint)CARRY4(param_56,in_stack_00000228);
        param_64 = CONCAT44(iVar1,uVar12);
        param_78 = CONCAT44((iVar11 - in_stack_00000244) - (uint)(uVar10 < in_stack_00000240),
                            uVar10 - in_stack_00000240);
        param_79 = CONCAT44((iVar21 - in_stack_0000024c) - (uint)(uVar19 < in_stack_00000248),
                            uVar19 - in_stack_00000248);
        param_80 = CONCAT44((iVar1 - in_stack_00000254) - (uint)(uVar12 < in_stack_00000250),
                            uVar12 - in_stack_00000250);
        FUN_00405450((int *)&param_88,(uint *)&param_78);
        iVar11 = 0;
        do {
          param_35 = *(float *)(&stack0x00000234 + iVar11 * 4) * 65536.0;
          uVar27 = FUN_0054a946();
          *(int *)(&stack0x00000258 + iVar11 * 8) = (int)uVar27;
          *(int *)(&stack0x0000025c + iVar11 * 8) = (int)(uVar27 >> 0x20);
          iVar11 = iVar11 + 1;
        } while (iVar11 < 3);
        iVar11 = 0;
        do {
          param_37 = *(float *)(&stack0x0000020c + iVar11 * 4) * 65536.0;
          uVar27 = FUN_0054a946();
          *(int *)(&stack0x00000270 + iVar11 * 8) = (int)uVar27;
          *(int *)(&stack0x00000274 + iVar11 * 8) = (int)(uVar27 >> 0x20);
          iVar11 = iVar11 + 1;
        } while (iVar11 < 3);
        uVar10 = param_52 + in_stack_00000270;
        iVar11 = param_53 + in_stack_00000274 + (uint)CARRY4(param_52,in_stack_00000270);
        param_68 = CONCAT44(iVar11,uVar10);
        uVar19 = param_54 + in_stack_00000278;
        iVar21 = param_55 + in_stack_0000027c + (uint)CARRY4(param_54,in_stack_00000278);
        param_69 = CONCAT44(iVar21,uVar19);
        uVar12 = param_56 + in_stack_00000280;
        iVar1 = param_57 + in_stack_00000284 + (uint)CARRY4(param_56,in_stack_00000280);
        param_70 = CONCAT44(iVar1,uVar12);
        param_74 = CONCAT44(iVar11 + in_stack_0000025c + (uint)CARRY4(uVar10,in_stack_00000258),
                            uVar10 + in_stack_00000258);
        param_75 = CONCAT44(iVar21 + in_stack_00000264 + (uint)CARRY4(uVar19,in_stack_00000260),
                            uVar19 + in_stack_00000260);
        param_76 = uVar12 + in_stack_00000268;
        param_77 = iVar1 + in_stack_0000026c + (uint)CARRY4(uVar12,in_stack_00000268);
        FUN_00405450(&param_82,(uint *)&param_74);
        param_6 = param_88;
        uVar10 = param_88;
        piVar18 = param_89;
        if ((int)param_88 <= param_82) {
          do {
            param_9 = piVar18;
            piVar18 = param_9;
            iVar21 = param_90;
            param_6 = uVar10;
            if ((int)param_9 <= param_83) {
              do {
                if (iVar21 <= param_84) {
                  do {
                    if ((((int)uVar10 < 0) || ((int)param_9 < 0)) ||
                       ((0xffffff < (int)uVar10 || (0xffffff < (int)param_9)))) {
LAB_005301cb:
                      puVar13 = &DAT_005842dc;
                    }
                    else {
                      iVar11 = ((int)param_9 >> 0x1f & 0xffU) + (int)param_9;
                      uVar19 = iVar11 >> 8;
                      iVar1 = ((int)uVar10 >> 0x1f & 0xffU) + uVar10;
                      uVar10 = iVar1 >> 8;
                      if ((((int)uVar10 < 0) || ((int)uVar19 < 0)) ||
                         ((0xffff < (int)uVar10 || (0xffff < (int)uVar19)))) goto LAB_005301cb;
                      param_20 = (float)((int)(uVar19 + (iVar11 >> 0x1f & 0x3fU)) >> 6);
                      iVar11 = (int)(uVar10 + (iVar1 >> 0x1f & 0x3fU)) >> 6;
                      if ((((iVar11 < 0) || ((int)param_20 < 0)) || (0x3ff < iVar11)) ||
                         ((0x3ff < (int)param_20 ||
                          (iVar11 = *(int *)((int)param_25 +
                                            (iVar11 * 0x400 + (int)param_20) * 4 + 0xbc),
                          iVar11 == 0)))) goto LAB_005301cb;
                      uVar10 = uVar10 & 0x8000003f;
                      if ((int)uVar10 < 0) {
                        uVar10 = (uVar10 - 1 | 0xffffffc0) + 1;
                      }
                      uVar19 = uVar19 & 0x8000003f;
                      if ((int)uVar19 < 0) {
                        uVar19 = (uVar19 - 1 | 0xffffffc0) + 1;
                      }
                      iVar11 = *(int *)(iVar11 + 0x10018 + (uVar10 * 0x40 + uVar19) * 4);
                      if (iVar11 == 0) goto LAB_005301cb;
                      uVar10 = (uint)param_9 & 0x800000ff;
                      if ((int)uVar10 < 0) {
                        uVar10 = (uVar10 - 1 | 0xffffff00) + 1;
                      }
                      uVar19 = param_6 & 0x800000ff;
                      if ((int)uVar19 < 0) {
                        uVar19 = (uVar19 - 1 | 0xffffff00) + 1;
                      }
                      this = (void *)((uVar10 * 0x100 + uVar19) * 0x20 + *(int *)(iVar11 + 0xa8));
                      if ((this == (void *)0x0) ||
                         (iVar11 = *(int *)((int)this + 0x10), iVar21 < iVar11)) goto LAB_005301cb;
                      if (iVar21 < *(int *)((int)this + 0x1c) + iVar11) {
                        puVar13 = FUN_00405f20(this,iVar21 - iVar11);
                        if ((((puVar13[3] & 0x1f) == 0) && (iVar21 < 1)) &&
                           ((puVar13[3] & 0x40) == 0)) {
                          puVar13 = &DAT_005842d4;
                        }
                      }
                      else {
                        puVar13 = &DAT_005842d4;
                        if (0 < iVar21) {
                          puVar13 = &DAT_005842d8;
                        }
                      }
                    }
                    uVar26 = CONCAT44(param_4,param_24);
                    uVar25 = CONCAT44(param_12,param_18);
                    if (((puVar13[3] & 0x1f) != 0) &&
                       (param_21 = param_21 & 0xff, (puVar13[3] & 0x1f) != 2)) {
                      param_21 = 1;
                    }
                    iVar21 = iVar21 + 1;
                    uVar10 = param_6;
                  } while (iVar21 <= param_84);
                  iVar21 = param_90;
                  iVar11 = param_10;
                  if ((char)param_21 != '\0') goto LAB_00530301;
                }
                param_9 = (int *)((int)param_9 + 1);
                piVar18 = param_89;
              } while ((int)param_9 <= param_83);
            }
            param_6 = uVar10 + 1;
            uVar10 = param_6;
          } while ((int)param_6 <= param_82);
        }
        param_39 = *(float *)(param_13 + 0x88) * 0.5 * 65536.0;
        uVar27 = FUN_0054a946();
        param_22 = (uint)(uVar27 >> 0x20);
        param_20 = (float)uVar27;
        uVar10 = param_56 - (int)param_20;
        uVar19 = (param_57 - param_22) - (uint)(param_56 < (uint)param_20);
        if (((int)uVar19 < 1) && ((int)uVar19 < 0)) {
          bVar22 = 0xffff < uVar10;
          uVar10 = uVar10 - 0x10000;
          uVar19 = (uVar19 - 1) + (uint)bVar22;
        }
        uVar30 = __alldiv(uVar10,uVar19,0x10000,0);
        uVar10 = (uint)uVar30;
        uVar27 = FUN_0054a946();
        uVar19 = uVar10 * 0x10000 - (uint)uVar27;
        param_56 = uVar19 + (int)param_20;
        param_57 = (((((int)uVar10 >> 0x1f) << 0x10 | uVar10 >> 0x10) - (int)(uVar27 >> 0x20)) -
                   (uint)(uVar10 * 0x10000 < (uint)uVar27)) + param_22 +
                   (uint)CARRY4(uVar19,(uint)param_20);
        uVar27 = FUN_0054a946();
        uVar26 = CONCAT44(param_4,param_24);
        uVar25 = CONCAT44(param_12,param_18);
        lVar5 = uVar27 + CONCAT44(param_57,param_56);
        param_56 = (uint)lVar5;
        param_57 = (int)((ulonglong)lVar5 >> 0x20);
        iVar11 = param_10;
      }
    }
  }
  goto LAB_0053031d;
}


/* FUN_0052EF00__split_52fc3a @ 0052fc3a  kind=gamemisc  attributed-by=role:body-split  size=2080 */

/* WARNING: Removing unreachable block (ram,0x0052f887) */
/* WARNING: Removing unreachable block (ram,0x0052f93e) */
/* WARNING: Removing unreachable block (ram,0x0052fa3b) */
/* WARNING: Removing unreachable block (ram,0x0052fae6) */
/* WARNING: Removing unreachable block (ram,0x0052fb34) */

void FUN_0052fc3a(undefined4 param_1,undefined4 param_2,undefined4 param_3,float param_4,int param_5
                 ,uint param_6,uint param_7,uint param_8,int *param_9,int param_10,int param_11,
                 uint param_12,int param_13,float param_14,undefined4 param_15,undefined4 param_16,
                 undefined4 param_17,uint param_18,int param_19,float param_20,uint param_21,
                 uint param_22,uint param_23,uint param_24,void *param_25,int *param_26,
                 float param_27,undefined4 *param_28,float *param_29,float param_30,float param_31,
                 float param_32,float param_33,float param_34,float param_35,float param_36,
                 float param_37,float param_38,float param_39,float param_40,uint param_41,
                 float param_42,int param_43,undefined4 *param_44,undefined4 param_45,float param_46
                 ,float param_47,undefined4 param_48,undefined4 param_49,int param_50,int param_51,
                 uint param_52,uint param_53,uint param_54,uint param_55,uint param_56,int param_57,
                 undefined4 param_58,float param_59,float param_60,undefined4 param_61,
                 undefined8 param_62,undefined8 param_63,longlong param_64,undefined4 param_65,
                 undefined8 param_66,float param_67,undefined8 param_68,undefined8 param_69,
                 longlong param_70,longlong param_71,longlong param_72,longlong param_73,
                 undefined8 param_74,undefined8 param_75,int param_76,int param_77,
                 undefined8 param_78,undefined8 param_79,longlong param_80,undefined4 param_81,
                 int param_82,int param_83,int param_84,longlong param_85,longlong param_86,
                 undefined8 param_87,uint param_88,int *param_89,int param_90)

{
  int iVar1;
  uint *puVar2;
  undefined4 *puVar3;
  uint *puVar4;
  longlong lVar5;
  longlong lVar6;
  char cVar7;
  char cVar8;
  int iVar9;
  undefined *puVar10;
  uint uVar11;
  undefined4 *puVar12;
  undefined4 *puVar13;
  undefined4 **ppuVar14;
  uint uVar15;
  void *this;
  uint uVar16;
  int *piVar17;
  int unaff_EBP;
  int unaff_ESI;
  int iVar18;
  uint uVar19;
  undefined4 *puVar20;
  bool bVar21;
  double dVar22;
  float fVar23;
  ulonglong uVar24;
  ulonglong uVar25;
  ulonglong uVar26;
  ulonglong uVar27;
  ulonglong uVar28;
  undefined8 uVar29;
  int iStack000001c8;
  int iStack000001cc;
  int iStack000001d0;
  int iStack000001d4;
  int iStack000001d8;
  int iStack000001dc;
  float in_stack_000001e0;
  float in_stack_000001e4;
  float fStack000001e8;
  float fStack000001ec;
  float in_stack_000001f4;
  uint in_stack_00000218;
  int in_stack_0000021c;
  uint in_stack_00000220;
  int in_stack_00000224;
  uint in_stack_00000228;
  int in_stack_0000022c;
  uint in_stack_00000240;
  int in_stack_00000244;
  uint in_stack_00000248;
  int in_stack_0000024c;
  uint in_stack_00000250;
  int in_stack_00000254;
  uint in_stack_00000258;
  int in_stack_0000025c;
  uint in_stack_00000260;
  int in_stack_00000264;
  uint in_stack_00000268;
  int in_stack_0000026c;
  uint in_stack_00000270;
  int in_stack_00000274;
  uint in_stack_00000278;
  int in_stack_0000027c;
  uint in_stack_00000280;
  int in_stack_00000284;
  uint in_stack_000002cc;
  
  uVar24 = CONCAT44(param_4,param_24);
  uVar28 = CONCAT44(param_12,param_18);
LAB_0052fc40:
  do {
    param_4 = (float)(uVar24 >> 0x20);
    param_24 = (uint)uVar24;
    param_12 = (uint)(uVar28 >> 0x20);
    param_18 = (uint)uVar28;
    param_27 = (&stack0x000001f4)[unaff_ESI] * 65536.0;
    uVar27 = FUN_0054a946();
    uVar24 = CONCAT44(param_4,param_24);
    uVar28 = CONCAT44(param_12,param_18);
    *(int *)(&stack0x00000240 + unaff_ESI * 8) = (int)uVar27;
    *(int *)(&stack0x00000244 + unaff_ESI * 8) = (int)(uVar27 >> 0x20);
    unaff_ESI = unaff_ESI + 1;
  } while (unaff_ESI < 3);
  iVar18 = 0;
  do {
    param_33 = *(float *)(&stack0x00000200 + iVar18 * 4) * 65536.0;
    uVar28 = FUN_0054a946();
    *(int *)(&stack0x00000218 + iVar18 * 8) = (int)uVar28;
    *(int *)(&stack0x0000021c + iVar18 * 8) = (int)(uVar28 >> 0x20);
    iVar18 = iVar18 + 1;
  } while (iVar18 < 3);
  uVar15 = param_52 + in_stack_00000218;
  iVar18 = param_53 + in_stack_0000021c + (uint)CARRY4(param_52,in_stack_00000218);
  param_62 = CONCAT44(iVar18,uVar15);
  uVar19 = param_54 + in_stack_00000220;
  iVar9 = param_55 + in_stack_00000224 + (uint)CARRY4(param_54,in_stack_00000220);
  param_63 = CONCAT44(iVar9,uVar19);
  uVar11 = param_56 + in_stack_00000228;
  iVar1 = param_57 + in_stack_0000022c + (uint)CARRY4(param_56,in_stack_00000228);
  param_64 = CONCAT44(iVar1,uVar11);
  param_78 = CONCAT44((iVar18 - in_stack_00000244) - (uint)(uVar15 < in_stack_00000240),
                      uVar15 - in_stack_00000240);
  param_79 = CONCAT44((iVar9 - in_stack_0000024c) - (uint)(uVar19 < in_stack_00000248),
                      uVar19 - in_stack_00000248);
  param_80 = CONCAT44((iVar1 - in_stack_00000254) - (uint)(uVar11 < in_stack_00000250),
                      uVar11 - in_stack_00000250);
  FUN_00405450((int *)&param_88,(uint *)&param_78);
  iVar18 = 0;
  do {
    param_35 = *(float *)(&stack0x00000234 + iVar18 * 4) * 65536.0;
    uVar28 = FUN_0054a946();
    *(int *)(&stack0x00000258 + iVar18 * 8) = (int)uVar28;
    *(int *)(&stack0x0000025c + iVar18 * 8) = (int)(uVar28 >> 0x20);
    iVar18 = iVar18 + 1;
  } while (iVar18 < 3);
  iVar18 = 0;
  do {
    param_37 = *(float *)(&stack0x0000020c + iVar18 * 4) * 65536.0;
    uVar28 = FUN_0054a946();
    *(int *)(&stack0x00000270 + iVar18 * 8) = (int)uVar28;
    *(int *)(&stack0x00000274 + iVar18 * 8) = (int)(uVar28 >> 0x20);
    iVar18 = iVar18 + 1;
  } while (iVar18 < 3);
  uVar15 = param_52 + in_stack_00000270;
  iVar18 = param_53 + in_stack_00000274 + (uint)CARRY4(param_52,in_stack_00000270);
  param_68 = CONCAT44(iVar18,uVar15);
  uVar19 = param_54 + in_stack_00000278;
  iVar9 = param_55 + in_stack_0000027c + (uint)CARRY4(param_54,in_stack_00000278);
  param_69 = CONCAT44(iVar9,uVar19);
  uVar11 = param_56 + in_stack_00000280;
  iVar1 = param_57 + in_stack_00000284 + (uint)CARRY4(param_56,in_stack_00000280);
  param_70 = CONCAT44(iVar1,uVar11);
  param_74 = CONCAT44(iVar18 + in_stack_0000025c + (uint)CARRY4(uVar15,in_stack_00000258),
                      uVar15 + in_stack_00000258);
  param_75 = CONCAT44(iVar9 + in_stack_00000264 + (uint)CARRY4(uVar19,in_stack_00000260),
                      uVar19 + in_stack_00000260);
  param_76 = uVar11 + in_stack_00000268;
  param_77 = iVar1 + in_stack_0000026c + (uint)CARRY4(uVar11,in_stack_00000268);
  FUN_00405450(&param_82,(uint *)&param_74);
  param_6 = param_88;
  uVar15 = param_88;
  piVar17 = param_89;
  if ((int)param_88 <= param_82) {
    do {
      param_9 = piVar17;
      piVar17 = param_9;
      iVar18 = param_90;
      param_6 = uVar15;
      if ((int)param_9 <= param_83) {
        do {
          if (iVar18 <= param_84) {
            do {
              if (((((int)uVar15 < 0) || ((int)param_9 < 0)) || (0xffffff < (int)uVar15)) ||
                 (0xffffff < (int)param_9)) {
LAB_005301cb:
                puVar10 = &DAT_005842dc;
              }
              else {
                iVar9 = ((int)param_9 >> 0x1f & 0xffU) + (int)param_9;
                uVar19 = iVar9 >> 8;
                iVar1 = ((int)uVar15 >> 0x1f & 0xffU) + uVar15;
                uVar15 = iVar1 >> 8;
                if ((((int)uVar15 < 0) || ((int)uVar19 < 0)) ||
                   ((0xffff < (int)uVar15 || (0xffff < (int)uVar19)))) goto LAB_005301cb;
                param_20 = (float)((int)(uVar19 + (iVar9 >> 0x1f & 0x3fU)) >> 6);
                iVar9 = (int)(uVar15 + (iVar1 >> 0x1f & 0x3fU)) >> 6;
                if (((iVar9 < 0) || ((int)param_20 < 0)) ||
                   ((0x3ff < iVar9 ||
                    ((0x3ff < (int)param_20 ||
                     (iVar9 = *(int *)((int)param_25 + (iVar9 * 0x400 + (int)param_20) * 4 + 0xbc),
                     iVar9 == 0)))))) goto LAB_005301cb;
                uVar15 = uVar15 & 0x8000003f;
                if ((int)uVar15 < 0) {
                  uVar15 = (uVar15 - 1 | 0xffffffc0) + 1;
                }
                uVar19 = uVar19 & 0x8000003f;
                if ((int)uVar19 < 0) {
                  uVar19 = (uVar19 - 1 | 0xffffffc0) + 1;
                }
                iVar9 = *(int *)(iVar9 + 0x10018 + (uVar15 * 0x40 + uVar19) * 4);
                if (iVar9 == 0) goto LAB_005301cb;
                uVar15 = (uint)param_9 & 0x800000ff;
                if ((int)uVar15 < 0) {
                  uVar15 = (uVar15 - 1 | 0xffffff00) + 1;
                }
                uVar19 = param_6 & 0x800000ff;
                if ((int)uVar19 < 0) {
                  uVar19 = (uVar19 - 1 | 0xffffff00) + 1;
                }
                this = (void *)((uVar15 * 0x100 + uVar19) * 0x20 + *(int *)(iVar9 + 0xa8));
                if ((this == (void *)0x0) || (iVar9 = *(int *)((int)this + 0x10), iVar18 < iVar9))
                goto LAB_005301cb;
                if (iVar18 < *(int *)((int)this + 0x1c) + iVar9) {
                  puVar10 = FUN_00405f20(this,iVar18 - iVar9);
                  if ((((puVar10[3] & 0x1f) == 0) && (iVar18 < 1)) && ((puVar10[3] & 0x40) == 0)) {
                    puVar10 = &DAT_005842d4;
                  }
                }
                else {
                  puVar10 = &DAT_005842d4;
                  if (0 < iVar18) {
                    puVar10 = &DAT_005842d8;
                  }
                }
              }
              uVar24 = CONCAT44(param_4,param_24);
              uVar28 = CONCAT44(param_12,param_18);
              if (((puVar10[3] & 0x1f) != 0) &&
                 (param_21 = param_21 & 0xff, (puVar10[3] & 0x1f) != 2)) {
                param_21 = 1;
              }
              iVar18 = iVar18 + 1;
              uVar15 = param_6;
            } while (iVar18 <= param_84);
            iVar18 = param_90;
            iVar9 = param_10;
            if ((char)param_21 != '\0') goto LAB_00530301;
          }
          param_9 = (int *)((int)param_9 + 1);
          piVar17 = param_89;
        } while ((int)param_9 <= param_83);
      }
      param_6 = uVar15 + 1;
      uVar15 = param_6;
    } while ((int)param_6 <= param_82);
  }
  param_39 = *(float *)(param_13 + 0x88) * 0.5 * 65536.0;
  uVar28 = FUN_0054a946();
  param_22 = (uint)(uVar28 >> 0x20);
  param_20 = (float)uVar28;
  uVar15 = param_56 - (int)param_20;
  uVar19 = (param_57 - param_22) - (uint)(param_56 < (uint)param_20);
  if (((int)uVar19 < 1) && ((int)uVar19 < 0)) {
    bVar21 = 0xffff < uVar15;
    uVar15 = uVar15 - 0x10000;
    uVar19 = (uVar19 - 1) + (uint)bVar21;
  }
  uVar29 = __alldiv(uVar15,uVar19,0x10000,0);
  uVar15 = (uint)uVar29;
  uVar28 = FUN_0054a946();
  uVar19 = uVar15 * 0x10000 - (uint)uVar28;
  param_56 = uVar19 + (int)param_20;
  param_57 = (((((int)uVar15 >> 0x1f) << 0x10 | uVar15 >> 0x10) - (int)(uVar28 >> 0x20)) -
             (uint)(uVar15 * 0x10000 < (uint)uVar28)) + param_22 +
             (uint)CARRY4(uVar19,(uint)param_20);
  uVar27 = FUN_0054a946();
  uVar24 = CONCAT44(param_4,param_24);
  uVar28 = CONCAT44(param_12,param_18);
  lVar5 = uVar27 + CONCAT44(param_57,param_56);
  param_56 = (uint)lVar5;
  param_57 = (int)((ulonglong)lVar5 >> 0x20);
  iVar9 = param_10;
LAB_0053031d:
  while( true ) {
    iVar18 = param_13;
    param_4 = (float)(uVar24 >> 0x20);
    param_24 = (uint)uVar24;
    lVar6 = CONCAT44(param_49,param_48);
    param_57 = (int)((ulonglong)lVar5 >> 0x20);
    param_56 = (uint)lVar5;
    param_12 = (uint)(uVar28 >> 0x20);
    param_18 = (uint)uVar28;
    param_10 = iVar9 + 1;
    if (2 < param_10) {
      param_5 = param_5 + 1;
      if ((int)param_14 <= param_5) {
        puVar4 = *(uint **)(unaff_EBP + 0xc);
        iStack000001c8 = param_52 - *puVar4;
        iStack000001cc = (param_53 - puVar4[1]) - (uint)(param_52 < *puVar4);
        iStack000001d0 = param_54 - puVar4[2];
        iStack000001d4 = (param_55 - puVar4[3]) - (uint)(param_54 < puVar4[2]);
        iStack000001d8 = param_56 - puVar4[4];
        iStack000001dc = (param_57 - puVar4[5]) - (uint)(param_56 < puVar4[4]);
        fStack000001e8 = (float)CONCAT44(iStack000001cc,iStack000001c8) * 1.5258789e-05;
        param_14 = (float)CONCAT44(iStack000001dc,iStack000001d8);
        fStack000001ec = (float)CONCAT44(iStack000001d4,iStack000001d0) * 1.5258789e-05;
        __security_check_cookie(in_stack_000002cc ^ (uint)&param_2);
        return;
      }
      puVar2 = *(uint **)(unaff_EBP + 0x10);
      param_71 = CONCAT44((param_53 - puVar2[1]) - (uint)(param_52 < *puVar2),param_52 - *puVar2);
      param_72 = CONCAT44((param_55 - puVar2[3]) - (uint)(param_54 < puVar2[2]),param_54 - puVar2[2]
                         );
      puVar4 = puVar2 + 4;
      param_73 = lVar5 - *(longlong *)puVar4;
      in_stack_000001e0 = (float)param_71 * 1.5258789e-05;
      in_stack_000001e4 = (float)param_72 * 1.5258789e-05;
      if (in_stack_000001e4 * in_stack_000001e4 + in_stack_000001e0 * in_stack_000001e0 <= param_32)
      {
        lVar6 = lVar5 - *(longlong *)puVar4;
        param_48 = (undefined4)lVar6;
        param_49 = (undefined4)((ulonglong)lVar6 >> 0x20);
        param_4 = (float)(lVar5 - *(longlong *)puVar4);
        if (ABS(param_4 * 1.5258789e-05) <
            *(float *)(param_13 + 0x88) + *(float *)(unaff_EBP + 0x14)) {
          __security_check_cookie(in_stack_000002cc ^ (uint)&param_2);
          return;
        }
      }
      param_49 = (undefined4)((ulonglong)lVar6 >> 0x20);
      param_48 = (undefined4)lVar6;
      param_85._0_4_ = (uint)*(undefined8 *)puVar2;
      param_85._4_4_ = (int)((ulonglong)*(undefined8 *)puVar2 >> 0x20);
      param_85 = CONCAT44((param_85._4_4_ - param_53) - (uint)((uint)param_85 < param_52),
                          (uint)param_85 - param_52);
      param_86._0_4_ = (uint)*(undefined8 *)(puVar2 + 2);
      param_86._4_4_ = (int)((ulonglong)*(undefined8 *)(puVar2 + 2) >> 0x20);
      param_86 = CONCAT44((param_86._4_4_ - param_55) - (uint)((uint)param_86 < param_54),
                          (uint)param_86 - param_54);
      param_87 = *(undefined8 *)(puVar2 + 4);
      param_59 = (float)param_85 * 1.5258789e-05;
      param_4 = (float)param_86 * 1.5258789e-05;
      param_60 = param_4;
      fVar23 = param_4 * param_4 + param_59 * param_59 + param_47;
      if (0.0 < fVar23) {
        dVar22 = (double)fVar23;
        libm_sse2_sqrt_precise();
        lVar6 = CONCAT44(param_49,param_48);
        lVar5 = CONCAT44(param_57,param_56);
        uVar28 = CONCAT44(param_12,param_18);
        param_59 = (1.0 / (float)dVar22) * param_59;
        param_60 = (1.0 / (float)dVar22) * param_4;
      }
      uVar24 = CONCAT44(param_4,param_24);
      param_61 = 0xbf35c28f;
      param_10 = 0;
      param_29 = (float *)(iVar18 + 0x80);
    }
    iVar9 = param_10;
    param_4 = (float)(uVar24 >> 0x20);
    param_24 = (uint)uVar24;
    param_49 = (undefined4)((ulonglong)lVar6 >> 0x20);
    param_48 = (undefined4)lVar6;
    param_57 = (int)((ulonglong)lVar5 >> 0x20);
    param_56 = (uint)lVar5;
    param_12 = (uint)(uVar28 >> 0x20);
    param_18 = (uint)uVar28;
    param_38 = (&param_59)[param_10] * 65536.0;
    uVar28 = FUN_0054a946();
    param_43 = (int)(uVar28 >> 0x20);
    param_41 = (uint)uVar28;
    puVar4 = &param_52 + iVar9 * 2;
    uVar15 = *puVar4;
    *puVar4 = *puVar4 + param_41;
    (&param_53)[iVar9 * 2] = (&param_53)[iVar9 * 2] + param_43 + (uint)CARRY4(uVar15,param_41);
    param_17 = CONCAT13(1,(undefined3)param_17);
    cVar7 = FUN_004d4f90(param_25,&param_52,(float *)(iVar18 + 0x80),'\0');
    uVar24 = CONCAT44(param_4,param_24);
    uVar28 = CONCAT44(param_12,param_18);
    param_3 = CONCAT13(cVar7,(undefined3)param_3);
    if ((cVar7 != '\0') && (iVar9 != 2)) break;
    uVar29 = __alldiv(param_52,param_53,0x10000,0);
    iVar18 = (int)(((int)uVar29 >> 0x1f & 7U) + (int)uVar29) >> 3;
    uVar29 = __alldiv(param_54,param_55,0x10000,0);
    uVar24 = CONCAT44(param_4,param_24);
    lVar5 = CONCAT44(param_57,param_56);
    uVar28 = CONCAT44(param_12,param_18);
    uVar15 = iVar18 - 1;
    param_20 = (float)(iVar18 + 1);
    iVar18 = (int)((int)uVar29 + ((int)uVar29 >> 0x1f & 7U)) >> 3;
    if ((int)param_20 < (int)uVar15) goto LAB_0052fb8e;
    param_22 = iVar18 - 1;
    uVar19 = iVar18 + 1;
    uVar11 = param_22;
    param_6 = uVar19;
    uVar27 = uVar28;
    uVar25 = uVar24;
    do {
      cVar7 = param_3._3_1_;
      param_7 = uVar15;
      if ((int)uVar19 < (int)uVar11) {
        uVar16 = uVar11;
        param_8 = uVar11;
        uVar28 = uVar27;
        uVar24 = uVar25;
        if (param_3._3_1_ != '\0') {
LAB_0052fb9c:
          iVar9 = param_10;
          cVar7 = param_3._3_1_;
          uVar28 = uVar27;
          uVar24 = uVar25;
          goto LAB_0052fba4;
        }
      }
      else {
        do {
          param_24 = (uint)uVar25;
          param_8 = uVar11;
          if ((((-1 < (int)uVar15) && (-1 < (int)uVar11)) && ((int)uVar15 < 0x200000)) &&
             ((int)uVar11 < 0x200000)) {
            iVar18 = ((int)uVar11 >> 0x1f & 0x1fU) + uVar11;
            uVar19 = iVar18 >> 5;
            iVar9 = ((int)uVar15 >> 0x1f & 0x1fU) + uVar15;
            uVar15 = iVar9 >> 5;
            if (((-1 < (int)uVar15) && (-1 < (int)uVar19)) &&
               (((int)uVar15 < 0x10000 && ((int)uVar19 < 0x10000)))) {
              iVar9 = (int)(uVar15 + (iVar9 >> 0x1f & 0x3fU)) >> 6;
              iVar18 = (int)((iVar18 >> 0x1f & 0x3fU) + uVar19) >> 6;
              if (((-1 < iVar9) && (-1 < iVar18)) &&
                 ((iVar9 < 0x400 &&
                  ((iVar18 < 0x400 &&
                   (iVar18 = *(int *)((int)param_25 + (iVar9 * 0x400 + iVar18) * 4 + 0xbc),
                   iVar18 != 0)))))) {
                uVar15 = uVar15 & 0x8000003f;
                if ((int)uVar15 < 0) {
                  uVar15 = (uVar15 - 1 | 0xffffffc0) + 1;
                }
                uVar19 = uVar19 & 0x8000003f;
                if ((int)uVar19 < 0) {
                  uVar19 = (uVar19 - 1 | 0xffffffc0) + 1;
                }
                iVar18 = *(int *)(iVar18 + 0x10018 + (uVar15 * 0x40 + uVar19) * 4);
                if (iVar18 != 0) {
                  uVar11 = uVar11 & 0x8000001f;
                  if ((int)uVar11 < 0) {
                    uVar11 = (uVar11 - 1 | 0xffffffe0) + 1;
                  }
                  uVar15 = param_7 & 0x8000001f;
                  if ((int)uVar15 < 0) {
                    uVar15 = (uVar15 - 1 | 0xffffffe0) + 1;
                  }
                  piVar17 = (int *)(*(int *)(iVar18 + 0xac) + (uVar11 * 0x20 + uVar15) * 8);
                  if (piVar17 != (int *)0x0) {
                    param_26 = (int *)*piVar17;
                    piVar17 = (int *)*param_26;
                    if (piVar17 != param_26) {
                      do {
                        param_12 = (uint)(uVar27 >> 0x20);
                        param_18 = (uint)uVar27;
                        param_9 = (int *)piVar17[2];
                        iVar18 = *param_9;
                        uVar25 = CONCAT44(iVar18,param_24);
                        if (((iVar18 != 7) && (uVar25 = CONCAT44(iVar18,param_24), iVar18 != 6)) &&
                           (uVar25 = CONCAT44(iVar18,param_24), iVar18 != 9)) {
                          puVar3 = *(undefined4 **)(param_13 + 0x1468);
                          puVar20 = puVar3;
                          if (*(char *)((int)puVar3[1] + 0xd) == '\0') {
                            puVar12 = (undefined4 *)puVar3[1];
                            do {
                              if ((uint)puVar12[4] < (uint)piVar17[2]) {
                                puVar13 = (undefined4 *)puVar12[2];
                              }
                              else {
                                puVar13 = (undefined4 *)*puVar12;
                                puVar20 = puVar12;
                              }
                              puVar12 = puVar13;
                            } while (*(char *)((int)puVar13 + 0xd) == '\0');
                          }
                          if ((puVar20 == puVar3) || ((uint)piVar17[2] < (uint)puVar20[4])) {
                            param_28 = puVar3;
                            ppuVar14 = &param_28;
                          }
                          else {
                            param_44 = puVar20;
                            ppuVar14 = &param_44;
                          }
                          uVar25 = CONCAT44(iVar18,param_24);
                          if ((*ppuVar14 == puVar3) &&
                             ((((iVar18 != 1 && (iVar18 != 8)) &&
                               ((iVar18 != 2 && ((iVar18 != 3 && (iVar18 != 5)))))) ||
                              (uVar25 = CONCAT44(iVar18,param_24), (char)param_9[0xc] != '\0')))) {
                            param_66 = *(undefined8 *)(param_9 + 9);
                            param_67 = (float)param_9[0xb];
                            uVar15 = param_9[8] & 0x80000001;
                            bVar21 = uVar15 == 0;
                            if ((int)uVar15 < 0) {
                              bVar21 = (uVar15 - 1 | 0xfffffffe) == 0xffffffff;
                            }
                            if (!bVar21) {
                              param_66._4_4_ = (float)((ulonglong)param_66 >> 0x20);
                              param_66 = CONCAT44((float)param_66,param_66._4_4_);
                            }
                            param_50 = (&param_52)[param_10 * 2] - param_9[param_10 * 2 + 2];
                            param_51 = ((&param_53)[param_10 * 2] - param_9[param_10 * 2 + 3]) -
                                       (uint)((&param_52)[param_10 * 2] <
                                             (uint)param_9[param_10 * 2 + 2]);
                            param_4 = (float)CONCAT44(param_51,param_50);
                            param_31 = param_4 * (&param_59)[param_10];
                            uVar28 = FUN_0054a946();
                            param_4 = (float)uVar28;
                            param_45 = 0;
                            uVar24 = FUN_0054a946();
                            uVar27 = CONCAT44(param_12,param_18);
                            uVar25 = CONCAT44(param_4,param_24);
                            if (CONCAT44((int)(uVar28 >> 0x20),param_4) < (longlong)uVar24) {
                              param_30 = (float)param_66 * 0.5 * 65536.0;
                              uVar28 = FUN_0054a946();
                              param_19 = (int)(uVar28 >> 0x20);
                              param_24 = (uint)uVar28;
                              param_4 = (float)param_9[2];
                              iVar18 = param_9[3];
                              param_40 = *param_29 * 0.5 * 65536.0;
                              param_11 = iVar18;
                              uVar27 = FUN_0054a946();
                              param_12 = (uint)(uVar27 >> 0x20);
                              param_18 = (uint)uVar27;
                              param_23 = (int)param_4 - param_24;
                              lVar5 = uVar27 + CONCAT44(param_53,param_52);
                              fVar23 = (float)lVar5;
                              uVar25 = CONCAT44(fVar23,param_24);
                              if (CONCAT44((iVar18 - param_19) - (uint)((uint)param_4 < param_24),
                                           param_23) <= lVar5) {
                                param_11 = iVar18 + param_19 + (uint)CARRY4((uint)param_4,param_24);
                                iVar18 = (param_53 - param_12) - (uint)(param_52 < param_18);
                                uVar25 = CONCAT44(fVar23,param_24);
                                if ((iVar18 <= param_11) &&
                                   ((iVar18 < param_11 ||
                                    (uVar25 = CONCAT44(fVar23,param_24),
                                    param_52 - param_18 < (int)param_4 + param_24)))) {
                                  param_34 = param_66._4_4_ * 0.5 * 65536.0;
                                  param_4 = fVar23;
                                  uVar28 = FUN_0054a946();
                                  param_19 = (int)(uVar28 >> 0x20);
                                  param_12 = (uint)uVar28;
                                  param_18 = param_9[4];
                                  iVar18 = param_9[5];
                                  param_42 = *(float *)(param_13 + 0x84) * 0.5 * 65536.0;
                                  param_11 = iVar18;
                                  uVar25 = FUN_0054a946();
                                  param_4 = (float)(uVar25 >> 0x20);
                                  param_24 = (uint)uVar25;
                                  param_23 = param_18 - param_12;
                                  lVar5 = uVar25 + CONCAT44(param_55,param_54);
                                  uVar15 = (uint)lVar5;
                                  uVar27 = CONCAT44(param_12,uVar15);
                                  if (CONCAT44((iVar18 - param_19) - (uint)(param_18 < param_12),
                                               param_23) <= lVar5) {
                                    param_11 = iVar18 + param_19 + (uint)CARRY4(param_18,param_12);
                                    iVar18 = (param_55 - (int)param_4) - (uint)(param_54 < param_24)
                                    ;
                                    uVar27 = CONCAT44(param_12,uVar15);
                                    if ((iVar18 <= param_11) &&
                                       ((iVar18 < param_11 ||
                                        (uVar27 = CONCAT44(param_12,uVar15),
                                        param_54 - param_24 < param_18 + param_12)))) {
                                      param_36 = *(float *)(param_13 + 0x88) * 0.5 * 65536.0;
                                      param_18 = uVar15;
                                      uVar28 = FUN_0054a946();
                                      param_4 = (float)(uVar28 >> 0x20);
                                      param_12 = (uint)uVar28;
                                      uVar25 = CONCAT44(param_4,param_24);
                                      param_18 = param_9[6];
                                      param_23 = param_9[7];
                                      uVar27 = CONCAT44(param_12,param_18);
                                      if (*(longlong *)(param_9 + 6) <=
                                          (longlong)(uVar28 + CONCAT44(param_57,param_56))) {
                                        param_46 = param_67 * 65536.0;
                                        uVar26 = FUN_0054a946();
                                        uVar24 = CONCAT44(param_4,param_24);
                                        uVar25 = CONCAT44(param_4,param_24);
                                        uVar28 = CONCAT44(param_12,param_18);
                                        uVar27 = CONCAT44(param_12,param_18);
                                        if (CONCAT44((param_57 - (int)param_4) -
                                                     (uint)(param_56 < param_12),param_56 - param_12
                                                    ) <
                                            (longlong)(uVar26 + CONCAT44(param_23,param_18))) {
                                          cVar7 = '\x01';
                                          iVar9 = param_10;
                                          goto LAB_0052fba4;
                                        }
                                      }
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                        param_24 = (uint)uVar25;
                        piVar17 = (int *)*piVar17;
                      } while (piVar17 != param_26);
                    }
                  }
                }
              }
            }
            uVar15 = param_7;
            uVar19 = param_6;
            cVar7 = param_3._3_1_;
          }
          if (cVar7 != '\0') goto LAB_0052fb9c;
          uVar11 = param_8 + 1;
          uVar16 = param_22;
          param_8 = uVar11;
          uVar28 = uVar27;
          uVar24 = uVar25;
        } while ((int)uVar11 <= (int)uVar19);
      }
      lVar5 = CONCAT44(param_57,param_56);
      uVar15 = uVar15 + 1;
      uVar11 = uVar16;
      iVar9 = param_10;
      param_7 = uVar15;
      uVar27 = uVar28;
      uVar25 = uVar24;
    } while ((int)uVar15 <= (int)param_20);
  }
  cVar8 = param_17._3_1_;
  goto LAB_0052fbaa;
LAB_0052fb8e:
  cVar7 = param_3._3_1_;
  param_7 = uVar15;
  if (param_3._3_1_ == '\0') goto LAB_0053031d;
LAB_0052fba4:
  cVar8 = '\0';
  iVar18 = param_13;
LAB_0052fbaa:
  lVar5 = CONCAT44(param_57,param_56);
  if (cVar7 == '\0') goto LAB_0053031d;
  if (((iVar9 == 2) || (cVar8 == '\0')) || ((*(ushort *)(iVar18 + 0x7e) & 0x100) != 0)) {
LAB_00530301:
    puVar4 = &param_52 + iVar9 * 2;
    uVar15 = *puVar4;
    *puVar4 = *puVar4 - param_41;
    (&param_53)[iVar9 * 2] = ((&param_53)[iVar9 * 2] - param_43) - (uint)(uVar15 < param_41);
    lVar5 = CONCAT44(param_57,param_56);
    goto LAB_0053031d;
  }
  param_20 = *(float *)(iVar18 + 0x80);
  param_22 = *(uint *)(iVar18 + 0x84);
  param_26 = *(int **)(iVar18 + 0x88);
  param_21 = param_21 & 0xffffff00;
  in_stack_000001f4 = param_20 * 0.5;
  unaff_ESI = 0;
  goto LAB_0052fc40;
}


