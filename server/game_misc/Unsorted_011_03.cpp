// Unsorted_011_03 (game_misc) -- server. 31 functions. Bodies = Ghidra pseudo-C.
// Attribution: see ../attribution.tsv. Toolchain of the original: MSVC 11.0 (VS2012).
#include "Unsorted_011_03.h"

/* FUN_0051b12a @ 0051b12a  kind=gamemisc  attributed-by=none  size=320 */

void FUN_0051b12a(undefined4 param_1,undefined4 param_2,int param_3)

{
  float *pfVar1;
  undefined1 uVar2;
  undefined2 uVar3;
  undefined4 *puVar4;
  longlong lVar5;
  char cVar6;
  byte bVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  uint uVar11;
  undefined *puVar12;
  undefined8 *puVar13;
  uint uVar14;
  undefined4 uVar15;
  float *pfVar16;
  int iVar17;
  Spawn *pSVar18;
  void *pvVar19;
  undefined3 extraout_var;
  undefined3 extraout_var_00;
  undefined4 *puVar20;
  void *pvVar21;
  int *piVar22;
  int *piVar23;
  undefined1 *puVar24;
  byte *pbVar25;
  uint *puVar26;
  uint *puVar27;
  basic_ostream<char,std::char_traits<char>_> *pbVar28;
  basic_ostream<char,struct_std::char_traits<char>_> *pbVar29;
  CRefTime *pCVar30;
  long lVar31;
  undefined3 extraout_var_01;
  uint uVar32;
  uint uVar33;
  int iVar34;
  uint unaff_EBP;
  uint uVar35;
  char *pcVar36;
  bool bVar37;
  float10 fVar38;
  float fVar39;
  float fVar40;
  double dVar41;
  double dVar42;
  float fVar43;
  float fVar44;
  float fVar45;
  float fVar46;
  float fVar47;
  ulonglong uVar48;
  undefined8 uVar49;
  ulonglong uVar50;
  char *unaff_retaddr;
  undefined4 uVar51;
  ulonglong *puVar52;
  undefined4 uVar53;
  undefined1 *puVar54;
  
  do {
    iVar8 = rand();
    iVar8 = iVar8 % 0x28 + 10;
    *(int *)(unaff_EBP - 0x12d8) = iVar8;
    iVar9 = rand();
    *(int *)(unaff_EBP - 0x12ec) = iVar9 % 0x28 + 10;
    iVar9 = rand();
    *(int *)(unaff_EBP - 0x1304) = iVar9 % 0x19 + 10;
    iVar9 = *(int *)(unaff_EBP - 0x12ec);
    iVar10 = rand();
    *(int *)(unaff_EBP - 0x12d4) =
         iVar10 % ((0x40 - iVar8) * 4) +
         (**(int **)(unaff_EBP - 0x12e4) * 0x80 + *(int *)(unaff_EBP - 0x12d8)) * 2;
    iVar8 = rand();
    fVar40 = *(float *)(unaff_EBP - 0x1308);
    pvVar21 = *(void **)(unaff_EBP - 0x12e0);
    uVar11 = iVar8 % ((0x40 - iVar9) * 4) +
             (*(int *)((int)fVar40 + 100) * 0x80 + *(int *)(unaff_EBP - 0x12ec)) * 2;
    uVar14 = *(uint *)(unaff_EBP - 0x12d4);
    fVar39 = (float)(int)uVar14 - *(float *)((int)pvVar21 + 0x8000f0);
    *(float *)(unaff_EBP - 0x16dc) = fVar39;
    fVar43 = (float)(int)uVar11 - *(float *)((int)pvVar21 + 0x8000f4);
    *(uint *)(unaff_EBP - 0x12f4) = uVar11;
    if (3600.0 <= fVar43 * fVar43 + fVar39 * fVar39) {
      piVar23 = (int *)**(int **)(unaff_EBP - 0x1378);
      if (piVar23 != *(int **)(unaff_EBP - 0x1378)) {
        *(uint *)(unaff_EBP - 0x12d0) = uVar11 * 0x10000;
        uVar14 = *(uint *)(unaff_EBP - 0x12d4);
        *(uint *)(unaff_EBP - 0x12dc) = ((int)uVar11 >> 0x1f) << 0x10 | uVar11 >> 0x10;
        *(uint *)(unaff_EBP - 0x1338) = ((int)uVar14 >> 0x1f) << 0x10 | uVar14 >> 0x10;
        *(uint *)(unaff_EBP - 0x1328) = uVar14 << 0x10;
        do {
          uVar11 = *(uint *)(unaff_EBP - 0x12d0);
          uVar14 = piVar23[4];
          iVar8 = *(int *)(unaff_EBP - 0x12dc);
          iVar9 = piVar23[5];
          *(uint *)(unaff_EBP - 0x1340) = uVar11 - piVar23[4];
          uVar33 = *(uint *)(unaff_EBP - 0x1328);
          *(uint *)(unaff_EBP - 0x133c) = (iVar8 - iVar9) - (uint)(uVar11 < uVar14);
          iVar8 = *(int *)(unaff_EBP - 0x1338);
          *(float *)(unaff_EBP - 0x12f0) = (float)*(longlong *)(unaff_EBP - 0x1340);
          uVar11 = piVar23[2];
          uVar14 = piVar23[2];
          *(undefined4 *)(unaff_EBP - 0x12f0) = *(undefined4 *)(unaff_EBP - 0x12f0);
          fVar39 = *(float *)(unaff_EBP - 0x12f0);
          iVar9 = piVar23[3];
          *(uint *)(unaff_EBP - 0x1354) = uVar33 - uVar14;
          *(uint *)(unaff_EBP - 0x1350) = (iVar8 - iVar9) - (uint)(uVar33 < uVar11);
          fVar39 = fVar39 * 1.5258789e-05;
          *(float *)(unaff_EBP - 0x12f0) = (float)*(longlong *)(unaff_EBP - 0x1354);
          *(undefined4 *)(unaff_EBP - 0x12f0) = *(undefined4 *)(unaff_EBP - 0x12f0);
          fVar43 = *(float *)(unaff_EBP - 0x12f0) * 1.5258789e-05;
          *(float *)(unaff_EBP - 0x15cc) = fVar43;
          if (fVar43 * fVar43 + fVar39 * fVar39 < 6400.0) goto LAB_0051b45b;
          piVar23 = (int *)*piVar23;
        } while (piVar23 != (int *)*(int *)(unaff_EBP - 0x1378));
        uVar14 = *(uint *)(unaff_EBP - 0x12d4);
        uVar11 = *(uint *)(unaff_EBP - 0x12f4);
      }
      fVar38 = FUN_004d19f0(pvVar21,uVar14,uVar11);
      *(float *)(unaff_EBP - 0x12d0) = (float)fVar38;
      if (*(float *)(unaff_EBP - 0x12d0) <= 0.6) {
        fVar38 = FUN_0052cd50(pvVar21,*(uint *)(unaff_EBP - 0x12d4),*(float *)(unaff_EBP - 0x12f4),
                              (int)fVar40);
        *(float *)(unaff_EBP - 0x12d0) = (float)fVar38;
        if (1.0 - *(float *)(unaff_EBP - 0x12d0) * 50.0 < 0.0) {
          fVar38 = (float10)FUN_00523d80(*(uint *)(unaff_EBP - 0x12d4),
                                         *(float *)(unaff_EBP - 0x12f4),fVar40);
          *(float *)(unaff_EBP - 0x12d0) = (float)fVar38;
          iVar8 = FUN_00406100(pvVar21,*(uint *)(unaff_EBP - 0x12d4),*(uint *)(unaff_EBP - 0x12f4),
                               (int)fVar40);
          *(int *)(unaff_EBP - 0x1320) = *(int *)(iVar8 + 0x1c) + *(int *)(iVar8 + 0x10);
          uVar11 = rand();
          uVar11 = uVar11 & 0x80000001;
          bVar37 = uVar11 == 0;
          if ((int)uVar11 < 0) {
            bVar37 = (uVar11 - 1 | 0xfffffffe) == 0xffffffff;
          }
          if ((bVar37) ||
             (0.25 < *(float *)(unaff_EBP - 0x12d0) || *(float *)(unaff_EBP - 0x12d0) == 0.25)) {
            FUN_004ffbf0(pvVar21,*(int *)(unaff_EBP - 0x12d4),*(int *)(unaff_EBP - 0x12f4),
                         *(int *)(unaff_EBP - 0x1320),*(int *)(unaff_EBP - 0x12d8),
                         *(int *)(unaff_EBP - 0x12ec),*(int *)(unaff_EBP - 0x1304),(int)fVar40);
          }
          else {
            FUN_004ff3f0(pvVar21,*(int *)(unaff_EBP - 0x12d4),*(int *)(unaff_EBP - 0x12f4),
                         *(int *)(unaff_EBP - 0x1320),*(int *)(unaff_EBP - 0x12d8),
                         *(int *)(unaff_EBP - 0x12ec),*(int *)(unaff_EBP - 0x1304) / 2,(int)fVar40);
          }
        }
      }
    }
LAB_0051b45b:
    piVar23 = (int *)(unaff_EBP - 0x1314);
    *piVar23 = *piVar23 + -1;
  } while (*piVar23 != 0);
  uVar11 = *(uint *)(unaff_EBP - 0x1358);
  *(uint *)(unaff_EBP - 0x12cc) = uVar11;
  if ((int)uVar11 < *(int *)(unaff_EBP - 0x1370)) {
    uVar14 = *(uint *)(unaff_EBP - 0x132c);
    iVar8 = uVar14 + 0x100;
    while( true ) {
      *(uint *)(unaff_EBP - 0x12e4) = uVar14;
      if ((int)uVar14 < iVar8) {
        do {
          fVar38 = (float10)FUN_0052d990(pvVar21,uVar11,uVar14);
          *(float *)(unaff_EBP - 0x12d0) = (float)fVar38;
          uVar11 = *(uint *)(unaff_EBP - 0x12e4);
          uVar14 = *(uint *)(unaff_EBP - 0x12cc);
          *(float *)(unaff_EBP - 0x1304) = 1.0 - *(float *)(unaff_EBP - 0x12d0) * 50.0;
          fVar38 = FUN_004d19f0(pvVar21,uVar14,uVar11);
          *(float *)(unaff_EBP - 0x12ec) = (float)fVar38;
          if (0.0 <= *(float *)(unaff_EBP - 0x1304)) {
            fVar38 = (float10)FUN_004f9b70(pvVar21,*(uint *)(unaff_EBP - 0x12cc),
                                           *(float *)(unaff_EBP - 0x12e4),(int)fVar40);
            *(float *)(unaff_EBP - 0x12d0) = (float)fVar38;
            fVar39 = *(float *)(unaff_EBP - 0x12d0);
            *(float *)(unaff_EBP - 0x1320) = fVar39;
            if (fVar39 < 0.0) {
              *(undefined4 *)(unaff_EBP - 0x1320) = 0;
              fVar39 = 0.0;
            }
            fVar43 = 1.0 - *(float *)(unaff_EBP - 0x1304);
            *(int *)(unaff_EBP - 0x12d4) = (int)(fVar39 + 1.0);
            iVar8 = *(int *)(unaff_EBP - 0x12e4);
            *(float *)(unaff_EBP - 0x12dc) = 1.0 - fVar43 * fVar43 * fVar43;
            iVar9 = *(int *)(unaff_EBP - 0x12cc);
            *(double *)(unaff_EBP - 0x13b4) = (double)iVar8;
            *(double *)(unaff_EBP - 0x13bc) = (double)iVar9;
            dVar41 = (double)iVar9 * 0.02 + 55432.0;
            fVar38 = FUN_004d5d30(SUB84(dVar41,0),(int)((ulonglong)dVar41 >> 0x20),
                                  (double)iVar8 * 0.02 + 974.0);
            *(float *)(unaff_EBP - 0x12d0) = (float)fVar38;
            iVar8 = *(int *)(unaff_EBP - 0x12d4);
            uVar11 = *(uint *)(unaff_EBP - 0x12e4);
            uVar14 = *(uint *)(unaff_EBP - 0x12cc);
            *(int *)(unaff_EBP - 0x12d8) =
                 (int)((*(float *)(unaff_EBP - 0x12d0) + 1.0) * 4.0 +
                      *(float *)(unaff_EBP - 0x12dc) * 5.0 + *(float *)(unaff_EBP - 0x1320));
            puVar12 = FUN_00405fd0(pvVar21,uVar14,uVar11,iVar8,(int)fVar40);
            if ((((puVar12[3] & 0x1f) != 0) && ((puVar12[3] & 0x1f) != 2)) &&
               (puVar12 = FUN_00405fd0(pvVar21,*(uint *)(unaff_EBP - 0x12cc),
                                       *(uint *)(unaff_EBP - 0x12e4),*(int *)(unaff_EBP - 0x12d4),
                                       (int)fVar40), (puVar12[3] & 0x40) == 0)) {
              dVar41 = *(double *)(unaff_EBP - 0x13b4);
              *(undefined4 *)(unaff_EBP - 0x244) = 0x42200000;
              *(undefined4 *)(unaff_EBP - 0x240) = 0x42200000;
              *(undefined4 *)(unaff_EBP - 0x23c) = 0x42200000;
              dVar42 = *(double *)(unaff_EBP - 0x13bc) * 0.05 + 843.0;
              fVar38 = FUN_004d5d30(SUB84(dVar42,0),(int)((ulonglong)dVar42 >> 0x20),
                                    dVar41 * 0.05 + 984.0);
              *(float *)(unaff_EBP - 0x12d0) = (float)fVar38;
              uVar15 = *(undefined4 *)(unaff_EBP - 0x23c);
              *(undefined8 *)(unaff_EBP - 0x150) = *(undefined8 *)(unaff_EBP - 0x244);
              fVar39 = *(float *)(unaff_EBP - 0x12d0);
              fVar43 = *(float *)(unaff_EBP - 0x150);
              fVar44 = *(float *)(unaff_EBP - 0x14c);
              *(undefined4 *)(unaff_EBP - 0x148) = uVar15;
              fVar43 = fVar43 * fVar39;
              fVar44 = fVar44 * fVar39;
              fVar39 = *(float *)(unaff_EBP - 0x148) * fVar39;
              *(undefined4 *)(unaff_EBP - 0x1d8) = 0x430c0000;
              *(undefined4 *)(unaff_EBP - 0x1d4) = 0x430c0000;
              *(undefined8 *)(unaff_EBP - 0x24) = *(undefined8 *)(unaff_EBP - 0x1d8);
              fVar45 = *(float *)(unaff_EBP - 0x24);
              *(undefined4 *)(unaff_EBP - 0x1d0) = 0x430c0000;
              *(undefined4 *)(unaff_EBP - 0x1c) = *(undefined4 *)(unaff_EBP - 0x1d0);
              iVar8 = *(int *)(unaff_EBP - 0x12e4);
              *(float *)(unaff_EBP - 0x24) = fVar45 + fVar43;
              iVar9 = *(int *)(unaff_EBP - 0x12cc);
              iVar10 = (iVar8 / 2) * 0xea;
              *(float *)(unaff_EBP - 0x20) = *(float *)(unaff_EBP - 0x20) + fVar44;
              fVar45 = *(float *)(unaff_EBP - 0x1c);
              *(int *)(unaff_EBP - 0x12dc) = iVar10;
              iVar8 = (iVar9 / 2) * 0xea;
              *(float *)(unaff_EBP - 0x1c) = fVar45 + fVar39;
              dVar41 = (double)(iVar8 + 0x12e2);
              *(float *)(unaff_EBP - 0x150) = fVar43;
              *(float *)(unaff_EBP - 0x14c) = fVar44;
              *(float *)(unaff_EBP - 0x148) = fVar39;
              *(int *)(unaff_EBP - 0x12f0) = iVar8;
              fVar38 = FUN_004d5d30(SUB84(dVar41,0),(int)((ulonglong)dVar41 >> 0x20),
                                    (double)(iVar10 + 0xc11a));
              *(float *)(unaff_EBP - 0x12d0) = (float)fVar38;
              if (0.5 < *(float *)(unaff_EBP - 0x12d0)) {
                iVar8 = *(int *)(unaff_EBP - 0x12dc);
                *(undefined4 *)(unaff_EBP - 0x1e4) = 0x41a00000;
                iVar9 = *(int *)(unaff_EBP - 0x12f0);
                *(undefined4 *)(unaff_EBP - 0x1e0) = 0x41a00000;
                *(undefined4 *)(unaff_EBP - 0x1dc) = 0x41a00000;
                fVar38 = FUN_004d5d30(SUB84((double)iVar9,0),(int)((ulonglong)(double)iVar9 >> 0x20)
                                      ,(double)(iVar8 + 0x31));
                uVar49 = *(undefined8 *)(unaff_EBP - 0x1e4);
                uVar15 = *(undefined4 *)(unaff_EBP - 0x1dc);
                *(float *)(unaff_EBP - 0x12d0) = (float)fVar38;
                *(undefined8 *)(unaff_EBP - 0x15c) = uVar49;
                fVar39 = *(float *)(unaff_EBP - 0x12d0);
                fVar43 = *(float *)(unaff_EBP - 0x15c);
                fVar44 = *(float *)(unaff_EBP - 0x158);
                *(undefined4 *)(unaff_EBP - 0x154) = uVar15;
                fVar43 = fVar43 * fVar39;
                fVar44 = fVar44 * fVar39;
                fVar39 = *(float *)(unaff_EBP - 0x154) * fVar39;
                *(float *)(unaff_EBP - 0x15c) = fVar43;
                fVar45 = *(float *)(unaff_EBP - 0x24);
                *(float *)(unaff_EBP - 0x158) = fVar44;
                fVar47 = *(float *)(unaff_EBP - 0x20);
                *(float *)(unaff_EBP - 0x154) = fVar39;
                fVar46 = *(float *)(unaff_EBP - 0x1c);
                *(float *)(unaff_EBP - 0x24) = fVar43 + fVar45;
                *(float *)(unaff_EBP - 0x20) = fVar44 + fVar47;
                *(float *)(unaff_EBP - 0x1c) = fVar39 + fVar46;
              }
              iVar8 = *(int *)(*(int *)(unaff_EBP - 0x137c) + 0x14);
              if (((iVar8 == 1) || (iVar8 == 4)) || (iVar8 == 5)) {
                puVar13 = (undefined8 *)
                          FUN_004fae90(pvVar21,(float *)(unaff_EBP - 0x764),
                                       *(float *)(unaff_EBP - 0x12cc),*(uint *)(unaff_EBP - 0x12e4),
                                       *(int *)(unaff_EBP - 0x12d4),(int)fVar40);
                uVar49 = *puVar13;
                uVar15 = *(undefined4 *)(puVar13 + 1);
                *(undefined8 *)(unaff_EBP - 0x24) = uVar49;
                *(undefined4 *)(unaff_EBP - 0x1c) = uVar15;
              }
              else {
                uVar15 = *(undefined4 *)(unaff_EBP - 0x1c);
                uVar49 = *(undefined8 *)(unaff_EBP - 0x24);
              }
              fVar39 = *(float *)(unaff_EBP - 0x12ec);
              *(undefined8 *)(unaff_EBP - 0x174) = uVar49;
              fVar43 = fVar39 * *(float *)(unaff_EBP - 0x174);
              iVar8 = *(int *)(unaff_EBP - 0x12d4);
              *(float *)(unaff_EBP - 0x12d0) = fVar43;
              uVar11 = *(uint *)(unaff_EBP - 0x12e4);
              *(float *)(unaff_EBP - 0x174) = fVar43;
              fVar43 = *(float *)(unaff_EBP - 0x12cc);
              fVar44 = fVar39 * *(float *)(unaff_EBP - 0x170);
              *(undefined4 *)(unaff_EBP - 0x16c) = uVar15;
              *(float *)(unaff_EBP - 0x12dc) = fVar44;
              *(float *)(unaff_EBP - 0x170) = fVar44;
              fVar39 = fVar39 * *(float *)(unaff_EBP - 0x16c);
              *(float *)(unaff_EBP - 0x12f0) = fVar39;
              *(float *)(unaff_EBP - 0x16c) = fVar39;
              puVar13 = (undefined8 *)
                        FUN_004fae90(pvVar21,(float *)(unaff_EBP - 2000),fVar43,uVar11,iVar8,
                                     (int)fVar40);
              fVar45 = 1.0 - *(float *)(unaff_EBP - 0x12ec);
              *(undefined8 *)(unaff_EBP - 0xc0) = *puVar13;
              *(undefined4 *)(unaff_EBP - 0xb8) = *(undefined4 *)(puVar13 + 1);
              *(float *)(unaff_EBP - 0xc0) = fVar45 * *(float *)(unaff_EBP - 0xc0);
              fVar39 = *(float *)(unaff_EBP - 0xb8);
              *(float *)(unaff_EBP - 0xbc) = fVar45 * *(float *)(unaff_EBP - 0xbc);
              *(undefined8 *)(unaff_EBP - 0xd8) = *(undefined8 *)(unaff_EBP - 0xc0);
              fVar43 = *(float *)(unaff_EBP - 0xd8);
              fVar44 = *(float *)(unaff_EBP - 0x12d0);
              *(float *)(unaff_EBP - 0xb8) = fVar45 * fVar39;
              *(undefined4 *)(unaff_EBP - 0xd0) = *(undefined4 *)(unaff_EBP - 0xb8);
              *(float *)(unaff_EBP - 0xd8) = fVar43 + fVar44;
              *(float *)(unaff_EBP - 0xd4) =
                   *(float *)(unaff_EBP - 0xd4) + *(float *)(unaff_EBP - 0x12dc);
              *(float *)(unaff_EBP - 0xd0) =
                   *(float *)(unaff_EBP - 0xd0) + *(float *)(unaff_EBP - 0x12f0);
              uVar49 = *(undefined8 *)(unaff_EBP - 0xd8);
              *(undefined4 *)(unaff_EBP - 0x1a0) = *(undefined4 *)(unaff_EBP - 0xd0);
              *(undefined8 *)(unaff_EBP - 0x1a8) = uVar49;
              iVar8 = 0;
              do {
                pfVar16 = (float *)((unaff_EBP - 0x1a8) + iVar8 * 4);
                if (*pfVar16 <= 0.0 && *pfVar16 != 0.0) {
                  *(undefined4 *)((unaff_EBP - 0x1a8) + iVar8 * 4) = 0;
                }
                if (255.0 < *(float *)((unaff_EBP - 0x1a8) + iVar8 * 4)) {
                  *(undefined4 *)((unaff_EBP - 0x1a8) + iVar8 * 4) = 0x437f0000;
                }
                iVar8 = iVar8 + 1;
              } while (iVar8 < 3);
              iVar8 = 0;
              do {
                iVar9 = iVar8 * 4;
                iVar8 = iVar8 + 1;
                *(char *)((unaff_EBP - 0x13e9) + iVar8) =
                     (char)(int)*(float *)((unaff_EBP - 0x1a8) + iVar9);
              } while (iVar8 < 3);
              *(undefined2 *)(unaff_EBP - 0x1434) = *(undefined2 *)(unaff_EBP - 0x13e8);
              *(undefined1 *)(unaff_EBP - 0x1432) = *(undefined1 *)(unaff_EBP - 0x13e6);
              iVar8 = *(int *)(unaff_EBP - 0x12d4);
              uVar11 = *(uint *)(unaff_EBP - 0x12e4);
              fVar39 = *(float *)(unaff_EBP - 0x12cc);
              *(undefined1 *)(unaff_EBP - 0x1431) = 0xb;
              FUN_0041ff00(pvVar21,fVar39,uVar11,iVar8 + -1,(undefined1 *)(unaff_EBP - 0x1434),
                           (int)fVar40);
              if (0.92 < *(float *)(unaff_EBP - 0x12ec)) {
                iVar8 = FUN_00406100(pvVar21,*(uint *)(unaff_EBP - 0x12cc),
                                     *(uint *)(unaff_EBP - 0x12e4),(int)fVar40);
                *(int *)(unaff_EBP - 0x12d8) = *(int *)(iVar8 + 0x1c) + *(int *)(iVar8 + 0x10);
              }
              iVar8 = *(int *)(unaff_EBP - 0x12d4);
              if (iVar8 < *(int *)(unaff_EBP - 0x12d8)) {
                do {
                  puVar12 = FUN_00405fd0(pvVar21,*(uint *)(unaff_EBP - 0x12cc),
                                         *(uint *)(unaff_EBP - 0x12e4),iVar8,(int)fVar40);
                  if ((puVar12[3] & 0x40) == 0) {
                    FUN_0041ff00(pvVar21,*(float *)(unaff_EBP - 0x12cc),
                                 *(uint *)(unaff_EBP - 0x12e4),*(int *)(unaff_EBP - 0x12d4),
                                 (undefined1 *)&DAT_005842c0,(int)fVar40);
                  }
                  iVar8 = *(int *)(unaff_EBP - 0x12d4) + 1;
                  *(int *)(unaff_EBP - 0x12d4) = iVar8;
                } while (iVar8 < *(int *)(unaff_EBP - 0x12d8));
              }
            }
          }
          uVar11 = *(uint *)(unaff_EBP - 0x12cc);
          uVar14 = *(int *)(unaff_EBP - 0x12e4) + 1;
          iVar8 = *(int *)(unaff_EBP - 0x132c) + 0x100;
          *(uint *)(unaff_EBP - 0x12e4) = uVar14;
        } while ((int)uVar14 < iVar8);
      }
      uVar11 = uVar11 + 1;
      *(uint *)(unaff_EBP - 0x12cc) = uVar11;
      if (*(int *)(unaff_EBP - 0x1370) <= (int)uVar11) break;
      uVar14 = *(uint *)(unaff_EBP - 0x132c);
    }
  }
  *(undefined4 *)(unaff_EBP - 0x13a4) = 0;
  uVar15 = FUN_00407be0((undefined4 *)0x0,(undefined4 *)0x0);
  *(undefined4 *)(unaff_EBP - 0x13a8) = uVar15;
  uVar11 = *(uint *)(unaff_EBP - 0x1358);
  *(undefined1 *)(unaff_EBP - 4) = 3;
  *(uint *)(unaff_EBP - 0x12e4) = uVar11;
  if ((int)uVar11 < (int)(uVar11 + 0x100)) {
    fVar39 = *(float *)(unaff_EBP - 0x132c);
    *(undefined4 *)(unaff_EBP - 0x12dc) = 200;
    iVar8 = (int)fVar39 + 0x100;
    do {
      *(float *)(unaff_EBP - 0x12cc) = fVar39;
      if ((int)fVar39 < iVar8) {
        do {
          fVar38 = FUN_0052cd50(pvVar21,uVar11,fVar39,(int)fVar40);
          *(float *)(unaff_EBP - 0x12d0) = (float)fVar38;
          fVar39 = 1.0 - *(float *)(unaff_EBP - 0x12d0) * 50.0;
          *(float *)(unaff_EBP - 0x12f0) = fVar39;
          if (0.0 <= fVar39) {
            fVar38 = FUN_004d19f0(pvVar21,*(uint *)(unaff_EBP - 0x12e4),
                                  *(uint *)(unaff_EBP - 0x12cc));
            *(float *)(unaff_EBP - 0x12d0) = (float)fVar38;
            if (*(float *)(unaff_EBP - 0x12d0) <= 0.95) {
              fVar38 = (float10)FUN_004f9b70(pvVar21,*(uint *)(unaff_EBP - 0x12e4),
                                             *(float *)(unaff_EBP - 0x12cc),(int)fVar40);
              *(float *)(unaff_EBP - 0x12d0) = (float)fVar38;
              fVar39 = *(float *)(unaff_EBP - 0x12d0);
              *(float *)(unaff_EBP - 0x1304) = fVar39;
              if (fVar39 < 0.0) {
                fVar39 = 0.0;
                *(undefined4 *)(unaff_EBP - 0x1304) = 0;
              }
              iVar8 = ((int)fVar39 / 5) * 5;
              fVar43 = (float)iVar8;
              *(int *)(unaff_EBP - 0x12d0) = iVar8;
              fVar39 = (fVar39 - fVar43) / 5.0;
              if (0.5 <= fVar39) {
                fVar39 = 1.0 - (fVar39 - 0.5) * 4.0;
                *(float *)(unaff_EBP - 0x12ec) = fVar39;
                if (fVar39 < 0.0) {
                  fVar39 = (fVar39 + 1.0) * (fVar39 + 1.0) - 1.0;
                  goto LAB_0051bd95;
                }
              }
              else {
                fVar39 = fVar39 * 2.0;
LAB_0051bd95:
                *(float *)(unaff_EBP - 0x12ec) = fVar39;
              }
              *(int *)(unaff_EBP - 0x12f8) = iVar8;
              if (fVar39 < 0.0) {
                *(int *)(unaff_EBP - 0x12f8) = (int)(fVar43 - fVar39 * 5.0);
              }
              iVar9 = (int)((fVar43 - fVar39 * 5.0) + 2.0);
              *(int *)(unaff_EBP - 0x12d8) = iVar9;
              if (iVar9 <= iVar8) {
                do {
                  puVar12 = FUN_00405fd0(pvVar21,*(uint *)(unaff_EBP - 0x12e4),
                                         *(uint *)(unaff_EBP - 0x12cc),iVar9,(int)fVar40);
                  if ((puVar12[3] & 0x40) == 0) {
                    fVar39 = *(float *)(unaff_EBP - 0x12ec);
                    fVar46 = 1.0 - fVar39;
                    *(undefined4 *)(unaff_EBP - 0x1fc) = 0;
                    *(undefined4 *)(unaff_EBP - 0x1f8) = 0;
                    *(undefined8 *)(unaff_EBP - 0x168) = *(undefined8 *)(unaff_EBP - 0x1fc);
                    fVar43 = *(float *)(unaff_EBP - 0x168);
                    fVar44 = *(float *)(unaff_EBP - 0x164);
                    *(undefined4 *)(unaff_EBP - 0x214) = 0;
                    *(undefined4 *)(unaff_EBP - 0x210) = 0;
                    *(undefined8 *)(unaff_EBP - 0x90) = *(undefined8 *)(unaff_EBP - 0x214);
                    fVar43 = fVar43 * fVar39;
                    *(float *)(unaff_EBP - 0x90) = fVar46 * *(float *)(unaff_EBP - 0x90);
                    fVar45 = *(float *)(unaff_EBP - 0x8c);
                    *(undefined4 *)(unaff_EBP - 500) = 0;
                    uVar15 = *(undefined4 *)(unaff_EBP - 500);
                    *(float *)(unaff_EBP - 0x8c) = fVar46 * fVar45;
                    *(undefined8 *)(unaff_EBP - 0x114) = *(undefined8 *)(unaff_EBP - 0x90);
                    fVar45 = *(float *)(unaff_EBP - 0x114);
                    *(undefined4 *)(unaff_EBP - 0x160) = uVar15;
                    fVar47 = *(float *)(unaff_EBP - 0x160);
                    fVar44 = fVar44 * fVar39;
                    *(undefined4 *)(unaff_EBP - 0x20c) = 0x437f0000;
                    uVar15 = *(undefined4 *)(unaff_EBP - 0x20c);
                    *(float *)(unaff_EBP - 0x114) = fVar45 + fVar43;
                    fVar45 = *(float *)(unaff_EBP - 0x110);
                    *(undefined4 *)(unaff_EBP - 0x88) = uVar15;
                    fVar47 = fVar47 * fVar39;
                    *(float *)(unaff_EBP - 0x88) = fVar46 * *(float *)(unaff_EBP - 0x88);
                    *(undefined4 *)(unaff_EBP - 0x10c) = *(undefined4 *)(unaff_EBP - 0x88);
                    *(float *)(unaff_EBP - 0x110) = fVar45 + fVar44;
                    fVar39 = *(float *)(unaff_EBP - 0x10c);
                    *(float *)(unaff_EBP - 0x168) = fVar43;
                    *(float *)(unaff_EBP - 0x164) = fVar44;
                    *(float *)(unaff_EBP - 0x160) = fVar47;
                    iVar8 = 0;
                    *(float *)(unaff_EBP - 0x10c) = fVar39 + fVar47;
                    do {
                      iVar9 = iVar8 * 4;
                      iVar8 = iVar8 + 1;
                      *(char *)((unaff_EBP - 0x1419) + iVar8) =
                           (char)(int)*(float *)((unaff_EBP - 0x114) + iVar9);
                    } while (iVar8 < 3);
                    *(undefined2 *)(unaff_EBP - 0x13fc) = *(undefined2 *)(unaff_EBP - 0x1418);
                    *(undefined1 *)(unaff_EBP - 0x13fa) = *(undefined1 *)(unaff_EBP - 0x1416);
                    iVar8 = *(int *)(unaff_EBP - 0x12d8);
                    uVar11 = *(uint *)(unaff_EBP - 0x12cc);
                    *(undefined1 *)(unaff_EBP - 0x13f9) = 2;
                    FUN_0041ff00(pvVar21,*(float *)(unaff_EBP - 0x12e4),uVar11,iVar8,
                                 (undefined1 *)(unaff_EBP - 0x13fc),(int)fVar40);
                  }
                  iVar8 = *(int *)(unaff_EBP - 0x12d0);
                  iVar9 = *(int *)(unaff_EBP - 0x12d8) + 1;
                  *(int *)(unaff_EBP - 0x12d8) = iVar9;
                } while (iVar9 <= iVar8);
              }
              if (((iVar8 <= *(int *)(unaff_EBP - 0x12f8)) &&
                  (puVar12 = FUN_00405fd0(pvVar21,*(uint *)(unaff_EBP - 0x12e4),
                                          *(uint *)(unaff_EBP - 0x12cc),*(int *)(unaff_EBP - 0x12f8)
                                          ,(int)fVar40), (puVar12[3] & 0x1f) != 2)) &&
                 (puVar12 = FUN_00405fd0(pvVar21,*(uint *)(unaff_EBP - 0x12e4),
                                         *(uint *)(unaff_EBP - 0x12cc),*(int *)(unaff_EBP - 0x12f8),
                                         (int)fVar40), (puVar12[3] & 0x40) == 0)) {
                pfVar16 = FUN_0052d030(pvVar21,(float *)(unaff_EBP - 0x710),
                                       *(float *)(unaff_EBP - 0x12e4),*(uint *)(unaff_EBP - 0x12cc),
                                       *(int *)(unaff_EBP - 0x12f8),(int)fVar40);
                iVar8 = 0;
                do {
                  pfVar1 = pfVar16 + iVar8;
                  iVar8 = iVar8 + 1;
                  *(char *)((unaff_EBP - 0x13d5) + iVar8) = (char)(int)*pfVar1;
                } while (iVar8 < 3);
                *(undefined2 *)(unaff_EBP - 0x1414) = *(undefined2 *)(unaff_EBP - 0x13d4);
                *(undefined1 *)(unaff_EBP - 0x1412) = *(undefined1 *)(unaff_EBP - 0x13d2);
                iVar8 = *(int *)(unaff_EBP - 0x12f8);
                uVar11 = *(uint *)(unaff_EBP - 0x12cc);
                *(undefined1 *)(unaff_EBP - 0x1411) = 3;
                FUN_0041ff00(pvVar21,*(float *)(unaff_EBP - 0x12e4),uVar11,iVar8,
                             (undefined1 *)(unaff_EBP - 0x1414),(int)fVar40);
                iVar8 = rand();
                if (iVar8 % *(int *)(unaff_EBP - 0x12dc) == 0) {
                  *(undefined4 *)(unaff_EBP - 700) = *(undefined4 *)(unaff_EBP - 0x12e4);
                  *(undefined4 *)(unaff_EBP - 0x2b8) = *(undefined4 *)(unaff_EBP - 0x12cc);
                  *(undefined4 *)(unaff_EBP - 0x2b4) = *(undefined4 *)(unaff_EBP - 0x12f8);
                  iVar9 = FUN_004d9b70(*(undefined4 **)(unaff_EBP - 0x13a8),
                                       (undefined4 *)(*(undefined4 **)(unaff_EBP - 0x13a8))[1],
                                       (undefined4 *)(unaff_EBP - 700));
                  iVar8 = *(int *)(unaff_EBP - 0x13a4);
                  if (iVar8 == 0xccccccb) goto LAB_0051d544;
                  *(int *)(*(int *)(unaff_EBP - 0x13a8) + 4) = iVar9;
                  piVar23 = *(int **)(iVar9 + 4);
                  *(int *)(unaff_EBP - 0x13a4) = iVar8 + 1;
                  *piVar23 = iVar9;
                }
              }
              fVar39 = 1.0 - *(float *)(unaff_EBP - 0x12f0);
              iVar8 = *(int *)(unaff_EBP - 0x12cc);
              *(float *)(unaff_EBP - 0x12f0) = 1.0 - fVar39 * fVar39 * fVar39;
              dVar41 = (double)*(int *)(unaff_EBP - 0x12e4) * 0.02 + 55432.0;
              fVar38 = FUN_004d5d30(SUB84(dVar41,0),(int)((ulonglong)dVar41 >> 0x20),
                                    (double)iVar8 * 0.02 + 974.0);
              *(float *)(unaff_EBP - 0x12d0) = (float)fVar38;
              fVar39 = *(float *)(unaff_EBP - 0x12d0);
              fVar43 = *(float *)(unaff_EBP - 0x12f0);
              iVar8 = *(int *)(unaff_EBP - 0x12f8) + 1;
              fVar44 = *(float *)(unaff_EBP - 0x1304);
              *(int *)(unaff_EBP - 0x12ec) = iVar8;
              iVar9 = (int)((fVar39 + 1.0) * 2.0 + fVar43 * 5.0 + fVar44);
              *(int *)(unaff_EBP - 0x12d0) = iVar9;
              if (iVar8 < iVar9) {
                do {
                  puVar12 = FUN_00405fd0(pvVar21,*(uint *)(unaff_EBP - 0x12e4),
                                         *(uint *)(unaff_EBP - 0x12cc),iVar8,(int)fVar40);
                  if ((puVar12[3] & 0x40) == 0) {
                    FUN_0041ff00(pvVar21,*(float *)(unaff_EBP - 0x12e4),
                                 *(uint *)(unaff_EBP - 0x12cc),*(int *)(unaff_EBP - 0x12ec),
                                 (undefined1 *)&DAT_005842c0,(int)fVar40);
                  }
                  iVar8 = *(int *)(unaff_EBP - 0x12ec) + 1;
                  *(int *)(unaff_EBP - 0x12ec) = iVar8;
                } while (iVar8 < *(int *)(unaff_EBP - 0x12d0));
              }
            }
          }
          uVar11 = *(uint *)(unaff_EBP - 0x12e4);
          fVar39 = (float)(*(int *)(unaff_EBP - 0x12cc) + 1);
          iVar8 = *(int *)(unaff_EBP - 0x132c) + 0x100;
          *(float *)(unaff_EBP - 0x12cc) = fVar39;
        } while ((int)fVar39 < iVar8);
      }
      uVar11 = uVar11 + 1;
      *(uint *)(unaff_EBP - 0x12e4) = uVar11;
      if (*(int *)(unaff_EBP - 0x1370) <= (int)uVar11) break;
      fVar39 = *(float *)(unaff_EBP - 0x132c);
    } while( true );
  }
  iVar8 = *(int *)(unaff_EBP - 0x1344);
  iVar9 = *(int *)(unaff_EBP - 0x137c);
  if (*(char *)(iVar8 + 0x18 + iVar9) == '\x03') {
    FUN_00500300();
    iVar8 = *(int *)(unaff_EBP - 0x1344);
    iVar9 = *(int *)(unaff_EBP - 0x137c);
  }
  if (*(char *)(iVar8 + 0x18 + iVar9) == '\x05') {
    FUN_00500300();
  }
  piVar23 = *(int **)(unaff_EBP - 0x13a8);
  piVar22 = (int *)*piVar23;
  *(int **)(unaff_EBP - 0x12d0) = piVar22;
  if (piVar22 != piVar23) {
    do {
      *(int *)(unaff_EBP - 0x12dc) = piVar22[2];
      *(int *)(unaff_EBP - 0x12cc) = piVar22[3];
      *(int *)(unaff_EBP - 0x12f0) = piVar22[4];
      iVar8 = rand();
      *(int *)(unaff_EBP - 0x1338) = iVar8 % 3 + 2;
      iVar8 = rand();
      *(int *)(unaff_EBP - 0x1328) = iVar8 % 3 + 2;
      iVar9 = rand();
      iVar8 = *(int *)(unaff_EBP - 0x1338);
      *(int *)(unaff_EBP - 0x1368) = iVar9 % 3 + 2;
      iVar10 = *(int *)(unaff_EBP - 0x12dc);
      iVar9 = iVar10 - iVar8;
      iVar8 = iVar8 + iVar10;
      *(int *)(unaff_EBP - 0x1314) = iVar9;
      *(int *)(unaff_EBP - 0x1350) = iVar8;
      if (iVar9 <= iVar8) {
        iVar8 = *(int *)(unaff_EBP - 0x1328);
        iVar17 = *(int *)(unaff_EBP - 0x12cc);
        *(int *)(unaff_EBP - 0x1348) = *(int *)(unaff_EBP - 0x12cc) - iVar8;
        *(int *)(unaff_EBP - 0x12dc) = iVar8 + iVar17;
        iVar10 = iVar9 - iVar10;
        *(int *)(unaff_EBP - 0x12f4) = iVar10;
        do {
          iVar8 = *(int *)(unaff_EBP - 0x1348);
          *(int *)(unaff_EBP - 0x12d8) = iVar8;
          if (iVar8 <= *(int *)(unaff_EBP - 0x12dc)) {
            iVar10 = *(int *)(unaff_EBP - 0x12f0);
            iVar17 = *(int *)(unaff_EBP - 0x1368);
            *(int *)(unaff_EBP - 0x12f8) = iVar10;
            *(int *)(unaff_EBP - 0x12f8) = *(int *)(unaff_EBP - 0x12f8) + iVar17 * -2;
            fVar40 = *(float *)(unaff_EBP - 0x1308);
            iVar34 = *(int *)(unaff_EBP - 0x12cc);
            *(int *)(unaff_EBP - 0x1334) = iVar17 * 2 + iVar10;
            pvVar21 = *(void **)(unaff_EBP - 0x12e0);
            *(int *)(unaff_EBP - 0x1304) = iVar8 - iVar34;
            do {
              iVar10 = *(int *)(unaff_EBP - 0x1334);
              *(int *)(unaff_EBP - 0x12d4) = iVar10;
              if (*(int *)(unaff_EBP - 0x12f8) <= iVar10) {
                fVar38 = FUN_004d5d30(SUB84((double)iVar9 * 0.05,0),
                                      (int)((ulonglong)((double)iVar9 * 0.05) >> 0x20),
                                      (double)iVar8 * 0.05);
                *(float *)(unaff_EBP - 0x1320) = (float)fVar38;
                fVar39 = (float)*(int *)(unaff_EBP - 0x12f4) / (float)*(int *)(unaff_EBP - 0x1338);
                iVar8 = *(int *)(unaff_EBP - 0x1368);
                fVar45 = (float)*(int *)(unaff_EBP - 0x1304) / (float)*(int *)(unaff_EBP - 0x1328);
                iVar9 = *(int *)(unaff_EBP - 0x12d4);
                fVar43 = *(float *)(unaff_EBP - 0x1320) * 0.8;
                iVar10 = *(int *)(unaff_EBP - 0x12f8);
                *(float *)(unaff_EBP - 0x15a8) = fVar39;
                *(float *)(unaff_EBP - 0x15a4) = fVar45;
                fVar44 = (float)iVar8;
                fVar39 = fVar45 * fVar45 + fVar39 * fVar39;
                iVar8 = iVar9 - *(int *)(unaff_EBP - 0x12f0);
                *(float *)(unaff_EBP - 0x1360) = fVar43;
                *(float *)(unaff_EBP - 0x1320) = fVar44;
                *(float *)(unaff_EBP - 0x12e4) = fVar39;
                *(int *)(unaff_EBP - 0x12ec) = iVar8;
                do {
                  fVar45 = (float)iVar8 / fVar44 + fVar43;
                  if (fVar45 * fVar45 + fVar39 <= 1.0) {
                    puVar12 = FUN_00405fd0(pvVar21,*(uint *)(unaff_EBP - 0x1314),
                                           *(uint *)(unaff_EBP - 0x12d8),iVar9,(int)fVar40);
                    if (((~((byte)puVar12[3] >> 7) & 1) != 0) && ((puVar12[3] & 0x40) == 0)) {
                      pfVar16 = FUN_0052d030(pvVar21,(float *)(unaff_EBP - 0x728),
                                             *(float *)(unaff_EBP - 0x1314),
                                             *(uint *)(unaff_EBP - 0x12d8),
                                             *(int *)(unaff_EBP - 0x12d4),(int)fVar40);
                      iVar8 = 0;
                      do {
                        pfVar1 = pfVar16 + iVar8;
                        iVar8 = iVar8 + 1;
                        *(char *)((unaff_EBP - 0x1429) + iVar8) = (char)(int)*pfVar1;
                      } while (iVar8 < 3);
                      *(undefined2 *)(unaff_EBP - 0x1424) = *(undefined2 *)(unaff_EBP - 0x1428);
                      *(undefined1 *)(unaff_EBP - 0x1422) = *(undefined1 *)(unaff_EBP - 0x1426);
                      iVar8 = *(int *)(unaff_EBP - 0x12d4);
                      uVar11 = *(uint *)(unaff_EBP - 0x12d8);
                      *(undefined1 *)(unaff_EBP - 0x1421) = 6;
                      FUN_0041ff00(pvVar21,*(float *)(unaff_EBP - 0x1314),uVar11,iVar8,
                                   (undefined1 *)(unaff_EBP - 0x1424),(int)fVar40);
                    }
                    fVar39 = *(float *)(unaff_EBP - 0x12e4);
                    fVar43 = *(float *)(unaff_EBP - 0x1360);
                    fVar44 = *(float *)(unaff_EBP - 0x1320);
                    iVar9 = *(int *)(unaff_EBP - 0x12d4);
                    iVar8 = *(int *)(unaff_EBP - 0x12ec);
                    iVar10 = *(int *)(unaff_EBP - 0x12f8);
                  }
                  iVar9 = iVar9 + -1;
                  iVar8 = iVar8 + -1;
                  *(int *)(unaff_EBP - 0x12d4) = iVar9;
                  *(int *)(unaff_EBP - 0x12ec) = iVar8;
                } while (iVar10 <= iVar9);
                iVar8 = *(int *)(unaff_EBP - 0x12d8);
                iVar9 = *(int *)(unaff_EBP - 0x1314);
              }
              *(int *)(unaff_EBP - 0x1304) = *(int *)(unaff_EBP - 0x1304) + 1;
              iVar8 = iVar8 + 1;
              *(int *)(unaff_EBP - 0x12d8) = iVar8;
            } while (iVar8 <= *(int *)(unaff_EBP - 0x12dc));
            iVar10 = *(int *)(unaff_EBP - 0x12f4);
          }
          iVar9 = iVar9 + 1;
          iVar10 = iVar10 + 1;
          *(int *)(unaff_EBP - 0x1314) = iVar9;
          *(int *)(unaff_EBP - 0x12f4) = iVar10;
        } while (iVar9 <= *(int *)(unaff_EBP - 0x1350));
        piVar22 = *(int **)(unaff_EBP - 0x12d0);
      }
      piVar22 = (int *)*piVar22;
      *(int **)(unaff_EBP - 0x12d0) = piVar22;
    } while (piVar22 != (int *)*(int *)(unaff_EBP - 0x13a8));
  }
  piVar23 = *(int **)(unaff_EBP - 0x13c4);
  piVar22 = (int *)*piVar23;
  *(int **)(unaff_EBP - 0x12e4) = piVar22;
  if (piVar22 != piVar23) {
    do {
      *(int *)(unaff_EBP - 0x1350) = piVar22[2];
      *(int *)(unaff_EBP - 0x1304) = piVar22[3];
      *(int *)(unaff_EBP - 0x1328) = piVar22[4];
      uVar11 = rand();
      uVar11 = uVar11 & 0x80000003;
      if ((int)uVar11 < 0) {
        uVar11 = (uVar11 - 1 | 0xfffffffc) + 1;
      }
      *(uint *)(unaff_EBP - 0x12dc) = uVar11 + 4;
      uVar11 = rand();
      uVar11 = uVar11 & 0x80000003;
      if ((int)uVar11 < 0) {
        uVar11 = (uVar11 - 1 | 0xfffffffc) + 1;
      }
      *(uint *)(unaff_EBP - 0x12f0) = uVar11 + 4;
      iVar9 = rand();
      iVar8 = *(int *)(unaff_EBP - 0x12dc);
      *(int *)(unaff_EBP - 0x12d0) = iVar9 % 6 + 4;
      iVar10 = *(int *)(unaff_EBP - 0x1350);
      iVar9 = iVar10 - iVar8;
      iVar8 = iVar8 + iVar10;
      *(int *)(unaff_EBP - 0x1314) = iVar9;
      *(int *)(unaff_EBP - 0x133c) = iVar8;
      if (iVar9 <= iVar8) {
        iVar8 = *(int *)(unaff_EBP - 0x12f0);
        iVar17 = *(int *)(unaff_EBP - 0x1304);
        *(int *)(unaff_EBP - 0x1350) = *(int *)(unaff_EBP - 0x1304) - iVar8;
        *(int *)(unaff_EBP - 0x12cc) = iVar8 + iVar17;
        iVar10 = iVar9 - iVar10;
        *(int *)(unaff_EBP - 0x12ec) = iVar10;
        do {
          iVar8 = *(int *)(unaff_EBP - 0x1350);
          *(int *)(unaff_EBP - 0x12d8) = iVar8;
          if (iVar8 <= *(int *)(unaff_EBP - 0x12cc)) {
            iVar10 = *(int *)(unaff_EBP - 0x1328);
            iVar17 = *(int *)(unaff_EBP - 0x12d0);
            *(int *)(unaff_EBP - 0x12f4) = iVar10;
            *(int *)(unaff_EBP - 0x12f4) = *(int *)(unaff_EBP - 0x12f4) + iVar17 * -2;
            fVar40 = *(float *)(unaff_EBP - 0x1308);
            iVar34 = *(int *)(unaff_EBP - 0x1304);
            *(int *)(unaff_EBP - 0x1334) = iVar17 * 2 + iVar10;
            pvVar21 = *(void **)(unaff_EBP - 0x12e0);
            *(int *)(unaff_EBP - 0x1360) = iVar8 - iVar34;
            do {
              iVar10 = *(int *)(unaff_EBP - 0x1334);
              *(int *)(unaff_EBP - 0x12f8) = iVar10;
              if (*(int *)(unaff_EBP - 0x12f4) <= iVar10) {
                fVar38 = FUN_004d5d30(SUB84((double)iVar9 * 0.05,0),
                                      (int)((ulonglong)((double)iVar9 * 0.05) >> 0x20),
                                      (double)iVar8 * 0.05);
                *(float *)(unaff_EBP - 0x1348) = (float)fVar38;
                fVar44 = (float)*(int *)(unaff_EBP - 0x12ec) / (float)*(int *)(unaff_EBP - 0x12dc);
                iVar8 = *(int *)(unaff_EBP - 0x12d0);
                fVar45 = (float)*(int *)(unaff_EBP - 0x1360) / (float)*(int *)(unaff_EBP - 0x12f0);
                iVar10 = *(int *)(unaff_EBP - 0x12f8);
                fVar43 = *(float *)(unaff_EBP - 0x1348) * 0.8;
                iVar9 = *(int *)(unaff_EBP - 0x12f4);
                *(float *)(unaff_EBP - 0x159c) = fVar44;
                *(float *)(unaff_EBP - 0x1598) = fVar45;
                fVar39 = (float)iVar8;
                fVar44 = fVar45 * fVar45 + fVar44 * fVar44;
                iVar8 = iVar10 - *(int *)(unaff_EBP - 0x1328);
                *(float *)(unaff_EBP - 0x1368) = fVar43;
                *(float *)(unaff_EBP - 0x12d4) = fVar39;
                *(float *)(unaff_EBP - 0x1338) = fVar44;
                *(int *)(unaff_EBP - 0x1320) = iVar8;
                do {
                  fVar45 = (float)iVar8 / fVar39 + fVar43;
                  if (fVar45 * fVar45 + fVar44 <= 1.0) {
                    puVar12 = FUN_00405fd0(pvVar21,*(uint *)(unaff_EBP - 0x1314),
                                           *(uint *)(unaff_EBP - 0x12d8),iVar10,(int)fVar40);
                    if ((~((byte)puVar12[3] >> 7) & 1) != 0) {
                      pfVar16 = FUN_0052d030(pvVar21,(float *)(unaff_EBP - 0x740),
                                             *(float *)(unaff_EBP - 0x1314),
                                             *(uint *)(unaff_EBP - 0x12d8),
                                             *(int *)(unaff_EBP - 0x12f8),(int)fVar40);
                      iVar8 = 0;
                      do {
                        pfVar1 = pfVar16 + iVar8;
                        iVar8 = iVar8 + 1;
                        *(char *)((unaff_EBP - 0x13e5) + iVar8) = (char)(int)*pfVar1;
                      } while (iVar8 < 3);
                      *(undefined2 *)(unaff_EBP - 0x142c) = *(undefined2 *)(unaff_EBP - 0x13e4);
                      *(undefined1 *)(unaff_EBP - 0x142a) = *(undefined1 *)(unaff_EBP - 0x13e2);
                      iVar8 = *(int *)(unaff_EBP - 0x12f8);
                      uVar11 = *(uint *)(unaff_EBP - 0x12d8);
                      *(undefined1 *)(unaff_EBP - 0x1429) = 0x26;
                      FUN_0041ff00(pvVar21,*(float *)(unaff_EBP - 0x1314),uVar11,iVar8,
                                   (undefined1 *)(unaff_EBP - 0x142c),(int)fVar40);
                    }
                    iVar9 = *(int *)(unaff_EBP - 0x12f4);
                    iVar8 = *(int *)(unaff_EBP - 0x1320);
                    iVar10 = *(int *)(unaff_EBP - 0x12f8);
                    fVar39 = *(float *)(unaff_EBP - 0x12d4);
                    fVar43 = *(float *)(unaff_EBP - 0x1368);
                    fVar44 = *(float *)(unaff_EBP - 0x1338);
                  }
                  iVar10 = iVar10 + -1;
                  iVar8 = iVar8 + -1;
                  *(int *)(unaff_EBP - 0x12f8) = iVar10;
                  *(int *)(unaff_EBP - 0x1320) = iVar8;
                } while (iVar9 <= iVar10);
                iVar8 = *(int *)(unaff_EBP - 0x12d8);
                iVar9 = *(int *)(unaff_EBP - 0x1314);
              }
              *(int *)(unaff_EBP - 0x1360) = *(int *)(unaff_EBP - 0x1360) + 1;
              iVar8 = iVar8 + 1;
              *(int *)(unaff_EBP - 0x12d8) = iVar8;
            } while (iVar8 <= *(int *)(unaff_EBP - 0x12cc));
            iVar10 = *(int *)(unaff_EBP - 0x12ec);
          }
          iVar9 = iVar9 + 1;
          iVar10 = iVar10 + 1;
          *(int *)(unaff_EBP - 0x1314) = iVar9;
          *(int *)(unaff_EBP - 0x12ec) = iVar10;
        } while (iVar9 <= *(int *)(unaff_EBP - 0x133c));
        piVar22 = *(int **)(unaff_EBP - 0x12e4);
      }
      piVar22 = (int *)*piVar22;
      *(int **)(unaff_EBP - 0x12e4) = piVar22;
    } while (piVar22 != (int *)*(int *)(unaff_EBP - 0x13c4));
  }
  pvVar21 = *(void **)(unaff_EBP - 0x12e0);
  iVar8 = *(int *)(unaff_EBP - 0x135c);
  if ((*(int *)((int)pvVar21 + 0xa4) == 0) &&
     (iVar8 == (int)((int)*(float *)((int)pvVar21 + 0x8000f0) +
                    ((int)*(float *)((int)pvVar21 + 0x8000f0) >> 0x1f & 0xffU)) >> 8)) {
    uVar11 = (uint)*(float *)((int)pvVar21 + 0x8000f4);
    if ((*(int *)(unaff_EBP - 0x1364) == (int)(uVar11 + ((int)uVar11 >> 0x1f & 0xffU)) >> 8) &&
       (iVar8 = FUN_00406100(pvVar21,(int)*(float *)((int)pvVar21 + 0x8000f0),uVar11,(int)fVar40),
       iVar8 != 0)) {
      *(int *)(unaff_EBP - 0x133c) = *(int *)(iVar8 + 0x1c) + *(int *)(iVar8 + 0x10);
      if ((int)(*(int *)((int)pvVar21 + 0x24) - *(int *)((int)pvVar21 + 0x20) & 0xfffffffcU) <
          0x212d) {
        iVar8 = 0;
      }
      else {
        iVar8 = *(int *)(*(int *)((int)pvVar21 + 0x20) + 0x212c);
      }
      *(int *)(unaff_EBP - 0x1304) = iVar8;
      *(undefined4 *)(unaff_EBP - 0x151c) = 0;
      *(undefined4 *)(unaff_EBP - 0x1518) = 0;
      *(undefined4 *)(unaff_EBP - 0x1514) = 0;
      *(undefined4 *)(unaff_EBP - 0x1510) = 0;
      iVar9 = 0;
      do {
        pfVar16 = (float *)((unaff_EBP - 0x151c) + iVar9);
        iVar9 = iVar9 + 4;
        *(int *)((unaff_EBP - 0x1668) + iVar9) = (int)*pfVar16;
      } while (iVar9 < 0x10);
      iVar9 = *(int *)(unaff_EBP - 0x1304);
      *(int *)(unaff_EBP - 0x2b0) =
           (int)*(float *)((int)pvVar21 + 0x8000f0) - *(int *)(iVar8 + 0x44) / 2;
      iVar8 = *(int *)(iVar9 + 0x48);
      fVar39 = *(float *)((int)pvVar21 + 0x8000f4);
      *(undefined4 *)(unaff_EBP - 0x2a8) = *(undefined4 *)(unaff_EBP - 0x133c);
      pvVar19 = *(void **)(unaff_EBP - 0x1304);
      *(int *)(unaff_EBP - 0x2ac) = (int)fVar39 - iVar8 / 2;
      FUN_00524540(pvVar21,pvVar19,(uint *)(unaff_EBP - 0x2b0),0,6,0,(int)fVar40,'\x01',
                   (int *)(unaff_EBP - 0x1664),0);
    }
    iVar8 = *(int *)(unaff_EBP - 0x135c);
  }
  uVar11 = *(int *)(unaff_EBP - 0x1364) + iVar8 & 0x80000001;
  if ((int)uVar11 < 0) {
    uVar11 = (uVar11 - 1 | 0xfffffffe) + 1;
  }
  *(uint *)(unaff_EBP - 0x1360) = uVar11;
  if (uVar11 != 0) {
    *(undefined4 *)(unaff_EBP - 0x1338) = 0;
    uVar48 = FUN_0054a946();
    *(int *)(unaff_EBP - 0x12d0) = (int)uVar48;
    *(int *)(unaff_EBP - 0x12dc) = (int)(uVar48 >> 0x20);
    do {
      *(undefined8 *)(unaff_EBP - 0x14e0) = 0;
      iVar8 = rand();
      uVar14 = *(int *)(unaff_EBP - 0x132c) + 0x30 + iVar8 % 0xa0;
      uVar11 = *(uint *)(unaff_EBP - 0x12d0);
      iVar8 = *(int *)(unaff_EBP - 0x12dc);
      *(uint *)(unaff_EBP - 0x1328) = uVar14 * 0x10000 - *(uint *)(unaff_EBP - 0x12d0);
      *(uint *)(unaff_EBP - 0x12f0) =
           ((((int)uVar14 >> 0x1f) << 0x10 | uVar14 >> 0x10) - iVar8) -
           (uint)(uVar14 * 0x10000 < uVar11);
      iVar8 = rand();
      uVar11 = *(int *)(unaff_EBP - 0x1358) + 0x30 + iVar8 % 0xa0;
      iVar8 = uVar11 * 0x10000 - *(uint *)(unaff_EBP - 0x12d0);
      iVar9 = ((((int)uVar11 >> 0x1f) << 0x10 | uVar11 >> 0x10) - *(int *)(unaff_EBP - 0x12dc)) -
              (uint)(uVar11 * 0x10000 < *(uint *)(unaff_EBP - 0x12d0));
      *(int *)(unaff_EBP - 0x1334) = iVar8;
      *(int *)(unaff_EBP - 0x1c0) = iVar8;
      *(undefined4 *)(unaff_EBP - 0x1b8) = *(undefined4 *)(unaff_EBP - 0x1328);
      *(undefined4 *)(unaff_EBP - 0x1b4) = *(undefined4 *)(unaff_EBP - 0x12f0);
      uVar15 = *(undefined4 *)(unaff_EBP - 0x14e0);
      *(int *)(unaff_EBP - 0x1bc) = iVar9;
      *(undefined4 *)(unaff_EBP - 0x1b0) = uVar15;
      uVar15 = *(undefined4 *)(unaff_EBP - 0x14dc);
      *(int *)(unaff_EBP - 0x1350) = iVar9;
      puVar26 = *(uint **)(unaff_EBP - 0x1300);
      *(undefined4 *)(unaff_EBP - 0x1ac) = uVar15;
      uVar11 = puVar26[6];
      if ((uVar11 == 1) || (uVar11 == 5)) {
        fVar38 = FUN_0052c820(puVar26,(uint *)(unaff_EBP - 0x1c0),(uint *)(unaff_EBP - 0x1b8));
        *(float *)(unaff_EBP - 0x133c) = (float)fVar38;
        fVar39 = 1.0 - *(float *)(unaff_EBP - 0x133c);
        if ((fVar39 <= 0.0) || (fVar39 * fVar39 <= 0.0)) goto LAB_0051ccba;
      }
      else {
LAB_0051ccba:
        fVar39 = fVar40;
        uVar49 = __alldiv(*(uint *)(unaff_EBP - 0x1328),*(uint *)(unaff_EBP - 0x12f0),0x10000,0);
        uVar11 = (uint)uVar49;
        uVar49 = __alldiv(*(uint *)(unaff_EBP - 0x1334),*(uint *)(unaff_EBP - 0x1350),0x10000,0);
        iVar8 = FUN_00406100(pvVar21,(uint)uVar49,uVar11,(int)fVar39);
        if (iVar8 != 0) {
          uVar11 = *(int *)(iVar8 + 0x1c) + *(int *)(iVar8 + 0x10);
          *(uint *)(unaff_EBP - 0x1b0) = uVar11 * 0x10000;
          *(uint *)(unaff_EBP - 0x1ac) = ((int)uVar11 >> 0x1f) << 0x10 | uVar11 >> 0x10;
        }
        cVar6 = FUN_004e0740(pvVar21,(int)fVar40,(uint *)(unaff_EBP - 0x1c0));
        if (cVar6 != '\0') {
          puVar20 = *(undefined4 **)(unaff_EBP - 0x1378);
          iVar8 = FUN_004f3ba0(puVar20,(undefined4 *)puVar20[1],(undefined4 *)(unaff_EBP - 0x1c0));
          puVar20[1] = iVar8;
          piVar23 = *(int **)(iVar8 + 4);
          *(undefined4 *)(unaff_EBP - 0x1374) = 1;
          *piVar23 = iVar8;
          break;
        }
      }
      iVar8 = *(int *)(unaff_EBP - 0x1338) + 1;
      *(int *)(unaff_EBP - 0x1338) = iVar8;
    } while (iVar8 < 10);
  }
  cVar6 = *(char *)(*(int *)(unaff_EBP - 0x1344) + 0x18 + *(int *)(unaff_EBP - 0x137c));
  if (((cVar6 != '\x04') && (cVar6 != '\x01')) && (cVar6 != '\x03')) {
    iVar8 = rand();
    iVar8 = iVar8 % 10;
    fVar40 = *(float *)(unaff_EBP - 0x1310);
    *(int *)(unaff_EBP - 0x1320) = iVar8;
    if (((0.6 < fVar40) || (fVar40 < 0.3)) &&
       ((fVar39 = *(float *)(unaff_EBP - 0x12fc), 0.7 < fVar39 ||
        ((fVar39 < 0.4 && ((0.2 < fVar39 || (fVar40 < 0.8)))))))) {
      iVar8 = iVar8 + 10;
      *(int *)(unaff_EBP - 0x1320) = iVar8;
    }
    if (0 < iVar8) {
      *(int *)(unaff_EBP - 0x133c) = *(int *)(unaff_EBP - 0x135c) << 7;
      *(int *)(unaff_EBP - 0x1350) = *(int *)(unaff_EBP - 0x1364) << 7;
      do {
        uVar11 = rand();
        uVar11 = uVar11 & 0x80000007;
        if ((int)uVar11 < 0) {
          uVar11 = (uVar11 - 1 | 0xfffffff8) + 1;
        }
        *(uint *)(unaff_EBP - 0x12fc) = uVar11 + 3;
        uVar14 = rand();
        uVar14 = uVar14 & 0x80000007;
        if ((int)uVar14 < 0) {
          uVar14 = (uVar14 - 1 | 0xfffffff8) + 1;
        }
        *(uint *)(unaff_EBP - 0x12ec) = uVar14 + 3;
        uVar14 = rand();
        uVar14 = uVar14 & 0x80000007;
        if ((int)uVar14 < 0) {
          uVar14 = (uVar14 - 1 | 0xfffffff8) + 1;
        }
        *(uint *)(unaff_EBP - 0x12d0) = uVar14 + 3;
        iVar8 = *(int *)(unaff_EBP - 0x12ec);
        iVar9 = rand();
        *(int *)(unaff_EBP - 0x12f4) =
             iVar9 % (int)((0x40 - (uVar11 + 3)) * 4) +
             (*(int *)(unaff_EBP - 0x133c) + *(int *)(unaff_EBP - 0x12fc)) * 2;
        iVar17 = rand();
        iVar9 = *(int *)(unaff_EBP - 0x1350);
        iVar10 = *(int *)(unaff_EBP - 0x12ec);
        uVar14 = *(uint *)(unaff_EBP - 0x12f4);
        pvVar21 = *(void **)(unaff_EBP - 0x12e0);
        fVar40 = (float)(int)uVar14 - *(float *)((int)pvVar21 + 0x8000f0);
        *(float *)(unaff_EBP - 0x170c) = fVar40;
        uVar11 = iVar17 % ((0x40 - iVar8) * 4) + (iVar9 + iVar10) * 2;
        *(uint *)(unaff_EBP - 0x12f8) = uVar11;
        fVar39 = (float)(int)uVar11 - *(float *)((int)pvVar21 + 0x8000f4);
        if (400.0 <= fVar39 * fVar39 + fVar40 * fVar40) {
          piVar23 = (int *)**(int **)(unaff_EBP - 0x1378);
          if (piVar23 != *(int **)(unaff_EBP - 0x1378)) {
            *(uint *)(unaff_EBP - 0x1334) = ((int)uVar11 >> 0x1f) << 0x10 | uVar11 >> 0x10;
            uVar14 = *(uint *)(unaff_EBP - 0x12f4);
            *(uint *)(unaff_EBP - 0x12f0) = ((int)uVar14 >> 0x1f) << 0x10 | uVar14 >> 0x10;
            *(uint *)(unaff_EBP - 0x12dc) = uVar14 << 0x10;
            do {
              iVar8 = *(int *)(unaff_EBP - 0x1334);
              uVar14 = piVar23[4];
              iVar9 = piVar23[5];
              *(uint *)(unaff_EBP - 0x13bc) = uVar11 * 0x10000 - piVar23[4];
              uVar33 = *(uint *)(unaff_EBP - 0x12dc);
              *(uint *)(unaff_EBP - 0x13b8) = (iVar8 - iVar9) - (uint)(uVar11 * 0x10000 < uVar14);
              iVar8 = *(int *)(unaff_EBP - 0x12f0);
              *(float *)(unaff_EBP - 0x1348) = (float)*(longlong *)(unaff_EBP - 0x13bc);
              uVar14 = piVar23[2];
              uVar32 = piVar23[2];
              *(undefined4 *)(unaff_EBP - 0x1348) = *(undefined4 *)(unaff_EBP - 0x1348);
              iVar9 = piVar23[3];
              fVar40 = *(float *)(unaff_EBP - 0x1348);
              *(uint *)(unaff_EBP - 0x13b4) = uVar33 - uVar32;
              *(uint *)(unaff_EBP - 0x13b0) = (iVar8 - iVar9) - (uint)(uVar33 < uVar14);
              fVar40 = fVar40 * 1.5258789e-05;
              *(float *)(unaff_EBP - 0x1348) = (float)*(longlong *)(unaff_EBP - 0x13b4);
              *(undefined4 *)(unaff_EBP - 0x1348) = *(undefined4 *)(unaff_EBP - 0x1348);
              fVar39 = *(float *)(unaff_EBP - 0x1348) * 1.5258789e-05;
              *(float *)(unaff_EBP - 0x15dc) = fVar39;
              if (fVar40 * fVar40 + fVar39 * fVar39 < 1600.0) goto LAB_0051d429;
              piVar23 = (int *)*piVar23;
            } while (piVar23 != (int *)*(int *)(unaff_EBP - 0x1378));
            uVar14 = *(uint *)(unaff_EBP - 0x12f4);
            uVar11 = *(uint *)(unaff_EBP - 0x12f8);
          }
          fVar38 = FUN_004d19f0(pvVar21,uVar14,uVar11);
          *(float *)(unaff_EBP - 0x1334) = (float)fVar38;
          if (*(float *)(unaff_EBP - 0x1334) <= 0.25) {
            iVar9 = *(int *)(unaff_EBP - 0x1308);
            pvVar21 = *(void **)(unaff_EBP - 0x12e0);
            iVar17 = FUN_00406100(pvVar21,uVar14,*(uint *)(unaff_EBP - 0x12f8),iVar9);
            iVar10 = *(int *)(iVar17 + 0x1c);
            iVar8 = *(int *)(iVar17 + 0x10);
            *(int *)(unaff_EBP - 0x1348) = iVar17;
            iVar8 = iVar10 + iVar8;
            iVar10 = iVar10 + -1;
            *(int *)(unaff_EBP - 0x12d4) = iVar8;
            *(int *)(unaff_EBP - 0x1334) = iVar10;
            if (-1 < iVar10) {
              pvVar21 = *(void **)(unaff_EBP - 0x1348);
              do {
                puVar12 = FUN_004d23f0(pvVar21,iVar10);
                if (((puVar12[3] & 0x1f) != 0) && ((puVar12[3] & 0x1f) != 2)) {
                  iVar8 = *(int *)(unaff_EBP - 0x12d4);
                  break;
                }
                iVar8 = *(int *)(unaff_EBP - 0x12d4) + -1;
                iVar10 = iVar10 + -1;
                *(int *)(unaff_EBP - 0x12d4) = iVar8;
              } while (-1 < iVar10);
              iVar9 = *(int *)(unaff_EBP - 0x1308);
              pvVar21 = *(void **)(unaff_EBP - 0x12e0);
            }
            puVar12 = FUN_00405fd0(pvVar21,*(uint *)(unaff_EBP - 0x12f4),
                                   *(uint *)(unaff_EBP - 0x12f8),iVar8 + -1,iVar9);
            bVar7 = puVar12[3] & 0x1f;
            if ((((bVar7 != 0xb) && (bVar7 != 8)) && (bVar7 != 7)) &&
               (puVar12 = FUN_00405fd0(pvVar21,*(uint *)(unaff_EBP - 0x12f4),
                                       *(uint *)(unaff_EBP - 0x12f8),
                                       *(int *)(unaff_EBP - 0x12d4) + -1,iVar9),
               (puVar12[3] & 0x40) == 0)) {
              iVar9 = *(int *)(unaff_EBP - 0x12f4);
              iVar8 = iVar9 - *(int *)(unaff_EBP - 0x12fc);
              iVar10 = *(int *)(unaff_EBP - 0x12fc) + iVar9;
              *(int *)(unaff_EBP - 0x1314) = iVar8;
              *(int *)(unaff_EBP - 0x1368) = iVar10;
              if (iVar8 <= iVar10) {
                iVar10 = *(int *)(unaff_EBP - 0x12ec);
                iVar17 = *(int *)(unaff_EBP - 0x12f8);
                *(int *)(unaff_EBP - 0x1334) = *(int *)(unaff_EBP - 0x12f8) - iVar10;
                *(int *)(unaff_EBP - 0x1338) = iVar10 + iVar17;
                iVar9 = iVar8 - iVar9;
                *(int *)(unaff_EBP - 0x12e4) = iVar9;
                do {
                  iVar10 = *(int *)(unaff_EBP - 0x1334);
                  *(int *)(unaff_EBP - 0x12d8) = iVar10;
                  if (iVar10 <= *(int *)(unaff_EBP - 0x1338)) {
                    iVar9 = *(int *)(unaff_EBP - 0x12d4);
                    iVar17 = *(int *)(unaff_EBP - 0x12d0);
                    *(int *)(unaff_EBP - 0x12f4) = iVar9;
                    *(int *)(unaff_EBP - 0x12f4) = *(int *)(unaff_EBP - 0x12f4) + iVar17 * -2;
                    pvVar21 = *(void **)(unaff_EBP - 0x12e0);
                    iVar34 = *(int *)(unaff_EBP - 0x12f8);
                    *(int *)(unaff_EBP - 0x1348) = iVar17 * 2 + iVar9;
                    iVar9 = *(int *)(unaff_EBP - 0x1308);
                    *(int *)(unaff_EBP - 0x1304) = iVar10 - iVar34;
                    do {
                      iVar17 = *(int *)(unaff_EBP - 0x1348);
                      *(int *)(unaff_EBP - 0x12cc) = iVar17;
                      if (*(int *)(unaff_EBP - 0x12f4) <= iVar17) {
                        fVar38 = FUN_004d5d30(SUB84((double)iVar8 * 0.05,0),
                                              (int)((ulonglong)((double)iVar8 * 0.05) >> 0x20),
                                              (double)iVar10 * 0.05);
                        *(float *)(unaff_EBP - 0x12dc) = (float)fVar38;
                        fVar43 = (float)*(int *)(unaff_EBP - 0x12e4) /
                                 (float)*(int *)(unaff_EBP - 0x12fc);
                        iVar8 = *(int *)(unaff_EBP - 0x12d0);
                        fVar44 = (float)*(int *)(unaff_EBP - 0x1304) /
                                 (float)*(int *)(unaff_EBP - 0x12ec);
                        iVar17 = *(int *)(unaff_EBP - 0x12cc);
                        fVar39 = *(float *)(unaff_EBP - 0x12dc) * 0.8;
                        iVar10 = *(int *)(unaff_EBP - 0x12f4);
                        *(float *)(unaff_EBP - 0x1590) = fVar43;
                        *(float *)(unaff_EBP - 0x158c) = fVar44;
                        fVar40 = (float)iVar8;
                        fVar43 = fVar44 * fVar44 + fVar43 * fVar43;
                        iVar8 = iVar17 - *(int *)(unaff_EBP - 0x12d4);
                        *(float *)(unaff_EBP - 0x12f0) = fVar39;
                        *(float *)(unaff_EBP - 0x1328) = fVar40;
                        *(float *)(unaff_EBP - 0x12dc) = fVar43;
                        *(int *)(unaff_EBP - 0x1310) = iVar8;
                        do {
                          fVar44 = (float)iVar8 / fVar40 + fVar39;
                          if (fVar44 * fVar44 + fVar43 <= 1.0) {
                            puVar12 = FUN_00405fd0(pvVar21,*(uint *)(unaff_EBP - 0x1314),
                                                   *(uint *)(unaff_EBP - 0x12d8),iVar17,iVar9);
                            if ((puVar12[3] & 0x40) == 0) {
                              pfVar16 = FUN_0052d030(pvVar21,(float *)(unaff_EBP - 0x758),
                                                     *(float *)(unaff_EBP - 0x1314),
                                                     *(uint *)(unaff_EBP - 0x12d8),
                                                     *(int *)(unaff_EBP - 0x12cc),iVar9);
                              iVar8 = 0;
                              do {
                                pfVar1 = pfVar16 + iVar8;
                                iVar8 = iVar8 + 1;
                                *(char *)((unaff_EBP - 0x1319) + iVar8) = (char)(int)*pfVar1;
                              } while (iVar8 < 3);
                              *(undefined2 *)(unaff_EBP - 0x13f0) =
                                   *(undefined2 *)(unaff_EBP - 0x1318);
                              *(undefined1 *)(unaff_EBP - 0x13ee) =
                                   *(undefined1 *)(unaff_EBP - 0x1316);
                              iVar8 = *(int *)(unaff_EBP - 0x12cc);
                              uVar11 = *(uint *)(unaff_EBP - 0x12d8);
                              *(undefined1 *)(unaff_EBP - 0x13ed) = 0x26;
                              FUN_0041ff00(pvVar21,*(float *)(unaff_EBP - 0x1314),uVar11,iVar8,
                                           (undefined1 *)(unaff_EBP - 0x13f0),iVar9);
                            }
                            iVar10 = *(int *)(unaff_EBP - 0x12f4);
                            iVar8 = *(int *)(unaff_EBP - 0x1310);
                            iVar17 = *(int *)(unaff_EBP - 0x12cc);
                            fVar40 = *(float *)(unaff_EBP - 0x1328);
                            fVar39 = *(float *)(unaff_EBP - 0x12f0);
                            fVar43 = *(float *)(unaff_EBP - 0x12dc);
                          }
                          iVar17 = iVar17 + -1;
                          iVar8 = iVar8 + -1;
                          *(int *)(unaff_EBP - 0x12cc) = iVar17;
                          *(int *)(unaff_EBP - 0x1310) = iVar8;
                        } while (iVar10 <= iVar17);
                        iVar10 = *(int *)(unaff_EBP - 0x12d8);
                        iVar8 = *(int *)(unaff_EBP - 0x1314);
                      }
                      *(int *)(unaff_EBP - 0x1304) = *(int *)(unaff_EBP - 0x1304) + 1;
                      iVar10 = iVar10 + 1;
                      *(int *)(unaff_EBP - 0x12d8) = iVar10;
                    } while (iVar10 <= *(int *)(unaff_EBP - 0x1338));
                    iVar9 = *(int *)(unaff_EBP - 0x12e4);
                  }
                  iVar8 = iVar8 + 1;
                  iVar9 = iVar9 + 1;
                  *(int *)(unaff_EBP - 0x1314) = iVar8;
                  *(int *)(unaff_EBP - 0x12e4) = iVar9;
                } while (iVar8 <= *(int *)(unaff_EBP - 0x1368));
              }
            }
            pvVar21 = *(void **)(unaff_EBP - 0x12e0);
          }
        }
LAB_0051d429:
        piVar23 = (int *)(unaff_EBP - 0x1320);
        *piVar23 = *piVar23 + -1;
      } while (*piVar23 != 0);
    }
  }
  iVar8 = *(int *)(*(int *)(unaff_EBP - 0x1300) + 0x18);
  if ((iVar8 == 1) || (iVar8 == 5)) {
    iVar8 = *(int *)(unaff_EBP - 0x1308);
    FUN_004e28e0();
  }
  else {
    iVar8 = *(int *)(unaff_EBP - 0x1308);
  }
  if (*(char *)(*(int *)(unaff_EBP - 0x1344) + 0x18 + *(int *)(unaff_EBP - 0x137c)) == '\x04') {
    uVar11 = *(uint *)(unaff_EBP - 5000);
    uVar14 = *(uint *)(unaff_EBP - 0x138c);
    *(uint *)(unaff_EBP - 0x234) = uVar11;
    *(uint *)(unaff_EBP - 0x238) = uVar14;
    iVar9 = FUN_00406100(pvVar21,uVar14,uVar11,iVar8);
    uVar14 = *(int *)(iVar9 + 0x10) + *(int *)(iVar9 + 0x1c);
    uVar11 = *(uint *)(unaff_EBP - 0x138c);
    uVar33 = ((int)uVar11 >> 0x1f) << 0x10 | uVar11 >> 0x10;
    *(uint *)(unaff_EBP - 800) = uVar11 << 0x10;
    *(uint *)(unaff_EBP - 0x1304) = uVar11 << 0x10;
    uVar11 = *(uint *)(unaff_EBP - 5000);
    *(uint *)(unaff_EBP - 0x31c) = uVar33;
    *(uint *)(unaff_EBP - 0x1328) = uVar33;
    uVar33 = ((int)uVar11 >> 0x1f) << 0x10 | uVar11 >> 0x10;
    *(uint *)(unaff_EBP - 0x318) = uVar11 << 0x10;
    *(uint *)(unaff_EBP - 0x1320) = uVar11 << 0x10;
    *(uint *)(unaff_EBP - 0x314) = uVar33;
    *(uint *)(unaff_EBP - 0x1338) = uVar33;
    *(uint *)(unaff_EBP - 0x230) = uVar14;
    uVar11 = ((int)uVar14 >> 0x1f) << 0x10 | uVar14 >> 0x10;
    *(uint *)(unaff_EBP - 0x310) = uVar14 * 0x10000;
    *(uint *)(unaff_EBP - 0x1344) = uVar14 * 0x10000;
    puVar20 = *(undefined4 **)(unaff_EBP - 0x1378);
    *(uint *)(unaff_EBP - 0x30c) = uVar11;
    puVar4 = (undefined4 *)puVar20[1];
    *(uint *)(unaff_EBP - 0x12ec) = uVar11;
    iVar9 = FUN_004f3ba0(puVar20,puVar4,(undefined4 *)(unaff_EBP - 800));
    if (*(int *)(unaff_EBP - 0x1374) == 0x7fffffe) {
LAB_0051d544:
                    /* WARNING: Subroutine does not return */
      std::_Xlength_error("list<T> too long");
    }
    iVar10 = *(int *)(unaff_EBP - 0x1378);
    *(int *)(unaff_EBP - 0x1374) = *(int *)(unaff_EBP - 0x1374) + 1;
    *(int *)(iVar10 + 4) = iVar9;
    **(int **)(iVar9 + 4) = iVar9;
    iVar9 = rand();
    iVar9 = iVar9 % 3 + 6;
    *(int *)(unaff_EBP - 0x12f0) = iVar9;
    if (0 < iVar9) {
      dVar41 = (double)iVar9;
      iVar9 = 0;
      *(double *)(unaff_EBP - 0x13bc) = dVar41;
      *(undefined4 *)(unaff_EBP - 0x12dc) = 0;
      do {
        fVar40 = (float)(((double)iVar9 * 3.141592653589793) / dVar41);
        *(float *)(unaff_EBP - 0x133c) = fVar40;
        dVar41 = (double)fVar40;
        libm_sse2_sin_precise();
        *(float *)(unaff_EBP - 0x1350) = (float)dVar41;
        dVar41 = (double)*(float *)(unaff_EBP - 0x133c);
        libm_sse2_cos_precise();
        uVar15 = *(undefined4 *)(unaff_EBP - 0x230);
        *(undefined4 *)(unaff_EBP - 0x133c) = uVar15;
        *(undefined4 *)(unaff_EBP - 0x30) = uVar15;
        fVar40 = *(float *)(unaff_EBP - 0x1350);
        *(int *)(unaff_EBP - 0x4a8) = (int)((float)dVar41 * 25.0);
        iVar9 = (int)(fVar40 * 25.0);
        uVar15 = *(undefined4 *)(unaff_EBP - 0x234);
        *(undefined4 *)(unaff_EBP - 0x38) = *(undefined4 *)(unaff_EBP - 0x238);
        *(undefined4 *)(unaff_EBP - 0x34) = uVar15;
        uVar14 = *(int *)(unaff_EBP - 0x38) + (int)((float)dVar41 * 25.0);
        uVar11 = *(int *)(unaff_EBP - 0x34) + iVar9;
        *(uint *)(unaff_EBP - 0x38) = uVar14;
        *(int *)(unaff_EBP - 0x4a4) = iVar9;
        *(uint *)(unaff_EBP - 0x34) = uVar11;
        iVar9 = FUN_00406100(pvVar21,uVar14,uVar11,iVar8);
        if (iVar9 == 0) {
          iVar9 = *(int *)(unaff_EBP - 0x133c);
        }
        else {
          iVar9 = *(int *)(iVar9 + 0x1c) + *(int *)(iVar9 + 0x10);
        }
        *(int *)(unaff_EBP - 0x30) = iVar9 + 4;
        uVar11 = rand();
        uVar11 = uVar11 & 0x80000003;
        if ((int)uVar11 < 0) {
          uVar11 = (uVar11 - 1 | 0xfffffffc) + 1;
        }
        *(uint *)(unaff_EBP - 0x12d0) = uVar11 + 3;
        uVar11 = rand();
        uVar11 = uVar11 & 0x80000003;
        if ((int)uVar11 < 0) {
          uVar11 = (uVar11 - 1 | 0xfffffffc) + 1;
        }
        *(int *)(unaff_EBP - 0x1310) = *(int *)(unaff_EBP - 0x12d0) * 2;
        *(int *)(unaff_EBP - 0x12f8) = *(int *)(unaff_EBP - 0x38) - *(int *)(unaff_EBP - 0x1310);
        iVar9 = *(int *)(unaff_EBP - 0x1310);
        iVar10 = *(int *)(unaff_EBP - 0x38);
        iVar17 = *(int *)(unaff_EBP - 0x12f8);
        *(uint *)(unaff_EBP - 0x12fc) = uVar11 + 3;
        if (iVar17 <= iVar9 + iVar10) {
          do {
            iVar9 = *(int *)(unaff_EBP - 0x12fc);
            iVar10 = *(int *)(unaff_EBP - 0x34);
            iVar8 = *(int *)(unaff_EBP - 0x1308);
            iVar34 = iVar10 + iVar9 * -2;
            pvVar21 = *(void **)(unaff_EBP - 0x12e0);
            *(int *)(unaff_EBP - 0x12d4) = iVar34;
            if (iVar34 <= iVar10 + iVar9 * 2) {
              do {
                iVar10 = *(int *)(unaff_EBP - 0x30);
                iVar9 = iVar10 + 0x14;
                *(int *)(unaff_EBP - 0x12f4) = iVar9;
                if (iVar10 + -0x14 <= iVar9) {
                  dVar41 = (double)iVar34 * 0.05;
                  fVar38 = FUN_004d5d30(SUB84(dVar41,0),(int)((ulonglong)dVar41 >> 0x20),dVar41);
                  *(float *)(unaff_EBP - 0x133c) = (float)fVar38;
                  fVar40 = *(float *)(unaff_EBP - 0x133c) * 0.3;
                  iVar9 = *(int *)(unaff_EBP - 0x12f4);
                  fVar39 = (float)*(int *)(unaff_EBP - 0x12fc);
                  dVar41 = (double)*(int *)(unaff_EBP - 0x12f8) * 0.05;
                  *(float *)(unaff_EBP - 0x1348) = fVar40;
                  *(float *)(unaff_EBP - 0x1368) = fVar39;
                  *(double *)(unaff_EBP - 0x13b4) = dVar41;
                  do {
                    iVar10 = *(int *)(unaff_EBP - 0x12d4);
                    iVar17 = *(int *)(unaff_EBP - 0x34);
                    *(float *)(unaff_EBP - 0x1334) =
                         (float)(iVar9 - *(int *)(unaff_EBP - 0x30)) / 10.0;
                    *(float *)(unaff_EBP - 0x1350) = (float)(iVar10 - iVar17) / fVar39 + fVar40;
                    fVar38 = FUN_004d5d30(SUB84(dVar41,0),(int)((ulonglong)dVar41 >> 0x20),
                                          (double)iVar9 * 0.05);
                    *(float *)(unaff_EBP - 0x133c) = (float)fVar38;
                    uVar11 = *(uint *)(unaff_EBP - 0x12f8);
                    fVar39 = *(float *)(unaff_EBP - 0x133c) * 0.3 +
                             (float)(int)(uVar11 - *(int *)(unaff_EBP - 0x38)) /
                             (float)*(int *)(unaff_EBP - 0x12d0);
                    fVar40 = *(float *)(unaff_EBP - 0x1350);
                    *(float *)(unaff_EBP - 6000) = fVar39;
                    if ((fVar39 * fVar39 + fVar40 * fVar40 +
                         *(float *)(unaff_EBP - 0x1334) * *(float *)(unaff_EBP - 0x1334) <= 1.0) &&
                       (puVar12 = FUN_00405fd0(pvVar21,uVar11,*(uint *)(unaff_EBP - 0x12d4),
                                               *(int *)(unaff_EBP - 0x12f4),iVar8),
                       (puVar12[3] & 0x40) == 0)) {
                      pfVar16 = FUN_0052d030(pvVar21,(float *)(unaff_EBP - 0x770),
                                             *(float *)(unaff_EBP - 0x12f8),
                                             *(uint *)(unaff_EBP - 0x12d4),
                                             *(int *)(unaff_EBP - 0x12f4),iVar8);
                      iVar9 = 0;
                      do {
                        pfVar1 = pfVar16 + iVar9;
                        iVar9 = iVar9 + 1;
                        *(char *)((unaff_EBP - 0x12c9) + iVar9) = (char)(int)*pfVar1;
                      } while (iVar9 < 3);
                      *(undefined2 *)(unaff_EBP - 0x13f8) = *(undefined2 *)(unaff_EBP - 0x12c8);
                      *(undefined1 *)(unaff_EBP - 0x13f6) = *(undefined1 *)(unaff_EBP - 0x12c6);
                      iVar9 = *(int *)(unaff_EBP - 0x12f4);
                      uVar11 = *(uint *)(unaff_EBP - 0x12d4);
                      *(undefined1 *)(unaff_EBP - 0x13f5) = 6;
                      FUN_0041ff00(pvVar21,*(float *)(unaff_EBP - 0x12f8),uVar11,iVar9,
                                   (undefined1 *)(unaff_EBP - 0x13f8),iVar8);
                    }
                    iVar10 = *(int *)(unaff_EBP - 0x30);
                    fVar40 = *(float *)(unaff_EBP - 0x1348);
                    dVar41 = *(double *)(unaff_EBP - 0x13b4);
                    fVar39 = *(float *)(unaff_EBP - 0x1368);
                    iVar9 = *(int *)(unaff_EBP - 0x12f4) + -1;
                    *(int *)(unaff_EBP - 0x12f4) = iVar9;
                  } while (iVar10 + -0x14 <= iVar9);
                  iVar34 = *(int *)(unaff_EBP - 0x12d4);
                }
                iVar9 = *(int *)(unaff_EBP - 0x12fc);
                iVar10 = *(int *)(unaff_EBP - 0x34);
                iVar8 = *(int *)(unaff_EBP - 0x1308);
                iVar34 = iVar34 + 1;
                *(int *)(unaff_EBP - 0x12d4) = iVar34;
              } while (iVar34 <= iVar10 + iVar9 * 2);
              iVar17 = *(int *)(unaff_EBP - 0x12f8);
            }
            iVar9 = *(int *)(unaff_EBP - 0x38);
            iVar10 = *(int *)(unaff_EBP - 0x1310);
            iVar17 = iVar17 + 1;
            *(int *)(unaff_EBP - 0x12f8) = iVar17;
          } while (iVar17 <= iVar9 + iVar10);
        }
        dVar41 = *(double *)(unaff_EBP - 0x13bc);
        iVar9 = *(int *)(unaff_EBP - 0x12dc) + 2;
        piVar23 = (int *)(unaff_EBP - 0x12f0);
        *piVar23 = *piVar23 + -1;
        iVar10 = *piVar23;
        *(int *)(unaff_EBP - 0x12dc) = iVar9;
      } while (iVar10 != 0);
    }
    FUN_004c84b0(unaff_EBP - 0x6f8);
    *(undefined1 *)(unaff_EBP - 4) = 4;
    *(undefined8 *)(unaff_EBP - 0x16b4) = 0;
    uVar48 = FUN_0054a946();
    iVar8 = (int)(uVar48 >> 0x20);
    uVar35 = (uint)uVar48;
    uVar11 = *(uint *)(unaff_EBP - 0x1304);
    uVar14 = *(uint *)(unaff_EBP - 0x1320);
    *(undefined4 *)(unaff_EBP - 0x3b0) = *(undefined4 *)(unaff_EBP - 0x1328);
    *(undefined4 *)(unaff_EBP - 0x3a8) = *(undefined4 *)(unaff_EBP - 0x1338);
    *(undefined4 *)(unaff_EBP - 0x3a4) = *(undefined4 *)(unaff_EBP - 0x1344);
    *(undefined4 *)(unaff_EBP - 0x3a0) = *(undefined4 *)(unaff_EBP - 0x12ec);
    *(uint *)(unaff_EBP - 0x3b4) = uVar11;
    uVar32 = uVar35 + uVar11;
    iVar9 = iVar8 + *(int *)(unaff_EBP - 0x1328) + (uint)CARRY4(uVar35,uVar11);
    *(uint *)(unaff_EBP - 0x3ac) = uVar14;
    *(uint *)(unaff_EBP - 0x1534) = uVar35;
    *(uint *)(unaff_EBP - 0x1544) = uVar35;
    *(uint *)(unaff_EBP - 0x444) = uVar35;
    *(uint *)(unaff_EBP - 0x43c) = uVar35;
    uVar33 = uVar35 + uVar14;
    uVar15 = *(undefined4 *)(unaff_EBP - 0x1344);
    *(int *)(unaff_EBP - 0x12d0) = iVar9;
    *(int *)(unaff_EBP - 0x3d0) = iVar9;
    *(undefined4 *)(unaff_EBP - 0x3c4) = uVar15;
    uVar15 = *(undefined4 *)(unaff_EBP - 0x12ec);
    *(int *)(unaff_EBP - 0x6ec) = iVar9;
    uVar51 = *(undefined4 *)(unaff_EBP - 0x1344);
    *(int *)(unaff_EBP - 0x1530) = iVar8;
    *(int *)(unaff_EBP - 0x1540) = iVar8;
    *(int *)(unaff_EBP - 0x440) = iVar8;
    *(int *)(unaff_EBP - 0x438) = iVar8;
    uVar11 = iVar8 + *(int *)(unaff_EBP - 0x1338) + (uint)CARRY4(uVar35,uVar14);
    *(undefined4 *)(unaff_EBP - 0x3c0) = uVar15;
    *(undefined4 *)(unaff_EBP - 0x6e0) = uVar51;
    pvVar21 = *(void **)(unaff_EBP - 0x12e0);
    *(undefined4 *)(unaff_EBP - 0x6dc) = uVar15;
    iVar8 = *(int *)(unaff_EBP - 0x1308);
    *(undefined8 *)(unaff_EBP - 0x434) = 0;
    *(uint *)(unaff_EBP - 0x3d4) = uVar32;
    *(uint *)(unaff_EBP - 0x3cc) = uVar33;
    *(uint *)(unaff_EBP - 0x3c8) = uVar11;
    *(uint *)(unaff_EBP - 0x6f0) = uVar32;
    *(uint *)(unaff_EBP - 0x6e8) = uVar33;
    *(uint *)(unaff_EBP - 0x6e4) = uVar11;
    while( true ) {
      iVar9 = FUN_00406050(pvVar21,uVar32,*(uint *)(unaff_EBP - 0x12d0),uVar33,uVar11,
                           *(uint *)(unaff_EBP - 0x1344),*(uint *)(unaff_EBP - 0x12ec),iVar8);
      if (((*(byte *)(iVar9 + 3) & 0x1f) != 0) && ((*(byte *)(iVar9 + 3) & 0x1f) != 2)) break;
      uVar14 = *(uint *)(unaff_EBP - 0x6e0);
      uVar15 = *(undefined4 *)(unaff_EBP - 0x6ec);
      uVar11 = *(uint *)(unaff_EBP - 0x6e4);
      iVar9 = uVar14 - 0x10000;
      *(int *)(unaff_EBP - 0x1344) = iVar9;
      *(int *)(unaff_EBP - 0x6e0) = iVar9;
      iVar9 = *(int *)(unaff_EBP - 0x6dc) + -1 + (uint)(0xffff < uVar14);
      *(int *)(unaff_EBP - 0x12ec) = iVar9;
      *(int *)(unaff_EBP - 0x6dc) = iVar9;
      uVar33 = *(uint *)(unaff_EBP - 0x6e8);
      *(undefined4 *)(unaff_EBP - 0x12d0) = uVar15;
      uVar32 = *(uint *)(unaff_EBP - 0x6f0);
    }
    uVar11 = *(uint *)(unaff_EBP - 0x6dc);
    uVar14 = *(uint *)(unaff_EBP - 0x6e0);
    while( true ) {
      iVar9 = FUN_00406050(pvVar21,*(uint *)(unaff_EBP - 0x6f0),*(uint *)(unaff_EBP - 0x6ec),
                           *(uint *)(unaff_EBP - 0x6e8),*(uint *)(unaff_EBP - 0x6e4),uVar14,uVar11,
                           iVar8);
      if (((*(byte *)(iVar9 + 3) & 0x1f) == 0) || ((*(byte *)(iVar9 + 3) & 0x1f) == 2)) break;
      uVar14 = *(uint *)(unaff_EBP - 0x6e0) + 0x10000;
      uVar11 = *(int *)(unaff_EBP - 0x6dc) + (uint)(0xfffeffff < *(uint *)(unaff_EBP - 0x6e0));
      *(uint *)(unaff_EBP - 0x6e0) = uVar14;
      *(uint *)(unaff_EBP - 0x6dc) = uVar11;
    }
    *(undefined4 *)(unaff_EBP - 0x6f8) = 0x2d;
    uVar11 = rand();
    uVar11 = uVar11 & 0x80000003;
    if ((int)uVar11 < 0) {
      uVar11 = (uVar11 - 1 | 0xfffffffc) + 1;
    }
    *(uint *)(unaff_EBP - 0x6d8) = uVar11;
    *(undefined4 *)(unaff_EBP - 0x6d4) = 0x40800000;
    *(undefined4 *)(unaff_EBP - 0x6d0) = 0x40800000;
    *(undefined4 *)(unaff_EBP - 0x6cc) = 0x40a00000;
    FUN_004d6670((void *)(iVar8 + 0xc),(void **)(unaff_EBP - 0x6f8));
    iVar9 = *(int *)(unaff_EBP - 0x6b0);
    *(undefined1 *)(unaff_EBP - 4) = 3;
    if (iVar9 != 0) {
      std::_Container_base0::_Orphan_all((_Container_base0 *)(unaff_EBP - 0x6b0));
      FUN_00406310(*(undefined4 **)(unaff_EBP - 0x6b0),*(undefined4 **)(unaff_EBP - 0x6ac));
      operator_delete(*(void **)(unaff_EBP - 0x6b0));
      *(undefined4 *)(unaff_EBP - 0x6b0) = 0;
      *(undefined4 *)(unaff_EBP - 0x6ac) = 0;
      *(undefined4 *)(unaff_EBP - 0x6a8) = 0;
    }
  }
  uVar15 = *(undefined4 *)(unaff_EBP - 0x1358);
  uVar11 = *(int *)(unaff_EBP - 0x132c) + 8;
  *(uint *)(unaff_EBP - 0x1328) = uVar11;
  *(undefined4 *)(unaff_EBP - 0x12d8) = uVar15;
  *(undefined4 *)(unaff_EBP - 0x12f0) = 0xe;
  *(undefined4 *)(unaff_EBP - 0x1368) = 5;
  do {
    *(uint *)(unaff_EBP - 0x1314) = uVar11;
    *(undefined4 *)(unaff_EBP - 0x12dc) = 0xe;
    do {
      puVar26 = *(uint **)(unaff_EBP - 0x1300);
      uVar14 = puVar26[6];
      *(undefined4 *)(unaff_EBP - 0x1344) = 0;
      if (uVar14 == 3) {
        *(uint *)(unaff_EBP - 0x14d8) = uVar11 << 0x10;
        iVar9 = *(int *)(unaff_EBP - 0x12d8);
        *(uint *)(unaff_EBP - 0x14d4) = ((int)uVar11 >> 0x1f) << 0x10 | uVar11 >> 0x10;
        uVar11 = iVar9 + 8;
        *(uint *)(unaff_EBP - 0x1484) = uVar11 * 0x10000;
        *(uint *)(unaff_EBP - 0x1480) = ((int)uVar11 >> 0x1f) << 0x10 | uVar11 >> 0x10;
        fVar38 = FUN_0052c820(puVar26,(uint *)(unaff_EBP - 0x1484),(uint *)(unaff_EBP - 0x14d8));
        uVar11 = *(uint *)(unaff_EBP - 0x1314);
        *(float *)(unaff_EBP - 0x133c) = (float)fVar38;
        fVar40 = 1.0 - *(float *)(unaff_EBP - 0x133c);
        if (0.0 < fVar40) {
          *(float *)(unaff_EBP - 0x1344) = fVar40 * fVar40;
        }
        else {
          *(undefined4 *)(unaff_EBP - 0x1344) = 0;
        }
      }
      iVar9 = FUN_00406100(pvVar21,*(int *)(unaff_EBP - 0x12d8) + 8,uVar11,iVar8);
      if (iVar9 == 0) {
        fVar38 = (float10)FUN_004f8570(pvVar21,(float)(*(int *)(unaff_EBP - 0x12d8) + 8),
                                       *(uint *)(unaff_EBP - 0x1314));
        *(float *)(unaff_EBP - 0x133c) = (float)fVar38;
        uVar15 = *(undefined4 *)(unaff_EBP - 0x133c);
      }
      else {
        uVar15 = *(undefined4 *)(iVar9 + 4);
      }
      *(undefined4 *)(unaff_EBP - 0x12f8) = uVar15;
      iVar9 = rand();
      *(int *)(unaff_EBP - 0x12f4) =
           (int)((float)(iVar9 % 5) + *(float *)(unaff_EBP - 0x12f8) * 2.0 + 6.0 +
                *(float *)(unaff_EBP - 0x1344) * 4.0);
      iVar10 = rand();
      fVar40 = *(float *)(unaff_EBP - 0x1344);
      iVar9 = *(int *)(unaff_EBP - 0x12f4);
      iVar17 = *(int *)(unaff_EBP - 0x1314) + -8 + iVar9;
      fVar39 = *(float *)(unaff_EBP - 0x12f8);
      *(int *)(unaff_EBP - 0x12e4) = iVar17;
      *(int *)(unaff_EBP - 0x12ec) =
           (int)((((float)iVar10 * 8.0) / 32767.0 + fVar40 * 6.0 + 8.0) * (fVar39 * 0.5 + 1.0));
      iVar10 = *(int *)(unaff_EBP - 0x12d8) + iVar9;
      fVar40 = (float)iVar10 - *(float *)((int)pvVar21 + 0x8000f0);
      fVar39 = (float)iVar17 - *(float *)((int)pvVar21 + 0x8000f4);
      *(int *)(unaff_EBP - 0x12cc) = iVar10;
      *(float *)(unaff_EBP - 0x15ec) = fVar40;
      if (400.0 <= fVar39 * fVar39 + fVar40 * fVar40) {
        iVar17 = *(int *)(unaff_EBP - 0x1358) + 0x100 + -(iVar9 / 2);
        iVar10 = *(int *)(unaff_EBP - 0x12cc);
        if (iVar17 <= *(int *)(unaff_EBP - 0x12cc)) {
          iVar10 = iVar17;
        }
        iVar17 = -(iVar9 / 2) + *(int *)(unaff_EBP - 0x132c) + 0x100;
        iVar9 = *(int *)(unaff_EBP - 0x12e4);
        if (iVar17 <= *(int *)(unaff_EBP - 0x12e4)) {
          iVar9 = iVar17;
        }
        piVar23 = *(int **)(unaff_EBP - 0x1378);
        *(int *)(unaff_EBP - 0x12e4) = iVar9;
        piVar22 = (int *)*piVar23;
        *(int *)(unaff_EBP - 0x12cc) = iVar10;
        if (piVar22 != piVar23) {
          uVar11 = *(uint *)(unaff_EBP - 0x12e4);
          *(uint *)(unaff_EBP - 0x133c) = uVar11 << 0x10;
          uVar14 = *(uint *)(unaff_EBP - 0x12cc);
          *(uint *)(unaff_EBP - 0x1350) = ((int)uVar11 >> 0x1f) << 0x10 | uVar11 >> 0x10;
          *(uint *)(unaff_EBP - 0x12d0) = ((int)uVar14 >> 0x1f) << 0x10 | uVar14 >> 0x10;
          *(uint *)(unaff_EBP - 0x1348) = uVar14 << 0x10;
          do {
            uVar11 = *(uint *)(unaff_EBP - 0x133c);
            uVar14 = piVar22[4];
            iVar9 = *(int *)(unaff_EBP - 0x1350);
            iVar10 = piVar22[5];
            *(uint *)(unaff_EBP - 0x13b4) = uVar11 - piVar22[4];
            uVar33 = *(uint *)(unaff_EBP - 0x1348);
            *(uint *)(unaff_EBP - 0x13b0) = (iVar9 - iVar10) - (uint)(uVar11 < uVar14);
            iVar9 = *(int *)(unaff_EBP - 0x12d0);
            *(float *)(unaff_EBP - 0x1334) = (float)*(longlong *)(unaff_EBP - 0x13b4);
            uVar11 = piVar22[2];
            uVar14 = piVar22[2];
            *(undefined4 *)(unaff_EBP - 0x1334) = *(undefined4 *)(unaff_EBP - 0x1334);
            fVar40 = *(float *)(unaff_EBP - 0x1334);
            iVar10 = piVar22[3];
            *(uint *)(unaff_EBP - 0x13bc) = uVar33 - uVar14;
            *(uint *)(unaff_EBP - 0x13b8) = (iVar9 - iVar10) - (uint)(uVar33 < uVar11);
            fVar40 = fVar40 * 1.5258789e-05;
            *(float *)(unaff_EBP - 0x1334) = (float)*(longlong *)(unaff_EBP - 0x13bc);
            *(undefined4 *)(unaff_EBP - 0x1334) = *(undefined4 *)(unaff_EBP - 0x1334);
            fVar39 = *(float *)(unaff_EBP - 0x1334) * 1.5258789e-05;
            *(float *)(unaff_EBP - 0x173c) = fVar39;
            if (fVar40 * fVar40 + fVar39 * fVar39 < 1600.0) goto LAB_0051e593;
            piVar22 = (int *)*piVar22;
          } while (piVar22 != (int *)*(int *)(unaff_EBP - 0x1378));
          iVar10 = *(int *)(unaff_EBP - 0x12cc);
        }
        iVar9 = *(int *)((int)pvVar21 + 0x800298);
        dVar42 = (double)*(int *)(unaff_EBP - 0x12e4) * 0.001;
        *(double *)(unaff_EBP - 0x1340) = dVar42;
        iVar17 = *(int *)((int)pvVar21 + 0x800294);
        *(double *)(unaff_EBP - 0x1354) = (double)iVar10 * 0.001;
        dVar41 = (double)iVar17 + (double)iVar10 * 0.001;
        fVar38 = FUN_004d5d30(SUB84(dVar41,0),(int)((ulonglong)dVar41 >> 0x20),
                              (double)iVar9 + dVar42);
        *(float *)(unaff_EBP - 0x12fc) = (float)fVar38;
        uVar11 = rand();
        uVar11 = uVar11 & 0x80000001;
        if ((int)uVar11 < 0) {
          uVar11 = (uVar11 - 1 | 0xfffffffe) + 1;
        }
        fVar40 = *(float *)(unaff_EBP - 0x12fc);
        *(uint *)(unaff_EBP - 0x12d4) = -(uint)(uVar11 != 0) & 5;
        if (fVar40 <= 0.3) {
          iVar9 = rand();
          uVar15 = *(undefined4 *)(unaff_EBP - 0x12d4);
          if (iVar9 % 10 == 0) {
            uVar15 = 1;
          }
          *(undefined4 *)(unaff_EBP - 0x12d4) = uVar15;
        }
        else {
          iVar9 = rand();
          if (iVar9 % 10 != 0) {
            *(undefined4 *)(unaff_EBP - 0x12d4) = 1;
          }
        }
        iVar9 = rand();
        uVar15 = *(undefined4 *)(unaff_EBP - 0x12d4);
        uVar11 = *(uint *)(unaff_EBP - 0x12e4);
        uVar14 = *(uint *)(unaff_EBP - 0x12cc);
        if (iVar9 % 10 == 0) {
          uVar15 = 2;
        }
        *(undefined4 *)(unaff_EBP - 0x12d4) = uVar15;
        iVar9 = FUN_00406100(pvVar21,uVar14,uVar11,iVar8);
        if (iVar9 == 0) {
          fVar38 = (float10)FUN_004f8b40(pvVar21,*(int *)(unaff_EBP - 0x12cc),
                                         *(int *)(unaff_EBP - 0x12e4));
          *(float *)(unaff_EBP - 0x12fc) = (float)fVar38;
          fVar40 = *(float *)(unaff_EBP - 0x12fc);
        }
        else {
          fVar40 = *(float *)(iVar9 + 8);
        }
        *(float *)(unaff_EBP - 0x12d0) = fVar40;
        if ((0.8 < fVar40) && (0.7 < *(float *)(unaff_EBP - 0x12f8))) {
          uVar11 = rand();
          uVar11 = uVar11 & 0x80000001;
          if ((int)uVar11 < 0) {
            uVar11 = (uVar11 - 1 | 0xfffffffe) + 1;
          }
          *(uint *)(unaff_EBP - 0x12d4) = (uVar11 != 0) + 4;
          uVar11 = rand();
          uVar11 = uVar11 & 0x80000003;
          bVar37 = uVar11 == 0;
          if ((int)uVar11 < 0) {
            bVar37 = (uVar11 - 1 | 0xfffffffc) == 0xffffffff;
          }
          uVar15 = *(undefined4 *)(unaff_EBP - 0x12d4);
          fVar40 = *(float *)(unaff_EBP - 0x12d0);
          if (bVar37) {
            uVar15 = 3;
          }
          *(undefined4 *)(unaff_EBP - 0x12d4) = uVar15;
        }
        if (0.3 <= fVar40) {
          if (fVar40 < 0.7) {
            dVar41 = *(double *)(unaff_EBP - 0x1354) + 8473.0;
            fVar38 = FUN_004d5d30(SUB84(dVar41,0),(int)((ulonglong)dVar41 >> 0x20),
                                  *(double *)(unaff_EBP - 0x1340) + 9438.0);
            *(float *)(unaff_EBP - 0x133c) = (float)fVar38;
            if ((0.8 < *(float *)(unaff_EBP - 0x133c)) && (iVar9 = rand(), iVar9 % 5 != 0)) {
              *(undefined4 *)(unaff_EBP - 0x12d4) = 2;
              goto LAB_0051e307;
            }
          }
          if (*(int *)(unaff_EBP - 0x12d4) == 1) goto LAB_0051e2c2;
          if (*(int *)(unaff_EBP - 0x12d4) == 2) goto LAB_0051e307;
        }
        else {
          if (0.2 < fVar40) {
            dVar41 = *(double *)(unaff_EBP - 0x1354) + 8473.0;
            fVar38 = FUN_004d5d30(SUB84(dVar41,0),(int)((ulonglong)dVar41 >> 0x20),
                                  *(double *)(unaff_EBP - 0x1340) + 9438.0);
            *(float *)(unaff_EBP - 0x133c) = (float)fVar38;
            if ((0.6 < *(float *)(unaff_EBP - 0x133c)) && (iVar9 = rand(), iVar9 % 5 != 0)) {
              *(undefined4 *)(unaff_EBP - 0x12d4) = 2;
LAB_0051e307:
              iVar9 = rand();
              pvVar21 = *(void **)(unaff_EBP - 0x12e0);
              *(int *)(unaff_EBP - 0x12ec) =
                   *(int *)(unaff_EBP - 0x12ec) + iVar9 % (*(int *)(unaff_EBP - 0x12ec) / 2);
              goto LAB_0051e32d;
            }
          }
          *(undefined4 *)(unaff_EBP - 0x12d4) = 1;
LAB_0051e2c2:
          iVar9 = *(int *)(unaff_EBP - 0x12f4);
          fVar40 = (float)*(int *)(unaff_EBP - 0x12ec) * 0.5;
          if (fVar40 < (float)iVar9) {
            iVar9 = (int)fVar40;
            *(int *)(unaff_EBP - 0x12f4) = iVar9;
          }
          if (iVar9 < 1) {
            *(undefined4 *)(unaff_EBP - 0x12f4) = 1;
          }
        }
LAB_0051e32d:
        iVar9 = FUN_00406100(pvVar21,*(uint *)(unaff_EBP - 0x12cc),*(uint *)(unaff_EBP - 0x12e4),
                             iVar8);
        if (iVar9 == 0) {
          FUN_004f8570(pvVar21,*(float *)(unaff_EBP - 0x12cc),*(uint *)(unaff_EBP - 0x12e4));
        }
        fVar40 = *(float *)(unaff_EBP - 0x12cc);
        iVar9 = *(int *)(unaff_EBP - 0x12f4);
        if (*(int *)(unaff_EBP - 0x1370) < (int)fVar40 + iVar9) {
          fVar40 = (float)((*(int *)(unaff_EBP - 0x1358) - iVar9) + 0x100);
          *(float *)(unaff_EBP - 0x12cc) = fVar40;
        }
        if (*(int *)(unaff_EBP - 0x132c) + 0x100 < iVar9 + *(int *)(unaff_EBP - 0x12e4)) {
          fVar39 = (float)((*(int *)(unaff_EBP - 0x132c) - *(int *)(unaff_EBP - 0x12f4)) + 0x100);
          *(float *)(unaff_EBP - 0x12e4) = fVar39;
        }
        else {
          fVar39 = *(float *)(unaff_EBP - 0x12e4);
        }
        fVar38 = FUN_004d9010(pvVar21,fVar40,fVar39,iVar8);
        *(float *)(unaff_EBP - 0x133c) = (float)fVar38;
        *(float *)(unaff_EBP - 0x133c) =
             *(float *)(unaff_EBP - 0x133c) + *(float *)(unaff_EBP - 0x1344);
        iVar9 = rand();
        if (((float)iVar9 / 32767.0 < *(float *)(unaff_EBP - 0x133c) ||
             (float)iVar9 / 32767.0 == *(float *)(unaff_EBP - 0x133c)) &&
           (iVar9 = FUN_00406100(pvVar21,*(uint *)(unaff_EBP - 0x12cc),*(uint *)(unaff_EBP - 0x12e4)
                                 ,iVar8), iVar9 != 0)) {
          iVar9 = *(int *)(iVar9 + 0x1c) + -1 + *(int *)(iVar9 + 0x10);
          while( true ) {
            uVar11 = *(uint *)(unaff_EBP - 0x12e4);
            uVar14 = *(uint *)(unaff_EBP - 0x12cc);
            *(int *)(unaff_EBP - 0x12f8) = iVar9;
            puVar12 = FUN_00405fd0(pvVar21,uVar14,uVar11,iVar9,iVar8);
            if (((puVar12[3] & 0x1f) != 0) && ((puVar12[3] & 0x1f) != 2)) break;
            iVar9 = *(int *)(unaff_EBP - 0x12f8) + -1;
          }
          if (-1 < *(int *)(unaff_EBP - 0x12f8)) {
            puVar12 = FUN_00405fd0(pvVar21,*(uint *)(unaff_EBP - 0x12cc),
                                   *(uint *)(unaff_EBP - 0x12e4),*(int *)(unaff_EBP - 0x12f8),iVar8)
            ;
            bVar7 = puVar12[3];
            *(int *)(unaff_EBP - 0x12f8) = *(int *)(unaff_EBP - 0x12f8) + 1;
            uVar11 = *(uint *)(unaff_EBP - 0x12e4);
            uVar14 = *(uint *)(unaff_EBP - 0x12cc);
            *(uint *)(unaff_EBP - 0x1350) = bVar7 & 0xffffff1f;
            iVar9 = FUN_00406100(pvVar21,uVar14,uVar11,iVar8);
            if (iVar9 == 0) {
              fVar38 = (float10)FUN_004f8b40(pvVar21,*(int *)(unaff_EBP - 0x12cc),
                                             *(int *)(unaff_EBP - 0x12e4));
              *(float *)(unaff_EBP - 0x133c) = (float)fVar38;
              fVar40 = *(float *)(unaff_EBP - 0x133c);
            }
            else {
              fVar40 = *(float *)(iVar9 + 8);
            }
            if (fVar40 <= 0.8) {
              iVar9 = *(int *)(unaff_EBP - 0x12d4);
            }
            else {
              iVar9 = FUN_00406100(pvVar21,*(uint *)(unaff_EBP - 0x12cc),
                                   *(uint *)(unaff_EBP - 0x12e4),iVar8);
              if (iVar9 == 0) {
                fVar38 = (float10)FUN_004f8570(pvVar21,*(float *)(unaff_EBP - 0x12cc),
                                               *(uint *)(unaff_EBP - 0x12e4));
                *(float *)(unaff_EBP - 0x133c) = (float)fVar38;
                fVar40 = *(float *)(unaff_EBP - 0x133c);
              }
              else {
                fVar40 = *(float *)(iVar9 + 4);
              }
              iVar9 = *(int *)(unaff_EBP - 0x12d4);
              if (fVar40 < 0.2) {
                iVar9 = 3;
              }
            }
            iVar10 = *(int *)(unaff_EBP - 0x1350);
            if ((iVar10 == 4) || (iVar10 == 10)) {
              fVar40 = *(float *)(unaff_EBP - 0x12f8);
            }
            else if ((iVar10 != 9) || (fVar40 = *(float *)(unaff_EBP - 0x12f8), 2 < (int)fVar40))
            goto LAB_0051e593;
            iVar10 = *(int *)(unaff_EBP - 0x12f4);
            if (*(int *)(unaff_EBP - 0x12f4) < 1) {
              iVar10 = *(int *)(unaff_EBP - 0x1330);
            }
            FUN_00513760(*(float *)(unaff_EBP - 0x12cc),*(uint *)(unaff_EBP - 0x12e4),fVar40,iVar10,
                         *(int *)(unaff_EBP - 0x12ec),iVar9,iVar8);
          }
        }
      }
LAB_0051e593:
      uVar11 = *(int *)(unaff_EBP - 0x1314) + 0x12;
      piVar23 = (int *)(unaff_EBP - 0x12dc);
      *piVar23 = *piVar23 + -1;
      iVar9 = *piVar23;
      *(uint *)(unaff_EBP - 0x1314) = uVar11;
    } while (iVar9 != 0);
    *(int *)(unaff_EBP - 0x12d8) = *(int *)(unaff_EBP - 0x12d8) + 0x12;
    piVar23 = (int *)(unaff_EBP - 0x12f0);
    *piVar23 = *piVar23 + -1;
    uVar11 = *(uint *)(unaff_EBP - 0x1328);
  } while (*piVar23 != 0);
  if (*(int *)(unaff_EBP - 0x1360) == 0) {
    iVar9 = rand();
    *(int *)(unaff_EBP - 0x1310) = *(int *)(unaff_EBP - 0x1358) + 0x10 + iVar9 % 0xe0;
    iVar9 = rand();
    uVar14 = *(int *)(unaff_EBP - 0x132c) + 0x10 + iVar9 % 0xe0;
    uVar11 = *(uint *)(unaff_EBP - 0x1310);
    *(uint *)(unaff_EBP - 0x12d0) = uVar14;
    iVar9 = FUN_00406100(pvVar21,uVar11,uVar14,iVar8);
    if (iVar9 != 0) {
      iVar9 = *(int *)(iVar9 + 0x1c) + *(int *)(iVar9 + 0x10);
      while( true ) {
        uVar11 = *(uint *)(unaff_EBP - 0x12d0);
        uVar14 = *(uint *)(unaff_EBP - 0x1310);
        *(int *)(unaff_EBP - 0x12fc) = iVar9;
        puVar12 = FUN_00405fd0(pvVar21,uVar14,uVar11,iVar9,iVar8);
        if (((puVar12[3] & 0x1f) != 0) && ((puVar12[3] & 0x1f) != 2)) break;
        iVar9 = *(int *)(unaff_EBP - 0x12fc) + -1;
      }
      iVar8 = *(int *)(unaff_EBP - 0x12fc);
      FUN_004c84b0(unaff_EBP - 0x984);
      uVar11 = iVar8 + 1;
      uVar14 = ((int)uVar11 >> 0x1f) << 0x10 | uVar11 >> 0x10;
      *(uint *)(unaff_EBP - 0x12dc) = uVar11 * 0x10000;
      *(uint *)(unaff_EBP - 0x1550) = uVar11 * 0x10000;
      uVar11 = *(uint *)(unaff_EBP - 0x12d0);
      *(undefined1 *)(unaff_EBP - 4) = 5;
      *(undefined4 *)(unaff_EBP - 0x984) = 0;
      *(uint *)(unaff_EBP - 0x12f0) = uVar14;
      *(uint *)(unaff_EBP - 0x154c) = uVar14;
      *(uint *)(unaff_EBP - 0x12fc) = ((int)uVar11 >> 0x1f) << 0x10 | uVar11 >> 0x10;
      uVar48 = FUN_0054a946();
      iVar9 = (int)(uVar48 >> 0x20);
      uVar33 = (uint)uVar48;
      uVar14 = *(uint *)(unaff_EBP - 0x1310);
      iVar10 = uVar11 * 0x10000 - uVar33;
      *(int *)(unaff_EBP - 0x12fc) =
           (*(int *)(unaff_EBP - 0x12fc) - iVar9) - (uint)(uVar11 * 0x10000 < uVar33);
      iVar8 = uVar14 * 0x10000 - uVar33;
      uVar15 = *(undefined4 *)(unaff_EBP - 0x12fc);
      iVar9 = ((((int)uVar14 >> 0x1f) << 0x10 | uVar14 >> 0x10) - iVar9) -
              (uint)(uVar14 * 0x10000 < uVar33);
      *(undefined4 *)(unaff_EBP - 0x3dc) = *(undefined4 *)(unaff_EBP - 0x12dc);
      uVar51 = *(undefined4 *)(unaff_EBP - 0x12f0);
      *(int *)(unaff_EBP - 0x3ec) = iVar8;
      *(undefined4 *)(unaff_EBP - 0x3d8) = uVar51;
      uVar51 = *(undefined4 *)(unaff_EBP - 0x12dc);
      *(int *)(unaff_EBP - 0x97c) = iVar8;
      uVar53 = *(undefined4 *)(unaff_EBP - 0x12f0);
      *(int *)(unaff_EBP - 1000) = iVar9;
      *(int *)(unaff_EBP - 0x3e4) = iVar10;
      *(undefined4 *)(unaff_EBP - 0x3e0) = uVar15;
      *(int *)(unaff_EBP - 0x978) = iVar9;
      *(int *)(unaff_EBP - 0x974) = iVar10;
      *(undefined4 *)(unaff_EBP - 0x970) = uVar15;
      *(undefined4 *)(unaff_EBP - 0x96c) = uVar51;
      *(undefined4 *)(unaff_EBP - 0x968) = uVar53;
      *(undefined4 *)(unaff_EBP - 0x960) = 0x40000000;
      *(undefined4 *)(unaff_EBP - 0x95c) = 0x40000000;
      *(undefined4 *)(unaff_EBP - 0x958) = 0x41000000;
      uVar11 = rand();
      uVar11 = uVar11 & 0x80000003;
      if ((int)uVar11 < 0) {
        uVar11 = (uVar11 - 1 | 0xfffffffc) + 1;
      }
      iVar8 = *(int *)(unaff_EBP - 0x1308);
      *(uint *)(unaff_EBP - 0x964) = uVar11;
      FUN_004d6670((void *)(iVar8 + 0xc),(void **)(unaff_EBP - 0x984));
      iVar9 = *(int *)(unaff_EBP - 0x93c);
      *(undefined1 *)(unaff_EBP - 4) = 3;
      if (iVar9 != 0) {
        std::_Container_base0::_Orphan_all((_Container_base0 *)(unaff_EBP - 0x93c));
        FUN_00406310(*(undefined4 **)(unaff_EBP - 0x93c),*(undefined4 **)(unaff_EBP - 0x938));
        operator_delete(*(void **)(unaff_EBP - 0x93c));
        *(undefined4 *)(unaff_EBP - 0x93c) = 0;
        *(undefined4 *)(unaff_EBP - 0x938) = 0;
        *(undefined4 *)(unaff_EBP - 0x934) = 0;
      }
      pvVar21 = *(void **)(unaff_EBP - 0x12e0);
    }
  }
  iVar9 = *(int *)(*(int *)(unaff_EBP - 0x1300) + 0x18);
  if ((((iVar9 != 0) && (iVar9 != 10)) && (iVar9 != 0xe)) && ((iVar9 != 1 && (iVar9 != 5)))) {
    *(undefined4 *)(unaff_EBP - 0x1444) = 0;
    *(undefined4 *)(unaff_EBP - 0x1440) = 0;
    *(undefined4 *)(unaff_EBP - 0x143c) = 0;
    iVar10 = 0;
    iVar9 = 0;
    *(undefined1 *)(unaff_EBP - 4) = 6;
    *(undefined4 *)(unaff_EBP - 0x1338) = 0;
    *(undefined4 *)(unaff_EBP - 0x12ec) = 0;
    do {
      *(undefined4 *)(unaff_EBP - 0x1360) = 0;
      *(int *)(unaff_EBP - 0x1328) = iVar10;
      do {
        if (iVar10 % *(int *)(unaff_EBP - 0x1368) == 0) {
          uVar14 = iVar9 + *(int *)(iVar8 + 0x60) * 0x100 + 4;
          uVar11 = *(int *)(iVar8 + 100) * 0x100 + *(int *)(unaff_EBP - 0x1360) + 4;
          *(uint *)(unaff_EBP - 0x12dc) = uVar11;
          uVar33 = ((int)uVar11 >> 0x1f) << 0x10 | uVar11 >> 0x10;
          *(uint *)(unaff_EBP - 0x133c) = uVar11 * 0x10000;
          *(uint *)(unaff_EBP - 0x1464) = uVar11 * 0x10000;
          *(uint *)(unaff_EBP - 0x1320) = uVar33;
          *(uint *)(unaff_EBP - 0x1460) = uVar33;
          *(uint *)(unaff_EBP - 0x12f0) = uVar14;
          uVar11 = ((int)uVar14 >> 0x1f) << 0x10 | uVar14 >> 0x10;
          *(uint *)(unaff_EBP - 0x1310) = uVar14 * 0x10000;
          *(uint *)(unaff_EBP - 0x1474) = uVar14 * 0x10000;
          *(uint *)(unaff_EBP - 0x1304) = uVar11;
          *(uint *)(unaff_EBP - 0x1470) = uVar11;
          fVar38 = FUN_0052c820(*(uint **)(unaff_EBP - 0x1300),(uint *)(unaff_EBP - 0x1474),
                                (uint *)(unaff_EBP - 0x1464));
          *(float *)(unaff_EBP - 0x1330) = (float)fVar38;
          fVar40 = 1.0 - *(float *)(unaff_EBP - 0x1330);
          if (0.0 < fVar40) {
            *(float *)(unaff_EBP - 0x12d0) = fVar40 * fVar40;
          }
          else {
            *(undefined4 *)(unaff_EBP - 0x12d0) = 0;
          }
          iVar9 = rand();
          if (((float)iVar9 / 32767.0 <= *(float *)(unaff_EBP - 0x12d0) * 0.75) &&
             (iVar9 = FUN_00406100(pvVar21,*(uint *)(unaff_EBP - 0x12f0),
                                   *(uint *)(unaff_EBP - 0x12dc),iVar8), iVar9 != 0)) {
            iVar9 = *(int *)(iVar9 + 0x14);
            while( true ) {
              uVar11 = *(uint *)(unaff_EBP - 0x12dc);
              uVar14 = *(uint *)(unaff_EBP - 0x12f0);
              *(int *)(unaff_EBP - 0x12fc) = iVar9;
              puVar12 = FUN_00405fd0(pvVar21,uVar14,uVar11,iVar9,iVar8);
              if (((puVar12[3] & 0x1f) == 0) || ((puVar12[3] & 0x1f) == 2)) break;
              iVar9 = *(int *)(unaff_EBP - 0x12fc) + 1;
            }
            uVar14 = *(uint *)(unaff_EBP - 0x12fc);
            uVar35 = ((int)uVar14 >> 0x1f) << 0x10 | uVar14 >> 0x10;
            *(uint *)(unaff_EBP - 0x1560) = uVar14 << 0x10;
            *(uint *)(unaff_EBP - 0x155c) = uVar35;
            uVar48 = FUN_0054a946();
            iVar8 = (int)(uVar48 >> 0x20);
            uVar32 = (uint)uVar48;
            uVar33 = *(uint *)(unaff_EBP - 0x133c);
            *(int *)(unaff_EBP - 0x1320) =
                 (*(int *)(unaff_EBP - 0x1320) - iVar8) - (uint)(uVar33 < uVar32);
            puVar26 = (uint *)(unaff_EBP - 0x1310);
            uVar11 = *puVar26;
            *puVar26 = *puVar26 - uVar32;
            *(undefined4 *)(unaff_EBP - 0x338) = *(undefined4 *)(unaff_EBP - 0x1310);
            *(int *)(unaff_EBP - 0x1304) =
                 (*(int *)(unaff_EBP - 0x1304) - iVar8) - (uint)(uVar11 < uVar32);
            *(undefined4 *)(unaff_EBP - 0x334) = *(undefined4 *)(unaff_EBP - 0x1304);
            *(undefined4 *)(unaff_EBP - 0x32c) = *(undefined4 *)(unaff_EBP - 0x1320);
            *(uint *)(unaff_EBP - 0x330) = uVar33 - uVar32;
            *(uint *)(unaff_EBP - 0x328) = uVar14 << 0x10;
            *(uint *)(unaff_EBP - 0x324) = uVar35;
            FUN_004e1420((void *)(unaff_EBP - 0x1444),(undefined4 *)(unaff_EBP - 0x338));
          }
          iVar9 = *(int *)(unaff_EBP - 0x12ec);
        }
        iVar8 = *(int *)(unaff_EBP - 0x1308);
        pvVar21 = *(void **)(unaff_EBP - 0x12e0);
        iVar17 = *(int *)(unaff_EBP - 0x1360) + 0x12;
        iVar10 = *(int *)(unaff_EBP - 0x1328) + 3;
        *(int *)(unaff_EBP - 0x1328) = iVar10;
        *(int *)(unaff_EBP - 0x1360) = iVar17;
      } while (iVar17 < 0xfc);
      iVar9 = iVar9 + 0x12;
      iVar10 = *(int *)(unaff_EBP - 0x1338) + 1;
      *(int *)(unaff_EBP - 0x1338) = iVar10;
      *(int *)(unaff_EBP - 0x12ec) = iVar9;
    } while (iVar9 < 0xfc);
    FUN_005104e0(pvVar21,iVar8,*(uint **)(unaff_EBP - 0x1300),(int *)(unaff_EBP - 0x1444));
    iVar9 = *(int *)(unaff_EBP - 0x1444);
    *(undefined1 *)(unaff_EBP - 4) = 3;
    if (iVar9 != 0) {
      std::_Container_base0::_Orphan_all((_Container_base0 *)(unaff_EBP - 0x1444));
      operator_delete(*(void **)(unaff_EBP - 0x1444));
      *(undefined4 *)(unaff_EBP - 0x1444) = 0;
      *(undefined4 *)(unaff_EBP - 0x1440) = 0;
      *(undefined4 *)(unaff_EBP - 0x143c) = 0;
    }
  }
  puVar26 = *(uint **)(unaff_EBP - 0x1300);
  if (puVar26[6] == 9) {
    uVar49 = __alldiv(*puVar26,puVar26[1],0x10000,0);
    iVar10 = (int)uVar49;
    iVar9 = *(int *)(unaff_EBP - 0x1300);
    uVar11 = *(uint *)(iVar9 + 0xc);
    *(int *)(unaff_EBP - 0x40) = iVar10;
    uVar49 = __alldiv(*(uint *)(iVar9 + 8),uVar11,0x10000,0);
    iVar9 = (int)uVar49;
    *(int *)(unaff_EBP - 0x184) = (int)(iVar10 + (iVar10 >> 0x1f & 0xffU)) >> 8;
    *(int *)(unaff_EBP - 0x3c) = iVar9;
    *(int *)(unaff_EBP - 0x180) = (int)(iVar9 + (iVar9 >> 0x1f & 0xffU)) >> 8;
    iVar9 = 0;
    piVar23 = (int *)(iVar8 + 0x60);
    do {
      if (*(int *)((unaff_EBP - 0x184) + iVar9 * 4) != *piVar23) goto LAB_0051ec4a;
      iVar9 = iVar9 + 1;
      piVar23 = piVar23 + 1;
    } while (iVar9 < 2);
    pSVar18 = operator_new(0x10f0);
    if (pSVar18 == (Spawn *)0x0) {
      pSVar18 = (Spawn *)0x0;
    }
    else {
      pSVar18 = cube::Spawn::Spawn(pSVar18);
    }
    puVar20 = *(undefined4 **)(unaff_EBP - 0x1300);
    *(undefined4 *)&(pSVar18->Spawn_data).field_0xc = *puVar20;
    *(undefined4 *)&(pSVar18->Spawn_data).field_0x10 = puVar20[1];
    *(undefined4 *)&(pSVar18->Spawn_data).field_0x14 = puVar20[2];
    uVar11 = puVar20[3];
    *(uint *)&(pSVar18->Spawn_data).field_0x18 = uVar11;
    uVar14 = *(uint *)&(pSVar18->Spawn_data).field_0x14;
    *(Spawn **)(unaff_EBP - 0x13f4) = pSVar18;
    iVar9 = iVar8;
    uVar49 = __alldiv(uVar14,uVar11,0x10000,0);
    uVar11 = (uint)uVar49;
    uVar49 = __alldiv(*(uint *)&(pSVar18->Spawn_data).field_0xc,
                      *(uint *)&(pSVar18->Spawn_data).field_0x10,0x10000,0);
    iVar9 = FUN_00406100(*(void **)(unaff_EBP - 0x12e0),(uint)uVar49,uVar11,iVar9);
    uVar11 = *(uint *)(iVar9 + 0x10);
    iVar9 = *(int *)(unaff_EBP - 0x1300);
    *(uint *)&(pSVar18->Spawn_data).field_0x1c = uVar11 << 0x10;
    *(uint *)&(pSVar18->Spawn_data).field_0x20 = ((int)uVar11 >> 0x1f) << 0x10 | uVar11 >> 0x10;
    (pSVar18->Spawn_data).offset_0x24 = 1;
    (pSVar18->Spawn_data).offset_0x28 = 0x6b;
    (pSVar18->Spawn_data).offset_0x30 = *(undefined4 *)(iVar9 + 0x24);
    (pSVar18->Spawn_data).offset_0x54 = *(undefined1 *)(iVar9 + 0x28);
    FUN_004f2be0((void *)(iVar8 + 0x18),(undefined4 *)(unaff_EBP - 0x13f4));
  }
LAB_0051ec4a:
  *(undefined4 *)(unaff_EBP - 0x140c) = 0;
  *(undefined4 *)(unaff_EBP - 0x1408) = 0;
  *(undefined4 *)(unaff_EBP - 0x1404) = 0;
  iVar8 = *(int *)(unaff_EBP - 0x137c);
  *(undefined1 *)(unaff_EBP - 4) = 7;
  *(undefined4 *)(unaff_EBP - 0x12d0) = 0;
  pcVar36 = (char *)(iVar8 + 0x18);
  iVar8 = 0;
  do {
    iVar9 = 0;
    do {
      if (*pcVar36 != '\0') {
        *(int *)(unaff_EBP - 0x17c) = *(int *)(unaff_EBP - 0x13d0) * 0x40 + iVar8;
        *(int *)(unaff_EBP - 0x178) = *(int *)(unaff_EBP - 0x1384) * 0x40 + iVar9;
        uVar15 = *(undefined4 *)(unaff_EBP - 0x17c);
        uVar51 = *(undefined4 *)(unaff_EBP - 0x178);
        *(undefined4 *)(unaff_EBP - 0x2c) = uVar15;
        *(undefined4 *)(unaff_EBP - 0x28) = uVar51;
        iVar10 = *(int *)(unaff_EBP - 0x2c) - *(int *)(unaff_EBP - 0x135c);
        iVar8 = *(int *)(unaff_EBP - 0x28) - *(int *)(unaff_EBP - 0x1364);
        *(int *)(unaff_EBP - 0x2c) = iVar10;
        *(int *)(unaff_EBP - 0x28) = iVar8;
        *(int *)(unaff_EBP - 0x394) = iVar8 * iVar8 + iVar10 * iVar10;
        *(undefined4 *)(unaff_EBP - 0x39c) = uVar15;
        *(undefined4 *)(unaff_EBP - 0x398) = uVar51;
        FUN_0042feb0((void *)(unaff_EBP - 0x140c),(undefined4 *)(unaff_EBP - 0x39c));
        iVar8 = *(int *)(unaff_EBP - 0x12d0);
      }
      iVar9 = iVar9 + 1;
      pcVar36 = pcVar36 + 0x10;
    } while (iVar9 < 0x40);
    iVar8 = iVar8 + 1;
    *(int *)(unaff_EBP - 0x12d0) = iVar8;
  } while (iVar8 < 0x40);
  piVar23 = *(int **)(unaff_EBP - 0x1408);
  piVar22 = *(int **)(unaff_EBP - 0x140c);
  *(undefined1 *)(unaff_EBP - 0x141c) = 0;
  FUN_004f5e00(piVar22,piVar23,((int)piVar23 - (int)piVar22) / 0xc,
               *(undefined4 *)(unaff_EBP - 0x141c));
  *(undefined4 *)(unaff_EBP - 0x1304) = 0;
LAB_0051ed60:
  iVar8 = 0;
  *(undefined4 *)(unaff_EBP - 0x1310) = 0;
  do {
    uVar11 = rand();
    uVar11 = uVar11 & 0x80000003;
    bVar37 = uVar11 == 0;
    if ((int)uVar11 < 0) {
      bVar37 = (uVar11 - 1 | 0xfffffffc) == 0xffffffff;
    }
    if (bVar37) {
LAB_0051f975:
      iVar8 = *(int *)(unaff_EBP - 0x1308);
LAB_0051f97b:
      pvVar21 = *(void **)(unaff_EBP - 0x12e0);
    }
    else {
      iVar9 = rand();
      uVar14 = *(int *)(unaff_EBP - 0x1304) * 0x55 + 0x18 +
               iVar9 % 10 + *(int *)(unaff_EBP - 0x1358);
      *(uint *)(unaff_EBP - 0x12cc) = uVar14;
      iVar9 = rand();
      puVar26 = *(uint **)(unaff_EBP - 0x1300);
      uVar11 = puVar26[6];
      uVar33 = iVar8 * 0x55 + 0x18 + iVar9 % 10 + *(int *)(unaff_EBP - 0x132c);
      *(uint *)(unaff_EBP - 0x12d4) = uVar33;
      if ((uVar11 != 0) && (uVar11 != 10)) {
        *(uint *)(unaff_EBP - 0x146c) = uVar33 * 0x10000;
        *(uint *)(unaff_EBP - 0x1468) = ((int)uVar33 >> 0x1f) << 0x10 | uVar33 >> 0x10;
        *(uint *)(unaff_EBP - 0x147c) = uVar14 * 0x10000;
        *(uint *)(unaff_EBP - 0x1478) = ((int)uVar14 >> 0x1f) << 0x10 | uVar14 >> 0x10;
        fVar38 = FUN_0052c820(puVar26,(uint *)(unaff_EBP - 0x147c),(uint *)(unaff_EBP - 0x146c));
        *(float *)(unaff_EBP - 0x1330) = (float)fVar38;
        fVar40 = 1.0 - *(float *)(unaff_EBP - 0x1330);
        if ((0.0 < fVar40) && (0.3 < fVar40 * fVar40)) goto LAB_0051f975;
      }
      iVar8 = *(int *)(unaff_EBP - 0x1308);
      pvVar21 = *(void **)(unaff_EBP - 0x12e0);
      iVar9 = FUN_00406100(pvVar21,uVar14,*(uint *)(unaff_EBP - 0x12d4),iVar8);
      if (iVar9 == 0) {
        fVar38 = (float10)FUN_004f8b40(pvVar21,*(int *)(unaff_EBP - 0x12cc),
                                       *(int *)(unaff_EBP - 0x12d4));
        *(float *)(unaff_EBP - 0x1330) = (float)fVar38;
        fVar40 = *(float *)(unaff_EBP - 0x1330);
      }
      else {
        fVar40 = *(float *)(iVar9 + 8);
      }
      *(float *)(unaff_EBP - 0x12d0) = fVar40;
      if (0.2 <= fVar40) {
LAB_0051eed2:
        iVar9 = FUN_00406100(pvVar21,*(uint *)(unaff_EBP - 0x12cc),*(uint *)(unaff_EBP - 0x12d4),
                             iVar8);
        if (iVar9 == 0) {
          fVar38 = (float10)FUN_004f8570(pvVar21,*(float *)(unaff_EBP - 0x12cc),
                                         *(uint *)(unaff_EBP - 0x12d4));
          *(float *)(unaff_EBP - 0x1330) = (float)fVar38;
          fVar40 = *(float *)(unaff_EBP - 0x1330);
        }
        else {
          fVar40 = *(float *)(iVar9 + 4);
        }
        *(float *)(unaff_EBP - 0x12dc) = fVar40;
        if (fVar40 < 0.2) {
          uVar11 = rand();
          uVar11 = uVar11 & 0x80000003;
          bVar37 = uVar11 == 0;
          if ((int)uVar11 < 0) {
            bVar37 = (uVar11 - 1 | 0xfffffffc) == 0xffffffff;
          }
          if (bVar37) goto LAB_0051f981;
        }
        piVar23 = (int *)**(int **)(unaff_EBP - 0x1378);
        if (piVar23 != *(int **)(unaff_EBP - 0x1378)) {
          uVar11 = *(uint *)(unaff_EBP - 0x12d4);
          *(uint *)(unaff_EBP - 0x1330) = uVar11 << 0x10;
          uVar14 = *(uint *)(unaff_EBP - 0x12cc);
          *(uint *)(unaff_EBP - 0x133c) = ((int)uVar11 >> 0x1f) << 0x10 | uVar11 >> 0x10;
          *(uint *)(unaff_EBP - 0x1348) = ((int)uVar14 >> 0x1f) << 0x10 | uVar14 >> 0x10;
          *(uint *)(unaff_EBP - 0x1334) = uVar14 << 0x10;
          do {
            uVar11 = *(uint *)(unaff_EBP - 0x1330);
            uVar14 = piVar23[4];
            iVar9 = *(int *)(unaff_EBP - 0x133c);
            iVar10 = piVar23[5];
            *(uint *)(unaff_EBP - 0x13b4) = uVar11 - piVar23[4];
            uVar33 = *(uint *)(unaff_EBP - 0x1334);
            *(uint *)(unaff_EBP - 0x13b0) = (iVar9 - iVar10) - (uint)(uVar11 < uVar14);
            iVar9 = *(int *)(unaff_EBP - 0x1348);
            *(float *)(unaff_EBP - 0x1350) = (float)*(longlong *)(unaff_EBP - 0x13b4);
            uVar11 = piVar23[2];
            uVar14 = piVar23[2];
            *(undefined4 *)(unaff_EBP - 0x1350) = *(undefined4 *)(unaff_EBP - 0x1350);
            fVar40 = *(float *)(unaff_EBP - 0x1350);
            iVar10 = piVar23[3];
            *(uint *)(unaff_EBP - 0x13bc) = uVar33 - uVar14;
            *(uint *)(unaff_EBP - 0x13b8) = (iVar9 - iVar10) - (uint)(uVar33 < uVar11);
            fVar40 = fVar40 * 1.5258789e-05;
            *(float *)(unaff_EBP - 0x1350) = (float)*(longlong *)(unaff_EBP - 0x13bc);
            *(undefined4 *)(unaff_EBP - 0x1350) = *(undefined4 *)(unaff_EBP - 0x1350);
            fVar39 = *(float *)(unaff_EBP - 0x1350) * 1.5258789e-05;
            *(float *)(unaff_EBP - 0x15fc) = fVar39;
            if (fVar40 * fVar40 + fVar39 * fVar39 < 400.0) goto LAB_0051f981;
            piVar23 = (int *)*piVar23;
          } while (piVar23 != (int *)*(int *)(unaff_EBP - 0x1378));
        }
        iVar9 = FUN_00406100(pvVar21,*(uint *)(unaff_EBP - 0x12cc),*(uint *)(unaff_EBP - 0x12d4),
                             iVar8);
        iVar9 = *(int *)(iVar9 + 0x14);
        while( true ) {
          uVar11 = *(uint *)(unaff_EBP - 0x12d4);
          uVar14 = *(uint *)(unaff_EBP - 0x12cc);
          *(int *)(unaff_EBP - 0x12d8) = iVar9;
          puVar12 = FUN_00405fd0(pvVar21,uVar14,uVar11,iVar9,iVar8);
          if (((puVar12[3] & 0x1f) == 0) || ((puVar12[3] & 0x1f) == 2)) break;
          iVar9 = *(int *)(unaff_EBP - 0x12d8) + 1;
        }
        puVar12 = FUN_00405fd0(pvVar21,*(uint *)(unaff_EBP - 0x12cc),*(uint *)(unaff_EBP - 0x12d4),
                               *(int *)(unaff_EBP - 0x12d8) + -1,iVar8);
        uVar11 = *(uint *)(unaff_EBP - 0x12d4);
        uVar14 = *(uint *)(unaff_EBP - 0x12cc);
        *(uint *)(unaff_EBP - 0x12f0) = (byte)puVar12[3] & 0xffffff1f;
        fVar38 = FUN_004d19f0(pvVar21,uVar14,uVar11);
        *(float *)(unaff_EBP - 0x1330) = (float)fVar38;
        if (*(float *)(unaff_EBP - 0x1330) <= 0.0) {
          fVar38 = (float10)FUN_0052d990(pvVar21,*(uint *)(unaff_EBP - 0x12cc),
                                         *(uint *)(unaff_EBP - 0x12d4));
          *(float *)(unaff_EBP - 0x1330) = (float)fVar38;
          if (1.0 < *(float *)(unaff_EBP - 0x1330) || *(float *)(unaff_EBP - 0x1330) == 1.0) {
            pSVar18 = operator_new(0x10f0);
            if (pSVar18 == (Spawn *)0x0) {
              pSVar18 = (Spawn *)0x0;
            }
            else {
              pSVar18 = cube::Spawn::Spawn(pSVar18);
            }
            *(Spawn **)(unaff_EBP - 0x12e4) = pSVar18;
            *(Spawn **)(unaff_EBP - 0x131c) = pSVar18;
            uVar11 = *(uint *)(unaff_EBP - 0x12d8);
            uVar14 = ((int)uVar11 >> 0x1f) << 0x10 | uVar11 >> 0x10;
            *(uint *)(unaff_EBP - 0x1350) = uVar11 << 0x10;
            *(uint *)(unaff_EBP - 0x1558) = uVar11 << 0x10;
            uVar11 = *(uint *)(unaff_EBP - 0x12d4);
            *(uint *)(unaff_EBP - 0x1334) = uVar14;
            *(uint *)(unaff_EBP - 0x1554) = uVar14;
            uVar48 = FUN_0054a946();
            *(int *)(unaff_EBP - 0x1330) = (int)uVar48;
            uVar14 = *(uint *)(unaff_EBP - 0x12cc);
            lVar5 = uVar48 + CONCAT44(((int)uVar11 >> 0x1f) << 0x10 | uVar11 >> 0x10,uVar11 << 0x10)
            ;
            *(int *)(unaff_EBP - 0x224) = (int)lVar5;
            uVar15 = *(undefined4 *)(unaff_EBP - 0x1350);
            *(int *)(unaff_EBP - 0x133c) = (int)(uVar48 >> 0x20);
            uVar11 = *(uint *)(unaff_EBP - 0x1330);
            *(undefined4 *)(unaff_EBP - 0x21c) = uVar15;
            iVar10 = uVar11 + uVar14 * 0x10000;
            iVar8 = *(int *)(unaff_EBP - 0x133c);
            *(undefined4 *)(unaff_EBP - 0x218) = *(undefined4 *)(unaff_EBP - 0x1334);
            iVar9 = *(int *)(unaff_EBP - 0x12e4);
            iVar8 = iVar8 + (((int)uVar14 >> 0x1f) << 0x10 | uVar14 >> 0x10) +
                    (uint)CARRY4(uVar11,uVar14 * 0x10000);
            *(int *)(unaff_EBP - 0x228) = iVar8;
            *(int *)(unaff_EBP - 0x220) = (int)((ulonglong)lVar5 >> 0x20);
            *(int *)(unaff_EBP - 0x22c) = iVar10;
            *(int *)(iVar9 + 0x10) = iVar10;
            *(int *)(iVar9 + 0x14) = iVar8;
            *(undefined4 *)(iVar9 + 0x18) = *(undefined4 *)(unaff_EBP - 0x224);
            *(undefined4 *)(iVar9 + 0x1c) = *(undefined4 *)(unaff_EBP - 0x220);
            *(undefined4 *)(iVar9 + 0x20) = *(undefined4 *)(unaff_EBP - 0x21c);
            uVar15 = *(undefined4 *)(unaff_EBP - 0x218);
            *(int **)(unaff_EBP - 0x133c) = (int *)(iVar9 + 0x10);
            *(undefined4 *)(iVar9 + 0x24) = uVar15;
            iVar10 = rand();
            iVar8 = *(int *)(unaff_EBP - 0x12e4);
            pvVar21 = *(void **)(unaff_EBP - 0x12e0);
            iVar9 = *(int *)(unaff_EBP - 0x12d8);
            *(float *)(iVar8 + 0x54) = ((float)iVar10 * 360.0) / 32767.0;
            fVar40 = *(float *)(unaff_EBP - 0x12d4);
            fVar39 = *(float *)(unaff_EBP - 0x12cc);
            *(undefined4 *)(iVar8 + 0x34) = 1;
            pvVar19 = FUN_005290d0(pvVar21,fVar39,fVar40,iVar9,0);
            *(void **)(iVar8 + 0x2c) = pvVar19;
            iVar9 = *(int *)(unaff_EBP - 0x12f0);
            if (iVar9 == 0xc) {
              uVar11 = rand();
              uVar11 = uVar11 & 0x80000001;
              if ((int)uVar11 < 0) {
                uVar11 = (uVar11 - 1 | 0xfffffffe) + 1;
              }
              *(uint *)(iVar8 + 0x2c) = (-(uint)(uVar11 != 0) & 0xfffffffc) + 0x82;
LAB_0051f2a0:
              *(undefined4 *)(iVar8 + 0x28) = 6;
              iVar8 = *(int *)(unaff_EBP - 0x1308);
              FUN_004f2be0((void *)(iVar8 + 0x18),(undefined4 *)(unaff_EBP - 0x131c));
            }
            else {
              if (*(int *)(unaff_EBP - 0x12d8) < 0) {
LAB_0051f4d1:
                iVar8 = *(int *)(unaff_EBP - 0x1308);
              }
              else {
                if (((iVar9 != 4) && (iVar9 != 5)) && (iVar9 != 9)) {
                  if (iVar9 == 10) {
                    uVar11 = rand();
                    uVar11 = uVar11 & 0x80000003;
                    bVar37 = uVar11 == 0;
                    if ((int)uVar11 < 0) {
                      bVar37 = (uVar11 - 1 | 0xfffffffc) == 0xffffffff;
                    }
                    if (bVar37) {
                      uVar11 = rand();
                      uVar11 = uVar11 & 0x80000003;
                      if ((int)uVar11 < 0) {
                        uVar11 = (uVar11 - 1 | 0xfffffffc) + 1;
                      }
                      if (uVar11 == 1) {
                        *(undefined4 *)(iVar8 + 0x2c) = 0x7b;
                        *(undefined4 *)(iVar8 + 0xf58) = 0x41c80000;
                      }
                      else if (uVar11 == 2) {
                        *(undefined4 *)(iVar8 + 0x2c) = 0x7d;
                        *(undefined4 *)(iVar8 + 0xf58) = 0x41c80000;
                      }
                      else if (uVar11 == 3) {
                        *(undefined4 *)(iVar8 + 0x2c) = 0x7a;
                        *(undefined4 *)(iVar8 + 0xf58) = 0x41c80000;
                      }
                      else {
                        *(undefined4 *)(iVar8 + 0x2c) = 0x79;
                        *(undefined4 *)(iVar8 + 0xf58) = 0x41c80000;
                      }
                      goto LAB_0051f2a0;
                    }
                  }
                  goto LAB_0051f4d1;
                }
                iVar9 = rand();
                if (((iVar9 % 3 != 0) && (0.8 < *(float *)(unaff_EBP - 0x12d0))) &&
                   (*(float *)(unaff_EBP - 0x12dc) <= 0.1 && *(float *)(unaff_EBP - 0x12dc) != 0.1))
                {
                  uVar11 = rand();
                  uVar11 = uVar11 & 0x80000001;
                  if ((int)uVar11 < 0) {
                    uVar11 = (uVar11 - 1 | 0xfffffffe) + 1;
                  }
                  if (uVar11 == 0) {
                    *(undefined4 *)(iVar8 + 0x2c) = 0x7c;
                  }
                  else if (uVar11 == 1) {
                    *(undefined4 *)(iVar8 + 0x2c) = 0x80;
                  }
                  goto LAB_0051f2a0;
                }
                if (*(int *)(unaff_EBP - 0x12f0) != 4) goto LAB_0051f4d1;
                iVar9 = rand();
                iVar8 = *(int *)(unaff_EBP - 0x1308);
                if (iVar9 % 3 != 0) {
                  iVar9 = FUN_00406100(pvVar21,*(uint *)(unaff_EBP - 0x12cc),
                                       *(uint *)(unaff_EBP - 0x12d4),iVar8);
                  if (iVar9 == 0) {
                    fVar38 = (float10)FUN_004f8570(pvVar21,*(float *)(unaff_EBP - 0x12cc),
                                                   *(uint *)(unaff_EBP - 0x12d4));
                    *(float *)(unaff_EBP - 0x1330) = (float)fVar38;
                    fVar40 = *(float *)(unaff_EBP - 0x1330);
                  }
                  else {
                    fVar40 = *(float *)(iVar9 + 4);
                  }
                  if (0.1 < fVar40) {
                    uVar11 = rand();
                    uVar11 = uVar11 & 0x80000003;
                    if ((int)uVar11 < 0) {
                      uVar11 = (uVar11 - 1 | 0xfffffffc) + 1;
                    }
                    if (uVar11 == 1) {
                      iVar9 = *(int *)(unaff_EBP - 0x12e4);
                      *(undefined4 *)(iVar9 + 0x2c) = 0x7b;
                    }
                    else if (uVar11 == 2) {
                      iVar9 = *(int *)(unaff_EBP - 0x12e4);
                      *(undefined4 *)(iVar9 + 0x2c) = 0x7f;
                    }
                    else {
                      iVar9 = *(int *)(unaff_EBP - 0x12e4);
                      if (uVar11 == 3) {
                        *(undefined4 *)(iVar9 + 0x2c) = 0x7d;
                      }
                      else {
                        *(undefined4 *)(iVar9 + 0x2c) = 0x78;
                      }
                    }
                    *(undefined4 *)(iVar9 + 0xf58) = 0x41c80000;
                    *(undefined4 *)(iVar9 + 0x28) = 6;
                    FUN_004f2be0((void *)(iVar8 + 0x18),(undefined4 *)(unaff_EBP - 0x131c));
                    goto LAB_0051f981;
                  }
                }
              }
              iVar9 = *(int *)(unaff_EBP - 0x12e4);
              if ((*(int *)(iVar9 + 0x28) == 1) && ((*(ushort *)(iVar9 + 0x7a) & 0x1000) == 0)) {
                iVar10 = rand();
                iVar9 = *(int *)(unaff_EBP - 0x12e4);
                if (iVar10 % 100 == 0) {
                  *(ushort *)(iVar9 + 0x7a) = *(ushort *)(iVar9 + 0x7a) | 0x200;
                }
              }
              uVar49 = __alldiv(*(uint *)(iVar9 + 0x18),*(uint *)(iVar9 + 0x1c),0x10000,0);
              iVar9 = (int)uVar49 + ((int)uVar49 >> 0x1f & 0xffU);
              uVar11 = (int)((iVar9 >> 8) + (iVar9 >> 0x1f & 7U)) >> 3;
              uVar49 = __alldiv(**(uint **)(unaff_EBP - 0x133c),(*(uint **)(unaff_EBP - 0x133c))[1],
                                0x10000,0);
              iVar9 = (int)uVar49 + ((int)uVar49 >> 0x1f & 0xffU);
              iVar10 = FUN_004286f0(pvVar21,(int)((iVar9 >> 8) + (iVar9 >> 0x1f & 7U)) >> 3,uVar11);
              iVar9 = *(int *)(unaff_EBP - 0x12e4);
              *(int *)(unaff_EBP - 0x12d0) = iVar10;
              if (*(int *)(iVar9 + 0x28) != 6) {
                FUN_0040f0a0(*(undefined4 *)(iVar9 + 0x2c),(undefined4 *)(unaff_EBP - 0x145c),
                             (undefined4 *)(unaff_EBP - 0x1458));
                iVar10 = rand();
                puVar26 = *(uint **)(unaff_EBP - 0x12d0);
                *(int *)(iVar9 + 0x34) =
                     iVar10 % ((*(int *)(unaff_EBP - 0x1458) - *(int *)(unaff_EBP - 0x145c)) + 1) +
                     *(int *)(unaff_EBP - 0x145c);
                if (((puVar26 != (uint *)0x0) && (*(int *)(unaff_EBP - 0x145c) <= (int)puVar26[9]))
                   && ((int)puVar26[9] <= *(int *)(unaff_EBP - 0x1458))) {
                  fVar38 = FUN_0052c820(puVar26,(uint *)(iVar9 + 0x10),(uint *)(iVar9 + 0x18));
                  *(float *)(unaff_EBP - 0x1330) = (float)fVar38;
                  fVar40 = 1.0 - *(float *)(unaff_EBP - 0x1330);
                  if ((0.0 < fVar40) && (0.0 < fVar40 * fVar40)) {
                    *(undefined1 *)(iVar9 + 0x58) =
                         *(undefined1 *)(*(int *)(unaff_EBP - 0x12d0) + 0x28);
                  }
                }
              }
              if (*(int *)(iVar9 + 0x28) == 1) {
                *(undefined4 *)(iVar9 + 0x40) = 21600000;
                *(undefined4 *)(iVar9 + 0x44) = 86400000;
              }
              *(void **)(unaff_EBP - 0x133c) = (void *)(iVar8 + 0x18);
              FUN_004f2be0((void *)(iVar8 + 0x18),(undefined4 *)(unaff_EBP - 0x131c));
              FUN_0040efc0(*(undefined4 *)(*(int *)(unaff_EBP - 0x131c) + 0x2c),
                           (undefined4 *)(unaff_EBP - 0x14a4),(undefined4 *)(unaff_EBP - 0x14bc));
              iVar34 = rand();
              iVar9 = *(int *)(unaff_EBP - 0x14a4);
              iVar10 = *(int *)(unaff_EBP - 0x14bc);
              iVar17 = 0;
              *(undefined4 *)(unaff_EBP - 0x12fc) = 0;
              iVar9 = iVar9 + -1 + iVar34 % ((iVar10 - iVar9) + 1);
              *(int *)(unaff_EBP - 0x12d0) = iVar9;
              if (iVar9 < 1) goto LAB_0051f97b;
              while( true ) {
                pSVar18 = operator_new(0x10f0);
                if (pSVar18 == (Spawn *)0x0) {
                  pSVar18 = (Spawn *)0x0;
                }
                else {
                  pSVar18 = cube::Spawn::Spawn(pSVar18);
                }
                (pSVar18->Spawn_data).offset_0x24 = 1;
                fVar40 = ((float)iVar17 * 6.2831855) / (float)iVar9;
                *(Spawn **)(unaff_EBP - 0x1384) = pSVar18;
                *(undefined8 *)(unaff_EBP - 0x15bc) = 0;
                dVar41 = (double)fVar40;
                *(Spawn **)(unaff_EBP - 0x12e8) = pSVar18;
                *(float *)(unaff_EBP - 0x1330) = fVar40;
                libm_sse2_sin_precise();
                *(float *)(unaff_EBP - 0x1328) = (float)dVar41 * 8.0 * 65536.0;
                uVar48 = FUN_0054a946();
                dVar41 = (double)*(float *)(unaff_EBP - 0x1330);
                *(ulonglong *)(unaff_EBP - 0x148c) = uVar48;
                libm_sse2_cos_precise();
                *(float *)(unaff_EBP - 0x1338) = (float)dVar41 * 8.0 * 65536.0;
                uVar50 = FUN_0054a946();
                uVar15 = (undefined4)(uVar50 >> 0x20);
                uVar35 = (uint)uVar50;
                *(int *)(unaff_EBP - 0x454) = (int)uVar48;
                *(undefined4 *)(unaff_EBP - 0x14fc) = uVar15;
                *(undefined4 *)(unaff_EBP - 0x458) = uVar15;
                *(undefined4 *)(unaff_EBP - 0x450) = *(undefined4 *)(unaff_EBP - 0x1488);
                iVar8 = *(int *)(unaff_EBP - 0x131c);
                *(uint *)(unaff_EBP - 0x1500) = uVar35;
                *(uint *)(unaff_EBP - 0x45c) = uVar35;
                *(undefined8 *)(unaff_EBP - 0x44c) = 0;
                uVar15 = *(undefined4 *)(iVar8 + 0x10);
                *(undefined4 *)(unaff_EBP - 0x19c) = uVar15;
                *(undefined4 *)(unaff_EBP - 0x1330) = uVar15;
                iVar8 = *(int *)(unaff_EBP - 0x131c);
                iVar9 = *(int *)(iVar8 + 0x14);
                *(int *)(unaff_EBP - 0x198) = iVar9;
                uVar11 = *(uint *)(iVar8 + 0x18);
                *(uint *)(unaff_EBP - 0x194) = uVar11;
                iVar10 = *(int *)(iVar8 + 0x1c);
                *(int *)(unaff_EBP - 400) = iVar10;
                *(undefined4 *)(unaff_EBP - 0x18c) = *(undefined4 *)(iVar8 + 0x20);
                *(undefined4 *)(unaff_EBP - 0x188) =
                     *(undefined4 *)(*(int *)(unaff_EBP - 0x131c) + 0x24);
                uVar14 = *(uint *)(unaff_EBP - 0x1330);
                iVar34 = uVar14 + uVar35;
                iVar8 = *(int *)(unaff_EBP - 0x14fc);
                uVar32 = *(uint *)(unaff_EBP - 0x148c);
                uVar33 = *(uint *)(unaff_EBP - 0x148c);
                *(int *)(unaff_EBP - 0x19c) = iVar34;
                iVar17 = *(int *)(unaff_EBP - 0x1488);
                *(uint *)(unaff_EBP - 0x198) = iVar9 + iVar8 + (uint)CARRY4(uVar14,uVar35);
                *(uint *)(unaff_EBP - 400) = iVar10 + iVar17 + (uint)CARRY4(uVar11,uVar32);
                iVar8 = *(int *)(unaff_EBP - 0x1384);
                *(uint *)(unaff_EBP - 0x194) = uVar11 + uVar33;
                *(int *)(iVar8 + 0x10) = iVar34;
                *(undefined4 *)(iVar8 + 0x14) = *(undefined4 *)(unaff_EBP - 0x198);
                *(undefined4 *)(iVar8 + 0x18) = *(undefined4 *)(unaff_EBP - 0x194);
                *(undefined4 *)(iVar8 + 0x1c) = *(undefined4 *)(unaff_EBP - 400);
                *(undefined4 *)(iVar8 + 0x20) = *(undefined4 *)(unaff_EBP - 0x18c);
                uVar11 = *(uint *)(unaff_EBP - 0x188);
                *(uint *)(iVar8 + 0x24) = uVar11;
                __alldiv(*(uint *)(iVar8 + 0x20),uVar11,0x10000,0);
                __alldiv(*(uint *)(iVar8 + 0x18),*(uint *)(iVar8 + 0x1c),0x10000,0);
                __alldiv(*(uint *)(*(int *)(unaff_EBP - 0x1384) + 0x10),
                         *(uint *)(*(int *)(unaff_EBP - 0x1384) + 0x14),0x10000,0);
                pvVar21 = *(void **)(unaff_EBP - 0x12e0);
                uVar11 = FUN_0052bfa0();
                iVar8 = *(int *)(unaff_EBP - 0x1384);
                *(uint *)(iVar8 + 0x2c) = uVar11;
                *(ushort *)(iVar8 + 0x7a) = *(ushort *)(iVar8 + 0x7a) & 0xfdff;
                if (*(int *)(iVar8 + 0x28) != 6) {
                  FUN_0040f0a0(*(undefined4 *)(iVar8 + 0x2c),(undefined4 *)(unaff_EBP - 0x1490),
                               (undefined4 *)(unaff_EBP - 0x14b4));
                  iVar10 = rand();
                  iVar9 = *(int *)(unaff_EBP - 0x131c);
                  *(int *)(iVar8 + 0x34) =
                       iVar10 % ((*(int *)(unaff_EBP - 0x14b4) - *(int *)(unaff_EBP - 0x1490)) + 1)
                       + *(int *)(unaff_EBP - 0x1490);
                  *(undefined1 *)(iVar8 + 0x58) = *(undefined1 *)(iVar9 + 0x58);
                }
                iVar9 = rand();
                pvVar19 = *(void **)(unaff_EBP - 0x133c);
                *(float *)(iVar8 + 0x54) = ((float)iVar9 * 360.0) / 32767.0;
                FUN_004f2be0(pvVar19,(undefined4 *)(unaff_EBP - 0x12e8));
                iVar9 = *(int *)(unaff_EBP - 0x12d0);
                iVar8 = *(int *)(unaff_EBP - 0x12fc) + 1;
                *(int *)(unaff_EBP - 0x12fc) = iVar8;
                if (iVar9 <= iVar8) break;
                iVar17 = *(int *)(unaff_EBP - 0x12fc);
              }
              iVar8 = *(int *)(unaff_EBP - 0x1308);
            }
          }
        }
      }
      else {
        uVar11 = rand();
        uVar11 = uVar11 & 0x80000003;
        bVar37 = uVar11 == 0;
        if ((int)uVar11 < 0) {
          bVar37 = (uVar11 - 1 | 0xfffffffc) == 0xffffffff;
        }
        if (!bVar37) goto LAB_0051eed2;
      }
    }
LAB_0051f981:
    iVar9 = *(int *)(unaff_EBP - 0x1310) + 1;
    *(int *)(unaff_EBP - 0x1310) = iVar9;
    if (2 < iVar9) break;
    iVar8 = *(int *)(unaff_EBP - 0x1310);
  } while( true );
  iVar9 = *(int *)(unaff_EBP - 0x1304) + 1;
  *(int *)(unaff_EBP - 0x1304) = iVar9;
  if (2 < iVar9) goto code_r0x0051f9ad;
  goto LAB_0051ed60;
code_r0x0051f9ad:
  iVar9 = *(int *)(unaff_EBP - 0x140c);
  *(undefined1 *)(unaff_EBP - 4) = 3;
  if (iVar9 != 0) {
    std::_Container_base0::_Orphan_all((_Container_base0 *)(unaff_EBP - 0x140c));
    operator_delete(*(void **)(unaff_EBP - 0x140c));
    *(undefined4 *)(unaff_EBP - 0x140c) = 0;
    *(undefined4 *)(unaff_EBP - 0x1408) = 0;
    *(undefined4 *)(unaff_EBP - 0x1404) = 0;
  }
  uVar11 = *(uint *)(unaff_EBP - 0x1358);
  *(uint *)(unaff_EBP - 0x12c8) = uVar11;
  if ((int)uVar11 < *(int *)(unaff_EBP - 0x1370)) {
    uVar14 = *(uint *)(unaff_EBP - 0x132c);
    *(undefined4 *)(unaff_EBP - 0x141c) = 0x1d6;
    iVar9 = uVar14 + 0x100;
    *(undefined4 *)(unaff_EBP - 0x13f4) = 0x96;
    *(undefined4 *)(unaff_EBP - 0x1330) = 300;
    do {
      *(uint *)(unaff_EBP - 0x1300) = uVar14;
      if ((int)uVar14 < iVar9) {
        do {
          iVar9 = FUN_00406100(pvVar21,uVar11,uVar14,iVar8);
          *(int *)(unaff_EBP - 0x12ec) = iVar9;
          *(undefined4 *)(unaff_EBP - 0x12d8) = 0;
          iVar9 = FUN_00406250(iVar9);
          if (0 < iVar9) {
            do {
              iVar10 = FUN_00406250(*(int *)(unaff_EBP - 0x12ec));
              iVar9 = *(int *)(unaff_EBP - 0x12d8);
              if (iVar9 < iVar10 + -1) {
                pvVar19 = *(void **)(unaff_EBP - 0x12ec);
                *(int *)(unaff_EBP - 0x12dc) = iVar9 + 1;
                puVar12 = FUN_004d23f0(pvVar19,iVar9 + 1);
                uVar15 = FUN_004061f0((int)puVar12);
                if ((char)uVar15 == '\0') {
                  iVar9 = *(int *)(unaff_EBP - 0x12d8);
                  goto LAB_0051fac0;
                }
              }
              else {
LAB_0051fac0:
                puVar12 = FUN_004d23f0(*(void **)(unaff_EBP - 0x12ec),iVar9);
                bVar7 = FUN_00406280((int)puVar12);
                pvVar21 = *(void **)(unaff_EBP - 0x12ec);
                *(uint *)(unaff_EBP - 0x131c) = CONCAT31(extraout_var,bVar7);
                iVar9 = *(int *)(unaff_EBP - 0x12d8) + 1;
                *(int *)(unaff_EBP - 0x12dc) = iVar9;
                puVar12 = FUN_004d23f0(pvVar21,iVar9);
                bVar7 = FUN_00406280((int)puVar12);
                iVar9 = FUN_004061d0(*(int *)(unaff_EBP - 0x12ec));
                *(int *)(unaff_EBP - 0x12d4) = iVar9 + *(int *)(unaff_EBP - 0x12d8) + 1;
                iVar9 = *(int *)(unaff_EBP - 0x131c);
                if (CONCAT31(extraout_var_00,bVar7) == 0) {
                  if (iVar9 == 0xb) {
                    pvVar21 = *(void **)(unaff_EBP - 0x12e0);
                    fVar38 = FUN_004d19f0(pvVar21,*(uint *)(unaff_EBP - 0x12c8),
                                          *(uint *)(unaff_EBP - 0x1300));
                    *(float *)(unaff_EBP - 0x12e8) = (float)fVar38;
                    if ((0.75 < *(float *)(unaff_EBP - 0x12e8)) &&
                       ((*(int *)(unaff_EBP - 0x1300) * 0x5a + *(int *)(unaff_EBP - 0x12c8)) %
                        *(int *)(unaff_EBP - 0x141c) == 0)) {
                      uVar11 = rand();
                      uVar11 = uVar11 & 0x8000000f;
                      if ((int)uVar11 < 0) {
                        uVar11 = (uVar11 - 1 | 0xfffffff0) + 1;
                      }
                      if (uVar11 == 0) {
                        iVar9 = 0;
                        *(undefined4 *)(unaff_EBP - 0x12d0) = 0;
                        do {
                          puVar12 = FUN_00405fd0(pvVar21,*(uint *)(unaff_EBP - 0x12c8),
                                                 *(uint *)(unaff_EBP - 0x1300),
                                                 iVar9 + *(int *)(unaff_EBP - 0x12d4),iVar8);
                          uVar15 = FUN_004061f0((int)puVar12);
                          if ((char)uVar15 != '\0') goto LAB_00520371;
                          iVar9 = *(int *)(unaff_EBP - 0x12d0) + 1;
                          *(int *)(unaff_EBP - 0x12d0) = iVar9;
                        } while (iVar9 < 7);
                        FUN_004c84b0(unaff_EBP - 0x1044);
                        uVar11 = *(uint *)(unaff_EBP - 0x1300);
                        uVar14 = *(uint *)(unaff_EBP - 0x12c8);
                        *(undefined1 *)(unaff_EBP - 4) = 8;
                        fVar38 = FUN_004fc140(pvVar21,uVar14,uVar11,iVar8);
                        *(float *)(unaff_EBP - 0x12e8) = (float)fVar38;
                        if (*(float *)(unaff_EBP - 0x12e8) <= 0.8) {
                          uVar51 = 0x40000000;
                          *(undefined4 *)(unaff_EBP - 0x1044) = 0x32;
                          uVar15 = 0x40000000;
                          pvVar19 = (void *)(unaff_EBP - 0x7a0);
                        }
                        else {
                          uVar51 = 0x3f800000;
                          *(undefined4 *)(unaff_EBP - 0x1044) = 0x33;
                          uVar15 = 0x3f800000;
                          pvVar19 = (void *)(unaff_EBP - 0x788);
                        }
                        puVar20 = FUN_00401080(pvVar19,uVar15,uVar51,0x41000000);
                        uVar53 = 0x51fc72;
                        FUN_00401060((void *)(unaff_EBP - 0x1020),puVar20);
                        uVar11 = *(uint *)(unaff_EBP - 0x12d4);
                        uVar51 = 0x51fc82;
                        FUN_004cde40(&stack0xfffffff8,uVar11);
                        uVar14 = *(uint *)(unaff_EBP - 0x1300);
                        uVar15 = 0x51fc92;
                        FUN_004cde40(&stack0xfffffff0,uVar14);
                        FUN_004cde40(&stack0xffffffe8,*(uint *)(unaff_EBP - 0x12c8));
                        puVar20 = FUN_00406380((void *)(unaff_EBP - 0xafc),uVar15,uVar14,uVar51,
                                               uVar11,uVar53,puVar20);
                        FUN_00402a40((void *)(unaff_EBP - 0x103c),puVar20);
                        uVar11 = rand();
                        uVar11 = uVar11 & 0x80000003;
                        if ((int)uVar11 < 0) {
                          uVar11 = (uVar11 - 1 | 0xfffffffc) + 1;
                        }
                        *(uint *)(unaff_EBP - 0x1024) = uVar11;
                        FUN_004d6670((void *)(iVar8 + 0xc),(void **)(unaff_EBP - 0x1044));
                        *(undefined1 *)(unaff_EBP - 4) = 3;
                        FUN_004cd8f0(unaff_EBP - 0x1044);
                      }
                    }
                  }
                  else if (iVar9 == 3) {
                    pvVar21 = *(void **)(unaff_EBP - 0x12e0);
                    fVar38 = FUN_004fc140(pvVar21,*(uint *)(unaff_EBP - 0x12c8),
                                          *(uint *)(unaff_EBP - 0x1300),iVar8);
                    *(float *)(unaff_EBP - 0x12e8) = (float)fVar38;
                    if (0.2 < *(float *)(unaff_EBP - 0x12e8)) {
                      dVar41 = (double)((float)*(int *)(unaff_EBP - 0x12c8) * 0.05 + 9843.0);
                      fVar38 = FUN_004d5d30(SUB84(dVar41,0),(int)((ulonglong)dVar41 >> 0x20),
                                            (double)((float)*(int *)(unaff_EBP - 0x1300) * 0.05 +
                                                    8437.0));
                      fVar38 = FUN_00401ca0((float)fVar38);
                      *(float *)(unaff_EBP - 0x12e8) = (float)fVar38;
                      if (0.5 < *(float *)(unaff_EBP - 0x12e8)) {
                        uVar11 = rand();
                        uVar11 = uVar11 & 0x80000007;
                        bVar37 = uVar11 == 0;
                        if ((int)uVar11 < 0) {
                          bVar37 = (uVar11 - 1 | 0xfffffff8) == 0xffffffff;
                        }
                        if (bVar37) {
                          FUN_004c83b0(unaff_EBP - 0x4e8);
                          piVar23 = (int *)(unaff_EBP - 0x160c);
                          piVar22 = FUN_004cde40((void *)(unaff_EBP - 0x171c),
                                                 *(uint *)(unaff_EBP - 0x12c8));
                          puVar20 = (undefined4 *)FUN_004ce290(piVar22,piVar23);
                          pvVar19 = (void *)FUN_004e2320((void *)(unaff_EBP - 0x4e0),0);
                          FUN_004cde20(pvVar19,puVar20);
                          piVar23 = (int *)(unaff_EBP - 0x161c);
                          piVar22 = FUN_004cde40((void *)(unaff_EBP - 0x162c),
                                                 *(uint *)(unaff_EBP - 0x1300));
                          puVar20 = (undefined4 *)FUN_004ce290(piVar22,piVar23);
                          pvVar19 = (void *)FUN_004e2320((void *)(unaff_EBP - 0x4e0),1);
                          FUN_004cde20(pvVar19,puVar20);
                          uVar11 = *(uint *)(unaff_EBP - 0x12d4);
                          pvVar19 = (void *)FUN_004e2320((void *)(unaff_EBP - 0x4e0),2);
                          FUN_004cde40(pvVar19,uVar11);
                          iVar9 = rand();
                          *(undefined4 *)(unaff_EBP - 0x4c8) = 0x3db851ec;
                          *(float *)(unaff_EBP - 0x4c4) = ((float)iVar9 * 360.0) / 32767.0;
                          *(undefined4 *)(unaff_EBP - 0x4e8) = 0x16;
                          *(undefined4 *)(unaff_EBP - 0x4b0) = 4;
                          FUN_00528450((void *)(iVar8 + 4),(undefined4 *)(unaff_EBP - 0x4e8));
                        }
                      }
                    }
                  }
                  else {
                    if (iVar9 != 2) goto LAB_005200d6;
                    pvVar21 = *(void **)(unaff_EBP - 0x12e0);
                    fVar38 = FUN_004fc140(pvVar21,*(uint *)(unaff_EBP - 0x12c8),
                                          *(uint *)(unaff_EBP - 0x1300),iVar8);
                    *(float *)(unaff_EBP - 0x12e8) = (float)fVar38;
                    if ((0.2 < *(float *)(unaff_EBP - 0x12e8)) && (0 < *(int *)(unaff_EBP - 0x12d4))
                       ) {
                      dVar41 = (double)((float)*(int *)(unaff_EBP - 0x12c8) * 0.05 + 24234.0);
                      fVar38 = FUN_004d5d30(SUB84(dVar41,0),(int)((ulonglong)dVar41 >> 0x20),
                                            (double)((float)*(int *)(unaff_EBP - 0x1300) * 0.05 +
                                                    53565.0));
                      fVar38 = FUN_00401ca0((float)fVar38);
                      *(float *)(unaff_EBP - 0x12e8) = (float)fVar38;
                      if ((0.7 < *(float *)(unaff_EBP - 0x12e8)) &&
                         (iVar9 = rand(), iVar9 % 10 == 0)) {
                        FUN_004c83b0(unaff_EBP - 0x568);
                        piVar23 = (int *)(unaff_EBP - 0x16d4);
                        piVar22 = FUN_004cde40((void *)(unaff_EBP - 0x163c),
                                               *(uint *)(unaff_EBP - 0x12c8));
                        puVar20 = (undefined4 *)FUN_004ce290(piVar22,piVar23);
                        pvVar19 = (void *)FUN_004e2320((void *)(unaff_EBP - 0x560),0);
                        FUN_004cde20(pvVar19,puVar20);
                        piVar23 = (int *)(unaff_EBP - 0x164c);
                        piVar22 = FUN_004cde40((void *)(unaff_EBP - 0x175c),
                                               *(uint *)(unaff_EBP - 0x1300));
                        puVar20 = (undefined4 *)FUN_004ce290(piVar22,piVar23);
                        pvVar19 = (void *)FUN_004e2320((void *)(unaff_EBP - 0x560),1);
                        FUN_004cde20(pvVar19,puVar20);
                        piVar23 = (int *)(unaff_EBP - 0x16ec);
                        piVar22 = FUN_004cde40((void *)(unaff_EBP - 0x1674),
                                               *(uint *)(unaff_EBP - 0x12d4));
                        puVar20 = (undefined4 *)FUN_004e0700(piVar22,piVar23);
                        pvVar19 = (void *)FUN_004e2320((void *)(unaff_EBP - 0x560),2);
                        FUN_004cde20(pvVar19,puVar20);
                        iVar9 = rand();
                        *(undefined4 *)(unaff_EBP - 0x548) = 0x3db851ec;
                        *(float *)(unaff_EBP - 0x544) = ((float)iVar9 * 360.0) / 32767.0;
                        uVar11 = rand();
                        uVar11 = uVar11 & 0x80000001;
                        if ((int)uVar11 < 0) {
                          uVar11 = (uVar11 - 1 | 0xfffffffe) + 1;
                        }
                        *(uint *)(unaff_EBP - 0x568) = uVar11 + 0x1f;
                        FUN_00528450((void *)(iVar8 + 4),(undefined4 *)(unaff_EBP - 0x568));
                      }
                    }
                  }
                }
                else {
LAB_005200d6:
                  if (((iVar9 == 4) || (iVar9 == 9)) || ((iVar9 == 0xc || (iVar9 == 10)))) {
                    uVar11 = *(uint *)(unaff_EBP - 0x1300);
                    iVar9 = *(int *)(unaff_EBP - 0x12c8);
                    *(float *)(unaff_EBP - 0x12fc) = (float)(int)uVar11;
                    *(float *)(unaff_EBP - 0x1310) = (float)iVar9;
                    dVar41 = (double)((float)iVar9 * 0.05 + 9843.0);
                    fVar38 = FUN_004d5d30(SUB84(dVar41,0),(int)((ulonglong)dVar41 >> 0x20),
                                          (double)((float)(int)uVar11 * 0.05 + 8437.0));
                    fVar38 = FUN_00401ca0((float)fVar38);
                    *(float *)(unaff_EBP - 0x12e8) = (float)fVar38;
                    if (0.6 < *(float *)(unaff_EBP - 0x12e8)) {
                      uVar14 = rand();
                      uVar14 = uVar14 & 0x80000007;
                      bVar37 = uVar14 == 0;
                      if ((int)uVar14 < 0) {
                        bVar37 = (uVar14 - 1 | 0xfffffff8) == 0xffffffff;
                      }
                      if (bVar37) {
                        if (*(int *)(unaff_EBP - 0x12d4) < 1) {
                          if (-5 < *(int *)(unaff_EBP - 0x12d4)) goto LAB_0052036b;
                          FUN_004c83b0(unaff_EBP - 0x378);
                          piVar23 = (int *)(unaff_EBP - 0x172c);
                          piVar22 = FUN_004cde40((void *)(unaff_EBP - 0x1684),
                                                 *(uint *)(unaff_EBP - 0x12c8));
                          puVar20 = (undefined4 *)FUN_004ce290(piVar22,piVar23);
                          pvVar21 = (void *)FUN_004e2320((void *)(unaff_EBP - 0x370),0);
                          FUN_004cde20(pvVar21,puVar20);
                          piVar23 = (int *)(unaff_EBP - 0x16fc);
                          piVar22 = FUN_004cde40((void *)(unaff_EBP - 0x1694),uVar11);
                          puVar20 = (undefined4 *)FUN_004ce290(piVar22,piVar23);
                          pvVar21 = (void *)FUN_004e2320((void *)(unaff_EBP - 0x370),1);
                          FUN_004cde20(pvVar21,puVar20);
                          uVar14 = *(uint *)(unaff_EBP - 0x12d4);
                          pvVar21 = (void *)FUN_004e2320((void *)(unaff_EBP - 0x370),2);
                          FUN_004cde40(pvVar21,uVar14);
                          uVar14 = rand();
                          uVar14 = uVar14 & 0x80000003;
                          if ((int)uVar14 < 0) {
                            uVar14 = (uVar14 - 1 | 0xfffffffc) + 1;
                          }
                          *(float *)(unaff_EBP - 0x354) = (float)(int)(uVar14 * 0x5a);
                          *(undefined4 *)(unaff_EBP - 0x358) = 0x3dcccccd;
                          dVar41 = (double)*(int *)(unaff_EBP - 0x12c8) * 0.01 + 9843.0;
                          fVar38 = FUN_004d5d30(SUB84(dVar41,0),(int)((ulonglong)dVar41 >> 0x20),
                                                (double)(int)uVar11 * 0.01 + 8437.0);
                          *(float *)(unaff_EBP - 0x12e8) = (float)fVar38;
                          if (*(float *)(unaff_EBP - 0x12e8) <= 0.0) {
                            *(undefined4 *)(unaff_EBP - 0x378) = 7;
LAB_00520322:
                            *(undefined4 *)(unaff_EBP - 0x358) = 0x3dcccccd;
LAB_0052032c:
                            *(uint *)(unaff_EBP - 0x340) = *(uint *)(unaff_EBP - 0x340) | 4;
                          }
                          else {
                            uVar11 = rand();
                            uVar11 = uVar11 & 0x80000001;
                            if ((int)uVar11 < 0) {
                              uVar11 = (uVar11 - 1 | 0xfffffffe) + 1;
                            }
                            iVar9 = uVar11 + 5;
                            *(int *)(unaff_EBP - 0x378) = iVar9;
                            if (iVar9 == 5) {
                              *(undefined4 *)(unaff_EBP - 0x358) = 0x3d99999a;
                              goto LAB_0052032c;
                            }
                            if (iVar9 == 7) goto LAB_00520322;
                          }
                          iVar9 = rand();
                          puVar20 = (undefined4 *)(unaff_EBP - 0x378);
                          *(float *)(unaff_EBP - 0x358) =
                               ((float)iVar9 / 32767.0 + 1.0) * *(float *)(unaff_EBP - 0x358);
                        }
                        else {
                          if (*(int *)(unaff_EBP - 0x131c) != 0xc) {
                            if (*(int *)(unaff_EBP - 0x131c) == 10) {
                              pvVar21 = *(void **)(unaff_EBP - 0x12e0);
                              iVar9 = 10;
                            }
                            else {
                              pvVar21 = *(void **)(unaff_EBP - 0x12e0);
                              fVar38 = FUN_004fc140(pvVar21,*(uint *)(unaff_EBP - 0x12c8),uVar11,
                                                    iVar8);
                              *(float *)(unaff_EBP - 0x12e8) = (float)fVar38;
                              if (*(float *)(unaff_EBP - 0x12e8) <= 0.75) {
                                FUN_004c83b0(unaff_EBP - 0x42c);
                                piVar23 = (int *)(unaff_EBP - 0x166c);
                                piVar22 = FUN_004cde40((void *)(unaff_EBP - 0x167c),
                                                       *(uint *)(unaff_EBP - 0x12c8));
                                puVar20 = (undefined4 *)FUN_004ce290(piVar22,piVar23);
                                pvVar19 = (void *)FUN_004e2320((void *)(unaff_EBP - 0x424),0);
                                FUN_004cde20(pvVar19,puVar20);
                                piVar23 = (int *)(unaff_EBP - 0x168c);
                                piVar22 = FUN_004cde40((void *)(unaff_EBP - 0x169c),
                                                       *(uint *)(unaff_EBP - 0x1300));
                                puVar20 = (undefined4 *)FUN_004ce290(piVar22,piVar23);
                                pvVar19 = (void *)FUN_004e2320((void *)(unaff_EBP - 0x424),1);
                                FUN_004cde20(pvVar19,puVar20);
                                uVar11 = *(uint *)(unaff_EBP - 0x12d4);
                                pvVar19 = (void *)FUN_004e2320((void *)(unaff_EBP - 0x424),2);
                                FUN_004cde40(pvVar19,uVar11);
                                uVar11 = rand();
                                uVar11 = uVar11 & 0x80000003;
                                if ((int)uVar11 < 0) {
                                  uVar11 = (uVar11 - 1 | 0xfffffffc) + 1;
                                }
                                uVar14 = *(uint *)(unaff_EBP - 0x1300);
                                fVar40 = *(float *)(unaff_EBP - 0x12c8);
                                *(float *)(unaff_EBP - 0x408) = (float)(int)(uVar11 * 0x5a);
                                *(undefined4 *)(unaff_EBP - 0x40c) = 0x3d99999a;
                                fVar38 = FUN_004fc100(pvVar21,fVar40,uVar14,iVar8);
                                iVar9 = *(int *)(unaff_EBP - 0x12c8);
                                *(float *)(unaff_EBP - 0x12e8) = (float)fVar38;
                                dVar42 = (double)iVar9 * 0.01;
                                dVar41 = (double)*(int *)(unaff_EBP - 0x1300) * 0.01;
                                if (*(float *)(unaff_EBP - 0x12e8) <= 0.5) {
                                  *(double *)(unaff_EBP - 0x40) = dVar41;
                                  *(double *)(unaff_EBP - 0x48) = dVar42;
                                  fVar38 = FUN_004d5d30(SUB84(dVar42 + 9843.0,0),
                                                        (int)((ulonglong)(dVar42 + 9843.0) >> 0x20),
                                                        dVar41 + 8437.0);
                                  *(float *)(unaff_EBP - 0x12e8) = (float)fVar38;
                                  if (*(float *)(unaff_EBP - 0x12e8) <= 0.0) {
                                    dVar41 = *(double *)(unaff_EBP - 0x48) + 34234.0;
                                    fVar38 = FUN_004d5d30(SUB84(dVar41,0),
                                                          (int)((ulonglong)dVar41 >> 0x20),
                                                          *(double *)(unaff_EBP - 0x40) + 234234.0);
                                    *(float *)(unaff_EBP - 0x12e8) = (float)fVar38;
                                    fVar40 = *(float *)(unaff_EBP - 0x12e8);
                                    goto LAB_00520e98;
                                  }
                                  dVar41 = (double)(*(float *)(unaff_EBP - 0x1310) * 0.01 + 34234.0)
                                  ;
                                  fVar38 = FUN_004d5d30(SUB84(dVar41,0),
                                                        (int)((ulonglong)dVar41 >> 0x20),
                                                        (double)(*(float *)(unaff_EBP - 0x12fc) *
                                                                 0.01 + 234234.0));
                                  *(float *)(unaff_EBP - 0x12e8) = (float)fVar38;
                                  uVar11 = (*(float *)(unaff_EBP - 0x12e8) <= 0.0) + 2;
                                }
                                else {
                                  *(double *)(unaff_EBP - 0x40) = dVar41;
                                  *(double *)(unaff_EBP - 0x48) = dVar42;
                                  fVar38 = FUN_004d5d30(SUB84(dVar42 + 9843.0,0),
                                                        (int)((ulonglong)(dVar42 + 9843.0) >> 0x20),
                                                        dVar41 + 8437.0);
                                  *(float *)(unaff_EBP - 0x12e8) = (float)fVar38;
                                  if (*(float *)(unaff_EBP - 0x12e8) <= 0.0) {
                                    dVar41 = *(double *)(unaff_EBP - 0x48) + 34234.0;
                                    fVar38 = FUN_004d5d30(SUB84(dVar41,0),
                                                          (int)((ulonglong)dVar41 >> 0x20),
                                                          *(double *)(unaff_EBP - 0x40) + 234234.0);
                                    *(float *)(unaff_EBP - 0x12e8) = (float)fVar38;
                                    fVar40 = *(float *)(unaff_EBP - 0x12e8);
LAB_00520e98:
                                    uVar11 = (uint)(fVar40 <= 0.0);
                                  }
                                  else {
                                    dVar41 = (double)(*(float *)(unaff_EBP - 0x1310) * 0.01 +
                                                     34234.0);
                                    fVar38 = FUN_004d5d30(SUB84(dVar41,0),
                                                          (int)((ulonglong)dVar41 >> 0x20),
                                                          (double)(*(float *)(unaff_EBP - 0x12fc) *
                                                                   0.01 + 234234.0));
                                    *(float *)(unaff_EBP - 0x12e8) = (float)fVar38;
                                    uVar11 = (uint)(0.0 < *(float *)(unaff_EBP - 0x12e8)) * 8 + 4;
                                  }
                                }
                                *(uint *)(unaff_EBP - 0x42c) = uVar11;
                                if (((((uVar11 == 2) || (uVar11 == 3)) || (uVar11 == 4)) ||
                                    (uVar11 == 0xc)) &&
                                   (*(uint *)(unaff_EBP - 0x3f4) = *(uint *)(unaff_EBP - 0x3f4) | 4,
                                   uVar11 == 0xc)) {
                                  iVar9 = rand();
                                  uVar11 = *(uint *)(unaff_EBP - 0x42c);
                                  *(float *)(unaff_EBP - 0x40c) =
                                       ((float)iVar9 * 0.02) / 32767.0 + 0.1;
                                }
                                if (((*(int *)(unaff_EBP - 0x131c) == 4) || (uVar11 == 2)) ||
                                   ((uVar11 == 3 || (uVar11 == 4)))) {
                                  puVar20 = (undefined4 *)(unaff_EBP - 0x42c);
                                  goto LAB_00520922;
                                }
                              }
                              else {
                                fVar38 = FUN_004fc100(pvVar21,*(float *)(unaff_EBP - 0x12c8),
                                                      *(uint *)(unaff_EBP - 0x1300),iVar8);
                                *(float *)(unaff_EBP - 0x12e8) = (float)fVar38;
                                if (*(float *)(unaff_EBP - 0x12e8) <= 0.25) {
                                  iVar9 = rand();
                                  if (iVar9 % 100 == 0) {
                                    FUN_004c83b0(unaff_EBP - 0x528);
                                    piVar23 = (int *)(unaff_EBP - 0x1624);
                                    piVar22 = FUN_004cde40((void *)(unaff_EBP - 0x1634),
                                                           *(uint *)(unaff_EBP - 0x12c8));
                                    puVar20 = (undefined4 *)FUN_004ce290(piVar22,piVar23);
                                    pvVar19 = (void *)FUN_004e2320((void *)(unaff_EBP - 0x520),0);
                                    FUN_004cde20(pvVar19,puVar20);
                                    piVar23 = (int *)(unaff_EBP - 0x1644);
                                    piVar22 = FUN_004cde40((void *)(unaff_EBP - 0x1654),
                                                           *(uint *)(unaff_EBP - 0x1300));
                                    puVar20 = (undefined4 *)FUN_004ce290(piVar22,piVar23);
                                    pvVar19 = (void *)FUN_004e2320((void *)(unaff_EBP - 0x520),1);
                                    FUN_004cde20(pvVar19,puVar20);
                                    uVar11 = *(uint *)(unaff_EBP - 0x12d4);
                                    pvVar19 = (void *)FUN_004e2320((void *)(unaff_EBP - 0x520),2);
                                    FUN_004cde40(pvVar19,uVar11);
                                    uVar11 = rand();
                                    uVar11 = uVar11 & 0x80000003;
                                    if ((int)uVar11 < 0) {
                                      uVar11 = (uVar11 - 1 | 0xfffffffc) + 1;
                                    }
                                    *(undefined4 *)(unaff_EBP - 0x508) = 0x3d99999a;
                                    *(float *)(unaff_EBP - 0x504) = (float)(int)(uVar11 * 0x5a);
                                    uVar11 = rand();
                                    uVar11 = uVar11 & 0x80000001;
                                    if ((int)uVar11 < 0) {
                                      uVar11 = (uVar11 - 1 | 0xfffffffe) + 1;
                                    }
                                    *(uint *)(unaff_EBP - 0x528) = 0x1c - (uint)(uVar11 != 0);
                                    puVar20 = (undefined4 *)(unaff_EBP - 0x528);
                                    goto LAB_00520922;
                                  }
                                }
                                else {
                                  FUN_004c83b0(unaff_EBP - 0x308);
                                  piVar23 = (int *)(unaff_EBP - 0x15e4);
                                  piVar22 = FUN_004cde40((void *)(unaff_EBP - 0x15f4),
                                                         *(uint *)(unaff_EBP - 0x12c8));
                                  puVar20 = (undefined4 *)FUN_004ce290(piVar22,piVar23);
                                  pvVar19 = (void *)FUN_004e2320((void *)(unaff_EBP - 0x300),0);
                                  FUN_004cde20(pvVar19,puVar20);
                                  piVar23 = (int *)(unaff_EBP - 0x1604);
                                  piVar22 = FUN_004cde40((void *)(unaff_EBP - 0x1614),
                                                         *(uint *)(unaff_EBP - 0x1300));
                                  puVar20 = (undefined4 *)FUN_004ce290(piVar22,piVar23);
                                  pvVar19 = (void *)FUN_004e2320((void *)(unaff_EBP - 0x300),1);
                                  FUN_004cde20(pvVar19,puVar20);
                                  uVar11 = *(uint *)(unaff_EBP - 0x12d4);
                                  pvVar19 = (void *)FUN_004e2320((void *)(unaff_EBP - 0x300),2);
                                  FUN_004cde40(pvVar19,uVar11);
                                  iVar9 = rand();
                                  dVar42 = (double)*(int *)(unaff_EBP - 0x12c8) * 0.01;
                                  *(float *)(unaff_EBP - 0x2e4) = ((float)iVar9 * 360.0) / 32767.0;
                                  dVar41 = (double)*(int *)(unaff_EBP - 0x1300) * 0.01;
                                  *(undefined4 *)(unaff_EBP - 0x2e8) = 0x3d99999a;
                                  *(double *)(unaff_EBP - 0x48) = dVar42;
                                  *(double *)(unaff_EBP - 0x40) = dVar41;
                                  dVar42 = dVar42 + 9843.0;
                                  fVar38 = FUN_004d5d30(SUB84(dVar42,0),
                                                        (int)((ulonglong)dVar42 >> 0x20),
                                                        dVar41 + 8437.0);
                                  *(float *)(unaff_EBP - 0x12e8) = (float)fVar38;
                                  if (*(float *)(unaff_EBP - 0x12e8) <= 0.0) {
                                    dVar41 = *(double *)(unaff_EBP - 0x48) + 34234.0;
                                    fVar38 = FUN_004d5d30(SUB84(dVar41,0),
                                                          (int)((ulonglong)dVar41 >> 0x20),
                                                          *(double *)(unaff_EBP - 0x40) + 234234.0);
                                    *(float *)(unaff_EBP - 0x12e8) = (float)fVar38;
                                    iVar9 = (*(float *)(unaff_EBP - 0x12e8) <= 0.5) + 0xb;
                                  }
                                  else {
                                    dVar41 = (double)(*(float *)(unaff_EBP - 0x1310) * 0.01 +
                                                     34234.0);
                                    fVar38 = FUN_004d5d30(SUB84(dVar41,0),
                                                          (int)((ulonglong)dVar41 >> 0x20),
                                                          (double)(*(float *)(unaff_EBP - 0x12fc) *
                                                                   0.01 + 234234.0));
                                    *(float *)(unaff_EBP - 0x12e8) = (float)fVar38;
                                    iVar9 = (0.0 < *(float *)(unaff_EBP - 0x12e8)) + 3;
                                  }
                                  *(int *)(unaff_EBP - 0x308) = iVar9;
                                  if ((iVar9 == 2) || (iVar9 == 3)) {
                                    *(uint *)(unaff_EBP - 0x2d0) = *(uint *)(unaff_EBP - 0x2d0) | 4;
                                  }
                                  if (iVar9 == 0xb) {
                                    iVar10 = rand();
                                    *(uint *)(unaff_EBP - 0x2d0) = *(uint *)(unaff_EBP - 0x2d0) | 4;
                                    iVar9 = *(int *)(unaff_EBP - 0x308);
                                    *(float *)(unaff_EBP - 0x2e8) =
                                         ((float)iVar10 * 0.05) / 32767.0 + 0.05;
                                  }
                                  if (iVar9 == 0xc) {
                                    iVar10 = rand();
                                    *(uint *)(unaff_EBP - 0x2d0) = *(uint *)(unaff_EBP - 0x2d0) | 4;
                                    iVar9 = *(int *)(unaff_EBP - 0x308);
                                    *(float *)(unaff_EBP - 0x2e8) =
                                         ((float)iVar10 * 0.02) / 32767.0 + 0.1;
                                  }
                                  if (((*(int *)(unaff_EBP - 0x131c) == 4) || (iVar9 == 2)) ||
                                     (iVar9 == 3)) {
                                    puVar20 = (undefined4 *)(unaff_EBP - 0x308);
LAB_00520922:
                                    FUN_00528450((void *)(iVar8 + 4),puVar20);
                                  }
                                }
                              }
                              iVar9 = *(int *)(unaff_EBP - 0x131c);
                            }
                            if (iVar9 == 4) {
                              iVar9 = rand();
                              if (iVar9 % *(int *)(unaff_EBP - 0x13f4) == 0) {
                                FUN_0041d8d0((undefined2 *)(unaff_EBP - 0xc5c));
                                piVar23 = (int *)(unaff_EBP - 0x16ac);
                                piVar22 = FUN_004cde40((void *)(unaff_EBP - 0x16bc),
                                                       *(uint *)(unaff_EBP - 0x12c8));
                                puVar20 = (undefined4 *)FUN_004ce290(piVar22,piVar23);
                                pvVar19 = (void *)FUN_004e2320((void *)(unaff_EBP - 0xb44),0);
                                FUN_004cde20(pvVar19,puVar20);
                                piVar23 = (int *)(unaff_EBP - 0x16cc);
                                piVar22 = FUN_004cde40((void *)(unaff_EBP - 0x16e4),
                                                       *(uint *)(unaff_EBP - 0x1300));
                                puVar20 = (undefined4 *)FUN_004ce290(piVar22,piVar23);
                                pvVar19 = (void *)FUN_004e2320((void *)(unaff_EBP - 0xb44),1);
                                FUN_004cde20(pvVar19,puVar20);
                                uVar11 = *(uint *)(unaff_EBP - 0x12d4);
                                pvVar19 = (void *)FUN_004e2320((void *)(unaff_EBP - 0xb44),2);
                                FUN_004cde40(pvVar19,uVar11);
                                iVar9 = rand();
                                *(undefined1 *)(unaff_EBP - 0xc5c) = 0xb;
                                *(float *)(unaff_EBP - 0xb2c) = ((float)iVar9 / 32767.0) * 360.0;
                                uVar11 = rand();
                                uVar11 = uVar11 & 0x80000001;
                                if ((int)uVar11 < 0) {
                                  uVar11 = (uVar11 - 1 | 0xfffffffe) + 1;
                                }
                                if (uVar11 == 0) {
                                  *(undefined1 *)(unaff_EBP - 0xc5b) = 0xf;
                                }
                                else if (uVar11 == 1) {
                                  *(undefined1 *)(unaff_EBP - 0xc5b) = 0x16;
                                  *(undefined4 *)(unaff_EBP - 0xb28) = 0x3dcccccd;
                                }
                                *(undefined2 *)(unaff_EBP - 0xc4c) = 1;
                                *(undefined1 *)(unaff_EBP - 0xb24) = 2;
                                FUN_0041f5b0((void *)(iVar8 + 0x30),
                                             (undefined1 *)(unaff_EBP - 0xc5c));
                              }
                            }
                            else if ((iVar9 == 10) &&
                                    (iVar9 = rand(), iVar9 % *(int *)(unaff_EBP - 0x1330) == 0)) {
                              FUN_0041d8d0((undefined2 *)(unaff_EBP - 0xda4));
                              piVar23 = (int *)(unaff_EBP - 0x16f4);
                              piVar22 = FUN_004cde40((void *)(unaff_EBP - 0x1704),
                                                     *(uint *)(unaff_EBP - 0x12c8));
                              puVar20 = (undefined4 *)FUN_004ce290(piVar22,piVar23);
                              pvVar19 = (void *)FUN_004e2320((void *)(unaff_EBP - 0xc8c),0);
                              FUN_004cde20(pvVar19,puVar20);
                              piVar23 = (int *)(unaff_EBP - 0x1714);
                              piVar22 = FUN_004cde40((void *)(unaff_EBP - 0x1724),
                                                     *(uint *)(unaff_EBP - 0x1300));
                              puVar20 = (undefined4 *)FUN_004ce290(piVar22,piVar23);
                              pvVar19 = (void *)FUN_004e2320((void *)(unaff_EBP - 0xc8c),1);
                              FUN_004cde20(pvVar19,puVar20);
                              uVar11 = *(uint *)(unaff_EBP - 0x12d4);
                              pvVar19 = (void *)FUN_004e2320((void *)(unaff_EBP - 0xc8c),2);
                              FUN_004cde40(pvVar19,uVar11);
                              iVar9 = rand();
                              *(undefined1 *)(unaff_EBP - 0xda4) = 0xb;
                              *(float *)(unaff_EBP - 0xc74) = ((float)iVar9 / 32767.0) * 360.0;
                              uVar11 = rand();
                              uVar11 = uVar11 & 0x80000001;
                              if ((int)uVar11 < 0) {
                                uVar11 = (uVar11 - 1 | 0xfffffffe) + 1;
                              }
                              if (uVar11 < 2) {
                                *(undefined1 *)(unaff_EBP - 0xda3) = 0x18;
                                *(undefined4 *)(unaff_EBP - 0xc70) = 0x3dcccccd;
                              }
                              *(undefined2 *)(unaff_EBP - 0xd94) = 1;
                              *(undefined1 *)(unaff_EBP - 0xc6c) = 2;
                              FUN_0041f5b0((void *)(iVar8 + 0x30),(undefined1 *)(unaff_EBP - 0xda4))
                              ;
                            }
                            goto LAB_00520371;
                          }
                          FUN_004c83b0(unaff_EBP - 0x49c);
                          piVar23 = (int *)(unaff_EBP - 0x174c);
                          piVar22 = FUN_004cde40((void *)(unaff_EBP - 0x16a4),
                                                 *(uint *)(unaff_EBP - 0x12c8));
                          puVar20 = (undefined4 *)FUN_004ce290(piVar22,piVar23);
                          pvVar21 = (void *)FUN_004e2320((void *)(unaff_EBP - 0x494),0);
                          FUN_004cde20(pvVar21,puVar20);
                          piVar23 = (int *)(unaff_EBP - 0x15c4);
                          piVar22 = FUN_004cde40((void *)(unaff_EBP - 0x15d4),uVar11);
                          puVar20 = (undefined4 *)FUN_004ce290(piVar22,piVar23);
                          pvVar21 = (void *)FUN_004e2320((void *)(unaff_EBP - 0x494),1);
                          FUN_004cde20(pvVar21,puVar20);
                          uVar14 = *(uint *)(unaff_EBP - 0x12d4);
                          pvVar21 = (void *)FUN_004e2320((void *)(unaff_EBP - 0x494),2);
                          FUN_004cde40(pvVar21,uVar14);
                          uVar14 = rand();
                          uVar14 = uVar14 & 0x80000003;
                          if ((int)uVar14 < 0) {
                            uVar14 = (uVar14 - 1 | 0xfffffffc) + 1;
                          }
                          *(float *)(unaff_EBP - 0x478) = (float)(int)(uVar14 * 0x5a);
                          *(undefined4 *)(unaff_EBP - 0x47c) = 0x3d99999a;
                          dVar41 = (double)*(int *)(unaff_EBP - 0x12c8) * 0.01 + 9843.0;
                          fVar38 = FUN_004d5d30(SUB84(dVar41,0),(int)((ulonglong)dVar41 >> 0x20),
                                                (double)(int)uVar11 * 0.01 + 8437.0);
                          *(float *)(unaff_EBP - 0x12e8) = (float)fVar38;
                          iVar9 = (*(float *)(unaff_EBP - 0x12e8) <= 0.0) + 9;
                          *(int *)(unaff_EBP - 0x49c) = iVar9;
                          if (iVar9 == 9) {
                            *(uint *)(unaff_EBP - 0x464) = *(uint *)(unaff_EBP - 0x464) | 4;
                            puVar20 = (undefined4 *)(unaff_EBP - 0x49c);
                          }
                          else {
                            if (iVar9 == 10) {
                              iVar9 = rand();
                              *(float *)(unaff_EBP - 0x47c) = ((float)iVar9 * 0.02) / 32767.0 + 0.03
                              ;
                            }
                            puVar20 = (undefined4 *)(unaff_EBP - 0x49c);
                          }
                        }
                        FUN_00528450((void *)(iVar8 + 4),puVar20);
                      }
                    }
                  }
LAB_0052036b:
                  pvVar21 = *(void **)(unaff_EBP - 0x12e0);
                }
              }
LAB_00520371:
              iVar9 = *(int *)(unaff_EBP - 0x12ec);
              *(undefined4 *)(unaff_EBP - 0x12d8) = *(undefined4 *)(unaff_EBP - 0x12dc);
              iVar9 = FUN_00406250(iVar9);
            } while (*(int *)(unaff_EBP - 0x12d8) < iVar9);
          }
          uVar11 = *(uint *)(unaff_EBP - 0x12c8);
          uVar14 = *(int *)(unaff_EBP - 0x1300) + 1;
          iVar9 = *(int *)(unaff_EBP - 0x132c) + 0x100;
          *(uint *)(unaff_EBP - 0x1300) = uVar14;
        } while ((int)uVar14 < iVar9);
      }
      uVar11 = uVar11 + 1;
      *(uint *)(unaff_EBP - 0x12c8) = uVar11;
      if (*(int *)(unaff_EBP - 0x1370) <= (int)uVar11) break;
      uVar14 = *(uint *)(unaff_EBP - 0x132c);
    } while( true );
  }
  piVar23 = (int *)(iVar8 + 0x24);
  *(int **)(unaff_EBP - 0x12e8) = piVar23;
  iVar9 = FUN_0041fff0(piVar23);
  if (0 < iVar9) {
    uVar11 = 0;
    do {
      piVar22 = (int *)FUN_00402bb0(piVar23,uVar11);
      if (*(int *)*piVar22 == 0 && ((int *)*piVar22)[1] == 0) {
        puVar20 = (undefined4 *)FUN_00402bb0(piVar23,uVar11);
        uVar49 = FUN_004f3850(*(uint *)(unaff_EBP - 0x135c),*(uint *)(unaff_EBP - 0x1364),uVar11);
        piVar23 = *(int **)(unaff_EBP - 0x12e8);
        *(undefined8 *)*puVar20 = uVar49;
      }
      uVar11 = uVar11 + 1;
      iVar8 = FUN_0041fff0(piVar23);
    } while ((int)uVar11 < iVar8);
    iVar8 = *(int *)(unaff_EBP - 0x1308);
  }
  piVar23 = (int *)(iVar8 + 0x18);
  *(undefined4 *)(unaff_EBP - 0x12cc) = 0;
  *(int **)(unaff_EBP - 0x12c8) = piVar23;
  iVar9 = FUN_0041fff0(piVar23);
  if (iVar9 < 1) {
    pvVar21 = *(void **)(unaff_EBP - 0x12e0);
  }
  else {
    uVar11 = 0;
    while( true ) {
      piVar22 = (int *)FUN_00402bb0(piVar23,uVar11);
      if (*(int *)(*piVar22 + 0x48) == 0 && *(int *)(*piVar22 + 0x4c) == 0) {
        piVar22 = (int *)FUN_00402bb0(piVar23,uVar11);
        uVar49 = FUN_004f3850(*(uint *)(unaff_EBP - 0x135c),*(uint *)(unaff_EBP - 0x1364),uVar11);
        piVar23 = *(int **)(unaff_EBP - 0x12c8);
        *(undefined8 *)(*piVar22 + 0x48) = uVar49;
      }
      piVar23 = (int *)FUN_00402bb0(piVar23,uVar11);
      piVar22 = (int *)FUN_00402bb0(*(void **)(unaff_EBP - 0x12c8),uVar11);
      FUN_0040a840((uint *)(*piVar22 + 0x2c),*piVar23 + 0x74,(undefined4 *)0x0);
      pvVar21 = *(void **)(unaff_EBP - 0x12c8);
      piVar23 = (int *)FUN_00402bb0(pvVar21,uVar11);
      FUN_004fb480(*piVar23,0);
      piVar23 = (int *)FUN_00402bb0(pvVar21,uVar11);
      if ((*(ushort *)(*piVar23 + 0x7a) & 0x200) != 0) {
        FUN_00406fd0((undefined2 *)(unaff_EBP - 0xebc));
        *(undefined2 *)(unaff_EBP - 0xebc) = 0xe0b;
        piVar23 = (int *)FUN_00402bb0(pvVar21,uVar11);
        *(undefined2 *)(unaff_EBP - 0xeac) = *(undefined2 *)(*piVar23 + 0x34);
        uVar14 = rand();
        uVar14 = uVar14 & 0x80000003;
        if ((int)uVar14 < 0) {
          uVar14 = (uVar14 - 1 | 0xfffffffc) + 1;
        }
        *(char *)(unaff_EBP - 0xeaf) = (char)uVar14 + -0x80;
        *(undefined1 *)(unaff_EBP - 0xeb0) = 2;
        piVar23 = (int *)FUN_00402bb0(pvVar21,uVar11);
        FUN_00427000((void *)(*piVar23 + 0xf6c),(char *)(unaff_EBP - 0xebc),-1);
      }
      piVar23 = (int *)FUN_00402bb0(pvVar21,uVar11);
      piVar22 = (int *)FUN_00402bb0(*(void **)(unaff_EBP - 0x12c8),uVar11);
      iVar9 = FUN_00402bb0(*(void **)(unaff_EBP - 0x12c8),*(int *)(unaff_EBP - 0x12cc));
      iVar8 = *piVar23;
      *(int *)(unaff_EBP - 0x12e8) = iVar9;
      iVar9 = FUN_0052bf40((uint)*(byte *)(*piVar22 + 0x58),
                           (byte)((ushort)*(undefined2 *)(iVar8 + 0x7a) >> 9) & 1);
      iVar8 = *(int *)(unaff_EBP - 0x12cc);
      *(char *)(**(int **)(unaff_EBP - 0x12e8) + 0x8d4) = (char)iVar9;
      piVar23 = (int *)FUN_00402bb0(*(void **)(unaff_EBP - 0x12c8),iVar8);
      piVar22 = (int *)FUN_00402bb0(*(void **)(unaff_EBP - 0x12c8),iVar8);
      iVar9 = FUN_00402bb0(*(void **)(unaff_EBP - 0x12c8),*(int *)(unaff_EBP - 0x12cc));
      iVar8 = *piVar23;
      *(int *)(unaff_EBP - 0x12e8) = iVar9;
      iVar9 = FUN_0052bf40((uint)*(byte *)(*piVar22 + 0x58),
                           (byte)((ushort)*(undefined2 *)(iVar8 + 0x7a) >> 9) & 1);
      iVar8 = *(int *)(unaff_EBP - 0x12cc);
      *(char *)(**(int **)(unaff_EBP - 0x12e8) + 0x7bc) = (char)iVar9;
      piVar23 = (int *)FUN_00402bb0(*(void **)(unaff_EBP - 0x12c8),iVar8);
      piVar22 = (int *)FUN_00402bb0(*(void **)(unaff_EBP - 0x12c8),iVar8);
      iVar9 = FUN_00402bb0(*(void **)(unaff_EBP - 0x12c8),*(int *)(unaff_EBP - 0x12cc));
      iVar8 = *piVar23;
      *(int *)(unaff_EBP - 0x12e8) = iVar9;
      iVar9 = FUN_0052bf40((uint)*(byte *)(*piVar22 + 0x58),
                           (byte)((ushort)*(undefined2 *)(iVar8 + 0x7a) >> 9) & 1);
      iVar8 = *(int *)(unaff_EBP - 0x12cc);
      *(char *)(**(int **)(unaff_EBP - 0x12e8) + 0x6a4) = (char)iVar9;
      piVar23 = (int *)FUN_00402bb0(*(void **)(unaff_EBP - 0x12c8),iVar8);
      piVar22 = (int *)FUN_00402bb0(*(void **)(unaff_EBP - 0x12c8),iVar8);
      iVar9 = FUN_00402bb0(*(void **)(unaff_EBP - 0x12c8),*(int *)(unaff_EBP - 0x12cc));
      iVar8 = *piVar23;
      *(int *)(unaff_EBP - 0x12e8) = iVar9;
      iVar9 = FUN_0052bf40((uint)*(byte *)(*piVar22 + 0x58),
                           (byte)((ushort)*(undefined2 *)(iVar8 + 0x7a) >> 9) & 1);
      iVar8 = *(int *)(unaff_EBP - 0x12cc);
      *(char *)(**(int **)(unaff_EBP - 0x12e8) + 0x35c) = (char)iVar9;
      piVar23 = (int *)FUN_00402bb0(*(void **)(unaff_EBP - 0x12c8),iVar8);
      piVar22 = (int *)FUN_00402bb0(*(void **)(unaff_EBP - 0x12c8),iVar8);
      iVar9 = FUN_00402bb0(*(void **)(unaff_EBP - 0x12c8),*(int *)(unaff_EBP - 0x12cc));
      iVar8 = *piVar23;
      *(int *)(unaff_EBP - 0x12e8) = iVar9;
      iVar9 = FUN_0052bf40((uint)*(byte *)(*piVar22 + 0x58),
                           (byte)((ushort)*(undefined2 *)(iVar8 + 0x7a) >> 9) & 1);
      iVar8 = *(int *)(unaff_EBP - 0x12cc);
      *(char *)(**(int **)(unaff_EBP - 0x12e8) + 0x58c) = (char)iVar9;
      piVar23 = (int *)FUN_00402bb0(*(void **)(unaff_EBP - 0x12c8),iVar8);
      piVar22 = (int *)FUN_00402bb0(*(void **)(unaff_EBP - 0x12c8),iVar8);
      iVar9 = FUN_00402bb0(*(void **)(unaff_EBP - 0x12c8),*(int *)(unaff_EBP - 0x12cc));
      iVar8 = *piVar23;
      *(int *)(unaff_EBP - 0x12e8) = iVar9;
      iVar9 = FUN_0052bf40((uint)*(byte *)(*piVar22 + 0x58),
                           (byte)((ushort)*(undefined2 *)(iVar8 + 0x7a) >> 9) & 1);
      iVar8 = *(int *)(unaff_EBP - 0x12cc);
      *(char *)(**(int **)(unaff_EBP - 0x12e8) + 0x474) = (char)iVar9;
      piVar23 = (int *)FUN_00402bb0(*(void **)(unaff_EBP - 0x12c8),iVar8);
      piVar22 = (int *)FUN_00402bb0(*(void **)(unaff_EBP - 0x12c8),iVar8);
      iVar9 = FUN_00402bb0(*(void **)(unaff_EBP - 0x12c8),*(int *)(unaff_EBP - 0x12cc));
      pvVar21 = *(void **)(unaff_EBP - 0x12e0);
      uVar3 = *(undefined2 *)(*piVar23 + 0x7a);
      iVar8 = *piVar22;
      *(int *)(unaff_EBP - 0x12e8) = iVar9;
      iVar9 = FUN_0052bf40((uint)*(byte *)(iVar8 + 0x58),(byte)((ushort)uVar3 >> 9) & 1);
      iVar8 = *(int *)(unaff_EBP - 0x12cc);
      *(char *)(**(int **)(unaff_EBP - 0x12e8) + 0x244) = (char)iVar9;
      piVar23 = (int *)FUN_00402bb0(*(void **)(unaff_EBP - 0x12c8),iVar8);
      if ((*(ushort *)(*piVar23 + 0x7a) & 0x200) == 0) {
        piVar23 = (int *)FUN_00402bb0(*(void **)(unaff_EBP - 0x12c8),iVar8);
        FUN_00414470((void *)(*piVar23 + 0x8c8),0.05,'\0');
        piVar23 = (int *)FUN_00402bb0(*(void **)(unaff_EBP - 0x12c8),iVar8);
        FUN_00414470((void *)(*piVar23 + 0x7b0),0.05,'\0');
        piVar23 = (int *)FUN_00402bb0(*(void **)(unaff_EBP - 0x12c8),iVar8);
        FUN_00414470((void *)(*piVar23 + 0x698),0.05,'\0');
        piVar23 = (int *)FUN_00402bb0(*(void **)(unaff_EBP - 0x12c8),iVar8);
        FUN_00414470((void *)(*piVar23 + 0x350),0.05,'\0');
        piVar23 = (int *)FUN_00402bb0(*(void **)(unaff_EBP - 0x12c8),iVar8);
        FUN_00414470((void *)(*piVar23 + 0x580),0.05,'\0');
        piVar23 = (int *)FUN_00402bb0(*(void **)(unaff_EBP - 0x12c8),iVar8);
        FUN_00414470((void *)(*piVar23 + 0x468),0.05,'\0');
        piVar23 = (int *)FUN_00402bb0(*(void **)(unaff_EBP - 0x12c8),iVar8);
        FUN_00414470((void *)(*piVar23 + 0x238),0.05,'\0');
        piVar23 = (int *)FUN_00402bb0(*(void **)(unaff_EBP - 0x12c8),iVar8);
        FUN_00414470((void *)(*piVar23 + 0x9e0),0.05,'\0');
        piVar23 = (int *)FUN_00402bb0(*(void **)(unaff_EBP - 0x12c8),iVar8);
        FUN_00414470((void *)(*piVar23 + 0xaf8),0.05,'\0');
      }
      piVar23 = (int *)FUN_00402bb0(*(void **)(unaff_EBP - 0x12c8),iVar8);
      if ((*(int *)(*piVar23 + 0x28) == 1) &&
         (piVar23 = (int *)FUN_00402bb0(*(void **)(unaff_EBP - 0x12c8),iVar8),
         (*(ushort *)(*piVar23 + 0x7a) & 0x200) == 0)) {
        rand();
      }
      piVar23 = *(int **)(unaff_EBP - 0x12c8);
      uVar11 = iVar8 + 1;
      *(uint *)(unaff_EBP - 0x12cc) = uVar11;
      iVar8 = FUN_0041fff0(piVar23);
      if (iVar8 <= (int)uVar11) break;
      piVar23 = *(int **)(unaff_EBP - 0x12c8);
    }
    iVar8 = *(int *)(unaff_EBP - 0x1308);
  }
  FUN_004f7330((undefined4 *)(unaff_EBP - 0x144c));
  *(undefined1 *)(unaff_EBP - 4) = 9;
  FUN_00530550((void *)(iVar8 + 0x30),(undefined4 *)(unaff_EBP - 0x139c));
  piVar23 = (int *)FUN_004d3de0((void *)(iVar8 + 0x30),(undefined4 *)(unaff_EBP - 0x14a0));
  bVar37 = FUN_0042c6f0((void *)(unaff_EBP - 0x139c),piVar23);
  if (bVar37) {
    do {
      puVar24 = (undefined1 *)FUN_004ce1f0((undefined4 *)(unaff_EBP - 0x139c));
      puVar54 = puVar24 + 0xd;
      *(undefined1 **)(unaff_EBP - 0x12e8) = puVar24;
      puVar24 = (undefined1 *)FUN_004f72d0((undefined1 *)(unaff_EBP - 0x14be),puVar24,puVar24 + 1);
      pbVar25 = (byte *)FUN_004f72f0((undefined1 *)(unaff_EBP - 0x150b),puVar24,puVar54);
      FUN_004f3880((void *)(unaff_EBP - 0x15b4),pbVar25);
      piVar23 = FUN_004f7910((void *)(unaff_EBP - 0x144c),(int *)(unaff_EBP - 0x15b4));
      *piVar23 = *piVar23 + 1;
      if ((*(byte *)(*(int *)(unaff_EBP - 0x12e8) + 0x138) & 1) == 0) {
        pvVar21 = (void *)(*(int *)(unaff_EBP - 0x12e8) + 0x118);
        pvVar19 = (void *)FUN_004e2320(pvVar21,2);
        *(void **)(unaff_EBP - 0x12d0) = pvVar19;
        puVar26 = (uint *)FUN_004014b0(pvVar19,(int *)(unaff_EBP - 0x1524));
        iVar8 = FUN_004e2320(pvVar21,1);
        *(int *)(unaff_EBP - 0x12dc) = iVar8;
        puVar27 = (uint *)FUN_004e2320(pvVar21,0);
        iVar8 = *(int *)(unaff_EBP - 0x1308);
        uVar11 = puVar26[1];
        uVar14 = *puVar26;
        puVar26 = *(uint **)(unaff_EBP - 0x12dc);
        pvVar21 = *(void **)(unaff_EBP - 0x12e0);
        uVar33 = puVar26[1];
        *(uint **)(unaff_EBP - 0x12e8) = puVar27;
        iVar9 = FUN_00406050(pvVar21,*puVar27,puVar27[1],*puVar26,uVar33,uVar14,uVar11,iVar8);
        uVar15 = FUN_004061f0(iVar9);
        cVar6 = (char)uVar15;
        while (cVar6 == '\0') {
          FUN_004cde40((void *)(unaff_EBP - 0x152c),1);
          FUN_00402eb0(*(void **)(unaff_EBP - 0x12d0),(uint *)(unaff_EBP - 0x152c));
          puVar26 = (uint *)FUN_004014b0(*(void **)(unaff_EBP - 0x12d0),(int *)(unaff_EBP - 0x1524))
          ;
          iVar9 = FUN_00406050(pvVar21,**(uint **)(unaff_EBP - 0x12e8),
                               (*(uint **)(unaff_EBP - 0x12e8))[1],**(uint **)(unaff_EBP - 0x12dc),
                               (*(uint **)(unaff_EBP - 0x12dc))[1],*puVar26,puVar26[1],iVar8);
          uVar15 = FUN_004061f0(iVar9);
          cVar6 = (char)uVar15;
        }
      }
      FUN_0041e300((void *)(unaff_EBP - 0x139c),(int *)(unaff_EBP - 0x13d8));
      piVar23 = (int *)FUN_004d3de0((void *)(iVar8 + 0x30),(undefined4 *)(unaff_EBP - 0x14a0));
      bVar37 = FUN_0042c6f0((void *)(unaff_EBP - 0x139c),piVar23);
    } while (bVar37);
  }
  FUN_00428070((void *)(unaff_EBP - 0x144c),(undefined4 *)(unaff_EBP - 0x13a0));
  piVar23 = (int *)FUN_00530550((void *)(unaff_EBP - 0x144c),(undefined4 *)(unaff_EBP - 0x14a8));
  uVar49 = CONCAT44(piVar23,0x52185e);
  bVar37 = FUN_0042c6f0((void *)(unaff_EBP - 0x13a0),piVar23);
  if (bVar37) {
    uVar11 = *(uint *)(unaff_EBP - 0x138c);
    do {
      uVar15 = (undefined4)uVar49;
      piVar23 = (int *)FUN_00402bc0((int *)(unaff_EBP - 0x13a0));
      iVar9 = *piVar23;
      *(int **)(unaff_EBP - 0x12e8) = piVar23;
      if (((iVar9 == 1) || (iVar9 == 0xb)) && (7 < piVar23[3])) {
        uVar53 = 0x5218a6;
        FUN_004f7490((undefined4 *)(unaff_EBP - 0x1184));
        puVar54 = *(undefined1 **)(unaff_EBP - 0x12e8);
        *(undefined1 *)(unaff_EBP - 0x1180) = *puVar54;
        *(undefined1 *)(unaff_EBP - 0x117f) = puVar54[4];
        uVar2 = puVar54[8];
        *(undefined4 *)(unaff_EBP - 0x1184) = 9;
        *(undefined1 *)(unaff_EBP - 0x1173) = uVar2;
        uVar49 = 0x5218dc;
        FUN_004cde40(&stack0xfffffff8,0);
        uVar14 = *(uint *)(unaff_EBP - 5000);
        uVar51 = 0x5218ec;
        FUN_004cde40(&stack0xfffffff0,uVar14);
        FUN_004cde40(&stack0xffffffe8,uVar11);
        puVar20 = FUN_00406380((void *)(unaff_EBP - 0xb14),uVar51,uVar14,(int)uVar49,
                               (int)((ulonglong)uVar49 >> 0x20),uVar15,uVar53);
        FUN_00402a40((void *)(unaff_EBP - 0x105c),puVar20);
        FUN_005284a0((void *)(iVar8 + 0x48),(undefined4 *)(unaff_EBP - 0x1184));
      }
      FUN_00407a30((void *)(unaff_EBP - 0x13a0),(int *)(unaff_EBP - 0x1548));
      piVar23 = (int *)FUN_00530550((void *)(unaff_EBP - 0x144c),(undefined4 *)(unaff_EBP - 0x14a8))
      ;
      uVar49 = CONCAT44(piVar23,0x52194f);
      bVar37 = FUN_0042c6f0((void *)(unaff_EBP - 0x13a0),piVar23);
    } while (bVar37);
    pvVar21 = *(void **)(unaff_EBP - 0x12e0);
  }
  FUN_004f7310((undefined4 *)(unaff_EBP - 0x1454));
  *(undefined1 *)(unaff_EBP - 4) = 10;
  FUN_00530550((void *)(iVar8 + 0x18),(undefined4 *)(unaff_EBP - 0x1394));
  piVar23 = (int *)FUN_004d3de0((void *)(iVar8 + 0x18),(undefined4 *)(unaff_EBP - 0x14b0));
  bVar37 = FUN_0042c6f0((void *)(unaff_EBP - 0x1394),piVar23);
  if (bVar37) {
    do {
      piVar23 = (int *)FUN_004ce1f0((undefined4 *)(unaff_EBP - 0x1394));
      iVar9 = *piVar23;
      if (*(int *)(iVar9 + 0x44) == 86400000) {
        piVar23 = (int *)FUN_004c8130((undefined4 *)(unaff_EBP - 0x1734),
                                      (undefined4 *)(iVar9 + 0x28),(undefined4 *)(iVar9 + 0x2c));
        piVar23 = FUN_004f7890((void *)(unaff_EBP - 0x1454),piVar23);
        *piVar23 = *piVar23 + 1;
      }
      FUN_004f79d0((void *)(unaff_EBP - 0x1394),(int *)(unaff_EBP - 0x13e0));
      piVar23 = (int *)FUN_004d3de0((void *)(iVar8 + 0x18),(undefined4 *)(unaff_EBP - 0x14b0));
      bVar37 = FUN_0042c6f0((void *)(unaff_EBP - 0x1394),piVar23);
    } while (bVar37);
    pvVar21 = *(void **)(unaff_EBP - 0x12e0);
  }
  FUN_00428070((void *)(unaff_EBP - 0x1454),(undefined4 *)(unaff_EBP - 0x1398));
  piVar23 = (int *)FUN_00530550((void *)(unaff_EBP - 0x1454),(undefined4 *)(unaff_EBP - 0x14b8));
  uVar49 = CONCAT44(piVar23,0x521a44);
  bVar37 = FUN_0042c6f0((void *)(unaff_EBP - 0x1398),piVar23);
  if (bVar37) {
    uVar11 = *(uint *)(unaff_EBP - 0x138c);
    do {
      uVar15 = (undefined4)uVar49;
      piVar23 = (int *)FUN_00402bc0((int *)(unaff_EBP - 0x1398));
      iVar9 = *piVar23;
      *(int **)(unaff_EBP - 0x12e8) = piVar23;
      if ((((iVar9 == 1) || (iVar9 == 6)) || (iVar9 == 5)) && (4 < piVar23[2])) {
        uVar53 = 0x521a8d;
        FUN_004f7490((undefined4 *)(unaff_EBP - 0x12c4));
        uVar51 = *(undefined4 *)(*(int *)(unaff_EBP - 0x12e8) + 4);
        *(undefined4 *)(unaff_EBP - 0x12c4) = 10;
        *(undefined4 *)(unaff_EBP - 0x11a4) = uVar51;
        uVar49 = 0x521ab2;
        FUN_004cde40(&stack0xfffffff8,0);
        uVar14 = *(uint *)(unaff_EBP - 5000);
        uVar51 = 0x521ac2;
        FUN_004cde40(&stack0xfffffff0,uVar14);
        FUN_004cde40(&stack0xffffffe8,uVar11);
        puVar20 = FUN_00406380((void *)(unaff_EBP - 0xae4),uVar51,uVar14,(int)uVar49,
                               (int)((ulonglong)uVar49 >> 0x20),uVar15,uVar53);
        FUN_00402a40((void *)(unaff_EBP - 0x119c),puVar20);
        FUN_005284a0((void *)(iVar8 + 0x48),(undefined4 *)(unaff_EBP - 0x12c4));
      }
      FUN_00407a30((void *)(unaff_EBP - 0x1398),(int *)(unaff_EBP - 0x1564));
      piVar23 = (int *)FUN_00530550((void *)(unaff_EBP - 0x1454),(undefined4 *)(unaff_EBP - 0x14b8))
      ;
      uVar49 = CONCAT44(piVar23,0x521b25);
      bVar37 = FUN_0042c6f0((void *)(unaff_EBP - 0x1398),piVar23);
    } while (bVar37);
    pvVar21 = *(void **)(unaff_EBP - 0x12e0);
  }
  iVar9 = FUN_0041fff0((int *)(iVar8 + 0x18));
  *(int *)(iVar8 + 0xa0) = iVar9;
  FUN_0050d260(pvVar21,iVar8);
  if ((*(char *)((int)pvVar21 + 0xb4) == '\0') &&
     (bVar37 = FUN_00419f80((int)pvVar21 + 0x94), !bVar37)) {
    FUN_004c8190((void *)(unaff_EBP - 0x182c),3,1);
    iVar9 = *(int *)(unaff_EBP - 0x1364);
    *(undefined1 *)(unaff_EBP - 4) = 0xb;
    pbVar28 = FUN_00412710((basic_ostream<char,std::char_traits<char>_> *)(unaff_EBP - 0x181c),
                           "zone");
    pbVar29 = std::basic_ostream<char,std::char_traits<char>_>::operator<<
                        ((basic_ostream<char,std::char_traits<char>_> *)pbVar28,iVar9);
    pbVar28 = FUN_00412710((basic_ostream<char,std::char_traits<char>_> *)pbVar29,unaff_retaddr);
    std::basic_ostream<char,std::char_traits<char>_>::operator<<
              ((basic_ostream<char,std::char_traits<char>_> *)pbVar28,param_3);
    FUN_00422af0((undefined4 *)(unaff_EBP - 0x1574));
    *(undefined1 *)(unaff_EBP - 4) = 0xc;
    puVar20 = FUN_004d8f70((void *)(unaff_EBP - 0x182c),(void *)(unaff_EBP - 0x7c4));
    *(undefined1 *)(unaff_EBP - 4) = 0xd;
    uVar15 = FUN_00413130((void *)((int)pvVar21 + 0xac),puVar20,(undefined4 *)(unaff_EBP - 0x1574));
    *(char *)(unaff_EBP - 0x1309) = (char)uVar15;
    *(undefined1 *)(unaff_EBP - 4) = 0xc;
    FUN_004013a0((undefined4 *)(unaff_EBP - 0x7c4));
    if (*(char *)(unaff_EBP - 0x1309) != '\0') {
      puVar20 = FUN_0041d800((void *)(unaff_EBP - 0x177c),unaff_EBP - 0x1574);
      FUN_0041ee20(puVar20,pvVar21,iVar8);
    }
    FUN_0042f440((undefined4 *)(unaff_EBP - 0x1574));
    *(undefined1 *)(unaff_EBP - 4) = 10;
    FUN_004ce3e0((void *)(unaff_EBP - 0x182c));
  }
  FUN_004d1a70(pvVar21,*(uint *)(unaff_EBP - 0x1358),*(uint *)(unaff_EBP - 0x132c),
               *(int *)(unaff_EBP - 0x1370),*(uint *)(unaff_EBP - 0x132c) + 0x100,0,iVar8);
  *(void **)(unaff_EBP - 0x12e8) = (void *)(iVar8 + 4);
  FUN_00428070((void *)(iVar8 + 4),(undefined4 *)(unaff_EBP - 0x1324));
  piVar23 = (int *)FUN_00530550((void *)(iVar8 + 4),(undefined4 *)(unaff_EBP - 0x149c));
  bVar37 = FUN_0042c6f0((void *)(unaff_EBP - 0x1324),piVar23);
  if (bVar37) {
    do {
      iVar9 = FUN_0052eb90((int *)(unaff_EBP - 0x1324));
      iVar8 = *(int *)(unaff_EBP - 0x1308);
      iVar10 = 0;
      pCVar30 = (CRefTime *)FUN_004e2320((void *)(iVar9 + 8),2);
      lVar31 = CRefTime::Millisecs(pCVar30);
      pCVar30 = (CRefTime *)FUN_004e2320((void *)(iVar9 + 8),1);
      uVar11 = CRefTime::Millisecs(pCVar30);
      pCVar30 = (CRefTime *)FUN_004e2320((void *)(iVar9 + 8),0);
      uVar14 = CRefTime::Millisecs(pCVar30);
      pvVar21 = *(void **)(unaff_EBP - 0x12e0);
      bVar7 = FUN_004d24a0(pvVar21,uVar14,uVar11,lVar31,iVar8,iVar10);
      *(float *)(iVar9 + 0x28) = (float)CONCAT31(extraout_var_01,bVar7);
      FUN_0052ebf0((void *)(unaff_EBP - 0x1324),(undefined4 *)(unaff_EBP - 0x1494));
      piVar23 = (int *)FUN_00530550(*(void **)(unaff_EBP - 0x12e8),
                                    (undefined4 *)(unaff_EBP - 0x149c));
      bVar37 = FUN_0042c6f0((void *)(unaff_EBP - 0x1324),piVar23);
    } while (bVar37);
    iVar8 = *(int *)(unaff_EBP - 0x1308);
  }
  *(undefined4 *)(unaff_EBP - 0x12d8) = 0;
  iVar9 = FUN_0041cb40((int *)(iVar8 + 0xc));
  if (0 < iVar9) {
    iVar9 = 0;
    do {
      puVar52 = (ulonglong *)(unaff_EBP - 0x1744);
      iVar17 = 1;
      iVar10 = iVar8;
      iVar9 = FUN_0041ba70((void *)(iVar8 + 0xc),iVar9);
      FUN_004e2320((void *)(iVar9 + 8),iVar17);
      pCVar30 = (CRefTime *)FUN_004ce2d0(puVar52);
      uVar11 = CRefTime::Millisecs(pCVar30);
      puVar52 = (ulonglong *)(unaff_EBP - 0x1754);
      iVar17 = 0;
      iVar9 = FUN_0041ba70((void *)(iVar8 + 0xc),*(int *)(unaff_EBP - 0x12d8));
      FUN_004e2320((void *)(iVar9 + 8),iVar17);
      pCVar30 = (CRefTime *)FUN_004ce2d0(puVar52);
      uVar14 = CRefTime::Millisecs(pCVar30);
      iVar9 = FUN_0041c9e0(pvVar21,uVar14,uVar11,iVar10);
      *(int *)(unaff_EBP - 0x12e8) = iVar9;
      if (iVar9 != 0) {
        FUN_00402990(&stack0xfffffff4,*(undefined4 *)(unaff_EBP - 0x135c),
                     *(undefined4 *)(unaff_EBP - 0x1364),*(undefined4 *)(unaff_EBP - 0x12d8));
        iVar9 = FUN_0041ba70((void *)(iVar8 + 0xc),*(int *)(unaff_EBP - 0x12d8));
        puVar20 = (undefined4 *)FUN_004f7350((void *)(unaff_EBP - 0x7fc),iVar9,uVar14,uVar11,iVar10)
        ;
        FUN_005283b0(*(void **)(unaff_EBP - 0x12e8),puVar20);
      }
      *(int *)(unaff_EBP - 0x12d8) = *(int *)(unaff_EBP - 0x12d8) + 1;
      iVar10 = FUN_0041cb40((int *)(iVar8 + 0xc));
      iVar9 = *(int *)(unaff_EBP - 0x12d8);
    } while (iVar9 < iVar10);
  }
  *(int *)(*(int *)(unaff_EBP - 0x137c) + 0x10018 + *(int *)(unaff_EBP - 0x13ac) * 4) = iVar8;
  FUN_004f7710((undefined4 *)(unaff_EBP - 0x1454));
  FUN_004f7710((undefined4 *)(unaff_EBP - 0x144c));
  FUN_00423710((int *)(unaff_EBP - 0x13a8));
  FUN_00423710((int *)(unaff_EBP - 0x1378));
  FUN_00423710((int *)(unaff_EBP - 0x13c4));
  ExceptionList = *(void **)(unaff_EBP - 0xc);
  __security_check_cookie(*(uint *)(unaff_EBP - 0x10) ^ unaff_EBP);
  return;
}


/* FUN_0051b26a @ 0051b26a  kind=gamemisc  attributed-by=none  size=5776 */

void __thiscall FUN_0051b26a(void *this,undefined4 param_1,undefined4 param_2,int param_3)

{
  float *pfVar1;
  undefined1 uVar2;
  undefined2 uVar3;
  undefined4 *puVar4;
  longlong lVar5;
  char cVar6;
  byte bVar7;
  int iVar8;
  uint uVar9;
  undefined *puVar10;
  undefined8 *puVar11;
  uint uVar12;
  undefined4 uVar13;
  int iVar14;
  float *pfVar15;
  int iVar16;
  Spawn *pSVar17;
  void *pvVar18;
  undefined3 extraout_var;
  undefined3 extraout_var_00;
  undefined4 *puVar19;
  void *pvVar20;
  int *piVar21;
  int *piVar22;
  undefined1 *puVar23;
  byte *pbVar24;
  uint *puVar25;
  uint *puVar26;
  basic_ostream<char,std::char_traits<char>_> *pbVar27;
  basic_ostream<char,struct_std::char_traits<char>_> *pbVar28;
  CRefTime *pCVar29;
  long lVar30;
  undefined3 extraout_var_01;
  int iVar31;
  uint uVar32;
  uint uVar33;
  int iVar34;
  uint unaff_EBP;
  void *unaff_ESI;
  float unaff_EDI;
  uint uVar35;
  char *pcVar36;
  bool bVar37;
  float10 fVar38;
  float fVar39;
  double dVar40;
  double dVar41;
  float fVar42;
  float fVar43;
  float fVar44;
  float fVar45;
  float in_XMM2_Da;
  float fVar46;
  ulonglong uVar47;
  undefined8 uVar48;
  ulonglong uVar49;
  char *unaff_retaddr;
  undefined4 uVar50;
  ulonglong *puVar51;
  undefined4 uVar52;
  undefined1 *puVar53;
  
LAB_0051b270:
  do {
    uVar9 = *(uint *)(unaff_EBP - 0x12d0);
    uVar12 = *(uint *)((int)this + 0x10);
    iVar8 = *(int *)(unaff_EBP - 0x12dc);
    iVar14 = *(int *)((int)this + 0x14);
    *(uint *)(unaff_EBP - 0x1340) = uVar9 - *(uint *)((int)this + 0x10);
    uVar33 = *(uint *)(unaff_EBP - 0x1328);
    *(uint *)(unaff_EBP - 0x133c) = (iVar8 - iVar14) - (uint)(uVar9 < uVar12);
    iVar8 = *(int *)(unaff_EBP - 0x1338);
    *(float *)(unaff_EBP - 0x12f0) = (float)*(longlong *)(unaff_EBP - 0x1340);
    uVar9 = *(uint *)((int)this + 8);
    uVar12 = *(uint *)((int)this + 8);
    *(undefined4 *)(unaff_EBP - 0x12f0) = *(undefined4 *)(unaff_EBP - 0x12f0);
    fVar42 = *(float *)(unaff_EBP - 0x12f0);
    iVar14 = *(int *)((int)this + 0xc);
    *(uint *)(unaff_EBP - 0x1354) = uVar33 - uVar12;
    *(uint *)(unaff_EBP - 0x1350) = (iVar8 - iVar14) - (uint)(uVar33 < uVar9);
    fVar42 = fVar42 * in_XMM2_Da;
    *(float *)(unaff_EBP - 0x12f0) = (float)*(longlong *)(unaff_EBP - 0x1354);
    *(undefined4 *)(unaff_EBP - 0x12f0) = *(undefined4 *)(unaff_EBP - 0x12f0);
    fVar39 = *(float *)(unaff_EBP - 0x12f0) * in_XMM2_Da;
    *(float *)(unaff_EBP - 0x15cc) = fVar39;
    if (fVar39 * fVar39 + fVar42 * fVar42 < 6400.0) goto LAB_0051b45b;
    this = *(void **)this;
  } while (this != (void *)*(int *)(unaff_EBP - 0x1378));
  uVar12 = *(uint *)(unaff_EBP - 0x12d4);
  uVar9 = *(uint *)(unaff_EBP - 0x12f4);
LAB_0051b333:
  fVar38 = FUN_004d19f0(unaff_ESI,uVar12,uVar9);
  *(float *)(unaff_EBP - 0x12d0) = (float)fVar38;
  if (*(float *)(unaff_EBP - 0x12d0) <= 0.6) {
    fVar38 = FUN_0052cd50(unaff_ESI,*(uint *)(unaff_EBP - 0x12d4),*(float *)(unaff_EBP - 0x12f4),
                          (int)unaff_EDI);
    *(float *)(unaff_EBP - 0x12d0) = (float)fVar38;
    if (1.0 - *(float *)(unaff_EBP - 0x12d0) * 50.0 < 0.0) {
      fVar38 = (float10)FUN_00523d80(*(uint *)(unaff_EBP - 0x12d4),*(float *)(unaff_EBP - 0x12f4),
                                     unaff_EDI);
      *(float *)(unaff_EBP - 0x12d0) = (float)fVar38;
      iVar8 = FUN_00406100(unaff_ESI,*(uint *)(unaff_EBP - 0x12d4),*(uint *)(unaff_EBP - 0x12f4),
                           (int)unaff_EDI);
      *(int *)(unaff_EBP - 0x1320) = *(int *)(iVar8 + 0x1c) + *(int *)(iVar8 + 0x10);
      uVar9 = rand();
      uVar9 = uVar9 & 0x80000001;
      bVar37 = uVar9 == 0;
      if ((int)uVar9 < 0) {
        bVar37 = (uVar9 - 1 | 0xfffffffe) == 0xffffffff;
      }
      if ((bVar37) ||
         (0.25 < *(float *)(unaff_EBP - 0x12d0) || *(float *)(unaff_EBP - 0x12d0) == 0.25)) {
        FUN_004ffbf0(unaff_ESI,*(int *)(unaff_EBP - 0x12d4),*(int *)(unaff_EBP - 0x12f4),
                     *(int *)(unaff_EBP - 0x1320),*(int *)(unaff_EBP - 0x12d8),
                     *(int *)(unaff_EBP - 0x12ec),*(int *)(unaff_EBP - 0x1304),(int)unaff_EDI);
      }
      else {
        FUN_004ff3f0(unaff_ESI,*(int *)(unaff_EBP - 0x12d4),*(int *)(unaff_EBP - 0x12f4),
                     *(int *)(unaff_EBP - 0x1320),*(int *)(unaff_EBP - 0x12d8),
                     *(int *)(unaff_EBP - 0x12ec),*(int *)(unaff_EBP - 0x1304) / 2,(int)unaff_EDI);
      }
    }
  }
LAB_0051b45b:
  while( true ) {
    piVar22 = (int *)(unaff_EBP - 0x1314);
    *piVar22 = *piVar22 + -1;
    if (*piVar22 == 0) break;
    iVar8 = rand();
    iVar8 = iVar8 % 0x28 + 10;
    *(int *)(unaff_EBP - 0x12d8) = iVar8;
    iVar14 = rand();
    *(int *)(unaff_EBP - 0x12ec) = iVar14 % 0x28 + 10;
    iVar14 = rand();
    *(int *)(unaff_EBP - 0x1304) = iVar14 % 0x19 + 10;
    iVar14 = *(int *)(unaff_EBP - 0x12ec);
    iVar31 = rand();
    *(int *)(unaff_EBP - 0x12d4) =
         iVar31 % ((0x40 - iVar8) * 4) +
         (**(int **)(unaff_EBP - 0x12e4) * 0x80 + *(int *)(unaff_EBP - 0x12d8)) * 2;
    iVar8 = rand();
    unaff_EDI = *(float *)(unaff_EBP - 0x1308);
    unaff_ESI = *(void **)(unaff_EBP - 0x12e0);
    uVar9 = iVar8 % ((0x40 - iVar14) * 4) +
            (*(int *)((int)unaff_EDI + 100) * 0x80 + *(int *)(unaff_EBP - 0x12ec)) * 2;
    uVar12 = *(uint *)(unaff_EBP - 0x12d4);
    fVar42 = (float)(int)uVar12 - *(float *)((int)unaff_ESI + 0x8000f0);
    *(float *)(unaff_EBP - 0x16dc) = fVar42;
    fVar39 = (float)(int)uVar9 - *(float *)((int)unaff_ESI + 0x8000f4);
    *(uint *)(unaff_EBP - 0x12f4) = uVar9;
    if (3600.0 <= fVar39 * fVar39 + fVar42 * fVar42) goto code_r0x0051b21c;
  }
  uVar9 = *(uint *)(unaff_EBP - 0x1358);
  *(uint *)(unaff_EBP - 0x12cc) = uVar9;
  if ((int)uVar9 < *(int *)(unaff_EBP - 0x1370)) {
    uVar12 = *(uint *)(unaff_EBP - 0x132c);
    iVar8 = uVar12 + 0x100;
    while( true ) {
      *(uint *)(unaff_EBP - 0x12e4) = uVar12;
      if ((int)uVar12 < iVar8) {
        do {
          fVar38 = (float10)FUN_0052d990(unaff_ESI,uVar9,uVar12);
          *(float *)(unaff_EBP - 0x12d0) = (float)fVar38;
          uVar9 = *(uint *)(unaff_EBP - 0x12e4);
          uVar12 = *(uint *)(unaff_EBP - 0x12cc);
          *(float *)(unaff_EBP - 0x1304) = 1.0 - *(float *)(unaff_EBP - 0x12d0) * 50.0;
          fVar38 = FUN_004d19f0(unaff_ESI,uVar12,uVar9);
          *(float *)(unaff_EBP - 0x12ec) = (float)fVar38;
          if (0.0 <= *(float *)(unaff_EBP - 0x1304)) {
            fVar38 = (float10)FUN_004f9b70(unaff_ESI,*(uint *)(unaff_EBP - 0x12cc),
                                           *(float *)(unaff_EBP - 0x12e4),(int)unaff_EDI);
            *(float *)(unaff_EBP - 0x12d0) = (float)fVar38;
            fVar42 = *(float *)(unaff_EBP - 0x12d0);
            *(float *)(unaff_EBP - 0x1320) = fVar42;
            if (fVar42 < 0.0) {
              *(undefined4 *)(unaff_EBP - 0x1320) = 0;
              fVar42 = 0.0;
            }
            fVar39 = 1.0 - *(float *)(unaff_EBP - 0x1304);
            *(int *)(unaff_EBP - 0x12d4) = (int)(fVar42 + 1.0);
            iVar8 = *(int *)(unaff_EBP - 0x12e4);
            *(float *)(unaff_EBP - 0x12dc) = 1.0 - fVar39 * fVar39 * fVar39;
            iVar14 = *(int *)(unaff_EBP - 0x12cc);
            *(double *)(unaff_EBP - 0x13b4) = (double)iVar8;
            *(double *)(unaff_EBP - 0x13bc) = (double)iVar14;
            dVar40 = (double)iVar14 * 0.02 + 55432.0;
            fVar38 = FUN_004d5d30(SUB84(dVar40,0),(int)((ulonglong)dVar40 >> 0x20),
                                  (double)iVar8 * 0.02 + 974.0);
            *(float *)(unaff_EBP - 0x12d0) = (float)fVar38;
            iVar8 = *(int *)(unaff_EBP - 0x12d4);
            uVar9 = *(uint *)(unaff_EBP - 0x12e4);
            uVar12 = *(uint *)(unaff_EBP - 0x12cc);
            *(int *)(unaff_EBP - 0x12d8) =
                 (int)((*(float *)(unaff_EBP - 0x12d0) + 1.0) * 4.0 +
                      *(float *)(unaff_EBP - 0x12dc) * 5.0 + *(float *)(unaff_EBP - 0x1320));
            puVar10 = FUN_00405fd0(unaff_ESI,uVar12,uVar9,iVar8,(int)unaff_EDI);
            if ((((puVar10[3] & 0x1f) != 0) && ((puVar10[3] & 0x1f) != 2)) &&
               (puVar10 = FUN_00405fd0(unaff_ESI,*(uint *)(unaff_EBP - 0x12cc),
                                       *(uint *)(unaff_EBP - 0x12e4),*(int *)(unaff_EBP - 0x12d4),
                                       (int)unaff_EDI), (puVar10[3] & 0x40) == 0)) {
              dVar40 = *(double *)(unaff_EBP - 0x13b4);
              *(undefined4 *)(unaff_EBP - 0x244) = 0x42200000;
              *(undefined4 *)(unaff_EBP - 0x240) = 0x42200000;
              *(undefined4 *)(unaff_EBP - 0x23c) = 0x42200000;
              dVar41 = *(double *)(unaff_EBP - 0x13bc) * 0.05 + 843.0;
              fVar38 = FUN_004d5d30(SUB84(dVar41,0),(int)((ulonglong)dVar41 >> 0x20),
                                    dVar40 * 0.05 + 984.0);
              *(float *)(unaff_EBP - 0x12d0) = (float)fVar38;
              uVar13 = *(undefined4 *)(unaff_EBP - 0x23c);
              *(undefined8 *)(unaff_EBP - 0x150) = *(undefined8 *)(unaff_EBP - 0x244);
              fVar42 = *(float *)(unaff_EBP - 0x12d0);
              fVar39 = *(float *)(unaff_EBP - 0x150);
              fVar43 = *(float *)(unaff_EBP - 0x14c);
              *(undefined4 *)(unaff_EBP - 0x148) = uVar13;
              fVar39 = fVar39 * fVar42;
              fVar43 = fVar43 * fVar42;
              fVar42 = *(float *)(unaff_EBP - 0x148) * fVar42;
              *(undefined4 *)(unaff_EBP - 0x1d8) = 0x430c0000;
              *(undefined4 *)(unaff_EBP - 0x1d4) = 0x430c0000;
              *(undefined8 *)(unaff_EBP - 0x24) = *(undefined8 *)(unaff_EBP - 0x1d8);
              fVar44 = *(float *)(unaff_EBP - 0x24);
              *(undefined4 *)(unaff_EBP - 0x1d0) = 0x430c0000;
              *(undefined4 *)(unaff_EBP - 0x1c) = *(undefined4 *)(unaff_EBP - 0x1d0);
              iVar8 = *(int *)(unaff_EBP - 0x12e4);
              *(float *)(unaff_EBP - 0x24) = fVar44 + fVar39;
              iVar14 = *(int *)(unaff_EBP - 0x12cc);
              iVar31 = (iVar8 / 2) * 0xea;
              *(float *)(unaff_EBP - 0x20) = *(float *)(unaff_EBP - 0x20) + fVar43;
              fVar44 = *(float *)(unaff_EBP - 0x1c);
              *(int *)(unaff_EBP - 0x12dc) = iVar31;
              iVar8 = (iVar14 / 2) * 0xea;
              *(float *)(unaff_EBP - 0x1c) = fVar44 + fVar42;
              dVar40 = (double)(iVar8 + 0x12e2);
              *(float *)(unaff_EBP - 0x150) = fVar39;
              *(float *)(unaff_EBP - 0x14c) = fVar43;
              *(float *)(unaff_EBP - 0x148) = fVar42;
              *(int *)(unaff_EBP - 0x12f0) = iVar8;
              fVar38 = FUN_004d5d30(SUB84(dVar40,0),(int)((ulonglong)dVar40 >> 0x20),
                                    (double)(iVar31 + 0xc11a));
              *(float *)(unaff_EBP - 0x12d0) = (float)fVar38;
              if (0.5 < *(float *)(unaff_EBP - 0x12d0)) {
                iVar8 = *(int *)(unaff_EBP - 0x12dc);
                *(undefined4 *)(unaff_EBP - 0x1e4) = 0x41a00000;
                iVar14 = *(int *)(unaff_EBP - 0x12f0);
                *(undefined4 *)(unaff_EBP - 0x1e0) = 0x41a00000;
                *(undefined4 *)(unaff_EBP - 0x1dc) = 0x41a00000;
                fVar38 = FUN_004d5d30(SUB84((double)iVar14,0),
                                      (int)((ulonglong)(double)iVar14 >> 0x20),
                                      (double)(iVar8 + 0x31));
                uVar48 = *(undefined8 *)(unaff_EBP - 0x1e4);
                uVar13 = *(undefined4 *)(unaff_EBP - 0x1dc);
                *(float *)(unaff_EBP - 0x12d0) = (float)fVar38;
                *(undefined8 *)(unaff_EBP - 0x15c) = uVar48;
                fVar42 = *(float *)(unaff_EBP - 0x12d0);
                fVar39 = *(float *)(unaff_EBP - 0x15c);
                fVar43 = *(float *)(unaff_EBP - 0x158);
                *(undefined4 *)(unaff_EBP - 0x154) = uVar13;
                fVar39 = fVar39 * fVar42;
                fVar43 = fVar43 * fVar42;
                fVar42 = *(float *)(unaff_EBP - 0x154) * fVar42;
                *(float *)(unaff_EBP - 0x15c) = fVar39;
                fVar44 = *(float *)(unaff_EBP - 0x24);
                *(float *)(unaff_EBP - 0x158) = fVar43;
                fVar46 = *(float *)(unaff_EBP - 0x20);
                *(float *)(unaff_EBP - 0x154) = fVar42;
                fVar45 = *(float *)(unaff_EBP - 0x1c);
                *(float *)(unaff_EBP - 0x24) = fVar39 + fVar44;
                *(float *)(unaff_EBP - 0x20) = fVar43 + fVar46;
                *(float *)(unaff_EBP - 0x1c) = fVar42 + fVar45;
              }
              iVar8 = *(int *)(*(int *)(unaff_EBP - 0x137c) + 0x14);
              if (((iVar8 == 1) || (iVar8 == 4)) || (iVar8 == 5)) {
                puVar11 = (undefined8 *)
                          FUN_004fae90(unaff_ESI,(float *)(unaff_EBP - 0x764),
                                       *(float *)(unaff_EBP - 0x12cc),*(uint *)(unaff_EBP - 0x12e4),
                                       *(int *)(unaff_EBP - 0x12d4),(int)unaff_EDI);
                uVar48 = *puVar11;
                uVar13 = *(undefined4 *)(puVar11 + 1);
                *(undefined8 *)(unaff_EBP - 0x24) = uVar48;
                *(undefined4 *)(unaff_EBP - 0x1c) = uVar13;
              }
              else {
                uVar13 = *(undefined4 *)(unaff_EBP - 0x1c);
                uVar48 = *(undefined8 *)(unaff_EBP - 0x24);
              }
              fVar42 = *(float *)(unaff_EBP - 0x12ec);
              *(undefined8 *)(unaff_EBP - 0x174) = uVar48;
              fVar39 = fVar42 * *(float *)(unaff_EBP - 0x174);
              iVar8 = *(int *)(unaff_EBP - 0x12d4);
              *(float *)(unaff_EBP - 0x12d0) = fVar39;
              uVar9 = *(uint *)(unaff_EBP - 0x12e4);
              *(float *)(unaff_EBP - 0x174) = fVar39;
              fVar39 = *(float *)(unaff_EBP - 0x12cc);
              fVar43 = fVar42 * *(float *)(unaff_EBP - 0x170);
              *(undefined4 *)(unaff_EBP - 0x16c) = uVar13;
              *(float *)(unaff_EBP - 0x12dc) = fVar43;
              *(float *)(unaff_EBP - 0x170) = fVar43;
              fVar42 = fVar42 * *(float *)(unaff_EBP - 0x16c);
              *(float *)(unaff_EBP - 0x12f0) = fVar42;
              *(float *)(unaff_EBP - 0x16c) = fVar42;
              puVar11 = (undefined8 *)
                        FUN_004fae90(unaff_ESI,(float *)(unaff_EBP - 2000),fVar39,uVar9,iVar8,
                                     (int)unaff_EDI);
              fVar44 = 1.0 - *(float *)(unaff_EBP - 0x12ec);
              *(undefined8 *)(unaff_EBP - 0xc0) = *puVar11;
              *(undefined4 *)(unaff_EBP - 0xb8) = *(undefined4 *)(puVar11 + 1);
              *(float *)(unaff_EBP - 0xc0) = fVar44 * *(float *)(unaff_EBP - 0xc0);
              fVar42 = *(float *)(unaff_EBP - 0xb8);
              *(float *)(unaff_EBP - 0xbc) = fVar44 * *(float *)(unaff_EBP - 0xbc);
              *(undefined8 *)(unaff_EBP - 0xd8) = *(undefined8 *)(unaff_EBP - 0xc0);
              fVar39 = *(float *)(unaff_EBP - 0xd8);
              fVar43 = *(float *)(unaff_EBP - 0x12d0);
              *(float *)(unaff_EBP - 0xb8) = fVar44 * fVar42;
              *(undefined4 *)(unaff_EBP - 0xd0) = *(undefined4 *)(unaff_EBP - 0xb8);
              *(float *)(unaff_EBP - 0xd8) = fVar39 + fVar43;
              *(float *)(unaff_EBP - 0xd4) =
                   *(float *)(unaff_EBP - 0xd4) + *(float *)(unaff_EBP - 0x12dc);
              *(float *)(unaff_EBP - 0xd0) =
                   *(float *)(unaff_EBP - 0xd0) + *(float *)(unaff_EBP - 0x12f0);
              uVar48 = *(undefined8 *)(unaff_EBP - 0xd8);
              *(undefined4 *)(unaff_EBP - 0x1a0) = *(undefined4 *)(unaff_EBP - 0xd0);
              *(undefined8 *)(unaff_EBP - 0x1a8) = uVar48;
              iVar8 = 0;
              do {
                pfVar15 = (float *)((unaff_EBP - 0x1a8) + iVar8 * 4);
                if (*pfVar15 <= 0.0 && *pfVar15 != 0.0) {
                  *(undefined4 *)((unaff_EBP - 0x1a8) + iVar8 * 4) = 0;
                }
                if (255.0 < *(float *)((unaff_EBP - 0x1a8) + iVar8 * 4)) {
                  *(undefined4 *)((unaff_EBP - 0x1a8) + iVar8 * 4) = 0x437f0000;
                }
                iVar8 = iVar8 + 1;
              } while (iVar8 < 3);
              iVar8 = 0;
              do {
                iVar14 = iVar8 * 4;
                iVar8 = iVar8 + 1;
                *(char *)((unaff_EBP - 0x13e9) + iVar8) =
                     (char)(int)*(float *)((unaff_EBP - 0x1a8) + iVar14);
              } while (iVar8 < 3);
              *(undefined2 *)(unaff_EBP - 0x1434) = *(undefined2 *)(unaff_EBP - 0x13e8);
              *(undefined1 *)(unaff_EBP - 0x1432) = *(undefined1 *)(unaff_EBP - 0x13e6);
              iVar8 = *(int *)(unaff_EBP - 0x12d4);
              uVar9 = *(uint *)(unaff_EBP - 0x12e4);
              fVar42 = *(float *)(unaff_EBP - 0x12cc);
              *(undefined1 *)(unaff_EBP - 0x1431) = 0xb;
              FUN_0041ff00(unaff_ESI,fVar42,uVar9,iVar8 + -1,(undefined1 *)(unaff_EBP - 0x1434),
                           (int)unaff_EDI);
              if (0.92 < *(float *)(unaff_EBP - 0x12ec)) {
                iVar8 = FUN_00406100(unaff_ESI,*(uint *)(unaff_EBP - 0x12cc),
                                     *(uint *)(unaff_EBP - 0x12e4),(int)unaff_EDI);
                *(int *)(unaff_EBP - 0x12d8) = *(int *)(iVar8 + 0x1c) + *(int *)(iVar8 + 0x10);
              }
              iVar8 = *(int *)(unaff_EBP - 0x12d4);
              if (iVar8 < *(int *)(unaff_EBP - 0x12d8)) {
                do {
                  puVar10 = FUN_00405fd0(unaff_ESI,*(uint *)(unaff_EBP - 0x12cc),
                                         *(uint *)(unaff_EBP - 0x12e4),iVar8,(int)unaff_EDI);
                  if ((puVar10[3] & 0x40) == 0) {
                    FUN_0041ff00(unaff_ESI,*(float *)(unaff_EBP - 0x12cc),
                                 *(uint *)(unaff_EBP - 0x12e4),*(int *)(unaff_EBP - 0x12d4),
                                 (undefined1 *)&DAT_005842c0,(int)unaff_EDI);
                  }
                  iVar8 = *(int *)(unaff_EBP - 0x12d4) + 1;
                  *(int *)(unaff_EBP - 0x12d4) = iVar8;
                } while (iVar8 < *(int *)(unaff_EBP - 0x12d8));
              }
            }
          }
          uVar9 = *(uint *)(unaff_EBP - 0x12cc);
          uVar12 = *(int *)(unaff_EBP - 0x12e4) + 1;
          iVar8 = *(int *)(unaff_EBP - 0x132c) + 0x100;
          *(uint *)(unaff_EBP - 0x12e4) = uVar12;
        } while ((int)uVar12 < iVar8);
      }
      uVar9 = uVar9 + 1;
      *(uint *)(unaff_EBP - 0x12cc) = uVar9;
      if (*(int *)(unaff_EBP - 0x1370) <= (int)uVar9) break;
      uVar12 = *(uint *)(unaff_EBP - 0x132c);
    }
  }
  *(undefined4 *)(unaff_EBP - 0x13a4) = 0;
  uVar13 = FUN_00407be0((undefined4 *)0x0,(undefined4 *)0x0);
  *(undefined4 *)(unaff_EBP - 0x13a8) = uVar13;
  uVar9 = *(uint *)(unaff_EBP - 0x1358);
  *(undefined1 *)(unaff_EBP - 4) = 3;
  *(uint *)(unaff_EBP - 0x12e4) = uVar9;
  if ((int)uVar9 < (int)(uVar9 + 0x100)) {
    fVar42 = *(float *)(unaff_EBP - 0x132c);
    *(undefined4 *)(unaff_EBP - 0x12dc) = 200;
    iVar8 = (int)fVar42 + 0x100;
    do {
      *(float *)(unaff_EBP - 0x12cc) = fVar42;
      if ((int)fVar42 < iVar8) {
        do {
          fVar38 = FUN_0052cd50(unaff_ESI,uVar9,fVar42,(int)unaff_EDI);
          *(float *)(unaff_EBP - 0x12d0) = (float)fVar38;
          fVar42 = 1.0 - *(float *)(unaff_EBP - 0x12d0) * 50.0;
          *(float *)(unaff_EBP - 0x12f0) = fVar42;
          if (0.0 <= fVar42) {
            fVar38 = FUN_004d19f0(unaff_ESI,*(uint *)(unaff_EBP - 0x12e4),
                                  *(uint *)(unaff_EBP - 0x12cc));
            *(float *)(unaff_EBP - 0x12d0) = (float)fVar38;
            if (*(float *)(unaff_EBP - 0x12d0) <= 0.95) {
              fVar38 = (float10)FUN_004f9b70(unaff_ESI,*(uint *)(unaff_EBP - 0x12e4),
                                             *(float *)(unaff_EBP - 0x12cc),(int)unaff_EDI);
              *(float *)(unaff_EBP - 0x12d0) = (float)fVar38;
              fVar42 = *(float *)(unaff_EBP - 0x12d0);
              *(float *)(unaff_EBP - 0x1304) = fVar42;
              if (fVar42 < 0.0) {
                fVar42 = 0.0;
                *(undefined4 *)(unaff_EBP - 0x1304) = 0;
              }
              iVar8 = ((int)fVar42 / 5) * 5;
              fVar39 = (float)iVar8;
              *(int *)(unaff_EBP - 0x12d0) = iVar8;
              fVar42 = (fVar42 - fVar39) / 5.0;
              if (0.5 <= fVar42) {
                fVar42 = 1.0 - (fVar42 - 0.5) * 4.0;
                *(float *)(unaff_EBP - 0x12ec) = fVar42;
                if (fVar42 < 0.0) {
                  fVar42 = (fVar42 + 1.0) * (fVar42 + 1.0) - 1.0;
                  goto LAB_0051bd95;
                }
              }
              else {
                fVar42 = fVar42 * 2.0;
LAB_0051bd95:
                *(float *)(unaff_EBP - 0x12ec) = fVar42;
              }
              *(int *)(unaff_EBP - 0x12f8) = iVar8;
              if (fVar42 < 0.0) {
                *(int *)(unaff_EBP - 0x12f8) = (int)(fVar39 - fVar42 * 5.0);
              }
              iVar14 = (int)((fVar39 - fVar42 * 5.0) + 2.0);
              *(int *)(unaff_EBP - 0x12d8) = iVar14;
              if (iVar14 <= iVar8) {
                do {
                  puVar10 = FUN_00405fd0(unaff_ESI,*(uint *)(unaff_EBP - 0x12e4),
                                         *(uint *)(unaff_EBP - 0x12cc),iVar14,(int)unaff_EDI);
                  if ((puVar10[3] & 0x40) == 0) {
                    fVar42 = *(float *)(unaff_EBP - 0x12ec);
                    fVar45 = 1.0 - fVar42;
                    *(undefined4 *)(unaff_EBP - 0x1fc) = 0;
                    *(undefined4 *)(unaff_EBP - 0x1f8) = 0;
                    *(undefined8 *)(unaff_EBP - 0x168) = *(undefined8 *)(unaff_EBP - 0x1fc);
                    fVar39 = *(float *)(unaff_EBP - 0x168);
                    fVar43 = *(float *)(unaff_EBP - 0x164);
                    *(undefined4 *)(unaff_EBP - 0x214) = 0;
                    *(undefined4 *)(unaff_EBP - 0x210) = 0;
                    *(undefined8 *)(unaff_EBP - 0x90) = *(undefined8 *)(unaff_EBP - 0x214);
                    fVar39 = fVar39 * fVar42;
                    *(float *)(unaff_EBP - 0x90) = fVar45 * *(float *)(unaff_EBP - 0x90);
                    fVar44 = *(float *)(unaff_EBP - 0x8c);
                    *(undefined4 *)(unaff_EBP - 500) = 0;
                    uVar13 = *(undefined4 *)(unaff_EBP - 500);
                    *(float *)(unaff_EBP - 0x8c) = fVar45 * fVar44;
                    *(undefined8 *)(unaff_EBP - 0x114) = *(undefined8 *)(unaff_EBP - 0x90);
                    fVar44 = *(float *)(unaff_EBP - 0x114);
                    *(undefined4 *)(unaff_EBP - 0x160) = uVar13;
                    fVar46 = *(float *)(unaff_EBP - 0x160);
                    fVar43 = fVar43 * fVar42;
                    *(undefined4 *)(unaff_EBP - 0x20c) = 0x437f0000;
                    uVar13 = *(undefined4 *)(unaff_EBP - 0x20c);
                    *(float *)(unaff_EBP - 0x114) = fVar44 + fVar39;
                    fVar44 = *(float *)(unaff_EBP - 0x110);
                    *(undefined4 *)(unaff_EBP - 0x88) = uVar13;
                    fVar46 = fVar46 * fVar42;
                    *(float *)(unaff_EBP - 0x88) = fVar45 * *(float *)(unaff_EBP - 0x88);
                    *(undefined4 *)(unaff_EBP - 0x10c) = *(undefined4 *)(unaff_EBP - 0x88);
                    *(float *)(unaff_EBP - 0x110) = fVar44 + fVar43;
                    fVar42 = *(float *)(unaff_EBP - 0x10c);
                    *(float *)(unaff_EBP - 0x168) = fVar39;
                    *(float *)(unaff_EBP - 0x164) = fVar43;
                    *(float *)(unaff_EBP - 0x160) = fVar46;
                    iVar8 = 0;
                    *(float *)(unaff_EBP - 0x10c) = fVar42 + fVar46;
                    do {
                      iVar14 = iVar8 * 4;
                      iVar8 = iVar8 + 1;
                      *(char *)((unaff_EBP - 0x1419) + iVar8) =
                           (char)(int)*(float *)((unaff_EBP - 0x114) + iVar14);
                    } while (iVar8 < 3);
                    *(undefined2 *)(unaff_EBP - 0x13fc) = *(undefined2 *)(unaff_EBP - 0x1418);
                    *(undefined1 *)(unaff_EBP - 0x13fa) = *(undefined1 *)(unaff_EBP - 0x1416);
                    iVar8 = *(int *)(unaff_EBP - 0x12d8);
                    uVar9 = *(uint *)(unaff_EBP - 0x12cc);
                    *(undefined1 *)(unaff_EBP - 0x13f9) = 2;
                    FUN_0041ff00(unaff_ESI,*(float *)(unaff_EBP - 0x12e4),uVar9,iVar8,
                                 (undefined1 *)(unaff_EBP - 0x13fc),(int)unaff_EDI);
                  }
                  iVar8 = *(int *)(unaff_EBP - 0x12d0);
                  iVar14 = *(int *)(unaff_EBP - 0x12d8) + 1;
                  *(int *)(unaff_EBP - 0x12d8) = iVar14;
                } while (iVar14 <= iVar8);
              }
              if (((iVar8 <= *(int *)(unaff_EBP - 0x12f8)) &&
                  (puVar10 = FUN_00405fd0(unaff_ESI,*(uint *)(unaff_EBP - 0x12e4),
                                          *(uint *)(unaff_EBP - 0x12cc),*(int *)(unaff_EBP - 0x12f8)
                                          ,(int)unaff_EDI), (puVar10[3] & 0x1f) != 2)) &&
                 (puVar10 = FUN_00405fd0(unaff_ESI,*(uint *)(unaff_EBP - 0x12e4),
                                         *(uint *)(unaff_EBP - 0x12cc),*(int *)(unaff_EBP - 0x12f8),
                                         (int)unaff_EDI), (puVar10[3] & 0x40) == 0)) {
                pfVar15 = FUN_0052d030(unaff_ESI,(float *)(unaff_EBP - 0x710),
                                       *(float *)(unaff_EBP - 0x12e4),*(uint *)(unaff_EBP - 0x12cc),
                                       *(int *)(unaff_EBP - 0x12f8),(int)unaff_EDI);
                iVar8 = 0;
                do {
                  pfVar1 = pfVar15 + iVar8;
                  iVar8 = iVar8 + 1;
                  *(char *)((unaff_EBP - 0x13d5) + iVar8) = (char)(int)*pfVar1;
                } while (iVar8 < 3);
                *(undefined2 *)(unaff_EBP - 0x1414) = *(undefined2 *)(unaff_EBP - 0x13d4);
                *(undefined1 *)(unaff_EBP - 0x1412) = *(undefined1 *)(unaff_EBP - 0x13d2);
                iVar8 = *(int *)(unaff_EBP - 0x12f8);
                uVar9 = *(uint *)(unaff_EBP - 0x12cc);
                *(undefined1 *)(unaff_EBP - 0x1411) = 3;
                FUN_0041ff00(unaff_ESI,*(float *)(unaff_EBP - 0x12e4),uVar9,iVar8,
                             (undefined1 *)(unaff_EBP - 0x1414),(int)unaff_EDI);
                iVar8 = rand();
                if (iVar8 % *(int *)(unaff_EBP - 0x12dc) == 0) {
                  *(undefined4 *)(unaff_EBP - 700) = *(undefined4 *)(unaff_EBP - 0x12e4);
                  *(undefined4 *)(unaff_EBP - 0x2b8) = *(undefined4 *)(unaff_EBP - 0x12cc);
                  *(undefined4 *)(unaff_EBP - 0x2b4) = *(undefined4 *)(unaff_EBP - 0x12f8);
                  iVar14 = FUN_004d9b70(*(undefined4 **)(unaff_EBP - 0x13a8),
                                        (undefined4 *)(*(undefined4 **)(unaff_EBP - 0x13a8))[1],
                                        (undefined4 *)(unaff_EBP - 700));
                  iVar8 = *(int *)(unaff_EBP - 0x13a4);
                  if (iVar8 == 0xccccccb) goto LAB_0051d544;
                  *(int *)(*(int *)(unaff_EBP - 0x13a8) + 4) = iVar14;
                  piVar22 = *(int **)(iVar14 + 4);
                  *(int *)(unaff_EBP - 0x13a4) = iVar8 + 1;
                  *piVar22 = iVar14;
                }
              }
              fVar42 = 1.0 - *(float *)(unaff_EBP - 0x12f0);
              iVar8 = *(int *)(unaff_EBP - 0x12cc);
              *(float *)(unaff_EBP - 0x12f0) = 1.0 - fVar42 * fVar42 * fVar42;
              dVar40 = (double)*(int *)(unaff_EBP - 0x12e4) * 0.02 + 55432.0;
              fVar38 = FUN_004d5d30(SUB84(dVar40,0),(int)((ulonglong)dVar40 >> 0x20),
                                    (double)iVar8 * 0.02 + 974.0);
              *(float *)(unaff_EBP - 0x12d0) = (float)fVar38;
              fVar42 = *(float *)(unaff_EBP - 0x12d0);
              fVar39 = *(float *)(unaff_EBP - 0x12f0);
              iVar8 = *(int *)(unaff_EBP - 0x12f8) + 1;
              fVar43 = *(float *)(unaff_EBP - 0x1304);
              *(int *)(unaff_EBP - 0x12ec) = iVar8;
              iVar14 = (int)((fVar42 + 1.0) * 2.0 + fVar39 * 5.0 + fVar43);
              *(int *)(unaff_EBP - 0x12d0) = iVar14;
              if (iVar8 < iVar14) {
                do {
                  puVar10 = FUN_00405fd0(unaff_ESI,*(uint *)(unaff_EBP - 0x12e4),
                                         *(uint *)(unaff_EBP - 0x12cc),iVar8,(int)unaff_EDI);
                  if ((puVar10[3] & 0x40) == 0) {
                    FUN_0041ff00(unaff_ESI,*(float *)(unaff_EBP - 0x12e4),
                                 *(uint *)(unaff_EBP - 0x12cc),*(int *)(unaff_EBP - 0x12ec),
                                 (undefined1 *)&DAT_005842c0,(int)unaff_EDI);
                  }
                  iVar8 = *(int *)(unaff_EBP - 0x12ec) + 1;
                  *(int *)(unaff_EBP - 0x12ec) = iVar8;
                } while (iVar8 < *(int *)(unaff_EBP - 0x12d0));
              }
            }
          }
          uVar9 = *(uint *)(unaff_EBP - 0x12e4);
          fVar42 = (float)(*(int *)(unaff_EBP - 0x12cc) + 1);
          iVar8 = *(int *)(unaff_EBP - 0x132c) + 0x100;
          *(float *)(unaff_EBP - 0x12cc) = fVar42;
        } while ((int)fVar42 < iVar8);
      }
      uVar9 = uVar9 + 1;
      *(uint *)(unaff_EBP - 0x12e4) = uVar9;
      if (*(int *)(unaff_EBP - 0x1370) <= (int)uVar9) break;
      fVar42 = *(float *)(unaff_EBP - 0x132c);
    } while( true );
  }
  iVar8 = *(int *)(unaff_EBP - 0x1344);
  iVar14 = *(int *)(unaff_EBP - 0x137c);
  if (*(char *)(iVar8 + 0x18 + iVar14) == '\x03') {
    FUN_00500300();
    iVar8 = *(int *)(unaff_EBP - 0x1344);
    iVar14 = *(int *)(unaff_EBP - 0x137c);
  }
  if (*(char *)(iVar8 + 0x18 + iVar14) == '\x05') {
    FUN_00500300();
  }
  piVar22 = *(int **)(unaff_EBP - 0x13a8);
  piVar21 = (int *)*piVar22;
  *(int **)(unaff_EBP - 0x12d0) = piVar21;
  if (piVar21 != piVar22) {
    do {
      *(int *)(unaff_EBP - 0x12dc) = piVar21[2];
      *(int *)(unaff_EBP - 0x12cc) = piVar21[3];
      *(int *)(unaff_EBP - 0x12f0) = piVar21[4];
      iVar8 = rand();
      *(int *)(unaff_EBP - 0x1338) = iVar8 % 3 + 2;
      iVar8 = rand();
      *(int *)(unaff_EBP - 0x1328) = iVar8 % 3 + 2;
      iVar14 = rand();
      iVar8 = *(int *)(unaff_EBP - 0x1338);
      *(int *)(unaff_EBP - 0x1368) = iVar14 % 3 + 2;
      iVar31 = *(int *)(unaff_EBP - 0x12dc);
      iVar14 = iVar31 - iVar8;
      iVar8 = iVar8 + iVar31;
      *(int *)(unaff_EBP - 0x1314) = iVar14;
      *(int *)(unaff_EBP - 0x1350) = iVar8;
      if (iVar14 <= iVar8) {
        iVar8 = *(int *)(unaff_EBP - 0x1328);
        iVar16 = *(int *)(unaff_EBP - 0x12cc);
        *(int *)(unaff_EBP - 0x1348) = *(int *)(unaff_EBP - 0x12cc) - iVar8;
        *(int *)(unaff_EBP - 0x12dc) = iVar8 + iVar16;
        iVar31 = iVar14 - iVar31;
        *(int *)(unaff_EBP - 0x12f4) = iVar31;
        do {
          iVar8 = *(int *)(unaff_EBP - 0x1348);
          *(int *)(unaff_EBP - 0x12d8) = iVar8;
          if (iVar8 <= *(int *)(unaff_EBP - 0x12dc)) {
            iVar31 = *(int *)(unaff_EBP - 0x12f0);
            iVar16 = *(int *)(unaff_EBP - 0x1368);
            *(int *)(unaff_EBP - 0x12f8) = iVar31;
            *(int *)(unaff_EBP - 0x12f8) = *(int *)(unaff_EBP - 0x12f8) + iVar16 * -2;
            unaff_EDI = *(float *)(unaff_EBP - 0x1308);
            iVar34 = *(int *)(unaff_EBP - 0x12cc);
            *(int *)(unaff_EBP - 0x1334) = iVar16 * 2 + iVar31;
            pvVar20 = *(void **)(unaff_EBP - 0x12e0);
            *(int *)(unaff_EBP - 0x1304) = iVar8 - iVar34;
            do {
              iVar31 = *(int *)(unaff_EBP - 0x1334);
              *(int *)(unaff_EBP - 0x12d4) = iVar31;
              if (*(int *)(unaff_EBP - 0x12f8) <= iVar31) {
                fVar38 = FUN_004d5d30(SUB84((double)iVar14 * 0.05,0),
                                      (int)((ulonglong)((double)iVar14 * 0.05) >> 0x20),
                                      (double)iVar8 * 0.05);
                *(float *)(unaff_EBP - 0x1320) = (float)fVar38;
                fVar42 = (float)*(int *)(unaff_EBP - 0x12f4) / (float)*(int *)(unaff_EBP - 0x1338);
                iVar8 = *(int *)(unaff_EBP - 0x1368);
                fVar44 = (float)*(int *)(unaff_EBP - 0x1304) / (float)*(int *)(unaff_EBP - 0x1328);
                iVar14 = *(int *)(unaff_EBP - 0x12d4);
                fVar39 = *(float *)(unaff_EBP - 0x1320) * 0.8;
                iVar31 = *(int *)(unaff_EBP - 0x12f8);
                *(float *)(unaff_EBP - 0x15a8) = fVar42;
                *(float *)(unaff_EBP - 0x15a4) = fVar44;
                fVar43 = (float)iVar8;
                fVar42 = fVar44 * fVar44 + fVar42 * fVar42;
                iVar8 = iVar14 - *(int *)(unaff_EBP - 0x12f0);
                *(float *)(unaff_EBP - 0x1360) = fVar39;
                *(float *)(unaff_EBP - 0x1320) = fVar43;
                *(float *)(unaff_EBP - 0x12e4) = fVar42;
                *(int *)(unaff_EBP - 0x12ec) = iVar8;
                do {
                  fVar44 = (float)iVar8 / fVar43 + fVar39;
                  if (fVar44 * fVar44 + fVar42 <= 1.0) {
                    puVar10 = FUN_00405fd0(pvVar20,*(uint *)(unaff_EBP - 0x1314),
                                           *(uint *)(unaff_EBP - 0x12d8),iVar14,(int)unaff_EDI);
                    if (((~((byte)puVar10[3] >> 7) & 1) != 0) && ((puVar10[3] & 0x40) == 0)) {
                      pfVar15 = FUN_0052d030(pvVar20,(float *)(unaff_EBP - 0x728),
                                             *(float *)(unaff_EBP - 0x1314),
                                             *(uint *)(unaff_EBP - 0x12d8),
                                             *(int *)(unaff_EBP - 0x12d4),(int)unaff_EDI);
                      iVar8 = 0;
                      do {
                        pfVar1 = pfVar15 + iVar8;
                        iVar8 = iVar8 + 1;
                        *(char *)((unaff_EBP - 0x1429) + iVar8) = (char)(int)*pfVar1;
                      } while (iVar8 < 3);
                      *(undefined2 *)(unaff_EBP - 0x1424) = *(undefined2 *)(unaff_EBP - 0x1428);
                      *(undefined1 *)(unaff_EBP - 0x1422) = *(undefined1 *)(unaff_EBP - 0x1426);
                      iVar8 = *(int *)(unaff_EBP - 0x12d4);
                      uVar9 = *(uint *)(unaff_EBP - 0x12d8);
                      *(undefined1 *)(unaff_EBP - 0x1421) = 6;
                      FUN_0041ff00(pvVar20,*(float *)(unaff_EBP - 0x1314),uVar9,iVar8,
                                   (undefined1 *)(unaff_EBP - 0x1424),(int)unaff_EDI);
                    }
                    fVar42 = *(float *)(unaff_EBP - 0x12e4);
                    fVar39 = *(float *)(unaff_EBP - 0x1360);
                    fVar43 = *(float *)(unaff_EBP - 0x1320);
                    iVar14 = *(int *)(unaff_EBP - 0x12d4);
                    iVar8 = *(int *)(unaff_EBP - 0x12ec);
                    iVar31 = *(int *)(unaff_EBP - 0x12f8);
                  }
                  iVar14 = iVar14 + -1;
                  iVar8 = iVar8 + -1;
                  *(int *)(unaff_EBP - 0x12d4) = iVar14;
                  *(int *)(unaff_EBP - 0x12ec) = iVar8;
                } while (iVar31 <= iVar14);
                iVar8 = *(int *)(unaff_EBP - 0x12d8);
                iVar14 = *(int *)(unaff_EBP - 0x1314);
              }
              *(int *)(unaff_EBP - 0x1304) = *(int *)(unaff_EBP - 0x1304) + 1;
              iVar8 = iVar8 + 1;
              *(int *)(unaff_EBP - 0x12d8) = iVar8;
            } while (iVar8 <= *(int *)(unaff_EBP - 0x12dc));
            iVar31 = *(int *)(unaff_EBP - 0x12f4);
          }
          iVar14 = iVar14 + 1;
          iVar31 = iVar31 + 1;
          *(int *)(unaff_EBP - 0x1314) = iVar14;
          *(int *)(unaff_EBP - 0x12f4) = iVar31;
        } while (iVar14 <= *(int *)(unaff_EBP - 0x1350));
        piVar21 = *(int **)(unaff_EBP - 0x12d0);
      }
      piVar21 = (int *)*piVar21;
      *(int **)(unaff_EBP - 0x12d0) = piVar21;
    } while (piVar21 != (int *)*(int *)(unaff_EBP - 0x13a8));
  }
  piVar22 = *(int **)(unaff_EBP - 0x13c4);
  piVar21 = (int *)*piVar22;
  *(int **)(unaff_EBP - 0x12e4) = piVar21;
  if (piVar21 != piVar22) {
    do {
      *(int *)(unaff_EBP - 0x1350) = piVar21[2];
      *(int *)(unaff_EBP - 0x1304) = piVar21[3];
      *(int *)(unaff_EBP - 0x1328) = piVar21[4];
      uVar9 = rand();
      uVar9 = uVar9 & 0x80000003;
      if ((int)uVar9 < 0) {
        uVar9 = (uVar9 - 1 | 0xfffffffc) + 1;
      }
      *(uint *)(unaff_EBP - 0x12dc) = uVar9 + 4;
      uVar9 = rand();
      uVar9 = uVar9 & 0x80000003;
      if ((int)uVar9 < 0) {
        uVar9 = (uVar9 - 1 | 0xfffffffc) + 1;
      }
      *(uint *)(unaff_EBP - 0x12f0) = uVar9 + 4;
      iVar14 = rand();
      iVar8 = *(int *)(unaff_EBP - 0x12dc);
      *(int *)(unaff_EBP - 0x12d0) = iVar14 % 6 + 4;
      iVar31 = *(int *)(unaff_EBP - 0x1350);
      iVar14 = iVar31 - iVar8;
      iVar8 = iVar8 + iVar31;
      *(int *)(unaff_EBP - 0x1314) = iVar14;
      *(int *)(unaff_EBP - 0x133c) = iVar8;
      if (iVar14 <= iVar8) {
        iVar8 = *(int *)(unaff_EBP - 0x12f0);
        iVar16 = *(int *)(unaff_EBP - 0x1304);
        *(int *)(unaff_EBP - 0x1350) = *(int *)(unaff_EBP - 0x1304) - iVar8;
        *(int *)(unaff_EBP - 0x12cc) = iVar8 + iVar16;
        iVar31 = iVar14 - iVar31;
        *(int *)(unaff_EBP - 0x12ec) = iVar31;
        do {
          iVar8 = *(int *)(unaff_EBP - 0x1350);
          *(int *)(unaff_EBP - 0x12d8) = iVar8;
          if (iVar8 <= *(int *)(unaff_EBP - 0x12cc)) {
            iVar31 = *(int *)(unaff_EBP - 0x1328);
            iVar16 = *(int *)(unaff_EBP - 0x12d0);
            *(int *)(unaff_EBP - 0x12f4) = iVar31;
            *(int *)(unaff_EBP - 0x12f4) = *(int *)(unaff_EBP - 0x12f4) + iVar16 * -2;
            unaff_EDI = *(float *)(unaff_EBP - 0x1308);
            iVar34 = *(int *)(unaff_EBP - 0x1304);
            *(int *)(unaff_EBP - 0x1334) = iVar16 * 2 + iVar31;
            pvVar20 = *(void **)(unaff_EBP - 0x12e0);
            *(int *)(unaff_EBP - 0x1360) = iVar8 - iVar34;
            do {
              iVar31 = *(int *)(unaff_EBP - 0x1334);
              *(int *)(unaff_EBP - 0x12f8) = iVar31;
              if (*(int *)(unaff_EBP - 0x12f4) <= iVar31) {
                fVar38 = FUN_004d5d30(SUB84((double)iVar14 * 0.05,0),
                                      (int)((ulonglong)((double)iVar14 * 0.05) >> 0x20),
                                      (double)iVar8 * 0.05);
                *(float *)(unaff_EBP - 0x1348) = (float)fVar38;
                fVar43 = (float)*(int *)(unaff_EBP - 0x12ec) / (float)*(int *)(unaff_EBP - 0x12dc);
                iVar8 = *(int *)(unaff_EBP - 0x12d0);
                fVar44 = (float)*(int *)(unaff_EBP - 0x1360) / (float)*(int *)(unaff_EBP - 0x12f0);
                iVar31 = *(int *)(unaff_EBP - 0x12f8);
                fVar39 = *(float *)(unaff_EBP - 0x1348) * 0.8;
                iVar14 = *(int *)(unaff_EBP - 0x12f4);
                *(float *)(unaff_EBP - 0x159c) = fVar43;
                *(float *)(unaff_EBP - 0x1598) = fVar44;
                fVar42 = (float)iVar8;
                fVar43 = fVar44 * fVar44 + fVar43 * fVar43;
                iVar8 = iVar31 - *(int *)(unaff_EBP - 0x1328);
                *(float *)(unaff_EBP - 0x1368) = fVar39;
                *(float *)(unaff_EBP - 0x12d4) = fVar42;
                *(float *)(unaff_EBP - 0x1338) = fVar43;
                *(int *)(unaff_EBP - 0x1320) = iVar8;
                do {
                  fVar44 = (float)iVar8 / fVar42 + fVar39;
                  if (fVar44 * fVar44 + fVar43 <= 1.0) {
                    puVar10 = FUN_00405fd0(pvVar20,*(uint *)(unaff_EBP - 0x1314),
                                           *(uint *)(unaff_EBP - 0x12d8),iVar31,(int)unaff_EDI);
                    if ((~((byte)puVar10[3] >> 7) & 1) != 0) {
                      pfVar15 = FUN_0052d030(pvVar20,(float *)(unaff_EBP - 0x740),
                                             *(float *)(unaff_EBP - 0x1314),
                                             *(uint *)(unaff_EBP - 0x12d8),
                                             *(int *)(unaff_EBP - 0x12f8),(int)unaff_EDI);
                      iVar8 = 0;
                      do {
                        pfVar1 = pfVar15 + iVar8;
                        iVar8 = iVar8 + 1;
                        *(char *)((unaff_EBP - 0x13e5) + iVar8) = (char)(int)*pfVar1;
                      } while (iVar8 < 3);
                      *(undefined2 *)(unaff_EBP - 0x142c) = *(undefined2 *)(unaff_EBP - 0x13e4);
                      *(undefined1 *)(unaff_EBP - 0x142a) = *(undefined1 *)(unaff_EBP - 0x13e2);
                      iVar8 = *(int *)(unaff_EBP - 0x12f8);
                      uVar9 = *(uint *)(unaff_EBP - 0x12d8);
                      *(undefined1 *)(unaff_EBP - 0x1429) = 0x26;
                      FUN_0041ff00(pvVar20,*(float *)(unaff_EBP - 0x1314),uVar9,iVar8,
                                   (undefined1 *)(unaff_EBP - 0x142c),(int)unaff_EDI);
                    }
                    iVar14 = *(int *)(unaff_EBP - 0x12f4);
                    iVar8 = *(int *)(unaff_EBP - 0x1320);
                    iVar31 = *(int *)(unaff_EBP - 0x12f8);
                    fVar42 = *(float *)(unaff_EBP - 0x12d4);
                    fVar39 = *(float *)(unaff_EBP - 0x1368);
                    fVar43 = *(float *)(unaff_EBP - 0x1338);
                  }
                  iVar31 = iVar31 + -1;
                  iVar8 = iVar8 + -1;
                  *(int *)(unaff_EBP - 0x12f8) = iVar31;
                  *(int *)(unaff_EBP - 0x1320) = iVar8;
                } while (iVar14 <= iVar31);
                iVar8 = *(int *)(unaff_EBP - 0x12d8);
                iVar14 = *(int *)(unaff_EBP - 0x1314);
              }
              *(int *)(unaff_EBP - 0x1360) = *(int *)(unaff_EBP - 0x1360) + 1;
              iVar8 = iVar8 + 1;
              *(int *)(unaff_EBP - 0x12d8) = iVar8;
            } while (iVar8 <= *(int *)(unaff_EBP - 0x12cc));
            iVar31 = *(int *)(unaff_EBP - 0x12ec);
          }
          iVar14 = iVar14 + 1;
          iVar31 = iVar31 + 1;
          *(int *)(unaff_EBP - 0x1314) = iVar14;
          *(int *)(unaff_EBP - 0x12ec) = iVar31;
        } while (iVar14 <= *(int *)(unaff_EBP - 0x133c));
        piVar21 = *(int **)(unaff_EBP - 0x12e4);
      }
      piVar21 = (int *)*piVar21;
      *(int **)(unaff_EBP - 0x12e4) = piVar21;
    } while (piVar21 != (int *)*(int *)(unaff_EBP - 0x13c4));
  }
  pvVar20 = *(void **)(unaff_EBP - 0x12e0);
  iVar8 = *(int *)(unaff_EBP - 0x135c);
  if ((*(int *)((int)pvVar20 + 0xa4) == 0) &&
     (iVar8 == (int)((int)*(float *)((int)pvVar20 + 0x8000f0) +
                    ((int)*(float *)((int)pvVar20 + 0x8000f0) >> 0x1f & 0xffU)) >> 8)) {
    uVar9 = (uint)*(float *)((int)pvVar20 + 0x8000f4);
    if ((*(int *)(unaff_EBP - 0x1364) == (int)(uVar9 + ((int)uVar9 >> 0x1f & 0xffU)) >> 8) &&
       (iVar8 = FUN_00406100(pvVar20,(int)*(float *)((int)pvVar20 + 0x8000f0),uVar9,(int)unaff_EDI),
       iVar8 != 0)) {
      *(int *)(unaff_EBP - 0x133c) = *(int *)(iVar8 + 0x1c) + *(int *)(iVar8 + 0x10);
      if ((int)(*(int *)((int)pvVar20 + 0x24) - *(int *)((int)pvVar20 + 0x20) & 0xfffffffcU) <
          0x212d) {
        iVar8 = 0;
      }
      else {
        iVar8 = *(int *)(*(int *)((int)pvVar20 + 0x20) + 0x212c);
      }
      *(int *)(unaff_EBP - 0x1304) = iVar8;
      *(undefined4 *)(unaff_EBP - 0x151c) = 0;
      *(undefined4 *)(unaff_EBP - 0x1518) = 0;
      *(undefined4 *)(unaff_EBP - 0x1514) = 0;
      *(undefined4 *)(unaff_EBP - 0x1510) = 0;
      iVar14 = 0;
      do {
        pfVar15 = (float *)((unaff_EBP - 0x151c) + iVar14);
        iVar14 = iVar14 + 4;
        *(int *)((unaff_EBP - 0x1668) + iVar14) = (int)*pfVar15;
      } while (iVar14 < 0x10);
      iVar14 = *(int *)(unaff_EBP - 0x1304);
      *(int *)(unaff_EBP - 0x2b0) =
           (int)*(float *)((int)pvVar20 + 0x8000f0) - *(int *)(iVar8 + 0x44) / 2;
      iVar8 = *(int *)(iVar14 + 0x48);
      fVar42 = *(float *)((int)pvVar20 + 0x8000f4);
      *(undefined4 *)(unaff_EBP - 0x2a8) = *(undefined4 *)(unaff_EBP - 0x133c);
      pvVar18 = *(void **)(unaff_EBP - 0x1304);
      *(int *)(unaff_EBP - 0x2ac) = (int)fVar42 - iVar8 / 2;
      FUN_00524540(pvVar20,pvVar18,(uint *)(unaff_EBP - 0x2b0),0,6,0,(int)unaff_EDI,'\x01',
                   (int *)(unaff_EBP - 0x1664),0);
    }
    iVar8 = *(int *)(unaff_EBP - 0x135c);
  }
  uVar9 = *(int *)(unaff_EBP - 0x1364) + iVar8 & 0x80000001;
  if ((int)uVar9 < 0) {
    uVar9 = (uVar9 - 1 | 0xfffffffe) + 1;
  }
  *(uint *)(unaff_EBP - 0x1360) = uVar9;
  if (uVar9 != 0) {
    *(undefined4 *)(unaff_EBP - 0x1338) = 0;
    uVar47 = FUN_0054a946();
    *(int *)(unaff_EBP - 0x12d0) = (int)uVar47;
    *(int *)(unaff_EBP - 0x12dc) = (int)(uVar47 >> 0x20);
    do {
      *(undefined8 *)(unaff_EBP - 0x14e0) = 0;
      iVar8 = rand();
      uVar12 = *(int *)(unaff_EBP - 0x132c) + 0x30 + iVar8 % 0xa0;
      uVar9 = *(uint *)(unaff_EBP - 0x12d0);
      iVar8 = *(int *)(unaff_EBP - 0x12dc);
      *(uint *)(unaff_EBP - 0x1328) = uVar12 * 0x10000 - *(uint *)(unaff_EBP - 0x12d0);
      *(uint *)(unaff_EBP - 0x12f0) =
           ((((int)uVar12 >> 0x1f) << 0x10 | uVar12 >> 0x10) - iVar8) -
           (uint)(uVar12 * 0x10000 < uVar9);
      iVar8 = rand();
      uVar9 = *(int *)(unaff_EBP - 0x1358) + 0x30 + iVar8 % 0xa0;
      iVar8 = uVar9 * 0x10000 - *(uint *)(unaff_EBP - 0x12d0);
      iVar14 = ((((int)uVar9 >> 0x1f) << 0x10 | uVar9 >> 0x10) - *(int *)(unaff_EBP - 0x12dc)) -
               (uint)(uVar9 * 0x10000 < *(uint *)(unaff_EBP - 0x12d0));
      *(int *)(unaff_EBP - 0x1334) = iVar8;
      *(int *)(unaff_EBP - 0x1c0) = iVar8;
      *(undefined4 *)(unaff_EBP - 0x1b8) = *(undefined4 *)(unaff_EBP - 0x1328);
      *(undefined4 *)(unaff_EBP - 0x1b4) = *(undefined4 *)(unaff_EBP - 0x12f0);
      uVar13 = *(undefined4 *)(unaff_EBP - 0x14e0);
      *(int *)(unaff_EBP - 0x1bc) = iVar14;
      *(undefined4 *)(unaff_EBP - 0x1b0) = uVar13;
      uVar13 = *(undefined4 *)(unaff_EBP - 0x14dc);
      *(int *)(unaff_EBP - 0x1350) = iVar14;
      puVar25 = *(uint **)(unaff_EBP - 0x1300);
      *(undefined4 *)(unaff_EBP - 0x1ac) = uVar13;
      uVar9 = puVar25[6];
      if ((uVar9 == 1) || (uVar9 == 5)) {
        fVar38 = FUN_0052c820(puVar25,(uint *)(unaff_EBP - 0x1c0),(uint *)(unaff_EBP - 0x1b8));
        *(float *)(unaff_EBP - 0x133c) = (float)fVar38;
        fVar42 = 1.0 - *(float *)(unaff_EBP - 0x133c);
        if ((fVar42 <= 0.0) || (fVar42 * fVar42 <= 0.0)) goto LAB_0051ccba;
      }
      else {
LAB_0051ccba:
        fVar42 = unaff_EDI;
        uVar48 = __alldiv(*(uint *)(unaff_EBP - 0x1328),*(uint *)(unaff_EBP - 0x12f0),0x10000,0);
        uVar9 = (uint)uVar48;
        uVar48 = __alldiv(*(uint *)(unaff_EBP - 0x1334),*(uint *)(unaff_EBP - 0x1350),0x10000,0);
        iVar8 = FUN_00406100(pvVar20,(uint)uVar48,uVar9,(int)fVar42);
        if (iVar8 != 0) {
          uVar9 = *(int *)(iVar8 + 0x1c) + *(int *)(iVar8 + 0x10);
          *(uint *)(unaff_EBP - 0x1b0) = uVar9 * 0x10000;
          *(uint *)(unaff_EBP - 0x1ac) = ((int)uVar9 >> 0x1f) << 0x10 | uVar9 >> 0x10;
        }
        cVar6 = FUN_004e0740(pvVar20,(int)unaff_EDI,(uint *)(unaff_EBP - 0x1c0));
        if (cVar6 != '\0') {
          puVar19 = *(undefined4 **)(unaff_EBP - 0x1378);
          iVar8 = FUN_004f3ba0(puVar19,(undefined4 *)puVar19[1],(undefined4 *)(unaff_EBP - 0x1c0));
          puVar19[1] = iVar8;
          piVar22 = *(int **)(iVar8 + 4);
          *(undefined4 *)(unaff_EBP - 0x1374) = 1;
          *piVar22 = iVar8;
          break;
        }
      }
      iVar8 = *(int *)(unaff_EBP - 0x1338) + 1;
      *(int *)(unaff_EBP - 0x1338) = iVar8;
    } while (iVar8 < 10);
  }
  cVar6 = *(char *)(*(int *)(unaff_EBP - 0x1344) + 0x18 + *(int *)(unaff_EBP - 0x137c));
  if (((cVar6 != '\x04') && (cVar6 != '\x01')) && (cVar6 != '\x03')) {
    iVar8 = rand();
    iVar8 = iVar8 % 10;
    fVar42 = *(float *)(unaff_EBP - 0x1310);
    *(int *)(unaff_EBP - 0x1320) = iVar8;
    if (((0.6 < fVar42) || (fVar42 < 0.3)) &&
       ((fVar39 = *(float *)(unaff_EBP - 0x12fc), 0.7 < fVar39 ||
        ((fVar39 < 0.4 && ((0.2 < fVar39 || (fVar42 < 0.8)))))))) {
      iVar8 = iVar8 + 10;
      *(int *)(unaff_EBP - 0x1320) = iVar8;
    }
    if (0 < iVar8) {
      *(int *)(unaff_EBP - 0x133c) = *(int *)(unaff_EBP - 0x135c) << 7;
      *(int *)(unaff_EBP - 0x1350) = *(int *)(unaff_EBP - 0x1364) << 7;
      do {
        uVar9 = rand();
        uVar9 = uVar9 & 0x80000007;
        if ((int)uVar9 < 0) {
          uVar9 = (uVar9 - 1 | 0xfffffff8) + 1;
        }
        *(uint *)(unaff_EBP - 0x12fc) = uVar9 + 3;
        uVar12 = rand();
        uVar12 = uVar12 & 0x80000007;
        if ((int)uVar12 < 0) {
          uVar12 = (uVar12 - 1 | 0xfffffff8) + 1;
        }
        *(uint *)(unaff_EBP - 0x12ec) = uVar12 + 3;
        uVar12 = rand();
        uVar12 = uVar12 & 0x80000007;
        if ((int)uVar12 < 0) {
          uVar12 = (uVar12 - 1 | 0xfffffff8) + 1;
        }
        *(uint *)(unaff_EBP - 0x12d0) = uVar12 + 3;
        iVar8 = *(int *)(unaff_EBP - 0x12ec);
        iVar14 = rand();
        *(int *)(unaff_EBP - 0x12f4) =
             iVar14 % (int)((0x40 - (uVar9 + 3)) * 4) +
             (*(int *)(unaff_EBP - 0x133c) + *(int *)(unaff_EBP - 0x12fc)) * 2;
        iVar16 = rand();
        iVar14 = *(int *)(unaff_EBP - 0x1350);
        iVar31 = *(int *)(unaff_EBP - 0x12ec);
        uVar12 = *(uint *)(unaff_EBP - 0x12f4);
        pvVar20 = *(void **)(unaff_EBP - 0x12e0);
        fVar42 = (float)(int)uVar12 - *(float *)((int)pvVar20 + 0x8000f0);
        *(float *)(unaff_EBP - 0x170c) = fVar42;
        uVar9 = iVar16 % ((0x40 - iVar8) * 4) + (iVar14 + iVar31) * 2;
        *(uint *)(unaff_EBP - 0x12f8) = uVar9;
        fVar39 = (float)(int)uVar9 - *(float *)((int)pvVar20 + 0x8000f4);
        if (400.0 <= fVar39 * fVar39 + fVar42 * fVar42) {
          piVar22 = (int *)**(int **)(unaff_EBP - 0x1378);
          if (piVar22 != *(int **)(unaff_EBP - 0x1378)) {
            *(uint *)(unaff_EBP - 0x1334) = ((int)uVar9 >> 0x1f) << 0x10 | uVar9 >> 0x10;
            uVar12 = *(uint *)(unaff_EBP - 0x12f4);
            *(uint *)(unaff_EBP - 0x12f0) = ((int)uVar12 >> 0x1f) << 0x10 | uVar12 >> 0x10;
            *(uint *)(unaff_EBP - 0x12dc) = uVar12 << 0x10;
            do {
              iVar8 = *(int *)(unaff_EBP - 0x1334);
              uVar12 = piVar22[4];
              iVar14 = piVar22[5];
              *(uint *)(unaff_EBP - 0x13bc) = uVar9 * 0x10000 - piVar22[4];
              uVar33 = *(uint *)(unaff_EBP - 0x12dc);
              *(uint *)(unaff_EBP - 0x13b8) = (iVar8 - iVar14) - (uint)(uVar9 * 0x10000 < uVar12);
              iVar8 = *(int *)(unaff_EBP - 0x12f0);
              *(float *)(unaff_EBP - 0x1348) = (float)*(longlong *)(unaff_EBP - 0x13bc);
              uVar32 = piVar22[2];
              uVar12 = piVar22[2];
              *(undefined4 *)(unaff_EBP - 0x1348) = *(undefined4 *)(unaff_EBP - 0x1348);
              iVar14 = piVar22[3];
              fVar42 = *(float *)(unaff_EBP - 0x1348);
              *(uint *)(unaff_EBP - 0x13b4) = uVar33 - uVar12;
              *(uint *)(unaff_EBP - 0x13b0) = (iVar8 - iVar14) - (uint)(uVar33 < uVar32);
              fVar42 = fVar42 * 1.5258789e-05;
              *(float *)(unaff_EBP - 0x1348) = (float)*(longlong *)(unaff_EBP - 0x13b4);
              *(undefined4 *)(unaff_EBP - 0x1348) = *(undefined4 *)(unaff_EBP - 0x1348);
              fVar39 = *(float *)(unaff_EBP - 0x1348) * 1.5258789e-05;
              *(float *)(unaff_EBP - 0x15dc) = fVar39;
              if (fVar42 * fVar42 + fVar39 * fVar39 < 1600.0) goto LAB_0051d429;
              piVar22 = (int *)*piVar22;
            } while (piVar22 != (int *)*(int *)(unaff_EBP - 0x1378));
            uVar12 = *(uint *)(unaff_EBP - 0x12f4);
            uVar9 = *(uint *)(unaff_EBP - 0x12f8);
          }
          fVar38 = FUN_004d19f0(pvVar20,uVar12,uVar9);
          *(float *)(unaff_EBP - 0x1334) = (float)fVar38;
          if (*(float *)(unaff_EBP - 0x1334) <= 0.25) {
            iVar14 = *(int *)(unaff_EBP - 0x1308);
            pvVar20 = *(void **)(unaff_EBP - 0x12e0);
            iVar16 = FUN_00406100(pvVar20,uVar12,*(uint *)(unaff_EBP - 0x12f8),iVar14);
            iVar31 = *(int *)(iVar16 + 0x1c);
            iVar8 = *(int *)(iVar16 + 0x10);
            *(int *)(unaff_EBP - 0x1348) = iVar16;
            iVar8 = iVar31 + iVar8;
            iVar31 = iVar31 + -1;
            *(int *)(unaff_EBP - 0x12d4) = iVar8;
            *(int *)(unaff_EBP - 0x1334) = iVar31;
            if (-1 < iVar31) {
              pvVar20 = *(void **)(unaff_EBP - 0x1348);
              do {
                puVar10 = FUN_004d23f0(pvVar20,iVar31);
                if (((puVar10[3] & 0x1f) != 0) && ((puVar10[3] & 0x1f) != 2)) {
                  iVar8 = *(int *)(unaff_EBP - 0x12d4);
                  break;
                }
                iVar8 = *(int *)(unaff_EBP - 0x12d4) + -1;
                iVar31 = iVar31 + -1;
                *(int *)(unaff_EBP - 0x12d4) = iVar8;
              } while (-1 < iVar31);
              iVar14 = *(int *)(unaff_EBP - 0x1308);
              pvVar20 = *(void **)(unaff_EBP - 0x12e0);
            }
            puVar10 = FUN_00405fd0(pvVar20,*(uint *)(unaff_EBP - 0x12f4),
                                   *(uint *)(unaff_EBP - 0x12f8),iVar8 + -1,iVar14);
            bVar7 = puVar10[3] & 0x1f;
            if ((((bVar7 != 0xb) && (bVar7 != 8)) && (bVar7 != 7)) &&
               (puVar10 = FUN_00405fd0(pvVar20,*(uint *)(unaff_EBP - 0x12f4),
                                       *(uint *)(unaff_EBP - 0x12f8),
                                       *(int *)(unaff_EBP - 0x12d4) + -1,iVar14),
               (puVar10[3] & 0x40) == 0)) {
              iVar14 = *(int *)(unaff_EBP - 0x12f4);
              iVar8 = iVar14 - *(int *)(unaff_EBP - 0x12fc);
              iVar31 = *(int *)(unaff_EBP - 0x12fc) + iVar14;
              *(int *)(unaff_EBP - 0x1314) = iVar8;
              *(int *)(unaff_EBP - 0x1368) = iVar31;
              if (iVar8 <= iVar31) {
                iVar31 = *(int *)(unaff_EBP - 0x12ec);
                iVar16 = *(int *)(unaff_EBP - 0x12f8);
                *(int *)(unaff_EBP - 0x1334) = *(int *)(unaff_EBP - 0x12f8) - iVar31;
                *(int *)(unaff_EBP - 0x1338) = iVar31 + iVar16;
                iVar14 = iVar8 - iVar14;
                *(int *)(unaff_EBP - 0x12e4) = iVar14;
                do {
                  iVar31 = *(int *)(unaff_EBP - 0x1334);
                  *(int *)(unaff_EBP - 0x12d8) = iVar31;
                  if (iVar31 <= *(int *)(unaff_EBP - 0x1338)) {
                    iVar14 = *(int *)(unaff_EBP - 0x12d4);
                    iVar16 = *(int *)(unaff_EBP - 0x12d0);
                    *(int *)(unaff_EBP - 0x12f4) = iVar14;
                    *(int *)(unaff_EBP - 0x12f4) = *(int *)(unaff_EBP - 0x12f4) + iVar16 * -2;
                    pvVar20 = *(void **)(unaff_EBP - 0x12e0);
                    iVar34 = *(int *)(unaff_EBP - 0x12f8);
                    *(int *)(unaff_EBP - 0x1348) = iVar16 * 2 + iVar14;
                    iVar14 = *(int *)(unaff_EBP - 0x1308);
                    *(int *)(unaff_EBP - 0x1304) = iVar31 - iVar34;
                    do {
                      iVar16 = *(int *)(unaff_EBP - 0x1348);
                      *(int *)(unaff_EBP - 0x12cc) = iVar16;
                      if (*(int *)(unaff_EBP - 0x12f4) <= iVar16) {
                        fVar38 = FUN_004d5d30(SUB84((double)iVar8 * 0.05,0),
                                              (int)((ulonglong)((double)iVar8 * 0.05) >> 0x20),
                                              (double)iVar31 * 0.05);
                        *(float *)(unaff_EBP - 0x12dc) = (float)fVar38;
                        fVar43 = (float)*(int *)(unaff_EBP - 0x12e4) /
                                 (float)*(int *)(unaff_EBP - 0x12fc);
                        iVar8 = *(int *)(unaff_EBP - 0x12d0);
                        fVar44 = (float)*(int *)(unaff_EBP - 0x1304) /
                                 (float)*(int *)(unaff_EBP - 0x12ec);
                        iVar16 = *(int *)(unaff_EBP - 0x12cc);
                        fVar39 = *(float *)(unaff_EBP - 0x12dc) * 0.8;
                        iVar31 = *(int *)(unaff_EBP - 0x12f4);
                        *(float *)(unaff_EBP - 0x1590) = fVar43;
                        *(float *)(unaff_EBP - 0x158c) = fVar44;
                        fVar42 = (float)iVar8;
                        fVar43 = fVar44 * fVar44 + fVar43 * fVar43;
                        iVar8 = iVar16 - *(int *)(unaff_EBP - 0x12d4);
                        *(float *)(unaff_EBP - 0x12f0) = fVar39;
                        *(float *)(unaff_EBP - 0x1328) = fVar42;
                        *(float *)(unaff_EBP - 0x12dc) = fVar43;
                        *(int *)(unaff_EBP - 0x1310) = iVar8;
                        do {
                          fVar44 = (float)iVar8 / fVar42 + fVar39;
                          if (fVar44 * fVar44 + fVar43 <= 1.0) {
                            puVar10 = FUN_00405fd0(pvVar20,*(uint *)(unaff_EBP - 0x1314),
                                                   *(uint *)(unaff_EBP - 0x12d8),iVar16,iVar14);
                            if ((puVar10[3] & 0x40) == 0) {
                              pfVar15 = FUN_0052d030(pvVar20,(float *)(unaff_EBP - 0x758),
                                                     *(float *)(unaff_EBP - 0x1314),
                                                     *(uint *)(unaff_EBP - 0x12d8),
                                                     *(int *)(unaff_EBP - 0x12cc),iVar14);
                              iVar8 = 0;
                              do {
                                pfVar1 = pfVar15 + iVar8;
                                iVar8 = iVar8 + 1;
                                *(char *)((unaff_EBP - 0x1319) + iVar8) = (char)(int)*pfVar1;
                              } while (iVar8 < 3);
                              *(undefined2 *)(unaff_EBP - 0x13f0) =
                                   *(undefined2 *)(unaff_EBP - 0x1318);
                              *(undefined1 *)(unaff_EBP - 0x13ee) =
                                   *(undefined1 *)(unaff_EBP - 0x1316);
                              iVar8 = *(int *)(unaff_EBP - 0x12cc);
                              uVar9 = *(uint *)(unaff_EBP - 0x12d8);
                              *(undefined1 *)(unaff_EBP - 0x13ed) = 0x26;
                              FUN_0041ff00(pvVar20,*(float *)(unaff_EBP - 0x1314),uVar9,iVar8,
                                           (undefined1 *)(unaff_EBP - 0x13f0),iVar14);
                            }
                            iVar31 = *(int *)(unaff_EBP - 0x12f4);
                            iVar8 = *(int *)(unaff_EBP - 0x1310);
                            iVar16 = *(int *)(unaff_EBP - 0x12cc);
                            fVar42 = *(float *)(unaff_EBP - 0x1328);
                            fVar39 = *(float *)(unaff_EBP - 0x12f0);
                            fVar43 = *(float *)(unaff_EBP - 0x12dc);
                          }
                          iVar16 = iVar16 + -1;
                          iVar8 = iVar8 + -1;
                          *(int *)(unaff_EBP - 0x12cc) = iVar16;
                          *(int *)(unaff_EBP - 0x1310) = iVar8;
                        } while (iVar31 <= iVar16);
                        iVar31 = *(int *)(unaff_EBP - 0x12d8);
                        iVar8 = *(int *)(unaff_EBP - 0x1314);
                      }
                      *(int *)(unaff_EBP - 0x1304) = *(int *)(unaff_EBP - 0x1304) + 1;
                      iVar31 = iVar31 + 1;
                      *(int *)(unaff_EBP - 0x12d8) = iVar31;
                    } while (iVar31 <= *(int *)(unaff_EBP - 0x1338));
                    iVar14 = *(int *)(unaff_EBP - 0x12e4);
                  }
                  iVar8 = iVar8 + 1;
                  iVar14 = iVar14 + 1;
                  *(int *)(unaff_EBP - 0x1314) = iVar8;
                  *(int *)(unaff_EBP - 0x12e4) = iVar14;
                } while (iVar8 <= *(int *)(unaff_EBP - 0x1368));
              }
            }
            pvVar20 = *(void **)(unaff_EBP - 0x12e0);
          }
        }
LAB_0051d429:
        piVar22 = (int *)(unaff_EBP - 0x1320);
        *piVar22 = *piVar22 + -1;
      } while (*piVar22 != 0);
    }
  }
  iVar8 = *(int *)(*(int *)(unaff_EBP - 0x1300) + 0x18);
  if ((iVar8 == 1) || (iVar8 == 5)) {
    iVar8 = *(int *)(unaff_EBP - 0x1308);
    FUN_004e28e0();
  }
  else {
    iVar8 = *(int *)(unaff_EBP - 0x1308);
  }
  if (*(char *)(*(int *)(unaff_EBP - 0x1344) + 0x18 + *(int *)(unaff_EBP - 0x137c)) == '\x04') {
    uVar9 = *(uint *)(unaff_EBP - 5000);
    uVar12 = *(uint *)(unaff_EBP - 0x138c);
    *(uint *)(unaff_EBP - 0x234) = uVar9;
    *(uint *)(unaff_EBP - 0x238) = uVar12;
    iVar14 = FUN_00406100(pvVar20,uVar12,uVar9,iVar8);
    uVar12 = *(int *)(iVar14 + 0x10) + *(int *)(iVar14 + 0x1c);
    uVar9 = *(uint *)(unaff_EBP - 0x138c);
    uVar33 = ((int)uVar9 >> 0x1f) << 0x10 | uVar9 >> 0x10;
    *(uint *)(unaff_EBP - 800) = uVar9 << 0x10;
    *(uint *)(unaff_EBP - 0x1304) = uVar9 << 0x10;
    uVar9 = *(uint *)(unaff_EBP - 5000);
    *(uint *)(unaff_EBP - 0x31c) = uVar33;
    *(uint *)(unaff_EBP - 0x1328) = uVar33;
    uVar33 = ((int)uVar9 >> 0x1f) << 0x10 | uVar9 >> 0x10;
    *(uint *)(unaff_EBP - 0x318) = uVar9 << 0x10;
    *(uint *)(unaff_EBP - 0x1320) = uVar9 << 0x10;
    *(uint *)(unaff_EBP - 0x314) = uVar33;
    *(uint *)(unaff_EBP - 0x1338) = uVar33;
    *(uint *)(unaff_EBP - 0x230) = uVar12;
    uVar9 = ((int)uVar12 >> 0x1f) << 0x10 | uVar12 >> 0x10;
    *(uint *)(unaff_EBP - 0x310) = uVar12 * 0x10000;
    *(uint *)(unaff_EBP - 0x1344) = uVar12 * 0x10000;
    puVar19 = *(undefined4 **)(unaff_EBP - 0x1378);
    *(uint *)(unaff_EBP - 0x30c) = uVar9;
    puVar4 = (undefined4 *)puVar19[1];
    *(uint *)(unaff_EBP - 0x12ec) = uVar9;
    iVar14 = FUN_004f3ba0(puVar19,puVar4,(undefined4 *)(unaff_EBP - 800));
    if (*(int *)(unaff_EBP - 0x1374) == 0x7fffffe) {
LAB_0051d544:
                    /* WARNING: Subroutine does not return */
      std::_Xlength_error("list<T> too long");
    }
    iVar31 = *(int *)(unaff_EBP - 0x1378);
    *(int *)(unaff_EBP - 0x1374) = *(int *)(unaff_EBP - 0x1374) + 1;
    *(int *)(iVar31 + 4) = iVar14;
    **(int **)(iVar14 + 4) = iVar14;
    iVar14 = rand();
    iVar14 = iVar14 % 3 + 6;
    *(int *)(unaff_EBP - 0x12f0) = iVar14;
    if (0 < iVar14) {
      dVar40 = (double)iVar14;
      iVar14 = 0;
      *(double *)(unaff_EBP - 0x13bc) = dVar40;
      *(undefined4 *)(unaff_EBP - 0x12dc) = 0;
      do {
        fVar42 = (float)(((double)iVar14 * 3.141592653589793) / dVar40);
        *(float *)(unaff_EBP - 0x133c) = fVar42;
        dVar40 = (double)fVar42;
        libm_sse2_sin_precise();
        *(float *)(unaff_EBP - 0x1350) = (float)dVar40;
        dVar40 = (double)*(float *)(unaff_EBP - 0x133c);
        libm_sse2_cos_precise();
        uVar13 = *(undefined4 *)(unaff_EBP - 0x230);
        *(undefined4 *)(unaff_EBP - 0x133c) = uVar13;
        *(undefined4 *)(unaff_EBP - 0x30) = uVar13;
        fVar42 = *(float *)(unaff_EBP - 0x1350);
        *(int *)(unaff_EBP - 0x4a8) = (int)((float)dVar40 * 25.0);
        iVar14 = (int)(fVar42 * 25.0);
        uVar13 = *(undefined4 *)(unaff_EBP - 0x234);
        *(undefined4 *)(unaff_EBP - 0x38) = *(undefined4 *)(unaff_EBP - 0x238);
        *(undefined4 *)(unaff_EBP - 0x34) = uVar13;
        uVar12 = *(int *)(unaff_EBP - 0x38) + (int)((float)dVar40 * 25.0);
        uVar9 = *(int *)(unaff_EBP - 0x34) + iVar14;
        *(uint *)(unaff_EBP - 0x38) = uVar12;
        *(int *)(unaff_EBP - 0x4a4) = iVar14;
        *(uint *)(unaff_EBP - 0x34) = uVar9;
        iVar14 = FUN_00406100(pvVar20,uVar12,uVar9,iVar8);
        if (iVar14 == 0) {
          iVar14 = *(int *)(unaff_EBP - 0x133c);
        }
        else {
          iVar14 = *(int *)(iVar14 + 0x1c) + *(int *)(iVar14 + 0x10);
        }
        *(int *)(unaff_EBP - 0x30) = iVar14 + 4;
        uVar9 = rand();
        uVar9 = uVar9 & 0x80000003;
        if ((int)uVar9 < 0) {
          uVar9 = (uVar9 - 1 | 0xfffffffc) + 1;
        }
        *(uint *)(unaff_EBP - 0x12d0) = uVar9 + 3;
        uVar9 = rand();
        uVar9 = uVar9 & 0x80000003;
        if ((int)uVar9 < 0) {
          uVar9 = (uVar9 - 1 | 0xfffffffc) + 1;
        }
        *(int *)(unaff_EBP - 0x1310) = *(int *)(unaff_EBP - 0x12d0) * 2;
        *(int *)(unaff_EBP - 0x12f8) = *(int *)(unaff_EBP - 0x38) - *(int *)(unaff_EBP - 0x1310);
        iVar14 = *(int *)(unaff_EBP - 0x1310);
        iVar31 = *(int *)(unaff_EBP - 0x38);
        iVar16 = *(int *)(unaff_EBP - 0x12f8);
        *(uint *)(unaff_EBP - 0x12fc) = uVar9 + 3;
        if (iVar16 <= iVar14 + iVar31) {
          do {
            iVar14 = *(int *)(unaff_EBP - 0x12fc);
            iVar31 = *(int *)(unaff_EBP - 0x34);
            iVar8 = *(int *)(unaff_EBP - 0x1308);
            iVar34 = iVar31 + iVar14 * -2;
            pvVar20 = *(void **)(unaff_EBP - 0x12e0);
            *(int *)(unaff_EBP - 0x12d4) = iVar34;
            if (iVar34 <= iVar31 + iVar14 * 2) {
              do {
                iVar31 = *(int *)(unaff_EBP - 0x30);
                iVar14 = iVar31 + 0x14;
                *(int *)(unaff_EBP - 0x12f4) = iVar14;
                if (iVar31 + -0x14 <= iVar14) {
                  dVar40 = (double)iVar34 * 0.05;
                  fVar38 = FUN_004d5d30(SUB84(dVar40,0),(int)((ulonglong)dVar40 >> 0x20),dVar40);
                  *(float *)(unaff_EBP - 0x133c) = (float)fVar38;
                  fVar42 = *(float *)(unaff_EBP - 0x133c) * 0.3;
                  iVar14 = *(int *)(unaff_EBP - 0x12f4);
                  fVar39 = (float)*(int *)(unaff_EBP - 0x12fc);
                  dVar40 = (double)*(int *)(unaff_EBP - 0x12f8) * 0.05;
                  *(float *)(unaff_EBP - 0x1348) = fVar42;
                  *(float *)(unaff_EBP - 0x1368) = fVar39;
                  *(double *)(unaff_EBP - 0x13b4) = dVar40;
                  do {
                    iVar31 = *(int *)(unaff_EBP - 0x12d4);
                    iVar16 = *(int *)(unaff_EBP - 0x34);
                    *(float *)(unaff_EBP - 0x1334) =
                         (float)(iVar14 - *(int *)(unaff_EBP - 0x30)) / 10.0;
                    *(float *)(unaff_EBP - 0x1350) = (float)(iVar31 - iVar16) / fVar39 + fVar42;
                    fVar38 = FUN_004d5d30(SUB84(dVar40,0),(int)((ulonglong)dVar40 >> 0x20),
                                          (double)iVar14 * 0.05);
                    *(float *)(unaff_EBP - 0x133c) = (float)fVar38;
                    uVar9 = *(uint *)(unaff_EBP - 0x12f8);
                    fVar39 = *(float *)(unaff_EBP - 0x133c) * 0.3 +
                             (float)(int)(uVar9 - *(int *)(unaff_EBP - 0x38)) /
                             (float)*(int *)(unaff_EBP - 0x12d0);
                    fVar42 = *(float *)(unaff_EBP - 0x1350);
                    *(float *)(unaff_EBP - 6000) = fVar39;
                    if ((fVar39 * fVar39 + fVar42 * fVar42 +
                         *(float *)(unaff_EBP - 0x1334) * *(float *)(unaff_EBP - 0x1334) <= 1.0) &&
                       (puVar10 = FUN_00405fd0(pvVar20,uVar9,*(uint *)(unaff_EBP - 0x12d4),
                                               *(int *)(unaff_EBP - 0x12f4),iVar8),
                       (puVar10[3] & 0x40) == 0)) {
                      pfVar15 = FUN_0052d030(pvVar20,(float *)(unaff_EBP - 0x770),
                                             *(float *)(unaff_EBP - 0x12f8),
                                             *(uint *)(unaff_EBP - 0x12d4),
                                             *(int *)(unaff_EBP - 0x12f4),iVar8);
                      iVar14 = 0;
                      do {
                        pfVar1 = pfVar15 + iVar14;
                        iVar14 = iVar14 + 1;
                        *(char *)((unaff_EBP - 0x12c9) + iVar14) = (char)(int)*pfVar1;
                      } while (iVar14 < 3);
                      *(undefined2 *)(unaff_EBP - 0x13f8) = *(undefined2 *)(unaff_EBP - 0x12c8);
                      *(undefined1 *)(unaff_EBP - 0x13f6) = *(undefined1 *)(unaff_EBP - 0x12c6);
                      iVar14 = *(int *)(unaff_EBP - 0x12f4);
                      uVar9 = *(uint *)(unaff_EBP - 0x12d4);
                      *(undefined1 *)(unaff_EBP - 0x13f5) = 6;
                      FUN_0041ff00(pvVar20,*(float *)(unaff_EBP - 0x12f8),uVar9,iVar14,
                                   (undefined1 *)(unaff_EBP - 0x13f8),iVar8);
                    }
                    iVar31 = *(int *)(unaff_EBP - 0x30);
                    fVar42 = *(float *)(unaff_EBP - 0x1348);
                    dVar40 = *(double *)(unaff_EBP - 0x13b4);
                    fVar39 = *(float *)(unaff_EBP - 0x1368);
                    iVar14 = *(int *)(unaff_EBP - 0x12f4) + -1;
                    *(int *)(unaff_EBP - 0x12f4) = iVar14;
                  } while (iVar31 + -0x14 <= iVar14);
                  iVar34 = *(int *)(unaff_EBP - 0x12d4);
                }
                iVar14 = *(int *)(unaff_EBP - 0x12fc);
                iVar31 = *(int *)(unaff_EBP - 0x34);
                iVar8 = *(int *)(unaff_EBP - 0x1308);
                iVar34 = iVar34 + 1;
                *(int *)(unaff_EBP - 0x12d4) = iVar34;
              } while (iVar34 <= iVar31 + iVar14 * 2);
              iVar16 = *(int *)(unaff_EBP - 0x12f8);
            }
            iVar14 = *(int *)(unaff_EBP - 0x38);
            iVar31 = *(int *)(unaff_EBP - 0x1310);
            iVar16 = iVar16 + 1;
            *(int *)(unaff_EBP - 0x12f8) = iVar16;
          } while (iVar16 <= iVar14 + iVar31);
        }
        dVar40 = *(double *)(unaff_EBP - 0x13bc);
        iVar14 = *(int *)(unaff_EBP - 0x12dc) + 2;
        piVar22 = (int *)(unaff_EBP - 0x12f0);
        *piVar22 = *piVar22 + -1;
        iVar31 = *piVar22;
        *(int *)(unaff_EBP - 0x12dc) = iVar14;
      } while (iVar31 != 0);
    }
    FUN_004c84b0(unaff_EBP - 0x6f8);
    *(undefined1 *)(unaff_EBP - 4) = 4;
    *(undefined8 *)(unaff_EBP - 0x16b4) = 0;
    uVar47 = FUN_0054a946();
    iVar8 = (int)(uVar47 >> 0x20);
    uVar35 = (uint)uVar47;
    uVar9 = *(uint *)(unaff_EBP - 0x1304);
    uVar12 = *(uint *)(unaff_EBP - 0x1320);
    *(undefined4 *)(unaff_EBP - 0x3b0) = *(undefined4 *)(unaff_EBP - 0x1328);
    *(undefined4 *)(unaff_EBP - 0x3a8) = *(undefined4 *)(unaff_EBP - 0x1338);
    *(undefined4 *)(unaff_EBP - 0x3a4) = *(undefined4 *)(unaff_EBP - 0x1344);
    *(undefined4 *)(unaff_EBP - 0x3a0) = *(undefined4 *)(unaff_EBP - 0x12ec);
    *(uint *)(unaff_EBP - 0x3b4) = uVar9;
    uVar32 = uVar35 + uVar9;
    iVar14 = iVar8 + *(int *)(unaff_EBP - 0x1328) + (uint)CARRY4(uVar35,uVar9);
    *(uint *)(unaff_EBP - 0x3ac) = uVar12;
    *(uint *)(unaff_EBP - 0x1534) = uVar35;
    *(uint *)(unaff_EBP - 0x1544) = uVar35;
    *(uint *)(unaff_EBP - 0x444) = uVar35;
    *(uint *)(unaff_EBP - 0x43c) = uVar35;
    uVar33 = uVar35 + uVar12;
    uVar13 = *(undefined4 *)(unaff_EBP - 0x1344);
    *(int *)(unaff_EBP - 0x12d0) = iVar14;
    *(int *)(unaff_EBP - 0x3d0) = iVar14;
    *(undefined4 *)(unaff_EBP - 0x3c4) = uVar13;
    uVar13 = *(undefined4 *)(unaff_EBP - 0x12ec);
    *(int *)(unaff_EBP - 0x6ec) = iVar14;
    uVar50 = *(undefined4 *)(unaff_EBP - 0x1344);
    *(int *)(unaff_EBP - 0x1530) = iVar8;
    *(int *)(unaff_EBP - 0x1540) = iVar8;
    *(int *)(unaff_EBP - 0x440) = iVar8;
    *(int *)(unaff_EBP - 0x438) = iVar8;
    uVar9 = iVar8 + *(int *)(unaff_EBP - 0x1338) + (uint)CARRY4(uVar35,uVar12);
    *(undefined4 *)(unaff_EBP - 0x3c0) = uVar13;
    *(undefined4 *)(unaff_EBP - 0x6e0) = uVar50;
    pvVar20 = *(void **)(unaff_EBP - 0x12e0);
    *(undefined4 *)(unaff_EBP - 0x6dc) = uVar13;
    iVar8 = *(int *)(unaff_EBP - 0x1308);
    *(undefined8 *)(unaff_EBP - 0x434) = 0;
    *(uint *)(unaff_EBP - 0x3d4) = uVar32;
    *(uint *)(unaff_EBP - 0x3cc) = uVar33;
    *(uint *)(unaff_EBP - 0x3c8) = uVar9;
    *(uint *)(unaff_EBP - 0x6f0) = uVar32;
    *(uint *)(unaff_EBP - 0x6e8) = uVar33;
    *(uint *)(unaff_EBP - 0x6e4) = uVar9;
    while( true ) {
      iVar14 = FUN_00406050(pvVar20,uVar32,*(uint *)(unaff_EBP - 0x12d0),uVar33,uVar9,
                            *(uint *)(unaff_EBP - 0x1344),*(uint *)(unaff_EBP - 0x12ec),iVar8);
      if (((*(byte *)(iVar14 + 3) & 0x1f) != 0) && ((*(byte *)(iVar14 + 3) & 0x1f) != 2)) break;
      uVar12 = *(uint *)(unaff_EBP - 0x6e0);
      uVar13 = *(undefined4 *)(unaff_EBP - 0x6ec);
      uVar9 = *(uint *)(unaff_EBP - 0x6e4);
      iVar14 = uVar12 - 0x10000;
      *(int *)(unaff_EBP - 0x1344) = iVar14;
      *(int *)(unaff_EBP - 0x6e0) = iVar14;
      iVar14 = *(int *)(unaff_EBP - 0x6dc) + -1 + (uint)(0xffff < uVar12);
      *(int *)(unaff_EBP - 0x12ec) = iVar14;
      *(int *)(unaff_EBP - 0x6dc) = iVar14;
      uVar33 = *(uint *)(unaff_EBP - 0x6e8);
      *(undefined4 *)(unaff_EBP - 0x12d0) = uVar13;
      uVar32 = *(uint *)(unaff_EBP - 0x6f0);
    }
    uVar9 = *(uint *)(unaff_EBP - 0x6dc);
    uVar12 = *(uint *)(unaff_EBP - 0x6e0);
    while( true ) {
      iVar14 = FUN_00406050(pvVar20,*(uint *)(unaff_EBP - 0x6f0),*(uint *)(unaff_EBP - 0x6ec),
                            *(uint *)(unaff_EBP - 0x6e8),*(uint *)(unaff_EBP - 0x6e4),uVar12,uVar9,
                            iVar8);
      if (((*(byte *)(iVar14 + 3) & 0x1f) == 0) || ((*(byte *)(iVar14 + 3) & 0x1f) == 2)) break;
      uVar12 = *(uint *)(unaff_EBP - 0x6e0) + 0x10000;
      uVar9 = *(int *)(unaff_EBP - 0x6dc) + (uint)(0xfffeffff < *(uint *)(unaff_EBP - 0x6e0));
      *(uint *)(unaff_EBP - 0x6e0) = uVar12;
      *(uint *)(unaff_EBP - 0x6dc) = uVar9;
    }
    *(undefined4 *)(unaff_EBP - 0x6f8) = 0x2d;
    uVar9 = rand();
    uVar9 = uVar9 & 0x80000003;
    if ((int)uVar9 < 0) {
      uVar9 = (uVar9 - 1 | 0xfffffffc) + 1;
    }
    *(uint *)(unaff_EBP - 0x6d8) = uVar9;
    *(undefined4 *)(unaff_EBP - 0x6d4) = 0x40800000;
    *(undefined4 *)(unaff_EBP - 0x6d0) = 0x40800000;
    *(undefined4 *)(unaff_EBP - 0x6cc) = 0x40a00000;
    FUN_004d6670((void *)(iVar8 + 0xc),(void **)(unaff_EBP - 0x6f8));
    iVar14 = *(int *)(unaff_EBP - 0x6b0);
    *(undefined1 *)(unaff_EBP - 4) = 3;
    if (iVar14 != 0) {
      std::_Container_base0::_Orphan_all((_Container_base0 *)(unaff_EBP - 0x6b0));
      FUN_00406310(*(undefined4 **)(unaff_EBP - 0x6b0),*(undefined4 **)(unaff_EBP - 0x6ac));
      operator_delete(*(void **)(unaff_EBP - 0x6b0));
      *(undefined4 *)(unaff_EBP - 0x6b0) = 0;
      *(undefined4 *)(unaff_EBP - 0x6ac) = 0;
      *(undefined4 *)(unaff_EBP - 0x6a8) = 0;
    }
  }
  uVar13 = *(undefined4 *)(unaff_EBP - 0x1358);
  uVar9 = *(int *)(unaff_EBP - 0x132c) + 8;
  *(uint *)(unaff_EBP - 0x1328) = uVar9;
  *(undefined4 *)(unaff_EBP - 0x12d8) = uVar13;
  *(undefined4 *)(unaff_EBP - 0x12f0) = 0xe;
  *(undefined4 *)(unaff_EBP - 0x1368) = 5;
  do {
    *(uint *)(unaff_EBP - 0x1314) = uVar9;
    *(undefined4 *)(unaff_EBP - 0x12dc) = 0xe;
    do {
      puVar25 = *(uint **)(unaff_EBP - 0x1300);
      uVar12 = puVar25[6];
      *(undefined4 *)(unaff_EBP - 0x1344) = 0;
      if (uVar12 == 3) {
        *(uint *)(unaff_EBP - 0x14d8) = uVar9 << 0x10;
        iVar14 = *(int *)(unaff_EBP - 0x12d8);
        *(uint *)(unaff_EBP - 0x14d4) = ((int)uVar9 >> 0x1f) << 0x10 | uVar9 >> 0x10;
        uVar9 = iVar14 + 8;
        *(uint *)(unaff_EBP - 0x1484) = uVar9 * 0x10000;
        *(uint *)(unaff_EBP - 0x1480) = ((int)uVar9 >> 0x1f) << 0x10 | uVar9 >> 0x10;
        fVar38 = FUN_0052c820(puVar25,(uint *)(unaff_EBP - 0x1484),(uint *)(unaff_EBP - 0x14d8));
        uVar9 = *(uint *)(unaff_EBP - 0x1314);
        *(float *)(unaff_EBP - 0x133c) = (float)fVar38;
        fVar42 = 1.0 - *(float *)(unaff_EBP - 0x133c);
        if (0.0 < fVar42) {
          *(float *)(unaff_EBP - 0x1344) = fVar42 * fVar42;
        }
        else {
          *(undefined4 *)(unaff_EBP - 0x1344) = 0;
        }
      }
      iVar14 = FUN_00406100(pvVar20,*(int *)(unaff_EBP - 0x12d8) + 8,uVar9,iVar8);
      if (iVar14 == 0) {
        fVar38 = (float10)FUN_004f8570(pvVar20,(float)(*(int *)(unaff_EBP - 0x12d8) + 8),
                                       *(uint *)(unaff_EBP - 0x1314));
        *(float *)(unaff_EBP - 0x133c) = (float)fVar38;
        uVar13 = *(undefined4 *)(unaff_EBP - 0x133c);
      }
      else {
        uVar13 = *(undefined4 *)(iVar14 + 4);
      }
      *(undefined4 *)(unaff_EBP - 0x12f8) = uVar13;
      iVar14 = rand();
      *(int *)(unaff_EBP - 0x12f4) =
           (int)((float)(iVar14 % 5) + *(float *)(unaff_EBP - 0x12f8) * 2.0 + 6.0 +
                *(float *)(unaff_EBP - 0x1344) * 4.0);
      iVar31 = rand();
      fVar42 = *(float *)(unaff_EBP - 0x1344);
      iVar14 = *(int *)(unaff_EBP - 0x12f4);
      iVar16 = *(int *)(unaff_EBP - 0x1314) + -8 + iVar14;
      fVar39 = *(float *)(unaff_EBP - 0x12f8);
      *(int *)(unaff_EBP - 0x12e4) = iVar16;
      *(int *)(unaff_EBP - 0x12ec) =
           (int)((((float)iVar31 * 8.0) / 32767.0 + fVar42 * 6.0 + 8.0) * (fVar39 * 0.5 + 1.0));
      iVar31 = *(int *)(unaff_EBP - 0x12d8) + iVar14;
      fVar42 = (float)iVar31 - *(float *)((int)pvVar20 + 0x8000f0);
      fVar39 = (float)iVar16 - *(float *)((int)pvVar20 + 0x8000f4);
      *(int *)(unaff_EBP - 0x12cc) = iVar31;
      *(float *)(unaff_EBP - 0x15ec) = fVar42;
      if (400.0 <= fVar39 * fVar39 + fVar42 * fVar42) {
        iVar16 = *(int *)(unaff_EBP - 0x1358) + 0x100 + -(iVar14 / 2);
        iVar31 = *(int *)(unaff_EBP - 0x12cc);
        if (iVar16 <= *(int *)(unaff_EBP - 0x12cc)) {
          iVar31 = iVar16;
        }
        iVar16 = -(iVar14 / 2) + *(int *)(unaff_EBP - 0x132c) + 0x100;
        iVar14 = *(int *)(unaff_EBP - 0x12e4);
        if (iVar16 <= *(int *)(unaff_EBP - 0x12e4)) {
          iVar14 = iVar16;
        }
        piVar22 = *(int **)(unaff_EBP - 0x1378);
        *(int *)(unaff_EBP - 0x12e4) = iVar14;
        piVar21 = (int *)*piVar22;
        *(int *)(unaff_EBP - 0x12cc) = iVar31;
        if (piVar21 != piVar22) {
          uVar9 = *(uint *)(unaff_EBP - 0x12e4);
          *(uint *)(unaff_EBP - 0x133c) = uVar9 << 0x10;
          uVar12 = *(uint *)(unaff_EBP - 0x12cc);
          *(uint *)(unaff_EBP - 0x1350) = ((int)uVar9 >> 0x1f) << 0x10 | uVar9 >> 0x10;
          *(uint *)(unaff_EBP - 0x12d0) = ((int)uVar12 >> 0x1f) << 0x10 | uVar12 >> 0x10;
          *(uint *)(unaff_EBP - 0x1348) = uVar12 << 0x10;
          do {
            uVar9 = *(uint *)(unaff_EBP - 0x133c);
            uVar12 = piVar21[4];
            iVar14 = *(int *)(unaff_EBP - 0x1350);
            iVar31 = piVar21[5];
            *(uint *)(unaff_EBP - 0x13b4) = uVar9 - piVar21[4];
            uVar33 = *(uint *)(unaff_EBP - 0x1348);
            *(uint *)(unaff_EBP - 0x13b0) = (iVar14 - iVar31) - (uint)(uVar9 < uVar12);
            iVar14 = *(int *)(unaff_EBP - 0x12d0);
            *(float *)(unaff_EBP - 0x1334) = (float)*(longlong *)(unaff_EBP - 0x13b4);
            uVar12 = piVar21[2];
            uVar9 = piVar21[2];
            *(undefined4 *)(unaff_EBP - 0x1334) = *(undefined4 *)(unaff_EBP - 0x1334);
            fVar42 = *(float *)(unaff_EBP - 0x1334);
            iVar31 = piVar21[3];
            *(uint *)(unaff_EBP - 0x13bc) = uVar33 - uVar9;
            *(uint *)(unaff_EBP - 0x13b8) = (iVar14 - iVar31) - (uint)(uVar33 < uVar12);
            fVar42 = fVar42 * 1.5258789e-05;
            *(float *)(unaff_EBP - 0x1334) = (float)*(longlong *)(unaff_EBP - 0x13bc);
            *(undefined4 *)(unaff_EBP - 0x1334) = *(undefined4 *)(unaff_EBP - 0x1334);
            fVar39 = *(float *)(unaff_EBP - 0x1334) * 1.5258789e-05;
            *(float *)(unaff_EBP - 0x173c) = fVar39;
            if (fVar42 * fVar42 + fVar39 * fVar39 < 1600.0) goto LAB_0051e593;
            piVar21 = (int *)*piVar21;
          } while (piVar21 != (int *)*(int *)(unaff_EBP - 0x1378));
          iVar31 = *(int *)(unaff_EBP - 0x12cc);
        }
        iVar14 = *(int *)((int)pvVar20 + 0x800298);
        dVar41 = (double)*(int *)(unaff_EBP - 0x12e4) * 0.001;
        *(double *)(unaff_EBP - 0x1340) = dVar41;
        iVar16 = *(int *)((int)pvVar20 + 0x800294);
        *(double *)(unaff_EBP - 0x1354) = (double)iVar31 * 0.001;
        dVar40 = (double)iVar16 + (double)iVar31 * 0.001;
        fVar38 = FUN_004d5d30(SUB84(dVar40,0),(int)((ulonglong)dVar40 >> 0x20),
                              (double)iVar14 + dVar41);
        *(float *)(unaff_EBP - 0x12fc) = (float)fVar38;
        uVar9 = rand();
        uVar9 = uVar9 & 0x80000001;
        if ((int)uVar9 < 0) {
          uVar9 = (uVar9 - 1 | 0xfffffffe) + 1;
        }
        fVar42 = *(float *)(unaff_EBP - 0x12fc);
        *(uint *)(unaff_EBP - 0x12d4) = -(uint)(uVar9 != 0) & 5;
        if (fVar42 <= 0.3) {
          iVar14 = rand();
          uVar13 = *(undefined4 *)(unaff_EBP - 0x12d4);
          if (iVar14 % 10 == 0) {
            uVar13 = 1;
          }
          *(undefined4 *)(unaff_EBP - 0x12d4) = uVar13;
        }
        else {
          iVar14 = rand();
          if (iVar14 % 10 != 0) {
            *(undefined4 *)(unaff_EBP - 0x12d4) = 1;
          }
        }
        iVar14 = rand();
        uVar13 = *(undefined4 *)(unaff_EBP - 0x12d4);
        uVar9 = *(uint *)(unaff_EBP - 0x12e4);
        uVar12 = *(uint *)(unaff_EBP - 0x12cc);
        if (iVar14 % 10 == 0) {
          uVar13 = 2;
        }
        *(undefined4 *)(unaff_EBP - 0x12d4) = uVar13;
        iVar14 = FUN_00406100(pvVar20,uVar12,uVar9,iVar8);
        if (iVar14 == 0) {
          fVar38 = (float10)FUN_004f8b40(pvVar20,*(int *)(unaff_EBP - 0x12cc),
                                         *(int *)(unaff_EBP - 0x12e4));
          *(float *)(unaff_EBP - 0x12fc) = (float)fVar38;
          fVar42 = *(float *)(unaff_EBP - 0x12fc);
        }
        else {
          fVar42 = *(float *)(iVar14 + 8);
        }
        *(float *)(unaff_EBP - 0x12d0) = fVar42;
        if ((0.8 < fVar42) && (0.7 < *(float *)(unaff_EBP - 0x12f8))) {
          uVar9 = rand();
          uVar9 = uVar9 & 0x80000001;
          if ((int)uVar9 < 0) {
            uVar9 = (uVar9 - 1 | 0xfffffffe) + 1;
          }
          *(uint *)(unaff_EBP - 0x12d4) = (uVar9 != 0) + 4;
          uVar9 = rand();
          uVar9 = uVar9 & 0x80000003;
          bVar37 = uVar9 == 0;
          if ((int)uVar9 < 0) {
            bVar37 = (uVar9 - 1 | 0xfffffffc) == 0xffffffff;
          }
          uVar13 = *(undefined4 *)(unaff_EBP - 0x12d4);
          fVar42 = *(float *)(unaff_EBP - 0x12d0);
          if (bVar37) {
            uVar13 = 3;
          }
          *(undefined4 *)(unaff_EBP - 0x12d4) = uVar13;
        }
        if (0.3 <= fVar42) {
          if (fVar42 < 0.7) {
            dVar40 = *(double *)(unaff_EBP - 0x1354) + 8473.0;
            fVar38 = FUN_004d5d30(SUB84(dVar40,0),(int)((ulonglong)dVar40 >> 0x20),
                                  *(double *)(unaff_EBP - 0x1340) + 9438.0);
            *(float *)(unaff_EBP - 0x133c) = (float)fVar38;
            if ((0.8 < *(float *)(unaff_EBP - 0x133c)) && (iVar14 = rand(), iVar14 % 5 != 0)) {
              *(undefined4 *)(unaff_EBP - 0x12d4) = 2;
              goto LAB_0051e307;
            }
          }
          if (*(int *)(unaff_EBP - 0x12d4) == 1) goto LAB_0051e2c2;
          if (*(int *)(unaff_EBP - 0x12d4) == 2) goto LAB_0051e307;
        }
        else {
          if (0.2 < fVar42) {
            dVar40 = *(double *)(unaff_EBP - 0x1354) + 8473.0;
            fVar38 = FUN_004d5d30(SUB84(dVar40,0),(int)((ulonglong)dVar40 >> 0x20),
                                  *(double *)(unaff_EBP - 0x1340) + 9438.0);
            *(float *)(unaff_EBP - 0x133c) = (float)fVar38;
            if ((0.6 < *(float *)(unaff_EBP - 0x133c)) && (iVar14 = rand(), iVar14 % 5 != 0)) {
              *(undefined4 *)(unaff_EBP - 0x12d4) = 2;
LAB_0051e307:
              iVar14 = rand();
              pvVar20 = *(void **)(unaff_EBP - 0x12e0);
              *(int *)(unaff_EBP - 0x12ec) =
                   *(int *)(unaff_EBP - 0x12ec) + iVar14 % (*(int *)(unaff_EBP - 0x12ec) / 2);
              goto LAB_0051e32d;
            }
          }
          *(undefined4 *)(unaff_EBP - 0x12d4) = 1;
LAB_0051e2c2:
          iVar14 = *(int *)(unaff_EBP - 0x12f4);
          fVar42 = (float)*(int *)(unaff_EBP - 0x12ec) * 0.5;
          if (fVar42 < (float)iVar14) {
            iVar14 = (int)fVar42;
            *(int *)(unaff_EBP - 0x12f4) = iVar14;
          }
          if (iVar14 < 1) {
            *(undefined4 *)(unaff_EBP - 0x12f4) = 1;
          }
        }
LAB_0051e32d:
        iVar14 = FUN_00406100(pvVar20,*(uint *)(unaff_EBP - 0x12cc),*(uint *)(unaff_EBP - 0x12e4),
                              iVar8);
        if (iVar14 == 0) {
          FUN_004f8570(pvVar20,*(float *)(unaff_EBP - 0x12cc),*(uint *)(unaff_EBP - 0x12e4));
        }
        fVar42 = *(float *)(unaff_EBP - 0x12cc);
        iVar14 = *(int *)(unaff_EBP - 0x12f4);
        if (*(int *)(unaff_EBP - 0x1370) < (int)fVar42 + iVar14) {
          fVar42 = (float)((*(int *)(unaff_EBP - 0x1358) - iVar14) + 0x100);
          *(float *)(unaff_EBP - 0x12cc) = fVar42;
        }
        if (*(int *)(unaff_EBP - 0x132c) + 0x100 < iVar14 + *(int *)(unaff_EBP - 0x12e4)) {
          fVar39 = (float)((*(int *)(unaff_EBP - 0x132c) - *(int *)(unaff_EBP - 0x12f4)) + 0x100);
          *(float *)(unaff_EBP - 0x12e4) = fVar39;
        }
        else {
          fVar39 = *(float *)(unaff_EBP - 0x12e4);
        }
        fVar38 = FUN_004d9010(pvVar20,fVar42,fVar39,iVar8);
        *(float *)(unaff_EBP - 0x133c) = (float)fVar38;
        *(float *)(unaff_EBP - 0x133c) =
             *(float *)(unaff_EBP - 0x133c) + *(float *)(unaff_EBP - 0x1344);
        iVar14 = rand();
        if (((float)iVar14 / 32767.0 < *(float *)(unaff_EBP - 0x133c) ||
             (float)iVar14 / 32767.0 == *(float *)(unaff_EBP - 0x133c)) &&
           (iVar14 = FUN_00406100(pvVar20,*(uint *)(unaff_EBP - 0x12cc),
                                  *(uint *)(unaff_EBP - 0x12e4),iVar8), iVar14 != 0)) {
          iVar14 = *(int *)(iVar14 + 0x1c) + -1 + *(int *)(iVar14 + 0x10);
          while( true ) {
            uVar9 = *(uint *)(unaff_EBP - 0x12e4);
            uVar12 = *(uint *)(unaff_EBP - 0x12cc);
            *(int *)(unaff_EBP - 0x12f8) = iVar14;
            puVar10 = FUN_00405fd0(pvVar20,uVar12,uVar9,iVar14,iVar8);
            if (((puVar10[3] & 0x1f) != 0) && ((puVar10[3] & 0x1f) != 2)) break;
            iVar14 = *(int *)(unaff_EBP - 0x12f8) + -1;
          }
          if (-1 < *(int *)(unaff_EBP - 0x12f8)) {
            puVar10 = FUN_00405fd0(pvVar20,*(uint *)(unaff_EBP - 0x12cc),
                                   *(uint *)(unaff_EBP - 0x12e4),*(int *)(unaff_EBP - 0x12f8),iVar8)
            ;
            bVar7 = puVar10[3];
            *(int *)(unaff_EBP - 0x12f8) = *(int *)(unaff_EBP - 0x12f8) + 1;
            uVar9 = *(uint *)(unaff_EBP - 0x12e4);
            uVar12 = *(uint *)(unaff_EBP - 0x12cc);
            *(uint *)(unaff_EBP - 0x1350) = bVar7 & 0xffffff1f;
            iVar14 = FUN_00406100(pvVar20,uVar12,uVar9,iVar8);
            if (iVar14 == 0) {
              fVar38 = (float10)FUN_004f8b40(pvVar20,*(int *)(unaff_EBP - 0x12cc),
                                             *(int *)(unaff_EBP - 0x12e4));
              *(float *)(unaff_EBP - 0x133c) = (float)fVar38;
              fVar42 = *(float *)(unaff_EBP - 0x133c);
            }
            else {
              fVar42 = *(float *)(iVar14 + 8);
            }
            if (fVar42 <= 0.8) {
              iVar14 = *(int *)(unaff_EBP - 0x12d4);
            }
            else {
              iVar14 = FUN_00406100(pvVar20,*(uint *)(unaff_EBP - 0x12cc),
                                    *(uint *)(unaff_EBP - 0x12e4),iVar8);
              if (iVar14 == 0) {
                fVar38 = (float10)FUN_004f8570(pvVar20,*(float *)(unaff_EBP - 0x12cc),
                                               *(uint *)(unaff_EBP - 0x12e4));
                *(float *)(unaff_EBP - 0x133c) = (float)fVar38;
                fVar42 = *(float *)(unaff_EBP - 0x133c);
              }
              else {
                fVar42 = *(float *)(iVar14 + 4);
              }
              iVar14 = *(int *)(unaff_EBP - 0x12d4);
              if (fVar42 < 0.2) {
                iVar14 = 3;
              }
            }
            iVar31 = *(int *)(unaff_EBP - 0x1350);
            if ((iVar31 == 4) || (iVar31 == 10)) {
              fVar42 = *(float *)(unaff_EBP - 0x12f8);
            }
            else if ((iVar31 != 9) || (fVar42 = *(float *)(unaff_EBP - 0x12f8), 2 < (int)fVar42))
            goto LAB_0051e593;
            iVar31 = *(int *)(unaff_EBP - 0x12f4);
            if (*(int *)(unaff_EBP - 0x12f4) < 1) {
              iVar31 = *(int *)(unaff_EBP - 0x1330);
            }
            FUN_00513760(*(float *)(unaff_EBP - 0x12cc),*(uint *)(unaff_EBP - 0x12e4),fVar42,iVar31,
                         *(int *)(unaff_EBP - 0x12ec),iVar14,iVar8);
          }
        }
      }
LAB_0051e593:
      uVar9 = *(int *)(unaff_EBP - 0x1314) + 0x12;
      piVar22 = (int *)(unaff_EBP - 0x12dc);
      *piVar22 = *piVar22 + -1;
      iVar14 = *piVar22;
      *(uint *)(unaff_EBP - 0x1314) = uVar9;
    } while (iVar14 != 0);
    *(int *)(unaff_EBP - 0x12d8) = *(int *)(unaff_EBP - 0x12d8) + 0x12;
    piVar22 = (int *)(unaff_EBP - 0x12f0);
    *piVar22 = *piVar22 + -1;
    uVar9 = *(uint *)(unaff_EBP - 0x1328);
  } while (*piVar22 != 0);
  if (*(int *)(unaff_EBP - 0x1360) == 0) {
    iVar14 = rand();
    *(int *)(unaff_EBP - 0x1310) = *(int *)(unaff_EBP - 0x1358) + 0x10 + iVar14 % 0xe0;
    iVar14 = rand();
    uVar12 = *(int *)(unaff_EBP - 0x132c) + 0x10 + iVar14 % 0xe0;
    uVar9 = *(uint *)(unaff_EBP - 0x1310);
    *(uint *)(unaff_EBP - 0x12d0) = uVar12;
    iVar14 = FUN_00406100(pvVar20,uVar9,uVar12,iVar8);
    if (iVar14 != 0) {
      iVar14 = *(int *)(iVar14 + 0x1c) + *(int *)(iVar14 + 0x10);
      while( true ) {
        uVar9 = *(uint *)(unaff_EBP - 0x12d0);
        uVar12 = *(uint *)(unaff_EBP - 0x1310);
        *(int *)(unaff_EBP - 0x12fc) = iVar14;
        puVar10 = FUN_00405fd0(pvVar20,uVar12,uVar9,iVar14,iVar8);
        if (((puVar10[3] & 0x1f) != 0) && ((puVar10[3] & 0x1f) != 2)) break;
        iVar14 = *(int *)(unaff_EBP - 0x12fc) + -1;
      }
      iVar8 = *(int *)(unaff_EBP - 0x12fc);
      FUN_004c84b0(unaff_EBP - 0x984);
      uVar9 = iVar8 + 1;
      uVar12 = ((int)uVar9 >> 0x1f) << 0x10 | uVar9 >> 0x10;
      *(uint *)(unaff_EBP - 0x12dc) = uVar9 * 0x10000;
      *(uint *)(unaff_EBP - 0x1550) = uVar9 * 0x10000;
      uVar9 = *(uint *)(unaff_EBP - 0x12d0);
      *(undefined1 *)(unaff_EBP - 4) = 5;
      *(undefined4 *)(unaff_EBP - 0x984) = 0;
      *(uint *)(unaff_EBP - 0x12f0) = uVar12;
      *(uint *)(unaff_EBP - 0x154c) = uVar12;
      *(uint *)(unaff_EBP - 0x12fc) = ((int)uVar9 >> 0x1f) << 0x10 | uVar9 >> 0x10;
      uVar47 = FUN_0054a946();
      iVar14 = (int)(uVar47 >> 0x20);
      uVar33 = (uint)uVar47;
      uVar12 = *(uint *)(unaff_EBP - 0x1310);
      iVar31 = uVar9 * 0x10000 - uVar33;
      *(int *)(unaff_EBP - 0x12fc) =
           (*(int *)(unaff_EBP - 0x12fc) - iVar14) - (uint)(uVar9 * 0x10000 < uVar33);
      iVar8 = uVar12 * 0x10000 - uVar33;
      uVar13 = *(undefined4 *)(unaff_EBP - 0x12fc);
      iVar14 = ((((int)uVar12 >> 0x1f) << 0x10 | uVar12 >> 0x10) - iVar14) -
               (uint)(uVar12 * 0x10000 < uVar33);
      *(undefined4 *)(unaff_EBP - 0x3dc) = *(undefined4 *)(unaff_EBP - 0x12dc);
      uVar50 = *(undefined4 *)(unaff_EBP - 0x12f0);
      *(int *)(unaff_EBP - 0x3ec) = iVar8;
      *(undefined4 *)(unaff_EBP - 0x3d8) = uVar50;
      uVar50 = *(undefined4 *)(unaff_EBP - 0x12dc);
      *(int *)(unaff_EBP - 0x97c) = iVar8;
      uVar52 = *(undefined4 *)(unaff_EBP - 0x12f0);
      *(int *)(unaff_EBP - 1000) = iVar14;
      *(int *)(unaff_EBP - 0x3e4) = iVar31;
      *(undefined4 *)(unaff_EBP - 0x3e0) = uVar13;
      *(int *)(unaff_EBP - 0x978) = iVar14;
      *(int *)(unaff_EBP - 0x974) = iVar31;
      *(undefined4 *)(unaff_EBP - 0x970) = uVar13;
      *(undefined4 *)(unaff_EBP - 0x96c) = uVar50;
      *(undefined4 *)(unaff_EBP - 0x968) = uVar52;
      *(undefined4 *)(unaff_EBP - 0x960) = 0x40000000;
      *(undefined4 *)(unaff_EBP - 0x95c) = 0x40000000;
      *(undefined4 *)(unaff_EBP - 0x958) = 0x41000000;
      uVar9 = rand();
      uVar9 = uVar9 & 0x80000003;
      if ((int)uVar9 < 0) {
        uVar9 = (uVar9 - 1 | 0xfffffffc) + 1;
      }
      iVar8 = *(int *)(unaff_EBP - 0x1308);
      *(uint *)(unaff_EBP - 0x964) = uVar9;
      FUN_004d6670((void *)(iVar8 + 0xc),(void **)(unaff_EBP - 0x984));
      iVar14 = *(int *)(unaff_EBP - 0x93c);
      *(undefined1 *)(unaff_EBP - 4) = 3;
      if (iVar14 != 0) {
        std::_Container_base0::_Orphan_all((_Container_base0 *)(unaff_EBP - 0x93c));
        FUN_00406310(*(undefined4 **)(unaff_EBP - 0x93c),*(undefined4 **)(unaff_EBP - 0x938));
        operator_delete(*(void **)(unaff_EBP - 0x93c));
        *(undefined4 *)(unaff_EBP - 0x93c) = 0;
        *(undefined4 *)(unaff_EBP - 0x938) = 0;
        *(undefined4 *)(unaff_EBP - 0x934) = 0;
      }
      pvVar20 = *(void **)(unaff_EBP - 0x12e0);
    }
  }
  iVar14 = *(int *)(*(int *)(unaff_EBP - 0x1300) + 0x18);
  if ((((iVar14 != 0) && (iVar14 != 10)) && (iVar14 != 0xe)) && ((iVar14 != 1 && (iVar14 != 5)))) {
    *(undefined4 *)(unaff_EBP - 0x1444) = 0;
    *(undefined4 *)(unaff_EBP - 0x1440) = 0;
    *(undefined4 *)(unaff_EBP - 0x143c) = 0;
    iVar31 = 0;
    iVar14 = 0;
    *(undefined1 *)(unaff_EBP - 4) = 6;
    *(undefined4 *)(unaff_EBP - 0x1338) = 0;
    *(undefined4 *)(unaff_EBP - 0x12ec) = 0;
    do {
      *(undefined4 *)(unaff_EBP - 0x1360) = 0;
      *(int *)(unaff_EBP - 0x1328) = iVar31;
      do {
        if (iVar31 % *(int *)(unaff_EBP - 0x1368) == 0) {
          uVar12 = iVar14 + *(int *)(iVar8 + 0x60) * 0x100 + 4;
          uVar9 = *(int *)(iVar8 + 100) * 0x100 + *(int *)(unaff_EBP - 0x1360) + 4;
          *(uint *)(unaff_EBP - 0x12dc) = uVar9;
          uVar33 = ((int)uVar9 >> 0x1f) << 0x10 | uVar9 >> 0x10;
          *(uint *)(unaff_EBP - 0x133c) = uVar9 * 0x10000;
          *(uint *)(unaff_EBP - 0x1464) = uVar9 * 0x10000;
          *(uint *)(unaff_EBP - 0x1320) = uVar33;
          *(uint *)(unaff_EBP - 0x1460) = uVar33;
          *(uint *)(unaff_EBP - 0x12f0) = uVar12;
          uVar9 = ((int)uVar12 >> 0x1f) << 0x10 | uVar12 >> 0x10;
          *(uint *)(unaff_EBP - 0x1310) = uVar12 * 0x10000;
          *(uint *)(unaff_EBP - 0x1474) = uVar12 * 0x10000;
          *(uint *)(unaff_EBP - 0x1304) = uVar9;
          *(uint *)(unaff_EBP - 0x1470) = uVar9;
          fVar38 = FUN_0052c820(*(uint **)(unaff_EBP - 0x1300),(uint *)(unaff_EBP - 0x1474),
                                (uint *)(unaff_EBP - 0x1464));
          *(float *)(unaff_EBP - 0x1330) = (float)fVar38;
          fVar42 = 1.0 - *(float *)(unaff_EBP - 0x1330);
          if (0.0 < fVar42) {
            *(float *)(unaff_EBP - 0x12d0) = fVar42 * fVar42;
          }
          else {
            *(undefined4 *)(unaff_EBP - 0x12d0) = 0;
          }
          iVar14 = rand();
          if (((float)iVar14 / 32767.0 <= *(float *)(unaff_EBP - 0x12d0) * 0.75) &&
             (iVar14 = FUN_00406100(pvVar20,*(uint *)(unaff_EBP - 0x12f0),
                                    *(uint *)(unaff_EBP - 0x12dc),iVar8), iVar14 != 0)) {
            iVar14 = *(int *)(iVar14 + 0x14);
            while( true ) {
              uVar9 = *(uint *)(unaff_EBP - 0x12dc);
              uVar12 = *(uint *)(unaff_EBP - 0x12f0);
              *(int *)(unaff_EBP - 0x12fc) = iVar14;
              puVar10 = FUN_00405fd0(pvVar20,uVar12,uVar9,iVar14,iVar8);
              if (((puVar10[3] & 0x1f) == 0) || ((puVar10[3] & 0x1f) == 2)) break;
              iVar14 = *(int *)(unaff_EBP - 0x12fc) + 1;
            }
            uVar12 = *(uint *)(unaff_EBP - 0x12fc);
            uVar35 = ((int)uVar12 >> 0x1f) << 0x10 | uVar12 >> 0x10;
            *(uint *)(unaff_EBP - 0x1560) = uVar12 << 0x10;
            *(uint *)(unaff_EBP - 0x155c) = uVar35;
            uVar47 = FUN_0054a946();
            iVar8 = (int)(uVar47 >> 0x20);
            uVar32 = (uint)uVar47;
            uVar33 = *(uint *)(unaff_EBP - 0x133c);
            *(int *)(unaff_EBP - 0x1320) =
                 (*(int *)(unaff_EBP - 0x1320) - iVar8) - (uint)(uVar33 < uVar32);
            puVar25 = (uint *)(unaff_EBP - 0x1310);
            uVar9 = *puVar25;
            *puVar25 = *puVar25 - uVar32;
            *(undefined4 *)(unaff_EBP - 0x338) = *(undefined4 *)(unaff_EBP - 0x1310);
            *(int *)(unaff_EBP - 0x1304) =
                 (*(int *)(unaff_EBP - 0x1304) - iVar8) - (uint)(uVar9 < uVar32);
            *(undefined4 *)(unaff_EBP - 0x334) = *(undefined4 *)(unaff_EBP - 0x1304);
            *(undefined4 *)(unaff_EBP - 0x32c) = *(undefined4 *)(unaff_EBP - 0x1320);
            *(uint *)(unaff_EBP - 0x330) = uVar33 - uVar32;
            *(uint *)(unaff_EBP - 0x328) = uVar12 << 0x10;
            *(uint *)(unaff_EBP - 0x324) = uVar35;
            FUN_004e1420((void *)(unaff_EBP - 0x1444),(undefined4 *)(unaff_EBP - 0x338));
          }
          iVar14 = *(int *)(unaff_EBP - 0x12ec);
        }
        iVar8 = *(int *)(unaff_EBP - 0x1308);
        pvVar20 = *(void **)(unaff_EBP - 0x12e0);
        iVar16 = *(int *)(unaff_EBP - 0x1360) + 0x12;
        iVar31 = *(int *)(unaff_EBP - 0x1328) + 3;
        *(int *)(unaff_EBP - 0x1328) = iVar31;
        *(int *)(unaff_EBP - 0x1360) = iVar16;
      } while (iVar16 < 0xfc);
      iVar14 = iVar14 + 0x12;
      iVar31 = *(int *)(unaff_EBP - 0x1338) + 1;
      *(int *)(unaff_EBP - 0x1338) = iVar31;
      *(int *)(unaff_EBP - 0x12ec) = iVar14;
    } while (iVar14 < 0xfc);
    FUN_005104e0(pvVar20,iVar8,*(uint **)(unaff_EBP - 0x1300),(int *)(unaff_EBP - 0x1444));
    iVar14 = *(int *)(unaff_EBP - 0x1444);
    *(undefined1 *)(unaff_EBP - 4) = 3;
    if (iVar14 != 0) {
      std::_Container_base0::_Orphan_all((_Container_base0 *)(unaff_EBP - 0x1444));
      operator_delete(*(void **)(unaff_EBP - 0x1444));
      *(undefined4 *)(unaff_EBP - 0x1444) = 0;
      *(undefined4 *)(unaff_EBP - 0x1440) = 0;
      *(undefined4 *)(unaff_EBP - 0x143c) = 0;
    }
  }
  puVar25 = *(uint **)(unaff_EBP - 0x1300);
  if (puVar25[6] == 9) {
    uVar48 = __alldiv(*puVar25,puVar25[1],0x10000,0);
    iVar31 = (int)uVar48;
    iVar14 = *(int *)(unaff_EBP - 0x1300);
    uVar9 = *(uint *)(iVar14 + 0xc);
    *(int *)(unaff_EBP - 0x40) = iVar31;
    uVar48 = __alldiv(*(uint *)(iVar14 + 8),uVar9,0x10000,0);
    iVar14 = (int)uVar48;
    *(int *)(unaff_EBP - 0x184) = (int)(iVar31 + (iVar31 >> 0x1f & 0xffU)) >> 8;
    *(int *)(unaff_EBP - 0x3c) = iVar14;
    *(int *)(unaff_EBP - 0x180) = (int)(iVar14 + (iVar14 >> 0x1f & 0xffU)) >> 8;
    iVar14 = 0;
    piVar22 = (int *)(iVar8 + 0x60);
    do {
      if (*(int *)((unaff_EBP - 0x184) + iVar14 * 4) != *piVar22) goto LAB_0051ec4a;
      iVar14 = iVar14 + 1;
      piVar22 = piVar22 + 1;
    } while (iVar14 < 2);
    pSVar17 = operator_new(0x10f0);
    if (pSVar17 == (Spawn *)0x0) {
      pSVar17 = (Spawn *)0x0;
    }
    else {
      pSVar17 = cube::Spawn::Spawn(pSVar17);
    }
    puVar19 = *(undefined4 **)(unaff_EBP - 0x1300);
    *(undefined4 *)&(pSVar17->Spawn_data).field_0xc = *puVar19;
    *(undefined4 *)&(pSVar17->Spawn_data).field_0x10 = puVar19[1];
    *(undefined4 *)&(pSVar17->Spawn_data).field_0x14 = puVar19[2];
    uVar9 = puVar19[3];
    *(uint *)&(pSVar17->Spawn_data).field_0x18 = uVar9;
    uVar12 = *(uint *)&(pSVar17->Spawn_data).field_0x14;
    *(Spawn **)(unaff_EBP - 0x13f4) = pSVar17;
    iVar14 = iVar8;
    uVar48 = __alldiv(uVar12,uVar9,0x10000,0);
    uVar9 = (uint)uVar48;
    uVar48 = __alldiv(*(uint *)&(pSVar17->Spawn_data).field_0xc,
                      *(uint *)&(pSVar17->Spawn_data).field_0x10,0x10000,0);
    iVar14 = FUN_00406100(*(void **)(unaff_EBP - 0x12e0),(uint)uVar48,uVar9,iVar14);
    uVar9 = *(uint *)(iVar14 + 0x10);
    iVar14 = *(int *)(unaff_EBP - 0x1300);
    *(uint *)&(pSVar17->Spawn_data).field_0x1c = uVar9 << 0x10;
    *(uint *)&(pSVar17->Spawn_data).field_0x20 = ((int)uVar9 >> 0x1f) << 0x10 | uVar9 >> 0x10;
    (pSVar17->Spawn_data).offset_0x24 = 1;
    (pSVar17->Spawn_data).offset_0x28 = 0x6b;
    (pSVar17->Spawn_data).offset_0x30 = *(undefined4 *)(iVar14 + 0x24);
    (pSVar17->Spawn_data).offset_0x54 = *(undefined1 *)(iVar14 + 0x28);
    FUN_004f2be0((void *)(iVar8 + 0x18),(undefined4 *)(unaff_EBP - 0x13f4));
  }
LAB_0051ec4a:
  *(undefined4 *)(unaff_EBP - 0x140c) = 0;
  *(undefined4 *)(unaff_EBP - 0x1408) = 0;
  *(undefined4 *)(unaff_EBP - 0x1404) = 0;
  iVar8 = *(int *)(unaff_EBP - 0x137c);
  *(undefined1 *)(unaff_EBP - 4) = 7;
  *(undefined4 *)(unaff_EBP - 0x12d0) = 0;
  pcVar36 = (char *)(iVar8 + 0x18);
  iVar8 = 0;
  do {
    iVar14 = 0;
    do {
      if (*pcVar36 != '\0') {
        *(int *)(unaff_EBP - 0x17c) = *(int *)(unaff_EBP - 0x13d0) * 0x40 + iVar8;
        *(int *)(unaff_EBP - 0x178) = *(int *)(unaff_EBP - 0x1384) * 0x40 + iVar14;
        uVar13 = *(undefined4 *)(unaff_EBP - 0x17c);
        uVar50 = *(undefined4 *)(unaff_EBP - 0x178);
        *(undefined4 *)(unaff_EBP - 0x2c) = uVar13;
        *(undefined4 *)(unaff_EBP - 0x28) = uVar50;
        iVar31 = *(int *)(unaff_EBP - 0x2c) - *(int *)(unaff_EBP - 0x135c);
        iVar8 = *(int *)(unaff_EBP - 0x28) - *(int *)(unaff_EBP - 0x1364);
        *(int *)(unaff_EBP - 0x2c) = iVar31;
        *(int *)(unaff_EBP - 0x28) = iVar8;
        *(int *)(unaff_EBP - 0x394) = iVar8 * iVar8 + iVar31 * iVar31;
        *(undefined4 *)(unaff_EBP - 0x39c) = uVar13;
        *(undefined4 *)(unaff_EBP - 0x398) = uVar50;
        FUN_0042feb0((void *)(unaff_EBP - 0x140c),(undefined4 *)(unaff_EBP - 0x39c));
        iVar8 = *(int *)(unaff_EBP - 0x12d0);
      }
      iVar14 = iVar14 + 1;
      pcVar36 = pcVar36 + 0x10;
    } while (iVar14 < 0x40);
    iVar8 = iVar8 + 1;
    *(int *)(unaff_EBP - 0x12d0) = iVar8;
  } while (iVar8 < 0x40);
  piVar22 = *(int **)(unaff_EBP - 0x1408);
  piVar21 = *(int **)(unaff_EBP - 0x140c);
  *(undefined1 *)(unaff_EBP - 0x141c) = 0;
  FUN_004f5e00(piVar21,piVar22,((int)piVar22 - (int)piVar21) / 0xc,
               *(undefined4 *)(unaff_EBP - 0x141c));
  *(undefined4 *)(unaff_EBP - 0x1304) = 0;
LAB_0051ed60:
  iVar8 = 0;
  *(undefined4 *)(unaff_EBP - 0x1310) = 0;
  do {
    uVar9 = rand();
    uVar9 = uVar9 & 0x80000003;
    bVar37 = uVar9 == 0;
    if ((int)uVar9 < 0) {
      bVar37 = (uVar9 - 1 | 0xfffffffc) == 0xffffffff;
    }
    if (bVar37) {
LAB_0051f975:
      iVar8 = *(int *)(unaff_EBP - 0x1308);
LAB_0051f97b:
      pvVar20 = *(void **)(unaff_EBP - 0x12e0);
    }
    else {
      iVar14 = rand();
      uVar12 = *(int *)(unaff_EBP - 0x1304) * 0x55 + 0x18 +
               iVar14 % 10 + *(int *)(unaff_EBP - 0x1358);
      *(uint *)(unaff_EBP - 0x12cc) = uVar12;
      iVar14 = rand();
      puVar25 = *(uint **)(unaff_EBP - 0x1300);
      uVar9 = puVar25[6];
      uVar33 = iVar8 * 0x55 + 0x18 + iVar14 % 10 + *(int *)(unaff_EBP - 0x132c);
      *(uint *)(unaff_EBP - 0x12d4) = uVar33;
      if ((uVar9 != 0) && (uVar9 != 10)) {
        *(uint *)(unaff_EBP - 0x146c) = uVar33 * 0x10000;
        *(uint *)(unaff_EBP - 0x1468) = ((int)uVar33 >> 0x1f) << 0x10 | uVar33 >> 0x10;
        *(uint *)(unaff_EBP - 0x147c) = uVar12 * 0x10000;
        *(uint *)(unaff_EBP - 0x1478) = ((int)uVar12 >> 0x1f) << 0x10 | uVar12 >> 0x10;
        fVar38 = FUN_0052c820(puVar25,(uint *)(unaff_EBP - 0x147c),(uint *)(unaff_EBP - 0x146c));
        *(float *)(unaff_EBP - 0x1330) = (float)fVar38;
        fVar42 = 1.0 - *(float *)(unaff_EBP - 0x1330);
        if ((0.0 < fVar42) && (0.3 < fVar42 * fVar42)) goto LAB_0051f975;
      }
      iVar8 = *(int *)(unaff_EBP - 0x1308);
      pvVar20 = *(void **)(unaff_EBP - 0x12e0);
      iVar14 = FUN_00406100(pvVar20,uVar12,*(uint *)(unaff_EBP - 0x12d4),iVar8);
      if (iVar14 == 0) {
        fVar38 = (float10)FUN_004f8b40(pvVar20,*(int *)(unaff_EBP - 0x12cc),
                                       *(int *)(unaff_EBP - 0x12d4));
        *(float *)(unaff_EBP - 0x1330) = (float)fVar38;
        fVar42 = *(float *)(unaff_EBP - 0x1330);
      }
      else {
        fVar42 = *(float *)(iVar14 + 8);
      }
      *(float *)(unaff_EBP - 0x12d0) = fVar42;
      if (0.2 <= fVar42) {
LAB_0051eed2:
        iVar14 = FUN_00406100(pvVar20,*(uint *)(unaff_EBP - 0x12cc),*(uint *)(unaff_EBP - 0x12d4),
                              iVar8);
        if (iVar14 == 0) {
          fVar38 = (float10)FUN_004f8570(pvVar20,*(float *)(unaff_EBP - 0x12cc),
                                         *(uint *)(unaff_EBP - 0x12d4));
          *(float *)(unaff_EBP - 0x1330) = (float)fVar38;
          fVar42 = *(float *)(unaff_EBP - 0x1330);
        }
        else {
          fVar42 = *(float *)(iVar14 + 4);
        }
        *(float *)(unaff_EBP - 0x12dc) = fVar42;
        if (fVar42 < 0.2) {
          uVar9 = rand();
          uVar9 = uVar9 & 0x80000003;
          bVar37 = uVar9 == 0;
          if ((int)uVar9 < 0) {
            bVar37 = (uVar9 - 1 | 0xfffffffc) == 0xffffffff;
          }
          if (bVar37) goto LAB_0051f981;
        }
        piVar22 = (int *)**(int **)(unaff_EBP - 0x1378);
        if (piVar22 != *(int **)(unaff_EBP - 0x1378)) {
          uVar9 = *(uint *)(unaff_EBP - 0x12d4);
          *(uint *)(unaff_EBP - 0x1330) = uVar9 << 0x10;
          uVar12 = *(uint *)(unaff_EBP - 0x12cc);
          *(uint *)(unaff_EBP - 0x133c) = ((int)uVar9 >> 0x1f) << 0x10 | uVar9 >> 0x10;
          *(uint *)(unaff_EBP - 0x1348) = ((int)uVar12 >> 0x1f) << 0x10 | uVar12 >> 0x10;
          *(uint *)(unaff_EBP - 0x1334) = uVar12 << 0x10;
          do {
            uVar9 = *(uint *)(unaff_EBP - 0x1330);
            uVar12 = piVar22[4];
            iVar14 = *(int *)(unaff_EBP - 0x133c);
            iVar31 = piVar22[5];
            *(uint *)(unaff_EBP - 0x13b4) = uVar9 - piVar22[4];
            uVar33 = *(uint *)(unaff_EBP - 0x1334);
            *(uint *)(unaff_EBP - 0x13b0) = (iVar14 - iVar31) - (uint)(uVar9 < uVar12);
            iVar14 = *(int *)(unaff_EBP - 0x1348);
            *(float *)(unaff_EBP - 0x1350) = (float)*(longlong *)(unaff_EBP - 0x13b4);
            uVar9 = piVar22[2];
            uVar12 = piVar22[2];
            *(undefined4 *)(unaff_EBP - 0x1350) = *(undefined4 *)(unaff_EBP - 0x1350);
            fVar42 = *(float *)(unaff_EBP - 0x1350);
            iVar31 = piVar22[3];
            *(uint *)(unaff_EBP - 0x13bc) = uVar33 - uVar12;
            *(uint *)(unaff_EBP - 0x13b8) = (iVar14 - iVar31) - (uint)(uVar33 < uVar9);
            fVar42 = fVar42 * 1.5258789e-05;
            *(float *)(unaff_EBP - 0x1350) = (float)*(longlong *)(unaff_EBP - 0x13bc);
            *(undefined4 *)(unaff_EBP - 0x1350) = *(undefined4 *)(unaff_EBP - 0x1350);
            fVar39 = *(float *)(unaff_EBP - 0x1350) * 1.5258789e-05;
            *(float *)(unaff_EBP - 0x15fc) = fVar39;
            if (fVar42 * fVar42 + fVar39 * fVar39 < 400.0) goto LAB_0051f981;
            piVar22 = (int *)*piVar22;
          } while (piVar22 != (int *)*(int *)(unaff_EBP - 0x1378));
        }
        iVar14 = FUN_00406100(pvVar20,*(uint *)(unaff_EBP - 0x12cc),*(uint *)(unaff_EBP - 0x12d4),
                              iVar8);
        iVar14 = *(int *)(iVar14 + 0x14);
        while( true ) {
          uVar9 = *(uint *)(unaff_EBP - 0x12d4);
          uVar12 = *(uint *)(unaff_EBP - 0x12cc);
          *(int *)(unaff_EBP - 0x12d8) = iVar14;
          puVar10 = FUN_00405fd0(pvVar20,uVar12,uVar9,iVar14,iVar8);
          if (((puVar10[3] & 0x1f) == 0) || ((puVar10[3] & 0x1f) == 2)) break;
          iVar14 = *(int *)(unaff_EBP - 0x12d8) + 1;
        }
        puVar10 = FUN_00405fd0(pvVar20,*(uint *)(unaff_EBP - 0x12cc),*(uint *)(unaff_EBP - 0x12d4),
                               *(int *)(unaff_EBP - 0x12d8) + -1,iVar8);
        uVar9 = *(uint *)(unaff_EBP - 0x12d4);
        uVar12 = *(uint *)(unaff_EBP - 0x12cc);
        *(uint *)(unaff_EBP - 0x12f0) = (byte)puVar10[3] & 0xffffff1f;
        fVar38 = FUN_004d19f0(pvVar20,uVar12,uVar9);
        *(float *)(unaff_EBP - 0x1330) = (float)fVar38;
        if (*(float *)(unaff_EBP - 0x1330) <= 0.0) {
          fVar38 = (float10)FUN_0052d990(pvVar20,*(uint *)(unaff_EBP - 0x12cc),
                                         *(uint *)(unaff_EBP - 0x12d4));
          *(float *)(unaff_EBP - 0x1330) = (float)fVar38;
          if (1.0 < *(float *)(unaff_EBP - 0x1330) || *(float *)(unaff_EBP - 0x1330) == 1.0) {
            pSVar17 = operator_new(0x10f0);
            if (pSVar17 == (Spawn *)0x0) {
              pSVar17 = (Spawn *)0x0;
            }
            else {
              pSVar17 = cube::Spawn::Spawn(pSVar17);
            }
            *(Spawn **)(unaff_EBP - 0x12e4) = pSVar17;
            *(Spawn **)(unaff_EBP - 0x131c) = pSVar17;
            uVar9 = *(uint *)(unaff_EBP - 0x12d8);
            uVar12 = ((int)uVar9 >> 0x1f) << 0x10 | uVar9 >> 0x10;
            *(uint *)(unaff_EBP - 0x1350) = uVar9 << 0x10;
            *(uint *)(unaff_EBP - 0x1558) = uVar9 << 0x10;
            uVar9 = *(uint *)(unaff_EBP - 0x12d4);
            *(uint *)(unaff_EBP - 0x1334) = uVar12;
            *(uint *)(unaff_EBP - 0x1554) = uVar12;
            uVar47 = FUN_0054a946();
            *(int *)(unaff_EBP - 0x1330) = (int)uVar47;
            uVar12 = *(uint *)(unaff_EBP - 0x12cc);
            lVar5 = uVar47 + CONCAT44(((int)uVar9 >> 0x1f) << 0x10 | uVar9 >> 0x10,uVar9 << 0x10);
            *(int *)(unaff_EBP - 0x224) = (int)lVar5;
            uVar13 = *(undefined4 *)(unaff_EBP - 0x1350);
            *(int *)(unaff_EBP - 0x133c) = (int)(uVar47 >> 0x20);
            uVar9 = *(uint *)(unaff_EBP - 0x1330);
            *(undefined4 *)(unaff_EBP - 0x21c) = uVar13;
            iVar31 = uVar9 + uVar12 * 0x10000;
            iVar8 = *(int *)(unaff_EBP - 0x133c);
            *(undefined4 *)(unaff_EBP - 0x218) = *(undefined4 *)(unaff_EBP - 0x1334);
            iVar14 = *(int *)(unaff_EBP - 0x12e4);
            iVar8 = iVar8 + (((int)uVar12 >> 0x1f) << 0x10 | uVar12 >> 0x10) +
                    (uint)CARRY4(uVar9,uVar12 * 0x10000);
            *(int *)(unaff_EBP - 0x228) = iVar8;
            *(int *)(unaff_EBP - 0x220) = (int)((ulonglong)lVar5 >> 0x20);
            *(int *)(unaff_EBP - 0x22c) = iVar31;
            *(int *)(iVar14 + 0x10) = iVar31;
            *(int *)(iVar14 + 0x14) = iVar8;
            *(undefined4 *)(iVar14 + 0x18) = *(undefined4 *)(unaff_EBP - 0x224);
            *(undefined4 *)(iVar14 + 0x1c) = *(undefined4 *)(unaff_EBP - 0x220);
            *(undefined4 *)(iVar14 + 0x20) = *(undefined4 *)(unaff_EBP - 0x21c);
            uVar13 = *(undefined4 *)(unaff_EBP - 0x218);
            *(int **)(unaff_EBP - 0x133c) = (int *)(iVar14 + 0x10);
            *(undefined4 *)(iVar14 + 0x24) = uVar13;
            iVar31 = rand();
            iVar8 = *(int *)(unaff_EBP - 0x12e4);
            pvVar20 = *(void **)(unaff_EBP - 0x12e0);
            iVar14 = *(int *)(unaff_EBP - 0x12d8);
            *(float *)(iVar8 + 0x54) = ((float)iVar31 * 360.0) / 32767.0;
            fVar42 = *(float *)(unaff_EBP - 0x12d4);
            fVar39 = *(float *)(unaff_EBP - 0x12cc);
            *(undefined4 *)(iVar8 + 0x34) = 1;
            pvVar18 = FUN_005290d0(pvVar20,fVar39,fVar42,iVar14,0);
            *(void **)(iVar8 + 0x2c) = pvVar18;
            iVar14 = *(int *)(unaff_EBP - 0x12f0);
            if (iVar14 == 0xc) {
              uVar9 = rand();
              uVar9 = uVar9 & 0x80000001;
              if ((int)uVar9 < 0) {
                uVar9 = (uVar9 - 1 | 0xfffffffe) + 1;
              }
              *(uint *)(iVar8 + 0x2c) = (-(uint)(uVar9 != 0) & 0xfffffffc) + 0x82;
LAB_0051f2a0:
              *(undefined4 *)(iVar8 + 0x28) = 6;
              iVar8 = *(int *)(unaff_EBP - 0x1308);
              FUN_004f2be0((void *)(iVar8 + 0x18),(undefined4 *)(unaff_EBP - 0x131c));
            }
            else {
              if (*(int *)(unaff_EBP - 0x12d8) < 0) {
LAB_0051f4d1:
                iVar8 = *(int *)(unaff_EBP - 0x1308);
              }
              else {
                if (((iVar14 != 4) && (iVar14 != 5)) && (iVar14 != 9)) {
                  if (iVar14 == 10) {
                    uVar9 = rand();
                    uVar9 = uVar9 & 0x80000003;
                    bVar37 = uVar9 == 0;
                    if ((int)uVar9 < 0) {
                      bVar37 = (uVar9 - 1 | 0xfffffffc) == 0xffffffff;
                    }
                    if (bVar37) {
                      uVar9 = rand();
                      uVar9 = uVar9 & 0x80000003;
                      if ((int)uVar9 < 0) {
                        uVar9 = (uVar9 - 1 | 0xfffffffc) + 1;
                      }
                      if (uVar9 == 1) {
                        *(undefined4 *)(iVar8 + 0x2c) = 0x7b;
                        *(undefined4 *)(iVar8 + 0xf58) = 0x41c80000;
                      }
                      else if (uVar9 == 2) {
                        *(undefined4 *)(iVar8 + 0x2c) = 0x7d;
                        *(undefined4 *)(iVar8 + 0xf58) = 0x41c80000;
                      }
                      else if (uVar9 == 3) {
                        *(undefined4 *)(iVar8 + 0x2c) = 0x7a;
                        *(undefined4 *)(iVar8 + 0xf58) = 0x41c80000;
                      }
                      else {
                        *(undefined4 *)(iVar8 + 0x2c) = 0x79;
                        *(undefined4 *)(iVar8 + 0xf58) = 0x41c80000;
                      }
                      goto LAB_0051f2a0;
                    }
                  }
                  goto LAB_0051f4d1;
                }
                iVar14 = rand();
                if (((iVar14 % 3 != 0) && (0.8 < *(float *)(unaff_EBP - 0x12d0))) &&
                   (*(float *)(unaff_EBP - 0x12dc) <= 0.1 && *(float *)(unaff_EBP - 0x12dc) != 0.1))
                {
                  uVar9 = rand();
                  uVar9 = uVar9 & 0x80000001;
                  if ((int)uVar9 < 0) {
                    uVar9 = (uVar9 - 1 | 0xfffffffe) + 1;
                  }
                  if (uVar9 == 0) {
                    *(undefined4 *)(iVar8 + 0x2c) = 0x7c;
                  }
                  else if (uVar9 == 1) {
                    *(undefined4 *)(iVar8 + 0x2c) = 0x80;
                  }
                  goto LAB_0051f2a0;
                }
                if (*(int *)(unaff_EBP - 0x12f0) != 4) goto LAB_0051f4d1;
                iVar14 = rand();
                iVar8 = *(int *)(unaff_EBP - 0x1308);
                if (iVar14 % 3 != 0) {
                  iVar14 = FUN_00406100(pvVar20,*(uint *)(unaff_EBP - 0x12cc),
                                        *(uint *)(unaff_EBP - 0x12d4),iVar8);
                  if (iVar14 == 0) {
                    fVar38 = (float10)FUN_004f8570(pvVar20,*(float *)(unaff_EBP - 0x12cc),
                                                   *(uint *)(unaff_EBP - 0x12d4));
                    *(float *)(unaff_EBP - 0x1330) = (float)fVar38;
                    fVar42 = *(float *)(unaff_EBP - 0x1330);
                  }
                  else {
                    fVar42 = *(float *)(iVar14 + 4);
                  }
                  if (0.1 < fVar42) {
                    uVar9 = rand();
                    uVar9 = uVar9 & 0x80000003;
                    if ((int)uVar9 < 0) {
                      uVar9 = (uVar9 - 1 | 0xfffffffc) + 1;
                    }
                    if (uVar9 == 1) {
                      iVar14 = *(int *)(unaff_EBP - 0x12e4);
                      *(undefined4 *)(iVar14 + 0x2c) = 0x7b;
                    }
                    else if (uVar9 == 2) {
                      iVar14 = *(int *)(unaff_EBP - 0x12e4);
                      *(undefined4 *)(iVar14 + 0x2c) = 0x7f;
                    }
                    else {
                      iVar14 = *(int *)(unaff_EBP - 0x12e4);
                      if (uVar9 == 3) {
                        *(undefined4 *)(iVar14 + 0x2c) = 0x7d;
                      }
                      else {
                        *(undefined4 *)(iVar14 + 0x2c) = 0x78;
                      }
                    }
                    *(undefined4 *)(iVar14 + 0xf58) = 0x41c80000;
                    *(undefined4 *)(iVar14 + 0x28) = 6;
                    FUN_004f2be0((void *)(iVar8 + 0x18),(undefined4 *)(unaff_EBP - 0x131c));
                    goto LAB_0051f981;
                  }
                }
              }
              iVar14 = *(int *)(unaff_EBP - 0x12e4);
              if ((*(int *)(iVar14 + 0x28) == 1) && ((*(ushort *)(iVar14 + 0x7a) & 0x1000) == 0)) {
                iVar31 = rand();
                iVar14 = *(int *)(unaff_EBP - 0x12e4);
                if (iVar31 % 100 == 0) {
                  *(ushort *)(iVar14 + 0x7a) = *(ushort *)(iVar14 + 0x7a) | 0x200;
                }
              }
              uVar48 = __alldiv(*(uint *)(iVar14 + 0x18),*(uint *)(iVar14 + 0x1c),0x10000,0);
              iVar14 = (int)uVar48 + ((int)uVar48 >> 0x1f & 0xffU);
              uVar9 = (int)((iVar14 >> 8) + (iVar14 >> 0x1f & 7U)) >> 3;
              uVar48 = __alldiv(**(uint **)(unaff_EBP - 0x133c),(*(uint **)(unaff_EBP - 0x133c))[1],
                                0x10000,0);
              iVar14 = (int)uVar48 + ((int)uVar48 >> 0x1f & 0xffU);
              iVar31 = FUN_004286f0(pvVar20,(int)((iVar14 >> 8) + (iVar14 >> 0x1f & 7U)) >> 3,uVar9)
              ;
              iVar14 = *(int *)(unaff_EBP - 0x12e4);
              *(int *)(unaff_EBP - 0x12d0) = iVar31;
              if (*(int *)(iVar14 + 0x28) != 6) {
                FUN_0040f0a0(*(undefined4 *)(iVar14 + 0x2c),(undefined4 *)(unaff_EBP - 0x145c),
                             (undefined4 *)(unaff_EBP - 0x1458));
                iVar31 = rand();
                puVar25 = *(uint **)(unaff_EBP - 0x12d0);
                *(int *)(iVar14 + 0x34) =
                     iVar31 % ((*(int *)(unaff_EBP - 0x1458) - *(int *)(unaff_EBP - 0x145c)) + 1) +
                     *(int *)(unaff_EBP - 0x145c);
                if (((puVar25 != (uint *)0x0) && (*(int *)(unaff_EBP - 0x145c) <= (int)puVar25[9]))
                   && ((int)puVar25[9] <= *(int *)(unaff_EBP - 0x1458))) {
                  fVar38 = FUN_0052c820(puVar25,(uint *)(iVar14 + 0x10),(uint *)(iVar14 + 0x18));
                  *(float *)(unaff_EBP - 0x1330) = (float)fVar38;
                  fVar42 = 1.0 - *(float *)(unaff_EBP - 0x1330);
                  if ((0.0 < fVar42) && (0.0 < fVar42 * fVar42)) {
                    *(undefined1 *)(iVar14 + 0x58) =
                         *(undefined1 *)(*(int *)(unaff_EBP - 0x12d0) + 0x28);
                  }
                }
              }
              if (*(int *)(iVar14 + 0x28) == 1) {
                *(undefined4 *)(iVar14 + 0x40) = 21600000;
                *(undefined4 *)(iVar14 + 0x44) = 86400000;
              }
              *(void **)(unaff_EBP - 0x133c) = (void *)(iVar8 + 0x18);
              FUN_004f2be0((void *)(iVar8 + 0x18),(undefined4 *)(unaff_EBP - 0x131c));
              FUN_0040efc0(*(undefined4 *)(*(int *)(unaff_EBP - 0x131c) + 0x2c),
                           (undefined4 *)(unaff_EBP - 0x14a4),(undefined4 *)(unaff_EBP - 0x14bc));
              iVar34 = rand();
              iVar14 = *(int *)(unaff_EBP - 0x14a4);
              iVar31 = *(int *)(unaff_EBP - 0x14bc);
              iVar16 = 0;
              *(undefined4 *)(unaff_EBP - 0x12fc) = 0;
              iVar14 = iVar14 + -1 + iVar34 % ((iVar31 - iVar14) + 1);
              *(int *)(unaff_EBP - 0x12d0) = iVar14;
              if (iVar14 < 1) goto LAB_0051f97b;
              while( true ) {
                pSVar17 = operator_new(0x10f0);
                if (pSVar17 == (Spawn *)0x0) {
                  pSVar17 = (Spawn *)0x0;
                }
                else {
                  pSVar17 = cube::Spawn::Spawn(pSVar17);
                }
                (pSVar17->Spawn_data).offset_0x24 = 1;
                fVar42 = ((float)iVar16 * 6.2831855) / (float)iVar14;
                *(Spawn **)(unaff_EBP - 0x1384) = pSVar17;
                *(undefined8 *)(unaff_EBP - 0x15bc) = 0;
                dVar40 = (double)fVar42;
                *(Spawn **)(unaff_EBP - 0x12e8) = pSVar17;
                *(float *)(unaff_EBP - 0x1330) = fVar42;
                libm_sse2_sin_precise();
                *(float *)(unaff_EBP - 0x1328) = (float)dVar40 * 8.0 * 65536.0;
                uVar47 = FUN_0054a946();
                dVar40 = (double)*(float *)(unaff_EBP - 0x1330);
                *(ulonglong *)(unaff_EBP - 0x148c) = uVar47;
                libm_sse2_cos_precise();
                *(float *)(unaff_EBP - 0x1338) = (float)dVar40 * 8.0 * 65536.0;
                uVar49 = FUN_0054a946();
                uVar13 = (undefined4)(uVar49 >> 0x20);
                uVar35 = (uint)uVar49;
                *(int *)(unaff_EBP - 0x454) = (int)uVar47;
                *(undefined4 *)(unaff_EBP - 0x14fc) = uVar13;
                *(undefined4 *)(unaff_EBP - 0x458) = uVar13;
                *(undefined4 *)(unaff_EBP - 0x450) = *(undefined4 *)(unaff_EBP - 0x1488);
                iVar8 = *(int *)(unaff_EBP - 0x131c);
                *(uint *)(unaff_EBP - 0x1500) = uVar35;
                *(uint *)(unaff_EBP - 0x45c) = uVar35;
                *(undefined8 *)(unaff_EBP - 0x44c) = 0;
                uVar13 = *(undefined4 *)(iVar8 + 0x10);
                *(undefined4 *)(unaff_EBP - 0x19c) = uVar13;
                *(undefined4 *)(unaff_EBP - 0x1330) = uVar13;
                iVar8 = *(int *)(unaff_EBP - 0x131c);
                iVar14 = *(int *)(iVar8 + 0x14);
                *(int *)(unaff_EBP - 0x198) = iVar14;
                uVar9 = *(uint *)(iVar8 + 0x18);
                *(uint *)(unaff_EBP - 0x194) = uVar9;
                iVar31 = *(int *)(iVar8 + 0x1c);
                *(int *)(unaff_EBP - 400) = iVar31;
                *(undefined4 *)(unaff_EBP - 0x18c) = *(undefined4 *)(iVar8 + 0x20);
                *(undefined4 *)(unaff_EBP - 0x188) =
                     *(undefined4 *)(*(int *)(unaff_EBP - 0x131c) + 0x24);
                uVar12 = *(uint *)(unaff_EBP - 0x1330);
                iVar34 = uVar12 + uVar35;
                iVar8 = *(int *)(unaff_EBP - 0x14fc);
                uVar33 = *(uint *)(unaff_EBP - 0x148c);
                uVar32 = *(uint *)(unaff_EBP - 0x148c);
                *(int *)(unaff_EBP - 0x19c) = iVar34;
                iVar16 = *(int *)(unaff_EBP - 0x1488);
                *(uint *)(unaff_EBP - 0x198) = iVar14 + iVar8 + (uint)CARRY4(uVar12,uVar35);
                *(uint *)(unaff_EBP - 400) = iVar31 + iVar16 + (uint)CARRY4(uVar9,uVar33);
                iVar8 = *(int *)(unaff_EBP - 0x1384);
                *(uint *)(unaff_EBP - 0x194) = uVar9 + uVar32;
                *(int *)(iVar8 + 0x10) = iVar34;
                *(undefined4 *)(iVar8 + 0x14) = *(undefined4 *)(unaff_EBP - 0x198);
                *(undefined4 *)(iVar8 + 0x18) = *(undefined4 *)(unaff_EBP - 0x194);
                *(undefined4 *)(iVar8 + 0x1c) = *(undefined4 *)(unaff_EBP - 400);
                *(undefined4 *)(iVar8 + 0x20) = *(undefined4 *)(unaff_EBP - 0x18c);
                uVar9 = *(uint *)(unaff_EBP - 0x188);
                *(uint *)(iVar8 + 0x24) = uVar9;
                __alldiv(*(uint *)(iVar8 + 0x20),uVar9,0x10000,0);
                __alldiv(*(uint *)(iVar8 + 0x18),*(uint *)(iVar8 + 0x1c),0x10000,0);
                __alldiv(*(uint *)(*(int *)(unaff_EBP - 0x1384) + 0x10),
                         *(uint *)(*(int *)(unaff_EBP - 0x1384) + 0x14),0x10000,0);
                pvVar20 = *(void **)(unaff_EBP - 0x12e0);
                uVar9 = FUN_0052bfa0();
                iVar8 = *(int *)(unaff_EBP - 0x1384);
                *(uint *)(iVar8 + 0x2c) = uVar9;
                *(ushort *)(iVar8 + 0x7a) = *(ushort *)(iVar8 + 0x7a) & 0xfdff;
                if (*(int *)(iVar8 + 0x28) != 6) {
                  FUN_0040f0a0(*(undefined4 *)(iVar8 + 0x2c),(undefined4 *)(unaff_EBP - 0x1490),
                               (undefined4 *)(unaff_EBP - 0x14b4));
                  iVar31 = rand();
                  iVar14 = *(int *)(unaff_EBP - 0x131c);
                  *(int *)(iVar8 + 0x34) =
                       iVar31 % ((*(int *)(unaff_EBP - 0x14b4) - *(int *)(unaff_EBP - 0x1490)) + 1)
                       + *(int *)(unaff_EBP - 0x1490);
                  *(undefined1 *)(iVar8 + 0x58) = *(undefined1 *)(iVar14 + 0x58);
                }
                iVar14 = rand();
                pvVar18 = *(void **)(unaff_EBP - 0x133c);
                *(float *)(iVar8 + 0x54) = ((float)iVar14 * 360.0) / 32767.0;
                FUN_004f2be0(pvVar18,(undefined4 *)(unaff_EBP - 0x12e8));
                iVar14 = *(int *)(unaff_EBP - 0x12d0);
                iVar8 = *(int *)(unaff_EBP - 0x12fc) + 1;
                *(int *)(unaff_EBP - 0x12fc) = iVar8;
                if (iVar14 <= iVar8) break;
                iVar16 = *(int *)(unaff_EBP - 0x12fc);
              }
              iVar8 = *(int *)(unaff_EBP - 0x1308);
            }
          }
        }
      }
      else {
        uVar9 = rand();
        uVar9 = uVar9 & 0x80000003;
        bVar37 = uVar9 == 0;
        if ((int)uVar9 < 0) {
          bVar37 = (uVar9 - 1 | 0xfffffffc) == 0xffffffff;
        }
        if (!bVar37) goto LAB_0051eed2;
      }
    }
LAB_0051f981:
    iVar14 = *(int *)(unaff_EBP - 0x1310) + 1;
    *(int *)(unaff_EBP - 0x1310) = iVar14;
    if (2 < iVar14) break;
    iVar8 = *(int *)(unaff_EBP - 0x1310);
  } while( true );
  iVar14 = *(int *)(unaff_EBP - 0x1304) + 1;
  *(int *)(unaff_EBP - 0x1304) = iVar14;
  if (2 < iVar14) {
    iVar14 = *(int *)(unaff_EBP - 0x140c);
    *(undefined1 *)(unaff_EBP - 4) = 3;
    if (iVar14 != 0) {
      std::_Container_base0::_Orphan_all((_Container_base0 *)(unaff_EBP - 0x140c));
      operator_delete(*(void **)(unaff_EBP - 0x140c));
      *(undefined4 *)(unaff_EBP - 0x140c) = 0;
      *(undefined4 *)(unaff_EBP - 0x1408) = 0;
      *(undefined4 *)(unaff_EBP - 0x1404) = 0;
    }
    uVar9 = *(uint *)(unaff_EBP - 0x1358);
    *(uint *)(unaff_EBP - 0x12c8) = uVar9;
    if (*(int *)(unaff_EBP - 0x1370) <= (int)uVar9) goto LAB_005203ce;
    uVar12 = *(uint *)(unaff_EBP - 0x132c);
    *(undefined4 *)(unaff_EBP - 0x141c) = 0x1d6;
    iVar14 = uVar12 + 0x100;
    *(undefined4 *)(unaff_EBP - 0x13f4) = 0x96;
    *(undefined4 *)(unaff_EBP - 0x1330) = 300;
    do {
      *(uint *)(unaff_EBP - 0x1300) = uVar12;
      if ((int)uVar12 < iVar14) {
        do {
          iVar14 = FUN_00406100(pvVar20,uVar9,uVar12,iVar8);
          *(int *)(unaff_EBP - 0x12ec) = iVar14;
          *(undefined4 *)(unaff_EBP - 0x12d8) = 0;
          iVar14 = FUN_00406250(iVar14);
          if (0 < iVar14) {
            do {
              iVar31 = FUN_00406250(*(int *)(unaff_EBP - 0x12ec));
              iVar14 = *(int *)(unaff_EBP - 0x12d8);
              if (iVar14 < iVar31 + -1) {
                pvVar18 = *(void **)(unaff_EBP - 0x12ec);
                *(int *)(unaff_EBP - 0x12dc) = iVar14 + 1;
                puVar10 = FUN_004d23f0(pvVar18,iVar14 + 1);
                uVar13 = FUN_004061f0((int)puVar10);
                if ((char)uVar13 == '\0') {
                  iVar14 = *(int *)(unaff_EBP - 0x12d8);
                  goto LAB_0051fac0;
                }
              }
              else {
LAB_0051fac0:
                puVar10 = FUN_004d23f0(*(void **)(unaff_EBP - 0x12ec),iVar14);
                bVar7 = FUN_00406280((int)puVar10);
                pvVar20 = *(void **)(unaff_EBP - 0x12ec);
                *(uint *)(unaff_EBP - 0x131c) = CONCAT31(extraout_var,bVar7);
                iVar14 = *(int *)(unaff_EBP - 0x12d8) + 1;
                *(int *)(unaff_EBP - 0x12dc) = iVar14;
                puVar10 = FUN_004d23f0(pvVar20,iVar14);
                bVar7 = FUN_00406280((int)puVar10);
                iVar14 = FUN_004061d0(*(int *)(unaff_EBP - 0x12ec));
                *(int *)(unaff_EBP - 0x12d4) = iVar14 + *(int *)(unaff_EBP - 0x12d8) + 1;
                iVar14 = *(int *)(unaff_EBP - 0x131c);
                if (CONCAT31(extraout_var_00,bVar7) == 0) {
                  if (iVar14 == 0xb) {
                    pvVar20 = *(void **)(unaff_EBP - 0x12e0);
                    fVar38 = FUN_004d19f0(pvVar20,*(uint *)(unaff_EBP - 0x12c8),
                                          *(uint *)(unaff_EBP - 0x1300));
                    *(float *)(unaff_EBP - 0x12e8) = (float)fVar38;
                    if ((0.75 < *(float *)(unaff_EBP - 0x12e8)) &&
                       ((*(int *)(unaff_EBP - 0x1300) * 0x5a + *(int *)(unaff_EBP - 0x12c8)) %
                        *(int *)(unaff_EBP - 0x141c) == 0)) {
                      uVar9 = rand();
                      uVar9 = uVar9 & 0x8000000f;
                      if ((int)uVar9 < 0) {
                        uVar9 = (uVar9 - 1 | 0xfffffff0) + 1;
                      }
                      if (uVar9 == 0) {
                        iVar14 = 0;
                        *(undefined4 *)(unaff_EBP - 0x12d0) = 0;
                        do {
                          puVar10 = FUN_00405fd0(pvVar20,*(uint *)(unaff_EBP - 0x12c8),
                                                 *(uint *)(unaff_EBP - 0x1300),
                                                 iVar14 + *(int *)(unaff_EBP - 0x12d4),iVar8);
                          uVar13 = FUN_004061f0((int)puVar10);
                          if ((char)uVar13 != '\0') goto LAB_00520371;
                          iVar14 = *(int *)(unaff_EBP - 0x12d0) + 1;
                          *(int *)(unaff_EBP - 0x12d0) = iVar14;
                        } while (iVar14 < 7);
                        FUN_004c84b0(unaff_EBP - 0x1044);
                        uVar9 = *(uint *)(unaff_EBP - 0x1300);
                        uVar12 = *(uint *)(unaff_EBP - 0x12c8);
                        *(undefined1 *)(unaff_EBP - 4) = 8;
                        fVar38 = FUN_004fc140(pvVar20,uVar12,uVar9,iVar8);
                        *(float *)(unaff_EBP - 0x12e8) = (float)fVar38;
                        if (*(float *)(unaff_EBP - 0x12e8) <= 0.8) {
                          uVar50 = 0x40000000;
                          *(undefined4 *)(unaff_EBP - 0x1044) = 0x32;
                          uVar13 = 0x40000000;
                          pvVar18 = (void *)(unaff_EBP - 0x7a0);
                        }
                        else {
                          uVar50 = 0x3f800000;
                          *(undefined4 *)(unaff_EBP - 0x1044) = 0x33;
                          uVar13 = 0x3f800000;
                          pvVar18 = (void *)(unaff_EBP - 0x788);
                        }
                        puVar19 = FUN_00401080(pvVar18,uVar13,uVar50,0x41000000);
                        uVar52 = 0x51fc72;
                        FUN_00401060((void *)(unaff_EBP - 0x1020),puVar19);
                        uVar9 = *(uint *)(unaff_EBP - 0x12d4);
                        uVar50 = 0x51fc82;
                        FUN_004cde40(&stack0xfffffff8,uVar9);
                        uVar12 = *(uint *)(unaff_EBP - 0x1300);
                        uVar13 = 0x51fc92;
                        FUN_004cde40(&stack0xfffffff0,uVar12);
                        FUN_004cde40(&stack0xffffffe8,*(uint *)(unaff_EBP - 0x12c8));
                        puVar19 = FUN_00406380((void *)(unaff_EBP - 0xafc),uVar13,uVar12,uVar50,
                                               uVar9,uVar52,puVar19);
                        FUN_00402a40((void *)(unaff_EBP - 0x103c),puVar19);
                        uVar9 = rand();
                        uVar9 = uVar9 & 0x80000003;
                        if ((int)uVar9 < 0) {
                          uVar9 = (uVar9 - 1 | 0xfffffffc) + 1;
                        }
                        *(uint *)(unaff_EBP - 0x1024) = uVar9;
                        FUN_004d6670((void *)(iVar8 + 0xc),(void **)(unaff_EBP - 0x1044));
                        *(undefined1 *)(unaff_EBP - 4) = 3;
                        FUN_004cd8f0(unaff_EBP - 0x1044);
                      }
                    }
                  }
                  else if (iVar14 == 3) {
                    pvVar20 = *(void **)(unaff_EBP - 0x12e0);
                    fVar38 = FUN_004fc140(pvVar20,*(uint *)(unaff_EBP - 0x12c8),
                                          *(uint *)(unaff_EBP - 0x1300),iVar8);
                    *(float *)(unaff_EBP - 0x12e8) = (float)fVar38;
                    if (0.2 < *(float *)(unaff_EBP - 0x12e8)) {
                      dVar40 = (double)((float)*(int *)(unaff_EBP - 0x12c8) * 0.05 + 9843.0);
                      fVar38 = FUN_004d5d30(SUB84(dVar40,0),(int)((ulonglong)dVar40 >> 0x20),
                                            (double)((float)*(int *)(unaff_EBP - 0x1300) * 0.05 +
                                                    8437.0));
                      fVar38 = FUN_00401ca0((float)fVar38);
                      *(float *)(unaff_EBP - 0x12e8) = (float)fVar38;
                      if (0.5 < *(float *)(unaff_EBP - 0x12e8)) {
                        uVar9 = rand();
                        uVar9 = uVar9 & 0x80000007;
                        bVar37 = uVar9 == 0;
                        if ((int)uVar9 < 0) {
                          bVar37 = (uVar9 - 1 | 0xfffffff8) == 0xffffffff;
                        }
                        if (bVar37) {
                          FUN_004c83b0(unaff_EBP - 0x4e8);
                          piVar22 = (int *)(unaff_EBP - 0x160c);
                          piVar21 = FUN_004cde40((void *)(unaff_EBP - 0x171c),
                                                 *(uint *)(unaff_EBP - 0x12c8));
                          puVar19 = (undefined4 *)FUN_004ce290(piVar21,piVar22);
                          pvVar18 = (void *)FUN_004e2320((void *)(unaff_EBP - 0x4e0),0);
                          FUN_004cde20(pvVar18,puVar19);
                          piVar22 = (int *)(unaff_EBP - 0x161c);
                          piVar21 = FUN_004cde40((void *)(unaff_EBP - 0x162c),
                                                 *(uint *)(unaff_EBP - 0x1300));
                          puVar19 = (undefined4 *)FUN_004ce290(piVar21,piVar22);
                          pvVar18 = (void *)FUN_004e2320((void *)(unaff_EBP - 0x4e0),1);
                          FUN_004cde20(pvVar18,puVar19);
                          uVar9 = *(uint *)(unaff_EBP - 0x12d4);
                          pvVar18 = (void *)FUN_004e2320((void *)(unaff_EBP - 0x4e0),2);
                          FUN_004cde40(pvVar18,uVar9);
                          iVar14 = rand();
                          *(undefined4 *)(unaff_EBP - 0x4c8) = 0x3db851ec;
                          *(float *)(unaff_EBP - 0x4c4) = ((float)iVar14 * 360.0) / 32767.0;
                          *(undefined4 *)(unaff_EBP - 0x4e8) = 0x16;
                          *(undefined4 *)(unaff_EBP - 0x4b0) = 4;
                          FUN_00528450((void *)(iVar8 + 4),(undefined4 *)(unaff_EBP - 0x4e8));
                        }
                      }
                    }
                  }
                  else {
                    if (iVar14 != 2) goto LAB_005200d6;
                    pvVar20 = *(void **)(unaff_EBP - 0x12e0);
                    fVar38 = FUN_004fc140(pvVar20,*(uint *)(unaff_EBP - 0x12c8),
                                          *(uint *)(unaff_EBP - 0x1300),iVar8);
                    *(float *)(unaff_EBP - 0x12e8) = (float)fVar38;
                    if ((0.2 < *(float *)(unaff_EBP - 0x12e8)) && (0 < *(int *)(unaff_EBP - 0x12d4))
                       ) {
                      dVar40 = (double)((float)*(int *)(unaff_EBP - 0x12c8) * 0.05 + 24234.0);
                      fVar38 = FUN_004d5d30(SUB84(dVar40,0),(int)((ulonglong)dVar40 >> 0x20),
                                            (double)((float)*(int *)(unaff_EBP - 0x1300) * 0.05 +
                                                    53565.0));
                      fVar38 = FUN_00401ca0((float)fVar38);
                      *(float *)(unaff_EBP - 0x12e8) = (float)fVar38;
                      if ((0.7 < *(float *)(unaff_EBP - 0x12e8)) &&
                         (iVar14 = rand(), iVar14 % 10 == 0)) {
                        FUN_004c83b0(unaff_EBP - 0x568);
                        piVar22 = (int *)(unaff_EBP - 0x16d4);
                        piVar21 = FUN_004cde40((void *)(unaff_EBP - 0x163c),
                                               *(uint *)(unaff_EBP - 0x12c8));
                        puVar19 = (undefined4 *)FUN_004ce290(piVar21,piVar22);
                        pvVar18 = (void *)FUN_004e2320((void *)(unaff_EBP - 0x560),0);
                        FUN_004cde20(pvVar18,puVar19);
                        piVar22 = (int *)(unaff_EBP - 0x164c);
                        piVar21 = FUN_004cde40((void *)(unaff_EBP - 0x175c),
                                               *(uint *)(unaff_EBP - 0x1300));
                        puVar19 = (undefined4 *)FUN_004ce290(piVar21,piVar22);
                        pvVar18 = (void *)FUN_004e2320((void *)(unaff_EBP - 0x560),1);
                        FUN_004cde20(pvVar18,puVar19);
                        piVar22 = (int *)(unaff_EBP - 0x16ec);
                        piVar21 = FUN_004cde40((void *)(unaff_EBP - 0x1674),
                                               *(uint *)(unaff_EBP - 0x12d4));
                        puVar19 = (undefined4 *)FUN_004e0700(piVar21,piVar22);
                        pvVar18 = (void *)FUN_004e2320((void *)(unaff_EBP - 0x560),2);
                        FUN_004cde20(pvVar18,puVar19);
                        iVar14 = rand();
                        *(undefined4 *)(unaff_EBP - 0x548) = 0x3db851ec;
                        *(float *)(unaff_EBP - 0x544) = ((float)iVar14 * 360.0) / 32767.0;
                        uVar9 = rand();
                        uVar9 = uVar9 & 0x80000001;
                        if ((int)uVar9 < 0) {
                          uVar9 = (uVar9 - 1 | 0xfffffffe) + 1;
                        }
                        *(uint *)(unaff_EBP - 0x568) = uVar9 + 0x1f;
                        FUN_00528450((void *)(iVar8 + 4),(undefined4 *)(unaff_EBP - 0x568));
                      }
                    }
                  }
                }
                else {
LAB_005200d6:
                  if (((iVar14 == 4) || (iVar14 == 9)) || ((iVar14 == 0xc || (iVar14 == 10)))) {
                    uVar9 = *(uint *)(unaff_EBP - 0x1300);
                    iVar14 = *(int *)(unaff_EBP - 0x12c8);
                    *(float *)(unaff_EBP - 0x12fc) = (float)(int)uVar9;
                    *(float *)(unaff_EBP - 0x1310) = (float)iVar14;
                    dVar40 = (double)((float)iVar14 * 0.05 + 9843.0);
                    fVar38 = FUN_004d5d30(SUB84(dVar40,0),(int)((ulonglong)dVar40 >> 0x20),
                                          (double)((float)(int)uVar9 * 0.05 + 8437.0));
                    fVar38 = FUN_00401ca0((float)fVar38);
                    *(float *)(unaff_EBP - 0x12e8) = (float)fVar38;
                    if (0.6 < *(float *)(unaff_EBP - 0x12e8)) {
                      uVar12 = rand();
                      uVar12 = uVar12 & 0x80000007;
                      bVar37 = uVar12 == 0;
                      if ((int)uVar12 < 0) {
                        bVar37 = (uVar12 - 1 | 0xfffffff8) == 0xffffffff;
                      }
                      if (bVar37) {
                        if (*(int *)(unaff_EBP - 0x12d4) < 1) {
                          if (-5 < *(int *)(unaff_EBP - 0x12d4)) goto LAB_0052036b;
                          FUN_004c83b0(unaff_EBP - 0x378);
                          piVar22 = (int *)(unaff_EBP - 0x172c);
                          piVar21 = FUN_004cde40((void *)(unaff_EBP - 0x1684),
                                                 *(uint *)(unaff_EBP - 0x12c8));
                          puVar19 = (undefined4 *)FUN_004ce290(piVar21,piVar22);
                          pvVar20 = (void *)FUN_004e2320((void *)(unaff_EBP - 0x370),0);
                          FUN_004cde20(pvVar20,puVar19);
                          piVar22 = (int *)(unaff_EBP - 0x16fc);
                          piVar21 = FUN_004cde40((void *)(unaff_EBP - 0x1694),uVar9);
                          puVar19 = (undefined4 *)FUN_004ce290(piVar21,piVar22);
                          pvVar20 = (void *)FUN_004e2320((void *)(unaff_EBP - 0x370),1);
                          FUN_004cde20(pvVar20,puVar19);
                          uVar12 = *(uint *)(unaff_EBP - 0x12d4);
                          pvVar20 = (void *)FUN_004e2320((void *)(unaff_EBP - 0x370),2);
                          FUN_004cde40(pvVar20,uVar12);
                          uVar12 = rand();
                          uVar12 = uVar12 & 0x80000003;
                          if ((int)uVar12 < 0) {
                            uVar12 = (uVar12 - 1 | 0xfffffffc) + 1;
                          }
                          *(float *)(unaff_EBP - 0x354) = (float)(int)(uVar12 * 0x5a);
                          *(undefined4 *)(unaff_EBP - 0x358) = 0x3dcccccd;
                          dVar40 = (double)*(int *)(unaff_EBP - 0x12c8) * 0.01 + 9843.0;
                          fVar38 = FUN_004d5d30(SUB84(dVar40,0),(int)((ulonglong)dVar40 >> 0x20),
                                                (double)(int)uVar9 * 0.01 + 8437.0);
                          *(float *)(unaff_EBP - 0x12e8) = (float)fVar38;
                          if (*(float *)(unaff_EBP - 0x12e8) <= 0.0) {
                            *(undefined4 *)(unaff_EBP - 0x378) = 7;
LAB_00520322:
                            *(undefined4 *)(unaff_EBP - 0x358) = 0x3dcccccd;
LAB_0052032c:
                            *(uint *)(unaff_EBP - 0x340) = *(uint *)(unaff_EBP - 0x340) | 4;
                          }
                          else {
                            uVar9 = rand();
                            uVar9 = uVar9 & 0x80000001;
                            if ((int)uVar9 < 0) {
                              uVar9 = (uVar9 - 1 | 0xfffffffe) + 1;
                            }
                            iVar14 = uVar9 + 5;
                            *(int *)(unaff_EBP - 0x378) = iVar14;
                            if (iVar14 == 5) {
                              *(undefined4 *)(unaff_EBP - 0x358) = 0x3d99999a;
                              goto LAB_0052032c;
                            }
                            if (iVar14 == 7) goto LAB_00520322;
                          }
                          iVar14 = rand();
                          puVar19 = (undefined4 *)(unaff_EBP - 0x378);
                          *(float *)(unaff_EBP - 0x358) =
                               ((float)iVar14 / 32767.0 + 1.0) * *(float *)(unaff_EBP - 0x358);
                        }
                        else {
                          if (*(int *)(unaff_EBP - 0x131c) != 0xc) {
                            if (*(int *)(unaff_EBP - 0x131c) == 10) {
                              pvVar20 = *(void **)(unaff_EBP - 0x12e0);
                              iVar14 = 10;
                            }
                            else {
                              pvVar20 = *(void **)(unaff_EBP - 0x12e0);
                              fVar38 = FUN_004fc140(pvVar20,*(uint *)(unaff_EBP - 0x12c8),uVar9,
                                                    iVar8);
                              *(float *)(unaff_EBP - 0x12e8) = (float)fVar38;
                              if (*(float *)(unaff_EBP - 0x12e8) <= 0.75) {
                                FUN_004c83b0(unaff_EBP - 0x42c);
                                piVar22 = (int *)(unaff_EBP - 0x166c);
                                piVar21 = FUN_004cde40((void *)(unaff_EBP - 0x167c),
                                                       *(uint *)(unaff_EBP - 0x12c8));
                                puVar19 = (undefined4 *)FUN_004ce290(piVar21,piVar22);
                                pvVar18 = (void *)FUN_004e2320((void *)(unaff_EBP - 0x424),0);
                                FUN_004cde20(pvVar18,puVar19);
                                piVar22 = (int *)(unaff_EBP - 0x168c);
                                piVar21 = FUN_004cde40((void *)(unaff_EBP - 0x169c),
                                                       *(uint *)(unaff_EBP - 0x1300));
                                puVar19 = (undefined4 *)FUN_004ce290(piVar21,piVar22);
                                pvVar18 = (void *)FUN_004e2320((void *)(unaff_EBP - 0x424),1);
                                FUN_004cde20(pvVar18,puVar19);
                                uVar9 = *(uint *)(unaff_EBP - 0x12d4);
                                pvVar18 = (void *)FUN_004e2320((void *)(unaff_EBP - 0x424),2);
                                FUN_004cde40(pvVar18,uVar9);
                                uVar9 = rand();
                                uVar9 = uVar9 & 0x80000003;
                                if ((int)uVar9 < 0) {
                                  uVar9 = (uVar9 - 1 | 0xfffffffc) + 1;
                                }
                                uVar12 = *(uint *)(unaff_EBP - 0x1300);
                                fVar42 = *(float *)(unaff_EBP - 0x12c8);
                                *(float *)(unaff_EBP - 0x408) = (float)(int)(uVar9 * 0x5a);
                                *(undefined4 *)(unaff_EBP - 0x40c) = 0x3d99999a;
                                fVar38 = FUN_004fc100(pvVar20,fVar42,uVar12,iVar8);
                                iVar14 = *(int *)(unaff_EBP - 0x12c8);
                                *(float *)(unaff_EBP - 0x12e8) = (float)fVar38;
                                dVar41 = (double)iVar14 * 0.01;
                                dVar40 = (double)*(int *)(unaff_EBP - 0x1300) * 0.01;
                                if (*(float *)(unaff_EBP - 0x12e8) <= 0.5) {
                                  *(double *)(unaff_EBP - 0x40) = dVar40;
                                  *(double *)(unaff_EBP - 0x48) = dVar41;
                                  fVar38 = FUN_004d5d30(SUB84(dVar41 + 9843.0,0),
                                                        (int)((ulonglong)(dVar41 + 9843.0) >> 0x20),
                                                        dVar40 + 8437.0);
                                  *(float *)(unaff_EBP - 0x12e8) = (float)fVar38;
                                  if (*(float *)(unaff_EBP - 0x12e8) <= 0.0) {
                                    dVar40 = *(double *)(unaff_EBP - 0x48) + 34234.0;
                                    fVar38 = FUN_004d5d30(SUB84(dVar40,0),
                                                          (int)((ulonglong)dVar40 >> 0x20),
                                                          *(double *)(unaff_EBP - 0x40) + 234234.0);
                                    *(float *)(unaff_EBP - 0x12e8) = (float)fVar38;
                                    fVar42 = *(float *)(unaff_EBP - 0x12e8);
                                    goto LAB_00520e98;
                                  }
                                  dVar40 = (double)(*(float *)(unaff_EBP - 0x1310) * 0.01 + 34234.0)
                                  ;
                                  fVar38 = FUN_004d5d30(SUB84(dVar40,0),
                                                        (int)((ulonglong)dVar40 >> 0x20),
                                                        (double)(*(float *)(unaff_EBP - 0x12fc) *
                                                                 0.01 + 234234.0));
                                  *(float *)(unaff_EBP - 0x12e8) = (float)fVar38;
                                  uVar9 = (*(float *)(unaff_EBP - 0x12e8) <= 0.0) + 2;
                                }
                                else {
                                  *(double *)(unaff_EBP - 0x40) = dVar40;
                                  *(double *)(unaff_EBP - 0x48) = dVar41;
                                  fVar38 = FUN_004d5d30(SUB84(dVar41 + 9843.0,0),
                                                        (int)((ulonglong)(dVar41 + 9843.0) >> 0x20),
                                                        dVar40 + 8437.0);
                                  *(float *)(unaff_EBP - 0x12e8) = (float)fVar38;
                                  if (*(float *)(unaff_EBP - 0x12e8) <= 0.0) {
                                    dVar40 = *(double *)(unaff_EBP - 0x48) + 34234.0;
                                    fVar38 = FUN_004d5d30(SUB84(dVar40,0),
                                                          (int)((ulonglong)dVar40 >> 0x20),
                                                          *(double *)(unaff_EBP - 0x40) + 234234.0);
                                    *(float *)(unaff_EBP - 0x12e8) = (float)fVar38;
                                    fVar42 = *(float *)(unaff_EBP - 0x12e8);
LAB_00520e98:
                                    uVar9 = (uint)(fVar42 <= 0.0);
                                  }
                                  else {
                                    dVar40 = (double)(*(float *)(unaff_EBP - 0x1310) * 0.01 +
                                                     34234.0);
                                    fVar38 = FUN_004d5d30(SUB84(dVar40,0),
                                                          (int)((ulonglong)dVar40 >> 0x20),
                                                          (double)(*(float *)(unaff_EBP - 0x12fc) *
                                                                   0.01 + 234234.0));
                                    *(float *)(unaff_EBP - 0x12e8) = (float)fVar38;
                                    uVar9 = (uint)(0.0 < *(float *)(unaff_EBP - 0x12e8)) * 8 + 4;
                                  }
                                }
                                *(uint *)(unaff_EBP - 0x42c) = uVar9;
                                if (((((uVar9 == 2) || (uVar9 == 3)) || (uVar9 == 4)) ||
                                    (uVar9 == 0xc)) &&
                                   (*(uint *)(unaff_EBP - 0x3f4) = *(uint *)(unaff_EBP - 0x3f4) | 4,
                                   uVar9 == 0xc)) {
                                  iVar14 = rand();
                                  uVar9 = *(uint *)(unaff_EBP - 0x42c);
                                  *(float *)(unaff_EBP - 0x40c) =
                                       ((float)iVar14 * 0.02) / 32767.0 + 0.1;
                                }
                                if (((*(int *)(unaff_EBP - 0x131c) == 4) || (uVar9 == 2)) ||
                                   ((uVar9 == 3 || (uVar9 == 4)))) {
                                  puVar19 = (undefined4 *)(unaff_EBP - 0x42c);
                                  goto LAB_00520922;
                                }
                              }
                              else {
                                fVar38 = FUN_004fc100(pvVar20,*(float *)(unaff_EBP - 0x12c8),
                                                      *(uint *)(unaff_EBP - 0x1300),iVar8);
                                *(float *)(unaff_EBP - 0x12e8) = (float)fVar38;
                                if (*(float *)(unaff_EBP - 0x12e8) <= 0.25) {
                                  iVar14 = rand();
                                  if (iVar14 % 100 == 0) {
                                    FUN_004c83b0(unaff_EBP - 0x528);
                                    piVar22 = (int *)(unaff_EBP - 0x1624);
                                    piVar21 = FUN_004cde40((void *)(unaff_EBP - 0x1634),
                                                           *(uint *)(unaff_EBP - 0x12c8));
                                    puVar19 = (undefined4 *)FUN_004ce290(piVar21,piVar22);
                                    pvVar18 = (void *)FUN_004e2320((void *)(unaff_EBP - 0x520),0);
                                    FUN_004cde20(pvVar18,puVar19);
                                    piVar22 = (int *)(unaff_EBP - 0x1644);
                                    piVar21 = FUN_004cde40((void *)(unaff_EBP - 0x1654),
                                                           *(uint *)(unaff_EBP - 0x1300));
                                    puVar19 = (undefined4 *)FUN_004ce290(piVar21,piVar22);
                                    pvVar18 = (void *)FUN_004e2320((void *)(unaff_EBP - 0x520),1);
                                    FUN_004cde20(pvVar18,puVar19);
                                    uVar9 = *(uint *)(unaff_EBP - 0x12d4);
                                    pvVar18 = (void *)FUN_004e2320((void *)(unaff_EBP - 0x520),2);
                                    FUN_004cde40(pvVar18,uVar9);
                                    uVar9 = rand();
                                    uVar9 = uVar9 & 0x80000003;
                                    if ((int)uVar9 < 0) {
                                      uVar9 = (uVar9 - 1 | 0xfffffffc) + 1;
                                    }
                                    *(undefined4 *)(unaff_EBP - 0x508) = 0x3d99999a;
                                    *(float *)(unaff_EBP - 0x504) = (float)(int)(uVar9 * 0x5a);
                                    uVar9 = rand();
                                    uVar9 = uVar9 & 0x80000001;
                                    if ((int)uVar9 < 0) {
                                      uVar9 = (uVar9 - 1 | 0xfffffffe) + 1;
                                    }
                                    *(uint *)(unaff_EBP - 0x528) = 0x1c - (uint)(uVar9 != 0);
                                    puVar19 = (undefined4 *)(unaff_EBP - 0x528);
                                    goto LAB_00520922;
                                  }
                                }
                                else {
                                  FUN_004c83b0(unaff_EBP - 0x308);
                                  piVar22 = (int *)(unaff_EBP - 0x15e4);
                                  piVar21 = FUN_004cde40((void *)(unaff_EBP - 0x15f4),
                                                         *(uint *)(unaff_EBP - 0x12c8));
                                  puVar19 = (undefined4 *)FUN_004ce290(piVar21,piVar22);
                                  pvVar18 = (void *)FUN_004e2320((void *)(unaff_EBP - 0x300),0);
                                  FUN_004cde20(pvVar18,puVar19);
                                  piVar22 = (int *)(unaff_EBP - 0x1604);
                                  piVar21 = FUN_004cde40((void *)(unaff_EBP - 0x1614),
                                                         *(uint *)(unaff_EBP - 0x1300));
                                  puVar19 = (undefined4 *)FUN_004ce290(piVar21,piVar22);
                                  pvVar18 = (void *)FUN_004e2320((void *)(unaff_EBP - 0x300),1);
                                  FUN_004cde20(pvVar18,puVar19);
                                  uVar9 = *(uint *)(unaff_EBP - 0x12d4);
                                  pvVar18 = (void *)FUN_004e2320((void *)(unaff_EBP - 0x300),2);
                                  FUN_004cde40(pvVar18,uVar9);
                                  iVar14 = rand();
                                  dVar41 = (double)*(int *)(unaff_EBP - 0x12c8) * 0.01;
                                  *(float *)(unaff_EBP - 0x2e4) = ((float)iVar14 * 360.0) / 32767.0;
                                  dVar40 = (double)*(int *)(unaff_EBP - 0x1300) * 0.01;
                                  *(undefined4 *)(unaff_EBP - 0x2e8) = 0x3d99999a;
                                  *(double *)(unaff_EBP - 0x48) = dVar41;
                                  *(double *)(unaff_EBP - 0x40) = dVar40;
                                  dVar41 = dVar41 + 9843.0;
                                  fVar38 = FUN_004d5d30(SUB84(dVar41,0),
                                                        (int)((ulonglong)dVar41 >> 0x20),
                                                        dVar40 + 8437.0);
                                  *(float *)(unaff_EBP - 0x12e8) = (float)fVar38;
                                  if (*(float *)(unaff_EBP - 0x12e8) <= 0.0) {
                                    dVar40 = *(double *)(unaff_EBP - 0x48) + 34234.0;
                                    fVar38 = FUN_004d5d30(SUB84(dVar40,0),
                                                          (int)((ulonglong)dVar40 >> 0x20),
                                                          *(double *)(unaff_EBP - 0x40) + 234234.0);
                                    *(float *)(unaff_EBP - 0x12e8) = (float)fVar38;
                                    iVar14 = (*(float *)(unaff_EBP - 0x12e8) <= 0.5) + 0xb;
                                  }
                                  else {
                                    dVar40 = (double)(*(float *)(unaff_EBP - 0x1310) * 0.01 +
                                                     34234.0);
                                    fVar38 = FUN_004d5d30(SUB84(dVar40,0),
                                                          (int)((ulonglong)dVar40 >> 0x20),
                                                          (double)(*(float *)(unaff_EBP - 0x12fc) *
                                                                   0.01 + 234234.0));
                                    *(float *)(unaff_EBP - 0x12e8) = (float)fVar38;
                                    iVar14 = (0.0 < *(float *)(unaff_EBP - 0x12e8)) + 3;
                                  }
                                  *(int *)(unaff_EBP - 0x308) = iVar14;
                                  if ((iVar14 == 2) || (iVar14 == 3)) {
                                    *(uint *)(unaff_EBP - 0x2d0) = *(uint *)(unaff_EBP - 0x2d0) | 4;
                                  }
                                  if (iVar14 == 0xb) {
                                    iVar31 = rand();
                                    *(uint *)(unaff_EBP - 0x2d0) = *(uint *)(unaff_EBP - 0x2d0) | 4;
                                    iVar14 = *(int *)(unaff_EBP - 0x308);
                                    *(float *)(unaff_EBP - 0x2e8) =
                                         ((float)iVar31 * 0.05) / 32767.0 + 0.05;
                                  }
                                  if (iVar14 == 0xc) {
                                    iVar31 = rand();
                                    *(uint *)(unaff_EBP - 0x2d0) = *(uint *)(unaff_EBP - 0x2d0) | 4;
                                    iVar14 = *(int *)(unaff_EBP - 0x308);
                                    *(float *)(unaff_EBP - 0x2e8) =
                                         ((float)iVar31 * 0.02) / 32767.0 + 0.1;
                                  }
                                  if (((*(int *)(unaff_EBP - 0x131c) == 4) || (iVar14 == 2)) ||
                                     (iVar14 == 3)) {
                                    puVar19 = (undefined4 *)(unaff_EBP - 0x308);
LAB_00520922:
                                    FUN_00528450((void *)(iVar8 + 4),puVar19);
                                  }
                                }
                              }
                              iVar14 = *(int *)(unaff_EBP - 0x131c);
                            }
                            if (iVar14 == 4) {
                              iVar14 = rand();
                              if (iVar14 % *(int *)(unaff_EBP - 0x13f4) == 0) {
                                FUN_0041d8d0((undefined2 *)(unaff_EBP - 0xc5c));
                                piVar22 = (int *)(unaff_EBP - 0x16ac);
                                piVar21 = FUN_004cde40((void *)(unaff_EBP - 0x16bc),
                                                       *(uint *)(unaff_EBP - 0x12c8));
                                puVar19 = (undefined4 *)FUN_004ce290(piVar21,piVar22);
                                pvVar18 = (void *)FUN_004e2320((void *)(unaff_EBP - 0xb44),0);
                                FUN_004cde20(pvVar18,puVar19);
                                piVar22 = (int *)(unaff_EBP - 0x16cc);
                                piVar21 = FUN_004cde40((void *)(unaff_EBP - 0x16e4),
                                                       *(uint *)(unaff_EBP - 0x1300));
                                puVar19 = (undefined4 *)FUN_004ce290(piVar21,piVar22);
                                pvVar18 = (void *)FUN_004e2320((void *)(unaff_EBP - 0xb44),1);
                                FUN_004cde20(pvVar18,puVar19);
                                uVar9 = *(uint *)(unaff_EBP - 0x12d4);
                                pvVar18 = (void *)FUN_004e2320((void *)(unaff_EBP - 0xb44),2);
                                FUN_004cde40(pvVar18,uVar9);
                                iVar14 = rand();
                                *(undefined1 *)(unaff_EBP - 0xc5c) = 0xb;
                                *(float *)(unaff_EBP - 0xb2c) = ((float)iVar14 / 32767.0) * 360.0;
                                uVar9 = rand();
                                uVar9 = uVar9 & 0x80000001;
                                if ((int)uVar9 < 0) {
                                  uVar9 = (uVar9 - 1 | 0xfffffffe) + 1;
                                }
                                if (uVar9 == 0) {
                                  *(undefined1 *)(unaff_EBP - 0xc5b) = 0xf;
                                }
                                else if (uVar9 == 1) {
                                  *(undefined1 *)(unaff_EBP - 0xc5b) = 0x16;
                                  *(undefined4 *)(unaff_EBP - 0xb28) = 0x3dcccccd;
                                }
                                *(undefined2 *)(unaff_EBP - 0xc4c) = 1;
                                *(undefined1 *)(unaff_EBP - 0xb24) = 2;
                                FUN_0041f5b0((void *)(iVar8 + 0x30),
                                             (undefined1 *)(unaff_EBP - 0xc5c));
                              }
                            }
                            else if ((iVar14 == 10) &&
                                    (iVar14 = rand(), iVar14 % *(int *)(unaff_EBP - 0x1330) == 0)) {
                              FUN_0041d8d0((undefined2 *)(unaff_EBP - 0xda4));
                              piVar22 = (int *)(unaff_EBP - 0x16f4);
                              piVar21 = FUN_004cde40((void *)(unaff_EBP - 0x1704),
                                                     *(uint *)(unaff_EBP - 0x12c8));
                              puVar19 = (undefined4 *)FUN_004ce290(piVar21,piVar22);
                              pvVar18 = (void *)FUN_004e2320((void *)(unaff_EBP - 0xc8c),0);
                              FUN_004cde20(pvVar18,puVar19);
                              piVar22 = (int *)(unaff_EBP - 0x1714);
                              piVar21 = FUN_004cde40((void *)(unaff_EBP - 0x1724),
                                                     *(uint *)(unaff_EBP - 0x1300));
                              puVar19 = (undefined4 *)FUN_004ce290(piVar21,piVar22);
                              pvVar18 = (void *)FUN_004e2320((void *)(unaff_EBP - 0xc8c),1);
                              FUN_004cde20(pvVar18,puVar19);
                              uVar9 = *(uint *)(unaff_EBP - 0x12d4);
                              pvVar18 = (void *)FUN_004e2320((void *)(unaff_EBP - 0xc8c),2);
                              FUN_004cde40(pvVar18,uVar9);
                              iVar14 = rand();
                              *(undefined1 *)(unaff_EBP - 0xda4) = 0xb;
                              *(float *)(unaff_EBP - 0xc74) = ((float)iVar14 / 32767.0) * 360.0;
                              uVar9 = rand();
                              uVar9 = uVar9 & 0x80000001;
                              if ((int)uVar9 < 0) {
                                uVar9 = (uVar9 - 1 | 0xfffffffe) + 1;
                              }
                              if (uVar9 < 2) {
                                *(undefined1 *)(unaff_EBP - 0xda3) = 0x18;
                                *(undefined4 *)(unaff_EBP - 0xc70) = 0x3dcccccd;
                              }
                              *(undefined2 *)(unaff_EBP - 0xd94) = 1;
                              *(undefined1 *)(unaff_EBP - 0xc6c) = 2;
                              FUN_0041f5b0((void *)(iVar8 + 0x30),(undefined1 *)(unaff_EBP - 0xda4))
                              ;
                            }
                            goto LAB_00520371;
                          }
                          FUN_004c83b0(unaff_EBP - 0x49c);
                          piVar22 = (int *)(unaff_EBP - 0x174c);
                          piVar21 = FUN_004cde40((void *)(unaff_EBP - 0x16a4),
                                                 *(uint *)(unaff_EBP - 0x12c8));
                          puVar19 = (undefined4 *)FUN_004ce290(piVar21,piVar22);
                          pvVar20 = (void *)FUN_004e2320((void *)(unaff_EBP - 0x494),0);
                          FUN_004cde20(pvVar20,puVar19);
                          piVar22 = (int *)(unaff_EBP - 0x15c4);
                          piVar21 = FUN_004cde40((void *)(unaff_EBP - 0x15d4),uVar9);
                          puVar19 = (undefined4 *)FUN_004ce290(piVar21,piVar22);
                          pvVar20 = (void *)FUN_004e2320((void *)(unaff_EBP - 0x494),1);
                          FUN_004cde20(pvVar20,puVar19);
                          uVar12 = *(uint *)(unaff_EBP - 0x12d4);
                          pvVar20 = (void *)FUN_004e2320((void *)(unaff_EBP - 0x494),2);
                          FUN_004cde40(pvVar20,uVar12);
                          uVar12 = rand();
                          uVar12 = uVar12 & 0x80000003;
                          if ((int)uVar12 < 0) {
                            uVar12 = (uVar12 - 1 | 0xfffffffc) + 1;
                          }
                          *(float *)(unaff_EBP - 0x478) = (float)(int)(uVar12 * 0x5a);
                          *(undefined4 *)(unaff_EBP - 0x47c) = 0x3d99999a;
                          dVar40 = (double)*(int *)(unaff_EBP - 0x12c8) * 0.01 + 9843.0;
                          fVar38 = FUN_004d5d30(SUB84(dVar40,0),(int)((ulonglong)dVar40 >> 0x20),
                                                (double)(int)uVar9 * 0.01 + 8437.0);
                          *(float *)(unaff_EBP - 0x12e8) = (float)fVar38;
                          iVar14 = (*(float *)(unaff_EBP - 0x12e8) <= 0.0) + 9;
                          *(int *)(unaff_EBP - 0x49c) = iVar14;
                          if (iVar14 == 9) {
                            *(uint *)(unaff_EBP - 0x464) = *(uint *)(unaff_EBP - 0x464) | 4;
                            puVar19 = (undefined4 *)(unaff_EBP - 0x49c);
                          }
                          else {
                            if (iVar14 == 10) {
                              iVar14 = rand();
                              *(float *)(unaff_EBP - 0x47c) =
                                   ((float)iVar14 * 0.02) / 32767.0 + 0.03;
                            }
                            puVar19 = (undefined4 *)(unaff_EBP - 0x49c);
                          }
                        }
                        FUN_00528450((void *)(iVar8 + 4),puVar19);
                      }
                    }
                  }
LAB_0052036b:
                  pvVar20 = *(void **)(unaff_EBP - 0x12e0);
                }
              }
LAB_00520371:
              iVar14 = *(int *)(unaff_EBP - 0x12ec);
              *(undefined4 *)(unaff_EBP - 0x12d8) = *(undefined4 *)(unaff_EBP - 0x12dc);
              iVar14 = FUN_00406250(iVar14);
            } while (*(int *)(unaff_EBP - 0x12d8) < iVar14);
          }
          uVar9 = *(uint *)(unaff_EBP - 0x12c8);
          uVar12 = *(int *)(unaff_EBP - 0x1300) + 1;
          iVar14 = *(int *)(unaff_EBP - 0x132c) + 0x100;
          *(uint *)(unaff_EBP - 0x1300) = uVar12;
        } while ((int)uVar12 < iVar14);
      }
      uVar9 = uVar9 + 1;
      *(uint *)(unaff_EBP - 0x12c8) = uVar9;
      if (*(int *)(unaff_EBP - 0x1370) <= (int)uVar9) {
LAB_005203ce:
        piVar22 = (int *)(iVar8 + 0x24);
        *(int **)(unaff_EBP - 0x12e8) = piVar22;
        iVar14 = FUN_0041fff0(piVar22);
        if (0 < iVar14) {
          uVar9 = 0;
          do {
            piVar21 = (int *)FUN_00402bb0(piVar22,uVar9);
            if (*(int *)*piVar21 == 0 && ((int *)*piVar21)[1] == 0) {
              puVar19 = (undefined4 *)FUN_00402bb0(piVar22,uVar9);
              uVar48 = FUN_004f3850(*(uint *)(unaff_EBP - 0x135c),*(uint *)(unaff_EBP - 0x1364),
                                    uVar9);
              piVar22 = *(int **)(unaff_EBP - 0x12e8);
              *(undefined8 *)*puVar19 = uVar48;
            }
            uVar9 = uVar9 + 1;
            iVar8 = FUN_0041fff0(piVar22);
          } while ((int)uVar9 < iVar8);
          iVar8 = *(int *)(unaff_EBP - 0x1308);
        }
        piVar22 = (int *)(iVar8 + 0x18);
        *(undefined4 *)(unaff_EBP - 0x12cc) = 0;
        *(int **)(unaff_EBP - 0x12c8) = piVar22;
        iVar14 = FUN_0041fff0(piVar22);
        if (iVar14 < 1) {
          pvVar20 = *(void **)(unaff_EBP - 0x12e0);
        }
        else {
          uVar9 = 0;
          while( true ) {
            piVar21 = (int *)FUN_00402bb0(piVar22,uVar9);
            if (*(int *)(*piVar21 + 0x48) == 0 && *(int *)(*piVar21 + 0x4c) == 0) {
              piVar21 = (int *)FUN_00402bb0(piVar22,uVar9);
              uVar48 = FUN_004f3850(*(uint *)(unaff_EBP - 0x135c),*(uint *)(unaff_EBP - 0x1364),
                                    uVar9);
              piVar22 = *(int **)(unaff_EBP - 0x12c8);
              *(undefined8 *)(*piVar21 + 0x48) = uVar48;
            }
            piVar22 = (int *)FUN_00402bb0(piVar22,uVar9);
            piVar21 = (int *)FUN_00402bb0(*(void **)(unaff_EBP - 0x12c8),uVar9);
            FUN_0040a840((uint *)(*piVar21 + 0x2c),*piVar22 + 0x74,(undefined4 *)0x0);
            pvVar20 = *(void **)(unaff_EBP - 0x12c8);
            piVar22 = (int *)FUN_00402bb0(pvVar20,uVar9);
            FUN_004fb480(*piVar22,0);
            piVar22 = (int *)FUN_00402bb0(pvVar20,uVar9);
            if ((*(ushort *)(*piVar22 + 0x7a) & 0x200) != 0) {
              FUN_00406fd0((undefined2 *)(unaff_EBP - 0xebc));
              *(undefined2 *)(unaff_EBP - 0xebc) = 0xe0b;
              piVar22 = (int *)FUN_00402bb0(pvVar20,uVar9);
              *(undefined2 *)(unaff_EBP - 0xeac) = *(undefined2 *)(*piVar22 + 0x34);
              uVar12 = rand();
              uVar12 = uVar12 & 0x80000003;
              if ((int)uVar12 < 0) {
                uVar12 = (uVar12 - 1 | 0xfffffffc) + 1;
              }
              *(char *)(unaff_EBP - 0xeaf) = (char)uVar12 + -0x80;
              *(undefined1 *)(unaff_EBP - 0xeb0) = 2;
              piVar22 = (int *)FUN_00402bb0(pvVar20,uVar9);
              FUN_00427000((void *)(*piVar22 + 0xf6c),(char *)(unaff_EBP - 0xebc),-1);
            }
            piVar22 = (int *)FUN_00402bb0(pvVar20,uVar9);
            piVar21 = (int *)FUN_00402bb0(*(void **)(unaff_EBP - 0x12c8),uVar9);
            iVar14 = FUN_00402bb0(*(void **)(unaff_EBP - 0x12c8),*(int *)(unaff_EBP - 0x12cc));
            iVar8 = *piVar22;
            *(int *)(unaff_EBP - 0x12e8) = iVar14;
            iVar14 = FUN_0052bf40((uint)*(byte *)(*piVar21 + 0x58),
                                  (byte)((ushort)*(undefined2 *)(iVar8 + 0x7a) >> 9) & 1);
            iVar8 = *(int *)(unaff_EBP - 0x12cc);
            *(char *)(**(int **)(unaff_EBP - 0x12e8) + 0x8d4) = (char)iVar14;
            piVar22 = (int *)FUN_00402bb0(*(void **)(unaff_EBP - 0x12c8),iVar8);
            piVar21 = (int *)FUN_00402bb0(*(void **)(unaff_EBP - 0x12c8),iVar8);
            iVar14 = FUN_00402bb0(*(void **)(unaff_EBP - 0x12c8),*(int *)(unaff_EBP - 0x12cc));
            iVar8 = *piVar22;
            *(int *)(unaff_EBP - 0x12e8) = iVar14;
            iVar14 = FUN_0052bf40((uint)*(byte *)(*piVar21 + 0x58),
                                  (byte)((ushort)*(undefined2 *)(iVar8 + 0x7a) >> 9) & 1);
            iVar8 = *(int *)(unaff_EBP - 0x12cc);
            *(char *)(**(int **)(unaff_EBP - 0x12e8) + 0x7bc) = (char)iVar14;
            piVar22 = (int *)FUN_00402bb0(*(void **)(unaff_EBP - 0x12c8),iVar8);
            piVar21 = (int *)FUN_00402bb0(*(void **)(unaff_EBP - 0x12c8),iVar8);
            iVar14 = FUN_00402bb0(*(void **)(unaff_EBP - 0x12c8),*(int *)(unaff_EBP - 0x12cc));
            iVar8 = *piVar22;
            *(int *)(unaff_EBP - 0x12e8) = iVar14;
            iVar14 = FUN_0052bf40((uint)*(byte *)(*piVar21 + 0x58),
                                  (byte)((ushort)*(undefined2 *)(iVar8 + 0x7a) >> 9) & 1);
            iVar8 = *(int *)(unaff_EBP - 0x12cc);
            *(char *)(**(int **)(unaff_EBP - 0x12e8) + 0x6a4) = (char)iVar14;
            piVar22 = (int *)FUN_00402bb0(*(void **)(unaff_EBP - 0x12c8),iVar8);
            piVar21 = (int *)FUN_00402bb0(*(void **)(unaff_EBP - 0x12c8),iVar8);
            iVar14 = FUN_00402bb0(*(void **)(unaff_EBP - 0x12c8),*(int *)(unaff_EBP - 0x12cc));
            iVar8 = *piVar22;
            *(int *)(unaff_EBP - 0x12e8) = iVar14;
            iVar14 = FUN_0052bf40((uint)*(byte *)(*piVar21 + 0x58),
                                  (byte)((ushort)*(undefined2 *)(iVar8 + 0x7a) >> 9) & 1);
            iVar8 = *(int *)(unaff_EBP - 0x12cc);
            *(char *)(**(int **)(unaff_EBP - 0x12e8) + 0x35c) = (char)iVar14;
            piVar22 = (int *)FUN_00402bb0(*(void **)(unaff_EBP - 0x12c8),iVar8);
            piVar21 = (int *)FUN_00402bb0(*(void **)(unaff_EBP - 0x12c8),iVar8);
            iVar14 = FUN_00402bb0(*(void **)(unaff_EBP - 0x12c8),*(int *)(unaff_EBP - 0x12cc));
            iVar8 = *piVar22;
            *(int *)(unaff_EBP - 0x12e8) = iVar14;
            iVar14 = FUN_0052bf40((uint)*(byte *)(*piVar21 + 0x58),
                                  (byte)((ushort)*(undefined2 *)(iVar8 + 0x7a) >> 9) & 1);
            iVar8 = *(int *)(unaff_EBP - 0x12cc);
            *(char *)(**(int **)(unaff_EBP - 0x12e8) + 0x58c) = (char)iVar14;
            piVar22 = (int *)FUN_00402bb0(*(void **)(unaff_EBP - 0x12c8),iVar8);
            piVar21 = (int *)FUN_00402bb0(*(void **)(unaff_EBP - 0x12c8),iVar8);
            iVar14 = FUN_00402bb0(*(void **)(unaff_EBP - 0x12c8),*(int *)(unaff_EBP - 0x12cc));
            iVar8 = *piVar22;
            *(int *)(unaff_EBP - 0x12e8) = iVar14;
            iVar14 = FUN_0052bf40((uint)*(byte *)(*piVar21 + 0x58),
                                  (byte)((ushort)*(undefined2 *)(iVar8 + 0x7a) >> 9) & 1);
            iVar8 = *(int *)(unaff_EBP - 0x12cc);
            *(char *)(**(int **)(unaff_EBP - 0x12e8) + 0x474) = (char)iVar14;
            piVar22 = (int *)FUN_00402bb0(*(void **)(unaff_EBP - 0x12c8),iVar8);
            piVar21 = (int *)FUN_00402bb0(*(void **)(unaff_EBP - 0x12c8),iVar8);
            iVar14 = FUN_00402bb0(*(void **)(unaff_EBP - 0x12c8),*(int *)(unaff_EBP - 0x12cc));
            pvVar20 = *(void **)(unaff_EBP - 0x12e0);
            uVar3 = *(undefined2 *)(*piVar22 + 0x7a);
            iVar8 = *piVar21;
            *(int *)(unaff_EBP - 0x12e8) = iVar14;
            iVar14 = FUN_0052bf40((uint)*(byte *)(iVar8 + 0x58),(byte)((ushort)uVar3 >> 9) & 1);
            iVar8 = *(int *)(unaff_EBP - 0x12cc);
            *(char *)(**(int **)(unaff_EBP - 0x12e8) + 0x244) = (char)iVar14;
            piVar22 = (int *)FUN_00402bb0(*(void **)(unaff_EBP - 0x12c8),iVar8);
            if ((*(ushort *)(*piVar22 + 0x7a) & 0x200) == 0) {
              piVar22 = (int *)FUN_00402bb0(*(void **)(unaff_EBP - 0x12c8),iVar8);
              FUN_00414470((void *)(*piVar22 + 0x8c8),0.05,'\0');
              piVar22 = (int *)FUN_00402bb0(*(void **)(unaff_EBP - 0x12c8),iVar8);
              FUN_00414470((void *)(*piVar22 + 0x7b0),0.05,'\0');
              piVar22 = (int *)FUN_00402bb0(*(void **)(unaff_EBP - 0x12c8),iVar8);
              FUN_00414470((void *)(*piVar22 + 0x698),0.05,'\0');
              piVar22 = (int *)FUN_00402bb0(*(void **)(unaff_EBP - 0x12c8),iVar8);
              FUN_00414470((void *)(*piVar22 + 0x350),0.05,'\0');
              piVar22 = (int *)FUN_00402bb0(*(void **)(unaff_EBP - 0x12c8),iVar8);
              FUN_00414470((void *)(*piVar22 + 0x580),0.05,'\0');
              piVar22 = (int *)FUN_00402bb0(*(void **)(unaff_EBP - 0x12c8),iVar8);
              FUN_00414470((void *)(*piVar22 + 0x468),0.05,'\0');
              piVar22 = (int *)FUN_00402bb0(*(void **)(unaff_EBP - 0x12c8),iVar8);
              FUN_00414470((void *)(*piVar22 + 0x238),0.05,'\0');
              piVar22 = (int *)FUN_00402bb0(*(void **)(unaff_EBP - 0x12c8),iVar8);
              FUN_00414470((void *)(*piVar22 + 0x9e0),0.05,'\0');
              piVar22 = (int *)FUN_00402bb0(*(void **)(unaff_EBP - 0x12c8),iVar8);
              FUN_00414470((void *)(*piVar22 + 0xaf8),0.05,'\0');
            }
            piVar22 = (int *)FUN_00402bb0(*(void **)(unaff_EBP - 0x12c8),iVar8);
            if ((*(int *)(*piVar22 + 0x28) == 1) &&
               (piVar22 = (int *)FUN_00402bb0(*(void **)(unaff_EBP - 0x12c8),iVar8),
               (*(ushort *)(*piVar22 + 0x7a) & 0x200) == 0)) {
              rand();
            }
            piVar22 = *(int **)(unaff_EBP - 0x12c8);
            uVar9 = iVar8 + 1;
            *(uint *)(unaff_EBP - 0x12cc) = uVar9;
            iVar8 = FUN_0041fff0(piVar22);
            if (iVar8 <= (int)uVar9) break;
            piVar22 = *(int **)(unaff_EBP - 0x12c8);
          }
          iVar8 = *(int *)(unaff_EBP - 0x1308);
        }
        FUN_004f7330((undefined4 *)(unaff_EBP - 0x144c));
        *(undefined1 *)(unaff_EBP - 4) = 9;
        FUN_00530550((void *)(iVar8 + 0x30),(undefined4 *)(unaff_EBP - 0x139c));
        piVar22 = (int *)FUN_004d3de0((void *)(iVar8 + 0x30),(undefined4 *)(unaff_EBP - 0x14a0));
        bVar37 = FUN_0042c6f0((void *)(unaff_EBP - 0x139c),piVar22);
        if (bVar37) {
          do {
            puVar23 = (undefined1 *)FUN_004ce1f0((undefined4 *)(unaff_EBP - 0x139c));
            puVar53 = puVar23 + 0xd;
            *(undefined1 **)(unaff_EBP - 0x12e8) = puVar23;
            puVar23 = (undefined1 *)
                      FUN_004f72d0((undefined1 *)(unaff_EBP - 0x14be),puVar23,puVar23 + 1);
            pbVar24 = (byte *)FUN_004f72f0((undefined1 *)(unaff_EBP - 0x150b),puVar23,puVar53);
            FUN_004f3880((void *)(unaff_EBP - 0x15b4),pbVar24);
            piVar22 = FUN_004f7910((void *)(unaff_EBP - 0x144c),(int *)(unaff_EBP - 0x15b4));
            *piVar22 = *piVar22 + 1;
            if ((*(byte *)(*(int *)(unaff_EBP - 0x12e8) + 0x138) & 1) == 0) {
              pvVar20 = (void *)(*(int *)(unaff_EBP - 0x12e8) + 0x118);
              pvVar18 = (void *)FUN_004e2320(pvVar20,2);
              *(void **)(unaff_EBP - 0x12d0) = pvVar18;
              puVar25 = (uint *)FUN_004014b0(pvVar18,(int *)(unaff_EBP - 0x1524));
              iVar8 = FUN_004e2320(pvVar20,1);
              *(int *)(unaff_EBP - 0x12dc) = iVar8;
              puVar26 = (uint *)FUN_004e2320(pvVar20,0);
              iVar8 = *(int *)(unaff_EBP - 0x1308);
              uVar9 = puVar25[1];
              uVar12 = *puVar25;
              puVar25 = *(uint **)(unaff_EBP - 0x12dc);
              pvVar20 = *(void **)(unaff_EBP - 0x12e0);
              uVar33 = puVar25[1];
              *(uint **)(unaff_EBP - 0x12e8) = puVar26;
              iVar14 = FUN_00406050(pvVar20,*puVar26,puVar26[1],*puVar25,uVar33,uVar12,uVar9,iVar8);
              uVar13 = FUN_004061f0(iVar14);
              cVar6 = (char)uVar13;
              while (cVar6 == '\0') {
                FUN_004cde40((void *)(unaff_EBP - 0x152c),1);
                FUN_00402eb0(*(void **)(unaff_EBP - 0x12d0),(uint *)(unaff_EBP - 0x152c));
                puVar25 = (uint *)FUN_004014b0(*(void **)(unaff_EBP - 0x12d0),
                                               (int *)(unaff_EBP - 0x1524));
                iVar14 = FUN_00406050(pvVar20,**(uint **)(unaff_EBP - 0x12e8),
                                      (*(uint **)(unaff_EBP - 0x12e8))[1],
                                      **(uint **)(unaff_EBP - 0x12dc),
                                      (*(uint **)(unaff_EBP - 0x12dc))[1],*puVar25,puVar25[1],iVar8)
                ;
                uVar13 = FUN_004061f0(iVar14);
                cVar6 = (char)uVar13;
              }
            }
            FUN_0041e300((void *)(unaff_EBP - 0x139c),(int *)(unaff_EBP - 0x13d8));
            piVar22 = (int *)FUN_004d3de0((void *)(iVar8 + 0x30),(undefined4 *)(unaff_EBP - 0x14a0))
            ;
            bVar37 = FUN_0042c6f0((void *)(unaff_EBP - 0x139c),piVar22);
          } while (bVar37);
        }
        FUN_00428070((void *)(unaff_EBP - 0x144c),(undefined4 *)(unaff_EBP - 0x13a0));
        piVar22 = (int *)FUN_00530550((void *)(unaff_EBP - 0x144c),
                                      (undefined4 *)(unaff_EBP - 0x14a8));
        uVar48 = CONCAT44(piVar22,0x52185e);
        bVar37 = FUN_0042c6f0((void *)(unaff_EBP - 0x13a0),piVar22);
        if (bVar37) {
          uVar9 = *(uint *)(unaff_EBP - 0x138c);
          do {
            uVar13 = (undefined4)uVar48;
            piVar22 = (int *)FUN_00402bc0((int *)(unaff_EBP - 0x13a0));
            iVar14 = *piVar22;
            *(int **)(unaff_EBP - 0x12e8) = piVar22;
            if (((iVar14 == 1) || (iVar14 == 0xb)) && (7 < piVar22[3])) {
              uVar52 = 0x5218a6;
              FUN_004f7490((undefined4 *)(unaff_EBP - 0x1184));
              puVar53 = *(undefined1 **)(unaff_EBP - 0x12e8);
              *(undefined1 *)(unaff_EBP - 0x1180) = *puVar53;
              *(undefined1 *)(unaff_EBP - 0x117f) = puVar53[4];
              uVar2 = puVar53[8];
              *(undefined4 *)(unaff_EBP - 0x1184) = 9;
              *(undefined1 *)(unaff_EBP - 0x1173) = uVar2;
              uVar48 = 0x5218dc;
              FUN_004cde40(&stack0xfffffff8,0);
              uVar12 = *(uint *)(unaff_EBP - 5000);
              uVar50 = 0x5218ec;
              FUN_004cde40(&stack0xfffffff0,uVar12);
              FUN_004cde40(&stack0xffffffe8,uVar9);
              puVar19 = FUN_00406380((void *)(unaff_EBP - 0xb14),uVar50,uVar12,(int)uVar48,
                                     (int)((ulonglong)uVar48 >> 0x20),uVar13,uVar52);
              FUN_00402a40((void *)(unaff_EBP - 0x105c),puVar19);
              FUN_005284a0((void *)(iVar8 + 0x48),(undefined4 *)(unaff_EBP - 0x1184));
            }
            FUN_00407a30((void *)(unaff_EBP - 0x13a0),(int *)(unaff_EBP - 0x1548));
            piVar22 = (int *)FUN_00530550((void *)(unaff_EBP - 0x144c),
                                          (undefined4 *)(unaff_EBP - 0x14a8));
            uVar48 = CONCAT44(piVar22,0x52194f);
            bVar37 = FUN_0042c6f0((void *)(unaff_EBP - 0x13a0),piVar22);
          } while (bVar37);
          pvVar20 = *(void **)(unaff_EBP - 0x12e0);
        }
        FUN_004f7310((undefined4 *)(unaff_EBP - 0x1454));
        *(undefined1 *)(unaff_EBP - 4) = 10;
        FUN_00530550((void *)(iVar8 + 0x18),(undefined4 *)(unaff_EBP - 0x1394));
        piVar22 = (int *)FUN_004d3de0((void *)(iVar8 + 0x18),(undefined4 *)(unaff_EBP - 0x14b0));
        bVar37 = FUN_0042c6f0((void *)(unaff_EBP - 0x1394),piVar22);
        if (bVar37) {
          do {
            piVar22 = (int *)FUN_004ce1f0((undefined4 *)(unaff_EBP - 0x1394));
            iVar14 = *piVar22;
            if (*(int *)(iVar14 + 0x44) == 86400000) {
              piVar22 = (int *)FUN_004c8130((undefined4 *)(unaff_EBP - 0x1734),
                                            (undefined4 *)(iVar14 + 0x28),
                                            (undefined4 *)(iVar14 + 0x2c));
              piVar22 = FUN_004f7890((void *)(unaff_EBP - 0x1454),piVar22);
              *piVar22 = *piVar22 + 1;
            }
            FUN_004f79d0((void *)(unaff_EBP - 0x1394),(int *)(unaff_EBP - 0x13e0));
            piVar22 = (int *)FUN_004d3de0((void *)(iVar8 + 0x18),(undefined4 *)(unaff_EBP - 0x14b0))
            ;
            bVar37 = FUN_0042c6f0((void *)(unaff_EBP - 0x1394),piVar22);
          } while (bVar37);
          pvVar20 = *(void **)(unaff_EBP - 0x12e0);
        }
        FUN_00428070((void *)(unaff_EBP - 0x1454),(undefined4 *)(unaff_EBP - 0x1398));
        piVar22 = (int *)FUN_00530550((void *)(unaff_EBP - 0x1454),
                                      (undefined4 *)(unaff_EBP - 0x14b8));
        uVar48 = CONCAT44(piVar22,0x521a44);
        bVar37 = FUN_0042c6f0((void *)(unaff_EBP - 0x1398),piVar22);
        if (bVar37) {
          uVar9 = *(uint *)(unaff_EBP - 0x138c);
          do {
            uVar13 = (undefined4)uVar48;
            piVar22 = (int *)FUN_00402bc0((int *)(unaff_EBP - 0x1398));
            iVar14 = *piVar22;
            *(int **)(unaff_EBP - 0x12e8) = piVar22;
            if ((((iVar14 == 1) || (iVar14 == 6)) || (iVar14 == 5)) && (4 < piVar22[2])) {
              uVar52 = 0x521a8d;
              FUN_004f7490((undefined4 *)(unaff_EBP - 0x12c4));
              uVar50 = *(undefined4 *)(*(int *)(unaff_EBP - 0x12e8) + 4);
              *(undefined4 *)(unaff_EBP - 0x12c4) = 10;
              *(undefined4 *)(unaff_EBP - 0x11a4) = uVar50;
              uVar48 = 0x521ab2;
              FUN_004cde40(&stack0xfffffff8,0);
              uVar12 = *(uint *)(unaff_EBP - 5000);
              uVar50 = 0x521ac2;
              FUN_004cde40(&stack0xfffffff0,uVar12);
              FUN_004cde40(&stack0xffffffe8,uVar9);
              puVar19 = FUN_00406380((void *)(unaff_EBP - 0xae4),uVar50,uVar12,(int)uVar48,
                                     (int)((ulonglong)uVar48 >> 0x20),uVar13,uVar52);
              FUN_00402a40((void *)(unaff_EBP - 0x119c),puVar19);
              FUN_005284a0((void *)(iVar8 + 0x48),(undefined4 *)(unaff_EBP - 0x12c4));
            }
            FUN_00407a30((void *)(unaff_EBP - 0x1398),(int *)(unaff_EBP - 0x1564));
            piVar22 = (int *)FUN_00530550((void *)(unaff_EBP - 0x1454),
                                          (undefined4 *)(unaff_EBP - 0x14b8));
            uVar48 = CONCAT44(piVar22,0x521b25);
            bVar37 = FUN_0042c6f0((void *)(unaff_EBP - 0x1398),piVar22);
          } while (bVar37);
          pvVar20 = *(void **)(unaff_EBP - 0x12e0);
        }
        iVar14 = FUN_0041fff0((int *)(iVar8 + 0x18));
        *(int *)(iVar8 + 0xa0) = iVar14;
        FUN_0050d260(pvVar20,iVar8);
        if ((*(char *)((int)pvVar20 + 0xb4) == '\0') &&
           (bVar37 = FUN_00419f80((int)pvVar20 + 0x94), !bVar37)) {
          FUN_004c8190((void *)(unaff_EBP - 0x182c),3,1);
          iVar14 = *(int *)(unaff_EBP - 0x1364);
          *(undefined1 *)(unaff_EBP - 4) = 0xb;
          pbVar27 = FUN_00412710((basic_ostream<char,std::char_traits<char>_> *)(unaff_EBP - 0x181c)
                                 ,"zone");
          pbVar28 = std::basic_ostream<char,std::char_traits<char>_>::operator<<
                              ((basic_ostream<char,std::char_traits<char>_> *)pbVar27,iVar14);
          pbVar27 = FUN_00412710((basic_ostream<char,std::char_traits<char>_> *)pbVar28,
                                 unaff_retaddr);
          std::basic_ostream<char,std::char_traits<char>_>::operator<<
                    ((basic_ostream<char,std::char_traits<char>_> *)pbVar27,param_3);
          FUN_00422af0((undefined4 *)(unaff_EBP - 0x1574));
          *(undefined1 *)(unaff_EBP - 4) = 0xc;
          puVar19 = FUN_004d8f70((void *)(unaff_EBP - 0x182c),(void *)(unaff_EBP - 0x7c4));
          *(undefined1 *)(unaff_EBP - 4) = 0xd;
          uVar13 = FUN_00413130((void *)((int)pvVar20 + 0xac),puVar19,
                                (undefined4 *)(unaff_EBP - 0x1574));
          *(char *)(unaff_EBP - 0x1309) = (char)uVar13;
          *(undefined1 *)(unaff_EBP - 4) = 0xc;
          FUN_004013a0((undefined4 *)(unaff_EBP - 0x7c4));
          if (*(char *)(unaff_EBP - 0x1309) != '\0') {
            puVar19 = FUN_0041d800((void *)(unaff_EBP - 0x177c),unaff_EBP - 0x1574);
            FUN_0041ee20(puVar19,pvVar20,iVar8);
          }
          FUN_0042f440((undefined4 *)(unaff_EBP - 0x1574));
          *(undefined1 *)(unaff_EBP - 4) = 10;
          FUN_004ce3e0((void *)(unaff_EBP - 0x182c));
        }
        FUN_004d1a70(pvVar20,*(uint *)(unaff_EBP - 0x1358),*(uint *)(unaff_EBP - 0x132c),
                     *(int *)(unaff_EBP - 0x1370),*(uint *)(unaff_EBP - 0x132c) + 0x100,0,iVar8);
        *(void **)(unaff_EBP - 0x12e8) = (void *)(iVar8 + 4);
        FUN_00428070((void *)(iVar8 + 4),(undefined4 *)(unaff_EBP - 0x1324));
        piVar22 = (int *)FUN_00530550((void *)(iVar8 + 4),(undefined4 *)(unaff_EBP - 0x149c));
        bVar37 = FUN_0042c6f0((void *)(unaff_EBP - 0x1324),piVar22);
        if (bVar37) {
          do {
            iVar14 = FUN_0052eb90((int *)(unaff_EBP - 0x1324));
            iVar8 = *(int *)(unaff_EBP - 0x1308);
            iVar31 = 0;
            pCVar29 = (CRefTime *)FUN_004e2320((void *)(iVar14 + 8),2);
            lVar30 = CRefTime::Millisecs(pCVar29);
            pCVar29 = (CRefTime *)FUN_004e2320((void *)(iVar14 + 8),1);
            uVar9 = CRefTime::Millisecs(pCVar29);
            pCVar29 = (CRefTime *)FUN_004e2320((void *)(iVar14 + 8),0);
            uVar12 = CRefTime::Millisecs(pCVar29);
            pvVar20 = *(void **)(unaff_EBP - 0x12e0);
            bVar7 = FUN_004d24a0(pvVar20,uVar12,uVar9,lVar30,iVar8,iVar31);
            *(float *)(iVar14 + 0x28) = (float)CONCAT31(extraout_var_01,bVar7);
            FUN_0052ebf0((void *)(unaff_EBP - 0x1324),(undefined4 *)(unaff_EBP - 0x1494));
            piVar22 = (int *)FUN_00530550(*(void **)(unaff_EBP - 0x12e8),
                                          (undefined4 *)(unaff_EBP - 0x149c));
            bVar37 = FUN_0042c6f0((void *)(unaff_EBP - 0x1324),piVar22);
          } while (bVar37);
          iVar8 = *(int *)(unaff_EBP - 0x1308);
        }
        *(undefined4 *)(unaff_EBP - 0x12d8) = 0;
        iVar14 = FUN_0041cb40((int *)(iVar8 + 0xc));
        if (0 < iVar14) {
          iVar14 = 0;
          do {
            puVar51 = (ulonglong *)(unaff_EBP - 0x1744);
            iVar16 = 1;
            iVar31 = iVar8;
            iVar14 = FUN_0041ba70((void *)(iVar8 + 0xc),iVar14);
            FUN_004e2320((void *)(iVar14 + 8),iVar16);
            pCVar29 = (CRefTime *)FUN_004ce2d0(puVar51);
            uVar9 = CRefTime::Millisecs(pCVar29);
            puVar51 = (ulonglong *)(unaff_EBP - 0x1754);
            iVar16 = 0;
            iVar14 = FUN_0041ba70((void *)(iVar8 + 0xc),*(int *)(unaff_EBP - 0x12d8));
            FUN_004e2320((void *)(iVar14 + 8),iVar16);
            pCVar29 = (CRefTime *)FUN_004ce2d0(puVar51);
            uVar12 = CRefTime::Millisecs(pCVar29);
            iVar14 = FUN_0041c9e0(pvVar20,uVar12,uVar9,iVar31);
            *(int *)(unaff_EBP - 0x12e8) = iVar14;
            if (iVar14 != 0) {
              FUN_00402990(&stack0xfffffff4,*(undefined4 *)(unaff_EBP - 0x135c),
                           *(undefined4 *)(unaff_EBP - 0x1364),*(undefined4 *)(unaff_EBP - 0x12d8));
              iVar14 = FUN_0041ba70((void *)(iVar8 + 0xc),*(int *)(unaff_EBP - 0x12d8));
              puVar19 = (undefined4 *)
                        FUN_004f7350((void *)(unaff_EBP - 0x7fc),iVar14,uVar12,uVar9,iVar31);
              FUN_005283b0(*(void **)(unaff_EBP - 0x12e8),puVar19);
            }
            *(int *)(unaff_EBP - 0x12d8) = *(int *)(unaff_EBP - 0x12d8) + 1;
            iVar31 = FUN_0041cb40((int *)(iVar8 + 0xc));
            iVar14 = *(int *)(unaff_EBP - 0x12d8);
          } while (iVar14 < iVar31);
        }
        *(int *)(*(int *)(unaff_EBP - 0x137c) + 0x10018 + *(int *)(unaff_EBP - 0x13ac) * 4) = iVar8;
        FUN_004f7710((undefined4 *)(unaff_EBP - 0x1454));
        FUN_004f7710((undefined4 *)(unaff_EBP - 0x144c));
        FUN_00423710((int *)(unaff_EBP - 0x13a8));
        FUN_00423710((int *)(unaff_EBP - 0x1378));
        FUN_00423710((int *)(unaff_EBP - 0x13c4));
        ExceptionList = *(void **)(unaff_EBP - 0xc);
        __security_check_cookie(*(uint *)(unaff_EBP - 0x10) ^ unaff_EBP);
        return;
      }
      uVar12 = *(uint *)(unaff_EBP - 0x132c);
    } while( true );
  }
  goto LAB_0051ed60;
code_r0x0051b21c:
  this = (void *)**(int **)(unaff_EBP - 0x1378);
  if (this != *(int **)(unaff_EBP - 0x1378)) goto code_r0x0051b230;
  goto LAB_0051b333;
code_r0x0051b230:
  in_XMM2_Da = 1.5258789e-05;
  *(uint *)(unaff_EBP - 0x12d0) = uVar9 * 0x10000;
  uVar12 = *(uint *)(unaff_EBP - 0x12d4);
  *(uint *)(unaff_EBP - 0x12dc) = ((int)uVar9 >> 0x1f) << 0x10 | uVar9 >> 0x10;
  *(uint *)(unaff_EBP - 0x1338) = ((int)uVar12 >> 0x1f) << 0x10 | uVar12 >> 0x10;
  *(uint *)(unaff_EBP - 0x1328) = uVar12 << 0x10;
  goto LAB_0051b270;
}


/* FUN_0051c90a @ 0051c90a  kind=gamemisc  attributed-by=none  size=9278 */

void __fastcall
FUN_0051c90a(undefined4 param_1,int param_2,undefined4 param_3,undefined4 param_4,int param_5)

{
  float *pfVar1;
  undefined1 uVar2;
  undefined2 uVar3;
  undefined4 *puVar4;
  longlong lVar5;
  char cVar6;
  byte bVar7;
  float *in_EAX;
  int iVar8;
  uint uVar9;
  int iVar10;
  undefined *puVar11;
  float *pfVar12;
  undefined4 uVar13;
  Spawn *pSVar14;
  void *pvVar15;
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
  int iVar28;
  int iVar29;
  uint uVar30;
  uint uVar31;
  uint uVar32;
  int iVar33;
  uint unaff_EBP;
  void *unaff_ESI;
  int unaff_EDI;
  uint uVar34;
  char *pcVar35;
  bool bVar36;
  float10 fVar37;
  float fVar38;
  float fVar39;
  float fVar40;
  double dVar41;
  double dVar42;
  float fVar43;
  ulonglong uVar44;
  undefined8 uVar45;
  ulonglong uVar46;
  char *unaff_retaddr;
  undefined4 uVar47;
  ulonglong *puVar48;
  undefined4 uVar49;
  undefined1 *puVar50;
  
LAB_0051c910:
  do {
    pfVar12 = in_EAX + param_2;
    param_2 = param_2 + 1;
    *(char *)((unaff_EBP - 0x13e5) + param_2) = (char)(int)*pfVar12;
  } while (param_2 < 3);
  *(undefined2 *)(unaff_EBP - 0x142c) = *(undefined2 *)(unaff_EBP - 0x13e4);
  *(undefined1 *)(unaff_EBP - 0x142a) = *(undefined1 *)(unaff_EBP - 0x13e2);
  iVar29 = *(int *)(unaff_EBP - 0x12f8);
  uVar30 = *(uint *)(unaff_EBP - 0x12d8);
  *(undefined1 *)(unaff_EBP - 0x1429) = 0x26;
  FUN_0041ff00(unaff_ESI,*(float *)(unaff_EBP - 0x1314),uVar30,iVar29,
               (undefined1 *)(unaff_EBP - 0x142c),unaff_EDI);
LAB_0051c964:
  iVar29 = *(int *)(unaff_EBP - 0x12f4);
  iVar28 = *(int *)(unaff_EBP - 0x1320);
  iVar8 = *(int *)(unaff_EBP - 0x12f8);
  fVar38 = *(float *)(unaff_EBP - 0x12d4);
  fVar39 = *(float *)(unaff_EBP - 0x1368);
  fVar40 = *(float *)(unaff_EBP - 0x1338);
LAB_0051c996:
  iVar8 = iVar8 + -1;
  iVar28 = iVar28 + -1;
  *(int *)(unaff_EBP - 0x12f8) = iVar8;
  *(int *)(unaff_EBP - 0x1320) = iVar28;
  if (iVar29 <= iVar8) goto LAB_0051c8a0;
  iVar29 = *(int *)(unaff_EBP - 0x12d8);
  iVar28 = *(int *)(unaff_EBP - 0x1314);
LAB_0051c9b8:
  *(int *)(unaff_EBP - 0x1360) = *(int *)(unaff_EBP - 0x1360) + 1;
  iVar29 = iVar29 + 1;
  *(int *)(unaff_EBP - 0x12d8) = iVar29;
  if (iVar29 <= *(int *)(unaff_EBP - 0x12cc)) goto LAB_0051c7a0;
  iVar8 = *(int *)(unaff_EBP - 0x12ec);
LAB_0051c9d7:
  iVar28 = iVar28 + 1;
  iVar8 = iVar8 + 1;
  *(int *)(unaff_EBP - 0x1314) = iVar28;
  *(int *)(unaff_EBP - 0x12ec) = iVar8;
  if (iVar28 <= *(int *)(unaff_EBP - 0x133c)) goto LAB_0051c740;
  piVar19 = *(int **)(unaff_EBP - 0x12e4);
  while( true ) {
    piVar19 = (int *)*piVar19;
    *(int **)(unaff_EBP - 0x12e4) = piVar19;
    if (piVar19 == (int *)*(int *)(unaff_EBP - 0x13c4)) break;
    *(int *)(unaff_EBP - 0x1350) = piVar19[2];
    *(int *)(unaff_EBP - 0x1304) = piVar19[3];
    *(int *)(unaff_EBP - 0x1328) = piVar19[4];
    uVar30 = rand();
    uVar30 = uVar30 & 0x80000003;
    if ((int)uVar30 < 0) {
      uVar30 = (uVar30 - 1 | 0xfffffffc) + 1;
    }
    *(uint *)(unaff_EBP - 0x12dc) = uVar30 + 4;
    uVar30 = rand();
    uVar30 = uVar30 & 0x80000003;
    if ((int)uVar30 < 0) {
      uVar30 = (uVar30 - 1 | 0xfffffffc) + 1;
    }
    *(uint *)(unaff_EBP - 0x12f0) = uVar30 + 4;
    iVar28 = rand();
    iVar29 = *(int *)(unaff_EBP - 0x12dc);
    *(int *)(unaff_EBP - 0x12d0) = iVar28 % 6 + 4;
    iVar8 = *(int *)(unaff_EBP - 0x1350);
    iVar28 = iVar8 - iVar29;
    iVar29 = iVar29 + iVar8;
    *(int *)(unaff_EBP - 0x1314) = iVar28;
    *(int *)(unaff_EBP - 0x133c) = iVar29;
    if (iVar28 <= iVar29) goto code_r0x0051c712;
  }
  pvVar17 = *(void **)(unaff_EBP - 0x12e0);
  iVar29 = *(int *)(unaff_EBP - 0x135c);
  if ((*(int *)((int)pvVar17 + 0xa4) == 0) &&
     (iVar29 == (int)((int)*(float *)((int)pvVar17 + 0x8000f0) +
                     ((int)*(float *)((int)pvVar17 + 0x8000f0) >> 0x1f & 0xffU)) >> 8)) {
    uVar30 = (uint)*(float *)((int)pvVar17 + 0x8000f4);
    if ((*(int *)(unaff_EBP - 0x1364) == (int)(uVar30 + ((int)uVar30 >> 0x1f & 0xffU)) >> 8) &&
       (iVar29 = FUN_00406100(pvVar17,(int)*(float *)((int)pvVar17 + 0x8000f0),uVar30,unaff_EDI),
       iVar29 != 0)) {
      *(int *)(unaff_EBP - 0x133c) = *(int *)(iVar29 + 0x1c) + *(int *)(iVar29 + 0x10);
      if ((int)(*(int *)((int)pvVar17 + 0x24) - *(int *)((int)pvVar17 + 0x20) & 0xfffffffcU) <
          0x212d) {
        iVar29 = 0;
      }
      else {
        iVar29 = *(int *)(*(int *)((int)pvVar17 + 0x20) + 0x212c);
      }
      *(int *)(unaff_EBP - 0x1304) = iVar29;
      *(undefined4 *)(unaff_EBP - 0x151c) = 0;
      *(undefined4 *)(unaff_EBP - 0x1518) = 0;
      *(undefined4 *)(unaff_EBP - 0x1514) = 0;
      *(undefined4 *)(unaff_EBP - 0x1510) = 0;
      iVar28 = 0;
      do {
        pfVar12 = (float *)((unaff_EBP - 0x151c) + iVar28);
        iVar28 = iVar28 + 4;
        *(int *)((unaff_EBP - 0x1668) + iVar28) = (int)*pfVar12;
      } while (iVar28 < 0x10);
      iVar28 = *(int *)(unaff_EBP - 0x1304);
      *(int *)(unaff_EBP - 0x2b0) =
           (int)*(float *)((int)pvVar17 + 0x8000f0) - *(int *)(iVar29 + 0x44) / 2;
      iVar29 = *(int *)(iVar28 + 0x48);
      fVar38 = *(float *)((int)pvVar17 + 0x8000f4);
      *(undefined4 *)(unaff_EBP - 0x2a8) = *(undefined4 *)(unaff_EBP - 0x133c);
      pvVar15 = *(void **)(unaff_EBP - 0x1304);
      *(int *)(unaff_EBP - 0x2ac) = (int)fVar38 - iVar29 / 2;
      FUN_00524540(pvVar17,pvVar15,(uint *)(unaff_EBP - 0x2b0),0,6,0,unaff_EDI,'\x01',
                   (int *)(unaff_EBP - 0x1664),0);
    }
    iVar29 = *(int *)(unaff_EBP - 0x135c);
  }
  uVar30 = *(int *)(unaff_EBP - 0x1364) + iVar29 & 0x80000001;
  if ((int)uVar30 < 0) {
    uVar30 = (uVar30 - 1 | 0xfffffffe) + 1;
  }
  *(uint *)(unaff_EBP - 0x1360) = uVar30;
  if (uVar30 != 0) {
    *(undefined4 *)(unaff_EBP - 0x1338) = 0;
    uVar44 = FUN_0054a946();
    *(int *)(unaff_EBP - 0x12d0) = (int)uVar44;
    *(int *)(unaff_EBP - 0x12dc) = (int)(uVar44 >> 0x20);
    do {
      *(undefined8 *)(unaff_EBP - 0x14e0) = 0;
      iVar29 = rand();
      uVar9 = *(int *)(unaff_EBP - 0x132c) + 0x30 + iVar29 % 0xa0;
      uVar30 = *(uint *)(unaff_EBP - 0x12d0);
      iVar29 = *(int *)(unaff_EBP - 0x12dc);
      *(uint *)(unaff_EBP - 0x1328) = uVar9 * 0x10000 - *(uint *)(unaff_EBP - 0x12d0);
      *(uint *)(unaff_EBP - 0x12f0) =
           ((((int)uVar9 >> 0x1f) << 0x10 | uVar9 >> 0x10) - iVar29) -
           (uint)(uVar9 * 0x10000 < uVar30);
      iVar29 = rand();
      uVar30 = *(int *)(unaff_EBP - 0x1358) + 0x30 + iVar29 % 0xa0;
      iVar29 = uVar30 * 0x10000 - *(uint *)(unaff_EBP - 0x12d0);
      iVar28 = ((((int)uVar30 >> 0x1f) << 0x10 | uVar30 >> 0x10) - *(int *)(unaff_EBP - 0x12dc)) -
               (uint)(uVar30 * 0x10000 < *(uint *)(unaff_EBP - 0x12d0));
      *(int *)(unaff_EBP - 0x1334) = iVar29;
      *(int *)(unaff_EBP - 0x1c0) = iVar29;
      *(undefined4 *)(unaff_EBP - 0x1b8) = *(undefined4 *)(unaff_EBP - 0x1328);
      *(undefined4 *)(unaff_EBP - 0x1b4) = *(undefined4 *)(unaff_EBP - 0x12f0);
      uVar13 = *(undefined4 *)(unaff_EBP - 0x14e0);
      *(int *)(unaff_EBP - 0x1bc) = iVar28;
      *(undefined4 *)(unaff_EBP - 0x1b0) = uVar13;
      uVar13 = *(undefined4 *)(unaff_EBP - 0x14dc);
      *(int *)(unaff_EBP - 0x1350) = iVar28;
      puVar22 = *(uint **)(unaff_EBP - 0x1300);
      *(undefined4 *)(unaff_EBP - 0x1ac) = uVar13;
      uVar30 = puVar22[6];
      if ((uVar30 == 1) || (uVar30 == 5)) {
        fVar37 = FUN_0052c820(puVar22,(uint *)(unaff_EBP - 0x1c0),(uint *)(unaff_EBP - 0x1b8));
        *(float *)(unaff_EBP - 0x133c) = (float)fVar37;
        fVar38 = 1.0 - *(float *)(unaff_EBP - 0x133c);
        if ((fVar38 <= 0.0) || (fVar38 * fVar38 <= 0.0)) goto LAB_0051ccba;
      }
      else {
LAB_0051ccba:
        iVar29 = unaff_EDI;
        uVar45 = __alldiv(*(uint *)(unaff_EBP - 0x1328),*(uint *)(unaff_EBP - 0x12f0),0x10000,0);
        uVar30 = (uint)uVar45;
        uVar45 = __alldiv(*(uint *)(unaff_EBP - 0x1334),*(uint *)(unaff_EBP - 0x1350),0x10000,0);
        iVar29 = FUN_00406100(pvVar17,(uint)uVar45,uVar30,iVar29);
        if (iVar29 != 0) {
          uVar30 = *(int *)(iVar29 + 0x1c) + *(int *)(iVar29 + 0x10);
          *(uint *)(unaff_EBP - 0x1b0) = uVar30 * 0x10000;
          *(uint *)(unaff_EBP - 0x1ac) = ((int)uVar30 >> 0x1f) << 0x10 | uVar30 >> 0x10;
        }
        cVar6 = FUN_004e0740(pvVar17,unaff_EDI,(uint *)(unaff_EBP - 0x1c0));
        if (cVar6 != '\0') {
          puVar16 = *(undefined4 **)(unaff_EBP - 0x1378);
          iVar29 = FUN_004f3ba0(puVar16,(undefined4 *)puVar16[1],(undefined4 *)(unaff_EBP - 0x1c0));
          puVar16[1] = iVar29;
          piVar19 = *(int **)(iVar29 + 4);
          *(undefined4 *)(unaff_EBP - 0x1374) = 1;
          *piVar19 = iVar29;
          break;
        }
      }
      iVar29 = *(int *)(unaff_EBP - 0x1338) + 1;
      *(int *)(unaff_EBP - 0x1338) = iVar29;
    } while (iVar29 < 10);
  }
  cVar6 = *(char *)(*(int *)(unaff_EBP - 0x1344) + 0x18 + *(int *)(unaff_EBP - 0x137c));
  if (((cVar6 != '\x04') && (cVar6 != '\x01')) && (cVar6 != '\x03')) {
    iVar29 = rand();
    iVar29 = iVar29 % 10;
    fVar38 = *(float *)(unaff_EBP - 0x1310);
    *(int *)(unaff_EBP - 0x1320) = iVar29;
    if (((0.6 < fVar38) || (fVar38 < 0.3)) &&
       ((fVar39 = *(float *)(unaff_EBP - 0x12fc), 0.7 < fVar39 ||
        ((fVar39 < 0.4 && ((0.2 < fVar39 || (fVar38 < 0.8)))))))) {
      iVar29 = iVar29 + 10;
      *(int *)(unaff_EBP - 0x1320) = iVar29;
    }
    if (0 < iVar29) {
      *(int *)(unaff_EBP - 0x133c) = *(int *)(unaff_EBP - 0x135c) << 7;
      *(int *)(unaff_EBP - 0x1350) = *(int *)(unaff_EBP - 0x1364) << 7;
      do {
        uVar30 = rand();
        uVar30 = uVar30 & 0x80000007;
        if ((int)uVar30 < 0) {
          uVar30 = (uVar30 - 1 | 0xfffffff8) + 1;
        }
        *(uint *)(unaff_EBP - 0x12fc) = uVar30 + 3;
        uVar9 = rand();
        uVar9 = uVar9 & 0x80000007;
        if ((int)uVar9 < 0) {
          uVar9 = (uVar9 - 1 | 0xfffffff8) + 1;
        }
        *(uint *)(unaff_EBP - 0x12ec) = uVar9 + 3;
        uVar9 = rand();
        uVar9 = uVar9 & 0x80000007;
        if ((int)uVar9 < 0) {
          uVar9 = (uVar9 - 1 | 0xfffffff8) + 1;
        }
        *(uint *)(unaff_EBP - 0x12d0) = uVar9 + 3;
        iVar29 = *(int *)(unaff_EBP - 0x12ec);
        iVar28 = rand();
        *(int *)(unaff_EBP - 0x12f4) =
             iVar28 % (int)((0x40 - (uVar30 + 3)) * 4) +
             (*(int *)(unaff_EBP - 0x133c) + *(int *)(unaff_EBP - 0x12fc)) * 2;
        iVar10 = rand();
        iVar28 = *(int *)(unaff_EBP - 0x1350);
        iVar8 = *(int *)(unaff_EBP - 0x12ec);
        uVar9 = *(uint *)(unaff_EBP - 0x12f4);
        pvVar17 = *(void **)(unaff_EBP - 0x12e0);
        fVar38 = (float)(int)uVar9 - *(float *)((int)pvVar17 + 0x8000f0);
        *(float *)(unaff_EBP - 0x170c) = fVar38;
        uVar30 = iVar10 % ((0x40 - iVar29) * 4) + (iVar28 + iVar8) * 2;
        *(uint *)(unaff_EBP - 0x12f8) = uVar30;
        fVar39 = (float)(int)uVar30 - *(float *)((int)pvVar17 + 0x8000f4);
        if (400.0 <= fVar39 * fVar39 + fVar38 * fVar38) {
          piVar19 = (int *)**(int **)(unaff_EBP - 0x1378);
          if (piVar19 != *(int **)(unaff_EBP - 0x1378)) {
            *(uint *)(unaff_EBP - 0x1334) = ((int)uVar30 >> 0x1f) << 0x10 | uVar30 >> 0x10;
            uVar9 = *(uint *)(unaff_EBP - 0x12f4);
            *(uint *)(unaff_EBP - 0x12f0) = ((int)uVar9 >> 0x1f) << 0x10 | uVar9 >> 0x10;
            *(uint *)(unaff_EBP - 0x12dc) = uVar9 << 0x10;
            do {
              iVar29 = *(int *)(unaff_EBP - 0x1334);
              uVar9 = piVar19[4];
              iVar28 = piVar19[5];
              *(uint *)(unaff_EBP - 0x13bc) = uVar30 * 0x10000 - piVar19[4];
              uVar32 = *(uint *)(unaff_EBP - 0x12dc);
              *(uint *)(unaff_EBP - 0x13b8) = (iVar29 - iVar28) - (uint)(uVar30 * 0x10000 < uVar9);
              iVar29 = *(int *)(unaff_EBP - 0x12f0);
              *(float *)(unaff_EBP - 0x1348) = (float)*(longlong *)(unaff_EBP - 0x13bc);
              uVar9 = piVar19[2];
              uVar31 = piVar19[2];
              *(undefined4 *)(unaff_EBP - 0x1348) = *(undefined4 *)(unaff_EBP - 0x1348);
              iVar28 = piVar19[3];
              fVar38 = *(float *)(unaff_EBP - 0x1348);
              *(uint *)(unaff_EBP - 0x13b4) = uVar32 - uVar31;
              *(uint *)(unaff_EBP - 0x13b0) = (iVar29 - iVar28) - (uint)(uVar32 < uVar9);
              fVar38 = fVar38 * 1.5258789e-05;
              *(float *)(unaff_EBP - 0x1348) = (float)*(longlong *)(unaff_EBP - 0x13b4);
              *(undefined4 *)(unaff_EBP - 0x1348) = *(undefined4 *)(unaff_EBP - 0x1348);
              fVar39 = *(float *)(unaff_EBP - 0x1348) * 1.5258789e-05;
              *(float *)(unaff_EBP - 0x15dc) = fVar39;
              if (fVar38 * fVar38 + fVar39 * fVar39 < 1600.0) goto LAB_0051d429;
              piVar19 = (int *)*piVar19;
            } while (piVar19 != (int *)*(int *)(unaff_EBP - 0x1378));
            uVar9 = *(uint *)(unaff_EBP - 0x12f4);
            uVar30 = *(uint *)(unaff_EBP - 0x12f8);
          }
          fVar37 = FUN_004d19f0(pvVar17,uVar9,uVar30);
          *(float *)(unaff_EBP - 0x1334) = (float)fVar37;
          if (*(float *)(unaff_EBP - 0x1334) <= 0.25) {
            iVar28 = *(int *)(unaff_EBP - 0x1308);
            pvVar17 = *(void **)(unaff_EBP - 0x12e0);
            iVar10 = FUN_00406100(pvVar17,uVar9,*(uint *)(unaff_EBP - 0x12f8),iVar28);
            iVar8 = *(int *)(iVar10 + 0x1c);
            iVar29 = *(int *)(iVar10 + 0x10);
            *(int *)(unaff_EBP - 0x1348) = iVar10;
            iVar29 = iVar8 + iVar29;
            iVar8 = iVar8 + -1;
            *(int *)(unaff_EBP - 0x12d4) = iVar29;
            *(int *)(unaff_EBP - 0x1334) = iVar8;
            if (-1 < iVar8) {
              pvVar17 = *(void **)(unaff_EBP - 0x1348);
              do {
                puVar11 = FUN_004d23f0(pvVar17,iVar8);
                if (((puVar11[3] & 0x1f) != 0) && ((puVar11[3] & 0x1f) != 2)) {
                  iVar29 = *(int *)(unaff_EBP - 0x12d4);
                  break;
                }
                iVar29 = *(int *)(unaff_EBP - 0x12d4) + -1;
                iVar8 = iVar8 + -1;
                *(int *)(unaff_EBP - 0x12d4) = iVar29;
              } while (-1 < iVar8);
              iVar28 = *(int *)(unaff_EBP - 0x1308);
              pvVar17 = *(void **)(unaff_EBP - 0x12e0);
            }
            puVar11 = FUN_00405fd0(pvVar17,*(uint *)(unaff_EBP - 0x12f4),
                                   *(uint *)(unaff_EBP - 0x12f8),iVar29 + -1,iVar28);
            bVar7 = puVar11[3] & 0x1f;
            if ((((bVar7 != 0xb) && (bVar7 != 8)) && (bVar7 != 7)) &&
               (puVar11 = FUN_00405fd0(pvVar17,*(uint *)(unaff_EBP - 0x12f4),
                                       *(uint *)(unaff_EBP - 0x12f8),
                                       *(int *)(unaff_EBP - 0x12d4) + -1,iVar28),
               (puVar11[3] & 0x40) == 0)) {
              iVar28 = *(int *)(unaff_EBP - 0x12f4);
              iVar29 = iVar28 - *(int *)(unaff_EBP - 0x12fc);
              iVar8 = *(int *)(unaff_EBP - 0x12fc) + iVar28;
              *(int *)(unaff_EBP - 0x1314) = iVar29;
              *(int *)(unaff_EBP - 0x1368) = iVar8;
              if (iVar29 <= iVar8) {
                iVar8 = *(int *)(unaff_EBP - 0x12ec);
                iVar10 = *(int *)(unaff_EBP - 0x12f8);
                *(int *)(unaff_EBP - 0x1334) = *(int *)(unaff_EBP - 0x12f8) - iVar8;
                *(int *)(unaff_EBP - 0x1338) = iVar8 + iVar10;
                iVar28 = iVar29 - iVar28;
                *(int *)(unaff_EBP - 0x12e4) = iVar28;
                do {
                  iVar8 = *(int *)(unaff_EBP - 0x1334);
                  *(int *)(unaff_EBP - 0x12d8) = iVar8;
                  if (iVar8 <= *(int *)(unaff_EBP - 0x1338)) {
                    iVar28 = *(int *)(unaff_EBP - 0x12d4);
                    iVar10 = *(int *)(unaff_EBP - 0x12d0);
                    *(int *)(unaff_EBP - 0x12f4) = iVar28;
                    *(int *)(unaff_EBP - 0x12f4) = *(int *)(unaff_EBP - 0x12f4) + iVar10 * -2;
                    pvVar17 = *(void **)(unaff_EBP - 0x12e0);
                    iVar33 = *(int *)(unaff_EBP - 0x12f8);
                    *(int *)(unaff_EBP - 0x1348) = iVar10 * 2 + iVar28;
                    iVar28 = *(int *)(unaff_EBP - 0x1308);
                    *(int *)(unaff_EBP - 0x1304) = iVar8 - iVar33;
                    do {
                      iVar10 = *(int *)(unaff_EBP - 0x1348);
                      *(int *)(unaff_EBP - 0x12cc) = iVar10;
                      if (*(int *)(unaff_EBP - 0x12f4) <= iVar10) {
                        fVar37 = FUN_004d5d30(SUB84((double)iVar29 * 0.05,0),
                                              (int)((ulonglong)((double)iVar29 * 0.05) >> 0x20),
                                              (double)iVar8 * 0.05);
                        *(float *)(unaff_EBP - 0x12dc) = (float)fVar37;
                        fVar40 = (float)*(int *)(unaff_EBP - 0x12e4) /
                                 (float)*(int *)(unaff_EBP - 0x12fc);
                        iVar29 = *(int *)(unaff_EBP - 0x12d0);
                        fVar43 = (float)*(int *)(unaff_EBP - 0x1304) /
                                 (float)*(int *)(unaff_EBP - 0x12ec);
                        iVar10 = *(int *)(unaff_EBP - 0x12cc);
                        fVar39 = *(float *)(unaff_EBP - 0x12dc) * 0.8;
                        iVar8 = *(int *)(unaff_EBP - 0x12f4);
                        *(float *)(unaff_EBP - 0x1590) = fVar40;
                        *(float *)(unaff_EBP - 0x158c) = fVar43;
                        fVar38 = (float)iVar29;
                        fVar40 = fVar43 * fVar43 + fVar40 * fVar40;
                        iVar29 = iVar10 - *(int *)(unaff_EBP - 0x12d4);
                        *(float *)(unaff_EBP - 0x12f0) = fVar39;
                        *(float *)(unaff_EBP - 0x1328) = fVar38;
                        *(float *)(unaff_EBP - 0x12dc) = fVar40;
                        *(int *)(unaff_EBP - 0x1310) = iVar29;
                        do {
                          fVar43 = (float)iVar29 / fVar38 + fVar39;
                          if (fVar43 * fVar43 + fVar40 <= 1.0) {
                            puVar11 = FUN_00405fd0(pvVar17,*(uint *)(unaff_EBP - 0x1314),
                                                   *(uint *)(unaff_EBP - 0x12d8),iVar10,iVar28);
                            if ((puVar11[3] & 0x40) == 0) {
                              pfVar12 = FUN_0052d030(pvVar17,(float *)(unaff_EBP - 0x758),
                                                     *(float *)(unaff_EBP - 0x1314),
                                                     *(uint *)(unaff_EBP - 0x12d8),
                                                     *(int *)(unaff_EBP - 0x12cc),iVar28);
                              iVar29 = 0;
                              do {
                                pfVar1 = pfVar12 + iVar29;
                                iVar29 = iVar29 + 1;
                                *(char *)((unaff_EBP - 0x1319) + iVar29) = (char)(int)*pfVar1;
                              } while (iVar29 < 3);
                              *(undefined2 *)(unaff_EBP - 0x13f0) =
                                   *(undefined2 *)(unaff_EBP - 0x1318);
                              *(undefined1 *)(unaff_EBP - 0x13ee) =
                                   *(undefined1 *)(unaff_EBP - 0x1316);
                              iVar29 = *(int *)(unaff_EBP - 0x12cc);
                              uVar30 = *(uint *)(unaff_EBP - 0x12d8);
                              *(undefined1 *)(unaff_EBP - 0x13ed) = 0x26;
                              FUN_0041ff00(pvVar17,*(float *)(unaff_EBP - 0x1314),uVar30,iVar29,
                                           (undefined1 *)(unaff_EBP - 0x13f0),iVar28);
                            }
                            iVar8 = *(int *)(unaff_EBP - 0x12f4);
                            iVar29 = *(int *)(unaff_EBP - 0x1310);
                            iVar10 = *(int *)(unaff_EBP - 0x12cc);
                            fVar38 = *(float *)(unaff_EBP - 0x1328);
                            fVar39 = *(float *)(unaff_EBP - 0x12f0);
                            fVar40 = *(float *)(unaff_EBP - 0x12dc);
                          }
                          iVar10 = iVar10 + -1;
                          iVar29 = iVar29 + -1;
                          *(int *)(unaff_EBP - 0x12cc) = iVar10;
                          *(int *)(unaff_EBP - 0x1310) = iVar29;
                        } while (iVar8 <= iVar10);
                        iVar8 = *(int *)(unaff_EBP - 0x12d8);
                        iVar29 = *(int *)(unaff_EBP - 0x1314);
                      }
                      *(int *)(unaff_EBP - 0x1304) = *(int *)(unaff_EBP - 0x1304) + 1;
                      iVar8 = iVar8 + 1;
                      *(int *)(unaff_EBP - 0x12d8) = iVar8;
                    } while (iVar8 <= *(int *)(unaff_EBP - 0x1338));
                    iVar28 = *(int *)(unaff_EBP - 0x12e4);
                  }
                  iVar29 = iVar29 + 1;
                  iVar28 = iVar28 + 1;
                  *(int *)(unaff_EBP - 0x1314) = iVar29;
                  *(int *)(unaff_EBP - 0x12e4) = iVar28;
                } while (iVar29 <= *(int *)(unaff_EBP - 0x1368));
              }
            }
            pvVar17 = *(void **)(unaff_EBP - 0x12e0);
          }
        }
LAB_0051d429:
        piVar19 = (int *)(unaff_EBP - 0x1320);
        *piVar19 = *piVar19 + -1;
      } while (*piVar19 != 0);
    }
  }
  iVar29 = *(int *)(*(int *)(unaff_EBP - 0x1300) + 0x18);
  if ((iVar29 == 1) || (iVar29 == 5)) {
    iVar29 = *(int *)(unaff_EBP - 0x1308);
    FUN_004e28e0();
  }
  else {
    iVar29 = *(int *)(unaff_EBP - 0x1308);
  }
  if (*(char *)(*(int *)(unaff_EBP - 0x1344) + 0x18 + *(int *)(unaff_EBP - 0x137c)) == '\x04') {
    uVar30 = *(uint *)(unaff_EBP - 5000);
    uVar9 = *(uint *)(unaff_EBP - 0x138c);
    *(uint *)(unaff_EBP - 0x234) = uVar30;
    *(uint *)(unaff_EBP - 0x238) = uVar9;
    iVar28 = FUN_00406100(pvVar17,uVar9,uVar30,iVar29);
    uVar9 = *(int *)(iVar28 + 0x10) + *(int *)(iVar28 + 0x1c);
    uVar30 = *(uint *)(unaff_EBP - 0x138c);
    uVar32 = ((int)uVar30 >> 0x1f) << 0x10 | uVar30 >> 0x10;
    *(uint *)(unaff_EBP - 800) = uVar30 << 0x10;
    *(uint *)(unaff_EBP - 0x1304) = uVar30 << 0x10;
    uVar30 = *(uint *)(unaff_EBP - 5000);
    *(uint *)(unaff_EBP - 0x31c) = uVar32;
    *(uint *)(unaff_EBP - 0x1328) = uVar32;
    uVar32 = ((int)uVar30 >> 0x1f) << 0x10 | uVar30 >> 0x10;
    *(uint *)(unaff_EBP - 0x318) = uVar30 << 0x10;
    *(uint *)(unaff_EBP - 0x1320) = uVar30 << 0x10;
    *(uint *)(unaff_EBP - 0x314) = uVar32;
    *(uint *)(unaff_EBP - 0x1338) = uVar32;
    *(uint *)(unaff_EBP - 0x230) = uVar9;
    uVar30 = ((int)uVar9 >> 0x1f) << 0x10 | uVar9 >> 0x10;
    *(uint *)(unaff_EBP - 0x310) = uVar9 * 0x10000;
    *(uint *)(unaff_EBP - 0x1344) = uVar9 * 0x10000;
    puVar16 = *(undefined4 **)(unaff_EBP - 0x1378);
    *(uint *)(unaff_EBP - 0x30c) = uVar30;
    puVar4 = (undefined4 *)puVar16[1];
    *(uint *)(unaff_EBP - 0x12ec) = uVar30;
    iVar28 = FUN_004f3ba0(puVar16,puVar4,(undefined4 *)(unaff_EBP - 800));
    if (*(int *)(unaff_EBP - 0x1374) == 0x7fffffe) {
                    /* WARNING: Subroutine does not return */
      std::_Xlength_error("list<T> too long");
    }
    iVar8 = *(int *)(unaff_EBP - 0x1378);
    *(int *)(unaff_EBP - 0x1374) = *(int *)(unaff_EBP - 0x1374) + 1;
    *(int *)(iVar8 + 4) = iVar28;
    **(int **)(iVar28 + 4) = iVar28;
    iVar28 = rand();
    iVar28 = iVar28 % 3 + 6;
    *(int *)(unaff_EBP - 0x12f0) = iVar28;
    if (0 < iVar28) {
      dVar41 = (double)iVar28;
      iVar28 = 0;
      *(double *)(unaff_EBP - 0x13bc) = dVar41;
      *(undefined4 *)(unaff_EBP - 0x12dc) = 0;
      do {
        fVar38 = (float)(((double)iVar28 * 3.141592653589793) / dVar41);
        *(float *)(unaff_EBP - 0x133c) = fVar38;
        dVar41 = (double)fVar38;
        libm_sse2_sin_precise();
        *(float *)(unaff_EBP - 0x1350) = (float)dVar41;
        dVar41 = (double)*(float *)(unaff_EBP - 0x133c);
        libm_sse2_cos_precise();
        uVar13 = *(undefined4 *)(unaff_EBP - 0x230);
        *(undefined4 *)(unaff_EBP - 0x133c) = uVar13;
        *(undefined4 *)(unaff_EBP - 0x30) = uVar13;
        fVar38 = *(float *)(unaff_EBP - 0x1350);
        *(int *)(unaff_EBP - 0x4a8) = (int)((float)dVar41 * 25.0);
        iVar28 = (int)(fVar38 * 25.0);
        uVar13 = *(undefined4 *)(unaff_EBP - 0x234);
        *(undefined4 *)(unaff_EBP - 0x38) = *(undefined4 *)(unaff_EBP - 0x238);
        *(undefined4 *)(unaff_EBP - 0x34) = uVar13;
        uVar9 = *(int *)(unaff_EBP - 0x38) + (int)((float)dVar41 * 25.0);
        uVar30 = *(int *)(unaff_EBP - 0x34) + iVar28;
        *(uint *)(unaff_EBP - 0x38) = uVar9;
        *(int *)(unaff_EBP - 0x4a4) = iVar28;
        *(uint *)(unaff_EBP - 0x34) = uVar30;
        iVar28 = FUN_00406100(pvVar17,uVar9,uVar30,iVar29);
        if (iVar28 == 0) {
          iVar28 = *(int *)(unaff_EBP - 0x133c);
        }
        else {
          iVar28 = *(int *)(iVar28 + 0x1c) + *(int *)(iVar28 + 0x10);
        }
        *(int *)(unaff_EBP - 0x30) = iVar28 + 4;
        uVar30 = rand();
        uVar30 = uVar30 & 0x80000003;
        if ((int)uVar30 < 0) {
          uVar30 = (uVar30 - 1 | 0xfffffffc) + 1;
        }
        *(uint *)(unaff_EBP - 0x12d0) = uVar30 + 3;
        uVar30 = rand();
        uVar30 = uVar30 & 0x80000003;
        if ((int)uVar30 < 0) {
          uVar30 = (uVar30 - 1 | 0xfffffffc) + 1;
        }
        *(int *)(unaff_EBP - 0x1310) = *(int *)(unaff_EBP - 0x12d0) * 2;
        *(int *)(unaff_EBP - 0x12f8) = *(int *)(unaff_EBP - 0x38) - *(int *)(unaff_EBP - 0x1310);
        iVar28 = *(int *)(unaff_EBP - 0x1310);
        iVar8 = *(int *)(unaff_EBP - 0x38);
        iVar10 = *(int *)(unaff_EBP - 0x12f8);
        *(uint *)(unaff_EBP - 0x12fc) = uVar30 + 3;
        if (iVar10 <= iVar28 + iVar8) {
          do {
            iVar28 = *(int *)(unaff_EBP - 0x12fc);
            iVar8 = *(int *)(unaff_EBP - 0x34);
            iVar29 = *(int *)(unaff_EBP - 0x1308);
            iVar33 = iVar8 + iVar28 * -2;
            pvVar17 = *(void **)(unaff_EBP - 0x12e0);
            *(int *)(unaff_EBP - 0x12d4) = iVar33;
            if (iVar33 <= iVar8 + iVar28 * 2) {
              do {
                iVar8 = *(int *)(unaff_EBP - 0x30);
                iVar28 = iVar8 + 0x14;
                *(int *)(unaff_EBP - 0x12f4) = iVar28;
                if (iVar8 + -0x14 <= iVar28) {
                  dVar41 = (double)iVar33 * 0.05;
                  fVar37 = FUN_004d5d30(SUB84(dVar41,0),(int)((ulonglong)dVar41 >> 0x20),dVar41);
                  *(float *)(unaff_EBP - 0x133c) = (float)fVar37;
                  fVar38 = *(float *)(unaff_EBP - 0x133c) * 0.3;
                  iVar28 = *(int *)(unaff_EBP - 0x12f4);
                  fVar39 = (float)*(int *)(unaff_EBP - 0x12fc);
                  dVar41 = (double)*(int *)(unaff_EBP - 0x12f8) * 0.05;
                  *(float *)(unaff_EBP - 0x1348) = fVar38;
                  *(float *)(unaff_EBP - 0x1368) = fVar39;
                  *(double *)(unaff_EBP - 0x13b4) = dVar41;
                  do {
                    iVar8 = *(int *)(unaff_EBP - 0x12d4);
                    iVar10 = *(int *)(unaff_EBP - 0x34);
                    *(float *)(unaff_EBP - 0x1334) =
                         (float)(iVar28 - *(int *)(unaff_EBP - 0x30)) / 10.0;
                    *(float *)(unaff_EBP - 0x1350) = (float)(iVar8 - iVar10) / fVar39 + fVar38;
                    fVar37 = FUN_004d5d30(SUB84(dVar41,0),(int)((ulonglong)dVar41 >> 0x20),
                                          (double)iVar28 * 0.05);
                    *(float *)(unaff_EBP - 0x133c) = (float)fVar37;
                    uVar30 = *(uint *)(unaff_EBP - 0x12f8);
                    fVar39 = *(float *)(unaff_EBP - 0x133c) * 0.3 +
                             (float)(int)(uVar30 - *(int *)(unaff_EBP - 0x38)) /
                             (float)*(int *)(unaff_EBP - 0x12d0);
                    fVar38 = *(float *)(unaff_EBP - 0x1350);
                    *(float *)(unaff_EBP - 6000) = fVar39;
                    if ((fVar39 * fVar39 + fVar38 * fVar38 +
                         *(float *)(unaff_EBP - 0x1334) * *(float *)(unaff_EBP - 0x1334) <= 1.0) &&
                       (puVar11 = FUN_00405fd0(pvVar17,uVar30,*(uint *)(unaff_EBP - 0x12d4),
                                               *(int *)(unaff_EBP - 0x12f4),iVar29),
                       (puVar11[3] & 0x40) == 0)) {
                      pfVar12 = FUN_0052d030(pvVar17,(float *)(unaff_EBP - 0x770),
                                             *(float *)(unaff_EBP - 0x12f8),
                                             *(uint *)(unaff_EBP - 0x12d4),
                                             *(int *)(unaff_EBP - 0x12f4),iVar29);
                      iVar28 = 0;
                      do {
                        pfVar1 = pfVar12 + iVar28;
                        iVar28 = iVar28 + 1;
                        *(char *)((unaff_EBP - 0x12c9) + iVar28) = (char)(int)*pfVar1;
                      } while (iVar28 < 3);
                      *(undefined2 *)(unaff_EBP - 0x13f8) = *(undefined2 *)(unaff_EBP - 0x12c8);
                      *(undefined1 *)(unaff_EBP - 0x13f6) = *(undefined1 *)(unaff_EBP - 0x12c6);
                      iVar28 = *(int *)(unaff_EBP - 0x12f4);
                      uVar30 = *(uint *)(unaff_EBP - 0x12d4);
                      *(undefined1 *)(unaff_EBP - 0x13f5) = 6;
                      FUN_0041ff00(pvVar17,*(float *)(unaff_EBP - 0x12f8),uVar30,iVar28,
                                   (undefined1 *)(unaff_EBP - 0x13f8),iVar29);
                    }
                    iVar8 = *(int *)(unaff_EBP - 0x30);
                    fVar38 = *(float *)(unaff_EBP - 0x1348);
                    dVar41 = *(double *)(unaff_EBP - 0x13b4);
                    fVar39 = *(float *)(unaff_EBP - 0x1368);
                    iVar28 = *(int *)(unaff_EBP - 0x12f4) + -1;
                    *(int *)(unaff_EBP - 0x12f4) = iVar28;
                  } while (iVar8 + -0x14 <= iVar28);
                  iVar33 = *(int *)(unaff_EBP - 0x12d4);
                }
                iVar28 = *(int *)(unaff_EBP - 0x12fc);
                iVar8 = *(int *)(unaff_EBP - 0x34);
                iVar29 = *(int *)(unaff_EBP - 0x1308);
                iVar33 = iVar33 + 1;
                *(int *)(unaff_EBP - 0x12d4) = iVar33;
              } while (iVar33 <= iVar8 + iVar28 * 2);
              iVar10 = *(int *)(unaff_EBP - 0x12f8);
            }
            iVar28 = *(int *)(unaff_EBP - 0x38);
            iVar8 = *(int *)(unaff_EBP - 0x1310);
            iVar10 = iVar10 + 1;
            *(int *)(unaff_EBP - 0x12f8) = iVar10;
          } while (iVar10 <= iVar28 + iVar8);
        }
        dVar41 = *(double *)(unaff_EBP - 0x13bc);
        iVar28 = *(int *)(unaff_EBP - 0x12dc) + 2;
        piVar19 = (int *)(unaff_EBP - 0x12f0);
        *piVar19 = *piVar19 + -1;
        iVar8 = *piVar19;
        *(int *)(unaff_EBP - 0x12dc) = iVar28;
      } while (iVar8 != 0);
    }
    FUN_004c84b0(unaff_EBP - 0x6f8);
    *(undefined1 *)(unaff_EBP - 4) = 4;
    *(undefined8 *)(unaff_EBP - 0x16b4) = 0;
    uVar44 = FUN_0054a946();
    iVar29 = (int)(uVar44 >> 0x20);
    uVar34 = (uint)uVar44;
    uVar30 = *(uint *)(unaff_EBP - 0x1304);
    uVar9 = *(uint *)(unaff_EBP - 0x1320);
    *(undefined4 *)(unaff_EBP - 0x3b0) = *(undefined4 *)(unaff_EBP - 0x1328);
    *(undefined4 *)(unaff_EBP - 0x3a8) = *(undefined4 *)(unaff_EBP - 0x1338);
    *(undefined4 *)(unaff_EBP - 0x3a4) = *(undefined4 *)(unaff_EBP - 0x1344);
    *(undefined4 *)(unaff_EBP - 0x3a0) = *(undefined4 *)(unaff_EBP - 0x12ec);
    *(uint *)(unaff_EBP - 0x3b4) = uVar30;
    uVar31 = uVar34 + uVar30;
    iVar28 = iVar29 + *(int *)(unaff_EBP - 0x1328) + (uint)CARRY4(uVar34,uVar30);
    *(uint *)(unaff_EBP - 0x3ac) = uVar9;
    *(uint *)(unaff_EBP - 0x1534) = uVar34;
    *(uint *)(unaff_EBP - 0x1544) = uVar34;
    *(uint *)(unaff_EBP - 0x444) = uVar34;
    *(uint *)(unaff_EBP - 0x43c) = uVar34;
    uVar32 = uVar34 + uVar9;
    uVar13 = *(undefined4 *)(unaff_EBP - 0x1344);
    *(int *)(unaff_EBP - 0x12d0) = iVar28;
    *(int *)(unaff_EBP - 0x3d0) = iVar28;
    *(undefined4 *)(unaff_EBP - 0x3c4) = uVar13;
    uVar13 = *(undefined4 *)(unaff_EBP - 0x12ec);
    *(int *)(unaff_EBP - 0x6ec) = iVar28;
    uVar47 = *(undefined4 *)(unaff_EBP - 0x1344);
    *(int *)(unaff_EBP - 0x1530) = iVar29;
    *(int *)(unaff_EBP - 0x1540) = iVar29;
    *(int *)(unaff_EBP - 0x440) = iVar29;
    *(int *)(unaff_EBP - 0x438) = iVar29;
    uVar30 = iVar29 + *(int *)(unaff_EBP - 0x1338) + (uint)CARRY4(uVar34,uVar9);
    *(undefined4 *)(unaff_EBP - 0x3c0) = uVar13;
    *(undefined4 *)(unaff_EBP - 0x6e0) = uVar47;
    pvVar17 = *(void **)(unaff_EBP - 0x12e0);
    *(undefined4 *)(unaff_EBP - 0x6dc) = uVar13;
    iVar29 = *(int *)(unaff_EBP - 0x1308);
    *(undefined8 *)(unaff_EBP - 0x434) = 0;
    *(uint *)(unaff_EBP - 0x3d4) = uVar31;
    *(uint *)(unaff_EBP - 0x3cc) = uVar32;
    *(uint *)(unaff_EBP - 0x3c8) = uVar30;
    *(uint *)(unaff_EBP - 0x6f0) = uVar31;
    *(uint *)(unaff_EBP - 0x6e8) = uVar32;
    *(uint *)(unaff_EBP - 0x6e4) = uVar30;
    while( true ) {
      iVar28 = FUN_00406050(pvVar17,uVar31,*(uint *)(unaff_EBP - 0x12d0),uVar32,uVar30,
                            *(uint *)(unaff_EBP - 0x1344),*(uint *)(unaff_EBP - 0x12ec),iVar29);
      if (((*(byte *)(iVar28 + 3) & 0x1f) != 0) && ((*(byte *)(iVar28 + 3) & 0x1f) != 2)) break;
      uVar9 = *(uint *)(unaff_EBP - 0x6e0);
      uVar13 = *(undefined4 *)(unaff_EBP - 0x6ec);
      uVar30 = *(uint *)(unaff_EBP - 0x6e4);
      iVar28 = uVar9 - 0x10000;
      *(int *)(unaff_EBP - 0x1344) = iVar28;
      *(int *)(unaff_EBP - 0x6e0) = iVar28;
      iVar28 = *(int *)(unaff_EBP - 0x6dc) + -1 + (uint)(0xffff < uVar9);
      *(int *)(unaff_EBP - 0x12ec) = iVar28;
      *(int *)(unaff_EBP - 0x6dc) = iVar28;
      uVar32 = *(uint *)(unaff_EBP - 0x6e8);
      *(undefined4 *)(unaff_EBP - 0x12d0) = uVar13;
      uVar31 = *(uint *)(unaff_EBP - 0x6f0);
    }
    uVar30 = *(uint *)(unaff_EBP - 0x6dc);
    uVar9 = *(uint *)(unaff_EBP - 0x6e0);
    while( true ) {
      iVar28 = FUN_00406050(pvVar17,*(uint *)(unaff_EBP - 0x6f0),*(uint *)(unaff_EBP - 0x6ec),
                            *(uint *)(unaff_EBP - 0x6e8),*(uint *)(unaff_EBP - 0x6e4),uVar9,uVar30,
                            iVar29);
      if (((*(byte *)(iVar28 + 3) & 0x1f) == 0) || ((*(byte *)(iVar28 + 3) & 0x1f) == 2)) break;
      uVar9 = *(uint *)(unaff_EBP - 0x6e0) + 0x10000;
      uVar30 = *(int *)(unaff_EBP - 0x6dc) + (uint)(0xfffeffff < *(uint *)(unaff_EBP - 0x6e0));
      *(uint *)(unaff_EBP - 0x6e0) = uVar9;
      *(uint *)(unaff_EBP - 0x6dc) = uVar30;
    }
    *(undefined4 *)(unaff_EBP - 0x6f8) = 0x2d;
    uVar30 = rand();
    uVar30 = uVar30 & 0x80000003;
    if ((int)uVar30 < 0) {
      uVar30 = (uVar30 - 1 | 0xfffffffc) + 1;
    }
    *(uint *)(unaff_EBP - 0x6d8) = uVar30;
    *(undefined4 *)(unaff_EBP - 0x6d4) = 0x40800000;
    *(undefined4 *)(unaff_EBP - 0x6d0) = 0x40800000;
    *(undefined4 *)(unaff_EBP - 0x6cc) = 0x40a00000;
    FUN_004d6670((void *)(iVar29 + 0xc),(void **)(unaff_EBP - 0x6f8));
    iVar28 = *(int *)(unaff_EBP - 0x6b0);
    *(undefined1 *)(unaff_EBP - 4) = 3;
    if (iVar28 != 0) {
      std::_Container_base0::_Orphan_all((_Container_base0 *)(unaff_EBP - 0x6b0));
      FUN_00406310(*(undefined4 **)(unaff_EBP - 0x6b0),*(undefined4 **)(unaff_EBP - 0x6ac));
      operator_delete(*(void **)(unaff_EBP - 0x6b0));
      *(undefined4 *)(unaff_EBP - 0x6b0) = 0;
      *(undefined4 *)(unaff_EBP - 0x6ac) = 0;
      *(undefined4 *)(unaff_EBP - 0x6a8) = 0;
    }
  }
  uVar13 = *(undefined4 *)(unaff_EBP - 0x1358);
  uVar30 = *(int *)(unaff_EBP - 0x132c) + 8;
  *(uint *)(unaff_EBP - 0x1328) = uVar30;
  *(undefined4 *)(unaff_EBP - 0x12d8) = uVar13;
  *(undefined4 *)(unaff_EBP - 0x12f0) = 0xe;
  *(undefined4 *)(unaff_EBP - 0x1368) = 5;
  do {
    *(uint *)(unaff_EBP - 0x1314) = uVar30;
    *(undefined4 *)(unaff_EBP - 0x12dc) = 0xe;
    do {
      puVar22 = *(uint **)(unaff_EBP - 0x1300);
      uVar9 = puVar22[6];
      *(undefined4 *)(unaff_EBP - 0x1344) = 0;
      if (uVar9 == 3) {
        *(uint *)(unaff_EBP - 0x14d8) = uVar30 << 0x10;
        iVar28 = *(int *)(unaff_EBP - 0x12d8);
        *(uint *)(unaff_EBP - 0x14d4) = ((int)uVar30 >> 0x1f) << 0x10 | uVar30 >> 0x10;
        uVar30 = iVar28 + 8;
        *(uint *)(unaff_EBP - 0x1484) = uVar30 * 0x10000;
        *(uint *)(unaff_EBP - 0x1480) = ((int)uVar30 >> 0x1f) << 0x10 | uVar30 >> 0x10;
        fVar37 = FUN_0052c820(puVar22,(uint *)(unaff_EBP - 0x1484),(uint *)(unaff_EBP - 0x14d8));
        uVar30 = *(uint *)(unaff_EBP - 0x1314);
        *(float *)(unaff_EBP - 0x133c) = (float)fVar37;
        fVar38 = 1.0 - *(float *)(unaff_EBP - 0x133c);
        if (0.0 < fVar38) {
          *(float *)(unaff_EBP - 0x1344) = fVar38 * fVar38;
        }
        else {
          *(undefined4 *)(unaff_EBP - 0x1344) = 0;
        }
      }
      iVar28 = FUN_00406100(pvVar17,*(int *)(unaff_EBP - 0x12d8) + 8,uVar30,iVar29);
      if (iVar28 == 0) {
        fVar37 = (float10)FUN_004f8570(pvVar17,(float)(*(int *)(unaff_EBP - 0x12d8) + 8),
                                       *(uint *)(unaff_EBP - 0x1314));
        *(float *)(unaff_EBP - 0x133c) = (float)fVar37;
        uVar13 = *(undefined4 *)(unaff_EBP - 0x133c);
      }
      else {
        uVar13 = *(undefined4 *)(iVar28 + 4);
      }
      *(undefined4 *)(unaff_EBP - 0x12f8) = uVar13;
      iVar28 = rand();
      *(int *)(unaff_EBP - 0x12f4) =
           (int)((float)(iVar28 % 5) + *(float *)(unaff_EBP - 0x12f8) * 2.0 + 6.0 +
                *(float *)(unaff_EBP - 0x1344) * 4.0);
      iVar8 = rand();
      fVar38 = *(float *)(unaff_EBP - 0x1344);
      iVar28 = *(int *)(unaff_EBP - 0x12f4);
      iVar10 = *(int *)(unaff_EBP - 0x1314) + -8 + iVar28;
      fVar39 = *(float *)(unaff_EBP - 0x12f8);
      *(int *)(unaff_EBP - 0x12e4) = iVar10;
      *(int *)(unaff_EBP - 0x12ec) =
           (int)((((float)iVar8 * 8.0) / 32767.0 + fVar38 * 6.0 + 8.0) * (fVar39 * 0.5 + 1.0));
      iVar8 = *(int *)(unaff_EBP - 0x12d8) + iVar28;
      fVar38 = (float)iVar8 - *(float *)((int)pvVar17 + 0x8000f0);
      fVar39 = (float)iVar10 - *(float *)((int)pvVar17 + 0x8000f4);
      *(int *)(unaff_EBP - 0x12cc) = iVar8;
      *(float *)(unaff_EBP - 0x15ec) = fVar38;
      if (400.0 <= fVar39 * fVar39 + fVar38 * fVar38) {
        iVar10 = *(int *)(unaff_EBP - 0x1358) + 0x100 + -(iVar28 / 2);
        iVar8 = *(int *)(unaff_EBP - 0x12cc);
        if (iVar10 <= *(int *)(unaff_EBP - 0x12cc)) {
          iVar8 = iVar10;
        }
        iVar10 = -(iVar28 / 2) + *(int *)(unaff_EBP - 0x132c) + 0x100;
        iVar28 = *(int *)(unaff_EBP - 0x12e4);
        if (iVar10 <= *(int *)(unaff_EBP - 0x12e4)) {
          iVar28 = iVar10;
        }
        piVar19 = *(int **)(unaff_EBP - 0x1378);
        *(int *)(unaff_EBP - 0x12e4) = iVar28;
        piVar18 = (int *)*piVar19;
        *(int *)(unaff_EBP - 0x12cc) = iVar8;
        if (piVar18 != piVar19) {
          uVar30 = *(uint *)(unaff_EBP - 0x12e4);
          *(uint *)(unaff_EBP - 0x133c) = uVar30 << 0x10;
          uVar9 = *(uint *)(unaff_EBP - 0x12cc);
          *(uint *)(unaff_EBP - 0x1350) = ((int)uVar30 >> 0x1f) << 0x10 | uVar30 >> 0x10;
          *(uint *)(unaff_EBP - 0x12d0) = ((int)uVar9 >> 0x1f) << 0x10 | uVar9 >> 0x10;
          *(uint *)(unaff_EBP - 0x1348) = uVar9 << 0x10;
          do {
            uVar30 = *(uint *)(unaff_EBP - 0x133c);
            uVar9 = piVar18[4];
            iVar28 = *(int *)(unaff_EBP - 0x1350);
            iVar8 = piVar18[5];
            *(uint *)(unaff_EBP - 0x13b4) = uVar30 - piVar18[4];
            uVar32 = *(uint *)(unaff_EBP - 0x1348);
            *(uint *)(unaff_EBP - 0x13b0) = (iVar28 - iVar8) - (uint)(uVar30 < uVar9);
            iVar28 = *(int *)(unaff_EBP - 0x12d0);
            *(float *)(unaff_EBP - 0x1334) = (float)*(longlong *)(unaff_EBP - 0x13b4);
            uVar30 = piVar18[2];
            uVar9 = piVar18[2];
            *(undefined4 *)(unaff_EBP - 0x1334) = *(undefined4 *)(unaff_EBP - 0x1334);
            fVar38 = *(float *)(unaff_EBP - 0x1334);
            iVar8 = piVar18[3];
            *(uint *)(unaff_EBP - 0x13bc) = uVar32 - uVar9;
            *(uint *)(unaff_EBP - 0x13b8) = (iVar28 - iVar8) - (uint)(uVar32 < uVar30);
            fVar38 = fVar38 * 1.5258789e-05;
            *(float *)(unaff_EBP - 0x1334) = (float)*(longlong *)(unaff_EBP - 0x13bc);
            *(undefined4 *)(unaff_EBP - 0x1334) = *(undefined4 *)(unaff_EBP - 0x1334);
            fVar39 = *(float *)(unaff_EBP - 0x1334) * 1.5258789e-05;
            *(float *)(unaff_EBP - 0x173c) = fVar39;
            if (fVar38 * fVar38 + fVar39 * fVar39 < 1600.0) goto LAB_0051e593;
            piVar18 = (int *)*piVar18;
          } while (piVar18 != (int *)*(int *)(unaff_EBP - 0x1378));
          iVar8 = *(int *)(unaff_EBP - 0x12cc);
        }
        iVar28 = *(int *)((int)pvVar17 + 0x800298);
        dVar42 = (double)*(int *)(unaff_EBP - 0x12e4) * 0.001;
        *(double *)(unaff_EBP - 0x1340) = dVar42;
        iVar10 = *(int *)((int)pvVar17 + 0x800294);
        *(double *)(unaff_EBP - 0x1354) = (double)iVar8 * 0.001;
        dVar41 = (double)iVar10 + (double)iVar8 * 0.001;
        fVar37 = FUN_004d5d30(SUB84(dVar41,0),(int)((ulonglong)dVar41 >> 0x20),
                              (double)iVar28 + dVar42);
        *(float *)(unaff_EBP - 0x12fc) = (float)fVar37;
        uVar30 = rand();
        uVar30 = uVar30 & 0x80000001;
        if ((int)uVar30 < 0) {
          uVar30 = (uVar30 - 1 | 0xfffffffe) + 1;
        }
        fVar38 = *(float *)(unaff_EBP - 0x12fc);
        *(uint *)(unaff_EBP - 0x12d4) = -(uint)(uVar30 != 0) & 5;
        if (fVar38 <= 0.3) {
          iVar28 = rand();
          uVar13 = *(undefined4 *)(unaff_EBP - 0x12d4);
          if (iVar28 % 10 == 0) {
            uVar13 = 1;
          }
          *(undefined4 *)(unaff_EBP - 0x12d4) = uVar13;
        }
        else {
          iVar28 = rand();
          if (iVar28 % 10 != 0) {
            *(undefined4 *)(unaff_EBP - 0x12d4) = 1;
          }
        }
        iVar28 = rand();
        uVar13 = *(undefined4 *)(unaff_EBP - 0x12d4);
        uVar30 = *(uint *)(unaff_EBP - 0x12e4);
        uVar9 = *(uint *)(unaff_EBP - 0x12cc);
        if (iVar28 % 10 == 0) {
          uVar13 = 2;
        }
        *(undefined4 *)(unaff_EBP - 0x12d4) = uVar13;
        iVar28 = FUN_00406100(pvVar17,uVar9,uVar30,iVar29);
        if (iVar28 == 0) {
          fVar37 = (float10)FUN_004f8b40(pvVar17,*(int *)(unaff_EBP - 0x12cc),
                                         *(int *)(unaff_EBP - 0x12e4));
          *(float *)(unaff_EBP - 0x12fc) = (float)fVar37;
          fVar38 = *(float *)(unaff_EBP - 0x12fc);
        }
        else {
          fVar38 = *(float *)(iVar28 + 8);
        }
        *(float *)(unaff_EBP - 0x12d0) = fVar38;
        if ((0.8 < fVar38) && (0.7 < *(float *)(unaff_EBP - 0x12f8))) {
          uVar30 = rand();
          uVar30 = uVar30 & 0x80000001;
          if ((int)uVar30 < 0) {
            uVar30 = (uVar30 - 1 | 0xfffffffe) + 1;
          }
          *(uint *)(unaff_EBP - 0x12d4) = (uVar30 != 0) + 4;
          uVar30 = rand();
          uVar30 = uVar30 & 0x80000003;
          bVar36 = uVar30 == 0;
          if ((int)uVar30 < 0) {
            bVar36 = (uVar30 - 1 | 0xfffffffc) == 0xffffffff;
          }
          uVar13 = *(undefined4 *)(unaff_EBP - 0x12d4);
          fVar38 = *(float *)(unaff_EBP - 0x12d0);
          if (bVar36) {
            uVar13 = 3;
          }
          *(undefined4 *)(unaff_EBP - 0x12d4) = uVar13;
        }
        if (0.3 <= fVar38) {
          if (fVar38 < 0.7) {
            dVar41 = *(double *)(unaff_EBP - 0x1354) + 8473.0;
            fVar37 = FUN_004d5d30(SUB84(dVar41,0),(int)((ulonglong)dVar41 >> 0x20),
                                  *(double *)(unaff_EBP - 0x1340) + 9438.0);
            *(float *)(unaff_EBP - 0x133c) = (float)fVar37;
            if ((0.8 < *(float *)(unaff_EBP - 0x133c)) && (iVar28 = rand(), iVar28 % 5 != 0)) {
              *(undefined4 *)(unaff_EBP - 0x12d4) = 2;
              goto LAB_0051e307;
            }
          }
          if (*(int *)(unaff_EBP - 0x12d4) == 1) goto LAB_0051e2c2;
          if (*(int *)(unaff_EBP - 0x12d4) == 2) goto LAB_0051e307;
        }
        else {
          if (0.2 < fVar38) {
            dVar41 = *(double *)(unaff_EBP - 0x1354) + 8473.0;
            fVar37 = FUN_004d5d30(SUB84(dVar41,0),(int)((ulonglong)dVar41 >> 0x20),
                                  *(double *)(unaff_EBP - 0x1340) + 9438.0);
            *(float *)(unaff_EBP - 0x133c) = (float)fVar37;
            if ((0.6 < *(float *)(unaff_EBP - 0x133c)) && (iVar28 = rand(), iVar28 % 5 != 0)) {
              *(undefined4 *)(unaff_EBP - 0x12d4) = 2;
LAB_0051e307:
              iVar28 = rand();
              pvVar17 = *(void **)(unaff_EBP - 0x12e0);
              *(int *)(unaff_EBP - 0x12ec) =
                   *(int *)(unaff_EBP - 0x12ec) + iVar28 % (*(int *)(unaff_EBP - 0x12ec) / 2);
              goto LAB_0051e32d;
            }
          }
          *(undefined4 *)(unaff_EBP - 0x12d4) = 1;
LAB_0051e2c2:
          iVar28 = *(int *)(unaff_EBP - 0x12f4);
          fVar38 = (float)*(int *)(unaff_EBP - 0x12ec) * 0.5;
          if (fVar38 < (float)iVar28) {
            iVar28 = (int)fVar38;
            *(int *)(unaff_EBP - 0x12f4) = iVar28;
          }
          if (iVar28 < 1) {
            *(undefined4 *)(unaff_EBP - 0x12f4) = 1;
          }
        }
LAB_0051e32d:
        iVar28 = FUN_00406100(pvVar17,*(uint *)(unaff_EBP - 0x12cc),*(uint *)(unaff_EBP - 0x12e4),
                              iVar29);
        if (iVar28 == 0) {
          FUN_004f8570(pvVar17,*(float *)(unaff_EBP - 0x12cc),*(uint *)(unaff_EBP - 0x12e4));
        }
        fVar38 = *(float *)(unaff_EBP - 0x12cc);
        iVar28 = *(int *)(unaff_EBP - 0x12f4);
        if (*(int *)(unaff_EBP - 0x1370) < (int)fVar38 + iVar28) {
          fVar38 = (float)((*(int *)(unaff_EBP - 0x1358) - iVar28) + 0x100);
          *(float *)(unaff_EBP - 0x12cc) = fVar38;
        }
        if (*(int *)(unaff_EBP - 0x132c) + 0x100 < iVar28 + *(int *)(unaff_EBP - 0x12e4)) {
          fVar39 = (float)((*(int *)(unaff_EBP - 0x132c) - *(int *)(unaff_EBP - 0x12f4)) + 0x100);
          *(float *)(unaff_EBP - 0x12e4) = fVar39;
        }
        else {
          fVar39 = *(float *)(unaff_EBP - 0x12e4);
        }
        fVar37 = FUN_004d9010(pvVar17,fVar38,fVar39,iVar29);
        *(float *)(unaff_EBP - 0x133c) = (float)fVar37;
        *(float *)(unaff_EBP - 0x133c) =
             *(float *)(unaff_EBP - 0x133c) + *(float *)(unaff_EBP - 0x1344);
        iVar28 = rand();
        if (((float)iVar28 / 32767.0 < *(float *)(unaff_EBP - 0x133c) ||
             (float)iVar28 / 32767.0 == *(float *)(unaff_EBP - 0x133c)) &&
           (iVar28 = FUN_00406100(pvVar17,*(uint *)(unaff_EBP - 0x12cc),
                                  *(uint *)(unaff_EBP - 0x12e4),iVar29), iVar28 != 0)) {
          iVar28 = *(int *)(iVar28 + 0x1c) + -1 + *(int *)(iVar28 + 0x10);
          while( true ) {
            uVar30 = *(uint *)(unaff_EBP - 0x12e4);
            uVar9 = *(uint *)(unaff_EBP - 0x12cc);
            *(int *)(unaff_EBP - 0x12f8) = iVar28;
            puVar11 = FUN_00405fd0(pvVar17,uVar9,uVar30,iVar28,iVar29);
            if (((puVar11[3] & 0x1f) != 0) && ((puVar11[3] & 0x1f) != 2)) break;
            iVar28 = *(int *)(unaff_EBP - 0x12f8) + -1;
          }
          if (-1 < *(int *)(unaff_EBP - 0x12f8)) {
            puVar11 = FUN_00405fd0(pvVar17,*(uint *)(unaff_EBP - 0x12cc),
                                   *(uint *)(unaff_EBP - 0x12e4),*(int *)(unaff_EBP - 0x12f8),iVar29
                                  );
            bVar7 = puVar11[3];
            *(int *)(unaff_EBP - 0x12f8) = *(int *)(unaff_EBP - 0x12f8) + 1;
            uVar30 = *(uint *)(unaff_EBP - 0x12e4);
            uVar9 = *(uint *)(unaff_EBP - 0x12cc);
            *(uint *)(unaff_EBP - 0x1350) = bVar7 & 0xffffff1f;
            iVar28 = FUN_00406100(pvVar17,uVar9,uVar30,iVar29);
            if (iVar28 == 0) {
              fVar37 = (float10)FUN_004f8b40(pvVar17,*(int *)(unaff_EBP - 0x12cc),
                                             *(int *)(unaff_EBP - 0x12e4));
              *(float *)(unaff_EBP - 0x133c) = (float)fVar37;
              fVar38 = *(float *)(unaff_EBP - 0x133c);
            }
            else {
              fVar38 = *(float *)(iVar28 + 8);
            }
            if (fVar38 <= 0.8) {
              iVar28 = *(int *)(unaff_EBP - 0x12d4);
            }
            else {
              iVar28 = FUN_00406100(pvVar17,*(uint *)(unaff_EBP - 0x12cc),
                                    *(uint *)(unaff_EBP - 0x12e4),iVar29);
              if (iVar28 == 0) {
                fVar37 = (float10)FUN_004f8570(pvVar17,*(float *)(unaff_EBP - 0x12cc),
                                               *(uint *)(unaff_EBP - 0x12e4));
                *(float *)(unaff_EBP - 0x133c) = (float)fVar37;
                fVar38 = *(float *)(unaff_EBP - 0x133c);
              }
              else {
                fVar38 = *(float *)(iVar28 + 4);
              }
              iVar28 = *(int *)(unaff_EBP - 0x12d4);
              if (fVar38 < 0.2) {
                iVar28 = 3;
              }
            }
            iVar8 = *(int *)(unaff_EBP - 0x1350);
            if ((iVar8 == 4) || (iVar8 == 10)) {
              fVar38 = *(float *)(unaff_EBP - 0x12f8);
            }
            else if ((iVar8 != 9) || (fVar38 = *(float *)(unaff_EBP - 0x12f8), 2 < (int)fVar38))
            goto LAB_0051e593;
            iVar8 = *(int *)(unaff_EBP - 0x12f4);
            if (*(int *)(unaff_EBP - 0x12f4) < 1) {
              iVar8 = *(int *)(unaff_EBP - 0x1330);
            }
            FUN_00513760(*(float *)(unaff_EBP - 0x12cc),*(uint *)(unaff_EBP - 0x12e4),fVar38,iVar8,
                         *(int *)(unaff_EBP - 0x12ec),iVar28,iVar29);
          }
        }
      }
LAB_0051e593:
      uVar30 = *(int *)(unaff_EBP - 0x1314) + 0x12;
      piVar19 = (int *)(unaff_EBP - 0x12dc);
      *piVar19 = *piVar19 + -1;
      iVar28 = *piVar19;
      *(uint *)(unaff_EBP - 0x1314) = uVar30;
    } while (iVar28 != 0);
    *(int *)(unaff_EBP - 0x12d8) = *(int *)(unaff_EBP - 0x12d8) + 0x12;
    piVar19 = (int *)(unaff_EBP - 0x12f0);
    *piVar19 = *piVar19 + -1;
    uVar30 = *(uint *)(unaff_EBP - 0x1328);
  } while (*piVar19 != 0);
  if (*(int *)(unaff_EBP - 0x1360) == 0) {
    iVar28 = rand();
    *(int *)(unaff_EBP - 0x1310) = *(int *)(unaff_EBP - 0x1358) + 0x10 + iVar28 % 0xe0;
    iVar28 = rand();
    uVar9 = *(int *)(unaff_EBP - 0x132c) + 0x10 + iVar28 % 0xe0;
    uVar30 = *(uint *)(unaff_EBP - 0x1310);
    *(uint *)(unaff_EBP - 0x12d0) = uVar9;
    iVar28 = FUN_00406100(pvVar17,uVar30,uVar9,iVar29);
    if (iVar28 != 0) {
      iVar28 = *(int *)(iVar28 + 0x1c) + *(int *)(iVar28 + 0x10);
      while( true ) {
        uVar30 = *(uint *)(unaff_EBP - 0x12d0);
        uVar9 = *(uint *)(unaff_EBP - 0x1310);
        *(int *)(unaff_EBP - 0x12fc) = iVar28;
        puVar11 = FUN_00405fd0(pvVar17,uVar9,uVar30,iVar28,iVar29);
        if (((puVar11[3] & 0x1f) != 0) && ((puVar11[3] & 0x1f) != 2)) break;
        iVar28 = *(int *)(unaff_EBP - 0x12fc) + -1;
      }
      iVar29 = *(int *)(unaff_EBP - 0x12fc);
      FUN_004c84b0(unaff_EBP - 0x984);
      uVar30 = iVar29 + 1;
      uVar9 = ((int)uVar30 >> 0x1f) << 0x10 | uVar30 >> 0x10;
      *(uint *)(unaff_EBP - 0x12dc) = uVar30 * 0x10000;
      *(uint *)(unaff_EBP - 0x1550) = uVar30 * 0x10000;
      uVar30 = *(uint *)(unaff_EBP - 0x12d0);
      *(undefined1 *)(unaff_EBP - 4) = 5;
      *(undefined4 *)(unaff_EBP - 0x984) = 0;
      *(uint *)(unaff_EBP - 0x12f0) = uVar9;
      *(uint *)(unaff_EBP - 0x154c) = uVar9;
      *(uint *)(unaff_EBP - 0x12fc) = ((int)uVar30 >> 0x1f) << 0x10 | uVar30 >> 0x10;
      uVar44 = FUN_0054a946();
      iVar28 = (int)(uVar44 >> 0x20);
      uVar32 = (uint)uVar44;
      uVar9 = *(uint *)(unaff_EBP - 0x1310);
      iVar8 = uVar30 * 0x10000 - uVar32;
      *(int *)(unaff_EBP - 0x12fc) =
           (*(int *)(unaff_EBP - 0x12fc) - iVar28) - (uint)(uVar30 * 0x10000 < uVar32);
      iVar29 = uVar9 * 0x10000 - uVar32;
      uVar13 = *(undefined4 *)(unaff_EBP - 0x12fc);
      iVar28 = ((((int)uVar9 >> 0x1f) << 0x10 | uVar9 >> 0x10) - iVar28) -
               (uint)(uVar9 * 0x10000 < uVar32);
      *(undefined4 *)(unaff_EBP - 0x3dc) = *(undefined4 *)(unaff_EBP - 0x12dc);
      uVar47 = *(undefined4 *)(unaff_EBP - 0x12f0);
      *(int *)(unaff_EBP - 0x3ec) = iVar29;
      *(undefined4 *)(unaff_EBP - 0x3d8) = uVar47;
      uVar47 = *(undefined4 *)(unaff_EBP - 0x12dc);
      *(int *)(unaff_EBP - 0x97c) = iVar29;
      uVar49 = *(undefined4 *)(unaff_EBP - 0x12f0);
      *(int *)(unaff_EBP - 1000) = iVar28;
      *(int *)(unaff_EBP - 0x3e4) = iVar8;
      *(undefined4 *)(unaff_EBP - 0x3e0) = uVar13;
      *(int *)(unaff_EBP - 0x978) = iVar28;
      *(int *)(unaff_EBP - 0x974) = iVar8;
      *(undefined4 *)(unaff_EBP - 0x970) = uVar13;
      *(undefined4 *)(unaff_EBP - 0x96c) = uVar47;
      *(undefined4 *)(unaff_EBP - 0x968) = uVar49;
      *(undefined4 *)(unaff_EBP - 0x960) = 0x40000000;
      *(undefined4 *)(unaff_EBP - 0x95c) = 0x40000000;
      *(undefined4 *)(unaff_EBP - 0x958) = 0x41000000;
      uVar30 = rand();
      uVar30 = uVar30 & 0x80000003;
      if ((int)uVar30 < 0) {
        uVar30 = (uVar30 - 1 | 0xfffffffc) + 1;
      }
      iVar29 = *(int *)(unaff_EBP - 0x1308);
      *(uint *)(unaff_EBP - 0x964) = uVar30;
      FUN_004d6670((void *)(iVar29 + 0xc),(void **)(unaff_EBP - 0x984));
      iVar28 = *(int *)(unaff_EBP - 0x93c);
      *(undefined1 *)(unaff_EBP - 4) = 3;
      if (iVar28 != 0) {
        std::_Container_base0::_Orphan_all((_Container_base0 *)(unaff_EBP - 0x93c));
        FUN_00406310(*(undefined4 **)(unaff_EBP - 0x93c),*(undefined4 **)(unaff_EBP - 0x938));
        operator_delete(*(void **)(unaff_EBP - 0x93c));
        *(undefined4 *)(unaff_EBP - 0x93c) = 0;
        *(undefined4 *)(unaff_EBP - 0x938) = 0;
        *(undefined4 *)(unaff_EBP - 0x934) = 0;
      }
      pvVar17 = *(void **)(unaff_EBP - 0x12e0);
    }
  }
  iVar28 = *(int *)(*(int *)(unaff_EBP - 0x1300) + 0x18);
  if ((((iVar28 != 0) && (iVar28 != 10)) && (iVar28 != 0xe)) && ((iVar28 != 1 && (iVar28 != 5)))) {
    *(undefined4 *)(unaff_EBP - 0x1444) = 0;
    *(undefined4 *)(unaff_EBP - 0x1440) = 0;
    *(undefined4 *)(unaff_EBP - 0x143c) = 0;
    iVar8 = 0;
    iVar28 = 0;
    *(undefined1 *)(unaff_EBP - 4) = 6;
    *(undefined4 *)(unaff_EBP - 0x1338) = 0;
    *(undefined4 *)(unaff_EBP - 0x12ec) = 0;
    do {
      *(undefined4 *)(unaff_EBP - 0x1360) = 0;
      *(int *)(unaff_EBP - 0x1328) = iVar8;
      do {
        if (iVar8 % *(int *)(unaff_EBP - 0x1368) == 0) {
          uVar9 = iVar28 + *(int *)(iVar29 + 0x60) * 0x100 + 4;
          uVar30 = *(int *)(iVar29 + 100) * 0x100 + *(int *)(unaff_EBP - 0x1360) + 4;
          *(uint *)(unaff_EBP - 0x12dc) = uVar30;
          uVar32 = ((int)uVar30 >> 0x1f) << 0x10 | uVar30 >> 0x10;
          *(uint *)(unaff_EBP - 0x133c) = uVar30 * 0x10000;
          *(uint *)(unaff_EBP - 0x1464) = uVar30 * 0x10000;
          *(uint *)(unaff_EBP - 0x1320) = uVar32;
          *(uint *)(unaff_EBP - 0x1460) = uVar32;
          *(uint *)(unaff_EBP - 0x12f0) = uVar9;
          uVar30 = ((int)uVar9 >> 0x1f) << 0x10 | uVar9 >> 0x10;
          *(uint *)(unaff_EBP - 0x1310) = uVar9 * 0x10000;
          *(uint *)(unaff_EBP - 0x1474) = uVar9 * 0x10000;
          *(uint *)(unaff_EBP - 0x1304) = uVar30;
          *(uint *)(unaff_EBP - 0x1470) = uVar30;
          fVar37 = FUN_0052c820(*(uint **)(unaff_EBP - 0x1300),(uint *)(unaff_EBP - 0x1474),
                                (uint *)(unaff_EBP - 0x1464));
          *(float *)(unaff_EBP - 0x1330) = (float)fVar37;
          fVar38 = 1.0 - *(float *)(unaff_EBP - 0x1330);
          if (0.0 < fVar38) {
            *(float *)(unaff_EBP - 0x12d0) = fVar38 * fVar38;
          }
          else {
            *(undefined4 *)(unaff_EBP - 0x12d0) = 0;
          }
          iVar28 = rand();
          if (((float)iVar28 / 32767.0 <= *(float *)(unaff_EBP - 0x12d0) * 0.75) &&
             (iVar28 = FUN_00406100(pvVar17,*(uint *)(unaff_EBP - 0x12f0),
                                    *(uint *)(unaff_EBP - 0x12dc),iVar29), iVar28 != 0)) {
            iVar28 = *(int *)(iVar28 + 0x14);
            while( true ) {
              uVar30 = *(uint *)(unaff_EBP - 0x12dc);
              uVar9 = *(uint *)(unaff_EBP - 0x12f0);
              *(int *)(unaff_EBP - 0x12fc) = iVar28;
              puVar11 = FUN_00405fd0(pvVar17,uVar9,uVar30,iVar28,iVar29);
              if (((puVar11[3] & 0x1f) == 0) || ((puVar11[3] & 0x1f) == 2)) break;
              iVar28 = *(int *)(unaff_EBP - 0x12fc) + 1;
            }
            uVar9 = *(uint *)(unaff_EBP - 0x12fc);
            uVar34 = ((int)uVar9 >> 0x1f) << 0x10 | uVar9 >> 0x10;
            *(uint *)(unaff_EBP - 0x1560) = uVar9 << 0x10;
            *(uint *)(unaff_EBP - 0x155c) = uVar34;
            uVar44 = FUN_0054a946();
            iVar29 = (int)(uVar44 >> 0x20);
            uVar31 = (uint)uVar44;
            uVar32 = *(uint *)(unaff_EBP - 0x133c);
            *(int *)(unaff_EBP - 0x1320) =
                 (*(int *)(unaff_EBP - 0x1320) - iVar29) - (uint)(uVar32 < uVar31);
            puVar22 = (uint *)(unaff_EBP - 0x1310);
            uVar30 = *puVar22;
            *puVar22 = *puVar22 - uVar31;
            *(undefined4 *)(unaff_EBP - 0x338) = *(undefined4 *)(unaff_EBP - 0x1310);
            *(int *)(unaff_EBP - 0x1304) =
                 (*(int *)(unaff_EBP - 0x1304) - iVar29) - (uint)(uVar30 < uVar31);
            *(undefined4 *)(unaff_EBP - 0x334) = *(undefined4 *)(unaff_EBP - 0x1304);
            *(undefined4 *)(unaff_EBP - 0x32c) = *(undefined4 *)(unaff_EBP - 0x1320);
            *(uint *)(unaff_EBP - 0x330) = uVar32 - uVar31;
            *(uint *)(unaff_EBP - 0x328) = uVar9 << 0x10;
            *(uint *)(unaff_EBP - 0x324) = uVar34;
            FUN_004e1420((void *)(unaff_EBP - 0x1444),(undefined4 *)(unaff_EBP - 0x338));
          }
          iVar28 = *(int *)(unaff_EBP - 0x12ec);
        }
        iVar29 = *(int *)(unaff_EBP - 0x1308);
        pvVar17 = *(void **)(unaff_EBP - 0x12e0);
        iVar10 = *(int *)(unaff_EBP - 0x1360) + 0x12;
        iVar8 = *(int *)(unaff_EBP - 0x1328) + 3;
        *(int *)(unaff_EBP - 0x1328) = iVar8;
        *(int *)(unaff_EBP - 0x1360) = iVar10;
      } while (iVar10 < 0xfc);
      iVar28 = iVar28 + 0x12;
      iVar8 = *(int *)(unaff_EBP - 0x1338) + 1;
      *(int *)(unaff_EBP - 0x1338) = iVar8;
      *(int *)(unaff_EBP - 0x12ec) = iVar28;
    } while (iVar28 < 0xfc);
    FUN_005104e0(pvVar17,iVar29,*(uint **)(unaff_EBP - 0x1300),(int *)(unaff_EBP - 0x1444));
    iVar28 = *(int *)(unaff_EBP - 0x1444);
    *(undefined1 *)(unaff_EBP - 4) = 3;
    if (iVar28 != 0) {
      std::_Container_base0::_Orphan_all((_Container_base0 *)(unaff_EBP - 0x1444));
      operator_delete(*(void **)(unaff_EBP - 0x1444));
      *(undefined4 *)(unaff_EBP - 0x1444) = 0;
      *(undefined4 *)(unaff_EBP - 0x1440) = 0;
      *(undefined4 *)(unaff_EBP - 0x143c) = 0;
    }
  }
  puVar22 = *(uint **)(unaff_EBP - 0x1300);
  if (puVar22[6] == 9) {
    uVar45 = __alldiv(*puVar22,puVar22[1],0x10000,0);
    iVar8 = (int)uVar45;
    iVar28 = *(int *)(unaff_EBP - 0x1300);
    uVar30 = *(uint *)(iVar28 + 0xc);
    *(int *)(unaff_EBP - 0x40) = iVar8;
    uVar45 = __alldiv(*(uint *)(iVar28 + 8),uVar30,0x10000,0);
    iVar28 = (int)uVar45;
    *(int *)(unaff_EBP - 0x184) = (int)(iVar8 + (iVar8 >> 0x1f & 0xffU)) >> 8;
    *(int *)(unaff_EBP - 0x3c) = iVar28;
    *(int *)(unaff_EBP - 0x180) = (int)(iVar28 + (iVar28 >> 0x1f & 0xffU)) >> 8;
    iVar28 = 0;
    piVar19 = (int *)(iVar29 + 0x60);
    do {
      if (*(int *)((unaff_EBP - 0x184) + iVar28 * 4) != *piVar19) goto LAB_0051ec4a;
      iVar28 = iVar28 + 1;
      piVar19 = piVar19 + 1;
    } while (iVar28 < 2);
    pSVar14 = operator_new(0x10f0);
    if (pSVar14 == (Spawn *)0x0) {
      pSVar14 = (Spawn *)0x0;
    }
    else {
      pSVar14 = cube::Spawn::Spawn(pSVar14);
    }
    puVar16 = *(undefined4 **)(unaff_EBP - 0x1300);
    *(undefined4 *)&(pSVar14->Spawn_data).field_0xc = *puVar16;
    *(undefined4 *)&(pSVar14->Spawn_data).field_0x10 = puVar16[1];
    *(undefined4 *)&(pSVar14->Spawn_data).field_0x14 = puVar16[2];
    uVar30 = puVar16[3];
    *(uint *)&(pSVar14->Spawn_data).field_0x18 = uVar30;
    uVar9 = *(uint *)&(pSVar14->Spawn_data).field_0x14;
    *(Spawn **)(unaff_EBP - 0x13f4) = pSVar14;
    iVar28 = iVar29;
    uVar45 = __alldiv(uVar9,uVar30,0x10000,0);
    uVar30 = (uint)uVar45;
    uVar45 = __alldiv(*(uint *)&(pSVar14->Spawn_data).field_0xc,
                      *(uint *)&(pSVar14->Spawn_data).field_0x10,0x10000,0);
    iVar28 = FUN_00406100(*(void **)(unaff_EBP - 0x12e0),(uint)uVar45,uVar30,iVar28);
    uVar30 = *(uint *)(iVar28 + 0x10);
    iVar28 = *(int *)(unaff_EBP - 0x1300);
    *(uint *)&(pSVar14->Spawn_data).field_0x1c = uVar30 << 0x10;
    *(uint *)&(pSVar14->Spawn_data).field_0x20 = ((int)uVar30 >> 0x1f) << 0x10 | uVar30 >> 0x10;
    (pSVar14->Spawn_data).offset_0x24 = 1;
    (pSVar14->Spawn_data).offset_0x28 = 0x6b;
    (pSVar14->Spawn_data).offset_0x30 = *(undefined4 *)(iVar28 + 0x24);
    (pSVar14->Spawn_data).offset_0x54 = *(undefined1 *)(iVar28 + 0x28);
    FUN_004f2be0((void *)(iVar29 + 0x18),(undefined4 *)(unaff_EBP - 0x13f4));
  }
LAB_0051ec4a:
  *(undefined4 *)(unaff_EBP - 0x140c) = 0;
  *(undefined4 *)(unaff_EBP - 0x1408) = 0;
  *(undefined4 *)(unaff_EBP - 0x1404) = 0;
  iVar29 = *(int *)(unaff_EBP - 0x137c);
  *(undefined1 *)(unaff_EBP - 4) = 7;
  *(undefined4 *)(unaff_EBP - 0x12d0) = 0;
  pcVar35 = (char *)(iVar29 + 0x18);
  iVar29 = 0;
  do {
    iVar28 = 0;
    do {
      if (*pcVar35 != '\0') {
        *(int *)(unaff_EBP - 0x17c) = *(int *)(unaff_EBP - 0x13d0) * 0x40 + iVar29;
        *(int *)(unaff_EBP - 0x178) = *(int *)(unaff_EBP - 0x1384) * 0x40 + iVar28;
        uVar13 = *(undefined4 *)(unaff_EBP - 0x17c);
        uVar47 = *(undefined4 *)(unaff_EBP - 0x178);
        *(undefined4 *)(unaff_EBP - 0x2c) = uVar13;
        *(undefined4 *)(unaff_EBP - 0x28) = uVar47;
        iVar8 = *(int *)(unaff_EBP - 0x2c) - *(int *)(unaff_EBP - 0x135c);
        iVar29 = *(int *)(unaff_EBP - 0x28) - *(int *)(unaff_EBP - 0x1364);
        *(int *)(unaff_EBP - 0x2c) = iVar8;
        *(int *)(unaff_EBP - 0x28) = iVar29;
        *(int *)(unaff_EBP - 0x394) = iVar29 * iVar29 + iVar8 * iVar8;
        *(undefined4 *)(unaff_EBP - 0x39c) = uVar13;
        *(undefined4 *)(unaff_EBP - 0x398) = uVar47;
        FUN_0042feb0((void *)(unaff_EBP - 0x140c),(undefined4 *)(unaff_EBP - 0x39c));
        iVar29 = *(int *)(unaff_EBP - 0x12d0);
      }
      iVar28 = iVar28 + 1;
      pcVar35 = pcVar35 + 0x10;
    } while (iVar28 < 0x40);
    iVar29 = iVar29 + 1;
    *(int *)(unaff_EBP - 0x12d0) = iVar29;
  } while (iVar29 < 0x40);
  piVar19 = *(int **)(unaff_EBP - 0x1408);
  piVar18 = *(int **)(unaff_EBP - 0x140c);
  *(undefined1 *)(unaff_EBP - 0x141c) = 0;
  FUN_004f5e00(piVar18,piVar19,((int)piVar19 - (int)piVar18) / 0xc,
               *(undefined4 *)(unaff_EBP - 0x141c));
  *(undefined4 *)(unaff_EBP - 0x1304) = 0;
LAB_0051ed60:
  iVar29 = 0;
  *(undefined4 *)(unaff_EBP - 0x1310) = 0;
  do {
    uVar30 = rand();
    uVar30 = uVar30 & 0x80000003;
    bVar36 = uVar30 == 0;
    if ((int)uVar30 < 0) {
      bVar36 = (uVar30 - 1 | 0xfffffffc) == 0xffffffff;
    }
    if (bVar36) {
LAB_0051f975:
      iVar29 = *(int *)(unaff_EBP - 0x1308);
LAB_0051f97b:
      pvVar17 = *(void **)(unaff_EBP - 0x12e0);
    }
    else {
      iVar28 = rand();
      uVar9 = *(int *)(unaff_EBP - 0x1304) * 0x55 + 0x18 +
              iVar28 % 10 + *(int *)(unaff_EBP - 0x1358);
      *(uint *)(unaff_EBP - 0x12cc) = uVar9;
      iVar28 = rand();
      puVar22 = *(uint **)(unaff_EBP - 0x1300);
      uVar30 = puVar22[6];
      uVar32 = iVar29 * 0x55 + 0x18 + iVar28 % 10 + *(int *)(unaff_EBP - 0x132c);
      *(uint *)(unaff_EBP - 0x12d4) = uVar32;
      if ((uVar30 != 0) && (uVar30 != 10)) {
        *(uint *)(unaff_EBP - 0x146c) = uVar32 * 0x10000;
        *(uint *)(unaff_EBP - 0x1468) = ((int)uVar32 >> 0x1f) << 0x10 | uVar32 >> 0x10;
        *(uint *)(unaff_EBP - 0x147c) = uVar9 * 0x10000;
        *(uint *)(unaff_EBP - 0x1478) = ((int)uVar9 >> 0x1f) << 0x10 | uVar9 >> 0x10;
        fVar37 = FUN_0052c820(puVar22,(uint *)(unaff_EBP - 0x147c),(uint *)(unaff_EBP - 0x146c));
        *(float *)(unaff_EBP - 0x1330) = (float)fVar37;
        fVar38 = 1.0 - *(float *)(unaff_EBP - 0x1330);
        if ((0.0 < fVar38) && (0.3 < fVar38 * fVar38)) goto LAB_0051f975;
      }
      iVar29 = *(int *)(unaff_EBP - 0x1308);
      pvVar17 = *(void **)(unaff_EBP - 0x12e0);
      iVar28 = FUN_00406100(pvVar17,uVar9,*(uint *)(unaff_EBP - 0x12d4),iVar29);
      if (iVar28 == 0) {
        fVar37 = (float10)FUN_004f8b40(pvVar17,*(int *)(unaff_EBP - 0x12cc),
                                       *(int *)(unaff_EBP - 0x12d4));
        *(float *)(unaff_EBP - 0x1330) = (float)fVar37;
        fVar38 = *(float *)(unaff_EBP - 0x1330);
      }
      else {
        fVar38 = *(float *)(iVar28 + 8);
      }
      *(float *)(unaff_EBP - 0x12d0) = fVar38;
      if (0.2 <= fVar38) {
LAB_0051eed2:
        iVar28 = FUN_00406100(pvVar17,*(uint *)(unaff_EBP - 0x12cc),*(uint *)(unaff_EBP - 0x12d4),
                              iVar29);
        if (iVar28 == 0) {
          fVar37 = (float10)FUN_004f8570(pvVar17,*(float *)(unaff_EBP - 0x12cc),
                                         *(uint *)(unaff_EBP - 0x12d4));
          *(float *)(unaff_EBP - 0x1330) = (float)fVar37;
          fVar38 = *(float *)(unaff_EBP - 0x1330);
        }
        else {
          fVar38 = *(float *)(iVar28 + 4);
        }
        *(float *)(unaff_EBP - 0x12dc) = fVar38;
        if (fVar38 < 0.2) {
          uVar30 = rand();
          uVar30 = uVar30 & 0x80000003;
          bVar36 = uVar30 == 0;
          if ((int)uVar30 < 0) {
            bVar36 = (uVar30 - 1 | 0xfffffffc) == 0xffffffff;
          }
          if (bVar36) goto LAB_0051f981;
        }
        piVar19 = (int *)**(int **)(unaff_EBP - 0x1378);
        if (piVar19 != *(int **)(unaff_EBP - 0x1378)) {
          uVar30 = *(uint *)(unaff_EBP - 0x12d4);
          *(uint *)(unaff_EBP - 0x1330) = uVar30 << 0x10;
          uVar9 = *(uint *)(unaff_EBP - 0x12cc);
          *(uint *)(unaff_EBP - 0x133c) = ((int)uVar30 >> 0x1f) << 0x10 | uVar30 >> 0x10;
          *(uint *)(unaff_EBP - 0x1348) = ((int)uVar9 >> 0x1f) << 0x10 | uVar9 >> 0x10;
          *(uint *)(unaff_EBP - 0x1334) = uVar9 << 0x10;
          do {
            uVar30 = *(uint *)(unaff_EBP - 0x1330);
            uVar9 = piVar19[4];
            iVar28 = *(int *)(unaff_EBP - 0x133c);
            iVar8 = piVar19[5];
            *(uint *)(unaff_EBP - 0x13b4) = uVar30 - piVar19[4];
            uVar32 = *(uint *)(unaff_EBP - 0x1334);
            *(uint *)(unaff_EBP - 0x13b0) = (iVar28 - iVar8) - (uint)(uVar30 < uVar9);
            iVar28 = *(int *)(unaff_EBP - 0x1348);
            *(float *)(unaff_EBP - 0x1350) = (float)*(longlong *)(unaff_EBP - 0x13b4);
            uVar9 = piVar19[2];
            uVar30 = piVar19[2];
            *(undefined4 *)(unaff_EBP - 0x1350) = *(undefined4 *)(unaff_EBP - 0x1350);
            fVar38 = *(float *)(unaff_EBP - 0x1350);
            iVar8 = piVar19[3];
            *(uint *)(unaff_EBP - 0x13bc) = uVar32 - uVar30;
            *(uint *)(unaff_EBP - 0x13b8) = (iVar28 - iVar8) - (uint)(uVar32 < uVar9);
            fVar38 = fVar38 * 1.5258789e-05;
            *(float *)(unaff_EBP - 0x1350) = (float)*(longlong *)(unaff_EBP - 0x13bc);
            *(undefined4 *)(unaff_EBP - 0x1350) = *(undefined4 *)(unaff_EBP - 0x1350);
            fVar39 = *(float *)(unaff_EBP - 0x1350) * 1.5258789e-05;
            *(float *)(unaff_EBP - 0x15fc) = fVar39;
            if (fVar38 * fVar38 + fVar39 * fVar39 < 400.0) goto LAB_0051f981;
            piVar19 = (int *)*piVar19;
          } while (piVar19 != (int *)*(int *)(unaff_EBP - 0x1378));
        }
        iVar28 = FUN_00406100(pvVar17,*(uint *)(unaff_EBP - 0x12cc),*(uint *)(unaff_EBP - 0x12d4),
                              iVar29);
        iVar28 = *(int *)(iVar28 + 0x14);
        while( true ) {
          uVar30 = *(uint *)(unaff_EBP - 0x12d4);
          uVar9 = *(uint *)(unaff_EBP - 0x12cc);
          *(int *)(unaff_EBP - 0x12d8) = iVar28;
          puVar11 = FUN_00405fd0(pvVar17,uVar9,uVar30,iVar28,iVar29);
          if (((puVar11[3] & 0x1f) == 0) || ((puVar11[3] & 0x1f) == 2)) break;
          iVar28 = *(int *)(unaff_EBP - 0x12d8) + 1;
        }
        puVar11 = FUN_00405fd0(pvVar17,*(uint *)(unaff_EBP - 0x12cc),*(uint *)(unaff_EBP - 0x12d4),
                               *(int *)(unaff_EBP - 0x12d8) + -1,iVar29);
        uVar30 = *(uint *)(unaff_EBP - 0x12d4);
        uVar9 = *(uint *)(unaff_EBP - 0x12cc);
        *(uint *)(unaff_EBP - 0x12f0) = (byte)puVar11[3] & 0xffffff1f;
        fVar37 = FUN_004d19f0(pvVar17,uVar9,uVar30);
        *(float *)(unaff_EBP - 0x1330) = (float)fVar37;
        if (*(float *)(unaff_EBP - 0x1330) <= 0.0) {
          fVar37 = (float10)FUN_0052d990(pvVar17,*(uint *)(unaff_EBP - 0x12cc),
                                         *(uint *)(unaff_EBP - 0x12d4));
          *(float *)(unaff_EBP - 0x1330) = (float)fVar37;
          if (1.0 < *(float *)(unaff_EBP - 0x1330) || *(float *)(unaff_EBP - 0x1330) == 1.0) {
            pSVar14 = operator_new(0x10f0);
            if (pSVar14 == (Spawn *)0x0) {
              pSVar14 = (Spawn *)0x0;
            }
            else {
              pSVar14 = cube::Spawn::Spawn(pSVar14);
            }
            *(Spawn **)(unaff_EBP - 0x12e4) = pSVar14;
            *(Spawn **)(unaff_EBP - 0x131c) = pSVar14;
            uVar30 = *(uint *)(unaff_EBP - 0x12d8);
            uVar9 = ((int)uVar30 >> 0x1f) << 0x10 | uVar30 >> 0x10;
            *(uint *)(unaff_EBP - 0x1350) = uVar30 << 0x10;
            *(uint *)(unaff_EBP - 0x1558) = uVar30 << 0x10;
            uVar30 = *(uint *)(unaff_EBP - 0x12d4);
            *(uint *)(unaff_EBP - 0x1334) = uVar9;
            *(uint *)(unaff_EBP - 0x1554) = uVar9;
            uVar44 = FUN_0054a946();
            *(int *)(unaff_EBP - 0x1330) = (int)uVar44;
            uVar9 = *(uint *)(unaff_EBP - 0x12cc);
            lVar5 = uVar44 + CONCAT44(((int)uVar30 >> 0x1f) << 0x10 | uVar30 >> 0x10,uVar30 << 0x10)
            ;
            *(int *)(unaff_EBP - 0x224) = (int)lVar5;
            uVar13 = *(undefined4 *)(unaff_EBP - 0x1350);
            *(int *)(unaff_EBP - 0x133c) = (int)(uVar44 >> 0x20);
            uVar30 = *(uint *)(unaff_EBP - 0x1330);
            *(undefined4 *)(unaff_EBP - 0x21c) = uVar13;
            iVar8 = uVar30 + uVar9 * 0x10000;
            iVar29 = *(int *)(unaff_EBP - 0x133c);
            *(undefined4 *)(unaff_EBP - 0x218) = *(undefined4 *)(unaff_EBP - 0x1334);
            iVar28 = *(int *)(unaff_EBP - 0x12e4);
            iVar29 = iVar29 + (((int)uVar9 >> 0x1f) << 0x10 | uVar9 >> 0x10) +
                     (uint)CARRY4(uVar30,uVar9 * 0x10000);
            *(int *)(unaff_EBP - 0x228) = iVar29;
            *(int *)(unaff_EBP - 0x220) = (int)((ulonglong)lVar5 >> 0x20);
            *(int *)(unaff_EBP - 0x22c) = iVar8;
            *(int *)(iVar28 + 0x10) = iVar8;
            *(int *)(iVar28 + 0x14) = iVar29;
            *(undefined4 *)(iVar28 + 0x18) = *(undefined4 *)(unaff_EBP - 0x224);
            *(undefined4 *)(iVar28 + 0x1c) = *(undefined4 *)(unaff_EBP - 0x220);
            *(undefined4 *)(iVar28 + 0x20) = *(undefined4 *)(unaff_EBP - 0x21c);
            uVar13 = *(undefined4 *)(unaff_EBP - 0x218);
            *(int **)(unaff_EBP - 0x133c) = (int *)(iVar28 + 0x10);
            *(undefined4 *)(iVar28 + 0x24) = uVar13;
            iVar8 = rand();
            iVar29 = *(int *)(unaff_EBP - 0x12e4);
            pvVar17 = *(void **)(unaff_EBP - 0x12e0);
            iVar28 = *(int *)(unaff_EBP - 0x12d8);
            *(float *)(iVar29 + 0x54) = ((float)iVar8 * 360.0) / 32767.0;
            fVar38 = *(float *)(unaff_EBP - 0x12d4);
            fVar39 = *(float *)(unaff_EBP - 0x12cc);
            *(undefined4 *)(iVar29 + 0x34) = 1;
            pvVar15 = FUN_005290d0(pvVar17,fVar39,fVar38,iVar28,0);
            *(void **)(iVar29 + 0x2c) = pvVar15;
            iVar28 = *(int *)(unaff_EBP - 0x12f0);
            if (iVar28 == 0xc) {
              uVar30 = rand();
              uVar30 = uVar30 & 0x80000001;
              if ((int)uVar30 < 0) {
                uVar30 = (uVar30 - 1 | 0xfffffffe) + 1;
              }
              *(uint *)(iVar29 + 0x2c) = (-(uint)(uVar30 != 0) & 0xfffffffc) + 0x82;
LAB_0051f2a0:
              *(undefined4 *)(iVar29 + 0x28) = 6;
              iVar29 = *(int *)(unaff_EBP - 0x1308);
              FUN_004f2be0((void *)(iVar29 + 0x18),(undefined4 *)(unaff_EBP - 0x131c));
            }
            else {
              if (*(int *)(unaff_EBP - 0x12d8) < 0) {
LAB_0051f4d1:
                iVar29 = *(int *)(unaff_EBP - 0x1308);
              }
              else {
                if (((iVar28 != 4) && (iVar28 != 5)) && (iVar28 != 9)) {
                  if (iVar28 == 10) {
                    uVar30 = rand();
                    uVar30 = uVar30 & 0x80000003;
                    bVar36 = uVar30 == 0;
                    if ((int)uVar30 < 0) {
                      bVar36 = (uVar30 - 1 | 0xfffffffc) == 0xffffffff;
                    }
                    if (bVar36) {
                      uVar30 = rand();
                      uVar30 = uVar30 & 0x80000003;
                      if ((int)uVar30 < 0) {
                        uVar30 = (uVar30 - 1 | 0xfffffffc) + 1;
                      }
                      if (uVar30 == 1) {
                        *(undefined4 *)(iVar29 + 0x2c) = 0x7b;
                        *(undefined4 *)(iVar29 + 0xf58) = 0x41c80000;
                      }
                      else if (uVar30 == 2) {
                        *(undefined4 *)(iVar29 + 0x2c) = 0x7d;
                        *(undefined4 *)(iVar29 + 0xf58) = 0x41c80000;
                      }
                      else if (uVar30 == 3) {
                        *(undefined4 *)(iVar29 + 0x2c) = 0x7a;
                        *(undefined4 *)(iVar29 + 0xf58) = 0x41c80000;
                      }
                      else {
                        *(undefined4 *)(iVar29 + 0x2c) = 0x79;
                        *(undefined4 *)(iVar29 + 0xf58) = 0x41c80000;
                      }
                      goto LAB_0051f2a0;
                    }
                  }
                  goto LAB_0051f4d1;
                }
                iVar28 = rand();
                if (((iVar28 % 3 != 0) && (0.8 < *(float *)(unaff_EBP - 0x12d0))) &&
                   (*(float *)(unaff_EBP - 0x12dc) <= 0.1 && *(float *)(unaff_EBP - 0x12dc) != 0.1))
                {
                  uVar30 = rand();
                  uVar30 = uVar30 & 0x80000001;
                  if ((int)uVar30 < 0) {
                    uVar30 = (uVar30 - 1 | 0xfffffffe) + 1;
                  }
                  if (uVar30 == 0) {
                    *(undefined4 *)(iVar29 + 0x2c) = 0x7c;
                  }
                  else if (uVar30 == 1) {
                    *(undefined4 *)(iVar29 + 0x2c) = 0x80;
                  }
                  goto LAB_0051f2a0;
                }
                if (*(int *)(unaff_EBP - 0x12f0) != 4) goto LAB_0051f4d1;
                iVar28 = rand();
                iVar29 = *(int *)(unaff_EBP - 0x1308);
                if (iVar28 % 3 != 0) {
                  iVar28 = FUN_00406100(pvVar17,*(uint *)(unaff_EBP - 0x12cc),
                                        *(uint *)(unaff_EBP - 0x12d4),iVar29);
                  if (iVar28 == 0) {
                    fVar37 = (float10)FUN_004f8570(pvVar17,*(float *)(unaff_EBP - 0x12cc),
                                                   *(uint *)(unaff_EBP - 0x12d4));
                    *(float *)(unaff_EBP - 0x1330) = (float)fVar37;
                    fVar38 = *(float *)(unaff_EBP - 0x1330);
                  }
                  else {
                    fVar38 = *(float *)(iVar28 + 4);
                  }
                  if (0.1 < fVar38) {
                    uVar30 = rand();
                    uVar30 = uVar30 & 0x80000003;
                    if ((int)uVar30 < 0) {
                      uVar30 = (uVar30 - 1 | 0xfffffffc) + 1;
                    }
                    if (uVar30 == 1) {
                      iVar28 = *(int *)(unaff_EBP - 0x12e4);
                      *(undefined4 *)(iVar28 + 0x2c) = 0x7b;
                    }
                    else if (uVar30 == 2) {
                      iVar28 = *(int *)(unaff_EBP - 0x12e4);
                      *(undefined4 *)(iVar28 + 0x2c) = 0x7f;
                    }
                    else {
                      iVar28 = *(int *)(unaff_EBP - 0x12e4);
                      if (uVar30 == 3) {
                        *(undefined4 *)(iVar28 + 0x2c) = 0x7d;
                      }
                      else {
                        *(undefined4 *)(iVar28 + 0x2c) = 0x78;
                      }
                    }
                    *(undefined4 *)(iVar28 + 0xf58) = 0x41c80000;
                    *(undefined4 *)(iVar28 + 0x28) = 6;
                    FUN_004f2be0((void *)(iVar29 + 0x18),(undefined4 *)(unaff_EBP - 0x131c));
                    goto LAB_0051f981;
                  }
                }
              }
              iVar28 = *(int *)(unaff_EBP - 0x12e4);
              if ((*(int *)(iVar28 + 0x28) == 1) && ((*(ushort *)(iVar28 + 0x7a) & 0x1000) == 0)) {
                iVar8 = rand();
                iVar28 = *(int *)(unaff_EBP - 0x12e4);
                if (iVar8 % 100 == 0) {
                  *(ushort *)(iVar28 + 0x7a) = *(ushort *)(iVar28 + 0x7a) | 0x200;
                }
              }
              uVar45 = __alldiv(*(uint *)(iVar28 + 0x18),*(uint *)(iVar28 + 0x1c),0x10000,0);
              iVar28 = (int)uVar45 + ((int)uVar45 >> 0x1f & 0xffU);
              uVar30 = (int)((iVar28 >> 8) + (iVar28 >> 0x1f & 7U)) >> 3;
              uVar45 = __alldiv(**(uint **)(unaff_EBP - 0x133c),(*(uint **)(unaff_EBP - 0x133c))[1],
                                0x10000,0);
              iVar28 = (int)uVar45 + ((int)uVar45 >> 0x1f & 0xffU);
              iVar8 = FUN_004286f0(pvVar17,(int)((iVar28 >> 8) + (iVar28 >> 0x1f & 7U)) >> 3,uVar30)
              ;
              iVar28 = *(int *)(unaff_EBP - 0x12e4);
              *(int *)(unaff_EBP - 0x12d0) = iVar8;
              if (*(int *)(iVar28 + 0x28) != 6) {
                FUN_0040f0a0(*(undefined4 *)(iVar28 + 0x2c),(undefined4 *)(unaff_EBP - 0x145c),
                             (undefined4 *)(unaff_EBP - 0x1458));
                iVar8 = rand();
                puVar22 = *(uint **)(unaff_EBP - 0x12d0);
                *(int *)(iVar28 + 0x34) =
                     iVar8 % ((*(int *)(unaff_EBP - 0x1458) - *(int *)(unaff_EBP - 0x145c)) + 1) +
                     *(int *)(unaff_EBP - 0x145c);
                if (((puVar22 != (uint *)0x0) && (*(int *)(unaff_EBP - 0x145c) <= (int)puVar22[9]))
                   && ((int)puVar22[9] <= *(int *)(unaff_EBP - 0x1458))) {
                  fVar37 = FUN_0052c820(puVar22,(uint *)(iVar28 + 0x10),(uint *)(iVar28 + 0x18));
                  *(float *)(unaff_EBP - 0x1330) = (float)fVar37;
                  fVar38 = 1.0 - *(float *)(unaff_EBP - 0x1330);
                  if ((0.0 < fVar38) && (0.0 < fVar38 * fVar38)) {
                    *(undefined1 *)(iVar28 + 0x58) =
                         *(undefined1 *)(*(int *)(unaff_EBP - 0x12d0) + 0x28);
                  }
                }
              }
              if (*(int *)(iVar28 + 0x28) == 1) {
                *(undefined4 *)(iVar28 + 0x40) = 21600000;
                *(undefined4 *)(iVar28 + 0x44) = 86400000;
              }
              *(void **)(unaff_EBP - 0x133c) = (void *)(iVar29 + 0x18);
              FUN_004f2be0((void *)(iVar29 + 0x18),(undefined4 *)(unaff_EBP - 0x131c));
              FUN_0040efc0(*(undefined4 *)(*(int *)(unaff_EBP - 0x131c) + 0x2c),
                           (undefined4 *)(unaff_EBP - 0x14a4),(undefined4 *)(unaff_EBP - 0x14bc));
              iVar33 = rand();
              iVar28 = *(int *)(unaff_EBP - 0x14a4);
              iVar8 = *(int *)(unaff_EBP - 0x14bc);
              iVar10 = 0;
              *(undefined4 *)(unaff_EBP - 0x12fc) = 0;
              iVar28 = iVar28 + -1 + iVar33 % ((iVar8 - iVar28) + 1);
              *(int *)(unaff_EBP - 0x12d0) = iVar28;
              if (iVar28 < 1) goto LAB_0051f97b;
              while( true ) {
                pSVar14 = operator_new(0x10f0);
                if (pSVar14 == (Spawn *)0x0) {
                  pSVar14 = (Spawn *)0x0;
                }
                else {
                  pSVar14 = cube::Spawn::Spawn(pSVar14);
                }
                (pSVar14->Spawn_data).offset_0x24 = 1;
                fVar38 = ((float)iVar10 * 6.2831855) / (float)iVar28;
                *(Spawn **)(unaff_EBP - 0x1384) = pSVar14;
                *(undefined8 *)(unaff_EBP - 0x15bc) = 0;
                dVar41 = (double)fVar38;
                *(Spawn **)(unaff_EBP - 0x12e8) = pSVar14;
                *(float *)(unaff_EBP - 0x1330) = fVar38;
                libm_sse2_sin_precise();
                *(float *)(unaff_EBP - 0x1328) = (float)dVar41 * 8.0 * 65536.0;
                uVar44 = FUN_0054a946();
                dVar41 = (double)*(float *)(unaff_EBP - 0x1330);
                *(ulonglong *)(unaff_EBP - 0x148c) = uVar44;
                libm_sse2_cos_precise();
                *(float *)(unaff_EBP - 0x1338) = (float)dVar41 * 8.0 * 65536.0;
                uVar46 = FUN_0054a946();
                uVar13 = (undefined4)(uVar46 >> 0x20);
                uVar34 = (uint)uVar46;
                *(int *)(unaff_EBP - 0x454) = (int)uVar44;
                *(undefined4 *)(unaff_EBP - 0x14fc) = uVar13;
                *(undefined4 *)(unaff_EBP - 0x458) = uVar13;
                *(undefined4 *)(unaff_EBP - 0x450) = *(undefined4 *)(unaff_EBP - 0x1488);
                iVar29 = *(int *)(unaff_EBP - 0x131c);
                *(uint *)(unaff_EBP - 0x1500) = uVar34;
                *(uint *)(unaff_EBP - 0x45c) = uVar34;
                *(undefined8 *)(unaff_EBP - 0x44c) = 0;
                uVar13 = *(undefined4 *)(iVar29 + 0x10);
                *(undefined4 *)(unaff_EBP - 0x19c) = uVar13;
                *(undefined4 *)(unaff_EBP - 0x1330) = uVar13;
                iVar29 = *(int *)(unaff_EBP - 0x131c);
                iVar28 = *(int *)(iVar29 + 0x14);
                *(int *)(unaff_EBP - 0x198) = iVar28;
                uVar30 = *(uint *)(iVar29 + 0x18);
                *(uint *)(unaff_EBP - 0x194) = uVar30;
                iVar8 = *(int *)(iVar29 + 0x1c);
                *(int *)(unaff_EBP - 400) = iVar8;
                *(undefined4 *)(unaff_EBP - 0x18c) = *(undefined4 *)(iVar29 + 0x20);
                *(undefined4 *)(unaff_EBP - 0x188) =
                     *(undefined4 *)(*(int *)(unaff_EBP - 0x131c) + 0x24);
                uVar9 = *(uint *)(unaff_EBP - 0x1330);
                iVar33 = uVar9 + uVar34;
                iVar29 = *(int *)(unaff_EBP - 0x14fc);
                uVar31 = *(uint *)(unaff_EBP - 0x148c);
                uVar32 = *(uint *)(unaff_EBP - 0x148c);
                *(int *)(unaff_EBP - 0x19c) = iVar33;
                iVar10 = *(int *)(unaff_EBP - 0x1488);
                *(uint *)(unaff_EBP - 0x198) = iVar28 + iVar29 + (uint)CARRY4(uVar9,uVar34);
                *(uint *)(unaff_EBP - 400) = iVar8 + iVar10 + (uint)CARRY4(uVar30,uVar31);
                iVar29 = *(int *)(unaff_EBP - 0x1384);
                *(uint *)(unaff_EBP - 0x194) = uVar30 + uVar32;
                *(int *)(iVar29 + 0x10) = iVar33;
                *(undefined4 *)(iVar29 + 0x14) = *(undefined4 *)(unaff_EBP - 0x198);
                *(undefined4 *)(iVar29 + 0x18) = *(undefined4 *)(unaff_EBP - 0x194);
                *(undefined4 *)(iVar29 + 0x1c) = *(undefined4 *)(unaff_EBP - 400);
                *(undefined4 *)(iVar29 + 0x20) = *(undefined4 *)(unaff_EBP - 0x18c);
                uVar30 = *(uint *)(unaff_EBP - 0x188);
                *(uint *)(iVar29 + 0x24) = uVar30;
                __alldiv(*(uint *)(iVar29 + 0x20),uVar30,0x10000,0);
                __alldiv(*(uint *)(iVar29 + 0x18),*(uint *)(iVar29 + 0x1c),0x10000,0);
                __alldiv(*(uint *)(*(int *)(unaff_EBP - 0x1384) + 0x10),
                         *(uint *)(*(int *)(unaff_EBP - 0x1384) + 0x14),0x10000,0);
                pvVar17 = *(void **)(unaff_EBP - 0x12e0);
                uVar30 = FUN_0052bfa0();
                iVar29 = *(int *)(unaff_EBP - 0x1384);
                *(uint *)(iVar29 + 0x2c) = uVar30;
                *(ushort *)(iVar29 + 0x7a) = *(ushort *)(iVar29 + 0x7a) & 0xfdff;
                if (*(int *)(iVar29 + 0x28) != 6) {
                  FUN_0040f0a0(*(undefined4 *)(iVar29 + 0x2c),(undefined4 *)(unaff_EBP - 0x1490),
                               (undefined4 *)(unaff_EBP - 0x14b4));
                  iVar8 = rand();
                  iVar28 = *(int *)(unaff_EBP - 0x131c);
                  *(int *)(iVar29 + 0x34) =
                       iVar8 % ((*(int *)(unaff_EBP - 0x14b4) - *(int *)(unaff_EBP - 0x1490)) + 1) +
                       *(int *)(unaff_EBP - 0x1490);
                  *(undefined1 *)(iVar29 + 0x58) = *(undefined1 *)(iVar28 + 0x58);
                }
                iVar28 = rand();
                pvVar15 = *(void **)(unaff_EBP - 0x133c);
                *(float *)(iVar29 + 0x54) = ((float)iVar28 * 360.0) / 32767.0;
                FUN_004f2be0(pvVar15,(undefined4 *)(unaff_EBP - 0x12e8));
                iVar28 = *(int *)(unaff_EBP - 0x12d0);
                iVar29 = *(int *)(unaff_EBP - 0x12fc) + 1;
                *(int *)(unaff_EBP - 0x12fc) = iVar29;
                if (iVar28 <= iVar29) break;
                iVar10 = *(int *)(unaff_EBP - 0x12fc);
              }
              iVar29 = *(int *)(unaff_EBP - 0x1308);
            }
          }
        }
      }
      else {
        uVar30 = rand();
        uVar30 = uVar30 & 0x80000003;
        bVar36 = uVar30 == 0;
        if ((int)uVar30 < 0) {
          bVar36 = (uVar30 - 1 | 0xfffffffc) == 0xffffffff;
        }
        if (!bVar36) goto LAB_0051eed2;
      }
    }
LAB_0051f981:
    iVar28 = *(int *)(unaff_EBP - 0x1310) + 1;
    *(int *)(unaff_EBP - 0x1310) = iVar28;
    if (2 < iVar28) break;
    iVar29 = *(int *)(unaff_EBP - 0x1310);
  } while( true );
  iVar28 = *(int *)(unaff_EBP - 0x1304) + 1;
  *(int *)(unaff_EBP - 0x1304) = iVar28;
  if (2 < iVar28) {
    iVar28 = *(int *)(unaff_EBP - 0x140c);
    *(undefined1 *)(unaff_EBP - 4) = 3;
    if (iVar28 != 0) {
      std::_Container_base0::_Orphan_all((_Container_base0 *)(unaff_EBP - 0x140c));
      operator_delete(*(void **)(unaff_EBP - 0x140c));
      *(undefined4 *)(unaff_EBP - 0x140c) = 0;
      *(undefined4 *)(unaff_EBP - 0x1408) = 0;
      *(undefined4 *)(unaff_EBP - 0x1404) = 0;
    }
    uVar30 = *(uint *)(unaff_EBP - 0x1358);
    *(uint *)(unaff_EBP - 0x12c8) = uVar30;
    if (*(int *)(unaff_EBP - 0x1370) <= (int)uVar30) goto LAB_005203ce;
    uVar9 = *(uint *)(unaff_EBP - 0x132c);
    *(undefined4 *)(unaff_EBP - 0x141c) = 0x1d6;
    iVar28 = uVar9 + 0x100;
    *(undefined4 *)(unaff_EBP - 0x13f4) = 0x96;
    *(undefined4 *)(unaff_EBP - 0x1330) = 300;
    do {
      *(uint *)(unaff_EBP - 0x1300) = uVar9;
      if ((int)uVar9 < iVar28) {
        do {
          iVar28 = FUN_00406100(pvVar17,uVar30,uVar9,iVar29);
          *(int *)(unaff_EBP - 0x12ec) = iVar28;
          *(undefined4 *)(unaff_EBP - 0x12d8) = 0;
          iVar28 = FUN_00406250(iVar28);
          if (0 < iVar28) {
            do {
              iVar8 = FUN_00406250(*(int *)(unaff_EBP - 0x12ec));
              iVar28 = *(int *)(unaff_EBP - 0x12d8);
              if (iVar28 < iVar8 + -1) {
                pvVar15 = *(void **)(unaff_EBP - 0x12ec);
                *(int *)(unaff_EBP - 0x12dc) = iVar28 + 1;
                puVar11 = FUN_004d23f0(pvVar15,iVar28 + 1);
                uVar13 = FUN_004061f0((int)puVar11);
                if ((char)uVar13 == '\0') {
                  iVar28 = *(int *)(unaff_EBP - 0x12d8);
                  goto LAB_0051fac0;
                }
              }
              else {
LAB_0051fac0:
                puVar11 = FUN_004d23f0(*(void **)(unaff_EBP - 0x12ec),iVar28);
                bVar7 = FUN_00406280((int)puVar11);
                pvVar17 = *(void **)(unaff_EBP - 0x12ec);
                *(uint *)(unaff_EBP - 0x131c) = CONCAT31(extraout_var,bVar7);
                iVar28 = *(int *)(unaff_EBP - 0x12d8) + 1;
                *(int *)(unaff_EBP - 0x12dc) = iVar28;
                puVar11 = FUN_004d23f0(pvVar17,iVar28);
                bVar7 = FUN_00406280((int)puVar11);
                iVar28 = FUN_004061d0(*(int *)(unaff_EBP - 0x12ec));
                *(int *)(unaff_EBP - 0x12d4) = iVar28 + *(int *)(unaff_EBP - 0x12d8) + 1;
                iVar28 = *(int *)(unaff_EBP - 0x131c);
                if (CONCAT31(extraout_var_00,bVar7) == 0) {
                  if (iVar28 == 0xb) {
                    pvVar17 = *(void **)(unaff_EBP - 0x12e0);
                    fVar37 = FUN_004d19f0(pvVar17,*(uint *)(unaff_EBP - 0x12c8),
                                          *(uint *)(unaff_EBP - 0x1300));
                    *(float *)(unaff_EBP - 0x12e8) = (float)fVar37;
                    if ((0.75 < *(float *)(unaff_EBP - 0x12e8)) &&
                       ((*(int *)(unaff_EBP - 0x1300) * 0x5a + *(int *)(unaff_EBP - 0x12c8)) %
                        *(int *)(unaff_EBP - 0x141c) == 0)) {
                      uVar30 = rand();
                      uVar30 = uVar30 & 0x8000000f;
                      if ((int)uVar30 < 0) {
                        uVar30 = (uVar30 - 1 | 0xfffffff0) + 1;
                      }
                      if (uVar30 == 0) {
                        iVar28 = 0;
                        *(undefined4 *)(unaff_EBP - 0x12d0) = 0;
                        do {
                          puVar11 = FUN_00405fd0(pvVar17,*(uint *)(unaff_EBP - 0x12c8),
                                                 *(uint *)(unaff_EBP - 0x1300),
                                                 iVar28 + *(int *)(unaff_EBP - 0x12d4),iVar29);
                          uVar13 = FUN_004061f0((int)puVar11);
                          if ((char)uVar13 != '\0') goto LAB_00520371;
                          iVar28 = *(int *)(unaff_EBP - 0x12d0) + 1;
                          *(int *)(unaff_EBP - 0x12d0) = iVar28;
                        } while (iVar28 < 7);
                        FUN_004c84b0(unaff_EBP - 0x1044);
                        uVar30 = *(uint *)(unaff_EBP - 0x1300);
                        uVar9 = *(uint *)(unaff_EBP - 0x12c8);
                        *(undefined1 *)(unaff_EBP - 4) = 8;
                        fVar37 = FUN_004fc140(pvVar17,uVar9,uVar30,iVar29);
                        *(float *)(unaff_EBP - 0x12e8) = (float)fVar37;
                        if (*(float *)(unaff_EBP - 0x12e8) <= 0.8) {
                          uVar47 = 0x40000000;
                          *(undefined4 *)(unaff_EBP - 0x1044) = 0x32;
                          uVar13 = 0x40000000;
                          pvVar15 = (void *)(unaff_EBP - 0x7a0);
                        }
                        else {
                          uVar47 = 0x3f800000;
                          *(undefined4 *)(unaff_EBP - 0x1044) = 0x33;
                          uVar13 = 0x3f800000;
                          pvVar15 = (void *)(unaff_EBP - 0x788);
                        }
                        puVar16 = FUN_00401080(pvVar15,uVar13,uVar47,0x41000000);
                        uVar49 = 0x51fc72;
                        FUN_00401060((void *)(unaff_EBP - 0x1020),puVar16);
                        uVar30 = *(uint *)(unaff_EBP - 0x12d4);
                        uVar47 = 0x51fc82;
                        FUN_004cde40(&stack0xfffffff8,uVar30);
                        uVar9 = *(uint *)(unaff_EBP - 0x1300);
                        uVar13 = 0x51fc92;
                        FUN_004cde40(&stack0xfffffff0,uVar9);
                        FUN_004cde40(&stack0xffffffe8,*(uint *)(unaff_EBP - 0x12c8));
                        puVar16 = FUN_00406380((void *)(unaff_EBP - 0xafc),uVar13,uVar9,uVar47,
                                               uVar30,uVar49,puVar16);
                        FUN_00402a40((void *)(unaff_EBP - 0x103c),puVar16);
                        uVar30 = rand();
                        uVar30 = uVar30 & 0x80000003;
                        if ((int)uVar30 < 0) {
                          uVar30 = (uVar30 - 1 | 0xfffffffc) + 1;
                        }
                        *(uint *)(unaff_EBP - 0x1024) = uVar30;
                        FUN_004d6670((void *)(iVar29 + 0xc),(void **)(unaff_EBP - 0x1044));
                        *(undefined1 *)(unaff_EBP - 4) = 3;
                        FUN_004cd8f0(unaff_EBP - 0x1044);
                      }
                    }
                  }
                  else if (iVar28 == 3) {
                    pvVar17 = *(void **)(unaff_EBP - 0x12e0);
                    fVar37 = FUN_004fc140(pvVar17,*(uint *)(unaff_EBP - 0x12c8),
                                          *(uint *)(unaff_EBP - 0x1300),iVar29);
                    *(float *)(unaff_EBP - 0x12e8) = (float)fVar37;
                    if (0.2 < *(float *)(unaff_EBP - 0x12e8)) {
                      dVar41 = (double)((float)*(int *)(unaff_EBP - 0x12c8) * 0.05 + 9843.0);
                      fVar37 = FUN_004d5d30(SUB84(dVar41,0),(int)((ulonglong)dVar41 >> 0x20),
                                            (double)((float)*(int *)(unaff_EBP - 0x1300) * 0.05 +
                                                    8437.0));
                      fVar37 = FUN_00401ca0((float)fVar37);
                      *(float *)(unaff_EBP - 0x12e8) = (float)fVar37;
                      if (0.5 < *(float *)(unaff_EBP - 0x12e8)) {
                        uVar30 = rand();
                        uVar30 = uVar30 & 0x80000007;
                        bVar36 = uVar30 == 0;
                        if ((int)uVar30 < 0) {
                          bVar36 = (uVar30 - 1 | 0xfffffff8) == 0xffffffff;
                        }
                        if (bVar36) {
                          FUN_004c83b0(unaff_EBP - 0x4e8);
                          piVar19 = (int *)(unaff_EBP - 0x160c);
                          piVar18 = FUN_004cde40((void *)(unaff_EBP - 0x171c),
                                                 *(uint *)(unaff_EBP - 0x12c8));
                          puVar16 = (undefined4 *)FUN_004ce290(piVar18,piVar19);
                          pvVar15 = (void *)FUN_004e2320((void *)(unaff_EBP - 0x4e0),0);
                          FUN_004cde20(pvVar15,puVar16);
                          piVar19 = (int *)(unaff_EBP - 0x161c);
                          piVar18 = FUN_004cde40((void *)(unaff_EBP - 0x162c),
                                                 *(uint *)(unaff_EBP - 0x1300));
                          puVar16 = (undefined4 *)FUN_004ce290(piVar18,piVar19);
                          pvVar15 = (void *)FUN_004e2320((void *)(unaff_EBP - 0x4e0),1);
                          FUN_004cde20(pvVar15,puVar16);
                          uVar30 = *(uint *)(unaff_EBP - 0x12d4);
                          pvVar15 = (void *)FUN_004e2320((void *)(unaff_EBP - 0x4e0),2);
                          FUN_004cde40(pvVar15,uVar30);
                          iVar28 = rand();
                          *(undefined4 *)(unaff_EBP - 0x4c8) = 0x3db851ec;
                          *(float *)(unaff_EBP - 0x4c4) = ((float)iVar28 * 360.0) / 32767.0;
                          *(undefined4 *)(unaff_EBP - 0x4e8) = 0x16;
                          *(undefined4 *)(unaff_EBP - 0x4b0) = 4;
                          FUN_00528450((void *)(iVar29 + 4),(undefined4 *)(unaff_EBP - 0x4e8));
                        }
                      }
                    }
                  }
                  else {
                    if (iVar28 != 2) goto LAB_005200d6;
                    pvVar17 = *(void **)(unaff_EBP - 0x12e0);
                    fVar37 = FUN_004fc140(pvVar17,*(uint *)(unaff_EBP - 0x12c8),
                                          *(uint *)(unaff_EBP - 0x1300),iVar29);
                    *(float *)(unaff_EBP - 0x12e8) = (float)fVar37;
                    if ((0.2 < *(float *)(unaff_EBP - 0x12e8)) && (0 < *(int *)(unaff_EBP - 0x12d4))
                       ) {
                      dVar41 = (double)((float)*(int *)(unaff_EBP - 0x12c8) * 0.05 + 24234.0);
                      fVar37 = FUN_004d5d30(SUB84(dVar41,0),(int)((ulonglong)dVar41 >> 0x20),
                                            (double)((float)*(int *)(unaff_EBP - 0x1300) * 0.05 +
                                                    53565.0));
                      fVar37 = FUN_00401ca0((float)fVar37);
                      *(float *)(unaff_EBP - 0x12e8) = (float)fVar37;
                      if ((0.7 < *(float *)(unaff_EBP - 0x12e8)) &&
                         (iVar28 = rand(), iVar28 % 10 == 0)) {
                        FUN_004c83b0(unaff_EBP - 0x568);
                        piVar19 = (int *)(unaff_EBP - 0x16d4);
                        piVar18 = FUN_004cde40((void *)(unaff_EBP - 0x163c),
                                               *(uint *)(unaff_EBP - 0x12c8));
                        puVar16 = (undefined4 *)FUN_004ce290(piVar18,piVar19);
                        pvVar15 = (void *)FUN_004e2320((void *)(unaff_EBP - 0x560),0);
                        FUN_004cde20(pvVar15,puVar16);
                        piVar19 = (int *)(unaff_EBP - 0x164c);
                        piVar18 = FUN_004cde40((void *)(unaff_EBP - 0x175c),
                                               *(uint *)(unaff_EBP - 0x1300));
                        puVar16 = (undefined4 *)FUN_004ce290(piVar18,piVar19);
                        pvVar15 = (void *)FUN_004e2320((void *)(unaff_EBP - 0x560),1);
                        FUN_004cde20(pvVar15,puVar16);
                        piVar19 = (int *)(unaff_EBP - 0x16ec);
                        piVar18 = FUN_004cde40((void *)(unaff_EBP - 0x1674),
                                               *(uint *)(unaff_EBP - 0x12d4));
                        puVar16 = (undefined4 *)FUN_004e0700(piVar18,piVar19);
                        pvVar15 = (void *)FUN_004e2320((void *)(unaff_EBP - 0x560),2);
                        FUN_004cde20(pvVar15,puVar16);
                        iVar28 = rand();
                        *(undefined4 *)(unaff_EBP - 0x548) = 0x3db851ec;
                        *(float *)(unaff_EBP - 0x544) = ((float)iVar28 * 360.0) / 32767.0;
                        uVar30 = rand();
                        uVar30 = uVar30 & 0x80000001;
                        if ((int)uVar30 < 0) {
                          uVar30 = (uVar30 - 1 | 0xfffffffe) + 1;
                        }
                        *(uint *)(unaff_EBP - 0x568) = uVar30 + 0x1f;
                        FUN_00528450((void *)(iVar29 + 4),(undefined4 *)(unaff_EBP - 0x568));
                      }
                    }
                  }
                }
                else {
LAB_005200d6:
                  if (((iVar28 == 4) || (iVar28 == 9)) || ((iVar28 == 0xc || (iVar28 == 10)))) {
                    uVar30 = *(uint *)(unaff_EBP - 0x1300);
                    iVar28 = *(int *)(unaff_EBP - 0x12c8);
                    *(float *)(unaff_EBP - 0x12fc) = (float)(int)uVar30;
                    *(float *)(unaff_EBP - 0x1310) = (float)iVar28;
                    dVar41 = (double)((float)iVar28 * 0.05 + 9843.0);
                    fVar37 = FUN_004d5d30(SUB84(dVar41,0),(int)((ulonglong)dVar41 >> 0x20),
                                          (double)((float)(int)uVar30 * 0.05 + 8437.0));
                    fVar37 = FUN_00401ca0((float)fVar37);
                    *(float *)(unaff_EBP - 0x12e8) = (float)fVar37;
                    if (0.6 < *(float *)(unaff_EBP - 0x12e8)) {
                      uVar9 = rand();
                      uVar9 = uVar9 & 0x80000007;
                      bVar36 = uVar9 == 0;
                      if ((int)uVar9 < 0) {
                        bVar36 = (uVar9 - 1 | 0xfffffff8) == 0xffffffff;
                      }
                      if (bVar36) {
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
                          piVar18 = FUN_004cde40((void *)(unaff_EBP - 0x1694),uVar30);
                          puVar16 = (undefined4 *)FUN_004ce290(piVar18,piVar19);
                          pvVar17 = (void *)FUN_004e2320((void *)(unaff_EBP - 0x370),1);
                          FUN_004cde20(pvVar17,puVar16);
                          uVar9 = *(uint *)(unaff_EBP - 0x12d4);
                          pvVar17 = (void *)FUN_004e2320((void *)(unaff_EBP - 0x370),2);
                          FUN_004cde40(pvVar17,uVar9);
                          uVar9 = rand();
                          uVar9 = uVar9 & 0x80000003;
                          if ((int)uVar9 < 0) {
                            uVar9 = (uVar9 - 1 | 0xfffffffc) + 1;
                          }
                          *(float *)(unaff_EBP - 0x354) = (float)(int)(uVar9 * 0x5a);
                          *(undefined4 *)(unaff_EBP - 0x358) = 0x3dcccccd;
                          dVar41 = (double)*(int *)(unaff_EBP - 0x12c8) * 0.01 + 9843.0;
                          fVar37 = FUN_004d5d30(SUB84(dVar41,0),(int)((ulonglong)dVar41 >> 0x20),
                                                (double)(int)uVar30 * 0.01 + 8437.0);
                          *(float *)(unaff_EBP - 0x12e8) = (float)fVar37;
                          if (*(float *)(unaff_EBP - 0x12e8) <= 0.0) {
                            *(undefined4 *)(unaff_EBP - 0x378) = 7;
LAB_00520322:
                            *(undefined4 *)(unaff_EBP - 0x358) = 0x3dcccccd;
LAB_0052032c:
                            *(uint *)(unaff_EBP - 0x340) = *(uint *)(unaff_EBP - 0x340) | 4;
                          }
                          else {
                            uVar30 = rand();
                            uVar30 = uVar30 & 0x80000001;
                            if ((int)uVar30 < 0) {
                              uVar30 = (uVar30 - 1 | 0xfffffffe) + 1;
                            }
                            iVar28 = uVar30 + 5;
                            *(int *)(unaff_EBP - 0x378) = iVar28;
                            if (iVar28 == 5) {
                              *(undefined4 *)(unaff_EBP - 0x358) = 0x3d99999a;
                              goto LAB_0052032c;
                            }
                            if (iVar28 == 7) goto LAB_00520322;
                          }
                          iVar28 = rand();
                          puVar16 = (undefined4 *)(unaff_EBP - 0x378);
                          *(float *)(unaff_EBP - 0x358) =
                               ((float)iVar28 / 32767.0 + 1.0) * *(float *)(unaff_EBP - 0x358);
                        }
                        else {
                          if (*(int *)(unaff_EBP - 0x131c) != 0xc) {
                            if (*(int *)(unaff_EBP - 0x131c) == 10) {
                              pvVar17 = *(void **)(unaff_EBP - 0x12e0);
                              iVar28 = 10;
                            }
                            else {
                              pvVar17 = *(void **)(unaff_EBP - 0x12e0);
                              fVar37 = FUN_004fc140(pvVar17,*(uint *)(unaff_EBP - 0x12c8),uVar30,
                                                    iVar29);
                              *(float *)(unaff_EBP - 0x12e8) = (float)fVar37;
                              if (*(float *)(unaff_EBP - 0x12e8) <= 0.75) {
                                FUN_004c83b0(unaff_EBP - 0x42c);
                                piVar19 = (int *)(unaff_EBP - 0x166c);
                                piVar18 = FUN_004cde40((void *)(unaff_EBP - 0x167c),
                                                       *(uint *)(unaff_EBP - 0x12c8));
                                puVar16 = (undefined4 *)FUN_004ce290(piVar18,piVar19);
                                pvVar15 = (void *)FUN_004e2320((void *)(unaff_EBP - 0x424),0);
                                FUN_004cde20(pvVar15,puVar16);
                                piVar19 = (int *)(unaff_EBP - 0x168c);
                                piVar18 = FUN_004cde40((void *)(unaff_EBP - 0x169c),
                                                       *(uint *)(unaff_EBP - 0x1300));
                                puVar16 = (undefined4 *)FUN_004ce290(piVar18,piVar19);
                                pvVar15 = (void *)FUN_004e2320((void *)(unaff_EBP - 0x424),1);
                                FUN_004cde20(pvVar15,puVar16);
                                uVar30 = *(uint *)(unaff_EBP - 0x12d4);
                                pvVar15 = (void *)FUN_004e2320((void *)(unaff_EBP - 0x424),2);
                                FUN_004cde40(pvVar15,uVar30);
                                uVar30 = rand();
                                uVar30 = uVar30 & 0x80000003;
                                if ((int)uVar30 < 0) {
                                  uVar30 = (uVar30 - 1 | 0xfffffffc) + 1;
                                }
                                uVar9 = *(uint *)(unaff_EBP - 0x1300);
                                fVar38 = *(float *)(unaff_EBP - 0x12c8);
                                *(float *)(unaff_EBP - 0x408) = (float)(int)(uVar30 * 0x5a);
                                *(undefined4 *)(unaff_EBP - 0x40c) = 0x3d99999a;
                                fVar37 = FUN_004fc100(pvVar17,fVar38,uVar9,iVar29);
                                iVar28 = *(int *)(unaff_EBP - 0x12c8);
                                *(float *)(unaff_EBP - 0x12e8) = (float)fVar37;
                                dVar42 = (double)iVar28 * 0.01;
                                dVar41 = (double)*(int *)(unaff_EBP - 0x1300) * 0.01;
                                if (*(float *)(unaff_EBP - 0x12e8) <= 0.5) {
                                  *(double *)(unaff_EBP - 0x40) = dVar41;
                                  *(double *)(unaff_EBP - 0x48) = dVar42;
                                  fVar37 = FUN_004d5d30(SUB84(dVar42 + 9843.0,0),
                                                        (int)((ulonglong)(dVar42 + 9843.0) >> 0x20),
                                                        dVar41 + 8437.0);
                                  *(float *)(unaff_EBP - 0x12e8) = (float)fVar37;
                                  if (*(float *)(unaff_EBP - 0x12e8) <= 0.0) {
                                    dVar41 = *(double *)(unaff_EBP - 0x48) + 34234.0;
                                    fVar37 = FUN_004d5d30(SUB84(dVar41,0),
                                                          (int)((ulonglong)dVar41 >> 0x20),
                                                          *(double *)(unaff_EBP - 0x40) + 234234.0);
                                    *(float *)(unaff_EBP - 0x12e8) = (float)fVar37;
                                    fVar38 = *(float *)(unaff_EBP - 0x12e8);
                                    goto LAB_00520e98;
                                  }
                                  dVar41 = (double)(*(float *)(unaff_EBP - 0x1310) * 0.01 + 34234.0)
                                  ;
                                  fVar37 = FUN_004d5d30(SUB84(dVar41,0),
                                                        (int)((ulonglong)dVar41 >> 0x20),
                                                        (double)(*(float *)(unaff_EBP - 0x12fc) *
                                                                 0.01 + 234234.0));
                                  *(float *)(unaff_EBP - 0x12e8) = (float)fVar37;
                                  uVar30 = (*(float *)(unaff_EBP - 0x12e8) <= 0.0) + 2;
                                }
                                else {
                                  *(double *)(unaff_EBP - 0x40) = dVar41;
                                  *(double *)(unaff_EBP - 0x48) = dVar42;
                                  fVar37 = FUN_004d5d30(SUB84(dVar42 + 9843.0,0),
                                                        (int)((ulonglong)(dVar42 + 9843.0) >> 0x20),
                                                        dVar41 + 8437.0);
                                  *(float *)(unaff_EBP - 0x12e8) = (float)fVar37;
                                  if (*(float *)(unaff_EBP - 0x12e8) <= 0.0) {
                                    dVar41 = *(double *)(unaff_EBP - 0x48) + 34234.0;
                                    fVar37 = FUN_004d5d30(SUB84(dVar41,0),
                                                          (int)((ulonglong)dVar41 >> 0x20),
                                                          *(double *)(unaff_EBP - 0x40) + 234234.0);
                                    *(float *)(unaff_EBP - 0x12e8) = (float)fVar37;
                                    fVar38 = *(float *)(unaff_EBP - 0x12e8);
LAB_00520e98:
                                    uVar30 = (uint)(fVar38 <= 0.0);
                                  }
                                  else {
                                    dVar41 = (double)(*(float *)(unaff_EBP - 0x1310) * 0.01 +
                                                     34234.0);
                                    fVar37 = FUN_004d5d30(SUB84(dVar41,0),
                                                          (int)((ulonglong)dVar41 >> 0x20),
                                                          (double)(*(float *)(unaff_EBP - 0x12fc) *
                                                                   0.01 + 234234.0));
                                    *(float *)(unaff_EBP - 0x12e8) = (float)fVar37;
                                    uVar30 = (uint)(0.0 < *(float *)(unaff_EBP - 0x12e8)) * 8 + 4;
                                  }
                                }
                                *(uint *)(unaff_EBP - 0x42c) = uVar30;
                                if (((((uVar30 == 2) || (uVar30 == 3)) || (uVar30 == 4)) ||
                                    (uVar30 == 0xc)) &&
                                   (*(uint *)(unaff_EBP - 0x3f4) = *(uint *)(unaff_EBP - 0x3f4) | 4,
                                   uVar30 == 0xc)) {
                                  iVar28 = rand();
                                  uVar30 = *(uint *)(unaff_EBP - 0x42c);
                                  *(float *)(unaff_EBP - 0x40c) =
                                       ((float)iVar28 * 0.02) / 32767.0 + 0.1;
                                }
                                if (((*(int *)(unaff_EBP - 0x131c) == 4) || (uVar30 == 2)) ||
                                   ((uVar30 == 3 || (uVar30 == 4)))) {
                                  puVar16 = (undefined4 *)(unaff_EBP - 0x42c);
                                  goto LAB_00520922;
                                }
                              }
                              else {
                                fVar37 = FUN_004fc100(pvVar17,*(float *)(unaff_EBP - 0x12c8),
                                                      *(uint *)(unaff_EBP - 0x1300),iVar29);
                                *(float *)(unaff_EBP - 0x12e8) = (float)fVar37;
                                if (*(float *)(unaff_EBP - 0x12e8) <= 0.25) {
                                  iVar28 = rand();
                                  if (iVar28 % 100 == 0) {
                                    FUN_004c83b0(unaff_EBP - 0x528);
                                    piVar19 = (int *)(unaff_EBP - 0x1624);
                                    piVar18 = FUN_004cde40((void *)(unaff_EBP - 0x1634),
                                                           *(uint *)(unaff_EBP - 0x12c8));
                                    puVar16 = (undefined4 *)FUN_004ce290(piVar18,piVar19);
                                    pvVar15 = (void *)FUN_004e2320((void *)(unaff_EBP - 0x520),0);
                                    FUN_004cde20(pvVar15,puVar16);
                                    piVar19 = (int *)(unaff_EBP - 0x1644);
                                    piVar18 = FUN_004cde40((void *)(unaff_EBP - 0x1654),
                                                           *(uint *)(unaff_EBP - 0x1300));
                                    puVar16 = (undefined4 *)FUN_004ce290(piVar18,piVar19);
                                    pvVar15 = (void *)FUN_004e2320((void *)(unaff_EBP - 0x520),1);
                                    FUN_004cde20(pvVar15,puVar16);
                                    uVar30 = *(uint *)(unaff_EBP - 0x12d4);
                                    pvVar15 = (void *)FUN_004e2320((void *)(unaff_EBP - 0x520),2);
                                    FUN_004cde40(pvVar15,uVar30);
                                    uVar30 = rand();
                                    uVar30 = uVar30 & 0x80000003;
                                    if ((int)uVar30 < 0) {
                                      uVar30 = (uVar30 - 1 | 0xfffffffc) + 1;
                                    }
                                    *(undefined4 *)(unaff_EBP - 0x508) = 0x3d99999a;
                                    *(float *)(unaff_EBP - 0x504) = (float)(int)(uVar30 * 0x5a);
                                    uVar30 = rand();
                                    uVar30 = uVar30 & 0x80000001;
                                    if ((int)uVar30 < 0) {
                                      uVar30 = (uVar30 - 1 | 0xfffffffe) + 1;
                                    }
                                    *(uint *)(unaff_EBP - 0x528) = 0x1c - (uint)(uVar30 != 0);
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
                                  pvVar15 = (void *)FUN_004e2320((void *)(unaff_EBP - 0x300),0);
                                  FUN_004cde20(pvVar15,puVar16);
                                  piVar19 = (int *)(unaff_EBP - 0x1604);
                                  piVar18 = FUN_004cde40((void *)(unaff_EBP - 0x1614),
                                                         *(uint *)(unaff_EBP - 0x1300));
                                  puVar16 = (undefined4 *)FUN_004ce290(piVar18,piVar19);
                                  pvVar15 = (void *)FUN_004e2320((void *)(unaff_EBP - 0x300),1);
                                  FUN_004cde20(pvVar15,puVar16);
                                  uVar30 = *(uint *)(unaff_EBP - 0x12d4);
                                  pvVar15 = (void *)FUN_004e2320((void *)(unaff_EBP - 0x300),2);
                                  FUN_004cde40(pvVar15,uVar30);
                                  iVar28 = rand();
                                  dVar42 = (double)*(int *)(unaff_EBP - 0x12c8) * 0.01;
                                  *(float *)(unaff_EBP - 0x2e4) = ((float)iVar28 * 360.0) / 32767.0;
                                  dVar41 = (double)*(int *)(unaff_EBP - 0x1300) * 0.01;
                                  *(undefined4 *)(unaff_EBP - 0x2e8) = 0x3d99999a;
                                  *(double *)(unaff_EBP - 0x48) = dVar42;
                                  *(double *)(unaff_EBP - 0x40) = dVar41;
                                  dVar42 = dVar42 + 9843.0;
                                  fVar37 = FUN_004d5d30(SUB84(dVar42,0),
                                                        (int)((ulonglong)dVar42 >> 0x20),
                                                        dVar41 + 8437.0);
                                  *(float *)(unaff_EBP - 0x12e8) = (float)fVar37;
                                  if (*(float *)(unaff_EBP - 0x12e8) <= 0.0) {
                                    dVar41 = *(double *)(unaff_EBP - 0x48) + 34234.0;
                                    fVar37 = FUN_004d5d30(SUB84(dVar41,0),
                                                          (int)((ulonglong)dVar41 >> 0x20),
                                                          *(double *)(unaff_EBP - 0x40) + 234234.0);
                                    *(float *)(unaff_EBP - 0x12e8) = (float)fVar37;
                                    iVar28 = (*(float *)(unaff_EBP - 0x12e8) <= 0.5) + 0xb;
                                  }
                                  else {
                                    dVar41 = (double)(*(float *)(unaff_EBP - 0x1310) * 0.01 +
                                                     34234.0);
                                    fVar37 = FUN_004d5d30(SUB84(dVar41,0),
                                                          (int)((ulonglong)dVar41 >> 0x20),
                                                          (double)(*(float *)(unaff_EBP - 0x12fc) *
                                                                   0.01 + 234234.0));
                                    *(float *)(unaff_EBP - 0x12e8) = (float)fVar37;
                                    iVar28 = (0.0 < *(float *)(unaff_EBP - 0x12e8)) + 3;
                                  }
                                  *(int *)(unaff_EBP - 0x308) = iVar28;
                                  if ((iVar28 == 2) || (iVar28 == 3)) {
                                    *(uint *)(unaff_EBP - 0x2d0) = *(uint *)(unaff_EBP - 0x2d0) | 4;
                                  }
                                  if (iVar28 == 0xb) {
                                    iVar8 = rand();
                                    *(uint *)(unaff_EBP - 0x2d0) = *(uint *)(unaff_EBP - 0x2d0) | 4;
                                    iVar28 = *(int *)(unaff_EBP - 0x308);
                                    *(float *)(unaff_EBP - 0x2e8) =
                                         ((float)iVar8 * 0.05) / 32767.0 + 0.05;
                                  }
                                  if (iVar28 == 0xc) {
                                    iVar8 = rand();
                                    *(uint *)(unaff_EBP - 0x2d0) = *(uint *)(unaff_EBP - 0x2d0) | 4;
                                    iVar28 = *(int *)(unaff_EBP - 0x308);
                                    *(float *)(unaff_EBP - 0x2e8) =
                                         ((float)iVar8 * 0.02) / 32767.0 + 0.1;
                                  }
                                  if (((*(int *)(unaff_EBP - 0x131c) == 4) || (iVar28 == 2)) ||
                                     (iVar28 == 3)) {
                                    puVar16 = (undefined4 *)(unaff_EBP - 0x308);
LAB_00520922:
                                    FUN_00528450((void *)(iVar29 + 4),puVar16);
                                  }
                                }
                              }
                              iVar28 = *(int *)(unaff_EBP - 0x131c);
                            }
                            if (iVar28 == 4) {
                              iVar28 = rand();
                              if (iVar28 % *(int *)(unaff_EBP - 0x13f4) == 0) {
                                FUN_0041d8d0((undefined2 *)(unaff_EBP - 0xc5c));
                                piVar19 = (int *)(unaff_EBP - 0x16ac);
                                piVar18 = FUN_004cde40((void *)(unaff_EBP - 0x16bc),
                                                       *(uint *)(unaff_EBP - 0x12c8));
                                puVar16 = (undefined4 *)FUN_004ce290(piVar18,piVar19);
                                pvVar15 = (void *)FUN_004e2320((void *)(unaff_EBP - 0xb44),0);
                                FUN_004cde20(pvVar15,puVar16);
                                piVar19 = (int *)(unaff_EBP - 0x16cc);
                                piVar18 = FUN_004cde40((void *)(unaff_EBP - 0x16e4),
                                                       *(uint *)(unaff_EBP - 0x1300));
                                puVar16 = (undefined4 *)FUN_004ce290(piVar18,piVar19);
                                pvVar15 = (void *)FUN_004e2320((void *)(unaff_EBP - 0xb44),1);
                                FUN_004cde20(pvVar15,puVar16);
                                uVar30 = *(uint *)(unaff_EBP - 0x12d4);
                                pvVar15 = (void *)FUN_004e2320((void *)(unaff_EBP - 0xb44),2);
                                FUN_004cde40(pvVar15,uVar30);
                                iVar28 = rand();
                                *(undefined1 *)(unaff_EBP - 0xc5c) = 0xb;
                                *(float *)(unaff_EBP - 0xb2c) = ((float)iVar28 / 32767.0) * 360.0;
                                uVar30 = rand();
                                uVar30 = uVar30 & 0x80000001;
                                if ((int)uVar30 < 0) {
                                  uVar30 = (uVar30 - 1 | 0xfffffffe) + 1;
                                }
                                if (uVar30 == 0) {
                                  *(undefined1 *)(unaff_EBP - 0xc5b) = 0xf;
                                }
                                else if (uVar30 == 1) {
                                  *(undefined1 *)(unaff_EBP - 0xc5b) = 0x16;
                                  *(undefined4 *)(unaff_EBP - 0xb28) = 0x3dcccccd;
                                }
                                *(undefined2 *)(unaff_EBP - 0xc4c) = 1;
                                *(undefined1 *)(unaff_EBP - 0xb24) = 2;
                                FUN_0041f5b0((void *)(iVar29 + 0x30),
                                             (undefined1 *)(unaff_EBP - 0xc5c));
                              }
                            }
                            else if ((iVar28 == 10) &&
                                    (iVar28 = rand(), iVar28 % *(int *)(unaff_EBP - 0x1330) == 0)) {
                              FUN_0041d8d0((undefined2 *)(unaff_EBP - 0xda4));
                              piVar19 = (int *)(unaff_EBP - 0x16f4);
                              piVar18 = FUN_004cde40((void *)(unaff_EBP - 0x1704),
                                                     *(uint *)(unaff_EBP - 0x12c8));
                              puVar16 = (undefined4 *)FUN_004ce290(piVar18,piVar19);
                              pvVar15 = (void *)FUN_004e2320((void *)(unaff_EBP - 0xc8c),0);
                              FUN_004cde20(pvVar15,puVar16);
                              piVar19 = (int *)(unaff_EBP - 0x1714);
                              piVar18 = FUN_004cde40((void *)(unaff_EBP - 0x1724),
                                                     *(uint *)(unaff_EBP - 0x1300));
                              puVar16 = (undefined4 *)FUN_004ce290(piVar18,piVar19);
                              pvVar15 = (void *)FUN_004e2320((void *)(unaff_EBP - 0xc8c),1);
                              FUN_004cde20(pvVar15,puVar16);
                              uVar30 = *(uint *)(unaff_EBP - 0x12d4);
                              pvVar15 = (void *)FUN_004e2320((void *)(unaff_EBP - 0xc8c),2);
                              FUN_004cde40(pvVar15,uVar30);
                              iVar28 = rand();
                              *(undefined1 *)(unaff_EBP - 0xda4) = 0xb;
                              *(float *)(unaff_EBP - 0xc74) = ((float)iVar28 / 32767.0) * 360.0;
                              uVar30 = rand();
                              uVar30 = uVar30 & 0x80000001;
                              if ((int)uVar30 < 0) {
                                uVar30 = (uVar30 - 1 | 0xfffffffe) + 1;
                              }
                              if (uVar30 < 2) {
                                *(undefined1 *)(unaff_EBP - 0xda3) = 0x18;
                                *(undefined4 *)(unaff_EBP - 0xc70) = 0x3dcccccd;
                              }
                              *(undefined2 *)(unaff_EBP - 0xd94) = 1;
                              *(undefined1 *)(unaff_EBP - 0xc6c) = 2;
                              FUN_0041f5b0((void *)(iVar29 + 0x30),(undefined1 *)(unaff_EBP - 0xda4)
                                          );
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
                          piVar18 = FUN_004cde40((void *)(unaff_EBP - 0x15d4),uVar30);
                          puVar16 = (undefined4 *)FUN_004ce290(piVar18,piVar19);
                          pvVar17 = (void *)FUN_004e2320((void *)(unaff_EBP - 0x494),1);
                          FUN_004cde20(pvVar17,puVar16);
                          uVar9 = *(uint *)(unaff_EBP - 0x12d4);
                          pvVar17 = (void *)FUN_004e2320((void *)(unaff_EBP - 0x494),2);
                          FUN_004cde40(pvVar17,uVar9);
                          uVar9 = rand();
                          uVar9 = uVar9 & 0x80000003;
                          if ((int)uVar9 < 0) {
                            uVar9 = (uVar9 - 1 | 0xfffffffc) + 1;
                          }
                          *(float *)(unaff_EBP - 0x478) = (float)(int)(uVar9 * 0x5a);
                          *(undefined4 *)(unaff_EBP - 0x47c) = 0x3d99999a;
                          dVar41 = (double)*(int *)(unaff_EBP - 0x12c8) * 0.01 + 9843.0;
                          fVar37 = FUN_004d5d30(SUB84(dVar41,0),(int)((ulonglong)dVar41 >> 0x20),
                                                (double)(int)uVar30 * 0.01 + 8437.0);
                          *(float *)(unaff_EBP - 0x12e8) = (float)fVar37;
                          iVar28 = (*(float *)(unaff_EBP - 0x12e8) <= 0.0) + 9;
                          *(int *)(unaff_EBP - 0x49c) = iVar28;
                          if (iVar28 == 9) {
                            *(uint *)(unaff_EBP - 0x464) = *(uint *)(unaff_EBP - 0x464) | 4;
                            puVar16 = (undefined4 *)(unaff_EBP - 0x49c);
                          }
                          else {
                            if (iVar28 == 10) {
                              iVar28 = rand();
                              *(float *)(unaff_EBP - 0x47c) =
                                   ((float)iVar28 * 0.02) / 32767.0 + 0.03;
                            }
                            puVar16 = (undefined4 *)(unaff_EBP - 0x49c);
                          }
                        }
                        FUN_00528450((void *)(iVar29 + 4),puVar16);
                      }
                    }
                  }
LAB_0052036b:
                  pvVar17 = *(void **)(unaff_EBP - 0x12e0);
                }
              }
LAB_00520371:
              iVar28 = *(int *)(unaff_EBP - 0x12ec);
              *(undefined4 *)(unaff_EBP - 0x12d8) = *(undefined4 *)(unaff_EBP - 0x12dc);
              iVar28 = FUN_00406250(iVar28);
            } while (*(int *)(unaff_EBP - 0x12d8) < iVar28);
          }
          uVar30 = *(uint *)(unaff_EBP - 0x12c8);
          uVar9 = *(int *)(unaff_EBP - 0x1300) + 1;
          iVar28 = *(int *)(unaff_EBP - 0x132c) + 0x100;
          *(uint *)(unaff_EBP - 0x1300) = uVar9;
        } while ((int)uVar9 < iVar28);
      }
      uVar30 = uVar30 + 1;
      *(uint *)(unaff_EBP - 0x12c8) = uVar30;
      if (*(int *)(unaff_EBP - 0x1370) <= (int)uVar30) {
LAB_005203ce:
        piVar19 = (int *)(iVar29 + 0x24);
        *(int **)(unaff_EBP - 0x12e8) = piVar19;
        iVar28 = FUN_0041fff0(piVar19);
        if (0 < iVar28) {
          uVar30 = 0;
          do {
            piVar18 = (int *)FUN_00402bb0(piVar19,uVar30);
            if (*(int *)*piVar18 == 0 && ((int *)*piVar18)[1] == 0) {
              puVar16 = (undefined4 *)FUN_00402bb0(piVar19,uVar30);
              uVar45 = FUN_004f3850(*(uint *)(unaff_EBP - 0x135c),*(uint *)(unaff_EBP - 0x1364),
                                    uVar30);
              piVar19 = *(int **)(unaff_EBP - 0x12e8);
              *(undefined8 *)*puVar16 = uVar45;
            }
            uVar30 = uVar30 + 1;
            iVar29 = FUN_0041fff0(piVar19);
          } while ((int)uVar30 < iVar29);
          iVar29 = *(int *)(unaff_EBP - 0x1308);
        }
        piVar19 = (int *)(iVar29 + 0x18);
        *(undefined4 *)(unaff_EBP - 0x12cc) = 0;
        *(int **)(unaff_EBP - 0x12c8) = piVar19;
        iVar28 = FUN_0041fff0(piVar19);
        if (iVar28 < 1) {
          pvVar17 = *(void **)(unaff_EBP - 0x12e0);
        }
        else {
          uVar30 = 0;
          while( true ) {
            piVar18 = (int *)FUN_00402bb0(piVar19,uVar30);
            if (*(int *)(*piVar18 + 0x48) == 0 && *(int *)(*piVar18 + 0x4c) == 0) {
              piVar18 = (int *)FUN_00402bb0(piVar19,uVar30);
              uVar45 = FUN_004f3850(*(uint *)(unaff_EBP - 0x135c),*(uint *)(unaff_EBP - 0x1364),
                                    uVar30);
              piVar19 = *(int **)(unaff_EBP - 0x12c8);
              *(undefined8 *)(*piVar18 + 0x48) = uVar45;
            }
            piVar19 = (int *)FUN_00402bb0(piVar19,uVar30);
            piVar18 = (int *)FUN_00402bb0(*(void **)(unaff_EBP - 0x12c8),uVar30);
            FUN_0040a840((uint *)(*piVar18 + 0x2c),*piVar19 + 0x74,(undefined4 *)0x0);
            pvVar17 = *(void **)(unaff_EBP - 0x12c8);
            piVar19 = (int *)FUN_00402bb0(pvVar17,uVar30);
            FUN_004fb480(*piVar19,0);
            piVar19 = (int *)FUN_00402bb0(pvVar17,uVar30);
            if ((*(ushort *)(*piVar19 + 0x7a) & 0x200) != 0) {
              FUN_00406fd0((undefined2 *)(unaff_EBP - 0xebc));
              *(undefined2 *)(unaff_EBP - 0xebc) = 0xe0b;
              piVar19 = (int *)FUN_00402bb0(pvVar17,uVar30);
              *(undefined2 *)(unaff_EBP - 0xeac) = *(undefined2 *)(*piVar19 + 0x34);
              uVar9 = rand();
              uVar9 = uVar9 & 0x80000003;
              if ((int)uVar9 < 0) {
                uVar9 = (uVar9 - 1 | 0xfffffffc) + 1;
              }
              *(char *)(unaff_EBP - 0xeaf) = (char)uVar9 + -0x80;
              *(undefined1 *)(unaff_EBP - 0xeb0) = 2;
              piVar19 = (int *)FUN_00402bb0(pvVar17,uVar30);
              FUN_00427000((void *)(*piVar19 + 0xf6c),(char *)(unaff_EBP - 0xebc),-1);
            }
            piVar19 = (int *)FUN_00402bb0(pvVar17,uVar30);
            piVar18 = (int *)FUN_00402bb0(*(void **)(unaff_EBP - 0x12c8),uVar30);
            iVar28 = FUN_00402bb0(*(void **)(unaff_EBP - 0x12c8),*(int *)(unaff_EBP - 0x12cc));
            iVar29 = *piVar19;
            *(int *)(unaff_EBP - 0x12e8) = iVar28;
            iVar28 = FUN_0052bf40((uint)*(byte *)(*piVar18 + 0x58),
                                  (byte)((ushort)*(undefined2 *)(iVar29 + 0x7a) >> 9) & 1);
            iVar29 = *(int *)(unaff_EBP - 0x12cc);
            *(char *)(**(int **)(unaff_EBP - 0x12e8) + 0x8d4) = (char)iVar28;
            piVar19 = (int *)FUN_00402bb0(*(void **)(unaff_EBP - 0x12c8),iVar29);
            piVar18 = (int *)FUN_00402bb0(*(void **)(unaff_EBP - 0x12c8),iVar29);
            iVar28 = FUN_00402bb0(*(void **)(unaff_EBP - 0x12c8),*(int *)(unaff_EBP - 0x12cc));
            iVar29 = *piVar19;
            *(int *)(unaff_EBP - 0x12e8) = iVar28;
            iVar28 = FUN_0052bf40((uint)*(byte *)(*piVar18 + 0x58),
                                  (byte)((ushort)*(undefined2 *)(iVar29 + 0x7a) >> 9) & 1);
            iVar29 = *(int *)(unaff_EBP - 0x12cc);
            *(char *)(**(int **)(unaff_EBP - 0x12e8) + 0x7bc) = (char)iVar28;
            piVar19 = (int *)FUN_00402bb0(*(void **)(unaff_EBP - 0x12c8),iVar29);
            piVar18 = (int *)FUN_00402bb0(*(void **)(unaff_EBP - 0x12c8),iVar29);
            iVar28 = FUN_00402bb0(*(void **)(unaff_EBP - 0x12c8),*(int *)(unaff_EBP - 0x12cc));
            iVar29 = *piVar19;
            *(int *)(unaff_EBP - 0x12e8) = iVar28;
            iVar28 = FUN_0052bf40((uint)*(byte *)(*piVar18 + 0x58),
                                  (byte)((ushort)*(undefined2 *)(iVar29 + 0x7a) >> 9) & 1);
            iVar29 = *(int *)(unaff_EBP - 0x12cc);
            *(char *)(**(int **)(unaff_EBP - 0x12e8) + 0x6a4) = (char)iVar28;
            piVar19 = (int *)FUN_00402bb0(*(void **)(unaff_EBP - 0x12c8),iVar29);
            piVar18 = (int *)FUN_00402bb0(*(void **)(unaff_EBP - 0x12c8),iVar29);
            iVar28 = FUN_00402bb0(*(void **)(unaff_EBP - 0x12c8),*(int *)(unaff_EBP - 0x12cc));
            iVar29 = *piVar19;
            *(int *)(unaff_EBP - 0x12e8) = iVar28;
            iVar28 = FUN_0052bf40((uint)*(byte *)(*piVar18 + 0x58),
                                  (byte)((ushort)*(undefined2 *)(iVar29 + 0x7a) >> 9) & 1);
            iVar29 = *(int *)(unaff_EBP - 0x12cc);
            *(char *)(**(int **)(unaff_EBP - 0x12e8) + 0x35c) = (char)iVar28;
            piVar19 = (int *)FUN_00402bb0(*(void **)(unaff_EBP - 0x12c8),iVar29);
            piVar18 = (int *)FUN_00402bb0(*(void **)(unaff_EBP - 0x12c8),iVar29);
            iVar28 = FUN_00402bb0(*(void **)(unaff_EBP - 0x12c8),*(int *)(unaff_EBP - 0x12cc));
            iVar29 = *piVar19;
            *(int *)(unaff_EBP - 0x12e8) = iVar28;
            iVar28 = FUN_0052bf40((uint)*(byte *)(*piVar18 + 0x58),
                                  (byte)((ushort)*(undefined2 *)(iVar29 + 0x7a) >> 9) & 1);
            iVar29 = *(int *)(unaff_EBP - 0x12cc);
            *(char *)(**(int **)(unaff_EBP - 0x12e8) + 0x58c) = (char)iVar28;
            piVar19 = (int *)FUN_00402bb0(*(void **)(unaff_EBP - 0x12c8),iVar29);
            piVar18 = (int *)FUN_00402bb0(*(void **)(unaff_EBP - 0x12c8),iVar29);
            iVar28 = FUN_00402bb0(*(void **)(unaff_EBP - 0x12c8),*(int *)(unaff_EBP - 0x12cc));
            iVar29 = *piVar19;
            *(int *)(unaff_EBP - 0x12e8) = iVar28;
            iVar28 = FUN_0052bf40((uint)*(byte *)(*piVar18 + 0x58),
                                  (byte)((ushort)*(undefined2 *)(iVar29 + 0x7a) >> 9) & 1);
            iVar29 = *(int *)(unaff_EBP - 0x12cc);
            *(char *)(**(int **)(unaff_EBP - 0x12e8) + 0x474) = (char)iVar28;
            piVar19 = (int *)FUN_00402bb0(*(void **)(unaff_EBP - 0x12c8),iVar29);
            piVar18 = (int *)FUN_00402bb0(*(void **)(unaff_EBP - 0x12c8),iVar29);
            iVar28 = FUN_00402bb0(*(void **)(unaff_EBP - 0x12c8),*(int *)(unaff_EBP - 0x12cc));
            pvVar17 = *(void **)(unaff_EBP - 0x12e0);
            uVar3 = *(undefined2 *)(*piVar19 + 0x7a);
            iVar29 = *piVar18;
            *(int *)(unaff_EBP - 0x12e8) = iVar28;
            iVar28 = FUN_0052bf40((uint)*(byte *)(iVar29 + 0x58),(byte)((ushort)uVar3 >> 9) & 1);
            iVar29 = *(int *)(unaff_EBP - 0x12cc);
            *(char *)(**(int **)(unaff_EBP - 0x12e8) + 0x244) = (char)iVar28;
            piVar19 = (int *)FUN_00402bb0(*(void **)(unaff_EBP - 0x12c8),iVar29);
            if ((*(ushort *)(*piVar19 + 0x7a) & 0x200) == 0) {
              piVar19 = (int *)FUN_00402bb0(*(void **)(unaff_EBP - 0x12c8),iVar29);
              FUN_00414470((void *)(*piVar19 + 0x8c8),0.05,'\0');
              piVar19 = (int *)FUN_00402bb0(*(void **)(unaff_EBP - 0x12c8),iVar29);
              FUN_00414470((void *)(*piVar19 + 0x7b0),0.05,'\0');
              piVar19 = (int *)FUN_00402bb0(*(void **)(unaff_EBP - 0x12c8),iVar29);
              FUN_00414470((void *)(*piVar19 + 0x698),0.05,'\0');
              piVar19 = (int *)FUN_00402bb0(*(void **)(unaff_EBP - 0x12c8),iVar29);
              FUN_00414470((void *)(*piVar19 + 0x350),0.05,'\0');
              piVar19 = (int *)FUN_00402bb0(*(void **)(unaff_EBP - 0x12c8),iVar29);
              FUN_00414470((void *)(*piVar19 + 0x580),0.05,'\0');
              piVar19 = (int *)FUN_00402bb0(*(void **)(unaff_EBP - 0x12c8),iVar29);
              FUN_00414470((void *)(*piVar19 + 0x468),0.05,'\0');
              piVar19 = (int *)FUN_00402bb0(*(void **)(unaff_EBP - 0x12c8),iVar29);
              FUN_00414470((void *)(*piVar19 + 0x238),0.05,'\0');
              piVar19 = (int *)FUN_00402bb0(*(void **)(unaff_EBP - 0x12c8),iVar29);
              FUN_00414470((void *)(*piVar19 + 0x9e0),0.05,'\0');
              piVar19 = (int *)FUN_00402bb0(*(void **)(unaff_EBP - 0x12c8),iVar29);
              FUN_00414470((void *)(*piVar19 + 0xaf8),0.05,'\0');
            }
            piVar19 = (int *)FUN_00402bb0(*(void **)(unaff_EBP - 0x12c8),iVar29);
            if ((*(int *)(*piVar19 + 0x28) == 1) &&
               (piVar19 = (int *)FUN_00402bb0(*(void **)(unaff_EBP - 0x12c8),iVar29),
               (*(ushort *)(*piVar19 + 0x7a) & 0x200) == 0)) {
              rand();
            }
            piVar19 = *(int **)(unaff_EBP - 0x12c8);
            uVar30 = iVar29 + 1;
            *(uint *)(unaff_EBP - 0x12cc) = uVar30;
            iVar29 = FUN_0041fff0(piVar19);
            if (iVar29 <= (int)uVar30) break;
            piVar19 = *(int **)(unaff_EBP - 0x12c8);
          }
          iVar29 = *(int *)(unaff_EBP - 0x1308);
        }
        FUN_004f7330((undefined4 *)(unaff_EBP - 0x144c));
        *(undefined1 *)(unaff_EBP - 4) = 9;
        FUN_00530550((void *)(iVar29 + 0x30),(undefined4 *)(unaff_EBP - 0x139c));
        piVar19 = (int *)FUN_004d3de0((void *)(iVar29 + 0x30),(undefined4 *)(unaff_EBP - 0x14a0));
        bVar36 = FUN_0042c6f0((void *)(unaff_EBP - 0x139c),piVar19);
        if (bVar36) {
          do {
            puVar20 = (undefined1 *)FUN_004ce1f0((undefined4 *)(unaff_EBP - 0x139c));
            puVar50 = puVar20 + 0xd;
            *(undefined1 **)(unaff_EBP - 0x12e8) = puVar20;
            puVar20 = (undefined1 *)
                      FUN_004f72d0((undefined1 *)(unaff_EBP - 0x14be),puVar20,puVar20 + 1);
            pbVar21 = (byte *)FUN_004f72f0((undefined1 *)(unaff_EBP - 0x150b),puVar20,puVar50);
            FUN_004f3880((void *)(unaff_EBP - 0x15b4),pbVar21);
            piVar19 = FUN_004f7910((void *)(unaff_EBP - 0x144c),(int *)(unaff_EBP - 0x15b4));
            *piVar19 = *piVar19 + 1;
            if ((*(byte *)(*(int *)(unaff_EBP - 0x12e8) + 0x138) & 1) == 0) {
              pvVar17 = (void *)(*(int *)(unaff_EBP - 0x12e8) + 0x118);
              pvVar15 = (void *)FUN_004e2320(pvVar17,2);
              *(void **)(unaff_EBP - 0x12d0) = pvVar15;
              puVar22 = (uint *)FUN_004014b0(pvVar15,(int *)(unaff_EBP - 0x1524));
              iVar29 = FUN_004e2320(pvVar17,1);
              *(int *)(unaff_EBP - 0x12dc) = iVar29;
              puVar23 = (uint *)FUN_004e2320(pvVar17,0);
              iVar29 = *(int *)(unaff_EBP - 0x1308);
              uVar30 = puVar22[1];
              uVar9 = *puVar22;
              puVar22 = *(uint **)(unaff_EBP - 0x12dc);
              pvVar17 = *(void **)(unaff_EBP - 0x12e0);
              uVar32 = puVar22[1];
              *(uint **)(unaff_EBP - 0x12e8) = puVar23;
              iVar28 = FUN_00406050(pvVar17,*puVar23,puVar23[1],*puVar22,uVar32,uVar9,uVar30,iVar29)
              ;
              uVar13 = FUN_004061f0(iVar28);
              cVar6 = (char)uVar13;
              while (cVar6 == '\0') {
                FUN_004cde40((void *)(unaff_EBP - 0x152c),1);
                FUN_00402eb0(*(void **)(unaff_EBP - 0x12d0),(uint *)(unaff_EBP - 0x152c));
                puVar22 = (uint *)FUN_004014b0(*(void **)(unaff_EBP - 0x12d0),
                                               (int *)(unaff_EBP - 0x1524));
                iVar28 = FUN_00406050(pvVar17,**(uint **)(unaff_EBP - 0x12e8),
                                      (*(uint **)(unaff_EBP - 0x12e8))[1],
                                      **(uint **)(unaff_EBP - 0x12dc),
                                      (*(uint **)(unaff_EBP - 0x12dc))[1],*puVar22,puVar22[1],iVar29
                                     );
                uVar13 = FUN_004061f0(iVar28);
                cVar6 = (char)uVar13;
              }
            }
            FUN_0041e300((void *)(unaff_EBP - 0x139c),(int *)(unaff_EBP - 0x13d8));
            piVar19 = (int *)FUN_004d3de0((void *)(iVar29 + 0x30),(undefined4 *)(unaff_EBP - 0x14a0)
                                         );
            bVar36 = FUN_0042c6f0((void *)(unaff_EBP - 0x139c),piVar19);
          } while (bVar36);
        }
        FUN_00428070((void *)(unaff_EBP - 0x144c),(undefined4 *)(unaff_EBP - 0x13a0));
        piVar19 = (int *)FUN_00530550((void *)(unaff_EBP - 0x144c),
                                      (undefined4 *)(unaff_EBP - 0x14a8));
        uVar45 = CONCAT44(piVar19,0x52185e);
        bVar36 = FUN_0042c6f0((void *)(unaff_EBP - 0x13a0),piVar19);
        if (bVar36) {
          uVar30 = *(uint *)(unaff_EBP - 0x138c);
          do {
            uVar13 = (undefined4)uVar45;
            piVar19 = (int *)FUN_00402bc0((int *)(unaff_EBP - 0x13a0));
            iVar28 = *piVar19;
            *(int **)(unaff_EBP - 0x12e8) = piVar19;
            if (((iVar28 == 1) || (iVar28 == 0xb)) && (7 < piVar19[3])) {
              uVar49 = 0x5218a6;
              FUN_004f7490((undefined4 *)(unaff_EBP - 0x1184));
              puVar50 = *(undefined1 **)(unaff_EBP - 0x12e8);
              *(undefined1 *)(unaff_EBP - 0x1180) = *puVar50;
              *(undefined1 *)(unaff_EBP - 0x117f) = puVar50[4];
              uVar2 = puVar50[8];
              *(undefined4 *)(unaff_EBP - 0x1184) = 9;
              *(undefined1 *)(unaff_EBP - 0x1173) = uVar2;
              uVar45 = 0x5218dc;
              FUN_004cde40(&stack0xfffffff8,0);
              uVar9 = *(uint *)(unaff_EBP - 5000);
              uVar47 = 0x5218ec;
              FUN_004cde40(&stack0xfffffff0,uVar9);
              FUN_004cde40(&stack0xffffffe8,uVar30);
              puVar16 = FUN_00406380((void *)(unaff_EBP - 0xb14),uVar47,uVar9,(int)uVar45,
                                     (int)((ulonglong)uVar45 >> 0x20),uVar13,uVar49);
              FUN_00402a40((void *)(unaff_EBP - 0x105c),puVar16);
              FUN_005284a0((void *)(iVar29 + 0x48),(undefined4 *)(unaff_EBP - 0x1184));
            }
            FUN_00407a30((void *)(unaff_EBP - 0x13a0),(int *)(unaff_EBP - 0x1548));
            piVar19 = (int *)FUN_00530550((void *)(unaff_EBP - 0x144c),
                                          (undefined4 *)(unaff_EBP - 0x14a8));
            uVar45 = CONCAT44(piVar19,0x52194f);
            bVar36 = FUN_0042c6f0((void *)(unaff_EBP - 0x13a0),piVar19);
          } while (bVar36);
          pvVar17 = *(void **)(unaff_EBP - 0x12e0);
        }
        FUN_004f7310((undefined4 *)(unaff_EBP - 0x1454));
        *(undefined1 *)(unaff_EBP - 4) = 10;
        FUN_00530550((void *)(iVar29 + 0x18),(undefined4 *)(unaff_EBP - 0x1394));
        piVar19 = (int *)FUN_004d3de0((void *)(iVar29 + 0x18),(undefined4 *)(unaff_EBP - 0x14b0));
        bVar36 = FUN_0042c6f0((void *)(unaff_EBP - 0x1394),piVar19);
        if (bVar36) {
          do {
            piVar19 = (int *)FUN_004ce1f0((undefined4 *)(unaff_EBP - 0x1394));
            iVar28 = *piVar19;
            if (*(int *)(iVar28 + 0x44) == 86400000) {
              piVar19 = (int *)FUN_004c8130((undefined4 *)(unaff_EBP - 0x1734),
                                            (undefined4 *)(iVar28 + 0x28),
                                            (undefined4 *)(iVar28 + 0x2c));
              piVar19 = FUN_004f7890((void *)(unaff_EBP - 0x1454),piVar19);
              *piVar19 = *piVar19 + 1;
            }
            FUN_004f79d0((void *)(unaff_EBP - 0x1394),(int *)(unaff_EBP - 0x13e0));
            piVar19 = (int *)FUN_004d3de0((void *)(iVar29 + 0x18),(undefined4 *)(unaff_EBP - 0x14b0)
                                         );
            bVar36 = FUN_0042c6f0((void *)(unaff_EBP - 0x1394),piVar19);
          } while (bVar36);
          pvVar17 = *(void **)(unaff_EBP - 0x12e0);
        }
        FUN_00428070((void *)(unaff_EBP - 0x1454),(undefined4 *)(unaff_EBP - 0x1398));
        piVar19 = (int *)FUN_00530550((void *)(unaff_EBP - 0x1454),
                                      (undefined4 *)(unaff_EBP - 0x14b8));
        uVar45 = CONCAT44(piVar19,0x521a44);
        bVar36 = FUN_0042c6f0((void *)(unaff_EBP - 0x1398),piVar19);
        if (bVar36) {
          uVar30 = *(uint *)(unaff_EBP - 0x138c);
          do {
            uVar13 = (undefined4)uVar45;
            piVar19 = (int *)FUN_00402bc0((int *)(unaff_EBP - 0x1398));
            iVar28 = *piVar19;
            *(int **)(unaff_EBP - 0x12e8) = piVar19;
            if ((((iVar28 == 1) || (iVar28 == 6)) || (iVar28 == 5)) && (4 < piVar19[2])) {
              uVar49 = 0x521a8d;
              FUN_004f7490((undefined4 *)(unaff_EBP - 0x12c4));
              uVar47 = *(undefined4 *)(*(int *)(unaff_EBP - 0x12e8) + 4);
              *(undefined4 *)(unaff_EBP - 0x12c4) = 10;
              *(undefined4 *)(unaff_EBP - 0x11a4) = uVar47;
              uVar45 = 0x521ab2;
              FUN_004cde40(&stack0xfffffff8,0);
              uVar9 = *(uint *)(unaff_EBP - 5000);
              uVar47 = 0x521ac2;
              FUN_004cde40(&stack0xfffffff0,uVar9);
              FUN_004cde40(&stack0xffffffe8,uVar30);
              puVar16 = FUN_00406380((void *)(unaff_EBP - 0xae4),uVar47,uVar9,(int)uVar45,
                                     (int)((ulonglong)uVar45 >> 0x20),uVar13,uVar49);
              FUN_00402a40((void *)(unaff_EBP - 0x119c),puVar16);
              FUN_005284a0((void *)(iVar29 + 0x48),(undefined4 *)(unaff_EBP - 0x12c4));
            }
            FUN_00407a30((void *)(unaff_EBP - 0x1398),(int *)(unaff_EBP - 0x1564));
            piVar19 = (int *)FUN_00530550((void *)(unaff_EBP - 0x1454),
                                          (undefined4 *)(unaff_EBP - 0x14b8));
            uVar45 = CONCAT44(piVar19,0x521b25);
            bVar36 = FUN_0042c6f0((void *)(unaff_EBP - 0x1398),piVar19);
          } while (bVar36);
          pvVar17 = *(void **)(unaff_EBP - 0x12e0);
        }
        iVar28 = FUN_0041fff0((int *)(iVar29 + 0x18));
        *(int *)(iVar29 + 0xa0) = iVar28;
        FUN_0050d260(pvVar17,iVar29);
        if ((*(char *)((int)pvVar17 + 0xb4) == '\0') &&
           (bVar36 = FUN_00419f80((int)pvVar17 + 0x94), !bVar36)) {
          FUN_004c8190((void *)(unaff_EBP - 0x182c),3,1);
          iVar28 = *(int *)(unaff_EBP - 0x1364);
          *(undefined1 *)(unaff_EBP - 4) = 0xb;
          pbVar24 = FUN_00412710((basic_ostream<char,std::char_traits<char>_> *)(unaff_EBP - 0x181c)
                                 ,"zone");
          pbVar25 = std::basic_ostream<char,std::char_traits<char>_>::operator<<
                              ((basic_ostream<char,std::char_traits<char>_> *)pbVar24,iVar28);
          pbVar24 = FUN_00412710((basic_ostream<char,std::char_traits<char>_> *)pbVar25,
                                 unaff_retaddr);
          std::basic_ostream<char,std::char_traits<char>_>::operator<<
                    ((basic_ostream<char,std::char_traits<char>_> *)pbVar24,param_5);
          FUN_00422af0((undefined4 *)(unaff_EBP - 0x1574));
          *(undefined1 *)(unaff_EBP - 4) = 0xc;
          puVar16 = FUN_004d8f70((void *)(unaff_EBP - 0x182c),(void *)(unaff_EBP - 0x7c4));
          *(undefined1 *)(unaff_EBP - 4) = 0xd;
          uVar13 = FUN_00413130((void *)((int)pvVar17 + 0xac),puVar16,
                                (undefined4 *)(unaff_EBP - 0x1574));
          *(char *)(unaff_EBP - 0x1309) = (char)uVar13;
          *(undefined1 *)(unaff_EBP - 4) = 0xc;
          FUN_004013a0((undefined4 *)(unaff_EBP - 0x7c4));
          if (*(char *)(unaff_EBP - 0x1309) != '\0') {
            puVar16 = FUN_0041d800((void *)(unaff_EBP - 0x177c),unaff_EBP - 0x1574);
            FUN_0041ee20(puVar16,pvVar17,iVar29);
          }
          FUN_0042f440((undefined4 *)(unaff_EBP - 0x1574));
          *(undefined1 *)(unaff_EBP - 4) = 10;
          FUN_004ce3e0((void *)(unaff_EBP - 0x182c));
        }
        FUN_004d1a70(pvVar17,*(uint *)(unaff_EBP - 0x1358),*(uint *)(unaff_EBP - 0x132c),
                     *(int *)(unaff_EBP - 0x1370),*(uint *)(unaff_EBP - 0x132c) + 0x100,0,iVar29);
        *(void **)(unaff_EBP - 0x12e8) = (void *)(iVar29 + 4);
        FUN_00428070((void *)(iVar29 + 4),(undefined4 *)(unaff_EBP - 0x1324));
        piVar19 = (int *)FUN_00530550((void *)(iVar29 + 4),(undefined4 *)(unaff_EBP - 0x149c));
        bVar36 = FUN_0042c6f0((void *)(unaff_EBP - 0x1324),piVar19);
        if (bVar36) {
          do {
            iVar28 = FUN_0052eb90((int *)(unaff_EBP - 0x1324));
            iVar29 = *(int *)(unaff_EBP - 0x1308);
            iVar8 = 0;
            pCVar26 = (CRefTime *)FUN_004e2320((void *)(iVar28 + 8),2);
            lVar27 = CRefTime::Millisecs(pCVar26);
            pCVar26 = (CRefTime *)FUN_004e2320((void *)(iVar28 + 8),1);
            uVar30 = CRefTime::Millisecs(pCVar26);
            pCVar26 = (CRefTime *)FUN_004e2320((void *)(iVar28 + 8),0);
            uVar9 = CRefTime::Millisecs(pCVar26);
            pvVar17 = *(void **)(unaff_EBP - 0x12e0);
            bVar7 = FUN_004d24a0(pvVar17,uVar9,uVar30,lVar27,iVar29,iVar8);
            *(float *)(iVar28 + 0x28) = (float)CONCAT31(extraout_var_01,bVar7);
            FUN_0052ebf0((void *)(unaff_EBP - 0x1324),(undefined4 *)(unaff_EBP - 0x1494));
            piVar19 = (int *)FUN_00530550(*(void **)(unaff_EBP - 0x12e8),
                                          (undefined4 *)(unaff_EBP - 0x149c));
            bVar36 = FUN_0042c6f0((void *)(unaff_EBP - 0x1324),piVar19);
          } while (bVar36);
          iVar29 = *(int *)(unaff_EBP - 0x1308);
        }
        *(undefined4 *)(unaff_EBP - 0x12d8) = 0;
        iVar28 = FUN_0041cb40((int *)(iVar29 + 0xc));
        if (0 < iVar28) {
          iVar28 = 0;
          do {
            puVar48 = (ulonglong *)(unaff_EBP - 0x1744);
            iVar10 = 1;
            iVar8 = iVar29;
            iVar28 = FUN_0041ba70((void *)(iVar29 + 0xc),iVar28);
            FUN_004e2320((void *)(iVar28 + 8),iVar10);
            pCVar26 = (CRefTime *)FUN_004ce2d0(puVar48);
            uVar30 = CRefTime::Millisecs(pCVar26);
            puVar48 = (ulonglong *)(unaff_EBP - 0x1754);
            iVar10 = 0;
            iVar28 = FUN_0041ba70((void *)(iVar29 + 0xc),*(int *)(unaff_EBP - 0x12d8));
            FUN_004e2320((void *)(iVar28 + 8),iVar10);
            pCVar26 = (CRefTime *)FUN_004ce2d0(puVar48);
            uVar9 = CRefTime::Millisecs(pCVar26);
            iVar28 = FUN_0041c9e0(pvVar17,uVar9,uVar30,iVar8);
            *(int *)(unaff_EBP - 0x12e8) = iVar28;
            if (iVar28 != 0) {
              FUN_00402990(&stack0xfffffff4,*(undefined4 *)(unaff_EBP - 0x135c),
                           *(undefined4 *)(unaff_EBP - 0x1364),*(undefined4 *)(unaff_EBP - 0x12d8));
              iVar28 = FUN_0041ba70((void *)(iVar29 + 0xc),*(int *)(unaff_EBP - 0x12d8));
              puVar16 = (undefined4 *)
                        FUN_004f7350((void *)(unaff_EBP - 0x7fc),iVar28,uVar9,uVar30,iVar8);
              FUN_005283b0(*(void **)(unaff_EBP - 0x12e8),puVar16);
            }
            *(int *)(unaff_EBP - 0x12d8) = *(int *)(unaff_EBP - 0x12d8) + 1;
            iVar8 = FUN_0041cb40((int *)(iVar29 + 0xc));
            iVar28 = *(int *)(unaff_EBP - 0x12d8);
          } while (iVar28 < iVar8);
        }
        *(int *)(*(int *)(unaff_EBP - 0x137c) + 0x10018 + *(int *)(unaff_EBP - 0x13ac) * 4) = iVar29
        ;
        FUN_004f7710((undefined4 *)(unaff_EBP - 0x1454));
        FUN_004f7710((undefined4 *)(unaff_EBP - 0x144c));
        FUN_00423710((int *)(unaff_EBP - 0x13a8));
        FUN_00423710((int *)(unaff_EBP - 0x1378));
        FUN_00423710((int *)(unaff_EBP - 0x13c4));
        ExceptionList = *(void **)(unaff_EBP - 0xc);
        __security_check_cookie(*(uint *)(unaff_EBP - 0x10) ^ unaff_EBP);
        return;
      }
      uVar9 = *(uint *)(unaff_EBP - 0x132c);
    } while( true );
  }
  goto LAB_0051ed60;
code_r0x0051c712:
  iVar29 = *(int *)(unaff_EBP - 0x12f0);
  iVar10 = *(int *)(unaff_EBP - 0x1304);
  *(int *)(unaff_EBP - 0x1350) = *(int *)(unaff_EBP - 0x1304) - iVar29;
  *(int *)(unaff_EBP - 0x12cc) = iVar29 + iVar10;
  iVar8 = iVar28 - iVar8;
  *(int *)(unaff_EBP - 0x12ec) = iVar8;
LAB_0051c740:
  iVar29 = *(int *)(unaff_EBP - 0x1350);
  *(int *)(unaff_EBP - 0x12d8) = iVar29;
  if (iVar29 <= *(int *)(unaff_EBP - 0x12cc)) goto code_r0x0051c758;
  goto LAB_0051c9d7;
code_r0x0051c758:
  iVar8 = *(int *)(unaff_EBP - 0x1328);
  iVar10 = *(int *)(unaff_EBP - 0x12d0);
  *(int *)(unaff_EBP - 0x12f4) = iVar8;
  *(int *)(unaff_EBP - 0x12f4) = *(int *)(unaff_EBP - 0x12f4) + iVar10 * -2;
  unaff_EDI = *(int *)(unaff_EBP - 0x1308);
  iVar33 = *(int *)(unaff_EBP - 0x1304);
  *(int *)(unaff_EBP - 0x1334) = iVar10 * 2 + iVar8;
  unaff_ESI = *(void **)(unaff_EBP - 0x12e0);
  *(int *)(unaff_EBP - 0x1360) = iVar29 - iVar33;
LAB_0051c7a0:
  iVar8 = *(int *)(unaff_EBP - 0x1334);
  *(int *)(unaff_EBP - 0x12f8) = iVar8;
  if (*(int *)(unaff_EBP - 0x12f4) <= iVar8) goto code_r0x0051c7b8;
  goto LAB_0051c9b8;
code_r0x0051c7b8:
  fVar37 = FUN_004d5d30(SUB84((double)iVar28 * 0.05,0),
                        (int)((ulonglong)((double)iVar28 * 0.05) >> 0x20),(double)iVar29 * 0.05);
  *(float *)(unaff_EBP - 0x1348) = (float)fVar37;
  fVar40 = (float)*(int *)(unaff_EBP - 0x12ec) / (float)*(int *)(unaff_EBP - 0x12dc);
  iVar28 = *(int *)(unaff_EBP - 0x12d0);
  fVar43 = (float)*(int *)(unaff_EBP - 0x1360) / (float)*(int *)(unaff_EBP - 0x12f0);
  iVar8 = *(int *)(unaff_EBP - 0x12f8);
  fVar39 = *(float *)(unaff_EBP - 0x1348) * 0.8;
  iVar29 = *(int *)(unaff_EBP - 0x12f4);
  *(float *)(unaff_EBP - 0x159c) = fVar40;
  *(float *)(unaff_EBP - 0x1598) = fVar43;
  fVar38 = (float)iVar28;
  fVar40 = fVar43 * fVar43 + fVar40 * fVar40;
  iVar28 = iVar8 - *(int *)(unaff_EBP - 0x1328);
  *(float *)(unaff_EBP - 0x1368) = fVar39;
  *(float *)(unaff_EBP - 0x12d4) = fVar38;
  *(float *)(unaff_EBP - 0x1338) = fVar40;
  *(int *)(unaff_EBP - 0x1320) = iVar28;
LAB_0051c8a0:
  fVar43 = (float)iVar28 / fVar38 + fVar39;
  if (fVar43 * fVar43 + fVar40 <= 1.0) goto code_r0x0051c8c0;
  goto LAB_0051c996;
code_r0x0051c8c0:
  puVar11 = FUN_00405fd0(unaff_ESI,*(uint *)(unaff_EBP - 0x1314),*(uint *)(unaff_EBP - 0x12d8),iVar8
                         ,unaff_EDI);
  if ((~((byte)puVar11[3] >> 7) & 1) != 0) goto code_r0x0051c8e5;
  goto LAB_0051c964;
code_r0x0051c8e5:
  in_EAX = FUN_0052d030(unaff_ESI,(float *)(unaff_EBP - 0x740),*(float *)(unaff_EBP - 0x1314),
                        *(uint *)(unaff_EBP - 0x12d8),*(int *)(unaff_EBP - 0x12f8),unaff_EDI);
  param_2 = 0;
  goto LAB_0051c910;
}


/* FUN_0051ed6a @ 0051ed6a  kind=gamemisc  attributed-by=none  size=12564 */

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


/* FUN_00521ed0 @ 00521ed0  kind=gamemisc  attributed-by=none  size=952 */

int __cdecl
FUN_00521ed0(int param_1,int param_2,int param_3,int param_4,uint param_5,int *param_6,int *param_7)

{
  char cVar1;
  int iVar2;
  uint3 uVar3;
  undefined2 *puVar4;
  int iVar5;
  undefined1 *puVar6;
  int iVar7;
  uint uVar8;
  undefined2 local_8;
  undefined1 local_6;
  
  *param_6 = param_2;
  param_6[1] = param_3;
  param_6[2] = param_4;
  *param_7 = param_2;
  param_7[1] = param_3;
  param_7[2] = param_4;
  if (((((param_2 < 0) || (param_3 < 0)) || (param_4 < 0)) ||
      ((*(int *)(param_1 + 0x44) <= param_2 || (*(int *)(param_1 + 0x48) <= param_3)))) ||
     (*(int *)(param_1 + 0x4c) <= param_4)) {
    puVar4 = (undefined2 *)&DAT_00583dfc;
  }
  else {
    puVar4 = (undefined2 *)
             (((*(int *)(param_1 + 0x48) * param_4 + param_3) * *(int *)(param_1 + 0x44) + param_2)
              * 3 + *(int *)(param_1 + 0x30));
  }
  local_8 = *puVar4;
  iVar5 = param_2 + -1;
  local_6 = *(undefined1 *)(puVar4 + 1);
  if (((iVar5 < 0) || (param_3 < 0)) ||
     ((param_4 < 0 ||
      (((*(int *)(param_1 + 0x44) <= iVar5 || (*(int *)(param_1 + 0x48) <= param_3)) ||
       (*(int *)(param_1 + 0x4c) <= param_4)))))) {
    puVar6 = &DAT_00583dfc;
  }
  else {
    puVar6 = (undefined1 *)
             (((*(int *)(param_1 + 0x48) * param_4 + param_3) * *(int *)(param_1 + 0x44) + iVar5) *
              3 + *(int *)(param_1 + 0x30));
  }
  puVar4 = &local_8;
  iVar5 = 0;
  iVar7 = (int)puVar6 - (int)puVar4;
  while( true ) {
    cVar1 = ((char *)((int)&local_8 + iVar5))[iVar7];
    uVar3 = (uint3)((uint)puVar4 >> 8);
    puVar4 = (undefined2 *)CONCAT31(uVar3,cVar1);
    if (cVar1 != *(char *)((int)&local_8 + iVar5)) break;
    iVar5 = iVar5 + 1;
    if (2 < iVar5) {
      return (uint)uVar3 << 8;
    }
  }
  iVar5 = param_3 + -1;
  if (((param_2 < 0) || (iVar5 < 0)) ||
     (((param_4 < 0 ||
       ((*(int *)(param_1 + 0x44) <= param_2 || (*(int *)(param_1 + 0x48) <= iVar5)))) ||
      (*(int *)(param_1 + 0x4c) <= param_4)))) {
    puVar6 = &DAT_00583dfc;
  }
  else {
    puVar6 = (undefined1 *)
             (((*(int *)(param_1 + 0x48) * param_4 + iVar5) * *(int *)(param_1 + 0x44) + param_2) *
              3 + *(int *)(param_1 + 0x30));
  }
  puVar4 = &local_8;
  iVar5 = 0;
  iVar7 = (int)puVar6 - (int)puVar4;
  while( true ) {
    cVar1 = ((char *)((int)&local_8 + iVar5))[iVar7];
    uVar3 = (uint3)((uint)puVar4 >> 8);
    puVar4 = (undefined2 *)CONCAT31(uVar3,cVar1);
    if (cVar1 != *(char *)((int)&local_8 + iVar5)) break;
    iVar5 = iVar5 + 1;
    if (2 < iVar5) {
      return (uint)uVar3 << 8;
    }
  }
  iVar5 = param_4 + -1;
  if ((((param_2 < 0) || (param_3 < 0)) || (iVar5 < 0)) ||
     (((*(int *)(param_1 + 0x44) <= param_2 || (*(int *)(param_1 + 0x48) <= param_3)) ||
      (*(int *)(param_1 + 0x4c) <= iVar5)))) {
    puVar6 = &DAT_00583dfc;
  }
  else {
    puVar6 = (undefined1 *)
             (((iVar5 * *(int *)(param_1 + 0x48) + param_3) * *(int *)(param_1 + 0x44) + param_2) *
              3 + *(int *)(param_1 + 0x30));
  }
  puVar4 = &local_8;
  iVar5 = 0;
  iVar7 = (int)puVar6 - (int)puVar4;
  while( true ) {
    cVar1 = ((char *)((int)&local_8 + iVar5))[iVar7];
    uVar3 = (uint3)((uint)puVar4 >> 8);
    puVar4 = (undefined2 *)CONCAT31(uVar3,cVar1);
    if (cVar1 != *(char *)((int)&local_8 + iVar5)) break;
    iVar5 = iVar5 + 1;
    if (2 < iVar5) {
      return (uint)uVar3 << 8;
    }
  }
  iVar5 = *(int *)(param_1 + 0x44);
  iVar7 = param_2;
  if (param_2 < iVar5) {
    do {
      if (((iVar7 < 0) || (param_3 < 0)) ||
         ((param_4 < 0 ||
          ((*(int *)(param_1 + 0x48) <= param_3 || (*(int *)(param_1 + 0x4c) <= param_4)))))) {
        puVar6 = &DAT_00583dfc;
      }
      else {
        puVar6 = (undefined1 *)
                 (((*(int *)(param_1 + 0x48) * param_4 + param_3) * iVar5 + iVar7) * 3 +
                 *(int *)(param_1 + 0x30));
      }
      iVar5 = 0;
      do {
        if (((char *)((int)&local_8 + iVar5))[(int)puVar6 - (int)&local_8] !=
            *(char *)((int)&local_8 + iVar5)) goto LAB_005220d5;
        iVar5 = iVar5 + 1;
      } while (iVar5 < 3);
      *param_7 = iVar7;
      iVar5 = *(int *)(param_1 + 0x44);
      iVar7 = iVar7 + 1;
    } while (iVar7 < iVar5);
  }
LAB_005220d5:
  iVar5 = *(int *)(param_1 + 0x48);
  iVar7 = param_3;
  if (param_3 < iVar5) {
    do {
      if ((((param_2 < 0) || (iVar7 < 0)) || (param_4 < 0)) ||
         ((*(int *)(param_1 + 0x44) <= param_2 || (*(int *)(param_1 + 0x4c) <= param_4)))) {
        puVar6 = &DAT_00583dfc;
      }
      else {
        puVar6 = (undefined1 *)
                 (((iVar5 * param_4 + iVar7) * *(int *)(param_1 + 0x44) + param_2) * 3 +
                 *(int *)(param_1 + 0x30));
      }
      iVar5 = 0;
      do {
        if (((char *)((int)&local_8 + iVar5))[(int)puVar6 - (int)&local_8] !=
            *(char *)((int)&local_8 + iVar5)) goto LAB_00522146;
        iVar5 = iVar5 + 1;
      } while (iVar5 < 3);
      param_7[1] = iVar7;
      iVar5 = *(int *)(param_1 + 0x48);
      iVar7 = iVar7 + 1;
    } while (iVar7 < iVar5);
  }
LAB_00522146:
  if (param_4 < *(int *)(param_1 + 0x4c)) {
    do {
      if (((param_2 < 0) || (param_3 < 0)) ||
         ((param_4 < 0 ||
          ((*(int *)(param_1 + 0x44) <= param_2 || (*(int *)(param_1 + 0x48) <= param_3)))))) {
        puVar6 = &DAT_00583dfc;
      }
      else {
        puVar6 = (undefined1 *)
                 (((*(int *)(param_1 + 0x48) * param_4 + param_3) * *(int *)(param_1 + 0x44) +
                  param_2) * 3 + *(int *)(param_1 + 0x30));
      }
      iVar5 = 0;
      do {
        if (((char *)((int)&local_8 + iVar5))[(int)puVar6 - (int)&local_8] !=
            *(char *)((int)&local_8 + iVar5)) goto LAB_005221b1;
        iVar5 = iVar5 + 1;
      } while (iVar5 < 3);
      param_7[2] = param_4;
      param_4 = param_4 + 1;
    } while (param_4 < *(int *)(param_1 + 0x4c));
  }
LAB_005221b1:
  uVar8 = param_5 & 0x80000003;
  if ((int)uVar8 < 0) {
    uVar8 = (uVar8 - 1 | 0xfffffffc) + 1;
  }
  if (uVar8 == 1) {
    iVar7 = *(int *)(param_1 + 0x44);
    iVar2 = *param_6;
    iVar5 = param_6[2];
    *param_6 = param_6[1];
    param_6[1] = (iVar7 - iVar2) + -1;
  }
  else {
    if (uVar8 != 2) {
      if (uVar8 == 3) {
        iVar5 = *param_6;
        *param_6 = (*(int *)(param_1 + 0x48) - param_6[1]) + -1;
        param_6[1] = iVar5;
        param_6[2] = param_6[2];
      }
      goto LAB_00522210;
    }
    iVar7 = *(int *)(param_1 + 0x48);
    iVar5 = param_6[2];
    *param_6 = (*(int *)(param_1 + 0x44) - *param_6) + -1;
    param_6[1] = (iVar7 - param_6[1]) + -1;
  }
  param_6[2] = iVar5;
LAB_00522210:
  if (uVar8 == 1) {
    iVar5 = *(int *)(param_1 + 0x44);
    iVar7 = *param_7;
    *param_7 = param_7[1];
    param_7[1] = (iVar5 - iVar7) + -1;
  }
  else if (uVar8 == 2) {
    iVar5 = *(int *)(param_1 + 0x48);
    *param_7 = (*(int *)(param_1 + 0x44) - *param_7) + -1;
    param_7[1] = (iVar5 - param_7[1]) + -1;
  }
  else if (uVar8 == 3) {
    iVar5 = *param_7;
    *param_7 = (*(int *)(param_1 + 0x48) - param_7[1]) + -1;
    param_7[1] = iVar5;
  }
  iVar5 = *param_6;
  if (*param_7 < iVar5) {
    *param_6 = *param_7;
    *param_7 = iVar5;
  }
  iVar5 = param_6[1];
  if (param_7[1] < iVar5) {
    param_6[1] = param_7[1];
    param_7[1] = iVar5;
  }
  iVar5 = param_6[2];
  iVar7 = param_7[2];
  if (iVar7 < iVar5) {
    param_6[2] = iVar7;
    param_7[2] = iVar5;
  }
  *param_7 = *param_7 + 1;
  param_7[1] = param_7[1] + 1;
  param_7[2] = param_7[2] + 1;
  return CONCAT31((int3)((uint)iVar7 >> 8),1);
}


/* FUN_00522580 @ 00522580  kind=gamemisc  attributed-by=none  size=659 */

void __thiscall FUN_00522580(void *this,uint param_1,undefined4 param_2,int param_3)

{
  undefined4 *puVar1;
  int iVar2;
  SequentialBehavior *pSVar3;
  int iVar4;
  int iVar5;
  float10 fVar6;
  CombatBehavior *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00555f21;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_14 = operator_new(0xc);
  local_8 = 0;
  if (local_14 == (CombatBehavior *)0x0) {
    pSVar3 = (SequentialBehavior *)0x0;
  }
  else {
    pSVar3 = cube::SequentialBehavior::SequentialBehavior((SequentialBehavior *)local_14);
  }
  local_8 = 0xffffffff;
  local_14 = operator_new(0x14);
  local_8 = 1;
  if (local_14 == (CombatBehavior *)0x0) {
    local_14 = (CombatBehavior *)0x0;
  }
  else {
    local_14 = cube::CombatBehavior::CombatBehavior(local_14,0x41a00000);
  }
  puVar1 = (pSVar3->SequentialBehavior_data).offset_0x0;
  local_8 = 0xffffffff;
  iVar4 = FUN_0052dfb0(puVar1,(undefined4 *)puVar1[1],&local_14);
  iVar2 = (pSVar3->SequentialBehavior_data).offset_0x4;
  if (iVar2 == 0x15555554) {
                    /* WARNING: Subroutine does not return */
    std::_Xlength_error("list<T> too long");
  }
  (pSVar3->SequentialBehavior_data).offset_0x4 = iVar2 + 1;
  puVar1[1] = iVar4;
  **(int **)(iVar4 + 4) = iVar4;
  local_14 = operator_new(0x10);
  local_8 = 2;
  if (local_14 == (CombatBehavior *)0x0) {
    local_14 = (CombatBehavior *)0x0;
  }
  else {
    local_14 = (CombatBehavior *)
               cube::CompanionBehavior::CompanionBehavior((CompanionBehavior *)local_14);
  }
  (local_14->CombatBehavior_data).offset_0x4 = param_1;
  (local_14->CombatBehavior_data).offset_0x8 = param_2;
  puVar1 = (pSVar3->SequentialBehavior_data).offset_0x0;
  local_8 = 0xffffffff;
  iVar5 = FUN_0052dfb0(puVar1,(undefined4 *)puVar1[1],&local_14);
  iVar4 = param_3;
  iVar2 = (pSVar3->SequentialBehavior_data).offset_0x4;
  if (iVar2 == 0x15555554) {
                    /* WARNING: Subroutine does not return */
    std::_Xlength_error("list<T> too long");
  }
  (pSVar3->SequentialBehavior_data).offset_0x4 = iVar2 + 1;
  puVar1[1] = iVar5;
  **(int **)(iVar5 + 4) = iVar5;
  if (*(void **)(param_3 + 0x13e4) != (void *)0x0) {
    operator_delete(*(void **)(param_3 + 0x13e4));
  }
  *(undefined8 *)(iVar4 + 0x178) = 0x3f80000042c80000;
  *(undefined8 *)(iVar4 + 0x180) = 0x3f8000003f800000;
  *(undefined4 *)(iVar4 + 0x188) = 0x3f800000;
  iVar2 = *(int *)(iVar4 + 100);
  *(SequentialBehavior **)(iVar4 + 0x13e4) = pSVar3;
  if (iVar2 == 0x19) {
    *(undefined4 *)(iVar4 + 0x178) = 0x43960000;
    *(undefined4 *)(iVar4 + 0x184) = 0x40a00000;
    *(undefined4 *)(iVar4 + 0x188) = 0x40a00000;
    *(undefined4 *)(iVar4 + 0x180) = 0x3dcccccd;
  }
  else if (iVar2 == 0x56) {
    *(undefined2 *)(iVar4 + 0x140) = 0x103;
  }
  else if (iVar2 == 0x68) {
    *(undefined2 *)(iVar4 + 0x140) = 0x102;
  }
  FUN_00530600((void *)((int)this + 4),&param_3,&param_1);
  if ((param_3 != *(int *)((int)this + 4)) && (iVar2 = *(int *)(param_3 + 0x18), iVar2 != 0)) {
    if (*(int *)(iVar2 + 400) < *(int *)(iVar4 + 400)) {
      *(int *)(iVar4 + 400) = *(int *)(iVar2 + 400);
    }
    *(uint *)(iVar4 + 0x198) = param_1;
    *(undefined4 *)(iVar4 + 0x19c) = param_2;
    fVar6 = FUN_00407c80(*(int *)(iVar2 + 0x1138));
    *(float *)(iVar4 + 0x178) = ((float)fVar6 * 0.5 + 1.0) * *(float *)(iVar4 + 0x178);
    *(undefined4 *)(iVar2 + 0x11c8) = *(undefined4 *)(iVar4 + 8);
    *(undefined4 *)(iVar2 + 0x11cc) = *(undefined4 *)(iVar4 + 0xc);
  }
  ExceptionList = local_10;
  return;
}


/* FUN_00522820 @ 00522820  kind=gamemisc  attributed-by=none  size=20 */

undefined1 __fastcall FUN_00522820(char *param_1)

{
  char cVar1;
  
  cVar1 = *param_1;
  if (((cVar1 != '\0') && (cVar1 != '\x02')) && (cVar1 != '\x01')) {
    return 0;
  }
  return 1;
}


/* FUN_00524500 @ 00524500  kind=gamemisc  attributed-by=none  size=58 */

void __fastcall FUN_00524500(int param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  
  if (*(char *)(param_1 + 0xb4) == '\0') {
    piVar1 = (int *)(param_1 + 0xbc);
    iVar3 = 0x400;
    do {
      iVar2 = 0x400;
      do {
        if (*piVar1 != 0) {
          *(undefined1 *)(*piVar1 + 0x15a18) = 0;
        }
        piVar1 = piVar1 + 1;
        iVar2 = iVar2 + -1;
      } while (iVar2 != 0);
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  return;
}


/* FUN_005283b0 @ 005283b0  kind=gamemisc  attributed-by=none  size=67 */

void __thiscall FUN_005283b0(void *this,undefined4 *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  
  puVar1 = *(undefined4 **)this;
  iVar2 = FUN_0052df40(puVar1,(undefined4 *)puVar1[1],param_1);
  if (*(int *)((int)this + 4) == 0xaaaaaa9) {
                    /* WARNING: Subroutine does not return */
    std::_Xlength_error("list<T> too long");
  }
  *(int *)((int)this + 4) = *(int *)((int)this + 4) + 1;
  puVar1[1] = iVar2;
  **(int **)(iVar2 + 4) = iVar2;
  return;
}


/* FUN_00528400 @ 00528400  kind=gamemisc  attributed-by=none  size=67 */

void __thiscall FUN_00528400(void *this,undefined4 *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  
  puVar1 = *(undefined4 **)this;
  iVar2 = FUN_00420100(puVar1,(undefined4 *)puVar1[1],param_1);
  if (*(int *)((int)this + 4) == 0x9249248) {
                    /* WARNING: Subroutine does not return */
    std::_Xlength_error("list<T> too long");
  }
  *(int *)((int)this + 4) = *(int *)((int)this + 4) + 1;
  puVar1[1] = iVar2;
  **(int **)(iVar2 + 4) = iVar2;
  return;
}


/* FUN_005284a0 @ 005284a0  kind=gamemisc  attributed-by=none  size=130 */

void __thiscall FUN_005284a0(void *this,undefined4 *param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  
  puVar1 = *(undefined4 **)((int)this + 4);
  if ((param_1 < puVar1) && (puVar2 = *(undefined4 **)this, puVar2 <= param_1)) {
    if (puVar1 == *(undefined4 **)((int)this + 8)) {
      FUN_004f80d0(this,1);
    }
    if (*(void **)((int)this + 4) != (void *)0x0) {
      FUN_004f7400(*(void **)((int)this + 4),
                   (undefined4 *)((((int)param_1 - (int)puVar2) / 0x140) * 0x140 + *(int *)this));
      *(int *)((int)this + 4) = *(int *)((int)this + 4) + 0x140;
      return;
    }
  }
  else {
    if (puVar1 == *(undefined4 **)((int)this + 8)) {
      FUN_004f80d0(this,1);
    }
    if (*(void **)((int)this + 4) != (void *)0x0) {
      FUN_004f7400(*(void **)((int)this + 4),param_1);
    }
  }
  *(int *)((int)this + 4) = *(int *)((int)this + 4) + 0x140;
  return;
}


/* FUN_00528730 @ 00528730  kind=gamemisc  attributed-by=none  size=115 */

void __thiscall FUN_00528730(void *this,undefined4 *param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  
  puVar1 = *(undefined4 **)((int)this + 4);
  if ((param_1 < puVar1) && (puVar2 = *(undefined4 **)this, puVar2 <= param_1)) {
    if (puVar1 == *(undefined4 **)((int)this + 8)) {
      FUN_004e27b0(this,1);
    }
    puVar3 = *(undefined4 **)((int)this + 4);
    puVar1 = (undefined4 *)(*(int *)this + ((int)param_1 - (int)puVar2 >> 3) * 8);
    if (puVar3 != (undefined4 *)0x0) {
      *puVar3 = *puVar1;
      puVar3[1] = puVar1[1];
      *(int *)((int)this + 4) = *(int *)((int)this + 4) + 8;
      return;
    }
  }
  else {
    if (puVar1 == *(undefined4 **)((int)this + 8)) {
      FUN_004e27b0(this,1);
    }
    puVar1 = *(undefined4 **)((int)this + 4);
    if (puVar1 != (undefined4 *)0x0) {
      *puVar1 = *param_1;
      puVar1[1] = param_1[1];
    }
  }
  *(int *)((int)this + 4) = *(int *)((int)this + 4) + 8;
  return;
}


/* FUN_005290d0 @ 005290d0  kind=gamemisc  attributed-by=none  size=5775 */

/* WARNING: Type propagation algorithm not settling */

void * __thiscall
FUN_005290d0(void *this,float param_1,float param_2,int param_3,undefined4 param_4)

{
  uint uVar1;
  void *pvVar2;
  int iVar3;
  void **ppvVar4;
  float10 fVar5;
  float10 fVar6;
  void **local_90;
  void **local_8c;
  void **local_88;
  float local_84;
  float local_80;
  void *local_7c;
  void *local_78;
  void *local_74;
  void *local_70;
  void *local_6c;
  void *local_68;
  void *local_64;
  void *local_60;
  void *local_5c;
  void *local_58;
  void *local_54;
  void *local_50;
  void *local_4c;
  void *local_48;
  void *local_44 [2];
  void *local_3c;
  void *local_38;
  void *local_34;
  void *local_30;
  void *local_2c [2];
  void *local_24;
  void *local_20;
  void *local_1c;
  void *local_18;
  void *local_14 [4];
  
  local_14[3] = (void *)0xffffffff;
  local_14[2] = &LAB_0055611b;
  local_14[1] = ExceptionList;
  ExceptionList = local_14 + 1;
  fVar5 = (float10)FUN_004f8b40(this,(int)param_1,(int)param_2);
  local_80 = (float)fVar5;
  fVar5 = (float10)FUN_004f8570(this,param_1,(uint)param_2);
  local_84 = (float)fVar5;
  fVar5 = (float10)FUN_00522e20(this,(int)param_1,(int)param_2);
  fVar6 = (float10)FUN_00523d80((uint)param_1,param_2,0.0);
  local_90 = (void **)0x0;
  local_8c = (void **)0x0;
  local_88 = (void **)0x0;
  local_14[3] = (void *)0x0;
  if (param_3 < 0) {
    param_4 = 0x91;
    FUN_004f2be0(&local_90,&param_4);
    param_4 = 0x92;
    FUN_004f2be0(&local_90,&param_4);
    param_4 = 0x93;
    FUN_004f2be0(&local_90,&param_4);
    param_4 = 0x96;
    FUN_004f2be0(&local_90,&param_4);
    param_4 = 0x98;
    FUN_004f2be0(&local_90,&param_4);
    param_4 = 0x99;
    FUN_004f2be0(&local_90,&param_4);
    param_4 = 0x9b;
    FUN_004f2be0(&local_90,&param_4);
    param_4 = 0x9a;
    FUN_004f2be0(&local_90,&param_4);
  }
  else if ((char)param_4 == '\0') {
    if ((float)fVar5 <= 0.1) {
      FUN_00426eb0(&local_90,1);
      if (local_8c != (void **)0x0) {
        *local_8c = (void *)0x15;
      }
      local_8c = local_8c + 1;
      local_2c[0] = (void *)0x2e;
      if ((local_2c < local_8c) && (local_90 <= local_2c)) {
        iVar3 = (int)local_2c - (int)local_90;
        if (local_8c == local_88) {
          FUN_00426eb0(&local_90,1);
        }
        if (local_8c != (void **)0x0) {
          *local_8c = local_90[iVar3 >> 2];
        }
      }
      else {
        if (local_8c == local_88) {
          FUN_00426eb0(&local_90,1);
        }
        if (local_8c != (void **)0x0) {
          *local_8c = (void *)0x2e;
        }
      }
      local_8c = local_8c + 1;
      if (0.3 < (float)fVar6) {
        local_30 = (void *)0x2f;
        if ((&local_30 < local_8c) && (local_90 <= &local_30)) {
          iVar3 = (int)&local_30 - (int)local_90;
          if (local_8c == local_88) {
            FUN_00426eb0(&local_90,1);
          }
          if (local_8c != (void **)0x0) {
            *local_8c = local_90[iVar3 >> 2];
          }
        }
        else {
          if (local_8c == local_88) {
            FUN_00426eb0(&local_90,1);
          }
          if (local_8c != (void **)0x0) {
            *local_8c = (void *)0x2f;
          }
        }
        local_8c = local_8c + 1;
      }
      if (3 < param_3) {
        if ((local_80 < 0.2) || (0.8 <= local_80)) {
          if ((local_80 < 0.8) || (0.2 <= local_84)) {
            if ((local_80 < 0.6) || (local_84 < 0.6)) {
              if (0.2 <= local_80) goto LAB_0052a6f4;
              param_4 = 0x1c;
              FUN_004f2be0(&local_90,&param_4);
              param_4 = 0x38;
              FUN_004f2be0(&local_90,&param_4);
              param_4 = 0x41;
              FUN_004f2be0(&local_90,&param_4);
              param_4 = 0x5a;
              FUN_004f2be0(&local_90,&param_4);
              param_4 = 0x5d;
              FUN_004f2be0(&local_90,&param_4);
              param_4 = 0x15;
              FUN_004f2be0(&local_90,&param_4);
              param_4 = 0x31;
              FUN_004f2be0(&local_90,&param_4);
              param_4 = 0x16;
              FUN_004f2be0(&local_90,&param_4);
              param_4 = 0x17;
              FUN_004f2be0(&local_90,&param_4);
              param_4 = 0x23;
            }
            else {
              param_4 = 0x36;
              FUN_004f2be0(&local_90,&param_4);
              param_4 = 0x59;
              FUN_004f2be0(&local_90,&param_4);
              param_4 = 0x4b;
              FUN_004f2be0(&local_90,&param_4);
              param_4 = 0x4a;
              FUN_004f2be0(&local_90,&param_4);
              param_4 = 0x47;
              FUN_004f2be0(&local_90,&param_4);
              param_4 = 0x40;
              FUN_004f2be0(&local_90,&param_4);
              param_4 = 0x44;
              FUN_004f2be0(&local_90,&param_4);
              param_4 = 0x3c;
              FUN_004f2be0(&local_90,&param_4);
              param_4 = 0x3a;
              FUN_004f2be0(&local_90,&param_4);
              param_4 = 0x43;
              FUN_004f2be0(&local_90,&param_4);
              param_4 = 0x53;
              FUN_004f2be0(&local_90,&param_4);
              param_4 = 0x54;
              FUN_004f2be0(&local_90,&param_4);
              param_4 = 0x19;
              FUN_004f2be0(&local_90,&param_4);
              param_4 = 0x66;
              FUN_004f2be0(&local_90,&param_4);
              param_4 = 0x68;
              FUN_004f2be0(&local_90,&param_4);
              param_4 = 0x69;
              FUN_004f2be0(&local_90,&param_4);
              param_4 = 0x58;
              FUN_004f2be0(&local_90,&param_4);
              param_4 = 0x3e;
              FUN_004f2be0(&local_90,&param_4);
              param_4 = 0x24;
              FUN_004f2be0(&local_90,&param_4);
              param_4 = 0x32;
              FUN_004f2be0(&local_90,&param_4);
              param_4 = 0x16;
              FUN_004f2be0(&local_90,&param_4);
              param_4 = 0x17;
            }
          }
          else {
            param_4 = 0x36;
            FUN_004f2be0(&local_90,&param_4);
            param_4 = 0x3d;
            FUN_004f2be0(&local_90,&param_4);
            param_4 = 0x48;
            FUN_004f2be0(&local_90,&param_4);
            param_4 = 0x2a;
            FUN_004f2be0(&local_90,&param_4);
            param_4 = 0x49;
            FUN_004f2be0(&local_90,&param_4);
            param_4 = 0x42;
            FUN_004f2be0(&local_90,&param_4);
            param_4 = 0x53;
            FUN_004f2be0(&local_90,&param_4);
            param_4 = 0x54;
            FUN_004f2be0(&local_90,&param_4);
            param_4 = 0x66;
            FUN_004f2be0(&local_90,&param_4);
            param_4 = 0x67;
            FUN_004f2be0(&local_90,&param_4);
            param_4 = 0x58;
            FUN_004f2be0(&local_90,&param_4);
            param_4 = 0x3e;
            FUN_004f2be0(&local_90,&param_4);
            param_4 = 0x24;
            FUN_004f2be0(&local_90,&param_4);
            param_4 = 99;
          }
        }
        else {
          local_44[0] = (void *)0x36;
          if ((local_44 < local_8c) && (local_90 <= local_44)) {
            iVar3 = (int)local_44 - (int)local_90;
            if (local_8c == local_88) {
              FUN_00426eb0(&local_90,1);
            }
            if (local_8c != (void **)0x0) {
              *local_8c = local_90[iVar3 >> 2];
            }
          }
          else {
            if (local_8c == local_88) {
              FUN_00426eb0(&local_90,1);
            }
            if (local_8c != (void **)0x0) {
              *local_8c = (void *)0x36;
            }
          }
          local_8c = local_8c + 1;
          local_48 = (void *)0x4a;
          if ((&local_48 < local_8c) && (local_90 <= &local_48)) {
            iVar3 = (int)&local_48 - (int)local_90;
            if (local_8c == local_88) {
              FUN_00426eb0(&local_90,1);
            }
            if (local_8c != (void **)0x0) {
              *local_8c = local_90[iVar3 >> 2];
            }
          }
          else {
            if (local_8c == local_88) {
              FUN_00426eb0(&local_90,1);
            }
            if (local_8c != (void **)0x0) {
              *local_8c = (void *)0x4a;
            }
          }
          local_8c = local_8c + 1;
          local_4c = (void *)0x1c;
          if ((&local_4c < local_8c) && (local_90 <= &local_4c)) {
            iVar3 = (int)&local_4c - (int)local_90;
            if (local_8c == local_88) {
              FUN_00426eb0(&local_90,1);
            }
            if (local_8c != (void **)0x0) {
              *local_8c = local_90[iVar3 >> 2];
            }
          }
          else {
            if (local_8c == local_88) {
              FUN_00426eb0(&local_90,1);
            }
            if (local_8c != (void **)0x0) {
              *local_8c = (void *)0x1c;
            }
          }
          local_8c = local_8c + 1;
          local_50 = (void *)0x38;
          if ((&local_50 < local_8c) && (local_90 <= &local_50)) {
            iVar3 = (int)&local_50 - (int)local_90;
            if (local_8c == local_88) {
              FUN_00426eb0(&local_90,1);
            }
            if (local_8c != (void **)0x0) {
              *local_8c = local_90[iVar3 >> 2];
            }
          }
          else {
            if (local_8c == local_88) {
              FUN_00426eb0(&local_90,1);
            }
            if (local_8c != (void **)0x0) {
              *local_8c = (void *)0x38;
            }
          }
          local_8c = local_8c + 1;
          local_54 = (void *)0x19;
          if ((&local_54 < local_8c) && (local_90 <= &local_54)) {
            iVar3 = (int)&local_54 - (int)local_90;
            if (local_8c == local_88) {
              FUN_00426eb0(&local_90,1);
            }
            if (local_8c != (void **)0x0) {
              *local_8c = local_90[iVar3 >> 2];
            }
          }
          else {
            if (local_8c == local_88) {
              FUN_00426eb0(&local_90,1);
            }
            if (local_8c != (void **)0x0) {
              *local_8c = (void *)0x19;
            }
          }
          local_8c = local_8c + 1;
          local_58 = (void *)0x35;
          if ((&local_58 < local_8c) && (local_90 <= &local_58)) {
            iVar3 = (int)&local_58 - (int)local_90;
            if (local_8c == local_88) {
              FUN_00426eb0(&local_90,1);
            }
            if (local_8c != (void **)0x0) {
              *local_8c = local_90[iVar3 >> 2];
            }
          }
          else {
            if (local_8c == local_88) {
              FUN_00426eb0(&local_90,1);
            }
            if (local_8c != (void **)0x0) {
              *local_8c = (void *)0x35;
            }
          }
          local_8c = local_8c + 1;
          local_5c = (void *)0x37;
          if ((&local_5c < local_8c) && (local_90 <= &local_5c)) {
            iVar3 = (int)&local_5c - (int)local_90;
            if (local_8c == local_88) {
              FUN_00426eb0(&local_90,1);
            }
            if (local_8c != (void **)0x0) {
              *local_8c = local_90[iVar3 >> 2];
            }
          }
          else {
            if (local_8c == local_88) {
              FUN_00426eb0(&local_90,1);
            }
            if (local_8c != (void **)0x0) {
              *local_8c = (void *)0x37;
            }
          }
          local_8c = local_8c + 1;
          local_60 = (void *)0x3c;
          if ((&local_60 < local_8c) && (local_90 <= &local_60)) {
            iVar3 = (int)&local_60 - (int)local_90;
            if (local_8c == local_88) {
              FUN_00426eb0(&local_90,1);
            }
            if (local_8c != (void **)0x0) {
              *local_8c = local_90[iVar3 >> 2];
            }
          }
          else {
            if (local_8c == local_88) {
              FUN_00426eb0(&local_90,1);
            }
            if (local_8c != (void **)0x0) {
              *local_8c = (void *)0x3c;
            }
          }
          local_8c = local_8c + 1;
          local_64 = (void *)0x3f;
          if ((&local_64 < local_8c) && (local_90 <= &local_64)) {
            iVar3 = (int)&local_64 - (int)local_90;
            if (local_8c == local_88) {
              FUN_00426eb0(&local_90,1);
            }
            if (local_8c != (void **)0x0) {
              *local_8c = local_90[iVar3 >> 2];
            }
          }
          else {
            if (local_8c == local_88) {
              FUN_00426eb0(&local_90,1);
            }
            if (local_8c != (void **)0x0) {
              *local_8c = (void *)0x3f;
            }
          }
          local_8c = local_8c + 1;
          local_68 = (void *)0x43;
          if ((&local_68 < local_8c) && (local_90 <= &local_68)) {
            iVar3 = (int)&local_68 - (int)local_90;
            if (local_8c == local_88) {
              FUN_00426eb0(&local_90,1);
            }
            if (local_8c != (void **)0x0) {
              *local_8c = local_90[iVar3 >> 2];
            }
          }
          else {
            if (local_8c == local_88) {
              FUN_00426eb0(&local_90,1);
            }
            if (local_8c != (void **)0x0) {
              *local_8c = (void *)0x43;
            }
          }
          local_8c = local_8c + 1;
          local_6c = (void *)0x45;
          if ((&local_6c < local_8c) && (local_90 <= &local_6c)) {
            iVar3 = (int)&local_6c - (int)local_90;
            if (local_8c == local_88) {
              FUN_00426eb0(&local_90,1);
            }
            if (local_8c != (void **)0x0) {
              *local_8c = local_90[iVar3 >> 2];
            }
          }
          else {
            if (local_8c == local_88) {
              FUN_00426eb0(&local_90,1);
            }
            if (local_8c != (void **)0x0) {
              *local_8c = (void *)0x45;
            }
          }
          local_8c = local_8c + 1;
          local_70 = (void *)0x46;
          if ((&local_70 < local_8c) && (local_90 <= &local_70)) {
            iVar3 = (int)&local_70 - (int)local_90;
            if (local_8c == local_88) {
              FUN_00426eb0(&local_90,1);
            }
            if (local_8c != (void **)0x0) {
              *local_8c = local_90[iVar3 >> 2];
            }
          }
          else {
            if (local_8c == local_88) {
              FUN_00426eb0(&local_90,1);
            }
            if (local_8c != (void **)0x0) {
              *local_8c = (void *)0x46;
            }
          }
          local_8c = local_8c + 1;
          local_74 = (void *)0x47;
          if ((&local_74 < local_8c) && (local_90 <= &local_74)) {
            iVar3 = (int)&local_74 - (int)local_90;
            if (local_8c == local_88) {
              FUN_00426eb0(&local_90,1);
            }
            if (local_8c != (void **)0x0) {
              *local_8c = local_90[iVar3 >> 2];
            }
          }
          else {
            if (local_8c == local_88) {
              FUN_00426eb0(&local_90,1);
            }
            if (local_8c != (void **)0x0) {
              *local_8c = (void *)0x47;
            }
          }
          local_8c = local_8c + 1;
          local_78 = (void *)0x57;
          if ((&local_78 < local_8c) && (local_90 <= &local_78)) {
            iVar3 = (int)&local_78 - (int)local_90;
            if (local_8c == local_88) {
              FUN_00426eb0(&local_90,1);
            }
            if (local_8c != (void **)0x0) {
              *local_8c = local_90[iVar3 >> 2];
            }
          }
          else {
            if (local_8c == local_88) {
              FUN_00426eb0(&local_90,1);
            }
            if (local_8c != (void **)0x0) {
              *local_8c = (void *)0x57;
            }
          }
          local_8c = local_8c + 1;
          local_7c = (void *)0x58;
          if ((&local_7c < local_8c) && (local_90 <= &local_7c)) {
            iVar3 = (int)&local_7c - (int)local_90;
            if (local_8c == local_88) {
              FUN_00426eb0(&local_90,1);
            }
            if (local_8c != (void **)0x0) {
              *local_8c = local_90[iVar3 >> 2];
            }
          }
          else {
            if (local_8c == local_88) {
              FUN_00426eb0(&local_90,1);
            }
            if (local_8c != (void **)0x0) {
              *local_8c = (void *)0x58;
            }
          }
          local_8c = local_8c + 1;
          param_4 = 100;
          FUN_004f2be0(&local_90,&param_4);
          param_4 = 0x5a;
          FUN_004f2be0(&local_90,&param_4);
          param_4 = 0x5b;
          FUN_004f2be0(&local_90,&param_4);
          param_4 = 0x5c;
          FUN_004f2be0(&local_90,&param_4);
          param_4 = 0x23;
          FUN_004f2be0(&local_90,&param_4);
          param_4 = 0x66;
          FUN_004f2be0(&local_90,&param_4);
          param_4 = 0x68;
          FUN_004f2be0(&local_90,&param_4);
          param_4 = 0x69;
          FUN_004f2be0(&local_90,&param_4);
          param_4 = 0x22;
          FUN_004f2be0(&local_90,&param_4);
          param_4 = 0x21;
          FUN_004f2be0(&local_90,&param_4);
          param_4 = 0x1e;
          FUN_004f2be0(&local_90,&param_4);
          param_4 = 0x1f;
          FUN_004f2be0(&local_90,&param_4);
          param_4 = 0x20;
          FUN_004f2be0(&local_90,&param_4);
          param_4 = 0x13;
          FUN_004f2be0(&local_90,&param_4);
          param_4 = 0x14;
          FUN_004f2be0(&local_90,&param_4);
          param_4 = 0x1a;
          FUN_004f2be0(&local_90,&param_4);
          param_4 = 0x1b;
          FUN_004f2be0(&local_90,&param_4);
          param_4 = 0x62;
          FUN_004f2be0(&local_90,&param_4);
          param_4 = 0x16;
          FUN_004f2be0(&local_90,&param_4);
          param_4 = 0x17;
          FUN_004f2be0(&local_90,&param_4);
          param_4 = 0x97;
        }
        FUN_004f2be0(&local_90,&param_4);
        goto LAB_0052a6f4;
      }
      local_34 = (void *)0x6a;
      if ((&local_34 < local_8c) && (local_90 <= &local_34)) {
        iVar3 = (int)&local_34 - (int)local_90;
        if (local_8c == local_88) {
          FUN_00426eb0(&local_90,1);
        }
        if (local_8c != (void **)0x0) {
          *local_8c = local_90[iVar3 >> 2];
        }
      }
      else {
        if (local_8c == local_88) {
          FUN_00426eb0(&local_90,1);
        }
        if (local_8c != (void **)0x0) {
          *local_8c = (void *)0x6a;
        }
      }
      local_8c = local_8c + 1;
      local_38 = (void *)0x39;
      if ((&local_38 < local_8c) && (local_90 <= &local_38)) {
        iVar3 = (int)&local_38 - (int)local_90;
        if (local_8c == local_88) {
          FUN_00426eb0(&local_90,1);
        }
        if (local_8c != (void **)0x0) {
          *local_8c = local_90[iVar3 >> 2];
        }
      }
      else {
        if (local_8c == local_88) {
          FUN_00426eb0(&local_90,1);
        }
        if (local_8c != (void **)0x0) {
          *local_8c = (void *)0x39;
        }
      }
      local_8c = local_8c + 1;
      local_3c = (void *)0x56;
      if ((&local_3c < local_8c) && (local_90 <= &local_3c)) {
        iVar3 = (int)&local_3c - (int)local_90;
        if (local_8c == local_88) {
          FUN_00426eb0(&local_90,1);
        }
        if (local_8c != (void **)0x0) {
          *local_8c = local_90[iVar3 >> 2];
        }
      }
      else {
        if (local_8c == local_88) {
          FUN_00426eb0(&local_90,1);
        }
        if (local_8c != (void **)0x0) {
          *local_8c = (void *)0x56;
        }
      }
      local_8c = local_8c + 1;
      ppvVar4 = local_44 + 1;
      local_44[1] = (void *)0x19;
      if ((local_8c <= ppvVar4) || (ppvVar4 < local_90)) {
        if (local_8c == local_88) {
          FUN_00426eb0(&local_90,1);
        }
        if (local_8c != (void **)0x0) {
          *local_8c = (void *)0x19;
        }
        local_8c = local_8c + 1;
        goto LAB_0052a6f4;
      }
    }
    else {
      FUN_00426eb0(&local_90,1);
      if (local_8c != (void **)0x0) {
        *local_8c = (void *)0x49;
      }
      local_8c = local_8c + 1;
      local_14[0] = (void *)0x52;
      if ((local_14 < local_8c) && (local_90 <= local_14)) {
        iVar3 = (int)local_14 - (int)local_90;
        if (local_8c == local_88) {
          FUN_00426eb0(&local_90,1);
        }
        if (local_8c != (void **)0x0) {
          *local_8c = local_90[iVar3 >> 2];
        }
      }
      else {
        if (local_8c == local_88) {
          FUN_00426eb0(&local_90,1);
        }
        if (local_8c != (void **)0x0) {
          *local_8c = (void *)0x52;
        }
      }
      local_8c = local_8c + 1;
      local_18 = (void *)0x55;
      if ((&local_18 < local_8c) && (local_90 <= &local_18)) {
        iVar3 = (int)&local_18 - (int)local_90;
        if (local_8c == local_88) {
          FUN_00426eb0(&local_90,1);
        }
        if (local_8c != (void **)0x0) {
          *local_8c = local_90[iVar3 >> 2];
        }
      }
      else {
        if (local_8c == local_88) {
          FUN_00426eb0(&local_90,1);
        }
        if (local_8c != (void **)0x0) {
          *local_8c = (void *)0x55;
        }
      }
      local_8c = local_8c + 1;
      local_1c = (void *)0x70;
      if ((&local_1c < local_8c) && (local_90 <= &local_1c)) {
        iVar3 = (int)&local_1c - (int)local_90;
        if (local_8c == local_88) {
          FUN_00426eb0(&local_90,1);
        }
        if (local_8c != (void **)0x0) {
          *local_8c = local_90[iVar3 >> 2];
        }
      }
      else {
        if (local_8c == local_88) {
          FUN_00426eb0(&local_90,1);
        }
        if (local_8c != (void **)0x0) {
          *local_8c = (void *)0x70;
        }
      }
      local_8c = local_8c + 1;
      local_20 = (void *)0x67;
      if ((&local_20 < local_8c) && (local_90 <= &local_20)) {
        iVar3 = (int)&local_20 - (int)local_90;
        if (local_8c == local_88) {
          FUN_00426eb0(&local_90,1);
        }
        if (local_8c != (void **)0x0) {
          *local_8c = local_90[iVar3 >> 2];
        }
      }
      else {
        if (local_8c == local_88) {
          FUN_00426eb0(&local_90,1);
        }
        if (local_8c != (void **)0x0) {
          *local_8c = (void *)0x67;
        }
      }
      local_8c = local_8c + 1;
      local_24 = (void *)0x3e;
      if ((&local_24 < local_8c) && (local_90 <= &local_24)) {
        iVar3 = (int)&local_24 - (int)local_90;
        if (local_8c == local_88) {
          FUN_00426eb0(&local_90,1);
        }
        if (local_8c != (void **)0x0) {
          *local_8c = local_90[iVar3 >> 2];
        }
      }
      else {
        if (local_8c == local_88) {
          FUN_00426eb0(&local_90,1);
        }
        if (local_8c != (void **)0x0) {
          *local_8c = (void *)0x3e;
        }
      }
      local_8c = local_8c + 1;
      ppvVar4 = local_2c + 1;
      local_2c[1] = (void *)0x6e;
      if ((local_8c <= ppvVar4) || (ppvVar4 < local_90)) {
        if (local_8c == local_88) {
          FUN_00426eb0(&local_90,1);
        }
        if (local_8c != (void **)0x0) {
          *local_8c = (void *)0x6e;
        }
        local_8c = local_8c + 1;
        goto LAB_0052a6f4;
      }
    }
    iVar3 = (int)ppvVar4 - (int)local_90;
    if (local_8c == local_88) {
      FUN_00426eb0(&local_90,1);
    }
    if (local_8c != (void **)0x0) {
      *local_8c = local_90[iVar3 >> 2];
    }
    local_8c = local_8c + 1;
  }
  else {
    param_4 = 2;
    FUN_004f2be0(&local_90,&param_4);
    param_4 = 4;
    FUN_004f2be0(&local_90,&param_4);
    param_4 = 7;
    FUN_004f2be0(&local_90,&param_4);
    param_4 = 9;
    FUN_004f2be0(&local_90,&param_4);
    param_4 = 0xb;
    FUN_004f2be0(&local_90,&param_4);
    param_4 = 0xf;
    FUN_004f2be0(&local_90,&param_4);
    param_4 = 0x33;
    FUN_004f2be0(&local_90,&param_4);
    param_4 = 0x30;
    FUN_004f2be0(&local_90,&param_4);
    param_4 = 0x4c;
    FUN_004f2be0(&local_90,&param_4);
  }
LAB_0052a6f4:
  if (local_90 == local_8c) {
    pvVar2 = (void *)0x3c;
  }
  else {
    iVar3 = (int)local_8c - (int)local_90;
    uVar1 = rand();
    pvVar2 = local_90[uVar1 % (uint)(iVar3 >> 2)];
  }
  local_14[3] = (void *)0xffffffff;
  if (local_90 != (void **)0x0) {
    std::_Container_base0::_Orphan_all((_Container_base0 *)&local_90);
    operator_delete(local_90);
  }
  ExceptionList = local_14[1];
  return pvVar2;
}


/* FUN_0052ae10 @ 0052ae10  kind=gamemisc  attributed-by=none  size=934 */

/* WARNING: Type propagation algorithm not settling */

void * FUN_0052ae10(void)

{
  void *pvVar1;
  void **ppvVar2;
  void **ppvVar3;
  uint uVar4;
  int iVar5;
  void **local_3c;
  void **local_38;
  void **local_34;
  void *local_30;
  void *local_2c;
  void *local_28;
  void *local_24;
  void *local_20;
  void *local_1c;
  void *local_18;
  void *local_14 [4];
  
  local_14[2] = &LAB_00556148;
  local_14[1] = ExceptionList;
  ExceptionList = local_14 + 1;
  local_3c = (void **)0x0;
  local_38 = (void **)0x0;
  local_34 = (void **)0x0;
  local_14[3] = (void *)0x0;
  FUN_00426eb0(&local_3c,1);
  if (local_38 != (void **)0x0) {
    *local_38 = (void *)0x30;
  }
  local_38 = local_38 + 1;
  local_14[0] = (void *)0x33;
  if ((local_14 < local_38) && (local_3c <= local_14)) {
    iVar5 = (int)local_14 - (int)local_3c;
    if (local_38 == local_34) {
      FUN_00426eb0(&local_3c,1);
    }
    if (local_38 != (void **)0x0) {
      *local_38 = local_3c[iVar5 >> 2];
    }
  }
  else {
    if (local_38 == local_34) {
      FUN_00426eb0(&local_3c,1);
    }
    if (local_38 != (void **)0x0) {
      *local_38 = (void *)0x33;
    }
  }
  local_38 = local_38 + 1;
  local_18 = (void *)0x60;
  if ((&local_18 < local_38) && (local_3c <= &local_18)) {
    iVar5 = (int)&local_18 - (int)local_3c;
    if (local_38 == local_34) {
      FUN_00426eb0(&local_3c,1);
    }
    if (local_38 != (void **)0x0) {
      *local_38 = local_3c[iVar5 >> 2];
    }
  }
  else {
    if (local_38 == local_34) {
      FUN_00426eb0(&local_3c,1);
    }
    if (local_38 != (void **)0x0) {
      *local_38 = (void *)0x60;
    }
  }
  local_38 = local_38 + 1;
  local_1c = (void *)0x50;
  if ((&local_1c < local_38) && (local_3c <= &local_1c)) {
    iVar5 = (int)&local_1c - (int)local_3c;
    if (local_38 == local_34) {
      FUN_00426eb0(&local_3c,1);
    }
    if (local_38 != (void **)0x0) {
      *local_38 = local_3c[iVar5 >> 2];
    }
  }
  else {
    if (local_38 == local_34) {
      FUN_00426eb0(&local_3c,1);
    }
    if (local_38 != (void **)0x0) {
      *local_38 = (void *)0x50;
    }
  }
  local_38 = local_38 + 1;
  local_20 = (void *)0x4c;
  if ((&local_20 < local_38) && (local_3c <= &local_20)) {
    iVar5 = (int)&local_20 - (int)local_3c;
    if (local_38 == local_34) {
      FUN_00426eb0(&local_3c,1);
    }
    if (local_38 != (void **)0x0) {
      *local_38 = local_3c[iVar5 >> 2];
    }
  }
  else {
    if (local_38 == local_34) {
      FUN_00426eb0(&local_3c,1);
    }
    if (local_38 != (void **)0x0) {
      *local_38 = (void *)0x4c;
    }
  }
  local_38 = local_38 + 1;
  local_24 = (void *)0x28;
  if ((&local_24 < local_38) && (local_3c <= &local_24)) {
    iVar5 = (int)&local_24 - (int)local_3c;
    if (local_38 == local_34) {
      FUN_00426eb0(&local_3c,1);
    }
    if (local_38 != (void **)0x0) {
      *local_38 = local_3c[iVar5 >> 2];
    }
  }
  else {
    if (local_38 == local_34) {
      FUN_00426eb0(&local_3c,1);
    }
    if (local_38 != (void **)0x0) {
      *local_38 = (void *)0x28;
    }
  }
  local_38 = local_38 + 1;
  local_28 = (void *)0x2b;
  if ((&local_28 < local_38) && (local_3c <= &local_28)) {
    iVar5 = (int)&local_28 - (int)local_3c;
    if (local_38 == local_34) {
      FUN_00426eb0(&local_3c,1);
    }
    if (local_38 != (void **)0x0) {
      *local_38 = local_3c[iVar5 >> 2];
    }
  }
  else {
    if (local_38 == local_34) {
      FUN_00426eb0(&local_3c,1);
    }
    if (local_38 != (void **)0x0) {
      *local_38 = (void *)0x2b;
    }
  }
  local_38 = local_38 + 1;
  local_2c = (void *)0x2d;
  if ((&local_2c < local_38) && (local_3c <= &local_2c)) {
    iVar5 = (int)&local_2c - (int)local_3c;
    if (local_38 == local_34) {
      FUN_00426eb0(&local_3c,1);
    }
    if (local_38 != (void **)0x0) {
      *local_38 = local_3c[iVar5 >> 2];
    }
  }
  else {
    if (local_38 == local_34) {
      FUN_00426eb0(&local_3c,1);
    }
    if (local_38 != (void **)0x0) {
      *local_38 = (void *)0x2d;
    }
  }
  local_38 = local_38 + 1;
  local_30 = (void *)0x34;
  if ((&local_30 < local_38) && (local_3c <= &local_30)) {
    iVar5 = (int)&local_30 - (int)local_3c;
    if (local_38 == local_34) {
      FUN_00426eb0(&local_3c,1);
    }
    if (local_38 != (void **)0x0) {
      *local_38 = local_3c[iVar5 >> 2];
    }
  }
  else {
    if (local_38 == local_34) {
      FUN_00426eb0(&local_3c,1);
    }
    if (local_38 != (void **)0x0) {
      *local_38 = (void *)0x34;
    }
  }
  ppvVar3 = local_38;
  ppvVar2 = local_3c;
  uVar4 = rand();
  pvVar1 = ppvVar2[uVar4 % (uint)((int)ppvVar3 + (4 - (int)ppvVar2) >> 2)];
  if (ppvVar2 != (void **)0x0) {
    operator_delete(ppvVar2);
  }
  ExceptionList = local_14[1];
  return pvVar1;
}


/* FUN_0052b230 @ 0052b230  kind=gamemisc  attributed-by=none  size=448 */

undefined4 __thiscall FUN_0052b230(void *this,int param_1,int param_2,int param_3)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  void *local_1c;
  int local_18;
  undefined4 local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00556178;
  local_10 = ExceptionList;
  if ((((-1 < param_1) && (-1 < param_2)) && (param_1 < 0x400)) &&
     ((param_2 < 0x400 &&
      (iVar1 = *(int *)((int)this + (param_1 * 0x400 + param_2) * 4 + 0x4000bc), iVar1 != 0)))) {
    local_1c = (void *)0x0;
    local_18 = 0;
    local_14 = 0;
    local_8 = 0;
    param_1 = 0x6c;
    if (*(float *)(iVar1 + 0x10) <= 0.2) {
      param_1 = 0x72;
    }
    ExceptionList = &local_10;
    FUN_004f2be0(&local_1c,&param_1);
    param_1 = 0x77;
    if (*(float *)(iVar1 + 0x10) <= 0.2) {
      param_1 = 0x74;
    }
    FUN_004f2be0(&local_1c,&param_1);
    iVar3 = param_3;
    if (10 < param_3) {
      param_1 = 0x73;
      FUN_004f2be0(&local_1c,&param_1);
    }
    if (0x14 < iVar3) {
      param_1 = 0x75;
      FUN_004f2be0(&local_1c,&param_1);
    }
    if (0x32 < iVar3) {
      if (0.2 < *(float *)(iVar1 + 0x10) || *(float *)(iVar1 + 0x10) == 0.2) {
        param_1 = 0x70;
        if (*(char *)(iVar1 + 8) != '\x01') {
          param_1 = 0x6f;
        }
      }
      else {
        param_1 = 0x71;
      }
      FUN_004f2be0(&local_1c,&param_1);
      param_1 = 0x6d;
      FUN_004f2be0(&local_1c,&param_1);
    }
    if (0x46 < iVar3) {
      param_1 = 0x6e;
      FUN_004f2be0(&local_1c,&param_1);
    }
    uVar4 = rand();
    uVar2 = *(undefined4 *)((int)local_1c + (uVar4 % (uint)(local_18 - (int)local_1c >> 2)) * 4);
    if (local_1c != (void *)0x0) {
      operator_delete(local_1c);
    }
    ExceptionList = local_10;
    return uVar2;
  }
  return 0x6c;
}


/* FUN_0052b3f0 @ 0052b3f0  kind=gamemisc  attributed-by=none  size=126 */

undefined1 * __thiscall FUN_0052b3f0(void *this,undefined1 *param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  
  *(undefined2 *)(param_1 + 0x10) = 1;
  param_1[1] = 0;
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined2 *)(param_1 + 0xc) = 0;
  param_1[0xe] = 0;
  *(undefined4 *)(param_1 + 0x114) = 0;
  memset(param_1 + 0x14,0,0x100);
  *param_1 = 0x14;
  iVar1 = *(int *)((int)this + 0x8c);
  iVar2 = *(int *)((int)this + 0x88);
  uVar3 = rand();
  param_1[1] = *(undefined1 *)
                (*(int *)((int)this + 0x88) + (uVar3 % (uint)(iVar1 - iVar2 >> 2)) * 4);
  return param_1;
}


/* FUN_0052bfa0 @ 0052bfa0  kind=gamemisc  attributed-by=none  size=311 */

uint FUN_0052bfa0(void)

{
  uint uVar1;
  uint in_stack_00000010;
  
  switch(in_stack_00000010) {
  case 0:
  case 1:
    uVar1 = rand();
    in_stack_00000010 = uVar1 & 0x80000001;
    if ((int)in_stack_00000010 < 0) {
      return (in_stack_00000010 - 1 | 0xfffffffe) + 1;
    }
    break;
  case 2:
  case 3:
    uVar1 = rand();
    uVar1 = uVar1 & 0x80000001;
    if ((int)uVar1 < 0) {
      uVar1 = (uVar1 - 1 | 0xfffffffe) + 1;
    }
    return uVar1 + 2;
  case 4:
  case 5:
    uVar1 = rand();
    uVar1 = uVar1 & 0x80000001;
    if ((int)uVar1 < 0) {
      uVar1 = (uVar1 - 1 | 0xfffffffe) + 1;
    }
    return uVar1 + 4;
  default:
    break;
  case 7:
  case 8:
    uVar1 = rand();
    uVar1 = uVar1 & 0x80000001;
    if ((int)uVar1 < 0) {
      uVar1 = (uVar1 - 1 | 0xfffffffe) + 1;
    }
    return uVar1 + 7;
  case 9:
  case 10:
    uVar1 = rand();
    uVar1 = uVar1 & 0x80000001;
    if ((int)uVar1 < 0) {
      uVar1 = (uVar1 - 1 | 0xfffffffe) + 1;
    }
    return uVar1 + 9;
  case 0xb:
  case 0xc:
    uVar1 = rand();
    uVar1 = uVar1 & 0x80000001;
    if ((int)uVar1 < 0) {
      uVar1 = (uVar1 - 1 | 0xfffffffe) + 1;
    }
    return uVar1 + 0xb;
  case 0xd:
  case 0xe:
    uVar1 = rand();
    uVar1 = uVar1 & 0x80000001;
    if ((int)uVar1 < 0) {
      uVar1 = (uVar1 - 1 | 0xfffffffe) + 1;
    }
    return uVar1 + 0xd;
  case 0xf:
  case 0x10:
    uVar1 = rand();
    uVar1 = uVar1 & 0x80000001;
    if ((int)uVar1 < 0) {
      uVar1 = (uVar1 - 1 | 0xfffffffe) + 1;
    }
    return uVar1 + 0xf;
  case 0x16:
  case 0x17:
    uVar1 = rand();
    uVar1 = uVar1 & 0x80000001;
    if ((int)uVar1 < 0) {
      uVar1 = (uVar1 - 1 | 0xfffffffe) + 1;
    }
    return uVar1 + 0x16;
  case 0x25:
  case 0x26:
  case 0x27:
  case 0x28:
    uVar1 = rand();
    uVar1 = uVar1 & 0x80000003;
    if ((int)uVar1 < 0) {
      uVar1 = (uVar1 - 1 | 0xfffffffc) + 1;
    }
    return uVar1 + 0x25;
  case 0x53:
  case 0x54:
    uVar1 = rand();
    uVar1 = uVar1 & 0x80000001;
    if ((int)uVar1 < 0) {
      uVar1 = (uVar1 - 1 | 0xfffffffe) + 1;
    }
    return uVar1 + 0x53;
  }
  return in_stack_00000010;
}


/* FUN_0052d820 @ 0052d820  kind=gamemisc  attributed-by=none  size=25 */

undefined4 __fastcall FUN_0052d820(int param_1)

{
  uint uVar1;
  bool bVar2;
  
  uVar1 = *(uint *)(param_1 + 4) & 0x80000001;
  bVar2 = uVar1 == 0;
  if ((int)uVar1 < 0) {
    bVar2 = (uVar1 - 1 | 0xfffffffe) == 0xffffffff;
  }
  if (!bVar2) {
    return *(undefined4 *)(param_1 + 0x10);
  }
  return *(undefined4 *)(param_1 + 0xc);
}


/* FUN_0052d840 @ 0052d840  kind=gamemisc  attributed-by=none  size=25 */

undefined4 __fastcall FUN_0052d840(int param_1)

{
  uint uVar1;
  bool bVar2;
  
  uVar1 = *(uint *)(param_1 + 4) & 0x80000001;
  bVar2 = uVar1 == 0;
  if ((int)uVar1 < 0) {
    bVar2 = (uVar1 - 1 | 0xfffffffe) == 0xffffffff;
  }
  if (!bVar2) {
    return *(undefined4 *)(param_1 + 0xc);
  }
  return *(undefined4 *)(param_1 + 0x10);
}


/* FUN_0052d860 @ 0052d860  kind=gamemisc  attributed-by=none  size=4 */

undefined4 __fastcall FUN_0052d860(int param_1)

{
  return *(undefined4 *)(param_1 + 0x14);
}


/* FUN_0052de60 @ 0052de60  kind=gamemisc  attributed-by=none  size=123 */

void __thiscall FUN_0052de60(void *this,int *param_1,int *param_2)

{
  int iVar1;
  uint uVar2;
  
  if (*(char *)((int)this + 8) != '\0') {
    *param_2 = (*(int *)((int)this + 0x10) - *param_2) + -1;
  }
  uVar2 = *(uint *)((int)this + 4) & 0x80000003;
  if ((int)uVar2 < 0) {
    uVar2 = (uVar2 - 1 | 0xfffffffc) + 1;
  }
  if (uVar2 == 1) {
    iVar1 = *param_1;
    *param_1 = *param_2;
    *param_2 = iVar1;
    *param_2 = (*(int *)((int)this + 0x10) - iVar1) + -1;
  }
  else {
    if (uVar2 == 2) {
      *param_1 = (*(int *)((int)this + 0xc) - *param_1) + -1;
      *param_2 = (*(int *)((int)this + 0x10) - *param_2) + -1;
      return;
    }
    if (uVar2 == 3) {
      iVar1 = *param_1;
      *param_1 = *param_2;
      *param_2 = iVar1;
      *param_1 = (*(int *)((int)this + 0xc) - *param_1) + -1;
      return;
    }
  }
  return;
}


/* FUN_0052df20 @ 0052df20  kind=gamemisc  attributed-by=none  size=20 */

bool __cdecl FUN_0052df20(int *param_1,int *param_2)

{
  return *param_1 != *param_2;
}


/* FUN_0052df40 @ 0052df40  kind=gamemisc  attributed-by=none  size=58 */

int FUN_0052df40(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  int iVar1;
  
  iVar1 = FUN_004268f0(param_1,param_2);
  if ((undefined4 *)(iVar1 + 8) != (undefined4 *)0x0) {
    *(undefined4 *)(iVar1 + 8) = *param_3;
    *(undefined4 *)(iVar1 + 0xc) = param_3[1];
    *(undefined4 *)(iVar1 + 0x10) = param_3[2];
    *(undefined4 *)(iVar1 + 0x14) = param_3[3];
  }
  return iVar1;
}


/* FUN_0052dfd0 @ 0052dfd0  kind=gamemisc  attributed-by=none  size=92 */

void __thiscall FUN_0052dfd0(void *this,undefined4 *param_1,undefined4 *param_2)

{
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00556220;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  FUN_0052e590(this,(undefined4 *)**(undefined4 **)this,param_1,param_2);
  ExceptionList = local_10;
  return;
}


/* FUN_0052e040 @ 0052e040  kind=gamemisc  attributed-by=none  size=116 */

void __thiscall FUN_0052e040(void *this,int *param_1,undefined4 param_2)

{
  char cVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  int iVar5;
  int *piVar6;
  undefined4 *puVar7;
  
  iVar2 = *(int *)this;
  puVar7 = FUN_0052e120(this,*(undefined4 **)(*param_1 + 4),iVar2,param_2);
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


/* FUN_0052e0c0 @ 0052e0c0  kind=gamemisc  attributed-by=none  size=86 */

undefined4 * __cdecl FUN_0052e0c0(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  
  if (param_1 != param_2) {
    puVar2 = param_1 + 4;
    do {
      *param_3 = puVar2[-4];
      param_3[1] = puVar2[-3];
      param_3[2] = puVar2[-2];
      param_3[3] = puVar2[-1];
      param_3[4] = *puVar2;
      param_3[5] = puVar2[1];
      param_3[6] = puVar2[2];
      puVar1 = puVar2 + 4;
      param_3 = param_3 + 8;
      puVar2 = puVar2 + 8;
    } while (puVar1 != param_2);
    return param_3;
  }
  return param_3;
}


/* FUN_0052e120 @ 0052e120  kind=gamemisc  attributed-by=none  size=159 */

undefined4 * __thiscall
FUN_0052e120(void *this,undefined4 *param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00556240;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  puVar3 = *(undefined4 **)this;
  if (*(char *)((int)param_1 + 0xd) == '\0') {
    puVar1 = FUN_0052df80(this,param_1 + 4);
    puVar1[1] = param_2;
    *(undefined1 *)(puVar1 + 3) = *(undefined1 *)(param_1 + 3);
    if (*(char *)((int)puVar3 + 0xd) != '\0') {
      puVar3 = puVar1;
    }
    local_8 = 0;
    puVar2 = FUN_0052e120(this,(undefined4 *)*param_1,puVar1,param_3);
    *puVar1 = puVar2;
    puVar2 = FUN_0052e120(this,(undefined4 *)param_1[2],puVar1,param_3);
    puVar1[2] = puVar2;
  }
  ExceptionList = local_10;
  return puVar3;
}


/* FUN_0052e1e0 @ 0052e1e0  kind=gamemisc  attributed-by=none  size=101 */

void __cdecl FUN_0052e1e0(int *param_1,int *param_2,int *param_3)

{
  char cVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  
  if (param_1 != param_2) {
    iVar4 = *param_3;
    do {
      iVar4 = iVar4 + 1;
      *param_3 = iVar4;
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
    } while (param_1 != param_2);
  }
  return;
}


/* FUN_0052e250 @ 0052e250  kind=gamemisc  attributed-by=none  size=511 */

void __thiscall
FUN_0052e250(void *this,undefined4 *param_1,char param_2,undefined4 *param_3,undefined4 *param_4)

{
  char cVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  int *piVar5;
  int *piVar6;
  int *piVar7;
  
  if (0xaaaaaa8 < *(uint *)((int)this + 4)) {
                    /* WARNING: Subroutine does not return */
    std::_Xlength_error("map/set<T> too long");
  }
  piVar3 = FUN_0052df80(this,param_4);
  *(int *)((int)this + 4) = *(int *)((int)this + 4) + 1;
  piVar3[1] = (int)param_3;
  if (param_3 == *(undefined4 **)this) {
    (*(undefined4 **)this)[1] = piVar3;
    **(undefined4 **)this = piVar3;
    iVar4 = *(int *)this;
  }
  else {
    if (param_2 != '\0') {
      *param_3 = piVar3;
      if (param_3 == (undefined4 *)**(int **)this) {
        **(int **)this = (int)piVar3;
      }
      goto LAB_0052e2ae;
    }
    param_3[2] = piVar3;
    iVar4 = *(int *)this;
    if (param_3 != *(undefined4 **)(iVar4 + 8)) goto LAB_0052e2ae;
  }
  *(int **)(iVar4 + 8) = piVar3;
LAB_0052e2ae:
  cVar1 = *(char *)(piVar3[1] + 0xc);
  piVar5 = piVar3;
  do {
    if (cVar1 != '\0') {
      *(undefined1 *)(*(int *)(*(int *)this + 4) + 0xc) = 1;
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
          if (piVar7 == *(int **)(*(int *)this + 4)) {
            *(int **)(*(int *)this + 4) = piVar5;
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
        if (piVar7 == *(int **)(*(int *)this + 4)) {
          *(int **)(*(int *)this + 4) = piVar6;
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
        goto LAB_0052e42a;
      }
LAB_0052e381:
      *(undefined1 *)(piVar7 + 3) = 1;
      *(undefined1 *)(piVar6 + 3) = 1;
      *(undefined1 *)(*(int *)(piVar5[1] + 4) + 0xc) = 0;
      piVar5 = *(int **)(piVar5[1] + 4);
    }
    else {
      if ((char)piVar6[3] == '\0') goto LAB_0052e381;
      if (piVar5 == (int *)*piVar7) {
        iVar4 = *piVar7;
        *piVar7 = *(int *)(iVar4 + 8);
        if (*(char *)(*(int *)(iVar4 + 8) + 0xd) == '\0') {
          *(int **)(*(int *)(iVar4 + 8) + 4) = piVar7;
        }
        *(int *)(iVar4 + 4) = piVar7[1];
        if (piVar7 == *(int **)(*(int *)this + 4)) {
          *(int *)(*(int *)this + 4) = iVar4;
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
      if (piVar7 == *(int **)(*(int *)this + 4)) {
        *(int **)(*(int *)this + 4) = piVar6;
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
LAB_0052e42a:
      piVar7[1] = (int)piVar6;
    }
    cVar1 = *(char *)(piVar5[1] + 0xc);
  } while( true );
}


/* FUN_0052e450 @ 0052e450  kind=gamemisc  attributed-by=none  size=310 */

undefined4 * __thiscall
FUN_0052e450(void *this,undefined4 *param_1,char param_2,uint *param_3,undefined4 param_4)

{
  uint *puVar1;
  uint uVar2;
  uint *puVar3;
  uint **ppuVar4;
  undefined4 *puVar5;
  uint *puVar6;
  bool local_18;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00556260;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  puVar1 = *(uint **)this;
  local_8 = 0;
  local_18 = true;
  puVar6 = puVar1;
  if (*(char *)((int)puVar1[1] + 0xd) == '\0') {
    uVar2 = param_3[1];
    puVar3 = (uint *)puVar1[1];
    do {
      puVar6 = puVar3;
      if (param_2 == '\0') {
        if (((int)puVar6[5] < (int)uVar2) ||
           (((int)puVar6[5] <= (int)uVar2 && (puVar6[4] <= *param_3)))) {
          local_18 = false;
          goto LAB_0052e4ec;
        }
        puVar3 = (uint *)*puVar6;
        local_18 = true;
      }
      else {
        if (((int)uVar2 < (int)puVar6[5]) ||
           (((int)uVar2 <= (int)puVar6[5] && (*param_3 <= puVar6[4])))) {
          local_18 = false;
        }
        else {
          local_18 = true;
        }
        local_18 = !local_18;
        if (local_18) {
          puVar3 = (uint *)*puVar6;
        }
        else {
LAB_0052e4ec:
          puVar3 = (uint *)puVar6[2];
        }
      }
    } while (*(char *)((int)puVar3 + 0xd) == '\0');
  }
  _param_2 = puVar6;
  if (local_18) {
    if (puVar6 == (uint *)*puVar1) {
      ppuVar4 = (uint **)&param_2;
      local_18 = true;
      goto LAB_0052e514;
    }
    FUN_004dad80((int *)&param_2);
  }
  if (((int)param_3[1] < (int)_param_2[5]) ||
     (((int)param_3[1] <= (int)_param_2[5] && (*param_3 <= _param_2[4])))) {
    *param_1 = _param_2;
    *(undefined1 *)(param_1 + 1) = 0;
    ExceptionList = local_10;
    return param_1;
  }
  ppuVar4 = &param_3;
LAB_0052e514:
  puVar5 = (undefined4 *)FUN_0052e250(this,ppuVar4,local_18,puVar6,param_3);
  *param_1 = *puVar5;
  *(undefined1 *)(param_1 + 1) = 1;
  ExceptionList = local_10;
  return param_1;
}


/* FUN_0052e590 @ 0052e590  kind=gamemisc  attributed-by=none  size=155 */

void __thiscall FUN_0052e590(void *this,undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  int iVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00556280;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  while( true ) {
    if (param_2 == param_3) {
      ExceptionList = local_10;
      return;
    }
    iVar1 = FUN_0052df40(param_1,(undefined4 *)param_1[1],param_2);
    if (*(int *)((int)this + 4) == 0xaaaaaa9) break;
    *(int *)((int)this + 4) = *(int *)((int)this + 4) + 1;
    param_1[1] = iVar1;
    **(int **)(iVar1 + 4) = iVar1;
    param_2 = param_2 + 4;
  }
                    /* WARNING: Subroutine does not return */
  std::_Xlength_error("list<T> too long");
}


