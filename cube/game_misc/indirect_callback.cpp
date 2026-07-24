// indirect_callback (game_misc) -- cube. 46 functions. Bodies = Ghidra pseudo-C.
// Attribution: see ../attribution.tsv. Toolchain of the original: MSVC 11.0 (VS2012).
#include "indirect_callback.h"

/* FUN_004b21f3 @ 004b21f3  kind=gamemisc  attributed-by=role:callback  size=5018 */

/* WARNING (jumptable): Unable to track spacebase fully for stack */

void __fastcall
FUN_004b21f3(int param_1,int param_2,undefined4 param_3,byte *param_4,byte *param_5,int param_6,
            undefined4 param_7,byte *param_8)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  CRefTime *pCVar4;
  undefined4 *puVar5;
  int *piVar6;
  int iVar7;
  byte *pbVar8;
  byte *pbVar9;
  byte *pbVar10;
  byte *pbVar11;
  byte *pbVar12;
  byte *pbVar13;
  byte *pbVar14;
  int *piVar15;
  int *piVar16;
  pair<unsigned___int64,unsigned___int64> *ppVar17;
  float *pfVar18;
  int unaff_ESI;
  uint *puVar19;
  pair<unsigned___int64,unsigned___int64> *ppVar20;
  float10 fVar21;
  float fVar22;
  int in_stack_00000028;
  float in_stack_0000003c;
  int in_stack_000000a4;
  int in_stack_000000a8;
  int iStack000000d4;
  int in_stack_000000d8;
  uint in_stack_00003e10;
  void *in_stack_00003e18;
  byte *pbStack_114;
  uint uStack_fc;
  byte *pbStack_f8;
  int *piStack_f4;
  undefined1 *puStack_f0;
  int iStack_cc;
  int iStack_a4;
  uint uStack_88;
  byte *pbStack_68;
  int iStack_64;
  byte *pbStack_4c;
  byte *local_34;
  int local_2c;
  byte *local_28;
  int iStack_20;
  int iStack_14;
  int local_8;
  
  do {
    iVar2 = unaff_ESI;
    iStack000000d4 = unaff_ESI;
    if (unaff_ESI <= param_2) {
      do {
        iStack000000d4 = unaff_ESI;
        iVar2 = FUN_00434d10();
        if (iVar2 != 0) {
          FUN_0060a9f0();
          FUN_0042f030();
          cVar1 = FUN_004688d0();
          while (cVar1 != '\0') {
            pcVar3 = (char *)FUN_0042c6d0();
            if (*(int *)(pcVar3 + 0x140) != 0) goto LAB_004b2c50;
            param_7 = FUN_004ec400();
            FUN_00424810();
            FUN_0042c5b0();
            if (0 < *(int *)(pcVar3 + 0x13c)) {
              FUN_0042c580();
              FUN_004120b0();
              FUN_0042c9b0();
            }
            cVar1 = FUN_0043e550();
            if (cVar1 == '\0') goto LAB_004b2c50;
            FUN_0047b5f0();
            FUN_00459c00();
            FUN_00412080();
            FUN_00412080();
            FUN_0043b610();
            FUN_0042c800();
            cVar1 = FUN_0047f760();
            if (cVar1 == '\0') goto LAB_004b2c50;
            FUN_00423e70();
            FUN_004120b0();
            FUN_004120b0();
            FUN_004120b0();
            FUN_004120f0();
            FUN_004122c0();
            FUN_004120f0();
            FUN_004122c0();
            FUN_004120f0();
            FUN_00424a60();
            FUN_00424730();
            pCVar4 = (CRefTime *)FUN_004120b0();
            CRefTime::Millisecs(pCVar4);
            pCVar4 = (CRefTime *)FUN_004120b0();
            CRefTime::Millisecs(pCVar4);
            pCVar4 = (CRefTime *)FUN_004120b0();
            CRefTime::Millisecs(pCVar4);
            FUN_004718b0();
            FUN_0040eac0();
            if (((*pcVar3 == '\v') && (pcVar3[1] == '\x13')) || (*pcVar3 == '\x12')) {
              puVar5 = (undefined4 *)FUN_00428970();
              *puVar5 = 0x3f800000;
            }
            switch(*pcVar3) {
            case '\x03':
            case '\x04':
              goto LAB_004b28be;
            default:
              FUN_00424610();
              break;
            case '\f':
            case '\r':
              FUN_00488b80();
              FUN_0040e420();
              FUN_00412810();
              FUN_00488b80();
LAB_004b28be:
              FUN_00424610();
              FUN_00424810();
              FUN_00424a60();
              FUN_004244f0();
              FUN_0047b5f0();
              break;
            case '\x19':
              FUN_00488b80();
              FUN_00424610();
              FUN_0047b5f0();
              FUN_00424a60();
              FUN_004243d0();
              FUN_004244f0();
              FUN_0047b5f0();
            }
            FUN_00424820();
            FUN_00424810();
            FUN_00424a60();
            if (*(int *)(pcVar3 + 0x13c) != 0) {
              FUN_0047b5f0();
              FUN_00424820();
              FUN_00424810();
              FUN_00424a60();
              FUN_004243d0();
              FUN_004244f0();
              FUN_0047b5f0();
              FUN_00424820();
              FUN_00424810();
              FUN_00424a60();
            }
            std::pair<unsigned___int64,unsigned___int64>::
            operator=<std::pair<unsigned___int64,unsigned___int64>,0>
                      ((pair<unsigned___int64,unsigned___int64> *)&stack0x00000bbc,
                       (pair<unsigned___int64,unsigned___int64> *)&stack0x00000c48);
            FUN_0042c500();
            cVar1 = FUN_00468870();
            if (cVar1 != '\0') {
              FUN_0040eac0();
              FUN_004289e0();
            }
            FUN_004482a0();
            FUN_00448280();
            FUN_004e6df0();
            FUN_00471b60();
LAB_004b2c50:
            FUN_0044b580();
            FUN_0042f030();
            cVar1 = FUN_004688d0();
          }
          FUN_0060a9f0();
          FUN_0042f030();
          cVar1 = FUN_004688d0();
          while (cVar1 != '\0') {
            piVar6 = (int *)FUN_0042c6d0();
            iVar2 = *piVar6;
            if ((-1 < iVar2) && (iVar7 = FUN_00487f50(), iVar2 < iVar7)) {
              FUN_00428970();
              FUN_00428970();
              FUN_00428970();
              FUN_00459c00();
              FUN_00412080();
              FUN_00412080();
              FUN_0043b610();
              FUN_0042c800();
              cVar1 = FUN_0047f760();
              if (cVar1 != '\0') {
                if ((*piVar6 == 6) && ((char)piVar6[0xc] != '\0')) {
                  FUN_0040ea90();
                  iVar2 = piVar6[8];
                  if ((iVar2 == 1) || ((iVar2 == 2 || (iVar2 == 3)))) {
                    FUN_0040ea90();
                    FUN_00411e30();
                  }
                  FUN_00447fb0();
                  FUN_00451510();
                  FUN_0042c460();
                  FUN_00488b80();
                  FUN_0040eac0();
                  FUN_0040eac0();
                  FUN_0040eac0();
                  FUN_0040ea90();
                  FUN_0042c7a0();
                  FUN_00471d50();
                }
                FUN_0042c7a0();
                FUN_0042c4a0();
                fVar21 = (float10)FUN_00424860();
                if ((float)fVar21 <= in_stack_0000003c * in_stack_0000003c) {
                  std::pair<unsigned___int64,unsigned___int64>::
                  operator=<std::pair<unsigned___int64,unsigned___int64>,0>
                            ((pair<unsigned___int64,unsigned___int64> *)&stack0x00000d08,
                             (pair<unsigned___int64,unsigned___int64> *)&stack0x0000073c);
                  FUN_0042c500();
                  cVar1 = FUN_00468870();
                  if (cVar1 != '\0') {
                    FUN_0040eac0();
                    FUN_004289e0();
                  }
                  FUN_0042c6d0();
                  FUN_004be760();
                  if (*piVar6 == 0x41) {
                    FUN_0040ea90();
                    FUN_0042c460();
                    FUN_0040eac0();
                    FUN_0040eac0();
                    FUN_0042c800();
                    FUN_004bbd80();
                  }
                }
                else {
                  FUN_004abc00();
                  FUN_0042c6d0();
                  FUN_004c1190();
                }
              }
            }
            FUN_004abc40();
            FUN_0042f030();
            cVar1 = FUN_004688d0();
          }
        }
        unaff_ESI = iStack000000d4 + 1;
        param_1 = in_stack_00000028;
        param_2 = in_stack_000000d8;
        iVar2 = in_stack_000000a8;
        iStack000000d4 = unaff_ESI;
      } while (unaff_ESI <= in_stack_000000d8);
    }
    param_1 = param_1 + 1;
    unaff_ESI = iVar2;
    in_stack_00000028 = param_1;
  } while (param_1 <= in_stack_000000a4);
  FUN_00447fb0();
  FUN_00458ce0();
  FUN_0042f030();
  FUN_0060a9f0();
  FUN_004abac0();
  if ((param_8[0x800704] != 0) && (iVar2 = FUN_00598840(), iVar2 != 0)) {
    FUN_0040ea90();
    FUN_0042c460();
    FUN_0042c460();
    FUN_0042c800();
    FUN_0042c800();
    FUN_00450f60();
    FUN_00423e70();
    FUN_004122e0();
    FUN_004122e0();
    FUN_0042c580();
    FUN_0043b610();
    FUN_005a6a70();
    FUN_0042c800();
    FUN_0042c4a0();
    FUN_00424990();
    FUN_00424610();
    FUN_00424820();
    FUN_00424810();
    FUN_00424a60();
    FUN_004482a0();
    FUN_00488b80();
    FUN_0040e420();
    FUN_0040eac0();
    FUN_00448280();
    FUN_004e6df0();
  }
  FUN_0046f440();
  FUN_0060a9f0();
  cVar1 = FUN_004688d0();
  while (cVar1 != '\0') {
    iVar2 = FUN_00468c90();
    if (((*(int *)(iVar2 + 8) != 0) && (cVar1 = FUN_0047f760(), cVar1 != '\0')) &&
       (param_6 = FUN_004120c0(), param_6 != 0)) {
      FUN_00423e70();
      FUN_004120b0();
      FUN_004120f0();
      FUN_004120b0();
      FUN_004122c0();
      FUN_004120f0();
      FUN_004120b0();
      FUN_004122c0();
      FUN_004120f0();
      FUN_00424a60();
      FUN_00424610();
      FUN_0047b5f0();
      FUN_00424820();
      FUN_00424810();
      FUN_00424a60();
      FUN_00448280();
      FUN_004482a0();
      FUN_004e6df0();
    }
    FUN_00468d70();
    FUN_0060a9f0();
    cVar1 = FUN_004688d0();
  }
  FUN_005aea70();
  FUN_0046f440();
  FUN_0060a9f0();
  cVar1 = FUN_004688d0();
  while (cVar1 != '\0') {
    iVar2 = FUN_00468c90();
    if (*(int *)(iVar2 + 8) != 0) {
      FUN_0042c7a0();
      FUN_0042c4a0();
      FUN_00424860();
      FUN_004c1100();
    }
    FUN_00468d70();
    FUN_0060a9f0();
    cVar1 = FUN_004688d0();
  }
  cVar1 = FUN_0047fa10();
  if (((cVar1 != '\0') || (cVar1 = FUN_0047fa10(), cVar1 != '\0')) ||
     ((cVar1 = FUN_0047fa10(), cVar1 != '\0' || (cVar1 = FUN_0047fa10(), cVar1 != '\0')))) {
    FUN_0044be20();
  }
  FUN_0042f030();
  FUN_0060a9f0();
  FUN_004aba90();
  FUN_00608f20();
  FUN_0060a9f0();
  FUN_0042f030();
  cVar1 = FUN_004688d0();
  if (cVar1 != '\0') {
    FUN_004b39e0(param_3,param_4,param_5,param_6,param_7,param_8);
    return;
  }
  if (param_8[0x1001004] != 0) {
    FUN_0060a9f0();
    FUN_0042f030();
    cVar1 = FUN_004688d0();
    while (cVar1 != '\0') {
      FUN_0042c6d0();
      FUN_0046f440();
      FUN_0060a9f0();
      cVar1 = FUN_004688d0();
      while (cVar1 != '\0') {
        FUN_0040eac0();
        FUN_00448280();
        FUN_00423e70();
        FUN_00468c90();
        FUN_00468c60();
        FUN_00468c60();
        FUN_00468c60();
        FUN_00412080();
        FUN_004122e0();
        FUN_004122c0();
        FUN_004120f0();
        FUN_00412080();
        FUN_004122e0();
        FUN_004122c0();
        FUN_004120f0();
        FUN_00424a60();
        FUN_00424730();
        FUN_00424820();
        FUN_00424810();
        FUN_00424a60();
        FUN_004482a0();
        FUN_004e6df0();
        FUN_00468d70();
        FUN_0060a9f0();
        cVar1 = FUN_004688d0();
      }
      FUN_0046f440();
      FUN_0060a9f0();
      cVar1 = FUN_004688d0();
      while (cVar1 != '\0') {
        FUN_0040eac0();
        FUN_00448280();
        FUN_00423e70();
        FUN_0042c6c0();
        FUN_00428970();
        FUN_00428970();
        FUN_00412080();
        FUN_004122e0();
        FUN_004122c0();
        FUN_004120f0();
        FUN_00428970();
        FUN_00412080();
        FUN_004122e0();
        FUN_004122c0();
        FUN_004120f0();
        FUN_00424a60();
        FUN_00424730();
        FUN_00424820();
        FUN_00424810();
        FUN_00424a60();
        FUN_004482a0();
        FUN_004e6df0();
        FUN_00468d30();
        FUN_0060a9f0();
        cVar1 = FUN_004688d0();
      }
      cVar1 = FUN_00477230();
      if (cVar1 == '\0') {
        FUN_0040eac0();
        FUN_00448280();
        FUN_00423e70();
        FUN_004120b0();
        FUN_0042f100();
        FUN_004120b0();
        FUN_0042f100();
        FUN_00412080();
        FUN_004122e0();
        FUN_004122c0();
        FUN_004120f0();
        FUN_004120b0();
        FUN_0042f100();
        FUN_00412080();
        FUN_004122e0();
        FUN_004122c0();
        FUN_004120f0();
        FUN_00424a60();
        FUN_00424730();
        FUN_00424820();
        FUN_00424810();
        FUN_00424a60();
        FUN_004482a0();
        FUN_004e6df0();
        FUN_0040eac0();
        FUN_00448280();
        FUN_00423e70();
        FUN_004120b0();
        FUN_0042f100();
        FUN_004120b0();
        FUN_0042f100();
        FUN_00412080();
        FUN_004122e0();
        FUN_004122c0();
        FUN_004120f0();
        FUN_004120b0();
        FUN_0042f100();
        FUN_00412080();
        FUN_004122e0();
        FUN_004122c0();
        FUN_004120f0();
        FUN_00424a60();
        FUN_00424730();
        FUN_00424820();
        FUN_00424810();
        FUN_00424a60();
        FUN_004482a0();
        FUN_004e6df0();
      }
      FUN_00468db0();
      FUN_0042f030();
      cVar1 = FUN_004688d0();
    }
  }
  (**(code **)(**(int **)(param_8 + 0x134) + 0xe4))();
  FUN_0046f440();
  FUN_0060a9f0();
  cVar1 = FUN_004688d0();
  while (cVar1 != '\0') {
    piVar6 = (int *)FUN_0042c6c0();
    cVar1 = FUN_0047f760();
    if (cVar1 != '\0') {
      if ((*piVar6 == 0) || (*piVar6 == 4)) {
        pCVar4 = (CRefTime *)FUN_004120b0();
        CRefTime::Millisecs(pCVar4);
        pCVar4 = (CRefTime *)FUN_004120b0();
        CRefTime::Millisecs(pCVar4);
        pCVar4 = (CRefTime *)FUN_004120b0();
        CRefTime::Millisecs(pCVar4);
        FUN_004718b0();
      }
      FUN_0040eac0();
      FUN_00412120();
      FUN_00412120();
      if ((*piVar6 != 0) && (*piVar6 != 4)) {
        puVar5 = (undefined4 *)FUN_00428970();
        *puVar5 = 0x3f800000;
      }
      FUN_00448280();
      FUN_00423e70();
      FUN_00412080();
      FUN_0043b610();
      FUN_0042c800();
      FUN_0042c4a0();
      FUN_00424990();
      FUN_00428970();
      FUN_004241b0();
      FUN_00428970();
      FUN_004241b0();
      FUN_00428970();
      FUN_004241b0();
      FUN_00424730();
      FUN_00412400();
      FUN_00424a60();
      FUN_004482a0();
      FUN_004e6df0();
    }
    FUN_00468d30();
    FUN_0060a9f0();
    cVar1 = FUN_004688d0();
  }
  (**(code **)(**(int **)(param_8 + 0x134) + 0xe4))();
  FUN_0046f440();
  FUN_0060a9f0();
  cVar1 = FUN_004688d0();
  while (cVar1 != '\0') {
    iVar2 = FUN_0042c6c0();
    cVar1 = FUN_0047f760();
    if (cVar1 == '\0') goto LAB_004b8b7c;
    switch(*(undefined4 *)(iVar2 + 0x60)) {
    case 0:
      param_4 = (byte *)FUN_004120c0();
      if (*(float *)(iVar2 + 0x54) != 0.0) {
        FUN_00427870();
        FUN_0042c460();
        FUN_0040eac0();
        FUN_0040eac0();
        FUN_0040eac0();
        FUN_0040ea90();
        FUN_00427870();
        FUN_0042c800();
        FUN_00471d50();
      }
      break;
    case 1:
      FUN_00427870();
      FUN_004252f0();
      FUN_004252f0();
      FUN_0040eac0();
      FUN_0040eac0();
      FUN_0040eac0();
      iVar2 = FUN_0042f000();
      if ((iVar2 != 0) && (iVar2 = FUN_0042f000(), *(char *)(iVar2 + 0x141) == '\x01')) {
        ppVar20 = (pair<unsigned___int64,unsigned___int64> *)FUN_0040eac0();
        std::pair<unsigned___int64,unsigned___int64>::
        operator=<std::pair<unsigned___int64,unsigned___int64>,0>
                  ((pair<unsigned___int64,unsigned___int64> *)&stack0x00000ce0,ppVar20);
        ppVar20 = (pair<unsigned___int64,unsigned___int64> *)FUN_0040eac0();
        std::pair<unsigned___int64,unsigned___int64>::
        operator=<std::pair<unsigned___int64,unsigned___int64>,0>
                  ((pair<unsigned___int64,unsigned___int64> *)&stack0x00000cc0,ppVar20);
        ppVar20 = (pair<unsigned___int64,unsigned___int64> *)FUN_0040eac0();
        std::pair<unsigned___int64,unsigned___int64>::
        operator=<std::pair<unsigned___int64,unsigned___int64>,0>
                  ((pair<unsigned___int64,unsigned___int64> *)&stack0x00000cd0,ppVar20);
      }
      FUN_004252f0();
      FUN_0042c460();
      FUN_0040ea90();
      FUN_0042c7a0();
      FUN_00471d50();
      goto LAB_004b8b7c;
    case 2:
      iVar7 = FUN_0042f000();
      if (((iVar7 == 0) || (iVar7 = FUN_0042f000(), *(char *)(iVar7 + 0xaa8) != '\x03')) ||
         (iVar7 = FUN_0042f000(), *(char *)(iVar7 + 0xaa9) != '\b')) {
        param_4 = (byte *)FUN_004120c0();
      }
      else {
        FUN_0042f000();
        param_4 = (byte *)FUN_004ec400();
      }
      break;
    default:
      goto LAB_004b8b7c;
    case 4:
      param_4 = (byte *)FUN_004120c0();
    }
    if (param_4 != (byte *)0x0) {
      if (*(int *)(iVar2 + 0x60) != 1) {
        pCVar4 = (CRefTime *)FUN_004120b0();
        CRefTime::Millisecs(pCVar4);
        pCVar4 = (CRefTime *)FUN_004120b0();
        CRefTime::Millisecs(pCVar4);
        pCVar4 = (CRefTime *)FUN_004120b0();
        CRefTime::Millisecs(pCVar4);
        FUN_004718b0();
      }
      FUN_0040eac0();
      FUN_00412120();
      FUN_00448280();
      FUN_00423e70();
      FUN_00412080();
      FUN_0043b610();
      FUN_0042c800();
      FUN_0042c4a0();
      FUN_00424990();
      if (*(int *)(iVar2 + 0x60) == 2) {
        FUN_004244f0();
        FUN_004243d0();
      }
      else if (*(int *)(iVar2 + 0x60) == 4) {
        FUN_0040ea90();
        FUN_00412390();
        FUN_00424170();
      }
      else {
        fVar21 = (float10)FUN_00424860();
        if (0.0 < (float)fVar21) {
          FUN_00427870();
          FUN_0040ea90();
          FUN_004c12f0();
        }
      }
      FUN_00424730();
      FUN_0047b5f0();
      FUN_00424820();
      FUN_00424810();
      FUN_00424a60();
      FUN_004482a0();
      FUN_004e6df0();
    }
LAB_004b8b7c:
    FUN_00468d30();
    FUN_0060a9f0();
    cVar1 = FUN_004688d0();
  }
  FUN_00448280();
  (**(code **)(**(int **)(param_8 + 0x134) + 0x1ac))();
  local_28 = *(byte **)(param_8 + 0x134);
  (**(code **)(*(int *)local_28 + 0x170))();
  (**(code **)(**(int **)(param_8 + 0x134) + 0xe4))();
  (**(code **)(**(int **)(param_8 + 0x134) + 0x164))();
  (**(code **)(**(int **)(param_8 + 0x134) + 0xb0))();
  (**(code **)(**(int **)(param_8 + 0x134) + 0xb0))();
  (**(code **)(**(int **)(param_8 + 0x134) + 0x104))();
  pbStack_68 = (byte *)0x1;
  (**(code **)(**(int **)(param_8 + 0x134) + 0x114))();
  (**(code **)(**(int **)(param_8 + 0x134) + 0x114))();
  FUN_0046f440();
  FUN_0060a9f0();
  cVar1 = FUN_004688d0();
  while (cVar1 != '\0') {
    iVar2 = FUN_0042c6c0();
    if ((*(int *)(iVar2 + 0x60) == 3) && (cVar1 = FUN_0047f760(), cVar1 != '\0')) {
      FUN_00450f60();
      fVar22 = *(float *)(iVar2 + 0x4c);
      FUN_0040e420();
      iVar2 = (int)(fVar22 + 1.0);
      pbVar8 = (byte *)-iVar2;
      local_28 = pbVar8;
      if (-iVar2 == iVar2 || SBORROW4((int)pbVar8,iVar2) != iVar2 * -2 < 0) {
        do {
          if ((int)pbVar8 <= iVar2) {
            FUN_00428970();
            param_4 = (byte *)FUN_00428970();
            FUN_00428970();
            pbStack_4c = pbVar8;
            do {
              iStack_64 = 0;
              FUN_0042f7e0();
              cVar1 = FUN_0043b480();
              while (cVar1 == '\0') {
                iStack_64 = iStack_64 + 1;
                if (100 < iStack_64) goto LAB_004b9253;
                FUN_0042f7e0();
                cVar1 = FUN_0043b480();
              }
              FUN_004120b0();
              FUN_0043abc0();
              FUN_004120f0();
              FUN_004120b0();
              FUN_0043abc0();
              FUN_004120f0();
              FUN_0040ea90();
              FUN_0040ea50();
              FUN_0040ea90();
              FUN_0040ea50();
              FUN_0040ea90();
              FUN_0040ea50();
              FUN_0040ea90();
              FUN_0040ea50();
              FUN_00423e70();
              FUN_00412080();
              FUN_004122c0();
              FUN_004120f0();
              FUN_00412080();
              FUN_004122c0();
              FUN_004120f0();
              FUN_00424a60();
              (**(code **)(**(int **)(param_8 + 0x134) + 0xb0))();
              (**(code **)(**(int **)(param_8 + 0x134) + 0x14c))();
LAB_004b9253:
              pbStack_4c = pbStack_4c + 1;
            } while ((int)pbStack_4c <= iVar2);
          }
          local_28 = local_28 + 1;
        } while ((int)local_28 <= iVar2);
      }
    }
    FUN_00468d30();
    FUN_0060a9f0();
    cVar1 = FUN_004688d0();
  }
  cVar1 = FUN_0047fa10();
  if ((((cVar1 == '\0') && (cVar1 = FUN_0047fa10(), cVar1 == '\0')) &&
      (cVar1 = FUN_0047fa10(), cVar1 == '\0')) && (cVar1 = FUN_0047fa10(), cVar1 == '\0')) {
    FUN_0046f440();
    FUN_0060a9f0();
    cVar1 = FUN_004688d0();
    while (cVar1 != '\0') {
      iVar7 = FUN_00468c90();
      iVar2 = *(int *)(iVar7 + 8);
      if ((iVar2 != 0) && (0.0 < *(float *)(iVar2 + 0x16c))) {
        FUN_00428970();
        cVar1 = FUN_0047f760();
        if ((cVar1 != '\0') &&
           ((param_8[0x8006e6] == 0 || (*(int *)(iVar7 + 8) == *(int *)(param_8 + 0x8006d0))))) {
          FUN_00423e70();
          FUN_00428970();
          FUN_00424610();
          FUN_00488e50();
          FUN_0042c460();
          FUN_0042c800();
          FUN_00450f60();
          pbStack_4c = (byte *)0xfffffffe;
          piVar6 = (int *)FUN_00428970();
          FUN_00428970();
          FUN_00428970();
          do {
            local_8 = -2;
            do {
              iVar2 = *piVar6;
              iStack_64 = 0;
              FUN_0042f7e0();
              cVar1 = FUN_0043b480();
              while (cVar1 == '\0') {
                iStack_64 = iStack_64 + 1;
                iVar2 = iVar2 + -1;
                if (100 < iStack_64) goto LAB_004b991e;
                FUN_0042f7e0();
                cVar1 = FUN_0043b480();
              }
              param_4 = (byte *)(iVar2 + 1);
              FUN_00428970();
              FUN_004120b0();
              FUN_004122e0();
              FUN_0043abc0();
              FUN_004120f0();
              FUN_00428970();
              FUN_004120b0();
              FUN_004122e0();
              FUN_0043abc0();
              FUN_004120f0();
              FUN_0040ea90();
              FUN_0040ea50();
              FUN_0040ea90();
              FUN_0040ea50();
              FUN_0040ea90();
              FUN_0040ea50();
              FUN_0040ea90();
              FUN_0040ea50();
              FUN_00423e70();
              FUN_00412080();
              FUN_004122c0();
              FUN_004120f0();
              FUN_00412080();
              FUN_004122c0();
              FUN_004120f0();
              FUN_00424a60();
              (**(code **)(*piRam00000135 + 0xb0))();
              (**(code **)(*piRam00000135 + 0x14c))();
              param_8 = pbStack_68;
LAB_004b991e:
              local_8 = local_8 + 1;
            } while (local_8 < 3);
            pbStack_4c = (byte *)((int)pbStack_4c + 1);
          } while ((int)pbStack_4c < 3);
        }
      }
      FUN_00468d70();
      FUN_0060a9f0();
      cVar1 = FUN_004688d0();
    }
  }
  uStack_88 = 0;
  (**(code **)(**(int **)(param_8 + 0x134) + 0x104))();
  (**(code **)(**(int **)(param_8 + 0x134) + 0xe4))();
  (**(code **)(**(int **)(param_8 + 0x134) + 0xe4))();
  pbVar8 = *(byte **)(param_8 + 0x134);
  (**(code **)(*(int *)pbVar8 + 0x164))();
  FUN_0046f440();
  FUN_0060a9f0();
  cVar1 = FUN_004688d0();
  while (cVar1 != '\0') {
    iVar2 = FUN_00468c90();
    piVar6 = (int *)(iVar2 + 8);
    if ((*piVar6 != 0) && (0.0 < *(float *)(*piVar6 + 0x16c))) {
      FUN_00428970();
      cVar1 = FUN_0047f760();
      if ((cVar1 != '\0') &&
         ((cVar1 = FUN_00444520(), cVar1 == '\0' &&
          (iVar2 = FUN_0043d1a0(), *(int *)(*piVar6 + 0x6c) <= iVar2)))) {
        FUN_00423e70();
        (**(code **)(**(int **)(param_8 + 0x134) + 0xb0))();
        (**(code **)(**(int **)(param_8 + 0x134) + 0xb0))();
        FUN_0040f0d0();
        FUN_004120b0();
        FUN_00412260();
        FUN_00412200();
        FUN_004120f0();
        FUN_004120b0();
        FUN_00412260();
        FUN_00412200();
        FUN_004120f0();
        FUN_0040ea90();
        FUN_0040ea90();
        FUN_00451510();
        FUN_0040ea90();
        FUN_00451510();
        FUN_00412280();
        FUN_004a8ef0();
        FUN_0040ea90();
        FUN_00451510();
        FUN_0040ea90();
        FUN_00451510();
        FUN_00412280();
        FUN_004a8ef0();
        FUN_0040ea90();
        FUN_004a8ef0();
        FUN_0040ea90();
        FUN_004a8ef0();
        local_2c = 0;
        pbVar9 = (byte *)FUN_004120a0();
        pbVar10 = (byte *)FUN_004120a0();
        pbVar11 = (byte *)FUN_004120a0();
        pbVar12 = (byte *)FUN_004120a0();
        pbVar13 = (byte *)FUN_004120a0();
        pbVar14 = (byte *)FUN_004120a0();
        local_34 = (byte *)0x1a04;
        puVar19 = (uint *)&stack0x00003c5c;
        do {
          fVar22 = ((1.0 - (float)local_2c / 15.0) - 0.5) * 2.0;
          fVar22 = 1.0 - fVar22 * fVar22;
          fVar22 = fVar22 * fVar22;
          FUN_004121c0();
          FUN_00411e30();
          *puVar19 = (((int)(fVar22 * 50.0) << 8 | (uint)*pbVar9) << 8 | (uint)*pbVar10) << 8 |
                     (uint)*pbVar11;
          FUN_004121c0();
          FUN_00411e30();
          puVar19[4] = (((int)(fVar22 * 200.0) << 8 | (uint)*pbVar12) << 8 | (uint)*pbVar13) << 8 |
                       (uint)*pbVar14;
          local_34 = local_34 + 0xc;
          local_2c = local_2c + 1;
          puVar19 = puVar19 + 8;
        } while ((int)local_34 < 0x1ac4);
        (**(code **)(**(int **)(pbVar8 + 0x134) + 0x14c))();
        param_8 = pbVar8;
        if (*(char *)(*piVar6 + 0x990) == '\x03') {
          iVar2 = 0;
          iStack_14 = 0x1b84;
          puVar19 = (uint *)&stack0x00003c74;
          do {
            fVar22 = ((1.0 - (float)iVar2 / 15.0) - 0.5) * 2.0;
            fVar22 = 1.0 - fVar22 * fVar22;
            fVar22 = fVar22 * fVar22;
            FUN_004121c0();
            FUN_00411e30();
            *puVar19 = (((int)(fVar22 * 50.0) << 8 | (uint)bRam00000004) << 8 | (uint)*local_34) <<
                       8 | (uint)*local_28;
            FUN_004121c0();
            FUN_00411e30();
            puVar19[4] = (((int)(fVar22 * 255.0) << 8 | (uint)DAT_00000000) << 8 | (uint)*param_5)
                         << 8 | (uint)*param_4;
            iStack_14 = iStack_14 + 0xc;
            iVar2 = iVar2 + 1;
            puVar19 = puVar19 + 8;
          } while (iStack_14 < 0x1c44);
          param_8 = (byte *)0x16;
          (**(code **)(*piRam0000014a + 0x14c))();
        }
      }
    }
    FUN_00468d70();
    FUN_0060a9f0();
    cVar1 = FUN_004688d0();
  }
  FUN_00447fb0();
  FUN_00447dd0();
  (**(code **)(**(int **)(param_8 + 0x134) + 0xe4))();
  piVar6 = *(int **)(param_8 + 0x134);
  (**(code **)(*piVar6 + 0xe4))();
  pbVar9 = *(byte **)(param_8 + 0x134);
  (**(code **)(*(int *)pbVar9 + 0xe4))();
  FUN_00448280();
  FUN_0042f030();
  FUN_0060a9f0();
  cVar1 = FUN_004a8f20();
  while (cVar1 != '\0') {
    piVar15 = (int *)FUN_004abc30();
    iVar2 = *piVar15;
    EnterCriticalSection((LPCRITICAL_SECTION)(iVar2 + 0x250));
    FUN_0046f440();
    FUN_0060a9f0();
    cVar1 = FUN_004688d0();
    while (cVar1 != '\0') {
      piVar15 = (int *)FUN_0042c6c0();
      if (*(int *)(*piVar15 + 0xc) != 0) {
        FUN_00423e70();
        FUN_00428970();
        FUN_00412080();
        FUN_004122c0();
        FUN_004120f0();
        FUN_00428970();
        FUN_00412080();
        FUN_004122c0();
        FUN_004120f0();
        FUN_00424a60();
        FUN_00448f10();
        FUN_004482a0();
        (**(code **)(**(int **)(param_8 + 0x134) + 400))();
        puStack_f0 = (undefined1 *)0x4ba385;
        (**(code **)(**(int **)(param_8 + 0x134) + 0x1a0))();
        puStack_f0 = *(undefined1 **)(*piVar15 + 0x18);
        piStack_f4 = (int *)0x0;
        pbStack_f8 = *(byte **)(*piVar15 + 0x10);
        uStack_fc = 0;
        (**(code **)(**(int **)(param_8 + 0x134) + 0x148))();
      }
      FUN_00468d30();
      FUN_0060a9f0();
      cVar1 = FUN_004688d0();
    }
    LeaveCriticalSection((LPCRITICAL_SECTION)(iVar2 + 0x250));
    FUN_004abca0();
    FUN_0060a9f0();
    cVar1 = FUN_004a8f20();
  }
  piVar15 = *(int **)(param_8 + 0x134);
  (**(code **)(*piVar15 + 0xe4))();
  (**(code **)(**(int **)(param_8 + 0x134) + 0xe4))();
  FUN_00447d10();
  puStack_f0 = (undefined1 *)0x4ba47b;
  FUN_0060a9f0();
  puStack_f0 = (undefined1 *)0x4ba48f;
  FUN_0042f030();
  puStack_f0 = (undefined1 *)0x4ba49c;
  cVar1 = FUN_004688d0();
  while (cVar1 != '\0') {
    piVar16 = (int *)FUN_0042c6d0();
    if (*piVar16 != 0) {
      puStack_f0 = &stack0x00000664;
      piStack_f4 = (int *)&stack0x000006b4;
      pbStack_f8 = (byte *)piVar16[3];
      uStack_fc = uStack_88;
      FUN_004bd160();
    }
    if (piVar16[1] != 0) {
      puStack_f0 = &stack0x00000664;
      piStack_f4 = (int *)&stack0x000006b4;
      uStack_fc = 0;
      pbStack_f8 = pbVar8;
      FUN_004be760();
    }
    puStack_f0 = &stack0x000001cc;
    piStack_f4 = (int *)0x4ba565;
    FUN_004abc60();
    puStack_f0 = (undefined1 *)0x4ba579;
    FUN_0042f030();
    puStack_f0 = (undefined1 *)0x4ba586;
    cVar1 = FUN_004688d0();
  }
  puStack_f0 = (undefined1 *)0x4ba5a2;
  FUN_0046f440();
  puStack_f0 = (undefined1 *)0x4ba5b6;
  FUN_0060a9f0();
  puStack_f0 = (undefined1 *)0x4ba5c3;
  cVar1 = FUN_004688d0();
  pbStack_114 = param_8;
  while (cVar1 != '\0') {
    piVar16 = (int *)FUN_0042c6c0();
    iVar2 = *piVar16;
    puStack_f0 = (undefined1 *)0x0;
    piStack_f4 = (int *)0x3dcccccd;
    pbStack_f8 = &stack0x00000444;
    uStack_fc = 2;
    FUN_004120b0();
    uStack_fc = 0x4ba60d;
    pCVar4 = (CRefTime *)FUN_00412220();
    piStack_f4 = (int *)0x4ba614;
    piStack_f4 = (int *)CRefTime::Millisecs(pCVar4);
    pbStack_f8 = (byte *)0x1;
    uStack_fc = 0x4ba61e;
    pCVar4 = (CRefTime *)FUN_004120b0();
    pbStack_f8 = (byte *)0x4ba625;
    pbStack_f8 = (byte *)CRefTime::Millisecs(pCVar4);
    uStack_fc = 0;
    pCVar4 = (CRefTime *)FUN_004120b0();
    uStack_fc = 0x4ba636;
    uStack_fc = CRefTime::Millisecs(pCVar4);
    FUN_004718b0();
    if (iVar2 == *(int *)(pbStack_114 + 0x8006d0)) {
      FUN_004c0ed0();
    }
    puStack_f0 = (undefined1 *)0x3f800000;
    piStack_f4 = (int *)0x3f800000;
    pbStack_f8 = (byte *)0x3f800000;
    uStack_fc = 0x4ba6aa;
    FUN_0040eac0();
    if (0 < *(int *)(iVar2 + 0x134)) {
      puStack_f0 = (undefined1 *)0x3fc00000;
      piStack_f4 = (int *)0x3f000000;
      pbStack_f8 = (byte *)0x3f000000;
      uStack_fc = 0x4ba6e1;
      FUN_0040eac0();
      puStack_f0 = (undefined1 *)0x4ba6ee;
      FUN_004127c0();
    }
    puStack_f0 = (undefined1 *)0x4ba701;
    FUN_0046f440();
    puStack_f0 = (undefined1 *)0x4ba714;
    FUN_0060a9f0();
    puStack_f0 = (undefined1 *)0x4ba721;
    cVar1 = FUN_004688d0();
    while (cVar1 != '\0') {
      pcVar3 = (char *)FUN_0042c6c0();
      if (*pcVar3 == '\x01') {
        puStack_f0 = (undefined1 *)0x3f000000;
        piStack_f4 = (int *)0x3f000000;
        pbStack_f8 = (byte *)0x3f800000;
        uStack_fc = 0x4ba76f;
        FUN_0040eac0();
        puStack_f0 = (undefined1 *)0x4ba77c;
        FUN_004127c0();
      }
      puStack_f0 = &stack0x000001a8;
      piStack_f4 = (int *)0x4ba792;
      FUN_00468d30();
      puStack_f0 = (undefined1 *)0x4ba7a5;
      FUN_0060a9f0();
      puStack_f0 = (undefined1 *)0x4ba7b2;
      cVar1 = FUN_004688d0();
      pbStack_114 = pbVar9;
    }
    puStack_f0 = &stack0x00000bb8;
    piStack_f4 = (int *)0x4ba7da;
    FUN_00412120();
    if ((*(ushort *)(iVar2 + 0x7e) & 0x200) != 0) {
      puStack_f0 = (undefined1 *)0x4ba7f4;
      FUN_004460f0();
      puStack_f0 = &stack0x0000251c;
      piStack_f4 = (int *)0x3f800000;
      pbStack_f8 = (byte *)0x3f800000;
      uStack_fc = 0x3f800000;
      FUN_0040eac0();
      piStack_f4 = (int *)0x4ba832;
      FUN_00468f50();
      piStack_f4 = (int *)&stack0x0000255c;
      puStack_f0 = (undefined1 *)0x3f000000;
      pbStack_f8 = (byte *)0x4ba848;
      FUN_004a8f40();
      puStack_f0 = (undefined1 *)0x4ba858;
      FUN_004127c0();
    }
    puStack_f0 = (undefined1 *)0x4ba871;
    FUN_00449090();
    if (0.0 < *(float *)(iVar2 + 0x1190)) {
      piStack_f4 = *(int **)(pbStack_114 + 0x134);
      puStack_f0 = (undefined1 *)0xa8;
      pbStack_f8 = (byte *)0x4ba89e;
      (**(code **)(*piStack_f4 + 0xe4))();
      pbStack_f8 = (byte *)(iVar2 + 0x11c8);
      uStack_fc = 0x4ba8b6;
      pbStack_f8 = (byte *)FUN_0042f000();
      pbStack_114 = (byte *)(piVar15 + 0xc0);
      uStack_fc = (uint)piVar6 >> 0x18;
      FUN_004128f0();
      (**(code **)(*(int *)CONCAT13(uRam00000139,piRam00000135._1_3_) + 0xe4))();
      FUN_00447fb0();
      FUN_0042f000();
      FUN_004128f0();
      puStack_f0 = (undefined1 *)0x4ba9bd;
      FUN_00447fb0();
    }
    puStack_f0 = &stack0x000001ec;
    piStack_f4 = (int *)0x4ba9d3;
    FUN_00468d30();
    puStack_f0 = (undefined1 *)0x4ba9e7;
    FUN_0060a9f0();
    puStack_f0 = (undefined1 *)0x4ba9f4;
    cVar1 = FUN_004688d0();
  }
  puStack_f0 = (undefined1 *)0x4baa0f;
  FUN_00449090();
  FUN_00447d10();
  puStack_f0 = (undefined1 *)0x4baa2d;
  FUN_00447fb0();
  puStack_f0 = (undefined1 *)0x3f800000;
  piStack_f4 = (int *)0x3f800000;
  pbStack_f8 = (byte *)0x3f800000;
  uStack_fc = 0x4baa5b;
  FUN_0040eac0();
  puStack_f0 = (undefined1 *)0x4baa67;
  FUN_00448280();
  FUN_00632870();
  pbVar8 = (byte *)0x0;
  puStack_f0 = (undefined1 *)0x3f800000;
  piStack_f4 = (int *)0xffffffff;
  pbStack_f8 = (byte *)0x2;
  uStack_fc = 0;
  (**(code **)(**(int **)(pbStack_114 + 0x134) + 0xac))();
  cVar1 = FUN_0047fa10();
  if (cVar1 != '\0') {
    FUN_00487490();
    cVar1 = FUN_0047fa10();
    if (cVar1 != '\0') {
      if (0.35 <= *(float *)(pbStack_114 + 0x1c4)) {
        if (*(float *)(pbStack_114 + 0x1c4) < 2.0) {
          pbStack_114 = (byte *)0x3f4ccccd;
          FUN_00428970();
          pbVar9 = pbVar8;
        }
        else {
          pbStack_114 = (byte *)0x3fcccccd;
          FUN_00428970();
          pbVar9 = pbVar8;
        }
      }
      else {
        pbStack_114 = (byte *)0x3ccccccd;
        FUN_00428970();
        pbVar9 = pbVar8;
      }
      FUN_0040ea90();
      pbVar8 = pbVar9;
      FUN_005fc1b0();
      FUN_0040eac0();
      FUN_0040ea90();
      FUN_00427870();
      FUN_0040eac0();
      FUN_0040eac0();
      FUN_00448170();
      FUN_0047ae10();
      if (pbVar9[0x800a40] == 0) {
        pbVar9[0x800a48] = 0;
        pbVar9[0x800a49] = 0;
        pbVar9[0x800a4a] = 0;
        pbVar9[0x800a4b] = 0;
        pbStack_114 = pbVar9;
      }
      else {
        FUN_004aba20();
        puStack_f0 = (undefined1 *)FUN_00487f60();
        FUN_004aba20();
        (**(code **)(**(int **)(pbVar9 + 0x134) + 0xe4))();
        FUN_00447d10();
        FUN_0040f0d0();
        FUN_0040f0d0();
        ppVar20 = (pair<unsigned___int64,unsigned___int64> *)&stack0x000039e8;
        iStack_cc = 0x10;
        do {
          ppVar17 = (pair<unsigned___int64,unsigned___int64> *)FUN_0040eac0();
          std::pair<unsigned___int64,unsigned___int64>::
          operator=<std::pair<unsigned___int64,unsigned___int64>,0>(ppVar20,ppVar17);
          FUN_0040ea90();
          FUN_00411e30();
          ppVar20 = ppVar20 + 0x10;
          iStack_cc = iStack_cc + -1;
        } while (iStack_cc != 0);
        FUN_00448f10();
        FUN_0040eac0();
        FUN_00448280();
        FUN_00447fb0();
        FUN_00448fe0();
        iStack_cc = 0;
        if (0 < (int)puStack_f0) {
          FUN_00428970();
          FUN_00428970();
          do {
            FUN_00424b50();
            FUN_0040e420();
            FUN_0040ea50();
            FUN_00468c70();
            FUN_00428970();
            FUN_00428970();
            FUN_004db110();
            FUN_0040ef50();
            FUN_004758c0();
            iStack_cc = iStack_cc + 1;
          } while (iStack_cc < (int)puStack_f0);
        }
      }
      (**(code **)(**(int **)(pbStack_114 + 0x134) + 0xb0))();
      FUN_005fb860();
    }
  }
  FUN_00650980();
  cVar1 = FUN_0047fa10();
  if (cVar1 == '\0') goto LAB_004bbb1a;
  FUN_00487490();
  cVar1 = FUN_0047fa10();
  if (cVar1 == '\0') goto LAB_004bbb1a;
  (**(code **)(**(int **)(pbStack_114 + 0x134) + 0xe4))();
  FUN_00447d10();
  (**(code **)(**(int **)(pbStack_114 + 0x134) + 0xac))();
  FUN_0043a490();
  FUN_00424b50();
  FUN_0043a490();
  FUN_0040e420();
  FUN_0040ea90();
  FUN_0040eac0();
  FUN_0040ea90();
  FUN_00427870();
  FUN_0040eac0();
  FUN_0040eac0();
  FUN_00448170();
  FUN_0040f0d0();
  FUN_0040f0d0();
  ppVar20 = (pair<unsigned___int64,unsigned___int64> *)&stack0x00003b10;
  iStack_a4 = 0x10;
  pbStack_114 = pbVar8;
  do {
    ppVar17 = (pair<unsigned___int64,unsigned___int64> *)FUN_0040eac0();
    std::pair<unsigned___int64,unsigned___int64>::
    operator=<std::pair<unsigned___int64,unsigned___int64>,0>(ppVar20,ppVar17);
    FUN_0040ea90();
    FUN_00411e30();
    ppVar20 = ppVar20 + 0x10;
    iStack_a4 = iStack_a4 + -1;
  } while (iStack_a4 != 0);
  FUN_00448f10();
  FUN_0040eac0();
  FUN_00448280();
  FUN_004120c0();
  FUN_0040ea90();
  FUN_00412280();
  FUN_00476660();
  FUN_004120a0();
  FUN_004120a0();
  FUN_004120a0();
  FUN_0040eac0();
  FUN_00448280();
  FUN_004120c0();
  FUN_0040ea90();
  FUN_00412280();
  FUN_00476660();
  iVar2 = FUN_0042f000();
  if (iVar2 != 0) {
    FUN_0040eac0();
    FUN_00448280();
    if (*(short *)(iVar2 + 0x8c) < 0) {
      if (*(short *)(iVar2 + 0x94) < 0) goto LAB_004bb615;
      FUN_004120c0();
    }
    else {
      FUN_004120c0();
    }
    FUN_0040ea90();
    FUN_00412280();
    FUN_00476660();
  }
