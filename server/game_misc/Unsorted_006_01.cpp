// Unsorted_006_01 (game_misc) -- server. 68 functions. Bodies = Ghidra pseudo-C.
// Attribution: see ../attribution.tsv. Toolchain of the original: MSVC 11.0 (VS2012).
#include "Unsorted_006_01.h"

/* FUN_004ee3aa @ 004ee3aa  kind=gamemisc  attributed-by=none  size=17215 */

/* WARNING (jumptable): Unable to track spacebase fully for stack */
/* WARNING: Removing unreachable block (ram,0x004e9862) */
/* WARNING: Removing unreachable block (ram,0x004e5295) */
/* WARNING: Removing unreachable block (ram,0x004e5269) */
/* WARNING: Removing unreachable block (ram,0x004e99b8) */
/* WARNING: Removing unreachable block (ram,0x004e9ab5) */
/* WARNING: Removing unreachable block (ram,0x004e9d1b) */
/* WARNING: Removing unreachable block (ram,0x004e9be8) */
/* WARNING: Removing unreachable block (ram,0x004e9932) */
/* WARNING: Removing unreachable block (ram,0x004e995b) */
/* WARNING: Removing unreachable block (ram,0x004e9ade) */
/* WARNING: Removing unreachable block (ram,0x004e9d44) */
/* WARNING: Removing unreachable block (ram,0x004e9c11) */
/* WARNING: Removing unreachable block (ram,0x004e99e1) */
/* WARNING: Removing unreachable block (ram,0x004e9db6) */
/* WARNING: Removing unreachable block (ram,0x004e9ddf) */
/* WARNING: Removing unreachable block (ram,0x004e9efa) */

void FUN_004ee3aa(void)

{
  uint uVar1;
  uint uVar2;
  byte bVar3;
  char cVar4;
  undefined3 extraout_var;
  void *pvVar5;
  float *pfVar6;
  undefined3 extraout_var_00;
  undefined3 extraout_var_01;
  House *pHVar7;
  undefined3 extraout_var_02;
  undefined3 extraout_var_03;
  uint *puVar8;
  int iVar9;
  uint uVar10;
  int iVar11;
  undefined4 uVar12;
  undefined4 *puVar13;
  uint *puVar14;
  uint *puVar15;
  undefined *puVar16;
  void *pvVar17;
  int *piVar18;
  undefined4 *puVar19;
  undefined1 *puVar20;
  undefined3 extraout_var_04;
  double *pdVar21;
  float *pfVar22;
  int iVar23;
  int *piVar24;
  int *piVar25;
  int *piVar26;
  CRefTime *pCVar27;
  long lVar28;
  char *pcVar29;
  Spawn *pSVar30;
  SequentialBehavior *pSVar31;
  CombatBehavior *pCVar32;
  LookAtPlayerBehavior *pLVar33;
  WalkPathBehavior *pWVar34;
  SpawnLocationBehavior *pSVar35;
  RandomInteractionBehavior *pRVar36;
  RandomWalkBehavior *pRVar37;
  undefined4 *puVar38;
  undefined1 uVar39;
  uint uVar40;
  int iVar41;
  uint uVar42;
  uint unaff_EBP;
  code *pcVar43;
  void *pvVar44;
  void *unaff_ESI;
  int unaff_EDI;
  bool bVar45;
  float10 fVar46;
  float fVar47;
  double dVar48;
  double dVar49;
  undefined8 uVar50;
  undefined4 uStack00000008;
  undefined4 uVar51;
  int iVar52;
  uint uVar53;
  float *pfVar54;
  undefined4 uVar55;
  int iVar56;
  int iVar57;
  undefined4 uVar58;
  
  do {
    do {
      *(undefined4 *)(unaff_EBP - 0x5c64) = 0;
      iVar9 = FUN_00402160(*(int *)(unaff_EBP - 0x14));
      if (0 < iVar9) {
        iVar9 = *(int *)(unaff_EBP - 0x5cac);
        uVar40 = *(int *)(unaff_EBP - 0x5cf0) + -0x10 +
                 **(int **)(unaff_EBP - 0x5cf8) * 0x100 + *(int *)(unaff_EBP - 0x5cec) +
                 *(int *)(unaff_EBP - 0x5c58);
        piVar26 = *(int **)(unaff_EBP - 0x5cf4);
        *(uint *)(unaff_EBP - 0x5c48) = uVar40;
        uVar10 = *piVar26 * 0x100 + *(int *)(unaff_EBP - 0x5cec) + iVar9 + -0x10;
        *(uint *)(unaff_EBP - 0x5cc4) = uVar10;
        do {
          iVar9 = FUN_00406100(unaff_ESI,uVar40,uVar10,unaff_EDI);
          *(int *)(unaff_EBP - 0x5c50) = iVar9;
          if (iVar9 != 0) {
            iVar9 = FUN_004061d0(iVar9);
            iVar11 = FUN_00406250(*(int *)(unaff_EBP - 0x5c50));
            if (*(int *)(unaff_EBP - 0x5c78) < iVar9 + iVar11) {
              uVar12 = FUN_004061d0(*(int *)(unaff_EBP - 0x5c50));
              iVar9 = *(int *)(unaff_EBP - 0x5c50);
              *(undefined4 *)(unaff_EBP - 0x5c78) = uVar12;
              iVar9 = FUN_00406250(iVar9);
              *(int *)(unaff_EBP - 0x5c78) = *(int *)(unaff_EBP - 0x5c78) + iVar9;
            }
            unaff_ESI = *(void **)(unaff_EBP - 0x5c68);
          }
          iVar9 = *(int *)(unaff_EBP - 0x14);
          *(int *)(unaff_EBP - 0x5c64) = *(int *)(unaff_EBP - 0x5c64) + 1;
          *(int *)(unaff_EBP - 0x5cc4) = *(int *)(unaff_EBP - 0x5cc4) + 1;
          iVar9 = FUN_00402160(iVar9);
          uVar10 = *(uint *)(unaff_EBP - 0x5cc4);
          uVar40 = *(uint *)(unaff_EBP - 0x5c48);
        } while (*(int *)(unaff_EBP - 0x5c64) < iVar9);
      }
      iVar9 = *(int *)(unaff_EBP - 0x14);
      *(int *)(unaff_EBP - 0x5c58) = *(int *)(unaff_EBP - 0x5c58) + 1;
      iVar9 = FUN_00402150(iVar9);
    } while (*(int *)(unaff_EBP - 0x5c58) < iVar9);
    do {
      switch(*(undefined4 *)(unaff_EBP - 0x5cdc)) {
      case 0:
        *(undefined4 *)(unaff_EBP - 0x5c54) = 10;
        break;
      case 1:
        *(undefined4 *)(unaff_EBP - 0x5c54) = 0xb;
        break;
      case 2:
        *(undefined4 *)(unaff_EBP - 0x5c54) = 0xc;
        break;
      case 3:
        *(undefined4 *)(unaff_EBP - 0x5c54) = 0xd;
        break;
      case 4:
        *(undefined4 *)(unaff_EBP - 0x5c54) = 0xf;
        break;
      case 5:
        *(undefined4 *)(unaff_EBP - 0x5c54) = 0xe;
        break;
      default:
        *(undefined4 *)(unaff_EBP - 0x5c54) = 9;
      }
      puVar13 = FUN_004010b0((void *)(unaff_EBP - 0x69d0),0,0,0,0);
      FUN_004e1200((void *)(unaff_EBP - 0x65d0),(int)puVar13);
      iVar57 = 0;
      piVar26 = (int *)(unaff_EBP - 0x65d0);
      cVar4 = '\x01';
      iVar9 = *(int *)(unaff_EBP - 0x5c54);
      uVar12 = 6;
      uVar10 = *(uint *)(*(int *)(unaff_EBP - 0x5c94) + 0x14 + *(int *)(unaff_EBP - 0x5c98) * 4);
      iVar11 = unaff_EDI;
      puVar14 = FUN_00402990((void *)(unaff_EBP - 0x5e4),
                             **(int **)(unaff_EBP - 0x5cf8) * 0x100 + *(int *)(unaff_EBP - 0x5cec) +
                             *(int *)(unaff_EBP - 0x5cf0) + -0x10,
                             **(int **)(unaff_EBP - 0x5cf4) * 0x100 + *(int *)(unaff_EBP - 0x5cec) +
                             *(int *)(unaff_EBP - 0x5cac) + -0x10,*(int *)(unaff_EBP - 0x5c78) + -7)
      ;
      FUN_00524540(unaff_ESI,*(void **)(unaff_EBP - 0x14),puVar14,uVar10,uVar12,iVar9,iVar11,cVar4,
                   piVar26,iVar57);
      iVar9 = *(int *)(unaff_EBP - 0x5c98);
      iVar11 = *(int *)(unaff_EBP - 0x5c94);
      do {
        if (*(int *)(iVar11 + 0xc + iVar9 * 4) == 5) {
          uVar12 = *(undefined4 *)(iVar11 + 4 + iVar9 * 4);
          iVar9 = FUN_004013f0((void *)((int)unaff_ESI + 0x1c),0x882);
          iVar9 = FUN_00402160(iVar9);
          iVar11 = (**(int **)(unaff_EBP - 0x5cf4) * 0x100 - iVar9 / 2) +
                   *(int *)(unaff_EBP - 0x5cec) + *(int *)(unaff_EBP - 0x5cac);
          iVar9 = FUN_004013f0((void *)((int)unaff_ESI + 0x1c),0x882);
          iVar9 = FUN_00402150(iVar9);
          FUN_00402990((void *)(unaff_EBP - 0x8c),
                       (**(int **)(unaff_EBP - 0x5cf8) * 0x100 - iVar9 / 2) +
                       *(int *)(unaff_EBP - 0x5cec) + *(int *)(unaff_EBP - 0x5cf0),iVar11,uVar12);
          iVar9 = FUN_004013d0((void *)(unaff_EBP - 0x8c),2);
          *(int *)(unaff_EBP - 0x5c50) = iVar9;
          iVar9 = FUN_004013d0((void *)(unaff_EBP - 0x8c),1);
          *(int *)(unaff_EBP - 0x5c74) = iVar9;
          puVar15 = (uint *)FUN_004013d0((void *)(unaff_EBP - 0x8c),0);
          iVar9 = **(int **)(unaff_EBP - 0x5c50);
          puVar14 = *(uint **)(unaff_EBP - 0x5c74);
          *(uint **)(unaff_EBP - 0x5c48) = puVar15;
          puVar16 = FUN_00405fd0(unaff_ESI,*puVar15,*puVar14,iVar9,unaff_EDI);
          uVar12 = FUN_004061f0((int)puVar16);
          cVar4 = (char)uVar12;
          while (cVar4 == '\0') {
            piVar26 = *(int **)(unaff_EBP - 0x5c50);
            *piVar26 = *piVar26 + -1;
            puVar16 = FUN_00405fd0(unaff_ESI,**(uint **)(unaff_EBP - 0x5c48),
                                   **(uint **)(unaff_EBP - 0x5c74),*piVar26,unaff_EDI);
            uVar12 = FUN_004061f0((int)puVar16);
            cVar4 = (char)uVar12;
          }
          puVar13 = FUN_004010b0((void *)(unaff_EBP - 0x6a90),0,0,0,0);
          FUN_004e1200((void *)(unaff_EBP - 0x6320),(int)puVar13);
          iVar57 = 0;
          piVar26 = (int *)(unaff_EBP - 0x6320);
          cVar4 = '\x01';
          iVar11 = 8;
          uVar12 = 6;
          uVar10 = *(uint *)(*(int *)(unaff_EBP - 0x5c94) + 0x14 + *(int *)(unaff_EBP - 0x5c98) * 4)
          ;
          puVar14 = (uint *)(unaff_EBP - 0x8c);
          iVar9 = unaff_EDI;
          pvVar17 = (void *)FUN_004013f0((void *)((int)unaff_ESI + 0x1c),0x882);
          FUN_00524540(unaff_ESI,pvVar17,puVar14,uVar10,uVar12,iVar11,iVar9,cVar4,piVar26,iVar57);
          iVar9 = *(int *)(unaff_EBP - 0x5c98);
          iVar11 = *(int *)(unaff_EBP - 0x5c94);
        }
        if (*(int *)(iVar11 + 0xc + iVar9 * 4) == 0x11) {
          iVar9 = FUN_004013f0((void *)((int)unaff_ESI + 0x1c),0xa04);
          uVar12 = FUN_00402150(iVar9);
          *(undefined4 *)(unaff_EBP - 0x5c74) = uVar12;
          iVar9 = FUN_004013f0((void *)((int)unaff_ESI + 0x1c),0xa04);
          iVar57 = FUN_00402160(iVar9);
          iVar9 = *(int *)(unaff_EBP - 0x5c98);
          iVar11 = *(int *)(unaff_EBP - 0x5c94);
          *(int *)(unaff_EBP - 0x5c50) = iVar57;
          uVar10 = *(uint *)(iVar11 + 0x14 + iVar9 * 4) & 0x80000001;
          bVar45 = uVar10 == 0;
          if ((int)uVar10 < 0) {
            bVar45 = (uVar10 - 1 | 0xfffffffe) == 0xffffffff;
          }
          if (!bVar45) {
            FUN_004c8150((undefined4 *)(unaff_EBP - 0x5c74),(undefined4 *)(unaff_EBP - 0x5c50));
            iVar57 = *(int *)(unaff_EBP - 0x5c50);
            iVar11 = *(int *)(unaff_EBP - 0x5c94);
          }
          FUN_00402990((void *)(unaff_EBP - 0x80),
                       (**(int **)(unaff_EBP - 0x5cf8) * 0x100 - *(int *)(unaff_EBP - 0x5c74) / 2) +
                       *(int *)(unaff_EBP - 0x5cec) + *(int *)(unaff_EBP - 0x5cf0),
                       (**(int **)(unaff_EBP - 0x5cf4) * 0x100 - iVar57 / 2) +
                       *(int *)(unaff_EBP - 0x5cec) + *(int *)(unaff_EBP - 0x5cac),
                       *(undefined4 *)(iVar11 + 4 + *(int *)(unaff_EBP - 0x5c98) * 4));
          iVar9 = FUN_004013d0((void *)(unaff_EBP - 0x80),2);
          *(int *)(unaff_EBP - 0x5c50) = iVar9;
          iVar9 = FUN_004013d0((void *)(unaff_EBP - 0x80),1);
          *(int *)(unaff_EBP - 0x5c64) = iVar9;
          puVar15 = (uint *)FUN_004013d0((void *)(unaff_EBP - 0x80),0);
          iVar9 = **(int **)(unaff_EBP - 0x5c50);
          puVar14 = *(uint **)(unaff_EBP - 0x5c64);
          *(uint **)(unaff_EBP - 0x5c74) = puVar15;
          puVar16 = FUN_00405fd0(unaff_ESI,*puVar15,*puVar14,iVar9,unaff_EDI);
          uVar12 = FUN_004061f0((int)puVar16);
          cVar4 = (char)uVar12;
          while (cVar4 == '\0') {
            piVar26 = *(int **)(unaff_EBP - 0x5c50);
            *piVar26 = *piVar26 + -1;
            puVar16 = FUN_00405fd0(unaff_ESI,**(uint **)(unaff_EBP - 0x5c74),
                                   **(uint **)(unaff_EBP - 0x5c64),*piVar26,unaff_EDI);
            uVar12 = FUN_004061f0((int)puVar16);
            cVar4 = (char)uVar12;
          }
          puVar13 = FUN_004010b0((void *)(unaff_EBP - 0x69f0),0,0,0,0);
          FUN_004e1200((void *)(unaff_EBP - 0x6730),(int)puVar13);
          iVar57 = 0;
          piVar26 = (int *)(unaff_EBP - 0x6730);
          cVar4 = '\x01';
          iVar11 = 0;
          uVar12 = 6;
          uVar10 = *(uint *)(*(int *)(unaff_EBP - 0x5c94) + 0x14 + *(int *)(unaff_EBP - 0x5c98) * 4)
          ;
          puVar14 = (uint *)(unaff_EBP - 0x80);
          iVar9 = unaff_EDI;
          pvVar17 = (void *)FUN_004013f0((void *)((int)unaff_ESI + 0x1c),0xa04);
          FUN_00524540(unaff_ESI,pvVar17,puVar14,uVar10,uVar12,iVar11,iVar9,cVar4,piVar26,iVar57);
          uVar10 = **(uint **)(unaff_EBP - 0x5c74);
          puVar14 = *(uint **)(unaff_EBP - 0x5c64);
          *(uint *)(unaff_EBP - 0x5c58) = uVar10;
          uVar40 = *puVar14;
          *(uint *)(unaff_EBP - 0x5c64) = uVar40;
          iVar9 = FUN_00406100(unaff_ESI,uVar10,uVar40,unaff_EDI);
          uVar12 = FUN_004061d0(iVar9);
          *(undefined4 *)(unaff_EBP - 0x5c54) = uVar12;
          iVar9 = FUN_00406250(iVar9);
          pvVar17 = *(void **)(unaff_EBP - 0x5c68);
          iVar9 = *(int *)(unaff_EBP - 0x5c54) + iVar9;
          uVar10 = *(uint *)(unaff_EBP - 0x5c64);
          *(int *)(unaff_EBP - 0x5c54) = iVar9;
          puVar16 = FUN_00405fd0(pvVar17,*(uint *)(unaff_EBP - 0x5c58),uVar10,iVar9,unaff_EDI);
          uVar12 = FUN_004061f0((int)puVar16);
          cVar4 = (char)uVar12;
          while (cVar4 == '\0') {
            iVar9 = *(int *)(unaff_EBP - 0x5c54) + -1;
            uVar10 = *(uint *)(unaff_EBP - 0x5c64);
            uVar40 = *(uint *)(unaff_EBP - 0x5c58);
            *(int *)(unaff_EBP - 0x5c54) = iVar9;
            puVar16 = FUN_00405fd0(pvVar17,uVar40,uVar10,iVar9,unaff_EDI);
            uVar12 = FUN_004061f0((int)puVar16);
            cVar4 = (char)uVar12;
          }
          *(int *)(unaff_EBP - 0x5c54) = *(int *)(unaff_EBP - 0x5c54) + 1;
          FUN_0041d8d0((undefined2 *)(unaff_EBP - 0x1b88));
          piVar26 = (int *)(unaff_EBP - 0x6548);
          piVar18 = FUN_004cde40((void *)(unaff_EBP - 0x6560),*(uint *)(unaff_EBP - 0x5c64));
          puVar13 = (undefined4 *)FUN_004ce290(piVar18,piVar26);
          uVar12 = 0;
          uVar58 = 0x3fe00000;
          piVar26 = (int *)(unaff_EBP - 0x6578);
          piVar18 = FUN_004cde40((void *)(unaff_EBP - 26000),*(uint *)(unaff_EBP - 0x5c58));
          puVar19 = (undefined4 *)FUN_004ce290(piVar18,piVar26);
          FUN_004cde40(&stack0xfffffff8,*(uint *)(unaff_EBP - 0x5c54));
          puVar13 = FUN_00406380((void *)(unaff_EBP - 0xf40),*puVar19,puVar19[1],*puVar13,puVar13[1]
                                 ,uVar12,uVar58);
          FUN_00402a40((void *)(unaff_EBP - 0x1a70),puVar13);
          unaff_ESI = *(void **)(unaff_EBP - 0x5c68);
          puVar20 = FUN_0052b1c0((undefined1 *)(unaff_EBP - 0x5b28));
          FUN_00402a70((void *)(unaff_EBP - 0x1b88),puVar20);
          unaff_EDI = *(int *)(unaff_EBP - 0x5c70);
          FUN_0041f5b0((void *)(unaff_EDI + 0x30),(undefined1 *)(unaff_EBP - 0x1b88));
          iVar9 = *(int *)(unaff_EBP - 0x5c98);
          iVar11 = *(int *)(unaff_EBP - 0x5c94);
        }
        if (*(int *)(iVar11 + 0xc + iVar9 * 4) == 0x13) {
          iVar9 = FUN_004013f0((void *)((int)unaff_ESI + 0x1c),0xa05);
          uVar12 = FUN_00402150(iVar9);
          *(undefined4 *)(unaff_EBP - 0x5c74) = uVar12;
          iVar9 = FUN_004013f0((void *)((int)unaff_ESI + 0x1c),0xa05);
          iVar57 = FUN_00402160(iVar9);
          iVar9 = *(int *)(unaff_EBP - 0x5c98);
          iVar11 = *(int *)(unaff_EBP - 0x5c94);
          *(int *)(unaff_EBP - 0x5c50) = iVar57;
          uVar10 = *(uint *)(iVar11 + 0x14 + iVar9 * 4) & 0x80000001;
          bVar45 = uVar10 == 0;
          if ((int)uVar10 < 0) {
            bVar45 = (uVar10 - 1 | 0xfffffffe) == 0xffffffff;
          }
          if (!bVar45) {
            FUN_004c8150((undefined4 *)(unaff_EBP - 0x5c74),(undefined4 *)(unaff_EBP - 0x5c50));
            iVar57 = *(int *)(unaff_EBP - 0x5c50);
            iVar11 = *(int *)(unaff_EBP - 0x5c94);
          }
          FUN_00402990((void *)(unaff_EBP - 0xa4),
                       (**(int **)(unaff_EBP - 0x5cf8) * 0x100 - *(int *)(unaff_EBP - 0x5c74) / 2) +
                       *(int *)(unaff_EBP - 0x5cec) + *(int *)(unaff_EBP - 0x5cf0),
                       (**(int **)(unaff_EBP - 0x5cf4) * 0x100 - iVar57 / 2) +
                       *(int *)(unaff_EBP - 0x5cec) + *(int *)(unaff_EBP - 0x5cac),
                       *(undefined4 *)(iVar11 + 4 + *(int *)(unaff_EBP - 0x5c98) * 4));
          iVar9 = FUN_004013d0((void *)(unaff_EBP - 0xa4),2);
          *(int *)(unaff_EBP - 0x5c50) = iVar9;
          iVar9 = FUN_004013d0((void *)(unaff_EBP - 0xa4),1);
          *(int *)(unaff_EBP - 0x5c64) = iVar9;
          puVar15 = (uint *)FUN_004013d0((void *)(unaff_EBP - 0xa4),0);
          iVar9 = **(int **)(unaff_EBP - 0x5c50);
          puVar14 = *(uint **)(unaff_EBP - 0x5c64);
          *(uint **)(unaff_EBP - 0x5c74) = puVar15;
          puVar16 = FUN_00405fd0(unaff_ESI,*puVar15,*puVar14,iVar9,unaff_EDI);
          uVar12 = FUN_004061f0((int)puVar16);
          cVar4 = (char)uVar12;
          while (cVar4 == '\0') {
            piVar26 = *(int **)(unaff_EBP - 0x5c50);
            *piVar26 = *piVar26 + -1;
            puVar16 = FUN_00405fd0(unaff_ESI,**(uint **)(unaff_EBP - 0x5c74),
                                   **(uint **)(unaff_EBP - 0x5c64),*piVar26,unaff_EDI);
            uVar12 = FUN_004061f0((int)puVar16);
            cVar4 = (char)uVar12;
          }
          puVar13 = FUN_004010b0((void *)(unaff_EBP - 0x68a0),0,0,0,0);
          FUN_004e1200((void *)(unaff_EBP - 0x6338),(int)puVar13);
          iVar57 = 0;
          piVar26 = (int *)(unaff_EBP - 0x6338);
          cVar4 = '\x01';
          iVar11 = 0;
          uVar12 = 6;
          uVar10 = *(uint *)(*(int *)(unaff_EBP - 0x5c94) + 0x14 + *(int *)(unaff_EBP - 0x5c98) * 4)
          ;
          puVar14 = (uint *)(unaff_EBP - 0xa4);
          iVar9 = unaff_EDI;
          pvVar17 = (void *)FUN_004013f0((void *)((int)unaff_ESI + 0x1c),0xa05);
          FUN_00524540(unaff_ESI,pvVar17,puVar14,uVar10,uVar12,iVar11,iVar9,cVar4,piVar26,iVar57);
          uVar10 = **(uint **)(unaff_EBP - 0x5c74);
          puVar14 = *(uint **)(unaff_EBP - 0x5c64);
          *(uint *)(unaff_EBP - 0x5c58) = uVar10;
          uVar40 = *puVar14;
          *(uint *)(unaff_EBP - 0x5c64) = uVar40;
          iVar9 = FUN_00406100(unaff_ESI,uVar10,uVar40,unaff_EDI);
          uVar12 = FUN_004061d0(iVar9);
          *(undefined4 *)(unaff_EBP - 0x5c54) = uVar12;
          iVar9 = FUN_00406250(iVar9);
          pvVar17 = *(void **)(unaff_EBP - 0x5c68);
          iVar9 = *(int *)(unaff_EBP - 0x5c54) + iVar9;
          uVar10 = *(uint *)(unaff_EBP - 0x5c64);
          *(int *)(unaff_EBP - 0x5c54) = iVar9;
          puVar16 = FUN_00405fd0(pvVar17,*(uint *)(unaff_EBP - 0x5c58),uVar10,iVar9,unaff_EDI);
          uVar12 = FUN_004061f0((int)puVar16);
          cVar4 = (char)uVar12;
          while (cVar4 == '\0') {
            iVar9 = *(int *)(unaff_EBP - 0x5c54) + -1;
            uVar10 = *(uint *)(unaff_EBP - 0x5c64);
            uVar40 = *(uint *)(unaff_EBP - 0x5c58);
            *(int *)(unaff_EBP - 0x5c54) = iVar9;
            puVar16 = FUN_00405fd0(pvVar17,uVar40,uVar10,iVar9,unaff_EDI);
            uVar12 = FUN_004061f0((int)puVar16);
            cVar4 = (char)uVar12;
          }
          *(int *)(unaff_EBP - 0x5c54) = *(int *)(unaff_EBP - 0x5c54) + 1;
          FUN_0041d8d0((undefined2 *)(unaff_EBP - 0x33c8));
          piVar26 = (int *)(unaff_EBP - 0x65a8);
          piVar18 = FUN_004cde40((void *)(unaff_EBP - 0x65c0),*(uint *)(unaff_EBP - 0x5c64));
          puVar13 = (undefined4 *)FUN_004ce290(piVar18,piVar26);
          uVar12 = 0;
          uVar58 = 0x3fe00000;
          piVar26 = (int *)(unaff_EBP - 0x65d8);
          piVar18 = FUN_004cde40((void *)(unaff_EBP - 0x65f0),*(uint *)(unaff_EBP - 0x5c58));
          puVar19 = (undefined4 *)FUN_004ce290(piVar18,piVar26);
          FUN_004cde40(&stack0xfffffff8,*(uint *)(unaff_EBP - 0x5c54));
          puVar13 = FUN_00406380((void *)(unaff_EBP - 0xd78),*puVar19,puVar19[1],*puVar13,puVar13[1]
                                 ,uVar12,uVar58);
          FUN_00402a40((void *)(unaff_EBP - 0x32b0),puVar13);
          unaff_ESI = *(void **)(unaff_EBP - 0x5c68);
          puVar20 = FUN_0052b1c0((undefined1 *)(unaff_EBP - 0x5c40));
          FUN_00402a70((void *)(unaff_EBP - 0x33c8),puVar20);
          unaff_EDI = *(int *)(unaff_EBP - 0x5c70);
          FUN_0041f5b0((void *)(unaff_EDI + 0x30),(undefined1 *)(unaff_EBP - 0x33c8));
          iVar9 = *(int *)(unaff_EBP - 0x5c98);
          iVar11 = *(int *)(unaff_EBP - 0x5c94);
        }
        if (*(int *)(iVar11 + 0xc + iVar9 * 4) == 0x14) {
          uVar10 = rand();
          uVar10 = uVar10 & 0x80000001;
          if ((int)uVar10 < 0) {
            uVar10 = (uVar10 - 1 | 0xfffffffe) + 1;
          }
          iVar9 = FUN_004013f0((void *)((int)unaff_ESI + 0x1c),uVar10 + 0x84c);
          *(int *)(unaff_EBP - 0x5c64) = iVar9;
          uVar12 = FUN_00402150(iVar9);
          iVar9 = *(int *)(unaff_EBP - 0x5c64);
          *(undefined4 *)(unaff_EBP - 0x5c74) = uVar12;
          iVar57 = FUN_00402160(iVar9);
          iVar9 = *(int *)(unaff_EBP - 0x5c98);
          iVar11 = *(int *)(unaff_EBP - 0x5c94);
          *(int *)(unaff_EBP - 0x5c50) = iVar57;
          uVar10 = *(uint *)(iVar11 + 0x14 + iVar9 * 4) & 0x80000001;
          bVar45 = uVar10 == 0;
          if ((int)uVar10 < 0) {
            bVar45 = (uVar10 - 1 | 0xfffffffe) == 0xffffffff;
          }
          if (!bVar45) {
            FUN_004c8150((undefined4 *)(unaff_EBP - 0x5c74),(undefined4 *)(unaff_EBP - 0x5c50));
            iVar57 = *(int *)(unaff_EBP - 0x5c50);
            iVar11 = *(int *)(unaff_EBP - 0x5c94);
          }
          FUN_00402990((void *)(unaff_EBP - 0x98),
                       (**(int **)(unaff_EBP - 0x5cf8) * 0x100 - *(int *)(unaff_EBP - 0x5c74) / 2) +
                       *(int *)(unaff_EBP - 0x5cec) + *(int *)(unaff_EBP - 0x5cf0),
                       (**(int **)(unaff_EBP - 0x5cf4) * 0x100 - iVar57 / 2) +
                       *(int *)(unaff_EBP - 0x5cec) + *(int *)(unaff_EBP - 0x5cac),
                       *(undefined4 *)(iVar11 + 4 + *(int *)(unaff_EBP - 0x5c98) * 4));
          iVar9 = FUN_004013d0((void *)(unaff_EBP - 0x98),2);
          *(int *)(unaff_EBP - 0x5c50) = iVar9;
          iVar9 = FUN_004013d0((void *)(unaff_EBP - 0x98),1);
          *(int *)(unaff_EBP - 0x5c74) = iVar9;
          puVar15 = (uint *)FUN_004013d0((void *)(unaff_EBP - 0x98),0);
          iVar9 = **(int **)(unaff_EBP - 0x5c50);
          puVar14 = *(uint **)(unaff_EBP - 0x5c74);
          *(uint **)(unaff_EBP - 0x5c48) = puVar15;
          puVar16 = FUN_00405fd0(unaff_ESI,*puVar15,*puVar14,iVar9,unaff_EDI);
          uVar12 = FUN_004061f0((int)puVar16);
          cVar4 = (char)uVar12;
          while (cVar4 == '\0') {
            piVar26 = *(int **)(unaff_EBP - 0x5c50);
            *piVar26 = *piVar26 + -1;
            puVar16 = FUN_00405fd0(unaff_ESI,**(uint **)(unaff_EBP - 0x5c48),
                                   **(uint **)(unaff_EBP - 0x5c74),*piVar26,unaff_EDI);
            uVar12 = FUN_004061f0((int)puVar16);
            cVar4 = (char)uVar12;
          }
          puVar13 = FUN_004010b0((void *)(unaff_EBP - 0x68c0),0,0,0,0);
          FUN_004e1200((void *)(unaff_EBP - 0x65e8),(int)puVar13);
          FUN_00524540(unaff_ESI,*(void **)(unaff_EBP - 0x5c64),(uint *)(unaff_EBP - 0x98),
                       *(uint *)(*(int *)(unaff_EBP - 0x5c94) + 0x14 +
                                *(int *)(unaff_EBP - 0x5c98) * 4),6,0,unaff_EDI,'\x01',
                       (int *)(unaff_EBP - 0x65e8),0);
          iVar9 = *(int *)(unaff_EBP - 0x5c98);
          iVar11 = *(int *)(unaff_EBP - 0x5c94);
        }
        if (*(int *)(iVar11 + 0xc + iVar9 * 4) == 0x12) {
          uVar10 = rand();
          uVar10 = uVar10 & 0x80000003;
          if ((int)uVar10 < 0) {
            uVar10 = (uVar10 - 1 | 0xfffffffc) + 1;
          }
          iVar9 = FUN_004013f0((void *)((int)unaff_ESI + 0x1c),uVar10 + 0x84c);
          *(int *)(unaff_EBP - 0x5c64) = iVar9;
          uVar12 = FUN_00402150(iVar9);
          iVar9 = *(int *)(unaff_EBP - 0x5c64);
          *(undefined4 *)(unaff_EBP - 0x5c74) = uVar12;
          iVar57 = FUN_00402160(iVar9);
          iVar9 = *(int *)(unaff_EBP - 0x5c98);
          iVar11 = *(int *)(unaff_EBP - 0x5c94);
          *(int *)(unaff_EBP - 0x5c50) = iVar57;
          uVar10 = *(uint *)(iVar11 + 0x14 + iVar9 * 4) & 0x80000001;
          bVar45 = uVar10 == 0;
          if ((int)uVar10 < 0) {
            bVar45 = (uVar10 - 1 | 0xfffffffe) == 0xffffffff;
          }
          if (!bVar45) {
            FUN_004c8150((undefined4 *)(unaff_EBP - 0x5c74),(undefined4 *)(unaff_EBP - 0x5c50));
            iVar57 = *(int *)(unaff_EBP - 0x5c50);
            iVar11 = *(int *)(unaff_EBP - 0x5c94);
          }
          FUN_00402990((void *)(unaff_EBP - 0xb0),
                       (**(int **)(unaff_EBP - 0x5cf8) * 0x100 - *(int *)(unaff_EBP - 0x5c74) / 2) +
                       *(int *)(unaff_EBP - 0x5cec) + *(int *)(unaff_EBP - 0x5cf0),
                       (**(int **)(unaff_EBP - 0x5cf4) * 0x100 - iVar57 / 2) +
                       *(int *)(unaff_EBP - 0x5cec) + *(int *)(unaff_EBP - 0x5cac),
                       *(undefined4 *)(iVar11 + 4 + *(int *)(unaff_EBP - 0x5c98) * 4));
          iVar9 = FUN_004013d0((void *)(unaff_EBP - 0xb0),2);
          *(int *)(unaff_EBP - 0x5c50) = iVar9;
          iVar9 = FUN_004013d0((void *)(unaff_EBP - 0xb0),1);
          *(int *)(unaff_EBP - 0x5c74) = iVar9;
          puVar15 = (uint *)FUN_004013d0((void *)(unaff_EBP - 0xb0),0);
          iVar9 = **(int **)(unaff_EBP - 0x5c50);
          puVar14 = *(uint **)(unaff_EBP - 0x5c74);
          *(uint **)(unaff_EBP - 0x5c48) = puVar15;
          puVar16 = FUN_00405fd0(unaff_ESI,*puVar15,*puVar14,iVar9,unaff_EDI);
          uVar12 = FUN_004061f0((int)puVar16);
          cVar4 = (char)uVar12;
          while (cVar4 == '\0') {
            piVar26 = *(int **)(unaff_EBP - 0x5c50);
            *piVar26 = *piVar26 + -1;
            puVar16 = FUN_00405fd0(unaff_ESI,**(uint **)(unaff_EBP - 0x5c48),
                                   **(uint **)(unaff_EBP - 0x5c74),*piVar26,unaff_EDI);
            uVar12 = FUN_004061f0((int)puVar16);
            cVar4 = (char)uVar12;
          }
          puVar13 = FUN_004010b0((void *)(unaff_EBP - 0x68e0),0,0,0,0);
          FUN_004e1200((void *)(unaff_EBP - 0x6350),(int)puVar13);
          FUN_00524540(unaff_ESI,*(void **)(unaff_EBP - 0x5c64),(uint *)(unaff_EBP - 0xb0),
                       *(uint *)(*(int *)(unaff_EBP - 0x5c94) + 0x14 +
                                *(int *)(unaff_EBP - 0x5c98) * 4),6,0,unaff_EDI,'\x01',
                       (int *)(unaff_EBP - 0x6350),0);
        }
        iVar11 = *(int *)(unaff_EBP - 0x5ccc);
        iVar9 = *(int *)(unaff_EBP - 0x5cf0);
        iVar57 = *(int *)(unaff_EBP - 0x5c80);
        iVar41 = *(int *)(unaff_EBP - 0x5cc0) + 1;
        *(int *)(unaff_EBP - 0x5cc0) = iVar41;
        if (iVar11 <= iVar41) {
          iVar57 = iVar57 + 1;
          *(int *)(unaff_EBP - 0x5c80) = iVar57;
          if (iVar11 <= iVar57) {
            iVar9 = 0;
            *(undefined4 *)(unaff_EBP - 0x5cd4) = 0;
            if (iVar11 < 1) goto LAB_004f0046;
            *(undefined4 *)(unaff_EBP - 0x5cc0) = 0;
            goto LAB_004ef260;
          }
          iVar41 = 0;
          iVar9 = (iVar57 * 0x100) / *(int *)(unaff_EBP - 0x5ccc);
          *(undefined4 *)(unaff_EBP - 0x5cc0) = 0;
          iVar11 = *(int *)(unaff_EBP - 0x5ccc);
          *(int *)(unaff_EBP - 0x5cf0) = iVar9;
        }
        iVar23 = *(int *)(unaff_EBP - 0x5d28);
        iVar57 = iVar41 * iVar11 + iVar57;
        *(int *)(unaff_EBP - 0x5c94) = iVar23;
        *(int *)(unaff_EBP - 0x5c98) = iVar57 * 7;
        if (*(int *)(iVar23 + 0xc + iVar57 * 0x1c) == 8) {
          iVar9 = *(int *)(unaff_EBP - 0x5cc0);
          iVar11 = *(int *)(unaff_EBP - 0x5ccc);
          iVar57 = *(int *)(unaff_EDI + 100);
          iVar41 = *(int *)(unaff_EBP - 0x5ce4) / 2;
          uVar40 = *(int *)(unaff_EDI + 0x60) * 0x100 + iVar41 + *(int *)(unaff_EBP - 0x5cf0);
          *(uint *)(unaff_EBP - 0x5c58) = uVar40;
          pvVar17 = *(void **)(unaff_EBP - 0x5c68);
          uVar10 = iVar57 * 0x100 + (iVar9 << 8) / iVar11 + iVar41;
          *(uint *)(unaff_EBP - 0x5c54) = uVar10;
          iVar9 = FUN_00406100(pvVar17,uVar40,uVar10,unaff_EDI);
          iVar57 = *(int *)(iVar9 + 0x1c) + *(int *)(iVar9 + 0x10) + 1;
          iVar9 = *(int *)(unaff_EBP - 0x5c54);
          iVar23 = uVar40 - 2;
          iVar11 = *(int *)(unaff_EBP - 0x5c58);
          *(int *)(unaff_EBP - 0x5c74) = iVar57;
          *(int *)(unaff_EBP - 0x5c78) = iVar57;
          iVar41 = 4;
          *(int *)(unaff_EBP - 0x5c50) = iVar9 - iVar11;
          pvVar17 = *(void **)(unaff_EBP - 0x5c68);
          *(undefined4 *)(unaff_EBP - 0x5c64) = 4;
          *(int *)(unaff_EBP - 0x5cc4) = iVar23;
          do {
            *(int *)(unaff_EBP - 0xd0) = iVar41;
            *(int *)(unaff_EBP - 0xcc) = iVar41;
            iVar9 = *(int *)(unaff_EBP - 0x5c50);
            *(undefined2 *)(unaff_EBP - 0x5d48) = 0xdcdc;
            *(undefined1 *)(unaff_EBP - 0x5d46) = 0xdc;
            *(undefined4 *)(unaff_EBP - 200) = 1;
            FUN_00513400(pvVar17,iVar23,iVar9 + iVar23,iVar57,(int *)(unaff_EBP - 0xd0),
                         (byte *)(unaff_EBP - 0x5d48),0.0,unaff_EDI,0);
            iVar41 = *(int *)(unaff_EBP - 0x5c64) + 4;
            iVar57 = *(int *)(unaff_EBP - 0x5c78) + -1;
            iVar23 = *(int *)(unaff_EBP - 0x5cc4) + -2;
            *(int *)(unaff_EBP - 0x5c64) = iVar41;
            *(int *)(unaff_EBP - 0x5c78) = iVar57;
            *(int *)(unaff_EBP - 0x5cc4) = iVar23;
          } while (iVar41 < 0x18);
          FUN_004c84b0(unaff_EBP - 0x8b0);
          uVar10 = *(uint *)(unaff_EBP - 0x5c74);
          uVar40 = *(uint *)(unaff_EBP - 0x5c54);
          uVar42 = ((int)uVar10 >> 0x1f) << 0x10 | uVar10 >> 0x10;
          *(uint *)(unaff_EBP - 0x5c50) = uVar42;
          *(uint *)(unaff_EBP - 0x5e00) = uVar42;
          uVar42 = ((int)uVar40 >> 0x1f) << 0x10 | uVar40 >> 0x10;
          *(uint *)(unaff_EBP - 0x5cc4) = uVar40 << 0x10;
          *(uint *)(unaff_EBP - 0x5e10) = uVar40 << 0x10;
          uVar40 = *(uint *)(unaff_EBP - 0x5c58);
          *(uint *)(unaff_EBP - 0x5c78) = uVar42;
          *(uint *)(unaff_EBP - 0x5e0c) = uVar42;
          uVar42 = ((int)uVar40 >> 0x1f) << 0x10 | uVar40 >> 0x10;
          uVar10 = uVar10 << 0x10;
          iVar9 = uVar40 << 0x10;
          *(int *)(unaff_EBP - 0x5c74) = iVar9;
          *(int *)(unaff_EBP - 0x5e38) = iVar9;
          *(int *)(unaff_EBP - 0x13c) = iVar9;
          *(int *)(unaff_EBP - 0x8a8) = iVar9;
          *(uint *)(unaff_EBP - 0x5c58) = uVar42;
          *(undefined4 *)(unaff_EBP - 0x8a4) = *(undefined4 *)(unaff_EBP - 0x5c58);
          uVar12 = *(undefined4 *)(unaff_EBP - 0x5cc4);
          *(uint *)(unaff_EBP - 0x5e34) = uVar42;
          *(uint *)(unaff_EBP - 0x138) = uVar42;
          uVar58 = *(undefined4 *)(unaff_EBP - 0x5cc4);
          *(undefined4 *)(unaff_EBP - 0x8a0) = uVar12;
          uVar12 = *(undefined4 *)(unaff_EBP - 0x5c78);
          *(undefined4 *)(unaff_EBP - 0x134) = uVar58;
          uVar58 = *(undefined4 *)(unaff_EBP - 0x5c78);
          *(undefined4 *)(unaff_EBP - 0x89c) = uVar12;
          *(undefined4 *)(unaff_EBP - 0x44) = 0x41400000;
          uVar12 = *(undefined4 *)(unaff_EBP - 0x44);
          *(undefined4 *)(unaff_EBP - 0x130) = uVar58;
          uVar40 = *(uint *)(unaff_EBP - 0x5c50);
          *(undefined4 *)(unaff_EBP - 0x4c) = 0x40400000;
          *(undefined4 *)(unaff_EBP - 0x48) = 0x40400000;
          uVar50 = *(undefined8 *)(unaff_EBP - 0x4c);
          *(undefined4 *)(unaff_EBP - 0x884) = uVar12;
          uVar42 = *(uint *)(unaff_EBP - 0x5c74);
          *(undefined1 *)(unaff_EBP - 4) = 6;
          *(undefined4 *)(unaff_EBP - 0x8b0) = 0;
          *(uint *)(unaff_EBP - 0x5e04) = uVar10;
          *(uint *)(unaff_EBP - 300) = uVar10;
          *(uint *)(unaff_EBP - 0x128) = uVar40;
          *(undefined8 *)(unaff_EBP - 0x88c) = uVar50;
          while( true ) {
            *(uint *)(unaff_EBP - 0x894) = uVar40;
            uVar53 = *(uint *)(unaff_EBP - 0x5c78);
            uVar1 = *(uint *)(unaff_EBP - 0x5cc4);
            uVar2 = *(uint *)(unaff_EBP - 0x5c58);
            *(uint *)(unaff_EBP - 0x898) = uVar10;
            iVar9 = FUN_00406050(pvVar17,uVar42,uVar2,uVar1,uVar53,uVar10,uVar40,unaff_EDI);
            if (((*(byte *)(iVar9 + 3) & 0x1f) == 0) || ((*(byte *)(iVar9 + 3) & 0x1f) == 2)) break;
            uVar40 = *(uint *)(unaff_EBP - 0x898);
            iVar9 = *(int *)(unaff_EBP - 0x894);
            *(undefined4 *)(unaff_EBP - 0x5c78) = *(undefined4 *)(unaff_EBP - 0x89c);
            *(undefined4 *)(unaff_EBP - 0x5cc4) = *(undefined4 *)(unaff_EBP - 0x8a0);
            uVar10 = uVar40 + 0x10000;
            *(undefined4 *)(unaff_EBP - 0x5c58) = *(undefined4 *)(unaff_EBP - 0x8a4);
            uVar42 = *(uint *)(unaff_EBP - 0x8a8);
            uVar40 = iVar9 + (uint)(0xfffeffff < uVar40);
          }
          uVar10 = rand();
          uVar10 = uVar10 & 0x80000003;
          if ((int)uVar10 < 0) {
            uVar10 = (uVar10 - 1 | 0xfffffffc) + 1;
          }
          *(uint *)(unaff_EBP - 0x890) = uVar10;
          FUN_004d6670((void *)(unaff_EDI + 0xc),(void **)(unaff_EBP - 0x8b0));
          iVar9 = *(int *)(unaff_EBP - 0x868);
          *(undefined1 *)(unaff_EBP - 4) = 5;
          if (iVar9 != 0) {
            std::_Container_base0::_Orphan_all((_Container_base0 *)(unaff_EBP - 0x868));
            FUN_00406310(*(undefined4 **)(unaff_EBP - 0x868),*(undefined4 **)(unaff_EBP - 0x864));
            operator_delete(*(void **)(unaff_EBP - 0x868));
            *(undefined4 *)(unaff_EBP - 0x868) = 0;
            *(undefined4 *)(unaff_EBP - 0x864) = 0;
            *(undefined4 *)(unaff_EBP - 0x860) = 0;
          }
          iVar9 = *(int *)(unaff_EBP - 0x5cf0);
        }
        else {
          pvVar17 = *(void **)(unaff_EBP - 0x5c68);
        }
        if (*(int *)(*(int *)(unaff_EBP - 0x5c94) + 0xc + *(int *)(unaff_EBP - 0x5c98) * 4) == 9) {
          *(int *)(unaff_EBP - 0x5c8c) = *(int *)(unaff_EDI + 0x60) * 0x100 + iVar9;
          iVar9 = *(int *)(unaff_EBP - 0x5cc0);
          iVar11 = *(int *)(unaff_EBP - 0x5ccc);
          iVar57 = *(int *)(unaff_EDI + 100);
          *(undefined4 *)(unaff_EBP - 0x38) = 0;
          iVar11 = iVar57 * 0x100 + (iVar9 << 8) / iVar11;
          iVar9 = *(int *)(unaff_EBP - 0x5ce4) / 2;
          *(int *)(unaff_EBP - 0x5c90) = iVar9;
          uVar10 = iVar11 + iVar9;
          puVar13 = (undefined4 *)(iVar9 + *(int *)(unaff_EBP - 0x5c8c));
          *(int *)(unaff_EBP - 0x5c9c) = iVar11;
          *(uint *)(unaff_EBP - 0x5c58) = uVar10;
          *(undefined4 **)(unaff_EBP - 0x5c64) = puVar13;
          *(undefined4 **)(unaff_EBP - 0x40) = puVar13;
          *(uint *)(unaff_EBP - 0x3c) = uVar10;
          puVar19 = (undefined4 *)0x4e3e89;
          iVar9 = FUN_00406100(pvVar17,(uint)puVar13,uVar10,unaff_EDI);
          if (iVar9 != 0) {
            *(int *)(unaff_EBP - 0x38) = *(int *)(iVar9 + 0x1c) + *(int *)(iVar9 + 0x10);
            FUN_0042feb0((void *)(unaff_EBP - 0x5d80),(undefined4 *)(unaff_EBP - 0x40));
          }
          iVar9 = rand();
          if (iVar9 % 5 != 0) {
            uVar10 = *(uint *)(*(int *)(unaff_EBP - 0x5c94) + 4 + *(int *)(unaff_EBP - 0x5c98) * 4);
            iVar11 = 2;
            *(uint *)(unaff_EBP - 0x5d88) = uVar10 << 0x10;
            *(uint *)(unaff_EBP - 0x5d84) = ((int)uVar10 >> 0x1f) << 0x10 | uVar10 >> 0x10;
            iVar9 = rand();
            uVar10 = *(int *)(unaff_EBP - 0x5c9c) + 6 + iVar9 % 3;
            uVar40 = *(int *)(unaff_EBP - 0x5c90) + *(int *)(unaff_EBP - 0x5c8c) + -7;
            uVar42 = ((int)uVar40 >> 0x1f) << 0x10 | uVar40 >> 0x10;
            *(uint *)(unaff_EBP - 0x5e24) = uVar40 * 0x10000;
            *(uint *)(unaff_EBP - 0xf4) = uVar40 * 0x10000;
            *(undefined4 *)(unaff_EBP - 0xe4) = *(undefined4 *)(unaff_EBP - 0x5d88);
            uVar40 = ((int)uVar10 >> 0x1f) << 0x10 | uVar10 >> 0x10;
            *(undefined4 *)(unaff_EBP - 0xe0) = *(undefined4 *)(unaff_EBP - 0x5d84);
            *(uint *)(unaff_EBP - 0x5e48) = uVar10 * 0x10000;
            *(uint *)(unaff_EBP - 0x5e44) = uVar40;
            *(uint *)(unaff_EBP - 0x5e20) = uVar42;
            *(uint *)(unaff_EBP - 0xf0) = uVar42;
            *(uint *)(unaff_EBP - 0xec) = uVar10 * 0x10000;
            *(uint *)(unaff_EBP - 0xe8) = uVar40;
            FUN_004f3630((int *)(unaff_EBP - 0x1a40),(int *)(unaff_EBP - 0xf4),iVar11);
            pvVar17 = *(void **)(unaff_EBP - 0x5c68);
            puVar13 = (undefined4 *)(unaff_EBP - 0x1a40);
            *(undefined1 *)(unaff_EBP - 4) = 7;
            puVar19 = (undefined4 *)0x4e3f9c;
            cVar4 = FUN_005287b0(pvVar17,(int)puVar13,unaff_EDI,'\x01');
            if (cVar4 != '\0') {
              FUN_004d6670((void *)(unaff_EDI + 0xc),(void **)(unaff_EBP - 0x1a40));
            }
            iVar9 = *(int *)(unaff_EBP - 0x19f8);
            *(undefined1 *)(unaff_EBP - 4) = 5;
            if (iVar9 != 0) {
              std::_Container_base0::_Orphan_all((_Container_base0 *)(unaff_EBP - 0x19f8));
              puVar13 = *(undefined4 **)(unaff_EBP - 0x19f4);
              puVar19 = *(undefined4 **)(unaff_EBP - 0x19f8);
              FUN_00406310(puVar19,puVar13);
              operator_delete(*(void **)(unaff_EBP - 0x19f8));
              *(undefined4 *)(unaff_EBP - 0x19f8) = 0;
              *(undefined4 *)(unaff_EBP - 0x19f4) = 0;
              *(undefined4 *)(unaff_EBP - 0x19f0) = 0;
            }
          }
          iVar9 = rand();
          if (iVar9 % 5 != 0) {
            uVar10 = *(uint *)(*(int *)(unaff_EBP - 0x5c94) + 4 + *(int *)(unaff_EBP - 0x5c98) * 4);
            iVar11 = 2;
            *(uint *)(unaff_EBP - 0x5d94) = uVar10 << 0x10;
            *(uint *)(unaff_EBP - 0x5d90) = ((int)uVar10 >> 0x1f) << 0x10 | uVar10 >> 0x10;
            iVar9 = rand();
            uVar40 = *(int *)(unaff_EBP - 0x5c9c) + 6 + iVar9 % 3;
            uVar10 = *(uint *)(unaff_EBP - 0x5c64);
            uVar42 = ((int)uVar10 >> 0x1f) << 0x10 | uVar10 >> 0x10;
            *(uint *)(unaff_EBP - 0x5e1c) = uVar10 << 0x10;
            *(uint *)(unaff_EBP - 0x10c) = uVar10 << 0x10;
            *(undefined4 *)(unaff_EBP - 0xfc) = *(undefined4 *)(unaff_EBP - 0x5d94);
            uVar10 = ((int)uVar40 >> 0x1f) << 0x10 | uVar40 >> 0x10;
            *(undefined4 *)(unaff_EBP - 0xf8) = *(undefined4 *)(unaff_EBP - 0x5d90);
            *(uint *)(unaff_EBP - 0x5df4) = uVar40 * 0x10000;
            *(uint *)(unaff_EBP - 0x5df0) = uVar10;
            *(uint *)(unaff_EBP - 0x5e18) = uVar42;
            *(uint *)(unaff_EBP - 0x108) = uVar42;
            *(uint *)(unaff_EBP - 0x104) = uVar40 * 0x10000;
            *(uint *)(unaff_EBP - 0x100) = uVar10;
            FUN_004f3630((int *)(unaff_EBP - 0x1730),(int *)(unaff_EBP - 0x10c),iVar11);
            pvVar17 = *(void **)(unaff_EBP - 0x5c68);
            puVar13 = (undefined4 *)(unaff_EBP - 0x1730);
            *(undefined1 *)(unaff_EBP - 4) = 8;
            puVar19 = (undefined4 *)0x4e40fc;
            cVar4 = FUN_005287b0(pvVar17,(int)puVar13,unaff_EDI,'\x01');
            if (cVar4 != '\0') {
              FUN_004d6670((void *)(unaff_EDI + 0xc),(void **)(unaff_EBP - 0x1730));
            }
            iVar9 = *(int *)(unaff_EBP - 0x16e8);
            *(undefined1 *)(unaff_EBP - 4) = 5;
            if (iVar9 != 0) {
              std::_Container_base0::_Orphan_all((_Container_base0 *)(unaff_EBP - 0x16e8));
              puVar13 = *(undefined4 **)(unaff_EBP - 0x16e4);
              puVar19 = *(undefined4 **)(unaff_EBP - 0x16e8);
              FUN_00406310(puVar19,puVar13);
              operator_delete(*(void **)(unaff_EBP - 0x16e8));
              *(undefined4 *)(unaff_EBP - 0x16e8) = 0;
              *(undefined4 *)(unaff_EBP - 0x16e4) = 0;
              *(undefined4 *)(unaff_EBP - 0x16e0) = 0;
            }
          }
          iVar9 = rand();
          if (iVar9 % 5 != 0) {
            uVar10 = *(uint *)(*(int *)(unaff_EBP - 0x5c94) + 4 + *(int *)(unaff_EBP - 0x5c98) * 4);
            iVar11 = 2;
            *(uint *)(unaff_EBP - 0x5da8) = uVar10 << 0x10;
            *(uint *)(unaff_EBP - 0x5da4) = ((int)uVar10 >> 0x1f) << 0x10 | uVar10 >> 0x10;
            iVar9 = rand();
            uVar10 = *(int *)(unaff_EBP - 0x5c9c) + 6 + iVar9 % 3;
            uVar40 = *(int *)(unaff_EBP - 0x5c90) + *(int *)(unaff_EBP - 0x5c8c) + 7;
            uVar42 = ((int)uVar40 >> 0x1f) << 0x10 | uVar40 >> 0x10;
            *(uint *)(unaff_EBP - 0x5dfc) = uVar40 * 0x10000;
            *(uint *)(unaff_EBP - 0x124) = uVar40 * 0x10000;
            *(undefined4 *)(unaff_EBP - 0x114) = *(undefined4 *)(unaff_EBP - 0x5da8);
            uVar40 = ((int)uVar10 >> 0x1f) << 0x10 | uVar10 >> 0x10;
            *(undefined4 *)(unaff_EBP - 0x110) = *(undefined4 *)(unaff_EBP - 0x5da4);
            *(uint *)(unaff_EBP - 0x5e2c) = uVar10 * 0x10000;
            *(uint *)(unaff_EBP - 0x5e28) = uVar40;
            *(uint *)(unaff_EBP - 0x5df8) = uVar42;
            *(uint *)(unaff_EBP - 0x120) = uVar42;
            *(uint *)(unaff_EBP - 0x11c) = uVar10 * 0x10000;
            *(uint *)(unaff_EBP - 0x118) = uVar40;
            FUN_004f3630((int *)(unaff_EBP - 0x18b8),(int *)(unaff_EBP - 0x124),iVar11);
            pvVar17 = *(void **)(unaff_EBP - 0x5c68);
            puVar13 = (undefined4 *)(unaff_EBP - 0x18b8);
            *(undefined1 *)(unaff_EBP - 4) = 9;
            puVar19 = (undefined4 *)0x4e4267;
            cVar4 = FUN_005287b0(pvVar17,(int)puVar13,unaff_EDI,'\x01');
            if (cVar4 != '\0') {
              FUN_004d6670((void *)(unaff_EDI + 0xc),(void **)(unaff_EBP - 0x18b8));
            }
            iVar9 = *(int *)(unaff_EBP - 0x1870);
            *(undefined1 *)(unaff_EBP - 4) = 5;
            if (iVar9 != 0) {
              std::_Container_base0::_Orphan_all((_Container_base0 *)(unaff_EBP - 0x1870));
              puVar13 = *(undefined4 **)(unaff_EBP - 0x186c);
              puVar19 = *(undefined4 **)(unaff_EBP - 0x1870);
              FUN_00406310(puVar19,puVar13);
              operator_delete(*(void **)(unaff_EBP - 0x1870));
              *(undefined4 *)(unaff_EBP - 0x1870) = 0;
              *(undefined4 *)(unaff_EBP - 0x186c) = 0;
              *(undefined4 *)(unaff_EBP - 0x1868) = 0;
            }
          }
          iVar9 = rand();
          if (iVar9 % 5 != 0) {
            iVar11 = 0;
            uVar58 = 0x4e4311;
            FUN_004cde40(&stack0xfffffff0,
                         *(uint *)(*(int *)(unaff_EBP - 0x5c94) + 4 +
                                  *(int *)(unaff_EBP - 0x5c98) * 4));
            uVar51 = 0x4e4317;
            iVar9 = rand();
            uVar10 = (*(int *)(unaff_EBP - 0x5ce4) - iVar9 % 3) + *(int *)(unaff_EBP - 0x5c9c) + -6;
            uVar12 = 0x4e433d;
            FUN_004cde40(&stack0xffffffe8,uVar10);
            FUN_004cde40(&stack0xffffffe0,
                         *(int *)(unaff_EBP - 0x5c90) + -7 + *(int *)(unaff_EBP - 0x5c8c));
            piVar26 = FUN_00406380((void *)(unaff_EBP - 0xe08),uVar12,uVar10,uVar58,uVar51,puVar19,
                                   puVar13);
            FUN_004f3630((int *)(unaff_EBP - 0x4008),piVar26,iVar11);
            puVar13 = (undefined4 *)(unaff_EBP - 0x4008);
            *(undefined1 *)(unaff_EBP - 4) = 10;
            puVar19 = (undefined4 *)0x4e4387;
            cVar4 = FUN_005287b0(pvVar17,(int)puVar13,unaff_EDI,'\x01');
            if (cVar4 != '\0') {
              FUN_004d6670((void *)(unaff_EDI + 0xc),(void **)(unaff_EBP - 0x4008));
            }
            *(undefined1 *)(unaff_EBP - 4) = 5;
            FUN_004cd8f0(unaff_EBP - 0x4008);
          }
          iVar9 = rand();
          if (iVar9 % 5 != 0) {
            iVar11 = 0;
            uVar58 = 0x4e43dd;
            FUN_004cde40(&stack0xfffffff0,
                         *(uint *)(*(int *)(unaff_EBP - 0x5c94) + 4 +
                                  *(int *)(unaff_EBP - 0x5c98) * 4));
            uVar51 = 0x4e43e3;
            iVar9 = rand();
            uVar10 = (*(int *)(unaff_EBP - 0x5ce4) - iVar9 % 3) + *(int *)(unaff_EBP - 0x5c9c) + -6;
            uVar12 = 0x4e4409;
            FUN_004cde40(&stack0xffffffe8,uVar10);
            FUN_004cde40(&stack0xffffffe0,*(uint *)(unaff_EBP - 0x5c64));
            piVar26 = FUN_00406380((void *)(unaff_EBP - 0x10a8),uVar12,uVar10,uVar58,uVar51,puVar19,
                                   puVar13);
            FUN_004f3630((int *)(unaff_EBP - 0x5888),piVar26,iVar11);
            puVar13 = (undefined4 *)(unaff_EBP - 0x5888);
            *(undefined1 *)(unaff_EBP - 4) = 0xb;
            puVar19 = (undefined4 *)0x4e4449;
            cVar4 = FUN_005287b0(pvVar17,(int)puVar13,unaff_EDI,'\x01');
            if (cVar4 != '\0') {
              FUN_004d6670((void *)(unaff_EDI + 0xc),(void **)(unaff_EBP - 0x5888));
            }
            *(undefined1 *)(unaff_EBP - 4) = 5;
            FUN_004cd8f0(unaff_EBP - 0x5888);
          }
          iVar9 = rand();
          if (iVar9 % 5 != 0) {
            iVar11 = 0;
            uVar58 = 0x4e449f;
            FUN_004cde40(&stack0xfffffff0,
                         *(uint *)(*(int *)(unaff_EBP - 0x5c94) + 4 +
                                  *(int *)(unaff_EBP - 0x5c98) * 4));
            uVar51 = 0x4e44a5;
            iVar9 = rand();
            uVar10 = (*(int *)(unaff_EBP - 0x5ce4) - iVar9 % 3) + *(int *)(unaff_EBP - 0x5c9c) + -6;
            uVar12 = 0x4e44cb;
            FUN_004cde40(&stack0xffffffe8,uVar10);
            FUN_004cde40(&stack0xffffffe0,
                         *(int *)(unaff_EBP - 0x5c90) + 7 + *(int *)(unaff_EBP - 0x5c8c));
            piVar26 = FUN_00406380((void *)(unaff_EBP - 0xe38),uVar12,uVar10,uVar58,uVar51,puVar19,
                                   puVar13);
            FUN_004f3630((int *)(unaff_EBP - 0x4318),piVar26,iVar11);
            puVar13 = (undefined4 *)(unaff_EBP - 0x4318);
            *(undefined1 *)(unaff_EBP - 4) = 0xc;
            puVar19 = (undefined4 *)0x4e4515;
            cVar4 = FUN_005287b0(pvVar17,(int)puVar13,unaff_EDI,'\x01');
            if (cVar4 != '\0') {
              FUN_004d6670((void *)(unaff_EDI + 0xc),(void **)(unaff_EBP - 0x4318));
            }
            *(undefined1 *)(unaff_EBP - 4) = 5;
            FUN_004cd8f0(unaff_EBP - 0x4318);
          }
          iVar9 = rand();
          if (iVar9 % 5 != 0) {
            iVar11 = 3;
            uVar10 = *(uint *)(*(int *)(unaff_EBP - 0x5c94) + 4 + *(int *)(unaff_EBP - 0x5c98) * 4);
            uVar51 = 0x4e456b;
            FUN_004cde40(&stack0xfffffff0,uVar10);
            uVar12 = 0x4e4587;
            FUN_004cde40(&stack0xffffffe8,
                         *(int *)(unaff_EBP - 0x5c90) + *(int *)(unaff_EBP - 0x5c9c) + -7);
            uVar58 = 0x4e458d;
            iVar9 = rand();
            FUN_004cde40(&stack0xffffffe0,
                         (*(int *)(unaff_EBP - 0x5ce4) - iVar9 % 3) +
                         *(int *)(unaff_EBP - 0x5c8c) + -6);
            piVar26 = FUN_00406380((void *)(unaff_EBP - 0x10d8),uVar12,uVar58,uVar51,uVar10,puVar19,
                                   puVar13);
            FUN_004f3630((int *)(unaff_EBP - 0x4f58),piVar26,iVar11);
            puVar13 = (undefined4 *)(unaff_EBP - 0x4f58);
            *(undefined1 *)(unaff_EBP - 4) = 0xd;
            puVar19 = (undefined4 *)0x4e45e3;
            cVar4 = FUN_005287b0(pvVar17,(int)puVar13,unaff_EDI,'\x01');
            if (cVar4 != '\0') {
              FUN_004d6670((void *)(unaff_EDI + 0xc),(void **)(unaff_EBP - 0x4f58));
            }
            *(undefined1 *)(unaff_EBP - 4) = 5;
            FUN_004cd8f0(unaff_EBP - 0x4f58);
          }
          iVar9 = rand();
          if (iVar9 % 5 != 0) {
            iVar11 = 3;
            uVar10 = *(uint *)(*(int *)(unaff_EBP - 0x5c94) + 4 + *(int *)(unaff_EBP - 0x5c98) * 4);
            uVar51 = 0x4e4639;
            FUN_004cde40(&stack0xfffffff0,uVar10);
            uVar12 = 0x4e4649;
            FUN_004cde40(&stack0xffffffe8,*(uint *)(unaff_EBP - 0x5c58));
            uVar58 = 0x4e464f;
            iVar9 = rand();
            FUN_004cde40(&stack0xffffffe0,
                         (*(int *)(unaff_EBP - 0x5ce4) - iVar9 % 3) +
                         *(int *)(unaff_EBP - 0x5c8c) + -6);
            piVar26 = FUN_00406380((void *)(unaff_EBP - 0xe68),uVar12,uVar58,uVar51,uVar10,puVar19,
                                   puVar13);
            FUN_004f3630((int *)(unaff_EBP - 0x36d8),piVar26,iVar11);
            puVar13 = (undefined4 *)(unaff_EBP - 0x36d8);
            *(undefined1 *)(unaff_EBP - 4) = 0xe;
            puVar19 = (undefined4 *)0x4e46a5;
            cVar4 = FUN_005287b0(pvVar17,(int)puVar13,unaff_EDI,'\x01');
            if (cVar4 != '\0') {
              FUN_004d6670((void *)(unaff_EDI + 0xc),(void **)(unaff_EBP - 0x36d8));
            }
            *(undefined1 *)(unaff_EBP - 4) = 5;
            FUN_004cd8f0(unaff_EBP - 0x36d8);
          }
          iVar9 = rand();
          if (iVar9 % 5 != 0) {
            iVar11 = 3;
            uVar10 = *(uint *)(*(int *)(unaff_EBP - 0x5c94) + 4 + *(int *)(unaff_EBP - 0x5c98) * 4);
            uVar51 = 0x4e46fb;
            FUN_004cde40(&stack0xfffffff0,uVar10);
            uVar12 = 0x4e4717;
            FUN_004cde40(&stack0xffffffe8,
                         *(int *)(unaff_EBP - 0x5c90) + *(int *)(unaff_EBP - 0x5c9c) + 7);
            uVar58 = 0x4e471d;
            iVar9 = rand();
            FUN_004cde40(&stack0xffffffe0,
                         (*(int *)(unaff_EBP - 0x5ce4) - iVar9 % 3) +
                         *(int *)(unaff_EBP - 0x5c8c) + -6);
            piVar26 = FUN_00406380((void *)(unaff_EBP - 0x1108),uVar12,uVar58,uVar51,uVar10,puVar19,
                                   puVar13);
            FUN_004f3630((int *)(unaff_EBP - 0x4628),piVar26,iVar11);
            puVar13 = (undefined4 *)(unaff_EBP - 0x4628);
            *(undefined1 *)(unaff_EBP - 4) = 0xf;
            puVar19 = (undefined4 *)0x4e4773;
            cVar4 = FUN_005287b0(pvVar17,(int)puVar13,unaff_EDI,'\x01');
            if (cVar4 != '\0') {
              FUN_004d6670((void *)(unaff_EDI + 0xc),(void **)(unaff_EBP - 0x4628));
            }
            *(undefined1 *)(unaff_EBP - 4) = 5;
            FUN_004cd8f0(unaff_EBP - 0x4628);
          }
          iVar9 = rand();
          if (iVar9 % 5 != 0) {
            iVar11 = 1;
            uVar10 = *(uint *)(*(int *)(unaff_EBP - 0x5c94) + 4 + *(int *)(unaff_EBP - 0x5c98) * 4);
            uVar51 = 0x4e47c9;
            FUN_004cde40(&stack0xfffffff0,uVar10);
            uVar12 = 0x4e47e5;
            FUN_004cde40(&stack0xffffffe8,
                         *(int *)(unaff_EBP - 0x5c90) + *(int *)(unaff_EBP - 0x5c9c) + -7);
            uVar58 = 0x4e47eb;
            iVar9 = rand();
            FUN_004cde40(&stack0xffffffe0,*(int *)(unaff_EBP - 0x5c8c) + 6 + iVar9 % 3);
            piVar26 = FUN_00406380((void *)(unaff_EBP - 0xe98),uVar12,uVar58,uVar51,uVar10,puVar19,
                                   puVar13);
            FUN_004f3630((int *)(unaff_EBP - 0x5578),piVar26,iVar11);
            puVar13 = (undefined4 *)(unaff_EBP - 0x5578);
            *(undefined1 *)(unaff_EBP - 4) = 0x10;
            puVar19 = (undefined4 *)0x4e4839;
            cVar4 = FUN_005287b0(pvVar17,(int)puVar13,unaff_EDI,'\x01');
            if (cVar4 != '\0') {
              FUN_004d6670((void *)(unaff_EDI + 0xc),(void **)(unaff_EBP - 0x5578));
            }
            *(undefined1 *)(unaff_EBP - 4) = 5;
            FUN_004cd8f0(unaff_EBP - 0x5578);
          }
          iVar9 = rand();
          if (iVar9 % 5 != 0) {
            iVar11 = 1;
            uVar10 = *(uint *)(*(int *)(unaff_EBP - 0x5c94) + 4 + *(int *)(unaff_EBP - 0x5c98) * 4);
            uVar51 = 0x4e488f;
            FUN_004cde40(&stack0xfffffff0,uVar10);
            uVar12 = 0x4e489f;
            FUN_004cde40(&stack0xffffffe8,*(uint *)(unaff_EBP - 0x5c58));
            uVar58 = 0x4e48a5;
            iVar9 = rand();
            FUN_004cde40(&stack0xffffffe0,*(int *)(unaff_EBP - 0x5c8c) + 6 + iVar9 % 3);
            piVar26 = FUN_00406380((void *)(unaff_EBP - 0xd60),uVar12,uVar58,uVar51,uVar10,puVar19,
                                   puVar13);
            FUN_004f3630((int *)(unaff_EBP - 0x4938),piVar26,iVar11);
            puVar13 = (undefined4 *)(unaff_EBP - 0x4938);
            *(undefined1 *)(unaff_EBP - 4) = 0x11;
            puVar19 = (undefined4 *)0x4e48f3;
            cVar4 = FUN_005287b0(pvVar17,(int)puVar13,unaff_EDI,'\x01');
            if (cVar4 != '\0') {
              FUN_004d6670((void *)(unaff_EDI + 0xc),(void **)(unaff_EBP - 0x4938));
            }
            *(undefined1 *)(unaff_EBP - 4) = 5;
            FUN_004cd8f0(unaff_EBP - 0x4938);
          }
          iVar9 = rand();
          if (iVar9 % 5 != 0) {
            iVar11 = 1;
            uVar10 = *(uint *)(*(int *)(unaff_EBP - 0x5c94) + 4 + *(int *)(unaff_EBP - 0x5c98) * 4);
            uVar51 = 0x4e4949;
            FUN_004cde40(&stack0xfffffff0,uVar10);
            uVar12 = 0x4e4965;
            FUN_004cde40(&stack0xffffffe8,
                         *(int *)(unaff_EBP - 0x5c90) + *(int *)(unaff_EBP - 0x5c9c) + 7);
            uVar58 = 0x4e496b;
            iVar9 = rand();
            FUN_004cde40(&stack0xffffffe0,*(int *)(unaff_EBP - 0x5c8c) + 6 + iVar9 % 3);
            piVar26 = FUN_00406380((void *)(unaff_EBP - 0x1138),uVar12,uVar58,uVar51,uVar10,puVar19,
                                   puVar13);
            FUN_004f3630((int *)(unaff_EBP - 0x3860),piVar26,iVar11);
            puVar13 = (undefined4 *)(unaff_EBP - 0x3860);
            *(undefined1 *)(unaff_EBP - 4) = 0x12;
            puVar19 = (undefined4 *)0x4e49b9;
            cVar4 = FUN_005287b0(pvVar17,(int)puVar13,unaff_EDI,'\x01');
            if (cVar4 != '\0') {
              FUN_004d6670((void *)(unaff_EDI + 0xc),(void **)(unaff_EBP - 0x3860));
            }
            *(undefined1 *)(unaff_EBP - 4) = 5;
            FUN_004cd8f0(unaff_EBP - 0x3860);
          }
          iVar9 = rand();
          if (iVar9 % 5 != 0) {
            uVar55 = 2;
            uVar58 = 0x4e4a0f;
            FUN_004cde40(&stack0xfffffff0,
                         *(uint *)(*(int *)(unaff_EBP - 0x5c94) + 4 +
                                  *(int *)(unaff_EBP - 0x5c98) * 4));
            uVar51 = 0x4e4a15;
            iVar9 = rand();
            uVar10 = *(int *)(unaff_EBP - 0x5c9c) + 6 + iVar9 % 3;
            uVar12 = 0x4e4a33;
            FUN_004cde40(&stack0xffffffe8,uVar10);
            FUN_004cde40(&stack0xffffffe0,
                         *(int *)(unaff_EBP - 0x5c90) + -3 + *(int *)(unaff_EBP - 0x5c8c));
            puVar13 = FUN_00406380((void *)(unaff_EBP - 0xec8),uVar12,uVar10,uVar58,uVar51,puVar19,
                                   puVar13);
            FUN_004f3490((undefined4 *)(unaff_EBP - 0x3b70),puVar13,uVar55);
            puVar13 = (undefined4 *)(unaff_EBP - 0x3b70);
            *(undefined1 *)(unaff_EBP - 4) = 0x13;
            puVar19 = (undefined4 *)0x4e4a7d;
            cVar4 = FUN_005287b0(pvVar17,(int)puVar13,unaff_EDI,'\x01');
            if (cVar4 != '\0') {
              FUN_004d6670((void *)(unaff_EDI + 0xc),(void **)(unaff_EBP - 0x3b70));
            }
            *(undefined1 *)(unaff_EBP - 4) = 5;
            FUN_004cd8f0(unaff_EBP - 0x3b70);
          }
          iVar9 = rand();
          if (iVar9 % 5 != 0) {
            uVar55 = 2;
            uVar58 = 0x4e4ad3;
            FUN_004cde40(&stack0xfffffff0,
                         *(uint *)(*(int *)(unaff_EBP - 0x5c94) + 4 +
                                  *(int *)(unaff_EBP - 0x5c98) * 4));
            uVar51 = 0x4e4ad9;
            iVar9 = rand();
            uVar10 = *(int *)(unaff_EBP - 0x5c9c) + 6 + iVar9 % 3;
            uVar12 = 0x4e4af7;
            FUN_004cde40(&stack0xffffffe8,uVar10);
            FUN_004cde40(&stack0xffffffe0,
                         *(int *)(unaff_EBP - 0x5c90) + 3 + *(int *)(unaff_EBP - 0x5c8c));
            puVar13 = FUN_00406380((void *)(unaff_EBP - 0x1168),uVar12,uVar10,uVar58,uVar51,puVar19,
                                   puVar13);
            FUN_004f3490((undefined4 *)(unaff_EBP - 16000),puVar13,uVar55);
            puVar13 = (undefined4 *)(unaff_EBP - 16000);
            *(undefined1 *)(unaff_EBP - 4) = 0x14;
            puVar19 = (undefined4 *)0x4e4b41;
            cVar4 = FUN_005287b0(pvVar17,(int)puVar13,unaff_EDI,'\x01');
            if (cVar4 != '\0') {
              FUN_004d6670((void *)(unaff_EDI + 0xc),(void **)(unaff_EBP - 16000));
            }
            *(undefined1 *)(unaff_EBP - 4) = 5;
            FUN_004cd8f0(unaff_EBP - 16000);
          }
          iVar9 = rand();
          if (iVar9 % 5 != 0) {
            uVar55 = 0;
            uVar58 = 0x4e4b97;
            FUN_004cde40(&stack0xfffffff0,
                         *(uint *)(*(int *)(unaff_EBP - 0x5c94) + 4 +
                                  *(int *)(unaff_EBP - 0x5c98) * 4));
            uVar51 = 0x4e4b9d;
            iVar9 = rand();
            uVar10 = (*(int *)(unaff_EBP - 0x5ce4) - iVar9 % 3) + *(int *)(unaff_EBP - 0x5c9c) + -6;
            uVar12 = 0x4e4bc3;
            FUN_004cde40(&stack0xffffffe8,uVar10);
            FUN_004cde40(&stack0xffffffe0,
                         *(int *)(unaff_EBP - 0x5c90) + -3 + *(int *)(unaff_EBP - 0x5c8c));
            puVar13 = FUN_00406380((void *)(unaff_EBP - 0xef8),uVar12,uVar10,uVar58,uVar51,puVar19,
                                   puVar13);
            FUN_004f3490((undefined4 *)(unaff_EBP - 0x4190),puVar13,uVar55);
            puVar13 = (undefined4 *)(unaff_EBP - 0x4190);
            *(undefined1 *)(unaff_EBP - 4) = 0x15;
            puVar19 = (undefined4 *)0x4e4c0d;
            cVar4 = FUN_005287b0(pvVar17,(int)puVar13,unaff_EDI,'\x01');
            if (cVar4 != '\0') {
              FUN_004d6670((void *)(unaff_EDI + 0xc),(void **)(unaff_EBP - 0x4190));
            }
            *(undefined1 *)(unaff_EBP - 4) = 5;
            FUN_004cd8f0(unaff_EBP - 0x4190);
          }
          iVar9 = rand();
          if (iVar9 % 5 != 0) {
            uVar55 = 0;
            uVar58 = 0x4e4c63;
            FUN_004cde40(&stack0xfffffff0,
                         *(uint *)(*(int *)(unaff_EBP - 0x5c94) + 4 +
                                  *(int *)(unaff_EBP - 0x5c98) * 4));
            uVar51 = 0x4e4c69;
            iVar9 = rand();
            uVar10 = (*(int *)(unaff_EBP - 0x5ce4) - iVar9 % 3) + *(int *)(unaff_EBP - 0x5c9c) + -6;
            uVar12 = 0x4e4c8f;
            FUN_004cde40(&stack0xffffffe8,uVar10);
            FUN_004cde40(&stack0xffffffe0,
                         *(int *)(unaff_EBP - 0x5c90) + 3 + *(int *)(unaff_EBP - 0x5c8c));
            puVar13 = FUN_00406380((void *)(unaff_EBP - 0x1198),uVar12,uVar10,uVar58,uVar51,puVar19,
                                   puVar13);
            FUN_004f3490((undefined4 *)(unaff_EBP - 0x44a0),puVar13,uVar55);
            puVar13 = (undefined4 *)(unaff_EBP - 0x44a0);
            *(undefined1 *)(unaff_EBP - 4) = 0x16;
            puVar19 = (undefined4 *)0x4e4cd9;
            cVar4 = FUN_005287b0(pvVar17,(int)puVar13,unaff_EDI,'\x01');
            if (cVar4 != '\0') {
              FUN_004d6670((void *)(unaff_EDI + 0xc),(void **)(unaff_EBP - 0x44a0));
            }
            *(undefined1 *)(unaff_EBP - 4) = 5;
            FUN_004cd8f0(unaff_EBP - 0x44a0);
          }
          iVar9 = rand();
          if (iVar9 % 5 != 0) {
            uVar55 = 3;
            uVar10 = *(uint *)(*(int *)(unaff_EBP - 0x5c94) + 4 + *(int *)(unaff_EBP - 0x5c98) * 4);
            uVar51 = 0x4e4d2f;
            FUN_004cde40(&stack0xfffffff0,uVar10);
            uVar12 = 0x4e4d4b;
            FUN_004cde40(&stack0xffffffe8,
                         *(int *)(unaff_EBP - 0x5c90) + *(int *)(unaff_EBP - 0x5c9c) + -3);
            uVar58 = 0x4e4d51;
            iVar9 = rand();
            FUN_004cde40(&stack0xffffffe0,
                         (*(int *)(unaff_EBP - 0x5ce4) - iVar9 % 3) +
                         *(int *)(unaff_EBP - 0x5c8c) + -6);
            puVar13 = FUN_00406380((void *)(unaff_EBP - 0xf28),uVar12,uVar58,uVar51,uVar10,puVar19,
                                   puVar13);
            FUN_004f3490((undefined4 *)(unaff_EBP - 0x47b0),puVar13,uVar55);
            puVar13 = (undefined4 *)(unaff_EBP - 0x47b0);
            *(undefined1 *)(unaff_EBP - 4) = 0x17;
            puVar19 = (undefined4 *)0x4e4da7;
            cVar4 = FUN_005287b0(pvVar17,(int)puVar13,unaff_EDI,'\x01');
            if (cVar4 != '\0') {
              FUN_004d6670((void *)(unaff_EDI + 0xc),(void **)(unaff_EBP - 0x47b0));
            }
            *(undefined1 *)(unaff_EBP - 4) = 5;
            FUN_004cd8f0(unaff_EBP - 0x47b0);
          }
          iVar9 = rand();
          if (iVar9 % 5 != 0) {
            uVar55 = 3;
            uVar10 = *(uint *)(*(int *)(unaff_EBP - 0x5c94) + 4 + *(int *)(unaff_EBP - 0x5c98) * 4);
            uVar51 = 0x4e4dfd;
            FUN_004cde40(&stack0xfffffff0,uVar10);
            uVar12 = 0x4e4e19;
            FUN_004cde40(&stack0xffffffe8,
                         *(int *)(unaff_EBP - 0x5c90) + *(int *)(unaff_EBP - 0x5c9c) + 3);
            uVar58 = 0x4e4e1f;
            iVar9 = rand();
            FUN_004cde40(&stack0xffffffe0,
                         (*(int *)(unaff_EBP - 0x5ce4) - iVar9 % 3) +
                         *(int *)(unaff_EBP - 0x5c8c) + -6);
            puVar13 = FUN_00406380((void *)(unaff_EBP - 0x11c8),uVar12,uVar58,uVar51,uVar10,puVar19,
                                   puVar13);
            FUN_004f3490((undefined4 *)(unaff_EBP - 0x4ac0),puVar13,uVar55);
            puVar13 = (undefined4 *)(unaff_EBP - 0x4ac0);
            *(undefined1 *)(unaff_EBP - 4) = 0x18;
            puVar19 = (undefined4 *)0x4e4e75;
            cVar4 = FUN_005287b0(pvVar17,(int)puVar13,unaff_EDI,'\x01');
            if (cVar4 != '\0') {
              FUN_004d6670((void *)(unaff_EDI + 0xc),(void **)(unaff_EBP - 0x4ac0));
            }
            *(undefined1 *)(unaff_EBP - 4) = 5;
            FUN_004cd8f0(unaff_EBP - 0x4ac0);
          }
          iVar9 = rand();
          if (iVar9 % 5 != 0) {
            uVar55 = 1;
            uVar10 = *(uint *)(*(int *)(unaff_EBP - 0x5c94) + 4 + *(int *)(unaff_EBP - 0x5c98) * 4);
            uVar51 = 0x4e4ecb;
            FUN_004cde40(&stack0xfffffff0,uVar10);
            uVar12 = 0x4e4ee7;
            FUN_004cde40(&stack0xffffffe8,
                         *(int *)(unaff_EBP - 0x5c90) + *(int *)(unaff_EBP - 0x5c9c) + -3);
            uVar58 = 0x4e4eed;
            iVar9 = rand();
            FUN_004cde40(&stack0xffffffe0,*(int *)(unaff_EBP - 0x5c8c) + 6 + iVar9 % 3);
            puVar13 = FUN_00406380((void *)(unaff_EBP - 0xf58),uVar12,uVar58,uVar51,uVar10,puVar19,
                                   puVar13);
            FUN_004f3490((undefined4 *)(unaff_EBP - 0x4dd0),puVar13,uVar55);
            puVar13 = (undefined4 *)(unaff_EBP - 0x4dd0);
            *(undefined1 *)(unaff_EBP - 4) = 0x19;
            puVar19 = (undefined4 *)0x4e4f3b;
            cVar4 = FUN_005287b0(pvVar17,(int)puVar13,unaff_EDI,'\x01');
            if (cVar4 != '\0') {
              FUN_004d6670((void *)(unaff_EDI + 0xc),(void **)(unaff_EBP - 0x4dd0));
            }
            *(undefined1 *)(unaff_EBP - 4) = 5;
            FUN_004cd8f0(unaff_EBP - 0x4dd0);
          }
          iVar9 = rand();
          if (iVar9 % 5 != 0) {
            uVar55 = 1;
            uVar10 = *(uint *)(*(int *)(unaff_EBP - 0x5c94) + 4 + *(int *)(unaff_EBP - 0x5c98) * 4);
            uVar51 = 0x4e4f91;
            FUN_004cde40(&stack0xfffffff0,uVar10);
            uVar12 = 0x4e4fad;
            FUN_004cde40(&stack0xffffffe8,
                         *(int *)(unaff_EBP - 0x5c90) + *(int *)(unaff_EBP - 0x5c9c) + 3);
            uVar58 = 0x4e4fb3;
            iVar9 = rand();
            FUN_004cde40(&stack0xffffffe0,*(int *)(unaff_EBP - 0x5c8c) + 6 + iVar9 % 3);
            puVar13 = FUN_00406380((void *)(unaff_EBP - 0x11f8),uVar12,uVar58,uVar51,uVar10,puVar19,
                                   puVar13);
            FUN_004f3490((undefined4 *)(unaff_EBP - 0x50e0),puVar13,uVar55);
            *(undefined1 *)(unaff_EBP - 4) = 0x1a;
            cVar4 = FUN_005287b0(pvVar17,unaff_EBP - 0x50e0,unaff_EDI,'\x01');
            if (cVar4 != '\0') {
              FUN_004d6670((void *)(unaff_EDI + 0xc),(void **)(unaff_EBP - 0x50e0));
            }
            *(undefined1 *)(unaff_EBP - 4) = 5;
            FUN_004cd8f0(unaff_EBP - 0x50e0);
          }
        }
        if (*(int *)(*(int *)(unaff_EBP - 0x5c94) + 0xc + *(int *)(unaff_EBP - 0x5c98) * 4) == 6) {
          uVar10 = rand();
          uVar10 = uVar10 & 0x80000001;
          if ((int)uVar10 < 0) {
            uVar10 = (uVar10 - 1 | 0xfffffffe) + 1;
          }
          *(uint *)(unaff_EBP - 0x5c74) = uVar10;
          *(undefined4 *)(unaff_EBP - 0x5c78) = 0;
          *(undefined4 *)(unaff_EBP - 0x14) = 0;
          *(undefined4 *)(unaff_EBP - 0x5cc4) = 0;
          *(undefined4 *)(unaff_EBP - 0x5c7c) = 0x3dcccccd;
          iVar11 = rand();
          iVar11 = iVar11 % 6;
          iVar9 = *(int *)(unaff_EBP - 0x5ce4);
          *(undefined4 *)(unaff_EBP - 0x5ca0) = 0;
          *(int *)(unaff_EBP - 0x5c64) = iVar11;
          if (0 < iVar9) {
            *(int *)(unaff_EBP - 0x5c50) =
                 (*(int *)(unaff_EBP - 0x5cc0) << 8) / *(int *)(unaff_EBP - 0x5ccc);
            do {
              *(undefined4 *)(unaff_EBP - 0x5c88) = 0;
              do {
                switch(iVar11) {
                case 0:
                  *(undefined4 *)(unaff_EBP - 0x5c78) = 0x10;
                  *(undefined4 *)(unaff_EBP - 0x14) = 0x17;
                  goto LAB_004e51aa;
                case 1:
                  uVar12 = 0x3e4ccccd;
                  *(undefined4 *)(unaff_EBP - 0x14) = 0x19;
                  *(undefined4 *)(unaff_EBP - 0x5cc4) = 4;
                  break;
                case 2:
                  uVar12 = 0x3e4ccccd;
                  *(undefined4 *)(unaff_EBP - 0x14) = 0x1a;
                  break;
                case 3:
                  iVar9 = rand();
                  *(undefined4 *)(unaff_EBP - 0x5cc4) = 4;
                  if (iVar9 % 10 == 0) {
                    uVar12 = 0x3d4ccccd;
                    *(undefined4 *)(unaff_EBP - 0x14) = 0x15;
                  }
                  else {
                    uVar12 = 0x3e4ccccd;
                    *(undefined4 *)(unaff_EBP - 0x14) = 0x1d;
                  }
                  break;
                case 4:
                  uVar12 = 0x3e4ccccd;
                  *(undefined4 *)(unaff_EBP - 0x14) = 0x1e;
                  *(undefined4 *)(unaff_EBP - 0x5cc4) = 4;
                  break;
                case 5:
                  uVar12 = 0x3e19999a;
                  *(undefined4 *)(unaff_EBP - 0x5c78) = 0x11;
                  *(undefined4 *)(unaff_EBP - 0x14) = 0x18;
                  break;
                default:
                  goto LAB_004e51aa;
                }
                *(undefined4 *)(unaff_EBP - 0x5c7c) = uVar12;
LAB_004e51aa:
                uVar40 = **(int **)(unaff_EBP - 0x5cf4) * 0x100 + *(int *)(unaff_EBP - 0x5c50) +
                         *(int *)(unaff_EBP - 0x5c88);
                uVar10 = **(int **)(unaff_EBP - 0x5cf8) * 0x100 + *(int *)(unaff_EBP - 0x5cf0) +
                         *(int *)(unaff_EBP - 0x5ca0);
                *(uint *)(unaff_EBP - 0x5c54) = uVar40;
                *(uint *)(unaff_EBP - 0x5cb0) = uVar10;
                iVar9 = FUN_00406100(pvVar17,uVar10,uVar40,unaff_EDI);
                *(int *)(unaff_EBP - 0x5c6c) = iVar9;
                iVar9 = FUN_00406250(iVar9);
                if (iVar9 != 0) {
                  iVar9 = FUN_00406250(*(int *)(unaff_EBP - 0x5c6c));
                  puVar16 = FUN_004d23f0(*(void **)(unaff_EBP - 0x5c6c),iVar9 + -1);
                  bVar3 = FUN_00406280((int)puVar16);
                  if (CONCAT31(extraout_var,bVar3) == 4) {
                    if (*(int *)(unaff_EBP - 0x5c74) == 0) {
                      pfVar22 = (float *)FUN_00401080((void *)(unaff_EBP - 0x32c),0x41200000,
                                                      0x41200000,0);
                      uVar10 = *(uint *)(unaff_EBP - 0x5ca0);
                      pfVar6 = (float *)(unaff_EBP - 0x518);
                    }
                    else {
                      pfVar22 = (float *)FUN_00401080((void *)(unaff_EBP - 0x314),0x41200000,
                                                      0x41200000,0);
                      uVar10 = *(uint *)(unaff_EBP - 0x5c88);
                      pfVar6 = (float *)(unaff_EBP - 0x53c);
                    }
                    puVar13 = (undefined4 *)
                              FUN_004e1520(pfVar6,(float)(uVar10 >> 1 & 0x80000001),pfVar22);
                    FUN_00401060((void *)(unaff_EBP - 0x28),puVar13);
                    pfVar6 = (float *)(unaff_EBP - 0x28);
                    pfVar22 = (float *)(unaff_EBP - 0x344);
                    fVar47 = 0.7;
                    pfVar54 = (float *)(unaff_EBP - 0x680);
                    iVar9 = unaff_EDI;
                    iVar11 = FUN_004061d0(*(int *)(unaff_EBP - 0x5c6c));
                    iVar57 = FUN_00406250(*(int *)(unaff_EBP - 0x5c6c));
                    pvVar17 = *(void **)(unaff_EBP - 0x5c68);
                    pvVar5 = (void *)FUN_004fae90(pvVar17,(float *)(unaff_EBP - 0x35c),
                                                  *(float *)(unaff_EBP - 0x5cb0),
                                                  *(uint *)(unaff_EBP - 0x5c54),iVar57 + iVar11 + -1
                                                  ,iVar9);
                    pvVar5 = (void *)FUN_004079f0(pvVar5,pfVar54,fVar47);
                    pfVar6 = (float *)FUN_004014f0(pvVar5,pfVar22,pfVar6);
                    pfVar6 = FUN_004e2840((float *)(unaff_EBP - 0x548),pfVar6);
                    FUN_0041d160((void *)(unaff_EBP - 0x5d74),(int)pfVar6);
                    puVar20 = FUN_00401370((void *)(unaff_EBP - 0x5e50),
                                           (undefined1 *)(unaff_EBP - 0x5d74),5);
                    iVar9 = FUN_00406250(*(int *)(unaff_EBP - 0x5c6c));
                    FUN_0041fe60(*(void **)(unaff_EBP - 0x5c6c),iVar9 + -1,puVar20);
                    if ((*(int *)(unaff_EBP - 0x5ca0) == *(int *)(unaff_EBP - 0x5cec)) &&
                       (*(int *)(unaff_EBP - 0x5c88) == *(int *)(unaff_EBP - 0x5cec))) {
                      uVar58 = 0x10f0;
                      uVar12 = 0x4e5395;
                      pSVar30 = operator_new(0x10f0);
                      if (pSVar30 == (Spawn *)0x0) {
                        pSVar30 = (Spawn *)0x0;
                      }
                      else {
                        uVar58 = 0x4e53a3;
                        pSVar30 = cube::Spawn::Spawn(pSVar30);
                      }
                      uVar10 = *(uint *)(unaff_EBP - 0x5c54);
                      (pSVar30->Spawn_data).offset_0x24 = 6;
                      *(Spawn **)(unaff_EBP - 0x5c58) = pSVar30;
                      *(Spawn **)(unaff_EBP - 0x5cac) = pSVar30;
                      (pSVar30->Spawn_data).offset_0x28 = 0x8c;
                      uVar42 = 0x4e53d1;
                      FUN_004cde40(&stack0xfffffff8,uVar10);
                      uVar40 = *(uint *)(unaff_EBP - 0x5cb0);
                      FUN_004cde40(&stack0xfffffff0,uVar40);
                      uVar10 = FUN_004d2340(pvVar17,uVar42,uVar10,CONCAT44(uVar58,uVar12));
                      *(uint *)(*(int *)(unaff_EBP - 0x5c58) + 0x34) = uVar10;
                      piVar26 = (int *)(unaff_EBP - 0x6788);
                      piVar18 = FUN_004cde40((void *)(unaff_EBP - 0x6798),
                                             *(uint *)(unaff_EBP - 0x5c54));
                      uVar12 = FUN_004ce290(piVar18,piVar26);
                      *(undefined4 *)(unaff_EBP - 0x5c54) = uVar12;
                      uVar12 = 0;
                      piVar26 = (int *)(unaff_EBP - 0x67b0);
                      piVar18 = FUN_004cde40((void *)(unaff_EBP - 0x67c8),uVar40);
                      puVar13 = (undefined4 *)FUN_004ce290(piVar18,piVar26);
                      iVar9 = FUN_004061d0(*(int *)(unaff_EBP - 0x5c6c));
                      uVar58 = 0x4e546b;
                      iVar11 = FUN_00406250(*(int *)(unaff_EBP - 0x5c6c));
                      FUN_004cde40(&stack0xfffffff8,iVar9 + iVar11);
                      puVar13 = FUN_00406380((void *)(unaff_EBP - 0xf88),*puVar13,puVar13[1],
                                             **(undefined4 **)(unaff_EBP - 0x5c54),
                                             (*(undefined4 **)(unaff_EBP - 0x5c54))[1],uVar12,uVar58
                                            );
                      iVar9 = *(int *)(unaff_EBP - 0x5c58);
                      FUN_00402a40((void *)(iVar9 + 0x10),puVar13);
                      uVar10 = rand();
                      uVar10 = uVar10 & 0x80000003;
                      if ((int)uVar10 < 0) {
                        uVar10 = (uVar10 - 1 | 0xfffffffc) + 1;
                      }
                      unaff_EDI = *(int *)(unaff_EBP - 0x5c70);
                      *(float *)(iVar9 + 0x54) = (float)(int)uVar10 * 90.0;
                      FUN_004f2be0((void *)(unaff_EDI + 0x18),(undefined4 *)(unaff_EBP - 0x5cac));
                    }
                    else {
                      iVar9 = rand();
                      if (iVar9 % 10 != 0) goto LAB_004e574e;
                      uVar10 = rand();
                      uVar10 = uVar10 & 0x80000003;
                      bVar45 = uVar10 == 0;
                      if ((int)uVar10 < 0) {
                        bVar45 = (uVar10 - 1 | 0xfffffffc) == 0xffffffff;
                      }
                      if ((bVar45) && (*(int *)(unaff_EBP - 0x5c78) != 0)) {
                        FUN_0041d8d0((undefined2 *)(unaff_EBP - 0x1448));
                        uVar12 = *(undefined4 *)(unaff_EBP - 0x5c78);
                        *(undefined1 *)(unaff_EBP - 0x1448) = 0xb;
                        *(char *)(unaff_EBP - 0x1447) = (char)uVar12;
                        uVar51 = 0x4e5560;
                        FUN_00401080((void *)(unaff_EBP - 0x374),0x3f000000,0x3f000000,0);
                        FUN_00402510(unaff_EBP - 0x698);
                        puVar14 = (uint *)(unaff_EBP - 0x698);
                        puVar15 = (uint *)(unaff_EBP - 0x1228);
                        iVar9 = FUN_004061d0(*(int *)(unaff_EBP - 0x5c6c));
                        uVar55 = 0x4e5592;
                        iVar11 = FUN_00406250(*(int *)(unaff_EBP - 0x5c6c));
                        uVar40 = iVar9 + iVar11;
                        uVar58 = 0x4e559f;
                        FUN_004cde40(&stack0xfffffff0,uVar40);
                        uVar10 = *(uint *)(unaff_EBP - 0x5c54);
                        uVar12 = 0x4e55af;
                        FUN_004cde40(&stack0xffffffe8,uVar10);
                        FUN_004cde40(&stack0xffffffe0,*(uint *)(unaff_EBP - 0x5cb0));
                        puVar13 = FUN_00406380((void *)(unaff_EBP - 0xfb8),uVar12,uVar10,uVar58,
                                               uVar40,uVar51,uVar55);
                        puVar14 = FUN_00402cb0(puVar13,puVar15,puVar14);
                        FUN_00402a40((void *)(unaff_EBP - 0x1330),puVar14);
                        iVar9 = rand();
                        *(undefined4 *)(unaff_EBP - 0x1314) = 0x3dcccccd;
                        *(float *)(unaff_EBP - 0x1318) = ((float)iVar9 * 360.0) / 32767.0;
                        *(undefined1 *)(unaff_EBP - 0x1310) = 2;
                        FUN_0041f5b0((void *)(unaff_EDI + 0x30),(undefined1 *)(unaff_EBP - 0x1448));
                      }
                      else {
                        if (*(int *)(unaff_EBP - 0x14) == 0) goto LAB_004e574e;
                        FUN_004c83b0(unaff_EBP - 0x2cc);
                        iVar9 = *(int *)(unaff_EBP - 0x14);
                        uVar12 = *(undefined4 *)(unaff_EBP - 0x5cc4);
                        *(int *)(unaff_EBP - 0x2cc) = iVar9;
                        *(undefined4 *)(unaff_EBP - 0x294) = uVar12;
                        if (iVar9 == 0x19) {
                          *(undefined4 *)(unaff_EBP - 0x2a8) = 0;
                        }
                        else {
                          iVar9 = rand();
                          *(float *)(unaff_EBP - 0x2a8) = ((float)iVar9 * 360.0) / 32767.0;
                        }
                        uVar51 = 0x4e56ac;
                        FUN_00401080((void *)(unaff_EBP - 0x620),0x3f000000,0x3f000000,0);
                        FUN_00402510(unaff_EBP - 0x6bc);
                        puVar14 = (uint *)(unaff_EBP - 0x6bc);
                        puVar15 = (uint *)(unaff_EBP - 0x1258);
                        iVar9 = FUN_004061d0(*(int *)(unaff_EBP - 0x5c6c));
                        uVar55 = 0x4e56de;
                        iVar11 = FUN_00406250(*(int *)(unaff_EBP - 0x5c6c));
                        uVar40 = iVar9 + iVar11;
                        uVar58 = 0x4e56eb;
                        FUN_004cde40(&stack0xfffffff0,uVar40);
                        uVar10 = *(uint *)(unaff_EBP - 0x5c54);
                        uVar12 = 0x4e56fb;
                        FUN_004cde40(&stack0xffffffe8,uVar10);
                        FUN_004cde40(&stack0xffffffe0,*(uint *)(unaff_EBP - 0x5cb0));
                        puVar13 = FUN_00406380((void *)(unaff_EBP - 0xfe8),uVar12,uVar10,uVar58,
                                               uVar40,uVar51,uVar55);
                        puVar14 = FUN_00402cb0(puVar13,puVar15,puVar14);
                        FUN_00402a40((void *)(unaff_EBP - 0x2c4),puVar14);
                        *(undefined4 *)(unaff_EBP - 0x2ac) = *(undefined4 *)(unaff_EBP - 0x5c7c);
                        FUN_00528450((void *)(unaff_EDI + 4),(undefined4 *)(unaff_EBP - 0x2cc));
                      }
                    }
                    pvVar17 = *(void **)(unaff_EBP - 0x5c68);
                  }
                }
LAB_004e574e:
                iVar9 = *(int *)(unaff_EBP - 0x5ce4);
                iVar11 = *(int *)(unaff_EBP - 0x5c64);
                iVar57 = *(int *)(unaff_EBP - 0x5c88) + 1;
                *(int *)(unaff_EBP - 0x5c88) = iVar57;
              } while (iVar57 < iVar9);
              iVar57 = *(int *)(unaff_EBP - 0x5ca0) + 1;
              *(int *)(unaff_EBP - 0x5ca0) = iVar57;
            } while (iVar57 < iVar9);
          }
          uVar10 = rand();
          uVar10 = uVar10 & 0x80000001;
          bVar45 = uVar10 == 0;
          if ((int)uVar10 < 0) {
            bVar45 = (uVar10 - 1 | 0xfffffffe) == 0xffffffff;
          }
          if ((!bVar45) &&
             (iVar9 = *(int *)(unaff_EBP - 0x5cec), *(undefined4 *)(unaff_EBP - 0x5c58) = 0,
             0 < iVar9)) {
            do {
              iVar9 = rand();
              if (iVar9 % 10 != 0) {
                iVar9 = **(int **)(unaff_EBP - 0x5cf4);
                *(int *)(unaff_EBP - 0x5c64) =
                     (**(int **)(unaff_EBP - 0x5cf8) * 0x80 + *(int *)(unaff_EBP - 0x5c58)) * 2 + 1
                     + *(int *)(unaff_EBP - 0x5cf0);
                uVar40 = (*(int *)(unaff_EBP - 0x5cc0) << 8) / *(int *)(unaff_EBP - 0x5ccc) +
                         iVar9 * 0x100;
                uVar10 = *(uint *)(unaff_EBP - 0x5c64);
                *(uint *)(unaff_EBP - 0x5c74) = uVar40;
                pvVar17 = (void *)FUN_00406100(pvVar17,uVar10,uVar40,unaff_EDI);
                *(void **)(unaff_EBP - 0x5c50) = pvVar17;
                iVar9 = FUN_00406250((int)pvVar17);
                if (iVar9 != 0) {
                  iVar9 = FUN_00406250((int)pvVar17);
                  puVar16 = FUN_004d23f0(pvVar17,iVar9 + -1);
                  bVar3 = FUN_00406280((int)puVar16);
                  if (CONCAT31(extraout_var_00,bVar3) != 0) {
                    iVar9 = FUN_004061d0((int)pvVar17);
                    iVar11 = FUN_00406250(*(int *)(unaff_EBP - 0x5c50));
                    uVar40 = iVar9 + iVar11;
                    FUN_004c84b0(unaff_EBP - 0x27c8);
                    *(undefined1 *)(unaff_EBP - 4) = 0x1b;
                    uVar10 = rand();
                    uVar10 = uVar10 & 0x80000003;
                    if ((int)uVar10 < 0) {
                      uVar10 = (uVar10 - 1 | 0xfffffffc) + 1;
                    }
                    *(uint *)(unaff_EBP - 0x27c8) = uVar10 + 0x34;
                    uVar55 = 0;
                    uVar51 = 0x4e58ba;
                    FUN_00401080((void *)(unaff_EBP - 0x38c),0,0x3f000000,0);
                    FUN_00402510(unaff_EBP - 0x6e0);
                    puVar14 = (uint *)(unaff_EBP - 0x6e0);
                    puVar15 = (uint *)(unaff_EBP - 0x12a0);
                    uVar58 = 0x4e58df;
                    FUN_004cde40(&stack0xfffffff0,uVar40);
                    uVar10 = *(uint *)(unaff_EBP - 0x5c74);
                    uVar12 = 0x4e58ef;
                    FUN_004cde40(&stack0xffffffe8,uVar10);
                    FUN_004cde40(&stack0xffffffe0,*(uint *)(unaff_EBP - 0x5c64));
                    puVar13 = FUN_00406380((void *)(unaff_EBP - 0x1018),uVar12,uVar10,uVar58,uVar40,
                                           uVar51,uVar55);
                    puVar14 = FUN_00402cb0(puVar13,puVar15,puVar14);
                    FUN_00402a40((void *)(unaff_EBP - 0x27c0),puVar14);
                    *(undefined4 *)(unaff_EBP - 0x27a8) = 0;
                    puVar13 = FUN_00401080((void *)(unaff_EBP - 0x560),0x40000000,0x3f800000,
                                           0x3fc00000);
                    FUN_00401060((void *)(unaff_EBP - 0x27a4),puVar13);
                    FUN_004d6670((void *)(unaff_EDI + 0xc),(void **)(unaff_EBP - 0x27c8));
                    *(undefined1 *)(unaff_EBP - 4) = 5;
                    FUN_004cd8f0(unaff_EBP - 0x27c8);
                  }
                }
              }
              pvVar17 = *(void **)(unaff_EBP - 0x5c68);
              iVar9 = *(int *)(unaff_EBP - 0x5c58) + 1;
              *(int *)(unaff_EBP - 0x5c58) = iVar9;
            } while (iVar9 < *(int *)(unaff_EBP - 0x5cec));
          }
          pcVar43 = rand_exref;
          uVar10 = rand();
          uVar10 = uVar10 & 0x80000001;
          bVar45 = uVar10 == 0;
          if ((int)uVar10 < 0) {
            bVar45 = (uVar10 - 1 | 0xfffffffe) == 0xffffffff;
          }
          if ((!bVar45) &&
             (iVar9 = *(int *)(unaff_EBP - 0x5cec), *(undefined4 *)(unaff_EBP - 0x5c58) = 0,
             0 < iVar9)) {
            do {
              iVar9 = (*pcVar43)();
              if (iVar9 % 10 != 0) {
                iVar9 = **(int **)(unaff_EBP - 0x5cf4);
                iVar11 = *(int *)(unaff_EBP - 0x5cc0);
                iVar57 = *(int *)(unaff_EBP - 0x5ccc);
                uVar40 = **(int **)(unaff_EBP - 0x5cf8) * 0x100 + *(int *)(unaff_EBP - 0x5cf0);
                iVar41 = *(int *)(unaff_EBP - 0x5c58);
                *(uint *)(unaff_EBP - 0x5c64) = uVar40;
                pvVar17 = *(void **)(unaff_EBP - 0x5c68);
                uVar10 = (iVar11 << 8) / iVar57 + (iVar9 * 0x80 + iVar41) * 2 + 1;
                *(uint *)(unaff_EBP - 0x5c74) = uVar10;
                pvVar17 = (void *)FUN_00406100(pvVar17,uVar40,uVar10,unaff_EDI);
                *(void **)(unaff_EBP - 0x5c50) = pvVar17;
                iVar9 = FUN_00406250((int)pvVar17);
                pcVar43 = rand_exref;
                if (iVar9 != 0) {
                  iVar9 = FUN_00406250((int)pvVar17);
                  puVar16 = FUN_004d23f0(pvVar17,iVar9 + -1);
                  bVar3 = FUN_00406280((int)puVar16);
                  pcVar43 = rand_exref;
                  if (CONCAT31(extraout_var_01,bVar3) != 0) {
                    iVar9 = FUN_004061d0((int)pvVar17);
                    iVar11 = FUN_00406250(*(int *)(unaff_EBP - 0x5c50));
                    uVar40 = iVar9 + iVar11;
                    FUN_004c84b0(unaff_EBP - 0x2640);
                    *(undefined1 *)(unaff_EBP - 4) = 0x1c;
                    uVar10 = rand();
                    uVar10 = uVar10 & 0x80000003;
                    if ((int)uVar10 < 0) {
                      uVar10 = (uVar10 - 1 | 0xfffffffc) + 1;
                    }
                    *(uint *)(unaff_EBP - 0x2640) = uVar10 + 0x34;
                    uVar55 = 0;
                    uVar51 = 0x4e5ac3;
                    FUN_00401080((void *)(unaff_EBP - 0x3a4),0,0x3f000000,0);
                    FUN_00402510(unaff_EBP - 0x704);
                    puVar14 = (uint *)(unaff_EBP - 0x704);
                    puVar15 = (uint *)(unaff_EBP - 0x12d0);
                    uVar58 = 0x4e5ae8;
                    FUN_004cde40(&stack0xfffffff0,uVar40);
                    uVar10 = *(uint *)(unaff_EBP - 0x5c74);
                    uVar12 = 0x4e5af8;
                    FUN_004cde40(&stack0xffffffe8,uVar10);
                    FUN_004cde40(&stack0xffffffe0,*(uint *)(unaff_EBP - 0x5c64));
                    puVar13 = FUN_00406380((void *)(unaff_EBP - 0x1048),uVar12,uVar10,uVar58,uVar40,
                                           uVar51,uVar55);
                    puVar14 = FUN_00402cb0(puVar13,puVar15,puVar14);
                    FUN_00402a40((void *)(unaff_EBP - 0x2638),puVar14);
                    *(undefined4 *)(unaff_EBP - 0x2620) = 1;
                    puVar13 = FUN_00401080((void *)(unaff_EBP - 0x710),0x40000000,0x3f800000,
                                           0x3fc00000);
                    FUN_00401060((void *)(unaff_EBP - 0x261c),puVar13);
                    FUN_004d6670((void *)(unaff_EDI + 0xc),(void **)(unaff_EBP - 0x2640));
                    *(undefined1 *)(unaff_EBP - 4) = 5;
                    FUN_004cd8f0(unaff_EBP - 0x2640);
                    pcVar43 = rand_exref;
                  }
                }
              }
              iVar9 = *(int *)(unaff_EBP - 0x5c58) + 1;
              *(int *)(unaff_EBP - 0x5c58) = iVar9;
            } while (iVar9 < *(int *)(unaff_EBP - 0x5cec));
          }
        }
        iVar57 = (*(int *)(unaff_EBP - 0x5cc0) << 8) / *(int *)(unaff_EBP - 0x5ccc);
        unaff_ESI = *(void **)(unaff_EBP - 0x5c68);
        iVar9 = **(int **)(unaff_EBP - 0x5cf4);
        iVar11 = *(int *)(unaff_EBP - 0x5cec);
        *(int *)(unaff_EBP - 0x5cac) = iVar57;
        FUN_004f8570(unaff_ESI,
                     (float)(**(int **)(unaff_EBP - 0x5cf8) * 0x100 + *(int *)(unaff_EBP - 0x5cec) +
                            *(int *)(unaff_EBP - 0x5cf0)),iVar9 * 0x100 + iVar11 + iVar57);
        FUN_004f8b40(unaff_ESI,
                     **(int **)(unaff_EBP - 0x5cf8) * 0x100 + *(int *)(unaff_EBP - 0x5cec) +
                     *(int *)(unaff_EBP - 0x5cf0),
                     **(int **)(unaff_EBP - 0x5cf4) * 0x100 + *(int *)(unaff_EBP - 0x5cec) +
                     *(int *)(unaff_EBP - 0x5cac));
        iVar9 = *(int *)(unaff_EBP - 0x5c98);
        iVar11 = *(int *)(unaff_EBP - 0x5c94);
        if (*(int *)(iVar11 + 0xc + iVar9 * 4) == 2) {
          *(void **)(unaff_EBP - 0x5c48) = (void *)((int)unaff_ESI + 0x1c);
          uVar12 = FUN_004013f0((void *)((int)unaff_ESI + 0x1c),0x889);
          *(undefined4 *)(unaff_EBP - 0x5c90) = uVar12;
          iVar9 = *(int *)(unaff_EBP - 0x5cbc);
          if (*(int *)(iVar9 + 0x18) == 1) {
            switch(*(undefined4 *)(iVar9 + 0x1c)) {
            case 1:
              uVar12 = FUN_004013f0((void *)((int)unaff_ESI + 0x1c),0x8ef);
              *(undefined4 *)(unaff_EBP - 0x5c88) = uVar12;
              uVar12 = FUN_004013f0((void *)((int)unaff_ESI + 0x1c),0x8f0);
              *(undefined4 *)(unaff_EBP - 0x5cb0) = uVar12;
              uVar12 = FUN_004013f0((void *)((int)unaff_ESI + 0x1c),0x8f1);
              *(undefined4 *)(unaff_EBP - 0x14) = uVar12;
              uVar12 = FUN_004013f0((void *)((int)unaff_ESI + 0x1c),0x8f2);
              *(undefined4 *)(unaff_EBP - 0x5c9c) = uVar12;
              uVar12 = FUN_004013f0((void *)((int)unaff_ESI + 0x1c),0x8f3);
              *(undefined4 *)(unaff_EBP - 0x5d08) = uVar12;
              uVar12 = FUN_004013f0((void *)((int)unaff_ESI + 0x1c),0x8f4);
              *(undefined4 *)(unaff_EBP - 0x5cd4) = uVar12;
              uVar12 = FUN_004013f0((void *)((int)unaff_ESI + 0x1c),0x8f5);
              *(undefined4 *)(unaff_EBP - 0x5c8c) = uVar12;
              uVar12 = FUN_004013f0((void *)((int)unaff_ESI + 0x1c),0x8f6);
              *(undefined4 *)(unaff_EBP - 0x5d2c) = uVar12;
              uVar12 = FUN_004013f0((void *)((int)unaff_ESI + 0x1c),0x8f7);
              *(undefined4 *)(unaff_EBP - 0x5d04) = uVar12;
              uVar12 = FUN_004013f0((void *)((int)unaff_ESI + 0x1c),0x8f8);
              *(undefined4 *)(unaff_EBP - 0x5c7c) = uVar12;
              uVar12 = FUN_004013f0((void *)((int)unaff_ESI + 0x1c),0x8f9);
              *(undefined4 *)(unaff_EBP - 0x5d00) = uVar12;
              uVar12 = FUN_004013f0((void *)((int)unaff_ESI + 0x1c),0x8fa);
              iVar9 = 0x8fb;
              break;
            case 2:
              uVar12 = FUN_004013f0((void *)((int)unaff_ESI + 0x1c),0x8a7);
              *(undefined4 *)(unaff_EBP - 0x5c88) = uVar12;
              uVar12 = FUN_004013f0((void *)((int)unaff_ESI + 0x1c),0x8a8);
              *(undefined4 *)(unaff_EBP - 0x5cb0) = uVar12;
              uVar12 = FUN_004013f0((void *)((int)unaff_ESI + 0x1c),0x8a9);
              *(undefined4 *)(unaff_EBP - 0x14) = uVar12;
              uVar12 = FUN_004013f0((void *)((int)unaff_ESI + 0x1c),0x8aa);
              *(undefined4 *)(unaff_EBP - 0x5c9c) = uVar12;
              uVar12 = FUN_004013f0((void *)((int)unaff_ESI + 0x1c),0x8ab);
              *(undefined4 *)(unaff_EBP - 0x5d08) = uVar12;
              uVar12 = FUN_004013f0((void *)((int)unaff_ESI + 0x1c),0x8ac);
              *(undefined4 *)(unaff_EBP - 0x5cd4) = uVar12;
              uVar12 = FUN_004013f0((void *)((int)unaff_ESI + 0x1c),0x8ad);
              *(undefined4 *)(unaff_EBP - 0x5c8c) = uVar12;
              uVar12 = FUN_004013f0((void *)((int)unaff_ESI + 0x1c),0x8ae);
              *(undefined4 *)(unaff_EBP - 0x5d2c) = uVar12;
              uVar12 = FUN_004013f0((void *)((int)unaff_ESI + 0x1c),0x8af);
              *(undefined4 *)(unaff_EBP - 0x5d04) = uVar12;
              uVar12 = FUN_004013f0((void *)((int)unaff_ESI + 0x1c),0x8b0);
              *(undefined4 *)(unaff_EBP - 0x5c7c) = uVar12;
              uVar12 = FUN_004013f0((void *)((int)unaff_ESI + 0x1c),0x8b1);
              *(undefined4 *)(unaff_EBP - 0x5d00) = uVar12;
              uVar12 = FUN_004013f0((void *)((int)unaff_ESI + 0x1c),0x8b2);
              iVar9 = 0x8b3;
              break;
            case 3:
              uVar12 = FUN_004013f0((void *)((int)unaff_ESI + 0x1c),0x89a);
              *(undefined4 *)(unaff_EBP - 0x5c88) = uVar12;
              uVar12 = FUN_004013f0((void *)((int)unaff_ESI + 0x1c),0x89b);
              *(undefined4 *)(unaff_EBP - 0x5cb0) = uVar12;
              uVar12 = FUN_004013f0((void *)((int)unaff_ESI + 0x1c),0x89c);
              *(undefined4 *)(unaff_EBP - 0x14) = uVar12;
              uVar12 = FUN_004013f0((void *)((int)unaff_ESI + 0x1c),0x89d);
              *(undefined4 *)(unaff_EBP - 0x5c9c) = uVar12;
              uVar12 = FUN_004013f0((void *)((int)unaff_ESI + 0x1c),0x89e);
              *(undefined4 *)(unaff_EBP - 0x5d08) = uVar12;
              uVar12 = FUN_004013f0((void *)((int)unaff_ESI + 0x1c),0x89f);
              *(undefined4 *)(unaff_EBP - 0x5cd4) = uVar12;
              uVar12 = FUN_004013f0((void *)((int)unaff_ESI + 0x1c),0x8a0);
              *(undefined4 *)(unaff_EBP - 0x5c8c) = uVar12;
              uVar12 = FUN_004013f0((void *)((int)unaff_ESI + 0x1c),0x8a1);
              *(undefined4 *)(unaff_EBP - 0x5d2c) = uVar12;
              uVar12 = FUN_004013f0((void *)((int)unaff_ESI + 0x1c),0x8a2);
              *(undefined4 *)(unaff_EBP - 0x5d04) = uVar12;
              uVar12 = FUN_004013f0((void *)((int)unaff_ESI + 0x1c),0x8a3);
              *(undefined4 *)(unaff_EBP - 0x5c7c) = uVar12;
              uVar12 = FUN_004013f0((void *)((int)unaff_ESI + 0x1c),0x8a4);
              *(undefined4 *)(unaff_EBP - 0x5d00) = uVar12;
              uVar12 = FUN_004013f0((void *)((int)unaff_ESI + 0x1c),0x8a5);
              iVar9 = 0x8a6;
              break;
            case 4:
              uVar12 = FUN_004013f0((void *)((int)unaff_ESI + 0x1c),0x8c1);
              *(undefined4 *)(unaff_EBP - 0x5c90) = uVar12;
              uVar12 = FUN_004013f0((void *)((int)unaff_ESI + 0x1c),0x8b4);
              *(undefined4 *)(unaff_EBP - 0x5c88) = uVar12;
              uVar12 = FUN_004013f0((void *)((int)unaff_ESI + 0x1c),0x8b5);
              *(undefined4 *)(unaff_EBP - 0x5cb0) = uVar12;
              uVar12 = FUN_004013f0((void *)((int)unaff_ESI + 0x1c),0x8b6);
              *(undefined4 *)(unaff_EBP - 0x14) = uVar12;
              uVar12 = FUN_004013f0((void *)((int)unaff_ESI + 0x1c),0x8b7);
              *(undefined4 *)(unaff_EBP - 0x5c9c) = uVar12;
              uVar12 = FUN_004013f0((void *)((int)unaff_ESI + 0x1c),0x8b8);
              *(undefined4 *)(unaff_EBP - 0x5d08) = uVar12;
              uVar12 = FUN_004013f0((void *)((int)unaff_ESI + 0x1c),0x8b9);
              *(undefined4 *)(unaff_EBP - 0x5cd4) = uVar12;
              uVar12 = FUN_004013f0((void *)((int)unaff_ESI + 0x1c),0x8ba);
              *(undefined4 *)(unaff_EBP - 0x5c8c) = uVar12;
              uVar12 = FUN_004013f0((void *)((int)unaff_ESI + 0x1c),0x8bb);
              *(undefined4 *)(unaff_EBP - 0x5d2c) = uVar12;
              uVar12 = FUN_004013f0((void *)((int)unaff_ESI + 0x1c),0x8bc);
              *(undefined4 *)(unaff_EBP - 0x5d04) = uVar12;
              uVar12 = FUN_004013f0((void *)((int)unaff_ESI + 0x1c),0x8bd);
              *(undefined4 *)(unaff_EBP - 0x5c7c) = uVar12;
              uVar12 = FUN_004013f0((void *)((int)unaff_ESI + 0x1c),0x8be);
              *(undefined4 *)(unaff_EBP - 0x5d00) = uVar12;
              uVar12 = FUN_004013f0((void *)((int)unaff_ESI + 0x1c),0x8bf);
              iVar9 = 0x8c0;
              break;
            case 5:
              uVar12 = FUN_004013f0((void *)((int)unaff_ESI + 0x1c),0x8c2);
              *(undefined4 *)(unaff_EBP - 0x5c90) = uVar12;
              uVar12 = FUN_004013f0((void *)((int)unaff_ESI + 0x1c),0x8c3);
              *(undefined4 *)(unaff_EBP - 0x5c88) = uVar12;
              uVar12 = FUN_004013f0((void *)((int)unaff_ESI + 0x1c),0x8c4);
              *(undefined4 *)(unaff_EBP - 0x5cb0) = uVar12;
              uVar12 = FUN_004013f0((void *)((int)unaff_ESI + 0x1c),0x8c5);
              *(undefined4 *)(unaff_EBP - 0x14) = uVar12;
              uVar12 = FUN_004013f0((void *)((int)unaff_ESI + 0x1c),0x8c6);
              *(undefined4 *)(unaff_EBP - 0x5c9c) = uVar12;
              uVar12 = FUN_004013f0((void *)((int)unaff_ESI + 0x1c),0x8c7);
              *(undefined4 *)(unaff_EBP - 0x5d08) = uVar12;
              uVar12 = FUN_004013f0((void *)((int)unaff_ESI + 0x1c),0x8c8);
              *(undefined4 *)(unaff_EBP - 0x5cd4) = uVar12;
              uVar12 = FUN_004013f0((void *)((int)unaff_ESI + 0x1c),0x8c9);
              *(undefined4 *)(unaff_EBP - 0x5c8c) = uVar12;
              uVar12 = FUN_004013f0((void *)((int)unaff_ESI + 0x1c),0x8ca);
              *(undefined4 *)(unaff_EBP - 0x5d2c) = uVar12;
              uVar12 = FUN_004013f0((void *)((int)unaff_ESI + 0x1c),0x8cb);
              *(undefined4 *)(unaff_EBP - 0x5d04) = uVar12;
              uVar12 = FUN_004013f0((void *)((int)unaff_ESI + 0x1c),0x8cc);
              *(undefined4 *)(unaff_EBP - 0x5c7c) = uVar12;
              uVar12 = FUN_004013f0((void *)((int)unaff_ESI + 0x1c),0x8cd);
              *(undefined4 *)(unaff_EBP - 0x5d00) = uVar12;
              uVar12 = FUN_004013f0((void *)((int)unaff_ESI + 0x1c),0x8ce);
              iVar9 = 0x8cf;
              break;
            default:
              uVar12 = FUN_004013f0((void *)((int)unaff_ESI + 0x1c),0x88d);
              *(undefined4 *)(unaff_EBP - 0x5c88) = uVar12;
              uVar12 = FUN_004013f0((void *)((int)unaff_ESI + 0x1c),0x88e);
              *(undefined4 *)(unaff_EBP - 0x5cb0) = uVar12;
              uVar12 = FUN_004013f0((void *)((int)unaff_ESI + 0x1c),0x88f);
              *(undefined4 *)(unaff_EBP - 0x14) = uVar12;
              uVar12 = FUN_004013f0((void *)((int)unaff_ESI + 0x1c),0x890);
              *(undefined4 *)(unaff_EBP - 0x5c9c) = uVar12;
              uVar12 = FUN_004013f0((void *)((int)unaff_ESI + 0x1c),0x891);
              *(undefined4 *)(unaff_EBP - 0x5d08) = uVar12;
              uVar12 = FUN_004013f0((void *)((int)unaff_ESI + 0x1c),0x892);
              *(undefined4 *)(unaff_EBP - 0x5cd4) = uVar12;
              uVar12 = FUN_004013f0((void *)((int)unaff_ESI + 0x1c),0x893);
              *(undefined4 *)(unaff_EBP - 0x5c8c) = uVar12;
              uVar12 = FUN_004013f0((void *)((int)unaff_ESI + 0x1c),0x894);
              *(undefined4 *)(unaff_EBP - 0x5d2c) = uVar12;
              uVar12 = FUN_004013f0((void *)((int)unaff_ESI + 0x1c),0x895);
              *(undefined4 *)(unaff_EBP - 0x5d04) = uVar12;
              uVar12 = FUN_004013f0((void *)((int)unaff_ESI + 0x1c),0x896);
              *(undefined4 *)(unaff_EBP - 0x5c7c) = uVar12;
              uVar12 = FUN_004013f0((void *)((int)unaff_ESI + 0x1c),0x897);
              *(undefined4 *)(unaff_EBP - 0x5d00) = uVar12;
              uVar12 = FUN_004013f0((void *)((int)unaff_ESI + 0x1c),0x898);
              iVar9 = 0x899;
            }
          }
          else {
            pvVar17 = (void *)((int)unaff_ESI + 0x1c);
            if (*(int *)(iVar9 + 0x1c) == 2) {
              uVar12 = FUN_004013f0(pvVar17,0x8e4);
              *(undefined4 *)(unaff_EBP - 0x5c90) = uVar12;
              uVar12 = FUN_004013f0((void *)((int)unaff_ESI + 0x1c),0x8e5);
              *(undefined4 *)(unaff_EBP - 0x5c88) = uVar12;
              uVar12 = FUN_004013f0((void *)((int)unaff_ESI + 0x1c),0x8e6);
              *(undefined4 *)(unaff_EBP - 0x5cb0) = uVar12;
              uVar12 = FUN_004013f0((void *)((int)unaff_ESI + 0x1c),0x8e7);
              *(undefined4 *)(unaff_EBP - 0x14) = uVar12;
              uVar12 = FUN_004013f0((void *)((int)unaff_ESI + 0x1c),0x8e8);
              *(undefined4 *)(unaff_EBP - 0x5c9c) = uVar12;
              uVar12 = FUN_004013f0((void *)((int)unaff_ESI + 0x1c),0x8e8);
              *(undefined4 *)(unaff_EBP - 0x5d08) = uVar12;
              uVar12 = FUN_004013f0((void *)((int)unaff_ESI + 0x1c),0x8e9);
              *(undefined4 *)(unaff_EBP - 0x5cd4) = uVar12;
              uVar12 = FUN_004013f0((void *)((int)unaff_ESI + 0x1c),0x8ea);
              *(undefined4 *)(unaff_EBP - 0x5c8c) = uVar12;
              uVar12 = FUN_004013f0((void *)((int)unaff_ESI + 0x1c),0x8e9);
              *(undefined4 *)(unaff_EBP - 0x5d2c) = uVar12;
              uVar12 = FUN_004013f0((void *)((int)unaff_ESI + 0x1c),0x8e9);
              *(undefined4 *)(unaff_EBP - 0x5d04) = uVar12;
              uVar12 = FUN_004013f0((void *)((int)unaff_ESI + 0x1c),0x8eb);
              *(undefined4 *)(unaff_EBP - 0x5c7c) = uVar12;
              uVar12 = FUN_004013f0((void *)((int)unaff_ESI + 0x1c),0x8ec);
              *(undefined4 *)(unaff_EBP - 0x5d00) = uVar12;
              uVar12 = FUN_004013f0((void *)((int)unaff_ESI + 0x1c),0x8ed);
              iVar9 = 0x8ee;
            }
            else if (*(int *)(iVar9 + 0x1c) == 3) {
              uVar12 = FUN_004013f0(pvVar17,0x8d9);
              *(undefined4 *)(unaff_EBP - 0x5c90) = uVar12;
              uVar12 = FUN_004013f0((void *)((int)unaff_ESI + 0x1c),0x8da);
              *(undefined4 *)(unaff_EBP - 0x5c88) = uVar12;
              uVar12 = FUN_004013f0((void *)((int)unaff_ESI + 0x1c),0x8db);
              *(undefined4 *)(unaff_EBP - 0x5cb0) = uVar12;
              uVar12 = FUN_004013f0((void *)((int)unaff_ESI + 0x1c),0x8dc);
              *(undefined4 *)(unaff_EBP - 0x14) = uVar12;
              uVar12 = FUN_004013f0((void *)((int)unaff_ESI + 0x1c),0x8dd);
              *(undefined4 *)(unaff_EBP - 0x5c9c) = uVar12;
              uVar12 = FUN_004013f0((void *)((int)unaff_ESI + 0x1c),0x8dd);
              *(undefined4 *)(unaff_EBP - 0x5d08) = uVar12;
              uVar12 = FUN_004013f0((void *)((int)unaff_ESI + 0x1c),0x8de);
              *(undefined4 *)(unaff_EBP - 0x5cd4) = uVar12;
              uVar12 = FUN_004013f0((void *)((int)unaff_ESI + 0x1c),0x8df);
              *(undefined4 *)(unaff_EBP - 0x5c8c) = uVar12;
              uVar12 = FUN_004013f0((void *)((int)unaff_ESI + 0x1c),0x8dd);
              *(undefined4 *)(unaff_EBP - 0x5d2c) = uVar12;
              uVar12 = FUN_004013f0((void *)((int)unaff_ESI + 0x1c),0x8dd);
              *(undefined4 *)(unaff_EBP - 0x5d04) = uVar12;
              uVar12 = FUN_004013f0((void *)((int)unaff_ESI + 0x1c),0x8e0);
              *(undefined4 *)(unaff_EBP - 0x5c7c) = uVar12;
              uVar12 = FUN_004013f0((void *)((int)unaff_ESI + 0x1c),0x8e1);
              *(undefined4 *)(unaff_EBP - 0x5d00) = uVar12;
              uVar12 = FUN_004013f0((void *)((int)unaff_ESI + 0x1c),0x8e2);
              iVar9 = 0x8e3;
            }
            else {
              uVar12 = FUN_004013f0(pvVar17,0x8d0);
              *(undefined4 *)(unaff_EBP - 0x5c90) = uVar12;
              uVar12 = FUN_004013f0((void *)((int)unaff_ESI + 0x1c),0x8d1);
              *(undefined4 *)(unaff_EBP - 0x5c88) = uVar12;
              uVar12 = FUN_004013f0((void *)((int)unaff_ESI + 0x1c),0x8d2);
              *(undefined4 *)(unaff_EBP - 0x5cb0) = uVar12;
              uVar12 = FUN_004013f0((void *)((int)unaff_ESI + 0x1c),0x8d3);
              *(undefined4 *)(unaff_EBP - 0x14) = uVar12;
              uVar12 = FUN_004013f0((void *)((int)unaff_ESI + 0x1c),0x8d4);
              *(undefined4 *)(unaff_EBP - 0x5c9c) = uVar12;
              uVar12 = FUN_004013f0((void *)((int)unaff_ESI + 0x1c),0x8d4);
              *(undefined4 *)(unaff_EBP - 0x5d08) = uVar12;
              uVar12 = FUN_004013f0((void *)((int)unaff_ESI + 0x1c),0x8d4);
              *(undefined4 *)(unaff_EBP - 0x5cd4) = uVar12;
              uVar12 = FUN_004013f0((void *)((int)unaff_ESI + 0x1c),0x8d4);
              *(undefined4 *)(unaff_EBP - 0x5c8c) = uVar12;
              uVar12 = FUN_004013f0((void *)((int)unaff_ESI + 0x1c),0x8d4);
              *(undefined4 *)(unaff_EBP - 0x5d2c) = uVar12;
              uVar12 = FUN_004013f0((void *)((int)unaff_ESI + 0x1c),0x8d4);
              *(undefined4 *)(unaff_EBP - 0x5d04) = uVar12;
              uVar12 = FUN_004013f0((void *)((int)unaff_ESI + 0x1c),0x8d5);
              *(undefined4 *)(unaff_EBP - 0x5c7c) = uVar12;
              uVar12 = FUN_004013f0((void *)((int)unaff_ESI + 0x1c),0x8d6);
              *(undefined4 *)(unaff_EBP - 0x5d00) = uVar12;
              uVar12 = FUN_004013f0((void *)((int)unaff_ESI + 0x1c),0x8d7);
              iVar9 = 0x8d8;
            }
          }
          *(undefined4 *)(unaff_EBP - 0x5ca8) = uVar12;
          uVar12 = FUN_004013f0((void *)((int)unaff_ESI + 0x1c),iVar9);
          *(undefined4 *)(unaff_EBP - 0x5ca0) = uVar12;
          pHVar7 = operator_new(0x74);
          *(House **)(unaff_EBP - 0x5cdc) = pHVar7;
          *(undefined1 *)(unaff_EBP - 4) = 0x1d;
          if (pHVar7 == (House *)0x0) {
            pHVar7 = (House *)0x0;
          }
          else {
            pHVar7 = cube::House::House(pHVar7,3,3,4);
          }
          *(House **)(unaff_EBP - 0x5c44) = pHVar7;
          *(House **)(unaff_EBP - 0x5cfc) = pHVar7;
          *(int **)(unaff_EBP - 0x5cd0) = (int *)(unaff_EDI + 0xc);
          iVar11 = FUN_0041cb40((int *)(unaff_EDI + 0xc));
          iVar9 = *(int *)(unaff_EBP - 0x5c98);
          *(int *)(unaff_EBP - 0x5cc4) = iVar11;
          pvVar17 = *(void **)(unaff_EBP - 0x5c44);
          *(undefined4 *)((int)pvVar17 + 0x60) =
               *(undefined4 *)(*(int *)(unaff_EBP - 0x5c94) + 0x10 + iVar9 * 4);
          iVar9 = *(int *)(*(int *)(unaff_EBP - 0x5c94) + 0x10 + iVar9 * 4);
          if ((((iVar9 == 2) || (iVar9 == 3)) || (iVar9 == 4)) || (iVar9 == 5)) {
            puVar16 = FUN_004d1950(pvVar17,0,0,0);
            pvVar17 = *(void **)(unaff_EBP - 0x5c44);
            *puVar16 = 2;
            puVar16 = FUN_004d1950(pvVar17,0,1,0);
            pvVar17 = *(void **)(unaff_EBP - 0x5c44);
            *puVar16 = 2;
            puVar16 = FUN_004d1950(pvVar17,1,1,0);
            pvVar17 = *(void **)(unaff_EBP - 0x5c44);
            *puVar16 = 2;
            puVar16 = FUN_004d1950(pvVar17,1,0,0);
            pvVar17 = *(void **)(unaff_EBP - 0x5c44);
            *puVar16 = 2;
            puVar16 = FUN_004d1950(pvVar17,0,0,1);
            pvVar17 = *(void **)(unaff_EBP - 0x5c44);
            *puVar16 = 1;
            puVar16 = FUN_004d1950(pvVar17,0,1,1);
            pvVar17 = *(void **)(unaff_EBP - 0x5c44);
            *puVar16 = 1;
            puVar16 = FUN_004d1950(pvVar17,0,1,1);
            pvVar17 = *(void **)(unaff_EBP - 0x5c44);
            puVar16[8] = 3;
            puVar16 = FUN_004d1950(pvVar17,1,1,1);
            pvVar17 = *(void **)(unaff_EBP - 0x5c44);
            *puVar16 = 1;
            puVar16 = FUN_004d1950(pvVar17,1,0,1);
            pvVar17 = *(void **)(unaff_EBP - 0x5c44);
            *puVar16 = 1;
            puVar16 = FUN_004d1950(pvVar17,0,0,2);
            pvVar17 = *(void **)(unaff_EBP - 0x5c44);
            *puVar16 = 3;
            puVar16 = FUN_004d1950(pvVar17,0,1,2);
            pvVar17 = *(void **)(unaff_EBP - 0x5c44);
            *puVar16 = 3;
            puVar16 = FUN_004d1950(pvVar17,1,1,2);
            *puVar16 = 3;
LAB_004e6f79:
            iVar9 = 0;
LAB_004e6f7d:
            iVar11 = 1;
LAB_004e6f7f:
            puVar16 = FUN_004d1950(*(void **)(unaff_EBP - 0x5c44),iVar11,iVar9,2);
            *puVar16 = 3;
          }
          else {
            if (iVar9 == 1) {
              puVar16 = FUN_004d1950(pvVar17,0,0,0);
              pvVar17 = *(void **)(unaff_EBP - 0x5c44);
              *puVar16 = 2;
              puVar16 = FUN_004d1950(pvVar17,0,0,1);
              pvVar17 = *(void **)(unaff_EBP - 0x5c44);
              *puVar16 = 1;
              puVar16 = FUN_004d1950(pvVar17,0,0,1);
              pvVar17 = *(void **)(unaff_EBP - 0x5c44);
              puVar16[8] = 2;
              puVar16 = FUN_004d1950(pvVar17,0,0,2);
              pvVar17 = *(void **)(unaff_EBP - 0x5c44);
              *puVar16 = 1;
              puVar16 = FUN_004d1950(pvVar17,0,0,2);
              pvVar17 = *(void **)(unaff_EBP - 0x5c44);
              puVar16[3] = 1;
              puVar16 = FUN_004d1950(pvVar17,0,0,3);
              pvVar17 = *(void **)(unaff_EBP - 0x5c44);
              *puVar16 = 3;
              puVar16 = FUN_004d1950(pvVar17,1,0,0);
              pvVar17 = *(void **)(unaff_EBP - 0x5c44);
              *puVar16 = 2;
              puVar16 = FUN_004d1950(pvVar17,1,0,1);
              pvVar17 = *(void **)(unaff_EBP - 0x5c44);
              *puVar16 = 1;
              puVar16 = FUN_004d1950(pvVar17,1,0,1);
              pvVar17 = *(void **)(unaff_EBP - 0x5c44);
              puVar16[8] = 2;
              puVar16 = FUN_004d1950(pvVar17,1,0,2);
              pvVar17 = *(void **)(unaff_EBP - 0x5c44);
              *puVar16 = 1;
              puVar16 = FUN_004d1950(pvVar17,1,0,2);
              pvVar17 = *(void **)(unaff_EBP - 0x5c44);
              puVar16[8] = 1;
              puVar16 = FUN_004d1950(pvVar17,1,0,3);
              pvVar17 = *(void **)(unaff_EBP - 0x5c44);
              *puVar16 = 3;
              puVar16 = FUN_004d1950(pvVar17,2,0,0);
              *puVar16 = 2;
              puVar16 = FUN_004d1950(*(void **)(unaff_EBP - 0x5c44),2,0,1);
              pvVar17 = *(void **)(unaff_EBP - 0x5c44);
              *puVar16 = 1;
              puVar16 = FUN_004d1950(pvVar17,2,0,1);
              pvVar17 = *(void **)(unaff_EBP - 0x5c44);
              puVar16[8] = 2;
              puVar16 = FUN_004d1950(pvVar17,2,0,2);
              pvVar17 = *(void **)(unaff_EBP - 0x5c44);
              *puVar16 = 1;
              puVar16 = FUN_004d1950(pvVar17,2,0,2);
              pvVar17 = *(void **)(unaff_EBP - 0x5c44);
              puVar16[8] = 1;
              puVar16 = FUN_004d1950(pvVar17,2,0,3);
              pvVar17 = *(void **)(unaff_EBP - 0x5c44);
              *puVar16 = 3;
              puVar16 = FUN_004d1950(pvVar17,0,1,0);
              pvVar17 = *(void **)(unaff_EBP - 0x5c44);
              *puVar16 = 2;
              puVar16 = FUN_004d1950(pvVar17,0,1,1);
              pvVar17 = *(void **)(unaff_EBP - 0x5c44);
              *puVar16 = 1;
              puVar16 = FUN_004d1950(pvVar17,0,1,1);
              pvVar17 = *(void **)(unaff_EBP - 0x5c44);
              puVar16[8] = 2;
              puVar16 = FUN_004d1950(pvVar17,0,1,2);
              *puVar16 = 3;
              uVar10 = rand();
              uVar10 = uVar10 & 0x80000001;
              bVar45 = uVar10 == 0;
              if ((int)uVar10 < 0) {
                bVar45 = (uVar10 - 1 | 0xfffffffe) == 0xffffffff;
              }
              if (!bVar45) {
                puVar16 = FUN_004d1950(*(void **)(unaff_EBP - 0x5c44),2,1,0);
                pvVar17 = *(void **)(unaff_EBP - 0x5c44);
                *puVar16 = 2;
                puVar16 = FUN_004d1950(pvVar17,2,1,1);
                pvVar17 = *(void **)(unaff_EBP - 0x5c44);
                *puVar16 = 1;
                puVar16 = FUN_004d1950(pvVar17,2,1,1);
                pvVar17 = *(void **)(unaff_EBP - 0x5c44);
                puVar16[8] = 2;
                puVar16 = FUN_004d1950(pvVar17,2,1,2);
                *puVar16 = 3;
              }
              puVar16 = FUN_004d1950(*(void **)(unaff_EBP - 0x5c44),1,1,0);
              pvVar17 = *(void **)(unaff_EBP - 0x5c44);
              *puVar16 = 2;
              puVar16 = FUN_004d1950(pvVar17,1,1,1);
              pvVar17 = *(void **)(unaff_EBP - 0x5c44);
              *puVar16 = 1;
              puVar16 = FUN_004d1950(pvVar17,1,1,1);
              pvVar17 = *(void **)(unaff_EBP - 0x5c44);
              puVar16[8] = 3;
              puVar16 = FUN_004d1950(pvVar17,1,1,2);
              pvVar17 = *(void **)(unaff_EBP - 0x5c44);
              *puVar16 = 3;
              puVar16 = FUN_004d1950(pvVar17,1,2,0);
              pvVar17 = *(void **)(unaff_EBP - 0x5c44);
              *puVar16 = 2;
              puVar16 = FUN_004d1950(pvVar17,1,2,1);
              *puVar16 = 1;
              iVar9 = 2;
              goto LAB_004e6f7d;
            }
            iVar9 = rand();
            iVar9 = iVar9 % 3;
            if (iVar9 != 0) {
              if (iVar9 != 1) {
                if (iVar9 == 2) {
                  uVar10 = rand();
                  uVar10 = uVar10 & 0x80000001;
                  bVar45 = uVar10 == 0;
                  if ((int)uVar10 < 0) {
                    bVar45 = (uVar10 - 1 | 0xfffffffe) == 0xffffffff;
                  }
                  if (bVar45) {
                    puVar16 = FUN_004d1950(*(void **)(unaff_EBP - 0x5c44),0,0,0);
                    pvVar17 = *(void **)(unaff_EBP - 0x5c44);
                    *puVar16 = 2;
                    puVar16 = FUN_004d1950(pvVar17,0,0,1);
                    pvVar17 = *(void **)(unaff_EBP - 0x5c44);
                    *puVar16 = 1;
                    puVar16 = FUN_004d1950(pvVar17,0,0,2);
                    pvVar17 = *(void **)(unaff_EBP - 0x5c44);
                    *puVar16 = 1;
                    puVar16 = FUN_004d1950(pvVar17,0,0,2);
                    pvVar17 = *(void **)(unaff_EBP - 0x5c44);
                    puVar16[3] = 1;
                    puVar16 = FUN_004d1950(pvVar17,0,0,3);
                    pvVar17 = *(void **)(unaff_EBP - 0x5c44);
                    *puVar16 = 3;
                    puVar16 = FUN_004d1950(pvVar17,1,0,0);
                    pvVar17 = *(void **)(unaff_EBP - 0x5c44);
                    *puVar16 = 2;
                    puVar16 = FUN_004d1950(pvVar17,1,0,1);
                    pvVar17 = *(void **)(unaff_EBP - 0x5c44);
                    *puVar16 = 1;
                    puVar16 = FUN_004d1950(pvVar17,1,0,2);
                    pvVar17 = *(void **)(unaff_EBP - 0x5c44);
                    *puVar16 = 1;
                    puVar16 = FUN_004d1950(pvVar17,1,0,3);
                    pvVar17 = *(void **)(unaff_EBP - 0x5c44);
                    *puVar16 = 3;
                    puVar16 = FUN_004d1950(pvVar17,2,0,0);
                    pvVar17 = *(void **)(unaff_EBP - 0x5c44);
                    *puVar16 = 2;
                    puVar16 = FUN_004d1950(pvVar17,2,0,1);
                    pvVar17 = *(void **)(unaff_EBP - 0x5c44);
                    *puVar16 = 1;
                    puVar16 = FUN_004d1950(pvVar17,2,0,1);
                    pvVar17 = *(void **)(unaff_EBP - 0x5c44);
                    puVar16[8] = 1;
                    puVar20 = FUN_004d1950(pvVar17,2,0,2);
                    iVar9 = 3;
                  }
                  else {
                    puVar16 = FUN_004d1950(*(void **)(unaff_EBP - 0x5c44),0,0,0);
                    pvVar17 = *(void **)(unaff_EBP - 0x5c44);
                    *puVar16 = 2;
                    puVar16 = FUN_004d1950(pvVar17,0,0,1);
                    pvVar17 = *(void **)(unaff_EBP - 0x5c44);
                    *puVar16 = 1;
                    puVar16 = FUN_004d1950(pvVar17,0,0,2);
                    pvVar17 = *(void **)(unaff_EBP - 0x5c44);
                    *puVar16 = 3;
                    puVar16 = FUN_004d1950(pvVar17,1,0,0);
                    pvVar17 = *(void **)(unaff_EBP - 0x5c44);
                    *puVar16 = 2;
                    puVar16 = FUN_004d1950(pvVar17,1,0,1);
                    pvVar17 = *(void **)(unaff_EBP - 0x5c44);
                    *puVar16 = 1;
                    puVar16 = FUN_004d1950(pvVar17,1,0,1);
                    pvVar17 = *(void **)(unaff_EBP - 0x5c44);
                    puVar16[8] = 1;
                    puVar16 = FUN_004d1950(pvVar17,1,0,2);
                    pvVar17 = *(void **)(unaff_EBP - 0x5c44);
                    *puVar16 = 3;
                    puVar16 = FUN_004d1950(pvVar17,2,0,0);
                    pvVar17 = *(void **)(unaff_EBP - 0x5c44);
                    *puVar16 = 2;
                    puVar20 = FUN_004d1950(pvVar17,2,0,1);
                    iVar9 = 2;
                  }
                  pvVar17 = *(void **)(unaff_EBP - 0x5c44);
                  *puVar20 = 1;
                  puVar16 = FUN_004d1950(pvVar17,2,0,iVar9);
                  *puVar16 = 3;
                  uVar10 = rand();
                  uVar10 = uVar10 & 0x80000001;
                  bVar45 = uVar10 == 0;
                  if ((int)uVar10 < 0) {
                    bVar45 = (uVar10 - 1 | 0xfffffffe) == 0xffffffff;
                  }
                  if (!bVar45) {
                    puVar16 = FUN_004d1950(*(void **)(unaff_EBP - 0x5c44),0,1,0);
                    pvVar17 = *(void **)(unaff_EBP - 0x5c44);
                    *puVar16 = 2;
                    puVar16 = FUN_004d1950(pvVar17,0,1,1);
                    pvVar17 = *(void **)(unaff_EBP - 0x5c44);
                    *puVar16 = 1;
                    puVar16 = FUN_004d1950(pvVar17,0,1,2);
                    *puVar16 = 3;
                  }
                  uVar10 = rand();
                  uVar10 = uVar10 & 0x80000001;
                  bVar45 = uVar10 == 0;
                  if ((int)uVar10 < 0) {
                    bVar45 = (uVar10 - 1 | 0xfffffffe) == 0xffffffff;
                  }
                  if (!bVar45) {
                    puVar16 = FUN_004d1950(*(void **)(unaff_EBP - 0x5c44),2,1,0);
                    pvVar17 = *(void **)(unaff_EBP - 0x5c44);
                    *puVar16 = 2;
                    puVar16 = FUN_004d1950(pvVar17,2,1,1);
                    pvVar17 = *(void **)(unaff_EBP - 0x5c44);
                    *puVar16 = 1;
                    puVar16 = FUN_004d1950(pvVar17,2,1,2);
                    *puVar16 = 3;
                  }
                  puVar16 = FUN_004d1950(*(void **)(unaff_EBP - 0x5c44),1,1,0);
                  pvVar17 = *(void **)(unaff_EBP - 0x5c44);
                  *puVar16 = 2;
                  puVar16 = FUN_004d1950(pvVar17,1,1,1);
                  *puVar16 = 1;
                  iVar9 = 1;
                  goto LAB_004e6f7d;
                }
                goto LAB_004e6f8d;
              }
              puVar16 = FUN_004d1950(*(void **)(unaff_EBP - 0x5c44),0,0,0);
              pvVar17 = *(void **)(unaff_EBP - 0x5c44);
              *puVar16 = 2;
              puVar16 = FUN_004d1950(pvVar17,0,0,1);
              pvVar17 = *(void **)(unaff_EBP - 0x5c44);
              *puVar16 = 1;
              puVar16 = FUN_004d1950(pvVar17,0,0,2);
              pvVar17 = *(void **)(unaff_EBP - 0x5c44);
              *puVar16 = 3;
              puVar16 = FUN_004d1950(pvVar17,1,0,0);
              pvVar17 = *(void **)(unaff_EBP - 0x5c44);
              *puVar16 = 2;
              puVar16 = FUN_004d1950(pvVar17,1,0,1);
              pvVar17 = *(void **)(unaff_EBP - 0x5c44);
              *puVar16 = 1;
              puVar16 = FUN_004d1950(pvVar17,1,0,2);
              pvVar17 = *(void **)(unaff_EBP - 0x5c44);
              *puVar16 = 3;
              puVar16 = FUN_004d1950(pvVar17,0,1,0);
              pvVar17 = *(void **)(unaff_EBP - 0x5c44);
              *puVar16 = 2;
              puVar16 = FUN_004d1950(pvVar17,0,1,1);
              pvVar17 = *(void **)(unaff_EBP - 0x5c44);
              *puVar16 = 1;
              puVar16 = FUN_004d1950(pvVar17,0,1,1);
              pvVar17 = *(void **)(unaff_EBP - 0x5c44);
              puVar16[8] = 1;
              puVar16 = FUN_004d1950(pvVar17,0,1,2);
              pvVar17 = *(void **)(unaff_EBP - 0x5c44);
              *puVar16 = 3;
              puVar16 = FUN_004d1950(pvVar17,1,1,0);
              pvVar17 = *(void **)(unaff_EBP - 0x5c44);
              *puVar16 = 2;
              puVar16 = FUN_004d1950(pvVar17,1,1,1);
              *puVar16 = 1;
              uVar10 = rand();
              uVar10 = uVar10 & 0x80000001;
              bVar45 = uVar10 == 0;
              if ((int)uVar10 < 0) {
                bVar45 = (uVar10 - 1 | 0xfffffffe) == 0xffffffff;
              }
              pvVar17 = *(void **)(unaff_EBP - 0x5c44);
              iVar9 = 2;
              if (!bVar45) {
                puVar16 = FUN_004d1950(pvVar17,1,1,2);
                pvVar17 = *(void **)(unaff_EBP - 0x5c44);
                *puVar16 = 1;
                puVar16 = FUN_004d1950(pvVar17,1,1,2);
                pvVar17 = *(void **)(unaff_EBP - 0x5c44);
                iVar9 = 3;
                puVar16[3] = 1;
              }
              puVar16 = FUN_004d1950(pvVar17,1,1,iVar9);
              *puVar16 = 3;
              uVar10 = rand();
              uVar10 = uVar10 & 0x80000001;
              bVar45 = uVar10 == 0;
              if ((int)uVar10 < 0) {
                bVar45 = (uVar10 - 1 | 0xfffffffe) == 0xffffffff;
              }
              if (bVar45) goto LAB_004e6f8d;
              puVar16 = FUN_004d1950(*(void **)(unaff_EBP - 0x5c44),0,2,0);
              pvVar17 = *(void **)(unaff_EBP - 0x5c44);
              *puVar16 = 2;
              puVar16 = FUN_004d1950(pvVar17,0,2,1);
              iVar9 = 2;
              *puVar16 = 1;
              iVar11 = 0;
              goto LAB_004e6f7f;
            }
            puVar16 = FUN_004d1950(*(void **)(unaff_EBP - 0x5c44),0,0,0);
            pvVar17 = *(void **)(unaff_EBP - 0x5c44);
            *puVar16 = 2;
            puVar16 = FUN_004d1950(pvVar17,0,0,1);
            pvVar17 = *(void **)(unaff_EBP - 0x5c44);
            *puVar16 = 1;
            puVar16 = FUN_004d1950(pvVar17,0,0,2);
            pvVar17 = *(void **)(unaff_EBP - 0x5c44);
            *puVar16 = 1;
            puVar16 = FUN_004d1950(pvVar17,0,0,2);
            pvVar17 = *(void **)(unaff_EBP - 0x5c44);
            puVar16[8] = 1;
            puVar16 = FUN_004d1950(pvVar17,0,0,2);
            pvVar17 = *(void **)(unaff_EBP - 0x5c44);
            puVar16[3] = 1;
            puVar16 = FUN_004d1950(pvVar17,0,0,3);
            pvVar17 = *(void **)(unaff_EBP - 0x5c44);
            *puVar16 = 3;
            puVar16 = FUN_004d1950(pvVar17,2,0,0);
            pvVar17 = *(void **)(unaff_EBP - 0x5c44);
            *puVar16 = 2;
            puVar16 = FUN_004d1950(pvVar17,2,0,1);
            pvVar17 = *(void **)(unaff_EBP - 0x5c44);
            *puVar16 = 1;
            puVar16 = FUN_004d1950(pvVar17,2,0,2);
            pvVar17 = *(void **)(unaff_EBP - 0x5c44);
            *puVar16 = 1;
            puVar16 = FUN_004d1950(pvVar17,2,0,2);
            pvVar17 = *(void **)(unaff_EBP - 0x5c44);
            puVar16[3] = 1;
            puVar16 = FUN_004d1950(pvVar17,2,0,3);
            pvVar17 = *(void **)(unaff_EBP - 0x5c44);
            *puVar16 = 3;
            puVar16 = FUN_004d1950(pvVar17,0,1,0);
            pvVar17 = *(void **)(unaff_EBP - 0x5c44);
            *puVar16 = 2;
            puVar16 = FUN_004d1950(pvVar17,0,1,1);
            *puVar16 = 1;
            uVar10 = rand();
            uVar10 = uVar10 & 0x80000001;
            bVar45 = uVar10 == 0;
            if ((int)uVar10 < 0) {
              bVar45 = (uVar10 - 1 | 0xfffffffe) == 0xffffffff;
            }
            pvVar17 = *(void **)(unaff_EBP - 0x5c44);
            iVar9 = 2;
            if (bVar45) {
              puVar16 = FUN_004d1950(pvVar17,0,1,2);
              pvVar17 = *(void **)(unaff_EBP - 0x5c44);
              iVar9 = 3;
              *puVar16 = 1;
            }
            puVar16 = FUN_004d1950(pvVar17,0,1,iVar9);
            *puVar16 = 3;
            uVar10 = rand();
            uVar10 = uVar10 & 0x80000001;
            bVar45 = uVar10 == 0;
            if ((int)uVar10 < 0) {
              bVar45 = (uVar10 - 1 | 0xfffffffe) == 0xffffffff;
            }
            if (!bVar45) {
              puVar16 = FUN_004d1950(*(void **)(unaff_EBP - 0x5c44),2,1,0);
              pvVar17 = *(void **)(unaff_EBP - 0x5c44);
              *puVar16 = 2;
              puVar16 = FUN_004d1950(pvVar17,2,1,1);
              pvVar17 = *(void **)(unaff_EBP - 0x5c44);
              *puVar16 = 1;
              puVar16 = FUN_004d1950(pvVar17,2,1,2);
              *puVar16 = 3;
            }
            uVar10 = rand();
            uVar10 = uVar10 & 0x80000001;
            bVar45 = uVar10 == 0;
            if ((int)uVar10 < 0) {
              bVar45 = (uVar10 - 1 | 0xfffffffe) == 0xffffffff;
            }
            if (bVar45) {
              puVar16 = FUN_004d1950(*(void **)(unaff_EBP - 0x5c44),1,0,0);
              pvVar17 = *(void **)(unaff_EBP - 0x5c44);
              *puVar16 = 2;
              puVar16 = FUN_004d1950(pvVar17,1,0,1);
              *puVar16 = 1;
              goto LAB_004e6f79;
            }
            puVar16 = FUN_004d1950(*(void **)(unaff_EBP - 0x5c44),1,0,1);
            *puVar16 = 5;
          }
LAB_004e6f8d:
          *(undefined4 *)(*(int *)(unaff_EBP - 0x5c44) + 4) =
               *(undefined4 *)
                (*(int *)(unaff_EBP - 0x5c94) + 0x14 + *(int *)(unaff_EBP - 0x5c98) * 4);
          uVar10 = rand();
          uVar10 = uVar10 & 0x80000001;
          bVar45 = uVar10 == 0;
          if ((int)uVar10 < 0) {
            bVar45 = (uVar10 - 1 | 0xfffffffe) == 0xffffffff;
          }
          *(bool *)(*(int *)(unaff_EBP - 0x5c44) + 8) = bVar45;
          FUN_004e1eb0((undefined4 *)(unaff_EBP - 0x5d58));
          iVar9 = *(int *)(unaff_EBP - 0x5c44);
          *(undefined1 *)(unaff_EBP - 4) = 0x1e;
          *(undefined4 *)(unaff_EBP - 0x5c5c) = 0;
          *(undefined4 *)(unaff_EBP - 0x5cb8) = 0;
          iVar9 = FUN_004d8dc0(iVar9);
          if (0 < iVar9) {
            *(undefined4 *)(unaff_EBP - 0x5c60) = 0;
            do {
              iVar9 = *(int *)(unaff_EBP - 0x5c44);
              *(undefined4 *)(unaff_EBP - 0x5c6c) = 0;
              iVar9 = FUN_004d8de0(iVar9);
              if (0 < iVar9) {
                iVar9 = *(int *)(unaff_EBP - 0x5c6c);
                *(undefined4 *)(unaff_EBP - 0x5c78) = 0;
                do {
                  pcVar29 = FUN_004d1950(*(void **)(unaff_EBP - 0x5c44),*(int *)(unaff_EBP - 0x5cb8)
                                         ,iVar9,1);
                  if (((*pcVar29 == '\x01') &&
                      (puVar16 = FUN_004d1950(*(void **)(unaff_EBP - 0x5c44),
                                              *(int *)(unaff_EBP - 0x5cb8),
                                              *(int *)(unaff_EBP - 0x5c6c),2), puVar16[3] == '\0'))
                     && (puVar16 = FUN_004d1950(*(void **)(unaff_EBP - 0x5c44),
                                                *(int *)(unaff_EBP - 0x5cb8),
                                                *(int *)(unaff_EBP - 0x5c6c),1),
                        puVar16[8] != '\x03')) {
                    iVar9 = *(int *)(unaff_EBP - 0x5c60);
                    uVar40 = *(int *)(unaff_EBP - 0x5c78) + 7 +
                             **(int **)(unaff_EBP - 0x5cf4) * 0x100 + *(int *)(unaff_EBP - 0x5cac);
                    iVar11 = **(int **)(unaff_EBP - 0x5cf8);
                    iVar57 = *(int *)(unaff_EBP - 0x5cf0);
                    *(undefined4 *)(unaff_EBP - 0x5c54) = 0;
                    uVar10 = iVar9 + 7 + iVar11 * 0x100 + iVar57;
                    *(uint *)(unaff_EBP - 0x5cd8) = uVar40;
                    *(uint *)(unaff_EBP - 0x5c58) = uVar10;
                    *(undefined4 *)(unaff_EBP - 0x5c50) = 0xd;
                    do {
                      *(uint *)(unaff_EBP - 0x5c84) = uVar40;
                      *(undefined4 *)(unaff_EBP - 0x5c74) = 0xd;
                      do {
                        iVar9 = FUN_00406100(unaff_ESI,uVar10,uVar40,unaff_EDI);
                        *(int *)(unaff_EBP - 0x5c64) = iVar9;
                        if (iVar9 != 0) {
                          iVar9 = FUN_004061d0(iVar9);
                          iVar11 = FUN_00406250(*(int *)(unaff_EBP - 0x5c64));
                          if (*(int *)(unaff_EBP - 0x5c54) < iVar9 + iVar11) {
                            uVar12 = FUN_004061d0(*(int *)(unaff_EBP - 0x5c64));
                            iVar9 = *(int *)(unaff_EBP - 0x5c64);
                            *(undefined4 *)(unaff_EBP - 0x5c54) = uVar12;
                            iVar9 = FUN_00406250(iVar9);
                            *(int *)(unaff_EBP - 0x5c54) = *(int *)(unaff_EBP - 0x5c54) + iVar9;
                          }
                          unaff_ESI = *(void **)(unaff_EBP - 0x5c68);
                        }
                        uVar10 = *(uint *)(unaff_EBP - 0x5c58);
                        uVar40 = *(int *)(unaff_EBP - 0x5c84) + 1;
                        piVar26 = (int *)(unaff_EBP - 0x5c74);
                        *piVar26 = *piVar26 + -1;
                        iVar9 = *piVar26;
                        *(uint *)(unaff_EBP - 0x5c84) = uVar40;
                      } while (iVar9 != 0);
                      uVar40 = *(uint *)(unaff_EBP - 0x5cd8);
                      uVar10 = uVar10 + 1;
                      piVar26 = (int *)(unaff_EBP - 0x5c50);
                      *piVar26 = *piVar26 + -1;
                      iVar9 = *piVar26;
                      *(uint *)(unaff_EBP - 0x5c58) = uVar10;
                    } while (iVar9 != 0);
                    puVar16 = FUN_004d1950(*(void **)(unaff_EBP - 0x5c44),
                                           *(int *)(unaff_EBP - 0x5cb8),*(int *)(unaff_EBP - 0x5c6c)
                                           ,1);
                    iVar9 = *(int *)(unaff_EBP - 0x5c54);
                    *(int *)(puVar16 + 4) = iVar9;
                    iVar11 = *(int *)(unaff_EBP - 0x5c5c);
                    if (*(int *)(unaff_EBP - 0x5c5c) < iVar9) {
                      iVar11 = iVar9;
                    }
                    *(int *)(unaff_EBP - 0x5c5c) = iVar11;
                  }
                  iVar9 = *(int *)(unaff_EBP - 0x5c44);
                  *(int *)(unaff_EBP - 0x5c6c) = *(int *)(unaff_EBP - 0x5c6c) + 1;
                  *(int *)(unaff_EBP - 0x5c78) = *(int *)(unaff_EBP - 0x5c78) + 0xd;
                  iVar11 = FUN_004d8de0(iVar9);
                  iVar9 = *(int *)(unaff_EBP - 0x5c6c);
                } while (iVar9 < iVar11);
              }
              iVar9 = *(int *)(unaff_EBP - 0x5c44);
              *(int *)(unaff_EBP - 0x5cb8) = *(int *)(unaff_EBP - 0x5cb8) + 1;
              *(int *)(unaff_EBP - 0x5c60) = *(int *)(unaff_EBP - 0x5c60) + 0xd;
              iVar9 = FUN_004d8dc0(iVar9);
            } while (*(int *)(unaff_EBP - 0x5cb8) < iVar9);
          }
          pvVar17 = *(void **)(unaff_EBP - 0x5c44);
          *(undefined4 *)(unaff_EBP - 0x5c6c) = 0;
          iVar9 = FUN_004d8dc0((int)pvVar17);
          if (0 < iVar9) {
            do {
              iVar11 = 0;
              iVar9 = FUN_004d8de0((int)pvVar17);
              if (0 < iVar9) {
                do {
                  pcVar29 = FUN_004d1950(pvVar17,*(int *)(unaff_EBP - 0x5c6c),iVar11,1);
                  if (((*pcVar29 == '\x01') &&
                      (puVar16 = FUN_004d1950(pvVar17,*(int *)(unaff_EBP - 0x5c6c),iVar11,2),
                      puVar16[3] == '\0')) &&
                     ((puVar16 = FUN_004d1950(pvVar17,*(int *)(unaff_EBP - 0x5c6c),iVar11,1),
                      *(int *)(puVar16 + 4) == *(int *)(unaff_EBP - 0x5c5c) &&
                      (puVar16 = FUN_004d1950(pvVar17,*(int *)(unaff_EBP - 0x5c6c),iVar11,1),
                      puVar16[8] != '\x03')))) {
                    puVar13 = FUN_00402990((void *)(unaff_EBP - 0x3bc),
                                           *(undefined4 *)(unaff_EBP - 0x5c6c),iVar11,1);
                    FUN_0042feb0((void *)(unaff_EBP - 0x5d58),puVar13);
                  }
                  iVar11 = iVar11 + 1;
                  iVar9 = FUN_004d8de0((int)pvVar17);
                } while (iVar11 < iVar9);
              }
              iVar11 = *(int *)(unaff_EBP - 0x5c6c) + 1;
              *(int *)(unaff_EBP - 0x5c6c) = iVar11;
              iVar9 = FUN_004d8dc0((int)pvVar17);
            } while (iVar11 < iVar9);
            unaff_EDI = *(int *)(unaff_EBP - 0x5c70);
          }
          bVar45 = FUN_004e28d0((int *)(unaff_EBP - 0x5d58));
          if (!bVar45) {
            uVar10 = FUN_00420020((int *)(unaff_EBP - 0x5d58));
            uVar40 = rand();
            puVar13 = (undefined4 *)FUN_0041e2e0((void *)(unaff_EBP - 0x5d58),uVar40 % uVar10);
            FUN_00401060((void *)(unaff_EBP - 0xdc),puVar13);
            piVar26 = (int *)FUN_004013d0((void *)(unaff_EBP - 0xdc),2);
            iVar9 = *piVar26;
            piVar26 = (int *)FUN_004013d0((void *)(unaff_EBP - 0xdc),1);
            iVar11 = *piVar26;
            piVar26 = (int *)FUN_004013d0((void *)(unaff_EBP - 0xdc),0);
            pvVar17 = *(void **)(unaff_EBP - 0x5c44);
            puVar16 = FUN_004d1950(pvVar17,*piVar26,iVar11,iVar9);
            puVar16[2] = 1;
          }
          *(undefined4 *)(unaff_EBP - 0x5c54) = 0;
          iVar9 = FUN_004d8dc0((int)pvVar17);
          if (0 < iVar9) {
            iVar9 = *(int *)(unaff_EBP - 0x5c54);
            do {
              *(undefined4 *)(unaff_EBP - 0x5c6c) = 0;
              iVar11 = FUN_004d8de0((int)pvVar17);
              if (0 < iVar11) {
                do {
                  iVar11 = 0;
                  iVar9 = FUN_004d8e00((int)pvVar17);
                  if (0 < iVar9) {
                    do {
                      pcVar29 = FUN_004d1950(pvVar17,*(int *)(unaff_EBP - 0x5c54),
                                             *(int *)(unaff_EBP - 0x5c6c),iVar11);
                      if (*pcVar29 == '\x05') {
                        uVar10 = *(uint *)(*(int *)(unaff_EBP - 0x5c94) + 0x14 +
                                          *(int *)(unaff_EBP - 0x5c98) * 4) & 0x80000001;
                        if ((int)uVar10 < 0) {
                          uVar10 = (uVar10 - 1 | 0xfffffffe) + 1;
                        }
                        iVar9 = *(int *)(unaff_EBP - 0x5c6c);
                        iVar57 = *(int *)(unaff_EBP - 0x5c54);
                        *(uint *)(unaff_EBP - 0x5cd8) = uVar10;
                        puVar16 = FUN_004d1950(pvVar17,iVar57,iVar9,iVar11);
                        uVar39 = (undefined1)*(undefined4 *)(unaff_EBP - 0x5cd8);
                      }
                      else {
                        uVar10 = rand();
                        uVar10 = uVar10 & 0x80000003;
                        if ((int)uVar10 < 0) {
                          uVar10 = (uVar10 - 1 | 0xfffffffc) + 1;
                        }
                        iVar9 = *(int *)(unaff_EBP - 0x5c6c);
                        iVar57 = *(int *)(unaff_EBP - 0x5c54);
                        *(uint *)(unaff_EBP - 0x5cd8) = uVar10;
                        puVar16 = FUN_004d1950(pvVar17,iVar57,iVar9,iVar11);
                        uVar39 = (undefined1)*(undefined4 *)(unaff_EBP - 0x5cd8);
                      }
                      puVar16[1] = uVar39;
                      iVar11 = iVar11 + 1;
                      iVar9 = FUN_004d8e00((int)pvVar17);
                    } while (iVar11 < iVar9);
                  }
                  iVar11 = *(int *)(unaff_EBP - 0x5c6c) + 1;
                  *(int *)(unaff_EBP - 0x5c6c) = iVar11;
                  iVar9 = FUN_004d8de0((int)pvVar17);
                } while (iVar11 < iVar9);
                iVar9 = *(int *)(unaff_EBP - 0x5c54);
              }
              iVar9 = iVar9 + 1;
              *(int *)(unaff_EBP - 0x5c54) = iVar9;
              iVar11 = FUN_004d8dc0((int)pvVar17);
            } while (iVar9 < iVar11);
            unaff_EDI = *(int *)(unaff_EBP - 0x5c70);
          }
          *(undefined4 *)(unaff_EBP - 0x5c84) = 0;
          *(undefined1 *)(unaff_EBP - 0x5ca1) = 1;
          iVar9 = FUN_004d8e00((int)pvVar17);
          iVar9 = iVar9 + -1;
          *(int *)(unaff_EBP - 0x5c60) = iVar9;
          while (-1 < iVar9) {
            *(undefined4 *)(unaff_EBP - 0x5c54) = 0;
            iVar9 = FUN_004d8dc0((int)pvVar17);
            if (0 < iVar9) {
              *(undefined4 *)(unaff_EBP - 0x5cb8) = 0;
              do {
                *(undefined4 *)(unaff_EBP - 0x5c78) = 0;
                iVar9 = FUN_004d8de0((int)pvVar17);
                if (0 < iVar9) {
                  iVar9 = *(int *)(unaff_EBP - 0x5c78);
                  *(undefined4 *)(unaff_EBP - 0x5c6c) = 0;
                  do {
                    puVar16 = FUN_004d1950(pvVar17,*(int *)(unaff_EBP - 0x5c54),iVar9,
                                           *(int *)(unaff_EBP - 0x5c60));
                    if (puVar16[2] != '\0') {
                      iVar9 = *(int *)(unaff_EBP - 0x5cf0);
                      uVar40 = *(int *)(unaff_EBP - 0x5cac) + 6 +
                               **(int **)(unaff_EBP - 0x5cf4) * 0x100 + *(int *)(unaff_EBP - 0x5c6c)
                      ;
                      iVar11 = **(int **)(unaff_EBP - 0x5cf8);
                      iVar57 = *(int *)(unaff_EBP - 0x5cb8);
                      *(uint *)(unaff_EBP - 0x5cdc) = uVar40;
                      uVar10 = iVar9 + 6 + iVar11 * 0x100 + iVar57;
                      *(uint *)(unaff_EBP - 0x5c58) = uVar10;
                      *(undefined4 *)(unaff_EBP - 0x5c64) = 0xf;
                      do {
                        *(uint *)(unaff_EBP - 0x5c50) = uVar40;
                        *(undefined4 *)(unaff_EBP - 0x5c74) = 0xf;
                        do {
                          iVar9 = FUN_00406100(*(void **)(unaff_EBP - 0x5c68),uVar10,uVar40,
                                               unaff_EDI);
                          *(int *)(unaff_EBP - 0x5cd8) = iVar9;
                          if (iVar9 != 0) {
                            iVar11 = FUN_004061d0(iVar9);
                            iVar9 = *(int *)(unaff_EBP - 0x5cd8);
                            *(int *)(unaff_EBP - 0x5c44) = iVar11 - *(int *)(unaff_EBP - 0x5c5c);
                            iVar9 = FUN_00406250(iVar9);
                            iVar9 = *(int *)(unaff_EBP - 0x5c44) + iVar9;
                            if ((*(char *)(unaff_EBP - 0x5ca1) != '\0') ||
                               (*(int *)(unaff_EBP - 0x5c84) < iVar9)) {
                              *(int *)(unaff_EBP - 0x5c84) = iVar9;
                              *(undefined1 *)(unaff_EBP - 0x5ca1) = 0;
                            }
                          }
                          uVar10 = *(uint *)(unaff_EBP - 0x5c58);
                          uVar40 = *(int *)(unaff_EBP - 0x5c50) + 1;
                          piVar26 = (int *)(unaff_EBP - 0x5c74);
                          *piVar26 = *piVar26 + -1;
                          iVar9 = *piVar26;
                          *(uint *)(unaff_EBP - 0x5c50) = uVar40;
                        } while (iVar9 != 0);
                        uVar40 = *(uint *)(unaff_EBP - 0x5cdc);
                        uVar10 = uVar10 + 1;
                        piVar26 = (int *)(unaff_EBP - 0x5c64);
                        *piVar26 = *piVar26 + -1;
                        iVar9 = *piVar26;
                        *(uint *)(unaff_EBP - 0x5c58) = uVar10;
                      } while (iVar9 != 0);
                    }
                    *(int *)(unaff_EBP - 0x5c78) = *(int *)(unaff_EBP - 0x5c78) + 1;
                    *(int *)(unaff_EBP - 0x5c6c) = *(int *)(unaff_EBP - 0x5c6c) + 0xd;
                    iVar11 = FUN_004d8de0((int)pvVar17);
                    iVar9 = *(int *)(unaff_EBP - 0x5c78);
                  } while (iVar9 < iVar11);
                }
                *(int *)(unaff_EBP - 0x5c54) = *(int *)(unaff_EBP - 0x5c54) + 1;
                *(int *)(unaff_EBP - 0x5cb8) = *(int *)(unaff_EBP - 0x5cb8) + 0xd;
                iVar9 = FUN_004d8dc0((int)pvVar17);
              } while (*(int *)(unaff_EBP - 0x5c54) < iVar9);
            }
            piVar26 = (int *)(unaff_EBP - 0x5c60);
            *piVar26 = *piVar26 + -1;
            iVar9 = *piVar26;
          }
          puVar13 = FUN_00402990((void *)(unaff_EBP - 0x578),
                                 **(int **)(unaff_EBP - 0x5cf8) * 0x100 +
                                 *(int *)(unaff_EBP - 0x5cf0) + 7,
                                 **(int **)(unaff_EBP - 0x5cf4) * 0x100 +
                                 *(int *)(unaff_EBP - 0x5cac) + 7,
                                 *(int *)(unaff_EBP - 0x5c84) + *(int *)(unaff_EBP - 0x5c5c) + -6);
          FUN_00401060((void *)((int)pvVar17 + 0xc),puVar13);
          FUN_004f2be0((void *)(unaff_EDI + 0x88),(undefined4 *)(unaff_EBP - 0x5cfc));
          pvVar5 = *(void **)(unaff_EBP - 0x5cfc);
          pvVar17 = (void *)((int)pvVar5 + 0xc);
          *(void **)(unaff_EBP - 0x5cb8) = pvVar17;
          piVar26 = (int *)FUN_004013d0(pvVar17,0);
          *(int **)(unaff_EBP - 0x5c84) = piVar26;
          iVar9 = *piVar26;
          *(int *)(unaff_EBP - 0x5c64) = iVar9 + -2;
          *(int *)(unaff_EBP - 0x5c54) = iVar9 + -2;
          piVar26 = (int *)FUN_004013d0(pvVar17,1);
          *(int **)(unaff_EBP - 0x5c44) = piVar26;
          iVar9 = *piVar26 + -2;
          *(int *)(unaff_EBP - 0x5c78) = iVar9;
          *(int *)(unaff_EBP - 0x5c6c) = iVar9;
          *(undefined4 *)(unaff_EBP - 0x5c5c) = 0;
          iVar11 = FUN_004d8dc0((int)pvVar5);
          if (0 < iVar11) {
            *(undefined4 *)(unaff_EBP - 0x5c60) = 0;
            do {
              iVar11 = 0;
              iVar9 = FUN_004d8de0((int)pvVar5);
              if (0 < iVar9) {
                iVar9 = 0;
                *(undefined4 *)(unaff_EBP - 0x5c58) = 0;
                do {
                  *(int *)(unaff_EBP - 0x5cdc) =
                       **(int **)(unaff_EBP - 0x5c84) + *(int *)(unaff_EBP - 0x5c60) + 0xd;
                  iVar57 = *(int *)(unaff_EBP - 0x5c5c);
                  *(int *)(unaff_EBP - 0x5cd8) = **(int **)(unaff_EBP - 0x5c44) + 0xd + iVar9;
                  pcVar29 = FUN_004d1950(pvVar5,iVar57,iVar11,0);
                  if (*pcVar29 != '\0') {
                    iVar9 = *(int *)(unaff_EBP - 0x5c54);
                    if (*(int *)(unaff_EBP - 0x5c54) < *(int *)(unaff_EBP - 0x5cdc)) {
                      iVar9 = *(int *)(unaff_EBP - 0x5cdc);
                    }
                    *(int *)(unaff_EBP - 0x5c54) = iVar9;
                    iVar9 = *(int *)(unaff_EBP - 0x5c6c);
                    if (*(int *)(unaff_EBP - 0x5c6c) < *(int *)(unaff_EBP - 0x5cd8)) {
                      iVar9 = *(int *)(unaff_EBP - 0x5cd8);
                    }
                    *(int *)(unaff_EBP - 0x5c6c) = iVar9;
                  }
                  *(int *)(unaff_EBP - 0x5c58) = *(int *)(unaff_EBP - 0x5c58) + 0xd;
                  iVar11 = iVar11 + 1;
                  iVar57 = FUN_004d8de0((int)pvVar5);
                  iVar9 = *(int *)(unaff_EBP - 0x5c58);
                } while (iVar11 < iVar57);
              }
              iVar9 = *(int *)(unaff_EBP - 0x5c5c);
              *(int *)(unaff_EBP - 0x5c60) = *(int *)(unaff_EBP - 0x5c60) + 0xd;
              iVar9 = iVar9 + 1;
              *(int *)(unaff_EBP - 0x5c5c) = iVar9;
              iVar11 = FUN_004d8dc0((int)pvVar5);
            } while (iVar9 < iVar11);
            iVar9 = *(int *)(unaff_EBP - 0x5c6c);
          }
          iVar11 = *(int *)(unaff_EBP - 0x5cbc);
          iVar41 = *(int *)(unaff_EBP - 0x5c54) + 2;
          iVar9 = iVar9 + 2;
          iVar57 = *(int *)(iVar11 + 0x18);
          *(int *)(unaff_EBP - 0x5c54) = iVar41;
          *(int *)(unaff_EBP - 0x5c6c) = iVar9;
          if (((iVar57 == 1) && (iVar11 = *(int *)(iVar11 + 0x1c), iVar11 != 4)) && (iVar11 != 5)) {
            uVar10 = *(uint *)(unaff_EBP - 0x5c64);
            *(uint *)(unaff_EBP - 0x5c60) = uVar10;
            if ((int)uVar10 <= iVar41) {
              do {
                uVar40 = *(uint *)(unaff_EBP - 0x5c78);
                *(uint *)(unaff_EBP - 0x5c5c) = uVar40;
                if ((int)uVar40 <= iVar9) {
                  iVar9 = *(int *)(unaff_EBP - 0x5c70);
                  do {
                    iVar11 = FUN_00406100(*(void **)(unaff_EBP - 0x5c68),uVar10,uVar40,iVar9);
                    *(int *)(unaff_EBP - 0x5cdc) = iVar11;
                    if (iVar11 != 0) {
                      iVar9 = FUN_004061d0(iVar11);
                      iVar11 = FUN_00406250(*(int *)(unaff_EBP - 0x5cdc));
                      pvVar17 = *(void **)(unaff_EBP - 0x5c68);
                      iVar11 = iVar11 + iVar9 + -1;
                      iVar9 = *(int *)(unaff_EBP - 0x5c70);
                      uVar10 = *(uint *)(unaff_EBP - 0x5c5c);
                      *(int *)(unaff_EBP - 0x5c58) = iVar11;
                      puVar16 = FUN_00405fd0(pvVar17,*(uint *)(unaff_EBP - 0x5c60),uVar10,iVar11,
                                             iVar9);
                      uVar12 = FUN_004061f0((int)puVar16);
                      if ((char)uVar12 == '\0') {
                        pvVar17 = *(void **)(unaff_EBP - 0x5c68);
                        do {
                          iVar11 = *(int *)(unaff_EBP - 0x5c58) + -1;
                          uVar10 = *(uint *)(unaff_EBP - 0x5c5c);
                          uVar40 = *(uint *)(unaff_EBP - 0x5c60);
                          *(int *)(unaff_EBP - 0x5c58) = iVar11;
                          puVar16 = FUN_00405fd0(pvVar17,uVar40,uVar10,iVar11,iVar9);
                          uVar12 = FUN_004061f0((int)puVar16);
                        } while ((char)uVar12 == '\0');
                        pvVar5 = *(void **)(unaff_EBP - 0x5cfc);
                      }
                      puVar16 = FUN_00405fd0(*(void **)(unaff_EBP - 0x5c68),
                                             *(uint *)(unaff_EBP - 0x5c60),
                                             *(uint *)(unaff_EBP - 0x5c5c),
                                             *(int *)(unaff_EBP - 0x5c58),iVar9);
                      bVar3 = FUN_00406280((int)puVar16);
                      if ((CONCAT31(extraout_var_02,bVar3) != 0xb) ||
                         (piVar26 = (int *)FUN_004013d0((void *)((int)pvVar5 + 0xc),2),
                         5 < (5 - *(int *)(unaff_EBP - 0x5c58)) + *piVar26)) goto LAB_004e7caf;
                    }
                    uVar10 = *(uint *)(unaff_EBP - 0x5c60);
                    uVar40 = *(int *)(unaff_EBP - 0x5c5c) + 1;
                    *(uint *)(unaff_EBP - 0x5c5c) = uVar40;
                  } while ((int)uVar40 <= *(int *)(unaff_EBP - 0x5c6c));
                  iVar9 = *(int *)(unaff_EBP - 0x5c6c);
                  iVar41 = *(int *)(unaff_EBP - 0x5c54);
                }
                uVar10 = uVar10 + 1;
                *(uint *)(unaff_EBP - 0x5c60) = uVar10;
              } while ((int)uVar10 <= iVar41);
              uVar10 = *(uint *)(unaff_EBP - 0x5c64);
            }
            *(uint *)(unaff_EBP - 0x5c5c) = uVar10;
            if ((int)uVar10 <= iVar41) {
              pvVar17 = *(void **)(unaff_EBP - 0x5c68);
              do {
                uVar40 = *(uint *)(unaff_EBP - 0x5c78);
                *(uint *)(unaff_EBP - 0x5c60) = uVar40;
                if ((int)uVar40 <= iVar9) {
                  iVar9 = *(int *)(unaff_EBP - 0x5c70);
                  do {
                    iVar11 = FUN_00406100(pvVar17,uVar10,uVar40,iVar9);
                    *(int *)(unaff_EBP - 0x5cdc) = iVar11;
                    if (iVar11 != 0) {
                      iVar9 = FUN_004061d0(iVar11);
                      iVar11 = FUN_00406250(*(int *)(unaff_EBP - 0x5cdc));
                      iVar11 = iVar11 + iVar9 + -1;
                      iVar9 = *(int *)(unaff_EBP - 0x5c70);
                      uVar10 = *(uint *)(unaff_EBP - 0x5c60);
                      uVar40 = *(uint *)(unaff_EBP - 0x5c5c);
                      *(int *)(unaff_EBP - 0x5c58) = iVar11;
                      puVar16 = FUN_00405fd0(pvVar17,uVar40,uVar10,iVar11,iVar9);
                      uVar12 = FUN_004061f0((int)puVar16);
                      cVar4 = (char)uVar12;
                      while (cVar4 == '\0') {
                        iVar11 = *(int *)(unaff_EBP - 0x5c58) + -1;
                        uVar10 = *(uint *)(unaff_EBP - 0x5c60);
                        uVar40 = *(uint *)(unaff_EBP - 0x5c5c);
                        *(int *)(unaff_EBP - 0x5c58) = iVar11;
                        puVar16 = FUN_00405fd0(pvVar17,uVar40,uVar10,iVar11,iVar9);
                        uVar12 = FUN_004061f0((int)puVar16);
                        cVar4 = (char)uVar12;
                      }
                      puVar16 = FUN_00405fd0(pvVar17,*(uint *)(unaff_EBP - 0x5c5c),
                                             *(uint *)(unaff_EBP - 0x5c60),
                                             *(int *)(unaff_EBP - 0x5c58),iVar9);
                      *(undefined **)(unaff_EBP - 0x5cdc) = puVar16;
                      bVar3 = FUN_00406280((int)puVar16);
                      if (CONCAT31(extraout_var_03,bVar3) == 0xb) {
                        FUN_004c6470((void *)(unaff_EBP - 0x58),*(byte **)(unaff_EBP - 0x5cdc));
                        if (((*(int *)(unaff_EBP - 0x5c5c) == *(int *)(unaff_EBP - 0x5c64)) ||
                            (*(int *)(unaff_EBP - 0x5c5c) == *(int *)(unaff_EBP - 0x5c54))) ||
                           ((*(int *)(unaff_EBP - 0x5c60) == *(int *)(unaff_EBP - 0x5c78) ||
                            (*(int *)(unaff_EBP - 0x5c60) == *(int *)(unaff_EBP - 0x5c6c))))) {
                          pfVar6 = (float *)FUN_00401080((void *)(unaff_EBP - 0x3d4),0x42200000,
                                                         0x42200000,0x42200000);
                          dVar49 = (double)*(int *)(unaff_EBP - 0x5c5c) * 0.05 + 843.0;
                          fVar46 = FUN_004d5d30(SUB84(dVar49,0),(int)((ulonglong)dVar49 >> 0x20),
                                                (double)*(int *)(unaff_EBP - 0x5c60) * 0.05 + 984.0)
                          ;
                          pfVar22 = (float *)FUN_004e1520((float *)(unaff_EBP - 0x638),(float)fVar46
                                                          ,pfVar6);
                          pfVar6 = (float *)(unaff_EBP - 0x3ec);
                          puVar13 = FUN_00401080((void *)(unaff_EBP - 0x590),0x430c0000,0x430c0000,
                                                 0x430c0000);
                          puVar13 = (undefined4 *)FUN_004014f0(puVar13,pfVar6,pfVar22);
                          FUN_00401060((void *)(unaff_EBP - 0x58),puVar13);
                          FUN_00401610((void *)(unaff_EBP - 0x58),0.7);
                        }
                        pvVar5 = *(void **)(unaff_EBP - 0x5cb8);
                        *(int *)(unaff_EBP - 0x5c58) = *(int *)(unaff_EBP - 0x5c58) + 1;
                        piVar26 = (int *)FUN_004013d0(pvVar5,2);
                        iVar11 = *piVar26;
                        *(int **)(unaff_EBP - 0x5cdc) = piVar26;
                        if (*(int *)(unaff_EBP - 0x5c58) < iVar11 + 6) {
                          do {
                            FUN_0041d160((void *)(unaff_EBP - 0x5d4c),unaff_EBP - 0x58);
                            iVar11 = iVar9;
                            puVar20 = FUN_00401370((void *)(unaff_EBP - 0x5e08),
                                                   (undefined1 *)(unaff_EBP - 0x5d4c),0xb);
                            FUN_0041ff00(pvVar17,*(float *)(unaff_EBP - 0x5c5c),
                                         *(uint *)(unaff_EBP - 0x5c60),*(int *)(unaff_EBP - 0x5c58),
                                         puVar20,iVar11);
                            iVar11 = **(int **)(unaff_EBP - 0x5cdc);
                            iVar57 = *(int *)(unaff_EBP - 0x5c58) + 1;
                            *(int *)(unaff_EBP - 0x5c58) = iVar57;
                          } while (iVar57 < iVar11 + 6);
                        }
                      }
                    }
                    uVar10 = *(uint *)(unaff_EBP - 0x5c5c);
                    uVar40 = *(int *)(unaff_EBP - 0x5c60) + 1;
                    *(uint *)(unaff_EBP - 0x5c60) = uVar40;
                  } while ((int)uVar40 <= *(int *)(unaff_EBP - 0x5c6c));
                  iVar9 = *(int *)(unaff_EBP - 0x5c6c);
                  iVar41 = *(int *)(unaff_EBP - 0x5c54);
                }
                uVar10 = uVar10 + 1;
                *(uint *)(unaff_EBP - 0x5c5c) = uVar10;
              } while ((int)uVar10 <= iVar41);
              pvVar5 = *(void **)(unaff_EBP - 0x5cfc);
            }
          }
LAB_004e7caf:
          iVar9 = *(int *)(unaff_EBP - 0x5c98);
          iVar11 = *(int *)(unaff_EBP - 0x5c94);
          *(undefined4 *)(unaff_EBP - 0x5c6c) = 1;
          switch(*(undefined4 *)(iVar11 + 0x10 + iVar9 * 4)) {
          case 1:
            *(undefined4 *)(unaff_EBP - 0x5c6c) = 2;
            break;
          case 2:
            *(undefined4 *)(unaff_EBP - 0x5c6c) = 3;
            break;
          case 3:
            *(undefined4 *)(unaff_EBP - 0x5c6c) = 4;
            break;
          case 4:
            *(undefined4 *)(unaff_EBP - 0x5c6c) = 5;
            break;
          case 5:
            *(undefined4 *)(unaff_EBP - 0x5c6c) = 6;
          }
          iVar9 = 0;
          *(undefined4 *)(unaff_EBP - 0x5c5c) = 0;
          iVar11 = FUN_004d8dc0((int)pvVar5);
          if (0 < iVar11) {
            do {
              *(undefined4 *)(unaff_EBP - 0x5c60) = 0;
              iVar11 = FUN_004d8de0((int)pvVar5);
              if (0 < iVar11) {
                do {
                  uVar10 = 0;
                  iVar9 = FUN_004d8e00((int)pvVar5);
                  if (0 < iVar9) {
                    do {
                      pcVar29 = FUN_004d1950(pvVar5,*(int *)(unaff_EBP - 0x5c5c),
                                             *(int *)(unaff_EBP - 0x5c60),uVar10);
                      cVar4 = *pcVar29;
                      if (cVar4 == '\x01') {
                        iVar11 = *(int *)(unaff_EBP - 0x5c60) + -1;
                        iVar9 = *(int *)(unaff_EBP - 0x5c5c);
                        *(int *)(unaff_EBP - 0x5c64) = iVar11;
                        pcVar29 = FUN_004d1950(pvVar5,iVar9,iVar11,uVar10);
                        if (*pcVar29 == '\0') {
                          puVar16 = FUN_004d1950(pvVar5,*(int *)(unaff_EBP - 0x5c5c),
                                                 *(int *)(unaff_EBP - 0x5c60),uVar10);
                          if ((puVar16[2] == '\0') &&
                             ((pcVar29 = FUN_004d1950(pvVar5,*(int *)(unaff_EBP - 0x5c5c),
                                                      *(int *)(unaff_EBP - 0x5c64),uVar10 - 1),
                              *pcVar29 == '\0' ||
                              (pcVar29 = FUN_004d1950(pvVar5,*(int *)(unaff_EBP - 0x5c5c),
                                                      *(int *)(unaff_EBP - 0x5c64),uVar10 - 1),
                              *pcVar29 == '\x03')))) {
                            if (uVar10 == 1) {
                              iVar9 = rand();
                              if (iVar9 % 6 == 0) {
                                puVar13 = FUN_004010b0((void *)(unaff_EBP - 0x6960),0,0,0,0);
                                FUN_004e1200((void *)(unaff_EBP - 0x67a8),(int)puVar13);
                                iVar23 = 0;
                                piVar26 = (int *)(unaff_EBP - 0x67a8);
                                cVar4 = '\0';
                                iVar9 = *(int *)(unaff_EBP - 0x5c70);
                                uVar12 = 6;
                                uVar42 = 0;
                                uVar40 = uVar10;
                                piVar18 = (int *)FUN_004013d0((void *)((int)pvVar5 + 0xc),2);
                                iVar11 = *piVar18 + 7;
                                iVar57 = FUN_00402160(*(int *)(unaff_EBP - 0x5d04));
                                iVar57 = **(int **)(unaff_EBP - 0x5c44) + 7 +
                                         (*(int *)(unaff_EBP - 0x5c60) * 0xd - iVar57 / 2);
                                iVar41 = FUN_00402150(*(int *)(unaff_EBP - 0x5d04));
                                puVar14 = FUN_00402990((void *)(unaff_EBP - 0x41c),
                                                       **(int **)(unaff_EBP - 0x5c84) + 7 +
                                                       (*(int *)(unaff_EBP - 0x5c5c) * 0xd -
                                                       iVar41 / 2),iVar57,iVar11);
                                pvVar17 = *(void **)(unaff_EBP - 0x5d04);
                              }
                              else {
LAB_004e817c:
                                puVar13 = FUN_004010b0((void *)(unaff_EBP - 0x69a0),0,0,0,0);
                                FUN_004e1200((void *)(unaff_EBP - 0x6510),(int)puVar13);
                                iVar23 = 0;
                                piVar26 = (int *)(unaff_EBP - 0x6510);
                                cVar4 = '\0';
                                iVar9 = *(int *)(unaff_EBP - 0x5c70);
                                uVar40 = 1;
                                uVar12 = 6;
                                uVar42 = 0;
                                piVar18 = (int *)FUN_004013d0((void *)((int)pvVar5 + 0xc),2);
                                iVar41 = uVar10 * 7 + *piVar18;
                                iVar11 = FUN_00402160(*(int *)(unaff_EBP - 0x5d08));
                                iVar11 = **(int **)(unaff_EBP - 0x5c44) + 7 +
                                         (*(int *)(unaff_EBP - 0x5c60) * 0xd - iVar11 / 2);
                                iVar57 = FUN_00402150(*(int *)(unaff_EBP - 0x5d08));
                                puVar14 = FUN_00402990((void *)(unaff_EBP - 0x434),
                                                       **(int **)(unaff_EBP - 0x5c84) + 7 +
                                                       (*(int *)(unaff_EBP - 0x5c5c) * 0xd -
                                                       iVar57 / 2),iVar11,iVar41);
                                pvVar17 = *(void **)(unaff_EBP - 0x5d08);
                              }
                            }
                            else {
                              if (((int)uVar10 < 2) || (iVar9 = rand(), iVar9 % 6 != 0))
                              goto LAB_004e817c;
                              puVar13 = FUN_004010b0((void *)(unaff_EBP - 0x6980),0,0,0,0);
                              FUN_004e1200((void *)(unaff_EBP - 0x6188),(int)puVar13);
                              iVar23 = 0;
                              piVar26 = (int *)(unaff_EBP - 0x6188);
                              cVar4 = '\0';
                              iVar9 = *(int *)(unaff_EBP - 0x5c70);
                              uVar40 = 1;
                              uVar12 = 6;
                              uVar42 = 0;
                              piVar18 = (int *)FUN_004013d0((void *)((int)pvVar5 + 0xc),2);
                              iVar41 = uVar10 * 7 + *piVar18;
                              iVar11 = FUN_00402160(*(int *)(unaff_EBP - 0x5d2c));
                              iVar11 = **(int **)(unaff_EBP - 0x5c44) + 7 +
                                       (*(int *)(unaff_EBP - 0x5c60) * 0xd - iVar11 / 2);
                              iVar57 = FUN_00402150(*(int *)(unaff_EBP - 0x5d2c));
                              puVar14 = FUN_00402990((void *)(unaff_EBP - 0x5a8),
                                                     **(int **)(unaff_EBP - 0x5c84) + 7 +
                                                     (*(int *)(unaff_EBP - 0x5c5c) * 0xd -
                                                     iVar57 / 2),iVar11,iVar41);
                              pvVar17 = *(void **)(unaff_EBP - 0x5d2c);
                            }
LAB_004e8519:
                            FUN_00524540(*(void **)(unaff_EBP - 0x5c68),pvVar17,puVar14,uVar42,
                                         uVar12,uVar40,iVar9,cVar4,piVar26,iVar23);
                          }
                          else {
                            puVar13 = FUN_004010b0((void *)(unaff_EBP - 0x69c0),0,0,0,0);
                            FUN_004e1200((void *)(unaff_EBP - 0x61a0),(int)puVar13);
                            piVar18 = (int *)FUN_004013d0((void *)((int)pvVar5 + 0xc),2);
                            *(int *)(unaff_EBP - 0x5c50) = *(int *)(unaff_EBP - 0x5c60) * 0xd;
                            iVar52 = 0;
                            *(int *)(unaff_EBP - 0x5c74) = *(int *)(unaff_EBP - 0x5c5c) * 0xd;
                            piVar26 = (int *)(unaff_EBP - 0x61a0);
                            cVar4 = '\0';
                            iVar9 = *(int *)(unaff_EBP - 0x5c70);
                            iVar11 = *(int *)(unaff_EBP - 0x5c6c);
                            uVar12 = 6;
                            iVar41 = *piVar18 + uVar10 * 7;
                            uVar40 = 0;
                            *(uint *)(unaff_EBP - 0x5cd8) = uVar10 * 7;
                            iVar57 = *(int *)(unaff_EBP - 0x5cd4);
                            *(int **)(unaff_EBP - 0x5cdc) = piVar18;
                            iVar57 = FUN_00402160(iVar57);
                            iVar57 = **(int **)(unaff_EBP - 0x5c44) + 7 +
                                     (*(int *)(unaff_EBP - 0x5c50) - iVar57 / 2);
                            iVar23 = FUN_00402150(*(int *)(unaff_EBP - 0x5cd4));
                            puVar14 = FUN_00402990((void *)(unaff_EBP - 0x650),
                                                   **(int **)(unaff_EBP - 0x5c84) + 7 +
                                                   (*(int *)(unaff_EBP - 0x5c74) - iVar23 / 2),
                                                   iVar57,iVar41);
                            FUN_00524540(*(void **)(unaff_EBP - 0x5c68),
                                         *(void **)(unaff_EBP - 0x5cd4),puVar14,uVar40,uVar12,iVar11
                                         ,iVar9,cVar4,piVar26,iVar52);
                            puVar16 = FUN_004d1950(pvVar5,*(int *)(unaff_EBP - 0x5c5c),
                                                   *(int *)(unaff_EBP - 0x5c60),uVar10);
                            if (puVar16[2] != '\0') {
                              puVar13 = FUN_004010b0((void *)(unaff_EBP - 0x69e0),0,0,0,0);
                              FUN_004e1200((void *)(unaff_EBP - 0x66d0),(int)puVar13);
                              iVar23 = 0;
                              piVar26 = (int *)(unaff_EBP - 0x66d0);
                              cVar4 = '\x01';
                              iVar9 = *(int *)(unaff_EBP - 0x5c70);
                              uVar40 = *(uint *)(unaff_EBP - 0x5c6c);
                              uVar12 = 6;
                              iVar11 = **(int **)(unaff_EBP - 0x5cdc) +
                                       *(int *)(unaff_EBP - 0x5cd8) + -4;
                              uVar42 = 0;
                              iVar57 = FUN_00402160(*(int *)(unaff_EBP - 0x5c90));
                              iVar57 = **(int **)(unaff_EBP - 0x5c44) + -6 +
                                       (*(int *)(unaff_EBP - 0x5c50) - iVar57 / 2);
                              iVar41 = FUN_00402150(*(int *)(unaff_EBP - 0x5c90));
                              puVar14 = FUN_00402990((void *)(unaff_EBP - 0x44c),
                                                     **(int **)(unaff_EBP - 0x5c84) + 7 +
                                                     (*(int *)(unaff_EBP - 0x5c74) - iVar41 / 2),
                                                     iVar57,iVar11);
                              pvVar17 = *(void **)(unaff_EBP - 0x5c90);
                              goto LAB_004e8519;
                            }
                          }
                        }
                        else {
                          pcVar29 = FUN_004d1950(pvVar5,*(int *)(unaff_EBP - 0x5c5c),
                                                 *(int *)(unaff_EBP - 0x5c64),uVar10);
                          if (*pcVar29 != '\x01') {
                            puVar13 = FUN_004010b0((void *)(unaff_EBP - 0x6a00),0,0,0,0);
                            FUN_004e1200((void *)(unaff_EBP - 0x61b8),(int)puVar13);
                            iVar23 = 0;
                            piVar26 = (int *)(unaff_EBP - 0x61b8);
                            cVar4 = '\0';
                            iVar9 = *(int *)(unaff_EBP - 0x5c70);
                            uVar40 = 1;
                            uVar12 = 6;
                            uVar42 = 0;
                            piVar18 = (int *)FUN_004013d0((void *)((int)pvVar5 + 0xc),2);
                            iVar41 = uVar10 * 7 + *piVar18;
                            iVar11 = FUN_00402160(*(int *)(unaff_EBP - 0x5c9c));
                            iVar11 = **(int **)(unaff_EBP - 0x5c44) + 7 +
                                     (*(int *)(unaff_EBP - 0x5c60) * 0xd - iVar11 / 2);
                            iVar57 = FUN_00402150(*(int *)(unaff_EBP - 0x5c9c));
                            puVar14 = FUN_00402990((void *)(unaff_EBP - 0x5c0),
                                                   **(int **)(unaff_EBP - 0x5c84) + 7 +
                                                   (*(int *)(unaff_EBP - 0x5c5c) * 0xd - iVar57 / 2)
                                                   ,iVar11,iVar41);
                            pvVar17 = *(void **)(unaff_EBP - 0x5c9c);
                            goto LAB_004e8519;
                          }
                        }
                        iVar11 = *(int *)(unaff_EBP - 0x5c60) + 1;
                        iVar9 = *(int *)(unaff_EBP - 0x5c5c);
                        *(int *)(unaff_EBP - 0x5c64) = iVar11;
                        pcVar29 = FUN_004d1950(pvVar5,iVar9,iVar11,uVar10);
                        if (*pcVar29 == '\0') {
                          puVar16 = FUN_004d1950(pvVar5,*(int *)(unaff_EBP - 0x5c5c),
                                                 *(int *)(unaff_EBP - 0x5c60),uVar10);
                          if ((puVar16[2] == '\0') &&
                             ((pcVar29 = FUN_004d1950(pvVar5,*(int *)(unaff_EBP - 0x5c5c),
                                                      *(int *)(unaff_EBP - 0x5c64),uVar10 - 1),
                              *pcVar29 == '\0' ||
                              (pcVar29 = FUN_004d1950(pvVar5,*(int *)(unaff_EBP - 0x5c5c),
                                                      *(int *)(unaff_EBP - 0x5c64),uVar10 - 1),
                              *pcVar29 == '\x03')))) {
                            if (uVar10 == 1) {
                              iVar9 = rand();
                              if (iVar9 % 6 == 0) {
                                puVar13 = FUN_004010b0((void *)(unaff_EBP - 0x6a20),0,0,0,0);
                                FUN_004e1200((void *)(unaff_EBP - 0x6528),(int)puVar13);
                                iVar23 = 0;
                                piVar26 = (int *)(unaff_EBP - 0x6528);
                                cVar4 = '\0';
                                iVar9 = *(int *)(unaff_EBP - 0x5c70);
                                uVar12 = 6;
                                uVar42 = 2;
                                uVar40 = uVar10;
                                piVar18 = (int *)FUN_004013d0((void *)((int)pvVar5 + 0xc),2);
                                iVar11 = *piVar18 + 7;
                                iVar57 = FUN_00402160(*(int *)(unaff_EBP - 0x5d04));
                                iVar57 = **(int **)(unaff_EBP - 0x5c44) + 7 +
                                         (*(int *)(unaff_EBP - 0x5c60) * 0xd - iVar57 / 2);
                                iVar41 = FUN_00402150(*(int *)(unaff_EBP - 0x5d04));
                                puVar14 = FUN_00402990((void *)(unaff_EBP - 0x464),
                                                       **(int **)(unaff_EBP - 0x5c84) + 7 +
                                                       (*(int *)(unaff_EBP - 0x5c5c) * 0xd -
                                                       iVar41 / 2),iVar57,iVar11);
                                pvVar17 = *(void **)(unaff_EBP - 0x5d04);
                              }
                              else {
LAB_004e8755:
                                puVar13 = FUN_004010b0((void *)(unaff_EBP - 0x6a60),0,0,0,0);
                                FUN_004e1200((void *)(unaff_EBP - 0x6820),(int)puVar13);
                                iVar23 = 0;
                                piVar26 = (int *)(unaff_EBP - 0x6820);
                                cVar4 = '\0';
                                iVar9 = *(int *)(unaff_EBP - 0x5c70);
                                uVar40 = 1;
                                uVar12 = 6;
                                uVar42 = 2;
                                piVar18 = (int *)FUN_004013d0((void *)((int)pvVar5 + 0xc),2);
                                iVar41 = uVar10 * 7 + *piVar18;
                                iVar11 = FUN_00402160(*(int *)(unaff_EBP - 0x5d08));
                                iVar11 = **(int **)(unaff_EBP - 0x5c44) + 7 +
                                         (*(int *)(unaff_EBP - 0x5c60) * 0xd - iVar11 / 2);
                                iVar57 = FUN_00402150(*(int *)(unaff_EBP - 0x5d08));
                                puVar14 = FUN_00402990((void *)(unaff_EBP - 0x47c),
                                                       **(int **)(unaff_EBP - 0x5c84) + 7 +
                                                       (*(int *)(unaff_EBP - 0x5c5c) * 0xd -
                                                       iVar57 / 2),iVar11,iVar41);
                                pvVar17 = *(void **)(unaff_EBP - 0x5d08);
                              }
                            }
                            else {
                              if (((int)uVar10 < 2) || (iVar9 = rand(), iVar9 % 6 != 0))
                              goto LAB_004e8755;
                              puVar13 = FUN_004010b0((void *)(unaff_EBP - 0x6a40),0,0,0,0);
                              FUN_004e1200((void *)(unaff_EBP - 0x61d0),(int)puVar13);
                              iVar23 = 0;
                              piVar26 = (int *)(unaff_EBP - 0x61d0);
                              cVar4 = '\0';
                              iVar9 = *(int *)(unaff_EBP - 0x5c70);
                              uVar40 = 1;
                              uVar12 = 6;
                              uVar42 = 2;
                              piVar18 = (int *)FUN_004013d0((void *)((int)pvVar5 + 0xc),2);
                              iVar41 = uVar10 * 7 + *piVar18;
                              iVar11 = FUN_00402160(*(int *)(unaff_EBP - 0x5d2c));
                              iVar11 = **(int **)(unaff_EBP - 0x5c44) + 7 +
                                       (*(int *)(unaff_EBP - 0x5c60) * 0xd - iVar11 / 2);
                              iVar57 = FUN_00402150(*(int *)(unaff_EBP - 0x5d2c));
                              puVar14 = FUN_00402990((void *)(unaff_EBP - 0x6ec),
                                                     **(int **)(unaff_EBP - 0x5c84) + 7 +
                                                     (*(int *)(unaff_EBP - 0x5c5c) * 0xd -
                                                     iVar57 / 2),iVar11,iVar41);
                              pvVar17 = *(void **)(unaff_EBP - 0x5d2c);
                            }
LAB_004e8af2:
                            FUN_00524540(*(void **)(unaff_EBP - 0x5c68),pvVar17,puVar14,uVar42,
                                         uVar12,uVar40,iVar9,cVar4,piVar26,iVar23);
                          }
                          else {
                            puVar13 = FUN_004010b0((void *)(unaff_EBP - 0x6a80),0,0,0,0);
                            FUN_004e1200((void *)(unaff_EBP - 0x61e8),(int)puVar13);
                            piVar18 = (int *)FUN_004013d0((void *)((int)pvVar5 + 0xc),2);
                            *(int *)(unaff_EBP - 0x5c50) = *(int *)(unaff_EBP - 0x5c60) * 0xd;
                            iVar52 = 0;
                            *(int *)(unaff_EBP - 0x5c74) = *(int *)(unaff_EBP - 0x5c5c) * 0xd;
                            piVar26 = (int *)(unaff_EBP - 0x61e8);
                            cVar4 = '\0';
                            iVar9 = *(int *)(unaff_EBP - 0x5c70);
                            iVar11 = *(int *)(unaff_EBP - 0x5c6c);
                            uVar12 = 6;
                            iVar41 = *piVar18 + uVar10 * 7;
                            uVar40 = 2;
                            *(uint *)(unaff_EBP - 0x5cd8) = uVar10 * 7;
                            iVar57 = *(int *)(unaff_EBP - 0x5cd4);
                            *(int **)(unaff_EBP - 0x5cdc) = piVar18;
                            iVar57 = FUN_00402160(iVar57);
                            iVar57 = **(int **)(unaff_EBP - 0x5c44) + 7 +
                                     (*(int *)(unaff_EBP - 0x5c50) - iVar57 / 2);
                            iVar23 = FUN_00402150(*(int *)(unaff_EBP - 0x5cd4));
                            puVar14 = FUN_00402990((void *)(unaff_EBP - 0x5d8),
                                                   **(int **)(unaff_EBP - 0x5c84) + 7 +
                                                   (*(int *)(unaff_EBP - 0x5c74) - iVar23 / 2),
                                                   iVar57,iVar41);
                            FUN_00524540(*(void **)(unaff_EBP - 0x5c68),
                                         *(void **)(unaff_EBP - 0x5cd4),puVar14,uVar40,uVar12,iVar11
                                         ,iVar9,cVar4,piVar26,iVar52);
                            puVar16 = FUN_004d1950(pvVar5,*(int *)(unaff_EBP - 0x5c5c),
                                                   *(int *)(unaff_EBP - 0x5c60),uVar10);
                            if (puVar16[2] != '\0') {
                              puVar13 = FUN_004010b0((void *)(unaff_EBP - 0x6aa0),0,0,0,0);
                              FUN_004e1200((void *)(unaff_EBP - 0x6540),(int)puVar13);
                              iVar23 = 0;
                              piVar26 = (int *)(unaff_EBP - 0x6540);
                              cVar4 = '\x01';
                              iVar9 = *(int *)(unaff_EBP - 0x5c70);
                              uVar40 = *(uint *)(unaff_EBP - 0x5c6c);
                              uVar12 = 6;
                              iVar11 = **(int **)(unaff_EBP - 0x5cdc) +
                                       *(int *)(unaff_EBP - 0x5cd8) + -4;
                              uVar42 = 2;
                              iVar57 = FUN_00402160(*(int *)(unaff_EBP - 0x5c90));
                              iVar57 = **(int **)(unaff_EBP - 0x5c44) + 0x14 +
                                       (*(int *)(unaff_EBP - 0x5c50) - iVar57 / 2);
                              iVar41 = FUN_00402150(*(int *)(unaff_EBP - 0x5c90));
                              puVar14 = FUN_00402990((void *)(unaff_EBP - 0x494),
                                                     **(int **)(unaff_EBP - 0x5c84) + 7 +
                                                     (*(int *)(unaff_EBP - 0x5c74) - iVar41 / 2),
                                                     iVar57,iVar11);
                              pvVar17 = *(void **)(unaff_EBP - 0x5c90);
                              goto LAB_004e8af2;
                            }
                          }
                        }
                        else {
                          pcVar29 = FUN_004d1950(pvVar5,*(int *)(unaff_EBP - 0x5c5c),
                                                 *(int *)(unaff_EBP - 0x5c64),uVar10);
                          if (*pcVar29 != '\x01') {
                            puVar13 = FUN_004010b0((void *)(unaff_EBP - 0x6ac0),0,0,0,0);
                            FUN_004e1200((void *)(unaff_EBP - 0x6200),(int)puVar13);
                            iVar23 = 0;
                            piVar26 = (int *)(unaff_EBP - 0x6200);
                            cVar4 = '\0';
                            iVar9 = *(int *)(unaff_EBP - 0x5c70);
                            uVar40 = 1;
                            uVar12 = 6;
                            uVar42 = 2;
                            piVar18 = (int *)FUN_004013d0((void *)((int)pvVar5 + 0xc),2);
                            iVar41 = uVar10 * 7 + *piVar18;
                            iVar11 = FUN_00402160(*(int *)(unaff_EBP - 0x5c9c));
                            iVar11 = **(int **)(unaff_EBP - 0x5c44) + 7 +
                                     (*(int *)(unaff_EBP - 0x5c60) * 0xd - iVar11 / 2);
                            iVar57 = FUN_00402150(*(int *)(unaff_EBP - 0x5c9c));
                            puVar14 = FUN_00402990((void *)(unaff_EBP - 0x668),
                                                   **(int **)(unaff_EBP - 0x5c84) + 7 +
                                                   (*(int *)(unaff_EBP - 0x5c5c) * 0xd - iVar57 / 2)
                                                   ,iVar11,iVar41);
                            pvVar17 = *(void **)(unaff_EBP - 0x5c9c);
                            goto LAB_004e8af2;
                          }
                        }
                        iVar9 = *(int *)(unaff_EBP - 0x5c60);
                        iVar11 = *(int *)(unaff_EBP - 0x5c5c) + -1;
                        *(int *)(unaff_EBP - 0x5c64) = iVar11;
                        pcVar29 = FUN_004d1950(pvVar5,iVar11,iVar9,uVar10);
                        if (*pcVar29 == '\0') {
                          puVar16 = FUN_004d1950(pvVar5,*(int *)(unaff_EBP - 0x5c5c),
                                                 *(int *)(unaff_EBP - 0x5c60),uVar10);
                          if ((puVar16[2] == '\0') &&
                             ((pcVar29 = FUN_004d1950(pvVar5,*(int *)(unaff_EBP - 0x5c64),
                                                      *(int *)(unaff_EBP - 0x5c60),uVar10 - 1),
                              *pcVar29 == '\0' ||
                              (pcVar29 = FUN_004d1950(pvVar5,*(int *)(unaff_EBP - 0x5c64),
                                                      *(int *)(unaff_EBP - 0x5c60),uVar10 - 1),
                              *pcVar29 == '\x03')))) {
                            if (uVar10 == 1) {
                              iVar9 = rand();
                              if (iVar9 % 6 == 0) {
                                puVar13 = FUN_004010b0((void *)(unaff_EBP - 0x6ae0),0,0,0,0);
                                FUN_004e1200((void *)(unaff_EBP - 0x66e8),(int)puVar13);
                                iVar23 = 0;
                                piVar26 = (int *)(unaff_EBP - 0x66e8);
                                cVar4 = '\0';
                                iVar9 = *(int *)(unaff_EBP - 0x5c70);
                                uVar12 = 6;
                                uVar42 = uVar10;
                                uVar40 = uVar10;
                                piVar18 = (int *)FUN_004013d0((void *)((int)pvVar5 + 0xc),2);
                                iVar11 = *piVar18 + 7;
                                iVar57 = FUN_00402160(*(int *)(unaff_EBP - 0x5d04));
                                iVar57 = **(int **)(unaff_EBP - 0x5c44) + 7 +
                                         (*(int *)(unaff_EBP - 0x5c60) * 0xd - iVar57 / 2);
                                iVar41 = FUN_00402150(*(int *)(unaff_EBP - 0x5d04));
                                puVar14 = FUN_00402990((void *)(unaff_EBP - 0x4ac),
                                                       **(int **)(unaff_EBP - 0x5c84) + 7 +
                                                       (*(int *)(unaff_EBP - 0x5c5c) * 0xd -
                                                       iVar41 / 2),iVar57,iVar11);
                                pvVar17 = *(void **)(unaff_EBP - 0x5d04);
                              }
                              else {
LAB_004e8d2d:
                                puVar13 = FUN_004010b0((void *)(unaff_EBP - 0x6b20),0,0,0,0);
                                FUN_004e1200((void *)(unaff_EBP - 0x6558),(int)puVar13);
                                iVar23 = 0;
                                piVar26 = (int *)(unaff_EBP - 0x6558);
                                cVar4 = '\0';
                                iVar9 = *(int *)(unaff_EBP - 0x5c70);
                                uVar40 = 1;
                                uVar12 = 6;
                                uVar42 = 1;
                                piVar18 = (int *)FUN_004013d0((void *)((int)pvVar5 + 0xc),2);
                                iVar41 = uVar10 * 7 + *piVar18;
                                iVar11 = FUN_00402160(*(int *)(unaff_EBP - 0x5d08));
                                iVar11 = **(int **)(unaff_EBP - 0x5c44) + 7 +
                                         (*(int *)(unaff_EBP - 0x5c60) * 0xd - iVar11 / 2);
                                iVar57 = FUN_00402150(*(int *)(unaff_EBP - 0x5d08));
                                puVar14 = FUN_00402990((void *)(unaff_EBP - 0x4c4),
                                                       **(int **)(unaff_EBP - 0x5c84) + 7 +
                                                       (*(int *)(unaff_EBP - 0x5c5c) * 0xd -
                                                       iVar57 / 2),iVar11,iVar41);
                                pvVar17 = *(void **)(unaff_EBP - 0x5d08);
                              }
                            }
                            else {
                              if (((int)uVar10 < 2) || (iVar9 = rand(), iVar9 % 6 != 0))
                              goto LAB_004e8d2d;
                              puVar13 = FUN_004010b0((void *)(unaff_EBP - 0x6b00),0,0,0,0);
                              FUN_004e1200((void *)(unaff_EBP - 0x6218),(int)puVar13);
                              iVar23 = 0;
                              piVar26 = (int *)(unaff_EBP - 0x6218);
                              cVar4 = '\0';
                              iVar9 = *(int *)(unaff_EBP - 0x5c70);
                              uVar40 = 1;
                              uVar12 = 6;
                              uVar42 = 1;
                              piVar18 = (int *)FUN_004013d0((void *)((int)pvVar5 + 0xc),2);
                              iVar41 = uVar10 * 7 + *piVar18;
                              iVar11 = FUN_00402160(*(int *)(unaff_EBP - 0x5d2c));
                              iVar11 = **(int **)(unaff_EBP - 0x5c44) + 7 +
                                       (*(int *)(unaff_EBP - 0x5c60) * 0xd - iVar11 / 2);
                              iVar57 = FUN_00402150(*(int *)(unaff_EBP - 0x5d2c));
                              puVar14 = FUN_00402990((void *)(unaff_EBP - 0x5f0),
                                                     **(int **)(unaff_EBP - 0x5c84) + 7 +
                                                     (*(int *)(unaff_EBP - 0x5c5c) * 0xd -
                                                     iVar57 / 2),iVar11,iVar41);
                              pvVar17 = *(void **)(unaff_EBP - 0x5d2c);
                            }
LAB_004e90c4:
                            FUN_00524540(*(void **)(unaff_EBP - 0x5c68),pvVar17,puVar14,uVar42,
                                         uVar12,uVar40,iVar9,cVar4,piVar26,iVar23);
                          }
                          else {
                            puVar13 = FUN_004010b0((void *)(unaff_EBP - 0x6b40),0,0,0,0);
                            FUN_004e1200((void *)(unaff_EBP - 0x6230),(int)puVar13);
                            piVar18 = (int *)FUN_004013d0((void *)((int)pvVar5 + 0xc),2);
                            *(int *)(unaff_EBP - 0x5c50) = *(int *)(unaff_EBP - 0x5c60) * 0xd;
                            iVar52 = 0;
                            *(int *)(unaff_EBP - 0x5c74) = *(int *)(unaff_EBP - 0x5c5c) * 0xd;
                            piVar26 = (int *)(unaff_EBP - 0x6230);
                            cVar4 = '\0';
                            iVar9 = *(int *)(unaff_EBP - 0x5c70);
                            iVar11 = *(int *)(unaff_EBP - 0x5c6c);
                            uVar12 = 6;
                            iVar41 = *piVar18 + uVar10 * 7;
                            uVar40 = 1;
                            *(uint *)(unaff_EBP - 0x5cd8) = uVar10 * 7;
                            iVar57 = *(int *)(unaff_EBP - 0x5cd4);
                            *(int **)(unaff_EBP - 0x5cdc) = piVar18;
                            iVar57 = FUN_00402160(iVar57);
                            iVar57 = **(int **)(unaff_EBP - 0x5c44) + 7 +
                                     (*(int *)(unaff_EBP - 0x5c50) - iVar57 / 2);
                            iVar23 = FUN_00402150(*(int *)(unaff_EBP - 0x5cd4));
                            puVar14 = FUN_00402990((void *)(unaff_EBP - 0x6c8),
                                                   **(int **)(unaff_EBP - 0x5c84) + 7 +
                                                   (*(int *)(unaff_EBP - 0x5c74) - iVar23 / 2),
                                                   iVar57,iVar41);
                            FUN_00524540(*(void **)(unaff_EBP - 0x5c68),
                                         *(void **)(unaff_EBP - 0x5cd4),puVar14,uVar40,uVar12,iVar11
                                         ,iVar9,cVar4,piVar26,iVar52);
                            puVar16 = FUN_004d1950(pvVar5,*(int *)(unaff_EBP - 0x5c5c),
                                                   *(int *)(unaff_EBP - 0x5c60),uVar10);
                            if (puVar16[2] != '\0') {
                              puVar13 = FUN_004010b0((void *)(unaff_EBP - 0x68b0),0,0,0,0);
                              FUN_004e1200((void *)(unaff_EBP - 0x67c0),(int)puVar13);
                              iVar23 = 0;
                              piVar26 = (int *)(unaff_EBP - 0x67c0);
                              cVar4 = '\x01';
                              iVar9 = *(int *)(unaff_EBP - 0x5c70);
                              uVar40 = *(uint *)(unaff_EBP - 0x5c6c);
                              uVar12 = 6;
                              iVar11 = **(int **)(unaff_EBP - 0x5cdc) +
                                       *(int *)(unaff_EBP - 0x5cd8) + -4;
                              uVar42 = 1;
                              iVar57 = FUN_00402160(*(int *)(unaff_EBP - 0x5c90));
                              iVar57 = **(int **)(unaff_EBP - 0x5c44) + 7 +
                                       (*(int *)(unaff_EBP - 0x5c50) - iVar57 / 2);
                              iVar41 = FUN_00402150(*(int *)(unaff_EBP - 0x5c90));
                              puVar14 = FUN_00402990((void *)(unaff_EBP - 0x4dc),
                                                     **(int **)(unaff_EBP - 0x5c84) + -6 +
                                                     (*(int *)(unaff_EBP - 0x5c74) - iVar41 / 2),
                                                     iVar57,iVar11);
                              pvVar17 = *(void **)(unaff_EBP - 0x5c90);
                              goto LAB_004e90c4;
                            }
                          }
                        }
                        else {
                          pcVar29 = FUN_004d1950(pvVar5,*(int *)(unaff_EBP - 0x5c64),
                                                 *(int *)(unaff_EBP - 0x5c60),uVar10);
                          if (*pcVar29 != '\x01') {
                            puVar13 = FUN_004010b0((void *)(unaff_EBP - 0x6af0),0,0,0,0);
                            FUN_004e1200((void *)(unaff_EBP - 0x6248),(int)puVar13);
                            iVar23 = 0;
                            piVar26 = (int *)(unaff_EBP - 0x6248);
                            cVar4 = '\0';
                            iVar9 = *(int *)(unaff_EBP - 0x5c70);
                            uVar40 = 1;
                            uVar12 = 6;
                            uVar42 = 1;
                            piVar18 = (int *)FUN_004013d0((void *)((int)pvVar5 + 0xc),2);
                            iVar41 = uVar10 * 7 + *piVar18;
                            iVar11 = FUN_00402160(*(int *)(unaff_EBP - 0x5c9c));
                            iVar11 = **(int **)(unaff_EBP - 0x5c44) + 7 +
                                     (*(int *)(unaff_EBP - 0x5c60) * 0xd - iVar11 / 2);
                            iVar57 = FUN_00402150(*(int *)(unaff_EBP - 0x5c9c));
                            puVar14 = FUN_00402990((void *)(unaff_EBP - 0x608),
                                                   **(int **)(unaff_EBP - 0x5c84) + 7 +
                                                   (*(int *)(unaff_EBP - 0x5c5c) * 0xd - iVar57 / 2)
                                                   ,iVar11,iVar41);
                            pvVar17 = *(void **)(unaff_EBP - 0x5c9c);
                            goto LAB_004e90c4;
                          }
                        }
                        iVar9 = *(int *)(unaff_EBP - 0x5c60);
                        iVar11 = *(int *)(unaff_EBP - 0x5c5c) + 1;
                        *(int *)(unaff_EBP - 0x5c64) = iVar11;
                        pcVar29 = FUN_004d1950(pvVar5,iVar11,iVar9,uVar10);
                        if (*pcVar29 == '\0') {
                          puVar16 = FUN_004d1950(pvVar5,*(int *)(unaff_EBP - 0x5c5c),
                                                 *(int *)(unaff_EBP - 0x5c60),uVar10);
                          if ((puVar16[2] == '\0') &&
                             ((pcVar29 = FUN_004d1950(pvVar5,*(int *)(unaff_EBP - 0x5c64),
                                                      *(int *)(unaff_EBP - 0x5c60),uVar10 - 1),
                              *pcVar29 == '\0' ||
                              (pcVar29 = FUN_004d1950(pvVar5,*(int *)(unaff_EBP - 0x5c64),
                                                      *(int *)(unaff_EBP - 0x5c60),uVar10 - 1),
                              *pcVar29 == '\x03')))) {
                            if (uVar10 == 1) {
                              iVar9 = rand();
                              if (iVar9 % 6 == 0) {
                                puVar13 = FUN_004010b0((void *)(unaff_EBP - 0x68d0),0,0,0,0);
                                FUN_004e1200((void *)(unaff_EBP - 0x6570),(int)puVar13);
                                iVar23 = 0;
                                piVar26 = (int *)(unaff_EBP - 0x6570);
                                cVar4 = '\0';
                                iVar9 = *(int *)(unaff_EBP - 0x5c70);
                                uVar12 = 6;
                                uVar42 = 3;
                                uVar40 = uVar10;
                                piVar18 = (int *)FUN_004013d0((void *)((int)pvVar5 + 0xc),2);
                                iVar11 = *piVar18 + 7;
                                iVar57 = FUN_00402160(*(int *)(unaff_EBP - 0x5d04));
                                iVar57 = **(int **)(unaff_EBP - 0x5c44) + 7 +
                                         (*(int *)(unaff_EBP - 0x5c60) * 0xd - iVar57 / 2);
                                iVar41 = FUN_00402150(*(int *)(unaff_EBP - 0x5d04));
                                puVar14 = FUN_00402990((void *)(unaff_EBP - 0x4f4),
                                                       **(int **)(unaff_EBP - 0x5c84) + 7 +
                                                       (*(int *)(unaff_EBP - 0x5c5c) * 0xd -
                                                       iVar41 / 2),iVar57,iVar11);
                                pvVar17 = *(void **)(unaff_EBP - 0x5d04);
                              }
                              else {
LAB_004e9300:
                                puVar13 = FUN_004010b0((void *)(unaff_EBP - 0x68f0),0,0,0,0);
                                FUN_004e1200((void *)(unaff_EBP - 0x6700),(int)puVar13);
                                iVar23 = 0;
                                piVar26 = (int *)(unaff_EBP - 0x6700);
                                cVar4 = '\0';
                                iVar9 = *(int *)(unaff_EBP - 0x5c70);
                                uVar40 = 1;
                                uVar12 = 6;
                                uVar42 = 3;
                                piVar18 = (int *)FUN_004013d0((void *)((int)pvVar5 + 0xc),2);
                                iVar41 = uVar10 * 7 + *piVar18;
                                iVar11 = FUN_00402160(*(int *)(unaff_EBP - 0x5d08));
                                iVar11 = **(int **)(unaff_EBP - 0x5c44) + 7 +
                                         (*(int *)(unaff_EBP - 0x5c60) * 0xd - iVar11 / 2);
                                iVar57 = FUN_00402150(*(int *)(unaff_EBP - 0x5d08));
                                puVar14 = FUN_00402990((void *)(unaff_EBP - 0x2fc),
                                                       **(int **)(unaff_EBP - 0x5c84) + 7 +
                                                       (*(int *)(unaff_EBP - 0x5c5c) * 0xd -
                                                       iVar57 / 2),iVar11,iVar41);
                                pvVar17 = *(void **)(unaff_EBP - 0x5d08);
                              }
                            }
                            else {
                              if (((int)uVar10 < 2) || (iVar9 = rand(), iVar9 % 6 != 0))
                              goto LAB_004e9300;
                              puVar13 = FUN_004010b0((void *)(unaff_EBP - 0x6a10),0,0,0,0);
                              FUN_004e1200((void *)(unaff_EBP - 0x6260),(int)puVar13);
                              iVar23 = 0;
                              piVar26 = (int *)(unaff_EBP - 0x6260);
                              cVar4 = '\0';
                              iVar9 = *(int *)(unaff_EBP - 0x5c70);
                              uVar40 = 1;
                              uVar12 = 6;
                              uVar42 = 3;
                              piVar18 = (int *)FUN_004013d0((void *)((int)pvVar5 + 0xc),2);
                              iVar41 = uVar10 * 7 + *piVar18;
                              iVar11 = FUN_00402160(*(int *)(unaff_EBP - 0x5d2c));
                              iVar11 = **(int **)(unaff_EBP - 0x5c44) + 7 +
                                       (*(int *)(unaff_EBP - 0x5c60) * 0xd - iVar11 / 2);
                              iVar57 = FUN_00402150(*(int *)(unaff_EBP - 0x5d2c));
                              puVar14 = FUN_00402990((void *)(unaff_EBP - 0x50c),
                                                     **(int **)(unaff_EBP - 0x5c84) + 7 +
                                                     (*(int *)(unaff_EBP - 0x5c5c) * 0xd -
                                                     iVar57 / 2),iVar11,iVar41);
                              pvVar17 = *(void **)(unaff_EBP - 0x5d2c);
                            }
                            goto LAB_004e9697;
                          }
                          puVar13 = FUN_004010b0((void *)(unaff_EBP - 0x6ab0),0,0,0,0);
                          FUN_004e1200((void *)(unaff_EBP - 0x6278),(int)puVar13);
                          piVar18 = (int *)FUN_004013d0((void *)((int)pvVar5 + 0xc),2);
                          *(int *)(unaff_EBP - 0x5c50) = *(int *)(unaff_EBP - 0x5c60) * 0xd;
                          iVar52 = 0;
                          *(int *)(unaff_EBP - 0x5c74) = *(int *)(unaff_EBP - 0x5c5c) * 0xd;
                          piVar26 = (int *)(unaff_EBP - 0x6278);
                          cVar4 = '\0';
                          iVar9 = *(int *)(unaff_EBP - 0x5c70);
                          iVar11 = *(int *)(unaff_EBP - 0x5c6c);
                          uVar12 = 6;
                          iVar41 = *piVar18 + uVar10 * 7;
                          uVar40 = 3;
                          *(uint *)(unaff_EBP - 0x5cd8) = uVar10 * 7;
                          iVar57 = *(int *)(unaff_EBP - 0x5cd4);
                          *(int **)(unaff_EBP - 0x5cdc) = piVar18;
                          iVar57 = FUN_00402160(iVar57);
                          iVar57 = **(int **)(unaff_EBP - 0x5c44) + 7 +
                                   (*(int *)(unaff_EBP - 0x5c50) - iVar57 / 2);
                          iVar23 = FUN_00402150(*(int *)(unaff_EBP - 0x5cd4));
                          puVar14 = FUN_00402990((void *)(unaff_EBP - 0x308),
                                                 **(int **)(unaff_EBP - 0x5c84) + 7 +
                                                 (*(int *)(unaff_EBP - 0x5c74) - iVar23 / 2),iVar57,
                                                 iVar41);
                          FUN_00524540(*(void **)(unaff_EBP - 0x5c68),*(void **)(unaff_EBP - 0x5cd4)
                                       ,puVar14,uVar40,uVar12,iVar11,iVar9,cVar4,piVar26,iVar52);
                          puVar16 = FUN_004d1950(pvVar5,*(int *)(unaff_EBP - 0x5c5c),
                                                 *(int *)(unaff_EBP - 0x5c60),uVar10);
                          if (puVar16[2] != '\0') {
                            puVar13 = FUN_004010b0((void *)(unaff_EBP - 0x6910),0,0,0,0);
                            FUN_004e1200((void *)(unaff_EBP - 0x6588),(int)puVar13);
                            iVar23 = 0;
                            piVar26 = (int *)(unaff_EBP - 0x6588);
                            cVar4 = '\x01';
                            iVar9 = *(int *)(unaff_EBP - 0x5c70);
                            uVar40 = *(uint *)(unaff_EBP - 0x5c6c);
                            uVar12 = 6;
                            iVar11 = **(int **)(unaff_EBP - 0x5cdc) +
                                     *(int *)(unaff_EBP - 0x5cd8) + -4;
                            uVar42 = 3;
                            iVar57 = FUN_00402160(*(int *)(unaff_EBP - 0x5c90));
                            iVar57 = **(int **)(unaff_EBP - 0x5c44) + 7 +
                                     (*(int *)(unaff_EBP - 0x5c50) - iVar57 / 2);
                            iVar41 = FUN_00402150(*(int *)(unaff_EBP - 0x5c90));
                            puVar14 = FUN_00402990((void *)(unaff_EBP - 800),
                                                   **(int **)(unaff_EBP - 0x5c84) + 0x14 +
                                                   (*(int *)(unaff_EBP - 0x5c74) - iVar41 / 2),
                                                   iVar57,iVar11);
                            pvVar17 = *(void **)(unaff_EBP - 0x5c90);
                            goto LAB_004e9697;
                          }
                        }
                        else {
                          pcVar29 = FUN_004d1950(pvVar5,*(int *)(unaff_EBP - 0x5c64),
                                                 *(int *)(unaff_EBP - 0x5c60),uVar10);
                          if (*pcVar29 != '\x01') {
                            puVar13 = FUN_004010b0((void *)(unaff_EBP - 0x6a30),0,0,0,0);
                            FUN_004e1200((void *)(unaff_EBP - 0x6290),(int)puVar13);
                            iVar23 = 0;
                            piVar26 = (int *)(unaff_EBP - 0x6290);
                            cVar4 = '\0';
                            iVar9 = *(int *)(unaff_EBP - 0x5c70);
                            uVar40 = 1;
                            uVar12 = 6;
                            uVar42 = 3;
                            piVar18 = (int *)FUN_004013d0((void *)((int)pvVar5 + 0xc),2);
                            iVar41 = uVar10 * 7 + *piVar18;
                            iVar11 = FUN_00402160(*(int *)(unaff_EBP - 0x5c9c));
                            iVar11 = **(int **)(unaff_EBP - 0x5c44) + 7 +
                                     (*(int *)(unaff_EBP - 0x5c60) * 0xd - iVar11 / 2);
                            iVar57 = FUN_00402150(*(int *)(unaff_EBP - 0x5c9c));
                            puVar14 = FUN_00402990((void *)(unaff_EBP - 0x338),
                                                   **(int **)(unaff_EBP - 0x5c84) + 7 +
                                                   (*(int *)(unaff_EBP - 0x5c5c) * 0xd - iVar57 / 2)
                                                   ,iVar11,iVar41);
                            pvVar17 = *(void **)(unaff_EBP - 0x5c9c);
                            goto LAB_004e9697;
                          }
                        }
                      }
                      else {
                        if (cVar4 == '\x02') {
                          puVar13 = FUN_004010b0((void *)(unaff_EBP - 0x6940),0,0,0,0);
                          FUN_004e1200((void *)(unaff_EBP - 0x6170),(int)puVar13);
                          iVar23 = 0;
                          piVar26 = (int *)(unaff_EBP - 0x6170);
                          cVar4 = '\x01';
                          iVar9 = *(int *)(unaff_EBP - 0x5c70);
                          uVar40 = 1;
                          uVar12 = 6;
                          puVar16 = FUN_004d1950(pvVar5,*(int *)(unaff_EBP - 0x5c5c),
                                                 *(int *)(unaff_EBP - 0x5c60),uVar10);
                          uVar42 = (uint)(byte)puVar16[1];
                          piVar18 = (int *)FUN_004013d0((void *)((int)pvVar5 + 0xc),2);
                          iVar41 = uVar10 * 7 + *piVar18;
                          iVar11 = FUN_00402160(*(int *)(unaff_EBP - 0x5c88));
                          iVar11 = **(int **)(unaff_EBP - 0x5c44) + 7 +
                                   (*(int *)(unaff_EBP - 0x5c60) * 0xd - iVar11 / 2);
                          iVar57 = FUN_00402150(*(int *)(unaff_EBP - 0x5c88));
                          puVar14 = FUN_00402990((void *)(unaff_EBP - 0x6a4),
                                                 **(int **)(unaff_EBP - 0x5c84) + 7 +
                                                 (*(int *)(unaff_EBP - 0x5c5c) * 0xd - iVar57 / 2),
                                                 iVar11,iVar41);
                          pvVar17 = *(void **)(unaff_EBP - 0x5c88);
                        }
                        else {
                          if (cVar4 != '\x05') goto LAB_004e96a2;
                          puVar13 = FUN_004010b0((void *)(unaff_EBP - 0x6930),0,0,0,0);
                          FUN_004e1200((void *)(unaff_EBP - 0x64f8),(int)puVar13);
                          iVar23 = 0;
                          piVar26 = (int *)(unaff_EBP - 0x64f8);
                          cVar4 = '\0';
                          iVar9 = *(int *)(unaff_EBP - 0x5c70);
                          uVar40 = 1;
                          uVar12 = 6;
                          puVar16 = FUN_004d1950(pvVar5,*(int *)(unaff_EBP - 0x5c5c),
                                                 *(int *)(unaff_EBP - 0x5c60),uVar10);
                          uVar42 = (uint)(byte)puVar16[1];
                          piVar18 = (int *)FUN_004013d0((void *)((int)pvVar5 + 0xc),2);
                          iVar41 = uVar10 * 7 + *piVar18;
                          iVar11 = FUN_00402160(*(int *)(unaff_EBP - 0x5ca0));
                          iVar11 = **(int **)(unaff_EBP - 0x5c44) + 7 +
                                   (*(int *)(unaff_EBP - 0x5c60) * 0xd - iVar11 / 2);
                          iVar57 = FUN_00402150(*(int *)(unaff_EBP - 0x5ca0));
                          puVar14 = FUN_00402990((void *)(unaff_EBP - 0x404),
                                                 **(int **)(unaff_EBP - 0x5c84) + 7 +
                                                 (*(int *)(unaff_EBP - 0x5c5c) * 0xd - iVar57 / 2),
                                                 iVar11,iVar41);
                          pvVar17 = *(void **)(unaff_EBP - 0x5ca0);
                        }
LAB_004e9697:
                        FUN_00524540(*(void **)(unaff_EBP - 0x5c68),pvVar17,puVar14,uVar42,uVar12,
                                     uVar40,iVar9,cVar4,piVar26,iVar23);
                      }
LAB_004e96a2:
                      uVar10 = uVar10 + 1;
                      iVar9 = FUN_004d8e00((int)pvVar5);
                    } while ((int)uVar10 < iVar9);
                  }
                  iVar11 = *(int *)(unaff_EBP - 0x5c60) + 1;
                  *(int *)(unaff_EBP - 0x5c60) = iVar11;
                  iVar9 = FUN_004d8de0((int)pvVar5);
                } while (iVar11 < iVar9);
                iVar9 = *(int *)(unaff_EBP - 0x5c5c);
              }
              iVar9 = iVar9 + 1;
              *(int *)(unaff_EBP - 0x5c5c) = iVar9;
              iVar11 = FUN_004d8dc0((int)pvVar5);
            } while (iVar9 < iVar11);
          }
          iVar9 = 0;
          *(undefined4 *)(unaff_EBP - 0x5c5c) = 0;
          iVar11 = FUN_004d8dc0((int)pvVar5);
          if (0 < iVar11) {
            do {
              *(undefined4 *)(unaff_EBP - 0x5c60) = 0;
              iVar11 = FUN_004d8de0((int)pvVar5);
              if (0 < iVar11) {
                do {
                  iVar9 = 0;
                  *(undefined4 *)(unaff_EBP - 0x5c90) = 0;
                  iVar11 = FUN_004d8e00((int)pvVar5);
                  if (0 < iVar11) {
                    *(undefined4 *)(unaff_EBP - 0x5c58) = 0;
                    do {
                      pcVar29 = FUN_004d1950(pvVar5,*(int *)(unaff_EBP - 0x5c5c),
                                             *(int *)(unaff_EBP - 0x5c60),iVar9);
                      if (*pcVar29 == '\x03') {
                        uVar12 = *(undefined4 *)(unaff_EBP - 0x5c7c);
                        *(undefined4 *)(unaff_EBP - 0x5c54) = uVar12;
                        *(undefined4 *)(unaff_EBP - 0x5cd4) = uVar12;
                        FUN_004e1e90((void *)(unaff_EBP - 0x74),0,0,0,0);
                        iVar11 = *(int *)(unaff_EBP - 0x5c60);
                        iVar57 = *(int *)(unaff_EBP - 0x5c5c) + -1;
                        *(int *)(unaff_EBP - 0x5c6c) = iVar57;
                        pcVar29 = FUN_004d1950(pvVar5,iVar57,iVar11,iVar9);
                        if (*pcVar29 != '\0') {
                          puVar13 = (undefined4 *)FUN_004013d0((void *)(unaff_EBP - 0x74),0);
                          *puVar13 = 1;
                        }
                        iVar11 = *(int *)(unaff_EBP - 0x5c60);
                        iVar57 = *(int *)(unaff_EBP - 0x5c5c) + 1;
                        *(int *)(unaff_EBP - 0x5ca0) = iVar57;
                        pcVar29 = FUN_004d1950(pvVar5,iVar57,iVar11,iVar9);
                        if (*pcVar29 != '\0') {
                          puVar13 = (undefined4 *)FUN_004013d0((void *)(unaff_EBP - 0x74),2);
                          *puVar13 = 1;
                        }
                        iVar57 = *(int *)(unaff_EBP - 0x5c60) + -1;
                        iVar11 = *(int *)(unaff_EBP - 0x5c5c);
                        *(int *)(unaff_EBP - 0x5c9c) = iVar57;
                        pcVar29 = FUN_004d1950(pvVar5,iVar11,iVar57,iVar9);
                        if (*pcVar29 != '\0') {
                          puVar13 = (undefined4 *)FUN_004013d0((void *)(unaff_EBP - 0x74),1);
                          *puVar13 = 1;
                        }
                        iVar57 = *(int *)(unaff_EBP - 0x5c60) + 1;
                        iVar11 = *(int *)(unaff_EBP - 0x5c5c);
                        *(int *)(unaff_EBP - 0x5c88) = iVar57;
                        pcVar29 = FUN_004d1950(pvVar5,iVar11,iVar57,iVar9);
                        if (*pcVar29 != '\0') {
                          puVar13 = (undefined4 *)FUN_004013d0((void *)(unaff_EBP - 0x74),3);
                          *puVar13 = 1;
                        }
                        puVar16 = FUN_004d1950(pvVar5,*(int *)(unaff_EBP - 0x5c5c),
                                               *(int *)(unaff_EBP - 0x5c60),iVar9);
                        switch(puVar16[1] & 3) {
                        case 0:
                          pcVar29 = FUN_004d1950(pvVar5,*(int *)(unaff_EBP - 0x5c5c),
                                                 *(int *)(unaff_EBP - 0x5c9c),iVar9);
                          if (*pcVar29 == '\x03') {
                            FUN_004d1950(pvVar5,*(int *)(unaff_EBP - 0x5c5c),
                                         *(int *)(unaff_EBP - 0x5c9c),iVar9);
                            FUN_004d1950(pvVar5,*(int *)(unaff_EBP - 0x5c5c),
                                         *(int *)(unaff_EBP - 0x5c60),iVar9);
                          }
                          pcVar29 = FUN_004d1950(pvVar5,*(int *)(unaff_EBP - 0x5c5c),
                                                 *(int *)(unaff_EBP - 0x5c88),iVar9);
                          if (*pcVar29 == '\x03') {
                            FUN_004d1950(pvVar5,*(int *)(unaff_EBP - 0x5c5c),
                                         *(int *)(unaff_EBP - 0x5c88),iVar9);
                            FUN_004d1950(pvVar5,*(int *)(unaff_EBP - 0x5c5c),
                                         *(int *)(unaff_EBP - 0x5c60),iVar9);
                          }
                          pcVar29 = FUN_004d1950(pvVar5,*(int *)(unaff_EBP - 0x5c6c),
                                                 *(int *)(unaff_EBP - 0x5c60),iVar9);
                          if (*pcVar29 == '\x03') {
                            puVar16 = FUN_004d1950(pvVar5,*(int *)(unaff_EBP - 0x5c6c),
                                                   *(int *)(unaff_EBP - 0x5c60),iVar9);
                            bVar3 = puVar16[1];
                            puVar16 = FUN_004d1950(pvVar5,*(int *)(unaff_EBP - 0x5c5c),
                                                   *(int *)(unaff_EBP - 0x5c60),
                                                   *(int *)(unaff_EBP - 0x5c90));
                            uVar12 = *(undefined4 *)(unaff_EBP - 0x5d00);
                            if ((bVar3 & 1) == (puVar16[1] & 1)) {
                              uVar12 = *(undefined4 *)(unaff_EBP - 0x5ca8);
                            }
                            iVar9 = *(int *)(unaff_EBP - 0x5c90);
                            *(undefined4 *)(unaff_EBP - 0x5c54) = uVar12;
                          }
                          pcVar29 = FUN_004d1950(pvVar5,*(int *)(unaff_EBP - 0x5ca0),
                                                 *(int *)(unaff_EBP - 0x5c60),iVar9);
                          if (*pcVar29 == '\x03') {
                            iVar11 = *(int *)(unaff_EBP - 0x5c60);
                            iVar57 = *(int *)(unaff_EBP - 0x5ca0);
code_r0x004e99a5:
                            puVar16 = FUN_004d1950(pvVar5,iVar57,iVar11,iVar9);
                            bVar3 = puVar16[1];
                            puVar16 = FUN_004d1950(pvVar5,*(int *)(unaff_EBP - 0x5c5c),
                                                   *(int *)(unaff_EBP - 0x5c60),
                                                   *(int *)(unaff_EBP - 0x5c90));
                            uVar12 = *(undefined4 *)(unaff_EBP - 0x5d00);
                            if ((bVar3 & 1) == (puVar16[1] & 1)) {
                              uVar12 = *(undefined4 *)(unaff_EBP - 0x5ca8);
                            }
code_r0x004e9df4:
                            *(undefined4 *)(unaff_EBP - 0x5cd4) = uVar12;
                          }
                          break;
                        case 1:
                          pcVar29 = FUN_004d1950(pvVar5,*(int *)(unaff_EBP - 0x5c6c),
                                                 *(int *)(unaff_EBP - 0x5c60),iVar9);
                          if (*pcVar29 == '\x03') {
                            FUN_004d1950(pvVar5,*(int *)(unaff_EBP - 0x5c6c),
                                         *(int *)(unaff_EBP - 0x5c60),iVar9);
                            FUN_004d1950(pvVar5,*(int *)(unaff_EBP - 0x5c5c),
                                         *(int *)(unaff_EBP - 0x5c60),iVar9);
                          }
                          pcVar29 = FUN_004d1950(pvVar5,*(int *)(unaff_EBP - 0x5ca0),
                                                 *(int *)(unaff_EBP - 0x5c60),iVar9);
                          if (*pcVar29 == '\x03') {
                            FUN_004d1950(pvVar5,*(int *)(unaff_EBP - 0x5ca0),
                                         *(int *)(unaff_EBP - 0x5c60),iVar9);
                            FUN_004d1950(pvVar5,*(int *)(unaff_EBP - 0x5c5c),
                                         *(int *)(unaff_EBP - 0x5c60),iVar9);
                          }
                          pcVar29 = FUN_004d1950(pvVar5,*(int *)(unaff_EBP - 0x5c5c),
                                                 *(int *)(unaff_EBP - 0x5c88),iVar9);
                          if (*pcVar29 == '\x03') {
                            puVar16 = FUN_004d1950(pvVar5,*(int *)(unaff_EBP - 0x5c5c),
                                                   *(int *)(unaff_EBP - 0x5c88),iVar9);
                            bVar3 = puVar16[1];
                            puVar16 = FUN_004d1950(pvVar5,*(int *)(unaff_EBP - 0x5c5c),
                                                   *(int *)(unaff_EBP - 0x5c60),
                                                   *(int *)(unaff_EBP - 0x5c90));
                            uVar12 = *(undefined4 *)(unaff_EBP - 0x5d00);
                            if ((bVar3 & 1) == (puVar16[1] & 1)) {
                              uVar12 = *(undefined4 *)(unaff_EBP - 0x5ca8);
                            }
                            iVar9 = *(int *)(unaff_EBP - 0x5c90);
                            *(undefined4 *)(unaff_EBP - 0x5c54) = uVar12;
                          }
                          pcVar29 = FUN_004d1950(pvVar5,*(int *)(unaff_EBP - 0x5c5c),
                                                 *(int *)(unaff_EBP - 0x5c9c),iVar9);
                          if (*pcVar29 == '\x03') {
                            iVar11 = *(int *)(unaff_EBP - 0x5c9c);
                            iVar57 = *(int *)(unaff_EBP - 0x5c5c);
                            goto code_r0x004e99a5;
                          }
                          break;
                        case 2:
                          pcVar29 = FUN_004d1950(pvVar5,*(int *)(unaff_EBP - 0x5c5c),
                                                 *(int *)(unaff_EBP - 0x5c88),iVar9);
                          if (*pcVar29 == '\x03') {
                            FUN_004d1950(pvVar5,*(int *)(unaff_EBP - 0x5c5c),
                                         *(int *)(unaff_EBP - 0x5c88),iVar9);
                            FUN_004d1950(pvVar5,*(int *)(unaff_EBP - 0x5c5c),
                                         *(int *)(unaff_EBP - 0x5c60),iVar9);
                          }
                          pcVar29 = FUN_004d1950(pvVar5,*(int *)(unaff_EBP - 0x5c5c),
                                                 *(int *)(unaff_EBP - 0x5c9c),iVar9);
                          if (*pcVar29 == '\x03') {
                            FUN_004d1950(pvVar5,*(int *)(unaff_EBP - 0x5c5c),
                                         *(int *)(unaff_EBP - 0x5c9c),iVar9);
                            FUN_004d1950(pvVar5,*(int *)(unaff_EBP - 0x5c5c),
                                         *(int *)(unaff_EBP - 0x5c60),iVar9);
                          }
                          pcVar29 = FUN_004d1950(pvVar5,*(int *)(unaff_EBP - 0x5ca0),
                                                 *(int *)(unaff_EBP - 0x5c60),iVar9);
                          if (*pcVar29 == '\x03') {
                            puVar16 = FUN_004d1950(pvVar5,*(int *)(unaff_EBP - 0x5ca0),
                                                   *(int *)(unaff_EBP - 0x5c60),iVar9);
                            bVar3 = puVar16[1];
                            puVar16 = FUN_004d1950(pvVar5,*(int *)(unaff_EBP - 0x5c5c),
                                                   *(int *)(unaff_EBP - 0x5c60),
                                                   *(int *)(unaff_EBP - 0x5c90));
                            uVar12 = *(undefined4 *)(unaff_EBP - 0x5d00);
                            if ((bVar3 & 1) == (puVar16[1] & 1)) {
                              uVar12 = *(undefined4 *)(unaff_EBP - 0x5ca8);
                            }
                            iVar9 = *(int *)(unaff_EBP - 0x5c90);
                            *(undefined4 *)(unaff_EBP - 0x5c54) = uVar12;
                          }
                          pcVar29 = FUN_004d1950(pvVar5,*(int *)(unaff_EBP - 0x5c6c),
                                                 *(int *)(unaff_EBP - 0x5c60),iVar9);
                          if (*pcVar29 == '\x03') {
                            iVar11 = *(int *)(unaff_EBP - 0x5c60);
                            iVar57 = *(int *)(unaff_EBP - 0x5c6c);
                            goto code_r0x004e99a5;
                          }
                          break;
                        case 3:
                          pcVar29 = FUN_004d1950(pvVar5,*(int *)(unaff_EBP - 0x5ca0),
                                                 *(int *)(unaff_EBP - 0x5c60),iVar9);
                          if (*pcVar29 == '\x03') {
                            FUN_004d1950(pvVar5,*(int *)(unaff_EBP - 0x5ca0),
                                         *(int *)(unaff_EBP - 0x5c60),iVar9);
                            FUN_004d1950(pvVar5,*(int *)(unaff_EBP - 0x5c5c),
                                         *(int *)(unaff_EBP - 0x5c60),iVar9);
                          }
                          pcVar29 = FUN_004d1950(pvVar5,*(int *)(unaff_EBP - 0x5c6c),
                                                 *(int *)(unaff_EBP - 0x5c60),iVar9);
                          if (*pcVar29 == '\x03') {
                            FUN_004d1950(pvVar5,*(int *)(unaff_EBP - 0x5c6c),
                                         *(int *)(unaff_EBP - 0x5c60),iVar9);
                            FUN_004d1950(pvVar5,*(int *)(unaff_EBP - 0x5c5c),
                                         *(int *)(unaff_EBP - 0x5c60),iVar9);
                          }
                          pcVar29 = FUN_004d1950(pvVar5,*(int *)(unaff_EBP - 0x5c5c),
                                                 *(int *)(unaff_EBP - 0x5c9c),iVar9);
                          if (*pcVar29 == '\x03') {
                            puVar16 = FUN_004d1950(pvVar5,*(int *)(unaff_EBP - 0x5c5c),
                                                   *(int *)(unaff_EBP - 0x5c9c),iVar9);
                            bVar3 = puVar16[1];
                            puVar16 = FUN_004d1950(pvVar5,*(int *)(unaff_EBP - 0x5c5c),
                                                   *(int *)(unaff_EBP - 0x5c60),
                                                   *(int *)(unaff_EBP - 0x5c90));
                            uVar12 = *(undefined4 *)(unaff_EBP - 0x5d00);
                            if ((bVar3 & 1) == (puVar16[1] & 1)) {
                              uVar12 = *(undefined4 *)(unaff_EBP - 0x5ca8);
                            }
                            iVar9 = *(int *)(unaff_EBP - 0x5c90);
                            *(undefined4 *)(unaff_EBP - 0x5c54) = uVar12;
                          }
                          pcVar29 = FUN_004d1950(pvVar5,*(int *)(unaff_EBP - 0x5c5c),
                                                 *(int *)(unaff_EBP - 0x5c88),iVar9);
                          if (*pcVar29 == '\x03') {
                            pcVar29 = FUN_004d1950(pvVar5,*(int *)(unaff_EBP - 0x5c5c),
                                                   *(int *)(unaff_EBP - 0x5c88),iVar9);
                            if (*pcVar29 == '\x03') {
                              puVar16 = FUN_004d1950(pvVar5,*(int *)(unaff_EBP - 0x5c5c),
                                                     *(int *)(unaff_EBP - 0x5c88),iVar9);
                              bVar3 = puVar16[1];
                              puVar16 = FUN_004d1950(pvVar5,*(int *)(unaff_EBP - 0x5c5c),
                                                     *(int *)(unaff_EBP - 0x5c60),
                                                     *(int *)(unaff_EBP - 0x5c90));
                              uVar12 = *(undefined4 *)(unaff_EBP - 0x5d00);
                              if ((bVar3 & 1) != (puVar16[1] & 1)) goto code_r0x004e9df4;
                            }
                            uVar12 = *(undefined4 *)(unaff_EBP - 0x5ca8);
                            goto code_r0x004e9df4;
                          }
                        }
                        piVar18 = (int *)FUN_004013d0(*(void **)(unaff_EBP - 0x5cb8),2);
                        iVar9 = *(int *)(unaff_EBP - 0x5c5c);
                        iVar11 = *(int *)(unaff_EBP - 0x5c60);
                        iVar56 = 0;
                        *(int *)(unaff_EBP - 0x5c50) = iVar9 * 0xd;
                        piVar26 = (int *)(unaff_EBP - 0x74);
                        cVar4 = '\0';
                        iVar57 = *(int *)(unaff_EBP - 0x5c70);
                        iVar52 = 1;
                        iVar23 = iVar11 * 0xd;
                        uVar12 = 0xe;
                        puVar16 = FUN_004d1950(*(void **)(unaff_EBP - 0x5cfc),iVar9,iVar11,
                                               *(int *)(unaff_EBP - 0x5c90));
                        uVar10 = (uint)(byte)puVar16[1];
                        iVar9 = *piVar18 + *(int *)(unaff_EBP - 0x5c58);
                        iVar11 = FUN_00402160(*(int *)(unaff_EBP - 0x5c54));
                        iVar11 = **(int **)(unaff_EBP - 0x5c44) + 7 + (iVar23 - iVar11 / 2);
                        iVar41 = FUN_00402150(*(int *)(unaff_EBP - 0x5c54));
                        puVar14 = FUN_00402990((void *)(unaff_EBP - 0x350),
                                               **(int **)(unaff_EBP - 0x5c84) + 7 +
                                               (*(int *)(unaff_EBP - 0x5c50) - iVar41 / 2),iVar11,
                                               iVar9);
                        FUN_00524540(*(void **)(unaff_EBP - 0x5c68),*(void **)(unaff_EBP - 0x5c54),
                                     puVar14,uVar10,uVar12,iVar52,iVar57,cVar4,piVar26,iVar56);
                        iVar56 = 0;
                        piVar26 = (int *)(unaff_EBP - 0x74);
                        cVar4 = '\0';
                        iVar9 = *(int *)(unaff_EBP - 0x5c70);
                        iVar52 = 1;
                        uVar12 = 0xe;
                        puVar16 = FUN_004d1950(*(void **)(unaff_EBP - 0x5cfc),
                                               *(int *)(unaff_EBP - 0x5c5c),
                                               *(int *)(unaff_EBP - 0x5c60),
                                               *(int *)(unaff_EBP - 0x5c90));
                        uVar10 = (byte)puVar16[1] + 2 & 0x80000003;
                        iVar11 = *piVar18 + *(int *)(unaff_EBP - 0x5c58);
                        pvVar17 = *(void **)(unaff_EBP - 0x5cd4);
                        iVar57 = FUN_00402160((int)pvVar17);
                        iVar57 = **(int **)(unaff_EBP - 0x5c44) + 7 + (iVar23 - iVar57 / 2);
                        iVar41 = FUN_00402150((int)pvVar17);
                        puVar14 = FUN_00402990((void *)(unaff_EBP - 0x368),
                                               **(int **)(unaff_EBP - 0x5c84) + 7 +
                                               (*(int *)(unaff_EBP - 0x5c50) - iVar41 / 2),iVar57,
                                               iVar11);
                        FUN_00524540(*(void **)(unaff_EBP - 0x5c68),pvVar17,puVar14,uVar10,uVar12,
                                     iVar52,iVar9,cVar4,piVar26,iVar56);
                        pvVar5 = *(void **)(unaff_EBP - 0x5cfc);
                        iVar9 = *(int *)(unaff_EBP - 0x5c90);
                      }
                      *(int *)(unaff_EBP - 0x5c58) = *(int *)(unaff_EBP - 0x5c58) + 7;
                      iVar9 = iVar9 + 1;
                      *(int *)(unaff_EBP - 0x5c90) = iVar9;
                      iVar11 = FUN_004d8e00((int)pvVar5);
                    } while (iVar9 < iVar11);
                  }
                  iVar11 = *(int *)(unaff_EBP - 0x5c60) + 1;
                  *(int *)(unaff_EBP - 0x5c60) = iVar11;
                  iVar9 = FUN_004d8de0((int)pvVar5);
                } while (iVar11 < iVar9);
                iVar9 = *(int *)(unaff_EBP - 0x5c5c);
              }
              iVar9 = iVar9 + 1;
              *(int *)(unaff_EBP - 0x5c5c) = iVar9;
              iVar11 = FUN_004d8dc0((int)pvVar5);
            } while (iVar9 < iVar11);
          }
          iVar9 = 0;
          *(undefined4 *)(unaff_EBP - 0x5c88) = 0;
          iVar11 = FUN_004d8dc0((int)pvVar5);
          if (0 < iVar11) {
            *(undefined4 *)(unaff_EBP - 0x5c6c) = 0;
            do {
              *(undefined4 *)(unaff_EBP - 0x5c7c) = 0;
              iVar11 = FUN_004d8de0((int)pvVar5);
              if (0 < iVar11) {
                *(undefined4 *)(unaff_EBP - 0x5ca0) = 0;
                do {
                  iVar9 = 0;
                  *(undefined4 *)(unaff_EBP - 0x5c78) = 0;
                  iVar11 = FUN_004d8e00((int)pvVar5);
                  if (0 < iVar11) {
                    *(undefined4 *)(unaff_EBP - 0x5c54) = 0;
                    do {
                      pcVar29 = FUN_004d1950(pvVar5,*(int *)(unaff_EBP - 0x5c88),
                                             *(int *)(unaff_EBP - 0x5c7c),iVar9);
                      if (*pcVar29 == '\x01') {
                        puVar16 = FUN_004d1950(pvVar5,*(int *)(unaff_EBP - 0x5c88),
                                               *(int *)(unaff_EBP - 0x5c7c),iVar9);
                        if (puVar16[3] == '\0') {
                          if (*(int *)(*(int *)(unaff_EBP - 0x5cbc) + 0x18) == 1) {
                            uVar10 = rand();
                            uVar10 = uVar10 & 0x80000001;
                            bVar45 = uVar10 == 0;
                            if ((int)uVar10 < 0) {
                              bVar45 = (uVar10 - 1 | 0xfffffffe) == 0xffffffff;
                            }
                            if ((bVar45) &&
                               (puVar16 = FUN_004d1950(pvVar5,*(int *)(unaff_EBP - 0x5c88),
                                                       *(int *)(unaff_EBP - 0x5c7c),iVar9 + 1),
                               puVar16[3] == '\0')) {
                              iVar9 = rand();
                              pvVar17 = (void *)FUN_004013f0(*(void **)(unaff_EBP - 0x5c48),
                                                             iVar9 % 3 + 0x88a);
                              puVar13 = FUN_004010b0((void *)(unaff_EBP - 0x6950),0,0,0,0);
                              FUN_004e1200((void *)(unaff_EBP - 0x65a0),(int)puVar13);
                              iVar57 = 0;
                              piVar26 = (int *)(unaff_EBP - 0x65a0);
                              cVar4 = '\0';
                              iVar9 = *(int *)(unaff_EBP - 0x5c70);
                              iVar11 = 1;
                              uVar12 = 6;
                              uVar10 = rand();
                              uVar10 = uVar10 & 0x80000003;
                              if ((int)uVar10 < 0) {
                                uVar10 = (uVar10 - 1 | 0xfffffffc) + 1;
                              }
                              iVar23 = FUN_00402170((int)pvVar17);
                              iVar41 = *(int *)(unaff_EBP - 0x5c54);
                              piVar18 = (int *)FUN_004013d0(*(void **)(unaff_EBP - 0x5cb8),2);
                              iVar41 = *piVar18 + 1 + (iVar41 - iVar23);
                              iVar23 = FUN_00402160((int)pvVar17);
                              iVar23 = **(int **)(unaff_EBP - 0x5c44) + 7 +
                                       (*(int *)(unaff_EBP - 0x5ca0) - iVar23 / 2);
                              iVar52 = FUN_00402150((int)pvVar17);
                              puVar14 = FUN_00402990((void *)(unaff_EBP - 0x3b0),
                                                     **(int **)(unaff_EBP - 0x5c84) + 7 +
                                                     (*(int *)(unaff_EBP - 0x5c6c) - iVar52 / 2),
                                                     iVar23,iVar41);
                              FUN_00524540(*(void **)(unaff_EBP - 0x5c68),pvVar17,puVar14,uVar10,
                                           uVar12,iVar11,iVar9,cVar4,piVar26,iVar57);
                              pvVar5 = *(void **)(unaff_EBP - 0x5cfc);
                              iVar9 = *(int *)(unaff_EBP - 0x5c78);
                            }
                          }
                          puVar13 = FUN_004010b0((void *)(unaff_EBP - 0x6a50),0,0,0,0);
                          FUN_004e1200((void *)(unaff_EBP - 0x62c0),(int)puVar13);
                          iVar52 = 0;
                          piVar26 = (int *)(unaff_EBP - 0x62c0);
                          cVar4 = '\0';
                          iVar11 = *(int *)(unaff_EBP - 0x5c70);
                          iVar23 = 1;
                          uVar12 = 6;
                          puVar16 = FUN_004d1950(pvVar5,*(int *)(unaff_EBP - 0x5c88),
                                                 *(int *)(unaff_EBP - 0x5c7c),iVar9);
                          uVar10 = (uint)(byte)puVar16[1];
                          iVar57 = FUN_00402170(*(int *)(unaff_EBP - 0x5cb0));
                          iVar9 = *(int *)(unaff_EBP - 0x5c54);
                          piVar18 = (int *)FUN_004013d0((void *)((int)pvVar5 + 0xc),2);
                          iVar9 = *piVar18 + (iVar9 - iVar57) + 1;
                          pvVar44 = *(void **)(unaff_EBP - 0x5cb0);
                          iVar57 = FUN_00402160((int)pvVar44);
                          iVar57 = **(int **)(unaff_EBP - 0x5c44) + 7 +
                                   (*(int *)(unaff_EBP - 0x5ca0) - iVar57 / 2);
                          iVar41 = FUN_00402150((int)pvVar44);
                          iVar41 = **(int **)(unaff_EBP - 0x5c84) + 7 +
                                   (*(int *)(unaff_EBP - 0x5c6c) - iVar41 / 2);
                          pvVar17 = (void *)(unaff_EBP - 0x3c8);
                        }
                        else {
                          puVar13 = FUN_004010b0((void *)(unaff_EBP - 0x6b30),0,0,0,0);
                          FUN_004e1200((void *)(unaff_EBP - 0x62a8),(int)puVar13);
                          iVar52 = 0;
                          piVar26 = (int *)(unaff_EBP - 0x62a8);
                          cVar4 = '\0';
                          iVar11 = *(int *)(unaff_EBP - 0x5c70);
                          iVar23 = 1;
                          uVar12 = 6;
                          puVar16 = FUN_004d1950(pvVar5,*(int *)(unaff_EBP - 0x5c88),
                                                 *(int *)(unaff_EBP - 0x5c7c),iVar9);
                          uVar10 = (uint)(byte)puVar16[1];
                          iVar57 = FUN_00402170(*(int *)(unaff_EBP - 0x14));
                          iVar9 = *(int *)(unaff_EBP - 0x5c54);
                          piVar18 = (int *)FUN_004013d0((void *)((int)pvVar5 + 0xc),2);
                          iVar9 = *piVar18 + (iVar9 - iVar57) + 1;
                          pvVar44 = *(void **)(unaff_EBP - 0x14);
                          iVar57 = FUN_00402160((int)pvVar44);
                          iVar57 = **(int **)(unaff_EBP - 0x5c44) + 7 +
                                   (*(int *)(unaff_EBP - 0x5ca0) - iVar57 / 2);
                          iVar41 = FUN_00402150((int)pvVar44);
                          iVar41 = **(int **)(unaff_EBP - 0x5c84) + 7 +
                                   (*(int *)(unaff_EBP - 0x5c6c) - iVar41 / 2);
                          pvVar17 = (void *)(unaff_EBP - 0x398);
                        }
LAB_004ea46b:
                        puVar14 = FUN_00402990(pvVar17,iVar41,iVar57,iVar9);
                        FUN_00524540(*(void **)(unaff_EBP - 0x5c68),pvVar44,puVar14,uVar10,uVar12,
                                     iVar23,iVar11,cVar4,piVar26,iVar52);
                        iVar9 = *(int *)(unaff_EBP - 0x5c78);
                      }
                      else if ((*pcVar29 == '\x03') &&
                              (pcVar29 = FUN_004d1950(pvVar5,*(int *)(unaff_EBP - 0x5c88),
                                                      *(int *)(unaff_EBP - 0x5c7c),iVar9 + -1),
                              *pcVar29 == '\x01')) {
                        puVar13 = FUN_004010b0((void *)(unaff_EBP - 0x6890),0,0,0,0);
                        FUN_004e1200((void *)(unaff_EBP - 0x6858),(int)puVar13);
                        iVar52 = 0;
                        piVar26 = (int *)(unaff_EBP - 0x6858);
                        cVar4 = '\0';
                        iVar11 = *(int *)(unaff_EBP - 0x5c70);
                        iVar23 = 1;
                        uVar12 = 6;
                        puVar16 = FUN_004d1950(pvVar5,*(int *)(unaff_EBP - 0x5c88),
                                               *(int *)(unaff_EBP - 0x5c7c),iVar9);
                        uVar10 = (uint)(byte)puVar16[1];
                        iVar57 = FUN_00402170(*(int *)(unaff_EBP - 0x5cb0));
                        iVar9 = *(int *)(unaff_EBP - 0x5c54);
                        piVar18 = (int *)FUN_004013d0((void *)((int)pvVar5 + 0xc),2);
                        iVar9 = *piVar18 + (iVar9 - iVar57) + 1;
                        pvVar44 = *(void **)(unaff_EBP - 0x5cb0);
                        iVar57 = FUN_00402160((int)pvVar44);
                        iVar57 = **(int **)(unaff_EBP - 0x5c44) + 7 +
                                 (*(int *)(unaff_EBP - 0x5ca0) - iVar57 / 2);
                        iVar41 = FUN_00402150((int)pvVar44);
                        iVar41 = **(int **)(unaff_EBP - 0x5c84) + 7 +
                                 (*(int *)(unaff_EBP - 0x5c6c) - iVar41 / 2);
                        pvVar17 = (void *)(unaff_EBP - 0x380);
                        goto LAB_004ea46b;
                      }
                      *(int *)(unaff_EBP - 0x5c54) = *(int *)(unaff_EBP - 0x5c54) + 7;
                      iVar9 = iVar9 + 1;
                      *(int *)(unaff_EBP - 0x5c78) = iVar9;
                      iVar11 = FUN_004d8e00((int)pvVar5);
                    } while (iVar9 < iVar11);
                  }
                  iVar9 = *(int *)(unaff_EBP - 0x5c7c);
                  *(int *)(unaff_EBP - 0x5ca0) = *(int *)(unaff_EBP - 0x5ca0) + 0xd;
                  iVar9 = iVar9 + 1;
                  *(int *)(unaff_EBP - 0x5c7c) = iVar9;
                  iVar11 = FUN_004d8de0((int)pvVar5);
                } while (iVar9 < iVar11);
                iVar9 = *(int *)(unaff_EBP - 0x5c88);
              }
              *(int *)(unaff_EBP - 0x5c6c) = *(int *)(unaff_EBP - 0x5c6c) + 0xd;
              iVar9 = iVar9 + 1;
              *(int *)(unaff_EBP - 0x5c88) = iVar9;
              iVar11 = FUN_004d8dc0((int)pvVar5);
            } while (iVar9 < iVar11);
          }
          *(undefined4 *)(unaff_EBP - 0x5cb0) = 0;
          iVar9 = FUN_004d8dc0((int)pvVar5);
          if (0 < iVar9) {
            do {
              iVar9 = 0;
              *(undefined4 *)(unaff_EBP - 0x14) = 0;
              iVar11 = FUN_004d8de0((int)pvVar5);
              if (0 < iVar11) {
                do {
                  *(undefined4 *)(unaff_EBP - 0x5c7c) = 0;
                  iVar11 = FUN_004d8e00((int)pvVar5);
                  if (0 < iVar11) {
                    iVar11 = *(int *)(unaff_EBP - 0x5c7c);
                    *(undefined4 *)(unaff_EBP - 0x5c54) = 0;
                    do {
                      pcVar29 = FUN_004d1950(pvVar5,*(int *)(unaff_EBP - 0x5cb0),iVar9,iVar11);
                      if ((*pcVar29 == '\x01') &&
                         (puVar16 = FUN_004d1950(pvVar5,*(int *)(unaff_EBP - 0x5cb0),iVar9,
                                                 *(int *)(unaff_EBP - 0x5c7c)), puVar16[8] == '\x01'
                         )) {
                        pcVar29 = FUN_004d1950(pvVar5,*(int *)(unaff_EBP - 0x5cb0),iVar9 + -1,
                                               *(int *)(unaff_EBP - 0x5c7c));
                        if (*pcVar29 == '\x01') {
                          puVar13 = FUN_004010b0((void *)(unaff_EBP - 0x6970),0,0,0,0);
                          FUN_004e1200((void *)(unaff_EBP - 0x6718),(int)puVar13);
                          iVar11 = *(int *)(unaff_EBP - 0x5c70);
                          iVar56 = 0;
                          piVar26 = (int *)(unaff_EBP - 0x6718);
                          cVar4 = '\0';
                          iVar52 = 1;
                          uVar12 = 6;
                          uVar10 = 0;
                          iVar9 = iVar11;
                          piVar18 = (int *)FUN_004013d0((void *)((int)pvVar5 + 0xc),2);
                          iVar57 = *piVar18 + *(int *)(unaff_EBP - 0x5c54);
                          iVar41 = FUN_00402160(*(int *)(unaff_EBP - 0x5c8c));
                          iVar41 = **(int **)(unaff_EBP - 0x5c44) + 7 +
                                   (*(int *)(unaff_EBP - 0x14) * 0xd - iVar41 / 2);
                          iVar23 = FUN_00402150(*(int *)(unaff_EBP - 0x5c8c));
                          puVar14 = FUN_00402990((void *)(unaff_EBP - 0x3e0),
                                                 **(int **)(unaff_EBP - 0x5c84) + 7 +
                                                 (*(int *)(unaff_EBP - 0x5cb0) * 0xd - iVar23 / 2),
                                                 iVar41,iVar57);
                          FUN_00524540(*(void **)(unaff_EBP - 0x5c68),*(void **)(unaff_EBP - 0x5c8c)
                                       ,puVar14,uVar10,uVar12,iVar52,iVar9,cVar4,piVar26,iVar56);
                        }
                        else {
                          iVar11 = *(int *)(unaff_EBP - 0x5c70);
                        }
                        pcVar29 = FUN_004d1950(pvVar5,*(int *)(unaff_EBP - 0x5cb0) + -1,
                                               *(int *)(unaff_EBP - 0x14),
                                               *(int *)(unaff_EBP - 0x5c7c));
                        if (*pcVar29 == '\x01') {
                          puVar13 = FUN_004010b0((void *)(unaff_EBP - 0x6ad0),0,0,0,0);
                          FUN_004e1200((void *)(unaff_EBP - 0x62d8),(int)puVar13);
                          iVar56 = 0;
                          piVar26 = (int *)(unaff_EBP - 0x62d8);
                          cVar4 = '\0';
                          iVar52 = 1;
                          uVar12 = 6;
                          uVar10 = 1;
                          iVar9 = iVar11;
                          piVar18 = (int *)FUN_004013d0((void *)((int)pvVar5 + 0xc),2);
                          iVar57 = *piVar18 + *(int *)(unaff_EBP - 0x5c54);
                          iVar41 = FUN_00402160(*(int *)(unaff_EBP - 0x5c8c));
                          iVar41 = **(int **)(unaff_EBP - 0x5c44) + 7 +
                                   (*(int *)(unaff_EBP - 0x14) * 0xd - iVar41 / 2);
                          iVar23 = FUN_00402150(*(int *)(unaff_EBP - 0x5c8c));
                          puVar14 = FUN_00402990((void *)(unaff_EBP - 0x3f8),
                                                 **(int **)(unaff_EBP - 0x5c84) + 7 +
                                                 (*(int *)(unaff_EBP - 0x5cb0) * 0xd - iVar23 / 2),
                                                 iVar41,iVar57);
                          FUN_00524540(*(void **)(unaff_EBP - 0x5c68),*(void **)(unaff_EBP - 0x5c8c)
                                       ,puVar14,uVar10,uVar12,iVar52,iVar9,cVar4,piVar26,iVar56);
                        }
                        pcVar29 = FUN_004d1950(pvVar5,*(int *)(unaff_EBP - 0x5cb0),
                                               *(int *)(unaff_EBP - 0x14) + 1,
                                               *(int *)(unaff_EBP - 0x5c7c));
                        if (*pcVar29 == '\x01') {
                          puVar13 = FUN_004010b0((void *)(unaff_EBP - 0x6990),0,0,0,0);
                          FUN_004e1200((void *)(unaff_EBP - 0x65b8),(int)puVar13);
                          iVar56 = 0;
                          piVar26 = (int *)(unaff_EBP - 0x65b8);
                          cVar4 = '\0';
                          iVar52 = 1;
                          uVar12 = 6;
                          uVar10 = 2;
                          iVar9 = iVar11;
                          piVar18 = (int *)FUN_004013d0((void *)((int)pvVar5 + 0xc),2);
                          iVar57 = *piVar18 + *(int *)(unaff_EBP - 0x5c54);
                          iVar41 = FUN_00402160(*(int *)(unaff_EBP - 0x5c8c));
                          iVar41 = **(int **)(unaff_EBP - 0x5c44) + 7 +
                                   (*(int *)(unaff_EBP - 0x14) * 0xd - iVar41 / 2);
                          iVar23 = FUN_00402150(*(int *)(unaff_EBP - 0x5c8c));
                          puVar14 = FUN_00402990((void *)(unaff_EBP - 0x410),
                                                 **(int **)(unaff_EBP - 0x5c84) + 7 +
                                                 (*(int *)(unaff_EBP - 0x5cb0) * 0xd - iVar23 / 2),
                                                 iVar41,iVar57);
                          FUN_00524540(*(void **)(unaff_EBP - 0x5c68),*(void **)(unaff_EBP - 0x5c8c)
                                       ,puVar14,uVar10,uVar12,iVar52,iVar9,cVar4,piVar26,iVar56);
                        }
                        pcVar29 = FUN_004d1950(pvVar5,*(int *)(unaff_EBP - 0x5cb0) + 1,
                                               *(int *)(unaff_EBP - 0x14),
                                               *(int *)(unaff_EBP - 0x5c7c));
                        if (*pcVar29 == '\x01') {
                          puVar13 = FUN_004010b0((void *)(unaff_EBP - 0x6a70),0,0,0,0);
                          FUN_004e1200((void *)(unaff_EBP - 0x62f0),(int)puVar13);
                          iVar56 = 0;
                          piVar26 = (int *)(unaff_EBP - 0x62f0);
                          cVar4 = '\0';
                          iVar52 = 1;
                          uVar12 = 6;
                          uVar10 = 3;
                          piVar18 = (int *)FUN_004013d0((void *)((int)pvVar5 + 0xc),2);
                          iVar57 = *piVar18 + *(int *)(unaff_EBP - 0x5c54);
                          iVar41 = FUN_00402160(*(int *)(unaff_EBP - 0x5c8c));
                          iVar9 = *(int *)(unaff_EBP - 0x14);
                          iVar41 = **(int **)(unaff_EBP - 0x5c44) + 7 + (iVar9 * 0xd - iVar41 / 2);
                          iVar23 = FUN_00402150(*(int *)(unaff_EBP - 0x5c8c));
                          puVar14 = FUN_00402990((void *)(unaff_EBP - 0x428),
                                                 **(int **)(unaff_EBP - 0x5c84) + 7 +
                                                 (*(int *)(unaff_EBP - 0x5cb0) * 0xd - iVar23 / 2),
                                                 iVar41,iVar57);
                          FUN_00524540(*(void **)(unaff_EBP - 0x5c68),*(void **)(unaff_EBP - 0x5c8c)
                                       ,puVar14,uVar10,uVar12,iVar52,iVar11,cVar4,piVar26,iVar56);
                        }
                        else {
                          iVar9 = *(int *)(unaff_EBP - 0x14);
                        }
                      }
                      *(int *)(unaff_EBP - 0x5c7c) = *(int *)(unaff_EBP - 0x5c7c) + 1;
                      *(int *)(unaff_EBP - 0x5c54) = *(int *)(unaff_EBP - 0x5c54) + 7;
                      iVar57 = FUN_004d8e00((int)pvVar5);
                      iVar11 = *(int *)(unaff_EBP - 0x5c7c);
                    } while (iVar11 < iVar57);
                  }
                  iVar9 = iVar9 + 1;
                  *(int *)(unaff_EBP - 0x14) = iVar9;
                  iVar11 = FUN_004d8de0((int)pvVar5);
                } while (iVar9 < iVar11);
              }
              iVar11 = *(int *)(unaff_EBP - 0x5cb0) + 1;
              *(int *)(unaff_EBP - 0x5cb0) = iVar11;
              iVar9 = FUN_004d8dc0((int)pvVar5);
            } while (iVar11 < iVar9);
          }
          iVar9 = 0;
          *(undefined4 *)(unaff_EBP - 0x5c88) = 0;
          iVar11 = FUN_004d8dc0((int)pvVar5);
          if (0 < iVar11) {
            *(undefined4 *)(unaff_EBP - 0x5ca0) = 0;
            do {
              *(undefined4 *)(unaff_EBP - 0x5c7c) = 0;
              iVar11 = FUN_004d8de0((int)pvVar5);
              if (0 < iVar11) {
                *(undefined4 *)(unaff_EBP - 0x14) = 0;
                do {
                  iVar9 = 0;
                  *(undefined4 *)(unaff_EBP - 0x5c74) = 0;
                  iVar11 = FUN_004d8e00((int)pvVar5);
                  if (0 < iVar11) {
                    *(undefined4 *)(unaff_EBP - 0x5c54) = 0;
                    do {
                      pcVar29 = FUN_004d1950(pvVar5,*(int *)(unaff_EBP - 0x5c88),
                                             *(int *)(unaff_EBP - 0x5c7c),iVar9);
                      if (*pcVar29 == '\x01') {
                        *(undefined4 *)(unaff_EBP - 0x5ca8) = 0;
                        iVar9 = FUN_004013d0((void *)((int)pvVar5 + 0xc),2);
                        *(int *)(unaff_EBP - 0x5c58) = iVar9;
                        iVar9 = FUN_004013d0((void *)(unaff_EBP - 0xc4),2);
                        *(int *)(unaff_EBP - 0x5c64) = iVar9;
                        iVar9 = FUN_004013d0((void *)(unaff_EBP - 0xc4),1);
                        *(int *)(unaff_EBP - 0x5c78) = iVar9;
                        iVar11 = FUN_004013d0((void *)(unaff_EBP - 0xc4),0);
                        iVar9 = *(int *)(unaff_EBP - 0x5c70);
                        *(int *)(unaff_EBP - 0x5cb0) = iVar11;
                        do {
                          iVar11 = 0;
                          *(undefined4 *)(unaff_EBP - 0x5c6c) = 0;
                          do {
                            iVar57 = 5;
                            *(undefined4 *)(unaff_EBP - 0x5c50) = 5;
                            do {
                              FUN_00402990((void *)(unaff_EBP - 0xc4),
                                           *(int *)(unaff_EBP - 0x5ca8) +
                                           *(int *)(unaff_EBP - 0x5ca0) +
                                           **(int **)(unaff_EBP - 0x5c84),
                                           *(int *)(unaff_EBP - 0x14) + iVar11 +
                                           **(int **)(unaff_EBP - 0x5c44),
                                           **(int **)(unaff_EBP - 0x5c58) + iVar57 +
                                           *(int *)(unaff_EBP - 0x5c54));
                              puVar16 = FUN_00405fd0(*(void **)(unaff_EBP - 0x5c68),
                                                     **(uint **)(unaff_EBP - 0x5cb0),
                                                     **(uint **)(unaff_EBP - 0x5c78),
                                                     **(int **)(unaff_EBP - 0x5c64),iVar9);
                              pvVar17 = *(void **)(unaff_EBP - 0x5c68);
                              *(undefined **)(unaff_EBP - 0x5c48) = puVar16;
                              puVar16 = FUN_00405fd0(pvVar17,**(uint **)(unaff_EBP - 0x5cb0),
                                                     **(uint **)(unaff_EBP - 0x5c78),
                                                     **(int **)(unaff_EBP - 0x5c64),iVar9);
                              bVar3 = FUN_004061e0((int)puVar16);
                              if (bVar3 == 0) {
                                iVar11 = iVar9;
                                puVar20 = FUN_00401370((void *)(unaff_EBP - 0x5e30),
                                                       *(undefined1 **)(unaff_EBP - 0x5c48),0x40);
                                FUN_0041ff00(*(void **)(unaff_EBP - 0x5c68),
                                             **(float **)(unaff_EBP - 0x5cb0),
                                             **(uint **)(unaff_EBP - 0x5c78),
                                             **(int **)(unaff_EBP - 0x5c64),puVar20,iVar11);
                              }
                              iVar11 = *(int *)(unaff_EBP - 0x5c6c);
                              iVar57 = *(int *)(unaff_EBP - 0x5c50) + -1;
                              *(int *)(unaff_EBP - 0x5c50) = iVar57;
                            } while (-1 < iVar57);
                            iVar11 = iVar11 + 1;
                            *(int *)(unaff_EBP - 0x5c6c) = iVar11;
                          } while (iVar11 < 0xe);
                          iVar11 = *(int *)(unaff_EBP - 0x5ca8) + 1;
                          *(int *)(unaff_EBP - 0x5ca8) = iVar11;
                        } while (iVar11 < 0xe);
                        iVar9 = *(int *)(unaff_EBP - 0x5c74);
                        pcVar29 = FUN_004d1950(pvVar5,*(int *)(unaff_EBP - 0x5c88),
                                               *(int *)(unaff_EBP - 0x5c7c),iVar9 + -1);
                        if (*pcVar29 == '\x02') {
                          puVar16 = FUN_004d1950(pvVar5,*(int *)(unaff_EBP - 0x5c88),
                                                 *(int *)(unaff_EBP - 0x5c7c),iVar9);
                          if (puVar16[2] != '\0') {
                            puVar13 = FUN_00402990((void *)(unaff_EBP - 0x2d8),
                                                   **(int **)(unaff_EBP - 0x5c84) +
                                                   *(int *)(unaff_EBP - 0x5ca0) + 7,
                                                   **(int **)(unaff_EBP - 0x5c44) +
                                                   *(int *)(unaff_EBP - 0x14) + 7,
                                                   **(int **)(unaff_EBP - 0x5c58) +
                                                   *(int *)(unaff_EBP - 0x5c54) + 1);
                            FUN_0042feb0((void *)((int)pvVar5 + 0x30),puVar13);
                          }
                          puVar16 = FUN_004d1950(pvVar5,*(int *)(unaff_EBP - 0x5c88),
                                                 *(int *)(unaff_EBP - 0x5c7c),iVar9);
                          if (puVar16[8] == '\x03') {
                            puVar13 = FUN_00402990((void *)(unaff_EBP - 0x440),
                                                   **(int **)(unaff_EBP - 0x5c84) +
                                                   *(int *)(unaff_EBP - 0x5ca0) + 7,
                                                   **(int **)(unaff_EBP - 0x5c44) +
                                                   *(int *)(unaff_EBP - 0x14) + 7,
                                                   **(int **)(unaff_EBP - 0x5c58) +
                                                   *(int *)(unaff_EBP - 0x5c54) + 1);
                            FUN_0042feb0((void *)((int)pvVar5 + 0x3c),puVar13);
                          }
                          puVar13 = FUN_00402990((void *)(unaff_EBP - 0x458),
                                                 **(int **)(unaff_EBP - 0x5c84) +
                                                 *(int *)(unaff_EBP - 0x5ca0) + 7,
                                                 **(int **)(unaff_EBP - 0x5c44) +
                                                 *(int *)(unaff_EBP - 0x14) + 7,
                                                 **(int **)(unaff_EBP - 0x5c58) +
                                                 *(int *)(unaff_EBP - 0x5c54) + 1);
                          FUN_0042feb0((void *)((int)pvVar5 + 0x24),puVar13);
                        }
                      }
                      *(int *)(unaff_EBP - 0x5c54) = *(int *)(unaff_EBP - 0x5c54) + 7;
                      iVar9 = iVar9 + 1;
                      *(int *)(unaff_EBP - 0x5c74) = iVar9;
                      iVar11 = FUN_004d8e00((int)pvVar5);
                    } while (iVar9 < iVar11);
                  }
                  iVar9 = *(int *)(unaff_EBP - 0x5c7c);
                  *(int *)(unaff_EBP - 0x14) = *(int *)(unaff_EBP - 0x14) + 0xd;
                  iVar9 = iVar9 + 1;
                  *(int *)(unaff_EBP - 0x5c7c) = iVar9;
                  iVar11 = FUN_004d8de0((int)pvVar5);
                } while (iVar9 < iVar11);
                iVar9 = *(int *)(unaff_EBP - 0x5c88);
              }
              *(int *)(unaff_EBP - 0x5ca0) = *(int *)(unaff_EBP - 0x5ca0) + 0xd;
              iVar9 = iVar9 + 1;
              *(int *)(unaff_EBP - 0x5c88) = iVar9;
              iVar11 = FUN_004d8dc0((int)pvVar5);
            } while (iVar9 < iVar11);
          }
          *(undefined4 *)(unaff_EBP - 0x5c60) = 0;
          iVar9 = FUN_004d8dc0((int)pvVar5);
          if (0 < iVar9) {
            do {
              iVar9 = 0;
              *(undefined4 *)(unaff_EBP - 0x5c6c) = 0;
              iVar11 = FUN_004d8de0((int)pvVar5);
              if (0 < iVar11) {
                do {
                  *(undefined4 *)(unaff_EBP - 0x5cb0) = 0;
                  iVar11 = FUN_004d8e00((int)pvVar5);
                  if (0 < iVar11) {
                    iVar11 = *(int *)(unaff_EBP - 0x5cb0);
                    *(undefined4 *)(unaff_EBP - 0x5c5c) = 0;
                    do {
                      if (*(int *)(*(int *)(unaff_EBP - 0x5cbc) + 0x18) == 1) {
                        pcVar29 = FUN_004d1950(pvVar5,*(int *)(unaff_EBP - 0x5c60),iVar9,iVar11);
                        if (*pcVar29 == '\x01') {
                          uVar10 = *(int *)(unaff_EBP - 0x5c60) + iVar9 & 0x80000001;
                          bVar45 = uVar10 == 0;
                          if ((int)uVar10 < 0) {
                            bVar45 = (uVar10 - 1 | 0xfffffffe) == 0xffffffff;
                          }
                          if (!bVar45) {
                            FUN_004c83b0(unaff_EBP - 0x27c);
                            pvVar17 = *(void **)(unaff_EBP - 0x5cb8);
                            piVar26 = (int *)(unaff_EBP - 0x6810);
                            uVar10 = *(uint *)(unaff_EBP - 0x5c5c);
                            piVar18 = (int *)(unaff_EBP - 0x6828);
                            *(undefined4 *)(unaff_EBP - 0x27c) = 0xd;
                            puVar14 = (uint *)FUN_004013d0(pvVar17,2);
                            piVar24 = FUN_004cde40((void *)(unaff_EBP - 0x6838),*puVar14);
                            pvVar17 = (void *)FUN_00405690(piVar24,piVar18,uVar10);
                            puVar13 = (undefined4 *)FUN_004ce290(pvVar17,piVar26);
                            uVar10 = iVar9 * 0xd;
                            piVar26 = (int *)(unaff_EBP - 0x6848);
                            uVar40 = 7;
                            piVar18 = (int *)(unaff_EBP - 0x6860);
                            piVar24 = FUN_004cde40((void *)(unaff_EBP - 0x6870),
                                                   **(uint **)(unaff_EBP - 0x5c44));
                            pvVar17 = (void *)FUN_00405690(piVar24,piVar18,uVar40);
                            puVar19 = (undefined4 *)FUN_00405690(pvVar17,piVar26,uVar10);
                            uVar10 = *(int *)(unaff_EBP - 0x5c60) * 0xd;
                            piVar26 = (int *)(unaff_EBP - 0x6880);
                            uVar40 = 7;
                            piVar18 = (int *)(unaff_EBP - 0x5e68);
                            piVar24 = FUN_004cde40((void *)(unaff_EBP - 0x6830),
                                                   **(uint **)(unaff_EBP - 0x5c84));
                            pvVar17 = (void *)FUN_00405690(piVar24,piVar18,uVar40);
                            puVar38 = (undefined4 *)FUN_00405690(pvVar17,piVar26,uVar10);
                            puVar13 = FUN_00406380((void *)(unaff_EBP - 0x1300),*puVar38,puVar38[1],
                                                   *puVar19,puVar19[1],*puVar13,puVar13[1]);
                            FUN_00402a40((void *)(unaff_EBP - 0x274),puVar13);
                            *(undefined4 *)(unaff_EBP - 0x25c) = 0x3d99999a;
                            *(undefined4 *)(unaff_EBP - 600) = 0;
                            *(undefined4 *)(unaff_EBP - 0x244) = 1;
                            puVar13 = FUN_00401080((void *)(unaff_EBP - 0x470),0x3f19999a,0x3f000000
                                                   ,0x3ecccccd);
                            FUN_00401060((void *)(unaff_EBP - 0x250),puVar13);
                            FUN_00528450((void *)(*(int *)(unaff_EBP - 0x5c70) + 4),
                                         (undefined4 *)(unaff_EBP - 0x27c));
                            pvVar5 = *(void **)(unaff_EBP - 0x5cfc);
                            iVar9 = *(int *)(unaff_EBP - 0x5c6c);
                          }
                        }
                        puVar16 = FUN_004d1950(pvVar5,*(int *)(unaff_EBP - 0x5c60),iVar9,
                                               *(int *)(unaff_EBP - 0x5cb0));
                        iVar11 = *(int *)(unaff_EBP - 0x5cb0);
                        iVar57 = *(int *)(unaff_EBP - 0x5c60);
                        *(uint *)(unaff_EBP - 0x5c54) = (uint)(byte)puVar16[8];
                        pcVar29 = FUN_004d1950(pvVar5,iVar57,iVar9,iVar11);
                        if ((*pcVar29 == '\x01') &&
                           (puVar16 = FUN_004d1950(pvVar5,*(int *)(unaff_EBP - 0x5c60),iVar9,
                                                   *(int *)(unaff_EBP - 0x5cb0) + 1),
                           puVar16[3] == '\0')) {
                          pcVar29 = FUN_004d1950(pvVar5,*(int *)(unaff_EBP - 0x5c60) + -1,iVar9,
                                                 *(int *)(unaff_EBP - 0x5cb0));
                          pcVar43 = rand_exref;
                          if (*pcVar29 != '\x01') {
                            iVar11 = rand();
                            if (iVar11 % 3 != 0) {
                              uVar10 = iVar9 * 0xd;
                              piVar26 = (int *)(unaff_EBP - 0x6740);
                              piVar18 = (int *)(unaff_EBP - 0x5e78);
                              piVar24 = FUN_004cde40((void *)(unaff_EBP - 0x6380),
                                                     **(uint **)(unaff_EBP - 0x5c44));
                              pvVar17 = (void *)FUN_004ce290(piVar24,piVar18);
                              puVar13 = (undefined4 *)FUN_00405690(pvVar17,piVar26,uVar10);
                              uVar10 = *(int *)(unaff_EBP - 0x5c60) * 0xd;
                              piVar26 = (int *)(unaff_EBP - 0x5e88);
                              piVar18 = (int *)(unaff_EBP - 0x6608);
                              piVar24 = FUN_004cde40((void *)(unaff_EBP - 0x5e98),
                                                     **(uint **)(unaff_EBP - 0x5c84));
                              pvVar17 = (void *)FUN_004ce290(piVar24,piVar18);
                              puVar19 = (undefined4 *)FUN_00405690(pvVar17,piVar26,uVar10);
                              iVar9 = *(int *)(unaff_EBP - 0x5c54);
                              uVar51 = 1;
                              uVar58 = 2;
                              uVar12 = 0x4eb089;
                              piVar26 = (int *)FUN_004013d0(*(void **)(unaff_EBP - 0x5cb8),2);
                              FUN_004cde40(&stack0xfffffff0,
                                           *(int *)(unaff_EBP - 0x5c5c) + 1 + *piVar26);
                              puVar14 = FUN_00406380((void *)(unaff_EBP - 0x1288),*puVar19,
                                                     puVar19[1],*puVar13,puVar13[1],uVar12,uVar58);
                              FUN_004f2ee0((void *)(unaff_EBP - 0x2c60),puVar14,uVar51,iVar9);
                              piVar26 = (int *)(unaff_EBP - 0x6390);
                              *(undefined1 *)(unaff_EBP - 4) = 0x1f;
                              pvVar17 = (void *)FUN_004e2320((void *)(unaff_EBP - 0x2c58),2);
                              puVar14 = (uint *)FUN_004e0700(pvVar17,piVar26);
                              iVar9 = *(int *)(unaff_EBP - 0x5c70);
                              uVar10 = puVar14[1];
                              uVar40 = *puVar14;
                              puVar14 = (uint *)FUN_004e2320((void *)(unaff_EBP - 0x2c58),1);
                              uVar42 = puVar14[1];
                              uVar53 = *puVar14;
                              puVar14 = (uint *)FUN_004e2320((void *)(unaff_EBP - 0x2c58),0);
                              iVar9 = FUN_00406050(*(void **)(unaff_EBP - 0x5c68),*puVar14,
                                                   puVar14[1],uVar53,uVar42,uVar40,uVar10,iVar9);
                              uVar12 = FUN_004061f0(iVar9);
                              if ((char)uVar12 != '\0') {
                                FUN_004d6670(*(void **)(unaff_EBP - 0x5cd0),
                                             (void **)(unaff_EBP - 0x2c60));
                              }
                              *(undefined1 *)(unaff_EBP - 4) = 0x1e;
                              FUN_004cd8f0(unaff_EBP - 0x2c60);
                              iVar9 = *(int *)(unaff_EBP - 0x5c6c);
                              pcVar43 = rand_exref;
                            }
                            iVar11 = (*pcVar43)();
                            if (iVar11 % 3 != 0) {
                              uVar10 = iVar9 * 0xd;
                              piVar26 = (int *)(unaff_EBP - 0x5ea8);
                              piVar18 = (int *)(unaff_EBP - 0x67e8);
                              piVar24 = FUN_004cde40((void *)(unaff_EBP - 0x5eb8),
                                                     **(uint **)(unaff_EBP - 0x5c44));
                              pvVar17 = (void *)FUN_004ce290(piVar24,piVar18);
                              puVar13 = (undefined4 *)FUN_00405690(pvVar17,piVar26,uVar10);
                              uVar10 = *(int *)(unaff_EBP - 0x5c60) * 0xd;
                              piVar26 = (int *)(unaff_EBP - 0x63a0);
                              piVar18 = (int *)(unaff_EBP - 0x5ec8);
                              piVar24 = FUN_004cde40((void *)(unaff_EBP - 0x6618),
                                                     **(uint **)(unaff_EBP - 0x5c84));
                              pvVar17 = (void *)FUN_004ce290(piVar24,piVar18);
                              puVar19 = (undefined4 *)FUN_00405690(pvVar17,piVar26,uVar10);
                              iVar9 = *(int *)(unaff_EBP - 0x5c54);
                              uVar51 = 1;
                              uVar58 = 2;
                              uVar12 = 0x4eb219;
                              piVar26 = (int *)FUN_004013d0(*(void **)(unaff_EBP - 0x5cb8),2);
                              FUN_004cde40(&stack0xfffffff0,
                                           *(int *)(unaff_EBP - 0x5c5c) + 1 + *piVar26);
                              puVar14 = FUN_00406380((void *)(unaff_EBP - 0x1090),*puVar19,
                                                     puVar19[1],*puVar13,puVar13[1],uVar12,uVar58);
                              FUN_004f2ee0((void *)(unaff_EBP - 0x2950),puVar14,uVar51,iVar9);
                              piVar26 = (int *)(unaff_EBP - 0x5ed8);
                              *(undefined1 *)(unaff_EBP - 4) = 0x20;
                              pvVar17 = (void *)FUN_004e2320((void *)(unaff_EBP - 0x2948),2);
                              puVar14 = (uint *)FUN_004e0700(pvVar17,piVar26);
                              iVar9 = *(int *)(unaff_EBP - 0x5c70);
                              uVar10 = puVar14[1];
                              uVar40 = *puVar14;
                              puVar14 = (uint *)FUN_004e2320((void *)(unaff_EBP - 0x2948),1);
                              uVar42 = puVar14[1];
                              uVar53 = *puVar14;
                              puVar14 = (uint *)FUN_004e2320((void *)(unaff_EBP - 0x2948),0);
                              iVar9 = FUN_00406050(*(void **)(unaff_EBP - 0x5c68),*puVar14,
                                                   puVar14[1],uVar53,uVar42,uVar40,uVar10,iVar9);
                              uVar12 = FUN_004061f0(iVar9);
                              if ((char)uVar12 != '\0') {
                                FUN_004d6670(*(void **)(unaff_EBP - 0x5cd0),
                                             (void **)(unaff_EBP - 0x2950));
                              }
                              *(undefined1 *)(unaff_EBP - 4) = 0x1e;
                              FUN_004cd8f0(unaff_EBP - 0x2950);
                              pcVar43 = rand_exref;
                            }
                          }
                          iVar9 = *(int *)(unaff_EBP - 0x5c6c);
                          pcVar29 = FUN_004d1950(*(void **)(unaff_EBP - 0x5cfc),
                                                 *(int *)(unaff_EBP - 0x5c60) + 1,iVar9,
                                                 *(int *)(unaff_EBP - 0x5cb0));
                          if (*pcVar29 != '\x01') {
                            iVar11 = (*pcVar43)();
                            if (iVar11 % 3 != 0) {
                              uVar10 = iVar9 * 0xd;
                              piVar26 = (int *)(unaff_EBP - 0x63b0);
                              piVar18 = (int *)(unaff_EBP - 0x5ee8);
                              piVar24 = FUN_004cde40((void *)(unaff_EBP - 0x6750),
                                                     **(uint **)(unaff_EBP - 0x5c44));
                              pvVar17 = (void *)FUN_004ce290(piVar24,piVar18);
                              puVar13 = (undefined4 *)FUN_00405690(pvVar17,piVar26,uVar10);
                              uVar10 = *(int *)(unaff_EBP - 0x5c60) * 0xd;
                              piVar26 = (int *)(unaff_EBP - 0x5ef8);
                              piVar18 = (int *)(unaff_EBP - 0x63c0);
                              piVar24 = FUN_004cde40((void *)(unaff_EBP - 0x5f08),
                                                     **(uint **)(unaff_EBP - 0x5c84));
                              pvVar17 = (void *)FUN_004ce290(piVar24,piVar18);
                              puVar19 = (undefined4 *)FUN_00405690(pvVar17,piVar26,uVar10);
                              iVar9 = *(int *)(unaff_EBP - 0x5c54);
                              uVar51 = 3;
                              uVar58 = 2;
                              uVar12 = 0x4eb3cc;
                              piVar26 = (int *)FUN_004013d0(*(void **)(unaff_EBP - 0x5cb8),2);
                              FUN_004cde40(&stack0xfffffff0,
                                           *(int *)(unaff_EBP - 0x5c5c) + 1 + *piVar26);
                              puVar14 = FUN_00406380((void *)(unaff_EBP - 0x11e0),*puVar19,
                                                     puVar19[1],*puVar13,puVar13[1],uVar12,uVar58);
                              FUN_004f2ee0((void *)(unaff_EBP - 0x2ad8),puVar14,uVar51,iVar9);
                              piVar26 = (int *)(unaff_EBP - 0x6628);
                              *(undefined1 *)(unaff_EBP - 4) = 0x21;
                              pvVar17 = (void *)FUN_004e2320((void *)(unaff_EBP - 0x2ad0),2);
                              puVar14 = (uint *)FUN_004e0700(pvVar17,piVar26);
                              iVar9 = *(int *)(unaff_EBP - 0x5c70);
                              uVar10 = puVar14[1];
                              uVar40 = *puVar14;
                              puVar14 = (uint *)FUN_004e2320((void *)(unaff_EBP - 0x2ad0),1);
                              uVar42 = puVar14[1];
                              uVar53 = *puVar14;
                              puVar14 = (uint *)FUN_004e2320((void *)(unaff_EBP - 0x2ad0),0);
                              iVar9 = FUN_00406050(*(void **)(unaff_EBP - 0x5c68),*puVar14,
                                                   puVar14[1],uVar53,uVar42,uVar40,uVar10,iVar9);
                              uVar12 = FUN_004061f0(iVar9);
                              if ((char)uVar12 != '\0') {
                                FUN_004d6670(*(void **)(unaff_EBP - 0x5cd0),
                                             (void **)(unaff_EBP - 0x2ad8));
                              }
                              *(undefined1 *)(unaff_EBP - 4) = 0x1e;
                              FUN_004cd8f0(unaff_EBP - 0x2ad8);
                              iVar9 = *(int *)(unaff_EBP - 0x5c6c);
                              pcVar43 = rand_exref;
                            }
                            iVar11 = (*pcVar43)();
                            if (iVar11 % 3 != 0) {
                              uVar10 = iVar9 * 0xd;
                              piVar26 = (int *)(unaff_EBP - 0x5f18);
                              piVar18 = (int *)(unaff_EBP - 0x63d0);
                              piVar24 = FUN_004cde40((void *)(unaff_EBP - 0x5f28),
                                                     **(uint **)(unaff_EBP - 0x5c44));
                              pvVar17 = (void *)FUN_004ce290(piVar24,piVar18);
                              puVar13 = (undefined4 *)FUN_00405690(pvVar17,piVar26,uVar10);
                              uVar10 = *(int *)(unaff_EBP - 0x5c60) * 0xd;
                              piVar26 = (int *)(unaff_EBP - 0x6878);
                              piVar18 = (int *)(unaff_EBP - 0x5f38);
                              piVar24 = FUN_004cde40((void *)(unaff_EBP - 0x63e0),
                                                     **(uint **)(unaff_EBP - 0x5c84));
                              pvVar17 = (void *)FUN_004ce290(piVar24,piVar18);
                              puVar19 = (undefined4 *)FUN_00405690(pvVar17,piVar26,uVar10);
                              iVar9 = *(int *)(unaff_EBP - 0x5c54);
                              uVar51 = 3;
                              uVar58 = 2;
                              uVar12 = 0x4eb55c;
                              piVar26 = (int *)FUN_004013d0(*(void **)(unaff_EBP - 0x5cb8),2);
                              FUN_004cde40(&stack0xfffffff0,
                                           *(int *)(unaff_EBP - 0x5c5c) + 1 + *piVar26);
                              puVar14 = FUN_00406380((void *)(unaff_EBP - 0x10c0),*puVar19,
                                                     puVar19[1],*puVar13,puVar13[1],uVar12,uVar58);
                              FUN_004f2ee0((void *)(unaff_EBP - 0x2f70),puVar14,uVar51,iVar9);
                              piVar26 = (int *)(unaff_EBP - 0x5f48);
                              *(undefined1 *)(unaff_EBP - 4) = 0x22;
                              pvVar17 = (void *)FUN_004e2320((void *)(unaff_EBP - 0x2f68),2);
                              puVar14 = (uint *)FUN_004e0700(pvVar17,piVar26);
                              iVar9 = *(int *)(unaff_EBP - 0x5c70);
                              uVar10 = puVar14[1];
                              uVar40 = *puVar14;
                              puVar14 = (uint *)FUN_004e2320((void *)(unaff_EBP - 0x2f68),1);
                              uVar42 = puVar14[1];
                              uVar53 = *puVar14;
                              puVar14 = (uint *)FUN_004e2320((void *)(unaff_EBP - 0x2f68),0);
                              iVar9 = FUN_00406050(*(void **)(unaff_EBP - 0x5c68),*puVar14,
                                                   puVar14[1],uVar53,uVar42,uVar40,uVar10,iVar9);
                              uVar12 = FUN_004061f0(iVar9);
                              if ((char)uVar12 != '\0') {
                                FUN_004d6670(*(void **)(unaff_EBP - 0x5cd0),
                                             (void **)(unaff_EBP - 0x2f70));
                              }
                              *(undefined1 *)(unaff_EBP - 4) = 0x1e;
                              FUN_004cd8f0(unaff_EBP - 0x2f70);
                            }
                          }
                          iVar9 = *(int *)(unaff_EBP - 0x5c6c);
                          pcVar29 = FUN_004d1950(*(void **)(unaff_EBP - 0x5cfc),
                                                 *(int *)(unaff_EBP - 0x5c60),iVar9 + -1,
                                                 *(int *)(unaff_EBP - 0x5cb0));
                          if (*pcVar29 != '\x01') {
                            uVar10 = iVar9 * 0xd;
                            piVar26 = (int *)(unaff_EBP - 0x6638);
                            piVar18 = (int *)(unaff_EBP - 0x5f58);
                            piVar24 = FUN_004cde40((void *)(unaff_EBP - 0x63f0),
                                                   **(uint **)(unaff_EBP - 0x5c44));
                            pvVar17 = (void *)FUN_004ce290(piVar24,piVar18);
                            puVar13 = (undefined4 *)FUN_00405690(pvVar17,piVar26,uVar10);
                            uVar10 = *(int *)(unaff_EBP - 0x5c60) * 0xd;
                            piVar26 = (int *)(unaff_EBP - 0x5f68);
                            piVar18 = (int *)(unaff_EBP - 0x6760);
                            piVar24 = FUN_004cde40((void *)(unaff_EBP - 0x5f78),
                                                   **(uint **)(unaff_EBP - 0x5c84));
                            pvVar17 = (void *)FUN_004ce290(piVar24,piVar18);
                            puVar19 = (undefined4 *)FUN_00405690(pvVar17,piVar26,uVar10);
                            iVar9 = *(int *)(unaff_EBP - 0x5c54);
                            uVar51 = 2;
                            uVar58 = 2;
                            uVar12 = 0x4eb6f8;
                            piVar26 = (int *)FUN_004013d0(*(void **)(unaff_EBP - 0x5cb8),2);
                            FUN_004cde40(&stack0xfffffff0,
                                         *(int *)(unaff_EBP - 0x5c5c) + 1 + *piVar26);
                            puVar14 = FUN_00406380((void *)(unaff_EBP - 0x1270),*puVar19,puVar19[1],
                                                   *puVar13,puVar13[1],uVar12,uVar58);
                            FUN_004f2ee0((void *)(unaff_EBP - 0x3280),puVar14,uVar51,iVar9);
                            piVar26 = (int *)(unaff_EBP - 0x6400);
                            *(undefined1 *)(unaff_EBP - 4) = 0x23;
                            pvVar17 = (void *)FUN_004e2320((void *)(unaff_EBP - 0x3278),2);
                            puVar14 = (uint *)FUN_004e0700(pvVar17,piVar26);
                            iVar9 = *(int *)(unaff_EBP - 0x5c70);
                            uVar10 = puVar14[1];
                            uVar40 = *puVar14;
                            puVar14 = (uint *)FUN_004e2320((void *)(unaff_EBP - 0x3278),1);
                            uVar42 = puVar14[1];
                            uVar53 = *puVar14;
                            puVar14 = (uint *)FUN_004e2320((void *)(unaff_EBP - 0x3278),0);
                            iVar9 = FUN_00406050(*(void **)(unaff_EBP - 0x5c68),*puVar14,puVar14[1],
                                                 uVar53,uVar42,uVar40,uVar10,iVar9);
                            uVar12 = FUN_004061f0(iVar9);
                            if ((char)uVar12 != '\0') {
                              FUN_004d6670(*(void **)(unaff_EBP - 0x5cd0),
                                           (void **)(unaff_EBP - 0x3280));
                            }
                            *(undefined1 *)(unaff_EBP - 4) = 0x1e;
                            FUN_004cd8f0(unaff_EBP - 0x3280);
                            iVar9 = *(int *)(unaff_EBP - 0x5c6c);
                          }
                          pcVar29 = FUN_004d1950(*(void **)(unaff_EBP - 0x5cfc),
                                                 *(int *)(unaff_EBP - 0x5c60),iVar9 + 1,
                                                 *(int *)(unaff_EBP - 0x5cb0));
                          if (*pcVar29 != '\x01') {
                            iVar11 = rand();
                            if (iVar11 % 3 != 0) {
                              uVar10 = iVar9 * 0xd;
                              piVar26 = (int *)(unaff_EBP - 0x5f88);
                              piVar18 = (int *)(unaff_EBP - 0x6648);
                              piVar24 = FUN_004cde40((void *)(unaff_EBP - 0x5f98),
                                                     **(uint **)(unaff_EBP - 0x5c44));
                              pvVar17 = (void *)FUN_004ce290(piVar24,piVar18);
                              puVar13 = (undefined4 *)FUN_00405690(pvVar17,piVar26,uVar10);
                              uVar10 = *(int *)(unaff_EBP - 0x5c60) * 0xd;
                              piVar26 = (int *)(unaff_EBP - 0x6410);
                              piVar18 = (int *)(unaff_EBP - 0x5fa8);
                              piVar24 = FUN_004cde40((void *)(unaff_EBP - 0x67f8),
                                                     **(uint **)(unaff_EBP - 0x5c84));
                              pvVar17 = (void *)FUN_004ce290(piVar24,piVar18);
                              puVar19 = (undefined4 *)FUN_00405690(pvVar17,piVar26,uVar10);
                              iVar9 = *(int *)(unaff_EBP - 0x5c54);
                              uVar51 = 0;
                              uVar58 = 2;
                              uVar12 = 0x4eb8aa;
                              piVar26 = (int *)FUN_004013d0(*(void **)(unaff_EBP - 0x5cb8),2);
                              FUN_004cde40(&stack0xfffffff0,
                                           *(int *)(unaff_EBP - 0x5c5c) + 1 + *piVar26);
                              puVar14 = FUN_00406380((void *)(unaff_EBP - 0x10f0),*puVar19,
                                                     puVar19[1],*puVar13,puVar13[1],uVar12,uVar58);
                              FUN_004f2ee0((void *)(unaff_EBP - 0x2de8),puVar14,uVar51,iVar9);
                              piVar26 = (int *)(unaff_EBP - 0x5fb8);
                              *(undefined1 *)(unaff_EBP - 4) = 0x24;
                              pvVar17 = (void *)FUN_004e2320((void *)(unaff_EBP - 0x2de0),2);
                              puVar14 = (uint *)FUN_004e0700(pvVar17,piVar26);
                              iVar9 = *(int *)(unaff_EBP - 0x5c70);
                              uVar10 = puVar14[1];
                              uVar40 = *puVar14;
                              puVar14 = (uint *)FUN_004e2320((void *)(unaff_EBP - 0x2de0),1);
                              uVar42 = puVar14[1];
                              uVar53 = *puVar14;
                              puVar14 = (uint *)FUN_004e2320((void *)(unaff_EBP - 0x2de0),0);
                              iVar9 = FUN_00406050(*(void **)(unaff_EBP - 0x5c68),*puVar14,
                                                   puVar14[1],uVar53,uVar42,uVar40,uVar10,iVar9);
                              uVar12 = FUN_004061f0(iVar9);
                              if ((char)uVar12 != '\0') {
                                FUN_004d6670(*(void **)(unaff_EBP - 0x5cd0),
                                             (void **)(unaff_EBP - 0x2de8));
                              }
                              *(undefined1 *)(unaff_EBP - 4) = 0x1e;
                              FUN_004cd8f0(unaff_EBP - 0x2de8);
                              iVar9 = *(int *)(unaff_EBP - 0x5c6c);
                            }
                            iVar11 = rand();
                            if (iVar11 % 3 != 0) {
                              uVar10 = iVar9 * 0xd;
                              piVar26 = (int *)(unaff_EBP - 0x6420);
                              piVar18 = (int *)(unaff_EBP - 0x5fc8);
                              piVar24 = FUN_004cde40((void *)(unaff_EBP - 0x6658),
                                                     **(uint **)(unaff_EBP - 0x5c44));
                              pvVar17 = (void *)FUN_004ce290(piVar24,piVar18);
                              puVar13 = (undefined4 *)FUN_00405690(pvVar17,piVar26,uVar10);
                              uVar10 = *(int *)(unaff_EBP - 0x5c60) * 0xd;
                              piVar26 = (int *)(unaff_EBP - 0x5fd8);
                              piVar18 = (int *)(unaff_EBP - 0x6430);
                              piVar24 = FUN_004cde40((void *)(unaff_EBP - 0x5fe8),
                                                     **(uint **)(unaff_EBP - 0x5c84));
                              pvVar17 = (void *)FUN_004ce290(piVar24,piVar18);
                              puVar19 = (undefined4 *)FUN_00405690(pvVar17,piVar26,uVar10);
                              iVar9 = *(int *)(unaff_EBP - 0x5c54);
                              uVar51 = 0;
                              uVar58 = 2;
                              uVar12 = 0x4eba38;
                              piVar26 = (int *)FUN_004013d0(*(void **)(unaff_EBP - 0x5cb8),2);
                              FUN_004cde40(&stack0xfffffff0,
                                           *(int *)(unaff_EBP - 0x5c5c) + 1 + *piVar26);
                              puVar14 = FUN_00406380((void *)(unaff_EBP - 0x1210),*puVar19,
                                                     puVar19[1],*puVar13,puVar13[1],uVar12,uVar58);
                              FUN_004f2ee0((void *)(unaff_EBP - 0x30f8),puVar14,uVar51,iVar9);
                              piVar26 = (int *)(unaff_EBP - 0x6770);
                              *(undefined1 *)(unaff_EBP - 4) = 0x25;
                              pvVar17 = (void *)FUN_004e2320((void *)(unaff_EBP - 0x30f0),2);
                              puVar14 = (uint *)FUN_004e0700(pvVar17,piVar26);
                              iVar9 = *(int *)(unaff_EBP - 0x5c70);
                              uVar10 = puVar14[1];
                              uVar40 = *puVar14;
                              puVar14 = (uint *)FUN_004e2320((void *)(unaff_EBP - 0x30f0),1);
                              uVar42 = puVar14[1];
                              uVar53 = *puVar14;
                              puVar14 = (uint *)FUN_004e2320((void *)(unaff_EBP - 0x30f0),0);
                              iVar9 = FUN_00406050(*(void **)(unaff_EBP - 0x5c68),*puVar14,
                                                   puVar14[1],uVar53,uVar42,uVar40,uVar10,iVar9);
                              uVar12 = FUN_004061f0(iVar9);
                              if ((char)uVar12 != '\0') {
                                FUN_004d6670(*(void **)(unaff_EBP - 0x5cd0),
                                             (void **)(unaff_EBP - 0x30f8));
                              }
                              *(undefined1 *)(unaff_EBP - 4) = 0x1e;
                              FUN_004cd8f0(unaff_EBP - 0x30f8);
                            }
                          }
                          iVar9 = *(int *)(unaff_EBP - 0x5c6c);
                          pvVar5 = *(void **)(unaff_EBP - 0x5cfc);
                          puVar16 = FUN_004d1950(pvVar5,*(int *)(unaff_EBP - 0x5c60),iVar9,
                                                 *(int *)(unaff_EBP - 0x5cb0));
                          cVar4 = puVar16[8];
                          if (cVar4 == '\x01') {
                            FUN_004c84b0(unaff_EBP - 0xa38);
                            *(undefined1 *)(unaff_EBP - 4) = 0x26;
                            *(undefined4 *)(unaff_EBP - 0xa38) = 0x13;
                            puVar13 = FUN_00401080((void *)(unaff_EBP - 0x4e8),0x40000000,0x40400000
                                                   ,0x3f800000);
                            FUN_00401060((void *)(unaff_EBP - 0xa14),puVar13);
                            iVar11 = FUN_004013d0(*(void **)(unaff_EBP - 0x5cb8),2);
                            *(int *)(unaff_EBP - 0x5c58) = iVar11;
                            uVar10 = iVar9 * 0xd;
                            *(uint *)(unaff_EBP - 0x5c64) = uVar10;
                            piVar26 = (int *)(unaff_EBP - 0x5fc0);
                            uVar40 = 4;
                            piVar18 = (int *)(unaff_EBP - 0x5fd0);
                            piVar24 = FUN_004cde40((void *)(unaff_EBP - 0x5fe0),
                                                   **(uint **)(unaff_EBP - 0x5c44));
                            pvVar17 = (void *)FUN_00405690(piVar24,piVar18,uVar40);
                            puVar13 = (undefined4 *)FUN_00405690(pvVar17,piVar26,uVar10);
                            uVar10 = *(int *)(unaff_EBP - 0x5c60) * 0xd;
                            *(uint *)(unaff_EBP - 0x5c78) = uVar10;
                            piVar26 = (int *)(unaff_EBP - 0x5ff0);
                            uVar40 = 4;
                            piVar18 = (int *)(unaff_EBP - 0x6000);
                            piVar24 = FUN_004cde40((void *)(unaff_EBP - 0x6010),
                                                   **(uint **)(unaff_EBP - 0x5c84));
                            pvVar17 = (void *)FUN_00405690(piVar24,piVar18,uVar40);
                            puVar19 = (undefined4 *)FUN_00405690(pvVar17,piVar26,uVar10);
                            FUN_004cde40(&stack0xfffffff8,
                                         *(int *)(unaff_EBP - 0x5c5c) + 1 +
                                         **(int **)(unaff_EBP - 0x5c58));
                            puVar13 = FUN_00406380((void *)(unaff_EBP - 0xdf0),*puVar19,puVar19[1],
                                                   *puVar13,puVar13[1],piVar26,uVar10);
                            FUN_00402a40((void *)(unaff_EBP - 0xa30),puVar13);
                            uVar10 = rand();
                            uVar10 = uVar10 & 0x80000003;
                            if ((int)uVar10 < 0) {
                              uVar10 = (uVar10 - 1 | 0xfffffffc) + 1;
                            }
                            *(uint *)(unaff_EBP - 0xa18) = uVar10;
                            pvVar17 = (void *)FUN_004e2320((void *)(unaff_EBP - 0xa30),2);
                            *(void **)(unaff_EBP - 0x5c54) = pvVar17;
                            puVar14 = (uint *)FUN_004e0700(pvVar17,(int *)(unaff_EBP - 0x6020));
                            puVar15 = (uint *)FUN_004e2320((void *)(unaff_EBP - 0xa30),1);
                            *(uint **)(unaff_EBP - 0x5c7c) = puVar15;
                            puVar8 = (uint *)FUN_004e2320((void *)(unaff_EBP - 0xa30),0);
                            iVar9 = *(int *)(unaff_EBP - 0x5c70);
                            pvVar17 = *(void **)(unaff_EBP - 0x5c68);
                            uVar10 = puVar14[1];
                            *(uint **)(unaff_EBP - 0x14) = puVar8;
                            iVar9 = FUN_00406050(pvVar17,*puVar8,puVar8[1],*puVar15,puVar15[1],
                                                 *puVar14,uVar10,iVar9);
                            uVar12 = FUN_004061f0(iVar9);
                            if ((char)uVar12 != '\0') {
                              FUN_004d6670(*(void **)(unaff_EBP - 0x5cd0),
                                           (void **)(unaff_EBP - 0xa38));
                            }
                            uVar10 = *(uint *)(unaff_EBP - 0x5c64);
                            piVar26 = (int *)(unaff_EBP - 0x6030);
                            uVar40 = 4;
                            piVar18 = (int *)(unaff_EBP - 0x6040);
                            piVar24 = FUN_004cde40((void *)(unaff_EBP - 0x6050),
                                                   **(uint **)(unaff_EBP - 0x5c44));
                            pvVar17 = (void *)FUN_00405690(piVar24,piVar18,uVar40);
                            puVar13 = (undefined4 *)FUN_00405690(pvVar17,piVar26,uVar10);
                            uVar10 = *(uint *)(unaff_EBP - 0x5c78);
                            piVar26 = (int *)(unaff_EBP - 0x6060);
                            uVar40 = 10;
                            piVar18 = (int *)(unaff_EBP - 0x6070);
                            piVar24 = FUN_004cde40((void *)(unaff_EBP - 0x6080),
                                                   **(uint **)(unaff_EBP - 0x5c84));
                            pvVar17 = (void *)FUN_00405690(piVar24,piVar18,uVar40);
                            puVar19 = (undefined4 *)FUN_00405690(pvVar17,piVar26,uVar10);
                            FUN_004cde40(&stack0xfffffff8,
                                         *(int *)(unaff_EBP - 0x5c5c) + 1 +
                                         **(int **)(unaff_EBP - 0x5c58));
                            puVar13 = FUN_00406380((void *)(unaff_EBP - 0xe20),*puVar19,puVar19[1],
                                                   *puVar13,puVar13[1],piVar26,uVar10);
                            FUN_00402a40((void *)(unaff_EBP - 0xa30),puVar13);
                            uVar10 = rand();
                            uVar10 = uVar10 & 0x80000003;
                            if ((int)uVar10 < 0) {
                              uVar10 = (uVar10 - 1 | 0xfffffffc) + 1;
                            }
                            pvVar17 = *(void **)(unaff_EBP - 0x5c54);
                            *(uint *)(unaff_EBP - 0xa18) = uVar10;
                            puVar14 = (uint *)FUN_004e0700(pvVar17,(int *)(unaff_EBP - 0x6090));
                            iVar9 = FUN_00406050(*(void **)(unaff_EBP - 0x5c68),
                                                 **(uint **)(unaff_EBP - 0x14),
                                                 (*(uint **)(unaff_EBP - 0x14))[1],
                                                 **(uint **)(unaff_EBP - 0x5c7c),
                                                 (*(uint **)(unaff_EBP - 0x5c7c))[1],*puVar14,
                                                 puVar14[1],*(int *)(unaff_EBP - 0x5c70));
                            uVar12 = FUN_004061f0(iVar9);
                            if ((char)uVar12 != '\0') {
                              FUN_004d6670(*(void **)(unaff_EBP - 0x5cd0),
                                           (void **)(unaff_EBP - 0xa38));
                            }
                            uVar10 = *(uint *)(unaff_EBP - 0x5c64);
                            piVar26 = (int *)(unaff_EBP - 0x60a0);
                            uVar40 = 10;
                            piVar18 = (int *)(unaff_EBP - 0x60b0);
                            piVar24 = FUN_004cde40((void *)(unaff_EBP - 0x60c0),
                                                   **(uint **)(unaff_EBP - 0x5c44));
                            pvVar17 = (void *)FUN_00405690(piVar24,piVar18,uVar40);
                            puVar13 = (undefined4 *)FUN_00405690(pvVar17,piVar26,uVar10);
                            uVar10 = *(uint *)(unaff_EBP - 0x5c78);
                            piVar26 = (int *)(unaff_EBP - 0x60d0);
                            uVar40 = 4;
                            piVar18 = (int *)(unaff_EBP - 0x60e0);
                            piVar24 = FUN_004cde40((void *)(unaff_EBP - 0x60f0),
                                                   **(uint **)(unaff_EBP - 0x5c84));
                            pvVar17 = (void *)FUN_00405690(piVar24,piVar18,uVar40);
                            puVar19 = (undefined4 *)FUN_00405690(pvVar17,piVar26,uVar10);
                            FUN_004cde40(&stack0xfffffff8,
                                         *(int *)(unaff_EBP - 0x5c5c) + 1 +
                                         **(int **)(unaff_EBP - 0x5c58));
                            puVar13 = FUN_00406380((void *)(unaff_EBP - 0xe50),*puVar19,puVar19[1],
                                                   *puVar13,puVar13[1],piVar26,uVar10);
                            FUN_00402a40((void *)(unaff_EBP - 0xa30),puVar13);
                            uVar10 = rand();
                            uVar10 = uVar10 & 0x80000003;
                            if ((int)uVar10 < 0) {
                              uVar10 = (uVar10 - 1 | 0xfffffffc) + 1;
                            }
                            pvVar17 = *(void **)(unaff_EBP - 0x5c54);
                            *(uint *)(unaff_EBP - 0xa18) = uVar10;
                            puVar14 = (uint *)FUN_004e0700(pvVar17,(int *)(unaff_EBP - 0x6100));
                            iVar9 = FUN_00406050(*(void **)(unaff_EBP - 0x5c68),
                                                 **(uint **)(unaff_EBP - 0x14),
                                                 (*(uint **)(unaff_EBP - 0x14))[1],
                                                 **(uint **)(unaff_EBP - 0x5c7c),
                                                 (*(uint **)(unaff_EBP - 0x5c7c))[1],*puVar14,
                                                 puVar14[1],*(int *)(unaff_EBP - 0x5c70));
                            uVar12 = FUN_004061f0(iVar9);
                            if ((char)uVar12 != '\0') {
                              FUN_004d6670(*(void **)(unaff_EBP - 0x5cd0),
                                           (void **)(unaff_EBP - 0xa38));
                            }
                            uVar10 = *(uint *)(unaff_EBP - 0x5c64);
                            piVar26 = (int *)(unaff_EBP - 0x6110);
                            uVar40 = 10;
                            piVar18 = (int *)(unaff_EBP - 0x6120);
                            piVar24 = FUN_004cde40((void *)(unaff_EBP - 0x6130),
                                                   **(uint **)(unaff_EBP - 0x5c44));
                            pvVar17 = (void *)FUN_00405690(piVar24,piVar18,uVar40);
                            puVar13 = (undefined4 *)FUN_00405690(pvVar17,piVar26,uVar10);
                            uVar10 = *(uint *)(unaff_EBP - 0x5c78);
                            piVar26 = (int *)(unaff_EBP - 0x6140);
                            uVar40 = 10;
                            piVar18 = (int *)(unaff_EBP - 0x6150);
                            piVar24 = FUN_004cde40((void *)(unaff_EBP - 0x6160),
                                                   **(uint **)(unaff_EBP - 0x5c84));
                            pvVar17 = (void *)FUN_00405690(piVar24,piVar18,uVar40);
                            puVar19 = (undefined4 *)FUN_00405690(pvVar17,piVar26,uVar10);
                            FUN_004cde40(&stack0xfffffff8,
                                         *(int *)(unaff_EBP - 0x5c5c) + 1 +
                                         **(int **)(unaff_EBP - 0x5c58));
                            puVar13 = FUN_00406380((void *)(unaff_EBP - 0xe80),*puVar19,puVar19[1],
                                                   *puVar13,puVar13[1],piVar26,uVar10);
                            FUN_00402a40((void *)(unaff_EBP - 0xa30),puVar13);
                            uVar10 = rand();
                            uVar10 = uVar10 & 0x80000003;
                            if ((int)uVar10 < 0) {
                              uVar10 = (uVar10 - 1 | 0xfffffffc) + 1;
                            }
                            pvVar17 = *(void **)(unaff_EBP - 0x5c54);
                            *(uint *)(unaff_EBP - 0xa18) = uVar10;
                            puVar14 = (uint *)FUN_004e0700(pvVar17,(int *)(unaff_EBP - 0x6178));
                            iVar9 = FUN_00406050(*(void **)(unaff_EBP - 0x5c68),
                                                 **(uint **)(unaff_EBP - 0x14),
                                                 (*(uint **)(unaff_EBP - 0x14))[1],
                                                 **(uint **)(unaff_EBP - 0x5c7c),
                                                 (*(uint **)(unaff_EBP - 0x5c7c))[1],*puVar14,
                                                 puVar14[1],*(int *)(unaff_EBP - 0x5c70));
                            uVar12 = FUN_004061f0(iVar9);
                            if ((char)uVar12 != '\0') {
                              FUN_004d6670(*(void **)(unaff_EBP - 0x5cd0),
                                           (void **)(unaff_EBP - 0xa38));
                            }
                            iVar9 = unaff_EBP - 0xa38;
                          }
                          else if (cVar4 == '\x02') {
                            FUN_004c84b0(unaff_EBP - 0x1d10);
                            pvVar17 = *(void **)(unaff_EBP - 0x5cb8);
                            *(undefined1 *)(unaff_EBP - 4) = 0x27;
                            iVar11 = FUN_004013d0(pvVar17,2);
                            *(int *)(unaff_EBP - 0x5c78) = iVar11;
                            uVar10 = iVar9 * 0xd;
                            *(uint *)(unaff_EBP - 0x5c58) = uVar10;
                            piVar26 = (int *)(unaff_EBP - 0x66a8);
                            uVar40 = 7;
                            piVar18 = (int *)(unaff_EBP - 0x6118);
                            piVar24 = FUN_004cde40((void *)(unaff_EBP - 0x64d0),
                                                   **(uint **)(unaff_EBP - 0x5c44));
                            pvVar17 = (void *)FUN_00405690(piVar24,piVar18,uVar40);
                            puVar13 = (undefined4 *)FUN_00405690(pvVar17,piVar26,uVar10);
                            uVar10 = *(int *)(unaff_EBP - 0x5c60) * 0xd;
                            *(uint *)(unaff_EBP - 0x5c54) = uVar10;
                            piVar26 = (int *)(unaff_EBP - 0x6128);
                            uVar40 = 7;
                            piVar18 = (int *)(unaff_EBP - 0x6868);
                            piVar24 = FUN_004cde40((void *)(unaff_EBP - 0x6138),
                                                   **(uint **)(unaff_EBP - 0x5c84));
                            pvVar17 = (void *)FUN_00405690(piVar24,piVar18,uVar40);
                            puVar19 = (undefined4 *)FUN_00405690(pvVar17,piVar26,uVar10);
                            FUN_004cde40(&stack0xfffffff8,
                                         *(int *)(unaff_EBP - 0x5c5c) + 1 +
                                         **(int **)(unaff_EBP - 0x5c78));
                            puVar13 = FUN_00406380((void *)(unaff_EBP - 0x12b8),*puVar19,puVar19[1],
                                                   *puVar13,puVar13[1],piVar26,uVar10);
                            FUN_00402a40((void *)(unaff_EBP - 0x1d08),puVar13);
                            *(undefined4 *)(unaff_EBP - 0x1d10) = 0xc;
                            puVar13 = FUN_00401080((void *)(unaff_EBP - 0x4b8),0x40400000,0x40400000
                                                   ,0x3f800000);
                            FUN_00401060((void *)(unaff_EBP - 0x1cec),puVar13);
                            uVar10 = rand();
                            uVar10 = uVar10 & 0x80000003;
                            if ((int)uVar10 < 0) {
                              uVar10 = (uVar10 - 1 | 0xfffffffc) + 1;
                            }
                            *(uint *)(unaff_EBP - 0x1cf0) = uVar10;
                            piVar26 = (int *)(unaff_EBP - 0x64e0);
                            pvVar17 = (void *)FUN_004e2320((void *)(unaff_EBP - 0x1d08),2);
                            puVar14 = (uint *)FUN_004e0700(pvVar17,piVar26);
                            iVar9 = *(int *)(unaff_EBP - 0x5c70);
                            uVar10 = puVar14[1];
                            uVar40 = *puVar14;
                            puVar14 = (uint *)FUN_004e2320((void *)(unaff_EBP - 0x1d08),1);
                            uVar42 = puVar14[1];
                            uVar53 = *puVar14;
                            puVar14 = (uint *)FUN_004e2320((void *)(unaff_EBP - 0x1d08),0);
                            iVar9 = FUN_00406050(*(void **)(unaff_EBP - 0x5c68),*puVar14,puVar14[1],
                                                 uVar53,uVar42,uVar40,uVar10,iVar9);
                            uVar12 = FUN_004061f0(iVar9);
                            if ((char)uVar12 != '\0') {
                              FUN_004d6670(*(void **)(unaff_EBP - 0x5cd0),
                                           (void **)(unaff_EBP - 0x1d10));
                            }
                            FUN_004c84b0(unaff_EBP - 0xd48);
                            *(undefined1 *)(unaff_EBP - 4) = 0x28;
                            *(undefined4 *)(unaff_EBP - 0xd48) = 0x10;
                            puVar13 = FUN_00401080((void *)(unaff_EBP - 0x4d0),0x3f800000,0x3f800000
                                                   ,0x3f000000);
                            FUN_00401060((void *)(unaff_EBP - 0xd24),puVar13);
                            uVar10 = *(uint *)(unaff_EBP - 0x5c58);
                            piVar26 = (int *)(unaff_EBP - 0x6148);
                            uVar40 = 7;
                            piVar18 = (int *)(unaff_EBP - 0x66b8);
                            piVar24 = FUN_004cde40((void *)(unaff_EBP - 0x6158),
                                                   **(uint **)(unaff_EBP - 0x5c44));
                            pvVar17 = (void *)FUN_00405690(piVar24,piVar18,uVar40);
                            puVar13 = (undefined4 *)FUN_00405690(pvVar17,piVar26,uVar10);
                            uVar10 = *(uint *)(unaff_EBP - 0x5c54);
                            piVar26 = (int *)(unaff_EBP - 0x6360);
                            piVar18 = (int *)(unaff_EBP - 0x65f8);
                            piVar24 = FUN_004cde40((void *)(unaff_EBP - 0x6370),
                                                   **(uint **)(unaff_EBP - 0x5c84));
                            pvVar17 = (void *)FUN_004ce290(piVar24,piVar18);
                            puVar19 = (undefined4 *)FUN_00405690(pvVar17,piVar26,uVar10);
                            FUN_004cde40(&stack0xfffffff8,
                                         *(int *)(unaff_EBP - 0x5c5c) + 1 +
                                         **(int **)(unaff_EBP - 0x5c78));
                            puVar13 = FUN_00406380((void *)(unaff_EBP - 0x11b0),*puVar19,puVar19[1],
                                                   *puVar13,puVar13[1],piVar26,uVar10);
                            FUN_00402a40((void *)(unaff_EBP - 0xd40),puVar13);
                            *(undefined4 *)(unaff_EBP - 0xd28) = 1;
                            pvVar17 = (void *)FUN_004e2320((void *)(unaff_EBP - 0xd40),2);
                            *(void **)(unaff_EBP - 0x5c64) = pvVar17;
                            puVar14 = (uint *)FUN_004e0700(pvVar17,(int *)(unaff_EBP - 0x5e60));
                            puVar15 = (uint *)FUN_004e2320((void *)(unaff_EBP - 0xd40),1);
                            *(uint **)(unaff_EBP - 0x5c7c) = puVar15;
                            puVar8 = (uint *)FUN_004e2320((void *)(unaff_EBP - 0xd40),0);
                            iVar9 = *(int *)(unaff_EBP - 0x5c70);
                            pvVar17 = *(void **)(unaff_EBP - 0x5c68);
                            uVar10 = puVar14[1];
                            *(uint **)(unaff_EBP - 0x14) = puVar8;
                            iVar9 = FUN_00406050(pvVar17,*puVar8,puVar8[1],*puVar15,puVar15[1],
                                                 *puVar14,uVar10,iVar9);
                            uVar12 = FUN_004061f0(iVar9);
                            if ((char)uVar12 != '\0') {
                              FUN_004d6670(*(void **)(unaff_EBP - 0x5cd0),
                                           (void **)(unaff_EBP - 0xd48));
                            }
                            uVar10 = *(uint *)(unaff_EBP - 0x5c58);
                            piVar26 = (int *)(unaff_EBP - 0x5e70);
                            uVar40 = 7;
                            piVar18 = (int *)(unaff_EBP - 0x5e80);
                            piVar24 = FUN_004cde40((void *)(unaff_EBP - 0x5e90),
                                                   **(uint **)(unaff_EBP - 0x5c44));
                            pvVar17 = (void *)FUN_00405690(piVar24,piVar18,uVar40);
                            puVar13 = (undefined4 *)FUN_00405690(pvVar17,piVar26,uVar10);
                            uVar10 = *(uint *)(unaff_EBP - 0x5c54);
                            piVar26 = (int *)(unaff_EBP - 0x5ea0);
                            piVar18 = (int *)(unaff_EBP - 0x5eb0);
                            piVar24 = FUN_004cde40((void *)(unaff_EBP - 0x5ec0),
                                                   **(uint **)(unaff_EBP - 0x5c84));
                            pvVar17 = (void *)FUN_004ce290(piVar24,piVar18);
                            puVar19 = (undefined4 *)FUN_00405690(pvVar17,piVar26,uVar10);
                            FUN_004cde40(&stack0xfffffff8,
                                         *(int *)(unaff_EBP - 0x5c5c) + 1 +
                                         **(int **)(unaff_EBP - 0x5c78));
                            puVar13 = FUN_00406380((void *)(unaff_EBP - 0x1060),*puVar19,puVar19[1],
                                                   *puVar13,puVar13[1],piVar26,uVar10);
                            FUN_00402a40((void *)(unaff_EBP - 0xd40),puVar13);
                            pvVar17 = *(void **)(unaff_EBP - 0x5c64);
                            *(undefined4 *)(unaff_EBP - 0xd28) = 3;
                            puVar14 = (uint *)FUN_004e0700(pvVar17,(int *)(unaff_EBP - 0x5ed0));
                            iVar9 = FUN_00406050(*(void **)(unaff_EBP - 0x5c68),
                                                 **(uint **)(unaff_EBP - 0x14),
                                                 (*(uint **)(unaff_EBP - 0x14))[1],
                                                 **(uint **)(unaff_EBP - 0x5c7c),
                                                 (*(uint **)(unaff_EBP - 0x5c7c))[1],*puVar14,
                                                 puVar14[1],*(int *)(unaff_EBP - 0x5c70));
                            uVar12 = FUN_004061f0(iVar9);
                            if ((char)uVar12 != '\0') {
                              FUN_004d6670(*(void **)(unaff_EBP - 0x5cd0),
                                           (void **)(unaff_EBP - 0xd48));
                            }
                            uVar10 = *(uint *)(unaff_EBP - 0x5c58);
                            piVar26 = (int *)(unaff_EBP - 0x5ee0);
                            piVar18 = (int *)(unaff_EBP - 0x5ef0);
                            piVar24 = FUN_004cde40((void *)(unaff_EBP - 0x5f00),
                                                   **(uint **)(unaff_EBP - 0x5c44));
                            pvVar17 = (void *)FUN_004ce290(piVar24,piVar18);
                            puVar13 = (undefined4 *)FUN_00405690(pvVar17,piVar26,uVar10);
                            uVar10 = *(uint *)(unaff_EBP - 0x5c54);
                            piVar26 = (int *)(unaff_EBP - 0x5f10);
                            uVar40 = 7;
                            piVar18 = (int *)(unaff_EBP - 0x5f20);
                            piVar24 = FUN_004cde40((void *)(unaff_EBP - 0x5f30),
                                                   **(uint **)(unaff_EBP - 0x5c84));
                            pvVar17 = (void *)FUN_00405690(piVar24,piVar18,uVar40);
                            puVar19 = (undefined4 *)FUN_00405690(pvVar17,piVar26,uVar10);
                            FUN_004cde40(&stack0xfffffff8,
                                         *(int *)(unaff_EBP - 0x5c5c) + 1 +
                                         **(int **)(unaff_EBP - 0x5c78));
                            puVar13 = FUN_00406380((void *)(unaff_EBP - 0x1078),*puVar19,puVar19[1],
                                                   *puVar13,puVar13[1],piVar26,uVar10);
                            FUN_00402a40((void *)(unaff_EBP - 0xd40),puVar13);
                            pvVar17 = *(void **)(unaff_EBP - 0x5c64);
                            *(undefined4 *)(unaff_EBP - 0xd28) = 2;
                            puVar14 = (uint *)FUN_004e0700(pvVar17,(int *)(unaff_EBP - 0x5f40));
                            iVar9 = FUN_00406050(*(void **)(unaff_EBP - 0x5c68),
                                                 **(uint **)(unaff_EBP - 0x14),
                                                 (*(uint **)(unaff_EBP - 0x14))[1],
                                                 **(uint **)(unaff_EBP - 0x5c7c),
                                                 (*(uint **)(unaff_EBP - 0x5c7c))[1],*puVar14,
                                                 puVar14[1],*(int *)(unaff_EBP - 0x5c70));
                            uVar12 = FUN_004061f0(iVar9);
                            if ((char)uVar12 != '\0') {
                              FUN_004d6670(*(void **)(unaff_EBP - 0x5cd0),
                                           (void **)(unaff_EBP - 0xd48));
                            }
                            uVar10 = *(uint *)(unaff_EBP - 0x5c58);
                            piVar26 = (int *)(unaff_EBP - 0x5f50);
                            piVar18 = (int *)(unaff_EBP - 0x5f60);
                            piVar24 = FUN_004cde40((void *)(unaff_EBP - 0x5f70),
                                                   **(uint **)(unaff_EBP - 0x5c44));
                            pvVar17 = (void *)FUN_004ce290(piVar24,piVar18);
                            puVar13 = (undefined4 *)FUN_00405690(pvVar17,piVar26,uVar10);
                            uVar10 = *(uint *)(unaff_EBP - 0x5c54);
                            piVar26 = (int *)(unaff_EBP - 0x5f80);
                            uVar40 = 7;
                            piVar18 = (int *)(unaff_EBP - 0x5f90);
                            piVar24 = FUN_004cde40((void *)(unaff_EBP - 0x5fa0),
                                                   **(uint **)(unaff_EBP - 0x5c84));
                            pvVar17 = (void *)FUN_00405690(piVar24,piVar18,uVar40);
                            puVar19 = (undefined4 *)FUN_00405690(pvVar17,piVar26,uVar10);
                            FUN_004cde40(&stack0xfffffff8,
                                         *(int *)(unaff_EBP - 0x5c5c) + 1 +
                                         **(int **)(unaff_EBP - 0x5c78));
                            puVar13 = FUN_00406380((void *)(unaff_EBP - 0xdd8),*puVar19,puVar19[1],
                                                   *puVar13,puVar13[1],piVar26,uVar10);
                            FUN_00402a40((void *)(unaff_EBP - 0xd40),puVar13);
                            pvVar17 = *(void **)(unaff_EBP - 0x5c64);
                            *(undefined4 *)(unaff_EBP - 0xd28) = 0;
                            puVar14 = (uint *)FUN_004e0700(pvVar17,(int *)(unaff_EBP - 0x5fb0));
                            iVar9 = FUN_00406050(*(void **)(unaff_EBP - 0x5c68),
                                                 **(uint **)(unaff_EBP - 0x14),
                                                 (*(uint **)(unaff_EBP - 0x14))[1],
                                                 **(uint **)(unaff_EBP - 0x5c7c),
                                                 (*(uint **)(unaff_EBP - 0x5c7c))[1],*puVar14,
                                                 puVar14[1],*(int *)(unaff_EBP - 0x5c70));
                            uVar12 = FUN_004061f0(iVar9);
                            if ((char)uVar12 != '\0') {
                              FUN_004d6670(*(void **)(unaff_EBP - 0x5cd0),
                                           (void **)(unaff_EBP - 0xd48));
                            }
                            FUN_004cd8f0(unaff_EBP - 0xd48);
                            iVar9 = unaff_EBP - 0x1d10;
                          }
                          else if (cVar4 == '\x03') {
                            FUN_004c84b0(unaff_EBP - 0xbc0);
                            *(undefined1 *)(unaff_EBP - 4) = 0x29;
                            *(undefined4 *)(unaff_EBP - 0xbc0) = 0x1f;
                            puVar13 = FUN_00401080((void *)(unaff_EBP - 0x4a0),0x40800000,0x3f800000
                                                   ,0x3f800000);
                            FUN_00401060((void *)(unaff_EBP - 0xb9c),puVar13);
                            iVar11 = FUN_004013d0(*(void **)(unaff_EBP - 0x5cb8),2);
                            *(int *)(unaff_EBP - 0x5c58) = iVar11;
                            uVar10 = iVar9 * 0xd;
                            *(uint *)(unaff_EBP - 0x5c64) = uVar10;
                            piVar26 = (int *)(unaff_EBP - 0x6840);
                            uVar40 = 7;
                            piVar18 = (int *)(unaff_EBP - 0x6038);
                            piVar24 = FUN_004cde40((void *)(unaff_EBP - 0x6460),
                                                   **(uint **)(unaff_EBP - 0x5c44));
                            pvVar17 = (void *)FUN_00405690(piVar24,piVar18,uVar40);
                            puVar13 = (undefined4 *)FUN_00405690(pvVar17,piVar26,uVar10);
                            uVar10 = *(int *)(unaff_EBP - 0x5c60) * 0xd;
                            *(uint *)(unaff_EBP - 0x5c78) = uVar10;
                            piVar26 = (int *)(unaff_EBP - 0x6048);
                            piVar18 = (int *)(unaff_EBP - 0x6678);
                            piVar24 = FUN_004cde40((void *)(unaff_EBP - 0x6058),
                                                   **(uint **)(unaff_EBP - 0x5c84));
                            pvVar17 = (void *)FUN_004ce290(piVar24,piVar18);
                            puVar19 = (undefined4 *)FUN_00405690(pvVar17,piVar26,uVar10);
                            FUN_004cde40(&stack0xfffffff8,
                                         *(int *)(unaff_EBP - 0x5c5c) + 1 +
                                         **(int **)(unaff_EBP - 0x5c58));
                            puVar13 = FUN_00406380((void *)(unaff_EBP - 0x12e8),*puVar19,puVar19[1],
                                                   *puVar13,puVar13[1],piVar26,uVar10);
                            FUN_00402a40((void *)(unaff_EBP - 3000),puVar13);
                            *(undefined4 *)(unaff_EBP - 0xba0) = 3;
                            pvVar17 = (void *)FUN_004e2320((void *)(unaff_EBP - 3000),2);
                            *(void **)(unaff_EBP - 0x5c54) = pvVar17;
                            puVar14 = (uint *)FUN_004e0700(pvVar17,(int *)(unaff_EBP - 0x6470));
                            puVar15 = (uint *)FUN_004e2320((void *)(unaff_EBP - 3000),1);
                            *(uint **)(unaff_EBP - 0x5c7c) = puVar15;
                            puVar8 = (uint *)FUN_004e2320((void *)(unaff_EBP - 3000),0);
                            iVar9 = *(int *)(unaff_EBP - 0x5c70);
                            pvVar17 = *(void **)(unaff_EBP - 0x5c68);
                            uVar10 = puVar14[1];
                            *(uint **)(unaff_EBP - 0x14) = puVar8;
                            iVar9 = FUN_00406050(pvVar17,*puVar8,puVar8[1],*puVar15,puVar15[1],
                                                 *puVar14,uVar10,iVar9);
                            uVar12 = FUN_004061f0(iVar9);
                            if ((char)uVar12 != '\0') {
                              FUN_004d6670(*(void **)(unaff_EBP - 0x5cd0),
                                           (void **)(unaff_EBP - 0xbc0));
                            }
                            uVar10 = *(uint *)(unaff_EBP - 0x5c64);
                            piVar26 = (int *)(unaff_EBP - 0x6068);
                            uVar40 = 7;
                            piVar18 = (int *)(unaff_EBP - 0x6780);
                            piVar24 = FUN_004cde40((void *)(unaff_EBP - 0x6078),
                                                   **(uint **)(unaff_EBP - 0x5c44));
                            pvVar17 = (void *)FUN_00405690(piVar24,piVar18,uVar40);
                            puVar13 = (undefined4 *)FUN_00405690(pvVar17,piVar26,uVar10);
                            uVar10 = *(uint *)(unaff_EBP - 0x5c78);
                            piVar26 = (int *)(unaff_EBP - 0x6480);
                            piVar18 = (int *)(unaff_EBP - 0x6088);
                            piVar24 = FUN_004cde40((void *)(unaff_EBP - 0x6688),
                                                   **(uint **)(unaff_EBP - 0x5c84));
                            pvVar17 = (void *)FUN_004ce290(piVar24,piVar18);
                            puVar19 = (undefined4 *)FUN_00405690(pvVar17,piVar26,uVar10);
                            FUN_004cde40(&stack0xfffffff8,
                                         *(int *)(unaff_EBP - 0x5c5c) + 1 +
                                         **(int **)(unaff_EBP - 0x5c58));
                            puVar13 = FUN_00406380((void *)(unaff_EBP - 0x1150),*puVar19,puVar19[1],
                                                   *puVar13,puVar13[1],piVar26,uVar10);
                            FUN_00402a40((void *)(unaff_EBP - 3000),puVar13);
                            pvVar17 = *(void **)(unaff_EBP - 0x5c54);
                            *(undefined4 *)(unaff_EBP - 0xba0) = 1;
                            puVar14 = (uint *)FUN_004e0700(pvVar17,(int *)(unaff_EBP - 0x6098));
                            iVar9 = FUN_00406050(*(void **)(unaff_EBP - 0x5c68),
                                                 **(uint **)(unaff_EBP - 0x14),
                                                 (*(uint **)(unaff_EBP - 0x14))[1],
                                                 **(uint **)(unaff_EBP - 0x5c7c),
                                                 (*(uint **)(unaff_EBP - 0x5c7c))[1],*puVar14,
                                                 puVar14[1],*(int *)(unaff_EBP - 0x5c70));
                            uVar12 = FUN_004061f0(iVar9);
                            if ((char)uVar12 != '\0') {
                              FUN_004d6670(*(void **)(unaff_EBP - 0x5cd0),
                                           (void **)(unaff_EBP - 0xbc0));
                            }
                            uVar10 = *(uint *)(unaff_EBP - 0x5c64);
                            piVar26 = (int *)(unaff_EBP - 0x6490);
                            piVar18 = (int *)(unaff_EBP - 0x60a8);
                            piVar24 = FUN_004cde40((void *)(unaff_EBP - 0x6808),
                                                   **(uint **)(unaff_EBP - 0x5c44));
                            pvVar17 = (void *)FUN_004ce290(piVar24,piVar18);
                            puVar13 = (undefined4 *)FUN_00405690(pvVar17,piVar26,uVar10);
                            uVar10 = *(uint *)(unaff_EBP - 0x5c78);
                            piVar26 = (int *)(unaff_EBP - 0x60b8);
                            uVar40 = 7;
                            piVar18 = (int *)(unaff_EBP - 0x64a0);
                            piVar24 = FUN_004cde40((void *)(unaff_EBP - 0x60c8),
                                                   **(uint **)(unaff_EBP - 0x5c84));
                            pvVar17 = (void *)FUN_00405690(piVar24,piVar18,uVar40);
                            puVar19 = (undefined4 *)FUN_00405690(pvVar17,piVar26,uVar10);
                            FUN_004cde40(&stack0xfffffff8,
                                         *(int *)(unaff_EBP - 0x5c5c) + 1 +
                                         **(int **)(unaff_EBP - 0x5c58));
                            puVar13 = FUN_00406380((void *)(unaff_EBP - 0x1240),*puVar19,puVar19[1],
                                                   *puVar13,puVar13[1],piVar26,uVar10);
                            FUN_00402a40((void *)(unaff_EBP - 3000),puVar13);
                            pvVar17 = *(void **)(unaff_EBP - 0x5c54);
                            *(undefined4 *)(unaff_EBP - 0xba0) = 0;
                            puVar14 = (uint *)FUN_004e0700(pvVar17,(int *)(unaff_EBP - 0x6698));
                            iVar9 = FUN_00406050(*(void **)(unaff_EBP - 0x5c68),
                                                 **(uint **)(unaff_EBP - 0x14),
                                                 (*(uint **)(unaff_EBP - 0x14))[1],
                                                 **(uint **)(unaff_EBP - 0x5c7c),
                                                 (*(uint **)(unaff_EBP - 0x5c7c))[1],*puVar14,
                                                 puVar14[1],*(int *)(unaff_EBP - 0x5c70));
                            uVar12 = FUN_004061f0(iVar9);
                            if ((char)uVar12 != '\0') {
                              FUN_004d6670(*(void **)(unaff_EBP - 0x5cd0),
                                           (void **)(unaff_EBP - 0xbc0));
                            }
                            uVar10 = *(uint *)(unaff_EBP - 0x5c64);
                            piVar26 = (int *)(unaff_EBP - 0x60d8);
                            piVar18 = (int *)(unaff_EBP - 0x64b0);
                            piVar24 = FUN_004cde40((void *)(unaff_EBP - 0x60e8),
                                                   **(uint **)(unaff_EBP - 0x5c44));
                            pvVar17 = (void *)FUN_004ce290(piVar24,piVar18);
                            puVar13 = (undefined4 *)FUN_00405690(pvVar17,piVar26,uVar10);
                            uVar10 = *(uint *)(unaff_EBP - 0x5c78);
                            piVar26 = (int *)(unaff_EBP - 0x6790);
                            uVar40 = 7;
                            piVar18 = (int *)(unaff_EBP - 0x60f8);
                            piVar24 = FUN_004cde40((void *)(unaff_EBP - 0x64c0),
                                                   **(uint **)(unaff_EBP - 0x5c84));
                            pvVar17 = (void *)FUN_00405690(piVar24,piVar18,uVar40);
                            puVar19 = (undefined4 *)FUN_00405690(pvVar17,piVar26,uVar10);
                            FUN_004cde40(&stack0xfffffff8,
                                         *(int *)(unaff_EBP - 0x5c5c) + 1 +
                                         **(int **)(unaff_EBP - 0x5c58));
                            puVar13 = FUN_00406380((void *)(unaff_EBP - 0x1180),*puVar19,puVar19[1],
                                                   *puVar13,puVar13[1],piVar26,uVar10);
                            FUN_00402a40((void *)(unaff_EBP - 3000),puVar13);
                            pvVar17 = *(void **)(unaff_EBP - 0x5c54);
                            *(undefined4 *)(unaff_EBP - 0xba0) = 2;
                            puVar14 = (uint *)FUN_004e0700(pvVar17,(int *)(unaff_EBP - 0x6108));
                            iVar9 = FUN_00406050(*(void **)(unaff_EBP - 0x5c68),
                                                 **(uint **)(unaff_EBP - 0x14),
                                                 (*(uint **)(unaff_EBP - 0x14))[1],
                                                 **(uint **)(unaff_EBP - 0x5c7c),
                                                 (*(uint **)(unaff_EBP - 0x5c7c))[1],*puVar14,
                                                 puVar14[1],*(int *)(unaff_EBP - 0x5c70));
                            uVar12 = FUN_004061f0(iVar9);
                            if ((char)uVar12 != '\0') {
                              FUN_004d6670(*(void **)(unaff_EBP - 0x5cd0),
                                           (void **)(unaff_EBP - 0xbc0));
                            }
                            iVar9 = unaff_EBP - 0xbc0;
                          }
                          else {
                            iVar11 = rand();
                            if (iVar11 % 5 != 0) goto LAB_004eceb6;
                            FUN_004c84b0(unaff_EBP - 0x1e98);
                            uVar40 = iVar9 * 0xd;
                            piVar26 = (int *)(unaff_EBP - 0x5ff8);
                            uVar42 = 7;
                            piVar18 = (int *)(unaff_EBP - 0x6440);
                            uVar10 = **(uint **)(unaff_EBP - 0x5c44);
                            *(undefined1 *)(unaff_EBP - 4) = 0x2a;
                            piVar24 = FUN_004cde40((void *)(unaff_EBP - 0x6008),uVar10);
                            pvVar17 = (void *)FUN_00405690(piVar24,piVar18,uVar42);
                            puVar13 = (undefined4 *)FUN_00405690(pvVar17,piVar26,uVar40);
                            uVar10 = *(int *)(unaff_EBP - 0x5c60) * 0xd;
                            piVar26 = (int *)(unaff_EBP - 0x6668);
                            uVar40 = 7;
                            piVar18 = (int *)(unaff_EBP - 0x6018);
                            piVar24 = FUN_004cde40((void *)(unaff_EBP - 0x6450),
                                                   **(uint **)(unaff_EBP - 0x5c84));
                            pvVar17 = (void *)FUN_00405690(piVar24,piVar18,uVar40);
                            puVar19 = (undefined4 *)FUN_00405690(pvVar17,piVar26,uVar10);
                            uVar58 = 2;
                            uVar12 = 0x4ebbe4;
                            piVar26 = (int *)FUN_004013d0(*(void **)(unaff_EBP - 0x5cb8),2);
                            FUN_004cde40(&stack0xfffffff8,
                                         *(int *)(unaff_EBP - 0x5c5c) + 1 + *piVar26);
                            puVar13 = FUN_00406380((void *)(unaff_EBP - 0x1120),*puVar19,puVar19[1],
                                                   *puVar13,puVar13[1],uVar12,uVar58);
                            FUN_00402a40((void *)(unaff_EBP - 0x1e90),puVar13);
                            *(undefined4 *)(unaff_EBP - 0x1e98) = 0xc;
                            puVar13 = FUN_00401080((void *)(unaff_EBP - 0x488),0x40400000,0x40400000
                                                   ,0x3f800000);
                            FUN_00401060((void *)(unaff_EBP - 0x1e74),puVar13);
                            uVar10 = rand();
                            uVar10 = uVar10 & 0x80000003;
                            if ((int)uVar10 < 0) {
                              uVar10 = (uVar10 - 1 | 0xfffffffc) + 1;
                            }
                            *(uint *)(unaff_EBP - 0x1e78) = uVar10;
                            piVar26 = (int *)(unaff_EBP - 0x6028);
                            pvVar17 = (void *)FUN_004e2320((void *)(unaff_EBP - 0x1e90),2);
                            puVar14 = (uint *)FUN_004e0700(pvVar17,piVar26);
                            iVar9 = *(int *)(unaff_EBP - 0x5c70);
                            uVar10 = puVar14[1];
                            uVar40 = *puVar14;
                            puVar14 = (uint *)FUN_004e2320((void *)(unaff_EBP - 0x1e90),1);
                            uVar42 = puVar14[1];
                            uVar53 = *puVar14;
                            puVar14 = (uint *)FUN_004e2320((void *)(unaff_EBP - 0x1e90),0);
                            iVar9 = FUN_00406050(*(void **)(unaff_EBP - 0x5c68),*puVar14,puVar14[1],
                                                 uVar53,uVar42,uVar40,uVar10,iVar9);
                            uVar12 = FUN_004061f0(iVar9);
                            if ((char)uVar12 != '\0') {
                              FUN_004d6670(*(void **)(unaff_EBP - 0x5cd0),
                                           (void **)(unaff_EBP - 0x1e98));
                            }
                            iVar9 = unaff_EBP - 0x1e98;
                          }
                          *(undefined1 *)(unaff_EBP - 4) = 0x1e;
                          FUN_004cd8f0(iVar9);
                          iVar9 = *(int *)(unaff_EBP - 0x5c6c);
                          pvVar5 = *(void **)(unaff_EBP - 0x5cfc);
                        }
                      }
LAB_004eceb6:
                      *(int *)(unaff_EBP - 0x5cb0) = *(int *)(unaff_EBP - 0x5cb0) + 1;
                      *(int *)(unaff_EBP - 0x5c5c) = *(int *)(unaff_EBP - 0x5c5c) + 7;
                      iVar57 = FUN_004d8e00((int)pvVar5);
                      iVar11 = *(int *)(unaff_EBP - 0x5cb0);
                    } while (iVar11 < iVar57);
                  }
                  iVar9 = iVar9 + 1;
                  *(int *)(unaff_EBP - 0x5c6c) = iVar9;
                  iVar11 = FUN_004d8de0((int)pvVar5);
                } while (iVar9 < iVar11);
              }
              iVar11 = *(int *)(unaff_EBP - 0x5c60) + 1;
              *(int *)(unaff_EBP - 0x5c60) = iVar11;
              iVar9 = FUN_004d8dc0((int)pvVar5);
            } while (iVar11 < iVar9);
          }
          piVar26 = *(int **)(unaff_EBP - 0x5cd0);
          iVar11 = FUN_0041cb40(piVar26);
          iVar9 = *(int *)(unaff_EBP - 0x5cc4);
          if (iVar9 < iVar11) {
            do {
              piVar26 = (int *)FUN_0041ba70(piVar26,iVar9);
              if ((*piVar26 == 0x10) || (*piVar26 == 0x12)) {
                puVar13 = FUN_00402990((void *)(unaff_EBP - 0x500),
                                       **(undefined4 **)(unaff_EBP - 0x5cf8),
                                       **(undefined4 **)(unaff_EBP - 0x5cf4),
                                       *(undefined4 *)(unaff_EBP - 0x5cc4));
                FUN_0042feb0((void *)((int)pvVar5 + 0x48),puVar13);
              }
              if (*piVar26 == 0x13) {
                puVar13 = FUN_00402990((void *)(unaff_EBP - 0x554),
                                       **(undefined4 **)(unaff_EBP - 0x5cf8),
                                       **(undefined4 **)(unaff_EBP - 0x5cf4),
                                       *(undefined4 *)(unaff_EBP - 0x5cc4));
                FUN_0042feb0((void *)((int)pvVar5 + 0x54),puVar13);
              }
              piVar26 = *(int **)(unaff_EBP - 0x5cd0);
              *(int *)(unaff_EBP - 0x5cc4) = *(int *)(unaff_EBP - 0x5cc4) + 1;
              iVar11 = FUN_0041cb40(piVar26);
              iVar9 = *(int *)(unaff_EBP - 0x5cc4);
            } while (iVar9 < iVar11);
          }
          if (*(int *)(*(int *)(unaff_EBP - 0x5cbc) + 0x18) == 1) {
            iVar9 = 0;
            *(undefined4 *)(unaff_EBP - 0x5c7c) = 0;
            iVar11 = FUN_004d8dc0((int)pvVar5);
            if (0 < iVar11) {
              do {
                *(undefined4 *)(unaff_EBP - 0x5c54) = 0;
                iVar11 = FUN_004d8de0((int)pvVar5);
                if (0 < iVar11) {
                  iVar11 = *(int *)(unaff_EBP - 0x5c54);
                  *(undefined4 *)(unaff_EBP - 0x14) = 0;
                  do {
                    pcVar29 = FUN_004d1950(pvVar5,iVar9,iVar11,0);
                    if (*pcVar29 == '\x02') {
                      pcVar29 = FUN_004d1950(pvVar5,iVar9 + -1,*(int *)(unaff_EBP - 0x5c54),0);
                      pcVar43 = rand_exref;
                      if (*pcVar29 == '\0') {
                        iVar11 = rand();
                        if (iVar11 % 6 == 0) {
                          uVar10 = *(uint *)(unaff_EBP - 0x14);
                          piVar26 = (int *)(unaff_EBP - 0x6190);
                          uVar40 = 4;
                          piVar18 = (int *)(unaff_EBP - 25000);
                          piVar24 = FUN_004cde40((void *)(unaff_EBP - 0x61c0),
                                                 **(uint **)(unaff_EBP - 0x5c44));
                          pvVar17 = (void *)FUN_00405690(piVar24,piVar18,uVar40);
                          puVar13 = (undefined4 *)FUN_00405690(pvVar17,piVar26,uVar10);
                          uVar10 = iVar9 * 0xd;
                          piVar26 = (int *)(unaff_EBP - 0x61d8);
                          piVar18 = (int *)(unaff_EBP - 0x61f0);
                          piVar24 = FUN_004cde40((void *)(unaff_EBP - 0x6208),
                                                 **(uint **)(unaff_EBP - 0x5c84));
                          pvVar17 = (void *)FUN_004e0700(piVar24,piVar18);
                          puVar19 = (undefined4 *)FUN_00405690(pvVar17,piVar26,uVar10);
                          uVar58 = 2;
                          uVar12 = 0x4ed0d8;
                          piVar26 = (int *)FUN_004013d0(*(void **)(unaff_EBP - 0x5cb8),2);
                          FUN_004cde40(&stack0xfffffff8,*piVar26 + 1);
                          FUN_00406380((void *)(unaff_EBP - 0x728),*puVar19,puVar19[1],*puVar13,
                                       puVar13[1],uVar12,uVar58);
                          FUN_004f2cd0((undefined4 *)(unaff_EBP - 0x53f0),
                                       (undefined4 *)(unaff_EBP - 0x728),3);
                          pvVar17 = *(void **)(unaff_EBP - 0x5c68);
                          iVar9 = *(int *)(unaff_EBP - 0x5c70);
                          *(undefined1 *)(unaff_EBP - 4) = 0x2b;
                          cVar4 = FUN_005287b0(pvVar17,unaff_EBP - 0x53f0,iVar9,'\x01');
                          if (cVar4 != '\0') {
                            FUN_004d6670(*(void **)(unaff_EBP - 0x5cd0),
                                         (void **)(unaff_EBP - 0x53f0));
                          }
                          FUN_004cd8f0(unaff_EBP - 0x53f0);
                          iVar9 = *(int *)(unaff_EBP - 0x5c7c);
                          pcVar43 = rand_exref;
                        }
                        iVar11 = (*pcVar43)();
                        if (iVar11 % 6 == 0) {
                          uVar10 = *(uint *)(unaff_EBP - 0x14);
                          piVar26 = (int *)(unaff_EBP - 0x6220);
                          uVar40 = 10;
                          piVar18 = (int *)(unaff_EBP - 0x6238);
                          piVar24 = FUN_004cde40((void *)(unaff_EBP - 0x6250),
                                                 **(uint **)(unaff_EBP - 0x5c44));
                          pvVar17 = (void *)FUN_00405690(piVar24,piVar18,uVar40);
                          puVar13 = (undefined4 *)FUN_00405690(pvVar17,piVar26,uVar10);
                          uVar10 = iVar9 * 0xd;
                          piVar26 = (int *)(unaff_EBP - 0x6268);
                          piVar18 = (int *)(unaff_EBP - 0x6280);
                          piVar24 = FUN_004cde40((void *)(unaff_EBP - 0x6298),
                                                 **(uint **)(unaff_EBP - 0x5c84));
                          pvVar17 = (void *)FUN_004e0700(piVar24,piVar18);
                          puVar19 = (undefined4 *)FUN_00405690(pvVar17,piVar26,uVar10);
                          uVar58 = 2;
                          uVar12 = 0x4ed1fa;
                          piVar26 = (int *)FUN_004013d0(*(void **)(unaff_EBP - 0x5cb8),2);
                          FUN_004cde40(&stack0xfffffff8,*piVar26 + 1);
                          FUN_00406380((void *)(unaff_EBP - 0x530),*puVar19,puVar19[1],*puVar13,
                                       puVar13[1],uVar12,uVar58);
                          FUN_004f2cd0((undefined4 *)(unaff_EBP - 0x5700),
                                       (undefined4 *)(unaff_EBP - 0x530),3);
                          pvVar17 = *(void **)(unaff_EBP - 0x5c68);
                          iVar9 = *(int *)(unaff_EBP - 0x5c70);
                          *(undefined1 *)(unaff_EBP - 4) = 0x2c;
                          cVar4 = FUN_005287b0(pvVar17,unaff_EBP - 0x5700,iVar9,'\x01');
                          if (cVar4 != '\0') {
                            FUN_004d6670(*(void **)(unaff_EBP - 0x5cd0),
                                         (void **)(unaff_EBP - 0x5700));
                          }
                          FUN_004cd8f0(unaff_EBP - 0x5700);
                          pcVar43 = rand_exref;
                        }
                      }
                      iVar9 = *(int *)(unaff_EBP - 0x5c7c);
                      pcVar29 = FUN_004d1950(*(void **)(unaff_EBP - 0x5cfc),iVar9 + 1,
                                             *(int *)(unaff_EBP - 0x5c54),0);
                      if (*pcVar29 == '\0') {
                        iVar11 = (*pcVar43)();
                        if (iVar11 % 6 == 0) {
                          uVar10 = *(uint *)(unaff_EBP - 0x14);
                          piVar26 = (int *)(unaff_EBP - 0x62b0);
                          uVar40 = 4;
                          piVar18 = (int *)(unaff_EBP - 0x62c8);
                          piVar24 = FUN_004cde40((void *)(unaff_EBP - 0x62e0),
                                                 **(uint **)(unaff_EBP - 0x5c44));
                          pvVar17 = (void *)FUN_00405690(piVar24,piVar18,uVar40);
                          puVar13 = (undefined4 *)FUN_00405690(pvVar17,piVar26,uVar10);
                          uVar10 = iVar9 * 0xd;
                          piVar26 = (int *)(unaff_EBP - 0x62f8);
                          piVar18 = (int *)(unaff_EBP - 0x6310);
                          piVar24 = FUN_004cde40((void *)(unaff_EBP - 0x6328),
                                                 **(uint **)(unaff_EBP - 0x5c84));
                          pvVar17 = (void *)FUN_004ce290(piVar24,piVar18);
                          puVar19 = (undefined4 *)FUN_00405690(pvVar17,piVar26,uVar10);
                          uVar58 = 2;
                          uVar12 = 0x4ed33c;
                          piVar26 = (int *)FUN_004013d0(*(void **)(unaff_EBP - 0x5cb8),2);
                          FUN_004cde40(&stack0xfffffff8,*piVar26 + 1);
                          FUN_00406380((void *)(unaff_EBP - 0x16c),*puVar19,puVar19[1],*puVar13,
                                       puVar13[1],uVar12,uVar58);
                          FUN_004f2cd0((undefined4 *)(unaff_EBP - 0x5a10),
                                       (undefined4 *)(unaff_EBP - 0x16c),1);
                          pvVar17 = *(void **)(unaff_EBP - 0x5c68);
                          iVar9 = *(int *)(unaff_EBP - 0x5c70);
                          *(undefined1 *)(unaff_EBP - 4) = 0x2d;
                          cVar4 = FUN_005287b0(pvVar17,unaff_EBP - 0x5a10,iVar9,'\x01');
                          if (cVar4 != '\0') {
                            FUN_004d6670(*(void **)(unaff_EBP - 0x5cd0),
                                         (void **)(unaff_EBP - 0x5a10));
                          }
                          FUN_004cd8f0(unaff_EBP - 0x5a10);
                          iVar9 = *(int *)(unaff_EBP - 0x5c7c);
                          pcVar43 = rand_exref;
                        }
                        iVar11 = (*pcVar43)();
                        if (iVar11 % 6 == 0) {
                          uVar10 = *(uint *)(unaff_EBP - 0x14);
                          piVar26 = (int *)(unaff_EBP - 0x6340);
                          uVar40 = 10;
                          piVar18 = (int *)(unaff_EBP - 0x6358);
                          piVar24 = FUN_004cde40((void *)(unaff_EBP - 0x6368),
                                                 **(uint **)(unaff_EBP - 0x5c44));
                          pvVar17 = (void *)FUN_00405690(piVar24,piVar18,uVar40);
                          puVar13 = (undefined4 *)FUN_00405690(pvVar17,piVar26,uVar10);
                          uVar10 = iVar9 * 0xd;
                          piVar26 = (int *)(unaff_EBP - 0x6378);
                          piVar18 = (int *)(unaff_EBP - 0x6388);
                          piVar24 = FUN_004cde40((void *)(unaff_EBP - 0x6398),
                                                 **(uint **)(unaff_EBP - 0x5c84));
                          pvVar17 = (void *)FUN_004ce290(piVar24,piVar18);
                          puVar19 = (undefined4 *)FUN_00405690(pvVar17,piVar26,uVar10);
                          uVar58 = 2;
                          uVar12 = 0x4ed45e;
                          piVar26 = (int *)FUN_004013d0(*(void **)(unaff_EBP - 0x5cb8),2);
                          FUN_004cde40(&stack0xfffffff8,*piVar26 + 1);
                          FUN_00406380((void *)(unaff_EBP - 0x184),*puVar19,puVar19[1],*puVar13,
                                       puVar13[1],uVar12,uVar58);
                          FUN_004f2cd0((undefined4 *)(unaff_EBP - 0x39e8),
                                       (undefined4 *)(unaff_EBP - 0x184),1);
                          pvVar17 = *(void **)(unaff_EBP - 0x5c68);
                          iVar9 = *(int *)(unaff_EBP - 0x5c70);
                          *(undefined1 *)(unaff_EBP - 4) = 0x2e;
                          cVar4 = FUN_005287b0(pvVar17,unaff_EBP - 0x39e8,iVar9,'\x01');
                          if (cVar4 != '\0') {
                            FUN_004d6670(*(void **)(unaff_EBP - 0x5cd0),
                                         (void **)(unaff_EBP - 0x39e8));
                          }
                          FUN_004cd8f0(unaff_EBP - 0x39e8);
                        }
                      }
                      iVar9 = *(int *)(unaff_EBP - 0x5c54);
                      iVar11 = *(int *)(unaff_EBP - 0x5c7c);
                      pvVar17 = *(void **)(unaff_EBP - 0x5cfc);
                      *(int *)(unaff_EBP - 0x5c48) = iVar9 + 1;
                      pcVar29 = FUN_004d1950(pvVar17,iVar11,iVar9 + -1,0);
                      if (*pcVar29 == '\0') {
                        iVar9 = rand();
                        if (iVar9 % 6 == 0) {
                          uVar10 = *(uint *)(unaff_EBP - 0x14);
                          piVar26 = (int *)(unaff_EBP - 0x63a8);
                          piVar18 = (int *)(unaff_EBP - 0x63b8);
                          piVar24 = FUN_004cde40((void *)(unaff_EBP - 0x63c8),
                                                 **(uint **)(unaff_EBP - 0x5c44));
                          pvVar17 = (void *)FUN_004e0700(piVar24,piVar18);
                          puVar13 = (undefined4 *)FUN_00405690(pvVar17,piVar26,uVar10);
                          uVar10 = iVar11 * 0xd;
                          piVar26 = (int *)(unaff_EBP - 0x63d8);
                          uVar40 = 4;
                          piVar18 = (int *)(unaff_EBP - 0x63e8);
                          piVar24 = FUN_004cde40((void *)(unaff_EBP - 0x63f8),
                                                 **(uint **)(unaff_EBP - 0x5c84));
                          pvVar17 = (void *)FUN_00405690(piVar24,piVar18,uVar40);
                          puVar19 = (undefined4 *)FUN_00405690(pvVar17,piVar26,uVar10);
                          uVar58 = 2;
                          uVar12 = 0x4ed5a6;
                          piVar26 = (int *)FUN_004013d0(*(void **)(unaff_EBP - 0x5cb8),2);
                          FUN_004cde40(&stack0xfffffff8,*piVar26 + 1);
                          FUN_00406380((void *)(unaff_EBP - 0x19c),*puVar19,puVar19[1],*puVar13,
                                       puVar13[1],uVar12,uVar58);
                          FUN_004f2cd0((undefined4 *)(unaff_EBP - 0x3550),
                                       (undefined4 *)(unaff_EBP - 0x19c),0);
                          pvVar17 = *(void **)(unaff_EBP - 0x5c68);
                          iVar9 = *(int *)(unaff_EBP - 0x5c70);
                          *(undefined1 *)(unaff_EBP - 4) = 0x2f;
                          cVar4 = FUN_005287b0(pvVar17,unaff_EBP - 0x3550,iVar9,'\x01');
                          if (cVar4 != '\0') {
                            FUN_004d6670(*(void **)(unaff_EBP - 0x5cd0),
                                         (void **)(unaff_EBP - 0x3550));
                          }
                          FUN_004cd8f0(unaff_EBP - 0x3550);
                          iVar11 = *(int *)(unaff_EBP - 0x5c7c);
                        }
                        iVar9 = rand();
                        if (iVar9 % 6 == 0) {
                          uVar10 = *(uint *)(unaff_EBP - 0x14);
                          piVar26 = (int *)(unaff_EBP - 0x6408);
                          piVar18 = (int *)(unaff_EBP - 0x6418);
                          piVar24 = FUN_004cde40((void *)(unaff_EBP - 0x6428),
                                                 **(uint **)(unaff_EBP - 0x5c44));
                          pvVar17 = (void *)FUN_004e0700(piVar24,piVar18);
                          puVar13 = (undefined4 *)FUN_00405690(pvVar17,piVar26,uVar10);
                          uVar10 = iVar11 * 0xd;
                          piVar26 = (int *)(unaff_EBP - 0x6438);
                          uVar40 = 10;
                          piVar18 = (int *)(unaff_EBP - 0x6448);
                          piVar24 = FUN_004cde40((void *)(unaff_EBP - 0x6458),
                                                 **(uint **)(unaff_EBP - 0x5c84));
                          pvVar17 = (void *)FUN_00405690(piVar24,piVar18,uVar40);
                          puVar19 = (undefined4 *)FUN_00405690(pvVar17,piVar26,uVar10);
                          uVar58 = 2;
                          uVar12 = 0x4ed6c6;
                          piVar26 = (int *)FUN_004013d0(*(void **)(unaff_EBP - 0x5cb8),2);
                          FUN_004cde40(&stack0xfffffff8,*piVar26 + 1);
                          FUN_00406380((void *)(unaff_EBP - 0x1cc),*puVar19,puVar19[1],*puVar13,
                                       puVar13[1],uVar12,uVar58);
                          FUN_004f2cd0((undefined4 *)(unaff_EBP - 0x3cf8),
                                       (undefined4 *)(unaff_EBP - 0x1cc),0);
                          pvVar17 = *(void **)(unaff_EBP - 0x5c68);
                          iVar9 = *(int *)(unaff_EBP - 0x5c70);
                          *(undefined1 *)(unaff_EBP - 4) = 0x30;
                          cVar4 = FUN_005287b0(pvVar17,unaff_EBP - 0x3cf8,iVar9,'\x01');
                          if (cVar4 != '\0') {
                            FUN_004d6670(*(void **)(unaff_EBP - 0x5cd0),
                                         (void **)(unaff_EBP - 0x3cf8));
                          }
                          FUN_004cd8f0(unaff_EBP - 0x3cf8);
                        }
                      }
                      iVar9 = *(int *)(unaff_EBP - 0x5c7c);
                      pvVar5 = *(void **)(unaff_EBP - 0x5cfc);
                      pcVar29 = FUN_004d1950(pvVar5,iVar9,*(int *)(unaff_EBP - 0x5c48),0);
                      if (*pcVar29 == '\0') {
                        iVar11 = rand();
                        if (iVar11 % 6 == 0) {
                          uVar10 = *(uint *)(unaff_EBP - 0x14);
                          piVar26 = (int *)(unaff_EBP - 0x6468);
                          piVar18 = (int *)(unaff_EBP - 0x6478);
                          piVar24 = FUN_004cde40((void *)(unaff_EBP - 0x6488),
                                                 **(uint **)(unaff_EBP - 0x5c44));
                          pvVar17 = (void *)FUN_004ce290(piVar24,piVar18);
                          puVar13 = (undefined4 *)FUN_00405690(pvVar17,piVar26,uVar10);
                          uVar10 = iVar9 * 0xd;
                          piVar26 = (int *)(unaff_EBP - 0x6498);
                          uVar40 = 4;
                          piVar18 = (int *)(unaff_EBP - 0x64a8);
                          piVar24 = FUN_004cde40((void *)(unaff_EBP - 0x64b8),
                                                 **(uint **)(unaff_EBP - 0x5c84));
                          pvVar17 = (void *)FUN_00405690(piVar24,piVar18,uVar40);
                          puVar19 = (undefined4 *)FUN_00405690(pvVar17,piVar26,uVar10);
                          uVar58 = 2;
                          uVar12 = 0x4ed807;
                          piVar26 = (int *)FUN_004013d0(*(void **)(unaff_EBP - 0x5cb8),2);
                          FUN_004cde40(&stack0xfffffff8,*piVar26 + 1);
                          FUN_00406380((void *)(unaff_EBP - 0x1fc),*puVar19,puVar19[1],*puVar13,
                                       puVar13[1],uVar12,uVar58);
                          FUN_004f2cd0((undefined4 *)(unaff_EBP - 0x5268),
                                       (undefined4 *)(unaff_EBP - 0x1fc),2);
                          pvVar17 = *(void **)(unaff_EBP - 0x5c68);
                          iVar9 = *(int *)(unaff_EBP - 0x5c70);
                          *(undefined1 *)(unaff_EBP - 4) = 0x31;
                          cVar4 = FUN_005287b0(pvVar17,unaff_EBP - 0x5268,iVar9,'\x01');
                          if (cVar4 != '\0') {
                            FUN_004d6670(*(void **)(unaff_EBP - 0x5cd0),
                                         (void **)(unaff_EBP - 0x5268));
                          }
                          FUN_004cd8f0(unaff_EBP - 0x5268);
                          pvVar5 = *(void **)(unaff_EBP - 0x5cfc);
                          iVar9 = *(int *)(unaff_EBP - 0x5c7c);
                        }
                        iVar11 = rand();
                        if (iVar11 % 6 == 0) {
                          uVar10 = *(uint *)(unaff_EBP - 0x14);
                          piVar26 = (int *)(unaff_EBP - 0x64c8);
                          piVar18 = (int *)(unaff_EBP - 0x64d8);
                          piVar24 = FUN_004cde40((void *)(unaff_EBP - 0x64e8),
                                                 **(uint **)(unaff_EBP - 0x5c44));
                          pvVar17 = (void *)FUN_004ce290(piVar24,piVar18);
                          puVar13 = (undefined4 *)FUN_00405690(pvVar17,piVar26,uVar10);
                          uVar10 = iVar9 * 0xd;
                          piVar26 = (int *)(unaff_EBP - 0x6500);
                          uVar40 = 10;
                          piVar18 = (int *)(unaff_EBP - 0x6518);
                          piVar24 = FUN_004cde40((void *)(unaff_EBP - 0x6530),
                                                 **(uint **)(unaff_EBP - 0x5c84));
                          pvVar17 = (void *)FUN_00405690(piVar24,piVar18,uVar40);
                          puVar19 = (undefined4 *)FUN_00405690(pvVar17,piVar26,uVar10);
                          uVar58 = 2;
                          uVar12 = 0x4ed92d;
                          piVar26 = (int *)FUN_004013d0(*(void **)(unaff_EBP - 0x5cb8),2);
                          FUN_004cde40(&stack0xfffffff8,*piVar26 + 1);
                          FUN_00406380((void *)(unaff_EBP - 0x22c),*puVar19,puVar19[1],*puVar13,
                                       puVar13[1],uVar12,uVar58);
                          FUN_004f2cd0((undefined4 *)(unaff_EBP - 0x4c48),
                                       (undefined4 *)(unaff_EBP - 0x22c),2);
                          pvVar17 = *(void **)(unaff_EBP - 0x5c68);
                          iVar9 = *(int *)(unaff_EBP - 0x5c70);
                          *(undefined1 *)(unaff_EBP - 4) = 0x32;
                          cVar4 = FUN_005287b0(pvVar17,unaff_EBP - 0x4c48,iVar9,'\x01');
                          if (cVar4 != '\0') {
                            FUN_004d6670(*(void **)(unaff_EBP - 0x5cd0),
                                         (void **)(unaff_EBP - 0x4c48));
                          }
                          FUN_004cd8f0(unaff_EBP - 0x4c48);
                          pvVar5 = *(void **)(unaff_EBP - 0x5cfc);
                          iVar9 = *(int *)(unaff_EBP - 0x5c7c);
                        }
                      }
                    }
                    *(int *)(unaff_EBP - 0x5c54) = *(int *)(unaff_EBP - 0x5c54) + 1;
                    *(int *)(unaff_EBP - 0x14) = *(int *)(unaff_EBP - 0x14) + 0xd;
                    iVar57 = FUN_004d8de0((int)pvVar5);
                    iVar11 = *(int *)(unaff_EBP - 0x5c54);
                  } while (iVar11 < iVar57);
                }
                iVar9 = iVar9 + 1;
                *(int *)(unaff_EBP - 0x5c7c) = iVar9;
                iVar11 = FUN_004d8dc0((int)pvVar5);
              } while (iVar9 < iVar11);
            }
          }
          *(undefined1 *)(unaff_EBP - 4) = 5;
          FUN_0042f440((undefined4 *)(unaff_EBP - 0x5d58));
          iVar9 = *(int *)(unaff_EBP - 0x5c98);
          iVar11 = *(int *)(unaff_EBP - 0x5c94);
          unaff_ESI = *(void **)(unaff_EBP - 0x5c68);
          if (*(int *)(iVar11 + 0xc + iVar9 * 4) != 2) goto LAB_004eda16;
        }
        else {
LAB_004eda16:
          if (0.2 < *(float *)(iVar11 + 0x18 + iVar9 * 4)) {
            *(undefined4 *)(unaff_EBP - 0x5c7c) = 0;
            *(undefined4 *)(unaff_EBP - 0x5c74) = 2;
            do {
              iVar9 = 0;
              *(undefined4 *)(unaff_EBP - 0x5c54) = 0;
              *(undefined4 *)(unaff_EBP - 0x5c50) = 2;
              do {
                uVar10 = rand();
                uVar10 = uVar10 & 0x80000007;
                bVar45 = uVar10 == 0;
                if ((int)uVar10 < 0) {
                  bVar45 = (uVar10 - 1 | 0xfffffff8) == 0xffffffff;
                }
                if (bVar45) {
                  iVar57 = (int)((*(int *)(unaff_EBP - 0x5ce4) >> 0x1f & 3U) +
                                *(int *)(unaff_EBP - 0x5ce4)) >> 2;
                  iVar11 = **(int **)(unaff_EBP - 0x5cf4);
                  *(int *)(unaff_EBP - 0x5c78) =
                       *(int *)(unaff_EBP - 0x5c7c) / 2 +
                       **(int **)(unaff_EBP - 0x5cf8) * 0x100 + *(int *)(unaff_EBP - 0x5cf0) +
                       iVar57;
                  *(int *)(unaff_EBP - 0x5c58) =
                       iVar11 * 0x100 + iVar9 / 2 + *(int *)(unaff_EBP - 0x5cac) + iVar57;
                  bVar45 = FUN_004e28d0((int *)(unaff_EBP - 0x5d70));
                  unaff_ESI = *(void **)(unaff_EBP - 0x5c68);
                  if (!bVar45) {
                    iVar9 = *(int *)(unaff_EBP - 0x5c70);
                    iVar11 = FUN_00406100(unaff_ESI,*(uint *)(unaff_EBP - 0x5c78),
                                          *(uint *)(unaff_EBP - 0x5c58),iVar9);
                    if (iVar11 != 0) {
                      iVar11 = FUN_0052d860(iVar11);
                      uVar10 = *(uint *)(unaff_EBP - 0x5c58);
                      uVar40 = *(uint *)(unaff_EBP - 0x5c78);
                      *(int *)(unaff_EBP - 0x5c64) = iVar11;
                      puVar16 = FUN_00405fd0(unaff_ESI,uVar40,uVar10,iVar11,iVar9);
                      uVar12 = FUN_004061f0((int)puVar16);
                      cVar4 = (char)uVar12;
                      while (cVar4 != '\0') {
                        iVar11 = *(int *)(unaff_EBP - 0x5c64) + 1;
                        uVar10 = *(uint *)(unaff_EBP - 0x5c58);
                        uVar40 = *(uint *)(unaff_EBP - 0x5c78);
                        *(int *)(unaff_EBP - 0x5c64) = iVar11;
                        puVar16 = FUN_00405fd0(unaff_ESI,uVar40,uVar10,iVar11,iVar9);
                        uVar12 = FUN_004061f0((int)puVar16);
                        cVar4 = (char)uVar12;
                      }
                      uVar58 = 0x10f0;
                      uVar12 = 0x4edb67;
                      pSVar30 = operator_new(0x10f0);
                      if (pSVar30 == (Spawn *)0x0) {
                        pSVar30 = (Spawn *)0x0;
                        *(undefined4 *)(unaff_EBP - 0x5cc4) = 0;
                      }
                      else {
                        uVar58 = 0x4edb75;
                        pSVar30 = cube::Spawn::Spawn(pSVar30);
                        *(Spawn **)(unaff_EBP - 0x5cc4) = pSVar30;
                      }
                      uVar40 = *(int *)(unaff_EBP - 0x5c64) + 1;
                      *(Spawn **)(unaff_EBP - 0x5c48) = pSVar30;
                      uVar55 = 0x4edb9f;
                      FUN_004cde40(&stack0xfffffff8,uVar40);
                      uVar10 = *(uint *)(unaff_EBP - 0x5c58);
                      uVar51 = 0x4edbaf;
                      FUN_004cde40(&stack0xfffffff0,uVar10);
                      FUN_004cde40(&stack0xffffffe8,*(uint *)(unaff_EBP - 0x5c78));
                      puVar13 = FUN_00406380((void *)(unaff_EBP - 0xeb0),uVar51,uVar10,uVar55,uVar40
                                             ,uVar12,uVar58);
                      FUN_00402a40(&(pSVar30->Spawn_data).field_0xc,puVar13);
                      iVar11 = rand();
                      (pSVar30->Spawn_data).offset_0x50 = ((float)iVar11 * 360.0) / 32767.0;
                      uVar10 = FUN_0041fff0((int *)(unaff_EBP - 0x5d70));
                      uVar40 = rand();
                      puVar13 = (undefined4 *)
                                FUN_00402bb0((void *)(unaff_EBP - 0x5d70),uVar40 % uVar10);
                      uVar12 = *puVar13;
                      *(undefined4 *)(*(int *)(unaff_EBP - 0x5cc4) + 0x2c) = uVar12;
                      FUN_0040f0a0(uVar12,(undefined4 *)(unaff_EBP - 0x5d98),
                                   (undefined4 *)(unaff_EBP - 0x5d9c));
                      iVar41 = rand();
                      iVar11 = *(int *)(unaff_EBP - 0x5cc4);
                      iVar57 = *(int *)(unaff_EBP - 0x5cbc);
                      *(int *)(iVar11 + 0x34) =
                           iVar41 % ((*(int *)(unaff_EBP - 0x5d9c) - *(int *)(unaff_EBP - 0x5d98)) +
                                    1) + *(int *)(unaff_EBP - 0x5d98);
                      *(undefined4 *)(iVar11 + 0x28) = 5;
                      *(undefined1 *)(iVar11 + 0x58) = *(undefined1 *)(iVar57 + 0x28);
                      FUN_004f2be0((void *)(iVar9 + 0x18),(undefined4 *)(unaff_EBP - 0x5c48));
                      unaff_ESI = *(void **)(unaff_EBP - 0x5c68);
                    }
                    iVar9 = *(int *)(unaff_EBP - 0x5c54);
                  }
                }
                iVar57 = *(int *)(unaff_EBP - 0x5ce4);
                iVar9 = iVar9 + iVar57;
                piVar26 = (int *)(unaff_EBP - 0x5c50);
                *piVar26 = *piVar26 + -1;
                iVar11 = *piVar26;
                *(int *)(unaff_EBP - 0x5c54) = iVar9;
              } while (iVar11 != 0);
              *(int *)(unaff_EBP - 0x5c7c) = *(int *)(unaff_EBP - 0x5c7c) + iVar57;
              piVar26 = (int *)(unaff_EBP - 0x5c74);
              *piVar26 = *piVar26 + -1;
            } while (*piVar26 != 0);
            iVar9 = *(int *)(unaff_EBP - 0x5c98);
            iVar11 = *(int *)(unaff_EBP - 0x5c94);
          }
        }
        if (*(int *)(iVar11 + 0xc + iVar9 * 4) == 3) {
          puVar13 = FUN_004010b0((void *)(unaff_EBP - 0x69b0),0,0,0,0);
          FUN_004e1200((void *)(unaff_EBP - 0x67d8),(int)puVar13);
          unaff_EDI = *(int *)(unaff_EBP - 0x5c70);
          iVar57 = 0;
          piVar26 = (int *)(unaff_EBP - 0x67d8);
          cVar4 = '\x01';
          iVar11 = 7;
          uVar12 = 6;
          uVar10 = *(uint *)(*(int *)(unaff_EBP - 0x5c94) + 0x14 + *(int *)(unaff_EBP - 0x5c98) * 4)
          ;
          iVar9 = unaff_EDI;
          puVar14 = FUN_00402990((void *)(unaff_EBP - 0x56c),
                                 **(int **)(unaff_EBP - 0x5cf8) * 0x100 +
                                 *(int *)(unaff_EBP - 0x5cec) + *(int *)(unaff_EBP - 0x5cf0) + -0x10
                                 ,**(int **)(unaff_EBP - 0x5cf4) * 0x100 +
                                  *(int *)(unaff_EBP - 0x5cec) +
                                  *(int *)(unaff_EBP - 0x5cac) + -0x10,
                                 *(int *)(*(int *)(unaff_EBP - 0x5c94) + 4 +
                                         *(int *)(unaff_EBP - 0x5c98) * 4) + -7);
          pvVar17 = (void *)FUN_004013f0((void *)((int)unaff_ESI + 0x1c),0x881);
          FUN_00524540(unaff_ESI,pvVar17,puVar14,uVar10,uVar12,iVar11,iVar9,cVar4,piVar26,iVar57);
          iVar9 = *(int *)(unaff_EBP - 0x5c98);
          iVar11 = *(int *)(unaff_EBP - 0x5c94);
        }
        else {
          unaff_EDI = *(int *)(unaff_EBP - 0x5c70);
        }
        if (*(int *)(iVar11 + 0xc + iVar9 * 4) == 4) {
          puVar13 = FUN_004010b0((void *)(unaff_EBP - 0x6b10),0,0,0,0);
          FUN_004e1200((void *)(unaff_EBP - 0x6308),(int)puVar13);
          iVar11 = 0;
          piVar26 = (int *)(unaff_EBP - 0x6308);
          cVar4 = '\x01';
          iVar9 = 7;
          uVar12 = 6;
          uVar10 = *(uint *)(*(int *)(unaff_EBP - 0x5c94) + 0x14 + *(int *)(unaff_EBP - 0x5c98) * 4)
          ;
          puVar14 = FUN_00402990((void *)(unaff_EBP - 0x584),
                                 **(int **)(unaff_EBP - 0x5cf8) * 0x100 +
                                 *(int *)(unaff_EBP - 0x5cec) + *(int *)(unaff_EBP - 0x5cf0) + -0x10
                                 ,**(int **)(unaff_EBP - 0x5cf4) * 0x100 +
                                  *(int *)(unaff_EBP - 0x5cec) +
                                  *(int *)(unaff_EBP - 0x5cac) + -0x10,
                                 *(int *)(*(int *)(unaff_EBP - 0x5c94) + 4 +
                                         *(int *)(unaff_EBP - 0x5c98) * 4) + -5);
          pvVar17 = (void *)FUN_004013f0((void *)((int)unaff_ESI + 0x1c),0x887);
          FUN_00524540(unaff_ESI,pvVar17,puVar14,uVar10,uVar12,iVar9,unaff_EDI,cVar4,piVar26,iVar11)
          ;
          FUN_004e1eb0((undefined4 *)(unaff_EBP - 100));
          iVar9 = -1;
          *(undefined1 *)(unaff_EBP - 4) = 0x33;
          *(undefined4 *)(unaff_EBP - 0x5c58) = 0xffffffff;
          do {
            iVar11 = -1;
            do {
              if ((iVar9 != 0) || (iVar11 != 0)) {
                iVar9 = FUN_0042e220(unaff_ESI,
                                     ((int)(**(int **)(unaff_EBP - 0x5cf8) +
                                           (**(int **)(unaff_EBP - 0x5cf8) >> 0x1f & 0x3fU)) >> 6) +
                                     iVar9,((int)(**(int **)(unaff_EBP - 0x5cf4) +
                                                 (**(int **)(unaff_EBP - 0x5cf4) >> 0x1f & 0x3fU))
                                           >> 6) + iVar11);
                *(int *)(unaff_EBP - 0x5c48) = iVar9;
                if ((iVar9 != 0) && (0 < *(int *)(iVar9 + 0x18))) {
                  FUN_004f2be0((void *)(unaff_EBP - 100),(undefined4 *)(unaff_EBP - 0x5c48));
                }
                iVar9 = *(int *)(unaff_EBP - 0x5c58);
              }
              iVar11 = iVar11 + 1;
            } while (iVar11 < 2);
            iVar9 = iVar9 + 1;
            *(int *)(unaff_EBP - 0x5c58) = iVar9;
          } while (iVar9 < 2);
          bVar45 = FUN_004e28d0((int *)(unaff_EBP - 100));
          unaff_EDI = *(int *)(unaff_EBP - 0x5c70);
          if (!bVar45) {
            puVar13 = operator_new(0xa0);
            *(undefined4 **)(unaff_EBP - 0x5c48) = puVar13;
            *(undefined1 *)(unaff_EBP - 4) = 0x34;
            if (puVar13 == (undefined4 *)0x0) {
              puVar13 = (undefined4 *)0x0;
              *(undefined4 *)(unaff_EBP - 0x5cc4) = 0;
            }
            else {
              puVar13 = FUN_004e2110(puVar13);
              *(undefined4 **)(unaff_EBP - 0x5cc4) = puVar13;
            }
            iVar9 = *(int *)(unaff_EBP - 0x5c98);
            iVar11 = *(int *)(unaff_EBP - 0x5c94);
            *(undefined1 *)(unaff_EBP - 4) = 0x33;
            iVar57 = *(int *)(iVar11 + 0x14 + iVar9 * 4);
            *(undefined4 **)(unaff_EBP - 0x5cd8) = puVar13;
            puVar13[0x14] = (float)(iVar57 * 0x5a);
            iVar57 = *(int *)(*(int *)(unaff_EBP - 0x5c94) + 4 + iVar9 * 4) + 0x42;
            fVar47 = (float)(*(int *)(iVar11 + 0x14 + iVar9 * 4) + 2) * 3.1415927 * 0.5;
            puVar13 = puVar13 + 0xe;
            *(float *)(unaff_EBP - 0x5cdc) = fVar47;
            fVar46 = FUN_004024c0(fVar47);
            *(float *)(unaff_EBP - 0x5c48) = (float)fVar46;
            iVar9 = (int)(*(float *)(unaff_EBP - 0x5c48) * 19.0 +
                         (float)(**(int **)(unaff_EBP - 0x5cf4) * 0x100 +
                                 *(int *)(unaff_EBP - 0x5cec) + *(int *)(unaff_EBP - 0x5cac)));
            fVar46 = FUN_004024a0(*(float *)(unaff_EBP - 0x5cdc));
            *(float *)(unaff_EBP - 0x5c48) = (float)fVar46;
            puVar14 = FUN_00402990((void *)(unaff_EBP - 0x59c),
                                   (int)(*(float *)(unaff_EBP - 0x5c48) * 19.0 +
                                        (float)(**(int **)(unaff_EBP - 0x5cf8) * 0x100 +
                                                *(int *)(unaff_EBP - 0x5cec) +
                                               *(int *)(unaff_EBP - 0x5cf0))),iVar9,iVar57);
            FUN_004d99d0(puVar13,puVar14);
            uVar12 = 0x42c80000;
            fVar47 = (-*(float *)(*(int *)(unaff_EBP - 0x5cc4) + 0x50) * 3.1415927) / 180.0;
            *(float *)(unaff_EBP - 0x5cdc) = fVar47;
            fVar46 = FUN_004024a0(fVar47);
            *(float *)(unaff_EBP - 0x5c48) = (float)fVar46;
            fVar47 = *(float *)(unaff_EBP - 0x5c48) * -100.0;
            fVar46 = FUN_004024c0(*(float *)(unaff_EBP - 0x5cdc));
            *(float *)(unaff_EBP - 0x5c48) = (float)fVar46;
            FUN_00401080((void *)(unaff_EBP - 0x5b4),*(float *)(unaff_EBP - 0x5c48) * -100.0,fVar47,
                         uVar12);
            FUN_00402510(unaff_EBP - 0x214);
            *(int *)(unaff_EBP - 0x5c50) = *(int *)(unaff_EBP - 0x5cc4) + 0x10;
            puVar14 = FUN_00402cb0(puVar13,(uint *)(unaff_EBP - 0xee0),(uint *)(unaff_EBP - 0x214));
            FUN_00402a40(*(void **)(unaff_EBP - 0x5c50),puVar14);
            *(undefined4 *)(*(int *)(unaff_EBP - 0x5cc4) + 0x34) =
                 *(undefined4 *)(*(int *)(unaff_EBP - 0x5cc4) + 0x50);
            FUN_00401080((void *)(unaff_EBP - 0x5cc),0x42480000,0x42480000,0x41a00000);
            FUN_00402510(unaff_EBP - 0x154);
            puVar14 = FUN_00402cb0(puVar13,(uint *)(unaff_EBP - 0xf10),(uint *)(unaff_EBP - 0x154));
            FUN_00402a40((void *)(*(int *)(unaff_EBP - 0x5cc4) + 0x58),puVar14);
            pSVar30 = operator_new(0x10f0);
            if (pSVar30 == (Spawn *)0x0) {
              pSVar30 = (Spawn *)0x0;
              *(undefined4 *)(unaff_EBP - 0x5c74) = 0;
            }
            else {
              pSVar30 = cube::Spawn::Spawn(pSVar30);
              *(Spawn **)(unaff_EBP - 0x5c74) = pSVar30;
            }
            puVar13 = *(undefined4 **)(unaff_EBP - 0x5c50);
            (pSVar30->Spawn_data).offset_0x24 = 3;
            *(Spawn **)(unaff_EBP - 0x5cdc) = pSVar30;
            *(undefined1 *)&(pSVar30->Spawn_data).offset_0x2c = 0x88;
            FUN_00402a40(&(pSVar30->Spawn_data).field_0xc,puVar13);
            iVar9 = *(int *)(unaff_EBP - 0x5cbc);
            (pSVar30->Spawn_data).offset_0x28 = 4;
            (pSVar30->Spawn_data).offset_0x30 = *(undefined4 *)(iVar9 + 0x24);
            iVar9 = *(int *)(unaff_EBP - 0x5cc4);
            (pSVar30->Spawn_data).offset_0x4 = 0x44000000;
            (pSVar30->Spawn_data).offset_0x50 = *(undefined4 *)(iVar9 + 0x34);
            pSVar31 = operator_new(0xc);
            *(SequentialBehavior **)(unaff_EBP - 0x5c48) = pSVar31;
            *(undefined1 *)(unaff_EBP - 4) = 0x35;
            if (pSVar31 == (SequentialBehavior *)0x0) {
              *(undefined4 *)(unaff_EBP - 0x5c64) = 0;
            }
            else {
              pSVar31 = cube::SequentialBehavior::SequentialBehavior(pSVar31);
              *(SequentialBehavior **)(unaff_EBP - 0x5c64) = pSVar31;
            }
            *(undefined1 *)(unaff_EBP - 4) = 0x33;
            pLVar33 = operator_new(4);
            *(LookAtPlayerBehavior **)(unaff_EBP - 0x5c48) = pLVar33;
            *(undefined1 *)(unaff_EBP - 4) = 0x36;
            if (pLVar33 == (LookAtPlayerBehavior *)0x0) {
              pLVar33 = (LookAtPlayerBehavior *)0x0;
            }
            else {
              pLVar33 = cube::LookAtPlayerBehavior::LookAtPlayerBehavior(pLVar33);
            }
            iVar9 = *(int *)(unaff_EBP - 0x5c64);
            *(LookAtPlayerBehavior **)(unaff_EBP - 0x5c48) = pLVar33;
            *(undefined1 *)(unaff_EBP - 4) = 0x33;
            FUN_004d6620((void *)(iVar9 + 4),(undefined4 *)(unaff_EBP - 0x5c48));
            *(undefined4 *)&pSVar30[1].Spawn_data.field_0x120 = *(undefined4 *)(unaff_EBP - 0x5c64);
            uVar10 = FUN_0041fff0((int *)(unaff_EDI + 0x24));
            uVar50 = FUN_004f3850(**(uint **)(unaff_EBP - 0x5cf8),**(uint **)(unaff_EBP - 0x5cf4),
                                  uVar10);
            *(undefined8 *)(*(int *)(unaff_EBP - 0x5c74) + 0x10e0) = uVar50;
            FUN_004f2be0((void *)(unaff_EDI + 0x18),(undefined4 *)(unaff_EBP - 0x5cdc));
            FUN_004f2be0((void *)(unaff_EDI + 0x24),(undefined4 *)(unaff_EBP - 0x5cd8));
            unaff_ESI = *(void **)(unaff_EBP - 0x5c68);
          }
          *(undefined1 *)(unaff_EBP - 4) = 5;
          FUN_0042f440((undefined4 *)(unaff_EBP - 100));
          iVar9 = *(int *)(unaff_EBP - 0x5c98);
          iVar11 = *(int *)(unaff_EBP - 0x5c94);
        }
        iVar57 = *(int *)(iVar11 + 0xc + iVar9 * 4);
      } while ((((iVar57 != 10) && (iVar57 != 0xb)) && (iVar57 != 0xc)) &&
              (((iVar57 != 0xd && (iVar57 != 0xe)) && ((iVar57 != 0x10 && (iVar57 != 0xf))))));
      iVar57 = FUN_004013f0((void *)((int)unaff_ESI + 0x1c),0x8ff);
      iVar9 = *(int *)(unaff_EBP - 0x5c94);
      iVar11 = *(int *)(unaff_EBP - 0x5c98);
      *(int *)(unaff_EBP - 0x14) = iVar57;
      unaff_EDI = *(int *)(unaff_EBP - 0x5c70);
      iVar9 = *(int *)(iVar9 + 0xc + iVar11 * 4) + -0xb;
      *(int *)(unaff_EBP - 0x5cdc) = iVar9;
      switch(iVar9) {
      case 0:
        iVar9 = 0x900;
        break;
      case 1:
        iVar9 = 0x901;
        break;
      case 2:
        iVar9 = 0x902;
        break;
      case 3:
        iVar9 = 0x903;
        break;
      case 4:
        iVar9 = 0x905;
        break;
      case 5:
        iVar9 = 0x904;
        break;
      default:
        goto LAB_004ee385;
      }
      iVar57 = FUN_004013f0((void *)((int)unaff_ESI + 0x1c),iVar9);
      *(int *)(unaff_EBP - 0x14) = iVar57;
LAB_004ee385:
      *(undefined4 *)(unaff_EBP - 0x5c78) = 0;
      *(undefined4 *)(unaff_EBP - 0x5c58) = 0;
      iVar9 = FUN_00402150(iVar57);
    } while (iVar9 < 1);
  } while( true );
LAB_004ef260:
  *(undefined4 *)(unaff_EBP - 0x5c54) = 0;
  *(int *)(unaff_EBP - 0x5c8c) = iVar9;
  *(int *)(unaff_EBP - 0x5c9c) = iVar11;
LAB_004ef280:
  iVar9 = FUN_004e2330((void *)(unaff_EBP - 0x5d28),iVar9);
  if ((*(int *)(iVar9 + 0xc) == 0) || (*(int *)(iVar9 + 0xc) == 7)) {
    iVar11 = *(int *)(unaff_EBP - 0x5c70);
    *(undefined1 *)(unaff_EBP - 0x5ca1) = 0;
    iVar9 = FUN_004013d0((void *)(iVar11 + 0x60),0);
    *(int *)(unaff_EBP - 0x5ca0) = iVar9;
    *(int *)(unaff_EBP - 0x5cb0) = *(int *)(unaff_EBP - 0x5cc0) / *(int *)(unaff_EBP - 0x5ccc);
    iVar57 = FUN_004013d0((void *)(iVar11 + 0x60),1);
    iVar9 = *(int *)(unaff_EBP - 0x5ccc);
    *(int *)(unaff_EBP - 0x5d00) = iVar57;
    *(int *)(unaff_EBP - 0x5c90) = *(int *)(unaff_EBP - 0x5c54) / iVar9;
    *(int *)(unaff_EBP - 0x5c50) =
         (int)(*(int *)(unaff_EBP - 0x5ce4) + (*(int *)(unaff_EBP - 0x5ce4) >> 0x1f & 3U)) >> 2;
    iVar57 = 0;
    *(undefined4 *)(unaff_EBP - 0x5c7c) = 0;
    do {
      iVar9 = (iVar57 / iVar9) / 2;
      iVar57 = 0;
      *(int *)(unaff_EBP - 0x5cd8) = iVar9;
      *(undefined4 *)(unaff_EBP - 0x5c58) = 0;
      do {
        *(int *)(unaff_EBP - 0x5cac) =
             **(int **)(unaff_EBP - 0x5ca0) * 0x100 + *(int *)(unaff_EBP - 0x5cb0) + iVar9 +
             *(int *)(unaff_EBP - 0x5c50);
        uVar10 = **(int **)(unaff_EBP - 0x5d00) * 0x100 +
                 (iVar57 / *(int *)(unaff_EBP - 0x5ccc)) / 2 + *(int *)(unaff_EBP - 0x5c90) +
                 *(int *)(unaff_EBP - 0x5c50);
        *(uint *)(unaff_EBP - 0x5ca8) = uVar10;
        FUN_004cde40((void *)(unaff_EBP - 0x5e40),uVar10);
        FUN_004cde40((void *)(unaff_EBP - 0x5ddc),*(uint *)(unaff_EBP - 0x5cac));
        fVar46 = FUN_0052dee0(*(uint **)(unaff_EBP - 0x5cbc),(uint *)(unaff_EBP - 0x5ddc),
                              (uint *)(unaff_EBP - 0x5e40));
        *(float *)(unaff_EBP - 0x5c48) = (float)fVar46;
        if (*(float *)(unaff_EBP - 0x5c48) < 0.72) {
          pvVar17 = *(void **)(unaff_EBP - 0x5c68);
        }
        else {
          pvVar17 = *(void **)(unaff_EBP - 0x5c68);
          iVar9 = FUN_00406100(pvVar17,*(uint *)(unaff_EBP - 0x5cac),uVar10,iVar11);
          iVar9 = FUN_004061d0(iVar9);
          uVar10 = *(uint *)(unaff_EBP - 0x5ca8);
          uVar40 = *(uint *)(unaff_EBP - 0x5cac);
          *(int *)(unaff_EBP - 0x5c6c) = iVar9;
          puVar16 = FUN_00405fd0(pvVar17,uVar40,uVar10,iVar9,iVar11);
          uVar12 = FUN_004061f0((int)puVar16);
          cVar4 = (char)uVar12;
          while (cVar4 != '\0') {
            iVar9 = *(int *)(unaff_EBP - 0x5c6c) + 1;
            uVar10 = *(uint *)(unaff_EBP - 0x5ca8);
            uVar40 = *(uint *)(unaff_EBP - 0x5cac);
            *(int *)(unaff_EBP - 0x5c6c) = iVar9;
            puVar16 = FUN_00405fd0(pvVar17,uVar40,uVar10,iVar9,iVar11);
            uVar12 = FUN_004061f0((int)puVar16);
            cVar4 = (char)uVar12;
          }
          if (*(int *)(*(int *)(unaff_EBP - 0x5cbc) + 0x18) == 1) {
            puVar16 = FUN_00405fd0(pvVar17,*(uint *)(unaff_EBP - 0x5cac),
                                   *(uint *)(unaff_EBP - 0x5ca8),*(int *)(unaff_EBP - 0x5c6c) + -1,
                                   iVar11);
            bVar3 = FUN_00406280((int)puVar16);
            if (CONCAT31(extraout_var_04,bVar3) != 0xb) goto LAB_004efee5;
            if (*(int *)(*(int *)(unaff_EBP - 0x5cbc) + 0x18) == 1) {
              iVar9 = *(int *)(unaff_EBP - 0x5cac) + -8;
              iVar57 = *(int *)(unaff_EBP - 0x5cac) + 8;
              *(int *)(unaff_EBP - 0x5c88) = iVar9;
              *(int *)(unaff_EBP - 0x5cc4) = iVar9;
              *(int *)(unaff_EBP - 0x5c64) = iVar57;
              if (iVar9 <= iVar57) {
                iVar41 = *(int *)(unaff_EBP - 0x5ca8);
                *(int *)(unaff_EBP - 0x5c74) = iVar41 + 8;
                do {
                  iVar57 = iVar41 + -8;
                  *(int *)(unaff_EBP - 0x5c78) = iVar57;
                  if (iVar57 <= *(int *)(unaff_EBP - 0x5c74)) {
                    dVar48 = (double)iVar41 + 0.5;
                    dVar49 = ((double)*(int *)(unaff_EBP - 0x5cac) + 0.5) - (double)iVar9;
                    *(double *)(unaff_EBP - 0x18) = dVar48;
                    *(double *)(unaff_EBP - 0x5ce0) = dVar49;
                    do {
                      pdVar21 = (double *)
                                FUN_00401000((void *)(unaff_EBP - 0x6900),dVar49,
                                             dVar48 - (double)iVar57);
                      fVar46 = FUN_004d8e30(pdVar21);
                      *(double *)(unaff_EBP - 0x5c4c) = (double)fVar46;
                      if (*(double *)(unaff_EBP - 0x5c4c) <= 64.0) {
                        iVar9 = FUN_00406100(pvVar17,*(uint *)(unaff_EBP - 0x5cc4),
                                             *(uint *)(unaff_EBP - 0x5c78),iVar11);
                        iVar9 = FUN_004061d0(iVar9);
                        uVar10 = *(uint *)(unaff_EBP - 0x5c78);
                        uVar40 = *(uint *)(unaff_EBP - 0x5cc4);
                        *(int *)(unaff_EBP - 0x5c80) = iVar9;
                        puVar16 = FUN_00405fd0(pvVar17,uVar40,uVar10,iVar9,iVar11);
                        uVar12 = FUN_004061f0((int)puVar16);
                        cVar4 = (char)uVar12;
                        while (cVar4 != '\0') {
                          iVar9 = *(int *)(unaff_EBP - 0x5c80) + 1;
                          uVar10 = *(uint *)(unaff_EBP - 0x5c78);
                          uVar40 = *(uint *)(unaff_EBP - 0x5cc4);
                          *(int *)(unaff_EBP - 0x5c80) = iVar9;
                          puVar16 = FUN_00405fd0(pvVar17,uVar40,uVar10,iVar9,iVar11);
                          uVar12 = FUN_004061f0((int)puVar16);
                          cVar4 = (char)uVar12;
                        }
                        iVar9 = *(int *)(unaff_EBP - 0x5c6c);
                        if (*(int *)(unaff_EBP - 0x5c6c) < *(int *)(unaff_EBP - 0x5c80)) {
                          iVar9 = *(int *)(unaff_EBP - 0x5c80);
                        }
                        *(int *)(unaff_EBP - 0x5c6c) = iVar9;
                      }
                      dVar49 = *(double *)(unaff_EBP - 0x5ce0);
                      dVar48 = *(double *)(unaff_EBP - 0x18);
                      iVar57 = *(int *)(unaff_EBP - 0x5c78) + 1;
                      *(int *)(unaff_EBP - 0x5c78) = iVar57;
                    } while (iVar57 <= *(int *)(unaff_EBP - 0x5c74));
                    iVar9 = *(int *)(unaff_EBP - 0x5cc4);
                    iVar41 = *(int *)(unaff_EBP - 0x5ca8);
                  }
                  iVar57 = *(int *)(unaff_EBP - 0x5c64);
                  iVar9 = iVar9 + 1;
                  *(int *)(unaff_EBP - 0x5cc4) = iVar9;
                } while (iVar9 <= iVar57);
                iVar9 = *(int *)(unaff_EBP - 0x5c88);
              }
              if (iVar9 <= iVar57) {
                iVar57 = *(int *)(unaff_EBP - 0x5ca8);
                *(int *)(unaff_EBP - 0x5c74) = iVar57 + 8;
                do {
                  iVar41 = iVar57 + -8;
                  *(int *)(unaff_EBP - 0x14) = iVar41;
                  if (iVar41 <= *(int *)(unaff_EBP - 0x5c74)) {
                    dVar48 = (double)iVar57 + 0.5;
                    dVar49 = ((double)*(int *)(unaff_EBP - 0x5cac) + 0.5) - (double)iVar9;
                    *(double *)(unaff_EBP - 0x5d30) = dVar48;
                    *(double *)(unaff_EBP - 0x5d0c) = dVar49;
                    do {
                      pdVar21 = (double *)
                                FUN_00401000((void *)(unaff_EBP - 0x6920),dVar49,
                                             dVar48 - (double)iVar41);
                      fVar46 = FUN_004d8e30(pdVar21);
                      *(double *)(unaff_EBP - 0x5cc8) = (double)fVar46;
                      if (*(double *)(unaff_EBP - 0x5cc8) <= 64.0) {
                        iVar9 = FUN_00406100(pvVar17,*(uint *)(unaff_EBP - 0x5c88),
                                             *(uint *)(unaff_EBP - 0x14),iVar11);
                        iVar9 = FUN_004061d0(iVar9);
                        uVar10 = *(uint *)(unaff_EBP - 0x14);
                        uVar40 = *(uint *)(unaff_EBP - 0x5c88);
                        *(int *)(unaff_EBP - 0x5c80) = iVar9;
                        puVar16 = FUN_00405fd0(pvVar17,uVar40,uVar10,iVar9,iVar11);
                        uVar12 = FUN_004061f0((int)puVar16);
                        cVar4 = (char)uVar12;
                        while (cVar4 != '\0') {
                          iVar9 = *(int *)(unaff_EBP - 0x5c80) + 1;
                          uVar10 = *(uint *)(unaff_EBP - 0x14);
                          uVar40 = *(uint *)(unaff_EBP - 0x5c88);
                          *(int *)(unaff_EBP - 0x5c80) = iVar9;
                          puVar16 = FUN_00405fd0(pvVar17,uVar40,uVar10,iVar9,iVar11);
                          uVar12 = FUN_004061f0((int)puVar16);
                          cVar4 = (char)uVar12;
                        }
                        fVar46 = (float10)FUN_004f8570(pvVar17,*(float *)(unaff_EBP - 0x5c88),
                                                       *(uint *)(unaff_EBP - 0x14));
                        *(float *)(unaff_EBP - 0x5cdc) = (float)fVar46;
                        fVar46 = (float10)FUN_004f8b40(pvVar17,*(int *)(unaff_EBP - 0x5c88),
                                                       *(int *)(unaff_EBP - 0x14));
                        *(float *)(unaff_EBP - 0x5c48) = (float)fVar46;
                        iVar9 = *(int *)(unaff_EBP - 0x5c6c);
                        iVar57 = *(int *)(unaff_EBP - 0x5c80) + -1;
                        *(int *)(unaff_EBP - 0x5c78) = iVar57;
                        if (iVar57 <= iVar9) {
                          do {
                            iVar57 = iVar11;
                            if (*(double *)(unaff_EBP - 0x5cc8) < 49.0) {
                              puVar20 = (undefined1 *)
                                        FUN_004f9450(pvVar17,(undefined4 *)(unaff_EBP - 0x5de0),
                                                     *(float *)(unaff_EBP - 0x5cac),
                                                     *(float *)(unaff_EBP - 0x5ca8),iVar9,
                                                     *(float *)(unaff_EBP - 0x5cdc),
                                                     *(float *)(unaff_EBP - 0x5c48),iVar11);
                            }
                            else {
                              iVar9 = rand();
                              pfVar6 = (float *)(unaff_EBP - 0x5fc);
                              fVar47 = ((float)iVar9 * 0.1) / 32767.0 + 0.75;
                              pfVar22 = FUN_0052db90(pvVar17,(float *)(unaff_EBP - 0x2e4),
                                                     *(int *)(unaff_EBP - 0x5c88),
                                                     *(int *)(unaff_EBP - 0x14),
                                                     *(int *)(unaff_EBP - 0x5c78));
                              iVar9 = FUN_004079f0(pfVar22,pfVar6,fVar47);
                              FUN_0041d160((void *)(unaff_EBP - 0x5d4c),iVar9);
                              puVar20 = FUN_00401370((void *)(unaff_EBP - 0x5e14),
                                                     (undefined1 *)(unaff_EBP - 0x5d4c),6);
                            }
                            FUN_0041ff00(pvVar17,*(float *)(unaff_EBP - 0x5c88),
                                         *(uint *)(unaff_EBP - 0x14),*(int *)(unaff_EBP - 0x5c78),
                                         puVar20,iVar57);
                            iVar9 = *(int *)(unaff_EBP - 0x5c6c);
                            iVar57 = *(int *)(unaff_EBP - 0x5c78) + 1;
                            *(int *)(unaff_EBP - 0x5c78) = iVar57;
                          } while (iVar57 <= iVar9);
                        }
                      }
                      dVar49 = *(double *)(unaff_EBP - 0x5d0c);
                      dVar48 = *(double *)(unaff_EBP - 0x5d30);
                      iVar41 = *(int *)(unaff_EBP - 0x14) + 1;
                      *(int *)(unaff_EBP - 0x14) = iVar41;
                    } while (iVar41 <= *(int *)(unaff_EBP - 0x5c74));
                    iVar9 = *(int *)(unaff_EBP - 0x5c88);
                    iVar57 = *(int *)(unaff_EBP - 0x5ca8);
                  }
                  iVar9 = iVar9 + 1;
                  *(int *)(unaff_EBP - 0x5c88) = iVar9;
                } while (iVar9 <= *(int *)(unaff_EBP - 0x5c64));
              }
            }
          }
          uVar10 = *(uint *)(unaff_EBP - 0x5ca8);
          uVar40 = *(uint *)(unaff_EBP - 0x5cac);
          *(undefined1 *)(unaff_EBP - 0x5ca1) = 1;
          fVar46 = FUN_004fc140(pvVar17,uVar40,uVar10,iVar11);
          *(float *)(unaff_EBP - 0x5c48) = (float)fVar46;
          iVar9 = 5;
          if (0.8 < *(float *)(unaff_EBP - 0x5c48)) {
            iVar9 = 3;
          }
          if (1 < *(int *)(unaff_EBP - 0x5c6c)) {
            iVar57 = iVar11;
            uVar10 = rand();
            uVar10 = uVar10 & 0x80000007;
            if ((int)uVar10 < 0) {
              uVar10 = (uVar10 - 1 | 0xfffffff8) + 1;
            }
            iVar41 = uVar10 + 0xd;
            iVar23 = rand();
            FUN_00513760(*(float *)(unaff_EBP - 0x5cac),*(uint *)(unaff_EBP - 0x5ca8),
                         (float)(*(int *)(unaff_EBP - 0x5c6c) + 1),iVar23 % 6 + 7,iVar41,iVar9,
                         iVar57);
          }
          if (*(int *)(*(int *)(unaff_EBP - 0x5cbc) + 0x18) == 1) {
            uVar10 = rand();
            uVar10 = uVar10 & 0x80000007;
            bVar45 = uVar10 == 0;
            if ((int)uVar10 < 0) {
              bVar45 = (uVar10 - 1 | 0xfffffff8) == 0xffffffff;
            }
            if (!bVar45) {
              FUN_004c84b0(unaff_EBP - 0x21a8);
              *(undefined1 *)(unaff_EBP - 4) = 0x37;
              *(undefined4 *)(unaff_EBP - 0x21a8) = 0x12;
              puVar13 = FUN_00401080((void *)(unaff_EBP - 0x2f0),0x40400000,0x3ecccccd,0x3ecccccd);
              FUN_00401060((void *)(unaff_EBP - 0x2184),puVar13);
              uVar10 = 8;
              piVar26 = (int *)(unaff_EBP - 0x6600);
              piVar18 = (int *)(unaff_EBP - 0x6610);
              piVar24 = FUN_004cde40((void *)(unaff_EBP - 0x6620),*(uint *)(unaff_EBP - 0x5ca8));
              pvVar17 = (void *)FUN_004ce290(piVar24,piVar18);
              puVar13 = (undefined4 *)FUN_00405660(pvVar17,piVar26,uVar10);
              uVar12 = 0;
              uVar58 = 0x3fe00000;
              piVar26 = (int *)(unaff_EBP - 0x6630);
              piVar18 = FUN_004cde40((void *)(unaff_EBP - 0x6640),*(uint *)(unaff_EBP - 0x5cac));
              puVar19 = (undefined4 *)FUN_004ce290(piVar18,piVar26);
              FUN_004cde40(&stack0xfffffff8,*(uint *)(unaff_EBP - 0x5c6c));
              puVar13 = FUN_00406380((void *)(unaff_EBP - 0xf70),*puVar19,puVar19[1],*puVar13,
                                     puVar13[1],uVar12,uVar58);
              FUN_00402a40((void *)(unaff_EBP - 0x21a0),puVar13);
              iVar11 = *(int *)(unaff_EBP - 0x5c70);
              pvVar17 = *(void **)(unaff_EBP - 0x5c68);
              *(undefined4 *)(unaff_EBP - 0x2188) = 0;
              cVar4 = FUN_005287b0(pvVar17,unaff_EBP - 0x21a8,iVar11,'\x01');
              if (cVar4 != '\0') {
                FUN_004d6670((void *)(iVar11 + 0xc),(void **)(unaff_EBP - 0x21a8));
              }
              *(undefined1 *)(unaff_EBP - 4) = 5;
              FUN_004cd8f0(unaff_EBP - 0x21a8);
            }
            uVar10 = rand();
            uVar10 = uVar10 & 0x80000007;
            bVar45 = uVar10 == 0;
            if ((int)uVar10 < 0) {
              bVar45 = (uVar10 - 1 | 0xfffffff8) == 0xffffffff;
            }
            if (!bVar45) {
              FUN_004c84b0(unaff_EBP - 0x24b8);
              *(undefined1 *)(unaff_EBP - 4) = 0x38;
              *(undefined4 *)(unaff_EBP - 0x24b8) = 0x12;
              puVar13 = FUN_00401080((void *)(unaff_EBP - 0x614),0x40400000,0x3ecccccd,0x3ecccccd);
              FUN_00401060((void *)(unaff_EBP - 0x2494),puVar13);
              uVar40 = 1;
              piVar26 = (int *)(unaff_EBP - 0x6650);
              uVar10 = 8;
              piVar18 = (int *)(unaff_EBP - 0x6660);
              piVar24 = (int *)(unaff_EBP - 0x6670);
              piVar25 = FUN_004cde40((void *)(unaff_EBP - 0x6680),*(uint *)(unaff_EBP - 0x5ca8));
              pvVar17 = (void *)FUN_004ce290(piVar25,piVar24);
              pvVar17 = (void *)FUN_00405690(pvVar17,piVar18,uVar10);
              puVar13 = (undefined4 *)FUN_00405690(pvVar17,piVar26,uVar40);
              uVar12 = 0;
              uVar58 = 0x3fe00000;
              piVar26 = (int *)(unaff_EBP - 0x6690);
              piVar18 = FUN_004cde40((void *)(unaff_EBP - 0x66a0),*(uint *)(unaff_EBP - 0x5cac));
              puVar19 = (undefined4 *)FUN_004ce290(piVar18,piVar26);
              FUN_004cde40(&stack0xfffffff8,*(uint *)(unaff_EBP - 0x5c6c));
              puVar13 = FUN_00406380((void *)(unaff_EBP - 4000),*puVar19,puVar19[1],*puVar13,
                                     puVar13[1],uVar12,uVar58);
              FUN_00402a40((void *)(unaff_EBP - 0x24b0),puVar13);
              iVar11 = *(int *)(unaff_EBP - 0x5c70);
              pvVar17 = *(void **)(unaff_EBP - 0x5c68);
              *(undefined4 *)(unaff_EBP - 0x2498) = 2;
              cVar4 = FUN_005287b0(pvVar17,unaff_EBP - 0x24b8,iVar11,'\x01');
              if (cVar4 != '\0') {
                FUN_004d6670((void *)(iVar11 + 0xc),(void **)(unaff_EBP - 0x24b8));
              }
              *(undefined1 *)(unaff_EBP - 4) = 5;
              FUN_004cd8f0(unaff_EBP - 0x24b8);
            }
            uVar10 = rand();
            uVar10 = uVar10 & 0x80000007;
            bVar45 = uVar10 == 0;
            if ((int)uVar10 < 0) {
              bVar45 = (uVar10 - 1 | 0xfffffff8) == 0xffffffff;
            }
            if (!bVar45) {
              FUN_004c84b0(unaff_EBP - 0x2020);
              *(undefined1 *)(unaff_EBP - 4) = 0x39;
              *(undefined4 *)(unaff_EBP - 0x2020) = 0x12;
              puVar13 = FUN_00401080((void *)(unaff_EBP - 0x62c),0x40400000,0x3ecccccd,0x3ecccccd);
              FUN_00401060((void *)(unaff_EBP - 0x1ffc),puVar13);
              piVar26 = (int *)(unaff_EBP - 0x66b0);
              piVar18 = FUN_004cde40((void *)(unaff_EBP - 0x66c0),*(uint *)(unaff_EBP - 0x5ca8));
              puVar13 = (undefined4 *)FUN_004ce290(piVar18,piVar26);
              uVar10 = 8;
              piVar26 = (int *)(unaff_EBP - 0x66d8);
              piVar18 = (int *)(unaff_EBP - 0x66f0);
              piVar24 = FUN_004cde40((void *)(unaff_EBP - 0x6708),*(uint *)(unaff_EBP - 0x5cac));
              pvVar17 = (void *)FUN_004ce290(piVar24,piVar18);
              puVar19 = (undefined4 *)FUN_00405660(pvVar17,piVar26,uVar10);
              FUN_004cde40(&stack0xfffffff8,*(uint *)(unaff_EBP - 0x5c6c));
              puVar13 = FUN_00406380((void *)(unaff_EBP - 0xd90),*puVar19,puVar19[1],*puVar13,
                                     puVar13[1],piVar26,uVar10);
              FUN_00402a40((void *)(unaff_EBP - 0x2018),puVar13);
              iVar11 = *(int *)(unaff_EBP - 0x5c70);
              pvVar17 = *(void **)(unaff_EBP - 0x5c68);
              *(undefined4 *)(unaff_EBP - 0x2000) = 3;
              cVar4 = FUN_005287b0(pvVar17,unaff_EBP - 0x2020,iVar11,'\x01');
              if (cVar4 != '\0') {
                FUN_004d6670((void *)(iVar11 + 0xc),(void **)(unaff_EBP - 0x2020));
              }
              *(undefined1 *)(unaff_EBP - 4) = 5;
              FUN_004cd8f0(unaff_EBP - 0x2020);
            }
            uVar10 = rand();
            uVar10 = uVar10 & 0x80000007;
            bVar45 = uVar10 == 0;
            if ((int)uVar10 < 0) {
              bVar45 = (uVar10 - 1 | 0xfffffff8) == 0xffffffff;
            }
            if (!bVar45) {
              FUN_004c84b0(unaff_EBP - 0x2330);
              *(undefined1 *)(unaff_EBP - 4) = 0x3a;
              *(undefined4 *)(unaff_EBP - 0x2330) = 0x12;
              puVar13 = FUN_00401080((void *)(unaff_EBP - 0x644),0x40400000,0x3ecccccd,0x3ecccccd);
              FUN_00401060((void *)(unaff_EBP - 0x230c),puVar13);
              piVar26 = (int *)(unaff_EBP - 0x6720);
              piVar18 = FUN_004cde40((void *)(unaff_EBP - 0x6738),*(uint *)(unaff_EBP - 0x5ca8));
              puVar13 = (undefined4 *)FUN_004ce290(piVar18,piVar26);
              uVar40 = 1;
              piVar26 = (int *)(unaff_EBP - 0x6748);
              uVar10 = 8;
              piVar18 = (int *)(unaff_EBP - 0x6758);
              piVar24 = (int *)(unaff_EBP - 0x6768);
              piVar25 = FUN_004cde40((void *)(unaff_EBP - 0x6778),*(uint *)(unaff_EBP - 0x5cac));
              pvVar17 = (void *)FUN_004ce290(piVar25,piVar24);
              pvVar17 = (void *)FUN_00405690(pvVar17,piVar18,uVar10);
              puVar19 = (undefined4 *)FUN_00405690(pvVar17,piVar26,uVar40);
              FUN_004cde40(&stack0xfffffff8,*(uint *)(unaff_EBP - 0x5c6c));
              puVar13 = FUN_00406380((void *)(unaff_EBP - 0xda8),*puVar19,puVar19[1],*puVar13,
                                     puVar13[1],piVar26,uVar40);
              FUN_00402a40((void *)(unaff_EBP - 9000),puVar13);
              iVar11 = *(int *)(unaff_EBP - 0x5c70);
              pvVar17 = *(void **)(unaff_EBP - 0x5c68);
              *(undefined4 *)(unaff_EBP - 0x2310) = 1;
              cVar4 = FUN_005287b0(pvVar17,unaff_EBP - 0x2330,iVar11,'\x01');
              if (cVar4 != '\0') {
                FUN_004d6670((void *)(iVar11 + 0xc),(void **)(unaff_EBP - 0x2330));
              }
              *(undefined1 *)(unaff_EBP - 4) = 5;
              FUN_004cd8f0(unaff_EBP - 0x2330);
            }
          }
        }
LAB_004efee5:
        iVar9 = *(int *)(unaff_EBP - 0x5cd8);
        iVar57 = *(int *)(unaff_EBP - 0x5c58) + 0x100;
        *(int *)(unaff_EBP - 0x5c58) = iVar57;
      } while (iVar57 < 0x200);
      iVar57 = *(int *)(unaff_EBP - 0x5c7c) + 0x100;
      *(int *)(unaff_EBP - 0x5c7c) = iVar57;
      if (0x1ff < iVar57) goto code_r0x004eff25;
      iVar9 = *(int *)(unaff_EBP - 0x5ccc);
    } while( true );
  }
  goto LAB_004efffd;
code_r0x004eff25:
  if (*(char *)(unaff_EBP - 0x5ca1) != '\0') {
    iVar9 = *(int *)(unaff_EBP - 0x5ce4) / 2;
    uVar40 = **(int **)(unaff_EBP - 0x5d00) * 0x100 + *(int *)(unaff_EBP - 0x5c90) + iVar9;
    uVar10 = **(int **)(unaff_EBP - 0x5ca0) * 0x100 + *(int *)(unaff_EBP - 0x5cb0) + iVar9;
    *(uint *)(unaff_EBP - 0x5c58) = uVar10;
    *(uint *)(unaff_EBP - 0x5c64) = uVar40;
    iVar9 = FUN_00406100(pvVar17,uVar10,uVar40,iVar11);
    iVar9 = FUN_004061d0(iVar9);
    uVar10 = *(uint *)(unaff_EBP - 0x5c64);
    uVar40 = *(uint *)(unaff_EBP - 0x5c58);
    *(int *)(unaff_EBP - 0x5c80) = iVar9;
    puVar16 = FUN_00405fd0(pvVar17,uVar40,uVar10,iVar9,iVar11);
    uVar12 = FUN_004061f0((int)puVar16);
    cVar4 = (char)uVar12;
    while (cVar4 != '\0') {
      iVar9 = *(int *)(unaff_EBP - 0x5c80) + 1;
      uVar10 = *(uint *)(unaff_EBP - 0x5c64);
      uVar40 = *(uint *)(unaff_EBP - 0x5c58);
      *(int *)(unaff_EBP - 0x5c80) = iVar9;
      puVar16 = FUN_00405fd0(pvVar17,uVar40,uVar10,iVar9,iVar11);
      uVar12 = FUN_004061f0((int)puVar16);
      cVar4 = (char)uVar12;
    }
    puVar13 = FUN_00402990((void *)(unaff_EBP - 0x65c),*(undefined4 *)(unaff_EBP - 0x5c58),
                           *(undefined4 *)(unaff_EBP - 0x5c64),*(undefined4 *)(unaff_EBP - 0x5c80));
    FUN_0042feb0((void *)(unaff_EBP - 0x5d64),puVar13);
  }
LAB_004efffd:
  iVar9 = *(int *)(unaff_EBP - 0x5c8c);
  iVar11 = *(int *)(unaff_EBP - 0x5ccc);
  *(int *)(unaff_EBP - 0x5c54) = *(int *)(unaff_EBP - 0x5c54) + 0x100;
  iVar9 = iVar9 + iVar11;
  piVar26 = (int *)(unaff_EBP - 0x5c9c);
  *piVar26 = *piVar26 + -1;
  iVar57 = *piVar26;
  *(int *)(unaff_EBP - 0x5c8c) = iVar9;
  if (iVar57 == 0) goto code_r0x004f0027;
  goto LAB_004ef280;
code_r0x004f0027:
  iVar9 = *(int *)(unaff_EBP - 0x5cd4);
  *(int *)(unaff_EBP - 0x5cc0) = *(int *)(unaff_EBP - 0x5cc0) + 0x100;
  iVar9 = iVar9 + 1;
  *(int *)(unaff_EBP - 0x5cd4) = iVar9;
  if (iVar11 <= iVar9) goto LAB_004f0046;
  goto LAB_004ef260;
LAB_004f0046:
  FUN_004e1eb0((undefined4 *)(unaff_EBP - 0x5d58));
  FUN_004e1eb0((undefined4 *)(unaff_EBP - 0x4c));
  iVar9 = *(int *)(unaff_EBP - 0x5c70);
  pvVar17 = (void *)(iVar9 + 0x88);
  *(undefined1 *)(unaff_EBP - 4) = 0x3c;
  *(void **)(unaff_EBP - 0x5c78) = pvVar17;
  FUN_00530550(pvVar17,(undefined4 *)(unaff_EBP - 0x5c58));
  piVar26 = (int *)FUN_004d3de0(pvVar17,(undefined4 *)(unaff_EBP - 0x5d8c));
  bVar45 = FUN_0042c6f0((void *)(unaff_EBP - 0x5c58),piVar26);
  if (bVar45) {
    do {
      piVar26 = (int *)FUN_004ce1f0((undefined4 *)(unaff_EBP - 0x5c58));
      if (*(int *)(*piVar26 + 0x60) == 1) {
        FUN_004f2be0((void *)(unaff_EBP - 0x4c),piVar26);
      }
      iVar9 = *(int *)(*piVar26 + 0x60);
      if ((((iVar9 == 2) || (iVar9 == 4)) || (iVar9 == 3)) || (iVar9 == 5)) {
        FUN_004f2be0((void *)(unaff_EBP - 0x5d58),piVar26);
      }
      FUN_004f79d0((void *)(unaff_EBP - 0x5c58),(int *)(unaff_EBP - 0x5c48));
      piVar26 = (int *)FUN_004d3de0(pvVar17,(undefined4 *)(unaff_EBP - 0x5d8c));
      bVar45 = FUN_0042c6f0((void *)(unaff_EBP - 0x5c58),piVar26);
    } while (bVar45);
    iVar9 = *(int *)(unaff_EBP - 0x5c70);
  }
  iVar11 = *(int *)(*(int *)(unaff_EBP - 0x5cbc) + 0x18);
  if (iVar11 == 1) {
    FUN_004e1eb0((undefined4 *)(unaff_EBP - 0x40));
    *(undefined1 *)(unaff_EBP - 4) = 0x3d;
    iVar11 = FUN_004013d0((void *)(iVar9 + 0x60),1);
    *(int *)(unaff_EBP - 0x5c80) = iVar11;
    piVar26 = (int *)FUN_004013d0((void *)(iVar9 + 0x60),0);
    pvVar17 = *(void **)(unaff_EBP - 0x5c68);
    iVar11 = **(int **)(unaff_EBP - 0x5c80);
    iVar57 = *piVar26;
    *(int **)(unaff_EBP - 0x5c48) = piVar26;
    iVar11 = FUN_00406210(pvVar17,(int)(iVar57 + (iVar57 >> 0x1f & 0x3fU)) >> 6,
                          (int)(iVar11 + (iVar11 >> 0x1f & 0x3fU)) >> 6);
    if (iVar11 != 0) {
      puVar14 = (uint *)(iVar11 + 0x14018);
      *(undefined4 *)(unaff_EBP - 0x5c74) = 8;
      do {
        *(undefined4 *)(unaff_EBP - 0x5c50) = 8;
        do {
          uVar10 = puVar14[6];
          if ((uVar10 != 1) && (uVar10 != 10)) {
            if (uVar10 == 0) {
              pCVar27 = (CRefTime *)FUN_004e2320(puVar14,1);
              lVar28 = CRefTime::Millisecs(pCVar27);
              uVar10 = (int)(lVar28 + (lVar28 >> 0x1f & 0xffU)) >> 8;
              pCVar27 = (CRefTime *)FUN_004e2320(puVar14,0);
              lVar28 = CRefTime::Millisecs(pCVar27);
              pcVar29 = (char *)FUN_0042e880(pvVar17,(int)(lVar28 + (lVar28 >> 0x1f & 0xffU)) >> 8,
                                             uVar10);
              if (((pcVar29 == (char *)0x0) || (*pcVar29 == '\0')) || (*(int *)(pcVar29 + 4) == 0))
              goto LAB_004f024f;
              piVar26 = (int *)(unaff_EBP - 0x23c);
              pvVar5 = (void *)(unaff_EBP - 0x284);
            }
            else {
              piVar26 = (int *)(unaff_EBP - 0x234);
              pvVar5 = (void *)(unaff_EBP - 0x28c);
            }
            iVar9 = 0x100;
            puVar13 = FUN_004e14e0(pvVar5,puVar14);
            piVar26 = FUN_004e2360(puVar13,piVar26,iVar9);
            FUN_00528730((void *)(unaff_EBP - 0x40),piVar26);
          }
LAB_004f024f:
          puVar14 = puVar14 + 0x1a;
          piVar26 = (int *)(unaff_EBP - 0x5c50);
          *piVar26 = *piVar26 + -1;
        } while (*piVar26 != 0);
        piVar26 = (int *)(unaff_EBP - 0x5c74);
        *piVar26 = *piVar26 + -1;
      } while (*piVar26 != 0);
      iVar9 = *(int *)(unaff_EBP - 0x5c70);
    }
    piVar26 = *(int **)(unaff_EBP - 0x5c80);
    *(undefined4 *)(unaff_EBP - 0x5d44) = 1;
    *(undefined4 *)(unaff_EBP - 0x5d3c) = 0x14;
    iVar11 = *piVar26;
    iVar57 = **(int **)(unaff_EBP - 0x5c48);
    *(undefined4 *)(unaff_EBP - 0x5c64) = 0;
    pvVar17 = (void *)FUN_0042e220(pvVar17,(int)(iVar57 + (iVar57 >> 0x1f & 0x3fU)) >> 6,
                                   (int)(iVar11 + (iVar11 >> 0x1f & 0x3fU)) >> 6);
    if (pvVar17 != (void *)0x0) {
      FUN_00522290(pvVar17,(undefined4 *)(unaff_EBP - 0x5d44),(undefined4 *)(unaff_EBP - 0x5d3c));
    }
    FUN_00530550((void *)(iVar9 + 0x88),(undefined4 *)(unaff_EBP - 0x5c78));
    piVar26 = (int *)FUN_004d3de0((void *)(iVar9 + 0x88),(undefined4 *)(unaff_EBP - 0x5da0));
    bVar45 = FUN_0042c6f0((void *)(unaff_EBP - 0x5c78),piVar26);
    if (bVar45) {
      do {
        piVar26 = (int *)FUN_004ce1f0((undefined4 *)(unaff_EBP - 0x5c78));
        *(int **)(unaff_EBP - 0x5cc4) = piVar26;
        bVar45 = FUN_004e28d0((int *)(*piVar26 + 0x24));
        if (!bVar45) {
          iVar11 = *piVar26;
          iVar57 = *(int *)(iVar11 + 0x60);
          if (iVar57 == 1) {
            bVar45 = FUN_004e28d0((int *)(iVar11 + 0x3c));
            if (!bVar45) {
              pSVar30 = operator_new(0x10f0);
              if (pSVar30 == (Spawn *)0x0) {
                pSVar30 = (Spawn *)0x0;
              }
              else {
                pSVar30 = cube::Spawn::Spawn(pSVar30);
              }
              iVar11 = *piVar26;
              *(Spawn **)(unaff_EBP - 0x5c50) = pSVar30;
              *(Spawn **)(unaff_EBP - 0x5cdc) = pSVar30;
              *(undefined1 **)(unaff_EBP - 0x5c48) = &(pSVar30->Spawn_data).field_0xc;
              uVar10 = FUN_00420020((int *)(iVar11 + 0x3c));
              uVar40 = rand();
              puVar14 = (uint *)FUN_0041e2e0((void *)(**(int **)(unaff_EBP - 0x5cc4) + 0x3c),
                                             uVar40 % uVar10);
              FUN_004d99d0(*(void **)(unaff_EBP - 0x5c48),puVar14);
              iVar11 = *(int *)(unaff_EBP - 0x5c50);
              *(undefined4 *)(iVar11 + 0x28) = 3;
              uVar10 = rand();
              uVar10 = uVar10 & 0x80000001;
              if ((int)uVar10 < 0) {
                uVar10 = (uVar10 - 1 | 0xfffffffe) + 1;
              }
              *(uint *)(iVar11 + 0x2c) = uVar10 + 2;
              *(undefined4 *)(iVar11 + 0x34) = *(undefined4 *)(*(int *)(unaff_EBP - 0x5cbc) + 0x24);
              *(undefined1 *)(iVar11 + 0x30) = 0x84;
              pSVar31 = operator_new(0xc);
              *(SequentialBehavior **)(unaff_EBP - 0x5c48) = pSVar31;
              *(undefined1 *)(unaff_EBP - 4) = 0x3e;
              if (pSVar31 == (SequentialBehavior *)0x0) {
                *(undefined4 *)(unaff_EBP - 0x5c80) = 0;
              }
              else {
                pSVar31 = cube::SequentialBehavior::SequentialBehavior(pSVar31);
                *(SequentialBehavior **)(unaff_EBP - 0x5c80) = pSVar31;
              }
              *(undefined1 *)(unaff_EBP - 4) = 0x3d;
              pCVar32 = operator_new(0x14);
              *(CombatBehavior **)(unaff_EBP - 0x5c48) = pCVar32;
              *(undefined1 *)(unaff_EBP - 4) = 0x3f;
              if (pCVar32 == (CombatBehavior *)0x0) {
                pCVar32 = (CombatBehavior *)0x0;
              }
              else {
                pCVar32 = cube::CombatBehavior::CombatBehavior(pCVar32,0x41a00000);
              }
              *(CombatBehavior **)(unaff_EBP - 0x5c48) = pCVar32;
              pvVar17 = (void *)(*(int *)(unaff_EBP - 0x5c80) + 4);
              *(undefined1 *)(unaff_EBP - 4) = 0x3d;
              *(void **)(unaff_EBP - 0x5c74) = pvVar17;
              FUN_004d6620(pvVar17,(undefined4 *)(unaff_EBP - 0x5c48));
              pLVar33 = operator_new(4);
              *(LookAtPlayerBehavior **)(unaff_EBP - 0x5c48) = pLVar33;
              *(undefined1 *)(unaff_EBP - 4) = 0x40;
              if (pLVar33 == (LookAtPlayerBehavior *)0x0) {
                pLVar33 = (LookAtPlayerBehavior *)0x0;
              }
              else {
                pLVar33 = cube::LookAtPlayerBehavior::LookAtPlayerBehavior(pLVar33);
              }
              pvVar17 = *(void **)(unaff_EBP - 0x5c74);
              *(LookAtPlayerBehavior **)(unaff_EBP - 0x5c48) = pLVar33;
              *(undefined1 *)(unaff_EBP - 4) = 0x3d;
              FUN_004d6620(pvVar17,(undefined4 *)(unaff_EBP - 0x5c48));
              pWVar34 = operator_new(0x1c);
              *(WalkPathBehavior **)(unaff_EBP - 0x5c48) = pWVar34;
              *(undefined1 *)(unaff_EBP - 4) = 0x41;
              if (pWVar34 == (WalkPathBehavior *)0x0) {
                pWVar34 = (WalkPathBehavior *)0x0;
              }
              else {
                pWVar34 = cube::WalkPathBehavior::WalkPathBehavior(pWVar34,0x40000000);
              }
              *(WalkPathBehavior **)(unaff_EBP - 0x5c50) = pWVar34;
              *(undefined1 *)(unaff_EBP - 4) = 0x3d;
              FUN_004e1420(&pWVar34->WalkPathBehavior_data,(undefined4 *)(iVar11 + 0x10));
              pvVar17 = *(void **)(unaff_EBP - 0x5c74);
LAB_004f0c69:
              *(undefined4 *)(unaff_EBP - 0x5c48) = *(undefined4 *)(unaff_EBP - 0x5c50);
              FUN_004d6620(pvVar17,(undefined4 *)(unaff_EBP - 0x5c48));
              *(undefined4 *)(iVar11 + 0x109c) = *(undefined4 *)(unaff_EBP - 0x5c80);
              FUN_004f2be0((void *)(iVar9 + 0x18),(undefined4 *)(unaff_EBP - 0x5cdc));
            }
          }
          else if (iVar57 == 2) {
            bVar45 = FUN_004e28d0((int *)(iVar11 + 0x3c));
            if (!bVar45) {
              pSVar30 = operator_new(0x10f0);
              if (pSVar30 == (Spawn *)0x0) {
                pSVar30 = (Spawn *)0x0;
              }
              else {
                pSVar30 = cube::Spawn::Spawn(pSVar30);
              }
              iVar11 = *piVar26;
              *(Spawn **)(unaff_EBP - 0x5c50) = pSVar30;
              *(Spawn **)(unaff_EBP - 0x5cdc) = pSVar30;
              *(undefined1 **)(unaff_EBP - 0x5c48) = &(pSVar30->Spawn_data).field_0xc;
              uVar10 = FUN_00420020((int *)(iVar11 + 0x3c));
              uVar40 = rand();
              puVar14 = (uint *)FUN_0041e2e0((void *)(**(int **)(unaff_EBP - 0x5cc4) + 0x3c),
                                             uVar40 % uVar10);
              FUN_004d99d0(*(void **)(unaff_EBP - 0x5c48),puVar14);
              iVar11 = *(int *)(unaff_EBP - 0x5c50);
              *(undefined4 *)(iVar11 + 0x28) = 3;
              uVar10 = rand();
              uVar10 = uVar10 & 0x80000001;
              if ((int)uVar10 < 0) {
                uVar10 = (uVar10 - 1 | 0xfffffffe) + 1;
              }
              *(uint *)(iVar11 + 0x2c) = uVar10 + 2;
              *(undefined4 *)(iVar11 + 0x34) = *(undefined4 *)(*(int *)(unaff_EBP - 0x5cbc) + 0x24);
              *(undefined1 *)(iVar11 + 0x30) = 0x80;
              FUN_004fd920(iVar11);
              pSVar31 = operator_new(0xc);
              *(SequentialBehavior **)(unaff_EBP - 0x5c48) = pSVar31;
              *(undefined1 *)(unaff_EBP - 4) = 0x42;
              if (pSVar31 == (SequentialBehavior *)0x0) {
                *(undefined4 *)(unaff_EBP - 0x5c80) = 0;
              }
              else {
                pSVar31 = cube::SequentialBehavior::SequentialBehavior(pSVar31);
                *(SequentialBehavior **)(unaff_EBP - 0x5c80) = pSVar31;
              }
              *(undefined1 *)(unaff_EBP - 4) = 0x3d;
              pCVar32 = operator_new(0x14);
              *(CombatBehavior **)(unaff_EBP - 0x5c48) = pCVar32;
              *(undefined1 *)(unaff_EBP - 4) = 0x43;
              if (pCVar32 == (CombatBehavior *)0x0) {
                pCVar32 = (CombatBehavior *)0x0;
              }
              else {
                pCVar32 = cube::CombatBehavior::CombatBehavior(pCVar32,0x41a00000);
              }
              *(CombatBehavior **)(unaff_EBP - 0x5c48) = pCVar32;
              pvVar17 = (void *)(*(int *)(unaff_EBP - 0x5c80) + 4);
              *(undefined1 *)(unaff_EBP - 4) = 0x3d;
              *(void **)(unaff_EBP - 0x5c74) = pvVar17;
              FUN_004d6620(pvVar17,(undefined4 *)(unaff_EBP - 0x5c48));
              pLVar33 = operator_new(4);
              *(LookAtPlayerBehavior **)(unaff_EBP - 0x5c48) = pLVar33;
              *(undefined1 *)(unaff_EBP - 4) = 0x44;
              if (pLVar33 == (LookAtPlayerBehavior *)0x0) {
                pLVar33 = (LookAtPlayerBehavior *)0x0;
              }
              else {
                pLVar33 = cube::LookAtPlayerBehavior::LookAtPlayerBehavior(pLVar33);
              }
              pvVar17 = *(void **)(unaff_EBP - 0x5c74);
              *(LookAtPlayerBehavior **)(unaff_EBP - 0x5c48) = pLVar33;
              *(undefined1 *)(unaff_EBP - 4) = 0x3d;
              FUN_004d6620(pvVar17,(undefined4 *)(unaff_EBP - 0x5c48));
              pWVar34 = operator_new(0x1c);
              *(WalkPathBehavior **)(unaff_EBP - 0x5c48) = pWVar34;
              *(undefined1 *)(unaff_EBP - 4) = 0x45;
              if (pWVar34 == (WalkPathBehavior *)0x0) {
                pWVar34 = (WalkPathBehavior *)0x0;
              }
              else {
                pWVar34 = cube::WalkPathBehavior::WalkPathBehavior(pWVar34,0x40000000);
              }
              *(WalkPathBehavior **)(unaff_EBP - 0x5c50) = pWVar34;
              *(undefined1 *)(unaff_EBP - 4) = 0x3d;
              FUN_004e1420(&pWVar34->WalkPathBehavior_data,(undefined4 *)(iVar11 + 0x10));
              pvVar17 = *(void **)(unaff_EBP - 0x5c74);
              goto LAB_004f0c69;
            }
          }
          else if (iVar57 == 4) {
            bVar45 = FUN_004e28d0((int *)(iVar11 + 0x3c));
            if (!bVar45) {
              pSVar30 = operator_new(0x10f0);
              if (pSVar30 == (Spawn *)0x0) {
                pSVar30 = (Spawn *)0x0;
              }
              else {
                pSVar30 = cube::Spawn::Spawn(pSVar30);
              }
              iVar11 = *piVar26;
              *(Spawn **)(unaff_EBP - 0x5c50) = pSVar30;
              *(Spawn **)(unaff_EBP - 0x5cdc) = pSVar30;
              *(undefined1 **)(unaff_EBP - 0x5c48) = &(pSVar30->Spawn_data).field_0xc;
              uVar10 = FUN_00420020((int *)(iVar11 + 0x3c));
              uVar40 = rand();
              puVar14 = (uint *)FUN_0041e2e0((void *)(**(int **)(unaff_EBP - 0x5cc4) + 0x3c),
                                             uVar40 % uVar10);
              FUN_004d99d0(*(void **)(unaff_EBP - 0x5c48),puVar14);
              iVar11 = *(int *)(unaff_EBP - 0x5c50);
              *(undefined4 *)(iVar11 + 0x28) = 3;
              uVar10 = rand();
              uVar10 = uVar10 & 0x80000001;
              if ((int)uVar10 < 0) {
                uVar10 = (uVar10 - 1 | 0xfffffffe) + 1;
              }
              *(uint *)(iVar11 + 0x2c) = uVar10 + 2;
              *(undefined4 *)(iVar11 + 0x34) = *(undefined4 *)(*(int *)(unaff_EBP - 0x5cbc) + 0x24);
              *(undefined1 *)(iVar11 + 0x30) = 0x82;
              FUN_004fc180(iVar11);
              pSVar31 = operator_new(0xc);
              *(SequentialBehavior **)(unaff_EBP - 0x5c48) = pSVar31;
              *(undefined1 *)(unaff_EBP - 4) = 0x46;
              if (pSVar31 == (SequentialBehavior *)0x0) {
                *(undefined4 *)(unaff_EBP - 0x5c80) = 0;
              }
              else {
                pSVar31 = cube::SequentialBehavior::SequentialBehavior(pSVar31);
                *(SequentialBehavior **)(unaff_EBP - 0x5c80) = pSVar31;
              }
              *(undefined1 *)(unaff_EBP - 4) = 0x3d;
              pCVar32 = operator_new(0x14);
              *(CombatBehavior **)(unaff_EBP - 0x5c48) = pCVar32;
              *(undefined1 *)(unaff_EBP - 4) = 0x47;
              if (pCVar32 == (CombatBehavior *)0x0) {
                pCVar32 = (CombatBehavior *)0x0;
              }
              else {
                pCVar32 = cube::CombatBehavior::CombatBehavior(pCVar32,0x41a00000);
              }
              *(CombatBehavior **)(unaff_EBP - 0x5c48) = pCVar32;
              pvVar17 = (void *)(*(int *)(unaff_EBP - 0x5c80) + 4);
              *(undefined1 *)(unaff_EBP - 4) = 0x3d;
              *(void **)(unaff_EBP - 0x5c74) = pvVar17;
              FUN_004d6620(pvVar17,(undefined4 *)(unaff_EBP - 0x5c48));
              pLVar33 = operator_new(4);
              *(LookAtPlayerBehavior **)(unaff_EBP - 0x5c48) = pLVar33;
              *(undefined1 *)(unaff_EBP - 4) = 0x48;
              if (pLVar33 == (LookAtPlayerBehavior *)0x0) {
                pLVar33 = (LookAtPlayerBehavior *)0x0;
              }
              else {
                pLVar33 = cube::LookAtPlayerBehavior::LookAtPlayerBehavior(pLVar33);
              }
              pvVar17 = *(void **)(unaff_EBP - 0x5c74);
              *(LookAtPlayerBehavior **)(unaff_EBP - 0x5c48) = pLVar33;
              *(undefined1 *)(unaff_EBP - 4) = 0x3d;
              FUN_004d6620(pvVar17,(undefined4 *)(unaff_EBP - 0x5c48));
              pWVar34 = operator_new(0x1c);
              *(WalkPathBehavior **)(unaff_EBP - 0x5c48) = pWVar34;
              *(undefined1 *)(unaff_EBP - 4) = 0x49;
              if (pWVar34 == (WalkPathBehavior *)0x0) {
                pWVar34 = (WalkPathBehavior *)0x0;
              }
              else {
                pWVar34 = cube::WalkPathBehavior::WalkPathBehavior(pWVar34,0x40000000);
              }
              *(WalkPathBehavior **)(unaff_EBP - 0x5c50) = pWVar34;
              *(undefined1 *)(unaff_EBP - 4) = 0x3d;
              FUN_004e1420(&pWVar34->WalkPathBehavior_data,(undefined4 *)(iVar11 + 0x10));
              pvVar17 = *(void **)(unaff_EBP - 0x5c74);
              goto LAB_004f0c69;
            }
          }
          else if (iVar57 == 3) {
            bVar45 = FUN_004e28d0((int *)(iVar11 + 0x3c));
            if (!bVar45) {
              pSVar30 = operator_new(0x10f0);
              if (pSVar30 == (Spawn *)0x0) {
                pSVar30 = (Spawn *)0x0;
              }
              else {
                pSVar30 = cube::Spawn::Spawn(pSVar30);
              }
              iVar11 = *piVar26;
              *(Spawn **)(unaff_EBP - 0x5c50) = pSVar30;
              *(Spawn **)(unaff_EBP - 0x5cdc) = pSVar30;
              *(undefined1 **)(unaff_EBP - 0x5c48) = &(pSVar30->Spawn_data).field_0xc;
              uVar10 = FUN_00420020((int *)(iVar11 + 0x3c));
              uVar40 = rand();
              puVar14 = (uint *)FUN_0041e2e0((void *)(**(int **)(unaff_EBP - 0x5cc4) + 0x3c),
                                             uVar40 % uVar10);
              FUN_004d99d0(*(void **)(unaff_EBP - 0x5c48),puVar14);
              iVar11 = *(int *)(unaff_EBP - 0x5c50);
              *(undefined4 *)(iVar11 + 0x28) = 3;
              uVar10 = rand();
              uVar10 = uVar10 & 0x80000001;
              if ((int)uVar10 < 0) {
                uVar10 = (uVar10 - 1 | 0xfffffffe) + 1;
              }
              *(uint *)(iVar11 + 0x2c) = uVar10 + 2;
              *(undefined4 *)(iVar11 + 0x34) = *(undefined4 *)(*(int *)(unaff_EBP - 0x5cbc) + 0x24);
              *(undefined1 *)(iVar11 + 0x30) = 0x81;
              FUN_004fde90(iVar11);
              pSVar31 = operator_new(0xc);
              *(SequentialBehavior **)(unaff_EBP - 0x5c48) = pSVar31;
              *(undefined1 *)(unaff_EBP - 4) = 0x4a;
              if (pSVar31 == (SequentialBehavior *)0x0) {
                *(undefined4 *)(unaff_EBP - 0x5c80) = 0;
              }
              else {
                pSVar31 = cube::SequentialBehavior::SequentialBehavior(pSVar31);
                *(SequentialBehavior **)(unaff_EBP - 0x5c80) = pSVar31;
              }
              *(undefined1 *)(unaff_EBP - 4) = 0x3d;
              pCVar32 = operator_new(0x14);
              *(CombatBehavior **)(unaff_EBP - 0x5c48) = pCVar32;
              *(undefined1 *)(unaff_EBP - 4) = 0x4b;
              if (pCVar32 == (CombatBehavior *)0x0) {
                pCVar32 = (CombatBehavior *)0x0;
              }
              else {
                pCVar32 = cube::CombatBehavior::CombatBehavior(pCVar32,0x41a00000);
              }
              *(CombatBehavior **)(unaff_EBP - 0x5c48) = pCVar32;
              pvVar17 = (void *)(*(int *)(unaff_EBP - 0x5c80) + 4);
              *(undefined1 *)(unaff_EBP - 4) = 0x3d;
              *(void **)(unaff_EBP - 0x5c74) = pvVar17;
              FUN_004d6620(pvVar17,(undefined4 *)(unaff_EBP - 0x5c48));
              pLVar33 = operator_new(4);
              *(LookAtPlayerBehavior **)(unaff_EBP - 0x5c48) = pLVar33;
              *(undefined1 *)(unaff_EBP - 4) = 0x4c;
              if (pLVar33 == (LookAtPlayerBehavior *)0x0) {
                pLVar33 = (LookAtPlayerBehavior *)0x0;
              }
              else {
                pLVar33 = cube::LookAtPlayerBehavior::LookAtPlayerBehavior(pLVar33);
              }
              pvVar17 = *(void **)(unaff_EBP - 0x5c74);
              *(LookAtPlayerBehavior **)(unaff_EBP - 0x5c48) = pLVar33;
              *(undefined1 *)(unaff_EBP - 4) = 0x3d;
              FUN_004d6620(pvVar17,(undefined4 *)(unaff_EBP - 0x5c48));
              pWVar34 = operator_new(0x1c);
              *(WalkPathBehavior **)(unaff_EBP - 0x5c48) = pWVar34;
              *(undefined1 *)(unaff_EBP - 4) = 0x4d;
              if (pWVar34 == (WalkPathBehavior *)0x0) {
                pWVar34 = (WalkPathBehavior *)0x0;
              }
              else {
                pWVar34 = cube::WalkPathBehavior::WalkPathBehavior(pWVar34,0x40000000);
              }
              *(WalkPathBehavior **)(unaff_EBP - 0x5c50) = pWVar34;
              *(undefined1 *)(unaff_EBP - 4) = 0x3d;
              FUN_004e1420(&pWVar34->WalkPathBehavior_data,(undefined4 *)(iVar11 + 0x10));
              pvVar17 = *(void **)(unaff_EBP - 0x5c74);
              goto LAB_004f0c69;
            }
          }
          else if (iVar57 == 5) {
            bVar45 = FUN_004e28d0((int *)(iVar11 + 0x3c));
            if (!bVar45) {
              pSVar30 = operator_new(0x10f0);
              if (pSVar30 == (Spawn *)0x0) {
                pSVar30 = (Spawn *)0x0;
              }
              else {
                pSVar30 = cube::Spawn::Spawn(pSVar30);
              }
              iVar11 = *piVar26;
              *(Spawn **)(unaff_EBP - 0x5c50) = pSVar30;
              *(Spawn **)(unaff_EBP - 0x5cdc) = pSVar30;
              *(undefined1 **)(unaff_EBP - 0x5c48) = &(pSVar30->Spawn_data).field_0xc;
              uVar10 = FUN_00420020((int *)(iVar11 + 0x3c));
              uVar40 = rand();
              puVar14 = (uint *)FUN_0041e2e0((void *)(**(int **)(unaff_EBP - 0x5cc4) + 0x3c),
                                             uVar40 % uVar10);
              FUN_004d99d0(*(void **)(unaff_EBP - 0x5c48),puVar14);
              iVar11 = *(int *)(unaff_EBP - 0x5c50);
              *(undefined4 *)(iVar11 + 0x28) = 3;
              uVar10 = rand();
              uVar10 = uVar10 & 0x80000001;
              if ((int)uVar10 < 0) {
                uVar10 = (uVar10 - 1 | 0xfffffffe) + 1;
              }
              *(uint *)(iVar11 + 0x2c) = uVar10 + 2;
              *(undefined4 *)(iVar11 + 0x34) = *(undefined4 *)(*(int *)(unaff_EBP - 0x5cbc) + 0x24);
              *(undefined1 *)(iVar11 + 0x30) = 0x83;
              FUN_004fde90(iVar11);
              pSVar31 = operator_new(0xc);
              *(SequentialBehavior **)(unaff_EBP - 0x5c48) = pSVar31;
              *(undefined1 *)(unaff_EBP - 4) = 0x4e;
              if (pSVar31 == (SequentialBehavior *)0x0) {
                *(undefined4 *)(unaff_EBP - 0x5c80) = 0;
              }
              else {
                pSVar31 = cube::SequentialBehavior::SequentialBehavior(pSVar31);
                *(SequentialBehavior **)(unaff_EBP - 0x5c80) = pSVar31;
              }
              *(undefined1 *)(unaff_EBP - 4) = 0x3d;
              pCVar32 = operator_new(0x14);
              *(CombatBehavior **)(unaff_EBP - 0x5c48) = pCVar32;
              *(undefined1 *)(unaff_EBP - 4) = 0x4f;
              if (pCVar32 == (CombatBehavior *)0x0) {
                pCVar32 = (CombatBehavior *)0x0;
              }
              else {
                pCVar32 = cube::CombatBehavior::CombatBehavior(pCVar32,0x41a00000);
              }
              *(CombatBehavior **)(unaff_EBP - 0x5c48) = pCVar32;
              pvVar17 = (void *)(*(int *)(unaff_EBP - 0x5c80) + 4);
              *(undefined1 *)(unaff_EBP - 4) = 0x3d;
              *(void **)(unaff_EBP - 0x5c74) = pvVar17;
              FUN_004d6620(pvVar17,(undefined4 *)(unaff_EBP - 0x5c48));
              pLVar33 = operator_new(4);
              *(LookAtPlayerBehavior **)(unaff_EBP - 0x5c48) = pLVar33;
              *(undefined1 *)(unaff_EBP - 4) = 0x50;
              if (pLVar33 == (LookAtPlayerBehavior *)0x0) {
                pLVar33 = (LookAtPlayerBehavior *)0x0;
              }
              else {
                pLVar33 = cube::LookAtPlayerBehavior::LookAtPlayerBehavior(pLVar33);
              }
              pvVar17 = *(void **)(unaff_EBP - 0x5c74);
              *(LookAtPlayerBehavior **)(unaff_EBP - 0x5c48) = pLVar33;
              *(undefined1 *)(unaff_EBP - 4) = 0x3d;
              FUN_004d6620(pvVar17,(undefined4 *)(unaff_EBP - 0x5c48));
              pWVar34 = operator_new(0x1c);
              *(WalkPathBehavior **)(unaff_EBP - 0x5c48) = pWVar34;
              *(undefined1 *)(unaff_EBP - 4) = 0x51;
              if (pWVar34 == (WalkPathBehavior *)0x0) {
                pWVar34 = (WalkPathBehavior *)0x0;
              }
              else {
                pWVar34 = cube::WalkPathBehavior::WalkPathBehavior(pWVar34,0x40000000);
              }
              *(WalkPathBehavior **)(unaff_EBP - 0x5c50) = pWVar34;
              *(undefined1 *)(unaff_EBP - 4) = 0x3d;
              FUN_004e1420(&pWVar34->WalkPathBehavior_data,(undefined4 *)(iVar11 + 0x10));
              pvVar17 = *(void **)(unaff_EBP - 0x5c74);
              goto LAB_004f0c69;
            }
          }
          else {
            uVar10 = rand();
            uVar10 = uVar10 & 0x80000001;
            if ((int)uVar10 < 0) {
              uVar10 = (uVar10 - 1 | 0xfffffffe) + 1;
            }
            *(uint *)(unaff_EBP - 0x5c74) = uVar10 + 1;
            if (0 < (int)(uVar10 + 1)) {
              bVar45 = FUN_004e28d0((int *)(unaff_EBP - 0x40));
              *(bool *)(unaff_EBP - 0x5d35) = bVar45;
              bVar45 = FUN_004e28d0((int *)(unaff_EBP - 0x5d80));
              *(bool *)(unaff_EBP - 0x5d36) = bVar45;
              bVar45 = FUN_004e28d0((int *)(unaff_EBP - 0x4c));
              *(bool *)(unaff_EBP - 0x5ce6) = bVar45;
              bVar45 = FUN_004e28d0((int *)(unaff_EBP - 0x5d58));
              *(bool *)(unaff_EBP - 0x5ce5) = bVar45;
              bVar45 = FUN_004e28d0((int *)(unaff_EBP - 0x5d64));
              *(bool *)(unaff_EBP - 0x5ca1) = bVar45;
              piVar26 = *(int **)(unaff_EBP - 0x5cc4);
              *(int *)(unaff_EBP - 0x5c80) = iVar9 + 0x18;
              do {
                pSVar30 = operator_new(0x10f0);
                if (pSVar30 == (Spawn *)0x0) {
                  pSVar30 = (Spawn *)0x0;
                }
                else {
                  pSVar30 = cube::Spawn::Spawn(pSVar30);
                }
                iVar9 = *piVar26;
                *(Spawn **)(unaff_EBP - 0x5cb0) = pSVar30;
                *(Spawn **)(unaff_EBP - 0x5cd8) = pSVar30;
                *(undefined1 **)(unaff_EBP - 0x5c58) = &(pSVar30->Spawn_data).field_0xc;
                uVar10 = FUN_00420020((int *)(iVar9 + 0x24));
                uVar40 = rand();
                puVar14 = (uint *)FUN_0041e2e0((void *)(*piVar26 + 0x24),uVar40 % uVar10);
                FUN_004d99d0(*(void **)(unaff_EBP - 0x5c58),puVar14);
                iVar9 = *(int *)(unaff_EBP - 0x5cb0);
                *(undefined4 *)(iVar9 + 0x28) = 3;
                *(undefined1 *)(iVar9 + 0x30) = 0x88;
                uVar10 = rand();
                uVar10 = uVar10 & 0x80000001;
                if ((int)uVar10 < 0) {
                  uVar10 = (uVar10 - 1 | 0xfffffffe) + 1;
                }
                cVar4 = *(char *)(unaff_EBP - 0x5d35);
                *(uint *)(iVar9 + 0x2c) = uVar10 + 2;
                *(undefined4 *)(iVar9 + 0x34) = *(undefined4 *)(*(int *)(unaff_EBP - 0x5cbc) + 0x24)
                ;
                if (cVar4 == '\0') {
                  uVar10 = rand();
                  uVar10 = uVar10 & 0x80000001;
                  bVar45 = uVar10 == 0;
                  if ((int)uVar10 < 0) {
                    bVar45 = (uVar10 - 1 | 0xfffffffe) == 0xffffffff;
                  }
                  if (bVar45) {
                    uVar10 = FUN_004f3840((int *)(unaff_EBP - 0x40));
                    puVar13 = (undefined4 *)
                              FUN_004e2350((void *)(unaff_EBP - 0x40),
                                           *(uint *)(unaff_EBP - 0x5c64) % uVar10);
                    FUN_004cde20((void *)(unaff_EBP - 0xb8),puVar13);
                    *(int *)(unaff_EBP - 0x5c64) = *(int *)(unaff_EBP - 0x5c64) + 1;
                    uVar58 = 0;
                    puVar13 = (undefined4 *)FUN_004013d0((void *)(unaff_EBP - 0xb8),1);
                    uVar12 = *puVar13;
                    puVar13 = (undefined4 *)FUN_004013d0((void *)(unaff_EBP - 0xb8),0);
                    puVar13 = FUN_00402990((void *)(unaff_EBP - 0x674),*puVar13,uVar12,uVar58);
                    FUN_00401060((void *)(iVar9 + 0x60),puVar13);
                    *(undefined4 *)(iVar9 + 0x5c) = 4;
                  }
                }
                iVar11 = rand();
                if (iVar11 % 10 == 0) {
                  *(undefined4 *)(iVar9 + 0x5c) = 3;
                }
                puVar13 = FUN_004e20d0((void *)(unaff_EBP - 0x1468),
                                       *(undefined4 **)(unaff_EBP - 0x5c58),0);
                FUN_004f2c50((void *)(iVar9 + 0x10a0),puVar13);
                iVar9 = rand();
                cVar4 = *(char *)(unaff_EBP - 0x5ca1);
                *(int *)(unaff_EBP - 0x5c8c) = (iVar9 % 0xb4 + 0x1a4) * 60000;
                if (cVar4 == '\0') {
                  uVar10 = FUN_00420020((int *)(unaff_EBP - 0x5d64));
                  uVar40 = rand();
                  puVar13 = (undefined4 *)FUN_0041e2e0((void *)(unaff_EBP - 0x5d64),uVar40 % uVar10)
                  ;
                  FUN_00401060((void *)(unaff_EBP - 0x28),puVar13);
                  FUN_004d99d0((void *)(unaff_EBP - 0x154),(uint *)(unaff_EBP - 0x28));
                  puVar13 = FUN_004e20d0((void *)(unaff_EBP - 0x1588),
                                         (undefined4 *)(unaff_EBP - 0x154),
                                         *(undefined4 *)(unaff_EBP - 0x5c8c));
                  iVar9 = *(int *)(unaff_EBP - 0x5cb0);
                  FUN_004f2c50((void *)(iVar9 + 0x10a0),puVar13);
                  iVar9 = FUN_004e2830(iVar9 + 0x10a0);
                  iVar9 = *(int *)(iVar9 + 0x18);
                  iVar11 = rand();
                  *(int *)(unaff_EBP - 0x5c8c) = (iVar11 % 0x3c + 0x3c) * 60000 + iVar9;
                }
                if (*(char *)(unaff_EBP - 0x5d36) == '\0') {
                  uVar10 = FUN_00420020((int *)(unaff_EBP - 0x5d80));
                  uVar40 = rand();
                  puVar13 = (undefined4 *)FUN_0041e2e0((void *)(unaff_EBP - 0x5d80),uVar40 % uVar10)
                  ;
                  FUN_00401060((void *)(unaff_EBP - 100),puVar13);
                  FUN_004d99d0((void *)(unaff_EBP - 0x214),(uint *)(unaff_EBP - 100));
                  puVar13 = FUN_004e20d0((void *)(unaff_EBP - 0x14c8),
                                         (undefined4 *)(unaff_EBP - 0x214),
                                         *(undefined4 *)(unaff_EBP - 0x5c8c));
                  iVar9 = *(int *)(unaff_EBP - 0x5cb0);
                  FUN_004f2c50((void *)(iVar9 + 0x10a0),puVar13);
                  iVar9 = FUN_004e2830(iVar9 + 0x10a0);
                  iVar9 = *(int *)(iVar9 + 0x18);
                  iVar11 = rand();
                  *(int *)(unaff_EBP - 0x5c8c) = (iVar11 % 0xb4 + 0x3c) * 60000 + iVar9;
                }
                if (*(char *)(unaff_EBP - 0x5ce5) == '\0') {
                  uVar10 = FUN_0041fff0((int *)(unaff_EBP - 0x5d58));
                  uVar40 = rand();
                  piVar18 = (int *)FUN_00402bb0((void *)(unaff_EBP - 0x5d58),uVar40 % uVar10);
                  piVar18 = (int *)(*piVar18 + 0x30);
                  *(int **)(unaff_EBP - 0x5c48) = piVar18;
                  bVar45 = FUN_004e28d0(piVar18);
                  if (!bVar45) {
                    uVar10 = FUN_00420020(piVar18);
                    uVar40 = rand();
                    puVar14 = (uint *)FUN_0041e2e0(*(void **)(unaff_EBP - 0x5c48),uVar40 % uVar10);
                    FUN_004d99d0((void *)(unaff_EBP - 0x22c),puVar14);
                    puVar13 = FUN_004e20d0((void *)(unaff_EBP - 0x1548),
                                           (undefined4 *)(unaff_EBP - 0x22c),
                                           *(undefined4 *)(unaff_EBP - 0x5c8c));
                    iVar9 = *(int *)(unaff_EBP - 0x5cb0);
                    FUN_004f2c50((void *)(iVar9 + 0x10a0),puVar13);
                    iVar9 = FUN_004e2830(iVar9 + 0x10a0);
                    iVar9 = *(int *)(iVar9 + 0x18);
                    iVar11 = rand();
                    *(int *)(unaff_EBP - 0x5c8c) = (iVar11 % 0x14) * 60000 + iVar9;
                  }
                }
                if (*(char *)(unaff_EBP - 0x5ca1) == '\0') {
                  uVar10 = FUN_00420020((int *)(unaff_EBP - 0x5d64));
                  uVar40 = rand();
                  puVar13 = (undefined4 *)FUN_0041e2e0((void *)(unaff_EBP - 0x5d64),uVar40 % uVar10)
                  ;
                  FUN_00401060((void *)(unaff_EBP - 0x58),puVar13);
                  FUN_004d99d0((void *)(unaff_EBP - 0x1fc),(uint *)(unaff_EBP - 0x58));
                  puVar13 = FUN_004e20d0((void *)(unaff_EBP - 0x1508),
                                         (undefined4 *)(unaff_EBP - 0x1fc),
                                         *(undefined4 *)(unaff_EBP - 0x5c8c));
                  iVar9 = *(int *)(unaff_EBP - 0x5cb0);
                  FUN_004f2c50((void *)(iVar9 + 0x10a0),puVar13);
                  iVar9 = FUN_004e2830(iVar9 + 0x10a0);
                  iVar9 = *(int *)(iVar9 + 0x18);
                  iVar11 = rand();
                  *(int *)(unaff_EBP - 0x5c8c) = (iVar11 % 0x3c + 0x3c) * 60000 + iVar9;
                }
                if (*(char *)(unaff_EBP - 0x5ce6) == '\0') {
                  uVar10 = FUN_0041fff0((int *)(unaff_EBP - 0x4c));
                  uVar40 = rand();
                  piVar18 = (int *)FUN_00402bb0((void *)(unaff_EBP - 0x4c),uVar40 % uVar10);
                  piVar18 = (int *)(*piVar18 + 0x30);
                  *(int **)(unaff_EBP - 0x5c48) = piVar18;
                  bVar45 = FUN_004e28d0(piVar18);
                  if (!bVar45) {
                    uVar10 = FUN_00420020(piVar18);
                    uVar40 = rand();
                    puVar14 = (uint *)FUN_0041e2e0(*(void **)(unaff_EBP - 0x5c48),uVar40 % uVar10);
                    FUN_004d99d0((void *)(unaff_EBP - 0x1cc),puVar14);
                    puVar13 = FUN_004e20d0((void *)(unaff_EBP - 0x1488),
                                           (undefined4 *)(unaff_EBP - 0x1cc),
                                           *(undefined4 *)(unaff_EBP - 0x5c8c));
                    iVar9 = *(int *)(unaff_EBP - 0x5cb0);
                    FUN_004f2c50((void *)(iVar9 + 0x10a0),puVar13);
                    iVar9 = FUN_004e2830(iVar9 + 0x10a0);
                    iVar9 = *(int *)(iVar9 + 0x18);
                    iVar11 = rand();
                    *(int *)(unaff_EBP - 0x5c8c) = (iVar11 % 0xb4 + 0x3c) * 60000 + iVar9;
                  }
                }
                if (*(char *)(unaff_EBP - 0x5ce5) == '\0') {
                  uVar10 = FUN_0041fff0((int *)(unaff_EBP - 0x5d58));
                  *(uint *)(unaff_EBP - 0x5cdc) = uVar10;
                  uVar40 = rand();
                  piVar18 = (int *)FUN_00402bb0((void *)(unaff_EBP - 0x5d58),uVar40 % uVar10);
                  piVar18 = (int *)(*piVar18 + 0x30);
                  *(int **)(unaff_EBP - 0x5c48) = piVar18;
                  bVar45 = FUN_004e28d0(piVar18);
                  if (!bVar45) {
                    uVar10 = FUN_00420020(piVar18);
                    uVar40 = rand();
                    puVar14 = (uint *)FUN_0041e2e0(*(void **)(unaff_EBP - 0x5c48),uVar40 % uVar10);
                    FUN_004d99d0((void *)(unaff_EBP - 0x19c),puVar14);
                    puVar13 = FUN_004e20d0((void *)(unaff_EBP - 0x14a8),
                                           (undefined4 *)(unaff_EBP - 0x19c),
                                           *(undefined4 *)(unaff_EBP - 0x5c8c));
                    iVar9 = *(int *)(unaff_EBP - 0x5cb0);
                    FUN_004f2c50((void *)(iVar9 + 0x10a0),puVar13);
                    iVar9 = FUN_004e2830(iVar9 + 0x10a0);
                    iVar9 = *(int *)(iVar9 + 0x18);
                    iVar11 = rand();
                    *(int *)(unaff_EBP - 0x5c8c) = (iVar11 % 0x1e) * 60000 + iVar9;
                  }
                  uVar10 = rand();
                  piVar18 = (int *)FUN_00402bb0((void *)(unaff_EBP - 0x5d58),
                                                uVar10 % *(uint *)(unaff_EBP - 0x5cdc));
                  piVar18 = (int *)(*piVar18 + 0x30);
                  *(int **)(unaff_EBP - 0x5c48) = piVar18;
                  bVar45 = FUN_004e28d0(piVar18);
                  if (!bVar45) {
                    uVar10 = FUN_00420020(piVar18);
                    uVar40 = rand();
                    puVar14 = (uint *)FUN_0041e2e0(*(void **)(unaff_EBP - 0x5c48),uVar40 % uVar10);
                    FUN_004d99d0((void *)(unaff_EBP - 0x184),puVar14);
                    puVar13 = FUN_004e20d0((void *)(unaff_EBP - 0x14e8),
                                           (undefined4 *)(unaff_EBP - 0x184),
                                           *(undefined4 *)(unaff_EBP - 0x5c8c));
                    iVar9 = *(int *)(unaff_EBP - 0x5cb0);
                    FUN_004f2c50((void *)(iVar9 + 0x10a0),puVar13);
                    iVar9 = FUN_004e2830(iVar9 + 0x10a0);
                    iVar9 = *(int *)(iVar9 + 0x18);
                    iVar11 = rand();
                    *(int *)(unaff_EBP - 0x5c8c) = (iVar11 % 0x1e) * 60000 + iVar9;
                  }
                }
                if (*(char *)(unaff_EBP - 0x5ca1) == '\0') {
                  uVar10 = FUN_00420020((int *)(unaff_EBP - 0x5d64));
                  uVar40 = rand();
                  puVar13 = (undefined4 *)FUN_0041e2e0((void *)(unaff_EBP - 0x5d64),uVar40 % uVar10)
                  ;
                  FUN_00401060((void *)(unaff_EBP - 0x1c),puVar13);
                  FUN_004d99d0((void *)(unaff_EBP - 0x16c),(uint *)(unaff_EBP - 0x1c));
                  puVar13 = FUN_004e20d0((void *)(unaff_EBP - 0x1528),
                                         (undefined4 *)(unaff_EBP - 0x16c),
                                         *(undefined4 *)(unaff_EBP - 0x5c8c));
                  iVar9 = *(int *)(unaff_EBP - 0x5cb0);
                  FUN_004f2c50((void *)(iVar9 + 0x10a0),puVar13);
                  iVar9 = FUN_004e2830(iVar9 + 0x10a0);
                  iVar9 = *(int *)(iVar9 + 0x18);
                  iVar11 = rand();
                  *(int *)(unaff_EBP - 0x5c8c) = (iVar11 % 0x3c + 0x3c) * 60000 + iVar9;
                }
                bVar45 = FUN_004e28d0((int *)(*piVar26 + 0x30));
                if (bVar45) {
                  iVar9 = *(int *)(unaff_EBP - 0x5c8c);
                }
                else {
                  rand();
                  puVar13 = FUN_004e20d0((void *)(unaff_EBP - 0x1568),
                                         *(undefined4 **)(unaff_EBP - 0x5c58),
                                         *(undefined4 *)(unaff_EBP - 0x5c8c));
                  iVar9 = *(int *)(unaff_EBP - 0x5cb0);
                  FUN_004f2c50((void *)(iVar9 + 0x10a0),puVar13);
                  iVar9 = FUN_004e2830(iVar9 + 0x10a0);
                  iVar9 = *(int *)(iVar9 + 0x18);
                  iVar11 = rand();
                  iVar9 = (iVar11 % 0x3c + 0x3c) * 60000 + iVar9;
                }
                puVar13 = FUN_004e20d0((void *)(unaff_EBP - 0x15a8),
                                       *(undefined4 **)(unaff_EBP - 0x5c58),iVar9 + 1800000);
                iVar9 = *(int *)(unaff_EBP - 0x5cb0);
                FUN_004f2c50((void *)(iVar9 + 0x10a0),puVar13);
                pSVar31 = operator_new(0xc);
                *(SequentialBehavior **)(unaff_EBP - 0x5c48) = pSVar31;
                *(undefined1 *)(unaff_EBP - 4) = 0x52;
                if (pSVar31 == (SequentialBehavior *)0x0) {
                  *(undefined4 *)(unaff_EBP - 0x5c54) = 0;
                }
                else {
                  pSVar31 = cube::SequentialBehavior::SequentialBehavior(pSVar31);
                  *(SequentialBehavior **)(unaff_EBP - 0x5c54) = pSVar31;
                }
                *(undefined1 *)(unaff_EBP - 4) = 0x3d;
                pCVar32 = operator_new(0x14);
                *(CombatBehavior **)(unaff_EBP - 0x5c48) = pCVar32;
                *(undefined1 *)(unaff_EBP - 4) = 0x53;
                if (pCVar32 == (CombatBehavior *)0x0) {
                  pCVar32 = (CombatBehavior *)0x0;
                }
                else {
                  pCVar32 = cube::CombatBehavior::CombatBehavior(pCVar32,0x41a00000);
                }
                *(CombatBehavior **)(unaff_EBP - 0x5c48) = pCVar32;
                iVar11 = *(int *)(unaff_EBP - 0x5c54);
                *(undefined1 *)(unaff_EBP - 4) = 0x3d;
                FUN_004d6620((void *)(iVar11 + 4),(undefined4 *)(unaff_EBP - 0x5c48));
                pLVar33 = operator_new(4);
                *(LookAtPlayerBehavior **)(unaff_EBP - 0x5c48) = pLVar33;
                *(undefined1 *)(unaff_EBP - 4) = 0x54;
                if (pLVar33 == (LookAtPlayerBehavior *)0x0) {
                  pLVar33 = (LookAtPlayerBehavior *)0x0;
                }
                else {
                  pLVar33 = cube::LookAtPlayerBehavior::LookAtPlayerBehavior(pLVar33);
                }
                iVar11 = *(int *)(unaff_EBP - 0x5c54);
                *(LookAtPlayerBehavior **)(unaff_EBP - 0x5c48) = pLVar33;
                *(undefined1 *)(unaff_EBP - 4) = 0x3d;
                FUN_004d6620((void *)(iVar11 + 4),(undefined4 *)(unaff_EBP - 0x5c48));
                pSVar35 = operator_new(4);
                if (pSVar35 == (SpawnLocationBehavior *)0x0) {
                  *(undefined4 *)(unaff_EBP - 0x5c50) = 0;
                }
                else {
                  pSVar35 = cube::SpawnLocationBehavior::SpawnLocationBehavior(pSVar35);
                  *(SpawnLocationBehavior **)(unaff_EBP - 0x5c50) = pSVar35;
                }
                FUN_004d6620((void *)(*(int *)(unaff_EBP - 0x5c54) + 4),
                             (undefined4 *)(unaff_EBP - 0x5c50));
                pRVar36 = operator_new(8);
                *(RandomInteractionBehavior **)(unaff_EBP - 0x5c48) = pRVar36;
                *(undefined1 *)(unaff_EBP - 4) = 0x55;
                if (pRVar36 == (RandomInteractionBehavior *)0x0) {
                  pRVar36 = (RandomInteractionBehavior *)0x0;
                }
                else {
                  pRVar36 = cube::RandomInteractionBehavior::RandomInteractionBehavior(pRVar36);
                }
                iVar11 = *(int *)(unaff_EBP - 0x5c54);
                *(RandomInteractionBehavior **)(unaff_EBP - 0x5c48) = pRVar36;
                *(undefined1 *)(unaff_EBP - 4) = 0x3d;
                FUN_004d6620((void *)(iVar11 + 4),(undefined4 *)(unaff_EBP - 0x5c48));
                pRVar37 = operator_new(8);
                *(RandomWalkBehavior **)(unaff_EBP - 0x5c48) = pRVar37;
                *(undefined1 *)(unaff_EBP - 4) = 0x56;
                if (pRVar37 == (RandomWalkBehavior *)0x0) {
                  pRVar37 = (RandomWalkBehavior *)0x0;
                }
                else {
                  pRVar37 = cube::RandomWalkBehavior::RandomWalkBehavior(pRVar37);
                }
                iVar11 = *(int *)(unaff_EBP - 0x5c54);
                *(RandomWalkBehavior **)(unaff_EBP - 0x5c48) = pRVar37;
                *(undefined1 *)(unaff_EBP - 4) = 0x3d;
                FUN_004d6620((void *)(iVar11 + 4),(undefined4 *)(unaff_EBP - 0x5c48));
                pvVar17 = *(void **)(unaff_EBP - 0x5c80);
                *(undefined4 *)(iVar9 + 0x109c) = *(undefined4 *)(unaff_EBP - 0x5c54);
                FUN_004f2be0(pvVar17,(undefined4 *)(unaff_EBP - 0x5cd8));
                piVar18 = (int *)(unaff_EBP - 0x5c74);
                *piVar18 = *piVar18 + -1;
              } while (*piVar18 != 0);
              iVar9 = *(int *)(unaff_EBP - 0x5c70);
            }
          }
        }
        FUN_004f79d0((void *)(unaff_EBP - 0x5c78),(int *)(unaff_EBP - 0x5c48));
        piVar26 = (int *)FUN_004d3de0((void *)(iVar9 + 0x88),(undefined4 *)(unaff_EBP - 0x5da0));
        bVar45 = FUN_0042c6f0((void *)(unaff_EBP - 0x5c78),piVar26);
      } while (bVar45);
    }
    FUN_0042f440((undefined4 *)(unaff_EBP - 0x40));
    goto LAB_004f2abd;
  }
  FUN_004e1eb0((undefined4 *)(unaff_EBP - 0x5d34));
  FUN_004e1eb0((undefined4 *)(unaff_EBP - 0x5d10));
  *(undefined1 *)(unaff_EBP - 4) = 0x58;
  if (iVar11 != 5) {
    *(undefined4 *)(unaff_EBP - 0x5c48) = 0xb;
    FUN_004f2be0((void *)(unaff_EBP - 0x5d10),(undefined4 *)(unaff_EBP - 0x5c48));
    *(undefined4 *)(unaff_EBP - 0x5c48) = 0xc;
    FUN_004f2be0((void *)(unaff_EBP - 0x5d10),(undefined4 *)(unaff_EBP - 0x5c48));
    FUN_004f7540((undefined4 *)(unaff_EBP - 0x34));
    *(undefined1 *)(unaff_EBP - 4) = 0x59;
LAB_004f1b70:
    *(undefined4 *)(unaff_EBP - 0x5c48) = 0x2e;
    FUN_004f2be0((void *)(unaff_EBP - 0x34),(undefined4 *)(unaff_EBP - 0x5c48));
    *(undefined4 *)(unaff_EBP - 0x5c48) = 0x13;
    goto code_r0x004f1b93;
  }
  iVar11 = *(int *)(unaff_EBP - 0x5cbc);
  switch(*(undefined4 *)(iVar11 + 0x1c)) {
  case 0:
    *(undefined4 *)(unaff_EBP - 0x5c48) = 0x29;
    FUN_004f2be0((void *)(unaff_EBP - 0x5d10),(undefined4 *)(unaff_EBP - 0x5c48));
    *(undefined4 *)(unaff_EBP - 0x5c48) = 0x11;
    FUN_004f2be0((void *)(unaff_EBP - 0x5d10),(undefined4 *)(unaff_EBP - 0x5c48));
    *(undefined4 *)(unaff_EBP - 0x5c48) = 0x60;
    FUN_004f2be0((void *)(unaff_EBP - 0x5d10),(undefined4 *)(unaff_EBP - 0x5c48));
    FUN_004f7540((undefined4 *)(unaff_EBP - 0x34));
    *(undefined1 *)(unaff_EBP - 4) = 0x5b;
    *(undefined4 *)(unaff_EBP - 0x5c48) = 0x29;
    FUN_004f2be0((void *)(unaff_EBP - 0x34),(undefined4 *)(unaff_EBP - 0x5c48));
    *(undefined4 *)(unaff_EBP - 0x5c48) = 0x11;
    FUN_004f2be0((void *)(unaff_EBP - 0x34),(undefined4 *)(unaff_EBP - 0x5c48));
    *(undefined4 *)(unaff_EBP - 0x5c48) = 0x60;
    FUN_004f2be0((void *)(unaff_EBP - 0x5d10),(undefined4 *)(unaff_EBP - 0x5c48));
    *(undefined4 *)(unaff_EBP - 0x5c48) = 0x3b;
    FUN_004f2be0((void *)(unaff_EBP - 0x28),(undefined4 *)(unaff_EBP - 0x5c48));
    *(undefined4 *)(unaff_EBP - 0x5c48) = 0x25;
    FUN_004f2be0((void *)(unaff_EBP - 0x28),(undefined4 *)(unaff_EBP - 0x5c48));
    *(undefined4 *)(unaff_EBP - 0x5c48) = 0x26;
    FUN_004f2be0((void *)(unaff_EBP - 0x28),(undefined4 *)(unaff_EBP - 0x5c48));
    *(undefined4 *)(unaff_EBP - 0x5c48) = 0x28;
    FUN_004f2be0((void *)(unaff_EBP - 0x28),(undefined4 *)(unaff_EBP - 0x5c48));
    *(undefined4 *)(unaff_EBP - 0x5c48) = 0x27;
    break;
  case 1:
    *(undefined4 *)(unaff_EBP - 0x5c48) = 9;
    FUN_004f2be0((void *)(unaff_EBP - 0x5d10),(undefined4 *)(unaff_EBP - 0x5c48));
    *(undefined4 *)(unaff_EBP - 0x5c48) = 10;
    FUN_004f2be0((void *)(unaff_EBP - 0x5d10),(undefined4 *)(unaff_EBP - 0x5c48));
    FUN_004f7540((undefined4 *)(unaff_EBP - 0x34));
    *(undefined1 *)(unaff_EBP - 4) = 0x5c;
    *(undefined4 *)(unaff_EBP - 0x5c48) = 9;
    FUN_004f2be0((void *)(unaff_EBP - 0x34),(undefined4 *)(unaff_EBP - 0x5c48));
    *(undefined4 *)(unaff_EBP - 0x5c48) = 10;
    FUN_004f2be0((void *)(unaff_EBP - 0x34),(undefined4 *)(unaff_EBP - 0x5c48));
    *(undefined4 *)(unaff_EBP - 0x5c48) = 0x16;
    FUN_004f2be0((void *)(unaff_EBP - 0x28),(undefined4 *)(unaff_EBP - 0x5c48));
    *(undefined4 *)(unaff_EBP - 0x5c48) = 0x37;
    break;
  case 2:
    *(undefined4 *)(unaff_EBP - 0x5c48) = 0x53;
    FUN_004f2be0((void *)(unaff_EBP - 0x5d10),(undefined4 *)(unaff_EBP - 0x5c48));
    *(undefined4 *)(unaff_EBP - 0x5c48) = 0x54;
    FUN_004f2be0((void *)(unaff_EBP - 0x5d10),(undefined4 *)(unaff_EBP - 0x5c48));
    FUN_004f7540((undefined4 *)(unaff_EBP - 0x34));
    *(undefined1 *)(unaff_EBP - 4) = 0x5d;
    *(undefined4 *)(unaff_EBP - 0x5c48) = 0x53;
    FUN_004f2be0((void *)(unaff_EBP - 0x34),(undefined4 *)(unaff_EBP - 0x5c48));
    *(undefined4 *)(unaff_EBP - 0x5c48) = 0x54;
    FUN_004f2be0((void *)(unaff_EBP - 0x34),(undefined4 *)(unaff_EBP - 0x5c48));
    *(undefined4 *)(unaff_EBP - 0x5c48) = 0x35;
    goto code_r0x004f197b;
  case 3:
    *(undefined4 *)(unaff_EBP - 0x5c48) = 0x4c;
    FUN_004f2be0((void *)(unaff_EBP - 0x5d10),(undefined4 *)(unaff_EBP - 0x5c48));
    FUN_004f7540((undefined4 *)(unaff_EBP - 0x34));
    *(undefined1 *)(unaff_EBP - 4) = 0x5e;
    *(undefined4 *)(unaff_EBP - 0x5c48) = 0x4c;
    FUN_004f2be0((void *)(unaff_EBP - 0x34),(undefined4 *)(unaff_EBP - 0x5c48));
    *(undefined4 *)(unaff_EBP - 0x5c48) = 0x3a;
code_r0x004f197b:
    FUN_004f2be0((void *)(unaff_EBP - 0x28),(undefined4 *)(unaff_EBP - 0x5c48));
    *(undefined4 *)(unaff_EBP - 0x5c48) = 0x3c;
    FUN_004f2be0((void *)(unaff_EBP - 0x28),(undefined4 *)(unaff_EBP - 0x5c48));
    FUN_005285c0((void *)(unaff_EBP - 0x5d34),(int *)(unaff_EBP - 0x34));
    func_0x004dafd0();
    func_0x004dafd0();
    *(undefined4 *)(unaff_EBP - 0x5c48) = 0x51;
    pvVar17 = (void *)(unaff_EBP - 0x34);
    goto code_r0x004f1b96;
  case 4:
    *(undefined4 *)(unaff_EBP - 0x5c48) = 0xf;
    FUN_004f2be0((void *)(unaff_EBP - 0x5d10),(undefined4 *)(unaff_EBP - 0x5c48));
    *(undefined4 *)(unaff_EBP - 0x5c48) = 0x10;
    FUN_004f2be0((void *)(unaff_EBP - 0x5d10),(undefined4 *)(unaff_EBP - 0x5c48));
    FUN_004f7540((undefined4 *)(unaff_EBP - 0x34));
    *(undefined1 *)(unaff_EBP - 4) = 0x5f;
    *(undefined4 *)(unaff_EBP - 0x5c48) = 0xf;
    FUN_004f2be0((void *)(unaff_EBP - 0x34),(undefined4 *)(unaff_EBP - 0x5c48));
    *(undefined4 *)(unaff_EBP - 0x5c48) = 0x10;
    FUN_004f2be0((void *)(unaff_EBP - 0x34),(undefined4 *)(unaff_EBP - 0x5c48));
    *(undefined4 *)(unaff_EBP - 0x5c48) = 0x60;
    FUN_004f2be0((void *)(unaff_EBP - 0x28),(undefined4 *)(unaff_EBP - 0x5c48));
    FUN_005285c0((void *)(unaff_EBP - 0x5d34),(int *)(unaff_EBP - 0x34));
    FUN_004f77a0((undefined4 *)(unaff_EBP - 0x34));
    iVar11 = *(int *)(iVar11 + 0x20) % 3;
    puVar13 = (undefined4 *)(unaff_EBP - 0x34);
    if (iVar11 == 1) {
      FUN_004f7540(puVar13);
      *(undefined1 *)(unaff_EBP - 4) = 0x61;
      *(undefined4 *)(unaff_EBP - 0x5c48) = 0x5e;
      pvVar17 = (void *)(unaff_EBP - 0x34);
    }
    else if (iVar11 == 2) {
      FUN_004f7540(puVar13);
      *(undefined1 *)(unaff_EBP - 4) = 0x62;
      *(undefined4 *)(unaff_EBP - 0x5c48) = 0x11;
      pvVar17 = (void *)(unaff_EBP - 0x34);
    }
    else {
      FUN_004f7540(puVar13);
      *(undefined1 *)(unaff_EBP - 4) = 0x60;
      *(undefined4 *)(unaff_EBP - 0x5c48) = 0x61;
      pvVar17 = (void *)(unaff_EBP - 0x34);
    }
    goto code_r0x004f1b96;
  default:
    *(undefined4 *)(unaff_EBP - 0x5c48) = 0xb;
    FUN_004f2be0((void *)(unaff_EBP - 0x5d10),(undefined4 *)(unaff_EBP - 0x5c48));
    *(undefined4 *)(unaff_EBP - 0x5c48) = 0xc;
    FUN_004f2be0((void *)(unaff_EBP - 0x5d10),(undefined4 *)(unaff_EBP - 0x5c48));
    FUN_004f7540((undefined4 *)(unaff_EBP - 0x34));
    *(undefined1 *)(unaff_EBP - 4) = 0x5a;
    goto LAB_004f1b70;
  }
code_r0x004f1b93:
  pvVar17 = (void *)(unaff_EBP - 0x28);
code_r0x004f1b96:
  FUN_004f2be0(pvVar17,(undefined4 *)(unaff_EBP - 0x5c48));
  FUN_005285c0((void *)(unaff_EBP - 0x5d34),(int *)(unaff_EBP - 0x34));
  *(undefined1 *)(unaff_EBP - 4) = 0x58;
  FUN_004f77a0((undefined4 *)(unaff_EBP - 0x34));
  iVar11 = *(int *)(unaff_EBP - 0x5ccc);
  iVar57 = 0;
  *(undefined4 *)(unaff_EBP - 0x5cb0) = 0;
  if (0 < iVar11) {
    *(undefined4 *)(unaff_EBP - 0x5cc0) = 0;
    do {
      iVar41 = 0;
      *(undefined4 *)(unaff_EBP - 0x5cc4) = 0;
      *(int *)(unaff_EBP - 0x5c88) = iVar57;
      *(int *)(unaff_EBP - 0x5ca0) = iVar11;
      do {
        iVar11 = FUN_004e2330((void *)(unaff_EBP - 0x5d28),iVar57);
        if (*(int *)(iVar11 + 0xc) == 0x14) {
          bVar45 = FUN_004e28d0((int *)(unaff_EBP - 0x5d10));
          if (!bVar45) {
            *(int *)(unaff_EBP - 0x5c50) = *(int *)(unaff_EBP - 0x5ce4) / 2;
            piVar26 = (int *)FUN_004013d0((void *)(iVar9 + 0x60),0);
            *(int *)(unaff_EBP - 0x5c58) =
                 *(int *)(unaff_EBP - 0x5cc0) / *(int *)(unaff_EBP - 0x5ccc) +
                 *piVar26 * 0x100 + *(int *)(unaff_EBP - 0x5c50);
            piVar26 = (int *)FUN_004013d0((void *)(iVar9 + 0x60),1);
            iVar9 = *(int *)(unaff_EBP - 0x5c70);
            pvVar17 = *(void **)(unaff_EBP - 0x5c68);
            uVar40 = *(int *)(unaff_EBP - 0x5cc4) / *(int *)(unaff_EBP - 0x5ccc) +
                     *piVar26 * 0x100 + *(int *)(unaff_EBP - 0x5c50);
            uVar10 = *(uint *)(unaff_EBP - 0x5c58);
            *(uint *)(unaff_EBP - 0x5c64) = uVar40;
            iVar11 = FUN_00406100(pvVar17,uVar10,uVar40,iVar9);
            if (iVar11 != 0) {
              iVar11 = FUN_0052d860(iVar11);
              uVar10 = *(uint *)(unaff_EBP - 0x5c64);
              uVar40 = *(uint *)(unaff_EBP - 0x5c58);
              *(int *)(unaff_EBP - 0x5c80) = iVar11;
              puVar16 = FUN_00405fd0(pvVar17,uVar40,uVar10,iVar11,iVar9);
              uVar12 = FUN_004061f0((int)puVar16);
              cVar4 = (char)uVar12;
              while (cVar4 != '\0') {
                iVar11 = *(int *)(unaff_EBP - 0x5c80) + 1;
                uVar10 = *(uint *)(unaff_EBP - 0x5c64);
                uVar40 = *(uint *)(unaff_EBP - 0x5c58);
                *(int *)(unaff_EBP - 0x5c80) = iVar11;
                puVar16 = FUN_00405fd0(pvVar17,uVar40,uVar10,iVar11,iVar9);
                uVar12 = FUN_004061f0((int)puVar16);
                cVar4 = (char)uVar12;
              }
              uVar58 = 0x10f0;
              uVar12 = 0x4f1d0b;
              pSVar30 = operator_new(0x10f0);
              if (pSVar30 == (Spawn *)0x0) {
                pSVar30 = (Spawn *)0x0;
                *(undefined4 *)(unaff_EBP - 0x5c50) = 0;
              }
              else {
                uVar58 = 0x4f1d19;
                pSVar30 = cube::Spawn::Spawn(pSVar30);
                *(Spawn **)(unaff_EBP - 0x5c50) = pSVar30;
              }
              uVar40 = *(int *)(unaff_EBP - 0x5c80) + 1;
              *(Spawn **)(unaff_EBP - 0x5cd8) = pSVar30;
              uVar55 = 0x4f1d43;
              FUN_004cde40(&stack0xfffffff8,uVar40);
              uVar10 = *(uint *)(unaff_EBP - 0x5c64);
              uVar51 = 0x4f1d53;
              FUN_004cde40(&stack0xfffffff0,uVar10);
              FUN_004cde40(&stack0xffffffe8,*(uint *)(unaff_EBP - 0x5c58));
              puVar13 = FUN_00406380((void *)(unaff_EBP - 0xdc0),uVar51,uVar10,uVar55,uVar40,uVar12,
                                     uVar58);
              FUN_00402a40(&(pSVar30->Spawn_data).field_0xc,puVar13);
              iVar57 = rand();
              iVar11 = *(int *)(unaff_EBP - 0x5cbc);
              (pSVar30->Spawn_data).offset_0x50 = ((float)iVar57 * 360.0) / 32767.0;
              (pSVar30->Spawn_data).offset_0x30 = *(undefined4 *)(iVar11 + 0x24);
              (pSVar30->Spawn_data).offset_0x24 = 1;
              uVar10 = FUN_0041fff0((int *)(unaff_EBP - 0x5d10));
              uVar40 = rand();
              puVar13 = (undefined4 *)FUN_00402bb0((void *)(unaff_EBP - 0x5d10),uVar40 % uVar10);
              iVar11 = *(int *)(unaff_EBP - 0x5c50);
              *(undefined4 *)(iVar11 + 0x2c) = *puVar13;
              *(undefined1 *)(iVar11 + 0x58) = *(undefined1 *)(*(int *)(unaff_EBP - 0x5cbc) + 0x28);
              *(ushort *)(iVar11 + 0x7a) = *(ushort *)(iVar11 + 0x7a) | 0x1000;
              *(undefined1 *)(iVar11 + 0x10e8) = 1;
              *(ushort *)(iVar11 + 0x7a) = *(ushort *)(iVar11 + 0x7a) | 0x200;
              pSVar31 = operator_new(0xc);
              *(SequentialBehavior **)(unaff_EBP - 0x5c48) = pSVar31;
              *(undefined1 *)(unaff_EBP - 4) = 99;
              if (pSVar31 == (SequentialBehavior *)0x0) {
                *(undefined4 *)(unaff_EBP - 0x5c80) = 0;
              }
              else {
                pSVar31 = cube::SequentialBehavior::SequentialBehavior(pSVar31);
                *(SequentialBehavior **)(unaff_EBP - 0x5c80) = pSVar31;
              }
              *(undefined1 *)(unaff_EBP - 4) = 0x58;
              pCVar32 = operator_new(0x14);
              *(CombatBehavior **)(unaff_EBP - 0x5c48) = pCVar32;
              *(undefined1 *)(unaff_EBP - 4) = 100;
              if (pCVar32 == (CombatBehavior *)0x0) {
                pCVar32 = (CombatBehavior *)0x0;
              }
              else {
                pCVar32 = cube::CombatBehavior::CombatBehavior(pCVar32,0x41a00000);
              }
              *(CombatBehavior **)(unaff_EBP - 0x5c48) = pCVar32;
              pvVar17 = (void *)(*(int *)(unaff_EBP - 0x5c80) + 4);
              *(undefined1 *)(unaff_EBP - 4) = 0x58;
              *(void **)(unaff_EBP - 0x5cdc) = pvVar17;
              FUN_004d6620(pvVar17,(undefined4 *)(unaff_EBP - 0x5c48));
              pWVar34 = operator_new(0x1c);
              *(WalkPathBehavior **)(unaff_EBP - 0x5c48) = pWVar34;
              *(undefined1 *)(unaff_EBP - 4) = 0x65;
              if (pWVar34 == (WalkPathBehavior *)0x0) {
                pWVar34 = (WalkPathBehavior *)0x0;
              }
              else {
                pWVar34 = cube::WalkPathBehavior::WalkPathBehavior(pWVar34,0x40000000);
              }
              *(WalkPathBehavior **)(unaff_EBP - 0x5c50) = pWVar34;
              *(undefined1 *)(unaff_EBP - 4) = 0x58;
              FUN_004e1420(&pWVar34->WalkPathBehavior_data,(undefined4 *)(iVar11 + 0x10));
              pvVar17 = *(void **)(unaff_EBP - 0x5cdc);
              *(undefined4 *)(unaff_EBP - 0x5c48) = *(undefined4 *)(unaff_EBP - 0x5c50);
              FUN_004d6620(pvVar17,(undefined4 *)(unaff_EBP - 0x5c48));
              *(undefined4 *)(iVar11 + 0x109c) = *(undefined4 *)(unaff_EBP - 0x5c80);
              FUN_004f2be0((void *)(iVar9 + 0x18),(undefined4 *)(unaff_EBP - 0x5cd8));
            }
LAB_004f21a1:
            iVar41 = *(int *)(unaff_EBP - 0x5cc4);
          }
        }
        else if ((*(int *)(iVar11 + 0xc) != 2) && (0.2 < *(float *)(iVar11 + 0x18))) {
          *(undefined4 *)(unaff_EBP - 0x5c7c) = 0;
          *(undefined4 *)(unaff_EBP - 0x14) = 2;
          do {
            *(undefined4 *)(unaff_EBP - 0x5c64) = 0;
            *(undefined4 *)(unaff_EBP - 0x5c74) = 2;
            do {
              iVar11 = rand();
              if (iVar11 % 5 == 0) {
                *(int *)(unaff_EBP - 0x5c50) =
                     (int)(*(int *)(unaff_EBP - 0x5ce4) +
                          (*(int *)(unaff_EBP - 0x5ce4) >> 0x1f & 3U)) >> 2;
                piVar26 = (int *)FUN_004013d0((void *)(iVar9 + 0x60),0);
                iVar9 = *(int *)(unaff_EBP - 0x5c70);
                *(int *)(unaff_EBP - 0x5c54) =
                     *(int *)(unaff_EBP - 0x5c7c) / 2 +
                     *(int *)(unaff_EBP - 0x5cc0) / *(int *)(unaff_EBP - 0x5ccc) +
                     *(int *)(unaff_EBP - 0x5c50) + *piVar26 * 0x100;
                piVar26 = (int *)FUN_004013d0((void *)(iVar9 + 0x60),1);
                *(int *)(unaff_EBP - 0x5c58) =
                     *(int *)(unaff_EBP - 0x5c64) / 2 +
                     *(int *)(unaff_EBP - 0x5cc4) / *(int *)(unaff_EBP - 0x5ccc) +
                     *(int *)(unaff_EBP - 0x5c50) + *piVar26 * 0x100;
                bVar45 = FUN_004e28d0((int *)(unaff_EBP - 0x5d10));
                if (!bVar45) {
                  pvVar17 = *(void **)(unaff_EBP - 0x5c68);
                  iVar11 = FUN_00406100(pvVar17,*(uint *)(unaff_EBP - 0x5c54),
                                        *(uint *)(unaff_EBP - 0x5c58),iVar9);
                  if (iVar11 != 0) {
                    iVar11 = FUN_0052d860(iVar11);
                    uVar10 = *(uint *)(unaff_EBP - 0x5c58);
                    uVar40 = *(uint *)(unaff_EBP - 0x5c54);
                    *(int *)(unaff_EBP - 0x5c80) = iVar11;
                    puVar16 = FUN_00405fd0(pvVar17,uVar40,uVar10,iVar11,iVar9);
                    uVar12 = FUN_004061f0((int)puVar16);
                    cVar4 = (char)uVar12;
                    while (cVar4 != '\0') {
                      iVar11 = *(int *)(unaff_EBP - 0x5c80) + 1;
                      uVar10 = *(uint *)(unaff_EBP - 0x5c58);
                      uVar40 = *(uint *)(unaff_EBP - 0x5c54);
                      *(int *)(unaff_EBP - 0x5c80) = iVar11;
                      puVar16 = FUN_00405fd0(pvVar17,uVar40,uVar10,iVar11,iVar9);
                      uVar12 = FUN_004061f0((int)puVar16);
                      cVar4 = (char)uVar12;
                    }
                    uVar58 = 0x10f0;
                    uVar12 = 0x4f2087;
                    pSVar30 = operator_new(0x10f0);
                    if (pSVar30 == (Spawn *)0x0) {
                      pSVar30 = (Spawn *)0x0;
                      *(undefined4 *)(unaff_EBP - 0x5c50) = 0;
                    }
                    else {
                      uVar58 = 0x4f2095;
                      pSVar30 = cube::Spawn::Spawn(pSVar30);
                      *(Spawn **)(unaff_EBP - 0x5c50) = pSVar30;
                    }
                    uVar40 = *(int *)(unaff_EBP - 0x5c80) + 1;
                    *(Spawn **)(unaff_EBP - 0x5c48) = pSVar30;
                    uVar55 = 0x4f20bf;
                    FUN_004cde40(&stack0xfffffff8,uVar40);
                    uVar10 = *(uint *)(unaff_EBP - 0x5c58);
                    uVar51 = 0x4f20cf;
                    FUN_004cde40(&stack0xfffffff0,uVar10);
                    FUN_004cde40(&stack0xffffffe8,*(uint *)(unaff_EBP - 0x5c54));
                    puVar13 = FUN_00406380((void *)(unaff_EBP - 0xfd0),uVar51,uVar10,uVar55,uVar40,
                                           uVar12,uVar58);
                    FUN_00402a40(&(pSVar30->Spawn_data).field_0xc,puVar13);
                    iVar57 = rand();
                    iVar11 = *(int *)(unaff_EBP - 0x5cbc);
                    (pSVar30->Spawn_data).offset_0x50 = ((float)iVar57 * 360.0) / 32767.0;
                    (pSVar30->Spawn_data).offset_0x30 = *(undefined4 *)(iVar11 + 0x24);
                    (pSVar30->Spawn_data).offset_0x24 = 1;
                    puVar20 = &(pSVar30->Spawn_data).field_0x76;
                    *(ushort *)puVar20 = *(ushort *)puVar20 | 0x1000;
                    uVar10 = FUN_0041fff0((int *)(unaff_EBP - 0x5d10));
                    uVar40 = rand();
                    puVar13 = (undefined4 *)
                              FUN_00402bb0((void *)(unaff_EBP - 0x5d10),uVar40 % uVar10);
                    iVar11 = *(int *)(unaff_EBP - 0x5c50);
                    *(undefined4 *)(iVar11 + 0x2c) = *puVar13;
                    *(undefined1 *)(iVar11 + 0x58) =
                         *(undefined1 *)(*(int *)(unaff_EBP - 0x5cbc) + 0x28);
                    FUN_004f2be0((void *)(iVar9 + 0x18),(undefined4 *)(unaff_EBP - 0x5c48));
                  }
                }
              }
              iVar11 = *(int *)(unaff_EBP - 0x5ce4);
              *(int *)(unaff_EBP - 0x5c64) = *(int *)(unaff_EBP - 0x5c64) + iVar11;
              piVar26 = (int *)(unaff_EBP - 0x5c74);
              *piVar26 = *piVar26 + -1;
            } while (*piVar26 != 0);
            *(int *)(unaff_EBP - 0x5c7c) = *(int *)(unaff_EBP - 0x5c7c) + iVar11;
            piVar26 = (int *)(unaff_EBP - 0x14);
            *piVar26 = *piVar26 + -1;
          } while (*piVar26 != 0);
          goto LAB_004f21a1;
        }
        iVar11 = *(int *)(unaff_EBP - 0x5ccc);
        iVar57 = *(int *)(unaff_EBP - 0x5c88) + iVar11;
        iVar41 = iVar41 + 0x100;
        piVar26 = (int *)(unaff_EBP - 0x5ca0);
        *piVar26 = *piVar26 + -1;
        iVar23 = *piVar26;
        *(int *)(unaff_EBP - 0x5c88) = iVar57;
        *(int *)(unaff_EBP - 0x5cc4) = iVar41;
      } while (iVar23 != 0);
      iVar57 = *(int *)(unaff_EBP - 0x5cb0);
      *(int *)(unaff_EBP - 0x5cc0) = *(int *)(unaff_EBP - 0x5cc0) + 0x100;
      iVar57 = iVar57 + 1;
      *(int *)(unaff_EBP - 0x5cb0) = iVar57;
    } while (iVar57 < iVar11);
  }
  FUN_00530550((void *)(iVar9 + 0x88),(undefined4 *)(unaff_EBP - 0x5c58));
  piVar26 = (int *)FUN_004d3de0((void *)(iVar9 + 0x88),(undefined4 *)(unaff_EBP - 0x5d40));
  bVar45 = FUN_0042c6f0((void *)(unaff_EBP - 0x5c58),piVar26);
  if (bVar45) {
    do {
      piVar26 = (int *)FUN_004ce1f0((undefined4 *)(unaff_EBP - 0x5c58));
      iVar11 = *piVar26;
      bVar45 = FUN_004e28d0((int *)(iVar11 + 0x24));
      if (!bVar45) {
        FUN_004e1ed0((void *)(unaff_EBP - 0x40),(int *)(iVar11 + 0x24));
        *(undefined1 *)(unaff_EBP - 4) = 0x66;
        bVar45 = FUN_004e28d0((int *)(unaff_EBP - 0x5d10));
        if (!bVar45) {
          iVar11 = rand();
          *(undefined4 *)(unaff_EBP - 0x5c54) = 0;
          *(int *)(unaff_EBP - 0x5ca0) = iVar11 % 3;
          if (0 < iVar11 % 3) {
            do {
              bVar45 = FUN_004e28d0((int *)(unaff_EBP - 0x40));
              if (bVar45) break;
              uVar10 = FUN_00420020((int *)(unaff_EBP - 0x40));
              uVar40 = rand();
              uVar40 = uVar40 % uVar10;
              puVar14 = (uint *)FUN_0041e2e0((void *)(unaff_EBP - 0x40),uVar40);
              FUN_004d99d0((void *)(unaff_EBP - 0x1e4),puVar14);
              piVar26 = (int *)(unaff_EBP - 0x5de8);
              pvVar17 = (void *)FUN_00530550((void *)(unaff_EBP - 0x40),
                                             (undefined4 *)(unaff_EBP - 0x5de4));
              piVar26 = (int *)FUN_004ce270(pvVar17,piVar26,uVar40);
              FUN_004d4470((void *)(unaff_EBP - 0x40),(int *)(unaff_EBP - 0x5c48),*piVar26);
              iVar11 = rand();
              iVar11 = iVar11 % 3 + 2;
              *(int *)(unaff_EBP - 0x5cc4) = iVar11;
              if (0 < iVar11) {
                *(double *)(unaff_EBP - 0x5cb4) = (double)iVar11;
                pvVar17 = (void *)FUN_004e2320((void *)(unaff_EBP - 0x1e4),2);
                *(void **)(unaff_EBP - 0x5c88) = pvVar17;
                iVar11 = FUN_004e2320((void *)(unaff_EBP - 0x1e4),1);
                *(int *)(unaff_EBP - 0x5cdc) = iVar11;
                iVar11 = FUN_004e2320((void *)(unaff_EBP - 0x1e4),0);
                *(int *)(unaff_EBP - 0x5cd8) = iVar11;
                iVar11 = FUN_0041fff0((int *)(unaff_EBP - 0x5d10));
                *(int *)(unaff_EBP - 0x5cc0) = iVar11;
                *(int *)(unaff_EBP - 0x14) = iVar9 + 0x18;
                iVar9 = 0;
                *(undefined4 *)(unaff_EBP - 0x5c74) = 0;
                do {
                  *(float *)(unaff_EBP - 0x5c80) =
                       (float)(((double)iVar9 * 3.141592653589793) / *(double *)(unaff_EBP - 0x5cb4)
                              );
                  pSVar30 = operator_new(0x10f0);
                  if (pSVar30 == (Spawn *)0x0) {
                    pSVar30 = (Spawn *)0x0;
                  }
                  else {
                    pSVar30 = cube::Spawn::Spawn(pSVar30);
                  }
                  *(Spawn **)(unaff_EBP - 0x5c64) = pSVar30;
                  *(Spawn **)(unaff_EBP - 0x5c7c) = pSVar30;
                  puVar13 = (undefined4 *)FUN_00405690(pvVar17,(int *)(unaff_EBP - 0x67e0),1);
                  fVar46 = FUN_004024c0(*(float *)(unaff_EBP - 0x5c80));
                  *(float *)(unaff_EBP - 0x5c48) = (float)fVar46;
                  puVar19 = (undefined4 *)
                            FUN_00401530(*(void **)(unaff_EBP - 0x5cdc),(int *)(unaff_EBP - 0x67f0))
                  ;
                  fVar46 = FUN_004024a0(*(float *)(unaff_EBP - 0x5c80));
                  *(float *)(unaff_EBP - 0x5c48) = (float)fVar46;
                  puVar38 = (undefined4 *)
                            FUN_00401530(*(void **)(unaff_EBP - 0x5cd8),(int *)(unaff_EBP - 0x6800))
                  ;
                  uVar12 = puVar13[1];
                  uVar58 = *puVar13;
                  uVar51 = puVar19[1];
                  *(int *)(unaff_EBP - 0x5c48) = *(int *)(unaff_EBP - 0x5c64) + 0x10;
                  puVar13 = FUN_00406380((void *)(unaff_EBP - 0x1000),*puVar38,puVar38[1],*puVar19,
                                         uVar51,uVar58,uVar12);
                  FUN_00402a40(*(void **)(unaff_EBP - 0x5c48),puVar13);
                  iVar9 = *(int *)(unaff_EBP - 0x5c64);
                  iVar11 = *(int *)(unaff_EBP - 0x5cbc);
                  *(float *)(iVar9 + 0x54) =
                       (*(float *)(unaff_EBP - 0x5c80) / 3.1415927) * 180.0 + 90.0;
                  *(undefined4 *)(iVar9 + 0x34) = *(undefined4 *)(iVar11 + 0x24);
                  *(undefined4 *)(iVar9 + 0x28) = 1;
                  *(ushort *)(iVar9 + 0x7a) = *(ushort *)(iVar9 + 0x7a) | 0x1000;
                  uVar10 = rand();
                  puVar13 = (undefined4 *)
                            FUN_00402bb0((void *)(unaff_EBP - 0x5d10),
                                         uVar10 % *(uint *)(unaff_EBP - 0x5cc0));
                  *(undefined4 *)(iVar9 + 0x2c) = *puVar13;
                  *(undefined1 *)(iVar9 + 0x58) = *(undefined1 *)(iVar11 + 0x28);
                  pSVar31 = operator_new(0xc);
                  *(SequentialBehavior **)(unaff_EBP - 0x5c48) = pSVar31;
                  *(undefined1 *)(unaff_EBP - 4) = 0x67;
                  if (pSVar31 == (SequentialBehavior *)0x0) {
                    pSVar31 = (SequentialBehavior *)0x0;
                    *(undefined4 *)(unaff_EBP - 0x5c50) = 0;
                  }
                  else {
                    pSVar31 = cube::SequentialBehavior::SequentialBehavior(pSVar31);
                    *(SequentialBehavior **)(unaff_EBP - 0x5c50) = pSVar31;
                  }
                  *(undefined1 *)(unaff_EBP - 4) = 0x66;
                  pCVar32 = operator_new(0x14);
                  *(CombatBehavior **)(unaff_EBP - 0x5c48) = pCVar32;
                  *(undefined1 *)(unaff_EBP - 4) = 0x68;
                  if (pCVar32 == (CombatBehavior *)0x0) {
                    pCVar32 = (CombatBehavior *)0x0;
                  }
                  else {
                    pCVar32 = cube::CombatBehavior::CombatBehavior(pCVar32,0x41a00000);
                  }
                  *(CombatBehavior **)(unaff_EBP - 0x5c48) = pCVar32;
                  *(undefined1 *)(unaff_EBP - 4) = 0x66;
                  *(SequentialBehavior_data **)(unaff_EBP - 0x5c80) =
                       &pSVar31->SequentialBehavior_data;
                  FUN_004d6620(&pSVar31->SequentialBehavior_data,(undefined4 *)(unaff_EBP - 0x5c48))
                  ;
                  pWVar34 = operator_new(0x1c);
                  *(WalkPathBehavior **)(unaff_EBP - 0x5c48) = pWVar34;
                  *(undefined1 *)(unaff_EBP - 4) = 0x69;
                  if (pWVar34 == (WalkPathBehavior *)0x0) {
                    pWVar34 = (WalkPathBehavior *)0x0;
                  }
                  else {
                    pWVar34 = cube::WalkPathBehavior::WalkPathBehavior(pWVar34,0x40000000);
                  }
                  *(undefined1 *)(unaff_EBP - 4) = 0x66;
                  FUN_004e1420(&pWVar34->WalkPathBehavior_data,(undefined4 *)(iVar9 + 0x10));
                  pvVar17 = *(void **)(unaff_EBP - 0x5c80);
                  *(WalkPathBehavior **)(unaff_EBP - 0x5c48) = pWVar34;
                  FUN_004d6620(pvVar17,(undefined4 *)(unaff_EBP - 0x5c48));
                  *(undefined4 *)(iVar9 + 0x109c) = *(undefined4 *)(unaff_EBP - 0x5c50);
                  uVar10 = rand();
                  uVar10 = uVar10 & 0x80000001;
                  if ((int)uVar10 < 0) {
                    uVar10 = (uVar10 - 1 | 0xfffffffe) + 1;
                  }
                  FUN_00406fd0((undefined2 *)(unaff_EBP - 7000));
                  *(undefined2 *)(unaff_EBP - 0x1b48) = *(undefined2 *)(iVar9 + 0x34);
                  *(undefined2 *)(unaff_EBP - 7000) = 0x101;
                  if (0 < (int)uVar10) {
                    do {
                      FUN_00427000((void *)(iVar9 + 0xf6c),(char *)(unaff_EBP - 7000),-1);
                      uVar10 = uVar10 - 1;
                    } while (uVar10 != 0);
                  }
                  FUN_004f2be0(*(void **)(unaff_EBP - 0x14),(undefined4 *)(unaff_EBP - 0x5c7c));
                  pvVar17 = *(void **)(unaff_EBP - 0x5c88);
                  iVar9 = *(int *)(unaff_EBP - 0x5c74) + 2;
                  piVar26 = (int *)(unaff_EBP - 0x5cc4);
                  *piVar26 = *piVar26 + -1;
                  iVar11 = *piVar26;
                  *(int *)(unaff_EBP - 0x5c74) = iVar9;
                } while (iVar11 != 0);
              }
              iVar9 = *(int *)(unaff_EBP - 0x5c70);
              iVar11 = *(int *)(unaff_EBP - 0x5c54) + 1;
              *(int *)(unaff_EBP - 0x5c54) = iVar11;
            } while (iVar11 < *(int *)(unaff_EBP - 0x5ca0));
          }
        }
        bVar45 = FUN_004e28d0((int *)(unaff_EBP - 0x5d34));
        pcVar43 = rand_exref;
        if (!bVar45) {
          uVar10 = rand();
          uVar10 = uVar10 & 0x80000001;
          if ((int)uVar10 < 0) {
            uVar10 = (uVar10 - 1 | 0xfffffffe) + 1;
          }
          *(uint *)(unaff_EBP - 0x5c64) = uVar10;
          *(undefined4 *)(unaff_EBP - 0x5c74) = 0;
          if (0 < (int)uVar10) {
            do {
              bVar45 = FUN_004e28d0((int *)(unaff_EBP - 0x40));
              if (bVar45) break;
              uVar10 = FUN_00420020((int *)(unaff_EBP - 0x40));
              uVar40 = (*pcVar43)();
              uVar40 = uVar40 % uVar10;
              puVar14 = (uint *)FUN_0041e2e0((void *)(unaff_EBP - 0x40),uVar40);
              FUN_004d99d0((void *)(unaff_EBP - 0x1b4),puVar14);
              piVar26 = (int *)(unaff_EBP - 0x5e4c);
              pvVar17 = (void *)FUN_00530550((void *)(unaff_EBP - 0x40),
                                             (undefined4 *)(unaff_EBP - 0x5dec));
              piVar26 = (int *)FUN_004ce270(pvVar17,piVar26,uVar40);
              FUN_004d4470((void *)(unaff_EBP - 0x40),(int *)(unaff_EBP - 0x5c48),*piVar26);
              uVar10 = FUN_004f3820((int *)(unaff_EBP - 0x5d34));
              uVar40 = (*pcVar43)();
              piVar26 = (int *)FUN_004f79b0((void *)(unaff_EBP - 0x5d34),uVar40 % uVar10);
              *(int **)(unaff_EBP - 0x5c48) = piVar26;
              bVar45 = FUN_004e28d0(piVar26);
              if (!bVar45) {
                pSVar30 = operator_new(0x10f0);
                if (pSVar30 == (Spawn *)0x0) {
                  pSVar30 = (Spawn *)0x0;
                }
                else {
                  pSVar30 = cube::Spawn::Spawn(pSVar30);
                }
                uVar10 = 1;
                piVar18 = (int *)(unaff_EBP - 0x5e58);
                *(Spawn **)(unaff_EBP - 0x5cd8) = pSVar30;
                pvVar17 = (void *)FUN_004e2320((void *)(unaff_EBP - 0x1b4),2);
                puVar13 = (undefined4 *)FUN_00405690(pvVar17,piVar18,uVar10);
                uVar12 = puVar13[1];
                uVar58 = *puVar13;
                puVar13 = (undefined4 *)FUN_004e2320((void *)(unaff_EBP - 0x1b4),1);
                uVar51 = puVar13[1];
                uVar55 = *puVar13;
                puVar13 = (undefined4 *)FUN_004e2320((void *)(unaff_EBP - 0x1b4),0);
                puVar13 = FUN_00406380((void *)(unaff_EBP - 0x1030),*puVar13,puVar13[1],uVar55,
                                       uVar51,uVar58,uVar12);
                FUN_00402a40(&(pSVar30->Spawn_data).field_0xc,puVar13);
                iVar11 = rand();
                iVar9 = *(int *)(unaff_EBP - 0x5cbc);
                (pSVar30->Spawn_data).offset_0x50 = ((float)iVar11 * 360.0) / 32767.0;
                (pSVar30->Spawn_data).offset_0x30 = *(undefined4 *)(iVar9 + 0x24);
                (pSVar30->Spawn_data).offset_0x24 = 1;
                puVar20 = &(pSVar30->Spawn_data).field_0x76;
                *(ushort *)puVar20 = *(ushort *)puVar20 | 0x1000;
                uVar10 = FUN_0041fff0(piVar26);
                uVar40 = rand();
                puVar13 = (undefined4 *)FUN_00402bb0(*(void **)(unaff_EBP - 0x5c48),uVar40 % uVar10)
                ;
                (pSVar30->Spawn_data).offset_0x28 = *puVar13;
                (pSVar30->Spawn_data).offset_0x54 =
                     *(undefined1 *)(*(int *)(unaff_EBP - 0x5cbc) + 0x28);
                pSVar31 = operator_new(0xc);
                *(SequentialBehavior **)(unaff_EBP - 0x5c48) = pSVar31;
                *(undefined1 *)(unaff_EBP - 4) = 0x6a;
                if (pSVar31 == (SequentialBehavior *)0x0) {
                  pSVar31 = (SequentialBehavior *)0x0;
                  *(undefined4 *)(unaff_EBP - 0x5c80) = 0;
                }
                else {
                  pSVar31 = cube::SequentialBehavior::SequentialBehavior(pSVar31);
                  *(SequentialBehavior **)(unaff_EBP - 0x5c80) = pSVar31;
                }
                *(undefined1 *)(unaff_EBP - 4) = 0x66;
                pCVar32 = operator_new(0x14);
                *(CombatBehavior **)(unaff_EBP - 0x5c48) = pCVar32;
                *(undefined1 *)(unaff_EBP - 4) = 0x6b;
                if (pCVar32 == (CombatBehavior *)0x0) {
                  pCVar32 = (CombatBehavior *)0x0;
                }
                else {
                  pCVar32 = cube::CombatBehavior::CombatBehavior(pCVar32,0x41a00000);
                }
                *(undefined1 *)(unaff_EBP - 4) = 0x66;
                *(CombatBehavior **)(unaff_EBP - 0x5c48) = pCVar32;
                FUN_004d6620(&pSVar31->SequentialBehavior_data,(undefined4 *)(unaff_EBP - 0x5c48));
                pWVar34 = operator_new(0x1c);
                *(WalkPathBehavior **)(unaff_EBP - 0x5c48) = pWVar34;
                *(undefined1 *)(unaff_EBP - 4) = 0x6c;
                if (pWVar34 == (WalkPathBehavior *)0x0) {
                  pWVar34 = (WalkPathBehavior *)0x0;
                }
                else {
                  pWVar34 = cube::WalkPathBehavior::WalkPathBehavior(pWVar34,0x40000000);
                }
                *(WalkPathBehavior **)(unaff_EBP - 0x5c50) = pWVar34;
                *(undefined1 *)(unaff_EBP - 4) = 0x66;
                *(WalkPathBehavior_data **)(unaff_EBP - 0x5cdc) = &pWVar34->WalkPathBehavior_data;
                FUN_004e1420(&pWVar34->WalkPathBehavior_data,
                             (undefined4 *)&(pSVar30->Spawn_data).field_0xc);
                bVar45 = FUN_004e28d0(*(int **)(unaff_EBP - 0x5c78));
                if (!bVar45) {
                  uVar10 = FUN_0041fff0(*(int **)(unaff_EBP - 0x5c78));
                  uVar40 = rand();
                  piVar26 = (int *)FUN_00402bb0(*(void **)(unaff_EBP - 0x5c78),uVar40 % uVar10);
                  piVar26 = (int *)(*piVar26 + 0x24);
                  *(int **)(unaff_EBP - 0x5c48) = piVar26;
                  bVar45 = FUN_004e28d0(piVar26);
                  if (!bVar45) {
                    uVar10 = FUN_00420020(piVar26);
                    uVar40 = rand();
                    puVar14 = (uint *)FUN_0041e2e0(*(void **)(unaff_EBP - 0x5c48),uVar40 % uVar10);
                    FUN_004d99d0((void *)(unaff_EBP - 0x154),puVar14);
                    FUN_004e1420(*(void **)(unaff_EBP - 0x5cdc),(undefined4 *)(unaff_EBP - 0x154));
                  }
                  pSVar31 = *(SequentialBehavior **)(unaff_EBP - 0x5c80);
                }
                *(undefined4 *)(unaff_EBP - 0x5c48) = *(undefined4 *)(unaff_EBP - 0x5c50);
                FUN_004d6620(&pSVar31->SequentialBehavior_data,(undefined4 *)(unaff_EBP - 0x5c48));
                *(SequentialBehavior **)&pSVar30[1].Spawn_data.field_0x120 = pSVar31;
                uVar10 = rand();
                uVar10 = uVar10 & 0x80000001;
                if ((int)uVar10 < 0) {
                  uVar10 = (uVar10 - 1 | 0xfffffffe) + 1;
                }
                FUN_00406fd0((undefined2 *)(unaff_EBP - 0x1418));
                *(undefined2 *)(unaff_EBP - 0x1408) =
                     *(undefined2 *)&(pSVar30->Spawn_data).offset_0x30;
                *(undefined2 *)(unaff_EBP - 0x1418) = 0x101;
                if (0 < (int)uVar10) {
                  do {
                    FUN_00427000(&(pSVar30->Spawn_data).offset_0xf68,(char *)(unaff_EBP - 0x1418),-1
                                );
                    uVar10 = uVar10 - 1;
                  } while (uVar10 != 0);
                }
                FUN_004f2be0((void *)(*(int *)(unaff_EBP - 0x5c70) + 0x18),
                             (undefined4 *)(unaff_EBP - 0x5cd8));
                pcVar43 = rand_exref;
              }
              iVar9 = *(int *)(unaff_EBP - 0x5c74) + 1;
              *(int *)(unaff_EBP - 0x5c74) = iVar9;
            } while (iVar9 < *(int *)(unaff_EBP - 0x5c64));
          }
        }
        *(undefined1 *)(unaff_EBP - 4) = 0x58;
        FUN_0042f440((undefined4 *)(unaff_EBP - 0x40));
      }
      FUN_004f79d0((void *)(unaff_EBP - 0x5c58),(int *)(unaff_EBP - 0x5c48));
      piVar26 = (int *)FUN_004d3de0(*(void **)(unaff_EBP - 0x5c78),
                                    (undefined4 *)(unaff_EBP - 0x5d40));
      bVar45 = FUN_0042c6f0((void *)(unaff_EBP - 0x5c58),piVar26);
      iVar9 = *(int *)(unaff_EBP - 0x5c70);
    } while (bVar45);
  }
  FUN_0042f440((undefined4 *)(unaff_EBP - 0x5d10));
  FUN_004f7740((undefined4 *)(unaff_EBP - 0x5d34));
LAB_004f2abd:
  *(undefined1 *)(unaff_EBP - 0x5ce5) = 1;
  FUN_0042f440((undefined4 *)(unaff_EBP - 0x4c));
  FUN_0042f440((undefined4 *)(unaff_EBP - 0x5d58));
  FUN_0042f440((undefined4 *)(unaff_EBP - 0x5d64));
  FUN_0042f440((undefined4 *)(unaff_EBP - 0x5d80));
  FUN_0042f440((undefined4 *)(unaff_EBP - 0x5db4));
  FUN_0042f440((undefined4 *)(unaff_EBP - 0x5d1c));
  FUN_0042f440((undefined4 *)(unaff_EBP - 0x5d28));
  FUN_0042f440((undefined4 *)(unaff_EBP - 0x5d70));
  ExceptionList = *(void **)(unaff_EBP - 0xc);
  uStack00000008 = 0x4f2b3f;
  __security_check_cookie(*(uint *)(unaff_EBP - 0x10) ^ unaff_EBP);
  return;
}


/* FUN_004f3820 @ 004f3820  kind=gamemisc  attributed-by=none  size=23 */

int __fastcall FUN_004f3820(int *param_1)

{
  return (param_1[1] - *param_1) / 0x18;
}


/* FUN_004f3840 @ 004f3840  kind=gamemisc  attributed-by=none  size=9 */

int __fastcall FUN_004f3840(int *param_1)

{
  return param_1[1] - *param_1 >> 3;
}


/* FUN_004f3850 @ 004f3850  kind=gamemisc  attributed-by=none  size=45 */

undefined8 __cdecl FUN_004f3850(uint param_1,uint param_2,uint param_3)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = param_2 * 0x10000 + param_1;
  uVar2 = uVar1 * 0x100;
  return CONCAT44(((int)param_3 >> 0x1f) +
                  (((((int)param_2 >> 0x1f) << 0x10 | param_2 >> 0x10) + ((int)param_1 >> 0x1f) +
                   (uint)CARRY4(param_2 * 0x10000,param_1)) * 0x100 | uVar1 >> 0x18) +
                  (uint)CARRY4(param_3,uVar2),param_3 + uVar2);
}


/* FUN_004f3880 @ 004f3880  kind=gamemisc  attributed-by=none  size=31 */

uint * __thiscall FUN_004f3880(void *this,byte *param_1)

{
  *(uint *)this = (uint)*param_1;
  *(uint *)((int)this + 4) = (uint)param_1[1];
  *(uint *)((int)this + 8) = (uint)param_1[2];
  return this;
}


/* FUN_004f38a0 @ 004f38a0  kind=gamemisc  attributed-by=none  size=147 */

void __cdecl FUN_004f38a0(int param_1,int param_2,int param_3,float *param_4)

{
  float *pfVar1;
  float fVar2;
  int iVar3;
  int iVar4;
  
  iVar3 = param_2;
  while( true ) {
    iVar4 = iVar3 * 2 + 2;
    if (param_3 <= iVar4) break;
    fVar2 = *(float *)(param_1 + -0xc + iVar4 * 0xc);
    pfVar1 = (float *)(param_1 + iVar4 * 0xc);
    if (*pfVar1 <= fVar2 && fVar2 != *pfVar1) {
      iVar4 = iVar3 * 2 + 1;
    }
    *(undefined4 *)(param_1 + iVar3 * 0xc) = *(undefined4 *)(param_1 + iVar4 * 0xc);
    *(undefined4 *)(param_1 + 4 + iVar3 * 0xc) = *(undefined4 *)(param_1 + 4 + iVar4 * 0xc);
    *(undefined4 *)(param_1 + 8 + iVar3 * 0xc) = *(undefined4 *)(param_1 + 8 + iVar4 * 0xc);
    iVar3 = iVar4;
  }
  if (iVar4 == param_3) {
    *(undefined4 *)(param_1 + iVar3 * 0xc) = *(undefined4 *)(param_1 + -0xc + param_3 * 0xc);
    *(undefined4 *)(param_1 + 4 + iVar3 * 0xc) = *(undefined4 *)(param_1 + -8 + param_3 * 0xc);
    *(undefined4 *)(param_1 + 8 + iVar3 * 0xc) = *(undefined4 *)(param_1 + -4 + param_3 * 0xc);
    iVar3 = param_3 + -1;
  }
  FUN_004f5ac0(param_1,iVar3,param_2,param_4);
  return;
}


/* FUN_004f3940 @ 004f3940  kind=gamemisc  attributed-by=none  size=149 */

void __cdecl FUN_004f3940(int param_1,int param_2,int param_3,undefined4 *param_4)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  iVar3 = param_2;
  while( true ) {
    iVar4 = iVar3 * 2 + 2;
    if (param_3 <= iVar4) break;
    iVar5 = param_1 + iVar4 * 0xc;
    if (*(int *)(iVar5 + 8) < *(int *)(iVar5 + -4)) {
      iVar4 = iVar3 * 2 + 1;
    }
    puVar1 = (undefined4 *)(param_1 + iVar4 * 0xc);
    puVar2 = (undefined4 *)(param_1 + iVar3 * 0xc);
    *puVar2 = *puVar1;
    puVar2[1] = puVar1[1];
    puVar2[2] = puVar1[2];
    iVar3 = iVar4;
  }
  iVar5 = iVar3;
  if (iVar4 == param_3) {
    iVar4 = param_1 + param_3 * 0xc;
    iVar5 = param_3 + -1;
    puVar1 = (undefined4 *)(param_1 + iVar3 * 0xc);
    *puVar1 = *(undefined4 *)(iVar4 + -0xc);
    puVar1[1] = *(undefined4 *)(iVar4 + -8);
    puVar1[2] = *(undefined4 *)(iVar4 + -4);
  }
  FUN_004f5b40(param_1,iVar5,param_2,param_4);
  return;
}


/* FUN_004f3a80 @ 004f3a80  kind=gamemisc  attributed-by=none  size=148 */

void __cdecl FUN_004f3a80(int param_1,int param_2,int param_3,undefined4 *param_4)

{
  float *pfVar1;
  float fVar2;
  int iVar3;
  int iVar4;
  
  iVar3 = param_2;
  while( true ) {
    iVar4 = iVar3 * 2 + 2;
    if (param_3 <= iVar4) break;
    fVar2 = *(float *)(param_1 + 8 + iVar4 * 0xc);
    pfVar1 = (float *)(param_1 + -4 + iVar4 * 0xc);
    if (*pfVar1 <= fVar2 && fVar2 != *pfVar1) {
      iVar4 = iVar3 * 2 + 1;
    }
    *(undefined4 *)(param_1 + iVar3 * 0xc) = *(undefined4 *)(param_1 + iVar4 * 0xc);
    *(undefined4 *)(param_1 + 4 + iVar3 * 0xc) = *(undefined4 *)(param_1 + 4 + iVar4 * 0xc);
    *(undefined4 *)(param_1 + 8 + iVar3 * 0xc) = *(undefined4 *)(param_1 + 8 + iVar4 * 0xc);
    iVar3 = iVar4;
  }
  if (iVar4 == param_3) {
    *(undefined4 *)(param_1 + iVar3 * 0xc) = *(undefined4 *)(param_1 + -0xc + param_3 * 0xc);
    *(undefined4 *)(param_1 + 4 + iVar3 * 0xc) = *(undefined4 *)(param_1 + -8 + param_3 * 0xc);
    *(undefined4 *)(param_1 + 8 + iVar3 * 0xc) = *(undefined4 *)(param_1 + -4 + param_3 * 0xc);
    iVar3 = param_3 + -1;
  }
  FUN_004f5c40(param_1,iVar3,param_2,param_4);
  return;
}


/* FUN_004f3b20 @ 004f3b20  kind=gamemisc  attributed-by=none  size=52 */

undefined4 * __thiscall FUN_004f3b20(void *this,undefined4 *param_1)

{
  undefined4 *puVar1;
  
  puVar1 = FUN_004f7ba0(this);
  *(undefined2 *)(puVar1 + 3) = 0;
  if (puVar1 + 4 != (undefined4 *)0x0) {
    puVar1[4] = *param_1;
    puVar1[5] = param_1[1];
    puVar1[6] = param_1[2];
  }
  return puVar1;
}


/* FUN_004f3b60 @ 004f3b60  kind=gamemisc  attributed-by=none  size=58 */

undefined4 * __thiscall FUN_004f3b60(void *this,undefined4 *param_1)

{
  undefined4 *puVar1;
  
  puVar1 = FUN_004f7be0(this);
  *(undefined2 *)(puVar1 + 3) = 0;
  if (puVar1 + 4 != (undefined4 *)0x0) {
    puVar1[4] = *param_1;
    puVar1[5] = param_1[1];
    puVar1[6] = param_1[2];
    puVar1[7] = param_1[3];
  }
  return puVar1;
}


/* FUN_004f3bf0 @ 004f3bf0  kind=gamemisc  attributed-by=none  size=104 */

void __cdecl FUN_004f3bf0(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  
  if (param_1 != param_2) {
    puVar2 = param_1 + 3;
    do {
      if ((void *)*puVar2 != (void *)0x0) {
        operator_delete((void *)*puVar2);
        *puVar2 = 0;
        puVar2[1] = 0;
        puVar2[2] = 0;
      }
      if ((void *)puVar2[-3] != (void *)0x0) {
        operator_delete((void *)puVar2[-3]);
        puVar2[-3] = 0;
        puVar2[-2] = 0;
        puVar2[-1] = 0;
      }
      puVar1 = puVar2 + 3;
      puVar2 = puVar2 + 6;
    } while (puVar1 != param_2);
  }
  return;
}


/* FUN_004f3c60 @ 004f3c60  kind=gamemisc  attributed-by=none  size=518 */

void __thiscall
FUN_004f3c60(void *this,undefined4 *param_1,char param_2,undefined4 *param_3,undefined4 param_4,
            int *param_5)

{
  char cVar1;
  int *piVar2;
  int iVar3;
  int *piVar4;
  int *piVar5;
  int *piVar6;
  
  if (0x9249247 < *(uint *)((int)this + 4)) {
    operator_delete(param_5);
                    /* WARNING: Subroutine does not return */
    std::_Xlength_error("map/set<T> too long");
  }
  *(uint *)((int)this + 4) = *(uint *)((int)this + 4) + 1;
  param_5[1] = (int)param_3;
  if (param_3 == *(undefined4 **)this) {
    (*(undefined4 **)this)[1] = param_5;
    **(undefined4 **)this = param_5;
    *(int **)(*(int *)this + 8) = param_5;
  }
  else if (param_2 == '\0') {
    param_3[2] = param_5;
    if (param_3 == *(undefined4 **)(*(int *)this + 8)) {
      *(int **)(*(int *)this + 8) = param_5;
    }
  }
  else {
    *param_3 = param_5;
    if (param_3 == (undefined4 *)**(int **)this) {
      **(int **)this = (int)param_5;
    }
  }
  cVar1 = *(char *)(param_5[1] + 0xc);
  piVar4 = param_5;
  do {
    if (cVar1 != '\0') {
      *(undefined1 *)(*(int *)(*(int *)this + 4) + 0xc) = 1;
      *param_1 = param_5;
      return;
    }
    piVar6 = (int *)piVar4[1];
    piVar5 = *(int **)piVar6[1];
    if (piVar6 == piVar5) {
      piVar5 = (int *)((undefined4 *)piVar6[1])[2];
      if ((char)piVar5[3] != '\0') {
        if (piVar4 == (int *)piVar6[2]) {
          piVar4 = (int *)piVar6[2];
          piVar6[2] = *piVar4;
          if (*(char *)(*piVar4 + 0xd) == '\0') {
            *(int **)(*piVar4 + 4) = piVar6;
          }
          piVar4[1] = piVar6[1];
          if (piVar6 == *(int **)(*(int *)this + 4)) {
            *(int **)(*(int *)this + 4) = piVar4;
          }
          else {
            piVar5 = (int *)piVar6[1];
            if (piVar6 == (int *)*piVar5) {
              *piVar5 = (int)piVar4;
            }
            else {
              piVar5[2] = (int)piVar4;
            }
          }
          *piVar4 = (int)piVar6;
          piVar6[1] = (int)piVar4;
          piVar4 = piVar6;
        }
        *(undefined1 *)(piVar4[1] + 0xc) = 1;
        *(undefined1 *)(*(int *)(piVar4[1] + 4) + 0xc) = 0;
        piVar6 = *(int **)(piVar4[1] + 4);
        piVar5 = (int *)*piVar6;
        *piVar6 = piVar5[2];
        if (*(char *)(piVar5[2] + 0xd) == '\0') {
          *(int **)(piVar5[2] + 4) = piVar6;
        }
        piVar5[1] = piVar6[1];
        if (piVar6 == *(int **)(*(int *)this + 4)) {
          *(int **)(*(int *)this + 4) = piVar5;
          piVar5[2] = (int)piVar6;
        }
        else {
          piVar2 = (int *)piVar6[1];
          if (piVar6 == (int *)piVar2[2]) {
            piVar2[2] = (int)piVar5;
            piVar5[2] = (int)piVar6;
          }
          else {
            *piVar2 = (int)piVar5;
            piVar5[2] = (int)piVar6;
          }
        }
        goto LAB_004f3e41;
      }
LAB_004f3d98:
      *(undefined1 *)(piVar6 + 3) = 1;
      *(undefined1 *)(piVar5 + 3) = 1;
      *(undefined1 *)(*(int *)(piVar4[1] + 4) + 0xc) = 0;
      piVar4 = *(int **)(piVar4[1] + 4);
    }
    else {
      if ((char)piVar5[3] == '\0') goto LAB_004f3d98;
      if (piVar4 == (int *)*piVar6) {
        iVar3 = *piVar6;
        *piVar6 = *(int *)(iVar3 + 8);
        if (*(char *)(*(int *)(iVar3 + 8) + 0xd) == '\0') {
          *(int **)(*(int *)(iVar3 + 8) + 4) = piVar6;
        }
        *(int *)(iVar3 + 4) = piVar6[1];
        if (piVar6 == *(int **)(*(int *)this + 4)) {
          *(int *)(*(int *)this + 4) = iVar3;
        }
        else {
          piVar4 = (int *)piVar6[1];
          if (piVar6 == (int *)piVar4[2]) {
            piVar4[2] = iVar3;
          }
          else {
            *piVar4 = iVar3;
          }
        }
        *(int **)(iVar3 + 8) = piVar6;
        piVar6[1] = iVar3;
        piVar4 = piVar6;
      }
      *(undefined1 *)(piVar4[1] + 0xc) = 1;
      *(undefined1 *)(*(int *)(piVar4[1] + 4) + 0xc) = 0;
      piVar6 = *(int **)(piVar4[1] + 4);
      piVar5 = (int *)piVar6[2];
      piVar6[2] = *piVar5;
      if (*(char *)(*piVar5 + 0xd) == '\0') {
        *(int **)(*piVar5 + 4) = piVar6;
      }
      piVar5[1] = piVar6[1];
      if (piVar6 == *(int **)(*(int *)this + 4)) {
        *(int **)(*(int *)this + 4) = piVar5;
      }
      else {
        piVar2 = (int *)piVar6[1];
        if (piVar6 == (int *)*piVar2) {
          *piVar2 = (int)piVar5;
        }
        else {
          piVar2[2] = (int)piVar5;
        }
      }
      *piVar5 = (int)piVar6;
LAB_004f3e41:
      piVar6[1] = (int)piVar5;
    }
    cVar1 = *(char *)(piVar4[1] + 0xc);
  } while( true );
}


/* FUN_004f4080 @ 004f4080  kind=gamemisc  attributed-by=none  size=565 */

undefined4 * __thiscall
FUN_004f4080(void *this,undefined4 *param_1,int *param_2,int *param_3,int *param_4)

{
  int *piVar1;
  int *piVar2;
  uint *puVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  uint uStack_34;
  undefined4 local_24;
  int *local_20;
  void *local_1c;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00555560;
  local_10 = ExceptionList;
  uStack_34 = DAT_00583cc8 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_34;
  ExceptionList = &local_10;
  local_8 = 0;
  local_1c = this;
  if (*(int *)((int)this + 4) == 0) {
    local_14 = (undefined1 *)&uStack_34;
    FUN_004f3c60(this,param_1,'\x01',*(undefined4 **)this,param_3,param_4);
    ExceptionList = local_10;
    return param_1;
  }
  piVar1 = *(int **)this;
  if (param_2 == (int *)*piVar1) {
    puVar3 = &uStack_34;
    if ((*param_3 < param_2[4]) ||
       ((local_14 = (undefined1 *)&uStack_34, *param_3 <= param_2[4] &&
        (local_14 = (undefined1 *)&uStack_34, puVar3 = &uStack_34, param_3[1] < param_2[5])))) {
LAB_004f4111:
      local_14 = (undefined1 *)puVar3;
      FUN_004f3c60(local_1c,param_1,'\x01',param_2,param_3,param_4);
      ExceptionList = local_10;
      return param_1;
    }
  }
  else if (param_2 == piVar1) {
    puVar5 = (undefined4 *)piVar1[2];
    if (((int)puVar5[4] < *param_3) ||
       ((local_14 = (undefined1 *)&uStack_34, (int)puVar5[4] <= *param_3 &&
        (local_14 = (undefined1 *)&uStack_34, (int)puVar5[5] < param_3[1])))) {
      local_14 = (undefined1 *)&uStack_34;
      FUN_004f3c60(this,param_1,'\0',puVar5,param_3,param_4);
      ExceptionList = local_10;
      return param_1;
    }
  }
  else {
    if ((*param_3 < param_2[4]) ||
       ((puVar3 = &uStack_34, *param_3 <= param_2[4] &&
        (puVar3 = &uStack_34, param_3[1] < param_2[5])))) {
      local_20 = param_2;
      FUN_004dad80((int *)&local_20);
      piVar2 = local_20;
      uVar4 = FUN_004ce3b0(local_20 + 4,param_3);
      puVar3 = (uint *)local_14;
      if ((char)uVar4 != '\0') {
        if (*(char *)(piVar2[2] + 0xd) != '\0') {
          FUN_004f3c60(local_1c,param_1,'\0',piVar2,param_3,param_4);
          ExceptionList = local_10;
          return param_1;
        }
        goto LAB_004f4111;
      }
    }
    local_14 = (undefined1 *)puVar3;
    uVar4 = FUN_004ce3b0(param_2 + 4,param_3);
    if ((char)uVar4 != '\0') {
      local_20 = param_2;
      FUN_00407a50((int *)&local_20);
      piVar2 = local_20;
      if ((local_20 == piVar1) || (uVar4 = FUN_004ce3b0(param_3,local_20 + 4), (char)uVar4 != '\0'))
      {
        if (*(char *)(param_2[2] + 0xd) == '\0') {
          FUN_004f3c60(local_1c,param_1,'\x01',piVar2,param_3,param_4);
          ExceptionList = local_10;
          return param_1;
        }
        FUN_004f3c60(local_1c,param_1,'\0',param_2,param_3,param_4);
        ExceptionList = local_10;
        return param_1;
      }
    }
  }
  local_8 = 0xffffffff;
  puVar5 = (undefined4 *)FUN_004f4560(local_1c,&local_24,'\0',param_3,param_4);
  *param_1 = *puVar5;
  ExceptionList = local_10;
  return param_1;
}


/* FUN_004f42d0 @ 004f42d0  kind=gamemisc  attributed-by=none  size=622 */

undefined4 * __thiscall
FUN_004f42d0(void *this,undefined4 *param_1,int *param_2,int *param_3,int *param_4)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  undefined4 uVar5;
  undefined4 *puVar6;
  uint uStack_34;
  undefined4 local_24;
  int *local_20;
  void *local_1c;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00555580;
  local_10 = ExceptionList;
  uStack_34 = DAT_00583cc8 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_34;
  ExceptionList = &local_10;
  local_8 = 0;
  local_1c = this;
  if (*(int *)((int)this + 4) == 0) {
    local_14 = (undefined1 *)&uStack_34;
    FUN_004f3e70(this,param_1,'\x01',*(undefined4 **)this,param_3,param_4);
    ExceptionList = local_10;
    return param_1;
  }
  piVar1 = *(int **)this;
  if (param_2 == (int *)*piVar1) {
    iVar2 = param_2[4];
    iVar3 = *param_3;
    if ((iVar3 < iVar2) ||
       ((local_14 = (undefined1 *)&uStack_34, iVar3 <= iVar2 &&
        ((param_3[1] < param_2[5] ||
         (((local_14 = (undefined1 *)&uStack_34, iVar3 <= iVar2 &&
           (local_14 = (undefined1 *)&uStack_34, param_3[1] <= param_2[5])) &&
          (local_14 = (undefined1 *)&uStack_34, param_3[2] < param_2[6])))))))) {
      local_14 = (undefined1 *)&uStack_34;
      FUN_004f3e70(this,param_1,'\x01',param_2,param_3,param_4);
      ExceptionList = local_10;
      return param_1;
    }
  }
  else if (param_2 == piVar1) {
    puVar6 = (undefined4 *)piVar1[2];
    local_14 = (undefined1 *)&uStack_34;
    uVar5 = FUN_004f7ab0(puVar6 + 4,param_3);
    if ((char)uVar5 != '\0') {
      FUN_004f3e70(this,param_1,'\0',puVar6,param_3,param_4);
      ExceptionList = local_10;
      return param_1;
    }
  }
  else {
    uVar5 = FUN_004f7ab0(param_3,param_2 + 4);
    if ((char)uVar5 != '\0') {
      local_20 = param_2;
      FUN_004dad80((int *)&local_20);
      piVar4 = local_20;
      uVar5 = FUN_004f7ab0(local_20 + 4,param_3);
      if ((char)uVar5 != '\0') {
        if (*(char *)(piVar4[2] + 0xd) == '\0') {
          FUN_004f3e70(local_1c,param_1,'\x01',param_2,param_3,param_4);
          ExceptionList = local_10;
          return param_1;
        }
        FUN_004f3e70(local_1c,param_1,'\0',piVar4,param_3,param_4);
        ExceptionList = local_10;
        return param_1;
      }
    }
    uVar5 = FUN_004f7ab0(param_2 + 4,param_3);
    this = local_1c;
    if ((char)uVar5 != '\0') {
      local_20 = param_2;
      FUN_00407a50((int *)&local_20);
      piVar4 = local_20;
      if ((local_20 == piVar1) ||
         (uVar5 = FUN_004f7ab0(param_3,local_20 + 4), this = local_1c, (char)uVar5 != '\0')) {
        if (*(char *)(param_2[2] + 0xd) == '\0') {
          FUN_004f3e70(local_1c,param_1,'\x01',piVar4,param_3,param_4);
          ExceptionList = local_10;
          return param_1;
        }
        FUN_004f3e70(local_1c,param_1,'\0',param_2,param_3,param_4);
        ExceptionList = local_10;
        return param_1;
      }
    }
  }
  local_8 = 0xffffffff;
  puVar6 = (undefined4 *)FUN_004f46c0(this,&local_24,'\0',param_3,param_4);
  *param_1 = *puVar6;
  ExceptionList = local_10;
  return param_1;
}


/* FUN_004f4560 @ 004f4560  kind=gamemisc  attributed-by=none  size=318 */

void __thiscall FUN_004f4560(void *this,undefined4 *param_1,char param_2,int *param_3,int *param_4)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  undefined4 *puVar5;
  int *piVar6;
  int *piVar7;
  int *unaff_FS_OFFSET;
  bool local_18;
  int local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  piVar4 = param_3;
  puStack_c = &LAB_005555a0;
  local_10 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = (int)&local_10;
  piVar1 = *(int **)this;
  local_8 = 0;
  local_18 = true;
  piVar7 = piVar1;
  if (*(char *)(piVar1[1] + 0xd) == '\0') {
    iVar2 = *param_3;
    piVar6 = (int *)piVar1[1];
    do {
      piVar7 = piVar6;
      iVar3 = piVar7[4];
      if (param_2 == '\0') {
        if ((iVar2 < iVar3) || ((iVar2 <= iVar3 && (param_3[1] < piVar7[5])))) {
          local_18 = true;
          goto LAB_004f4602;
        }
        local_18 = false;
LAB_004f45f8:
        piVar6 = (int *)piVar7[2];
      }
      else {
        if ((iVar3 < iVar2) || ((iVar3 <= iVar2 && (piVar7[5] < param_3[1])))) {
          local_18 = true;
        }
        else {
          local_18 = false;
        }
        local_18 = !local_18;
        if (!local_18) goto LAB_004f45f8;
LAB_004f4602:
        piVar6 = (int *)*piVar7;
      }
    } while (*(char *)((int)piVar6 + 0xd) == '\0');
  }
  _param_2 = piVar7;
  if (local_18) {
    if (piVar7 == (int *)*piVar1) {
      local_18 = true;
      goto LAB_004f4621;
    }
    FUN_004dad80((int *)&param_2);
  }
  piVar1 = _param_2;
  if ((*piVar4 <= _param_2[4]) && ((*piVar4 < _param_2[4] || (piVar4[1] <= _param_2[5])))) {
    operator_delete(param_4);
    *param_1 = piVar1;
    *(undefined1 *)(param_1 + 1) = 0;
    *unaff_FS_OFFSET = local_10;
    return;
  }
LAB_004f4621:
  puVar5 = (undefined4 *)FUN_004f3c60(this,(undefined4 *)&param_2,local_18,piVar7,piVar4,param_4);
  *param_1 = *puVar5;
  *(undefined1 *)(param_1 + 1) = 1;
  *unaff_FS_OFFSET = local_10;
  return;
}


/* FUN_004f46c0 @ 004f46c0  kind=gamemisc  attributed-by=none  size=382 */

void __thiscall FUN_004f46c0(void *this,undefined4 *param_1,char param_2,int *param_3,int *param_4)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  undefined4 *puVar5;
  int *piVar6;
  int *piVar7;
  int *unaff_FS_OFFSET;
  bool local_18;
  int local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  piVar4 = param_3;
  puStack_c = &LAB_005555c0;
  local_10 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = (int)&local_10;
  piVar1 = *(int **)this;
  local_8 = 0;
  local_18 = true;
  piVar7 = piVar1;
  if (*(char *)(piVar1[1] + 0xd) == '\0') {
    iVar2 = *param_3;
    piVar6 = (int *)piVar1[1];
    do {
      piVar7 = piVar6;
      if (param_2 == '\0') {
        if (iVar2 < piVar7[4]) {
LAB_004f4786:
          local_18 = true;
          goto LAB_004f478b;
        }
        if (iVar2 <= piVar7[4]) {
          if ((param_3[1] < piVar7[5]) || ((param_3[1] <= piVar7[5] && (param_3[2] < piVar7[6]))))
          goto LAB_004f4786;
        }
        local_18 = false;
LAB_004f4781:
        piVar6 = (int *)piVar7[2];
      }
      else {
        iVar3 = piVar7[4];
        if ((iVar3 < iVar2) ||
           ((iVar3 <= iVar2 &&
            ((piVar7[5] < param_3[1] ||
             (((iVar3 <= iVar2 && (piVar7[5] <= param_3[1])) && (piVar7[6] < param_3[2])))))))) {
          local_18 = true;
        }
        else {
          local_18 = false;
        }
        local_18 = !local_18;
        if (!local_18) goto LAB_004f4781;
LAB_004f478b:
        piVar6 = (int *)*piVar7;
      }
    } while (*(char *)((int)piVar6 + 0xd) == '\0');
  }
  _param_2 = piVar7;
  if (local_18) {
    if (piVar7 == (int *)*piVar1) {
      local_18 = true;
      goto LAB_004f47aa;
    }
    FUN_004dad80((int *)&param_2);
  }
  piVar1 = _param_2;
  iVar2 = _param_2[4];
  iVar3 = *piVar4;
  if ((iVar3 <= iVar2) &&
     ((iVar3 < iVar2 ||
      ((piVar4[1] <= _param_2[5] &&
       (((iVar3 < iVar2 || (piVar4[1] < _param_2[5])) || (piVar4[2] <= _param_2[6])))))))) {
    operator_delete(param_4);
    *param_1 = piVar1;
    *(undefined1 *)(param_1 + 1) = 0;
    *unaff_FS_OFFSET = local_10;
    return;
  }
LAB_004f47aa:
  puVar5 = (undefined4 *)FUN_004f3e70(this,(undefined4 *)&param_2,local_18,piVar7,piVar4,param_4);
  *param_1 = *puVar5;
  *(undefined1 *)(param_1 + 1) = 1;
  *unaff_FS_OFFSET = local_10;
  return;
}


/* FUN_004f4860 @ 004f4860  kind=gamemisc  attributed-by=none  size=217 */

void __cdecl FUN_004f4860(float *param_1,float *param_2)

{
  float *pfVar1;
  float fVar2;
  float fVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  float *pfVar6;
  uint uVar7;
  float *pfVar8;
  
  uVar7 = DAT_00583cc8 ^ (uint)&stack0xfffffffc;
  pfVar6 = param_1;
  if (param_1 != param_2) {
    while (pfVar6 = pfVar6 + 3, pfVar6 != param_2) {
      fVar2 = *pfVar6;
      uVar5 = *(undefined8 *)(pfVar6 + 1);
      uVar4 = *(undefined8 *)(pfVar6 + 1);
      if (*param_1 <= fVar2) {
        fVar3 = pfVar6[-3];
        pfVar8 = pfVar6;
        while (fVar2 < fVar3) {
          *pfVar8 = fVar3;
          pfVar8[1] = pfVar8[-2];
          pfVar8[2] = pfVar8[-1];
          fVar3 = pfVar8[-6];
          pfVar8 = pfVar8 + -3;
        }
        *pfVar8 = fVar2;
        *(undefined8 *)(pfVar8 + 1) = uVar5;
      }
      else {
        if (param_1 != pfVar6) {
          pfVar8 = pfVar6 + 4;
          do {
            pfVar8[-4] = pfVar8[-7];
            pfVar8[-3] = pfVar8[-6];
            pfVar8[-2] = pfVar8[-5];
            pfVar1 = pfVar8 + -7;
            pfVar8 = pfVar8 + -3;
          } while (pfVar1 != param_1);
        }
        *param_1 = fVar2;
        *(undefined8 *)(param_1 + 1) = uVar4;
      }
    }
  }
  __security_check_cookie(uVar7 ^ (uint)&stack0xfffffffc);
  return;
}


/* FUN_004f4940 @ 004f4940  kind=gamemisc  attributed-by=none  size=144 */

void __cdecl FUN_004f4940(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  int iVar2;
  undefined8 uVar3;
  int iVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  
  puVar6 = param_1;
  if (param_1 != param_2) {
    while (puVar5 = (undefined8 *)((int)puVar6 + 0xc), puVar5 != param_2) {
      iVar4 = *(int *)(puVar5 + 1);
      uVar3 = *puVar5;
      if (iVar4 < *(int *)(param_1 + 1)) {
        if (param_1 != puVar5) {
          puVar6 = puVar6 + 4;
          do {
            *(undefined4 *)((int)puVar6 + -0x14) = *(undefined4 *)(puVar6 + -4);
            *(undefined4 *)(puVar6 + -2) = *(undefined4 *)((int)puVar6 + -0x1c);
            *(undefined4 *)((int)puVar6 + -0xc) = *(undefined4 *)(puVar6 + -3);
            puVar1 = puVar6 + -4;
            puVar6 = (undefined8 *)((int)puVar6 + -0xc);
          } while (puVar1 != param_1);
        }
        *param_1 = uVar3;
        *(int *)(param_1 + 1) = iVar4;
        puVar6 = puVar5;
      }
      else {
        iVar2 = *(int *)(puVar6 + 1);
        puVar6 = puVar5;
        while (iVar4 < iVar2) {
          *(undefined4 *)puVar6 = *(undefined4 *)((int)puVar6 + -0xc);
          *(undefined4 *)((int)puVar6 + 4) = *(undefined4 *)(puVar6 + -1);
          *(undefined4 *)(puVar6 + 1) = *(undefined4 *)((int)puVar6 + -4);
          iVar2 = *(int *)(puVar6 + -2);
          puVar6 = (undefined8 *)((int)puVar6 + -0xc);
        }
        *puVar6 = uVar3;
        *(int *)(puVar6 + 1) = iVar4;
        puVar6 = puVar5;
      }
    }
  }
  return;
}


/* FUN_004f4a5a @ 004f4a5a  kind=gamemisc  attributed-by=none  size=79 */

void __fastcall FUN_004f4a5a(float *param_1,float *param_2)

{
  float *pfVar1;
  float fVar2;
  undefined8 uVar4;
  float *pfVar5;
  float *unaff_EBX;
  uint unaff_EBP;
  float *unaff_ESI;
  float *unaff_EDI;
  float in_XMM0_Da;
  float in_XMM1_Da;
  undefined4 uStack00000008;
  float fVar3;
  
  do {
    do {
      pfVar5 = param_1;
      *unaff_ESI = in_XMM0_Da;
      unaff_ESI[1] = pfVar5[1];
      unaff_ESI[2] = pfVar5[2];
      in_XMM0_Da = pfVar5[-3];
      param_1 = pfVar5 + -3;
      unaff_ESI = pfVar5;
    } while (in_XMM0_Da < in_XMM1_Da);
    do {
      uVar4 = *(undefined8 *)(unaff_EBP - 0xc);
      *pfVar5 = in_XMM1_Da;
      *(undefined8 *)(pfVar5 + 1) = uVar4;
      param_1 = param_2;
      while( true ) {
        param_2 = param_1 + 3;
        if (param_2 == unaff_EBX) {
          uStack00000008 = 0x4f4aa5;
          __security_check_cookie(*(uint *)(unaff_EBP - 4) ^ unaff_EBP);
          return;
        }
        in_XMM1_Da = *param_2;
        fVar2 = *unaff_EDI;
        fVar3 = *unaff_EDI;
        *(float *)(unaff_EBP - 0xc) = param_1[4];
        *(float *)(unaff_EBP - 8) = param_1[5];
        if (in_XMM1_Da < fVar3 || in_XMM1_Da == fVar2) break;
        if (unaff_EDI != param_2) {
          pfVar5 = param_1 + 7;
          do {
            pfVar5[-4] = pfVar5[-7];
            pfVar5[-3] = pfVar5[-6];
            pfVar5[-2] = pfVar5[-5];
            pfVar1 = pfVar5 + -7;
            pfVar5 = pfVar5 + -3;
          } while (pfVar1 != unaff_EDI);
        }
        uVar4 = *(undefined8 *)(unaff_EBP - 0xc);
        *unaff_EDI = in_XMM1_Da;
        *(undefined8 *)(unaff_EDI + 1) = uVar4;
        param_1 = param_2;
      }
      in_XMM0_Da = *param_1;
      pfVar5 = param_2;
      unaff_ESI = param_2;
    } while (in_XMM1_Da <= in_XMM0_Da);
  } while( true );
}


/* FUN_004f4ab0 @ 004f4ab0  kind=gamemisc  attributed-by=none  size=58 */

void __cdecl FUN_004f4ab0(undefined8 *param_1,undefined8 *param_2)

{
  float *pfVar1;
  float fVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  
  puVar5 = param_1;
  if (param_1 != param_2) {
    while (puVar4 = (undefined8 *)((int)puVar5 + 0xc), puVar4 != param_2) {
      fVar2 = *(float *)(puVar4 + 1);
      uVar3 = *puVar4;
      if (fVar2 < *(float *)(param_1 + 1) || fVar2 == *(float *)(param_1 + 1)) {
        puVar7 = puVar4;
        puVar6 = puVar4;
        if (*(float *)(puVar5 + 1) <= fVar2 && fVar2 != *(float *)(puVar5 + 1)) {
          do {
            puVar6 = (undefined8 *)((int)puVar7 + -0xc);
            *(undefined4 *)puVar7 = *(undefined4 *)puVar6;
            *(undefined4 *)((int)puVar7 + 4) = *(undefined4 *)(puVar7 + -1);
            *(undefined4 *)(puVar7 + 1) = *(undefined4 *)((int)puVar7 + -4);
            pfVar1 = (float *)(puVar7 + -2);
            puVar7 = puVar6;
          } while (*pfVar1 <= fVar2 && fVar2 != *pfVar1);
        }
        *puVar6 = uVar3;
        *(float *)(puVar6 + 1) = fVar2;
        puVar5 = puVar4;
      }
      else {
        if (param_1 != puVar4) {
          puVar5 = puVar5 + 4;
          do {
            *(undefined4 *)((int)puVar5 + -0x14) = *(undefined4 *)(puVar5 + -4);
            *(undefined4 *)(puVar5 + -2) = *(undefined4 *)((int)puVar5 + -0x1c);
            *(undefined4 *)((int)puVar5 + -0xc) = *(undefined4 *)(puVar5 + -3);
            puVar7 = puVar5 + -4;
            puVar5 = (undefined8 *)((int)puVar5 + -0xc);
          } while (puVar7 != param_1);
        }
        *param_1 = uVar3;
        *(float *)(param_1 + 1) = fVar2;
        puVar5 = puVar4;
      }
    }
  }
  return;
}


/* FUN_004f4aea @ 004f4aea  kind=gamemisc  attributed-by=none  size=102 */

void __fastcall FUN_004f4aea(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 *unaff_EBX;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *unaff_EDI;
  float in_XMM0_Da;
  undefined8 in_XMM1_Qa;
  
  do {
    do {
      *(undefined4 *)((int)param_1 + -0x14) = *(undefined4 *)(param_1 + -4);
      *(undefined4 *)(param_1 + -2) = *(undefined4 *)((int)param_1 + -0x1c);
      *(undefined4 *)((int)param_1 + -0xc) = *(undefined4 *)(param_1 + -3);
      puVar1 = param_1 + -4;
      param_1 = (undefined8 *)((int)param_1 + -0xc);
    } while (puVar1 != unaff_EDI);
    do {
      *unaff_EDI = in_XMM1_Qa;
      *(float *)(unaff_EDI + 1) = in_XMM0_Da;
      puVar1 = param_2;
      while( true ) {
        param_2 = (undefined8 *)((int)puVar1 + 0xc);
        if (param_2 == unaff_EBX) {
          return;
        }
        in_XMM0_Da = *(float *)((int)puVar1 + 0x14);
        in_XMM1_Qa = *param_2;
        if (*(float *)(unaff_EDI + 1) <= in_XMM0_Da && in_XMM0_Da != *(float *)(unaff_EDI + 1))
        break;
        puVar2 = param_2;
        puVar3 = param_2;
        if (*(float *)(puVar1 + 1) <= in_XMM0_Da && in_XMM0_Da != *(float *)(puVar1 + 1)) {
          do {
            puVar3 = puVar1;
            *(undefined4 *)puVar2 = *(undefined4 *)puVar3;
            *(undefined4 *)((int)puVar2 + 4) = *(undefined4 *)((int)puVar3 + 4);
            *(undefined4 *)(puVar2 + 1) = *(undefined4 *)(puVar3 + 1);
            puVar1 = (undefined8 *)((int)puVar3 + -0xc);
            puVar2 = puVar3;
          } while (*(float *)((int)puVar3 + -4) <= in_XMM0_Da &&
                   in_XMM0_Da != *(float *)((int)puVar3 + -4));
        }
        *puVar3 = in_XMM1_Qa;
        *(float *)(puVar3 + 1) = in_XMM0_Da;
        puVar1 = param_2;
      }
    } while (unaff_EDI == param_2);
    param_1 = puVar1 + 4;
  } while( true );
}


/* FUN_004f4b50 @ 004f4b50  kind=gamemisc  attributed-by=none  size=345 */

void __cdecl FUN_004f4b50(int param_1,int param_2)

{
  undefined8 *puVar1;
  float *pfVar2;
  float fVar3;
  float fVar4;
  int iVar5;
  undefined8 uVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  
  uVar7 = DAT_00583cc8 ^ (uint)&stack0xfffffffc;
  iVar5 = (param_2 - param_1) / 0xc;
  iVar12 = iVar5 / 2;
  if (0 < iVar12) {
    iVar10 = iVar12 * 2 + 2;
    iVar8 = param_1 + iVar12 * 0xc + 8;
    do {
      puVar1 = (undefined8 *)(iVar8 + -0x10);
      fVar3 = *(float *)(iVar8 + -0x14);
      iVar8 = iVar8 + -0xc;
      uVar6 = *puVar1;
      iVar10 = iVar10 + -2;
      iVar12 = iVar12 + -1;
      iVar11 = iVar10;
      iVar9 = iVar12;
      while (iVar13 = iVar11, iVar13 < iVar5) {
        fVar4 = *(float *)(param_1 + -0xc + iVar13 * 0xc);
        pfVar2 = (float *)(param_1 + iVar13 * 0xc);
        if (*pfVar2 <= fVar4 && fVar4 != *pfVar2) {
          iVar13 = iVar13 + -1;
        }
        *(undefined4 *)(param_1 + iVar9 * 0xc) = *(undefined4 *)(param_1 + iVar13 * 0xc);
        *(undefined4 *)(param_1 + 4 + iVar9 * 0xc) = *(undefined4 *)(param_1 + 4 + iVar13 * 0xc);
        *(undefined4 *)(param_1 + 8 + iVar9 * 0xc) = *(undefined4 *)(param_1 + 8 + iVar13 * 0xc);
        iVar9 = iVar13;
        iVar11 = iVar13 * 2 + 2;
      }
      if (iVar13 == iVar5) {
        *(undefined4 *)(param_1 + iVar9 * 0xc) = *(undefined4 *)(param_1 + -0xc + iVar5 * 0xc);
        *(undefined4 *)(param_1 + 4 + iVar9 * 0xc) = *(undefined4 *)(param_1 + -8 + iVar5 * 0xc);
        *(undefined4 *)(param_1 + 8 + iVar9 * 0xc) = *(undefined4 *)(param_1 + -4 + iVar5 * 0xc);
        iVar9 = iVar5 + -1;
      }
      while (iVar12 < iVar9) {
        iVar11 = (iVar9 + -1) / 2;
        fVar4 = *(float *)(param_1 + iVar11 * 0xc);
        if (fVar3 <= fVar4) break;
        *(float *)(param_1 + iVar9 * 0xc) = fVar4;
        *(undefined4 *)(param_1 + 4 + iVar9 * 0xc) = *(undefined4 *)(param_1 + 4 + iVar11 * 0xc);
        *(undefined4 *)(param_1 + 8 + iVar9 * 0xc) = *(undefined4 *)(param_1 + 8 + iVar11 * 0xc);
        iVar9 = iVar11;
      }
      *(float *)(param_1 + iVar9 * 0xc) = fVar3;
      *(undefined8 *)(param_1 + 4 + iVar9 * 0xc) = uVar6;
    } while (0 < iVar12);
  }
  __security_check_cookie(uVar7 ^ (uint)&stack0xfffffffc);
  return;
}


/* FUN_004f4cb0 @ 004f4cb0  kind=gamemisc  attributed-by=none  size=273 */

void __cdecl FUN_004f4cb0(int param_1,int param_2)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  undefined8 local_14;
  undefined4 local_c;
  uint local_8;
  
  local_8 = DAT_00583cc8 ^ (uint)&stack0xfffffffc;
  iVar4 = (param_2 - param_1) / 0xc;
  iVar9 = iVar4 / 2;
  if (0 < iVar9) {
    iVar7 = iVar9 * 2 + 2;
    iVar5 = param_1 + iVar9 * 0xc;
    do {
      local_14 = *(undefined8 *)(iVar5 + -0xc);
      local_c = *(undefined4 *)(iVar5 + -4);
      iVar7 = iVar7 + -2;
      iVar9 = iVar9 + -1;
      iVar1 = iVar7;
      iVar8 = iVar9;
      while (iVar6 = iVar1, iVar6 < iVar4) {
        iVar1 = param_1 + iVar6 * 0xc;
        if (*(int *)(iVar1 + 8) < *(int *)(iVar1 + -4)) {
          iVar6 = iVar6 + -1;
        }
        puVar2 = (undefined4 *)(param_1 + iVar6 * 0xc);
        puVar3 = (undefined4 *)(param_1 + iVar8 * 0xc);
        *puVar3 = *puVar2;
        puVar3[1] = puVar2[1];
        puVar3[2] = puVar2[2];
        iVar8 = iVar6;
        iVar1 = iVar6 * 2 + 2;
      }
      if (iVar6 == iVar4) {
        iVar1 = param_1 + iVar4 * 0xc;
        puVar2 = (undefined4 *)(param_1 + iVar8 * 0xc);
        *puVar2 = *(undefined4 *)(iVar1 + -0xc);
        puVar2[1] = *(undefined4 *)(iVar1 + -8);
        puVar2[2] = *(undefined4 *)(iVar1 + -4);
        iVar8 = iVar4 + -1;
      }
      FUN_004f5b40(param_1,iVar8,iVar9,(undefined4 *)&local_14);
      iVar5 = iVar5 + -0xc;
    } while (0 < iVar9);
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


/* FUN_004f4f30 @ 004f4f30  kind=gamemisc  attributed-by=none  size=279 */

void __cdecl FUN_004f4f30(int param_1,int param_2)

{
  float *pfVar1;
  float fVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  undefined8 local_14;
  undefined4 local_c;
  uint local_8;
  
  local_8 = DAT_00583cc8 ^ (uint)&stack0xfffffffc;
  iVar3 = (param_2 - param_1) / 0xc;
  iVar8 = iVar3 / 2;
  if (0 < iVar8) {
    iVar7 = iVar8 * 2 + 2;
    iVar5 = param_1 + iVar8 * 0xc;
    do {
      local_14 = *(undefined8 *)(iVar5 + -0xc);
      iVar7 = iVar7 + -2;
      local_c = *(undefined4 *)(iVar5 + -4);
      iVar8 = iVar8 + -1;
      iVar4 = iVar7;
      iVar6 = iVar8;
      while (iVar9 = iVar4, iVar9 < iVar3) {
        fVar2 = *(float *)(param_1 + 8 + iVar9 * 0xc);
        pfVar1 = (float *)(param_1 + -4 + iVar9 * 0xc);
        if (*pfVar1 <= fVar2 && fVar2 != *pfVar1) {
          iVar9 = iVar9 + -1;
        }
        *(undefined4 *)(param_1 + iVar6 * 0xc) = *(undefined4 *)(param_1 + iVar9 * 0xc);
        *(undefined4 *)(param_1 + 4 + iVar6 * 0xc) = *(undefined4 *)(param_1 + 4 + iVar9 * 0xc);
        *(undefined4 *)(param_1 + 8 + iVar6 * 0xc) = *(undefined4 *)(param_1 + 8 + iVar9 * 0xc);
        iVar6 = iVar9;
        iVar4 = iVar9 * 2 + 2;
      }
      if (iVar9 == iVar3) {
        *(undefined4 *)(param_1 + iVar6 * 0xc) = *(undefined4 *)(param_1 + -0xc + iVar3 * 0xc);
        *(undefined4 *)(param_1 + 4 + iVar6 * 0xc) = *(undefined4 *)(param_1 + -8 + iVar3 * 0xc);
        *(undefined4 *)(param_1 + 8 + iVar6 * 0xc) = *(undefined4 *)(param_1 + -4 + iVar3 * 0xc);
        iVar6 = iVar3 + -1;
      }
      FUN_004f5c40(param_1,iVar6,iVar8,(undefined4 *)&local_14);
      iVar5 = iVar5 + -0xc;
    } while (0 < iVar8);
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


/* FUN_004f5050 @ 004f5050  kind=gamemisc  attributed-by=none  size=143 */

void __cdecl FUN_004f5050(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  iVar1 = param_2[2];
  if (iVar1 < (int)param_1[2]) {
    uVar2 = *param_2;
    uVar3 = param_2[1];
    *param_2 = *param_1;
    param_2[1] = param_1[1];
    param_2[2] = param_1[2];
    *param_1 = uVar2;
    param_1[1] = uVar3;
    param_1[2] = iVar1;
  }
  iVar1 = param_3[2];
  if (iVar1 < (int)param_2[2]) {
    uVar2 = *param_3;
    uVar3 = param_3[1];
    *param_3 = *param_2;
    param_3[1] = param_2[1];
    param_3[2] = param_2[2];
    *param_2 = uVar2;
    param_2[1] = uVar3;
    param_2[2] = iVar1;
    if (iVar1 < (int)param_1[2]) {
      uVar3 = param_2[1];
      *param_2 = *param_1;
      param_2[1] = param_1[1];
      param_2[2] = param_1[2];
      *param_1 = uVar2;
      param_1[1] = uVar3;
      param_1[2] = iVar1;
    }
  }
  return;
}


/* FUN_004f50e0 @ 004f50e0  kind=gamemisc  attributed-by=none  size=141 */

void __cdecl FUN_004f50e0(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  float fVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  fVar1 = (float)param_2[2];
  if ((float)param_1[2] <= fVar1 && fVar1 != (float)param_1[2]) {
    uVar2 = *param_2;
    uVar3 = param_2[1];
    *param_2 = *param_1;
    param_2[1] = param_1[1];
    param_2[2] = param_1[2];
    *param_1 = uVar2;
    param_1[1] = uVar3;
    param_1[2] = fVar1;
  }
  fVar1 = (float)param_3[2];
  if ((float)param_2[2] <= fVar1 && fVar1 != (float)param_2[2]) {
    uVar2 = *param_3;
    uVar3 = param_3[1];
    *param_3 = *param_2;
    param_3[1] = param_2[1];
    param_3[2] = param_2[2];
    *param_2 = uVar2;
    param_2[1] = uVar3;
    param_2[2] = fVar1;
    if ((float)param_1[2] <= fVar1 && fVar1 != (float)param_1[2]) {
      uVar3 = param_2[1];
      *param_2 = *param_1;
      param_2[1] = param_1[1];
      param_2[2] = param_1[2];
      *param_1 = uVar2;
      param_1[1] = uVar3;
      param_1[2] = fVar1;
    }
  }
  return;
}


/* FUN_004f5170 @ 004f5170  kind=gamemisc  attributed-by=none  size=899 */

void __cdecl FUN_004f5170(float *param_1,float *param_2,float *param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  int iVar5;
  float *pfVar6;
  float *pfVar7;
  
  fVar1 = *param_1;
  iVar5 = ((int)param_3 - (int)param_1) / 0xc;
  if (iVar5 < 0x29) {
    fVar2 = *param_2;
    if (fVar2 < fVar1) {
      fVar3 = param_2[1];
      fVar4 = param_2[2];
      *param_2 = fVar1;
      param_2[1] = param_1[1];
      param_2[2] = param_1[2];
      *param_1 = fVar2;
      param_1[1] = fVar3;
      param_1[2] = fVar4;
    }
    fVar1 = *param_3;
    if (fVar1 < *param_2) {
      fVar2 = param_3[1];
      fVar3 = param_3[2];
      *param_3 = *param_2;
      param_3[1] = param_2[1];
      param_3[2] = param_2[2];
      *param_2 = fVar1;
      param_2[1] = fVar2;
      param_2[2] = fVar3;
      fVar1 = *param_2;
      if (fVar1 < *param_1) {
        *param_2 = *param_1;
        param_2[1] = param_1[1];
        param_2[2] = param_1[2];
        *param_1 = fVar1;
        param_1[1] = fVar2;
        param_1[2] = fVar3;
      }
    }
  }
  else {
    iVar5 = iVar5 + 1;
    iVar5 = (int)(iVar5 + (iVar5 >> 0x1f & 7U)) >> 3;
    fVar2 = param_1[iVar5 * 3];
    if (fVar2 < fVar1) {
      fVar3 = param_1[iVar5 * 3 + 2];
      fVar4 = param_1[iVar5 * 3 + 1];
      param_1[iVar5 * 3] = fVar1;
      param_1[iVar5 * 3 + 1] = param_1[1];
      param_1[iVar5 * 3 + 2] = param_1[2];
      *param_1 = fVar2;
      param_1[2] = fVar3;
      param_1[1] = fVar4;
    }
    fVar1 = param_1[iVar5 * 6];
    if (fVar1 < param_1[iVar5 * 3]) {
      fVar2 = param_1[iVar5 * 6 + 1];
      fVar3 = param_1[iVar5 * 6 + 2];
      param_1[iVar5 * 6] = param_1[iVar5 * 3];
      param_1[iVar5 * 6 + 1] = param_1[iVar5 * 3 + 1];
      param_1[iVar5 * 6 + 2] = param_1[iVar5 * 3 + 2];
      param_1[iVar5 * 3] = fVar1;
      param_1[iVar5 * 3 + 1] = fVar2;
      param_1[iVar5 * 3 + 2] = fVar3;
      fVar1 = param_1[iVar5 * 3];
      if (fVar1 < *param_1) {
        param_1[iVar5 * 3] = *param_1;
        param_1[iVar5 * 3 + 1] = param_1[1];
        param_1[iVar5 * 3 + 2] = param_1[2];
        *param_1 = fVar1;
        param_1[1] = fVar2;
        param_1[2] = fVar3;
      }
    }
    fVar1 = *param_2;
    pfVar6 = param_2 + iVar5 * -3;
    if (fVar1 < *pfVar6) {
      fVar2 = param_2[1];
      fVar3 = param_2[2];
      *param_2 = *pfVar6;
      param_2[1] = pfVar6[1];
      param_2[2] = pfVar6[2];
      *pfVar6 = fVar1;
      pfVar6[1] = fVar2;
      pfVar6[2] = fVar3;
    }
    fVar1 = param_2[iVar5 * 3];
    if (fVar1 < *param_2) {
      fVar2 = param_2[iVar5 * 3 + 1];
      fVar3 = param_2[iVar5 * 3 + 2];
      param_2[iVar5 * 3] = *param_2;
      param_2[iVar5 * 3 + 1] = param_2[1];
      param_2[iVar5 * 3 + 2] = param_2[2];
      *param_2 = fVar1;
      param_2[1] = fVar2;
      param_2[2] = fVar3;
      fVar1 = *param_2;
      if (fVar1 < *pfVar6) {
        *param_2 = *pfVar6;
        param_2[1] = pfVar6[1];
        param_2[2] = pfVar6[2];
        *pfVar6 = fVar1;
        pfVar6[1] = fVar2;
        pfVar6[2] = fVar3;
      }
    }
    pfVar7 = param_3 + iVar5 * -6;
    pfVar6 = param_3 + iVar5 * -3;
    fVar1 = *pfVar6;
    if (fVar1 < *pfVar7) {
      fVar2 = pfVar6[2];
      fVar3 = pfVar6[1];
      *pfVar6 = *pfVar7;
      pfVar6[1] = pfVar7[1];
      pfVar6[2] = pfVar7[2];
      *pfVar7 = fVar1;
      pfVar7[2] = fVar2;
      pfVar7[1] = fVar3;
    }
    fVar1 = *param_3;
    if (fVar1 < *pfVar6) {
      fVar2 = param_3[1];
      fVar3 = param_3[2];
      *param_3 = *pfVar6;
      param_3[1] = pfVar6[1];
      param_3[2] = pfVar6[2];
      *pfVar6 = fVar1;
      pfVar6[1] = fVar2;
      pfVar6[2] = fVar3;
      fVar1 = *pfVar6;
      if (fVar1 < *pfVar7) {
        fVar2 = pfVar6[1];
        *pfVar6 = *pfVar7;
        pfVar6[1] = pfVar7[1];
        pfVar6[2] = pfVar7[2];
        *pfVar7 = fVar1;
        pfVar7[1] = fVar2;
        pfVar7[2] = fVar3;
      }
    }
    fVar1 = *param_2;
    if (fVar1 < param_1[iVar5 * 3]) {
      fVar2 = param_2[1];
      fVar3 = param_2[2];
      *param_2 = param_1[iVar5 * 3];
      param_2[1] = param_1[iVar5 * 3 + 1];
      param_2[2] = param_1[iVar5 * 3 + 2];
      param_1[iVar5 * 3] = fVar1;
      param_1[iVar5 * 3 + 1] = fVar2;
      param_1[iVar5 * 3 + 2] = fVar3;
    }
    fVar1 = *pfVar6;
    if (fVar1 < *param_2) {
      fVar2 = pfVar6[1];
      fVar3 = pfVar6[2];
      *pfVar6 = *param_2;
      pfVar6[1] = param_2[1];
      pfVar6[2] = param_2[2];
      *param_2 = fVar1;
      param_2[1] = fVar2;
      param_2[2] = fVar3;
      fVar1 = *param_2;
      if (fVar1 < param_1[iVar5 * 3]) {
        *param_2 = param_1[iVar5 * 3];
        param_2[1] = param_1[iVar5 * 3 + 1];
        param_2[2] = param_1[iVar5 * 3 + 2];
        param_1[iVar5 * 3] = fVar1;
        param_1[iVar5 * 3 + 1] = fVar2;
        param_1[iVar5 * 3 + 2] = fVar3;
        return;
      }
    }
  }
  return;
}


/* FUN_004f5500 @ 004f5500  kind=gamemisc  attributed-by=none  size=167 */

void __cdecl FUN_004f5500(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  int iVar1;
  
  iVar1 = ((int)param_3 - (int)param_1) / 0xc;
  if (0x28 < iVar1) {
    iVar1 = iVar1 + 1;
    iVar1 = (int)(iVar1 + (iVar1 >> 0x1f & 7U)) >> 3;
    FUN_004f5050(param_1,param_1 + iVar1 * 3,param_1 + iVar1 * 6);
    FUN_004f5050(param_2 + iVar1 * -3,param_2,param_2 + iVar1 * 3);
    FUN_004f5050(param_3 + iVar1 * -6,param_3 + iVar1 * -3,param_3);
    FUN_004f5050(param_1 + iVar1 * 3,param_2,param_3 + iVar1 * -3);
    return;
  }
  FUN_004f5050(param_1,param_2,param_3);
  return;
}


/* FUN_004f5940 @ 004f5940  kind=gamemisc  attributed-by=none  size=167 */

void __cdecl FUN_004f5940(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  int iVar1;
  
  iVar1 = ((int)param_3 - (int)param_1) / 0xc;
  if (0x28 < iVar1) {
    iVar1 = iVar1 + 1;
    iVar1 = (int)(iVar1 + (iVar1 >> 0x1f & 7U)) >> 3;
    FUN_004f50e0(param_1,param_1 + iVar1 * 3,param_1 + iVar1 * 6);
    FUN_004f50e0(param_2 + iVar1 * -3,param_2,param_2 + iVar1 * 3);
    FUN_004f50e0(param_3 + iVar1 * -6,param_3 + iVar1 * -3,param_3);
    FUN_004f50e0(param_1 + iVar1 * 3,param_2,param_3 + iVar1 * -3);
    return;
  }
  FUN_004f50e0(param_1,param_2,param_3);
  return;
}


/* FUN_004f59f0 @ 004f59f0  kind=gamemisc  attributed-by=none  size=202 */

undefined1 * __cdecl FUN_004f59f0(undefined4 *param_1,undefined4 *param_2,undefined1 *param_3)

{
  undefined4 *puVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  int iVar4;
  undefined4 *puVar5;
  
  if (param_1 != param_2) {
    puVar5 = param_1 + 1;
    do {
      *param_3 = *(undefined1 *)(puVar5 + -1);
      param_3[1] = *(undefined1 *)((int)puVar5 + -3);
      *(undefined4 *)(param_3 + 4) = *puVar5;
      *(undefined4 *)(param_3 + 8) = puVar5[1];
      param_3[0xc] = *(undefined1 *)(puVar5 + 2);
      param_3[0xd] = *(undefined1 *)((int)puVar5 + 9);
      param_3[0xe] = *(undefined1 *)((int)puVar5 + 10);
      *(undefined2 *)(param_3 + 0x10) = *(undefined2 *)(puVar5 + 3);
      puVar3 = (undefined1 *)((int)puVar5 + 0x13);
      puVar2 = param_3 + 0x15;
      iVar4 = 0x20;
      do {
        puVar2[-1] = puVar3[-3];
        *puVar2 = puVar2[(int)puVar5 + (-4 - (int)param_3)];
        puVar2[1] = puVar3[-1];
        puVar2[2] = *puVar3;
        *(undefined4 *)(puVar2 + 3) = *(undefined4 *)(puVar3 + 1);
        puVar3 = puVar3 + 8;
        puVar2 = puVar2 + 8;
        iVar4 = iVar4 + -1;
      } while (iVar4 != 0);
      *(undefined4 *)(param_3 + 0x114) = puVar5[0x44];
      puVar1 = puVar5 + 0x45;
      param_3 = param_3 + 0x118;
      puVar5 = puVar5 + 0x46;
    } while (puVar1 != param_2);
    return param_3;
  }
  return param_3;
}


/* FUN_004f5ac0 @ 004f5ac0  kind=gamemisc  attributed-by=none  size=117 */

void __cdecl FUN_004f5ac0(int param_1,int param_2,int param_3,float *param_4)

{
  float fVar1;
  int iVar2;
  
  while (param_3 < param_2) {
    iVar2 = (param_2 + -1) / 2;
    fVar1 = *(float *)(param_1 + iVar2 * 0xc);
    if (*param_4 <= fVar1) break;
    *(float *)(param_1 + param_2 * 0xc) = fVar1;
    *(undefined4 *)(param_1 + 4 + param_2 * 0xc) = *(undefined4 *)(param_1 + 4 + iVar2 * 0xc);
    *(undefined4 *)(param_1 + 8 + param_2 * 0xc) = *(undefined4 *)(param_1 + 8 + iVar2 * 0xc);
    param_2 = iVar2;
  }
  *(float *)(param_1 + param_2 * 0xc) = *param_4;
  *(float *)(param_1 + 4 + param_2 * 0xc) = param_4[1];
  *(float *)(param_1 + 8 + param_2 * 0xc) = param_4[2];
  return;
}


/* FUN_004f5b40 @ 004f5b40  kind=gamemisc  attributed-by=none  size=114 */

void __cdecl FUN_004f5b40(int param_1,int param_2,int param_3,undefined4 *param_4)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  
  while (param_3 < param_2) {
    iVar3 = (param_2 + -1) / 2;
    puVar1 = (undefined4 *)(param_1 + iVar3 * 0xc);
    if ((int)param_4[2] <= (int)puVar1[2]) break;
    puVar2 = (undefined4 *)(param_1 + param_2 * 0xc);
    *puVar2 = *puVar1;
    puVar2[1] = puVar1[1];
    puVar2[2] = puVar1[2];
    param_2 = iVar3;
  }
  puVar1 = (undefined4 *)(param_1 + param_2 * 0xc);
  *puVar1 = *param_4;
  puVar1[1] = param_4[1];
  puVar1[2] = param_4[2];
  return;
}


/* FUN_004f5c40 @ 004f5c40  kind=gamemisc  attributed-by=none  size=116 */

void __cdecl FUN_004f5c40(int param_1,int param_2,int param_3,undefined4 *param_4)

{
  float fVar1;
  int iVar2;
  
  while ((param_3 < param_2 &&
         (iVar2 = (param_2 + -1) / 2, fVar1 = *(float *)(param_1 + 8 + iVar2 * 0xc),
         (float)param_4[2] <= fVar1 && fVar1 != (float)param_4[2]))) {
    *(undefined4 *)(param_1 + param_2 * 0xc) = *(undefined4 *)(param_1 + iVar2 * 0xc);
    *(undefined4 *)(param_1 + 4 + param_2 * 0xc) = *(undefined4 *)(param_1 + 4 + iVar2 * 0xc);
    *(undefined4 *)(param_1 + 8 + param_2 * 0xc) = *(undefined4 *)(param_1 + 8 + iVar2 * 0xc);
    param_2 = iVar2;
  }
  *(undefined4 *)(param_1 + param_2 * 0xc) = *param_4;
  *(undefined4 *)(param_1 + 4 + param_2 * 0xc) = param_4[1];
  *(undefined4 *)(param_1 + 8 + param_2 * 0xc) = param_4[2];
  return;
}


/* FUN_004f5e00 @ 004f5e00  kind=gamemisc  attributed-by=none  size=310 */

void __cdecl FUN_004f5e00(int *param_1,int *param_2,int param_3,undefined4 param_4)

{
  int *piVar1;
  undefined4 *puVar2;
  int iVar3;
  int *piVar4;
  undefined4 local_c [2];
  
  iVar3 = (int)param_2 - (int)param_1;
  do {
    iVar3 = iVar3 / 0xc;
    if (iVar3 < 0x21) {
LAB_004f5ed8:
      if (1 < iVar3) {
        FUN_004f4940((undefined8 *)param_1,(undefined8 *)param_2);
      }
      return;
    }
    if (param_3 < 1) {
      if (0x20 < iVar3) {
        if (1 < ((int)param_2 - (int)param_1) / 0xc) {
          FUN_004f4cb0((int)param_1,(int)param_2);
        }
        FUN_004f6280(param_1,param_2);
        return;
      }
      goto LAB_004f5ed8;
    }
    puVar2 = (undefined4 *)FUN_004f67f0(local_c,param_1,param_2);
    piVar4 = (int *)*puVar2;
    piVar1 = (int *)puVar2[1];
    param_3 = param_3 / 2 + (param_3 / 2) / 2;
    if (((int)piVar4 - (int)param_1) / 0xc < ((int)param_2 - (int)piVar1) / 0xc) {
      FUN_004f5e00(param_1,piVar4,param_3,param_4);
      param_1 = piVar1;
      piVar4 = param_2;
    }
    else {
      FUN_004f5e00(piVar1,param_2,param_3,param_4);
    }
    iVar3 = (int)piVar4 - (int)param_1;
    param_2 = piVar4;
  } while( true );
}


/* FUN_004f6080 @ 004f6080  kind=gamemisc  attributed-by=none  size=310 */

void __cdecl FUN_004f6080(float *param_1,float *param_2,int param_3,undefined4 param_4)

{
  float *pfVar1;
  undefined4 *puVar2;
  int iVar3;
  float *pfVar4;
  undefined4 local_c [2];
  
  iVar3 = (int)param_2 - (int)param_1;
  do {
    iVar3 = iVar3 / 0xc;
    if (iVar3 < 0x21) {
LAB_004f6158:
      if (1 < iVar3) {
        FUN_004f4ab0((undefined8 *)param_1,(undefined8 *)param_2);
      }
      return;
    }
    if (param_3 < 1) {
      if (0x20 < iVar3) {
        if (1 < ((int)param_2 - (int)param_1) / 0xc) {
          FUN_004f4f30((int)param_1,(int)param_2);
        }
        FUN_004f63f0(param_1,param_2);
        return;
      }
      goto LAB_004f6158;
    }
    puVar2 = (undefined4 *)FUN_004f6db0(local_c,param_1,param_2);
    pfVar4 = (float *)*puVar2;
    pfVar1 = (float *)puVar2[1];
    param_3 = param_3 / 2 + (param_3 / 2) / 2;
    if (((int)pfVar4 - (int)param_1) / 0xc < ((int)param_2 - (int)pfVar1) / 0xc) {
      FUN_004f6080(param_1,pfVar4,param_3,param_4);
      param_1 = pfVar1;
      pfVar4 = param_2;
    }
    else {
      FUN_004f6080(pfVar1,param_2,param_3,param_4);
    }
    iVar3 = (int)pfVar4 - (int)param_1;
    param_2 = pfVar4;
  } while( true );
}


/* FUN_004f61c0 @ 004f61c0  kind=gamemisc  attributed-by=none  size=192 */

void __cdecl FUN_004f61c0(undefined4 *param_1,int param_2)

{
  undefined4 *puVar1;
  float local_14;
  undefined4 local_10;
  undefined4 local_c;
  uint local_8;
  
  local_8 = DAT_00583cc8 ^ (uint)&stack0xfffffffc;
  if (1 < (param_2 - (int)param_1) / 0xc) {
    puVar1 = (undefined4 *)(param_2 + -8);
    do {
      local_10 = *puVar1;
      local_14 = (float)puVar1[-1];
      local_c = puVar1[1];
      puVar1[-1] = *param_1;
      *puVar1 = param_1[1];
      puVar1[1] = param_1[2];
      FUN_004f38a0((int)param_1,0,((-4 - (int)param_1) + (int)puVar1) / 0xc,&local_14);
      puVar1 = puVar1 + -3;
    } while (1 < ((8 - (int)param_1) + (int)puVar1) / 0xc);
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


/* FUN_004f6280 @ 004f6280  kind=gamemisc  attributed-by=none  size=163 */

void __cdecl FUN_004f6280(undefined4 *param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 *puVar2;
  undefined8 local_14;
  undefined4 local_c;
  uint local_8;
  
  local_8 = DAT_00583cc8 ^ (uint)&stack0xfffffffc;
  iVar1 = (int)param_2 - (int)param_1;
  while (1 < iVar1 / 0xc) {
    local_c = param_2[-1];
    local_14 = *(undefined8 *)(param_2 + -3);
    puVar2 = param_2 + -3;
    *puVar2 = *param_1;
    param_2[-2] = param_1[1];
    param_2[-1] = param_1[2];
    FUN_004f3940((int)param_1,0,(iVar1 + -0xc) / 0xc,(undefined4 *)&local_14);
    param_2 = puVar2;
    iVar1 = (int)puVar2 - (int)param_1;
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


/* FUN_004f63f0 @ 004f63f0  kind=gamemisc  attributed-by=none  size=167 */

void __cdecl FUN_004f63f0(undefined4 *param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 *puVar2;
  undefined8 local_14;
  undefined4 local_c;
  uint local_8;
  
  local_8 = DAT_00583cc8 ^ (uint)&stack0xfffffffc;
  iVar1 = (int)param_2 - (int)param_1;
  while (1 < iVar1 / 0xc) {
    local_14 = *(undefined8 *)(param_2 + -3);
    puVar2 = param_2 + -3;
    local_c = param_2[-1];
    *puVar2 = *param_1;
    param_2[-2] = param_1[1];
    param_2[-1] = param_1[2];
    FUN_004f3a80((int)param_1,0,(iVar1 + -0xc) / 0xc,(undefined4 *)&local_14);
    param_2 = puVar2;
    iVar1 = (int)puVar2 - (int)param_1;
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


/* FUN_004f64a0 @ 004f64a0  kind=gamemisc  attributed-by=none  size=170 */

void __cdecl FUN_004f64a0(undefined4 *param_1,float *param_2,float *param_3)

{
  float fVar1;
  float fVar2;
  undefined8 uVar3;
  float *pfVar4;
  uint uVar5;
  float *pfVar6;
  float *pfVar7;
  float *pfVar8;
  float *pfVar9;
  float *pfVar10;
  float *local_64;
  
  uVar5 = DAT_00583cc8 ^ (uint)&stack0xfffffffc;
  local_64 = param_2 + (((int)param_3 - (int)param_2) / 0x18) * 3;
  FUN_004f5170(param_2,local_64,param_3 + -3);
  pfVar6 = local_64 + 3;
  for (; param_2 < local_64; local_64 = local_64 + -3) {
    if ((local_64[-3] < *local_64) || (*local_64 < local_64[-3])) break;
  }
  pfVar4 = pfVar6;
  pfVar9 = local_64;
  if (pfVar6 < param_3) {
    if (3 < ((int)param_3 + (0xb - (int)pfVar6)) / 0xc) {
      fVar1 = *local_64;
      do {
        pfVar4 = pfVar6;
        if ((*pfVar6 < fVar1) || (fVar1 < *pfVar6)) goto joined_r0x004f65d3;
        if ((pfVar6[3] < fVar1) || (fVar1 < pfVar6[3])) {
          pfVar6 = pfVar6 + 3;
          pfVar4 = pfVar6;
          goto joined_r0x004f65d3;
        }
        if ((pfVar6[6] < fVar1) || (fVar1 < pfVar6[6])) {
          pfVar6 = pfVar6 + 6;
          pfVar4 = pfVar6;
          goto joined_r0x004f65d3;
        }
        if ((pfVar6[9] < fVar1) || (fVar1 < pfVar6[9])) {
          pfVar6 = pfVar6 + 9;
          pfVar4 = pfVar6;
          goto joined_r0x004f65d3;
        }
        pfVar6 = pfVar6 + 0xc;
      } while ((int)pfVar6 < (int)(param_3 + -9));
    }
    pfVar4 = pfVar6;
    if (pfVar6 < param_3) {
      do {
        pfVar4 = pfVar6;
        if ((*pfVar6 < *local_64) || (*local_64 < *pfVar6)) break;
        pfVar6 = pfVar6 + 3;
        pfVar4 = pfVar6;
      } while (pfVar6 < param_3);
    }
  }
joined_r0x004f65d3:
  do {
    if (param_3 <= pfVar4) {
joined_r0x004f6629:
      for (; param_2 < local_64; local_64 = local_64 + -3) {
        fVar1 = local_64[-3];
        pfVar7 = pfVar9;
        if (*pfVar9 <= fVar1) {
          if (*pfVar9 < fVar1) break;
          fVar2 = pfVar9[-3];
          pfVar7 = pfVar9 + -3;
          uVar3 = *(undefined8 *)(pfVar9 + -2);
          *pfVar7 = fVar1;
          pfVar9[-2] = local_64[-2];
          pfVar9[-1] = local_64[-1];
          local_64[-3] = fVar2;
          *(undefined8 *)(local_64 + -2) = uVar3;
        }
        pfVar9 = pfVar7;
      }
      if (local_64 == param_2) {
        if (pfVar4 == param_3) {
          *param_1 = pfVar9;
          param_1[1] = pfVar6;
          __security_check_cookie(uVar5 ^ (uint)&stack0xfffffffc);
          return;
        }
        if (pfVar6 != pfVar4) {
          fVar1 = *pfVar9;
          uVar3 = *(undefined8 *)(pfVar9 + 1);
          *pfVar9 = *pfVar6;
          pfVar9[1] = pfVar6[1];
          pfVar9[2] = pfVar6[2];
          *pfVar6 = fVar1;
          *(undefined8 *)(pfVar6 + 1) = uVar3;
        }
        fVar1 = *pfVar9;
        uVar3 = *(undefined8 *)(pfVar9 + 1);
        *pfVar9 = *pfVar4;
        pfVar9[1] = pfVar4[1];
        pfVar9[2] = pfVar4[2];
        *pfVar4 = fVar1;
        *(undefined8 *)(pfVar4 + 1) = uVar3;
        pfVar6 = pfVar6 + 3;
        pfVar4 = pfVar4 + 3;
        pfVar9 = pfVar9 + 3;
      }
      else {
        pfVar7 = local_64 + -3;
        if (pfVar4 == param_3) {
          pfVar10 = pfVar9 + -3;
          if (pfVar7 != pfVar10) {
            fVar1 = *pfVar7;
            uVar3 = *(undefined8 *)(local_64 + -2);
            *pfVar7 = *pfVar10;
            local_64[-2] = pfVar9[-2];
            local_64[-1] = pfVar9[-1];
            *pfVar10 = fVar1;
            *(undefined8 *)(pfVar9 + -2) = uVar3;
          }
          fVar1 = *pfVar10;
          uVar3 = *(undefined8 *)(pfVar9 + -2);
          pfVar8 = pfVar6 + -3;
          *pfVar10 = *pfVar8;
          pfVar9[-2] = pfVar6[-2];
          pfVar9[-1] = pfVar6[-1];
          *pfVar8 = fVar1;
          *(undefined8 *)(pfVar6 + -2) = uVar3;
          pfVar6 = pfVar8;
          local_64 = pfVar7;
          pfVar9 = pfVar10;
        }
        else {
          fVar1 = *pfVar4;
          uVar3 = *(undefined8 *)(pfVar4 + 1);
          *pfVar4 = *pfVar7;
          pfVar4[1] = local_64[-2];
          pfVar4[2] = local_64[-1];
          *pfVar7 = fVar1;
          *(undefined8 *)(local_64 + -2) = uVar3;
          pfVar4 = pfVar4 + 3;
          local_64 = pfVar7;
        }
      }
      goto joined_r0x004f65d3;
    }
    fVar1 = *pfVar4;
    pfVar7 = pfVar6;
    if (fVar1 <= *pfVar9) {
      if (fVar1 < *pfVar9) goto joined_r0x004f6629;
      pfVar7 = pfVar6 + 3;
      fVar2 = *pfVar6;
      uVar3 = *(undefined8 *)(pfVar6 + 1);
      *pfVar6 = fVar1;
      pfVar6[1] = pfVar4[1];
      pfVar6[2] = pfVar4[2];
      *pfVar4 = fVar2;
      *(undefined8 *)(pfVar4 + 1) = uVar3;
    }
    pfVar6 = pfVar7;
    pfVar4 = pfVar4 + 3;
  } while( true );
}


/* FUN_004f654a @ 004f654a  kind=gamemisc  attributed-by=none  size=669 */

void __fastcall FUN_004f654a(undefined4 param_1,float *param_2)

{
  float fVar1;
  float fVar2;
  undefined4 *puVar3;
  uint uVar4;
  float *pfVar5;
  float *pfVar6;
  float *unaff_EBX;
  float *pfVar7;
  uint unaff_EBP;
  float *unaff_EDI;
  float *pfVar8;
  float *pfVar9;
  bool bVar10;
  float in_XMM0_Da;
  undefined4 uStack00000008;
  
  do {
    if ((*unaff_EBX < in_XMM0_Da) || (in_XMM0_Da < *unaff_EBX)) goto LAB_004f65ca;
    if ((unaff_EBX[3] < in_XMM0_Da) || (in_XMM0_Da < unaff_EBX[3])) {
      unaff_EBX = unaff_EBX + 3;
      goto LAB_004f65ca;
    }
    if ((unaff_EBX[6] < in_XMM0_Da) || (in_XMM0_Da < unaff_EBX[6])) {
      unaff_EBX = unaff_EBX + 6;
      goto LAB_004f65ca;
    }
    if ((unaff_EBX[9] < in_XMM0_Da) || (in_XMM0_Da < unaff_EBX[9])) {
      unaff_EBX = unaff_EBX + 9;
      goto LAB_004f65ca;
    }
    unaff_EBX = unaff_EBX + 0xc;
  } while ((int)unaff_EBX < (int)(param_2 + -9));
  if (unaff_EBX < param_2) {
    do {
      if ((*unaff_EBX < *unaff_EDI) || (*unaff_EDI < *unaff_EBX)) break;
      unaff_EBX = unaff_EBX + 3;
    } while (unaff_EBX < param_2);
  }
LAB_004f65ca:
  *(float **)(unaff_EBP - 0x60) = unaff_EDI;
  pfVar7 = unaff_EBX;
  pfVar8 = unaff_EDI;
  do {
    pfVar6 = unaff_EDI;
    pfVar5 = pfVar7;
    if (unaff_EBX < param_2) {
      do {
        fVar1 = *unaff_EBX;
        pfVar7 = pfVar5;
        if (fVar1 <= *pfVar8) {
          if (fVar1 < *pfVar8) break;
          pfVar7 = pfVar5 + 3;
          fVar2 = *pfVar5;
          *(float *)(unaff_EBP - 0x30) = pfVar5[1];
          *pfVar5 = fVar1;
          *(float *)(unaff_EBP - 0x2c) = pfVar5[2];
          pfVar5[1] = unaff_EBX[1];
          pfVar5[2] = unaff_EBX[2];
          *unaff_EBX = fVar2;
          *(undefined8 *)(unaff_EBX + 1) = *(undefined8 *)(unaff_EBP - 0x30);
        }
        unaff_EBX = unaff_EBX + 3;
        pfVar5 = pfVar7;
      } while (unaff_EBX < param_2);
      pfVar6 = *(float **)(unaff_EBP - 0x60);
    }
    pfVar5 = *(float **)(unaff_EBP - 100);
    bVar10 = pfVar6 == pfVar5;
    if (pfVar5 < pfVar6) {
      do {
        fVar1 = pfVar6[-3];
        pfVar9 = pfVar8;
        if (*pfVar8 <= fVar1) {
          if (*pfVar8 < fVar1) break;
          fVar2 = pfVar8[-3];
          pfVar9 = pfVar8 + -3;
          *(float *)(unaff_EBP - 0xc) = pfVar8[-2];
          *pfVar9 = fVar1;
          *(float *)(unaff_EBP - 8) = pfVar8[-1];
          pfVar8[-2] = pfVar6[-2];
          pfVar8[-1] = pfVar6[-1];
          pfVar5 = *(float **)(unaff_EBP - 100);
          pfVar6[-3] = fVar2;
          *(undefined8 *)(pfVar6 + -2) = *(undefined8 *)(unaff_EBP - 0xc);
        }
        pfVar6 = pfVar6 + -3;
        pfVar8 = pfVar9;
      } while (pfVar5 < pfVar6);
      param_2 = *(float **)(unaff_EBP - 0x5c);
      *(float **)(unaff_EBP - 0x60) = pfVar6;
      bVar10 = pfVar6 == pfVar5;
      pfVar8 = pfVar9;
    }
    if (bVar10) {
      if (unaff_EBX == param_2) {
        puVar3 = *(undefined4 **)(unaff_EBP - 0x68);
        uVar4 = *(uint *)(unaff_EBP - 4);
        *puVar3 = pfVar8;
        puVar3[1] = pfVar7;
        uStack00000008 = 0x4f67e6;
        __security_check_cookie(uVar4 ^ unaff_EBP);
        return;
      }
      if (pfVar7 != unaff_EBX) {
        fVar1 = *pfVar8;
        *(float *)(unaff_EBP - 0x18) = pfVar8[1];
        *(float *)(unaff_EBP - 0x14) = pfVar8[2];
        *pfVar8 = *pfVar7;
        pfVar8[1] = pfVar7[1];
        pfVar8[2] = pfVar7[2];
        *pfVar7 = fVar1;
        *(undefined8 *)(pfVar7 + 1) = *(undefined8 *)(unaff_EBP - 0x18);
      }
      fVar1 = *pfVar8;
      *(float *)(unaff_EBP - 0x24) = pfVar8[1];
      *(float *)(unaff_EBP - 0x20) = pfVar8[2];
      *pfVar8 = *unaff_EBX;
      pfVar8[1] = unaff_EBX[1];
      pfVar8[2] = unaff_EBX[2];
      unaff_EDI = *(float **)(unaff_EBP - 0x60);
      *unaff_EBX = fVar1;
      *(undefined8 *)(unaff_EBX + 1) = *(undefined8 *)(unaff_EBP - 0x24);
      param_2 = *(float **)(unaff_EBP - 0x5c);
      unaff_EBX = unaff_EBX + 3;
      pfVar7 = pfVar7 + 3;
      pfVar8 = pfVar8 + 3;
    }
    else {
      unaff_EDI = pfVar6 + -3;
      *(float **)(unaff_EBP - 0x60) = unaff_EDI;
      if (unaff_EBX == param_2) {
        pfVar5 = pfVar8 + -3;
        if (unaff_EDI != pfVar5) {
          fVar1 = *unaff_EDI;
          *(float *)(unaff_EBP - 0x3c) = pfVar6[-2];
          *(float *)(unaff_EBP - 0x38) = pfVar6[-1];
          *unaff_EDI = *pfVar5;
          pfVar6[-2] = pfVar8[-2];
          pfVar6[-1] = pfVar8[-1];
          *pfVar5 = fVar1;
          *(undefined8 *)(pfVar8 + -2) = *(undefined8 *)(unaff_EBP - 0x3c);
        }
        fVar1 = *pfVar5;
        *(float *)(unaff_EBP - 0x54) = pfVar8[-2];
        pfVar6 = pfVar7 + -3;
        *(float *)(unaff_EBP - 0x50) = pfVar8[-1];
        *pfVar5 = *pfVar6;
        pfVar8[-2] = pfVar7[-2];
        pfVar8[-1] = pfVar7[-1];
        *pfVar6 = fVar1;
        *(undefined8 *)(pfVar7 + -2) = *(undefined8 *)(unaff_EBP - 0x54);
        pfVar7 = pfVar6;
        pfVar8 = pfVar5;
      }
      else {
        fVar1 = *unaff_EBX;
        *(float *)(unaff_EBP - 0x48) = unaff_EBX[1];
        *(float *)(unaff_EBP - 0x44) = unaff_EBX[2];
        *unaff_EBX = *unaff_EDI;
        unaff_EBX[1] = pfVar6[-2];
        unaff_EBX[2] = pfVar6[-1];
        *unaff_EDI = fVar1;
        *(undefined8 *)(pfVar6 + -2) = *(undefined8 *)(unaff_EBP - 0x48);
        unaff_EBX = unaff_EBX + 3;
      }
    }
  } while( true );
}


/* FUN_004f67f0 @ 004f67f0  kind=gamemisc  attributed-by=none  size=616 */

void __cdecl FUN_004f67f0(undefined4 *param_1,int *param_2,int *param_3)

{
  undefined8 uVar1;
  int *piVar2;
  int iVar3;
  int *piVar4;
  int *piVar5;
  int *piVar6;
  int *piVar7;
  int *local_24;
  int *local_20;
  undefined8 local_14;
  int local_c;
  uint local_8;
  
  local_8 = DAT_00583cc8 ^ (uint)&stack0xfffffffc;
  local_20 = param_2 + (((int)param_3 - (int)param_2) / 0x18) * 3;
  FUN_004f5500(param_2,local_20,param_3 + -3);
  piVar4 = local_20 + 3;
  for (; param_2 < local_20; local_20 = local_20 + -3) {
    if ((local_20[-1] < local_20[2]) || (local_20[2] < local_20[-1])) break;
  }
  local_24 = piVar4;
  piVar2 = piVar4;
  piVar7 = local_20;
  if (piVar4 < param_3) {
    do {
      local_24 = piVar4;
      piVar2 = piVar4;
      if ((piVar4[2] < local_20[2]) || (local_20[2] < piVar4[2])) break;
      piVar4 = piVar4 + 3;
      local_24 = piVar4;
      piVar2 = piVar4;
    } while (piVar4 < param_3);
  }
joined_r0x004f6892:
  do {
    if (param_3 <= piVar4) {
LAB_004f68d9:
      if (param_2 < local_20) {
        piVar5 = local_20 + -1;
        piVar6 = piVar7;
        do {
          piVar7 = piVar6;
          piVar4 = local_24;
          if (piVar6[2] <= *piVar5) {
            if (piVar6[2] < *piVar5) break;
            local_c = piVar6[-1];
            local_14 = *(undefined8 *)(piVar6 + -3);
            piVar7 = piVar6 + -3;
            *piVar7 = piVar5[-2];
            piVar6[-2] = piVar5[-1];
            piVar6[-1] = *piVar5;
            iVar3 = 0;
            do {
              *(undefined4 *)((int)piVar5 + iVar3 + -8) = *(undefined4 *)((int)&local_14 + iVar3);
              iVar3 = iVar3 + 4;
            } while (iVar3 < 8);
            *piVar5 = local_c;
          }
          local_20 = local_20 + -3;
          piVar5 = piVar5 + -3;
          piVar6 = piVar7;
        } while (param_2 < local_20);
      }
      if (local_20 == param_2) {
        if (piVar4 == param_3) {
          *param_1 = piVar7;
          param_1[1] = piVar2;
          __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
          return;
        }
        if (piVar2 != piVar4) {
          uVar1 = *(undefined8 *)piVar7;
          iVar3 = piVar7[2];
          *piVar7 = *piVar2;
          piVar7[1] = piVar2[1];
          piVar7[2] = piVar2[2];
          *(undefined8 *)piVar2 = uVar1;
          piVar2[2] = iVar3;
        }
        uVar1 = *(undefined8 *)piVar7;
        iVar3 = piVar7[2];
        *piVar7 = *piVar4;
        piVar7[1] = piVar4[1];
        piVar7[2] = piVar4[2];
        *(undefined8 *)piVar4 = uVar1;
        piVar4[2] = iVar3;
        piVar4 = piVar4 + 3;
        local_24 = piVar4;
        piVar2 = piVar2 + 3;
        piVar7 = piVar7 + 3;
      }
      else {
        piVar5 = local_20 + -3;
        if (piVar4 == param_3) {
          piVar6 = piVar7 + -3;
          if (piVar5 != piVar6) {
            uVar1 = *(undefined8 *)piVar5;
            iVar3 = local_20[-1];
            *piVar5 = *piVar6;
            local_20[-2] = piVar7[-2];
            local_20[-1] = piVar7[-1];
            *(undefined8 *)piVar6 = uVar1;
            piVar7[-1] = iVar3;
          }
          uVar1 = *(undefined8 *)piVar6;
          iVar3 = piVar7[-1];
          *piVar6 = piVar2[-3];
          piVar7[-2] = piVar2[-2];
          piVar7[-1] = piVar2[-1];
          *(undefined8 *)(piVar2 + -3) = uVar1;
          piVar2[-1] = iVar3;
          piVar2 = piVar2 + -3;
          local_20 = piVar5;
          piVar7 = piVar6;
        }
        else {
          uVar1 = *(undefined8 *)piVar4;
          iVar3 = piVar4[2];
          *piVar4 = *piVar5;
          piVar4[1] = local_20[-2];
          piVar4[2] = local_20[-1];
          *(undefined8 *)piVar5 = uVar1;
          local_20[-1] = iVar3;
          piVar4 = piVar4 + 3;
          local_24 = piVar4;
          local_20 = piVar5;
        }
      }
      goto joined_r0x004f6892;
    }
    piVar5 = piVar2;
    if (piVar4[2] <= piVar7[2]) {
      local_24 = piVar4;
      if (piVar4[2] < piVar7[2]) goto LAB_004f68d9;
      piVar5 = piVar2 + 3;
      uVar1 = *(undefined8 *)piVar2;
      iVar3 = piVar2[2];
      *piVar2 = *piVar4;
      piVar2[1] = piVar4[1];
      piVar2[2] = piVar4[2];
      *(undefined8 *)piVar4 = uVar1;
      piVar4[2] = iVar3;
    }
    piVar4 = piVar4 + 3;
    local_24 = piVar4;
    piVar2 = piVar5;
  } while( true );
}


/* FUN_004f6b0a @ 004f6b0a  kind=gamemisc  attributed-by=none  size=669 */

void __fastcall FUN_004f6b0a(undefined4 param_1,float *param_2)

{
  float fVar1;
  float fVar2;
  undefined4 *puVar3;
  uint uVar4;
  float *pfVar5;
  float *pfVar6;
  float *unaff_EBX;
  float *pfVar7;
  uint unaff_EBP;
  float *unaff_EDI;
  float *pfVar8;
  float *pfVar9;
  bool bVar10;
  float in_XMM0_Da;
  undefined4 uStack00000008;
  
  do {
    if ((in_XMM0_Da < *unaff_EBX) || (*unaff_EBX < in_XMM0_Da)) goto LAB_004f6b8a;
    if ((in_XMM0_Da < unaff_EBX[3]) || (unaff_EBX[3] < in_XMM0_Da)) {
      unaff_EBX = unaff_EBX + 3;
      goto LAB_004f6b8a;
    }
    if ((in_XMM0_Da < unaff_EBX[6]) || (unaff_EBX[6] < in_XMM0_Da)) {
      unaff_EBX = unaff_EBX + 6;
      goto LAB_004f6b8a;
    }
    if ((in_XMM0_Da < unaff_EBX[9]) || (unaff_EBX[9] < in_XMM0_Da)) {
      unaff_EBX = unaff_EBX + 9;
      goto LAB_004f6b8a;
    }
    unaff_EBX = unaff_EBX + 0xc;
  } while ((int)unaff_EBX < (int)(param_2 + -9));
  if (unaff_EBX < param_2) {
    do {
      if ((*unaff_EDI < *unaff_EBX) || (*unaff_EBX < *unaff_EDI)) break;
      unaff_EBX = unaff_EBX + 3;
    } while (unaff_EBX < param_2);
  }
LAB_004f6b8a:
  *(float **)(unaff_EBP - 0x60) = unaff_EDI;
  pfVar7 = unaff_EBX;
  pfVar8 = unaff_EDI;
  do {
    pfVar6 = unaff_EDI;
    pfVar5 = pfVar7;
    if (unaff_EBX < param_2) {
      do {
        fVar1 = *unaff_EBX;
        pfVar7 = pfVar5;
        if (*pfVar8 <= fVar1) {
          if (*pfVar8 < fVar1) break;
          pfVar7 = pfVar5 + 3;
          fVar2 = *pfVar5;
          *(float *)(unaff_EBP - 0x30) = pfVar5[1];
          *pfVar5 = fVar1;
          *(float *)(unaff_EBP - 0x2c) = pfVar5[2];
          pfVar5[1] = unaff_EBX[1];
          pfVar5[2] = unaff_EBX[2];
          *unaff_EBX = fVar2;
          *(undefined8 *)(unaff_EBX + 1) = *(undefined8 *)(unaff_EBP - 0x30);
        }
        unaff_EBX = unaff_EBX + 3;
        pfVar5 = pfVar7;
      } while (unaff_EBX < param_2);
      pfVar6 = *(float **)(unaff_EBP - 0x60);
    }
    pfVar5 = *(float **)(unaff_EBP - 100);
    bVar10 = pfVar6 == pfVar5;
    if (pfVar5 < pfVar6) {
      do {
        fVar1 = pfVar6[-3];
        pfVar9 = pfVar8;
        if (fVar1 <= *pfVar8) {
          if (fVar1 < *pfVar8) break;
          fVar2 = pfVar8[-3];
          pfVar9 = pfVar8 + -3;
          *(float *)(unaff_EBP - 0xc) = pfVar8[-2];
          *pfVar9 = fVar1;
          *(float *)(unaff_EBP - 8) = pfVar8[-1];
          pfVar8[-2] = pfVar6[-2];
          pfVar8[-1] = pfVar6[-1];
          pfVar5 = *(float **)(unaff_EBP - 100);
          pfVar6[-3] = fVar2;
          *(undefined8 *)(pfVar6 + -2) = *(undefined8 *)(unaff_EBP - 0xc);
        }
        pfVar6 = pfVar6 + -3;
        pfVar8 = pfVar9;
      } while (pfVar5 < pfVar6);
      param_2 = *(float **)(unaff_EBP - 0x5c);
      *(float **)(unaff_EBP - 0x60) = pfVar6;
      bVar10 = pfVar6 == pfVar5;
      pfVar8 = pfVar9;
    }
    if (bVar10) {
      if (unaff_EBX == param_2) {
        puVar3 = *(undefined4 **)(unaff_EBP - 0x68);
        uVar4 = *(uint *)(unaff_EBP - 4);
        *puVar3 = pfVar8;
        puVar3[1] = pfVar7;
        uStack00000008 = 0x4f6da6;
        __security_check_cookie(uVar4 ^ unaff_EBP);
        return;
      }
      if (pfVar7 != unaff_EBX) {
        fVar1 = *pfVar8;
        *(float *)(unaff_EBP - 0x18) = pfVar8[1];
        *(float *)(unaff_EBP - 0x14) = pfVar8[2];
        *pfVar8 = *pfVar7;
        pfVar8[1] = pfVar7[1];
        pfVar8[2] = pfVar7[2];
        *pfVar7 = fVar1;
        *(undefined8 *)(pfVar7 + 1) = *(undefined8 *)(unaff_EBP - 0x18);
      }
      fVar1 = *pfVar8;
      *(float *)(unaff_EBP - 0x24) = pfVar8[1];
      *(float *)(unaff_EBP - 0x20) = pfVar8[2];
      *pfVar8 = *unaff_EBX;
      pfVar8[1] = unaff_EBX[1];
      pfVar8[2] = unaff_EBX[2];
      unaff_EDI = *(float **)(unaff_EBP - 0x60);
      *unaff_EBX = fVar1;
      *(undefined8 *)(unaff_EBX + 1) = *(undefined8 *)(unaff_EBP - 0x24);
      param_2 = *(float **)(unaff_EBP - 0x5c);
      unaff_EBX = unaff_EBX + 3;
      pfVar7 = pfVar7 + 3;
      pfVar8 = pfVar8 + 3;
    }
    else {
      unaff_EDI = pfVar6 + -3;
      *(float **)(unaff_EBP - 0x60) = unaff_EDI;
      if (unaff_EBX == param_2) {
        pfVar5 = pfVar8 + -3;
        if (unaff_EDI != pfVar5) {
          fVar1 = *unaff_EDI;
          *(float *)(unaff_EBP - 0x3c) = pfVar6[-2];
          *(float *)(unaff_EBP - 0x38) = pfVar6[-1];
          *unaff_EDI = *pfVar5;
          pfVar6[-2] = pfVar8[-2];
          pfVar6[-1] = pfVar8[-1];
          *pfVar5 = fVar1;
          *(undefined8 *)(pfVar8 + -2) = *(undefined8 *)(unaff_EBP - 0x3c);
        }
        fVar1 = *pfVar5;
        *(float *)(unaff_EBP - 0x54) = pfVar8[-2];
        pfVar6 = pfVar7 + -3;
        *(float *)(unaff_EBP - 0x50) = pfVar8[-1];
        *pfVar5 = *pfVar6;
        pfVar8[-2] = pfVar7[-2];
        pfVar8[-1] = pfVar7[-1];
        *pfVar6 = fVar1;
        *(undefined8 *)(pfVar7 + -2) = *(undefined8 *)(unaff_EBP - 0x54);
        pfVar7 = pfVar6;
        pfVar8 = pfVar5;
      }
      else {
        fVar1 = *unaff_EBX;
        *(float *)(unaff_EBP - 0x48) = unaff_EBX[1];
        *(float *)(unaff_EBP - 0x44) = unaff_EBX[2];
        *unaff_EBX = *unaff_EDI;
        unaff_EBX[1] = pfVar6[-2];
        unaff_EBX[2] = pfVar6[-1];
        *unaff_EDI = fVar1;
        *(undefined8 *)(pfVar6 + -2) = *(undefined8 *)(unaff_EBP - 0x48);
        unaff_EBX = unaff_EBX + 3;
      }
    }
  } while( true );
}


/* FUN_004f6db0 @ 004f6db0  kind=gamemisc  attributed-by=none  size=802 */

void __cdecl FUN_004f6db0(undefined4 *param_1,float *param_2,float *param_3)

{
  float fVar1;
  undefined8 uVar2;
  float *pfVar3;
  int iVar4;
  float *pfVar5;
  float *pfVar6;
  float *pfVar7;
  float *pfVar8;
  float *local_18;
  undefined8 local_14;
  float local_c;
  uint local_8;
  
  local_8 = DAT_00583cc8 ^ (uint)&stack0xfffffffc;
  local_18 = param_2 + (((int)param_3 - (int)param_2) / 0x18) * 3;
  FUN_004f5940(param_2,local_18,param_3 + -3);
  pfVar6 = local_18 + 3;
  for (; param_2 < local_18; local_18 = local_18 + -3) {
    if ((local_18[2] < local_18[-1]) || (local_18[-1] < local_18[2])) break;
  }
  pfVar3 = pfVar6;
  pfVar8 = local_18;
  if (pfVar6 < param_3) {
    if (3 < ((int)param_3 + (0xb - (int)pfVar6)) / 0xc) {
      fVar1 = local_18[2];
      do {
        pfVar3 = pfVar6;
        if ((fVar1 < pfVar6[2]) || (pfVar6[2] < fVar1)) goto joined_r0x004f6ef2;
        if ((fVar1 < pfVar6[5]) || (pfVar6[5] < fVar1)) {
          pfVar6 = pfVar6 + 3;
          pfVar3 = pfVar6;
          goto joined_r0x004f6ef2;
        }
        if ((fVar1 < pfVar6[8]) || (pfVar6[8] < fVar1)) {
          pfVar6 = pfVar6 + 6;
          pfVar3 = pfVar6;
          goto joined_r0x004f6ef2;
        }
        if ((fVar1 < pfVar6[0xb]) || (pfVar6[0xb] < fVar1)) {
          pfVar6 = pfVar6 + 9;
          pfVar3 = pfVar6;
          goto joined_r0x004f6ef2;
        }
        pfVar6 = pfVar6 + 0xc;
      } while ((int)pfVar6 < (int)(param_3 + -9));
    }
    pfVar3 = pfVar6;
    if (pfVar6 < param_3) {
      do {
        pfVar3 = pfVar6;
        if ((local_18[2] < pfVar6[2]) || (pfVar6[2] < local_18[2])) break;
        pfVar6 = pfVar6 + 3;
        pfVar3 = pfVar6;
      } while (pfVar6 < param_3);
    }
  }
joined_r0x004f6ef2:
  do {
    if (param_3 <= pfVar3) {
LAB_004f6f45:
      if (param_2 < local_18) {
        pfVar5 = local_18 + -1;
        pfVar7 = pfVar8;
        do {
          pfVar8 = pfVar7;
          if (*pfVar5 <= pfVar7[2]) {
            if (*pfVar5 < pfVar7[2]) break;
            pfVar8 = pfVar7 + -3;
            local_14 = *(undefined8 *)(pfVar7 + -3);
            local_c = pfVar7[-1];
            *pfVar8 = pfVar5[-2];
            pfVar7[-2] = pfVar5[-1];
            pfVar7[-1] = *pfVar5;
            iVar4 = 0;
            do {
              *(undefined4 *)((int)pfVar5 + iVar4 + -8) = *(undefined4 *)((int)&local_14 + iVar4);
              iVar4 = iVar4 + 4;
            } while (iVar4 < 8);
            *pfVar5 = local_c;
          }
          local_18 = local_18 + -3;
          pfVar5 = pfVar5 + -3;
          pfVar7 = pfVar8;
        } while (param_2 < local_18);
      }
      if (local_18 == param_2) {
        if (pfVar3 == param_3) {
          *param_1 = pfVar8;
          param_1[1] = pfVar6;
          __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
          return;
        }
        if (pfVar6 != pfVar3) {
          uVar2 = *(undefined8 *)pfVar8;
          fVar1 = pfVar8[2];
          *pfVar8 = *pfVar6;
          pfVar8[1] = pfVar6[1];
          pfVar8[2] = pfVar6[2];
          *(undefined8 *)pfVar6 = uVar2;
          pfVar6[2] = fVar1;
        }
        uVar2 = *(undefined8 *)pfVar8;
        fVar1 = pfVar8[2];
        *pfVar8 = *pfVar3;
        pfVar8[1] = pfVar3[1];
        pfVar8[2] = pfVar3[2];
        *(undefined8 *)pfVar3 = uVar2;
        pfVar3[2] = fVar1;
        pfVar6 = pfVar6 + 3;
        pfVar3 = pfVar3 + 3;
        pfVar8 = pfVar8 + 3;
      }
      else {
        pfVar5 = local_18 + -3;
        if (pfVar3 == param_3) {
          pfVar7 = pfVar8 + -3;
          if (pfVar5 != pfVar7) {
            uVar2 = *(undefined8 *)pfVar5;
            fVar1 = local_18[-1];
            *pfVar5 = *pfVar7;
            local_18[-2] = pfVar8[-2];
            local_18[-1] = pfVar8[-1];
            *(undefined8 *)pfVar7 = uVar2;
            pfVar8[-1] = fVar1;
          }
          uVar2 = *(undefined8 *)pfVar7;
          fVar1 = pfVar8[-1];
          *pfVar7 = pfVar6[-3];
          pfVar8[-2] = pfVar6[-2];
          pfVar8[-1] = pfVar6[-1];
          *(undefined8 *)(pfVar6 + -3) = uVar2;
          pfVar6[-1] = fVar1;
          pfVar6 = pfVar6 + -3;
          local_18 = pfVar5;
          pfVar8 = pfVar7;
        }
        else {
          uVar2 = *(undefined8 *)pfVar3;
          fVar1 = pfVar3[2];
          *pfVar3 = *pfVar5;
          pfVar3[1] = local_18[-2];
          pfVar3[2] = local_18[-1];
          *(undefined8 *)pfVar5 = uVar2;
          local_18[-1] = fVar1;
          pfVar3 = pfVar3 + 3;
          local_18 = pfVar5;
        }
      }
      goto joined_r0x004f6ef2;
    }
    pfVar5 = pfVar6;
    if (pfVar8[2] <= pfVar3[2]) {
      if (pfVar8[2] < pfVar3[2]) goto LAB_004f6f45;
      pfVar5 = pfVar6 + 3;
      uVar2 = *(undefined8 *)pfVar6;
      fVar1 = pfVar6[2];
      *pfVar6 = *pfVar3;
      pfVar6[1] = pfVar3[1];
      pfVar6[2] = pfVar3[2];
      *(undefined8 *)pfVar3 = uVar2;
      pfVar3[2] = fVar1;
    }
    pfVar6 = pfVar5;
    pfVar3 = pfVar3 + 3;
  } while( true );
}


/* FUN_004f70f0 @ 004f70f0  kind=gamemisc  attributed-by=none  size=61 */

void * __cdecl FUN_004f70f0(undefined4 *param_1,undefined4 *param_2,void *param_3)

{
  if (param_1 == param_2) {
    return param_3;
  }
  do {
    if (param_3 != (void *)0x0) {
      FUN_004f7400(param_3,param_1);
    }
    param_1 = param_1 + 0x50;
    param_3 = (void *)((int)param_3 + 0x140);
  } while (param_1 != param_2);
  return param_3;
}


/* FUN_004f7130 @ 004f7130  kind=gamemisc  attributed-by=none  size=138 */

void * __cdecl FUN_004f7130(int *param_1,int *param_2,void *param_3)

{
  void *local_10;
  undefined1 *puStack_c;
  undefined1 local_8;
  undefined3 uStack_7;
  
  puStack_c = &LAB_005555f9;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  uStack_7 = 0;
  for (; param_1 != param_2; param_1 = param_1 + 6) {
    local_8 = 1;
    if (param_3 != (void *)0x0) {
      FUN_004daa80(param_3,param_1);
      local_8 = 2;
      FUN_004daa80((void *)((int)param_3 + 0xc),param_1 + 3);
    }
    param_3 = (void *)((int)param_3 + 0x18);
  }
  ExceptionList = local_10;
  return param_3;
}


/* FUN_004f71e0 @ 004f71e0  kind=gamemisc  attributed-by=none  size=66 */

undefined4 * __cdecl FUN_004f71e0(int param_1,int param_2,undefined4 *param_3)

{
  int iVar1;
  
  if (param_1 != param_2) {
    iVar1 = param_1 - (int)param_3;
    do {
      if (param_3 != (undefined4 *)0x0) {
        *param_3 = *(undefined4 *)(iVar1 + (int)param_3);
        param_3[1] = *(undefined4 *)(iVar1 + 4 + (int)param_3);
        param_3[2] = *(undefined4 *)(iVar1 + 8 + (int)param_3);
      }
      param_3 = param_3 + 3;
    } while (iVar1 + (int)param_3 != param_2);
    return param_3;
  }
  return param_3;
}


/* FUN_004f7230 @ 004f7230  kind=gamemisc  attributed-by=none  size=60 */

undefined4 * __cdecl FUN_004f7230(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  if (param_1 == param_2) {
    return param_3;
  }
  do {
    if (param_3 != (undefined4 *)0x0) {
      *param_3 = *param_1;
      param_3[1] = param_1[1];
      param_3[2] = param_1[2];
    }
    param_1 = param_1 + 3;
    param_3 = param_3 + 3;
  } while (param_1 != param_2);
  return param_3;
}


/* FUN_004f7270 @ 004f7270  kind=gamemisc  attributed-by=none  size=84 */

void FUN_004f7270(undefined4 *param_1)

{
  if ((void *)param_1[3] != (void *)0x0) {
    operator_delete((void *)param_1[3]);
    param_1[3] = 0;
    param_1[4] = 0;
    param_1[5] = 0;
  }
  if ((void *)*param_1 != (void *)0x0) {
    operator_delete((void *)*param_1);
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
  }
  return;
}


/* FUN_004f72d0 @ 004f72d0  kind=gamemisc  attributed-by=none  size=23 */

void __cdecl FUN_004f72d0(undefined1 *param_1,undefined1 *param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  
  uVar1 = *param_3;
  *param_1 = *param_2;
  param_1[1] = uVar1;
  return;
}


/* FUN_004f72f0 @ 004f72f0  kind=gamemisc  attributed-by=none  size=31 */

void __cdecl FUN_004f72f0(undefined1 *param_1,undefined1 *param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  undefined1 uVar2;
  
  uVar1 = *param_2;
  uVar2 = *param_3;
  param_1[1] = param_2[1];
  *param_1 = uVar1;
  param_1[2] = uVar2;
  return;
}


/* FUN_004f7310 @ 004f7310  kind=gamemisc  attributed-by=none  size=27 */

undefined4 * __fastcall FUN_004f7310(undefined4 *param_1)

{
  undefined4 uVar1;
  
  *param_1 = 0;
  param_1[1] = 0;
  uVar1 = FUN_0042f040();
  *param_1 = uVar1;
  return param_1;
}


/* FUN_004f7330 @ 004f7330  kind=gamemisc  attributed-by=none  size=27 */

undefined4 * __fastcall FUN_004f7330(undefined4 *param_1)

{
  undefined4 uVar1;
  
  *param_1 = 0;
  param_1[1] = 0;
  uVar1 = FUN_00407b00();
  *param_1 = uVar1;
  return param_1;
}


/* FUN_004f7350 @ 004f7350  kind=gamemisc  attributed-by=none  size=32 */

void __thiscall
FUN_004f7350(void *this,undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  *(undefined4 *)this = param_1;
  *(undefined4 *)((int)this + 4) = param_2;
  *(undefined4 *)((int)this + 8) = param_3;
  *(undefined4 *)((int)this + 0xc) = param_4;
  return;
}


/* FUN_004f73ca @ 004f73ca  kind=gamemisc  attributed-by=none  size=28 */

void __fastcall FUN_004f73ca(undefined2 *param_1,int param_2)

{
  undefined4 in_EAX;
  int unaff_ESI;
  
  do {
    param_2 = param_2 + -1;
    *param_1 = 0;
    param_1 = param_1 + 1;
  } while (-1 < param_2);
  *(undefined4 *)(unaff_ESI + 0x18) = in_EAX;
  return;
}


/* FUN_004f7400 @ 004f7400  kind=gamemisc  attributed-by=none  size=130 */

undefined4 * __thiscall FUN_004f7400(void *this,undefined4 *param_1)

{
  *(undefined4 *)this = *param_1;
  FUN_00413710((void *)((int)this + 4),(undefined1 *)(param_1 + 1));
  *(undefined4 *)((int)this + 0x11c) = param_1[0x47];
  *(undefined4 *)((int)this + 0x120) = param_1[0x48];
  *(undefined4 *)((int)this + 0x128) = param_1[0x4a];
  *(undefined4 *)((int)this + 300) = param_1[0x4b];
  *(undefined4 *)((int)this + 0x130) = param_1[0x4c];
  *(undefined4 *)((int)this + 0x134) = param_1[0x4d];
  *(undefined4 *)((int)this + 0x138) = param_1[0x4e];
  *(undefined4 *)((int)this + 0x13c) = param_1[0x4f];
  return this;
}


/* FUN_004f7490 @ 004f7490  kind=gamemisc  attributed-by=none  size=161 */

undefined4 * __fastcall FUN_004f7490(undefined4 *param_1)

{
  *param_1 = 0;
  *(undefined2 *)(param_1 + 5) = 1;
  *(undefined2 *)(param_1 + 1) = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  *(undefined2 *)(param_1 + 4) = 0;
  *(undefined1 *)((int)param_1 + 0x12) = 0;
  param_1[0x46] = 0;
  memset(param_1 + 6,0,0x100);
  param_1[0x47] = 0xffffffff;
  param_1[0x48] = 0xffffffff;
  param_1[0x4a] = 0;
  param_1[0x4b] = 0;
  param_1[0x4c] = 0;
  param_1[0x4d] = 0;
  param_1[0x4e] = 0;
  param_1[0x4f] = 0;
  return param_1;
}


/* FUN_004f7540 @ 004f7540  kind=gamemisc  attributed-by=none  size=44 */

undefined4 * __fastcall FUN_004f7540(undefined4 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  return param_1;
}


/* FUN_004f7710 @ 004f7710  kind=gamemisc  attributed-by=none  size=36 */

void __fastcall FUN_004f7710(undefined4 *param_1)

{
  undefined4 *local_8;
  
  local_8 = param_1;
  FUN_004fc060(param_1,&local_8,*(int **)*param_1,(int *)*param_1);
  operator_delete((void *)*param_1);
  return;
}


/* FUN_004f7740 @ 004f7740  kind=gamemisc  attributed-by=none  size=66 */

void __fastcall FUN_004f7740(undefined4 *param_1)

{
  if ((undefined4 *)*param_1 != (undefined4 *)0x0) {
    FUN_004f3bf0((undefined4 *)*param_1,(undefined4 *)param_1[1]);
    operator_delete((void *)*param_1);
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
  }
  return;
}


/* FUN_004f7890 @ 004f7890  kind=gamemisc  attributed-by=none  size=120 */

int * __thiscall FUN_004f7890(void *this,int *param_1)

{
  int *piVar1;
  int *piVar2;
  int local_10;
  int local_c;
  undefined4 local_8;
  
  piVar2 = param_1;
  piVar1 = FUN_004f7c60(this,param_1);
  if (piVar1 != *(int **)this) {
    if ((piVar1[4] <= *piVar2) && ((piVar1[4] < *piVar2 || (piVar1[5] <= piVar2[1])))) {
      return piVar1 + 6;
    }
  }
  local_10 = *piVar2;
  local_c = piVar2[1];
  local_8 = 0;
  piVar2 = FUN_004f3b20(this,&local_10);
  FUN_004f4080(this,&param_1,piVar1,piVar2 + 4,piVar2);
  return param_1 + 6;
}


/* FUN_004f7910 @ 004f7910  kind=gamemisc  attributed-by=none  size=146 */

int * __thiscall FUN_004f7910(void *this,int *param_1)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  int local_14;
  int local_10;
  int local_c;
  undefined4 local_8;
  
  piVar4 = param_1;
  piVar3 = FUN_004f7ca0(this,param_1);
  if (piVar3 != *(int **)this) {
    iVar1 = *piVar4;
    iVar2 = piVar3[4];
    if ((iVar2 <= iVar1) &&
       ((iVar2 < iVar1 ||
        ((piVar3[5] <= piVar4[1] &&
         (((iVar2 < iVar1 || (piVar3[5] < piVar4[1])) || (piVar3[6] <= piVar4[2])))))))) {
      return piVar3 + 7;
    }
  }
  local_14 = *piVar4;
  local_10 = piVar4[1];
  local_c = piVar4[2];
  local_8 = 0;
  piVar4 = FUN_004f3b60(this,&local_14);
  FUN_004f42d0(this,&param_1,piVar3,piVar4 + 4,piVar4);
  return param_1 + 7;
}


/* FUN_004f79b0 @ 004f79b0  kind=gamemisc  attributed-by=none  size=18 */

int __thiscall FUN_004f79b0(void *this,int param_1)

{
  return *(int *)this + param_1 * 0x18;
}


/* FUN_004f79d0 @ 004f79d0  kind=gamemisc  attributed-by=none  size=19 */

void __thiscall FUN_004f79d0(void *this,int *param_1)

{
  int iVar1;
  
  iVar1 = *(int *)this;
  *param_1 = iVar1;
  *(int *)this = iVar1 + 4;
  return;
}


/* FUN_004f7a30 @ 004f7a30  kind=gamemisc  attributed-by=none  size=51 */

void __cdecl FUN_004f7a30(int *param_1,undefined4 param_2,uint *param_3)

{
  uint uVar1;
  uint uVar2;
  ulonglong uVar3;
  
  uVar3 = FUN_0054a946();
  uVar1 = *param_3;
  uVar2 = param_3[1];
  *param_1 = (uint)uVar3 - *param_3;
  param_1[1] = ((int)(uVar3 >> 0x20) - uVar2) - (uint)((uint)uVar3 < uVar1);
  return;
}


/* FUN_004f7a70 @ 004f7a70  kind=gamemisc  attributed-by=none  size=55 */

void __thiscall FUN_004f7a70(void *this,float *param_1,float param_2)

{
  *param_1 = *(float *)this / param_2;
  param_1[1] = *(float *)((int)this + 4) / param_2;
  param_1[2] = *(float *)((int)this + 8) / param_2;
  return;
}


/* FUN_004f7ab0 @ 004f7ab0  kind=gamemisc  attributed-by=none  size=67 */

uint FUN_004f7ab0(int *param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  uint in_EAX;
  
  iVar1 = *param_1;
  iVar2 = *param_2;
  if ((iVar2 <= iVar1) &&
     ((iVar2 < iVar1 ||
      ((in_EAX = param_1[1], param_2[1] <= (int)in_EAX &&
       (((iVar2 < iVar1 || (in_EAX = param_2[1], (int)in_EAX < param_1[1])) ||
        (in_EAX = param_1[2], param_2[2] <= (int)in_EAX)))))))) {
    return in_EAX & 0xffffff00;
  }
  return CONCAT31((int3)(in_EAX >> 8),1);
}


/* FUN_004f7b60 @ 004f7b60  kind=gamemisc  attributed-by=none  size=54 */

void FUN_004f7b60(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  
  puVar1 = operator_new(0x20);
  if (puVar1 != (void *)0x0) {
    if (param_1 == (undefined4 *)0x0) {
      param_1 = puVar1;
      param_2 = puVar1;
    }
    *puVar1 = param_1;
    if (puVar1 + 1 != (undefined4 *)0x0) {
      puVar1[1] = param_2;
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  std::_Xbad_alloc();
}


/* FUN_004f7ca0 @ 004f7ca0  kind=gamemisc  attributed-by=none  size=85 */

undefined4 * __thiscall FUN_004f7ca0(void *this,int *param_1)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  
  puVar5 = *(undefined4 **)this;
  if (*(char *)((int)puVar5[1] + 0xd) == '\0') {
    iVar1 = *param_1;
    puVar3 = (undefined4 *)puVar5[1];
    do {
      iVar2 = puVar3[4];
      if ((iVar2 < iVar1) ||
         ((iVar2 <= iVar1 &&
          (((int)puVar3[5] < param_1[1] ||
           (((iVar2 <= iVar1 && ((int)puVar3[5] <= param_1[1])) && ((int)puVar3[6] < param_1[2])))))
          ))) {
        puVar4 = (undefined4 *)puVar3[2];
      }
      else {
        puVar4 = (undefined4 *)*puVar3;
        puVar5 = puVar3;
      }
      puVar3 = puVar4;
    } while (*(char *)((int)puVar4 + 0xd) == '\0');
  }
  return puVar5;
}


