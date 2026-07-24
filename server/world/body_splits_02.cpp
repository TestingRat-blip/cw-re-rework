// body_splits_02 (world) -- server. 1 functions. Bodies = Ghidra pseudo-C.
// Attribution: see ../attribution.tsv. Toolchain of the original: MSVC 11.0 (VS2012).
#include "body_splits_02.h"

/* zone_builder__split_51ed6a @ 0051ed6a  kind=gamemisc  attributed-by=role:body-split  size=12564 */

void FUN_0051ed6a(undefined4 param_1,undefined4 param_2,int param_3)

{
  undefined1 uVar1;
  undefined2 uVar2;
  uint uVar3;
  longlong lVar4;
  byte bVar5;
  char cVar6;
  uint uVar7;
  int iVar8;
  undefined *puVar9;
  Spawn *pSVar10;
  int iVar11;
  void *pvVar12;
  int iVar13;
  uint uVar14;
  undefined4 uVar15;
  undefined3 extraout_var;
  undefined3 extraout_var_00;
  undefined4 *puVar16;
  void *pvVar17;
  int *piVar18;
  int *piVar19;
  undefined1 *puVar20;
  byte *pbVar21;
  uint *puVar22;
  uint *puVar23;
  basic_ostream<char,std::char_traits<char>_> *pbVar24;
  basic_ostream<char,struct_std::char_traits<char>_> *pbVar25;
  CRefTime *pCVar26;
  long lVar27;
  undefined3 extraout_var_01;
  uint unaff_EBP;
  uint uVar28;
  uint uVar29;
  int iVar30;
  bool bVar31;
  float10 fVar32;
  float fVar33;
  float fVar34;
  double dVar35;
  double dVar36;
  ulonglong uVar37;
  ulonglong uVar38;
  undefined8 uVar39;
  char *unaff_retaddr;
  undefined4 uVar40;
  int iVar41;
  ulonglong *puVar42;
  undefined4 uVar43;
  undefined1 *puVar44;
  
LAB_0051ed70:
  iVar11 = *(int *)(unaff_EBP - 0x1310);
  do {
    uVar7 = rand();
    uVar7 = uVar7 & 0x80000003;
    bVar31 = uVar7 == 0;
    if ((int)uVar7 < 0) {
      bVar31 = (uVar7 - 1 | 0xfffffffc) == 0xffffffff;
    }
    if (bVar31) {
LAB_0051f975:
      iVar11 = *(int *)(unaff_EBP - 0x1308);
LAB_0051f97b:
      pvVar17 = *(void **)(unaff_EBP - 0x12e0);
    }
    else {
      iVar8 = rand();
      uVar28 = *(int *)(unaff_EBP - 0x1304) * 0x55 + 0x18 +
               iVar8 % 10 + *(int *)(unaff_EBP - 0x1358);
      *(uint *)(unaff_EBP - 0x12cc) = uVar28;
      iVar8 = rand();
      puVar22 = *(uint **)(unaff_EBP - 0x1300);
      uVar7 = puVar22[6];
      uVar29 = iVar11 * 0x55 + 0x18 + iVar8 % 10 + *(int *)(unaff_EBP - 0x132c);
      *(uint *)(unaff_EBP - 0x12d4) = uVar29;
      if ((uVar7 != 0) && (uVar7 != 10)) {
        *(uint *)(unaff_EBP - 0x146c) = uVar29 * 0x10000;
        *(uint *)(unaff_EBP - 0x1468) = ((int)uVar29 >> 0x1f) << 0x10 | uVar29 >> 0x10;
        *(uint *)(unaff_EBP - 0x147c) = uVar28 * 0x10000;
        *(uint *)(unaff_EBP - 0x1478) = ((int)uVar28 >> 0x1f) << 0x10 | uVar28 >> 0x10;
        fVar32 = FUN_0052c820(puVar22,(uint *)(unaff_EBP - 0x147c),(uint *)(unaff_EBP - 0x146c));
        *(float *)(unaff_EBP - 0x1330) = (float)fVar32;
        fVar33 = 1.0 - *(float *)(unaff_EBP - 0x1330);
        if ((0.0 < fVar33) && (0.3 < fVar33 * fVar33)) goto LAB_0051f975;
      }
      iVar11 = *(int *)(unaff_EBP - 0x1308);
      pvVar17 = *(void **)(unaff_EBP - 0x12e0);
      iVar8 = FUN_00406100(pvVar17,uVar28,*(uint *)(unaff_EBP - 0x12d4),iVar11);
      if (iVar8 == 0) {
        fVar32 = (float10)FUN_004f8b40(pvVar17,*(int *)(unaff_EBP - 0x12cc),
                                       *(int *)(unaff_EBP - 0x12d4));
        *(float *)(unaff_EBP - 0x1330) = (float)fVar32;
        fVar33 = *(float *)(unaff_EBP - 0x1330);
      }
      else {
        fVar33 = *(float *)(iVar8 + 8);
      }
      *(float *)(unaff_EBP - 0x12d0) = fVar33;
      if (0.2 <= fVar33) {
LAB_0051eed2:
        iVar8 = FUN_00406100(pvVar17,*(uint *)(unaff_EBP - 0x12cc),*(uint *)(unaff_EBP - 0x12d4),
                             iVar11);
        if (iVar8 == 0) {
          fVar32 = (float10)FUN_004f8570(pvVar17,*(float *)(unaff_EBP - 0x12cc),
                                         *(uint *)(unaff_EBP - 0x12d4));
          *(float *)(unaff_EBP - 0x1330) = (float)fVar32;
          fVar33 = *(float *)(unaff_EBP - 0x1330);
        }
        else {
          fVar33 = *(float *)(iVar8 + 4);
        }
        *(float *)(unaff_EBP - 0x12dc) = fVar33;
        if (fVar33 < 0.2) {
          uVar7 = rand();
          uVar7 = uVar7 & 0x80000003;
          bVar31 = uVar7 == 0;
          if ((int)uVar7 < 0) {
            bVar31 = (uVar7 - 1 | 0xfffffffc) == 0xffffffff;
          }
          if (bVar31) goto LAB_0051f981;
        }
        piVar19 = (int *)**(int **)(unaff_EBP - 0x1378);
        if (piVar19 != *(int **)(unaff_EBP - 0x1378)) {
          uVar7 = *(uint *)(unaff_EBP - 0x12d4);
          *(uint *)(unaff_EBP - 0x1330) = uVar7 << 0x10;
          uVar28 = *(uint *)(unaff_EBP - 0x12cc);
          *(uint *)(unaff_EBP - 0x133c) = ((int)uVar7 >> 0x1f) << 0x10 | uVar7 >> 0x10;
          *(uint *)(unaff_EBP - 0x1348) = ((int)uVar28 >> 0x1f) << 0x10 | uVar28 >> 0x10;
          *(uint *)(unaff_EBP - 0x1334) = uVar28 << 0x10;
          do {
            uVar7 = *(uint *)(unaff_EBP - 0x1330);
            uVar28 = piVar19[4];
            iVar8 = *(int *)(unaff_EBP - 0x133c);
            iVar30 = piVar19[5];
            *(uint *)(unaff_EBP - 0x13b4) = uVar7 - piVar19[4];
            uVar29 = *(uint *)(unaff_EBP - 0x1334);
            *(uint *)(unaff_EBP - 0x13b0) = (iVar8 - iVar30) - (uint)(uVar7 < uVar28);
            iVar8 = *(int *)(unaff_EBP - 0x1348);
            *(float *)(unaff_EBP - 0x1350) = (float)*(longlong *)(unaff_EBP - 0x13b4);
            uVar7 = piVar19[2];
            uVar28 = piVar19[2];
            *(undefined4 *)(unaff_EBP - 0x1350) = *(undefined4 *)(unaff_EBP - 0x1350);
            fVar33 = *(float *)(unaff_EBP - 0x1350);
            iVar30 = piVar19[3];
            *(uint *)(unaff_EBP - 0x13bc) = uVar29 - uVar28;
            *(uint *)(unaff_EBP - 0x13b8) = (iVar8 - iVar30) - (uint)(uVar29 < uVar7);
            fVar33 = fVar33 * 1.5258789e-05;
            *(float *)(unaff_EBP - 0x1350) = (float)*(longlong *)(unaff_EBP - 0x13bc);
            *(undefined4 *)(unaff_EBP - 0x1350) = *(undefined4 *)(unaff_EBP - 0x1350);
            fVar34 = *(float *)(unaff_EBP - 0x1350) * 1.5258789e-05;
            *(float *)(unaff_EBP - 0x15fc) = fVar34;
            if (fVar33 * fVar33 + fVar34 * fVar34 < 400.0) goto LAB_0051f981;
            piVar19 = (int *)*piVar19;
          } while (piVar19 != (int *)*(int *)(unaff_EBP - 0x1378));
        }
        iVar8 = FUN_00406100(pvVar17,*(uint *)(unaff_EBP - 0x12cc),*(uint *)(unaff_EBP - 0x12d4),
                             iVar11);
        iVar8 = *(int *)(iVar8 + 0x14);
        while( true ) {
          uVar7 = *(uint *)(unaff_EBP - 0x12d4);
          uVar28 = *(uint *)(unaff_EBP - 0x12cc);
          *(int *)(unaff_EBP - 0x12d8) = iVar8;
          puVar9 = FUN_00405fd0(pvVar17,uVar28,uVar7,iVar8,iVar11);
          if (((puVar9[3] & 0x1f) == 0) || ((puVar9[3] & 0x1f) == 2)) break;
          iVar8 = *(int *)(unaff_EBP - 0x12d8) + 1;
        }
        puVar9 = FUN_00405fd0(pvVar17,*(uint *)(unaff_EBP - 0x12cc),*(uint *)(unaff_EBP - 0x12d4),
                              *(int *)(unaff_EBP - 0x12d8) + -1,iVar11);
        uVar7 = *(uint *)(unaff_EBP - 0x12d4);
        uVar28 = *(uint *)(unaff_EBP - 0x12cc);
        *(uint *)(unaff_EBP - 0x12f0) = (byte)puVar9[3] & 0xffffff1f;
        fVar32 = FUN_004d19f0(pvVar17,uVar28,uVar7);
        *(float *)(unaff_EBP - 0x1330) = (float)fVar32;
        if (*(float *)(unaff_EBP - 0x1330) <= 0.0) {
          fVar32 = (float10)FUN_0052d990(pvVar17,*(uint *)(unaff_EBP - 0x12cc),
                                         *(uint *)(unaff_EBP - 0x12d4));
          *(float *)(unaff_EBP - 0x1330) = (float)fVar32;
          if (1.0 < *(float *)(unaff_EBP - 0x1330) || *(float *)(unaff_EBP - 0x1330) == 1.0) {
            pSVar10 = operator_new(0x10f0);
            if (pSVar10 == (Spawn *)0x0) {
              pSVar10 = (Spawn *)0x0;
            }
            else {
              pSVar10 = cube::Spawn::Spawn(pSVar10);
            }
            *(Spawn **)(unaff_EBP - 0x12e4) = pSVar10;
            *(Spawn **)(unaff_EBP - 0x131c) = pSVar10;
            uVar7 = *(uint *)(unaff_EBP - 0x12d8);
            uVar28 = ((int)uVar7 >> 0x1f) << 0x10 | uVar7 >> 0x10;
            *(uint *)(unaff_EBP - 0x1350) = uVar7 << 0x10;
            *(uint *)(unaff_EBP - 0x1558) = uVar7 << 0x10;
            uVar7 = *(uint *)(unaff_EBP - 0x12d4);
            *(uint *)(unaff_EBP - 0x1334) = uVar28;
            *(uint *)(unaff_EBP - 0x1554) = uVar28;
            uVar37 = FUN_0054a946();
            *(int *)(unaff_EBP - 0x1330) = (int)uVar37;
            uVar28 = *(uint *)(unaff_EBP - 0x12cc);
            lVar4 = uVar37 + CONCAT44(((int)uVar7 >> 0x1f) << 0x10 | uVar7 >> 0x10,uVar7 << 0x10);
            *(int *)(unaff_EBP - 0x224) = (int)lVar4;
            uVar15 = *(undefined4 *)(unaff_EBP - 0x1350);
            *(int *)(unaff_EBP - 0x133c) = (int)(uVar37 >> 0x20);
            uVar7 = *(uint *)(unaff_EBP - 0x1330);
            *(undefined4 *)(unaff_EBP - 0x21c) = uVar15;
            iVar30 = uVar7 + uVar28 * 0x10000;
            iVar11 = *(int *)(unaff_EBP - 0x133c);
            *(undefined4 *)(unaff_EBP - 0x218) = *(undefined4 *)(unaff_EBP - 0x1334);
            iVar8 = *(int *)(unaff_EBP - 0x12e4);
            iVar11 = iVar11 + (((int)uVar28 >> 0x1f) << 0x10 | uVar28 >> 0x10) +
                     (uint)CARRY4(uVar7,uVar28 * 0x10000);
            *(int *)(unaff_EBP - 0x228) = iVar11;
            *(int *)(unaff_EBP - 0x220) = (int)((ulonglong)lVar4 >> 0x20);
            *(int *)(unaff_EBP - 0x22c) = iVar30;
            *(int *)(iVar8 + 0x10) = iVar30;
            *(int *)(iVar8 + 0x14) = iVar11;
            *(undefined4 *)(iVar8 + 0x18) = *(undefined4 *)(unaff_EBP - 0x224);
            *(undefined4 *)(iVar8 + 0x1c) = *(undefined4 *)(unaff_EBP - 0x220);
            *(undefined4 *)(iVar8 + 0x20) = *(undefined4 *)(unaff_EBP - 0x21c);
            uVar15 = *(undefined4 *)(unaff_EBP - 0x218);
            *(int **)(unaff_EBP - 0x133c) = (int *)(iVar8 + 0x10);
            *(undefined4 *)(iVar8 + 0x24) = uVar15;
            iVar30 = rand();
            iVar11 = *(int *)(unaff_EBP - 0x12e4);
            pvVar17 = *(void **)(unaff_EBP - 0x12e0);
            iVar8 = *(int *)(unaff_EBP - 0x12d8);
            *(float *)(iVar11 + 0x54) = ((float)iVar30 * 360.0) / 32767.0;
            fVar33 = *(float *)(unaff_EBP - 0x12d4);
            fVar34 = *(float *)(unaff_EBP - 0x12cc);
            *(undefined4 *)(iVar11 + 0x34) = 1;
            pvVar12 = FUN_005290d0(pvVar17,fVar34,fVar33,iVar8,0);
            *(void **)(iVar11 + 0x2c) = pvVar12;
            iVar8 = *(int *)(unaff_EBP - 0x12f0);
            if (iVar8 == 0xc) {
              uVar7 = rand();
              uVar7 = uVar7 & 0x80000001;
              if ((int)uVar7 < 0) {
                uVar7 = (uVar7 - 1 | 0xfffffffe) + 1;
              }
              *(uint *)(iVar11 + 0x2c) = (-(uint)(uVar7 != 0) & 0xfffffffc) + 0x82;
LAB_0051f2a0:
              *(undefined4 *)(iVar11 + 0x28) = 6;
              iVar11 = *(int *)(unaff_EBP - 0x1308);
              FUN_004f2be0((void *)(iVar11 + 0x18),(undefined4 *)(unaff_EBP - 0x131c));
            }
            else {
              if (*(int *)(unaff_EBP - 0x12d8) < 0) {
LAB_0051f4d1:
                iVar11 = *(int *)(unaff_EBP - 0x1308);
              }
              else {
                if (((iVar8 != 4) && (iVar8 != 5)) && (iVar8 != 9)) {
                  if (iVar8 == 10) {
                    uVar7 = rand();
                    uVar7 = uVar7 & 0x80000003;
                    bVar31 = uVar7 == 0;
                    if ((int)uVar7 < 0) {
                      bVar31 = (uVar7 - 1 | 0xfffffffc) == 0xffffffff;
                    }
                    if (bVar31) {
                      uVar7 = rand();
                      uVar7 = uVar7 & 0x80000003;
                      if ((int)uVar7 < 0) {
                        uVar7 = (uVar7 - 1 | 0xfffffffc) + 1;
                      }
                      if (uVar7 == 1) {
                        *(undefined4 *)(iVar11 + 0x2c) = 0x7b;
                        *(undefined4 *)(iVar11 + 0xf58) = 0x41c80000;
                      }
                      else if (uVar7 == 2) {
                        *(undefined4 *)(iVar11 + 0x2c) = 0x7d;
                        *(undefined4 *)(iVar11 + 0xf58) = 0x41c80000;
                      }
                      else if (uVar7 == 3) {
                        *(undefined4 *)(iVar11 + 0x2c) = 0x7a;
                        *(undefined4 *)(iVar11 + 0xf58) = 0x41c80000;
                      }
                      else {
                        *(undefined4 *)(iVar11 + 0x2c) = 0x79;
                        *(undefined4 *)(iVar11 + 0xf58) = 0x41c80000;
                      }
                      goto LAB_0051f2a0;
                    }
                  }
                  goto LAB_0051f4d1;
                }
                iVar8 = rand();
                if (((iVar8 % 3 != 0) && (0.8 < *(float *)(unaff_EBP - 0x12d0))) &&
                   (*(float *)(unaff_EBP - 0x12dc) <= 0.1 && *(float *)(unaff_EBP - 0x12dc) != 0.1))
                {
                  uVar7 = rand();
                  uVar7 = uVar7 & 0x80000001;
                  if ((int)uVar7 < 0) {
                    uVar7 = (uVar7 - 1 | 0xfffffffe) + 1;
                  }
                  if (uVar7 == 0) {
                    *(undefined4 *)(iVar11 + 0x2c) = 0x7c;
                  }
                  else if (uVar7 == 1) {
                    *(undefined4 *)(iVar11 + 0x2c) = 0x80;
                  }
                  goto LAB_0051f2a0;
                }
                if (*(int *)(unaff_EBP - 0x12f0) != 4) goto LAB_0051f4d1;
                iVar8 = rand();
                iVar11 = *(int *)(unaff_EBP - 0x1308);
                if (iVar8 % 3 != 0) {
                  iVar8 = FUN_00406100(pvVar17,*(uint *)(unaff_EBP - 0x12cc),
                                       *(uint *)(unaff_EBP - 0x12d4),iVar11);
                  if (iVar8 == 0) {
                    fVar32 = (float10)FUN_004f8570(pvVar17,*(float *)(unaff_EBP - 0x12cc),
                                                   *(uint *)(unaff_EBP - 0x12d4));
                    *(float *)(unaff_EBP - 0x1330) = (float)fVar32;
                    fVar33 = *(float *)(unaff_EBP - 0x1330);
                  }
                  else {
                    fVar33 = *(float *)(iVar8 + 4);
                  }
                  if (0.1 < fVar33) {
                    uVar7 = rand();
                    uVar7 = uVar7 & 0x80000003;
                    if ((int)uVar7 < 0) {
                      uVar7 = (uVar7 - 1 | 0xfffffffc) + 1;
                    }
                    if (uVar7 == 1) {
                      iVar8 = *(int *)(unaff_EBP - 0x12e4);
                      *(undefined4 *)(iVar8 + 0x2c) = 0x7b;
                    }
                    else if (uVar7 == 2) {
                      iVar8 = *(int *)(unaff_EBP - 0x12e4);
                      *(undefined4 *)(iVar8 + 0x2c) = 0x7f;
                    }
                    else {
                      iVar8 = *(int *)(unaff_EBP - 0x12e4);
                      if (uVar7 == 3) {
                        *(undefined4 *)(iVar8 + 0x2c) = 0x7d;
                      }
                      else {
                        *(undefined4 *)(iVar8 + 0x2c) = 0x78;
                      }
                    }
                    *(undefined4 *)(iVar8 + 0xf58) = 0x41c80000;
                    *(undefined4 *)(iVar8 + 0x28) = 6;
                    FUN_004f2be0((void *)(iVar11 + 0x18),(undefined4 *)(unaff_EBP - 0x131c));
                    goto LAB_0051f981;
                  }
                }
              }
              iVar8 = *(int *)(unaff_EBP - 0x12e4);
              if ((*(int *)(iVar8 + 0x28) == 1) && ((*(ushort *)(iVar8 + 0x7a) & 0x1000) == 0)) {
                iVar30 = rand();
                iVar8 = *(int *)(unaff_EBP - 0x12e4);
                if (iVar30 % 100 == 0) {
                  *(ushort *)(iVar8 + 0x7a) = *(ushort *)(iVar8 + 0x7a) | 0x200;
                }
              }
              uVar39 = __alldiv(*(uint *)(iVar8 + 0x18),*(uint *)(iVar8 + 0x1c),0x10000,0);
              iVar8 = (int)uVar39 + ((int)uVar39 >> 0x1f & 0xffU);
              uVar7 = (int)((iVar8 >> 8) + (iVar8 >> 0x1f & 7U)) >> 3;
              uVar39 = __alldiv(**(uint **)(unaff_EBP - 0x133c),(*(uint **)(unaff_EBP - 0x133c))[1],
                                0x10000,0);
              iVar8 = (int)uVar39 + ((int)uVar39 >> 0x1f & 0xffU);
              iVar30 = FUN_004286f0(pvVar17,(int)((iVar8 >> 8) + (iVar8 >> 0x1f & 7U)) >> 3,uVar7);
              iVar8 = *(int *)(unaff_EBP - 0x12e4);
              *(int *)(unaff_EBP - 0x12d0) = iVar30;
              if (*(int *)(iVar8 + 0x28) != 6) {
                FUN_0040f0a0(*(undefined4 *)(iVar8 + 0x2c),(undefined4 *)(unaff_EBP - 0x145c),
                             (undefined4 *)(unaff_EBP - 0x1458));
                iVar30 = rand();
                puVar22 = *(uint **)(unaff_EBP - 0x12d0);
                *(int *)(iVar8 + 0x34) =
                     iVar30 % ((*(int *)(unaff_EBP - 0x1458) - *(int *)(unaff_EBP - 0x145c)) + 1) +
                     *(int *)(unaff_EBP - 0x145c);
                if (((puVar22 != (uint *)0x0) && (*(int *)(unaff_EBP - 0x145c) <= (int)puVar22[9]))
                   && ((int)puVar22[9] <= *(int *)(unaff_EBP - 0x1458))) {
                  fVar32 = FUN_0052c820(puVar22,(uint *)(iVar8 + 0x10),(uint *)(iVar8 + 0x18));
                  *(float *)(unaff_EBP - 0x1330) = (float)fVar32;
                  fVar33 = 1.0 - *(float *)(unaff_EBP - 0x1330);
                  if ((0.0 < fVar33) && (0.0 < fVar33 * fVar33)) {
                    *(undefined1 *)(iVar8 + 0x58) =
                         *(undefined1 *)(*(int *)(unaff_EBP - 0x12d0) + 0x28);
                  }
                }
              }
              if (*(int *)(iVar8 + 0x28) == 1) {
                *(undefined4 *)(iVar8 + 0x40) = 21600000;
                *(undefined4 *)(iVar8 + 0x44) = 86400000;
              }
              *(void **)(unaff_EBP - 0x133c) = (void *)(iVar11 + 0x18);
              FUN_004f2be0((void *)(iVar11 + 0x18),(undefined4 *)(unaff_EBP - 0x131c));
              FUN_0040efc0(*(undefined4 *)(*(int *)(unaff_EBP - 0x131c) + 0x2c),
                           (undefined4 *)(unaff_EBP - 0x14a4),(undefined4 *)(unaff_EBP - 0x14bc));
              iVar13 = rand();
              iVar8 = *(int *)(unaff_EBP - 0x14a4);
              iVar30 = *(int *)(unaff_EBP - 0x14bc);
              iVar41 = 0;
              *(undefined4 *)(unaff_EBP - 0x12fc) = 0;
              iVar8 = iVar8 + -1 + iVar13 % ((iVar30 - iVar8) + 1);
              *(int *)(unaff_EBP - 0x12d0) = iVar8;
              if (iVar8 < 1) goto LAB_0051f97b;
              while( true ) {
                pSVar10 = operator_new(0x10f0);
                if (pSVar10 == (Spawn *)0x0) {
                  pSVar10 = (Spawn *)0x0;
                }
                else {
                  pSVar10 = cube::Spawn::Spawn(pSVar10);
                }
                (pSVar10->Spawn_data).offset_0x24 = 1;
                fVar33 = ((float)iVar41 * 6.2831855) / (float)iVar8;
                *(Spawn **)(unaff_EBP - 0x1384) = pSVar10;
                *(undefined8 *)(unaff_EBP - 0x15bc) = 0;
                dVar35 = (double)fVar33;
                *(Spawn **)(unaff_EBP - 0x12e8) = pSVar10;
                *(float *)(unaff_EBP - 0x1330) = fVar33;
                libm_sse2_sin_precise();
                *(float *)(unaff_EBP - 0x1328) = (float)dVar35 * 8.0 * 65536.0;
                uVar37 = FUN_0054a946();
                dVar35 = (double)*(float *)(unaff_EBP - 0x1330);
                *(ulonglong *)(unaff_EBP - 0x148c) = uVar37;
                libm_sse2_cos_precise();
                *(float *)(unaff_EBP - 0x1338) = (float)dVar35 * 8.0 * 65536.0;
                uVar38 = FUN_0054a946();
                uVar15 = (undefined4)(uVar38 >> 0x20);
                uVar14 = (uint)uVar38;
                *(int *)(unaff_EBP - 0x454) = (int)uVar37;
                *(undefined4 *)(unaff_EBP - 0x14fc) = uVar15;
                *(undefined4 *)(unaff_EBP - 0x458) = uVar15;
                *(undefined4 *)(unaff_EBP - 0x450) = *(undefined4 *)(unaff_EBP - 0x1488);
                iVar11 = *(int *)(unaff_EBP - 0x131c);
                *(uint *)(unaff_EBP - 0x1500) = uVar14;
                *(uint *)(unaff_EBP - 0x45c) = uVar14;
                *(undefined8 *)(unaff_EBP - 0x44c) = 0;
                uVar15 = *(undefined4 *)(iVar11 + 0x10);
                *(undefined4 *)(unaff_EBP - 0x19c) = uVar15;
                *(undefined4 *)(unaff_EBP - 0x1330) = uVar15;
                iVar11 = *(int *)(unaff_EBP - 0x131c);
                iVar8 = *(int *)(iVar11 + 0x14);
                *(int *)(unaff_EBP - 0x198) = iVar8;
                uVar7 = *(uint *)(iVar11 + 0x18);
                *(uint *)(unaff_EBP - 0x194) = uVar7;
                iVar30 = *(int *)(iVar11 + 0x1c);
                *(int *)(unaff_EBP - 400) = iVar30;
                *(undefined4 *)(unaff_EBP - 0x18c) = *(undefined4 *)(iVar11 + 0x20);
                *(undefined4 *)(unaff_EBP - 0x188) =
                     *(undefined4 *)(*(int *)(unaff_EBP - 0x131c) + 0x24);
                uVar28 = *(uint *)(unaff_EBP - 0x1330);
                iVar13 = uVar28 + uVar14;
                iVar11 = *(int *)(unaff_EBP - 0x14fc);
                uVar3 = *(uint *)(unaff_EBP - 0x148c);
                uVar29 = *(uint *)(unaff_EBP - 0x148c);
                *(int *)(unaff_EBP - 0x19c) = iVar13;
                iVar41 = *(int *)(unaff_EBP - 0x1488);
                *(uint *)(unaff_EBP - 0x198) = iVar8 + iVar11 + (uint)CARRY4(uVar28,uVar14);
                *(uint *)(unaff_EBP - 400) = iVar30 + iVar41 + (uint)CARRY4(uVar7,uVar3);
                iVar11 = *(int *)(unaff_EBP - 0x1384);
                *(uint *)(unaff_EBP - 0x194) = uVar7 + uVar29;
                *(int *)(iVar11 + 0x10) = iVar13;
                *(undefined4 *)(iVar11 + 0x14) = *(undefined4 *)(unaff_EBP - 0x198);
                *(undefined4 *)(iVar11 + 0x18) = *(undefined4 *)(unaff_EBP - 0x194);
                *(undefined4 *)(iVar11 + 0x1c) = *(undefined4 *)(unaff_EBP - 400);
                *(undefined4 *)(iVar11 + 0x20) = *(undefined4 *)(unaff_EBP - 0x18c);
                uVar7 = *(uint *)(unaff_EBP - 0x188);
                *(uint *)(iVar11 + 0x24) = uVar7;
                __alldiv(*(uint *)(iVar11 + 0x20),uVar7,0x10000,0);
                __alldiv(*(uint *)(iVar11 + 0x18),*(uint *)(iVar11 + 0x1c),0x10000,0);
                __alldiv(*(uint *)(*(int *)(unaff_EBP - 0x1384) + 0x10),
                         *(uint *)(*(int *)(unaff_EBP - 0x1384) + 0x14),0x10000,0);
                pvVar17 = *(void **)(unaff_EBP - 0x12e0);
                uVar7 = FUN_0052bfa0();
                iVar11 = *(int *)(unaff_EBP - 0x1384);
                *(uint *)(iVar11 + 0x2c) = uVar7;
                *(ushort *)(iVar11 + 0x7a) = *(ushort *)(iVar11 + 0x7a) & 0xfdff;
                if (*(int *)(iVar11 + 0x28) != 6) {
                  FUN_0040f0a0(*(undefined4 *)(iVar11 + 0x2c),(undefined4 *)(unaff_EBP - 0x1490),
                               (undefined4 *)(unaff_EBP - 0x14b4));
                  iVar30 = rand();
                  iVar8 = *(int *)(unaff_EBP - 0x131c);
                  *(int *)(iVar11 + 0x34) =
                       iVar30 % ((*(int *)(unaff_EBP - 0x14b4) - *(int *)(unaff_EBP - 0x1490)) + 1)
                       + *(int *)(unaff_EBP - 0x1490);
                  *(undefined1 *)(iVar11 + 0x58) = *(undefined1 *)(iVar8 + 0x58);
                }
                iVar8 = rand();
                pvVar12 = *(void **)(unaff_EBP - 0x133c);
                *(float *)(iVar11 + 0x54) = ((float)iVar8 * 360.0) / 32767.0;
                FUN_004f2be0(pvVar12,(undefined4 *)(unaff_EBP - 0x12e8));
                iVar8 = *(int *)(unaff_EBP - 0x12d0);
                iVar11 = *(int *)(unaff_EBP - 0x12fc) + 1;
                *(int *)(unaff_EBP - 0x12fc) = iVar11;
                if (iVar8 <= iVar11) break;
                iVar41 = *(int *)(unaff_EBP - 0x12fc);
              }
              iVar11 = *(int *)(unaff_EBP - 0x1308);
            }
          }
        }
      }
      else {
        uVar7 = rand();
        uVar7 = uVar7 & 0x80000003;
        bVar31 = uVar7 == 0;
        if ((int)uVar7 < 0) {
          bVar31 = (uVar7 - 1 | 0xfffffffc) == 0xffffffff;
        }
        if (!bVar31) goto LAB_0051eed2;
      }
    }
LAB_0051f981:
    iVar8 = *(int *)(unaff_EBP - 0x1310) + 1;
    *(int *)(unaff_EBP - 0x1310) = iVar8;
    if (iVar8 < 3) goto LAB_0051ed70;
    iVar8 = *(int *)(unaff_EBP - 0x1304) + 1;
    *(int *)(unaff_EBP - 0x1304) = iVar8;
    if (2 < iVar8) {
      iVar8 = *(int *)(unaff_EBP - 0x140c);
      *(undefined1 *)(unaff_EBP - 4) = 3;
      if (iVar8 != 0) {
        std::_Container_base0::_Orphan_all((_Container_base0 *)(unaff_EBP - 0x140c));
        operator_delete(*(void **)(unaff_EBP - 0x140c));
        *(undefined4 *)(unaff_EBP - 0x140c) = 0;
        *(undefined4 *)(unaff_EBP - 0x1408) = 0;
        *(undefined4 *)(unaff_EBP - 0x1404) = 0;
      }
      uVar7 = *(uint *)(unaff_EBP - 0x1358);
      *(uint *)(unaff_EBP - 0x12c8) = uVar7;
      if (*(int *)(unaff_EBP - 0x1370) <= (int)uVar7) goto LAB_005203ce;
      uVar28 = *(uint *)(unaff_EBP - 0x132c);
      *(undefined4 *)(unaff_EBP - 0x141c) = 0x1d6;
      iVar8 = uVar28 + 0x100;
      *(undefined4 *)(unaff_EBP - 0x13f4) = 0x96;
      *(undefined4 *)(unaff_EBP - 0x1330) = 300;
      do {
        *(uint *)(unaff_EBP - 0x1300) = uVar28;
        if ((int)uVar28 < iVar8) {
          do {
            iVar8 = FUN_00406100(pvVar17,uVar7,uVar28,iVar11);
            *(int *)(unaff_EBP - 0x12ec) = iVar8;
            *(undefined4 *)(unaff_EBP - 0x12d8) = 0;
            iVar8 = FUN_00406250(iVar8);
            if (0 < iVar8) {
              do {
                iVar30 = FUN_00406250(*(int *)(unaff_EBP - 0x12ec));
                iVar8 = *(int *)(unaff_EBP - 0x12d8);
                if (iVar8 < iVar30 + -1) {
                  pvVar12 = *(void **)(unaff_EBP - 0x12ec);
                  *(int *)(unaff_EBP - 0x12dc) = iVar8 + 1;
                  puVar9 = FUN_004d23f0(pvVar12,iVar8 + 1);
                  uVar15 = FUN_004061f0((int)puVar9);
                  if ((char)uVar15 == '\0') {
                    iVar8 = *(int *)(unaff_EBP - 0x12d8);
                    goto LAB_0051fac0;
                  }
                }
                else {
LAB_0051fac0:
                  puVar9 = FUN_004d23f0(*(void **)(unaff_EBP - 0x12ec),iVar8);
                  bVar5 = FUN_00406280((int)puVar9);
                  pvVar17 = *(void **)(unaff_EBP - 0x12ec);
                  *(uint *)(unaff_EBP - 0x131c) = CONCAT31(extraout_var,bVar5);
                  iVar8 = *(int *)(unaff_EBP - 0x12d8) + 1;
                  *(int *)(unaff_EBP - 0x12dc) = iVar8;
                  puVar9 = FUN_004d23f0(pvVar17,iVar8);
                  bVar5 = FUN_00406280((int)puVar9);
                  iVar8 = FUN_004061d0(*(int *)(unaff_EBP - 0x12ec));
                  *(int *)(unaff_EBP - 0x12d4) = iVar8 + *(int *)(unaff_EBP - 0x12d8) + 1;
                  iVar8 = *(int *)(unaff_EBP - 0x131c);
                  if (CONCAT31(extraout_var_00,bVar5) == 0) {
                    if (iVar8 == 0xb) {
                      pvVar17 = *(void **)(unaff_EBP - 0x12e0);
                      fVar32 = FUN_004d19f0(pvVar17,*(uint *)(unaff_EBP - 0x12c8),
                                            *(uint *)(unaff_EBP - 0x1300));
                      *(float *)(unaff_EBP - 0x12e8) = (float)fVar32;
                      if ((0.75 < *(float *)(unaff_EBP - 0x12e8)) &&
                         ((*(int *)(unaff_EBP - 0x1300) * 0x5a + *(int *)(unaff_EBP - 0x12c8)) %
                          *(int *)(unaff_EBP - 0x141c) == 0)) {
                        uVar7 = rand();
                        uVar7 = uVar7 & 0x8000000f;
                        if ((int)uVar7 < 0) {
                          uVar7 = (uVar7 - 1 | 0xfffffff0) + 1;
                        }
                        if (uVar7 == 0) {
                          iVar8 = 0;
                          *(undefined4 *)(unaff_EBP - 0x12d0) = 0;
                          do {
                            puVar9 = FUN_00405fd0(pvVar17,*(uint *)(unaff_EBP - 0x12c8),
                                                  *(uint *)(unaff_EBP - 0x1300),
                                                  iVar8 + *(int *)(unaff_EBP - 0x12d4),iVar11);
                            uVar15 = FUN_004061f0((int)puVar9);
                            if ((char)uVar15 != '\0') goto LAB_00520371;
                            iVar8 = *(int *)(unaff_EBP - 0x12d0) + 1;
                            *(int *)(unaff_EBP - 0x12d0) = iVar8;
                          } while (iVar8 < 7);
                          FUN_004c84b0(unaff_EBP - 0x1044);
                          uVar7 = *(uint *)(unaff_EBP - 0x1300);
                          uVar28 = *(uint *)(unaff_EBP - 0x12c8);
                          *(undefined1 *)(unaff_EBP - 4) = 8;
                          fVar32 = FUN_004fc140(pvVar17,uVar28,uVar7,iVar11);
                          *(float *)(unaff_EBP - 0x12e8) = (float)fVar32;
                          if (*(float *)(unaff_EBP - 0x12e8) <= 0.8) {
                            uVar40 = 0x40000000;
                            *(undefined4 *)(unaff_EBP - 0x1044) = 0x32;
                            uVar15 = 0x40000000;
                            pvVar12 = (void *)(unaff_EBP - 0x7a0);
                          }
                          else {
                            uVar40 = 0x3f800000;
                            *(undefined4 *)(unaff_EBP - 0x1044) = 0x33;
                            uVar15 = 0x3f800000;
                            pvVar12 = (void *)(unaff_EBP - 0x788);
                          }
                          puVar16 = FUN_00401080(pvVar12,uVar15,uVar40,0x41000000);
                          uVar43 = 0x51fc72;
                          FUN_00401060((void *)(unaff_EBP - 0x1020),puVar16);
                          uVar7 = *(uint *)(unaff_EBP - 0x12d4);
                          uVar40 = 0x51fc82;
                          FUN_004cde40(&stack0xfffffff8,uVar7);
                          uVar28 = *(uint *)(unaff_EBP - 0x1300);
                          uVar15 = 0x51fc92;
                          FUN_004cde40(&stack0xfffffff0,uVar28);
                          FUN_004cde40(&stack0xffffffe8,*(uint *)(unaff_EBP - 0x12c8));
                          puVar16 = FUN_00406380((void *)(unaff_EBP - 0xafc),uVar15,uVar28,uVar40,
                                                 uVar7,uVar43,puVar16);
                          FUN_00402a40((void *)(unaff_EBP - 0x103c),puVar16);
                          uVar7 = rand();
                          uVar7 = uVar7 & 0x80000003;
                          if ((int)uVar7 < 0) {
                            uVar7 = (uVar7 - 1 | 0xfffffffc) + 1;
                          }
                          *(uint *)(unaff_EBP - 0x1024) = uVar7;
                          FUN_004d6670((void *)(iVar11 + 0xc),(void **)(unaff_EBP - 0x1044));
                          *(undefined1 *)(unaff_EBP - 4) = 3;
                          FUN_004cd8f0(unaff_EBP - 0x1044);
                        }
                      }
                    }
                    else if (iVar8 == 3) {
                      pvVar17 = *(void **)(unaff_EBP - 0x12e0);
                      fVar32 = FUN_004fc140(pvVar17,*(uint *)(unaff_EBP - 0x12c8),
                                            *(uint *)(unaff_EBP - 0x1300),iVar11);
                      *(float *)(unaff_EBP - 0x12e8) = (float)fVar32;
                      if (0.2 < *(float *)(unaff_EBP - 0x12e8)) {
                        dVar35 = (double)((float)*(int *)(unaff_EBP - 0x12c8) * 0.05 + 9843.0);
                        fVar32 = FUN_004d5d30(SUB84(dVar35,0),(int)((ulonglong)dVar35 >> 0x20),
                                              (double)((float)*(int *)(unaff_EBP - 0x1300) * 0.05 +
                                                      8437.0));
                        fVar32 = FUN_00401ca0((float)fVar32);
                        *(float *)(unaff_EBP - 0x12e8) = (float)fVar32;
                        if (0.5 < *(float *)(unaff_EBP - 0x12e8)) {
                          uVar7 = rand();
                          uVar7 = uVar7 & 0x80000007;
                          bVar31 = uVar7 == 0;
                          if ((int)uVar7 < 0) {
                            bVar31 = (uVar7 - 1 | 0xfffffff8) == 0xffffffff;
                          }
                          if (bVar31) {
                            FUN_004c83b0(unaff_EBP - 0x4e8);
                            piVar19 = (int *)(unaff_EBP - 0x160c);
                            piVar18 = FUN_004cde40((void *)(unaff_EBP - 0x171c),
                                                   *(uint *)(unaff_EBP - 0x12c8));
                            puVar16 = (undefined4 *)FUN_004ce290(piVar18,piVar19);
                            pvVar12 = (void *)FUN_004e2320((void *)(unaff_EBP - 0x4e0),0);
                            FUN_004cde20(pvVar12,puVar16);
                            piVar19 = (int *)(unaff_EBP - 0x161c);
                            piVar18 = FUN_004cde40((void *)(unaff_EBP - 0x162c),
                                                   *(uint *)(unaff_EBP - 0x1300));
                            puVar16 = (undefined4 *)FUN_004ce290(piVar18,piVar19);
                            pvVar12 = (void *)FUN_004e2320((void *)(unaff_EBP - 0x4e0),1);
                            FUN_004cde20(pvVar12,puVar16);
                            uVar7 = *(uint *)(unaff_EBP - 0x12d4);
                            pvVar12 = (void *)FUN_004e2320((void *)(unaff_EBP - 0x4e0),2);
                            FUN_004cde40(pvVar12,uVar7);
                            iVar8 = rand();
                            *(undefined4 *)(unaff_EBP - 0x4c8) = 0x3db851ec;
                            *(float *)(unaff_EBP - 0x4c4) = ((float)iVar8 * 360.0) / 32767.0;
                            *(undefined4 *)(unaff_EBP - 0x4e8) = 0x16;
                            *(undefined4 *)(unaff_EBP - 0x4b0) = 4;
                            FUN_00528450((void *)(iVar11 + 4),(undefined4 *)(unaff_EBP - 0x4e8));
                          }
                        }
                      }
                    }
                    else {
                      if (iVar8 != 2) goto LAB_005200d6;
                      pvVar17 = *(void **)(unaff_EBP - 0x12e0);
                      fVar32 = FUN_004fc140(pvVar17,*(uint *)(unaff_EBP - 0x12c8),
                                            *(uint *)(unaff_EBP - 0x1300),iVar11);
                      *(float *)(unaff_EBP - 0x12e8) = (float)fVar32;
                      if ((0.2 < *(float *)(unaff_EBP - 0x12e8)) &&
                         (0 < *(int *)(unaff_EBP - 0x12d4))) {
                        dVar35 = (double)((float)*(int *)(unaff_EBP - 0x12c8) * 0.05 + 24234.0);
                        fVar32 = FUN_004d5d30(SUB84(dVar35,0),(int)((ulonglong)dVar35 >> 0x20),
                                              (double)((float)*(int *)(unaff_EBP - 0x1300) * 0.05 +
                                                      53565.0));
                        fVar32 = FUN_00401ca0((float)fVar32);
                        *(float *)(unaff_EBP - 0x12e8) = (float)fVar32;
                        if ((0.7 < *(float *)(unaff_EBP - 0x12e8)) &&
                           (iVar8 = rand(), iVar8 % 10 == 0)) {
                          FUN_004c83b0(unaff_EBP - 0x568);
                          piVar19 = (int *)(unaff_EBP - 0x16d4);
                          piVar18 = FUN_004cde40((void *)(unaff_EBP - 0x163c),
                                                 *(uint *)(unaff_EBP - 0x12c8));
                          puVar16 = (undefined4 *)FUN_004ce290(piVar18,piVar19);
                          pvVar12 = (void *)FUN_004e2320((void *)(unaff_EBP - 0x560),0);
                          FUN_004cde20(pvVar12,puVar16);
                          piVar19 = (int *)(unaff_EBP - 0x164c);
                          piVar18 = FUN_004cde40((void *)(unaff_EBP - 0x175c),
                                                 *(uint *)(unaff_EBP - 0x1300));
                          puVar16 = (undefined4 *)FUN_004ce290(piVar18,piVar19);
                          pvVar12 = (void *)FUN_004e2320((void *)(unaff_EBP - 0x560),1);
                          FUN_004cde20(pvVar12,puVar16);
                          piVar19 = (int *)(unaff_EBP - 0x16ec);
                          piVar18 = FUN_004cde40((void *)(unaff_EBP - 0x1674),
                                                 *(uint *)(unaff_EBP - 0x12d4));
                          puVar16 = (undefined4 *)FUN_004e0700(piVar18,piVar19);
                          pvVar12 = (void *)FUN_004e2320((void *)(unaff_EBP - 0x560),2);
                          FUN_004cde20(pvVar12,puVar16);
                          iVar8 = rand();
                          *(undefined4 *)(unaff_EBP - 0x548) = 0x3db851ec;
                          *(float *)(unaff_EBP - 0x544) = ((float)iVar8 * 360.0) / 32767.0;
                          uVar7 = rand();
                          uVar7 = uVar7 & 0x80000001;
                          if ((int)uVar7 < 0) {
                            uVar7 = (uVar7 - 1 | 0xfffffffe) + 1;
                          }
                          *(uint *)(unaff_EBP - 0x568) = uVar7 + 0x1f;
                          FUN_00528450((void *)(iVar11 + 4),(undefined4 *)(unaff_EBP - 0x568));
                        }
                      }
                    }
                  }
                  else {
LAB_005200d6:
                    if (((iVar8 == 4) || (iVar8 == 9)) || ((iVar8 == 0xc || (iVar8 == 10)))) {
                      uVar7 = *(uint *)(unaff_EBP - 0x1300);
                      iVar8 = *(int *)(unaff_EBP - 0x12c8);
                      *(float *)(unaff_EBP - 0x12fc) = (float)(int)uVar7;
                      *(float *)(unaff_EBP - 0x1310) = (float)iVar8;
                      dVar35 = (double)((float)iVar8 * 0.05 + 9843.0);
                      fVar32 = FUN_004d5d30(SUB84(dVar35,0),(int)((ulonglong)dVar35 >> 0x20),
                                            (double)((float)(int)uVar7 * 0.05 + 8437.0));
                      fVar32 = FUN_00401ca0((float)fVar32);
                      *(float *)(unaff_EBP - 0x12e8) = (float)fVar32;
                      if (0.6 < *(float *)(unaff_EBP - 0x12e8)) {
                        uVar28 = rand();
                        uVar28 = uVar28 & 0x80000007;
                        bVar31 = uVar28 == 0;
                        if ((int)uVar28 < 0) {
                          bVar31 = (uVar28 - 1 | 0xfffffff8) == 0xffffffff;
                        }
                        if (bVar31) {
                          if (*(int *)(unaff_EBP - 0x12d4) < 1) {
                            if (-5 < *(int *)(unaff_EBP - 0x12d4)) goto LAB_0052036b;
                            FUN_004c83b0(unaff_EBP - 0x378);
                            piVar19 = (int *)(unaff_EBP - 0x172c);
                            piVar18 = FUN_004cde40((void *)(unaff_EBP - 0x1684),
                                                   *(uint *)(unaff_EBP - 0x12c8));
                            puVar16 = (undefined4 *)FUN_004ce290(piVar18,piVar19);
                            pvVar17 = (void *)FUN_004e2320((void *)(unaff_EBP - 0x370),0);
                            FUN_004cde20(pvVar17,puVar16);
                            piVar19 = (int *)(unaff_EBP - 0x16fc);
                            piVar18 = FUN_004cde40((void *)(unaff_EBP - 0x1694),uVar7);
                            puVar16 = (undefined4 *)FUN_004ce290(piVar18,piVar19);
                            pvVar17 = (void *)FUN_004e2320((void *)(unaff_EBP - 0x370),1);
                            FUN_004cde20(pvVar17,puVar16);
                            uVar28 = *(uint *)(unaff_EBP - 0x12d4);
                            pvVar17 = (void *)FUN_004e2320((void *)(unaff_EBP - 0x370),2);
                            FUN_004cde40(pvVar17,uVar28);
                            uVar28 = rand();
                            uVar28 = uVar28 & 0x80000003;
                            if ((int)uVar28 < 0) {
                              uVar28 = (uVar28 - 1 | 0xfffffffc) + 1;
                            }
                            *(float *)(unaff_EBP - 0x354) = (float)(int)(uVar28 * 0x5a);
                            *(undefined4 *)(unaff_EBP - 0x358) = 0x3dcccccd;
                            dVar35 = (double)*(int *)(unaff_EBP - 0x12c8) * 0.01 + 9843.0;
                            fVar32 = FUN_004d5d30(SUB84(dVar35,0),(int)((ulonglong)dVar35 >> 0x20),
                                                  (double)(int)uVar7 * 0.01 + 8437.0);
                            *(float *)(unaff_EBP - 0x12e8) = (float)fVar32;
                            if (*(float *)(unaff_EBP - 0x12e8) <= 0.0) {
                              *(undefined4 *)(unaff_EBP - 0x378) = 7;
LAB_00520322:
                              *(undefined4 *)(unaff_EBP - 0x358) = 0x3dcccccd;
LAB_0052032c:
                              *(uint *)(unaff_EBP - 0x340) = *(uint *)(unaff_EBP - 0x340) | 4;
                            }
                            else {
                              uVar7 = rand();
                              uVar7 = uVar7 & 0x80000001;
                              if ((int)uVar7 < 0) {
                                uVar7 = (uVar7 - 1 | 0xfffffffe) + 1;
                              }
                              iVar8 = uVar7 + 5;
                              *(int *)(unaff_EBP - 0x378) = iVar8;
                              if (iVar8 == 5) {
                                *(undefined4 *)(unaff_EBP - 0x358) = 0x3d99999a;
                                goto LAB_0052032c;
                              }
                              if (iVar8 == 7) goto LAB_00520322;
                            }
                            iVar8 = rand();
                            puVar16 = (undefined4 *)(unaff_EBP - 0x378);
                            *(float *)(unaff_EBP - 0x358) =
                                 ((float)iVar8 / 32767.0 + 1.0) * *(float *)(unaff_EBP - 0x358);
                          }
                          else {
                            if (*(int *)(unaff_EBP - 0x131c) != 0xc) {
                              if (*(int *)(unaff_EBP - 0x131c) == 10) {
                                pvVar17 = *(void **)(unaff_EBP - 0x12e0);
                                iVar8 = 10;
                              }
                              else {
                                pvVar17 = *(void **)(unaff_EBP - 0x12e0);
                                fVar32 = FUN_004fc140(pvVar17,*(uint *)(unaff_EBP - 0x12c8),uVar7,
                                                      iVar11);
                                *(float *)(unaff_EBP - 0x12e8) = (float)fVar32;
                                if (*(float *)(unaff_EBP - 0x12e8) <= 0.75) {
                                  FUN_004c83b0(unaff_EBP - 0x42c);
                                  piVar19 = (int *)(unaff_EBP - 0x166c);
                                  piVar18 = FUN_004cde40((void *)(unaff_EBP - 0x167c),
                                                         *(uint *)(unaff_EBP - 0x12c8));
                                  puVar16 = (undefined4 *)FUN_004ce290(piVar18,piVar19);
                                  pvVar12 = (void *)FUN_004e2320((void *)(unaff_EBP - 0x424),0);
                                  FUN_004cde20(pvVar12,puVar16);
                                  piVar19 = (int *)(unaff_EBP - 0x168c);
                                  piVar18 = FUN_004cde40((void *)(unaff_EBP - 0x169c),
                                                         *(uint *)(unaff_EBP - 0x1300));
                                  puVar16 = (undefined4 *)FUN_004ce290(piVar18,piVar19);
                                  pvVar12 = (void *)FUN_004e2320((void *)(unaff_EBP - 0x424),1);
                                  FUN_004cde20(pvVar12,puVar16);
                                  uVar7 = *(uint *)(unaff_EBP - 0x12d4);
                                  pvVar12 = (void *)FUN_004e2320((void *)(unaff_EBP - 0x424),2);
                                  FUN_004cde40(pvVar12,uVar7);
                                  uVar7 = rand();
                                  uVar7 = uVar7 & 0x80000003;
                                  if ((int)uVar7 < 0) {
                                    uVar7 = (uVar7 - 1 | 0xfffffffc) + 1;
                                  }
                                  uVar28 = *(uint *)(unaff_EBP - 0x1300);
                                  fVar33 = *(float *)(unaff_EBP - 0x12c8);
                                  *(float *)(unaff_EBP - 0x408) = (float)(int)(uVar7 * 0x5a);
                                  *(undefined4 *)(unaff_EBP - 0x40c) = 0x3d99999a;
                                  fVar32 = FUN_004fc100(pvVar17,fVar33,uVar28,iVar11);
                                  iVar8 = *(int *)(unaff_EBP - 0x12c8);
                                  *(float *)(unaff_EBP - 0x12e8) = (float)fVar32;
                                  dVar36 = (double)iVar8 * 0.01;
                                  dVar35 = (double)*(int *)(unaff_EBP - 0x1300) * 0.01;
                                  if (*(float *)(unaff_EBP - 0x12e8) <= 0.5) {
                                    *(double *)(unaff_EBP - 0x40) = dVar35;
                                    *(double *)(unaff_EBP - 0x48) = dVar36;
                                    fVar32 = FUN_004d5d30(SUB84(dVar36 + 9843.0,0),
                                                          (int)((ulonglong)(dVar36 + 9843.0) >> 0x20
                                                               ),dVar35 + 8437.0);
                                    *(float *)(unaff_EBP - 0x12e8) = (float)fVar32;
                                    if (*(float *)(unaff_EBP - 0x12e8) <= 0.0) {
                                      dVar35 = *(double *)(unaff_EBP - 0x48) + 34234.0;
                                      fVar32 = FUN_004d5d30(SUB84(dVar35,0),
                                                            (int)((ulonglong)dVar35 >> 0x20),
                                                            *(double *)(unaff_EBP - 0x40) + 234234.0
                                                           );
                                      *(float *)(unaff_EBP - 0x12e8) = (float)fVar32;
                                      fVar33 = *(float *)(unaff_EBP - 0x12e8);
                                      goto LAB_00520e98;
                                    }
                                    dVar35 = (double)(*(float *)(unaff_EBP - 0x1310) * 0.01 +
                                                     34234.0);
                                    fVar32 = FUN_004d5d30(SUB84(dVar35,0),
                                                          (int)((ulonglong)dVar35 >> 0x20),
                                                          (double)(*(float *)(unaff_EBP - 0x12fc) *
                                                                   0.01 + 234234.0));
                                    *(float *)(unaff_EBP - 0x12e8) = (float)fVar32;
                                    uVar7 = (*(float *)(unaff_EBP - 0x12e8) <= 0.0) + 2;
                                  }
                                  else {
                                    *(double *)(unaff_EBP - 0x40) = dVar35;
                                    *(double *)(unaff_EBP - 0x48) = dVar36;
                                    fVar32 = FUN_004d5d30(SUB84(dVar36 + 9843.0,0),
                                                          (int)((ulonglong)(dVar36 + 9843.0) >> 0x20
                                                               ),dVar35 + 8437.0);
                                    *(float *)(unaff_EBP - 0x12e8) = (float)fVar32;
                                    if (*(float *)(unaff_EBP - 0x12e8) <= 0.0) {
                                      dVar35 = *(double *)(unaff_EBP - 0x48) + 34234.0;
                                      fVar32 = FUN_004d5d30(SUB84(dVar35,0),
                                                            (int)((ulonglong)dVar35 >> 0x20),
                                                            *(double *)(unaff_EBP - 0x40) + 234234.0
                                                           );
                                      *(float *)(unaff_EBP - 0x12e8) = (float)fVar32;
                                      fVar33 = *(float *)(unaff_EBP - 0x12e8);
LAB_00520e98:
                                      uVar7 = (uint)(fVar33 <= 0.0);
                                    }
                                    else {
                                      dVar35 = (double)(*(float *)(unaff_EBP - 0x1310) * 0.01 +
                                                       34234.0);
                                      fVar32 = FUN_004d5d30(SUB84(dVar35,0),
                                                            (int)((ulonglong)dVar35 >> 0x20),
                                                            (double)(*(float *)(unaff_EBP - 0x12fc)
                                                                     * 0.01 + 234234.0));
                                      *(float *)(unaff_EBP - 0x12e8) = (float)fVar32;
                                      uVar7 = (uint)(0.0 < *(float *)(unaff_EBP - 0x12e8)) * 8 + 4;
                                    }
                                  }
                                  *(uint *)(unaff_EBP - 0x42c) = uVar7;
                                  if (((((uVar7 == 2) || (uVar7 == 3)) || (uVar7 == 4)) ||
                                      (uVar7 == 0xc)) &&
                                     (*(uint *)(unaff_EBP - 0x3f4) =
                                           *(uint *)(unaff_EBP - 0x3f4) | 4, uVar7 == 0xc)) {
                                    iVar8 = rand();
                                    uVar7 = *(uint *)(unaff_EBP - 0x42c);
                                    *(float *)(unaff_EBP - 0x40c) =
                                         ((float)iVar8 * 0.02) / 32767.0 + 0.1;
                                  }
                                  if (((*(int *)(unaff_EBP - 0x131c) == 4) || (uVar7 == 2)) ||
                                     ((uVar7 == 3 || (uVar7 == 4)))) {
                                    puVar16 = (undefined4 *)(unaff_EBP - 0x42c);
                                    goto LAB_00520922;
                                  }
                                }
                                else {
                                  fVar32 = FUN_004fc100(pvVar17,*(float *)(unaff_EBP - 0x12c8),
                                                        *(uint *)(unaff_EBP - 0x1300),iVar11);
                                  *(float *)(unaff_EBP - 0x12e8) = (float)fVar32;
                                  if (*(float *)(unaff_EBP - 0x12e8) <= 0.25) {
                                    iVar8 = rand();
                                    if (iVar8 % 100 == 0) {
                                      FUN_004c83b0(unaff_EBP - 0x528);
                                      piVar19 = (int *)(unaff_EBP - 0x1624);
                                      piVar18 = FUN_004cde40((void *)(unaff_EBP - 0x1634),
                                                             *(uint *)(unaff_EBP - 0x12c8));
                                      puVar16 = (undefined4 *)FUN_004ce290(piVar18,piVar19);
                                      pvVar12 = (void *)FUN_004e2320((void *)(unaff_EBP - 0x520),0);
                                      FUN_004cde20(pvVar12,puVar16);
                                      piVar19 = (int *)(unaff_EBP - 0x1644);
                                      piVar18 = FUN_004cde40((void *)(unaff_EBP - 0x1654),
                                                             *(uint *)(unaff_EBP - 0x1300));
                                      puVar16 = (undefined4 *)FUN_004ce290(piVar18,piVar19);
                                      pvVar12 = (void *)FUN_004e2320((void *)(unaff_EBP - 0x520),1);
                                      FUN_004cde20(pvVar12,puVar16);
                                      uVar7 = *(uint *)(unaff_EBP - 0x12d4);
                                      pvVar12 = (void *)FUN_004e2320((void *)(unaff_EBP - 0x520),2);
                                      FUN_004cde40(pvVar12,uVar7);
                                      uVar7 = rand();
                                      uVar7 = uVar7 & 0x80000003;
                                      if ((int)uVar7 < 0) {
                                        uVar7 = (uVar7 - 1 | 0xfffffffc) + 1;
                                      }
                                      *(undefined4 *)(unaff_EBP - 0x508) = 0x3d99999a;
                                      *(float *)(unaff_EBP - 0x504) = (float)(int)(uVar7 * 0x5a);
                                      uVar7 = rand();
                                      uVar7 = uVar7 & 0x80000001;
                                      if ((int)uVar7 < 0) {
                                        uVar7 = (uVar7 - 1 | 0xfffffffe) + 1;
                                      }
                                      *(uint *)(unaff_EBP - 0x528) = 0x1c - (uint)(uVar7 != 0);
                                      puVar16 = (undefined4 *)(unaff_EBP - 0x528);
                                      goto LAB_00520922;
                                    }
                                  }
                                  else {
                                    FUN_004c83b0(unaff_EBP - 0x308);
                                    piVar19 = (int *)(unaff_EBP - 0x15e4);
                                    piVar18 = FUN_004cde40((void *)(unaff_EBP - 0x15f4),
                                                           *(uint *)(unaff_EBP - 0x12c8));
                                    puVar16 = (undefined4 *)FUN_004ce290(piVar18,piVar19);
                                    pvVar12 = (void *)FUN_004e2320((void *)(unaff_EBP - 0x300),0);
                                    FUN_004cde20(pvVar12,puVar16);
                                    piVar19 = (int *)(unaff_EBP - 0x1604);
                                    piVar18 = FUN_004cde40((void *)(unaff_EBP - 0x1614),
                                                           *(uint *)(unaff_EBP - 0x1300));
                                    puVar16 = (undefined4 *)FUN_004ce290(piVar18,piVar19);
                                    pvVar12 = (void *)FUN_004e2320((void *)(unaff_EBP - 0x300),1);
                                    FUN_004cde20(pvVar12,puVar16);
                                    uVar7 = *(uint *)(unaff_EBP - 0x12d4);
                                    pvVar12 = (void *)FUN_004e2320((void *)(unaff_EBP - 0x300),2);
                                    FUN_004cde40(pvVar12,uVar7);
                                    iVar8 = rand();
                                    dVar36 = (double)*(int *)(unaff_EBP - 0x12c8) * 0.01;
                                    *(float *)(unaff_EBP - 0x2e4) = ((float)iVar8 * 360.0) / 32767.0
                                    ;
                                    dVar35 = (double)*(int *)(unaff_EBP - 0x1300) * 0.01;
                                    *(undefined4 *)(unaff_EBP - 0x2e8) = 0x3d99999a;
                                    *(double *)(unaff_EBP - 0x48) = dVar36;
                                    *(double *)(unaff_EBP - 0x40) = dVar35;
                                    dVar36 = dVar36 + 9843.0;
                                    fVar32 = FUN_004d5d30(SUB84(dVar36,0),
                                                          (int)((ulonglong)dVar36 >> 0x20),
                                                          dVar35 + 8437.0);
                                    *(float *)(unaff_EBP - 0x12e8) = (float)fVar32;
                                    if (*(float *)(unaff_EBP - 0x12e8) <= 0.0) {
                                      dVar35 = *(double *)(unaff_EBP - 0x48) + 34234.0;
                                      fVar32 = FUN_004d5d30(SUB84(dVar35,0),
                                                            (int)((ulonglong)dVar35 >> 0x20),
                                                            *(double *)(unaff_EBP - 0x40) + 234234.0
                                                           );
                                      *(float *)(unaff_EBP - 0x12e8) = (float)fVar32;
                                      iVar8 = (*(float *)(unaff_EBP - 0x12e8) <= 0.5) + 0xb;
                                    }
                                    else {
                                      dVar35 = (double)(*(float *)(unaff_EBP - 0x1310) * 0.01 +
                                                       34234.0);
                                      fVar32 = FUN_004d5d30(SUB84(dVar35,0),
                                                            (int)((ulonglong)dVar35 >> 0x20),
                                                            (double)(*(float *)(unaff_EBP - 0x12fc)
                                                                     * 0.01 + 234234.0));
                                      *(float *)(unaff_EBP - 0x12e8) = (float)fVar32;
                                      iVar8 = (0.0 < *(float *)(unaff_EBP - 0x12e8)) + 3;
                                    }
                                    *(int *)(unaff_EBP - 0x308) = iVar8;
                                    if ((iVar8 == 2) || (iVar8 == 3)) {
                                      *(uint *)(unaff_EBP - 0x2d0) =
                                           *(uint *)(unaff_EBP - 0x2d0) | 4;
                                    }
                                    if (iVar8 == 0xb) {
                                      iVar30 = rand();
                                      *(uint *)(unaff_EBP - 0x2d0) =
                                           *(uint *)(unaff_EBP - 0x2d0) | 4;
                                      iVar8 = *(int *)(unaff_EBP - 0x308);
                                      *(float *)(unaff_EBP - 0x2e8) =
                                           ((float)iVar30 * 0.05) / 32767.0 + 0.05;
                                    }
                                    if (iVar8 == 0xc) {
                                      iVar30 = rand();
                                      *(uint *)(unaff_EBP - 0x2d0) =
                                           *(uint *)(unaff_EBP - 0x2d0) | 4;
                                      iVar8 = *(int *)(unaff_EBP - 0x308);
                                      *(float *)(unaff_EBP - 0x2e8) =
                                           ((float)iVar30 * 0.02) / 32767.0 + 0.1;
                                    }
                                    if (((*(int *)(unaff_EBP - 0x131c) == 4) || (iVar8 == 2)) ||
                                       (iVar8 == 3)) {
                                      puVar16 = (undefined4 *)(unaff_EBP - 0x308);
LAB_00520922:
                                      FUN_00528450((void *)(iVar11 + 4),puVar16);
                                    }
                                  }
                                }
                                iVar8 = *(int *)(unaff_EBP - 0x131c);
                              }
                              if (iVar8 == 4) {
                                iVar8 = rand();
                                if (iVar8 % *(int *)(unaff_EBP - 0x13f4) == 0) {
                                  FUN_0041d8d0((undefined2 *)(unaff_EBP - 0xc5c));
                                  piVar19 = (int *)(unaff_EBP - 0x16ac);
                                  piVar18 = FUN_004cde40((void *)(unaff_EBP - 0x16bc),
                                                         *(uint *)(unaff_EBP - 0x12c8));
                                  puVar16 = (undefined4 *)FUN_004ce290(piVar18,piVar19);
                                  pvVar12 = (void *)FUN_004e2320((void *)(unaff_EBP - 0xb44),0);
                                  FUN_004cde20(pvVar12,puVar16);
                                  piVar19 = (int *)(unaff_EBP - 0x16cc);
                                  piVar18 = FUN_004cde40((void *)(unaff_EBP - 0x16e4),
                                                         *(uint *)(unaff_EBP - 0x1300));
                                  puVar16 = (undefined4 *)FUN_004ce290(piVar18,piVar19);
                                  pvVar12 = (void *)FUN_004e2320((void *)(unaff_EBP - 0xb44),1);
                                  FUN_004cde20(pvVar12,puVar16);
                                  uVar7 = *(uint *)(unaff_EBP - 0x12d4);
                                  pvVar12 = (void *)FUN_004e2320((void *)(unaff_EBP - 0xb44),2);
                                  FUN_004cde40(pvVar12,uVar7);
                                  iVar8 = rand();
                                  *(undefined1 *)(unaff_EBP - 0xc5c) = 0xb;
                                  *(float *)(unaff_EBP - 0xb2c) = ((float)iVar8 / 32767.0) * 360.0;
                                  uVar7 = rand();
                                  uVar7 = uVar7 & 0x80000001;
                                  if ((int)uVar7 < 0) {
                                    uVar7 = (uVar7 - 1 | 0xfffffffe) + 1;
                                  }
                                  if (uVar7 == 0) {
                                    *(undefined1 *)(unaff_EBP - 0xc5b) = 0xf;
                                  }
                                  else if (uVar7 == 1) {
                                    *(undefined1 *)(unaff_EBP - 0xc5b) = 0x16;
                                    *(undefined4 *)(unaff_EBP - 0xb28) = 0x3dcccccd;
                                  }
                                  *(undefined2 *)(unaff_EBP - 0xc4c) = 1;
                                  *(undefined1 *)(unaff_EBP - 0xb24) = 2;
                                  FUN_0041f5b0((void *)(iVar11 + 0x30),
                                               (undefined1 *)(unaff_EBP - 0xc5c));
                                }
                              }
                              else if ((iVar8 == 10) &&
                                      (iVar8 = rand(), iVar8 % *(int *)(unaff_EBP - 0x1330) == 0)) {
                                FUN_0041d8d0((undefined2 *)(unaff_EBP - 0xda4));
                                piVar19 = (int *)(unaff_EBP - 0x16f4);
                                piVar18 = FUN_004cde40((void *)(unaff_EBP - 0x1704),
                                                       *(uint *)(unaff_EBP - 0x12c8));
                                puVar16 = (undefined4 *)FUN_004ce290(piVar18,piVar19);
                                pvVar12 = (void *)FUN_004e2320((void *)(unaff_EBP - 0xc8c),0);
                                FUN_004cde20(pvVar12,puVar16);
                                piVar19 = (int *)(unaff_EBP - 0x1714);
                                piVar18 = FUN_004cde40((void *)(unaff_EBP - 0x1724),
                                                       *(uint *)(unaff_EBP - 0x1300));
                                puVar16 = (undefined4 *)FUN_004ce290(piVar18,piVar19);
                                pvVar12 = (void *)FUN_004e2320((void *)(unaff_EBP - 0xc8c),1);
                                FUN_004cde20(pvVar12,puVar16);
                                uVar7 = *(uint *)(unaff_EBP - 0x12d4);
                                pvVar12 = (void *)FUN_004e2320((void *)(unaff_EBP - 0xc8c),2);
                                FUN_004cde40(pvVar12,uVar7);
                                iVar8 = rand();
                                *(undefined1 *)(unaff_EBP - 0xda4) = 0xb;
                                *(float *)(unaff_EBP - 0xc74) = ((float)iVar8 / 32767.0) * 360.0;
                                uVar7 = rand();
                                uVar7 = uVar7 & 0x80000001;
                                if ((int)uVar7 < 0) {
                                  uVar7 = (uVar7 - 1 | 0xfffffffe) + 1;
                                }
                                if (uVar7 < 2) {
                                  *(undefined1 *)(unaff_EBP - 0xda3) = 0x18;
                                  *(undefined4 *)(unaff_EBP - 0xc70) = 0x3dcccccd;
                                }
                                *(undefined2 *)(unaff_EBP - 0xd94) = 1;
                                *(undefined1 *)(unaff_EBP - 0xc6c) = 2;
                                FUN_0041f5b0((void *)(iVar11 + 0x30),
                                             (undefined1 *)(unaff_EBP - 0xda4));
                              }
                              goto LAB_00520371;
                            }
                            FUN_004c83b0(unaff_EBP - 0x49c);
                            piVar19 = (int *)(unaff_EBP - 0x174c);
                            piVar18 = FUN_004cde40((void *)(unaff_EBP - 0x16a4),
                                                   *(uint *)(unaff_EBP - 0x12c8));
                            puVar16 = (undefined4 *)FUN_004ce290(piVar18,piVar19);
                            pvVar17 = (void *)FUN_004e2320((void *)(unaff_EBP - 0x494),0);
                            FUN_004cde20(pvVar17,puVar16);
                            piVar19 = (int *)(unaff_EBP - 0x15c4);
                            piVar18 = FUN_004cde40((void *)(unaff_EBP - 0x15d4),uVar7);
                            puVar16 = (undefined4 *)FUN_004ce290(piVar18,piVar19);
                            pvVar17 = (void *)FUN_004e2320((void *)(unaff_EBP - 0x494),1);
                            FUN_004cde20(pvVar17,puVar16);
                            uVar28 = *(uint *)(unaff_EBP - 0x12d4);
                            pvVar17 = (void *)FUN_004e2320((void *)(unaff_EBP - 0x494),2);
                            FUN_004cde40(pvVar17,uVar28);
                            uVar28 = rand();
                            uVar28 = uVar28 & 0x80000003;
                            if ((int)uVar28 < 0) {
                              uVar28 = (uVar28 - 1 | 0xfffffffc) + 1;
                            }
                            *(float *)(unaff_EBP - 0x478) = (float)(int)(uVar28 * 0x5a);
                            *(undefined4 *)(unaff_EBP - 0x47c) = 0x3d99999a;
                            dVar35 = (double)*(int *)(unaff_EBP - 0x12c8) * 0.01 + 9843.0;
                            fVar32 = FUN_004d5d30(SUB84(dVar35,0),(int)((ulonglong)dVar35 >> 0x20),
                                                  (double)(int)uVar7 * 0.01 + 8437.0);
                            *(float *)(unaff_EBP - 0x12e8) = (float)fVar32;
                            iVar8 = (*(float *)(unaff_EBP - 0x12e8) <= 0.0) + 9;
                            *(int *)(unaff_EBP - 0x49c) = iVar8;
                            if (iVar8 == 9) {
                              *(uint *)(unaff_EBP - 0x464) = *(uint *)(unaff_EBP - 0x464) | 4;
                              puVar16 = (undefined4 *)(unaff_EBP - 0x49c);
                            }
                            else {
                              if (iVar8 == 10) {
                                iVar8 = rand();
                                *(float *)(unaff_EBP - 0x47c) =
                                     ((float)iVar8 * 0.02) / 32767.0 + 0.03;
                              }
                              puVar16 = (undefined4 *)(unaff_EBP - 0x49c);
                            }
                          }
                          FUN_00528450((void *)(iVar11 + 4),puVar16);
                        }
                      }
                    }
LAB_0052036b:
                    pvVar17 = *(void **)(unaff_EBP - 0x12e0);
                  }
                }
LAB_00520371:
                iVar8 = *(int *)(unaff_EBP - 0x12ec);
                *(undefined4 *)(unaff_EBP - 0x12d8) = *(undefined4 *)(unaff_EBP - 0x12dc);
                iVar8 = FUN_00406250(iVar8);
              } while (*(int *)(unaff_EBP - 0x12d8) < iVar8);
            }
            uVar7 = *(uint *)(unaff_EBP - 0x12c8);
            uVar28 = *(int *)(unaff_EBP - 0x1300) + 1;
            iVar8 = *(int *)(unaff_EBP - 0x132c) + 0x100;
            *(uint *)(unaff_EBP - 0x1300) = uVar28;
          } while ((int)uVar28 < iVar8);
        }
        uVar7 = uVar7 + 1;
        *(uint *)(unaff_EBP - 0x12c8) = uVar7;
        if (*(int *)(unaff_EBP - 0x1370) <= (int)uVar7) {
LAB_005203ce:
          piVar19 = (int *)(iVar11 + 0x24);
          *(int **)(unaff_EBP - 0x12e8) = piVar19;
          iVar8 = FUN_0041fff0(piVar19);
          if (0 < iVar8) {
            uVar7 = 0;
            do {
              piVar18 = (int *)FUN_00402bb0(piVar19,uVar7);
              if (*(int *)*piVar18 == 0 && ((int *)*piVar18)[1] == 0) {
                puVar16 = (undefined4 *)FUN_00402bb0(piVar19,uVar7);
                uVar39 = FUN_004f3850(*(uint *)(unaff_EBP - 0x135c),*(uint *)(unaff_EBP - 0x1364),
                                      uVar7);
                piVar19 = *(int **)(unaff_EBP - 0x12e8);
                *(undefined8 *)*puVar16 = uVar39;
              }
              uVar7 = uVar7 + 1;
              iVar11 = FUN_0041fff0(piVar19);
            } while ((int)uVar7 < iVar11);
            iVar11 = *(int *)(unaff_EBP - 0x1308);
          }
          piVar19 = (int *)(iVar11 + 0x18);
          *(undefined4 *)(unaff_EBP - 0x12cc) = 0;
          *(int **)(unaff_EBP - 0x12c8) = piVar19;
          iVar8 = FUN_0041fff0(piVar19);
          if (iVar8 < 1) {
            pvVar17 = *(void **)(unaff_EBP - 0x12e0);
          }
          else {
            uVar7 = 0;
            while( true ) {
              piVar18 = (int *)FUN_00402bb0(piVar19,uVar7);
              if (*(int *)(*piVar18 + 0x48) == 0 && *(int *)(*piVar18 + 0x4c) == 0) {
                piVar18 = (int *)FUN_00402bb0(piVar19,uVar7);
                uVar39 = FUN_004f3850(*(uint *)(unaff_EBP - 0x135c),*(uint *)(unaff_EBP - 0x1364),
                                      uVar7);
                piVar19 = *(int **)(unaff_EBP - 0x12c8);
                *(undefined8 *)(*piVar18 + 0x48) = uVar39;
              }
              piVar19 = (int *)FUN_00402bb0(piVar19,uVar7);
              piVar18 = (int *)FUN_00402bb0(*(void **)(unaff_EBP - 0x12c8),uVar7);
              FUN_0040a840((uint *)(*piVar18 + 0x2c),*piVar19 + 0x74,(undefined4 *)0x0);
              pvVar17 = *(void **)(unaff_EBP - 0x12c8);
              piVar19 = (int *)FUN_00402bb0(pvVar17,uVar7);
              FUN_004fb480(*piVar19,0);
              piVar19 = (int *)FUN_00402bb0(pvVar17,uVar7);
              if ((*(ushort *)(*piVar19 + 0x7a) & 0x200) != 0) {
                FUN_00406fd0((undefined2 *)(unaff_EBP - 0xebc));
                *(undefined2 *)(unaff_EBP - 0xebc) = 0xe0b;
                piVar19 = (int *)FUN_00402bb0(pvVar17,uVar7);
                *(undefined2 *)(unaff_EBP - 0xeac) = *(undefined2 *)(*piVar19 + 0x34);
                uVar28 = rand();
                uVar28 = uVar28 & 0x80000003;
                if ((int)uVar28 < 0) {
                  uVar28 = (uVar28 - 1 | 0xfffffffc) + 1;
                }
                *(char *)(unaff_EBP - 0xeaf) = (char)uVar28 + -0x80;
                *(undefined1 *)(unaff_EBP - 0xeb0) = 2;
                piVar19 = (int *)FUN_00402bb0(pvVar17,uVar7);
                FUN_00427000((void *)(*piVar19 + 0xf6c),(char *)(unaff_EBP - 0xebc),-1);
              }
              piVar19 = (int *)FUN_00402bb0(pvVar17,uVar7);
              piVar18 = (int *)FUN_00402bb0(*(void **)(unaff_EBP - 0x12c8),uVar7);
              iVar8 = FUN_00402bb0(*(void **)(unaff_EBP - 0x12c8),*(int *)(unaff_EBP - 0x12cc));
              iVar11 = *piVar19;
              *(int *)(unaff_EBP - 0x12e8) = iVar8;
              iVar8 = FUN_0052bf40((uint)*(byte *)(*piVar18 + 0x58),
                                   (byte)((ushort)*(undefined2 *)(iVar11 + 0x7a) >> 9) & 1);
              iVar11 = *(int *)(unaff_EBP - 0x12cc);
              *(char *)(**(int **)(unaff_EBP - 0x12e8) + 0x8d4) = (char)iVar8;
              piVar19 = (int *)FUN_00402bb0(*(void **)(unaff_EBP - 0x12c8),iVar11);
              piVar18 = (int *)FUN_00402bb0(*(void **)(unaff_EBP - 0x12c8),iVar11);
              iVar8 = FUN_00402bb0(*(void **)(unaff_EBP - 0x12c8),*(int *)(unaff_EBP - 0x12cc));
              iVar11 = *piVar19;
              *(int *)(unaff_EBP - 0x12e8) = iVar8;
              iVar8 = FUN_0052bf40((uint)*(byte *)(*piVar18 + 0x58),
                                   (byte)((ushort)*(undefined2 *)(iVar11 + 0x7a) >> 9) & 1);
              iVar11 = *(int *)(unaff_EBP - 0x12cc);
              *(char *)(**(int **)(unaff_EBP - 0x12e8) + 0x7bc) = (char)iVar8;
              piVar19 = (int *)FUN_00402bb0(*(void **)(unaff_EBP - 0x12c8),iVar11);
              piVar18 = (int *)FUN_00402bb0(*(void **)(unaff_EBP - 0x12c8),iVar11);
              iVar8 = FUN_00402bb0(*(void **)(unaff_EBP - 0x12c8),*(int *)(unaff_EBP - 0x12cc));
              iVar11 = *piVar19;
              *(int *)(unaff_EBP - 0x12e8) = iVar8;
              iVar8 = FUN_0052bf40((uint)*(byte *)(*piVar18 + 0x58),
                                   (byte)((ushort)*(undefined2 *)(iVar11 + 0x7a) >> 9) & 1);
              iVar11 = *(int *)(unaff_EBP - 0x12cc);
              *(char *)(**(int **)(unaff_EBP - 0x12e8) + 0x6a4) = (char)iVar8;
              piVar19 = (int *)FUN_00402bb0(*(void **)(unaff_EBP - 0x12c8),iVar11);
              piVar18 = (int *)FUN_00402bb0(*(void **)(unaff_EBP - 0x12c8),iVar11);
              iVar8 = FUN_00402bb0(*(void **)(unaff_EBP - 0x12c8),*(int *)(unaff_EBP - 0x12cc));
              iVar11 = *piVar19;
              *(int *)(unaff_EBP - 0x12e8) = iVar8;
              iVar8 = FUN_0052bf40((uint)*(byte *)(*piVar18 + 0x58),
                                   (byte)((ushort)*(undefined2 *)(iVar11 + 0x7a) >> 9) & 1);
              iVar11 = *(int *)(unaff_EBP - 0x12cc);
              *(char *)(**(int **)(unaff_EBP - 0x12e8) + 0x35c) = (char)iVar8;
              piVar19 = (int *)FUN_00402bb0(*(void **)(unaff_EBP - 0x12c8),iVar11);
              piVar18 = (int *)FUN_00402bb0(*(void **)(unaff_EBP - 0x12c8),iVar11);
              iVar8 = FUN_00402bb0(*(void **)(unaff_EBP - 0x12c8),*(int *)(unaff_EBP - 0x12cc));
              iVar11 = *piVar19;
              *(int *)(unaff_EBP - 0x12e8) = iVar8;
              iVar8 = FUN_0052bf40((uint)*(byte *)(*piVar18 + 0x58),
                                   (byte)((ushort)*(undefined2 *)(iVar11 + 0x7a) >> 9) & 1);
              iVar11 = *(int *)(unaff_EBP - 0x12cc);
              *(char *)(**(int **)(unaff_EBP - 0x12e8) + 0x58c) = (char)iVar8;
              piVar19 = (int *)FUN_00402bb0(*(void **)(unaff_EBP - 0x12c8),iVar11);
              piVar18 = (int *)FUN_00402bb0(*(void **)(unaff_EBP - 0x12c8),iVar11);
              iVar8 = FUN_00402bb0(*(void **)(unaff_EBP - 0x12c8),*(int *)(unaff_EBP - 0x12cc));
              iVar11 = *piVar19;
              *(int *)(unaff_EBP - 0x12e8) = iVar8;
              iVar8 = FUN_0052bf40((uint)*(byte *)(*piVar18 + 0x58),
                                   (byte)((ushort)*(undefined2 *)(iVar11 + 0x7a) >> 9) & 1);
              iVar11 = *(int *)(unaff_EBP - 0x12cc);
              *(char *)(**(int **)(unaff_EBP - 0x12e8) + 0x474) = (char)iVar8;
              piVar19 = (int *)FUN_00402bb0(*(void **)(unaff_EBP - 0x12c8),iVar11);
              piVar18 = (int *)FUN_00402bb0(*(void **)(unaff_EBP - 0x12c8),iVar11);
              iVar8 = FUN_00402bb0(*(void **)(unaff_EBP - 0x12c8),*(int *)(unaff_EBP - 0x12cc));
              pvVar17 = *(void **)(unaff_EBP - 0x12e0);
              uVar2 = *(undefined2 *)(*piVar19 + 0x7a);
              iVar11 = *piVar18;
              *(int *)(unaff_EBP - 0x12e8) = iVar8;
              iVar8 = FUN_0052bf40((uint)*(byte *)(iVar11 + 0x58),(byte)((ushort)uVar2 >> 9) & 1);
              iVar11 = *(int *)(unaff_EBP - 0x12cc);
              *(char *)(**(int **)(unaff_EBP - 0x12e8) + 0x244) = (char)iVar8;
              piVar19 = (int *)FUN_00402bb0(*(void **)(unaff_EBP - 0x12c8),iVar11);
              if ((*(ushort *)(*piVar19 + 0x7a) & 0x200) == 0) {
                piVar19 = (int *)FUN_00402bb0(*(void **)(unaff_EBP - 0x12c8),iVar11);
                FUN_00414470((void *)(*piVar19 + 0x8c8),0.05,'\0');
                piVar19 = (int *)FUN_00402bb0(*(void **)(unaff_EBP - 0x12c8),iVar11);
                FUN_00414470((void *)(*piVar19 + 0x7b0),0.05,'\0');
                piVar19 = (int *)FUN_00402bb0(*(void **)(unaff_EBP - 0x12c8),iVar11);
                FUN_00414470((void *)(*piVar19 + 0x698),0.05,'\0');
                piVar19 = (int *)FUN_00402bb0(*(void **)(unaff_EBP - 0x12c8),iVar11);
                FUN_00414470((void *)(*piVar19 + 0x350),0.05,'\0');
                piVar19 = (int *)FUN_00402bb0(*(void **)(unaff_EBP - 0x12c8),iVar11);
                FUN_00414470((void *)(*piVar19 + 0x580),0.05,'\0');
                piVar19 = (int *)FUN_00402bb0(*(void **)(unaff_EBP - 0x12c8),iVar11);
                FUN_00414470((void *)(*piVar19 + 0x468),0.05,'\0');
                piVar19 = (int *)FUN_00402bb0(*(void **)(unaff_EBP - 0x12c8),iVar11);
                FUN_00414470((void *)(*piVar19 + 0x238),0.05,'\0');
                piVar19 = (int *)FUN_00402bb0(*(void **)(unaff_EBP - 0x12c8),iVar11);
                FUN_00414470((void *)(*piVar19 + 0x9e0),0.05,'\0');
                piVar19 = (int *)FUN_00402bb0(*(void **)(unaff_EBP - 0x12c8),iVar11);
                FUN_00414470((void *)(*piVar19 + 0xaf8),0.05,'\0');
              }
              piVar19 = (int *)FUN_00402bb0(*(void **)(unaff_EBP - 0x12c8),iVar11);
              if ((*(int *)(*piVar19 + 0x28) == 1) &&
                 (piVar19 = (int *)FUN_00402bb0(*(void **)(unaff_EBP - 0x12c8),iVar11),
                 (*(ushort *)(*piVar19 + 0x7a) & 0x200) == 0)) {
                rand();
              }
              piVar19 = *(int **)(unaff_EBP - 0x12c8);
              uVar7 = iVar11 + 1;
              *(uint *)(unaff_EBP - 0x12cc) = uVar7;
              iVar11 = FUN_0041fff0(piVar19);
              if (iVar11 <= (int)uVar7) break;
              piVar19 = *(int **)(unaff_EBP - 0x12c8);
            }
            iVar11 = *(int *)(unaff_EBP - 0x1308);
          }
          FUN_004f7330((undefined4 *)(unaff_EBP - 0x144c));
          *(undefined1 *)(unaff_EBP - 4) = 9;
          FUN_00530550((void *)(iVar11 + 0x30),(undefined4 *)(unaff_EBP - 0x139c));
          piVar19 = (int *)FUN_004d3de0((void *)(iVar11 + 0x30),(undefined4 *)(unaff_EBP - 0x14a0));
          bVar31 = FUN_0042c6f0((void *)(unaff_EBP - 0x139c),piVar19);
          if (bVar31) {
            do {
              puVar20 = (undefined1 *)FUN_004ce1f0((undefined4 *)(unaff_EBP - 0x139c));
              puVar44 = puVar20 + 0xd;
              *(undefined1 **)(unaff_EBP - 0x12e8) = puVar20;
              puVar20 = (undefined1 *)
                        FUN_004f72d0((undefined1 *)(unaff_EBP - 0x14be),puVar20,puVar20 + 1);
              pbVar21 = (byte *)FUN_004f72f0((undefined1 *)(unaff_EBP - 0x150b),puVar20,puVar44);
              FUN_004f3880((void *)(unaff_EBP - 0x15b4),pbVar21);
              piVar19 = FUN_004f7910((void *)(unaff_EBP - 0x144c),(int *)(unaff_EBP - 0x15b4));
              *piVar19 = *piVar19 + 1;
              if ((*(byte *)(*(int *)(unaff_EBP - 0x12e8) + 0x138) & 1) == 0) {
                pvVar17 = (void *)(*(int *)(unaff_EBP - 0x12e8) + 0x118);
                pvVar12 = (void *)FUN_004e2320(pvVar17,2);
                *(void **)(unaff_EBP - 0x12d0) = pvVar12;
                puVar22 = (uint *)FUN_004014b0(pvVar12,(int *)(unaff_EBP - 0x1524));
                iVar11 = FUN_004e2320(pvVar17,1);
                *(int *)(unaff_EBP - 0x12dc) = iVar11;
                puVar23 = (uint *)FUN_004e2320(pvVar17,0);
                iVar11 = *(int *)(unaff_EBP - 0x1308);
                uVar7 = puVar22[1];
                uVar28 = *puVar22;
                puVar22 = *(uint **)(unaff_EBP - 0x12dc);
                pvVar17 = *(void **)(unaff_EBP - 0x12e0);
                uVar29 = puVar22[1];
                *(uint **)(unaff_EBP - 0x12e8) = puVar23;
                iVar8 = FUN_00406050(pvVar17,*puVar23,puVar23[1],*puVar22,uVar29,uVar28,uVar7,iVar11
                                    );
                uVar15 = FUN_004061f0(iVar8);
                cVar6 = (char)uVar15;
                while (cVar6 == '\0') {
                  FUN_004cde40((void *)(unaff_EBP - 0x152c),1);
                  FUN_00402eb0(*(void **)(unaff_EBP - 0x12d0),(uint *)(unaff_EBP - 0x152c));
                  puVar22 = (uint *)FUN_004014b0(*(void **)(unaff_EBP - 0x12d0),
                                                 (int *)(unaff_EBP - 0x1524));
                  iVar8 = FUN_00406050(pvVar17,**(uint **)(unaff_EBP - 0x12e8),
                                       (*(uint **)(unaff_EBP - 0x12e8))[1],
                                       **(uint **)(unaff_EBP - 0x12dc),
                                       (*(uint **)(unaff_EBP - 0x12dc))[1],*puVar22,puVar22[1],
                                       iVar11);
                  uVar15 = FUN_004061f0(iVar8);
                  cVar6 = (char)uVar15;
                }
              }
              FUN_0041e300((void *)(unaff_EBP - 0x139c),(int *)(unaff_EBP - 0x13d8));
              piVar19 = (int *)FUN_004d3de0((void *)(iVar11 + 0x30),
                                            (undefined4 *)(unaff_EBP - 0x14a0));
              bVar31 = FUN_0042c6f0((void *)(unaff_EBP - 0x139c),piVar19);
            } while (bVar31);
          }
          FUN_00428070((void *)(unaff_EBP - 0x144c),(undefined4 *)(unaff_EBP - 0x13a0));
          piVar19 = (int *)FUN_00530550((void *)(unaff_EBP - 0x144c),
                                        (undefined4 *)(unaff_EBP - 0x14a8));
          uVar39 = CONCAT44(piVar19,0x52185e);
          bVar31 = FUN_0042c6f0((void *)(unaff_EBP - 0x13a0),piVar19);
          if (bVar31) {
            uVar7 = *(uint *)(unaff_EBP - 0x138c);
            do {
              uVar15 = (undefined4)uVar39;
              piVar19 = (int *)FUN_00402bc0((int *)(unaff_EBP - 0x13a0));
              iVar8 = *piVar19;
              *(int **)(unaff_EBP - 0x12e8) = piVar19;
              if (((iVar8 == 1) || (iVar8 == 0xb)) && (7 < piVar19[3])) {
                uVar43 = 0x5218a6;
                FUN_004f7490((undefined4 *)(unaff_EBP - 0x1184));
                puVar44 = *(undefined1 **)(unaff_EBP - 0x12e8);
                *(undefined1 *)(unaff_EBP - 0x1180) = *puVar44;
                *(undefined1 *)(unaff_EBP - 0x117f) = puVar44[4];
                uVar1 = puVar44[8];
                *(undefined4 *)(unaff_EBP - 0x1184) = 9;
                *(undefined1 *)(unaff_EBP - 0x1173) = uVar1;
                uVar39 = 0x5218dc;
                FUN_004cde40(&stack0xfffffff8,0);
                uVar28 = *(uint *)(unaff_EBP - 5000);
                uVar40 = 0x5218ec;
                FUN_004cde40(&stack0xfffffff0,uVar28);
                FUN_004cde40(&stack0xffffffe8,uVar7);
                puVar16 = FUN_00406380((void *)(unaff_EBP - 0xb14),uVar40,uVar28,(int)uVar39,
                                       (int)((ulonglong)uVar39 >> 0x20),uVar15,uVar43);
                FUN_00402a40((void *)(unaff_EBP - 0x105c),puVar16);
                FUN_005284a0((void *)(iVar11 + 0x48),(undefined4 *)(unaff_EBP - 0x1184));
              }
              FUN_00407a30((void *)(unaff_EBP - 0x13a0),(int *)(unaff_EBP - 0x1548));
              piVar19 = (int *)FUN_00530550((void *)(unaff_EBP - 0x144c),
                                            (undefined4 *)(unaff_EBP - 0x14a8));
              uVar39 = CONCAT44(piVar19,0x52194f);
              bVar31 = FUN_0042c6f0((void *)(unaff_EBP - 0x13a0),piVar19);
            } while (bVar31);
            pvVar17 = *(void **)(unaff_EBP - 0x12e0);
          }
          FUN_004f7310((undefined4 *)(unaff_EBP - 0x1454));
          *(undefined1 *)(unaff_EBP - 4) = 10;
          FUN_00530550((void *)(iVar11 + 0x18),(undefined4 *)(unaff_EBP - 0x1394));
          piVar19 = (int *)FUN_004d3de0((void *)(iVar11 + 0x18),(undefined4 *)(unaff_EBP - 0x14b0));
          bVar31 = FUN_0042c6f0((void *)(unaff_EBP - 0x1394),piVar19);
          if (bVar31) {
            do {
              piVar19 = (int *)FUN_004ce1f0((undefined4 *)(unaff_EBP - 0x1394));
              iVar8 = *piVar19;
              if (*(int *)(iVar8 + 0x44) == 86400000) {
                piVar19 = (int *)FUN_004c8130((undefined4 *)(unaff_EBP - 0x1734),
                                              (undefined4 *)(iVar8 + 0x28),
                                              (undefined4 *)(iVar8 + 0x2c));
                piVar19 = FUN_004f7890((void *)(unaff_EBP - 0x1454),piVar19);
                *piVar19 = *piVar19 + 1;
              }
              FUN_004f79d0((void *)(unaff_EBP - 0x1394),(int *)(unaff_EBP - 0x13e0));
              piVar19 = (int *)FUN_004d3de0((void *)(iVar11 + 0x18),
                                            (undefined4 *)(unaff_EBP - 0x14b0));
              bVar31 = FUN_0042c6f0((void *)(unaff_EBP - 0x1394),piVar19);
            } while (bVar31);
            pvVar17 = *(void **)(unaff_EBP - 0x12e0);
          }
          FUN_00428070((void *)(unaff_EBP - 0x1454),(undefined4 *)(unaff_EBP - 0x1398));
          piVar19 = (int *)FUN_00530550((void *)(unaff_EBP - 0x1454),
                                        (undefined4 *)(unaff_EBP - 0x14b8));
          uVar39 = CONCAT44(piVar19,0x521a44);
          bVar31 = FUN_0042c6f0((void *)(unaff_EBP - 0x1398),piVar19);
          if (bVar31) {
            uVar7 = *(uint *)(unaff_EBP - 0x138c);
            do {
              uVar15 = (undefined4)uVar39;
              piVar19 = (int *)FUN_00402bc0((int *)(unaff_EBP - 0x1398));
              iVar8 = *piVar19;
              *(int **)(unaff_EBP - 0x12e8) = piVar19;
              if ((((iVar8 == 1) || (iVar8 == 6)) || (iVar8 == 5)) && (4 < piVar19[2])) {
                uVar43 = 0x521a8d;
                FUN_004f7490((undefined4 *)(unaff_EBP - 0x12c4));
                uVar40 = *(undefined4 *)(*(int *)(unaff_EBP - 0x12e8) + 4);
                *(undefined4 *)(unaff_EBP - 0x12c4) = 10;
                *(undefined4 *)(unaff_EBP - 0x11a4) = uVar40;
                uVar39 = 0x521ab2;
                FUN_004cde40(&stack0xfffffff8,0);
                uVar28 = *(uint *)(unaff_EBP - 5000);
                uVar40 = 0x521ac2;
                FUN_004cde40(&stack0xfffffff0,uVar28);
                FUN_004cde40(&stack0xffffffe8,uVar7);
                puVar16 = FUN_00406380((void *)(unaff_EBP - 0xae4),uVar40,uVar28,(int)uVar39,
                                       (int)((ulonglong)uVar39 >> 0x20),uVar15,uVar43);
                FUN_00402a40((void *)(unaff_EBP - 0x119c),puVar16);
                FUN_005284a0((void *)(iVar11 + 0x48),(undefined4 *)(unaff_EBP - 0x12c4));
              }
              FUN_00407a30((void *)(unaff_EBP - 0x1398),(int *)(unaff_EBP - 0x1564));
              piVar19 = (int *)FUN_00530550((void *)(unaff_EBP - 0x1454),
                                            (undefined4 *)(unaff_EBP - 0x14b8));
              uVar39 = CONCAT44(piVar19,0x521b25);
              bVar31 = FUN_0042c6f0((void *)(unaff_EBP - 0x1398),piVar19);
            } while (bVar31);
            pvVar17 = *(void **)(unaff_EBP - 0x12e0);
          }
          iVar8 = FUN_0041fff0((int *)(iVar11 + 0x18));
          *(int *)(iVar11 + 0xa0) = iVar8;
          FUN_0050d260(pvVar17,iVar11);
          if ((*(char *)((int)pvVar17 + 0xb4) == '\0') &&
             (bVar31 = FUN_00419f80((int)pvVar17 + 0x94), !bVar31)) {
            FUN_004c8190((void *)(unaff_EBP - 0x182c),3,1);
            iVar8 = *(int *)(unaff_EBP - 0x1364);
            *(undefined1 *)(unaff_EBP - 4) = 0xb;
            pbVar24 = FUN_00412710((basic_ostream<char,std::char_traits<char>_> *)
                                   (unaff_EBP - 0x181c),"zone");
            pbVar25 = std::basic_ostream<char,std::char_traits<char>_>::operator<<
                                ((basic_ostream<char,std::char_traits<char>_> *)pbVar24,iVar8);
            pbVar24 = FUN_00412710((basic_ostream<char,std::char_traits<char>_> *)pbVar25,
                                   unaff_retaddr);
            std::basic_ostream<char,std::char_traits<char>_>::operator<<
                      ((basic_ostream<char,std::char_traits<char>_> *)pbVar24,param_3);
            FUN_00422af0((undefined4 *)(unaff_EBP - 0x1574));
            *(undefined1 *)(unaff_EBP - 4) = 0xc;
            puVar16 = FUN_004d8f70((void *)(unaff_EBP - 0x182c),(void *)(unaff_EBP - 0x7c4));
            *(undefined1 *)(unaff_EBP - 4) = 0xd;
            uVar15 = FUN_00413130((void *)((int)pvVar17 + 0xac),puVar16,
                                  (undefined4 *)(unaff_EBP - 0x1574));
            *(char *)(unaff_EBP - 0x1309) = (char)uVar15;
            *(undefined1 *)(unaff_EBP - 4) = 0xc;
            FUN_004013a0((undefined4 *)(unaff_EBP - 0x7c4));
            if (*(char *)(unaff_EBP - 0x1309) != '\0') {
              puVar16 = FUN_0041d800((void *)(unaff_EBP - 0x177c),unaff_EBP - 0x1574);
              FUN_0041ee20(puVar16,pvVar17,iVar11);
            }
            FUN_0042f440((undefined4 *)(unaff_EBP - 0x1574));
            *(undefined1 *)(unaff_EBP - 4) = 10;
            FUN_004ce3e0((void *)(unaff_EBP - 0x182c));
          }
          FUN_004d1a70(pvVar17,*(uint *)(unaff_EBP - 0x1358),*(uint *)(unaff_EBP - 0x132c),
                       *(int *)(unaff_EBP - 0x1370),*(uint *)(unaff_EBP - 0x132c) + 0x100,0,iVar11);
          *(void **)(unaff_EBP - 0x12e8) = (void *)(iVar11 + 4);
          FUN_00428070((void *)(iVar11 + 4),(undefined4 *)(unaff_EBP - 0x1324));
          piVar19 = (int *)FUN_00530550((void *)(iVar11 + 4),(undefined4 *)(unaff_EBP - 0x149c));
          bVar31 = FUN_0042c6f0((void *)(unaff_EBP - 0x1324),piVar19);
          if (bVar31) {
            do {
              iVar8 = FUN_0052eb90((int *)(unaff_EBP - 0x1324));
              iVar11 = *(int *)(unaff_EBP - 0x1308);
              iVar30 = 0;
              pCVar26 = (CRefTime *)FUN_004e2320((void *)(iVar8 + 8),2);
              lVar27 = CRefTime::Millisecs(pCVar26);
              pCVar26 = (CRefTime *)FUN_004e2320((void *)(iVar8 + 8),1);
              uVar7 = CRefTime::Millisecs(pCVar26);
              pCVar26 = (CRefTime *)FUN_004e2320((void *)(iVar8 + 8),0);
              uVar28 = CRefTime::Millisecs(pCVar26);
              pvVar17 = *(void **)(unaff_EBP - 0x12e0);
              bVar5 = FUN_004d24a0(pvVar17,uVar28,uVar7,lVar27,iVar11,iVar30);
              *(float *)(iVar8 + 0x28) = (float)CONCAT31(extraout_var_01,bVar5);
              FUN_0052ebf0((void *)(unaff_EBP - 0x1324),(undefined4 *)(unaff_EBP - 0x1494));
              piVar19 = (int *)FUN_00530550(*(void **)(unaff_EBP - 0x12e8),
                                            (undefined4 *)(unaff_EBP - 0x149c));
              bVar31 = FUN_0042c6f0((void *)(unaff_EBP - 0x1324),piVar19);
            } while (bVar31);
            iVar11 = *(int *)(unaff_EBP - 0x1308);
          }
          *(undefined4 *)(unaff_EBP - 0x12d8) = 0;
          iVar8 = FUN_0041cb40((int *)(iVar11 + 0xc));
          if (0 < iVar8) {
            iVar8 = 0;
            do {
              puVar42 = (ulonglong *)(unaff_EBP - 0x1744);
              iVar41 = 1;
              iVar30 = iVar11;
              iVar8 = FUN_0041ba70((void *)(iVar11 + 0xc),iVar8);
              FUN_004e2320((void *)(iVar8 + 8),iVar41);
              pCVar26 = (CRefTime *)FUN_004ce2d0(puVar42);
              uVar7 = CRefTime::Millisecs(pCVar26);
              puVar42 = (ulonglong *)(unaff_EBP - 0x1754);
              iVar41 = 0;
              iVar8 = FUN_0041ba70((void *)(iVar11 + 0xc),*(int *)(unaff_EBP - 0x12d8));
              FUN_004e2320((void *)(iVar8 + 8),iVar41);
              pCVar26 = (CRefTime *)FUN_004ce2d0(puVar42);
              uVar28 = CRefTime::Millisecs(pCVar26);
              iVar8 = FUN_0041c9e0(pvVar17,uVar28,uVar7,iVar30);
              *(int *)(unaff_EBP - 0x12e8) = iVar8;
              if (iVar8 != 0) {
                FUN_00402990(&stack0xfffffff4,*(undefined4 *)(unaff_EBP - 0x135c),
                             *(undefined4 *)(unaff_EBP - 0x1364),*(undefined4 *)(unaff_EBP - 0x12d8)
                            );
                iVar8 = FUN_0041ba70((void *)(iVar11 + 0xc),*(int *)(unaff_EBP - 0x12d8));
                puVar16 = (undefined4 *)
                          FUN_004f7350((void *)(unaff_EBP - 0x7fc),iVar8,uVar28,uVar7,iVar30);
                FUN_005283b0(*(void **)(unaff_EBP - 0x12e8),puVar16);
              }
              *(int *)(unaff_EBP - 0x12d8) = *(int *)(unaff_EBP - 0x12d8) + 1;
              iVar30 = FUN_0041cb40((int *)(iVar11 + 0xc));
              iVar8 = *(int *)(unaff_EBP - 0x12d8);
            } while (iVar8 < iVar30);
          }
          *(int *)(*(int *)(unaff_EBP - 0x137c) + 0x10018 + *(int *)(unaff_EBP - 0x13ac) * 4) =
               iVar11;
          FUN_004f7710((undefined4 *)(unaff_EBP - 0x1454));
          FUN_004f7710((undefined4 *)(unaff_EBP - 0x144c));
          FUN_00423710((int *)(unaff_EBP - 0x13a8));
          FUN_00423710((int *)(unaff_EBP - 0x1378));
          FUN_00423710((int *)(unaff_EBP - 0x13c4));
          ExceptionList = *(void **)(unaff_EBP - 0xc);
          __security_check_cookie(*(uint *)(unaff_EBP - 0x10) ^ unaff_EBP);
          return;
        }
        uVar28 = *(uint *)(unaff_EBP - 0x132c);
      } while( true );
    }
    iVar11 = 0;
    *(undefined4 *)(unaff_EBP - 0x1310) = 0;
  } while( true );
}