LAB_004bb615:
  FUN_0040eac0();
  FUN_00448280();
  FUN_004120c0();
  FUN_00428970();
  FUN_0040ea90();
  FUN_00476660();
  iStack_20 = 0;
  FUN_0046f440();
  FUN_0060a9f0();
  cVar1 = FUN_004688d0();
  while (cVar1 != '\0') {
    iVar2 = FUN_00468c90();
    iVar2 = *(int *)(iVar2 + 8);
    if (iVar2 != 0) {
      iVar7 = FUN_00487f50();
      if (iVar7 <= iStack_20) break;
      if ((*(char *)(iVar2 + 0x60) == '\0') && (iVar2 != *(int *)(pbStack_114 + 0x8006d0))) {
        FUN_0043a490();
        FUN_00424b50();
        FUN_0043a490();
        FUN_0040e420();
        FUN_0040ea90();
        FUN_0040eac0();
        FUN_00448280();
        FUN_004120c0();
        FUN_0040ea90();
        FUN_00412280();
        FUN_00476660();
        FUN_004120a0();
        FUN_004120a0();
        FUN_004120a0();
        FUN_0040eac0();
        FUN_00448280();
        FUN_004120c0();
        FUN_0040ea90();
        FUN_00412280();
        FUN_00476660();
        iStack_20 = iStack_20 + 1;
      }
    }
    FUN_00468d70();
    FUN_0060a9f0();
    cVar1 = FUN_004688d0();
  }
  FUN_0040eac0();
  FUN_00448280();
  puVar5 = (undefined4 *)FUN_00428970();
  *puVar5 = 0x43610000;
  puVar5 = (undefined4 *)FUN_00428970();
  *puVar5 = 0;
  pfVar18 = (float *)FUN_00428970();
  *pfVar18 = (float)*(int *)(pbStack_114 + 0x8006e8) * 0.002 * 5.0 * 3.0 + *pfVar18;
