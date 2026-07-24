// Unsorted_007_09 (game_misc) -- server. 32 functions. Bodies = Ghidra pseudo-C.
// Attribution: see ../attribution.tsv. Toolchain of the original: MSVC 11.0 (VS2012).
#include "Unsorted_007_09.h"

/* FUN_00541d9a @ 00541d9a  kind=gamemisc  attributed-by=none  size=19159 */

/* WARNING (jumptable): Unable to track spacebase fully for stack */

void __fastcall FUN_00541d9a(int *param_1)

{
  undefined8 uVar1;
  ushort uVar2;
  undefined1 uVar3;
  char cVar4;
  bool bVar5;
  byte bVar6;
  char cVar7;
  Creature *pCVar8;
  int iVar9;
  uint *puVar10;
  long lVar11;
  char *pcVar12;
  undefined3 extraout_var;
  SequentialBehavior *pSVar13;
  CombatBehavior *pCVar14;
  CompanionBehavior *pCVar15;
  RandomWalkBehavior *pRVar16;
  int iVar17;
  void *pvVar18;
  undefined3 extraout_var_00;
  float *pfVar19;
  int *in_EAX;
  undefined1 *puVar20;
  undefined1 *puVar21;
  uint uVar22;
  void *pvVar23;
  undefined4 *puVar24;
  int *piVar25;
  uint *puVar26;
  uint *puVar27;
  undefined4 uVar28;
  ulonglong *puVar29;
  ulonglong *puVar30;
  int iVar31;
  longlong *plVar32;
  float *pfVar33;
  int *piVar34;
  undefined *puVar35;
  undefined3 extraout_var_01;
  undefined3 extraout_var_02;
  undefined3 extraout_var_03;
  float *pfVar36;
  undefined8 *puVar37;
  CRefTime *pCVar38;
  long lVar39;
  int *piVar40;
  pair<unsigned___int64,unsigned___int64> *ppVar41;
  undefined3 extraout_var_04;
  void *pvVar42;
  uint *puVar43;
  uint *puVar44;
  undefined4 *puVar45;
  uint *puVar46;
  byte *pbVar47;
  uint uVar48;
  uint extraout_ECX;
  Creature_vftable *pCVar49;
  uint unaff_EBP;
  code *pcVar50;
  SequentialBehavior_data *this;
  int *unaff_ESI;
  int iVar51;
  uint uVar52;
  float *pfVar53;
  int unaff_EDI;
  int iVar54;
  float10 fVar55;
  float fVar56;
  float fVar57;
  float fVar58;
  float fVar59;
  ulonglong uVar60;
  undefined4 uStack00000008;
  ulonglong uVar61;
  undefined4 uVar62;
  uint uVar63;
  undefined4 uVar64;
  undefined4 uVar65;
  ulonglong *puVar66;
  undefined4 uVar67;
  int iVar68;
  
  do {
    do {
      iVar51 = *unaff_ESI;
      if (iVar51 <= *in_EAX) {
        do {
          puVar20 = FUN_00401040((void *)(unaff_EBP - 0x2e88),0,0,0);
          puVar21 = FUN_00430730(*(void **)(unaff_EBP - 0x2b98),*(int *)(unaff_EBP - 0x2b3c),
                                 unaff_EDI,iVar51);
          cVar4 = FUN_004079c0(puVar21,(int)puVar20);
          if (cVar4 != '\0') {
            uVar22 = *(uint *)(unaff_EBP - 0x2b94) & 0xff;
            if (*(int *)(unaff_EBP - 0x2b54) == 2) {
              uVar22 = 1;
            }
            iVar31 = *(int *)(unaff_EBP - 0x2b98);
            *(undefined1 *)(unaff_EBP - 0x2b31) = 1;
            *(uint *)(unaff_EBP - 0x2b94) = uVar22;
            FUN_00402170(iVar31);
            piVar25 = (int *)(unaff_EBP - 0x3414);
            pvVar23 = (void *)FUN_004e2320((void *)(**(int **)(unaff_EBP - 0x2bbc) + 0x80),2);
            puVar24 = (undefined4 *)FUN_004014b0(pvVar23,piVar25);
            FUN_004cde20((void *)(unaff_EBP - 0x2dac),puVar24);
            FUN_00530690((void *)(**(int **)(unaff_EBP - 0x2bbc) + 0x78),
                         (undefined4 *)(unaff_EBP - 0x3074),
                         (uint *)(*(int *)(unaff_EBP - 0x2b14) + 8));
          }
          in_EAX = *(int **)(unaff_EBP - 0x2b9c);
          iVar51 = iVar51 + 1;
        } while (iVar51 <= *in_EAX);
        param_1 = *(int **)(unaff_EBP - 0x2b20);
      }
      unaff_ESI = *(int **)(unaff_EBP - 0x2be0);
      unaff_EDI = unaff_EDI + 1;
    } while (unaff_EDI <= *param_1);
    iVar51 = *(int *)(unaff_EBP - 0x2b3c);
    piVar34 = *(int **)(unaff_EBP - 0x2b20);
    piVar25 = *(int **)(unaff_EBP - 0x2b70);
    do {
      piVar40 = *(int **)(unaff_EBP - 0x2bd8);
      iVar51 = iVar51 + 1;
      *(int *)(unaff_EBP - 0x2b3c) = iVar51;
      if (*piVar25 < iVar51) {
        do {
          do {
            do {
              FUN_00407a30((void *)(unaff_EBP - 0x2c00),(int *)(unaff_EBP - 0x2ce0));
              piVar25 = (int *)FUN_00530550((void *)(*(int *)(unaff_EBP - 0x2b18) + 0xc),
                                            (undefined4 *)(unaff_EBP - 0x2e34));
              bVar5 = FUN_0042c6f0((void *)(unaff_EBP - 0x2c00),piVar25);
              if (!bVar5) {
                cVar4 = *(char *)(unaff_EBP - 0x2b31);
LAB_00541f04:
                if (cVar4 == '\0') {
                  pvVar23 = *(void **)(unaff_EBP - 0x2b18);
                  goto LAB_00542a32;
                }
LAB_00541f0c:
                cVar4 = *(char *)(unaff_EBP - 0x2b29);
                iVar51 = *(int *)(unaff_EBP - 0x2b54);
LAB_00541f18:
                if (iVar51 != 2) {
                  iVar51 = *(int *)(unaff_EBP - 0x2b14);
                  if ((cVar4 == '\0') || ((*(ushort *)(iVar51 + 0x7e) & 0x100) != 0)) {
                    pvVar23 = *(void **)(unaff_EBP - 0x2b18);
                  }
                  else {
                    pfVar33 = *(float **)(unaff_EBP - 0x2bb0);
                    *(undefined1 *)(unaff_EBP - 0x2b31) = 0;
                    FUN_004e1520((float *)(unaff_EBP - 0x119c),0.5,pfVar33);
                    FUN_00402510(unaff_EBP - 0x1a48);
                    FUN_00401080((void *)(unaff_EBP - 0x11b4),0,0,0x3f8147ae);
                    FUN_00402510(unaff_EBP - 0x1a6c);
                    puVar26 = (uint *)(unaff_EBP - 0x1a48);
                    puVar27 = (uint *)(unaff_EBP - 0x1e3c);
                    puVar46 = FUN_00402cb0(*(void **)(unaff_EBP - 0x2b60),
                                           (uint *)(unaff_EBP - 0x1e6c),(uint *)(unaff_EBP - 0x1a6c)
                                          );
                    puVar26 = FUN_00402c50(puVar46,puVar27,puVar26);
                    FUN_00405450((int *)(unaff_EBP - 0x2e4),puVar26);
                    FUN_004e1520((float *)(unaff_EBP - 0x11cc),0.5,pfVar33);
                    FUN_00402510(unaff_EBP - 0x1a90);
                    FUN_00401080((void *)(unaff_EBP - 0x11e4),0,0,0x3f8147ae);
                    FUN_00402510(unaff_EBP - 0x1ab4);
                    puVar26 = (uint *)(unaff_EBP - 0x1a90);
                    puVar27 = (uint *)(unaff_EBP - 0x1e9c);
                    puVar46 = FUN_00402cb0(*(void **)(unaff_EBP - 0x2b60),
                                           (uint *)(unaff_EBP - 0x1ecc),(uint *)(unaff_EBP - 0x1ab4)
                                          );
                    puVar26 = FUN_00402cb0(puVar46,puVar27,puVar26);
                    FUN_00405450((int *)(unaff_EBP - 0x350),puVar26);
                    piVar25 = (int *)FUN_004013d0((void *)(unaff_EBP - 0x2e4),0);
                    iVar51 = *piVar25;
                    *(int *)(unaff_EBP - 0x2b3c) = iVar51;
                    piVar25 = (int *)FUN_004013d0((void *)(unaff_EBP - 0x350),0);
                    *(int **)(unaff_EBP - 0x2b98) = piVar25;
                    if (iVar51 <= *piVar25) {
                      puVar26 = (uint *)FUN_004013d0((void *)(unaff_EBP - 0x2e4),1);
                      *(uint **)(unaff_EBP - 0x2bd8) = puVar26;
                      piVar25 = (int *)FUN_004013d0((void *)(unaff_EBP - 0x350),1);
                      piVar34 = *(int **)(unaff_EBP - 0x2b98);
                      *(int **)(unaff_EBP - 0x2b20) = piVar25;
                      do {
                        uVar22 = *puVar26;
                        if ((int)uVar22 <= *piVar25) {
                          piVar40 = (int *)FUN_004013d0((void *)(unaff_EBP - 0x2e4),2);
                          *(int **)(unaff_EBP - 0x2be0) = piVar40;
                          piVar25 = (int *)FUN_004013d0((void *)(unaff_EBP - 0x350),2);
                          piVar34 = *(int **)(unaff_EBP - 0x2b20);
                          *(int **)(unaff_EBP - 0x2b9c) = piVar25;
                          do {
                            iVar51 = *piVar40;
                            if (iVar51 <= *piVar25) {
                              do {
                                puVar35 = FUN_00405fd0(*(void **)(unaff_EBP - 0x2b18),
                                                       *(uint *)(unaff_EBP - 0x2b3c),uVar22,iVar51,0
                                                      );
                                uVar28 = FUN_004061f0((int)puVar35);
                                if ((char)uVar28 != '\0') {
                                  pvVar23 = *(void **)(unaff_EBP - 0x2b18);
                                  goto LAB_005429eb;
                                }
                                piVar25 = *(int **)(unaff_EBP - 0x2b9c);
                                iVar51 = iVar51 + 1;
                              } while (iVar51 <= *piVar25);
                              piVar34 = *(int **)(unaff_EBP - 0x2b20);
                            }
                            piVar40 = *(int **)(unaff_EBP - 0x2be0);
                            uVar22 = uVar22 + 1;
                          } while ((int)uVar22 <= *piVar34);
                          iVar51 = *(int *)(unaff_EBP - 0x2b3c);
                          piVar25 = *(int **)(unaff_EBP - 0x2b20);
                          piVar34 = *(int **)(unaff_EBP - 0x2b98);
                        }
                        puVar26 = *(uint **)(unaff_EBP - 0x2bd8);
                        iVar51 = iVar51 + 1;
                        *(int *)(unaff_EBP - 0x2b3c) = iVar51;
                      } while (iVar51 <= *piVar34);
                    }
                    pvVar23 = *(void **)(unaff_EBP - 0x2b18);
                    FUN_00428070((void *)((int)pvVar23 + 0xc),(undefined4 *)(unaff_EBP - 0x2bfc));
                    piVar25 = (int *)FUN_00530550((void *)((int)pvVar23 + 0xc),
                                                  (undefined4 *)(unaff_EBP - 0x2e3c));
                    bVar5 = FUN_0042c6f0((void *)(unaff_EBP - 0x2bfc),piVar25);
                    if (!bVar5) {
LAB_005428c9:
                      puVar24 = (undefined4 *)FUN_004e2320(*(void **)(unaff_EBP - 0x2b60),2);
                      FUN_00402eb0(puVar24,(uint *)(unaff_EBP - 0x2dac));
                      *(undefined4 *)(unaff_EBP - 0x2da0) = *puVar24;
                      *(undefined4 *)(unaff_EBP - 0x2d9c) = puVar24[1];
                      pfVar33 = (float *)FUN_004013d0(*(void **)(unaff_EBP - 0x2bb0),2);
                      *(float *)(unaff_EBP - 0x2b9c) = *pfVar33 * 0.5;
                      FUN_004014b0((void *)(unaff_EBP - 0x2da0),(int *)(unaff_EBP - 0x3044));
                      piVar25 = (int *)(unaff_EBP - 0x35d4);
                      piVar34 = (int *)(unaff_EBP - 0x3464);
                      uVar60 = FUN_00405510((uint *)(unaff_EBP - 0x3044));
                      piVar40 = FUN_004cde40((void *)(unaff_EBP - 0x3694),(uint)uVar60);
                      pvVar42 = (void *)FUN_00401530(piVar40,piVar34);
                      puVar45 = (undefined4 *)FUN_004ce290(pvVar42,piVar25);
                      FUN_004cde20(puVar24,puVar45);
                      puVar26 = (uint *)FUN_004014b0((void *)(unaff_EBP - 0x2da0),
                                                     (int *)(unaff_EBP - 0x3474));
                      plVar32 = (longlong *)
                                FUN_00401490(puVar24,(int *)(unaff_EBP - 0x35e4),puVar26);
                      fVar55 = FUN_00401420(plVar32);
                      *(float *)(*(int *)(unaff_EBP - 0x2b14) + 0x1180) = (float)fVar55;
                      FUN_00402e60(puVar24,(uint *)(unaff_EBP - 0x2dac));
                      goto LAB_00542a32;
                    }
                    do {
                      if (*(char *)(unaff_EBP - 0x2b31) != '\0') goto LAB_005429eb;
                      iVar51 = FUN_00402bc0((int *)(unaff_EBP - 0x2bfc));
                      pvVar42 = *(void **)(unaff_EBP - 0x2b60);
                      piVar25 = (int *)(iVar51 + 8);
                      *(int **)(unaff_EBP - 0x2bbc) = piVar25;
                      puVar26 = FUN_00402c50(pvVar42,(uint *)(unaff_EBP - 0x1efc),
                                             (uint *)(*piVar25 + 0x80));
                      pfVar33 = FUN_00402550((void *)(unaff_EBP - 0x11fc),(longlong *)puVar26);
                      fVar55 = FUN_004021b0(pfVar33);
                      *(float *)(unaff_EBP - 0x2b9c) = (float)fVar55;
                      if ((*(float *)(unaff_EBP - 0x2b9c) <= 4096.0) &&
                         (iVar51 = *piVar25, iVar51 != 0)) {
                        iVar31 = FUN_004013f0((void *)((int)pvVar23 + 0x1c),0xa03);
                        *(int *)(unaff_EBP - 0x2b9c) = iVar31;
                        if (iVar31 != 0) {
                          FUN_00401cd0((undefined4 *)(unaff_EBP - 0x1060));
                          iVar54 = FUN_00402170(iVar31);
                          fVar56 = (float)iVar54 * 0.5;
                          iVar54 = FUN_00402160(iVar31);
                          fVar59 = (float)iVar54 * 0.5;
                          iVar31 = FUN_00402150(iVar31);
                          FUN_004023b0((void *)(unaff_EBP - 0x1060),(float)iVar31 * 0.5,fVar59,
                                       fVar56);
                          FUN_00402030((void *)(unaff_EBP - 0x1060),-*(float *)(iVar51 + 0x98));
                          puVar26 = FUN_00402c50(*(void **)(unaff_EBP - 0x2b60),
                                                 (uint *)(unaff_EBP - 0x1f2c),
                                                 (uint *)(iVar51 + 0x80));
                          FUN_00402550((void *)(unaff_EBP - 0x290),(longlong *)puVar26);
                          FUN_004022e0((void *)(unaff_EBP - 0x1060),(float *)(unaff_EBP - 0x290));
                          pfVar36 = *(float **)(unaff_EBP - 0x2bb0);
                          pfVar53 = (float *)FUN_004e1520((float *)(unaff_EBP - 0x1214),0.5,pfVar36)
                          ;
                          pfVar33 = (float *)(unaff_EBP - 0x122c);
                          pfVar19 = (float *)FUN_00401080((void *)(unaff_EBP - 0x1244),0,0,
                                                          0x3f8147ae);
                          pfVar19 = FUN_004021f0((void *)(unaff_EBP - 0x1060),
                                                 (float *)(unaff_EBP - 0x125c),pfVar19);
                          FUN_00401450(pfVar19,pfVar33,pfVar53);
                          FUN_00402510(unaff_EBP - 0x1ad8);
                          FUN_00405450((int *)(unaff_EBP - 0x2fc),(uint *)(unaff_EBP - 0x1ad8));
                          pfVar36 = (float *)FUN_004e1520((float *)(unaff_EBP - 0x1274),0.5,pfVar36)
                          ;
                          pfVar33 = (float *)(unaff_EBP - 0x128c);
                          pfVar53 = (float *)FUN_00401080((void *)(unaff_EBP - 0x12a4),0,0,
                                                          0x3f8147ae);
                          pfVar53 = FUN_004021f0((void *)(unaff_EBP - 0x1060),
                                                 (float *)(unaff_EBP - 0x12bc),pfVar53);
                          FUN_004014f0(pfVar53,pfVar33,pfVar36);
                          FUN_00402510(unaff_EBP - 0x1b08);
                          FUN_00405450((int *)(unaff_EBP - 0x32c),(uint *)(unaff_EBP - 0x1b08));
                          piVar25 = (int *)FUN_004013d0((void *)(unaff_EBP - 0x2fc),0);
                          iVar51 = *piVar25;
                          *(int *)(unaff_EBP - 0x2b3c) = iVar51;
                          piVar25 = (int *)FUN_004013d0((void *)(unaff_EBP - 0x32c),0);
                          *(int **)(unaff_EBP - 0x2b98) = piVar25;
                          if (iVar51 <= *piVar25) {
                            piVar40 = (int *)FUN_004013d0((void *)(unaff_EBP - 0x2fc),1);
                            *(int **)(unaff_EBP - 0x2cc4) = piVar40;
                            piVar25 = (int *)FUN_004013d0((void *)(unaff_EBP - 0x32c),1);
                            piVar34 = *(int **)(unaff_EBP - 0x2b98);
                            *(int **)(unaff_EBP - 0x2b20) = piVar25;
                            while( true ) {
                              iVar31 = *piVar40;
                              if (iVar31 <= *piVar25) {
                                piVar40 = (int *)FUN_004013d0((void *)(unaff_EBP - 0x2fc),2);
                                *(int **)(unaff_EBP - 0x2bd8) = piVar40;
                                piVar25 = (int *)FUN_004013d0((void *)(unaff_EBP - 0x32c),2);
                                piVar34 = *(int **)(unaff_EBP - 0x2b20);
                                *(int **)(unaff_EBP - 0x2be0) = piVar25;
                                do {
                                  iVar51 = *piVar40;
                                  if (iVar51 <= *piVar25) {
                                    do {
                                      puVar20 = FUN_00401040((void *)(unaff_EBP - 0x2e8c),0,0,0);
                                      puVar21 = FUN_00430730(*(void **)(unaff_EBP - 0x2b9c),
                                                             *(int *)(unaff_EBP - 0x2b3c),iVar31,
                                                             iVar51);
                                      cVar4 = FUN_004079c0(puVar21,(int)puVar20);
                                      if (cVar4 != '\0') {
                                        iVar51 = *(int *)(unaff_EBP - 0x2b14);
                                        iVar31 = **(int **)(unaff_EBP - 0x2bbc);
                                        *(undefined1 *)(unaff_EBP - 0x2b31) = 1;
                                        FUN_00530690((void *)(iVar31 + 0x78),
                                                     (undefined4 *)(unaff_EBP - 0xd0),
                                                     (uint *)(iVar51 + 8));
                                        pvVar23 = *(void **)(unaff_EBP - 0x2b18);
                                        goto LAB_00542886;
                                      }
                                      piVar25 = *(int **)(unaff_EBP - 0x2be0);
                                      iVar51 = iVar51 + 1;
                                    } while (iVar51 <= *piVar25);
                                    piVar34 = *(int **)(unaff_EBP - 0x2b20);
                                  }
                                  piVar40 = *(int **)(unaff_EBP - 0x2bd8);
                                  iVar31 = iVar31 + 1;
                                } while (iVar31 <= *piVar34);
                                iVar51 = *(int *)(unaff_EBP - 0x2b3c);
                                piVar25 = *(int **)(unaff_EBP - 0x2b20);
                                piVar34 = *(int **)(unaff_EBP - 0x2b98);
                              }
                              iVar51 = iVar51 + 1;
                              *(int *)(unaff_EBP - 0x2b3c) = iVar51;
                              if (*piVar34 < iVar51) break;
                              piVar40 = *(int **)(unaff_EBP - 0x2cc4);
                            }
                          }
                        }
                        pvVar23 = *(void **)(unaff_EBP - 0x2b18);
                      }
                      iVar51 = *(int *)(unaff_EBP - 0x2b14);
LAB_00542886:
                      FUN_00407a30((void *)(unaff_EBP - 0x2bfc),(int *)(unaff_EBP - 0x2c44));
                      piVar25 = (int *)FUN_00530550((void *)((int)pvVar23 + 0xc),
                                                    (undefined4 *)(unaff_EBP - 0x2e3c));
                      bVar5 = FUN_0042c6f0((void *)(unaff_EBP - 0x2bfc),piVar25);
                    } while (bVar5);
                    if (*(char *)(unaff_EBP - 0x2b31) == '\0') goto LAB_005428c9;
                  }
                  goto LAB_005429f1;
                }
                pvVar23 = *(void **)(unaff_EBP - 0x2b18);
                pfVar33 = *(float **)(unaff_EBP - 0x2bb4);
                if ((*(int *)((int)pvVar23 + 0xb8) == 0) || (-2.0 < *pfVar33 || *pfVar33 == -2.0)) {
                  plVar32 = *(longlong **)(unaff_EBP - 0x2b60);
                }
                else {
                  FUN_004c8530(unaff_EBP - 0x470);
                  *(undefined4 *)(unaff_EBP - 0x464) = 0x20;
                  iVar51 = rand();
                  plVar32 = *(longlong **)(unaff_EBP - 0x2b60);
                  *(float *)(unaff_EBP - 0x460) = ((float)iVar51 * 0.2) / 32767.0 + 1.0;
                  FUN_00402550((void *)(unaff_EBP - 0x470),plVar32);
                  iVar51 = *(int *)(unaff_EBP - 0x2b28);
                  *(undefined4 *)(unaff_EBP - 0x45c) = 0x3f000000;
                  FUN_00428590((void *)(iVar51 + 8),(undefined4 *)(unaff_EBP - 0x470));
                  pfVar33 = *(float **)(unaff_EBP - 0x2bb4);
                }
                if (((*(byte *)(*(int *)(unaff_EBP - 0x2b14) + 0x5c) & 2) == 0) &&
                   (*pfVar33 <= -5.0 && *pfVar33 != -5.0)) {
                  puVar26 = (uint *)FUN_004e2320(plVar32,2);
                  puVar27 = (uint *)FUN_004f7a30((int *)(unaff_EBP - 0x3424),
                                                 *(undefined4 *)
                                                  (*(int *)(unaff_EBP - 0x2b14) + 0x13bc),puVar26);
                  uVar28 = FUN_00402d40(puVar27);
                  if (((char)uVar28 != '\0') &&
                     (*(int *)(unaff_EBP - 0x2b14) == *(int *)((int)pvVar23 + 0xb8))) {
                    puVar30 = (ulonglong *)(unaff_EBP - 0x3684);
                    FUN_0040fda0(*(int *)(unaff_EBP - 0x2b14));
                    puVar66 = (ulonglong *)(unaff_EBP - 0x3434);
                    piVar25 = (int *)(unaff_EBP - 0x35c4);
                    uVar22 = 1;
                    puVar29 = (ulonglong *)(unaff_EBP - 0x3444);
                    FUN_004f7a30((int *)(unaff_EBP - 0x3734),
                                 *(undefined4 *)(*(int *)(unaff_EBP - 0x2b14) + 0x13bc),puVar26);
                    puVar29 = FUN_004ce310(puVar29);
                    FUN_00405660(puVar29,piVar25,uVar22);
                    FUN_0052ebb0(puVar66);
                    puVar30 = FUN_0052ebb0(puVar30);
                    fVar55 = FUN_00401420((longlong *)puVar30);
                    *(float *)(unaff_EBP - 0x2b98) = (float)fVar55;
                    iVar51 = *(int *)(unaff_EBP - 0x2b14);
                    *(float *)(iVar51 + 0x16c) =
                         *(float *)(iVar51 + 0x16c) - *(float *)(unaff_EBP - 0x2b98);
                    iVar31 = *(int *)(iVar51 + 300);
                    iVar51 = FUN_0040ffe0(iVar51);
                    if (iVar31 <= iVar51) {
                      iVar31 = FUN_0040ffe0(*(int *)(unaff_EBP - 0x2b14));
                    }
                    iVar51 = *(int *)(unaff_EBP - 0x2b14);
                    *(int *)(iVar51 + 300) = iVar31;
                    plVar32 = (longlong *)(iVar51 + 0x10);
                    FUN_00405570(plVar32,1,'\0');
                    FUN_004c8530(unaff_EBP - 0x1b0);
                    FUN_00402550((void *)(unaff_EBP - 0x1b0),plVar32);
                    iVar51 = *(int *)(unaff_EBP - 0x2b28);
                    *(undefined4 *)(unaff_EBP - 0x1a0) = 0x3f800000;
                    *(undefined4 *)(unaff_EBP - 0x1a4) = 0x17;
                    FUN_00428590((void *)(iVar51 + 8),(undefined4 *)(unaff_EBP - 0x1b0));
                    iVar51 = *(int *)(unaff_EBP - 0x2b14);
                    if (*(float *)(iVar51 + 0x16c) <= 0.0 && *(float *)(iVar51 + 0x16c) != 0.0) {
                      *(undefined4 *)(iVar51 + 0x16c) = 0;
                    }
                    FUN_00422a90(unaff_EBP - 0x7b8);
                    *(undefined4 *)(unaff_EBP - 0x7b0) = *(undefined4 *)(iVar51 + 8);
                    *(undefined4 *)(unaff_EBP - 0x7ac) = *(undefined4 *)(iVar51 + 0xc);
                    *(undefined8 *)(unaff_EBP - 0x7b8) = 0;
                    *(undefined4 *)(unaff_EBP - 0x7a8) = *(undefined4 *)(unaff_EBP - 0x2b98);
                    FUN_00402a40((void *)(unaff_EBP - 0x798),(undefined4 *)(iVar51 + 0x10));
                    pvVar42 = *(void **)(unaff_EBP - 0x2b28);
                    *(undefined1 *)(unaff_EBP - 0x7a4) = 0;
                    FUN_00428400(pvVar42,(undefined4 *)(unaff_EBP - 0x7b8));
                  }
                }
                FUN_004013d0((void *)(unaff_EBP - 0x1c),2);
                FUN_00402a10((ulonglong *)(unaff_EBP - 0x3000));
                plVar32 = (longlong *)FUN_004e2320(*(void **)(unaff_EBP - 0x2b60),2);
                FUN_00402eb0(plVar32,(uint *)(unaff_EBP - 0x3000));
                pvVar42 = *(void **)(unaff_EBP - 0x2b74);
                **(undefined4 **)(unaff_EBP - 0x2bb4) = 0;
                puVar24 = (undefined4 *)FUN_004013d0(pvVar42,2);
                *puVar24 = 0;
                fVar55 = FUN_00401420(plVar32);
                iVar51 = *(int *)(unaff_EBP - 0x2b14);
                *(float *)(iVar51 + 0x13bc) = (float)fVar55;
                goto LAB_00542a38;
              }
LAB_00541ab0:
              iVar51 = FUN_00402bc0((int *)(unaff_EBP - 0x2c00));
              pvVar23 = *(void **)(unaff_EBP - 0x2b60);
              piVar25 = (int *)(iVar51 + 8);
              *(int **)(unaff_EBP - 0x2bbc) = piVar25;
              puVar26 = FUN_00402c50(pvVar23,(uint *)(unaff_EBP - 0x2274),(uint *)(*piVar25 + 0x80))
              ;
              pfVar33 = FUN_00402550((void *)(unaff_EBP - 0x1568),(longlong *)puVar26);
              fVar55 = FUN_004021b0(pfVar33);
              *(float *)(unaff_EBP - 0x2b9c) = (float)fVar55;
            } while ((4096.0 < *(float *)(unaff_EBP - 0x2b9c)) || (iVar51 = *piVar25, iVar51 == 0));
            iVar31 = FUN_004013f0((void *)(*(int *)(unaff_EBP - 0x2b18) + 0x1c),0xa03);
            *(int *)(unaff_EBP - 0x2b98) = iVar31;
          } while (iVar31 == 0);
          FUN_00401cd0((undefined4 *)(unaff_EBP - 0x10a0));
          iVar54 = FUN_00402170(iVar31);
          fVar56 = (float)iVar54 * 0.5;
          iVar54 = FUN_00402160(iVar31);
          fVar59 = (float)iVar54 * 0.5;
          iVar31 = FUN_00402150(iVar31);
          FUN_004023b0((void *)(unaff_EBP - 0x10a0),(float)iVar31 * 0.5,fVar59,fVar56);
          FUN_00402030((void *)(unaff_EBP - 0x10a0),-*(float *)(iVar51 + 0x98));
          puVar26 = FUN_00402c50(*(void **)(unaff_EBP - 0x2b60),(uint *)(unaff_EBP - 0x1e0c),
                                 (uint *)(iVar51 + 0x80));
          FUN_00402550((void *)(unaff_EBP - 0x998),(longlong *)puVar26);
          FUN_004022e0((void *)(unaff_EBP - 0x10a0),(float *)(unaff_EBP - 0x998));
          pfVar36 = *(float **)(unaff_EBP - 0x2bb0);
          pfVar53 = (float *)FUN_004e1520((float *)(unaff_EBP - 0x10e8),0.5,pfVar36);
          pfVar33 = (float *)(unaff_EBP - 0x10f4);
          pfVar19 = (float *)FUN_00401080((void *)(unaff_EBP - 0x110c),0,0,0);
          pfVar19 = FUN_004021f0((void *)(unaff_EBP - 0x10a0),(float *)(unaff_EBP - 0x1124),pfVar19)
          ;
          FUN_00401450(pfVar19,pfVar33,pfVar53);
          FUN_00402510(unaff_EBP - 0x1a00);
          FUN_00405450((int *)(unaff_EBP - 0x2cc),(uint *)(unaff_EBP - 0x1a00));
          pfVar36 = (float *)FUN_004e1520((float *)(unaff_EBP - 0x113c),0.5,pfVar36);
          pfVar33 = (float *)(unaff_EBP - 0x1154);
          pfVar53 = (float *)FUN_00401080((void *)(unaff_EBP - 0x10dc),0,0,0);
          pfVar53 = FUN_004021f0((void *)(unaff_EBP - 0x10a0),(float *)(unaff_EBP - 0x1184),pfVar53)
          ;
          FUN_004014f0(pfVar53,pfVar33,pfVar36);
          FUN_00402510(unaff_EBP - 0x1a24);
          FUN_00405450((int *)(unaff_EBP - 0x374),(uint *)(unaff_EBP - 0x1a24));
          piVar25 = (int *)FUN_004013d0((void *)(unaff_EBP - 0x2cc),0);
          iVar51 = *piVar25;
          *(int *)(unaff_EBP - 0x2b3c) = iVar51;
          piVar25 = (int *)FUN_004013d0((void *)(unaff_EBP - 0x374),0);
          *(int **)(unaff_EBP - 0x2b70) = piVar25;
        } while (*piVar25 < iVar51);
        piVar40 = (int *)FUN_004013d0((void *)(unaff_EBP - 0x2cc),1);
        *(int **)(unaff_EBP - 0x2bd8) = piVar40;
        piVar34 = (int *)FUN_004013d0((void *)(unaff_EBP - 0x374),1);
        piVar25 = *(int **)(unaff_EBP - 0x2b70);
        *(int **)(unaff_EBP - 0x2b20) = piVar34;
      }
      unaff_EDI = *piVar40;
    } while (*piVar34 < unaff_EDI);
    unaff_ESI = (int *)FUN_004013d0((void *)(unaff_EBP - 0x2cc),2);
    *(int **)(unaff_EBP - 0x2be0) = unaff_ESI;
    in_EAX = (int *)FUN_004013d0((void *)(unaff_EBP - 0x374),2);
    param_1 = *(int **)(unaff_EBP - 0x2b20);
    *(int **)(unaff_EBP - 0x2b9c) = in_EAX;
  } while( true );
LAB_005429eb:
  iVar51 = *(int *)(unaff_EBP - 0x2b14);
LAB_005429f1:
  FUN_00402a10((ulonglong *)(unaff_EBP - 0x300c));
  FUN_00402eb0(*(void **)(unaff_EBP - 0x2b90),(uint *)(unaff_EBP - 0x300c));
LAB_00542a38:
  iVar31 = *(int *)(unaff_EBP - 0x2b54) + 1;
  *(int *)(unaff_EBP - 0x2b54) = iVar31;
  if (iVar31 < 3) goto LAB_00541295;
  iVar31 = *(int *)(unaff_EBP - 0x2b48) + 1;
  *(int *)(unaff_EBP - 0x2b48) = iVar31;
  if (iVar31 < *(int *)(unaff_EBP - 0x2b1c)) goto LAB_00541280;
LAB_00542a67:
  uVar22 = *(uint *)(iVar51 + 0x5c);
  *(uint *)(unaff_EBP - 0x2be0) = uVar22 >> 1 & 0xffffff01;
  *(byte *)(unaff_EBP - 0x2b31) = *(byte *)(iVar51 + 0x5c) & 1;
  *(uint *)(unaff_EBP - 0x2bd8) = uVar22 >> 2 & 0xffffff01;
  FUN_00401060((void *)(unaff_EBP - 0x11c),(undefined4 *)(iVar51 + 0x11a0));
  iVar31 = *(int *)(unaff_EBP - 0x2b24);
  *(undefined4 *)(iVar51 + 0x5c) = 0;
  *(int *)(iVar51 + 0x145c) = *(int *)(iVar51 + 0x145c) + iVar31;
  if (*(int *)(iVar51 + 300) < 1) {
    pfVar33 = (float *)FUN_004cde20((void *)(unaff_EBP - 0xe78),*(undefined4 **)(unaff_EBP - 0x2b5c)
                                   );
    fVar55 = FUN_00402180(pfVar33);
    *(float *)(unaff_EBP - 0x2b74) = (float)fVar55;
    if (16.0 < *(float *)(unaff_EBP - 0x2b74)) {
      fVar55 = FUN_004021b0((float *)(iVar51 + 0x40));
      *(float *)(unaff_EBP - 0x2b74) = (float)fVar55;
      if (16.0 < *(float *)(unaff_EBP - 0x2b74)) {
        puVar26 = FUN_00402c50((void *)(unaff_EBP - 0x1b2c),(uint *)(unaff_EBP - 0x1f5c),
                               (uint *)(iVar51 + 0x10));
        pfVar33 = FUN_00402550((void *)(unaff_EBP - 0x12d4),(longlong *)puVar26);
        fVar55 = FUN_004021b0(pfVar33);
        *(float *)(unaff_EBP - 0x2b9c) = (float)fVar55;
        fVar55 = FUN_004021b0((float *)(unaff_EBP - 0x1c));
        *(float *)(unaff_EBP - 0x2b74) = (float)fVar55;
        fVar56 = *(float *)(unaff_EBP - 0x2b74) * 0.01;
        if (*(float *)(unaff_EBP - 0x2b9c) <= fVar56 && fVar56 != *(float *)(unaff_EBP - 0x2b9c)) {
          *(uint *)(iVar51 + 0x5c) = *(uint *)(iVar51 + 0x5c) | 0x20;
        }
      }
    }
  }
  if (*(char *)(unaff_EBP - 0x2bc5) != '\0') {
    *(uint *)(iVar51 + 0x5c) = *(uint *)(iVar51 + 0x5c) | 0x40;
  }
  pfVar33 = *(float **)(unaff_EBP - 0x2bb0);
  FUN_004e1520((float *)(unaff_EBP - 0x12ec),0.5,pfVar33);
  FUN_00402510(unaff_EBP - 0x1af0);
  puVar26 = FUN_00402c50((void *)(iVar51 + 0x10),(uint *)(unaff_EBP - 0x1f8c),
                         (uint *)(unaff_EBP - 0x1af0));
  FUN_00405450((int *)(unaff_EBP - 0x34),puVar26);
  FUN_004e1520((float *)(unaff_EBP - 0x1304),0.5,pfVar33);
  FUN_00402510(unaff_EBP - 0x9b0);
  puVar26 = FUN_00402cb0((void *)(iVar51 + 0x10),(uint *)(unaff_EBP - 0x1fbc),
                         (uint *)(unaff_EBP - 0x9b0));
  FUN_00405450((int *)(unaff_EBP - 0x28),puVar26);
  piVar25 = (int *)FUN_004013d0((void *)(unaff_EBP - 0x34),0);
  iVar51 = *piVar25;
  *(int **)(unaff_EBP - 0x2b20) = piVar25;
  *(int *)(unaff_EBP - 0x2b3c) = iVar51;
  piVar25 = (int *)FUN_004013d0((void *)(unaff_EBP - 0x28),0);
  *(int **)(unaff_EBP - 0x2b70) = piVar25;
  if (iVar51 <= *piVar25) {
    puVar26 = (uint *)FUN_004013d0((void *)(unaff_EBP - 0x34),1);
    *(uint **)(unaff_EBP - 0x2b9c) = puVar26;
    piVar25 = (int *)FUN_004013d0((void *)(unaff_EBP - 0x28),1);
    *(int **)(unaff_EBP - 0x2b48) = piVar25;
    do {
      uVar22 = *puVar26;
      if ((int)uVar22 <= *piVar25) {
        piVar34 = (int *)FUN_004013d0((void *)(unaff_EBP - 0x34),2);
        *(int **)(unaff_EBP - 0x2b74) = piVar34;
        piVar25 = (int *)FUN_004013d0((void *)(unaff_EBP - 0x28),2);
        *(int **)(unaff_EBP - 0x2b1c) = piVar25;
        do {
          iVar51 = *piVar34;
          if (iVar51 <= *piVar25) {
            do {
              puVar35 = FUN_00405fd0(*(void **)(unaff_EBP - 0x2b18),*(uint *)(unaff_EBP - 0x2b3c),
                                     uVar22,iVar51,0);
              bVar6 = FUN_00406280((int)puVar35);
              if (CONCAT31(extraout_var_01,bVar6) != 2) {
                puVar26 = (uint *)(*(int *)(unaff_EBP - 0x2b14) + 0x5c);
                *puVar26 = *puVar26 | 0x10;
                piVar25 = *(int **)(unaff_EBP - 0x2b1c);
                break;
              }
              piVar25 = *(int **)(unaff_EBP - 0x2b1c);
              iVar51 = iVar51 + 1;
            } while (iVar51 <= *piVar25);
          }
          if ((*(byte *)(*(int *)(unaff_EBP - 0x2b14) + 0x5c) & 0x10) != 0) break;
          piVar34 = *(int **)(unaff_EBP - 0x2b74);
          uVar22 = uVar22 + 1;
        } while ((int)uVar22 <= **(int **)(unaff_EBP - 0x2b48));
        iVar51 = *(int *)(unaff_EBP - 0x2b3c);
        piVar25 = *(int **)(unaff_EBP - 0x2b48);
      }
      if ((*(byte *)(*(int *)(unaff_EBP - 0x2b14) + 0x5c) & 0x10) != 0) break;
      piVar34 = *(int **)(unaff_EBP - 0x2b70);
      puVar26 = *(uint **)(unaff_EBP - 0x2b9c);
      iVar51 = iVar51 + 1;
      *(int *)(unaff_EBP - 0x2b3c) = iVar51;
    } while (iVar51 <= *piVar34);
    piVar25 = *(int **)(unaff_EBP - 0x2b70);
  }
  iVar51 = *(int *)(unaff_EBP - 0x2b14);
  *(undefined1 *)(unaff_EBP - 0x2bdc) = 0;
  if (*(char *)(iVar51 + 0x60) == '\x06') {
    iVar51 = *(int *)(unaff_EBP - 0x2b14);
    pvVar23 = *(void **)(unaff_EBP - 0x2bb0);
  }
  else {
    puVar26 = (uint *)FUN_004013d0((void *)(unaff_EBP - 0x34),2);
    uVar22 = *puVar26;
    *(uint **)(unaff_EBP - 0x2b48) = puVar26;
    piVar34 = *(int **)(unaff_EBP - 0x2b20);
    *(uint *)(unaff_EBP - 0x2b54) = uVar22;
    iVar51 = *piVar34;
    *(int *)(unaff_EBP - 0x2b3c) = iVar51;
    if (iVar51 <= *piVar25) {
      piVar34 = (int *)FUN_004013d0((void *)(unaff_EBP - 0x34),1);
      *(int **)(unaff_EBP - 0x2b9c) = piVar34;
      piVar25 = (int *)FUN_004013d0((void *)(unaff_EBP - 0x28),1);
      piVar40 = *(int **)(unaff_EBP - 0x2b70);
      iVar51 = *(int *)(unaff_EBP - 0x2b3c);
      *(int **)(unaff_EBP - 0x2b1c) = piVar25;
      do {
        iVar31 = *piVar34;
        *(int *)(unaff_EBP - 0x2b50) = iVar31;
        if (iVar31 <= *piVar25) {
          piVar34 = (int *)FUN_004013d0((void *)(unaff_EBP - 0x28),2);
          piVar25 = *(int **)(unaff_EBP - 0x2b1c);
          piVar40 = *(int **)(unaff_EBP - 0x2b48);
          *(int **)(unaff_EBP - 0x2b74) = piVar34;
          do {
            iVar51 = *piVar40;
            iVar54 = iVar51;
            if (iVar51 <= *piVar34) {
              do {
                iVar54 = iVar54 + 1;
                puVar35 = FUN_00405fd0(*(void **)(unaff_EBP - 0x2b18),*(uint *)(unaff_EBP - 0x2b3c),
                                       *(uint *)(unaff_EBP - 0x2b50),iVar51,0);
                bVar6 = FUN_00406280((int)puVar35);
                if (CONCAT31(extraout_var_02,bVar6) == 2) {
                  iVar31 = *(int *)(unaff_EBP - 0x2b54);
                  if (*(int *)(unaff_EBP - 0x2b54) < iVar54) {
                    iVar31 = iVar54;
                  }
                  *(int *)(unaff_EBP - 0x2b54) = iVar31;
                  iVar31 = *(int *)(unaff_EBP - 0x2b14);
                  *(undefined1 *)(unaff_EBP - 0x2bdc) = 1;
                  puVar26 = (uint *)(iVar31 + 0x5c);
                  *puVar26 = *puVar26 | 2;
                }
                piVar34 = *(int **)(unaff_EBP - 0x2b74);
                iVar51 = iVar51 + 1;
              } while (iVar51 <= *piVar34);
              iVar31 = *(int *)(unaff_EBP - 0x2b50);
              piVar25 = *(int **)(unaff_EBP - 0x2b1c);
              piVar40 = *(int **)(unaff_EBP - 0x2b48);
            }
            iVar31 = iVar31 + 1;
            *(int *)(unaff_EBP - 0x2b50) = iVar31;
          } while (iVar31 <= *piVar25);
          iVar51 = *(int *)(unaff_EBP - 0x2b3c);
          piVar34 = *(int **)(unaff_EBP - 0x2b9c);
          piVar40 = *(int **)(unaff_EBP - 0x2b70);
        }
        iVar51 = iVar51 + 1;
        *(int *)(unaff_EBP - 0x2b3c) = iVar51;
      } while (iVar51 <= *piVar40);
      uVar22 = *(uint *)(unaff_EBP - 0x2b54);
    }
    iVar51 = *(int *)(unaff_EBP - 0x2b14);
    if ((*(byte *)(iVar51 + 0x5c) & 2) == 0) {
      pvVar23 = (void *)(iVar51 + 0x80);
    }
    else {
      puVar26 = (uint *)FUN_004e2320((void *)(iVar51 + 0x10),2);
      piVar25 = (int *)(unaff_EBP - 0x31bc);
      piVar34 = FUN_004cde40((void *)(unaff_EBP - 0x31cc),uVar22);
      plVar32 = (longlong *)FUN_00401490(piVar34,piVar25,puVar26);
      fVar55 = FUN_00401420(plVar32);
      *(float *)(unaff_EBP - 0x2b74) = (float)fVar55;
      pvVar23 = (void *)(iVar51 + 0x80);
      pfVar33 = (float *)FUN_004013d0(pvVar23,2);
      fVar59 = *(float *)(unaff_EBP - 0x2b74) / (*pfVar33 * 0.5);
      fVar56 = 0.0;
      if (0.0 < fVar59) {
        if (1.0 <= fVar59) {
          fVar56 = 1.0;
        }
        else {
          fVar56 = fVar59 + 1.0;
        }
        if (*(char *)(iVar51 + 0x68) == 'k') {
          fVar56 = fVar59 + 1.0;
        }
      }
      **(float **)(unaff_EBP - 0x2bb4) =
           *(float *)(unaff_EBP - 0x2ba0) * 30.0 * fVar56 + **(float **)(unaff_EBP - 0x2bb4);
    }
  }
  *(undefined4 *)(unaff_EBP - 0x2b3c) = 0x3ba3d70a;
  fVar55 = FUN_004021b0((float *)(iVar51 + 0x40));
  *(float *)(unaff_EBP - 0x2b74) = (float)fVar55;
  if (0.0 < *(float *)(unaff_EBP - 0x2b74)) {
    *(undefined4 *)(unaff_EBP - 0x2b3c) = 0x3b23d70a;
  }
  if ((*(byte *)(iVar51 + 0x5c) & 2) == 0) {
    piVar25 = (int *)(unaff_EBP - 0x337c);
    FUN_004013d0(pvVar23,2);
    piVar34 = (int *)(unaff_EBP - 0x342c);
    pvVar23 = (void *)FUN_004e2320(*(void **)(unaff_EBP - 0x2b60),2);
    pvVar23 = (void *)FUN_004014b0(pvVar23,piVar34);
    puVar26 = (uint *)FUN_004014b0(pvVar23,piVar25);
    uVar60 = FUN_00405510(puVar26);
    *(int *)(unaff_EBP - 0x2b1c) = (int)uVar60;
    uVar22 = **(uint **)(unaff_EBP - 0x2b20);
    if ((int)uVar22 <= **(int **)(unaff_EBP - 0x2b70)) {
      puVar26 = (uint *)FUN_004013d0((void *)(unaff_EBP - 0x34),1);
      *(uint **)(unaff_EBP - 0x2b9c) = puVar26;
      piVar25 = (int *)FUN_004013d0((void *)(unaff_EBP - 0x28),1);
      *(int **)(unaff_EBP - 0x2b74) = piVar25;
      do {
        uVar52 = *puVar26;
        if ((int)uVar52 <= *piVar25) {
          do {
            puVar35 = FUN_00405fd0(*(void **)(unaff_EBP - 0x2b18),uVar22,uVar52,
                                   *(int *)(unaff_EBP - 0x2b1c),0);
            uVar28 = FUN_004061f0((int)puVar35);
            if ((char)uVar28 != '\0') {
              puVar26 = (uint *)(*(int *)(unaff_EBP - 0x2b14) + 0x5c);
              *puVar26 = *puVar26 | 1;
            }
            puVar35 = FUN_00405fd0(*(void **)(unaff_EBP - 0x2b18),uVar22,uVar52,
                                   *(int *)(unaff_EBP - 0x2b1c),0);
            bVar6 = FUN_00406280((int)puVar35);
            uVar48 = *(uint *)(unaff_EBP - 0x2bdc) & 0xff;
            if (CONCAT31(extraout_var_03,bVar6) == 3) {
              uVar48 = 1;
            }
            piVar25 = *(int **)(unaff_EBP - 0x2b74);
            uVar52 = uVar52 + 1;
            *(uint *)(unaff_EBP - 0x2bdc) = uVar48;
          } while ((int)uVar52 <= *piVar25);
        }
        if ((*(byte *)(*(int *)(unaff_EBP - 0x2b14) + 0x5c) & 1) != 0) break;
        puVar26 = *(uint **)(unaff_EBP - 0x2b9c);
        uVar22 = uVar22 + 1;
      } while ((int)uVar22 <= **(int **)(unaff_EBP - 0x2b70));
    }
    iVar51 = *(int *)(unaff_EBP - 0x2b14);
  }
  if ((((*(char *)(unaff_EBP - 0x2bdc) != '\0') && (*(char *)(iVar51 + 0x60) == '\x05')) &&
      (uVar22 = FUN_00405420(*(void **)(unaff_EBP - 0x2b18),(uint *)(iVar51 + 0x198)), uVar22 != 0))
     && ((*(float *)(uVar22 + 0x1198) < 1.0 &&
         (fVar56 = *(float *)(unaff_EBP - 0x2ba0) * 0.05 + *(float *)(uVar22 + 0x1198),
         *(float *)(uVar22 + 0x1198) = fVar56, 1.0 < fVar56)))) {
    *(undefined4 *)(uVar22 + 0x1198) = 0x3f800000;
  }
  if ((*(char *)(unaff_EBP - 0x2b31) != '\0') && (*(char *)(unaff_EBP - 0x2b29) != '\0')) {
    pfVar33 = (float *)FUN_004cde20((void *)(unaff_EBP - 0xdf0),*(undefined4 **)(unaff_EBP - 0x2b30)
                                   );
    fVar55 = FUN_00402180(pfVar33);
    *(float *)(unaff_EBP - 0x2b30) = (float)fVar55;
    if ((0.0 < *(float *)(unaff_EBP - 0x2b30)) &&
       (((*(byte *)(iVar51 + 0x5c) & 3) == 0 &&
        (pfVar33 = (float *)FUN_004013d0((void *)(unaff_EBP - 0x1c),2), *pfVar33 <= 0.0)))) {
      iVar31 = FUN_004013d0((void *)(iVar51 + 0x80),2);
      *(int *)(unaff_EBP - 0x2b74) = iVar31;
      pvVar23 = (void *)FUN_004e2320((void *)(iVar51 + 0x10),2);
      piVar25 = (int *)(unaff_EBP - 0x344c);
      *(void **)(unaff_EBP - 0x2b30) = pvVar23;
      pvVar23 = (void *)FUN_004014b0(pvVar23,(int *)(unaff_EBP - 0x345c));
      puVar26 = (uint *)FUN_004014b0(pvVar23,piVar25);
      uVar60 = FUN_00405510(puVar26);
      *(int *)(unaff_EBP - 0x2b1c) = (int)uVar60;
      uVar22 = **(uint **)(unaff_EBP - 0x2b20);
      if ((int)uVar22 <= **(int **)(unaff_EBP - 0x2b70)) {
        puVar26 = (uint *)FUN_004013d0((void *)(unaff_EBP - 0x34),1);
        *(uint **)(unaff_EBP - 0x2b9c) = puVar26;
        piVar25 = (int *)FUN_004013d0((void *)(unaff_EBP - 0x28),1);
        *(int **)(unaff_EBP - 0x2b48) = piVar25;
        do {
          uVar52 = *puVar26;
          if ((int)uVar52 <= *piVar25) {
            do {
              puVar35 = FUN_00405fd0(*(void **)(unaff_EBP - 0x2b18),uVar22,uVar52,
                                     *(int *)(unaff_EBP - 0x2b1c),0);
              uVar28 = FUN_004061f0((int)puVar35);
              if ((char)uVar28 != '\0') {
                pvVar23 = *(void **)(unaff_EBP - 0x2b30);
                puVar26 = (uint *)(*(int *)(unaff_EBP - 0x2b14) + 0x5c);
                *puVar26 = *puVar26 | 1;
                FUN_004014b0(pvVar23,(int *)(unaff_EBP - 0x2dc8));
                piVar25 = (int *)(unaff_EBP - 0x346c);
                piVar34 = (int *)(unaff_EBP - 0x347c);
                piVar40 = FUN_004cde40((void *)(unaff_EBP - 0x348c),*(uint *)(unaff_EBP - 0x2b1c));
                pvVar42 = (void *)FUN_00401530(piVar40,piVar34);
                puVar24 = (undefined4 *)FUN_00401530(pvVar42,piVar25);
                FUN_004cde20(pvVar23,puVar24);
                plVar32 = (longlong *)
                          FUN_00401490(pvVar23,(int *)(unaff_EBP - 0x349c),
                                       (uint *)(unaff_EBP - 0x2dc8));
                fVar55 = FUN_00401420(plVar32);
                *(float *)(*(int *)(unaff_EBP - 0x2b14) + 0x1180) = (float)fVar55;
                piVar25 = *(int **)(unaff_EBP - 0x2b48);
                break;
              }
              piVar25 = *(int **)(unaff_EBP - 0x2b48);
              uVar52 = uVar52 + 1;
            } while ((int)uVar52 <= *piVar25);
          }
          if ((*(byte *)(*(int *)(unaff_EBP - 0x2b14) + 0x5c) & 1) != 0) break;
          puVar26 = *(uint **)(unaff_EBP - 0x2b9c);
          uVar22 = uVar22 + 1;
        } while ((int)uVar22 <= **(int **)(unaff_EBP - 0x2b70));
      }
    }
  }
  if ((*(char *)(unaff_EBP - 0x2bac) == '\0') && (*(char *)(unaff_EBP - 0x2b94) == '\0')) {
    pvVar23 = *(void **)(unaff_EBP - 0x2b14);
  }
  else {
    pvVar23 = *(void **)(unaff_EBP - 0x2b14);
    *(uint *)((int)pvVar23 + 0x5c) = *(uint *)((int)pvVar23 + 0x5c) | 1;
  }
  if ((*(char *)((int)pvVar23 + 0x68) == 'k') && ((*(byte *)((int)pvVar23 + 0x5c) & 2) != 0)) {
    fVar56 = *(float *)(unaff_EBP - 0x2b3c) * 0.1;
    pfVar33 = (float *)(unaff_EBP - 0x2e44);
    iVar51 = *(int *)(unaff_EBP - 0x2b24);
    *(undefined4 *)(unaff_EBP - 0x2e44) = 0;
    *(float *)(unaff_EBP - 0x2b30) = fVar56;
    pfVar36 = (float *)FUN_004013d0((void *)((int)pvVar23 + 0x34),0);
    FUN_0052e710(pfVar36,pfVar33,iVar51,fVar56);
    fVar56 = *(float *)(unaff_EBP - 0x2b30);
    pfVar33 = (float *)(unaff_EBP - 0x2e28);
    iVar51 = *(int *)(unaff_EBP - 0x2b24);
    *(undefined4 *)(unaff_EBP - 0x2e28) = 0;
    pfVar36 = (float *)FUN_004013d0((void *)((int)pvVar23 + 0x34),1);
    FUN_0052e710(pfVar36,pfVar33,iVar51,fVar56);
    fVar56 = *(float *)(unaff_EBP - 0x2b3c);
    iVar51 = *(int *)(unaff_EBP - 0x2b24);
    *(undefined4 *)(unaff_EBP - 0x2e00) = 0;
    FUN_0052e710(*(float **)(unaff_EBP - 0x2bb4),(float *)(unaff_EBP - 0x2e00),iVar51,fVar56);
  }
  if (((*(byte *)((int)pvVar23 + 0x5c) & 1) == 0) || (*(char *)((int)pvVar23 + 0x68) == '0')) {
LAB_00543507:
    iVar51 = *(int *)(unaff_EBP - 0x2b24);
  }
  else {
    if (*(char *)((int)pvVar23 + 0x68) == '6') {
      iVar51 = FUN_00407db0(pvVar23,0xffffffff);
      iVar31 = FUN_00411d60(pvVar23,0xffffffff);
      if (*(int *)((int)pvVar23 + 0x6c) <= iVar51 + iVar31) goto LAB_00543507;
    }
    cVar4 = *(char *)((int)pvVar23 + 0x68);
    if (((((cVar4 == '\x06') || (cVar4 == '\a')) || (cVar4 == '\x14')) ||
        (((cVar4 == '\x13' || (cVar4 == '\x12')) || ((cVar4 == '\x11' || (cVar4 == '\n')))))) &&
       (iVar51 = FUN_00407db0(pvVar23,0xffffffff), *(int *)((int)pvVar23 + 0x6c) < iVar51))
    goto LAB_00543507;
    fVar56 = *(float *)(unaff_EBP - 0x2b3c);
    iVar51 = *(int *)(unaff_EBP - 0x2b24);
    iVar31 = iVar51;
    puVar37 = (undefined8 *)FUN_00401080((void *)(unaff_EBP - 0x131c),0,0,0);
    FUN_0052e7c0((float *)((int)pvVar23 + 0x34),puVar37,iVar31,fVar56);
  }
  if ((((*(byte *)((int)pvVar23 + 0x5c) & 3) != 0) ||
      ((*(byte *)((int)pvVar23 + 0x124) & 0x10) != 0)) ||
     (bVar5 = FUN_00530540((int)pvVar23 + 0x1460), !bVar5)) {
    fVar56 = *(float *)(unaff_EBP - 0x2b3c);
    puVar37 = (undefined8 *)FUN_00401080((void *)(unaff_EBP - 0x1334),0,0,0);
    FUN_0052e7c0((float *)((int)pvVar23 + 0x4c),puVar37,iVar51,fVar56);
  }
  FUN_00401cd0((undefined4 *)(unaff_EBP - 0x1c5c));
  pfVar33 = (float *)FUN_004013d0((void *)((int)pvVar23 + 0x28),2);
  fVar56 = *pfVar33;
  *(float **)(unaff_EBP - 0x2b3c) = pfVar33;
  FUN_00402030((void *)(unaff_EBP - 0x1c5c),fVar56);
  pfVar33 = (float *)FUN_00401080((void *)(unaff_EBP - 0x134c),0,0x3f800000,0);
  FUN_004dde00((void *)(unaff_EBP - 0x1c5c),(float *)(unaff_EBP - 0x58),pfVar33);
  puVar24 = FUN_00401080((void *)(unaff_EBP - 0x1364),0,0,0);
  FUN_00401060((void *)((int)pvVar23 + 0x11a0),puVar24);
  pfVar33 = (float *)FUN_004013d0((void *)((int)pvVar23 + 0x80),1);
  if (*(char *)((int)pvVar23 + 0x60) == '\0') {
    *(float **)(unaff_EBP - 0x2b50) = pfVar33;
    pvVar23 = (void *)FUN_004e2320((void *)((int)pvVar23 + 0x10),1);
    piVar25 = (int *)(unaff_EBP - 0x34bc);
    piVar34 = (int *)(unaff_EBP - 0x34cc);
    *(void **)(unaff_EBP - 0x2b54) = pvVar23;
  }
  else {
    *(float **)(unaff_EBP - 0x2b50) = pfVar33;
    pvVar23 = (void *)FUN_004e2320((void *)((int)pvVar23 + 0x10),1);
    fVar56 = *pfVar33;
    piVar25 = (int *)(unaff_EBP - 0x34ec);
    piVar34 = (int *)(unaff_EBP - 0x356c);
    *(void **)(unaff_EBP - 0x2b54) = pvVar23;
    pvVar23 = (void *)FUN_00405660(pvVar23,(int *)(unaff_EBP - 0x357c),(int)(fVar56 * 0.5 + 0.5));
  }
  pvVar23 = (void *)FUN_004014b0(pvVar23,piVar34);
  pCVar38 = (CRefTime *)FUN_004014b0(pvVar23,piVar25);
  lVar39 = CRefTime::Millisecs(pCVar38);
  piVar25 = *(int **)(unaff_EBP - 0x2b70);
  *(long *)(unaff_EBP - 0x2b1c) = lVar39;
  uVar22 = **(uint **)(unaff_EBP - 0x2b20);
  if ((int)uVar22 <= *piVar25) {
    piVar25 = (int *)FUN_004013d0((void *)(unaff_EBP - 0x34),2);
    *(int **)(unaff_EBP - 0x2b74) = piVar25;
    piVar34 = (int *)FUN_004013d0((void *)(unaff_EBP - 0x28),2);
    *(int **)(unaff_EBP - 0x2b30) = piVar34;
    while( true ) {
      iVar51 = *piVar25;
      if (iVar51 <= *piVar34) {
        do {
          puVar35 = FUN_00405fd0(*(void **)(unaff_EBP - 0x2b18),uVar22,*(uint *)(unaff_EBP - 0x2b1c)
                                 ,iVar51,0);
          uVar28 = FUN_004061f0((int)puVar35);
          if ((char)uVar28 != '\0') {
            iVar51 = *(int *)(unaff_EBP - 0x2b14);
            puVar26 = (uint *)(iVar51 + 0x5c);
            *puVar26 = *puVar26 | 4;
            puVar24 = (undefined4 *)FUN_004013d0((void *)(iVar51 + 0x11a0),1);
            piVar25 = *(int **)(unaff_EBP - 0x2b70);
            *puVar24 = 0x3f800000;
            goto LAB_00543767;
          }
          piVar34 = *(int **)(unaff_EBP - 0x2b30);
          iVar51 = iVar51 + 1;
        } while (iVar51 <= *piVar34);
      }
      piVar25 = *(int **)(unaff_EBP - 0x2b70);
      uVar22 = uVar22 + 1;
      if (*piVar25 < (int)uVar22) break;
      piVar25 = *(int **)(unaff_EBP - 0x2b74);
    }
  }
LAB_00543767:
  if (*(char *)(*(int *)(unaff_EBP - 0x2b14) + 0x60) == '\0') {
    piVar34 = (int *)(unaff_EBP - 0x358c);
    pvVar23 = *(void **)(unaff_EBP - 0x2b54);
    piVar40 = (int *)(unaff_EBP - 0x359c);
  }
  else {
    piVar34 = (int *)(unaff_EBP - 0x35ac);
    piVar40 = (int *)(unaff_EBP - 0x35bc);
    pvVar23 = (void *)FUN_00405690(*(void **)(unaff_EBP - 0x2b54),(int *)(unaff_EBP - 0x35cc),
                                   (int)(**(float **)(unaff_EBP - 0x2b50) * 0.5 + 0.5));
  }
  pvVar23 = (void *)FUN_00401530(pvVar23,piVar40);
  pCVar38 = (CRefTime *)FUN_00401530(pvVar23,piVar34);
  lVar39 = CRefTime::Millisecs(pCVar38);
  *(long *)(unaff_EBP - 0x2b1c) = lVar39;
  uVar22 = **(uint **)(unaff_EBP - 0x2b20);
  if ((int)uVar22 <= *piVar25) {
    piVar40 = (int *)FUN_004013d0((void *)(unaff_EBP - 0x34),2);
    *(int **)(unaff_EBP - 0x2b74) = piVar40;
    piVar25 = (int *)FUN_004013d0((void *)(unaff_EBP - 0x28),2);
    piVar34 = *(int **)(unaff_EBP - 0x2b70);
    *(int **)(unaff_EBP - 0x2b30) = piVar25;
    while( true ) {
      iVar51 = *piVar40;
      if (iVar51 <= *piVar25) {
        do {
          puVar35 = FUN_00405fd0(*(void **)(unaff_EBP - 0x2b18),uVar22,*(uint *)(unaff_EBP - 0x2b1c)
                                 ,iVar51,0);
          uVar28 = FUN_004061f0((int)puVar35);
          if ((char)uVar28 != '\0') {
            iVar51 = *(int *)(unaff_EBP - 0x2b14);
            puVar26 = (uint *)(iVar51 + 0x5c);
            *puVar26 = *puVar26 | 4;
            puVar24 = (undefined4 *)FUN_004013d0((void *)(iVar51 + 0x11a0),1);
            *puVar24 = 0xbf800000;
            goto LAB_005438b1;
          }
          piVar25 = *(int **)(unaff_EBP - 0x2b30);
          iVar51 = iVar51 + 1;
        } while (iVar51 <= *piVar25);
        piVar34 = *(int **)(unaff_EBP - 0x2b70);
      }
      uVar22 = uVar22 + 1;
      if (*piVar34 < (int)uVar22) break;
      piVar40 = *(int **)(unaff_EBP - 0x2b74);
    }
  }
LAB_005438b1:
  if (*(char *)(*(int *)(unaff_EBP - 0x2b14) + 0x60) == '\0') {
    pvVar23 = (void *)FUN_004e2320(*(void **)(unaff_EBP - 0x2b60),0);
    piVar25 = (int *)(unaff_EBP - 0x35dc);
    piVar34 = (int *)(unaff_EBP - 0x35ec);
    *(void **)(unaff_EBP - 0x2b70) = pvVar23;
  }
  else {
    pvVar23 = (void *)FUN_004e2320(*(void **)(unaff_EBP - 0x2b60),0);
    piVar25 = (int *)(unaff_EBP - 0x35fc);
    piVar34 = (int *)(unaff_EBP - 0x362c);
    pfVar33 = *(float **)(unaff_EBP - 0x2b4c);
    *(void **)(unaff_EBP - 0x2b70) = pvVar23;
    pvVar23 = (void *)FUN_00405660(pvVar23,(int *)(unaff_EBP - 0x363c),(int)(*pfVar33 * 0.5 + 0.5));
  }
  pvVar23 = (void *)FUN_004014b0(pvVar23,piVar34);
  pCVar38 = (CRefTime *)FUN_004014b0(pvVar23,piVar25);
  lVar39 = CRefTime::Millisecs(pCVar38);
  *(long *)(unaff_EBP - 0x2b1c) = lVar39;
  puVar26 = (uint *)FUN_004013d0((void *)(unaff_EBP - 0x34),1);
  uVar22 = *puVar26;
  *(uint **)(unaff_EBP - 0x2b48) = puVar26;
  piVar25 = (int *)FUN_004013d0((void *)(unaff_EBP - 0x28),1);
  *(int **)(unaff_EBP - 0x2b20) = piVar25;
  if ((int)uVar22 <= *piVar25) {
    piVar40 = (int *)FUN_004013d0((void *)(unaff_EBP - 0x34),2);
    *(int **)(unaff_EBP - 0x2b74) = piVar40;
    piVar25 = (int *)FUN_004013d0((void *)(unaff_EBP - 0x28),2);
    piVar34 = *(int **)(unaff_EBP - 0x2b20);
    *(int **)(unaff_EBP - 0x2b30) = piVar25;
    while( true ) {
      iVar51 = *piVar40;
      if (iVar51 <= *piVar25) {
        do {
          puVar35 = FUN_00405fd0(*(void **)(unaff_EBP - 0x2b18),*(uint *)(unaff_EBP - 0x2b1c),uVar22
                                 ,iVar51,0);
          uVar28 = FUN_004061f0((int)puVar35);
          if ((char)uVar28 != '\0') {
            iVar51 = *(int *)(unaff_EBP - 0x2b14);
            puVar26 = (uint *)(iVar51 + 0x5c);
            *puVar26 = *puVar26 | 4;
            puVar24 = (undefined4 *)FUN_004013d0((void *)(iVar51 + 0x11a0),0);
            *puVar24 = 0x3f800000;
            goto LAB_00543a2b;
          }
          piVar25 = *(int **)(unaff_EBP - 0x2b30);
          iVar51 = iVar51 + 1;
        } while (iVar51 <= *piVar25);
        piVar34 = *(int **)(unaff_EBP - 0x2b20);
      }
      uVar22 = uVar22 + 1;
      if (*piVar34 < (int)uVar22) break;
      piVar40 = *(int **)(unaff_EBP - 0x2b74);
    }
LAB_00543a2b:
    puVar26 = *(uint **)(unaff_EBP - 0x2b48);
  }
  if (*(char *)(*(int *)(unaff_EBP - 0x2b14) + 0x60) == '\0') {
    piVar25 = (int *)(unaff_EBP - 0x366c);
    pvVar23 = *(void **)(unaff_EBP - 0x2b70);
    piVar34 = (int *)(unaff_EBP - 0x36dc);
  }
  else {
    piVar25 = (int *)(unaff_EBP - 0x36fc);
    piVar34 = (int *)(unaff_EBP - 0x371c);
    pvVar23 = (void *)FUN_00405690(*(void **)(unaff_EBP - 0x2b70),(int *)(unaff_EBP - 0x372c),
                                   (int)(**(float **)(unaff_EBP - 0x2b4c) * 0.5 + 0.5));
  }
  pvVar23 = (void *)FUN_00401530(pvVar23,piVar34);
  pCVar38 = (CRefTime *)FUN_00401530(pvVar23,piVar25);
  lVar39 = CRefTime::Millisecs(pCVar38);
  uVar22 = *puVar26;
  *(long *)(unaff_EBP - 0x2b1c) = lVar39;
  if ((int)uVar22 <= **(int **)(unaff_EBP - 0x2b20)) {
    piVar40 = (int *)FUN_004013d0((void *)(unaff_EBP - 0x34),2);
    *(int **)(unaff_EBP - 0x2b74) = piVar40;
    piVar25 = (int *)FUN_004013d0((void *)(unaff_EBP - 0x28),2);
    piVar34 = *(int **)(unaff_EBP - 0x2b20);
    *(int **)(unaff_EBP - 0x2b30) = piVar25;
    while( true ) {
      iVar51 = *piVar40;
      if (iVar51 <= *piVar25) {
        do {
          puVar35 = FUN_00405fd0(*(void **)(unaff_EBP - 0x2b18),*(uint *)(unaff_EBP - 0x2b1c),uVar22
                                 ,iVar51,0);
          uVar28 = FUN_004061f0((int)puVar35);
          if ((char)uVar28 != '\0') {
            iVar51 = *(int *)(unaff_EBP - 0x2b14);
            *(uint *)(iVar51 + 0x5c) = *(uint *)(iVar51 + 0x5c) | 4;
            puVar24 = (undefined4 *)FUN_004013d0((void *)(iVar51 + 0x11a0),0);
            *puVar24 = 0xbf800000;
            goto LAB_00543b83;
          }
          piVar25 = *(int **)(unaff_EBP - 0x2b30);
          iVar51 = iVar51 + 1;
        } while (iVar51 <= *piVar25);
        piVar34 = *(int **)(unaff_EBP - 0x2b20);
      }
      uVar22 = uVar22 + 1;
      if (*piVar34 < (int)uVar22) break;
      piVar40 = *(int **)(unaff_EBP - 0x2b74);
    }
  }
  iVar51 = *(int *)(unaff_EBP - 0x2b14);
LAB_00543b83:
  if ((*(byte *)(iVar51 + 0x5c) & 4) == 0) {
    pfVar33 = (float *)FUN_00401080((void *)(unaff_EBP - 0x137c),0x3f333333,0x3f333333,0);
    fVar55 = FUN_004015a0((float *)(unaff_EBP - 0x58),pfVar33);
    *(float *)(unaff_EBP - 0x2b30) = (float)fVar55;
    if (*(float *)(unaff_EBP - 0x2b30) <= 0.1) {
      if (*(char *)(iVar51 + 0x60) == '\0') {
        piVar25 = (int *)(unaff_EBP - 0x31b4);
        pvVar23 = (void *)FUN_004014b0(*(void **)(unaff_EBP - 0x2b70),(int *)(unaff_EBP - 0x3614));
        pCVar38 = (CRefTime *)FUN_004014b0(pvVar23,piVar25);
        lVar39 = CRefTime::Millisecs(pCVar38);
        *(long *)(unaff_EBP - 0x2b48) = lVar39;
        piVar25 = (int *)(unaff_EBP - 0x3274);
        pvVar23 = *(void **)(unaff_EBP - 0x2b54);
        piVar34 = (int *)(unaff_EBP - 0x34e4);
      }
      else {
        piVar25 = (int *)(unaff_EBP - 0x3284);
        piVar34 = (int *)(unaff_EBP - 0x36b4);
        pvVar23 = (void *)FUN_00405660(*(void **)(unaff_EBP - 0x2b70),(int *)(unaff_EBP - 0x3294),
                                       (int)(**(float **)(unaff_EBP - 0x2b4c) * 0.5 + 0.5));
        pvVar23 = (void *)FUN_004014b0(pvVar23,piVar34);
        pCVar38 = (CRefTime *)FUN_004014b0(pvVar23,piVar25);
        lVar39 = CRefTime::Millisecs(pCVar38);
        *(long *)(unaff_EBP - 0x2b48) = lVar39;
        piVar25 = (int *)(unaff_EBP - 0x34f4);
        piVar34 = (int *)(unaff_EBP - 0x32a4);
        pvVar23 = (void *)FUN_00405660(*(void **)(unaff_EBP - 0x2b54),(int *)(unaff_EBP - 0x3624),
                                       (int)(**(float **)(unaff_EBP - 0x2b50) * 0.5 + 0.5));
      }
      pvVar23 = (void *)FUN_004014b0(pvVar23,piVar34);
      pCVar38 = (CRefTime *)FUN_004014b0(pvVar23,piVar25);
      lVar39 = CRefTime::Millisecs(pCVar38);
      *(long *)(unaff_EBP - 0x2b1c) = lVar39;
      piVar25 = (int *)FUN_004013d0((void *)(unaff_EBP - 0x34),2);
      iVar51 = *piVar25;
      piVar25 = (int *)FUN_004013d0((void *)(unaff_EBP - 0x28),2);
      if (iVar51 <= *piVar25) {
        do {
          puVar35 = FUN_00405fd0(*(void **)(unaff_EBP - 0x2b18),*(uint *)(unaff_EBP - 0x2b48),
                                 *(uint *)(unaff_EBP - 0x2b1c),iVar51,0);
          uVar28 = FUN_004061f0((int)puVar35);
          if ((char)uVar28 != '\0') {
            iVar51 = *(int *)(unaff_EBP - 0x2b14);
            *(uint *)(iVar51 + 0x5c) = *(uint *)(iVar51 + 0x5c) | 4;
            puVar24 = (undefined4 *)FUN_004013d0((void *)(iVar51 + 0x11a0),0);
            *puVar24 = 0x3f800000;
            puVar24 = (undefined4 *)FUN_004013d0((void *)(iVar51 + 0x11a0),1);
            *puVar24 = 0x3f800000;
            goto LAB_00543d89;
          }
          iVar51 = iVar51 + 1;
        } while (iVar51 <= *piVar25);
      }
      iVar51 = *(int *)(unaff_EBP - 0x2b14);
    }
LAB_00543d89:
    if ((*(byte *)(iVar51 + 0x5c) & 4) == 0) {
      pfVar33 = (float *)FUN_00401080((void *)(unaff_EBP - 0x1394),0xbf333333,0x3f333333,0);
      fVar55 = FUN_004015a0((float *)(unaff_EBP - 0x58),pfVar33);
      *(float *)(unaff_EBP - 0x2b30) = (float)fVar55;
      if (*(float *)(unaff_EBP - 0x2b30) <= 0.1) {
        if (*(char *)(iVar51 + 0x60) == '\0') {
          piVar25 = (int *)(unaff_EBP - 0x32b4);
          pvVar23 = (void *)FUN_00401530(*(void **)(unaff_EBP - 0x2b70),(int *)(unaff_EBP - 0x3504))
          ;
          pCVar38 = (CRefTime *)FUN_00401530(pvVar23,piVar25);
          lVar39 = CRefTime::Millisecs(pCVar38);
          *(long *)(unaff_EBP - 0x2b48) = lVar39;
          piVar25 = (int *)(unaff_EBP - 0x32c4);
          pvVar23 = *(void **)(unaff_EBP - 0x2b54);
          piVar34 = (int *)(unaff_EBP - 0x3704);
        }
        else {
          piVar25 = (int *)(unaff_EBP - 0x32d4);
          piVar34 = (int *)(unaff_EBP - 0x3514);
          pvVar23 = (void *)FUN_00405690(*(void **)(unaff_EBP - 0x2b70),(int *)(unaff_EBP - 0x32e4),
                                         (int)(**(float **)(unaff_EBP - 0x2b4c) * 0.5 + 0.5));
          pvVar23 = (void *)FUN_00401530(pvVar23,piVar34);
          pCVar38 = (CRefTime *)FUN_00401530(pvVar23,piVar25);
          lVar39 = CRefTime::Millisecs(pCVar38);
          *(long *)(unaff_EBP - 0x2b48) = lVar39;
          piVar25 = (int *)(unaff_EBP - 0x3634);
          piVar34 = (int *)(unaff_EBP - 0x32f4);
          pvVar23 = (void *)FUN_00405660(*(void **)(unaff_EBP - 0x2b54),(int *)(unaff_EBP - 0x3524),
                                         (int)(**(float **)(unaff_EBP - 0x2b50) * 0.5 + 0.5));
        }
        pvVar23 = (void *)FUN_004014b0(pvVar23,piVar34);
        pCVar38 = (CRefTime *)FUN_004014b0(pvVar23,piVar25);
        lVar39 = CRefTime::Millisecs(pCVar38);
        *(long *)(unaff_EBP - 0x2b1c) = lVar39;
        piVar25 = (int *)FUN_004013d0((void *)(unaff_EBP - 0x34),2);
        iVar51 = *piVar25;
        piVar25 = (int *)FUN_004013d0((void *)(unaff_EBP - 0x28),2);
        if (iVar51 <= *piVar25) {
          do {
            puVar35 = FUN_00405fd0(*(void **)(unaff_EBP - 0x2b18),*(uint *)(unaff_EBP - 0x2b48),
                                   *(uint *)(unaff_EBP - 0x2b1c),iVar51,0);
            uVar28 = FUN_004061f0((int)puVar35);
            if ((char)uVar28 != '\0') {
              iVar51 = *(int *)(unaff_EBP - 0x2b14);
              *(uint *)(iVar51 + 0x5c) = *(uint *)(iVar51 + 0x5c) | 4;
              puVar24 = (undefined4 *)FUN_004013d0((void *)(iVar51 + 0x11a0),0);
              *puVar24 = 0xbf800000;
              puVar24 = (undefined4 *)FUN_004013d0((void *)(iVar51 + 0x11a0),1);
              *puVar24 = 0x3f800000;
              goto LAB_00543fc4;
            }
            iVar51 = iVar51 + 1;
          } while (iVar51 <= *piVar25);
        }
        iVar51 = *(int *)(unaff_EBP - 0x2b14);
      }
LAB_00543fc4:
      if ((*(byte *)(iVar51 + 0x5c) & 4) == 0) {
        pfVar33 = (float *)FUN_00401080((void *)(unaff_EBP - 0x13ac),0x3f333333,0xbf333333,0);
        fVar55 = FUN_004015a0((float *)(unaff_EBP - 0x58),pfVar33);
        *(float *)(unaff_EBP - 0x2b30) = (float)fVar55;
        if (*(float *)(unaff_EBP - 0x2b30) <= 0.1) {
          if (*(char *)(iVar51 + 0x60) == '\0') {
            piVar25 = (int *)(unaff_EBP - 0x3304);
            pvVar23 = (void *)FUN_004014b0(*(void **)(unaff_EBP - 0x2b70),
                                           (int *)(unaff_EBP - 0x36c4));
            pCVar38 = (CRefTime *)FUN_004014b0(pvVar23,piVar25);
            lVar39 = CRefTime::Millisecs(pCVar38);
            *(long *)(unaff_EBP - 0x2b48) = lVar39;
            piVar25 = (int *)(unaff_EBP - 0x3314);
            pvVar23 = *(void **)(unaff_EBP - 0x2b54);
            piVar34 = (int *)(unaff_EBP - 0x3534);
          }
          else {
            piVar25 = (int *)(unaff_EBP - 0x3324);
            piVar34 = (int *)(unaff_EBP - 0x3644);
            pvVar23 = (void *)FUN_00405660(*(void **)(unaff_EBP - 0x2b70),
                                           (int *)(unaff_EBP - 0x3334),
                                           (int)(**(float **)(unaff_EBP - 0x2b4c) * 0.5 + 0.5));
            pvVar23 = (void *)FUN_004014b0(pvVar23,piVar34);
            pCVar38 = (CRefTime *)FUN_004014b0(pvVar23,piVar25);
            lVar39 = CRefTime::Millisecs(pCVar38);
            *(long *)(unaff_EBP - 0x2b48) = lVar39;
            piVar25 = (int *)(unaff_EBP - 0x3544);
            piVar34 = (int *)(unaff_EBP - 0x3344);
            pvVar23 = (void *)FUN_00405690(*(void **)(unaff_EBP - 0x2b54),
                                           (int *)(unaff_EBP - 0x3744),
                                           (int)(**(float **)(unaff_EBP - 0x2b50) * 0.5 + 0.5));
          }
          pvVar23 = (void *)FUN_00401530(pvVar23,piVar34);
          pCVar38 = (CRefTime *)FUN_00401530(pvVar23,piVar25);
          lVar39 = CRefTime::Millisecs(pCVar38);
          *(long *)(unaff_EBP - 0x2b1c) = lVar39;
          piVar25 = (int *)FUN_004013d0((void *)(unaff_EBP - 0x34),2);
          iVar51 = *piVar25;
          piVar25 = (int *)FUN_004013d0((void *)(unaff_EBP - 0x28),2);
          if (iVar51 <= *piVar25) {
            do {
              puVar35 = FUN_00405fd0(*(void **)(unaff_EBP - 0x2b18),*(uint *)(unaff_EBP - 0x2b48),
                                     *(uint *)(unaff_EBP - 0x2b1c),iVar51,0);
              uVar28 = FUN_004061f0((int)puVar35);
              if ((char)uVar28 != '\0') {
                iVar51 = *(int *)(unaff_EBP - 0x2b14);
                *(uint *)(iVar51 + 0x5c) = *(uint *)(iVar51 + 0x5c) | 4;
                puVar24 = (undefined4 *)FUN_004013d0((void *)(iVar51 + 0x11a0),0);
                *puVar24 = 0x3f800000;
                puVar24 = (undefined4 *)FUN_004013d0((void *)(iVar51 + 0x11a0),1);
                *puVar24 = 0xbf800000;
                goto LAB_00544204;
              }
              iVar51 = iVar51 + 1;
            } while (iVar51 <= *piVar25);
          }
          iVar51 = *(int *)(unaff_EBP - 0x2b14);
        }
LAB_00544204:
        if ((*(byte *)(iVar51 + 0x5c) & 4) == 0) {
          pfVar33 = (float *)FUN_00401080((void *)(unaff_EBP - 0x13c4),0xbf333333,0xbf333333,0);
          fVar55 = FUN_004015a0((float *)(unaff_EBP - 0x58),pfVar33);
          *(float *)(unaff_EBP - 0x2b30) = (float)fVar55;
          if (*(float *)(unaff_EBP - 0x2b30) <= 0.1) {
            if (*(char *)(iVar51 + 0x60) == '\0') {
              piVar25 = (int *)(unaff_EBP - 0x3354);
              pvVar23 = (void *)FUN_00401530(*(void **)(unaff_EBP - 0x2b70),
                                             (int *)(unaff_EBP - 0x3554));
              pCVar38 = (CRefTime *)FUN_00401530(pvVar23,piVar25);
              lVar39 = CRefTime::Millisecs(pCVar38);
              *(long *)(unaff_EBP - 0x2b48) = lVar39;
              piVar25 = (int *)(unaff_EBP - 0x3364);
              pvVar23 = *(void **)(unaff_EBP - 0x2b54);
              piVar34 = (int *)(unaff_EBP - 0x3654);
            }
            else {
              piVar25 = (int *)(unaff_EBP - 0x3374);
              piVar34 = (int *)(unaff_EBP - 0x3564);
              pvVar23 = (void *)FUN_00405690(*(void **)(unaff_EBP - 0x2b70),
                                             (int *)(unaff_EBP - 0x3384),
                                             (int)(**(float **)(unaff_EBP - 0x2b4c) * 0.5 + 0.5));
              pvVar23 = (void *)FUN_00401530(pvVar23,piVar34);
              pCVar38 = (CRefTime *)FUN_00401530(pvVar23,piVar25);
              lVar39 = CRefTime::Millisecs(pCVar38);
              *(long *)(unaff_EBP - 0x2b48) = lVar39;
              piVar25 = (int *)(unaff_EBP - 0x36d4);
              piVar34 = (int *)(unaff_EBP - 0x3394);
              pvVar23 = (void *)FUN_00405690(*(void **)(unaff_EBP - 0x2b54),
                                             (int *)(unaff_EBP - 0x3574),
                                             (int)(**(float **)(unaff_EBP - 0x2b50) * 0.5 + 0.5));
            }
            pvVar23 = (void *)FUN_00401530(pvVar23,piVar34);
            pCVar38 = (CRefTime *)FUN_00401530(pvVar23,piVar25);
            lVar39 = CRefTime::Millisecs(pCVar38);
            *(long *)(unaff_EBP - 0x2b1c) = lVar39;
            piVar25 = (int *)FUN_004013d0((void *)(unaff_EBP - 0x34),2);
            iVar51 = *piVar25;
            piVar25 = (int *)FUN_004013d0((void *)(unaff_EBP - 0x28),2);
            if (iVar51 <= *piVar25) {
              do {
                puVar35 = FUN_00405fd0(*(void **)(unaff_EBP - 0x2b18),*(uint *)(unaff_EBP - 0x2b48),
                                       *(uint *)(unaff_EBP - 0x2b1c),iVar51,0);
                uVar28 = FUN_004061f0((int)puVar35);
                if ((char)uVar28 != '\0') {
                  iVar51 = *(int *)(unaff_EBP - 0x2b14);
                  *(uint *)(iVar51 + 0x5c) = *(uint *)(iVar51 + 0x5c) | 4;
                  puVar24 = (undefined4 *)FUN_004013d0((void *)(iVar51 + 0x11a0),0);
                  *puVar24 = 0xbf800000;
                  puVar24 = (undefined4 *)FUN_004013d0((void *)(iVar51 + 0x11a0),1);
                  *puVar24 = 0xbf800000;
                  goto LAB_00544444;
                }
                iVar51 = iVar51 + 1;
              } while (iVar51 <= *piVar25);
            }
            iVar51 = *(int *)(unaff_EBP - 0x2b14);
          }
        }
      }
    }
  }
LAB_00544444:
  if (((*(byte *)(iVar51 + 0x5c) & 2) == 0) || (*(char *)(iVar51 + 0x68) == 'k')) {
    pfVar33 = (float *)(unaff_EBP - 0x2d90);
    iVar31 = *(int *)(unaff_EBP - 0x2b24);
    fVar56 = 0.01;
    *(undefined4 *)(unaff_EBP - 0x2d90) = 0;
    pfVar36 = (float *)FUN_004013d0((void *)(iVar51 + 0x28),0);
    FUN_0052e710(pfVar36,pfVar33,iVar31,fVar56);
  }
  else {
    iVar31 = *(int *)(unaff_EBP - 0x2b24);
    fVar56 = 0.005;
    iVar54 = iVar31;
    puVar37 = (undefined8 *)FUN_00401080((void *)(unaff_EBP - 0x13dc),0,0,0);
    FUN_0052e7c0((float *)(iVar51 + 0x34),puVar37,iVar54,fVar56);
    if ((*(char *)(iVar51 + 0x60) != '\x06') && ((*(byte *)(iVar51 + 0x7e) & 1) == 0)) {
      pfVar33 = (float *)(unaff_EBP - 0x2cf4);
      fVar56 = 0.01;
      *(undefined4 *)(unaff_EBP - 0x2cf4) = 0xc2700000;
      pfVar36 = (float *)FUN_004013d0((void *)(iVar51 + 0x28),0);
      FUN_0052e710(pfVar36,pfVar33,iVar31,fVar56);
    }
    if ((*(char *)(unaff_EBP - 0x2be0) == '\0') &&
       (**(float **)(unaff_EBP - 0x2bb4) <= -3.0 && **(float **)(unaff_EBP - 0x2bb4) != -3.0)) {
      FUN_004c8510(unaff_EBP - 0x968);
      FUN_00402a40((void *)(unaff_EBP - 0x968),(undefined4 *)(iVar51 + 0x10));
      *(undefined4 *)(unaff_EBP - 0x934) = 0x3ecccccd;
      ppVar41 = (pair<unsigned___int64,unsigned___int64> *)
                FUN_004010b0((void *)(unaff_EBP - 0x1b7c),0x3e4ccccd,0x3f333333,0x3f800000,
                             0x3f800000);
      std::pair<unsigned___int64,unsigned___int64>::
      operator=<std::pair<unsigned___int64,unsigned___int64>,0>
                ((pair<unsigned___int64,unsigned___int64> *)(unaff_EBP - 0x944),ppVar41);
      puVar24 = FUN_00401080((void *)(unaff_EBP - 0x13f4),0,0,0x41200000);
      FUN_00401060((void *)(unaff_EBP - 0x950),puVar24);
      iVar31 = *(int *)(unaff_EBP - 0x2b28);
      *(undefined4 *)(unaff_EBP - 0x930) = 0xf;
      FUN_00428540((void *)(iVar31 + 0x10),(undefined4 *)(unaff_EBP - 0x968));
      FUN_004c8530(unaff_EBP - 0x7c);
      *(undefined4 *)(unaff_EBP - 0x70) = 0x1f;
      iVar31 = rand();
      *(float *)(unaff_EBP - 0x6c) = (float)iVar31 / 32767.0 + 0.9;
      FUN_00402550((void *)(unaff_EBP - 0x7c),(longlong *)(iVar51 + 0x10));
      iVar31 = *(int *)(unaff_EBP - 0x2b28);
      *(undefined4 *)(unaff_EBP - 0x68) = 0x3f800000;
      FUN_00428590((void *)(iVar31 + 8),(undefined4 *)(unaff_EBP - 0x7c));
    }
  }
  pvVar23 = *(void **)(unaff_EBP - 0x2b18);
  if (iVar51 == *(int *)((int)pvVar23 + 0xb8)) {
    fVar55 = FUN_004015a0((float *)(unaff_EBP - 0x58),(float *)(unaff_EBP - 0x11c));
    *(float *)(unaff_EBP - 0x2b30) = (float)fVar55;
    if ((((*(float *)(unaff_EBP - 0x2b30) <= 0.0) && ((*(ushort *)(iVar51 + 0x124) & 1) != 0)) &&
        ((*(ushort *)(iVar51 + 0x124) & 0x10) == 0)) &&
       ((*(char *)(unaff_EBP - 0x2bd8) != '\0' && ((*(byte *)(iVar51 + 0x5c) & 4) == 0)))) {
      puVar24 = (undefined4 *)FUN_0041cba0(iVar51 + 0x40);
      pfVar33 = (float *)FUN_004cde20((void *)(unaff_EBP - 0xe98),puVar24);
      fVar55 = FUN_00402180(pfVar33);
      *(float *)(unaff_EBP - 0x2b30) = (float)fVar55;
      if (0.0 < *(float *)(unaff_EBP - 0x2b30)) {
        puVar24 = (undefined4 *)
                  FUN_004e1520((float *)(unaff_EBP - 0x140c),-5.0,(float *)(unaff_EBP - 0x11c));
        FUN_00401060((void *)(iVar51 + 0x34),puVar24);
      }
    }
  }
  if (*(int *)(iVar51 + 100) == 0x65) {
    if ((*(char *)(iVar51 + 0x68) == '3') && (*(int *)(iVar51 + 0x6c) < 1000)) {
      *(undefined4 *)(unaff_EBP - 0x2d10) = 0x42700000;
      pfVar33 = (float *)(unaff_EBP - 0x2d10);
    }
    else {
      *(undefined4 *)(unaff_EBP - 0x2cb8) = 0;
      pfVar33 = (float *)(unaff_EBP - 0x2cb8);
    }
    iVar31 = *(int *)(unaff_EBP - 0x2b24);
    fVar56 = 0.01;
    pfVar36 = (float *)FUN_004013d0((void *)(iVar51 + 0x28),0);
    FUN_0052e710(pfVar36,pfVar33,iVar31,fVar56);
  }
  uVar22 = FUN_00405420(pvVar23,(uint *)(iVar51 + 0x11c0));
  if (uVar22 == 0) {
LAB_005447a6:
    pvVar23 = *(void **)(unaff_EBP - 0x2b14);
LAB_005447ac:
    uVar22 = *(uint *)((int)pvVar23 + 0x5c);
    *(uint *)(unaff_EBP - 0x2b1c) = uVar22;
    uVar52 = uVar22 & 1;
    if ((((uVar52 == 0) && ((*(byte *)((int)pvVar23 + 0x7e) & 2) == 0)) &&
        (((*(byte *)((int)pvVar23 + 0x124) & 1) == 0 || ((uVar22 & 4) == 0)))) &&
       ((uVar22 & 2) == 0)) {
LAB_00544d53:
      if (((uVar52 == 0) && ((uVar22 & 2) == 0)) &&
         (((*(byte *)((int)pvVar23 + 0x124) & 1) == 0 || ((uVar22 & 4) == 0)))) {
        pfVar33 = *(float **)(unaff_EBP - 0x2b4c);
        *(undefined4 *)((int)pvVar23 + 0x118c) = 0;
        fVar55 = FUN_004024e0(0.8 / *pfVar33);
        *(float *)(unaff_EBP - 0x2b30) = (float)fVar55;
        fVar56 = *(float *)(unaff_EBP - 0x2b30) * *(float *)(unaff_EBP - 0x2ba0);
LAB_00544db0:
        *(float *)((int)pvVar23 + 0x1188) = fVar56 + *(float *)((int)pvVar23 + 0x1188);
      }
      goto LAB_00544dc0;
    }
    fVar55 = FUN_004021b0((float *)((int)pvVar23 + 0x34));
    *(float *)(unaff_EBP - 0x2b30) = (float)fVar55;
    if ((*(float *)(unaff_EBP - 0x2b30) <= 0.5) || (*(char *)((int)pvVar23 + 0x68) == 'k')) {
      uVar22 = *(uint *)(unaff_EBP - 0x2b1c);
      goto LAB_00544d53;
    }
    if (((*(byte *)((int)pvVar23 + 0x124) & 1) != 0) && ((*(byte *)((int)pvVar23 + 0x5c) & 4) != 0))
    {
      fVar55 = FUN_004024e0(0.8 / **(float **)(unaff_EBP - 0x2b4c));
      *(float *)(unaff_EBP - 0x2b74) = (float)fVar55;
      fVar55 = FUN_00401d80((float *)((int)pvVar23 + 0x34));
      *(float *)(unaff_EBP - 0x2b30) = (float)fVar55;
      fVar56 = *(float *)(unaff_EBP - 0x2ba0) * 0.2;
      *(float *)((int)pvVar23 + 0x118c) =
           *(float *)(unaff_EBP - 0x2b74) *
           *(float *)(unaff_EBP - 0x2b30) * *(float *)(unaff_EBP - 0x2ba0) * 6.0 +
           *(float *)((int)pvVar23 + 0x118c);
      goto LAB_00544db0;
    }
    puVar24 = *(undefined4 **)(unaff_EBP - 0x2b5c);
    *(undefined4 *)(unaff_EBP - 0x2b74) = *(undefined4 *)((int)pvVar23 + 0x118c);
    pfVar33 = (float *)FUN_004cde20((void *)(unaff_EBP - 0xeb8),puVar24);
    fVar55 = FUN_00401d40(pfVar33);
    *(float *)(unaff_EBP - 0x2b20) = (float)fVar55;
    if ((*(byte *)((int)pvVar23 + 0x5c) & 1) != 0) {
      if (((*(char *)((int)pvVar23 + 0x68) == '0') ||
          ((*(char *)((int)pvVar23 + 0x68) == '6' &&
           (iVar51 = FUN_004084b0((int)pvVar23), *(int *)((int)pvVar23 + 0x6c) < iVar51)))) ||
         (((cVar4 = *(char *)((int)pvVar23 + 0x68), cVar4 == '\x06' ||
           (((((cVar4 == '\a' || (cVar4 == '\x14')) || (cVar4 == '\x13')) ||
             ((cVar4 == '\x12' || (cVar4 == '\x11')))) || (cVar4 == '\n')))) &&
          (iVar51 = FUN_00407db0(pvVar23,0xffffffff), *(int *)((int)pvVar23 + 0x6c) < iVar51)))) {
        fVar55 = FUN_004024e0(0.8 / **(float **)(unaff_EBP - 0x2b4c));
        *(float *)(unaff_EBP - 0x2b30) = (float)fVar55;
        fVar56 = *(float *)(unaff_EBP - 0x2b20);
        fVar58 = *(float *)(unaff_EBP - 0x2b30);
        fVar59 = *(float *)(unaff_EBP - 0x2ba0);
        fVar57 = *(float *)(unaff_EBP - 0x2b88) * 0.000100000005 * fVar56 * 1.5;
LAB_00544b21:
        fVar58 = fVar58 * fVar57;
      }
      else {
        fVar55 = FUN_004024e0(0.8 / **(float **)(unaff_EBP - 0x2b4c));
        fVar56 = *(float *)(unaff_EBP - 0x2b20);
        fVar59 = *(float *)(unaff_EBP - 0x2ba0);
        fVar57 = fVar56 * fVar59 * 1.5;
        if (*(char *)((int)pvVar23 + 0x68) != 'O') {
          *(float *)(unaff_EBP - 0x2b30) = (float)fVar55;
          fVar58 = *(float *)(unaff_EBP - 0x2b30);
          goto LAB_00544b21;
        }
        *(float *)(unaff_EBP - 0x2b30) = (float)fVar55;
        fVar58 = *(float *)(unaff_EBP - 0x2b30) * fVar57 * 2.0;
      }
      pvVar42 = *(void **)(unaff_EBP - 0x2b18);
      *(float *)((int)pvVar23 + 0x118c) = fVar58 + *(float *)((int)pvVar23 + 0x118c);
      *(float *)((int)pvVar23 + 0x1188) = *(float *)((int)pvVar23 + 0x1188) + fVar59;
      if (((*(int *)((int)pvVar42 + 0xb8) != 0) && (*(int *)((int)pvVar23 + 0x128) == 0)) &&
         (((*(byte *)((int)pvVar23 + 0x5c) & 2) == 0 &&
          ((5.0 < fVar56 &&
           ((int)(*(float *)(unaff_EBP - 0x2b74) / 3.1415927) <
            (int)(*(float *)((int)pvVar23 + 0x118c) / 3.1415927))))))) {
        FUN_004c8530(unaff_EBP - 0xf8);
        piVar25 = (int *)(unaff_EBP - 0x3584);
        FUN_004013d0((void *)((int)pvVar23 + 0x80),2);
        piVar34 = (int *)(unaff_EBP - 0x33c4);
        pvVar18 = (void *)FUN_004e2320((void *)((int)pvVar23 + 0x10),2);
        pvVar18 = (void *)FUN_004014b0(pvVar18,piVar34);
        puVar26 = (uint *)FUN_004014b0(pvVar18,piVar25);
        iVar51 = FUN_00406050(pvVar42,**(uint **)(unaff_EBP - 0x2b70),
                              (*(uint **)(unaff_EBP - 0x2b70))[1],**(uint **)(unaff_EBP - 0x2b54),
                              (*(uint **)(unaff_EBP - 0x2b54))[1],*puVar26,puVar26[1],0);
        bVar6 = FUN_00406280(iVar51);
        if (CONCAT31(extraout_var_04,bVar6) == 3) {
          iVar51 = rand();
          *(undefined4 *)(unaff_EBP - 0xe8) = 0x3f800000;
          *(int *)(unaff_EBP - 0xec) = iVar51 % 3 + 0x21;
        }
        else {
          *(undefined4 *)(unaff_EBP - 0xec) = 0x20;
          iVar51 = rand();
          *(float *)(unaff_EBP - 0xe8) = ((float)iVar51 * 0.2) / 32767.0 + 1.0;
        }
        FUN_00402550((void *)(unaff_EBP - 0xf8),(longlong *)((int)pvVar23 + 0x10));
        iVar51 = *(int *)(unaff_EBP - 0x2b28);
        *(undefined4 *)(unaff_EBP - 0xe4) = 0x3f800000;
        FUN_00428590((void *)(iVar51 + 8),(undefined4 *)(unaff_EBP - 0xf8));
      }
      goto LAB_00544dc0;
    }
    fVar55 = FUN_004024e0(0.8 / **(float **)(unaff_EBP - 0x2b4c));
    *(float *)(unaff_EBP - 0x2b30) = (float)fVar55;
    fVar56 = *(float *)(unaff_EBP - 0x2b88);
    *(float *)((int)pvVar23 + 0x118c) =
         *(float *)(unaff_EBP - 0x2b30) * fVar56 * 0.002 * *(float *)(unaff_EBP - 0x2b20) * 1.5 +
         *(float *)((int)pvVar23 + 0x118c);
    *(float *)((int)pvVar23 + 0x1188) =
         *(float *)((int)pvVar23 + 0x1188) + *(float *)(unaff_EBP - 0x2ba0);
  }
  else {
    if (*(float *)(uVar22 + 0x16c) <= 0.0) {
      *(uint *)(iVar51 + 0x11c0) = 0;
      *(undefined4 *)(iVar51 + 0x11c4) = 0;
      goto LAB_005447a6;
    }
    pvVar23 = *(void **)(unaff_EBP - 0x2b14);
    if (*(char *)((int)pvVar23 + 0x60) == '\x05') goto LAB_005447ac;
    FUN_00401080((void *)(unaff_EBP - 0x1424),0,0,1.5 - *(float *)(uVar22 + 0x1180));
    FUN_00402510(unaff_EBP - 0x488);
    puVar26 = FUN_00402cb0((void *)(uVar22 + 0x10),(uint *)(unaff_EBP - 0x1fec),
                           (uint *)(unaff_EBP - 0x488));
    FUN_00402a40((void *)((int)pvVar23 + 0x10),puVar26);
    puVar24 = FUN_00401080((void *)(unaff_EBP - 0x143c),0,0,0);
    FUN_00401060((void *)((int)pvVar23 + 0x34),puVar24);
    pfVar33 = (float *)FUN_00401080((void *)(unaff_EBP - 0x1454),0x41a00000,0,0);
    puVar24 = (undefined4 *)
              FUN_004014f0((void *)(uVar22 + 0x28),(float *)(unaff_EBP - 0x146c),pfVar33);
    FUN_00401060((void *)((int)pvVar23 + 0x28),puVar24);
    puVar24 = FUN_00401080((void *)(unaff_EBP - 0x1484),0,0,0);
    FUN_00401060((void *)((int)pvVar23 + 0x40),puVar24);
    *(float *)((int)pvVar23 + 0x1188) = *(float *)(uVar22 + 0x1188) * 0.5;
    *(undefined4 *)((int)pvVar23 + 0x118c) = *(undefined4 *)(uVar22 + 0x118c);
LAB_00544dc0:
    fVar56 = *(float *)(unaff_EBP - 0x2b88);
  }
  if ((*(char *)((int)pvVar23 + 0xf08) != '\x17') || (*(char *)((int)pvVar23 + 0xf09) != '\0')) {
    *(ushort *)((int)pvVar23 + 0x124) = *(ushort *)((int)pvVar23 + 0x124) & 0xffef;
  }
  if (*(char *)((int)pvVar23 + 0xdf0) != '\x18') {
    *(ushort *)((int)pvVar23 + 0x124) = *(ushort *)((int)pvVar23 + 0x124) & 0xfdff;
  }
  if (1.0 < *(float *)((int)pvVar23 + 0x1188)) {
    *(float *)((int)pvVar23 + 0x1188) = 1.0;
  }
  iVar51 = *(int *)(unaff_EBP - 0x2b24);
  *(undefined4 *)(unaff_EBP - 0x2cc0) = 0;
  FUN_0052e710((float *)((int)pvVar23 + 0x1188),(float *)(unaff_EBP - 0x2cc0),iVar51,0.005);
  pfVar33 = (float *)((int)pvVar23 + 0x1180);
  if (0.0 < *pfVar33 || *pfVar33 == 0.0) {
    *(undefined4 *)(unaff_EBP - 0x2ca0) = 0;
    fVar59 = 0.02;
    pfVar36 = (float *)(unaff_EBP - 0x2ca0);
  }
  else {
    *(undefined4 *)(unaff_EBP - 0x2cbc) = 0;
    fVar59 = 0.01;
    pfVar36 = (float *)(unaff_EBP - 0x2cbc);
  }
  FUN_0052e710(pfVar33,pfVar36,iVar51,fVar59);
  *(undefined4 *)(unaff_EBP - 0x2c18) = 0;
  FUN_0052e710((float *)((int)pvVar23 + 0x1184),(float *)(unaff_EBP - 0x2c18),iVar51,0.0075);
  if ((((*(ushort *)((int)pvVar23 + 0x124) & 1) == 0) || ((*(byte *)((int)pvVar23 + 0x5c) & 4) == 0)
      ) || ((*(ushort *)((int)pvVar23 + 0x124) & 0x10) != 0)) {
    pfVar33 = (float *)((int)pvVar23 + 0x58);
    fVar55 = FUN_00548b20(fVar56 * -0.01);
    iVar51 = *(int *)(unaff_EBP - 0x2b14);
    *(float *)(unaff_EBP - 0x2b30) = (float)fVar55;
    *pfVar33 = *(float *)(unaff_EBP - 0x2b30) * *pfVar33;
    if (((*(byte *)(iVar51 + 0x124) & 4) == 0) || (0 < *(int *)(iVar51 + 300))) {
      if (*(int *)(iVar51 + 0x128) == 0) {
        puVar24 = *(undefined4 **)(unaff_EBP - 0x2b5c);
        pfVar33 = (float *)FUN_004cde20((void *)(unaff_EBP - 0xe58),puVar24);
        fVar55 = FUN_00402180(pfVar33);
        *(float *)(unaff_EBP - 0x2b30) = (float)fVar55;
        if (0.02 < *(float *)(unaff_EBP - 0x2b30)) {
          fVar55 = FUN_004015a0((float *)(iVar51 + 0x34),(float *)(iVar51 + 0x40));
          *(float *)(unaff_EBP - 0x2b30) = (float)fVar55;
          if ((0.0 < *(float *)(unaff_EBP - 0x2b30)) && (*(char *)(unaff_EBP - 0x2b84) == '\0')) {
            FUN_004cde20((void *)(unaff_EBP - 0x124),puVar24);
            FUN_00401f50((float *)(unaff_EBP - 0x124));
            pfVar33 = (float *)FUN_004013d0((void *)(unaff_EBP - 0x124),1);
            if (1.0 < *pfVar33) {
              *pfVar33 = 1.0;
            }
            if (*pfVar33 <= -1.0 && *pfVar33 != -1.0) {
              *pfVar33 = -1.0;
            }
            pfVar36 = (float *)FUN_004013d0((void *)(unaff_EBP - 0x124),0);
            if (*pfVar36 <= 0.0) {
              fVar55 = FUN_00548b00(*pfVar33);
              *(float *)(unaff_EBP - 0x2b30) = (float)fVar55;
              fVar56 = *(float *)(unaff_EBP - 0x2b30);
            }
            else {
              fVar55 = FUN_00548b00(*pfVar33);
              *(float *)(unaff_EBP - 0x2b30) = (float)fVar55;
              fVar56 = -*(float *)(unaff_EBP - 0x2b30);
            }
            **(float **)(unaff_EBP - 0x2b3c) = (fVar56 / 3.1415927) * 180.0;
            goto LAB_005453eb;
          }
        }
      }
    }
    else {
      puVar24 = (undefined4 *)FUN_0041cba0(iVar51 + 0x138c);
      FUN_004cde20((void *)(unaff_EBP - 0x9c),puVar24);
      fVar55 = FUN_00402180((float *)(unaff_EBP - 0x9c));
      *(float *)(unaff_EBP - 0x2b30) = (float)fVar55;
      if ((0.0 < *(float *)(unaff_EBP - 0x2b30)) && (*(char *)(unaff_EBP - 0x2b84) == '\0')) {
        FUN_00401f50((float *)(unaff_EBP - 0x9c));
        pfVar36 = (float *)FUN_004013d0((void *)(unaff_EBP - 0x9c),1);
        if (1.0 < *pfVar36) {
          *pfVar36 = 1.0;
        }
        if (*pfVar36 <= -1.0 && *pfVar36 != -1.0) {
          *pfVar36 = -1.0;
        }
        pfVar53 = (float *)FUN_004013d0((void *)(unaff_EBP - 0x9c),0);
        fVar56 = 1.0;
        if (*pfVar53 <= 0.0) {
          fVar55 = FUN_00548b00(*pfVar36);
          *(float *)(unaff_EBP - 0x2b30) = (float)fVar55;
          fVar59 = *(float *)(unaff_EBP - 0x2b30);
        }
        else {
          fVar55 = FUN_00548b00(*pfVar36);
          *(float *)(unaff_EBP - 0x2b30) = (float)fVar55;
          fVar59 = -*(float *)(unaff_EBP - 0x2b30);
        }
        pfVar36 = *(float **)(unaff_EBP - 0x2b3c);
        fVar55 = FUN_005306d0(*pfVar36,(fVar59 / 3.1415927) * 180.0,fVar56);
        *(float *)(unaff_EBP - 0x2b30) = (float)fVar55;
        FUN_0052e710(pfVar36,(float *)(unaff_EBP - 0x2b30),*(int *)(unaff_EBP - 0x2b24),0.1);
        iVar51 = *(int *)(unaff_EBP - 0x2b14);
      }
      FUN_00401060((void *)(unaff_EBP - 0x2b4),(undefined4 *)(iVar51 + 0x138c));
      fVar55 = FUN_004021b0((float *)(unaff_EBP - 0x2b4));
      *(float *)(unaff_EBP - 0x2b30) = (float)fVar55;
      if (0.0 < *(float *)(unaff_EBP - 0x2b30)) {
        FUN_00401fb0((float *)(unaff_EBP - 0x2b4));
        fVar56 = 1.0;
        pfVar36 = (float *)FUN_004013d0((void *)(unaff_EBP - 0x2b4),2);
        fVar55 = FUN_00402480(*pfVar36);
        *(float *)(unaff_EBP - 0x2b30) = (float)fVar55;
        fVar55 = FUN_005306d0(*pfVar33,(*(float *)(unaff_EBP - 0x2b30) / 3.1415927) * 180.0,fVar56);
        *(float *)(unaff_EBP - 0x2b30) = (float)fVar55;
        FUN_0052e710(pfVar33,(float *)(unaff_EBP - 0x2b30),*(int *)(unaff_EBP - 0x2b24),0.005);
      }
    }
  }
  else {
    *(undefined4 *)(unaff_EBP - 0x2bcc) = 0x42340000;
    FUN_0052e710((float *)((int)pvVar23 + 0x58),(float *)(unaff_EBP - 0x2bcc),iVar51,0.005);
    FUN_0052ec30((void *)((int)pvVar23 + 0x11a0),(float *)(unaff_EBP - 800));
    FUN_00401fb0((float *)(unaff_EBP - 800));
    pfVar33 = (float *)FUN_004013d0((void *)(unaff_EBP - 800),1);
    if (1.0 < *pfVar33) {
      *pfVar33 = 1.0;
    }
    if (*pfVar33 <= -1.0 && *pfVar33 != -1.0) {
      *pfVar33 = -1.0;
    }
    pfVar36 = (float *)FUN_004013d0((void *)(unaff_EBP - 800),0);
    fVar56 = 1.0;
    if (*pfVar36 <= 0.0) {
      fVar55 = FUN_00548b00(*pfVar33);
      *(float *)(unaff_EBP - 0x2b30) = (float)fVar55;
      fVar59 = *(float *)(unaff_EBP - 0x2b30);
    }
    else {
      fVar55 = FUN_00548b00(*pfVar33);
      *(float *)(unaff_EBP - 0x2b30) = (float)fVar55;
      fVar59 = -*(float *)(unaff_EBP - 0x2b30);
    }
    pfVar33 = *(float **)(unaff_EBP - 0x2b3c);
    fVar55 = FUN_005306d0(*pfVar33,(fVar59 / 3.1415927) * 180.0,fVar56);
    *(float *)(unaff_EBP - 0x2b30) = (float)fVar55;
    FUN_0052e710(pfVar33,(float *)(unaff_EBP - 0x2b30),*(int *)(unaff_EBP - 0x2b24),0.005);
LAB_005453eb:
    iVar51 = *(int *)(unaff_EBP - 0x2b14);
  }
  pvVar23 = *(void **)(unaff_EBP - 0x2b18);
  iVar31 = *(int *)(unaff_EBP - 0x2b24);
  if (((*(int *)((int)pvVar23 + 0xb8) != 0) && (500 < *(int *)(iVar51 + 0x128))) &&
     (*(int *)(iVar51 + 0x128) - iVar31 < 0x1f5)) {
    FUN_004c8530(unaff_EBP - 0x1d4);
    FUN_00402550((void *)(unaff_EBP - 0x1d4),(longlong *)(iVar51 + 0x10));
    iVar31 = *(int *)(unaff_EBP - 0x2b28);
    *(undefined4 *)(unaff_EBP - 0x1c4) = 0x3f800000;
    *(undefined4 *)(unaff_EBP - 0x1c8) = 0x1a;
    FUN_00428590((void *)(iVar31 + 8),(undefined4 *)(unaff_EBP - 0x1d4));
    iVar31 = *(int *)(unaff_EBP - 0x2b24);
  }
  *(undefined4 *)(iVar51 + 0x1318) = *(undefined4 *)(iVar51 + 0x128);
  if (*(int *)(iVar51 + 0x128) != 0) {
    *(int *)(iVar51 + 0x128) = *(int *)(iVar51 + 0x128) - iVar31;
  }
  if (*(int *)(iVar51 + 0x128) < 0) {
    *(undefined4 *)(iVar51 + 0x128) = 0;
  }
  if (*(char *)((int)pvVar23 + 0xb4) == '\0') {
    puVar26 = (uint *)(iVar51 + 0x1d30);
    if (*(int *)(iVar51 + 0x1d30) == 0 && *(int *)(iVar51 + 0x1d34) == 0) {
      pvVar23 = *(void **)(unaff_EBP - 0x2b18);
    }
    else {
      pvVar23 = *(void **)(unaff_EBP - 0x2b18);
      piVar25 = (int *)FUN_00530550((void *)((int)pvVar23 + 0xc),(undefined4 *)(unaff_EBP - 0x3020))
      ;
      pvVar42 = (void *)FUN_00530600((void *)((int)pvVar23 + 0xc),(int *)(unaff_EBP - 0x3030),
                                     puVar26);
      bVar5 = FUN_0042c6f0(pvVar42,piVar25);
      if (bVar5) {
        iVar51 = FUN_004013f0((void *)((int)pvVar23 + 0x1c),0xa03);
        FUN_00401cd0((undefined4 *)(unaff_EBP - 0xf00));
        puVar27 = FUN_00402b10((void *)(*(int *)(unaff_EBP - 0x2b18) + 0xc),puVar26);
        FUN_00402030((void *)(unaff_EBP - 0xf00),*(float *)(*puVar27 + 0x98));
        iVar31 = FUN_00402170(iVar51);
        fVar56 = (float)iVar31 * -0.5;
        iVar31 = FUN_00402160(iVar51);
        fVar59 = (float)iVar31 * -0.5;
        iVar31 = FUN_00402150(iVar51);
        FUN_004023b0((void *)(unaff_EBP - 0xf00),(float)iVar31 * -0.5,fVar59,fVar56);
        *(undefined4 *)(unaff_EBP - 0x2b30) = 0;
        piVar25 = FUN_00431020((void *)(iVar51 + 0x28),(int *)(unaff_EBP - 0x2b30));
        bVar5 = FUN_00530540((int)piVar25);
        if (!bVar5) {
          pfVar33 = (float *)FUN_004013d0(*(void **)(unaff_EBP - 0x2bb0),2);
          FUN_00401080((void *)(unaff_EBP - 0x149c),0,0,*pfVar33 * 0.5 + 0.001);
          FUN_00402510(unaff_EBP - 0x4a0);
          *(undefined4 *)(unaff_EBP - 0x2b30) = 0;
          piVar25 = FUN_00431020((void *)(iVar51 + 0x28),(int *)(unaff_EBP - 0x2b30));
          piVar25 = (int *)FUN_00530680(piVar25);
          FUN_004c64b0((void *)(unaff_EBP - 0x29c),piVar25);
          FUN_004021f0((void *)(unaff_EBP - 0xf00),(float *)(unaff_EBP - 0x10c4),
                       (float *)(unaff_EBP - 0x29c));
          FUN_00402510(unaff_EBP - 0x458);
          puVar43 = FUN_00402b10((void *)(*(int *)(unaff_EBP - 0x2b18) + 0xc),puVar26);
          puVar27 = (uint *)(unaff_EBP - 0x4a0);
          puVar46 = (uint *)(unaff_EBP - 0x198);
          puVar43 = FUN_00402cb0((void *)(*puVar43 + 0x80),(uint *)(unaff_EBP - 0x201c),
                                 (uint *)(unaff_EBP - 0x458));
          FUN_00402cb0(puVar43,puVar46,puVar27);
          pvVar23 = *(void **)(unaff_EBP - 0x2b60);
          puVar27 = FUN_00402c50(pvVar23,(uint *)(unaff_EBP - 0x204c),(uint *)(unaff_EBP - 0x198));
          pfVar33 = FUN_00402550((void *)(unaff_EBP - 0x14b4),(longlong *)puVar27);
          fVar55 = FUN_004021b0(pfVar33);
          *(float *)(unaff_EBP - 0x2b30) = (float)fVar55;
          if (1.0 < *(float *)(unaff_EBP - 0x2b30)) {
            FUN_00402a40(pvVar23,(undefined4 *)(unaff_EBP - 0x198));
          }
        }
        pvVar23 = *(void **)(unaff_EBP - 0x2b18);
        puVar26 = FUN_00402b10((void *)((int)pvVar23 + 0xc),puVar26);
        iVar51 = *(int *)(unaff_EBP - 0x2b14);
        **(undefined4 **)(unaff_EBP - 0x2b3c) = *(undefined4 *)(*puVar26 + 0x98);
      }
      else {
        iVar51 = *(int *)(unaff_EBP - 0x2b14);
      }
    }
  }
  if (*(char *)(iVar51 + 0x60) == '\x05') {
    puVar26 = (uint *)(iVar51 + 0x198);
    uVar22 = FUN_00405420(pvVar23,puVar26);
    if ((uVar22 == 0) || (uVar22 = FUN_00405420(pvVar23,puVar26), *(char *)(uVar22 + 0x68) != 'j'))
    {
      iVar51 = *(int *)(unaff_EBP - 0x2b14);
      goto LAB_00545940;
    }
    uVar22 = FUN_00405420(pvVar23,puVar26);
    pvVar23 = *(void **)(unaff_EBP - 0x2bb0);
    *(uint *)(unaff_EBP - 0x2b20) = uVar22;
    pfVar33 = (float *)FUN_004013d0(pvVar23,2);
    pfVar36 = (float *)FUN_004013d0((void *)(uVar22 + 0x80),2);
    FUN_00401080((void *)(unaff_EBP - 0x14cc),0,0,(*pfVar33 * 0.5 - *pfVar36 * 0.5) + 0.01);
    FUN_00402510(unaff_EBP - 0x368);
    puVar26 = FUN_00402cb0((void *)(*(int *)(unaff_EBP - 0x2b20) + 0x1350),
                           (uint *)(unaff_EBP - 0x207c),(uint *)(unaff_EBP - 0x368));
    FUN_00402a40((void *)(*(int *)(unaff_EBP - 0x2b14) + 0x1350),puVar26);
    FUN_00401060((void *)(*(int *)(unaff_EBP - 0x2b14) + 0x1374),
                 (undefined4 *)(*(int *)(unaff_EBP - 0x2b20) + 0x1374));
    FUN_00401080((void *)(unaff_EBP - 0x14e4),0,0,(*pfVar33 * 0.5 - *pfVar36 * 0.5) + 0.01);
    FUN_00402510(unaff_EBP - 0x344);
    iVar31 = *(int *)(unaff_EBP - 0x2b20);
    puVar26 = FUN_00402cb0((void *)(iVar31 + 0x10),(uint *)(unaff_EBP - 0x20ac),
                           (uint *)(unaff_EBP - 0x344));
    FUN_00402a40(*(void **)(unaff_EBP - 0x2b60),puVar26);
    FUN_00401060(*(void **)(unaff_EBP - 0x2b64),(undefined4 *)(iVar31 + 0x28));
    iVar51 = *(int *)(unaff_EBP - 0x2b14);
    *(undefined4 *)(iVar51 + 0x1180) = *(undefined4 *)(iVar31 + 0x1180);
    *(undefined4 *)(iVar51 + 0x1188) = *(undefined4 *)(iVar31 + 0x1188);
    *(undefined4 *)(iVar51 + 0x118c) = *(undefined4 *)(iVar31 + 0x118c);
    puVar24 = FUN_00401080((void *)(unaff_EBP - 0x14fc),0,0,0);
    FUN_00401060((void *)(iVar51 + 0x34),puVar24);
    puVar24 = FUN_00401080((void *)(unaff_EBP - 0x1514),0,0,0);
    pvVar23 = (void *)(iVar51 + 0x40);
LAB_00545b0e:
    FUN_00401060(pvVar23,puVar24);
  }
  else {
LAB_00545940:
    if (*(int *)(iVar51 + 0x1398) < 1) {
      FUN_00402a40((void *)(iVar51 + 0x1350),(undefined4 *)(iVar51 + 0x10));
      puVar24 = (undefined4 *)(iVar51 + 0x28);
      pvVar23 = (void *)(iVar51 + 0x1374);
      goto LAB_00545b0e;
    }
    uVar22 = *(uint *)(unaff_EBP - 0x2b24);
    iVar31 = 0x3c75c28f;
    *(undefined4 *)(unaff_EBP - 0x2b58) = 0;
    *(undefined4 *)(unaff_EBP - 0x2b8c) = 0x3f800000;
    FUN_0052e710((float *)(unaff_EBP - 0x2b58),(float *)(unaff_EBP - 0x2b8c),uVar22,0.015);
    puVar27 = (uint *)(iVar51 + 0x1350);
    FUN_00402a10((ulonglong *)&stack0xfffffff8);
    puVar24 = (undefined4 *)(unaff_EBP - 0x20dc);
    puVar26 = FUN_00402c50(*(void **)(unaff_EBP - 0x2b60),(uint *)(unaff_EBP - 0x210c),puVar27);
    puVar26 = FUN_00402bd0(puVar26,puVar24,uVar22,iVar31);
    FUN_00402e30(puVar27,puVar26);
    puVar27 = (uint *)FUN_004e2320(puVar27,2);
    puVar30 = (ulonglong *)(unaff_EBP - 0x364c);
    piVar25 = (int *)(unaff_EBP - 0x365c);
    puVar26 = puVar27;
    pvVar23 = (void *)FUN_004e2320(*(void **)(unaff_EBP - 0x2b60),2);
    FUN_00401490(pvVar23,piVar25,puVar26);
    puVar30 = FUN_0052ebb0(puVar30);
    FUN_00402e60(puVar27,(uint *)puVar30);
    pvVar23 = (void *)(*(int *)(unaff_EBP - 0x2b14) + 0x1374);
    pfVar33 = (float *)FUN_004013d0(pvVar23,0);
    fVar56 = *(float *)(unaff_EBP - 0x2b58);
    pfVar36 = (float *)FUN_004013d0(*(void **)(unaff_EBP - 0x2b64),0);
    fVar55 = FUN_005306d0(*pfVar33,*pfVar36,fVar56);
    *pfVar33 = (float)fVar55;
    pfVar33 = (float *)FUN_004013d0(pvVar23,1);
    fVar55 = FUN_005306d0(*pfVar33,**(float **)(unaff_EBP - 0x2b40),*(float *)(unaff_EBP - 0x2b58));
    *pfVar33 = (float)fVar55;
    pfVar33 = (float *)FUN_004013d0(pvVar23,2);
    fVar55 = FUN_005306d0(*pfVar33,**(float **)(unaff_EBP - 0x2b3c),*(float *)(unaff_EBP - 0x2b58));
    *pfVar33 = (float)fVar55;
    iVar51 = *(int *)(unaff_EBP - 0x2b14);
    *(undefined4 *)(iVar51 + 0x1180) = 0;
  }
  iVar31 = *(int *)(unaff_EBP - 0x2b24);
  *(undefined4 *)(unaff_EBP - 0x2b38) = 0;
  *(undefined4 *)(unaff_EBP - 0x2b44) = 0x3f800000;
  FUN_0052e710((float *)(unaff_EBP - 0x2b38),(float *)(unaff_EBP - 0x2b44),iVar31,0.025);
  fVar56 = *(float *)(unaff_EBP - 0x2b38);
  pfVar33 = (float *)(unaff_EBP - 0x152c);
  pfVar53 = (float *)(iVar51 + 0x138c);
  pfVar36 = (float *)(unaff_EBP - 0x1544);
  puVar24 = (undefined4 *)(*(int *)(unaff_EBP - 0x2b14) + 0x160);
  puVar26 = (uint *)0x545b81;
  pvVar23 = (void *)FUN_00401450(puVar24,pfVar36,pfVar53);
  pfVar33 = (float *)FUN_004079f0(pvVar23,pfVar33,fVar56);
  FUN_00401650(pfVar53,pfVar33);
  iVar51 = *(int *)(unaff_EBP - 0x2b14);
  if (((*(char *)(iVar51 + 0x68) == '\0') || (*(int *)(iVar51 + 0x6c) == 0)) ||
     (iVar51 = FUN_004084b0(iVar51), iVar51 < *(int *)(*(int *)(unaff_EBP - 0x2b14) + 0x6c))) {
    FUN_00401060(pfVar53,puVar24);
  }
  FUN_00423710((int *)(unaff_EBP - 0x2ccc));
  FUN_00423710((int *)(unaff_EBP - 0x2cdc));
  *(undefined1 *)(unaff_EBP - 4) = 5;
  FUN_00423710((int *)(unaff_EBP - 0x2bf8));
LAB_00545be1:
  FUN_00407a30((void *)(unaff_EBP - 0x2b68),(int *)(unaff_EBP - 0x2bc0));
  piVar25 = (int *)FUN_00530550(*(void **)(unaff_EBP - 0x2b6c),(undefined4 *)(unaff_EBP - 0x2d34));
  bVar5 = FUN_0042c6f0((void *)(unaff_EBP - 0x2b68),piVar25);
  pvVar23 = *(void **)(unaff_EBP - 0x2b18);
  if (bVar5) {
    iVar51 = FUN_00402bc0((int *)(unaff_EBP - 0x2b68));
    iVar51 = *(int *)(iVar51 + 8);
    *(int *)(unaff_EBP - 0x2b14) = iVar51;
    if (iVar51 == 0) goto LAB_00545be1;
    piVar25 = (int *)(iVar51 + 0x130c);
    FUN_00428070(piVar25,(undefined4 *)(unaff_EBP - 0x2c58));
    piVar34 = (int *)FUN_00530550(piVar25,(undefined4 *)(unaff_EBP - 0x2de8));
    bVar5 = FUN_0042c6f0((void *)(unaff_EBP - 0x2c58),piVar34);
    if (bVar5) {
      do {
        puVar27 = (uint *)FUN_0052eb90((int *)(unaff_EBP - 0x2c58));
        *(uint **)(unaff_EBP - 0x2b1c) = puVar27;
        switch((char)puVar27[0x4a]) {
        case '\x01':
          if (*(char *)((int)pvVar23 + 0xb4) == '\0') {
            if (((char)*puVar27 == '\x01') && (*(char *)((int)puVar27 + 1) == '\a')) {
              pvVar23 = *(void **)(unaff_EBP - 0x2b6c);
              *(undefined8 *)(unaff_EBP - 0x2c28) = 0;
              FUN_00428070(pvVar23,(undefined4 *)(unaff_EBP - 0x2c64));
              piVar25 = (int *)FUN_00530550(*(void **)(unaff_EBP - 0x2b6c),
                                            (undefined4 *)(unaff_EBP - 0x2d78));
              bVar5 = FUN_0042c6f0((void *)(unaff_EBP - 0x2c64),piVar25);
              uVar22 = *(uint *)(unaff_EBP - 0x2c24);
              uVar52 = *(uint *)(unaff_EBP - 0x2c28);
              if (bVar5) {
                do {
                  puVar27 = (uint *)FUN_00402bc0((int *)(unaff_EBP - 0x2c64));
                  if (puVar27[2] != 0) {
                    uVar48 = *puVar27;
                    uVar63 = puVar27[1];
                    if (((int)uVar63 <= (int)uVar22) &&
                       (((int)uVar63 < (int)uVar22 || (uVar48 < uVar52)))) {
                      *(uint *)(unaff_EBP - 0x2c28) = uVar48;
                      *(uint *)(unaff_EBP - 0x2c24) = uVar63;
                      uVar52 = uVar48;
                      uVar22 = uVar63;
                    }
                  }
                  FUN_00407a30((void *)(unaff_EBP - 0x2c64),(int *)(unaff_EBP - 0x3078));
                  piVar25 = (int *)FUN_00530550(*(void **)(unaff_EBP - 0x2b6c),
                                                (undefined4 *)(unaff_EBP - 0x2d78));
                  bVar5 = FUN_0042c6f0((void *)(unaff_EBP - 0x2c64),piVar25);
                } while (bVar5);
              }
              *(uint *)(unaff_EBP - 0x2c28) = uVar52 - 1;
              *(uint *)(unaff_EBP - 0x2c24) = (uVar22 - 1) + (uint)(uVar52 != 0);
              pCVar8 = operator_new(0x1e60);
              *(Creature **)(unaff_EBP - 0x2b30) = pCVar8;
              *(undefined1 *)(unaff_EBP - 4) = 0x10;
              if (pCVar8 == (Creature *)0x0) {
                pCVar8 = (Creature *)0x0;
              }
              else {
                pCVar8 = cube::Creature::Creature(pCVar8,(undefined4 *)(unaff_EBP - 0x2c28));
              }
              pvVar23 = *(void **)(unaff_EBP - 0x2b6c);
              *(undefined1 *)(unaff_EBP - 4) = 5;
              puVar27 = FUN_00402b10(pvVar23,(uint *)(unaff_EBP - 0x2c28));
              *puVar27 = (uint)pCVar8;
              FUN_00402a40(&(pCVar8->Creature_data).offset_0xc,
                           (undefined4 *)(*(int *)(unaff_EBP - 0x2b14) + 0x10));
              pCVar8[0x14].vftablePtr =
                   (Creature_vftable *)(int)*(short *)(*(int *)(unaff_EBP - 0x2b1c) + 0x10);
              pCVar8[5].vftablePtr = (Creature_vftable *)0x90;
              *(undefined1 *)&pCVar8[4].Creature_data.offset_0xc = 6;
              pfVar36 = (float *)0x536fca;
              FUN_0040a840((uint *)(pCVar8 + 5),(int)(pCVar8 + 6),(undefined4 *)0x0);
            }
            else {
              fVar55 = FUN_00413be0((char *)puVar27);
              *(float *)(unaff_EBP - 0x2b40) = (float)fVar55;
              *(float *)(*(int *)(unaff_EBP - 0x2b14) + 0x16c) =
                   *(float *)(unaff_EBP - 0x2b40) + *(float *)(*(int *)(unaff_EBP - 0x2b14) + 0x16c)
              ;
              FUN_004c8530(unaff_EBP - 0x878);
              plVar32 = (longlong *)(*(int *)(unaff_EBP - 0x2b14) + 0x10);
              FUN_00402550((void *)(unaff_EBP - 0x878),plVar32);
              pvVar23 = *(void **)(unaff_EBP - 0x2b28);
              *(undefined4 *)(unaff_EBP - 0x868) = 0x3f800000;
              *(undefined4 *)(unaff_EBP - 0x86c) = 0x2c;
              FUN_00428590((void *)((int)pvVar23 + 8),(undefined4 *)(unaff_EBP - 0x878));
              FUN_00422a90(unaff_EBP - 0xf48);
              FUN_00402a40((void *)(unaff_EBP - 0xf28),(undefined4 *)plVar32);
              *(undefined4 *)(unaff_EBP - 0xf40) = *(undefined4 *)(*(int *)(unaff_EBP - 0x2b14) + 8)
              ;
              iVar51 = *(int *)(unaff_EBP - 0x2b14);
              *(undefined8 *)(unaff_EBP - 0xf48) = 0;
              uVar22 = *(uint *)(unaff_EBP - 0x2b40);
              *(undefined4 *)(unaff_EBP - 0xf3c) = *(undefined4 *)(iVar51 + 0xc);
              *(uint *)(unaff_EBP - 0xf38) = uVar22 ^ 0x80000000;
              *(undefined1 *)(unaff_EBP - 0xf34) = 0;
              FUN_00428400(pvVar23,(undefined4 *)(unaff_EBP - 0xf48));
            }
            goto LAB_005377fe;
          }
          break;
        case '\x02':
          if (*(char *)((int)pvVar23 + 0xb4) == '\0') {
            FUN_00428070((void *)((int)pvVar23 + 4),(undefined4 *)(unaff_EBP - 0x2c54));
            piVar25 = (int *)FUN_00530550((void *)((int)pvVar23 + 4),
                                          (undefined4 *)(unaff_EBP - 0x2d70));
            bVar5 = FUN_0042c6f0((void *)(unaff_EBP - 0x2c54),piVar25);
            if (bVar5) {
              do {
                iVar51 = FUN_00402bc0((int *)(unaff_EBP - 0x2c54));
                iVar51 = *(int *)(iVar51 + 8);
                if ((iVar51 != 0) &&
                   (iVar31 = FUN_004137c0((void *)(iVar51 + 0x1b0),(int)(puVar27 + 0x46)),
                   (char)iVar31 != '\0')) {
                  if ((*(char *)(iVar51 + 0x140) == -0x7c) &&
                     ((iVar31 = *(int *)(*(int *)(unaff_EBP - 0x2b18) + 0x80015c), 64799999 < iVar31
                      || (iVar31 < 0x1499701)))) {
                    pvVar23 = *(void **)(unaff_EBP - 0x2b18);
                    *(int *)((int)pvVar23 + 0x800160) = *(int *)((int)pvVar23 + 0x800160) + 1;
                    *(undefined4 *)((int)pvVar23 + 0x80015c) = 25200000;
                    FUN_004c8530(unaff_EBP - 0x770);
                    iVar51 = *(int *)(unaff_EBP - 0x2b14);
                    *(undefined4 *)(unaff_EBP - 0x764) = 0x1d;
                    FUN_00402550((void *)(unaff_EBP - 0x770),(longlong *)(iVar51 + 0x10));
                    iVar51 = *(int *)(unaff_EBP - 0x2b28);
                    *(undefined4 *)(unaff_EBP - 0x75c) = 0x3f400000;
                    FUN_00428590((void *)(iVar51 + 8),(undefined4 *)(unaff_EBP - 0x770));
                    FUN_004d7ae0();
                    FUN_00524500((int)pvVar23);
                    goto LAB_00537804;
                  }
                  if ((*(byte *)(iVar51 + 0x7e) & 0x80) != 0) break;
                }
                FUN_00407a30((void *)(unaff_EBP - 0x2c54),(int *)(unaff_EBP - 0x3050));
                piVar25 = (int *)FUN_00530550(*(void **)(unaff_EBP - 0x2b6c),
                                              (undefined4 *)(unaff_EBP - 0x2d70));
                bVar5 = FUN_0042c6f0((void *)(unaff_EBP - 0x2c54),piVar25);
              } while (bVar5);
              goto LAB_005377fe;
            }
          }
          break;
        case '\x03':
          iVar51 = *(int *)(unaff_EBP - 0x2b14);
          if (*(char *)(iVar51 + 0x68) == 'O') {
            *(undefined1 *)(iVar51 + 0x68) = 0;
            *(undefined4 *)(iVar51 + 0x1190) = 0;
          }
          puVar27 = puVar27 + 0x46;
          *(uint **)(unaff_EBP - 0x2b20) = puVar27;
          puVar46 = (uint *)FUN_004013d0(puVar27,1);
          uVar22 = *puVar46;
          puVar46 = (uint *)FUN_004013d0(puVar27,0);
          iVar51 = FUN_00406290(*(void **)(unaff_EBP - 0x2b18),*puVar46,uVar22);
          if (iVar51 == 0) {
LAB_005377fe:
            pvVar23 = *(void **)(unaff_EBP - 0x2b18);
            break;
          }
          piVar25 = (int *)FUN_004013d0(puVar27,2);
          iVar31 = *piVar25;
          if (iVar31 < 0) goto LAB_005377fe;
          piVar25 = (int *)(iVar51 + 0xc);
          *(int **)(unaff_EBP - 0x2b64) = piVar25;
          iVar51 = FUN_0041cb40(piVar25);
          if (iVar51 <= iVar31) goto LAB_005377fe;
          piVar25 = (int *)FUN_0041ba70(piVar25,iVar31);
          *(int **)(unaff_EBP - 0x2b5c) = piVar25;
          iVar51 = *piVar25;
          if (iVar51 == 0x2d) {
            pvVar23 = *(void **)(unaff_EBP - 0x2b18);
            if (*(int *)(unaff_EBP - 0x2b14) == *(int *)((int)pvVar23 + 0xb8)) {
              puVar27 = (uint *)(*(int *)(unaff_EBP - 0x2b14) + 0x10);
              FUN_004d9410(*(void **)(unaff_EBP - 0x2b18),(int *)(unaff_EBP - 0x4c0),puVar27);
              puVar46 = (uint *)FUN_004013d0((void *)(unaff_EBP - 0x4c0),1);
              uVar22 = *puVar46;
              puVar46 = (uint *)FUN_004013d0((void *)(unaff_EBP - 0x4c0),0);
              iVar51 = FUN_00406290(*(void **)(unaff_EBP - 0x2b18),*puVar46,uVar22);
              *(int *)(unaff_EBP - 0x2b1c) = iVar51;
              if (((iVar51 != 0) && (iVar31 = piVar25[0x5e], -1 < iVar31)) &&
                 (iVar51 = FUN_0041cb40((int *)(iVar51 + 0xc)), iVar31 < iVar51)) {
                FUN_004c8530(unaff_EBP - 0x638);
                *(undefined4 *)(unaff_EBP - 0x62c) = 0x2f;
                *(undefined4 *)(unaff_EBP - 0x628) = 0x3f800000;
                FUN_00402550((void *)(unaff_EBP - 0x638),(longlong *)puVar27);
                puVar24 = (undefined4 *)(unaff_EBP - 0x638);
                uVar62 = 0x536868;
                FUN_00428590((void *)(*(int *)(unaff_EBP - 0x2b28) + 8),puVar24);
                uVar67 = 0;
                uVar64 = 0x536874;
                FUN_004cde40(&stack0xfffffff8,0);
                puVar26 = (uint *)0x0;
                uVar28 = 0x536880;
                FUN_004cde40(&stack0xfffffff0,0);
                FUN_004cde40(&stack0xffffffe8,2);
                puVar43 = FUN_00406380((void *)(unaff_EBP - 0x1f14),uVar28,puVar26,uVar64,uVar67,
                                       uVar62,puVar24);
                puVar46 = (uint *)(unaff_EBP - 0x2304);
                pfVar36 = (float *)0x5368b9;
                iVar51 = FUN_0041ba70((void *)(*(int *)(unaff_EBP - 0x2b1c) + 0xc),
                                      *(int *)(*(int *)(unaff_EBP - 0x2b5c) + 0x178));
                puVar46 = FUN_00402cb0((void *)(iVar51 + 8),puVar46,puVar43);
                FUN_00402a40(puVar27,puVar46);
              }
              goto LAB_005377fe;
            }
            break;
          }
          if ((((((iVar51 != 0x10) && (iVar51 != 0x12)) && (iVar51 != 0x13)) &&
               ((iVar51 != 0x45 && (iVar51 != 0x44)))) || (piVar25[0x10] != 0 || piVar25[0x11] != 0)
              ) || (((cVar4 = *(char *)(*(int *)(unaff_EBP - 0x2b14) + 0x68), cVar4 != '\0' &&
                     (cVar4 != 'S')) && (cVar4 != 'T')))) {
            pvVar23 = *(void **)(unaff_EBP - 0x2b18);
            if (*(char *)((int)pvVar23 + 0xb4) == '\0') {
              if ((iVar51 == 10) && ((char)piVar25[0xc] == '\x02')) {
                piVar25 = (int *)(*(int *)(unaff_EBP - 0x2b5c) + 0x48);
                iVar51 = 0;
                *(undefined4 *)(unaff_EBP - 0x2b40) = 0;
                iVar31 = FUN_00420020(piVar25);
                if (0 < iVar31) {
                  do {
                    puVar24 = (undefined4 *)(unaff_EBP - 0x2c5c);
                    pvVar23 = (void *)FUN_0041e2e0(piVar25,iVar51);
                    FUN_00530550(pvVar23,puVar24);
                    puVar24 = (undefined4 *)(unaff_EBP - 0x2e38);
                    pvVar23 = (void *)FUN_0041e2e0(piVar25,iVar51);
                    piVar34 = (int *)FUN_004d3de0(pvVar23,puVar24);
                    bVar5 = FUN_0042c6f0((void *)(unaff_EBP - 0x2c5c),piVar34);
                    if (bVar5) {
                      do {
                        piVar25 = (int *)FUN_004ce1f0((undefined4 *)(unaff_EBP - 0x2c5c));
                        if (*piVar25 != 0) {
                          iVar51 = *(int *)(unaff_EBP - 0x2b5c);
                          do {
                            uVar28 = 0;
                            iVar31 = rand();
                            fVar56 = 2.0 - ((float)iVar31 * 4.0) / 32767.0;
                            iVar31 = rand();
                            FUN_00401080((void *)(unaff_EBP - 0x1250),
                                         2.0 - ((float)iVar31 * 4.0) / 32767.0,fVar56,uVar28);
                            FUN_00402510(unaff_EBP - 0x1808);
                            pvVar23 = (void *)(unaff_EBP - 0x2be8);
                            fVar59 = 1.0;
                            iVar31 = rand();
                            fVar56 = ((float)iVar31 * 360.0) / 32767.0;
                            pfVar36 = (float *)FUN_00402cb0((void *)(iVar51 + 8),
                                                            (uint *)(unaff_EBP - 0x1f74),
                                                            (uint *)(unaff_EBP - 0x1808));
                            puVar26 = (uint *)(piVar25 + 1);
                            FUN_004d2810((undefined1 *)puVar26,(uint *)pfVar36,fVar56,fVar59,pvVar23
                                        );
                            FUN_00405550(piVar25);
                          } while (*piVar25 != 0);
                          iVar51 = *(int *)(unaff_EBP - 0x2b40);
                        }
                        FUN_00402c10((void *)(unaff_EBP - 0x2c5c),(int *)(unaff_EBP - 0x2b30));
                        puVar24 = (undefined4 *)(unaff_EBP - 0x2e38);
                        piVar25 = (int *)(*(int *)(unaff_EBP - 0x2b5c) + 0x48);
                        pvVar23 = (void *)FUN_0041e2e0(piVar25,iVar51);
                        piVar34 = (int *)FUN_004d3de0(pvVar23,puVar24);
                        bVar5 = FUN_0042c6f0((void *)(unaff_EBP - 0x2c5c),piVar34);
                      } while (bVar5);
                    }
                    iVar51 = iVar51 + 1;
                    *(int *)(unaff_EBP - 0x2b40) = iVar51;
                    iVar31 = FUN_00420020(piVar25);
                  } while (iVar51 < iVar31);
                }
                pvVar23 = *(void **)(unaff_EBP - 0x2b18);
                piVar25 = *(int **)(unaff_EBP - 0x2b5c);
              }
              iVar51 = *piVar25;
              if ((((iVar51 == 9) || (iVar51 == 1)) || (iVar51 == 2)) ||
                 ((iVar51 == 3 || (iVar51 == 10)))) {
                pfVar36 = (float *)0x536dc8;
                FUN_004d8c90(piVar25,*(int *)(unaff_EBP - 0x2b28),(char)piVar25[0xc] == '\0');
                puVar24 = FUN_00422d70((void *)(unaff_EBP - 0x295c),
                                       *(undefined4 **)(unaff_EBP - 0x2b20),piVar25);
                FUN_004284f0((void *)(*(int *)(unaff_EBP - 0x2b28) + 0x30),puVar24);
              }
              if (*piVar25 == 9) {
                iVar51 = piVar25[0x5e];
                if ((iVar51 < 0) ||
                   (iVar31 = FUN_0041cb40(*(int **)(unaff_EBP - 0x2b64)), iVar31 <= iVar51))
                goto LAB_005377fe;
                uVar60 = (ulonglong)
                         CONCAT14((char)piVar25[0xc] != '\0',*(undefined4 *)(unaff_EBP - 0x2b28));
                piVar34 = (int *)FUN_0041ba70(*(void **)(unaff_EBP - 0x2b64),iVar51);
                pvVar23 = *(void **)(unaff_EBP - 0x2b18);
                pfVar36 = (float *)0x536e3e;
                FUN_004d8c90(piVar34,(int)uVar60,(char)(uVar60 >> 0x20));
                puVar24 = FUN_00422d70((void *)(unaff_EBP - 0x2854),
                                       *(undefined4 **)(unaff_EBP - 0x2b20),piVar25);
                FUN_004284f0((void *)(*(int *)(unaff_EBP - 0x2b28) + 0x30),puVar24);
              }
            }
            break;
          }
          pvVar23 = *(void **)(unaff_EBP - 0x2b18);
          if (*(char *)((int)pvVar23 + 0xb4) == '\0') {
            piVar25[0x10] = *(int *)(*(int *)(unaff_EBP - 0x2b14) + 8);
            piVar25[0x11] = *(int *)(*(int *)(unaff_EBP - 0x2b14) + 0xc);
            switch(iVar51) {
            case 0x10:
            case 0x12:
              pfVar33 = (float *)FUN_004013d0((void *)(*(int *)(unaff_EBP - 0x2b14) + 0x80),2);
              *(float *)(unaff_EBP - 0x2b1c) = *pfVar33 * 0.5;
              pfVar33 = (float *)FUN_004013d0(piVar25 + 9,2);
              FUN_00401080((void *)(unaff_EBP - 0x19a0),0,0,
                           *(float *)(unaff_EBP - 0x2b1c) + *pfVar33);
              FUN_00402510(unaff_EBP - 0x17c0);
              puVar27 = FUN_00402cb0(piVar25 + 2,(uint *)(unaff_EBP - 0x1f44),
                                     (uint *)(unaff_EBP - 0x17c0));
              FUN_00402a40((void *)(*(int *)(unaff_EBP - 0x2b14) + 0x10),puVar27);
              puVar24 = FUN_00401080((void *)(unaff_EBP - 0x1220),0,0,0);
              FUN_00401060((void *)(*(int *)(unaff_EBP - 0x2b14) + 0x34),puVar24);
              iVar51 = piVar25[8];
              pfVar33 = (float *)FUN_004013d0((void *)(*(int *)(unaff_EBP - 0x2b14) + 0x28),2);
              *pfVar33 = (float)((iVar51 + 2) * 0x5a);
              *(undefined1 *)(*(int *)(unaff_EBP - 0x2b14) + 0x68) = 0x53;
              break;
            default:
              goto switchD_0053694e_caseD_11;
            case 0x13:
            case 0x44:
            case 0x45:
              pfVar33 = (float *)FUN_004013d0((void *)(*(int *)(unaff_EBP - 0x2b14) + 0x80),2);
              *(float *)(unaff_EBP - 0x2b1c) = *pfVar33 * 0.5;
              pfVar33 = (float *)FUN_004013d0(piVar25 + 9,2);
              FUN_00401080((void *)(unaff_EBP - 0x1610),0,0,
                           *(float *)(unaff_EBP - 0x2b1c) + *pfVar33);
              FUN_00402510(unaff_EBP - 0x17e4);
              puVar27 = FUN_00402cb0(piVar25 + 2,(uint *)(unaff_EBP - 0x2664),
                                     (uint *)(unaff_EBP - 0x17e4));
              FUN_00402a40((void *)(*(int *)(unaff_EBP - 0x2b14) + 0x10),puVar27);
              puVar24 = FUN_00401080((void *)(unaff_EBP - 0x1238),0,0,0);
              FUN_00401060((void *)(*(int *)(unaff_EBP - 0x2b14) + 0x34),puVar24);
              iVar51 = piVar25[8];
              pfVar33 = (float *)FUN_004013d0((void *)(*(int *)(unaff_EBP - 0x2b14) + 0x28),2);
              *pfVar33 = (float)(iVar51 * 0x5a);
              *(undefined1 *)(*(int *)(unaff_EBP - 0x2b14) + 0x68) = 0x54;
            }
            pvVar23 = *(void **)(unaff_EBP - 0x2b18);
switchD_0053694e_caseD_11:
            puVar24 = FUN_00422d70((void *)(unaff_EBP - 0x28ac),*(undefined4 **)(unaff_EBP - 0x2b20)
                                   ,piVar25);
            FUN_004284f0((void *)(*(int *)(unaff_EBP - 0x2b28) + 0x30),puVar24);
          }
          pfVar36 = (float *)0x536b89;
          puVar24 = FUN_00401080((void *)(unaff_EBP - 0x1838),0,0,0);
          FUN_00401060((void *)(*(int *)(unaff_EBP - 0x2b14) + 0x40),puVar24);
          break;
        case '\x05':
          if (*(char *)((int)pvVar23 + 0xb4) == '\0') {
            puVar27 = puVar27 + 0x46;
            puVar46 = (uint *)FUN_004013d0(puVar27,1);
            uVar22 = *puVar46;
            puVar46 = (uint *)FUN_004013d0(puVar27,0);
            iVar51 = FUN_00406290(*(void **)(unaff_EBP - 0x2b18),*puVar46,uVar22);
            *(int *)(unaff_EBP - 0x2b48) = iVar51;
            if (iVar51 != 0) {
              piVar25 = (int *)FUN_004013d0(puVar27,2);
              iVar31 = *piVar25;
              *(int **)(unaff_EBP - 0x2b90) = piVar25;
              if (-1 < iVar31) {
                piVar25 = (int *)(iVar51 + 0x30);
                iVar51 = FUN_00420000(piVar25);
                if (iVar31 < iVar51) {
                  pcVar12 = (char *)FUN_004ce1d0(piVar25,iVar31);
                  bVar5 = FUN_00409660(*(void **)(unaff_EBP - 0x2b14),pcVar12);
                  if (bVar5) {
                    puVar27 = FUN_00402c50(pcVar12 + 0x118,(uint *)(unaff_EBP - 0x24e4),
                                           (uint *)(*(int *)(unaff_EBP - 0x2b14) + 0x10));
                    pfVar33 = FUN_00402550((void *)(unaff_EBP - 0x1208),(longlong *)puVar27);
                    fVar55 = FUN_004021b0(pfVar33);
                    *(float *)(unaff_EBP - 0x2b1c) = (float)fVar55;
                    if (*(float *)(unaff_EBP - 0x2b1c) <= 16.0) {
                      FUN_004d4f60((void *)(unaff_EBP - 0x2be8),(undefined4 *)(unaff_EBP - 0x338c),
                                   (uint *)(unaff_EBP - 0x2b48));
                      FUN_004c83d0(unaff_EBP - 0x27fc);
                      iVar51 = *(int *)(unaff_EBP - 0x2b14);
                      *(undefined4 *)(unaff_EBP - 0x27fc) = *(undefined4 *)(iVar51 + 8);
                      *(undefined4 *)(unaff_EBP - 0x27f8) = *(undefined4 *)(iVar51 + 0xc);
                      FUN_00402a70((void *)(unaff_EBP - 0x27f4),pcVar12);
                      FUN_004d65d0((void *)(*(int *)(unaff_EBP - 0x2b28) + 0x40),
                                   (undefined4 *)(unaff_EBP - 0x27fc));
                      if ((*(int *)(unaff_EBP - 0x2b14) ==
                           *(int *)(*(int *)(unaff_EBP - 0x2b18) + 0xb8)) && (*pcVar12 != '\x19')) {
                        FUN_00427000((void *)(*(int *)(unaff_EBP - 0x2b14) + 0x11dc),pcVar12,-1);
                      }
                      FUN_004c8530(unaff_EBP - 0x6b0);
                      *(undefined4 *)(unaff_EBP - 0x6a4) = 0x2d;
                      iVar31 = rand();
                      iVar51 = *(int *)(unaff_EBP - 0x2b14);
                      *(float *)(unaff_EBP - 0x6a0) = ((float)iVar31 * 0.1) / 32767.0 + 1.0;
                      FUN_00402550((void *)(unaff_EBP - 0x6b0),(longlong *)(iVar51 + 0x10));
                      FUN_00428590((void *)(*(int *)(unaff_EBP - 0x2b28) + 8),
                                   (undefined4 *)(unaff_EBP - 0x6b0));
                      iVar51 = **(int **)(unaff_EBP - 0x2b90);
                      piVar34 = (int *)(unaff_EBP - 0x3058);
                      pfVar36 = (float *)0x5366ee;
                      pvVar23 = (void *)FUN_00530550(piVar25,(undefined4 *)(unaff_EBP - 0x2fa4));
                      puVar24 = (undefined4 *)FUN_004ce250(pvVar23,piVar34,iVar51);
                      FUN_004d4430(piVar25,(undefined4 *)(unaff_EBP - 0x2fc4),(void *)*puVar24);
                    }
                  }
                }
              }
            }
            goto LAB_005377fe;
          }
          break;
        case '\x06':
          if (*(char *)((int)pvVar23 + 0xb4) == '\0') {
            pfVar33 = (float *)(*(int *)(unaff_EBP - 0x2b14) + 0x10);
            pfVar36 = pfVar33;
            puVar26 = puVar27;
            FUN_004d2810((undefined1 *)puVar27,(uint *)pfVar33,0.0,1.0,(void *)(unaff_EBP - 0x2be8))
            ;
            FUN_004c8530(unaff_EBP - 0x9e0);
            *(undefined4 *)(unaff_EBP - 0x9d4) = 0x39;
            FUN_00402550((void *)(unaff_EBP - 0x9e0),(longlong *)pfVar33);
            FUN_00428590((void *)(*(int *)(unaff_EBP - 0x2b28) + 8),
                         (undefined4 *)(unaff_EBP - 0x9e0));
            goto LAB_005377fe;
          }
          break;
        case '\a':
          pvVar23 = *(void **)(unaff_EBP - 0x2b18);
          if (*(char *)((int)pvVar23 + 0xb4) == '\0') {
            iVar51 = FUN_004d1860(pvVar23,(undefined4 *)
                                          (int)*(char *)(*(int *)(unaff_EBP - 0x2b14) + 0x18d));
            *(int *)(unaff_EBP - 0x2b50) = iVar51;
            if (iVar51 != 0) {
              FUN_00401080((void *)(unaff_EBP - 0x1628),0x3f000000,0x3f000000,0x3f000000);
              FUN_00402510(unaff_EBP - 0x182c);
              FUN_00402510(unaff_EBP - 0x1850);
              puVar26 = (uint *)(unaff_EBP - 0x182c);
              puVar27 = (uint *)(unaff_EBP - 0x2334);
              puVar46 = FUN_00402cb0((void *)(*(int *)(unaff_EBP - 0x2b14) + 0x10),
                                     (uint *)(unaff_EBP - 0x1fa4),(uint *)(unaff_EBP - 0x1850));
              puVar26 = FUN_00402cb0(puVar46,puVar27,puVar26);
              FUN_004c64f0((void *)(unaff_EBP - 100),puVar26);
              puVar24 = (undefined4 *)
                        FUN_004d8e10((undefined4 *)(unaff_EBP - 0x1268),
                                     (undefined4 *)(unaff_EBP - 100));
              FUN_00401060((void *)(unaff_EBP - 100),puVar24);
              FUN_00401cd0((undefined4 *)(unaff_EBP - 0x1b6c));
              FUN_00402030((void *)(unaff_EBP - 0x1b6c),
                           (float)(int)*(char *)(*(int *)(unaff_EBP - 0x2b14) + 0x18c) * 90.0);
              fVar59 = 0.0;
              iVar31 = FUN_00402160(iVar51);
              fVar56 = (float)iVar31 * -0.5;
              iVar31 = FUN_00402150(iVar51);
              FUN_004023b0((void *)(unaff_EBP - 0x1b6c),(float)iVar31 * -0.5,fVar56,fVar59);
              FUN_004d3e00((int)pvVar23);
              iVar31 = 0;
              *(undefined4 *)(unaff_EBP - 0x2b3c) = 0;
              iVar54 = FUN_00402150(iVar51);
              if (0 < iVar54) {
                do {
                  *(undefined4 *)(unaff_EBP - 0x2b5c) = 0;
                  iVar54 = FUN_00402160(iVar51);
                  if (0 < iVar54) {
                    do {
                      iVar31 = FUN_00402170(iVar51);
                      iVar51 = *(int *)(unaff_EBP - 0x2b50);
                      *(undefined4 *)(unaff_EBP - 0x2b20) = 0;
                      iVar54 = 0;
                      iVar51 = FUN_00402170(iVar51);
                      if (0 < iVar51) {
                        do {
                          puVar21 = &DAT_00583dfc;
                          puVar20 = FUN_00430730(*(void **)(unaff_EBP - 0x2b50),
                                                 *(int *)(unaff_EBP - 0x2b3c),
                                                 *(int *)(unaff_EBP - 0x2b5c),iVar54);
                          cVar4 = FUN_004079c0(puVar20,(int)puVar21);
                          if (cVar4 != '\0') {
                            if (iVar54 < iVar31) {
                              iVar31 = iVar54;
                            }
                            iVar51 = *(int *)(unaff_EBP - 0x2b20);
                            if (*(int *)(unaff_EBP - 0x2b20) < iVar54) {
                              iVar51 = iVar54;
                            }
                            *(int *)(unaff_EBP - 0x2b20) = iVar51;
                          }
                          iVar54 = iVar54 + 1;
                          iVar51 = FUN_00402170(*(int *)(unaff_EBP - 0x2b50));
                        } while (iVar54 < iVar51);
                      }
                      iVar54 = 0;
                      iVar51 = FUN_00402170(*(int *)(unaff_EBP - 0x2b50));
                      if (0 < iVar51) {
                        do {
                          puVar20 = FUN_00430730(*(void **)(unaff_EBP - 0x2b50),
                                                 *(int *)(unaff_EBP - 0x2b3c),
                                                 *(int *)(unaff_EBP - 0x2b5c),iVar54);
                          FUN_00401020((void *)(unaff_EBP - 0x2c0c),puVar20);
                          pfVar36 = (float *)FUN_00401080((void *)(unaff_EBP - 0x1ac0),0x3f000000,
                                                          0x3f000000,0x3f000000);
                          pfVar33 = (float *)(unaff_EBP - 0x1280);
                          puVar24 = FUN_00401080((void *)(unaff_EBP - 0x1640),
                                                 (float)*(int *)(unaff_EBP - 0x2b3c),
                                                 (float)*(int *)(unaff_EBP - 0x2b5c),(float)iVar54);
                          pfVar33 = (float *)FUN_004014f0(puVar24,pfVar33,pfVar36);
                          FUN_004021f0((void *)(unaff_EBP - 0x1b6c),(float *)(unaff_EBP - 0x1298),
                                       pfVar33);
                          FUN_00402510(unaff_EBP - 0x1874);
                          puVar26 = (uint *)(unaff_EBP - 0x1874);
                          puVar27 = (uint *)(unaff_EBP - 0x2514);
                          piVar25 = FUN_004d99d0((void *)(unaff_EBP - 0x1fd4),
                                                 (uint *)(unaff_EBP - 100));
                          puVar26 = FUN_00402cb0(piVar25,puVar27,puVar26);
                          FUN_004c64f0((void *)(unaff_EBP - 200),puVar26);
                          cVar4 = FUN_0042edb0((void *)(unaff_EBP - 0x2c0c),0x583dfc);
                          if (cVar4 == '\0') {
                            iVar51 = FUN_004013d0((void *)(unaff_EBP - 200),2);
                            *(int *)(unaff_EBP - 0x2b64) = iVar51;
                            iVar51 = FUN_004013d0((void *)(unaff_EBP - 200),1);
                            *(int *)(unaff_EBP - 0x2b54) = iVar51;
                            puVar27 = (uint *)FUN_004013d0((void *)(unaff_EBP - 200),0);
                            iVar51 = **(int **)(unaff_EBP - 0x2b64);
                            puVar26 = *(uint **)(unaff_EBP - 0x2b54);
                            *(uint **)(unaff_EBP - 0x2b40) = puVar27;
                            puVar35 = FUN_00405fd0(*(void **)(unaff_EBP - 0x2b18),*puVar27,*puVar26,
                                                   iVar51,0);
                            if ((puVar35[3] & 0x40) == 0) {
                              iVar51 = 0;
                              puVar20 = FUN_00401370((void *)(unaff_EBP - 0x2fa8),
                                                     (undefined1 *)(unaff_EBP - 0x2c0c),0x46);
                              FUN_0041ff00(*(void **)(unaff_EBP - 0x2b18),
                                           **(float **)(unaff_EBP - 0x2b40),
                                           **(uint **)(unaff_EBP - 0x2b54),
                                           **(int **)(unaff_EBP - 0x2b64),puVar20,iVar51);
                              FUN_0041d7e0(unaff_EBP - 0x440);
                              puVar20 = FUN_00401370((void *)(unaff_EBP - 0x306c),
                                                     (undefined1 *)(unaff_EBP - 0x2c0c),0x46);
                              FUN_00405610((void *)(unaff_EBP - 0x434),puVar20);
                              *(undefined4 *)(unaff_EBP - 0x430) =
                                   *(undefined4 *)(*(int *)(unaff_EBP - 0x2b18) + 0x800160);
                              puVar24 = FUN_00402990((void *)(unaff_EBP - 0x185c),
                                                     **(undefined4 **)(unaff_EBP - 0x2b40),
                                                     **(undefined4 **)(unaff_EBP - 0x2b54),
                                                     **(undefined4 **)(unaff_EBP - 0x2b64));
                              FUN_00401060((void *)(unaff_EBP - 0x440),puVar24);
                              FUN_00528400((void *)(*(int *)(unaff_EBP - 0x2b28) + 0x18),
                                           (undefined4 *)(unaff_EBP - 0x440));
                            }
                          }
                          else if ((iVar31 < iVar54) && (iVar54 < *(int *)(unaff_EBP - 0x2b20))) {
                            iVar9 = 0;
                            puVar20 = FUN_00401370((void *)(unaff_EBP - 0x3084),
                                                   (undefined1 *)(unaff_EBP - 0x2c0c),0x40);
                            piVar25 = (int *)FUN_004013d0((void *)(unaff_EBP - 200),2);
                            iVar51 = *piVar25;
                            puVar26 = (uint *)FUN_004013d0((void *)(unaff_EBP - 200),1);
                            uVar22 = *puVar26;
                            pfVar33 = (float *)FUN_004013d0((void *)(unaff_EBP - 200),0);
                            FUN_0041ff00(*(void **)(unaff_EBP - 0x2b18),*pfVar33,uVar22,iVar51,
                                         puVar20,iVar9);
                          }
                          iVar54 = iVar54 + 1;
                          iVar51 = FUN_00402170(*(int *)(unaff_EBP - 0x2b50));
                        } while (iVar54 < iVar51);
                      }
                      iVar51 = *(int *)(unaff_EBP - 0x2b50);
                      iVar54 = *(int *)(unaff_EBP - 0x2b5c) + 1;
                      *(int *)(unaff_EBP - 0x2b5c) = iVar54;
                      iVar31 = FUN_00402160(iVar51);
                    } while (iVar54 < iVar31);
                    iVar31 = *(int *)(unaff_EBP - 0x2b3c);
                  }
                  iVar31 = iVar31 + 1;
                  *(int *)(unaff_EBP - 0x2b3c) = iVar31;
                  iVar54 = FUN_00402150(iVar51);
                } while (iVar31 < iVar54);
              }
              pvVar23 = *(void **)(unaff_EBP - 0x2b18);
              if (*(int *)((int)pvVar23 + 0xb8) == 0) {
                piVar25 = (int *)FUN_004013d0((void *)(unaff_EBP - 100),1);
                *(float *)(unaff_EBP - 0x2b40) = (float)*piVar25;
                piVar25 = (int *)FUN_004013d0((void *)(unaff_EBP - 100),0);
                iVar68 = 0;
                iVar17 = 8;
                *(float *)(unaff_EBP - 0x2b20) = (float)*piVar25;
                iVar31 = FUN_00402170(iVar51);
                iVar31 = (int)((float)iVar31 * 0.5 + *(float *)(unaff_EBP - 0x2b40));
                iVar54 = FUN_00402160(iVar51);
                iVar54 = (int)((float)iVar54 * 0.5 + *(float *)(unaff_EBP - 0x2b20));
                iVar9 = FUN_00402160(iVar51);
                uVar22 = (uint)(*(float *)(unaff_EBP - 0x2b40) - (float)iVar9 * 0.5);
                iVar51 = FUN_00402150(iVar51);
                FUN_004d1a70(pvVar23,(int)(*(float *)(unaff_EBP - 0x2b20) - (float)iVar51 * 0.5),
                             uVar22,iVar54,iVar31,iVar17,iVar68);
              }
              puVar24 = (undefined4 *)FUN_004013d0((void *)(unaff_EBP - 100),1);
              piVar25 = (int *)*puVar24;
              *(undefined4 **)(unaff_EBP - 0x2b48) = puVar24;
              puVar24 = (undefined4 *)FUN_004013d0((void *)(unaff_EBP - 100),0);
              iVar51 = *(int *)(unaff_EBP - 0x2b50);
              pfVar36 = (float *)*puVar24;
              *(undefined4 **)(unaff_EBP - 0x2b1c) = puVar24;
              iVar51 = FUN_00402160(iVar51);
              uVar22 = iVar51 + (int)piVar25;
              iVar51 = FUN_00402150(*(int *)(unaff_EBP - 0x2b50));
              puVar26 = (uint *)0x5376ee;
              FUN_004d9160(*(void **)(unaff_EBP - 0x2b18),(int)pfVar36,piVar25,iVar51 + (int)pfVar36
                           ,uVar22);
              iVar51 = FUN_00406290(*(void **)(unaff_EBP - 0x2b18),
                                    (int)((**(int **)(unaff_EBP - 0x2b1c) >> 0x1f & 0xffU) +
                                         **(int **)(unaff_EBP - 0x2b1c)) >> 8,
                                    (int)(**(int **)(unaff_EBP - 0x2b48) +
                                         (**(int **)(unaff_EBP - 0x2b48) >> 0x1f & 0xffU)) >> 8);
              *(int *)(unaff_EBP - 0x2b1c) = iVar51;
              if (iVar51 != 0) {
                FUN_00401060((void *)(unaff_EBP - 0x210),(undefined4 *)(unaff_EBP - 100));
                *(int *)(unaff_EBP - 0x214) = (int)*(char *)(*(int *)(unaff_EBP - 0x2b14) + 0x18d);
                FUN_00530840((void *)(iVar51 + 0x3c),(undefined4 *)(unaff_EBP - 0x214));
                FUN_004d4f60((void *)(unaff_EBP - 0x2cd4),(undefined4 *)(unaff_EBP - 0x339c),
                             (uint *)(unaff_EBP - 0x2b1c));
              }
              pvVar23 = *(void **)(unaff_EBP - 0x2b18);
              FUN_004d5c70((int)pvVar23);
            }
          }
          break;
        case '\b':
          if (*(char *)((int)pvVar23 + 0xb4) == '\0') {
            uVar22 = FUN_00405420(pvVar23,(uint *)(*(int *)(unaff_EBP - 0x2b14) + 0x11c8));
            if (uVar22 != 0) {
              FUN_004f8520((int *)(uVar22 + 0x13a4));
              puVar46 = (uint *)(*(int *)(unaff_EBP - 0x2b14) + 0x10);
              puVar27 = FUN_00402c50((void *)(uVar22 + 0x10),(uint *)(unaff_EBP - 0x1ee4),puVar46);
              pfVar33 = FUN_00402550((void *)(unaff_EBP - 0x15f8),(longlong *)puVar27);
              fVar55 = FUN_004021b0(pfVar33);
              *(float *)(unaff_EBP - 0x2b1c) = (float)fVar55;
              if (40000.0 < *(float *)(unaff_EBP - 0x2b1c)) {
                FUN_00402a40((void *)(uVar22 + 0x10),puVar46);
              }
            }
            FUN_004f8520((int *)(*(int *)(unaff_EBP - 0x2b14) + 0x13ac));
            iVar51 = *(int *)(unaff_EBP - 0x2b14);
            *(undefined4 *)(iVar51 + 0x11d0) = 0;
            *(undefined4 *)(iVar51 + 0x11d4) = 0;
            goto LAB_005377fe;
          }
        }
LAB_00537804:
        FUN_0052ebf0((void *)(unaff_EBP - 0x2c58),(undefined4 *)(unaff_EBP - 0x2b30));
        piVar25 = (int *)(*(int *)(unaff_EBP - 0x2b14) + 0x130c);
        piVar34 = (int *)FUN_00530550(piVar25,(undefined4 *)(unaff_EBP - 0x2de8));
        bVar5 = FUN_0042c6f0((void *)(unaff_EBP - 0x2c58),piVar34);
      } while (bVar5);
    }
    if (*(char *)((int)pvVar23 + 0xb4) == '\0') {
      FUN_00426f60(piVar25);
    }
    fVar55 = FUN_0040fda0(*(int *)(unaff_EBP - 0x2b14));
    *(float *)(unaff_EBP - 0x2b1c) = (float)fVar55;
    iVar51 = *(int *)(unaff_EBP - 0x2b14);
    if (*(float *)(unaff_EBP - 0x2b1c) <= *(float *)(iVar51 + 0x16c) &&
        *(float *)(iVar51 + 0x16c) != *(float *)(unaff_EBP - 0x2b1c)) {
      fVar55 = FUN_0040fda0(iVar51);
      iVar51 = *(int *)(unaff_EBP - 0x2b14);
      *(float *)(iVar51 + 0x16c) = (float)fVar55;
    }
    if (0.0 < *(float *)(iVar51 + 0x16c)) goto code_r0x005378a1;
    goto LAB_00545be1;
  }
  pvVar23 = (void *)(*(int *)(unaff_EBP - 0x2b18) + 0xc);
  *(void **)(unaff_EBP - 0x2cb8) = pvVar23;
  FUN_00428070(pvVar23,(undefined4 *)(unaff_EBP - 0x2b40));
  piVar25 = (int *)FUN_00530550(pvVar23,(undefined4 *)(unaff_EBP - 0x2d3c));
  bVar5 = FUN_0042c6f0((void *)(unaff_EBP - 0x2b40),piVar25);
  if (bVar5) {
    do {
      FUN_00407a30((void *)(unaff_EBP - 0x2b40),(int *)(unaff_EBP - 0x2bc0));
      piVar25 = (int *)FUN_00530550(pvVar23,(undefined4 *)(unaff_EBP - 0x2d3c));
      bVar5 = FUN_0042c6f0((void *)(unaff_EBP - 0x2b40),piVar25);
    } while (bVar5);
  }
  FUN_00428070(pvVar23,(undefined4 *)(unaff_EBP - 0x2bac));
  piVar25 = (int *)FUN_00530550(pvVar23,(undefined4 *)(unaff_EBP - 0x2d54));
  bVar5 = FUN_0042c6f0((void *)(unaff_EBP - 0x2bac),piVar25);
  if (bVar5) {
    do {
      iVar51 = FUN_00402bc0((int *)(unaff_EBP - 0x2bac));
      piVar25 = (int *)(iVar51 + 8);
      if (*piVar25 != 0) {
        FUN_00402a40((void *)(unaff_EBP - 0x198),(undefined4 *)(*piVar25 + 0x80));
        iVar51 = *piVar25;
        cVar4 = *(char *)(*(int *)(unaff_EBP - 0x2b18) + 0xb4);
        *(undefined4 *)(unaff_EBP - 0x2b40) = *(undefined4 *)(iVar51 + 0x98);
        if (cVar4 != '\0') goto LAB_005463ff;
        cVar4 = *(char *)(iVar51 + 0x70);
        if (cVar4 == '\x01') {
          puVar26 = FUN_00402c50((void *)(iVar51 + 0x38),(uint *)(unaff_EBP - 0x213c),
                                 (uint *)(iVar51 + 0x10));
          FUN_00402550((void *)(unaff_EBP - 0x40),(longlong *)puVar26);
          fVar55 = FUN_004021b0((float *)(unaff_EBP - 0x40));
          *(float *)(unaff_EBP - 0x2b44) = (float)fVar55;
          if (0.001 <= *(float *)(unaff_EBP - 0x2b44)) {
            if (100.0 < *(float *)(unaff_EBP - 0x2b44)) {
              FUN_00401fb0((float *)(unaff_EBP - 0x40));
              FUN_00401610((void *)(unaff_EBP - 0x40),10.0);
            }
            puVar24 = (undefined4 *)(unaff_EBP - 0x40);
LAB_00545db4:
            FUN_00401060((void *)(*piVar25 + 0x28),puVar24);
          }
          else {
            puVar24 = FUN_00401080((void *)(unaff_EBP - 0x155c),0,0,0);
            FUN_00401060((void *)(*piVar25 + 0x28),puVar24);
            *(undefined1 *)(*piVar25 + 0x70) = 2;
          }
LAB_00545dbf:
          pfVar33 = (float *)(*piVar25 + 0x34);
          fVar55 = FUN_005306d0(*pfVar33,*(float *)(*piVar25 + 0x50),1.0);
          fVar56 = 0.005;
LAB_005463e3:
          iVar51 = *(int *)(unaff_EBP - 0x2b24);
          *(float *)(unaff_EBP - 0x2b44) = (float)fVar55;
          FUN_0052e710(pfVar33,(float *)(unaff_EBP - 0x2b44),iVar51,fVar56);
        }
        else {
          if (cVar4 == '\0') {
            fVar56 = (-*(float *)(iVar51 + 0x50) * 3.1415927) / 180.0;
            *(float *)(unaff_EBP - 0x2b8c) = fVar56;
            uVar28 = 0x41a00000;
            fVar55 = FUN_004024a0(fVar56);
            *(float *)(unaff_EBP - 0x2b44) = (float)fVar55;
            fVar56 = *(float *)(unaff_EBP - 0x2b44) * -50.0;
            fVar55 = FUN_004024c0(*(float *)(unaff_EBP - 0x2b8c));
            *(float *)(unaff_EBP - 0x2b44) = (float)fVar55;
            FUN_00401080((void *)(unaff_EBP - 0x1574),*(float *)(unaff_EBP - 0x2b44) * -50.0,fVar56,
                         uVar28);
            FUN_00402510(unaff_EBP - 0x344);
            puVar26 = (uint *)(*piVar25 + 0x10);
            puVar27 = (uint *)(unaff_EBP - 0x216c);
            puVar46 = FUN_00402cb0((void *)(*piVar25 + 0x38),(uint *)(unaff_EBP - 0x219c),
                                   (uint *)(unaff_EBP - 0x344));
            puVar26 = FUN_00402c50(puVar46,puVar27,puVar26);
            FUN_00402550((void *)(unaff_EBP - 0x58),(longlong *)puVar26);
            fVar55 = FUN_004021b0((float *)(unaff_EBP - 0x58));
            *(float *)(unaff_EBP - 0x2b44) = (float)fVar55;
            if (0.001 < *(float *)(unaff_EBP - 0x2b44) || *(float *)(unaff_EBP - 0x2b44) == 0.001) {
              FUN_00401fb0((float *)(unaff_EBP - 0x58));
              FUN_00401610((void *)(unaff_EBP - 0x58),10.0);
              puVar24 = (undefined4 *)(unaff_EBP - 0x58);
              goto LAB_00545db4;
            }
            puVar24 = FUN_00401080((void *)(unaff_EBP - 0x158c),0,0,0);
            FUN_00401060((void *)(*piVar25 + 0x28),puVar24);
            *(undefined1 *)(*piVar25 + 0x70) = 1;
            goto LAB_00545dbf;
          }
          if (cVar4 == '\x02') {
            fVar56 = (-*(float *)(iVar51 + 0x50) * 3.1415927) / 180.0;
            *(float *)(unaff_EBP - 0x2b8c) = fVar56;
            uVar28 = 0x41a00000;
            fVar55 = FUN_004024a0(fVar56);
            *(float *)(unaff_EBP - 0x2b44) = (float)fVar55;
            fVar56 = *(float *)(unaff_EBP - 0x2b44) * 50.0;
            fVar55 = FUN_004024c0(*(float *)(unaff_EBP - 0x2b8c));
            *(float *)(unaff_EBP - 0x2b44) = (float)fVar55;
            FUN_00401080((void *)(unaff_EBP - 0x15a4),*(float *)(unaff_EBP - 0x2b44) * 50.0,fVar56,
                         uVar28);
            FUN_00402510(unaff_EBP - 0x368);
            puVar26 = (uint *)(*piVar25 + 0x10);
            puVar27 = (uint *)(unaff_EBP - 0x21cc);
            puVar46 = FUN_00402cb0((void *)(*piVar25 + 0x38),(uint *)(unaff_EBP - 0x21fc),
                                   (uint *)(unaff_EBP - 0x368));
            puVar26 = FUN_00402c50(puVar46,puVar27,puVar26);
            FUN_00402550((void *)(unaff_EBP - 0xd4),(longlong *)puVar26);
            fVar55 = FUN_004021b0((float *)(unaff_EBP - 0xd4));
            *(float *)(unaff_EBP - 0x2b44) = (float)fVar55;
            if (0.001 < *(float *)(unaff_EBP - 0x2b44) || *(float *)(unaff_EBP - 0x2b44) == 0.001) {
              FUN_00401fb0((float *)(unaff_EBP - 0xd4));
              FUN_00401610((void *)(unaff_EBP - 0xd4),10.0);
              puVar24 = (undefined4 *)(unaff_EBP - 0xd4);
              goto LAB_00545db4;
            }
            puVar24 = FUN_00401080((void *)(unaff_EBP - 0x15bc),0,0,0);
            FUN_00401060((void *)(*piVar25 + 0x28),puVar24);
            *(undefined1 *)(*piVar25 + 0x70) = 3;
            goto LAB_00545dbf;
          }
          if (cVar4 == '\x03') {
            puVar26 = FUN_00402c50((void *)(iVar51 + 0x58),(uint *)(unaff_EBP - 0x222c),
                                   (uint *)(iVar51 + 0x10));
            FUN_00402550((void *)(unaff_EBP - 0x4c),(longlong *)puVar26);
            puVar24 = (undefined4 *)FUN_004013d0((void *)(unaff_EBP - 0x4c),2);
            *(undefined4 **)(unaff_EBP - 0x2cbc) = puVar24;
            *puVar24 = 0;
            fVar55 = FUN_004021b0((float *)(unaff_EBP - 0x4c));
            *(float *)(unaff_EBP - 0x2b44) = (float)fVar55;
            if (0.001 <= *(float *)(unaff_EBP - 0x2b44)) {
              if (900.0 < *(float *)(unaff_EBP - 0x2b44)) {
                FUN_00401fb0((float *)(unaff_EBP - 0x4c));
                FUN_00401610((void *)(unaff_EBP - 0x4c),30.0);
              }
              iVar51 = *(int *)(unaff_EBP - 0x2b24);
              fVar56 = 0.001;
              iVar31 = iVar51;
              pfVar33 = (float *)FUN_004013d0((void *)(unaff_EBP - 0x4c),0);
              pfVar36 = (float *)FUN_004013d0((void *)(*piVar25 + 0x28),0);
              FUN_0052e710(pfVar36,pfVar33,iVar31,fVar56);
              fVar56 = 0.001;
              pfVar33 = (float *)FUN_004013d0((void *)(unaff_EBP - 0x4c),1);
              pfVar36 = (float *)FUN_004013d0((void *)(*piVar25 + 0x28),1);
              FUN_0052e710(pfVar36,pfVar33,iVar51,fVar56);
            }
            else {
              puVar24 = FUN_00401080((void *)(unaff_EBP - 0x15d4),0,0,0);
              FUN_00401060((void *)(*piVar25 + 0x28),puVar24);
              *(undefined1 *)(*piVar25 + 0x70) = 0;
            }
            pvVar23 = (void *)(*piVar25 + 0x10);
            iVar51 = 0;
            *(void **)(unaff_EBP - 0x2b8c) = pvVar23;
            pCVar38 = (CRefTime *)FUN_004e2320(pvVar23,1);
            uVar22 = CRefTime::Millisecs(pCVar38);
            pCVar38 = (CRefTime *)FUN_004e2320(pvVar23,0);
            uVar52 = CRefTime::Millisecs(pCVar38);
            iVar51 = FUN_00406100(*(void **)(unaff_EBP - 0x2b18),uVar52,uVar22,iVar51);
            iVar31 = 0;
            *(int *)(unaff_EBP - 0x2b44) = iVar51;
            if (iVar51 != 0) {
              iVar31 = FUN_004061d0(iVar51);
              iVar51 = FUN_00406250(*(int *)(unaff_EBP - 0x2b44));
              iVar31 = iVar31 + iVar51;
              if (iVar31 < 0) {
                iVar31 = 0;
              }
            }
            pvVar23 = (void *)FUN_004e2320(*(void **)(unaff_EBP - 0x2b8c),2);
            *(void **)(unaff_EBP - 0x2b44) = pvVar23;
            iVar51 = FUN_00402d10(pvVar23,iVar31 + 100);
            if ((char)iVar51 == '\0') {
              iVar51 = FUN_00405750(*(void **)(unaff_EBP - 0x2b44),iVar31 + 0x96);
              if ((char)iVar51 == '\0') {
                *(undefined4 *)(unaff_EBP - 0x2ca0) = 0;
                pfVar33 = (float *)(unaff_EBP - 0x2ca0);
              }
              else {
                *(undefined4 *)(unaff_EBP - 0x2c18) = 0xc1200000;
                pfVar33 = (float *)(unaff_EBP - 0x2c18);
              }
            }
            else {
              *(undefined4 *)(unaff_EBP - 0x2bcc) = 0x41200000;
              pfVar33 = (float *)(unaff_EBP - 0x2bcc);
            }
            iVar51 = *(int *)(unaff_EBP - 0x2b24);
            fVar56 = 0.001;
            pfVar36 = (float *)FUN_004013d0((void *)(*piVar25 + 0x28),2);
            FUN_0052e710(pfVar36,pfVar33,iVar51,fVar56);
            FUN_00401060((void *)(unaff_EBP - 0x4c),(undefined4 *)(*piVar25 + 0x28));
            **(undefined4 **)(unaff_EBP - 0x2cbc) = 0;
            fVar55 = FUN_004021b0((float *)(unaff_EBP - 0x4c));
            *(float *)(unaff_EBP - 0x2b44) = (float)fVar55;
            if (*(float *)(unaff_EBP - 0x2b44) <= 0.0) goto LAB_005463ff;
            FUN_00401fb0((float *)(unaff_EBP - 0x4c));
            pfVar33 = (float *)FUN_004013d0((void *)(unaff_EBP - 0x4c),1);
            fVar56 = *pfVar33;
            *(float **)(unaff_EBP - 0x2b38) = pfVar33;
            if (1.0 < fVar56) {
              *pfVar33 = 1.0;
            }
            if (*pfVar33 <= -1.0 && *pfVar33 != -1.0) {
              *pfVar33 = -1.0;
            }
            pfVar36 = (float *)FUN_004013d0((void *)(unaff_EBP - 0x4c),0);
            pfVar33 = (float *)(*piVar25 + 0x34);
            fVar56 = 1.0;
            if (*pfVar36 <= 0.0) {
              fVar55 = FUN_00548b00(**(float **)(unaff_EBP - 0x2b38));
              *(float *)(unaff_EBP - 0x2b44) = (float)fVar55;
              fVar59 = *(float *)(unaff_EBP - 0x2b44);
            }
            else {
              fVar55 = FUN_00548b00(**(float **)(unaff_EBP - 0x2b38));
              *(float *)(unaff_EBP - 0x2b44) = (float)fVar55;
              fVar59 = -*(float *)(unaff_EBP - 0x2b44);
            }
            fVar55 = FUN_005306d0(*pfVar33,(fVar59 / 3.1415927) * 180.0,fVar56);
            fVar56 = 0.001;
            goto LAB_005463e3;
          }
        }
LAB_005463ff:
        FUN_004e1520((float *)(unaff_EBP - 0x15ec),*(float *)(unaff_EBP - 0x2ba0),
                     (float *)(*piVar25 + 0x28));
        FUN_00402510(unaff_EBP - 0x458);
        FUN_00402e30((void *)(*piVar25 + 0x10),(uint *)(unaff_EBP - 0x458));
        uVar22 = *(uint *)(unaff_EBP - 0x2b24);
        iVar31 = 0x3c23d70a;
        *(undefined4 *)(unaff_EBP - 0x2b1c) = 0;
        *(undefined4 *)(unaff_EBP - 0x2cc0) = 0x3f800000;
        FUN_0052e710((float *)(unaff_EBP - 0x2b1c),(float *)(unaff_EBP - 0x2cc0),uVar22,0.01);
        iVar51 = *piVar25;
        FUN_00402a10((ulonglong *)&stack0xfffffff8);
        puVar24 = (undefined4 *)(unaff_EBP - 0x225c);
        puVar26 = FUN_00402c50((void *)(iVar51 + 0x10),(uint *)(unaff_EBP - 0x228c),
                               (uint *)(iVar51 + 0x80));
        puVar26 = FUN_00402bd0(puVar26,puVar24,uVar22,iVar31);
        FUN_00402e30((void *)(*piVar25 + 0x80),puVar26);
        pfVar33 = (float *)(*piVar25 + 0x98);
        fVar55 = FUN_005306d0(*pfVar33,*(float *)(*piVar25 + 0x34),1.0);
        *(float *)(unaff_EBP - 0x2b44) = (float)fVar55;
        puVar26 = (uint *)0x54650c;
        FUN_0052e710(pfVar33,(float *)(unaff_EBP - 0x2b44),*(int *)(unaff_EBP - 0x2b24),0.01);
        FUN_004c8280((undefined4 *)(unaff_EBP - 0x2bf8));
        iVar51 = *piVar25;
        *(undefined1 *)(unaff_EBP - 4) = 0x19;
        FUN_00428070((void *)(iVar51 + 0x78),(undefined4 *)(unaff_EBP - 0x2b20));
        piVar34 = (int *)FUN_00530550((void *)(iVar51 + 0x78),(undefined4 *)(unaff_EBP - 0x2d44));
        bVar5 = FUN_0042c6f0((void *)(unaff_EBP - 0x2b20),piVar34);
        if (bVar5) {
          do {
            puVar27 = (uint *)FUN_00402bc0((int *)(unaff_EBP - 0x2b20));
            uVar22 = FUN_00405420(*(void **)(unaff_EBP - 0x2b18),puVar27);
            *(uint *)(unaff_EBP - 0x2b8c) = uVar22;
            if (uVar22 == 0) {
LAB_0054670d:
              FUN_004d6620((void *)(unaff_EBP - 0x2bf8),(undefined4 *)(unaff_EBP - 0x2b20));
            }
            else {
              puVar27 = FUN_00402c50((void *)(uVar22 + 0x10),(uint *)(unaff_EBP - 0x22bc),
                                     (uint *)(*piVar25 + 0x10));
              pfVar33 = FUN_00402550((void *)(unaff_EBP - 0x1604),(longlong *)puVar27);
              fVar55 = FUN_004021b0(pfVar33);
              *(float *)(unaff_EBP - 0x2b44) = (float)fVar55;
              if (4096.0 < *(float *)(unaff_EBP - 0x2b44)) goto LAB_0054670d;
              FUN_00401cd0((undefined4 *)(unaff_EBP - 0xf00));
              FUN_00402030((void *)(unaff_EBP - 0xf00),
                           *(float *)(*piVar25 + 0x98) - *(float *)(unaff_EBP - 0x2b40));
              puVar27 = FUN_00402c50((void *)(uVar22 + 0x1350),(uint *)(unaff_EBP - 0x22ec),
                                     (uint *)(unaff_EBP - 0x198));
              FUN_00402550((void *)(unaff_EBP - 0x29c),(longlong *)puVar27);
              FUN_004021f0((void *)(unaff_EBP - 0xf00),(float *)(unaff_EBP - 0x161c),
                           (float *)(unaff_EBP - 0x29c));
              FUN_00402510(unaff_EBP - 0x4a0);
              puVar27 = FUN_00402cb0((void *)(*piVar25 + 0x80),(uint *)(unaff_EBP - 0x231c),
                                     (uint *)(unaff_EBP - 0x4a0));
              FUN_00402a40((void *)(uVar22 + 0x1350),puVar27);
              pfVar33 = (float *)FUN_004013d0((void *)(uVar22 + 0x1374),2);
              *pfVar33 = (*(float *)(*piVar25 + 0x98) - *(float *)(unaff_EBP - 0x2b40)) + *pfVar33;
              puVar27 = FUN_00402c50((void *)(uVar22 + 0x10),(uint *)(unaff_EBP - 0x234c),
                                     (uint *)(unaff_EBP - 0x198));
              FUN_00402550((void *)(unaff_EBP - 0x290),(longlong *)puVar27);
              FUN_004021f0((void *)(unaff_EBP - 0xf00),(float *)(unaff_EBP - 0x10d0),
                           (float *)(unaff_EBP - 0x290));
              FUN_00402510(unaff_EBP - 0x488);
              puVar27 = FUN_00402cb0((void *)(*piVar25 + 0x80),(uint *)(unaff_EBP - 0x237c),
                                     (uint *)(unaff_EBP - 0x488));
              FUN_00402a40((void *)(uVar22 + 0x10),puVar27);
              pfVar33 = (float *)FUN_004013d0((void *)(uVar22 + 0x28),2);
              *pfVar33 = (*(float *)(*piVar25 + 0x98) - *(float *)(unaff_EBP - 0x2b40)) + *pfVar33;
            }
            FUN_00407a30((void *)(unaff_EBP - 0x2b20),(int *)(unaff_EBP - 0x2c44));
            piVar34 = (int *)FUN_00530550((void *)(*piVar25 + 0x78),
                                          (undefined4 *)(unaff_EBP - 0x2d44));
            bVar5 = FUN_0042c6f0((void *)(unaff_EBP - 0x2b20),piVar34);
          } while (bVar5);
        }
        FUN_00428070((void *)(unaff_EBP - 0x2bf8),(undefined4 *)(unaff_EBP - 0x2b68));
        piVar34 = (int *)FUN_00530550((void *)(unaff_EBP - 0x2bf8),
                                      (undefined4 *)(unaff_EBP - 0x2d4c));
        bVar5 = FUN_0042c6f0((void *)(unaff_EBP - 0x2b68),piVar34);
        if (bVar5) {
          do {
            puVar24 = (undefined4 *)FUN_0052eb90((int *)(unaff_EBP - 0x2b68));
            FUN_0040a1d0((void *)(*piVar25 + 0x78),(undefined4 *)(unaff_EBP - 0x2ce0),
                         (int *)*puVar24);
            FUN_0052ebf0((void *)(unaff_EBP - 0x2b68),(undefined4 *)(unaff_EBP - 0x2bc0));
            piVar34 = (int *)FUN_00530550((void *)(unaff_EBP - 0x2bf8),
                                          (undefined4 *)(unaff_EBP - 0x2d4c));
            bVar5 = FUN_0042c6f0((void *)(unaff_EBP - 0x2b68),piVar34);
          } while (bVar5);
        }
        *(undefined1 *)(unaff_EBP - 4) = 5;
        FUN_00423710((int *)(unaff_EBP - 0x2bf8));
        pvVar23 = *(void **)(unaff_EBP - 0x2cb8);
      }
      FUN_00407a30((void *)(unaff_EBP - 0x2bac),(int *)(unaff_EBP - 0x2c1c));
      piVar25 = (int *)FUN_00530550(pvVar23,(undefined4 *)(unaff_EBP - 0x2d54));
      bVar5 = FUN_0042c6f0((void *)(unaff_EBP - 0x2bac),piVar25);
    } while (bVar5);
  }
  FUN_004c8280((undefined4 *)(unaff_EBP - 0x2c20));
  pvVar23 = (void *)(*(int *)(unaff_EBP - 0x2b18) + 0x14);
  *(undefined1 *)(unaff_EBP - 4) = 0x1a;
  FUN_00428070(pvVar23,(undefined4 *)(unaff_EBP - 0x2b50));
  piVar25 = (int *)FUN_00530550(pvVar23,(undefined4 *)(unaff_EBP - 0x2d6c));
  bVar5 = FUN_0042c6f0((void *)(unaff_EBP - 0x2b50),piVar25);
  do {
    if (!bVar5) {
      FUN_00428070((void *)(unaff_EBP - 0x2c20),(undefined4 *)(unaff_EBP - 0x2b68));
      piVar25 = (int *)FUN_00530550((void *)(unaff_EBP - 0x2c20),(undefined4 *)(unaff_EBP - 0x2d7c))
      ;
      bVar5 = FUN_0042c6f0((void *)(unaff_EBP - 0x2b68),piVar25);
      if (bVar5) {
        do {
          puVar24 = (undefined4 *)FUN_0052eb90((int *)(unaff_EBP - 0x2b68));
          FUN_005305b0(pvVar23,(int *)(unaff_EBP - 0x2bc0),(int *)*puVar24);
          FUN_0052ebf0((void *)(unaff_EBP - 0x2b68),(undefined4 *)(unaff_EBP - 0x2c44));
          piVar25 = (int *)FUN_00530550((void *)(unaff_EBP - 0x2c20),
                                        (undefined4 *)(unaff_EBP - 0x2d7c));
          bVar5 = FUN_0042c6f0((void *)(unaff_EBP - 0x2b68),piVar25);
        } while (bVar5);
      }
      *(undefined1 *)(unaff_EBP - 4) = 5;
      FUN_00423710((int *)(unaff_EBP - 0x2c20));
      FUN_00428070(*(void **)(unaff_EBP - 0x2b6c),(undefined4 *)(unaff_EBP - 0x2b68));
      piVar25 = (int *)FUN_00530550(*(void **)(unaff_EBP - 0x2b6c),
                                    (undefined4 *)(unaff_EBP - 0x2d84));
      bVar5 = FUN_0042c6f0((void *)(unaff_EBP - 0x2b68),piVar25);
      if (bVar5) {
        do {
          iVar31 = FUN_00402bc0((int *)(unaff_EBP - 0x2b68));
          iVar51 = *(int *)(iVar31 + 8);
          if (iVar51 != 0) {
            puVar26 = (uint *)(iVar51 + 0x11d0);
            uVar22 = FUN_00405420(*(void **)(unaff_EBP - 0x2b18),puVar26);
            if ((uVar22 != 0) &&
               (uVar22 = FUN_00405420(*(void **)(unaff_EBP - 0x2b18),puVar26),
               *(float *)(uVar22 + 0x16c) <= 0.0)) {
              *puVar26 = 0;
              *(undefined4 *)(iVar51 + 0x11d4) = 0;
            }
            iVar51 = *(int *)(iVar31 + 8);
            *(int *)(unaff_EBP - 0x2b94) = iVar51;
            if (*(char *)(iVar51 + 0x60) == '\x05') {
              puVar26 = (uint *)(iVar51 + 0x198);
              uVar22 = FUN_00405420(*(void **)(unaff_EBP - 0x2b18),puVar26);
              if ((uVar22 != 0) &&
                 (uVar22 = FUN_00405420(*(void **)(unaff_EBP - 0x2b18),puVar26),
                 *(char *)(uVar22 + 0x68) == 'j')) {
                uVar22 = FUN_00405420(*(void **)(unaff_EBP - 0x2b18),puVar26);
                *(uint *)(unaff_EBP - 0x2b40) = uVar22;
                pfVar33 = (float *)FUN_004013d0((void *)(iVar51 + 0x80),2);
                pfVar36 = (float *)FUN_004013d0((void *)(uVar22 + 0x80),2);
                FUN_00401080((void *)(unaff_EBP - 0x1754),0,0,
                             (*pfVar33 * 0.5 - *pfVar36 * 0.5) + 0.01);
                FUN_00402510(unaff_EBP - 0x344);
                puVar26 = FUN_00402cb0((void *)(*(int *)(unaff_EBP - 0x2b40) + 0x1350),
                                       (uint *)(unaff_EBP - 0x255c),(uint *)(unaff_EBP - 0x344));
                FUN_00402a40((void *)(*(int *)(unaff_EBP - 0x2b94) + 0x1350),puVar26);
                FUN_00401060((void *)(*(int *)(unaff_EBP - 0x2b94) + 0x1374),
                             (undefined4 *)(*(int *)(unaff_EBP - 0x2b40) + 0x1374));
                FUN_00401080((void *)(unaff_EBP - 0x176c),0,0,
                             (*pfVar33 * 0.5 - *pfVar36 * 0.5) + 0.01);
                FUN_00402510(unaff_EBP - 0x368);
                iVar51 = *(int *)(unaff_EBP - 0x2b40);
                puVar26 = FUN_00402cb0((void *)(iVar51 + 0x10),(uint *)(unaff_EBP - 0x258c),
                                       (uint *)(unaff_EBP - 0x368));
                iVar31 = *(int *)(unaff_EBP - 0x2b94);
                FUN_00402a40((void *)(iVar31 + 0x10),puVar26);
                FUN_00401060((void *)(iVar31 + 0x28),(undefined4 *)(iVar51 + 0x28));
                *(undefined4 *)(iVar31 + 0x1180) = *(undefined4 *)(iVar51 + 0x1180);
                *(undefined4 *)(iVar31 + 0x1188) = *(undefined4 *)(iVar51 + 0x1188);
                *(undefined4 *)(iVar31 + 0x118c) = *(undefined4 *)(iVar51 + 0x118c);
                puVar24 = FUN_00401080((void *)(unaff_EBP - 0x1784),0,0,0);
                FUN_00401060((void *)(iVar31 + 0x34),puVar24);
                puVar24 = FUN_00401080((void *)(unaff_EBP - 0x179c),0,0,0);
                FUN_00401060((void *)(iVar31 + 0x40),puVar24);
              }
            }
          }
          FUN_00407a30((void *)(unaff_EBP - 0x2b68),(int *)(unaff_EBP - 0x2bc0));
          piVar25 = (int *)FUN_00530550(*(void **)(unaff_EBP - 0x2b6c),
                                        (undefined4 *)(unaff_EBP - 0x2d84));
          bVar5 = FUN_0042c6f0((void *)(unaff_EBP - 0x2b68),piVar25);
        } while (bVar5);
      }
      FUN_00428070((void *)(unaff_EBP - 0x2be8),(undefined4 *)(unaff_EBP - 0x2b68));
      piVar25 = (int *)FUN_00530550((void *)(unaff_EBP - 0x2be8),(undefined4 *)(unaff_EBP - 0x2d8c))
      ;
      bVar5 = FUN_0042c6f0((void *)(unaff_EBP - 0x2b68),piVar25);
      if (bVar5) {
        iVar51 = *(int *)(unaff_EBP - 0x2b28);
        do {
          piVar25 = (int *)FUN_00402bc0((int *)(unaff_EBP - 0x2b68));
          *(undefined1 *)(*piVar25 + 0x75) = 1;
          puVar24 = FUN_00422c00((void *)(unaff_EBP - 0xe88),*piVar25);
          *(undefined1 *)(unaff_EBP - 4) = 0x1b;
          FUN_00428450((void *)(iVar51 + 0x28),puVar24);
          *(undefined1 *)(unaff_EBP - 4) = 5;
          FUN_00423770(unaff_EBP - 0xe88);
          FUN_00407a30((void *)(unaff_EBP - 0x2b68),(int *)(unaff_EBP - 0x2bc0));
          piVar25 = (int *)FUN_00530550((void *)(unaff_EBP - 0x2be8),
                                        (undefined4 *)(unaff_EBP - 0x2d8c));
          bVar5 = FUN_0042c6f0((void *)(unaff_EBP - 0x2b68),piVar25);
        } while (bVar5);
      }
      iVar51 = *(int *)(unaff_EBP - 0x2b28);
      pvVar23 = (void *)(iVar51 + 0x30);
      FUN_00428070(pvVar23,(undefined4 *)(unaff_EBP - 0x2b68));
      piVar25 = (int *)FUN_00530550(pvVar23,(undefined4 *)(unaff_EBP - 0x2d94));
      bVar5 = FUN_0042c6f0((void *)(unaff_EBP - 0x2b68),piVar25);
      if (bVar5) {
        do {
          pvVar42 = (void *)FUN_0052eb90((int *)(unaff_EBP - 0x2b68));
          puVar26 = (uint *)FUN_004013d0(pvVar42,1);
          uVar22 = *puVar26;
          puVar26 = (uint *)FUN_004013d0(pvVar42,0);
          iVar51 = FUN_00406290(*(void **)(unaff_EBP - 0x2b18),*puVar26,uVar22);
          if (iVar51 != 0) {
            *(undefined1 *)(iVar51 + 0x76) = 1;
          }
          FUN_0052ebf0((void *)(unaff_EBP - 0x2b68),(undefined4 *)(unaff_EBP - 0x2bc0));
          piVar25 = (int *)FUN_00530550(pvVar23,(undefined4 *)(unaff_EBP - 0x2d94));
          bVar5 = FUN_0042c6f0((void *)(unaff_EBP - 0x2b68),piVar25);
        } while (bVar5);
        iVar51 = *(int *)(unaff_EBP - 0x2b28);
      }
      FUN_00428070((void *)(unaff_EBP - 0x2cd4),(undefined4 *)(unaff_EBP - 0x2b68));
      piVar25 = (int *)FUN_00530550((void *)(unaff_EBP - 0x2cd4),(undefined4 *)(unaff_EBP - 0x2db4))
      ;
      bVar5 = FUN_0042c6f0((void *)(unaff_EBP - 0x2b68),piVar25);
      if (bVar5) {
        do {
          piVar25 = (int *)FUN_00402bc0((int *)(unaff_EBP - 0x2b68));
          puVar24 = FUN_0052e950((void *)(unaff_EBP - 0xe50),*piVar25);
          *(undefined1 *)(unaff_EBP - 4) = 0x1c;
          FUN_005307f0((void *)(iVar51 + 0x38),puVar24);
          *(undefined1 *)(unaff_EBP - 4) = 5;
          FUN_00423770(unaff_EBP - 0xe50);
          FUN_00407a30((void *)(unaff_EBP - 0x2b68),(int *)(unaff_EBP - 0x2bc0));
          piVar25 = (int *)FUN_00530550((void *)(unaff_EBP - 0x2cd4),
                                        (undefined4 *)(unaff_EBP - 0x2db4));
          bVar5 = FUN_0042c6f0((void *)(unaff_EBP - 0x2b68),piVar25);
        } while (bVar5);
      }
      pvVar23 = (void *)(*(int *)(unaff_EBP - 0x2b28) + 0x18);
      FUN_00428070(pvVar23,(undefined4 *)(unaff_EBP - 0x2b20));
      piVar25 = (int *)FUN_00530550(pvVar23,(undefined4 *)(unaff_EBP - 0x2dbc));
      bVar5 = FUN_0042c6f0((void *)(unaff_EBP - 0x2b20),piVar25);
      if (bVar5) {
        do {
          pvVar42 = (void *)FUN_0052eb90((int *)(unaff_EBP - 0x2b20));
          piVar25 = (int *)FUN_004013d0(pvVar42,1);
          uVar22 = (int)(*piVar25 + (*piVar25 >> 0x1f & 0xffU)) >> 8;
          piVar25 = (int *)FUN_004013d0(pvVar42,0);
          iVar51 = FUN_00406290(*(void **)(unaff_EBP - 0x2b18),
                                (int)(*piVar25 + (*piVar25 >> 0x1f & 0xffU)) >> 8,uVar22);
          if (iVar51 != 0) {
            puVar24 = (undefined4 *)FUN_0052eb90((int *)(unaff_EBP - 0x2b20));
            FUN_0041f4d0((void *)(iVar51 + 0x68),puVar24);
          }
          FUN_0052ebf0((void *)(unaff_EBP - 0x2b20),(undefined4 *)(unaff_EBP - 0x2bc0));
          piVar25 = (int *)FUN_00530550(pvVar23,(undefined4 *)(unaff_EBP - 0x2dbc));
          bVar5 = FUN_0042c6f0((void *)(unaff_EBP - 0x2b20),piVar25);
        } while (bVar5);
      }
      FUN_004f7710((undefined4 *)(unaff_EBP - 0x2cd4));
      FUN_004f7710((undefined4 *)(unaff_EBP - 0x2be8));
      FUN_004f7710((undefined4 *)(unaff_EBP - 0x2bf0));
      FUN_00423710((int *)(unaff_EBP - 0x2bd4));
      ExceptionList = *(void **)(unaff_EBP - 0xc);
      uStack00000008 = 0x54721f;
      __security_check_cookie(*(uint *)(unaff_EBP - 0x10) ^ unaff_EBP);
      return;
    }
    puVar27 = (uint *)FUN_0052eb90((int *)(unaff_EBP - 0x2b50));
    if (puVar27[0x18] == 1) {
LAB_00546a5d:
      FUN_004e1520((float *)(unaff_EBP - 0x11c),*(float *)(unaff_EBP - 0x2ba0),
                   (float *)(puVar27 + 0xf));
      puVar27[0x1a] = puVar27[0x1a] + *(int *)(unaff_EBP - 0x2b24);
      if ((puVar27[0x18] != 2) && (5000 < (int)puVar27[0x1a])) {
        if (puVar27[0x18] != 3) {
          pvVar23 = *(void **)(unaff_EBP - 0x2b18);
          uVar22 = FUN_00405420(pvVar23,puVar27);
          if (uVar22 != 0) {
            uVar22 = FUN_00405420(pvVar23,puVar27);
            fVar55 = FUN_00412150(uVar22);
            *(float *)(unaff_EBP - 0x2b44) = (float)fVar55;
            uVar22 = FUN_00405420(pvVar23,puVar27);
            *(undefined4 *)(uVar22 + 0x70) = 0;
            uVar22 = FUN_00405420(pvVar23,puVar27);
            uVar52 = FUN_00405420(*(void **)(unaff_EBP - 0x2b18),puVar27);
            fVar55 = FUN_00412150(uVar52);
            *(float *)(unaff_EBP - 0x2b8c) = (float)fVar55;
            *(int *)(uVar22 + 0x6c) =
                 (int)((*(float *)(unaff_EBP - 0x2b44) / *(float *)(unaff_EBP - 0x2b8c)) *
                      (float)*(int *)(uVar22 + 0x6c));
          }
        }
        goto LAB_00546b28;
      }
      pvVar23 = *(void **)(unaff_EBP - 0x2b18);
      *(undefined4 *)(unaff_EBP - 0x2b4c) = 0;
      uVar22 = FUN_00405420(pvVar23,puVar27);
      if (uVar22 != 0) {
        uVar22 = FUN_00405420(*(void **)(unaff_EBP - 0x2b18),puVar27);
        *(uint *)(unaff_EBP - 0x2b4c) = uVar22;
      }
      fVar55 = FUN_00401d80((float *)(unaff_EBP - 0x11c));
      *(float *)(unaff_EBP - 0x2b44) = (float)fVar55;
      iVar51 = (int)(*(float *)(unaff_EBP - 0x2b44) * 2.0 + 1.0);
      *(int *)(unaff_EBP - 0x2c08) = iVar51;
      FUN_004f7a70((void *)(unaff_EBP - 0x11c),(float *)(unaff_EBP - 0x40),(float)iVar51);
      FUN_00401060((void *)(unaff_EBP - 0xb0),puVar27 + 0xf);
      fVar55 = FUN_004021b0((float *)(unaff_EBP - 0xb0));
      *(float *)(unaff_EBP - 0x2b44) = (float)fVar55;
      if (0.0 < *(float *)(unaff_EBP - 0x2b44)) {
        FUN_00401fb0((float *)(unaff_EBP - 0xb0));
      }
      FUN_00401610((void *)(unaff_EBP - 0xb0),(float)puVar27[0x15] * 5.0);
      *(float *)(unaff_EBP - 0x2b44) = (float)puVar27[0x15] * 3.0;
      puVar24 = (undefined4 *)FUN_004013d0((void *)(unaff_EBP - 0xb0),2);
      pvVar23 = *(void **)(unaff_EBP - 0x2b18);
      *puVar24 = *(undefined4 *)(unaff_EBP - 0x2b44);
      pvVar23 = (void *)FUN_00405420(pvVar23,puVar27);
      iVar51 = *(int *)(unaff_EBP - 0x2c08);
      *(void **)(unaff_EBP - 0x2b84) = pvVar23;
      *(undefined4 *)(unaff_EBP - 0x2c04) = 0;
      if (0 < iVar51) {
        do {
          pvVar42 = *(void **)(unaff_EBP - 0x2b6c);
          *(undefined1 *)(unaff_EBP - 0x2b58) = 0;
          *(undefined1 *)(unaff_EBP - 0x2b64) = 0;
          FUN_00428070(pvVar42,(undefined4 *)(unaff_EBP - 0x2bac));
          piVar25 = (int *)FUN_00530550(*(void **)(unaff_EBP - 0x2b6c),
                                        (undefined4 *)(unaff_EBP - 0x2d5c));
          bVar5 = FUN_0042c6f0((void *)(unaff_EBP - 0x2bac),piVar25);
          if (bVar5) {
            do {
              iVar51 = FUN_00402bc0((int *)(unaff_EBP - 0x2bac));
              pvVar42 = *(void **)(iVar51 + 8);
              *(void **)(unaff_EBP - 0x2b54) = pvVar42;
              if (((pvVar42 != (void *)0x0) && (0.0 < *(float *)((int)pvVar42 + 0x16c))) &&
                 (((puVar27[0x18] == 3 && ((char)puVar27[0x19] == '\x02')) ||
                  ((pvVar23 == (void *)0x0 ||
                   (((pvVar42 != pvVar23 &&
                     (uVar28 = FUN_004d18c0((int)pvVar23,(int)pvVar42), (char)uVar28 != '\0')) &&
                    ((pvVar42 = *(void **)(unaff_EBP - 0x2b54),
                     *(int *)((int)pvVar42 + 8) != *(int *)((int)pvVar23 + 0x11c0) ||
                     (*(int *)((int)pvVar42 + 0xc) != *(int *)((int)pvVar23 + 0x11c4))))))))))) {
                *(void **)(unaff_EBP - 0x2b38) = (void *)((int)pvVar42 + 0x80);
                iVar51 = FUN_004013d0((void *)((int)pvVar42 + 0x80),0);
                *(int *)(unaff_EBP - 0x2b1c) = iVar51;
                pvVar42 = (void *)(*(int *)(unaff_EBP - 0x2b54) + 0x10);
                *(void **)(unaff_EBP - 0x2b68) = pvVar42;
                iVar51 = FUN_004e2320(pvVar42,0);
                *(int *)(unaff_EBP - 0x2b48) = iVar51;
                iVar51 = FUN_004e2320(puVar27 + 6,0);
                *(int *)(unaff_EBP - 0x2b90) = iVar51;
                puVar46 = (uint *)FUN_004014b0(*(void **)(unaff_EBP - 0x2b48),
                                               (int *)(unaff_EBP - 0x36ec));
                pvVar42 = (void *)FUN_00401530(*(void **)(unaff_EBP - 0x2b90),
                                               (int *)(unaff_EBP - 0x370c));
                uVar22 = FUN_004ce380(pvVar42,puVar46);
                if ((char)uVar22 != '\0') {
                  iVar51 = FUN_004013d0(*(void **)(unaff_EBP - 0x2b38),1);
                  pvVar42 = *(void **)(unaff_EBP - 0x2b68);
                  *(int *)(unaff_EBP - 0x2bb8) = iVar51;
                  iVar51 = FUN_004e2320(pvVar42,1);
                  *(int *)(unaff_EBP - 0x2b98) = iVar51;
                  iVar51 = FUN_004e2320(puVar27 + 6,1);
                  *(int *)(unaff_EBP - 0x2bbc) = iVar51;
                  puVar46 = (uint *)FUN_004014b0(*(void **)(unaff_EBP - 0x2b98),
                                                 (int *)(unaff_EBP - 0x3484));
                  pvVar42 = (void *)FUN_00401530(*(void **)(unaff_EBP - 0x2bbc),
                                                 (int *)(unaff_EBP - 0x31c4));
                  uVar22 = FUN_004ce380(pvVar42,puVar46);
                  if ((char)uVar22 != '\0') {
                    iVar51 = FUN_004013d0(*(void **)(unaff_EBP - 0x2b38),2);
                    pvVar42 = *(void **)(unaff_EBP - 0x2b68);
                    *(int *)(unaff_EBP - 0x2b38) = iVar51;
                    iVar51 = FUN_004e2320(pvVar42,2);
                    *(int *)(unaff_EBP - 0x2b94) = iVar51;
                    iVar51 = FUN_004e2320(puVar27 + 6,2);
                    *(int *)(unaff_EBP - 0x2ba8) = iVar51;
                    puVar46 = (uint *)FUN_004014b0(*(void **)(unaff_EBP - 0x2b94),
                                                   (int *)(unaff_EBP - 0x36f4));
                    pvVar42 = (void *)FUN_00401530(*(void **)(unaff_EBP - 0x2ba8),
                                                   (int *)(unaff_EBP - 0x31d4));
                    uVar22 = FUN_004ce380(pvVar42,puVar46);
                    if ((char)uVar22 != '\0') {
                      puVar46 = (uint *)FUN_00401530(*(void **)(unaff_EBP - 0x2b48),
                                                     (int *)(unaff_EBP - 0x3494));
                      pvVar42 = (void *)FUN_004014b0(*(void **)(unaff_EBP - 0x2b90),
                                                     (int *)(unaff_EBP - 0x31a4));
                      uVar22 = FUN_004ce350(pvVar42,puVar46);
                      if ((char)uVar22 != '\0') {
                        puVar46 = (uint *)FUN_00401530(*(void **)(unaff_EBP - 0x2b98),
                                                       (int *)(unaff_EBP - 0x35f4));
                        pvVar42 = (void *)FUN_004014b0(*(void **)(unaff_EBP - 0x2bbc),
                                                       (int *)(unaff_EBP - 0x31f4));
                        uVar22 = FUN_004ce350(pvVar42,puVar46);
                        if ((char)uVar22 != '\0') {
                          puVar46 = (uint *)FUN_00401530(*(void **)(unaff_EBP - 0x2b94),
                                                         (int *)(unaff_EBP - 0x34a4));
                          pvVar42 = (void *)FUN_004014b0(*(void **)(unaff_EBP - 0x2ba8),
                                                         (int *)(unaff_EBP - 0x3204));
                          uVar22 = FUN_004ce350(pvVar42,puVar46);
                          if ((char)uVar22 != '\0') {
                            puVar26 = (uint *)0x5476f7;
                            cVar4 = FUN_004d4d80(puVar27 + 6,*(uint **)(unaff_EBP - 0x2b68),'\x01',
                                                 200.0);
                            if (cVar4 != '\0') {
                              if (*(int *)(*(int *)(unaff_EBP - 0x2b54) + 0x128) != 0) {
                                if (pvVar23 != (void *)0x0) {
                                  FUN_00530690((void *)((int)pvVar23 + 0x11b4),
                                               (undefined4 *)(unaff_EBP - 0xd0),
                                               (uint *)(*(int *)(unaff_EBP - 0x2b54) + 8));
                                }
                                goto LAB_00547c9b;
                              }
                              uVar22 = puVar27[0x18];
                              if (((uVar22 == 0) && ((char)puVar27[0x17] == '\0')) ||
                                 (((uVar22 == 1 || (uVar22 == 4)) && ((char)puVar27[0x17] == '\0')))
                                 ) {
LAB_005477df:
                                if (uVar22 != 3) {
                                  uVar52 = *(uint *)(unaff_EBP - 0x2b58) & 0xff;
                                  if (uVar22 != 2) {
                                    uVar52 = 1;
                                  }
                                  *(uint *)(unaff_EBP - 0x2b58) = uVar52;
                                }
                                pvVar23 = *(void **)(unaff_EBP - 0x2b84);
                                if ((((char)puVar27[0x17] == '\0') && (uVar22 != 3)) &&
                                   ((uVar22 != 1 && ((uVar22 != 4 && (pvVar23 != (void *)0x0)))))) {
                                  iVar51 = rand();
                                  uVar22 = puVar27[0x18];
                                  fVar56 = (1.0 - ((float)iVar51 * 2.0) / 32767.0) * 0.05 + 0.1;
                                  *(float *)(unaff_EBP - 0x2b38) = fVar56;
                                  if (uVar22 == 2) {
                                    *(float *)(unaff_EBP - 0x2b38) = fVar56 * 0.2;
                                  }
                                  iVar51 = FUN_004084b0((int)pvVar23);
                                  *(float *)(unaff_EBP - 0x2b38) =
                                       ((float)iVar51 / 300.0) * *(float *)(unaff_EBP - 0x2b38);
                                  uVar22 = rand();
                                  uVar22 = uVar22 & 0x80000007;
                                  bVar5 = uVar22 == 0;
                                  if ((int)uVar22 < 0) {
                                    bVar5 = (uVar22 - 1 | 0xfffffff8) == 0xffffffff;
                                  }
                                  fVar56 = *(float *)(unaff_EBP - 0x2b38);
                                  if (bVar5) {
                                    fVar56 = fVar56 * 2.0;
                                  }
                                  if (((*(char *)(*(int *)(unaff_EBP - 0x2b18) + 0xb4) == '\0') ||
                                      (pvVar23 == *(void **)(*(int *)(unaff_EBP - 0x2b18) + 0xb8)))
                                     && (fVar56 = *(float *)((int)pvVar23 + 0x170) + fVar56,
                                        *(float *)((int)pvVar23 + 0x170) = fVar56, 1.0 < fVar56)) {
                                    *(undefined4 *)((int)pvVar23 + 0x170) = 0x3f800000;
                                  }
                                }
                                bVar5 = false;
                                *(undefined1 *)(unaff_EBP - 0x2b40) = 0;
                                if (pvVar23 != (void *)0x0) {
                                  bVar5 = FUN_0040f520((int)pvVar23);
                                  *(bool *)(unaff_EBP - 0x2b40) = bVar5;
                                }
                                fVar56 = (float)puVar27[0x12];
                                *(float *)(unaff_EBP - 0x2b78) = fVar56;
                                if (bVar5 != false) {
                                  fVar56 = fVar56 * 2.0;
                                  *(float *)(unaff_EBP - 0x2b78) = fVar56;
                                }
                                pvVar42 = *(void **)(unaff_EBP - 0x2b4c);
                                if ((pvVar42 != (void *)0x0) &&
                                   ((pvVar42 == *(void **)(*(int *)(unaff_EBP - 0x2b18) + 0xb8) ||
                                    ((*(char *)(*(int *)(unaff_EBP - 0x2b18) + 0xb4) == '\0' &&
                                     (*(char *)((int)pvVar42 + 0x60) != '\0')))))) {
                                  bVar5 = FUN_0040f220(pvVar42,0.15);
                                  pvVar42 = *(void **)(unaff_EBP - 0x2b4c);
                                  if (((bVar5) &&
                                      (((char)puVar27[0x17] == '\0' &&
                                       (*(char *)((int)pvVar42 + 0x140) == '\x02')))) &&
                                     (*(char *)((int)pvVar42 + 0x141) == '\x01')) {
                                    FUN_004029b0((undefined1 *)(unaff_EBP - 0x2f64));
                                    pvVar42 = *(void **)(unaff_EBP - 0x2b4c);
                                    *(undefined1 *)(unaff_EBP - 0x2f64) = 10;
                                    *(undefined4 *)(unaff_EBP - 0x2f5c) = 30000;
                                    FUN_00411740(pvVar42,(char *)(unaff_EBP - 0x2f64));
                                    FUN_004063d0(unaff_EBP - 0x240);
                                    uVar28 = *(undefined4 *)(*(int *)(unaff_EBP - 0x2b4c) + 8);
                                    uVar64 = *(undefined4 *)(*(int *)(unaff_EBP - 0x2b4c) + 0xc);
                                    *(undefined8 *)(unaff_EBP - 0x230) =
                                         *(undefined8 *)(unaff_EBP - 0x2f64);
                                    uVar1 = *(undefined8 *)(unaff_EBP - 0x2f5c);
                                    *(undefined4 *)(unaff_EBP - 0x23c) = uVar64;
                                    *(undefined4 *)(unaff_EBP - 0x234) = uVar64;
                                    iVar51 = *(int *)(unaff_EBP - 0x2b28);
                                    *(undefined4 *)(unaff_EBP - 0x240) = uVar28;
                                    *(undefined4 *)(unaff_EBP - 0x238) = uVar28;
                                    *(undefined8 *)(unaff_EBP - 0x228) = uVar1;
                                    *(undefined8 *)(unaff_EBP - 0x220) =
                                         *(undefined8 *)(unaff_EBP - 0x2f54);
                                    FUN_00411040((void *)(iVar51 + 0x58),
                                                 (undefined8 *)(unaff_EBP - 0x240));
                                    FUN_004c8530(unaff_EBP - 0x1ec);
                                    iVar51 = *(int *)(unaff_EBP - 0x2b4c);
                                    *(undefined4 *)(unaff_EBP - 0x1e0) = 0x2f;
                                    FUN_00402550((void *)(unaff_EBP - 0x1ec),
                                                 (longlong *)(iVar51 + 0x10));
                                    FUN_00428590((void *)(*(int *)(unaff_EBP - 0x2b28) + 8),
                                                 (undefined4 *)(unaff_EBP - 0x1ec));
                                    pvVar42 = *(void **)(unaff_EBP - 0x2b4c);
                                  }
                                  fVar56 = *(float *)(unaff_EBP - 0x2b78);
                                }
                                if (fVar56 < 0.0) {
                                  *(undefined4 *)(unaff_EBP - 0x2b78) = 0;
                                }
                                if ((char)puVar27[0x19] == '\x02') {
                                  if (((pvVar42 == (void *)0x0) ||
                                      (uVar28 = FUN_004cfcc0((int)pvVar42,
                                                             *(int *)(unaff_EBP - 0x2b54)),
                                      (char)uVar28 != '\0')) ||
                                     (*(char *)(*(int *)(unaff_EBP - 0x2b54) + 0x60) == '\x06')) {
                                    if ((char)puVar27[0x19] != '\x02') goto LAB_00547be8;
                                    goto LAB_00547c6a;
                                  }
                                  FUN_00422a90(unaff_EBP - 0xa28);
                                  FUN_00402a40((void *)(unaff_EBP - 0xa08),
                                               *(undefined4 **)(unaff_EBP - 0x2b68));
                                  fVar56 = *(float *)(unaff_EBP - 0x2b78);
                                  iVar51 = *(int *)(unaff_EBP - 0x2b4c);
                                  *(float *)(unaff_EBP - 0xa18) = -fVar56;
                                  if (*(char *)(iVar51 + 0x60) == '\x01') {
                                    *(float *)(unaff_EBP - 0xa18) = -fVar56 * 0.5;
                                  }
                                  iVar51 = *(int *)(unaff_EBP - 0x2b54);
                                  *(undefined1 *)(unaff_EBP - 0xa14) =
                                       *(undefined1 *)(unaff_EBP - 0x2b40);
                                  *(uint *)(unaff_EBP - 0xa28) = *puVar27;
                                  *(uint *)(unaff_EBP - 0xa24) = puVar27[1];
                                  *(undefined4 *)(unaff_EBP - 0xa20) = *(undefined4 *)(iVar51 + 8);
                                  pvVar42 = *(void **)(unaff_EBP - 0x2b28);
                                  *(undefined4 *)(unaff_EBP - 0xa1c) = *(undefined4 *)(iVar51 + 0xc)
                                  ;
                                  FUN_00428400(pvVar42,(undefined4 *)(unaff_EBP - 0xa28));
                                  pvVar42 = *(void **)(unaff_EBP - 0x2b18);
                                  if (*(char *)((int)pvVar42 + 0xb4) == '\0') {
LAB_00547bbe:
                                    FUN_004cea80(pvVar42,(uint *)(unaff_EBP - 0xa28),
                                                 *(void **)(unaff_EBP - 0x2b28),
                                                 (undefined4 *)(unaff_EBP - 0x2be8));
                                    goto LAB_00547c6a;
                                  }
                                  iVar51 = *(int *)(unaff_EBP - 0x2b54);
                                  if ((*(int *)(unaff_EBP - 0x2b4c) == *(int *)((int)pvVar42 + 0xb8)
                                      ) && (iVar51 == *(int *)((int)pvVar42 + 0xb8)))
                                  goto LAB_00547bbe;
                                }
                                else {
LAB_00547be8:
                                  cVar4 = '\x01';
                                  iVar51 = FUN_0052eb90((int *)(unaff_EBP - 0x2b50));
                                  puVar26 = (uint *)(unaff_EBP - 0x2be8);
                                  cVar4 = FUN_004cfd50(*(void **)(unaff_EBP - 0x2b18),
                                                       *(float *)(unaff_EBP - 0x2b54),pvVar23,
                                                       *(float *)(unaff_EBP - 0x2b78),
                                                       (char)*(undefined4 *)(unaff_EBP - 0x2b40),
                                                       (char)puVar27[0x17],(float)puVar27[0x15],
                                                       puVar27 + 6,(float *)(unaff_EBP - 0xb0),
                                                       *(undefined4 **)(unaff_EBP - 0x2b28),puVar26,
                                                       puVar27[0x18] == 1,0,iVar51,cVar4);
                                  uVar22 = *(uint *)(unaff_EBP - 0x2b64) & 0xff;
                                  if (cVar4 != '\0') {
                                    uVar22 = 1;
                                  }
                                  *(uint *)(unaff_EBP - 0x2b64) = uVar22;
LAB_00547c6a:
                                  iVar51 = *(int *)(unaff_EBP - 0x2b54);
                                }
                                if (*(int *)(iVar51 + 0x134) < (int)puVar27[0x1b]) {
                                  *(uint *)(iVar51 + 0x134) = puVar27[0x1b];
                                }
                              }
                              else {
                                if (uVar22 == 3) {
                                  uVar22 = puVar27[0x18];
                                  if ((int)puVar27[0x1a] / 1000 !=
                                      (int)(puVar27[0x1a] - *(int *)(unaff_EBP - 0x2b24)) / 1000)
                                  goto LAB_005477df;
                                  pvVar23 = *(void **)(unaff_EBP - 0x2b84);
                                }
                                if (((300 < (int)puVar27[0x1a]) && (uVar22 == 2)) &&
                                   ((int)puVar27[0x1a] / 100 !=
                                    (int)(puVar27[0x1a] - *(int *)(unaff_EBP - 0x2b24)) / 100)) {
                                  uVar22 = puVar27[0x18];
                                  goto LAB_005477df;
                                }
                              }
                              uVar22 = puVar27[0x18];
                              if (((uVar22 == 0) || (uVar22 == 1)) || (uVar22 == 4)) {
                                *(undefined1 *)(unaff_EBP - 0x2b58) = 1;
                                break;
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
                if (*(char *)(unaff_EBP - 0x2b58) != '\0') break;
              }
LAB_00547c9b:
              FUN_00407a30((void *)(unaff_EBP - 0x2bac),(int *)(unaff_EBP - 0x2c44));
              piVar25 = (int *)FUN_00530550(*(void **)(unaff_EBP - 0x2b6c),
                                            (undefined4 *)(unaff_EBP - 0x2d5c));
              bVar5 = FUN_0042c6f0((void *)(unaff_EBP - 0x2bac),piVar25);
            } while (bVar5);
          }
          if (puVar27[0x18] != 3) {
            if ((puVar27[0x18] == 2) &&
               ((int)puVar27[0x1a] / 200 !=
                (int)(puVar27[0x1a] - *(int *)(unaff_EBP - 0x2b24)) / 200)) {
              FUN_004c8530(unaff_EBP - 0x1d4);
              FUN_00402550((void *)(unaff_EBP - 0x1d4),(longlong *)(puVar27 + 6));
              iVar31 = rand();
              iVar51 = *(int *)(unaff_EBP - 0x2b28);
              *(undefined4 *)(unaff_EBP - 0x1c8) = 0xf;
              *(float *)(unaff_EBP - 0x1c4) = ((float)iVar31 * 0.25) / 32767.0 + 1.0;
              FUN_00428590((void *)(iVar51 + 8),(undefined4 *)(unaff_EBP - 0x1d4));
            }
            FUN_00402510(unaff_EBP - 0x368);
            puVar46 = puVar27 + 6;
            FUN_00402e30(puVar46,(uint *)(unaff_EBP - 0x368));
            uVar22 = puVar27[0x13];
            FUN_00401080((void *)(unaff_EBP - 0x16ac),uVar22,uVar22,uVar22);
            FUN_00402510(unaff_EBP - 0x458);
            FUN_00402c50(puVar46,(uint *)(unaff_EBP - 0x24fc),(uint *)(unaff_EBP - 0x458));
            uVar22 = puVar27[0x13];
            FUN_00401080((void *)(unaff_EBP - 0x16c4),uVar22,uVar22,uVar22);
            FUN_00402510(unaff_EBP - 0x4a0);
            FUN_00402cb0(puVar46,(uint *)(unaff_EBP - 0x252c),(uint *)(unaff_EBP - 0x4a0));
            *(undefined1 *)(unaff_EBP - 0x2b31) = 0;
            iVar51 = FUN_004e2320(puVar46,2);
            *(int *)(unaff_EBP - 0x2b38) = iVar51;
            iVar51 = FUN_004e2320(puVar46,1);
            *(int *)(unaff_EBP - 0x2b1c) = iVar51;
            puVar44 = (uint *)FUN_004e2320(puVar46,0);
            puVar43 = *(uint **)(unaff_EBP - 0x2b38);
            uVar22 = puVar43[1];
            *(uint **)(unaff_EBP - 0x2b44) = puVar44;
            puVar26 = (uint *)**(undefined4 **)(unaff_EBP - 0x2b1c);
            iVar51 = FUN_00406050(*(void **)(unaff_EBP - 0x2b18),*puVar44,puVar44[1],(uint)puVar26,
                                  (*(undefined4 **)(unaff_EBP - 0x2b1c))[1],*puVar43,uVar22,0);
            uVar28 = FUN_004061f0(iVar51);
            if ((char)uVar28 == '\0') {
              fVar55 = FUN_00401d80((float *)(puVar27 + 0xf));
              *(float *)(unaff_EBP - 0x2b44) = (float)fVar55;
              fVar56 = *(float *)(unaff_EBP - 0x2b44) * *(float *)(unaff_EBP - 0x2ba0);
              uVar60 = 0x100000000;
              pfVar33 = (float *)(unaff_EBP - 0x170c);
              *(float *)(unaff_EBP - 0x2b44) = fVar56;
              pfVar36 = FUN_00412670(puVar27 + 0xf,(float *)(unaff_EBP - 0x1724));
              pfVar33 = FUN_0052ec30(pfVar36,pfVar33);
              puVar26 = puVar46;
              fVar55 = (float10)FUN_004d6730(*(void **)(unaff_EBP - 0x2b18),puVar46,pfVar33,fVar56,
                                             (char)uVar60,(char)(uVar60 >> 0x20));
              *(float *)(unaff_EBP - 0x2b8c) = (float)fVar55;
              if (*(float *)(unaff_EBP - 0x2b8c) <= *(float *)(unaff_EBP - 0x2b44) &&
                  *(float *)(unaff_EBP - 0x2b44) != *(float *)(unaff_EBP - 0x2b8c)) {
                *(undefined1 *)(unaff_EBP - 0x2b31) = 1;
                FUN_00402510(unaff_EBP - 0x9b0);
                FUN_00402e80(puVar46,(uint *)(unaff_EBP - 0x9b0));
              }
LAB_00548093:
              cVar4 = *(char *)(unaff_EBP - 0x2b31);
            }
            else {
              FUN_00402510(unaff_EBP - 0x488);
              FUN_00402e80(puVar46,(uint *)(unaff_EBP - 0x488));
              uVar22 = puVar27[0x18];
              cVar4 = '\x01';
              *(undefined1 *)(unaff_EBP - 0x2b31) = 1;
              if (uVar22 == 0) {
                FUN_004c8510(unaff_EBP - 0x968);
                pfVar33 = (float *)(unaff_EBP - 0x2c0);
                fVar56 = 255.0;
                pbVar47 = (byte *)FUN_00406050(*(void **)(unaff_EBP - 0x2b18),
                                               **(uint **)(unaff_EBP - 0x2b44),
                                               (*(uint **)(unaff_EBP - 0x2b44))[1],
                                               **(uint **)(unaff_EBP - 0x2b1c),
                                               (*(uint **)(unaff_EBP - 0x2b1c))[1],
                                               **(uint **)(unaff_EBP - 0x2b38),
                                               (*(uint **)(unaff_EBP - 0x2b38))[1],0);
                pfVar36 = FUN_004c6470((void *)(unaff_EBP - 0x16dc),pbVar47);
                FUN_004f7a70(pfVar36,pfVar33,fVar56);
                uVar67 = 0x3f800000;
                puVar24 = (undefined4 *)FUN_004013d0((void *)(unaff_EBP - 0x2c0),2);
                uVar28 = *puVar24;
                puVar24 = (undefined4 *)FUN_004013d0((void *)(unaff_EBP - 0x2c0),1);
                uVar64 = *puVar24;
                puVar24 = (undefined4 *)FUN_004013d0((void *)(unaff_EBP - 0x2c0),0);
                puVar26 = (uint *)0x547f87;
                ppVar41 = (pair<unsigned___int64,unsigned___int64> *)
                          FUN_004010b0((void *)(unaff_EBP - 0x1b9c),*puVar24,uVar64,uVar28,uVar67);
                std::pair<unsigned___int64,unsigned___int64>::
                operator=<std::pair<unsigned___int64,unsigned___int64>,0>
                          ((pair<unsigned___int64,unsigned___int64> *)(unaff_EBP - 0x944),ppVar41);
                *(undefined4 *)(unaff_EBP - 0x930) = 4;
                *(undefined4 *)(unaff_EBP - 0x934) = 0x3dcccccd;
                puVar24 = FUN_00401080((void *)(unaff_EBP - 0x16f4),0,0,0x41200000);
                FUN_00401060((void *)(unaff_EBP - 0x950),puVar24);
                FUN_00402a40((void *)(unaff_EBP - 0x968),puVar46);
                FUN_00428540((void *)(*(int *)(unaff_EBP - 0x2b28) + 0x10),
                             (undefined4 *)(unaff_EBP - 0x968));
                goto LAB_00548093;
              }
            }
            cVar7 = (char)*(undefined4 *)(unaff_EBP - 0x2b58);
            pvVar23 = *(void **)(unaff_EBP - 0x2b84);
            if ((((cVar7 == '\0') && (cVar4 != '\0')) && (puVar27[0x18] != 3)) &&
               (pvVar23 != (void *)0x0)) {
              fVar55 = FUN_00412150((int)pvVar23);
              *(float *)(unaff_EBP - 0x2b44) = (float)fVar55;
              *(undefined4 *)((int)pvVar23 + 0x70) = 0;
              fVar55 = FUN_00412150((int)pvVar23);
              *(float *)(unaff_EBP - 0x2b8c) = (float)fVar55;
              *(int *)((int)pvVar23 + 0x6c) =
                   (int)((*(float *)(unaff_EBP - 0x2b44) / *(float *)(unaff_EBP - 0x2b8c)) *
                        (float)*(int *)((int)pvVar23 + 0x6c));
              cVar7 = (char)*(undefined4 *)(unaff_EBP - 0x2b58);
            }
            if (puVar27[0x18] == 2) {
              if (((char)*(undefined4 *)(unaff_EBP - 0x2b64) != '\0') && (pvVar23 != (void *)0x0)) {
                *(int *)((int)pvVar23 + 0x70) = *(int *)((int)pvVar23 + 0x70) + 1;
                FUN_004103a0((int)pvVar23);
                *(undefined4 *)((int)pvVar23 + 0x74) = 0;
              }
              if (*(char *)(unaff_EBP - 0x2b31) != '\0') {
                if (puVar27[0x18] != 2) {
                  FUN_004c8530(unaff_EBP - 0x1b0);
                  FUN_00402550((void *)(unaff_EBP - 0x1b0),(longlong *)(puVar27 + 6));
                  iVar31 = rand();
                  iVar51 = *(int *)(unaff_EBP - 0x2b28);
                  *(undefined4 *)(unaff_EBP - 0x1a4) = 0x13;
                  *(float *)(unaff_EBP - 0x1a0) = ((float)iVar31 * 0.4) / 32767.0 + 1.0;
                  FUN_00428590((void *)(iVar51 + 8),(undefined4 *)(unaff_EBP - 0x1b0));
                  goto LAB_00546b28;
                }
                puVar24 = FUN_00401080((void *)(unaff_EBP - 0x173c),0,0,0);
                FUN_00401060(puVar27 + 0xf,puVar24);
              }
            }
            else if ((cVar7 != '\0') || (*(char *)(unaff_EBP - 0x2b31) != '\0')) {
              if ((puVar27[0x18] == 1) || ((char)puVar27[0x17] != '\0')) {
                if (cVar7 == '\0') {
                  FUN_004c8530(unaff_EBP - 0x7c);
                  FUN_00402550((void *)(unaff_EBP - 0x7c),(longlong *)(puVar27 + 6));
                  iVar51 = rand();
                  uVar22 = puVar27[0x18];
                  *(float *)(unaff_EBP - 0x6c) = ((float)iVar51 * 0.4) / 32767.0 + 1.0;
                  if (uVar22 == 1) {
                    uVar28 = 0x27;
                    if ((char)puVar27[0x19] == '\x02') {
                      uVar28 = 0x2a;
                    }
                    *(undefined4 *)(unaff_EBP - 0x70) = uVar28;
                  }
                  else {
                    *(undefined4 *)(unaff_EBP - 0x70) = 0x14;
                  }
                  FUN_00428590((void *)(*(int *)(unaff_EBP - 0x2b28) + 8),
                               (undefined4 *)(unaff_EBP - 0x7c));
                }
                pvVar42 = *(void **)(unaff_EBP - 0x2b6c);
                *(char *)(unaff_EBP - 0x2bfc) = (char)puVar27[0x17];
                FUN_00428070(pvVar42,(undefined4 *)(unaff_EBP - 0x2bdc));
                piVar25 = (int *)FUN_00530550(*(void **)(unaff_EBP - 0x2b6c),
                                              (undefined4 *)(unaff_EBP - 0x2d64));
                bVar5 = FUN_0042c6f0((void *)(unaff_EBP - 0x2bdc),piVar25);
                if (bVar5) {
                  iVar51 = FUN_004e2320(puVar27 + 6,0);
                  *(int *)(unaff_EBP - 0x2b48) = iVar51;
                  iVar51 = FUN_004e2320(puVar27 + 6,1);
                  *(int *)(unaff_EBP - 0x2bb8) = iVar51;
                  iVar51 = FUN_004e2320(puVar27 + 6,2);
                  *(int *)(unaff_EBP - 0x2b98) = iVar51;
                  do {
                    iVar51 = FUN_00402bc0((int *)(unaff_EBP - 0x2bdc));
                    pvVar42 = *(void **)(iVar51 + 8);
                    *(void **)(unaff_EBP - 0x2b68) = pvVar42;
                    if (pvVar42 != (void *)0x0) {
                      iVar51 = *(int *)(unaff_EBP - 0x2b4c);
                      if (((iVar51 != 0) && (*(char *)(*(int *)(unaff_EBP - 0x2b18) + 0xb4) == '\0')
                          ) && ((*(char *)(iVar51 + 0x60) == '\0' &&
                                (iVar51 != *(int *)(*(int *)(unaff_EBP - 0x2b18) + 0xb8))))) break;
                      if ((pvVar23 == (void *)0x0) ||
                         (((pvVar42 != pvVar23 &&
                           (uVar28 = FUN_004d18c0((int)pvVar23,(int)pvVar42), (char)uVar28 != '\0'))
                          && (((pvVar42 = *(void **)(unaff_EBP - 0x2b68),
                               *(int *)((int)pvVar42 + 8) != *(int *)((int)pvVar23 + 0x11c0) ||
                               (*(int *)((int)pvVar42 + 0xc) != *(int *)((int)pvVar23 + 0x11c4))) &&
                              (0.0 < *(float *)((int)pvVar42 + 0x16c))))))) {
                        *(void **)(unaff_EBP - 0x2b38) = (void *)((int)pvVar42 + 0x80);
                        iVar51 = FUN_004013d0((void *)((int)pvVar42 + 0x80),0);
                        *(int *)(unaff_EBP - 0x2b1c) = iVar51;
                        pvVar42 = (void *)(*(int *)(unaff_EBP - 0x2b68) + 0x10);
                        *(void **)(unaff_EBP - 0x2b94) = pvVar42;
                        pvVar42 = (void *)FUN_004e2320(pvVar42,0);
                        *(void **)(unaff_EBP - 0x2b44) = pvVar42;
                        puVar46 = (uint *)FUN_004014b0(pvVar42,(int *)(unaff_EBP - 0x36a4));
                        pvVar42 = (void *)FUN_00401530(*(void **)(unaff_EBP - 0x2b48),
                                                       (int *)(unaff_EBP - 0x3214));
                        uVar22 = FUN_004ce380(pvVar42,puVar46);
                        if ((char)uVar22 != '\0') {
                          iVar51 = FUN_004013d0(*(void **)(unaff_EBP - 0x2b38),1);
                          pvVar42 = *(void **)(unaff_EBP - 0x2b94);
                          *(int *)(unaff_EBP - 0x2b90) = iVar51;
                          pvVar42 = (void *)FUN_004e2320(pvVar42,1);
                          *(void **)(unaff_EBP - 0x2b8c) = pvVar42;
                          puVar46 = (uint *)FUN_004014b0(pvVar42,(int *)(unaff_EBP - 0x34b4));
                          pvVar42 = (void *)FUN_00401530(*(void **)(unaff_EBP - 0x2bb8),
                                                         (int *)(unaff_EBP - 0x3224));
                          uVar22 = FUN_004ce380(pvVar42,puVar46);
                          if ((char)uVar22 != '\0') {
                            iVar51 = FUN_004013d0(*(void **)(unaff_EBP - 0x2b38),2);
                            pvVar42 = *(void **)(unaff_EBP - 0x2b94);
                            *(int *)(unaff_EBP - 0x2b38) = iVar51;
                            pvVar42 = (void *)FUN_004e2320(pvVar42,2);
                            *(void **)(unaff_EBP - 0x2bcc) = pvVar42;
                            puVar46 = (uint *)FUN_004014b0(pvVar42,(int *)(unaff_EBP - 0x3604));
                            pvVar42 = (void *)FUN_00401530(*(void **)(unaff_EBP - 0x2b98),
                                                           (int *)(unaff_EBP - 0x3234));
                            uVar22 = FUN_004ce380(pvVar42,puVar46);
                            if ((char)uVar22 != '\0') {
                              puVar46 = (uint *)FUN_00401530(*(void **)(unaff_EBP - 0x2b44),
                                                             (int *)(unaff_EBP - 0x34c4));
                              pvVar42 = (void *)FUN_004014b0(*(void **)(unaff_EBP - 0x2b48),
                                                             (int *)(unaff_EBP - 0x3244));
                              uVar22 = FUN_004ce350(pvVar42,puVar46);
                              if ((char)uVar22 != '\0') {
                                puVar46 = (uint *)FUN_00401530(*(void **)(unaff_EBP - 0x2b8c),
                                                               (int *)(unaff_EBP - 0x3724));
                                pvVar42 = (void *)FUN_004014b0(*(void **)(unaff_EBP - 0x2bb8),
                                                               (int *)(unaff_EBP - 0x3254));
                                uVar22 = FUN_004ce350(pvVar42,puVar46);
                                if ((char)uVar22 != '\0') {
                                  puVar46 = (uint *)FUN_00401530(*(void **)(unaff_EBP - 0x2bcc),
                                                                 (int *)(unaff_EBP - 0x34d4));
                                  pvVar42 = (void *)FUN_004014b0(*(void **)(unaff_EBP - 0x2b98),
                                                                 (int *)(unaff_EBP - 0x3264));
                                  uVar22 = FUN_004ce350(pvVar42,puVar46);
                                  if ((char)uVar22 != '\0') {
                                    puVar26 = (uint *)0x548637;
                                    cVar4 = FUN_004d4d80(puVar27 + 6,*(uint **)(unaff_EBP - 0x2b94),
                                                         '\x01',200.0);
                                    if (cVar4 != '\0') {
                                      if ((*(int *)(*(int *)(unaff_EBP - 0x2b68) + 0x128) == 0) ||
                                         (pvVar23 == (void *)0x0)) {
                                        iVar51 = *(int *)(unaff_EBP - 0x2b4c);
                                        uVar22 = extraout_ECX & 0xffffff00;
                                        *(undefined1 *)(unaff_EBP - 0x2c00) = 0;
                                        *(uint *)(unaff_EBP - 0x2b44) = uVar22;
                                        pvVar42 = (void *)0x0;
                                        if (iVar51 != 0) {
                                          bVar5 = FUN_0040f520(iVar51);
                                          uVar22 = *(uint *)(unaff_EBP - 0x2b44) & 0xff;
                                          if (bVar5) {
                                            uVar22 = 1;
                                          }
                                          pvVar42 = *(void **)(unaff_EBP - 0x2b4c);
                                          *(char *)(unaff_EBP - 0x2c00) = (char)uVar22;
                                        }
                                        fVar56 = (float)puVar27[0x12];
                                        *(float *)(unaff_EBP - 0x2b38) = fVar56;
                                        if ((char)uVar22 != '\0') {
                                          *(float *)(unaff_EBP - 0x2b38) = fVar56 * 2.0;
                                        }
                                        if ((((pvVar42 != (void *)0x0) &&
                                             ((pvVar42 ==
                                               *(void **)(*(int *)(unaff_EBP - 0x2b18) + 0xb8) ||
                                              ((*(char *)(*(int *)(unaff_EBP - 0x2b18) + 0xb4) ==
                                                '\0' && (*(char *)((int)pvVar42 + 0x60) != '\0')))))
                                             ) && (bVar5 = FUN_0040f220(pvVar42,0.25), bVar5)) &&
                                           (((*(char *)(unaff_EBP - 0x2bfc) == '\0' &&
                                             (puVar27[0x18] == 1)) &&
                                            ((char)puVar27[0x19] == '\x01')))) {
                                          FUN_004029b0((undefined1 *)(unaff_EBP - 0x2f7c));
                                          pvVar42 = *(void **)(unaff_EBP - 0x2b4c);
                                          *(undefined1 *)(unaff_EBP - 0x2f7c) = 9;
                                          *(undefined4 *)(unaff_EBP - 0x2f74) = 30000;
                                          FUN_00411740(pvVar42,(char *)(unaff_EBP - 0x2f7c));
                                          FUN_004063d0(unaff_EBP - 0x2e6c);
                                          uVar28 = *(undefined4 *)(*(int *)(unaff_EBP - 0x2b4c) + 8)
                                          ;
                                          uVar64 = *(undefined4 *)
                                                    (*(int *)(unaff_EBP - 0x2b4c) + 0xc);
                                          *(undefined8 *)(unaff_EBP - 0x2e5c) =
                                               *(undefined8 *)(unaff_EBP - 0x2f7c);
                                          uVar1 = *(undefined8 *)(unaff_EBP - 0x2f74);
                                          *(undefined4 *)(unaff_EBP - 0x2e68) = uVar64;
                                          *(undefined4 *)(unaff_EBP - 0x2e60) = uVar64;
                                          iVar51 = *(int *)(unaff_EBP - 0x2b28);
                                          *(undefined4 *)(unaff_EBP - 0x2e6c) = uVar28;
                                          *(undefined4 *)(unaff_EBP - 0x2e64) = uVar28;
                                          *(undefined8 *)(unaff_EBP - 0x2e54) = uVar1;
                                          *(undefined8 *)(unaff_EBP - 0x2e4c) =
                                               *(undefined8 *)(unaff_EBP - 0x2f6c);
                                          FUN_00411040((void *)(iVar51 + 0x58),
                                                       (undefined8 *)(unaff_EBP - 0x2e6c));
                                          FUN_004c8530(unaff_EBP - 0x204);
                                          iVar51 = *(int *)(unaff_EBP - 0x2b4c);
                                          *(undefined4 *)(unaff_EBP - 0x1f8) = 0x2f;
                                          FUN_00402550((void *)(unaff_EBP - 0x204),
                                                       (longlong *)(iVar51 + 0x10));
                                          FUN_00428590((void *)(*(int *)(unaff_EBP - 0x2b28) + 8),
                                                       (undefined4 *)(unaff_EBP - 0x204));
                                        }
                                        cVar4 = '\x01';
                                        iVar51 = FUN_0052eb90((int *)(unaff_EBP - 0x2b50));
                                        puVar26 = (uint *)(unaff_EBP - 0x2be8);
                                        cVar4 = FUN_004cfd50(*(void **)(unaff_EBP - 0x2b18),
                                                             *(float *)(unaff_EBP - 0x2b68),pvVar23,
                                                             *(float *)(unaff_EBP - 0x2b38),
                                                             (char)*(undefined4 *)
                                                                    (unaff_EBP - 0x2c00),
                                                             (char)*(undefined4 *)
                                                                    (unaff_EBP - 0x2bfc),
                                                             (float)puVar27[0x15],puVar27 + 6,
                                                             (float *)(unaff_EBP - 0xb0),
                                                             *(undefined4 **)(unaff_EBP - 0x2b28),
                                                             puVar26,puVar27[0x18] == 1,0,iVar51,
                                                             cVar4);
                                        uVar3 = (undefined1)*(undefined4 *)(unaff_EBP - 0x2b64);
                                        if (cVar4 != '\0') {
                                          uVar3 = 1;
                                        }
                                        *(undefined1 *)(unaff_EBP - 0x2b64) = uVar3;
                                      }
                                      else {
                                        FUN_00530690((void *)((int)pvVar23 + 0x11b4),
                                                     (undefined4 *)(unaff_EBP - 0x3074),
                                                     (uint *)(*(int *)(unaff_EBP - 0x2b68) + 8));
                                      }
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                    FUN_00407a30((void *)(unaff_EBP - 0x2bdc),(int *)(unaff_EBP - 0x2ce0));
                    piVar25 = (int *)FUN_00530550(*(void **)(unaff_EBP - 0x2b6c),
                                                  (undefined4 *)(unaff_EBP - 0x2d64));
                    bVar5 = FUN_0042c6f0((void *)(unaff_EBP - 0x2bdc),piVar25);
                  } while (bVar5);
                }
              }
              if ((((char)*(undefined4 *)(unaff_EBP - 0x2b64) != '\0') && (puVar27[0x18] != 3)) &&
                 (pvVar23 != (void *)0x0)) {
                *(int *)((int)pvVar23 + 0x70) = *(int *)((int)pvVar23 + 0x70) + 1;
                FUN_004103a0((int)pvVar23);
                *(undefined4 *)((int)pvVar23 + 0x74) = 0;
              }
              if ((puVar27[0x18] != 1) || ((char)puVar27[0x19] != '\x02')) goto LAB_00546b28;
              puVar27[0x18] = 3;
              uVar22 = 3000;
              if ((char)puVar27[0x17] != '\0') {
                uVar22 = 0;
              }
              puVar27[0x1a] = uVar22;
              puVar27[0x12] = (uint)((float)puVar27[0x12] * 0.05);
              puVar27[0x13] = (uint)((float)puVar27[0x15] * 5.0 + 5.0);
              puVar27[0x15] = 0;
              *(undefined1 *)(puVar27 + 0x17) = 0;
              break;
            }
          }
          iVar51 = *(int *)(unaff_EBP - 0x2c04) + 1;
          *(int *)(unaff_EBP - 0x2c04) = iVar51;
          if (*(int *)(unaff_EBP - 0x2c08) <= iVar51) break;
          pvVar23 = *(void **)(unaff_EBP - 0x2b84);
        } while( true );
      }
    }
    else {
      if (puVar27[0x18] != 2) {
        pfVar33 = (float *)FUN_004013d0(puVar27 + 0xf,2);
        *pfVar33 = *pfVar33 - *(float *)(unaff_EBP - 0x2ba0) * 30.0 * 0.25;
        goto LAB_00546a5d;
      }
      uVar52 = 0x5468ae;
      puVar46 = puVar27;
      uVar22 = FUN_00405420(*(void **)(unaff_EBP - 0x2b18),puVar27);
      *(uint *)(unaff_EBP - 0x2b8c) = uVar22;
      if ((uVar22 != 0) && (uVar48 = puVar27[0x1a], (int)uVar48 < 0x4b1)) {
        if ((int)uVar48 < 0x44d) {
          if ((int)uVar48 < 0x321) {
            FUN_00402510(unaff_EBP - 0x344);
            pfVar33 = (float *)(unaff_EBP - 0x167c);
            iVar51 = *(int *)(unaff_EBP - 0x2b24);
            fVar59 = 0.05;
            fVar56 = 5.0;
            puVar26 = puVar27 + 6;
            puVar46 = (uint *)(unaff_EBP - 0x249c);
            puVar43 = FUN_00402cb0((void *)(uVar22 + 0x10),(uint *)(unaff_EBP - 0x24cc),
                                   (uint *)(unaff_EBP - 0x344));
            puVar26 = FUN_00402c50(puVar43,puVar46,puVar26);
            pfVar36 = FUN_00402550((void *)(unaff_EBP - 0x1694),(longlong *)puVar26);
            puVar37 = (undefined8 *)FUN_004079f0(pfVar36,pfVar33,fVar56);
            puVar26 = (uint *)0x546a2a;
            FUN_0052e7c0((float *)(puVar27 + 0xf),puVar37,iVar51,fVar59);
          }
          else {
            pfVar33 = (float *)(unaff_EBP - 0x164c);
            fVar56 = 10.0;
            puVar26 = (uint *)0x546995;
            puVar46 = FUN_00402c50((void *)(uVar22 + 0x10),(uint *)(unaff_EBP - 0x246c),puVar27 + 6)
            ;
            pfVar36 = FUN_00402550((void *)(unaff_EBP - 0x1664),(longlong *)puVar46);
            puVar24 = (undefined4 *)FUN_004079f0(pfVar36,pfVar33,fVar56);
            FUN_00401060(puVar27 + 0xf,puVar24);
          }
        }
        else {
          *(float *)(unaff_EBP - 0x2b44) = (float)(int)(uVar48 - 0x44c) / 100.0;
          puVar43 = puVar27 + 6;
          iVar51 = 0x546906;
          FUN_00402a10((ulonglong *)&stack0xfffffff8);
          puVar24 = (undefined4 *)(unaff_EBP - 0x23ac);
          FUN_00402a10((ulonglong *)&stack0xffffffec);
          puVar45 = (undefined4 *)(unaff_EBP - 0x23dc);
          puVar44 = FUN_00402c50((void *)(*(int *)(unaff_EBP - 0x2b8c) + 0x10),
                                 (uint *)(unaff_EBP - 0x240c),puVar43);
          puVar45 = FUN_00402bd0(puVar44,puVar45,(uint)puVar26,iVar51);
          puVar46 = FUN_00402bd0(puVar45,puVar24,uVar52,(int)puVar46);
          puVar46 = FUN_00402cb0(puVar43,(uint *)(unaff_EBP - 0x243c),puVar46);
          FUN_00402a40(puVar43,puVar46);
        }
        goto LAB_00546a5d;
      }
LAB_00546b28:
      FUN_004d6620((void *)(unaff_EBP - 0x2c20),(undefined4 *)(unaff_EBP - 0x2b50));
    }
    FUN_0052ebf0((void *)(unaff_EBP - 0x2b50),(undefined4 *)(unaff_EBP - 0x2bc0));
    pvVar23 = (void *)(*(int *)(unaff_EBP - 0x2b18) + 0x14);
    piVar25 = (int *)FUN_00530550(pvVar23,(undefined4 *)(unaff_EBP - 0x2d6c));
    bVar5 = FUN_0042c6f0((void *)(unaff_EBP - 0x2b50),piVar25);
  } while( true );
code_r0x005378a1:
  iVar31 = *(int *)(unaff_EBP - 0x2b18);
  if ((*(char *)(iVar51 + 0x60) != '\0') && (*(char *)(iVar31 + 0xb4) == '\0')) {
    *(int *)(iVar51 + 0x13c4) = *(int *)(iVar51 + 0x13c4) + *(int *)(unaff_EBP - 0x2b24);
    if (*(int *)(iVar51 + 300) < 1) {
      if (0x1f < *(int *)(iVar51 + 0x13c4)) {
        if (*(int *)(iVar51 + 0x13e4) != 0) {
          pfVar36 = *(float **)(unaff_EBP - 0x2b14);
          (**(code **)**(undefined4 **)(iVar51 + 0x13e4))();
          iVar51 = *(int *)(unaff_EBP - 0x2b14);
        }
        *(undefined4 *)(iVar51 + 0x13c4) = 0;
      }
      if (0 < *(int *)(iVar51 + 300)) goto LAB_00537920;
    }
    else {
LAB_00537920:
      FUN_00405570((void *)(iVar51 + 0x10),0x80,'\0');
      iVar51 = *(int *)(unaff_EBP - 0x2b14);
    }
    iVar31 = *(int *)(unaff_EBP - 0x2b18);
  }
  if (*(int *)(iVar51 + 100) == 0x90) {
    if (*(char *)(iVar31 + 0xb4) == '\0') {
      fVar56 = *(float *)(iVar51 + 0x16c) - *(float *)(unaff_EBP - 0x2b88) * 0.025;
      *(float *)(iVar51 + 0x16c) = fVar56;
      if (fVar56 < 0.0) {
        *(undefined4 *)(iVar51 + 0x16c) = 0;
      }
      goto LAB_00537987;
    }
LAB_00537ac7:
    pvVar23 = *(void **)(unaff_EBP - 0x2b18);
  }
  else {
LAB_00537987:
    if (*(char *)(iVar31 + 0xb4) != '\0') goto LAB_00537ac7;
    puVar26 = (uint *)(iVar51 + 0x10);
    FUN_00405570(puVar26,0x80,'\0');
    piVar25 = (int *)(*(int *)(unaff_EBP - 0x2b14) + 0x1460);
    bVar5 = FUN_00530540((int)piVar25);
    iVar51 = *(int *)(unaff_EBP - 0x2b14);
    if (bVar5) goto LAB_00537ac7;
    if (*(int *)(iVar51 + 300) < 1) {
      FUN_00405570(puVar26,4,'\0');
      cVar4 = FUN_004db200(*(void **)(unaff_EBP - 0x2b14),*(int *)(unaff_EBP - 0x2b24));
      if (cVar4 == '\0') {
        bVar5 = FUN_00530540((int)piVar25);
        if (!bVar5) {
          uVar28 = 0x537a17;
          FUN_00405570(puVar26,4,'\x01');
          puVar27 = (uint *)(unaff_EBP - 0x2364);
          uVar61 = 0x3fe0000000000000;
          puVar43 = puVar26;
          FUN_004dab30((ulonglong *)&stack0xfffffff0);
          uVar60 = 0x3fe0000000000000;
          FUN_004dab30((ulonglong *)&stack0xffffffe8);
          FUN_004dab30((ulonglong *)&stack0xffffffe0);
          puVar44 = FUN_00406380((void *)(unaff_EBP - 0x2004),(int)uVar60,(int)(uVar60 >> 0x20),
                                 (int)uVar61,(int)(uVar61 >> 0x20),pfVar36,uVar28);
          puVar46 = (uint *)(unaff_EBP - 0x2604);
          puVar10 = (uint *)FUN_0052eba0(piVar25);
          piVar25 = FUN_004d99d0((void *)(unaff_EBP - 0x2034),puVar10);
          puVar46 = FUN_00402cb0(piVar25,puVar46,puVar44);
          puVar27 = FUN_00402c50(puVar46,puVar27,puVar43);
          FUN_00402550((void *)(*(int *)(unaff_EBP - 0x2b14) + 0x160),(longlong *)puVar27);
        }
        FUN_00405570(puVar26,0x80,'\x01');
        iVar51 = *(int *)(unaff_EBP - 0x2b14);
        goto LAB_00537ac7;
      }
      pvVar23 = *(void **)(unaff_EBP - 0x2b18);
      FUN_004dafe0(*(void **)(unaff_EBP - 0x2b14));
      iVar51 = *(int *)(unaff_EBP - 0x2b14);
    }
    else {
      pvVar23 = *(void **)(unaff_EBP - 0x2b18);
      iVar51 = *(int *)(unaff_EBP - 0x2b14);
    }
  }
  iVar54 = *(int *)(unaff_EBP - 0x2b24);
  *(int *)(iVar51 + 0x130) = *(int *)(iVar51 + 0x130) - iVar54;
  iVar31 = *(int *)(iVar51 + 0x130);
  if (0 < iVar31) {
    iVar31 = FUN_004084b0(iVar51);
    iVar51 = *(int *)(unaff_EBP - 0x2b14);
    iVar54 = *(int *)(unaff_EBP - 0x2b24);
    *(int *)(iVar51 + 0x6c) = iVar31 + 1;
    iVar31 = *(int *)(iVar51 + 0x130);
  }
  if (iVar31 < 0) {
    *(undefined4 *)(iVar51 + 0x130) = 0;
  }
  piVar25 = (int *)(iVar51 + 0x134);
  *piVar25 = *piVar25 - iVar54;
  uVar28 = *(undefined4 *)(iVar51 + 0x134);
  if (*piVar25 < 0) {
    uVar28 = 0;
  }
  iVar51 = *(int *)(unaff_EBP - 0x2b14);
  *(undefined4 *)(iVar51 + 0x134) = uVar28;
  piVar25 = (int *)(iVar51 + 0x138);
  *piVar25 = *piVar25 - iVar54;
  uVar28 = *(undefined4 *)(iVar51 + 0x138);
  if (*piVar25 < 0) {
    uVar28 = 0;
  }
  iVar51 = *(int *)(unaff_EBP - 0x2b14);
  *(undefined4 *)(iVar51 + 0x138) = uVar28;
  if ((*(float *)(iVar51 + 0x13c) < 0.0) &&
     (fVar56 = *(float *)(unaff_EBP - 0x2ba0) / 180.0 + *(float *)(iVar51 + 0x13c),
     *(float *)(iVar51 + 0x13c) = fVar56, 0.0 < fVar56)) {
    *(undefined4 *)(iVar51 + 0x13c) = 0;
  }
  cVar4 = *(char *)(iVar51 + 0x68);
  switch(cVar4) {
  case '\x01':
  case '\x02':
  case '\x03':
  case '\x04':
  case '\x05':
  case '\x06':
  case '\a':
  case '\t':
  case '\n':
  case '\v':
  case '\f':
  case '\r':
  case '\x0e':
  case '\x0f':
  case '\x10':
  case '\x11':
  case '\x12':
  case '\x13':
  case '\x14':
  case '\x15':
  case '\x1e':
  case '\x1f':
  case ' ':
  case '!':
  case '3':
  case '6':
  case '9':
  case ':':
  case '<':
  case '=':
  case '>':
  case 'A':
  case 'B':
  case 'C':
  case 'D':
  case 'E':
  case 'F':
  case 'H':
  case 'J':
  case 'K':
  case 'L':
  case 'M':
  case 'N':
  case 'V':
  case 'W':
  case 'X':
  case '[':
  case ']':
  case 'h':
    pvVar42 = *(void **)(unaff_EBP - 0x2b14);
    if (((*(char *)((int)pvVar23 + 0xb4) == '\0') && (*(char *)((int)pvVar42 + 0x60) == '\0')) &&
       (pvVar42 != *(void **)((int)pvVar23 + 0xb8))) break;
    if ((((*(char *)((int)pvVar42 + 0x140) == '\x04') && (*(char *)((int)pvVar42 + 0x141) == '\x01')
         ) && ((cVar4 == '\x11' || ((cVar4 == '\x05' || (cVar4 == '\x14')))))) &&
       (*(int *)((int)pvVar42 + 0x6c) == 0)) {
      *(undefined4 *)((int)pvVar42 + 0x128) = 600;
    }
    iVar51 = FUN_00407db0(pvVar42,0xffffffff);
    pvVar23 = *(void **)(unaff_EBP - 0x2b14);
    cVar4 = *(char *)((int)pvVar23 + 0x68);
    if ((cVar4 == 'W') || (cVar4 == 'X')) {
      iVar31 = *(int *)((int)pvVar23 + 0x6c);
      iVar54 = FUN_00407db0(pvVar23,0xffffffff);
      pcVar50 = rand_exref;
      if ((iVar31 < iVar54) && (iVar31 / 200 != (iVar31 + *(int *)(unaff_EBP - 0x2b24)) / 200)) {
        FUN_004c8530(unaff_EBP - 0x6f8);
        FUN_00402550((void *)(unaff_EBP - 0x6f8),(longlong *)(*(int *)(unaff_EBP - 0x2b14) + 0x10));
        pcVar50 = rand_exref;
        iVar54 = rand();
        iVar31 = *(int *)(unaff_EBP - 0x2b28);
        *(undefined4 *)(unaff_EBP - 0x6ec) = 0x24;
        *(float *)(unaff_EBP - 0x6e8) = ((float)iVar54 * 0.25) / 32767.0 + 1.0;
        FUN_00428590((void *)(iVar31 + 8),(undefined4 *)(unaff_EBP - 0x6f8));
      }
      iVar54 = FUN_00407db0(*(void **)(unaff_EBP - 0x2b14),0xffffffff);
      iVar31 = *(int *)(unaff_EBP - 0x2b24);
      if (*(int *)(*(int *)(unaff_EBP - 0x2b14) + 0x6c) - iVar31 < iVar54) {
        iVar31 = FUN_00407db0(*(void **)(unaff_EBP - 0x2b14),0xffffffff);
        if (*(int *)(*(int *)(unaff_EBP - 0x2b14) + 0x6c) < iVar31) goto LAB_0053824a;
        FUN_004c8510(unaff_EBP - 0xf90);
        plVar32 = (longlong *)(*(int *)(unaff_EBP - 0x2b14) + 0x10);
        FUN_00402a40((void *)(unaff_EBP - 0xf90),(undefined4 *)plVar32);
        *(undefined4 *)(unaff_EBP - 0xf5c) = 0x3e800000;
        *(undefined4 *)(unaff_EBP - 0xf54) = 1;
        *(undefined4 *)(unaff_EBP - 0xf50) = 0x41a00000;
        puVar24 = FUN_00401080((void *)(unaff_EBP - 0x1658),0,0,0x40000000);
        FUN_00401060((void *)(unaff_EBP - 0xf78),puVar24);
        *(undefined4 *)(unaff_EBP - 0xf58) = 0x50;
        FUN_004c8530(unaff_EBP - 0x8a8);
        FUN_00402550((void *)(unaff_EBP - 0x8a8),plVar32);
        iVar31 = *(int *)(unaff_EBP - 0x2b28);
        *(undefined4 *)(unaff_EBP - 0x898) = 0x3f800000;
        *(undefined4 *)(unaff_EBP - 0x89c) = 0x51;
        FUN_00428590((void *)(iVar31 + 8),(undefined4 *)(unaff_EBP - 0x8a8));
        puVar24 = (undefined4 *)(unaff_EBP - 0xf90);
LAB_00538498:
        FUN_00428540((void *)(iVar31 + 0x10),puVar24);
LAB_005384a1:
        pvVar23 = *(void **)(unaff_EBP - 0x2b14);
        pcVar50 = rand_exref;
        goto LAB_005384ad;
      }
      pvVar23 = *(void **)(unaff_EBP - 0x2b14);
    }
    else {
      if ((((cVar4 == '\x1e') || (cVar4 == '\x1f')) || (cVar4 == ' ')) || (cVar4 == '!')) {
        iVar31 = *(int *)((int)pvVar23 + 0x6c);
        iVar54 = FUN_00407db0(pvVar23,0xffffffff);
        pcVar50 = rand_exref;
        if ((iVar31 < iVar54) && (iVar31 / 200 != (iVar31 + *(int *)(unaff_EBP - 0x2b24)) / 200)) {
          FUN_004c8530(unaff_EBP - 0x6c8);
          FUN_00402550((void *)(unaff_EBP - 0x6c8),(longlong *)(*(int *)(unaff_EBP - 0x2b14) + 0x10)
                      );
          pcVar50 = rand_exref;
          iVar54 = rand();
          iVar31 = *(int *)(unaff_EBP - 0x2b28);
          *(undefined4 *)(unaff_EBP - 0x6bc) = 0x24;
          *(float *)(unaff_EBP - 0x6b8) = ((float)iVar54 * 0.25) / 32767.0 + 1.0;
          FUN_00428590((void *)(iVar31 + 8),(undefined4 *)(unaff_EBP - 0x6c8));
        }
        iVar31 = FUN_00407db0(*(void **)(unaff_EBP - 0x2b14),0xffffffff);
        if (*(int *)((int)*(void **)(unaff_EBP - 0x2b14) + 0x6c) < iVar31) {
          iVar9 = FUN_00407db0(*(void **)(unaff_EBP - 0x2b14),0xffffffff);
          iVar54 = *(int *)(unaff_EBP - 0x2b14);
          iVar31 = *(int *)(unaff_EBP - 0x2b24);
          if (iVar9 <= *(int *)(iVar54 + 0x6c) + iVar31) {
            FUN_004c8510(unaff_EBP - 0xce0);
            FUN_00402510(unaff_EBP - 0x1898);
            plVar32 = (longlong *)(iVar54 + 0x10);
            puVar26 = FUN_00402cb0(plVar32,(uint *)(unaff_EBP - 0x2394),(uint *)(unaff_EBP - 0x1898)
                                  );
            FUN_00402a40((void *)(unaff_EBP - 0xce0),puVar26);
            iVar31 = *(int *)(unaff_EBP - 0x2b14);
            *(undefined4 *)(unaff_EBP - 0xcac) = 0x3e800000;
            if (*(char *)(iVar31 + 0x141) == '\x01') {
              *(undefined4 *)(unaff_EBP - 0xca4) = 2;
              ppVar41 = (pair<unsigned___int64,unsigned___int64> *)
                        FUN_004010b0((void *)(unaff_EBP - 0x1c1c),0,0x3e4ccccd,0x3f800000,0x3f800000
                                    );
              std::pair<unsigned___int64,unsigned___int64>::
              operator=<std::pair<unsigned___int64,unsigned___int64>,0>
                        ((pair<unsigned___int64,unsigned___int64> *)(unaff_EBP - 0xcbc),ppVar41);
            }
            else {
              *(undefined4 *)(unaff_EBP - 0xca4) = 1;
            }
            *(undefined4 *)(unaff_EBP - 0xca0) = 0x41000000;
            puVar24 = FUN_00401080((void *)(unaff_EBP - 0x12b0),0,0,0x40000000);
            FUN_00401060((void *)(unaff_EBP - 0xcc8),puVar24);
            *(undefined4 *)(unaff_EBP - 0xca8) = 0x14;
            FUN_004c8530(unaff_EBP - 0x818);
            FUN_00402550((void *)(unaff_EBP - 0x818),plVar32);
            iVar31 = *(int *)(unaff_EBP - 0x2b28);
            uVar28 = 0x26;
            if (*(char *)(*(int *)(unaff_EBP - 0x2b14) + 0x141) == '\x01') {
              uVar28 = 0x29;
            }
            *(undefined4 *)(unaff_EBP - 0x80c) = uVar28;
            *(undefined4 *)(unaff_EBP - 0x808) = 0x3f800000;
            FUN_00428590((void *)(iVar31 + 8),(undefined4 *)(unaff_EBP - 0x818));
            puVar24 = (undefined4 *)(unaff_EBP - 0xce0);
            goto LAB_00538498;
          }
          pvVar23 = *(void **)(unaff_EBP - 0x2b14);
          pcVar50 = rand_exref;
          goto LAB_005384b3;
        }
LAB_0053824a:
        pvVar23 = *(void **)(unaff_EBP - 0x2b14);
      }
      else {
        pcVar50 = rand_exref;
        if (*(int *)((int)pvVar23 + 0x6c) == 0) {
          cVar4 = FUN_0040f2b0((int)pvVar23);
          pvVar23 = *(void **)(unaff_EBP - 0x2b14);
          pcVar50 = rand_exref;
          if (cVar4 != '\0') {
            if (*(char *)((int)pvVar23 + 0x68) == '[') goto LAB_005384a1;
            FUN_004c8530(unaff_EBP - 0x8d8);
            FUN_00402550((void *)(unaff_EBP - 0x8d8),
                         (longlong *)(*(int *)(unaff_EBP - 0x2b14) + 0x10));
            pcVar50 = rand_exref;
            iVar54 = rand();
            iVar31 = *(int *)(unaff_EBP - 0x2b28);
            *(undefined4 *)(unaff_EBP - 0x8cc) = 0x11;
            *(float *)(unaff_EBP - 0x8c8) = ((float)iVar54 * 0.1) / 32767.0 + 1.0;
            FUN_00428590((void *)(iVar31 + 8),(undefined4 *)(unaff_EBP - 0x8d8));
            goto LAB_0053824a;
          }
        }
      }
LAB_005384ad:
      iVar31 = *(int *)(unaff_EBP - 0x2b24);
    }
LAB_005384b3:
    if (iVar51 < *(int *)((int)pvVar23 + 0x6c)) {
      iVar51 = *(int *)(unaff_EBP - 0x2b28);
      iVar54 = *(int *)(unaff_EBP - 0x2b14);
    }
    else {
      iVar54 = *(int *)(unaff_EBP - 0x2b14);
      if ((iVar51 < *(int *)((int)pvVar23 + 0x6c) + iVar31) && (*(char *)(iVar54 + 0x68) != '[')) {
        FUN_004c8530(unaff_EBP - 0x168);
        FUN_00402550((void *)(unaff_EBP - 0x168),(longlong *)(*(int *)(unaff_EBP - 0x2b14) + 0x10));
        iVar51 = (*pcVar50)();
        cVar4 = *(char *)(*(int *)(unaff_EBP - 0x2b14) + 0x68);
        fVar56 = ((float)iVar51 * 0.2) / 32767.0 + 0.9;
        *(float *)(unaff_EBP - 0x158) = fVar56;
        if (cVar4 == '\n') {
          iVar51 = *(int *)(unaff_EBP - 0x2b28);
          *(undefined4 *)(unaff_EBP - 0x15c) = 0x10;
          FUN_00428590((void *)(iVar51 + 8),(undefined4 *)(unaff_EBP - 0x168));
          iVar54 = *(int *)(unaff_EBP - 0x2b14);
        }
        else if (cVar4 == '\v') {
          iVar51 = *(int *)(unaff_EBP - 0x2b28);
          *(undefined4 *)(unaff_EBP - 0x15c) = 0x30;
          FUN_00428590((void *)(iVar51 + 8),(undefined4 *)(unaff_EBP - 0x168));
          iVar54 = *(int *)(unaff_EBP - 0x2b14);
        }
        else if (cVar4 == '6') {
          iVar51 = *(int *)(unaff_EBP - 0x2b28);
          *(undefined4 *)(unaff_EBP - 0x15c) = 0xe;
          FUN_00428590((void *)(iVar51 + 8),(undefined4 *)(unaff_EBP - 0x168));
          iVar54 = *(int *)(unaff_EBP - 0x2b14);
        }
        else {
          fVar56 = fVar56 * 1.5;
          iVar51 = *(int *)(unaff_EBP - 0x2b14);
          *(float *)(unaff_EBP - 0x2b1c) = fVar56;
          *(float *)(unaff_EBP - 0x158) = fVar56;
          cVar4 = FUN_0040f2b0(iVar51);
          if ((((cVar4 != '\0') ||
               (cVar4 = *(char *)(*(int *)(unaff_EBP - 0x2b14) + 0x68), cVar4 == 'D')) ||
              (cVar4 == ']')) || (cVar4 == 'E')) {
            *(float *)(unaff_EBP - 0x158) = *(float *)(unaff_EBP - 0x2b1c) * 0.5;
          }
          iVar51 = *(int *)(unaff_EBP - 0x2b28);
          *(undefined4 *)(unaff_EBP - 0x15c) = 0xf;
          FUN_00428590((void *)(iVar51 + 8),(undefined4 *)(unaff_EBP - 0x168));
          iVar54 = *(int *)(unaff_EBP - 0x2b14);
        }
      }
      else {
        iVar51 = *(int *)(unaff_EBP - 0x2b28);
      }
    }
    cVar4 = *(char *)(iVar54 + 0x68);
    if (((cVar4 == '9') || (cVar4 == '<')) || ((cVar4 == ':' || (cVar4 == 'J')))) {
      iVar31 = FUN_00411d60(*(void **)(unaff_EBP - 0x2b14),0xffffffff);
      iVar54 = FUN_00407db0(*(void **)(unaff_EBP - 0x2b14),0xffffffff);
      if (*(int *)((int)*(void **)(unaff_EBP - 0x2b14) + 0x6c) < iVar54 + iVar31 / 2) {
        iVar54 = FUN_00411d60(*(void **)(unaff_EBP - 0x2b14),0xffffffff);
        iVar9 = FUN_00407db0(*(void **)(unaff_EBP - 0x2b14),0xffffffff);
        iVar31 = *(int *)(unaff_EBP - 0x2b14);
        if (iVar9 + iVar54 / 2 <= *(int *)(iVar31 + 0x6c) + *(int *)(unaff_EBP - 0x2b24)) {
          FUN_004c8530(unaff_EBP - 0x728);
          FUN_00402550((void *)(unaff_EBP - 0x728),(longlong *)(iVar31 + 0x10));
          iVar31 = rand();
          *(undefined4 *)(unaff_EBP - 0x71c) = 0xc;
          *(float *)(unaff_EBP - 0x718) = ((float)iVar31 * 0.25) / 32767.0 + 1.0;
          FUN_00428590((void *)(iVar51 + 8),(undefined4 *)(unaff_EBP - 0x728));
        }
      }
    }
    iVar51 = FUN_00411d60(*(void **)(unaff_EBP - 0x2b14),0xffffffff);
    iVar31 = FUN_00407db0(*(void **)(unaff_EBP - 0x2b14),0xffffffff);
    pvVar23 = *(void **)(unaff_EBP - 0x2b14);
    iVar31 = iVar51 / 2 + -100 + iVar31;
    *(int *)(unaff_EBP - 0x2b3c) = iVar31;
    iVar51 = FUN_00411d60(pvVar23,0xffffffff);
    iVar54 = FUN_00407db0(*(void **)(unaff_EBP - 0x2b14),0xffffffff);
    pvVar23 = *(void **)(unaff_EBP - 0x2b14);
    *(int *)(unaff_EBP - 0x2b50) = iVar54 + iVar51 / 2;
    iVar51 = FUN_00407db0(pvVar23,0xffffffff);
    if (iVar31 < iVar51) {
      iVar51 = FUN_00407db0(*(void **)(unaff_EBP - 0x2b14),0xffffffff);
      *(int *)(unaff_EBP - 0x2b3c) = iVar51;
    }
    iVar51 = FUN_00407db0(*(void **)(unaff_EBP - 0x2b14),0xffffffff);
    iVar31 = FUN_00411d60(*(void **)(unaff_EBP - 0x2b14),0xffffffff);
    if (iVar51 + iVar31 <= *(int *)(unaff_EBP - 0x2b50)) {
      iVar51 = FUN_00407db0(*(void **)(unaff_EBP - 0x2b14),0xffffffff);
      iVar31 = FUN_00411d60(*(void **)(unaff_EBP - 0x2b14),0xffffffff);
      *(int *)(unaff_EBP - 0x2b50) = iVar31 + iVar51 + -1;
    }
    cVar4 = *(char *)(*(int *)(unaff_EBP - 0x2b14) + 0x68);
    if ((cVar4 == 'D') || (cVar4 == 'E')) {
      iVar51 = FUN_00411d60(*(void **)(unaff_EBP - 0x2b14),0xffffffff);
      iVar31 = FUN_00407db0(*(void **)(unaff_EBP - 0x2b14),0xffffffff);
      *(int *)(unaff_EBP - 0x2b3c) = iVar51 / 3 + iVar31;
    }
    pvVar23 = *(void **)(unaff_EBP - 0x2b14);
    if (*(char *)((int)pvVar23 + 0x68) == ']') {
      iVar51 = FUN_00411d60(pvVar23,0xffffffff);
      iVar31 = FUN_00407db0(*(void **)(unaff_EBP - 0x2b14),0xffffffff);
      pvVar23 = *(void **)(unaff_EBP - 0x2b14);
      *(int *)(unaff_EBP - 0x2b3c) = iVar31 + iVar51 / 5;
      iVar51 = FUN_00407db0(pvVar23,0xffffffff);
      iVar31 = FUN_00411d60(*(void **)(unaff_EBP - 0x2b14),0xffffffff);
      pvVar23 = *(void **)(unaff_EBP - 0x2b14);
      *(int *)(unaff_EBP - 0x2b50) = iVar51 + iVar31;
    }
    cVar4 = *(char *)((int)pvVar23 + 0x68);
    *(undefined1 *)(unaff_EBP - 0x2c70) = 0;
    if ((((cVar4 == 'H') || (cVar4 == 'V')) || (cVar4 == '\x1e')) ||
       ((((cVar4 == '\x1f' || (cVar4 == ' ')) ||
         ((cVar4 == '!' || ((cVar4 == '\v' || (cVar4 == '\x05')))))) || (cVar4 == '[')))) {
      iVar51 = FUN_00407db0(*(void **)(unaff_EBP - 0x2b14),0xffffffff);
      if (*(int *)((int)*(void **)(unaff_EBP - 0x2b14) + 0x6c) < iVar51) {
        pvVar23 = *(void **)(unaff_EBP - 0x2b14);
LAB_00538dfd:
        iVar51 = FUN_00407db0(pvVar23,0xffffffff);
        *(int *)(unaff_EBP - 0x2b3c) = iVar51;
        *(int *)(unaff_EBP - 0x2b50) = iVar51;
        goto LAB_00538e12;
      }
      iVar51 = FUN_00407db0(*(void **)(unaff_EBP - 0x2b14),0xffffffff);
      iVar31 = FUN_00411d60(*(void **)(unaff_EBP - 0x2b14),0xffffffff);
      pvVar23 = *(void **)(unaff_EBP - 0x2b14);
      if (iVar51 + iVar31 <= *(int *)((int)pvVar23 + 0x6c)) goto LAB_00538dfd;
      iVar51 = 0xfa;
      if (*(char *)((int)pvVar23 + 0x68) == '[') {
        iVar51 = 1000;
      }
      if (*(char *)((int)pvVar23 + 0x68) == '\v') {
        iVar51 = FUN_00411d60(*(void **)(unaff_EBP - 0x2b14),0xffffffff);
        iVar51 = iVar51 / 3;
      }
      pvVar23 = *(void **)(unaff_EBP - 0x2b14);
      if (*(char *)((int)pvVar23 + 0x68) == '\x05') {
        iVar51 = FUN_00411d60(pvVar23,0xffffffff);
        iVar51 = iVar51 / 3;
        pvVar23 = *(void **)(unaff_EBP - 0x2b14);
      }
      if ((*(char *)((int)pvVar23 + 0x68) == '\x1e') || (*(char *)((int)pvVar23 + 0x68) == ' ')) {
        iVar51 = FUN_00411d60(*(void **)(unaff_EBP - 0x2b14),0xffffffff);
        iVar51 = iVar51 / 6;
      }
      cVar4 = *(char *)(*(int *)(unaff_EBP - 0x2b14) + 0x68);
      if ((cVar4 == '\x1f') || (cVar4 == '!')) {
        iVar51 = FUN_00411d60(*(void **)(unaff_EBP - 0x2b14),0xffffffff);
        iVar51 = iVar51 / 0xc;
      }
      iVar54 = FUN_00407db0(*(void **)(unaff_EBP - 0x2b14),0xffffffff);
      iVar31 = *(int *)(*(int *)(unaff_EBP - 0x2b14) + 0x6c);
      iVar9 = FUN_00407db0(*(void **)(unaff_EBP - 0x2b14),0xffffffff);
      pvVar23 = *(void **)(unaff_EBP - 0x2b14);
      iVar9 = iVar9 + ((iVar31 - iVar54) / iVar51) * iVar51;
      *(int *)(unaff_EBP - 0x2b3c) = iVar9;
      *(int *)(unaff_EBP - 0x2b50) = iVar9 + 100;
      iVar9 = FUN_00407db0(pvVar23,0xffffffff);
      iVar31 = *(int *)(*(int *)(unaff_EBP - 0x2b14) + 0x6c);
      iVar54 = *(int *)(unaff_EBP - 0x2b24);
      iVar17 = FUN_00407db0(*(void **)(unaff_EBP - 0x2b14),0xffffffff);
      iVar17 = iVar17 + (((iVar31 + iVar54) - iVar9) / iVar51) * iVar51;
      *(int *)(unaff_EBP - 0x2b1c) = iVar17;
      if (iVar17 != *(int *)(unaff_EBP - 0x2b3c)) {
        iVar31 = FUN_00407db0(*(void **)(unaff_EBP - 0x2b14),0xffffffff);
        iVar54 = FUN_00411d60(*(void **)(unaff_EBP - 0x2b14),0xffffffff);
        if (*(int *)(unaff_EBP - 0x2b1c) < iVar31 + iVar54) {
          iVar31 = *(int *)(unaff_EBP - 0x2b14);
          *(undefined4 *)(iVar31 + 0x1314) = *(undefined4 *)(*(int *)(unaff_EBP - 0x2b14) + 0x70);
          *(undefined1 *)(unaff_EBP - 0x2c70) = 1;
          FUN_004f8520((int *)(iVar31 + 0x11ac));
          FUN_004f8520((int *)(*(int *)(unaff_EBP - 0x2b14) + 0x11b4));
        }
      }
      iVar31 = *(int *)(unaff_EBP - 0x2b24);
      uVar22 = *(uint *)(unaff_EBP - 0x2c70) & 0xff;
      if (*(int *)(unaff_EBP - 0x2b50) < *(int *)(*(int *)(unaff_EBP - 0x2b14) + 0x6c) + iVar31) {
        uVar22 = 1;
      }
      pvVar23 = *(void **)(unaff_EBP - 0x2b14);
      *(uint *)(unaff_EBP - 0x2c70) = uVar22;
      if (*(char *)((int)pvVar23 + 0x68) != '\x05') {
        iVar54 = FUN_00407db0(pvVar23,0xffffffff);
        if (iVar54 <= *(int *)((int)*(void **)(unaff_EBP - 0x2b14) + 0x6c) - iVar31) {
          iVar9 = FUN_00407db0(*(void **)(unaff_EBP - 0x2b14),0xffffffff);
          iVar54 = *(int *)(*(int *)(unaff_EBP - 0x2b14) + 0x6c);
          iVar17 = FUN_00407db0(*(void **)(unaff_EBP - 0x2b14),0xffffffff);
          if ((*(int *)(*(int *)(unaff_EBP - 0x2b14) + 0x6c) - iVar17) / iVar51 ==
              ((iVar54 + iVar31) - iVar9) / iVar51) goto LAB_00538e12;
        }
        FUN_004c8530(unaff_EBP - 0x848);
        plVar32 = (longlong *)(*(int *)(unaff_EBP - 0x2b14) + 0x10);
        FUN_00402550((void *)(unaff_EBP - 0x848),plVar32);
        iVar31 = rand();
        iVar51 = *(int *)(unaff_EBP - 0x2b28);
        *(undefined4 *)(unaff_EBP - 0x83c) = 0xf;
        *(float *)(unaff_EBP - 0x838) = ((float)iVar31 * 0.25) / 32767.0 + 1.0;
        FUN_00428590((void *)(iVar51 + 8),(undefined4 *)(unaff_EBP - 0x848));
        if (*(char *)(*(int *)(unaff_EBP - 0x2b14) + 0x68) == '[') {
          FUN_004c8530(unaff_EBP - 0x758);
          FUN_00402550((void *)(unaff_EBP - 0x758),plVar32);
          iVar31 = rand();
          *(undefined4 *)(unaff_EBP - 0x74c) = 0x52;
          *(float *)(unaff_EBP - 0x748) = ((float)iVar31 * 0.1) / 32767.0 + 0.5;
          FUN_00428590((void *)(iVar51 + 8),(undefined4 *)(unaff_EBP - 0x758));
        }
        goto LAB_00538e12;
      }
    }
    else {
LAB_00538e12:
      pvVar23 = *(void **)(unaff_EBP - 0x2b14);
    }
    iVar51 = FUN_00407db0(pvVar23,0xffffffff);
    pvVar23 = *(void **)(unaff_EBP - 0x2b14);
    if (*(int *)((int)pvVar23 + 0x6c) <= iVar51) {
      *(undefined4 *)((int)pvVar23 + 0x1314) = *(undefined4 *)((int)pvVar23 + 0x70);
      piVar34 = (int *)((int)pvVar23 + 0x11b4);
      FUN_00428070(piVar34,(undefined4 *)(unaff_EBP - 0x2c60));
      piVar25 = (int *)FUN_00530550(piVar34,(undefined4 *)(unaff_EBP - 0x2d80));
      bVar5 = FUN_0042c6f0((void *)(unaff_EBP - 0x2c60),piVar25);
      if (bVar5) {
        iVar51 = *(int *)(unaff_EBP - 0x2b14);
        do {
          puVar26 = (uint *)FUN_00402bc0((int *)(unaff_EBP - 0x2c60));
          piVar25 = (int *)FUN_00530550((void *)(iVar51 + 0x11ac),(undefined4 *)(unaff_EBP - 0x2fec)
                                       );
          pvVar23 = (void *)FUN_00530600((void *)(iVar51 + 0x11ac),(int *)(unaff_EBP - 0x3010),
                                         puVar26);
          bVar5 = FUN_004078d0(pvVar23,piVar25);
          if ((bVar5) &&
             (pvVar23 = (void *)FUN_00405420(*(void **)(unaff_EBP - 0x2b18),puVar26),
             pvVar23 != (void *)0x0)) {
            FUN_00408230(pvVar23,*(int *)(unaff_EBP - 0x2b28));
            FUN_00422a90(unaff_EBP - 0xc98);
            *(undefined4 *)(unaff_EBP - 0xc98) = *(undefined4 *)(*(int *)(unaff_EBP - 0x2b14) + 8);
            iVar31 = *(int *)(unaff_EBP - 0x2b14);
            *(undefined4 *)(unaff_EBP - 0xc88) = 0;
            *(undefined4 *)(unaff_EBP - 0xc94) = *(undefined4 *)(iVar31 + 0xc);
            *(undefined4 *)(unaff_EBP - 0xc90) = *(undefined4 *)((int)pvVar23 + 8);
            *(undefined4 *)(unaff_EBP - 0xc8c) = *(undefined4 *)((int)pvVar23 + 0xc);
            *(undefined1 *)(unaff_EBP - 0xc53) = 4;
            *(undefined1 *)(unaff_EBP - 0xc84) = 0;
            FUN_00402a40((void *)(unaff_EBP - 0xc78),(undefined4 *)((int)pvVar23 + 0x10));
            FUN_00428400(*(void **)(unaff_EBP - 0x2b28),(undefined4 *)(unaff_EBP - 0xc98));
          }
          FUN_00407a30((void *)(unaff_EBP - 0x2c60),(int *)(unaff_EBP - 0x3018));
          piVar34 = (int *)(*(int *)(unaff_EBP - 0x2b14) + 0x11b4);
          piVar25 = (int *)FUN_00530550(piVar34,(undefined4 *)(unaff_EBP - 0x2d80));
          bVar5 = FUN_0042c6f0((void *)(unaff_EBP - 0x2c60),piVar25);
        } while (bVar5);
      }
      FUN_004f8520((int *)(*(int *)(unaff_EBP - 0x2b14) + 0x11ac));
      FUN_004f8520(piVar34);
      pvVar23 = *(void **)(unaff_EBP - 0x2b14);
      *(undefined1 *)((int)pvVar23 + 0x13b8) = 0;
    }
    if (*(char *)((int)pvVar23 + 0x68) == 'J') {
      iVar51 = FUN_00411d60(pvVar23,0xffffffff);
      pvVar23 = *(void **)(unaff_EBP - 0x2b14);
      iVar31 = FUN_00407db0(pvVar23,0xffffffff);
      if (*(int *)((int)pvVar23 + 0x6c) < iVar31 + iVar51 / 2) {
        iVar51 = FUN_00411d60(pvVar23,0xffffffff);
        iVar31 = FUN_00407db0(pvVar23,0xffffffff);
        if (iVar31 + iVar51 / 2 <= *(int *)((int)pvVar23 + 0x6c) + *(int *)(unaff_EBP - 0x2b24)) {
          FUN_004c8530(unaff_EBP - 0x908);
          FUN_00402550((void *)(unaff_EBP - 0x908),(longlong *)((int)pvVar23 + 0x10));
          iVar31 = rand();
          iVar51 = *(int *)(unaff_EBP - 0x2b28);
          *(undefined4 *)(unaff_EBP - 0x8fc) = 0x52;
          *(float *)(unaff_EBP - 0x8f8) = ((float)iVar31 * 0.1) / 32767.0 + 0.5;
          FUN_00428590((void *)(iVar51 + 8),(undefined4 *)(unaff_EBP - 0x908));
        }
      }
      pvVar23 = *(void **)(unaff_EBP - 0x2b14);
    }
    iVar51 = *(int *)(unaff_EBP - 0x2b50);
    if (iVar51 <= *(int *)((int)pvVar23 + 0x6c)) {
      piVar25 = (int *)((int)pvVar23 + 0x11b4);
      FUN_00428070(piVar25,(undefined4 *)(unaff_EBP - 0x2c68));
      piVar34 = (int *)FUN_00530550(piVar25,(undefined4 *)(unaff_EBP - 0x2e18));
      bVar5 = FUN_0042c6f0((void *)(unaff_EBP - 0x2c68),piVar34);
      if (bVar5) {
        iVar51 = *(int *)(unaff_EBP - 0x2b14);
        do {
          puVar26 = (uint *)FUN_00402bc0((int *)(unaff_EBP - 0x2c68));
          piVar25 = (int *)FUN_00530550((void *)(iVar51 + 0x11ac),(undefined4 *)(unaff_EBP - 0x3048)
                                       );
          pvVar23 = (void *)FUN_00530600((void *)(iVar51 + 0x11ac),(int *)(unaff_EBP - 0x3064),
                                         puVar26);
          bVar5 = FUN_004078d0(pvVar23,piVar25);
          if ((bVar5) &&
             (pvVar23 = (void *)FUN_00405420(*(void **)(unaff_EBP - 0x2b18),puVar26),
             pvVar23 != (void *)0x0)) {
            FUN_00408230(pvVar23,*(int *)(unaff_EBP - 0x2b28));
            FUN_00422a90(unaff_EBP - 0xd70);
            iVar31 = *(int *)(unaff_EBP - 0x2b14);
            *(undefined4 *)(unaff_EBP - 0xd60) = 0;
            *(undefined4 *)(unaff_EBP - 0xd70) = *(undefined4 *)(iVar31 + 8);
            *(undefined4 *)(unaff_EBP - 0xd6c) = *(undefined4 *)(iVar31 + 0xc);
            *(undefined4 *)(unaff_EBP - 0xd68) = *(undefined4 *)((int)pvVar23 + 8);
            *(undefined4 *)(unaff_EBP - 0xd64) = *(undefined4 *)((int)pvVar23 + 0xc);
            *(undefined1 *)(unaff_EBP - 0xd2b) = 4;
            *(undefined1 *)(unaff_EBP - 0xd5c) = 0;
            FUN_00402a40((void *)(unaff_EBP - 0xd50),(undefined4 *)((int)pvVar23 + 0x10));
            FUN_00428400(*(void **)(unaff_EBP - 0x2b28),(undefined4 *)(unaff_EBP - 0xd70));
          }
          FUN_00407a30((void *)(unaff_EBP - 0x2c68),(int *)(unaff_EBP - 0x3014));
          piVar25 = (int *)(*(int *)(unaff_EBP - 0x2b14) + 0x11b4);
          piVar34 = (int *)FUN_00530550(piVar25,(undefined4 *)(unaff_EBP - 0x2e18));
          bVar5 = FUN_0042c6f0((void *)(unaff_EBP - 0x2c68),piVar34);
        } while (bVar5);
        iVar51 = *(int *)(unaff_EBP - 0x2b50);
      }
      FUN_004f8520(piVar25);
      pvVar23 = *(void **)(unaff_EBP - 0x2b14);
    }
    if (*(char *)((int)pvVar23 + 0x13b8) == '\0') {
      iVar31 = FUN_00407db0(pvVar23,0xffffffff);
      iVar54 = FUN_00411d60(*(void **)(unaff_EBP - 0x2b14),0xffffffff);
      if (iVar31 + iVar54 <=
          *(int *)(*(int *)(unaff_EBP - 0x2b14) + 0x6c) + *(int *)(unaff_EBP - 0x2b24)) {
        iVar31 = FUN_004084b0(*(int *)(unaff_EBP - 0x2b14));
        pvVar23 = *(void **)(unaff_EBP - 0x2b14);
        if (iVar31 <= *(int *)((int)pvVar23 + 0x6c)) goto LAB_005392b7;
        if (*(int *)((int)pvVar23 + 0x128) == 0) {
          fVar55 = FUN_00412150((int)pvVar23);
          *(float *)(unaff_EBP - 0x2b1c) = (float)fVar55;
          iVar31 = *(int *)(unaff_EBP - 0x2b14);
          *(undefined4 *)(iVar31 + 0x70) = 0;
          fVar55 = FUN_00412150(iVar31);
          *(float *)(unaff_EBP - 0x2b48) = (float)fVar55;
          *(int *)(*(int *)(unaff_EBP - 0x2b14) + 0x6c) =
               (int)((*(float *)(unaff_EBP - 0x2b1c) / *(float *)(unaff_EBP - 0x2b48)) *
                    (float)*(int *)(*(int *)(unaff_EBP - 0x2b14) + 0x6c));
        }
      }
      pvVar23 = *(void **)(unaff_EBP - 0x2b14);
    }
LAB_005392b7:
    if ((*(char *)((int)pvVar23 + 0x68) == '\x1f') || (*(char *)((int)pvVar23 + 0x68) == '!')) {
      pvVar23 = *(void **)(unaff_EBP - 0x2b14);
      iVar31 = FUN_00407db0(pvVar23,0xffffffff);
      if (iVar31 < *(int *)((int)pvVar23 + 0x6c)) {
LAB_00539356:
        pvVar23 = *(void **)(unaff_EBP - 0x2b14);
        goto LAB_0053935c;
      }
      iVar31 = FUN_00407db0(pvVar23,0xffffffff);
      iVar54 = *(int *)(unaff_EBP - 0x2b24);
      if (iVar31 < *(int *)((int)pvVar23 + 0x6c) + iVar54) {
        *(undefined4 *)((int)pvVar23 + 0x13b4) = 0x3dcccccd;
        fVar55 = FUN_0040fb20((int)pvVar23,(uint)*(byte *)((int)pvVar23 + 0x68),-1);
        *(float *)(unaff_EBP - 0x2b1c) = (float)fVar55;
        fVar56 = *(float *)((int)pvVar23 + 0x170) - *(float *)(unaff_EBP - 0x2b1c);
        *(float *)((int)pvVar23 + 0x170) = fVar56;
        if (fVar56 < 0.0) {
          *(undefined4 *)((int)pvVar23 + 0x170) = 0;
        }
        goto LAB_00539356;
      }
    }
    else {
      pvVar23 = *(void **)(unaff_EBP - 0x2b14);
      if (*(int *)((int)pvVar23 + 0x6c) == 0) {
        iVar31 = *(int *)(unaff_EBP - 0x2b14);
        *(undefined1 *)((int)pvVar23 + 0x13c0) = 0;
        *(undefined4 *)((int)pvVar23 + 0x13b4) = 0;
        fVar55 = FUN_0040fb20(iVar31,(uint)*(byte *)((int)pvVar23 + 0x68),-1);
        *(float *)(unaff_EBP - 0x2b1c) = (float)fVar55;
        if (*(float *)(unaff_EBP - 0x2b1c) <= 0.0) {
          cVar4 = *(char *)(iVar31 + 0x68);
          if (((cVar4 == '\x11') || (cVar4 == '\x14')) || (cVar4 == '\x05')) {
            *(undefined4 *)(iVar31 + 0x13b4) = *(undefined4 *)(iVar31 + 0x170);
            pvVar23 = *(void **)(unaff_EBP - 0x2b14);
            *(undefined4 *)((int)pvVar23 + 0x170) = 0;
            puVar24 = FUN_0040ef90(pvVar23,0xb);
            if (puVar24 != (undefined4 *)0x0) {
              FUN_004029b0((undefined1 *)(unaff_EBP - 0x2f4c));
              pvVar23 = *(void **)(unaff_EBP - 0x2b14);
              *(undefined1 *)(unaff_EBP - 0x2f4c) = 0xb;
              *(undefined4 *)(unaff_EBP - 0x2f44) = 0;
              FUN_00411740(pvVar23,(char *)(unaff_EBP - 0x2f4c));
              FUN_004063d0(unaff_EBP - 0x3124);
              uVar28 = *(undefined4 *)((int)pvVar23 + 0xc);
              uVar64 = *(undefined4 *)((int)pvVar23 + 8);
              *(undefined8 *)(unaff_EBP - 0x3114) = *(undefined8 *)(unaff_EBP - 0x2f4c);
              uVar1 = *(undefined8 *)(unaff_EBP - 0x2f44);
              *(undefined4 *)(unaff_EBP - 0x3120) = uVar28;
              *(undefined4 *)(unaff_EBP - 0x3118) = uVar28;
              iVar31 = *(int *)(unaff_EBP - 0x2b28);
              *(undefined4 *)(unaff_EBP - 0x3124) = uVar64;
              *(undefined4 *)(unaff_EBP - 0x311c) = uVar64;
              *(undefined8 *)(unaff_EBP - 0x310c) = uVar1;
              *(undefined8 *)(unaff_EBP - 0x3104) = *(undefined8 *)(unaff_EBP - 0x2f3c);
              FUN_00411040((void *)(iVar31 + 0x58),(undefined8 *)(unaff_EBP - 0x3124));
              *(undefined1 *)((int)pvVar23 + 0x13c0) = 1;
            }
          }
          else if (((cVar4 == '6') || (cVar4 == '\x15')) || ((cVar4 == 'W' || (cVar4 == 'X')))) {
            *(undefined4 *)(iVar31 + 0x13b4) = 0x3f800000;
          }
        }
        else {
          fVar55 = FUN_0040fb20(iVar31,(uint)*(byte *)(iVar31 + 0x68),-1);
          *(float *)(unaff_EBP - 0x2b1c) = (float)fVar55;
          fVar56 = *(float *)(unaff_EBP - 0x2b1c);
          *(float *)(iVar31 + 0x13b4) = fVar56;
          *(float *)(iVar31 + 0x170) = *(float *)(iVar31 + 0x170) - fVar56;
        }
        goto LAB_00539356;
      }
LAB_0053935c:
      iVar54 = *(int *)(unaff_EBP - 0x2b24);
    }
    if (0.0 < *(float *)((int)pvVar23 + 0x144)) {
      *(float *)((int)pvVar23 + 0x13b4) = *(float *)((int)pvVar23 + 0x144);
      *(float *)((int)pvVar23 + 0x170) =
           *(float *)((int)pvVar23 + 0x170) - *(float *)((int)pvVar23 + 0x144);
      *(undefined1 *)((int)pvVar23 + 0x13b8) = 0;
      if ((*(char *)((int)pvVar23 + 0x68) == '\v') || (*(char *)((int)pvVar23 + 0x68) == '\x05')) {
        *(float *)(*(int *)(unaff_EBP - 0x2b14) + 0x13b4) =
             *(float *)(*(int *)(unaff_EBP - 0x2b14) + 0x13b4) * 0.5;
      }
      pvVar23 = *(void **)(unaff_EBP - 0x2b14);
    }
    *(undefined4 *)((int)pvVar23 + 0x144) = 0;
    if (*(float *)((int)pvVar23 + 0x170) <= 0.0 && *(float *)((int)pvVar23 + 0x170) != 0.0) {
      *(undefined4 *)((int)pvVar23 + 0x170) = 0;
    }
    if ((0.0 < *(float *)((int)pvVar23 + 0x13b4)) || (*(char *)((int)pvVar23 + 0x68) == '\v')) {
      uVar3 = 1;
    }
    else {
      uVar3 = 0;
    }
    pvVar42 = *(void **)(unaff_EBP - 0x2b14);
    *(undefined1 *)(unaff_EBP - 0x2c04) = uVar3;
    if ((*(int *)((int)pvVar42 + 0x6c) <= *(int *)(unaff_EBP - 0x2b3c)) ||
       (iVar51 < *(int *)((int)pvVar42 + 0x6c))) goto LAB_0053e0c5;
    FUN_00401cd0((undefined4 *)(unaff_EBP - 0x1d1c));
    pfVar33 = (float *)FUN_004013d0((void *)((int)pvVar42 + 0x28),2);
    FUN_00402030((void *)(unaff_EBP - 0x1d1c),*pfVar33);
    *(undefined4 *)(unaff_EBP - 0x2b1c) = 0x3fc00000;
    pfVar33 = (float *)FUN_004013d0((void *)((int)pvVar42 + 0x80),0);
    fVar56 = *pfVar33;
    cVar4 = *(char *)((int)pvVar42 + 0x68);
    fVar59 = fVar56 * 1.5;
    *(float **)(unaff_EBP - 0x2bb8) = pfVar33;
    *(float *)(unaff_EBP - 0x2b4c) = fVar59;
    if ((((((((cVar4 == '\r') || (cVar4 == '\x0e')) || (cVar4 == '\x02')) ||
           ((cVar4 == '\x01' || (cVar4 == '\t')))) || (cVar4 == '\x04')) ||
         ((cVar4 == '\x03' || (cVar4 == '\a')))) || (cVar4 == '\x06')) ||
       ((cVar4 == '\x12' || (cVar4 == '\x13')))) {
      fVar58 = 1.0;
      fVar59 = fVar56 * 2.0;
      *(float *)(unaff_EBP - 0x2b4c) = fVar59;
    }
    else {
      fVar58 = *(float *)(unaff_EBP - 0x2b1c);
    }
    if ((cVar4 == '\x14') || (cVar4 == '\x15')) {
      fVar59 = fVar59 * 2.0;
      *(float *)(unaff_EBP - 0x2b4c) = fVar59;
    }
    if ((cVar4 == 'D') || (cVar4 == 'F')) {
      fVar58 = 0.0;
    }
    if (((cVar4 == 'V') || (cVar4 == ']')) || (cVar4 == 'h')) {
      fVar59 = fVar59 * 2.0;
      fVar58 = 0.0;
      *(float *)(unaff_EBP - 0x2b4c) = fVar59;
    }
    if ((cVar4 == 'W') || (cVar4 == 'X')) {
      fVar59 = 8.0;
      fVar58 = 0.0;
      *(undefined4 *)(unaff_EBP - 0x2b4c) = 0x41000000;
    }
    if ((cVar4 == '\x1e') || (cVar4 == ' ')) {
      fVar59 = 3.0;
      fVar58 = 0.0;
      *(undefined4 *)(unaff_EBP - 0x2b4c) = 0x40400000;
    }
    if ((cVar4 == '\x1f') || (cVar4 == '!')) {
      fVar59 = 5.0;
      fVar58 = 0.0;
      *(undefined4 *)(unaff_EBP - 0x2b4c) = 0x40a00000;
    }
    if ((cVar4 == '[') || (cVar4 == 'J')) {
      fVar59 = 20.0;
      fVar58 = 0.0;
      *(undefined4 *)(unaff_EBP - 0x2b4c) = 0x41a00000;
    }
    if ((((cVar4 == 'H') || (cVar4 == 'N')) || (cVar4 == 'M')) || (cVar4 == 'L')) {
      fVar58 = 0.0;
      *(float *)(unaff_EBP - 0x2b4c) = fVar59 * 1.2;
    }
    pfVar36 = (float *)FUN_00401080((void *)(unaff_EBP - 0x12c8),0,fVar56 * fVar58,0);
    FUN_004dde00((void *)(unaff_EBP - 0x1d1c),(float *)(unaff_EBP - 0x19c4),pfVar36);
    FUN_00402510(unaff_EBP - 0x18bc);
    puVar24 = (undefined4 *)(*(int *)(unaff_EBP - 0x2b14) + 0x10);
    FUN_00402cb0(puVar24,(uint *)(unaff_EBP - 0x110),(uint *)(unaff_EBP - 0x18bc));
    iVar51 = *(int *)(unaff_EBP - 0x2b14);
    cVar4 = *(char *)(iVar51 + 0x68);
    if (((cVar4 == '\x1e') || (cVar4 == '\x1f')) || ((cVar4 == ' ' || (cVar4 == '!')))) {
      FUN_00402510(unaff_EBP - 0x18e0);
      puVar26 = FUN_00402cb0(puVar24,(uint *)(unaff_EBP - 0x2064),(uint *)(unaff_EBP - 0x18e0));
      FUN_00402a40((void *)(unaff_EBP - 0x110),puVar26);
      iVar51 = *(int *)(unaff_EBP - 0x2b14);
    }
    if ((*(char *)(iVar51 + 0x68) == 'K') || (*(char *)(iVar51 + 0x68) == 'E')) {
      FUN_004013d0((void *)(iVar51 + 0x80),2);
      FUN_00402a10((ulonglong *)(unaff_EBP - 0x3080));
      puVar26 = (uint *)(unaff_EBP - 0x3080);
      pvVar23 = (void *)FUN_004e2320((void *)(unaff_EBP - 0x110),2);
      FUN_00402eb0(pvVar23,puVar26);
      iVar51 = *(int *)(unaff_EBP - 0x2b14);
    }
    cVar4 = *(char *)(iVar51 + 0x68);
    if (((cVar4 == '\v') || (cVar4 == '=')) || (cVar4 == '6')) {
      FUN_00402a40((void *)(unaff_EBP - 0x110),puVar24);
      fVar56 = *(float *)(unaff_EBP - 0x2b4c) * 3.0;
      *(float *)(unaff_EBP - 0x2b4c) = fVar56;
    }
    else {
      fVar56 = *(float *)(unaff_EBP - 0x2b4c);
    }
    pvVar42 = *(void **)(unaff_EBP - 0x2b14);
    if (((*(char *)(*(int *)(unaff_EBP - 0x2b18) + 0xb4) == '\0') && (4.0 < *pfVar33)) &&
       ((cVar4 = *(char *)((int)pvVar42 + 0x68), cVar4 != 'W' && ((cVar4 != '[' && (cVar4 != 'J'))))
       )) {
      *(undefined1 *)(unaff_EBP - 0x2b29) = 0;
      iVar51 = (int)fVar56;
      if (8 < iVar51) {
        iVar51 = 8;
      }
      iVar54 = -iVar51;
      *(int *)(unaff_EBP - 0x2b48) = iVar51;
      *(int *)(unaff_EBP - 0x2b90) = iVar54;
      *(int *)(unaff_EBP - 0x2b5c) = iVar54;
      iVar31 = iVar54;
      if (-iVar51 == iVar51 || SBORROW4(iVar54,iVar51) != iVar51 * -2 < 0) {
        do {
          *(int *)(unaff_EBP - 0x2b64) = iVar31;
          iVar9 = iVar31;
          if (iVar31 <= iVar51) {
            do {
              if (iVar9 <= iVar51) {
                iVar17 = iVar51 * iVar51;
                do {
                  puVar26 = FUN_00402990((void *)(unaff_EBP - 0x12e0),iVar54,iVar31,iVar9);
                  FUN_004d99d0((void *)(unaff_EBP - 0x1904),puVar26);
                  FUN_00402cb0((void *)(unaff_EBP - 0x110),(uint *)(unaff_EBP - 0x42c),
                               (uint *)(unaff_EBP - 0x1904));
                  puVar26 = FUN_00402c50((void *)(unaff_EBP - 0x42c),(uint *)(unaff_EBP - 0x2544),
                                         (uint *)(unaff_EBP - 0x110));
                  pfVar33 = FUN_00402550((void *)(unaff_EBP - 0x1670),(longlong *)puVar26);
                  fVar55 = FUN_004021b0(pfVar33);
                  *(float *)(unaff_EBP - 0x2b1c) = (float)fVar55;
                  if (*(float *)(unaff_EBP - 0x2b1c) <= (float)iVar17 &&
                      (float)iVar17 != *(float *)(unaff_EBP - 0x2b1c)) {
                    iVar51 = FUN_004e2320((void *)(unaff_EBP - 0x42c),2);
                    *(int *)(unaff_EBP - 0x2b40) = iVar51;
                    iVar51 = FUN_004e2320((void *)(unaff_EBP - 0x42c),1);
                    *(int *)(unaff_EBP - 0x2b3c) = iVar51;
                    puVar27 = (uint *)FUN_004e2320((void *)(unaff_EBP - 0x42c),0);
                    puVar26 = *(uint **)(unaff_EBP - 0x2b40);
                    uVar22 = puVar26[1];
                    *(uint **)(unaff_EBP - 0x2b1c) = puVar27;
                    iVar51 = FUN_00406050(*(void **)(unaff_EBP - 0x2b18),*puVar27,puVar27[1],
                                          **(uint **)(unaff_EBP - 0x2b3c),
                                          (*(uint **)(unaff_EBP - 0x2b3c))[1],*puVar26,uVar22,0);
                    *(int *)(unaff_EBP - 0x2b20) = iVar51;
                    bVar6 = FUN_005306c0(iVar51);
                    if (bVar6 != 0) {
                      FUN_004c8510(unaff_EBP - 0x1020);
                      FUN_00402a40((void *)(unaff_EBP - 0x1020),(undefined4 *)(unaff_EBP - 0x42c));
                      pvVar23 = *(void **)(unaff_EBP - 0x2b20);
                      uVar28 = 0x3f800000;
                      *(undefined4 *)(unaff_EBP - 0xfec) = 0x3f000000;
                      pbVar47 = (byte *)FUN_004013e0(pvVar23,2);
                      fVar56 = (float)*pbVar47 / 255.0;
                      pbVar47 = (byte *)FUN_004013e0(*(void **)(unaff_EBP - 0x2b20),1);
                      fVar59 = (float)*pbVar47 / 255.0;
                      pbVar47 = (byte *)FUN_004013e0(*(void **)(unaff_EBP - 0x2b20),0);
                      ppVar41 = (pair<unsigned___int64,unsigned___int64> *)
                                FUN_004010b0((void *)(unaff_EBP - 0x1b8c),(float)*pbVar47 / 255.0,
                                             fVar59,fVar56,uVar28);
                      std::pair<unsigned___int64,unsigned___int64>::
                      operator=<std::pair<unsigned___int64,unsigned___int64>,0>
                                ((pair<unsigned___int64,unsigned___int64> *)(unaff_EBP - 0xffc),
                                 ppVar41);
                      puVar24 = FUN_00401080((void *)(unaff_EBP - 0x12f8),0,0,0x41200000);
                      FUN_00401060((void *)(unaff_EBP - 0x1008),puVar24);
                      iVar51 = *(int *)(unaff_EBP - 0x2b28);
                      *(undefined4 *)(unaff_EBP - 0xfe8) = 3;
                      FUN_00428540((void *)(iVar51 + 0x10),(undefined4 *)(unaff_EBP - 0x1020));
                      lVar39 = CRefTime::Millisecs(*(CRefTime **)(unaff_EBP - 0x2b40));
                      uVar22 = CRefTime::Millisecs(*(CRefTime **)(unaff_EBP - 0x2b3c));
                      uVar52 = CRefTime::Millisecs(*(CRefTime **)(unaff_EBP - 0x2b1c));
                      FUN_00530470(*(void **)(unaff_EBP - 0x2b18),uVar52,uVar22,lVar39);
                      FUN_0041d7e0(unaff_EBP - 0x4b4);
                      puVar24 = FUN_004c64f0((void *)(unaff_EBP - 0x1880),
                                             (uint *)(unaff_EBP - 0x42c));
                      FUN_00401060((void *)(unaff_EBP - 0x4b4),puVar24);
                      *(undefined4 *)(unaff_EBP - 0x4a4) =
                           *(undefined4 *)(*(int *)(unaff_EBP - 0x2b18) + 0x800160);
                      FUN_00405610((void *)(unaff_EBP - 0x4a8),&DAT_005842d8);
                      FUN_00528400((void *)(*(int *)(unaff_EBP - 0x2b28) + 0x18),
                                   (undefined4 *)(unaff_EBP - 0x4b4));
                      *(undefined1 *)(unaff_EBP - 0x2b29) = 1;
                    }
                  }
                  iVar51 = *(int *)(unaff_EBP - 0x2b48);
                  iVar31 = *(int *)(unaff_EBP - 0x2b64);
                  iVar54 = *(int *)(unaff_EBP - 0x2b5c);
                  iVar9 = iVar9 + 1;
                } while (iVar9 <= iVar51);
                iVar9 = *(int *)(unaff_EBP - 0x2b90);
              }
              iVar31 = iVar31 + 1;
              *(int *)(unaff_EBP - 0x2b64) = iVar31;
            } while (iVar31 <= iVar51);
          }
          iVar54 = iVar54 + 1;
          *(int *)(unaff_EBP - 0x2b5c) = iVar54;
          iVar31 = iVar9;
        } while (iVar54 <= iVar51);
        if (*(char *)(unaff_EBP - 0x2b29) != '\0') {
          FUN_004c8530(unaff_EBP - 0x608);
          FUN_00402550((void *)(unaff_EBP - 0x608),(longlong *)(*(int *)(unaff_EBP - 0x2b14) + 0x10)
                      );
          iVar31 = rand();
          iVar51 = *(int *)(unaff_EBP - 0x2b28);
          *(undefined4 *)(unaff_EBP - 0x5fc) = 2;
          *(float *)(unaff_EBP - 0x5f8) = ((float)iVar31 * 0.4) / 32767.0 + 0.5;
          FUN_00428590((void *)(iVar51 + 8),(undefined4 *)(unaff_EBP - 0x608));
          if (*(int *)(*(int *)(unaff_EBP - 0x2b18) + 0xb8) == 0) {
            pvVar23 = (void *)FUN_004e2320((void *)(unaff_EBP - 0x110),1);
            pvVar42 = (void *)FUN_004e2320((void *)(unaff_EBP - 0x110),0);
            iVar31 = 0;
            iVar51 = 8;
            pCVar38 = (CRefTime *)FUN_00401530(pvVar23,(int *)(unaff_EBP - 0x33ac));
            lVar39 = CRefTime::Millisecs(pCVar38);
            pCVar38 = (CRefTime *)FUN_00401530(pvVar42,(int *)(unaff_EBP - 0x33bc));
            lVar11 = CRefTime::Millisecs(pCVar38);
            pCVar38 = (CRefTime *)FUN_004014b0(pvVar23,(int *)(unaff_EBP - 0x33cc));
            uVar22 = CRefTime::Millisecs(pCVar38);
            pCVar38 = (CRefTime *)FUN_004014b0(pvVar42,(int *)(unaff_EBP - 0x33dc));
            uVar52 = CRefTime::Millisecs(pCVar38);
            FUN_004d1a70(*(void **)(unaff_EBP - 0x2b18),uVar52,uVar22,lVar11,lVar39,iVar51,iVar31);
          }
          pvVar23 = (void *)FUN_004e2320((void *)(unaff_EBP - 0x110),1);
          pvVar42 = (void *)FUN_004e2320((void *)(unaff_EBP - 0x110),0);
          pCVar38 = (CRefTime *)FUN_00401530(pvVar23,(int *)(unaff_EBP - 0x33ec));
          uVar22 = CRefTime::Millisecs(pCVar38);
          pCVar38 = (CRefTime *)FUN_00401530(pvVar42,(int *)(unaff_EBP - 0x33fc));
          uVar52 = CRefTime::Millisecs(pCVar38);
          pCVar38 = (CRefTime *)FUN_004014b0(pvVar23,(int *)(unaff_EBP - 0x340c));
          piVar25 = (int *)CRefTime::Millisecs(pCVar38);
          pCVar38 = (CRefTime *)FUN_004014b0(pvVar42,(int *)(unaff_EBP - 0x341c));
          lVar39 = CRefTime::Millisecs(pCVar38);
          FUN_004d9160(*(void **)(unaff_EBP - 0x2b18),lVar39,piVar25,uVar52,uVar22);
        }
      }
      pvVar42 = *(void **)(unaff_EBP - 0x2b14);
    }
    cVar4 = *(char *)((int)pvVar42 + 0x68);
    *(undefined4 *)(unaff_EBP - 0x2b5c) = 0x3f800000;
    if (((cVar4 == '<') || (cVar4 == '\v')) || (cVar4 == '>')) {
      *(undefined4 *)(unaff_EBP - 0x2b5c) = 0;
    }
    *(undefined1 *)(unaff_EBP - 0x2b29) = 0;
    if (((cVar4 == '\x1f') &&
        (iVar51 = FUN_00407db0(pvVar42,0xffffffff), iVar51 <= *(int *)((int)pvVar42 + 0x6c))) &&
       (puVar24 = FUN_0040ef90(pvVar42,9), puVar24 != (undefined4 *)0x0)) {
      FUN_004029b0((undefined1 *)(unaff_EBP - 0x2f04));
      *(undefined1 *)(unaff_EBP - 0x2f04) = 9;
      *(undefined4 *)(unaff_EBP - 0x2efc) = 0;
      FUN_00411740(pvVar42,(char *)(unaff_EBP - 0x2f04));
      FUN_004063d0(unaff_EBP - 0x3174);
      uVar28 = *(undefined4 *)((int)pvVar42 + 0xc);
      uVar64 = *(undefined4 *)((int)pvVar42 + 8);
      *(undefined8 *)(unaff_EBP - 0x3164) = *(undefined8 *)(unaff_EBP - 0x2f04);
      uVar1 = *(undefined8 *)(unaff_EBP - 0x2efc);
      *(undefined4 *)(unaff_EBP - 0x3170) = uVar28;
      *(undefined4 *)(unaff_EBP - 0x3168) = uVar28;
      iVar51 = *(int *)(unaff_EBP - 0x2b28);
      *(undefined4 *)(unaff_EBP - 0x3174) = uVar64;
      *(undefined4 *)(unaff_EBP - 0x316c) = uVar64;
      *(undefined8 *)(unaff_EBP - 0x315c) = uVar1;
      uVar28 = *(undefined4 *)(unaff_EBP - 0x2ef0);
      *(undefined4 *)(unaff_EBP - 0x3154) = *(undefined4 *)(unaff_EBP - 0x2ef4);
      *(undefined4 *)(unaff_EBP - 0x3150) = uVar28;
      FUN_00411040((void *)(iVar51 + 0x58),(undefined8 *)(unaff_EBP - 0x3174));
    }
    FUN_00428070(*(void **)(unaff_EBP - 0x2b6c),(undefined4 *)(unaff_EBP - 0x2c78));
    piVar25 = (int *)FUN_00530550(*(void **)(unaff_EBP - 0x2b6c),(undefined4 *)(unaff_EBP - 0x2d88))
    ;
    bVar5 = FUN_0042c6f0((void *)(unaff_EBP - 0x2c78),piVar25);
    if (bVar5) {
      do {
        iVar51 = FUN_00402bc0((int *)(unaff_EBP - 0x2c78));
        iVar51 = *(int *)(iVar51 + 8);
        *(int *)(unaff_EBP - 0x2b64) = iVar51;
        if ((iVar51 != 0) && (0.0 < *(float *)(iVar51 + 0x16c))) {
          *(int *)(unaff_EBP - 0x2b98) = iVar51 + 8;
          piVar25 = (int *)FUN_00530550((void *)((int)pvVar42 + 0x11ac),
                                        (undefined4 *)(unaff_EBP - 0x2fac));
          pvVar23 = (void *)FUN_00530600((void *)((int)pvVar42 + 0x11ac),(int *)(unaff_EBP - 0x304c)
                                         ,(uint *)(iVar51 + 8));
          bVar5 = FUN_0042c6f0(pvVar23,piVar25);
          if (!bVar5) {
            pfVar33 = (float *)FUN_004013d0((void *)(iVar51 + 0x80),0);
            puVar24 = (undefined4 *)(*(int *)(unaff_EBP - 0x2b14) + 0x10);
            *(float *)(unaff_EBP - 0x2b1c) = *pfVar33 * 0.7 + *(float *)(unaff_EBP - 0x2b4c);
            uVar28 = 0x53a01f;
            FUN_00402a40((void *)(unaff_EBP - 0xe70),puVar24);
            cVar4 = *(char *)(*(int *)(unaff_EBP - 0x2b14) + 0x68);
            if ((((cVar4 == '\x1e') || (cVar4 == '\x1f')) || (cVar4 == ' ')) || (cVar4 == '!')) {
              uVar64 = *(undefined4 *)(unaff_EBP - 0x2b4c);
              uVar65 = 0x53a054;
              FUN_00402a10((ulonglong *)&stack0xfffffff8);
              uVar62 = 0;
              uVar67 = 0x53a060;
              FUN_004cde40(&stack0xfffffff0,0);
              FUN_004cde40(&stack0xffffffe8,0);
              puVar26 = FUN_00406380((void *)(unaff_EBP - 0x2094),uVar67,uVar62,uVar65,uVar64,uVar28
                                     ,puVar24);
              puVar26 = FUN_00402cb0((void *)(unaff_EBP - 0x110),(uint *)(unaff_EBP - 0x23c4),
                                     puVar26);
              FUN_00402a40((void *)(unaff_EBP - 0xe70),puVar26);
            }
            puVar27 = (uint *)(*(int *)(unaff_EBP - 0x2b64) + 0x10);
            puVar26 = (uint *)(unaff_EBP - 0x34ac);
            *(uint **)(unaff_EBP - 0x2b40) = puVar27;
            puVar27 = FUN_00402c50((void *)(unaff_EBP - 0x110),(uint *)(unaff_EBP - 0x20c4),puVar27)
            ;
            ppVar41 = (pair<unsigned___int64,unsigned___int64> *)FUN_0041cba0(puVar27);
            ppVar41 = std::pair<unsigned___int64,unsigned___int64>::
                      operator=<std::pair<unsigned___int64,unsigned___int64>,0>
                                ((pair<unsigned___int64,unsigned___int64> *)(unaff_EBP - 0x1c0c),
                                 ppVar41);
            puVar26 = FUN_0041ce90(ppVar41,puVar26);
            uVar28 = FUN_004dade0(puVar26);
            if ((char)uVar28 != '\0') {
              puVar26 = (uint *)FUN_004e2320(*(void **)(unaff_EBP - 0x2b40),2);
              piVar25 = (int *)(unaff_EBP - 0x34dc);
              pvVar23 = (void *)FUN_004e2320((void *)(unaff_EBP - 0x110),2);
              plVar32 = (longlong *)FUN_00401490(pvVar23,piVar25,puVar26);
              fVar55 = FUN_00401420(plVar32);
              fVar55 = FUN_00401ca0((float)fVar55);
              *(float *)(unaff_EBP - 0x2b48) = (float)fVar55;
              pfVar36 = (float *)FUN_004013d0((void *)(iVar51 + 0x80),2);
              pvVar42 = *(void **)(unaff_EBP - 0x2b14);
              *(float *)(unaff_EBP - 0x2b1c) = *pfVar36 * 0.5;
              pfVar36 = (float *)FUN_004013d0((void *)((int)pvVar42 + 0x80),2);
              fVar56 = *(float *)(unaff_EBP - 0x2b1c) + *pfVar36 + *(float *)(unaff_EBP - 0x2b4c);
              if ((fVar56 < *(float *)(unaff_EBP - 0x2b48) ||
                   fVar56 == *(float *)(unaff_EBP - 0x2b48)) ||
                 (cVar4 = FUN_004d4d80((uint *)(unaff_EBP - 0xe70),*(uint **)(unaff_EBP - 0x2b40),
                                       '\x01',200.0), cVar4 == '\0')) goto LAB_0053a977;
              fVar56 = *(float *)(unaff_EBP - 0x2b64);
              uVar28 = FUN_004d18c0(*(int *)(unaff_EBP - 0x2b14),(int)fVar56);
              if ((char)uVar28 == '\0') {
                puVar26 = (uint *)((int)fVar56 + 8);
              }
              else {
                if (*(int *)((int)fVar56 + 0x128) != 0) {
                  FUN_00530690((void *)(*(int *)(unaff_EBP - 0x2b14) + 0x11b4),
                               (undefined4 *)(unaff_EBP - 0x34fc),(uint *)((int)fVar56 + 8));
                  goto LAB_0053a971;
                }
                puVar26 = FUN_00402c50((void *)((int)fVar56 + 0x10),(uint *)(unaff_EBP - 0x26c4),
                                       (uint *)(*(int *)(unaff_EBP - 0x2b14) + 0x10));
                FUN_00402550((void *)(unaff_EBP - 0xe0),(longlong *)puVar26);
                puVar24 = (undefined4 *)FUN_004013d0((void *)(unaff_EBP - 0xe0),2);
                *puVar24 = 0;
                fVar55 = FUN_004021b0((float *)(unaff_EBP - 0xe0));
                *(float *)(unaff_EBP - 0x2b1c) = (float)fVar55;
                if (0.01 < *(float *)(unaff_EBP - 0x2b1c)) {
                  FUN_00401fb0((float *)(unaff_EBP - 0xe0));
                }
                iVar51 = *(int *)(unaff_EBP - 0x2b14);
                *puVar24 = 0x3e800000;
                if (*(char *)(iVar51 + 0x13c0) == '\0') {
                  bVar5 = FUN_0040f520(iVar51);
                  *(undefined1 *)(unaff_EBP - 0x2c08) = 0;
                  if (bVar5) goto LAB_0053a28f;
                }
                else {
LAB_0053a28f:
                  *(undefined1 *)(unaff_EBP - 0x2c08) = 1;
                }
                pvVar23 = *(void **)(unaff_EBP - 0x2b14);
                fVar55 = FUN_0040f8f0((int)pvVar23,(uint)*(byte *)((int)pvVar23 + 0x68));
                pfVar36 = *(float **)(unaff_EBP - 0x2bb8);
                *(float *)(unaff_EBP - 0x2b1c) = (float)fVar55;
                fVar55 = FUN_004024e0(*pfVar36 / *pfVar33);
                FUN_00401610((void *)(unaff_EBP - 0xe0),(float)fVar55);
                FUN_00401610((void *)(unaff_EBP - 0xe0),*(float *)(unaff_EBP - 0x2b1c));
                bVar6 = *(byte *)((int)pvVar23 + 0x68);
                if (((bVar6 == 0x57) || (bVar6 == 0x58)) ||
                   ((bVar6 == 0x1e || (((bVar6 == 0x1f || (bVar6 == 0x20)) || (bVar6 == 0x21)))))) {
                  fVar55 = FUN_00409d10((uint)bVar6);
                  *(float *)(unaff_EBP - 0x2b1c) = (float)fVar55;
                  fVar55 = FUN_00411ad0(pvVar23);
                  fVar56 = *(float *)(unaff_EBP - 0x2b1c);
                  *(float *)(unaff_EBP - 0x2b48) = (float)fVar55;
                  *(float *)(unaff_EBP - 0x2b1c) = fVar56 * *(float *)(unaff_EBP - 0x2b48);
                  iVar51 = rand();
                  fVar56 = (1.25 - ((float)iVar51 * 0.5) / 32767.0) * *(float *)(unaff_EBP - 0x2b1c)
                           * 1.0;
                }
                else {
                  *(undefined4 *)(unaff_EBP - 0x2b90) = *(undefined4 *)((int)pvVar23 + 0x13b4);
                  fVar55 = FUN_00409d10((uint)bVar6);
                  *(float *)(unaff_EBP - 0x2b1c) = (float)fVar55;
                  fVar55 = FUN_00408f70(pvVar23);
                  fVar56 = *(float *)(unaff_EBP - 0x2b90);
                  *(float *)(unaff_EBP - 0x2b48) = (float)fVar55;
                  *(float *)(unaff_EBP - 0x2b1c) =
                       *(float *)(unaff_EBP - 0x2b1c) * *(float *)(unaff_EBP - 0x2b48) *
                       (fVar56 * fVar56 * 5.0 + *(float *)(unaff_EBP - 0x2b5c));
                  iVar51 = rand();
                  fVar56 = ((1.25 - ((float)iVar51 * 0.5) / 32767.0) + 0.0) *
                           *(float *)(unaff_EBP - 0x2b1c);
                }
                cVar4 = *(char *)(unaff_EBP - 0x2c08);
                *(float *)(unaff_EBP - 0x2b20) = fVar56;
                if (cVar4 != '\0') {
                  *(float *)(unaff_EBP - 0x2b20) = fVar56 * 2.0;
                }
                iVar51 = *(int *)(unaff_EBP - 0x2b14);
                bVar5 = FUN_00530540(iVar51 + 0x11ac);
                if ((!bVar5) ||
                   (*(undefined1 *)(unaff_EBP - 0x2b31) = 1, 0 < *(int *)(iVar51 + 300))) {
                  *(undefined1 *)(unaff_EBP - 0x2b31) = 0;
                }
                puVar26 = *(uint **)(unaff_EBP - 0x2b98);
                FUN_00530690((void *)(iVar51 + 0x11ac),(undefined4 *)(unaff_EBP - 0x350c),puVar26);
                iVar51 = *(int *)(unaff_EBP - 0x2b14);
                *(undefined1 *)(iVar51 + 0x13b8) = 1;
                bVar6 = *(byte *)(iVar51 + 0x68);
                if (((bVar6 == 0x1e) || (bVar6 == 0x1f)) || ((bVar6 == 0x20 || (bVar6 == 0x21)))) {
                  cVar4 = '\x01';
                }
                else {
                  cVar4 = '\0';
                }
                pvVar23 = *(void **)(unaff_EBP - 0x2b14);
                fVar56 = *(float *)(unaff_EBP - 0x2b64);
                cVar4 = FUN_004cfd50(*(void **)(unaff_EBP - 0x2b18),fVar56,pvVar23,
                                     *(float *)(unaff_EBP - 0x2b20),
                                     (char)*(undefined4 *)(unaff_EBP - 0x2c08),
                                     (char)*(undefined4 *)(unaff_EBP - 0x2c04),
                                     *(float *)((int)pvVar23 + 0x13b4),(int)pvVar23 + 0x10,
                                     (float *)(unaff_EBP - 0xe0),
                                     *(undefined4 **)(unaff_EBP - 0x2b28),
                                     (undefined4 *)(unaff_EBP - 0x2be8),cVar4,(uint)bVar6,0,'\x01');
                if (cVar4 != '\0') {
                  pvVar23 = *(void **)(unaff_EBP - 0x2b14);
                  if (*(char *)((int)pvVar23 + 0x68) == '\x1e') {
                    bVar5 = FUN_0040f220(pvVar23,0.25);
                    pvVar23 = *(void **)(unaff_EBP - 0x2b14);
                    if (bVar5) {
                      if (*(char *)((int)pvVar23 + 0x141) == '\0') {
                        FUN_004029b0((undefined1 *)(unaff_EBP - 0x2f94));
                        pvVar23 = *(void **)(unaff_EBP - 0x2b14);
                        *(undefined1 *)(unaff_EBP - 0x2f94) = 9;
                        *(undefined4 *)(unaff_EBP - 0x2f8c) = 30000;
                        FUN_00411740(pvVar23,(char *)(unaff_EBP - 0x2f94));
                        FUN_004063d0(unaff_EBP - 0x30ac);
                        uVar28 = *(undefined4 *)(*(int *)(unaff_EBP - 0x2b14) + 8);
                        uVar64 = *(undefined4 *)(*(int *)(unaff_EBP - 0x2b14) + 0xc);
                        *(undefined8 *)(unaff_EBP - 0x309c) = *(undefined8 *)(unaff_EBP - 0x2f94);
                        uVar1 = *(undefined8 *)(unaff_EBP - 0x2f8c);
                        *(undefined4 *)(unaff_EBP - 0x30a8) = uVar64;
                        *(undefined4 *)(unaff_EBP - 0x30a0) = uVar64;
                        iVar51 = *(int *)(unaff_EBP - 0x2b28);
                        *(undefined4 *)(unaff_EBP - 0x30ac) = uVar28;
                        *(undefined4 *)(unaff_EBP - 0x30a4) = uVar28;
                        *(undefined8 *)(unaff_EBP - 0x3094) = uVar1;
                        uVar28 = *(undefined4 *)(unaff_EBP - 0x2f80);
                        *(undefined4 *)(unaff_EBP - 0x308c) = *(undefined4 *)(unaff_EBP - 0x2f84);
                        *(undefined4 *)(unaff_EBP - 0x3088) = uVar28;
                        FUN_00411040((void *)(iVar51 + 0x58),(undefined8 *)(unaff_EBP - 0x30ac));
                        FUN_004c8530(unaff_EBP - 0x9c8);
                        iVar51 = *(int *)(unaff_EBP - 0x2b14);
                        *(undefined4 *)(unaff_EBP - 0x9bc) = 0x2f;
                        FUN_00402550((void *)(unaff_EBP - 0x9c8),(longlong *)(iVar51 + 0x10));
                        FUN_00428590((void *)(*(int *)(unaff_EBP - 0x2b28) + 8),
                                     (undefined4 *)(unaff_EBP - 0x9c8));
                      }
                      pvVar23 = *(void **)(unaff_EBP - 0x2b14);
                    }
                  }
                  if (*(char *)(unaff_EBP - 0x2b31) != '\0') {
                    *(int *)((int)pvVar23 + 0x70) = *(int *)((int)pvVar23 + 0x70) + 1;
                    FUN_004103a0((int)pvVar23);
                    *(undefined4 *)(*(int *)(unaff_EBP - 0x2b14) + 0x74) = 0;
                  }
                  cVar4 = *(char *)(unaff_EBP - 0x2c04);
                  iVar51 = *(int *)(unaff_EBP - 0x2b14);
                  if ((((cVar4 != '\0') && (*(char *)(iVar51 + 0x140) == '\x04')) &&
                      (*(char *)(iVar51 + 0x141) == '\0')) &&
                     (fVar59 = *(float *)(iVar51 + 0x13b4) + *(float *)(iVar51 + 0x1190),
                     *(float *)(iVar51 + 0x1190) = fVar59, 1.0 < fVar59)) {
                    *(undefined4 *)(iVar51 + 0x1190) = 0x3f800000;
                  }
                  if (((*(char *)(*(int *)(unaff_EBP - 0x2b18) + 0xb4) == '\0') ||
                      (iVar51 == *(int *)(*(int *)(unaff_EBP - 0x2b18) + 0xb8))) &&
                     (((*(char *)(unaff_EBP - 0x2b29) == '\0' &&
                       ((cVar4 == '\0' && (*(char *)(iVar51 + 0x68) != '\x1e')))) &&
                      (*(char *)(iVar51 + 0x68) != ' ')))) {
                    iVar31 = rand();
                    iVar51 = *(int *)(unaff_EBP - 0x2b14);
                    *(float *)(unaff_EBP - 0x2b1c) =
                         (1.0 - ((float)iVar31 * 2.0) / 32767.0) * 0.05 + 0.1;
                    iVar51 = FUN_004084b0(iVar51);
                    *(float *)(unaff_EBP - 0x2b40) =
                         ((float)iVar51 / 500.0) * *(float *)(unaff_EBP - 0x2b1c);
                    uVar22 = rand();
                    uVar22 = uVar22 & 0x80000007;
                    bVar5 = uVar22 == 0;
                    if ((int)uVar22 < 0) {
                      bVar5 = (uVar22 - 1 | 0xfffffff8) == 0xffffffff;
                    }
                    fVar59 = *(float *)(unaff_EBP - 0x2b40);
                    if (bVar5) {
                      fVar59 = fVar59 * 1.5;
                    }
                    iVar51 = *(int *)(unaff_EBP - 0x2b14);
                    fVar59 = *(float *)(iVar51 + 0x170) + fVar59;
                    *(float *)(iVar51 + 0x170) = fVar59;
                    if (1.0 < fVar59) {
                      *(undefined4 *)(iVar51 + 0x170) = 0x3f800000;
                    }
                  }
                  *(undefined1 *)(unaff_EBP - 0x2b29) = 1;
                }
              }
              cVar4 = *(char *)(*(int *)(unaff_EBP - 0x2b14) + 0x68);
              if ((((cVar4 == '!') || (cVar4 == ' ')) && (*(char *)(unaff_EBP - 0x2c70) != '\0')) &&
                 ((uVar28 = FUN_004d18c0(*(int *)(unaff_EBP - 0x2b14),(int)fVar56),
                  (char)uVar28 == '\0' &&
                  (*(char *)(*(int *)(unaff_EBP - 0x2b14) + 0x141) == '\x01')))) {
                FUN_00422a90(unaff_EBP - 0xd28);
                FUN_00402a40((void *)(unaff_EBP - 0xd08),(undefined4 *)((int)fVar56 + 0x10));
                iVar51 = rand();
                pvVar23 = *(void **)(unaff_EBP - 0x2b14);
                *(float *)(unaff_EBP - 0x2b48) = 1.25 - ((float)iVar51 * 0.5) / 32767.0;
                fVar55 = FUN_00411ad0(pvVar23);
                *(float *)(unaff_EBP - 0x2b1c) = (float)fVar55;
                iVar51 = *(int *)(unaff_EBP - 0x2b14);
                *(float *)(unaff_EBP - 0xd18) =
                     *(float *)(unaff_EBP - 0x2b1c) * *(float *)(unaff_EBP - 0x2b48) * 1.0 * -0.1;
                bVar5 = FUN_0040f520(iVar51);
                iVar51 = *(int *)(unaff_EBP - 0x2b14);
                *(bool *)(unaff_EBP - 0xd14) = bVar5;
                *(undefined4 *)(unaff_EBP - 0xd28) = *(undefined4 *)(iVar51 + 8);
                pvVar23 = *(void **)(unaff_EBP - 0x2b28);
                *(undefined4 *)(unaff_EBP - 0xd24) = *(undefined4 *)(iVar51 + 0xc);
                *(uint *)(unaff_EBP - 0xd20) = *puVar26;
                *(uint *)(unaff_EBP - 0xd1c) = puVar26[1];
                FUN_00428400(pvVar23,(undefined4 *)(unaff_EBP - 0xd28));
                FUN_004c8530(unaff_EBP - 0x590);
                fVar59 = *(float *)(unaff_EBP - 0x2b14);
                FUN_00402550((void *)(unaff_EBP - 0x590),(longlong *)((int)fVar59 + 0x10));
                iVar51 = *(int *)(unaff_EBP - 0x2b28);
                *(undefined4 *)(unaff_EBP - 0x580) = 0x3f800000;
                *(undefined4 *)(unaff_EBP - 0x584) = 0x2a;
                FUN_00428590((void *)(iVar51 + 8),(undefined4 *)(unaff_EBP - 0x590));
                pvVar23 = *(void **)(unaff_EBP - 0x2b18);
                if ((*(char *)((int)pvVar23 + 0xb4) == '\0') ||
                   ((fVar59 == *(float *)((int)pvVar23 + 0xb8) &&
                    (fVar56 == *(float *)((int)pvVar23 + 0xb8))))) {
                  FUN_004cea80(pvVar23,(uint *)(unaff_EBP - 0xd28),*(void **)(unaff_EBP - 0x2b28),
                               (undefined4 *)(unaff_EBP - 0x2be8));
                }
              }
            }
          }
LAB_0053a971:
          pvVar42 = *(void **)(unaff_EBP - 0x2b14);
        }
LAB_0053a977:
        FUN_00407a30((void *)(unaff_EBP - 0x2c78),(int *)(unaff_EBP - 0x2fb4));
        piVar25 = (int *)FUN_00530550(*(void **)(unaff_EBP - 0x2b6c),
                                      (undefined4 *)(unaff_EBP - 0x2d88));
        bVar5 = FUN_0042c6f0((void *)(unaff_EBP - 0x2c78),piVar25);
      } while (bVar5);
      if (*(char *)(unaff_EBP - 0x2b29) != '\0') {
        iVar51 = *(int *)(unaff_EBP - 0x2b14);
        if ((*(char *)(iVar51 + 0x991) != '\r') &&
           ((*(char *)(iVar51 + 0xaa8) == '\0' || (*(char *)(iVar51 + 0x990) == '\x03')))) {
          FUN_004084b0(iVar51);
          FUN_00537cef();
          return;
        }
        goto code_r0x00537cef;
      }
    }
    goto LAB_0053b968;
  case '\b':
    pvVar42 = *(void **)(unaff_EBP - 0x2b14);
    if (((*(char *)((int)pvVar23 + 0xb4) != '\0') || (*(char *)((int)pvVar42 + 0x60) == '\0')) &&
       (pvVar42 != *(void **)((int)pvVar23 + 0xb8))) break;
    iVar51 = FUN_00407db0(pvVar42,0xffffffff);
    if (*(int *)((int)*(void **)(unaff_EBP - 0x2b14) + 0x6c) <= iVar51) {
      iVar31 = FUN_00407db0(*(void **)(unaff_EBP - 0x2b14),0xffffffff);
      iVar51 = *(int *)(unaff_EBP - 0x2b14);
      if (iVar31 < *(int *)(iVar51 + 0x6c) + *(int *)(unaff_EBP - 0x2b24)) {
        FUN_004c8530(unaff_EBP - 0x7e8);
        FUN_00402550((void *)(unaff_EBP - 0x7e8),(longlong *)(iVar51 + 0x10));
        iVar31 = rand();
        iVar51 = *(int *)(unaff_EBP - 0x2b28);
        *(undefined4 *)(unaff_EBP - 0x7dc) = 0x10;
        *(float *)(unaff_EBP - 0x7d8) = ((float)iVar31 * 0.25) / 32767.0 + 1.0;
        FUN_00428590((void *)(iVar51 + 8),(undefined4 *)(unaff_EBP - 0x7e8));
      }
    }
    iVar51 = *(int *)(*(int *)(unaff_EBP - 0x2b14) + 0x6c);
    if (iVar51 / 200 != (iVar51 + *(int *)(unaff_EBP - 0x2b24)) / 200) {
      FUN_004c8530(unaff_EBP - 0x698);
      FUN_00402550((void *)(unaff_EBP - 0x698),(longlong *)(*(int *)(unaff_EBP - 0x2b14) + 0x10));
      iVar51 = *(int *)(unaff_EBP - 0x2b28);
      fVar56 = *(float *)(*(int *)(unaff_EBP - 0x2b14) + 0x144);
      *(undefined4 *)(unaff_EBP - 0x68c) = 0x37;
      *(float *)(unaff_EBP - 0x688) = fVar56 * 0.5 + 1.0;
      FUN_00428590((void *)(iVar51 + 8),(undefined4 *)(unaff_EBP - 0x698));
    }
    goto LAB_00537cf5;
  case '\x16':
  case '\x17':
  case '\x1a':
    pvVar42 = *(void **)(unaff_EBP - 0x2b14);
    if (((*(char *)((int)pvVar23 + 0xb4) != '\0') || (*(char *)((int)pvVar42 + 0x60) == '\0')) &&
       (pvVar42 != *(void **)((int)pvVar23 + 0xb8))) goto LAB_00537d01;
    iVar51 = FUN_00407db0(pvVar42,0xffffffff);
    if ((*(int *)((int)pvVar42 + 0x6c) <= iVar51) &&
       (iVar51 = FUN_00407db0(pvVar42,0xffffffff),
       iVar51 < *(int *)((int)pvVar42 + 0x6c) + *(int *)(unaff_EBP - 0x2b24))) {
      fVar55 = FUN_0040fb20((int)pvVar42,(uint)*(byte *)((int)pvVar42 + 0x68),-1);
      *(float *)(unaff_EBP - 0x2b1c) = (float)fVar55;
      if (*(float *)(unaff_EBP - 0x2b1c) <= 0.0) {
        fVar56 = *(float *)((int)pvVar42 + 0x170) - *(float *)((int)pvVar42 + 0x144);
      }
      else {
        fVar55 = FUN_0040fb20((int)pvVar42,(uint)*(byte *)((int)pvVar42 + 0x68),-1);
        fVar56 = *(float *)((int)pvVar42 + 0x170);
        *(float *)(unaff_EBP - 0x2b1c) = (float)fVar55;
        fVar56 = fVar56 - *(float *)(unaff_EBP - 0x2b1c);
      }
      *(float *)((int)pvVar42 + 0x170) = fVar56;
      if (*(float *)((int)pvVar42 + 0x170) <= 0.0 && *(float *)((int)pvVar42 + 0x170) != 0.0) {
        *(undefined4 *)((int)pvVar42 + 0x170) = 0;
      }
      *(undefined4 *)((int)pvVar42 + 0x13b4) = *(undefined4 *)((int)pvVar42 + 0x144);
      *(undefined4 *)((int)pvVar42 + 0x144) = 0;
    }
    iVar51 = FUN_00407db0(pvVar42,0xffffffff);
    if (iVar51 < *(int *)((int)pvVar42 + 0x6c)) {
      iVar54 = *(int *)(unaff_EBP - 0x2b24);
LAB_0053cf44:
      if ((*(char *)((int)pvVar42 + 0x68) == '\x1a') && (0.0 < *(float *)((int)pvVar42 + 0x13b4))) {
        iVar51 = FUN_00407db0(pvVar42,0xffffffff);
        if (iVar51 + 300 < *(int *)((int)pvVar42 + 0x6c)) goto LAB_00537cfb;
        iVar51 = FUN_00407db0(pvVar42,0xffffffff);
        iVar54 = *(int *)(unaff_EBP - 0x2b24);
        if (iVar51 + 300 < *(int *)((int)pvVar42 + 0x6c) + iVar54) goto LAB_0053cf9b;
      }
      goto LAB_00537d01;
    }
    iVar51 = FUN_00407db0(pvVar42,0xffffffff);
    iVar54 = *(int *)(unaff_EBP - 0x2b24);
    if (*(int *)((int)pvVar42 + 0x6c) + iVar54 <= iVar51) goto LAB_0053cf44;
LAB_0053cf9b:
    FUN_00422890((undefined4 *)(unaff_EBP - 0x578));
    pfVar33 = FUN_00412670((void *)((int)pvVar42 + 0x160),(float *)(unaff_EBP - 0x19e8));
    puVar24 = (undefined4 *)FUN_004e1520((float *)(unaff_EBP - 0x13a0),100.0,pfVar33);
    FUN_00401060((void *)(unaff_EBP - 0x53c),puVar24);
    bVar6 = *(byte *)((int)pvVar42 + 0x68);
    fVar56 = *(float *)((int)pvVar42 + 0x13b4);
    *(undefined4 *)(unaff_EBP - 0x510) = 0;
    *(undefined4 *)(unaff_EBP - 0x52c) = 0x3f000000;
    if (bVar6 == 0x1a) {
      *(float *)(unaff_EBP - 0x2b40) = fVar56 * 0.2;
      *(float *)(unaff_EBP - 0x524) = fVar56 * 0.2;
      *(float *)(unaff_EBP - 0x52c) = fVar56 * 2.0 + 2.0;
    }
    else {
      *(float *)(unaff_EBP - 0x2b40) = fVar56;
      *(float *)(unaff_EBP - 0x524) = fVar56;
    }
    fVar55 = FUN_0040fb20((int)pvVar42,(uint)bVar6,-1);
    *(float *)(unaff_EBP - 0x2b1c) = (float)fVar55;
    if (*(float *)(unaff_EBP - 0x2b1c) <= 0.0) {
      uVar28 = *(undefined4 *)(unaff_EBP - 0x2b40);
    }
    else {
      fVar55 = FUN_0040fb20((int)pvVar42,(uint)*(byte *)((int)pvVar42 + 0x68),-1);
      *(float *)(unaff_EBP - 0x524) = (float)fVar55;
      uVar28 = *(undefined4 *)(unaff_EBP - 0x524);
    }
    *(undefined4 *)(unaff_EBP - 0x520) = uVar28;
    if ((0.0 < *(float *)((int)pvVar42 + 0x13b4)) ||
       (cVar4 = *(char *)((int)pvVar42 + 0x68), *(undefined1 *)(unaff_EBP - 0x51c) = 0,
       cVar4 == '\x17')) {
      *(undefined1 *)(unaff_EBP - 0x51c) = 1;
    }
    FUN_00402a40((void *)(unaff_EBP - 0x560),(undefined4 *)((int)pvVar42 + 0x10));
    pvVar23 = *(void **)(unaff_EBP - 0x2b14);
    *(undefined4 *)(unaff_EBP - 0x578) = *(undefined4 *)((int)pvVar23 + 8);
    *(undefined4 *)(unaff_EBP - 0x574) = *(undefined4 *)((int)pvVar23 + 0xc);
    FUN_00401060((void *)(unaff_EBP - 0x570),(undefined4 *)((int)pvVar23 + 0x1b0));
    if ((*(char *)(unaff_EBP - 0x51c) != '\0') &&
       (puVar24 = FUN_0040ef90(pvVar23,10), puVar24 != (undefined4 *)0x0)) {
      FUN_004029b0((undefined1 *)(unaff_EBP - 0x2f34));
      *(undefined1 *)(unaff_EBP - 0x2f34) = 10;
      *(undefined4 *)(unaff_EBP - 0x2f2c) = 0;
      FUN_00411740(pvVar23,(char *)(unaff_EBP - 0x2f34));
      FUN_004063d0(unaff_EBP - 0x319c);
      uVar28 = *(undefined4 *)((int)pvVar23 + 8);
      uVar1 = *(undefined8 *)(unaff_EBP - 0x2f34);
      uVar64 = *(undefined4 *)((int)pvVar23 + 0xc);
      *(undefined4 *)(unaff_EBP - 0x319c) = uVar28;
      *(undefined4 *)(unaff_EBP - 0x3194) = uVar28;
      *(undefined8 *)(unaff_EBP - 0x318c) = uVar1;
      iVar51 = *(int *)(unaff_EBP - 0x2b28);
      *(undefined8 *)(unaff_EBP - 0x3184) = *(undefined8 *)(unaff_EBP - 0x2f2c);
      uVar1 = *(undefined8 *)(unaff_EBP - 0x2f24);
      *(undefined4 *)(unaff_EBP - 0x3198) = uVar64;
      *(undefined4 *)(unaff_EBP - 0x3190) = uVar64;
      *(undefined8 *)(unaff_EBP - 0x317c) = uVar1;
      FUN_00411040((void *)(iVar51 + 0x58),(undefined8 *)(unaff_EBP - 0x319c));
    }
    bVar6 = *(byte *)((int)pvVar23 + 0x68);
    if (bVar6 == 0x1a) {
      uVar28 = *(undefined4 *)((int)pvVar23 + 0xb0);
      *(undefined4 *)(unaff_EBP - 0x518) = 2;
      *(undefined4 *)(unaff_EBP - 0x528) = uVar28;
    }
    else {
      *(undefined4 *)(unaff_EBP - 0x518) = 0;
    }
    *(undefined4 *)(unaff_EBP - 0x2b40) = 0x40a00000;
    if (bVar6 == 0x1a) {
      *(undefined4 *)(unaff_EBP - 0x2b40) = 0x3f800000;
    }
    *(undefined4 *)(unaff_EBP - 0x2b20) = 0x3f800000;
    if (0.0 < *(float *)(unaff_EBP - 0x524)) {
      *(undefined4 *)(unaff_EBP - 0x2b20) = 0x3dcccccd;
    }
    if (bVar6 == 0x17) {
      *(undefined4 *)(unaff_EBP - 0x2b20) = 0;
    }
    *(undefined4 *)(unaff_EBP - 0x2b90) = *(undefined4 *)((int)pvVar23 + 0x13b4);
    fVar55 = FUN_00409d10((uint)bVar6);
    *(float *)(unaff_EBP - 0x2b1c) = (float)fVar55;
    fVar55 = FUN_00408f70(pvVar23);
    fVar56 = *(float *)(unaff_EBP - 0x2b90);
    *(float *)(unaff_EBP - 0x2b48) = (float)fVar55;
    *(float *)(unaff_EBP - 0x2b1c) =
         *(float *)(unaff_EBP - 0x2b1c) * *(float *)(unaff_EBP - 0x2b48) *
         (fVar56 * fVar56 * *(float *)(unaff_EBP - 0x2b40) + *(float *)(unaff_EBP - 0x2b20));
    iVar31 = rand();
    iVar51 = *(int *)(unaff_EBP - 0x2b18);
    *(float *)(unaff_EBP - 0x530) =
         ((1.25 - ((float)iVar31 * 0.5) / 32767.0) + 0.0) * *(float *)(unaff_EBP - 0x2b1c);
    FUN_00428360((void *)(iVar51 + 0x14),(undefined4 *)(unaff_EBP - 0x578));
    FUN_00428360((void *)(*(int *)(unaff_EBP - 0x2b28) + 0x20),(undefined4 *)(unaff_EBP - 0x578));
    FUN_004c8530(unaff_EBP - 0x180);
    FUN_00402550((void *)(unaff_EBP - 0x180),(longlong *)((int)pvVar42 + 0x10));
    pvVar42 = *(void **)(unaff_EBP - 0x2b14);
    cVar4 = *(char *)((int)pvVar42 + 0x68);
    if ((cVar4 == '\x16') || (cVar4 == '\x17')) {
      iVar51 = rand();
      fVar56 = ((float)iVar51 * 0.5) / 32767.0;
      if (*(char *)(unaff_EBP - 0x51c) == '\0') {
        fVar56 = fVar56 + 2.0;
        goto LAB_0053d3c2;
      }
      fVar56 = fVar56 + 1.0;
      *(undefined4 *)(unaff_EBP - 0x174) = 0x16;
    }
    else if (cVar4 == '\x1a') {
      iVar51 = rand();
      fVar56 = ((float)iVar51 * 0.51) / 32767.0 + 0.7;
LAB_0053d3c2:
      *(undefined4 *)(unaff_EBP - 0x174) = 0xf;
    }
    else {
      iVar51 = rand();
      *(undefined4 *)(unaff_EBP - 0x174) = 0x16;
      fVar56 = ((float)iVar51 * 0.5) / 32767.0 + 1.0;
    }
    iVar51 = *(int *)(unaff_EBP - 0x2b28);
    *(float *)(unaff_EBP - 0x170) = fVar56;
    FUN_00428590((void *)(iVar51 + 8),(undefined4 *)(unaff_EBP - 0x180));
    pvVar23 = *(void **)(unaff_EBP - 0x2b18);
    goto LAB_00537cfb;
  case '\x18':
  case '\x19':
  case '\x1b':
  case '$':
  case ';':
  case '?':
  case '@':
    iVar51 = *(int *)(unaff_EBP - 0x2b14);
    if (((*(char *)((int)pvVar23 + 0xb4) == '\0') && (*(char *)(iVar51 + 0x60) != '\0')) ||
       (iVar51 == *(int *)((int)pvVar23 + 0xb8))) {
      if (*(int *)(iVar51 + 0x6c) / 200 == (*(int *)(iVar51 + 0x6c) + iVar54) / 200)
      goto LAB_00537cf5;
      FUN_004c8530(unaff_EBP - 0x740);
      pvVar42 = *(void **)(unaff_EBP - 0x2b14);
      FUN_00402550((void *)(unaff_EBP - 0x740),(longlong *)((int)pvVar42 + 0x10));
      fVar56 = *(float *)((int)pvVar42 + 0x144);
      iVar51 = *(int *)(unaff_EBP - 0x2b28);
      *(undefined4 *)(unaff_EBP - 0x734) = 0x37;
      *(float *)(unaff_EBP - 0x730) = fVar56 * 0.5 + 1.0;
      FUN_00428590((void *)(iVar51 + 8),(undefined4 *)(unaff_EBP - 0x740));
      goto LAB_00537cfb;
    }
    break;
  case '\x1c':
  case '^':
  case '_':
    pvVar42 = *(void **)(unaff_EBP - 0x2b14);
    if (((*(char *)((int)pvVar23 + 0xb4) == '\0') && (*(char *)((int)pvVar42 + 0x60) != '\0')) ||
       (pvVar42 == *(void **)((int)pvVar23 + 0xb8))) {
      if (cVar4 == 'h') {
        if (*(int *)((int)pvVar42 + 0x6c) == 0) {
          fVar56 = *(float *)((int)pvVar42 + 0x170) - *(float *)((int)pvVar42 + 0x144);
          *(float *)((int)pvVar42 + 0x170) = fVar56;
          if (fVar56 < 0.0) {
            *(undefined4 *)((int)pvVar42 + 0x170) = 0;
          }
          pvVar18 = *(void **)(unaff_EBP - 0x2b14);
          *(undefined4 *)((int)pvVar18 + 0x13b4) = *(undefined4 *)((int)pvVar42 + 0x144);
          *(undefined4 *)((int)pvVar18 + 0x144) = 0;
          pvVar42 = pvVar18;
        }
      }
      else {
        if (cVar4 == '\x1c') {
          *(float *)((int)pvVar42 + 0x170) =
               *(float *)((int)pvVar42 + 0x170) - *(float *)(unaff_EBP - 0x2b88) * 0.0002;
        }
        else {
          iVar51 = FUN_00407db0(pvVar42,0xffffffff);
          pvVar42 = *(void **)(unaff_EBP - 0x2b14);
          if (iVar51 < *(int *)((int)pvVar42 + 0x6c)) {
LAB_0053bc5a:
            iVar54 = *(int *)(unaff_EBP - 0x2b24);
          }
          else {
            iVar51 = FUN_00407db0(pvVar42,0xffffffff);
            iVar54 = *(int *)(unaff_EBP - 0x2b24);
            if (iVar51 < *(int *)((int)pvVar42 + 0x6c) + iVar54) {
              fVar55 = FUN_0040fb20((int)pvVar42,(uint)*(byte *)((int)pvVar42 + 0x68),-1);
              *(float *)(unaff_EBP - 0x2b1c) = (float)fVar55;
              *(float *)((int)pvVar42 + 0x170) =
                   *(float *)((int)pvVar42 + 0x170) - *(float *)(unaff_EBP - 0x2b1c);
              puVar24 = FUN_0040ef90(pvVar42,9);
              if (puVar24 != (undefined4 *)0x0) {
                FUN_004029b0((undefined1 *)(unaff_EBP - 0x2ed4));
                *(undefined1 *)(unaff_EBP - 0x2ed4) = 9;
                *(undefined4 *)(unaff_EBP - 0x2ecc) = 0;
                FUN_00411740(pvVar42,(char *)(unaff_EBP - 0x2ed4));
                FUN_004063d0(unaff_EBP - 0x314c);
                uVar28 = *(undefined4 *)((int)pvVar42 + 0xc);
                uVar64 = *(undefined4 *)((int)pvVar42 + 8);
                *(undefined8 *)(unaff_EBP - 0x313c) = *(undefined8 *)(unaff_EBP - 0x2ed4);
                uVar1 = *(undefined8 *)(unaff_EBP - 0x2ecc);
                *(undefined4 *)(unaff_EBP - 0x3148) = uVar28;
                *(undefined4 *)(unaff_EBP - 0x3140) = uVar28;
                iVar51 = *(int *)(unaff_EBP - 0x2b28);
                *(undefined4 *)(unaff_EBP - 0x314c) = uVar64;
                *(undefined4 *)(unaff_EBP - 0x3144) = uVar64;
                *(undefined8 *)(unaff_EBP - 0x3134) = uVar1;
                *(undefined8 *)(unaff_EBP - 0x312c) = *(undefined8 *)(unaff_EBP - 0x2ec4);
                FUN_00411040((void *)(iVar51 + 0x58),(undefined8 *)(unaff_EBP - 0x314c));
              }
              goto LAB_0053bc5a;
            }
          }
          pvVar42 = *(void **)(unaff_EBP - 0x2b14);
        }
        if (*(float *)((int)pvVar42 + 0x170) <= 0.0 && *(float *)((int)pvVar42 + 0x170) != 0.0) {
          *(undefined4 *)((int)pvVar42 + 0x170) = 0;
          break;
        }
      }
      iVar51 = FUN_00407db0(pvVar42,0xffffffff);
      pvVar42 = *(void **)(unaff_EBP - 0x2b14);
      iVar54 = *(int *)(unaff_EBP - 0x2b24);
      if (*(int *)((int)pvVar42 + 0x6c) + iVar54 < iVar51) goto LAB_00537d01;
      iVar51 = FUN_00407db0(pvVar42,0xffffffff);
      iVar31 = FUN_00411d60(*(void **)(unaff_EBP - 0x2b14),0xffffffff);
      if (iVar51 + iVar31 <= *(int *)((int)*(void **)(unaff_EBP - 0x2b14) + 0x6c))
      goto LAB_00537cf5;
      iVar51 = FUN_00407db0(*(void **)(unaff_EBP - 0x2b14),0xffffffff);
      pvVar42 = *(void **)(unaff_EBP - 0x2b14);
      if (*(int *)((int)pvVar42 + 0x6c) <= iVar51) {
        iVar51 = FUN_00407db0(pvVar42,0xffffffff);
        iVar54 = *(int *)(unaff_EBP - 0x2b24);
        if (*(int *)((int)pvVar42 + 0x6c) + iVar54 <= iVar51) goto LAB_0053bc91;
LAB_0053bd1c:
        puVar24 = (undefined4 *)(*(int *)(unaff_EBP - 0x2b14) + 0x160);
        *(undefined4 **)(unaff_EBP - 0x2b50) = puVar24;
        FUN_00401060((void *)(unaff_EBP - 0x40),puVar24);
        fVar55 = FUN_004021b0((float *)(unaff_EBP - 0x40));
        *(float *)(unaff_EBP - 0x2b1c) = (float)fVar55;
        if (0.0 < *(float *)(unaff_EBP - 0x2b1c)) {
          FUN_00401fb0((float *)(unaff_EBP - 0x40));
        }
        FUN_00411800(*(void **)(unaff_EBP - 0x2b14),(uint *)(unaff_EBP - 0x314));
        uVar60 = 0x100000000;
        fVar56 = 200.0;
        pfVar33 = FUN_00412670(puVar24,(float *)(unaff_EBP - 0x1328));
        fVar55 = (float10)FUN_004d6730(*(void **)(unaff_EBP - 0x2b18),(uint *)(unaff_EBP - 0x314),
                                       pfVar33,fVar56,(char)uVar60,(char)(uVar60 >> 0x20));
        *(float *)(unaff_EBP - 0x2b1c) = (float)fVar55;
        if (*(char *)(*(int *)(unaff_EBP - 0x2b14) + 0x68) == 'h') {
          uVar28 = 0x41200000;
        }
        else {
          uVar28 = *(undefined4 *)(unaff_EBP - 0x2b1c);
        }
        piVar25 = (int *)(*(int *)(unaff_EBP - 0x2b14) + 0x11ac);
        *(undefined4 *)(unaff_EBP - 0x2b3c) = uVar28;
        *(int **)(unaff_EBP - 0x2b64) = piVar25;
        FUN_004f8520(piVar25);
        FUN_004f8520((int *)(*(int *)(unaff_EBP - 0x2b14) + 0x11b4));
        pvVar23 = *(void **)(unaff_EBP - 0x2b14);
        *(undefined1 *)(unaff_EBP - 0x2b29) = 0;
        if ((*(char *)((int)pvVar23 + 0x140) == '\x03') &&
           (*(char *)((int)pvVar23 + 0x141) == '\x01')) {
          iVar51 = FUN_00407db0(pvVar23,0xffffffff);
          if ((*(int *)((int)*(void **)(unaff_EBP - 0x2b14) + 0x6c) <= iVar51) &&
             (iVar51 = FUN_00407db0(*(void **)(unaff_EBP - 0x2b14),0xffffffff),
             iVar51 < *(int *)(*(int *)(unaff_EBP - 0x2b14) + 0x6c) + *(int *)(unaff_EBP - 0x2b24)))
          {
            FUN_00422890((undefined4 *)(unaff_EBP - 0xb08));
            pvVar23 = *(void **)(unaff_EBP - 0x2b14);
            *(undefined4 *)(unaff_EBP - 0xaa8) = 3;
            *(undefined1 *)(unaff_EBP - 0xaac) = 0;
            *(undefined4 *)(unaff_EBP - 0xab4) = 0;
            *(undefined4 *)(unaff_EBP - 0xab0) = 0;
            fVar55 = FUN_00411ad0(pvVar23);
            *(float *)(unaff_EBP - 0x2b1c) = (float)fVar55;
            fVar56 = *(float *)(unaff_EBP - 0x2b1c);
            *(undefined4 *)(unaff_EBP - 0xb08) = *(undefined4 *)(*(int *)(unaff_EBP - 0x2b14) + 8);
            *(undefined4 *)(unaff_EBP - 0xb04) = *(undefined4 *)(*(int *)(unaff_EBP - 0x2b14) + 0xc)
            ;
            *(float *)(unaff_EBP - 0xac0) = fVar56 * 0.1;
            *(undefined4 *)(unaff_EBP - 0xabc) = 0x40800000;
            *(undefined1 *)(unaff_EBP - 0xaa4) = 2;
            pfVar33 = FUN_00412670(puVar24,(float *)(unaff_EBP - 0x1a78));
            FUN_004e1520((float *)(unaff_EBP - 0x1340),*(float *)(unaff_EBP - 0x2b3c),pfVar33);
            FUN_00402510(unaff_EBP - 0x194c);
            puVar26 = FUN_00402cb0((void *)(unaff_EBP - 0x314),(uint *)(unaff_EBP - 0x2154),
                                   (uint *)(unaff_EBP - 0x194c));
            FUN_00402a40((void *)(unaff_EBP - 0xaf0),puVar26);
            *(undefined4 *)(unaff_EBP - 0xab8) = 0x3f800000;
            *(undefined4 *)(unaff_EBP - 0xaa0) = 0;
            puVar45 = FUN_00401080((void *)(unaff_EBP - 0x16a0),0,0,0);
            FUN_00401060((void *)(unaff_EBP - 0xacc),puVar45);
            FUN_00428360((void *)(*(int *)(unaff_EBP - 0x2b18) + 0x14),
                         (undefined4 *)(unaff_EBP - 0xb08));
            FUN_00428360((void *)(*(int *)(unaff_EBP - 0x2b28) + 0x20),
                         (undefined4 *)(unaff_EBP - 0xb08));
          }
        }
        fVar56 = *(float *)(unaff_EBP - 0x2b3c);
        *(undefined4 *)(unaff_EBP - 0x2b40) = 0;
        if (0.0 < fVar56) {
          pvVar23 = *(void **)(unaff_EBP - 0x2b6c);
          *(undefined4 *)(unaff_EBP - 0x2b54) = 0;
          do {
            FUN_00428070(pvVar23,(undefined4 *)(unaff_EBP - 0x2c94));
            piVar25 = (int *)FUN_00530550(pvVar23,(undefined4 *)(unaff_EBP - 0x2ce4));
            bVar5 = FUN_0042c6f0((void *)(unaff_EBP - 0x2c94),piVar25);
            if (bVar5) {
              do {
                iVar51 = FUN_00402bc0((int *)(unaff_EBP - 0x2c94));
                fVar56 = *(float *)(iVar51 + 8);
                if ((fVar56 != 0.0) && (fVar56 != *(float *)(unaff_EBP - 0x2b14))) {
                  if (((*(int *)((int)fVar56 + 8) != *(int *)(*(int *)(unaff_EBP - 0x2b14) + 0x11c0)
                       ) || (*(int *)((int)fVar56 + 0xc) !=
                             *(int *)(*(int *)(unaff_EBP - 0x2b14) + 0x11c4))) &&
                     (0.0 < *(float *)((int)fVar56 + 0x16c))) {
                    piVar25 = (int *)FUN_00530550(*(void **)(unaff_EBP - 0x2b64),
                                                  (undefined4 *)(unaff_EBP - 0x2fbc));
                    pvVar23 = (void *)FUN_00530600(*(void **)(unaff_EBP - 0x2b64),
                                                   (int *)(unaff_EBP - 0x3068),
                                                   (uint *)((int)fVar56 + 8));
                    bVar5 = FUN_0042c6f0(pvVar23,piVar25);
                    if ((!bVar5) && (*(int *)((int)fVar56 + 0x128) == 0)) {
                      FUN_004013d0((void *)((int)fVar56 + 0x80),0);
                      puVar26 = (uint *)(unaff_EBP - 0x353c);
                      puVar27 = FUN_00402c50((void *)(unaff_EBP - 0x314),
                                             (uint *)(unaff_EBP - 0x2424),
                                             (uint *)((int)fVar56 + 0x10));
                      ppVar41 = (pair<unsigned___int64,unsigned___int64> *)FUN_0041cba0(puVar27);
                      ppVar41 = std::pair<unsigned___int64,unsigned___int64>::
                                operator=<std::pair<unsigned___int64,unsigned___int64>,0>
                                          ((pair<unsigned___int64,unsigned___int64> *)
                                           (unaff_EBP - 0x1bac),ppVar41);
                      puVar26 = FUN_0041ce90(ppVar41,puVar26);
                      uVar28 = FUN_004dade0(puVar26);
                      if ((char)uVar28 != '\0') {
                        puVar26 = (uint *)FUN_004e2320((void *)((int)fVar56 + 0x10),2);
                        piVar25 = (int *)(unaff_EBP - 0x354c);
                        pvVar23 = (void *)FUN_004e2320((void *)(unaff_EBP - 0x314),2);
                        plVar32 = (longlong *)FUN_00401490(pvVar23,piVar25,puVar26);
                        fVar55 = FUN_00401420(plVar32);
                        fVar55 = FUN_00401ca0((float)fVar55);
                        *(float *)(unaff_EBP - 0x2b1c) = (float)fVar55;
                        pfVar33 = (float *)FUN_004013d0((void *)((int)fVar56 + 0x80),2);
                        fVar59 = *pfVar33 * 0.5 + 1.0;
                        if (*(float *)(unaff_EBP - 0x2b1c) <= fVar59 &&
                            fVar59 != *(float *)(unaff_EBP - 0x2b1c)) {
                          FUN_00530690(*(void **)(unaff_EBP - 0x2b64),
                                       (undefined4 *)(unaff_EBP - 0x355c),(uint *)((int)fVar56 + 8))
                          ;
                          bVar5 = FUN_0040f520(*(int *)(unaff_EBP - 0x2b14));
                          *(bool *)(unaff_EBP - 0x2ba8) = bVar5;
                          puVar26 = FUN_00402c50((void *)((int)fVar56 + 0x10),
                                                 (uint *)(unaff_EBP - 0x2184),
                                                 (uint *)(*(int *)(unaff_EBP - 0x2b14) + 0x10));
                          FUN_00402550((void *)(unaff_EBP - 0x2a8),(longlong *)puVar26);
                          puVar24 = (undefined4 *)FUN_004013d0((void *)(unaff_EBP - 0x2a8),2);
                          *puVar24 = 0;
                          fVar55 = FUN_004021b0((float *)(unaff_EBP - 0x2a8));
                          *(float *)(unaff_EBP - 0x2b1c) = (float)fVar55;
                          if (0.01 < *(float *)(unaff_EBP - 0x2b1c)) {
                            FUN_00401fb0((float *)(unaff_EBP - 0x2a8));
                          }
                          *puVar24 = 0x3e800000;
                          iVar51 = rand();
                          pvVar23 = *(void **)(unaff_EBP - 0x2b14);
                          *(float *)(unaff_EBP - 0x2b48) = ((float)iVar51 * 0.05) / 32767.0 + 1.0;
                          fVar55 = FUN_00411ad0(pvVar23);
                          *(float *)(unaff_EBP - 0x2b1c) = (float)fVar55;
                          iVar51 = *(int *)(unaff_EBP - 0x2b14);
                          cVar4 = *(char *)(iVar51 + 0x68);
                          fVar59 = *(float *)(unaff_EBP - 0x2b1c) * 1.5 *
                                   *(float *)(unaff_EBP - 0x2b48);
                          *(float *)(unaff_EBP - 0x2b5c) = fVar59;
                          if (cVar4 == 'h') {
                            *(undefined4 *)(unaff_EBP - 0x2b90) = *(undefined4 *)(iVar51 + 0x13b4);
                            fVar55 = FUN_00409d10(0x68);
                            *(float *)(unaff_EBP - 0x2b1c) = (float)fVar55;
                            fVar55 = FUN_00408f70(*(void **)(unaff_EBP - 0x2b14));
                            *(float *)(unaff_EBP - 0x2b48) = (float)fVar55;
                            *(float *)(unaff_EBP - 0x2b1c) =
                                 *(float *)(unaff_EBP - 0x2b1c) * *(float *)(unaff_EBP - 0x2b48) *
                                 *(float *)(unaff_EBP - 0x2b90) * *(float *)(unaff_EBP - 0x2b90) *
                                 10.0;
                            iVar31 = rand();
                            iVar51 = *(int *)(unaff_EBP - 0x2b14);
                            fVar59 = ((1.25 - ((float)iVar31 * 0.5) / 32767.0) + 0.0) *
                                     *(float *)(unaff_EBP - 0x2b1c);
                            *(float *)(unaff_EBP - 0x2b5c) = fVar59;
                          }
                          if (*(char *)(unaff_EBP - 0x2ba8) != '\0') {
                            *(float *)(unaff_EBP - 0x2b5c) = fVar59 * 2.0;
                          }
                          uVar28 = FUN_004d18c0(iVar51,(int)fVar56);
                          if ((char)uVar28 != '\0') {
                            *(undefined4 *)(unaff_EBP - 0x2b20) = 0;
                            FUN_00401080((void *)(unaff_EBP - 0x284),0,0,0);
                            cVar4 = *(char *)(*(int *)(unaff_EBP - 0x2b14) + 0x68);
                            if (cVar4 == '_') {
                              *(undefined4 *)(unaff_EBP - 0x2b20) = 0x3dcccccd;
                            }
                            puVar24 = *(undefined4 **)(unaff_EBP - 0x2b50);
                            if (cVar4 == 'h') {
                              pfVar33 = (float *)(unaff_EBP - 0x1358);
                              fVar59 = 10.0;
                              *(undefined4 *)(unaff_EBP - 0x2b20) =
                                   *(undefined4 *)(*(int *)(unaff_EBP - 0x2b14) + 0x13b4);
                              pfVar36 = FUN_00412670(puVar24,(float *)(unaff_EBP - 0x18a4));
                              puVar45 = (undefined4 *)FUN_004079f0(pfVar36,pfVar33,fVar59);
                              FUN_00401060((void *)(unaff_EBP - 0x284),puVar45);
                              puVar45 = (undefined4 *)FUN_004013d0((void *)(unaff_EBP - 0x284),2);
                              *puVar45 = 0x40a00000;
                            }
                            cVar4 = *(char *)(*(int *)(unaff_EBP - 0x2b14) + 0x68);
                            if (((cVar4 == '_') || (cVar4 == '^')) || (cVar4 == '\x1c')) {
                              cVar7 = '\x01';
                            }
                            else {
                              cVar7 = '\0';
                            }
                            if ((cVar4 == '_') || (cVar4 == 'h')) {
                              cVar4 = '\x01';
                            }
                            else {
                              cVar4 = '\0';
                            }
                            pvVar23 = *(void **)(unaff_EBP - 0x2b18);
                            cVar4 = FUN_004cfd50(pvVar23,fVar56,*(void **)(unaff_EBP - 0x2b14),
                                                 *(float *)(unaff_EBP - 0x2b5c),
                                                 (char)*(undefined4 *)(unaff_EBP - 0x2ba8),cVar4,
                                                 *(float *)(unaff_EBP - 0x2b20),unaff_EBP - 0x314,
                                                 (float *)(unaff_EBP - 0x284),
                                                 *(undefined4 **)(unaff_EBP - 0x2b28),
                                                 (undefined4 *)(unaff_EBP - 0x2be8),cVar7,0,0,'\x01'
                                                );
                            pvVar42 = *(void **)(unaff_EBP - 0x2b14);
                            if ((cVar4 != '\0') && (*(char *)((int)pvVar42 + 0x141) == '\x02')) {
                              FUN_00422a90(unaff_EBP - 0xe38);
                              FUN_00402a40((void *)(unaff_EBP - 0xe18),
                                           (undefined4 *)(*(int *)(unaff_EBP - 0x2b14) + 0x10));
                              iVar51 = *(int *)(unaff_EBP - 0x2b14);
                              uVar22 = *(uint *)(unaff_EBP - 0x2b5c) ^ 0x80000000;
                              *(undefined1 *)(unaff_EBP - 0xe24) =
                                   *(undefined1 *)(unaff_EBP - 0x2ba8);
                              uVar28 = *(undefined4 *)(iVar51 + 8);
                              uVar64 = *(undefined4 *)(iVar51 + 0xc);
                              *(undefined4 *)(unaff_EBP - 0xe38) = uVar28;
                              *(undefined4 *)(unaff_EBP - 0xe30) = uVar28;
                              *(undefined4 *)(unaff_EBP - 0xe34) = uVar64;
                              *(undefined4 *)(unaff_EBP - 0xe2c) = uVar64;
                              pvVar42 = *(void **)(unaff_EBP - 0x2b28);
                              *(uint *)(unaff_EBP - 0x2b5c) = uVar22;
                              *(uint *)(unaff_EBP - 0xe28) = uVar22;
                              FUN_00428400(pvVar42,(undefined4 *)(unaff_EBP - 0xe38));
                              if (*(char *)((int)pvVar23 + 0xb4) == '\0') {
                                iVar51 = *(int *)(unaff_EBP - 0x2b14);
                                *(float *)(iVar51 + 0x16c) =
                                     *(float *)(iVar51 + 0x16c) - *(float *)(unaff_EBP - 0x2b5c);
                                fVar55 = FUN_0040fda0(iVar51);
                                *(float *)(unaff_EBP - 0x2b1c) = (float)fVar55;
                                pvVar42 = *(void **)(unaff_EBP - 0x2b14);
                                if (*(float *)(unaff_EBP - 0x2b1c) <=
                                    *(float *)((int)pvVar42 + 0x16c) &&
                                    *(float *)((int)pvVar42 + 0x16c) !=
                                    *(float *)(unaff_EBP - 0x2b1c)) {
                                  fVar55 = FUN_0040fda0((int)pvVar42);
                                  pvVar42 = *(void **)(unaff_EBP - 0x2b14);
                                  *(float *)((int)pvVar42 + 0x16c) = (float)fVar55;
                                }
                              }
                              else {
                                pvVar42 = *(void **)(unaff_EBP - 0x2b14);
                              }
                            }
                            if ((*(char *)((int)pvVar42 + 0x140) == '\x03') &&
                               (*(char *)((int)pvVar42 + 0x141) == '\x01')) {
                              iVar51 = FUN_00407db0(pvVar42,0xffffffff);
                              if ((*(int *)((int)*(void **)(unaff_EBP - 0x2b14) + 0x6c) <= iVar51)
                                 && (iVar51 = FUN_00407db0(*(void **)(unaff_EBP - 0x2b14),0xffffffff
                                                          ),
                                    iVar51 < *(int *)(*(int *)(unaff_EBP - 0x2b14) + 0x6c) +
                                             *(int *)(unaff_EBP - 0x2b24))) {
                                FUN_00422890((undefined4 *)(unaff_EBP - 0xa98));
                                pvVar42 = *(void **)(unaff_EBP - 0x2b14);
                                *(undefined4 *)(unaff_EBP - 0xa38) = 3;
                                *(undefined1 *)(unaff_EBP - 0xa3c) = 0;
                                *(undefined4 *)(unaff_EBP - 0xa44) = 0;
                                *(undefined4 *)(unaff_EBP - 0xa40) = 0;
                                fVar55 = FUN_00411ad0(pvVar42);
                                *(float *)(unaff_EBP - 0x2b1c) = (float)fVar55;
                                iVar51 = *(int *)(unaff_EBP - 0x2b14);
                                fVar56 = *(float *)(unaff_EBP - 0x2b1c);
                                *(undefined4 *)(unaff_EBP - 0xa98) = *(undefined4 *)(iVar51 + 8);
                                *(undefined4 *)(unaff_EBP - 0xa94) = *(undefined4 *)(iVar51 + 0xc);
                                *(float *)(unaff_EBP - 0xa50) = fVar56 * 0.1;
                                *(undefined4 *)(unaff_EBP - 0xa4c) = 0x40800000;
                                *(undefined1 *)(unaff_EBP - 0xa34) = 2;
                                FUN_00402a40((void *)(unaff_EBP - 0xa80),
                                             (undefined4 *)(unaff_EBP - 0x314));
                                *(undefined4 *)(unaff_EBP - 0xa48) = 0x3f800000;
                                *(undefined4 *)(unaff_EBP - 0xa30) = 0;
                                puVar45 = FUN_00401080((void *)(unaff_EBP - 0x1370),0,0,0);
                                FUN_00401060((void *)(unaff_EBP - 0xa5c),puVar45);
                                FUN_00428360((void *)((int)pvVar23 + 0x14),
                                             (undefined4 *)(unaff_EBP - 0xa98));
                                FUN_00428360((void *)(*(int *)(unaff_EBP - 0x2b28) + 0x20),
                                             (undefined4 *)(unaff_EBP - 0xa98));
                              }
                            }
                            *(undefined1 *)(unaff_EBP - 0x2b29) = 1;
                            goto LAB_0053c6e7;
                          }
                        }
                      }
                    }
                  }
                  puVar24 = *(undefined4 **)(unaff_EBP - 0x2b50);
                }
LAB_0053c6e7:
                FUN_00407a30((void *)(unaff_EBP - 0x2c94),(int *)(unaff_EBP - 0x2f98));
                pvVar23 = *(void **)(unaff_EBP - 0x2b6c);
                piVar25 = (int *)FUN_00530550(pvVar23,(undefined4 *)(unaff_EBP - 0x2ce4));
                bVar5 = FUN_0042c6f0((void *)(unaff_EBP - 0x2c94),piVar25);
              } while (bVar5);
            }
            FUN_00402510(unaff_EBP - 0x1970);
            FUN_00402e30((void *)(unaff_EBP - 0x314),(uint *)(unaff_EBP - 0x1970));
            fVar56 = *(float *)(unaff_EBP - 0x2b3c);
            iVar51 = *(int *)(unaff_EBP - 0x2b40) + 1;
            fVar59 = (float)iVar51;
            *(int *)(unaff_EBP - 0x2b40) = iVar51;
            *(float *)(unaff_EBP - 0x2b54) = fVar59;
          } while (fVar59 < fVar56);
          if (*(char *)(unaff_EBP - 0x2b29) != '\0') {
            iVar51 = *(int *)(unaff_EBP - 0x2b14);
            *(int *)(iVar51 + 0x70) = *(int *)(iVar51 + 0x70) + 1;
            FUN_004103a0(iVar51);
            *(undefined4 *)(iVar51 + 0x74) = 0;
          }
          piVar25 = *(int **)(unaff_EBP - 0x2b64);
        }
        bVar5 = FUN_00530540((int)piVar25);
        pvVar42 = *(void **)(unaff_EBP - 0x2b14);
        if ((bVar5) && (*(char *)((int)pvVar42 + 0x68) != 'h')) {
          FUN_004c8510(unaff_EBP - 0xfd8);
          pfVar33 = FUN_00412670(puVar24,(float *)(unaff_EBP - 0x10b8));
          FUN_004e1520((float *)(unaff_EBP - 0x16b8),*(float *)(unaff_EBP - 0x2b3c),pfVar33);
          FUN_00402510(unaff_EBP - 0x1994);
          puVar26 = FUN_00402cb0((void *)((int)pvVar42 + 0x10),(uint *)(unaff_EBP - 0x2634),
                                 (uint *)(unaff_EBP - 0x1994));
          FUN_00402a40((void *)(unaff_EBP - 0xfd8),puVar26);
          *(undefined4 *)(unaff_EBP - 4000) = 5;
          *(undefined4 *)(unaff_EBP - 0xfa4) = 0x3dcccccd;
          *(undefined4 *)(unaff_EBP - 0xf9c) = 1;
          ppVar41 = (pair<unsigned___int64,unsigned___int64> *)
                    FUN_00401080((void *)(unaff_EBP - 0x1bec),0x3f800000,0x3e4ccccd,0x3f000000);
          std::pair<unsigned___int64,unsigned___int64>::
          operator=<std::pair<unsigned___int64,unsigned___int64>,0>
                    ((pair<unsigned___int64,unsigned___int64> *)(unaff_EBP - 0xfb4),ppVar41);
          pfVar33 = FUN_0052ec30((void *)(unaff_EBP - 0x40),(float *)(unaff_EBP - 5000));
          FUN_00401060((void *)(unaff_EBP - 0xfc0),pfVar33);
          iVar51 = *(int *)(unaff_EBP - 0x2b28);
          FUN_00428540((void *)(iVar51 + 0x10),(undefined4 *)(unaff_EBP - 0xfd8));
          fVar55 = FUN_00412150((int)pvVar42);
          *(float *)(unaff_EBP - 0x2b1c) = (float)fVar55;
          *(undefined4 *)((int)pvVar42 + 0x70) = 0;
          fVar55 = FUN_00412150((int)pvVar42);
          *(float *)(unaff_EBP - 0x2b48) = (float)fVar55;
          *(int *)((int)pvVar42 + 0x6c) =
               (int)((*(float *)(unaff_EBP - 0x2b1c) / *(float *)(unaff_EBP - 0x2b48)) *
                    (float)*(int *)((int)pvVar42 + 0x6c));
        }
        else {
          iVar51 = *(int *)(unaff_EBP - 0x2b28);
        }
        if (((*(char *)((int)pvVar42 + 0x68) == '^') &&
            (iVar31 = FUN_00407db0(pvVar42,0xffffffff), *(int *)((int)pvVar42 + 0x6c) <= iVar31)) &&
           (iVar31 = FUN_00407db0(pvVar42,0xffffffff),
           iVar31 < *(int *)((int)pvVar42 + 0x6c) + *(int *)(unaff_EBP - 0x2b24))) {
          FUN_004c8530(unaff_EBP - 0x5d8);
          FUN_00402550((void *)(unaff_EBP - 0x5d8),(longlong *)((int)pvVar42 + 0x10));
          iVar31 = rand();
          *(undefined4 *)(unaff_EBP - 0x5cc) = 0x28;
          *(float *)(unaff_EBP - 0x5c8) = ((float)iVar31 * 0.1) / 32767.0 + 1.0;
          FUN_00428590((void *)(iVar51 + 8),(undefined4 *)(unaff_EBP - 0x5d8));
          pvVar23 = *(void **)(unaff_EBP - 0x2b18);
        }
        else {
          if ((*(char *)((int)pvVar42 + 0x68) == 'h') &&
             (iVar31 = FUN_00407db0(pvVar42,0xffffffff), *(int *)((int)pvVar42 + 0x6c) <= iVar31)) {
            iVar31 = FUN_00407db0(pvVar42,0xffffffff);
            iVar54 = *(int *)(unaff_EBP - 0x2b24);
            if (iVar31 < *(int *)((int)pvVar42 + 0x6c) + iVar54) {
              FUN_004c8530(unaff_EBP - 2000);
              FUN_00402550((void *)(unaff_EBP - 2000),(longlong *)((int)pvVar42 + 0x10));
              iVar31 = rand();
              uVar28 = 0x10;
              if (*(char *)(unaff_EBP - 0x2b29) != '\0') {
                uVar28 = 5;
              }
              *(undefined4 *)(unaff_EBP - 0x7c4) = uVar28;
              *(float *)(unaff_EBP - 0x7c0) = ((float)iVar31 * 0.25) / 32767.0 + 1.0;
              FUN_00428590((void *)(iVar51 + 8),(undefined4 *)(unaff_EBP - 2000));
              pvVar23 = *(void **)(unaff_EBP - 0x2b18);
              goto LAB_00537cfb;
            }
          }
          else {
            iVar54 = *(int *)(unaff_EBP - 0x2b24);
          }
          if (*(char *)((int)pvVar42 + 0x68) == '^') goto LAB_0053e0c5;
          if (*(int *)((int)pvVar42 + 0x6c) / 200 == (*(int *)((int)pvVar42 + 0x6c) + iVar54) / 200)
          goto code_r0x00537cef;
          FUN_004c8530(unaff_EBP - 0x800);
          pvVar42 = *(void **)(unaff_EBP - 0x2b14);
          FUN_00402550((void *)(unaff_EBP - 0x800),(longlong *)((int)pvVar42 + 0x10));
          iVar31 = rand();
          cVar4 = *(char *)(unaff_EBP - 0x2b29);
          *(float *)(unaff_EBP - 0x7f0) = ((float)iVar31 * 0.25) / 32767.0 + 1.0;
          *(uint *)(unaff_EBP - 0x7f4) = (cVar4 != '\0') + 0x24;
          FUN_00428590((void *)(iVar51 + 8),(undefined4 *)(unaff_EBP - 0x800));
          pvVar23 = *(void **)(unaff_EBP - 0x2b18);
        }
        goto LAB_00537cfb;
      }
      iVar54 = *(int *)(unaff_EBP - 0x2b24);
LAB_0053bc91:
      if ((*(char *)((int)pvVar42 + 0x68) == '_') || (*(char *)((int)pvVar42 + 0x68) == '\x1c')) {
        iVar54 = FUN_00407db0(pvVar42,0xffffffff);
        iVar51 = *(int *)((int)pvVar42 + 0x6c);
        iVar31 = *(int *)(unaff_EBP - 0x2b24);
        iVar9 = FUN_00407db0(*(void **)(unaff_EBP - 0x2b14),0xffffffff);
        if ((*(int *)(*(int *)(unaff_EBP - 0x2b14) + 0x6c) - iVar9) / 200 ==
            ((iVar51 + iVar31) - iVar54) / 200) goto LAB_00537cf5;
        iVar51 = FUN_00407db0(*(void **)(unaff_EBP - 0x2b14),0xffffffff);
        pvVar42 = *(void **)(unaff_EBP - 0x2b14);
        iVar54 = *(int *)(unaff_EBP - 0x2b24);
        if (iVar51 < *(int *)((int)pvVar42 + 0x6c) + iVar54) goto LAB_0053bd1c;
      }
      goto LAB_00537d01;
    }
    break;
  case '\"':
    iVar51 = *(int *)((int)*(void **)(unaff_EBP - 0x2b14) + 0x6c);
    iVar31 = FUN_00407db0(*(void **)(unaff_EBP - 0x2b14),0xffffffff);
    if ((iVar51 < iVar31) && (iVar51 / 200 != (iVar51 + *(int *)(unaff_EBP - 0x2b24)) / 200)) {
      FUN_004c8530(unaff_EBP - 0x620);
      FUN_00402550((void *)(unaff_EBP - 0x620),(longlong *)(*(int *)(unaff_EBP - 0x2b14) + 0x10));
      iVar31 = rand();
      iVar51 = *(int *)(unaff_EBP - 0x2b28);
      *(undefined4 *)(unaff_EBP - 0x614) = 0x24;
      *(float *)(unaff_EBP - 0x610) = ((float)iVar31 * 0.25) / 32767.0 + 1.0;
      FUN_00428590((void *)(iVar51 + 8),(undefined4 *)(unaff_EBP - 0x620));
    }
    pvVar42 = *(void **)(unaff_EBP - 0x2b14);
    if (((*(char *)((int)pvVar23 + 0xb4) == '\0') && (*(char *)((int)pvVar42 + 0x60) != '\0')) ||
       (pvVar42 == *(void **)((int)pvVar23 + 0xb8))) {
      iVar51 = FUN_00407db0(pvVar42,0xffffffff);
      pvVar42 = *(void **)(unaff_EBP - 0x2b14);
      if (*(int *)((int)pvVar42 + 0x6c) <= iVar51) goto LAB_00537cfb;
      iVar51 = FUN_00407db0(pvVar42,0xffffffff);
      iVar31 = FUN_00411d60(*(void **)(unaff_EBP - 0x2b14),0xffffffff);
      if (iVar51 + iVar31 < *(int *)((int)*(void **)(unaff_EBP - 0x2b14) + 0x6c)) goto LAB_00537cf5;
      iVar54 = FUN_00411d60(*(void **)(unaff_EBP - 0x2b14),0xffffffff);
      pvVar23 = *(void **)(unaff_EBP - 0x2b14);
      iVar9 = FUN_00407db0(pvVar23,0xffffffff);
      iVar51 = *(int *)((int)pvVar23 + 0x6c);
      iVar31 = *(int *)(unaff_EBP - 0x2b24);
      iVar17 = FUN_00407db0(*(void **)(unaff_EBP - 0x2b14),0xffffffff);
      if ((*(int *)(*(int *)(unaff_EBP - 0x2b14) + 0x6c) - iVar17) / (int)((float)iVar54 * 0.125) !=
          ((iVar51 + iVar31) - iVar9) / (int)((float)iVar54 * 0.125)) {
        fVar55 = FUN_0040fb20(*(int *)(unaff_EBP - 0x2b14),
                              (uint)*(byte *)(*(int *)(unaff_EBP - 0x2b14) + 0x68),-1);
        iVar51 = *(int *)(unaff_EBP - 0x2b14);
        *(float *)(unaff_EBP - 0x2b1c) = (float)fVar55;
        if (*(float *)(unaff_EBP - 0x2b1c) <= *(float *)(iVar51 + 0x170)) {
          fVar55 = FUN_0040fb20(*(int *)(unaff_EBP - 0x2b14),(uint)*(byte *)(iVar51 + 0x68),-1);
          iVar51 = *(int *)(unaff_EBP - 0x2b14);
          pvVar23 = *(void **)(unaff_EBP - 0x2b18);
          *(float *)(unaff_EBP - 0x2b1c) = (float)fVar55;
          *(float *)(iVar51 + 0x170) = *(float *)(iVar51 + 0x170) - *(float *)(unaff_EBP - 0x2b1c);
          pvVar42 = (void *)FUN_00405420(pvVar23,(uint *)(iVar51 + 0x1a0));
          pvVar23 = *(void **)(unaff_EBP - 0x2b14);
          if (pvVar42 == (void *)0x0) {
            pvVar42 = pvVar23;
          }
          FUN_00422a90(unaff_EBP - 0xc50);
          FUN_00402a40((void *)(unaff_EBP - 0xc30),(undefined4 *)((int)pvVar42 + 0x10));
          iVar51 = rand();
          *(float *)(unaff_EBP - 0x2b48) = 1.25 - ((float)iVar51 * 0.5) / 32767.0;
          fVar55 = FUN_00411ad0(pvVar23);
          *(float *)(unaff_EBP - 0x2b1c) = (float)fVar55;
          *(float *)(unaff_EBP - 0xc40) =
               *(float *)(unaff_EBP - 0x2b1c) * -2.0 * *(float *)(unaff_EBP - 0x2b48);
          bVar5 = FUN_0040f520((int)pvVar23);
          pvVar18 = *(void **)(unaff_EBP - 0x2b28);
          *(bool *)(unaff_EBP - 0xc3c) = bVar5;
          *(undefined4 *)(unaff_EBP - 0xc50) = *(undefined4 *)((int)pvVar23 + 8);
          *(undefined4 *)(unaff_EBP - 0xc4c) = *(undefined4 *)((int)pvVar23 + 0xc);
          *(undefined4 *)(unaff_EBP - 0xc48) = *(undefined4 *)((int)pvVar42 + 8);
          *(undefined4 *)(unaff_EBP - 0xc44) = *(undefined4 *)((int)pvVar42 + 0xc);
          FUN_00428400(pvVar18,(undefined4 *)(unaff_EBP - 0xc50));
          FUN_004c8530(unaff_EBP - 0x650);
          FUN_00402550((void *)(unaff_EBP - 0x650),(longlong *)((int)pvVar23 + 0x10));
          iVar51 = *(int *)(unaff_EBP - 0x2b28);
          *(undefined4 *)(unaff_EBP - 0x640) = 0x3f800000;
          *(undefined4 *)(unaff_EBP - 0x644) = 0x29;
          FUN_00428590((void *)(iVar51 + 8),(undefined4 *)(unaff_EBP - 0x650));
          pvVar18 = *(void **)(unaff_EBP - 0x2b18);
          if (*(char *)((int)pvVar18 + 0xb4) == '\0') {
LAB_0053ad1c:
            FUN_004cea80(pvVar18,(uint *)(unaff_EBP - 0xc50),*(void **)(unaff_EBP - 0x2b28),
                         (undefined4 *)(unaff_EBP - 0x2be8));
            FUN_00537cef();
            return;
          }
          if ((pvVar23 == *(void **)((int)pvVar18 + 0xb8)) &&
             (pvVar42 == *(void **)((int)pvVar18 + 0xb8))) {
            pvVar18 = *(void **)(unaff_EBP - 0x2b18);
            goto LAB_0053ad1c;
          }
        }
      }
code_r0x00537cef:
      pvVar23 = *(void **)(unaff_EBP - 0x2b18);
    }
    goto LAB_00537cf5;
  case '%':
  case '&':
  case '\'':
  case '(':
  case ')':
  case '*':
  case '+':
  case ',':
  case '-':
  case '.':
  case 'l':
    pvVar42 = *(void **)(unaff_EBP - 0x2b14);
    if (((*(char *)((int)pvVar23 + 0xb4) != '\0') || (*(char *)((int)pvVar42 + 0x60) == '\0')) &&
       (pvVar42 != *(void **)((int)pvVar23 + 0xb8))) goto LAB_00537d01;
    iVar51 = *(int *)((int)pvVar42 + 0x6c);
    iVar31 = FUN_00407db0(*(void **)(unaff_EBP - 0x2b14),0xffffffff);
    if ((iVar31 + -200 < iVar51) || (iVar51 / 200 == (iVar51 + *(int *)(unaff_EBP - 0x2b24)) / 200))
    {
      pvVar23 = *(void **)(unaff_EBP - 0x2b14);
    }
    else {
      FUN_004c8530(unaff_EBP - 0x8c0);
      pvVar23 = *(void **)(unaff_EBP - 0x2b14);
      FUN_00402550((void *)(unaff_EBP - 0x8c0),(longlong *)((int)pvVar23 + 0x10));
      iVar31 = rand();
      iVar51 = *(int *)(unaff_EBP - 0x2b28);
      *(undefined4 *)(unaff_EBP - 0x8b4) = 0x24;
      *(float *)(unaff_EBP - 0x8b0) = ((float)iVar31 * 0.25) / 32767.0 + 1.0;
      FUN_00428590((void *)(iVar51 + 8),(undefined4 *)(unaff_EBP - 0x8c0));
    }
    iVar51 = FUN_00407db0(pvVar23,0xffffffff);
    if ((*(char *)((int)pvVar23 + 0x68) == '.') || (*(char *)((int)pvVar23 + 0x68) == '-')) {
      iVar9 = FUN_00411d60(pvVar23,0xffffffff);
      iVar17 = FUN_00407db0(pvVar23,0xffffffff);
      iVar31 = *(int *)((int)pvVar23 + 0x6c);
      iVar54 = *(int *)(unaff_EBP - 0x2b24);
      iVar51 = FUN_00407db0(*(void **)(unaff_EBP - 0x2b14),0xffffffff);
      pvVar23 = *(void **)(unaff_EBP - 0x2b14);
      iVar51 = (iVar9 / 3) * (((iVar31 + iVar54) - iVar17) / (iVar9 / 3)) + iVar51;
      iVar31 = FUN_00407db0(pvVar23,0xffffffff);
      if (iVar51 < iVar31) {
        iVar51 = FUN_00407db0(pvVar23,0xffffffff);
      }
    }
    iVar31 = FUN_00407db0(pvVar23,0xffffffff);
    if ((*(int *)((int)pvVar23 + 0x6c) <= iVar31) &&
       (iVar31 = FUN_00407db0(pvVar23,0xffffffff),
       iVar31 < *(int *)((int)pvVar23 + 0x6c) + *(int *)(unaff_EBP - 0x2b24))) {
      fVar55 = FUN_004021b0((float *)((int)pvVar23 + 0x160));
      *(float *)(unaff_EBP - 0x2b1c) = (float)fVar55;
      if (0.0 < *(float *)(unaff_EBP - 0x2b1c)) {
        fVar55 = FUN_0040fb20((int)pvVar23,(uint)*(byte *)((int)pvVar23 + 0x68),-1);
        fVar56 = *(float *)((int)pvVar23 + 0x170);
        *(float *)(unaff_EBP - 0x2b1c) = (float)fVar55;
        fVar56 = fVar56 - *(float *)(unaff_EBP - 0x2b1c);
        *(float *)((int)pvVar23 + 0x170) = fVar56;
        if (fVar56 < 0.0) {
          *(undefined4 *)((int)pvVar23 + 0x170) = 0;
        }
      }
    }
    *(undefined4 *)(unaff_EBP - 0x2b1c) = *(undefined4 *)((int)pvVar23 + 0x6c);
    iVar9 = FUN_00407db0(pvVar23,0xffffffff);
    iVar17 = FUN_00411d60(*(void **)(unaff_EBP - 0x2b14),0xffffffff);
    iVar54 = *(int *)(unaff_EBP - 0x2b24);
    iVar31 = *(int *)(unaff_EBP - 0x2b1c);
    pvVar42 = *(void **)(unaff_EBP - 0x2b14);
    if (((iVar31 < iVar9 + iVar17) && (iVar31 <= iVar51)) && (iVar51 < iVar31 + iVar54)) {
      pfVar33 = (float *)((int)pvVar42 + 0x160);
      fVar55 = FUN_004021b0(pfVar33);
      *(float *)(unaff_EBP - 0x2b1c) = (float)fVar55;
      if (*(float *)(unaff_EBP - 0x2b1c) <= 0.0) goto LAB_0053b968;
      FUN_00422890((undefined4 *)(unaff_EBP - 0x3e4));
      if (*(char *)((int)pvVar42 + 0xaa9) == '\f') {
        pfVar53 = FUN_00412670(pfVar33,(float *)(unaff_EBP - 0x18c8));
        pfVar36 = (float *)(unaff_EBP - 0x13d0);
        fVar56 = 100.0;
      }
      else {
        pfVar53 = FUN_00412670(pfVar33,(float *)(unaff_EBP - 0x16e8));
        pfVar36 = (float *)(unaff_EBP - 0x13e8);
        fVar56 = 50.0;
      }
      puVar24 = (undefined4 *)FUN_004e1520(pfVar36,fVar56,pfVar53);
      FUN_00401060((void *)(unaff_EBP - 0x3a8),puVar24);
      *(undefined4 *)(unaff_EBP - 0x37c) = 0;
      fVar56 = *(float *)((int)pvVar42 + 0x144);
      plVar32 = (longlong *)((int)pvVar42 + 0x10);
      *(longlong **)(unaff_EBP - 0x2b1c) = plVar32;
      *(float *)(unaff_EBP - 0x398) = fVar56 * 4.0 + 0.5;
      FUN_00402a40((void *)(unaff_EBP - 0x3cc),(undefined4 *)plVar32);
      iVar51 = *(int *)(unaff_EBP - 0x2b14);
      *(undefined4 *)(unaff_EBP - 0x390) = *(undefined4 *)(iVar51 + 0x144);
      *(float *)(unaff_EBP - 0x394) = *(float *)(iVar51 + 0x144) + 0.5;
      if (*(int *)(iVar51 + 100) == 0x65) {
        FUN_004013d0((void *)(iVar51 + 0x80),1);
        FUN_00402a10((ulonglong *)(unaff_EBP - 0x3038));
        puVar26 = (uint *)(unaff_EBP - 0x3038);
        pvVar23 = (void *)FUN_004e2320((void *)(unaff_EBP - 0x3cc),1);
        FUN_00402e60(pvVar23,puVar26);
        FUN_004013d0((void *)(iVar51 + 0x80),2);
        FUN_00402a10((ulonglong *)(unaff_EBP - 0x2ff4));
        puVar26 = (uint *)(unaff_EBP - 0x2ff4);
        pvVar23 = (void *)FUN_004e2320((void *)(unaff_EBP - 0x3cc),2);
        FUN_00402e60(pvVar23,puVar26);
        plVar32 = *(longlong **)(unaff_EBP - 0x2b1c);
        iVar51 = *(int *)(unaff_EBP - 0x2b14);
      }
      *(undefined4 *)(unaff_EBP - 0x3e4) = *(undefined4 *)(iVar51 + 8);
      *(undefined4 *)(unaff_EBP - 0x3e0) = *(undefined4 *)(iVar51 + 0xc);
      FUN_00401060((void *)(unaff_EBP - 0x3dc),(undefined4 *)(iVar51 + 0x1b0));
      iVar51 = *(int *)(unaff_EBP - 0x2b14);
      if (*(char *)(iVar51 + 0x68) == 'l') {
        *(undefined4 *)(unaff_EBP - 900) = 4;
        fVar55 = FUN_00409d10((uint)*(byte *)(iVar51 + 0x68));
        pvVar23 = *(void **)(unaff_EBP - 0x2b14);
        *(float *)(unaff_EBP - 0x2b1c) = (float)fVar55;
        fVar55 = FUN_00408f70(pvVar23);
        fVar56 = *(float *)(unaff_EBP - 0x2b1c);
        *(float *)(unaff_EBP - 0x2b48) = (float)fVar55;
        *(float *)(unaff_EBP - 0x2b1c) = fVar56 * *(float *)(unaff_EBP - 0x2b48);
        iVar51 = rand();
        *(undefined4 *)(unaff_EBP - 0x394) = 0x40800000;
        *(undefined4 *)(unaff_EBP - 0x390) = 0x3f800000;
        fVar56 = *(float *)(unaff_EBP - 0x2b1c);
        *(undefined1 *)(unaff_EBP - 0x388) = 1;
        *(float *)(unaff_EBP - 0x39c) =
             (1.25 - ((float)iVar51 * 0.5) / 32767.0) * fVar56 * 1.0 * 5.0;
        pfVar33 = FUN_00412670(pfVar33,(float *)(unaff_EBP - 0x1b14));
        puVar24 = (undefined4 *)FUN_004e1520((float *)(unaff_EBP - 0x1400),100.0,pfVar33);
        FUN_00401060((void *)(unaff_EBP - 0x3a8),puVar24);
        pvVar23 = *(void **)(unaff_EBP - 0x2b14);
      }
      else {
        pvVar23 = *(void **)(unaff_EBP - 0x2b14);
        *(undefined4 *)(unaff_EBP - 900) = 1;
        bVar6 = *(byte *)((int)pvVar23 + 0x68);
        if ((((bVar6 == 0x26) || (bVar6 == 0x27)) ||
            ((bVar6 == 0x28 || ((bVar6 == 0x2c || (bVar6 == 0x29)))))) || (bVar6 == 0x2a)) {
          fVar55 = FUN_00409d10((uint)bVar6);
          *(float *)(unaff_EBP - 0x2b1c) = (float)fVar55;
          fVar55 = FUN_00411ad0(pvVar23);
          fVar56 = *(float *)(unaff_EBP - 0x2b1c);
          *(float *)(unaff_EBP - 0x2b48) = (float)fVar55;
          *(float *)(unaff_EBP - 0x2b1c) = fVar56 * *(float *)(unaff_EBP - 0x2b48);
          iVar51 = rand();
          fVar56 = (1.25 - ((float)iVar51 * 0.5) / 32767.0) * *(float *)(unaff_EBP - 0x2b1c) * 1.0;
        }
        else if ((bVar6 == 0x2e) || (bVar6 == 0x2d)) {
          fVar55 = FUN_00409d10((uint)bVar6);
          *(float *)(unaff_EBP - 0x2b1c) = (float)fVar55;
          fVar55 = FUN_00411ad0(pvVar23);
          fVar56 = *(float *)(unaff_EBP - 0x2b1c);
          *(float *)(unaff_EBP - 0x2b48) = (float)fVar55;
          *(float *)(unaff_EBP - 0x2b1c) = fVar56 * *(float *)(unaff_EBP - 0x2b48);
          iVar51 = rand();
          *(undefined4 *)(unaff_EBP - 0x390) = 0x3e800000;
          fVar56 = (1.25 - ((float)iVar51 * 0.5) / 32767.0) * *(float *)(unaff_EBP - 0x2b1c) * 1.0;
          *(float *)(unaff_EBP - 0x394) = *(float *)(unaff_EBP - 0x394) + 0.5;
        }
        else {
          fVar55 = FUN_00409d10((uint)bVar6);
          *(float *)(unaff_EBP - 0x2b1c) = (float)fVar55;
          fVar55 = FUN_00411ad0(pvVar23);
          fVar56 = *(float *)(unaff_EBP - 0x2b1c);
          *(float *)(unaff_EBP - 0x2b48) = (float)fVar55;
          *(float *)(unaff_EBP - 0x2b1c) = fVar56 * *(float *)(unaff_EBP - 0x2b48);
          iVar51 = rand();
          *(undefined4 *)(unaff_EBP - 0x390) = 0x3f800000;
          fVar56 = (1.25 - ((float)iVar51 * 0.5) / 32767.0) * *(float *)(unaff_EBP - 0x2b1c) * 1.0;
          *(float *)(unaff_EBP - 0x394) = *(float *)(unaff_EBP - 0x394) + 1.0;
        }
        *(float *)(unaff_EBP - 0x39c) = fVar56;
      }
      if (*(char *)((int)pvVar23 + 0x140) == '\x03') {
        *(char *)(unaff_EBP - 0x380) = (*(char *)((int)pvVar23 + 0x141) == '\x01') + '\x01';
      }
      cVar4 = *(char *)((int)pvVar23 + 0x68);
      if ((((cVar4 == '.') || (cVar4 == '-')) || (cVar4 == '%')) ||
         (*(undefined1 *)(unaff_EBP - 0x388) = 0, cVar4 == '+')) {
        *(undefined1 *)(unaff_EBP - 0x388) = 1;
      }
      FUN_00428360((void *)(*(int *)(unaff_EBP - 0x2b18) + 0x14),(undefined4 *)(unaff_EBP - 0x3e4));
      if (0.0 < *(float *)((int)pvVar23 + 0x144)) {
        fVar56 = *(float *)((int)pvVar23 + 0x170) - *(float *)((int)pvVar23 + 0x144);
        *(float *)((int)pvVar23 + 0x170) = fVar56;
        if (fVar56 < 0.0) {
          *(undefined4 *)((int)pvVar23 + 0x170) = 0;
        }
        *(undefined4 *)((int)pvVar23 + 0x144) = 0;
      }
      if ((*(char *)(unaff_EBP - 0x388) != '\0') &&
         (puVar24 = FUN_0040ef90(pvVar23,9), puVar24 != (undefined4 *)0x0)) {
        FUN_004029b0((undefined1 *)(unaff_EBP - 0x2ebc));
        *(undefined1 *)(unaff_EBP - 0x2ebc) = 9;
        *(undefined4 *)(unaff_EBP - 0x2eb4) = 0;
        FUN_00411740(pvVar23,(char *)(unaff_EBP - 0x2ebc));
        FUN_004063d0(unaff_EBP - 0x240);
        uVar28 = *(undefined4 *)((int)pvVar23 + 0xc);
        uVar64 = *(undefined4 *)((int)pvVar23 + 8);
        *(undefined8 *)(unaff_EBP - 0x230) = *(undefined8 *)(unaff_EBP - 0x2ebc);
        uVar1 = *(undefined8 *)(unaff_EBP - 0x2eb4);
        *(undefined4 *)(unaff_EBP - 0x23c) = uVar28;
        *(undefined4 *)(unaff_EBP - 0x234) = uVar28;
        iVar51 = *(int *)(unaff_EBP - 0x2b28);
        *(undefined4 *)(unaff_EBP - 0x240) = uVar64;
        *(undefined4 *)(unaff_EBP - 0x238) = uVar64;
        *(undefined8 *)(unaff_EBP - 0x228) = uVar1;
        uVar28 = *(undefined4 *)(unaff_EBP - 0x2ea8);
        *(undefined4 *)(unaff_EBP - 0x220) = *(undefined4 *)(unaff_EBP - 0x2eac);
        *(undefined4 *)(unaff_EBP - 0x21c) = uVar28;
        FUN_00411040((void *)(iVar51 + 0x58),(undefined8 *)(unaff_EBP - 0x240));
      }
      FUN_00428360((void *)(*(int *)(unaff_EBP - 0x2b28) + 0x20),(undefined4 *)(unaff_EBP - 0x3e4));
      FUN_004c8530(unaff_EBP - 0x278);
      FUN_00402550((void *)(unaff_EBP - 0x278),plVar32);
      cVar4 = *(char *)(unaff_EBP - 0x380);
      pvVar42 = *(void **)(unaff_EBP - 0x2b14);
      *(undefined4 *)(unaff_EBP - 0x268) = 0x3f800000;
      cVar7 = *(char *)((int)pvVar42 + 0x68);
      *(undefined4 *)(unaff_EBP - 0x264) = 0x3f666666;
      if (cVar4 == '\x02') {
        *(undefined4 *)(unaff_EBP - 0x26c) = 0x29;
        if (((cVar7 == ',') || (cVar7 == ')')) || (cVar7 == '*')) {
          *(undefined4 *)(unaff_EBP - 0x268) = 0x3fa00000;
        }
      }
      else {
        *(undefined4 *)(unaff_EBP - 0x26c) = 0x26;
        if (((cVar7 == '&') || (cVar7 == '\'')) || (cVar7 == '(')) {
          *(undefined4 *)(unaff_EBP - 0x268) = 0x40000000;
        }
      }
      FUN_00428590((void *)(*(int *)(unaff_EBP - 0x2b28) + 8),(undefined4 *)(unaff_EBP - 0x278));
      pvVar23 = *(void **)(unaff_EBP - 0x2b18);
      goto LAB_00537cfb;
    }
LAB_0053e0c5:
    pvVar23 = *(void **)(unaff_EBP - 0x2b18);
    goto LAB_00537d01;
  case '/':
  case '0':
    iVar51 = *(int *)(*(int *)(unaff_EBP - 0x2b14) + 0x6c);
    if ((iVar51 < 1) && (0 < iVar51 + iVar54)) {
      FUN_004c8530(unaff_EBP - 0x668);
      pvVar42 = *(void **)(unaff_EBP - 0x2b14);
      FUN_00402550((void *)(unaff_EBP - 0x668),(longlong *)((int)pvVar42 + 0x10));
      iVar31 = rand();
      iVar51 = *(int *)(unaff_EBP - 0x2b28);
      *(undefined4 *)(unaff_EBP - 0x65c) = 0xe;
      *(float *)(unaff_EBP - 0x658) = ((float)iVar31 * 0.25) / 32767.0 + 1.0;
      FUN_00428590((void *)(iVar51 + 8),(undefined4 *)(unaff_EBP - 0x668));
      goto LAB_00537cfb;
    }
    break;
  case '1':
    pvVar42 = *(void **)(unaff_EBP - 0x2b14);
    if (((*(char *)((int)pvVar23 + 0xb4) == '\0') && (*(char *)((int)pvVar42 + 0x60) != '\0')) ||
       (pvVar42 == *(void **)((int)pvVar23 + 0xb8))) {
      iVar51 = FUN_00407db0(pvVar42,0xffffffff);
      pvVar42 = *(void **)(unaff_EBP - 0x2b14);
      if (iVar51 < *(int *)((int)pvVar42 + 0x6c)) goto LAB_00537cfb;
      iVar51 = FUN_00407db0(pvVar42,0xffffffff);
      iVar54 = *(int *)(unaff_EBP - 0x2b24);
      if (iVar51 < *(int *)((int)pvVar42 + 0x6c) + iVar54) {
        FUN_00402510(unaff_EBP - 0x1928);
        *(void **)(unaff_EBP - 0x2b64) = (void *)((int)pvVar42 + 0x10);
        FUN_00402cb0((void *)((int)pvVar42 + 0x10),(uint *)(unaff_EBP - 0x204),
                     (uint *)(unaff_EBP - 0x1928));
        *(undefined4 *)(unaff_EBP - 0x2b20) = 0x43c80000;
        uVar60 = CONCAT44((undefined4 *)(unaff_EBP - 0x204),0x53b2f6);
        FUN_00402a40((void *)(unaff_EBP - 0x920),(undefined4 *)(unaff_EBP - 0x204));
        *(undefined4 *)(unaff_EBP - 0x2b5c) = 0xfffffffc;
        *(int *)(unaff_EBP - 0x2b40) = (int)pvVar42 + 0x80;
        do {
          uVar22 = 0xfffffffc;
          do {
            uVar52 = 0xfffffffe;
            do {
              uVar64 = 0x53b32b;
              uVar48 = uVar52;
              FUN_004cde40(&stack0xfffffff8,uVar52);
              uVar28 = 0x53b336;
              uVar63 = uVar22;
              FUN_004cde40(&stack0xfffffff0,uVar22);
              FUN_004cde40(&stack0xffffffe8,*(uint *)(unaff_EBP - 0x2b5c));
              puVar26 = FUN_00406380((void *)(unaff_EBP - 0x20f4),uVar28,uVar63,uVar64,uVar48,
                                     (int)uVar60,(int)(uVar60 >> 0x20));
              FUN_00402cb0((void *)(unaff_EBP - 0x204),(uint *)(unaff_EBP - 0x98c),puVar26);
              uVar60 = ZEXT48(*(float **)(unaff_EBP - 0x2b40));
              puVar26 = (uint *)(unaff_EBP - 0x98c);
              uVar48 = 0x53b37e;
              cVar4 = FUN_004d4f90(*(void **)(unaff_EBP - 0x2b18),puVar26,
                                   *(float **)(unaff_EBP - 0x2b40),'\0');
              if (cVar4 == '\0') {
                puVar26 = (uint *)0x53b39b;
                puVar27 = FUN_00402c50((void *)(unaff_EBP - 0x98c),(uint *)(unaff_EBP - 0x23f4),
                                       (uint *)(unaff_EBP - 0x204));
                uVar28 = 0x53b3a7;
                pfVar33 = FUN_00402550((void *)(unaff_EBP - 0x1688),(longlong *)puVar27);
                uVar60 = CONCAT44(0x53b3ae,uVar28);
                fVar55 = FUN_004021b0(pfVar33);
                *(float *)(unaff_EBP - 0x2b1c) = (float)fVar55;
                fVar56 = *(float *)(unaff_EBP - 0x2b20);
                if (*(float *)(unaff_EBP - 0x2b1c) < fVar56) {
                  *(float *)(unaff_EBP - 0x2b20) = *(float *)(unaff_EBP - 0x2b1c);
                  uVar60 = CONCAT44((undefined4 *)(unaff_EBP - 0x98c),&LAB_0053b3e3);
                  FUN_00402a40((void *)(unaff_EBP - 0x920),(undefined4 *)(unaff_EBP - 0x98c));
                  goto LAB_0053b3e3;
                }
              }
              else {
LAB_0053b3e3:
                fVar56 = *(float *)(unaff_EBP - 0x2b20);
              }
              uVar52 = uVar52 + 1;
            } while ((int)uVar52 < 7);
            uVar22 = uVar22 + 1;
          } while ((int)uVar22 < 5);
          iVar51 = *(int *)(unaff_EBP - 0x2b5c) + 1;
          *(int *)(unaff_EBP - 0x2b5c) = iVar51;
        } while (iVar51 < 5);
        if (fVar56 < 400.0) {
          pvVar42 = *(void **)(unaff_EBP - 0x2b64);
          FUN_00402a40(pvVar42,(undefined4 *)(unaff_EBP - 0x920));
          pvVar23 = *(void **)(unaff_EBP - 0x2b40);
          goto LAB_0053b440;
        }
        goto code_r0x00537cef;
      }
      goto LAB_00537d01;
    }
    break;
  case '2':
  case '7':
  case '`':
    pvVar42 = *(void **)(unaff_EBP - 0x2b14);
    if (((*(char *)((int)pvVar23 + 0xb4) != '\0') || (*(char *)((int)pvVar42 + 0x60) == '\0')) &&
       (pvVar42 != *(void **)((int)pvVar23 + 0xb8))) goto LAB_00537d01;
    iVar51 = FUN_00407db0(pvVar42,0xffffffff);
    if ((*(int *)((int)pvVar42 + 0x6c) <= iVar51) &&
       (iVar51 = FUN_00407db0(pvVar42,0xffffffff),
       iVar51 < *(int *)((int)pvVar42 + 0x6c) + *(int *)(unaff_EBP - 0x2b24))) {
      *(undefined4 *)((int)pvVar42 + 0x13b4) = *(undefined4 *)((int)pvVar42 + 0x144);
      *(float *)((int)pvVar42 + 0x170) =
           *(float *)((int)pvVar42 + 0x170) - *(float *)((int)pvVar42 + 0x144);
      *(undefined4 *)((int)pvVar42 + 0x144) = 0;
      puVar24 = FUN_0040ef90(pvVar42,10);
      if (puVar24 != (undefined4 *)0x0) {
        FUN_004029b0((undefined1 *)(unaff_EBP - 0x2eec));
        *(undefined1 *)(unaff_EBP - 0x2eec) = 10;
        *(undefined4 *)(unaff_EBP - 0x2ee4) = 0;
        FUN_00411740(pvVar42,(char *)(unaff_EBP - 0x2eec));
        FUN_004063d0(unaff_EBP - 0x2e6c);
        uVar28 = *(undefined4 *)((int)pvVar42 + 0xc);
        uVar64 = *(undefined4 *)((int)pvVar42 + 8);
        *(undefined8 *)(unaff_EBP - 0x2e5c) = *(undefined8 *)(unaff_EBP - 0x2eec);
        uVar1 = *(undefined8 *)(unaff_EBP - 0x2ee4);
        *(undefined4 *)(unaff_EBP - 0x2e68) = uVar28;
        *(undefined4 *)(unaff_EBP - 0x2e60) = uVar28;
        iVar51 = *(int *)(unaff_EBP - 0x2b28);
        *(undefined4 *)(unaff_EBP - 0x2e6c) = uVar64;
        *(undefined4 *)(unaff_EBP - 0x2e64) = uVar64;
        *(undefined8 *)(unaff_EBP - 0x2e54) = uVar1;
        uVar28 = *(undefined4 *)(unaff_EBP - 0x2ed8);
        *(undefined4 *)(unaff_EBP - 0x2e4c) = *(undefined4 *)(unaff_EBP - 0x2edc);
        *(undefined4 *)(unaff_EBP - 0x2e48) = uVar28;
        FUN_00411040((void *)(iVar51 + 0x58),(undefined8 *)(unaff_EBP - 0x2e6c));
      }
    }
    iVar51 = FUN_00411d60(pvVar42,0xffffffff);
    iVar31 = (int)((iVar51 >> 0x1f & 3U) + iVar51) >> 2;
    iVar51 = FUN_00407db0(pvVar42,0xffffffff);
    if (iVar51 <= *(int *)((int)pvVar42 + 0x6c)) {
      *(undefined4 *)(unaff_EBP - 0x2b40) = *(undefined4 *)((int)pvVar42 + 0x6c);
      iVar51 = FUN_00407db0(pvVar42,0xffffffff);
      iVar54 = FUN_00411d60(*(void **)(unaff_EBP - 0x2b14),0xffffffff);
      pvVar42 = *(void **)(unaff_EBP - 0x2b14);
      if ((*(int *)(unaff_EBP - 0x2b40) < iVar51 + iVar54) &&
         (*(int *)(unaff_EBP - 0x2b40) / iVar31 !=
          (*(int *)(unaff_EBP - 0x2b40) + *(int *)(unaff_EBP - 0x2b24)) / iVar31)) {
        fVar55 = FUN_004021b0((float *)((int)pvVar42 + 0x160));
        *(float *)(unaff_EBP - 0x2b1c) = (float)fVar55;
        if (0.0 < *(float *)(unaff_EBP - 0x2b1c)) {
          FUN_004c8530(unaff_EBP - 0x890);
          FUN_00402550((void *)(unaff_EBP - 0x890),(longlong *)((int)pvVar42 + 0x10));
          iVar31 = rand();
          iVar51 = *(int *)(unaff_EBP - 0x2b28);
          *(undefined4 *)(unaff_EBP - 0x884) = 0x16;
          *(float *)(unaff_EBP - 0x880) = ((float)iVar31 * 0.5) / 32767.0 + 1.0;
          FUN_00428590((void *)(iVar51 + 8),(undefined4 *)(unaff_EBP - 0x890));
          FUN_00422890((undefined4 *)(unaff_EBP - 0xde0));
          pfVar33 = FUN_00412670((float *)((int)pvVar42 + 0x160),(float *)(unaff_EBP - 0x16d0));
          puVar24 = (undefined4 *)FUN_004e1520((float *)(unaff_EBP - 0x13b8),150.0,pfVar33);
          FUN_00401060((void *)(unaff_EBP - 0xda4),puVar24);
          fVar56 = *(float *)(*(int *)(unaff_EBP - 0x2b14) + 0x13b4);
          *(undefined4 *)(unaff_EBP - 0xd78) = 0;
          *(undefined4 *)(unaff_EBP - 0xd94) = 0x3f000000;
          *(float *)(unaff_EBP - 0xd8c) = fVar56 * 0.25;
          *(undefined4 *)(unaff_EBP - 0xd88) = 0;
          *(undefined1 *)(unaff_EBP - 0xd84) = 1;
          FUN_00402a40((void *)(unaff_EBP - 0xdc8),(undefined4 *)((int)pvVar42 + 0x10));
          pvVar42 = *(void **)(unaff_EBP - 0x2b14);
          *(undefined4 *)(unaff_EBP - 0xde0) = *(undefined4 *)((int)pvVar42 + 8);
          *(undefined4 *)(unaff_EBP - 0xddc) = *(undefined4 *)((int)pvVar42 + 0xc);
          FUN_00401060((void *)(unaff_EBP - 0xdd8),(undefined4 *)((int)pvVar42 + 0x1b0));
          bVar6 = *(byte *)((int)pvVar42 + 0x68);
          *(undefined4 *)(unaff_EBP - 0xd80) = 0;
          *(undefined4 *)(unaff_EBP - 0x2b40) = 0x3f800000;
          if (bVar6 == 0x37) {
            *(undefined4 *)(unaff_EBP - 0x2b40) = 0x3dcccccd;
          }
          *(undefined4 *)(unaff_EBP - 0x2b90) = *(undefined4 *)((int)pvVar42 + 0x13b4);
          fVar55 = FUN_00409d10((uint)bVar6);
          *(float *)(unaff_EBP - 0x2b1c) = (float)fVar55;
          fVar55 = FUN_00408f70(pvVar42);
          fVar56 = *(float *)(unaff_EBP - 0x2b90);
          *(float *)(unaff_EBP - 0x2b48) = (float)fVar55;
          *(float *)(unaff_EBP - 0x2b1c) =
               *(float *)(unaff_EBP - 0x2b1c) * *(float *)(unaff_EBP - 0x2b48) *
               (fVar56 * fVar56 * 5.0 + *(float *)(unaff_EBP - 0x2b40));
          iVar31 = rand();
          iVar51 = *(int *)(unaff_EBP - 0x2b18);
          *(float *)(unaff_EBP - 0xd98) =
               ((1.25 - ((float)iVar31 * 0.5) / 32767.0) + 0.0) * *(float *)(unaff_EBP - 0x2b1c);
          FUN_00428360((void *)(iVar51 + 0x14),(undefined4 *)(unaff_EBP - 0xde0));
          FUN_00428360((void *)(*(int *)(unaff_EBP - 0x2b28) + 0x20),
                       (undefined4 *)(unaff_EBP - 0xde0));
          pvVar23 = *(void **)(unaff_EBP - 0x2b18);
          goto LAB_00537cfb;
        }
      }
    }
LAB_0053b968:
    pvVar23 = *(void **)(unaff_EBP - 0x2b18);
    goto LAB_00537cfb;
  case 'I':
    pvVar42 = *(void **)(unaff_EBP - 0x2b14);
    if (*(char *)((int)pvVar23 + 0xb4) == '\0') {
      iVar51 = FUN_00407db0(pvVar42,0xffffffff);
      if (*(int *)((int)pvVar42 + 0x6c) < iVar51) {
        iVar51 = FUN_00407db0(pvVar42,0xffffffff);
        iVar54 = *(int *)(unaff_EBP - 0x2b24);
        if (*(int *)((int)pvVar42 + 0x6c) + iVar54 < iVar51) goto LAB_00537d01;
        FUN_004c8530(unaff_EBP - 0x830);
        FUN_00402550((void *)(unaff_EBP - 0x830),(longlong *)((int)pvVar42 + 0x10));
        iVar31 = rand();
        iVar51 = *(int *)(unaff_EBP - 0x2b28);
        *(undefined4 *)(unaff_EBP - 0x824) = 0x2b;
        *(float *)(unaff_EBP - 0x820) = ((float)iVar31 * 0.25) / 32767.0 + 0.6;
        FUN_00428590((void *)(iVar51 + 8),(undefined4 *)(unaff_EBP - 0x830));
      }
      goto LAB_00537cfb;
    }
    goto LAB_00537d0a;
  case 'Y':
  case 'Z':
    iVar51 = *(int *)((int)*(void **)(unaff_EBP - 0x2b14) + 0x6c);
    iVar31 = FUN_00407db0(*(void **)(unaff_EBP - 0x2b14),0xffffffff);
    if ((iVar51 < iVar31) && (iVar51 / 200 != (iVar51 + *(int *)(unaff_EBP - 0x2b24)) / 200)) {
      FUN_004c8530(unaff_EBP - 0x6e0);
      FUN_00402550((void *)(unaff_EBP - 0x6e0),(longlong *)(*(int *)(unaff_EBP - 0x2b14) + 0x10));
      iVar31 = rand();
      iVar51 = *(int *)(unaff_EBP - 0x2b28);
      *(undefined4 *)(unaff_EBP - 0x6d4) = 0x24;
      *(float *)(unaff_EBP - 0x6d0) = ((float)iVar31 * 0.25) / 32767.0 + 1.0;
      FUN_00428590((void *)(iVar51 + 8),(undefined4 *)(unaff_EBP - 0x6e0));
    }
    pvVar42 = *(void **)(unaff_EBP - 0x2b14);
    if (((*(char *)((int)pvVar23 + 0xb4) == '\0') && (*(char *)((int)pvVar42 + 0x60) != '\0')) ||
       (pvVar42 == *(void **)((int)pvVar23 + 0xb8))) {
      iVar51 = FUN_00407db0(pvVar42,0xffffffff);
      pvVar42 = *(void **)(unaff_EBP - 0x2b14);
      if (iVar51 < *(int *)((int)pvVar42 + 0x6c)) goto LAB_00537cfb;
      iVar51 = FUN_00407db0(pvVar42,0xffffffff);
      iVar54 = *(int *)(unaff_EBP - 0x2b24);
      if (*(int *)((int)pvVar42 + 0x6c) + iVar54 <= iVar51) goto LAB_00537d01;
      FUN_004c8530(unaff_EBP - 0x710);
      FUN_00402550((void *)(unaff_EBP - 0x710),(longlong *)((int)pvVar42 + 0x10));
      iVar31 = rand();
      iVar51 = *(int *)(unaff_EBP - 0x2b28);
      *(undefined4 *)(unaff_EBP - 0x704) = 0x26;
      *(float *)(unaff_EBP - 0x700) = ((float)iVar31 * 0.25) / 32767.0 + 1.0;
      FUN_00428590((void *)(iVar51 + 8),(undefined4 *)(unaff_EBP - 0x710));
      FUN_00422890((undefined4 *)(unaff_EBP - 0xb78));
      iVar51 = *(int *)(unaff_EBP - 0x2b14);
      *(undefined4 *)(unaff_EBP - 0xb18) = 3;
      bVar6 = *(byte *)(iVar51 + 0x68);
      *(undefined1 *)(unaff_EBP - 0xb1c) = 0;
      *(undefined4 *)(unaff_EBP - 0xb24) = 0;
      *(undefined4 *)(unaff_EBP - 0xb20) = 0;
      fVar55 = FUN_00409d10((uint)bVar6);
      pvVar18 = *(void **)(unaff_EBP - 0x2b14);
      *(float *)(unaff_EBP - 0x2b1c) = (float)fVar55;
      fVar55 = FUN_00411ad0(pvVar18);
      iVar51 = *(int *)(unaff_EBP - 0x2b14);
      *(float *)(unaff_EBP - 0x2b48) = (float)fVar55;
      fVar56 = *(float *)(unaff_EBP - 0x2b1c);
      fVar59 = *(float *)(unaff_EBP - 0x2b48);
      cVar4 = *(char *)(iVar51 + 0x68);
      *(undefined4 *)(unaff_EBP - 0xb78) = *(undefined4 *)(iVar51 + 8);
      *(undefined4 *)(unaff_EBP - 0xb74) = *(undefined4 *)(iVar51 + 0xc);
      *(float *)(unaff_EBP - 0xb30) = fVar56 * fVar59 * 2.0;
      *(undefined4 *)(unaff_EBP - 0xb2c) = 0x41000000;
      *(char *)(unaff_EBP - 0xb14) = (cVar4 == 'Z') + '\x01';
      FUN_00402a40((void *)(unaff_EBP - 0xb60),(undefined4 *)((int)pvVar42 + 0x10));
      *(undefined4 *)(unaff_EBP - 0xb28) = 0x3f800000;
      *(undefined4 *)(unaff_EBP - 0xb10) = 0;
      puVar24 = FUN_00401080((void *)(unaff_EBP - 0x1310),0,0,0);
      FUN_00401060((void *)(unaff_EBP - 0xb3c),puVar24);
      FUN_00428360((void *)((int)pvVar23 + 0x14),(undefined4 *)(unaff_EBP - 0xb78));
      FUN_00428360((void *)(*(int *)(unaff_EBP - 0x2b28) + 0x20),(undefined4 *)(unaff_EBP - 0xb78));
    }
LAB_00537cf5:
    pvVar42 = *(void **)(unaff_EBP - 0x2b14);
LAB_00537cfb:
    iVar54 = *(int *)(unaff_EBP - 0x2b24);
    goto LAB_00537d01;
  case '\\':
    pvVar42 = *(void **)(unaff_EBP - 0x2b14);
    if (((*(char *)((int)pvVar23 + 0xb4) == '\0') && (*(char *)((int)pvVar42 + 0x60) != '\0')) ||
       (pvVar42 == *(void **)((int)pvVar23 + 0xb8))) {
      iVar51 = FUN_00407db0(pvVar42,0xffffffff);
      pvVar42 = *(void **)(unaff_EBP - 0x2b14);
      if (iVar51 < *(int *)((int)pvVar42 + 0x6c)) goto LAB_00537cfb;
      iVar51 = FUN_00407db0(pvVar42,0xffffffff);
      iVar54 = *(int *)(unaff_EBP - 0x2b24);
      if (iVar51 < *(int *)((int)pvVar42 + 0x6c) + iVar54) {
        pvVar23 = *(void **)(unaff_EBP - 0x2b6c);
        *(undefined4 *)(unaff_EBP - 0x2b20) = 0;
        *(undefined8 *)(unaff_EBP - 0x2c30) = 0;
        FUN_00428070(pvVar23,(undefined4 *)(unaff_EBP - 0x2c80));
        piVar25 = (int *)FUN_00530550(*(void **)(unaff_EBP - 0x2b6c),
                                      (undefined4 *)(unaff_EBP - 0x2df0));
        bVar5 = FUN_0042c6f0((void *)(unaff_EBP - 0x2c80),piVar25);
        uVar22 = *(uint *)(unaff_EBP - 0x2c2c);
        uVar52 = *(uint *)(unaff_EBP - 0x2c30);
        if (bVar5) {
          do {
            puVar26 = (uint *)FUN_00402bc0((int *)(unaff_EBP - 0x2c80));
            if (puVar26[2] != 0) {
              if ((*(int *)(puVar26[2] + 0x198) == *(int *)(*(int *)(unaff_EBP - 0x2b14) + 8)) &&
                 (*(int *)(puVar26[2] + 0x19c) == *(int *)(*(int *)(unaff_EBP - 0x2b14) + 0xc))) {
                *(int *)(unaff_EBP - 0x2b20) = *(int *)(unaff_EBP - 0x2b20) + 1;
              }
              uVar48 = *puVar26;
              uVar63 = puVar26[1];
              if (((int)uVar63 <= (int)uVar22) && (((int)uVar63 < (int)uVar22 || (uVar48 < uVar52)))
                 ) {
                *(uint *)(unaff_EBP - 0x2c30) = uVar48;
                *(uint *)(unaff_EBP - 0x2c2c) = uVar63;
                uVar52 = uVar48;
                uVar22 = uVar63;
              }
            }
            FUN_00407a30((void *)(unaff_EBP - 0x2c80),(int *)(unaff_EBP - 0x301c));
            piVar25 = (int *)FUN_00530550(*(void **)(unaff_EBP - 0x2b6c),
                                          (undefined4 *)(unaff_EBP - 0x2df0));
            bVar5 = FUN_0042c6f0((void *)(unaff_EBP - 0x2c80),piVar25);
          } while (bVar5);
          if (2 < *(int *)(unaff_EBP - 0x2b20)) goto code_r0x00537cef;
        }
        *(uint *)(unaff_EBP - 0x2c30) = uVar52 - 1;
        *(uint *)(unaff_EBP - 0x2c2c) = (uVar22 - 1) + (uint)(uVar52 != 0);
        pCVar8 = operator_new(0x1e60);
        *(Creature **)(unaff_EBP - 0x2b30) = pCVar8;
        *(undefined1 *)(unaff_EBP - 4) = 0x11;
        if (pCVar8 == (Creature *)0x0) {
          pCVar8 = (Creature *)0x0;
        }
        else {
          pCVar8 = cube::Creature::Creature(pCVar8,(undefined4 *)(unaff_EBP - 0x2c30));
        }
        iVar51 = *(int *)(unaff_EBP - 0x2b14);
        *(undefined1 *)(unaff_EBP - 4) = 5;
        piVar25 = (int *)(iVar51 + 0x13f8);
        *(char *)&pCVar8[4].Creature_data.offset_0xc =
             (*(char *)(iVar51 + 0x60) == '\0') * '\x02' + '\x01';
        bVar5 = FUN_004e28d0(piVar25);
        if (bVar5) {
          iVar51 = *(int *)(unaff_EBP - 0x2b14);
          pCVar49 = (Creature_vftable *)0x25;
        }
        else {
          uVar22 = FUN_0041fff0(piVar25);
          uVar52 = rand();
          iVar51 = *(int *)(unaff_EBP - 0x2b14);
          puVar26 = (uint *)FUN_00402bb0((void *)(iVar51 + 0x13f8),uVar52 % uVar22);
          pCVar49 = (Creature_vftable *)*puVar26;
        }
        if (*(int *)(iVar51 + 0x13f4) == 1) {
          pCVar8[5].vftablePtr = *(Creature_vftable **)(iVar51 + 100);
          FUN_0041de30(&pCVar8[0x26].Creature_data.offset_0x4,(undefined1 *)(iVar51 + 0x300));
          FUN_00407730(pCVar8 + 6,(undefined1 *)(iVar51 + 0x78));
        }
        else if (*(int *)(iVar51 + 0x13f4) == 2) {
          uVar22 = FUN_00405420(*(void **)(unaff_EBP - 0x2b18),(uint *)(iVar51 + 0x11d0));
          if (uVar22 == 0) {
            uVar22 = *(uint *)(unaff_EBP - 0x2b14);
          }
          pCVar8[5].vftablePtr = *(Creature_vftable **)(uVar22 + 100);
          FUN_0041de30(&pCVar8[0x26].Creature_data.offset_0x4,(undefined1 *)(uVar22 + 0x300));
          FUN_00407730(pCVar8 + 6,(undefined1 *)(uVar22 + 0x78));
          iVar51 = *(int *)(unaff_EBP - 0x2b14);
        }
        else {
          pCVar8[5].vftablePtr = pCVar49;
          FUN_0040a840((uint *)(pCVar8 + 5),(int)(pCVar8 + 6),(undefined4 *)0x0);
        }
        *(ushort *)&pCVar8[6].Creature_data.field_0x2 =
             *(ushort *)&pCVar8[6].Creature_data.field_0x2 & 0xfdff | 0x800;
        pCVar8[0x14].vftablePtr = *(Creature_vftable **)(iVar51 + 400);
        fVar55 = FUN_0040fda0(iVar51);
        *(float *)&pCVar8[0x12].Creature_data = (float)fVar55;
        FUN_00402a40(&(pCVar8->Creature_data).offset_0xc,(undefined4 *)(iVar51 + 0x10));
        pSVar13 = operator_new(0xc);
        *(SequentialBehavior **)(unaff_EBP - 0x2b30) = pSVar13;
        *(undefined1 *)(unaff_EBP - 4) = 0x12;
        if (pSVar13 == (SequentialBehavior *)0x0) {
          pSVar13 = (SequentialBehavior *)0x0;
          *(undefined4 *)(unaff_EBP - 0x2b40) = 0;
        }
        else {
          pSVar13 = cube::SequentialBehavior::SequentialBehavior(pSVar13);
          *(SequentialBehavior **)(unaff_EBP - 0x2b40) = pSVar13;
        }
        *(undefined1 *)(unaff_EBP - 4) = 5;
        pCVar14 = operator_new(0x14);
        *(CombatBehavior **)(unaff_EBP - 0x2b30) = pCVar14;
        *(undefined1 *)(unaff_EBP - 4) = 0x13;
        if (pCVar14 == (CombatBehavior *)0x0) {
          pCVar14 = (CombatBehavior *)0x0;
        }
        else {
          pCVar14 = cube::CombatBehavior::CombatBehavior(pCVar14,0x41a00000);
        }
        *(CombatBehavior **)(unaff_EBP - 0x2b1c) = pCVar14;
        this = &pSVar13->SequentialBehavior_data;
        *(undefined1 *)(unaff_EBP - 4) = 5;
        FUN_004d6620(this,(undefined4 *)(unaff_EBP - 0x2b1c));
        pCVar15 = operator_new(0x10);
        *(CompanionBehavior **)(unaff_EBP - 0x2b30) = pCVar15;
        *(undefined1 *)(unaff_EBP - 4) = 0x14;
        if (pCVar15 == (CompanionBehavior *)0x0) {
          pCVar15 = (CompanionBehavior *)0x0;
        }
        else {
          pCVar15 = cube::CompanionBehavior::CompanionBehavior(pCVar15);
        }
        iVar51 = *(int *)(unaff_EBP - 0x2b14);
        *(CompanionBehavior **)(unaff_EBP - 0x2b1c) = pCVar15;
        (pCVar15->CompanionBehavior_data).offset_0x4 = *(undefined4 *)(iVar51 + 8);
        (pCVar15->CompanionBehavior_data).offset_0x8 = *(undefined4 *)(iVar51 + 0xc);
        *(undefined1 *)(unaff_EBP - 4) = 5;
        FUN_004d6620(this,(undefined4 *)(unaff_EBP - 0x2b1c));
        pRVar16 = operator_new(8);
        *(RandomWalkBehavior **)(unaff_EBP - 0x2b30) = pRVar16;
        *(undefined1 *)(unaff_EBP - 4) = 0x15;
        if (pRVar16 == (RandomWalkBehavior *)0x0) {
          pRVar16 = (RandomWalkBehavior *)0x0;
        }
        else {
          pRVar16 = cube::RandomWalkBehavior::RandomWalkBehavior(pRVar16);
        }
        *(RandomWalkBehavior **)(unaff_EBP - 0x2b1c) = pRVar16;
        *(undefined1 *)(unaff_EBP - 4) = 5;
        FUN_004d6620(this,(undefined4 *)(unaff_EBP - 0x2b1c));
        pvVar42 = *(void **)(unaff_EBP - 0x2b14);
        pvVar23 = *(void **)(unaff_EBP - 0x2b6c);
        pCVar8[0xfe].Creature_data.offset_0x8 = *(undefined4 *)(unaff_EBP - 0x2b40);
        pCVar8[0x14].Creature_data.offset_0x4 = *(undefined4 *)((int)pvVar42 + 8);
        pCVar8[0x14].Creature_data.offset_0x8 = *(undefined4 *)((int)pvVar42 + 0xc);
        puVar26 = FUN_00402b10(pvVar23,(uint *)(unaff_EBP - 0x2c30));
        *puVar26 = (uint)pCVar8;
        goto LAB_0053b968;
      }
      goto LAB_00537d01;
    }
    break;
  case 'e':
    iVar51 = *(int *)(unaff_EBP - 0x2b14);
    if ((((*(char *)((int)pvVar23 + 0xb4) == '\0') && (*(char *)(iVar51 + 0x60) != '\0')) ||
        (iVar51 == *(int *)((int)pvVar23 + 0xb8))) && (*(int *)(iVar51 + 0x6c) == 0)) {
      FUN_004c8530(unaff_EBP - 0x680);
      pvVar42 = *(void **)(unaff_EBP - 0x2b14);
      FUN_00402550((void *)(unaff_EBP - 0x680),(longlong *)((int)pvVar42 + 0x10));
      iVar51 = *(int *)(unaff_EBP - 0x2b28);
      *(undefined4 *)(unaff_EBP - 0x670) = 0x3f800000;
      *(undefined4 *)(unaff_EBP - 0x674) = 0x19;
      FUN_00428590((void *)(iVar51 + 8),(undefined4 *)(unaff_EBP - 0x680));
      FUN_004029b0((undefined1 *)(unaff_EBP - 0x2f1c));
      *(undefined4 *)(unaff_EBP - 0x2f14) = 10000;
      *(undefined1 *)(unaff_EBP - 0x2f1c) = 1;
      FUN_00411740(pvVar42,(char *)(unaff_EBP - 0x2f1c));
      if (0 < *(int *)((int)pvVar42 + 300)) {
        *(undefined4 *)((int)pvVar42 + 300) = 0;
      }
      FUN_004063d0(unaff_EBP - 0x30d4);
      pvVar42 = *(void **)(unaff_EBP - 0x2b14);
      uVar28 = *(undefined4 *)((int)pvVar42 + 0xc);
      uVar64 = *(undefined4 *)((int)pvVar42 + 8);
      *(undefined8 *)(unaff_EBP - 0x30c4) = *(undefined8 *)(unaff_EBP - 0x2f1c);
      uVar1 = *(undefined8 *)(unaff_EBP - 0x2f14);
      *(undefined4 *)(unaff_EBP - 0x30d0) = uVar28;
      *(undefined4 *)(unaff_EBP - 0x30c8) = uVar28;
      iVar51 = *(int *)(unaff_EBP - 0x2b28);
      *(undefined4 *)(unaff_EBP - 0x30d4) = uVar64;
      *(undefined4 *)(unaff_EBP - 0x30cc) = uVar64;
      *(undefined8 *)(unaff_EBP - 0x30bc) = uVar1;
      uVar28 = *(undefined4 *)(unaff_EBP - 0x2f08);
      *(undefined4 *)(unaff_EBP - 0x30b4) = *(undefined4 *)(unaff_EBP - 0x2f0c);
      *(undefined4 *)(unaff_EBP - 0x30b0) = uVar28;
      FUN_00411040((void *)(iVar51 + 0x58),(undefined8 *)(unaff_EBP - 0x30d4));
      goto LAB_00537cfb;
    }
    break;
  case 'g':
    iVar51 = *(int *)(unaff_EBP - 0x2b14);
    if ((((*(char *)((int)pvVar23 + 0xb4) == '\0') && (*(char *)(iVar51 + 0x60) != '\0')) ||
        (iVar51 == *(int *)((int)pvVar23 + 0xb8))) && (*(int *)(iVar51 + 0x6c) == 0)) {
      FUN_004c8530(unaff_EBP - 0x5f0);
      pvVar42 = *(void **)(unaff_EBP - 0x2b14);
      FUN_00402550((void *)(unaff_EBP - 0x5f0),(longlong *)((int)pvVar42 + 0x10));
      iVar51 = *(int *)(unaff_EBP - 0x2b28);
      *(undefined4 *)(unaff_EBP - 0x5e0) = 0x3f800000;
      *(undefined4 *)(unaff_EBP - 0x5e4) = 0x19;
      FUN_00428590((void *)(iVar51 + 8),(undefined4 *)(unaff_EBP - 0x5f0));
      FUN_004029b0((undefined1 *)(unaff_EBP - 0x2e84));
      *(undefined4 *)(unaff_EBP - 0x2e7c) = 30000;
      fVar55 = FUN_00411ad0(pvVar42);
      *(float *)(unaff_EBP - 0x2b1c) = (float)fVar55;
      *(float *)(unaff_EBP - 0x2e80) = *(float *)(unaff_EBP - 0x2b1c) * 4.0;
      *(undefined1 *)(unaff_EBP - 0x2e84) = 6;
      FUN_00411740(pvVar42,(char *)(unaff_EBP - 0x2e84));
      if (0 < *(int *)((int)pvVar42 + 300)) {
        *(undefined4 *)((int)pvVar42 + 300) = 0;
      }
      FUN_004063d0(unaff_EBP - 0x30fc);
      pvVar42 = *(void **)(unaff_EBP - 0x2b14);
      uVar28 = *(undefined4 *)((int)pvVar42 + 0xc);
      uVar64 = *(undefined4 *)((int)pvVar42 + 8);
      *(undefined8 *)(unaff_EBP - 0x30ec) = *(undefined8 *)(unaff_EBP - 0x2e84);
      uVar1 = *(undefined8 *)(unaff_EBP - 0x2e7c);
      *(undefined4 *)(unaff_EBP - 0x30f8) = uVar28;
      *(undefined4 *)(unaff_EBP - 0x30f0) = uVar28;
      iVar51 = *(int *)(unaff_EBP - 0x2b28);
      *(undefined4 *)(unaff_EBP - 0x30fc) = uVar64;
      *(undefined4 *)(unaff_EBP - 0x30f4) = uVar64;
      *(undefined8 *)(unaff_EBP - 0x30e4) = uVar1;
      uVar28 = *(undefined4 *)(unaff_EBP - 0x2e70);
      *(undefined4 *)(unaff_EBP - 0x30dc) = *(undefined4 *)(unaff_EBP - 0x2e74);
      *(undefined4 *)(unaff_EBP - 0x30d8) = uVar28;
      FUN_00411040((void *)(iVar51 + 0x58),(undefined8 *)(unaff_EBP - 0x30fc));
      goto LAB_00537cfb;
    }
    break;
  case 'i':
    if (*(void **)(unaff_EBP - 0x2b14) == *(void **)((int)pvVar23 + 0xb8)) {
      iVar51 = FUN_00407db0(*(void **)(unaff_EBP - 0x2b14),0xffffffff);
      pvVar42 = *(void **)(unaff_EBP - 0x2b14);
      if (iVar51 < *(int *)((int)pvVar42 + 0x6c)) goto LAB_00537cfb;
      iVar51 = FUN_00407db0(pvVar42,0xffffffff);
      iVar54 = *(int *)(unaff_EBP - 0x2b24);
      if (iVar51 < *(int *)((int)pvVar42 + 0x6c) + iVar54) {
        iVar51 = *(int *)((int)pvVar23 + 0xb8);
        pCVar38 = (CRefTime *)FUN_004e2320((void *)(iVar51 + 0x10),1);
        lVar39 = CRefTime::Millisecs(pCVar38);
        pCVar38 = (CRefTime *)FUN_004e2320((void *)(iVar51 + 0x10),0);
        lVar11 = CRefTime::Millisecs(pCVar38);
        iVar51 = FUN_004feec0(pvVar23,lVar11,lVar39);
        if (iVar51 != 0) {
          pvVar23 = (void *)(iVar51 + 0x14018);
          *(undefined4 *)(unaff_EBP - 0x2b20) = 8;
          do {
            iVar51 = 8;
            *(undefined4 *)(unaff_EBP - 0x2b40) = 8;
            do {
              if (*(int *)((int)pvVar23 + 0x18) == 1) {
                pvVar18 = (void *)(*(int *)(unaff_EBP - 0x2b14) + 0x10);
                puVar24 = (undefined4 *)FUN_004e2320(pvVar23,0);
                pvVar42 = (void *)FUN_004e2320(pvVar18,0);
                FUN_004cde20(pvVar42,puVar24);
                puVar24 = (undefined4 *)FUN_004e2320(pvVar23,1);
                pvVar42 = (void *)FUN_004e2320(pvVar18,1);
                FUN_004cde20(pvVar42,puVar24);
                uVar22 = 0;
                pvVar42 = (void *)FUN_004e2320(pvVar18,2);
                FUN_004cde40(pvVar42,uVar22);
                iVar51 = *(int *)(unaff_EBP - 0x2b40);
              }
              pvVar23 = (void *)((int)pvVar23 + 0x68);
              iVar51 = iVar51 + -1;
              *(int *)(unaff_EBP - 0x2b40) = iVar51;
            } while (iVar51 != 0);
            piVar25 = (int *)(unaff_EBP - 0x2b20);
            *piVar25 = *piVar25 + -1;
          } while (*piVar25 != 0);
          goto code_r0x00537cef;
        }
        goto LAB_00537cf5;
      }
      goto LAB_00537d01;
    }
    break;
  case 'n':
    pvVar42 = *(void **)(unaff_EBP - 0x2b14);
    if (*(char *)((int)pvVar23 + 0xb4) == '\0') {
      iVar51 = FUN_00407db0(pvVar42,0xffffffff);
      if (*(int *)((int)pvVar42 + 0x6c) < iVar51) {
        iVar51 = FUN_00407db0(pvVar42,0xffffffff);
        iVar54 = *(int *)(unaff_EBP - 0x2b24);
        if (*(int *)((int)pvVar42 + 0x6c) + iVar54 < iVar51) goto LAB_00537d01;
        uVar22 = FUN_00405420(pvVar23,(uint *)((int)pvVar42 + 0x11d0));
        if (((uVar22 == 0) || (*(char *)(uVar22 + 0x1020) != '\x14')) ||
           ((uint)*(byte *)(uVar22 + 0x1021) != *(uint *)((int)pvVar42 + 100))) goto LAB_0053b968;
        FUN_004c8530(unaff_EBP - 0x860);
        FUN_00402550((void *)(unaff_EBP - 0x860),(longlong *)((int)pvVar42 + 0x10));
        iVar31 = rand();
        iVar51 = *(int *)(unaff_EBP - 0x2b28);
        *(undefined4 *)(unaff_EBP - 0x854) = 0x2c;
        *(float *)(unaff_EBP - 0x850) = ((float)iVar31 * 0.2) / 32767.0 + 0.9;
        FUN_00428590((void *)(iVar51 + 8),(undefined4 *)(unaff_EBP - 0x860));
        FUN_00422a90(unaff_EBP - 0xbc0);
        iVar51 = *(int *)(unaff_EBP - 0x2b14);
        *(undefined4 *)(unaff_EBP - 0xbc0) = *(undefined4 *)(iVar51 + 8);
        *(undefined4 *)(unaff_EBP - 0xbbc) = *(undefined4 *)(iVar51 + 0xc);
        *(undefined4 *)(unaff_EBP - 3000) = *(undefined4 *)(uVar22 + 8);
        uVar28 = *(undefined4 *)(uVar22 + 0xc);
        *(undefined4 *)(unaff_EBP - 0xbb0) = 0;
        *(undefined1 *)(unaff_EBP - 0xb7b) = 6;
        *(undefined1 *)(unaff_EBP - 0xbac) = 0;
        *(undefined4 *)(unaff_EBP - 0xbb4) = uVar28;
        FUN_00402a40((void *)(unaff_EBP - 0xba0),(undefined4 *)((int)pvVar42 + 0x10));
        FUN_00428400(*(void **)(unaff_EBP - 0x2b28),(undefined4 *)(unaff_EBP - 0xbc0));
        pvVar23 = (void *)(*(int *)(unaff_EBP - 0x2b14) + 0x1178);
        *(undefined4 *)(unaff_EBP - 0x2b64) = 0;
        FUN_00428070(pvVar23,(undefined4 *)(unaff_EBP - 0x2c50));
        piVar25 = (int *)FUN_00530550(pvVar23,(undefined4 *)(unaff_EBP - 0x2e30));
        bVar5 = FUN_0042c6f0((void *)(unaff_EBP - 0x2c50),piVar25);
        if (bVar5) {
          do {
            pcVar12 = (char *)FUN_0052eb90((int *)(unaff_EBP - 0x2c50));
            if (*pcVar12 == '\a') {
              *(undefined4 *)(unaff_EBP - 0x2b64) = *(undefined4 *)(pcVar12 + 4);
            }
            FUN_0052ebf0((void *)(unaff_EBP - 0x2c50),(undefined4 *)(unaff_EBP - 0x2b30));
            piVar25 = (int *)FUN_00530550(pvVar23,(undefined4 *)(unaff_EBP - 0x2e30));
            bVar5 = FUN_0042c6f0((void *)(unaff_EBP - 0x2c50),piVar25);
          } while (bVar5);
        }
        fVar56 = *(float *)(unaff_EBP - 0x2b64) + 0.2;
        pvVar42 = *(void **)(unaff_EBP - 0x2b14);
        *(int *)((int)pvVar42 + 0x70) = *(int *)((int)pvVar42 + 0x70) + 1;
        *(undefined4 *)((int)pvVar42 + 0x74) = 0;
        *(float *)(unaff_EBP - 0x2b64) = fVar56;
        if (1.0 <= fVar56) {
          pvVar23 = *(void **)(unaff_EBP - 0x2b18);
          *(undefined1 *)((int)pvVar42 + 0x60) = 5;
          uVar28 = *(undefined4 *)(uVar22 + 0xc);
          *(undefined4 *)(unaff_EBP - 0x2b64) = 0x3f800000;
          FUN_00522580(pvVar23,*(uint *)(uVar22 + 8),uVar28,(int)pvVar42);
        }
        FUN_004029b0((undefined1 *)(unaff_EBP - 0x2ea4));
        uVar28 = *(undefined4 *)(unaff_EBP - 0x2b64);
        iVar51 = *(int *)(unaff_EBP - 0x2b28);
        *(undefined1 *)(unaff_EBP - 0x2ea4) = 7;
        *(undefined4 *)(unaff_EBP - 0x2e9c) = 5000;
        *(undefined4 *)(unaff_EBP - 0x2ea0) = uVar28;
        *(undefined4 *)(unaff_EBP - 0x2e94) = *(undefined4 *)((int)pvVar42 + 0x198);
        *(undefined4 *)(unaff_EBP - 0x2e90) = *(undefined4 *)((int)pvVar42 + 0x19c);
        FUN_004ce9f0(pvVar42,(char *)(unaff_EBP - 0x2ea4),iVar51);
        pvVar23 = *(void **)(unaff_EBP - 0x2b18);
      }
      goto LAB_00537cfb;
    }
    goto LAB_00537d0a;
  }
  pvVar42 = *(void **)(unaff_EBP - 0x2b14);
LAB_00537d01:
  if (*(char *)((int)pvVar23 + 0xb4) == '\0') {
LAB_00537d16:
    *(int *)((int)pvVar42 + 0x74) = *(int *)((int)pvVar42 + 0x74) + iVar54;
    if (4000 < *(int *)((int)pvVar42 + 0x74)) {
      fVar55 = FUN_00412150((int)pvVar42);
      *(float *)(unaff_EBP - 0x2b1c) = (float)fVar55;
      *(undefined4 *)((int)pvVar42 + 0x70) = 0;
      fVar55 = FUN_00412150((int)pvVar42);
      *(float *)(unaff_EBP - 0x2b48) = (float)fVar55;
      pvVar23 = (void *)((int)pvVar42 + 0x139c);
      *(int *)((int)pvVar42 + 0x6c) =
           (int)((*(float *)(unaff_EBP - 0x2b1c) / *(float *)(unaff_EBP - 0x2b48)) *
                (float)*(int *)((int)pvVar42 + 0x6c));
      FUN_00428070(pvVar23,(undefined4 *)(unaff_EBP - 0x2c9c));
      piVar25 = (int *)FUN_00530550(pvVar23,(undefined4 *)(unaff_EBP - 0x2d98));
      bVar5 = FUN_0042c6f0((void *)(unaff_EBP - 0x2c9c),piVar25);
      if (bVar5) {
        do {
          puVar24 = (undefined4 *)FUN_00402bc0((int *)(unaff_EBP - 0x2c9c));
          cVar4 = FUN_0040f6d0();
          if (cVar4 != '\0') {
            iVar51 = FUN_00409780(*(void **)(unaff_EBP - 0x2b14),*puVar24,-1);
            puVar24[1] = iVar51;
          }
          FUN_00407a30((void *)(unaff_EBP - 0x2c9c),(int *)(unaff_EBP - 0x3024));
          piVar25 = (int *)FUN_00530550(pvVar23,(undefined4 *)(unaff_EBP - 0x2d98));
          bVar5 = FUN_0042c6f0((void *)(unaff_EBP - 0x2c9c),piVar25);
        } while (bVar5);
        pvVar42 = *(void **)(unaff_EBP - 0x2b14);
      }
    }
  }
  else {
LAB_00537d0a:
    if (pvVar42 == *(void **)((int)pvVar23 + 0xb8)) goto LAB_00537d16;
  }
  pvVar23 = (void *)((int)pvVar42 + 0x139c);
  FUN_00428070(pvVar23,(undefined4 *)(unaff_EBP - 0x2c6c));
  piVar25 = (int *)FUN_00530550(pvVar23,(undefined4 *)(unaff_EBP - 0x2df8));
  bVar5 = FUN_0042c6f0((void *)(unaff_EBP - 0x2c6c),piVar25);
  if (bVar5) {
    do {
      iVar51 = FUN_00402bc0((int *)(unaff_EBP - 0x2c6c));
      cVar4 = FUN_0040f6d0();
      if (cVar4 == '\0') {
        piVar25 = (int *)(iVar51 + 4);
        *piVar25 = *piVar25 - *(int *)(unaff_EBP - 0x2b24);
        if (*piVar25 < 0) {
          *(undefined4 *)(iVar51 + 4) = 0;
        }
      }
      FUN_00407a30((void *)(unaff_EBP - 0x2c6c),(int *)(unaff_EBP - 0x2fcc));
      piVar25 = (int *)FUN_00530550(pvVar23,(undefined4 *)(unaff_EBP - 0x2df8));
      bVar5 = FUN_0042c6f0((void *)(unaff_EBP - 0x2c6c),piVar25);
    } while (bVar5);
    pvVar42 = *(void **)(unaff_EBP - 0x2b14);
  }
  FUN_004c8280((undefined4 *)(unaff_EBP - 0x2bf8));
  pvVar42 = (void *)((int)pvVar42 + 0x1178);
  *(undefined1 *)(unaff_EBP - 4) = 0x16;
  FUN_00428070(pvVar42,(undefined4 *)(unaff_EBP - 0x2ba4));
  piVar25 = (int *)FUN_00530550(pvVar42,(undefined4 *)(unaff_EBP - 0x2ce8));
  bVar5 = FUN_0042c6f0((void *)(unaff_EBP - 0x2ba4),piVar25);
  if (bVar5) {
    do {
      pcVar12 = (char *)FUN_0052eb90((int *)(unaff_EBP - 0x2ba4));
      iVar51 = *(int *)(unaff_EBP - 0x2b24);
      *(int *)(pcVar12 + 8) = *(int *)(pcVar12 + 8) - iVar51;
      iVar31 = *(int *)(pcVar12 + 8);
      if (iVar31 < 1) {
        FUN_004d6620((void *)(unaff_EBP - 0x2bf8),(undefined4 *)(unaff_EBP - 0x2ba4));
      }
      else if (*pcVar12 == '\x01') {
        if (0 < *(int *)(*(int *)(unaff_EBP - 0x2b14) + 300)) {
          *(undefined4 *)(*(int *)(unaff_EBP - 0x2b14) + 300) = 0;
        }
      }
      else if (((*pcVar12 == '\x04') && (*(char *)(*(int *)(unaff_EBP - 0x2b18) + 0xb4) == '\0')) &&
              (iVar31 / 400 != (iVar51 + iVar31) / 400)) {
        pvVar23 = (void *)FUN_00405420(*(void **)(unaff_EBP - 0x2b18),(uint *)(pcVar12 + 0x10));
        uVar60 = 0;
        iVar51 = 0;
        cVar4 = '\x01';
        puVar24 = (undefined4 *)(unaff_EBP - 0x2be8);
        puVar45 = *(undefined4 **)(unaff_EBP - 0x2b28);
        pfVar33 = (float *)FUN_00401080((void *)(unaff_EBP - 0x1700),0,0,0);
        FUN_004cfd50(*(void **)(unaff_EBP - 0x2b18),*(float *)(unaff_EBP - 0x2b14),pvVar23,
                     *(float *)(pcVar12 + 4),'\0','\0',0.0,
                     (int)*(float *)(unaff_EBP - 0x2b14) + 0x1320,pfVar33,puVar45,puVar24,cVar4,
                     iVar51,(int)uVar60,(char)(uVar60 >> 0x20));
      }
      FUN_0052ebf0((void *)(unaff_EBP - 0x2ba4),(undefined4 *)(unaff_EBP - 0x2b30));
      pvVar42 = (void *)(*(int *)(unaff_EBP - 0x2b14) + 0x1178);
      piVar25 = (int *)FUN_00530550(pvVar42,(undefined4 *)(unaff_EBP - 0x2ce8));
      bVar5 = FUN_0042c6f0((void *)(unaff_EBP - 0x2ba4),piVar25);
    } while (bVar5);
  }
  FUN_00428070((void *)(unaff_EBP - 0x2bf8),(undefined4 *)(unaff_EBP - 0x2c8c));
  piVar25 = (int *)FUN_00530550((void *)(unaff_EBP - 0x2bf8),(undefined4 *)(unaff_EBP - 0x2cec));
  bVar5 = FUN_0042c6f0((void *)(unaff_EBP - 0x2c8c),piVar25);
  if (bVar5) {
    do {
      puVar24 = (undefined4 *)FUN_0052eb90((int *)(unaff_EBP - 0x2c8c));
      FUN_005305b0(pvVar42,(int *)(unaff_EBP - 0x3054),(int *)*puVar24);
      FUN_0052ebf0((void *)(unaff_EBP - 0x2c8c),(undefined4 *)(unaff_EBP - 0x2b30));
      piVar25 = (int *)FUN_00530550((void *)(unaff_EBP - 0x2bf8),(undefined4 *)(unaff_EBP - 0x2cec))
      ;
      bVar5 = FUN_0042c6f0((void *)(unaff_EBP - 0x2c8c),piVar25);
    } while (bVar5);
  }
  pvVar42 = *(void **)(unaff_EBP - 0x2b14);
  *(int *)((int)pvVar42 + 300) = *(int *)((int)pvVar42 + 300) - *(int *)(unaff_EBP - 0x2b24);
  if (0 < *(int *)((int)pvVar42 + 300)) {
    *(undefined4 *)((int)pvVar42 + 0x6c) = 0;
    *(undefined1 *)((int)pvVar42 + 0x68) = 0;
  }
  if (*(char *)((int)pvVar42 + 0x60) == '\x06') {
LAB_0053e357:
    if (*(char *)((int)pvVar42 + 0x68) == '\0') {
      piVar34 = (int *)((int)pvVar42 + 0x11b4);
      FUN_00428070(piVar34,(undefined4 *)(unaff_EBP - 0x2c38));
      piVar25 = (int *)FUN_00530550(piVar34,(undefined4 *)(unaff_EBP - 0x2cf0));
      bVar5 = FUN_0042c6f0((void *)(unaff_EBP - 0x2c38),piVar25);
      if (bVar5) {
        iVar51 = *(int *)(unaff_EBP - 0x2b14);
        do {
          puVar26 = (uint *)FUN_00402bc0((int *)(unaff_EBP - 0x2c38));
          piVar25 = (int *)FUN_00530550((void *)(iVar51 + 0x11ac),(undefined4 *)(unaff_EBP - 0x2fd4)
                                       );
          pvVar23 = (void *)FUN_00530600((void *)(iVar51 + 0x11ac),(int *)(unaff_EBP - 0x2f9c),
                                         puVar26);
          bVar5 = FUN_004078d0(pvVar23,piVar25);
          if ((bVar5) &&
             (pvVar23 = (void *)FUN_00405420(*(void **)(unaff_EBP - 0x2b18),puVar26),
             pvVar23 != (void *)0x0)) {
            FUN_00408230(pvVar23,*(int *)(unaff_EBP - 0x2b28));
            FUN_00422a90(unaff_EBP - 0xc08);
            iVar31 = *(int *)(unaff_EBP - 0x2b14);
            *(undefined4 *)(unaff_EBP - 0xbf8) = 0;
            *(undefined4 *)(unaff_EBP - 0xc08) = *(undefined4 *)(iVar31 + 8);
            *(undefined4 *)(unaff_EBP - 0xc04) = *(undefined4 *)(iVar31 + 0xc);
            *(undefined4 *)(unaff_EBP - 0xc00) = *(undefined4 *)((int)pvVar23 + 8);
            *(undefined4 *)(unaff_EBP - 0xbfc) = *(undefined4 *)((int)pvVar23 + 0xc);
            *(undefined1 *)(unaff_EBP - 0xbc3) = 4;
            *(undefined1 *)(unaff_EBP - 0xbf4) = 0;
            FUN_00402a40((void *)(unaff_EBP - 0xbe8),(undefined4 *)((int)pvVar23 + 0x10));
            FUN_00428400(*(void **)(unaff_EBP - 0x2b28),(undefined4 *)(unaff_EBP - 0xc08));
          }
          FUN_00407a30((void *)(unaff_EBP - 0x2c38),(int *)(unaff_EBP - 0x2fa0));
          piVar34 = (int *)(*(int *)(unaff_EBP - 0x2b14) + 0x11b4);
          piVar25 = (int *)FUN_00530550(piVar34,(undefined4 *)(unaff_EBP - 0x2cf0));
          bVar5 = FUN_0042c6f0((void *)(unaff_EBP - 0x2c38),piVar25);
        } while (bVar5);
      }
      FUN_004f8520((int *)(*(int *)(unaff_EBP - 0x2b14) + 0x11ac));
      FUN_004f8520(piVar34);
      pvVar42 = *(void **)(unaff_EBP - 0x2b14);
    }
  }
  else if ((-1 < *(int *)((int)pvVar42 + 0x6c)) || (*(char *)((int)pvVar42 + 0x68) == '\0')) {
    if (*(int *)((int)pvVar42 + 0x6c) == 0) {
      bVar6 = *(byte *)((int)pvVar42 + 0x68);
      *(uint *)(unaff_EBP - 0x2b1c) = (uint)bVar6;
      piVar25 = FUN_004cde60((void *)((int)pvVar42 + 0x139c),(int *)(unaff_EBP - 0x2b1c));
      iVar51 = FUN_00409780(*(void **)(unaff_EBP - 0x2b14),(uint)bVar6,-1);
      *piVar25 = iVar51;
      pvVar42 = *(void **)(unaff_EBP - 0x2b14);
    }
    *(int *)((int)pvVar42 + 0x6c) = *(int *)((int)pvVar42 + 0x6c) + *(int *)(unaff_EBP - 0x2b24);
    if (((*(char *)((int)pvVar42 + 0x68) == '6') &&
        (iVar51 = FUN_00407db0(pvVar42,0xffffffff), iVar51 < *(int *)((int)pvVar42 + 0x6c))) &&
       (iVar51 = FUN_004084b0((int)pvVar42), *(int *)((int)pvVar42 + 0x6c) < iVar51)) {
      iVar51 = FUN_00407db0(pvVar42,0xffffffff);
      pvVar42 = *(void **)(unaff_EBP - 0x2b14);
      iVar31 = FUN_00411d60(pvVar42,0xffffffff);
      if (*(int *)((int)pvVar42 + 0x6c) < iVar51 + iVar31) {
        puVar24 = (undefined4 *)FUN_004013d0((void *)((int)pvVar42 + 0x34),2);
        *puVar24 = 0xc2700000;
      }
    }
    goto LAB_0053e357;
  }
  uVar28 = FUN_0040f690((int)pvVar42);
  cVar4 = *(char *)((int)pvVar42 + 0x68);
  if ((char)uVar28 == '\0') {
    if ((((cVar4 != '\x18') && (cVar4 != '\x19')) && (cVar4 != '\x1b')) &&
       (((cVar4 != ';' && (cVar4 != '?')) && ((cVar4 != '@' && (cVar4 != '\b')))))) {
      fVar56 = *(float *)((int)pvVar42 + 0x170) - *(float *)(unaff_EBP - 0x2b88) * 5e-05;
      goto LAB_0053e567;
    }
  }
  else if ((cVar4 != '\x1c') &&
          ((((cVar4 != '_' && (cVar4 != '%')) &&
            ((cVar4 != '.' &&
             ((((cVar4 != '-' && (cVar4 != '\x1f')) && (cVar4 != '!')) &&
              ((cVar4 != '+' && (cVar4 != '\"')))))))) ||
           (iVar51 = FUN_004084b0((int)pvVar42), iVar51 <= *(int *)((int)pvVar42 + 0x6c))))) {
    fVar56 = *(float *)(unaff_EBP - 0x2b88) * 0.0001 + *(float *)((int)pvVar42 + 0x170);
LAB_0053e567:
    *(float *)((int)pvVar42 + 0x170) = fVar56;
  }
  if (*(float *)((int)pvVar42 + 0x170) <= 0.0 && *(float *)((int)pvVar42 + 0x170) != 0.0) {
    *(undefined4 *)((int)pvVar42 + 0x170) = 0;
  }
  if (1.0 < *(float *)((int)pvVar42 + 0x170)) {
    *(undefined4 *)((int)pvVar42 + 0x170) = 0x3f800000;
  }
  cVar4 = FUN_0040f610((int)pvVar42);
  if (cVar4 == '\0') {
    *(float *)((int)pvVar42 + 0x174) =
         *(float *)(unaff_EBP - 0x2b88) / 2000.0 + *(float *)((int)pvVar42 + 0x174);
  }
  else if (0.0 < *(float *)((int)pvVar42 + 0x174)) {
    if ((*(char *)((int)pvVar42 + 0x990) == '\x03') && (*(char *)((int)pvVar42 + 0x991) == '\r')) {
      fVar56 = *(float *)(unaff_EBP - 0x2b88) / 1200.0;
    }
    else {
      fVar56 = *(float *)(unaff_EBP - 0x2b88) / 600.0;
    }
    fVar56 = *(float *)((int)pvVar42 + 0x174) - fVar56;
    *(float *)((int)pvVar42 + 0x174) = fVar56;
    if (fVar56 < 0.0) {
      *(undefined4 *)((int)pvVar42 + 0x174) = 0;
    }
  }
  if (1.0 < *(float *)((int)pvVar42 + 0x174)) {
    *(undefined4 *)((int)pvVar42 + 0x174) = 0x3f800000;
  }
  if (*(char *)((int)pvVar42 + 0x68) != '\0') {
    FUN_00405570((void *)((int)pvVar42 + 0x10),0x10,'\0');
  }
  fVar55 = FUN_004021b0((float *)((int)pvVar42 + 0x40));
  *(float *)(unaff_EBP - 0x2b1c) = (float)fVar55;
  if (0.0 < *(float *)(unaff_EBP - 0x2b1c)) {
    FUN_00405570((void *)((int)pvVar42 + 0x10),0x400,'\0');
  }
  if ((*(char *)((int)pvVar42 + 0x68) == 'S') || (*(char *)((int)pvVar42 + 0x68) == 'T')) {
    fVar55 = FUN_004021b0((float *)((int)pvVar42 + 0x40));
    *(float *)(unaff_EBP - 0x2b1c) = (float)fVar55;
    if (0.0 < *(float *)(unaff_EBP - 0x2b1c)) {
      *(undefined1 *)((int)pvVar42 + 0x68) = 0;
    }
  }
  if ((((*(char *)(*(int *)(unaff_EBP - 0x2b18) + 0xb4) == '\0') &&
       (*(char *)((int)pvVar42 + 0x60) != '\0')) ||
      (pvVar42 == *(void **)(*(int *)(unaff_EBP - 0x2b18) + 0xb8))) &&
     ((*(char *)((int)pvVar42 + 0x68) == 'P' || (*(char *)((int)pvVar42 + 0x68) == 'Q')))) {
    pcVar12 = (char *)((int)pvVar42 + 0x1e8);
    iVar31 = *(int *)((int)pvVar42 + 0x6c) - *(int *)(unaff_EBP - 0x2b24);
    *(int *)(unaff_EBP - 0x2b1c) = *(int *)((int)pvVar42 + 0x6c);
    iVar51 = FUN_00413aa0(pcVar12);
    if ((iVar31 < iVar51) && (*(int *)(unaff_EBP - 0x2b1c) / 200 != iVar31 / 200)) {
      iVar31 = FUN_00413aa0(pcVar12);
      iVar51 = *(int *)(unaff_EBP - 0x2b14);
      cVar4 = *(char *)(iVar51 + 0x60);
      *(float *)(unaff_EBP - 0x2b20) = 200.0 / (float)iVar31;
      if (cVar4 != '\0') {
        *(float *)(unaff_EBP - 0x2b20) = (200.0 / (float)iVar31) * 0.5;
      }
      fVar55 = FUN_00413be0(pcVar12);
      *(float *)(unaff_EBP - 0x2b1c) = (float)fVar55;
      fVar56 = *(float *)(unaff_EBP - 0x2b1c) * *(float *)(unaff_EBP - 0x2b20);
      *(float *)(unaff_EBP - 0x2b40) = fVar56;
      if (0.0 < fVar56) {
        FUN_00422a90(unaff_EBP - 0x508);
        FUN_00402a40((void *)(unaff_EBP - 0x4e8),(undefined4 *)(iVar51 + 0x10));
        uVar22 = *(uint *)(unaff_EBP - 0x2b40);
        pvVar23 = *(void **)(unaff_EBP - 0x2b28);
        *(undefined4 *)(unaff_EBP - 0x500) = *(undefined4 *)(iVar51 + 8);
        *(undefined4 *)(unaff_EBP - 0x4fc) = *(undefined4 *)(iVar51 + 0xc);
        *(undefined4 *)(unaff_EBP - 0x508) = 0xffffffff;
        *(undefined4 *)(unaff_EBP - 0x504) = 0xffffffff;
        *(uint *)(unaff_EBP - 0x4f8) = uVar22 ^ 0x80000000;
        *(undefined1 *)(unaff_EBP - 0x4f4) = 0;
        FUN_00428400(pvVar23,(undefined4 *)(unaff_EBP - 0x508));
        *(float *)(iVar51 + 0x16c) = *(float *)(unaff_EBP - 0x2b40) + *(float *)(iVar51 + 0x16c);
        fVar55 = FUN_0040fda0(iVar51);
        *(float *)(unaff_EBP - 0x2b1c) = (float)fVar55;
        if (*(float *)(unaff_EBP - 0x2b1c) <= *(float *)(iVar51 + 0x16c) &&
            *(float *)(iVar51 + 0x16c) != *(float *)(unaff_EBP - 0x2b1c)) {
          fVar55 = FUN_0040fda0(iVar51);
          *(float *)(iVar51 + 0x16c) = (float)fVar55;
        }
      }
      fVar55 = FUN_00414200(pcVar12);
      *(float *)(unaff_EBP - 0x2b1c) = (float)fVar55;
      fVar55 = FUN_004055a0(2.0);
      *(float *)(unaff_EBP - 0x2b48) = (float)fVar55;
      fVar59 = (*(float *)(unaff_EBP - 0x2b1c) / *(float *)(unaff_EBP - 0x2b48)) *
               *(float *)(unaff_EBP - 0x2b20);
      fVar56 = fVar59 + *(float *)(iVar51 + 0x13c);
      *(float *)(iVar51 + 0x13c) = fVar56;
      if (0.0 <= fVar56) {
        if (fVar56 - fVar59 < 0.0) {
          FUN_004c8530(unaff_EBP - 0x1ec);
          *(undefined4 *)(unaff_EBP - 0x1e0) = 0x2f;
          FUN_00402550((void *)(unaff_EBP - 0x1ec),(longlong *)(iVar51 + 0x10));
          FUN_00428590((void *)(*(int *)(unaff_EBP - 0x2b28) + 8),(undefined4 *)(unaff_EBP - 0x1ec))
          ;
        }
        *(undefined4 *)(iVar51 + 0x13c) = 0;
      }
      if (*(int *)(iVar51 + 0x6c) / 400 !=
          (*(int *)(iVar51 + 0x6c) - *(int *)(unaff_EBP - 0x2b24)) / 400) {
        FUN_004c8530(unaff_EBP - 0x5a8);
        pvVar42 = *(void **)(unaff_EBP - 0x2b14);
        FUN_00402550((void *)(unaff_EBP - 0x5a8),(longlong *)((int)pvVar42 + 0x10));
        iVar51 = *(int *)(unaff_EBP - 0x2b28);
        *(undefined4 *)(unaff_EBP - 0x598) = 0x3f800000;
        *(undefined4 *)(unaff_EBP - 0x59c) = 0x2c;
        FUN_00428590((void *)(iVar51 + 8),(undefined4 *)(unaff_EBP - 0x5a8));
        goto LAB_0053e9a3;
      }
    }
    pvVar42 = *(void **)(unaff_EBP - 0x2b14);
  }
LAB_0053e9a3:
  FUN_004c8280((undefined4 *)(unaff_EBP - 0x2cdc));
  pvVar23 = (void *)((int)pvVar42 + 0x13a4);
  *(undefined1 *)(unaff_EBP - 4) = 0x17;
  FUN_00428070(pvVar23,(undefined4 *)(unaff_EBP - 0x2b7c));
  piVar25 = (int *)FUN_00530550(pvVar23,(undefined4 *)(unaff_EBP - 0x2cf8));
  bVar5 = FUN_0042c6f0((void *)(unaff_EBP - 0x2b7c),piVar25);
  if (bVar5) {
    *(float *)(unaff_EBP - 0x2b1c) = *(float *)(unaff_EBP - 0x2b88) * 0.00025;
    do {
      puVar26 = (uint *)FUN_00402bc0((int *)(unaff_EBP - 0x2b7c));
      pvVar42 = *(void **)(unaff_EBP - 0x2b18);
      fVar56 = (float)puVar26[2] - *(float *)(unaff_EBP - 0x2b1c);
      *(float *)(unaff_EBP - 0x2b48) = fVar56;
      puVar26[2] = (uint)fVar56;
      uVar22 = FUN_00405420(pvVar42,puVar26);
      if (uVar22 != 0) {
        if ((0.0 < *(float *)(uVar22 + 0x16c)) &&
           (*(float *)(unaff_EBP - 0x2b48) <= 0.01 && *(float *)(unaff_EBP - 0x2b48) != 0.01)) {
          puVar26[2] = 0x3c23d70a;
        }
        if (((float)puVar26[2] <= 0.0) ||
           ((*puVar26 != 0 || puVar26[1] != 0 && (*(float *)(uVar22 + 0x16c) <= 0.0)))) {
          FUN_004d6620((void *)(unaff_EBP - 0x2cdc),(undefined4 *)(unaff_EBP - 0x2b7c));
        }
      }
      FUN_00407a30((void *)(unaff_EBP - 0x2b7c),(int *)(unaff_EBP - 0x2fb0));
      piVar25 = (int *)FUN_00530550(pvVar23,(undefined4 *)(unaff_EBP - 0x2cf8));
      bVar5 = FUN_0042c6f0((void *)(unaff_EBP - 0x2b7c),piVar25);
    } while (bVar5);
    pvVar42 = *(void **)(unaff_EBP - 0x2b14);
  }
  FUN_00428070((void *)(unaff_EBP - 0x2cdc),(undefined4 *)(unaff_EBP - 0x2c4c));
  piVar25 = (int *)FUN_00530550((void *)(unaff_EBP - 0x2cdc),(undefined4 *)(unaff_EBP - 0x2d00));
  bVar5 = FUN_0042c6f0((void *)(unaff_EBP - 0x2c4c),piVar25);
  if (bVar5) {
    do {
      puVar24 = (undefined4 *)FUN_0052eb90((int *)(unaff_EBP - 0x2c4c));
      FUN_0040a1d0(pvVar23,(undefined4 *)(unaff_EBP - 0x2fb8),(int *)*puVar24);
      FUN_0052ebf0((void *)(unaff_EBP - 0x2c4c),(undefined4 *)(unaff_EBP - 0x2b30));
      piVar25 = (int *)FUN_00530550((void *)(unaff_EBP - 0x2cdc),(undefined4 *)(unaff_EBP - 0x2d00))
      ;
      bVar5 = FUN_0042c6f0((void *)(unaff_EBP - 0x2c4c),piVar25);
    } while (bVar5);
  }
  FUN_004c8280((undefined4 *)(unaff_EBP - 0x2ccc));
  pvVar23 = (void *)((int)pvVar42 + 0x13ac);
  *(undefined1 *)(unaff_EBP - 4) = 0x18;
  FUN_00428070(pvVar23,(undefined4 *)(unaff_EBP - 0x2b80));
  piVar25 = (int *)FUN_00530550(pvVar23,(undefined4 *)(unaff_EBP - 0x2ddc));
  bVar5 = FUN_0042c6f0((void *)(unaff_EBP - 0x2b80),piVar25);
  if (bVar5) {
    *(undefined4 *)(unaff_EBP - 0x2d08) = 0;
    do {
      puVar26 = (uint *)FUN_00402bc0((int *)(unaff_EBP - 0x2b80));
      FUN_0052e710((float *)(puVar26 + 2),(float *)(unaff_EBP - 0x2d08),*(int *)(unaff_EBP - 0x2b24)
                   ,0.001);
      uVar22 = FUN_00405420(*(void **)(unaff_EBP - 0x2b18),puVar26);
      if ((uVar22 == 0) || (*(float *)(uVar22 + 0x16c) <= 0.0)) {
        FUN_004d6620((void *)(unaff_EBP - 0x2ccc),(undefined4 *)(unaff_EBP - 0x2b80));
      }
      FUN_00407a30((void *)(unaff_EBP - 0x2b80),(int *)(unaff_EBP - 0x2fc0));
      piVar25 = (int *)FUN_00530550(pvVar23,(undefined4 *)(unaff_EBP - 0x2ddc));
      bVar5 = FUN_0042c6f0((void *)(unaff_EBP - 0x2b80),piVar25);
    } while (bVar5);
    pvVar42 = *(void **)(unaff_EBP - 0x2b14);
  }
  FUN_00428070((void *)(unaff_EBP - 0x2ccc),(undefined4 *)(unaff_EBP - 0x2c84));
  piVar25 = (int *)FUN_00530550((void *)(unaff_EBP - 0x2ccc),(undefined4 *)(unaff_EBP - 0x2de4));
  bVar5 = FUN_0042c6f0((void *)(unaff_EBP - 0x2c84),piVar25);
  if (bVar5) {
    do {
      puVar24 = (undefined4 *)FUN_0052eb90((int *)(unaff_EBP - 0x2c84));
      FUN_0040a1d0(pvVar23,(undefined4 *)(unaff_EBP - 0x2fc8),(int *)*puVar24);
      FUN_0052ebf0((void *)(unaff_EBP - 0x2c84),(undefined4 *)(unaff_EBP - 0x2b30));
      piVar25 = (int *)FUN_00530550((void *)(unaff_EBP - 0x2ccc),(undefined4 *)(unaff_EBP - 0x2de4))
      ;
      bVar5 = FUN_0042c6f0((void *)(unaff_EBP - 0x2c84),piVar25);
    } while (bVar5);
  }
  pvVar23 = *(void **)(unaff_EBP - 0x2b18);
  if ((((*(char *)((int)pvVar23 + 0xb4) == '\0') && (*(char *)((int)pvVar42 + 0x60) == '\x01')) &&
      (0.0 < *(float *)((int)pvVar42 + 0x16c))) &&
     (bVar5 = FUN_00530540((int)pvVar42 + 0x13a4), bVar5)) {
    fVar55 = FUN_0040fda0((int)pvVar42);
    *(float *)((int)pvVar42 + 0x16c) = (float)fVar55;
  }
  fVar56 = *(float *)(unaff_EBP - 0x2ba0);
  *(undefined1 *)(unaff_EBP - 0x2b29) = 1;
  FUN_004e1520((float *)(unaff_EBP - 0x1c),fVar56,(float *)((int)pvVar42 + 0x40));
  if (0 < *(int *)((int)pvVar42 + 300)) {
    puVar24 = FUN_00401080((void *)(unaff_EBP - 0x1418),0,0,0);
    FUN_00401060((void *)(unaff_EBP - 0x1c),puVar24);
  }
  if ((((*(byte *)((int)pvVar42 + 0x124) & 1) == 0) &&
      ((*(byte *)((int)pvVar42 + 0x5c) & 0x10) != 0)) &&
     (pfVar33 = (float *)FUN_004013d0((void *)(unaff_EBP - 0x1c),2), 0.0 < *pfVar33)) {
    *pfVar33 = 0.0;
  }
  puVar24 = (undefined4 *)FUN_0041cba0(unaff_EBP - 0x1c);
  *(undefined4 **)(unaff_EBP - 0x2b30) = puVar24;
  FUN_004cde20((void *)(unaff_EBP - 0xa4),puVar24);
  *(undefined4 *)(unaff_EBP - 0x2b78) = 0;
  fVar55 = FUN_00402180((float *)(unaff_EBP - 0xa4));
  *(float *)(unaff_EBP - 0x2b1c) = (float)fVar55;
  if (0.01 < *(float *)(unaff_EBP - 0x2b1c)) {
    puVar24 = (undefined4 *)FUN_0041cba0((int)pvVar42 + 0x34);
    FUN_004cde20((void *)(unaff_EBP - 0x94),puVar24);
    fVar55 = FUN_00402180((float *)(unaff_EBP - 0x94));
    *(float *)(unaff_EBP - 0x2b1c) = (float)fVar55;
    if (0.01 < *(float *)(unaff_EBP - 0x2b1c)) {
      FUN_00401f50((float *)(unaff_EBP - 0xa4));
      FUN_00401f50((float *)(unaff_EBP - 0x94));
      pfVar33 = (float *)FUN_004013d0((void *)(unaff_EBP - 0x94),1);
      pfVar36 = (float *)FUN_004013d0((void *)(unaff_EBP - 0xa4),0);
      *(float *)(unaff_EBP - 0x2b1c) = *pfVar33 * *pfVar36;
      pfVar33 = (float *)FUN_004013d0((void *)(unaff_EBP - 0x94),0);
      pfVar36 = (float *)FUN_004013d0((void *)(unaff_EBP - 0xa4),1);
      fVar59 = *(float *)(unaff_EBP - 0x2b1c) - *pfVar33 * *pfVar36;
      fVar56 = -1.0;
      if ((fVar59 < -1.0) || (fVar56 = 1.0, 1.0 < fVar59)) {
        fVar59 = fVar56;
      }
      fVar55 = FUN_00402480(fVar59);
      *(float *)(unaff_EBP - 0x2b1c) = (float)fVar55;
      pvVar42 = *(void **)(unaff_EBP - 0x2b14);
      *(float *)(unaff_EBP - 0x2b78) = (*(float *)(unaff_EBP - 0x2b1c) / 3.1415927) * 180.0 * 0.5;
    }
  }
  *(void **)(unaff_EBP - 0x2bb0) = (void *)((int)pvVar42 + 0x80);
  pfVar33 = (float *)FUN_004013d0((void *)((int)pvVar42 + 0x80),0);
  fVar56 = *pfVar33;
  *(float **)(unaff_EBP - 0x2b4c) = pfVar33;
  if (2.0 < fVar56) {
    *(float *)(unaff_EBP - 0x2b78) = (2.0 / fVar56) * *(float *)(unaff_EBP - 0x2b78);
  }
  cVar4 = FUN_0040f6e0((int)pvVar42);
  if (cVar4 == '\0') {
    *(void **)(unaff_EBP - 0x2b64) = (void *)((int)pvVar42 + 0x28);
    pfVar33 = (float *)FUN_004013d0((void *)((int)pvVar42 + 0x28),1);
    fVar56 = 0.005;
  }
  else {
    fVar56 = *(float *)(unaff_EBP - 0x2b78) * 40.0;
    *(float *)(unaff_EBP - 0x2b78) = fVar56;
    if (fVar56 <= 90.0) {
      if (fVar56 < -90.0) {
        *(undefined4 *)(unaff_EBP - 0x2b78) = 0xc2b40000;
      }
    }
    else {
      *(undefined4 *)(unaff_EBP - 0x2b78) = 0x42b40000;
    }
    *(void **)(unaff_EBP - 0x2b64) = (void *)((int)pvVar42 + 0x28);
    pfVar33 = (float *)FUN_004013d0((void *)((int)pvVar42 + 0x28),1);
    fVar56 = 0.001;
  }
  iVar51 = *(int *)(unaff_EBP - 0x2b24);
  *(float **)(unaff_EBP - 0x2b40) = pfVar33;
  FUN_0052e710(pfVar33,(float *)(unaff_EBP - 0x2b78),iVar51,fVar56);
  *(int *)(unaff_EBP - 0x2b3c) = (int)pvVar42 + 0x34;
  puVar24 = (undefined4 *)FUN_0041cba0((int)pvVar42 + 0x34);
  *(undefined4 **)(unaff_EBP - 0x2b5c) = puVar24;
  FUN_004cde20((void *)(unaff_EBP - 0xde8),puVar24);
  *(undefined4 *)(unaff_EBP - 0x2b60) = 0x40c00000;
  iVar51 = FUN_0040f650((int)pvVar42);
  if (((char)iVar51 != '\0') || ((*(ushort *)((int)pvVar42 + 0x7e) & 0x200) != 0)) {
    *(undefined4 *)(unaff_EBP - 0x2b60) = 0x41000000;
  }
  if (*(char *)((int)pvVar42 + 0x60) == '\x05') {
    *(undefined4 *)(unaff_EBP - 0x2b60) = 0x41400000;
  }
  if (*(char *)((int)pvVar42 + 0x68) == 'k') {
    if ((*(byte *)((int)pvVar42 + 0x5c) & 2) != 0) {
      fVar55 = FUN_004095d0(*(int *)((int)pvVar42 + 0x114c));
      *(float *)(unaff_EBP - 0x2b1c) = (float)fVar55;
      fVar56 = *(float *)(unaff_EBP - 0x2b1c);
LAB_0053f086:
      *(float *)(unaff_EBP - 0x2b60) = fVar56 * *(float *)(unaff_EBP - 0x2b60);
    }
  }
  else if ((*(byte *)((int)pvVar42 + 0x5c) & 2) != 0) {
    fVar55 = FUN_004120f0(*(int *)((int)pvVar42 + 0x1148));
    *(float *)(unaff_EBP - 0x2b1c) = (float)fVar55;
    fVar56 = *(float *)(unaff_EBP - 0x2b1c);
    goto LAB_0053f086;
  }
  if (pvVar42 == *(void **)((int)pvVar23 + 0xb8)) {
    if (((*(char *)((int)pvVar42 + 0x68) == 'k') && ((*(uint *)((int)pvVar42 + 0x5c) & 1) != 0)) &&
       ((*(uint *)((int)pvVar42 + 0x5c) & 2) == 0)) {
      *(undefined1 *)((int)pvVar42 + 0x68) = 0;
    }
    if ((pvVar42 == *(void **)((int)pvVar23 + 0xb8)) && (*(char *)((int)pvVar42 + 0x68) == 'j')) {
      puVar26 = (uint *)((int)pvVar42 + 0x11c8);
      uVar22 = FUN_00405420(pvVar23,puVar26);
      if ((uVar22 == 0) ||
         (uVar22 = FUN_00405420(pvVar23,puVar26), *(float *)(uVar22 + 0x16c) < 0.0)) {
LAB_0053f18c:
        pvVar42 = *(void **)(unaff_EBP - 0x2b14);
        bVar5 = pvVar42 == *(void **)((int)pvVar23 + 0xb8);
      }
      else {
        uVar22 = FUN_00405420(pvVar23,puVar26);
        uVar22 = FUN_0040f7f0(*(int *)(uVar22 + 100));
        if ((char)uVar22 == '\0') goto LAB_0053f18c;
        fVar55 = FUN_004116f0(*(int *)(*(int *)(unaff_EBP - 0x2b14) + 0x113c));
        *(float *)(unaff_EBP - 0x2b1c) = (float)fVar55;
        if (*(float *)(unaff_EBP - 0x2b1c) == 0.0) {
          *(undefined1 *)(*(int *)(unaff_EBP - 0x2b14) + 0x68) = 0;
          uVar22 = FUN_00405420(pvVar23,puVar26);
          pvVar42 = *(void **)(unaff_EBP - 0x2b14);
          bVar5 = uVar22 == 0;
        }
        else {
          *(float *)(unaff_EBP - 0x2b60) =
               *(float *)(unaff_EBP - 0x2b1c) * *(float *)(unaff_EBP - 0x2b60);
          uVar22 = FUN_00405420(pvVar23,puVar26);
          pvVar42 = *(void **)(unaff_EBP - 0x2b14);
          bVar5 = uVar22 == 0;
        }
      }
      if (bVar5) {
        *(undefined1 *)((int)pvVar42 + 0x68) = 0;
      }
      fVar55 = FUN_004021b0((float *)(*(int *)((int)pvVar23 + 0xb8) + 0x40));
      *(float *)(unaff_EBP - 0x2b1c) = (float)fVar55;
      if (0.0 < *(float *)(unaff_EBP - 0x2b1c)) {
        *(float *)((int)pvVar42 + 0x1198) =
             *(float *)((int)pvVar42 + 0x1198) - *(float *)(unaff_EBP - 0x2ba0) * 0.002;
      }
      if (*(float *)((int)pvVar42 + 0x1198) <= 0.0) {
        *(undefined4 *)((int)pvVar42 + 0x1198) = 0;
        *(undefined1 *)((int)pvVar42 + 0x68) = 0;
      }
      if ((*(byte *)((int)pvVar42 + 0x124) & 1) != 0) {
        *(undefined1 *)((int)pvVar42 + 0x68) = 0;
      }
    }
  }
  if ((pvVar42 == *(void **)((int)pvVar23 + 0xb8)) && ((*(byte *)((int)pvVar23 + 0x84) & 1) != 0)) {
    *(undefined4 *)(unaff_EBP - 0x2b60) = 0x41a00000;
  }
  if ((*(byte *)((int)pvVar42 + 0x124) & 0x10) != 0) {
    fVar55 = FUN_0040a7f0(*(int *)((int)pvVar42 + 0x1144));
    *(float *)(unaff_EBP - 0x2b1c) = (float)fVar55;
    if (*(float *)(unaff_EBP - 0x2b1c) <= 0.0) {
      *(ushort *)((int)pvVar42 + 0x124) = *(ushort *)((int)pvVar42 + 0x124) & 0xffef;
    }
    else if ((*(byte *)((int)pvVar42 + 0x5c) & 1) == 0) {
      *(float *)(unaff_EBP - 0x2b60) =
           *(float *)(unaff_EBP - 0x2b1c) * *(float *)(unaff_EBP - 0x2b60);
    }
  }
  if ((*(byte *)((int)pvVar42 + 0x124) & 1) == 0) {
LAB_0053f36a:
    fVar56 = *(float *)(unaff_EBP - 0x2b88);
  }
  else {
    fVar55 = FUN_004021b0((float *)((int)pvVar42 + 0x40));
    *(float *)(unaff_EBP - 0x2b1c) = (float)fVar55;
    if (*(float *)(unaff_EBP - 0x2b1c) <= 0.0) goto LAB_0053f36a;
    fVar55 = FUN_00409740(*(int *)((int)pvVar42 + 0x1140));
    *(float *)(unaff_EBP - 0x2b1c) = (float)fVar55;
    if (*(float *)(unaff_EBP - 0x2b1c) <= 0.0) {
      *(ushort *)((int)pvVar42 + 0x124) = *(ushort *)((int)pvVar42 + 0x124) & 0xfffe;
      goto LAB_0053f36a;
    }
    if (((*(byte *)((int)pvVar42 + 0x124) & 0x10) != 0) ||
       ((*(uint *)((int)pvVar42 + 0x5c) & 4) == 0)) goto LAB_0053f36a;
    fVar56 = *(float *)(unaff_EBP - 0x2b88);
    if ((*(uint *)((int)pvVar42 + 0x5c) & 1) == 0) {
      fVar59 = *(float *)((int)pvVar42 + 0x1194) -
               (1.0 - *(float *)(unaff_EBP - 0x2b1c)) * 0.0005 * fVar56;
      *(float *)((int)pvVar42 + 0x1194) = fVar59;
      if (fVar59 < 0.0) {
        *(undefined4 *)((int)pvVar42 + 0x1194) = 0;
      }
      if (*(float *)((int)pvVar42 + 0x1194) <= 0.01 && *(float *)((int)pvVar42 + 0x1194) != 0.01) {
        *(ushort *)((int)pvVar42 + 0x124) = *(ushort *)((int)pvVar42 + 0x124) & 0xfffe;
      }
    }
  }
  if (*(char *)((int)pvVar42 + 0x68) == 'O') {
    fVar55 = FUN_00409de0((int)pvVar42,0x4f,-1);
    *(float *)(unaff_EBP - 0x2b1c) = (float)fVar55;
    *(float *)(unaff_EBP - 0x2b60) =
         (*(float *)(unaff_EBP - 0x2b1c) * 0.4 + 0.5) * *(float *)(unaff_EBP - 0x2b60);
    iVar51 = FUN_0041cae0((int)pvVar23);
    fVar55 = FUN_004055a0(((float)iVar51 * 2.0) / 8.64e+07 - 1.0);
    *(float *)(unaff_EBP - 0x2b1c) = (float)fVar55;
    fVar55 = FUN_004055a0(1.0 - *(float *)(unaff_EBP - 0x2b1c));
    *(float *)(unaff_EBP - 0x2b48) = (float)fVar55;
    puVar26 = (uint *)((int)pvVar42 + 0x10);
    *(uint **)(unaff_EBP - 0x2b20) = puVar26;
    fVar55 = FUN_004d5c80(pvVar23,puVar26);
    *(float *)(unaff_EBP - 0x2b1c) = (float)fVar55;
    *(float *)(unaff_EBP - 0x2b54) = *(float *)(unaff_EBP - 0x2b1c) * *(float *)(unaff_EBP - 0x2b48)
    ;
    FUN_00428070((void *)(unaff_EBP - 0x2bf0),(undefined4 *)(unaff_EBP - 0x2c7c));
    piVar25 = (int *)FUN_00530550((void *)(unaff_EBP - 0x2bf0),(undefined4 *)(unaff_EBP - 0x2e04));
    bVar5 = FUN_0042c6f0((void *)(unaff_EBP - 0x2c7c),piVar25);
    if (bVar5) {
      do {
        piVar25 = (int *)FUN_00402bc0((int *)(unaff_EBP - 0x2c7c));
        iVar51 = *piVar25;
        FUN_00428070((void *)(iVar51 + 4),(undefined4 *)(unaff_EBP - 0x2c34));
        piVar34 = (int *)FUN_00530550((void *)(iVar51 + 4),(undefined4 *)(unaff_EBP - 0x2dec));
        bVar5 = FUN_0042c6f0((void *)(unaff_EBP - 0x2c34),piVar34);
        if (bVar5) {
          do {
            iVar51 = FUN_0052eb90((int *)(unaff_EBP - 0x2c34));
            if ((*(byte *)(iVar51 + 0x38) & 1) != 0) {
              puVar26 = FUN_00402c50((void *)(iVar51 + 8),(uint *)(unaff_EBP - 0x21b4),
                                     *(uint **)(unaff_EBP - 0x2b20));
              pfVar33 = FUN_00402550((void *)(unaff_EBP - 0x18ec),(longlong *)puVar26);
              fVar55 = FUN_004021b0(pfVar33);
              *(float *)(unaff_EBP - 0x2b1c) = (float)fVar55;
              if (*(float *)(unaff_EBP - 0x2b1c) < 256.0) {
                fVar56 = 1.0 - *(float *)(unaff_EBP - 0x2b1c) * 0.00390625;
                *(float *)(unaff_EBP - 0x2b54) =
                     fVar56 * fVar56 * 0.5 + *(float *)(unaff_EBP - 0x2b54);
              }
            }
            FUN_0052ebf0((void *)(unaff_EBP - 0x2c34),(undefined4 *)(unaff_EBP - 0x2b74));
            piVar34 = (int *)FUN_00530550((void *)(*piVar25 + 4),(undefined4 *)(unaff_EBP - 0x2dec))
            ;
            bVar5 = FUN_0042c6f0((void *)(unaff_EBP - 0x2c34),piVar34);
          } while (bVar5);
        }
        iVar51 = *piVar25;
        FUN_00530550((void *)(iVar51 + 0xc),(undefined4 *)(unaff_EBP - 0x2c3c));
        piVar34 = (int *)FUN_004d3de0((void *)(iVar51 + 0xc),(undefined4 *)(unaff_EBP - 0x2df4));
        bVar5 = FUN_0042c6f0((void *)(unaff_EBP - 0x2c3c),piVar34);
        if (bVar5) {
          do {
            piVar34 = (int *)FUN_004ce1f0((undefined4 *)(unaff_EBP - 0x2c3c));
            if (*piVar34 == 0x32) {
              puVar26 = FUN_00402c50(piVar34 + 2,(uint *)(unaff_EBP - 0x2454),
                                     *(uint **)(unaff_EBP - 0x2b20));
              pfVar33 = FUN_00402550((void *)(unaff_EBP - 0x1430),(longlong *)puVar26);
              fVar55 = FUN_004021b0(pfVar33);
              *(float *)(unaff_EBP - 0x2b1c) = (float)fVar55;
              if (*(float *)(unaff_EBP - 0x2b1c) < 256.0) {
                fVar56 = 1.0 - *(float *)(unaff_EBP - 0x2b1c) * 0.00390625;
                *(float *)(unaff_EBP - 0x2b54) =
                     fVar56 * fVar56 * 0.5 + *(float *)(unaff_EBP - 0x2b54);
              }
            }
            FUN_004ce200((void *)(unaff_EBP - 0x2c3c),(int *)(unaff_EBP - 0x2b74));
            piVar34 = (int *)FUN_004d3de0((void *)(*piVar25 + 0xc),
                                          (undefined4 *)(unaff_EBP - 0x2df4));
            bVar5 = FUN_0042c6f0((void *)(unaff_EBP - 0x2c3c),piVar34);
          } while (bVar5);
        }
        iVar51 = *piVar25;
        FUN_00530550((void *)(iVar51 + 0x30),(undefined4 *)(unaff_EBP - 0x2c74));
        piVar34 = (int *)FUN_004d3de0((void *)(iVar51 + 0x30),(undefined4 *)(unaff_EBP - 0x2dfc));
        bVar5 = FUN_0042c6f0((void *)(unaff_EBP - 0x2c74),piVar34);
        if (bVar5) {
          do {
            pcVar12 = (char *)FUN_004ce1f0((undefined4 *)(unaff_EBP - 0x2c74));
            if (*pcVar12 == '\x12') {
              puVar26 = FUN_00402c50(pcVar12 + 0x118,(uint *)(unaff_EBP - 0x21e4),
                                     *(uint **)(unaff_EBP - 0x2b20));
              pfVar33 = FUN_00402550((void *)(unaff_EBP - 0x1718),(longlong *)puVar26);
              fVar55 = FUN_004021b0(pfVar33);
              *(float *)(unaff_EBP - 0x2b1c) = (float)fVar55;
              if (*(float *)(unaff_EBP - 0x2b1c) < 256.0) {
                fVar56 = 1.0 - *(float *)(unaff_EBP - 0x2b1c) * 0.00390625;
                *(float *)(unaff_EBP - 0x2b54) =
                     fVar56 * fVar56 * 0.5 + *(float *)(unaff_EBP - 0x2b54);
              }
            }
            FUN_0041e300((void *)(unaff_EBP - 0x2c74),(int *)(unaff_EBP - 0x2b74));
            piVar34 = (int *)FUN_004d3de0((void *)(*piVar25 + 0x30),
                                          (undefined4 *)(unaff_EBP - 0x2dfc));
            bVar5 = FUN_0042c6f0((void *)(unaff_EBP - 0x2c74),piVar34);
          } while (bVar5);
        }
        FUN_00407a30((void *)(unaff_EBP - 0x2c7c),(int *)(unaff_EBP - 0x2fd0));
        piVar25 = (int *)FUN_00530550((void *)(unaff_EBP - 0x2bf0),
                                      (undefined4 *)(unaff_EBP - 0x2e04));
        bVar5 = FUN_0042c6f0((void *)(unaff_EBP - 0x2c7c),piVar25);
      } while (bVar5);
      puVar26 = *(uint **)(unaff_EBP - 0x2b20);
      pvVar23 = *(void **)(unaff_EBP - 0x2b18);
    }
    if (1.0 < *(float *)(unaff_EBP - 0x2b54)) {
      *(undefined4 *)(unaff_EBP - 0x2b54) = 0x3f800000;
    }
    FUN_00428070((void *)((int)pvVar23 + 4),(undefined4 *)(unaff_EBP - 0x2c40));
    piVar25 = (int *)FUN_00530550((void *)((int)pvVar23 + 4),(undefined4 *)(unaff_EBP - 0x2e0c));
    bVar5 = FUN_0042c6f0((void *)(unaff_EBP - 0x2c40),piVar25);
    if (bVar5) {
      pvVar23 = *(void **)(unaff_EBP - 0x2b6c);
      do {
        iVar51 = FUN_00402bc0((int *)(unaff_EBP - 0x2c40));
        iVar51 = *(int *)(iVar51 + 8);
        if ((iVar51 != 0) && ((*(ushort *)(iVar51 + 0x124) & 0x200) != 0)) {
          puVar27 = FUN_00402c50((void *)(iVar51 + 0x10),(uint *)(unaff_EBP - 0x25a4),puVar26);
          pfVar33 = FUN_00402550((void *)(unaff_EBP - 0x1448),(longlong *)puVar27);
          fVar55 = FUN_004021b0(pfVar33);
          *(float *)(unaff_EBP - 0x2b1c) = (float)fVar55;
          if (*(float *)(unaff_EBP - 0x2b1c) < 100.0) {
            fVar56 = 1.0 - *(float *)(unaff_EBP - 0x2b1c) / 100.0;
            *(float *)(unaff_EBP - 0x2b54) = fVar56 * fVar56 + *(float *)(unaff_EBP - 0x2b54);
          }
        }
        FUN_00407a30((void *)(unaff_EBP - 0x2c40),(int *)(unaff_EBP - 0x2fd8));
        piVar25 = (int *)FUN_00530550(pvVar23,(undefined4 *)(unaff_EBP - 0x2e0c));
        bVar5 = FUN_0042c6f0((void *)(unaff_EBP - 0x2c40),piVar25);
      } while (bVar5);
      pvVar23 = *(void **)(unaff_EBP - 0x2b18);
    }
    pvVar42 = *(void **)(unaff_EBP - 0x2b14);
    fVar55 = FUN_00409de0((int)pvVar42,0x4f,-1);
    *(float *)(unaff_EBP - 0x2b1c) = (float)fVar55;
    *(float *)(unaff_EBP - 0x2b90) =
         1.0 - (0.9 - *(float *)(unaff_EBP - 0x2b1c) * 0.5) * *(float *)(unaff_EBP - 0x2b54);
    fVar55 = FUN_00409de0((int)pvVar42,0x4f,-1);
    *(float *)(unaff_EBP - 0x2b1c) = (float)fVar55;
    *(float *)(unaff_EBP - 0x2b1c) = 0.5 - *(float *)(unaff_EBP - 0x2b1c) * 0.5;
    fVar55 = FUN_00401d80((float *)((int)pvVar42 + 0x34));
    *(float *)(unaff_EBP - 0x2b48) = (float)fVar55;
    fVar56 = (*(float *)(unaff_EBP - 0x2b90) -
             *(float *)(unaff_EBP - 0x2b1c) * *(float *)(unaff_EBP - 0x2b48)) *
             *(float *)(unaff_EBP - 0x2b88) * 0.0005 + *(float *)((int)pvVar42 + 0x1190);
    *(float *)((int)pvVar42 + 0x1190) = fVar56;
    if (fVar56 < 0.0) {
      *(undefined4 *)((int)pvVar42 + 0x1190) = 0;
    }
    fVar56 = *(float *)((int)pvVar42 + 0x1190);
LAB_0053fa21:
    if (1.0 < fVar56) {
      *(undefined4 *)((int)pvVar42 + 0x1190) = 0x3f800000;
    }
  }
  else {
    if ((*(ushort *)((int)pvVar42 + 0x124) & 0x400) != 0) {
      fVar55 = FUN_00409de0((int)pvVar42,99,-1);
      *(float *)(unaff_EBP - 0x2b1c) = (float)fVar55;
      fVar56 = (*(float *)(unaff_EBP - 0x2b1c) * 0.0005 + 1e-05) * *(float *)(unaff_EBP - 0x2b88) +
               *(float *)((int)pvVar42 + 0x1190);
      *(float *)((int)pvVar42 + 0x1190) = fVar56;
      goto LAB_0053fa21;
    }
    fVar56 = *(float *)((int)pvVar42 + 0x1190) - fVar56 * 0.0005;
    *(float *)((int)pvVar42 + 0x1190) = fVar56;
    if (fVar56 < 0.0) {
      *(undefined4 *)((int)pvVar42 + 0x1190) = 0;
    }
  }
  puVar24 = FUN_0040ef90(pvVar42,3);
  if (puVar24 != (undefined4 *)0x0) {
    *(undefined4 *)((int)pvVar42 + 0x1190) = 0x3f800000;
  }
  fVar56 = *(float *)(unaff_EBP - 0x2b88);
  fVar59 = fVar56 * 0.00025 * *(float *)((int)pvVar42 + 0x1190) + *(float *)((int)pvVar42 + 0x170);
  *(float *)((int)pvVar42 + 0x170) = fVar59;
  if (1.0 < fVar59) {
    *(undefined4 *)((int)pvVar42 + 0x170) = 0x3f800000;
  }
  uVar2 = *(ushort *)((int)pvVar42 + 0x124);
  if (((uVar2 & 0x10) == 0) || ((*(byte *)((int)pvVar42 + 0x5c) & 1) != 0)) {
    if (((uVar2 & 1) == 0) ||
       ((((uVar2 & 0x10) != 0 || ((*(uint *)((int)pvVar42 + 0x5c) & 4) == 0)) ||
        ((*(uint *)((int)pvVar42 + 0x5c) & 1) != 0)))) {
      fVar56 = fVar56 * 0.0001 + *(float *)((int)pvVar42 + 0x1194);
      goto LAB_0053fb19;
    }
  }
  else if ((uVar2 & 0x40) != 0) {
    fVar56 = *(float *)((int)pvVar42 + 0x1194) - fVar56 * 0.0002;
LAB_0053fb19:
    *(float *)((int)pvVar42 + 0x1194) = fVar56;
  }
  if (*(float *)((int)pvVar42 + 0x1194) <= 0.0 && *(float *)((int)pvVar42 + 0x1194) != 0.0) {
    *(undefined4 *)((int)pvVar42 + 0x1194) = 0;
  }
  if (1.0 < *(float *)((int)pvVar42 + 0x1194)) {
    *(undefined4 *)((int)pvVar42 + 0x1194) = 0x3f800000;
  }
  uVar2 = *(ushort *)((int)pvVar42 + 0x124);
  if ((((uVar2 & 0x40) != 0) && (((uVar2 & 1) == 0 || ((*(byte *)((int)pvVar42 + 0x5c) & 4) == 0))))
     && (((uVar2 & 0x10) == 0 || ((*(byte *)((int)pvVar42 + 0x5c) & 1) != 0)))) {
    *(float *)(unaff_EBP - 0x2b60) = *(float *)(unaff_EBP - 0x2b60) * 2.0;
  }
  puVar24 = FUN_0040ef90(pvVar42,0xc);
  if (puVar24 != (undefined4 *)0x0) {
    fVar55 = FUN_00409de0((int)pvVar42,100,-1);
    *(float *)(unaff_EBP - 0x2b1c) = (float)fVar55;
    *(float *)(unaff_EBP - 0x2b60) =
         (*(float *)(unaff_EBP - 0x2b1c) + 1.0) * *(float *)(unaff_EBP - 0x2b60);
  }
  if (*(char *)((int)pvVar42 + 0x68) == '0') {
LAB_0053fc10:
    *(undefined4 *)(unaff_EBP - 0x2b60) = 0x42200000;
  }
  else {
    if (*(char *)((int)pvVar42 + 0x68) == '6') {
      iVar51 = FUN_00407db0(pvVar42,0xffffffff);
      iVar31 = FUN_00411d60(*(void **)(unaff_EBP - 0x2b14),0xffffffff);
      pvVar42 = *(void **)(unaff_EBP - 0x2b14);
      if (*(int *)((int)pvVar42 + 0x6c) < iVar51 + iVar31) goto LAB_0053fc10;
    }
    if (((*(char *)((int)pvVar42 + 0x68) == '2') || (*(char *)((int)pvVar42 + 0x68) == '`')) &&
       (*(int *)((int)pvVar42 + 0x6c) < 500)) goto LAB_0053fc10;
  }
  cVar4 = *(char *)((int)pvVar42 + 0x68);
  *(undefined1 *)(unaff_EBP - 0x2c90) = 0;
  if ((cVar4 == '0') ||
     ((((((((cVar4 == ':' || (cVar4 == 'A')) || (cVar4 == 'B')) ||
          ((cVar4 == 'C' || (cVar4 == '\f')))) || (cVar4 == '\x10')) ||
        ((cVar4 == '\x03' || (cVar4 == '>')))) ||
       (((((cVar4 == '\v' || (((cVar4 == '\x04' || (cVar4 == '\x01')) || (cVar4 == '\t')))) ||
          ((cVar4 == '\x02' || (cVar4 == '\x06')))) || (cVar4 == '\a')) ||
        (((((cVar4 == '\x0e' || (cVar4 == '\r')) ||
           ((cVar4 == '\x0f' || (((cVar4 == '\x14' || (cVar4 == '\x13')) || (cVar4 == '\x12'))))))
          || ((cVar4 == '\x11' || (cVar4 == '\x05')))) || (cVar4 == '\n')))))) &&
      (*(int *)((int)pvVar42 + 0x6c) < 200)))) {
    bVar5 = true;
  }
  else {
    bVar5 = false;
  }
  if (((pvVar42 == *(void **)((int)pvVar23 + 0xb8)) || (*(char *)((int)pvVar23 + 0xb4) == '\0')) &&
     (bVar5)) {
    FUN_00428070(*(void **)(unaff_EBP - 0x2b6c),(undefined4 *)(unaff_EBP - 0x2c88));
    piVar25 = (int *)FUN_00530550(*(void **)(unaff_EBP - 0x2b6c),(undefined4 *)(unaff_EBP - 0x2e14))
    ;
    bVar5 = FUN_0042c6f0((void *)(unaff_EBP - 0x2c88),piVar25);
    if (bVar5) {
      do {
        iVar51 = FUN_00402bc0((int *)(unaff_EBP - 0x2c88));
        piVar25 = (int *)(iVar51 + 8);
        pvVar23 = (void *)*piVar25;
        if ((((pvVar23 != (void *)0x0) && (pvVar23 != pvVar42)) &&
            (0.0 < *(float *)((int)pvVar23 + 0x16c))) &&
           (uVar28 = FUN_004d18c0((int)pvVar42,(int)pvVar23), (char)uVar28 != '\0')) {
          iVar51 = *piVar25;
          FUN_004013d0((void *)(iVar51 + 0x80),0);
          puVar26 = (uint *)(unaff_EBP - 0x360c);
          puVar27 = FUN_00402c50((void *)(*(int *)(unaff_EBP - 0x2b14) + 0x10),
                                 (uint *)(unaff_EBP - 0x2214),(uint *)(iVar51 + 0x10));
          ppVar41 = (pair<unsigned___int64,unsigned___int64> *)FUN_0041cba0(puVar27);
          ppVar41 = std::pair<unsigned___int64,unsigned___int64>::
                    operator=<std::pair<unsigned___int64,unsigned___int64>,0>
                              ((pair<unsigned___int64,unsigned___int64> *)(unaff_EBP - 0x1bcc),
                               ppVar41);
          puVar26 = FUN_0041ce90(ppVar41,puVar26);
          uVar28 = FUN_004dade0(puVar26);
          pvVar42 = *(void **)(unaff_EBP - 0x2b14);
          if ((char)uVar28 != '\0') {
            pvVar23 = (void *)FUN_004e2320((void *)((int)pvVar42 + 0x10),2);
            plVar32 = (longlong *)FUN_00401490(pvVar23,(int *)(unaff_EBP - 0x361c),pvVar23);
            fVar55 = FUN_00401420(plVar32);
            fVar55 = FUN_00401ca0((float)fVar55);
            iVar51 = *piVar25;
            *(float *)(unaff_EBP - 0x2b48) = (float)fVar55;
            pfVar33 = (float *)FUN_004013d0((void *)(iVar51 + 0x80),2);
            *(float *)(unaff_EBP - 0x2b1c) = *pfVar33 * 0.5;
            pfVar33 = (float *)FUN_004013d0((void *)((int)pvVar42 + 0x80),2);
            uVar22 = *(uint *)(unaff_EBP - 0x2c90) & 0xff;
            fVar56 = *(float *)(unaff_EBP - 0x2b1c) + *pfVar33 + 1.0;
            if (*(float *)(unaff_EBP - 0x2b48) <= fVar56 && fVar56 != *(float *)(unaff_EBP - 0x2b48)
               ) {
              uVar22 = 1;
            }
            *(uint *)(unaff_EBP - 0x2c90) = uVar22;
          }
        }
        FUN_00407a30((void *)(unaff_EBP - 0x2c88),(int *)(unaff_EBP - 0x2fe0));
        piVar25 = (int *)FUN_00530550(*(void **)(unaff_EBP - 0x2b6c),
                                      (undefined4 *)(unaff_EBP - 0x2e14));
        bVar5 = FUN_0042c6f0((void *)(unaff_EBP - 0x2c88),piVar25);
      } while (bVar5);
      cVar4 = (char)*(undefined4 *)(unaff_EBP - 0x2c90);
      if (cVar4 == '\0') goto LAB_0053feb1;
LAB_0053febe:
      if (*(char *)((int)pvVar42 + 0x68) == '0') {
        *(undefined4 *)((int)pvVar42 + 0x13b4) = 0;
        *(undefined4 *)((int)pvVar42 + 0x170) = 0x3f800000;
        *(undefined1 *)((int)pvVar42 + 0x68) = 0;
        *(undefined4 *)((int)pvVar42 + 0x6c) = 0;
        if (*(char *)((int)pvVar42 + 0xaa8) == '\x03') {
          if (*(char *)((int)pvVar42 + 0xaa9) == '\x05') {
            *(undefined1 *)((int)pvVar42 + 0x68) = 5;
          }
          else {
            uVar3 = 0x14;
            if (*(char *)((int)pvVar42 + 0xaa9) == '\x03') {
              uVar3 = 0x11;
            }
            *(undefined1 *)((int)pvVar42 + 0x68) = uVar3;
          }
        }
      }
      if (*(char *)((int)pvVar42 + 0x68) == '/') {
        *(undefined4 *)((int)pvVar42 + 0x13b4) = 0;
        *(undefined1 *)((int)pvVar42 + 0x68) = 0x36;
      }
      if (cVar4 == '\0') goto LAB_0053ff2b;
    }
    else {
      cVar4 = (char)*(undefined4 *)(unaff_EBP - 0x2c90);
LAB_0053feb1:
      if (500 < *(int *)((int)pvVar42 + 0x6c)) goto LAB_0053febe;
LAB_0053ff2b:
      FUN_00401cd0((undefined4 *)(unaff_EBP - 0x1c9c));
      pfVar33 = (float *)FUN_004013d0((void *)((int)pvVar42 + 0x28),2);
      FUN_00402030((void *)(unaff_EBP - 0x1c9c),*pfVar33);
      pfVar33 = (float *)FUN_00401080((void *)(unaff_EBP - 0x1a0c),0,
                                      *(float *)(unaff_EBP - 0x2b60) * 2.0,0);
      pfVar33 = (float *)FUN_004dde00((void *)(unaff_EBP - 0x1c9c),(float *)(unaff_EBP - 0x1460),
                                      pfVar33);
      FUN_00401650((void *)(unaff_EBP - 0x1c),pfVar33);
    }
    pvVar23 = *(void **)(unaff_EBP - 0x2b18);
  }
  if (*(char *)((int)pvVar42 + 0x68) == 'Q') {
    iVar51 = FUN_00413aa0((char *)((int)pvVar42 + 0x1e8));
    if (iVar51 < *(int *)((int)pvVar42 + 0x6c)) {
      *(undefined1 *)((int)pvVar42 + 0x68) = 0x53;
    }
    else {
      *(undefined4 *)(unaff_EBP - 0x2b60) = 0;
    }
  }
  if ((*(int *)((int)pvVar42 + 0x128) != 0) &&
     (((*(char *)((int)pvVar42 + 0x68) != '2' && (*(char *)((int)pvVar42 + 0x68) != '`')) ||
      (iVar51 = FUN_004084b0((int)pvVar42), iVar51 < *(int *)((int)pvVar42 + 0x6c))))) {
    if ((*(char *)((int)pvVar42 + 0x140) == '\x04') && (*(char *)((int)pvVar42 + 0x141) == '\x01'))
    {
      cVar4 = *(char *)((int)pvVar42 + 0x68);
      if (((cVar4 != '\x05') && (cVar4 != '\x14')) && (cVar4 != '\x11')) {
        *(undefined1 *)((int)pvVar42 + 0x68) = 0;
      }
    }
    else {
      *(undefined1 *)((int)pvVar42 + 0x68) = 0;
      *(undefined4 *)((int)pvVar42 + 0x144) = 0;
    }
  }
  cVar4 = *(char *)((int)pvVar42 + 0x68);
  *(undefined1 *)(unaff_EBP - 0x2b84) = 0;
  if ((((cVar4 == 'D') || (cVar4 == ']')) || (cVar4 == 'E')) &&
     (iVar51 = FUN_00407db0(pvVar42,0xffffffff), *(int *)((int)pvVar42 + 0x6c) <= iVar51)) {
    *(undefined4 *)(unaff_EBP - 0x2b60) = 0;
  }
  cVar4 = *(char *)((int)pvVar42 + 0x68);
  if ((((cVar4 == 'D') || (cVar4 == ']')) || (cVar4 == 'E')) &&
     (iVar51 = FUN_00407db0(pvVar42,0xffffffff), iVar51 < *(int *)((int)pvVar42 + 0x6c))) {
    iVar51 = FUN_00411d60(pvVar42,0xffffffff);
    iVar31 = FUN_00407db0(*(void **)(unaff_EBP - 0x2b14),0xffffffff);
    pvVar42 = *(void **)(unaff_EBP - 0x2b14);
    if (*(int *)((int)pvVar42 + 0x6c) <
        iVar31 + ((int)((iVar51 * 3 >> 0x1f & 3U) + iVar51 * 3) >> 2)) {
      FUN_00401cd0((undefined4 *)(unaff_EBP - 0x1cdc));
      pfVar33 = (float *)FUN_004013d0((void *)((int)pvVar42 + 0x28),2);
      FUN_00402030((void *)(unaff_EBP - 0x1cdc),*pfVar33);
      pfVar33 = (float *)FUN_00401080((void *)(unaff_EBP - 0x1730),0,0x3f800000,0);
      pfVar33 = (float *)FUN_004dde00((void *)(unaff_EBP - 0x1cdc),(float *)(unaff_EBP - 0x1478),
                                      pfVar33);
      puVar24 = (undefined4 *)FUN_004e1520((float *)(unaff_EBP - 0x1910),20.0,pfVar33);
      FUN_00401060((void *)(unaff_EBP - 0x1c),puVar24);
      *(undefined4 *)(unaff_EBP - 0x2b60) = 0x42480000;
      *(undefined1 *)(unaff_EBP - 0x2b84) = 1;
    }
  }
  if ((*(char *)((int)pvVar42 + 0x68) == 'M') &&
     (iVar51 = FUN_00407db0(pvVar42,0xffffffff), iVar51 < *(int *)((int)pvVar42 + 0x6c))) {
    iVar51 = FUN_00407db0(pvVar42,0xffffffff);
    iVar31 = FUN_00411d60(*(void **)(unaff_EBP - 0x2b14),0xffffffff);
    if (*(int *)(*(int *)(unaff_EBP - 0x2b14) + 0x6c) < iVar51 + iVar31) {
      FUN_00401cd0((undefined4 *)(unaff_EBP - 0x1d5c));
      pfVar33 = (float *)FUN_004013d0(*(void **)(unaff_EBP - 0x2b64),2);
      FUN_00402030((void *)(unaff_EBP - 0x1d5c),*pfVar33);
      pfVar33 = (float *)FUN_00401080((void *)(unaff_EBP - 0x1490),0xbf800000,0,0);
      pfVar33 = (float *)FUN_004dde00((void *)(unaff_EBP - 0x1d5c),(float *)(unaff_EBP - 0x1748),
                                      pfVar33);
      puVar24 = (undefined4 *)FUN_004e1520((float *)(unaff_EBP - 0x14a8),20.0,pfVar33);
      FUN_00401060((void *)(unaff_EBP - 0x1c),puVar24);
      *(undefined4 *)(unaff_EBP - 0x2b60) = 0x42700000;
      *(undefined1 *)(unaff_EBP - 0x2b84) = 1;
    }
    pvVar42 = *(void **)(unaff_EBP - 0x2b14);
  }
  if ((*(char *)((int)pvVar42 + 0x68) == 'N') &&
     (iVar51 = FUN_00407db0(pvVar42,0xffffffff), iVar51 < *(int *)((int)pvVar42 + 0x6c))) {
    iVar51 = FUN_00407db0(pvVar42,0xffffffff);
    iVar31 = FUN_00411d60(*(void **)(unaff_EBP - 0x2b14),0xffffffff);
    if (*(int *)(*(int *)(unaff_EBP - 0x2b14) + 0x6c) < iVar51 + iVar31) {
      FUN_00401cd0((undefined4 *)(unaff_EBP - 0x1ddc));
      pfVar33 = (float *)FUN_004013d0(*(void **)(unaff_EBP - 0x2b64),2);
      FUN_00402030((void *)(unaff_EBP - 0x1ddc),*pfVar33);
      pfVar33 = (float *)FUN_00401080((void *)(unaff_EBP - 0x1a9c),0x3f800000,0,0);
      pfVar33 = (float *)FUN_004dde00((void *)(unaff_EBP - 0x1ddc),(float *)(unaff_EBP - 0x14c0),
                                      pfVar33);
      puVar24 = (undefined4 *)FUN_004e1520((float *)(unaff_EBP - 0x1760),20.0,pfVar33);
      FUN_00401060((void *)(unaff_EBP - 0x1c),puVar24);
      *(undefined4 *)(unaff_EBP - 0x2b60) = 0x42700000;
      *(undefined1 *)(unaff_EBP - 0x2b84) = 1;
    }
    pvVar42 = *(void **)(unaff_EBP - 0x2b14);
  }
  if ((*(char *)((int)pvVar42 + 0x68) == 'L') &&
     (iVar51 = FUN_00407db0(pvVar42,0xffffffff), iVar51 < *(int *)((int)pvVar42 + 0x6c))) {
    iVar51 = FUN_00407db0(pvVar42,0xffffffff);
    iVar31 = FUN_00411d60(*(void **)(unaff_EBP - 0x2b14),0xffffffff);
    if (*(int *)(*(int *)(unaff_EBP - 0x2b14) + 0x6c) < iVar51 + iVar31) {
      FUN_00401cd0((undefined4 *)(unaff_EBP - 0x1d9c));
      pfVar33 = (float *)FUN_004013d0(*(void **)(unaff_EBP - 0x2b64),2);
      FUN_00402030((void *)(unaff_EBP - 0x1d9c),*pfVar33);
      pfVar33 = (float *)FUN_00401080((void *)(unaff_EBP - 0x14d8),0,0x3f800000,0);
      pfVar33 = (float *)FUN_004dde00((void *)(unaff_EBP - 0x1d9c),(float *)(unaff_EBP - 0x1934),
                                      pfVar33);
      puVar24 = (undefined4 *)FUN_004e1520((float *)(unaff_EBP - 0x14f0),20.0,pfVar33);
      FUN_00401060((void *)(unaff_EBP - 0x1c),puVar24);
      *(undefined4 *)(unaff_EBP - 0x2b60) = 0x42700000;
      *(undefined1 *)(unaff_EBP - 0x2b84) = 1;
    }
    pvVar42 = *(void **)(unaff_EBP - 0x2b14);
  }
  if ((*(char *)((int)pvVar42 + 0x68) == 'G') &&
     (iVar51 = FUN_004084b0((int)pvVar42), *(int *)((int)pvVar42 + 0x6c) < iVar51)) {
    *(undefined4 *)(unaff_EBP - 0x2b60) = 0;
    *(undefined1 *)(unaff_EBP - 0x2b84) = 1;
  }
  if ((*(char *)((int)pvVar42 + 0x68) == 'H') &&
     (iVar51 = FUN_004084b0((int)pvVar42), *(int *)((int)pvVar42 + 0x6c) < iVar51)) {
    pfVar33 = (float *)FUN_004013d0((void *)((int)pvVar42 + 0x28),2);
    fVar56 = *(float *)(unaff_EBP - 0x2ba0);
    *(undefined1 *)(unaff_EBP - 0x2b84) = 1;
    *pfVar33 = fVar56 * 720.0 + *pfVar33;
    *(undefined4 *)(unaff_EBP - 0x2b60) = 0x41400000;
  }
  cVar4 = *(char *)((int)pvVar42 + 0x68);
  if ((((cVar4 == 'D') || (cVar4 == ']')) || (cVar4 == 'E')) &&
     (iVar51 = FUN_00407db0(pvVar42,0xffffffff), iVar51 < *(int *)((int)pvVar42 + 0x6c))) {
    iVar51 = FUN_004084b0((int)pvVar42);
    uVar22 = *(uint *)(unaff_EBP - 0x2b84) & 0xff;
    if (*(int *)((int)pvVar42 + 0x6c) < iVar51) {
      uVar22 = 1;
    }
    *(uint *)(unaff_EBP - 0x2b84) = uVar22;
  }
  if (*(char *)((int)pvVar42 + 0x60) == '\x04') {
    *(undefined4 *)(unaff_EBP - 0x2b60) = 0x41f00000;
  }
  if (((*(char *)((int)pvVar42 + 0x68) == '9') || (*(char *)((int)pvVar42 + 0x68) == 'J')) &&
     ((iVar51 = FUN_004084b0((int)pvVar42), *(int *)((int)pvVar42 + 0x6c) < iVar51 &&
      ((iVar51 = FUN_00407db0(pvVar42,0xffffffff), iVar51 <= *(int *)((int)pvVar42 + 0x6c) &&
       (iVar51 = FUN_00407db0(pvVar42,0xffffffff), iVar51 <= *(int *)((int)pvVar42 + 0x6c))))))) {
    *(undefined4 *)(unaff_EBP - 0x2b60) = 0x3dcccccd;
    *(undefined1 *)(unaff_EBP - 0x2b84) = 1;
  }
  if (*(char *)((int)pvVar42 + 0x68) == '$') {
    fVar55 = FUN_00412150((int)pvVar42);
    *(float *)(unaff_EBP - 0x2b1c) = (float)fVar55;
    *(float *)((int)pvVar42 + 0x144) =
         *(float *)(unaff_EBP - 0x2b1c) * *(float *)(unaff_EBP - 0x2b88) * 0.0005 +
         *(float *)((int)pvVar42 + 0x144);
  }
  cVar4 = *(char *)((int)pvVar42 + 0x68);
  if ((((((cVar4 == '\x18') || (cVar4 == '\x19')) || (cVar4 == '\x1b')) ||
       ((cVar4 == '\b' || (cVar4 == ';')))) || ((cVar4 == '?' || (cVar4 == '@')))) &&
     (iVar51 = FUN_00407db0(pvVar42,0xffffffff), iVar51 <= *(int *)((int)pvVar42 + 0x6c))) {
    fVar55 = FUN_00412150((int)pvVar42);
    *(float *)(unaff_EBP - 0x2b1c) = (float)fVar55;
    cVar4 = *(char *)((int)pvVar42 + 0x140);
    *(float *)(unaff_EBP - 0x2b20) =
         *(float *)(unaff_EBP - 0x2b1c) * *(float *)(unaff_EBP - 0x2b88) * 0.00075;
    if ((cVar4 == '\x02') && (*(char *)((int)pvVar42 + 0x141) == '\0')) {
      *(float *)(unaff_EBP - 0x2b1c) = (float)*(int *)((int)pvVar42 + 0x70);
      iVar51 = FUN_0040fcf0((int)pvVar42);
      if (*(float *)(unaff_EBP - 0x2b1c) / (float)iVar51 <= 4.0) {
        *(float *)(unaff_EBP - 0x2b1c) = (float)*(int *)((int)pvVar42 + 0x70);
        iVar51 = FUN_0040fcf0((int)pvVar42);
        fVar56 = *(float *)(unaff_EBP - 0x2b1c) / (float)iVar51;
      }
      else {
        fVar56 = 4.0;
      }
      *(float *)(unaff_EBP - 0x2b20) = (fVar56 + 1.0) * *(float *)(unaff_EBP - 0x2b20);
    }
    puVar24 = FUN_0040ef90(pvVar42,2);
    if (puVar24 == (undefined4 *)0x0) {
      fVar56 = *(float *)(unaff_EBP - 0x2b20);
    }
    else {
      fVar55 = FUN_00409de0((int)pvVar42,0x66,-1);
      *(float *)(unaff_EBP - 0x2b1c) = (float)fVar55;
      fVar56 = (*(float *)(unaff_EBP - 0x2b1c) * 9.0 + 1.0) * *(float *)(unaff_EBP - 0x2b20);
    }
    *(float *)((int)pvVar42 + 0x144) = fVar56 + *(float *)((int)pvVar42 + 0x144);
    puVar24 = FUN_0040ef90(pvVar42,10);
    if (puVar24 != (undefined4 *)0x0) {
      *(undefined4 *)((int)pvVar42 + 0x144) = *(undefined4 *)((int)pvVar42 + 0x170);
    }
  }
  if (*(float *)((int)pvVar42 + 0x170) < *(float *)((int)pvVar42 + 0x144)) {
    *(float *)((int)pvVar42 + 0x144) = *(float *)((int)pvVar42 + 0x170);
  }
  fVar56 = *(float *)(unaff_EBP - 0x2b60);
  if (*(int *)((int)pvVar42 + 0x134) != 0) {
    fVar56 = fVar56 * 0.5;
    *(float *)(unaff_EBP - 0x2b60) = fVar56;
  }
  if (*(int *)((int)pvVar42 + 0x138) != 0) {
    *(float *)(unaff_EBP - 0x2b60) = fVar56 * 1.5;
  }
  if ((((*(byte *)((int)pvVar42 + 0x124) & 4) != 0) && (*(int *)((int)pvVar42 + 0x128) == 0)) &&
     (((*(char *)((int)pvVar42 + 0x68) != '2' && (*(char *)((int)pvVar42 + 0x68) != '`')) ||
      (1000 < *(int *)((int)pvVar42 + 0x6c))))) {
    puVar24 = (undefined4 *)FUN_0041cba0((int)pvVar42 + 0x160);
    pfVar33 = (float *)FUN_004cde20((void *)(unaff_EBP - 0xec0),*(undefined4 **)(unaff_EBP - 0x2b5c)
                                   );
    pfVar36 = (float *)FUN_004cde20((void *)(unaff_EBP - 0xe40),puVar24);
    fVar55 = FUN_00401570(pfVar36,pfVar33);
    *(float *)(unaff_EBP - 0x2b1c) = (float)fVar55;
    if (*(float *)(unaff_EBP - 0x2b1c) <= 0.0 && *(float *)(unaff_EBP - 0x2b1c) != 0.0) {
      FUN_004cde20((void *)(unaff_EBP - 0x84),puVar24);
      FUN_004cde20((void *)(unaff_EBP - 0x260),*(undefined4 **)(unaff_EBP - 0x2b5c));
      FUN_00401f50((float *)(unaff_EBP - 0x84));
      FUN_00401f50((float *)(unaff_EBP - 0x260));
      fVar55 = FUN_00401570((float *)(unaff_EBP - 0x84),(float *)(unaff_EBP - 0x260));
      *(float *)(unaff_EBP - 0x2b1c) = (float)fVar55;
      *(float *)(unaff_EBP - 0x2b60) =
           (*(float *)(unaff_EBP - 0x2b1c) * 0.5 + 1.0) * *(float *)(unaff_EBP - 0x2b60);
    }
  }
  FUN_00401650(*(void **)(unaff_EBP - 0x2b3c),(float *)(unaff_EBP - 0x1c));
  pfVar33 = (float *)FUN_004cde20((void *)(unaff_EBP - 0xe90),*(undefined4 **)(unaff_EBP - 0x2b5c));
  fVar55 = FUN_00402180(pfVar33);
  *(float *)(unaff_EBP - 0x2b1c) = (float)fVar55;
  if (*(float *)(unaff_EBP - 0x2b60) * *(float *)(unaff_EBP - 0x2b60) <
      *(float *)(unaff_EBP - 0x2b1c)) {
    FUN_004cde20((void *)(unaff_EBP - 0x8c),*(undefined4 **)(unaff_EBP - 0x2b5c));
    FUN_00401f50((float *)(unaff_EBP - 0x8c));
    FUN_004015e0((void *)(unaff_EBP - 0x8c),*(float *)(unaff_EBP - 0x2b60));
    puVar24 = (undefined4 *)FUN_004013d0((void *)(unaff_EBP - 0x8c),0);
    puVar45 = (undefined4 *)FUN_004013d0(*(void **)(unaff_EBP - 0x2b3c),0);
    *puVar45 = *puVar24;
    puVar24 = (undefined4 *)FUN_004013d0((void *)(unaff_EBP - 0x8c),1);
    puVar45 = (undefined4 *)FUN_004013d0(*(void **)(unaff_EBP - 0x2b3c),1);
    *puVar45 = *puVar24;
  }
  iVar51 = *(int *)(unaff_EBP - 0x2b14);
  if ((((*(ushort *)(iVar51 + 0x124) & 1) == 0) || ((*(ushort *)(iVar51 + 0x124) & 0x10) != 0)) ||
     ((*(byte *)(iVar51 + 0x5c) & 4) == 0)) {
    if (((*(byte *)(iVar51 + 0x7e) & 2) == 0) || (0 < *(int *)(iVar51 + 300))) {
      cVar4 = FUN_0040f6e0(iVar51);
      if (cVar4 == '\0') {
        pfVar33 = (float *)FUN_004013d0((void *)(iVar51 + 0x34),2);
        fVar56 = *pfVar33;
        *(float **)(unaff_EBP - 0x2bb4) = pfVar33;
        if (0.0 <= fVar56) {
          plVar32 = (longlong *)FUN_004e2320((void *)(iVar51 + 0x10),2);
          fVar55 = FUN_00401420(plVar32);
          *(float *)(iVar51 + 0x13bc) = (float)fVar55;
          pfVar33 = *(float **)(unaff_EBP - 0x2bb4);
        }
        *pfVar33 = *pfVar33 - *(float *)(unaff_EBP - 0x2ba0) * 30.0;
        goto LAB_00540a07;
      }
    }
    pfVar33 = (float *)FUN_004013d0((void *)(iVar51 + 0x34),2);
    fVar56 = *(float *)(unaff_EBP - 0x2ba0);
    fVar59 = *pfVar33;
    *(float **)(unaff_EBP - 0x2bb4) = pfVar33;
    *pfVar33 = fVar59 - fVar56 * 0.1 * 30.0;
  }
  else {
    iVar31 = *(int *)(unaff_EBP - 0x2b24);
    fVar56 = 0.0025;
    puVar37 = (undefined8 *)FUN_00401080((void *)(unaff_EBP - 0x1778),0,0,0);
    FUN_0052e7c0((float *)(iVar51 + 0x34),puVar37,iVar31,fVar56);
    pfVar33 = (float *)FUN_004013d0((void *)(iVar51 + 0x34),2);
    fVar56 = *pfVar33;
    *(float **)(unaff_EBP - 0x2bb4) = pfVar33;
    if (fVar56 <= -10.0) goto LAB_00540a07;
  }
  plVar32 = (longlong *)FUN_004e2320((void *)(iVar51 + 0x10),2);
  fVar55 = FUN_00401420(plVar32);
  *(float *)(iVar51 + 0x13bc) = (float)fVar55;
LAB_00540a07:
  if ((iVar51 == *(int *)((int)pvVar23 + 0xb8)) && ((*(byte *)(iVar51 + 0x124) & 0x10) != 0)) {
    uVar22 = *(uint *)(iVar51 + 0x5c);
    if ((uVar22 & 2) == 0) {
      if ((uVar22 & 1) == 0) {
        if ((uVar22 & 4) != 0) {
          fVar55 = FUN_004021b0((float *)(iVar51 + 0x34));
          *(float *)(unaff_EBP - 0x2b1c) = (float)fVar55;
          if (64.0 < *(float *)(unaff_EBP - 0x2b1c)) {
            fVar55 = FUN_004015a0((float *)(iVar51 + 0x11a0),(float *)(iVar51 + 0x34));
            *(float *)(unaff_EBP - 0x2b1c) = (float)fVar55;
            if (*(float *)(unaff_EBP - 0x2b1c) <= -4.0 && *(float *)(unaff_EBP - 0x2b1c) != -4.0) {
              iVar31 = FUN_0040ffe0(iVar51);
              *(int *)(iVar51 + 300) = iVar31;
              FUN_00405570((longlong *)(iVar51 + 0x10),0x10,'\0');
              FUN_004c8530(unaff_EBP - 0x5c0);
              FUN_00402550((void *)(unaff_EBP - 0x5c0),(longlong *)(iVar51 + 0x10));
              iVar51 = *(int *)(unaff_EBP - 0x2b28);
              *(undefined4 *)(unaff_EBP - 0x5b0) = 0x3f800000;
              *(undefined4 *)(unaff_EBP - 0x5b4) = 0x17;
              FUN_00428590((void *)(iVar51 + 8),(undefined4 *)(unaff_EBP - 0x5c0));
              iVar51 = *(int *)(unaff_EBP - 0x2b14);
            }
          }
        }
        if ((*(byte *)(iVar51 + 0x124) & 0x40) != 0) {
          fVar56 = **(float **)(unaff_EBP - 0x2bb4);
          if (fVar56 < 0.0) {
            **(float **)(unaff_EBP - 0x2bb4) = *(float *)(unaff_EBP - 0x2ba0) * 30.0 + fVar56;
          }
        }
        pfVar33 = FUN_004d9720((float *)(unaff_EBP - 0x1508));
        pfVar33 = (float *)FUN_004e1520((float *)(unaff_EBP - 0x1a30),*(float *)(unaff_EBP - 0x2ba0)
                                        ,pfVar33);
        FUN_00401650((void *)(iVar51 + 0x34),pfVar33);
      }
      else {
        fVar55 = FUN_00401ca0(**(float **)(unaff_EBP - 0x2b40));
        *(float *)(unaff_EBP - 0x2b1c) = (float)fVar55;
        if (40.0 < *(float *)(unaff_EBP - 0x2b1c)) {
          iVar31 = FUN_0040ffe0(iVar51);
          *(int *)(iVar51 + 300) = iVar31;
          FUN_00405570((longlong *)(iVar51 + 0x10),0x10,'\0');
          FUN_004c8530(unaff_EBP - 0x8f0);
          FUN_00402550((void *)(unaff_EBP - 0x8f0),(longlong *)(iVar51 + 0x10));
          iVar51 = *(int *)(unaff_EBP - 0x2b28);
          *(undefined4 *)(unaff_EBP - 0x8e0) = 0x3f800000;
          *(undefined4 *)(unaff_EBP - 0x8e4) = 0x17;
          FUN_00428590((void *)(iVar51 + 8),(undefined4 *)(unaff_EBP - 0x8f0));
          iVar51 = *(int *)(unaff_EBP - 0x2b14);
        }
      }
    }
    else {
      FUN_00405570((void *)(iVar51 + 0x10),0x10,'\0');
    }
  }
  if (0 < *(int *)(iVar51 + 300)) {
    FUN_00405570((void *)(iVar51 + 0x10),0x10,'\0');
    FUN_00405570((void *)(iVar51 + 0x10),1,'\0');
    iVar51 = *(int *)(unaff_EBP - 0x2b14);
    *(undefined4 *)(iVar51 + 0x144) = 0;
  }
  if ((*(char *)(iVar51 + 0x68) != '\0') &&
     (iVar31 = FUN_004084b0(iVar51), *(int *)(iVar51 + 0x6c) < iVar31)) {
    FUN_00405570((void *)(iVar51 + 0x10),0x10,'\0');
    FUN_00405570((void *)(iVar51 + 0x10),1,'\0');
    iVar51 = *(int *)(unaff_EBP - 0x2b14);
  }
  *(float **)(unaff_EBP - 0x2b74) = (float *)(iVar51 + 0x4c);
  pfVar33 = (float *)FUN_004014f0((void *)(iVar51 + 0x34),(float *)(unaff_EBP - 0x1520),
                                  (float *)(iVar51 + 0x4c));
  puVar24 = (undefined4 *)
            FUN_004e1520((float *)(unaff_EBP - 0x1790),*(float *)(unaff_EBP - 0x2ba0),pfVar33);
  FUN_00401060((void *)(unaff_EBP - 0x1c),puVar24);
  if (((*(char *)(iVar51 + 0x60) != '\x06') && (*(char *)(iVar51 + 0x68) != 'S')) &&
     (*(char *)(iVar51 + 0x68) != 'T')) {
    FUN_00428070((void *)((int)pvVar23 + 4),(undefined4 *)(unaff_EBP - 0x2c98));
    piVar25 = (int *)FUN_00530550((void *)((int)pvVar23 + 4),(undefined4 *)(unaff_EBP - 0x2e1c));
    bVar5 = FUN_0042c6f0((void *)(unaff_EBP - 0x2c98),piVar25);
    if (bVar5) {
      do {
        iVar51 = FUN_00402bc0((int *)(unaff_EBP - 0x2c98));
        piVar25 = (int *)(iVar51 + 8);
        iVar51 = *piVar25;
        if ((((iVar51 != 0) && (iVar31 = *(int *)(unaff_EBP - 0x2b14), iVar51 != iVar31)) &&
            ((*(char *)(iVar31 + 0x60) != '\0' ||
             ((*(char *)(iVar51 + 0x60) == '\x01' || (*(char *)(iVar51 + 0x60) == '\x06')))))) &&
           (0.0 < *(float *)(iVar51 + 0x16c))) {
          FUN_00401060((void *)(unaff_EBP - 0x1bc),(undefined4 *)(iVar51 + 0x80));
          if (*(char *)(*piVar25 + 0x60) != '\x06') {
            piVar34 = FUN_00402990((void *)(unaff_EBP - 0x1538),1,1,0);
            FUN_004c64b0((void *)(unaff_EBP - 0x974),piVar34);
            FUN_00401650((void *)(unaff_EBP - 0x1bc),(float *)(unaff_EBP - 0x974));
          }
          iVar51 = FUN_004013d0((void *)(unaff_EBP - 0x1bc),0);
          pvVar42 = (void *)(iVar31 + 0x10);
          *(int *)(unaff_EBP - 0x2b20) = iVar51;
          iVar51 = FUN_004e2320(pvVar42,0);
          *(int *)(unaff_EBP - 0x2b3c) = iVar51;
          piVar34 = (int *)(unaff_EBP - 0x367c);
          pvVar23 = (void *)FUN_004e2320((void *)(*piVar25 + 0x10),0);
          puVar26 = (uint *)FUN_004014b0(pvVar23,piVar34);
          pvVar23 = (void *)FUN_00401530(*(void **)(unaff_EBP - 0x2b3c),(int *)(unaff_EBP - 0x368c))
          ;
          uVar22 = FUN_004ce380(pvVar23,puVar26);
          if ((char)uVar22 != '\0') {
            piVar34 = (int *)(unaff_EBP - 0x369c);
            pvVar23 = (void *)FUN_004e2320((void *)(*piVar25 + 0x10),0);
            puVar26 = (uint *)FUN_00401530(pvVar23,piVar34);
            pvVar23 = (void *)FUN_004014b0(*(void **)(unaff_EBP - 0x2b3c),
                                           (int *)(unaff_EBP - 0x36ac));
            uVar22 = FUN_004ce350(pvVar23,puVar26);
            if ((char)uVar22 != '\0') {
              iVar51 = FUN_004013d0((void *)(unaff_EBP - 0x1bc),1);
              pvVar23 = *(void **)(unaff_EBP - 0x2bb0);
              *(int *)(unaff_EBP - 0x2b20) = iVar51;
              iVar51 = FUN_004013d0(pvVar23,1);
              *(int *)(unaff_EBP - 0x2b3c) = iVar51;
              iVar51 = FUN_004e2320(pvVar42,1);
              *(int *)(unaff_EBP - 0x2b50) = iVar51;
              piVar34 = (int *)(unaff_EBP - 0x36bc);
              pvVar23 = (void *)FUN_004e2320((void *)(*piVar25 + 0x10),1);
              puVar26 = (uint *)FUN_004014b0(pvVar23,piVar34);
              pvVar23 = (void *)FUN_00401530(*(void **)(unaff_EBP - 0x2b50),
                                             (int *)(unaff_EBP - 0x36cc));
              uVar22 = FUN_004ce380(pvVar23,puVar26);
              if ((char)uVar22 != '\0') {
                piVar34 = (int *)(unaff_EBP - 0x373c);
                pvVar23 = (void *)FUN_004e2320((void *)(*piVar25 + 0x10),1);
                puVar26 = (uint *)FUN_00401530(pvVar23,piVar34);
                pvVar23 = (void *)FUN_004014b0(*(void **)(unaff_EBP - 0x2b50),
                                               (int *)(unaff_EBP - 0x374c));
                uVar22 = FUN_004ce350(pvVar23,puVar26);
                if ((char)uVar22 != '\0') {
                  iVar51 = FUN_004013d0((void *)(unaff_EBP - 0x1bc),2);
                  pvVar23 = *(void **)(unaff_EBP - 0x2bb0);
                  *(int *)(unaff_EBP - 0x2b20) = iVar51;
                  iVar51 = FUN_004013d0(pvVar23,2);
                  *(int *)(unaff_EBP - 0x2b3c) = iVar51;
                  iVar51 = FUN_004e2320(pvVar42,2);
                  *(int *)(unaff_EBP - 0x2b50) = iVar51;
                  piVar34 = (int *)(unaff_EBP - 0x31e4);
                  pvVar23 = (void *)FUN_004e2320((void *)(*piVar25 + 0x10),2);
                  puVar26 = (uint *)FUN_004014b0(pvVar23,piVar34);
                  pvVar23 = (void *)FUN_00401530(*(void **)(unaff_EBP - 0x2b50),
                                                 (int *)(unaff_EBP - 0x35b4));
                  uVar22 = FUN_004ce380(pvVar23,puVar26);
                  if ((char)uVar22 != '\0') {
                    piVar34 = (int *)(unaff_EBP - 0x3454);
                    pvVar23 = (void *)FUN_004e2320((void *)(*piVar25 + 0x10),2);
                    puVar26 = (uint *)FUN_00401530(pvVar23,piVar34);
                    pvVar23 = (void *)FUN_004014b0(*(void **)(unaff_EBP - 0x2b50),
                                                   (int *)(unaff_EBP - 0x31ac));
                    uVar22 = FUN_004ce350(pvVar23,puVar26);
                    if ((char)uVar22 != '\0') {
                      puVar26 = FUN_00402c50(pvVar42,(uint *)(unaff_EBP - 0x1df4),
                                             (uint *)(*piVar25 + 0x10));
                      FUN_00402550((void *)(unaff_EBP - 0x150),(longlong *)puVar26);
                      puVar24 = (undefined4 *)FUN_004013d0((void *)(unaff_EBP - 0x150),2);
                      *puVar24 = 0;
                      fVar55 = FUN_004021b0((float *)(unaff_EBP - 0x150));
                      *(float *)(unaff_EBP - 0x2b1c) = (float)fVar55;
                      if (0.0 < *(float *)(unaff_EBP - 0x2b1c)) {
                        FUN_00401fb0((float *)(unaff_EBP - 0x150));
                        if (0 < *(int *)(*(int *)(unaff_EBP - 0x2b14) + 300)) {
                          FUN_00401610((void *)(unaff_EBP - 0x150),0.1);
                        }
                        pfVar33 = (float *)(unaff_EBP - 0x150);
                        pfVar36 = (float *)FUN_004013d0((void *)(*piVar25 + 0x80),0);
                        pfVar33 = (float *)FUN_004e1520((float *)(unaff_EBP - 0x1958),
                                                        (*(float *)(unaff_EBP - 0x2ba0) * 5.0 *
                                                        *pfVar36) / **(float **)(unaff_EBP - 0x2b4c)
                                                        ,pfVar33);
                        FUN_00401650((void *)(unaff_EBP - 0x1c),pfVar33);
                      }
                    }
                  }
                }
              }
            }
          }
        }
        FUN_00407a30((void *)(unaff_EBP - 0x2c98),(int *)(unaff_EBP - 0x2c1c));
        piVar25 = (int *)FUN_00530550(*(void **)(unaff_EBP - 0x2b6c),
                                      (undefined4 *)(unaff_EBP - 0x2e1c));
        bVar5 = FUN_0042c6f0((void *)(unaff_EBP - 0x2c98),piVar25);
      } while (bVar5);
      pvVar23 = *(void **)(unaff_EBP - 0x2b18);
      iVar51 = *(int *)(unaff_EBP - 0x2b14);
    }
  }
  fVar55 = FUN_00401d80((float *)(unaff_EBP - 0x1c));
  *(float *)(unaff_EBP - 0x2b1c) = (float)fVar55;
  iVar31 = (int)(*(float *)(unaff_EBP - 0x2b1c) + 1.0);
  *(int *)(unaff_EBP - 0x2b1c) = iVar31;
  FUN_00401610((void *)(unaff_EBP - 0x1c),1.0 / (float)iVar31);
  *(undefined1 *)(unaff_EBP - 0x2bac) = 0;
  *(undefined4 **)(unaff_EBP - 0x2b60) = (undefined4 *)(iVar51 + 0x10);
  FUN_00402a40((void *)(unaff_EBP - 0x1b2c),(undefined4 *)(iVar51 + 0x10));
  cVar4 = *(char *)((int)pvVar23 + 0xb4);
  *(undefined1 *)(unaff_EBP - 0x2bc5) = 0;
  *(undefined1 *)(unaff_EBP - 0x2b94) = 0;
  if (((cVar4 == '\0') || (iVar51 == *(int *)((int)pvVar23 + 0xb8))) &&
     (*(char *)(iVar51 + 0x60) != '\x06')) {
    FUN_005308b0(pvVar23,iVar51);
  }
  iVar31 = *(int *)(unaff_EBP - 0x2b1c);
  *(undefined4 *)(unaff_EBP - 0x2b48) = 0;
  if (0 < iVar31) goto code_r0x0054125a;
  goto LAB_00542a67;
LAB_0053b440:
  uVar60 = ZEXT48(pvVar23);
  uVar62 = 1;
  uVar67 = 0x53b44f;
  FUN_004cde40(&stack0xfffffff0,1);
  uVar64 = 0;
  uVar28 = 0x53b45b;
  FUN_004cde40(&stack0xffffffe8,0);
  FUN_004cde40(&stack0xffffffe0,0);
  puVar26 = FUN_00406380((void *)(unaff_EBP - 0x2124),uVar28,uVar64,uVar67,uVar62,uVar48,puVar26);
  puVar26 = FUN_00402c50(pvVar42,(uint *)(unaff_EBP - 0x2574),puVar26);
  cVar4 = FUN_004d4f90(*(void **)(unaff_EBP - 0x2b18),puVar26,(float *)uVar60,(char)(uVar60 >> 0x20)
                      );
  if (cVar4 != '\0') {
LAB_0053b547:
    plVar32 = (longlong *)FUN_004e2320(pvVar42,2);
    fVar55 = FUN_00401420(plVar32);
    *(float *)(*(int *)(unaff_EBP - 0x2b14) + 0x13bc) = (float)fVar55;
    FUN_00537cef();
    return;
  }
  pvVar42 = (void *)FUN_004e2320(pvVar42,2);
  piVar25 = (int *)(unaff_EBP - 0x351c);
  uVar22 = 1;
  FUN_004013d0(pvVar23,2);
  pvVar18 = (void *)FUN_004014b0(pvVar42,(int *)(unaff_EBP - 0x352c));
  puVar24 = (undefined4 *)FUN_00405660(pvVar18,piVar25,uVar22);
  uVar22 = puVar24[1];
  iVar51 = 0;
  puVar26 = (uint *)*puVar24;
  puVar27 = (uint *)FUN_004e2320(*(void **)(unaff_EBP - 0x2b64),1);
  uVar48 = puVar27[1];
  uVar52 = *puVar27;
  puVar27 = (uint *)FUN_004e2320(*(void **)(unaff_EBP - 0x2b64),0);
  iVar51 = FUN_00406050(*(void **)(unaff_EBP - 0x2b18),*puVar27,puVar27[1],uVar52,uVar48,
                        (uint)puVar26,uVar22,iVar51);
  bVar6 = FUN_00406280(iVar51);
  if (CONCAT31(extraout_var,bVar6) == 2) {
    pvVar42 = *(void **)(unaff_EBP - 0x2b64);
    goto LAB_0053b547;
  }
  FUN_004cde40((void *)(unaff_EBP - 0x2fe8),1);
  FUN_00402eb0(pvVar42,(uint *)(unaff_EBP - 0x2fe8));
  pvVar42 = *(void **)(unaff_EBP - 0x2b64);
  goto LAB_0053b440;
code_r0x0054125a:
  iVar51 = FUN_004013d0((void *)(unaff_EBP - 0x2d8),0);
  *(int *)(unaff_EBP - 0x2e24) = iVar51;
  iVar51 = FUN_004013d0((void *)(unaff_EBP - 0x2f0),0);
  *(int *)(unaff_EBP - 0x2b50) = iVar51;
LAB_00541280:
  FUN_004cde40((void *)(unaff_EBP - 0x2dac),0);
  iVar31 = 0;
  *(undefined4 *)(unaff_EBP - 0x2b54) = 0;
LAB_00541295:
  iVar51 = FUN_004013d0((void *)(unaff_EBP - 0x1c),iVar31);
  *(int *)(unaff_EBP - 0x2bb8) = iVar51;
  FUN_00402a10((ulonglong *)(unaff_EBP - 0x3060));
  pvVar42 = *(void **)(unaff_EBP - 0x2b60);
  pvVar18 = (void *)FUN_004e2320(pvVar42,*(int *)(unaff_EBP - 0x2b54));
  *(void **)(unaff_EBP - 0x2b90) = pvVar18;
  FUN_00402e60(pvVar18,(uint *)(unaff_EBP - 0x3060));
  pfVar33 = *(float **)(unaff_EBP - 0x2bb0);
  *(undefined1 *)(unaff_EBP - 0x2b31) = 0;
  FUN_004e1520((float *)(unaff_EBP - 0x1550),0.5,pfVar33);
  FUN_00402510(unaff_EBP - 0x19b8);
  puVar26 = FUN_00402c50(pvVar42,(uint *)(unaff_EBP - 0x2244),(uint *)(unaff_EBP - 0x19b8));
  FUN_00405450((int *)(unaff_EBP - 0x2d8),puVar26);
  FUN_004e1520((float *)(unaff_EBP - 0x17a8),0.5,*(float **)(unaff_EBP - 0x2bb0));
  FUN_00402510(unaff_EBP - 0x19dc);
  puVar26 = FUN_00402cb0(pvVar42,(uint *)(unaff_EBP - 0x2694),(uint *)(unaff_EBP - 0x19dc));
  FUN_00405450((int *)(unaff_EBP - 0x2f0),puVar26);
  iVar51 = **(int **)(unaff_EBP - 0x2e24);
  piVar25 = *(int **)(unaff_EBP - 0x2b50);
  *(int *)(unaff_EBP - 0x2b20) = iVar51;
  if (iVar51 <= *piVar25) {
    puVar26 = (uint *)FUN_004013d0((void *)(unaff_EBP - 0x2d8),1);
    *(uint **)(unaff_EBP - 0x2b70) = puVar26;
    piVar25 = (int *)FUN_004013d0((void *)(unaff_EBP - 0x2f0),1);
    piVar34 = *(int **)(unaff_EBP - 0x2b50);
    *(int **)(unaff_EBP - 0x2b3c) = piVar25;
    do {
      uVar22 = *puVar26;
      if ((int)uVar22 <= *piVar25) {
        piVar40 = (int *)FUN_004013d0((void *)(unaff_EBP - 0x2d8),2);
        *(int **)(unaff_EBP - 0x2bbc) = piVar40;
        piVar25 = (int *)FUN_004013d0((void *)(unaff_EBP - 0x2f0),2);
        piVar34 = *(int **)(unaff_EBP - 0x2b3c);
        *(int **)(unaff_EBP - 0x2b98) = piVar25;
        do {
          iVar51 = *piVar40;
          if (iVar51 <= *piVar25) {
            do {
              puVar35 = FUN_00405fd0(*(void **)(unaff_EBP - 0x2b18),*(uint *)(unaff_EBP - 0x2b20),
                                     uVar22,iVar51,0);
              uVar28 = FUN_004061f0((int)puVar35);
              if ((char)uVar28 == '\0') {
                if ((*(ushort *)(*(int *)(unaff_EBP - 0x2b14) + 0x7e) & 0x100) != 0) {
                  puVar35 = FUN_00405fd0(*(void **)(unaff_EBP - 0x2b18),
                                         *(uint *)(unaff_EBP - 0x2b20),uVar22,iVar51,0);
                  bVar6 = FUN_00406280((int)puVar35);
                  if (CONCAT31(extraout_var_00,bVar6) != 2) goto LAB_00541472;
                }
                cVar4 = *(char *)(unaff_EBP - 0x2b31);
              }
              else {
LAB_00541472:
                cVar4 = '\x01';
                *(undefined1 *)(unaff_EBP - 0x2b31) = 1;
              }
              piVar25 = *(int **)(unaff_EBP - 0x2b98);
              iVar51 = iVar51 + 1;
            } while (iVar51 <= *piVar25);
            if (cVar4 != '\0') {
              if ((*(int *)(unaff_EBP - 0x2b54) != 2) || (*(char *)(unaff_EBP - 0x2bac) != '\0'))
              goto LAB_00541f04;
              goto LAB_005414e8;
            }
            piVar34 = *(int **)(unaff_EBP - 0x2b3c);
          }
          piVar40 = *(int **)(unaff_EBP - 0x2bbc);
          uVar22 = uVar22 + 1;
        } while ((int)uVar22 <= *piVar34);
        iVar51 = *(int *)(unaff_EBP - 0x2b20);
        piVar25 = *(int **)(unaff_EBP - 0x2b3c);
        piVar34 = *(int **)(unaff_EBP - 0x2b50);
      }
      iVar51 = iVar51 + 1;
      *(int *)(unaff_EBP - 0x2b20) = iVar51;
      if (*piVar34 < iVar51) goto LAB_005414e8;
      puVar26 = *(uint **)(unaff_EBP - 0x2b70);
    } while( true );
  }
LAB_005414ee:
  pCVar38 = (CRefTime *)FUN_004e2320(*(void **)(unaff_EBP - 0x2b60),0);
  *(CRefTime **)(unaff_EBP - 0x2b3c) = pCVar38;
  lVar39 = CRefTime::Millisecs(pCVar38);
  iVar51 = (int)((lVar39 >> 0x1f & 7U) + lVar39) >> 3;
  pCVar38 = (CRefTime *)FUN_004e2320(*(void **)(unaff_EBP - 0x2b60),1);
  *(CRefTime **)(unaff_EBP - 0x2bbc) = pCVar38;
  lVar39 = CRefTime::Millisecs(pCVar38);
  uVar22 = iVar51 - 1;
  iVar51 = iVar51 + 1;
  iVar31 = (int)(lVar39 + (lVar39 >> 0x1f & 7U)) >> 3;
  *(uint *)(unaff_EBP - 0x2b20) = uVar22;
  *(int *)(unaff_EBP - 0x2be0) = iVar51;
  if (iVar51 < (int)uVar22) {
    if (*(char *)(unaff_EBP - 0x2b31) != '\0') goto LAB_00541f0c;
  }
  else {
    uVar52 = iVar31 - 1;
    iVar31 = iVar31 + 1;
    *(uint *)(unaff_EBP - 0x2b9c) = uVar52;
    *(int *)(unaff_EBP - 0x2bd8) = iVar31;
    while( true ) {
      *(uint *)(unaff_EBP - 0x2b98) = uVar52;
      if (iVar31 < (int)uVar52) {
        if (*(char *)(unaff_EBP - 0x2b31) != '\0') goto LAB_00541f0c;
      }
      else {
        do {
          pvVar23 = (void *)FUN_0041c9e0(pvVar23,uVar22,uVar52,0);
          *(void **)(unaff_EBP - 0x2cc4) = pvVar23;
          if (pvVar23 != (void *)0x0) {
            FUN_00428070(pvVar23,(undefined4 *)(unaff_EBP - 0x2ca4));
            piVar25 = (int *)FUN_00530550(pvVar23,(undefined4 *)(unaff_EBP - 0x2e2c));
            bVar5 = FUN_0042c6f0((void *)(unaff_EBP - 0x2ca4),piVar25);
            if (bVar5) {
              do {
                puVar26 = (uint *)FUN_0052eb90((int *)(unaff_EBP - 0x2ca4));
                iVar51 = *(int *)*puVar26;
                if (((iVar51 != 7) && (iVar51 != 6)) && (iVar51 != 9)) {
                  iVar51 = *(int *)(unaff_EBP - 0x2b14);
                  piVar25 = (int *)FUN_00530550((void *)(iVar51 + 0x1468),
                                                (undefined4 *)(unaff_EBP - 0x2ff8));
                  pvVar23 = (void *)FUN_004db1b0((void *)(iVar51 + 0x1468),
                                                 (int *)(unaff_EBP - 0x3004),puVar26);
                  bVar5 = FUN_0042c6f0(pvVar23,piVar25);
                  if (!bVar5) {
                    piVar25 = (int *)*puVar26;
                    iVar51 = *piVar25;
                    if (((((iVar51 != 1) && (iVar51 != 8)) && (iVar51 != 2)) &&
                        ((iVar51 != 3 && (iVar51 != 5)))) || ((char)piVar25[0xc] != '\0')) {
                      FUN_00401060((void *)(unaff_EBP - 0x144),piVar25 + 9);
                      uVar22 = *(uint *)(*puVar26 + 0x20) & 0x80000001;
                      bVar5 = uVar22 == 0;
                      if ((int)uVar22 < 0) {
                        bVar5 = (uVar22 - 1 | 0xfffffffe) == 0xffffffff;
                      }
                      if (!bVar5) {
                        puVar24 = (undefined4 *)FUN_004013d0((void *)(unaff_EBP - 0x144),1);
                        puVar45 = (undefined4 *)FUN_004013d0((void *)(unaff_EBP - 0x144),0);
                        FUN_004c8170(puVar45,puVar24);
                      }
                      puVar30 = (ulonglong *)(unaff_EBP - 0x343c);
                      puVar27 = (uint *)FUN_004e2320((void *)(*puVar26 + 8),
                                                     *(int *)(unaff_EBP - 0x2b54));
                      FUN_00401490(*(void **)(unaff_EBP - 0x2b90),(int *)(unaff_EBP - 0x33a4),
                                   puVar27);
                      puVar30 = FUN_0052ebb0(puVar30);
                      uVar28 = FUN_0052ec80((uint *)puVar30);
                      if ((char)uVar28 == '\0') {
                        FUN_004013d0((void *)(unaff_EBP - 0x144),0);
                        piVar25 = (int *)(unaff_EBP - 0x3664);
                        pvVar23 = (void *)FUN_004e2320((void *)(*puVar26 + 8),0);
                        puVar27 = (uint *)FUN_004014b0(pvVar23,piVar25);
                        pvVar23 = (void *)FUN_00401530(*(void **)(unaff_EBP - 0x2b3c),
                                                       (int *)(unaff_EBP - 0x33b4));
                        uVar22 = FUN_004ce380(pvVar23,puVar27);
                        if ((char)uVar22 != '\0') {
                          piVar25 = (int *)(unaff_EBP - 0x3714);
                          pvVar23 = (void *)FUN_004e2320((void *)(*puVar26 + 8),0);
                          puVar27 = (uint *)FUN_00401530(pvVar23,piVar25);
                          pvVar23 = (void *)FUN_004014b0(*(void **)(unaff_EBP - 0x2b3c),
                                                         (int *)(unaff_EBP - 0x33d4));
                          uVar22 = FUN_004ce350(pvVar23,puVar27);
                          if ((char)uVar22 != '\0') {
                            FUN_004013d0((void *)(unaff_EBP - 0x144),1);
                            iVar51 = FUN_004013d0(*(void **)(unaff_EBP - 0x2bb0),1);
                            uVar22 = *puVar26;
                            *(int *)(unaff_EBP - 0x2b70) = iVar51;
                            piVar25 = (int *)(unaff_EBP - 0x3594);
                            pvVar23 = (void *)FUN_004e2320((void *)(uVar22 + 8),1);
                            puVar27 = (uint *)FUN_004014b0(pvVar23,piVar25);
                            pvVar23 = (void *)FUN_00401530(*(void **)(unaff_EBP - 0x2bbc),
                                                           (int *)(unaff_EBP - 0x33e4));
                            uVar22 = FUN_004ce380(pvVar23,puVar27);
                            if ((char)uVar22 != '\0') {
                              piVar25 = (int *)(unaff_EBP - 0x3674);
                              pvVar23 = (void *)FUN_004e2320((void *)(*puVar26 + 8),1);
                              puVar27 = (uint *)FUN_00401530(pvVar23,piVar25);
                              pvVar23 = (void *)FUN_004014b0(*(void **)(unaff_EBP - 0x2bbc),
                                                             (int *)(unaff_EBP - 0x33f4));
                              uVar22 = FUN_004ce350(pvVar23,puVar27);
                              if ((char)uVar22 != '\0') {
                                FUN_004013d0(*(void **)(unaff_EBP - 0x2bb0),2);
                                iVar51 = FUN_004e2320(*(void **)(unaff_EBP - 0x2b60),2);
                                uVar22 = *puVar26;
                                *(int *)(unaff_EBP - 0x2b70) = iVar51;
                                puVar27 = (uint *)FUN_004e2320((void *)(uVar22 + 8),2);
                                pvVar23 = (void *)FUN_00401530(*(void **)(unaff_EBP - 0x2b70),
                                                               (int *)(unaff_EBP - 0x35a4));
                                uVar22 = FUN_004ce380(pvVar23,puVar27);
                                if ((char)uVar22 != '\0') {
                                  FUN_004013d0((void *)(unaff_EBP - 0x144),2);
                                  piVar25 = (int *)(unaff_EBP - 0x3404);
                                  pvVar23 = (void *)FUN_004e2320((void *)(*puVar26 + 8),2);
                                  puVar26 = (uint *)FUN_00401530(pvVar23,piVar25);
                                  pvVar23 = (void *)FUN_004014b0(*(void **)(unaff_EBP - 0x2b70),
                                                                 (int *)(unaff_EBP - 0x36e4));
                                  uVar22 = FUN_004ce350(pvVar23,puVar26);
                                  if ((char)uVar22 != '\0') {
                                    iVar51 = *(int *)(unaff_EBP - 0x2b54);
                                    if (iVar51 == 2) {
                                      uVar22 = *(uint *)(unaff_EBP - 0x2bac) & 0xff;
                                      if (**(float **)(unaff_EBP - 0x2bb4) <= 0.0 &&
                                          **(float **)(unaff_EBP - 0x2bb4) != 0.0) {
                                        uVar22 = 1;
                                      }
                                      *(uint *)(unaff_EBP - 0x2bac) = uVar22;
                                    }
                                    cVar4 = '\0';
                                    *(undefined1 *)(unaff_EBP - 0x2bc5) = 1;
                                    *(undefined1 *)(unaff_EBP - 0x2b29) = 0;
                                    goto LAB_00541f18;
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
                FUN_0052ebf0((void *)(unaff_EBP - 0x2ca4),(undefined4 *)(unaff_EBP - 0x2b70));
                piVar25 = (int *)FUN_00530550(*(void **)(unaff_EBP - 0x2cc4),
                                              (undefined4 *)(unaff_EBP - 0x2e2c));
                bVar5 = FUN_0042c6f0((void *)(unaff_EBP - 0x2ca4),piVar25);
              } while (bVar5);
              uVar52 = *(uint *)(unaff_EBP - 0x2b98);
            }
          }
          if (*(char *)(unaff_EBP - 0x2b31) != '\0') goto LAB_00541f0c;
          iVar31 = *(int *)(unaff_EBP - 0x2bd8);
          uVar22 = *(uint *)(unaff_EBP - 0x2b20);
          pvVar23 = *(void **)(unaff_EBP - 0x2b18);
          uVar52 = uVar52 + 1;
          *(uint *)(unaff_EBP - 0x2b98) = uVar52;
        } while ((int)uVar52 <= iVar31);
        iVar51 = *(int *)(unaff_EBP - 0x2be0);
      }
      uVar22 = uVar22 + 1;
      *(uint *)(unaff_EBP - 0x2b20) = uVar22;
      if (iVar51 < (int)uVar22) break;
      uVar52 = *(uint *)(unaff_EBP - 0x2b9c);
      pvVar23 = *(void **)(unaff_EBP - 0x2b18);
    }
  }
  pvVar23 = *(void **)(unaff_EBP - 0x2b18);
  FUN_00428070((void *)((int)pvVar23 + 0xc),(undefined4 *)(unaff_EBP - 0x2c00));
  piVar25 = (int *)FUN_00530550((void *)((int)pvVar23 + 0xc),(undefined4 *)(unaff_EBP - 0x2e34));
  bVar5 = FUN_0042c6f0((void *)(unaff_EBP - 0x2c00),piVar25);
  if (bVar5) goto LAB_00541ab0;
LAB_00542a32:
  iVar51 = *(int *)(unaff_EBP - 0x2b14);
  goto LAB_00542a38;
LAB_005414e8:
  pvVar23 = *(void **)(unaff_EBP - 0x2b18);
  goto LAB_005414ee;
}


/* FUN_0054687a @ 0054687a  kind=gamemisc  attributed-by=none  size=8010 */

void FUN_0054687a(void)

{
  undefined8 uVar1;
  uint uVar2;
  bool bVar3;
  char cVar4;
  char cVar5;
  uint *puVar6;
  uint uVar7;
  uint *puVar8;
  undefined4 *puVar9;
  uint *puVar10;
  undefined8 *puVar11;
  int *piVar12;
  undefined4 *puVar13;
  int iVar14;
  float *pfVar15;
  float *pfVar16;
  void *pvVar17;
  undefined4 uVar18;
  byte *pbVar19;
  pair<unsigned___int64,unsigned___int64> *ppVar20;
  undefined1 uVar21;
  uint extraout_ECX;
  uint unaff_EBP;
  void *pvVar22;
  float10 fVar23;
  undefined4 uStack00000008;
  uint *puVar24;
  uint *in_stack_ffffffec;
  int iVar25;
  undefined4 uVar26;
  uint uVar27;
  float fVar28;
  float fVar29;
  undefined4 uVar30;
  
LAB_00546880:
  puVar6 = (uint *)FUN_0052eb90((int *)(unaff_EBP - 0x2b50));
  if (puVar6[0x18] != 1) {
    if (puVar6[0x18] != 2) {
      pfVar15 = (float *)FUN_004013d0(puVar6 + 0xf,2);
      *pfVar15 = *pfVar15 - *(float *)(unaff_EBP - 0x2ba0) * 30.0 * 0.25;
      goto LAB_00546a5d;
    }
    uVar27 = 0x5468ae;
    puVar10 = puVar6;
    uVar7 = FUN_00405420(*(void **)(unaff_EBP - 0x2b18),puVar6);
    *(uint *)(unaff_EBP - 0x2b8c) = uVar7;
    if ((uVar7 != 0) && (uVar2 = puVar6[0x1a], (int)uVar2 < 0x4b1)) {
      if ((int)uVar2 < 0x44d) {
        if ((int)uVar2 < 0x321) {
          FUN_00402510(unaff_EBP - 0x344);
          pfVar15 = (float *)(unaff_EBP - 0x167c);
          fVar28 = 0.05;
          iVar25 = *(int *)(unaff_EBP - 0x2b24);
          fVar29 = 5.0;
          puVar10 = puVar6 + 6;
          puVar24 = (uint *)(unaff_EBP - 0x249c);
          puVar8 = FUN_00402cb0((void *)(uVar7 + 0x10),(uint *)(unaff_EBP - 0x24cc),
                                (uint *)(unaff_EBP - 0x344));
          puVar10 = FUN_00402c50(puVar8,puVar24,puVar10);
          pfVar16 = FUN_00402550((void *)(unaff_EBP - 0x1694),(longlong *)puVar10);
          puVar11 = (undefined8 *)FUN_004079f0(pfVar16,pfVar15,fVar29);
          in_stack_ffffffec = (uint *)0x546a2a;
          FUN_0052e7c0((float *)(puVar6 + 0xf),puVar11,iVar25,fVar28);
        }
        else {
          pfVar15 = (float *)(unaff_EBP - 0x164c);
          fVar29 = 10.0;
          in_stack_ffffffec = (uint *)0x546995;
          puVar10 = FUN_00402c50((void *)(uVar7 + 0x10),(uint *)(unaff_EBP - 0x246c),puVar6 + 6);
          pfVar16 = FUN_00402550((void *)(unaff_EBP - 0x1664),(longlong *)puVar10);
          puVar13 = (undefined4 *)FUN_004079f0(pfVar16,pfVar15,fVar29);
          FUN_00401060(puVar6 + 0xf,puVar13);
        }
      }
      else {
        *(float *)(unaff_EBP - 0x2b44) = (float)(int)(uVar2 - 0x44c) / 100.0;
        puVar24 = puVar6 + 6;
        iVar25 = 0x546906;
        FUN_00402a10((ulonglong *)&stack0xfffffff8);
        puVar13 = (undefined4 *)(unaff_EBP - 0x23ac);
        FUN_00402a10((ulonglong *)&stack0xffffffec);
        puVar9 = (undefined4 *)(unaff_EBP - 0x23dc);
        puVar8 = FUN_00402c50((void *)(*(int *)(unaff_EBP - 0x2b8c) + 0x10),
                              (uint *)(unaff_EBP - 0x240c),puVar24);
        puVar9 = FUN_00402bd0(puVar8,puVar9,(uint)in_stack_ffffffec,iVar25);
        puVar10 = FUN_00402bd0(puVar9,puVar13,uVar27,(int)puVar10);
        puVar10 = FUN_00402cb0(puVar24,(uint *)(unaff_EBP - 0x243c),puVar10);
        FUN_00402a40(puVar24,puVar10);
      }
      goto LAB_00546a5d;
    }
    goto LAB_00546b28;
  }
LAB_00546a5d:
  FUN_004e1520((float *)(unaff_EBP - 0x11c),*(float *)(unaff_EBP - 0x2ba0),(float *)(puVar6 + 0xf));
  puVar6[0x1a] = puVar6[0x1a] + *(int *)(unaff_EBP - 0x2b24);
  if ((puVar6[0x18] != 2) && (5000 < (int)puVar6[0x1a])) {
    if (puVar6[0x18] != 3) {
      pvVar22 = *(void **)(unaff_EBP - 0x2b18);
      uVar7 = FUN_00405420(pvVar22,puVar6);
      if (uVar7 != 0) {
        uVar7 = FUN_00405420(pvVar22,puVar6);
        fVar23 = FUN_00412150(uVar7);
        *(float *)(unaff_EBP - 0x2b44) = (float)fVar23;
        uVar7 = FUN_00405420(pvVar22,puVar6);
        *(undefined4 *)(uVar7 + 0x70) = 0;
        uVar7 = FUN_00405420(pvVar22,puVar6);
        uVar27 = FUN_00405420(*(void **)(unaff_EBP - 0x2b18),puVar6);
        fVar23 = FUN_00412150(uVar27);
        *(float *)(unaff_EBP - 0x2b8c) = (float)fVar23;
        *(int *)(uVar7 + 0x6c) =
             (int)((*(float *)(unaff_EBP - 0x2b44) / *(float *)(unaff_EBP - 0x2b8c)) *
                  (float)*(int *)(uVar7 + 0x6c));
      }
    }
    goto LAB_00546b28;
  }
  pvVar22 = *(void **)(unaff_EBP - 0x2b18);
  *(undefined4 *)(unaff_EBP - 0x2b4c) = 0;
  uVar7 = FUN_00405420(pvVar22,puVar6);
  if (uVar7 != 0) {
    uVar7 = FUN_00405420(*(void **)(unaff_EBP - 0x2b18),puVar6);
    *(uint *)(unaff_EBP - 0x2b4c) = uVar7;
  }
  fVar23 = FUN_00401d80((float *)(unaff_EBP - 0x11c));
  *(float *)(unaff_EBP - 0x2b44) = (float)fVar23;
  iVar25 = (int)(*(float *)(unaff_EBP - 0x2b44) * 2.0 + 1.0);
  *(int *)(unaff_EBP - 0x2c08) = iVar25;
  FUN_004f7a70((void *)(unaff_EBP - 0x11c),(float *)(unaff_EBP - 0x40),(float)iVar25);
  FUN_00401060((void *)(unaff_EBP - 0xb0),puVar6 + 0xf);
  fVar23 = FUN_004021b0((float *)(unaff_EBP - 0xb0));
  *(float *)(unaff_EBP - 0x2b44) = (float)fVar23;
  if (0.0 < *(float *)(unaff_EBP - 0x2b44)) {
    FUN_00401fb0((float *)(unaff_EBP - 0xb0));
  }
  FUN_00401610((void *)(unaff_EBP - 0xb0),(float)puVar6[0x15] * 5.0);
  *(float *)(unaff_EBP - 0x2b44) = (float)puVar6[0x15] * 3.0;
  puVar13 = (undefined4 *)FUN_004013d0((void *)(unaff_EBP - 0xb0),2);
  pvVar22 = *(void **)(unaff_EBP - 0x2b18);
  *puVar13 = *(undefined4 *)(unaff_EBP - 0x2b44);
  pvVar22 = (void *)FUN_00405420(pvVar22,puVar6);
  iVar25 = *(int *)(unaff_EBP - 0x2c08);
  *(void **)(unaff_EBP - 0x2b84) = pvVar22;
  *(undefined4 *)(unaff_EBP - 0x2c04) = 0;
  if (0 < iVar25) {
    do {
      pvVar17 = *(void **)(unaff_EBP - 0x2b6c);
      *(undefined1 *)(unaff_EBP - 0x2b58) = 0;
      *(undefined1 *)(unaff_EBP - 0x2b64) = 0;
      FUN_00428070(pvVar17,(undefined4 *)(unaff_EBP - 0x2bac));
      piVar12 = (int *)FUN_00530550(*(void **)(unaff_EBP - 0x2b6c),
                                    (undefined4 *)(unaff_EBP - 0x2d5c));
      bVar3 = FUN_0042c6f0((void *)(unaff_EBP - 0x2bac),piVar12);
      if (bVar3) {
        do {
          iVar25 = FUN_00402bc0((int *)(unaff_EBP - 0x2bac));
          pvVar17 = *(void **)(iVar25 + 8);
          *(void **)(unaff_EBP - 0x2b54) = pvVar17;
          if (((pvVar17 != (void *)0x0) && (0.0 < *(float *)((int)pvVar17 + 0x16c))) &&
             ((((puVar6[0x18] == 3 && ((char)puVar6[0x19] == '\x02')) || (pvVar22 == (void *)0x0))
              || (((pvVar17 != pvVar22 &&
                   (uVar18 = FUN_004d18c0((int)pvVar22,(int)pvVar17), (char)uVar18 != '\0')) &&
                  ((pvVar17 = *(void **)(unaff_EBP - 0x2b54),
                   *(int *)((int)pvVar17 + 8) != *(int *)((int)pvVar22 + 0x11c0) ||
                   (*(int *)((int)pvVar17 + 0xc) != *(int *)((int)pvVar22 + 0x11c4))))))))) {
            *(void **)(unaff_EBP - 0x2b38) = (void *)((int)pvVar17 + 0x80);
            iVar25 = FUN_004013d0((void *)((int)pvVar17 + 0x80),0);
            *(int *)(unaff_EBP - 0x2b1c) = iVar25;
            pvVar17 = (void *)(*(int *)(unaff_EBP - 0x2b54) + 0x10);
            *(void **)(unaff_EBP - 0x2b68) = pvVar17;
            iVar25 = FUN_004e2320(pvVar17,0);
            *(int *)(unaff_EBP - 0x2b48) = iVar25;
            iVar25 = FUN_004e2320(puVar6 + 6,0);
            *(int *)(unaff_EBP - 0x2b90) = iVar25;
            puVar10 = (uint *)FUN_004014b0(*(void **)(unaff_EBP - 0x2b48),
                                           (int *)(unaff_EBP - 0x36ec));
            pvVar17 = (void *)FUN_00401530(*(void **)(unaff_EBP - 0x2b90),
                                           (int *)(unaff_EBP - 0x370c));
            uVar7 = FUN_004ce380(pvVar17,puVar10);
            if ((char)uVar7 != '\0') {
              iVar25 = FUN_004013d0(*(void **)(unaff_EBP - 0x2b38),1);
              pvVar17 = *(void **)(unaff_EBP - 0x2b68);
              *(int *)(unaff_EBP - 0x2bb8) = iVar25;
              iVar25 = FUN_004e2320(pvVar17,1);
              *(int *)(unaff_EBP - 0x2b98) = iVar25;
              iVar25 = FUN_004e2320(puVar6 + 6,1);
              *(int *)(unaff_EBP - 0x2bbc) = iVar25;
              puVar10 = (uint *)FUN_004014b0(*(void **)(unaff_EBP - 0x2b98),
                                             (int *)(unaff_EBP - 0x3484));
              pvVar17 = (void *)FUN_00401530(*(void **)(unaff_EBP - 0x2bbc),
                                             (int *)(unaff_EBP - 0x31c4));
              uVar7 = FUN_004ce380(pvVar17,puVar10);
              if ((char)uVar7 != '\0') {
                iVar25 = FUN_004013d0(*(void **)(unaff_EBP - 0x2b38),2);
                pvVar17 = *(void **)(unaff_EBP - 0x2b68);
                *(int *)(unaff_EBP - 0x2b38) = iVar25;
                iVar25 = FUN_004e2320(pvVar17,2);
                *(int *)(unaff_EBP - 0x2b94) = iVar25;
                iVar25 = FUN_004e2320(puVar6 + 6,2);
                *(int *)(unaff_EBP - 0x2ba8) = iVar25;
                puVar10 = (uint *)FUN_004014b0(*(void **)(unaff_EBP - 0x2b94),
                                               (int *)(unaff_EBP - 0x36f4));
                pvVar17 = (void *)FUN_00401530(*(void **)(unaff_EBP - 0x2ba8),
                                               (int *)(unaff_EBP - 0x31d4));
                uVar7 = FUN_004ce380(pvVar17,puVar10);
                if ((char)uVar7 != '\0') {
                  puVar10 = (uint *)FUN_00401530(*(void **)(unaff_EBP - 0x2b48),
                                                 (int *)(unaff_EBP - 0x3494));
                  pvVar17 = (void *)FUN_004014b0(*(void **)(unaff_EBP - 0x2b90),
                                                 (int *)(unaff_EBP - 0x31a4));
                  uVar7 = FUN_004ce350(pvVar17,puVar10);
                  if ((char)uVar7 != '\0') {
                    puVar10 = (uint *)FUN_00401530(*(void **)(unaff_EBP - 0x2b98),
                                                   (int *)(unaff_EBP - 0x35f4));
                    pvVar17 = (void *)FUN_004014b0(*(void **)(unaff_EBP - 0x2bbc),
                                                   (int *)(unaff_EBP - 0x31f4));
                    uVar7 = FUN_004ce350(pvVar17,puVar10);
                    if ((char)uVar7 != '\0') {
                      puVar10 = (uint *)FUN_00401530(*(void **)(unaff_EBP - 0x2b94),
                                                     (int *)(unaff_EBP - 0x34a4));
                      pvVar17 = (void *)FUN_004014b0(*(void **)(unaff_EBP - 0x2ba8),
                                                     (int *)(unaff_EBP - 0x3204));
                      uVar7 = FUN_004ce350(pvVar17,puVar10);
                      if ((char)uVar7 != '\0') {
                        in_stack_ffffffec = (uint *)0x5476f7;
                        cVar4 = FUN_004d4d80(puVar6 + 6,*(uint **)(unaff_EBP - 0x2b68),'\x01',200.0)
                        ;
                        if (cVar4 != '\0') {
                          if (*(int *)(*(int *)(unaff_EBP - 0x2b54) + 0x128) != 0) {
                            if (pvVar22 != (void *)0x0) {
                              FUN_00530690((void *)((int)pvVar22 + 0x11b4),
                                           (undefined4 *)(unaff_EBP - 0xd0),
                                           (uint *)(*(int *)(unaff_EBP - 0x2b54) + 8));
                            }
                            goto LAB_00547c9b;
                          }
                          uVar7 = puVar6[0x18];
                          if (((uVar7 == 0) && ((char)puVar6[0x17] == '\0')) ||
                             (((uVar7 == 1 || (uVar7 == 4)) && ((char)puVar6[0x17] == '\0')))) {
LAB_005477df:
                            if (uVar7 != 3) {
                              uVar27 = *(uint *)(unaff_EBP - 0x2b58) & 0xff;
                              if (uVar7 != 2) {
                                uVar27 = 1;
                              }
                              *(uint *)(unaff_EBP - 0x2b58) = uVar27;
                            }
                            pvVar22 = *(void **)(unaff_EBP - 0x2b84);
                            if ((((char)puVar6[0x17] == '\0') && (uVar7 != 3)) &&
                               ((uVar7 != 1 && ((uVar7 != 4 && (pvVar22 != (void *)0x0)))))) {
                              iVar25 = rand();
                              uVar7 = puVar6[0x18];
                              fVar29 = (1.0 - ((float)iVar25 * 2.0) / 32767.0) * 0.05 + 0.1;
                              *(float *)(unaff_EBP - 0x2b38) = fVar29;
                              if (uVar7 == 2) {
                                *(float *)(unaff_EBP - 0x2b38) = fVar29 * 0.2;
                              }
                              iVar25 = FUN_004084b0((int)pvVar22);
                              *(float *)(unaff_EBP - 0x2b38) =
                                   ((float)iVar25 / 300.0) * *(float *)(unaff_EBP - 0x2b38);
                              uVar7 = rand();
                              uVar7 = uVar7 & 0x80000007;
                              bVar3 = uVar7 == 0;
                              if ((int)uVar7 < 0) {
                                bVar3 = (uVar7 - 1 | 0xfffffff8) == 0xffffffff;
                              }
                              fVar29 = *(float *)(unaff_EBP - 0x2b38);
                              if (bVar3) {
                                fVar29 = fVar29 * 2.0;
                              }
                              if (((*(char *)(*(int *)(unaff_EBP - 0x2b18) + 0xb4) == '\0') ||
                                  (pvVar22 == *(void **)(*(int *)(unaff_EBP - 0x2b18) + 0xb8))) &&
                                 (fVar29 = *(float *)((int)pvVar22 + 0x170) + fVar29,
                                 *(float *)((int)pvVar22 + 0x170) = fVar29, 1.0 < fVar29)) {
                                *(undefined4 *)((int)pvVar22 + 0x170) = 0x3f800000;
                              }
                            }
                            bVar3 = false;
                            *(undefined1 *)(unaff_EBP - 0x2b40) = 0;
                            if (pvVar22 != (void *)0x0) {
                              bVar3 = FUN_0040f520((int)pvVar22);
                              *(bool *)(unaff_EBP - 0x2b40) = bVar3;
                            }
                            fVar29 = (float)puVar6[0x12];
                            *(float *)(unaff_EBP - 0x2b78) = fVar29;
                            if (bVar3 != false) {
                              fVar29 = fVar29 * 2.0;
                              *(float *)(unaff_EBP - 0x2b78) = fVar29;
                            }
                            pvVar17 = *(void **)(unaff_EBP - 0x2b4c);
                            if ((pvVar17 != (void *)0x0) &&
                               ((pvVar17 == *(void **)(*(int *)(unaff_EBP - 0x2b18) + 0xb8) ||
                                ((*(char *)(*(int *)(unaff_EBP - 0x2b18) + 0xb4) == '\0' &&
                                 (*(char *)((int)pvVar17 + 0x60) != '\0')))))) {
                              bVar3 = FUN_0040f220(pvVar17,0.15);
                              pvVar17 = *(void **)(unaff_EBP - 0x2b4c);
                              if ((bVar3) &&
                                 ((((char)puVar6[0x17] == '\0' &&
                                   (*(char *)((int)pvVar17 + 0x140) == '\x02')) &&
                                  (*(char *)((int)pvVar17 + 0x141) == '\x01')))) {
                                FUN_004029b0((undefined1 *)(unaff_EBP - 0x2f64));
                                pvVar17 = *(void **)(unaff_EBP - 0x2b4c);
                                *(undefined1 *)(unaff_EBP - 0x2f64) = 10;
                                *(undefined4 *)(unaff_EBP - 0x2f5c) = 30000;
                                FUN_00411740(pvVar17,(char *)(unaff_EBP - 0x2f64));
                                FUN_004063d0(unaff_EBP - 0x240);
                                uVar18 = *(undefined4 *)(*(int *)(unaff_EBP - 0x2b4c) + 8);
                                uVar26 = *(undefined4 *)(*(int *)(unaff_EBP - 0x2b4c) + 0xc);
                                *(undefined8 *)(unaff_EBP - 0x230) =
                                     *(undefined8 *)(unaff_EBP - 0x2f64);
                                uVar1 = *(undefined8 *)(unaff_EBP - 0x2f5c);
                                *(undefined4 *)(unaff_EBP - 0x23c) = uVar26;
                                *(undefined4 *)(unaff_EBP - 0x234) = uVar26;
                                iVar25 = *(int *)(unaff_EBP - 0x2b28);
                                *(undefined4 *)(unaff_EBP - 0x240) = uVar18;
                                *(undefined4 *)(unaff_EBP - 0x238) = uVar18;
                                *(undefined8 *)(unaff_EBP - 0x228) = uVar1;
                                *(undefined8 *)(unaff_EBP - 0x220) =
                                     *(undefined8 *)(unaff_EBP - 0x2f54);
                                FUN_00411040((void *)(iVar25 + 0x58),
                                             (undefined8 *)(unaff_EBP - 0x240));
                                FUN_004c8530(unaff_EBP - 0x1ec);
                                iVar25 = *(int *)(unaff_EBP - 0x2b4c);
                                *(undefined4 *)(unaff_EBP - 0x1e0) = 0x2f;
                                FUN_00402550((void *)(unaff_EBP - 0x1ec),(longlong *)(iVar25 + 0x10)
                                            );
                                FUN_00428590((void *)(*(int *)(unaff_EBP - 0x2b28) + 8),
                                             (undefined4 *)(unaff_EBP - 0x1ec));
                                pvVar17 = *(void **)(unaff_EBP - 0x2b4c);
                              }
                              fVar29 = *(float *)(unaff_EBP - 0x2b78);
                            }
                            if (fVar29 < 0.0) {
                              *(undefined4 *)(unaff_EBP - 0x2b78) = 0;
                            }
                            if ((char)puVar6[0x19] == '\x02') {
                              if (((pvVar17 == (void *)0x0) ||
                                  (uVar18 = FUN_004cfcc0((int)pvVar17,*(int *)(unaff_EBP - 0x2b54)),
                                  (char)uVar18 != '\0')) ||
                                 (*(char *)(*(int *)(unaff_EBP - 0x2b54) + 0x60) == '\x06')) {
                                if ((char)puVar6[0x19] != '\x02') goto LAB_00547be8;
                                goto LAB_00547c6a;
                              }
                              FUN_00422a90(unaff_EBP - 0xa28);
                              FUN_00402a40((void *)(unaff_EBP - 0xa08),
                                           *(undefined4 **)(unaff_EBP - 0x2b68));
                              fVar29 = *(float *)(unaff_EBP - 0x2b78);
                              iVar25 = *(int *)(unaff_EBP - 0x2b4c);
                              *(float *)(unaff_EBP - 0xa18) = -fVar29;
                              if (*(char *)(iVar25 + 0x60) == '\x01') {
                                *(float *)(unaff_EBP - 0xa18) = -fVar29 * 0.5;
                              }
                              iVar25 = *(int *)(unaff_EBP - 0x2b54);
                              *(undefined1 *)(unaff_EBP - 0xa14) =
                                   *(undefined1 *)(unaff_EBP - 0x2b40);
                              *(uint *)(unaff_EBP - 0xa28) = *puVar6;
                              *(uint *)(unaff_EBP - 0xa24) = puVar6[1];
                              *(undefined4 *)(unaff_EBP - 0xa20) = *(undefined4 *)(iVar25 + 8);
                              pvVar17 = *(void **)(unaff_EBP - 0x2b28);
                              *(undefined4 *)(unaff_EBP - 0xa1c) = *(undefined4 *)(iVar25 + 0xc);
                              FUN_00428400(pvVar17,(undefined4 *)(unaff_EBP - 0xa28));
                              pvVar17 = *(void **)(unaff_EBP - 0x2b18);
                              if (*(char *)((int)pvVar17 + 0xb4) == '\0') {
LAB_00547bbe:
                                FUN_004cea80(pvVar17,(uint *)(unaff_EBP - 0xa28),
                                             *(void **)(unaff_EBP - 0x2b28),
                                             (undefined4 *)(unaff_EBP - 0x2be8));
                                goto LAB_00547c6a;
                              }
                              iVar25 = *(int *)(unaff_EBP - 0x2b54);
                              if ((*(int *)(unaff_EBP - 0x2b4c) == *(int *)((int)pvVar17 + 0xb8)) &&
                                 (iVar25 == *(int *)((int)pvVar17 + 0xb8))) goto LAB_00547bbe;
                            }
                            else {
LAB_00547be8:
                              cVar4 = '\x01';
                              iVar25 = FUN_0052eb90((int *)(unaff_EBP - 0x2b50));
                              in_stack_ffffffec = (uint *)(unaff_EBP - 0x2be8);
                              cVar4 = FUN_004cfd50(*(void **)(unaff_EBP - 0x2b18),
                                                   *(float *)(unaff_EBP - 0x2b54),pvVar22,
                                                   *(float *)(unaff_EBP - 0x2b78),
                                                   (char)*(undefined4 *)(unaff_EBP - 0x2b40),
                                                   (char)puVar6[0x17],(float)puVar6[0x15],puVar6 + 6
                                                   ,(float *)(unaff_EBP - 0xb0),
                                                   *(undefined4 **)(unaff_EBP - 0x2b28),
                                                   in_stack_ffffffec,puVar6[0x18] == 1,0,iVar25,
                                                   cVar4);
                              uVar7 = *(uint *)(unaff_EBP - 0x2b64) & 0xff;
                              if (cVar4 != '\0') {
                                uVar7 = 1;
                              }
                              *(uint *)(unaff_EBP - 0x2b64) = uVar7;
LAB_00547c6a:
                              iVar25 = *(int *)(unaff_EBP - 0x2b54);
                            }
                            if (*(int *)(iVar25 + 0x134) < (int)puVar6[0x1b]) {
                              *(uint *)(iVar25 + 0x134) = puVar6[0x1b];
                            }
                          }
                          else {
                            if (uVar7 == 3) {
                              uVar7 = puVar6[0x18];
                              if ((int)puVar6[0x1a] / 1000 !=
                                  (int)(puVar6[0x1a] - *(int *)(unaff_EBP - 0x2b24)) / 1000)
                              goto LAB_005477df;
                              pvVar22 = *(void **)(unaff_EBP - 0x2b84);
                            }
                            if (((300 < (int)puVar6[0x1a]) && (uVar7 == 2)) &&
                               ((int)puVar6[0x1a] / 100 !=
                                (int)(puVar6[0x1a] - *(int *)(unaff_EBP - 0x2b24)) / 100)) {
                              uVar7 = puVar6[0x18];
                              goto LAB_005477df;
                            }
                          }
                          uVar7 = puVar6[0x18];
                          if (((uVar7 == 0) || (uVar7 == 1)) || (uVar7 == 4)) {
                            *(undefined1 *)(unaff_EBP - 0x2b58) = 1;
                            break;
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
            if (*(char *)(unaff_EBP - 0x2b58) != '\0') break;
          }
LAB_00547c9b:
          FUN_00407a30((void *)(unaff_EBP - 0x2bac),(int *)(unaff_EBP - 0x2c44));
          piVar12 = (int *)FUN_00530550(*(void **)(unaff_EBP - 0x2b6c),
                                        (undefined4 *)(unaff_EBP - 0x2d5c));
          bVar3 = FUN_0042c6f0((void *)(unaff_EBP - 0x2bac),piVar12);
        } while (bVar3);
      }
      if (puVar6[0x18] != 3) {
        if ((puVar6[0x18] == 2) &&
           ((int)puVar6[0x1a] / 200 != (int)(puVar6[0x1a] - *(int *)(unaff_EBP - 0x2b24)) / 200)) {
          FUN_004c8530(unaff_EBP - 0x1d4);
          FUN_00402550((void *)(unaff_EBP - 0x1d4),(longlong *)(puVar6 + 6));
          iVar14 = rand();
          iVar25 = *(int *)(unaff_EBP - 0x2b28);
          *(undefined4 *)(unaff_EBP - 0x1c8) = 0xf;
          *(float *)(unaff_EBP - 0x1c4) = ((float)iVar14 * 0.25) / 32767.0 + 1.0;
          FUN_00428590((void *)(iVar25 + 8),(undefined4 *)(unaff_EBP - 0x1d4));
        }
        FUN_00402510(unaff_EBP - 0x368);
        puVar10 = puVar6 + 6;
        FUN_00402e30(puVar10,(uint *)(unaff_EBP - 0x368));
        uVar7 = puVar6[0x13];
        FUN_00401080((void *)(unaff_EBP - 0x16ac),uVar7,uVar7,uVar7);
        FUN_00402510(unaff_EBP - 0x458);
        FUN_00402c50(puVar10,(uint *)(unaff_EBP - 0x24fc),(uint *)(unaff_EBP - 0x458));
        uVar7 = puVar6[0x13];
        FUN_00401080((void *)(unaff_EBP - 0x16c4),uVar7,uVar7,uVar7);
        FUN_00402510(unaff_EBP - 0x4a0);
        FUN_00402cb0(puVar10,(uint *)(unaff_EBP - 0x252c),(uint *)(unaff_EBP - 0x4a0));
        *(undefined1 *)(unaff_EBP - 0x2b31) = 0;
        iVar25 = FUN_004e2320(puVar10,2);
        *(int *)(unaff_EBP - 0x2b38) = iVar25;
        iVar25 = FUN_004e2320(puVar10,1);
        *(int *)(unaff_EBP - 0x2b1c) = iVar25;
        puVar8 = (uint *)FUN_004e2320(puVar10,0);
        puVar24 = *(uint **)(unaff_EBP - 0x2b38);
        uVar7 = puVar24[1];
        *(uint **)(unaff_EBP - 0x2b44) = puVar8;
        in_stack_ffffffec = (uint *)**(undefined4 **)(unaff_EBP - 0x2b1c);
        iVar25 = FUN_00406050(*(void **)(unaff_EBP - 0x2b18),*puVar8,puVar8[1],
                              (uint)in_stack_ffffffec,(*(undefined4 **)(unaff_EBP - 0x2b1c))[1],
                              *puVar24,uVar7,0);
        uVar18 = FUN_004061f0(iVar25);
        if ((char)uVar18 == '\0') {
          fVar23 = FUN_00401d80((float *)(puVar6 + 0xf));
          *(float *)(unaff_EBP - 0x2b44) = (float)fVar23;
          fVar29 = *(float *)(unaff_EBP - 0x2b44) * *(float *)(unaff_EBP - 0x2ba0);
          cVar5 = '\x01';
          cVar4 = '\0';
          pfVar15 = (float *)(unaff_EBP - 0x170c);
          *(float *)(unaff_EBP - 0x2b44) = fVar29;
          pfVar16 = FUN_00412670(puVar6 + 0xf,(float *)(unaff_EBP - 0x1724));
          pfVar15 = FUN_0052ec30(pfVar16,pfVar15);
          in_stack_ffffffec = puVar10;
          fVar23 = (float10)FUN_004d6730(*(void **)(unaff_EBP - 0x2b18),puVar10,pfVar15,fVar29,cVar4
                                         ,cVar5);
          *(float *)(unaff_EBP - 0x2b8c) = (float)fVar23;
          if (*(float *)(unaff_EBP - 0x2b8c) <= *(float *)(unaff_EBP - 0x2b44) &&
              *(float *)(unaff_EBP - 0x2b44) != *(float *)(unaff_EBP - 0x2b8c)) {
            *(undefined1 *)(unaff_EBP - 0x2b31) = 1;
            FUN_00402510(unaff_EBP - 0x9b0);
            FUN_00402e80(puVar10,(uint *)(unaff_EBP - 0x9b0));
          }
LAB_00548093:
          cVar4 = *(char *)(unaff_EBP - 0x2b31);
        }
        else {
          FUN_00402510(unaff_EBP - 0x488);
          FUN_00402e80(puVar10,(uint *)(unaff_EBP - 0x488));
          uVar7 = puVar6[0x18];
          cVar4 = '\x01';
          *(undefined1 *)(unaff_EBP - 0x2b31) = 1;
          if (uVar7 == 0) {
            FUN_004c8510(unaff_EBP - 0x968);
            fVar29 = 255.0;
            pfVar15 = (float *)(unaff_EBP - 0x2c0);
            pbVar19 = (byte *)FUN_00406050(*(void **)(unaff_EBP - 0x2b18),
                                           **(uint **)(unaff_EBP - 0x2b44),
                                           (*(uint **)(unaff_EBP - 0x2b44))[1],
                                           **(uint **)(unaff_EBP - 0x2b1c),
                                           (*(uint **)(unaff_EBP - 0x2b1c))[1],
                                           **(uint **)(unaff_EBP - 0x2b38),
                                           (*(uint **)(unaff_EBP - 0x2b38))[1],0);
            pfVar16 = FUN_004c6470((void *)(unaff_EBP - 0x16dc),pbVar19);
            FUN_004f7a70(pfVar16,pfVar15,fVar29);
            uVar30 = 0x3f800000;
            puVar13 = (undefined4 *)FUN_004013d0((void *)(unaff_EBP - 0x2c0),2);
            uVar18 = *puVar13;
            puVar13 = (undefined4 *)FUN_004013d0((void *)(unaff_EBP - 0x2c0),1);
            uVar26 = *puVar13;
            puVar13 = (undefined4 *)FUN_004013d0((void *)(unaff_EBP - 0x2c0),0);
            in_stack_ffffffec = (uint *)0x547f87;
            ppVar20 = (pair<unsigned___int64,unsigned___int64> *)
                      FUN_004010b0((void *)(unaff_EBP - 0x1b9c),*puVar13,uVar26,uVar18,uVar30);
            std::pair<unsigned___int64,unsigned___int64>::
            operator=<std::pair<unsigned___int64,unsigned___int64>,0>
                      ((pair<unsigned___int64,unsigned___int64> *)(unaff_EBP - 0x944),ppVar20);
            *(undefined4 *)(unaff_EBP - 0x930) = 4;
            *(undefined4 *)(unaff_EBP - 0x934) = 0x3dcccccd;
            puVar13 = FUN_00401080((void *)(unaff_EBP - 0x16f4),0,0,0x41200000);
            FUN_00401060((void *)(unaff_EBP - 0x950),puVar13);
            FUN_00402a40((void *)(unaff_EBP - 0x968),puVar10);
            FUN_00428540((void *)(*(int *)(unaff_EBP - 0x2b28) + 0x10),
                         (undefined4 *)(unaff_EBP - 0x968));
            goto LAB_00548093;
          }
        }
        cVar5 = (char)*(undefined4 *)(unaff_EBP - 0x2b58);
        pvVar22 = *(void **)(unaff_EBP - 0x2b84);
        if ((((cVar5 == '\0') && (cVar4 != '\0')) && (puVar6[0x18] != 3)) &&
           (pvVar22 != (void *)0x0)) {
          fVar23 = FUN_00412150((int)pvVar22);
          *(float *)(unaff_EBP - 0x2b44) = (float)fVar23;
          *(undefined4 *)((int)pvVar22 + 0x70) = 0;
          fVar23 = FUN_00412150((int)pvVar22);
          *(float *)(unaff_EBP - 0x2b8c) = (float)fVar23;
          *(int *)((int)pvVar22 + 0x6c) =
               (int)((*(float *)(unaff_EBP - 0x2b44) / *(float *)(unaff_EBP - 0x2b8c)) *
                    (float)*(int *)((int)pvVar22 + 0x6c));
          cVar5 = (char)*(undefined4 *)(unaff_EBP - 0x2b58);
        }
        if (puVar6[0x18] == 2) {
          if (((char)*(undefined4 *)(unaff_EBP - 0x2b64) != '\0') && (pvVar22 != (void *)0x0)) {
            *(int *)((int)pvVar22 + 0x70) = *(int *)((int)pvVar22 + 0x70) + 1;
            FUN_004103a0((int)pvVar22);
            *(undefined4 *)((int)pvVar22 + 0x74) = 0;
          }
          if (*(char *)(unaff_EBP - 0x2b31) != '\0') {
            if (puVar6[0x18] != 2) {
              FUN_004c8530(unaff_EBP - 0x1b0);
              FUN_00402550((void *)(unaff_EBP - 0x1b0),(longlong *)(puVar6 + 6));
              iVar14 = rand();
              iVar25 = *(int *)(unaff_EBP - 0x2b28);
              *(undefined4 *)(unaff_EBP - 0x1a4) = 0x13;
              *(float *)(unaff_EBP - 0x1a0) = ((float)iVar14 * 0.4) / 32767.0 + 1.0;
              FUN_00428590((void *)(iVar25 + 8),(undefined4 *)(unaff_EBP - 0x1b0));
              goto LAB_00546b28;
            }
            puVar13 = FUN_00401080((void *)(unaff_EBP - 0x173c),0,0,0);
            FUN_00401060(puVar6 + 0xf,puVar13);
          }
        }
        else if ((cVar5 != '\0') || (*(char *)(unaff_EBP - 0x2b31) != '\0')) {
          if ((puVar6[0x18] != 1) && ((char)puVar6[0x17] == '\0')) goto LAB_005488d0;
          if (cVar5 == '\0') {
            FUN_004c8530(unaff_EBP - 0x7c);
            FUN_00402550((void *)(unaff_EBP - 0x7c),(longlong *)(puVar6 + 6));
            iVar25 = rand();
            uVar7 = puVar6[0x18];
            *(float *)(unaff_EBP - 0x6c) = ((float)iVar25 * 0.4) / 32767.0 + 1.0;
            if (uVar7 == 1) {
              uVar18 = 0x27;
              if ((char)puVar6[0x19] == '\x02') {
                uVar18 = 0x2a;
              }
              *(undefined4 *)(unaff_EBP - 0x70) = uVar18;
            }
            else {
              *(undefined4 *)(unaff_EBP - 0x70) = 0x14;
            }
            FUN_00428590((void *)(*(int *)(unaff_EBP - 0x2b28) + 8),(undefined4 *)(unaff_EBP - 0x7c)
                        );
          }
          pvVar17 = *(void **)(unaff_EBP - 0x2b6c);
          *(char *)(unaff_EBP - 0x2bfc) = (char)puVar6[0x17];
          FUN_00428070(pvVar17,(undefined4 *)(unaff_EBP - 0x2bdc));
          piVar12 = (int *)FUN_00530550(*(void **)(unaff_EBP - 0x2b6c),
                                        (undefined4 *)(unaff_EBP - 0x2d64));
          bVar3 = FUN_0042c6f0((void *)(unaff_EBP - 0x2bdc),piVar12);
          if (!bVar3) goto LAB_005488d0;
          iVar25 = FUN_004e2320(puVar6 + 6,0);
          *(int *)(unaff_EBP - 0x2b48) = iVar25;
          iVar25 = FUN_004e2320(puVar6 + 6,1);
          *(int *)(unaff_EBP - 0x2bb8) = iVar25;
          iVar25 = FUN_004e2320(puVar6 + 6,2);
          *(int *)(unaff_EBP - 0x2b98) = iVar25;
          goto LAB_00548313;
        }
      }
      iVar25 = *(int *)(unaff_EBP - 0x2c04) + 1;
      *(int *)(unaff_EBP - 0x2c04) = iVar25;
      if (*(int *)(unaff_EBP - 0x2c08) <= iVar25) break;
      pvVar22 = *(void **)(unaff_EBP - 0x2b84);
    } while( true );
  }
  goto LAB_00546b3a;
LAB_00548313:
  do {
    iVar25 = FUN_00402bc0((int *)(unaff_EBP - 0x2bdc));
    pvVar17 = *(void **)(iVar25 + 8);
    *(void **)(unaff_EBP - 0x2b68) = pvVar17;
    if (pvVar17 != (void *)0x0) {
      iVar25 = *(int *)(unaff_EBP - 0x2b4c);
      if (((iVar25 != 0) && (*(char *)(*(int *)(unaff_EBP - 0x2b18) + 0xb4) == '\0')) &&
         ((*(char *)(iVar25 + 0x60) == '\0' &&
          (iVar25 != *(int *)(*(int *)(unaff_EBP - 0x2b18) + 0xb8))))) break;
      if ((pvVar22 == (void *)0x0) ||
         (((pvVar17 != pvVar22 &&
           (uVar18 = FUN_004d18c0((int)pvVar22,(int)pvVar17), (char)uVar18 != '\0')) &&
          (((pvVar17 = *(void **)(unaff_EBP - 0x2b68),
            *(int *)((int)pvVar17 + 8) != *(int *)((int)pvVar22 + 0x11c0) ||
            (*(int *)((int)pvVar17 + 0xc) != *(int *)((int)pvVar22 + 0x11c4))) &&
           (0.0 < *(float *)((int)pvVar17 + 0x16c))))))) {
        *(void **)(unaff_EBP - 0x2b38) = (void *)((int)pvVar17 + 0x80);
        iVar25 = FUN_004013d0((void *)((int)pvVar17 + 0x80),0);
        *(int *)(unaff_EBP - 0x2b1c) = iVar25;
        pvVar17 = (void *)(*(int *)(unaff_EBP - 0x2b68) + 0x10);
        *(void **)(unaff_EBP - 0x2b94) = pvVar17;
        pvVar17 = (void *)FUN_004e2320(pvVar17,0);
        *(void **)(unaff_EBP - 0x2b44) = pvVar17;
        puVar10 = (uint *)FUN_004014b0(pvVar17,(int *)(unaff_EBP - 0x36a4));
        pvVar17 = (void *)FUN_00401530(*(void **)(unaff_EBP - 0x2b48),(int *)(unaff_EBP - 0x3214));
        uVar7 = FUN_004ce380(pvVar17,puVar10);
        if ((char)uVar7 != '\0') {
          iVar25 = FUN_004013d0(*(void **)(unaff_EBP - 0x2b38),1);
          pvVar17 = *(void **)(unaff_EBP - 0x2b94);
          *(int *)(unaff_EBP - 0x2b90) = iVar25;
          pvVar17 = (void *)FUN_004e2320(pvVar17,1);
          *(void **)(unaff_EBP - 0x2b8c) = pvVar17;
          puVar10 = (uint *)FUN_004014b0(pvVar17,(int *)(unaff_EBP - 0x34b4));
          pvVar17 = (void *)FUN_00401530(*(void **)(unaff_EBP - 0x2bb8),(int *)(unaff_EBP - 0x3224))
          ;
          uVar7 = FUN_004ce380(pvVar17,puVar10);
          if ((char)uVar7 != '\0') {
            iVar25 = FUN_004013d0(*(void **)(unaff_EBP - 0x2b38),2);
            pvVar17 = *(void **)(unaff_EBP - 0x2b94);
            *(int *)(unaff_EBP - 0x2b38) = iVar25;
            pvVar17 = (void *)FUN_004e2320(pvVar17,2);
            *(void **)(unaff_EBP - 0x2bcc) = pvVar17;
            puVar10 = (uint *)FUN_004014b0(pvVar17,(int *)(unaff_EBP - 0x3604));
            pvVar17 = (void *)FUN_00401530(*(void **)(unaff_EBP - 0x2b98),
                                           (int *)(unaff_EBP - 0x3234));
            uVar7 = FUN_004ce380(pvVar17,puVar10);
            if ((char)uVar7 != '\0') {
              puVar10 = (uint *)FUN_00401530(*(void **)(unaff_EBP - 0x2b44),
                                             (int *)(unaff_EBP - 0x34c4));
              pvVar17 = (void *)FUN_004014b0(*(void **)(unaff_EBP - 0x2b48),
                                             (int *)(unaff_EBP - 0x3244));
              uVar7 = FUN_004ce350(pvVar17,puVar10);
              if ((char)uVar7 != '\0') {
                puVar10 = (uint *)FUN_00401530(*(void **)(unaff_EBP - 0x2b8c),
                                               (int *)(unaff_EBP - 0x3724));
                pvVar17 = (void *)FUN_004014b0(*(void **)(unaff_EBP - 0x2bb8),
                                               (int *)(unaff_EBP - 0x3254));
                uVar7 = FUN_004ce350(pvVar17,puVar10);
                if ((char)uVar7 != '\0') {
                  puVar10 = (uint *)FUN_00401530(*(void **)(unaff_EBP - 0x2bcc),
                                                 (int *)(unaff_EBP - 0x34d4));
                  pvVar17 = (void *)FUN_004014b0(*(void **)(unaff_EBP - 0x2b98),
                                                 (int *)(unaff_EBP - 0x3264));
                  uVar7 = FUN_004ce350(pvVar17,puVar10);
                  if ((char)uVar7 != '\0') {
                    in_stack_ffffffec = (uint *)0x548637;
                    cVar4 = FUN_004d4d80(puVar6 + 6,*(uint **)(unaff_EBP - 0x2b94),'\x01',200.0);
                    if (cVar4 != '\0') {
                      if ((*(int *)(*(int *)(unaff_EBP - 0x2b68) + 0x128) == 0) ||
                         (pvVar22 == (void *)0x0)) {
                        iVar25 = *(int *)(unaff_EBP - 0x2b4c);
                        uVar7 = extraout_ECX & 0xffffff00;
                        *(undefined1 *)(unaff_EBP - 0x2c00) = 0;
                        *(uint *)(unaff_EBP - 0x2b44) = uVar7;
                        pvVar17 = (void *)0x0;
                        if (iVar25 != 0) {
                          bVar3 = FUN_0040f520(iVar25);
                          uVar7 = *(uint *)(unaff_EBP - 0x2b44) & 0xff;
                          if (bVar3) {
                            uVar7 = 1;
                          }
                          pvVar17 = *(void **)(unaff_EBP - 0x2b4c);
                          *(char *)(unaff_EBP - 0x2c00) = (char)uVar7;
                        }
                        fVar29 = (float)puVar6[0x12];
                        *(float *)(unaff_EBP - 0x2b38) = fVar29;
                        if ((char)uVar7 != '\0') {
                          *(float *)(unaff_EBP - 0x2b38) = fVar29 * 2.0;
                        }
                        if ((((pvVar17 != (void *)0x0) &&
                             ((pvVar17 == *(void **)(*(int *)(unaff_EBP - 0x2b18) + 0xb8) ||
                              ((*(char *)(*(int *)(unaff_EBP - 0x2b18) + 0xb4) == '\0' &&
                               (*(char *)((int)pvVar17 + 0x60) != '\0')))))) &&
                            (bVar3 = FUN_0040f220(pvVar17,0.25), bVar3)) &&
                           (((*(char *)(unaff_EBP - 0x2bfc) == '\0' && (puVar6[0x18] == 1)) &&
                            ((char)puVar6[0x19] == '\x01')))) {
                          FUN_004029b0((undefined1 *)(unaff_EBP - 0x2f7c));
                          pvVar17 = *(void **)(unaff_EBP - 0x2b4c);
                          *(undefined1 *)(unaff_EBP - 0x2f7c) = 9;
                          *(undefined4 *)(unaff_EBP - 0x2f74) = 30000;
                          FUN_00411740(pvVar17,(char *)(unaff_EBP - 0x2f7c));
                          FUN_004063d0(unaff_EBP - 0x2e6c);
                          uVar18 = *(undefined4 *)(*(int *)(unaff_EBP - 0x2b4c) + 8);
                          uVar26 = *(undefined4 *)(*(int *)(unaff_EBP - 0x2b4c) + 0xc);
                          *(undefined8 *)(unaff_EBP - 0x2e5c) = *(undefined8 *)(unaff_EBP - 0x2f7c);
                          uVar1 = *(undefined8 *)(unaff_EBP - 0x2f74);
                          *(undefined4 *)(unaff_EBP - 0x2e68) = uVar26;
                          *(undefined4 *)(unaff_EBP - 0x2e60) = uVar26;
                          iVar25 = *(int *)(unaff_EBP - 0x2b28);
                          *(undefined4 *)(unaff_EBP - 0x2e6c) = uVar18;
                          *(undefined4 *)(unaff_EBP - 0x2e64) = uVar18;
                          *(undefined8 *)(unaff_EBP - 0x2e54) = uVar1;
                          *(undefined8 *)(unaff_EBP - 0x2e4c) = *(undefined8 *)(unaff_EBP - 0x2f6c);
                          FUN_00411040((void *)(iVar25 + 0x58),(undefined8 *)(unaff_EBP - 0x2e6c));
                          FUN_004c8530(unaff_EBP - 0x204);
                          iVar25 = *(int *)(unaff_EBP - 0x2b4c);
                          *(undefined4 *)(unaff_EBP - 0x1f8) = 0x2f;
                          FUN_00402550((void *)(unaff_EBP - 0x204),(longlong *)(iVar25 + 0x10));
                          FUN_00428590((void *)(*(int *)(unaff_EBP - 0x2b28) + 8),
                                       (undefined4 *)(unaff_EBP - 0x204));
                        }
                        cVar4 = '\x01';
                        iVar25 = FUN_0052eb90((int *)(unaff_EBP - 0x2b50));
                        in_stack_ffffffec = (uint *)(unaff_EBP - 0x2be8);
                        cVar4 = FUN_004cfd50(*(void **)(unaff_EBP - 0x2b18),
                                             *(float *)(unaff_EBP - 0x2b68),pvVar22,
                                             *(float *)(unaff_EBP - 0x2b38),
                                             (char)*(undefined4 *)(unaff_EBP - 0x2c00),
                                             (char)*(undefined4 *)(unaff_EBP - 0x2bfc),
                                             (float)puVar6[0x15],puVar6 + 6,
                                             (float *)(unaff_EBP - 0xb0),
                                             *(undefined4 **)(unaff_EBP - 0x2b28),in_stack_ffffffec,
                                             puVar6[0x18] == 1,0,iVar25,cVar4);
                        uVar21 = (undefined1)*(undefined4 *)(unaff_EBP - 0x2b64);
                        if (cVar4 != '\0') {
                          uVar21 = 1;
                        }
                        *(undefined1 *)(unaff_EBP - 0x2b64) = uVar21;
                      }
                      else {
                        FUN_00530690((void *)((int)pvVar22 + 0x11b4),
                                     (undefined4 *)(unaff_EBP - 0x3074),
                                     (uint *)(*(int *)(unaff_EBP - 0x2b68) + 8));
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
    FUN_00407a30((void *)(unaff_EBP - 0x2bdc),(int *)(unaff_EBP - 0x2ce0));
    piVar12 = (int *)FUN_00530550(*(void **)(unaff_EBP - 0x2b6c),(undefined4 *)(unaff_EBP - 0x2d64))
    ;
    bVar3 = FUN_0042c6f0((void *)(unaff_EBP - 0x2bdc),piVar12);
  } while (bVar3);
LAB_005488d0:
  if ((((char)*(undefined4 *)(unaff_EBP - 0x2b64) != '\0') && (puVar6[0x18] != 3)) &&
     (pvVar22 != (void *)0x0)) {
    *(int *)((int)pvVar22 + 0x70) = *(int *)((int)pvVar22 + 0x70) + 1;
    FUN_004103a0((int)pvVar22);
    *(undefined4 *)((int)pvVar22 + 0x74) = 0;
  }
  if ((puVar6[0x18] == 1) && ((char)puVar6[0x19] == '\x02')) {
    puVar6[0x18] = 3;
    uVar7 = 3000;
    if ((char)puVar6[0x17] != '\0') {
      uVar7 = 0;
    }
    puVar6[0x1a] = uVar7;
    puVar6[0x12] = (uint)((float)puVar6[0x12] * 0.05);
    puVar6[0x13] = (uint)((float)puVar6[0x15] * 5.0 + 5.0);
    puVar6[0x15] = 0;
    *(undefined1 *)(puVar6 + 0x17) = 0;
  }
  else {
LAB_00546b28:
    FUN_004d6620((void *)(unaff_EBP - 0x2c20),(undefined4 *)(unaff_EBP - 0x2b50));
  }
LAB_00546b3a:
  FUN_0052ebf0((void *)(unaff_EBP - 0x2b50),(undefined4 *)(unaff_EBP - 0x2bc0));
  pvVar22 = (void *)(*(int *)(unaff_EBP - 0x2b18) + 0x14);
  piVar12 = (int *)FUN_00530550(pvVar22,(undefined4 *)(unaff_EBP - 0x2d6c));
  bVar3 = FUN_0042c6f0((void *)(unaff_EBP - 0x2b50),piVar12);
  if (!bVar3) {
    FUN_00428070((void *)(unaff_EBP - 0x2c20),(undefined4 *)(unaff_EBP - 0x2b68));
    piVar12 = (int *)FUN_00530550((void *)(unaff_EBP - 0x2c20),(undefined4 *)(unaff_EBP - 0x2d7c));
    bVar3 = FUN_0042c6f0((void *)(unaff_EBP - 0x2b68),piVar12);
    if (bVar3) {
      do {
        puVar13 = (undefined4 *)FUN_0052eb90((int *)(unaff_EBP - 0x2b68));
        FUN_005305b0(pvVar22,(int *)(unaff_EBP - 0x2bc0),(int *)*puVar13);
        FUN_0052ebf0((void *)(unaff_EBP - 0x2b68),(undefined4 *)(unaff_EBP - 0x2c44));
        piVar12 = (int *)FUN_00530550((void *)(unaff_EBP - 0x2c20),
                                      (undefined4 *)(unaff_EBP - 0x2d7c));
        bVar3 = FUN_0042c6f0((void *)(unaff_EBP - 0x2b68),piVar12);
      } while (bVar3);
    }
    *(undefined1 *)(unaff_EBP - 4) = 5;
    FUN_00423710((int *)(unaff_EBP - 0x2c20));
    FUN_00428070(*(void **)(unaff_EBP - 0x2b6c),(undefined4 *)(unaff_EBP - 0x2b68));
    piVar12 = (int *)FUN_00530550(*(void **)(unaff_EBP - 0x2b6c),(undefined4 *)(unaff_EBP - 0x2d84))
    ;
    bVar3 = FUN_0042c6f0((void *)(unaff_EBP - 0x2b68),piVar12);
    if (bVar3) {
      do {
        iVar14 = FUN_00402bc0((int *)(unaff_EBP - 0x2b68));
        iVar25 = *(int *)(iVar14 + 8);
        if (iVar25 != 0) {
          puVar6 = (uint *)(iVar25 + 0x11d0);
          uVar7 = FUN_00405420(*(void **)(unaff_EBP - 0x2b18),puVar6);
          if ((uVar7 != 0) &&
             (uVar7 = FUN_00405420(*(void **)(unaff_EBP - 0x2b18),puVar6),
             *(float *)(uVar7 + 0x16c) <= 0.0)) {
            *puVar6 = 0;
            *(undefined4 *)(iVar25 + 0x11d4) = 0;
          }
          iVar25 = *(int *)(iVar14 + 8);
          *(int *)(unaff_EBP - 0x2b94) = iVar25;
          if (*(char *)(iVar25 + 0x60) == '\x05') {
            puVar6 = (uint *)(iVar25 + 0x198);
            uVar7 = FUN_00405420(*(void **)(unaff_EBP - 0x2b18),puVar6);
            if ((uVar7 != 0) &&
               (uVar7 = FUN_00405420(*(void **)(unaff_EBP - 0x2b18),puVar6),
               *(char *)(uVar7 + 0x68) == 'j')) {
              uVar7 = FUN_00405420(*(void **)(unaff_EBP - 0x2b18),puVar6);
              *(uint *)(unaff_EBP - 0x2b40) = uVar7;
              pfVar15 = (float *)FUN_004013d0((void *)(iVar25 + 0x80),2);
              pfVar16 = (float *)FUN_004013d0((void *)(uVar7 + 0x80),2);
              FUN_00401080((void *)(unaff_EBP - 0x1754),0,0,(*pfVar15 * 0.5 - *pfVar16 * 0.5) + 0.01
                          );
              FUN_00402510(unaff_EBP - 0x344);
              puVar6 = FUN_00402cb0((void *)(*(int *)(unaff_EBP - 0x2b40) + 0x1350),
                                    (uint *)(unaff_EBP - 0x255c),(uint *)(unaff_EBP - 0x344));
              FUN_00402a40((void *)(*(int *)(unaff_EBP - 0x2b94) + 0x1350),puVar6);
              FUN_00401060((void *)(*(int *)(unaff_EBP - 0x2b94) + 0x1374),
                           (undefined4 *)(*(int *)(unaff_EBP - 0x2b40) + 0x1374));
              FUN_00401080((void *)(unaff_EBP - 0x176c),0,0,(*pfVar15 * 0.5 - *pfVar16 * 0.5) + 0.01
                          );
              FUN_00402510(unaff_EBP - 0x368);
              iVar25 = *(int *)(unaff_EBP - 0x2b40);
              puVar6 = FUN_00402cb0((void *)(iVar25 + 0x10),(uint *)(unaff_EBP - 0x258c),
                                    (uint *)(unaff_EBP - 0x368));
              iVar14 = *(int *)(unaff_EBP - 0x2b94);
              FUN_00402a40((void *)(iVar14 + 0x10),puVar6);
              FUN_00401060((void *)(iVar14 + 0x28),(undefined4 *)(iVar25 + 0x28));
              *(undefined4 *)(iVar14 + 0x1180) = *(undefined4 *)(iVar25 + 0x1180);
              *(undefined4 *)(iVar14 + 0x1188) = *(undefined4 *)(iVar25 + 0x1188);
              *(undefined4 *)(iVar14 + 0x118c) = *(undefined4 *)(iVar25 + 0x118c);
              puVar13 = FUN_00401080((void *)(unaff_EBP - 0x1784),0,0,0);
              FUN_00401060((void *)(iVar14 + 0x34),puVar13);
              puVar13 = FUN_00401080((void *)(unaff_EBP - 0x179c),0,0,0);
              FUN_00401060((void *)(iVar14 + 0x40),puVar13);
            }
          }
        }
        FUN_00407a30((void *)(unaff_EBP - 0x2b68),(int *)(unaff_EBP - 0x2bc0));
        piVar12 = (int *)FUN_00530550(*(void **)(unaff_EBP - 0x2b6c),
                                      (undefined4 *)(unaff_EBP - 0x2d84));
        bVar3 = FUN_0042c6f0((void *)(unaff_EBP - 0x2b68),piVar12);
      } while (bVar3);
    }
    FUN_00428070((void *)(unaff_EBP - 0x2be8),(undefined4 *)(unaff_EBP - 0x2b68));
    piVar12 = (int *)FUN_00530550((void *)(unaff_EBP - 0x2be8),(undefined4 *)(unaff_EBP - 0x2d8c));
    bVar3 = FUN_0042c6f0((void *)(unaff_EBP - 0x2b68),piVar12);
    if (bVar3) {
      iVar25 = *(int *)(unaff_EBP - 0x2b28);
      do {
        piVar12 = (int *)FUN_00402bc0((int *)(unaff_EBP - 0x2b68));
        *(undefined1 *)(*piVar12 + 0x75) = 1;
        puVar13 = FUN_00422c00((void *)(unaff_EBP - 0xe88),*piVar12);
        *(undefined1 *)(unaff_EBP - 4) = 0x1b;
        FUN_00428450((void *)(iVar25 + 0x28),puVar13);
        *(undefined1 *)(unaff_EBP - 4) = 5;
        FUN_00423770(unaff_EBP - 0xe88);
        FUN_00407a30((void *)(unaff_EBP - 0x2b68),(int *)(unaff_EBP - 0x2bc0));
        piVar12 = (int *)FUN_00530550((void *)(unaff_EBP - 0x2be8),
                                      (undefined4 *)(unaff_EBP - 0x2d8c));
        bVar3 = FUN_0042c6f0((void *)(unaff_EBP - 0x2b68),piVar12);
      } while (bVar3);
    }
    iVar25 = *(int *)(unaff_EBP - 0x2b28);
    pvVar22 = (void *)(iVar25 + 0x30);
    FUN_00428070(pvVar22,(undefined4 *)(unaff_EBP - 0x2b68));
    piVar12 = (int *)FUN_00530550(pvVar22,(undefined4 *)(unaff_EBP - 0x2d94));
    bVar3 = FUN_0042c6f0((void *)(unaff_EBP - 0x2b68),piVar12);
    if (bVar3) {
      do {
        pvVar17 = (void *)FUN_0052eb90((int *)(unaff_EBP - 0x2b68));
        puVar6 = (uint *)FUN_004013d0(pvVar17,1);
        uVar7 = *puVar6;
        puVar6 = (uint *)FUN_004013d0(pvVar17,0);
        iVar25 = FUN_00406290(*(void **)(unaff_EBP - 0x2b18),*puVar6,uVar7);
        if (iVar25 != 0) {
          *(undefined1 *)(iVar25 + 0x76) = 1;
        }
        FUN_0052ebf0((void *)(unaff_EBP - 0x2b68),(undefined4 *)(unaff_EBP - 0x2bc0));
        piVar12 = (int *)FUN_00530550(pvVar22,(undefined4 *)(unaff_EBP - 0x2d94));
        bVar3 = FUN_0042c6f0((void *)(unaff_EBP - 0x2b68),piVar12);
      } while (bVar3);
      iVar25 = *(int *)(unaff_EBP - 0x2b28);
    }
    FUN_00428070((void *)(unaff_EBP - 0x2cd4),(undefined4 *)(unaff_EBP - 0x2b68));
    piVar12 = (int *)FUN_00530550((void *)(unaff_EBP - 0x2cd4),(undefined4 *)(unaff_EBP - 0x2db4));
    bVar3 = FUN_0042c6f0((void *)(unaff_EBP - 0x2b68),piVar12);
    if (bVar3) {
      do {
        piVar12 = (int *)FUN_00402bc0((int *)(unaff_EBP - 0x2b68));
        puVar13 = FUN_0052e950((void *)(unaff_EBP - 0xe50),*piVar12);
        *(undefined1 *)(unaff_EBP - 4) = 0x1c;
        FUN_005307f0((void *)(iVar25 + 0x38),puVar13);
        *(undefined1 *)(unaff_EBP - 4) = 5;
        FUN_00423770(unaff_EBP - 0xe50);
        FUN_00407a30((void *)(unaff_EBP - 0x2b68),(int *)(unaff_EBP - 0x2bc0));
        piVar12 = (int *)FUN_00530550((void *)(unaff_EBP - 0x2cd4),
                                      (undefined4 *)(unaff_EBP - 0x2db4));
        bVar3 = FUN_0042c6f0((void *)(unaff_EBP - 0x2b68),piVar12);
      } while (bVar3);
    }
    pvVar22 = (void *)(*(int *)(unaff_EBP - 0x2b28) + 0x18);
    FUN_00428070(pvVar22,(undefined4 *)(unaff_EBP - 0x2b20));
    piVar12 = (int *)FUN_00530550(pvVar22,(undefined4 *)(unaff_EBP - 0x2dbc));
    bVar3 = FUN_0042c6f0((void *)(unaff_EBP - 0x2b20),piVar12);
    if (bVar3) {
      do {
        pvVar17 = (void *)FUN_0052eb90((int *)(unaff_EBP - 0x2b20));
        piVar12 = (int *)FUN_004013d0(pvVar17,1);
        uVar7 = (int)(*piVar12 + (*piVar12 >> 0x1f & 0xffU)) >> 8;
        piVar12 = (int *)FUN_004013d0(pvVar17,0);
        iVar25 = FUN_00406290(*(void **)(unaff_EBP - 0x2b18),
                              (int)(*piVar12 + (*piVar12 >> 0x1f & 0xffU)) >> 8,uVar7);
        if (iVar25 != 0) {
          puVar13 = (undefined4 *)FUN_0052eb90((int *)(unaff_EBP - 0x2b20));
          FUN_0041f4d0((void *)(iVar25 + 0x68),puVar13);
        }
        FUN_0052ebf0((void *)(unaff_EBP - 0x2b20),(undefined4 *)(unaff_EBP - 0x2bc0));
        piVar12 = (int *)FUN_00530550(pvVar22,(undefined4 *)(unaff_EBP - 0x2dbc));
        bVar3 = FUN_0042c6f0((void *)(unaff_EBP - 0x2b20),piVar12);
      } while (bVar3);
    }
    FUN_004f7710((undefined4 *)(unaff_EBP - 0x2cd4));
    FUN_004f7710((undefined4 *)(unaff_EBP - 0x2be8));
    FUN_004f7710((undefined4 *)(unaff_EBP - 0x2bf0));
    FUN_00423710((int *)(unaff_EBP - 0x2bd4));
    ExceptionList = *(void **)(unaff_EBP - 0xc);
    uStack00000008 = 0x54721f;
    __security_check_cookie(*(uint *)(unaff_EBP - 0x10) ^ unaff_EBP);
    return;
  }
  goto LAB_00546880;
}


/* FUN_0054709a @ 0054709a  kind=gamemisc  attributed-by=none  size=395 */

void FUN_0054709a(void)

{
  bool bVar1;
  int *piVar2;
  undefined4 *puVar3;
  void *this;
  uint uVar4;
  int iVar5;
  uint unaff_EBP;
  int unaff_ESI;
  void *this_00;
  undefined4 uStack00000008;
  
  do {
    piVar2 = (int *)FUN_00402bc0((int *)(unaff_EBP - 0x2b68));
    puVar3 = FUN_0052e950((void *)(unaff_EBP - 0xe50),*piVar2);
    *(undefined1 *)(unaff_EBP - 4) = 0x1c;
    FUN_005307f0((void *)(unaff_ESI + 0x38),puVar3);
    *(undefined1 *)(unaff_EBP - 4) = 5;
    FUN_00423770(unaff_EBP - 0xe50);
    FUN_00407a30((void *)(unaff_EBP - 0x2b68),(int *)(unaff_EBP - 0x2bc0));
    piVar2 = (int *)FUN_00530550((void *)(unaff_EBP - 0x2cd4),(undefined4 *)(unaff_EBP - 0x2db4));
    bVar1 = FUN_0042c6f0((void *)(unaff_EBP - 0x2b68),piVar2);
  } while (bVar1);
  this_00 = (void *)(*(int *)(unaff_EBP - 0x2b28) + 0x18);
  FUN_00428070(this_00,(undefined4 *)(unaff_EBP - 0x2b20));
  piVar2 = (int *)FUN_00530550(this_00,(undefined4 *)(unaff_EBP - 0x2dbc));
  bVar1 = FUN_0042c6f0((void *)(unaff_EBP - 0x2b20),piVar2);
  if (bVar1) {
    do {
      this = (void *)FUN_0052eb90((int *)(unaff_EBP - 0x2b20));
      piVar2 = (int *)FUN_004013d0(this,1);
      uVar4 = (int)(*piVar2 + (*piVar2 >> 0x1f & 0xffU)) >> 8;
      piVar2 = (int *)FUN_004013d0(this,0);
      iVar5 = FUN_00406290(*(void **)(unaff_EBP - 0x2b18),
                           (int)(*piVar2 + (*piVar2 >> 0x1f & 0xffU)) >> 8,uVar4);
      if (iVar5 != 0) {
        puVar3 = (undefined4 *)FUN_0052eb90((int *)(unaff_EBP - 0x2b20));
        FUN_0041f4d0((void *)(iVar5 + 0x68),puVar3);
      }
      FUN_0052ebf0((void *)(unaff_EBP - 0x2b20),(undefined4 *)(unaff_EBP - 0x2bc0));
      piVar2 = (int *)FUN_00530550(this_00,(undefined4 *)(unaff_EBP - 0x2dbc));
      bVar1 = FUN_0042c6f0((void *)(unaff_EBP - 0x2b20),piVar2);
    } while (bVar1);
  }
  FUN_004f7710((undefined4 *)(unaff_EBP - 0x2cd4));
  FUN_004f7710((undefined4 *)(unaff_EBP - 0x2be8));
  FUN_004f7710((undefined4 *)(unaff_EBP - 0x2bf0));
  FUN_00423710((int *)(unaff_EBP - 0x2bd4));
  ExceptionList = *(void **)(unaff_EBP - 0xc);
  uStack00000008 = 0x54721f;
  __security_check_cookie(*(uint *)(unaff_EBP - 0x10) ^ unaff_EBP);
  return;
}


/* FUN_00548b00 @ 00548b00  kind=gamemisc  attributed-by=none  size=30 */

float10 __cdecl FUN_00548b00(float param_1)

{
  double dVar1;
  
  dVar1 = (double)param_1;
  libm_sse2_acos_precise();
  return (float10)(float)dVar1;
}


/* FUN_00548b20 @ 00548b20  kind=gamemisc  attributed-by=none  size=30 */

float10 __cdecl FUN_00548b20(float param_1)

{
  double dVar1;
  
  dVar1 = (double)param_1;
  libm_sse2_exp_precise();
  return (float10)(float)dVar1;
}


/* FUN_00548b40 @ 00548b40  kind=gamemisc  attributed-by=none  size=31 */

undefined4 * __fastcall FUN_00548b40(undefined4 *param_1)

{
  undefined4 uVar1;
  
  *param_1 = 0;
  param_1[1] = 0;
  uVar1 = FUN_004268f0((undefined4 *)0x0,(undefined4 *)0x0);
  *param_1 = uVar1;
  return param_1;
}


/* FUN_00548db0 @ 00548db0  kind=gamemisc  attributed-by=none  size=66 */

void __fastcall FUN_00548db0(undefined4 *param_1)

{
  if ((undefined4 *)*param_1 != (undefined4 *)0x0) {
    FUN_004c6860((undefined4 *)*param_1,(undefined4 *)param_1[1]);
    operator_delete((void *)*param_1);
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
  }
  return;
}


/* FUN_00549200 @ 00549200  kind=gamemisc  attributed-by=none  size=141 */

basic_istream<char,std::char_traits<char>_> *
FUN_00549200(basic_istream<char,std::char_traits<char>_> *param_1,undefined1 *param_2)

{
  bool bVar1;
  int iVar2;
  basic_istream<char,std::char_traits<char>_> *pbVar3;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00556630;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  if (*(int **)(param_1 + *(int *)(*(int *)param_1 + 4) + 0x38) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + *(int *)(*(int *)param_1 + 4) + 0x38) + 4))();
  }
  local_8 = 0;
  bVar1 = std::basic_istream<char,std::char_traits<char>_>::_Ipfx
                    ((basic_istream<char,std::char_traits<char>_> *)param_1,false);
  local_8 = 1;
  if (bVar1) {
    local_8 = 2;
    iVar2 = std::basic_streambuf<char,std::char_traits<char>_>::sbumpc
                      (*(basic_streambuf<char,std::char_traits<char>_> **)
                        (param_1 + *(int *)(*(int *)param_1 + 4) + 0x38));
    if (iVar2 == -1) {
      pbVar3 = (basic_istream<char,std::char_traits<char>_> *)FUN_005492ad();
      return pbVar3;
    }
    *param_2 = (char)iVar2;
    pbVar3 = (basic_istream<char,std::char_traits<char>_> *)FUN_005492ad();
    return pbVar3;
  }
  std::basic_ios<char,std::char_traits<char>_>::setstate
            ((basic_ios<char,std::char_traits<char>_> *)(param_1 + *(int *)(*(int *)param_1 + 4)),0,
             false);
  local_8 = 0xffffffff;
  if (*(int **)(param_1 + *(int *)(*(int *)param_1 + 4) + 0x38) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + *(int *)(*(int *)param_1 + 4) + 0x38) + 8))();
  }
  ExceptionList = local_10;
  return param_1;
}


/* FUN_005492ad @ 005492ad  kind=gamemisc  attributed-by=none  size=68 */

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


/* FUN_0054a6ce @ 0054a6ce  kind=gamemisc  attributed-by=none  size=9 */

void __cdecl FUN_0054a6ce(uint param_1)

{
  operator_new(param_1);
  return;
}


/* FUN_0054a6d7 @ 0054a6d7  kind=gamemisc  attributed-by=none  size=21 */

void __fastcall FUN_0054a6d7(int param_1)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)(**(code **)(**(int **)(param_1 + 4) + 8))();
  if (puVar1 != (undefined4 *)0x0) {
    (**(code **)*puVar1)(1);
  }
  return;
}


/* FUN_0054a6ec @ 0054a6ec  kind=gamemisc  attributed-by=none  size=36 */

void FUN_0054a6ec(void)

{
  undefined4 *puVar1;
  
  while (puVar1 = DAT_005842f4, DAT_005842f4 != (undefined4 *)0x0) {
    DAT_005842f4 = (undefined4 *)*DAT_005842f4;
    FUN_0054a6d7((int)puVar1);
    operator_delete(puVar1);
  }
  return;
}


/* FUN_0054a89a @ 0054a89a  kind=gamemisc  attributed-by=none  size=9 */

void FUN_0054a89a(void)

{
  _unlock(8);
  return;
}


/* _atexit @ 0054a8a3  kind=gamemisc  attributed-by=none  size=21 */

/* Library Function - Single Match
    _atexit
   
   Library: Visual Studio 2012 Release */

int __cdecl _atexit(_func_4879 *param_1)

{
  _onexit_t p_Var1;
  
  p_Var1 = __onexit((_onexit_t)param_1);
  return (p_Var1 != (_onexit_t)0x0) - 1;
}


/* __alldiv @ 0054aa30  kind=gamemisc  attributed-by=none  size=170 */

/* Library Function - Single Match
    __alldiv
   
   Libraries: Visual Studio 2012 Release, Visual Studio 2015 Release, Visual Studio 2017 Release,
   Visual Studio 2019 Release */

undefined8 __alldiv(uint param_1,uint param_2,uint param_3,uint param_4)

{
  ulonglong uVar1;
  longlong lVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  bool bVar10;
  char cVar11;
  uint uVar9;
  
  cVar11 = (int)param_2 < 0;
  if ((bool)cVar11) {
    bVar10 = param_1 != 0;
    param_1 = -param_1;
    param_2 = -(uint)bVar10 - param_2;
  }
  if ((int)param_4 < 0) {
    cVar11 = cVar11 + '\x01';
    bVar10 = param_3 != 0;
    param_3 = -param_3;
    param_4 = -(uint)bVar10 - param_4;
  }
  uVar3 = param_1;
  uVar5 = param_3;
  uVar6 = param_2;
  uVar9 = param_4;
  if (param_4 == 0) {
    uVar3 = param_2 / param_3;
    iVar4 = (int)(((ulonglong)param_2 % (ulonglong)param_3 << 0x20 | (ulonglong)param_1) /
                 (ulonglong)param_3);
  }
  else {
    do {
      uVar8 = uVar9 >> 1;
      uVar5 = uVar5 >> 1 | (uint)((uVar9 & 1) != 0) << 0x1f;
      uVar7 = uVar6 >> 1;
      uVar3 = uVar3 >> 1 | (uint)((uVar6 & 1) != 0) << 0x1f;
      uVar6 = uVar7;
      uVar9 = uVar8;
    } while (uVar8 != 0);
    uVar1 = CONCAT44(uVar7,uVar3) / (ulonglong)uVar5;
    iVar4 = (int)uVar1;
    lVar2 = (ulonglong)param_3 * (uVar1 & 0xffffffff);
    uVar3 = (uint)((ulonglong)lVar2 >> 0x20);
    uVar5 = uVar3 + iVar4 * param_4;
    if (((CARRY4(uVar3,iVar4 * param_4)) || (param_2 < uVar5)) ||
       ((param_2 <= uVar5 && (param_1 < (uint)lVar2)))) {
      iVar4 = iVar4 + -1;
    }
    uVar3 = 0;
  }
  if (cVar11 == '\x01') {
    bVar10 = iVar4 != 0;
    iVar4 = -iVar4;
    uVar3 = -(uint)bVar10 - uVar3;
  }
  return CONCAT44(uVar3,iVar4);
}


/* ___raise_securityfailure @ 0054ab26  kind=gamemisc  attributed-by=none  size=61 */

/* Library Function - Single Match
    ___raise_securityfailure
   
   Library: Visual Studio 2012 Release */

void __cdecl ___raise_securityfailure(EXCEPTION_POINTERS *param_1)

{
  DAT_0058461c = IsDebuggerPresent();
  _crt_debugger_hook(1);
  __crtUnhandledException(param_1);
  if (DAT_0058461c == 0) {
    _crt_debugger_hook(1);
  }
  __crtTerminateProcess(0xc0000409);
  return;
}


/* ___report_rangecheckfailure @ 0054ac5c  kind=gamemisc  attributed-by=none  size=12 */

/* Library Function - Single Match
    ___report_rangecheckfailure
   
   Libraries: Visual Studio 2012 Release, Visual Studio 2017 Release, Visual Studio 2019 Release */

void ___report_rangecheckfailure(void)

{
  ___report_securityfailure(8);
  return;
}


/* ___report_securityfailure @ 0054ac68  kind=gamemisc  attributed-by=none  size=206 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Library Function - Single Match
    ___report_securityfailure
   
   Library: Visual Studio 2012 Release */

void __cdecl ___report_securityfailure(undefined4 param_1)

{
  code *pcVar1;
  uint uVar2;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 uVar3;
  uint extraout_EDX;
  undefined4 unaff_EBX;
  undefined4 unaff_EBP;
  undefined4 unaff_ESI;
  undefined4 unaff_EDI;
  undefined2 in_ES;
  undefined2 in_CS;
  undefined2 in_SS;
  undefined2 in_DS;
  undefined2 in_FS;
  undefined2 in_GS;
  byte bVar4;
  byte bVar5;
  byte in_AF;
  byte bVar6;
  byte bVar7;
  byte in_TF;
  byte in_IF;
  byte bVar8;
  byte in_NT;
  byte in_AC;
  byte in_VIF;
  byte in_VIP;
  byte in_ID;
  longlong lVar9;
  undefined4 unaff_retaddr;
  
  uVar2 = IsProcessorFeaturePresent(0x17);
  bVar4 = 0;
  bVar8 = 0;
  bVar7 = (int)uVar2 < 0;
  bVar6 = uVar2 == 0;
  bVar5 = (POPCOUNT(uVar2 & 0xff) & 1U) == 0;
  lVar9 = (ulonglong)extraout_EDX << 0x20;
  uVar3 = extraout_ECX;
  if (!(bool)bVar6) {
    pcVar1 = (code *)swi(0x29);
    lVar9 = (*pcVar1)();
    uVar3 = extraout_ECX_00;
  }
  _DAT_005843f8 = (undefined4)((ulonglong)lVar9 >> 0x20);
  _DAT_00584400 = (undefined4)lVar9;
  _DAT_00584410 =
       (uint)(in_NT & 1) * 0x4000 | (uint)(bVar8 & 1) * 0x800 | (uint)(in_IF & 1) * 0x200 |
       (uint)(in_TF & 1) * 0x100 | (uint)(bVar7 & 1) * 0x80 | (uint)(bVar6 & 1) * 0x40 |
       (uint)(in_AF & 1) * 0x10 | (uint)(bVar5 & 1) * 4 | (uint)(bVar4 & 1) |
       (uint)(in_ID & 1) * 0x200000 | (uint)(in_VIP & 1) * 0x100000 | (uint)(in_VIF & 1) * 0x80000 |
       (uint)(in_AC & 1) * 0x40000;
  _DAT_00584414 = &param_1;
  _DAT_00584300 = 0xc0000409;
  _DAT_00584304 = 1;
  _DAT_00584310 = 1;
  DAT_00584314 = param_1;
  _DAT_0058430c = unaff_retaddr;
  _DAT_005843dc = in_GS;
  _DAT_005843e0 = in_FS;
  _DAT_005843e4 = in_ES;
  _DAT_005843e8 = in_DS;
  _DAT_005843ec = unaff_EDI;
  _DAT_005843f0 = unaff_ESI;
  _DAT_005843f4 = unaff_EBX;
  _DAT_005843fc = uVar3;
  _DAT_00584404 = unaff_EBP;
  DAT_00584408 = unaff_retaddr;
  _DAT_0058440c = in_CS;
  _DAT_00584418 = in_SS;
  ___raise_securityfailure((EXCEPTION_POINTERS *)&PTR_DAT_00573d88);
  return;
}


/* `eh_vector_constructor_iterator' @ 0054ad4e  kind=gamemisc  attributed-by=none  size=76 */

/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */
/* WARNING: Function: __SEH_epilog4 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    void __stdcall `eh vector constructor iterator'(void *,unsigned int,int,void (__thiscall*)(void
   *),void (__thiscall*)(void *))
   
   Library: Visual Studio 2012 Release */

void _eh_vector_constructor_iterator_
               (void *param_1,uint param_2,int param_3,_func_void_void_ptr *param_4,
               _func_void_void_ptr *param_5)

{
  int iVar1;
  void *in_stack_ffffffcc;
  
  for (iVar1 = 0; iVar1 < param_3; iVar1 = iVar1 + 1) {
    (*param_4)(in_stack_ffffffcc);
  }
  FUN_0054ada6();
  return;
}


/* FUN_0054ada6 @ 0054ada6  kind=gamemisc  attributed-by=none  size=16 */

void FUN_0054ada6(void)

{
  int in_EAX;
  uint unaff_EBX;
  int unaff_EBP;
  int unaff_ESI;
  void *unaff_EDI;
  
  if (in_EAX == 0) {
    __ArrayUnwind(unaff_EDI,unaff_EBX,unaff_ESI,*(_func_void_void_ptr **)(unaff_EBP + 0x18));
  }
  return;
}


/* `eh_vector_destructor_iterator' @ 0054adb6  kind=gamemisc  attributed-by=none  size=83 */

/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */
/* WARNING: Function: __SEH_epilog4 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    void __stdcall `eh vector destructor iterator'(void *,unsigned int,int,void (__thiscall*)(void
   *))
   
   Library: Visual Studio 2012 Release */

void _eh_vector_destructor_iterator_
               (void *param_1,uint param_2,int param_3,_func_void_void_ptr *param_4)

{
  void *in_stack_ffffffd0;
  
  while( true ) {
    param_3 = param_3 + -1;
    if (param_3 < 0) break;
    (*param_4)(in_stack_ffffffd0);
  }
  FUN_0054ae15();
  return;
}


/* FUN_0054ae15 @ 0054ae15  kind=gamemisc  attributed-by=none  size=16 */

void FUN_0054ae15(void)

{
  int in_EAX;
  uint unaff_EBX;
  int unaff_EBP;
  void *unaff_ESI;
  int unaff_EDI;
  
  if (in_EAX == 0) {
    __ArrayUnwind(unaff_ESI,unaff_EBX,unaff_EDI,*(_func_void_void_ptr **)(unaff_EBP + 0x14));
  }
  return;
}


/* __ArrayUnwind @ 0054ae25  kind=gamemisc  attributed-by=none  size=50 */

/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */
/* WARNING: Function: __SEH_epilog4 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    void __stdcall __ArrayUnwind(void *,unsigned int,int,void (__thiscall*)(void *))
   
   Library: Visual Studio 2012 Release */

void __ArrayUnwind(void *param_1,uint param_2,int param_3,_func_void_void_ptr *param_4)

{
  void *in_stack_ffffffc8;
  
  while( true ) {
    param_3 = param_3 + -1;
    if (param_3 < 0) break;
    (*param_4)(in_stack_ffffffc8);
  }
  return;
}


/* __alldvrm @ 0054ae90  kind=gamemisc  attributed-by=none  size=223 */

/* Library Function - Single Match
    __alldvrm
   
   Library: Visual Studio */

undefined8 __alldvrm(uint param_1,uint param_2,uint param_3,uint param_4)

{
  ulonglong uVar1;
  longlong lVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  bool bVar10;
  char cVar11;
  uint uVar9;
  
  cVar11 = (int)param_2 < 0;
  if ((bool)cVar11) {
    bVar10 = param_1 != 0;
    param_1 = -param_1;
    param_2 = -(uint)bVar10 - param_2;
  }
  if ((int)param_4 < 0) {
    cVar11 = cVar11 + '\x01';
    bVar10 = param_3 != 0;
    param_3 = -param_3;
    param_4 = -(uint)bVar10 - param_4;
  }
  uVar3 = param_1;
  uVar5 = param_3;
  uVar6 = param_2;
  uVar9 = param_4;
  if (param_4 == 0) {
    uVar3 = param_2 / param_3;
    iVar4 = (int)(((ulonglong)param_2 % (ulonglong)param_3 << 0x20 | (ulonglong)param_1) /
                 (ulonglong)param_3);
  }
  else {
    do {
      uVar8 = uVar9 >> 1;
      uVar5 = uVar5 >> 1 | (uint)((uVar9 & 1) != 0) << 0x1f;
      uVar7 = uVar6 >> 1;
      uVar3 = uVar3 >> 1 | (uint)((uVar6 & 1) != 0) << 0x1f;
      uVar6 = uVar7;
      uVar9 = uVar8;
    } while (uVar8 != 0);
    uVar1 = CONCAT44(uVar7,uVar3) / (ulonglong)uVar5;
    iVar4 = (int)uVar1;
    lVar2 = (ulonglong)param_3 * (uVar1 & 0xffffffff);
    uVar3 = (uint)((ulonglong)lVar2 >> 0x20);
    uVar5 = uVar3 + iVar4 * param_4;
    if (((CARRY4(uVar3,iVar4 * param_4)) || (param_2 < uVar5)) ||
       ((param_2 <= uVar5 && (param_1 < (uint)lVar2)))) {
      iVar4 = iVar4 + -1;
    }
    uVar3 = 0;
  }
  if (cVar11 == '\x01') {
    bVar10 = iVar4 != 0;
    iVar4 = -iVar4;
    uVar3 = -(uint)bVar10 - uVar3;
  }
  return CONCAT44(uVar3,iVar4);
}


/* __allrem @ 0054af70  kind=gamemisc  attributed-by=none  size=178 */

/* Library Function - Single Match
    __allrem
   
   Library: Visual Studio */

undefined8 __allrem(uint param_1,uint param_2,uint param_3,uint param_4)

{
  ulonglong uVar1;
  longlong lVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  bool bVar12;
  bool bVar13;
  
  bVar13 = (int)param_2 < 0;
  if (bVar13) {
    bVar12 = param_1 != 0;
    param_1 = -param_1;
    param_2 = -(uint)bVar12 - param_2;
  }
  uVar11 = (uint)bVar13;
  if ((int)param_4 < 0) {
    bVar13 = param_3 != 0;
    param_3 = -param_3;
    param_4 = -(uint)bVar13 - param_4;
  }
  uVar3 = param_1;
  uVar4 = param_3;
  uVar8 = param_2;
  uVar9 = param_4;
  if (param_4 == 0) {
    iVar5 = (int)(((ulonglong)param_2 % (ulonglong)param_3 << 0x20 | (ulonglong)param_1) %
                 (ulonglong)param_3);
    iVar6 = 0;
    if ((int)(uVar11 - 1) < 0) goto LAB_0054b01d;
  }
  else {
    do {
      uVar10 = uVar9 >> 1;
      uVar4 = uVar4 >> 1 | (uint)((uVar9 & 1) != 0) << 0x1f;
      uVar7 = uVar8 >> 1;
      uVar3 = uVar3 >> 1 | (uint)((uVar8 & 1) != 0) << 0x1f;
      uVar8 = uVar7;
      uVar9 = uVar10;
    } while (uVar10 != 0);
    uVar1 = CONCAT44(uVar7,uVar3) / (ulonglong)uVar4;
    uVar3 = (int)uVar1 * param_4;
    lVar2 = (uVar1 & 0xffffffff) * (ulonglong)param_3;
    uVar8 = (uint)((ulonglong)lVar2 >> 0x20);
    uVar4 = (uint)lVar2;
    uVar9 = uVar8 + uVar3;
    if (((CARRY4(uVar8,uVar3)) || (param_2 < uVar9)) || ((param_2 <= uVar9 && (param_1 < uVar4)))) {
      bVar13 = uVar4 < param_3;
      uVar4 = uVar4 - param_3;
      uVar9 = (uVar9 - param_4) - (uint)bVar13;
    }
    iVar5 = uVar4 - param_1;
    iVar6 = (uVar9 - param_2) - (uint)(uVar4 < param_1);
    if (-1 < (int)(uVar11 - 1)) goto LAB_0054b01d;
  }
  bVar13 = iVar5 != 0;
  iVar5 = -iVar5;
  iVar6 = -(uint)bVar13 - iVar6;
LAB_0054b01d:
  return CONCAT44(iVar6,iVar5);
}


/* __allshl @ 0054b030  kind=gamemisc  attributed-by=none  size=31 */

/* Library Function - Single Match
    __allshl
   
   Library: Visual Studio */

longlong __fastcall __allshl(byte param_1,int param_2)

{
  uint in_EAX;
  
  if (0x3f < param_1) {
    return 0;
  }
  if (param_1 < 0x20) {
    return CONCAT44(param_2 << (param_1 & 0x1f) | in_EAX >> 0x20 - (param_1 & 0x1f),
                    in_EAX << (param_1 & 0x1f));
  }
  return (ulonglong)(in_EAX << (param_1 & 0x1f)) << 0x20;
}


/* __aulldiv @ 0054b050  kind=gamemisc  attributed-by=none  size=104 */

/* Library Function - Single Match
    __aulldiv
   
   Library: Visual Studio */

undefined8 __aulldiv(uint param_1,uint param_2,uint param_3,uint param_4)

{
  ulonglong uVar1;
  longlong lVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  
  uVar3 = param_1;
  uVar8 = param_4;
  uVar6 = param_2;
  uVar9 = param_3;
  if (param_4 == 0) {
    uVar3 = param_2 / param_3;
    iVar4 = (int)(((ulonglong)param_2 % (ulonglong)param_3 << 0x20 | (ulonglong)param_1) /
                 (ulonglong)param_3);
  }
  else {
    do {
      uVar5 = uVar8 >> 1;
      uVar9 = uVar9 >> 1 | (uint)((uVar8 & 1) != 0) << 0x1f;
      uVar7 = uVar6 >> 1;
      uVar3 = uVar3 >> 1 | (uint)((uVar6 & 1) != 0) << 0x1f;
      uVar8 = uVar5;
      uVar6 = uVar7;
    } while (uVar5 != 0);
    uVar1 = CONCAT44(uVar7,uVar3) / (ulonglong)uVar9;
    iVar4 = (int)uVar1;
    lVar2 = (ulonglong)param_3 * (uVar1 & 0xffffffff);
    uVar3 = (uint)((ulonglong)lVar2 >> 0x20);
    uVar8 = uVar3 + iVar4 * param_4;
    if (((CARRY4(uVar3,iVar4 * param_4)) || (param_2 < uVar8)) ||
       ((param_2 <= uVar8 && (param_1 < (uint)lVar2)))) {
      iVar4 = iVar4 + -1;
    }
    uVar3 = 0;
  }
  return CONCAT44(uVar3,iVar4);
}


/* __aulldvrm @ 0054b0c0  kind=gamemisc  attributed-by=none  size=149 */

/* Library Function - Single Match
    __aulldvrm
   
   Library: Visual Studio */

undefined8 __aulldvrm(uint param_1,uint param_2,uint param_3,uint param_4)

{
  ulonglong uVar1;
  longlong lVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  
  uVar3 = param_1;
  uVar8 = param_4;
  uVar6 = param_2;
  uVar9 = param_3;
  if (param_4 == 0) {
    uVar3 = param_2 / param_3;
    iVar4 = (int)(((ulonglong)param_2 % (ulonglong)param_3 << 0x20 | (ulonglong)param_1) /
                 (ulonglong)param_3);
  }
  else {
    do {
      uVar5 = uVar8 >> 1;
      uVar9 = uVar9 >> 1 | (uint)((uVar8 & 1) != 0) << 0x1f;
      uVar7 = uVar6 >> 1;
      uVar3 = uVar3 >> 1 | (uint)((uVar6 & 1) != 0) << 0x1f;
      uVar8 = uVar5;
      uVar6 = uVar7;
    } while (uVar5 != 0);
    uVar1 = CONCAT44(uVar7,uVar3) / (ulonglong)uVar9;
    iVar4 = (int)uVar1;
    lVar2 = (ulonglong)param_3 * (uVar1 & 0xffffffff);
    uVar3 = (uint)((ulonglong)lVar2 >> 0x20);
    uVar8 = uVar3 + iVar4 * param_4;
    if (((CARRY4(uVar3,iVar4 * param_4)) || (param_2 < uVar8)) ||
       ((param_2 <= uVar8 && (param_1 < (uint)lVar2)))) {
      iVar4 = iVar4 + -1;
    }
    uVar3 = 0;
  }
  return CONCAT44(uVar3,iVar4);
}


/* __aullrem @ 0054b160  kind=gamemisc  attributed-by=none  size=117 */

/* Library Function - Single Match
    __aullrem
   
   Library: Visual Studio */

undefined8 __aullrem(uint param_1,uint param_2,uint param_3,uint param_4)

{
  ulonglong uVar1;
  longlong lVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  bool bVar11;
  
  uVar3 = param_1;
  uVar4 = param_4;
  uVar9 = param_2;
  uVar10 = param_3;
  if (param_4 == 0) {
    iVar6 = (int)(((ulonglong)param_2 % (ulonglong)param_3 << 0x20 | (ulonglong)param_1) %
                 (ulonglong)param_3);
    iVar7 = 0;
  }
  else {
    do {
      uVar5 = uVar4 >> 1;
      uVar10 = uVar10 >> 1 | (uint)((uVar4 & 1) != 0) << 0x1f;
      uVar8 = uVar9 >> 1;
      uVar3 = uVar3 >> 1 | (uint)((uVar9 & 1) != 0) << 0x1f;
      uVar4 = uVar5;
      uVar9 = uVar8;
    } while (uVar5 != 0);
    uVar1 = CONCAT44(uVar8,uVar3) / (ulonglong)uVar10;
    uVar3 = (int)uVar1 * param_4;
    lVar2 = (uVar1 & 0xffffffff) * (ulonglong)param_3;
    uVar9 = (uint)((ulonglong)lVar2 >> 0x20);
    uVar4 = (uint)lVar2;
    uVar10 = uVar9 + uVar3;
    if (((CARRY4(uVar9,uVar3)) || (param_2 < uVar10)) || ((param_2 <= uVar10 && (param_1 < uVar4))))
    {
      bVar11 = uVar4 < param_3;
      uVar4 = uVar4 - param_3;
      uVar10 = (uVar10 - param_4) - (uint)bVar11;
    }
    iVar6 = -(uVar4 - param_1);
    iVar7 = -(uint)(uVar4 - param_1 != 0) - ((uVar10 - param_2) - (uint)(uVar4 < param_1));
  }
  return CONCAT44(iVar7,iVar6);
}


/* FUN_0054b29b @ 0054b29b  kind=gamemisc  attributed-by=none  size=75 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0054b29b(void)

{
  _atexit(FUN_0054b8ab);
  _DAT_0058463c = DAT_00584650;
  _DAT_00584634 =
       __getmainargs(&DAT_00584628,(char ***)&DAT_0058462c,(char ***)&DAT_00584630,DAT_0058464c,
                     (_startupinfo *)&DAT_0058463c);
  if (_DAT_00584634 < 0) {
    _amsg_exit(8);
  }
  return;
}


/* ___tmainCRTStartup @ 0054b2e6  kind=gamemisc  attributed-by=none  size=330 */

/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */
/* WARNING: Function: __SEH_epilog4 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    ___tmainCRTStartup
   
   Library: Visual Studio 2012 Release */

int ___tmainCRTStartup(void)

{
  bool bVar1;
  void *pvVar2;
  void *pvVar3;
  int iVar4;
  BOOL BVar5;
  
  bVar1 = false;
  do {
    pvVar3 = (void *)0x0;
    LOCK();
    pvVar2 = StackBase;
    if (DAT_00584684 != (void *)0x0) {
      pvVar3 = DAT_00584684;
      pvVar2 = DAT_00584684;
    }
    DAT_00584684 = pvVar2;
    UNLOCK();
    if (pvVar3 == (void *)0x0) goto LAB_0054b321;
  } while (pvVar3 != StackBase);
  bVar1 = true;
LAB_0054b321:
  if (DAT_00584688 == 1) {
    _amsg_exit(0x1f);
  }
  else if (DAT_00584688 == 0) {
    DAT_00584688 = 1;
    iVar4 = initterm_e(&DAT_0055854c,&DAT_00558560);
    if (iVar4 != 0) {
      return 0xff;
    }
  }
  else {
    DAT_00584624 = 1;
  }
  if (DAT_00584688 == 1) {
    initterm(&DAT_00558408,&DAT_00558548);
    DAT_00584688 = 2;
  }
  if (!bVar1) {
    LOCK();
    DAT_00584684 = (void *)0x0;
    UNLOCK();
  }
  if ((DAT_0058468c != (code *)0x0) &&
     (BVar5 = __IsNonwritableInCurrentImage((PBYTE)&DAT_0058468c), BVar5 != 0)) {
    (*DAT_0058468c)(0,2,0);
  }
  pvVar3 = DAT_00584630;
  *(void **)__initenv_exref = DAT_00584630;
  DAT_00584620 = FUN_00549c50(pvVar3);
  if (DAT_00584638 != 0) {
    if (DAT_00584624 == 0) {
      _cexit();
    }
    return DAT_00584620;
  }
                    /* WARNING: Subroutine does not return */
  exit(DAT_00584620);
}


/* entry @ 0054b44b  kind=gamemisc  attributed-by=none  size=10 */

void entry(void)

{
  ___security_init_cookie();
  ___tmainCRTStartup();
  return;
}


