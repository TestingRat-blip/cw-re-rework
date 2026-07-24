// indirect_dispatch_target_05 (game_misc) -- server. 75 functions. Bodies = Ghidra pseudo-C.
// Attribution: see ../attribution.tsv. Toolchain of the original: MSVC 11.0 (VS2012).
#include "indirect_dispatch_target_05.h"

/* FUN_0053cba1 @ 0053cba1  kind=gamemisc  attributed-by=role:dispatch-target  size=13776 */

/* WARNING (jumptable): Unable to track spacebase fully for stack */

void __fastcall FUN_0053cba1(undefined4 param_1,int param_2)

{
  undefined8 uVar1;
  ushort uVar2;
  char cVar3;
  undefined1 uVar4;
  bool bVar5;
  byte bVar6;
  char cVar7;
  Creature *pCVar8;
  int iVar9;
  uint *puVar10;
  long lVar11;
  undefined4 *puVar12;
  undefined3 extraout_var;
  SequentialBehavior *pSVar13;
  CombatBehavior *pCVar14;
  CompanionBehavior *pCVar15;
  RandomWalkBehavior *pRVar16;
  int iVar17;
  uint uVar18;
  int iVar19;
  int *piVar20;
  char *pcVar21;
  int iVar22;
  uint *puVar23;
  undefined4 uVar24;
  float *pfVar25;
  float *pfVar26;
  uint *puVar27;
  pair<unsigned___int64,unsigned___int64> *ppVar28;
  void *pvVar29;
  longlong *plVar30;
  undefined4 *puVar31;
  undefined8 *puVar32;
  void *pvVar33;
  int *piVar34;
  undefined *puVar35;
  undefined3 extraout_var_00;
  CRefTime *pCVar36;
  long lVar37;
  ulonglong *puVar38;
  int iVar39;
  float *pfVar40;
  float *pfVar41;
  undefined1 *puVar42;
  undefined1 *puVar43;
  ulonglong *puVar44;
  undefined3 extraout_var_01;
  undefined3 extraout_var_02;
  undefined3 extraout_var_03;
  undefined3 extraout_var_04;
  uint *puVar45;
  uint *puVar46;
  uint *puVar47;
  byte *pbVar48;
  uint uVar49;
  uint extraout_ECX;
  Creature_vftable *pCVar50;
  uint unaff_EBP;
  code *pcVar51;
  SequentialBehavior_data *this;
  void *pvVar52;
  int *piVar53;
  uint uVar54;
  void *unaff_EDI;
  float10 fVar55;
  float fVar56;
  float fVar57;
  float fVar58;
  float fVar59;
  ulonglong uVar60;
  undefined4 uStack00000008;
  ulonglong uVar61;
  uint uVar62;
  undefined4 uVar63;
  undefined4 uVar64;
  ulonglong *puVar65;
  undefined4 uVar66;
  int iVar67;
  
code_r0x0053cba1:
  pvVar52 = *(void **)(unaff_EBP - 0x2b14);
  if (*(char *)((int)unaff_EDI + 0xb4) != '\0') goto LAB_00537d0a;
  iVar17 = FUN_00407db0(pvVar52,0xffffffff);
  if (*(int *)((int)pvVar52 + 0x6c) < iVar17) {
    iVar17 = FUN_00407db0(pvVar52,0xffffffff);
    param_2 = *(int *)(unaff_EBP - 0x2b24);
    if (*(int *)((int)pvVar52 + 0x6c) + param_2 < iVar17) goto LAB_00537d01;
    uVar18 = FUN_00405420(unaff_EDI,(uint *)((int)pvVar52 + 0x11d0));
    if (uVar18 == 0) goto LAB_0053b968;
    if (*(char *)(uVar18 + 0x1020) != '\x14') goto LAB_0053b968;
    if ((uint)*(byte *)(uVar18 + 0x1021) != *(uint *)((int)pvVar52 + 100)) goto LAB_0053b968;
    FUN_004c8530(unaff_EBP - 0x860);
    FUN_00402550((void *)(unaff_EBP - 0x860),(longlong *)((int)pvVar52 + 0x10));
    iVar19 = rand();
    iVar17 = *(int *)(unaff_EBP - 0x2b28);
    *(undefined4 *)(unaff_EBP - 0x854) = 0x2c;
    *(float *)(unaff_EBP - 0x850) = ((float)iVar19 * 0.2) / 32767.0 + 0.9;
    FUN_00428590((void *)(iVar17 + 8),(undefined4 *)(unaff_EBP - 0x860));
    FUN_00422a90(unaff_EBP - 0xbc0);
    iVar17 = *(int *)(unaff_EBP - 0x2b14);
    *(undefined4 *)(unaff_EBP - 0xbc0) = *(undefined4 *)(iVar17 + 8);
    *(undefined4 *)(unaff_EBP - 0xbbc) = *(undefined4 *)(iVar17 + 0xc);
    *(undefined4 *)(unaff_EBP - 3000) = *(undefined4 *)(uVar18 + 8);
    uVar24 = *(undefined4 *)(uVar18 + 0xc);
    *(undefined4 *)(unaff_EBP - 0xbb0) = 0;
    *(undefined1 *)(unaff_EBP - 0xb7b) = 6;
    *(undefined1 *)(unaff_EBP - 0xbac) = 0;
    *(undefined4 *)(unaff_EBP - 0xbb4) = uVar24;
    FUN_00402a40((void *)(unaff_EBP - 0xba0),(undefined4 *)((int)pvVar52 + 0x10));
    FUN_00428400(*(void **)(unaff_EBP - 0x2b28),(undefined4 *)(unaff_EBP - 0xbc0));
    pvVar52 = (void *)(*(int *)(unaff_EBP - 0x2b14) + 0x1178);
    *(undefined4 *)(unaff_EBP - 0x2b64) = 0;
    FUN_00428070(pvVar52,(undefined4 *)(unaff_EBP - 0x2c50));
    piVar20 = (int *)FUN_00530550(pvVar52,(undefined4 *)(unaff_EBP - 0x2e30));
    bVar5 = FUN_0042c6f0((void *)(unaff_EBP - 0x2c50),piVar20);
    if (bVar5) {
      do {
        pcVar21 = (char *)FUN_0052eb90((int *)(unaff_EBP - 0x2c50));
        if (*pcVar21 == '\a') {
          *(undefined4 *)(unaff_EBP - 0x2b64) = *(undefined4 *)(pcVar21 + 4);
        }
        FUN_0052ebf0((void *)(unaff_EBP - 0x2c50),(undefined4 *)(unaff_EBP - 0x2b30));
        piVar20 = (int *)FUN_00530550(pvVar52,(undefined4 *)(unaff_EBP - 0x2e30));
        bVar5 = FUN_0042c6f0((void *)(unaff_EBP - 0x2c50),piVar20);
      } while (bVar5);
    }
    fVar56 = *(float *)(unaff_EBP - 0x2b64) + 0.2;
    pvVar52 = *(void **)(unaff_EBP - 0x2b14);
    *(int *)((int)pvVar52 + 0x70) = *(int *)((int)pvVar52 + 0x70) + 1;
    *(undefined4 *)((int)pvVar52 + 0x74) = 0;
    *(float *)(unaff_EBP - 0x2b64) = fVar56;
    if (1.0 <= fVar56) {
      pvVar29 = *(void **)(unaff_EBP - 0x2b18);
      *(undefined1 *)((int)pvVar52 + 0x60) = 5;
      uVar24 = *(undefined4 *)(uVar18 + 0xc);
      *(undefined4 *)(unaff_EBP - 0x2b64) = 0x3f800000;
      FUN_00522580(pvVar29,*(uint *)(uVar18 + 8),uVar24,(int)pvVar52);
    }
    FUN_004029b0((undefined1 *)(unaff_EBP - 0x2ea4));
    uVar24 = *(undefined4 *)(unaff_EBP - 0x2b64);
    iVar17 = *(int *)(unaff_EBP - 0x2b28);
    *(undefined1 *)(unaff_EBP - 0x2ea4) = 7;
    *(undefined4 *)(unaff_EBP - 0x2e9c) = 5000;
    *(undefined4 *)(unaff_EBP - 0x2ea0) = uVar24;
    *(undefined4 *)(unaff_EBP - 0x2e94) = *(undefined4 *)((int)pvVar52 + 0x198);
    *(undefined4 *)(unaff_EBP - 0x2e90) = *(undefined4 *)((int)pvVar52 + 0x19c);
    FUN_004ce9f0(pvVar52,(char *)(unaff_EBP - 0x2ea4),iVar17);
    unaff_EDI = *(void **)(unaff_EBP - 0x2b18);
  }
LAB_00537cfb:
  param_2 = *(int *)(unaff_EBP - 0x2b24);
LAB_00537d01:
  if (*(char *)((int)unaff_EDI + 0xb4) == '\0') goto LAB_00537d16;
LAB_00537d0a:
  if (pvVar52 == *(void **)((int)unaff_EDI + 0xb8)) {
LAB_00537d16:
    *(int *)((int)pvVar52 + 0x74) = *(int *)((int)pvVar52 + 0x74) + param_2;
    if (4000 < *(int *)((int)pvVar52 + 0x74)) {
      fVar55 = FUN_00412150((int)pvVar52);
      *(float *)(unaff_EBP - 0x2b1c) = (float)fVar55;
      *(undefined4 *)((int)pvVar52 + 0x70) = 0;
      fVar55 = FUN_00412150((int)pvVar52);
      *(float *)(unaff_EBP - 0x2b48) = (float)fVar55;
      pvVar29 = (void *)((int)pvVar52 + 0x139c);
      *(int *)((int)pvVar52 + 0x6c) =
           (int)((*(float *)(unaff_EBP - 0x2b1c) / *(float *)(unaff_EBP - 0x2b48)) *
                (float)*(int *)((int)pvVar52 + 0x6c));
      FUN_00428070(pvVar29,(undefined4 *)(unaff_EBP - 0x2c9c));
      piVar20 = (int *)FUN_00530550(pvVar29,(undefined4 *)(unaff_EBP - 0x2d98));
      bVar5 = FUN_0042c6f0((void *)(unaff_EBP - 0x2c9c),piVar20);
      if (bVar5) {
        do {
          puVar12 = (undefined4 *)FUN_00402bc0((int *)(unaff_EBP - 0x2c9c));
          cVar3 = FUN_0040f6d0();
          if (cVar3 != '\0') {
            iVar17 = FUN_00409780(*(void **)(unaff_EBP - 0x2b14),*puVar12,-1);
            puVar12[1] = iVar17;
          }
          FUN_00407a30((void *)(unaff_EBP - 0x2c9c),(int *)(unaff_EBP - 0x3024));
          piVar20 = (int *)FUN_00530550(pvVar29,(undefined4 *)(unaff_EBP - 0x2d98));
          bVar5 = FUN_0042c6f0((void *)(unaff_EBP - 0x2c9c),piVar20);
        } while (bVar5);
        pvVar52 = *(void **)(unaff_EBP - 0x2b14);
      }
    }
  }
  pvVar29 = (void *)((int)pvVar52 + 0x139c);
  FUN_00428070(pvVar29,(undefined4 *)(unaff_EBP - 0x2c6c));
  piVar20 = (int *)FUN_00530550(pvVar29,(undefined4 *)(unaff_EBP - 0x2df8));
  bVar5 = FUN_0042c6f0((void *)(unaff_EBP - 0x2c6c),piVar20);
  if (bVar5) {
    do {
      iVar17 = FUN_00402bc0((int *)(unaff_EBP - 0x2c6c));
      cVar3 = FUN_0040f6d0();
      if (cVar3 == '\0') {
        piVar20 = (int *)(iVar17 + 4);
        *piVar20 = *piVar20 - *(int *)(unaff_EBP - 0x2b24);
        if (*piVar20 < 0) {
          *(undefined4 *)(iVar17 + 4) = 0;
        }
      }
      FUN_00407a30((void *)(unaff_EBP - 0x2c6c),(int *)(unaff_EBP - 0x2fcc));
      piVar20 = (int *)FUN_00530550(pvVar29,(undefined4 *)(unaff_EBP - 0x2df8));
      bVar5 = FUN_0042c6f0((void *)(unaff_EBP - 0x2c6c),piVar20);
    } while (bVar5);
    pvVar52 = *(void **)(unaff_EBP - 0x2b14);
  }
  FUN_004c8280((undefined4 *)(unaff_EBP - 0x2bf8));
  pvVar52 = (void *)((int)pvVar52 + 0x1178);
  *(undefined1 *)(unaff_EBP - 4) = 0x16;
  FUN_00428070(pvVar52,(undefined4 *)(unaff_EBP - 0x2ba4));
  piVar20 = (int *)FUN_00530550(pvVar52,(undefined4 *)(unaff_EBP - 0x2ce8));
  bVar5 = FUN_0042c6f0((void *)(unaff_EBP - 0x2ba4),piVar20);
  if (bVar5) {
    do {
      pcVar21 = (char *)FUN_0052eb90((int *)(unaff_EBP - 0x2ba4));
      iVar17 = *(int *)(unaff_EBP - 0x2b24);
      *(int *)(pcVar21 + 8) = *(int *)(pcVar21 + 8) - iVar17;
      iVar19 = *(int *)(pcVar21 + 8);
      if (iVar19 < 1) {
        FUN_004d6620((void *)(unaff_EBP - 0x2bf8),(undefined4 *)(unaff_EBP - 0x2ba4));
      }
      else if (*pcVar21 == '\x01') {
        if (0 < *(int *)(*(int *)(unaff_EBP - 0x2b14) + 300)) {
          *(undefined4 *)(*(int *)(unaff_EBP - 0x2b14) + 300) = 0;
        }
      }
      else if (((*pcVar21 == '\x04') && (*(char *)(*(int *)(unaff_EBP - 0x2b18) + 0xb4) == '\0')) &&
              (iVar19 / 400 != (iVar17 + iVar19) / 400)) {
        pvVar52 = (void *)FUN_00405420(*(void **)(unaff_EBP - 0x2b18),(uint *)(pcVar21 + 0x10));
        uVar60 = 0;
        iVar17 = 0;
        cVar3 = '\x01';
        puVar12 = (undefined4 *)(unaff_EBP - 0x2be8);
        puVar31 = *(undefined4 **)(unaff_EBP - 0x2b28);
        pfVar25 = (float *)FUN_00401080((void *)(unaff_EBP - 0x1700),0,0,0);
        FUN_004cfd50(*(void **)(unaff_EBP - 0x2b18),*(float *)(unaff_EBP - 0x2b14),pvVar52,
                     *(float *)(pcVar21 + 4),'\0','\0',0.0,
                     (int)*(float *)(unaff_EBP - 0x2b14) + 0x1320,pfVar25,puVar31,puVar12,cVar3,
                     iVar17,(int)uVar60,(char)(uVar60 >> 0x20));
      }
      FUN_0052ebf0((void *)(unaff_EBP - 0x2ba4),(undefined4 *)(unaff_EBP - 0x2b30));
      pvVar52 = (void *)(*(int *)(unaff_EBP - 0x2b14) + 0x1178);
      piVar20 = (int *)FUN_00530550(pvVar52,(undefined4 *)(unaff_EBP - 0x2ce8));
      bVar5 = FUN_0042c6f0((void *)(unaff_EBP - 0x2ba4),piVar20);
    } while (bVar5);
  }
  FUN_00428070((void *)(unaff_EBP - 0x2bf8),(undefined4 *)(unaff_EBP - 0x2c8c));
  piVar20 = (int *)FUN_00530550((void *)(unaff_EBP - 0x2bf8),(undefined4 *)(unaff_EBP - 0x2cec));
  bVar5 = FUN_0042c6f0((void *)(unaff_EBP - 0x2c8c),piVar20);
  if (bVar5) {
    do {
      puVar12 = (undefined4 *)FUN_0052eb90((int *)(unaff_EBP - 0x2c8c));
      FUN_005305b0(pvVar52,(int *)(unaff_EBP - 0x3054),(int *)*puVar12);
      FUN_0052ebf0((void *)(unaff_EBP - 0x2c8c),(undefined4 *)(unaff_EBP - 0x2b30));
      piVar20 = (int *)FUN_00530550((void *)(unaff_EBP - 0x2bf8),(undefined4 *)(unaff_EBP - 0x2cec))
      ;
      bVar5 = FUN_0042c6f0((void *)(unaff_EBP - 0x2c8c),piVar20);
    } while (bVar5);
  }
  pvVar52 = *(void **)(unaff_EBP - 0x2b14);
  *(int *)((int)pvVar52 + 300) = *(int *)((int)pvVar52 + 300) - *(int *)(unaff_EBP - 0x2b24);
  if (0 < *(int *)((int)pvVar52 + 300)) {
    *(undefined4 *)((int)pvVar52 + 0x6c) = 0;
    *(undefined1 *)((int)pvVar52 + 0x68) = 0;
  }
  if (*(char *)((int)pvVar52 + 0x60) == '\x06') {
LAB_0053e357:
    if (*(char *)((int)pvVar52 + 0x68) == '\0') {
      piVar53 = (int *)((int)pvVar52 + 0x11b4);
      FUN_00428070(piVar53,(undefined4 *)(unaff_EBP - 0x2c38));
      piVar20 = (int *)FUN_00530550(piVar53,(undefined4 *)(unaff_EBP - 0x2cf0));
      bVar5 = FUN_0042c6f0((void *)(unaff_EBP - 0x2c38),piVar20);
      if (bVar5) {
        iVar17 = *(int *)(unaff_EBP - 0x2b14);
        do {
          puVar23 = (uint *)FUN_00402bc0((int *)(unaff_EBP - 0x2c38));
          piVar20 = (int *)FUN_00530550((void *)(iVar17 + 0x11ac),(undefined4 *)(unaff_EBP - 0x2fd4)
                                       );
          pvVar52 = (void *)FUN_00530600((void *)(iVar17 + 0x11ac),(int *)(unaff_EBP - 0x2f9c),
                                         puVar23);
          bVar5 = FUN_004078d0(pvVar52,piVar20);
          if ((bVar5) &&
             (pvVar52 = (void *)FUN_00405420(*(void **)(unaff_EBP - 0x2b18),puVar23),
             pvVar52 != (void *)0x0)) {
            FUN_00408230(pvVar52,*(int *)(unaff_EBP - 0x2b28));
            FUN_00422a90(unaff_EBP - 0xc08);
            iVar19 = *(int *)(unaff_EBP - 0x2b14);
            *(undefined4 *)(unaff_EBP - 0xbf8) = 0;
            *(undefined4 *)(unaff_EBP - 0xc08) = *(undefined4 *)(iVar19 + 8);
            *(undefined4 *)(unaff_EBP - 0xc04) = *(undefined4 *)(iVar19 + 0xc);
            *(undefined4 *)(unaff_EBP - 0xc00) = *(undefined4 *)((int)pvVar52 + 8);
            *(undefined4 *)(unaff_EBP - 0xbfc) = *(undefined4 *)((int)pvVar52 + 0xc);
            *(undefined1 *)(unaff_EBP - 0xbc3) = 4;
            *(undefined1 *)(unaff_EBP - 0xbf4) = 0;
            FUN_00402a40((void *)(unaff_EBP - 0xbe8),(undefined4 *)((int)pvVar52 + 0x10));
            FUN_00428400(*(void **)(unaff_EBP - 0x2b28),(undefined4 *)(unaff_EBP - 0xc08));
          }
          FUN_00407a30((void *)(unaff_EBP - 0x2c38),(int *)(unaff_EBP - 0x2fa0));
          piVar53 = (int *)(*(int *)(unaff_EBP - 0x2b14) + 0x11b4);
          piVar20 = (int *)FUN_00530550(piVar53,(undefined4 *)(unaff_EBP - 0x2cf0));
          bVar5 = FUN_0042c6f0((void *)(unaff_EBP - 0x2c38),piVar20);
        } while (bVar5);
      }
      FUN_004f8520((int *)(*(int *)(unaff_EBP - 0x2b14) + 0x11ac));
      FUN_004f8520(piVar53);
      pvVar52 = *(void **)(unaff_EBP - 0x2b14);
    }
  }
  else if ((-1 < *(int *)((int)pvVar52 + 0x6c)) || (*(char *)((int)pvVar52 + 0x68) == '\0')) {
    if (*(int *)((int)pvVar52 + 0x6c) == 0) {
      bVar6 = *(byte *)((int)pvVar52 + 0x68);
      *(uint *)(unaff_EBP - 0x2b1c) = (uint)bVar6;
      piVar20 = FUN_004cde60((void *)((int)pvVar52 + 0x139c),(int *)(unaff_EBP - 0x2b1c));
      iVar17 = FUN_00409780(*(void **)(unaff_EBP - 0x2b14),(uint)bVar6,-1);
      *piVar20 = iVar17;
      pvVar52 = *(void **)(unaff_EBP - 0x2b14);
    }
    *(int *)((int)pvVar52 + 0x6c) = *(int *)((int)pvVar52 + 0x6c) + *(int *)(unaff_EBP - 0x2b24);
    if (((*(char *)((int)pvVar52 + 0x68) == '6') &&
        (iVar17 = FUN_00407db0(pvVar52,0xffffffff), iVar17 < *(int *)((int)pvVar52 + 0x6c))) &&
       (iVar17 = FUN_004084b0((int)pvVar52), *(int *)((int)pvVar52 + 0x6c) < iVar17)) {
      iVar17 = FUN_00407db0(pvVar52,0xffffffff);
      pvVar52 = *(void **)(unaff_EBP - 0x2b14);
      iVar19 = FUN_00411d60(pvVar52,0xffffffff);
      if (*(int *)((int)pvVar52 + 0x6c) < iVar17 + iVar19) {
        puVar12 = (undefined4 *)FUN_004013d0((void *)((int)pvVar52 + 0x34),2);
        *puVar12 = 0xc2700000;
      }
    }
    goto LAB_0053e357;
  }
  uVar24 = FUN_0040f690((int)pvVar52);
  cVar3 = *(char *)((int)pvVar52 + 0x68);
  if ((char)uVar24 == '\0') {
    if (((((cVar3 != '\x18') && (cVar3 != '\x19')) && (cVar3 != '\x1b')) &&
        ((cVar3 != ';' && (cVar3 != '?')))) && ((cVar3 != '@' && (cVar3 != '\b')))) {
      fVar56 = *(float *)((int)pvVar52 + 0x170) - *(float *)(unaff_EBP - 0x2b88) * 5e-05;
      goto LAB_0053e567;
    }
  }
  else if ((cVar3 != '\x1c') &&
          (((((cVar3 != '_' && (cVar3 != '%')) &&
             ((cVar3 != '.' && (((cVar3 != '-' && (cVar3 != '\x1f')) && (cVar3 != '!')))))) &&
            ((cVar3 != '+' && (cVar3 != '\"')))) ||
           (iVar17 = FUN_004084b0((int)pvVar52), iVar17 <= *(int *)((int)pvVar52 + 0x6c))))) {
    fVar56 = *(float *)(unaff_EBP - 0x2b88) * 0.0001 + *(float *)((int)pvVar52 + 0x170);
LAB_0053e567:
    *(float *)((int)pvVar52 + 0x170) = fVar56;
  }
  if (*(float *)((int)pvVar52 + 0x170) <= 0.0 && *(float *)((int)pvVar52 + 0x170) != 0.0) {
    *(undefined4 *)((int)pvVar52 + 0x170) = 0;
  }
  if (1.0 < *(float *)((int)pvVar52 + 0x170)) {
    *(undefined4 *)((int)pvVar52 + 0x170) = 0x3f800000;
  }
  cVar3 = FUN_0040f610((int)pvVar52);
  if (cVar3 == '\0') {
    *(float *)((int)pvVar52 + 0x174) =
         *(float *)(unaff_EBP - 0x2b88) / 2000.0 + *(float *)((int)pvVar52 + 0x174);
  }
  else if (0.0 < *(float *)((int)pvVar52 + 0x174)) {
    if ((*(char *)((int)pvVar52 + 0x990) == '\x03') && (*(char *)((int)pvVar52 + 0x991) == '\r')) {
      fVar56 = *(float *)(unaff_EBP - 0x2b88) / 1200.0;
    }
    else {
      fVar56 = *(float *)(unaff_EBP - 0x2b88) / 600.0;
    }
    fVar56 = *(float *)((int)pvVar52 + 0x174) - fVar56;
    *(float *)((int)pvVar52 + 0x174) = fVar56;
    if (fVar56 < 0.0) {
      *(undefined4 *)((int)pvVar52 + 0x174) = 0;
    }
  }
  if (1.0 < *(float *)((int)pvVar52 + 0x174)) {
    *(undefined4 *)((int)pvVar52 + 0x174) = 0x3f800000;
  }
  if (*(char *)((int)pvVar52 + 0x68) != '\0') {
    FUN_00405570((void *)((int)pvVar52 + 0x10),0x10,'\0');
  }
  fVar55 = FUN_004021b0((float *)((int)pvVar52 + 0x40));
  *(float *)(unaff_EBP - 0x2b1c) = (float)fVar55;
  if (0.0 < *(float *)(unaff_EBP - 0x2b1c)) {
    FUN_00405570((void *)((int)pvVar52 + 0x10),0x400,'\0');
  }
  if ((*(char *)((int)pvVar52 + 0x68) == 'S') || (*(char *)((int)pvVar52 + 0x68) == 'T')) {
    fVar55 = FUN_004021b0((float *)((int)pvVar52 + 0x40));
    *(float *)(unaff_EBP - 0x2b1c) = (float)fVar55;
    if (0.0 < *(float *)(unaff_EBP - 0x2b1c)) {
      *(undefined1 *)((int)pvVar52 + 0x68) = 0;
    }
  }
  if ((((*(char *)(*(int *)(unaff_EBP - 0x2b18) + 0xb4) == '\0') &&
       (*(char *)((int)pvVar52 + 0x60) != '\0')) ||
      (pvVar52 == *(void **)(*(int *)(unaff_EBP - 0x2b18) + 0xb8))) &&
     ((*(char *)((int)pvVar52 + 0x68) == 'P' || (*(char *)((int)pvVar52 + 0x68) == 'Q')))) {
    pcVar21 = (char *)((int)pvVar52 + 0x1e8);
    iVar19 = *(int *)((int)pvVar52 + 0x6c) - *(int *)(unaff_EBP - 0x2b24);
    *(int *)(unaff_EBP - 0x2b1c) = *(int *)((int)pvVar52 + 0x6c);
    iVar17 = FUN_00413aa0(pcVar21);
    if ((iVar19 < iVar17) && (*(int *)(unaff_EBP - 0x2b1c) / 200 != iVar19 / 200)) {
      iVar19 = FUN_00413aa0(pcVar21);
      iVar17 = *(int *)(unaff_EBP - 0x2b14);
      cVar3 = *(char *)(iVar17 + 0x60);
      *(float *)(unaff_EBP - 0x2b20) = 200.0 / (float)iVar19;
      if (cVar3 != '\0') {
        *(float *)(unaff_EBP - 0x2b20) = (200.0 / (float)iVar19) * 0.5;
      }
      fVar55 = FUN_00413be0(pcVar21);
      *(float *)(unaff_EBP - 0x2b1c) = (float)fVar55;
      fVar56 = *(float *)(unaff_EBP - 0x2b1c) * *(float *)(unaff_EBP - 0x2b20);
      *(float *)(unaff_EBP - 0x2b40) = fVar56;
      if (0.0 < fVar56) {
        FUN_00422a90(unaff_EBP - 0x508);
        FUN_00402a40((void *)(unaff_EBP - 0x4e8),(undefined4 *)(iVar17 + 0x10));
        uVar18 = *(uint *)(unaff_EBP - 0x2b40);
        pvVar52 = *(void **)(unaff_EBP - 0x2b28);
        *(undefined4 *)(unaff_EBP - 0x500) = *(undefined4 *)(iVar17 + 8);
        *(undefined4 *)(unaff_EBP - 0x4fc) = *(undefined4 *)(iVar17 + 0xc);
        *(undefined4 *)(unaff_EBP - 0x508) = 0xffffffff;
        *(undefined4 *)(unaff_EBP - 0x504) = 0xffffffff;
        *(uint *)(unaff_EBP - 0x4f8) = uVar18 ^ 0x80000000;
        *(undefined1 *)(unaff_EBP - 0x4f4) = 0;
        FUN_00428400(pvVar52,(undefined4 *)(unaff_EBP - 0x508));
        *(float *)(iVar17 + 0x16c) = *(float *)(unaff_EBP - 0x2b40) + *(float *)(iVar17 + 0x16c);
        fVar55 = FUN_0040fda0(iVar17);
        *(float *)(unaff_EBP - 0x2b1c) = (float)fVar55;
        if (*(float *)(unaff_EBP - 0x2b1c) <= *(float *)(iVar17 + 0x16c) &&
            *(float *)(iVar17 + 0x16c) != *(float *)(unaff_EBP - 0x2b1c)) {
          fVar55 = FUN_0040fda0(iVar17);
          *(float *)(iVar17 + 0x16c) = (float)fVar55;
        }
      }
      fVar55 = FUN_00414200(pcVar21);
      *(float *)(unaff_EBP - 0x2b1c) = (float)fVar55;
      fVar55 = FUN_004055a0(2.0);
      *(float *)(unaff_EBP - 0x2b48) = (float)fVar55;
      fVar58 = (*(float *)(unaff_EBP - 0x2b1c) / *(float *)(unaff_EBP - 0x2b48)) *
               *(float *)(unaff_EBP - 0x2b20);
      fVar56 = fVar58 + *(float *)(iVar17 + 0x13c);
      *(float *)(iVar17 + 0x13c) = fVar56;
      if (0.0 <= fVar56) {
        if (fVar56 - fVar58 < 0.0) {
          FUN_004c8530(unaff_EBP - 0x1ec);
          *(undefined4 *)(unaff_EBP - 0x1e0) = 0x2f;
          FUN_00402550((void *)(unaff_EBP - 0x1ec),(longlong *)(iVar17 + 0x10));
          FUN_00428590((void *)(*(int *)(unaff_EBP - 0x2b28) + 8),(undefined4 *)(unaff_EBP - 0x1ec))
          ;
        }
        *(undefined4 *)(iVar17 + 0x13c) = 0;
      }
      if (*(int *)(iVar17 + 0x6c) / 400 !=
          (*(int *)(iVar17 + 0x6c) - *(int *)(unaff_EBP - 0x2b24)) / 400) {
        FUN_004c8530(unaff_EBP - 0x5a8);
        pvVar52 = *(void **)(unaff_EBP - 0x2b14);
        FUN_00402550((void *)(unaff_EBP - 0x5a8),(longlong *)((int)pvVar52 + 0x10));
        iVar17 = *(int *)(unaff_EBP - 0x2b28);
        *(undefined4 *)(unaff_EBP - 0x598) = 0x3f800000;
        *(undefined4 *)(unaff_EBP - 0x59c) = 0x2c;
        FUN_00428590((void *)(iVar17 + 8),(undefined4 *)(unaff_EBP - 0x5a8));
        goto LAB_0053e9a3;
      }
    }
    pvVar52 = *(void **)(unaff_EBP - 0x2b14);
  }
LAB_0053e9a3:
  FUN_004c8280((undefined4 *)(unaff_EBP - 0x2cdc));
  pvVar29 = (void *)((int)pvVar52 + 0x13a4);
  *(undefined1 *)(unaff_EBP - 4) = 0x17;
  FUN_00428070(pvVar29,(undefined4 *)(unaff_EBP - 0x2b7c));
  piVar20 = (int *)FUN_00530550(pvVar29,(undefined4 *)(unaff_EBP - 0x2cf8));
  bVar5 = FUN_0042c6f0((void *)(unaff_EBP - 0x2b7c),piVar20);
  if (bVar5) {
    *(float *)(unaff_EBP - 0x2b1c) = *(float *)(unaff_EBP - 0x2b88) * 0.00025;
    do {
      puVar23 = (uint *)FUN_00402bc0((int *)(unaff_EBP - 0x2b7c));
      pvVar52 = *(void **)(unaff_EBP - 0x2b18);
      fVar56 = (float)puVar23[2] - *(float *)(unaff_EBP - 0x2b1c);
      *(float *)(unaff_EBP - 0x2b48) = fVar56;
      puVar23[2] = (uint)fVar56;
      uVar18 = FUN_00405420(pvVar52,puVar23);
      if (uVar18 != 0) {
        if ((0.0 < *(float *)(uVar18 + 0x16c)) &&
           (*(float *)(unaff_EBP - 0x2b48) <= 0.01 && *(float *)(unaff_EBP - 0x2b48) != 0.01)) {
          puVar23[2] = 0x3c23d70a;
        }
        if (((float)puVar23[2] <= 0.0) ||
           ((*puVar23 != 0 || puVar23[1] != 0 && (*(float *)(uVar18 + 0x16c) <= 0.0)))) {
          FUN_004d6620((void *)(unaff_EBP - 0x2cdc),(undefined4 *)(unaff_EBP - 0x2b7c));
        }
      }
      FUN_00407a30((void *)(unaff_EBP - 0x2b7c),(int *)(unaff_EBP - 0x2fb0));
      piVar20 = (int *)FUN_00530550(pvVar29,(undefined4 *)(unaff_EBP - 0x2cf8));
      bVar5 = FUN_0042c6f0((void *)(unaff_EBP - 0x2b7c),piVar20);
    } while (bVar5);
    pvVar52 = *(void **)(unaff_EBP - 0x2b14);
  }
  FUN_00428070((void *)(unaff_EBP - 0x2cdc),(undefined4 *)(unaff_EBP - 0x2c4c));
  piVar20 = (int *)FUN_00530550((void *)(unaff_EBP - 0x2cdc),(undefined4 *)(unaff_EBP - 0x2d00));
  bVar5 = FUN_0042c6f0((void *)(unaff_EBP - 0x2c4c),piVar20);
  if (bVar5) {
    do {
      puVar12 = (undefined4 *)FUN_0052eb90((int *)(unaff_EBP - 0x2c4c));
      FUN_0040a1d0(pvVar29,(undefined4 *)(unaff_EBP - 0x2fb8),(int *)*puVar12);
      FUN_0052ebf0((void *)(unaff_EBP - 0x2c4c),(undefined4 *)(unaff_EBP - 0x2b30));
      piVar20 = (int *)FUN_00530550((void *)(unaff_EBP - 0x2cdc),(undefined4 *)(unaff_EBP - 0x2d00))
      ;
      bVar5 = FUN_0042c6f0((void *)(unaff_EBP - 0x2c4c),piVar20);
    } while (bVar5);
  }
  FUN_004c8280((undefined4 *)(unaff_EBP - 0x2ccc));
  pvVar29 = (void *)((int)pvVar52 + 0x13ac);
  *(undefined1 *)(unaff_EBP - 4) = 0x18;
  FUN_00428070(pvVar29,(undefined4 *)(unaff_EBP - 0x2b80));
  piVar20 = (int *)FUN_00530550(pvVar29,(undefined4 *)(unaff_EBP - 0x2ddc));
  bVar5 = FUN_0042c6f0((void *)(unaff_EBP - 0x2b80),piVar20);
  if (bVar5) {
    *(undefined4 *)(unaff_EBP - 0x2d08) = 0;
    do {
      puVar23 = (uint *)FUN_00402bc0((int *)(unaff_EBP - 0x2b80));
      FUN_0052e710((float *)(puVar23 + 2),(float *)(unaff_EBP - 0x2d08),*(int *)(unaff_EBP - 0x2b24)
                   ,0.001);
      uVar18 = FUN_00405420(*(void **)(unaff_EBP - 0x2b18),puVar23);
      if ((uVar18 == 0) || (*(float *)(uVar18 + 0x16c) <= 0.0)) {
        FUN_004d6620((void *)(unaff_EBP - 0x2ccc),(undefined4 *)(unaff_EBP - 0x2b80));
      }
      FUN_00407a30((void *)(unaff_EBP - 0x2b80),(int *)(unaff_EBP - 0x2fc0));
      piVar20 = (int *)FUN_00530550(pvVar29,(undefined4 *)(unaff_EBP - 0x2ddc));
      bVar5 = FUN_0042c6f0((void *)(unaff_EBP - 0x2b80),piVar20);
    } while (bVar5);
    pvVar52 = *(void **)(unaff_EBP - 0x2b14);
  }
  FUN_00428070((void *)(unaff_EBP - 0x2ccc),(undefined4 *)(unaff_EBP - 0x2c84));
  piVar20 = (int *)FUN_00530550((void *)(unaff_EBP - 0x2ccc),(undefined4 *)(unaff_EBP - 0x2de4));
  bVar5 = FUN_0042c6f0((void *)(unaff_EBP - 0x2c84),piVar20);
  if (bVar5) {
    do {
      puVar12 = (undefined4 *)FUN_0052eb90((int *)(unaff_EBP - 0x2c84));
      FUN_0040a1d0(pvVar29,(undefined4 *)(unaff_EBP - 0x2fc8),(int *)*puVar12);
      FUN_0052ebf0((void *)(unaff_EBP - 0x2c84),(undefined4 *)(unaff_EBP - 0x2b30));
      piVar20 = (int *)FUN_00530550((void *)(unaff_EBP - 0x2ccc),(undefined4 *)(unaff_EBP - 0x2de4))
      ;
      bVar5 = FUN_0042c6f0((void *)(unaff_EBP - 0x2c84),piVar20);
    } while (bVar5);
  }
  pvVar29 = *(void **)(unaff_EBP - 0x2b18);
  if ((((*(char *)((int)pvVar29 + 0xb4) == '\0') && (*(char *)((int)pvVar52 + 0x60) == '\x01')) &&
      (0.0 < *(float *)((int)pvVar52 + 0x16c))) &&
     (bVar5 = FUN_00530540((int)pvVar52 + 0x13a4), bVar5)) {
    fVar55 = FUN_0040fda0((int)pvVar52);
    *(float *)((int)pvVar52 + 0x16c) = (float)fVar55;
  }
  fVar56 = *(float *)(unaff_EBP - 0x2ba0);
  *(undefined1 *)(unaff_EBP - 0x2b29) = 1;
  FUN_004e1520((float *)(unaff_EBP - 0x1c),fVar56,(float *)((int)pvVar52 + 0x40));
  if (0 < *(int *)((int)pvVar52 + 300)) {
    puVar12 = FUN_00401080((void *)(unaff_EBP - 0x1418),0,0,0);
    FUN_00401060((void *)(unaff_EBP - 0x1c),puVar12);
  }
  if ((((*(byte *)((int)pvVar52 + 0x124) & 1) == 0) &&
      ((*(byte *)((int)pvVar52 + 0x5c) & 0x10) != 0)) &&
     (pfVar25 = (float *)FUN_004013d0((void *)(unaff_EBP - 0x1c),2), 0.0 < *pfVar25)) {
    *pfVar25 = 0.0;
  }
  puVar12 = (undefined4 *)FUN_0041cba0(unaff_EBP - 0x1c);
  *(undefined4 **)(unaff_EBP - 0x2b30) = puVar12;
  FUN_004cde20((void *)(unaff_EBP - 0xa4),puVar12);
  *(undefined4 *)(unaff_EBP - 0x2b78) = 0;
  fVar55 = FUN_00402180((float *)(unaff_EBP - 0xa4));
  *(float *)(unaff_EBP - 0x2b1c) = (float)fVar55;
  if (0.01 < *(float *)(unaff_EBP - 0x2b1c)) {
    puVar12 = (undefined4 *)FUN_0041cba0((int)pvVar52 + 0x34);
    FUN_004cde20((void *)(unaff_EBP - 0x94),puVar12);
    fVar55 = FUN_00402180((float *)(unaff_EBP - 0x94));
    *(float *)(unaff_EBP - 0x2b1c) = (float)fVar55;
    if (0.01 < *(float *)(unaff_EBP - 0x2b1c)) {
      FUN_00401f50((float *)(unaff_EBP - 0xa4));
      FUN_00401f50((float *)(unaff_EBP - 0x94));
      pfVar25 = (float *)FUN_004013d0((void *)(unaff_EBP - 0x94),1);
      pfVar26 = (float *)FUN_004013d0((void *)(unaff_EBP - 0xa4),0);
      *(float *)(unaff_EBP - 0x2b1c) = *pfVar25 * *pfVar26;
      pfVar25 = (float *)FUN_004013d0((void *)(unaff_EBP - 0x94),0);
      pfVar26 = (float *)FUN_004013d0((void *)(unaff_EBP - 0xa4),1);
      fVar58 = *(float *)(unaff_EBP - 0x2b1c) - *pfVar25 * *pfVar26;
      fVar56 = -1.0;
      if ((fVar58 < -1.0) || (fVar56 = 1.0, 1.0 < fVar58)) {
        fVar58 = fVar56;
      }
      fVar55 = FUN_00402480(fVar58);
      *(float *)(unaff_EBP - 0x2b1c) = (float)fVar55;
      pvVar52 = *(void **)(unaff_EBP - 0x2b14);
      *(float *)(unaff_EBP - 0x2b78) = (*(float *)(unaff_EBP - 0x2b1c) / 3.1415927) * 180.0 * 0.5;
    }
  }
  *(void **)(unaff_EBP - 0x2bb0) = (void *)((int)pvVar52 + 0x80);
  pfVar25 = (float *)FUN_004013d0((void *)((int)pvVar52 + 0x80),0);
  fVar56 = *pfVar25;
  *(float **)(unaff_EBP - 0x2b4c) = pfVar25;
  if (2.0 < fVar56) {
    *(float *)(unaff_EBP - 0x2b78) = (2.0 / fVar56) * *(float *)(unaff_EBP - 0x2b78);
  }
  cVar3 = FUN_0040f6e0((int)pvVar52);
  if (cVar3 == '\0') {
    *(void **)(unaff_EBP - 0x2b64) = (void *)((int)pvVar52 + 0x28);
    pfVar25 = (float *)FUN_004013d0((void *)((int)pvVar52 + 0x28),1);
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
    *(void **)(unaff_EBP - 0x2b64) = (void *)((int)pvVar52 + 0x28);
    pfVar25 = (float *)FUN_004013d0((void *)((int)pvVar52 + 0x28),1);
    fVar56 = 0.001;
  }
  iVar17 = *(int *)(unaff_EBP - 0x2b24);
  *(float **)(unaff_EBP - 0x2b40) = pfVar25;
  FUN_0052e710(pfVar25,(float *)(unaff_EBP - 0x2b78),iVar17,fVar56);
  *(int *)(unaff_EBP - 0x2b3c) = (int)pvVar52 + 0x34;
  puVar12 = (undefined4 *)FUN_0041cba0((int)pvVar52 + 0x34);
  *(undefined4 **)(unaff_EBP - 0x2b5c) = puVar12;
  FUN_004cde20((void *)(unaff_EBP - 0xde8),puVar12);
  *(undefined4 *)(unaff_EBP - 0x2b60) = 0x40c00000;
  iVar17 = FUN_0040f650((int)pvVar52);
  if (((char)iVar17 != '\0') || ((*(ushort *)((int)pvVar52 + 0x7e) & 0x200) != 0)) {
    *(undefined4 *)(unaff_EBP - 0x2b60) = 0x41000000;
  }
  if (*(char *)((int)pvVar52 + 0x60) == '\x05') {
    *(undefined4 *)(unaff_EBP - 0x2b60) = 0x41400000;
  }
  if (*(char *)((int)pvVar52 + 0x68) == 'k') {
    if ((*(byte *)((int)pvVar52 + 0x5c) & 2) != 0) {
      fVar55 = FUN_004095d0(*(int *)((int)pvVar52 + 0x114c));
      *(float *)(unaff_EBP - 0x2b1c) = (float)fVar55;
      fVar56 = *(float *)(unaff_EBP - 0x2b1c);
LAB_0053f086:
      *(float *)(unaff_EBP - 0x2b60) = fVar56 * *(float *)(unaff_EBP - 0x2b60);
    }
  }
  else if ((*(byte *)((int)pvVar52 + 0x5c) & 2) != 0) {
    fVar55 = FUN_004120f0(*(int *)((int)pvVar52 + 0x1148));
    *(float *)(unaff_EBP - 0x2b1c) = (float)fVar55;
    fVar56 = *(float *)(unaff_EBP - 0x2b1c);
    goto LAB_0053f086;
  }
  if (pvVar52 == *(void **)((int)pvVar29 + 0xb8)) {
    if (((*(char *)((int)pvVar52 + 0x68) == 'k') && ((*(uint *)((int)pvVar52 + 0x5c) & 1) != 0)) &&
       ((*(uint *)((int)pvVar52 + 0x5c) & 2) == 0)) {
      *(undefined1 *)((int)pvVar52 + 0x68) = 0;
    }
    if ((pvVar52 == *(void **)((int)pvVar29 + 0xb8)) && (*(char *)((int)pvVar52 + 0x68) == 'j')) {
      puVar23 = (uint *)((int)pvVar52 + 0x11c8);
      uVar18 = FUN_00405420(pvVar29,puVar23);
      if ((uVar18 == 0) ||
         (uVar18 = FUN_00405420(pvVar29,puVar23), *(float *)(uVar18 + 0x16c) < 0.0)) {
LAB_0053f18c:
        pvVar52 = *(void **)(unaff_EBP - 0x2b14);
        bVar5 = pvVar52 == *(void **)((int)pvVar29 + 0xb8);
      }
      else {
        uVar18 = FUN_00405420(pvVar29,puVar23);
        uVar18 = FUN_0040f7f0(*(int *)(uVar18 + 100));
        if ((char)uVar18 == '\0') goto LAB_0053f18c;
        fVar55 = FUN_004116f0(*(int *)(*(int *)(unaff_EBP - 0x2b14) + 0x113c));
        *(float *)(unaff_EBP - 0x2b1c) = (float)fVar55;
        if (*(float *)(unaff_EBP - 0x2b1c) == 0.0) {
          *(undefined1 *)(*(int *)(unaff_EBP - 0x2b14) + 0x68) = 0;
          uVar18 = FUN_00405420(pvVar29,puVar23);
          pvVar52 = *(void **)(unaff_EBP - 0x2b14);
          bVar5 = uVar18 == 0;
        }
        else {
          *(float *)(unaff_EBP - 0x2b60) =
               *(float *)(unaff_EBP - 0x2b1c) * *(float *)(unaff_EBP - 0x2b60);
          uVar18 = FUN_00405420(pvVar29,puVar23);
          pvVar52 = *(void **)(unaff_EBP - 0x2b14);
          bVar5 = uVar18 == 0;
        }
      }
      if (bVar5) {
        *(undefined1 *)((int)pvVar52 + 0x68) = 0;
      }
      fVar55 = FUN_004021b0((float *)(*(int *)((int)pvVar29 + 0xb8) + 0x40));
      *(float *)(unaff_EBP - 0x2b1c) = (float)fVar55;
      if (0.0 < *(float *)(unaff_EBP - 0x2b1c)) {
        *(float *)((int)pvVar52 + 0x1198) =
             *(float *)((int)pvVar52 + 0x1198) - *(float *)(unaff_EBP - 0x2ba0) * 0.002;
      }
      if (*(float *)((int)pvVar52 + 0x1198) <= 0.0) {
        *(undefined4 *)((int)pvVar52 + 0x1198) = 0;
        *(undefined1 *)((int)pvVar52 + 0x68) = 0;
      }
      if ((*(byte *)((int)pvVar52 + 0x124) & 1) != 0) {
        *(undefined1 *)((int)pvVar52 + 0x68) = 0;
      }
    }
  }
  if ((pvVar52 == *(void **)((int)pvVar29 + 0xb8)) && ((*(byte *)((int)pvVar29 + 0x84) & 1) != 0)) {
    *(undefined4 *)(unaff_EBP - 0x2b60) = 0x41a00000;
  }
  if ((*(byte *)((int)pvVar52 + 0x124) & 0x10) != 0) {
    fVar55 = FUN_0040a7f0(*(int *)((int)pvVar52 + 0x1144));
    *(float *)(unaff_EBP - 0x2b1c) = (float)fVar55;
    if (*(float *)(unaff_EBP - 0x2b1c) <= 0.0) {
      *(ushort *)((int)pvVar52 + 0x124) = *(ushort *)((int)pvVar52 + 0x124) & 0xffef;
    }
    else if ((*(byte *)((int)pvVar52 + 0x5c) & 1) == 0) {
      *(float *)(unaff_EBP - 0x2b60) =
           *(float *)(unaff_EBP - 0x2b1c) * *(float *)(unaff_EBP - 0x2b60);
    }
  }
  if ((*(byte *)((int)pvVar52 + 0x124) & 1) == 0) {
LAB_0053f36a:
    fVar56 = *(float *)(unaff_EBP - 0x2b88);
  }
  else {
    fVar55 = FUN_004021b0((float *)((int)pvVar52 + 0x40));
    *(float *)(unaff_EBP - 0x2b1c) = (float)fVar55;
    if (*(float *)(unaff_EBP - 0x2b1c) <= 0.0) goto LAB_0053f36a;
    fVar55 = FUN_00409740(*(int *)((int)pvVar52 + 0x1140));
    *(float *)(unaff_EBP - 0x2b1c) = (float)fVar55;
    if (*(float *)(unaff_EBP - 0x2b1c) <= 0.0) {
      *(ushort *)((int)pvVar52 + 0x124) = *(ushort *)((int)pvVar52 + 0x124) & 0xfffe;
      goto LAB_0053f36a;
    }
    if (((*(byte *)((int)pvVar52 + 0x124) & 0x10) != 0) ||
       ((*(uint *)((int)pvVar52 + 0x5c) & 4) == 0)) goto LAB_0053f36a;
    fVar56 = *(float *)(unaff_EBP - 0x2b88);
    if ((*(uint *)((int)pvVar52 + 0x5c) & 1) == 0) {
      fVar58 = *(float *)((int)pvVar52 + 0x1194) -
               (1.0 - *(float *)(unaff_EBP - 0x2b1c)) * 0.0005 * fVar56;
      *(float *)((int)pvVar52 + 0x1194) = fVar58;
      if (fVar58 < 0.0) {
        *(undefined4 *)((int)pvVar52 + 0x1194) = 0;
      }
      if (*(float *)((int)pvVar52 + 0x1194) <= 0.01 && *(float *)((int)pvVar52 + 0x1194) != 0.01) {
        *(ushort *)((int)pvVar52 + 0x124) = *(ushort *)((int)pvVar52 + 0x124) & 0xfffe;
      }
    }
  }
  if (*(char *)((int)pvVar52 + 0x68) == 'O') {
    fVar55 = FUN_00409de0((int)pvVar52,0x4f,-1);
    *(float *)(unaff_EBP - 0x2b1c) = (float)fVar55;
    *(float *)(unaff_EBP - 0x2b60) =
         (*(float *)(unaff_EBP - 0x2b1c) * 0.4 + 0.5) * *(float *)(unaff_EBP - 0x2b60);
    iVar17 = FUN_0041cae0((int)pvVar29);
    fVar55 = FUN_004055a0(((float)iVar17 * 2.0) / 8.64e+07 - 1.0);
    *(float *)(unaff_EBP - 0x2b1c) = (float)fVar55;
    fVar55 = FUN_004055a0(1.0 - *(float *)(unaff_EBP - 0x2b1c));
    *(float *)(unaff_EBP - 0x2b48) = (float)fVar55;
    puVar23 = (uint *)((int)pvVar52 + 0x10);
    *(uint **)(unaff_EBP - 0x2b20) = puVar23;
    fVar55 = FUN_004d5c80(pvVar29,puVar23);
    *(float *)(unaff_EBP - 0x2b1c) = (float)fVar55;
    *(float *)(unaff_EBP - 0x2b54) = *(float *)(unaff_EBP - 0x2b1c) * *(float *)(unaff_EBP - 0x2b48)
    ;
    FUN_00428070((void *)(unaff_EBP - 0x2bf0),(undefined4 *)(unaff_EBP - 0x2c7c));
    piVar20 = (int *)FUN_00530550((void *)(unaff_EBP - 0x2bf0),(undefined4 *)(unaff_EBP - 0x2e04));
    bVar5 = FUN_0042c6f0((void *)(unaff_EBP - 0x2c7c),piVar20);
    if (bVar5) {
      do {
        piVar20 = (int *)FUN_00402bc0((int *)(unaff_EBP - 0x2c7c));
        iVar17 = *piVar20;
        FUN_00428070((void *)(iVar17 + 4),(undefined4 *)(unaff_EBP - 0x2c34));
        piVar53 = (int *)FUN_00530550((void *)(iVar17 + 4),(undefined4 *)(unaff_EBP - 0x2dec));
        bVar5 = FUN_0042c6f0((void *)(unaff_EBP - 0x2c34),piVar53);
        if (bVar5) {
          do {
            iVar17 = FUN_0052eb90((int *)(unaff_EBP - 0x2c34));
            if ((*(byte *)(iVar17 + 0x38) & 1) != 0) {
              puVar23 = FUN_00402c50((void *)(iVar17 + 8),(uint *)(unaff_EBP - 0x21b4),
                                     *(uint **)(unaff_EBP - 0x2b20));
              pfVar25 = FUN_00402550((void *)(unaff_EBP - 0x18ec),(longlong *)puVar23);
              fVar55 = FUN_004021b0(pfVar25);
              *(float *)(unaff_EBP - 0x2b1c) = (float)fVar55;
              if (*(float *)(unaff_EBP - 0x2b1c) < 256.0) {
                fVar56 = 1.0 - *(float *)(unaff_EBP - 0x2b1c) * 0.00390625;
                *(float *)(unaff_EBP - 0x2b54) =
                     fVar56 * fVar56 * 0.5 + *(float *)(unaff_EBP - 0x2b54);
              }
            }
            FUN_0052ebf0((void *)(unaff_EBP - 0x2c34),(undefined4 *)(unaff_EBP - 0x2b74));
            piVar53 = (int *)FUN_00530550((void *)(*piVar20 + 4),(undefined4 *)(unaff_EBP - 0x2dec))
            ;
            bVar5 = FUN_0042c6f0((void *)(unaff_EBP - 0x2c34),piVar53);
          } while (bVar5);
        }
        iVar17 = *piVar20;
        FUN_00530550((void *)(iVar17 + 0xc),(undefined4 *)(unaff_EBP - 0x2c3c));
        piVar53 = (int *)FUN_004d3de0((void *)(iVar17 + 0xc),(undefined4 *)(unaff_EBP - 0x2df4));
        bVar5 = FUN_0042c6f0((void *)(unaff_EBP - 0x2c3c),piVar53);
        if (bVar5) {
          do {
            piVar53 = (int *)FUN_004ce1f0((undefined4 *)(unaff_EBP - 0x2c3c));
            if (*piVar53 == 0x32) {
              puVar23 = FUN_00402c50(piVar53 + 2,(uint *)(unaff_EBP - 0x2454),
                                     *(uint **)(unaff_EBP - 0x2b20));
              pfVar25 = FUN_00402550((void *)(unaff_EBP - 0x1430),(longlong *)puVar23);
              fVar55 = FUN_004021b0(pfVar25);
              *(float *)(unaff_EBP - 0x2b1c) = (float)fVar55;
              if (*(float *)(unaff_EBP - 0x2b1c) < 256.0) {
                fVar56 = 1.0 - *(float *)(unaff_EBP - 0x2b1c) * 0.00390625;
                *(float *)(unaff_EBP - 0x2b54) =
                     fVar56 * fVar56 * 0.5 + *(float *)(unaff_EBP - 0x2b54);
              }
            }
            FUN_004ce200((void *)(unaff_EBP - 0x2c3c),(int *)(unaff_EBP - 0x2b74));
            piVar53 = (int *)FUN_004d3de0((void *)(*piVar20 + 0xc),
                                          (undefined4 *)(unaff_EBP - 0x2df4));
            bVar5 = FUN_0042c6f0((void *)(unaff_EBP - 0x2c3c),piVar53);
          } while (bVar5);
        }
        iVar17 = *piVar20;
        FUN_00530550((void *)(iVar17 + 0x30),(undefined4 *)(unaff_EBP - 0x2c74));
        piVar53 = (int *)FUN_004d3de0((void *)(iVar17 + 0x30),(undefined4 *)(unaff_EBP - 0x2dfc));
        bVar5 = FUN_0042c6f0((void *)(unaff_EBP - 0x2c74),piVar53);
        if (bVar5) {
          do {
            pcVar21 = (char *)FUN_004ce1f0((undefined4 *)(unaff_EBP - 0x2c74));
            if (*pcVar21 == '\x12') {
              puVar23 = FUN_00402c50(pcVar21 + 0x118,(uint *)(unaff_EBP - 0x21e4),
                                     *(uint **)(unaff_EBP - 0x2b20));
              pfVar25 = FUN_00402550((void *)(unaff_EBP - 0x1718),(longlong *)puVar23);
              fVar55 = FUN_004021b0(pfVar25);
              *(float *)(unaff_EBP - 0x2b1c) = (float)fVar55;
              if (*(float *)(unaff_EBP - 0x2b1c) < 256.0) {
                fVar56 = 1.0 - *(float *)(unaff_EBP - 0x2b1c) * 0.00390625;
                *(float *)(unaff_EBP - 0x2b54) =
                     fVar56 * fVar56 * 0.5 + *(float *)(unaff_EBP - 0x2b54);
              }
            }
            FUN_0041e300((void *)(unaff_EBP - 0x2c74),(int *)(unaff_EBP - 0x2b74));
            piVar53 = (int *)FUN_004d3de0((void *)(*piVar20 + 0x30),
                                          (undefined4 *)(unaff_EBP - 0x2dfc));
            bVar5 = FUN_0042c6f0((void *)(unaff_EBP - 0x2c74),piVar53);
          } while (bVar5);
        }
        FUN_00407a30((void *)(unaff_EBP - 0x2c7c),(int *)(unaff_EBP - 0x2fd0));
        piVar20 = (int *)FUN_00530550((void *)(unaff_EBP - 0x2bf0),
                                      (undefined4 *)(unaff_EBP - 0x2e04));
        bVar5 = FUN_0042c6f0((void *)(unaff_EBP - 0x2c7c),piVar20);
      } while (bVar5);
      puVar23 = *(uint **)(unaff_EBP - 0x2b20);
      pvVar29 = *(void **)(unaff_EBP - 0x2b18);
    }
    if (1.0 < *(float *)(unaff_EBP - 0x2b54)) {
      *(undefined4 *)(unaff_EBP - 0x2b54) = 0x3f800000;
    }
    FUN_00428070((void *)((int)pvVar29 + 4),(undefined4 *)(unaff_EBP - 0x2c40));
    piVar20 = (int *)FUN_00530550((void *)((int)pvVar29 + 4),(undefined4 *)(unaff_EBP - 0x2e0c));
    bVar5 = FUN_0042c6f0((void *)(unaff_EBP - 0x2c40),piVar20);
    if (bVar5) {
      pvVar52 = *(void **)(unaff_EBP - 0x2b6c);
      do {
        iVar17 = FUN_00402bc0((int *)(unaff_EBP - 0x2c40));
        iVar17 = *(int *)(iVar17 + 8);
        if ((iVar17 != 0) && ((*(ushort *)(iVar17 + 0x124) & 0x200) != 0)) {
          puVar27 = FUN_00402c50((void *)(iVar17 + 0x10),(uint *)(unaff_EBP - 0x25a4),puVar23);
          pfVar25 = FUN_00402550((void *)(unaff_EBP - 0x1448),(longlong *)puVar27);
          fVar55 = FUN_004021b0(pfVar25);
          *(float *)(unaff_EBP - 0x2b1c) = (float)fVar55;
          if (*(float *)(unaff_EBP - 0x2b1c) < 100.0) {
            fVar56 = 1.0 - *(float *)(unaff_EBP - 0x2b1c) / 100.0;
            *(float *)(unaff_EBP - 0x2b54) = fVar56 * fVar56 + *(float *)(unaff_EBP - 0x2b54);
          }
        }
        FUN_00407a30((void *)(unaff_EBP - 0x2c40),(int *)(unaff_EBP - 0x2fd8));
        piVar20 = (int *)FUN_00530550(pvVar52,(undefined4 *)(unaff_EBP - 0x2e0c));
        bVar5 = FUN_0042c6f0((void *)(unaff_EBP - 0x2c40),piVar20);
      } while (bVar5);
      pvVar29 = *(void **)(unaff_EBP - 0x2b18);
    }
    pvVar52 = *(void **)(unaff_EBP - 0x2b14);
    fVar55 = FUN_00409de0((int)pvVar52,0x4f,-1);
    *(float *)(unaff_EBP - 0x2b1c) = (float)fVar55;
    *(float *)(unaff_EBP - 0x2b90) =
         1.0 - (0.9 - *(float *)(unaff_EBP - 0x2b1c) * 0.5) * *(float *)(unaff_EBP - 0x2b54);
    fVar55 = FUN_00409de0((int)pvVar52,0x4f,-1);
    *(float *)(unaff_EBP - 0x2b1c) = (float)fVar55;
    *(float *)(unaff_EBP - 0x2b1c) = 0.5 - *(float *)(unaff_EBP - 0x2b1c) * 0.5;
    fVar55 = FUN_00401d80((float *)((int)pvVar52 + 0x34));
    *(float *)(unaff_EBP - 0x2b48) = (float)fVar55;
    fVar56 = (*(float *)(unaff_EBP - 0x2b90) -
             *(float *)(unaff_EBP - 0x2b1c) * *(float *)(unaff_EBP - 0x2b48)) *
             *(float *)(unaff_EBP - 0x2b88) * 0.0005 + *(float *)((int)pvVar52 + 0x1190);
    *(float *)((int)pvVar52 + 0x1190) = fVar56;
    if (fVar56 < 0.0) {
      *(undefined4 *)((int)pvVar52 + 0x1190) = 0;
    }
    fVar56 = *(float *)((int)pvVar52 + 0x1190);
LAB_0053fa21:
    if (1.0 < fVar56) {
      *(undefined4 *)((int)pvVar52 + 0x1190) = 0x3f800000;
    }
  }
  else {
    if ((*(ushort *)((int)pvVar52 + 0x124) & 0x400) != 0) {
      fVar55 = FUN_00409de0((int)pvVar52,99,-1);
      *(float *)(unaff_EBP - 0x2b1c) = (float)fVar55;
      fVar56 = (*(float *)(unaff_EBP - 0x2b1c) * 0.0005 + 1e-05) * *(float *)(unaff_EBP - 0x2b88) +
               *(float *)((int)pvVar52 + 0x1190);
      *(float *)((int)pvVar52 + 0x1190) = fVar56;
      goto LAB_0053fa21;
    }
    fVar56 = *(float *)((int)pvVar52 + 0x1190) - fVar56 * 0.0005;
    *(float *)((int)pvVar52 + 0x1190) = fVar56;
    if (fVar56 < 0.0) {
      *(undefined4 *)((int)pvVar52 + 0x1190) = 0;
    }
  }
  puVar12 = FUN_0040ef90(pvVar52,3);
  if (puVar12 != (undefined4 *)0x0) {
    *(undefined4 *)((int)pvVar52 + 0x1190) = 0x3f800000;
  }
  fVar56 = *(float *)(unaff_EBP - 0x2b88);
  fVar58 = fVar56 * 0.00025 * *(float *)((int)pvVar52 + 0x1190) + *(float *)((int)pvVar52 + 0x170);
  *(float *)((int)pvVar52 + 0x170) = fVar58;
  if (1.0 < fVar58) {
    *(undefined4 *)((int)pvVar52 + 0x170) = 0x3f800000;
  }
  uVar2 = *(ushort *)((int)pvVar52 + 0x124);
  if (((uVar2 & 0x10) == 0) || ((*(byte *)((int)pvVar52 + 0x5c) & 1) != 0)) {
    if (((uVar2 & 1) == 0) ||
       ((((uVar2 & 0x10) != 0 || ((*(uint *)((int)pvVar52 + 0x5c) & 4) == 0)) ||
        ((*(uint *)((int)pvVar52 + 0x5c) & 1) != 0)))) {
      fVar56 = fVar56 * 0.0001 + *(float *)((int)pvVar52 + 0x1194);
      goto LAB_0053fb19;
    }
  }
  else if ((uVar2 & 0x40) != 0) {
    fVar56 = *(float *)((int)pvVar52 + 0x1194) - fVar56 * 0.0002;
LAB_0053fb19:
    *(float *)((int)pvVar52 + 0x1194) = fVar56;
  }
  if (*(float *)((int)pvVar52 + 0x1194) <= 0.0 && *(float *)((int)pvVar52 + 0x1194) != 0.0) {
    *(undefined4 *)((int)pvVar52 + 0x1194) = 0;
  }
  if (1.0 < *(float *)((int)pvVar52 + 0x1194)) {
    *(undefined4 *)((int)pvVar52 + 0x1194) = 0x3f800000;
  }
  uVar2 = *(ushort *)((int)pvVar52 + 0x124);
  if ((((uVar2 & 0x40) != 0) && (((uVar2 & 1) == 0 || ((*(byte *)((int)pvVar52 + 0x5c) & 4) == 0))))
     && (((uVar2 & 0x10) == 0 || ((*(byte *)((int)pvVar52 + 0x5c) & 1) != 0)))) {
    *(float *)(unaff_EBP - 0x2b60) = *(float *)(unaff_EBP - 0x2b60) * 2.0;
  }
  puVar12 = FUN_0040ef90(pvVar52,0xc);
  if (puVar12 != (undefined4 *)0x0) {
    fVar55 = FUN_00409de0((int)pvVar52,100,-1);
    *(float *)(unaff_EBP - 0x2b1c) = (float)fVar55;
    *(float *)(unaff_EBP - 0x2b60) =
         (*(float *)(unaff_EBP - 0x2b1c) + 1.0) * *(float *)(unaff_EBP - 0x2b60);
  }
  if (*(char *)((int)pvVar52 + 0x68) == '0') {
LAB_0053fc10:
    *(undefined4 *)(unaff_EBP - 0x2b60) = 0x42200000;
  }
  else {
    if (*(char *)((int)pvVar52 + 0x68) == '6') {
      iVar17 = FUN_00407db0(pvVar52,0xffffffff);
      iVar19 = FUN_00411d60(*(void **)(unaff_EBP - 0x2b14),0xffffffff);
      pvVar52 = *(void **)(unaff_EBP - 0x2b14);
      if (*(int *)((int)pvVar52 + 0x6c) < iVar17 + iVar19) goto LAB_0053fc10;
    }
    if (((*(char *)((int)pvVar52 + 0x68) == '2') || (*(char *)((int)pvVar52 + 0x68) == '`')) &&
       (*(int *)((int)pvVar52 + 0x6c) < 500)) goto LAB_0053fc10;
  }
  cVar3 = *(char *)((int)pvVar52 + 0x68);
  *(undefined1 *)(unaff_EBP - 0x2c90) = 0;
  if ((cVar3 == '0') ||
     ((((((((((cVar3 == ':' || (cVar3 == 'A')) || (cVar3 == 'B')) ||
            ((cVar3 == 'C' || (cVar3 == '\f')))) || (cVar3 == '\x10')) ||
          ((cVar3 == '\x03' || (cVar3 == '>')))) || (cVar3 == '\v')) ||
        (((cVar3 == '\x04' || (cVar3 == '\x01')) || (cVar3 == '\t')))) ||
       (((cVar3 == '\x02' || (cVar3 == '\x06')) ||
        ((((cVar3 == '\a' || ((cVar3 == '\x0e' || (cVar3 == '\r')))) || (cVar3 == '\x0f')) ||
         (((((cVar3 == '\x14' || (cVar3 == '\x13')) || (cVar3 == '\x12')) ||
           ((cVar3 == '\x11' || (cVar3 == '\x05')))) || (cVar3 == '\n')))))))) &&
      (*(int *)((int)pvVar52 + 0x6c) < 200)))) {
    bVar5 = true;
  }
  else {
    bVar5 = false;
  }
  if (((pvVar52 == *(void **)((int)pvVar29 + 0xb8)) || (*(char *)((int)pvVar29 + 0xb4) == '\0')) &&
     (bVar5)) {
    FUN_00428070(*(void **)(unaff_EBP - 0x2b6c),(undefined4 *)(unaff_EBP - 0x2c88));
    piVar20 = (int *)FUN_00530550(*(void **)(unaff_EBP - 0x2b6c),(undefined4 *)(unaff_EBP - 0x2e14))
    ;
    bVar5 = FUN_0042c6f0((void *)(unaff_EBP - 0x2c88),piVar20);
    if (bVar5) {
      do {
        iVar17 = FUN_00402bc0((int *)(unaff_EBP - 0x2c88));
        piVar20 = (int *)(iVar17 + 8);
        pvVar29 = (void *)*piVar20;
        if ((((pvVar29 != (void *)0x0) && (pvVar29 != pvVar52)) &&
            (0.0 < *(float *)((int)pvVar29 + 0x16c))) &&
           (uVar24 = FUN_004d18c0((int)pvVar52,(int)pvVar29), (char)uVar24 != '\0')) {
          iVar17 = *piVar20;
          FUN_004013d0((void *)(iVar17 + 0x80),0);
          puVar23 = (uint *)(unaff_EBP - 0x360c);
          puVar27 = FUN_00402c50((void *)(*(int *)(unaff_EBP - 0x2b14) + 0x10),
                                 (uint *)(unaff_EBP - 0x2214),(uint *)(iVar17 + 0x10));
          ppVar28 = (pair<unsigned___int64,unsigned___int64> *)FUN_0041cba0(puVar27);
          ppVar28 = std::pair<unsigned___int64,unsigned___int64>::
                    operator=<std::pair<unsigned___int64,unsigned___int64>,0>
                              ((pair<unsigned___int64,unsigned___int64> *)(unaff_EBP - 0x1bcc),
                               ppVar28);
          puVar23 = FUN_0041ce90(ppVar28,puVar23);
          uVar24 = FUN_004dade0(puVar23);
          pvVar52 = *(void **)(unaff_EBP - 0x2b14);
          if ((char)uVar24 != '\0') {
            pvVar29 = (void *)FUN_004e2320((void *)((int)pvVar52 + 0x10),2);
            plVar30 = (longlong *)FUN_00401490(pvVar29,(int *)(unaff_EBP - 0x361c),pvVar29);
            fVar55 = FUN_00401420(plVar30);
            fVar55 = FUN_00401ca0((float)fVar55);
            iVar17 = *piVar20;
            *(float *)(unaff_EBP - 0x2b48) = (float)fVar55;
            pfVar25 = (float *)FUN_004013d0((void *)(iVar17 + 0x80),2);
            *(float *)(unaff_EBP - 0x2b1c) = *pfVar25 * 0.5;
            pfVar25 = (float *)FUN_004013d0((void *)((int)pvVar52 + 0x80),2);
            uVar18 = *(uint *)(unaff_EBP - 0x2c90) & 0xff;
            fVar56 = *(float *)(unaff_EBP - 0x2b1c) + *pfVar25 + 1.0;
            if (*(float *)(unaff_EBP - 0x2b48) <= fVar56 && fVar56 != *(float *)(unaff_EBP - 0x2b48)
               ) {
              uVar18 = 1;
            }
            *(uint *)(unaff_EBP - 0x2c90) = uVar18;
          }
        }
        FUN_00407a30((void *)(unaff_EBP - 0x2c88),(int *)(unaff_EBP - 0x2fe0));
        piVar20 = (int *)FUN_00530550(*(void **)(unaff_EBP - 0x2b6c),
                                      (undefined4 *)(unaff_EBP - 0x2e14));
        bVar5 = FUN_0042c6f0((void *)(unaff_EBP - 0x2c88),piVar20);
      } while (bVar5);
      cVar3 = (char)*(undefined4 *)(unaff_EBP - 0x2c90);
      if (cVar3 == '\0') goto LAB_0053feb1;
LAB_0053febe:
      if (*(char *)((int)pvVar52 + 0x68) == '0') {
        *(undefined4 *)((int)pvVar52 + 0x13b4) = 0;
        *(undefined4 *)((int)pvVar52 + 0x170) = 0x3f800000;
        *(undefined1 *)((int)pvVar52 + 0x68) = 0;
        *(undefined4 *)((int)pvVar52 + 0x6c) = 0;
        if (*(char *)((int)pvVar52 + 0xaa8) == '\x03') {
          if (*(char *)((int)pvVar52 + 0xaa9) == '\x05') {
            *(undefined1 *)((int)pvVar52 + 0x68) = 5;
          }
          else {
            uVar4 = 0x14;
            if (*(char *)((int)pvVar52 + 0xaa9) == '\x03') {
              uVar4 = 0x11;
            }
            *(undefined1 *)((int)pvVar52 + 0x68) = uVar4;
          }
        }
      }
      if (*(char *)((int)pvVar52 + 0x68) == '/') {
        *(undefined4 *)((int)pvVar52 + 0x13b4) = 0;
        *(undefined1 *)((int)pvVar52 + 0x68) = 0x36;
      }
      if (cVar3 == '\0') goto LAB_0053ff2b;
    }
    else {
      cVar3 = (char)*(undefined4 *)(unaff_EBP - 0x2c90);
LAB_0053feb1:
      if (500 < *(int *)((int)pvVar52 + 0x6c)) goto LAB_0053febe;
LAB_0053ff2b:
      FUN_00401cd0((undefined4 *)(unaff_EBP - 0x1c9c));
      pfVar25 = (float *)FUN_004013d0((void *)((int)pvVar52 + 0x28),2);
      FUN_00402030((void *)(unaff_EBP - 0x1c9c),*pfVar25);
      pfVar25 = (float *)FUN_00401080((void *)(unaff_EBP - 0x1a0c),0,
                                      *(float *)(unaff_EBP - 0x2b60) * 2.0,0);
      pfVar25 = (float *)FUN_004dde00((void *)(unaff_EBP - 0x1c9c),(float *)(unaff_EBP - 0x1460),
                                      pfVar25);
      FUN_00401650((void *)(unaff_EBP - 0x1c),pfVar25);
    }
    pvVar29 = *(void **)(unaff_EBP - 0x2b18);
  }
  if (*(char *)((int)pvVar52 + 0x68) == 'Q') {
    iVar17 = FUN_00413aa0((char *)((int)pvVar52 + 0x1e8));
    if (iVar17 < *(int *)((int)pvVar52 + 0x6c)) {
      *(undefined1 *)((int)pvVar52 + 0x68) = 0x53;
    }
    else {
      *(undefined4 *)(unaff_EBP - 0x2b60) = 0;
    }
  }
  if ((*(int *)((int)pvVar52 + 0x128) != 0) &&
     (((*(char *)((int)pvVar52 + 0x68) != '2' && (*(char *)((int)pvVar52 + 0x68) != '`')) ||
      (iVar17 = FUN_004084b0((int)pvVar52), iVar17 < *(int *)((int)pvVar52 + 0x6c))))) {
    if ((*(char *)((int)pvVar52 + 0x140) == '\x04') && (*(char *)((int)pvVar52 + 0x141) == '\x01'))
    {
      cVar3 = *(char *)((int)pvVar52 + 0x68);
      if (((cVar3 != '\x05') && (cVar3 != '\x14')) && (cVar3 != '\x11')) {
        *(undefined1 *)((int)pvVar52 + 0x68) = 0;
      }
    }
    else {
      *(undefined1 *)((int)pvVar52 + 0x68) = 0;
      *(undefined4 *)((int)pvVar52 + 0x144) = 0;
    }
  }
  cVar3 = *(char *)((int)pvVar52 + 0x68);
  *(undefined1 *)(unaff_EBP - 0x2b84) = 0;
  if ((((cVar3 == 'D') || (cVar3 == ']')) || (cVar3 == 'E')) &&
     (iVar17 = FUN_00407db0(pvVar52,0xffffffff), *(int *)((int)pvVar52 + 0x6c) <= iVar17)) {
    *(undefined4 *)(unaff_EBP - 0x2b60) = 0;
  }
  cVar3 = *(char *)((int)pvVar52 + 0x68);
  if ((((cVar3 == 'D') || (cVar3 == ']')) || (cVar3 == 'E')) &&
     (iVar17 = FUN_00407db0(pvVar52,0xffffffff), iVar17 < *(int *)((int)pvVar52 + 0x6c))) {
    iVar17 = FUN_00411d60(pvVar52,0xffffffff);
    iVar19 = FUN_00407db0(*(void **)(unaff_EBP - 0x2b14),0xffffffff);
    pvVar52 = *(void **)(unaff_EBP - 0x2b14);
    if (*(int *)((int)pvVar52 + 0x6c) <
        iVar19 + ((int)((iVar17 * 3 >> 0x1f & 3U) + iVar17 * 3) >> 2)) {
      FUN_00401cd0((undefined4 *)(unaff_EBP - 0x1cdc));
      pfVar25 = (float *)FUN_004013d0((void *)((int)pvVar52 + 0x28),2);
      FUN_00402030((void *)(unaff_EBP - 0x1cdc),*pfVar25);
      pfVar25 = (float *)FUN_00401080((void *)(unaff_EBP - 0x1730),0,0x3f800000,0);
      pfVar25 = (float *)FUN_004dde00((void *)(unaff_EBP - 0x1cdc),(float *)(unaff_EBP - 0x1478),
                                      pfVar25);
      puVar12 = (undefined4 *)FUN_004e1520((float *)(unaff_EBP - 0x1910),20.0,pfVar25);
      FUN_00401060((void *)(unaff_EBP - 0x1c),puVar12);
      *(undefined4 *)(unaff_EBP - 0x2b60) = 0x42480000;
      *(undefined1 *)(unaff_EBP - 0x2b84) = 1;
    }
  }
  if ((*(char *)((int)pvVar52 + 0x68) == 'M') &&
     (iVar17 = FUN_00407db0(pvVar52,0xffffffff), iVar17 < *(int *)((int)pvVar52 + 0x6c))) {
    iVar17 = FUN_00407db0(pvVar52,0xffffffff);
    iVar19 = FUN_00411d60(*(void **)(unaff_EBP - 0x2b14),0xffffffff);
    if (*(int *)(*(int *)(unaff_EBP - 0x2b14) + 0x6c) < iVar17 + iVar19) {
      FUN_00401cd0((undefined4 *)(unaff_EBP - 0x1d5c));
      pfVar25 = (float *)FUN_004013d0(*(void **)(unaff_EBP - 0x2b64),2);
      FUN_00402030((void *)(unaff_EBP - 0x1d5c),*pfVar25);
      pfVar25 = (float *)FUN_00401080((void *)(unaff_EBP - 0x1490),0xbf800000,0,0);
      pfVar25 = (float *)FUN_004dde00((void *)(unaff_EBP - 0x1d5c),(float *)(unaff_EBP - 0x1748),
                                      pfVar25);
      puVar12 = (undefined4 *)FUN_004e1520((float *)(unaff_EBP - 0x14a8),20.0,pfVar25);
      FUN_00401060((void *)(unaff_EBP - 0x1c),puVar12);
      *(undefined4 *)(unaff_EBP - 0x2b60) = 0x42700000;
      *(undefined1 *)(unaff_EBP - 0x2b84) = 1;
    }
    pvVar52 = *(void **)(unaff_EBP - 0x2b14);
  }
  if ((*(char *)((int)pvVar52 + 0x68) == 'N') &&
     (iVar17 = FUN_00407db0(pvVar52,0xffffffff), iVar17 < *(int *)((int)pvVar52 + 0x6c))) {
    iVar17 = FUN_00407db0(pvVar52,0xffffffff);
    iVar19 = FUN_00411d60(*(void **)(unaff_EBP - 0x2b14),0xffffffff);
    if (*(int *)(*(int *)(unaff_EBP - 0x2b14) + 0x6c) < iVar17 + iVar19) {
      FUN_00401cd0((undefined4 *)(unaff_EBP - 0x1ddc));
      pfVar25 = (float *)FUN_004013d0(*(void **)(unaff_EBP - 0x2b64),2);
      FUN_00402030((void *)(unaff_EBP - 0x1ddc),*pfVar25);
      pfVar25 = (float *)FUN_00401080((void *)(unaff_EBP - 0x1a9c),0x3f800000,0,0);
      pfVar25 = (float *)FUN_004dde00((void *)(unaff_EBP - 0x1ddc),(float *)(unaff_EBP - 0x14c0),
                                      pfVar25);
      puVar12 = (undefined4 *)FUN_004e1520((float *)(unaff_EBP - 0x1760),20.0,pfVar25);
      FUN_00401060((void *)(unaff_EBP - 0x1c),puVar12);
      *(undefined4 *)(unaff_EBP - 0x2b60) = 0x42700000;
      *(undefined1 *)(unaff_EBP - 0x2b84) = 1;
    }
    pvVar52 = *(void **)(unaff_EBP - 0x2b14);
  }
  if ((*(char *)((int)pvVar52 + 0x68) == 'L') &&
     (iVar17 = FUN_00407db0(pvVar52,0xffffffff), iVar17 < *(int *)((int)pvVar52 + 0x6c))) {
    iVar17 = FUN_00407db0(pvVar52,0xffffffff);
    iVar19 = FUN_00411d60(*(void **)(unaff_EBP - 0x2b14),0xffffffff);
    if (*(int *)(*(int *)(unaff_EBP - 0x2b14) + 0x6c) < iVar17 + iVar19) {
      FUN_00401cd0((undefined4 *)(unaff_EBP - 0x1d9c));
      pfVar25 = (float *)FUN_004013d0(*(void **)(unaff_EBP - 0x2b64),2);
      FUN_00402030((void *)(unaff_EBP - 0x1d9c),*pfVar25);
      pfVar25 = (float *)FUN_00401080((void *)(unaff_EBP - 0x14d8),0,0x3f800000,0);
      pfVar25 = (float *)FUN_004dde00((void *)(unaff_EBP - 0x1d9c),(float *)(unaff_EBP - 0x1934),
                                      pfVar25);
      puVar12 = (undefined4 *)FUN_004e1520((float *)(unaff_EBP - 0x14f0),20.0,pfVar25);
      FUN_00401060((void *)(unaff_EBP - 0x1c),puVar12);
      *(undefined4 *)(unaff_EBP - 0x2b60) = 0x42700000;
      *(undefined1 *)(unaff_EBP - 0x2b84) = 1;
    }
    pvVar52 = *(void **)(unaff_EBP - 0x2b14);
  }
  if ((*(char *)((int)pvVar52 + 0x68) == 'G') &&
     (iVar17 = FUN_004084b0((int)pvVar52), *(int *)((int)pvVar52 + 0x6c) < iVar17)) {
    *(undefined4 *)(unaff_EBP - 0x2b60) = 0;
    *(undefined1 *)(unaff_EBP - 0x2b84) = 1;
  }
  if ((*(char *)((int)pvVar52 + 0x68) == 'H') &&
     (iVar17 = FUN_004084b0((int)pvVar52), *(int *)((int)pvVar52 + 0x6c) < iVar17)) {
    pfVar25 = (float *)FUN_004013d0((void *)((int)pvVar52 + 0x28),2);
    fVar56 = *(float *)(unaff_EBP - 0x2ba0);
    *(undefined1 *)(unaff_EBP - 0x2b84) = 1;
    *pfVar25 = fVar56 * 720.0 + *pfVar25;
    *(undefined4 *)(unaff_EBP - 0x2b60) = 0x41400000;
  }
  cVar3 = *(char *)((int)pvVar52 + 0x68);
  if ((((cVar3 == 'D') || (cVar3 == ']')) || (cVar3 == 'E')) &&
     (iVar17 = FUN_00407db0(pvVar52,0xffffffff), iVar17 < *(int *)((int)pvVar52 + 0x6c))) {
    iVar17 = FUN_004084b0((int)pvVar52);
    uVar18 = *(uint *)(unaff_EBP - 0x2b84) & 0xff;
    if (*(int *)((int)pvVar52 + 0x6c) < iVar17) {
      uVar18 = 1;
    }
    *(uint *)(unaff_EBP - 0x2b84) = uVar18;
  }
  if (*(char *)((int)pvVar52 + 0x60) == '\x04') {
    *(undefined4 *)(unaff_EBP - 0x2b60) = 0x41f00000;
  }
  if (((*(char *)((int)pvVar52 + 0x68) == '9') || (*(char *)((int)pvVar52 + 0x68) == 'J')) &&
     ((iVar17 = FUN_004084b0((int)pvVar52), *(int *)((int)pvVar52 + 0x6c) < iVar17 &&
      ((iVar17 = FUN_00407db0(pvVar52,0xffffffff), iVar17 <= *(int *)((int)pvVar52 + 0x6c) &&
       (iVar17 = FUN_00407db0(pvVar52,0xffffffff), iVar17 <= *(int *)((int)pvVar52 + 0x6c))))))) {
    *(undefined4 *)(unaff_EBP - 0x2b60) = 0x3dcccccd;
    *(undefined1 *)(unaff_EBP - 0x2b84) = 1;
  }
  if (*(char *)((int)pvVar52 + 0x68) == '$') {
    fVar55 = FUN_00412150((int)pvVar52);
    *(float *)(unaff_EBP - 0x2b1c) = (float)fVar55;
    *(float *)((int)pvVar52 + 0x144) =
         *(float *)(unaff_EBP - 0x2b1c) * *(float *)(unaff_EBP - 0x2b88) * 0.0005 +
         *(float *)((int)pvVar52 + 0x144);
  }
  cVar3 = *(char *)((int)pvVar52 + 0x68);
  if ((((((cVar3 == '\x18') || (cVar3 == '\x19')) || (cVar3 == '\x1b')) ||
       ((cVar3 == '\b' || (cVar3 == ';')))) || ((cVar3 == '?' || (cVar3 == '@')))) &&
     (iVar17 = FUN_00407db0(pvVar52,0xffffffff), iVar17 <= *(int *)((int)pvVar52 + 0x6c))) {
    fVar55 = FUN_00412150((int)pvVar52);
    *(float *)(unaff_EBP - 0x2b1c) = (float)fVar55;
    cVar3 = *(char *)((int)pvVar52 + 0x140);
    *(float *)(unaff_EBP - 0x2b20) =
         *(float *)(unaff_EBP - 0x2b1c) * *(float *)(unaff_EBP - 0x2b88) * 0.00075;
    if ((cVar3 == '\x02') && (*(char *)((int)pvVar52 + 0x141) == '\0')) {
      *(float *)(unaff_EBP - 0x2b1c) = (float)*(int *)((int)pvVar52 + 0x70);
      iVar17 = FUN_0040fcf0((int)pvVar52);
      if (*(float *)(unaff_EBP - 0x2b1c) / (float)iVar17 <= 4.0) {
        *(float *)(unaff_EBP - 0x2b1c) = (float)*(int *)((int)pvVar52 + 0x70);
        iVar17 = FUN_0040fcf0((int)pvVar52);
        fVar56 = *(float *)(unaff_EBP - 0x2b1c) / (float)iVar17;
      }
      else {
        fVar56 = 4.0;
      }
      *(float *)(unaff_EBP - 0x2b20) = (fVar56 + 1.0) * *(float *)(unaff_EBP - 0x2b20);
    }
    puVar12 = FUN_0040ef90(pvVar52,2);
    if (puVar12 == (undefined4 *)0x0) {
      fVar56 = *(float *)(unaff_EBP - 0x2b20);
    }
    else {
      fVar55 = FUN_00409de0((int)pvVar52,0x66,-1);
      *(float *)(unaff_EBP - 0x2b1c) = (float)fVar55;
      fVar56 = (*(float *)(unaff_EBP - 0x2b1c) * 9.0 + 1.0) * *(float *)(unaff_EBP - 0x2b20);
    }
    *(float *)((int)pvVar52 + 0x144) = fVar56 + *(float *)((int)pvVar52 + 0x144);
    puVar12 = FUN_0040ef90(pvVar52,10);
    if (puVar12 != (undefined4 *)0x0) {
      *(undefined4 *)((int)pvVar52 + 0x144) = *(undefined4 *)((int)pvVar52 + 0x170);
    }
  }
  if (*(float *)((int)pvVar52 + 0x170) < *(float *)((int)pvVar52 + 0x144)) {
    *(float *)((int)pvVar52 + 0x144) = *(float *)((int)pvVar52 + 0x170);
  }
  fVar56 = *(float *)(unaff_EBP - 0x2b60);
  if (*(int *)((int)pvVar52 + 0x134) != 0) {
    fVar56 = fVar56 * 0.5;
    *(float *)(unaff_EBP - 0x2b60) = fVar56;
  }
  if (*(int *)((int)pvVar52 + 0x138) != 0) {
    *(float *)(unaff_EBP - 0x2b60) = fVar56 * 1.5;
  }
  if ((((*(byte *)((int)pvVar52 + 0x124) & 4) != 0) && (*(int *)((int)pvVar52 + 0x128) == 0)) &&
     (((*(char *)((int)pvVar52 + 0x68) != '2' && (*(char *)((int)pvVar52 + 0x68) != '`')) ||
      (1000 < *(int *)((int)pvVar52 + 0x6c))))) {
    puVar12 = (undefined4 *)FUN_0041cba0((int)pvVar52 + 0x160);
    pfVar25 = (float *)FUN_004cde20((void *)(unaff_EBP - 0xec0),*(undefined4 **)(unaff_EBP - 0x2b5c)
                                   );
    pfVar26 = (float *)FUN_004cde20((void *)(unaff_EBP - 0xe40),puVar12);
    fVar55 = FUN_00401570(pfVar26,pfVar25);
    *(float *)(unaff_EBP - 0x2b1c) = (float)fVar55;
    if (*(float *)(unaff_EBP - 0x2b1c) <= 0.0 && *(float *)(unaff_EBP - 0x2b1c) != 0.0) {
      FUN_004cde20((void *)(unaff_EBP - 0x84),puVar12);
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
  pfVar25 = (float *)FUN_004cde20((void *)(unaff_EBP - 0xe90),*(undefined4 **)(unaff_EBP - 0x2b5c));
  fVar55 = FUN_00402180(pfVar25);
  *(float *)(unaff_EBP - 0x2b1c) = (float)fVar55;
  if (*(float *)(unaff_EBP - 0x2b60) * *(float *)(unaff_EBP - 0x2b60) <
      *(float *)(unaff_EBP - 0x2b1c)) {
    FUN_004cde20((void *)(unaff_EBP - 0x8c),*(undefined4 **)(unaff_EBP - 0x2b5c));
    FUN_00401f50((float *)(unaff_EBP - 0x8c));
    FUN_004015e0((void *)(unaff_EBP - 0x8c),*(float *)(unaff_EBP - 0x2b60));
    puVar12 = (undefined4 *)FUN_004013d0((void *)(unaff_EBP - 0x8c),0);
    puVar31 = (undefined4 *)FUN_004013d0(*(void **)(unaff_EBP - 0x2b3c),0);
    *puVar31 = *puVar12;
    puVar12 = (undefined4 *)FUN_004013d0((void *)(unaff_EBP - 0x8c),1);
    puVar31 = (undefined4 *)FUN_004013d0(*(void **)(unaff_EBP - 0x2b3c),1);
    *puVar31 = *puVar12;
  }
  iVar17 = *(int *)(unaff_EBP - 0x2b14);
  if ((((*(ushort *)(iVar17 + 0x124) & 1) == 0) || ((*(ushort *)(iVar17 + 0x124) & 0x10) != 0)) ||
     ((*(byte *)(iVar17 + 0x5c) & 4) == 0)) {
    if (((*(byte *)(iVar17 + 0x7e) & 2) == 0) || (0 < *(int *)(iVar17 + 300))) {
      cVar3 = FUN_0040f6e0(iVar17);
      if (cVar3 == '\0') {
        pfVar25 = (float *)FUN_004013d0((void *)(iVar17 + 0x34),2);
        fVar56 = *pfVar25;
        *(float **)(unaff_EBP - 0x2bb4) = pfVar25;
        if (0.0 <= fVar56) {
          plVar30 = (longlong *)FUN_004e2320((void *)(iVar17 + 0x10),2);
          fVar55 = FUN_00401420(plVar30);
          *(float *)(iVar17 + 0x13bc) = (float)fVar55;
          pfVar25 = *(float **)(unaff_EBP - 0x2bb4);
        }
        *pfVar25 = *pfVar25 - *(float *)(unaff_EBP - 0x2ba0) * 30.0;
        goto LAB_00540a07;
      }
    }
    pfVar25 = (float *)FUN_004013d0((void *)(iVar17 + 0x34),2);
    fVar56 = *(float *)(unaff_EBP - 0x2ba0);
    fVar58 = *pfVar25;
    *(float **)(unaff_EBP - 0x2bb4) = pfVar25;
    *pfVar25 = fVar58 - fVar56 * 0.1 * 30.0;
LAB_0054099d:
    plVar30 = (longlong *)FUN_004e2320((void *)(iVar17 + 0x10),2);
    fVar55 = FUN_00401420(plVar30);
    *(float *)(iVar17 + 0x13bc) = (float)fVar55;
  }
  else {
    iVar19 = *(int *)(unaff_EBP - 0x2b24);
    fVar56 = 0.0025;
    puVar32 = (undefined8 *)FUN_00401080((void *)(unaff_EBP - 0x1778),0,0,0);
    FUN_0052e7c0((float *)(iVar17 + 0x34),puVar32,iVar19,fVar56);
    pfVar25 = (float *)FUN_004013d0((void *)(iVar17 + 0x34),2);
    fVar56 = *pfVar25;
    *(float **)(unaff_EBP - 0x2bb4) = pfVar25;
    if (-10.0 < fVar56) goto LAB_0054099d;
  }
LAB_00540a07:
  if ((iVar17 == *(int *)((int)pvVar29 + 0xb8)) && ((*(byte *)(iVar17 + 0x124) & 0x10) != 0)) {
    uVar18 = *(uint *)(iVar17 + 0x5c);
    if ((uVar18 & 2) == 0) {
      if ((uVar18 & 1) == 0) {
        if ((uVar18 & 4) != 0) {
          fVar55 = FUN_004021b0((float *)(iVar17 + 0x34));
          *(float *)(unaff_EBP - 0x2b1c) = (float)fVar55;
          if (64.0 < *(float *)(unaff_EBP - 0x2b1c)) {
            fVar55 = FUN_004015a0((float *)(iVar17 + 0x11a0),(float *)(iVar17 + 0x34));
            *(float *)(unaff_EBP - 0x2b1c) = (float)fVar55;
            if (*(float *)(unaff_EBP - 0x2b1c) <= -4.0 && *(float *)(unaff_EBP - 0x2b1c) != -4.0) {
              iVar19 = FUN_0040ffe0(iVar17);
              *(int *)(iVar17 + 300) = iVar19;
              FUN_00405570((longlong *)(iVar17 + 0x10),0x10,'\0');
              FUN_004c8530(unaff_EBP - 0x5c0);
              FUN_00402550((void *)(unaff_EBP - 0x5c0),(longlong *)(iVar17 + 0x10));
              iVar17 = *(int *)(unaff_EBP - 0x2b28);
              *(undefined4 *)(unaff_EBP - 0x5b0) = 0x3f800000;
              *(undefined4 *)(unaff_EBP - 0x5b4) = 0x17;
              FUN_00428590((void *)(iVar17 + 8),(undefined4 *)(unaff_EBP - 0x5c0));
              iVar17 = *(int *)(unaff_EBP - 0x2b14);
            }
          }
        }
        if ((*(byte *)(iVar17 + 0x124) & 0x40) != 0) {
          fVar56 = **(float **)(unaff_EBP - 0x2bb4);
          if (fVar56 < 0.0) {
            **(float **)(unaff_EBP - 0x2bb4) = *(float *)(unaff_EBP - 0x2ba0) * 30.0 + fVar56;
          }
        }
        pfVar25 = FUN_004d9720((float *)(unaff_EBP - 0x1508));
        pfVar25 = (float *)FUN_004e1520((float *)(unaff_EBP - 0x1a30),*(float *)(unaff_EBP - 0x2ba0)
                                        ,pfVar25);
        FUN_00401650((void *)(iVar17 + 0x34),pfVar25);
      }
      else {
        fVar55 = FUN_00401ca0(**(float **)(unaff_EBP - 0x2b40));
        *(float *)(unaff_EBP - 0x2b1c) = (float)fVar55;
        if (40.0 < *(float *)(unaff_EBP - 0x2b1c)) {
          iVar19 = FUN_0040ffe0(iVar17);
          *(int *)(iVar17 + 300) = iVar19;
          FUN_00405570((longlong *)(iVar17 + 0x10),0x10,'\0');
          FUN_004c8530(unaff_EBP - 0x8f0);
          FUN_00402550((void *)(unaff_EBP - 0x8f0),(longlong *)(iVar17 + 0x10));
          iVar17 = *(int *)(unaff_EBP - 0x2b28);
          *(undefined4 *)(unaff_EBP - 0x8e0) = 0x3f800000;
          *(undefined4 *)(unaff_EBP - 0x8e4) = 0x17;
          FUN_00428590((void *)(iVar17 + 8),(undefined4 *)(unaff_EBP - 0x8f0));
          iVar17 = *(int *)(unaff_EBP - 0x2b14);
        }
      }
    }
    else {
      FUN_00405570((void *)(iVar17 + 0x10),0x10,'\0');
    }
  }
  if (0 < *(int *)(iVar17 + 300)) {
    FUN_00405570((void *)(iVar17 + 0x10),0x10,'\0');
    FUN_00405570((void *)(iVar17 + 0x10),1,'\0');
    iVar17 = *(int *)(unaff_EBP - 0x2b14);
    *(undefined4 *)(iVar17 + 0x144) = 0;
  }
  if ((*(char *)(iVar17 + 0x68) != '\0') &&
     (iVar19 = FUN_004084b0(iVar17), *(int *)(iVar17 + 0x6c) < iVar19)) {
    FUN_00405570((void *)(iVar17 + 0x10),0x10,'\0');
    FUN_00405570((void *)(iVar17 + 0x10),1,'\0');
    iVar17 = *(int *)(unaff_EBP - 0x2b14);
  }
  *(float **)(unaff_EBP - 0x2b74) = (float *)(iVar17 + 0x4c);
  pfVar25 = (float *)FUN_004014f0((void *)(iVar17 + 0x34),(float *)(unaff_EBP - 0x1520),
                                  (float *)(iVar17 + 0x4c));
  puVar12 = (undefined4 *)
            FUN_004e1520((float *)(unaff_EBP - 0x1790),*(float *)(unaff_EBP - 0x2ba0),pfVar25);
  FUN_00401060((void *)(unaff_EBP - 0x1c),puVar12);
  if (((*(char *)(iVar17 + 0x60) != '\x06') && (*(char *)(iVar17 + 0x68) != 'S')) &&
     (*(char *)(iVar17 + 0x68) != 'T')) {
    FUN_00428070((void *)((int)pvVar29 + 4),(undefined4 *)(unaff_EBP - 0x2c98));
    piVar20 = (int *)FUN_00530550((void *)((int)pvVar29 + 4),(undefined4 *)(unaff_EBP - 0x2e1c));
    bVar5 = FUN_0042c6f0((void *)(unaff_EBP - 0x2c98),piVar20);
    if (bVar5) {
      do {
        iVar17 = FUN_00402bc0((int *)(unaff_EBP - 0x2c98));
        piVar20 = (int *)(iVar17 + 8);
        iVar17 = *piVar20;
        if ((((iVar17 != 0) && (iVar19 = *(int *)(unaff_EBP - 0x2b14), iVar17 != iVar19)) &&
            ((*(char *)(iVar19 + 0x60) != '\0' ||
             ((*(char *)(iVar17 + 0x60) == '\x01' || (*(char *)(iVar17 + 0x60) == '\x06')))))) &&
           (0.0 < *(float *)(iVar17 + 0x16c))) {
          FUN_00401060((void *)(unaff_EBP - 0x1bc),(undefined4 *)(iVar17 + 0x80));
          if (*(char *)(*piVar20 + 0x60) != '\x06') {
            piVar53 = FUN_00402990((void *)(unaff_EBP - 0x1538),1,1,0);
            FUN_004c64b0((void *)(unaff_EBP - 0x974),piVar53);
            FUN_00401650((void *)(unaff_EBP - 0x1bc),(float *)(unaff_EBP - 0x974));
          }
          iVar17 = FUN_004013d0((void *)(unaff_EBP - 0x1bc),0);
          pvVar29 = (void *)(iVar19 + 0x10);
          *(int *)(unaff_EBP - 0x2b20) = iVar17;
          iVar17 = FUN_004e2320(pvVar29,0);
          *(int *)(unaff_EBP - 0x2b3c) = iVar17;
          piVar53 = (int *)(unaff_EBP - 0x367c);
          pvVar52 = (void *)FUN_004e2320((void *)(*piVar20 + 0x10),0);
          puVar23 = (uint *)FUN_004014b0(pvVar52,piVar53);
          pvVar52 = (void *)FUN_00401530(*(void **)(unaff_EBP - 0x2b3c),(int *)(unaff_EBP - 0x368c))
          ;
          uVar18 = FUN_004ce380(pvVar52,puVar23);
          if ((char)uVar18 != '\0') {
            piVar53 = (int *)(unaff_EBP - 0x369c);
            pvVar52 = (void *)FUN_004e2320((void *)(*piVar20 + 0x10),0);
            puVar23 = (uint *)FUN_00401530(pvVar52,piVar53);
            pvVar52 = (void *)FUN_004014b0(*(void **)(unaff_EBP - 0x2b3c),
                                           (int *)(unaff_EBP - 0x36ac));
            uVar18 = FUN_004ce350(pvVar52,puVar23);
            if ((char)uVar18 != '\0') {
              iVar17 = FUN_004013d0((void *)(unaff_EBP - 0x1bc),1);
              pvVar52 = *(void **)(unaff_EBP - 0x2bb0);
              *(int *)(unaff_EBP - 0x2b20) = iVar17;
              iVar17 = FUN_004013d0(pvVar52,1);
              *(int *)(unaff_EBP - 0x2b3c) = iVar17;
              iVar17 = FUN_004e2320(pvVar29,1);
              *(int *)(unaff_EBP - 0x2b50) = iVar17;
              piVar53 = (int *)(unaff_EBP - 0x36bc);
              pvVar52 = (void *)FUN_004e2320((void *)(*piVar20 + 0x10),1);
              puVar23 = (uint *)FUN_004014b0(pvVar52,piVar53);
              pvVar52 = (void *)FUN_00401530(*(void **)(unaff_EBP - 0x2b50),
                                             (int *)(unaff_EBP - 0x36cc));
              uVar18 = FUN_004ce380(pvVar52,puVar23);
              if ((char)uVar18 != '\0') {
                piVar53 = (int *)(unaff_EBP - 0x373c);
                pvVar52 = (void *)FUN_004e2320((void *)(*piVar20 + 0x10),1);
                puVar23 = (uint *)FUN_00401530(pvVar52,piVar53);
                pvVar52 = (void *)FUN_004014b0(*(void **)(unaff_EBP - 0x2b50),
                                               (int *)(unaff_EBP - 0x374c));
                uVar18 = FUN_004ce350(pvVar52,puVar23);
                if ((char)uVar18 != '\0') {
                  iVar17 = FUN_004013d0((void *)(unaff_EBP - 0x1bc),2);
                  pvVar52 = *(void **)(unaff_EBP - 0x2bb0);
                  *(int *)(unaff_EBP - 0x2b20) = iVar17;
                  iVar17 = FUN_004013d0(pvVar52,2);
                  *(int *)(unaff_EBP - 0x2b3c) = iVar17;
                  iVar17 = FUN_004e2320(pvVar29,2);
                  *(int *)(unaff_EBP - 0x2b50) = iVar17;
                  piVar53 = (int *)(unaff_EBP - 0x31e4);
                  pvVar52 = (void *)FUN_004e2320((void *)(*piVar20 + 0x10),2);
                  puVar23 = (uint *)FUN_004014b0(pvVar52,piVar53);
                  pvVar52 = (void *)FUN_00401530(*(void **)(unaff_EBP - 0x2b50),
                                                 (int *)(unaff_EBP - 0x35b4));
                  uVar18 = FUN_004ce380(pvVar52,puVar23);
                  if ((char)uVar18 != '\0') {
                    piVar53 = (int *)(unaff_EBP - 0x3454);
                    pvVar52 = (void *)FUN_004e2320((void *)(*piVar20 + 0x10),2);
                    puVar23 = (uint *)FUN_00401530(pvVar52,piVar53);
                    pvVar52 = (void *)FUN_004014b0(*(void **)(unaff_EBP - 0x2b50),
                                                   (int *)(unaff_EBP - 0x31ac));
                    uVar18 = FUN_004ce350(pvVar52,puVar23);
                    if ((char)uVar18 != '\0') {
                      puVar23 = FUN_00402c50(pvVar29,(uint *)(unaff_EBP - 0x1df4),
                                             (uint *)(*piVar20 + 0x10));
                      FUN_00402550((void *)(unaff_EBP - 0x150),(longlong *)puVar23);
                      puVar12 = (undefined4 *)FUN_004013d0((void *)(unaff_EBP - 0x150),2);
                      *puVar12 = 0;
                      fVar55 = FUN_004021b0((float *)(unaff_EBP - 0x150));
                      *(float *)(unaff_EBP - 0x2b1c) = (float)fVar55;
                      if (0.0 < *(float *)(unaff_EBP - 0x2b1c)) {
                        FUN_00401fb0((float *)(unaff_EBP - 0x150));
                        if (0 < *(int *)(*(int *)(unaff_EBP - 0x2b14) + 300)) {
                          FUN_00401610((void *)(unaff_EBP - 0x150),0.1);
                        }
                        pfVar25 = (float *)(unaff_EBP - 0x150);
                        pfVar26 = (float *)FUN_004013d0((void *)(*piVar20 + 0x80),0);
                        pfVar25 = (float *)FUN_004e1520((float *)(unaff_EBP - 0x1958),
                                                        (*(float *)(unaff_EBP - 0x2ba0) * 5.0 *
                                                        *pfVar26) / **(float **)(unaff_EBP - 0x2b4c)
                                                        ,pfVar25);
                        FUN_00401650((void *)(unaff_EBP - 0x1c),pfVar25);
                      }
                    }
                  }
                }
              }
            }
          }
        }
        FUN_00407a30((void *)(unaff_EBP - 0x2c98),(int *)(unaff_EBP - 0x2c1c));
        piVar20 = (int *)FUN_00530550(*(void **)(unaff_EBP - 0x2b6c),
                                      (undefined4 *)(unaff_EBP - 0x2e1c));
        bVar5 = FUN_0042c6f0((void *)(unaff_EBP - 0x2c98),piVar20);
      } while (bVar5);
      pvVar29 = *(void **)(unaff_EBP - 0x2b18);
      iVar17 = *(int *)(unaff_EBP - 0x2b14);
    }
  }
  fVar55 = FUN_00401d80((float *)(unaff_EBP - 0x1c));
  *(float *)(unaff_EBP - 0x2b1c) = (float)fVar55;
  iVar19 = (int)(*(float *)(unaff_EBP - 0x2b1c) + 1.0);
  *(int *)(unaff_EBP - 0x2b1c) = iVar19;
  FUN_00401610((void *)(unaff_EBP - 0x1c),1.0 / (float)iVar19);
  *(undefined1 *)(unaff_EBP - 0x2bac) = 0;
  *(undefined4 **)(unaff_EBP - 0x2b60) = (undefined4 *)(iVar17 + 0x10);
  FUN_00402a40((void *)(unaff_EBP - 0x1b2c),(undefined4 *)(iVar17 + 0x10));
  cVar3 = *(char *)((int)pvVar29 + 0xb4);
  *(undefined1 *)(unaff_EBP - 0x2bc5) = 0;
  *(undefined1 *)(unaff_EBP - 0x2b94) = 0;
  if (((cVar3 == '\0') || (iVar17 == *(int *)((int)pvVar29 + 0xb8))) &&
     (*(char *)(iVar17 + 0x60) != '\x06')) {
    FUN_005308b0(pvVar29,iVar17);
  }
  iVar19 = *(int *)(unaff_EBP - 0x2b1c);
  *(undefined4 *)(unaff_EBP - 0x2b48) = 0;
  if (0 < iVar19) {
    iVar17 = FUN_004013d0((void *)(unaff_EBP - 0x2d8),0);
    *(int *)(unaff_EBP - 0x2e24) = iVar17;
    iVar17 = FUN_004013d0((void *)(unaff_EBP - 0x2f0),0);
    *(int *)(unaff_EBP - 0x2b50) = iVar17;
LAB_00541280:
    FUN_004cde40((void *)(unaff_EBP - 0x2dac),0);
    iVar19 = 0;
    *(undefined4 *)(unaff_EBP - 0x2b54) = 0;
LAB_00541295:
    iVar17 = FUN_004013d0((void *)(unaff_EBP - 0x1c),iVar19);
    *(int *)(unaff_EBP - 0x2bb8) = iVar17;
    FUN_00402a10((ulonglong *)(unaff_EBP - 0x3060));
    pvVar52 = *(void **)(unaff_EBP - 0x2b60);
    pvVar33 = (void *)FUN_004e2320(pvVar52,*(int *)(unaff_EBP - 0x2b54));
    *(void **)(unaff_EBP - 0x2b90) = pvVar33;
    FUN_00402e60(pvVar33,(uint *)(unaff_EBP - 0x3060));
    pfVar25 = *(float **)(unaff_EBP - 0x2bb0);
    *(undefined1 *)(unaff_EBP - 0x2b31) = 0;
    FUN_004e1520((float *)(unaff_EBP - 0x1550),0.5,pfVar25);
    FUN_00402510(unaff_EBP - 0x19b8);
    puVar23 = FUN_00402c50(pvVar52,(uint *)(unaff_EBP - 0x2244),(uint *)(unaff_EBP - 0x19b8));
    FUN_00405450((int *)(unaff_EBP - 0x2d8),puVar23);
    FUN_004e1520((float *)(unaff_EBP - 0x17a8),0.5,*(float **)(unaff_EBP - 0x2bb0));
    FUN_00402510(unaff_EBP - 0x19dc);
    puVar23 = FUN_00402cb0(pvVar52,(uint *)(unaff_EBP - 0x2694),(uint *)(unaff_EBP - 0x19dc));
    FUN_00405450((int *)(unaff_EBP - 0x2f0),puVar23);
    iVar17 = **(int **)(unaff_EBP - 0x2e24);
    piVar20 = *(int **)(unaff_EBP - 0x2b50);
    *(int *)(unaff_EBP - 0x2b20) = iVar17;
    if (iVar17 <= *piVar20) {
      puVar23 = (uint *)FUN_004013d0((void *)(unaff_EBP - 0x2d8),1);
      *(uint **)(unaff_EBP - 0x2b70) = puVar23;
      piVar20 = (int *)FUN_004013d0((void *)(unaff_EBP - 0x2f0),1);
      piVar53 = *(int **)(unaff_EBP - 0x2b50);
      *(int **)(unaff_EBP - 0x2b3c) = piVar20;
      do {
        uVar18 = *puVar23;
        if ((int)uVar18 <= *piVar20) {
          piVar34 = (int *)FUN_004013d0((void *)(unaff_EBP - 0x2d8),2);
          *(int **)(unaff_EBP - 0x2bbc) = piVar34;
          piVar20 = (int *)FUN_004013d0((void *)(unaff_EBP - 0x2f0),2);
          piVar53 = *(int **)(unaff_EBP - 0x2b3c);
          *(int **)(unaff_EBP - 0x2b98) = piVar20;
          do {
            iVar17 = *piVar34;
            if (iVar17 <= *piVar20) {
              do {
                puVar35 = FUN_00405fd0(*(void **)(unaff_EBP - 0x2b18),*(uint *)(unaff_EBP - 0x2b20),
                                       uVar18,iVar17,0);
                uVar24 = FUN_004061f0((int)puVar35);
                if ((char)uVar24 == '\0') {
                  if ((*(ushort *)(*(int *)(unaff_EBP - 0x2b14) + 0x7e) & 0x100) != 0) {
                    puVar35 = FUN_00405fd0(*(void **)(unaff_EBP - 0x2b18),
                                           *(uint *)(unaff_EBP - 0x2b20),uVar18,iVar17,0);
                    bVar6 = FUN_00406280((int)puVar35);
                    if (CONCAT31(extraout_var_00,bVar6) != 2) goto LAB_00541472;
                  }
                  cVar3 = *(char *)(unaff_EBP - 0x2b31);
                }
                else {
LAB_00541472:
                  cVar3 = '\x01';
                  *(undefined1 *)(unaff_EBP - 0x2b31) = 1;
                }
                piVar20 = *(int **)(unaff_EBP - 0x2b98);
                iVar17 = iVar17 + 1;
              } while (iVar17 <= *piVar20);
              if (cVar3 != '\0') {
                if ((*(int *)(unaff_EBP - 0x2b54) != 2) || (*(char *)(unaff_EBP - 0x2bac) != '\0'))
                goto LAB_00541f04;
                goto LAB_005414e8;
              }
              piVar53 = *(int **)(unaff_EBP - 0x2b3c);
            }
            piVar34 = *(int **)(unaff_EBP - 0x2bbc);
            uVar18 = uVar18 + 1;
          } while ((int)uVar18 <= *piVar53);
          iVar17 = *(int *)(unaff_EBP - 0x2b20);
          piVar20 = *(int **)(unaff_EBP - 0x2b3c);
          piVar53 = *(int **)(unaff_EBP - 0x2b50);
        }
        iVar17 = iVar17 + 1;
        *(int *)(unaff_EBP - 0x2b20) = iVar17;
        if (*piVar53 < iVar17) goto LAB_005414e8;
        puVar23 = *(uint **)(unaff_EBP - 0x2b70);
      } while( true );
    }
    goto LAB_005414ee;
  }
LAB_00542a67:
  uVar18 = *(uint *)(iVar17 + 0x5c);
  *(uint *)(unaff_EBP - 0x2be0) = uVar18 >> 1 & 0xffffff01;
  *(byte *)(unaff_EBP - 0x2b31) = *(byte *)(iVar17 + 0x5c) & 1;
  *(uint *)(unaff_EBP - 0x2bd8) = uVar18 >> 2 & 0xffffff01;
  FUN_00401060((void *)(unaff_EBP - 0x11c),(undefined4 *)(iVar17 + 0x11a0));
  iVar19 = *(int *)(unaff_EBP - 0x2b24);
  *(undefined4 *)(iVar17 + 0x5c) = 0;
  *(int *)(iVar17 + 0x145c) = *(int *)(iVar17 + 0x145c) + iVar19;
  if (*(int *)(iVar17 + 300) < 1) {
    pfVar25 = (float *)FUN_004cde20((void *)(unaff_EBP - 0xe78),*(undefined4 **)(unaff_EBP - 0x2b5c)
                                   );
    fVar55 = FUN_00402180(pfVar25);
    *(float *)(unaff_EBP - 0x2b74) = (float)fVar55;
    if (16.0 < *(float *)(unaff_EBP - 0x2b74)) {
      fVar55 = FUN_004021b0((float *)(iVar17 + 0x40));
      *(float *)(unaff_EBP - 0x2b74) = (float)fVar55;
      if (16.0 < *(float *)(unaff_EBP - 0x2b74)) {
        puVar23 = FUN_00402c50((void *)(unaff_EBP - 0x1b2c),(uint *)(unaff_EBP - 0x1f5c),
                               (uint *)(iVar17 + 0x10));
        pfVar25 = FUN_00402550((void *)(unaff_EBP - 0x12d4),(longlong *)puVar23);
        fVar55 = FUN_004021b0(pfVar25);
        *(float *)(unaff_EBP - 0x2b9c) = (float)fVar55;
        fVar55 = FUN_004021b0((float *)(unaff_EBP - 0x1c));
        *(float *)(unaff_EBP - 0x2b74) = (float)fVar55;
        fVar56 = *(float *)(unaff_EBP - 0x2b74) * 0.01;
        if (*(float *)(unaff_EBP - 0x2b9c) <= fVar56 && fVar56 != *(float *)(unaff_EBP - 0x2b9c)) {
          *(uint *)(iVar17 + 0x5c) = *(uint *)(iVar17 + 0x5c) | 0x20;
        }
      }
    }
  }
  if (*(char *)(unaff_EBP - 0x2bc5) != '\0') {
    *(uint *)(iVar17 + 0x5c) = *(uint *)(iVar17 + 0x5c) | 0x40;
  }
  pfVar25 = *(float **)(unaff_EBP - 0x2bb0);
  FUN_004e1520((float *)(unaff_EBP - 0x12ec),0.5,pfVar25);
  FUN_00402510(unaff_EBP - 0x1af0);
  puVar23 = FUN_00402c50((void *)(iVar17 + 0x10),(uint *)(unaff_EBP - 0x1f8c),
                         (uint *)(unaff_EBP - 0x1af0));
  FUN_00405450((int *)(unaff_EBP - 0x34),puVar23);
  FUN_004e1520((float *)(unaff_EBP - 0x1304),0.5,pfVar25);
  FUN_00402510(unaff_EBP - 0x9b0);
  puVar23 = FUN_00402cb0((void *)(iVar17 + 0x10),(uint *)(unaff_EBP - 0x1fbc),
                         (uint *)(unaff_EBP - 0x9b0));
  FUN_00405450((int *)(unaff_EBP - 0x28),puVar23);
  piVar20 = (int *)FUN_004013d0((void *)(unaff_EBP - 0x34),0);
  iVar17 = *piVar20;
  *(int **)(unaff_EBP - 0x2b20) = piVar20;
  *(int *)(unaff_EBP - 0x2b3c) = iVar17;
  piVar20 = (int *)FUN_004013d0((void *)(unaff_EBP - 0x28),0);
  *(int **)(unaff_EBP - 0x2b70) = piVar20;
  if (iVar17 <= *piVar20) {
    puVar23 = (uint *)FUN_004013d0((void *)(unaff_EBP - 0x34),1);
    *(uint **)(unaff_EBP - 0x2b9c) = puVar23;
    piVar20 = (int *)FUN_004013d0((void *)(unaff_EBP - 0x28),1);
    *(int **)(unaff_EBP - 0x2b48) = piVar20;
    do {
      uVar18 = *puVar23;
      if ((int)uVar18 <= *piVar20) {
        piVar53 = (int *)FUN_004013d0((void *)(unaff_EBP - 0x34),2);
        *(int **)(unaff_EBP - 0x2b74) = piVar53;
        piVar20 = (int *)FUN_004013d0((void *)(unaff_EBP - 0x28),2);
        *(int **)(unaff_EBP - 0x2b1c) = piVar20;
        do {
          iVar17 = *piVar53;
          if (iVar17 <= *piVar20) {
            do {
              puVar35 = FUN_00405fd0(*(void **)(unaff_EBP - 0x2b18),*(uint *)(unaff_EBP - 0x2b3c),
                                     uVar18,iVar17,0);
              bVar6 = FUN_00406280((int)puVar35);
              if (CONCAT31(extraout_var_01,bVar6) != 2) {
                puVar23 = (uint *)(*(int *)(unaff_EBP - 0x2b14) + 0x5c);
                *puVar23 = *puVar23 | 0x10;
                piVar20 = *(int **)(unaff_EBP - 0x2b1c);
                break;
              }
              piVar20 = *(int **)(unaff_EBP - 0x2b1c);
              iVar17 = iVar17 + 1;
            } while (iVar17 <= *piVar20);
          }
          if ((*(byte *)(*(int *)(unaff_EBP - 0x2b14) + 0x5c) & 0x10) != 0) break;
          piVar53 = *(int **)(unaff_EBP - 0x2b74);
          uVar18 = uVar18 + 1;
        } while ((int)uVar18 <= **(int **)(unaff_EBP - 0x2b48));
        iVar17 = *(int *)(unaff_EBP - 0x2b3c);
        piVar20 = *(int **)(unaff_EBP - 0x2b48);
      }
      if ((*(byte *)(*(int *)(unaff_EBP - 0x2b14) + 0x5c) & 0x10) != 0) break;
      piVar53 = *(int **)(unaff_EBP - 0x2b70);
      puVar23 = *(uint **)(unaff_EBP - 0x2b9c);
      iVar17 = iVar17 + 1;
      *(int *)(unaff_EBP - 0x2b3c) = iVar17;
    } while (iVar17 <= *piVar53);
    piVar20 = *(int **)(unaff_EBP - 0x2b70);
  }
  iVar17 = *(int *)(unaff_EBP - 0x2b14);
  *(undefined1 *)(unaff_EBP - 0x2bdc) = 0;
  if (*(char *)(iVar17 + 0x60) == '\x06') {
    iVar17 = *(int *)(unaff_EBP - 0x2b14);
    pvVar52 = *(void **)(unaff_EBP - 0x2bb0);
  }
  else {
    puVar23 = (uint *)FUN_004013d0((void *)(unaff_EBP - 0x34),2);
    uVar18 = *puVar23;
    *(uint **)(unaff_EBP - 0x2b48) = puVar23;
    piVar53 = *(int **)(unaff_EBP - 0x2b20);
    *(uint *)(unaff_EBP - 0x2b54) = uVar18;
    iVar17 = *piVar53;
    *(int *)(unaff_EBP - 0x2b3c) = iVar17;
    if (iVar17 <= *piVar20) {
      piVar53 = (int *)FUN_004013d0((void *)(unaff_EBP - 0x34),1);
      *(int **)(unaff_EBP - 0x2b9c) = piVar53;
      piVar20 = (int *)FUN_004013d0((void *)(unaff_EBP - 0x28),1);
      piVar34 = *(int **)(unaff_EBP - 0x2b70);
      iVar17 = *(int *)(unaff_EBP - 0x2b3c);
      *(int **)(unaff_EBP - 0x2b1c) = piVar20;
      do {
        iVar19 = *piVar53;
        *(int *)(unaff_EBP - 0x2b50) = iVar19;
        if (iVar19 <= *piVar20) {
          piVar53 = (int *)FUN_004013d0((void *)(unaff_EBP - 0x28),2);
          piVar20 = *(int **)(unaff_EBP - 0x2b1c);
          piVar34 = *(int **)(unaff_EBP - 0x2b48);
          *(int **)(unaff_EBP - 0x2b74) = piVar53;
          do {
            iVar17 = *piVar34;
            iVar39 = iVar17;
            if (iVar17 <= *piVar53) {
              do {
                iVar39 = iVar39 + 1;
                puVar35 = FUN_00405fd0(*(void **)(unaff_EBP - 0x2b18),*(uint *)(unaff_EBP - 0x2b3c),
                                       *(uint *)(unaff_EBP - 0x2b50),iVar17,0);
                bVar6 = FUN_00406280((int)puVar35);
                if (CONCAT31(extraout_var_02,bVar6) == 2) {
                  iVar19 = *(int *)(unaff_EBP - 0x2b54);
                  if (*(int *)(unaff_EBP - 0x2b54) < iVar39) {
                    iVar19 = iVar39;
                  }
                  *(int *)(unaff_EBP - 0x2b54) = iVar19;
                  iVar19 = *(int *)(unaff_EBP - 0x2b14);
                  *(undefined1 *)(unaff_EBP - 0x2bdc) = 1;
                  puVar23 = (uint *)(iVar19 + 0x5c);
                  *puVar23 = *puVar23 | 2;
                }
                piVar53 = *(int **)(unaff_EBP - 0x2b74);
                iVar17 = iVar17 + 1;
              } while (iVar17 <= *piVar53);
              iVar19 = *(int *)(unaff_EBP - 0x2b50);
              piVar20 = *(int **)(unaff_EBP - 0x2b1c);
              piVar34 = *(int **)(unaff_EBP - 0x2b48);
            }
            iVar19 = iVar19 + 1;
            *(int *)(unaff_EBP - 0x2b50) = iVar19;
          } while (iVar19 <= *piVar20);
          iVar17 = *(int *)(unaff_EBP - 0x2b3c);
          piVar53 = *(int **)(unaff_EBP - 0x2b9c);
          piVar34 = *(int **)(unaff_EBP - 0x2b70);
        }
        iVar17 = iVar17 + 1;
        *(int *)(unaff_EBP - 0x2b3c) = iVar17;
      } while (iVar17 <= *piVar34);
      uVar18 = *(uint *)(unaff_EBP - 0x2b54);
    }
    iVar17 = *(int *)(unaff_EBP - 0x2b14);
    if ((*(byte *)(iVar17 + 0x5c) & 2) == 0) {
      pvVar52 = (void *)(iVar17 + 0x80);
    }
    else {
      puVar23 = (uint *)FUN_004e2320((void *)(iVar17 + 0x10),2);
      piVar20 = (int *)(unaff_EBP - 0x31bc);
      piVar53 = FUN_004cde40((void *)(unaff_EBP - 0x31cc),uVar18);
      plVar30 = (longlong *)FUN_00401490(piVar53,piVar20,puVar23);
      fVar55 = FUN_00401420(plVar30);
      *(float *)(unaff_EBP - 0x2b74) = (float)fVar55;
      pvVar52 = (void *)(iVar17 + 0x80);
      pfVar25 = (float *)FUN_004013d0(pvVar52,2);
      fVar58 = *(float *)(unaff_EBP - 0x2b74) / (*pfVar25 * 0.5);
      fVar56 = 0.0;
      if (0.0 < fVar58) {
        if (1.0 <= fVar58) {
          fVar56 = 1.0;
        }
        else {
          fVar56 = fVar58 + 1.0;
        }
        if (*(char *)(iVar17 + 0x68) == 'k') {
          fVar56 = fVar58 + 1.0;
        }
      }
      **(float **)(unaff_EBP - 0x2bb4) =
           *(float *)(unaff_EBP - 0x2ba0) * 30.0 * fVar56 + **(float **)(unaff_EBP - 0x2bb4);
    }
  }
  *(undefined4 *)(unaff_EBP - 0x2b3c) = 0x3ba3d70a;
  fVar55 = FUN_004021b0((float *)(iVar17 + 0x40));
  *(float *)(unaff_EBP - 0x2b74) = (float)fVar55;
  if (0.0 < *(float *)(unaff_EBP - 0x2b74)) {
    *(undefined4 *)(unaff_EBP - 0x2b3c) = 0x3b23d70a;
  }
  if ((*(byte *)(iVar17 + 0x5c) & 2) == 0) {
    piVar20 = (int *)(unaff_EBP - 0x337c);
    FUN_004013d0(pvVar52,2);
    piVar53 = (int *)(unaff_EBP - 0x342c);
    pvVar52 = (void *)FUN_004e2320(*(void **)(unaff_EBP - 0x2b60),2);
    pvVar52 = (void *)FUN_004014b0(pvVar52,piVar53);
    puVar23 = (uint *)FUN_004014b0(pvVar52,piVar20);
    uVar60 = FUN_00405510(puVar23);
    *(int *)(unaff_EBP - 0x2b1c) = (int)uVar60;
    uVar18 = **(uint **)(unaff_EBP - 0x2b20);
    if ((int)uVar18 <= **(int **)(unaff_EBP - 0x2b70)) {
      puVar23 = (uint *)FUN_004013d0((void *)(unaff_EBP - 0x34),1);
      *(uint **)(unaff_EBP - 0x2b9c) = puVar23;
      piVar20 = (int *)FUN_004013d0((void *)(unaff_EBP - 0x28),1);
      *(int **)(unaff_EBP - 0x2b74) = piVar20;
      do {
        uVar54 = *puVar23;
        if ((int)uVar54 <= *piVar20) {
          do {
            puVar35 = FUN_00405fd0(*(void **)(unaff_EBP - 0x2b18),uVar18,uVar54,
                                   *(int *)(unaff_EBP - 0x2b1c),0);
            uVar24 = FUN_004061f0((int)puVar35);
            if ((char)uVar24 != '\0') {
              puVar23 = (uint *)(*(int *)(unaff_EBP - 0x2b14) + 0x5c);
              *puVar23 = *puVar23 | 1;
            }
            puVar35 = FUN_00405fd0(*(void **)(unaff_EBP - 0x2b18),uVar18,uVar54,
                                   *(int *)(unaff_EBP - 0x2b1c),0);
            bVar6 = FUN_00406280((int)puVar35);
            uVar49 = *(uint *)(unaff_EBP - 0x2bdc) & 0xff;
            if (CONCAT31(extraout_var_03,bVar6) == 3) {
              uVar49 = 1;
            }
            piVar20 = *(int **)(unaff_EBP - 0x2b74);
            uVar54 = uVar54 + 1;
            *(uint *)(unaff_EBP - 0x2bdc) = uVar49;
          } while ((int)uVar54 <= *piVar20);
        }
        if ((*(byte *)(*(int *)(unaff_EBP - 0x2b14) + 0x5c) & 1) != 0) break;
        puVar23 = *(uint **)(unaff_EBP - 0x2b9c);
        uVar18 = uVar18 + 1;
      } while ((int)uVar18 <= **(int **)(unaff_EBP - 0x2b70));
    }
    iVar17 = *(int *)(unaff_EBP - 0x2b14);
  }
  if ((((*(char *)(unaff_EBP - 0x2bdc) != '\0') && (*(char *)(iVar17 + 0x60) == '\x05')) &&
      (uVar18 = FUN_00405420(*(void **)(unaff_EBP - 0x2b18),(uint *)(iVar17 + 0x198)), uVar18 != 0))
     && ((*(float *)(uVar18 + 0x1198) < 1.0 &&
         (fVar56 = *(float *)(unaff_EBP - 0x2ba0) * 0.05 + *(float *)(uVar18 + 0x1198),
         *(float *)(uVar18 + 0x1198) = fVar56, 1.0 < fVar56)))) {
    *(undefined4 *)(uVar18 + 0x1198) = 0x3f800000;
  }
  if ((*(char *)(unaff_EBP - 0x2b31) != '\0') && (*(char *)(unaff_EBP - 0x2b29) != '\0')) {
    pfVar25 = (float *)FUN_004cde20((void *)(unaff_EBP - 0xdf0),*(undefined4 **)(unaff_EBP - 0x2b30)
                                   );
    fVar55 = FUN_00402180(pfVar25);
    *(float *)(unaff_EBP - 0x2b30) = (float)fVar55;
    if ((0.0 < *(float *)(unaff_EBP - 0x2b30)) &&
       (((*(byte *)(iVar17 + 0x5c) & 3) == 0 &&
        (pfVar25 = (float *)FUN_004013d0((void *)(unaff_EBP - 0x1c),2), *pfVar25 <= 0.0)))) {
      iVar19 = FUN_004013d0((void *)(iVar17 + 0x80),2);
      *(int *)(unaff_EBP - 0x2b74) = iVar19;
      pvVar52 = (void *)FUN_004e2320((void *)(iVar17 + 0x10),2);
      piVar20 = (int *)(unaff_EBP - 0x344c);
      *(void **)(unaff_EBP - 0x2b30) = pvVar52;
      pvVar52 = (void *)FUN_004014b0(pvVar52,(int *)(unaff_EBP - 0x345c));
      puVar23 = (uint *)FUN_004014b0(pvVar52,piVar20);
      uVar60 = FUN_00405510(puVar23);
      *(int *)(unaff_EBP - 0x2b1c) = (int)uVar60;
      uVar18 = **(uint **)(unaff_EBP - 0x2b20);
      if ((int)uVar18 <= **(int **)(unaff_EBP - 0x2b70)) {
        puVar23 = (uint *)FUN_004013d0((void *)(unaff_EBP - 0x34),1);
        *(uint **)(unaff_EBP - 0x2b9c) = puVar23;
        piVar20 = (int *)FUN_004013d0((void *)(unaff_EBP - 0x28),1);
        *(int **)(unaff_EBP - 0x2b48) = piVar20;
        do {
          uVar54 = *puVar23;
          if ((int)uVar54 <= *piVar20) {
            do {
              puVar35 = FUN_00405fd0(*(void **)(unaff_EBP - 0x2b18),uVar18,uVar54,
                                     *(int *)(unaff_EBP - 0x2b1c),0);
              uVar24 = FUN_004061f0((int)puVar35);
              if ((char)uVar24 != '\0') {
                pvVar52 = *(void **)(unaff_EBP - 0x2b30);
                puVar23 = (uint *)(*(int *)(unaff_EBP - 0x2b14) + 0x5c);
                *puVar23 = *puVar23 | 1;
                FUN_004014b0(pvVar52,(int *)(unaff_EBP - 0x2dc8));
                piVar20 = (int *)(unaff_EBP - 0x346c);
                piVar53 = (int *)(unaff_EBP - 0x347c);
                piVar34 = FUN_004cde40((void *)(unaff_EBP - 0x348c),*(uint *)(unaff_EBP - 0x2b1c));
                pvVar29 = (void *)FUN_00401530(piVar34,piVar53);
                puVar12 = (undefined4 *)FUN_00401530(pvVar29,piVar20);
                FUN_004cde20(pvVar52,puVar12);
                plVar30 = (longlong *)
                          FUN_00401490(pvVar52,(int *)(unaff_EBP - 0x349c),
                                       (uint *)(unaff_EBP - 0x2dc8));
                fVar55 = FUN_00401420(plVar30);
                *(float *)(*(int *)(unaff_EBP - 0x2b14) + 0x1180) = (float)fVar55;
                piVar20 = *(int **)(unaff_EBP - 0x2b48);
                break;
              }
              piVar20 = *(int **)(unaff_EBP - 0x2b48);
              uVar54 = uVar54 + 1;
            } while ((int)uVar54 <= *piVar20);
          }
          if ((*(byte *)(*(int *)(unaff_EBP - 0x2b14) + 0x5c) & 1) != 0) break;
          puVar23 = *(uint **)(unaff_EBP - 0x2b9c);
          uVar18 = uVar18 + 1;
        } while ((int)uVar18 <= **(int **)(unaff_EBP - 0x2b70));
      }
    }
  }
  if ((*(char *)(unaff_EBP - 0x2bac) == '\0') && (*(char *)(unaff_EBP - 0x2b94) == '\0')) {
    pvVar52 = *(void **)(unaff_EBP - 0x2b14);
  }
  else {
    pvVar52 = *(void **)(unaff_EBP - 0x2b14);
    *(uint *)((int)pvVar52 + 0x5c) = *(uint *)((int)pvVar52 + 0x5c) | 1;
  }
  if ((*(char *)((int)pvVar52 + 0x68) == 'k') && ((*(byte *)((int)pvVar52 + 0x5c) & 2) != 0)) {
    fVar56 = *(float *)(unaff_EBP - 0x2b3c) * 0.1;
    pfVar25 = (float *)(unaff_EBP - 0x2e44);
    iVar17 = *(int *)(unaff_EBP - 0x2b24);
    *(undefined4 *)(unaff_EBP - 0x2e44) = 0;
    *(float *)(unaff_EBP - 0x2b30) = fVar56;
    pfVar26 = (float *)FUN_004013d0((void *)((int)pvVar52 + 0x34),0);
    FUN_0052e710(pfVar26,pfVar25,iVar17,fVar56);
    fVar56 = *(float *)(unaff_EBP - 0x2b30);
    pfVar25 = (float *)(unaff_EBP - 0x2e28);
    iVar17 = *(int *)(unaff_EBP - 0x2b24);
    *(undefined4 *)(unaff_EBP - 0x2e28) = 0;
    pfVar26 = (float *)FUN_004013d0((void *)((int)pvVar52 + 0x34),1);
    FUN_0052e710(pfVar26,pfVar25,iVar17,fVar56);
    fVar56 = *(float *)(unaff_EBP - 0x2b3c);
    iVar17 = *(int *)(unaff_EBP - 0x2b24);
    *(undefined4 *)(unaff_EBP - 0x2e00) = 0;
    FUN_0052e710(*(float **)(unaff_EBP - 0x2bb4),(float *)(unaff_EBP - 0x2e00),iVar17,fVar56);
  }
  if (((*(byte *)((int)pvVar52 + 0x5c) & 1) == 0) || (*(char *)((int)pvVar52 + 0x68) == '0')) {
LAB_00543507:
    iVar17 = *(int *)(unaff_EBP - 0x2b24);
  }
  else {
    if (*(char *)((int)pvVar52 + 0x68) == '6') {
      iVar17 = FUN_00407db0(pvVar52,0xffffffff);
      iVar19 = FUN_00411d60(pvVar52,0xffffffff);
      if (*(int *)((int)pvVar52 + 0x6c) <= iVar17 + iVar19) goto LAB_00543507;
    }
    cVar3 = *(char *)((int)pvVar52 + 0x68);
    if (((((cVar3 == '\x06') || (cVar3 == '\a')) || (cVar3 == '\x14')) ||
        (((cVar3 == '\x13' || (cVar3 == '\x12')) || ((cVar3 == '\x11' || (cVar3 == '\n')))))) &&
       (iVar17 = FUN_00407db0(pvVar52,0xffffffff), *(int *)((int)pvVar52 + 0x6c) < iVar17))
    goto LAB_00543507;
    fVar56 = *(float *)(unaff_EBP - 0x2b3c);
    iVar17 = *(int *)(unaff_EBP - 0x2b24);
    iVar19 = iVar17;
    puVar32 = (undefined8 *)FUN_00401080((void *)(unaff_EBP - 0x131c),0,0,0);
    FUN_0052e7c0((float *)((int)pvVar52 + 0x34),puVar32,iVar19,fVar56);
  }
  if ((((*(byte *)((int)pvVar52 + 0x5c) & 3) != 0) ||
      ((*(byte *)((int)pvVar52 + 0x124) & 0x10) != 0)) ||
     (bVar5 = FUN_00530540((int)pvVar52 + 0x1460), !bVar5)) {
    fVar56 = *(float *)(unaff_EBP - 0x2b3c);
    puVar32 = (undefined8 *)FUN_00401080((void *)(unaff_EBP - 0x1334),0,0,0);
    FUN_0052e7c0((float *)((int)pvVar52 + 0x4c),puVar32,iVar17,fVar56);
  }
  FUN_00401cd0((undefined4 *)(unaff_EBP - 0x1c5c));
  pfVar25 = (float *)FUN_004013d0((void *)((int)pvVar52 + 0x28),2);
  fVar56 = *pfVar25;
  *(float **)(unaff_EBP - 0x2b3c) = pfVar25;
  FUN_00402030((void *)(unaff_EBP - 0x1c5c),fVar56);
  pfVar25 = (float *)FUN_00401080((void *)(unaff_EBP - 0x134c),0,0x3f800000,0);
  FUN_004dde00((void *)(unaff_EBP - 0x1c5c),(float *)(unaff_EBP - 0x58),pfVar25);
  puVar12 = FUN_00401080((void *)(unaff_EBP - 0x1364),0,0,0);
  FUN_00401060((void *)((int)pvVar52 + 0x11a0),puVar12);
  pfVar25 = (float *)FUN_004013d0((void *)((int)pvVar52 + 0x80),1);
  if (*(char *)((int)pvVar52 + 0x60) == '\0') {
    *(float **)(unaff_EBP - 0x2b50) = pfVar25;
    pvVar52 = (void *)FUN_004e2320((void *)((int)pvVar52 + 0x10),1);
    piVar20 = (int *)(unaff_EBP - 0x34bc);
    piVar53 = (int *)(unaff_EBP - 0x34cc);
    *(void **)(unaff_EBP - 0x2b54) = pvVar52;
  }
  else {
    *(float **)(unaff_EBP - 0x2b50) = pfVar25;
    pvVar52 = (void *)FUN_004e2320((void *)((int)pvVar52 + 0x10),1);
    fVar56 = *pfVar25;
    piVar20 = (int *)(unaff_EBP - 0x34ec);
    piVar53 = (int *)(unaff_EBP - 0x356c);
    *(void **)(unaff_EBP - 0x2b54) = pvVar52;
    pvVar52 = (void *)FUN_00405660(pvVar52,(int *)(unaff_EBP - 0x357c),(int)(fVar56 * 0.5 + 0.5));
  }
  pvVar52 = (void *)FUN_004014b0(pvVar52,piVar53);
  pCVar36 = (CRefTime *)FUN_004014b0(pvVar52,piVar20);
  lVar37 = CRefTime::Millisecs(pCVar36);
  piVar20 = *(int **)(unaff_EBP - 0x2b70);
  *(long *)(unaff_EBP - 0x2b1c) = lVar37;
  uVar18 = **(uint **)(unaff_EBP - 0x2b20);
  if ((int)uVar18 <= *piVar20) {
    piVar20 = (int *)FUN_004013d0((void *)(unaff_EBP - 0x34),2);
    *(int **)(unaff_EBP - 0x2b74) = piVar20;
    piVar53 = (int *)FUN_004013d0((void *)(unaff_EBP - 0x28),2);
    *(int **)(unaff_EBP - 0x2b30) = piVar53;
    while( true ) {
      iVar17 = *piVar20;
      if (iVar17 <= *piVar53) {
        do {
          puVar35 = FUN_00405fd0(*(void **)(unaff_EBP - 0x2b18),uVar18,*(uint *)(unaff_EBP - 0x2b1c)
                                 ,iVar17,0);
          uVar24 = FUN_004061f0((int)puVar35);
          if ((char)uVar24 != '\0') {
            iVar17 = *(int *)(unaff_EBP - 0x2b14);
            puVar23 = (uint *)(iVar17 + 0x5c);
            *puVar23 = *puVar23 | 4;
            puVar12 = (undefined4 *)FUN_004013d0((void *)(iVar17 + 0x11a0),1);
            piVar20 = *(int **)(unaff_EBP - 0x2b70);
            *puVar12 = 0x3f800000;
            goto LAB_00543767;
          }
          piVar53 = *(int **)(unaff_EBP - 0x2b30);
          iVar17 = iVar17 + 1;
        } while (iVar17 <= *piVar53);
      }
      piVar20 = *(int **)(unaff_EBP - 0x2b70);
      uVar18 = uVar18 + 1;
      if (*piVar20 < (int)uVar18) break;
      piVar20 = *(int **)(unaff_EBP - 0x2b74);
    }
  }
LAB_00543767:
  if (*(char *)(*(int *)(unaff_EBP - 0x2b14) + 0x60) == '\0') {
    piVar53 = (int *)(unaff_EBP - 0x358c);
    pvVar52 = *(void **)(unaff_EBP - 0x2b54);
    piVar34 = (int *)(unaff_EBP - 0x359c);
  }
  else {
    piVar53 = (int *)(unaff_EBP - 0x35ac);
    piVar34 = (int *)(unaff_EBP - 0x35bc);
    pvVar52 = (void *)FUN_00405690(*(void **)(unaff_EBP - 0x2b54),(int *)(unaff_EBP - 0x35cc),
                                   (int)(**(float **)(unaff_EBP - 0x2b50) * 0.5 + 0.5));
  }
  pvVar52 = (void *)FUN_00401530(pvVar52,piVar34);
  pCVar36 = (CRefTime *)FUN_00401530(pvVar52,piVar53);
  lVar37 = CRefTime::Millisecs(pCVar36);
  *(long *)(unaff_EBP - 0x2b1c) = lVar37;
  uVar18 = **(uint **)(unaff_EBP - 0x2b20);
  if ((int)uVar18 <= *piVar20) {
    piVar34 = (int *)FUN_004013d0((void *)(unaff_EBP - 0x34),2);
    *(int **)(unaff_EBP - 0x2b74) = piVar34;
    piVar20 = (int *)FUN_004013d0((void *)(unaff_EBP - 0x28),2);
    piVar53 = *(int **)(unaff_EBP - 0x2b70);
    *(int **)(unaff_EBP - 0x2b30) = piVar20;
    while( true ) {
      iVar17 = *piVar34;
      if (iVar17 <= *piVar20) {
        do {
          puVar35 = FUN_00405fd0(*(void **)(unaff_EBP - 0x2b18),uVar18,*(uint *)(unaff_EBP - 0x2b1c)
                                 ,iVar17,0);
          uVar24 = FUN_004061f0((int)puVar35);
          if ((char)uVar24 != '\0') {
            iVar17 = *(int *)(unaff_EBP - 0x2b14);
            puVar23 = (uint *)(iVar17 + 0x5c);
            *puVar23 = *puVar23 | 4;
            puVar12 = (undefined4 *)FUN_004013d0((void *)(iVar17 + 0x11a0),1);
            *puVar12 = 0xbf800000;
            goto LAB_005438b1;
          }
          piVar20 = *(int **)(unaff_EBP - 0x2b30);
          iVar17 = iVar17 + 1;
        } while (iVar17 <= *piVar20);
        piVar53 = *(int **)(unaff_EBP - 0x2b70);
      }
      uVar18 = uVar18 + 1;
      if (*piVar53 < (int)uVar18) break;
      piVar34 = *(int **)(unaff_EBP - 0x2b74);
    }
  }
LAB_005438b1:
  if (*(char *)(*(int *)(unaff_EBP - 0x2b14) + 0x60) == '\0') {
    pvVar52 = (void *)FUN_004e2320(*(void **)(unaff_EBP - 0x2b60),0);
    piVar20 = (int *)(unaff_EBP - 0x35dc);
    piVar53 = (int *)(unaff_EBP - 0x35ec);
    *(void **)(unaff_EBP - 0x2b70) = pvVar52;
  }
  else {
    pvVar52 = (void *)FUN_004e2320(*(void **)(unaff_EBP - 0x2b60),0);
    piVar20 = (int *)(unaff_EBP - 0x35fc);
    piVar53 = (int *)(unaff_EBP - 0x362c);
    pfVar25 = *(float **)(unaff_EBP - 0x2b4c);
    *(void **)(unaff_EBP - 0x2b70) = pvVar52;
    pvVar52 = (void *)FUN_00405660(pvVar52,(int *)(unaff_EBP - 0x363c),(int)(*pfVar25 * 0.5 + 0.5));
  }
  pvVar52 = (void *)FUN_004014b0(pvVar52,piVar53);
  pCVar36 = (CRefTime *)FUN_004014b0(pvVar52,piVar20);
  lVar37 = CRefTime::Millisecs(pCVar36);
  *(long *)(unaff_EBP - 0x2b1c) = lVar37;
  puVar23 = (uint *)FUN_004013d0((void *)(unaff_EBP - 0x34),1);
  uVar18 = *puVar23;
  *(uint **)(unaff_EBP - 0x2b48) = puVar23;
  piVar20 = (int *)FUN_004013d0((void *)(unaff_EBP - 0x28),1);
  *(int **)(unaff_EBP - 0x2b20) = piVar20;
  if ((int)uVar18 <= *piVar20) {
    piVar34 = (int *)FUN_004013d0((void *)(unaff_EBP - 0x34),2);
    *(int **)(unaff_EBP - 0x2b74) = piVar34;
    piVar20 = (int *)FUN_004013d0((void *)(unaff_EBP - 0x28),2);
    piVar53 = *(int **)(unaff_EBP - 0x2b20);
    *(int **)(unaff_EBP - 0x2b30) = piVar20;
    while( true ) {
      iVar17 = *piVar34;
      if (iVar17 <= *piVar20) {
        do {
          puVar35 = FUN_00405fd0(*(void **)(unaff_EBP - 0x2b18),*(uint *)(unaff_EBP - 0x2b1c),uVar18
                                 ,iVar17,0);
          uVar24 = FUN_004061f0((int)puVar35);
          if ((char)uVar24 != '\0') {
            iVar17 = *(int *)(unaff_EBP - 0x2b14);
            puVar23 = (uint *)(iVar17 + 0x5c);
            *puVar23 = *puVar23 | 4;
            puVar12 = (undefined4 *)FUN_004013d0((void *)(iVar17 + 0x11a0),0);
            *puVar12 = 0x3f800000;
            goto LAB_00543a2b;
          }
          piVar20 = *(int **)(unaff_EBP - 0x2b30);
          iVar17 = iVar17 + 1;
        } while (iVar17 <= *piVar20);
        piVar53 = *(int **)(unaff_EBP - 0x2b20);
      }
      uVar18 = uVar18 + 1;
      if (*piVar53 < (int)uVar18) break;
      piVar34 = *(int **)(unaff_EBP - 0x2b74);
    }
LAB_00543a2b:
    puVar23 = *(uint **)(unaff_EBP - 0x2b48);
  }
  if (*(char *)(*(int *)(unaff_EBP - 0x2b14) + 0x60) == '\0') {
    piVar20 = (int *)(unaff_EBP - 0x366c);
    pvVar52 = *(void **)(unaff_EBP - 0x2b70);
    piVar53 = (int *)(unaff_EBP - 0x36dc);
  }
  else {
    piVar20 = (int *)(unaff_EBP - 0x36fc);
    piVar53 = (int *)(unaff_EBP - 0x371c);
    pvVar52 = (void *)FUN_00405690(*(void **)(unaff_EBP - 0x2b70),(int *)(unaff_EBP - 0x372c),
                                   (int)(**(float **)(unaff_EBP - 0x2b4c) * 0.5 + 0.5));
  }
  pvVar52 = (void *)FUN_00401530(pvVar52,piVar53);
  pCVar36 = (CRefTime *)FUN_00401530(pvVar52,piVar20);
  lVar37 = CRefTime::Millisecs(pCVar36);
  uVar18 = *puVar23;
  *(long *)(unaff_EBP - 0x2b1c) = lVar37;
  if ((int)uVar18 <= **(int **)(unaff_EBP - 0x2b20)) {
    piVar34 = (int *)FUN_004013d0((void *)(unaff_EBP - 0x34),2);
    *(int **)(unaff_EBP - 0x2b74) = piVar34;
    piVar20 = (int *)FUN_004013d0((void *)(unaff_EBP - 0x28),2);
    piVar53 = *(int **)(unaff_EBP - 0x2b20);
    *(int **)(unaff_EBP - 0x2b30) = piVar20;
    while( true ) {
      iVar17 = *piVar34;
      if (iVar17 <= *piVar20) {
        do {
          puVar35 = FUN_00405fd0(*(void **)(unaff_EBP - 0x2b18),*(uint *)(unaff_EBP - 0x2b1c),uVar18
                                 ,iVar17,0);
          uVar24 = FUN_004061f0((int)puVar35);
          if ((char)uVar24 != '\0') {
            iVar17 = *(int *)(unaff_EBP - 0x2b14);
            *(uint *)(iVar17 + 0x5c) = *(uint *)(iVar17 + 0x5c) | 4;
            puVar12 = (undefined4 *)FUN_004013d0((void *)(iVar17 + 0x11a0),0);
            *puVar12 = 0xbf800000;
            goto LAB_00543b83;
          }
          piVar20 = *(int **)(unaff_EBP - 0x2b30);
          iVar17 = iVar17 + 1;
        } while (iVar17 <= *piVar20);
        piVar53 = *(int **)(unaff_EBP - 0x2b20);
      }
      uVar18 = uVar18 + 1;
      if (*piVar53 < (int)uVar18) break;
      piVar34 = *(int **)(unaff_EBP - 0x2b74);
    }
  }
  iVar17 = *(int *)(unaff_EBP - 0x2b14);
LAB_00543b83:
  if ((*(byte *)(iVar17 + 0x5c) & 4) == 0) {
    pfVar25 = (float *)FUN_00401080((void *)(unaff_EBP - 0x137c),0x3f333333,0x3f333333,0);
    fVar55 = FUN_004015a0((float *)(unaff_EBP - 0x58),pfVar25);
    *(float *)(unaff_EBP - 0x2b30) = (float)fVar55;
    if (*(float *)(unaff_EBP - 0x2b30) <= 0.1) {
      if (*(char *)(iVar17 + 0x60) == '\0') {
        piVar20 = (int *)(unaff_EBP - 0x31b4);
        pvVar52 = (void *)FUN_004014b0(*(void **)(unaff_EBP - 0x2b70),(int *)(unaff_EBP - 0x3614));
        pCVar36 = (CRefTime *)FUN_004014b0(pvVar52,piVar20);
        lVar37 = CRefTime::Millisecs(pCVar36);
        *(long *)(unaff_EBP - 0x2b48) = lVar37;
        piVar20 = (int *)(unaff_EBP - 0x3274);
        pvVar52 = *(void **)(unaff_EBP - 0x2b54);
        piVar53 = (int *)(unaff_EBP - 0x34e4);
      }
      else {
        piVar20 = (int *)(unaff_EBP - 0x3284);
        piVar53 = (int *)(unaff_EBP - 0x36b4);
        pvVar52 = (void *)FUN_00405660(*(void **)(unaff_EBP - 0x2b70),(int *)(unaff_EBP - 0x3294),
                                       (int)(**(float **)(unaff_EBP - 0x2b4c) * 0.5 + 0.5));
        pvVar52 = (void *)FUN_004014b0(pvVar52,piVar53);
        pCVar36 = (CRefTime *)FUN_004014b0(pvVar52,piVar20);
        lVar37 = CRefTime::Millisecs(pCVar36);
        *(long *)(unaff_EBP - 0x2b48) = lVar37;
        piVar20 = (int *)(unaff_EBP - 0x34f4);
        piVar53 = (int *)(unaff_EBP - 0x32a4);
        pvVar52 = (void *)FUN_00405660(*(void **)(unaff_EBP - 0x2b54),(int *)(unaff_EBP - 0x3624),
                                       (int)(**(float **)(unaff_EBP - 0x2b50) * 0.5 + 0.5));
      }
      pvVar52 = (void *)FUN_004014b0(pvVar52,piVar53);
      pCVar36 = (CRefTime *)FUN_004014b0(pvVar52,piVar20);
      lVar37 = CRefTime::Millisecs(pCVar36);
      *(long *)(unaff_EBP - 0x2b1c) = lVar37;
      piVar20 = (int *)FUN_004013d0((void *)(unaff_EBP - 0x34),2);
      iVar17 = *piVar20;
      piVar20 = (int *)FUN_004013d0((void *)(unaff_EBP - 0x28),2);
      if (iVar17 <= *piVar20) {
        do {
          puVar35 = FUN_00405fd0(*(void **)(unaff_EBP - 0x2b18),*(uint *)(unaff_EBP - 0x2b48),
                                 *(uint *)(unaff_EBP - 0x2b1c),iVar17,0);
          uVar24 = FUN_004061f0((int)puVar35);
          if ((char)uVar24 != '\0') {
            iVar17 = *(int *)(unaff_EBP - 0x2b14);
            *(uint *)(iVar17 + 0x5c) = *(uint *)(iVar17 + 0x5c) | 4;
            puVar12 = (undefined4 *)FUN_004013d0((void *)(iVar17 + 0x11a0),0);
            *puVar12 = 0x3f800000;
            puVar12 = (undefined4 *)FUN_004013d0((void *)(iVar17 + 0x11a0),1);
            *puVar12 = 0x3f800000;
            goto LAB_00543d89;
          }
          iVar17 = iVar17 + 1;
        } while (iVar17 <= *piVar20);
      }
      iVar17 = *(int *)(unaff_EBP - 0x2b14);
    }
LAB_00543d89:
    if ((*(byte *)(iVar17 + 0x5c) & 4) == 0) {
      pfVar25 = (float *)FUN_00401080((void *)(unaff_EBP - 0x1394),0xbf333333,0x3f333333,0);
      fVar55 = FUN_004015a0((float *)(unaff_EBP - 0x58),pfVar25);
      *(float *)(unaff_EBP - 0x2b30) = (float)fVar55;
      if (*(float *)(unaff_EBP - 0x2b30) <= 0.1) {
        if (*(char *)(iVar17 + 0x60) == '\0') {
          piVar20 = (int *)(unaff_EBP - 0x32b4);
          pvVar52 = (void *)FUN_00401530(*(void **)(unaff_EBP - 0x2b70),(int *)(unaff_EBP - 0x3504))
          ;
          pCVar36 = (CRefTime *)FUN_00401530(pvVar52,piVar20);
          lVar37 = CRefTime::Millisecs(pCVar36);
          *(long *)(unaff_EBP - 0x2b48) = lVar37;
          piVar20 = (int *)(unaff_EBP - 0x32c4);
          pvVar52 = *(void **)(unaff_EBP - 0x2b54);
          piVar53 = (int *)(unaff_EBP - 0x3704);
        }
        else {
          piVar20 = (int *)(unaff_EBP - 0x32d4);
          piVar53 = (int *)(unaff_EBP - 0x3514);
          pvVar52 = (void *)FUN_00405690(*(void **)(unaff_EBP - 0x2b70),(int *)(unaff_EBP - 0x32e4),
                                         (int)(**(float **)(unaff_EBP - 0x2b4c) * 0.5 + 0.5));
          pvVar52 = (void *)FUN_00401530(pvVar52,piVar53);
          pCVar36 = (CRefTime *)FUN_00401530(pvVar52,piVar20);
          lVar37 = CRefTime::Millisecs(pCVar36);
          *(long *)(unaff_EBP - 0x2b48) = lVar37;
          piVar20 = (int *)(unaff_EBP - 0x3634);
          piVar53 = (int *)(unaff_EBP - 0x32f4);
          pvVar52 = (void *)FUN_00405660(*(void **)(unaff_EBP - 0x2b54),(int *)(unaff_EBP - 0x3524),
                                         (int)(**(float **)(unaff_EBP - 0x2b50) * 0.5 + 0.5));
        }
        pvVar52 = (void *)FUN_004014b0(pvVar52,piVar53);
        pCVar36 = (CRefTime *)FUN_004014b0(pvVar52,piVar20);
        lVar37 = CRefTime::Millisecs(pCVar36);
        *(long *)(unaff_EBP - 0x2b1c) = lVar37;
        piVar20 = (int *)FUN_004013d0((void *)(unaff_EBP - 0x34),2);
        iVar17 = *piVar20;
        piVar20 = (int *)FUN_004013d0((void *)(unaff_EBP - 0x28),2);
        if (iVar17 <= *piVar20) {
          do {
            puVar35 = FUN_00405fd0(*(void **)(unaff_EBP - 0x2b18),*(uint *)(unaff_EBP - 0x2b48),
                                   *(uint *)(unaff_EBP - 0x2b1c),iVar17,0);
            uVar24 = FUN_004061f0((int)puVar35);
            if ((char)uVar24 != '\0') {
              iVar17 = *(int *)(unaff_EBP - 0x2b14);
              *(uint *)(iVar17 + 0x5c) = *(uint *)(iVar17 + 0x5c) | 4;
              puVar12 = (undefined4 *)FUN_004013d0((void *)(iVar17 + 0x11a0),0);
              *puVar12 = 0xbf800000;
              puVar12 = (undefined4 *)FUN_004013d0((void *)(iVar17 + 0x11a0),1);
              *puVar12 = 0x3f800000;
              goto LAB_00543fc4;
            }
            iVar17 = iVar17 + 1;
          } while (iVar17 <= *piVar20);
        }
        iVar17 = *(int *)(unaff_EBP - 0x2b14);
      }
LAB_00543fc4:
      if ((*(byte *)(iVar17 + 0x5c) & 4) == 0) {
        pfVar25 = (float *)FUN_00401080((void *)(unaff_EBP - 0x13ac),0x3f333333,0xbf333333,0);
        fVar55 = FUN_004015a0((float *)(unaff_EBP - 0x58),pfVar25);
        *(float *)(unaff_EBP - 0x2b30) = (float)fVar55;
        if (*(float *)(unaff_EBP - 0x2b30) <= 0.1) {
          if (*(char *)(iVar17 + 0x60) == '\0') {
            piVar20 = (int *)(unaff_EBP - 0x3304);
            pvVar52 = (void *)FUN_004014b0(*(void **)(unaff_EBP - 0x2b70),
                                           (int *)(unaff_EBP - 0x36c4));
            pCVar36 = (CRefTime *)FUN_004014b0(pvVar52,piVar20);
            lVar37 = CRefTime::Millisecs(pCVar36);
            *(long *)(unaff_EBP - 0x2b48) = lVar37;
            piVar20 = (int *)(unaff_EBP - 0x3314);
            pvVar52 = *(void **)(unaff_EBP - 0x2b54);
            piVar53 = (int *)(unaff_EBP - 0x3534);
          }
          else {
            piVar20 = (int *)(unaff_EBP - 0x3324);
            piVar53 = (int *)(unaff_EBP - 0x3644);
            pvVar52 = (void *)FUN_00405660(*(void **)(unaff_EBP - 0x2b70),
                                           (int *)(unaff_EBP - 0x3334),
                                           (int)(**(float **)(unaff_EBP - 0x2b4c) * 0.5 + 0.5));
            pvVar52 = (void *)FUN_004014b0(pvVar52,piVar53);
            pCVar36 = (CRefTime *)FUN_004014b0(pvVar52,piVar20);
            lVar37 = CRefTime::Millisecs(pCVar36);
            *(long *)(unaff_EBP - 0x2b48) = lVar37;
            piVar20 = (int *)(unaff_EBP - 0x3544);
            piVar53 = (int *)(unaff_EBP - 0x3344);
            pvVar52 = (void *)FUN_00405690(*(void **)(unaff_EBP - 0x2b54),
                                           (int *)(unaff_EBP - 0x3744),
                                           (int)(**(float **)(unaff_EBP - 0x2b50) * 0.5 + 0.5));
          }
          pvVar52 = (void *)FUN_00401530(pvVar52,piVar53);
          pCVar36 = (CRefTime *)FUN_00401530(pvVar52,piVar20);
          lVar37 = CRefTime::Millisecs(pCVar36);
          *(long *)(unaff_EBP - 0x2b1c) = lVar37;
          piVar20 = (int *)FUN_004013d0((void *)(unaff_EBP - 0x34),2);
          iVar17 = *piVar20;
          piVar20 = (int *)FUN_004013d0((void *)(unaff_EBP - 0x28),2);
          if (iVar17 <= *piVar20) {
            do {
              puVar35 = FUN_00405fd0(*(void **)(unaff_EBP - 0x2b18),*(uint *)(unaff_EBP - 0x2b48),
                                     *(uint *)(unaff_EBP - 0x2b1c),iVar17,0);
              uVar24 = FUN_004061f0((int)puVar35);
              if ((char)uVar24 != '\0') {
                iVar17 = *(int *)(unaff_EBP - 0x2b14);
                *(uint *)(iVar17 + 0x5c) = *(uint *)(iVar17 + 0x5c) | 4;
                puVar12 = (undefined4 *)FUN_004013d0((void *)(iVar17 + 0x11a0),0);
                *puVar12 = 0x3f800000;
                puVar12 = (undefined4 *)FUN_004013d0((void *)(iVar17 + 0x11a0),1);
                *puVar12 = 0xbf800000;
                goto LAB_00544204;
              }
              iVar17 = iVar17 + 1;
            } while (iVar17 <= *piVar20);
          }
          iVar17 = *(int *)(unaff_EBP - 0x2b14);
        }
LAB_00544204:
        if ((*(byte *)(iVar17 + 0x5c) & 4) == 0) {
          pfVar25 = (float *)FUN_00401080((void *)(unaff_EBP - 0x13c4),0xbf333333,0xbf333333,0);
          fVar55 = FUN_004015a0((float *)(unaff_EBP - 0x58),pfVar25);
          *(float *)(unaff_EBP - 0x2b30) = (float)fVar55;
          if (*(float *)(unaff_EBP - 0x2b30) <= 0.1) {
            if (*(char *)(iVar17 + 0x60) == '\0') {
              piVar20 = (int *)(unaff_EBP - 0x3354);
              pvVar52 = (void *)FUN_00401530(*(void **)(unaff_EBP - 0x2b70),
                                             (int *)(unaff_EBP - 0x3554));
              pCVar36 = (CRefTime *)FUN_00401530(pvVar52,piVar20);
              lVar37 = CRefTime::Millisecs(pCVar36);
              *(long *)(unaff_EBP - 0x2b48) = lVar37;
              piVar20 = (int *)(unaff_EBP - 0x3364);
              pvVar52 = *(void **)(unaff_EBP - 0x2b54);
              piVar53 = (int *)(unaff_EBP - 0x3654);
            }
            else {
              piVar20 = (int *)(unaff_EBP - 0x3374);
              piVar53 = (int *)(unaff_EBP - 0x3564);
              pvVar52 = (void *)FUN_00405690(*(void **)(unaff_EBP - 0x2b70),
                                             (int *)(unaff_EBP - 0x3384),
                                             (int)(**(float **)(unaff_EBP - 0x2b4c) * 0.5 + 0.5));
              pvVar52 = (void *)FUN_00401530(pvVar52,piVar53);
              pCVar36 = (CRefTime *)FUN_00401530(pvVar52,piVar20);
              lVar37 = CRefTime::Millisecs(pCVar36);
              *(long *)(unaff_EBP - 0x2b48) = lVar37;
              piVar20 = (int *)(unaff_EBP - 0x36d4);
              piVar53 = (int *)(unaff_EBP - 0x3394);
              pvVar52 = (void *)FUN_00405690(*(void **)(unaff_EBP - 0x2b54),
                                             (int *)(unaff_EBP - 0x3574),
                                             (int)(**(float **)(unaff_EBP - 0x2b50) * 0.5 + 0.5));
            }
            pvVar52 = (void *)FUN_00401530(pvVar52,piVar53);
            pCVar36 = (CRefTime *)FUN_00401530(pvVar52,piVar20);
            lVar37 = CRefTime::Millisecs(pCVar36);
            *(long *)(unaff_EBP - 0x2b1c) = lVar37;
            piVar20 = (int *)FUN_004013d0((void *)(unaff_EBP - 0x34),2);
            iVar17 = *piVar20;
            piVar20 = (int *)FUN_004013d0((void *)(unaff_EBP - 0x28),2);
            if (iVar17 <= *piVar20) {
              do {
                puVar35 = FUN_00405fd0(*(void **)(unaff_EBP - 0x2b18),*(uint *)(unaff_EBP - 0x2b48),
                                       *(uint *)(unaff_EBP - 0x2b1c),iVar17,0);
                uVar24 = FUN_004061f0((int)puVar35);
                if ((char)uVar24 != '\0') {
                  iVar17 = *(int *)(unaff_EBP - 0x2b14);
                  *(uint *)(iVar17 + 0x5c) = *(uint *)(iVar17 + 0x5c) | 4;
                  puVar12 = (undefined4 *)FUN_004013d0((void *)(iVar17 + 0x11a0),0);
                  *puVar12 = 0xbf800000;
                  puVar12 = (undefined4 *)FUN_004013d0((void *)(iVar17 + 0x11a0),1);
                  *puVar12 = 0xbf800000;
                  goto LAB_00544444;
                }
                iVar17 = iVar17 + 1;
              } while (iVar17 <= *piVar20);
            }
            iVar17 = *(int *)(unaff_EBP - 0x2b14);
          }
        }
      }
    }
  }
LAB_00544444:
  if (((*(byte *)(iVar17 + 0x5c) & 2) == 0) || (*(char *)(iVar17 + 0x68) == 'k')) {
    pfVar25 = (float *)(unaff_EBP - 0x2d90);
    iVar19 = *(int *)(unaff_EBP - 0x2b24);
    fVar56 = 0.01;
    *(undefined4 *)(unaff_EBP - 0x2d90) = 0;
    pfVar26 = (float *)FUN_004013d0((void *)(iVar17 + 0x28),0);
    FUN_0052e710(pfVar26,pfVar25,iVar19,fVar56);
  }
  else {
    iVar19 = *(int *)(unaff_EBP - 0x2b24);
    fVar56 = 0.005;
    iVar39 = iVar19;
    puVar32 = (undefined8 *)FUN_00401080((void *)(unaff_EBP - 0x13dc),0,0,0);
    FUN_0052e7c0((float *)(iVar17 + 0x34),puVar32,iVar39,fVar56);
    if ((*(char *)(iVar17 + 0x60) != '\x06') && ((*(byte *)(iVar17 + 0x7e) & 1) == 0)) {
      pfVar25 = (float *)(unaff_EBP - 0x2cf4);
      fVar56 = 0.01;
      *(undefined4 *)(unaff_EBP - 0x2cf4) = 0xc2700000;
      pfVar26 = (float *)FUN_004013d0((void *)(iVar17 + 0x28),0);
      FUN_0052e710(pfVar26,pfVar25,iVar19,fVar56);
    }
    if ((*(char *)(unaff_EBP - 0x2be0) == '\0') &&
       (**(float **)(unaff_EBP - 0x2bb4) <= -3.0 && **(float **)(unaff_EBP - 0x2bb4) != -3.0)) {
      FUN_004c8510(unaff_EBP - 0x968);
      FUN_00402a40((void *)(unaff_EBP - 0x968),(undefined4 *)(iVar17 + 0x10));
      *(undefined4 *)(unaff_EBP - 0x934) = 0x3ecccccd;
      ppVar28 = (pair<unsigned___int64,unsigned___int64> *)
                FUN_004010b0((void *)(unaff_EBP - 0x1b7c),0x3e4ccccd,0x3f333333,0x3f800000,
                             0x3f800000);
      std::pair<unsigned___int64,unsigned___int64>::
      operator=<std::pair<unsigned___int64,unsigned___int64>,0>
                ((pair<unsigned___int64,unsigned___int64> *)(unaff_EBP - 0x944),ppVar28);
      puVar12 = FUN_00401080((void *)(unaff_EBP - 0x13f4),0,0,0x41200000);
      FUN_00401060((void *)(unaff_EBP - 0x950),puVar12);
      iVar19 = *(int *)(unaff_EBP - 0x2b28);
      *(undefined4 *)(unaff_EBP - 0x930) = 0xf;
      FUN_00428540((void *)(iVar19 + 0x10),(undefined4 *)(unaff_EBP - 0x968));
      FUN_004c8530(unaff_EBP - 0x7c);
      *(undefined4 *)(unaff_EBP - 0x70) = 0x1f;
      iVar19 = rand();
      *(float *)(unaff_EBP - 0x6c) = (float)iVar19 / 32767.0 + 0.9;
      FUN_00402550((void *)(unaff_EBP - 0x7c),(longlong *)(iVar17 + 0x10));
      iVar19 = *(int *)(unaff_EBP - 0x2b28);
      *(undefined4 *)(unaff_EBP - 0x68) = 0x3f800000;
      FUN_00428590((void *)(iVar19 + 8),(undefined4 *)(unaff_EBP - 0x7c));
    }
  }
  pvVar52 = *(void **)(unaff_EBP - 0x2b18);
  if (iVar17 == *(int *)((int)pvVar52 + 0xb8)) {
    fVar55 = FUN_004015a0((float *)(unaff_EBP - 0x58),(float *)(unaff_EBP - 0x11c));
    *(float *)(unaff_EBP - 0x2b30) = (float)fVar55;
    if ((((*(float *)(unaff_EBP - 0x2b30) <= 0.0) && ((*(ushort *)(iVar17 + 0x124) & 1) != 0)) &&
        ((*(ushort *)(iVar17 + 0x124) & 0x10) == 0)) &&
       ((*(char *)(unaff_EBP - 0x2bd8) != '\0' && ((*(byte *)(iVar17 + 0x5c) & 4) == 0)))) {
      puVar12 = (undefined4 *)FUN_0041cba0(iVar17 + 0x40);
      pfVar25 = (float *)FUN_004cde20((void *)(unaff_EBP - 0xe98),puVar12);
      fVar55 = FUN_00402180(pfVar25);
      *(float *)(unaff_EBP - 0x2b30) = (float)fVar55;
      if (0.0 < *(float *)(unaff_EBP - 0x2b30)) {
        puVar12 = (undefined4 *)
                  FUN_004e1520((float *)(unaff_EBP - 0x140c),-5.0,(float *)(unaff_EBP - 0x11c));
        FUN_00401060((void *)(iVar17 + 0x34),puVar12);
      }
    }
  }
  if (*(int *)(iVar17 + 100) == 0x65) {
    if ((*(char *)(iVar17 + 0x68) == '3') && (*(int *)(iVar17 + 0x6c) < 1000)) {
      *(undefined4 *)(unaff_EBP - 0x2d10) = 0x42700000;
      pfVar25 = (float *)(unaff_EBP - 0x2d10);
    }
    else {
      *(undefined4 *)(unaff_EBP - 0x2cb8) = 0;
      pfVar25 = (float *)(unaff_EBP - 0x2cb8);
    }
    iVar19 = *(int *)(unaff_EBP - 0x2b24);
    fVar56 = 0.01;
    pfVar26 = (float *)FUN_004013d0((void *)(iVar17 + 0x28),0);
    FUN_0052e710(pfVar26,pfVar25,iVar19,fVar56);
  }
  uVar18 = FUN_00405420(pvVar52,(uint *)(iVar17 + 0x11c0));
  if (uVar18 == 0) {
LAB_005447a6:
    pvVar52 = *(void **)(unaff_EBP - 0x2b14);
LAB_005447ac:
    uVar18 = *(uint *)((int)pvVar52 + 0x5c);
    *(uint *)(unaff_EBP - 0x2b1c) = uVar18;
    uVar54 = uVar18 & 1;
    if ((((uVar54 == 0) && ((*(byte *)((int)pvVar52 + 0x7e) & 2) == 0)) &&
        (((*(byte *)((int)pvVar52 + 0x124) & 1) == 0 || ((uVar18 & 4) == 0)))) &&
       ((uVar18 & 2) == 0)) {
LAB_00544d53:
      if (((uVar54 == 0) && ((uVar18 & 2) == 0)) &&
         (((*(byte *)((int)pvVar52 + 0x124) & 1) == 0 || ((uVar18 & 4) == 0)))) {
        pfVar25 = *(float **)(unaff_EBP - 0x2b4c);
        *(undefined4 *)((int)pvVar52 + 0x118c) = 0;
        fVar55 = FUN_004024e0(0.8 / *pfVar25);
        *(float *)(unaff_EBP - 0x2b30) = (float)fVar55;
        fVar56 = *(float *)(unaff_EBP - 0x2b30) * *(float *)(unaff_EBP - 0x2ba0);
LAB_00544db0:
        *(float *)((int)pvVar52 + 0x1188) = fVar56 + *(float *)((int)pvVar52 + 0x1188);
      }
      goto LAB_00544dc0;
    }
    fVar55 = FUN_004021b0((float *)((int)pvVar52 + 0x34));
    *(float *)(unaff_EBP - 0x2b30) = (float)fVar55;
    if ((*(float *)(unaff_EBP - 0x2b30) <= 0.5) || (*(char *)((int)pvVar52 + 0x68) == 'k')) {
      uVar18 = *(uint *)(unaff_EBP - 0x2b1c);
      goto LAB_00544d53;
    }
    if (((*(byte *)((int)pvVar52 + 0x124) & 1) != 0) && ((*(byte *)((int)pvVar52 + 0x5c) & 4) != 0))
    {
      fVar55 = FUN_004024e0(0.8 / **(float **)(unaff_EBP - 0x2b4c));
      *(float *)(unaff_EBP - 0x2b74) = (float)fVar55;
      fVar55 = FUN_00401d80((float *)((int)pvVar52 + 0x34));
      *(float *)(unaff_EBP - 0x2b30) = (float)fVar55;
      fVar56 = *(float *)(unaff_EBP - 0x2ba0) * 0.2;
      *(float *)((int)pvVar52 + 0x118c) =
           *(float *)(unaff_EBP - 0x2b74) *
           *(float *)(unaff_EBP - 0x2b30) * *(float *)(unaff_EBP - 0x2ba0) * 6.0 +
           *(float *)((int)pvVar52 + 0x118c);
      goto LAB_00544db0;
    }
    puVar12 = *(undefined4 **)(unaff_EBP - 0x2b5c);
    *(undefined4 *)(unaff_EBP - 0x2b74) = *(undefined4 *)((int)pvVar52 + 0x118c);
    pfVar25 = (float *)FUN_004cde20((void *)(unaff_EBP - 0xeb8),puVar12);
    fVar55 = FUN_00401d40(pfVar25);
    *(float *)(unaff_EBP - 0x2b20) = (float)fVar55;
    if ((*(byte *)((int)pvVar52 + 0x5c) & 1) != 0) {
      if (((*(char *)((int)pvVar52 + 0x68) == '0') ||
          ((*(char *)((int)pvVar52 + 0x68) == '6' &&
           (iVar17 = FUN_004084b0((int)pvVar52), *(int *)((int)pvVar52 + 0x6c) < iVar17)))) ||
         ((((cVar3 = *(char *)((int)pvVar52 + 0x68), cVar3 == '\x06' ||
            (((cVar3 == '\a' || (cVar3 == '\x14')) || (cVar3 == '\x13')))) ||
           (((cVar3 == '\x12' || (cVar3 == '\x11')) || (cVar3 == '\n')))) &&
          (iVar17 = FUN_00407db0(pvVar52,0xffffffff), *(int *)((int)pvVar52 + 0x6c) < iVar17)))) {
        fVar55 = FUN_004024e0(0.8 / **(float **)(unaff_EBP - 0x2b4c));
        *(float *)(unaff_EBP - 0x2b30) = (float)fVar55;
        fVar56 = *(float *)(unaff_EBP - 0x2b20);
        fVar59 = *(float *)(unaff_EBP - 0x2b30);
        fVar58 = *(float *)(unaff_EBP - 0x2ba0);
        fVar57 = *(float *)(unaff_EBP - 0x2b88) * 0.000100000005 * fVar56 * 1.5;
LAB_00544b21:
        fVar59 = fVar59 * fVar57;
      }
      else {
        fVar55 = FUN_004024e0(0.8 / **(float **)(unaff_EBP - 0x2b4c));
        fVar56 = *(float *)(unaff_EBP - 0x2b20);
        fVar58 = *(float *)(unaff_EBP - 0x2ba0);
        fVar57 = fVar56 * fVar58 * 1.5;
        if (*(char *)((int)pvVar52 + 0x68) != 'O') {
          *(float *)(unaff_EBP - 0x2b30) = (float)fVar55;
          fVar59 = *(float *)(unaff_EBP - 0x2b30);
          goto LAB_00544b21;
        }
        *(float *)(unaff_EBP - 0x2b30) = (float)fVar55;
        fVar59 = *(float *)(unaff_EBP - 0x2b30) * fVar57 * 2.0;
      }
      pvVar29 = *(void **)(unaff_EBP - 0x2b18);
      *(float *)((int)pvVar52 + 0x118c) = fVar59 + *(float *)((int)pvVar52 + 0x118c);
      *(float *)((int)pvVar52 + 0x1188) = *(float *)((int)pvVar52 + 0x1188) + fVar58;
      if (((*(int *)((int)pvVar29 + 0xb8) != 0) && (*(int *)((int)pvVar52 + 0x128) == 0)) &&
         (((*(byte *)((int)pvVar52 + 0x5c) & 2) == 0 &&
          ((5.0 < fVar56 &&
           ((int)(*(float *)(unaff_EBP - 0x2b74) / 3.1415927) <
            (int)(*(float *)((int)pvVar52 + 0x118c) / 3.1415927))))))) {
        FUN_004c8530(unaff_EBP - 0xf8);
        piVar20 = (int *)(unaff_EBP - 0x3584);
        FUN_004013d0((void *)((int)pvVar52 + 0x80),2);
        piVar53 = (int *)(unaff_EBP - 0x33c4);
        pvVar33 = (void *)FUN_004e2320((void *)((int)pvVar52 + 0x10),2);
        pvVar33 = (void *)FUN_004014b0(pvVar33,piVar53);
        puVar23 = (uint *)FUN_004014b0(pvVar33,piVar20);
        iVar17 = FUN_00406050(pvVar29,**(uint **)(unaff_EBP - 0x2b70),
                              (*(uint **)(unaff_EBP - 0x2b70))[1],**(uint **)(unaff_EBP - 0x2b54),
                              (*(uint **)(unaff_EBP - 0x2b54))[1],*puVar23,puVar23[1],0);
        bVar6 = FUN_00406280(iVar17);
        if (CONCAT31(extraout_var_04,bVar6) == 3) {
          iVar17 = rand();
          *(undefined4 *)(unaff_EBP - 0xe8) = 0x3f800000;
          *(int *)(unaff_EBP - 0xec) = iVar17 % 3 + 0x21;
        }
        else {
          *(undefined4 *)(unaff_EBP - 0xec) = 0x20;
          iVar17 = rand();
          *(float *)(unaff_EBP - 0xe8) = ((float)iVar17 * 0.2) / 32767.0 + 1.0;
        }
        FUN_00402550((void *)(unaff_EBP - 0xf8),(longlong *)((int)pvVar52 + 0x10));
        iVar17 = *(int *)(unaff_EBP - 0x2b28);
        *(undefined4 *)(unaff_EBP - 0xe4) = 0x3f800000;
        FUN_00428590((void *)(iVar17 + 8),(undefined4 *)(unaff_EBP - 0xf8));
      }
      goto LAB_00544dc0;
    }
    fVar55 = FUN_004024e0(0.8 / **(float **)(unaff_EBP - 0x2b4c));
    *(float *)(unaff_EBP - 0x2b30) = (float)fVar55;
    fVar56 = *(float *)(unaff_EBP - 0x2b88);
    *(float *)((int)pvVar52 + 0x118c) =
         *(float *)(unaff_EBP - 0x2b30) * fVar56 * 0.002 * *(float *)(unaff_EBP - 0x2b20) * 1.5 +
         *(float *)((int)pvVar52 + 0x118c);
    *(float *)((int)pvVar52 + 0x1188) =
         *(float *)((int)pvVar52 + 0x1188) + *(float *)(unaff_EBP - 0x2ba0);
  }
  else {
    if (*(float *)(uVar18 + 0x16c) <= 0.0) {
      *(uint *)(iVar17 + 0x11c0) = 0;
      *(undefined4 *)(iVar17 + 0x11c4) = 0;
      goto LAB_005447a6;
    }
    pvVar52 = *(void **)(unaff_EBP - 0x2b14);
    if (*(char *)((int)pvVar52 + 0x60) == '\x05') goto LAB_005447ac;
    FUN_00401080((void *)(unaff_EBP - 0x1424),0,0,1.5 - *(float *)(uVar18 + 0x1180));
    FUN_00402510(unaff_EBP - 0x488);
    puVar23 = FUN_00402cb0((void *)(uVar18 + 0x10),(uint *)(unaff_EBP - 0x1fec),
                           (uint *)(unaff_EBP - 0x488));
    FUN_00402a40((void *)((int)pvVar52 + 0x10),puVar23);
    puVar12 = FUN_00401080((void *)(unaff_EBP - 0x143c),0,0,0);
    FUN_00401060((void *)((int)pvVar52 + 0x34),puVar12);
    pfVar25 = (float *)FUN_00401080((void *)(unaff_EBP - 0x1454),0x41a00000,0,0);
    puVar12 = (undefined4 *)
              FUN_004014f0((void *)(uVar18 + 0x28),(float *)(unaff_EBP - 0x146c),pfVar25);
    FUN_00401060((void *)((int)pvVar52 + 0x28),puVar12);
    puVar12 = FUN_00401080((void *)(unaff_EBP - 0x1484),0,0,0);
    FUN_00401060((void *)((int)pvVar52 + 0x40),puVar12);
    *(float *)((int)pvVar52 + 0x1188) = *(float *)(uVar18 + 0x1188) * 0.5;
    *(undefined4 *)((int)pvVar52 + 0x118c) = *(undefined4 *)(uVar18 + 0x118c);
LAB_00544dc0:
    fVar56 = *(float *)(unaff_EBP - 0x2b88);
  }
  if ((*(char *)((int)pvVar52 + 0xf08) != '\x17') || (*(char *)((int)pvVar52 + 0xf09) != '\0')) {
    *(ushort *)((int)pvVar52 + 0x124) = *(ushort *)((int)pvVar52 + 0x124) & 0xffef;
  }
  if (*(char *)((int)pvVar52 + 0xdf0) != '\x18') {
    *(ushort *)((int)pvVar52 + 0x124) = *(ushort *)((int)pvVar52 + 0x124) & 0xfdff;
  }
  if (1.0 < *(float *)((int)pvVar52 + 0x1188)) {
    *(float *)((int)pvVar52 + 0x1188) = 1.0;
  }
  iVar17 = *(int *)(unaff_EBP - 0x2b24);
  *(undefined4 *)(unaff_EBP - 0x2cc0) = 0;
  FUN_0052e710((float *)((int)pvVar52 + 0x1188),(float *)(unaff_EBP - 0x2cc0),iVar17,0.005);
  pfVar25 = (float *)((int)pvVar52 + 0x1180);
  if (0.0 < *pfVar25 || *pfVar25 == 0.0) {
    *(undefined4 *)(unaff_EBP - 0x2ca0) = 0;
    fVar58 = 0.02;
    pfVar26 = (float *)(unaff_EBP - 0x2ca0);
  }
  else {
    *(undefined4 *)(unaff_EBP - 0x2cbc) = 0;
    fVar58 = 0.01;
    pfVar26 = (float *)(unaff_EBP - 0x2cbc);
  }
  FUN_0052e710(pfVar25,pfVar26,iVar17,fVar58);
  *(undefined4 *)(unaff_EBP - 0x2c18) = 0;
  FUN_0052e710((float *)((int)pvVar52 + 0x1184),(float *)(unaff_EBP - 0x2c18),iVar17,0.0075);
  if ((((*(ushort *)((int)pvVar52 + 0x124) & 1) == 0) || ((*(byte *)((int)pvVar52 + 0x5c) & 4) == 0)
      ) || ((*(ushort *)((int)pvVar52 + 0x124) & 0x10) != 0)) {
    pfVar25 = (float *)((int)pvVar52 + 0x58);
    fVar55 = FUN_00548b20(fVar56 * -0.01);
    iVar17 = *(int *)(unaff_EBP - 0x2b14);
    *(float *)(unaff_EBP - 0x2b30) = (float)fVar55;
    *pfVar25 = *(float *)(unaff_EBP - 0x2b30) * *pfVar25;
    if (((*(byte *)(iVar17 + 0x124) & 4) == 0) || (0 < *(int *)(iVar17 + 300))) {
      if (*(int *)(iVar17 + 0x128) == 0) {
        puVar12 = *(undefined4 **)(unaff_EBP - 0x2b5c);
        pfVar25 = (float *)FUN_004cde20((void *)(unaff_EBP - 0xe58),puVar12);
        fVar55 = FUN_00402180(pfVar25);
        *(float *)(unaff_EBP - 0x2b30) = (float)fVar55;
        if (0.02 < *(float *)(unaff_EBP - 0x2b30)) {
          fVar55 = FUN_004015a0((float *)(iVar17 + 0x34),(float *)(iVar17 + 0x40));
          *(float *)(unaff_EBP - 0x2b30) = (float)fVar55;
          if ((0.0 < *(float *)(unaff_EBP - 0x2b30)) && (*(char *)(unaff_EBP - 0x2b84) == '\0')) {
            FUN_004cde20((void *)(unaff_EBP - 0x124),puVar12);
            FUN_00401f50((float *)(unaff_EBP - 0x124));
            pfVar25 = (float *)FUN_004013d0((void *)(unaff_EBP - 0x124),1);
            if (1.0 < *pfVar25) {
              *pfVar25 = 1.0;
            }
            if (*pfVar25 <= -1.0 && *pfVar25 != -1.0) {
              *pfVar25 = -1.0;
            }
            pfVar26 = (float *)FUN_004013d0((void *)(unaff_EBP - 0x124),0);
            if (*pfVar26 <= 0.0) {
              fVar55 = FUN_00548b00(*pfVar25);
              *(float *)(unaff_EBP - 0x2b30) = (float)fVar55;
              fVar56 = *(float *)(unaff_EBP - 0x2b30);
            }
            else {
              fVar55 = FUN_00548b00(*pfVar25);
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
      puVar12 = (undefined4 *)FUN_0041cba0(iVar17 + 0x138c);
      FUN_004cde20((void *)(unaff_EBP - 0x9c),puVar12);
      fVar55 = FUN_00402180((float *)(unaff_EBP - 0x9c));
      *(float *)(unaff_EBP - 0x2b30) = (float)fVar55;
      if ((0.0 < *(float *)(unaff_EBP - 0x2b30)) && (*(char *)(unaff_EBP - 0x2b84) == '\0')) {
        FUN_00401f50((float *)(unaff_EBP - 0x9c));
        pfVar26 = (float *)FUN_004013d0((void *)(unaff_EBP - 0x9c),1);
        if (1.0 < *pfVar26) {
          *pfVar26 = 1.0;
        }
        if (*pfVar26 <= -1.0 && *pfVar26 != -1.0) {
          *pfVar26 = -1.0;
        }
        pfVar40 = (float *)FUN_004013d0((void *)(unaff_EBP - 0x9c),0);
        fVar56 = 1.0;
        if (*pfVar40 <= 0.0) {
          fVar55 = FUN_00548b00(*pfVar26);
          *(float *)(unaff_EBP - 0x2b30) = (float)fVar55;
          fVar58 = *(float *)(unaff_EBP - 0x2b30);
        }
        else {
          fVar55 = FUN_00548b00(*pfVar26);
          *(float *)(unaff_EBP - 0x2b30) = (float)fVar55;
          fVar58 = -*(float *)(unaff_EBP - 0x2b30);
        }
        pfVar26 = *(float **)(unaff_EBP - 0x2b3c);
        fVar55 = FUN_005306d0(*pfVar26,(fVar58 / 3.1415927) * 180.0,fVar56);
        *(float *)(unaff_EBP - 0x2b30) = (float)fVar55;
        FUN_0052e710(pfVar26,(float *)(unaff_EBP - 0x2b30),*(int *)(unaff_EBP - 0x2b24),0.1);
        iVar17 = *(int *)(unaff_EBP - 0x2b14);
      }
      FUN_00401060((void *)(unaff_EBP - 0x2b4),(undefined4 *)(iVar17 + 0x138c));
      fVar55 = FUN_004021b0((float *)(unaff_EBP - 0x2b4));
      *(float *)(unaff_EBP - 0x2b30) = (float)fVar55;
      if (0.0 < *(float *)(unaff_EBP - 0x2b30)) {
        FUN_00401fb0((float *)(unaff_EBP - 0x2b4));
        fVar56 = 1.0;
        pfVar26 = (float *)FUN_004013d0((void *)(unaff_EBP - 0x2b4),2);
        fVar55 = FUN_00402480(*pfVar26);
        *(float *)(unaff_EBP - 0x2b30) = (float)fVar55;
        fVar55 = FUN_005306d0(*pfVar25,(*(float *)(unaff_EBP - 0x2b30) / 3.1415927) * 180.0,fVar56);
        *(float *)(unaff_EBP - 0x2b30) = (float)fVar55;
        FUN_0052e710(pfVar25,(float *)(unaff_EBP - 0x2b30),*(int *)(unaff_EBP - 0x2b24),0.005);
      }
    }
  }
  else {
    *(undefined4 *)(unaff_EBP - 0x2bcc) = 0x42340000;
    FUN_0052e710((float *)((int)pvVar52 + 0x58),(float *)(unaff_EBP - 0x2bcc),iVar17,0.005);
    FUN_0052ec30((void *)((int)pvVar52 + 0x11a0),(float *)(unaff_EBP - 800));
    FUN_00401fb0((float *)(unaff_EBP - 800));
    pfVar25 = (float *)FUN_004013d0((void *)(unaff_EBP - 800),1);
    if (1.0 < *pfVar25) {
      *pfVar25 = 1.0;
    }
    if (*pfVar25 <= -1.0 && *pfVar25 != -1.0) {
      *pfVar25 = -1.0;
    }
    pfVar26 = (float *)FUN_004013d0((void *)(unaff_EBP - 800),0);
    fVar56 = 1.0;
    if (*pfVar26 <= 0.0) {
      fVar55 = FUN_00548b00(*pfVar25);
      *(float *)(unaff_EBP - 0x2b30) = (float)fVar55;
      fVar58 = *(float *)(unaff_EBP - 0x2b30);
    }
    else {
      fVar55 = FUN_00548b00(*pfVar25);
      *(float *)(unaff_EBP - 0x2b30) = (float)fVar55;
      fVar58 = -*(float *)(unaff_EBP - 0x2b30);
    }
    pfVar25 = *(float **)(unaff_EBP - 0x2b3c);
    fVar55 = FUN_005306d0(*pfVar25,(fVar58 / 3.1415927) * 180.0,fVar56);
    *(float *)(unaff_EBP - 0x2b30) = (float)fVar55;
    FUN_0052e710(pfVar25,(float *)(unaff_EBP - 0x2b30),*(int *)(unaff_EBP - 0x2b24),0.005);
LAB_005453eb:
    iVar17 = *(int *)(unaff_EBP - 0x2b14);
  }
  pvVar52 = *(void **)(unaff_EBP - 0x2b18);
  iVar19 = *(int *)(unaff_EBP - 0x2b24);
  if (((*(int *)((int)pvVar52 + 0xb8) != 0) && (500 < *(int *)(iVar17 + 0x128))) &&
     (*(int *)(iVar17 + 0x128) - iVar19 < 0x1f5)) {
    FUN_004c8530(unaff_EBP - 0x1d4);
    FUN_00402550((void *)(unaff_EBP - 0x1d4),(longlong *)(iVar17 + 0x10));
    iVar19 = *(int *)(unaff_EBP - 0x2b28);
    *(undefined4 *)(unaff_EBP - 0x1c4) = 0x3f800000;
    *(undefined4 *)(unaff_EBP - 0x1c8) = 0x1a;
    FUN_00428590((void *)(iVar19 + 8),(undefined4 *)(unaff_EBP - 0x1d4));
    iVar19 = *(int *)(unaff_EBP - 0x2b24);
  }
  *(undefined4 *)(iVar17 + 0x1318) = *(undefined4 *)(iVar17 + 0x128);
  if (*(int *)(iVar17 + 0x128) != 0) {
    *(int *)(iVar17 + 0x128) = *(int *)(iVar17 + 0x128) - iVar19;
  }
  if (*(int *)(iVar17 + 0x128) < 0) {
    *(undefined4 *)(iVar17 + 0x128) = 0;
  }
  if (*(char *)((int)pvVar52 + 0xb4) == '\0') {
    puVar23 = (uint *)(iVar17 + 0x1d30);
    if (*(int *)(iVar17 + 0x1d30) == 0 && *(int *)(iVar17 + 0x1d34) == 0) {
      pvVar52 = *(void **)(unaff_EBP - 0x2b18);
    }
    else {
      pvVar52 = *(void **)(unaff_EBP - 0x2b18);
      piVar20 = (int *)FUN_00530550((void *)((int)pvVar52 + 0xc),(undefined4 *)(unaff_EBP - 0x3020))
      ;
      pvVar29 = (void *)FUN_00530600((void *)((int)pvVar52 + 0xc),(int *)(unaff_EBP - 0x3030),
                                     puVar23);
      bVar5 = FUN_0042c6f0(pvVar29,piVar20);
      if (bVar5) {
        iVar17 = FUN_004013f0((void *)((int)pvVar52 + 0x1c),0xa03);
        FUN_00401cd0((undefined4 *)(unaff_EBP - 0xf00));
        puVar27 = FUN_00402b10((void *)(*(int *)(unaff_EBP - 0x2b18) + 0xc),puVar23);
        FUN_00402030((void *)(unaff_EBP - 0xf00),*(float *)(*puVar27 + 0x98));
        iVar19 = FUN_00402170(iVar17);
        fVar56 = (float)iVar19 * -0.5;
        iVar19 = FUN_00402160(iVar17);
        fVar58 = (float)iVar19 * -0.5;
        iVar19 = FUN_00402150(iVar17);
        FUN_004023b0((void *)(unaff_EBP - 0xf00),(float)iVar19 * -0.5,fVar58,fVar56);
        *(undefined4 *)(unaff_EBP - 0x2b30) = 0;
        piVar20 = FUN_00431020((void *)(iVar17 + 0x28),(int *)(unaff_EBP - 0x2b30));
        bVar5 = FUN_00530540((int)piVar20);
        if (!bVar5) {
          pfVar25 = (float *)FUN_004013d0(*(void **)(unaff_EBP - 0x2bb0),2);
          FUN_00401080((void *)(unaff_EBP - 0x149c),0,0,*pfVar25 * 0.5 + 0.001);
          FUN_00402510(unaff_EBP - 0x4a0);
          *(undefined4 *)(unaff_EBP - 0x2b30) = 0;
          piVar20 = FUN_00431020((void *)(iVar17 + 0x28),(int *)(unaff_EBP - 0x2b30));
          piVar20 = (int *)FUN_00530680(piVar20);
          FUN_004c64b0((void *)(unaff_EBP - 0x29c),piVar20);
          FUN_004021f0((void *)(unaff_EBP - 0xf00),(float *)(unaff_EBP - 0x10c4),
                       (float *)(unaff_EBP - 0x29c));
          FUN_00402510(unaff_EBP - 0x458);
          puVar45 = FUN_00402b10((void *)(*(int *)(unaff_EBP - 0x2b18) + 0xc),puVar23);
          puVar27 = (uint *)(unaff_EBP - 0x4a0);
          puVar47 = (uint *)(unaff_EBP - 0x198);
          puVar45 = FUN_00402cb0((void *)(*puVar45 + 0x80),(uint *)(unaff_EBP - 0x201c),
                                 (uint *)(unaff_EBP - 0x458));
          FUN_00402cb0(puVar45,puVar47,puVar27);
          pvVar52 = *(void **)(unaff_EBP - 0x2b60);
          puVar27 = FUN_00402c50(pvVar52,(uint *)(unaff_EBP - 0x204c),(uint *)(unaff_EBP - 0x198));
          pfVar25 = FUN_00402550((void *)(unaff_EBP - 0x14b4),(longlong *)puVar27);
          fVar55 = FUN_004021b0(pfVar25);
          *(float *)(unaff_EBP - 0x2b30) = (float)fVar55;
          if (1.0 < *(float *)(unaff_EBP - 0x2b30)) {
            FUN_00402a40(pvVar52,(undefined4 *)(unaff_EBP - 0x198));
          }
        }
        pvVar52 = *(void **)(unaff_EBP - 0x2b18);
        puVar23 = FUN_00402b10((void *)((int)pvVar52 + 0xc),puVar23);
        iVar17 = *(int *)(unaff_EBP - 0x2b14);
        **(undefined4 **)(unaff_EBP - 0x2b3c) = *(undefined4 *)(*puVar23 + 0x98);
      }
      else {
        iVar17 = *(int *)(unaff_EBP - 0x2b14);
      }
    }
  }
  if (*(char *)(iVar17 + 0x60) == '\x05') {
    puVar23 = (uint *)(iVar17 + 0x198);
    uVar18 = FUN_00405420(pvVar52,puVar23);
    if ((uVar18 == 0) || (uVar18 = FUN_00405420(pvVar52,puVar23), *(char *)(uVar18 + 0x68) != 'j'))
    {
      iVar17 = *(int *)(unaff_EBP - 0x2b14);
      goto LAB_00545940;
    }
    uVar18 = FUN_00405420(pvVar52,puVar23);
    pvVar52 = *(void **)(unaff_EBP - 0x2bb0);
    *(uint *)(unaff_EBP - 0x2b20) = uVar18;
    pfVar25 = (float *)FUN_004013d0(pvVar52,2);
    pfVar26 = (float *)FUN_004013d0((void *)(uVar18 + 0x80),2);
    FUN_00401080((void *)(unaff_EBP - 0x14cc),0,0,(*pfVar25 * 0.5 - *pfVar26 * 0.5) + 0.01);
    FUN_00402510(unaff_EBP - 0x368);
    puVar23 = FUN_00402cb0((void *)(*(int *)(unaff_EBP - 0x2b20) + 0x1350),
                           (uint *)(unaff_EBP - 0x207c),(uint *)(unaff_EBP - 0x368));
    FUN_00402a40((void *)(*(int *)(unaff_EBP - 0x2b14) + 0x1350),puVar23);
    FUN_00401060((void *)(*(int *)(unaff_EBP - 0x2b14) + 0x1374),
                 (undefined4 *)(*(int *)(unaff_EBP - 0x2b20) + 0x1374));
    FUN_00401080((void *)(unaff_EBP - 0x14e4),0,0,(*pfVar25 * 0.5 - *pfVar26 * 0.5) + 0.01);
    FUN_00402510(unaff_EBP - 0x344);
    iVar19 = *(int *)(unaff_EBP - 0x2b20);
    puVar23 = FUN_00402cb0((void *)(iVar19 + 0x10),(uint *)(unaff_EBP - 0x20ac),
                           (uint *)(unaff_EBP - 0x344));
    FUN_00402a40(*(void **)(unaff_EBP - 0x2b60),puVar23);
    FUN_00401060(*(void **)(unaff_EBP - 0x2b64),(undefined4 *)(iVar19 + 0x28));
    iVar17 = *(int *)(unaff_EBP - 0x2b14);
    *(undefined4 *)(iVar17 + 0x1180) = *(undefined4 *)(iVar19 + 0x1180);
    *(undefined4 *)(iVar17 + 0x1188) = *(undefined4 *)(iVar19 + 0x1188);
    *(undefined4 *)(iVar17 + 0x118c) = *(undefined4 *)(iVar19 + 0x118c);
    puVar12 = FUN_00401080((void *)(unaff_EBP - 0x14fc),0,0,0);
    FUN_00401060((void *)(iVar17 + 0x34),puVar12);
    puVar12 = FUN_00401080((void *)(unaff_EBP - 0x1514),0,0,0);
    pvVar52 = (void *)(iVar17 + 0x40);
LAB_00545b0e:
    FUN_00401060(pvVar52,puVar12);
  }
  else {
LAB_00545940:
    if (*(int *)(iVar17 + 0x1398) < 1) {
      FUN_00402a40((void *)(iVar17 + 0x1350),(undefined4 *)(iVar17 + 0x10));
      puVar12 = (undefined4 *)(iVar17 + 0x28);
      pvVar52 = (void *)(iVar17 + 0x1374);
      goto LAB_00545b0e;
    }
    uVar18 = *(uint *)(unaff_EBP - 0x2b24);
    iVar19 = 0x3c75c28f;
    *(undefined4 *)(unaff_EBP - 0x2b58) = 0;
    *(undefined4 *)(unaff_EBP - 0x2b8c) = 0x3f800000;
    FUN_0052e710((float *)(unaff_EBP - 0x2b58),(float *)(unaff_EBP - 0x2b8c),uVar18,0.015);
    puVar27 = (uint *)(iVar17 + 0x1350);
    FUN_00402a10((ulonglong *)&stack0xfffffff8);
    puVar12 = (undefined4 *)(unaff_EBP - 0x20dc);
    puVar23 = FUN_00402c50(*(void **)(unaff_EBP - 0x2b60),(uint *)(unaff_EBP - 0x210c),puVar27);
    puVar23 = FUN_00402bd0(puVar23,puVar12,uVar18,iVar19);
    FUN_00402e30(puVar27,puVar23);
    puVar27 = (uint *)FUN_004e2320(puVar27,2);
    puVar38 = (ulonglong *)(unaff_EBP - 0x364c);
    piVar20 = (int *)(unaff_EBP - 0x365c);
    puVar23 = puVar27;
    pvVar52 = (void *)FUN_004e2320(*(void **)(unaff_EBP - 0x2b60),2);
    FUN_00401490(pvVar52,piVar20,puVar23);
    puVar38 = FUN_0052ebb0(puVar38);
    FUN_00402e60(puVar27,(uint *)puVar38);
    pvVar52 = (void *)(*(int *)(unaff_EBP - 0x2b14) + 0x1374);
    pfVar25 = (float *)FUN_004013d0(pvVar52,0);
    fVar56 = *(float *)(unaff_EBP - 0x2b58);
    pfVar26 = (float *)FUN_004013d0(*(void **)(unaff_EBP - 0x2b64),0);
    fVar55 = FUN_005306d0(*pfVar25,*pfVar26,fVar56);
    *pfVar25 = (float)fVar55;
    pfVar25 = (float *)FUN_004013d0(pvVar52,1);
    fVar55 = FUN_005306d0(*pfVar25,**(float **)(unaff_EBP - 0x2b40),*(float *)(unaff_EBP - 0x2b58));
    *pfVar25 = (float)fVar55;
    pfVar25 = (float *)FUN_004013d0(pvVar52,2);
    fVar55 = FUN_005306d0(*pfVar25,**(float **)(unaff_EBP - 0x2b3c),*(float *)(unaff_EBP - 0x2b58));
    *pfVar25 = (float)fVar55;
    iVar17 = *(int *)(unaff_EBP - 0x2b14);
    *(undefined4 *)(iVar17 + 0x1180) = 0;
  }
  iVar19 = *(int *)(unaff_EBP - 0x2b24);
  *(undefined4 *)(unaff_EBP - 0x2b38) = 0;
  *(undefined4 *)(unaff_EBP - 0x2b44) = 0x3f800000;
  FUN_0052e710((float *)(unaff_EBP - 0x2b38),(float *)(unaff_EBP - 0x2b44),iVar19,0.025);
  fVar56 = *(float *)(unaff_EBP - 0x2b38);
  pfVar25 = (float *)(unaff_EBP - 0x152c);
  pfVar40 = (float *)(iVar17 + 0x138c);
  pfVar26 = (float *)(unaff_EBP - 0x1544);
  puVar12 = (undefined4 *)(*(int *)(unaff_EBP - 0x2b14) + 0x160);
  puVar23 = (uint *)0x545b81;
  pvVar52 = (void *)FUN_00401450(puVar12,pfVar26,pfVar40);
  pfVar25 = (float *)FUN_004079f0(pvVar52,pfVar25,fVar56);
  FUN_00401650(pfVar40,pfVar25);
  iVar17 = *(int *)(unaff_EBP - 0x2b14);
  if (((*(char *)(iVar17 + 0x68) == '\0') || (*(int *)(iVar17 + 0x6c) == 0)) ||
     (iVar17 = FUN_004084b0(iVar17), iVar17 < *(int *)(*(int *)(unaff_EBP - 0x2b14) + 0x6c))) {
    FUN_00401060(pfVar40,puVar12);
  }
  FUN_00423710((int *)(unaff_EBP - 0x2ccc));
  FUN_00423710((int *)(unaff_EBP - 0x2cdc));
  *(undefined1 *)(unaff_EBP - 4) = 5;
  FUN_00423710((int *)(unaff_EBP - 0x2bf8));
LAB_00545be1:
  FUN_00407a30((void *)(unaff_EBP - 0x2b68),(int *)(unaff_EBP - 0x2bc0));
  piVar20 = (int *)FUN_00530550(*(void **)(unaff_EBP - 0x2b6c),(undefined4 *)(unaff_EBP - 0x2d34));
  bVar5 = FUN_0042c6f0((void *)(unaff_EBP - 0x2b68),piVar20);
  pvVar52 = *(void **)(unaff_EBP - 0x2b18);
  if (bVar5) {
    iVar17 = FUN_00402bc0((int *)(unaff_EBP - 0x2b68));
    iVar17 = *(int *)(iVar17 + 8);
    *(int *)(unaff_EBP - 0x2b14) = iVar17;
    if (iVar17 == 0) goto LAB_00545be1;
    piVar20 = (int *)(iVar17 + 0x130c);
    FUN_00428070(piVar20,(undefined4 *)(unaff_EBP - 0x2c58));
    piVar53 = (int *)FUN_00530550(piVar20,(undefined4 *)(unaff_EBP - 0x2de8));
    bVar5 = FUN_0042c6f0((void *)(unaff_EBP - 0x2c58),piVar53);
    if (bVar5) {
      do {
        puVar27 = (uint *)FUN_0052eb90((int *)(unaff_EBP - 0x2c58));
        *(uint **)(unaff_EBP - 0x2b1c) = puVar27;
        switch((char)puVar27[0x4a]) {
        case '\x01':
          if (*(char *)((int)pvVar52 + 0xb4) == '\0') {
            if (((char)*puVar27 == '\x01') && (*(char *)((int)puVar27 + 1) == '\a')) {
              pvVar52 = *(void **)(unaff_EBP - 0x2b6c);
              *(undefined8 *)(unaff_EBP - 0x2c28) = 0;
              FUN_00428070(pvVar52,(undefined4 *)(unaff_EBP - 0x2c64));
              piVar20 = (int *)FUN_00530550(*(void **)(unaff_EBP - 0x2b6c),
                                            (undefined4 *)(unaff_EBP - 0x2d78));
              bVar5 = FUN_0042c6f0((void *)(unaff_EBP - 0x2c64),piVar20);
              uVar18 = *(uint *)(unaff_EBP - 0x2c24);
              uVar54 = *(uint *)(unaff_EBP - 0x2c28);
              if (bVar5) {
                do {
                  puVar27 = (uint *)FUN_00402bc0((int *)(unaff_EBP - 0x2c64));
                  if (puVar27[2] != 0) {
                    uVar49 = *puVar27;
                    uVar62 = puVar27[1];
                    if (((int)uVar62 <= (int)uVar18) &&
                       (((int)uVar62 < (int)uVar18 || (uVar49 < uVar54)))) {
                      *(uint *)(unaff_EBP - 0x2c28) = uVar49;
                      *(uint *)(unaff_EBP - 0x2c24) = uVar62;
                      uVar54 = uVar49;
                      uVar18 = uVar62;
                    }
                  }
                  FUN_00407a30((void *)(unaff_EBP - 0x2c64),(int *)(unaff_EBP - 0x3078));
                  piVar20 = (int *)FUN_00530550(*(void **)(unaff_EBP - 0x2b6c),
                                                (undefined4 *)(unaff_EBP - 0x2d78));
                  bVar5 = FUN_0042c6f0((void *)(unaff_EBP - 0x2c64),piVar20);
                } while (bVar5);
              }
              *(uint *)(unaff_EBP - 0x2c28) = uVar54 - 1;
              *(uint *)(unaff_EBP - 0x2c24) = (uVar18 - 1) + (uint)(uVar54 != 0);
              pCVar8 = operator_new(0x1e60);
              *(Creature **)(unaff_EBP - 0x2b30) = pCVar8;
              *(undefined1 *)(unaff_EBP - 4) = 0x10;
              if (pCVar8 == (Creature *)0x0) {
                pCVar8 = (Creature *)0x0;
              }
              else {
                pCVar8 = cube::Creature::Creature(pCVar8,(undefined4 *)(unaff_EBP - 0x2c28));
              }
              pvVar52 = *(void **)(unaff_EBP - 0x2b6c);
              *(undefined1 *)(unaff_EBP - 4) = 5;
              puVar27 = FUN_00402b10(pvVar52,(uint *)(unaff_EBP - 0x2c28));
              *puVar27 = (uint)pCVar8;
              FUN_00402a40(&(pCVar8->Creature_data).offset_0xc,
                           (undefined4 *)(*(int *)(unaff_EBP - 0x2b14) + 0x10));
              pCVar8[0x14].vftablePtr =
                   (Creature_vftable *)(int)*(short *)(*(int *)(unaff_EBP - 0x2b1c) + 0x10);
              pCVar8[5].vftablePtr = (Creature_vftable *)0x90;
              *(undefined1 *)&pCVar8[4].Creature_data.offset_0xc = 6;
              pfVar26 = (float *)0x536fca;
              FUN_0040a840((uint *)(pCVar8 + 5),(int)(pCVar8 + 6),(undefined4 *)0x0);
            }
            else {
              fVar55 = FUN_00413be0((char *)puVar27);
              *(float *)(unaff_EBP - 0x2b40) = (float)fVar55;
              *(float *)(*(int *)(unaff_EBP - 0x2b14) + 0x16c) =
                   *(float *)(unaff_EBP - 0x2b40) + *(float *)(*(int *)(unaff_EBP - 0x2b14) + 0x16c)
              ;
              FUN_004c8530(unaff_EBP - 0x878);
              plVar30 = (longlong *)(*(int *)(unaff_EBP - 0x2b14) + 0x10);
              FUN_00402550((void *)(unaff_EBP - 0x878),plVar30);
              pvVar52 = *(void **)(unaff_EBP - 0x2b28);
              *(undefined4 *)(unaff_EBP - 0x868) = 0x3f800000;
              *(undefined4 *)(unaff_EBP - 0x86c) = 0x2c;
              FUN_00428590((void *)((int)pvVar52 + 8),(undefined4 *)(unaff_EBP - 0x878));
              FUN_00422a90(unaff_EBP - 0xf48);
              FUN_00402a40((void *)(unaff_EBP - 0xf28),(undefined4 *)plVar30);
              *(undefined4 *)(unaff_EBP - 0xf40) = *(undefined4 *)(*(int *)(unaff_EBP - 0x2b14) + 8)
              ;
              iVar17 = *(int *)(unaff_EBP - 0x2b14);
              *(undefined8 *)(unaff_EBP - 0xf48) = 0;
              uVar18 = *(uint *)(unaff_EBP - 0x2b40);
              *(undefined4 *)(unaff_EBP - 0xf3c) = *(undefined4 *)(iVar17 + 0xc);
              *(uint *)(unaff_EBP - 0xf38) = uVar18 ^ 0x80000000;
              *(undefined1 *)(unaff_EBP - 0xf34) = 0;
              FUN_00428400(pvVar52,(undefined4 *)(unaff_EBP - 0xf48));
            }
            goto LAB_005377fe;
          }
          break;
        case '\x02':
          if (*(char *)((int)pvVar52 + 0xb4) == '\0') {
            FUN_00428070((void *)((int)pvVar52 + 4),(undefined4 *)(unaff_EBP - 0x2c54));
            piVar20 = (int *)FUN_00530550((void *)((int)pvVar52 + 4),
                                          (undefined4 *)(unaff_EBP - 0x2d70));
            bVar5 = FUN_0042c6f0((void *)(unaff_EBP - 0x2c54),piVar20);
            if (bVar5) {
              do {
                iVar17 = FUN_00402bc0((int *)(unaff_EBP - 0x2c54));
                iVar17 = *(int *)(iVar17 + 8);
                if ((iVar17 != 0) &&
                   (iVar19 = FUN_004137c0((void *)(iVar17 + 0x1b0),(int)(puVar27 + 0x46)),
                   (char)iVar19 != '\0')) {
                  if ((*(char *)(iVar17 + 0x140) == -0x7c) &&
                     ((iVar19 = *(int *)(*(int *)(unaff_EBP - 0x2b18) + 0x80015c), 64799999 < iVar19
                      || (iVar19 < 0x1499701)))) {
                    pvVar52 = *(void **)(unaff_EBP - 0x2b18);
                    *(int *)((int)pvVar52 + 0x800160) = *(int *)((int)pvVar52 + 0x800160) + 1;
                    *(undefined4 *)((int)pvVar52 + 0x80015c) = 25200000;
                    FUN_004c8530(unaff_EBP - 0x770);
                    iVar17 = *(int *)(unaff_EBP - 0x2b14);
                    *(undefined4 *)(unaff_EBP - 0x764) = 0x1d;
                    FUN_00402550((void *)(unaff_EBP - 0x770),(longlong *)(iVar17 + 0x10));
                    iVar17 = *(int *)(unaff_EBP - 0x2b28);
                    *(undefined4 *)(unaff_EBP - 0x75c) = 0x3f400000;
                    FUN_00428590((void *)(iVar17 + 8),(undefined4 *)(unaff_EBP - 0x770));
                    FUN_004d7ae0();
                    FUN_00524500((int)pvVar52);
                    goto LAB_00537804;
                  }
                  if ((*(byte *)(iVar17 + 0x7e) & 0x80) != 0) break;
                }
                FUN_00407a30((void *)(unaff_EBP - 0x2c54),(int *)(unaff_EBP - 0x3050));
                piVar20 = (int *)FUN_00530550(*(void **)(unaff_EBP - 0x2b6c),
                                              (undefined4 *)(unaff_EBP - 0x2d70));
                bVar5 = FUN_0042c6f0((void *)(unaff_EBP - 0x2c54),piVar20);
              } while (bVar5);
              goto LAB_005377fe;
            }
          }
          break;
        case '\x03':
          iVar17 = *(int *)(unaff_EBP - 0x2b14);
          if (*(char *)(iVar17 + 0x68) == 'O') {
            *(undefined1 *)(iVar17 + 0x68) = 0;
            *(undefined4 *)(iVar17 + 0x1190) = 0;
          }
          puVar27 = puVar27 + 0x46;
          *(uint **)(unaff_EBP - 0x2b20) = puVar27;
          puVar47 = (uint *)FUN_004013d0(puVar27,1);
          uVar18 = *puVar47;
          puVar47 = (uint *)FUN_004013d0(puVar27,0);
          iVar17 = FUN_00406290(*(void **)(unaff_EBP - 0x2b18),*puVar47,uVar18);
          if (iVar17 == 0) {
LAB_005377fe:
            pvVar52 = *(void **)(unaff_EBP - 0x2b18);
            break;
          }
          piVar20 = (int *)FUN_004013d0(puVar27,2);
          iVar19 = *piVar20;
          if (iVar19 < 0) goto LAB_005377fe;
          piVar20 = (int *)(iVar17 + 0xc);
          *(int **)(unaff_EBP - 0x2b64) = piVar20;
          iVar17 = FUN_0041cb40(piVar20);
          if (iVar17 <= iVar19) goto LAB_005377fe;
          piVar20 = (int *)FUN_0041ba70(piVar20,iVar19);
          *(int **)(unaff_EBP - 0x2b5c) = piVar20;
          iVar17 = *piVar20;
          if (iVar17 == 0x2d) {
            pvVar52 = *(void **)(unaff_EBP - 0x2b18);
            if (*(int *)(unaff_EBP - 0x2b14) == *(int *)((int)pvVar52 + 0xb8)) {
              puVar27 = (uint *)(*(int *)(unaff_EBP - 0x2b14) + 0x10);
              FUN_004d9410(*(void **)(unaff_EBP - 0x2b18),(int *)(unaff_EBP - 0x4c0),puVar27);
              puVar47 = (uint *)FUN_004013d0((void *)(unaff_EBP - 0x4c0),1);
              uVar18 = *puVar47;
              puVar47 = (uint *)FUN_004013d0((void *)(unaff_EBP - 0x4c0),0);
              iVar17 = FUN_00406290(*(void **)(unaff_EBP - 0x2b18),*puVar47,uVar18);
              *(int *)(unaff_EBP - 0x2b1c) = iVar17;
              if (((iVar17 != 0) && (iVar19 = piVar20[0x5e], -1 < iVar19)) &&
                 (iVar17 = FUN_0041cb40((int *)(iVar17 + 0xc)), iVar19 < iVar17)) {
                FUN_004c8530(unaff_EBP - 0x638);
                *(undefined4 *)(unaff_EBP - 0x62c) = 0x2f;
                *(undefined4 *)(unaff_EBP - 0x628) = 0x3f800000;
                FUN_00402550((void *)(unaff_EBP - 0x638),(longlong *)puVar27);
                puVar12 = (undefined4 *)(unaff_EBP - 0x638);
                uVar63 = 0x536868;
                FUN_00428590((void *)(*(int *)(unaff_EBP - 0x2b28) + 8),puVar12);
                uVar66 = 0;
                uVar64 = 0x536874;
                FUN_004cde40(&stack0xfffffff8,0);
                uVar24 = 0x536880;
                puVar23 = (uint *)0x0;
                FUN_004cde40(&stack0xfffffff0,0);
                FUN_004cde40(&stack0xffffffe8,2);
                puVar45 = FUN_00406380((void *)(unaff_EBP - 0x1f14),uVar24,puVar23,uVar64,uVar66,
                                       uVar63,puVar12);
                puVar47 = (uint *)(unaff_EBP - 0x2304);
                pfVar26 = (float *)0x5368b9;
                iVar17 = FUN_0041ba70((void *)(*(int *)(unaff_EBP - 0x2b1c) + 0xc),
                                      *(int *)(*(int *)(unaff_EBP - 0x2b5c) + 0x178));
                puVar47 = FUN_00402cb0((void *)(iVar17 + 8),puVar47,puVar45);
                FUN_00402a40(puVar27,puVar47);
              }
              goto LAB_005377fe;
            }
            break;
          }
          if ((((((iVar17 != 0x10) && (iVar17 != 0x12)) && (iVar17 != 0x13)) &&
               ((iVar17 != 0x45 && (iVar17 != 0x44)))) || (piVar20[0x10] != 0 || piVar20[0x11] != 0)
              ) || (((cVar3 = *(char *)(*(int *)(unaff_EBP - 0x2b14) + 0x68), cVar3 != '\0' &&
                     (cVar3 != 'S')) && (cVar3 != 'T')))) {
            pvVar52 = *(void **)(unaff_EBP - 0x2b18);
            if (*(char *)((int)pvVar52 + 0xb4) == '\0') {
              if ((iVar17 == 10) && ((char)piVar20[0xc] == '\x02')) {
                piVar20 = (int *)(*(int *)(unaff_EBP - 0x2b5c) + 0x48);
                iVar17 = 0;
                *(undefined4 *)(unaff_EBP - 0x2b40) = 0;
                iVar19 = FUN_00420020(piVar20);
                if (0 < iVar19) {
                  do {
                    puVar12 = (undefined4 *)(unaff_EBP - 0x2c5c);
                    pvVar52 = (void *)FUN_0041e2e0(piVar20,iVar17);
                    FUN_00530550(pvVar52,puVar12);
                    puVar12 = (undefined4 *)(unaff_EBP - 0x2e38);
                    pvVar52 = (void *)FUN_0041e2e0(piVar20,iVar17);
                    piVar53 = (int *)FUN_004d3de0(pvVar52,puVar12);
                    bVar5 = FUN_0042c6f0((void *)(unaff_EBP - 0x2c5c),piVar53);
                    if (bVar5) {
                      do {
                        piVar20 = (int *)FUN_004ce1f0((undefined4 *)(unaff_EBP - 0x2c5c));
                        if (*piVar20 != 0) {
                          iVar17 = *(int *)(unaff_EBP - 0x2b5c);
                          do {
                            uVar24 = 0;
                            iVar19 = rand();
                            fVar56 = 2.0 - ((float)iVar19 * 4.0) / 32767.0;
                            iVar19 = rand();
                            FUN_00401080((void *)(unaff_EBP - 0x1250),
                                         2.0 - ((float)iVar19 * 4.0) / 32767.0,fVar56,uVar24);
                            FUN_00402510(unaff_EBP - 0x1808);
                            pvVar52 = (void *)(unaff_EBP - 0x2be8);
                            fVar58 = 1.0;
                            iVar19 = rand();
                            fVar56 = ((float)iVar19 * 360.0) / 32767.0;
                            pfVar26 = (float *)FUN_00402cb0((void *)(iVar17 + 8),
                                                            (uint *)(unaff_EBP - 0x1f74),
                                                            (uint *)(unaff_EBP - 0x1808));
                            puVar23 = (uint *)(piVar20 + 1);
                            FUN_004d2810((undefined1 *)puVar23,(uint *)pfVar26,fVar56,fVar58,pvVar52
                                        );
                            FUN_00405550(piVar20);
                          } while (*piVar20 != 0);
                          iVar17 = *(int *)(unaff_EBP - 0x2b40);
                        }
                        FUN_00402c10((void *)(unaff_EBP - 0x2c5c),(int *)(unaff_EBP - 0x2b30));
                        puVar12 = (undefined4 *)(unaff_EBP - 0x2e38);
                        piVar20 = (int *)(*(int *)(unaff_EBP - 0x2b5c) + 0x48);
                        pvVar52 = (void *)FUN_0041e2e0(piVar20,iVar17);
                        piVar53 = (int *)FUN_004d3de0(pvVar52,puVar12);
                        bVar5 = FUN_0042c6f0((void *)(unaff_EBP - 0x2c5c),piVar53);
                      } while (bVar5);
                    }
                    iVar17 = iVar17 + 1;
                    *(int *)(unaff_EBP - 0x2b40) = iVar17;
                    iVar19 = FUN_00420020(piVar20);
                  } while (iVar17 < iVar19);
                }
                pvVar52 = *(void **)(unaff_EBP - 0x2b18);
                piVar20 = *(int **)(unaff_EBP - 0x2b5c);
              }
              iVar17 = *piVar20;
              if ((((iVar17 == 9) || (iVar17 == 1)) || (iVar17 == 2)) ||
                 ((iVar17 == 3 || (iVar17 == 10)))) {
                pfVar26 = (float *)0x536dc8;
                FUN_004d8c90(piVar20,*(int *)(unaff_EBP - 0x2b28),(char)piVar20[0xc] == '\0');
                puVar12 = FUN_00422d70((void *)(unaff_EBP - 0x295c),
                                       *(undefined4 **)(unaff_EBP - 0x2b20),piVar20);
                FUN_004284f0((void *)(*(int *)(unaff_EBP - 0x2b28) + 0x30),puVar12);
              }
              if (*piVar20 == 9) {
                iVar17 = piVar20[0x5e];
                if ((iVar17 < 0) ||
                   (iVar19 = FUN_0041cb40(*(int **)(unaff_EBP - 0x2b64)), iVar19 <= iVar17))
                goto LAB_005377fe;
                uVar60 = (ulonglong)
                         CONCAT14((char)piVar20[0xc] != '\0',*(undefined4 *)(unaff_EBP - 0x2b28));
                piVar53 = (int *)FUN_0041ba70(*(void **)(unaff_EBP - 0x2b64),iVar17);
                pvVar52 = *(void **)(unaff_EBP - 0x2b18);
                pfVar26 = (float *)0x536e3e;
                FUN_004d8c90(piVar53,(int)uVar60,(char)(uVar60 >> 0x20));
                puVar12 = FUN_00422d70((void *)(unaff_EBP - 0x2854),
                                       *(undefined4 **)(unaff_EBP - 0x2b20),piVar20);
                FUN_004284f0((void *)(*(int *)(unaff_EBP - 0x2b28) + 0x30),puVar12);
              }
            }
            break;
          }
          pvVar52 = *(void **)(unaff_EBP - 0x2b18);
          if (*(char *)((int)pvVar52 + 0xb4) == '\0') {
            piVar20[0x10] = *(int *)(*(int *)(unaff_EBP - 0x2b14) + 8);
            piVar20[0x11] = *(int *)(*(int *)(unaff_EBP - 0x2b14) + 0xc);
            switch(iVar17) {
            case 0x10:
            case 0x12:
              pfVar25 = (float *)FUN_004013d0((void *)(*(int *)(unaff_EBP - 0x2b14) + 0x80),2);
              *(float *)(unaff_EBP - 0x2b1c) = *pfVar25 * 0.5;
              pfVar25 = (float *)FUN_004013d0(piVar20 + 9,2);
              FUN_00401080((void *)(unaff_EBP - 0x19a0),0,0,
                           *(float *)(unaff_EBP - 0x2b1c) + *pfVar25);
              FUN_00402510(unaff_EBP - 0x17c0);
              puVar27 = FUN_00402cb0(piVar20 + 2,(uint *)(unaff_EBP - 0x1f44),
                                     (uint *)(unaff_EBP - 0x17c0));
              FUN_00402a40((void *)(*(int *)(unaff_EBP - 0x2b14) + 0x10),puVar27);
              puVar12 = FUN_00401080((void *)(unaff_EBP - 0x1220),0,0,0);
              FUN_00401060((void *)(*(int *)(unaff_EBP - 0x2b14) + 0x34),puVar12);
              iVar17 = piVar20[8];
              pfVar25 = (float *)FUN_004013d0((void *)(*(int *)(unaff_EBP - 0x2b14) + 0x28),2);
              *pfVar25 = (float)((iVar17 + 2) * 0x5a);
              *(undefined1 *)(*(int *)(unaff_EBP - 0x2b14) + 0x68) = 0x53;
              break;
            default:
              goto switchD_0053694e_caseD_11;
            case 0x13:
            case 0x44:
            case 0x45:
              pfVar25 = (float *)FUN_004013d0((void *)(*(int *)(unaff_EBP - 0x2b14) + 0x80),2);
              *(float *)(unaff_EBP - 0x2b1c) = *pfVar25 * 0.5;
              pfVar25 = (float *)FUN_004013d0(piVar20 + 9,2);
              FUN_00401080((void *)(unaff_EBP - 0x1610),0,0,
                           *(float *)(unaff_EBP - 0x2b1c) + *pfVar25);
              FUN_00402510(unaff_EBP - 0x17e4);
              puVar27 = FUN_00402cb0(piVar20 + 2,(uint *)(unaff_EBP - 0x2664),
                                     (uint *)(unaff_EBP - 0x17e4));
              FUN_00402a40((void *)(*(int *)(unaff_EBP - 0x2b14) + 0x10),puVar27);
              puVar12 = FUN_00401080((void *)(unaff_EBP - 0x1238),0,0,0);
              FUN_00401060((void *)(*(int *)(unaff_EBP - 0x2b14) + 0x34),puVar12);
              iVar17 = piVar20[8];
              pfVar25 = (float *)FUN_004013d0((void *)(*(int *)(unaff_EBP - 0x2b14) + 0x28),2);
              *pfVar25 = (float)(iVar17 * 0x5a);
              *(undefined1 *)(*(int *)(unaff_EBP - 0x2b14) + 0x68) = 0x54;
            }
            pvVar52 = *(void **)(unaff_EBP - 0x2b18);
switchD_0053694e_caseD_11:
            puVar12 = FUN_00422d70((void *)(unaff_EBP - 0x28ac),*(undefined4 **)(unaff_EBP - 0x2b20)
                                   ,piVar20);
            FUN_004284f0((void *)(*(int *)(unaff_EBP - 0x2b28) + 0x30),puVar12);
          }
          pfVar26 = (float *)0x536b89;
          puVar12 = FUN_00401080((void *)(unaff_EBP - 0x1838),0,0,0);
          FUN_00401060((void *)(*(int *)(unaff_EBP - 0x2b14) + 0x40),puVar12);
          break;
        case '\x05':
          if (*(char *)((int)pvVar52 + 0xb4) == '\0') {
            puVar27 = puVar27 + 0x46;
            puVar47 = (uint *)FUN_004013d0(puVar27,1);
            uVar18 = *puVar47;
            puVar47 = (uint *)FUN_004013d0(puVar27,0);
            iVar17 = FUN_00406290(*(void **)(unaff_EBP - 0x2b18),*puVar47,uVar18);
            *(int *)(unaff_EBP - 0x2b48) = iVar17;
            if (iVar17 != 0) {
              piVar20 = (int *)FUN_004013d0(puVar27,2);
              iVar19 = *piVar20;
              *(int **)(unaff_EBP - 0x2b90) = piVar20;
              if (-1 < iVar19) {
                piVar20 = (int *)(iVar17 + 0x30);
                iVar17 = FUN_00420000(piVar20);
                if (iVar19 < iVar17) {
                  pcVar21 = (char *)FUN_004ce1d0(piVar20,iVar19);
                  bVar5 = FUN_00409660(*(void **)(unaff_EBP - 0x2b14),pcVar21);
                  if (bVar5) {
                    puVar27 = FUN_00402c50(pcVar21 + 0x118,(uint *)(unaff_EBP - 0x24e4),
                                           (uint *)(*(int *)(unaff_EBP - 0x2b14) + 0x10));
                    pfVar25 = FUN_00402550((void *)(unaff_EBP - 0x1208),(longlong *)puVar27);
                    fVar55 = FUN_004021b0(pfVar25);
                    *(float *)(unaff_EBP - 0x2b1c) = (float)fVar55;
                    if (*(float *)(unaff_EBP - 0x2b1c) <= 16.0) {
                      FUN_004d4f60((void *)(unaff_EBP - 0x2be8),(undefined4 *)(unaff_EBP - 0x338c),
                                   (uint *)(unaff_EBP - 0x2b48));
                      FUN_004c83d0(unaff_EBP - 0x27fc);
                      iVar17 = *(int *)(unaff_EBP - 0x2b14);
                      *(undefined4 *)(unaff_EBP - 0x27fc) = *(undefined4 *)(iVar17 + 8);
                      *(undefined4 *)(unaff_EBP - 0x27f8) = *(undefined4 *)(iVar17 + 0xc);
                      FUN_00402a70((void *)(unaff_EBP - 0x27f4),pcVar21);
                      FUN_004d65d0((void *)(*(int *)(unaff_EBP - 0x2b28) + 0x40),
                                   (undefined4 *)(unaff_EBP - 0x27fc));
                      if ((*(int *)(unaff_EBP - 0x2b14) ==
                           *(int *)(*(int *)(unaff_EBP - 0x2b18) + 0xb8)) && (*pcVar21 != '\x19')) {
                        FUN_00427000((void *)(*(int *)(unaff_EBP - 0x2b14) + 0x11dc),pcVar21,-1);
                      }
                      FUN_004c8530(unaff_EBP - 0x6b0);
                      *(undefined4 *)(unaff_EBP - 0x6a4) = 0x2d;
                      iVar19 = rand();
                      iVar17 = *(int *)(unaff_EBP - 0x2b14);
                      *(float *)(unaff_EBP - 0x6a0) = ((float)iVar19 * 0.1) / 32767.0 + 1.0;
                      FUN_00402550((void *)(unaff_EBP - 0x6b0),(longlong *)(iVar17 + 0x10));
                      FUN_00428590((void *)(*(int *)(unaff_EBP - 0x2b28) + 8),
                                   (undefined4 *)(unaff_EBP - 0x6b0));
                      iVar17 = **(int **)(unaff_EBP - 0x2b90);
                      piVar53 = (int *)(unaff_EBP - 0x3058);
                      pfVar26 = (float *)0x5366ee;
                      pvVar52 = (void *)FUN_00530550(piVar20,(undefined4 *)(unaff_EBP - 0x2fa4));
                      puVar12 = (undefined4 *)FUN_004ce250(pvVar52,piVar53,iVar17);
                      FUN_004d4430(piVar20,(undefined4 *)(unaff_EBP - 0x2fc4),(void *)*puVar12);
                    }
                  }
                }
              }
            }
            goto LAB_005377fe;
          }
          break;
        case '\x06':
          if (*(char *)((int)pvVar52 + 0xb4) == '\0') {
            pfVar25 = (float *)(*(int *)(unaff_EBP - 0x2b14) + 0x10);
            pfVar26 = pfVar25;
            puVar23 = puVar27;
            FUN_004d2810((undefined1 *)puVar27,(uint *)pfVar25,0.0,1.0,(void *)(unaff_EBP - 0x2be8))
            ;
            FUN_004c8530(unaff_EBP - 0x9e0);
            *(undefined4 *)(unaff_EBP - 0x9d4) = 0x39;
            FUN_00402550((void *)(unaff_EBP - 0x9e0),(longlong *)pfVar25);
            FUN_00428590((void *)(*(int *)(unaff_EBP - 0x2b28) + 8),
                         (undefined4 *)(unaff_EBP - 0x9e0));
            goto LAB_005377fe;
          }
          break;
        case '\a':
          pvVar52 = *(void **)(unaff_EBP - 0x2b18);
          if (*(char *)((int)pvVar52 + 0xb4) == '\0') {
            iVar17 = FUN_004d1860(pvVar52,(undefined4 *)
                                          (int)*(char *)(*(int *)(unaff_EBP - 0x2b14) + 0x18d));
            *(int *)(unaff_EBP - 0x2b50) = iVar17;
            if (iVar17 != 0) {
              FUN_00401080((void *)(unaff_EBP - 0x1628),0x3f000000,0x3f000000,0x3f000000);
              FUN_00402510(unaff_EBP - 0x182c);
              FUN_00402510(unaff_EBP - 0x1850);
              puVar23 = (uint *)(unaff_EBP - 0x182c);
              puVar27 = (uint *)(unaff_EBP - 0x2334);
              puVar47 = FUN_00402cb0((void *)(*(int *)(unaff_EBP - 0x2b14) + 0x10),
                                     (uint *)(unaff_EBP - 0x1fa4),(uint *)(unaff_EBP - 0x1850));
              puVar23 = FUN_00402cb0(puVar47,puVar27,puVar23);
              FUN_004c64f0((void *)(unaff_EBP - 100),puVar23);
              puVar12 = (undefined4 *)
                        FUN_004d8e10((undefined4 *)(unaff_EBP - 0x1268),
                                     (undefined4 *)(unaff_EBP - 100));
              FUN_00401060((void *)(unaff_EBP - 100),puVar12);
              FUN_00401cd0((undefined4 *)(unaff_EBP - 0x1b6c));
              FUN_00402030((void *)(unaff_EBP - 0x1b6c),
                           (float)(int)*(char *)(*(int *)(unaff_EBP - 0x2b14) + 0x18c) * 90.0);
              fVar58 = 0.0;
              iVar19 = FUN_00402160(iVar17);
              fVar56 = (float)iVar19 * -0.5;
              iVar19 = FUN_00402150(iVar17);
              FUN_004023b0((void *)(unaff_EBP - 0x1b6c),(float)iVar19 * -0.5,fVar56,fVar58);
              FUN_004d3e00((int)pvVar52);
              iVar19 = 0;
              *(undefined4 *)(unaff_EBP - 0x2b3c) = 0;
              iVar39 = FUN_00402150(iVar17);
              if (0 < iVar39) {
                do {
                  *(undefined4 *)(unaff_EBP - 0x2b5c) = 0;
                  iVar39 = FUN_00402160(iVar17);
                  if (0 < iVar39) {
                    do {
                      iVar19 = FUN_00402170(iVar17);
                      iVar17 = *(int *)(unaff_EBP - 0x2b50);
                      *(undefined4 *)(unaff_EBP - 0x2b20) = 0;
                      iVar39 = 0;
                      iVar17 = FUN_00402170(iVar17);
                      if (0 < iVar17) {
                        do {
                          puVar43 = &DAT_00583dfc;
                          puVar42 = FUN_00430730(*(void **)(unaff_EBP - 0x2b50),
                                                 *(int *)(unaff_EBP - 0x2b3c),
                                                 *(int *)(unaff_EBP - 0x2b5c),iVar39);
                          cVar3 = FUN_004079c0(puVar42,(int)puVar43);
                          if (cVar3 != '\0') {
                            if (iVar39 < iVar19) {
                              iVar19 = iVar39;
                            }
                            iVar17 = *(int *)(unaff_EBP - 0x2b20);
                            if (*(int *)(unaff_EBP - 0x2b20) < iVar39) {
                              iVar17 = iVar39;
                            }
                            *(int *)(unaff_EBP - 0x2b20) = iVar17;
                          }
                          iVar39 = iVar39 + 1;
                          iVar17 = FUN_00402170(*(int *)(unaff_EBP - 0x2b50));
                        } while (iVar39 < iVar17);
                      }
                      iVar39 = 0;
                      iVar17 = FUN_00402170(*(int *)(unaff_EBP - 0x2b50));
                      if (0 < iVar17) {
                        do {
                          puVar42 = FUN_00430730(*(void **)(unaff_EBP - 0x2b50),
                                                 *(int *)(unaff_EBP - 0x2b3c),
                                                 *(int *)(unaff_EBP - 0x2b5c),iVar39);
                          FUN_00401020((void *)(unaff_EBP - 0x2c0c),puVar42);
                          pfVar26 = (float *)FUN_00401080((void *)(unaff_EBP - 0x1ac0),0x3f000000,
                                                          0x3f000000,0x3f000000);
                          pfVar25 = (float *)(unaff_EBP - 0x1280);
                          puVar12 = FUN_00401080((void *)(unaff_EBP - 0x1640),
                                                 (float)*(int *)(unaff_EBP - 0x2b3c),
                                                 (float)*(int *)(unaff_EBP - 0x2b5c),(float)iVar39);
                          pfVar25 = (float *)FUN_004014f0(puVar12,pfVar25,pfVar26);
                          FUN_004021f0((void *)(unaff_EBP - 0x1b6c),(float *)(unaff_EBP - 0x1298),
                                       pfVar25);
                          FUN_00402510(unaff_EBP - 0x1874);
                          puVar23 = (uint *)(unaff_EBP - 0x1874);
                          puVar27 = (uint *)(unaff_EBP - 0x2514);
                          piVar20 = FUN_004d99d0((void *)(unaff_EBP - 0x1fd4),
                                                 (uint *)(unaff_EBP - 100));
                          puVar23 = FUN_00402cb0(piVar20,puVar27,puVar23);
                          FUN_004c64f0((void *)(unaff_EBP - 200),puVar23);
                          cVar3 = FUN_0042edb0((void *)(unaff_EBP - 0x2c0c),0x583dfc);
                          if (cVar3 == '\0') {
                            iVar17 = FUN_004013d0((void *)(unaff_EBP - 200),2);
                            *(int *)(unaff_EBP - 0x2b64) = iVar17;
                            iVar17 = FUN_004013d0((void *)(unaff_EBP - 200),1);
                            *(int *)(unaff_EBP - 0x2b54) = iVar17;
                            puVar27 = (uint *)FUN_004013d0((void *)(unaff_EBP - 200),0);
                            iVar17 = **(int **)(unaff_EBP - 0x2b64);
                            puVar23 = *(uint **)(unaff_EBP - 0x2b54);
                            *(uint **)(unaff_EBP - 0x2b40) = puVar27;
                            puVar35 = FUN_00405fd0(*(void **)(unaff_EBP - 0x2b18),*puVar27,*puVar23,
                                                   iVar17,0);
                            if ((puVar35[3] & 0x40) == 0) {
                              iVar17 = 0;
                              puVar42 = FUN_00401370((void *)(unaff_EBP - 0x2fa8),
                                                     (undefined1 *)(unaff_EBP - 0x2c0c),0x46);
                              FUN_0041ff00(*(void **)(unaff_EBP - 0x2b18),
                                           **(float **)(unaff_EBP - 0x2b40),
                                           **(uint **)(unaff_EBP - 0x2b54),
                                           **(int **)(unaff_EBP - 0x2b64),puVar42,iVar17);
                              FUN_0041d7e0(unaff_EBP - 0x440);
                              puVar42 = FUN_00401370((void *)(unaff_EBP - 0x306c),
                                                     (undefined1 *)(unaff_EBP - 0x2c0c),0x46);
                              FUN_00405610((void *)(unaff_EBP - 0x434),puVar42);
                              *(undefined4 *)(unaff_EBP - 0x430) =
                                   *(undefined4 *)(*(int *)(unaff_EBP - 0x2b18) + 0x800160);
                              puVar12 = FUN_00402990((void *)(unaff_EBP - 0x185c),
                                                     **(undefined4 **)(unaff_EBP - 0x2b40),
                                                     **(undefined4 **)(unaff_EBP - 0x2b54),
                                                     **(undefined4 **)(unaff_EBP - 0x2b64));
                              FUN_00401060((void *)(unaff_EBP - 0x440),puVar12);
                              FUN_00528400((void *)(*(int *)(unaff_EBP - 0x2b28) + 0x18),
                                           (undefined4 *)(unaff_EBP - 0x440));
                            }
                          }
                          else if ((iVar19 < iVar39) && (iVar39 < *(int *)(unaff_EBP - 0x2b20))) {
                            iVar9 = 0;
                            puVar42 = FUN_00401370((void *)(unaff_EBP - 0x3084),
                                                   (undefined1 *)(unaff_EBP - 0x2c0c),0x40);
                            piVar20 = (int *)FUN_004013d0((void *)(unaff_EBP - 200),2);
                            iVar17 = *piVar20;
                            puVar23 = (uint *)FUN_004013d0((void *)(unaff_EBP - 200),1);
                            uVar18 = *puVar23;
                            pfVar25 = (float *)FUN_004013d0((void *)(unaff_EBP - 200),0);
                            FUN_0041ff00(*(void **)(unaff_EBP - 0x2b18),*pfVar25,uVar18,iVar17,
                                         puVar42,iVar9);
                          }
                          iVar39 = iVar39 + 1;
                          iVar17 = FUN_00402170(*(int *)(unaff_EBP - 0x2b50));
                        } while (iVar39 < iVar17);
                      }
                      iVar17 = *(int *)(unaff_EBP - 0x2b50);
                      iVar39 = *(int *)(unaff_EBP - 0x2b5c) + 1;
                      *(int *)(unaff_EBP - 0x2b5c) = iVar39;
                      iVar19 = FUN_00402160(iVar17);
                    } while (iVar39 < iVar19);
                    iVar19 = *(int *)(unaff_EBP - 0x2b3c);
                  }
                  iVar19 = iVar19 + 1;
                  *(int *)(unaff_EBP - 0x2b3c) = iVar19;
                  iVar39 = FUN_00402150(iVar17);
                } while (iVar19 < iVar39);
              }
              pvVar52 = *(void **)(unaff_EBP - 0x2b18);
              if (*(int *)((int)pvVar52 + 0xb8) == 0) {
                piVar20 = (int *)FUN_004013d0((void *)(unaff_EBP - 100),1);
                *(float *)(unaff_EBP - 0x2b40) = (float)*piVar20;
                piVar20 = (int *)FUN_004013d0((void *)(unaff_EBP - 100),0);
                iVar67 = 0;
                iVar22 = 8;
                *(float *)(unaff_EBP - 0x2b20) = (float)*piVar20;
                iVar19 = FUN_00402170(iVar17);
                iVar19 = (int)((float)iVar19 * 0.5 + *(float *)(unaff_EBP - 0x2b40));
                iVar39 = FUN_00402160(iVar17);
                iVar39 = (int)((float)iVar39 * 0.5 + *(float *)(unaff_EBP - 0x2b20));
                iVar9 = FUN_00402160(iVar17);
                uVar18 = (uint)(*(float *)(unaff_EBP - 0x2b40) - (float)iVar9 * 0.5);
                iVar17 = FUN_00402150(iVar17);
                FUN_004d1a70(pvVar52,(int)(*(float *)(unaff_EBP - 0x2b20) - (float)iVar17 * 0.5),
                             uVar18,iVar39,iVar19,iVar22,iVar67);
              }
              puVar12 = (undefined4 *)FUN_004013d0((void *)(unaff_EBP - 100),1);
              piVar20 = (int *)*puVar12;
              *(undefined4 **)(unaff_EBP - 0x2b48) = puVar12;
              puVar12 = (undefined4 *)FUN_004013d0((void *)(unaff_EBP - 100),0);
              iVar17 = *(int *)(unaff_EBP - 0x2b50);
              pfVar26 = (float *)*puVar12;
              *(undefined4 **)(unaff_EBP - 0x2b1c) = puVar12;
              iVar17 = FUN_00402160(iVar17);
              uVar18 = iVar17 + (int)piVar20;
              iVar17 = FUN_00402150(*(int *)(unaff_EBP - 0x2b50));
              puVar23 = (uint *)0x5376ee;
              FUN_004d9160(*(void **)(unaff_EBP - 0x2b18),(int)pfVar26,piVar20,iVar17 + (int)pfVar26
                           ,uVar18);
              iVar17 = FUN_00406290(*(void **)(unaff_EBP - 0x2b18),
                                    (int)((**(int **)(unaff_EBP - 0x2b1c) >> 0x1f & 0xffU) +
                                         **(int **)(unaff_EBP - 0x2b1c)) >> 8,
                                    (int)(**(int **)(unaff_EBP - 0x2b48) +
                                         (**(int **)(unaff_EBP - 0x2b48) >> 0x1f & 0xffU)) >> 8);
              *(int *)(unaff_EBP - 0x2b1c) = iVar17;
              if (iVar17 != 0) {
                FUN_00401060((void *)(unaff_EBP - 0x210),(undefined4 *)(unaff_EBP - 100));
                *(int *)(unaff_EBP - 0x214) = (int)*(char *)(*(int *)(unaff_EBP - 0x2b14) + 0x18d);
                FUN_00530840((void *)(iVar17 + 0x3c),(undefined4 *)(unaff_EBP - 0x214));
                FUN_004d4f60((void *)(unaff_EBP - 0x2cd4),(undefined4 *)(unaff_EBP - 0x339c),
                             (uint *)(unaff_EBP - 0x2b1c));
              }
              pvVar52 = *(void **)(unaff_EBP - 0x2b18);
              FUN_004d5c70((int)pvVar52);
            }
          }
          break;
        case '\b':
          if (*(char *)((int)pvVar52 + 0xb4) == '\0') {
            uVar18 = FUN_00405420(pvVar52,(uint *)(*(int *)(unaff_EBP - 0x2b14) + 0x11c8));
            if (uVar18 != 0) {
              FUN_004f8520((int *)(uVar18 + 0x13a4));
              puVar47 = (uint *)(*(int *)(unaff_EBP - 0x2b14) + 0x10);
              puVar27 = FUN_00402c50((void *)(uVar18 + 0x10),(uint *)(unaff_EBP - 0x1ee4),puVar47);
              pfVar25 = FUN_00402550((void *)(unaff_EBP - 0x15f8),(longlong *)puVar27);
              fVar55 = FUN_004021b0(pfVar25);
              *(float *)(unaff_EBP - 0x2b1c) = (float)fVar55;
              if (40000.0 < *(float *)(unaff_EBP - 0x2b1c)) {
                FUN_00402a40((void *)(uVar18 + 0x10),puVar47);
              }
            }
            FUN_004f8520((int *)(*(int *)(unaff_EBP - 0x2b14) + 0x13ac));
            iVar17 = *(int *)(unaff_EBP - 0x2b14);
            *(undefined4 *)(iVar17 + 0x11d0) = 0;
            *(undefined4 *)(iVar17 + 0x11d4) = 0;
            goto LAB_005377fe;
          }
        }
LAB_00537804:
        FUN_0052ebf0((void *)(unaff_EBP - 0x2c58),(undefined4 *)(unaff_EBP - 0x2b30));
        piVar20 = (int *)(*(int *)(unaff_EBP - 0x2b14) + 0x130c);
        piVar53 = (int *)FUN_00530550(piVar20,(undefined4 *)(unaff_EBP - 0x2de8));
        bVar5 = FUN_0042c6f0((void *)(unaff_EBP - 0x2c58),piVar53);
      } while (bVar5);
    }
    if (*(char *)((int)pvVar52 + 0xb4) == '\0') {
      FUN_00426f60(piVar20);
    }
    fVar55 = FUN_0040fda0(*(int *)(unaff_EBP - 0x2b14));
    *(float *)(unaff_EBP - 0x2b1c) = (float)fVar55;
    iVar17 = *(int *)(unaff_EBP - 0x2b14);
    if (*(float *)(unaff_EBP - 0x2b1c) <= *(float *)(iVar17 + 0x16c) &&
        *(float *)(iVar17 + 0x16c) != *(float *)(unaff_EBP - 0x2b1c)) {
      fVar55 = FUN_0040fda0(iVar17);
      iVar17 = *(int *)(unaff_EBP - 0x2b14);
      *(float *)(iVar17 + 0x16c) = (float)fVar55;
    }
    if (0.0 < *(float *)(iVar17 + 0x16c)) goto code_r0x005378a1;
    goto LAB_00545be1;
  }
  pvVar52 = (void *)(*(int *)(unaff_EBP - 0x2b18) + 0xc);
  *(void **)(unaff_EBP - 0x2cb8) = pvVar52;
  FUN_00428070(pvVar52,(undefined4 *)(unaff_EBP - 0x2b40));
  piVar20 = (int *)FUN_00530550(pvVar52,(undefined4 *)(unaff_EBP - 0x2d3c));
  bVar5 = FUN_0042c6f0((void *)(unaff_EBP - 0x2b40),piVar20);
  if (bVar5) {
    do {
      FUN_00407a30((void *)(unaff_EBP - 0x2b40),(int *)(unaff_EBP - 0x2bc0));
      piVar20 = (int *)FUN_00530550(pvVar52,(undefined4 *)(unaff_EBP - 0x2d3c));
      bVar5 = FUN_0042c6f0((void *)(unaff_EBP - 0x2b40),piVar20);
    } while (bVar5);
  }
  FUN_00428070(pvVar52,(undefined4 *)(unaff_EBP - 0x2bac));
  piVar20 = (int *)FUN_00530550(pvVar52,(undefined4 *)(unaff_EBP - 0x2d54));
  bVar5 = FUN_0042c6f0((void *)(unaff_EBP - 0x2bac),piVar20);
  if (bVar5) {
    do {
      iVar17 = FUN_00402bc0((int *)(unaff_EBP - 0x2bac));
      piVar20 = (int *)(iVar17 + 8);
      if (*piVar20 != 0) {
        FUN_00402a40((void *)(unaff_EBP - 0x198),(undefined4 *)(*piVar20 + 0x80));
        iVar17 = *piVar20;
        cVar3 = *(char *)(*(int *)(unaff_EBP - 0x2b18) + 0xb4);
        *(undefined4 *)(unaff_EBP - 0x2b40) = *(undefined4 *)(iVar17 + 0x98);
        if (cVar3 != '\0') goto LAB_005463ff;
        cVar3 = *(char *)(iVar17 + 0x70);
        if (cVar3 == '\x01') {
          puVar23 = FUN_00402c50((void *)(iVar17 + 0x38),(uint *)(unaff_EBP - 0x213c),
                                 (uint *)(iVar17 + 0x10));
          FUN_00402550((void *)(unaff_EBP - 0x40),(longlong *)puVar23);
          fVar55 = FUN_004021b0((float *)(unaff_EBP - 0x40));
          *(float *)(unaff_EBP - 0x2b44) = (float)fVar55;
          if (0.001 <= *(float *)(unaff_EBP - 0x2b44)) {
            if (100.0 < *(float *)(unaff_EBP - 0x2b44)) {
              FUN_00401fb0((float *)(unaff_EBP - 0x40));
              FUN_00401610((void *)(unaff_EBP - 0x40),10.0);
            }
            puVar12 = (undefined4 *)(unaff_EBP - 0x40);
LAB_00545db4:
            FUN_00401060((void *)(*piVar20 + 0x28),puVar12);
          }
          else {
            puVar12 = FUN_00401080((void *)(unaff_EBP - 0x155c),0,0,0);
            FUN_00401060((void *)(*piVar20 + 0x28),puVar12);
            *(undefined1 *)(*piVar20 + 0x70) = 2;
          }
LAB_00545dbf:
          pfVar25 = (float *)(*piVar20 + 0x34);
          fVar55 = FUN_005306d0(*pfVar25,*(float *)(*piVar20 + 0x50),1.0);
          fVar56 = 0.005;
LAB_005463e3:
          iVar17 = *(int *)(unaff_EBP - 0x2b24);
          *(float *)(unaff_EBP - 0x2b44) = (float)fVar55;
          FUN_0052e710(pfVar25,(float *)(unaff_EBP - 0x2b44),iVar17,fVar56);
        }
        else {
          if (cVar3 == '\0') {
            fVar56 = (-*(float *)(iVar17 + 0x50) * 3.1415927) / 180.0;
            *(float *)(unaff_EBP - 0x2b8c) = fVar56;
            uVar24 = 0x41a00000;
            fVar55 = FUN_004024a0(fVar56);
            *(float *)(unaff_EBP - 0x2b44) = (float)fVar55;
            fVar56 = *(float *)(unaff_EBP - 0x2b44) * -50.0;
            fVar55 = FUN_004024c0(*(float *)(unaff_EBP - 0x2b8c));
            *(float *)(unaff_EBP - 0x2b44) = (float)fVar55;
            FUN_00401080((void *)(unaff_EBP - 0x1574),*(float *)(unaff_EBP - 0x2b44) * -50.0,fVar56,
                         uVar24);
            FUN_00402510(unaff_EBP - 0x344);
            puVar23 = (uint *)(*piVar20 + 0x10);
            puVar27 = (uint *)(unaff_EBP - 0x216c);
            puVar47 = FUN_00402cb0((void *)(*piVar20 + 0x38),(uint *)(unaff_EBP - 0x219c),
                                   (uint *)(unaff_EBP - 0x344));
            puVar23 = FUN_00402c50(puVar47,puVar27,puVar23);
            FUN_00402550((void *)(unaff_EBP - 0x58),(longlong *)puVar23);
            fVar55 = FUN_004021b0((float *)(unaff_EBP - 0x58));
            *(float *)(unaff_EBP - 0x2b44) = (float)fVar55;
            if (0.001 < *(float *)(unaff_EBP - 0x2b44) || *(float *)(unaff_EBP - 0x2b44) == 0.001) {
              FUN_00401fb0((float *)(unaff_EBP - 0x58));
              FUN_00401610((void *)(unaff_EBP - 0x58),10.0);
              puVar12 = (undefined4 *)(unaff_EBP - 0x58);
              goto LAB_00545db4;
            }
            puVar12 = FUN_00401080((void *)(unaff_EBP - 0x158c),0,0,0);
            FUN_00401060((void *)(*piVar20 + 0x28),puVar12);
            *(undefined1 *)(*piVar20 + 0x70) = 1;
            goto LAB_00545dbf;
          }
          if (cVar3 == '\x02') {
            fVar56 = (-*(float *)(iVar17 + 0x50) * 3.1415927) / 180.0;
            *(float *)(unaff_EBP - 0x2b8c) = fVar56;
            uVar24 = 0x41a00000;
            fVar55 = FUN_004024a0(fVar56);
            *(float *)(unaff_EBP - 0x2b44) = (float)fVar55;
            fVar56 = *(float *)(unaff_EBP - 0x2b44) * 50.0;
            fVar55 = FUN_004024c0(*(float *)(unaff_EBP - 0x2b8c));
            *(float *)(unaff_EBP - 0x2b44) = (float)fVar55;
            FUN_00401080((void *)(unaff_EBP - 0x15a4),*(float *)(unaff_EBP - 0x2b44) * 50.0,fVar56,
                         uVar24);
            FUN_00402510(unaff_EBP - 0x368);
            puVar23 = (uint *)(*piVar20 + 0x10);
            puVar27 = (uint *)(unaff_EBP - 0x21cc);
            puVar47 = FUN_00402cb0((void *)(*piVar20 + 0x38),(uint *)(unaff_EBP - 0x21fc),
                                   (uint *)(unaff_EBP - 0x368));
            puVar23 = FUN_00402c50(puVar47,puVar27,puVar23);
            FUN_00402550((void *)(unaff_EBP - 0xd4),(longlong *)puVar23);
            fVar55 = FUN_004021b0((float *)(unaff_EBP - 0xd4));
            *(float *)(unaff_EBP - 0x2b44) = (float)fVar55;
            if (0.001 < *(float *)(unaff_EBP - 0x2b44) || *(float *)(unaff_EBP - 0x2b44) == 0.001) {
              FUN_00401fb0((float *)(unaff_EBP - 0xd4));
              FUN_00401610((void *)(unaff_EBP - 0xd4),10.0);
              puVar12 = (undefined4 *)(unaff_EBP - 0xd4);
              goto LAB_00545db4;
            }
            puVar12 = FUN_00401080((void *)(unaff_EBP - 0x15bc),0,0,0);
            FUN_00401060((void *)(*piVar20 + 0x28),puVar12);
            *(undefined1 *)(*piVar20 + 0x70) = 3;
            goto LAB_00545dbf;
          }
          if (cVar3 == '\x03') {
            puVar23 = FUN_00402c50((void *)(iVar17 + 0x58),(uint *)(unaff_EBP - 0x222c),
                                   (uint *)(iVar17 + 0x10));
            FUN_00402550((void *)(unaff_EBP - 0x4c),(longlong *)puVar23);
            puVar12 = (undefined4 *)FUN_004013d0((void *)(unaff_EBP - 0x4c),2);
            *(undefined4 **)(unaff_EBP - 0x2cbc) = puVar12;
            *puVar12 = 0;
            fVar55 = FUN_004021b0((float *)(unaff_EBP - 0x4c));
            *(float *)(unaff_EBP - 0x2b44) = (float)fVar55;
            if (0.001 <= *(float *)(unaff_EBP - 0x2b44)) {
              if (900.0 < *(float *)(unaff_EBP - 0x2b44)) {
                FUN_00401fb0((float *)(unaff_EBP - 0x4c));
                FUN_00401610((void *)(unaff_EBP - 0x4c),30.0);
              }
              iVar17 = *(int *)(unaff_EBP - 0x2b24);
              fVar56 = 0.001;
              iVar19 = iVar17;
              pfVar25 = (float *)FUN_004013d0((void *)(unaff_EBP - 0x4c),0);
              pfVar26 = (float *)FUN_004013d0((void *)(*piVar20 + 0x28),0);
              FUN_0052e710(pfVar26,pfVar25,iVar19,fVar56);
              fVar56 = 0.001;
              pfVar25 = (float *)FUN_004013d0((void *)(unaff_EBP - 0x4c),1);
              pfVar26 = (float *)FUN_004013d0((void *)(*piVar20 + 0x28),1);
              FUN_0052e710(pfVar26,pfVar25,iVar17,fVar56);
            }
            else {
              puVar12 = FUN_00401080((void *)(unaff_EBP - 0x15d4),0,0,0);
              FUN_00401060((void *)(*piVar20 + 0x28),puVar12);
              *(undefined1 *)(*piVar20 + 0x70) = 0;
            }
            pvVar52 = (void *)(*piVar20 + 0x10);
            iVar17 = 0;
            *(void **)(unaff_EBP - 0x2b8c) = pvVar52;
            pCVar36 = (CRefTime *)FUN_004e2320(pvVar52,1);
            uVar18 = CRefTime::Millisecs(pCVar36);
            pCVar36 = (CRefTime *)FUN_004e2320(pvVar52,0);
            uVar54 = CRefTime::Millisecs(pCVar36);
            iVar17 = FUN_00406100(*(void **)(unaff_EBP - 0x2b18),uVar54,uVar18,iVar17);
            iVar19 = 0;
            *(int *)(unaff_EBP - 0x2b44) = iVar17;
            if (iVar17 != 0) {
              iVar19 = FUN_004061d0(iVar17);
              iVar17 = FUN_00406250(*(int *)(unaff_EBP - 0x2b44));
              iVar19 = iVar19 + iVar17;
              if (iVar19 < 0) {
                iVar19 = 0;
              }
            }
            pvVar52 = (void *)FUN_004e2320(*(void **)(unaff_EBP - 0x2b8c),2);
            *(void **)(unaff_EBP - 0x2b44) = pvVar52;
            iVar17 = FUN_00402d10(pvVar52,iVar19 + 100);
            if ((char)iVar17 == '\0') {
              iVar17 = FUN_00405750(*(void **)(unaff_EBP - 0x2b44),iVar19 + 0x96);
              if ((char)iVar17 == '\0') {
                *(undefined4 *)(unaff_EBP - 0x2ca0) = 0;
                pfVar25 = (float *)(unaff_EBP - 0x2ca0);
              }
              else {
                *(undefined4 *)(unaff_EBP - 0x2c18) = 0xc1200000;
                pfVar25 = (float *)(unaff_EBP - 0x2c18);
              }
            }
            else {
              *(undefined4 *)(unaff_EBP - 0x2bcc) = 0x41200000;
              pfVar25 = (float *)(unaff_EBP - 0x2bcc);
            }
            iVar17 = *(int *)(unaff_EBP - 0x2b24);
            fVar56 = 0.001;
            pfVar26 = (float *)FUN_004013d0((void *)(*piVar20 + 0x28),2);
            FUN_0052e710(pfVar26,pfVar25,iVar17,fVar56);
            FUN_00401060((void *)(unaff_EBP - 0x4c),(undefined4 *)(*piVar20 + 0x28));
            **(undefined4 **)(unaff_EBP - 0x2cbc) = 0;
            fVar55 = FUN_004021b0((float *)(unaff_EBP - 0x4c));
            *(float *)(unaff_EBP - 0x2b44) = (float)fVar55;
            if (*(float *)(unaff_EBP - 0x2b44) <= 0.0) goto LAB_005463ff;
            FUN_00401fb0((float *)(unaff_EBP - 0x4c));
            pfVar25 = (float *)FUN_004013d0((void *)(unaff_EBP - 0x4c),1);
            fVar56 = *pfVar25;
            *(float **)(unaff_EBP - 0x2b38) = pfVar25;
            if (1.0 < fVar56) {
              *pfVar25 = 1.0;
            }
            if (*pfVar25 <= -1.0 && *pfVar25 != -1.0) {
              *pfVar25 = -1.0;
            }
            pfVar26 = (float *)FUN_004013d0((void *)(unaff_EBP - 0x4c),0);
            pfVar25 = (float *)(*piVar20 + 0x34);
            fVar56 = 1.0;
            if (*pfVar26 <= 0.0) {
              fVar55 = FUN_00548b00(**(float **)(unaff_EBP - 0x2b38));
              *(float *)(unaff_EBP - 0x2b44) = (float)fVar55;
              fVar58 = *(float *)(unaff_EBP - 0x2b44);
            }
            else {
              fVar55 = FUN_00548b00(**(float **)(unaff_EBP - 0x2b38));
              *(float *)(unaff_EBP - 0x2b44) = (float)fVar55;
              fVar58 = -*(float *)(unaff_EBP - 0x2b44);
            }
            fVar55 = FUN_005306d0(*pfVar25,(fVar58 / 3.1415927) * 180.0,fVar56);
            fVar56 = 0.001;
            goto LAB_005463e3;
          }
        }
LAB_005463ff:
        FUN_004e1520((float *)(unaff_EBP - 0x15ec),*(float *)(unaff_EBP - 0x2ba0),
                     (float *)(*piVar20 + 0x28));
        FUN_00402510(unaff_EBP - 0x458);
        FUN_00402e30((void *)(*piVar20 + 0x10),(uint *)(unaff_EBP - 0x458));
        uVar18 = *(uint *)(unaff_EBP - 0x2b24);
        iVar19 = 0x3c23d70a;
        *(undefined4 *)(unaff_EBP - 0x2b1c) = 0;
        *(undefined4 *)(unaff_EBP - 0x2cc0) = 0x3f800000;
        FUN_0052e710((float *)(unaff_EBP - 0x2b1c),(float *)(unaff_EBP - 0x2cc0),uVar18,0.01);
        iVar17 = *piVar20;
        FUN_00402a10((ulonglong *)&stack0xfffffff8);
        puVar12 = (undefined4 *)(unaff_EBP - 0x225c);
        puVar23 = FUN_00402c50((void *)(iVar17 + 0x10),(uint *)(unaff_EBP - 0x228c),
                               (uint *)(iVar17 + 0x80));
        puVar23 = FUN_00402bd0(puVar23,puVar12,uVar18,iVar19);
        FUN_00402e30((void *)(*piVar20 + 0x80),puVar23);
        pfVar25 = (float *)(*piVar20 + 0x98);
        fVar55 = FUN_005306d0(*pfVar25,*(float *)(*piVar20 + 0x34),1.0);
        *(float *)(unaff_EBP - 0x2b44) = (float)fVar55;
        puVar23 = (uint *)0x54650c;
        FUN_0052e710(pfVar25,(float *)(unaff_EBP - 0x2b44),*(int *)(unaff_EBP - 0x2b24),0.01);
        FUN_004c8280((undefined4 *)(unaff_EBP - 0x2bf8));
        iVar17 = *piVar20;
        *(undefined1 *)(unaff_EBP - 4) = 0x19;
        FUN_00428070((void *)(iVar17 + 0x78),(undefined4 *)(unaff_EBP - 0x2b20));
        piVar53 = (int *)FUN_00530550((void *)(iVar17 + 0x78),(undefined4 *)(unaff_EBP - 0x2d44));
        bVar5 = FUN_0042c6f0((void *)(unaff_EBP - 0x2b20),piVar53);
        if (bVar5) {
          do {
            puVar27 = (uint *)FUN_00402bc0((int *)(unaff_EBP - 0x2b20));
            uVar18 = FUN_00405420(*(void **)(unaff_EBP - 0x2b18),puVar27);
            *(uint *)(unaff_EBP - 0x2b8c) = uVar18;
            if (uVar18 == 0) {
LAB_0054670d:
              FUN_004d6620((void *)(unaff_EBP - 0x2bf8),(undefined4 *)(unaff_EBP - 0x2b20));
            }
            else {
              puVar27 = FUN_00402c50((void *)(uVar18 + 0x10),(uint *)(unaff_EBP - 0x22bc),
                                     (uint *)(*piVar20 + 0x10));
              pfVar25 = FUN_00402550((void *)(unaff_EBP - 0x1604),(longlong *)puVar27);
              fVar55 = FUN_004021b0(pfVar25);
              *(float *)(unaff_EBP - 0x2b44) = (float)fVar55;
              if (4096.0 < *(float *)(unaff_EBP - 0x2b44)) goto LAB_0054670d;
              FUN_00401cd0((undefined4 *)(unaff_EBP - 0xf00));
              FUN_00402030((void *)(unaff_EBP - 0xf00),
                           *(float *)(*piVar20 + 0x98) - *(float *)(unaff_EBP - 0x2b40));
              puVar27 = FUN_00402c50((void *)(uVar18 + 0x1350),(uint *)(unaff_EBP - 0x22ec),
                                     (uint *)(unaff_EBP - 0x198));
              FUN_00402550((void *)(unaff_EBP - 0x29c),(longlong *)puVar27);
              FUN_004021f0((void *)(unaff_EBP - 0xf00),(float *)(unaff_EBP - 0x161c),
                           (float *)(unaff_EBP - 0x29c));
              FUN_00402510(unaff_EBP - 0x4a0);
              puVar27 = FUN_00402cb0((void *)(*piVar20 + 0x80),(uint *)(unaff_EBP - 0x231c),
                                     (uint *)(unaff_EBP - 0x4a0));
              FUN_00402a40((void *)(uVar18 + 0x1350),puVar27);
              pfVar25 = (float *)FUN_004013d0((void *)(uVar18 + 0x1374),2);
              *pfVar25 = (*(float *)(*piVar20 + 0x98) - *(float *)(unaff_EBP - 0x2b40)) + *pfVar25;
              puVar27 = FUN_00402c50((void *)(uVar18 + 0x10),(uint *)(unaff_EBP - 0x234c),
                                     (uint *)(unaff_EBP - 0x198));
              FUN_00402550((void *)(unaff_EBP - 0x290),(longlong *)puVar27);
              FUN_004021f0((void *)(unaff_EBP - 0xf00),(float *)(unaff_EBP - 0x10d0),
                           (float *)(unaff_EBP - 0x290));
              FUN_00402510(unaff_EBP - 0x488);
              puVar27 = FUN_00402cb0((void *)(*piVar20 + 0x80),(uint *)(unaff_EBP - 0x237c),
                                     (uint *)(unaff_EBP - 0x488));
              FUN_00402a40((void *)(uVar18 + 0x10),puVar27);
              pfVar25 = (float *)FUN_004013d0((void *)(uVar18 + 0x28),2);
              *pfVar25 = (*(float *)(*piVar20 + 0x98) - *(float *)(unaff_EBP - 0x2b40)) + *pfVar25;
            }
            FUN_00407a30((void *)(unaff_EBP - 0x2b20),(int *)(unaff_EBP - 0x2c44));
            piVar53 = (int *)FUN_00530550((void *)(*piVar20 + 0x78),
                                          (undefined4 *)(unaff_EBP - 0x2d44));
            bVar5 = FUN_0042c6f0((void *)(unaff_EBP - 0x2b20),piVar53);
          } while (bVar5);
        }
        FUN_00428070((void *)(unaff_EBP - 0x2bf8),(undefined4 *)(unaff_EBP - 0x2b68));
        piVar53 = (int *)FUN_00530550((void *)(unaff_EBP - 0x2bf8),
                                      (undefined4 *)(unaff_EBP - 0x2d4c));
        bVar5 = FUN_0042c6f0((void *)(unaff_EBP - 0x2b68),piVar53);
        if (bVar5) {
          do {
            puVar12 = (undefined4 *)FUN_0052eb90((int *)(unaff_EBP - 0x2b68));
            FUN_0040a1d0((void *)(*piVar20 + 0x78),(undefined4 *)(unaff_EBP - 0x2ce0),
                         (int *)*puVar12);
            FUN_0052ebf0((void *)(unaff_EBP - 0x2b68),(undefined4 *)(unaff_EBP - 0x2bc0));
            piVar53 = (int *)FUN_00530550((void *)(unaff_EBP - 0x2bf8),
                                          (undefined4 *)(unaff_EBP - 0x2d4c));
            bVar5 = FUN_0042c6f0((void *)(unaff_EBP - 0x2b68),piVar53);
          } while (bVar5);
        }
        *(undefined1 *)(unaff_EBP - 4) = 5;
        FUN_00423710((int *)(unaff_EBP - 0x2bf8));
        pvVar52 = *(void **)(unaff_EBP - 0x2cb8);
      }
      FUN_00407a30((void *)(unaff_EBP - 0x2bac),(int *)(unaff_EBP - 0x2c1c));
      piVar20 = (int *)FUN_00530550(pvVar52,(undefined4 *)(unaff_EBP - 0x2d54));
      bVar5 = FUN_0042c6f0((void *)(unaff_EBP - 0x2bac),piVar20);
    } while (bVar5);
  }
  FUN_004c8280((undefined4 *)(unaff_EBP - 0x2c20));
  pvVar52 = (void *)(*(int *)(unaff_EBP - 0x2b18) + 0x14);
  *(undefined1 *)(unaff_EBP - 4) = 0x1a;
  FUN_00428070(pvVar52,(undefined4 *)(unaff_EBP - 0x2b50));
  piVar20 = (int *)FUN_00530550(pvVar52,(undefined4 *)(unaff_EBP - 0x2d6c));
  bVar5 = FUN_0042c6f0((void *)(unaff_EBP - 0x2b50),piVar20);
  do {
    if (!bVar5) {
      FUN_00428070((void *)(unaff_EBP - 0x2c20),(undefined4 *)(unaff_EBP - 0x2b68));
      piVar20 = (int *)FUN_00530550((void *)(unaff_EBP - 0x2c20),(undefined4 *)(unaff_EBP - 0x2d7c))
      ;
      bVar5 = FUN_0042c6f0((void *)(unaff_EBP - 0x2b68),piVar20);
      if (bVar5) {
        do {
          puVar12 = (undefined4 *)FUN_0052eb90((int *)(unaff_EBP - 0x2b68));
          FUN_005305b0(pvVar52,(int *)(unaff_EBP - 0x2bc0),(int *)*puVar12);
          FUN_0052ebf0((void *)(unaff_EBP - 0x2b68),(undefined4 *)(unaff_EBP - 0x2c44));
          piVar20 = (int *)FUN_00530550((void *)(unaff_EBP - 0x2c20),
                                        (undefined4 *)(unaff_EBP - 0x2d7c));
          bVar5 = FUN_0042c6f0((void *)(unaff_EBP - 0x2b68),piVar20);
        } while (bVar5);
      }
      *(undefined1 *)(unaff_EBP - 4) = 5;
      FUN_00423710((int *)(unaff_EBP - 0x2c20));
      FUN_00428070(*(void **)(unaff_EBP - 0x2b6c),(undefined4 *)(unaff_EBP - 0x2b68));
      piVar20 = (int *)FUN_00530550(*(void **)(unaff_EBP - 0x2b6c),
                                    (undefined4 *)(unaff_EBP - 0x2d84));
      bVar5 = FUN_0042c6f0((void *)(unaff_EBP - 0x2b68),piVar20);
      if (bVar5) {
        do {
          iVar19 = FUN_00402bc0((int *)(unaff_EBP - 0x2b68));
          iVar17 = *(int *)(iVar19 + 8);
          if (iVar17 != 0) {
            puVar23 = (uint *)(iVar17 + 0x11d0);
            uVar18 = FUN_00405420(*(void **)(unaff_EBP - 0x2b18),puVar23);
            if ((uVar18 != 0) &&
               (uVar18 = FUN_00405420(*(void **)(unaff_EBP - 0x2b18),puVar23),
               *(float *)(uVar18 + 0x16c) <= 0.0)) {
              *puVar23 = 0;
              *(undefined4 *)(iVar17 + 0x11d4) = 0;
            }
            iVar17 = *(int *)(iVar19 + 8);
            *(int *)(unaff_EBP - 0x2b94) = iVar17;
            if (*(char *)(iVar17 + 0x60) == '\x05') {
              puVar23 = (uint *)(iVar17 + 0x198);
              uVar18 = FUN_00405420(*(void **)(unaff_EBP - 0x2b18),puVar23);
              if ((uVar18 != 0) &&
                 (uVar18 = FUN_00405420(*(void **)(unaff_EBP - 0x2b18),puVar23),
                 *(char *)(uVar18 + 0x68) == 'j')) {
                uVar18 = FUN_00405420(*(void **)(unaff_EBP - 0x2b18),puVar23);
                *(uint *)(unaff_EBP - 0x2b40) = uVar18;
                pfVar25 = (float *)FUN_004013d0((void *)(iVar17 + 0x80),2);
                pfVar26 = (float *)FUN_004013d0((void *)(uVar18 + 0x80),2);
                FUN_00401080((void *)(unaff_EBP - 0x1754),0,0,
                             (*pfVar25 * 0.5 - *pfVar26 * 0.5) + 0.01);
                FUN_00402510(unaff_EBP - 0x344);
                puVar23 = FUN_00402cb0((void *)(*(int *)(unaff_EBP - 0x2b40) + 0x1350),
                                       (uint *)(unaff_EBP - 0x255c),(uint *)(unaff_EBP - 0x344));
                FUN_00402a40((void *)(*(int *)(unaff_EBP - 0x2b94) + 0x1350),puVar23);
                FUN_00401060((void *)(*(int *)(unaff_EBP - 0x2b94) + 0x1374),
                             (undefined4 *)(*(int *)(unaff_EBP - 0x2b40) + 0x1374));
                FUN_00401080((void *)(unaff_EBP - 0x176c),0,0,
                             (*pfVar25 * 0.5 - *pfVar26 * 0.5) + 0.01);
                FUN_00402510(unaff_EBP - 0x368);
                iVar17 = *(int *)(unaff_EBP - 0x2b40);
                puVar23 = FUN_00402cb0((void *)(iVar17 + 0x10),(uint *)(unaff_EBP - 0x258c),
                                       (uint *)(unaff_EBP - 0x368));
                iVar19 = *(int *)(unaff_EBP - 0x2b94);
                FUN_00402a40((void *)(iVar19 + 0x10),puVar23);
                FUN_00401060((void *)(iVar19 + 0x28),(undefined4 *)(iVar17 + 0x28));
                *(undefined4 *)(iVar19 + 0x1180) = *(undefined4 *)(iVar17 + 0x1180);
                *(undefined4 *)(iVar19 + 0x1188) = *(undefined4 *)(iVar17 + 0x1188);
                *(undefined4 *)(iVar19 + 0x118c) = *(undefined4 *)(iVar17 + 0x118c);
                puVar12 = FUN_00401080((void *)(unaff_EBP - 0x1784),0,0,0);
                FUN_00401060((void *)(iVar19 + 0x34),puVar12);
                puVar12 = FUN_00401080((void *)(unaff_EBP - 0x179c),0,0,0);
                FUN_00401060((void *)(iVar19 + 0x40),puVar12);
              }
            }
          }
          FUN_00407a30((void *)(unaff_EBP - 0x2b68),(int *)(unaff_EBP - 0x2bc0));
          piVar20 = (int *)FUN_00530550(*(void **)(unaff_EBP - 0x2b6c),
                                        (undefined4 *)(unaff_EBP - 0x2d84));
          bVar5 = FUN_0042c6f0((void *)(unaff_EBP - 0x2b68),piVar20);
        } while (bVar5);
      }
      FUN_00428070((void *)(unaff_EBP - 0x2be8),(undefined4 *)(unaff_EBP - 0x2b68));
      piVar20 = (int *)FUN_00530550((void *)(unaff_EBP - 0x2be8),(undefined4 *)(unaff_EBP - 0x2d8c))
      ;
      bVar5 = FUN_0042c6f0((void *)(unaff_EBP - 0x2b68),piVar20);
      if (bVar5) {
        iVar17 = *(int *)(unaff_EBP - 0x2b28);
        do {
          piVar20 = (int *)FUN_00402bc0((int *)(unaff_EBP - 0x2b68));
          *(undefined1 *)(*piVar20 + 0x75) = 1;
          puVar12 = FUN_00422c00((void *)(unaff_EBP - 0xe88),*piVar20);
          *(undefined1 *)(unaff_EBP - 4) = 0x1b;
          FUN_00428450((void *)(iVar17 + 0x28),puVar12);
          *(undefined1 *)(unaff_EBP - 4) = 5;
          FUN_00423770(unaff_EBP - 0xe88);
          FUN_00407a30((void *)(unaff_EBP - 0x2b68),(int *)(unaff_EBP - 0x2bc0));
          piVar20 = (int *)FUN_00530550((void *)(unaff_EBP - 0x2be8),
                                        (undefined4 *)(unaff_EBP - 0x2d8c));
          bVar5 = FUN_0042c6f0((void *)(unaff_EBP - 0x2b68),piVar20);
        } while (bVar5);
      }
      iVar17 = *(int *)(unaff_EBP - 0x2b28);
      pvVar52 = (void *)(iVar17 + 0x30);
      FUN_00428070(pvVar52,(undefined4 *)(unaff_EBP - 0x2b68));
      piVar20 = (int *)FUN_00530550(pvVar52,(undefined4 *)(unaff_EBP - 0x2d94));
      bVar5 = FUN_0042c6f0((void *)(unaff_EBP - 0x2b68),piVar20);
      if (bVar5) {
        do {
          pvVar29 = (void *)FUN_0052eb90((int *)(unaff_EBP - 0x2b68));
          puVar23 = (uint *)FUN_004013d0(pvVar29,1);
          uVar18 = *puVar23;
          puVar23 = (uint *)FUN_004013d0(pvVar29,0);
          iVar17 = FUN_00406290(*(void **)(unaff_EBP - 0x2b18),*puVar23,uVar18);
          if (iVar17 != 0) {
            *(undefined1 *)(iVar17 + 0x76) = 1;
          }
          FUN_0052ebf0((void *)(unaff_EBP - 0x2b68),(undefined4 *)(unaff_EBP - 0x2bc0));
          piVar20 = (int *)FUN_00530550(pvVar52,(undefined4 *)(unaff_EBP - 0x2d94));
          bVar5 = FUN_0042c6f0((void *)(unaff_EBP - 0x2b68),piVar20);
        } while (bVar5);
        iVar17 = *(int *)(unaff_EBP - 0x2b28);
      }
      FUN_00428070((void *)(unaff_EBP - 0x2cd4),(undefined4 *)(unaff_EBP - 0x2b68));
      piVar20 = (int *)FUN_00530550((void *)(unaff_EBP - 0x2cd4),(undefined4 *)(unaff_EBP - 0x2db4))
      ;
      bVar5 = FUN_0042c6f0((void *)(unaff_EBP - 0x2b68),piVar20);
      if (bVar5) {
        do {
          piVar20 = (int *)FUN_00402bc0((int *)(unaff_EBP - 0x2b68));
          puVar12 = FUN_0052e950((void *)(unaff_EBP - 0xe50),*piVar20);
          *(undefined1 *)(unaff_EBP - 4) = 0x1c;
          FUN_005307f0((void *)(iVar17 + 0x38),puVar12);
          *(undefined1 *)(unaff_EBP - 4) = 5;
          FUN_00423770(unaff_EBP - 0xe50);
          FUN_00407a30((void *)(unaff_EBP - 0x2b68),(int *)(unaff_EBP - 0x2bc0));
          piVar20 = (int *)FUN_00530550((void *)(unaff_EBP - 0x2cd4),
                                        (undefined4 *)(unaff_EBP - 0x2db4));
          bVar5 = FUN_0042c6f0((void *)(unaff_EBP - 0x2b68),piVar20);
        } while (bVar5);
      }
      pvVar52 = (void *)(*(int *)(unaff_EBP - 0x2b28) + 0x18);
      FUN_00428070(pvVar52,(undefined4 *)(unaff_EBP - 0x2b20));
      piVar20 = (int *)FUN_00530550(pvVar52,(undefined4 *)(unaff_EBP - 0x2dbc));
      bVar5 = FUN_0042c6f0((void *)(unaff_EBP - 0x2b20),piVar20);
      if (bVar5) {
        do {
          pvVar29 = (void *)FUN_0052eb90((int *)(unaff_EBP - 0x2b20));
          piVar20 = (int *)FUN_004013d0(pvVar29,1);
          uVar18 = (int)(*piVar20 + (*piVar20 >> 0x1f & 0xffU)) >> 8;
          piVar20 = (int *)FUN_004013d0(pvVar29,0);
          iVar17 = FUN_00406290(*(void **)(unaff_EBP - 0x2b18),
                                (int)(*piVar20 + (*piVar20 >> 0x1f & 0xffU)) >> 8,uVar18);
          if (iVar17 != 0) {
            puVar12 = (undefined4 *)FUN_0052eb90((int *)(unaff_EBP - 0x2b20));
            FUN_0041f4d0((void *)(iVar17 + 0x68),puVar12);
          }
          FUN_0052ebf0((void *)(unaff_EBP - 0x2b20),(undefined4 *)(unaff_EBP - 0x2bc0));
          piVar20 = (int *)FUN_00530550(pvVar52,(undefined4 *)(unaff_EBP - 0x2dbc));
          bVar5 = FUN_0042c6f0((void *)(unaff_EBP - 0x2b20),piVar20);
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
          pvVar52 = *(void **)(unaff_EBP - 0x2b18);
          uVar18 = FUN_00405420(pvVar52,puVar27);
          if (uVar18 != 0) {
            uVar18 = FUN_00405420(pvVar52,puVar27);
            fVar55 = FUN_00412150(uVar18);
            *(float *)(unaff_EBP - 0x2b44) = (float)fVar55;
            uVar18 = FUN_00405420(pvVar52,puVar27);
            *(undefined4 *)(uVar18 + 0x70) = 0;
            uVar18 = FUN_00405420(pvVar52,puVar27);
            uVar54 = FUN_00405420(*(void **)(unaff_EBP - 0x2b18),puVar27);
            fVar55 = FUN_00412150(uVar54);
            *(float *)(unaff_EBP - 0x2b8c) = (float)fVar55;
            *(int *)(uVar18 + 0x6c) =
                 (int)((*(float *)(unaff_EBP - 0x2b44) / *(float *)(unaff_EBP - 0x2b8c)) *
                      (float)*(int *)(uVar18 + 0x6c));
          }
        }
        goto LAB_00546b28;
      }
      pvVar52 = *(void **)(unaff_EBP - 0x2b18);
      *(undefined4 *)(unaff_EBP - 0x2b4c) = 0;
      uVar18 = FUN_00405420(pvVar52,puVar27);
      if (uVar18 != 0) {
        uVar18 = FUN_00405420(*(void **)(unaff_EBP - 0x2b18),puVar27);
        *(uint *)(unaff_EBP - 0x2b4c) = uVar18;
      }
      fVar55 = FUN_00401d80((float *)(unaff_EBP - 0x11c));
      *(float *)(unaff_EBP - 0x2b44) = (float)fVar55;
      iVar17 = (int)(*(float *)(unaff_EBP - 0x2b44) * 2.0 + 1.0);
      *(int *)(unaff_EBP - 0x2c08) = iVar17;
      FUN_004f7a70((void *)(unaff_EBP - 0x11c),(float *)(unaff_EBP - 0x40),(float)iVar17);
      FUN_00401060((void *)(unaff_EBP - 0xb0),puVar27 + 0xf);
      fVar55 = FUN_004021b0((float *)(unaff_EBP - 0xb0));
      *(float *)(unaff_EBP - 0x2b44) = (float)fVar55;
      if (0.0 < *(float *)(unaff_EBP - 0x2b44)) {
        FUN_00401fb0((float *)(unaff_EBP - 0xb0));
      }
      FUN_00401610((void *)(unaff_EBP - 0xb0),(float)puVar27[0x15] * 5.0);
      *(float *)(unaff_EBP - 0x2b44) = (float)puVar27[0x15] * 3.0;
      puVar12 = (undefined4 *)FUN_004013d0((void *)(unaff_EBP - 0xb0),2);
      pvVar52 = *(void **)(unaff_EBP - 0x2b18);
      *puVar12 = *(undefined4 *)(unaff_EBP - 0x2b44);
      pvVar52 = (void *)FUN_00405420(pvVar52,puVar27);
      iVar17 = *(int *)(unaff_EBP - 0x2c08);
      *(void **)(unaff_EBP - 0x2b84) = pvVar52;
      *(undefined4 *)(unaff_EBP - 0x2c04) = 0;
      if (0 < iVar17) {
        do {
          pvVar29 = *(void **)(unaff_EBP - 0x2b6c);
          *(undefined1 *)(unaff_EBP - 0x2b58) = 0;
          *(undefined1 *)(unaff_EBP - 0x2b64) = 0;
          FUN_00428070(pvVar29,(undefined4 *)(unaff_EBP - 0x2bac));
          piVar20 = (int *)FUN_00530550(*(void **)(unaff_EBP - 0x2b6c),
                                        (undefined4 *)(unaff_EBP - 0x2d5c));
          bVar5 = FUN_0042c6f0((void *)(unaff_EBP - 0x2bac),piVar20);
          if (bVar5) {
            do {
              iVar17 = FUN_00402bc0((int *)(unaff_EBP - 0x2bac));
              pvVar29 = *(void **)(iVar17 + 8);
              *(void **)(unaff_EBP - 0x2b54) = pvVar29;
              if (((pvVar29 != (void *)0x0) && (0.0 < *(float *)((int)pvVar29 + 0x16c))) &&
                 ((((puVar27[0x18] == 3 && ((char)puVar27[0x19] == '\x02')) ||
                   (pvVar52 == (void *)0x0)) ||
                  (((pvVar29 != pvVar52 &&
                    (uVar24 = FUN_004d18c0((int)pvVar52,(int)pvVar29), (char)uVar24 != '\0')) &&
                   ((pvVar29 = *(void **)(unaff_EBP - 0x2b54),
                    *(int *)((int)pvVar29 + 8) != *(int *)((int)pvVar52 + 0x11c0) ||
                    (*(int *)((int)pvVar29 + 0xc) != *(int *)((int)pvVar52 + 0x11c4))))))))) {
                *(void **)(unaff_EBP - 0x2b38) = (void *)((int)pvVar29 + 0x80);
                iVar17 = FUN_004013d0((void *)((int)pvVar29 + 0x80),0);
                *(int *)(unaff_EBP - 0x2b1c) = iVar17;
                pvVar29 = (void *)(*(int *)(unaff_EBP - 0x2b54) + 0x10);
                *(void **)(unaff_EBP - 0x2b68) = pvVar29;
                iVar17 = FUN_004e2320(pvVar29,0);
                *(int *)(unaff_EBP - 0x2b48) = iVar17;
                iVar17 = FUN_004e2320(puVar27 + 6,0);
                *(int *)(unaff_EBP - 0x2b90) = iVar17;
                puVar47 = (uint *)FUN_004014b0(*(void **)(unaff_EBP - 0x2b48),
                                               (int *)(unaff_EBP - 0x36ec));
                pvVar29 = (void *)FUN_00401530(*(void **)(unaff_EBP - 0x2b90),
                                               (int *)(unaff_EBP - 0x370c));
                uVar18 = FUN_004ce380(pvVar29,puVar47);
                if ((char)uVar18 != '\0') {
                  iVar17 = FUN_004013d0(*(void **)(unaff_EBP - 0x2b38),1);
                  pvVar29 = *(void **)(unaff_EBP - 0x2b68);
                  *(int *)(unaff_EBP - 0x2bb8) = iVar17;
                  iVar17 = FUN_004e2320(pvVar29,1);
                  *(int *)(unaff_EBP - 0x2b98) = iVar17;
                  iVar17 = FUN_004e2320(puVar27 + 6,1);
                  *(int *)(unaff_EBP - 0x2bbc) = iVar17;
                  puVar47 = (uint *)FUN_004014b0(*(void **)(unaff_EBP - 0x2b98),
                                                 (int *)(unaff_EBP - 0x3484));
                  pvVar29 = (void *)FUN_00401530(*(void **)(unaff_EBP - 0x2bbc),
                                                 (int *)(unaff_EBP - 0x31c4));
                  uVar18 = FUN_004ce380(pvVar29,puVar47);
                  if ((char)uVar18 != '\0') {
                    iVar17 = FUN_004013d0(*(void **)(unaff_EBP - 0x2b38),2);
                    pvVar29 = *(void **)(unaff_EBP - 0x2b68);
                    *(int *)(unaff_EBP - 0x2b38) = iVar17;
                    iVar17 = FUN_004e2320(pvVar29,2);
                    *(int *)(unaff_EBP - 0x2b94) = iVar17;
                    iVar17 = FUN_004e2320(puVar27 + 6,2);
                    *(int *)(unaff_EBP - 0x2ba8) = iVar17;
                    puVar47 = (uint *)FUN_004014b0(*(void **)(unaff_EBP - 0x2b94),
                                                   (int *)(unaff_EBP - 0x36f4));
                    pvVar29 = (void *)FUN_00401530(*(void **)(unaff_EBP - 0x2ba8),
                                                   (int *)(unaff_EBP - 0x31d4));
                    uVar18 = FUN_004ce380(pvVar29,puVar47);
                    if ((char)uVar18 != '\0') {
                      puVar47 = (uint *)FUN_00401530(*(void **)(unaff_EBP - 0x2b48),
                                                     (int *)(unaff_EBP - 0x3494));
                      pvVar29 = (void *)FUN_004014b0(*(void **)(unaff_EBP - 0x2b90),
                                                     (int *)(unaff_EBP - 0x31a4));
                      uVar18 = FUN_004ce350(pvVar29,puVar47);
                      if ((char)uVar18 != '\0') {
                        puVar47 = (uint *)FUN_00401530(*(void **)(unaff_EBP - 0x2b98),
                                                       (int *)(unaff_EBP - 0x35f4));
                        pvVar29 = (void *)FUN_004014b0(*(void **)(unaff_EBP - 0x2bbc),
                                                       (int *)(unaff_EBP - 0x31f4));
                        uVar18 = FUN_004ce350(pvVar29,puVar47);
                        if ((char)uVar18 != '\0') {
                          puVar47 = (uint *)FUN_00401530(*(void **)(unaff_EBP - 0x2b94),
                                                         (int *)(unaff_EBP - 0x34a4));
                          pvVar29 = (void *)FUN_004014b0(*(void **)(unaff_EBP - 0x2ba8),
                                                         (int *)(unaff_EBP - 0x3204));
                          uVar18 = FUN_004ce350(pvVar29,puVar47);
                          if ((char)uVar18 != '\0') {
                            puVar23 = (uint *)0x5476f7;
                            cVar3 = FUN_004d4d80(puVar27 + 6,*(uint **)(unaff_EBP - 0x2b68),'\x01',
                                                 200.0);
                            if (cVar3 != '\0') {
                              if (*(int *)(*(int *)(unaff_EBP - 0x2b54) + 0x128) != 0) {
                                if (pvVar52 != (void *)0x0) {
                                  FUN_00530690((void *)((int)pvVar52 + 0x11b4),
                                               (undefined4 *)(unaff_EBP - 0xd0),
                                               (uint *)(*(int *)(unaff_EBP - 0x2b54) + 8));
                                }
                                goto LAB_00547c9b;
                              }
                              uVar18 = puVar27[0x18];
                              if (((uVar18 == 0) && ((char)puVar27[0x17] == '\0')) ||
                                 (((uVar18 == 1 || (uVar18 == 4)) && ((char)puVar27[0x17] == '\0')))
                                 ) {
LAB_005477df:
                                if (uVar18 != 3) {
                                  uVar54 = *(uint *)(unaff_EBP - 0x2b58) & 0xff;
                                  if (uVar18 != 2) {
                                    uVar54 = 1;
                                  }
                                  *(uint *)(unaff_EBP - 0x2b58) = uVar54;
                                }
                                pvVar52 = *(void **)(unaff_EBP - 0x2b84);
                                if ((((char)puVar27[0x17] == '\0') && (uVar18 != 3)) &&
                                   ((uVar18 != 1 && ((uVar18 != 4 && (pvVar52 != (void *)0x0)))))) {
                                  iVar17 = rand();
                                  uVar18 = puVar27[0x18];
                                  fVar56 = (1.0 - ((float)iVar17 * 2.0) / 32767.0) * 0.05 + 0.1;
                                  *(float *)(unaff_EBP - 0x2b38) = fVar56;
                                  if (uVar18 == 2) {
                                    *(float *)(unaff_EBP - 0x2b38) = fVar56 * 0.2;
                                  }
                                  iVar17 = FUN_004084b0((int)pvVar52);
                                  *(float *)(unaff_EBP - 0x2b38) =
                                       ((float)iVar17 / 300.0) * *(float *)(unaff_EBP - 0x2b38);
                                  uVar18 = rand();
                                  uVar18 = uVar18 & 0x80000007;
                                  bVar5 = uVar18 == 0;
                                  if ((int)uVar18 < 0) {
                                    bVar5 = (uVar18 - 1 | 0xfffffff8) == 0xffffffff;
                                  }
                                  fVar56 = *(float *)(unaff_EBP - 0x2b38);
                                  if (bVar5) {
                                    fVar56 = fVar56 * 2.0;
                                  }
                                  if (((*(char *)(*(int *)(unaff_EBP - 0x2b18) + 0xb4) == '\0') ||
                                      (pvVar52 == *(void **)(*(int *)(unaff_EBP - 0x2b18) + 0xb8)))
                                     && (fVar56 = *(float *)((int)pvVar52 + 0x170) + fVar56,
                                        *(float *)((int)pvVar52 + 0x170) = fVar56, 1.0 < fVar56)) {
                                    *(undefined4 *)((int)pvVar52 + 0x170) = 0x3f800000;
                                  }
                                }
                                bVar5 = false;
                                *(undefined1 *)(unaff_EBP - 0x2b40) = 0;
                                if (pvVar52 != (void *)0x0) {
                                  bVar5 = FUN_0040f520((int)pvVar52);
                                  *(bool *)(unaff_EBP - 0x2b40) = bVar5;
                                }
                                fVar56 = (float)puVar27[0x12];
                                *(float *)(unaff_EBP - 0x2b78) = fVar56;
                                if (bVar5 != false) {
                                  fVar56 = fVar56 * 2.0;
                                  *(float *)(unaff_EBP - 0x2b78) = fVar56;
                                }
                                pvVar29 = *(void **)(unaff_EBP - 0x2b4c);
                                if ((pvVar29 != (void *)0x0) &&
                                   ((pvVar29 == *(void **)(*(int *)(unaff_EBP - 0x2b18) + 0xb8) ||
                                    ((*(char *)(*(int *)(unaff_EBP - 0x2b18) + 0xb4) == '\0' &&
                                     (*(char *)((int)pvVar29 + 0x60) != '\0')))))) {
                                  bVar5 = FUN_0040f220(pvVar29,0.15);
                                  pvVar29 = *(void **)(unaff_EBP - 0x2b4c);
                                  if ((bVar5) &&
                                     ((((char)puVar27[0x17] == '\0' &&
                                       (*(char *)((int)pvVar29 + 0x140) == '\x02')) &&
                                      (*(char *)((int)pvVar29 + 0x141) == '\x01')))) {
                                    FUN_004029b0((undefined1 *)(unaff_EBP - 0x2f64));
                                    pvVar29 = *(void **)(unaff_EBP - 0x2b4c);
                                    *(undefined1 *)(unaff_EBP - 0x2f64) = 10;
                                    *(undefined4 *)(unaff_EBP - 0x2f5c) = 30000;
                                    FUN_00411740(pvVar29,(char *)(unaff_EBP - 0x2f64));
                                    FUN_004063d0(unaff_EBP - 0x240);
                                    uVar24 = *(undefined4 *)(*(int *)(unaff_EBP - 0x2b4c) + 8);
                                    uVar64 = *(undefined4 *)(*(int *)(unaff_EBP - 0x2b4c) + 0xc);
                                    *(undefined8 *)(unaff_EBP - 0x230) =
                                         *(undefined8 *)(unaff_EBP - 0x2f64);
                                    uVar1 = *(undefined8 *)(unaff_EBP - 0x2f5c);
                                    *(undefined4 *)(unaff_EBP - 0x23c) = uVar64;
                                    *(undefined4 *)(unaff_EBP - 0x234) = uVar64;
                                    iVar17 = *(int *)(unaff_EBP - 0x2b28);
                                    *(undefined4 *)(unaff_EBP - 0x240) = uVar24;
                                    *(undefined4 *)(unaff_EBP - 0x238) = uVar24;
                                    *(undefined8 *)(unaff_EBP - 0x228) = uVar1;
                                    *(undefined8 *)(unaff_EBP - 0x220) =
                                         *(undefined8 *)(unaff_EBP - 0x2f54);
                                    FUN_00411040((void *)(iVar17 + 0x58),
                                                 (undefined8 *)(unaff_EBP - 0x240));
                                    FUN_004c8530(unaff_EBP - 0x1ec);
                                    iVar17 = *(int *)(unaff_EBP - 0x2b4c);
                                    *(undefined4 *)(unaff_EBP - 0x1e0) = 0x2f;
                                    FUN_00402550((void *)(unaff_EBP - 0x1ec),
                                                 (longlong *)(iVar17 + 0x10));
                                    FUN_00428590((void *)(*(int *)(unaff_EBP - 0x2b28) + 8),
                                                 (undefined4 *)(unaff_EBP - 0x1ec));
                                    pvVar29 = *(void **)(unaff_EBP - 0x2b4c);
                                  }
                                  fVar56 = *(float *)(unaff_EBP - 0x2b78);
                                }
                                if (fVar56 < 0.0) {
                                  *(undefined4 *)(unaff_EBP - 0x2b78) = 0;
                                }
                                if ((char)puVar27[0x19] == '\x02') {
                                  if (((pvVar29 == (void *)0x0) ||
                                      (uVar24 = FUN_004cfcc0((int)pvVar29,
                                                             *(int *)(unaff_EBP - 0x2b54)),
                                      (char)uVar24 != '\0')) ||
                                     (*(char *)(*(int *)(unaff_EBP - 0x2b54) + 0x60) == '\x06')) {
                                    if ((char)puVar27[0x19] != '\x02') goto LAB_00547be8;
                                    goto LAB_00547c6a;
                                  }
                                  FUN_00422a90(unaff_EBP - 0xa28);
                                  FUN_00402a40((void *)(unaff_EBP - 0xa08),
                                               *(undefined4 **)(unaff_EBP - 0x2b68));
                                  fVar56 = *(float *)(unaff_EBP - 0x2b78);
                                  iVar17 = *(int *)(unaff_EBP - 0x2b4c);
                                  *(float *)(unaff_EBP - 0xa18) = -fVar56;
                                  if (*(char *)(iVar17 + 0x60) == '\x01') {
                                    *(float *)(unaff_EBP - 0xa18) = -fVar56 * 0.5;
                                  }
                                  iVar17 = *(int *)(unaff_EBP - 0x2b54);
                                  *(undefined1 *)(unaff_EBP - 0xa14) =
                                       *(undefined1 *)(unaff_EBP - 0x2b40);
                                  *(uint *)(unaff_EBP - 0xa28) = *puVar27;
                                  *(uint *)(unaff_EBP - 0xa24) = puVar27[1];
                                  *(undefined4 *)(unaff_EBP - 0xa20) = *(undefined4 *)(iVar17 + 8);
                                  pvVar29 = *(void **)(unaff_EBP - 0x2b28);
                                  *(undefined4 *)(unaff_EBP - 0xa1c) = *(undefined4 *)(iVar17 + 0xc)
                                  ;
                                  FUN_00428400(pvVar29,(undefined4 *)(unaff_EBP - 0xa28));
                                  pvVar29 = *(void **)(unaff_EBP - 0x2b18);
                                  if (*(char *)((int)pvVar29 + 0xb4) == '\0') {
LAB_00547bbe:
                                    FUN_004cea80(pvVar29,(uint *)(unaff_EBP - 0xa28),
                                                 *(void **)(unaff_EBP - 0x2b28),
                                                 (undefined4 *)(unaff_EBP - 0x2be8));
                                    goto LAB_00547c6a;
                                  }
                                  iVar17 = *(int *)(unaff_EBP - 0x2b54);
                                  if ((*(int *)(unaff_EBP - 0x2b4c) == *(int *)((int)pvVar29 + 0xb8)
                                      ) && (iVar17 == *(int *)((int)pvVar29 + 0xb8)))
                                  goto LAB_00547bbe;
                                }
                                else {
LAB_00547be8:
                                  cVar3 = '\x01';
                                  iVar17 = FUN_0052eb90((int *)(unaff_EBP - 0x2b50));
                                  puVar23 = (uint *)(unaff_EBP - 0x2be8);
                                  cVar3 = FUN_004cfd50(*(void **)(unaff_EBP - 0x2b18),
                                                       *(float *)(unaff_EBP - 0x2b54),pvVar52,
                                                       *(float *)(unaff_EBP - 0x2b78),
                                                       (char)*(undefined4 *)(unaff_EBP - 0x2b40),
                                                       (char)puVar27[0x17],(float)puVar27[0x15],
                                                       puVar27 + 6,(float *)(unaff_EBP - 0xb0),
                                                       *(undefined4 **)(unaff_EBP - 0x2b28),puVar23,
                                                       puVar27[0x18] == 1,0,iVar17,cVar3);
                                  uVar18 = *(uint *)(unaff_EBP - 0x2b64) & 0xff;
                                  if (cVar3 != '\0') {
                                    uVar18 = 1;
                                  }
                                  *(uint *)(unaff_EBP - 0x2b64) = uVar18;
LAB_00547c6a:
                                  iVar17 = *(int *)(unaff_EBP - 0x2b54);
                                }
                                if (*(int *)(iVar17 + 0x134) < (int)puVar27[0x1b]) {
                                  *(uint *)(iVar17 + 0x134) = puVar27[0x1b];
                                }
                              }
                              else {
                                if (uVar18 == 3) {
                                  uVar18 = puVar27[0x18];
                                  if ((int)puVar27[0x1a] / 1000 !=
                                      (int)(puVar27[0x1a] - *(int *)(unaff_EBP - 0x2b24)) / 1000)
                                  goto LAB_005477df;
                                  pvVar52 = *(void **)(unaff_EBP - 0x2b84);
                                }
                                if (((300 < (int)puVar27[0x1a]) && (uVar18 == 2)) &&
                                   ((int)puVar27[0x1a] / 100 !=
                                    (int)(puVar27[0x1a] - *(int *)(unaff_EBP - 0x2b24)) / 100)) {
                                  uVar18 = puVar27[0x18];
                                  goto LAB_005477df;
                                }
                              }
                              uVar18 = puVar27[0x18];
                              if (((uVar18 == 0) || (uVar18 == 1)) || (uVar18 == 4)) {
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
              piVar20 = (int *)FUN_00530550(*(void **)(unaff_EBP - 0x2b6c),
                                            (undefined4 *)(unaff_EBP - 0x2d5c));
              bVar5 = FUN_0042c6f0((void *)(unaff_EBP - 0x2bac),piVar20);
            } while (bVar5);
          }
          if (puVar27[0x18] != 3) {
            if ((puVar27[0x18] == 2) &&
               ((int)puVar27[0x1a] / 200 !=
                (int)(puVar27[0x1a] - *(int *)(unaff_EBP - 0x2b24)) / 200)) {
              FUN_004c8530(unaff_EBP - 0x1d4);
              FUN_00402550((void *)(unaff_EBP - 0x1d4),(longlong *)(puVar27 + 6));
              iVar19 = rand();
              iVar17 = *(int *)(unaff_EBP - 0x2b28);
              *(undefined4 *)(unaff_EBP - 0x1c8) = 0xf;
              *(float *)(unaff_EBP - 0x1c4) = ((float)iVar19 * 0.25) / 32767.0 + 1.0;
              FUN_00428590((void *)(iVar17 + 8),(undefined4 *)(unaff_EBP - 0x1d4));
            }
            FUN_00402510(unaff_EBP - 0x368);
            puVar47 = puVar27 + 6;
            FUN_00402e30(puVar47,(uint *)(unaff_EBP - 0x368));
            uVar18 = puVar27[0x13];
            FUN_00401080((void *)(unaff_EBP - 0x16ac),uVar18,uVar18,uVar18);
            FUN_00402510(unaff_EBP - 0x458);
            FUN_00402c50(puVar47,(uint *)(unaff_EBP - 0x24fc),(uint *)(unaff_EBP - 0x458));
            uVar18 = puVar27[0x13];
            FUN_00401080((void *)(unaff_EBP - 0x16c4),uVar18,uVar18,uVar18);
            FUN_00402510(unaff_EBP - 0x4a0);
            FUN_00402cb0(puVar47,(uint *)(unaff_EBP - 0x252c),(uint *)(unaff_EBP - 0x4a0));
            *(undefined1 *)(unaff_EBP - 0x2b31) = 0;
            iVar17 = FUN_004e2320(puVar47,2);
            *(int *)(unaff_EBP - 0x2b38) = iVar17;
            iVar17 = FUN_004e2320(puVar47,1);
            *(int *)(unaff_EBP - 0x2b1c) = iVar17;
            puVar46 = (uint *)FUN_004e2320(puVar47,0);
            puVar45 = *(uint **)(unaff_EBP - 0x2b38);
            uVar18 = puVar45[1];
            *(uint **)(unaff_EBP - 0x2b44) = puVar46;
            puVar23 = (uint *)**(undefined4 **)(unaff_EBP - 0x2b1c);
            iVar17 = FUN_00406050(*(void **)(unaff_EBP - 0x2b18),*puVar46,puVar46[1],(uint)puVar23,
                                  (*(undefined4 **)(unaff_EBP - 0x2b1c))[1],*puVar45,uVar18,0);
            uVar24 = FUN_004061f0(iVar17);
            if ((char)uVar24 == '\0') {
              fVar55 = FUN_00401d80((float *)(puVar27 + 0xf));
              *(float *)(unaff_EBP - 0x2b44) = (float)fVar55;
              fVar56 = *(float *)(unaff_EBP - 0x2b44) * *(float *)(unaff_EBP - 0x2ba0);
              uVar60 = 0x100000000;
              pfVar25 = (float *)(unaff_EBP - 0x170c);
              *(float *)(unaff_EBP - 0x2b44) = fVar56;
              pfVar26 = FUN_00412670(puVar27 + 0xf,(float *)(unaff_EBP - 0x1724));
              pfVar25 = FUN_0052ec30(pfVar26,pfVar25);
              puVar23 = puVar47;
              fVar55 = (float10)FUN_004d6730(*(void **)(unaff_EBP - 0x2b18),puVar47,pfVar25,fVar56,
                                             (char)uVar60,(char)(uVar60 >> 0x20));
              *(float *)(unaff_EBP - 0x2b8c) = (float)fVar55;
              if (*(float *)(unaff_EBP - 0x2b8c) <= *(float *)(unaff_EBP - 0x2b44) &&
                  *(float *)(unaff_EBP - 0x2b44) != *(float *)(unaff_EBP - 0x2b8c)) {
                *(undefined1 *)(unaff_EBP - 0x2b31) = 1;
                FUN_00402510(unaff_EBP - 0x9b0);
                FUN_00402e80(puVar47,(uint *)(unaff_EBP - 0x9b0));
              }
LAB_00548093:
              cVar3 = *(char *)(unaff_EBP - 0x2b31);
            }
            else {
              FUN_00402510(unaff_EBP - 0x488);
              FUN_00402e80(puVar47,(uint *)(unaff_EBP - 0x488));
              uVar18 = puVar27[0x18];
              cVar3 = '\x01';
              *(undefined1 *)(unaff_EBP - 0x2b31) = 1;
              if (uVar18 == 0) {
                FUN_004c8510(unaff_EBP - 0x968);
                pfVar25 = (float *)(unaff_EBP - 0x2c0);
                fVar56 = 255.0;
                pbVar48 = (byte *)FUN_00406050(*(void **)(unaff_EBP - 0x2b18),
                                               **(uint **)(unaff_EBP - 0x2b44),
                                               (*(uint **)(unaff_EBP - 0x2b44))[1],
                                               **(uint **)(unaff_EBP - 0x2b1c),
                                               (*(uint **)(unaff_EBP - 0x2b1c))[1],
                                               **(uint **)(unaff_EBP - 0x2b38),
                                               (*(uint **)(unaff_EBP - 0x2b38))[1],0);
                pfVar26 = FUN_004c6470((void *)(unaff_EBP - 0x16dc),pbVar48);
                FUN_004f7a70(pfVar26,pfVar25,fVar56);
                uVar66 = 0x3f800000;
                puVar12 = (undefined4 *)FUN_004013d0((void *)(unaff_EBP - 0x2c0),2);
                uVar24 = *puVar12;
                puVar12 = (undefined4 *)FUN_004013d0((void *)(unaff_EBP - 0x2c0),1);
                uVar64 = *puVar12;
                puVar12 = (undefined4 *)FUN_004013d0((void *)(unaff_EBP - 0x2c0),0);
                puVar23 = (uint *)0x547f87;
                ppVar28 = (pair<unsigned___int64,unsigned___int64> *)
                          FUN_004010b0((void *)(unaff_EBP - 0x1b9c),*puVar12,uVar64,uVar24,uVar66);
                std::pair<unsigned___int64,unsigned___int64>::
                operator=<std::pair<unsigned___int64,unsigned___int64>,0>
                          ((pair<unsigned___int64,unsigned___int64> *)(unaff_EBP - 0x944),ppVar28);
                *(undefined4 *)(unaff_EBP - 0x930) = 4;
                *(undefined4 *)(unaff_EBP - 0x934) = 0x3dcccccd;
                puVar12 = FUN_00401080((void *)(unaff_EBP - 0x16f4),0,0,0x41200000);
                FUN_00401060((void *)(unaff_EBP - 0x950),puVar12);
                FUN_00402a40((void *)(unaff_EBP - 0x968),puVar47);
                FUN_00428540((void *)(*(int *)(unaff_EBP - 0x2b28) + 0x10),
                             (undefined4 *)(unaff_EBP - 0x968));
                goto LAB_00548093;
              }
            }
            cVar7 = (char)*(undefined4 *)(unaff_EBP - 0x2b58);
            pvVar52 = *(void **)(unaff_EBP - 0x2b84);
            if ((((cVar7 == '\0') && (cVar3 != '\0')) && (puVar27[0x18] != 3)) &&
               (pvVar52 != (void *)0x0)) {
              fVar55 = FUN_00412150((int)pvVar52);
              *(float *)(unaff_EBP - 0x2b44) = (float)fVar55;
              *(undefined4 *)((int)pvVar52 + 0x70) = 0;
              fVar55 = FUN_00412150((int)pvVar52);
              *(float *)(unaff_EBP - 0x2b8c) = (float)fVar55;
              *(int *)((int)pvVar52 + 0x6c) =
                   (int)((*(float *)(unaff_EBP - 0x2b44) / *(float *)(unaff_EBP - 0x2b8c)) *
                        (float)*(int *)((int)pvVar52 + 0x6c));
              cVar7 = (char)*(undefined4 *)(unaff_EBP - 0x2b58);
            }
            if (puVar27[0x18] == 2) {
              if (((char)*(undefined4 *)(unaff_EBP - 0x2b64) != '\0') && (pvVar52 != (void *)0x0)) {
                *(int *)((int)pvVar52 + 0x70) = *(int *)((int)pvVar52 + 0x70) + 1;
                FUN_004103a0((int)pvVar52);
                *(undefined4 *)((int)pvVar52 + 0x74) = 0;
              }
              if (*(char *)(unaff_EBP - 0x2b31) != '\0') {
                if (puVar27[0x18] != 2) {
                  FUN_004c8530(unaff_EBP - 0x1b0);
                  FUN_00402550((void *)(unaff_EBP - 0x1b0),(longlong *)(puVar27 + 6));
                  iVar19 = rand();
                  iVar17 = *(int *)(unaff_EBP - 0x2b28);
                  *(undefined4 *)(unaff_EBP - 0x1a4) = 0x13;
                  *(float *)(unaff_EBP - 0x1a0) = ((float)iVar19 * 0.4) / 32767.0 + 1.0;
                  FUN_00428590((void *)(iVar17 + 8),(undefined4 *)(unaff_EBP - 0x1b0));
                  goto LAB_00546b28;
                }
                puVar12 = FUN_00401080((void *)(unaff_EBP - 0x173c),0,0,0);
                FUN_00401060(puVar27 + 0xf,puVar12);
              }
            }
            else if ((cVar7 != '\0') || (*(char *)(unaff_EBP - 0x2b31) != '\0')) {
              if ((puVar27[0x18] == 1) || ((char)puVar27[0x17] != '\0')) {
                if (cVar7 == '\0') {
                  FUN_004c8530(unaff_EBP - 0x7c);
                  FUN_00402550((void *)(unaff_EBP - 0x7c),(longlong *)(puVar27 + 6));
                  iVar17 = rand();
                  uVar18 = puVar27[0x18];
                  *(float *)(unaff_EBP - 0x6c) = ((float)iVar17 * 0.4) / 32767.0 + 1.0;
                  if (uVar18 == 1) {
                    uVar24 = 0x27;
                    if ((char)puVar27[0x19] == '\x02') {
                      uVar24 = 0x2a;
                    }
                    *(undefined4 *)(unaff_EBP - 0x70) = uVar24;
                  }
                  else {
                    *(undefined4 *)(unaff_EBP - 0x70) = 0x14;
                  }
                  FUN_00428590((void *)(*(int *)(unaff_EBP - 0x2b28) + 8),
                               (undefined4 *)(unaff_EBP - 0x7c));
                }
                pvVar29 = *(void **)(unaff_EBP - 0x2b6c);
                *(char *)(unaff_EBP - 0x2bfc) = (char)puVar27[0x17];
                FUN_00428070(pvVar29,(undefined4 *)(unaff_EBP - 0x2bdc));
                piVar20 = (int *)FUN_00530550(*(void **)(unaff_EBP - 0x2b6c),
                                              (undefined4 *)(unaff_EBP - 0x2d64));
                bVar5 = FUN_0042c6f0((void *)(unaff_EBP - 0x2bdc),piVar20);
                if (bVar5) {
                  iVar17 = FUN_004e2320(puVar27 + 6,0);
                  *(int *)(unaff_EBP - 0x2b48) = iVar17;
                  iVar17 = FUN_004e2320(puVar27 + 6,1);
                  *(int *)(unaff_EBP - 0x2bb8) = iVar17;
                  iVar17 = FUN_004e2320(puVar27 + 6,2);
                  *(int *)(unaff_EBP - 0x2b98) = iVar17;
                  do {
                    iVar17 = FUN_00402bc0((int *)(unaff_EBP - 0x2bdc));
                    pvVar29 = *(void **)(iVar17 + 8);
                    *(void **)(unaff_EBP - 0x2b68) = pvVar29;
                    if (pvVar29 != (void *)0x0) {
                      iVar17 = *(int *)(unaff_EBP - 0x2b4c);
                      if (((iVar17 != 0) && (*(char *)(*(int *)(unaff_EBP - 0x2b18) + 0xb4) == '\0')
                          ) && ((*(char *)(iVar17 + 0x60) == '\0' &&
                                (iVar17 != *(int *)(*(int *)(unaff_EBP - 0x2b18) + 0xb8))))) break;
                      if ((pvVar52 == (void *)0x0) ||
                         (((pvVar29 != pvVar52 &&
                           (uVar24 = FUN_004d18c0((int)pvVar52,(int)pvVar29), (char)uVar24 != '\0'))
                          && (((pvVar29 = *(void **)(unaff_EBP - 0x2b68),
                               *(int *)((int)pvVar29 + 8) != *(int *)((int)pvVar52 + 0x11c0) ||
                               (*(int *)((int)pvVar29 + 0xc) != *(int *)((int)pvVar52 + 0x11c4))) &&
                              (0.0 < *(float *)((int)pvVar29 + 0x16c))))))) {
                        *(void **)(unaff_EBP - 0x2b38) = (void *)((int)pvVar29 + 0x80);
                        iVar17 = FUN_004013d0((void *)((int)pvVar29 + 0x80),0);
                        *(int *)(unaff_EBP - 0x2b1c) = iVar17;
                        pvVar29 = (void *)(*(int *)(unaff_EBP - 0x2b68) + 0x10);
                        *(void **)(unaff_EBP - 0x2b94) = pvVar29;
                        pvVar29 = (void *)FUN_004e2320(pvVar29,0);
                        *(void **)(unaff_EBP - 0x2b44) = pvVar29;
                        puVar47 = (uint *)FUN_004014b0(pvVar29,(int *)(unaff_EBP - 0x36a4));
                        pvVar29 = (void *)FUN_00401530(*(void **)(unaff_EBP - 0x2b48),
                                                       (int *)(unaff_EBP - 0x3214));
                        uVar18 = FUN_004ce380(pvVar29,puVar47);
                        if ((char)uVar18 != '\0') {
                          iVar17 = FUN_004013d0(*(void **)(unaff_EBP - 0x2b38),1);
                          pvVar29 = *(void **)(unaff_EBP - 0x2b94);
                          *(int *)(unaff_EBP - 0x2b90) = iVar17;
                          pvVar29 = (void *)FUN_004e2320(pvVar29,1);
                          *(void **)(unaff_EBP - 0x2b8c) = pvVar29;
                          puVar47 = (uint *)FUN_004014b0(pvVar29,(int *)(unaff_EBP - 0x34b4));
                          pvVar29 = (void *)FUN_00401530(*(void **)(unaff_EBP - 0x2bb8),
                                                         (int *)(unaff_EBP - 0x3224));
                          uVar18 = FUN_004ce380(pvVar29,puVar47);
                          if ((char)uVar18 != '\0') {
                            iVar17 = FUN_004013d0(*(void **)(unaff_EBP - 0x2b38),2);
                            pvVar29 = *(void **)(unaff_EBP - 0x2b94);
                            *(int *)(unaff_EBP - 0x2b38) = iVar17;
                            pvVar29 = (void *)FUN_004e2320(pvVar29,2);
                            *(void **)(unaff_EBP - 0x2bcc) = pvVar29;
                            puVar47 = (uint *)FUN_004014b0(pvVar29,(int *)(unaff_EBP - 0x3604));
                            pvVar29 = (void *)FUN_00401530(*(void **)(unaff_EBP - 0x2b98),
                                                           (int *)(unaff_EBP - 0x3234));
                            uVar18 = FUN_004ce380(pvVar29,puVar47);
                            if ((char)uVar18 != '\0') {
                              puVar47 = (uint *)FUN_00401530(*(void **)(unaff_EBP - 0x2b44),
                                                             (int *)(unaff_EBP - 0x34c4));
                              pvVar29 = (void *)FUN_004014b0(*(void **)(unaff_EBP - 0x2b48),
                                                             (int *)(unaff_EBP - 0x3244));
                              uVar18 = FUN_004ce350(pvVar29,puVar47);
                              if ((char)uVar18 != '\0') {
                                puVar47 = (uint *)FUN_00401530(*(void **)(unaff_EBP - 0x2b8c),
                                                               (int *)(unaff_EBP - 0x3724));
                                pvVar29 = (void *)FUN_004014b0(*(void **)(unaff_EBP - 0x2bb8),
                                                               (int *)(unaff_EBP - 0x3254));
                                uVar18 = FUN_004ce350(pvVar29,puVar47);
                                if ((char)uVar18 != '\0') {
                                  puVar47 = (uint *)FUN_00401530(*(void **)(unaff_EBP - 0x2bcc),
                                                                 (int *)(unaff_EBP - 0x34d4));
                                  pvVar29 = (void *)FUN_004014b0(*(void **)(unaff_EBP - 0x2b98),
                                                                 (int *)(unaff_EBP - 0x3264));
                                  uVar18 = FUN_004ce350(pvVar29,puVar47);
                                  if ((char)uVar18 != '\0') {
                                    puVar23 = (uint *)0x548637;
                                    cVar3 = FUN_004d4d80(puVar27 + 6,*(uint **)(unaff_EBP - 0x2b94),
                                                         '\x01',200.0);
                                    if (cVar3 != '\0') {
                                      if ((*(int *)(*(int *)(unaff_EBP - 0x2b68) + 0x128) == 0) ||
                                         (pvVar52 == (void *)0x0)) {
                                        iVar17 = *(int *)(unaff_EBP - 0x2b4c);
                                        uVar18 = extraout_ECX & 0xffffff00;
                                        *(undefined1 *)(unaff_EBP - 0x2c00) = 0;
                                        *(uint *)(unaff_EBP - 0x2b44) = uVar18;
                                        pvVar29 = (void *)0x0;
                                        if (iVar17 != 0) {
                                          bVar5 = FUN_0040f520(iVar17);
                                          uVar18 = *(uint *)(unaff_EBP - 0x2b44) & 0xff;
                                          if (bVar5) {
                                            uVar18 = 1;
                                          }
                                          pvVar29 = *(void **)(unaff_EBP - 0x2b4c);
                                          *(char *)(unaff_EBP - 0x2c00) = (char)uVar18;
                                        }
                                        fVar56 = (float)puVar27[0x12];
                                        *(float *)(unaff_EBP - 0x2b38) = fVar56;
                                        if ((char)uVar18 != '\0') {
                                          *(float *)(unaff_EBP - 0x2b38) = fVar56 * 2.0;
                                        }
                                        if (((pvVar29 != (void *)0x0) &&
                                            ((pvVar29 ==
                                              *(void **)(*(int *)(unaff_EBP - 0x2b18) + 0xb8) ||
                                             ((*(char *)(*(int *)(unaff_EBP - 0x2b18) + 0xb4) ==
                                               '\0' && (*(char *)((int)pvVar29 + 0x60) != '\0'))))))
                                           && ((bVar5 = FUN_0040f220(pvVar29,0.25), bVar5 &&
                                               (((*(char *)(unaff_EBP - 0x2bfc) == '\0' &&
                                                 (puVar27[0x18] == 1)) &&
                                                ((char)puVar27[0x19] == '\x01')))))) {
                                          FUN_004029b0((undefined1 *)(unaff_EBP - 0x2f7c));
                                          pvVar29 = *(void **)(unaff_EBP - 0x2b4c);
                                          *(undefined1 *)(unaff_EBP - 0x2f7c) = 9;
                                          *(undefined4 *)(unaff_EBP - 0x2f74) = 30000;
                                          FUN_00411740(pvVar29,(char *)(unaff_EBP - 0x2f7c));
                                          FUN_004063d0(unaff_EBP - 0x2e6c);
                                          uVar24 = *(undefined4 *)(*(int *)(unaff_EBP - 0x2b4c) + 8)
                                          ;
                                          uVar64 = *(undefined4 *)
                                                    (*(int *)(unaff_EBP - 0x2b4c) + 0xc);
                                          *(undefined8 *)(unaff_EBP - 0x2e5c) =
                                               *(undefined8 *)(unaff_EBP - 0x2f7c);
                                          uVar1 = *(undefined8 *)(unaff_EBP - 0x2f74);
                                          *(undefined4 *)(unaff_EBP - 0x2e68) = uVar64;
                                          *(undefined4 *)(unaff_EBP - 0x2e60) = uVar64;
                                          iVar17 = *(int *)(unaff_EBP - 0x2b28);
                                          *(undefined4 *)(unaff_EBP - 0x2e6c) = uVar24;
                                          *(undefined4 *)(unaff_EBP - 0x2e64) = uVar24;
                                          *(undefined8 *)(unaff_EBP - 0x2e54) = uVar1;
                                          *(undefined8 *)(unaff_EBP - 0x2e4c) =
                                               *(undefined8 *)(unaff_EBP - 0x2f6c);
                                          FUN_00411040((void *)(iVar17 + 0x58),
                                                       (undefined8 *)(unaff_EBP - 0x2e6c));
                                          FUN_004c8530(unaff_EBP - 0x204);
                                          iVar17 = *(int *)(unaff_EBP - 0x2b4c);
                                          *(undefined4 *)(unaff_EBP - 0x1f8) = 0x2f;
                                          FUN_00402550((void *)(unaff_EBP - 0x204),
                                                       (longlong *)(iVar17 + 0x10));
                                          FUN_00428590((void *)(*(int *)(unaff_EBP - 0x2b28) + 8),
                                                       (undefined4 *)(unaff_EBP - 0x204));
                                        }
                                        cVar3 = '\x01';
                                        iVar17 = FUN_0052eb90((int *)(unaff_EBP - 0x2b50));
                                        puVar23 = (uint *)(unaff_EBP - 0x2be8);
                                        cVar3 = FUN_004cfd50(*(void **)(unaff_EBP - 0x2b18),
                                                             *(float *)(unaff_EBP - 0x2b68),pvVar52,
                                                             *(float *)(unaff_EBP - 0x2b38),
                                                             (char)*(undefined4 *)
                                                                    (unaff_EBP - 0x2c00),
                                                             (char)*(undefined4 *)
                                                                    (unaff_EBP - 0x2bfc),
                                                             (float)puVar27[0x15],puVar27 + 6,
                                                             (float *)(unaff_EBP - 0xb0),
                                                             *(undefined4 **)(unaff_EBP - 0x2b28),
                                                             puVar23,puVar27[0x18] == 1,0,iVar17,
                                                             cVar3);
                                        uVar4 = (undefined1)*(undefined4 *)(unaff_EBP - 0x2b64);
                                        if (cVar3 != '\0') {
                                          uVar4 = 1;
                                        }
                                        *(undefined1 *)(unaff_EBP - 0x2b64) = uVar4;
                                      }
                                      else {
                                        FUN_00530690((void *)((int)pvVar52 + 0x11b4),
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
                    piVar20 = (int *)FUN_00530550(*(void **)(unaff_EBP - 0x2b6c),
                                                  (undefined4 *)(unaff_EBP - 0x2d64));
                    bVar5 = FUN_0042c6f0((void *)(unaff_EBP - 0x2bdc),piVar20);
                  } while (bVar5);
                }
              }
              if ((((char)*(undefined4 *)(unaff_EBP - 0x2b64) != '\0') && (puVar27[0x18] != 3)) &&
                 (pvVar52 != (void *)0x0)) {
                *(int *)((int)pvVar52 + 0x70) = *(int *)((int)pvVar52 + 0x70) + 1;
                FUN_004103a0((int)pvVar52);
                *(undefined4 *)((int)pvVar52 + 0x74) = 0;
              }
              if ((puVar27[0x18] != 1) || ((char)puVar27[0x19] != '\x02')) goto LAB_00546b28;
              puVar27[0x18] = 3;
              uVar18 = 3000;
              if ((char)puVar27[0x17] != '\0') {
                uVar18 = 0;
              }
              puVar27[0x1a] = uVar18;
              puVar27[0x12] = (uint)((float)puVar27[0x12] * 0.05);
              puVar27[0x13] = (uint)((float)puVar27[0x15] * 5.0 + 5.0);
              puVar27[0x15] = 0;
              *(undefined1 *)(puVar27 + 0x17) = 0;
              break;
            }
          }
          iVar17 = *(int *)(unaff_EBP - 0x2c04) + 1;
          *(int *)(unaff_EBP - 0x2c04) = iVar17;
          if (*(int *)(unaff_EBP - 0x2c08) <= iVar17) break;
          pvVar52 = *(void **)(unaff_EBP - 0x2b84);
        } while( true );
      }
    }
    else {
      if (puVar27[0x18] != 2) {
        pfVar25 = (float *)FUN_004013d0(puVar27 + 0xf,2);
        *pfVar25 = *pfVar25 - *(float *)(unaff_EBP - 0x2ba0) * 30.0 * 0.25;
        goto LAB_00546a5d;
      }
      uVar54 = 0x5468ae;
      puVar47 = puVar27;
      uVar18 = FUN_00405420(*(void **)(unaff_EBP - 0x2b18),puVar27);
      *(uint *)(unaff_EBP - 0x2b8c) = uVar18;
      if ((uVar18 != 0) && (uVar49 = puVar27[0x1a], (int)uVar49 < 0x4b1)) {
        if ((int)uVar49 < 0x44d) {
          if ((int)uVar49 < 0x321) {
            FUN_00402510(unaff_EBP - 0x344);
            pfVar25 = (float *)(unaff_EBP - 0x167c);
            iVar17 = *(int *)(unaff_EBP - 0x2b24);
            fVar58 = 0.05;
            fVar56 = 5.0;
            puVar23 = puVar27 + 6;
            puVar47 = (uint *)(unaff_EBP - 0x249c);
            puVar45 = FUN_00402cb0((void *)(uVar18 + 0x10),(uint *)(unaff_EBP - 0x24cc),
                                   (uint *)(unaff_EBP - 0x344));
            puVar23 = FUN_00402c50(puVar45,puVar47,puVar23);
            pfVar26 = FUN_00402550((void *)(unaff_EBP - 0x1694),(longlong *)puVar23);
            puVar32 = (undefined8 *)FUN_004079f0(pfVar26,pfVar25,fVar56);
            puVar23 = (uint *)0x546a2a;
            FUN_0052e7c0((float *)(puVar27 + 0xf),puVar32,iVar17,fVar58);
          }
          else {
            pfVar25 = (float *)(unaff_EBP - 0x164c);
            fVar56 = 10.0;
            puVar23 = (uint *)0x546995;
            puVar47 = FUN_00402c50((void *)(uVar18 + 0x10),(uint *)(unaff_EBP - 0x246c),puVar27 + 6)
            ;
            pfVar26 = FUN_00402550((void *)(unaff_EBP - 0x1664),(longlong *)puVar47);
            puVar12 = (undefined4 *)FUN_004079f0(pfVar26,pfVar25,fVar56);
            FUN_00401060(puVar27 + 0xf,puVar12);
          }
        }
        else {
          *(float *)(unaff_EBP - 0x2b44) = (float)(int)(uVar49 - 0x44c) / 100.0;
          puVar45 = puVar27 + 6;
          iVar17 = 0x546906;
          FUN_00402a10((ulonglong *)&stack0xfffffff8);
          puVar12 = (undefined4 *)(unaff_EBP - 0x23ac);
          FUN_00402a10((ulonglong *)&stack0xffffffec);
          puVar31 = (undefined4 *)(unaff_EBP - 0x23dc);
          puVar46 = FUN_00402c50((void *)(*(int *)(unaff_EBP - 0x2b8c) + 0x10),
                                 (uint *)(unaff_EBP - 0x240c),puVar45);
          puVar31 = FUN_00402bd0(puVar46,puVar31,(uint)puVar23,iVar17);
          puVar47 = FUN_00402bd0(puVar31,puVar12,uVar54,(int)puVar47);
          puVar47 = FUN_00402cb0(puVar45,(uint *)(unaff_EBP - 0x243c),puVar47);
          FUN_00402a40(puVar45,puVar47);
        }
        goto LAB_00546a5d;
      }
LAB_00546b28:
      FUN_004d6620((void *)(unaff_EBP - 0x2c20),(undefined4 *)(unaff_EBP - 0x2b50));
    }
    FUN_0052ebf0((void *)(unaff_EBP - 0x2b50),(undefined4 *)(unaff_EBP - 0x2bc0));
    pvVar52 = (void *)(*(int *)(unaff_EBP - 0x2b18) + 0x14);
    piVar20 = (int *)FUN_00530550(pvVar52,(undefined4 *)(unaff_EBP - 0x2d6c));
    bVar5 = FUN_0042c6f0((void *)(unaff_EBP - 0x2b50),piVar20);
  } while( true );
LAB_005414e8:
  pvVar29 = *(void **)(unaff_EBP - 0x2b18);
LAB_005414ee:
  pCVar36 = (CRefTime *)FUN_004e2320(*(void **)(unaff_EBP - 0x2b60),0);
  *(CRefTime **)(unaff_EBP - 0x2b3c) = pCVar36;
  lVar37 = CRefTime::Millisecs(pCVar36);
  iVar17 = (int)((lVar37 >> 0x1f & 7U) + lVar37) >> 3;
  pCVar36 = (CRefTime *)FUN_004e2320(*(void **)(unaff_EBP - 0x2b60),1);
  *(CRefTime **)(unaff_EBP - 0x2bbc) = pCVar36;
  lVar37 = CRefTime::Millisecs(pCVar36);
  uVar18 = iVar17 - 1;
  iVar17 = iVar17 + 1;
  iVar19 = (int)(lVar37 + (lVar37 >> 0x1f & 7U)) >> 3;
  *(uint *)(unaff_EBP - 0x2b20) = uVar18;
  *(int *)(unaff_EBP - 0x2be0) = iVar17;
  if (iVar17 < (int)uVar18) {
    if (*(char *)(unaff_EBP - 0x2b31) == '\0') goto LAB_00541a70;
LAB_00541f0c:
    cVar3 = *(char *)(unaff_EBP - 0x2b29);
    iVar17 = *(int *)(unaff_EBP - 0x2b54);
LAB_00541f18:
    if (iVar17 == 2) {
      pvVar29 = *(void **)(unaff_EBP - 0x2b18);
      pfVar25 = *(float **)(unaff_EBP - 0x2bb4);
      if ((*(int *)((int)pvVar29 + 0xb8) == 0) || (-2.0 < *pfVar25 || *pfVar25 == -2.0)) {
        plVar30 = *(longlong **)(unaff_EBP - 0x2b60);
      }
      else {
        FUN_004c8530(unaff_EBP - 0x470);
        *(undefined4 *)(unaff_EBP - 0x464) = 0x20;
        iVar17 = rand();
        plVar30 = *(longlong **)(unaff_EBP - 0x2b60);
        *(float *)(unaff_EBP - 0x460) = ((float)iVar17 * 0.2) / 32767.0 + 1.0;
        FUN_00402550((void *)(unaff_EBP - 0x470),plVar30);
        iVar17 = *(int *)(unaff_EBP - 0x2b28);
        *(undefined4 *)(unaff_EBP - 0x45c) = 0x3f000000;
        FUN_00428590((void *)(iVar17 + 8),(undefined4 *)(unaff_EBP - 0x470));
        pfVar25 = *(float **)(unaff_EBP - 0x2bb4);
      }
      if (((*(byte *)(*(int *)(unaff_EBP - 0x2b14) + 0x5c) & 2) == 0) &&
         (*pfVar25 <= -5.0 && *pfVar25 != -5.0)) {
        puVar23 = (uint *)FUN_004e2320(plVar30,2);
        puVar27 = (uint *)FUN_004f7a30((int *)(unaff_EBP - 0x3424),
                                       *(undefined4 *)(*(int *)(unaff_EBP - 0x2b14) + 0x13bc),
                                       puVar23);
        uVar24 = FUN_00402d40(puVar27);
        if (((char)uVar24 != '\0') &&
           (*(int *)(unaff_EBP - 0x2b14) == *(int *)((int)pvVar29 + 0xb8))) {
          puVar38 = (ulonglong *)(unaff_EBP - 0x3684);
          FUN_0040fda0(*(int *)(unaff_EBP - 0x2b14));
          puVar65 = (ulonglong *)(unaff_EBP - 0x3434);
          piVar20 = (int *)(unaff_EBP - 0x35c4);
          uVar18 = 1;
          puVar44 = (ulonglong *)(unaff_EBP - 0x3444);
          FUN_004f7a30((int *)(unaff_EBP - 0x3734),
                       *(undefined4 *)(*(int *)(unaff_EBP - 0x2b14) + 0x13bc),puVar23);
          puVar44 = FUN_004ce310(puVar44);
          FUN_00405660(puVar44,piVar20,uVar18);
          FUN_0052ebb0(puVar65);
          puVar38 = FUN_0052ebb0(puVar38);
          fVar55 = FUN_00401420((longlong *)puVar38);
          *(float *)(unaff_EBP - 0x2b98) = (float)fVar55;
          iVar17 = *(int *)(unaff_EBP - 0x2b14);
          *(float *)(iVar17 + 0x16c) = *(float *)(iVar17 + 0x16c) - *(float *)(unaff_EBP - 0x2b98);
          iVar19 = *(int *)(iVar17 + 300);
          iVar17 = FUN_0040ffe0(iVar17);
          if (iVar19 <= iVar17) {
            iVar19 = FUN_0040ffe0(*(int *)(unaff_EBP - 0x2b14));
          }
          iVar17 = *(int *)(unaff_EBP - 0x2b14);
          *(int *)(iVar17 + 300) = iVar19;
          plVar30 = (longlong *)(iVar17 + 0x10);
          FUN_00405570(plVar30,1,'\0');
          FUN_004c8530(unaff_EBP - 0x1b0);
          FUN_00402550((void *)(unaff_EBP - 0x1b0),plVar30);
          iVar17 = *(int *)(unaff_EBP - 0x2b28);
          *(undefined4 *)(unaff_EBP - 0x1a0) = 0x3f800000;
          *(undefined4 *)(unaff_EBP - 0x1a4) = 0x17;
          FUN_00428590((void *)(iVar17 + 8),(undefined4 *)(unaff_EBP - 0x1b0));
          iVar17 = *(int *)(unaff_EBP - 0x2b14);
          if (*(float *)(iVar17 + 0x16c) <= 0.0 && *(float *)(iVar17 + 0x16c) != 0.0) {
            *(undefined4 *)(iVar17 + 0x16c) = 0;
          }
          FUN_00422a90(unaff_EBP - 0x7b8);
          *(undefined4 *)(unaff_EBP - 0x7b0) = *(undefined4 *)(iVar17 + 8);
          *(undefined4 *)(unaff_EBP - 0x7ac) = *(undefined4 *)(iVar17 + 0xc);
          *(undefined8 *)(unaff_EBP - 0x7b8) = 0;
          *(undefined4 *)(unaff_EBP - 0x7a8) = *(undefined4 *)(unaff_EBP - 0x2b98);
          FUN_00402a40((void *)(unaff_EBP - 0x798),(undefined4 *)(iVar17 + 0x10));
          pvVar52 = *(void **)(unaff_EBP - 0x2b28);
          *(undefined1 *)(unaff_EBP - 0x7a4) = 0;
          FUN_00428400(pvVar52,(undefined4 *)(unaff_EBP - 0x7b8));
        }
      }
      FUN_004013d0((void *)(unaff_EBP - 0x1c),2);
      FUN_00402a10((ulonglong *)(unaff_EBP - 0x3000));
      plVar30 = (longlong *)FUN_004e2320(*(void **)(unaff_EBP - 0x2b60),2);
      FUN_00402eb0(plVar30,(uint *)(unaff_EBP - 0x3000));
      pvVar52 = *(void **)(unaff_EBP - 0x2b74);
      **(undefined4 **)(unaff_EBP - 0x2bb4) = 0;
      puVar12 = (undefined4 *)FUN_004013d0(pvVar52,2);
      *puVar12 = 0;
      fVar55 = FUN_00401420(plVar30);
      iVar17 = *(int *)(unaff_EBP - 0x2b14);
      *(float *)(iVar17 + 0x13bc) = (float)fVar55;
      goto LAB_00542a38;
    }
    iVar17 = *(int *)(unaff_EBP - 0x2b14);
    if ((cVar3 == '\0') || ((*(ushort *)(iVar17 + 0x7e) & 0x100) != 0)) {
      pvVar29 = *(void **)(unaff_EBP - 0x2b18);
LAB_005429f1:
      FUN_00402a10((ulonglong *)(unaff_EBP - 0x300c));
      FUN_00402eb0(*(void **)(unaff_EBP - 0x2b90),(uint *)(unaff_EBP - 0x300c));
      goto LAB_00542a38;
    }
    pfVar25 = *(float **)(unaff_EBP - 0x2bb0);
    *(undefined1 *)(unaff_EBP - 0x2b31) = 0;
    FUN_004e1520((float *)(unaff_EBP - 0x119c),0.5,pfVar25);
    FUN_00402510(unaff_EBP - 0x1a48);
    FUN_00401080((void *)(unaff_EBP - 0x11b4),0,0,0x3f8147ae);
    FUN_00402510(unaff_EBP - 0x1a6c);
    puVar23 = (uint *)(unaff_EBP - 0x1a48);
    puVar27 = (uint *)(unaff_EBP - 0x1e3c);
    puVar47 = FUN_00402cb0(*(void **)(unaff_EBP - 0x2b60),(uint *)(unaff_EBP - 0x1e6c),
                           (uint *)(unaff_EBP - 0x1a6c));
    puVar23 = FUN_00402c50(puVar47,puVar27,puVar23);
    FUN_00405450((int *)(unaff_EBP - 0x2e4),puVar23);
    FUN_004e1520((float *)(unaff_EBP - 0x11cc),0.5,pfVar25);
    FUN_00402510(unaff_EBP - 0x1a90);
    FUN_00401080((void *)(unaff_EBP - 0x11e4),0,0,0x3f8147ae);
    FUN_00402510(unaff_EBP - 0x1ab4);
    puVar23 = (uint *)(unaff_EBP - 0x1a90);
    puVar27 = (uint *)(unaff_EBP - 0x1e9c);
    puVar47 = FUN_00402cb0(*(void **)(unaff_EBP - 0x2b60),(uint *)(unaff_EBP - 0x1ecc),
                           (uint *)(unaff_EBP - 0x1ab4));
    puVar23 = FUN_00402cb0(puVar47,puVar27,puVar23);
    FUN_00405450((int *)(unaff_EBP - 0x350),puVar23);
    piVar20 = (int *)FUN_004013d0((void *)(unaff_EBP - 0x2e4),0);
    iVar17 = *piVar20;
    *(int *)(unaff_EBP - 0x2b3c) = iVar17;
    piVar20 = (int *)FUN_004013d0((void *)(unaff_EBP - 0x350),0);
    *(int **)(unaff_EBP - 0x2b98) = piVar20;
    if (iVar17 <= *piVar20) {
      puVar23 = (uint *)FUN_004013d0((void *)(unaff_EBP - 0x2e4),1);
      *(uint **)(unaff_EBP - 0x2bd8) = puVar23;
      piVar20 = (int *)FUN_004013d0((void *)(unaff_EBP - 0x350),1);
      piVar53 = *(int **)(unaff_EBP - 0x2b98);
      *(int **)(unaff_EBP - 0x2b20) = piVar20;
      do {
        uVar18 = *puVar23;
        if ((int)uVar18 <= *piVar20) {
          piVar34 = (int *)FUN_004013d0((void *)(unaff_EBP - 0x2e4),2);
          *(int **)(unaff_EBP - 0x2be0) = piVar34;
          piVar20 = (int *)FUN_004013d0((void *)(unaff_EBP - 0x350),2);
          piVar53 = *(int **)(unaff_EBP - 0x2b20);
          *(int **)(unaff_EBP - 0x2b9c) = piVar20;
          do {
            iVar17 = *piVar34;
            if (iVar17 <= *piVar20) {
              do {
                puVar35 = FUN_00405fd0(*(void **)(unaff_EBP - 0x2b18),*(uint *)(unaff_EBP - 0x2b3c),
                                       uVar18,iVar17,0);
                uVar24 = FUN_004061f0((int)puVar35);
                if ((char)uVar24 != '\0') {
                  pvVar29 = *(void **)(unaff_EBP - 0x2b18);
                  goto LAB_005429eb;
                }
                piVar20 = *(int **)(unaff_EBP - 0x2b9c);
                iVar17 = iVar17 + 1;
              } while (iVar17 <= *piVar20);
              piVar53 = *(int **)(unaff_EBP - 0x2b20);
            }
            piVar34 = *(int **)(unaff_EBP - 0x2be0);
            uVar18 = uVar18 + 1;
          } while ((int)uVar18 <= *piVar53);
          iVar17 = *(int *)(unaff_EBP - 0x2b3c);
          piVar20 = *(int **)(unaff_EBP - 0x2b20);
          piVar53 = *(int **)(unaff_EBP - 0x2b98);
        }
        puVar23 = *(uint **)(unaff_EBP - 0x2bd8);
        iVar17 = iVar17 + 1;
        *(int *)(unaff_EBP - 0x2b3c) = iVar17;
      } while (iVar17 <= *piVar53);
    }
    pvVar29 = *(void **)(unaff_EBP - 0x2b18);
    FUN_00428070((void *)((int)pvVar29 + 0xc),(undefined4 *)(unaff_EBP - 0x2bfc));
    piVar20 = (int *)FUN_00530550((void *)((int)pvVar29 + 0xc),(undefined4 *)(unaff_EBP - 0x2e3c));
    bVar5 = FUN_0042c6f0((void *)(unaff_EBP - 0x2bfc),piVar20);
    if (bVar5) {
      do {
        if (*(char *)(unaff_EBP - 0x2b31) != '\0') goto LAB_005429eb;
        iVar17 = FUN_00402bc0((int *)(unaff_EBP - 0x2bfc));
        pvVar52 = *(void **)(unaff_EBP - 0x2b60);
        piVar20 = (int *)(iVar17 + 8);
        *(int **)(unaff_EBP - 0x2bbc) = piVar20;
        puVar23 = FUN_00402c50(pvVar52,(uint *)(unaff_EBP - 0x1efc),(uint *)(*piVar20 + 0x80));
        pfVar25 = FUN_00402550((void *)(unaff_EBP - 0x11fc),(longlong *)puVar23);
        fVar55 = FUN_004021b0(pfVar25);
        *(float *)(unaff_EBP - 0x2b9c) = (float)fVar55;
        if ((*(float *)(unaff_EBP - 0x2b9c) <= 4096.0) && (iVar17 = *piVar20, iVar17 != 0)) {
          iVar19 = FUN_004013f0((void *)((int)pvVar29 + 0x1c),0xa03);
          *(int *)(unaff_EBP - 0x2b9c) = iVar19;
          if (iVar19 != 0) {
            FUN_00401cd0((undefined4 *)(unaff_EBP - 0x1060));
            iVar39 = FUN_00402170(iVar19);
            fVar56 = (float)iVar39 * 0.5;
            iVar39 = FUN_00402160(iVar19);
            fVar58 = (float)iVar39 * 0.5;
            iVar19 = FUN_00402150(iVar19);
            FUN_004023b0((void *)(unaff_EBP - 0x1060),(float)iVar19 * 0.5,fVar58,fVar56);
            FUN_00402030((void *)(unaff_EBP - 0x1060),-*(float *)(iVar17 + 0x98));
            puVar23 = FUN_00402c50(*(void **)(unaff_EBP - 0x2b60),(uint *)(unaff_EBP - 0x1f2c),
                                   (uint *)(iVar17 + 0x80));
            FUN_00402550((void *)(unaff_EBP - 0x290),(longlong *)puVar23);
            FUN_004022e0((void *)(unaff_EBP - 0x1060),(float *)(unaff_EBP - 0x290));
            pfVar26 = *(float **)(unaff_EBP - 0x2bb0);
            pfVar40 = (float *)FUN_004e1520((float *)(unaff_EBP - 0x1214),0.5,pfVar26);
            pfVar25 = (float *)(unaff_EBP - 0x122c);
            pfVar41 = (float *)FUN_00401080((void *)(unaff_EBP - 0x1244),0,0,0x3f8147ae);
            pfVar41 = FUN_004021f0((void *)(unaff_EBP - 0x1060),(float *)(unaff_EBP - 0x125c),
                                   pfVar41);
            FUN_00401450(pfVar41,pfVar25,pfVar40);
            FUN_00402510(unaff_EBP - 0x1ad8);
            FUN_00405450((int *)(unaff_EBP - 0x2fc),(uint *)(unaff_EBP - 0x1ad8));
            pfVar26 = (float *)FUN_004e1520((float *)(unaff_EBP - 0x1274),0.5,pfVar26);
            pfVar25 = (float *)(unaff_EBP - 0x128c);
            pfVar40 = (float *)FUN_00401080((void *)(unaff_EBP - 0x12a4),0,0,0x3f8147ae);
            pfVar40 = FUN_004021f0((void *)(unaff_EBP - 0x1060),(float *)(unaff_EBP - 0x12bc),
                                   pfVar40);
            FUN_004014f0(pfVar40,pfVar25,pfVar26);
            FUN_00402510(unaff_EBP - 0x1b08);
            FUN_00405450((int *)(unaff_EBP - 0x32c),(uint *)(unaff_EBP - 0x1b08));
            piVar20 = (int *)FUN_004013d0((void *)(unaff_EBP - 0x2fc),0);
            iVar17 = *piVar20;
            *(int *)(unaff_EBP - 0x2b3c) = iVar17;
            piVar20 = (int *)FUN_004013d0((void *)(unaff_EBP - 0x32c),0);
            *(int **)(unaff_EBP - 0x2b98) = piVar20;
            if (iVar17 <= *piVar20) {
              piVar34 = (int *)FUN_004013d0((void *)(unaff_EBP - 0x2fc),1);
              *(int **)(unaff_EBP - 0x2cc4) = piVar34;
              piVar20 = (int *)FUN_004013d0((void *)(unaff_EBP - 0x32c),1);
              piVar53 = *(int **)(unaff_EBP - 0x2b98);
              *(int **)(unaff_EBP - 0x2b20) = piVar20;
              while( true ) {
                iVar19 = *piVar34;
                if (iVar19 <= *piVar20) {
                  piVar34 = (int *)FUN_004013d0((void *)(unaff_EBP - 0x2fc),2);
                  *(int **)(unaff_EBP - 0x2bd8) = piVar34;
                  piVar20 = (int *)FUN_004013d0((void *)(unaff_EBP - 0x32c),2);
                  piVar53 = *(int **)(unaff_EBP - 0x2b20);
                  *(int **)(unaff_EBP - 0x2be0) = piVar20;
                  do {
                    iVar17 = *piVar34;
                    if (iVar17 <= *piVar20) {
                      do {
                        puVar42 = FUN_00401040((void *)(unaff_EBP - 0x2e8c),0,0,0);
                        puVar43 = FUN_00430730(*(void **)(unaff_EBP - 0x2b9c),
                                               *(int *)(unaff_EBP - 0x2b3c),iVar19,iVar17);
                        cVar3 = FUN_004079c0(puVar43,(int)puVar42);
                        if (cVar3 != '\0') {
                          iVar17 = *(int *)(unaff_EBP - 0x2b14);
                          iVar19 = **(int **)(unaff_EBP - 0x2bbc);
                          *(undefined1 *)(unaff_EBP - 0x2b31) = 1;
                          FUN_00530690((void *)(iVar19 + 0x78),(undefined4 *)(unaff_EBP - 0xd0),
                                       (uint *)(iVar17 + 8));
                          pvVar29 = *(void **)(unaff_EBP - 0x2b18);
                          goto LAB_00542886;
                        }
                        piVar20 = *(int **)(unaff_EBP - 0x2be0);
                        iVar17 = iVar17 + 1;
                      } while (iVar17 <= *piVar20);
                      piVar53 = *(int **)(unaff_EBP - 0x2b20);
                    }
                    piVar34 = *(int **)(unaff_EBP - 0x2bd8);
                    iVar19 = iVar19 + 1;
                  } while (iVar19 <= *piVar53);
                  iVar17 = *(int *)(unaff_EBP - 0x2b3c);
                  piVar20 = *(int **)(unaff_EBP - 0x2b20);
                  piVar53 = *(int **)(unaff_EBP - 0x2b98);
                }
                iVar17 = iVar17 + 1;
                *(int *)(unaff_EBP - 0x2b3c) = iVar17;
                if (*piVar53 < iVar17) break;
                piVar34 = *(int **)(unaff_EBP - 0x2cc4);
              }
            }
          }
          pvVar29 = *(void **)(unaff_EBP - 0x2b18);
        }
        iVar17 = *(int *)(unaff_EBP - 0x2b14);
LAB_00542886:
        FUN_00407a30((void *)(unaff_EBP - 0x2bfc),(int *)(unaff_EBP - 0x2c44));
        piVar20 = (int *)FUN_00530550((void *)((int)pvVar29 + 0xc),
                                      (undefined4 *)(unaff_EBP - 0x2e3c));
        bVar5 = FUN_0042c6f0((void *)(unaff_EBP - 0x2bfc),piVar20);
      } while (bVar5);
      if (*(char *)(unaff_EBP - 0x2b31) != '\0') goto LAB_005429f1;
    }
    puVar12 = (undefined4 *)FUN_004e2320(*(void **)(unaff_EBP - 0x2b60),2);
    FUN_00402eb0(puVar12,(uint *)(unaff_EBP - 0x2dac));
    *(undefined4 *)(unaff_EBP - 0x2da0) = *puVar12;
    *(undefined4 *)(unaff_EBP - 0x2d9c) = puVar12[1];
    pfVar25 = (float *)FUN_004013d0(*(void **)(unaff_EBP - 0x2bb0),2);
    *(float *)(unaff_EBP - 0x2b9c) = *pfVar25 * 0.5;
    FUN_004014b0((void *)(unaff_EBP - 0x2da0),(int *)(unaff_EBP - 0x3044));
    piVar20 = (int *)(unaff_EBP - 0x35d4);
    piVar53 = (int *)(unaff_EBP - 0x3464);
    uVar60 = FUN_00405510((uint *)(unaff_EBP - 0x3044));
    piVar34 = FUN_004cde40((void *)(unaff_EBP - 0x3694),(uint)uVar60);
    pvVar52 = (void *)FUN_00401530(piVar34,piVar53);
    puVar31 = (undefined4 *)FUN_004ce290(pvVar52,piVar20);
    FUN_004cde20(puVar12,puVar31);
    puVar23 = (uint *)FUN_004014b0((void *)(unaff_EBP - 0x2da0),(int *)(unaff_EBP - 0x3474));
    plVar30 = (longlong *)FUN_00401490(puVar12,(int *)(unaff_EBP - 0x35e4),puVar23);
    fVar55 = FUN_00401420(plVar30);
    *(float *)(*(int *)(unaff_EBP - 0x2b14) + 0x1180) = (float)fVar55;
    FUN_00402e60(puVar12,(uint *)(unaff_EBP - 0x2dac));
  }
  else {
    uVar54 = iVar19 - 1;
    iVar19 = iVar19 + 1;
    *(uint *)(unaff_EBP - 0x2b9c) = uVar54;
    *(int *)(unaff_EBP - 0x2bd8) = iVar19;
    while( true ) {
      *(uint *)(unaff_EBP - 0x2b98) = uVar54;
      if (iVar19 < (int)uVar54) {
        if (*(char *)(unaff_EBP - 0x2b31) != '\0') goto LAB_00541f0c;
      }
      else {
        do {
          pvVar52 = (void *)FUN_0041c9e0(pvVar29,uVar18,uVar54,0);
          *(void **)(unaff_EBP - 0x2cc4) = pvVar52;
          if (pvVar52 != (void *)0x0) {
            FUN_00428070(pvVar52,(undefined4 *)(unaff_EBP - 0x2ca4));
            piVar20 = (int *)FUN_00530550(pvVar52,(undefined4 *)(unaff_EBP - 0x2e2c));
            bVar5 = FUN_0042c6f0((void *)(unaff_EBP - 0x2ca4),piVar20);
            if (bVar5) {
              do {
                puVar23 = (uint *)FUN_0052eb90((int *)(unaff_EBP - 0x2ca4));
                iVar17 = *(int *)*puVar23;
                if (((iVar17 != 7) && (iVar17 != 6)) && (iVar17 != 9)) {
                  iVar17 = *(int *)(unaff_EBP - 0x2b14);
                  piVar20 = (int *)FUN_00530550((void *)(iVar17 + 0x1468),
                                                (undefined4 *)(unaff_EBP - 0x2ff8));
                  pvVar52 = (void *)FUN_004db1b0((void *)(iVar17 + 0x1468),
                                                 (int *)(unaff_EBP - 0x3004),puVar23);
                  bVar5 = FUN_0042c6f0(pvVar52,piVar20);
                  if (!bVar5) {
                    piVar20 = (int *)*puVar23;
                    iVar17 = *piVar20;
                    if (((((iVar17 != 1) && (iVar17 != 8)) && (iVar17 != 2)) &&
                        ((iVar17 != 3 && (iVar17 != 5)))) || ((char)piVar20[0xc] != '\0')) {
                      FUN_00401060((void *)(unaff_EBP - 0x144),piVar20 + 9);
                      uVar18 = *(uint *)(*puVar23 + 0x20) & 0x80000001;
                      bVar5 = uVar18 == 0;
                      if ((int)uVar18 < 0) {
                        bVar5 = (uVar18 - 1 | 0xfffffffe) == 0xffffffff;
                      }
                      if (!bVar5) {
                        puVar12 = (undefined4 *)FUN_004013d0((void *)(unaff_EBP - 0x144),1);
                        puVar31 = (undefined4 *)FUN_004013d0((void *)(unaff_EBP - 0x144),0);
                        FUN_004c8170(puVar31,puVar12);
                      }
                      puVar38 = (ulonglong *)(unaff_EBP - 0x343c);
                      puVar27 = (uint *)FUN_004e2320((void *)(*puVar23 + 8),
                                                     *(int *)(unaff_EBP - 0x2b54));
                      FUN_00401490(*(void **)(unaff_EBP - 0x2b90),(int *)(unaff_EBP - 0x33a4),
                                   puVar27);
                      puVar38 = FUN_0052ebb0(puVar38);
                      uVar24 = FUN_0052ec80((uint *)puVar38);
                      if ((char)uVar24 == '\0') {
                        FUN_004013d0((void *)(unaff_EBP - 0x144),0);
                        piVar20 = (int *)(unaff_EBP - 0x3664);
                        pvVar52 = (void *)FUN_004e2320((void *)(*puVar23 + 8),0);
                        puVar27 = (uint *)FUN_004014b0(pvVar52,piVar20);
                        pvVar52 = (void *)FUN_00401530(*(void **)(unaff_EBP - 0x2b3c),
                                                       (int *)(unaff_EBP - 0x33b4));
                        uVar18 = FUN_004ce380(pvVar52,puVar27);
                        if ((char)uVar18 != '\0') {
                          piVar20 = (int *)(unaff_EBP - 0x3714);
                          pvVar52 = (void *)FUN_004e2320((void *)(*puVar23 + 8),0);
                          puVar27 = (uint *)FUN_00401530(pvVar52,piVar20);
                          pvVar52 = (void *)FUN_004014b0(*(void **)(unaff_EBP - 0x2b3c),
                                                         (int *)(unaff_EBP - 0x33d4));
                          uVar18 = FUN_004ce350(pvVar52,puVar27);
                          if ((char)uVar18 != '\0') {
                            FUN_004013d0((void *)(unaff_EBP - 0x144),1);
                            iVar17 = FUN_004013d0(*(void **)(unaff_EBP - 0x2bb0),1);
                            uVar18 = *puVar23;
                            *(int *)(unaff_EBP - 0x2b70) = iVar17;
                            piVar20 = (int *)(unaff_EBP - 0x3594);
                            pvVar52 = (void *)FUN_004e2320((void *)(uVar18 + 8),1);
                            puVar27 = (uint *)FUN_004014b0(pvVar52,piVar20);
                            pvVar52 = (void *)FUN_00401530(*(void **)(unaff_EBP - 0x2bbc),
                                                           (int *)(unaff_EBP - 0x33e4));
                            uVar18 = FUN_004ce380(pvVar52,puVar27);
                            if ((char)uVar18 != '\0') {
                              piVar20 = (int *)(unaff_EBP - 0x3674);
                              pvVar52 = (void *)FUN_004e2320((void *)(*puVar23 + 8),1);
                              puVar27 = (uint *)FUN_00401530(pvVar52,piVar20);
                              pvVar52 = (void *)FUN_004014b0(*(void **)(unaff_EBP - 0x2bbc),
                                                             (int *)(unaff_EBP - 0x33f4));
                              uVar18 = FUN_004ce350(pvVar52,puVar27);
                              if ((char)uVar18 != '\0') {
                                FUN_004013d0(*(void **)(unaff_EBP - 0x2bb0),2);
                                iVar17 = FUN_004e2320(*(void **)(unaff_EBP - 0x2b60),2);
                                uVar18 = *puVar23;
                                *(int *)(unaff_EBP - 0x2b70) = iVar17;
                                puVar27 = (uint *)FUN_004e2320((void *)(uVar18 + 8),2);
                                pvVar52 = (void *)FUN_00401530(*(void **)(unaff_EBP - 0x2b70),
                                                               (int *)(unaff_EBP - 0x35a4));
                                uVar18 = FUN_004ce380(pvVar52,puVar27);
                                if ((char)uVar18 != '\0') {
                                  FUN_004013d0((void *)(unaff_EBP - 0x144),2);
                                  piVar20 = (int *)(unaff_EBP - 0x3404);
                                  pvVar52 = (void *)FUN_004e2320((void *)(*puVar23 + 8),2);
                                  puVar23 = (uint *)FUN_00401530(pvVar52,piVar20);
                                  pvVar52 = (void *)FUN_004014b0(*(void **)(unaff_EBP - 0x2b70),
                                                                 (int *)(unaff_EBP - 0x36e4));
                                  uVar18 = FUN_004ce350(pvVar52,puVar23);
                                  if ((char)uVar18 != '\0') {
                                    iVar17 = *(int *)(unaff_EBP - 0x2b54);
                                    if (iVar17 == 2) {
                                      uVar18 = *(uint *)(unaff_EBP - 0x2bac) & 0xff;
                                      if (**(float **)(unaff_EBP - 0x2bb4) <= 0.0 &&
                                          **(float **)(unaff_EBP - 0x2bb4) != 0.0) {
                                        uVar18 = 1;
                                      }
                                      *(uint *)(unaff_EBP - 0x2bac) = uVar18;
                                    }
                                    cVar3 = '\0';
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
                piVar20 = (int *)FUN_00530550(*(void **)(unaff_EBP - 0x2cc4),
                                              (undefined4 *)(unaff_EBP - 0x2e2c));
                bVar5 = FUN_0042c6f0((void *)(unaff_EBP - 0x2ca4),piVar20);
              } while (bVar5);
              uVar54 = *(uint *)(unaff_EBP - 0x2b98);
            }
          }
          if (*(char *)(unaff_EBP - 0x2b31) != '\0') goto LAB_00541f0c;
          iVar19 = *(int *)(unaff_EBP - 0x2bd8);
          uVar18 = *(uint *)(unaff_EBP - 0x2b20);
          pvVar29 = *(void **)(unaff_EBP - 0x2b18);
          uVar54 = uVar54 + 1;
          *(uint *)(unaff_EBP - 0x2b98) = uVar54;
        } while ((int)uVar54 <= iVar19);
        iVar17 = *(int *)(unaff_EBP - 0x2be0);
      }
      uVar18 = uVar18 + 1;
      *(uint *)(unaff_EBP - 0x2b20) = uVar18;
      if (iVar17 < (int)uVar18) break;
      uVar54 = *(uint *)(unaff_EBP - 0x2b9c);
      pvVar29 = *(void **)(unaff_EBP - 0x2b18);
    }
LAB_00541a70:
    pvVar29 = *(void **)(unaff_EBP - 0x2b18);
    FUN_00428070((void *)((int)pvVar29 + 0xc),(undefined4 *)(unaff_EBP - 0x2c00));
    piVar20 = (int *)FUN_00530550((void *)((int)pvVar29 + 0xc),(undefined4 *)(unaff_EBP - 0x2e34));
    bVar5 = FUN_0042c6f0((void *)(unaff_EBP - 0x2c00),piVar20);
    if (bVar5) {
      do {
        iVar17 = FUN_00402bc0((int *)(unaff_EBP - 0x2c00));
        pvVar52 = *(void **)(unaff_EBP - 0x2b60);
        piVar20 = (int *)(iVar17 + 8);
        *(int **)(unaff_EBP - 0x2bbc) = piVar20;
        puVar23 = FUN_00402c50(pvVar52,(uint *)(unaff_EBP - 0x2274),(uint *)(*piVar20 + 0x80));
        pfVar25 = FUN_00402550((void *)(unaff_EBP - 0x1568),(longlong *)puVar23);
        fVar55 = FUN_004021b0(pfVar25);
        *(float *)(unaff_EBP - 0x2b9c) = (float)fVar55;
        if ((*(float *)(unaff_EBP - 0x2b9c) <= 4096.0) && (iVar17 = *piVar20, iVar17 != 0)) {
          iVar19 = FUN_004013f0((void *)(*(int *)(unaff_EBP - 0x2b18) + 0x1c),0xa03);
          *(int *)(unaff_EBP - 0x2b98) = iVar19;
          if (iVar19 != 0) {
            FUN_00401cd0((undefined4 *)(unaff_EBP - 0x10a0));
            iVar39 = FUN_00402170(iVar19);
            fVar56 = (float)iVar39 * 0.5;
            iVar39 = FUN_00402160(iVar19);
            fVar58 = (float)iVar39 * 0.5;
            iVar19 = FUN_00402150(iVar19);
            FUN_004023b0((void *)(unaff_EBP - 0x10a0),(float)iVar19 * 0.5,fVar58,fVar56);
            FUN_00402030((void *)(unaff_EBP - 0x10a0),-*(float *)(iVar17 + 0x98));
            puVar23 = FUN_00402c50(*(void **)(unaff_EBP - 0x2b60),(uint *)(unaff_EBP - 0x1e0c),
                                   (uint *)(iVar17 + 0x80));
            FUN_00402550((void *)(unaff_EBP - 0x998),(longlong *)puVar23);
            FUN_004022e0((void *)(unaff_EBP - 0x10a0),(float *)(unaff_EBP - 0x998));
            pfVar26 = *(float **)(unaff_EBP - 0x2bb0);
            pfVar40 = (float *)FUN_004e1520((float *)(unaff_EBP - 0x10e8),0.5,pfVar26);
            pfVar25 = (float *)(unaff_EBP - 0x10f4);
            pfVar41 = (float *)FUN_00401080((void *)(unaff_EBP - 0x110c),0,0,0);
            pfVar41 = FUN_004021f0((void *)(unaff_EBP - 0x10a0),(float *)(unaff_EBP - 0x1124),
                                   pfVar41);
            FUN_00401450(pfVar41,pfVar25,pfVar40);
            FUN_00402510(unaff_EBP - 0x1a00);
            FUN_00405450((int *)(unaff_EBP - 0x2cc),(uint *)(unaff_EBP - 0x1a00));
            pfVar26 = (float *)FUN_004e1520((float *)(unaff_EBP - 0x113c),0.5,pfVar26);
            pfVar25 = (float *)(unaff_EBP - 0x1154);
            pfVar40 = (float *)FUN_00401080((void *)(unaff_EBP - 0x10dc),0,0,0);
            pfVar40 = FUN_004021f0((void *)(unaff_EBP - 0x10a0),(float *)(unaff_EBP - 0x1184),
                                   pfVar40);
            FUN_004014f0(pfVar40,pfVar25,pfVar26);
            FUN_00402510(unaff_EBP - 0x1a24);
            FUN_00405450((int *)(unaff_EBP - 0x374),(uint *)(unaff_EBP - 0x1a24));
            piVar20 = (int *)FUN_004013d0((void *)(unaff_EBP - 0x2cc),0);
            iVar17 = *piVar20;
            *(int *)(unaff_EBP - 0x2b3c) = iVar17;
            piVar20 = (int *)FUN_004013d0((void *)(unaff_EBP - 0x374),0);
            *(int **)(unaff_EBP - 0x2b70) = piVar20;
            if (iVar17 <= *piVar20) {
              piVar34 = (int *)FUN_004013d0((void *)(unaff_EBP - 0x2cc),1);
              *(int **)(unaff_EBP - 0x2bd8) = piVar34;
              piVar20 = (int *)FUN_004013d0((void *)(unaff_EBP - 0x374),1);
              piVar53 = *(int **)(unaff_EBP - 0x2b70);
              *(int **)(unaff_EBP - 0x2b20) = piVar20;
              do {
                iVar19 = *piVar34;
                if (iVar19 <= *piVar20) {
                  piVar34 = (int *)FUN_004013d0((void *)(unaff_EBP - 0x2cc),2);
                  *(int **)(unaff_EBP - 0x2be0) = piVar34;
                  piVar20 = (int *)FUN_004013d0((void *)(unaff_EBP - 0x374),2);
                  piVar53 = *(int **)(unaff_EBP - 0x2b20);
                  *(int **)(unaff_EBP - 0x2b9c) = piVar20;
                  do {
                    iVar17 = *piVar34;
                    if (iVar17 <= *piVar20) {
                      do {
                        puVar42 = FUN_00401040((void *)(unaff_EBP - 0x2e88),0,0,0);
                        puVar43 = FUN_00430730(*(void **)(unaff_EBP - 0x2b98),
                                               *(int *)(unaff_EBP - 0x2b3c),iVar19,iVar17);
                        cVar3 = FUN_004079c0(puVar43,(int)puVar42);
                        if (cVar3 != '\0') {
                          uVar18 = *(uint *)(unaff_EBP - 0x2b94) & 0xff;
                          if (*(int *)(unaff_EBP - 0x2b54) == 2) {
                            uVar18 = 1;
                          }
                          iVar39 = *(int *)(unaff_EBP - 0x2b98);
                          *(undefined1 *)(unaff_EBP - 0x2b31) = 1;
                          *(uint *)(unaff_EBP - 0x2b94) = uVar18;
                          FUN_00402170(iVar39);
                          piVar20 = (int *)(unaff_EBP - 0x3414);
                          pvVar52 = (void *)FUN_004e2320((void *)(**(int **)(unaff_EBP - 0x2bbc) +
                                                                 0x80),2);
                          puVar12 = (undefined4 *)FUN_004014b0(pvVar52,piVar20);
                          FUN_004cde20((void *)(unaff_EBP - 0x2dac),puVar12);
                          FUN_00530690((void *)(**(int **)(unaff_EBP - 0x2bbc) + 0x78),
                                       (undefined4 *)(unaff_EBP - 0x3074),
                                       (uint *)(*(int *)(unaff_EBP - 0x2b14) + 8));
                        }
                        piVar20 = *(int **)(unaff_EBP - 0x2b9c);
                        iVar17 = iVar17 + 1;
                      } while (iVar17 <= *piVar20);
                      piVar53 = *(int **)(unaff_EBP - 0x2b20);
                    }
                    piVar34 = *(int **)(unaff_EBP - 0x2be0);
                    iVar19 = iVar19 + 1;
                  } while (iVar19 <= *piVar53);
                  iVar17 = *(int *)(unaff_EBP - 0x2b3c);
                  piVar20 = *(int **)(unaff_EBP - 0x2b20);
                  piVar53 = *(int **)(unaff_EBP - 0x2b70);
                }
                piVar34 = *(int **)(unaff_EBP - 0x2bd8);
                iVar17 = iVar17 + 1;
                *(int *)(unaff_EBP - 0x2b3c) = iVar17;
              } while (iVar17 <= *piVar53);
            }
          }
        }
        FUN_00407a30((void *)(unaff_EBP - 0x2c00),(int *)(unaff_EBP - 0x2ce0));
        piVar20 = (int *)FUN_00530550((void *)(*(int *)(unaff_EBP - 0x2b18) + 0xc),
                                      (undefined4 *)(unaff_EBP - 0x2e34));
        bVar5 = FUN_0042c6f0((void *)(unaff_EBP - 0x2c00),piVar20);
      } while (bVar5);
      cVar3 = *(char *)(unaff_EBP - 0x2b31);
LAB_00541f04:
      if (cVar3 != '\0') goto LAB_00541f0c;
      pvVar29 = *(void **)(unaff_EBP - 0x2b18);
    }
  }
  iVar17 = *(int *)(unaff_EBP - 0x2b14);
LAB_00542a38:
  iVar19 = *(int *)(unaff_EBP - 0x2b54) + 1;
  *(int *)(unaff_EBP - 0x2b54) = iVar19;
  if (2 < iVar19) goto code_r0x00542a4e;
  goto LAB_00541295;
LAB_005429eb:
  iVar17 = *(int *)(unaff_EBP - 0x2b14);
  goto LAB_005429f1;
code_r0x00542a4e:
  iVar19 = *(int *)(unaff_EBP - 0x2b48) + 1;
  *(int *)(unaff_EBP - 0x2b48) = iVar19;
  if (*(int *)(unaff_EBP - 0x2b1c) <= iVar19) goto LAB_00542a67;
  goto LAB_00541280;
code_r0x005378a1:
  iVar19 = *(int *)(unaff_EBP - 0x2b18);
  if ((*(char *)(iVar17 + 0x60) != '\0') && (*(char *)(iVar19 + 0xb4) == '\0')) {
    *(int *)(iVar17 + 0x13c4) = *(int *)(iVar17 + 0x13c4) + *(int *)(unaff_EBP - 0x2b24);
    if (*(int *)(iVar17 + 300) < 1) {
      if (0x1f < *(int *)(iVar17 + 0x13c4)) {
        if (*(int *)(iVar17 + 0x13e4) != 0) {
          pfVar26 = *(float **)(unaff_EBP - 0x2b14);
          (**(code **)**(undefined4 **)(iVar17 + 0x13e4))();
          iVar17 = *(int *)(unaff_EBP - 0x2b14);
        }
        *(undefined4 *)(iVar17 + 0x13c4) = 0;
      }
      if (0 < *(int *)(iVar17 + 300)) goto LAB_00537920;
    }
    else {
LAB_00537920:
      FUN_00405570((void *)(iVar17 + 0x10),0x80,'\0');
      iVar17 = *(int *)(unaff_EBP - 0x2b14);
    }
    iVar19 = *(int *)(unaff_EBP - 0x2b18);
  }
  if (*(int *)(iVar17 + 100) == 0x90) {
    if (*(char *)(iVar19 + 0xb4) == '\0') {
      fVar56 = *(float *)(iVar17 + 0x16c) - *(float *)(unaff_EBP - 0x2b88) * 0.025;
      *(float *)(iVar17 + 0x16c) = fVar56;
      if (fVar56 < 0.0) {
        *(undefined4 *)(iVar17 + 0x16c) = 0;
      }
      goto LAB_00537987;
    }
LAB_00537ac7:
    unaff_EDI = *(void **)(unaff_EBP - 0x2b18);
  }
  else {
LAB_00537987:
    if (*(char *)(iVar19 + 0xb4) != '\0') goto LAB_00537ac7;
    puVar23 = (uint *)(iVar17 + 0x10);
    FUN_00405570(puVar23,0x80,'\0');
    piVar20 = (int *)(*(int *)(unaff_EBP - 0x2b14) + 0x1460);
    bVar5 = FUN_00530540((int)piVar20);
    iVar17 = *(int *)(unaff_EBP - 0x2b14);
    if (bVar5) goto LAB_00537ac7;
    if (*(int *)(iVar17 + 300) < 1) {
      FUN_00405570(puVar23,4,'\0');
      cVar3 = FUN_004db200(*(void **)(unaff_EBP - 0x2b14),*(int *)(unaff_EBP - 0x2b24));
      if (cVar3 == '\0') {
        bVar5 = FUN_00530540((int)piVar20);
        if (!bVar5) {
          uVar24 = 0x537a17;
          FUN_00405570(puVar23,4,'\x01');
          puVar27 = (uint *)(unaff_EBP - 0x2364);
          uVar61 = 0x3fe0000000000000;
          puVar45 = puVar23;
          FUN_004dab30((ulonglong *)&stack0xfffffff0);
          uVar60 = 0x3fe0000000000000;
          FUN_004dab30((ulonglong *)&stack0xffffffe8);
          FUN_004dab30((ulonglong *)&stack0xffffffe0);
          puVar46 = FUN_00406380((void *)(unaff_EBP - 0x2004),(int)uVar60,(int)(uVar60 >> 0x20),
                                 (int)uVar61,(int)(uVar61 >> 0x20),pfVar26,uVar24);
          puVar47 = (uint *)(unaff_EBP - 0x2604);
          puVar10 = (uint *)FUN_0052eba0(piVar20);
          piVar20 = FUN_004d99d0((void *)(unaff_EBP - 0x2034),puVar10);
          puVar47 = FUN_00402cb0(piVar20,puVar47,puVar46);
          puVar27 = FUN_00402c50(puVar47,puVar27,puVar45);
          FUN_00402550((void *)(*(int *)(unaff_EBP - 0x2b14) + 0x160),(longlong *)puVar27);
        }
        FUN_00405570(puVar23,0x80,'\x01');
        iVar17 = *(int *)(unaff_EBP - 0x2b14);
        goto LAB_00537ac7;
      }
      unaff_EDI = *(void **)(unaff_EBP - 0x2b18);
      FUN_004dafe0(*(void **)(unaff_EBP - 0x2b14));
      iVar17 = *(int *)(unaff_EBP - 0x2b14);
    }
    else {
      unaff_EDI = *(void **)(unaff_EBP - 0x2b18);
      iVar17 = *(int *)(unaff_EBP - 0x2b14);
    }
  }
  param_2 = *(int *)(unaff_EBP - 0x2b24);
  *(int *)(iVar17 + 0x130) = *(int *)(iVar17 + 0x130) - param_2;
  iVar19 = *(int *)(iVar17 + 0x130);
  if (0 < iVar19) {
    iVar19 = FUN_004084b0(iVar17);
    iVar17 = *(int *)(unaff_EBP - 0x2b14);
    param_2 = *(int *)(unaff_EBP - 0x2b24);
    *(int *)(iVar17 + 0x6c) = iVar19 + 1;
    iVar19 = *(int *)(iVar17 + 0x130);
  }
  if (iVar19 < 0) {
    *(undefined4 *)(iVar17 + 0x130) = 0;
  }
  piVar20 = (int *)(iVar17 + 0x134);
  *piVar20 = *piVar20 - param_2;
  uVar24 = *(undefined4 *)(iVar17 + 0x134);
  if (*piVar20 < 0) {
    uVar24 = 0;
  }
  iVar17 = *(int *)(unaff_EBP - 0x2b14);
  *(undefined4 *)(iVar17 + 0x134) = uVar24;
  piVar20 = (int *)(iVar17 + 0x138);
  *piVar20 = *piVar20 - param_2;
  uVar24 = *(undefined4 *)(iVar17 + 0x138);
  if (*piVar20 < 0) {
    uVar24 = 0;
  }
  iVar17 = *(int *)(unaff_EBP - 0x2b14);
  *(undefined4 *)(iVar17 + 0x138) = uVar24;
  if ((*(float *)(iVar17 + 0x13c) < 0.0) &&
     (fVar56 = *(float *)(unaff_EBP - 0x2ba0) / 180.0 + *(float *)(iVar17 + 0x13c),
     *(float *)(iVar17 + 0x13c) = fVar56, 0.0 < fVar56)) {
    *(undefined4 *)(iVar17 + 0x13c) = 0;
  }
  cVar3 = *(char *)(iVar17 + 0x68);
  switch(cVar3) {
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
    pvVar52 = *(void **)(unaff_EBP - 0x2b14);
    if (((*(char *)((int)unaff_EDI + 0xb4) == '\0') && (*(char *)((int)pvVar52 + 0x60) == '\0')) &&
       (pvVar52 != *(void **)((int)unaff_EDI + 0xb8))) break;
    if ((((*(char *)((int)pvVar52 + 0x140) == '\x04') && (*(char *)((int)pvVar52 + 0x141) == '\x01')
         ) && ((cVar3 == '\x11' || ((cVar3 == '\x05' || (cVar3 == '\x14')))))) &&
       (*(int *)((int)pvVar52 + 0x6c) == 0)) {
      *(undefined4 *)((int)pvVar52 + 0x128) = 600;
    }
    iVar17 = FUN_00407db0(pvVar52,0xffffffff);
    pvVar52 = *(void **)(unaff_EBP - 0x2b14);
    cVar3 = *(char *)((int)pvVar52 + 0x68);
    if ((cVar3 == 'W') || (cVar3 == 'X')) {
      iVar19 = *(int *)((int)pvVar52 + 0x6c);
      iVar39 = FUN_00407db0(pvVar52,0xffffffff);
      pcVar51 = rand_exref;
      if ((iVar19 < iVar39) && (iVar19 / 200 != (iVar19 + *(int *)(unaff_EBP - 0x2b24)) / 200)) {
        FUN_004c8530(unaff_EBP - 0x6f8);
        FUN_00402550((void *)(unaff_EBP - 0x6f8),(longlong *)(*(int *)(unaff_EBP - 0x2b14) + 0x10));
        pcVar51 = rand_exref;
        iVar39 = rand();
        iVar19 = *(int *)(unaff_EBP - 0x2b28);
        *(undefined4 *)(unaff_EBP - 0x6ec) = 0x24;
        *(float *)(unaff_EBP - 0x6e8) = ((float)iVar39 * 0.25) / 32767.0 + 1.0;
        FUN_00428590((void *)(iVar19 + 8),(undefined4 *)(unaff_EBP - 0x6f8));
      }
      iVar39 = FUN_00407db0(*(void **)(unaff_EBP - 0x2b14),0xffffffff);
      iVar19 = *(int *)(unaff_EBP - 0x2b24);
      if (*(int *)(*(int *)(unaff_EBP - 0x2b14) + 0x6c) - iVar19 < iVar39) {
        iVar19 = FUN_00407db0(*(void **)(unaff_EBP - 0x2b14),0xffffffff);
        if (*(int *)(*(int *)(unaff_EBP - 0x2b14) + 0x6c) < iVar19) goto LAB_0053824a;
        FUN_004c8510(unaff_EBP - 0xf90);
        plVar30 = (longlong *)(*(int *)(unaff_EBP - 0x2b14) + 0x10);
        FUN_00402a40((void *)(unaff_EBP - 0xf90),(undefined4 *)plVar30);
        *(undefined4 *)(unaff_EBP - 0xf5c) = 0x3e800000;
        *(undefined4 *)(unaff_EBP - 0xf54) = 1;
        *(undefined4 *)(unaff_EBP - 0xf50) = 0x41a00000;
        puVar12 = FUN_00401080((void *)(unaff_EBP - 0x1658),0,0,0x40000000);
        FUN_00401060((void *)(unaff_EBP - 0xf78),puVar12);
        *(undefined4 *)(unaff_EBP - 0xf58) = 0x50;
        FUN_004c8530(unaff_EBP - 0x8a8);
        FUN_00402550((void *)(unaff_EBP - 0x8a8),plVar30);
        iVar19 = *(int *)(unaff_EBP - 0x2b28);
        *(undefined4 *)(unaff_EBP - 0x898) = 0x3f800000;
        *(undefined4 *)(unaff_EBP - 0x89c) = 0x51;
        FUN_00428590((void *)(iVar19 + 8),(undefined4 *)(unaff_EBP - 0x8a8));
        puVar12 = (undefined4 *)(unaff_EBP - 0xf90);
LAB_00538498:
        FUN_00428540((void *)(iVar19 + 0x10),puVar12);
LAB_005384a1:
        pvVar52 = *(void **)(unaff_EBP - 0x2b14);
        pcVar51 = rand_exref;
        goto LAB_005384ad;
      }
      pvVar52 = *(void **)(unaff_EBP - 0x2b14);
    }
    else {
      if ((((cVar3 == '\x1e') || (cVar3 == '\x1f')) || (cVar3 == ' ')) || (cVar3 == '!')) {
        iVar19 = *(int *)((int)pvVar52 + 0x6c);
        iVar39 = FUN_00407db0(pvVar52,0xffffffff);
        pcVar51 = rand_exref;
        if ((iVar19 < iVar39) && (iVar19 / 200 != (iVar19 + *(int *)(unaff_EBP - 0x2b24)) / 200)) {
          FUN_004c8530(unaff_EBP - 0x6c8);
          FUN_00402550((void *)(unaff_EBP - 0x6c8),(longlong *)(*(int *)(unaff_EBP - 0x2b14) + 0x10)
                      );
          pcVar51 = rand_exref;
          iVar39 = rand();
          iVar19 = *(int *)(unaff_EBP - 0x2b28);
          *(undefined4 *)(unaff_EBP - 0x6bc) = 0x24;
          *(float *)(unaff_EBP - 0x6b8) = ((float)iVar39 * 0.25) / 32767.0 + 1.0;
          FUN_00428590((void *)(iVar19 + 8),(undefined4 *)(unaff_EBP - 0x6c8));
        }
        iVar19 = FUN_00407db0(*(void **)(unaff_EBP - 0x2b14),0xffffffff);
        if (*(int *)((int)*(void **)(unaff_EBP - 0x2b14) + 0x6c) < iVar19) {
          iVar9 = FUN_00407db0(*(void **)(unaff_EBP - 0x2b14),0xffffffff);
          iVar39 = *(int *)(unaff_EBP - 0x2b14);
          iVar19 = *(int *)(unaff_EBP - 0x2b24);
          if (iVar9 <= *(int *)(iVar39 + 0x6c) + iVar19) {
            FUN_004c8510(unaff_EBP - 0xce0);
            FUN_00402510(unaff_EBP - 0x1898);
            plVar30 = (longlong *)(iVar39 + 0x10);
            puVar23 = FUN_00402cb0(plVar30,(uint *)(unaff_EBP - 0x2394),(uint *)(unaff_EBP - 0x1898)
                                  );
            FUN_00402a40((void *)(unaff_EBP - 0xce0),puVar23);
            iVar19 = *(int *)(unaff_EBP - 0x2b14);
            *(undefined4 *)(unaff_EBP - 0xcac) = 0x3e800000;
            if (*(char *)(iVar19 + 0x141) == '\x01') {
              *(undefined4 *)(unaff_EBP - 0xca4) = 2;
              ppVar28 = (pair<unsigned___int64,unsigned___int64> *)
                        FUN_004010b0((void *)(unaff_EBP - 0x1c1c),0,0x3e4ccccd,0x3f800000,0x3f800000
                                    );
              std::pair<unsigned___int64,unsigned___int64>::
              operator=<std::pair<unsigned___int64,unsigned___int64>,0>
                        ((pair<unsigned___int64,unsigned___int64> *)(unaff_EBP - 0xcbc),ppVar28);
            }
            else {
              *(undefined4 *)(unaff_EBP - 0xca4) = 1;
            }
            *(undefined4 *)(unaff_EBP - 0xca0) = 0x41000000;
            puVar12 = FUN_00401080((void *)(unaff_EBP - 0x12b0),0,0,0x40000000);
            FUN_00401060((void *)(unaff_EBP - 0xcc8),puVar12);
            *(undefined4 *)(unaff_EBP - 0xca8) = 0x14;
            FUN_004c8530(unaff_EBP - 0x818);
            FUN_00402550((void *)(unaff_EBP - 0x818),plVar30);
            iVar19 = *(int *)(unaff_EBP - 0x2b28);
            uVar24 = 0x26;
            if (*(char *)(*(int *)(unaff_EBP - 0x2b14) + 0x141) == '\x01') {
              uVar24 = 0x29;
            }
            *(undefined4 *)(unaff_EBP - 0x80c) = uVar24;
            *(undefined4 *)(unaff_EBP - 0x808) = 0x3f800000;
            FUN_00428590((void *)(iVar19 + 8),(undefined4 *)(unaff_EBP - 0x818));
            puVar12 = (undefined4 *)(unaff_EBP - 0xce0);
            goto LAB_00538498;
          }
          pvVar52 = *(void **)(unaff_EBP - 0x2b14);
          pcVar51 = rand_exref;
          goto LAB_005384b3;
        }
LAB_0053824a:
        pvVar52 = *(void **)(unaff_EBP - 0x2b14);
      }
      else {
        pcVar51 = rand_exref;
        if (*(int *)((int)pvVar52 + 0x6c) == 0) {
          cVar3 = FUN_0040f2b0((int)pvVar52);
          pvVar52 = *(void **)(unaff_EBP - 0x2b14);
          pcVar51 = rand_exref;
          if (cVar3 != '\0') {
            if (*(char *)((int)pvVar52 + 0x68) == '[') goto LAB_005384a1;
            FUN_004c8530(unaff_EBP - 0x8d8);
            FUN_00402550((void *)(unaff_EBP - 0x8d8),
                         (longlong *)(*(int *)(unaff_EBP - 0x2b14) + 0x10));
            pcVar51 = rand_exref;
            iVar39 = rand();
            iVar19 = *(int *)(unaff_EBP - 0x2b28);
            *(undefined4 *)(unaff_EBP - 0x8cc) = 0x11;
            *(float *)(unaff_EBP - 0x8c8) = ((float)iVar39 * 0.1) / 32767.0 + 1.0;
            FUN_00428590((void *)(iVar19 + 8),(undefined4 *)(unaff_EBP - 0x8d8));
            goto LAB_0053824a;
          }
        }
      }
LAB_005384ad:
      iVar19 = *(int *)(unaff_EBP - 0x2b24);
    }
LAB_005384b3:
    if (iVar17 < *(int *)((int)pvVar52 + 0x6c)) {
      iVar17 = *(int *)(unaff_EBP - 0x2b28);
      iVar39 = *(int *)(unaff_EBP - 0x2b14);
    }
    else {
      iVar39 = *(int *)(unaff_EBP - 0x2b14);
      if ((iVar17 < *(int *)((int)pvVar52 + 0x6c) + iVar19) && (*(char *)(iVar39 + 0x68) != '[')) {
        FUN_004c8530(unaff_EBP - 0x168);
        FUN_00402550((void *)(unaff_EBP - 0x168),(longlong *)(*(int *)(unaff_EBP - 0x2b14) + 0x10));
        iVar17 = (*pcVar51)();
        cVar3 = *(char *)(*(int *)(unaff_EBP - 0x2b14) + 0x68);
        fVar56 = ((float)iVar17 * 0.2) / 32767.0 + 0.9;
        *(float *)(unaff_EBP - 0x158) = fVar56;
        if (cVar3 == '\n') {
          iVar17 = *(int *)(unaff_EBP - 0x2b28);
          *(undefined4 *)(unaff_EBP - 0x15c) = 0x10;
          FUN_00428590((void *)(iVar17 + 8),(undefined4 *)(unaff_EBP - 0x168));
          iVar39 = *(int *)(unaff_EBP - 0x2b14);
        }
        else if (cVar3 == '\v') {
          iVar17 = *(int *)(unaff_EBP - 0x2b28);
          *(undefined4 *)(unaff_EBP - 0x15c) = 0x30;
          FUN_00428590((void *)(iVar17 + 8),(undefined4 *)(unaff_EBP - 0x168));
          iVar39 = *(int *)(unaff_EBP - 0x2b14);
        }
        else if (cVar3 == '6') {
          iVar17 = *(int *)(unaff_EBP - 0x2b28);
          *(undefined4 *)(unaff_EBP - 0x15c) = 0xe;
          FUN_00428590((void *)(iVar17 + 8),(undefined4 *)(unaff_EBP - 0x168));
          iVar39 = *(int *)(unaff_EBP - 0x2b14);
        }
        else {
          fVar56 = fVar56 * 1.5;
          iVar17 = *(int *)(unaff_EBP - 0x2b14);
          *(float *)(unaff_EBP - 0x2b1c) = fVar56;
          *(float *)(unaff_EBP - 0x158) = fVar56;
          cVar3 = FUN_0040f2b0(iVar17);
          if ((((cVar3 != '\0') ||
               (cVar3 = *(char *)(*(int *)(unaff_EBP - 0x2b14) + 0x68), cVar3 == 'D')) ||
              (cVar3 == ']')) || (cVar3 == 'E')) {
            *(float *)(unaff_EBP - 0x158) = *(float *)(unaff_EBP - 0x2b1c) * 0.5;
          }
          iVar17 = *(int *)(unaff_EBP - 0x2b28);
          *(undefined4 *)(unaff_EBP - 0x15c) = 0xf;
          FUN_00428590((void *)(iVar17 + 8),(undefined4 *)(unaff_EBP - 0x168));
          iVar39 = *(int *)(unaff_EBP - 0x2b14);
        }
      }
      else {
        iVar17 = *(int *)(unaff_EBP - 0x2b28);
      }
    }
    cVar3 = *(char *)(iVar39 + 0x68);
    if (((cVar3 == '9') || (cVar3 == '<')) || ((cVar3 == ':' || (cVar3 == 'J')))) {
      iVar19 = FUN_00411d60(*(void **)(unaff_EBP - 0x2b14),0xffffffff);
      iVar39 = FUN_00407db0(*(void **)(unaff_EBP - 0x2b14),0xffffffff);
      if (*(int *)((int)*(void **)(unaff_EBP - 0x2b14) + 0x6c) < iVar39 + iVar19 / 2) {
        iVar39 = FUN_00411d60(*(void **)(unaff_EBP - 0x2b14),0xffffffff);
        iVar9 = FUN_00407db0(*(void **)(unaff_EBP - 0x2b14),0xffffffff);
        iVar19 = *(int *)(unaff_EBP - 0x2b14);
        if (iVar9 + iVar39 / 2 <= *(int *)(iVar19 + 0x6c) + *(int *)(unaff_EBP - 0x2b24)) {
          FUN_004c8530(unaff_EBP - 0x728);
          FUN_00402550((void *)(unaff_EBP - 0x728),(longlong *)(iVar19 + 0x10));
          iVar19 = rand();
          *(undefined4 *)(unaff_EBP - 0x71c) = 0xc;
          *(float *)(unaff_EBP - 0x718) = ((float)iVar19 * 0.25) / 32767.0 + 1.0;
          FUN_00428590((void *)(iVar17 + 8),(undefined4 *)(unaff_EBP - 0x728));
        }
      }
    }
    iVar17 = FUN_00411d60(*(void **)(unaff_EBP - 0x2b14),0xffffffff);
    iVar19 = FUN_00407db0(*(void **)(unaff_EBP - 0x2b14),0xffffffff);
    pvVar52 = *(void **)(unaff_EBP - 0x2b14);
    iVar19 = iVar17 / 2 + -100 + iVar19;
    *(int *)(unaff_EBP - 0x2b3c) = iVar19;
    iVar17 = FUN_00411d60(pvVar52,0xffffffff);
    iVar39 = FUN_00407db0(*(void **)(unaff_EBP - 0x2b14),0xffffffff);
    pvVar52 = *(void **)(unaff_EBP - 0x2b14);
    *(int *)(unaff_EBP - 0x2b50) = iVar39 + iVar17 / 2;
    iVar17 = FUN_00407db0(pvVar52,0xffffffff);
    if (iVar19 < iVar17) {
      iVar17 = FUN_00407db0(*(void **)(unaff_EBP - 0x2b14),0xffffffff);
      *(int *)(unaff_EBP - 0x2b3c) = iVar17;
    }
    iVar17 = FUN_00407db0(*(void **)(unaff_EBP - 0x2b14),0xffffffff);
    iVar19 = FUN_00411d60(*(void **)(unaff_EBP - 0x2b14),0xffffffff);
    if (iVar17 + iVar19 <= *(int *)(unaff_EBP - 0x2b50)) {
      iVar17 = FUN_00407db0(*(void **)(unaff_EBP - 0x2b14),0xffffffff);
      iVar19 = FUN_00411d60(*(void **)(unaff_EBP - 0x2b14),0xffffffff);
      *(int *)(unaff_EBP - 0x2b50) = iVar19 + iVar17 + -1;
    }
    cVar3 = *(char *)(*(int *)(unaff_EBP - 0x2b14) + 0x68);
    if ((cVar3 == 'D') || (cVar3 == 'E')) {
      iVar17 = FUN_00411d60(*(void **)(unaff_EBP - 0x2b14),0xffffffff);
      iVar19 = FUN_00407db0(*(void **)(unaff_EBP - 0x2b14),0xffffffff);
      *(int *)(unaff_EBP - 0x2b3c) = iVar17 / 3 + iVar19;
    }
    pvVar52 = *(void **)(unaff_EBP - 0x2b14);
    if (*(char *)((int)pvVar52 + 0x68) == ']') {
      iVar17 = FUN_00411d60(pvVar52,0xffffffff);
      iVar19 = FUN_00407db0(*(void **)(unaff_EBP - 0x2b14),0xffffffff);
      pvVar52 = *(void **)(unaff_EBP - 0x2b14);
      *(int *)(unaff_EBP - 0x2b3c) = iVar19 + iVar17 / 5;
      iVar17 = FUN_00407db0(pvVar52,0xffffffff);
      iVar19 = FUN_00411d60(*(void **)(unaff_EBP - 0x2b14),0xffffffff);
      pvVar52 = *(void **)(unaff_EBP - 0x2b14);
      *(int *)(unaff_EBP - 0x2b50) = iVar17 + iVar19;
    }
    cVar3 = *(char *)((int)pvVar52 + 0x68);
    *(undefined1 *)(unaff_EBP - 0x2c70) = 0;
    if ((((cVar3 == 'H') || (cVar3 == 'V')) || (cVar3 == '\x1e')) ||
       ((((cVar3 == '\x1f' || (cVar3 == ' ')) ||
         ((cVar3 == '!' || ((cVar3 == '\v' || (cVar3 == '\x05')))))) || (cVar3 == '[')))) {
      iVar17 = FUN_00407db0(*(void **)(unaff_EBP - 0x2b14),0xffffffff);
      if (*(int *)((int)*(void **)(unaff_EBP - 0x2b14) + 0x6c) < iVar17) {
        pvVar52 = *(void **)(unaff_EBP - 0x2b14);
LAB_00538dfd:
        iVar17 = FUN_00407db0(pvVar52,0xffffffff);
        *(int *)(unaff_EBP - 0x2b3c) = iVar17;
        *(int *)(unaff_EBP - 0x2b50) = iVar17;
        goto LAB_00538e12;
      }
      iVar17 = FUN_00407db0(*(void **)(unaff_EBP - 0x2b14),0xffffffff);
      iVar19 = FUN_00411d60(*(void **)(unaff_EBP - 0x2b14),0xffffffff);
      pvVar52 = *(void **)(unaff_EBP - 0x2b14);
      if (iVar17 + iVar19 <= *(int *)((int)pvVar52 + 0x6c)) goto LAB_00538dfd;
      iVar17 = 0xfa;
      if (*(char *)((int)pvVar52 + 0x68) == '[') {
        iVar17 = 1000;
      }
      if (*(char *)((int)pvVar52 + 0x68) == '\v') {
        iVar17 = FUN_00411d60(*(void **)(unaff_EBP - 0x2b14),0xffffffff);
        iVar17 = iVar17 / 3;
      }
      pvVar52 = *(void **)(unaff_EBP - 0x2b14);
      if (*(char *)((int)pvVar52 + 0x68) == '\x05') {
        iVar17 = FUN_00411d60(pvVar52,0xffffffff);
        iVar17 = iVar17 / 3;
        pvVar52 = *(void **)(unaff_EBP - 0x2b14);
      }
      if ((*(char *)((int)pvVar52 + 0x68) == '\x1e') || (*(char *)((int)pvVar52 + 0x68) == ' ')) {
        iVar17 = FUN_00411d60(*(void **)(unaff_EBP - 0x2b14),0xffffffff);
        iVar17 = iVar17 / 6;
      }
      cVar3 = *(char *)(*(int *)(unaff_EBP - 0x2b14) + 0x68);
      if ((cVar3 == '\x1f') || (cVar3 == '!')) {
        iVar17 = FUN_00411d60(*(void **)(unaff_EBP - 0x2b14),0xffffffff);
        iVar17 = iVar17 / 0xc;
      }
      iVar39 = FUN_00407db0(*(void **)(unaff_EBP - 0x2b14),0xffffffff);
      iVar19 = *(int *)(*(int *)(unaff_EBP - 0x2b14) + 0x6c);
      iVar9 = FUN_00407db0(*(void **)(unaff_EBP - 0x2b14),0xffffffff);
      pvVar52 = *(void **)(unaff_EBP - 0x2b14);
      iVar9 = iVar9 + ((iVar19 - iVar39) / iVar17) * iVar17;
      *(int *)(unaff_EBP - 0x2b3c) = iVar9;
      *(int *)(unaff_EBP - 0x2b50) = iVar9 + 100;
      iVar9 = FUN_00407db0(pvVar52,0xffffffff);
      iVar19 = *(int *)(*(int *)(unaff_EBP - 0x2b14) + 0x6c);
      iVar39 = *(int *)(unaff_EBP - 0x2b24);
      iVar22 = FUN_00407db0(*(void **)(unaff_EBP - 0x2b14),0xffffffff);
      iVar22 = iVar22 + (((iVar19 + iVar39) - iVar9) / iVar17) * iVar17;
      *(int *)(unaff_EBP - 0x2b1c) = iVar22;
      if (iVar22 != *(int *)(unaff_EBP - 0x2b3c)) {
        iVar19 = FUN_00407db0(*(void **)(unaff_EBP - 0x2b14),0xffffffff);
        iVar39 = FUN_00411d60(*(void **)(unaff_EBP - 0x2b14),0xffffffff);
        if (*(int *)(unaff_EBP - 0x2b1c) < iVar19 + iVar39) {
          iVar19 = *(int *)(unaff_EBP - 0x2b14);
          *(undefined4 *)(iVar19 + 0x1314) = *(undefined4 *)(*(int *)(unaff_EBP - 0x2b14) + 0x70);
          *(undefined1 *)(unaff_EBP - 0x2c70) = 1;
          FUN_004f8520((int *)(iVar19 + 0x11ac));
          FUN_004f8520((int *)(*(int *)(unaff_EBP - 0x2b14) + 0x11b4));
        }
      }
      iVar19 = *(int *)(unaff_EBP - 0x2b24);
      uVar18 = *(uint *)(unaff_EBP - 0x2c70) & 0xff;
      if (*(int *)(unaff_EBP - 0x2b50) < *(int *)(*(int *)(unaff_EBP - 0x2b14) + 0x6c) + iVar19) {
        uVar18 = 1;
      }
      pvVar52 = *(void **)(unaff_EBP - 0x2b14);
      *(uint *)(unaff_EBP - 0x2c70) = uVar18;
      if (*(char *)((int)pvVar52 + 0x68) != '\x05') {
        iVar39 = FUN_00407db0(pvVar52,0xffffffff);
        if (iVar39 <= *(int *)((int)*(void **)(unaff_EBP - 0x2b14) + 0x6c) - iVar19) {
          iVar9 = FUN_00407db0(*(void **)(unaff_EBP - 0x2b14),0xffffffff);
          iVar39 = *(int *)(*(int *)(unaff_EBP - 0x2b14) + 0x6c);
          iVar22 = FUN_00407db0(*(void **)(unaff_EBP - 0x2b14),0xffffffff);
          if ((*(int *)(*(int *)(unaff_EBP - 0x2b14) + 0x6c) - iVar22) / iVar17 ==
              ((iVar39 + iVar19) - iVar9) / iVar17) goto LAB_00538e12;
        }
        FUN_004c8530(unaff_EBP - 0x848);
        plVar30 = (longlong *)(*(int *)(unaff_EBP - 0x2b14) + 0x10);
        FUN_00402550((void *)(unaff_EBP - 0x848),plVar30);
        iVar19 = rand();
        iVar17 = *(int *)(unaff_EBP - 0x2b28);
        *(undefined4 *)(unaff_EBP - 0x83c) = 0xf;
        *(float *)(unaff_EBP - 0x838) = ((float)iVar19 * 0.25) / 32767.0 + 1.0;
        FUN_00428590((void *)(iVar17 + 8),(undefined4 *)(unaff_EBP - 0x848));
        if (*(char *)(*(int *)(unaff_EBP - 0x2b14) + 0x68) == '[') {
          FUN_004c8530(unaff_EBP - 0x758);
          FUN_00402550((void *)(unaff_EBP - 0x758),plVar30);
          iVar19 = rand();
          *(undefined4 *)(unaff_EBP - 0x74c) = 0x52;
          *(float *)(unaff_EBP - 0x748) = ((float)iVar19 * 0.1) / 32767.0 + 0.5;
          FUN_00428590((void *)(iVar17 + 8),(undefined4 *)(unaff_EBP - 0x758));
        }
        goto LAB_00538e12;
      }
    }
    else {
LAB_00538e12:
      pvVar52 = *(void **)(unaff_EBP - 0x2b14);
    }
    iVar17 = FUN_00407db0(pvVar52,0xffffffff);
    pvVar52 = *(void **)(unaff_EBP - 0x2b14);
    if (*(int *)((int)pvVar52 + 0x6c) <= iVar17) {
      *(undefined4 *)((int)pvVar52 + 0x1314) = *(undefined4 *)((int)pvVar52 + 0x70);
      piVar53 = (int *)((int)pvVar52 + 0x11b4);
      FUN_00428070(piVar53,(undefined4 *)(unaff_EBP - 0x2c60));
      piVar20 = (int *)FUN_00530550(piVar53,(undefined4 *)(unaff_EBP - 0x2d80));
      bVar5 = FUN_0042c6f0((void *)(unaff_EBP - 0x2c60),piVar20);
      if (bVar5) {
        iVar17 = *(int *)(unaff_EBP - 0x2b14);
        do {
          puVar23 = (uint *)FUN_00402bc0((int *)(unaff_EBP - 0x2c60));
          piVar20 = (int *)FUN_00530550((void *)(iVar17 + 0x11ac),(undefined4 *)(unaff_EBP - 0x2fec)
                                       );
          pvVar52 = (void *)FUN_00530600((void *)(iVar17 + 0x11ac),(int *)(unaff_EBP - 0x3010),
                                         puVar23);
          bVar5 = FUN_004078d0(pvVar52,piVar20);
          if ((bVar5) &&
             (pvVar52 = (void *)FUN_00405420(*(void **)(unaff_EBP - 0x2b18),puVar23),
             pvVar52 != (void *)0x0)) {
            FUN_00408230(pvVar52,*(int *)(unaff_EBP - 0x2b28));
            FUN_00422a90(unaff_EBP - 0xc98);
            *(undefined4 *)(unaff_EBP - 0xc98) = *(undefined4 *)(*(int *)(unaff_EBP - 0x2b14) + 8);
            iVar19 = *(int *)(unaff_EBP - 0x2b14);
            *(undefined4 *)(unaff_EBP - 0xc88) = 0;
            *(undefined4 *)(unaff_EBP - 0xc94) = *(undefined4 *)(iVar19 + 0xc);
            *(undefined4 *)(unaff_EBP - 0xc90) = *(undefined4 *)((int)pvVar52 + 8);
            *(undefined4 *)(unaff_EBP - 0xc8c) = *(undefined4 *)((int)pvVar52 + 0xc);
            *(undefined1 *)(unaff_EBP - 0xc53) = 4;
            *(undefined1 *)(unaff_EBP - 0xc84) = 0;
            FUN_00402a40((void *)(unaff_EBP - 0xc78),(undefined4 *)((int)pvVar52 + 0x10));
            FUN_00428400(*(void **)(unaff_EBP - 0x2b28),(undefined4 *)(unaff_EBP - 0xc98));
          }
          FUN_00407a30((void *)(unaff_EBP - 0x2c60),(int *)(unaff_EBP - 0x3018));
          piVar53 = (int *)(*(int *)(unaff_EBP - 0x2b14) + 0x11b4);
          piVar20 = (int *)FUN_00530550(piVar53,(undefined4 *)(unaff_EBP - 0x2d80));
          bVar5 = FUN_0042c6f0((void *)(unaff_EBP - 0x2c60),piVar20);
        } while (bVar5);
      }
      FUN_004f8520((int *)(*(int *)(unaff_EBP - 0x2b14) + 0x11ac));
      FUN_004f8520(piVar53);
      pvVar52 = *(void **)(unaff_EBP - 0x2b14);
      *(undefined1 *)((int)pvVar52 + 0x13b8) = 0;
    }
    if (*(char *)((int)pvVar52 + 0x68) == 'J') {
      iVar17 = FUN_00411d60(pvVar52,0xffffffff);
      pvVar52 = *(void **)(unaff_EBP - 0x2b14);
      iVar19 = FUN_00407db0(pvVar52,0xffffffff);
      if (*(int *)((int)pvVar52 + 0x6c) < iVar19 + iVar17 / 2) {
        iVar17 = FUN_00411d60(pvVar52,0xffffffff);
        iVar19 = FUN_00407db0(pvVar52,0xffffffff);
        if (iVar19 + iVar17 / 2 <= *(int *)((int)pvVar52 + 0x6c) + *(int *)(unaff_EBP - 0x2b24)) {
          FUN_004c8530(unaff_EBP - 0x908);
          FUN_00402550((void *)(unaff_EBP - 0x908),(longlong *)((int)pvVar52 + 0x10));
          iVar19 = rand();
          iVar17 = *(int *)(unaff_EBP - 0x2b28);
          *(undefined4 *)(unaff_EBP - 0x8fc) = 0x52;
          *(float *)(unaff_EBP - 0x8f8) = ((float)iVar19 * 0.1) / 32767.0 + 0.5;
          FUN_00428590((void *)(iVar17 + 8),(undefined4 *)(unaff_EBP - 0x908));
        }
      }
      pvVar52 = *(void **)(unaff_EBP - 0x2b14);
    }
    iVar17 = *(int *)(unaff_EBP - 0x2b50);
    if (iVar17 <= *(int *)((int)pvVar52 + 0x6c)) {
      piVar20 = (int *)((int)pvVar52 + 0x11b4);
      FUN_00428070(piVar20,(undefined4 *)(unaff_EBP - 0x2c68));
      piVar53 = (int *)FUN_00530550(piVar20,(undefined4 *)(unaff_EBP - 0x2e18));
      bVar5 = FUN_0042c6f0((void *)(unaff_EBP - 0x2c68),piVar53);
      if (bVar5) {
        iVar17 = *(int *)(unaff_EBP - 0x2b14);
        do {
          puVar23 = (uint *)FUN_00402bc0((int *)(unaff_EBP - 0x2c68));
          piVar20 = (int *)FUN_00530550((void *)(iVar17 + 0x11ac),(undefined4 *)(unaff_EBP - 0x3048)
                                       );
          pvVar52 = (void *)FUN_00530600((void *)(iVar17 + 0x11ac),(int *)(unaff_EBP - 0x3064),
                                         puVar23);
          bVar5 = FUN_004078d0(pvVar52,piVar20);
          if ((bVar5) &&
             (pvVar52 = (void *)FUN_00405420(*(void **)(unaff_EBP - 0x2b18),puVar23),
             pvVar52 != (void *)0x0)) {
            FUN_00408230(pvVar52,*(int *)(unaff_EBP - 0x2b28));
            FUN_00422a90(unaff_EBP - 0xd70);
            iVar19 = *(int *)(unaff_EBP - 0x2b14);
            *(undefined4 *)(unaff_EBP - 0xd60) = 0;
            *(undefined4 *)(unaff_EBP - 0xd70) = *(undefined4 *)(iVar19 + 8);
            *(undefined4 *)(unaff_EBP - 0xd6c) = *(undefined4 *)(iVar19 + 0xc);
            *(undefined4 *)(unaff_EBP - 0xd68) = *(undefined4 *)((int)pvVar52 + 8);
            *(undefined4 *)(unaff_EBP - 0xd64) = *(undefined4 *)((int)pvVar52 + 0xc);
            *(undefined1 *)(unaff_EBP - 0xd2b) = 4;
            *(undefined1 *)(unaff_EBP - 0xd5c) = 0;
            FUN_00402a40((void *)(unaff_EBP - 0xd50),(undefined4 *)((int)pvVar52 + 0x10));
            FUN_00428400(*(void **)(unaff_EBP - 0x2b28),(undefined4 *)(unaff_EBP - 0xd70));
          }
          FUN_00407a30((void *)(unaff_EBP - 0x2c68),(int *)(unaff_EBP - 0x3014));
          piVar20 = (int *)(*(int *)(unaff_EBP - 0x2b14) + 0x11b4);
          piVar53 = (int *)FUN_00530550(piVar20,(undefined4 *)(unaff_EBP - 0x2e18));
          bVar5 = FUN_0042c6f0((void *)(unaff_EBP - 0x2c68),piVar53);
        } while (bVar5);
        iVar17 = *(int *)(unaff_EBP - 0x2b50);
      }
      FUN_004f8520(piVar20);
      pvVar52 = *(void **)(unaff_EBP - 0x2b14);
    }
    if (*(char *)((int)pvVar52 + 0x13b8) == '\0') {
      iVar19 = FUN_00407db0(pvVar52,0xffffffff);
      iVar39 = FUN_00411d60(*(void **)(unaff_EBP - 0x2b14),0xffffffff);
      if (iVar19 + iVar39 <=
          *(int *)(*(int *)(unaff_EBP - 0x2b14) + 0x6c) + *(int *)(unaff_EBP - 0x2b24)) {
        iVar19 = FUN_004084b0(*(int *)(unaff_EBP - 0x2b14));
        pvVar52 = *(void **)(unaff_EBP - 0x2b14);
        if (iVar19 <= *(int *)((int)pvVar52 + 0x6c)) goto LAB_005392b7;
        if (*(int *)((int)pvVar52 + 0x128) == 0) {
          fVar55 = FUN_00412150((int)pvVar52);
          *(float *)(unaff_EBP - 0x2b1c) = (float)fVar55;
          iVar19 = *(int *)(unaff_EBP - 0x2b14);
          *(undefined4 *)(iVar19 + 0x70) = 0;
          fVar55 = FUN_00412150(iVar19);
          *(float *)(unaff_EBP - 0x2b48) = (float)fVar55;
          *(int *)(*(int *)(unaff_EBP - 0x2b14) + 0x6c) =
               (int)((*(float *)(unaff_EBP - 0x2b1c) / *(float *)(unaff_EBP - 0x2b48)) *
                    (float)*(int *)(*(int *)(unaff_EBP - 0x2b14) + 0x6c));
        }
      }
      pvVar52 = *(void **)(unaff_EBP - 0x2b14);
    }
LAB_005392b7:
    if ((*(char *)((int)pvVar52 + 0x68) == '\x1f') || (*(char *)((int)pvVar52 + 0x68) == '!')) {
      pvVar52 = *(void **)(unaff_EBP - 0x2b14);
      iVar19 = FUN_00407db0(pvVar52,0xffffffff);
      if (iVar19 < *(int *)((int)pvVar52 + 0x6c)) {
LAB_00539356:
        pvVar52 = *(void **)(unaff_EBP - 0x2b14);
        goto LAB_0053935c;
      }
      iVar19 = FUN_00407db0(pvVar52,0xffffffff);
      param_2 = *(int *)(unaff_EBP - 0x2b24);
      if (iVar19 < *(int *)((int)pvVar52 + 0x6c) + param_2) {
        *(undefined4 *)((int)pvVar52 + 0x13b4) = 0x3dcccccd;
        fVar55 = FUN_0040fb20((int)pvVar52,(uint)*(byte *)((int)pvVar52 + 0x68),-1);
        *(float *)(unaff_EBP - 0x2b1c) = (float)fVar55;
        fVar56 = *(float *)((int)pvVar52 + 0x170) - *(float *)(unaff_EBP - 0x2b1c);
        *(float *)((int)pvVar52 + 0x170) = fVar56;
        if (fVar56 < 0.0) {
          *(undefined4 *)((int)pvVar52 + 0x170) = 0;
        }
        goto LAB_00539356;
      }
    }
    else {
      pvVar52 = *(void **)(unaff_EBP - 0x2b14);
      if (*(int *)((int)pvVar52 + 0x6c) == 0) {
        iVar19 = *(int *)(unaff_EBP - 0x2b14);
        *(undefined1 *)((int)pvVar52 + 0x13c0) = 0;
        *(undefined4 *)((int)pvVar52 + 0x13b4) = 0;
        fVar55 = FUN_0040fb20(iVar19,(uint)*(byte *)((int)pvVar52 + 0x68),-1);
        *(float *)(unaff_EBP - 0x2b1c) = (float)fVar55;
        if (*(float *)(unaff_EBP - 0x2b1c) <= 0.0) {
          cVar3 = *(char *)(iVar19 + 0x68);
          if (((cVar3 == '\x11') || (cVar3 == '\x14')) || (cVar3 == '\x05')) {
            *(undefined4 *)(iVar19 + 0x13b4) = *(undefined4 *)(iVar19 + 0x170);
            pvVar52 = *(void **)(unaff_EBP - 0x2b14);
            *(undefined4 *)((int)pvVar52 + 0x170) = 0;
            puVar12 = FUN_0040ef90(pvVar52,0xb);
            if (puVar12 != (undefined4 *)0x0) {
              FUN_004029b0((undefined1 *)(unaff_EBP - 0x2f4c));
              pvVar52 = *(void **)(unaff_EBP - 0x2b14);
              *(undefined1 *)(unaff_EBP - 0x2f4c) = 0xb;
              *(undefined4 *)(unaff_EBP - 0x2f44) = 0;
              FUN_00411740(pvVar52,(char *)(unaff_EBP - 0x2f4c));
              FUN_004063d0(unaff_EBP - 0x3124);
              uVar24 = *(undefined4 *)((int)pvVar52 + 0xc);
              uVar64 = *(undefined4 *)((int)pvVar52 + 8);
              *(undefined8 *)(unaff_EBP - 0x3114) = *(undefined8 *)(unaff_EBP - 0x2f4c);
              uVar1 = *(undefined8 *)(unaff_EBP - 0x2f44);
              *(undefined4 *)(unaff_EBP - 0x3120) = uVar24;
              *(undefined4 *)(unaff_EBP - 0x3118) = uVar24;
              iVar19 = *(int *)(unaff_EBP - 0x2b28);
              *(undefined4 *)(unaff_EBP - 0x3124) = uVar64;
              *(undefined4 *)(unaff_EBP - 0x311c) = uVar64;
              *(undefined8 *)(unaff_EBP - 0x310c) = uVar1;
              *(undefined8 *)(unaff_EBP - 0x3104) = *(undefined8 *)(unaff_EBP - 0x2f3c);
              FUN_00411040((void *)(iVar19 + 0x58),(undefined8 *)(unaff_EBP - 0x3124));
              *(undefined1 *)((int)pvVar52 + 0x13c0) = 1;
            }
          }
          else if (((cVar3 == '6') || (cVar3 == '\x15')) || ((cVar3 == 'W' || (cVar3 == 'X')))) {
            *(undefined4 *)(iVar19 + 0x13b4) = 0x3f800000;
          }
        }
        else {
          fVar55 = FUN_0040fb20(iVar19,(uint)*(byte *)(iVar19 + 0x68),-1);
          *(float *)(unaff_EBP - 0x2b1c) = (float)fVar55;
          fVar56 = *(float *)(unaff_EBP - 0x2b1c);
          *(float *)(iVar19 + 0x13b4) = fVar56;
          *(float *)(iVar19 + 0x170) = *(float *)(iVar19 + 0x170) - fVar56;
        }
        goto LAB_00539356;
      }
LAB_0053935c:
      param_2 = *(int *)(unaff_EBP - 0x2b24);
    }
    if (0.0 < *(float *)((int)pvVar52 + 0x144)) {
      *(float *)((int)pvVar52 + 0x13b4) = *(float *)((int)pvVar52 + 0x144);
      *(float *)((int)pvVar52 + 0x170) =
           *(float *)((int)pvVar52 + 0x170) - *(float *)((int)pvVar52 + 0x144);
      *(undefined1 *)((int)pvVar52 + 0x13b8) = 0;
      if ((*(char *)((int)pvVar52 + 0x68) == '\v') || (*(char *)((int)pvVar52 + 0x68) == '\x05')) {
        *(float *)(*(int *)(unaff_EBP - 0x2b14) + 0x13b4) =
             *(float *)(*(int *)(unaff_EBP - 0x2b14) + 0x13b4) * 0.5;
      }
      pvVar52 = *(void **)(unaff_EBP - 0x2b14);
    }
    *(undefined4 *)((int)pvVar52 + 0x144) = 0;
    if (*(float *)((int)pvVar52 + 0x170) <= 0.0 && *(float *)((int)pvVar52 + 0x170) != 0.0) {
      *(undefined4 *)((int)pvVar52 + 0x170) = 0;
    }
    if ((0.0 < *(float *)((int)pvVar52 + 0x13b4)) || (*(char *)((int)pvVar52 + 0x68) == '\v')) {
      uVar4 = 1;
    }
    else {
      uVar4 = 0;
    }
    pvVar52 = *(void **)(unaff_EBP - 0x2b14);
    *(undefined1 *)(unaff_EBP - 0x2c04) = uVar4;
    if ((*(int *)(unaff_EBP - 0x2b3c) < *(int *)((int)pvVar52 + 0x6c)) &&
       (*(int *)((int)pvVar52 + 0x6c) <= iVar17)) {
      FUN_00401cd0((undefined4 *)(unaff_EBP - 0x1d1c));
      pfVar25 = (float *)FUN_004013d0((void *)((int)pvVar52 + 0x28),2);
      FUN_00402030((void *)(unaff_EBP - 0x1d1c),*pfVar25);
      *(undefined4 *)(unaff_EBP - 0x2b1c) = 0x3fc00000;
      pfVar25 = (float *)FUN_004013d0((void *)((int)pvVar52 + 0x80),0);
      fVar56 = *pfVar25;
      cVar3 = *(char *)((int)pvVar52 + 0x68);
      fVar58 = fVar56 * 1.5;
      *(float **)(unaff_EBP - 0x2bb8) = pfVar25;
      *(float *)(unaff_EBP - 0x2b4c) = fVar58;
      if ((((cVar3 == '\r') ||
           (((((cVar3 == '\x0e' || (cVar3 == '\x02')) || (cVar3 == '\x01')) ||
             ((cVar3 == '\t' || (cVar3 == '\x04')))) || (cVar3 == '\x03')))) ||
          (((cVar3 == '\a' || (cVar3 == '\x06')) || (cVar3 == '\x12')))) || (cVar3 == '\x13')) {
        fVar59 = 1.0;
        fVar58 = fVar56 * 2.0;
        *(float *)(unaff_EBP - 0x2b4c) = fVar58;
      }
      else {
        fVar59 = *(float *)(unaff_EBP - 0x2b1c);
      }
      if ((cVar3 == '\x14') || (cVar3 == '\x15')) {
        fVar58 = fVar58 * 2.0;
        *(float *)(unaff_EBP - 0x2b4c) = fVar58;
      }
      if ((cVar3 == 'D') || (cVar3 == 'F')) {
        fVar59 = 0.0;
      }
      if (((cVar3 == 'V') || (cVar3 == ']')) || (cVar3 == 'h')) {
        fVar58 = fVar58 * 2.0;
        fVar59 = 0.0;
        *(float *)(unaff_EBP - 0x2b4c) = fVar58;
      }
      if ((cVar3 == 'W') || (cVar3 == 'X')) {
        fVar58 = 8.0;
        fVar59 = 0.0;
        *(undefined4 *)(unaff_EBP - 0x2b4c) = 0x41000000;
      }
      if ((cVar3 == '\x1e') || (cVar3 == ' ')) {
        fVar58 = 3.0;
        fVar59 = 0.0;
        *(undefined4 *)(unaff_EBP - 0x2b4c) = 0x40400000;
      }
      if ((cVar3 == '\x1f') || (cVar3 == '!')) {
        fVar58 = 5.0;
        fVar59 = 0.0;
        *(undefined4 *)(unaff_EBP - 0x2b4c) = 0x40a00000;
      }
      if ((cVar3 == '[') || (cVar3 == 'J')) {
        fVar58 = 20.0;
        fVar59 = 0.0;
        *(undefined4 *)(unaff_EBP - 0x2b4c) = 0x41a00000;
      }
      if ((((cVar3 == 'H') || (cVar3 == 'N')) || (cVar3 == 'M')) || (cVar3 == 'L')) {
        fVar59 = 0.0;
        *(float *)(unaff_EBP - 0x2b4c) = fVar58 * 1.2;
      }
      pfVar26 = (float *)FUN_00401080((void *)(unaff_EBP - 0x12c8),0,fVar56 * fVar59,0);
      FUN_004dde00((void *)(unaff_EBP - 0x1d1c),(float *)(unaff_EBP - 0x19c4),pfVar26);
      FUN_00402510(unaff_EBP - 0x18bc);
      puVar12 = (undefined4 *)(*(int *)(unaff_EBP - 0x2b14) + 0x10);
      FUN_00402cb0(puVar12,(uint *)(unaff_EBP - 0x110),(uint *)(unaff_EBP - 0x18bc));
      iVar17 = *(int *)(unaff_EBP - 0x2b14);
      cVar3 = *(char *)(iVar17 + 0x68);
      if (((cVar3 == '\x1e') || (cVar3 == '\x1f')) || ((cVar3 == ' ' || (cVar3 == '!')))) {
        FUN_00402510(unaff_EBP - 0x18e0);
        puVar23 = FUN_00402cb0(puVar12,(uint *)(unaff_EBP - 0x2064),(uint *)(unaff_EBP - 0x18e0));
        FUN_00402a40((void *)(unaff_EBP - 0x110),puVar23);
        iVar17 = *(int *)(unaff_EBP - 0x2b14);
      }
      if ((*(char *)(iVar17 + 0x68) == 'K') || (*(char *)(iVar17 + 0x68) == 'E')) {
        FUN_004013d0((void *)(iVar17 + 0x80),2);
        FUN_00402a10((ulonglong *)(unaff_EBP - 0x3080));
        puVar23 = (uint *)(unaff_EBP - 0x3080);
        pvVar52 = (void *)FUN_004e2320((void *)(unaff_EBP - 0x110),2);
        FUN_00402eb0(pvVar52,puVar23);
        iVar17 = *(int *)(unaff_EBP - 0x2b14);
      }
      cVar3 = *(char *)(iVar17 + 0x68);
      if (((cVar3 == '\v') || (cVar3 == '=')) || (cVar3 == '6')) {
        FUN_00402a40((void *)(unaff_EBP - 0x110),puVar12);
        fVar56 = *(float *)(unaff_EBP - 0x2b4c) * 3.0;
        *(float *)(unaff_EBP - 0x2b4c) = fVar56;
      }
      else {
        fVar56 = *(float *)(unaff_EBP - 0x2b4c);
      }
      pvVar52 = *(void **)(unaff_EBP - 0x2b14);
      if (((*(char *)(*(int *)(unaff_EBP - 0x2b18) + 0xb4) == '\0') && (4.0 < *pfVar25)) &&
         ((cVar3 = *(char *)((int)pvVar52 + 0x68), cVar3 != 'W' &&
          ((cVar3 != '[' && (cVar3 != 'J')))))) {
        *(undefined1 *)(unaff_EBP - 0x2b29) = 0;
        iVar17 = (int)fVar56;
        if (8 < iVar17) {
          iVar17 = 8;
        }
        iVar39 = -iVar17;
        *(int *)(unaff_EBP - 0x2b48) = iVar17;
        *(int *)(unaff_EBP - 0x2b90) = iVar39;
        *(int *)(unaff_EBP - 0x2b5c) = iVar39;
        iVar19 = iVar39;
        if (-iVar17 == iVar17 || SBORROW4(iVar39,iVar17) != iVar17 * -2 < 0) {
          do {
            *(int *)(unaff_EBP - 0x2b64) = iVar19;
            iVar9 = iVar19;
            if (iVar19 <= iVar17) {
              do {
                if (iVar9 <= iVar17) {
                  iVar22 = iVar17 * iVar17;
                  do {
                    puVar23 = FUN_00402990((void *)(unaff_EBP - 0x12e0),iVar39,iVar19,iVar9);
                    FUN_004d99d0((void *)(unaff_EBP - 0x1904),puVar23);
                    FUN_00402cb0((void *)(unaff_EBP - 0x110),(uint *)(unaff_EBP - 0x42c),
                                 (uint *)(unaff_EBP - 0x1904));
                    puVar23 = FUN_00402c50((void *)(unaff_EBP - 0x42c),(uint *)(unaff_EBP - 0x2544),
                                           (uint *)(unaff_EBP - 0x110));
                    pfVar25 = FUN_00402550((void *)(unaff_EBP - 0x1670),(longlong *)puVar23);
                    fVar55 = FUN_004021b0(pfVar25);
                    *(float *)(unaff_EBP - 0x2b1c) = (float)fVar55;
                    if (*(float *)(unaff_EBP - 0x2b1c) <= (float)iVar22 &&
                        (float)iVar22 != *(float *)(unaff_EBP - 0x2b1c)) {
                      iVar17 = FUN_004e2320((void *)(unaff_EBP - 0x42c),2);
                      *(int *)(unaff_EBP - 0x2b40) = iVar17;
                      iVar17 = FUN_004e2320((void *)(unaff_EBP - 0x42c),1);
                      *(int *)(unaff_EBP - 0x2b3c) = iVar17;
                      puVar27 = (uint *)FUN_004e2320((void *)(unaff_EBP - 0x42c),0);
                      puVar23 = *(uint **)(unaff_EBP - 0x2b40);
                      uVar18 = puVar23[1];
                      *(uint **)(unaff_EBP - 0x2b1c) = puVar27;
                      iVar17 = FUN_00406050(*(void **)(unaff_EBP - 0x2b18),*puVar27,puVar27[1],
                                            **(uint **)(unaff_EBP - 0x2b3c),
                                            (*(uint **)(unaff_EBP - 0x2b3c))[1],*puVar23,uVar18,0);
                      *(int *)(unaff_EBP - 0x2b20) = iVar17;
                      bVar6 = FUN_005306c0(iVar17);
                      if (bVar6 != 0) {
                        FUN_004c8510(unaff_EBP - 0x1020);
                        FUN_00402a40((void *)(unaff_EBP - 0x1020),(undefined4 *)(unaff_EBP - 0x42c))
                        ;
                        pvVar52 = *(void **)(unaff_EBP - 0x2b20);
                        uVar24 = 0x3f800000;
                        *(undefined4 *)(unaff_EBP - 0xfec) = 0x3f000000;
                        pbVar48 = (byte *)FUN_004013e0(pvVar52,2);
                        fVar56 = (float)*pbVar48 / 255.0;
                        pbVar48 = (byte *)FUN_004013e0(*(void **)(unaff_EBP - 0x2b20),1);
                        fVar58 = (float)*pbVar48 / 255.0;
                        pbVar48 = (byte *)FUN_004013e0(*(void **)(unaff_EBP - 0x2b20),0);
                        ppVar28 = (pair<unsigned___int64,unsigned___int64> *)
                                  FUN_004010b0((void *)(unaff_EBP - 0x1b8c),(float)*pbVar48 / 255.0,
                                               fVar58,fVar56,uVar24);
                        std::pair<unsigned___int64,unsigned___int64>::
                        operator=<std::pair<unsigned___int64,unsigned___int64>,0>
                                  ((pair<unsigned___int64,unsigned___int64> *)(unaff_EBP - 0xffc),
                                   ppVar28);
                        puVar12 = FUN_00401080((void *)(unaff_EBP - 0x12f8),0,0,0x41200000);
                        FUN_00401060((void *)(unaff_EBP - 0x1008),puVar12);
                        iVar17 = *(int *)(unaff_EBP - 0x2b28);
                        *(undefined4 *)(unaff_EBP - 0xfe8) = 3;
                        FUN_00428540((void *)(iVar17 + 0x10),(undefined4 *)(unaff_EBP - 0x1020));
                        lVar37 = CRefTime::Millisecs(*(CRefTime **)(unaff_EBP - 0x2b40));
                        uVar18 = CRefTime::Millisecs(*(CRefTime **)(unaff_EBP - 0x2b3c));
                        uVar54 = CRefTime::Millisecs(*(CRefTime **)(unaff_EBP - 0x2b1c));
                        FUN_00530470(*(void **)(unaff_EBP - 0x2b18),uVar54,uVar18,lVar37);
                        FUN_0041d7e0(unaff_EBP - 0x4b4);
                        puVar12 = FUN_004c64f0((void *)(unaff_EBP - 0x1880),
                                               (uint *)(unaff_EBP - 0x42c));
                        FUN_00401060((void *)(unaff_EBP - 0x4b4),puVar12);
                        *(undefined4 *)(unaff_EBP - 0x4a4) =
                             *(undefined4 *)(*(int *)(unaff_EBP - 0x2b18) + 0x800160);
                        FUN_00405610((void *)(unaff_EBP - 0x4a8),&DAT_005842d8);
                        FUN_00528400((void *)(*(int *)(unaff_EBP - 0x2b28) + 0x18),
                                     (undefined4 *)(unaff_EBP - 0x4b4));
                        *(undefined1 *)(unaff_EBP - 0x2b29) = 1;
                      }
                    }
                    iVar17 = *(int *)(unaff_EBP - 0x2b48);
                    iVar19 = *(int *)(unaff_EBP - 0x2b64);
                    iVar39 = *(int *)(unaff_EBP - 0x2b5c);
                    iVar9 = iVar9 + 1;
                  } while (iVar9 <= iVar17);
                  iVar9 = *(int *)(unaff_EBP - 0x2b90);
                }
                iVar19 = iVar19 + 1;
                *(int *)(unaff_EBP - 0x2b64) = iVar19;
              } while (iVar19 <= iVar17);
            }
            iVar39 = iVar39 + 1;
            *(int *)(unaff_EBP - 0x2b5c) = iVar39;
            iVar19 = iVar9;
          } while (iVar39 <= iVar17);
          if (*(char *)(unaff_EBP - 0x2b29) != '\0') {
            FUN_004c8530(unaff_EBP - 0x608);
            FUN_00402550((void *)(unaff_EBP - 0x608),
                         (longlong *)(*(int *)(unaff_EBP - 0x2b14) + 0x10));
            iVar19 = rand();
            iVar17 = *(int *)(unaff_EBP - 0x2b28);
            *(undefined4 *)(unaff_EBP - 0x5fc) = 2;
            *(float *)(unaff_EBP - 0x5f8) = ((float)iVar19 * 0.4) / 32767.0 + 0.5;
            FUN_00428590((void *)(iVar17 + 8),(undefined4 *)(unaff_EBP - 0x608));
            if (*(int *)(*(int *)(unaff_EBP - 0x2b18) + 0xb8) == 0) {
              pvVar52 = (void *)FUN_004e2320((void *)(unaff_EBP - 0x110),1);
              pvVar29 = (void *)FUN_004e2320((void *)(unaff_EBP - 0x110),0);
              iVar19 = 0;
              iVar17 = 8;
              pCVar36 = (CRefTime *)FUN_00401530(pvVar52,(int *)(unaff_EBP - 0x33ac));
              lVar37 = CRefTime::Millisecs(pCVar36);
              pCVar36 = (CRefTime *)FUN_00401530(pvVar29,(int *)(unaff_EBP - 0x33bc));
              lVar11 = CRefTime::Millisecs(pCVar36);
              pCVar36 = (CRefTime *)FUN_004014b0(pvVar52,(int *)(unaff_EBP - 0x33cc));
              uVar18 = CRefTime::Millisecs(pCVar36);
              pCVar36 = (CRefTime *)FUN_004014b0(pvVar29,(int *)(unaff_EBP - 0x33dc));
              uVar54 = CRefTime::Millisecs(pCVar36);
              FUN_004d1a70(*(void **)(unaff_EBP - 0x2b18),uVar54,uVar18,lVar11,lVar37,iVar17,iVar19)
              ;
            }
            pvVar52 = (void *)FUN_004e2320((void *)(unaff_EBP - 0x110),1);
            pvVar29 = (void *)FUN_004e2320((void *)(unaff_EBP - 0x110),0);
            pCVar36 = (CRefTime *)FUN_00401530(pvVar52,(int *)(unaff_EBP - 0x33ec));
            uVar18 = CRefTime::Millisecs(pCVar36);
            pCVar36 = (CRefTime *)FUN_00401530(pvVar29,(int *)(unaff_EBP - 0x33fc));
            uVar54 = CRefTime::Millisecs(pCVar36);
            pCVar36 = (CRefTime *)FUN_004014b0(pvVar52,(int *)(unaff_EBP - 0x340c));
            piVar20 = (int *)CRefTime::Millisecs(pCVar36);
            pCVar36 = (CRefTime *)FUN_004014b0(pvVar29,(int *)(unaff_EBP - 0x341c));
            lVar37 = CRefTime::Millisecs(pCVar36);
            FUN_004d9160(*(void **)(unaff_EBP - 0x2b18),lVar37,piVar20,uVar54,uVar18);
          }
        }
        pvVar52 = *(void **)(unaff_EBP - 0x2b14);
      }
      cVar3 = *(char *)((int)pvVar52 + 0x68);
      *(undefined4 *)(unaff_EBP - 0x2b5c) = 0x3f800000;
      if (((cVar3 == '<') || (cVar3 == '\v')) || (cVar3 == '>')) {
        *(undefined4 *)(unaff_EBP - 0x2b5c) = 0;
      }
      *(undefined1 *)(unaff_EBP - 0x2b29) = 0;
      if (((cVar3 == '\x1f') &&
          (iVar17 = FUN_00407db0(pvVar52,0xffffffff), iVar17 <= *(int *)((int)pvVar52 + 0x6c))) &&
         (puVar12 = FUN_0040ef90(pvVar52,9), puVar12 != (undefined4 *)0x0)) {
        FUN_004029b0((undefined1 *)(unaff_EBP - 0x2f04));
        *(undefined1 *)(unaff_EBP - 0x2f04) = 9;
        *(undefined4 *)(unaff_EBP - 0x2efc) = 0;
        FUN_00411740(pvVar52,(char *)(unaff_EBP - 0x2f04));
        FUN_004063d0(unaff_EBP - 0x3174);
        uVar24 = *(undefined4 *)((int)pvVar52 + 0xc);
        uVar64 = *(undefined4 *)((int)pvVar52 + 8);
        *(undefined8 *)(unaff_EBP - 0x3164) = *(undefined8 *)(unaff_EBP - 0x2f04);
        uVar1 = *(undefined8 *)(unaff_EBP - 0x2efc);
        *(undefined4 *)(unaff_EBP - 0x3170) = uVar24;
        *(undefined4 *)(unaff_EBP - 0x3168) = uVar24;
        iVar17 = *(int *)(unaff_EBP - 0x2b28);
        *(undefined4 *)(unaff_EBP - 0x3174) = uVar64;
        *(undefined4 *)(unaff_EBP - 0x316c) = uVar64;
        *(undefined8 *)(unaff_EBP - 0x315c) = uVar1;
        uVar24 = *(undefined4 *)(unaff_EBP - 0x2ef0);
        *(undefined4 *)(unaff_EBP - 0x3154) = *(undefined4 *)(unaff_EBP - 0x2ef4);
        *(undefined4 *)(unaff_EBP - 0x3150) = uVar24;
        FUN_00411040((void *)(iVar17 + 0x58),(undefined8 *)(unaff_EBP - 0x3174));
      }
      FUN_00428070(*(void **)(unaff_EBP - 0x2b6c),(undefined4 *)(unaff_EBP - 0x2c78));
      piVar20 = (int *)FUN_00530550(*(void **)(unaff_EBP - 0x2b6c),
                                    (undefined4 *)(unaff_EBP - 0x2d88));
      bVar5 = FUN_0042c6f0((void *)(unaff_EBP - 0x2c78),piVar20);
      if (bVar5) {
        do {
          iVar17 = FUN_00402bc0((int *)(unaff_EBP - 0x2c78));
          iVar17 = *(int *)(iVar17 + 8);
          *(int *)(unaff_EBP - 0x2b64) = iVar17;
          if ((iVar17 != 0) && (0.0 < *(float *)(iVar17 + 0x16c))) {
            *(int *)(unaff_EBP - 0x2b98) = iVar17 + 8;
            piVar20 = (int *)FUN_00530550((void *)((int)pvVar52 + 0x11ac),
                                          (undefined4 *)(unaff_EBP - 0x2fac));
            pvVar52 = (void *)FUN_00530600((void *)((int)pvVar52 + 0x11ac),
                                           (int *)(unaff_EBP - 0x304c),(uint *)(iVar17 + 8));
            bVar5 = FUN_0042c6f0(pvVar52,piVar20);
            if (!bVar5) {
              pfVar25 = (float *)FUN_004013d0((void *)(iVar17 + 0x80),0);
              puVar12 = (undefined4 *)(*(int *)(unaff_EBP - 0x2b14) + 0x10);
              *(float *)(unaff_EBP - 0x2b1c) = *pfVar25 * 0.7 + *(float *)(unaff_EBP - 0x2b4c);
              uVar24 = 0x53a01f;
              FUN_00402a40((void *)(unaff_EBP - 0xe70),puVar12);
              cVar3 = *(char *)(*(int *)(unaff_EBP - 0x2b14) + 0x68);
              if ((((cVar3 == '\x1e') || (cVar3 == '\x1f')) || (cVar3 == ' ')) || (cVar3 == '!')) {
                uVar64 = *(undefined4 *)(unaff_EBP - 0x2b4c);
                uVar66 = 0x53a054;
                FUN_00402a10((ulonglong *)&stack0xfffffff8);
                uVar60 = 0x53a060;
                FUN_004cde40(&stack0xfffffff0,0);
                FUN_004cde40(&stack0xffffffe8,0);
                puVar23 = FUN_00406380((void *)(unaff_EBP - 0x2094),(int)uVar60,
                                       (int)(uVar60 >> 0x20),uVar66,uVar64,uVar24,puVar12);
                puVar23 = FUN_00402cb0((void *)(unaff_EBP - 0x110),(uint *)(unaff_EBP - 0x23c4),
                                       puVar23);
                FUN_00402a40((void *)(unaff_EBP - 0xe70),puVar23);
              }
              puVar27 = (uint *)(*(int *)(unaff_EBP - 0x2b64) + 0x10);
              puVar23 = (uint *)(unaff_EBP - 0x34ac);
              *(uint **)(unaff_EBP - 0x2b40) = puVar27;
              puVar27 = FUN_00402c50((void *)(unaff_EBP - 0x110),(uint *)(unaff_EBP - 0x20c4),
                                     puVar27);
              ppVar28 = (pair<unsigned___int64,unsigned___int64> *)FUN_0041cba0(puVar27);
              ppVar28 = std::pair<unsigned___int64,unsigned___int64>::
                        operator=<std::pair<unsigned___int64,unsigned___int64>,0>
                                  ((pair<unsigned___int64,unsigned___int64> *)(unaff_EBP - 0x1c0c),
                                   ppVar28);
              puVar23 = FUN_0041ce90(ppVar28,puVar23);
              uVar24 = FUN_004dade0(puVar23);
              if ((char)uVar24 != '\0') {
                puVar23 = (uint *)FUN_004e2320(*(void **)(unaff_EBP - 0x2b40),2);
                piVar20 = (int *)(unaff_EBP - 0x34dc);
                pvVar52 = (void *)FUN_004e2320((void *)(unaff_EBP - 0x110),2);
                plVar30 = (longlong *)FUN_00401490(pvVar52,piVar20,puVar23);
                fVar55 = FUN_00401420(plVar30);
                fVar55 = FUN_00401ca0((float)fVar55);
                *(float *)(unaff_EBP - 0x2b48) = (float)fVar55;
                pfVar26 = (float *)FUN_004013d0((void *)(iVar17 + 0x80),2);
                pvVar52 = *(void **)(unaff_EBP - 0x2b14);
                *(float *)(unaff_EBP - 0x2b1c) = *pfVar26 * 0.5;
                pfVar26 = (float *)FUN_004013d0((void *)((int)pvVar52 + 0x80),2);
                fVar56 = *(float *)(unaff_EBP - 0x2b1c) + *pfVar26 + *(float *)(unaff_EBP - 0x2b4c);
                if ((fVar56 < *(float *)(unaff_EBP - 0x2b48) ||
                     fVar56 == *(float *)(unaff_EBP - 0x2b48)) ||
                   (cVar3 = FUN_004d4d80((uint *)(unaff_EBP - 0xe70),*(uint **)(unaff_EBP - 0x2b40),
                                         '\x01',200.0), cVar3 == '\0')) goto LAB_0053a977;
                fVar56 = *(float *)(unaff_EBP - 0x2b64);
                uVar24 = FUN_004d18c0(*(int *)(unaff_EBP - 0x2b14),(int)fVar56);
                if ((char)uVar24 == '\0') {
                  puVar23 = (uint *)((int)fVar56 + 8);
                }
                else {
                  if (*(int *)((int)fVar56 + 0x128) != 0) {
                    FUN_00530690((void *)(*(int *)(unaff_EBP - 0x2b14) + 0x11b4),
                                 (undefined4 *)(unaff_EBP - 0x34fc),(uint *)((int)fVar56 + 8));
                    goto LAB_0053a971;
                  }
                  puVar23 = FUN_00402c50((void *)((int)fVar56 + 0x10),(uint *)(unaff_EBP - 0x26c4),
                                         (uint *)(*(int *)(unaff_EBP - 0x2b14) + 0x10));
                  FUN_00402550((void *)(unaff_EBP - 0xe0),(longlong *)puVar23);
                  puVar12 = (undefined4 *)FUN_004013d0((void *)(unaff_EBP - 0xe0),2);
                  *puVar12 = 0;
                  fVar55 = FUN_004021b0((float *)(unaff_EBP - 0xe0));
                  *(float *)(unaff_EBP - 0x2b1c) = (float)fVar55;
                  if (0.01 < *(float *)(unaff_EBP - 0x2b1c)) {
                    FUN_00401fb0((float *)(unaff_EBP - 0xe0));
                  }
                  iVar17 = *(int *)(unaff_EBP - 0x2b14);
                  *puVar12 = 0x3e800000;
                  if (*(char *)(iVar17 + 0x13c0) == '\0') {
                    bVar5 = FUN_0040f520(iVar17);
                    *(undefined1 *)(unaff_EBP - 0x2c08) = 0;
                    if (bVar5) goto LAB_0053a28f;
                  }
                  else {
LAB_0053a28f:
                    *(undefined1 *)(unaff_EBP - 0x2c08) = 1;
                  }
                  pvVar52 = *(void **)(unaff_EBP - 0x2b14);
                  fVar55 = FUN_0040f8f0((int)pvVar52,(uint)*(byte *)((int)pvVar52 + 0x68));
                  pfVar26 = *(float **)(unaff_EBP - 0x2bb8);
                  *(float *)(unaff_EBP - 0x2b1c) = (float)fVar55;
                  fVar55 = FUN_004024e0(*pfVar26 / *pfVar25);
                  FUN_00401610((void *)(unaff_EBP - 0xe0),(float)fVar55);
                  FUN_00401610((void *)(unaff_EBP - 0xe0),*(float *)(unaff_EBP - 0x2b1c));
                  bVar6 = *(byte *)((int)pvVar52 + 0x68);
                  if (((bVar6 == 0x57) || (bVar6 == 0x58)) ||
                     ((bVar6 == 0x1e || (((bVar6 == 0x1f || (bVar6 == 0x20)) || (bVar6 == 0x21))))))
                  {
                    fVar55 = FUN_00409d10((uint)bVar6);
                    *(float *)(unaff_EBP - 0x2b1c) = (float)fVar55;
                    fVar55 = FUN_00411ad0(pvVar52);
                    fVar56 = *(float *)(unaff_EBP - 0x2b1c);
                    *(float *)(unaff_EBP - 0x2b48) = (float)fVar55;
                    *(float *)(unaff_EBP - 0x2b1c) = fVar56 * *(float *)(unaff_EBP - 0x2b48);
                    iVar17 = rand();
                    fVar56 = (1.25 - ((float)iVar17 * 0.5) / 32767.0) *
                             *(float *)(unaff_EBP - 0x2b1c) * 1.0;
                  }
                  else {
                    *(undefined4 *)(unaff_EBP - 0x2b90) = *(undefined4 *)((int)pvVar52 + 0x13b4);
                    fVar55 = FUN_00409d10((uint)bVar6);
                    *(float *)(unaff_EBP - 0x2b1c) = (float)fVar55;
                    fVar55 = FUN_00408f70(pvVar52);
                    fVar56 = *(float *)(unaff_EBP - 0x2b90);
                    *(float *)(unaff_EBP - 0x2b48) = (float)fVar55;
                    *(float *)(unaff_EBP - 0x2b1c) =
                         *(float *)(unaff_EBP - 0x2b1c) * *(float *)(unaff_EBP - 0x2b48) *
                         (fVar56 * fVar56 * 5.0 + *(float *)(unaff_EBP - 0x2b5c));
                    iVar17 = rand();
                    fVar56 = ((1.25 - ((float)iVar17 * 0.5) / 32767.0) + 0.0) *
                             *(float *)(unaff_EBP - 0x2b1c);
                  }
                  cVar3 = *(char *)(unaff_EBP - 0x2c08);
                  *(float *)(unaff_EBP - 0x2b20) = fVar56;
                  if (cVar3 != '\0') {
                    *(float *)(unaff_EBP - 0x2b20) = fVar56 * 2.0;
                  }
                  iVar17 = *(int *)(unaff_EBP - 0x2b14);
                  bVar5 = FUN_00530540(iVar17 + 0x11ac);
                  if ((!bVar5) ||
                     (*(undefined1 *)(unaff_EBP - 0x2b31) = 1, 0 < *(int *)(iVar17 + 300))) {
                    *(undefined1 *)(unaff_EBP - 0x2b31) = 0;
                  }
                  puVar23 = *(uint **)(unaff_EBP - 0x2b98);
                  FUN_00530690((void *)(iVar17 + 0x11ac),(undefined4 *)(unaff_EBP - 0x350c),puVar23)
                  ;
                  iVar17 = *(int *)(unaff_EBP - 0x2b14);
                  *(undefined1 *)(iVar17 + 0x13b8) = 1;
                  bVar6 = *(byte *)(iVar17 + 0x68);
                  if (((bVar6 == 0x1e) || (bVar6 == 0x1f)) || ((bVar6 == 0x20 || (bVar6 == 0x21))))
                  {
                    cVar3 = '\x01';
                  }
                  else {
                    cVar3 = '\0';
                  }
                  pvVar52 = *(void **)(unaff_EBP - 0x2b14);
                  fVar56 = *(float *)(unaff_EBP - 0x2b64);
                  cVar3 = FUN_004cfd50(*(void **)(unaff_EBP - 0x2b18),fVar56,pvVar52,
                                       *(float *)(unaff_EBP - 0x2b20),
                                       (char)*(undefined4 *)(unaff_EBP - 0x2c08),
                                       (char)*(undefined4 *)(unaff_EBP - 0x2c04),
                                       *(float *)((int)pvVar52 + 0x13b4),(int)pvVar52 + 0x10,
                                       (float *)(unaff_EBP - 0xe0),
                                       *(undefined4 **)(unaff_EBP - 0x2b28),
                                       (undefined4 *)(unaff_EBP - 0x2be8),cVar3,(uint)bVar6,0,'\x01'
                                      );
                  if (cVar3 != '\0') {
                    pvVar52 = *(void **)(unaff_EBP - 0x2b14);
                    if (*(char *)((int)pvVar52 + 0x68) == '\x1e') {
                      bVar5 = FUN_0040f220(pvVar52,0.25);
                      pvVar52 = *(void **)(unaff_EBP - 0x2b14);
                      if (bVar5) {
                        if (*(char *)((int)pvVar52 + 0x141) == '\0') {
                          FUN_004029b0((undefined1 *)(unaff_EBP - 0x2f94));
                          pvVar52 = *(void **)(unaff_EBP - 0x2b14);
                          *(undefined1 *)(unaff_EBP - 0x2f94) = 9;
                          *(undefined4 *)(unaff_EBP - 0x2f8c) = 30000;
                          FUN_00411740(pvVar52,(char *)(unaff_EBP - 0x2f94));
                          FUN_004063d0(unaff_EBP - 0x30ac);
                          uVar24 = *(undefined4 *)(*(int *)(unaff_EBP - 0x2b14) + 8);
                          uVar64 = *(undefined4 *)(*(int *)(unaff_EBP - 0x2b14) + 0xc);
                          *(undefined8 *)(unaff_EBP - 0x309c) = *(undefined8 *)(unaff_EBP - 0x2f94);
                          uVar1 = *(undefined8 *)(unaff_EBP - 0x2f8c);
                          *(undefined4 *)(unaff_EBP - 0x30a8) = uVar64;
                          *(undefined4 *)(unaff_EBP - 0x30a0) = uVar64;
                          iVar17 = *(int *)(unaff_EBP - 0x2b28);
                          *(undefined4 *)(unaff_EBP - 0x30ac) = uVar24;
                          *(undefined4 *)(unaff_EBP - 0x30a4) = uVar24;
                          *(undefined8 *)(unaff_EBP - 0x3094) = uVar1;
                          uVar24 = *(undefined4 *)(unaff_EBP - 0x2f80);
                          *(undefined4 *)(unaff_EBP - 0x308c) = *(undefined4 *)(unaff_EBP - 0x2f84);
                          *(undefined4 *)(unaff_EBP - 0x3088) = uVar24;
                          FUN_00411040((void *)(iVar17 + 0x58),(undefined8 *)(unaff_EBP - 0x30ac));
                          FUN_004c8530(unaff_EBP - 0x9c8);
                          iVar17 = *(int *)(unaff_EBP - 0x2b14);
                          *(undefined4 *)(unaff_EBP - 0x9bc) = 0x2f;
                          FUN_00402550((void *)(unaff_EBP - 0x9c8),(longlong *)(iVar17 + 0x10));
                          FUN_00428590((void *)(*(int *)(unaff_EBP - 0x2b28) + 8),
                                       (undefined4 *)(unaff_EBP - 0x9c8));
                        }
                        pvVar52 = *(void **)(unaff_EBP - 0x2b14);
                      }
                    }
                    if (*(char *)(unaff_EBP - 0x2b31) != '\0') {
                      *(int *)((int)pvVar52 + 0x70) = *(int *)((int)pvVar52 + 0x70) + 1;
                      FUN_004103a0((int)pvVar52);
                      *(undefined4 *)(*(int *)(unaff_EBP - 0x2b14) + 0x74) = 0;
                    }
                    cVar3 = *(char *)(unaff_EBP - 0x2c04);
                    iVar17 = *(int *)(unaff_EBP - 0x2b14);
                    if ((((cVar3 != '\0') && (*(char *)(iVar17 + 0x140) == '\x04')) &&
                        (*(char *)(iVar17 + 0x141) == '\0')) &&
                       (fVar58 = *(float *)(iVar17 + 0x13b4) + *(float *)(iVar17 + 0x1190),
                       *(float *)(iVar17 + 0x1190) = fVar58, 1.0 < fVar58)) {
                      *(undefined4 *)(iVar17 + 0x1190) = 0x3f800000;
                    }
                    if ((((*(char *)(*(int *)(unaff_EBP - 0x2b18) + 0xb4) == '\0') ||
                         (iVar17 == *(int *)(*(int *)(unaff_EBP - 0x2b18) + 0xb8))) &&
                        ((*(char *)(unaff_EBP - 0x2b29) == '\0' &&
                         ((cVar3 == '\0' && (*(char *)(iVar17 + 0x68) != '\x1e')))))) &&
                       (*(char *)(iVar17 + 0x68) != ' ')) {
                      iVar19 = rand();
                      iVar17 = *(int *)(unaff_EBP - 0x2b14);
                      *(float *)(unaff_EBP - 0x2b1c) =
                           (1.0 - ((float)iVar19 * 2.0) / 32767.0) * 0.05 + 0.1;
                      iVar17 = FUN_004084b0(iVar17);
                      *(float *)(unaff_EBP - 0x2b40) =
                           ((float)iVar17 / 500.0) * *(float *)(unaff_EBP - 0x2b1c);
                      uVar18 = rand();
                      uVar18 = uVar18 & 0x80000007;
                      bVar5 = uVar18 == 0;
                      if ((int)uVar18 < 0) {
                        bVar5 = (uVar18 - 1 | 0xfffffff8) == 0xffffffff;
                      }
                      fVar58 = *(float *)(unaff_EBP - 0x2b40);
                      if (bVar5) {
                        fVar58 = fVar58 * 1.5;
                      }
                      iVar17 = *(int *)(unaff_EBP - 0x2b14);
                      fVar58 = *(float *)(iVar17 + 0x170) + fVar58;
                      *(float *)(iVar17 + 0x170) = fVar58;
                      if (1.0 < fVar58) {
                        *(undefined4 *)(iVar17 + 0x170) = 0x3f800000;
                      }
                    }
                    *(undefined1 *)(unaff_EBP - 0x2b29) = 1;
                  }
                }
                cVar3 = *(char *)(*(int *)(unaff_EBP - 0x2b14) + 0x68);
                if ((((cVar3 == '!') || (cVar3 == ' ')) && (*(char *)(unaff_EBP - 0x2c70) != '\0'))
                   && ((uVar24 = FUN_004d18c0(*(int *)(unaff_EBP - 0x2b14),(int)fVar56),
                       (char)uVar24 == '\0' &&
                       (*(char *)(*(int *)(unaff_EBP - 0x2b14) + 0x141) == '\x01')))) {
                  FUN_00422a90(unaff_EBP - 0xd28);
                  FUN_00402a40((void *)(unaff_EBP - 0xd08),(undefined4 *)((int)fVar56 + 0x10));
                  iVar17 = rand();
                  pvVar52 = *(void **)(unaff_EBP - 0x2b14);
                  *(float *)(unaff_EBP - 0x2b48) = 1.25 - ((float)iVar17 * 0.5) / 32767.0;
                  fVar55 = FUN_00411ad0(pvVar52);
                  *(float *)(unaff_EBP - 0x2b1c) = (float)fVar55;
                  iVar17 = *(int *)(unaff_EBP - 0x2b14);
                  *(float *)(unaff_EBP - 0xd18) =
                       *(float *)(unaff_EBP - 0x2b1c) * *(float *)(unaff_EBP - 0x2b48) * 1.0 * -0.1;
                  bVar5 = FUN_0040f520(iVar17);
                  iVar17 = *(int *)(unaff_EBP - 0x2b14);
                  *(bool *)(unaff_EBP - 0xd14) = bVar5;
                  *(undefined4 *)(unaff_EBP - 0xd28) = *(undefined4 *)(iVar17 + 8);
                  pvVar52 = *(void **)(unaff_EBP - 0x2b28);
                  *(undefined4 *)(unaff_EBP - 0xd24) = *(undefined4 *)(iVar17 + 0xc);
                  *(uint *)(unaff_EBP - 0xd20) = *puVar23;
                  *(uint *)(unaff_EBP - 0xd1c) = puVar23[1];
                  FUN_00428400(pvVar52,(undefined4 *)(unaff_EBP - 0xd28));
                  FUN_004c8530(unaff_EBP - 0x590);
                  fVar58 = *(float *)(unaff_EBP - 0x2b14);
                  FUN_00402550((void *)(unaff_EBP - 0x590),(longlong *)((int)fVar58 + 0x10));
                  iVar17 = *(int *)(unaff_EBP - 0x2b28);
                  *(undefined4 *)(unaff_EBP - 0x580) = 0x3f800000;
                  *(undefined4 *)(unaff_EBP - 0x584) = 0x2a;
                  FUN_00428590((void *)(iVar17 + 8),(undefined4 *)(unaff_EBP - 0x590));
                  pvVar52 = *(void **)(unaff_EBP - 0x2b18);
                  if ((*(char *)((int)pvVar52 + 0xb4) == '\0') ||
                     ((fVar58 == *(float *)((int)pvVar52 + 0xb8) &&
                      (fVar56 == *(float *)((int)pvVar52 + 0xb8))))) {
                    FUN_004cea80(pvVar52,(uint *)(unaff_EBP - 0xd28),*(void **)(unaff_EBP - 0x2b28),
                                 (undefined4 *)(unaff_EBP - 0x2be8));
                  }
                }
              }
            }
LAB_0053a971:
            pvVar52 = *(void **)(unaff_EBP - 0x2b14);
          }
LAB_0053a977:
          FUN_00407a30((void *)(unaff_EBP - 0x2c78),(int *)(unaff_EBP - 0x2fb4));
          piVar20 = (int *)FUN_00530550(*(void **)(unaff_EBP - 0x2b6c),
                                        (undefined4 *)(unaff_EBP - 0x2d88));
          bVar5 = FUN_0042c6f0((void *)(unaff_EBP - 0x2c78),piVar20);
        } while (bVar5);
        if (*(char *)(unaff_EBP - 0x2b29) != '\0') {
          iVar17 = *(int *)(unaff_EBP - 0x2b14);
          if ((*(char *)(iVar17 + 0x991) != '\r') &&
             ((*(char *)(iVar17 + 0xaa8) == '\0' || (*(char *)(iVar17 + 0x990) == '\x03')))) {
            FUN_004084b0(iVar17);
            FUN_00537cef();
            return;
          }
code_r0x00537cef:
          unaff_EDI = *(void **)(unaff_EBP - 0x2b18);
LAB_00537cf5:
          pvVar52 = *(void **)(unaff_EBP - 0x2b14);
          goto LAB_00537cfb;
        }
      }
LAB_0053b968:
      unaff_EDI = *(void **)(unaff_EBP - 0x2b18);
      goto LAB_00537cfb;
    }
LAB_0053e0c5:
    unaff_EDI = *(void **)(unaff_EBP - 0x2b18);
    goto LAB_00537d01;
  case '\b':
    pvVar52 = *(void **)(unaff_EBP - 0x2b14);
    if (((*(char *)((int)unaff_EDI + 0xb4) == '\0') && (*(char *)((int)pvVar52 + 0x60) != '\0')) ||
       (pvVar52 == *(void **)((int)unaff_EDI + 0xb8))) {
      iVar17 = FUN_00407db0(pvVar52,0xffffffff);
      if (*(int *)((int)*(void **)(unaff_EBP - 0x2b14) + 0x6c) <= iVar17) {
        iVar19 = FUN_00407db0(*(void **)(unaff_EBP - 0x2b14),0xffffffff);
        iVar17 = *(int *)(unaff_EBP - 0x2b14);
        if (iVar19 < *(int *)(iVar17 + 0x6c) + *(int *)(unaff_EBP - 0x2b24)) {
          FUN_004c8530(unaff_EBP - 0x7e8);
          FUN_00402550((void *)(unaff_EBP - 0x7e8),(longlong *)(iVar17 + 0x10));
          iVar19 = rand();
          iVar17 = *(int *)(unaff_EBP - 0x2b28);
          *(undefined4 *)(unaff_EBP - 0x7dc) = 0x10;
          *(float *)(unaff_EBP - 0x7d8) = ((float)iVar19 * 0.25) / 32767.0 + 1.0;
          FUN_00428590((void *)(iVar17 + 8),(undefined4 *)(unaff_EBP - 0x7e8));
        }
      }
      iVar17 = *(int *)(*(int *)(unaff_EBP - 0x2b14) + 0x6c);
      if (iVar17 / 200 != (iVar17 + *(int *)(unaff_EBP - 0x2b24)) / 200) {
        FUN_004c8530(unaff_EBP - 0x698);
        FUN_00402550((void *)(unaff_EBP - 0x698),(longlong *)(*(int *)(unaff_EBP - 0x2b14) + 0x10));
        iVar17 = *(int *)(unaff_EBP - 0x2b28);
        fVar56 = *(float *)(*(int *)(unaff_EBP - 0x2b14) + 0x144);
        *(undefined4 *)(unaff_EBP - 0x68c) = 0x37;
        *(float *)(unaff_EBP - 0x688) = fVar56 * 0.5 + 1.0;
        FUN_00428590((void *)(iVar17 + 8),(undefined4 *)(unaff_EBP - 0x698));
      }
      goto LAB_00537cf5;
    }
    break;
  case '\x16':
  case '\x17':
  case '\x1a':
    pvVar52 = *(void **)(unaff_EBP - 0x2b14);
    if (((*(char *)((int)unaff_EDI + 0xb4) != '\0') || (*(char *)((int)pvVar52 + 0x60) == '\0')) &&
       (pvVar52 != *(void **)((int)unaff_EDI + 0xb8))) goto LAB_00537d01;
    iVar17 = FUN_00407db0(pvVar52,0xffffffff);
    if ((*(int *)((int)pvVar52 + 0x6c) <= iVar17) &&
       (iVar17 = FUN_00407db0(pvVar52,0xffffffff),
       iVar17 < *(int *)((int)pvVar52 + 0x6c) + *(int *)(unaff_EBP - 0x2b24))) {
      fVar55 = FUN_0040fb20((int)pvVar52,(uint)*(byte *)((int)pvVar52 + 0x68),-1);
      *(float *)(unaff_EBP - 0x2b1c) = (float)fVar55;
      if (*(float *)(unaff_EBP - 0x2b1c) <= 0.0) {
        fVar56 = *(float *)((int)pvVar52 + 0x170) - *(float *)((int)pvVar52 + 0x144);
      }
      else {
        fVar55 = FUN_0040fb20((int)pvVar52,(uint)*(byte *)((int)pvVar52 + 0x68),-1);
        fVar56 = *(float *)((int)pvVar52 + 0x170);
        *(float *)(unaff_EBP - 0x2b1c) = (float)fVar55;
        fVar56 = fVar56 - *(float *)(unaff_EBP - 0x2b1c);
      }
      *(float *)((int)pvVar52 + 0x170) = fVar56;
      if (*(float *)((int)pvVar52 + 0x170) <= 0.0 && *(float *)((int)pvVar52 + 0x170) != 0.0) {
        *(undefined4 *)((int)pvVar52 + 0x170) = 0;
      }
      *(undefined4 *)((int)pvVar52 + 0x13b4) = *(undefined4 *)((int)pvVar52 + 0x144);
      *(undefined4 *)((int)pvVar52 + 0x144) = 0;
    }
    iVar17 = FUN_00407db0(pvVar52,0xffffffff);
    if (iVar17 < *(int *)((int)pvVar52 + 0x6c)) {
      param_2 = *(int *)(unaff_EBP - 0x2b24);
LAB_0053cf44:
      if ((*(char *)((int)pvVar52 + 0x68) != '\x1a') || (*(float *)((int)pvVar52 + 0x13b4) <= 0.0))
      goto LAB_00537d01;
      iVar17 = FUN_00407db0(pvVar52,0xffffffff);
      if (iVar17 + 300 < *(int *)((int)pvVar52 + 0x6c)) goto LAB_00537cfb;
      iVar17 = FUN_00407db0(pvVar52,0xffffffff);
      param_2 = *(int *)(unaff_EBP - 0x2b24);
      if (*(int *)((int)pvVar52 + 0x6c) + param_2 <= iVar17 + 300) goto LAB_00537d01;
    }
    else {
      iVar17 = FUN_00407db0(pvVar52,0xffffffff);
      param_2 = *(int *)(unaff_EBP - 0x2b24);
      if (*(int *)((int)pvVar52 + 0x6c) + param_2 <= iVar17) goto LAB_0053cf44;
    }
    FUN_00422890((undefined4 *)(unaff_EBP - 0x578));
    pfVar25 = FUN_00412670((void *)((int)pvVar52 + 0x160),(float *)(unaff_EBP - 0x19e8));
    puVar12 = (undefined4 *)FUN_004e1520((float *)(unaff_EBP - 0x13a0),100.0,pfVar25);
    FUN_00401060((void *)(unaff_EBP - 0x53c),puVar12);
    bVar6 = *(byte *)((int)pvVar52 + 0x68);
    fVar56 = *(float *)((int)pvVar52 + 0x13b4);
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
    fVar55 = FUN_0040fb20((int)pvVar52,(uint)bVar6,-1);
    *(float *)(unaff_EBP - 0x2b1c) = (float)fVar55;
    if (*(float *)(unaff_EBP - 0x2b1c) <= 0.0) {
      uVar24 = *(undefined4 *)(unaff_EBP - 0x2b40);
    }
    else {
      fVar55 = FUN_0040fb20((int)pvVar52,(uint)*(byte *)((int)pvVar52 + 0x68),-1);
      *(float *)(unaff_EBP - 0x524) = (float)fVar55;
      uVar24 = *(undefined4 *)(unaff_EBP - 0x524);
    }
    *(undefined4 *)(unaff_EBP - 0x520) = uVar24;
    if ((0.0 < *(float *)((int)pvVar52 + 0x13b4)) ||
       (cVar3 = *(char *)((int)pvVar52 + 0x68), *(undefined1 *)(unaff_EBP - 0x51c) = 0,
       cVar3 == '\x17')) {
      *(undefined1 *)(unaff_EBP - 0x51c) = 1;
    }
    FUN_00402a40((void *)(unaff_EBP - 0x560),(undefined4 *)((int)pvVar52 + 0x10));
    pvVar29 = *(void **)(unaff_EBP - 0x2b14);
    *(undefined4 *)(unaff_EBP - 0x578) = *(undefined4 *)((int)pvVar29 + 8);
    *(undefined4 *)(unaff_EBP - 0x574) = *(undefined4 *)((int)pvVar29 + 0xc);
    FUN_00401060((void *)(unaff_EBP - 0x570),(undefined4 *)((int)pvVar29 + 0x1b0));
    if ((*(char *)(unaff_EBP - 0x51c) != '\0') &&
       (puVar12 = FUN_0040ef90(pvVar29,10), puVar12 != (undefined4 *)0x0)) {
      FUN_004029b0((undefined1 *)(unaff_EBP - 0x2f34));
      *(undefined1 *)(unaff_EBP - 0x2f34) = 10;
      *(undefined4 *)(unaff_EBP - 0x2f2c) = 0;
      FUN_00411740(pvVar29,(char *)(unaff_EBP - 0x2f34));
      FUN_004063d0(unaff_EBP - 0x319c);
      uVar24 = *(undefined4 *)((int)pvVar29 + 8);
      uVar1 = *(undefined8 *)(unaff_EBP - 0x2f34);
      uVar64 = *(undefined4 *)((int)pvVar29 + 0xc);
      *(undefined4 *)(unaff_EBP - 0x319c) = uVar24;
      *(undefined4 *)(unaff_EBP - 0x3194) = uVar24;
      *(undefined8 *)(unaff_EBP - 0x318c) = uVar1;
      iVar17 = *(int *)(unaff_EBP - 0x2b28);
      *(undefined8 *)(unaff_EBP - 0x3184) = *(undefined8 *)(unaff_EBP - 0x2f2c);
      uVar1 = *(undefined8 *)(unaff_EBP - 0x2f24);
      *(undefined4 *)(unaff_EBP - 0x3198) = uVar64;
      *(undefined4 *)(unaff_EBP - 0x3190) = uVar64;
      *(undefined8 *)(unaff_EBP - 0x317c) = uVar1;
      FUN_00411040((void *)(iVar17 + 0x58),(undefined8 *)(unaff_EBP - 0x319c));
    }
    bVar6 = *(byte *)((int)pvVar29 + 0x68);
    if (bVar6 == 0x1a) {
      uVar24 = *(undefined4 *)((int)pvVar29 + 0xb0);
      *(undefined4 *)(unaff_EBP - 0x518) = 2;
      *(undefined4 *)(unaff_EBP - 0x528) = uVar24;
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
    *(undefined4 *)(unaff_EBP - 0x2b90) = *(undefined4 *)((int)pvVar29 + 0x13b4);
    fVar55 = FUN_00409d10((uint)bVar6);
    *(float *)(unaff_EBP - 0x2b1c) = (float)fVar55;
    fVar55 = FUN_00408f70(pvVar29);
    fVar56 = *(float *)(unaff_EBP - 0x2b90);
    *(float *)(unaff_EBP - 0x2b48) = (float)fVar55;
    *(float *)(unaff_EBP - 0x2b1c) =
         *(float *)(unaff_EBP - 0x2b1c) * *(float *)(unaff_EBP - 0x2b48) *
         (fVar56 * fVar56 * *(float *)(unaff_EBP - 0x2b40) + *(float *)(unaff_EBP - 0x2b20));
    iVar19 = rand();
    iVar17 = *(int *)(unaff_EBP - 0x2b18);
    *(float *)(unaff_EBP - 0x530) =
         ((1.25 - ((float)iVar19 * 0.5) / 32767.0) + 0.0) * *(float *)(unaff_EBP - 0x2b1c);
    FUN_00428360((void *)(iVar17 + 0x14),(undefined4 *)(unaff_EBP - 0x578));
    FUN_00428360((void *)(*(int *)(unaff_EBP - 0x2b28) + 0x20),(undefined4 *)(unaff_EBP - 0x578));
    FUN_004c8530(unaff_EBP - 0x180);
    FUN_00402550((void *)(unaff_EBP - 0x180),(longlong *)((int)pvVar52 + 0x10));
    pvVar52 = *(void **)(unaff_EBP - 0x2b14);
    cVar3 = *(char *)((int)pvVar52 + 0x68);
    if ((cVar3 == '\x16') || (cVar3 == '\x17')) {
      iVar17 = rand();
      fVar56 = ((float)iVar17 * 0.5) / 32767.0;
      if (*(char *)(unaff_EBP - 0x51c) != '\0') {
        fVar56 = fVar56 + 1.0;
        *(undefined4 *)(unaff_EBP - 0x174) = 0x16;
        goto LAB_0053d3cc;
      }
      fVar56 = fVar56 + 2.0;
    }
    else {
      if (cVar3 != '\x1a') {
        iVar17 = rand();
        *(undefined4 *)(unaff_EBP - 0x174) = 0x16;
        fVar56 = ((float)iVar17 * 0.5) / 32767.0 + 1.0;
        goto LAB_0053d3cc;
      }
      iVar17 = rand();
      fVar56 = ((float)iVar17 * 0.51) / 32767.0 + 0.7;
    }
    *(undefined4 *)(unaff_EBP - 0x174) = 0xf;
LAB_0053d3cc:
    iVar17 = *(int *)(unaff_EBP - 0x2b28);
    *(float *)(unaff_EBP - 0x170) = fVar56;
    FUN_00428590((void *)(iVar17 + 8),(undefined4 *)(unaff_EBP - 0x180));
    unaff_EDI = *(void **)(unaff_EBP - 0x2b18);
    goto LAB_00537cfb;
  case '\x18':
  case '\x19':
  case '\x1b':
  case '$':
  case ';':
  case '?':
  case '@':
    iVar17 = *(int *)(unaff_EBP - 0x2b14);
    if (((*(char *)((int)unaff_EDI + 0xb4) == '\0') && (*(char *)(iVar17 + 0x60) != '\0')) ||
       (iVar17 == *(int *)((int)unaff_EDI + 0xb8))) {
      if (*(int *)(iVar17 + 0x6c) / 200 == (*(int *)(iVar17 + 0x6c) + param_2) / 200)
      goto LAB_00537cf5;
      FUN_004c8530(unaff_EBP - 0x740);
      pvVar52 = *(void **)(unaff_EBP - 0x2b14);
      FUN_00402550((void *)(unaff_EBP - 0x740),(longlong *)((int)pvVar52 + 0x10));
      fVar56 = *(float *)((int)pvVar52 + 0x144);
      iVar17 = *(int *)(unaff_EBP - 0x2b28);
      *(undefined4 *)(unaff_EBP - 0x734) = 0x37;
      *(float *)(unaff_EBP - 0x730) = fVar56 * 0.5 + 1.0;
      FUN_00428590((void *)(iVar17 + 8),(undefined4 *)(unaff_EBP - 0x740));
      goto LAB_00537cfb;
    }
    break;
  case '\x1c':
  case '^':
  case '_':
    pvVar52 = *(void **)(unaff_EBP - 0x2b14);
    if (((*(char *)((int)unaff_EDI + 0xb4) != '\0') || (*(char *)((int)pvVar52 + 0x60) == '\0')) &&
       (pvVar52 != *(void **)((int)unaff_EDI + 0xb8))) break;
    if (cVar3 == 'h') {
      if (*(int *)((int)pvVar52 + 0x6c) == 0) {
        fVar56 = *(float *)((int)pvVar52 + 0x170) - *(float *)((int)pvVar52 + 0x144);
        *(float *)((int)pvVar52 + 0x170) = fVar56;
        if (fVar56 < 0.0) {
          *(undefined4 *)((int)pvVar52 + 0x170) = 0;
        }
        pvVar29 = *(void **)(unaff_EBP - 0x2b14);
        *(undefined4 *)((int)pvVar29 + 0x13b4) = *(undefined4 *)((int)pvVar52 + 0x144);
        *(undefined4 *)((int)pvVar29 + 0x144) = 0;
        pvVar52 = pvVar29;
      }
    }
    else {
      if (cVar3 == '\x1c') {
        *(float *)((int)pvVar52 + 0x170) =
             *(float *)((int)pvVar52 + 0x170) - *(float *)(unaff_EBP - 0x2b88) * 0.0002;
      }
      else {
        iVar17 = FUN_00407db0(pvVar52,0xffffffff);
        pvVar52 = *(void **)(unaff_EBP - 0x2b14);
        if (iVar17 < *(int *)((int)pvVar52 + 0x6c)) {
LAB_0053bc5a:
          param_2 = *(int *)(unaff_EBP - 0x2b24);
        }
        else {
          iVar17 = FUN_00407db0(pvVar52,0xffffffff);
          param_2 = *(int *)(unaff_EBP - 0x2b24);
          if (iVar17 < *(int *)((int)pvVar52 + 0x6c) + param_2) {
            fVar55 = FUN_0040fb20((int)pvVar52,(uint)*(byte *)((int)pvVar52 + 0x68),-1);
            *(float *)(unaff_EBP - 0x2b1c) = (float)fVar55;
            *(float *)((int)pvVar52 + 0x170) =
                 *(float *)((int)pvVar52 + 0x170) - *(float *)(unaff_EBP - 0x2b1c);
            puVar12 = FUN_0040ef90(pvVar52,9);
            if (puVar12 != (undefined4 *)0x0) {
              FUN_004029b0((undefined1 *)(unaff_EBP - 0x2ed4));
              *(undefined1 *)(unaff_EBP - 0x2ed4) = 9;
              *(undefined4 *)(unaff_EBP - 0x2ecc) = 0;
              FUN_00411740(pvVar52,(char *)(unaff_EBP - 0x2ed4));
              FUN_004063d0(unaff_EBP - 0x314c);
              uVar24 = *(undefined4 *)((int)pvVar52 + 0xc);
              uVar64 = *(undefined4 *)((int)pvVar52 + 8);
              *(undefined8 *)(unaff_EBP - 0x313c) = *(undefined8 *)(unaff_EBP - 0x2ed4);
              uVar1 = *(undefined8 *)(unaff_EBP - 0x2ecc);
              *(undefined4 *)(unaff_EBP - 0x3148) = uVar24;
              *(undefined4 *)(unaff_EBP - 0x3140) = uVar24;
              iVar17 = *(int *)(unaff_EBP - 0x2b28);
              *(undefined4 *)(unaff_EBP - 0x314c) = uVar64;
              *(undefined4 *)(unaff_EBP - 0x3144) = uVar64;
              *(undefined8 *)(unaff_EBP - 0x3134) = uVar1;
              *(undefined8 *)(unaff_EBP - 0x312c) = *(undefined8 *)(unaff_EBP - 0x2ec4);
              FUN_00411040((void *)(iVar17 + 0x58),(undefined8 *)(unaff_EBP - 0x314c));
            }
            goto LAB_0053bc5a;
          }
        }
        pvVar52 = *(void **)(unaff_EBP - 0x2b14);
      }
      if (*(float *)((int)pvVar52 + 0x170) <= 0.0 && *(float *)((int)pvVar52 + 0x170) != 0.0) {
        *(undefined4 *)((int)pvVar52 + 0x170) = 0;
        break;
      }
    }
    iVar17 = FUN_00407db0(pvVar52,0xffffffff);
    pvVar52 = *(void **)(unaff_EBP - 0x2b14);
    param_2 = *(int *)(unaff_EBP - 0x2b24);
    if (*(int *)((int)pvVar52 + 0x6c) + param_2 < iVar17) goto LAB_00537d01;
    iVar17 = FUN_00407db0(pvVar52,0xffffffff);
    iVar19 = FUN_00411d60(*(void **)(unaff_EBP - 0x2b14),0xffffffff);
    if (iVar17 + iVar19 <= *(int *)((int)*(void **)(unaff_EBP - 0x2b14) + 0x6c)) goto LAB_00537cf5;
    iVar17 = FUN_00407db0(*(void **)(unaff_EBP - 0x2b14),0xffffffff);
    pvVar52 = *(void **)(unaff_EBP - 0x2b14);
    if (iVar17 < *(int *)((int)pvVar52 + 0x6c)) {
      param_2 = *(int *)(unaff_EBP - 0x2b24);
LAB_0053bc91:
      if ((*(char *)((int)pvVar52 + 0x68) != '_') && (*(char *)((int)pvVar52 + 0x68) != '\x1c'))
      goto LAB_00537d01;
      iVar39 = FUN_00407db0(pvVar52,0xffffffff);
      iVar17 = *(int *)((int)pvVar52 + 0x6c);
      iVar19 = *(int *)(unaff_EBP - 0x2b24);
      iVar9 = FUN_00407db0(*(void **)(unaff_EBP - 0x2b14),0xffffffff);
      if ((*(int *)(*(int *)(unaff_EBP - 0x2b14) + 0x6c) - iVar9) / 200 ==
          ((iVar17 + iVar19) - iVar39) / 200) goto LAB_00537cf5;
      iVar17 = FUN_00407db0(*(void **)(unaff_EBP - 0x2b14),0xffffffff);
      pvVar52 = *(void **)(unaff_EBP - 0x2b14);
      param_2 = *(int *)(unaff_EBP - 0x2b24);
      if (*(int *)((int)pvVar52 + 0x6c) + param_2 <= iVar17) goto LAB_00537d01;
    }
    else {
      iVar17 = FUN_00407db0(pvVar52,0xffffffff);
      param_2 = *(int *)(unaff_EBP - 0x2b24);
      if (*(int *)((int)pvVar52 + 0x6c) + param_2 <= iVar17) goto LAB_0053bc91;
    }
    puVar12 = (undefined4 *)(*(int *)(unaff_EBP - 0x2b14) + 0x160);
    *(undefined4 **)(unaff_EBP - 0x2b50) = puVar12;
    FUN_00401060((void *)(unaff_EBP - 0x40),puVar12);
    fVar55 = FUN_004021b0((float *)(unaff_EBP - 0x40));
    *(float *)(unaff_EBP - 0x2b1c) = (float)fVar55;
    if (0.0 < *(float *)(unaff_EBP - 0x2b1c)) {
      FUN_00401fb0((float *)(unaff_EBP - 0x40));
    }
    FUN_00411800(*(void **)(unaff_EBP - 0x2b14),(uint *)(unaff_EBP - 0x314));
    uVar60 = 0x100000000;
    fVar56 = 200.0;
    pfVar25 = FUN_00412670(puVar12,(float *)(unaff_EBP - 0x1328));
    fVar55 = (float10)FUN_004d6730(*(void **)(unaff_EBP - 0x2b18),(uint *)(unaff_EBP - 0x314),
                                   pfVar25,fVar56,(char)uVar60,(char)(uVar60 >> 0x20));
    *(float *)(unaff_EBP - 0x2b1c) = (float)fVar55;
    if (*(char *)(*(int *)(unaff_EBP - 0x2b14) + 0x68) == 'h') {
      uVar24 = 0x41200000;
    }
    else {
      uVar24 = *(undefined4 *)(unaff_EBP - 0x2b1c);
    }
    piVar20 = (int *)(*(int *)(unaff_EBP - 0x2b14) + 0x11ac);
    *(undefined4 *)(unaff_EBP - 0x2b3c) = uVar24;
    *(int **)(unaff_EBP - 0x2b64) = piVar20;
    FUN_004f8520(piVar20);
    FUN_004f8520((int *)(*(int *)(unaff_EBP - 0x2b14) + 0x11b4));
    pvVar52 = *(void **)(unaff_EBP - 0x2b14);
    *(undefined1 *)(unaff_EBP - 0x2b29) = 0;
    if ((*(char *)((int)pvVar52 + 0x140) == '\x03') && (*(char *)((int)pvVar52 + 0x141) == '\x01'))
    {
      iVar17 = FUN_00407db0(pvVar52,0xffffffff);
      if ((*(int *)((int)*(void **)(unaff_EBP - 0x2b14) + 0x6c) <= iVar17) &&
         (iVar17 = FUN_00407db0(*(void **)(unaff_EBP - 0x2b14),0xffffffff),
         iVar17 < *(int *)(*(int *)(unaff_EBP - 0x2b14) + 0x6c) + *(int *)(unaff_EBP - 0x2b24))) {
        FUN_00422890((undefined4 *)(unaff_EBP - 0xb08));
        pvVar52 = *(void **)(unaff_EBP - 0x2b14);
        *(undefined4 *)(unaff_EBP - 0xaa8) = 3;
        *(undefined1 *)(unaff_EBP - 0xaac) = 0;
        *(undefined4 *)(unaff_EBP - 0xab4) = 0;
        *(undefined4 *)(unaff_EBP - 0xab0) = 0;
        fVar55 = FUN_00411ad0(pvVar52);
        *(float *)(unaff_EBP - 0x2b1c) = (float)fVar55;
        fVar56 = *(float *)(unaff_EBP - 0x2b1c);
        *(undefined4 *)(unaff_EBP - 0xb08) = *(undefined4 *)(*(int *)(unaff_EBP - 0x2b14) + 8);
        *(undefined4 *)(unaff_EBP - 0xb04) = *(undefined4 *)(*(int *)(unaff_EBP - 0x2b14) + 0xc);
        *(float *)(unaff_EBP - 0xac0) = fVar56 * 0.1;
        *(undefined4 *)(unaff_EBP - 0xabc) = 0x40800000;
        *(undefined1 *)(unaff_EBP - 0xaa4) = 2;
        pfVar25 = FUN_00412670(puVar12,(float *)(unaff_EBP - 0x1a78));
        FUN_004e1520((float *)(unaff_EBP - 0x1340),*(float *)(unaff_EBP - 0x2b3c),pfVar25);
        FUN_00402510(unaff_EBP - 0x194c);
        puVar23 = FUN_00402cb0((void *)(unaff_EBP - 0x314),(uint *)(unaff_EBP - 0x2154),
                               (uint *)(unaff_EBP - 0x194c));
        FUN_00402a40((void *)(unaff_EBP - 0xaf0),puVar23);
        *(undefined4 *)(unaff_EBP - 0xab8) = 0x3f800000;
        *(undefined4 *)(unaff_EBP - 0xaa0) = 0;
        puVar31 = FUN_00401080((void *)(unaff_EBP - 0x16a0),0,0,0);
        FUN_00401060((void *)(unaff_EBP - 0xacc),puVar31);
        FUN_00428360((void *)(*(int *)(unaff_EBP - 0x2b18) + 0x14),(undefined4 *)(unaff_EBP - 0xb08)
                    );
        FUN_00428360((void *)(*(int *)(unaff_EBP - 0x2b28) + 0x20),(undefined4 *)(unaff_EBP - 0xb08)
                    );
      }
    }
    fVar56 = *(float *)(unaff_EBP - 0x2b3c);
    *(undefined4 *)(unaff_EBP - 0x2b40) = 0;
    if (0.0 < fVar56) {
      pvVar52 = *(void **)(unaff_EBP - 0x2b6c);
      *(undefined4 *)(unaff_EBP - 0x2b54) = 0;
      do {
        FUN_00428070(pvVar52,(undefined4 *)(unaff_EBP - 0x2c94));
        piVar20 = (int *)FUN_00530550(pvVar52,(undefined4 *)(unaff_EBP - 0x2ce4));
        bVar5 = FUN_0042c6f0((void *)(unaff_EBP - 0x2c94),piVar20);
        if (bVar5) {
          do {
            iVar17 = FUN_00402bc0((int *)(unaff_EBP - 0x2c94));
            fVar56 = *(float *)(iVar17 + 8);
            if ((fVar56 != 0.0) && (fVar56 != *(float *)(unaff_EBP - 0x2b14))) {
              if (((*(int *)((int)fVar56 + 8) != *(int *)(*(int *)(unaff_EBP - 0x2b14) + 0x11c0)) ||
                  (*(int *)((int)fVar56 + 0xc) != *(int *)(*(int *)(unaff_EBP - 0x2b14) + 0x11c4)))
                 && (0.0 < *(float *)((int)fVar56 + 0x16c))) {
                piVar20 = (int *)FUN_00530550(*(void **)(unaff_EBP - 0x2b64),
                                              (undefined4 *)(unaff_EBP - 0x2fbc));
                pvVar52 = (void *)FUN_00530600(*(void **)(unaff_EBP - 0x2b64),
                                               (int *)(unaff_EBP - 0x3068),(uint *)((int)fVar56 + 8)
                                              );
                bVar5 = FUN_0042c6f0(pvVar52,piVar20);
                if ((!bVar5) && (*(int *)((int)fVar56 + 0x128) == 0)) {
                  FUN_004013d0((void *)((int)fVar56 + 0x80),0);
                  puVar23 = (uint *)(unaff_EBP - 0x353c);
                  puVar27 = FUN_00402c50((void *)(unaff_EBP - 0x314),(uint *)(unaff_EBP - 0x2424),
                                         (uint *)((int)fVar56 + 0x10));
                  ppVar28 = (pair<unsigned___int64,unsigned___int64> *)FUN_0041cba0(puVar27);
                  ppVar28 = std::pair<unsigned___int64,unsigned___int64>::
                            operator=<std::pair<unsigned___int64,unsigned___int64>,0>
                                      ((pair<unsigned___int64,unsigned___int64> *)
                                       (unaff_EBP - 0x1bac),ppVar28);
                  puVar23 = FUN_0041ce90(ppVar28,puVar23);
                  uVar24 = FUN_004dade0(puVar23);
                  if ((char)uVar24 != '\0') {
                    puVar23 = (uint *)FUN_004e2320((void *)((int)fVar56 + 0x10),2);
                    piVar20 = (int *)(unaff_EBP - 0x354c);
                    pvVar52 = (void *)FUN_004e2320((void *)(unaff_EBP - 0x314),2);
                    plVar30 = (longlong *)FUN_00401490(pvVar52,piVar20,puVar23);
                    fVar55 = FUN_00401420(plVar30);
                    fVar55 = FUN_00401ca0((float)fVar55);
                    *(float *)(unaff_EBP - 0x2b1c) = (float)fVar55;
                    pfVar25 = (float *)FUN_004013d0((void *)((int)fVar56 + 0x80),2);
                    fVar58 = *pfVar25 * 0.5 + 1.0;
                    if (*(float *)(unaff_EBP - 0x2b1c) <= fVar58 &&
                        fVar58 != *(float *)(unaff_EBP - 0x2b1c)) {
                      FUN_00530690(*(void **)(unaff_EBP - 0x2b64),(undefined4 *)(unaff_EBP - 0x355c)
                                   ,(uint *)((int)fVar56 + 8));
                      bVar5 = FUN_0040f520(*(int *)(unaff_EBP - 0x2b14));
                      *(bool *)(unaff_EBP - 0x2ba8) = bVar5;
                      puVar23 = FUN_00402c50((void *)((int)fVar56 + 0x10),
                                             (uint *)(unaff_EBP - 0x2184),
                                             (uint *)(*(int *)(unaff_EBP - 0x2b14) + 0x10));
                      FUN_00402550((void *)(unaff_EBP - 0x2a8),(longlong *)puVar23);
                      puVar12 = (undefined4 *)FUN_004013d0((void *)(unaff_EBP - 0x2a8),2);
                      *puVar12 = 0;
                      fVar55 = FUN_004021b0((float *)(unaff_EBP - 0x2a8));
                      *(float *)(unaff_EBP - 0x2b1c) = (float)fVar55;
                      if (0.01 < *(float *)(unaff_EBP - 0x2b1c)) {
                        FUN_00401fb0((float *)(unaff_EBP - 0x2a8));
                      }
                      *puVar12 = 0x3e800000;
                      iVar17 = rand();
                      pvVar52 = *(void **)(unaff_EBP - 0x2b14);
                      *(float *)(unaff_EBP - 0x2b48) = ((float)iVar17 * 0.05) / 32767.0 + 1.0;
                      fVar55 = FUN_00411ad0(pvVar52);
                      *(float *)(unaff_EBP - 0x2b1c) = (float)fVar55;
                      iVar17 = *(int *)(unaff_EBP - 0x2b14);
                      cVar3 = *(char *)(iVar17 + 0x68);
                      fVar58 = *(float *)(unaff_EBP - 0x2b1c) * 1.5 * *(float *)(unaff_EBP - 0x2b48)
                      ;
                      *(float *)(unaff_EBP - 0x2b5c) = fVar58;
                      if (cVar3 == 'h') {
                        *(undefined4 *)(unaff_EBP - 0x2b90) = *(undefined4 *)(iVar17 + 0x13b4);
                        fVar55 = FUN_00409d10(0x68);
                        *(float *)(unaff_EBP - 0x2b1c) = (float)fVar55;
                        fVar55 = FUN_00408f70(*(void **)(unaff_EBP - 0x2b14));
                        *(float *)(unaff_EBP - 0x2b48) = (float)fVar55;
                        *(float *)(unaff_EBP - 0x2b1c) =
                             *(float *)(unaff_EBP - 0x2b1c) * *(float *)(unaff_EBP - 0x2b48) *
                             *(float *)(unaff_EBP - 0x2b90) * *(float *)(unaff_EBP - 0x2b90) * 10.0;
                        iVar19 = rand();
                        iVar17 = *(int *)(unaff_EBP - 0x2b14);
                        fVar58 = ((1.25 - ((float)iVar19 * 0.5) / 32767.0) + 0.0) *
                                 *(float *)(unaff_EBP - 0x2b1c);
                        *(float *)(unaff_EBP - 0x2b5c) = fVar58;
                      }
                      if (*(char *)(unaff_EBP - 0x2ba8) != '\0') {
                        *(float *)(unaff_EBP - 0x2b5c) = fVar58 * 2.0;
                      }
                      uVar24 = FUN_004d18c0(iVar17,(int)fVar56);
                      if ((char)uVar24 != '\0') {
                        *(undefined4 *)(unaff_EBP - 0x2b20) = 0;
                        FUN_00401080((void *)(unaff_EBP - 0x284),0,0,0);
                        cVar3 = *(char *)(*(int *)(unaff_EBP - 0x2b14) + 0x68);
                        if (cVar3 == '_') {
                          *(undefined4 *)(unaff_EBP - 0x2b20) = 0x3dcccccd;
                        }
                        puVar12 = *(undefined4 **)(unaff_EBP - 0x2b50);
                        if (cVar3 == 'h') {
                          pfVar25 = (float *)(unaff_EBP - 0x1358);
                          fVar58 = 10.0;
                          *(undefined4 *)(unaff_EBP - 0x2b20) =
                               *(undefined4 *)(*(int *)(unaff_EBP - 0x2b14) + 0x13b4);
                          pfVar26 = FUN_00412670(puVar12,(float *)(unaff_EBP - 0x18a4));
                          puVar31 = (undefined4 *)FUN_004079f0(pfVar26,pfVar25,fVar58);
                          FUN_00401060((void *)(unaff_EBP - 0x284),puVar31);
                          puVar31 = (undefined4 *)FUN_004013d0((void *)(unaff_EBP - 0x284),2);
                          *puVar31 = 0x40a00000;
                        }
                        cVar3 = *(char *)(*(int *)(unaff_EBP - 0x2b14) + 0x68);
                        if (((cVar3 == '_') || (cVar3 == '^')) || (cVar3 == '\x1c')) {
                          cVar7 = '\x01';
                        }
                        else {
                          cVar7 = '\0';
                        }
                        if ((cVar3 == '_') || (cVar3 == 'h')) {
                          cVar3 = '\x01';
                        }
                        else {
                          cVar3 = '\0';
                        }
                        pvVar52 = *(void **)(unaff_EBP - 0x2b18);
                        cVar3 = FUN_004cfd50(pvVar52,fVar56,*(void **)(unaff_EBP - 0x2b14),
                                             *(float *)(unaff_EBP - 0x2b5c),
                                             (char)*(undefined4 *)(unaff_EBP - 0x2ba8),cVar3,
                                             *(float *)(unaff_EBP - 0x2b20),unaff_EBP - 0x314,
                                             (float *)(unaff_EBP - 0x284),
                                             *(undefined4 **)(unaff_EBP - 0x2b28),
                                             (undefined4 *)(unaff_EBP - 0x2be8),cVar7,0,0,'\x01');
                        pvVar29 = *(void **)(unaff_EBP - 0x2b14);
                        if ((cVar3 != '\0') && (*(char *)((int)pvVar29 + 0x141) == '\x02')) {
                          FUN_00422a90(unaff_EBP - 0xe38);
                          FUN_00402a40((void *)(unaff_EBP - 0xe18),
                                       (undefined4 *)(*(int *)(unaff_EBP - 0x2b14) + 0x10));
                          iVar17 = *(int *)(unaff_EBP - 0x2b14);
                          uVar18 = *(uint *)(unaff_EBP - 0x2b5c) ^ 0x80000000;
                          *(undefined1 *)(unaff_EBP - 0xe24) = *(undefined1 *)(unaff_EBP - 0x2ba8);
                          uVar24 = *(undefined4 *)(iVar17 + 8);
                          uVar64 = *(undefined4 *)(iVar17 + 0xc);
                          *(undefined4 *)(unaff_EBP - 0xe38) = uVar24;
                          *(undefined4 *)(unaff_EBP - 0xe30) = uVar24;
                          *(undefined4 *)(unaff_EBP - 0xe34) = uVar64;
                          *(undefined4 *)(unaff_EBP - 0xe2c) = uVar64;
                          pvVar29 = *(void **)(unaff_EBP - 0x2b28);
                          *(uint *)(unaff_EBP - 0x2b5c) = uVar18;
                          *(uint *)(unaff_EBP - 0xe28) = uVar18;
                          FUN_00428400(pvVar29,(undefined4 *)(unaff_EBP - 0xe38));
                          if (*(char *)((int)pvVar52 + 0xb4) == '\0') {
                            iVar17 = *(int *)(unaff_EBP - 0x2b14);
                            *(float *)(iVar17 + 0x16c) =
                                 *(float *)(iVar17 + 0x16c) - *(float *)(unaff_EBP - 0x2b5c);
                            fVar55 = FUN_0040fda0(iVar17);
                            *(float *)(unaff_EBP - 0x2b1c) = (float)fVar55;
                            pvVar29 = *(void **)(unaff_EBP - 0x2b14);
                            if (*(float *)(unaff_EBP - 0x2b1c) <= *(float *)((int)pvVar29 + 0x16c)
                                && *(float *)((int)pvVar29 + 0x16c) !=
                                   *(float *)(unaff_EBP - 0x2b1c)) {
                              fVar55 = FUN_0040fda0((int)pvVar29);
                              pvVar29 = *(void **)(unaff_EBP - 0x2b14);
                              *(float *)((int)pvVar29 + 0x16c) = (float)fVar55;
                            }
                          }
                          else {
                            pvVar29 = *(void **)(unaff_EBP - 0x2b14);
                          }
                        }
                        if ((*(char *)((int)pvVar29 + 0x140) == '\x03') &&
                           (*(char *)((int)pvVar29 + 0x141) == '\x01')) {
                          iVar17 = FUN_00407db0(pvVar29,0xffffffff);
                          if ((*(int *)((int)*(void **)(unaff_EBP - 0x2b14) + 0x6c) <= iVar17) &&
                             (iVar17 = FUN_00407db0(*(void **)(unaff_EBP - 0x2b14),0xffffffff),
                             iVar17 < *(int *)(*(int *)(unaff_EBP - 0x2b14) + 0x6c) +
                                      *(int *)(unaff_EBP - 0x2b24))) {
                            FUN_00422890((undefined4 *)(unaff_EBP - 0xa98));
                            pvVar29 = *(void **)(unaff_EBP - 0x2b14);
                            *(undefined4 *)(unaff_EBP - 0xa38) = 3;
                            *(undefined1 *)(unaff_EBP - 0xa3c) = 0;
                            *(undefined4 *)(unaff_EBP - 0xa44) = 0;
                            *(undefined4 *)(unaff_EBP - 0xa40) = 0;
                            fVar55 = FUN_00411ad0(pvVar29);
                            *(float *)(unaff_EBP - 0x2b1c) = (float)fVar55;
                            iVar17 = *(int *)(unaff_EBP - 0x2b14);
                            fVar56 = *(float *)(unaff_EBP - 0x2b1c);
                            *(undefined4 *)(unaff_EBP - 0xa98) = *(undefined4 *)(iVar17 + 8);
                            *(undefined4 *)(unaff_EBP - 0xa94) = *(undefined4 *)(iVar17 + 0xc);
                            *(float *)(unaff_EBP - 0xa50) = fVar56 * 0.1;
                            *(undefined4 *)(unaff_EBP - 0xa4c) = 0x40800000;
                            *(undefined1 *)(unaff_EBP - 0xa34) = 2;
                            FUN_00402a40((void *)(unaff_EBP - 0xa80),
                                         (undefined4 *)(unaff_EBP - 0x314));
                            *(undefined4 *)(unaff_EBP - 0xa48) = 0x3f800000;
                            *(undefined4 *)(unaff_EBP - 0xa30) = 0;
                            puVar31 = FUN_00401080((void *)(unaff_EBP - 0x1370),0,0,0);
                            FUN_00401060((void *)(unaff_EBP - 0xa5c),puVar31);
                            FUN_00428360((void *)((int)pvVar52 + 0x14),
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
              puVar12 = *(undefined4 **)(unaff_EBP - 0x2b50);
            }
LAB_0053c6e7:
            FUN_00407a30((void *)(unaff_EBP - 0x2c94),(int *)(unaff_EBP - 0x2f98));
            pvVar52 = *(void **)(unaff_EBP - 0x2b6c);
            piVar20 = (int *)FUN_00530550(pvVar52,(undefined4 *)(unaff_EBP - 0x2ce4));
            bVar5 = FUN_0042c6f0((void *)(unaff_EBP - 0x2c94),piVar20);
          } while (bVar5);
        }
        FUN_00402510(unaff_EBP - 0x1970);
        FUN_00402e30((void *)(unaff_EBP - 0x314),(uint *)(unaff_EBP - 0x1970));
        fVar56 = *(float *)(unaff_EBP - 0x2b3c);
        iVar17 = *(int *)(unaff_EBP - 0x2b40) + 1;
        fVar58 = (float)iVar17;
        *(int *)(unaff_EBP - 0x2b40) = iVar17;
        *(float *)(unaff_EBP - 0x2b54) = fVar58;
      } while (fVar58 < fVar56);
      if (*(char *)(unaff_EBP - 0x2b29) != '\0') {
        iVar17 = *(int *)(unaff_EBP - 0x2b14);
        *(int *)(iVar17 + 0x70) = *(int *)(iVar17 + 0x70) + 1;
        FUN_004103a0(iVar17);
        *(undefined4 *)(iVar17 + 0x74) = 0;
      }
      piVar20 = *(int **)(unaff_EBP - 0x2b64);
    }
    bVar5 = FUN_00530540((int)piVar20);
    pvVar52 = *(void **)(unaff_EBP - 0x2b14);
    if ((bVar5) && (*(char *)((int)pvVar52 + 0x68) != 'h')) {
      FUN_004c8510(unaff_EBP - 0xfd8);
      pfVar25 = FUN_00412670(puVar12,(float *)(unaff_EBP - 0x10b8));
      FUN_004e1520((float *)(unaff_EBP - 0x16b8),*(float *)(unaff_EBP - 0x2b3c),pfVar25);
      FUN_00402510(unaff_EBP - 0x1994);
      puVar23 = FUN_00402cb0((void *)((int)pvVar52 + 0x10),(uint *)(unaff_EBP - 0x2634),
                             (uint *)(unaff_EBP - 0x1994));
      FUN_00402a40((void *)(unaff_EBP - 0xfd8),puVar23);
      *(undefined4 *)(unaff_EBP - 4000) = 5;
      *(undefined4 *)(unaff_EBP - 0xfa4) = 0x3dcccccd;
      *(undefined4 *)(unaff_EBP - 0xf9c) = 1;
      ppVar28 = (pair<unsigned___int64,unsigned___int64> *)
                FUN_00401080((void *)(unaff_EBP - 0x1bec),0x3f800000,0x3e4ccccd,0x3f000000);
      std::pair<unsigned___int64,unsigned___int64>::
      operator=<std::pair<unsigned___int64,unsigned___int64>,0>
                ((pair<unsigned___int64,unsigned___int64> *)(unaff_EBP - 0xfb4),ppVar28);
      pfVar25 = FUN_0052ec30((void *)(unaff_EBP - 0x40),(float *)(unaff_EBP - 5000));
      FUN_00401060((void *)(unaff_EBP - 0xfc0),pfVar25);
      iVar17 = *(int *)(unaff_EBP - 0x2b28);
      FUN_00428540((void *)(iVar17 + 0x10),(undefined4 *)(unaff_EBP - 0xfd8));
      fVar55 = FUN_00412150((int)pvVar52);
      *(float *)(unaff_EBP - 0x2b1c) = (float)fVar55;
      *(undefined4 *)((int)pvVar52 + 0x70) = 0;
      fVar55 = FUN_00412150((int)pvVar52);
      *(float *)(unaff_EBP - 0x2b48) = (float)fVar55;
      *(int *)((int)pvVar52 + 0x6c) =
           (int)((*(float *)(unaff_EBP - 0x2b1c) / *(float *)(unaff_EBP - 0x2b48)) *
                (float)*(int *)((int)pvVar52 + 0x6c));
    }
    else {
      iVar17 = *(int *)(unaff_EBP - 0x2b28);
    }
    if (((*(char *)((int)pvVar52 + 0x68) == '^') &&
        (iVar19 = FUN_00407db0(pvVar52,0xffffffff), *(int *)((int)pvVar52 + 0x6c) <= iVar19)) &&
       (iVar19 = FUN_00407db0(pvVar52,0xffffffff),
       iVar19 < *(int *)((int)pvVar52 + 0x6c) + *(int *)(unaff_EBP - 0x2b24))) {
      FUN_004c8530(unaff_EBP - 0x5d8);
      FUN_00402550((void *)(unaff_EBP - 0x5d8),(longlong *)((int)pvVar52 + 0x10));
      iVar19 = rand();
      *(undefined4 *)(unaff_EBP - 0x5cc) = 0x28;
      *(float *)(unaff_EBP - 0x5c8) = ((float)iVar19 * 0.1) / 32767.0 + 1.0;
      FUN_00428590((void *)(iVar17 + 8),(undefined4 *)(unaff_EBP - 0x5d8));
      unaff_EDI = *(void **)(unaff_EBP - 0x2b18);
      goto LAB_00537cfb;
    }
    if ((*(char *)((int)pvVar52 + 0x68) == 'h') &&
       (iVar19 = FUN_00407db0(pvVar52,0xffffffff), *(int *)((int)pvVar52 + 0x6c) <= iVar19)) {
      iVar19 = FUN_00407db0(pvVar52,0xffffffff);
      param_2 = *(int *)(unaff_EBP - 0x2b24);
      if (iVar19 < *(int *)((int)pvVar52 + 0x6c) + param_2) {
        FUN_004c8530(unaff_EBP - 2000);
        FUN_00402550((void *)(unaff_EBP - 2000),(longlong *)((int)pvVar52 + 0x10));
        iVar19 = rand();
        uVar24 = 0x10;
        if (*(char *)(unaff_EBP - 0x2b29) != '\0') {
          uVar24 = 5;
        }
        *(undefined4 *)(unaff_EBP - 0x7c4) = uVar24;
        *(float *)(unaff_EBP - 0x7c0) = ((float)iVar19 * 0.25) / 32767.0 + 1.0;
        FUN_00428590((void *)(iVar17 + 8),(undefined4 *)(unaff_EBP - 2000));
        unaff_EDI = *(void **)(unaff_EBP - 0x2b18);
        goto LAB_00537cfb;
      }
    }
    else {
      param_2 = *(int *)(unaff_EBP - 0x2b24);
    }
    if (*(char *)((int)pvVar52 + 0x68) != '^') {
      if (*(int *)((int)pvVar52 + 0x6c) / 200 == (*(int *)((int)pvVar52 + 0x6c) + param_2) / 200)
      goto code_r0x00537cef;
      FUN_004c8530(unaff_EBP - 0x800);
      pvVar52 = *(void **)(unaff_EBP - 0x2b14);
      FUN_00402550((void *)(unaff_EBP - 0x800),(longlong *)((int)pvVar52 + 0x10));
      iVar19 = rand();
      cVar3 = *(char *)(unaff_EBP - 0x2b29);
      *(float *)(unaff_EBP - 0x7f0) = ((float)iVar19 * 0.25) / 32767.0 + 1.0;
      *(uint *)(unaff_EBP - 0x7f4) = (cVar3 != '\0') + 0x24;
      FUN_00428590((void *)(iVar17 + 8),(undefined4 *)(unaff_EBP - 0x800));
      unaff_EDI = *(void **)(unaff_EBP - 0x2b18);
      goto LAB_00537cfb;
    }
    goto LAB_0053e0c5;
  case '\"':
    iVar17 = *(int *)((int)*(void **)(unaff_EBP - 0x2b14) + 0x6c);
    iVar19 = FUN_00407db0(*(void **)(unaff_EBP - 0x2b14),0xffffffff);
    if ((iVar17 < iVar19) && (iVar17 / 200 != (iVar17 + *(int *)(unaff_EBP - 0x2b24)) / 200)) {
      FUN_004c8530(unaff_EBP - 0x620);
      FUN_00402550((void *)(unaff_EBP - 0x620),(longlong *)(*(int *)(unaff_EBP - 0x2b14) + 0x10));
      iVar19 = rand();
      iVar17 = *(int *)(unaff_EBP - 0x2b28);
      *(undefined4 *)(unaff_EBP - 0x614) = 0x24;
      *(float *)(unaff_EBP - 0x610) = ((float)iVar19 * 0.25) / 32767.0 + 1.0;
      FUN_00428590((void *)(iVar17 + 8),(undefined4 *)(unaff_EBP - 0x620));
    }
    pvVar52 = *(void **)(unaff_EBP - 0x2b14);
    if (((*(char *)((int)unaff_EDI + 0xb4) != '\0') || (*(char *)((int)pvVar52 + 0x60) == '\0')) &&
       (pvVar52 != *(void **)((int)unaff_EDI + 0xb8))) goto LAB_00537cf5;
    iVar17 = FUN_00407db0(pvVar52,0xffffffff);
    pvVar52 = *(void **)(unaff_EBP - 0x2b14);
    if (*(int *)((int)pvVar52 + 0x6c) <= iVar17) goto LAB_00537cfb;
    iVar17 = FUN_00407db0(pvVar52,0xffffffff);
    iVar19 = FUN_00411d60(*(void **)(unaff_EBP - 0x2b14),0xffffffff);
    if (iVar17 + iVar19 < *(int *)((int)*(void **)(unaff_EBP - 0x2b14) + 0x6c)) goto LAB_00537cf5;
    iVar39 = FUN_00411d60(*(void **)(unaff_EBP - 0x2b14),0xffffffff);
    pvVar52 = *(void **)(unaff_EBP - 0x2b14);
    iVar9 = FUN_00407db0(pvVar52,0xffffffff);
    iVar17 = *(int *)((int)pvVar52 + 0x6c);
    iVar19 = *(int *)(unaff_EBP - 0x2b24);
    iVar22 = FUN_00407db0(*(void **)(unaff_EBP - 0x2b14),0xffffffff);
    if ((*(int *)(*(int *)(unaff_EBP - 0x2b14) + 0x6c) - iVar22) / (int)((float)iVar39 * 0.125) ==
        ((iVar17 + iVar19) - iVar9) / (int)((float)iVar39 * 0.125)) goto code_r0x00537cef;
    fVar55 = FUN_0040fb20(*(int *)(unaff_EBP - 0x2b14),
                          (uint)*(byte *)(*(int *)(unaff_EBP - 0x2b14) + 0x68),-1);
    iVar17 = *(int *)(unaff_EBP - 0x2b14);
    *(float *)(unaff_EBP - 0x2b1c) = (float)fVar55;
    if (*(float *)(iVar17 + 0x170) < *(float *)(unaff_EBP - 0x2b1c)) goto code_r0x00537cef;
    fVar55 = FUN_0040fb20(*(int *)(unaff_EBP - 0x2b14),(uint)*(byte *)(iVar17 + 0x68),-1);
    iVar17 = *(int *)(unaff_EBP - 0x2b14);
    pvVar52 = *(void **)(unaff_EBP - 0x2b18);
    *(float *)(unaff_EBP - 0x2b1c) = (float)fVar55;
    *(float *)(iVar17 + 0x170) = *(float *)(iVar17 + 0x170) - *(float *)(unaff_EBP - 0x2b1c);
    pvVar29 = (void *)FUN_00405420(pvVar52,(uint *)(iVar17 + 0x1a0));
    pvVar52 = *(void **)(unaff_EBP - 0x2b14);
    if (pvVar29 == (void *)0x0) {
      pvVar29 = pvVar52;
    }
    FUN_00422a90(unaff_EBP - 0xc50);
    FUN_00402a40((void *)(unaff_EBP - 0xc30),(undefined4 *)((int)pvVar29 + 0x10));
    iVar17 = rand();
    *(float *)(unaff_EBP - 0x2b48) = 1.25 - ((float)iVar17 * 0.5) / 32767.0;
    fVar55 = FUN_00411ad0(pvVar52);
    *(float *)(unaff_EBP - 0x2b1c) = (float)fVar55;
    *(float *)(unaff_EBP - 0xc40) =
         *(float *)(unaff_EBP - 0x2b1c) * -2.0 * *(float *)(unaff_EBP - 0x2b48);
    bVar5 = FUN_0040f520((int)pvVar52);
    pvVar33 = *(void **)(unaff_EBP - 0x2b28);
    *(bool *)(unaff_EBP - 0xc3c) = bVar5;
    *(undefined4 *)(unaff_EBP - 0xc50) = *(undefined4 *)((int)pvVar52 + 8);
    *(undefined4 *)(unaff_EBP - 0xc4c) = *(undefined4 *)((int)pvVar52 + 0xc);
    *(undefined4 *)(unaff_EBP - 0xc48) = *(undefined4 *)((int)pvVar29 + 8);
    *(undefined4 *)(unaff_EBP - 0xc44) = *(undefined4 *)((int)pvVar29 + 0xc);
    FUN_00428400(pvVar33,(undefined4 *)(unaff_EBP - 0xc50));
    FUN_004c8530(unaff_EBP - 0x650);
    FUN_00402550((void *)(unaff_EBP - 0x650),(longlong *)((int)pvVar52 + 0x10));
    iVar17 = *(int *)(unaff_EBP - 0x2b28);
    *(undefined4 *)(unaff_EBP - 0x640) = 0x3f800000;
    *(undefined4 *)(unaff_EBP - 0x644) = 0x29;
    FUN_00428590((void *)(iVar17 + 8),(undefined4 *)(unaff_EBP - 0x650));
    pvVar33 = *(void **)(unaff_EBP - 0x2b18);
    if (*(char *)((int)pvVar33 + 0xb4) != '\0') {
      if ((pvVar52 != *(void **)((int)pvVar33 + 0xb8)) ||
         (pvVar29 != *(void **)((int)pvVar33 + 0xb8))) goto code_r0x00537cef;
      pvVar33 = *(void **)(unaff_EBP - 0x2b18);
    }
    FUN_004cea80(pvVar33,(uint *)(unaff_EBP - 0xc50),*(void **)(unaff_EBP - 0x2b28),
                 (undefined4 *)(unaff_EBP - 0x2be8));
    FUN_00537cef();
    return;
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
    pvVar52 = *(void **)(unaff_EBP - 0x2b14);
    if (((*(char *)((int)unaff_EDI + 0xb4) != '\0') || (*(char *)((int)pvVar52 + 0x60) == '\0')) &&
       (pvVar52 != *(void **)((int)unaff_EDI + 0xb8))) goto LAB_00537d01;
    iVar17 = *(int *)((int)pvVar52 + 0x6c);
    iVar19 = FUN_00407db0(*(void **)(unaff_EBP - 0x2b14),0xffffffff);
    if ((iVar19 + -200 < iVar17) || (iVar17 / 200 == (iVar17 + *(int *)(unaff_EBP - 0x2b24)) / 200))
    {
      pvVar52 = *(void **)(unaff_EBP - 0x2b14);
    }
    else {
      FUN_004c8530(unaff_EBP - 0x8c0);
      pvVar52 = *(void **)(unaff_EBP - 0x2b14);
      FUN_00402550((void *)(unaff_EBP - 0x8c0),(longlong *)((int)pvVar52 + 0x10));
      iVar19 = rand();
      iVar17 = *(int *)(unaff_EBP - 0x2b28);
      *(undefined4 *)(unaff_EBP - 0x8b4) = 0x24;
      *(float *)(unaff_EBP - 0x8b0) = ((float)iVar19 * 0.25) / 32767.0 + 1.0;
      FUN_00428590((void *)(iVar17 + 8),(undefined4 *)(unaff_EBP - 0x8c0));
    }
    iVar17 = FUN_00407db0(pvVar52,0xffffffff);
    if ((*(char *)((int)pvVar52 + 0x68) == '.') || (*(char *)((int)pvVar52 + 0x68) == '-')) {
      iVar9 = FUN_00411d60(pvVar52,0xffffffff);
      iVar22 = FUN_00407db0(pvVar52,0xffffffff);
      iVar19 = *(int *)((int)pvVar52 + 0x6c);
      iVar39 = *(int *)(unaff_EBP - 0x2b24);
      iVar17 = FUN_00407db0(*(void **)(unaff_EBP - 0x2b14),0xffffffff);
      pvVar52 = *(void **)(unaff_EBP - 0x2b14);
      iVar17 = (iVar9 / 3) * (((iVar19 + iVar39) - iVar22) / (iVar9 / 3)) + iVar17;
      iVar19 = FUN_00407db0(pvVar52,0xffffffff);
      if (iVar17 < iVar19) {
        iVar17 = FUN_00407db0(pvVar52,0xffffffff);
      }
    }
    iVar19 = FUN_00407db0(pvVar52,0xffffffff);
    if ((*(int *)((int)pvVar52 + 0x6c) <= iVar19) &&
       (iVar19 = FUN_00407db0(pvVar52,0xffffffff),
       iVar19 < *(int *)((int)pvVar52 + 0x6c) + *(int *)(unaff_EBP - 0x2b24))) {
      fVar55 = FUN_004021b0((float *)((int)pvVar52 + 0x160));
      *(float *)(unaff_EBP - 0x2b1c) = (float)fVar55;
      if (0.0 < *(float *)(unaff_EBP - 0x2b1c)) {
        fVar55 = FUN_0040fb20((int)pvVar52,(uint)*(byte *)((int)pvVar52 + 0x68),-1);
        fVar56 = *(float *)((int)pvVar52 + 0x170);
        *(float *)(unaff_EBP - 0x2b1c) = (float)fVar55;
        fVar56 = fVar56 - *(float *)(unaff_EBP - 0x2b1c);
        *(float *)((int)pvVar52 + 0x170) = fVar56;
        if (fVar56 < 0.0) {
          *(undefined4 *)((int)pvVar52 + 0x170) = 0;
        }
      }
    }
    *(undefined4 *)(unaff_EBP - 0x2b1c) = *(undefined4 *)((int)pvVar52 + 0x6c);
    iVar39 = FUN_00407db0(pvVar52,0xffffffff);
    iVar9 = FUN_00411d60(*(void **)(unaff_EBP - 0x2b14),0xffffffff);
    param_2 = *(int *)(unaff_EBP - 0x2b24);
    iVar19 = *(int *)(unaff_EBP - 0x2b1c);
    pvVar52 = *(void **)(unaff_EBP - 0x2b14);
    if (((iVar39 + iVar9 <= iVar19) || (iVar17 < iVar19)) || (iVar19 + param_2 <= iVar17))
    goto LAB_0053e0c5;
    pfVar25 = (float *)((int)pvVar52 + 0x160);
    fVar55 = FUN_004021b0(pfVar25);
    *(float *)(unaff_EBP - 0x2b1c) = (float)fVar55;
    if (*(float *)(unaff_EBP - 0x2b1c) <= 0.0) goto LAB_0053b968;
    FUN_00422890((undefined4 *)(unaff_EBP - 0x3e4));
    if (*(char *)((int)pvVar52 + 0xaa9) == '\f') {
      pfVar40 = FUN_00412670(pfVar25,(float *)(unaff_EBP - 0x18c8));
      pfVar26 = (float *)(unaff_EBP - 0x13d0);
      fVar56 = 100.0;
    }
    else {
      pfVar40 = FUN_00412670(pfVar25,(float *)(unaff_EBP - 0x16e8));
      pfVar26 = (float *)(unaff_EBP - 0x13e8);
      fVar56 = 50.0;
    }
    puVar12 = (undefined4 *)FUN_004e1520(pfVar26,fVar56,pfVar40);
    FUN_00401060((void *)(unaff_EBP - 0x3a8),puVar12);
    *(undefined4 *)(unaff_EBP - 0x37c) = 0;
    fVar56 = *(float *)((int)pvVar52 + 0x144);
    plVar30 = (longlong *)((int)pvVar52 + 0x10);
    *(longlong **)(unaff_EBP - 0x2b1c) = plVar30;
    *(float *)(unaff_EBP - 0x398) = fVar56 * 4.0 + 0.5;
    FUN_00402a40((void *)(unaff_EBP - 0x3cc),(undefined4 *)plVar30);
    iVar17 = *(int *)(unaff_EBP - 0x2b14);
    *(undefined4 *)(unaff_EBP - 0x390) = *(undefined4 *)(iVar17 + 0x144);
    *(float *)(unaff_EBP - 0x394) = *(float *)(iVar17 + 0x144) + 0.5;
    if (*(int *)(iVar17 + 100) == 0x65) {
      FUN_004013d0((void *)(iVar17 + 0x80),1);
      FUN_00402a10((ulonglong *)(unaff_EBP - 0x3038));
      puVar23 = (uint *)(unaff_EBP - 0x3038);
      pvVar52 = (void *)FUN_004e2320((void *)(unaff_EBP - 0x3cc),1);
      FUN_00402e60(pvVar52,puVar23);
      FUN_004013d0((void *)(iVar17 + 0x80),2);
      FUN_00402a10((ulonglong *)(unaff_EBP - 0x2ff4));
      puVar23 = (uint *)(unaff_EBP - 0x2ff4);
      pvVar52 = (void *)FUN_004e2320((void *)(unaff_EBP - 0x3cc),2);
      FUN_00402e60(pvVar52,puVar23);
      plVar30 = *(longlong **)(unaff_EBP - 0x2b1c);
      iVar17 = *(int *)(unaff_EBP - 0x2b14);
    }
    *(undefined4 *)(unaff_EBP - 0x3e4) = *(undefined4 *)(iVar17 + 8);
    *(undefined4 *)(unaff_EBP - 0x3e0) = *(undefined4 *)(iVar17 + 0xc);
    FUN_00401060((void *)(unaff_EBP - 0x3dc),(undefined4 *)(iVar17 + 0x1b0));
    iVar17 = *(int *)(unaff_EBP - 0x2b14);
    if (*(char *)(iVar17 + 0x68) == 'l') {
      *(undefined4 *)(unaff_EBP - 900) = 4;
      fVar55 = FUN_00409d10((uint)*(byte *)(iVar17 + 0x68));
      pvVar52 = *(void **)(unaff_EBP - 0x2b14);
      *(float *)(unaff_EBP - 0x2b1c) = (float)fVar55;
      fVar55 = FUN_00408f70(pvVar52);
      fVar56 = *(float *)(unaff_EBP - 0x2b1c);
      *(float *)(unaff_EBP - 0x2b48) = (float)fVar55;
      *(float *)(unaff_EBP - 0x2b1c) = fVar56 * *(float *)(unaff_EBP - 0x2b48);
      iVar17 = rand();
      *(undefined4 *)(unaff_EBP - 0x394) = 0x40800000;
      *(undefined4 *)(unaff_EBP - 0x390) = 0x3f800000;
      fVar56 = *(float *)(unaff_EBP - 0x2b1c);
      *(undefined1 *)(unaff_EBP - 0x388) = 1;
      *(float *)(unaff_EBP - 0x39c) = (1.25 - ((float)iVar17 * 0.5) / 32767.0) * fVar56 * 1.0 * 5.0;
      pfVar25 = FUN_00412670(pfVar25,(float *)(unaff_EBP - 0x1b14));
      puVar12 = (undefined4 *)FUN_004e1520((float *)(unaff_EBP - 0x1400),100.0,pfVar25);
      FUN_00401060((void *)(unaff_EBP - 0x3a8),puVar12);
      pvVar52 = *(void **)(unaff_EBP - 0x2b14);
    }
    else {
      pvVar52 = *(void **)(unaff_EBP - 0x2b14);
      *(undefined4 *)(unaff_EBP - 900) = 1;
      bVar6 = *(byte *)((int)pvVar52 + 0x68);
      if ((((bVar6 == 0x26) || (bVar6 == 0x27)) ||
          ((bVar6 == 0x28 || ((bVar6 == 0x2c || (bVar6 == 0x29)))))) || (bVar6 == 0x2a)) {
        fVar55 = FUN_00409d10((uint)bVar6);
        *(float *)(unaff_EBP - 0x2b1c) = (float)fVar55;
        fVar55 = FUN_00411ad0(pvVar52);
        fVar56 = *(float *)(unaff_EBP - 0x2b1c);
        *(float *)(unaff_EBP - 0x2b48) = (float)fVar55;
        *(float *)(unaff_EBP - 0x2b1c) = fVar56 * *(float *)(unaff_EBP - 0x2b48);
        iVar17 = rand();
        fVar56 = (1.25 - ((float)iVar17 * 0.5) / 32767.0) * *(float *)(unaff_EBP - 0x2b1c) * 1.0;
      }
      else if ((bVar6 == 0x2e) || (bVar6 == 0x2d)) {
        fVar55 = FUN_00409d10((uint)bVar6);
        *(float *)(unaff_EBP - 0x2b1c) = (float)fVar55;
        fVar55 = FUN_00411ad0(pvVar52);
        fVar56 = *(float *)(unaff_EBP - 0x2b1c);
        *(float *)(unaff_EBP - 0x2b48) = (float)fVar55;
        *(float *)(unaff_EBP - 0x2b1c) = fVar56 * *(float *)(unaff_EBP - 0x2b48);
        iVar17 = rand();
        *(undefined4 *)(unaff_EBP - 0x390) = 0x3e800000;
        fVar56 = (1.25 - ((float)iVar17 * 0.5) / 32767.0) * *(float *)(unaff_EBP - 0x2b1c) * 1.0;
        *(float *)(unaff_EBP - 0x394) = *(float *)(unaff_EBP - 0x394) + 0.5;
      }
      else {
        fVar55 = FUN_00409d10((uint)bVar6);
        *(float *)(unaff_EBP - 0x2b1c) = (float)fVar55;
        fVar55 = FUN_00411ad0(pvVar52);
        fVar56 = *(float *)(unaff_EBP - 0x2b1c);
        *(float *)(unaff_EBP - 0x2b48) = (float)fVar55;
        *(float *)(unaff_EBP - 0x2b1c) = fVar56 * *(float *)(unaff_EBP - 0x2b48);
        iVar17 = rand();
        *(undefined4 *)(unaff_EBP - 0x390) = 0x3f800000;
        fVar56 = (1.25 - ((float)iVar17 * 0.5) / 32767.0) * *(float *)(unaff_EBP - 0x2b1c) * 1.0;
        *(float *)(unaff_EBP - 0x394) = *(float *)(unaff_EBP - 0x394) + 1.0;
      }
      *(float *)(unaff_EBP - 0x39c) = fVar56;
    }
    if (*(char *)((int)pvVar52 + 0x140) == '\x03') {
      *(char *)(unaff_EBP - 0x380) = (*(char *)((int)pvVar52 + 0x141) == '\x01') + '\x01';
    }
    cVar3 = *(char *)((int)pvVar52 + 0x68);
    if ((((cVar3 == '.') || (cVar3 == '-')) || (cVar3 == '%')) ||
       (*(undefined1 *)(unaff_EBP - 0x388) = 0, cVar3 == '+')) {
      *(undefined1 *)(unaff_EBP - 0x388) = 1;
    }
    FUN_00428360((void *)(*(int *)(unaff_EBP - 0x2b18) + 0x14),(undefined4 *)(unaff_EBP - 0x3e4));
    if (0.0 < *(float *)((int)pvVar52 + 0x144)) {
      fVar56 = *(float *)((int)pvVar52 + 0x170) - *(float *)((int)pvVar52 + 0x144);
      *(float *)((int)pvVar52 + 0x170) = fVar56;
      if (fVar56 < 0.0) {
        *(undefined4 *)((int)pvVar52 + 0x170) = 0;
      }
      *(undefined4 *)((int)pvVar52 + 0x144) = 0;
    }
    if ((*(char *)(unaff_EBP - 0x388) != '\0') &&
       (puVar12 = FUN_0040ef90(pvVar52,9), puVar12 != (undefined4 *)0x0)) {
      FUN_004029b0((undefined1 *)(unaff_EBP - 0x2ebc));
      *(undefined1 *)(unaff_EBP - 0x2ebc) = 9;
      *(undefined4 *)(unaff_EBP - 0x2eb4) = 0;
      FUN_00411740(pvVar52,(char *)(unaff_EBP - 0x2ebc));
      FUN_004063d0(unaff_EBP - 0x240);
      uVar24 = *(undefined4 *)((int)pvVar52 + 0xc);
      uVar64 = *(undefined4 *)((int)pvVar52 + 8);
      *(undefined8 *)(unaff_EBP - 0x230) = *(undefined8 *)(unaff_EBP - 0x2ebc);
      uVar1 = *(undefined8 *)(unaff_EBP - 0x2eb4);
      *(undefined4 *)(unaff_EBP - 0x23c) = uVar24;
      *(undefined4 *)(unaff_EBP - 0x234) = uVar24;
      iVar17 = *(int *)(unaff_EBP - 0x2b28);
      *(undefined4 *)(unaff_EBP - 0x240) = uVar64;
      *(undefined4 *)(unaff_EBP - 0x238) = uVar64;
      *(undefined8 *)(unaff_EBP - 0x228) = uVar1;
      uVar24 = *(undefined4 *)(unaff_EBP - 0x2ea8);
      *(undefined4 *)(unaff_EBP - 0x220) = *(undefined4 *)(unaff_EBP - 0x2eac);
      *(undefined4 *)(unaff_EBP - 0x21c) = uVar24;
      FUN_00411040((void *)(iVar17 + 0x58),(undefined8 *)(unaff_EBP - 0x240));
    }
    FUN_00428360((void *)(*(int *)(unaff_EBP - 0x2b28) + 0x20),(undefined4 *)(unaff_EBP - 0x3e4));
    FUN_004c8530(unaff_EBP - 0x278);
    FUN_00402550((void *)(unaff_EBP - 0x278),plVar30);
    cVar3 = *(char *)(unaff_EBP - 0x380);
    pvVar52 = *(void **)(unaff_EBP - 0x2b14);
    *(undefined4 *)(unaff_EBP - 0x268) = 0x3f800000;
    cVar7 = *(char *)((int)pvVar52 + 0x68);
    *(undefined4 *)(unaff_EBP - 0x264) = 0x3f666666;
    if (cVar3 == '\x02') {
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
    unaff_EDI = *(void **)(unaff_EBP - 0x2b18);
    goto LAB_00537cfb;
  case '/':
  case '0':
    iVar17 = *(int *)(*(int *)(unaff_EBP - 0x2b14) + 0x6c);
    if ((iVar17 < 1) && (0 < iVar17 + param_2)) {
      FUN_004c8530(unaff_EBP - 0x668);
      pvVar52 = *(void **)(unaff_EBP - 0x2b14);
      FUN_00402550((void *)(unaff_EBP - 0x668),(longlong *)((int)pvVar52 + 0x10));
      iVar19 = rand();
      iVar17 = *(int *)(unaff_EBP - 0x2b28);
      *(undefined4 *)(unaff_EBP - 0x65c) = 0xe;
      *(float *)(unaff_EBP - 0x658) = ((float)iVar19 * 0.25) / 32767.0 + 1.0;
      FUN_00428590((void *)(iVar17 + 8),(undefined4 *)(unaff_EBP - 0x668));
      goto LAB_00537cfb;
    }
    break;
  case '1':
    pvVar52 = *(void **)(unaff_EBP - 0x2b14);
    if (((*(char *)((int)unaff_EDI + 0xb4) != '\0') || (*(char *)((int)pvVar52 + 0x60) == '\0')) &&
       (pvVar52 != *(void **)((int)unaff_EDI + 0xb8))) break;
    iVar17 = FUN_00407db0(pvVar52,0xffffffff);
    pvVar52 = *(void **)(unaff_EBP - 0x2b14);
    if (iVar17 < *(int *)((int)pvVar52 + 0x6c)) goto LAB_00537cfb;
    iVar17 = FUN_00407db0(pvVar52,0xffffffff);
    param_2 = *(int *)(unaff_EBP - 0x2b24);
    if (*(int *)((int)pvVar52 + 0x6c) + param_2 <= iVar17) goto LAB_00537d01;
    FUN_00402510(unaff_EBP - 0x1928);
    *(void **)(unaff_EBP - 0x2b64) = (void *)((int)pvVar52 + 0x10);
    FUN_00402cb0((void *)((int)pvVar52 + 0x10),(uint *)(unaff_EBP - 0x204),
                 (uint *)(unaff_EBP - 0x1928));
    *(undefined4 *)(unaff_EBP - 0x2b20) = 0x43c80000;
    uVar60 = CONCAT44((undefined4 *)(unaff_EBP - 0x204),0x53b2f6);
    FUN_00402a40((void *)(unaff_EBP - 0x920),(undefined4 *)(unaff_EBP - 0x204));
    *(undefined4 *)(unaff_EBP - 0x2b5c) = 0xfffffffc;
    *(int *)(unaff_EBP - 0x2b40) = (int)pvVar52 + 0x80;
    do {
      uVar18 = 0xfffffffc;
      do {
        uVar54 = 0xfffffffe;
        do {
          uVar64 = 0x53b32b;
          uVar49 = uVar54;
          FUN_004cde40(&stack0xfffffff8,uVar54);
          uVar24 = 0x53b336;
          uVar62 = uVar18;
          FUN_004cde40(&stack0xfffffff0,uVar18);
          FUN_004cde40(&stack0xffffffe8,*(uint *)(unaff_EBP - 0x2b5c));
          puVar23 = FUN_00406380((void *)(unaff_EBP - 0x20f4),uVar24,uVar62,uVar64,uVar49,
                                 (int)uVar60,(int)(uVar60 >> 0x20));
          FUN_00402cb0((void *)(unaff_EBP - 0x204),(uint *)(unaff_EBP - 0x98c),puVar23);
          uVar60 = ZEXT48(*(float **)(unaff_EBP - 0x2b40));
          puVar23 = (uint *)(unaff_EBP - 0x98c);
          uVar49 = 0x53b37e;
          cVar3 = FUN_004d4f90(*(void **)(unaff_EBP - 0x2b18),puVar23,
                               *(float **)(unaff_EBP - 0x2b40),'\0');
          if (cVar3 == '\0') {
            puVar23 = (uint *)0x53b39b;
            puVar27 = FUN_00402c50((void *)(unaff_EBP - 0x98c),(uint *)(unaff_EBP - 0x23f4),
                                   (uint *)(unaff_EBP - 0x204));
            uVar24 = 0x53b3a7;
            pfVar25 = FUN_00402550((void *)(unaff_EBP - 0x1688),(longlong *)puVar27);
            uVar60 = CONCAT44(0x53b3ae,uVar24);
            fVar55 = FUN_004021b0(pfVar25);
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
          uVar54 = uVar54 + 1;
        } while ((int)uVar54 < 7);
        uVar18 = uVar18 + 1;
      } while ((int)uVar18 < 5);
      iVar17 = *(int *)(unaff_EBP - 0x2b5c) + 1;
      *(int *)(unaff_EBP - 0x2b5c) = iVar17;
    } while (iVar17 < 5);
    if (fVar56 < 400.0) {
      pvVar29 = *(void **)(unaff_EBP - 0x2b64);
      FUN_00402a40(pvVar29,(undefined4 *)(unaff_EBP - 0x920));
      pvVar52 = *(void **)(unaff_EBP - 0x2b40);
      goto LAB_0053b440;
    }
    goto code_r0x00537cef;
  case '2':
  case '7':
  case '`':
    pvVar52 = *(void **)(unaff_EBP - 0x2b14);
    if (((*(char *)((int)unaff_EDI + 0xb4) != '\0') || (*(char *)((int)pvVar52 + 0x60) == '\0')) &&
       (pvVar52 != *(void **)((int)unaff_EDI + 0xb8))) goto LAB_00537d01;
    iVar17 = FUN_00407db0(pvVar52,0xffffffff);
    if ((*(int *)((int)pvVar52 + 0x6c) <= iVar17) &&
       (iVar17 = FUN_00407db0(pvVar52,0xffffffff),
       iVar17 < *(int *)((int)pvVar52 + 0x6c) + *(int *)(unaff_EBP - 0x2b24))) {
      *(undefined4 *)((int)pvVar52 + 0x13b4) = *(undefined4 *)((int)pvVar52 + 0x144);
      *(float *)((int)pvVar52 + 0x170) =
           *(float *)((int)pvVar52 + 0x170) - *(float *)((int)pvVar52 + 0x144);
      *(undefined4 *)((int)pvVar52 + 0x144) = 0;
      puVar12 = FUN_0040ef90(pvVar52,10);
      if (puVar12 != (undefined4 *)0x0) {
        FUN_004029b0((undefined1 *)(unaff_EBP - 0x2eec));
        *(undefined1 *)(unaff_EBP - 0x2eec) = 10;
        *(undefined4 *)(unaff_EBP - 0x2ee4) = 0;
        FUN_00411740(pvVar52,(char *)(unaff_EBP - 0x2eec));
        FUN_004063d0(unaff_EBP - 0x2e6c);
        uVar24 = *(undefined4 *)((int)pvVar52 + 0xc);
        uVar64 = *(undefined4 *)((int)pvVar52 + 8);
        *(undefined8 *)(unaff_EBP - 0x2e5c) = *(undefined8 *)(unaff_EBP - 0x2eec);
        uVar1 = *(undefined8 *)(unaff_EBP - 0x2ee4);
        *(undefined4 *)(unaff_EBP - 0x2e68) = uVar24;
        *(undefined4 *)(unaff_EBP - 0x2e60) = uVar24;
        iVar17 = *(int *)(unaff_EBP - 0x2b28);
        *(undefined4 *)(unaff_EBP - 0x2e6c) = uVar64;
        *(undefined4 *)(unaff_EBP - 0x2e64) = uVar64;
        *(undefined8 *)(unaff_EBP - 0x2e54) = uVar1;
        uVar24 = *(undefined4 *)(unaff_EBP - 0x2ed8);
        *(undefined4 *)(unaff_EBP - 0x2e4c) = *(undefined4 *)(unaff_EBP - 0x2edc);
        *(undefined4 *)(unaff_EBP - 0x2e48) = uVar24;
        FUN_00411040((void *)(iVar17 + 0x58),(undefined8 *)(unaff_EBP - 0x2e6c));
      }
    }
    iVar17 = FUN_00411d60(pvVar52,0xffffffff);
    iVar19 = (int)((iVar17 >> 0x1f & 3U) + iVar17) >> 2;
    iVar17 = FUN_00407db0(pvVar52,0xffffffff);
    if (*(int *)((int)pvVar52 + 0x6c) < iVar17) goto LAB_0053b968;
    *(undefined4 *)(unaff_EBP - 0x2b40) = *(undefined4 *)((int)pvVar52 + 0x6c);
    iVar17 = FUN_00407db0(pvVar52,0xffffffff);
    iVar39 = FUN_00411d60(*(void **)(unaff_EBP - 0x2b14),0xffffffff);
    pvVar52 = *(void **)(unaff_EBP - 0x2b14);
    if ((iVar17 + iVar39 <= *(int *)(unaff_EBP - 0x2b40)) ||
       (*(int *)(unaff_EBP - 0x2b40) / iVar19 ==
        (*(int *)(unaff_EBP - 0x2b40) + *(int *)(unaff_EBP - 0x2b24)) / iVar19)) goto LAB_0053b968;
    fVar55 = FUN_004021b0((float *)((int)pvVar52 + 0x160));
    *(float *)(unaff_EBP - 0x2b1c) = (float)fVar55;
    if (*(float *)(unaff_EBP - 0x2b1c) <= 0.0) goto LAB_0053b968;
    FUN_004c8530(unaff_EBP - 0x890);
    FUN_00402550((void *)(unaff_EBP - 0x890),(longlong *)((int)pvVar52 + 0x10));
    iVar19 = rand();
    iVar17 = *(int *)(unaff_EBP - 0x2b28);
    *(undefined4 *)(unaff_EBP - 0x884) = 0x16;
    *(float *)(unaff_EBP - 0x880) = ((float)iVar19 * 0.5) / 32767.0 + 1.0;
    FUN_00428590((void *)(iVar17 + 8),(undefined4 *)(unaff_EBP - 0x890));
    FUN_00422890((undefined4 *)(unaff_EBP - 0xde0));
    pfVar25 = FUN_00412670((float *)((int)pvVar52 + 0x160),(float *)(unaff_EBP - 0x16d0));
    puVar12 = (undefined4 *)FUN_004e1520((float *)(unaff_EBP - 0x13b8),150.0,pfVar25);
    FUN_00401060((void *)(unaff_EBP - 0xda4),puVar12);
    fVar56 = *(float *)(*(int *)(unaff_EBP - 0x2b14) + 0x13b4);
    *(undefined4 *)(unaff_EBP - 0xd78) = 0;
    *(undefined4 *)(unaff_EBP - 0xd94) = 0x3f000000;
    *(float *)(unaff_EBP - 0xd8c) = fVar56 * 0.25;
    *(undefined4 *)(unaff_EBP - 0xd88) = 0;
    *(undefined1 *)(unaff_EBP - 0xd84) = 1;
    FUN_00402a40((void *)(unaff_EBP - 0xdc8),(undefined4 *)((int)pvVar52 + 0x10));
    pvVar52 = *(void **)(unaff_EBP - 0x2b14);
    *(undefined4 *)(unaff_EBP - 0xde0) = *(undefined4 *)((int)pvVar52 + 8);
    *(undefined4 *)(unaff_EBP - 0xddc) = *(undefined4 *)((int)pvVar52 + 0xc);
    FUN_00401060((void *)(unaff_EBP - 0xdd8),(undefined4 *)((int)pvVar52 + 0x1b0));
    bVar6 = *(byte *)((int)pvVar52 + 0x68);
    *(undefined4 *)(unaff_EBP - 0xd80) = 0;
    *(undefined4 *)(unaff_EBP - 0x2b40) = 0x3f800000;
    if (bVar6 == 0x37) {
      *(undefined4 *)(unaff_EBP - 0x2b40) = 0x3dcccccd;
    }
    *(undefined4 *)(unaff_EBP - 0x2b90) = *(undefined4 *)((int)pvVar52 + 0x13b4);
    fVar55 = FUN_00409d10((uint)bVar6);
    *(float *)(unaff_EBP - 0x2b1c) = (float)fVar55;
    fVar55 = FUN_00408f70(pvVar52);
    fVar56 = *(float *)(unaff_EBP - 0x2b90);
    *(float *)(unaff_EBP - 0x2b48) = (float)fVar55;
    *(float *)(unaff_EBP - 0x2b1c) =
         *(float *)(unaff_EBP - 0x2b1c) * *(float *)(unaff_EBP - 0x2b48) *
         (fVar56 * fVar56 * 5.0 + *(float *)(unaff_EBP - 0x2b40));
    iVar19 = rand();
    iVar17 = *(int *)(unaff_EBP - 0x2b18);
    *(float *)(unaff_EBP - 0xd98) =
         ((1.25 - ((float)iVar19 * 0.5) / 32767.0) + 0.0) * *(float *)(unaff_EBP - 0x2b1c);
    FUN_00428360((void *)(iVar17 + 0x14),(undefined4 *)(unaff_EBP - 0xde0));
    FUN_00428360((void *)(*(int *)(unaff_EBP - 0x2b28) + 0x20),(undefined4 *)(unaff_EBP - 0xde0));
    unaff_EDI = *(void **)(unaff_EBP - 0x2b18);
    goto LAB_00537cfb;
  case 'I':
    pvVar52 = *(void **)(unaff_EBP - 0x2b14);
    if (*(char *)((int)unaff_EDI + 0xb4) == '\0') goto code_r0x0053cb08;
    goto LAB_00537d0a;
  case 'Y':
  case 'Z':
    iVar17 = *(int *)((int)*(void **)(unaff_EBP - 0x2b14) + 0x6c);
    iVar19 = FUN_00407db0(*(void **)(unaff_EBP - 0x2b14),0xffffffff);
    if ((iVar17 < iVar19) && (iVar17 / 200 != (iVar17 + *(int *)(unaff_EBP - 0x2b24)) / 200)) {
      FUN_004c8530(unaff_EBP - 0x6e0);
      FUN_00402550((void *)(unaff_EBP - 0x6e0),(longlong *)(*(int *)(unaff_EBP - 0x2b14) + 0x10));
      iVar19 = rand();
      iVar17 = *(int *)(unaff_EBP - 0x2b28);
      *(undefined4 *)(unaff_EBP - 0x6d4) = 0x24;
      *(float *)(unaff_EBP - 0x6d0) = ((float)iVar19 * 0.25) / 32767.0 + 1.0;
      FUN_00428590((void *)(iVar17 + 8),(undefined4 *)(unaff_EBP - 0x6e0));
    }
    pvVar52 = *(void **)(unaff_EBP - 0x2b14);
    if (((*(char *)((int)unaff_EDI + 0xb4) != '\0') || (*(char *)((int)pvVar52 + 0x60) == '\0')) &&
       (pvVar52 != *(void **)((int)unaff_EDI + 0xb8))) goto LAB_00537cf5;
    iVar17 = FUN_00407db0(pvVar52,0xffffffff);
    pvVar52 = *(void **)(unaff_EBP - 0x2b14);
    if (iVar17 < *(int *)((int)pvVar52 + 0x6c)) goto LAB_00537cfb;
    iVar17 = FUN_00407db0(pvVar52,0xffffffff);
    param_2 = *(int *)(unaff_EBP - 0x2b24);
    if (*(int *)((int)pvVar52 + 0x6c) + param_2 <= iVar17) goto LAB_00537d01;
    FUN_004c8530(unaff_EBP - 0x710);
    FUN_00402550((void *)(unaff_EBP - 0x710),(longlong *)((int)pvVar52 + 0x10));
    iVar19 = rand();
    iVar17 = *(int *)(unaff_EBP - 0x2b28);
    *(undefined4 *)(unaff_EBP - 0x704) = 0x26;
    *(float *)(unaff_EBP - 0x700) = ((float)iVar19 * 0.25) / 32767.0 + 1.0;
    FUN_00428590((void *)(iVar17 + 8),(undefined4 *)(unaff_EBP - 0x710));
    FUN_00422890((undefined4 *)(unaff_EBP - 0xb78));
    iVar17 = *(int *)(unaff_EBP - 0x2b14);
    *(undefined4 *)(unaff_EBP - 0xb18) = 3;
    bVar6 = *(byte *)(iVar17 + 0x68);
    *(undefined1 *)(unaff_EBP - 0xb1c) = 0;
    *(undefined4 *)(unaff_EBP - 0xb24) = 0;
    *(undefined4 *)(unaff_EBP - 0xb20) = 0;
    fVar55 = FUN_00409d10((uint)bVar6);
    pvVar29 = *(void **)(unaff_EBP - 0x2b14);
    *(float *)(unaff_EBP - 0x2b1c) = (float)fVar55;
    fVar55 = FUN_00411ad0(pvVar29);
    iVar17 = *(int *)(unaff_EBP - 0x2b14);
    *(float *)(unaff_EBP - 0x2b48) = (float)fVar55;
    fVar56 = *(float *)(unaff_EBP - 0x2b1c);
    fVar58 = *(float *)(unaff_EBP - 0x2b48);
    cVar3 = *(char *)(iVar17 + 0x68);
    *(undefined4 *)(unaff_EBP - 0xb78) = *(undefined4 *)(iVar17 + 8);
    *(undefined4 *)(unaff_EBP - 0xb74) = *(undefined4 *)(iVar17 + 0xc);
    *(float *)(unaff_EBP - 0xb30) = fVar56 * fVar58 * 2.0;
    *(undefined4 *)(unaff_EBP - 0xb2c) = 0x41000000;
    *(char *)(unaff_EBP - 0xb14) = (cVar3 == 'Z') + '\x01';
    FUN_00402a40((void *)(unaff_EBP - 0xb60),(undefined4 *)((int)pvVar52 + 0x10));
    *(undefined4 *)(unaff_EBP - 0xb28) = 0x3f800000;
    *(undefined4 *)(unaff_EBP - 0xb10) = 0;
    puVar12 = FUN_00401080((void *)(unaff_EBP - 0x1310),0,0,0);
    FUN_00401060((void *)(unaff_EBP - 0xb3c),puVar12);
    FUN_00428360((void *)((int)unaff_EDI + 0x14),(undefined4 *)(unaff_EBP - 0xb78));
    FUN_00428360((void *)(*(int *)(unaff_EBP - 0x2b28) + 0x20),(undefined4 *)(unaff_EBP - 0xb78));
    goto LAB_00537cf5;
  case '\\':
    pvVar52 = *(void **)(unaff_EBP - 0x2b14);
    if (((*(char *)((int)unaff_EDI + 0xb4) == '\0') && (*(char *)((int)pvVar52 + 0x60) != '\0')) ||
       (pvVar52 == *(void **)((int)unaff_EDI + 0xb8))) {
      iVar17 = FUN_00407db0(pvVar52,0xffffffff);
      pvVar52 = *(void **)(unaff_EBP - 0x2b14);
      if (iVar17 < *(int *)((int)pvVar52 + 0x6c)) goto LAB_00537cfb;
      iVar17 = FUN_00407db0(pvVar52,0xffffffff);
      param_2 = *(int *)(unaff_EBP - 0x2b24);
      if (*(int *)((int)pvVar52 + 0x6c) + param_2 <= iVar17) goto LAB_00537d01;
      pvVar52 = *(void **)(unaff_EBP - 0x2b6c);
      *(undefined4 *)(unaff_EBP - 0x2b20) = 0;
      *(undefined8 *)(unaff_EBP - 0x2c30) = 0;
      FUN_00428070(pvVar52,(undefined4 *)(unaff_EBP - 0x2c80));
      piVar20 = (int *)FUN_00530550(*(void **)(unaff_EBP - 0x2b6c),
                                    (undefined4 *)(unaff_EBP - 0x2df0));
      bVar5 = FUN_0042c6f0((void *)(unaff_EBP - 0x2c80),piVar20);
      uVar18 = *(uint *)(unaff_EBP - 0x2c2c);
      uVar54 = *(uint *)(unaff_EBP - 0x2c30);
      if (bVar5) goto LAB_0053b614;
      goto LAB_0053b6b7;
    }
    break;
  case 'e':
    iVar17 = *(int *)(unaff_EBP - 0x2b14);
    if ((((*(char *)((int)unaff_EDI + 0xb4) == '\0') && (*(char *)(iVar17 + 0x60) != '\0')) ||
        (iVar17 == *(int *)((int)unaff_EDI + 0xb8))) && (*(int *)(iVar17 + 0x6c) == 0)) {
      FUN_004c8530(unaff_EBP - 0x680);
      pvVar52 = *(void **)(unaff_EBP - 0x2b14);
      FUN_00402550((void *)(unaff_EBP - 0x680),(longlong *)((int)pvVar52 + 0x10));
      iVar17 = *(int *)(unaff_EBP - 0x2b28);
      *(undefined4 *)(unaff_EBP - 0x670) = 0x3f800000;
      *(undefined4 *)(unaff_EBP - 0x674) = 0x19;
      FUN_00428590((void *)(iVar17 + 8),(undefined4 *)(unaff_EBP - 0x680));
      FUN_004029b0((undefined1 *)(unaff_EBP - 0x2f1c));
      *(undefined4 *)(unaff_EBP - 0x2f14) = 10000;
      *(undefined1 *)(unaff_EBP - 0x2f1c) = 1;
      FUN_00411740(pvVar52,(char *)(unaff_EBP - 0x2f1c));
      if (0 < *(int *)((int)pvVar52 + 300)) {
        *(undefined4 *)((int)pvVar52 + 300) = 0;
      }
      FUN_004063d0(unaff_EBP - 0x30d4);
      pvVar52 = *(void **)(unaff_EBP - 0x2b14);
      uVar24 = *(undefined4 *)((int)pvVar52 + 0xc);
      uVar64 = *(undefined4 *)((int)pvVar52 + 8);
      *(undefined8 *)(unaff_EBP - 0x30c4) = *(undefined8 *)(unaff_EBP - 0x2f1c);
      uVar1 = *(undefined8 *)(unaff_EBP - 0x2f14);
      *(undefined4 *)(unaff_EBP - 0x30d0) = uVar24;
      *(undefined4 *)(unaff_EBP - 0x30c8) = uVar24;
      iVar17 = *(int *)(unaff_EBP - 0x2b28);
      *(undefined4 *)(unaff_EBP - 0x30d4) = uVar64;
      *(undefined4 *)(unaff_EBP - 0x30cc) = uVar64;
      *(undefined8 *)(unaff_EBP - 0x30bc) = uVar1;
      uVar24 = *(undefined4 *)(unaff_EBP - 0x2f08);
      *(undefined4 *)(unaff_EBP - 0x30b4) = *(undefined4 *)(unaff_EBP - 0x2f0c);
      *(undefined4 *)(unaff_EBP - 0x30b0) = uVar24;
      FUN_00411040((void *)(iVar17 + 0x58),(undefined8 *)(unaff_EBP - 0x30d4));
      goto LAB_00537cfb;
    }
    break;
  case 'g':
    iVar17 = *(int *)(unaff_EBP - 0x2b14);
    if ((((*(char *)((int)unaff_EDI + 0xb4) == '\0') && (*(char *)(iVar17 + 0x60) != '\0')) ||
        (iVar17 == *(int *)((int)unaff_EDI + 0xb8))) && (*(int *)(iVar17 + 0x6c) == 0)) {
      FUN_004c8530(unaff_EBP - 0x5f0);
      pvVar52 = *(void **)(unaff_EBP - 0x2b14);
      FUN_00402550((void *)(unaff_EBP - 0x5f0),(longlong *)((int)pvVar52 + 0x10));
      iVar17 = *(int *)(unaff_EBP - 0x2b28);
      *(undefined4 *)(unaff_EBP - 0x5e0) = 0x3f800000;
      *(undefined4 *)(unaff_EBP - 0x5e4) = 0x19;
      FUN_00428590((void *)(iVar17 + 8),(undefined4 *)(unaff_EBP - 0x5f0));
      FUN_004029b0((undefined1 *)(unaff_EBP - 0x2e84));
      *(undefined4 *)(unaff_EBP - 0x2e7c) = 30000;
      fVar55 = FUN_00411ad0(pvVar52);
      *(float *)(unaff_EBP - 0x2b1c) = (float)fVar55;
      *(float *)(unaff_EBP - 0x2e80) = *(float *)(unaff_EBP - 0x2b1c) * 4.0;
      *(undefined1 *)(unaff_EBP - 0x2e84) = 6;
      FUN_00411740(pvVar52,(char *)(unaff_EBP - 0x2e84));
      if (0 < *(int *)((int)pvVar52 + 300)) {
        *(undefined4 *)((int)pvVar52 + 300) = 0;
      }
      FUN_004063d0(unaff_EBP - 0x30fc);
      pvVar52 = *(void **)(unaff_EBP - 0x2b14);
      uVar24 = *(undefined4 *)((int)pvVar52 + 0xc);
      uVar64 = *(undefined4 *)((int)pvVar52 + 8);
      *(undefined8 *)(unaff_EBP - 0x30ec) = *(undefined8 *)(unaff_EBP - 0x2e84);
      uVar1 = *(undefined8 *)(unaff_EBP - 0x2e7c);
      *(undefined4 *)(unaff_EBP - 0x30f8) = uVar24;
      *(undefined4 *)(unaff_EBP - 0x30f0) = uVar24;
      iVar17 = *(int *)(unaff_EBP - 0x2b28);
      *(undefined4 *)(unaff_EBP - 0x30fc) = uVar64;
      *(undefined4 *)(unaff_EBP - 0x30f4) = uVar64;
      *(undefined8 *)(unaff_EBP - 0x30e4) = uVar1;
      uVar24 = *(undefined4 *)(unaff_EBP - 0x2e70);
      *(undefined4 *)(unaff_EBP - 0x30dc) = *(undefined4 *)(unaff_EBP - 0x2e74);
      *(undefined4 *)(unaff_EBP - 0x30d8) = uVar24;
      FUN_00411040((void *)(iVar17 + 0x58),(undefined8 *)(unaff_EBP - 0x30fc));
      goto LAB_00537cfb;
    }
    break;
  case 'i':
    if (*(void **)(unaff_EBP - 0x2b14) == *(void **)((int)unaff_EDI + 0xb8)) {
      iVar17 = FUN_00407db0(*(void **)(unaff_EBP - 0x2b14),0xffffffff);
      pvVar52 = *(void **)(unaff_EBP - 0x2b14);
      if (iVar17 < *(int *)((int)pvVar52 + 0x6c)) goto LAB_00537cfb;
      iVar17 = FUN_00407db0(pvVar52,0xffffffff);
      param_2 = *(int *)(unaff_EBP - 0x2b24);
      if (*(int *)((int)pvVar52 + 0x6c) + param_2 <= iVar17) goto LAB_00537d01;
      iVar17 = *(int *)((int)unaff_EDI + 0xb8);
      pCVar36 = (CRefTime *)FUN_004e2320((void *)(iVar17 + 0x10),1);
      lVar37 = CRefTime::Millisecs(pCVar36);
      pCVar36 = (CRefTime *)FUN_004e2320((void *)(iVar17 + 0x10),0);
      lVar11 = CRefTime::Millisecs(pCVar36);
      iVar17 = FUN_004feec0(unaff_EDI,lVar11,lVar37);
      if (iVar17 == 0) goto LAB_00537cf5;
      pvVar52 = (void *)(iVar17 + 0x14018);
      *(undefined4 *)(unaff_EBP - 0x2b20) = 8;
      do {
        iVar17 = 8;
        *(undefined4 *)(unaff_EBP - 0x2b40) = 8;
        do {
          if (*(int *)((int)pvVar52 + 0x18) == 1) {
            pvVar33 = (void *)(*(int *)(unaff_EBP - 0x2b14) + 0x10);
            puVar12 = (undefined4 *)FUN_004e2320(pvVar52,0);
            pvVar29 = (void *)FUN_004e2320(pvVar33,0);
            FUN_004cde20(pvVar29,puVar12);
            puVar12 = (undefined4 *)FUN_004e2320(pvVar52,1);
            pvVar29 = (void *)FUN_004e2320(pvVar33,1);
            FUN_004cde20(pvVar29,puVar12);
            uVar18 = 0;
            pvVar29 = (void *)FUN_004e2320(pvVar33,2);
            FUN_004cde40(pvVar29,uVar18);
            iVar17 = *(int *)(unaff_EBP - 0x2b40);
          }
          pvVar52 = (void *)((int)pvVar52 + 0x68);
          iVar17 = iVar17 + -1;
          *(int *)(unaff_EBP - 0x2b40) = iVar17;
        } while (iVar17 != 0);
        piVar20 = (int *)(unaff_EBP - 0x2b20);
        *piVar20 = *piVar20 + -1;
      } while (*piVar20 != 0);
      goto code_r0x00537cef;
    }
    break;
  case 'n':
    goto code_r0x0053cba1;
  }
  pvVar52 = *(void **)(unaff_EBP - 0x2b14);
  goto LAB_00537d01;
LAB_0053b614:
  do {
    puVar23 = (uint *)FUN_00402bc0((int *)(unaff_EBP - 0x2c80));
    if (puVar23[2] != 0) {
      if ((*(int *)(puVar23[2] + 0x198) == *(int *)(*(int *)(unaff_EBP - 0x2b14) + 8)) &&
         (*(int *)(puVar23[2] + 0x19c) == *(int *)(*(int *)(unaff_EBP - 0x2b14) + 0xc))) {
        *(int *)(unaff_EBP - 0x2b20) = *(int *)(unaff_EBP - 0x2b20) + 1;
      }
      uVar49 = *puVar23;
      uVar62 = puVar23[1];
      if (((int)uVar62 <= (int)uVar18) && (((int)uVar62 < (int)uVar18 || (uVar49 < uVar54)))) {
        *(uint *)(unaff_EBP - 0x2c30) = uVar49;
        *(uint *)(unaff_EBP - 0x2c2c) = uVar62;
        uVar54 = uVar49;
        uVar18 = uVar62;
      }
    }
    FUN_00407a30((void *)(unaff_EBP - 0x2c80),(int *)(unaff_EBP - 0x301c));
    piVar20 = (int *)FUN_00530550(*(void **)(unaff_EBP - 0x2b6c),(undefined4 *)(unaff_EBP - 0x2df0))
    ;
    bVar5 = FUN_0042c6f0((void *)(unaff_EBP - 0x2c80),piVar20);
  } while (bVar5);
  if (2 < *(int *)(unaff_EBP - 0x2b20)) goto code_r0x00537cef;
LAB_0053b6b7:
  *(uint *)(unaff_EBP - 0x2c30) = uVar54 - 1;
  *(uint *)(unaff_EBP - 0x2c2c) = (uVar18 - 1) + (uint)(uVar54 != 0);
  pCVar8 = operator_new(0x1e60);
  *(Creature **)(unaff_EBP - 0x2b30) = pCVar8;
  *(undefined1 *)(unaff_EBP - 4) = 0x11;
  if (pCVar8 == (Creature *)0x0) {
    pCVar8 = (Creature *)0x0;
  }
  else {
    pCVar8 = cube::Creature::Creature(pCVar8,(undefined4 *)(unaff_EBP - 0x2c30));
  }
  iVar17 = *(int *)(unaff_EBP - 0x2b14);
  *(undefined1 *)(unaff_EBP - 4) = 5;
  piVar20 = (int *)(iVar17 + 0x13f8);
  *(char *)&pCVar8[4].Creature_data.offset_0xc =
       (*(char *)(iVar17 + 0x60) == '\0') * '\x02' + '\x01';
  bVar5 = FUN_004e28d0(piVar20);
  if (bVar5) {
    iVar17 = *(int *)(unaff_EBP - 0x2b14);
    pCVar50 = (Creature_vftable *)0x25;
  }
  else {
    uVar18 = FUN_0041fff0(piVar20);
    uVar54 = rand();
    iVar17 = *(int *)(unaff_EBP - 0x2b14);
    puVar23 = (uint *)FUN_00402bb0((void *)(iVar17 + 0x13f8),uVar54 % uVar18);
    pCVar50 = (Creature_vftable *)*puVar23;
  }
  if (*(int *)(iVar17 + 0x13f4) == 1) {
    pCVar8[5].vftablePtr = *(Creature_vftable **)(iVar17 + 100);
    FUN_0041de30(&pCVar8[0x26].Creature_data.offset_0x4,(undefined1 *)(iVar17 + 0x300));
    FUN_00407730(pCVar8 + 6,(undefined1 *)(iVar17 + 0x78));
  }
  else if (*(int *)(iVar17 + 0x13f4) == 2) {
    uVar18 = FUN_00405420(*(void **)(unaff_EBP - 0x2b18),(uint *)(iVar17 + 0x11d0));
    if (uVar18 == 0) {
      uVar18 = *(uint *)(unaff_EBP - 0x2b14);
    }
    pCVar8[5].vftablePtr = *(Creature_vftable **)(uVar18 + 100);
    FUN_0041de30(&pCVar8[0x26].Creature_data.offset_0x4,(undefined1 *)(uVar18 + 0x300));
    FUN_00407730(pCVar8 + 6,(undefined1 *)(uVar18 + 0x78));
    iVar17 = *(int *)(unaff_EBP - 0x2b14);
  }
  else {
    pCVar8[5].vftablePtr = pCVar50;
    FUN_0040a840((uint *)(pCVar8 + 5),(int)(pCVar8 + 6),(undefined4 *)0x0);
  }
  *(ushort *)&pCVar8[6].Creature_data.field_0x2 =
       *(ushort *)&pCVar8[6].Creature_data.field_0x2 & 0xfdff | 0x800;
  pCVar8[0x14].vftablePtr = *(Creature_vftable **)(iVar17 + 400);
  fVar55 = FUN_0040fda0(iVar17);
  *(float *)&pCVar8[0x12].Creature_data = (float)fVar55;
  FUN_00402a40(&(pCVar8->Creature_data).offset_0xc,(undefined4 *)(iVar17 + 0x10));
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
  iVar17 = *(int *)(unaff_EBP - 0x2b14);
  *(CompanionBehavior **)(unaff_EBP - 0x2b1c) = pCVar15;
  (pCVar15->CompanionBehavior_data).offset_0x4 = *(undefined4 *)(iVar17 + 8);
  (pCVar15->CompanionBehavior_data).offset_0x8 = *(undefined4 *)(iVar17 + 0xc);
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
  pvVar52 = *(void **)(unaff_EBP - 0x2b14);
  pvVar29 = *(void **)(unaff_EBP - 0x2b6c);
  pCVar8[0xfe].Creature_data.offset_0x8 = *(undefined4 *)(unaff_EBP - 0x2b40);
  pCVar8[0x14].Creature_data.offset_0x4 = *(undefined4 *)((int)pvVar52 + 8);
  pCVar8[0x14].Creature_data.offset_0x8 = *(undefined4 *)((int)pvVar52 + 0xc);
  puVar23 = FUN_00402b10(pvVar29,(uint *)(unaff_EBP - 0x2c30));
  *puVar23 = (uint)pCVar8;
  goto LAB_0053b968;
code_r0x0053cb08:
  iVar17 = FUN_00407db0(pvVar52,0xffffffff);
  if (iVar17 <= *(int *)((int)pvVar52 + 0x6c)) goto LAB_00537cfb;
  iVar17 = FUN_00407db0(pvVar52,0xffffffff);
  param_2 = *(int *)(unaff_EBP - 0x2b24);
  if (iVar17 <= *(int *)((int)pvVar52 + 0x6c) + param_2) {
    FUN_004c8530(unaff_EBP - 0x830);
    FUN_00402550((void *)(unaff_EBP - 0x830),(longlong *)((int)pvVar52 + 0x10));
    iVar19 = rand();
    iVar17 = *(int *)(unaff_EBP - 0x2b28);
    *(undefined4 *)(unaff_EBP - 0x824) = 0x2b;
    *(float *)(unaff_EBP - 0x820) = ((float)iVar19 * 0.25) / 32767.0 + 0.6;
    FUN_00428590((void *)(iVar17 + 8),(undefined4 *)(unaff_EBP - 0x830));
    goto LAB_00537cfb;
  }
  goto LAB_00537d01;
LAB_0053b440:
  uVar60 = ZEXT48(pvVar52);
  uVar63 = 1;
  uVar66 = 0x53b44f;
  FUN_004cde40(&stack0xfffffff0,1);
  uVar64 = 0;
  uVar24 = 0x53b45b;
  FUN_004cde40(&stack0xffffffe8,0);
  FUN_004cde40(&stack0xffffffe0,0);
  puVar23 = FUN_00406380((void *)(unaff_EBP - 0x2124),uVar24,uVar64,uVar66,uVar63,uVar49,puVar23);
  puVar23 = FUN_00402c50(pvVar29,(uint *)(unaff_EBP - 0x2574),puVar23);
  cVar3 = FUN_004d4f90(*(void **)(unaff_EBP - 0x2b18),puVar23,(float *)uVar60,(char)(uVar60 >> 0x20)
                      );
  if (cVar3 != '\0') {
LAB_0053b547:
    plVar30 = (longlong *)FUN_004e2320(pvVar29,2);
    fVar55 = FUN_00401420(plVar30);
    *(float *)(*(int *)(unaff_EBP - 0x2b14) + 0x13bc) = (float)fVar55;
    FUN_00537cef();
    return;
  }
  pvVar29 = (void *)FUN_004e2320(pvVar29,2);
  piVar20 = (int *)(unaff_EBP - 0x351c);
  uVar18 = 1;
  FUN_004013d0(pvVar52,2);
  pvVar33 = (void *)FUN_004014b0(pvVar29,(int *)(unaff_EBP - 0x352c));
  puVar12 = (undefined4 *)FUN_00405660(pvVar33,piVar20,uVar18);
  uVar18 = puVar12[1];
  iVar17 = 0;
  puVar23 = (uint *)*puVar12;
  puVar27 = (uint *)FUN_004e2320(*(void **)(unaff_EBP - 0x2b64),1);
  uVar49 = puVar27[1];
  uVar54 = *puVar27;
  puVar27 = (uint *)FUN_004e2320(*(void **)(unaff_EBP - 0x2b64),0);
  iVar17 = FUN_00406050(*(void **)(unaff_EBP - 0x2b18),*puVar27,puVar27[1],uVar54,uVar49,
                        (uint)puVar23,uVar18,iVar17);
  bVar6 = FUN_00406280(iVar17);
  if (CONCAT31(extraout_var,bVar6) == 2) {
    pvVar29 = *(void **)(unaff_EBP - 0x2b64);
    goto LAB_0053b547;
  }
  FUN_004cde40((void *)(unaff_EBP - 0x2fe8),1);
  FUN_00402eb0(pvVar29,(uint *)(unaff_EBP - 0x2fe8));
  pvVar29 = *(void **)(unaff_EBP - 0x2b64);
  goto LAB_0053b440;
}


/* FUN_0054b29b @ 0054b29b  kind=gamemisc  attributed-by=role:dispatch-target  size=75 */

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


/* ___isa_available_init @ 0054b4ec  kind=gamemisc  attributed-by=role:dispatch-target  size=313 */

/* WARNING: Removing unreachable block (ram,0x0054b5d6) */
/* WARNING: Removing unreachable block (ram,0x0054b5a6) */
/* WARNING: Removing unreachable block (ram,0x0054b51c) */
/* WARNING: Removing unreachable block (ram,0x0054b57a) */
/* Library Function - Single Match
    ___isa_available_init
   
   Library: Visual Studio 2012 Release */

undefined4 ___isa_available_init(void)

{
  int iVar1;
  uint *puVar2;
  BOOL BVar3;
  uint uVar4;
  
  DAT_00584640 = 0;
  DAT_00583cd0 = DAT_00583cd0 | 1;
  BVar3 = IsProcessorFeaturePresent(10);
  if (BVar3 != 0) {
    DAT_00584640 = 1;
    iVar1 = cpuid_Version_info(1);
    uVar4 = DAT_00583cd0 | 2;
    if ((*(uint *)(iVar1 + 0xc) & 0x100000) != 0) {
      uVar4 = DAT_00583cd0 | 6;
      DAT_00584640 = 2;
    }
    DAT_00583cd0 = uVar4;
    if ((*(uint *)(iVar1 + 0xc) & 0x10000000) != 0) {
      DAT_00583cd0 = uVar4 | 8;
      DAT_00584640 = 3;
    }
    iVar1 = cpuid_Extended_Feature_Enumeration_info(7);
    if ((*(uint *)(iVar1 + 4) & 0x200) != 0) {
      DAT_00584644 = DAT_00584644 | 2;
    }
    iVar1 = cpuid_basic_info(0);
    if (((*(int *)(iVar1 + 4) == 0x756e6547) && (*(int *)(iVar1 + 8) == 0x49656e69)) &&
       (*(int *)(iVar1 + 0xc) == 0x6c65746e)) {
      puVar2 = (uint *)cpuid_Version_info(1);
      uVar4 = *puVar2 & 0xfff3ff0;
      if ((((uVar4 == 0x106c0) || (uVar4 == 0x20660)) ||
          ((uVar4 == 0x20670 || ((uVar4 == 0x30650 || (uVar4 == 0x30660)))))) || (uVar4 == 0x30670))
      {
        DAT_00584644 = DAT_00584644 | 1;
      }
    }
  }
  return 0;
}


/* FUN_00556890 @ 00556890  kind=gamemisc  attributed-by=role:dispatch-target  size=40 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00556890(void)

{
  _DAT_00583ce8 = 0xffff;
  DAT_00583cea = 0xff;
  DAT_00583ceb = 0;
  return;
}


/* FUN_005568c0 @ 005568c0  kind=gamemisc  attributed-by=role:dispatch-target  size=33 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_005568c0(void)

{
  _DAT_00583cec = 0xc8c8;
  _DAT_00583cee = 0x1c8;
  return;
}


/* FUN_005568f0 @ 005568f0  kind=gamemisc  attributed-by=role:dispatch-target  size=40 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_005568f0(void)

{
  _DAT_00583ce4 = 0xffff;
  DAT_00583ce6 = 0xff;
  DAT_00583ce7 = 0x82;
  return;
}


/* FUN_00556920 @ 00556920  kind=gamemisc  attributed-by=role:dispatch-target  size=40 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00556920(void)

{
  _DAT_00583d00 = 0xffff;
  DAT_00583d02 = 0xff;
  DAT_00583d03 = 0;
  return;
}


/* FUN_00556950 @ 00556950  kind=gamemisc  attributed-by=role:dispatch-target  size=33 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00556950(void)

{
  _DAT_00583d04 = 0xc8c8;
  _DAT_00583d06 = 0x1c8;
  return;
}


/* FUN_00556980 @ 00556980  kind=gamemisc  attributed-by=role:dispatch-target  size=40 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00556980(void)

{
  _DAT_00583cfc = 0xffff;
  DAT_00583cfe = 0xff;
  DAT_00583cff = 0x82;
  return;
}


/* FUN_005569b0 @ 005569b0  kind=gamemisc  attributed-by=role:dispatch-target  size=40 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_005569b0(void)

{
  _DAT_00583d10 = 0xffff;
  DAT_00583d12 = 0xff;
  DAT_00583d13 = 0;
  return;
}


/* FUN_005569e0 @ 005569e0  kind=gamemisc  attributed-by=role:dispatch-target  size=33 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_005569e0(void)

{
  _DAT_00583d14 = 0xc8c8;
  _DAT_00583d16 = 0x1c8;
  return;
}


/* FUN_00556a10 @ 00556a10  kind=gamemisc  attributed-by=role:dispatch-target  size=40 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00556a10(void)

{
  _DAT_00583d0c = 0xffff;
  DAT_00583d0e = 0xff;
  DAT_00583d0f = 0x82;
  return;
}


/* FUN_00556a40 @ 00556a40  kind=gamemisc  attributed-by=role:dispatch-target  size=40 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00556a40(void)

{
  _DAT_00583d2c = 0xffff;
  DAT_00583d2e = 0xff;
  DAT_00583d2f = 0;
  return;
}


/* FUN_00556a70 @ 00556a70  kind=gamemisc  attributed-by=role:dispatch-target  size=33 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00556a70(void)

{
  _DAT_00583d30 = 0xc8c8;
  _DAT_00583d32 = 0x1c8;
  return;
}


/* FUN_00556aa0 @ 00556aa0  kind=gamemisc  attributed-by=role:dispatch-target  size=40 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00556aa0(void)

{
  _DAT_00583d28 = 0xffff;
  DAT_00583d2a = 0xff;
  DAT_00583d2b = 0x82;
  return;
}


/* FUN_00556ad0 @ 00556ad0  kind=gamemisc  attributed-by=role:dispatch-target  size=40 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00556ad0(void)

{
  _DAT_00583d40 = 0xffff;
  DAT_00583d42 = 0xff;
  DAT_00583d43 = 0;
  return;
}


/* FUN_00556b00 @ 00556b00  kind=gamemisc  attributed-by=role:dispatch-target  size=33 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00556b00(void)

{
  _DAT_00583d44 = 0xc8c8;
  _DAT_00583d46 = 0x1c8;
  return;
}


/* FUN_00556b30 @ 00556b30  kind=gamemisc  attributed-by=role:dispatch-target  size=40 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00556b30(void)

{
  _DAT_00583d3c = 0xffff;
  DAT_00583d3e = 0xff;
  DAT_00583d3f = 0x82;
  return;
}


/* FUN_00556b60 @ 00556b60  kind=gamemisc  attributed-by=role:dispatch-target  size=40 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00556b60(void)

{
  _DAT_00583d58 = 0xffff;
  DAT_00583d5a = 0xff;
  DAT_00583d5b = 0;
  return;
}


/* FUN_00556b90 @ 00556b90  kind=gamemisc  attributed-by=role:dispatch-target  size=33 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00556b90(void)

{
  _DAT_00583d5c = 0xc8c8;
  _DAT_00583d5e = 0x1c8;
  return;
}


/* FUN_00556bc0 @ 00556bc0  kind=gamemisc  attributed-by=role:dispatch-target  size=40 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00556bc0(void)

{
  _DAT_00583d54 = 0xffff;
  DAT_00583d56 = 0xff;
  DAT_00583d57 = 0x82;
  return;
}


/* FUN_00556bf0 @ 00556bf0  kind=gamemisc  attributed-by=role:dispatch-target  size=40 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00556bf0(void)

{
  _DAT_00583d70 = 0xffff;
  DAT_00583d72 = 0xff;
  DAT_00583d73 = 0;
  return;
}


/* FUN_00556c20 @ 00556c20  kind=gamemisc  attributed-by=role:dispatch-target  size=33 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00556c20(void)

{
  _DAT_00583d74 = 0xc8c8;
  _DAT_00583d76 = 0x1c8;
  return;
}


/* FUN_00556c50 @ 00556c50  kind=gamemisc  attributed-by=role:dispatch-target  size=40 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00556c50(void)

{
  _DAT_00583d6c = 0xffff;
  DAT_00583d6e = 0xff;
  DAT_00583d6f = 0x82;
  return;
}


/* FUN_00556c80 @ 00556c80  kind=gamemisc  attributed-by=role:dispatch-target  size=40 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00556c80(void)

{
  _DAT_00583d84 = 0xffff;
  DAT_00583d86 = 0xff;
  DAT_00583d87 = 0;
  return;
}


/* FUN_00556cb0 @ 00556cb0  kind=gamemisc  attributed-by=role:dispatch-target  size=33 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00556cb0(void)

{
  _DAT_00583d88 = 0xc8c8;
  _DAT_00583d8a = 0x1c8;
  return;
}


/* FUN_00556ce0 @ 00556ce0  kind=gamemisc  attributed-by=role:dispatch-target  size=40 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00556ce0(void)

{
  _DAT_00583d80 = 0xffff;
  DAT_00583d82 = 0xff;
  DAT_00583d83 = 0x82;
  return;
}


/* FUN_00556d10 @ 00556d10  kind=gamemisc  attributed-by=role:dispatch-target  size=40 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00556d10(void)

{
  _DAT_00583d94 = 0xffff;
  DAT_00583d96 = 0xff;
  DAT_00583d97 = 0;
  return;
}


/* FUN_00556d40 @ 00556d40  kind=gamemisc  attributed-by=role:dispatch-target  size=33 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00556d40(void)

{
  _DAT_00583d98 = 0xc8c8;
  _DAT_00583d9a = 0x1c8;
  return;
}


/* FUN_00556d70 @ 00556d70  kind=gamemisc  attributed-by=role:dispatch-target  size=40 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00556d70(void)

{
  _DAT_00583d90 = 0xffff;
  DAT_00583d92 = 0xff;
  DAT_00583d93 = 0x82;
  return;
}


/* FUN_00556da0 @ 00556da0  kind=gamemisc  attributed-by=role:dispatch-target  size=40 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00556da0(void)

{
  _DAT_00583da4 = 0xffff;
  DAT_00583da6 = 0xff;
  DAT_00583da7 = 0;
  return;
}


/* FUN_00556dd0 @ 00556dd0  kind=gamemisc  attributed-by=role:dispatch-target  size=33 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00556dd0(void)

{
  _DAT_00583da8 = 0xc8c8;
  _DAT_00583daa = 0x1c8;
  return;
}


/* FUN_00556e00 @ 00556e00  kind=gamemisc  attributed-by=role:dispatch-target  size=40 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00556e00(void)

{
  _DAT_00583da0 = 0xffff;
  DAT_00583da2 = 0xff;
  DAT_00583da3 = 0x82;
  return;
}


/* FUN_00556e30 @ 00556e30  kind=gamemisc  attributed-by=role:dispatch-target  size=40 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00556e30(void)

{
  _DAT_00583db4 = 0xffff;
  DAT_00583db6 = 0xff;
  DAT_00583db7 = 0;
  return;
}


/* FUN_00556e60 @ 00556e60  kind=gamemisc  attributed-by=role:dispatch-target  size=33 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00556e60(void)

{
  _DAT_00583db8 = 0xc8c8;
  _DAT_00583dba = 0x1c8;
  return;
}


/* FUN_00556e90 @ 00556e90  kind=gamemisc  attributed-by=role:dispatch-target  size=40 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00556e90(void)

{
  _DAT_00583db0 = 0xffff;
  DAT_00583db2 = 0xff;
  DAT_00583db3 = 0x82;
  return;
}


/* FUN_00556ec0 @ 00556ec0  kind=gamemisc  attributed-by=role:dispatch-target  size=40 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00556ec0(void)

{
  _DAT_00583dc4 = 0xffff;
  DAT_00583dc6 = 0xff;
  DAT_00583dc7 = 0;
  return;
}


/* FUN_00556ef0 @ 00556ef0  kind=gamemisc  attributed-by=role:dispatch-target  size=33 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00556ef0(void)

{
  _DAT_00583dc8 = 0xc8c8;
  _DAT_00583dca = 0x1c8;
  return;
}


/* FUN_00556f20 @ 00556f20  kind=gamemisc  attributed-by=role:dispatch-target  size=40 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00556f20(void)

{
  _DAT_00583dc0 = 0xffff;
  DAT_00583dc2 = 0xff;
  DAT_00583dc3 = 0x82;
  return;
}


/* FUN_00556f50 @ 00556f50  kind=gamemisc  attributed-by=role:dispatch-target  size=40 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00556f50(void)

{
  _DAT_00583dd8 = 0xffff;
  DAT_00583dda = 0xff;
  DAT_00583ddb = 0;
  return;
}


/* FUN_00556f80 @ 00556f80  kind=gamemisc  attributed-by=role:dispatch-target  size=33 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00556f80(void)

{
  _DAT_00583ddc = 0xc8c8;
  _DAT_00583dde = 0x1c8;
  return;
}


/* FUN_00556fb0 @ 00556fb0  kind=gamemisc  attributed-by=role:dispatch-target  size=40 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00556fb0(void)

{
  _DAT_00583dd4 = 0xffff;
  DAT_00583dd6 = 0xff;
  DAT_00583dd7 = 0x82;
  return;
}


/* FUN_00556ff0 @ 00556ff0  kind=gamemisc  attributed-by=role:dispatch-target  size=40 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00556ff0(void)

{
  _DAT_00583de8 = 0xffff;
  DAT_00583dea = 0xff;
  DAT_00583deb = 0;
  return;
}


/* FUN_00557020 @ 00557020  kind=gamemisc  attributed-by=role:dispatch-target  size=33 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00557020(void)

{
  _DAT_00583dec = 0xc8c8;
  _DAT_00583dee = 0x1c8;
  return;
}


/* FUN_00557050 @ 00557050  kind=gamemisc  attributed-by=role:dispatch-target  size=40 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00557050(void)

{
  _DAT_00583de4 = 0xffff;
  DAT_00583de6 = 0xff;
  DAT_00583de7 = 0x82;
  return;
}


/* FUN_00557080 @ 00557080  kind=gamemisc  attributed-by=role:dispatch-target  size=40 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00557080(void)

{
  _DAT_00584234 = 0xffff;
  DAT_00584236 = 0xff;
  DAT_00584237 = 0;
  return;
}


/* FUN_005570b0 @ 005570b0  kind=gamemisc  attributed-by=role:dispatch-target  size=33 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_005570b0(void)

{
  _DAT_00584238 = 0xc8c8;
  _DAT_0058423a = 0x1c8;
  return;
}


/* FUN_005570e0 @ 005570e0  kind=gamemisc  attributed-by=role:dispatch-target  size=40 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_005570e0(void)

{
  _DAT_00584230 = 0xffff;
  DAT_00584232 = 0xff;
  DAT_00584233 = 0x82;
  return;
}


/* FUN_00557110 @ 00557110  kind=gamemisc  attributed-by=role:dispatch-target  size=40 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00557110(void)

{
  _DAT_00584244 = 0xffff;
  DAT_00584246 = 0xff;
  DAT_00584247 = 0;
  return;
}


/* FUN_00557140 @ 00557140  kind=gamemisc  attributed-by=role:dispatch-target  size=33 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00557140(void)

{
  _DAT_00584248 = 0xc8c8;
  _DAT_0058424a = 0x1c8;
  return;
}


/* FUN_00557170 @ 00557170  kind=gamemisc  attributed-by=role:dispatch-target  size=40 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00557170(void)

{
  _DAT_00584240 = 0xffff;
  DAT_00584242 = 0xff;
  DAT_00584243 = 0x82;
  return;
}


/* FUN_005571a0 @ 005571a0  kind=gamemisc  attributed-by=role:dispatch-target  size=40 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_005571a0(void)

{
  _DAT_00584270 = 0xffff;
  DAT_00584272 = 0xff;
  DAT_00584273 = 0;
  return;
}


/* FUN_005571d0 @ 005571d0  kind=gamemisc  attributed-by=role:dispatch-target  size=33 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_005571d0(void)

{
  _DAT_00584274 = 0xc8c8;
  _DAT_00584276 = 0x1c8;
  return;
}


/* FUN_00557200 @ 00557200  kind=gamemisc  attributed-by=role:dispatch-target  size=40 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00557200(void)

{
  _DAT_0058426c = 0xffff;
  DAT_0058426e = 0xff;
  DAT_0058426f = 0x82;
  return;
}


/* FUN_00557230 @ 00557230  kind=gamemisc  attributed-by=role:dispatch-target  size=40 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00557230(void)

{
  _DAT_00584280 = 0xffff;
  DAT_00584282 = 0xff;
  DAT_00584283 = 0;
  return;
}


/* FUN_00557260 @ 00557260  kind=gamemisc  attributed-by=role:dispatch-target  size=33 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00557260(void)

{
  _DAT_00584284 = 0xc8c8;
  _DAT_00584286 = 0x1c8;
  return;
}


/* FUN_00557290 @ 00557290  kind=gamemisc  attributed-by=role:dispatch-target  size=40 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00557290(void)

{
  _DAT_0058427c = 0xffff;
  DAT_0058427e = 0xff;
  DAT_0058427f = 0x82;
  return;
}


/* FUN_005572c0 @ 005572c0  kind=gamemisc  attributed-by=role:dispatch-target  size=40 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_005572c0(void)

{
  _DAT_00584290 = 0xffff;
  DAT_00584292 = 0xff;
  DAT_00584293 = 0;
  return;
}


/* FUN_005572f0 @ 005572f0  kind=gamemisc  attributed-by=role:dispatch-target  size=33 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_005572f0(void)

{
  _DAT_00584294 = 0xc8c8;
  _DAT_00584296 = 0x1c8;
  return;
}


/* FUN_00557320 @ 00557320  kind=gamemisc  attributed-by=role:dispatch-target  size=40 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00557320(void)

{
  _DAT_0058428c = 0xffff;
  DAT_0058428e = 0xff;
  DAT_0058428f = 0x82;
  return;
}


/* FUN_00557350 @ 00557350  kind=gamemisc  attributed-by=role:dispatch-target  size=40 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00557350(void)

{
  _DAT_005842a0 = 0xffff;
  DAT_005842a2 = 0xff;
  DAT_005842a3 = 0;
  return;
}


/* FUN_00557380 @ 00557380  kind=gamemisc  attributed-by=role:dispatch-target  size=33 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00557380(void)

{
  _DAT_005842a4 = 0xc8c8;
  _DAT_005842a6 = 0x1c8;
  return;
}


/* FUN_005573b0 @ 005573b0  kind=gamemisc  attributed-by=role:dispatch-target  size=40 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_005573b0(void)

{
  _DAT_0058429c = 0xffff;
  DAT_0058429e = 0xff;
  DAT_0058429f = 0x82;
  return;
}


/* FUN_005573e0 @ 005573e0  kind=gamemisc  attributed-by=role:dispatch-target  size=40 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_005573e0(void)

{
  _DAT_005842b0 = 0xffff;
  DAT_005842b2 = 0xff;
  DAT_005842b3 = 0;
  return;
}


/* FUN_00557410 @ 00557410  kind=gamemisc  attributed-by=role:dispatch-target  size=33 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00557410(void)

{
  _DAT_005842b4 = 0xc8c8;
  _DAT_005842b6 = 0x1c8;
  return;
}


/* FUN_00557440 @ 00557440  kind=gamemisc  attributed-by=role:dispatch-target  size=40 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00557440(void)

{
  _DAT_005842ac = 0xffff;
  DAT_005842ae = 0xff;
  DAT_005842af = 0x82;
  return;
}


/* FUN_00557470 @ 00557470  kind=gamemisc  attributed-by=role:dispatch-target  size=40 */

void FUN_00557470(void)

{
  DAT_005842c0._0_2_ = 0xffff;
  DAT_005842c0._2_1_ = 0xff;
  DAT_005842c0._3_1_ = 0;
  return;
}


/* FUN_005574a0 @ 005574a0  kind=gamemisc  attributed-by=role:dispatch-target  size=33 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_005574a0(void)

{
  _DAT_005842c4 = 0xc8c8;
  _DAT_005842c6 = 0x1c8;
  return;
}


/* FUN_005574d0 @ 005574d0  kind=gamemisc  attributed-by=role:dispatch-target  size=40 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_005574d0(void)

{
  _DAT_005842bc = 0xffff;
  DAT_005842be = 0xff;
  DAT_005842bf = 0x82;
  return;
}


/* FUN_00557500 @ 00557500  kind=gamemisc  attributed-by=role:dispatch-target  size=40 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00557500(void)

{
  _DAT_005842d8 = 0xffff;
  DAT_005842da = 0xff;
  DAT_005842db = 0;
  return;
}


/* FUN_00557530 @ 00557530  kind=gamemisc  attributed-by=role:dispatch-target  size=33 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00557530(void)

{
  _DAT_005842dc = 0xc8c8;
  _DAT_005842de = 0x1c8;
  return;
}


/* FUN_00557560 @ 00557560  kind=gamemisc  attributed-by=role:dispatch-target  size=40 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00557560(void)

{
  _DAT_005842d4 = 0xffff;
  DAT_005842d6 = 0xff;
  DAT_005842d7 = 0x82;
  return;
}


/* FUN_00557590 @ 00557590  kind=gamemisc  attributed-by=role:dispatch-target  size=40 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00557590(void)

{
  _DAT_005842ec = 0xffff;
  DAT_005842ee = 0xff;
  DAT_005842ef = 0;
  return;
}


/* FUN_005575c0 @ 005575c0  kind=gamemisc  attributed-by=role:dispatch-target  size=33 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_005575c0(void)

{
  _DAT_005842f0 = 0xc8c8;
  _DAT_005842f2 = 0x1c8;
  return;
}


/* FUN_005575f0 @ 005575f0  kind=gamemisc  attributed-by=role:dispatch-target  size=40 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_005575f0(void)

{
  _DAT_005842e8 = 0xffff;
  DAT_005842ea = 0xff;
  DAT_005842eb = 0x82;
  return;
}