LAB_004bbb1a:
  (**(code **)(**(int **)(pbStack_114 + 0x134) + 0xa8))();
  FUN_00601e90();
  FUN_004da480();
  FUN_005fb860();
  FUN_005fb860();
  FUN_0043c3e0();
  FUN_005fb860();
  FUN_005fb860();
  ExceptionList = in_stack_00003e18;
  __security_check_cookie(in_stack_00003e10 ^ (uint)&uStack_fc);
  return;
}


/* FUN_004c7ed0 @ 004c7ed0  kind=gamemisc  attributed-by=role:callback  size=143 */

int FUN_004c7ed0(void)

{
  int iVar1;
  int iVar2;
  int unaff_EBP;
  int iVar3;
  int unaff_EDI;
  float10 fVar4;
  float fVar5;
  
  fVar4 = (float10)FUN_004462f0();
  *(float *)(unaff_EBP + -4) = (float)fVar4;
  iVar2 = (int)*(float *)(unaff_EBP + -4);
  iVar3 = (int)*(short *)(unaff_EDI + 0x10);
  if (iVar2 < 1) {
    iVar2 = 1;
  }
  if (*(char *)(unaff_EBP + 0xc) != '\0') {
    fVar4 = (float10)FUN_0043ca60((float)iVar3);
    *(float *)(unaff_EBP + 0xc) = (float)fVar4;
    fVar5 = *(float *)(unaff_EBP + 0xc) + *(float *)(unaff_EBP + 8);
    if (0.9999 < fVar5) {
      fVar5 = 0.9999;
    }
    fVar4 = (float10)FUN_004462f0(fVar5);
    *(float *)(unaff_EBP + 0xc) = (float)fVar4;
    iVar3 = (int)*(float *)(unaff_EBP + 0xc);
  }
  iVar1 = rand();
  iVar3 = (iVar3 - iVar2) + 1;
  *(short *)(unaff_EDI + 0x10) = (short)(iVar1 % iVar3) + (short)iVar2;
  return iVar1 / iVar3;
}


/* FUN_004c83f0 @ 004c83f0  kind=gamemisc  attributed-by=role:callback  size=240 */

undefined4 FUN_004c83f0(HWND param_1,uint param_2,int param_3)

{
  short sVar1;
  undefined4 uVar2;
  
  if (param_2 < 0x201) {
    if (param_2 != 0x200) {
      if (param_2 < 0x11) {
        if (param_2 == 0x10) {
          DestroyWindow(param_1);
          return 1;
        }
        switch(param_2) {
        case 2:
          PostQuitMessage(0);
          return 1;
        case 5:
        case 7:
          FUN_004c8940(0);
          return 1;
        case 8:
          goto LAB_004c858e;
        }
      }
      else {
        if (param_2 == 0x100) {
          FUN_00652730(param_3);
          (**(code **)(*DAT_0076b1c8 + 8))(param_3);
          return 0;
        }
        if (param_2 == 0x101) {
          FUN_00652790(param_3);
          (**(code **)(*DAT_0076b1c8 + 0xc))(param_3);
          return 0;
        }
        if (param_2 == 0x102) {
          FUN_00652710(param_3);
          (**(code **)(*DAT_0076b1c8 + 0x14))(param_3);
          return 0;
        }
      }
LAB_004c8596:
                    /* WARNING: Could not recover jumptable at 0x004c859c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar2 = DefWindowProcW();
      return uVar2;
    }
  }
  else {
    switch(param_2) {
    case 0x201:
      (**(code **)(*DAT_0076b1c8 + 0x1c))(0);
      return 1;
    case 0x202:
      (**(code **)(*DAT_0076b1c8 + 0x20))(0);
      return 1;
    default:
      goto LAB_004c8596;
    case 0x204:
      (**(code **)(*DAT_0076b1c8 + 0x1c))(1);
      return 1;
    case 0x205:
      (**(code **)(*DAT_0076b1c8 + 0x20))(1);
      return 1;
    case 0x207:
      (**(code **)(*DAT_0076b1c8 + 0x1c))(2);
      return 1;
    case 0x208:
      (**(code **)(*DAT_0076b1c8 + 0x20))(2);
      return 1;
    case 0x20a:
      if (param_3 < 0) {
        sVar1 = -1;
      }
      else {
        sVar1 = 0;
        if ((short)((uint)param_3 >> 0x10) != 0) {
          sVar1 = 1;
        }
      }
      (**(code **)(*DAT_0076b1c8 + 0x24))((int)sVar1);
    }
  }
LAB_004c858e:
  return 1;
}


/* FUN_004d7be0 @ 004d7be0  kind=gamemisc  attributed-by=role:callback  size=69 */

ushort * FUN_004d7be0(ushort *param_1)

{
  byte bVar1;
  
  while( true ) {
    while( true ) {
      if (*param_1 < 0x80) {
        bVar1 = (&DAT_00703680)[*param_1];
      }
      else {
        bVar1 = 0;
      }
      if ((bVar1 & 1) != 0) break;
      param_1 = param_1 + 1;
    }
    if (*param_1 == 0x3c) break;
    if (*param_1 == 0) {
      return param_1;
    }
    param_1 = param_1 + 1;
  }
  *param_1 = 0;
  return param_1 + 1;
}


/* FUN_004d7dc0 @ 004d7dc0  kind=gamemisc  attributed-by=role:callback  size=168 */

ushort * FUN_004d7dc0(ushort *param_1)

{
  ushort uVar1;
  byte bVar2;
  ushort *puVar3;
  ushort *_Src;
  ushort *puVar4;
  int iVar5;
  
  _Src = (ushort *)0x0;
  iVar5 = 0;
  while( true ) {
    while( true ) {
      puVar4 = param_1;
      if (*puVar4 < 0x80) {
        bVar2 = (&DAT_00703680)[*puVar4];
      }
      else {
        bVar2 = 0;
      }
      if ((bVar2 & 1) != 0) break;
      param_1 = puVar4 + 1;
    }
    uVar1 = *puVar4;
    if (uVar1 == 0x3c) break;
    if (uVar1 == 0xd) {
      *puVar4 = 10;
      param_1 = puVar4 + 1;
      if (*param_1 == 10) {
        if (_Src != (ushort *)0x0) {
          memmove(_Src + -iVar5,_Src,(int)param_1 - (int)_Src);
        }
        _Src = puVar4 + 2;
        iVar5 = iVar5 + 1;
        param_1 = _Src;
      }
    }
    else {
      if (uVar1 == 0) {
        return puVar4;
      }
      param_1 = puVar4 + 1;
    }
  }
  puVar3 = puVar4;
  if (_Src != (ushort *)0x0) {
    memmove(_Src + -iVar5,_Src,(int)puVar4 - (int)_Src);
    puVar3 = puVar4 + -iVar5;
  }
  *puVar3 = 0;
  return puVar4 + 1;
}


/* FUN_004d8750 @ 004d8750  kind=gamemisc  attributed-by=role:callback  size=182 */

ushort * FUN_004d8750(ushort *param_1,ushort param_2)

{
  ushort uVar1;
  byte bVar2;
  ushort *puVar3;
  ushort *puVar4;
  code *pcVar5;
  ushort *puVar6;
  int iVar7;
  
  puVar4 = (ushort *)0x0;
  iVar7 = 0;
  pcVar5 = memmove_exref;
  while( true ) {
    while( true ) {
      puVar6 = param_1;
      if (*puVar6 < 0x80) {
        bVar2 = (&DAT_00703680)[*puVar6];
      }
      else {
        bVar2 = 0;
      }
      if ((bVar2 & 2) != 0) break;
      param_1 = puVar6 + 1;
    }
    uVar1 = *puVar6;
    if (uVar1 == param_2) break;
    if (uVar1 == 0xd) {
      *puVar6 = 10;
      param_1 = puVar6 + 1;
      if (*param_1 == 10) {
        if (puVar4 != (ushort *)0x0) {
          (*pcVar5)(puVar4 + -iVar7,puVar4,(int)param_1 - (int)puVar4);
          pcVar5 = memmove_exref;
        }
        puVar4 = puVar6 + 2;
        iVar7 = iVar7 + 1;
        param_1 = puVar4;
      }
    }
    else {
      if (uVar1 == 0) {
        return (ushort *)0x0;
      }
      param_1 = puVar6 + 1;
    }
  }
  puVar3 = puVar6;
  if (puVar4 != (ushort *)0x0) {
    (*pcVar5)(puVar4 + -iVar7,puVar4,(int)puVar6 - (int)puVar4);
    puVar3 = puVar6 + -iVar7;
  }
  *puVar3 = 0;
  return puVar6 + 1;
}


/* FUN_004d8810 @ 004d8810  kind=gamemisc  attributed-by=role:callback  size=226 */

ushort * FUN_004d8810(ushort *param_1,ushort param_2)

{
  ushort uVar1;
  byte bVar2;
  ushort *puVar3;
  ushort *puVar4;
  code *pcVar5;
  ushort *puVar6;
  int iVar7;
  ushort *local_10;
  int local_c;
  undefined4 local_8;
  
  puVar4 = (ushort *)0x0;
  iVar7 = 0;
  local_8 = 0x80;
  pcVar5 = memmove_exref;
  local_10 = puVar4;
  local_c = iVar7;
  while( true ) {
    while( true ) {
      puVar6 = param_1;
      if (*puVar6 < (ushort)local_8) {
        bVar2 = (&DAT_00703680)[*puVar6];
      }
      else {
        bVar2 = 0;
      }
      if ((bVar2 & 2) != 0) break;
      param_1 = puVar6 + 1;
    }
    uVar1 = *puVar6;
    if (uVar1 == param_2) break;
    if (uVar1 == 0xd) {
      *puVar6 = 10;
      param_1 = puVar6 + 1;
      if (*param_1 == 10) {
        if (puVar4 != (ushort *)0x0) {
          (*pcVar5)(puVar4 + -iVar7,puVar4,(int)param_1 - (int)puVar4);
          pcVar5 = memmove_exref;
        }
        puVar4 = puVar6 + 2;
        iVar7 = iVar7 + 1;
        param_1 = puVar4;
        local_10 = puVar4;
        local_c = iVar7;
      }
    }
    else if (uVar1 == 0x26) {
      param_1 = (ushort *)FUN_004d96f0(puVar6,&local_10);
      puVar4 = local_10;
      pcVar5 = memmove_exref;
      iVar7 = local_c;
    }
    else {
      if (uVar1 == 0) {
        return (ushort *)0x0;
      }
      param_1 = puVar6 + 1;
    }
  }
  puVar3 = puVar6;
  if (puVar4 != (ushort *)0x0) {
    (*pcVar5)(puVar4 + -iVar7,puVar4,(int)puVar6 - (int)puVar4);
    puVar3 = puVar6 + -iVar7;
  }
  *puVar3 = 0;
  return puVar6 + 1;
}


/* FUN_004d8ef0 @ 004d8ef0  kind=gamemisc  attributed-by=role:callback  size=78 */

ushort * FUN_004d8ef0(ushort *param_1,ushort param_2)

{
  byte bVar1;
  
  while( true ) {
    while( true ) {
      if (*param_1 < 0x80) {
        bVar1 = (&DAT_00703680)[*param_1];
      }
      else {
        bVar1 = 0;
      }
      if ((bVar1 & 2) != 0) break;
      param_1 = param_1 + 1;
    }
    if (*param_1 == param_2) break;
    if (*param_1 == 0) {
      return (ushort *)0x0;
    }
    param_1 = param_1 + 1;
  }
  *param_1 = 0;
  return param_1 + 1;
}


/* FUN_004d9000 @ 004d9000  kind=gamemisc  attributed-by=role:callback  size=202 */

ushort * FUN_004d9000(ushort *param_1,ushort param_2)

{
  ushort uVar1;
  byte bVar2;
  ushort *puVar3;
  ushort *_Src;
  ushort *puVar4;
  int iVar5;
  
  _Src = (ushort *)0x0;
  iVar5 = 0;
  while( true ) {
    while( true ) {
      puVar4 = param_1;
      if (*puVar4 < 0x80) {
        bVar2 = (&DAT_00703680)[*puVar4];
      }
      else {
        bVar2 = 0;
      }
      if ((bVar2 & 4) != 0) break;
      param_1 = puVar4 + 1;
    }
    uVar1 = *puVar4;
    if (uVar1 == param_2) break;
    if (uVar1 < 0x80) {
      bVar2 = (&DAT_00703680)[uVar1];
    }
    else {
      bVar2 = 0;
    }
    if ((bVar2 & 8) == 0) {
      if (uVar1 == 0) {
        return (ushort *)0x0;
      }
      param_1 = puVar4 + 1;
    }
    else {
      *puVar4 = 0x20;
      param_1 = puVar4 + 1;
      if ((uVar1 == 0xd) && (*param_1 == 10)) {
        if (_Src != (ushort *)0x0) {
          memmove(_Src + -iVar5,_Src,(int)param_1 - (int)_Src);
        }
        _Src = puVar4 + 2;
        iVar5 = iVar5 + 1;
        param_1 = _Src;
      }
    }
  }
  puVar3 = puVar4;
  if (_Src != (ushort *)0x0) {
    memmove(_Src + -iVar5,_Src,(int)puVar4 - (int)_Src);
    puVar3 = puVar4 + -iVar5;
  }
  *puVar3 = 0;
  return puVar4 + 1;
}


/* FUN_004d90d0 @ 004d90d0  kind=gamemisc  attributed-by=role:callback  size=254 */

ushort * FUN_004d90d0(ushort *param_1,ushort param_2)

{
  ushort uVar1;
  byte bVar2;
  ushort *puVar3;
  uint uVar4;
  ushort *_Src;
  ushort *puVar5;
  int iVar6;
  ushort *local_c;
  int local_8;
  
  local_c = (ushort *)0x0;
  local_8 = 0;
  iVar6 = local_8;
  _Src = local_c;
  while( true ) {
    while( true ) {
      puVar5 = param_1;
      if (*puVar5 < 0x80) {
        bVar2 = (&DAT_00703680)[*puVar5];
      }
      else {
        bVar2 = 0;
      }
      if ((bVar2 & 4) != 0) break;
      param_1 = puVar5 + 1;
    }
    uVar1 = *puVar5;
    uVar4 = (uint)uVar1;
    if (uVar1 == param_2) break;
    if (uVar1 < 0x80) {
      bVar2 = (&DAT_00703680)[uVar4];
    }
    else {
      bVar2 = 0;
    }
    if ((bVar2 & 8) == 0) {
      if (uVar4 == 0x26) {
        param_1 = (ushort *)FUN_004d96f0(puVar5,&local_c);
        iVar6 = local_8;
        _Src = local_c;
      }
      else {
        if (uVar1 == 0) {
          return (ushort *)0x0;
        }
        param_1 = puVar5 + 1;
      }
    }
    else {
      *puVar5 = 0x20;
      param_1 = puVar5 + 1;
      if ((uVar4 == 0xd) && (*param_1 == 10)) {
        if (_Src != (ushort *)0x0) {
          memmove(_Src + -iVar6,_Src,(int)param_1 - (int)_Src);
        }
        local_c = puVar5 + 2;
        local_8 = iVar6 + 1;
        param_1 = local_c;
        iVar6 = local_8;
        _Src = local_c;
      }
    }
  }
  puVar3 = puVar5;
  if (_Src != (ushort *)0x0) {
    memmove(_Src + -iVar6,_Src,(int)puVar5 - (int)_Src);
    puVar3 = puVar5 + -iVar6;
  }
  *puVar3 = 0;
  return puVar5 + 1;
}


/* FUN_004d91d0 @ 004d91d0  kind=gamemisc  attributed-by=role:callback  size=362 */

ushort * FUN_004d91d0(ushort *param_1,ushort param_2)

{
  ushort uVar1;
  byte bVar2;
  ushort *puVar3;
  ushort *puVar4;
  int iVar5;
  ushort *puVar6;
  int iVar7;
  
  puVar4 = (ushort *)0x0;
  iVar5 = 0;
  if (*param_1 < 0x80) {
    bVar2 = (&DAT_00703680)[*param_1];
  }
  else {
    bVar2 = 0;
  }
  puVar6 = param_1;
  if ((bVar2 & 8) != 0) {
    do {
      puVar4 = puVar6 + 1;
      if (puVar6[1] < 0x80) {
        bVar2 = (&DAT_00703680)[puVar6[1]];
      }
      else {
        bVar2 = 0;
      }
      puVar6 = puVar4;
    } while ((bVar2 & 8) != 0);
    iVar5 = (int)puVar4 - (int)param_1 >> 1;
    puVar4 = param_1 + iVar5;
    param_1 = puVar4;
  }
  while( true ) {
    while( true ) {
      puVar6 = param_1;
      if (*puVar6 < 0x80) {
        bVar2 = (&DAT_00703680)[*puVar6];
      }
      else {
        bVar2 = 0;
      }
      if ((bVar2 & 0xc) != 0) break;
      param_1 = puVar6 + 1;
    }
    uVar1 = *puVar6;
    if (uVar1 == param_2) break;
    if (uVar1 < 0x80) {
      bVar2 = (&DAT_00703680)[uVar1];
    }
    else {
      bVar2 = 0;
    }
    if ((bVar2 & 8) == 0) {
      if (uVar1 == 0) {
        return (ushort *)0x0;
      }
      param_1 = puVar6 + 1;
    }
    else {
      *puVar6 = 0x20;
      param_1 = puVar6 + 1;
      if (puVar6[1] < 0x80) {
        bVar2 = (&DAT_00703680)[puVar6[1]];
      }
      else {
        bVar2 = 0;
      }
      if ((bVar2 & 8) != 0) {
        puVar6 = puVar6 + 2;
        while( true ) {
          if (*puVar6 < 0x80) {
            bVar2 = (&DAT_00703680)[*puVar6];
          }
          else {
            bVar2 = 0;
          }
          if ((bVar2 & 8) == 0) break;
          puVar6 = puVar6 + 1;
        }
        iVar7 = (int)puVar6 - (int)param_1 >> 1;
        if (puVar4 != (ushort *)0x0) {
          memmove(puVar4 + -iVar5,puVar4,(int)param_1 - (int)puVar4);
        }
        puVar4 = param_1 + iVar7;
        iVar5 = iVar5 + iVar7;
        param_1 = puVar4;
      }
    }
  }
  puVar3 = puVar6;
  if (puVar4 != (ushort *)0x0) {
    memmove(puVar4 + -iVar5,puVar4,(int)puVar6 - (int)puVar4);
    puVar3 = puVar6 + -iVar5;
  }
  do {
    *puVar3 = 0;
    if (puVar3[-1] < 0x80) {
      bVar2 = (&DAT_00703680)[puVar3[-1]];
    }
    else {
      bVar2 = 0;
    }
    puVar3 = puVar3 + -1;
  } while ((bVar2 & 8) != 0);
  return puVar6 + 1;
}


/* FUN_004d9340 @ 004d9340  kind=gamemisc  attributed-by=role:callback  size=415 */

ushort * FUN_004d9340(ushort *param_1,ushort param_2)

{
  ushort uVar1;
  byte bVar2;
  ushort *puVar3;
  ushort *puVar4;
  ushort *puVar5;
  int iVar6;
  int iVar7;
  ushort *local_c;
  int local_8;
  
  local_c = (ushort *)0x0;
  local_8 = 0;
  if (*param_1 < 0x80) {
    bVar2 = (&DAT_00703680)[*param_1];
  }
  else {
    bVar2 = 0;
  }
  puVar4 = (ushort *)0x0;
  iVar6 = 0;
  puVar5 = param_1;
  if ((bVar2 & 8) != 0) {
    do {
      puVar4 = puVar5 + 1;
      if (puVar5[1] < 0x80) {
        bVar2 = (&DAT_00703680)[puVar5[1]];
      }
      else {
        bVar2 = 0;
      }
      puVar5 = puVar4;
    } while ((bVar2 & 8) != 0);
    iVar6 = (int)puVar4 - (int)param_1 >> 1;
    puVar4 = param_1 + iVar6;
    param_1 = puVar4;
    local_c = puVar4;
    local_8 = iVar6;
  }
  while( true ) {
    while( true ) {
      puVar5 = param_1;
      if (*puVar5 < 0x80) {
        bVar2 = (&DAT_00703680)[*puVar5];
      }
      else {
        bVar2 = 0;
      }
      if ((bVar2 & 0xc) != 0) break;
      param_1 = puVar5 + 1;
    }
    uVar1 = *puVar5;
    if (uVar1 == param_2) break;
    if (uVar1 < 0x80) {
      bVar2 = (&DAT_00703680)[uVar1];
    }
    else {
      bVar2 = 0;
    }
    if ((bVar2 & 8) == 0) {
      if (uVar1 == 0x26) {
        param_1 = (ushort *)FUN_004d96f0(puVar5,&local_c);
        puVar4 = local_c;
        iVar6 = local_8;
      }
      else {
        if (uVar1 == 0) {
          return (ushort *)0x0;
        }
        param_1 = puVar5 + 1;
      }
    }
    else {
      *puVar5 = 0x20;
      param_1 = puVar5 + 1;
      if (puVar5[1] < 0x80) {
        bVar2 = (&DAT_00703680)[puVar5[1]];
      }
      else {
        bVar2 = 0;
      }
      if ((bVar2 & 8) != 0) {
        puVar5 = puVar5 + 2;
        while( true ) {
          if (*puVar5 < 0x80) {
            bVar2 = (&DAT_00703680)[*puVar5];
          }
          else {
            bVar2 = 0;
          }
          if ((bVar2 & 8) == 0) break;
          puVar5 = puVar5 + 1;
        }
        iVar7 = (int)puVar5 - (int)param_1 >> 1;
        if (puVar4 != (ushort *)0x0) {
          memmove(puVar4 + -iVar6,puVar4,(int)param_1 - (int)puVar4);
        }
        puVar4 = param_1 + iVar7;
        iVar6 = iVar6 + iVar7;
        param_1 = puVar4;
        local_c = puVar4;
        local_8 = iVar6;
      }
    }
  }
  puVar3 = puVar5;
  if (puVar4 != (ushort *)0x0) {
    memmove(puVar4 + -iVar6,puVar4,(int)puVar5 - (int)puVar4);
    puVar3 = puVar5 + -iVar6;
  }
  do {
    *puVar3 = 0;
    if (puVar3[-1] < 0x80) {
      bVar2 = (&DAT_00703680)[puVar3[-1]];
    }
    else {
      bVar2 = 0;
    }
    puVar3 = puVar3 + -1;
  } while ((bVar2 & 8) != 0);
  return puVar5 + 1;
}


/* FUN_0051ca20 @ 0051ca20  kind=gamemisc  attributed-by=role:callback  size=449 */

void FUN_0051ca20(int *param_1,int param_2,byte *param_3)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  byte *pbVar7;
  byte *pbVar8;
  undefined4 uVar9;
  int iVar10;
  int *piVar11;
  char *_Src;
  size_t _Size;
  
  pbVar7 = param_3;
  piVar11 = param_1 + 2;
  iVar6 = *piVar11;
  iVar2 = FUN_0056bce0(*(undefined4 *)param_3,1);
  iVar3 = FUN_0056bce0(*(undefined4 *)(pbVar7 + 4),1);
  iVar10 = *(int *)pbVar7;
  if ((*(byte *)(iVar10 + 0x1c) & 0x10) == 0) {
    iVar4 = FUN_0056bce0(iVar10,1);
    iVar5 = 0;
    if (iVar4 != 0) goto LAB_0051ca6a;
  }
  else {
LAB_0051ca6a:
    iVar5 = *(int *)(iVar10 + 0x18);
    if ((*(ushort *)(iVar10 + 0x1c) & 0x4000) != 0) {
      iVar5 = iVar5 + *(int *)(iVar10 + 0x10);
    }
  }
  if (*(int *)(iVar6 + 0x70) < iVar5) {
    param_1[0xe] = 1;
    if (*piVar11 == 0) {
      iVar6 = 1000000000;
    }
    else {
      iVar6 = *(int *)(*piVar11 + 0x50);
    }
    iVar10 = 0;
    if (-1 < iVar6) {
      do {
        if ("LIKE or GLOB pattern too complex"[iVar10] == '\0') break;
        iVar10 = iVar10 + 1;
      } while (iVar10 <= iVar6);
    }
    _Size = iVar10 + 1;
    if (iVar6 < iVar10) {
      return;
    }
    iVar6 = FUN_005748c0(piVar11,_Size,0);
    if (iVar6 != 0) {
      return;
    }
    _Src = "LIKE or GLOB pattern too complex";
    goto LAB_0051cad6;
  }
  if (param_2 == 3) {
    param_3 = (byte *)FUN_0056bce0(*(undefined4 *)(pbVar7 + 8),1);
    if (param_3 == (byte *)0x0) {
      return;
    }
    iVar6 = 0;
    pbVar7 = param_3;
    if (*param_3 != 0) {
      do {
        if (pbVar7 == (byte *)0xffffffff) break;
        pbVar8 = pbVar7 + 1;
        if (0xbf < *pbVar7) {
          bVar1 = *pbVar8;
          while ((bVar1 & 0xc0) == 0x80) {
            pbVar7 = pbVar8 + 1;
            pbVar8 = pbVar8 + 1;
            bVar1 = *pbVar7;
          }
        }
        iVar6 = iVar6 + 1;
        pbVar7 = pbVar8;
      } while (*pbVar8 != 0);
      if (iVar6 == 1) {
        uVar9 = FUN_0056a940(&param_3);
        goto LAB_0051cbb2;
      }
    }
    param_1[0xe] = 1;
    if (*piVar11 == 0) {
      iVar6 = 1000000000;
    }
    else {
      iVar6 = *(int *)(*piVar11 + 0x50);
    }
    iVar10 = 0;
    if (-1 < iVar6) {
      do {
        if ("ESCAPE expression must be a single character"[iVar10] == '\0') break;
        iVar10 = iVar10 + 1;
      } while (iVar10 <= iVar6);
    }
    _Size = iVar10 + 1;
    if ((iVar10 <= iVar6) && (iVar6 = FUN_005748c0(piVar11,_Size,0), iVar6 == 0)) {
      _Src = "ESCAPE expression must be a single character";
LAB_0051cad6:
      memcpy((void *)param_1[3],_Src,_Size);
      param_1[8] = iVar10;
      param_1[9] = 0x1030202;
      return;
    }
  }
  else {
    uVar9 = 0;
LAB_0051cbb2:
    if ((iVar3 != 0) && (iVar2 != 0)) {
      uVar9 = FUN_00543be0(iVar2,iVar3,*(undefined4 *)(*param_1 + 4),uVar9);
      FUN_0051d210(param_1,uVar9);
    }
  }
  return;
}


/* FUN_00529cf0 @ 00529cf0  kind=gamemisc  attributed-by=role:callback  size=235 */

undefined4 FUN_00529cf0(undefined4 *param_1,undefined4 param_2,int *param_3)

{
  char cVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int *piVar9;
  int iVar10;
  
  if (((param_3 == (int *)0x0) || (*param_3 == 0)) ||
     (piVar9 = (int *)param_3[2], piVar9 == (int *)0x0)) {
    return 0;
  }
  uVar2 = param_1[1];
  uVar3 = *param_1;
  iVar5 = FUN_005572d0(uVar3,*param_3,uVar2);
  if (iVar5 == 0) {
    return 0;
  }
  if (param_3[1] == 0) {
    iVar6 = 0;
  }
  else {
    iVar6 = FUN_00557190(uVar3,param_3[1],uVar2);
    if (iVar6 != 0) {
      iVar7 = *(int *)(iVar6 + 0x24);
      goto LAB_00529d5a;
    }
  }
  iVar7 = 0;
LAB_00529d5a:
  cVar1 = (char)*piVar9;
  iVar10 = 0;
  while( true ) {
    if (cVar1 == '\0') {
      return 0;
    }
    if (iVar7 < iVar10) break;
    iVar8 = 0;
    while ((iVar4 = (int)cVar1, 0x2f < iVar4 && (iVar4 < 0x3a))) {
      piVar9 = (int *)((int)piVar9 + 1);
      iVar8 = iVar4 + (iVar8 * 5 + -0x18) * 2;
      cVar1 = *(char *)piVar9;
    }
    if (iVar10 == 0) {
      *(int *)(iVar5 + 0x1c) = iVar8;
    }
    if (iVar6 == 0) {
      return 0;
    }
    *(int *)(*(int *)(iVar6 + 8) + iVar10 * 4) = iVar8;
    if ((char)*piVar9 == ' ') {
      piVar9 = (int *)((int)piVar9 + 1);
    }
    if (((*piVar9 == 0x726f6e75) && (piVar9[1] == 0x65726564)) && ((short)piVar9[2] == 100)) {
      *(undefined1 *)(iVar6 + 0x2e) = 1;
      return 0;
    }
    cVar1 = (char)*piVar9;
    iVar10 = iVar10 + 1;
  }
  return 0;
}


/* FUN_00529de0 @ 00529de0  kind=gamemisc  attributed-by=role:callback  size=721 */

undefined4 FUN_00529de0(int param_1,int *param_2)

{
  char cVar1;
  int *piVar2;
  short *psVar3;
  int iVar4;
  char *pcVar5;
  char *pcVar6;
  char *pcVar7;
  undefined4 uVar8;
  int iVar9;
  int iVar10;
  int *piVar11;
  undefined4 *puVar12;
  undefined4 *puVar13;
  uint uVar14;
  uint uVar15;
  undefined4 local_c;
  
  pcVar6 = (char *)param_2;
  piVar11 = *(int **)(param_1 + 0x10);
  piVar2 = (int *)*piVar11;
  psVar3 = (short *)piVar11[1];
  iVar4 = piVar11[3];
  cVar1 = *(char *)param_2;
  if (cVar1 != -0x68) {
    if (cVar1 == -0x67) {
      if ((*(byte *)(piVar11 + 7) & 8) != 0) {
        return 0;
      }
      if (*(uint *)(param_1 + 0xc) != (uint)*(byte *)((int)param_2 + 0x23)) {
        return 0;
      }
      puVar12 = *(undefined4 **)(iVar4 + 0x20);
      param_2 = (int *)(iVar4 + 0x24);
      piVar11 = (int *)0x0;
      if (0 < *param_2) {
        do {
          iVar10 = FUN_00555cb0(*puVar12,pcVar6);
          if (iVar10 == 0) break;
          piVar11 = (int *)((int)piVar11 + 1);
          puVar12 = puVar12 + 4;
        } while ((int)piVar11 < *param_2);
        if ((int)piVar11 < *param_2) goto LAB_00529f27;
      }
      local_c = CONCAT31((int3)((uint)psVar3 >> 8),
                         *(undefined1 *)(*(int *)(*(int *)(*piVar2 + 0x10) + 0xc) + 0x4d));
      iVar10 = FUN_0054a2b0(*piVar2,*(undefined4 *)(iVar4 + 0x20),0x10,param_2,&param_2);
      piVar11 = param_2;
      *(int *)(iVar4 + 0x20) = iVar10;
      if (-1 < (int)param_2) {
        puVar12 = (undefined4 *)((int)param_2 * 0x10 + iVar10);
        *puVar12 = pcVar6;
        piVar2[0x13] = piVar2[0x13] + 1;
        puVar12[2] = piVar2[0x13];
        if (*(undefined4 **)(pcVar6 + 0x10) == (undefined4 *)0x0) {
          param_2 = (int *)0x0;
        }
        else {
          param_2 = (int *)**(undefined4 **)(pcVar6 + 0x10);
        }
        pcVar5 = *(char **)(pcVar6 + 4);
        uVar15 = 0;
        if (pcVar5 != (char *)0x0) {
          cVar1 = *pcVar5;
          pcVar7 = pcVar5;
          while (cVar1 != '\0') {
            pcVar7 = pcVar7 + 1;
            cVar1 = *pcVar7;
          }
          uVar15 = (int)pcVar7 - (int)pcVar5 & 0x3fffffff;
        }
        uVar8 = FUN_00556c60(*piVar2,pcVar5,uVar15,param_2,local_c,0);
        puVar12[1] = uVar8;
        if ((pcVar6[2] & 0x10U) != 0) {
          puVar12[3] = piVar2[0x12];
          piVar2[0x12] = piVar2[0x12] + 1;
          *(short *)(pcVar6 + 0x1e) = (short)piVar11;
          *(int *)(pcVar6 + 0x24) = iVar4;
          return 1;
        }
        puVar12[3] = 0xffffffff;
      }
LAB_00529f27:
      *(short *)(pcVar6 + 0x1e) = (short)piVar11;
      *(int *)(pcVar6 + 0x24) = iVar4;
      return 1;
    }
    if (cVar1 != -0x66) {
      return 0;
    }
  }
  if (psVar3 == (short *)0x0) {
    return 1;
  }
  iVar10 = 0;
  if (*psVar3 < 1) {
    return 1;
  }
  piVar11 = (int *)(psVar3 + 0x1a);
  while (*(int *)((int)param_2 + 0x18) != *piVar11) {
    iVar10 = iVar10 + 1;
    piVar11 = piVar11 + 0x12;
    if (*psVar3 <= iVar10) {
      return 1;
    }
  }
  uVar15 = *(uint *)(iVar4 + 0x18);
  iVar10 = *(int *)(iVar4 + 0x14);
  uVar14 = 0;
  if (0 < (int)uVar15) {
    piVar11 = (int *)(iVar10 + 8);
    do {
      if ((piVar11[-1] == *(int *)((int)param_2 + 0x18)) &&
         (uVar15 = *(uint *)(iVar4 + 0x18), *piVar11 == (int)*(short *)((int)param_2 + 0x1c)))
      break;
      uVar14 = uVar14 + 1;
      piVar11 = piVar11 + 6;
    } while ((int)uVar14 < (int)uVar15);
  }
  if ((int)uVar14 < (int)uVar15) goto LAB_0052a099;
  if ((uVar15 & uVar15 - 1) == 0) {
    iVar9 = 1;
    if (uVar15 != 0) {
      iVar9 = uVar15 * 2;
    }
    param_2 = (int *)iVar10;
    iVar10 = FUN_00552390(*piVar2,iVar10,iVar9 * 0x18);
    if (iVar10 != 0) goto LAB_00529fef;
    uVar15 = 0xffffffff;
    iVar10 = (int)param_2;
  }
  else {
LAB_00529fef:
    *(undefined8 *)(iVar10 + uVar15 * 0x18) = 0;
    *(undefined8 *)(iVar10 + 8 + uVar15 * 0x18) = 0;
    *(undefined8 *)(iVar10 + 0x10 + uVar15 * 0x18) = 0;
    *(int *)(iVar4 + 0x18) = *(int *)(iVar4 + 0x18) + 1;
  }
  *(int *)(iVar4 + 0x14) = iVar10;
  uVar14 = uVar15;
  if (-1 < (int)uVar15) {
    puVar12 = (undefined4 *)(iVar10 + uVar15 * 0x18);
    *puVar12 = *(undefined4 *)(pcVar6 + 0x28);
    puVar12[1] = *(undefined4 *)(pcVar6 + 0x18);
    puVar12[2] = (int)*(short *)(pcVar6 + 0x1c);
    piVar2[0x13] = piVar2[0x13] + 1;
    puVar12[4] = piVar2[0x13];
    puVar12[3] = 0xffffffff;
    puVar12[5] = pcVar6;
    piVar11 = *(int **)(iVar4 + 0x10);
    if (piVar11 != (int *)0x0) {
      puVar13 = (undefined4 *)piVar11[2];
      iVar10 = 0;
      if (0 < *piVar11) {
        do {
          pcVar5 = (char *)*puVar13;
          if (((*pcVar5 == -0x68) && (*(int *)(pcVar5 + 0x18) == *(int *)(pcVar6 + 0x18))) &&
             (*(short *)(pcVar5 + 0x1c) == *(short *)(pcVar6 + 0x1c))) {
            puVar12[3] = iVar10;
            break;
          }
          iVar10 = iVar10 + 1;
          puVar13 = puVar13 + 5;
        } while (iVar10 < *piVar11);
      }
    }
    if ((int)puVar12[3] < 0) {
      puVar12[3] = *(undefined4 *)(iVar4 + 0xc);
      *(int *)(iVar4 + 0xc) = *(int *)(iVar4 + 0xc) + 1;
    }
  }
LAB_0052a099:
  *(int *)(pcVar6 + 0x24) = iVar4;
  *pcVar6 = -0x66;
  *(short *)(pcVar6 + 0x1e) = (short)uVar14;
  return 1;
}


/* FUN_0052df70 @ 0052df70  kind=gamemisc  attributed-by=role:callback  size=191 */

uint FUN_0052df70(int param_1,uint param_2,byte *param_3,uint param_4,byte *param_5)

{
  uint uVar1;
  byte *pbVar2;
  byte *pbVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  bool bVar7;
  undefined8 uVar8;
  
  pbVar2 = param_3;
  pbVar3 = param_5;
  uVar5 = param_4;
  uVar6 = param_4;
  if ((int)param_2 < (int)param_4) {
    uVar5 = param_2;
    uVar6 = param_2;
  }
  while (uVar1 = uVar5 - 4, 3 < uVar5) {
    if (*(int *)pbVar2 != *(int *)pbVar3) goto LAB_0052dfa6;
    pbVar2 = pbVar2 + 4;
    pbVar3 = pbVar3 + 4;
    uVar5 = uVar1;
  }
  if (uVar1 != 0xfffffffc) {
LAB_0052dfa6:
    bVar7 = *pbVar2 < *pbVar3;
    if ((*pbVar2 != *pbVar3) ||
       ((uVar1 != 0xfffffffd &&
        ((bVar7 = pbVar2[1] < pbVar3[1], pbVar2[1] != pbVar3[1] ||
         ((uVar1 != 0xfffffffe &&
          ((bVar7 = pbVar2[2] < pbVar3[2], pbVar2[2] != pbVar3[2] ||
           ((uVar1 != 0xffffffff && (bVar7 = pbVar2[3] < pbVar3[3], pbVar2[3] != pbVar3[3]))))))))))
       )) {
      uVar5 = -(uint)bVar7 | 1;
      goto LAB_0052dfdc;
    }
  }
  uVar5 = 0;
LAB_0052dfdc:
  if (uVar5 != 0) {
    return uVar5;
  }
  if (param_1 != 0) {
    for (iVar4 = param_2 - uVar6; (0 < iVar4 && (param_3[iVar4 + (uVar6 - 1)] == 0x20));
        iVar4 = iVar4 + -1) {
    }
    if (iVar4 == 0) {
      uVar8 = FUN_005290e0(param_5 + uVar6,param_4 - uVar6);
      if ((int)uVar8 != 0) {
        return (uint)((ulonglong)uVar8 >> 0x20);
      }
    }
  }
  return param_2 - param_4;
}


/* FUN_0052ebe0 @ 0052ebe0  kind=gamemisc  attributed-by=role:callback  size=65 */

int FUN_0052ebe0(int param_1)

{
  int iVar1;
  code *pcVar2;
  int iVar3;
  
  iVar1 = *(int *)(param_1 + 4);
  if ((((undefined4 *)(iVar1 + 0x1ac) != (undefined4 *)0x0) &&
      (pcVar2 = *(code **)(iVar1 + 0x1ac), pcVar2 != (code *)0x0)) && (-1 < *(int *)(iVar1 + 0x1b4))
     ) {
    iVar3 = (*pcVar2)(*(undefined4 *)(iVar1 + 0x1b0),*(int *)(iVar1 + 0x1b4));
    if (iVar3 == 0) {
      *(undefined4 *)(iVar1 + 0x1b4) = 0xffffffff;
      return 0;
    }
    *(int *)(iVar1 + 0x1b4) = *(int *)(iVar1 + 0x1b4) + 1;
    return iVar3;
  }
  return 0;
}


/* FUN_00534970 @ 00534970  kind=gamemisc  attributed-by=role:callback  size=94 */

undefined4 FUN_00534970(int param_1,undefined1 *param_2)

{
  ushort *puVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  undefined4 uVar5;
  int *piVar6;
  
  iVar2 = *(int *)(param_1 + 8);
  switch(*param_2) {
  case 0x48:
  case 0x84:
    return 1;
  case 0x97:
  case 0x99:
  case 0x9b:
    piVar3 = *(int **)(param_2 + 0x10);
    if (piVar3 != (int *)0x0) {
      piVar6 = (int *)piVar3[2];
      for (iVar4 = *piVar3; 0 < iVar4; iVar4 = iVar4 + -1) {
        if (*piVar6 != 0) {
          puVar1 = (ushort *)(*piVar6 + 2);
          *puVar1 = *puVar1 | 0x200;
        }
        piVar6 = piVar6 + 5;
      }
    }
  default:
    iVar4 = FUN_0053c010(param_2);
    if (iVar4 != 0) {
      *(int *)(iVar2 + 0x4c) = *(int *)(iVar2 + 0x4c) + 1;
      uVar5 = FUN_00554e20(iVar2,param_2,*(undefined4 *)(iVar2 + 0x4c));
      param_2[0x23] = *param_2;
      *param_2 = 0x84;
      *(undefined4 *)(param_2 + 0x18) = uVar5;
      return 1;
    }
  case 0x5c:
    return 0;
  }
}


/* FUN_00536500 @ 00536500  kind=gamemisc  attributed-by=role:callback  size=68 */

undefined4 FUN_00536500(int param_1,undefined1 *param_2)

{
  if ((*(int *)(param_1 + 0x10) != 3) || ((param_2[2] & 1) == 0)) {
    switch(*param_2) {
    case 0x1a:
    case 0x98:
    case 0x99:
    case 0x9a:
      break;
    default:
      return 0;
    case 0x97:
      if (*(int *)(param_1 + 0x10) == 2) {
        return 0;
      }
    }
  }
  *(undefined4 *)(param_1 + 0x10) = 0;
  return 2;
}


/* FUN_005367f0 @ 005367f0  kind=gamemisc  attributed-by=role:callback  size=82 */

undefined4 FUN_005367f0(int param_1,char *param_2)

{
  undefined4 *puVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  
  if ((*param_2 == -0x68) || (*param_2 == -0x66)) {
    puVar1 = *(undefined4 **)(param_1 + 0x10);
    iVar2 = 0;
    iVar4 = (int)*(short *)*puVar1;
    if (0 < iVar4) {
      piVar3 = (int *)((short *)*puVar1 + 0x1a);
      do {
        if (*(int *)(param_2 + 0x18) == *piVar3) break;
        iVar2 = iVar2 + 1;
        piVar3 = piVar3 + 0x12;
      } while (iVar2 < iVar4);
    }
    if (iVar2 < iVar4) {
      puVar1[1] = puVar1[1] + 1;
      return 0;
    }
    puVar1[2] = puVar1[2] + 1;
  }
  return 0;
}


/* FUN_00541820 @ 00541820  kind=gamemisc  attributed-by=role:callback  size=224 */

uint FUN_00541820(int param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  
  if ((*(int *)(param_1 + 0x28) != 0) || (*(char *)(param_1 + 0x13) != '\0')) {
    return 0;
  }
  if ((*(char *)(param_1 + 0x14) != '\0') && ((*(byte *)(param_2 + 0x18) & 4) != 0)) {
    return 0;
  }
  *(undefined4 *)(param_2 + 0xc) = 0;
  if (*(int *)(param_1 + 0xb8) == 0) {
    if (((*(byte *)(param_2 + 0x18) & 4) != 0) || (*(char *)(param_1 + 0xf) == '\x03')) {
      uVar2 = FUN_0057ac30(param_1,1);
      if (uVar2 != 0) goto LAB_005418e5;
    }
    if (*(uint *)(param_1 + 0x18) < *(uint *)(param_2 + 0x14)) {
      iVar1 = FUN_0057a8b0(param_2);
      if (iVar1 != 0) {
        uVar2 = FUN_0057a9b0(param_2);
        if (uVar2 != 0) goto LAB_005418e5;
      }
    }
    uVar2 = FUN_00542df0(param_1,param_2);
  }
  else {
    iVar1 = FUN_0057a8b0(param_2);
    if (iVar1 != 0) {
      uVar2 = FUN_0057a9b0(param_2);
      if (uVar2 != 0) goto LAB_005418e5;
    }
    uVar2 = FUN_00541ab0(param_1,param_2,0,0);
  }
  if (uVar2 == 0) {
    FUN_00561000(param_2);
  }
LAB_005418e5:
  if (((uVar2 & 0xff) == 0xd) || ((uVar2 & 0xff) == 10)) {
    *(uint *)(param_1 + 0x28) = uVar2;
    *(undefined1 *)(param_1 + 0xf) = 6;
  }
  return uVar2;
}


/* FUN_00546470 @ 00546470  kind=gamemisc  attributed-by=role:callback  size=118 */

undefined4 FUN_00546470(int param_1,undefined1 *param_2)

{
  undefined1 uVar1;
  ushort uVar2;
  int *piVar3;
  char *pcVar4;
  undefined4 *puVar5;
  bool bVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  int iVar9;
  int iVar10;
  int *piVar11;
  bool bVar12;
  undefined8 uVar13;
  undefined4 uStack_10;
  
  piVar3 = *(int **)(param_1 + 0x10);
  uVar2 = *(ushort *)(param_2 + 2);
  piVar11 = (int *)*piVar3;
  if ((uVar2 & 4) != 0) {
    return 1;
  }
  *(ushort *)(param_2 + 2) = uVar2 | 4;
  switch(*param_2) {
  case 0x14:
  case 0x48:
  case 0x74:
    if ((uVar2 & 0x800) != 0) {
      iVar9 = piVar3[5];
      if ((*(byte *)(piVar3 + 7) & 4) != 0) {
        FUN_00553950(piVar11,"subqueries prohibited in CHECK constraints");
      }
      FUN_00578760(param_1,*(undefined4 *)(param_2 + 0x10));
      if (iVar9 != piVar3[5]) {
        *(ushort *)(param_2 + 2) = *(ushort *)(param_2 + 2) | 0x20;
      }
    }
    break;
  case 0x1a:
    uVar7 = FUN_0053d620(piVar11,0,0,*(undefined4 *)(param_2 + 4),piVar3,param_2);
    return uVar7;
  case 0x76:
    pcVar4 = *(char **)(param_2 + 0xc);
    if (*pcVar4 != '\x1a') {
      uVar7 = FUN_0053d620(piVar11,*(undefined4 *)(*(int *)(param_2 + 8) + 4),
                           *(undefined4 *)(*(int *)(pcVar4 + 8) + 4),
                           *(undefined4 *)(*(int *)(pcVar4 + 0xc) + 4),piVar3,param_2);
      return uVar7;
    }
    uVar7 = FUN_0053d620(piVar11,0,*(undefined4 *)(*(int *)(param_2 + 8) + 4),
                         *(undefined4 *)(pcVar4 + 4),piVar3,param_2);
    return uVar7;
  case 0x85:
    if ((*(byte *)(piVar3 + 7) & 4) != 0) {
      FUN_00553950(piVar11,"parameters prohibited in CHECK constraints");
    }
    break;
  case 0x97:
  case 0x9b:
    puVar5 = *(undefined4 **)(param_2 + 0x10);
    if (puVar5 == (undefined4 *)0x0) {
      uStack_10 = 0;
    }
    else {
      uStack_10 = *puVar5;
    }
    bVar6 = false;
    bVar12 = false;
    uVar1 = *(undefined1 *)(*(int *)(*(int *)(*piVar11 + 0x10) + 0xc) + 0x4d);
    uVar7 = *(undefined4 *)(param_2 + 4);
    uVar13 = FUN_00568070(uVar7);
    uVar8 = (undefined4)uVar13;
    iVar9 = FUN_00556c60((int)((ulonglong)uVar13 >> 0x20),uVar7,uVar8,uStack_10,uVar1,0);
    if (iVar9 == 0) {
      iVar9 = FUN_00556c60(*piVar11,uVar7,uVar8,0xfffffffe,uVar1,0);
      if (iVar9 == 0) {
        FUN_00553950(piVar11,"no such function: %.*s",uVar8,uVar7);
        piVar3[6] = piVar3[6] + 1;
        goto LAB_00546668;
      }
      bVar6 = true;
    }
    else {
      bVar12 = *(int *)(iVar9 + 0xc) == 0;
    }
    iVar10 = FUN_0054ab50(piVar11,0x1f,0,*(undefined4 *)(iVar9 + 0x18),0);
    if (iVar10 != 0) {
      if (iVar10 == 1) {
        FUN_00553950(piVar11,"not authorized to use function: %s",*(undefined4 *)(iVar9 + 0x18));
        piVar3[6] = piVar3[6] + 1;
      }
      *param_2 = 0x62;
      return 1;
    }
    if ((bVar12) && ((*(byte *)(piVar3 + 7) & 1) == 0)) {
      FUN_00553950(piVar11,"misuse of aggregate function %.*s()",uVar8,uVar7);
      piVar3[6] = piVar3[6] + 1;
      bVar12 = false;
    }
    else {
      if (bVar6) {
        FUN_00553950(piVar11,"wrong number of arguments to function %.*s()",uVar8,uVar7);
        piVar3[6] = piVar3[6] + 1;
      }
      if (bVar12) {
        *(byte *)(piVar3 + 7) = *(byte *)(piVar3 + 7) & 0xfe;
      }
    }
LAB_00546668:
    FUN_00578710(param_1,puVar5);
    if (bVar12) {
      *param_2 = 0x99;
      param_2[0x23] = 0;
      piVar11 = piVar3;
      while (iVar9 = FUN_00558820(param_2,piVar11[1]), iVar9 == 0) {
        param_2[0x23] = param_2[0x23] + '\x01';
        piVar11 = (int *)piVar11[4];
        if (piVar11 == (int *)0x0) {
          *(byte *)(piVar3 + 7) = *(byte *)(piVar3 + 7) | 1;
          return 1;
        }
      }
      *(byte *)(piVar11 + 7) = *(byte *)(piVar11 + 7) | 2;
      *(byte *)(piVar3 + 7) = *(byte *)(piVar3 + 7) | 1;
    }
    return 1;
  }
  if ((piVar11[0x11] == 0) && (*(char *)(*piVar11 + 0x38) == '\0')) {
    return 0;
  }
  return 2;
}


/* FUN_00546ad0 @ 00546ad0  kind=gamemisc  attributed-by=role:callback  size=787 */

undefined4 FUN_00546ad0(int param_1,undefined4 *param_2)

{
  uint *puVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  byte bVar6;
  int *piVar7;
  int iVar8;
  char *pcVar9;
  undefined8 local_54;
  undefined8 local_4c;
  ulonglong local_44;
  undefined8 local_3c;
  code *local_34;
  code *local_30;
  int *local_2c;
  int local_24;
  undefined4 *local_20;
  int local_1c;
  uint local_18;
  int *local_14;
  int local_10;
  int local_c;
  int local_8;
  
  if ((*(ushort *)((int)param_2 + 6) & 2) != 0) {
    return 1;
  }
  local_c = *(int *)(param_1 + 0x10);
  piVar2 = *(int **)(param_1 + 8);
  local_8 = *piVar2;
  if ((*(ushort *)((int)param_2 + 6) & 0x10) == 0) {
    FUN_00567060(piVar2,param_2,local_c);
    if (piVar2[0x11] == 0) {
      if (*(char *)(local_8 + 0x38) != '\0') {
        return 2;
      }
      return 1;
    }
  }
  else {
    local_20 = param_2;
    local_18 = (uint)(param_2[0xf] != 0);
    do {
      iVar8 = local_c;
      *(ushort *)((int)param_2 + 6) = *(ushort *)((int)param_2 + 6) | 2;
      local_4c = 0;
      local_44 = 0;
      local_3c = 0;
      local_54 = ZEXT48(piVar2);
      iVar4 = FUN_005640a0(&local_54,param_2[0x12]);
      if (iVar4 != 0) {
        return 2;
      }
      iVar4 = FUN_005640a0(&local_54,param_2[0x13]);
      if (iVar4 != 0) {
        return 2;
      }
      local_3c._0_5_ = CONCAT14(1,(undefined4)local_3c);
      local_54 = CONCAT44(param_2[10],(undefined4)local_54);
      local_44 = CONCAT44(local_44._4_4_,iVar8);
      local_14 = (int *)*param_2;
      iVar8 = 0;
      bVar6 = 0;
      if (0 < *local_14) {
        iVar4 = 0;
        do {
          iVar5 = FUN_005640a0(&local_54,*(undefined4 *)(iVar4 + local_14[2]));
          if (iVar5 != 0) {
            return 2;
          }
          iVar8 = iVar8 + 1;
          iVar4 = iVar4 + 0x14;
        } while (iVar8 < *local_14);
        bVar6 = local_3c._4_1_;
      }
      local_10 = 0;
      if (0 < *(short *)param_2[10]) {
        local_14 = (int *)0x0;
        do {
          piVar3 = local_14;
          iVar8 = param_2[10];
          if (*(int *)((int)local_14 + iVar8 + 0x1c) != 0) {
            local_1c = piVar2[0x81];
            iVar5 = 0;
            for (iVar4 = local_c; iVar4 != 0; iVar4 = *(int *)(iVar4 + 0x10)) {
              iVar5 = iVar5 + *(int *)(iVar4 + 0x14);
            }
            iVar4 = *(int *)((int)local_14 + iVar8 + 0x10);
            if (iVar4 != 0) {
              piVar2[0x81] = iVar4;
            }
            local_34 = FUN_00546470;
            local_30 = FUN_00546ad0;
            local_24 = local_c;
            local_2c = piVar2;
            FUN_00578760(&local_34,*(undefined4 *)((int)local_14 + iVar8 + 0x1c));
            piVar2[0x81] = local_1c;
            if (piVar2[0x11] != 0) {
              return 2;
            }
            iVar4 = local_c;
            if (*(char *)(local_8 + 0x38) != '\0') {
              return 2;
            }
            for (; iVar4 != 0; iVar4 = *(int *)(iVar4 + 0x10)) {
              iVar5 = iVar5 - *(int *)(iVar4 + 0x14);
            }
            puVar1 = (uint *)((int)piVar3 + iVar8 + 0x2c);
            *puVar1 = *puVar1 ^ ((uint)(iVar5 != 0) * 2 ^ *(uint *)((int)piVar3 + iVar8 + 0x2c)) & 2
            ;
          }
          local_10 = local_10 + 1;
          local_14 = local_14 + 0x12;
        } while (local_10 < *(short *)param_2[10]);
        bVar6 = local_3c._4_1_;
      }
      piVar3 = (int *)param_2[0xc];
      if ((piVar3 == (int *)0x0) && ((bVar6 & 2) == 0)) {
        local_3c = CONCAT35(local_3c._5_3_,CONCAT14(bVar6,(undefined4)local_3c)) &
                   0xfffffffeffffffff;
      }
      else {
        *(ushort *)((int)param_2 + 6) = *(ushort *)((int)param_2 + 6) | 4;
      }
      if ((param_2[0xd] != 0) && (piVar3 == (int *)0x0)) {
        pcVar9 = "a GROUP BY clause is required before HAVING";
LAB_00546da7:
        FUN_00553950(piVar2,pcVar9);
        return 2;
      }
      local_4c = CONCAT44(local_4c._4_4_,*param_2);
      iVar8 = FUN_005640a0(&local_54,param_2[0xb]);
      if (iVar8 != 0) {
        return 2;
      }
      iVar8 = FUN_005640a0(&local_54,param_2[0xd]);
      if (iVar8 != 0) {
        return 2;
      }
      local_3c = local_3c | 0x100000000;
      local_44 = local_44 & 0xffffffff00000000;
      if ((local_18 == 0) &&
         (iVar8 = FUN_00546890(&local_54,param_2,param_2[0xe],"ORDER"), iVar8 != 0)) {
        return 2;
      }
      iVar8 = local_8;
      if (*(char *)(local_8 + 0x38) != '\0') {
        return 2;
      }
      if (piVar3 != (int *)0x0) {
        iVar4 = FUN_00546890(&local_54,param_2,piVar3,"GROUP");
        if (iVar4 != 0) {
          return 2;
        }
        if (*(char *)(iVar8 + 0x38) != '\0') {
          return 2;
        }
        piVar7 = (int *)piVar3[2];
        iVar8 = 0;
        if (0 < *piVar3) {
          do {
            if ((*(byte *)(*piVar7 + 2) & 2) != 0) {
              pcVar9 = "aggregate functions are not allowed in the GROUP BY clause";
              goto LAB_00546da7;
            }
            iVar8 = iVar8 + 1;
            piVar7 = piVar7 + 5;
          } while (iVar8 < *piVar3);
        }
      }
      param_2 = (undefined4 *)param_2[0xf];
    } while (param_2 != (undefined4 *)0x0);
    if ((local_18 == 0) || (iVar8 = FUN_005461b0(piVar2,local_20), iVar8 == 0)) {
      return 1;
    }
  }
  return 2;
}


/* FUN_00547860 @ 00547860  kind=gamemisc  attributed-by=role:callback  size=127 */

undefined4 FUN_00547860(int param_1,int param_2)

{
  undefined4 uVar1;
  short *psVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  int iVar7;
  
  if ((*(ushort *)(param_2 + 6) & 0x20) != 0) {
    return 0;
  }
  *(ushort *)(param_2 + 6) = *(ushort *)(param_2 + 6) | 0x20;
  uVar1 = *(undefined4 *)(param_1 + 8);
  psVar2 = *(short **)(param_2 + 0x28);
  iVar7 = 0;
  if (*psVar2 < 1) {
    return 0;
  }
  piVar6 = (int *)(psVar2 + 0xe);
  do {
    iVar3 = piVar6[-1];
    if ((iVar3 != 0) && ((*(byte *)(iVar3 + 0x2a) & 2) != 0)) {
      iVar4 = *piVar6;
      for (iVar5 = *(int *)(*piVar6 + 0x3c); iVar5 != 0; iVar5 = *(int *)(iVar5 + 0x3c)) {
        iVar4 = iVar5;
      }
      FUN_00547720(uVar1,(int)*(short *)(iVar3 + 0x26),*(undefined4 *)(iVar3 + 4),iVar4);
    }
    iVar7 = iVar7 + 1;
    piVar6 = piVar6 + 0x12;
  } while (iVar7 < *psVar2);
  return 0;
}


/* FUN_0054ecc0 @ 0054ecc0  kind=gamemisc  attributed-by=role:callback  size=140 */

int FUN_0054ecc0(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  
  if (*(byte *)(param_1 + 0x5b) < 2) {
    iVar1 = 0;
  }
  else if (*(byte *)(param_1 + 0x5b) == 3) {
    iVar1 = *(int *)(param_1 + 0x54);
  }
  else {
    *(undefined1 *)(param_1 + 0x5b) = 0;
    iVar1 = FUN_0052ec30(param_1,*(undefined4 *)(param_1 + 0x50),*(undefined4 *)(param_1 + 0x48),
                         *(undefined4 *)(param_1 + 0x4c),0,param_1 + 0x54);
    if (iVar1 != 0) {
      return iVar1;
    }
    FUN_00524410(*(undefined4 *)(param_1 + 0x50));
    *(undefined4 *)(param_1 + 0x50) = 0;
    iVar1 = 0;
  }
  if (iVar1 != 0) {
    return iVar1;
  }
  if (*(char *)(param_1 + 0x5b) != '\x01') {
    return 4;
  }
  if (*(char *)(param_1 + 0x58) != '\0') {
    iVar1 = FUN_00528920(param_1,param_2,param_3,param_4,1);
    return iVar1;
  }
  return 8;
}


/* FUN_0055cd50 @ 0055cd50  kind=gamemisc  attributed-by=role:callback  size=220 */

void FUN_0055cd50(int *param_1)

{
  int *piVar1;
  void *_Src;
  int iVar2;
  int iVar3;
  
  _Src = (void *)FUN_00523d10("unable to use function %s in the requested context",
                              *(undefined4 *)(*param_1 + 0x18));
  param_1[0xe] = 1;
  if (_Src == (void *)0x0) {
    if ((*(byte *)(param_1 + 9) & 0x40) != 0) {
      piVar1 = (int *)param_1[6];
      piVar1[1] = *(int *)(*piVar1 + 0xa4);
      *(int **)(*piVar1 + 0xa4) = piVar1;
    }
    if ((*(byte *)(param_1 + 9) & 0x20) != 0) {
      FUN_005644e0(param_1[6]);
    }
    *(ushort *)(param_1 + 9) = *(ushort *)(param_1 + 9) & 0xbe01 | 1;
    *(undefined1 *)((int)param_1 + 0x26) = 5;
    FUN_00524410(0);
    return;
  }
  iVar2 = param_1[2];
  if (iVar2 == 0) {
    iVar2 = 1000000000;
  }
  else {
    iVar2 = *(int *)(iVar2 + 0x50);
  }
  iVar3 = 0;
  if (-1 < iVar2) {
    do {
      if (*(char *)(iVar3 + (int)_Src) == '\0') break;
      iVar3 = iVar3 + 1;
    } while (iVar3 <= iVar2);
  }
  if (iVar3 <= iVar2) {
    iVar2 = FUN_005748c0(param_1 + 2,iVar3 + 1,0);
    if (iVar2 == 0) {
      memcpy((void *)param_1[3],_Src,iVar3 + 1);
      param_1[8] = iVar3;
      param_1[9] = 0x1030202;
    }
  }
  FUN_00524410(_Src);
  return;
}


/* FUN_00577d90 @ 00577d90  kind=gamemisc  attributed-by=role:callback  size=51 */

undefined4 FUN_00577d90(int param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  if (param_1 <= param_4) {
    if (DAT_0076b3bc != (code *)0x0) {
      (*DAT_0076b3bc)();
    }
    FUN_00525d90(param_2,param_3);
    if (DAT_0076b3c0 != (code *)0x0) {
      (*DAT_0076b3c0)();
    }
  }
  return 0;
}


/* FUN_0057a410 @ 0057a410  kind=gamemisc  attributed-by=role:callback  size=99 */

undefined4 FUN_0057a410(int *param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  
  if (param_2 < 0xc) {
    uVar2 = (uint)(byte)(&DAT_007124b0)[param_2];
    uVar1 = (uint)(byte)(&DAT_007124bc)[param_2];
  }
  else {
    uVar2 = 100;
    uVar1 = param_2 * 100 - 0x368;
  }
  if ((param_1[0x77] < (int)(uVar1 + uVar2)) && (uVar2 = param_1[0x77] - uVar1, (int)uVar2 < 1)) {
    return 0;
  }
  (**(code **)(*param_1 + 0x3c))(*param_1,uVar2 * 1000);
  return 1;
}


/* FUN_0066eb80 @ 0066eb80  kind=gamemisc  attributed-by=role:callback  size=101 */

void FUN_0066eb80(void)

{
  char cVar1;
  _StructuredTaskCollection *in_ECX;
  missing_wait local_10 [3];
  
  if (0 < *(int *)(in_ECX + 0x10)) {
    Concurrency::details::_StructuredTaskCollection::_Abort(in_ECX);
    cVar1 = __uncaught_exception();
    if (cVar1 == '\0') {
      if ((*(int *)(in_ECX + 8) != 0) && (*(int *)(in_ECX + 8) != 2)) {
        Concurrency::details::_StructuredTaskCollection::_CleanupToken(in_ECX);
      }
      Concurrency::missing_wait::missing_wait(local_10);
                    /* WARNING: Subroutine does not return */
      _CxxThrowException(local_10,(ThrowInfo *)&DAT_0075f3d8);
    }
  }
  if ((*(int *)(in_ECX + 8) != 0) && (*(int *)(in_ECX + 8) != 2)) {
    Concurrency::details::_StructuredTaskCollection::_CleanupToken(in_ECX);
  }
  return;
}


/* FUN_006751d0 @ 006751d0  kind=gamemisc  attributed-by=role:callback  size=1165 */

void FUN_006751d0(undefined4 param_1,int param_2,float *param_3,int *param_4,int param_5)

{
  uint *puVar1;
  uint *puVar2;
  uint *puVar3;
  float fVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  float *pfVar7;
  uint uVar8;
  undefined4 *puVar9;
  float *pfVar10;
  float *pfVar11;
  int iVar12;
  uint uVar13;
  undefined4 *puVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float local_94;
  float local_90;
  float local_8c;
  float local_88;
  int local_6c;
  float local_68;
  float fStack_64;
  float local_60;
  float fStack_5c;
  float local_58;
  float fStack_54;
  float local_50;
  float fStack_4c;
  float local_48;
  float fStack_44;
  float local_40 [4];
  float local_30 [2];
  float local_28;
  float local_24;
  float local_20;
  float fStack_1c;
  float local_18 [4];
  uint local_8;
  
  local_8 = DAT_0076aa78 ^ (uint)&stack0xfffffffc;
  puVar1 = (uint *)(param_5 + 0x28);
  fVar16 = 0.0;
  puVar2 = (uint *)(param_5 + 0x10);
  puVar3 = (uint *)(param_5 + 4);
  param_2 = param_2 - (int)param_3;
  uVar13 = *puVar3;
  fVar15 = 0.0;
  local_90 = 0.0;
  local_94 = 0.0;
  local_8c = 0.0;
  local_88 = 0.0;
  local_18[0] = 0.0;
  local_18[1] = 0.0;
  local_18[2] = 0.0;
  local_18[3] = 0.0;
  fVar17 = 0.0;
  local_30[1] = 0.0;
  local_6c = 4;
  do {
    iVar12 = *(int *)(param_2 + (int)param_3);
    fVar4 = *param_3;
    uVar5 = *(undefined8 *)(uVar13 + iVar12 * 8);
    fStack_1c = (float)((ulonglong)uVar5 >> 0x20);
    local_20 = (float)uVar5;
    fVar15 = fStack_1c * fVar4 + fVar15;
    fVar16 = fVar16 + local_20 * fVar4;
    uVar5 = *(undefined8 *)(*(int *)(param_5 + 0x1c) + iVar12 * 0x10);
    uVar6 = *(undefined8 *)(*(int *)(param_5 + 0x1c) + 8 + iVar12 * 0x10);
    fStack_4c = (float)((ulonglong)uVar5 >> 0x20);
    local_48 = (float)uVar6;
    local_50 = (float)uVar5;
    fStack_44 = (float)((ulonglong)uVar6 >> 0x20);
    local_94 = fStack_4c * fVar4 + local_94;
    local_90 = local_50 * fVar4 + local_90;
    local_8c = local_48 * fVar4 + local_8c;
    local_88 = fStack_44 * fVar4 + local_88;
    if (*(int *)(param_2 + (int)param_3) < *(int *)(param_5 + 0x2c) - *(int *)(param_5 + 0x28) >> 4)
    {
      uVar5 = *(undefined8 *)(*puVar1 + iVar12 * 0x10);
      uVar6 = *(undefined8 *)(*puVar1 + 8 + iVar12 * 0x10);
      fStack_64 = (float)((ulonglong)uVar5 >> 0x20);
      local_68 = (float)uVar5;
      local_60 = (float)uVar6;
      fStack_5c = (float)((ulonglong)uVar6 >> 0x20);
      local_18[0] = local_68 * fVar4 + local_18[0];
      local_18[1] = fStack_64 * fVar4 + local_18[1];
      local_18[2] = local_60 * fVar4 + local_18[2];
      local_18[3] = fStack_5c * fVar4 + local_18[3];
    }
    uVar5 = *(undefined8 *)(*puVar2 + *(int *)(param_2 + (int)param_3) * 8);
    uVar13 = *puVar3;
    local_58 = (float)uVar5;
    fStack_54 = (float)((ulonglong)uVar5 >> 0x20);
    fVar17 = fVar17 + local_58 * fVar4;
    param_3 = param_3 + 1;
    local_6c = local_6c + -1;
    local_30[1] = local_30[1] + fStack_54 * fVar4;
  } while (local_6c != 0);
  pfVar7 = *(float **)(param_5 + 8);
  _local_20 = CONCAT44(local_30[1],local_20);
  local_40[0] = local_90;
  local_40[1] = local_94;
  local_40[2] = local_8c;
  local_40[3] = local_88;
  local_30[0] = fVar17;
  local_28 = fVar16;
  local_24 = fVar15;
  if (&local_28 < pfVar7) {
    if (&local_28 < (float *)*puVar3) goto LAB_00675482;
    iVar12 = (int)&local_28 - (int)*puVar3 >> 3;
    if (*(int *)(param_5 + 8) == *(int *)(param_5 + 0xc)) {
      FUN_00428c80(1);
    }
    uVar8 = *puVar3;
    puVar9 = *(undefined4 **)(param_5 + 8);
    if (puVar9 != (undefined4 *)0x0) {
      *puVar9 = *(undefined4 *)(uVar8 + iVar12 * 8);
      puVar9[1] = *(undefined4 *)(uVar8 + 4 + iVar12 * 8);
    }
  }
  else {
LAB_00675482:
    if (pfVar7 == *(float **)(param_5 + 0xc)) {
      FUN_00428c80(1);
    }
    pfVar10 = *(float **)(param_5 + 8);
    if (pfVar10 != (float *)0x0) {
      *pfVar10 = fVar16;
      pfVar10[1] = fVar15;
    }
  }
  *(int *)(param_5 + 8) = *(int *)(param_5 + 8) + 8;
  pfVar10 = *(float **)(param_5 + 0x20);
  if (local_40 < pfVar10) {
    pfVar11 = *(float **)(param_5 + 0x1c);
    if (local_40 < pfVar11) goto LAB_006754f9;
    if (pfVar10 == *(float **)(param_5 + 0x24)) {
      FUN_00428d00(1);
    }
    puVar9 = *(undefined4 **)(param_5 + 0x20);
    puVar14 = (undefined4 *)
              (((int)local_40 - (int)pfVar11 & 0xfffffff0U) + *(uint *)(param_5 + 0x1c));
    if (puVar9 != (undefined4 *)0x0) {
      *puVar9 = *puVar14;
      puVar9[1] = puVar14[1];
      puVar9[2] = puVar14[2];
      puVar9[3] = puVar14[3];
    }
  }
  else {
LAB_006754f9:
    if (pfVar10 == *(float **)(param_5 + 0x24)) {
      FUN_00428d00(1);
    }
    pfVar10 = *(float **)(param_5 + 0x20);
    if (pfVar10 != (float *)0x0) {
      *pfVar10 = local_90;
      pfVar10[1] = local_94;
      pfVar10[2] = local_8c;
      pfVar10[3] = local_88;
    }
  }
  *(int *)(param_5 + 0x20) = *(int *)(param_5 + 0x20) + 0x10;
  pfVar10 = *(float **)(param_5 + 0x2c);
  pfVar11 = (float *)*puVar1;
  if (pfVar11 != pfVar10) {
    if ((local_18 < pfVar10) && (pfVar11 <= local_18)) {
      if (pfVar10 == *(float **)(param_5 + 0x30)) {
        FUN_00428d00(1);
      }
      puVar9 = *(undefined4 **)(param_5 + 0x2c);
      puVar14 = (undefined4 *)(((int)local_18 - (int)pfVar11 & 0xfffffff0U) + *puVar1);
      if (puVar9 != (undefined4 *)0x0) {
        *puVar9 = *puVar14;
        puVar9[1] = puVar14[1];
        puVar9[2] = puVar14[2];
        puVar9[3] = puVar14[3];
      }
    }
    else {
      if (pfVar10 == *(float **)(param_5 + 0x30)) {
        FUN_00428d00(1);
      }
      pfVar10 = *(float **)(param_5 + 0x2c);
      if (pfVar10 != (float *)0x0) {
        *pfVar10 = local_18[0];
        pfVar10[1] = local_18[1];
        pfVar10[2] = local_18[2];
        pfVar10[3] = local_18[3];
      }
    }
    *(int *)(param_5 + 0x2c) = *(int *)(param_5 + 0x2c) + 0x10;
  }
  pfVar10 = *(float **)(param_5 + 0x14);
  if (local_30 < pfVar10) {
    if ((float *)*puVar2 <= local_30) {
      iVar12 = (int)local_30 - (int)*puVar2 >> 3;
      if (pfVar10 == *(float **)(param_5 + 0x18)) {
        FUN_00428c80(1);
      }
      puVar9 = *(undefined4 **)(param_5 + 0x14);
      uVar8 = *puVar2;
      if (puVar9 != (undefined4 *)0x0) {
        *puVar9 = *(undefined4 *)(uVar8 + iVar12 * 8);
        puVar9[1] = *(undefined4 *)(uVar8 + 4 + iVar12 * 8);
      }
      goto LAB_0067563b;
    }
  }
  if (pfVar10 == *(float **)(param_5 + 0x18)) {
    FUN_00428c80(1);
  }
  pfVar10 = *(float **)(param_5 + 0x14);
  if (pfVar10 != (float *)0x0) {
    *pfVar10 = fVar17;
    pfVar10[1] = fStack_1c;
  }
LAB_0067563b:
  *(int *)(param_5 + 0x14) = *(int *)(param_5 + 0x14) + 8;
  *param_4 = (int)((int)pfVar7 - uVar13) >> 3;
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


/* FUN_006937b0 @ 006937b0  kind=gamemisc  attributed-by=role:callback  size=127 */

undefined4 *
FUN_006937b0(undefined4 *param_1,undefined4 param_2,char *param_3,undefined4 *param_4,
            undefined4 *param_5)

{
  char cVar1;
  char *_Src;
  char *pcVar2;
  size_t _Size;
  void *_Dst;
  
  _Src = param_3;
  pcVar2 = param_3;
  do {
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  _Size = (int)pcVar2 - (int)(param_3 + 1);
  if (0x7fffffff < (int)(_Size + 6)) {
    return (undefined4 *)0xa;
  }
  _Dst = (void *)FUN_00692230(*param_1,_Size + 6,&param_1);
  if (param_1 == (undefined4 *)0x0) {
    memcpy(_Dst,_Src,_Size);
    *(undefined4 *)((int)_Dst + _Size) = 0x7273722f;
    *(undefined2 *)((int)_Dst + _Size + 4) = 99;
    *param_4 = _Dst;
    *param_5 = 0;
    param_1 = (undefined4 *)0x0;
  }
  return param_1;
}


/* FUN_00693840 @ 00693840  kind=gamemisc  attributed-by=role:callback  size=156 */

undefined4 *
FUN_00693840(undefined4 *param_1,undefined4 param_2,char *param_3,undefined4 *param_4,
            undefined4 *param_5)

{
  char cVar1;
  char *_Src;
  char *pcVar2;
  size_t _Size;
  void *_Dst;
  
  _Src = param_3;
  pcVar2 = param_3;
  do {
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  _Size = (int)pcVar2 - (int)(param_3 + 1);
  if (0x7fffffff < (int)(_Size + 0x12)) {
    return (undefined4 *)0xa;
  }
  _Dst = (void *)FUN_00692230(*param_1,_Size + 0x12,&param_1);
  if (param_1 == (undefined4 *)0x0) {
    memcpy(_Dst,_Src,_Size);
    builtin_strncpy((char *)((int)_Dst + _Size),"/..n",4);
    builtin_strncpy((char *)((int)_Dst + _Size + 4),"amed",4);
    builtin_strncpy((char *)((int)_Dst + _Size + 8),"fork",4);
    builtin_strncpy((char *)((int)_Dst + _Size + 0xc),"/rsr",4);
    *(undefined2 *)((int)_Dst + _Size + 0x10) = 99;
    *param_4 = _Dst;
    *param_5 = 0;
    param_1 = (undefined4 *)0x0;
  }
  return param_1;
}


/* FUN_006998b0 @ 006998b0  kind=gamemisc  attributed-by=role:callback  size=1752 */

void __cdecl
FUN_006998b0(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 *param_4,uint *param_5)

{
  ushort uVar1;
  int *piVar2;
  undefined2 uVar3;
  uint uVar4;
  undefined4 uVar5;
  uint uVar6;
  int *piVar7;
  void *_Src;
  int iVar8;
  ushort uVar9;
  int *piVar10;
  ushort uVar11;
  char *pcVar12;
  int *piVar13;
  size_t _Size;
  int local_90;
  uint local_8c;
  undefined4 *local_88;
  char local_84 [128];
  uint local_4;
  
  local_4 = DAT_0076aa78 ^ (uint)&local_90;
  uVar6 = param_5[8];
  local_88 = param_4;
  local_8c = 0;
  local_90 = 0;
  if (uVar6 != 0) {
    local_8c = *(uint *)(uVar6 + 0x4088);
  }
  if ((((*param_1 == 0x4d4d4f43) && ((char)param_1[1] == 'E')) &&
      (*(char *)((int)param_1 + 5) == 'N')) && (*(char *)((int)param_1 + 6) == 'T')) {
    if ((*(int *)(param_5[9] + 8) != 0) && (uVar6 != 0)) {
      piVar10 = (int *)((int)param_1 + 7);
      if (*(char *)piVar10 != '\0') {
        piVar10 = param_1 + 2;
      }
      FUN_00697e30(piVar10);
      __security_check_cookie(local_4 ^ (uint)&local_90);
      return;
    }
    goto LAB_00699f70;
  }
  if ((*param_5 & 1) == 0) {
    uVar6 = param_5[0x80e];
    uVar4 = 9;
    pcVar12 = "STARTFONT";
    do {
      if (*param_1 != *(int *)pcVar12) goto LAB_00699f70;
      uVar4 = uVar4 - 4;
      pcVar12 = (char *)((int)pcVar12 + 4);
      param_1 = param_1 + 1;
    } while (3 < uVar4);
    if ((char)*(int *)pcVar12 == (char)*param_1) {
      *param_5 = 1;
      param_5[8] = 0;
      uVar4 = FUN_00692230(uVar6,0x40a4,&local_90);
      if (local_90 == 0) {
        param_5[8] = uVar4;
        *(uint *)(uVar4 + 0x4088) = param_5[0x80e];
        local_88 = (undefined4 *)(uVar4 + 0x4094);
        param_5[0x80e] = 0;
        local_90 = FUN_00697310();
        if (local_90 == 0) {
          uVar4 = 0;
          do {
            local_90 = 0;
            local_90 = FUN_006973a0(uVar4,uVar6);
            if (local_90 != 0) goto LAB_00699f70;
            uVar4 = uVar4 + 1;
          } while (uVar4 < 0x53);
          uVar5 = FUN_00692230(uVar6,0x10,&local_90);
          *(undefined4 *)(param_5[8] + 0x80) = uVar5;
          if ((local_90 == 0) && (local_90 = FUN_00697310(), local_90 == 0)) {
            *(undefined4 *)(param_5[8] + 0x1c) = *(undefined4 *)(param_5[9] + 0xc);
            *(undefined4 *)(param_5[8] + 0x24) = 0xffffffff;
          }
        }
      }
    }
    goto LAB_00699f70;
  }
  uVar4 = 0xf;
  piVar10 = (int *)"STARTPROPERTIES";
  piVar2 = param_1;
  do {
    piVar13 = piVar2;
    piVar7 = piVar10;
    if (*piVar13 != *piVar7) goto LAB_00699b7a;
    uVar4 = uVar4 - 4;
    piVar10 = piVar7 + 1;
    piVar2 = piVar13 + 1;
  } while (3 < uVar4);
  if ((((char)piVar7[1] == (char)piVar13[1]) &&
      (*(char *)((int)piVar7 + 5) == *(char *)((int)piVar13 + 5))) &&
     (*(char *)((int)piVar7 + 6) == *(char *)((int)piVar13 + 6))) {
    if (((*param_5 & 8) != 0) && (local_90 = FUN_006975c0(param_1,param_2), local_90 == 0)) {
      uVar6 = FUN_00697a40(0);
      *(uint *)(param_5[8] + 0x48) = uVar6;
      param_5[1] = uVar6;
      uVar5 = FUN_00693a60(local_8c,0x10,0,uVar6,0,&local_90);
      *(undefined4 *)(param_5[8] + 0x50) = uVar5;
      if (local_90 == 0) {
        *param_5 = *param_5 | 0x10;
        *local_88 = &LAB_00699670;
      }
    }
    goto LAB_00699f70;
  }
LAB_00699b7a:
  uVar4 = 0xf;
  piVar10 = (int *)"FONTBOUNDINGBOX";
  piVar2 = param_1;
  do {
    piVar13 = piVar2;
    piVar7 = piVar10;
    if (*piVar13 != *piVar7) goto LAB_00699c94;
    uVar4 = uVar4 - 4;
    piVar10 = piVar7 + 1;
    piVar2 = piVar13 + 1;
  } while (3 < uVar4);
  if ((((char)piVar7[1] == (char)piVar13[1]) &&
      (*(char *)((int)piVar7 + 5) == *(char *)((int)piVar13 + 5))) &&
     (*(char *)((int)piVar7 + 6) == *(char *)((int)piVar13 + 6))) {
    if (((*param_5 & 4) != 0) && (local_90 = FUN_006975c0(param_1,param_2), local_90 == 0)) {
      uVar3 = FUN_00697be0(0);
      *(undefined2 *)(param_5[8] + 4) = uVar3;
      uVar3 = FUN_00697be0(0);
      *(undefined2 *)(param_5[8] + 6) = uVar3;
      uVar3 = FUN_00697be0(0);
      *(undefined2 *)(param_5[8] + 8) = uVar3;
      uVar3 = FUN_00697be0(0);
      *(undefined2 *)(param_5[8] + 10) = uVar3;
      uVar6 = param_5[8];
      *(short *)(uVar6 + 0xc) = *(short *)(uVar6 + 10) + *(short *)(uVar6 + 6);
      *(short *)(param_5[8] + 0xe) = -*(short *)(param_5[8] + 10);
      *param_5 = *param_5 | 8;
    }
    goto LAB_00699f70;
  }
LAB_00699c94:
  iVar8 = *param_1;
  if (iVar8 == 0x544e4f46) {
    local_90 = FUN_006975c0(param_1,param_2);
    if (local_90 == 0) {
      FUN_00697500();
      _Src = (void *)FUN_00697540(param_5 + 0x80a,0x20,&local_88);
      uVar6 = local_8c;
      if (_Src != (void *)0x0) {
        FUN_00691290(local_8c,*(undefined4 *)param_5[8]);
        _Size = (int)local_88 + 1;
        *(undefined4 *)param_5[8] = 0;
        uVar5 = FUN_00693a60(uVar6,1,0,_Size,0,&local_90);
        *(undefined4 *)param_5[8] = uVar5;
        if (local_90 == 0) {
          memcpy(*(void **)param_5[8],_Src,_Size);
          iVar8 = FUN_00697ea0(param_5[9]);
          if (iVar8 == 0) {
            *param_5 = *param_5 | 2;
          }
        }
      }
    }
    goto LAB_00699f70;
  }
  if (iVar8 != 0x455a4953) {
    if (((iVar8 == 0x52414843) && ((char)param_1[1] == 'S')) && ((*param_5 & 8) != 0)) {
      *(int *)(uVar6 + 0x28) = (int)*(short *)(uVar6 + 0xc);
      sprintf(local_84,"%hd",(int)*(short *)(param_5[8] + 0xc));
      local_90 = FUN_00698130("FONT_ASCENT",local_84);
      if (local_90 == 0) {
        *(int *)(param_5[8] + 0x2c) = (int)*(short *)(param_5[8] + 0xe);
        sprintf(local_84,"%hd",(int)*(short *)(param_5[8] + 0xe));
        iVar8 = FUN_00698130("FONT_DESCENT",local_84);
        if (iVar8 == 0) {
          *(undefined2 *)(param_5[8] + 0x4084) = 1;
          *local_88 = FUN_00698500;
        }
      }
    }
    goto LAB_00699f70;
  }
  if (((*param_5 & 2) == 0) || (local_90 = FUN_006975c0(param_1,param_2), local_90 != 0))
  goto LAB_00699f70;
  uVar5 = FUN_00697a40(0);
  *(undefined4 *)(param_5[8] + 0x10) = uVar5;
  uVar5 = FUN_00697a40(0);
  *(undefined4 *)(param_5[8] + 0x14) = uVar5;
  uVar5 = FUN_00697a40(0);
  *(undefined4 *)(param_5[8] + 0x18) = uVar5;
  if (param_5[0x80c] == 5) {
    uVar3 = FUN_00697be0(0);
    *(undefined2 *)(param_5[8] + 0x4086) = uVar3;
    uVar1 = *(ushort *)(param_5[8] + 0x4086);
    local_8c = (uint)uVar1;
    uVar9 = 0;
    uVar11 = 0;
    if (uVar1 == 0) {
LAB_00699e67:
      local_8c = (uint)(ushort)(1 << ((byte)uVar9 & 0x1f));
    }
    else {
      do {
        if ((local_8c & 1) != 0) {
          uVar9 = uVar11;
        }
        local_8c = local_8c >> 1;
        uVar11 = uVar11 + 1;
      } while ((short)local_8c != 0);
      if (uVar9 < 4) goto LAB_00699e67;
      local_8c = 8;
    }
    uVar9 = (ushort)local_8c;
    if ((uVar9 < uVar1) || (uVar1 != uVar9)) {
      *(ushort *)(param_5[8] + 0x4086) = uVar9 * 2;
      *param_5 = *param_5 | 4;
      goto LAB_00699f70;
    }
  }
  else {
    *(undefined2 *)(param_5[8] + 0x4086) = 1;
  }
  *param_5 = *param_5 | 4;
LAB_00699f70:
  __security_check_cookie(local_4 ^ (uint)&local_90);
  return;
}


/* FUN_006a6100 @ 006a6100  kind=gamemisc  attributed-by=role:callback  size=228 */

void FUN_006a6100(undefined4 *param_1,uint param_2,undefined4 *param_3)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 local_1c;
  undefined4 *local_18;
  undefined4 *local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  uint local_4;
  
  local_4 = DAT_0076aa78 ^ (uint)&local_1c;
  local_14 = param_1;
  if (param_1[1] == 0) {
    local_1c = *param_1;
    if (((int)param_2 < 0) || (1 < (int)param_2)) {
      param_2 = (uint)(param_2 != 0);
    }
    local_18 = param_1 + param_2 * 9 + 4;
    if (param_1[3] == 1) {
      iVar3 = 0;
      puVar2 = &local_10;
      do {
        FUN_0068e970(param_3[1],local_1c,puVar2);
        iVar1 = FUN_0068e970(*param_3);
        iVar1 = FUN_006a5e90(iVar1 >> 0x10);
        if (iVar1 != 0) goto LAB_006a61c7;
        iVar3 = iVar3 + 1;
        puVar2 = puVar2 + 1;
        param_3 = param_3 + 2;
      } while (iVar3 < 3);
      iVar1 = FUN_006a5f50(local_10,local_c,local_8,local_1c);
      if (iVar1 == 0) goto LAB_006a61cd;
    }
    else {
      iVar1 = 6;
    }
LAB_006a61c7:
    local_14[1] = iVar1;
  }
LAB_006a61cd:
  __security_check_cookie(local_4 ^ (uint)&local_1c);
  return;
}


/* FUN_006a61f0 @ 006a61f0  kind=gamemisc  attributed-by=role:callback  size=83 */

void FUN_006a61f0(undefined4 *param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  if (param_1[1] == 0) {
    uVar1 = *param_1;
    if (param_1[3] == 1) {
      iVar2 = FUN_006a5e40(uVar1);
      if (iVar2 == 0) {
        iVar2 = FUN_006a5e40(uVar1);
        if (iVar2 == 0) {
          return;
        }
        param_1[1] = iVar2;
        return;
      }
    }
    else {
      iVar2 = 6;
    }
    param_1[1] = iVar2;
  }
  return;
}


/* FUN_006a6250 @ 006a6250  kind=gamemisc  attributed-by=role:callback  size=100 */

void FUN_006a6250(int param_1,undefined4 param_2,int param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  
  if (*(int *)(param_1 + 4) == 0) {
    iVar1 = *(int *)(param_1 + 0x34);
    if ((param_3 == iVar1 + *(int *)(param_1 + 0x10)) &&
       ((iVar2 = FUN_006a5e60(param_4,iVar1,*(int *)(param_1 + 0x10)), iVar2 != 0 ||
        (iVar2 = FUN_006a5e60(param_4,0,iVar1), iVar2 != 0)))) {
      *(int *)(param_1 + 4) = iVar2;
    }
  }
  return;
}


/* FUN_006a9ed0 @ 006a9ed0  kind=gamemisc  attributed-by=role:callback  size=37 */

int FUN_006a9ed0(int *param_1,int *param_2)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = *param_1 << 0x10 | param_1[1];
  uVar2 = *param_2 << 0x10 | param_2[1];
  if (uVar2 < uVar1) {
    return 1;
  }
  return -(uint)(uVar1 < uVar2);
}


/* FUN_006be910 @ 006be910  kind=gamemisc  attributed-by=role:callback  size=119 */

int FUN_006be910(char *param_1,uint param_2,int param_3)

{
  char cVar1;
  char *_Str1;
  char *pcVar2;
  int iVar3;
  int iVar4;
  
  if (0xffff < param_2) {
    return 0;
  }
  iVar4 = 0;
  if (0 < *(int *)(param_3 + 0x11c)) {
    do {
      _Str1 = *(char **)(*(int *)(param_3 + 0x120) + iVar4 * 4);
      if ((_Str1 != (char *)0x0) && (*_Str1 == *param_1)) {
        pcVar2 = _Str1;
        do {
          cVar1 = *pcVar2;
          pcVar2 = pcVar2 + 1;
        } while (cVar1 != '\0');
        if ((int)pcVar2 - (int)(_Str1 + 1) == param_2) {
          iVar3 = strncmp(_Str1,param_1,param_2);
          if (iVar3 == 0) {
            return iVar4;
          }
        }
      }
      iVar4 = iVar4 + 1;
    } while (iVar4 < *(int *)(param_3 + 0x11c));
  }
  return 0;
}


/* FUN_006bfc40 @ 006bfc40  kind=gamemisc  attributed-by=role:callback  size=994 */

int FUN_006bfc40(int *param_1)

{
  short *psVar1;
  int *piVar2;
  byte bVar3;
  byte *pbVar4;
  int iVar5;
  undefined1 *puVar6;
  bool bVar7;
  int iVar8;
  short sVar9;
  int iVar10;
  short *psVar11;
  uint uVar12;
  uint uVar13;
  short sVar14;
  int *piVar15;
  uint uVar16;
  byte *pbVar17;
  byte *pbVar18;
  byte *pbVar19;
  byte *pbVar20;
  int iVar21;
  byte *pbVar22;
  byte *pbVar23;
  int local_18;
  byte *local_14;
  byte *local_10;
  int local_c;
  
  pbVar4 = (byte *)param_1[0x33];
  local_c = *param_1;
  iVar5 = param_1[3];
  puVar6 = (undefined1 *)param_1[0x32];
  iVar8 = param_1[8];
  iVar21 = (int)(short)iVar8;
  if (((iVar21 == 0) ||
      ((uint)((int)*(short *)(iVar5 + 0x14) + *(short *)(iVar5 + 0x38) + iVar21) <=
       *(uint *)(iVar5 + 8))) || (iVar10 = FUN_00693c40(iVar5,0,iVar21), iVar10 == 0)) {
    psVar11 = *(short **)(iVar5 + 0x44);
    psVar1 = psVar11 + iVar21;
    if ((iVar21 < 0xfff) && (puVar6 + iVar21 * 2 + 2 <= pbVar4)) {
      sVar14 = CONCAT11(*puVar6,puVar6[1]);
      if (0 < iVar21) {
        *psVar11 = sVar14;
      }
      while( true ) {
        psVar11 = psVar11 + 1;
        puVar6 = puVar6 + 2;
        if (psVar1 <= psVar11) break;
        sVar9 = CONCAT11(*puVar6,puVar6[1]);
        *psVar11 = sVar9;
        bVar7 = sVar9 <= sVar14;
        sVar14 = sVar9;
        if (bVar7) {
          return 8;
        }
      }
      local_18 = 0;
      if ((iVar21 < 1) || (local_18 = psVar11[-1] + 1, -1 < local_18)) {
        if ((local_18 + 4 != 0) &&
           ((*(uint *)(iVar5 + 4) <
             (uint)(*(short *)(iVar5 + 0x16) + 4 + *(short *)(iVar5 + 0x3a) + local_18) &&
            (iVar21 = FUN_00693c40(iVar5,local_18 + 4,0), iVar21 != 0)))) {
          return iVar21;
        }
        for (psVar11 = (short *)(*(int *)(iVar5 + 0x44) + 2); psVar11 < psVar1;
            psVar11 = psVar11 + 1) {
          if (*psVar11 <= psVar11[-1]) goto LAB_006c001e;
        }
        *(undefined4 *)(param_1[2] + 0x8c) = 0;
        *(undefined4 *)(param_1[2] + 0x88) = 0;
        pbVar19 = puVar6 + 2;
        if (pbVar19 <= pbVar4) {
          uVar12 = (uint)CONCAT11(*puVar6,puVar6[1]);
          if ((*(ushort *)(local_c + 0x11e) < CONCAT11(*puVar6,puVar6[1])) ||
             ((int)pbVar4 - (int)pbVar19 < (int)uVar12)) {
            return 0x16;
          }
          if ((*(byte *)(param_1 + 4) & 2) == 0) {
            *(uint *)(param_1[2] + 0x8c) = uVar12;
            *(undefined4 *)(param_1[2] + 0x88) = *(undefined4 *)(param_1[0x28] + 0x188);
            memcpy(*(void **)(param_1[0x28] + 0x188),pbVar19,uVar12);
          }
          pbVar19 = pbVar19 + uVar12;
          pbVar22 = *(byte **)(iVar5 + 0x40);
          pbVar23 = pbVar22 + local_18;
          if (pbVar22 < pbVar23) {
            pbVar17 = pbVar19 + 1;
            pbVar20 = pbVar19;
            do {
              if (pbVar4 < pbVar17) goto LAB_006c001e;
              bVar3 = *pbVar20;
              *pbVar22 = bVar3;
              pbVar22 = pbVar22 + 1;
              pbVar19 = pbVar20 + 1;
              pbVar18 = pbVar17 + 1;
              local_c = CONCAT31(local_c._1_3_,bVar3);
              if ((bVar3 & 8) != 0) {
                if (pbVar4 < pbVar18) goto LAB_006c001e;
                bVar3 = *pbVar19;
                uVar12 = (uint)bVar3;
                pbVar19 = pbVar20 + 2;
                pbVar18 = pbVar17 + 2;
                if (pbVar23 < pbVar22 + uVar12) goto LAB_006c001e;
                if (bVar3 != 0) {
                  memset(pbVar22,local_c,uVar12);
                  pbVar22 = pbVar22 + uVar12;
                }
              }
              pbVar17 = pbVar18;
              pbVar20 = pbVar19;
            } while (pbVar22 < pbVar23);
          }
          piVar15 = *(int **)(iVar5 + 0x3c);
          pbVar23 = *(byte **)(iVar5 + 0x40);
          piVar2 = piVar15 + local_18 * 2;
          iVar21 = 0;
          if (pbVar19 <= pbVar4) {
            if (piVar15 < piVar2) {
              local_10 = pbVar19 + 2;
              local_14 = pbVar19 + 1;
              pbVar22 = pbVar19;
              do {
                bVar3 = *pbVar23;
                uVar12 = 0;
                if ((bVar3 & 2) == 0) {
                  pbVar19 = pbVar22;
                  if ((bVar3 & 0x10) == 0) {
                    if (pbVar4 < local_10) goto LAB_006c001e;
                    local_14 = local_14 + 2;
                    local_10 = local_10 + 2;
                    pbVar19 = pbVar22 + 2;
                    uVar12 = (int)(short)((short)(char)*pbVar22 << 8) | (uint)pbVar22[1];
                  }
                }
                else {
                  if (pbVar4 < local_14) goto LAB_006c001e;
                  uVar12 = (uint)*pbVar22;
                  local_14 = local_14 + 1;
                  local_10 = local_10 + 1;
                  pbVar19 = pbVar22 + 1;
                  if ((bVar3 & 0x10) == 0) {
                    uVar12 = -uVar12;
                  }
                }
                iVar21 = iVar21 + uVar12;
                *piVar15 = iVar21;
                *pbVar23 = bVar3 & 0xed;
                piVar15 = piVar15 + 2;
                pbVar23 = pbVar23 + 1;
                pbVar22 = pbVar19;
              } while (piVar15 < piVar2);
            }
            uVar16 = *(uint *)(iVar5 + 0x3c);
            pbVar23 = *(byte **)(iVar5 + 0x40);
            uVar12 = uVar16 + local_18 * 8;
            iVar21 = 0;
            if (uVar16 < uVar12) {
              local_14 = pbVar19 + 2;
              local_10 = pbVar19 + 1;
              pbVar22 = pbVar19;
              do {
                bVar3 = *pbVar23;
                uVar13 = 0;
                if ((bVar3 & 4) == 0) {
                  pbVar19 = pbVar22;
                  if ((bVar3 & 0x20) == 0) {
                    if (pbVar4 < local_14) goto LAB_006c001e;
                    local_10 = local_10 + 2;
                    local_14 = local_14 + 2;
                    pbVar19 = pbVar22 + 2;
                    uVar13 = (int)(short)((short)(char)*pbVar22 << 8) | (uint)pbVar22[1];
                  }
                }
                else {
                  if (pbVar4 < local_10) goto LAB_006c001e;
                  uVar13 = (uint)*pbVar22;
                  local_10 = local_10 + 1;
                  local_14 = local_14 + 1;
                  pbVar19 = pbVar22 + 1;
                  if ((bVar3 & 0x20) == 0) {
                    uVar13 = -uVar13;
                  }
                }
                iVar21 = iVar21 + uVar13;
                *(int *)(uVar16 + 4) = iVar21;
                *pbVar23 = bVar3 & 1;
                uVar16 = uVar16 + 8;
                pbVar23 = pbVar23 + 1;
                pbVar22 = pbVar19;
              } while (uVar16 < uVar12);
            }
            *(short *)(iVar5 + 0x38) = (short)iVar8;
            *(undefined2 *)(iVar5 + 0x3a) = (undefined2)local_18;
            param_1[0x32] = (int)pbVar19;
            return 0;
          }
        }
      }
    }
LAB_006c001e:
    iVar10 = 0x14;
  }
  return iVar10;
}


/* FUN_006c0030 @ 006c0030  kind=gamemisc  attributed-by=role:callback  size=586 */

int FUN_006c0030(int param_1)

{
  char cVar1;
  ushort uVar2;
  char *pcVar3;
  int iVar4;
  int iVar5;
  uint *puVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  char *pcVar10;
  char *pcVar11;
  char *pcVar12;
  uint uVar13;
  int local_20;
  uint local_18;
  ushort local_c;
  
  pcVar3 = *(char **)(param_1 + 0xcc);
  pcVar12 = *(char **)(param_1 + 200);
  iVar7 = *(int *)(param_1 + 0xc);
  iVar4 = 0;
  local_20 = 0;
  pcVar10 = pcVar12 + 4;
  do {
    iVar4 = iVar4 + 1;
    iVar5 = FUN_00693db0(iVar7,iVar4);
    if (iVar5 != 0) {
      return iVar5;
    }
    if (pcVar3 < pcVar10) {
      return 0x15;
    }
    puVar6 = (uint *)(*(int *)(iVar7 + 0x58) + local_20);
    pcVar11 = pcVar12 + 4;
    puVar6[3] = 0;
    puVar6[2] = 0;
    *(ushort *)(puVar6 + 1) = CONCAT11(*pcVar12,pcVar12[1]);
    *puVar6 = (uint)CONCAT11(pcVar12[2],pcVar12[3]);
    uVar2 = (ushort)puVar6[1];
    iVar5 = 2;
    if ((uVar2 & 1) != 0) {
      iVar5 = 4;
    }
    local_c = uVar2 & 8;
    if ((uVar2 & 8) == 0) {
      if ((uVar2 & 0x40) == 0) {
        if ((char)uVar2 < '\0') {
          iVar5 = iVar5 + 8;
        }
      }
      else {
        iVar5 = iVar5 + 4;
      }
    }
    else {
      iVar5 = iVar5 + 2;
    }
    if (pcVar3 < pcVar11 + iVar5) {
      return 0x15;
    }
    if ((uVar2 & 1) == 0) {
      puVar6[2] = (int)*pcVar11;
      pcVar11 = pcVar12 + 5;
      pcVar12 = pcVar12 + 6;
      puVar6[3] = (int)*pcVar11;
      pcVar10 = pcVar10 + 6;
    }
    else {
      puVar6[2] = (int)(short)((short)*pcVar11 << 8) | (uint)(byte)pcVar12[5];
      pcVar10 = pcVar10 + 8;
      puVar6[3] = (int)(short)((short)pcVar12[6] << 8) | (uint)(byte)pcVar12[7];
      pcVar12 = pcVar12 + 8;
    }
    uVar9 = 0;
    uVar13 = 0x10000;
    uVar8 = 0x10000;
    local_18 = 0;
    if (local_c == 0) {
      if ((uVar2 & 0x40) == 0) {
        if (-1 < (char)uVar2) goto LAB_006c0208;
        uVar8 = (int)(short)((short)*pcVar12 << 8) | (uint)(byte)pcVar12[1];
        local_18 = ((int)(short)((short)pcVar12[4] << 8) | (uint)(byte)pcVar12[5]) * 4;
        pcVar11 = pcVar12 + 8;
        uVar9 = ((int)(short)((short)pcVar12[2] << 8) | (uint)(byte)pcVar12[3]) * 4;
        cVar1 = pcVar12[6];
        pcVar10 = pcVar10 + 8;
      }
      else {
        pcVar11 = pcVar12 + 4;
        uVar8 = (int)(short)((short)*pcVar12 << 8) | (uint)(byte)pcVar12[1];
        cVar1 = pcVar12[2];
        pcVar10 = pcVar10 + 4;
      }
      uVar8 = uVar8 * 4;
      uVar13 = ((int)(short)((short)cVar1 << 8) | (uint)(byte)pcVar11[-1]) * 4;
      pcVar12 = pcVar11;
    }
    else {
      pcVar10 = pcVar10 + 2;
      uVar8 = ((int)(short)((short)*pcVar12 << 8) | (uint)(byte)pcVar12[1]) * 4;
      pcVar12 = pcVar12 + 2;
      uVar13 = uVar8;
    }
LAB_006c0208:
    puVar6[4] = uVar8;
    puVar6[5] = local_18;
    local_20 = local_20 + 0x20;
    puVar6[6] = uVar9;
    puVar6[7] = uVar13;
    if ((uVar2 & 0x20) == 0) {
      *(int *)(iVar7 + 0x54) = iVar4;
      iVar7 = FUN_00690930(*(undefined4 *)(param_1 + 0x18));
      *(char **)(param_1 + 0xa8) = pcVar12 + (iVar7 - (int)pcVar3);
      *(char **)(param_1 + 200) = pcVar12;
      return 0;
    }
  } while( true );
}


/* FUN_006c13f0 @ 006c13f0  kind=gamemisc  attributed-by=role:callback  size=130 */

void FUN_006c13f0(int param_1,int param_2,ushort param_3,undefined4 param_4)

{
  int *piVar1;
  byte *pbVar2;
  int iVar3;
  
  if (*(short *)(param_1 + 0x12a) != 0) {
    piVar1 = (int *)(*(int *)(param_2 + 0x10) + (uint)param_3 * 8);
    iVar3 = FUN_0068ea60(param_4,(int)*(short *)(param_1 + 0x12a) << 0x10,
                         *(undefined4 *)(param_1 + 0x234));
    *piVar1 = *piVar1 + iVar3;
    pbVar2 = (byte *)((uint)param_3 + *(int *)(param_2 + 0x18));
    *pbVar2 = *pbVar2 | 8;
  }
  if (*(short *)(param_1 + 300) != 0) {
    piVar1 = (int *)(*(int *)(param_2 + 0x10) + 4 + (uint)param_3 * 8);
    iVar3 = FUN_0068ea60(param_4,(int)*(short *)(param_1 + 300) << 0x10,
                         *(undefined4 *)(param_1 + 0x234));
    *piVar1 = *piVar1 + iVar3;
    pbVar2 = (byte *)(*(int *)(param_2 + 0x18) + (uint)param_3);
    *pbVar2 = *pbVar2 | 0x10;
  }
  return;
}


/* FUN_006c1480 @ 006c1480  kind=gamemisc  attributed-by=role:callback  size=115 */

void FUN_006c1480(int param_1,int param_2,ushort param_3,undefined4 param_4)

{
  int *piVar1;
  int iVar2;
  
  if (*(short *)(param_1 + 0x12a) != 0) {
    piVar1 = (int *)(*(int *)(param_2 + 0xc) + (uint)param_3 * 8);
    iVar2 = FUN_0068ea60(param_4,(int)*(short *)(param_1 + 0x12a) << 0x10,
                         *(undefined4 *)(param_1 + 0x234));
    *piVar1 = *piVar1 + iVar2;
  }
  if (*(short *)(param_1 + 300) != 0) {
    piVar1 = (int *)(*(int *)(param_2 + 0xc) + 4 + (uint)param_3 * 8);
    iVar2 = FUN_0068ea60(param_4,(int)*(short *)(param_1 + 300) << 0x10,
                         *(undefined4 *)(param_1 + 0x234));
    *piVar1 = *piVar1 + iVar2;
  }
  return;
}


/* FUN_006cef50 @ 006cef50  kind=gamemisc  attributed-by=role:callback  size=295 */

uint FUN_006cef50(uint param_1,byte *param_2,uint param_3)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  uint uVar18;
  
  uVar2 = param_1 & 0xffff;
  param_1 = param_1 >> 0x10;
  if (param_2 != (byte *)0x0) {
    while (param_3 != 0) {
      uVar1 = param_3;
      if (0x15af < param_3) {
        uVar1 = 0x15b0;
      }
      param_3 = param_3 - uVar1;
      if (0xf < (int)uVar1) {
        uVar18 = uVar1 >> 4;
        uVar1 = uVar1 + uVar18 * -0x10;
        do {
          iVar3 = uVar2 + *param_2;
          iVar4 = iVar3 + (uint)param_2[1];
          iVar5 = iVar4 + (uint)param_2[2];
          iVar6 = iVar5 + (uint)param_2[3];
          iVar7 = iVar6 + (uint)param_2[4];
          iVar8 = iVar7 + (uint)param_2[5];
          iVar9 = iVar8 + (uint)param_2[6];
          iVar10 = iVar9 + (uint)param_2[7];
          iVar11 = iVar10 + (uint)param_2[8];
          iVar12 = iVar11 + (uint)param_2[9];
          iVar13 = iVar12 + (uint)param_2[10];
          iVar14 = iVar13 + (uint)param_2[0xb];
          iVar15 = iVar14 + (uint)param_2[0xc];
          iVar16 = iVar15 + (uint)param_2[0xd];
          iVar17 = iVar16 + (uint)param_2[0xe];
          uVar2 = iVar17 + (uint)param_2[0xf];
          param_1 = param_1 + iVar3 + iVar4 + iVar5 + iVar6 + iVar7 + iVar8 + iVar9 + iVar10 +
                    iVar11 + iVar12 + iVar13 + iVar14 + iVar15 + iVar16 + iVar17 + uVar2;
          param_2 = param_2 + 0x10;
          uVar18 = uVar18 - 1;
        } while (uVar18 != 0);
      }
      for (; uVar1 != 0; uVar1 = uVar1 - 1) {
        uVar2 = uVar2 + *param_2;
        param_2 = param_2 + 1;
        param_1 = param_1 + uVar2;
      }
      uVar2 = uVar2 % 0xfff1;
      param_1 = param_1 % 0xfff1;
    }
    return param_1 << 0x10 | uVar2;
  }
  return 1;
}


/* FUN_006d30d0 @ 006d30d0  kind=gamemisc  attributed-by=role:callback  size=191 */

undefined4 FUN_006d30d0(int *param_1,int param_2,undefined4 param_3,int param_4)

{
  int iVar1;
  int iVar2;
  float *pfVar3;
  float *pfVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  
  if (0 < param_1[2]) {
    iVar9 = 0;
    if (*param_1 < 9) {
      if (0 < param_4) {
        do {
          iVar7 = FUN_006d3630();
          if (iVar7 == -1) {
            return 0xffffffff;
          }
          pfVar3 = (float *)(param_1[4] + *param_1 * iVar7 * 4);
          iVar7 = 0;
          switch(*param_1) {
          case 8:
            iVar5 = iVar9 * 4;
            iVar7 = 1;
            iVar9 = iVar9 + 1;
            *(float *)(param_2 + -4 + iVar9 * 4) = *pfVar3 + *(float *)(param_2 + iVar5);
          case 7:
            pfVar4 = pfVar3 + iVar7;
            iVar5 = iVar9 * 4;
            iVar7 = iVar7 + 1;
            iVar9 = iVar9 + 1;
            *(float *)(param_2 + -4 + iVar9 * 4) = *pfVar4 + *(float *)(param_2 + iVar5);
          case 6:
            pfVar4 = pfVar3 + iVar7;
            iVar5 = iVar9 * 4;
            iVar7 = iVar7 + 1;
            iVar9 = iVar9 + 1;
            *(float *)(param_2 + -4 + iVar9 * 4) = *pfVar4 + *(float *)(param_2 + iVar5);
          case 5:
            pfVar4 = pfVar3 + iVar7;
            iVar5 = iVar9 * 4;
            iVar7 = iVar7 + 1;
            iVar9 = iVar9 + 1;
            *(float *)(param_2 + -4 + iVar9 * 4) = *pfVar4 + *(float *)(param_2 + iVar5);
          case 4:
            pfVar4 = pfVar3 + iVar7;
            iVar5 = iVar9 * 4;
            iVar7 = iVar7 + 1;
            iVar9 = iVar9 + 1;
            *(float *)(param_2 + -4 + iVar9 * 4) = *pfVar4 + *(float *)(param_2 + iVar5);
          case 3:
            pfVar4 = pfVar3 + iVar7;
            iVar5 = iVar9 * 4;
            iVar7 = iVar7 + 1;
            iVar9 = iVar9 + 1;
            *(float *)(param_2 + -4 + iVar9 * 4) = *pfVar4 + *(float *)(param_2 + iVar5);
          case 2:
            pfVar4 = pfVar3 + iVar7;
            iVar5 = iVar9 * 4;
            iVar7 = iVar7 + 1;
            iVar9 = iVar9 + 1;
            *(float *)(param_2 + -4 + iVar9 * 4) = *pfVar4 + *(float *)(param_2 + iVar5);
          case 1:
            iVar5 = iVar9 * 4;
            iVar9 = iVar9 + 1;
            *(float *)(param_2 + -4 + iVar9 * 4) = pfVar3[iVar7] + *(float *)(param_2 + iVar5);
          }
        } while (iVar9 < param_4);
      }
    }
    else if (0 < param_4) {
      do {
        iVar7 = FUN_006d3630();
        if (iVar7 == -1) {
          return 0xffffffff;
        }
        iVar5 = *param_1;
        iVar6 = param_1[4];
        iVar8 = 0;
        if (0 < iVar5) {
          do {
            iVar1 = iVar8 * 4;
            iVar2 = iVar9 * 4;
            iVar8 = iVar8 + 1;
            iVar9 = iVar9 + 1;
            *(float *)(param_2 + -4 + iVar9 * 4) =
                 *(float *)(iVar6 + iVar5 * iVar7 * 4 + iVar1) + *(float *)(param_2 + iVar2);
          } while (iVar8 < *param_1);
        }
      } while (iVar9 < param_4);
      return 0;
    }
  }
  return 0;
}


/* FUN_006d3250 @ 006d3250  kind=gamemisc  attributed-by=role:callback  size=927 */

/* WARNING: Function: __alloca_probe_16 replaced with injection: alloca_probe */
/* WARNING: Unable to track spacebase fully for stack */

undefined4 FUN_006d3250(int *param_1,float *param_2,int *param_3,int param_4)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  float *pfVar6;
  float *pfVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  uint uVar11;
  int *piVar12;
  undefined4 uStack_38;
  int *local_14;
  int local_10;
  int local_8;
  
  if (0 < param_1[2]) {
    param_4 = param_4 / *param_1;
    uStack_38 = 0x6d327d;
    local_14 = (int *)(&stack0xffffffcc + param_4 * -8);
    (&uStack_38)[-param_4] = 0x6d328b;
    local_10 = 0;
    if (0 < param_4) {
      do {
        iVar10 = param_1[10];
        (&uStack_38)[param_4 * -2] = 0x6d32b7;
        iVar4 = FUN_00401d70();
        if (iVar4 < 0) {
          uVar11 = 0;
          iVar4 = param_1[2];
LAB_006d3347:
          (&uStack_38)[param_4 * -2] = 0x6d3353;
          uVar5 = FUN_00401d70();
          while ((int)uVar5 < 0) {
            if (iVar10 < 2) {
              if ((int)uVar5 < 0) goto LAB_006d34bc;
              break;
            }
            iVar10 = iVar10 + -1;
            (&uStack_38)[param_4 * -2] = 0x6d3372;
            uVar5 = FUN_00401d70();
          }
          uVar5 = uVar5 << 0x10 | uVar5 >> 0x10;
          uVar5 = (uVar5 >> 8 ^ uVar5 << 8) & 0xff00ff ^ uVar5 << 8;
          uVar5 = (uVar5 >> 4 ^ uVar5 << 4) & 0xf0f0f0f ^ uVar5 << 4;
          uVar5 = (uVar5 >> 2 ^ uVar5 * 4) & 0x33333333 ^ uVar5 * 4;
          iVar8 = iVar4 - uVar11;
          if (1 < iVar8) {
            do {
              uVar9 = iVar8 >> 1;
              uVar3 = (uint)(((uVar5 >> 1 ^ uVar5 * 2) & 0x55555555 ^ uVar5 * 2) <
                            *(uint *)(param_1[5] + (uVar9 + uVar11) * 4));
              iVar4 = iVar4 - (-uVar3 & uVar9);
              uVar11 = uVar11 + (uVar3 - 1 & uVar9);
              iVar8 = iVar4 - uVar11;
            } while (1 < iVar8);
          }
          iVar4 = param_3[4];
          if (iVar10 < *(char *)(param_1[7] + uVar11)) {
            uVar11 = param_3[1] + iVar10;
            if (iVar4 - ((int)(uVar11 + 7) >> 3) < *param_3) {
              param_3[3] = 0;
              *param_3 = iVar4;
              param_3[1] = 1;
            }
            else {
              iVar10 = (int)(uVar11 + ((int)uVar11 >> 0x1f & 7U)) >> 3;
              param_3[3] = param_3[3] + iVar10;
              *param_3 = iVar10 + *param_3;
              param_3[1] = uVar11 & 7;
            }
LAB_006d34bc:
            uVar11 = 0xffffffff;
          }
          else {
            uVar5 = param_3[1] + (int)*(char *)(param_1[7] + uVar11);
            if (iVar4 - ((int)(uVar5 + 7) >> 3) < *param_3) {
              param_3[3] = 0;
              *param_3 = iVar4;
              param_3[1] = 1;
            }
            else {
              iVar10 = (int)(uVar5 + ((int)uVar5 >> 0x1f & 7U)) >> 3;
              param_3[3] = param_3[3] + iVar10;
              *param_3 = iVar10 + *param_3;
              param_3[1] = uVar5 & 7;
            }
          }
        }
        else {
          uVar5 = *(uint *)(param_1[8] + iVar4 * 4);
          if ((int)uVar5 < 0) {
            uVar11 = (int)uVar5 >> 0xf & 0x7fff;
            iVar4 = param_1[2] - (uVar5 & 0x7fff);
            goto LAB_006d3347;
          }
          uVar11 = (int)*(char *)(param_1[7] + -1 + uVar5) + param_3[1];
          if (param_3[4] - ((int)(uVar11 + 7) >> 3) < *param_3) {
            param_3[3] = 0;
            *param_3 = param_3[4];
            param_3[1] = 1;
            uVar11 = uVar5 - 1;
          }
          else {
            iVar10 = (int)(uVar11 + ((int)uVar11 >> 0x1f & 7U)) >> 3;
            param_3[3] = param_3[3] + iVar10;
            param_3[1] = uVar11 & 7;
            *param_3 = iVar10 + *param_3;
            uVar11 = uVar5 - 1;
          }
        }
        local_14[param_4] = uVar11;
        if (uVar11 == 0xffffffff) {
          return 0xffffffff;
        }
        *local_14 = param_1[4] + *param_1 * uVar11 * 4;
        local_10 = local_10 + 1;
        local_14 = local_14 + 1;
      } while (local_10 < param_4);
    }
    iVar10 = 0;
    local_8 = 0;
    pfVar6 = param_2;
    if (0 < *param_1) {
      do {
        iVar4 = 0;
        if (3 < param_4) {
          iVar8 = (param_4 - 4U >> 2) + 1;
          iVar4 = iVar8 * 4;
          pfVar7 = pfVar6;
          piVar12 = (int *)(&stack0xffffffd4 + param_4 * -8);
          do {
            iVar1 = piVar12[-1];
            *pfVar7 = *(float *)(piVar12[-2] + iVar10 * 4) + *pfVar7;
            iVar2 = *piVar12;
            pfVar7[1] = *(float *)(iVar1 + iVar10 * 4) + pfVar7[1];
            iVar1 = piVar12[1];
            pfVar7[2] = *(float *)(iVar2 + iVar10 * 4) + pfVar7[2];
            pfVar7[3] = *(float *)(iVar1 + iVar10 * 4) + pfVar7[3];
            iVar8 = iVar8 + -1;
            pfVar7 = pfVar7 + 4;
            piVar12 = piVar12 + 4;
          } while (iVar8 != 0);
        }
        if (iVar4 < param_4) {
          pfVar7 = param_2 + local_8 + iVar4;
          do {
            iVar8 = iVar4 * 4;
            iVar4 = iVar4 + 1;
            *pfVar7 = *(float *)(*(int *)(&stack0xffffffcc + iVar8 + param_4 * -8) + iVar10 * 4) +
                      *pfVar7;
            pfVar7 = pfVar7 + 1;
          } while (iVar4 < param_4);
        }
        iVar10 = iVar10 + 1;
        local_8 = local_8 + param_4;
        pfVar6 = pfVar6 + param_4;
      } while (iVar10 < *param_1);
    }
  }
  return 0;
}


/* FUN_006d4870 @ 006d4870  kind=gamemisc  attributed-by=role:callback  size=41 */

int FUN_006d4870(undefined4 *param_1,undefined4 *param_2)

{
  return (uint)(*(float *)*param_1 < *(float *)*param_2) -
         (uint)(*(float *)*param_2 < *(float *)*param_1);
}


